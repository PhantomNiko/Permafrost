/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10011120
#define DAT_10011120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154cU)))
#undef DAT_10011121
#define DAT_10011121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154dU)))
#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005b0
 */

/* WARNING: Removing unreachable block (ram,0x100005ec) */

void recovered_100005b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_10011120 = 0;
    DAT_10011121 = 0;
    recovered_10000610();
    DAT_10011130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10011120
#undef DAT_10011121
#undef DAT_10011130

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_00280238
#define DAT_00280238 (*(uint8_t *)(0x280238U))
#undef DAT_0028023c
#define DAT_0028023c (*(uint8_t *)(0x28023cU))
#undef DAT_00280240
#define DAT_00280240 (*(uint8_t *)(0x280240U))
#undef DAT_00280248
#define DAT_00280248 (*(uint8_t *)(0x280248U))
#undef DAT_10011120
#define DAT_10011120 (*(char *)(((uintptr_t)pf_module_state + 0x154cU)))
#undef DAT_10011128
#define DAT_10011128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1554U)))
#undef DAT_10011138
#define DAT_10011138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1564U)))
#undef _DAT_00280088
#define _DAT_00280088 (*(uint *)(0x280088U))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#undef _DAT_00280238
#define _DAT_00280238 (*(int *)(0x280238U))
#undef _DAT_0028023c
#define _DAT_0028023c (*(uint *)(0x28023cU))
#define local_438 (*(ulong (*)[135])(pf_stack_frame + 24))
#define local_28 (*(ulong *)(pf_stack_frame + 1064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000610(void)

{
  unsigned char pf_stack_frame[1136] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;

  local_28 = 0;
  if (DAT_10011120 != '\0') {
    return;
  }
  DAT_10011128 = 0;
  DAT_10011138 = 0;
  uVar1 = 0x10;
  if (_DAT_0028008c < 0x10) {
    uVar1 = (ulong)_DAT_0028008c;
  }
  if ((_DAT_00280238 == 0x34364857) && (_DAT_0028023c != 0)) {
    uVar1 = 0x40;
    if (_DAT_0028023c < 0x40) {
      uVar1 = (ulong)_DAT_0028023c;
    }
    uVar8 = 0;
    uVar4 = 0;
    do {
      if (*(long *)(&DAT_00280248 + uVar4 * 0x10) != 0) {
        uVar6 = *(ulong *)(&DAT_00280240 + uVar4 * 0x10);
        uVar5 = *(long *)(&DAT_00280248 + uVar4 * 0x10) + uVar6;
        if ((0x300000 < uVar5) && (uVar6 < uVar5)) {
          if (uVar6 < 0x300001) {
            uVar6 = 0x300000;
          }
          if (uVar8 < 0x40) {
            if (uVar8 != 0) {
              puVar2 = local_438 + uVar8 * 2;
              uVar7 = uVar8;
              do {
                if (*puVar2 <= uVar6) goto LAB_100006a3;
                puVar2[2] = *puVar2;
                puVar2[3] = puVar2[1];
                puVar2 = puVar2 + -2;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            uVar7 = 0;
LAB_100006a3:
            local_438[uVar7 * 2 + 2] = uVar6;
            local_438[uVar7 * 2 + 3] = uVar5 - uVar6;
            uVar8 = uVar8 + 1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
LAB_100007ee:
    if (uVar8 != 0) {
      lVar11 = 1;
      if (uVar8 != 1) {
        lVar9 = uVar8 - 1;
        puVar2 = local_438 + 4;
        lVar10 = 1;
        do {
          uVar1 = local_438[lVar10 * 2 + 1] + local_438[lVar10 * 2];
          if (uVar1 < *puVar2) {
            lVar11 = lVar10 + 1;
            uVar1 = puVar2[1];
            local_438[lVar10 * 2 + 2] = *puVar2;
            local_438[lVar10 * 2 + 3] = uVar1;
          }
          else {
            uVar4 = *puVar2 + puVar2[1];
            lVar11 = lVar10;
            if (uVar1 < uVar4) {
              local_438[lVar10 * 2 + 1] = uVar4 - local_438[lVar10 * 2];
            }
          }
          puVar2 = puVar2 + 2;
          lVar9 = lVar9 + -1;
          lVar10 = lVar11;
        } while (lVar9 != 0);
        if (lVar11 == 0) goto LAB_100008b2;
      }
      puVar2 = local_438 + 3;
      do {
        local_438[1] = 0x1000089f;
        recovered_100065a0((long *)puVar2[-1],*puVar2,&local_28);
        puVar2 = puVar2 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      if (DAT_10011128 != 0) goto LAB_100008e9;
    }
  }
  else if (_DAT_0028008c != 0) {
    uVar8 = 0;
    uVar4 = 0;
    do {
      uVar6 = (ulong)*(uint *)(&DAT_00280090 + uVar4 * 8);
      uVar5 = *(uint *)(&DAT_00280094 + uVar4 * 8) + uVar6;
      if (0x300000 < uVar5 && (ulong)*(uint *)(&DAT_00280094 + uVar4 * 8) != 0) {
        if (uVar6 < 0x300001) {
          uVar6 = 0x300000;
        }
        if (uVar8 < 0x40) {
          if (uVar8 != 0) {
            puVar2 = local_438 + uVar8 * 2;
            uVar7 = uVar8;
            do {
              if (*puVar2 <= uVar6) goto LAB_10000765;
              puVar2[2] = *puVar2;
              puVar2[3] = puVar2[1];
              puVar2 = puVar2 + -2;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar7 = 0;
LAB_10000765:
          local_438[uVar7 * 2 + 2] = uVar6;
          local_438[uVar7 * 2 + 3] = uVar5 - uVar6;
          uVar8 = uVar8 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
    goto LAB_100007ee;
  }
LAB_100008b2:
  uVar3 = _DAT_00280088 & 0xfffffff0;
  if (_DAT_00280088 < 0x300001) {
    uVar3 = 0x4000000;
  }
  uVar1 = (ulong)uVar3;
  if (uVar3 < 0x300031) {
    uVar1 = 0x4000000;
  }
  local_438[1] = 0x100008e9;
  recovered_100065a0((long *)0x300000,uVar1 - 0x300000,&local_28);
LAB_100008e9:
  if (DAT_10011138 == 0) {
    DAT_10011138 = DAT_10011128;
  }
  DAT_10011120 = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_00280238
#undef DAT_0028023c
#undef DAT_00280240
#undef DAT_00280248
#undef DAT_10011120
#undef DAT_10011128
#undef DAT_10011138
#undef _DAT_00280088
#undef _DAT_0028008c
#undef _DAT_00280238
#undef _DAT_0028023c
#undef local_438
#undef local_28

#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000920
 */

/* WARNING: Removing unreachable block (ram,0x1000095c) */

void recovered_10000920(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000970(param_1,param_2,param_3);
    DAT_10011130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10011130

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_10011121
#define DAT_10011121 (*(char *)(((uintptr_t)pf_module_state + 0x154dU)))
#undef DAT_10011128
#define DAT_10011128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1554U)))
#undef DAT_10011138
#define DAT_10011138 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1564U)))
#define local_38 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000970
 */

bool recovered_10000970(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined8 in_RAX;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;

  bVar3 = param_3 == 0 || (param_2 == 0 || param_1 == 0);
  local_38 = CONCAT71((int7)((ulong)in_RAX >> 8),bVar3);
  if ((bVar3) || (DAT_10011121 != '\0')) {
    return false;
  }
  DAT_10011121 = 1;
  recovered_10000610();
  lVar4 = 0;
  do {
    plVar1 = *(long **)(param_1 + lVar4 * 8);
    uVar7 = *(ulong *)(param_2 + lVar4 * 8);
    plVar6 = (long *)((long)plVar1 + uVar7);
    if (CARRY8((ulong)plVar1,uVar7)) {
      plVar6 = (long *)0xffffffffffffffff;
    }
    if (~(ulong)plVar1 < uVar7) {
      DAT_10011121 = 0;
      return false;
    }
    if (plVar6 <= plVar1) {
      DAT_10011121 = 0;
      return false;
    }
    if (plVar1 < (long *)0x10000000 && (long *)0x8000000 < plVar6) {
      if (plVar1 < (long *)0x8000000) {
        uVar7 = 0x8000000 - (long)plVar1;
        if (~(ulong)plVar1 < uVar7) {
          DAT_10011121 = 0;
          return false;
        }
        uVar10 = (ulong)((int)plVar1 + 0xfU & 0xffffff0) - (long)plVar1;
        uVar8 = uVar7 - uVar10;
        if (uVar7 < uVar10 || uVar8 == 0) goto LAB_10000a7d;
        bVar3 = 0x30 < (uVar8 & 0xfffffffffffffff0);
      }
      else {
LAB_10000a7d:
        bVar3 = false;
      }
      if ((plVar6 < &DAT_10000001 ||
           0xffffffffffffffce < ((ulong)plVar6 & 0xfffffffffffffff0) - 0x10000031) && (!bVar3)) {
        DAT_10011121 = 0;
        return false;
      }
    }
    else {
      if ((long *)0xfffffffffffffff0 < plVar1) {
        DAT_10011121 = 0;
        return false;
      }
      uVar10 = ((ulong)((long)plVar1 + 0xf) & 0xfffffffffffffff0) - (long)plVar1;
      uVar8 = uVar7 - uVar10;
      if (uVar7 < uVar10 || uVar8 == 0) {
        DAT_10011121 = 0;
        return false;
      }
      if ((uVar8 & 0xfffffffffffffff0) < 0x31) {
        DAT_10011121 = 0;
        return false;
      }
    }
    plVar2 = DAT_10011128;
    if (lVar4 != 0) {
      lVar9 = 0;
      do {
        plVar12 = *(long **)(param_1 + lVar9 * 8);
        uVar7 = *(ulong *)(param_2 + lVar9 * 8);
        plVar11 = (long *)(uVar7 + (long)plVar12);
        if (CARRY8(uVar7,(ulong)plVar12)) {
          plVar11 = (long *)0xffffffffffffffff;
        }
        if ((plVar12 < plVar6) && (plVar1 < plVar11)) {
          DAT_10011121 = 0;
          return false;
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
      plVar12 = (long *)(*plVar2 + 0x20U + (long)plVar2);
      if (CARRY8(*plVar2 + 0x20U,(ulong)plVar2)) {
        plVar12 = (long *)0xffffffffffffffff;
      }
      if ((plVar2 < plVar6) && (plVar1 < plVar12)) {
        DAT_10011121 = 0;
        return false;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == param_3) {
      puVar5 = (ulong *)&DAT_10011128;
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        uVar7 = *puVar5;
        puVar5 = (ulong *)(uVar7 + 8);
      } while (uVar7 != 0);
      lVar4 = 0;
      local_38 = uVar8;
      do {
        recovered_100065a0(*(long **)(param_1 + lVar4 * 8),*(ulong *)(param_2 + lVar4 * 8),&local_38
                          );
        lVar4 = lVar4 + 1;
      } while (param_3 != lVar4);
      if (DAT_10011138 == (long *)0x0) {
        DAT_10011138 = DAT_10011128;
      }
      DAT_10011121 = 0;
      return local_38 != uVar8;
    }
  } while( true );
}

#undef DAT_10000001
#undef DAT_10011121
#undef DAT_10011128
#undef DAT_10011138
#undef local_38

#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
#define local_18 (*(undefined8 *)(pf_stack_frame + 24))
#define local_10 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb0
 */

/* WARNING: Removing unreachable block (ram,0x10000bec) */

void recovered_10000bb0(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    local_18 = param_1;
    local_10 = param_2;
    recovered_10000970((long)&local_18,(long)&local_10,1);
    DAT_10011130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10011130
#undef local_18
#undef local_10

#undef DAT_10011128
#define DAT_10011128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1554U)))
#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c10
 */

/* WARNING: Removing unreachable block (ram,0x10000c4c) */

ulong recovered_10000c10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;

  iVar1 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000610();
  uVar4 = 0;
  for (plVar2 = DAT_10011128; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      uVar4 = uVar4 + *plVar2;
    }
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_10011130 = 0;
  return uVar3;
}

#undef DAT_10011128
#undef DAT_10011130

#undef DAT_10011128
#define DAT_10011128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1554U)))
#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c90
 */

/* WARNING: Removing unreachable block (ram,0x10000ccc) */

long recovered_10000c90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  long *plVar3;

  iVar1 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000610();
  lVar2 = 0;
  for (plVar3 = DAT_10011128; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    if ((char)plVar3[3] == '\x01') {
      lVar2 = lVar2 + *plVar3;
    }
  }
  DAT_10011130 = 0;
  return lVar2;
}

#undef DAT_10011128
#undef DAT_10011130

#undef DAT_10011128
#define DAT_10011128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1554U)))
#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d00
 */

/* WARNING: Removing unreachable block (ram,0x10000d3c) */

ulong recovered_10000d00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;

  iVar2 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000610();
  uVar4 = 0;
  for (plVar1 = DAT_10011128; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar4 = uVar4 + *plVar1;
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_10011130 = 0;
  return uVar3;
}

#undef DAT_10011128
#undef DAT_10011130

#undef DAT_10011128
#define DAT_10011128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1554U)))
#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d90
 */

/* WARNING: Removing unreachable block (ram,0x10000dcc) */

long recovered_10000d90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  long lVar3;

  iVar2 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000610();
  lVar3 = 0;
  for (plVar1 = DAT_10011128; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar3 = lVar3 + *plVar1;
  }
  DAT_10011130 = 0;
  return lVar3;
}

#undef DAT_10011128
#undef DAT_10011130

#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e10
 */

/* WARNING: Removing unreachable block (ram,0x10000e4c) */

ulong * recovered_10000e10(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    puVar2 = recovered_10000e70(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10011130 = 0;
    return puVar2;
  }
  do {
  } while( true );
}

#undef DAT_10011130

#undef DAT_10011128
#define DAT_10011128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1554U)))
#undef DAT_10011138
#define DAT_10011138 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1564U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e70
 */

ulong * recovered_10000e70(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  uVar11 = param_1 + 0xf;
  if (0xf < uVar11) {
    recovered_10000610();
    puVar1 = DAT_10011128;
    puVar5 = DAT_10011138;
    if (DAT_10011138 == (ulong *)0x0) {
      puVar5 = DAT_10011128;
    }
    if (puVar5 != (ulong *)0x0) {
      uVar9 = uVar11 & 0xfffffffffffffff0;
      puVar2 = (ulong *)((long)param_2 + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar5;
      do {
        if ((char)puVar3[3] == '\x01') {
          uVar7 = *puVar3;
          uVar8 = uVar7 - uVar9;
          if (uVar9 <= uVar7) {
            puVar4 = puVar3 + 4;
            if (puVar4 < param_2) {
              if ((param_2 < (ulong *)0xfffffffffffffff1) && (puVar4 < (ulong *)0xffffffffffffffd0))
              {
                puVar6 = puVar3 + 10;
                if (puVar3 + 10 < puVar2) {
                  puVar6 = puVar2;
                }
                uVar10 = (long)puVar6 - (long)puVar4;
                puVar4 = puVar6;
                if (uVar10 < uVar7) goto LAB_10000f38;
              }
            }
            else {
              uVar10 = 0;
LAB_10000f38:
              if ((uVar9 - 1 <= (ulong)((long)param_3 - (long)puVar4) && puVar4 <= param_3) &&
                 (uVar9 <= uVar7 - uVar10 && uVar10 <= uVar7)) {
                if (uVar9 - 1 < uVar7) {
                  if (uVar8 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000f7d;
                  }
                  else if (uVar11 < 0xffffffffffffffc0) {
LAB_10000f7d:
                    if (uVar10 == 0) goto LAB_10000fe8;
                    if ((uVar9 + uVar10) - 1 < uVar7) {
                      if (uVar7 - (uVar10 + uVar9) < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000fcf;
                      }
                      else if (uVar10 + uVar9 < 0xffffffffffffffc0) {
LAB_10000fcf:
                        puVar3 = recovered_10006760(puVar3,puVar4);
                        if (puVar3 == (ulong *)0x0) {
                          return (ulong *)0x0;
                        }
                        uVar7 = *puVar3;
                        uVar8 = uVar7 - uVar9;
LAB_10000fe8:
                        if (uVar7 < uVar9 || uVar8 < 0x30) {
                          DAT_10011138 = (ulong *)puVar3[1];
                        }
                        else {
                          DAT_10011138 = (ulong *)((long)puVar3 + uVar9 + 0x20);
                          *(ulong *)((long)puVar3 + uVar9 + 0x20) = uVar8 - 0x20;
                          uVar11 = puVar3[1];
                          *(ulong *)((long)puVar3 + uVar9 + 0x28) = uVar11;
                          *(ulong **)((long)puVar3 + uVar9 + 0x30) = puVar3;
                          *(undefined1 *)((long)puVar3 + uVar9 + 0x38) = 1;
                          if (uVar11 != 0) {
                            *(ulong **)(uVar11 + 0x10) = DAT_10011138;
                          }
                          *puVar3 = uVar9;
                          puVar3[1] = (ulong)DAT_10011138;
                        }
                        *(undefined1 *)(puVar3 + 3) = 0;
                        if (DAT_10011138 == (ulong *)0x0) {
                          DAT_10011138 = DAT_10011128;
                        }
                        return puVar3 + 4;
                      }
                    }
                  }
                }
                *(undefined1 *)(puVar3 + 3) = 0;
              }
            }
          }
        }
        puVar4 = puVar3 + 1;
        puVar3 = puVar1;
        if ((ulong *)*puVar4 != (ulong *)0x0) {
          puVar3 = (ulong *)*puVar4;
        }
        if (puVar3 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        if (puVar3 == puVar5) {
          return (ulong *)0x0;
        }
      } while( true );
    }
  }
  return (ulong *)0x0;
}

#undef DAT_10011128
#undef DAT_10011138

#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001070
 */

/* WARNING: Removing unreachable block (ram,0x100010ac) */

void recovered_10001070(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000e70(param_1,(ulong *)0x0,param_2);
    DAT_10011130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10011130

#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010d0
 */

/* WARNING: Removing unreachable block (ram,0x1000110c) */

ulong * recovered_100010d0(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_3 < param_2) {
    puVar2 = (ulong *)0x0;
  }
  else {
    puVar2 = recovered_10000e70(param_1,param_2,param_3);
  }
  DAT_10011130 = 0;
  return puVar2;
}

#undef DAT_10011130

#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001130
 */

/* WARNING: Removing unreachable block (ram,0x1000116c) */

void recovered_10001130(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001180(param_1);
    DAT_10011130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10011130

#undef DAT_10011138
#define DAT_10011138 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1564U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001180
 */

void recovered_10001180(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;

  if (param_1 != 0) {
    recovered_10000610();
    puVar2 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    puVar3 = *(ulong **)(param_1 + -0x18);
    if ((puVar3 != (ulong *)0x0) && ((char)puVar3[3] == '\x01')) {
      uVar4 = *puVar2;
      while (((uVar4 < 0xffffffffffffffe0 && ((ulong *)(param_1 + uVar4) == puVar3)) &&
             (*puVar3 <= -uVar4 - 0x21))) {
        if (DAT_10011138 == puVar3) {
          DAT_10011138 = puVar2;
        }
        uVar4 = uVar4 + *puVar3 + 0x20;
        *(ulong *)(param_1 + -0x20) = uVar4;
        puVar3 = (ulong *)puVar3[1];
        *(ulong **)(param_1 + -0x18) = puVar3;
        if ((puVar3 == (ulong *)0x0) || (puVar3[2] = (ulong)puVar2, (char)puVar3[3] == '\0')) break;
      }
    }
    puVar3 = *(ulong **)(param_1 + -0x10);
    if ((puVar3 != (ulong *)0x0) &&
       (((char)puVar3[3] == '\x01' &&
        (uVar4 = *puVar3, (ulong *)((long)puVar3 + uVar4 + 0x20) == puVar2)))) {
      puVar2 = (ulong *)puVar3[1];
      if ((puVar2 != (ulong *)0x0) && ((char)puVar2[3] == '\x01')) {
        do {
          if (((0xffffffffffffffdf < uVar4) || ((ulong *)((long)puVar3 + uVar4 + 0x20) != puVar2))
             || (-uVar4 - 0x21 < *puVar2)) break;
          uVar4 = uVar4 + *puVar2 + 0x20;
          *puVar3 = uVar4;
          puVar1 = (ulong *)puVar2[1];
          puVar3[1] = (ulong)puVar1;
          if (puVar1 == (ulong *)0x0) break;
          if (DAT_10011138 == puVar2) {
            DAT_10011138 = puVar3;
          }
          puVar1[2] = (ulong)puVar3;
          puVar2 = puVar1;
        } while ((char)puVar1[3] != '\0');
      }
      puVar2 = puVar3;
    }
    DAT_10011138 = puVar2;
  }
  return;
}

#undef DAT_10011138

#undef DAT_10011130
#define DAT_10011130 (*(int *)(((uintptr_t)pf_module_state + 0x155cU)))
#undef DAT_10011138
#define DAT_10011138 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1564U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012a0
 */

/* WARNING: Removing unreachable block (ram,0x100012dc) */

ulong * recovered_100012a0(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;

  iVar7 = DAT_10011130;
  { __typeof__(DAT_10011130) pf_atomic_old = __atomic_exchange_n(&(DAT_10011130),1,__ATOMIC_SEQ_CST);
}
  if (iVar7 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (ulong *)0x0) {
    puVar16 = recovered_10000e70(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10011130 = 0;
    return puVar16;
  }
  if (param_2 == 0) {
    recovered_10001180((long)param_1);
    DAT_10011130 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_10011130 = 0;
    return (ulong *)0x0;
  }
  recovered_10000610();
  uVar12 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar16 = param_1 + -4;
  uVar11 = param_1[-4];
  if (uVar12 <= uVar11) {
    if (uVar11 <= uVar12 - 1) {
      DAT_10011130 = 0;
      return (ulong *)0x0;
    }
    if (uVar11 - uVar12 < 0x30) {
      if (uVar11 < 0xffffffffffffffe0) {
        DAT_10011130 = 0;
        return param_1;
      }
      DAT_10011130 = 0;
      return (ulong *)0x0;
    }
    if (0xffffffffffffffb0 < param_2) {
      DAT_10011130 = 0;
      return (ulong *)0x0;
    }
    DAT_10011138 = (ulong *)((long)param_1 + uVar12);
    *(ulong *)((long)param_1 + uVar12) = (uVar11 - uVar12) - 0x20;
    uVar11 = param_1[-3];
    *(ulong *)((long)param_1 + uVar12 + 8) = uVar11;
    *(ulong **)((long)param_1 + uVar12 + 0x10) = puVar16;
    *(undefined1 *)((long)param_1 + uVar12 + 0x18) = 1;
    if (uVar11 != 0) {
      *(ulong **)(uVar11 + 0x10) = DAT_10011138;
    }
    param_1[-4] = uVar12;
    param_1[-3] = (ulong)DAT_10011138;
    DAT_10011130 = 0;
    return param_1;
  }
  uVar13 = uVar11;
  uVar17 = uVar11;
  puVar8 = puVar16;
  do {
    puVar14 = (ulong *)puVar8[1];
    if ((((puVar14 == (ulong *)0x0) || ((char)puVar14[3] != '\x01')) ||
        (0xffffffffffffffdf < uVar13)) ||
       (((ulong *)((long)puVar8 + uVar17 + 0x20) != puVar14 ||
        (uVar17 = *puVar14, -uVar13 - 0x21 < uVar17)))) break;
    uVar13 = uVar13 + uVar17 + 0x20;
    puVar8 = puVar14;
  } while (uVar13 < uVar12);
  if (uVar12 - 1 < uVar13) {
    if (uVar13 - uVar12 < 0x30) {
      if (uVar13 < 0xffffffffffffffe0) goto LAB_10001474;
    }
    else if (param_2 < 0xffffffffffffffb1) {
LAB_10001474:
      puVar8 = (ulong *)param_1[-3];
      puVar14 = DAT_10011138;
      do {
        if (((puVar8 == (ulong *)0x0) || ((char)puVar8[3] != '\x01')) ||
           ((0xffffffffffffffdf < uVar11 ||
            (((ulong *)((long)param_1 + uVar11) != puVar8 || (-uVar11 - 0x21 < *puVar8)))))) break;
        if (puVar14 == puVar8) {
          puVar14 = puVar16;
          DAT_10011138 = puVar16;
        }
        uVar11 = uVar11 + *puVar8 + 0x20;
        param_1[-4] = uVar11;
        puVar8 = (ulong *)puVar8[1];
        param_1[-3] = (ulong)puVar8;
        if (puVar8 != (ulong *)0x0) {
          puVar8[2] = (ulong)puVar16;
        }
      } while (uVar11 < uVar12);
      if (uVar11 < uVar12) {
        DAT_10011130 = 0;
        return (ulong *)0x0;
      }
      uVar9 = recovered_100067d0(puVar16,uVar12);
      if ((char)uVar9 != '\0') {
        DAT_10011138 = (ulong *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_10011130 = 0;
      return param_1;
    }
  }
  puVar8 = recovered_10000e70(uVar12,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  if (puVar8 == (ulong *)0x0) {
    DAT_10011130 = 0;
    return (ulong *)0x0;
  }
  if (*puVar16 < uVar12) {
    uVar12 = *puVar16;
  }
  puVar16 = param_1;
  puVar14 = puVar8;
  if (uVar12 < 0x10) {
LAB_10001526:
    if (uVar12 == 0) goto LAB_100017df;
  }
  else if ((((uint)puVar8 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)puVar8 & 7) == 0) {
      puVar15 = puVar8;
      puVar10 = param_1;
LAB_10001711:
      uVar11 = uVar12;
    }
    else {
      puVar15 = (ulong *)((long)puVar8 + 1);
      *(char *)puVar8 = (char)*param_1;
      uVar11 = uVar12 - 1;
      if (((ulong)puVar15 & 7) == 0 || uVar11 == 0) {
        puVar10 = (ulong *)((long)param_1 + 1);
      }
      else {
        puVar15 = (ulong *)((long)puVar8 + 2);
        *(undefined1 *)((long)puVar8 + 1) = *(undefined1 *)((long)param_1 + 1);
        uVar11 = uVar12 - 2;
        if (((ulong)puVar15 & 7) == 0 || uVar11 == 0) {
          puVar10 = (ulong *)((long)param_1 + 2);
        }
        else {
          puVar15 = (ulong *)((long)puVar8 + 3);
          *(undefined1 *)((long)puVar8 + 2) = *(undefined1 *)((long)param_1 + 2);
          uVar11 = uVar12 - 3;
          if (((ulong)puVar15 & 7) == 0 || uVar11 == 0) {
            puVar10 = (ulong *)((long)param_1 + 3);
          }
          else {
            puVar15 = (ulong *)((long)puVar8 + 4);
            *(undefined1 *)((long)puVar8 + 3) = *(undefined1 *)((long)param_1 + 3);
            uVar11 = uVar12 - 4;
            if (((ulong)puVar15 & 7) == 0 || uVar11 == 0) {
              puVar10 = (ulong *)((long)param_1 + 4);
            }
            else {
              puVar15 = (ulong *)((long)puVar8 + 5);
              *(undefined1 *)((long)puVar8 + 4) = *(undefined1 *)((long)param_1 + 4);
              uVar11 = uVar12 - 5;
              if (((ulong)puVar15 & 7) == 0 || uVar11 == 0) {
                puVar10 = (ulong *)((long)param_1 + 5);
              }
              else {
                puVar15 = (ulong *)((long)puVar8 + 6);
                *(undefined1 *)((long)puVar8 + 5) = *(undefined1 *)((long)param_1 + 5);
                uVar11 = uVar12 - 6;
                if (((ulong)puVar15 & 7) == 0 || uVar11 == 0) {
                  puVar10 = (ulong *)((long)param_1 + 6);
                }
                else {
                  puVar15 = (ulong *)((long)puVar8 + 7);
                  *(undefined1 *)((long)puVar8 + 6) = *(undefined1 *)((long)param_1 + 6);
                  uVar11 = uVar12 - 7;
                  if (((ulong)puVar15 & 7) != 0 && uVar11 != 0) {
                    *(undefined1 *)((long)puVar8 + 7) = *(undefined1 *)((long)param_1 + 7);
                    uVar12 = uVar12 - 8;
                    puVar15 = puVar8 + 1;
                    puVar10 = param_1 + 1;
                    goto LAB_10001711;
                  }
                  puVar10 = (ulong *)((long)param_1 + 7);
                }
              }
            }
          }
        }
      }
    }
    if (uVar11 < 0x20) {
      uVar12 = uVar11;
    }
    else {
      uVar12 = uVar11 - 0x20;
      if ((uVar12 & 0x20) == 0) {
        *puVar15 = *puVar10;
        puVar15[1] = puVar10[1];
        puVar15[2] = puVar10[2];
        puVar15[3] = puVar10[3];
        puVar15 = puVar15 + 4;
        puVar10 = puVar10 + 4;
        uVar11 = uVar12;
      }
      if (0x1f < uVar12) {
        do {
          *puVar15 = *puVar10;
          puVar15[1] = puVar10[1];
          puVar15[2] = puVar10[2];
          puVar15[3] = puVar10[3];
          puVar15[4] = puVar10[4];
          puVar15[5] = puVar10[5];
          puVar15[6] = puVar10[6];
          puVar15[7] = puVar10[7];
          puVar15 = puVar15 + 8;
          puVar10 = puVar10 + 8;
          uVar11 = uVar11 - 0x40;
          uVar12 = uVar11;
        } while (0x1f < uVar11);
      }
    }
    if (uVar12 < 8) {
      puVar16 = puVar10;
      puVar14 = puVar15;
    }
    else {
      if ((0x27 < uVar12 - 8) && (0x1f < (ulong)((long)puVar15 - (long)puVar10))) {
        uVar11 = (uVar12 - 8 >> 3) + 1;
        uVar17 = uVar11 & 0xfffffffffffffffc;
        puVar16 = puVar10 + uVar17;
        puVar14 = puVar15 + uVar17;
        uVar12 = uVar12 + uVar17 * -8;
        uVar13 = 0;
        do {
          uVar4 = (puVar10 + uVar13)[1];
          uVar5 = puVar10[uVar13 + 2];
          uVar6 = (puVar10 + uVar13 + 2)[1];
          puVar15[uVar13] = puVar10[uVar13];
          (puVar15 + uVar13)[1] = uVar4;
          puVar15[uVar13 + 2] = uVar5;
          (puVar15 + uVar13 + 2)[1] = uVar6;
          uVar13 = uVar13 + 4;
        } while (uVar17 != uVar13);
        puVar10 = puVar16;
        puVar15 = puVar14;
        if (uVar11 == uVar17) goto LAB_10001526;
      }
      do {
        puVar16 = puVar10 + 1;
        *puVar15 = *puVar10;
        puVar14 = puVar15 + 1;
        uVar12 = uVar12 - 8;
        puVar10 = puVar16;
        puVar15 = puVar14;
      } while (7 < uVar12);
    }
    goto LAB_10001526;
  }
  uVar11 = uVar12;
  puVar15 = puVar14;
  if ((3 < uVar12) && (0x1f < (ulong)((long)puVar14 - (long)puVar16))) {
    if (uVar12 < 0x20) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar12 & 0xffffffffffffffe0;
      uVar11 = 0;
      do {
        uVar9 = ((undefined8 *)((long)puVar16 + uVar11))[1];
        puVar1 = (undefined8 *)((long)puVar16 + uVar11 + 0x10);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        *(undefined8 *)((long)puVar14 + uVar11) = *(undefined8 *)((long)puVar16 + uVar11);
        ((undefined8 *)((long)puVar14 + uVar11))[1] = uVar9;
        puVar1 = (undefined8 *)((long)puVar14 + uVar11 + 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        uVar11 = uVar11 + 0x20;
      } while (uVar17 != uVar11);
      if (uVar12 == uVar17) goto LAB_100017df;
      if ((uVar12 & 0x1c) == 0) {
        puVar16 = (ulong *)((long)puVar16 + uVar17);
        puVar15 = (ulong *)((long)puVar14 + uVar17);
        uVar11 = (ulong)((uint)uVar12 & 0x1f);
        goto LAB_10001734;
      }
    }
    uVar13 = uVar12 & 0xfffffffffffffffc;
    uVar11 = (ulong)((uint)uVar12 & 3);
    puVar15 = (ulong *)((long)puVar14 + uVar13);
    do {
      *(undefined4 *)((long)puVar14 + uVar17) = *(undefined4 *)((long)puVar16 + uVar17);
      uVar17 = uVar17 + 4;
    } while (uVar13 != uVar17);
    puVar16 = (ulong *)((long)puVar16 + uVar13);
    if (uVar12 == uVar13) goto LAB_100017df;
  }
LAB_10001734:
  uVar12 = uVar11 - 1;
  if ((uVar11 & 7) != 0) {
    uVar17 = 0;
    do {
      *(undefined1 *)((long)puVar15 + uVar17) = *(undefined1 *)((long)puVar16 + uVar17);
      uVar17 = uVar17 + 1;
    } while ((uVar11 & 7) != uVar17);
    uVar11 = uVar11 - uVar17;
    puVar15 = (ulong *)((long)puVar15 + uVar17);
    puVar16 = (ulong *)((long)puVar16 + uVar17);
  }
  if (6 < uVar12) {
    uVar12 = 0;
    do {
      *(undefined1 *)((long)puVar15 + uVar12) = *(undefined1 *)((long)puVar16 + uVar12);
      *(undefined1 *)((long)puVar15 + uVar12 + 1) = *(undefined1 *)((long)puVar16 + uVar12 + 1);
      *(undefined1 *)((long)puVar15 + uVar12 + 2) = *(undefined1 *)((long)puVar16 + uVar12 + 2);
      *(undefined1 *)((long)puVar15 + uVar12 + 3) = *(undefined1 *)((long)puVar16 + uVar12 + 3);
      *(undefined1 *)((long)puVar15 + uVar12 + 4) = *(undefined1 *)((long)puVar16 + uVar12 + 4);
      *(undefined1 *)((long)puVar15 + uVar12 + 5) = *(undefined1 *)((long)puVar16 + uVar12 + 5);
      *(undefined1 *)((long)puVar15 + uVar12 + 6) = *(undefined1 *)((long)puVar16 + uVar12 + 6);
      *(undefined1 *)((long)puVar15 + uVar12 + 7) = *(undefined1 *)((long)puVar16 + uVar12 + 7);
      uVar12 = uVar12 + 8;
    } while (uVar11 != uVar12);
  }
LAB_100017df:
  recovered_10001180((long)param_1);
  DAT_10011130 = 0;
  return puVar8;
}

#undef DAT_10011130
#undef DAT_10011138

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001950(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  ulong uVar3;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return 0;
    }
    uVar1 = (uint)param_1;
    bVar2 = (byte)param_2;
    if (param_2 < 0x20) {
      uVar3 = (ulong)(uVar1 << (bVar2 & 0x1f));
      uVar1 = (int)(param_1 >> 0x20) << (bVar2 & 0x1f) | uVar1 >> 0x20 - (bVar2 & 0x1f);
    }
    else {
      uVar1 = uVar1 << (bVar2 & 0x1f);
      uVar3 = 0;
    }
    param_1 = (ulong)uVar1 << 0x20 | uVar3;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001990(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return 0;
    }
    bVar1 = (byte)param_2;
    uVar2 = (uint)(param_1 >> 0x20);
    if (param_2 < 0x20) {
      uVar3 = (uint)param_1 >> (bVar1 & 0x1f) | uVar2 << 0x20 - (bVar1 & 0x1f);
      uVar4 = (ulong)(uVar2 >> (bVar1 & 0x1f)) << 0x20;
    }
    else {
      uVar3 = uVar2 >> (bVar1 & 0x1f);
      uVar4 = 0;
    }
    param_1 = uVar3 | uVar4;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100019d0(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return param_1 >> 0x3f;
    }
    bVar1 = (byte)param_2;
    iVar3 = (int)((ulong)param_1 >> 0x20);
    if (param_2 < 0x20) {
      uVar2 = (uint)param_1 >> (bVar1 & 0x1f) | iVar3 << 0x20 - (bVar1 & 0x1f);
      iVar3 = iVar3 >> (bVar1 & 0x1f);
    }
    else {
      uVar2 = iVar3 >> (bVar1 & 0x1f);
      iVar3 = iVar3 >> 0x1f;
    }
    param_1 = CONCAT44(iVar3,uVar2);
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001a20(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 0x3f;
  lVar5 = 0;
  uVar2 = 0;
  do {
    uVar1 = (ulong)((param_1 >> (uVar3 & 0x3f) & 1) != 0) + lVar5 * 2;
    uVar6 = 0;
    uVar7 = 0;
    if (param_2 <= uVar1) {
      uVar6 = 1L << ((byte)uVar3 & 0x3f);
      uVar7 = param_2;
    }
    uVar4 = uVar3 - 1;
    uVar1 = (ulong)((param_1 >> (uVar4 & 0x3f) & 1) != 0) + (uVar1 - uVar7) * 2;
    uVar7 = 0;
    uVar8 = 0;
    if (param_2 <= uVar1) {
      uVar7 = 1L << ((byte)uVar4 & 0x3f);
      uVar8 = param_2;
    }
    uVar2 = uVar2 | uVar6 | uVar7;
    lVar5 = uVar1 - uVar8;
    uVar3 = uVar3 - 2;
  } while (uVar4 != 0);
  return uVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10001ac0(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 0x3f;
  lVar2 = 0;
  do {
    uVar1 = (ulong)((param_1 >> (uVar3 & 0x3f) & 1) != 0) + lVar2 * 2;
    uVar5 = 0;
    if (param_2 <= uVar1) {
      uVar5 = param_2;
    }
    uVar4 = uVar3 - 1;
    uVar1 = (ulong)((param_1 >> (uVar4 & 0x3f) & 1) != 0) + (uVar1 - uVar5) * 2;
    uVar5 = 0;
    if (param_2 <= uVar1) {
      uVar5 = param_2;
    }
    lVar2 = uVar1 - uVar5;
    uVar3 = uVar3 - 2;
  } while (uVar4 != 0);
  return lVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001b30(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;

  if (param_2 == 0) {
    return 0;
  }
  uVar2 = -param_1;
  if ((long)-param_1 < 0) {
    uVar2 = param_1;
  }
  uVar5 = -param_2;
  if ((long)-param_2 < 0) {
    uVar5 = param_2;
  }
  uVar3 = 0x3f;
  lVar8 = 0;
  uVar7 = 0;
  do {
    uVar1 = (ulong)((uVar2 >> (uVar3 & 0x3f) & 1) != 0) + lVar8 * 2;
    uVar6 = 0;
    uVar9 = 0;
    if (uVar5 <= uVar1) {
      uVar6 = uVar5;
      uVar9 = 1L << ((byte)uVar3 & 0x3f);
    }
    uVar4 = uVar3 - 1;
    uVar1 = (ulong)((uVar2 >> (uVar4 & 0x3f) & 1) != 0) + (uVar1 - uVar6) * 2;
    uVar6 = 0;
    uVar10 = 0;
    if (uVar5 <= uVar1) {
      uVar6 = uVar5;
      uVar10 = 1L << ((byte)uVar4 & 0x3f);
    }
    uVar7 = uVar7 | uVar9 | uVar10;
    lVar8 = uVar1 - uVar6;
    uVar3 = uVar3 - 2;
  } while (uVar4 != 0);
  uVar2 = -uVar7;
  if (-1 < (long)(param_2 ^ param_1)) {
    uVar2 = uVar7;
  }
  return uVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10001c00(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  if (param_2 == 0) {
    return 0;
  }
  uVar2 = -param_1;
  if ((long)-param_1 < 0) {
    uVar2 = param_1;
  }
  uVar4 = -param_2;
  if ((long)-param_2 < 0) {
    uVar4 = param_2;
  }
  uVar5 = 0x3f;
  lVar7 = 0;
  do {
    uVar1 = (ulong)((uVar2 >> (uVar5 & 0x3f) & 1) != 0) + lVar7 * 2;
    uVar8 = 0;
    if (uVar4 <= uVar1) {
      uVar8 = uVar4;
    }
    uVar6 = uVar5 - 1;
    uVar1 = (ulong)((uVar2 >> (uVar6 & 0x3f) & 1) != 0) + (uVar1 - uVar8) * 2;
    uVar8 = 0;
    if (uVar4 <= uVar1) {
      uVar8 = uVar4;
    }
    lVar7 = uVar1 - uVar8;
    uVar5 = uVar5 - 2;
  } while (uVar6 != 0);
  lVar3 = -lVar7;
  if (-1 < (long)param_1) {
    lVar3 = lVar7;
  }
  return lVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10001c90(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10001cb0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001cc0(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10001d10(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001d60(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db0
 */

void * recovered_10001db0(void *dst,void *src,ulong bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *in_R8;
  undefined7 uVar8;
  ulong uVar9;
  ulong uVar10;

  pvVar5 = dst;
  if (bytes < 0x10) {
LAB_10001dcf:
    if (bytes == 0) {
      return pvVar5;
    }
  }
  else if ((((uint)src ^ (uint)dst) & 7) == 0) {
    if (((ulong)dst & 7) == 0) {
LAB_10001fbe:
      puVar7 = dst;
    }
    else {
      puVar7 = (undefined8 *)((long)dst + 1);
      *(undefined1 *)dst = *(undefined1 *)src;
      uVar6 = bytes - 1;
      uVar8 = (undefined7)((ulong)in_R8 >> 8);
      in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
      if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
        src = (void *)((long)src + 1);
        bytes = uVar6;
      }
      else {
        puVar7 = (undefined8 *)((long)dst + 2);
        *(undefined1 *)((long)dst + 1) = *(undefined1 *)((long)src + 1);
        uVar6 = bytes - 2;
        in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
        if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
          src = (void *)((long)src + 2);
          bytes = uVar6;
        }
        else {
          puVar7 = (undefined8 *)((long)dst + 3);
          *(undefined1 *)((long)dst + 2) = *(undefined1 *)((long)src + 2);
          uVar6 = bytes - 3;
          in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
          if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
            src = (void *)((long)src + 3);
            bytes = uVar6;
          }
          else {
            puVar7 = (undefined8 *)((long)dst + 4);
            *(undefined1 *)((long)dst + 3) = *(undefined1 *)((long)src + 3);
            uVar6 = bytes - 4;
            in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
            if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
              src = (void *)((long)src + 4);
              bytes = uVar6;
            }
            else {
              puVar7 = (undefined8 *)((long)dst + 5);
              *(undefined1 *)((long)dst + 4) = *(undefined1 *)((long)src + 4);
              uVar6 = bytes - 5;
              in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
              if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                src = (void *)((long)src + 5);
                bytes = uVar6;
              }
              else {
                puVar7 = (undefined8 *)((long)dst + 6);
                *(undefined1 *)((long)dst + 5) = *(undefined1 *)((long)src + 5);
                uVar6 = bytes - 6;
                in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                  src = (void *)((long)src + 6);
                  bytes = uVar6;
                }
                else {
                  puVar7 = (undefined8 *)((long)dst + 7);
                  *(undefined1 *)((long)dst + 6) = *(undefined1 *)((long)src + 6);
                  uVar6 = bytes - 7;
                  in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                  if (((ulong)puVar7 & 7) != 0 && uVar6 != 0) {
                    puVar1 = (undefined1 *)((long)src + 7);
                    src = (void *)((long)src + 8);
                    *(undefined1 *)((long)dst + 7) = *puVar1;
                    bytes = bytes - 8;
                    dst = (undefined8 *)((long)dst + 8);
                    goto LAB_10001fbe;
                  }
                  src = (void *)((long)src + 7);
                  bytes = uVar6;
                }
              }
            }
          }
        }
      }
    }
    if (bytes < 0x20) {
      in_R8 = src;
    }
    else {
      uVar6 = bytes - 0x20;
      uVar9 = bytes;
      if ((uVar6 & 0x20) == 0) {
        *puVar7 = *(undefined8 *)src;
        puVar7[1] = *(undefined8 *)((long)src + 8);
        puVar7[2] = *(undefined8 *)((long)src + 0x10);
        puVar7[3] = *(undefined8 *)((long)src + 0x18);
        puVar7 = puVar7 + 4;
        src = (void *)((long)src + 0x20);
        uVar9 = uVar6;
        in_R8 = src;
      }
      bytes = uVar6;
      if (0x1f < uVar6) {
        do {
          *puVar7 = *(undefined8 *)src;
          puVar7[1] = *(undefined8 *)((long)src + 8);
          puVar7[2] = *(undefined8 *)((long)src + 0x10);
          puVar7[3] = *(undefined8 *)((long)src + 0x18);
          puVar7[4] = *(undefined8 *)((long)src + 0x20);
          puVar7[5] = *(undefined8 *)((long)src + 0x28);
          puVar7[6] = *(undefined8 *)((long)src + 0x30);
          puVar7[7] = *(undefined8 *)((long)src + 0x38);
          puVar7 = puVar7 + 8;
          src = (void *)((long)src + 0x40);
          uVar9 = uVar9 - 0x40;
          bytes = uVar9;
          in_R8 = src;
        } while (0x1f < uVar9);
      }
    }
    if (bytes < 8) {
      src = in_R8;
      dst = puVar7;
    }
    else {
      if ((0x27 < bytes - 8) && (0x1f < (ulong)((long)puVar7 - (long)in_R8))) {
        uVar6 = (bytes - 8 >> 3) + 1;
        uVar9 = uVar6 & 0xfffffffffffffffc;
        src = in_R8 + uVar9;
        dst = puVar7 + uVar9;
        bytes = bytes + uVar9 * -8;
        uVar10 = 0;
        do {
          uVar2 = (in_R8 + uVar10)[1];
          uVar3 = in_R8[uVar10 + 2];
          uVar4 = (in_R8 + uVar10 + 2)[1];
          puVar7[uVar10] = in_R8[uVar10];
          (puVar7 + uVar10)[1] = uVar2;
          puVar7[uVar10 + 2] = uVar3;
          (puVar7 + uVar10 + 2)[1] = uVar4;
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
        in_R8 = src;
        puVar7 = dst;
        if (uVar6 == uVar9) goto LAB_10001dcf;
      }
      do {
        src = in_R8 + 1;
        *puVar7 = *in_R8;
        dst = puVar7 + 1;
        bytes = bytes - 8;
        in_R8 = src;
        puVar7 = dst;
      } while (7 < bytes);
    }
    goto LAB_10001dcf;
  }
  uVar6 = bytes;
  if ((3 < bytes) && (0x1f < (ulong)((long)dst - (long)src))) {
    if (bytes < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = bytes & 0xffffffffffffffe0;
      uVar6 = 0;
      do {
        uVar2 = ((undefined8 *)((long)src + uVar6))[1];
        puVar7 = (undefined8 *)((long)src + uVar6 + 0x10);
        uVar3 = *puVar7;
        uVar4 = puVar7[1];
        *(undefined8 *)((long)dst + uVar6) = *(undefined8 *)((long)src + uVar6);
        ((undefined8 *)((long)dst + uVar6))[1] = uVar2;
        puVar7 = (undefined8 *)((long)dst + uVar6 + 0x10);
        *puVar7 = uVar3;
        puVar7[1] = uVar4;
        uVar6 = uVar6 + 0x20;
      } while (uVar9 != uVar6);
      if (bytes == uVar9) {
        return pvVar5;
      }
      if ((bytes & 0x1c) == 0) {
        src = (void *)((long)src + uVar9);
        dst = (void *)((long)dst + uVar9);
        uVar6 = (ulong)((uint)bytes & 0x1f);
        goto LAB_10001fe0;
      }
    }
    uVar10 = bytes & 0xfffffffffffffffc;
    uVar6 = (ulong)((uint)bytes & 3);
    do {
      *(undefined4 *)((long)dst + uVar9) = *(undefined4 *)((long)src + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar10 != uVar9);
    dst = (undefined8 *)((long)dst + uVar10);
    src = (undefined8 *)((long)src + uVar10);
    if (bytes == uVar10) {
      return pvVar5;
    }
  }
LAB_10001fe0:
  uVar9 = uVar6 - 1;
  if ((uVar6 & 7) != 0) {
    uVar10 = 0;
    do {
      *(undefined1 *)((long)dst + uVar10) = *(undefined1 *)((long)src + uVar10);
      uVar10 = uVar10 + 1;
    } while ((uVar6 & 7) != uVar10);
    uVar6 = uVar6 - uVar10;
    dst = (void *)((long)dst + uVar10);
    src = (void *)((long)src + uVar10);
  }
  if (6 < uVar9) {
    uVar9 = 0;
    do {
      *(undefined1 *)((long)dst + uVar9) = *(undefined1 *)((long)src + uVar9);
      *(undefined1 *)((long)dst + uVar9 + 1) = *(undefined1 *)((long)src + uVar9 + 1);
      *(undefined1 *)((long)dst + uVar9 + 2) = *(undefined1 *)((long)src + uVar9 + 2);
      *(undefined1 *)((long)dst + uVar9 + 3) = *(undefined1 *)((long)src + uVar9 + 3);
      *(undefined1 *)((long)dst + uVar9 + 4) = *(undefined1 *)((long)src + uVar9 + 4);
      *(undefined1 *)((long)dst + uVar9 + 5) = *(undefined1 *)((long)src + uVar9 + 5);
      *(undefined1 *)((long)dst + uVar9 + 6) = *(undefined1 *)((long)src + uVar9 + 6);
      *(undefined1 *)((long)dst + uVar9 + 7) = *(undefined1 *)((long)src + uVar9 + 7);
      uVar9 = uVar9 + 8;
    } while (uVar6 != uVar9);
  }
  return pvVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021f0
 */

void * recovered_100021f0(void *dst,void *src,ulong bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *in_R8;
  ulong uVar12;
  undefined7 uVar14;
  ulong uVar13;
  ulong in_R9;
  bool bVar15;
  void *in_R10;
  undefined7 uVar17;
  ulong uVar16;
  bool bVar18;

  pvVar6 = dst;
  if (bytes == 0 || dst == src) {
    return pvVar6;
  }
  if ((dst < src) || (pvVar7 = (void *)((long)src + bytes), pvVar7 <= dst)) {
    if ((0xf < bytes) && ((((uint)src ^ (uint)dst) & 7) == 0)) {
      if (((ulong)dst & 7) == 0) {
LAB_1000258a:
        puVar8 = dst;
      }
      else {
        puVar8 = (undefined8 *)((long)dst + 1);
        *(undefined1 *)dst = *(undefined1 *)src;
        uVar11 = bytes - 1;
        uVar14 = (undefined7)((ulong)in_R8 >> 8);
        in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
        if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
          src = (void *)((long)src + 1);
          bytes = uVar11;
        }
        else {
          puVar8 = (undefined8 *)((long)dst + 2);
          *(undefined1 *)((long)dst + 1) = *(undefined1 *)((long)src + 1);
          uVar11 = bytes - 2;
          in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
          if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
            src = (void *)((long)src + 2);
            bytes = uVar11;
          }
          else {
            puVar8 = (undefined8 *)((long)dst + 3);
            *(undefined1 *)((long)dst + 2) = *(undefined1 *)((long)src + 2);
            uVar11 = bytes - 3;
            in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
            if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
              src = (void *)((long)src + 3);
              bytes = uVar11;
            }
            else {
              puVar8 = (undefined8 *)((long)dst + 4);
              *(undefined1 *)((long)dst + 3) = *(undefined1 *)((long)src + 3);
              uVar11 = bytes - 4;
              in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
              if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                src = (void *)((long)src + 4);
                bytes = uVar11;
              }
              else {
                puVar8 = (undefined8 *)((long)dst + 5);
                *(undefined1 *)((long)dst + 4) = *(undefined1 *)((long)src + 4);
                uVar11 = bytes - 5;
                in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                  src = (void *)((long)src + 5);
                  bytes = uVar11;
                }
                else {
                  puVar8 = (undefined8 *)((long)dst + 6);
                  *(undefined1 *)((long)dst + 5) = *(undefined1 *)((long)src + 5);
                  uVar11 = bytes - 6;
                  in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                  if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                    src = (void *)((long)src + 6);
                    bytes = uVar11;
                  }
                  else {
                    puVar8 = (undefined8 *)((long)dst + 7);
                    *(undefined1 *)((long)dst + 6) = *(undefined1 *)((long)src + 6);
                    uVar11 = bytes - 7;
                    in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                    if (((ulong)puVar8 & 7) != 0 && uVar11 != 0) {
                      puVar1 = (undefined1 *)((long)src + 7);
                      src = (void *)((long)src + 8);
                      *(undefined1 *)((long)dst + 7) = *puVar1;
                      bytes = bytes - 8;
                      dst = (undefined8 *)((long)dst + 8);
                      goto LAB_1000258a;
                    }
                    src = (void *)((long)src + 7);
                    bytes = uVar11;
                  }
                }
              }
            }
          }
        }
      }
      if (bytes < 0x20) {
        in_R8 = src;
      }
      else {
        uVar11 = bytes - 0x20;
        uVar16 = bytes;
        if ((uVar11 & 0x20) == 0) {
          *puVar8 = *(undefined8 *)src;
          puVar8[1] = *(undefined8 *)((long)src + 8);
          puVar8[2] = *(undefined8 *)((long)src + 0x10);
          puVar8[3] = *(undefined8 *)((long)src + 0x18);
          puVar8 = puVar8 + 4;
          src = (void *)((long)src + 0x20);
          uVar16 = uVar11;
          in_R8 = src;
        }
        bytes = uVar11;
        if (0x1f < uVar11) {
          bytes = uVar16;
          do {
            *puVar8 = *(undefined8 *)src;
            puVar8[1] = *(undefined8 *)((long)src + 8);
            puVar8[2] = *(undefined8 *)((long)src + 0x10);
            puVar8[3] = *(undefined8 *)((long)src + 0x18);
            puVar8[4] = *(undefined8 *)((long)src + 0x20);
            puVar8[5] = *(undefined8 *)((long)src + 0x28);
            puVar8[6] = *(undefined8 *)((long)src + 0x30);
            puVar8[7] = *(undefined8 *)((long)src + 0x38);
            puVar8 = puVar8 + 8;
            src = (void *)((long)src + 0x40);
            bytes = bytes - 0x40;
            in_R8 = src;
          } while (0x1f < bytes);
        }
      }
      if (bytes < 8) {
        src = in_R8;
        dst = puVar8;
      }
      else {
        if ((0x27 < bytes - 8) && (0x1f < (ulong)((long)puVar8 - (long)in_R8))) {
          uVar11 = (bytes - 8 >> 3) + 1;
          uVar16 = uVar11 & 0xfffffffffffffffc;
          src = in_R8 + uVar16;
          dst = puVar8 + uVar16;
          bytes = bytes + uVar16 * -8;
          uVar12 = 0;
          do {
            uVar3 = (in_R8 + uVar12)[1];
            uVar4 = in_R8[uVar12 + 2];
            uVar5 = (in_R8 + uVar12 + 2)[1];
            puVar8[uVar12] = in_R8[uVar12];
            (puVar8 + uVar12)[1] = uVar3;
            puVar8[uVar12 + 2] = uVar4;
            (puVar8 + uVar12 + 2)[1] = uVar5;
            uVar12 = uVar12 + 4;
          } while (uVar16 != uVar12);
          in_R8 = src;
          puVar8 = dst;
          if (uVar11 == uVar16) goto LAB_100027e8;
        }
        do {
          uVar3 = *in_R8;
          in_R8 = in_R8 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
          bytes = bytes - 8;
          src = in_R8;
          dst = puVar8;
        } while (7 < bytes);
      }
LAB_100027e8:
      if (bytes == 0) {
        return pvVar6;
      }
    }
    uVar11 = bytes;
    if ((3 < bytes) && (0x1f < (ulong)((long)dst - (long)src))) {
      if (bytes < 0x20) {
        uVar16 = 0;
      }
      else {
        uVar16 = bytes & 0xffffffffffffffe0;
        uVar11 = 0;
        do {
          uVar3 = ((undefined8 *)((long)src + uVar11))[1];
          puVar8 = (undefined8 *)((long)src + uVar11 + 0x10);
          uVar4 = *puVar8;
          uVar5 = puVar8[1];
          *(undefined8 *)((long)dst + uVar11) = *(undefined8 *)((long)src + uVar11);
          ((undefined8 *)((long)dst + uVar11))[1] = uVar3;
          puVar8 = (undefined8 *)((long)dst + uVar11 + 0x10);
          *puVar8 = uVar4;
          puVar8[1] = uVar5;
          uVar11 = uVar11 + 0x20;
        } while (uVar16 != uVar11);
        if (bytes == uVar16) {
          return pvVar6;
        }
        if ((bytes & 0x1c) == 0) {
          src = (void *)((long)src + uVar16);
          dst = (void *)((long)dst + uVar16);
          uVar11 = (ulong)((uint)bytes & 0x1f);
          goto LAB_100025ac;
        }
      }
      uVar12 = bytes & 0xfffffffffffffffc;
      uVar11 = (ulong)((uint)bytes & 3);
      do {
        *(undefined4 *)((long)dst + uVar16) = *(undefined4 *)((long)src + uVar16);
        uVar16 = uVar16 + 4;
      } while (uVar12 != uVar16);
      dst = (undefined8 *)((long)dst + uVar12);
      src = (undefined8 *)((long)src + uVar12);
      if (bytes == uVar12) {
        return pvVar6;
      }
    }
LAB_100025ac:
    uVar16 = uVar11 - 1;
    if ((uVar11 & 7) != 0) {
      uVar12 = 0;
      do {
        *(undefined1 *)((long)dst + uVar12) = *(undefined1 *)((long)src + uVar12);
        uVar12 = uVar12 + 1;
      } while ((uVar11 & 7) != uVar12);
      uVar11 = uVar11 - uVar12;
      dst = (void *)((long)dst + uVar12);
      src = (void *)((long)src + uVar12);
    }
    if (uVar16 < 7) {
      return pvVar6;
    }
    uVar16 = 0;
    do {
      *(undefined1 *)((long)dst + uVar16) = *(undefined1 *)((long)src + uVar16);
      *(undefined1 *)((long)dst + uVar16 + 1) = *(undefined1 *)((long)src + uVar16 + 1);
      *(undefined1 *)((long)dst + uVar16 + 2) = *(undefined1 *)((long)src + uVar16 + 2);
      *(undefined1 *)((long)dst + uVar16 + 3) = *(undefined1 *)((long)src + uVar16 + 3);
      *(undefined1 *)((long)dst + uVar16 + 4) = *(undefined1 *)((long)src + uVar16 + 4);
      *(undefined1 *)((long)dst + uVar16 + 5) = *(undefined1 *)((long)src + uVar16 + 5);
      *(undefined1 *)((long)dst + uVar16 + 6) = *(undefined1 *)((long)src + uVar16 + 6);
      *(undefined1 *)((long)dst + uVar16 + 7) = *(undefined1 *)((long)src + uVar16 + 7);
      uVar16 = uVar16 + 8;
    } while (uVar11 != uVar16);
    return pvVar6;
  }
  uVar11 = (long)dst + bytes;
  if ((0xf < bytes) && ((((uint)pvVar7 ^ (uint)uVar11) & 7) == 0)) {
    if ((uVar11 & 7) == 0) {
LAB_1000237e:
      uVar16 = uVar11;
    }
    else {
      uVar16 = uVar11 - 1;
      *(undefined1 *)(uVar11 - 1) = *(undefined1 *)((long)pvVar7 - 1);
      uVar12 = bytes - 1;
      uVar14 = (undefined7)(in_R9 >> 8);
      in_R9 = CONCAT71(uVar14,uVar12 == 0);
      uVar17 = (undefined7)((ulong)in_R10 >> 8);
      bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
      in_R10 = (void *)CONCAT71(uVar17,bVar15);
      if (bVar15) {
        pvVar7 = (void *)((long)pvVar7 - 1);
        bytes = uVar12;
      }
      else {
        uVar16 = uVar11 - 2;
        *(undefined1 *)(uVar11 - 2) = *(undefined1 *)((long)pvVar7 - 2);
        uVar12 = bytes - 2;
        in_R9 = CONCAT71(uVar14,uVar12 == 0);
        bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
        in_R10 = (void *)CONCAT71(uVar17,bVar15);
        if (bVar15) {
          pvVar7 = (void *)((long)pvVar7 - 2);
          bytes = uVar12;
        }
        else {
          uVar16 = uVar11 - 3;
          *(undefined1 *)(uVar11 - 3) = *(undefined1 *)((long)pvVar7 - 3);
          uVar12 = bytes - 3;
          in_R9 = CONCAT71(uVar14,uVar12 == 0);
          bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
          in_R10 = (void *)CONCAT71(uVar17,bVar15);
          if (bVar15) {
            pvVar7 = (void *)((long)pvVar7 - 3);
            bytes = uVar12;
          }
          else {
            uVar16 = uVar11 - 4;
            *(undefined1 *)(uVar11 - 4) = *(undefined1 *)((long)pvVar7 - 4);
            uVar12 = bytes - 4;
            in_R9 = CONCAT71(uVar14,uVar12 == 0);
            bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
            in_R10 = (void *)CONCAT71(uVar17,bVar15);
            if (bVar15) {
              pvVar7 = (void *)((long)pvVar7 - 4);
              bytes = uVar12;
            }
            else {
              uVar16 = uVar11 - 5;
              *(undefined1 *)(uVar11 - 5) = *(undefined1 *)((long)pvVar7 - 5);
              uVar12 = bytes - 5;
              in_R9 = CONCAT71(uVar14,uVar12 == 0);
              bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
              in_R10 = (void *)CONCAT71(uVar17,bVar15);
              if (bVar15) {
                pvVar7 = (void *)((long)pvVar7 - 5);
                bytes = uVar12;
              }
              else {
                uVar16 = uVar11 - 6;
                *(undefined1 *)(uVar11 - 6) = *(undefined1 *)((long)pvVar7 - 6);
                uVar12 = bytes - 6;
                in_R9 = CONCAT71(uVar14,uVar12 == 0);
                bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
                in_R10 = (void *)CONCAT71(uVar17,bVar15);
                if (bVar15) {
                  pvVar7 = (void *)((long)pvVar7 - 6);
                  bytes = uVar12;
                }
                else {
                  uVar16 = uVar11 - 7;
                  *(undefined1 *)(uVar11 - 7) = *(undefined1 *)((long)pvVar7 - 7);
                  bVar15 = bytes - 7 == 0;
                  in_R9 = CONCAT71(uVar14,bVar15);
                  bVar18 = (uVar16 & 7) == 0;
                  in_R10 = (void *)CONCAT71(uVar17,bVar18 || bVar15);
                  if (!bVar18 && !bVar15) {
                    puVar1 = (undefined1 *)((long)pvVar7 - 8);
                    pvVar7 = (void *)((long)pvVar7 - 8);
                    *(undefined1 *)(uVar11 - 8) = *puVar1;
                    uVar11 = uVar11 - 8;
                    bytes = bytes - 8;
                    goto LAB_1000237e;
                  }
                  pvVar7 = (void *)((long)pvVar7 - 7);
                  bytes = bytes - 7;
                }
              }
            }
          }
        }
      }
    }
    if (bytes < 0x20) {
      in_R10 = pvVar7;
    }
    else {
      uVar11 = bytes - 0x20;
      pvVar9 = pvVar7;
      uVar12 = uVar16;
      uVar13 = bytes;
      if ((uVar11 & 0x20) == 0) {
        uVar12 = uVar16 - 0x20;
        pvVar9 = (void *)((long)pvVar7 - 0x20);
        *(undefined8 *)(uVar16 - 8) = *(undefined8 *)((long)pvVar7 - 8);
        *(undefined8 *)(uVar16 - 0x10) = *(undefined8 *)((long)pvVar7 - 0x10);
        *(undefined8 *)(uVar16 - 0x18) = *(undefined8 *)((long)pvVar7 - 0x18);
        *(undefined8 *)(uVar16 - 0x20) = *(undefined8 *)((long)pvVar7 - 0x20);
        uVar13 = uVar11;
        in_R9 = uVar12;
        in_R10 = pvVar9;
      }
      uVar16 = in_R9;
      bytes = uVar11;
      if (0x1f < uVar11) {
        bytes = uVar13;
        do {
          *(undefined8 *)(uVar12 - 8) = *(undefined8 *)((long)pvVar9 - 8);
          *(undefined8 *)(uVar12 - 0x10) = *(undefined8 *)((long)pvVar9 - 0x10);
          *(undefined8 *)(uVar12 - 0x18) = *(undefined8 *)((long)pvVar9 - 0x18);
          *(undefined8 *)(uVar12 - 0x20) = *(undefined8 *)((long)pvVar9 - 0x20);
          uVar16 = uVar12 - 0x40;
          in_R10 = (void *)((long)pvVar9 - 0x40);
          *(undefined8 *)(uVar12 - 0x28) = *(undefined8 *)((long)pvVar9 - 0x28);
          *(undefined8 *)(uVar12 - 0x30) = *(undefined8 *)((long)pvVar9 - 0x30);
          *(undefined8 *)(uVar12 - 0x38) = *(undefined8 *)((long)pvVar9 - 0x38);
          *(undefined8 *)(uVar12 - 0x40) = *(undefined8 *)((long)pvVar9 - 0x40);
          bytes = bytes - 0x40;
          pvVar9 = in_R10;
          uVar12 = uVar16;
        } while (0x1f < bytes);
      }
    }
    if (bytes < 8) {
      pvVar7 = in_R10;
      uVar11 = uVar16;
    }
    else {
      if ((0x27 < bytes - 8) && (0x1f < (long)in_R10 - uVar16)) {
        uVar12 = (bytes - 8 >> 3) + 1;
        uVar13 = uVar12 & 0xfffffffffffffffc;
        pvVar7 = (void *)((long)in_R10 + uVar13 * -8);
        uVar11 = uVar16 + uVar13 * -8;
        bytes = bytes + uVar13 * -8;
        lVar10 = 0;
        do {
          puVar8 = (undefined8 *)((long)in_R10 + lVar10 * 8 + -0x20);
          uVar3 = *puVar8;
          uVar4 = puVar8[1];
          puVar8 = (undefined8 *)((long)in_R10 + lVar10 * 8 + -0x10);
          uVar5 = puVar8[1];
          puVar2 = (undefined8 *)((uVar16 - 0x10) + lVar10 * 8);
          *puVar2 = *puVar8;
          puVar2[1] = uVar5;
          puVar8 = (undefined8 *)((uVar16 - 0x20) + lVar10 * 8);
          *puVar8 = uVar3;
          puVar8[1] = uVar4;
          lVar10 = lVar10 + -4;
        } while (-lVar10 != uVar13);
        in_R10 = pvVar7;
        uVar16 = uVar11;
        if (uVar12 == uVar13) goto LAB_1000294a;
      }
      do {
        puVar8 = (undefined8 *)((long)in_R10 - 8);
        in_R10 = (void *)((long)in_R10 - 8);
        *(undefined8 *)(uVar16 - 8) = *puVar8;
        uVar16 = uVar16 - 8;
        bytes = bytes - 8;
        pvVar7 = in_R10;
        uVar11 = uVar16;
      } while (7 < bytes);
    }
LAB_1000294a:
    if (bytes == 0) {
      return pvVar6;
    }
  }
  if ((3 < bytes) && (0xf < (long)pvVar7 - uVar11)) {
    if (bytes < 0x10) {
      uVar16 = 0;
    }
    else {
      uVar16 = bytes & 0xfffffffffffffff0;
      lVar10 = 0;
      do {
        puVar8 = (undefined8 *)((long)pvVar7 + lVar10 + -0x10);
        uVar3 = puVar8[1];
        puVar2 = (undefined8 *)((uVar11 - 0x10) + lVar10);
        *puVar2 = *puVar8;
        puVar2[1] = uVar3;
        lVar10 = lVar10 + -0x10;
      } while (-lVar10 != uVar16);
      if (bytes == uVar16) {
        return pvVar6;
      }
      if ((bytes & 0xc) == 0) {
        bytes = (ulong)((uint)bytes & 0xf);
        uVar11 = uVar11 - uVar16;
        pvVar7 = (void *)((long)pvVar7 - uVar16);
        goto LAB_10002a0f;
      }
    }
    uVar12 = bytes & 0xfffffffffffffffc;
    lVar10 = -uVar16;
    do {
      *(undefined4 *)((uVar11 - 4) + lVar10) = *(undefined4 *)((long)pvVar7 + lVar10 + -4);
      lVar10 = lVar10 + -4;
    } while (-lVar10 != uVar12);
    bVar15 = bytes == uVar12;
    pvVar7 = (void *)((long)pvVar7 - uVar12);
    uVar11 = uVar11 - uVar12;
    bytes = (ulong)((uint)bytes & 3);
    if (bVar15) {
      return pvVar6;
    }
  }
LAB_10002a0f:
  uVar16 = bytes - 1;
  if ((bytes & 7) != 0) {
    uVar12 = 0;
    do {
      puVar1 = (undefined1 *)((long)pvVar7 - 1);
      pvVar7 = (void *)((long)pvVar7 - 1);
      *(undefined1 *)(uVar11 - 1) = *puVar1;
      uVar11 = uVar11 - 1;
      uVar12 = uVar12 + 1;
    } while ((bytes & 7) != uVar12);
    bytes = bytes - uVar12;
  }
  if (6 < uVar16) {
    lVar10 = 0;
    do {
      *(undefined1 *)((uVar11 - 1) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -1);
      *(undefined1 *)((uVar11 - 2) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -2);
      *(undefined1 *)((uVar11 - 3) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -3);
      *(undefined1 *)((uVar11 - 4) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -4);
      *(undefined1 *)((uVar11 - 5) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -5);
      *(undefined1 *)((uVar11 - 6) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -6);
      *(undefined1 *)((uVar11 - 7) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -7);
      *(undefined1 *)((uVar11 - 8) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -8);
      lVar10 = lVar10 + -8;
    } while (-lVar10 != bytes);
  }
  return pvVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ab0
 */

void * recovered_10002ab0(void *dst,int byte,ulong bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  uint128 auVar13;

  pvVar3 = dst;
  uVar8 = (undefined1)byte;
  if (0xf < bytes) {
    iVar4 = (byte & 0xffU) * 0x1010101;
    if (((ulong)dst & 7) == 0) {
LAB_10002bfd:
      puVar9 = dst;
      uVar6 = bytes;
    }
    else {
      *(undefined1 *)dst = uVar8;
      puVar9 = (undefined8 *)((long)dst + 1U);
      uVar6 = bytes - 1;
      if (((long)dst + 1U & 7) != 0 && bytes - 1 != 0) {
        *(undefined1 *)((long)dst + 1) = uVar8;
        puVar9 = (undefined8 *)((long)dst + 2U);
        uVar6 = bytes - 2;
        if (((long)dst + 2U & 7) != 0 && bytes - 2 != 0) {
          *(undefined1 *)((long)dst + 2) = uVar8;
          puVar9 = (undefined8 *)((long)dst + 3U);
          uVar6 = bytes - 3;
          if (((long)dst + 3U & 7) != 0 && bytes - 3 != 0) {
            *(undefined1 *)((long)dst + 3) = uVar8;
            puVar9 = (undefined8 *)((long)dst + 4U);
            uVar6 = bytes - 4;
            if (((long)dst + 4U & 7) != 0 && bytes - 4 != 0) {
              *(undefined1 *)((long)dst + 4) = uVar8;
              puVar9 = (undefined8 *)((long)dst + 5U);
              uVar6 = bytes - 5;
              if (((long)dst + 5U & 7) != 0 && bytes - 5 != 0) {
                *(undefined1 *)((long)dst + 5) = uVar8;
                puVar9 = (undefined8 *)((long)dst + 6U);
                uVar6 = bytes - 6;
                if (((long)dst + 6U & 7) != 0 && bytes - 6 != 0) {
                  *(undefined1 *)((long)dst + 6) = uVar8;
                  puVar9 = (undefined8 *)((long)dst + 7U);
                  uVar6 = bytes - 7;
                  if (((long)dst + 7U & 7) != 0 && bytes - 7 != 0) {
                    *(undefined1 *)((long)dst + 7) = uVar8;
                    bytes = bytes - 8;
                    dst = (undefined8 *)((long)dst + 8);
                    goto LAB_10002bfd;
                  }
                }
              }
            }
          }
        }
      }
    }
    bytes = uVar6;
    uVar5 = CONCAT44(iVar4,iVar4);
    if (0x1f < bytes) {
      uVar6 = bytes - 0x20;
      uVar7 = ((uint)(uVar6 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar7 == 0) {
        uVar10 = bytes;
        bytes = 0;
      }
      else {
        uVar10 = 0;
        do {
          *(undefined8 *)((long)puVar9 + uVar10) = uVar5;
          *(undefined8 *)((long)puVar9 + uVar10 + 8) = uVar5;
          *(undefined8 *)((long)puVar9 + uVar10 + 0x10) = uVar5;
          *(undefined8 *)((long)puVar9 + uVar10 + 0x18) = uVar5;
          uVar10 = uVar10 + 0x20;
        } while (uVar7 << 5 != uVar10);
        puVar9 = (undefined8 *)((long)puVar9 + uVar10);
        uVar10 = bytes - uVar10;
        bytes = uVar10;
      }
      if (0x5f < uVar6) {
        bytes = uVar10;
        do {
          *puVar9 = uVar5;
          puVar9[1] = uVar5;
          puVar9[2] = uVar5;
          puVar9[3] = uVar5;
          puVar9[4] = uVar5;
          puVar9[5] = uVar5;
          puVar9[6] = uVar5;
          puVar9[7] = uVar5;
          puVar9[8] = uVar5;
          puVar9[9] = uVar5;
          puVar9[10] = uVar5;
          puVar9[0xb] = uVar5;
          puVar9[0xc] = uVar5;
          puVar9[0xd] = uVar5;
          puVar9[0xe] = uVar5;
          puVar9[0xf] = uVar5;
          puVar9 = puVar9 + 0x10;
          bytes = bytes - 0x80;
        } while (0x1f < bytes);
      }
    }
    dst = puVar9;
    if (7 < bytes) {
      if (0x17 < bytes - 8) {
        uVar6 = (bytes - 8 >> 3) + 1;
        uVar10 = uVar6 & 0xfffffffffffffffc;
        dst = puVar9 + uVar10;
        bytes = bytes + uVar10 * -8;
        uVar11 = 0;
        do {
          piVar1 = (int *)(puVar9 + uVar11);
          *piVar1 = iVar4;
          piVar1[1] = iVar4;
          piVar1[2] = iVar4;
          piVar1[3] = iVar4;
          piVar1 = (int *)(puVar9 + uVar11 + 2);
          *piVar1 = iVar4;
          piVar1[1] = iVar4;
          piVar1[2] = iVar4;
          piVar1[3] = iVar4;
          uVar11 = uVar11 + 4;
        } while (uVar10 != uVar11);
        if (uVar6 == uVar10) goto LAB_10002d31;
      }
      do {
        *(undefined8 *)dst = uVar5;
        dst = (void *)((long)dst + 8);
        bytes = bytes - 8;
      } while (7 < bytes);
    }
  }
LAB_10002d31:
  if (bytes == 0) {
    return pvVar3;
  }
  if (bytes < 4) {
LAB_10002d40:
    uVar10 = bytes;
    puVar9 = dst;
  }
  else {
    if (bytes < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = bytes & 0xffffffffffffffe0;
      auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
      uVar12 = PF_PART4(auVar13, 0);
      uVar10 = 0;
      do {
        puVar2 = (undefined4 *)((long)dst + uVar10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        puVar2 = (undefined4 *)((long)dst + uVar10 + 0x10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        uVar10 = uVar10 + 0x20;
      } while (uVar6 != uVar10);
      if (bytes == uVar6) {
        return pvVar3;
      }
      if ((bytes & 0x1c) == 0) {
        dst = (void *)((long)dst + uVar6);
        bytes = (ulong)((uint)bytes & 0x1f);
        goto LAB_10002d40;
      }
    }
    uVar11 = bytes & 0xfffffffffffffffc;
    uVar10 = (ulong)((uint)bytes & 3);
    puVar9 = (undefined8 *)((long)dst + uVar11);
    auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
    do {
      *(int *)((long)dst + uVar6) = PF_PART4(auVar13, 0);
      uVar6 = uVar6 + 4;
    } while (uVar11 != uVar6);
    if (bytes == uVar11) {
      return pvVar3;
    }
  }
  uVar6 = 0;
  do {
    *(undefined1 *)((long)puVar9 + uVar6) = uVar8;
    uVar6 = uVar6 + 1;
  } while (uVar10 != uVar6);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e00
 */

void recovered_10002e00(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;

  uVar1 = param_2;
  puVar4 = (undefined8 *)param_1;
  if (0xf < param_2) {
    if ((param_1 & 7U) != 0) {
      puVar4 = (undefined8 *)(param_1 + 1);
      *(undefined1 *)param_1 = 0;
      uVar1 = param_2 - 1;
      if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
        puVar4 = (undefined8 *)(param_1 + 2);
        *(undefined1 *)(param_1 + 1) = 0;
        uVar1 = param_2 - 2;
        if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
          puVar4 = (undefined8 *)(param_1 + 3);
          *(undefined1 *)(param_1 + 2) = 0;
          uVar1 = param_2 - 3;
          if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
            puVar4 = (undefined8 *)(param_1 + 4);
            *(undefined1 *)(param_1 + 3) = 0;
            uVar1 = param_2 - 4;
            if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
              puVar4 = (undefined8 *)(param_1 + 5);
              *(undefined1 *)(param_1 + 4) = 0;
              uVar1 = param_2 - 5;
              if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                puVar4 = (undefined8 *)(param_1 + 6);
                *(undefined1 *)(param_1 + 5) = 0;
                uVar1 = param_2 - 6;
                if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                  puVar4 = (undefined8 *)(param_1 + 7);
                  *(undefined1 *)(param_1 + 6) = 0;
                  uVar1 = param_2 - 7;
                  if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                    *(undefined1 *)(param_1 + 7) = 0;
                    puVar4 = (undefined8 *)(param_1 + 8);
                    uVar1 = param_2 - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (0x1f < uVar1) {
      uVar2 = uVar1 - 0x20;
      uVar3 = ((uint)(uVar2 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar3 == 0) {
        uVar5 = uVar1;
        uVar1 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)((long)puVar4 + uVar5) = 0;
          ((undefined8 *)((long)puVar4 + uVar5))[1] = 0;
          puVar6 = (undefined8 *)((long)puVar4 + uVar5 + 0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar5 = uVar5 + 0x20;
        } while (uVar3 << 5 != uVar5);
        puVar4 = (undefined8 *)((long)puVar4 + uVar5);
        uVar5 = uVar1 - uVar5;
        uVar1 = uVar5;
      }
      if (0x5f < uVar2) {
        uVar1 = uVar5;
        do {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          puVar4[0xc] = 0;
          puVar4[0xd] = 0;
          puVar4[0xe] = 0;
          puVar4[0xf] = 0;
          puVar4 = puVar4 + 0x10;
          uVar1 = uVar1 - 0x80;
        } while (0x1f < uVar1);
      }
    }
    if (7 < uVar1) {
      if (uVar1 - 8 < 0x18) {
        puVar6 = puVar4;
      }
      else {
        uVar2 = (uVar1 - 8 >> 3) + 1;
        uVar5 = uVar2 & 0xfffffffffffffffc;
        puVar6 = puVar4 + uVar5;
        uVar1 = uVar1 + uVar5 * -8;
        uVar7 = 0;
        do {
          puVar4[uVar7] = 0;
          (puVar4 + uVar7)[1] = 0;
          puVar4[uVar7 + 2] = 0;
          (puVar4 + uVar7 + 2)[1] = 0;
          uVar7 = uVar7 + 4;
        } while (uVar5 != uVar7);
        puVar4 = puVar6;
        if (uVar2 == uVar5) goto LAB_10003025;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar1 = uVar1 - 8;
        puVar4 = puVar6;
      } while (7 < uVar1);
    }
  }
LAB_10003025:
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  puVar6 = puVar4;
  if (7 < uVar1) {
    if (uVar1 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar1 & 0xffffffffffffffe0;
      uVar2 = 0;
      do {
        *(undefined8 *)((long)puVar4 + uVar2) = 0;
        ((undefined8 *)((long)puVar4 + uVar2))[1] = 0;
        puVar6 = (undefined8 *)((long)puVar4 + uVar2 + 0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar2 = uVar2 + 0x20;
      } while (uVar5 != uVar2);
      if (uVar1 == uVar5) {
        return;
      }
      if ((uVar1 & 0x18) == 0) {
        puVar6 = (undefined8 *)((long)puVar4 + uVar5);
        uVar2 = (ulong)((uint)uVar1 & 0x1f);
        goto LAB_100030a6;
      }
    }
    uVar7 = uVar1 & 0xfffffffffffffff8;
    uVar2 = (ulong)((uint)uVar1 & 7);
    puVar6 = (undefined8 *)((long)puVar4 + uVar7);
    do {
      *(undefined8 *)((long)puVar4 + uVar5) = 0;
      uVar5 = uVar5 + 8;
    } while (uVar7 != uVar5);
    if (uVar1 == uVar7) {
      return;
    }
  }
LAB_100030a6:
  uVar1 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar2 != uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d0
 */

void recovered_100030d0(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;

  uVar1 = param_2;
  puVar4 = (undefined8 *)param_1;
  if (0xf < param_2) {
    if ((param_1 & 7U) != 0) {
      puVar4 = (undefined8 *)(param_1 + 1);
      *(undefined1 *)param_1 = 0;
      uVar1 = param_2 - 1;
      if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
        puVar4 = (undefined8 *)(param_1 + 2);
        *(undefined1 *)(param_1 + 1) = 0;
        uVar1 = param_2 - 2;
        if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
          puVar4 = (undefined8 *)(param_1 + 3);
          *(undefined1 *)(param_1 + 2) = 0;
          uVar1 = param_2 - 3;
          if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
            puVar4 = (undefined8 *)(param_1 + 4);
            *(undefined1 *)(param_1 + 3) = 0;
            uVar1 = param_2 - 4;
            if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
              puVar4 = (undefined8 *)(param_1 + 5);
              *(undefined1 *)(param_1 + 4) = 0;
              uVar1 = param_2 - 5;
              if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                puVar4 = (undefined8 *)(param_1 + 6);
                *(undefined1 *)(param_1 + 5) = 0;
                uVar1 = param_2 - 6;
                if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                  puVar4 = (undefined8 *)(param_1 + 7);
                  *(undefined1 *)(param_1 + 6) = 0;
                  uVar1 = param_2 - 7;
                  if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                    *(undefined1 *)(param_1 + 7) = 0;
                    puVar4 = (undefined8 *)(param_1 + 8);
                    uVar1 = param_2 - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (0x1f < uVar1) {
      uVar2 = uVar1 - 0x20;
      uVar3 = ((uint)(uVar2 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar3 == 0) {
        uVar5 = uVar1;
        uVar1 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)((long)puVar4 + uVar5) = 0;
          ((undefined8 *)((long)puVar4 + uVar5))[1] = 0;
          puVar6 = (undefined8 *)((long)puVar4 + uVar5 + 0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar5 = uVar5 + 0x20;
        } while (uVar3 << 5 != uVar5);
        puVar4 = (undefined8 *)((long)puVar4 + uVar5);
        uVar5 = uVar1 - uVar5;
        uVar1 = uVar5;
      }
      if (0x5f < uVar2) {
        uVar1 = uVar5;
        do {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          puVar4[0xc] = 0;
          puVar4[0xd] = 0;
          puVar4[0xe] = 0;
          puVar4[0xf] = 0;
          puVar4 = puVar4 + 0x10;
          uVar1 = uVar1 - 0x80;
        } while (0x1f < uVar1);
      }
    }
    if (7 < uVar1) {
      if (uVar1 - 8 < 0x18) {
        puVar6 = puVar4;
      }
      else {
        uVar2 = (uVar1 - 8 >> 3) + 1;
        uVar5 = uVar2 & 0xfffffffffffffffc;
        puVar6 = puVar4 + uVar5;
        uVar1 = uVar1 + uVar5 * -8;
        uVar7 = 0;
        do {
          puVar4[uVar7] = 0;
          (puVar4 + uVar7)[1] = 0;
          puVar4[uVar7 + 2] = 0;
          (puVar4 + uVar7 + 2)[1] = 0;
          uVar7 = uVar7 + 4;
        } while (uVar5 != uVar7);
        puVar4 = puVar6;
        if (uVar2 == uVar5) goto LAB_100032f5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar1 = uVar1 - 8;
        puVar4 = puVar6;
      } while (7 < uVar1);
    }
  }
LAB_100032f5:
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  puVar6 = puVar4;
  if (7 < uVar1) {
    if (uVar1 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar1 & 0xffffffffffffffe0;
      uVar2 = 0;
      do {
        *(undefined8 *)((long)puVar4 + uVar2) = 0;
        ((undefined8 *)((long)puVar4 + uVar2))[1] = 0;
        puVar6 = (undefined8 *)((long)puVar4 + uVar2 + 0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar2 = uVar2 + 0x20;
      } while (uVar5 != uVar2);
      if (uVar1 == uVar5) {
        return;
      }
      if ((uVar1 & 0x18) == 0) {
        puVar6 = (undefined8 *)((long)puVar4 + uVar5);
        uVar2 = (ulong)((uint)uVar1 & 0x1f);
        goto LAB_10003376;
      }
    }
    uVar7 = uVar1 & 0xfffffffffffffff8;
    uVar2 = (ulong)((uint)uVar1 & 7);
    puVar6 = (undefined8 *)((long)puVar4 + uVar7);
    do {
      *(undefined8 *)((long)puVar4 + uVar5) = 0;
      uVar5 = uVar5 + 8;
    } while (uVar7 != uVar5);
    if (uVar1 == uVar7) {
      return;
    }
  }
LAB_10003376:
  uVar1 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar2 != uVar1);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_100033a0(char *param_1,char param_2,long param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 == 0) {
    return (char *)0x0;
  }
  do {
    if (*param_1 == param_2) {
      return param_1;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033d0
 */

int recovered_100033d0(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;

  if (0xf < (ulong)param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) goto LAB_10003603;
    uVar11 = param_3;
    puVar8 = (ulong *)param_2;
    puVar10 = (ulong *)param_1;
    if ((param_1 & 7U) != 0) {
      bVar1 = *(byte *)param_1;
      bVar5 = *(byte *)param_2;
      if (bVar1 != bVar5) {
LAB_10003563:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_100036b8:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)(param_1 + 1);
      puVar8 = (ulong *)(param_2 + 1);
      uVar11 = param_3 - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10003563;
        puVar10 = (ulong *)(param_1 + 2);
        puVar8 = (ulong *)(param_2 + 2);
        uVar11 = param_3 - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10003563;
          puVar10 = (ulong *)(param_1 + 3);
          puVar8 = (ulong *)(param_2 + 3);
          uVar11 = param_3 - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10003563;
            puVar10 = (ulong *)(param_1 + 4);
            puVar8 = (ulong *)(param_2 + 4);
            uVar11 = param_3 - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10003563;
              puVar10 = (ulong *)(param_1 + 5);
              puVar8 = (ulong *)(param_2 + 5);
              uVar11 = param_3 - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10003563;
                puVar10 = (ulong *)(param_1 + 6);
                puVar8 = (ulong *)(param_2 + 6);
                uVar11 = param_3 - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10003563;
                  puVar10 = (ulong *)(param_1 + 7);
                  puVar8 = (ulong *)(param_2 + 7);
                  uVar11 = param_3 - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10003563;
                    puVar10 = (ulong *)(param_1 + 8);
                    puVar8 = (ulong *)(param_2 + 8);
                    uVar11 = param_3 - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    while( true ) {
      param_3 = uVar11;
      param_2 = (long)puVar8;
      param_1 = (long)puVar10;
      if (uVar11 < 0x20) break;
      uVar4 = *puVar10;
      uVar7 = *puVar8;
      if (uVar4 != uVar7) {
LAB_1000362f:
        uVar2 = (uint)uVar4;
        uVar6 = (uint)uVar7;
        if ((char)uVar4 == (char)uVar7) {
          uVar9 = uVar7 >> 8 & 0xffffff;
          uVar6 = (uint)uVar9;
          uVar11 = uVar4 >> 8 & 0xffffff;
          uVar2 = (uint)uVar11;
          if ((char)uVar11 == (char)uVar9) {
            uVar11 = uVar4 >> 0x10 & 0xffff;
            uVar2 = (uint)uVar11;
            uVar9 = uVar7 >> 0x10 & 0xffff;
            uVar6 = (uint)uVar9;
            if ((char)uVar11 == (char)uVar9) {
              uVar2 = (uint)(uVar4 >> 0x18) & 0xff;
              uVar6 = (uint)(uVar7 >> 0x18) & 0xff;
              if ((char)(uVar4 >> 0x18) == (char)(uVar7 >> 0x18)) {
                uVar2 = (uint)(uVar4 >> 0x20);
                uVar6 = (uint)(uVar7 >> 0x20);
                if ((char)(uVar4 >> 0x20) == (char)(uVar7 >> 0x20)) {
                  uVar2 = uVar2 >> 8;
                  uVar6 = uVar6 >> 8;
                  if ((char)(uVar4 >> 0x28) == (char)(uVar7 >> 0x28)) {
                    uVar2 = (uint)(ushort)(uVar4 >> 0x30);
                    uVar6 = (uint)(ushort)(uVar7 >> 0x30);
                    if ((char)(uVar4 >> 0x30) == (char)(uVar7 >> 0x30)) {
                      uVar2 = (uint)(byte)(uVar4 >> 0x38);
                      uVar6 = (uint)(byte)(uVar7 >> 0x38);
                      if (uVar2 == uVar6) {
                        return 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar6 = uVar6 & 0xff;
        uVar2 = uVar2 & 0xff;
        goto LAB_100036b8;
      }
      uVar4 = puVar10[1];
      uVar7 = puVar8[1];
      if (uVar4 != uVar7) goto LAB_1000362f;
      uVar4 = puVar10[2];
      uVar7 = puVar8[2];
      if (uVar4 != uVar7) goto LAB_1000362f;
      uVar4 = puVar10[3];
      uVar7 = puVar8[3];
      if (uVar4 != uVar7) goto LAB_1000362f;
      uVar11 = uVar11 - 0x20;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    }
    for (; 7 < (ulong)param_3; param_3 = param_3 - 8) {
      if (*(ulong *)param_1 != *(ulong *)param_2) {
        iVar3 = recovered_100036d0((byte *)param_1,(byte *)param_2);
        return iVar3;
      }
      param_2 = (long)(param_2 + 8);
      param_1 = (long)(param_1 + 8);
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10003603:
  uVar11 = 0;
  do {
    if (*(byte *)(param_1 + uVar11) != *(byte *)(param_2 + uVar11)) {
      return (uint)*(byte *)(param_1 + uVar11) - (uint)*(byte *)(param_2 + uVar11);
    }
    uVar11 = uVar11 + 1;
  } while (param_3 != uVar11);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036d0
 */

int recovered_100036d0(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;

  bVar1 = *param_1;
  bVar2 = *param_2;
  if (bVar1 == bVar2) {
    bVar1 = param_1[1];
    bVar2 = param_2[1];
    if (bVar1 == bVar2) {
      bVar1 = param_1[2];
      bVar2 = param_2[2];
      if (bVar1 == bVar2) {
        bVar1 = param_1[3];
        bVar2 = param_2[3];
        if (bVar1 == bVar2) {
          bVar1 = param_1[4];
          bVar2 = param_2[4];
          if (bVar1 == bVar2) {
            bVar1 = param_1[5];
            bVar2 = param_2[5];
            if (bVar1 == bVar2) {
              bVar1 = param_1[6];
              bVar2 = param_2[6];
              if (bVar1 == bVar2) {
                bVar1 = param_1[7];
                bVar2 = param_2[7];
                if (bVar1 == bVar2) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return (uint)bVar1 - (uint)bVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003740(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003760(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003780(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100037a0(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100037d0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100037f0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10003810(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1 + 0x20;
  if (param_1 - 0x5bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10003830(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1 + -0x20;
  if (param_1 - 0x7bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10003850(char *text)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;

  if (text == (char *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffffffffffff;
  do {
    uVar1 = uVar3 + 1;
    lVar2 = uVar3 + 1;
    uVar3 = uVar1;
  } while (text[lVar2] != '\0');
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10003880(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_100015b3;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_100015b3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100038c0(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_100015f3;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_100015f3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003900(long param_1,long param_2)

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


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_10003920(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  if (param_1 == 0) {
    return 0;
  }
  uVar5 = 0xfffffffffffffff8;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (*(char *)(param_1 + 8 + uVar10) != '\0');
  if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
     ((_DAT_00280808 < 0x50 || ((code *)(ulong)_DAT_0028084c == (code *)0x0)))) {
    return 0;
  }
  uVar9 = uVar10 + 9;
  puVar4 = (undefined8 *)(*(code *)(ulong)_DAT_0028084c)(uVar9);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  puVar8 = puVar4;
  if (uVar9 < 0x10) {
LAB_100039c9:
    if (uVar9 == 0) {
      return (long)puVar4;
    }
  }
  else if ((((uint)puVar4 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)puVar4 & 7) == 0) {
      puVar7 = (undefined8 *)param_1;
      puVar6 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)((long)puVar4 + 1);
      *(undefined1 *)puVar4 = *(undefined1 *)param_1;
      puVar7 = (undefined8 *)(param_1 + 1);
      uVar9 = uVar10 + 8;
      if ((uVar5 != 0xfffffffffffffff9) && (((ulong)puVar6 & 7) != 0)) {
        puVar6 = (undefined8 *)((long)puVar4 + 2);
        *(undefined1 *)((long)puVar4 + 1) = *(undefined1 *)(param_1 + 1);
        puVar7 = (undefined8 *)(param_1 + 2);
        uVar9 = uVar10 + 7;
        if ((uVar5 != 0xfffffffffffffffa) && (((ulong)puVar6 & 7) != 0)) {
          puVar6 = (undefined8 *)((long)puVar4 + 3);
          *(undefined1 *)((long)puVar4 + 2) = *(undefined1 *)(param_1 + 2);
          puVar7 = (undefined8 *)(param_1 + 3);
          uVar9 = uVar10 + 6;
          if ((uVar5 != 0xfffffffffffffffb) && (((ulong)puVar6 & 7) != 0)) {
            puVar6 = (undefined8 *)((long)puVar4 + 4);
            *(undefined1 *)((long)puVar4 + 3) = *(undefined1 *)(param_1 + 3);
            puVar7 = (undefined8 *)(param_1 + 4);
            uVar9 = uVar10 + 5;
            if ((uVar5 != 0xfffffffffffffffc) && (((ulong)puVar6 & 7) != 0)) {
              puVar6 = (undefined8 *)((long)puVar4 + 5);
              *(undefined1 *)((long)puVar4 + 4) = *(undefined1 *)(param_1 + 4);
              puVar7 = (undefined8 *)(param_1 + 5);
              uVar9 = uVar10 + 4;
              if ((uVar5 != 0xfffffffffffffffd) && (((ulong)puVar6 & 7) != 0)) {
                puVar6 = (undefined8 *)((long)puVar4 + 6);
                *(undefined1 *)((long)puVar4 + 5) = *(undefined1 *)(param_1 + 5);
                puVar7 = (undefined8 *)(param_1 + 6);
                uVar9 = uVar10 + 3;
                if ((uVar5 != 0xfffffffffffffffe) && (((ulong)puVar6 & 7) != 0)) {
                  puVar6 = (undefined8 *)((long)puVar4 + 7);
                  *(undefined1 *)((long)puVar4 + 6) = *(undefined1 *)(param_1 + 6);
                  puVar7 = (undefined8 *)(param_1 + 7);
                  uVar9 = uVar10 + 2;
                  if ((uVar5 != 0xffffffffffffffff) && (((ulong)puVar6 & 7) != 0)) {
                    *(undefined1 *)((long)puVar4 + 7) = *(undefined1 *)(param_1 + 7);
                    puVar7 = (undefined8 *)(param_1 + 8);
                    uVar9 = uVar5;
                    puVar6 = puVar4 + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (uVar9 < 0x20) {
    }
    else {
      uVar5 = uVar9 - 0x20;
      uVar10 = uVar9;
      if ((uVar5 & 0x20) == 0) {
        *puVar6 = *puVar7;
        puVar6[1] = puVar7[1];
        puVar6[2] = puVar7[2];
        puVar6[3] = puVar7[3];
        puVar6 = puVar6 + 4;
        puVar7 = puVar7 + 4;
        uVar10 = uVar5;
      }
      uVar9 = uVar5;
      if (0x1f < uVar5) {
        do {
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          puVar6[2] = puVar7[2];
          puVar6[3] = puVar7[3];
          puVar6[4] = puVar7[4];
          puVar6[5] = puVar7[5];
          puVar6[6] = puVar7[6];
          puVar6[7] = puVar7[7];
          puVar6 = puVar6 + 8;
          puVar7 = puVar7 + 8;
          uVar10 = uVar10 - 0x40;
          uVar9 = uVar10;
        } while (0x1f < uVar10);
      }
    }
    if (uVar9 < 8) {
      param_1 = (long)puVar7;
      puVar8 = puVar6;
    }
    else {
      if ((0x27 < uVar9 - 8) && (0x1f < (ulong)((long)puVar6 - (long)puVar7))) {
        uVar5 = (uVar9 - 8 >> 3) + 1;
        uVar10 = uVar5 & 0xfffffffffffffffc;
        param_1 = (long)(puVar7 + uVar10);
        puVar8 = puVar6 + uVar10;
        uVar9 = uVar9 + uVar10 * -8;
        uVar11 = 0;
        do {
          uVar1 = (puVar7 + uVar11)[1];
          uVar2 = puVar7[uVar11 + 2];
          uVar3 = (puVar7 + uVar11 + 2)[1];
          puVar6[uVar11] = puVar7[uVar11];
          (puVar6 + uVar11)[1] = uVar1;
          puVar6[uVar11 + 2] = uVar2;
          (puVar6 + uVar11 + 2)[1] = uVar3;
          uVar11 = uVar11 + 4;
        } while (uVar10 != uVar11);
        puVar7 = (undefined8 *)param_1;
        puVar6 = puVar8;
        if (uVar5 == uVar10) goto LAB_100039c9;
      }
      do {
        param_1 = (long)(puVar7 + 1);
        *puVar6 = *puVar7;
        puVar8 = puVar6 + 1;
        uVar9 = uVar9 - 8;
        puVar7 = (undefined8 *)param_1;
        puVar6 = puVar8;
      } while (7 < uVar9);
    }
    goto LAB_100039c9;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - param_1) < 0x20)) {
LAB_10003ce8:
    puVar7 = (undefined8 *)param_1;
  }
  else {
    if (uVar9 < 0x20) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar9 & 0xffffffffffffffe0;
      uVar5 = 0;
      do {
        uVar1 = ((undefined8 *)(param_1 + uVar5))[1];
        puVar6 = (undefined8 *)(param_1 + uVar5 + 0x10);
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        *(undefined8 *)((long)puVar8 + uVar5) = *(undefined8 *)(param_1 + uVar5);
        ((undefined8 *)((long)puVar8 + uVar5))[1] = uVar1;
        puVar6 = (undefined8 *)((long)puVar8 + uVar5 + 0x10);
        *puVar6 = uVar2;
        puVar6[1] = uVar3;
        uVar5 = uVar5 + 0x20;
      } while (uVar10 != uVar5);
      if (uVar9 == uVar10) {
        return (long)puVar4;
      }
      if ((uVar9 & 0x1c) == 0) {
        param_1 = param_1 + uVar10;
        puVar6 = (undefined8 *)((long)puVar8 + uVar10);
        uVar5 = (ulong)((uint)uVar9 & 0x1f);
        goto LAB_10003ce8;
      }
    }
    uVar11 = uVar9 & 0xfffffffffffffffc;
    uVar5 = (ulong)((uint)uVar9 & 3);
    puVar6 = (undefined8 *)((long)puVar8 + uVar11);
    puVar7 = (undefined8 *)(param_1 + uVar11);
    do {
      *(undefined4 *)((long)puVar8 + uVar10) = *(undefined4 *)(param_1 + uVar10);
      uVar10 = uVar10 + 4;
    } while (uVar11 != uVar10);
    if (uVar9 == uVar11) {
      return (long)puVar4;
    }
  }
  uVar10 = uVar5 - 1;
  if ((uVar5 & 7) != 0) {
    uVar9 = 0;
    do {
      *(undefined1 *)((long)puVar6 + uVar9) = *(undefined1 *)((long)puVar7 + uVar9);
      uVar9 = uVar9 + 1;
    } while ((uVar5 & 7) != uVar9);
    uVar5 = uVar5 - uVar9;
    puVar6 = (undefined8 *)((long)puVar6 + uVar9);
    puVar7 = (undefined8 *)((long)puVar7 + uVar9);
  }
  if (uVar10 < 7) {
    return (long)puVar4;
  }
  uVar10 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar10) = *(undefined1 *)((long)puVar7 + uVar10);
    *(undefined1 *)((long)puVar6 + uVar10 + 1) = *(undefined1 *)((long)puVar7 + uVar10 + 1);
    *(undefined1 *)((long)puVar6 + uVar10 + 2) = *(undefined1 *)((long)puVar7 + uVar10 + 2);
    *(undefined1 *)((long)puVar6 + uVar10 + 3) = *(undefined1 *)((long)puVar7 + uVar10 + 3);
    *(undefined1 *)((long)puVar6 + uVar10 + 4) = *(undefined1 *)((long)puVar7 + uVar10 + 4);
    *(undefined1 *)((long)puVar6 + uVar10 + 5) = *(undefined1 *)((long)puVar7 + uVar10 + 5);
    *(undefined1 *)((long)puVar6 + uVar10 + 6) = *(undefined1 *)((long)puVar7 + uVar10 + 6);
    *(undefined1 *)((long)puVar6 + uVar10 + 7) = *(undefined1 *)((long)puVar7 + uVar10 + 7);
    uVar10 = uVar10 + 8;
  } while (uVar5 != uVar10);
  return (long)puVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10003da0(char *param_1,char param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;

  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      if (param_2 != '\0') {
        param_1 = (char *)0x0;
      }
      return param_1;
    }
    if (param_2 == cVar1) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10003de0(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;

  cVar2 = *param_1;
  if (cVar2 == '\0') {
    return 0;
  }
  lVar1 = 0;
  do {
    if (*param_2 == '\0') {
      return 0;
    }
    cVar4 = *param_2;
    pcVar3 = param_2;
    while (pcVar3 = pcVar3 + 1, cVar2 != cVar4) {
      cVar4 = *pcVar3;
      if (cVar4 == '\0') {
        return lVar1;
      }
    }
    cVar2 = param_1[lVar1 + 1];
    lVar1 = lVar1 + 1;
  } while (cVar2 != '\0');
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e40
 */

long recovered_10003e40(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;

  cVar2 = *param_1;
  if (cVar2 == '\0') {
    return 0;
  }
  lVar1 = 0;
  do {
    if (*param_2 != '\0') {
      cVar4 = *param_2;
      pcVar3 = param_2;
      do {
        pcVar3 = pcVar3 + 1;
        if (cVar2 == cVar4) {
          return lVar1;
        }
        cVar4 = *pcVar3;
      } while (cVar4 != '\0');
    }
    cVar2 = param_1[lVar1 + 1];
    lVar1 = lVar1 + 1;
  } while (cVar2 != '\0');
  return lVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10003ea0(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char *pcVar2;
  char cVar3;

  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return (char *)0x0;
  }
  do {
    if (*param_2 != '\0') {
      cVar3 = *param_2;
      pcVar2 = param_2;
      do {
        pcVar2 = pcVar2 + 1;
        if (cVar1 == cVar3) {
          return param_1;
        }
        cVar3 = *pcVar2;
      } while (cVar3 != '\0');
    }
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return (char *)0x0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10003f00(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  long lVar2;
  char cVar3;

  if (*param_2 == '\0') {
    return param_1;
  }
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  do {
    lVar2 = 0;
    cVar3 = *param_2;
    while (param_1[lVar2] == cVar3) {
      cVar3 = param_2[lVar2 + 1];
      lVar2 = lVar2 + 1;
      if (cVar3 == '\0') {
        return param_1;
      }
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    if (*pcVar1 == '\0') {
      return (char *)0x0;
    }
  } while( true );
}


#undef DAT_1000fde8
#define DAT_1000fde8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x214U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f60
 */

undefined * recovered_10003f60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000fde8;
}

#undef DAT_1000fde8

#undef PTR_DAT_10011000
#define PTR_DAT_10011000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x142cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f70
 */

undefined ** recovered_10003f70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10011000;
}

#undef PTR_DAT_10011000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280968
#define _DAT_00280968 (*(uint *)(0x280968U))
#define local_28 (*(undefined1 (*)[40])(pf_stack_frame + 24))
#define uStack_20 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f80
 */

/* WARNING: Removing unreachable block (ram,0x10003f96) */
/* WARNING: Removing unreachable block (ram,0x10003fe3) */
/* WARNING: Removing unreachable block (ram,0x10003fee) */
/* WARNING: Removing unreachable block (ram,0x10003ff7) */
/* WARNING: Removing unreachable block (ram,0x10004000) */
/* WARNING: Removing unreachable block (ram,0x10003fec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003f80(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;

  uStack_18 = 0;
  uStack_20 = 0;
  if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
     (((_DAT_00280808 < 0x16c || ((code *)(ulong)_DAT_00280968 == (code *)0x0)) ||
      (iVar1 = (*(code *)(ulong)_DAT_00280968)(local_28), iVar1 == 0)))) {
    uStack_20 = 0x574d4236;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = uStack_20;
  }
  return uStack_20;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280968
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280968
#undef local_28
#undef uStack_20
#undef uStack_18

#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004080
 */

double recovered_10004080(double param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  double dVar3;

  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      uVar1 = param_2;
      if ((-param_2 & 7) != 0) {
        iVar2 = 0;
        do {
          param_1 = param_1 * DAT_1000fbe0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000fbe0 * DAT_1000fbe0 * DAT_1000fbe0 * DAT_1000fbe0 *
                    DAT_1000fbe0 * DAT_1000fbe0 * DAT_1000fbe0 * DAT_1000fbe0;
          uVar1 = uVar1 + 8;
        } while (uVar1 != 0);
      }
    }
  }
  else {
    uVar1 = param_2;
    if ((param_2 & 7) != 0) {
      uVar1 = 0;
      do {
        param_1 = param_1 + param_1;
        uVar1 = uVar1 + 1;
      } while ((param_2 & 7) != uVar1);
      uVar1 = param_2 - uVar1;
    }
    if (7 < param_2) {
      uVar1 = uVar1 - 1;
      do {
        dVar3 = param_1 + param_1 + param_1 + param_1;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        param_1 = dVar3 + dVar3;
        uVar1 = uVar1 - 8;
      } while (uVar1 < 0xfffffffe);
    }
  }
  return param_1;
}

#undef DAT_1000fbe0

#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc60
#define DAT_1000fc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_1000fc60
#define _DAT_1000fc60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004150(double param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong in_RAX;
  ulong uVar1;
  double dVar2;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    return in_RAX;
  }
  dVar2 = (double)(_DAT_1000fc60 ^ (ulong)param_1);
  if ((double)(_DAT_1000fc60 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  uVar1 = 0;
  if (DAT_1000fbe8 <= dVar2) {
    uVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000fbe0;
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (DAT_1000fbe8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000fbe0)); dVar2 = dVar2 + dVar2) {
    uVar1 = (ulong)((int)uVar1 - 1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)uVar1;
  }
  return uVar1;
}

#undef DAT_1000fbe0
#undef DAT_1000fbe8
#undef DAT_1000fc60
#undef _DAT_1000fc60

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10004220(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004250
 */

double recovered_10004250(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;

  dVar4 = 0.0;
  if (((double)(int)param_2 == param_2) && (!NAN((double)(int)param_2) && !NAN(param_2))) {
    uVar2 = (uint)param_2;
    if (uVar2 == 0) {
      return DAT_1000fbe8;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000fbe8;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000fbe8 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000fbe8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_100042d0(double param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004300
 */

ulong recovered_10004300(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (ulong)((int)param_1 - 1);
}


#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004360
 */

double recovered_10004360(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_1000fbe8) {
      dVar1 = DAT_1000fbe8;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fbe0;
  }
  return dVar1;
}

#undef DAT_1000fbe0
#undef DAT_1000fbe8

#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fbf0
#define DAT_1000fbf0 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1000fbf8
#define DAT_1000fbf8 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000fc00
#define DAT_1000fc00 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000fc08
#define DAT_1000fc08 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1000fc10
#define DAT_1000fc10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1000fc18
#define DAT_1000fc18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000fc70
#define DAT_1000fc70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9cU)))
#undef DAT_1000fc80
#define DAT_1000fc80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xacU)))
#undef DAT_1000fc90
#define DAT_1000fc90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbcU)))
#undef DAT_1000fca0
#define DAT_1000fca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccU)))
#undef _DAT_1000fc10
#define _DAT_1000fc10 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_1000fc18
#define _DAT_1000fc18 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef _DAT_1000fc70
#define _DAT_1000fc70 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9cU)))
#undef _DAT_1000fc80
#define _DAT_1000fc80 (*(uint128 *)(((uintptr_t)pf_module_state + 0xacU)))
#undef _DAT_1000fc90
#define _DAT_1000fc90 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbcU)))
#undef _DAT_1000fca0
#define _DAT_1000fca0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004510(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint128 auVar2;
  double dVar3;
  uint128 auVar4;
  uint128 auVar5;
  double dVar6;
  uint128 auVar7;
  uint128 auVar8;

  if (0.0 < param_1) {
    iVar1 = 0;
    if (DAT_1000fbf8 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000fbe0;
        iVar1 = iVar1 + 1;
      } while (DAT_1000fbf8 < param_1);
    }
    for (; param_1 < DAT_1000fc00; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000fc08 + param_1) / (param_1 + DAT_1000fbe8);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000fc70);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000fc80);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000fc90);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000fca0);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000fc10 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000fc18;
  }
  return DAT_1000fbf0;
}

#undef DAT_1000fbe0
#undef DAT_1000fbe8
#undef DAT_1000fbf0
#undef DAT_1000fbf8
#undef DAT_1000fc00
#undef DAT_1000fc08
#undef DAT_1000fc10
#undef DAT_1000fc18
#undef DAT_1000fc70
#undef DAT_1000fc80
#undef DAT_1000fc90
#undef DAT_1000fca0
#undef _DAT_1000fc10
#undef _DAT_1000fc18
#undef _DAT_1000fc70
#undef _DAT_1000fc80
#undef _DAT_1000fc90
#undef _DAT_1000fca0

#undef DAT_1000fcb0
#define DAT_1000fcb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004660
 */

long recovered_10004660(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000fcb0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000fcb0

#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc20
#define DAT_1000fc20 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000fc28
#define DAT_1000fc28 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1000fc30
#define DAT_1000fc30 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1000fc38
#define DAT_1000fc38 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000fc40
#define DAT_1000fc40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000fcc0
#define DAT_1000fcc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef _DAT_1000fc40
#define _DAT_1000fc40 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_1000fcc0
#define _DAT_1000fcc0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004690
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004690(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000fc20 < param_1; param_1 = param_1 + DAT_1000fc28) {
  }
  for (; param_1 < DAT_1000fc30; param_1 = param_1 + DAT_1000fc38) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000fcc0);
  return ((dVar1 / _DAT_1000fc40 + DAT_1000fbe8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000fbe8
#undef DAT_1000fc20
#undef DAT_1000fc28
#undef DAT_1000fc30
#undef DAT_1000fc38
#undef DAT_1000fc40
#undef DAT_1000fcc0
#undef _DAT_1000fc40
#undef _DAT_1000fcc0

#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc20
#define DAT_1000fc20 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000fc28
#define DAT_1000fc28 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1000fc30
#define DAT_1000fc30 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1000fc38
#define DAT_1000fc38 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000fc48
#define DAT_1000fc48 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000fcd0
#define DAT_1000fcd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef _DAT_1000fcd0
#define _DAT_1000fcd0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004740(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000fc20 < param_1; param_1 = param_1 + DAT_1000fc28) {
  }
  for (; param_1 < DAT_1000fc30; param_1 = param_1 + DAT_1000fc38) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000fcd0);
  return (DAT_1000fc48 * dVar1 + DAT_1000fbe8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000fbe8
#undef DAT_1000fc20
#undef DAT_1000fc28
#undef DAT_1000fc30
#undef DAT_1000fc38
#undef DAT_1000fc48
#undef DAT_1000fcd0
#undef _DAT_1000fcd0

#undef DAT_1000fc60
#define DAT_1000fc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_1000fc60
#define _DAT_1000fc60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100047e0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000fc60 ^ (ulong)param_1);
  if ((double)(_DAT_1000fc60 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000fc60
#undef _DAT_1000fc60

#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fc50
#define DAT_1000fc50 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1000fc60
#define DAT_1000fc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_1000fc60
#define _DAT_1000fc60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004800(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if ((param_1 == 0.0) && (!NAN(param_1))) {
    return 0;
  }
  dVar7 = (double)(_DAT_1000fc60 ^ (ulong)param_1);
  if ((double)(_DAT_1000fc60 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_1000fc50;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_1000fbe0;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_1000fbe0;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_1000fbe0
#undef DAT_1000fc50
#undef DAT_1000fc60
#undef _DAT_1000fc60

#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fc50
#define DAT_1000fc50 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048d0
 */

ulong recovered_100048d0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if (param_1 <= 0.0) {
    return 0;
  }
  lVar3 = 0x3f;
  uVar2 = 0;
  dVar6 = DAT_1000fc50;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_1000fbe0;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_1000fbe0;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_1000fbe0
#undef DAT_1000fc50

#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004980
 */

double recovered_10004980(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (param_1 == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_1000fbe8;
  do {
    if ((param_1 & 1) != 0) {
      dVar2 = dVar2 + dVar3;
    }
    dVar3 = dVar3 + dVar3;
    bVar1 = 1 < param_1;
    param_1 = param_1 >> 1;
  } while (bVar1);
  return dVar2;
}

#undef DAT_1000fbe8

#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc60
#define DAT_1000fc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_1000fc60
#define _DAT_1000fc60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100049d0(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if ((long)param_1 < 0) {
    dVar4 = 0.0;
    uVar2 = -param_1;
    dVar3 = DAT_1000fbe8;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_1000fc60);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_1000fbe8;
    do {
      if ((param_1 & 1) != 0) {
        dVar3 = dVar3 + dVar4;
      }
      dVar4 = dVar4 + dVar4;
      bVar1 = 1 < param_1;
      param_1 = param_1 >> 1;
    } while (bVar1);
  }
  return dVar3;
}

#undef DAT_1000fbe8
#undef DAT_1000fc60
#undef _DAT_1000fc60

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10004a60(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc60
#define DAT_1000fc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef UNK_1000fc64
#define UNK_1000fc64 (*(uint *)(((uintptr_t)pf_module_state + 0x90U)))
#undef _DAT_1000fc60
#define _DAT_1000fc60 (*(uint *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef uRam000000001000fc64
#define uRam000000001000fc64 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004ab0(float param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 in_RAX;
  ulong uVar1;
  double dVar2;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    return in_RAX;
  }
  dVar2 = (double)param_1;
  if (param_1 < 0.0) {
    dVar2 = pf_bits_double(CONCAT44((uint)(pf_double_bits(dVar2) >> 0x20) ^ uRam000000001000fc64,
                             SUB84(dVar2,0) ^ _DAT_1000fc60));
  }
  uVar1 = 0;
  if (DAT_1000fbe8 <= dVar2) {
    uVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000fbe0;
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (DAT_1000fbe8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000fbe0)); dVar2 = dVar2 + dVar2) {
    uVar1 = (ulong)((int)uVar1 - 1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)uVar1;
  }
  return uVar1;
}

#undef DAT_1000fbe0
#undef DAT_1000fbe8
#undef DAT_1000fc60
#undef UNK_1000fc64
#undef _DAT_1000fc60
#undef uRam000000001000fc64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b70
 */

ulong recovered_10004b70(float param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong in_RAX;
  uint uVar1;
  int iVar2;

  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      uVar1 = param_2;
      if ((-param_2 & 7) != 0) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      in_RAX = (ulong)uVar1;
      if (param_2 < 0xfffffff9) {
        do {
          uVar1 = (int)in_RAX + 8;
          in_RAX = (ulong)uVar1;
        } while (uVar1 != 0);
        in_RAX = 0;
      }
    }
  }
  else {
    uVar1 = param_2;
    if ((param_2 & 7) != 0) {
      uVar1 = 0;
      do {
        uVar1 = uVar1 + 1;
      } while ((param_2 & 7) != uVar1);
      uVar1 = param_2 - uVar1;
    }
    in_RAX = (ulong)uVar1;
    if (7 < param_2) {
      in_RAX = (ulong)(uVar1 - 1);
      do {
        uVar1 = (int)in_RAX - 8;
        in_RAX = (ulong)uVar1;
      } while (uVar1 < 0xfffffffe);
    }
  }
  return in_RAX;
}


#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fcf0
#define DAT_1000fcf0 (*(float *)(((uintptr_t)pf_module_state + 0x11cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c60
 */

float recovered_10004c60(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;

  if (((float)(int)param_2 != param_2) || (NAN((float)(int)param_2) || NAN(param_2))) {
    return 0.0;
  }
  uVar2 = (uint)param_2;
  if (uVar2 == 0) {
    return DAT_1000fcf0;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000fbe8;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000fbe8 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000fbe8
#undef DAT_1000fcf0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10004cf0(void)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  ulong uVar2;
  float fVar3;
  undefined1 in_XMM0 [16];
  uint128 auVar4;
  uint128 auVar5;
  ulong in_XMM2_Qb;

  fVar3 = PF_PART4(in_XMM0, 0);
  uVar2 = -(ulong)((double)fVar3 < (double)(int)fVar3);
  PF_PART8(auVar4, 0) = ~uVar2 & (ulong)(double)(int)fVar3;
  PF_PART8(auVar4, 8) = ~PF_PART8(in_XMM0, 8) & (ulong)(double)(int)PF_PART4(in_XMM0, 4);
  PF_PART8(auVar1, 8) = in_XMM2_Qb & PF_PART8(in_XMM0, 8);
  PF_PART8(auVar1, 0) = (ulong)(double)((int)fVar3 + -1) & uVar2;
  PF_PART12(auVar5, 4) = SUB1612(auVar4 | auVar1,4);
  PF_PART4(auVar5, 0) = (float)SUB168(auVar4 | auVar1,0);
  return PF_PART8(auVar5, 0);
}


#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d30
 */

float recovered_10004d30(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000fbe8 + dVar2) & uVar1);
}

#undef DAT_1000fbe8

#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d90
 */

double recovered_10004d90(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  if (param_1 < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
                    (ulong)(DAT_1000fbe8 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000fbe8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004df0
 */

ulong recovered_10004df0(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_XMM0_Da;

  return (ulong)((int)in_XMM0_Da - 1);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10004e60(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10004360((double)param_1);
  return (float)dVar1;
}


#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fbf8
#define DAT_1000fbf8 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000fc00
#define DAT_1000fc00 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000fc08
#define DAT_1000fc08 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1000fc10
#define DAT_1000fc10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1000fc18
#define DAT_1000fc18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000fc70
#define DAT_1000fc70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9cU)))
#undef DAT_1000fc80
#define DAT_1000fc80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xacU)))
#undef DAT_1000fc90
#define DAT_1000fc90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbcU)))
#undef DAT_1000fca0
#define DAT_1000fca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccU)))
#undef DAT_1000fcf4
#define DAT_1000fcf4 (*(float *)(((uintptr_t)pf_module_state + 0x120U)))
#undef DAT_1000fcf8
#define DAT_1000fcf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef _DAT_1000fc10
#define _DAT_1000fc10 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_1000fc18
#define _DAT_1000fc18 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef _DAT_1000fc70
#define _DAT_1000fc70 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9cU)))
#undef _DAT_1000fc80
#define _DAT_1000fc80 (*(uint128 *)(((uintptr_t)pf_module_state + 0xacU)))
#undef _DAT_1000fc90
#define _DAT_1000fc90 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbcU)))
#undef _DAT_1000fca0
#define _DAT_1000fca0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xccU)))
#undef _DAT_1000fcf8
#define _DAT_1000fcf8 (*(float *)(((uintptr_t)pf_module_state + 0x124U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004e80(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  uint128 auVar3;
  double dVar4;
  uint128 auVar5;
  uint128 auVar6;
  uint128 auVar7;
  uint128 auVar8;

  if (0.0 < param_1) {
    dVar2 = (double)param_1;
    iVar1 = 0;
    if (_DAT_1000fcf8 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000fbe0;
        iVar1 = iVar1 + 1;
      } while (DAT_1000fbf8 < dVar2);
    }
    for (; dVar2 < DAT_1000fc00; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000fc08 + dVar2) / (dVar2 + DAT_1000fbe8);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000fc70);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000fc80);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000fc90);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000fca0);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000fc10 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000fc18);
  }
  return DAT_1000fcf4;
}

#undef DAT_1000fbe0
#undef DAT_1000fbe8
#undef DAT_1000fbf8
#undef DAT_1000fc00
#undef DAT_1000fc08
#undef DAT_1000fc10
#undef DAT_1000fc18
#undef DAT_1000fc70
#undef DAT_1000fc80
#undef DAT_1000fc90
#undef DAT_1000fca0
#undef DAT_1000fcf4
#undef DAT_1000fcf8
#undef _DAT_1000fc10
#undef _DAT_1000fc18
#undef _DAT_1000fc70
#undef _DAT_1000fc80
#undef _DAT_1000fc90
#undef _DAT_1000fca0
#undef _DAT_1000fcf8

#undef DAT_1000fcb0
#define DAT_1000fcb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fd0
 */

long recovered_10004fd0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000fcb0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000fcb0

#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc20
#define DAT_1000fc20 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000fc28
#define DAT_1000fc28 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1000fc30
#define DAT_1000fc30 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1000fc38
#define DAT_1000fc38 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000fc40
#define DAT_1000fc40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000fcc0
#define DAT_1000fcc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef _DAT_1000fc40
#define _DAT_1000fc40 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_1000fcc0
#define _DAT_1000fcc0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10005000(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_1000fc20 < dVar1; dVar1 = dVar1 + DAT_1000fc28) {
  }
  for (; dVar1 < DAT_1000fc30; dVar1 = dVar1 + DAT_1000fc38) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000fcc0);
  return (float)(((dVar2 / _DAT_1000fc40 + DAT_1000fbe8 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000fbe8
#undef DAT_1000fc20
#undef DAT_1000fc28
#undef DAT_1000fc30
#undef DAT_1000fc38
#undef DAT_1000fc40
#undef DAT_1000fcc0
#undef _DAT_1000fc40
#undef _DAT_1000fcc0

#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc20
#define DAT_1000fc20 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000fc28
#define DAT_1000fc28 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1000fc30
#define DAT_1000fc30 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1000fc38
#define DAT_1000fc38 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000fc48
#define DAT_1000fc48 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000fcd0
#define DAT_1000fcd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef _DAT_1000fcd0
#define _DAT_1000fcd0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100050b0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000fc20 < dVar1; dVar1 = dVar1 + DAT_1000fc28) {
  }
  for (; dVar1 < DAT_1000fc30; dVar1 = dVar1 + DAT_1000fc38) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000fcd0);
  return (float)((DAT_1000fc48 * dVar1 + DAT_1000fbe8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000fbe8
#undef DAT_1000fc20
#undef DAT_1000fc28
#undef DAT_1000fc30
#undef DAT_1000fc38
#undef DAT_1000fc48
#undef DAT_1000fcd0
#undef _DAT_1000fcd0

#undef DAT_1000fce0
#define DAT_1000fce0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10005150(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 in_RAX;

  return in_RAX;
}

#undef DAT_1000fce0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10005170(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;

  for (pbVar8 = param_1; (bVar1 = *pbVar8, bVar1 - 9 < 5 || (bVar1 == 0x20)); pbVar8 = pbVar8 + 1) {
  }
  uVar9 = (ulong)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar8 + uVar9;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar8[uVar9 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar8 + uVar9 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar8[uVar9 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar8 + uVar9 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  lVar7 = 0;
  while( true ) {
    bVar2 = *pbVar5;
    iVar3 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar4 = iVar3 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar4 = iVar3 - 0x57;
    }
    else {
      uVar4 = iVar3 - 0x37;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar4 = 0xffffffff;
      }
    }
    if (param_3 <= uVar4) break;
    lVar7 = lVar7 * (ulong)param_3 + (ulong)uVar4;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  lVar6 = -lVar7;
  if (bVar1 != 0x2d) {
    lVar6 = lVar7;
  }
  return lVar6;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100052a0(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;

  for (pbVar8 = param_1; (bVar1 = *pbVar8, bVar1 - 9 < 5 || (bVar1 == 0x20)); pbVar8 = pbVar8 + 1) {
  }
  uVar9 = (ulong)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar8 + uVar9;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar8[uVar9 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar8 + uVar9 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar8[uVar9 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar8 + uVar9 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  lVar7 = 0;
  while( true ) {
    bVar2 = *pbVar5;
    iVar3 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar4 = iVar3 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar4 = iVar3 - 0x57;
    }
    else {
      uVar4 = iVar3 - 0x37;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar4 = 0xffffffff;
      }
    }
    if (param_3 <= uVar4) break;
    lVar7 = lVar7 * (ulong)param_3 + (ulong)uVar4;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  lVar6 = -lVar7;
  if (bVar1 != 0x2d) {
    lVar6 = lVar7;
  }
  return lVar6;
}


#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc58
#define DAT_1000fc58 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_1000fc60
#define DAT_1000fc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_1000fc60
#define _DAT_1000fc60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100053d0(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;

  for (pbVar3 = param_1; (bVar1 = *pbVar3, bVar1 - 9 < 5 || (bVar1 == 0x20)); pbVar3 = pbVar3 + 1) {
  }
  pbVar3 = pbVar3 + ((bVar1 - 0x2b & 0xfd) == 0);
  bVar2 = *pbVar3;
  dVar11 = 0.0;
  bVar6 = bVar2 - 0x30U;
  bVar9 = bVar6;
  while (uVar4 = (uint)bVar2, bVar9 < 10) {
    dVar11 = dVar11 * DAT_1000fc58 + (double)(int)(uVar4 - 0x30);
    bVar2 = pbVar3[1];
    pbVar3 = pbVar3 + 1;
    bVar9 = bVar2 - 0x30U;
  }
  if (bVar2 == 0x2e) {
    pbVar5 = pbVar3 + 1;
    uVar4 = (uint)*pbVar5;
    pbVar3 = pbVar3 + 1;
    if ((byte)(*pbVar5 - 0x30U) < 10) {
      dVar12 = 0.0;
      dVar13 = DAT_1000fbe8;
      do {
        dVar12 = dVar12 * DAT_1000fc58 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000fc58;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_100054a9;
    }
  }
  dVar12 = 0.0;
  if (9 < bVar6) {
    if (param_2 == (undefined8 *)0x0) {
      return 0.0;
    }
    *param_2 = param_1;
    return 0.0;
  }
LAB_100054a9:
  dVar11 = dVar11 + dVar12;
  if ((uVar4 | 0x20) == 0x65) {
    iVar10 = 1;
    if (pbVar3[1] == 0x2b) {
      pbVar5 = pbVar3 + 2;
    }
    else if (pbVar3[1] == 0x2d) {
      pbVar5 = pbVar3 + 2;
      iVar10 = -1;
    }
    else {
      pbVar5 = pbVar3 + 1;
    }
    bVar2 = *pbVar5;
    bVar9 = bVar2 - 0x30U;
    if (bVar9 < 10) {
      iVar7 = 0;
      do {
        iVar7 = (uint)bVar2 + iVar7 * 10 + -0x30;
        bVar2 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while ((byte)(bVar2 - 0x30U) < 10);
      if (bVar9 < 10) {
        uVar4 = iVar7 * iVar10;
        if ((int)uVar4 < 1) {
          if ((int)uVar4 < 0) {
            uVar8 = -(iVar7 * iVar10) & 7;
            if (uVar8 == 0) {
              uVar8 = uVar4;
            }
            else {
              iVar10 = 0;
              do {
                dVar11 = dVar11 * DAT_1000fbe0;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000fbe0 * DAT_1000fbe0 * DAT_1000fbe0 * DAT_1000fbe0 *
                         DAT_1000fbe0 * DAT_1000fbe0 * DAT_1000fbe0 * DAT_1000fbe0;
                uVar8 = uVar8 + 8;
              } while (uVar8 != 0);
            }
          }
        }
        else {
          uVar8 = uVar4;
          if ((uVar4 & 7) != 0) {
            uVar8 = 0;
            do {
              dVar11 = dVar11 + dVar11;
              uVar8 = uVar8 + 1;
            } while ((uVar4 & 7) != uVar8);
            uVar8 = uVar4 - uVar8;
          }
          if (7 < uVar4) {
            uVar8 = uVar8 - 1;
            do {
              dVar11 = dVar11 + dVar11 + dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              uVar8 = uVar8 - 8;
            } while (uVar8 < 0xfffffffe);
          }
        }
        pbVar3 = pbVar5;
      }
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar3;
  }
  if (bVar1 == 0x2d) {
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000fc60);
  }
  return dVar11;
}

#undef DAT_1000fbe0
#undef DAT_1000fbe8
#undef DAT_1000fc58
#undef DAT_1000fc60
#undef _DAT_1000fc60

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10005630(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RSI;
  byte *in_RDI;
  double dVar1;

  dVar1 = recovered_100053d0(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_1000fc58
#define DAT_1000fc58 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_1000fc60
#define DAT_1000fc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef DAT_1000fdea
#define DAT_1000fdea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216U)))
#undef _DAT_1000fc60
#define _DAT_1000fc60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef str_1000fdf4
#define str_1000fdf4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x220U)))
#undef str_1000fe05
#define str_1000fe05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x231U)))
#define abStack_7a (*(byte (*)[122])(pf_stack_frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10005640(char *param_1,ulong param_2,char *param_3,uint *param_4)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  long lVar3;
  short *psVar4;
  ushort *puVar5;
  bool bVar6;
  double dVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  ulong *puVar11;
  double *pdVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  char cVar16;
  undefined8 *puVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  byte *pbVar21;
  uint uVar22;
  char *pcVar23;
  ulong uVar24;
  double dVar25;

  if (param_2 != 0) {
    *param_1 = '\0';
  }
  uVar8 = _DAT_1000fc60;
  dVar7 = DAT_1000fc58;
  uVar20 = param_2;
  uVar13 = 0;
LAB_100056a9:
  bVar15 = *param_3;
  uVar22 = (uint)uVar13;
  if (bVar15 != 0x25) {
    if (bVar15 == 0) {
      if (param_2 != 0) {
        *param_1 = 0;
      }
      return uVar13 & 0xffffffff;
    }
    if (1 < uVar20) {
      *param_1 = bVar15;
      goto LAB_100056c2;
    }
    goto LAB_100056a3;
  }
  bVar15 = param_3[1];
  if (bVar15 == 0x25) {
    if (1 < uVar20) {
      *param_1 = 0x25;
      param_1 = param_1 + 1;
      uVar20 = uVar20 - 1;
    }
    param_3 = param_3 + 1;
    goto LAB_100056a3;
  }
  uVar24 = uVar13 & 0xffffffff;
  pbVar1 = (byte *)(param_3 + 2);
  pbVar21 = (byte *)param_3;
  while( true ) {
    param_3 = (char *)pbVar1;
    if (0x30 < bVar15) break;
    if ((0x1280900000000U >> ((ulong)bVar15 & 0x3f) & 1) == 0) {
      if ((ulong)bVar15 == 0x2a) {
        if (*param_4 < 0x29) {
          *param_4 = *param_4 + 8;
        }
        else {
          *(long *)(param_4 + 2) = *(long *)(param_4 + 2) + 8;
        }
        bVar15 = *param_3;
        goto LAB_1000574c;
      }
      break;
    }
    pbVar21 = pbVar21 + 1;
    bVar15 = *param_3;
    pbVar1 = (byte *)(param_3 + 1);
  }
  do {
    bVar15 = pbVar21[1];
    param_3 = (char *)(pbVar21 + 1);
    pbVar21 = (byte *)param_3;
  } while ((byte)(bVar15 - 0x30U) < 10);
LAB_1000574c:
  iVar9 = -1;
  if (bVar15 == 0x2e) {
    bVar15 = param_3[1];
    if (bVar15 == 0x2a) {
      uVar2 = *param_4;
      if ((ulong)uVar2 < 0x29) {
        piVar10 = (int *)((ulong)uVar2 + *(long *)(param_4 + 4));
        *param_4 = uVar2 + 8;
      }
      else {
        piVar10 = *(int **)(param_4 + 2);
        *(int **)(param_4 + 2) = piVar10 + 2;
      }
      iVar9 = *piVar10;
      bVar15 = param_3[2];
      param_3 = param_3 + 2;
    }
    else {
      param_3 = param_3 + 1;
      iVar9 = 0;
      if ((byte)(bVar15 - 0x30U) < 10) {
        iVar9 = 0;
        do {
          bVar6 = (int)(((byte)(bVar15 - 0x30U) ^ 0x7ffffffe) / 10) < iVar9;
          iVar9 = (uint)(byte)(bVar15 - 0x30U) + iVar9 * 10;
          if (bVar6) {
            iVar9 = 0x7fffffff;
          }
          bVar15 = param_3[1];
          param_3 = param_3 + 1;
        } while ((byte)(bVar15 - 0x30U) < 10);
      }
    }
  }
  bVar6 = false;
  switch((uintptr_t)(bVar15)) {
  case 0x4c:
    param_3 = param_3 + 1;
    cVar16 = '\b';
    bVar6 = true;
    break;
  default:
    cVar16 = '\0';
    break;
  case 0x68:
    pbVar21 = (byte *)(param_3 + 1);
    pbVar1 = (byte *)(param_3 + 2);
    param_3 = param_3 + 1;
    if (*pbVar21 == 0x68) {
      param_3 = (char *)pbVar1;
    }
    cVar16 = (*pbVar21 != 0x68) + '\x01';
    bVar6 = false;
    break;
  case 0x6a:
    param_3 = param_3 + 1;
    cVar16 = '\a';
    bVar6 = false;
    break;
  case 0x6c:
    pbVar21 = (byte *)(param_3 + 1);
    pbVar1 = (byte *)(param_3 + 2);
    param_3 = param_3 + 1;
    if (*pbVar21 == 0x6c) {
      param_3 = (char *)pbVar1;
    }
    cVar16 = (*pbVar21 == 0x6c) + '\x03';
    bVar6 = false;
    break;
  case 0x74:
    param_3 = param_3 + 1;
    cVar16 = '\x06';
    bVar6 = false;
    break;
  case 0x7a:
    param_3 = param_3 + 1;
    cVar16 = '\x05';
    bVar6 = false;
  }
  switch((uintptr_t)(*param_3)) {
  case 'I':
  case 'd':
  case 'i':
    uVar2 = *param_4;
    uVar13 = (ulong)uVar2;
    switch((uintptr_t)(cVar16)) {
    case '\x01':
      if (uVar2 < 0x29) {
        *param_4 = uVar2 + 8;
        uVar24 = (ulong)*(char *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
        pcVar23 = *(char **)(param_4 + 2);
        *(char **)(param_4 + 2) = pcVar23 + 8;
        uVar24 = (ulong)*pcVar23;
      }
      break;
    case '\x02':
      if (uVar2 < 0x29) {
        *param_4 = uVar2 + 8;
        uVar24 = (ulong)*(short *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
        psVar4 = *(short **)(param_4 + 2);
        *(short **)(param_4 + 2) = psVar4 + 4;
        uVar24 = (ulong)*psVar4;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (0x28 < uVar2) goto LAB_10005be4;
      lVar3 = *(long *)(param_4 + 4);
      *param_4 = uVar2 + 8;
LAB_100058c8:
      uVar24 = *(ulong *)(lVar3 + uVar13);
      break;
    case '\a':
      if (uVar2 < 0x29) {
        lVar3 = *(long *)(param_4 + 4);
        *param_4 = uVar2 + 8;
        goto LAB_100058c8;
      }
LAB_10005be4:
      puVar11 = *(ulong **)(param_4 + 2);
      *(ulong **)(param_4 + 2) = puVar11 + 1;
      uVar24 = *puVar11;
      break;
    default:
      if (uVar2 < 0x29) {
        piVar10 = (int *)(uVar13 + *(long *)(param_4 + 4));
        *param_4 = uVar2 + 8;
      }
      else {
        piVar10 = *(int **)(param_4 + 2);
        *(int **)(param_4 + 2) = piVar10 + 2;
      }
      uVar24 = (ulong)*piVar10;
    }
    if ((long)uVar24 < 0) {
      if (1 < uVar20) {
        *param_1 = 0x2d;
        param_1 = param_1 + 1;
        uVar20 = uVar20 - 1;
      }
      uVar22 = uVar22 + 1;
      uVar24 = -uVar24;
    }
    uVar13 = (ulong)uVar22;
    uVar14 = 0;
    do {
      uVar19 = uVar14;
      abStack_7a[uVar19 + 2] = str_1000fe05[uVar24 % 10];
      uVar14 = uVar19 + 1;
      bVar6 = 9 < uVar24;
      uVar24 = uVar24 / 10;
    } while (bVar6);
    if (uVar14 != 0) {
      if ((uVar19 & 1) == 0) {
        if (1 < uVar20) {
          *param_1 = abStack_7a[uVar19 + 2];
          param_1 = param_1 + 1;
          uVar20 = uVar20 - 1;
        }
      }
      else {
        uVar19 = uVar14;
      }
      uVar13 = uVar13 + uVar14;
      if (uVar14 != 1) {
        do {
          if (1 < uVar20) {
            *param_1 = abStack_7a[uVar19 + 1];
            param_1 = param_1 + 1;
            uVar20 = uVar20 - 1;
          }
          if (1 < uVar20) {
            *param_1 = abStack_7a[uVar19];
            param_1 = param_1 + 1;
            uVar20 = uVar20 - 1;
          }
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
    }
    break;
  default:
    if (1 < uVar20) {
      *param_1 = 0x3f;
LAB_100056c2:
      param_1 = param_1 + 1;
      uVar20 = uVar20 - 1;
    }
    goto LAB_100056a3;
  case 'X':
  case 'x':
    uVar22 = *param_4;
    uVar13 = (ulong)uVar22;
    switch((uintptr_t)(cVar16)) {
    case '\x01':
      if (uVar22 < 0x29) {
        *param_4 = uVar22 + 8;
        uVar13 = (ulong)*(byte *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
        pbVar21 = *(byte **)(param_4 + 2);
        *(byte **)(param_4 + 2) = pbVar21 + 8;
        uVar13 = (ulong)*pbVar21;
      }
      break;
    case '\x02':
      if (uVar22 < 0x29) {
        *param_4 = uVar22 + 8;
        uVar13 = (ulong)*(ushort *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
        puVar5 = *(ushort **)(param_4 + 2);
        *(ushort **)(param_4 + 2) = puVar5 + 4;
        uVar13 = (ulong)*puVar5;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar22 < 0x29) {
        *param_4 = uVar22 + 8;
        uVar13 = *(ulong *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
LAB_10005d31:
        puVar11 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10005d31;
      *param_4 = uVar22 + 8;
      uVar13 = *(ulong *)(*(long *)(param_4 + 4) + uVar13);
      break;
    default:
      if (uVar22 < 0x29) {
        puVar18 = (uint *)(uVar13 + *(long *)(param_4 + 4));
        *param_4 = uVar22 + 8;
      }
      else {
        puVar18 = *(uint **)(param_4 + 2);
        *(uint **)(param_4 + 2) = puVar18 + 2;
      }
      uVar13 = (ulong)*puVar18;
    }
    pcVar23 = str_1000fe05;
    if (*param_3 == 0x58) {
      pcVar23 = str_1000fdf4;
    }
    uVar14 = 0;
    do {
      uVar19 = uVar14;
      abStack_7a[uVar19 + 2] = pcVar23[(uint)uVar13 & 0xf];
      uVar14 = uVar19 + 1;
      bVar6 = 0xf < uVar13;
      uVar13 = uVar13 >> 4;
    } while (bVar6);
    if ((uVar19 & 1) == 0) {
      if (1 < uVar20) {
        *param_1 = abStack_7a[uVar19 + 2];
        param_1 = param_1 + 1;
        uVar20 = uVar20 - 1;
      }
    }
    else {
      uVar19 = uVar14;
    }
    if (uVar14 != 1) {
      do {
        if (1 < uVar20) {
          *param_1 = abStack_7a[uVar19 + 1];
          param_1 = param_1 + 1;
          uVar20 = uVar20 - 1;
        }
        if (1 < uVar20) {
          *param_1 = abStack_7a[uVar19];
          param_1 = param_1 + 1;
          uVar20 = uVar20 - 1;
        }
        uVar19 = uVar19 - 2;
      } while (uVar19 != 0);
    }
    param_3 = param_3 + 1;
    uVar13 = uVar24 + uVar14 & 0xffffffff;
    goto LAB_100056a9;
  case 'c':
    uVar2 = *param_4;
    if ((ulong)uVar2 < 0x29) {
      pbVar21 = (byte *)((ulong)uVar2 + *(long *)(param_4 + 4));
      *param_4 = uVar2 + 8;
    }
    else {
      pbVar21 = *(byte **)(param_4 + 2);
      *(byte **)(param_4 + 2) = pbVar21 + 8;
    }
    if (1 < uVar20) {
      *param_1 = *pbVar21;
      goto LAB_100056c2;
    }
LAB_100056a3:
    uVar13 = (ulong)(uVar22 + 1);
    break;
  case 'f':
    if (bVar6) {
      *(ulong *)(param_4 + 2) = (*(long *)(param_4 + 2) + 0xfU & 0xfffffffffffffff0) + 0x10;
      uVar24 = uVar20;
      if (1 < uVar20) {
        *param_1 = 0x30;
        uVar24 = 1;
        if (uVar20 - 3 < 0xfffffffffffffffe) {
          param_1[1] = 0x2e;
          uVar13 = uVar20 & 0xfffffffffffffffe;
          if (uVar13 == 2) {
            param_1 = param_1 + 2;
          }
          else {
            param_1[2] = 0x30;
            if (uVar20 - 5 < 0xfffffffffffffffe) {
              param_1[3] = 0x30;
              if (uVar13 == 4) {
                param_1 = param_1 + 4;
              }
              else {
                param_1[4] = 0x30;
                if (uVar20 - 7 < 0xfffffffffffffffe) {
                  param_1[5] = 0x30;
                  if (uVar13 == 6) {
                    param_1 = param_1 + 6;
                  }
                  else {
                    param_1[6] = 0x30;
                    if (uVar20 - 9 < 0xfffffffffffffffe) {
                      param_1[7] = 0x30;
                      param_1 = param_1 + 8;
                      uVar24 = uVar20 - 8;
                    }
                    else {
                      param_1 = param_1 + 7;
                    }
                  }
                }
                else {
                  param_1 = param_1 + 5;
                }
              }
            }
            else {
              param_1 = param_1 + 3;
            }
          }
        }
        else {
          param_1 = param_1 + 1;
        }
      }
      uVar13 = (ulong)(uVar22 + 8);
      param_3 = param_3 + 1;
      uVar20 = uVar24;
    }
    else {
      uVar2 = param_4[1];
      if ((ulong)uVar2 < 0xa1) {
        pdVar12 = (double *)((ulong)uVar2 + *(long *)(param_4 + 4));
        param_4[1] = uVar2 + 0x10;
      }
      else {
        pdVar12 = *(double **)(param_4 + 2);
        *(double **)(param_4 + 2) = pdVar12 + 1;
      }
      dVar25 = *pdVar12;
      uVar13 = uVar20;
      if (dVar25 < 0.0) {
        if (1 < uVar20) {
          *param_1 = 0x2d;
          param_1 = param_1 + 1;
          uVar20 = uVar20 - 1;
        }
        uVar22 = uVar22 + 1;
        dVar25 = (double)((ulong)dVar25 ^ uVar8);
        uVar13 = uVar20;
      }
      uVar20 = 0;
      uVar24 = (ulong)(uint)(int)dVar25;
      do {
        uVar14 = uVar20;
        abStack_7a[uVar14 + 2] = str_1000fe05[uVar24 % 10];
        uVar20 = uVar14 + 1;
        bVar6 = 9 < uVar24;
        uVar24 = uVar24 / 10;
      } while (bVar6);
      if (uVar20 != 0) {
        if ((uVar14 & 1) == 0) {
          if (1 < uVar13) {
            *param_1 = abStack_7a[uVar14 + 2];
            param_1 = param_1 + 1;
            uVar13 = uVar13 - 1;
          }
        }
        else {
          uVar14 = uVar20;
        }
        uVar22 = uVar22 + (int)uVar20;
        if (uVar20 != 1) {
          do {
            if (1 < uVar13) {
              *param_1 = abStack_7a[uVar14 + 1];
              param_1 = param_1 + 1;
              uVar13 = uVar13 - 1;
            }
            if (1 < uVar13) {
              *param_1 = abStack_7a[uVar14];
              param_1 = param_1 + 1;
              uVar13 = uVar13 - 1;
            }
            uVar14 = uVar14 - 2;
          } while (uVar14 != 0);
        }
      }
      uVar20 = uVar13;
      if (1 < uVar13) {
        *param_1 = 0x2e;
        uVar20 = uVar13 - 1;
        if (uVar20 < 2) {
          param_1 = param_1 + 1;
        }
        else {
          dVar25 = (dVar25 - (double)(int)dVar25) * dVar7;
          iVar9 = (int)dVar25;
          param_1[1] = (char)iVar9 + 0x30;
          uVar24 = uVar13 & 0xfffffffffffffffe;
          uVar20 = 1;
          if (uVar24 == 2) {
            param_1 = param_1 + 2;
          }
          else {
            dVar25 = (dVar25 - (double)iVar9) * dVar7;
            iVar9 = (int)dVar25;
            param_1[2] = (char)iVar9 + 0x30;
            if (uVar13 - 5 < 0xfffffffffffffffe) {
              dVar25 = (dVar25 - (double)iVar9) * dVar7;
              iVar9 = (int)dVar25;
              param_1[3] = (char)iVar9 + 0x30;
              if (uVar24 == 4) {
                param_1 = param_1 + 4;
              }
              else {
                dVar25 = (dVar25 - (double)iVar9) * dVar7;
                param_1[4] = (char)(int)dVar25 + 0x30;
                if (uVar13 - 7 < 0xfffffffffffffffe) {
                  dVar25 = (dVar25 - (double)(int)dVar25) * dVar7;
                  iVar9 = (int)dVar25;
                  param_1[5] = (char)iVar9 + 0x30;
                  if (uVar24 == 6) {
                    param_1 = param_1 + 6;
                  }
                  else {
                    param_1[6] = (char)(int)((dVar25 - (double)iVar9) * dVar7) + 0x30;
                    param_1 = param_1 + 7;
                    uVar20 = uVar13 - 7;
                  }
                }
                else {
                  param_1 = param_1 + 5;
                }
              }
            }
            else {
              param_1 = param_1 + 3;
            }
          }
        }
      }
      uVar13 = (ulong)(uVar22 + 7);
      param_3 = param_3 + 1;
    }
    goto LAB_100056a9;
  case 'p':
    uVar2 = *param_4;
    if ((ulong)uVar2 < 0x29) {
      puVar11 = (ulong *)((ulong)uVar2 + *(long *)(param_4 + 4));
      *param_4 = uVar2 + 8;
    }
    else {
      puVar11 = *(ulong **)(param_4 + 2);
      *(ulong **)(param_4 + 2) = puVar11 + 1;
    }
    uVar24 = *puVar11;
    if (1 < uVar20) {
      *param_1 = 0x30;
      if (uVar20 - 3 < 0xfffffffffffffffe) {
        param_1[1] = 0x78;
        param_1 = param_1 + 2;
        uVar20 = uVar20 - 2;
      }
      else {
        param_1 = param_1 + 1;
        uVar20 = 1;
      }
    }
    uVar13 = 0;
    do {
      uVar14 = uVar13;
      abStack_7a[uVar14 + 2] = str_1000fe05[(uint)uVar24 & 0xf];
      uVar13 = uVar14 + 1;
      bVar6 = 0xf < uVar24;
      uVar24 = uVar24 >> 4;
    } while (bVar6);
    if ((uVar14 & 1) == 0) {
      if (1 < uVar20) {
        *param_1 = abStack_7a[uVar14 + 2];
        param_1 = param_1 + 1;
        uVar20 = uVar20 - 1;
      }
    }
    else {
      uVar14 = uVar13;
    }
    if (uVar13 != 1) {
      do {
        if (1 < uVar20) {
          *param_1 = abStack_7a[uVar14 + 1];
          param_1 = param_1 + 1;
          uVar20 = uVar20 - 1;
        }
        if (1 < uVar20) {
          *param_1 = abStack_7a[uVar14];
          param_1 = param_1 + 1;
          uVar20 = uVar20 - 1;
        }
        uVar14 = uVar14 - 2;
      } while (uVar14 != 0);
    }
    uVar13 = (uVar22 + 2) + uVar13;
    param_3 = param_3 + 1;
    goto LAB_100056a9;
  case 's':
    uVar22 = *param_4;
    if ((ulong)uVar22 < 0x29) {
      puVar17 = (undefined8 *)((ulong)uVar22 + *(long *)(param_4 + 4));
      *param_4 = uVar22 + 8;
    }
    else {
      puVar17 = *(undefined8 **)(param_4 + 2);
      *(undefined8 **)(param_4 + 2) = puVar17 + 1;
    }
    if (iVar9 != 0) {
      pbVar21 = (byte *)*puVar17;
      if (pbVar21 == (byte *)0x0) {
        pbVar21 = &DAT_1000fdea;
      }
      do {
        if (*pbVar21 == 0) break;
        if (1 < uVar20) {
          *param_1 = *pbVar21;
          param_1 = param_1 + 1;
          uVar20 = uVar20 - 1;
        }
        pbVar21 = pbVar21 + 1;
        uVar13 = (ulong)((int)uVar13 + 1);
        iVar9 = iVar9 - (uint)(0 < iVar9);
      } while (iVar9 != 0);
    }
    break;
  case 'u':
    uVar22 = *param_4;
    uVar13 = (ulong)uVar22;
    switch((uintptr_t)(cVar16)) {
    case '\x01':
      if (uVar22 < 0x29) {
        *param_4 = uVar22 + 8;
        uVar13 = (ulong)*(byte *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
        pbVar21 = *(byte **)(param_4 + 2);
        *(byte **)(param_4 + 2) = pbVar21 + 8;
        uVar13 = (ulong)*pbVar21;
      }
      break;
    case '\x02':
      if (uVar22 < 0x29) {
        *param_4 = uVar22 + 8;
        uVar13 = (ulong)*(ushort *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
        puVar5 = *(ushort **)(param_4 + 2);
        *(ushort **)(param_4 + 2) = puVar5 + 4;
        uVar13 = (ulong)*puVar5;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar22 < 0x29) {
        *param_4 = uVar22 + 8;
        uVar13 = *(ulong *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
LAB_10006063:
        puVar11 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10006063;
      *param_4 = uVar22 + 8;
      uVar13 = *(ulong *)(*(long *)(param_4 + 4) + uVar13);
      break;
    default:
      if (uVar22 < 0x29) {
        puVar18 = (uint *)(uVar13 + *(long *)(param_4 + 4));
        *param_4 = uVar22 + 8;
      }
      else {
        puVar18 = *(uint **)(param_4 + 2);
        *(uint **)(param_4 + 2) = puVar18 + 2;
      }
      uVar13 = (ulong)*puVar18;
    }
    uVar14 = 0;
    do {
      uVar19 = uVar14;
      abStack_7a[uVar19 + 2] = str_1000fe05[uVar13 % 10];
      uVar14 = uVar19 + 1;
      bVar6 = 9 < uVar13;
      uVar13 = uVar13 / 10;
    } while (bVar6);
    if (uVar14 == 0) {
      param_3 = param_3 + 1;
      uVar13 = uVar24;
    }
    else {
      if ((uVar19 & 1) == 0) {
        if (1 < uVar20) {
          *param_1 = abStack_7a[uVar19 + 2];
          param_1 = param_1 + 1;
          uVar20 = uVar20 - 1;
        }
      }
      else {
        uVar19 = uVar14;
      }
      if (uVar14 == 1) {
        uVar13 = uVar24 + uVar14 & 0xffffffff;
        param_3 = param_3 + 1;
      }
      else {
        do {
          if (1 < uVar20) {
            *param_1 = abStack_7a[uVar19 + 1];
            param_1 = param_1 + 1;
            uVar20 = uVar20 - 1;
          }
          if (1 < uVar20) {
            *param_1 = abStack_7a[uVar19];
            param_1 = param_1 + 1;
            uVar20 = uVar20 - 1;
          }
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
        uVar13 = uVar24 + uVar14 & 0xffffffff;
        param_3 = param_3 + 1;
      }
    }
    goto LAB_100056a9;
  }
  param_3 = param_3 + 1;
  goto LAB_100056a9;
}

#undef DAT_1000fc58
#undef DAT_1000fc60
#undef DAT_1000fdea
#undef _DAT_1000fc60
#undef str_1000fdf4
#undef str_1000fe05
#undef abStack_7a

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10006520(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10005640(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_10000000
#define DAT_10000000 (*(uint8_t *)(0x10000000U))
#undef DAT_10000008
#define DAT_10000008 (*(uint8_t *)(0x10000008U))
#undef DAT_10000010
#define DAT_10000010 (*(uint8_t *)(0x10000010U))
#undef DAT_10000018
#define DAT_10000018 (*(uint8_t *)(0x10000018U))
#undef DAT_10011128
#define DAT_10011128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1554U)))
#undef DAT_10011138
#define DAT_10011138 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1564U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(uint64_t * *)(0x10000000U))
#undef _DAT_10000008
#define _DAT_10000008 (*(uint64_t *)(0x10000008U))
#undef _DAT_10000010
#define _DAT_10000010 (*(uint64_t *)(0x10000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_100065a0(long *param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;

  plVar1 = (long *)0xffffffffffffffff;
  if (!CARRY8((ulong)param_1,param_2)) {
    plVar1 = (long *)((long)param_1 + param_2);
  }
  if (((param_1 < (long *)0x10000000) && (param_1 < plVar1)) && ((long *)0x8000000 < plVar1)) {
    if (param_1 < (long *)0x8000000) {
      if (param_3 == (ulong *)0x0) {
        return plVar1;
      }
      plVar2 = (long *)(ulong)((int)param_1 + 0xfU & 0xffffff0);
      uVar4 = (0x8000000U - (long)param_1) - ((long)plVar2 - (long)param_1);
      if (((ulong)((long)plVar2 - (long)param_1) <= 0x8000000U - (long)param_1 && uVar4 != 0) &&
         (uVar4 = uVar4 & 0xfffffffffffffff0, 0x30 < uVar4)) {
        *plVar2 = uVar4 - 0x20;
        plVar2[1] = 0;
        uVar4 = *param_3;
        plVar2[2] = uVar4;
        *(undefined1 *)(plVar2 + 3) = 1;
        puVar5 = (ulong *)(uVar4 + 8);
        if (DAT_10011128 == 0) {
          puVar5 = (ulong *)&DAT_10011128;
        }
        *puVar5 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_10011138 == (long *)0x0) {
          DAT_10011138 = plVar2;
        }
      }
    }
    if ((param_3 != (ulong *)0x0 && &DAT_10000000 < plVar1) &&
       (plVar1 = (long *)((ulong)plVar1 & 0xfffffffffffffff0), (long *)0x30 < plVar1 + -0x2000000))
    {
      _DAT_10000000 = plVar1 + -0x2000004;
      _DAT_10000008 = 0;
      _DAT_10000010 = *param_3;
      DAT_10000018 = 1;
      plVar1 = (long *)(_DAT_10000010 + 8);
      if (DAT_10011128 == 0) {
        plVar1 = &DAT_10011128;
      }
      *plVar1 = 0x10000000;
      *param_3 = 0x10000000;
      if (DAT_10011138 == (long *)0x0) {
        DAT_10011138 = (long *)&DAT_10000000;
        return (long *)&DAT_10000000;
      }
    }
  }
  else {
    plVar1 = (long *)((long)param_1 + param_2);
    if (((!CARRY8((ulong)param_1,param_2)) && (param_1 < (long *)0xfffffffffffffff1)) &&
       (param_3 != (ulong *)0x0)) {
      plVar1 = (long *)((long)param_1 + 0xfU & 0xfffffffffffffff0);
      uVar4 = param_2 - ((long)plVar1 - (long)param_1);
      if (((ulong)((long)plVar1 - (long)param_1) <= param_2 && uVar4 != 0) &&
         (uVar4 = uVar4 & 0xfffffffffffffff0, 0x30 < uVar4)) {
        *plVar1 = uVar4 - 0x20;
        plVar1[1] = 0;
        uVar4 = *param_3;
        plVar1[2] = uVar4;
        *(undefined1 *)(plVar1 + 3) = 1;
        puVar3 = (undefined8 *)(uVar4 + 8);
        if (DAT_10011128 == 0) {
          puVar3 = &DAT_10011128;
        }
        *puVar3 = plVar1;
        *param_3 = (ulong)plVar1;
        if (DAT_10011138 == (long *)0x0) {
          DAT_10011138 = plVar1;
          return plVar1;
        }
      }
    }
  }
  return plVar1;
}

#undef DAT_10000000
#undef DAT_10000008
#undef DAT_10000010
#undef DAT_10000018
#undef DAT_10011128
#undef DAT_10011138
#undef _DAT_10000000
#undef _DAT_10000008
#undef _DAT_10000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006760
 */

ulong * recovered_10006760(ulong *param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;

  puVar2 = (ulong *)0x0;
  if ((((param_1 != (ulong *)0x0) && (((ulong)param_2 & 0xf) == 0)) && ((char)param_1[3] != '\0'))
     && (param_1 + 4 < param_2)) {
    uVar3 = (long)param_2 - (long)(param_1 + 4);
    if (uVar3 < 0x30) {
      return (ulong *)0x0;
    }
    if (*param_1 < uVar3) {
      return (ulong *)0x0;
    }
    puVar2 = param_2 + -4;
    param_2[-4] = *param_1 - uVar3;
    uVar1 = param_1[1];
    param_2[-3] = uVar1;
    param_2[-2] = (ulong)param_1;
    *(undefined1 *)(param_2 + -1) = 1;
    if (uVar1 != 0) {
      *(ulong **)(uVar1 + 0x10) = puVar2;
    }
    *param_1 = uVar3 - 0x20;
    param_1[1] = (ulong)puVar2;
  }
  return puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067d0
 */

undefined8 recovered_100067d0(ulong *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;

  if (param_1 != (ulong *)0x0) {
    uVar3 = param_2 + 0xfU & 0xfffffffffffffff0;
    uVar2 = *param_1 - uVar3;
    if (0x2f < uVar2 && uVar3 <= *param_1) {
      uVar1 = (long)param_1 + uVar3 + 0x20;
      *(ulong *)((long)param_1 + uVar3 + 0x20) = uVar2 - 0x20;
      uVar2 = param_1[1];
      *(ulong *)((long)param_1 + uVar3 + 0x28) = uVar2;
      *(ulong **)((long)param_1 + uVar3 + 0x30) = param_1;
      *(undefined1 *)((long)param_1 + uVar3 + 0x38) = 1;
      if (uVar2 != 0) {
        *(ulong *)(uVar2 + 0x10) = uVar1;
      }
      *param_1 = uVar3;
      param_1[1] = uVar1;
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
  return 0;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_10011140
#define DAT_10011140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x156cU)))
#undef DAT_10011150
#define DAT_10011150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#define local_238 (*(undefined1 (*)[568])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006830
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006830(long param_1,long param_2)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;

  if (param_2 != 0 && param_1 != 0) {
    lVar4 = 0;
    do {
      cVar2 = *(char *)(param_1 + lVar4);
      if (cVar2 == '\b') {
        if (DAT_10011140 != 0) {
          DAT_10011140 = DAT_10011140 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_10011140 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001db0(local_238,&DAT_10011150,DAT_10011140);
            uVar3 = DAT_10011140;
          }
          local_238[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 &&
              ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00280840)(local_238);
          }
          DAT_10011140 = 0;
        }
        else {
          if (DAT_10011140 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001db0(local_238,&DAT_10011150,DAT_10011140);
            local_238[DAT_10011140] = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00280840)(local_238);
            }
            DAT_10011140 = 0;
          }
          pcVar1 = &DAT_10011150 + DAT_10011140;
          DAT_10011140 = DAT_10011140 + 1;
          *pcVar1 = cVar2;
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != lVar4);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_10011140
#undef DAT_10011150
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_238

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_10011140
#define DAT_10011140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x156cU)))
#undef DAT_10011150
#define DAT_10011150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#define local_208 (*(undefined1 (*)[520])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006a00(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_10011140 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001db0(local_208,&DAT_10011150,DAT_10011140);
    uVar1 = DAT_10011140;
  }
  local_208[uVar1] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280840)(local_208);
  }
  DAT_10011140 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_10011140
#undef DAT_10011150
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_208

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_10011140
#define DAT_10011140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x156cU)))
#undef DAT_10011150
#define DAT_10011150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#define local_208 (*(undefined1 (*)[520])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006aa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006aa0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_10011140 != 0) {
    recovered_10001db0(local_208,&DAT_10011150,DAT_10011140);
    local_208[DAT_10011140] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_208);
    }
    DAT_10011140 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_10011140
#undef DAT_10011150
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_208

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_148 (*(undefined1 (*)[320])(frame + 16))
void recovered_10006b40(undefined *param_1,undefined1 *param_2)

{
  unsigned char frame[376] = {0};

  uint extraout_EAX = 0;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  recovered_10006520(in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa);
  if (0 < (int)extraout_EAX) {
    recovered_10006830((long)local_148,(ulong)extraout_EAX);
  }
  return;
}

#undef local_148

#undef DAT_1000fe34
#define DAT_1000fe34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x260U)))
#undef str_1000fe19
#define str_1000fe19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ba0
 */

void recovered_10006ba0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003850(str_1000fe19);
  recovered_10006830(((uintptr_t)pf_module_state+0x245U),uVar1);
  uVar1 = recovered_10003850(&DAT_1000fe34);
  recovered_10006830(((uintptr_t)pf_module_state+0x260U),uVar1);
  return;
}

#undef DAT_1000fe34
#undef str_1000fe19

#undef DAT_1000fe34
#define DAT_1000fe34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x260U)))
#undef str_1000fe37
#define str_1000fe37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x263U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006be0
 */

void recovered_10006be0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003850(str_1000fe37);
  recovered_10006830(((uintptr_t)pf_module_state+0x263U),uVar1);
  uVar1 = recovered_10003850(&DAT_1000fe34);
  recovered_10006830(((uintptr_t)pf_module_state+0x260U),uVar1);
  return;
}

#undef DAT_1000fe34
#undef str_1000fe37

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_00280844
#define DAT_00280844 (*(uint8_t *)(0x280844U))
#undef DAT_10011140
#define DAT_10011140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x156cU)))
#undef DAT_10011150
#define DAT_10011150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#undef _DAT_00280844
#define _DAT_00280844 (*(uint *)(0x280844U))
#define local_228 (*(undefined1 (*)[552])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10006c20(long param_1,long param_2,char *param_3,byte param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_2 == 0 || param_1 == 0) {
    return '\0';
  }
  if (DAT_10011140 != 0) {
    recovered_10001db0(local_228,&DAT_10011150,DAT_10011140);
    local_228[DAT_10011140] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_228);
    }
    DAT_10011140 = 0;
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x47 < _DAT_00280808 && ((code *)(ulong)_DAT_00280844 != (code *)0x0)))))) {
    iVar1 = (*(code *)(ulong)_DAT_00280844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_10011140
#undef DAT_10011150
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_228

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006d40(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006d50(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10006d60(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_1000fe16
#define DAT_1000fe16 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x242U)))
#undef DAT_10011060
#define DAT_10011060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x148cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef str_1000feb8
#define str_1000feb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e4U)))
#undef str_1000fec5
#define str_1000fec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f1U)))
#undef str_1000fed3
#define str_1000fed3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ffU)))
#define in_stack_ffffffffffffffc8 (*(undefined4 *)(pf_stack_frame + 152))
#define in_stack_ffffffffffffffcc (*(uint *)(pf_stack_frame + 156))
#define in_stack_ffffffffffffffd0 (*(uint *)(pf_stack_frame + 160))
#define in_stack_ffffffffffffffd4 (*(undefined4 *)(pf_stack_frame + 164))
#define auStackY_b8 (*(undefined1 (*)[184])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d70
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10006d70(long param_1,long param_2)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ulong uVar7;
  void *dst;
  ulong bytes;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;

  if (param_1 == 0 || param_2 == 0) {
    DAT_10011060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10003880((byte *)param_1,(byte *)str_1000feb8);
  if (iVar3 == 0) {
    uVar8 = 1;
LAB_1000701e:
    puVar5 = recovered_10001cc0(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_10011060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10002ab0(puVar5,0,0x340);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    recovered_10006520(puVar5 + 1,0xf1,&DAT_1000fe16,param_1,in_R8,in_R9,
                       CONCAT44(in_stack_ffffffffffffffcc,in_stack_ffffffffffffffc8),
                       CONCAT44(in_stack_ffffffffffffffd4,in_stack_ffffffffffffffd0));
    return puVar5;
  }
  iVar4 = recovered_10003880((byte *)param_1,(byte *)str_1000fec5);
  if (iVar4 == 0) {
    uVar8 = 2;
    goto LAB_1000701e;
  }
  iVar4 = recovered_10003880((byte *)param_1,(byte *)str_1000fed3);
  if (iVar4 == 0) {
    uVar8 = 3;
    goto LAB_1000701e;
  }
  puVar5 = recovered_10001cc0(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_10011060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10002ab0(puVar5,0,0x340);
  *puVar5 = 0;
  pcVar6 = recovered_10003da0((char *)param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10003da0((char *)param_2,'+');
    bVar9 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10003da0((char *)param_2,'a');
      bVar9 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar5 + 0x49) = bVar9;
  pcVar6 = recovered_10003da0((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10003da0((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10003da0((char *)param_2,'+');
    bVar10 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar5 + 0x125) = bVar10;
  pcVar6 = recovered_10003da0((char *)param_2,'a');
  *(bool *)((long)puVar5 + 0x126) = pcVar6 != (char *)0x0;
  puVar5[0x48] = 0xffffffff;
  recovered_10006520(puVar5 + 1,0xf1,&DAT_1000fe16,param_1,in_R8,in_R9,
                     CONCAT44(in_stack_ffffffffffffffcc,in_stack_ffffffffffffffc8),
                     CONCAT44(in_stack_ffffffffffffffd4,in_stack_ffffffffffffffd0));
  recovered_10002ab0(auStackY_b8 + 0x84,0,0xc);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00280834)(param_1,auStackY_b8 + 0x84), iVar3 != 0)))) {
    pcVar6 = recovered_10003da0((char *)param_2,'w');
    if (in_stack_ffffffffffffffd0 != 0 && pcVar6 == (char *)0x0) {
      if (*(char *)((long)puVar5 + 0x125) == '\x01') {
        bytes = (ulong)in_stack_ffffffffffffffd0;
        uVar7 = *(ulong *)(puVar5 + 0x44);
        if (uVar7 < bytes) {
          uVar2 = 0x100;
          if (uVar7 != 0) {
            uVar2 = uVar7;
          }
          do {
            uVar7 = uVar2;
            uVar2 = uVar7 * 2;
          } while (uVar7 < bytes);
          dst = recovered_10001d60(*(void **)(puVar5 + 0x40),uVar7);
          if (dst == (void *)0x0) {
            DAT_10011060 = 0xc;
            *(undefined1 *)((long)puVar5 + 0x129) = 1;
            goto LAB_100070a8;
          }
          *(void **)(puVar5 + 0x40) = dst;
          *(ulong *)(puVar5 + 0x44) = uVar7;
          *(void **)(puVar5 + 0x3e) = dst;
          bytes = (ulong)in_stack_ffffffffffffffd0;
        }
        else {
          dst = *(void **)(puVar5 + 0x40);
        }
        recovered_10001db0(dst,(void *)(ulong)in_stack_ffffffffffffffcc,bytes);
      }
      else {
        *(ulong *)(puVar5 + 0x3e) = (ulong)in_stack_ffffffffffffffcc;
      }
      *(ulong *)(puVar5 + 0x42) = (ulong)in_stack_ffffffffffffffd0;
      cVar1 = *(char *)((long)puVar5 + 0x126);
      goto joined_r0x10007002;
    }
  }
  else if (*(char *)((long)puVar5 + 0x125) == '\0') {
    DAT_10011060 = 2;
LAB_100070a8:
    recovered_10001d10(puVar5);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar5 + 0x126);
joined_r0x10007002:
  if (cVar1 == '\x01') {
    *(undefined8 *)(puVar5 + 0x46) = *(undefined8 *)(puVar5 + 0x42);
    return puVar5;
  }
  return puVar5;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_1000fe16
#undef DAT_10011060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_1000feb8
#undef str_1000fec5
#undef str_1000fed3
#undef in_stack_ffffffffffffffc8
#undef in_stack_ffffffffffffffcc
#undef in_stack_ffffffffffffffd0
#undef in_stack_ffffffffffffffd4
#undef auStackY_b8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_1000fe16
#define DAT_1000fe16 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x242U)))
#undef DAT_10011060
#define DAT_10011060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x148cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
#undef str_1000feb8
#define str_1000feb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e4U)))
#undef str_1000fec5
#define str_1000fec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f1U)))
#undef str_1000fed3
#define str_1000fed3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ffU)))
#define in_stack_ffffffffffffffc8 (*(undefined4 *)(pf_stack_frame + 152))
#define in_stack_ffffffffffffffcc (*(uint *)(pf_stack_frame + 156))
#define in_stack_ffffffffffffffd0 (*(ulong *)(pf_stack_frame + 160))
#define auStackY_b8 (*(undefined1 (*)[184])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007100
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10007100(long param_1,long param_2,int *param_3)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  void *dst;
  undefined4 *puVar8;
  ulong bytes;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;

  if (param_3 != (int *)0x0) {
    if ((*param_3 == 0) && (*(char *)((long)param_3 + 0x127) == '\x01')) {
      if (((_DAT_00280800 == 0x50414d57) &&
          (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
         (((code *)(ulong)_DAT_00280838 != (code *)0x0 &&
          (iVar5 = (*(code *)(ulong)_DAT_00280838)
                             (param_3 + 1,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]), iVar5 != 0
          )))) {
        *(undefined1 *)((long)param_3 + 0x127) = 0;
      }
      else {
        DAT_10011060 = 5;
        *(undefined1 *)((long)param_3 + 0x129) = 1;
      }
    }
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      recovered_10001d10(*(void **)(param_3 + 0x40));
    }
    recovered_10001d10(param_3);
    puVar8 = recovered_10006d70(param_1,param_2);
    return puVar8;
  }
  if (param_1 == 0 || param_2 == 0) {
    DAT_10011060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar5 = recovered_10003880((byte *)param_1,(byte *)str_1000feb8);
  if (iVar5 == 0) {
    uVar9 = 1;
LAB_1000701e:
    puVar8 = recovered_10001cc0(0x340);
    if (puVar8 == (undefined4 *)0x0) {
      DAT_10011060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10002ab0(puVar8,0,0x340);
    *puVar8 = uVar9;
    *(bool *)(puVar8 + 0x49) = iVar5 == 0;
    *(bool *)((long)puVar8 + 0x125) = iVar5 != 0;
    puVar8[0x48] = 0xffffffff;
    recovered_10006520(puVar8 + 1,0xf1,&DAT_1000fe16,param_1,in_R8,in_R9,
                       CONCAT44(in_stack_ffffffffffffffcc,in_stack_ffffffffffffffc8),
                       in_stack_ffffffffffffffd0);
    return puVar8;
  }
  iVar3 = recovered_10003880((byte *)param_1,(byte *)str_1000fec5);
  if (iVar3 == 0) {
    uVar9 = 2;
    goto LAB_1000701e;
  }
  iVar3 = recovered_10003880((byte *)param_1,(byte *)str_1000fed3);
  if (iVar3 == 0) {
    uVar9 = 3;
    goto LAB_1000701e;
  }
  puVar8 = recovered_10001cc0(0x340);
  if (puVar8 == (undefined4 *)0x0) {
    DAT_10011060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10002ab0(puVar8,0,0x340);
  *puVar8 = 0;
  pcVar6 = recovered_10003da0((char *)param_2,'r');
  bVar11 = true;
  bVar10 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10003da0((char *)param_2,'+');
    bVar10 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10003da0((char *)param_2,'a');
      bVar10 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar8 + 0x49) = bVar10;
  pcVar6 = recovered_10003da0((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10003da0((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10003da0((char *)param_2,'+');
    bVar11 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar8 + 0x125) = bVar11;
  pcVar6 = recovered_10003da0((char *)param_2,'a');
  *(bool *)((long)puVar8 + 0x126) = pcVar6 != (char *)0x0;
  puVar8[0x48] = 0xffffffff;
  recovered_10006520(puVar8 + 1,0xf1,&DAT_1000fe16,param_1,in_R8,in_R9,
                     CONCAT44(in_stack_ffffffffffffffcc,in_stack_ffffffffffffffc8),
                     in_stack_ffffffffffffffd0);
  recovered_10002ab0(auStackY_b8 + 0x84,0,0xc);
  if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
      ((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)))) &&
     (iVar5 = (*(code *)(ulong)_DAT_00280834)(param_1,auStackY_b8 + 0x84), iVar5 != 0)) {
    pcVar6 = recovered_10003da0((char *)param_2,'w');
    uVar4 = (uint)in_stack_ffffffffffffffd0;
    if (uVar4 != 0 && pcVar6 == (char *)0x0) {
      if (*(char *)((long)puVar8 + 0x125) == '\x01') {
        bytes = in_stack_ffffffffffffffd0 & 0xffffffff;
        uVar7 = *(ulong *)(puVar8 + 0x44);
        if (uVar7 < bytes) {
          uVar2 = 0x100;
          if (uVar7 != 0) {
            uVar2 = uVar7;
          }
          do {
            uVar7 = uVar2;
            uVar2 = uVar7 * 2;
          } while (uVar7 < bytes);
          dst = recovered_10001d60(*(void **)(puVar8 + 0x40),uVar7);
          uVar4 = (uint)in_stack_ffffffffffffffd0;
          if (dst == (void *)0x0) {
            DAT_10011060 = 0xc;
            *(undefined1 *)((long)puVar8 + 0x129) = 1;
            goto LAB_100070a8;
          }
          *(void **)(puVar8 + 0x40) = dst;
          *(ulong *)(puVar8 + 0x44) = uVar7;
          *(void **)(puVar8 + 0x3e) = dst;
          bytes = in_stack_ffffffffffffffd0 & 0xffffffff;
        }
        else {
          dst = *(void **)(puVar8 + 0x40);
        }
        recovered_10001db0(dst,(void *)(ulong)in_stack_ffffffffffffffcc,bytes);
      }
      else {
        *(ulong *)(puVar8 + 0x3e) = (ulong)in_stack_ffffffffffffffcc;
      }
      *(ulong *)(puVar8 + 0x42) = (ulong)uVar4;
      cVar1 = *(char *)((long)puVar8 + 0x126);
      goto joined_r0x10007002;
    }
  }
  else if (*(char *)((long)puVar8 + 0x125) == '\0') {
    DAT_10011060 = 2;
LAB_100070a8:
    recovered_10001d10(puVar8);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar8 + 0x126);
joined_r0x10007002:
  if (cVar1 == '\x01') {
    *(undefined8 *)(puVar8 + 0x46) = *(undefined8 *)(puVar8 + 0x42);
    return puVar8;
  }
  return puVar8;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_1000fe16
#undef DAT_10011060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef str_1000feb8
#undef str_1000fec5
#undef str_1000fed3
#undef in_stack_ffffffffffffffc8
#undef in_stack_ffffffffffffffcc
#undef in_stack_ffffffffffffffd0
#undef auStackY_b8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_10011060
#define DAT_10011060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x148cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100071f0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       (((code *)(ulong)_DAT_00280838 != (code *)0x0 &&
        (iVar1 = (*(code *)(ulong)_DAT_00280838)
                           (param_1 + 1,*(undefined8 *)(param_1 + 0x3e),param_1[0x42]), iVar1 != 0))
       )) {
      *(undefined1 *)((long)param_1 + 0x127) = 0;
    }
    else {
      DAT_10011060 = 5;
      *(undefined1 *)((long)param_1 + 0x129) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    recovered_10001d10(*(void **)(param_1 + 0x40));
  }
  recovered_10001d10(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef DAT_10011060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072c0
 */

long recovered_100072c0(long param_1,long param_2,long param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint128 auVar2;
  uint128 auVar3;
  uint uVar4;
  ulong bytes;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_4 == (int *)0x0) {
    return 0;
  }
  if ((char)param_4[0x49] == '\x01') {
    if ((*param_4 != 0) || (param_4[0x48] != -1)) {
      lVar5 = 0;
      do {
        lVar7 = 0;
        do {
          uVar4 = recovered_10007400(param_4);
          if (uVar4 == 0xffffffff) {
            return lVar5;
          }
          *(char *)(param_1 + lVar7) = (char)uVar4;
          lVar7 = lVar7 + 1;
        } while (param_2 != lVar7);
        lVar5 = lVar5 + 1;
        param_1 = param_1 + param_2;
      } while (lVar5 != param_3);
      return param_3;
    }
    uVar1 = *(ulong *)(param_4 + 0x46);
    uVar8 = *(ulong *)(param_4 + 0x42) - uVar1;
    if (uVar1 <= *(ulong *)(param_4 + 0x42) && uVar8 != 0) {
      PF_PART8(auVar2, 8) = 0;
      PF_PART8(auVar2, 0) = param_2;
      PF_PART8(auVar3, 8) = 0;
      PF_PART8(auVar3, 0) = param_3;
      uVar6 = 0xffffffffffffffff;
      if (SUB168(auVar2 * auVar3,8) == 0) {
        uVar6 = param_3 * param_2;
      }
      bytes = uVar6;
      if (uVar8 < uVar6) {
        bytes = uVar8;
      }
      recovered_10001db0((void *)param_1,(void *)(uVar1 + *(long *)(param_4 + 0x3e)),bytes);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + bytes;
      if (uVar8 < uVar6) {
        *(undefined1 *)(param_4 + 0x4a) = 1;
      }
      if ((bytes | param_2) >> 0x20 == 0) {
        return (bytes & 0xffffffff) / (param_2 & 0xffffffffU);
      }
      return bytes / (ulong)param_2;
    }
    *(undefined1 *)(param_4 + 0x4a) = 1;
  }
  return 0;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_00280844
#define DAT_00280844 (*(uint8_t *)(0x280844U))
#undef DAT_1000fdf3
#define DAT_1000fdf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21fU)))
#undef DAT_10011140
#define DAT_10011140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x156cU)))
#undef DAT_10011150
#define DAT_10011150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#undef _DAT_00280844
#define _DAT_00280844 (*(uint *)(0x280844U))
#define local_218 (*(undefined1 (*)[536])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10007400(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x49] != '\x01') {
    return 0xffffffff;
  }
  uVar1 = param_1[0x48];
  if (uVar1 != 0xffffffff) {
    param_1[0x48] = -1;
    return uVar1;
  }
  if (*param_1 == 1) {
    uVar3 = *(ulong *)(param_1 + 0xce);
    if (uVar3 < *(ulong *)(param_1 + 0xcc)) {
LAB_1000745a:
      *(ulong *)(param_1 + 0xce) = uVar3 + 1;
      return (uint)*(byte *)((long)param_1 + uVar3 + 0x12a);
    }
    if (DAT_10011140 != 0) {
      recovered_10001db0(local_218,&DAT_10011150,DAT_10011140);
      local_218[DAT_10011140] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00280840)(local_218);
      }
      DAT_10011140 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x47 < _DAT_00280808 && ((code *)(ulong)_DAT_00280844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00280844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_1000fdf3,0)
      ;
      if (iVar2 != 0) {
        uVar3 = recovered_10003850((char *)((long)param_1 + 0x12a));
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        *(undefined1 *)((long)param_1 + uVar3 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar3 = 0;
        goto LAB_1000745a;
      }
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x46);
    if (uVar3 < *(ulong *)(param_1 + 0x42)) {
      *(ulong *)(param_1 + 0x46) = uVar3 + 1;
      return (uint)*(byte *)(*(long *)(param_1 + 0x3e) + uVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_1000fdf3
#undef DAT_10011140
#undef DAT_10011150
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_218

#undef DAT_10011060
#define DAT_10011060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x148cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

long recovered_100075f0(long param_1,long param_2,long param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((long)param_4 + 0x125) != '\x01')))) {
    return 0;
  }
  uVar5 = param_2 * param_3;
  if ((*param_4 & 0xfffffffe) == 2) {
    recovered_10006830(param_1,uVar5);
    *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
  }
  else {
    if (*(char *)((long)param_4 + 0x126) == '\0') {
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    else {
      uVar4 = *(ulong *)(param_4 + 0x42);
      *(ulong *)(param_4 + 0x46) = uVar4;
    }
    uVar2 = *(ulong *)(param_4 + 0x44);
    if (uVar2 < uVar4 + uVar5) {
      uVar1 = 0x100;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 * 2;
      } while (uVar2 < uVar4 + uVar5);
      pvVar3 = recovered_10001d60(*(void **)(param_4 + 0x40),uVar2);
      if (pvVar3 == (void *)0x0) {
        DAT_10011060 = 0xc;
        *(undefined1 *)((long)param_4 + 0x129) = 1;
        return 0;
      }
      *(void **)(param_4 + 0x40) = pvVar3;
      *(ulong *)(param_4 + 0x44) = uVar2;
      *(void **)(param_4 + 0x3e) = pvVar3;
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    uVar2 = *(ulong *)(param_4 + 0x42);
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_10002ab0((void *)(uVar2 + *(long *)(param_4 + 0x40)),0,uVar4 - uVar2);
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10001db0((void *)(uVar4 + *(long *)(param_4 + 0x40)),(void *)param_1,uVar5);
    uVar5 = uVar5 + *(long *)(param_4 + 0x46);
    *(ulong *)(param_4 + 0x46) = uVar5;
    if (*(ulong *)(param_4 + 0x42) < uVar5) {
      *(ulong *)(param_4 + 0x42) = uVar5;
    }
    *(undefined2 *)((long)param_4 + 0x127) = 1;
  }
  return param_3;
}

#undef DAT_10011060

#undef DAT_10011060
#define DAT_10011060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x148cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007780
 */

undefined8 recovered_10007780(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10011060 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_1000778e;
        lVar1 = 0x108;
      }
      param_2 = param_2 + *(long *)((long)param_1 + lVar1);
    }
    if (-1 < (long)param_2) {
      *(ulong *)(param_1 + 0x46) = param_2;
      *(bool *)(param_1 + 0x4a) = *(ulong *)(param_1 + 0x42) <= param_2;
      param_1[0x48] = -1;
      return 0;
    }
  }
LAB_1000778e:
  DAT_10011060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10011060

#undef DAT_10011060
#define DAT_10011060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x148cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007800
 */

undefined8 recovered_10007800(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10011060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10011060

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_10011060
#define DAT_10011060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x148cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007830
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007830(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((param_1 == (int *)0x0) || (*param_1 != 0)) || (*(char *)((long)param_1 + 0x127) != '\x01'))
  {
    return 0;
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
      ((0xb < _DAT_00280808 &&
       ((0x3b < _DAT_00280808 && ((code *)(ulong)_DAT_00280838 != (code *)0x0)))))) &&
     (iVar1 = (*(code *)(ulong)_DAT_00280838)
                        (param_1 + 1,*(undefined8 *)(param_1 + 0x3e),param_1[0x42]), iVar1 != 0)) {
    *(undefined1 *)((long)param_1 + 0x127) = 0;
    return 0;
  }
  DAT_10011060 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef DAT_10011060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_100078e0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10007900(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007920(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10007940(uint param_1,long param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0xffffffff && param_2 != 0) {
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x120) = uVar1;
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return uVar1;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028083c
#define DAT_0028083c (*(uint8_t *)(0x28083cU))
#undef DAT_10011060
#define DAT_10011060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x148cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(uint *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007970(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    uVar2 = 5;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x3f < _DAT_00280808 && ((code *)(ulong)_DAT_0028083c != (code *)0x0)) &&
        (iVar1 = (*(code *)(ulong)_DAT_0028083c)(), iVar1 != 0)))) {
      return 0;
    }
  }
  DAT_10011060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef DAT_10011060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028083c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_0028083c
#define DAT_0028083c (*(uint8_t *)(0x28083cU))
#undef DAT_10011060
#define DAT_10011060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x148cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(uint *)(0x28083cU))
#define local_2c (*(undefined4 *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100079f0(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_10011060 = 0x16;
    return 0xffffffff;
  }
  recovered_10002ab0(&local_2c,0,0xc);
  uVar2 = 2;
  if (((((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
        ((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)))) &&
       ((iVar1 = (*(code *)(ulong)_DAT_00280834)(param_1,&local_2c), iVar1 != 0 &&
        ((uVar2 = 5, _DAT_00280800 == 0x50414d57 && (_DAT_00280804 != 0)))))) &&
      (0xb < _DAT_00280808)) &&
     (((((0x3b < _DAT_00280808 && ((code *)(ulong)_DAT_00280838 != (code *)0x0)) &&
        (iVar1 = (*(code *)(ulong)_DAT_00280838)(param_2,local_2c,local_28), iVar1 != 0)) &&
       (((_DAT_00280800 == 0x50414d57 && (_DAT_00280804 != 0)) &&
        ((0xb < _DAT_00280808 &&
         ((0x3f < _DAT_00280808 && ((code *)(ulong)_DAT_0028083c != (code *)0x0)))))))) &&
      (iVar1 = (*(code *)(ulong)_DAT_0028083c)(param_1), iVar1 != 0)))) {
    return 0;
  }
  DAT_10011060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef DAT_10011060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef _DAT_0028083c
#undef local_2c
#undef local_28

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define Ram0000000000006800 (*(uint32_t *)(0x280800U))
#define Ram0000000000006804 (*(uint32_t *)(0x280804U))
#define Ram0000000000006808 (*(uint32_t *)(0x280808U))
#define UINT_00006834 (*(uint *)(0x280834U))
#define local_30 (*(uint *)(frame + 20))
#define local_34 (*(uint *)(frame + 16))
ulong recovered_10007b60(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[100] = {0};

  uint uVar1;
  int iVar2;
  void *dst;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar3 = 0;
    recovered_10002ab0(&local_34,0,0xc);
    iVar2 = Ram0000000000006800;
    if (iVar2 != 0x50414d57) goto LAB_10004d5f;
    iVar2 = Ram0000000000006804;
    if (((iVar2 != 0) && (uVar1 = Ram0000000000006808, 0xb < uVar1)) &&
       (uVar1 = Ram0000000000006808, 0x37 < uVar1)) {
      uVar1 = UINT_00006834;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        iVar2 = (*(code *)(ulong)uVar1)((char *)param_1,&local_34);
        if (iVar2 != 0) {
          dst = recovered_10001cc0((ulong)(local_30 + (local_30 == 0)));
          if (dst != (void *)0x0) {
            if ((ulong)local_30 == 0) {
              uVar3 = 0;
            }
            else {
              recovered_10001db0(dst,(void *)(ulong)local_34,(ulong)local_30);
              uVar3 = (ulong)local_30;
            }
            *param_2 = (long)dst;
            *param_3 = uVar3;
            uVar3 = CONCAT71((int7)((ulong)dst >> 8),1);
            goto LAB_10004d5f;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_10004d5f:
  return uVar3 & 0xffffffff;
}

#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef local_30
#undef local_34

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define Ram0000000000006800 (*(uint32_t *)(0x280800U))
#define Ram0000000000006804 (*(uint32_t *)(0x280804U))
#define Ram0000000000006808 (*(uint32_t *)(0x280808U))
#define UINT_00006838 (*(uint *)(0x280838U))
bool recovered_10007c40(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  if ((((param_1 != 0) && (param_2 != 0 || param_3 == 0)) &&
      (iVar2 = Ram0000000000006800, iVar2 == 0x50414d57)) &&
     (((iVar2 = Ram0000000000006804, iVar2 != 0 && (uVar1 = Ram0000000000006808, 0xb < uVar1)) &&
      (uVar1 = Ram0000000000006808, 0x3b < uVar1)))) {
    uVar1 = UINT_00006838;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      iVar2 = (*(code *)(ulong)uVar1)((char *)param_1,(void *)param_2,(uint)param_3);
      return iVar2 != 0;
    }
  }
  return false;
}

#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007cb0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007cc0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007cd0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007ce0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007cf0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10007d00(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  long lVar2;
  bool bVar3;

  if (param_3 == 0) {
    return 0;
  }
  lVar2 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar2);
    if (bVar1 != *(byte *)(param_2 + lVar2)) {
      return (uint)bVar1 - (uint)*(byte *)(param_2 + lVar2);
    }
  } while ((bVar1 != 0) && (bVar3 = param_3 + -1 != lVar2, lVar2 = lVar2 + 1, bVar3));
  return 0;
}


#undef DAT_1000fe47
#define DAT_1000fe47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273U)))
#undef str_1000fe4a
#define str_1000fe4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x276U)))
#undef str_1000fe57
#define str_1000fe57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x283U)))
#undef str_1000fe61
#define str_1000fe61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28dU)))
#undef str_1000fe75
#define str_1000fe75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a1U)))
#undef str_1000fe83
#define str_1000fe83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2afU)))
#undef str_1000fe95
#define str_1000fe95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c1U)))
#undef str_1000fea1
#define str_1000fea1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cdU)))
#undef str_1000feb2
#define str_1000feb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d40
 */

char * recovered_10007d40(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000fe47;
  default:
    return str_1000feb2;
  case 2:
    return str_1000fe4a;
  case 5:
    return str_1000fe57;
  case 9:
    return str_1000fe61;
  case 0xc:
    return str_1000fe75;
  case 0xd:
    return str_1000fe83;
  case 0x11:
    return str_1000fe95;
  case 0x16:
    return str_1000fea1;
  }
}

#undef DAT_1000fe47
#undef str_1000fe4a
#undef str_1000fe57
#undef str_1000fe61
#undef str_1000fe75
#undef str_1000fe83
#undef str_1000fe95
#undef str_1000fea1
#undef str_1000feb2

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007e10(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007e20(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_10011350
#define DAT_10011350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x177cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e30
 */

void recovered_10007e30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10011350 = DAT_10011350 + 1;
  return;
}

#undef DAT_10011350

#define in_stack_00000008 (*(longdouble *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e50
 */

void recovered_10007e50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_10004660((double)in_stack_00000008);
  return;
}

#undef in_stack_00000008

#define local_218 (*(char (*)[536])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e70
 */

ulong recovered_10007e70(char *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = recovered_10005640(local_218,0x200,param_1,param_2);
  if (0 < (int)(uint)uVar1) {
    uVar2 = 0x1ff;
    if ((uint)uVar1 < 0x1ff) {
      uVar2 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
    recovered_10006830((long)local_218,uVar2);
  }
  return uVar1;
}

#undef local_218

#define local_2d8 (*(char (*)[728])(pf_stack_frame + 24))
#define local_d8 (*(undefined1 (*)[216])(pf_stack_frame + 536))
#define local_d0 (*(undefined8 *)(pf_stack_frame + 544))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 552))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 560))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 568))
#define local_b0 (*(undefined8 *)(pf_stack_frame + 576))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 584))
#define local_98 (*(undefined8 *)(pf_stack_frame + 600))
#define local_88 (*(undefined8 *)(pf_stack_frame + 616))
#define local_78 (*(undefined8 *)(pf_stack_frame + 632))
#define local_68 (*(undefined8 *)(pf_stack_frame + 648))
#define local_58 (*(undefined8 *)(pf_stack_frame + 664))
#define local_48 (*(undefined8 *)(pf_stack_frame + 680))
#define local_38 (*(undefined8 *)(pf_stack_frame + 696))
#define local_28 (*(uint (*)[10])(pf_stack_frame + 712))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 720))
#define local_18 (*(undefined1 * *)(pf_stack_frame + 728))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ec0
 */

ulong recovered_10007ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                        undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  unsigned char pf_stack_frame[784] __attribute__((aligned(16))) = {0};

  char in_AL;
  ulong uVar1;
  ulong uVar2;

  if (in_AL != '\0') {
    local_a8 = param_1;
    local_98 = param_2;
    local_88 = param_3;
    local_78 = param_4;
    local_68 = param_5;
    local_58 = param_6;
    local_48 = param_7;
    local_38 = param_8;
  }
  local_18 = local_d8;
  local_20 = &param_15;
  local_28[0] = 8;
  local_28[1] = 0x30;
  local_d0 = param_10;
  local_c8 = param_11;
  local_c0 = param_12;
  local_b8 = param_13;
  local_b0 = param_14;
  uVar1 = recovered_10005640(local_2d8,0x200,param_9,local_28);
  if (0 < (int)(uint)uVar1) {
    uVar2 = 0x1ff;
    if ((uint)uVar1 < 0x1ff) {
      uVar2 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
    recovered_10006830((long)local_2d8,uVar2);
  }
  return uVar1;
}

#undef local_2d8
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_48
#undef local_38
#undef local_28
#undef local_20
#undef local_18

/* Native scope transfer; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007f80(void *context,...){
 __asm__ volatile("movq 64(%rdi),%rsp\nmovq 48(%rdi),%rbp\njmp *56(%rdi)");
}


/* Native nonlocal task context and floating control state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10007f90(void *context){
 __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rdx\nmovq %rdx,48(%rdi)\nmovq (%rsp),%rdx\nmovq %rdx,56(%rdi)\nstmxcsr 64(%rdi)\nfnstcw 68(%rdi)\nxorl %eax,%eax\nret");
}


/* Native task restore; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007fd0(void *context,int value){
 __asm__ volatile("movq %rdi,%rdx\nmovl %esi,%eax\ntestl %eax,%eax\njnz 1f\nmovl $1,%eax\n1: ldmxcsr 64(%rdx)\nfldcw 68(%rdx)\nmovq 0(%rdx),%rbx\nmovq 8(%rdx),%rbp\nmovq 16(%rdx),%r12\nmovq 24(%rdx),%r13\nmovq 32(%rdx),%r14\nmovq 40(%rdx),%r15\nmovq 48(%rdx),%rsp\njmp *56(%rdx)");
}


#undef DAT_10008061
#define DAT_10008061 (*(uint8_t *)(0x10008061U))
#undef DAT_1000ff08
#define DAT_1000ff08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x334U)))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined * *)(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008010
 */

void recovered_10008010(void)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008090;
  local_60 = &DAT_1000ff08;
  local_50 = &DAT_10008061;
  local_80 = 1;
  recovered_10008730(&local_88);
  recovered_10001c90();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10008061
#undef DAT_1000ff08
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef auStack_40
#undef local_58
#undef local_50

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10008090(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100080a0(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_100080b0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10008010();
}


#undef DAT_10011358
#define DAT_10011358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1784U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080b0
 */

long recovered_100080b0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long extraout_RAX;
  long lVar1;

  recovered_10008570(param_1);
  if (extraout_RAX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10008010();
  }
  *(long *)(extraout_RAX + 0x10) = DAT_10011358;
  *(undefined1 *)(extraout_RAX + 0x34) = 0;
  DAT_10011358 = extraout_RAX;
  lVar1 = recovered_100085b0(extraout_RAX);
  return lVar1;
}

#undef DAT_10011358

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100080e0(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10001cc0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001c90();
  }
  return (long)pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10008110(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10001cc0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001c90();
  }
  return (long)pvVar1;
}


#undef DAT_1000ff18
#define DAT_1000ff18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x344U)))
#undef LAB_100081ad
#define LAB_100081ad (*(uint8_t *)(0x100081adU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008140
 */

void recovered_10008140(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008090;
  local_60 = &DAT_1000ff18;
  local_50 = &LAB_100081ad;
  local_80 = 1;
  recovered_10008730(&local_88);
  recovered_10001d10(param_1);
  recovered_10008750(&local_88);
  return;
}

#undef DAT_1000ff18
#undef LAB_100081ad
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000ff28
#define DAT_1000ff28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x354U)))
#undef LAB_1000824d
#define LAB_1000824d (*(uint8_t *)(0x1000824dU))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081e0
 */

void recovered_100081e0(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008090;
  local_60 = &DAT_1000ff28;
  local_50 = &LAB_1000824d;
  local_80 = 1;
  recovered_10008730(&local_88);
  recovered_10001d10(param_1);
  recovered_10008750(&local_88);
  return;
}

#undef DAT_1000ff28
#undef LAB_1000824d
#undef local_58
#undef local_50
#undef local_48
#undef local_88
#undef local_80
#undef auStack_40
#undef local_68
#undef local_60

#undef DAT_1000ff38
#define DAT_1000ff38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x364U)))
#undef LAB_100082ed
#define LAB_100082ed (*(uint8_t *)(0x100082edU))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008280
 */

void recovered_10008280(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008090;
  local_60 = &DAT_1000ff38;
  local_50 = &LAB_100082ed;
  local_80 = 1;
  recovered_10008730(&local_88);
  recovered_10001d10(param_1);
  recovered_10008750(&local_88);
  return;
}

#undef DAT_1000ff38
#undef LAB_100082ed
#undef local_50
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef auStack_40
#undef local_60
#undef local_58

#undef DAT_1000ff48
#define DAT_1000ff48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x374U)))
#undef LAB_1000838d
#define LAB_1000838d (*(uint8_t *)(0x1000838dU))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008320
 */

void recovered_10008320(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008090;
  local_60 = &DAT_1000ff48;
  local_50 = &LAB_1000838d;
  local_80 = 1;
  recovered_10008730(&local_88);
  recovered_10001d10(param_1);
  recovered_10008750(&local_88);
  return;
}

#undef DAT_1000ff48
#undef LAB_1000838d
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88
#undef local_80

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100083c0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_100083d0(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100083e0(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100083f0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10008400(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong size;

  size = param_1 + 0x30 + (ulong)(param_1 == 0);
  pvVar2 = recovered_10001cc0(size);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10008010();
  }
  if (size != 0) {
    if (size < 8) {
      uVar3 = 0;
    }
    else {
      if (size < 0x20) {
        uVar4 = 0;
LAB_1000548c:
        uVar3 = size & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar2 + uVar4) = 0;
          uVar4 = uVar4 + 8;
          if (uVar3 == uVar4) goto LAB_100054bf;
        } while( true );
      }
      uVar3 = size & 0xffffffffffffffe0;
      uVar4 = 0;
      do {
        *(undefined8 *)((long)pvVar2 + uVar4) = 0;
        ((undefined8 *)((long)pvVar2 + uVar4))[1] = 0;
        puVar1 = (undefined8 *)((long)pvVar2 + uVar4 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar4 = uVar4 + 0x20;
      } while (uVar3 != uVar4);
      if (size == uVar3) goto LAB_100054c4;
      uVar4 = uVar3;
      if ((size & 0x18) != 0) goto LAB_1000548c;
    }
    do {
      *(undefined1 *)((long)pvVar2 + uVar3) = 0;
      uVar3 = uVar3 + 1;
LAB_100054bf:
    } while (size != uVar3);
  }
LAB_100054c4:
  return (long)pvVar2 + 0x30;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008510(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10001d10((void *)(param_1 + -0x30));
  return;
}


#undef DAT_10011370
#define DAT_10011370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x179cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008570
 */

void recovered_10008570(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = DAT_10011370;
  if (DAT_10011370 != param_1 && DAT_10011370 != 0) {
    do {
      if (*(int *)(lVar1 + 0x30) == (int)param_1) {
        return;
      }
      lVar1 = *(long *)(lVar1 + 0x18);
      if (lVar1 == 0) {
        return;
      }
    } while (lVar1 != param_1);
  }
  return;
}

#undef DAT_10011370

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100085b0(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_10011358
#define DAT_10011358 (*(void * *)(((uintptr_t)pf_module_state + 0x1784U)))
#undef DAT_10011370
#define DAT_10011370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x179cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085c0
 */

void recovered_100085c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;

  pointer = DAT_10011358;
  if (DAT_10011358 != (void *)0x0) {
    puVar2 = (undefined8 *)((long)DAT_10011358 + 0x10);
    DAT_10011358 = *(void **)((long)DAT_10011358 + 0x10);
    *puVar2 = 0;
    if (*(char *)((long)pointer + 0x34) == '\0') {
      if (*(code **)((long)pointer + 8) != (code *)0x0) {
        (**(code **)((long)pointer + 8))((long)pointer + 0x38);
      }
      pvVar1 = DAT_10011370;
      if (DAT_10011370 == pointer) {
        puVar2 = &DAT_10011370;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_1000863d;
          pvVar1 = *(void **)((long)pvVar3 + 0x18);
        } while (*(void **)((long)pvVar3 + 0x18) != pointer);
        puVar2 = (undefined8 *)((long)pvVar3 + 0x18);
      }
      *puVar2 = *(undefined8 *)((long)pointer + 0x18);
      *(undefined8 *)((long)pointer + 0x18) = 0;
LAB_1000863d:
      recovered_10001d10(pointer);
      return;
    }
  }
  return;
}

#undef DAT_10011358
#undef DAT_10011370

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008650(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10008680((undefined8 *)(param_1 + -0x30));
}


#undef DAT_10011358
#define DAT_10011358 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1784U)))
#undef DAT_10011360
#define DAT_10011360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x178cU)))
#define cStack_36 (*(char *)(pf_stack_frame + 26))
#define local_38 (*(undefined2 *)(pf_stack_frame + 24))
#define uStack_35 (*(undefined1 *)(pf_stack_frame + 27))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008680
 */

void recovered_10008680(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;

  if (DAT_10011360 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_10011360;
    do {
      local_30 = 0;
      local_38 = 0;
      cStack_36 = '\0';
      uStack_35 = 0;
      uStack_34 = 0;
      uVar3 = recovered_10009160((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[4] = plVar4;
        param_1[5] = CONCAT44(local_30,uStack_34);
        recovered_10008810(param_1);
        puVar2 = DAT_10011358;
        if (DAT_10011358 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10008010();
        }
        *(undefined1 *)((long)DAT_10011358 + 0x34) = 1;
        puVar2[4] = 0;
        puVar2[5] = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10008680(puVar2);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10008010();
}

#undef DAT_10011358
#undef DAT_10011360
#undef cStack_36
#undef local_38
#undef uStack_35
#undef local_30
#undef uStack_34

#undef DAT_10011358
#define DAT_10011358 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1784U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008700
 */

void recovered_10008700(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10011358;
  if (DAT_10011358 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10008010();
  }
  *(undefined1 *)((long)DAT_10011358 + 0x34) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10008680(puVar1);
}

#undef DAT_10011358

#undef DAT_10011360
#define DAT_10011360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x178cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008730
 */

void recovered_10008730(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10011360;
  DAT_10011360 = param_1;
  return;
}

#undef DAT_10011360

#undef DAT_10011360
#define DAT_10011360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x178cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008750
 */

void recovered_10008750(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_10011360;
  if (DAT_10011360 == param_1) {
    puVar2 = &DAT_10011360;
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      puVar1 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != param_1);
  }
  *puVar2 = *param_1;
  return;
}

#undef DAT_10011360

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008790(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RDI;

                    /* WARNING: Subroutine does not return */
  recovered_10008680(in_RDI);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100087a0(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008010();
}


#undef DAT_10011360
#define DAT_10011360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x178cU)))
#undef DAT_10011370
#define DAT_10011370 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x179cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087b0
 */

void recovered_100087b0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10011370;
  if (DAT_10011370 != param_1 && DAT_10011370 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar1 + 6) == (int)param_1) goto LAB_100087f5;
      puVar1 = (undefined8 *)puVar1[3];
    } while ((puVar1 != (undefined8 *)0x0) && (puVar1 != param_1));
  }
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10008010();
  }
LAB_100087f5:
  if (DAT_10011360 != (undefined8 *)0x0) {
    DAT_10011360 = (undefined8 *)*DAT_10011360;
  }
  recovered_10008810(puVar1);
  return;
}

#undef DAT_10011360
#undef DAT_10011370

#undef DAT_10011360
#define DAT_10011360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x178cU)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008810
 */

void recovered_10008810(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  byte *in_RSI;
  long *plVar3;

  if (DAT_10011360 != (long *)0x0) {
    plVar1 = (long *)param_1[4];
    do {
      plVar3 = DAT_10011360;
      if (DAT_10011360 == plVar1) {
        *(ulong *)((long)DAT_10011360 + 0xc) =
             CONCAT44((int)*(undefined8 *)((long)param_1 + 0x2c),
                      (int)((ulong)*(undefined8 *)((long)param_1 + 0x2c) >> 0x20));
        uVar2 = *(undefined4 *)(param_1 + 5);
LAB_100088a4:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10007f80((long)plVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_100087b0(plVar3);
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10009160((long)DAT_10011360,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        *(undefined4 *)((long)plVar3 + 0xc) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)(plVar3 + 2) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_100088a4;
      }
      DAT_10011360 = (long *)*plVar3;
    } while (DAT_10011360 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10008010();
}

#undef DAT_10011360
#undef local_38
#undef local_30

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100088b0(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RDI;

                    /* WARNING: Subroutine does not return */
  recovered_100087b0(in_RDI);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100088c0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100088d0(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008010();
}


#undef DAT_100110c0
#define DAT_100110c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088e0
 */

long recovered_100088e0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  bool bVar7;

  if (param_3 == (undefined8 *)0x0 || param_1 == (long *)0x0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(*param_1 + -8);
  bVar7 = puVar5 != (undefined8 *)0x0;
  if (puVar5 != param_3 && bVar7) {
    lVar4 = param_3[1];
    do {
      lVar3 = puVar5[1];
      if ((lVar4 == 0) || (lVar3 == 0)) {
        if (lVar3 == lVar4) goto LAB_100089a4;
      }
      else {
        lVar6 = 0;
        do {
          cVar1 = *(char *)(lVar3 + lVar6);
          cVar2 = *(char *)(lVar4 + lVar6);
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_100089a4;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar5 != &DAT_100110c0) goto LAB_100089ac;
      puVar5 = (undefined8 *)puVar5[2];
      bVar7 = puVar5 != (undefined8 *)0x0;
    } while ((puVar5 != param_3) && (puVar5 != (undefined8 *)0x0));
  }
  if (bVar7) {
LAB_100089a4:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x10);
  }
  else {
LAB_100089ac:
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_100110c0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100089c0(void)

{
  unsigned char frame[64] = {0};

  recovered_10001c90();
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100089d0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100089e0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a00(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a30(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a50(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a80(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define in_stack_00000008 (*(undefined8 *)(frame + 40))
#define in_stack_00000010 (*(ushort *)(frame + 48))
byte recovered_10008aa0(void)

{
  unsigned char frame[64] = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008ae0(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc48
#define DAT_1000fc48 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000fd00
#define DAT_1000fd00 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_1000fd08
#define DAT_1000fd08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_1000fd10
#define DAT_1000fd10 (*(double *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef DAT_1000fd18
#define DAT_1000fd18 (*(double *)(((uintptr_t)pf_module_state + 0x144U)))
#undef _DAT_1000fd08
#define _DAT_1000fd08 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10008b10(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;

  if (NAN(param_1)) {
    return param_1;
  }
  if (_DAT_1000fd08 < param_1) {
    return DAT_1000fd00;
  }
  dVar4 = 0.0;
  if (DAT_1000fd10 <= param_1) {
    uVar1 = 0;
    if (DAT_1000fbe0 < param_1) {
      uVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000fbe0;
        uVar1 = uVar1 + 1;
      } while (DAT_1000fbe0 < param_1);
    }
    for (; param_1 < DAT_1000fc48; param_1 = param_1 * DAT_1000fbe0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000fbe8;
    dVar5 = DAT_1000fbe8;
    dVar6 = DAT_1000fbe8;
    do {
      dVar7 = (param_1 / dVar5) * dVar6;
      dVar9 = (param_1 / (double)(iVar2 + -2)) * dVar7;
      dVar8 = (param_1 / (double)(iVar2 + -1)) * dVar9;
      dVar6 = (param_1 / (double)iVar2) * dVar8;
      dVar4 = dVar4 + dVar7 + dVar9 + dVar8 + dVar6;
      dVar5 = dVar5 + DAT_1000fd18;
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x24);
    if (uVar1 != 0) {
      uVar3 = uVar1 & 7;
      if (7 < uVar1) {
        uVar1 = uVar1 & 0xfffffff8;
        do {
          dVar4 = dVar4 * dVar4 * dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          uVar1 = uVar1 - 8;
        } while (uVar1 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        dVar4 = dVar4 * dVar4;
      }
    }
  }
  return dVar4;
}

#undef DAT_1000fbe0
#undef DAT_1000fbe8
#undef DAT_1000fc48
#undef DAT_1000fd00
#undef DAT_1000fd08
#undef DAT_1000fd10
#undef DAT_1000fd18
#undef _DAT_1000fd08

#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc48
#define DAT_1000fc48 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000fd00
#define DAT_1000fd00 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_1000fd08
#define DAT_1000fd08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_1000fd10
#define DAT_1000fd10 (*(double *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef DAT_1000fd18
#define DAT_1000fd18 (*(double *)(((uintptr_t)pf_module_state + 0x144U)))
#undef DAT_1000fd20
#define DAT_1000fd20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef _DAT_1000fd08
#define _DAT_1000fd08 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#undef _DAT_1000fd20
#define _DAT_1000fd20 (*(float *)(((uintptr_t)pf_module_state + 0x14cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10008c80(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;

  dVar6 = (double)param_1;
  if (NAN(param_1)) {
    return param_1;
  }
  if (_DAT_1000fd08 < dVar6) {
    return (float)DAT_1000fd00;
  }
  dVar5 = 0.0;
  if (DAT_1000fd10 <= dVar6) {
    uVar1 = 0;
    if (_DAT_1000fd20 < param_1) {
      uVar1 = 0;
      do {
        dVar6 = dVar6 * DAT_1000fbe0;
        uVar1 = uVar1 + 1;
      } while (DAT_1000fbe0 < dVar6);
    }
    for (; dVar6 < DAT_1000fc48; dVar6 = dVar6 * DAT_1000fbe0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000fbe8;
    dVar5 = DAT_1000fbe8;
    dVar7 = DAT_1000fbe8;
    do {
      dVar8 = (dVar6 / dVar4) * dVar7;
      dVar10 = (dVar6 / (double)(iVar2 + -2)) * dVar8;
      dVar9 = (dVar6 / (double)(iVar2 + -1)) * dVar10;
      dVar7 = (dVar6 / (double)iVar2) * dVar9;
      dVar5 = dVar5 + dVar8 + dVar10 + dVar9 + dVar7;
      dVar4 = dVar4 + DAT_1000fd18;
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x24);
    if (uVar1 != 0) {
      uVar3 = uVar1 & 7;
      if (7 < uVar1) {
        uVar1 = uVar1 & 0xfffffff8;
        do {
          dVar5 = dVar5 * dVar5 * dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          uVar1 = uVar1 - 8;
        } while (uVar1 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        dVar5 = dVar5 * dVar5;
      }
    }
  }
  return (float)dVar5;
}

#undef DAT_1000fbe0
#undef DAT_1000fbe8
#undef DAT_1000fc48
#undef DAT_1000fd00
#undef DAT_1000fd08
#undef DAT_1000fd10
#undef DAT_1000fd18
#undef DAT_1000fd20
#undef _DAT_1000fd08
#undef _DAT_1000fd20

#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc48
#define DAT_1000fc48 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000fd00
#define DAT_1000fd00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_1000fd08
#define DAT_1000fd08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_1000fd10
#define DAT_1000fd10 (*(double *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef DAT_1000fd18
#define DAT_1000fd18 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef _DAT_1000fd08
#define _DAT_1000fd08 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#define in_stack_00000008 (*(longdouble *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008e10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;

  dVar4 = (double)in_stack_00000008;
  if ((dVar4 <= _DAT_1000fd08) && (DAT_1000fd10 <= dVar4)) {
    uVar1 = 0;
    if (DAT_1000fbe0 < dVar4) {
      uVar1 = 0;
      do {
        dVar4 = dVar4 * DAT_1000fbe0;
        uVar1 = uVar1 + 1;
      } while (DAT_1000fbe0 < dVar4);
    }
    for (; dVar4 < DAT_1000fc48; dVar4 = dVar4 * DAT_1000fbe0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    do {
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x24);
    if (uVar1 != 0) {
      uVar3 = uVar1 & 7;
      if (7 < uVar1) {
        uVar1 = uVar1 & 0xfffffff8;
        do {
          uVar1 = uVar1 - 8;
        } while (uVar1 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      }
    }
  }
  return;
}

#undef DAT_1000fbe0
#undef DAT_1000fbe8
#undef DAT_1000fc48
#undef DAT_1000fd00
#undef DAT_1000fd08
#undef DAT_1000fd10
#undef DAT_1000fd18
#undef _DAT_1000fd08
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fa0
 */

double recovered_10008fa0(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)param_1 - (double)param_2;
}


#undef DAT_1000fbe0
#define DAT_1000fbe0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fc08
#define DAT_1000fc08 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1000fc48
#define DAT_1000fc48 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fc0
 */

double recovered_10008fc0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double extraout_XMM0_Qa = 0;
  double dVar1;

  recovered_100042d0(param_1);
  if (DAT_1000fbe0 <= param_1 - extraout_XMM0_Qa) {
    dVar1 = extraout_XMM0_Qa + DAT_1000fbe8;
  }
  else {
    dVar1 = extraout_XMM0_Qa;
    if (param_1 - extraout_XMM0_Qa <= DAT_1000fc48) {
      dVar1 = extraout_XMM0_Qa + DAT_1000fc08;
    }
  }
  return dVar1;
}

#undef DAT_1000fbe0
#undef DAT_1000fbe8
#undef DAT_1000fc08
#undef DAT_1000fc48

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10009010(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;

  if (param_1 == (byte *)0x0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    for (pbVar2 = param_1; (bVar1 = *pbVar2, bVar1 - 9 < 5 || (bVar1 == 0x20)); pbVar2 = pbVar2 + 1)
    {
    }
    if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
      bVar7 = bVar1 == 0x2d;
      pbVar2 = pbVar2 + 1;
      goto joined_r0x10005a7d;
    }
  }
  bVar7 = false;
joined_r0x10005a7d:
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar2 == 0x30) && ((pbVar2[1] | 0x20) == 0x78)) {
      pbVar2 = pbVar2 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar2 == 0x30)) {
    if ((pbVar2[1] | 0x20) == 0x78) {
      pbVar2 = pbVar2 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  pbVar2 = pbVar2 + -1;
  lVar5 = 1;
  lVar3 = 0;
  do {
    lVar6 = lVar3;
    bVar1 = pbVar2[1];
    uVar4 = bVar1 - 0x30U;
    if (9 < uVar4) {
      if (bVar1 - 0x61U < 0x1a) {
        uVar4 = bVar1 - 0x57;
      }
      else {
        uVar4 = bVar1 - 0x37;
        if (0x19 < bVar1 - 0x41U) {
          uVar4 = 0xffffffff;
        }
      }
    }
    pbVar2 = pbVar2 + 1;
    lVar5 = lVar5 + -1;
  } while ((-1 < (int)uVar4) &&
          (lVar3 = (ulong)uVar4 + lVar6 * (ulong)param_3, (int)uVar4 < (int)param_3));
  if (param_2 != (undefined8 *)0x0) {
    if (lVar5 == 0) {
      pbVar2 = param_1;
    }
    *param_2 = pbVar2;
  }
  lVar3 = -lVar6;
  if (!bVar7) {
    lVar3 = lVar6;
  }
  return lVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009150(void)

{
  unsigned char frame[64] = {0};

  uint in_EDX;
  undefined8 *in_RSI;
  byte *in_RDI;

  recovered_10009010(in_RDI,in_RSI,in_EDX);
  return;
}


#undef DAT_1000fd30
#define DAT_1000fd30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_100110c0
#define DAT_100110c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14ecU)))
#define local_40 (*(byte * *)(pf_stack_frame + 16))
#define local_31 (*(char *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009160
 */

undefined8 recovered_10009160(long param_1,byte *param_2,undefined2 *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  char cVar23;

  pbVar8 = *(byte **)(param_1 + 0x28);
  if (pbVar8 != (byte *)0x0) {
    local_40 = pbVar8 + 1;
    if (*pbVar8 != 0xff) {
      recovered_10009500((uint)*pbVar8,(long *)&local_40);
    }
    uVar10 = (ushort)*local_40;
    pbVar8 = (byte *)0x0;
    if (uVar10 != 0xff) {
      uVar7 = 0;
      pbVar18 = local_40 + 1;
      do {
        local_40 = pbVar18;
        uVar7 = uVar7 | (ulong)(*local_40 & 0x7f) << ((byte)pbVar8 & 0x3f);
        pbVar8 = (byte *)(ulong)((int)pbVar8 + 7);
        pbVar18 = local_40 + 1;
      } while ((char)*local_40 < '\0');
      pbVar8 = local_40 + 1 + uVar7;
    }
    local_40 = local_40 + 2;
    bVar9 = 0;
    uVar7 = 0;
    do {
      bVar1 = *local_40;
      local_40 = local_40 + 1;
      uVar7 = uVar7 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
      bVar9 = bVar9 + 7;
    } while ((char)bVar1 < '\0');
    if ((0 < *(int *)(param_1 + 8)) && (0 < (long)uVar7)) {
      iVar16 = 0;
      pbVar18 = local_40;
      do {
        bVar9 = 0;
        uVar19 = 0;
        do {
          bVar1 = *pbVar18;
          pbVar18 = pbVar18 + 1;
          uVar19 = uVar19 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          bVar9 = bVar9 + 7;
        } while ((char)bVar1 < '\0');
        bVar9 = 0;
        uVar20 = 0;
        do {
          bVar1 = *pbVar18;
          pbVar18 = pbVar18 + 1;
          uVar20 = uVar20 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          bVar9 = bVar9 + 7;
        } while ((char)bVar1 < '\0');
        if (iVar16 == *(int *)(param_1 + 8) + -1) {
          *param_3 = 1;
          *(undefined1 *)(param_3 + 1) = 0;
          *(int *)(param_3 + 2) = (int)uVar19;
          *(undefined4 *)(param_3 + 4) = 0;
          if ((uVar20 & 0xffffffff) == 0) {
            *(undefined1 *)((long)param_3 + 1) = 1;
            return 0;
          }
          local_31 = param_2 != (byte *)0x0;
          bVar9 = (byte)(uVar10 & 0xf);
          pbVar18 = local_40 + uVar7 + (uVar20 & 0xffffffff) + -1;
          uVar11 = 0;
          goto LAB_10009330;
        }
        iVar16 = iVar16 + 1;
      } while (pbVar18 < local_40 + uVar7);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  return 0;
LAB_10009330:
  uVar7 = 0;
  uVar19 = 0;
  uVar6 = 0;
  do {
    bVar1 = *pbVar18;
    pbVar18 = pbVar18 + 1;
    uVar19 = uVar19 | (ulong)(bVar1 & 0x7f) << ((byte)uVar6 & 0x3f);
    uVar6 = uVar6 + 7;
  } while ((char)bVar1 < '\0');
  uVar20 = 0;
  uVar12 = 0;
  pbVar17 = pbVar18;
  do {
    bVar2 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    uVar20 = uVar20 | (ulong)(bVar2 & 0x7f) << ((byte)uVar12 & 0x3f);
    uVar12 = uVar12 + 7;
  } while ((char)bVar2 < '\0');
  uVar14 = -1L << ((byte)uVar6 & 0x3f);
  if (bVar1 < 0x40) {
    uVar14 = uVar7;
  }
  if (0x3f < uVar6) {
    uVar14 = uVar7;
  }
  uVar21 = -1L << ((byte)uVar12 & 0x3f);
  if (bVar2 < 0x40) {
    uVar21 = uVar7;
  }
  if (0x3f < uVar12) {
    uVar21 = uVar7;
  }
  uVar19 = uVar19 | uVar14;
  if (uVar19 == 0) {
    *(undefined1 *)((long)param_3 + 1) = 1;
  }
  else if (0 < (long)uVar19) {
    uVar6 = (uint)uVar19;
    if ((((0xc < bVar9) || ((int)uVar6 < 1)) || (pbVar8 == (byte *)0x0)) ||
       (((0x1c1dU >> bVar9 ^ 1) & 1) != 0)) {
LAB_100094db:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar6;
      return CONCAT71((int7)((ulong)param_3 >> 8),1);
    }
    local_40 = pbVar8 + (ulong)(uVar6 & 0x7fffffff) *
                        *(long *)(&DAT_1000fd30 + (ulong)(uVar10 & 0xf) * 8);
    pbVar17 = recovered_10009500((uint)uVar10,(long *)&local_40);
    if (pbVar17 == (byte *)0x0) goto LAB_100094db;
    cVar23 = local_31;
    if ((param_2 != (byte *)0x0) && (pbVar17 != param_2)) {
      lVar4 = *(long *)(pbVar17 + 8);
      pbVar13 = param_2;
      do {
        lVar5 = *(long *)(pbVar13 + 8);
        if ((lVar4 == 0) || (lVar5 == 0)) {
          if (lVar5 == lVar4) goto LAB_100094db;
        }
        else {
          lVar15 = 0;
          do {
            cVar23 = *(char *)(lVar5 + lVar15);
            cVar3 = *(char *)(lVar4 + lVar15);
            if ((cVar23 == '\0') || (cVar3 == '\0')) {
              if (cVar23 == cVar3) goto LAB_100094db;
              break;
            }
            lVar15 = lVar15 + 1;
          } while (cVar23 == cVar3);
        }
        if (*(undefined **)pbVar13 != &DAT_100110c0) goto LAB_100094b8;
        pbVar13 = *(byte **)(pbVar13 + 0x10);
        cVar23 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar17) && (pbVar13 != (byte *)0x0));
    }
    if (cVar23 != '\0') goto LAB_100094db;
  }
LAB_100094b8:
  if ((uVar20 | uVar21) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar20 | uVar21);
  bVar22 = 0x3e < uVar11;
  uVar11 = uVar11 + 1;
  if (bVar22) {
    return 0;
  }
  goto LAB_10009330;
}

#undef DAT_1000fd30
#undef DAT_100110c0
#undef local_40
#undef local_31

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

byte * recovered_10009500(uint param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  uint *puVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;

  if (param_1 == 0xff) {
    return (byte *)0x0;
  }
  pbVar3 = (byte *)0x0;
  if (0xc < (param_1 & 0xf)) {
    return (byte *)0x0;
  }
  puVar1 = (uint *)*param_2;
  switch((uintptr_t)(param_1 & 0xf)) {
  case 0:
  case 4:
  case 0xc:
    pbVar3 = *(byte **)puVar1;
    puVar6 = puVar1 + 2;
    goto LAB_10006039;
  case 1:
    bVar4 = 0;
    pbVar3 = (byte *)0x0;
    puVar6 = puVar1;
    do {
      *param_2 = (long)puVar6 + 1;
      uVar5 = *puVar6;
      pbVar3 = (byte *)((ulong)pbVar3 | (ulong)((byte)uVar5 & 0x7f) << (bVar4 & 0x3f));
      bVar4 = bVar4 + 7;
      puVar6 = (uint *)((long)puVar6 + 1);
    } while ((char)(byte)uVar5 < '\0');
    break;
  case 2:
    pbVar3 = (byte *)(ulong)(ushort)*puVar1;
    goto LAB_10006035;
  case 3:
    pbVar3 = (byte *)(ulong)*puVar1;
    goto LAB_10005f89;
  default:
    goto switchD_10005f41_caseD_5;
  case 9:
    uVar2 = 0;
    uVar5 = 0;
    puVar6 = puVar1;
    do {
      *param_2 = (long)puVar6 + 1;
      bVar4 = (byte)*puVar6;
      uVar2 = uVar2 | (ulong)(bVar4 & 0x7f) << ((byte)uVar5 & 0x3f);
      uVar5 = uVar5 + 7;
      puVar6 = (uint *)((long)puVar6 + 1);
    } while ((char)bVar4 < '\0');
    uVar7 = -1L << ((byte)uVar5 & 0x3f);
    if (bVar4 < 0x40) {
      uVar7 = 0;
    }
    if (0x3f < uVar5) {
      uVar7 = 0;
    }
    pbVar3 = (byte *)(uVar2 | uVar7);
    break;
  case 10:
    pbVar3 = (byte *)((ulong)CONCAT12(-1 < (char)*(byte *)((long)puVar1 + 1),(ushort)*puVar1) -
                     0x10000);
LAB_10006035:
    puVar6 = (uint *)((long)puVar1 + 2);
LAB_10006039:
    *param_2 = (long)puVar6;
    break;
  case 0xb:
    pbVar3 = (byte *)((ulong)CONCAT14(-1 < (char)*(byte *)((long)puVar1 + 3),*puVar1) - 0x100000000)
    ;
LAB_10005f89:
    puVar6 = puVar1 + 1;
    goto LAB_10006039;
  }
  if ((param_1 & 0x70) != 0) {
    if ((param_1 & 0x70) != 0x10) {
      return (byte *)0x0;
    }
    pbVar3 = pbVar3 + (long)puVar1;
  }
  if (((char)param_1 < '\0') && (pbVar3 != (byte *)0x0)) {
    pbVar3 = *(byte **)pbVar3;
  }
switchD_10005f41_caseD_5:
  return pbVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009690
 */

void recovered_10009690(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10008140((void *)*param_1);
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280814
#define DAT_00280814 (*(uint8_t *)(0x280814U))
#undef DAT_00280818
#define DAT_00280818 (*(uint8_t *)(0x280818U))
#undef DAT_002808a0
#define DAT_002808a0 (*(uint8_t *)(0x2808a0U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_1000fdf3
#define DAT_1000fdf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21fU)))
#undef DAT_10011380
#define DAT_10011380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17acU)))
#undef DAT_10011390
#define DAT_10011390 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17bcU)))
#undef DAT_10011398
#define DAT_10011398 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17c4U)))
#undef DAT_1001139c
#define DAT_1001139c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17c8U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280814
#define _DAT_00280814 (*(uint *)(0x280814U))
#undef _DAT_00280818
#define _DAT_00280818 (*(uint *)(0x280818U))
#undef _DAT_002808a0
#define _DAT_002808a0 (*(uint *)(0x2808a0U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(uint *)(0x2808b4U))
#undef str_1000fee1
#define str_1000fee1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30dU)))
#define local_70 (*(ulong (*)[14])(pf_stack_frame + 16))
#define local_40 (*(undefined4 *)(pf_stack_frame + 64))
#define local_38 (*(long * *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_100096b0(char *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char *pcVar8;

  plVar3 = (long *)recovered_100080e0(0x328);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(undefined1 *)((long)plVar3 + 0x1c) = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 6) = 0xf6f60000;
  *(undefined1 *)((long)plVar3 + 0x34) = 0xf6;
  plVar3[7] = 0;
  plVar3[8] = 0;
  *(undefined4 *)(plVar3 + 9) = 0;
  *(undefined8 *)((long)plVar3 + 0x4c) = 0;
  *(undefined4 *)((long)plVar3 + 0x54) = 0;
  *(undefined2 *)(plVar3 + 0xb) = 0;
  *(undefined1 *)((long)plVar3 + 0x5a) = 0;
  *(undefined8 *)((long)plVar3 + 0x5c) = 0;
  *(undefined8 *)((long)plVar3 + 100) = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  local_38 = plVar3 + 0x16;
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x20] = 0;
  pcVar8 = str_1000fee1;
  if (param_1 != (char *)0x0) {
    pcVar8 = param_1;
  }
  recovered_100030d0((long)(plVar3 + 0x21),0x220);
  uVar6 = 0xffffffffffffffff;
  do {
    lVar1 = uVar6 + 1;
    uVar6 = uVar6 + 1;
  } while (pcVar8[lVar1] != '\0');
  recovered_1000ef30(plVar3,(long)pcVar8,uVar6);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  uVar5 = 1;
  if (1 < (int)param_3) {
    uVar5 = param_3;
  }
  *(uint *)(plVar3 + 4) = param_2;
  *(uint *)((long)plVar3 + 0x24) = uVar5;
  *(uint *)((long)plVar3 + 0x3c) = param_2 >> 1;
  *(uint *)(plVar3 + 8) = uVar5 >> 1;
  *(uint *)((long)plVar3 + 0x44) = param_2 >> 1;
  *(uint *)(plVar3 + 9) = uVar5 >> 1;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x17 < _DAT_00280808 && ((code *)(ulong)_DAT_00280814 != (code *)0x0)))) {
    iVar2 = (*(code *)(ulong)_DAT_00280814)();
    *(bool *)((long)plVar3 + 0x1c) = iVar2 != 0;
    if (iVar2 != 0) {
      local_70[0] = 0;
      local_70[1] = 0;
      local_70[2] = 0;
      local_70[3] = 0;
      local_70[4] = 0;
      local_70[5] = 0;
      local_40 = 0;
      uVar4 = recovered_10009a90(local_70);
      if ((char)uVar4 != '\0') {
        DAT_10011398 = 0;
        DAT_1001139c = 0;
        DAT_10011380 = 0;
        DAT_10011390 = plVar3;
        recovered_10009d60(plVar3);
        if (*(char *)((long)plVar3 + 0x31) != '\0') {
          return plVar3;
        }
        DAT_10011390 = (long *)0x0;
      }
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && ((0x1b < _DAT_00280808 && (_DAT_00280818 != 0)))))) {
        (*(code *)(ulong)_DAT_00280818)();
      }
      goto LAB_10009a33;
    }
    param_2 = *(uint *)(plVar3 + 4);
    uVar5 = *(uint *)((long)plVar3 + 0x24);
  }
  else {
    *(undefined1 *)((long)plVar3 + 0x1c) = 0;
  }
  puVar7 = &DAT_1000fdf3;
  if ((undefined1 *)*plVar3 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)*plVar3;
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0xa3 < _DAT_00280808 && ((code *)(ulong)_DAT_002808a0 != (code *)0x0)))))) {
    iVar2 = (*(code *)(ulong)_DAT_002808a0)(puVar7,param_2,uVar5);
    *(int *)(plVar3 + 3) = iVar2;
    if (iVar2 != 0) {
      DAT_10011398 = 0;
      DAT_1001139c = 0;
      DAT_10011380 = 0;
      DAT_10011390 = plVar3;
      recovered_10009d60(plVar3);
      if (*(char *)((long)plVar3 + 0x1c) != '\0') {
        return plVar3;
      }
      if ((int)plVar3[3] == 0) {
        return plVar3;
      }
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         (((0xb7 < _DAT_00280808 && ((code *)(ulong)_DAT_002808b4 != (code *)0x0)) &&
          ((iVar2 = (*(code *)(ulong)_DAT_002808b4)((int)plVar3[3],local_38), iVar2 != 0 &&
           (plVar3[5] = *(long *)((long)plVar3 + 0xdc), (*(byte *)(plVar3 + 0x1b) & 1) == 0)))))) {
        return plVar3;
      }
      *(undefined1 *)(plVar3 + 6) = 1;
      return plVar3;
    }
  }
  else {
    *(undefined4 *)(plVar3 + 3) = 0;
  }
LAB_10009a33:
  plVar3[0x12] = 0;
  recovered_10008140((void *)plVar3[0x11]);
  plVar3[0xf] = 0;
  recovered_10008140((void *)plVar3[0xe]);
  recovered_10008140((void *)*plVar3);
  recovered_10008140(plVar3);
  return (long *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280814
#undef DAT_00280818
#undef DAT_002808a0
#undef DAT_002808b4
#undef DAT_1000fdf3
#undef DAT_10011380
#undef DAT_10011390
#undef DAT_10011398
#undef DAT_1001139c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280814
#undef _DAT_00280818
#undef _DAT_002808a0
#undef _DAT_002808b4
#undef str_1000fee1
#undef local_70
#undef local_40
#undef local_38

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028087c
#define DAT_0028087c (*(uint8_t *)(0x28087cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028087c
#define _DAT_0028087c (*(uint *)(0x28087cU))
#define local_78 (*(uint *)(pf_stack_frame + 56))
#define local_58 (*(ulong * *)(pf_stack_frame + 88))
#define uStack_90 (*(ulong *)(pf_stack_frame + 32))
#define uStack_80 (*(uint *)(pf_stack_frame + 48))
#define uStack_7c (*(uint *)(pf_stack_frame + 52))
#define uStack_74 (*(uint *)(pf_stack_frame + 60))
#define uStack_70 (*(uint *)(pf_stack_frame + 64))
#define uStack_6c (*(uint *)(pf_stack_frame + 68))
#define uStack_68 (*(uint *)(pf_stack_frame + 72))
#define local_98 (*(ulong *)(pf_stack_frame + 24))
#define local_88 (*(ulong *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009a90(ulong *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint128 auVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  uint128 auVar15;

  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_68 = 0;
  if ((((param_1 != (ulong *)0x0) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
     (((0xb < _DAT_00280808 && (0x7f < _DAT_00280808)) &&
      (((code *)(ulong)_DAT_0028087c != (code *)0x0 &&
       (local_58 = param_1, iVar5 = (*(code *)(ulong)_DAT_0028087c)(&local_98), iVar5 != 0)))))) {
    PF_PART8(auVar4, 8) = local_88;
    PF_PART8(auVar4, 0) = uStack_90;
    bVar1 = uStack_80 < local_78 + uStack_7c;
    bVar2 = uStack_80 < uStack_74 + uStack_70;
    bVar3 = uStack_80 < uStack_68 + uStack_6c;
    if ((bVar3 || bVar2) ||
        ((bVar1 || (uStack_80 <= uStack_68 || uStack_80 <= uStack_70)) ||
        ((uStack_80 <= local_78 || (uStack_80 < uStack_6c || uStack_80 < uStack_74)) ||
        (uStack_80 < uStack_7c || ((uStack_6c == 0 || uStack_74 == 0) || uStack_7c == 0))))) {
      uVar6 = 0;
      uVar12 = 0;
      uVar9 = 0;
    }
    else {
      uVar12 = ~(-1L << ((byte)uStack_7c & 0x3f)) << ((byte)local_78 & 0x3f);
      uVar6 = ~(-1L << ((byte)uStack_74 & 0x3f)) << ((byte)uStack_70 & 0x3f);
      uVar9 = ~(-1L << ((byte)uStack_6c & 0x3f)) << ((byte)uStack_68 & 0x3f);
    }
    uVar10 = uStack_80 + 7 >> 3;
    iVar5 = (int)uStack_90;
    uVar13 = (uint)(uStack_90 >> 0x20);
    iVar14 = (int)(local_88 >> 0x20);
    if (iVar14 == 0) {
      uVar11 = (ulong)uVar10 * (local_88 & 0xffffffff);
      uVar7 = 0;
    }
    else {
      uVar11 = (ulong)uVar10 * (local_88 & 0xffffffff);
      uVar7 = (ulong)(iVar14 - 1) * (ulong)uVar13 + uVar11;
    }
    if (iVar14 == 0) {
      return 0;
    }
    PF_PART4(auVar15, 0) = -(uint)(iVar5 == 0);
    PF_PART4(auVar15, 4) = -(uint)(iVar5 == 0);
    PF_PART4(auVar15, 8) = -(uint)(uVar13 == 0);
    PF_PART4(auVar15, 12) = -(uint)(SUB164((uint128)0x0,0xc) == uVar13);
    uVar8 = movmskpd(iVar14,auVar15);
    if (((local_98 == 0 | (byte)uVar8 | (int)local_88 == 0 | ((byte)uVar8 & 2) >> 1 |
         0x20 < uStack_80 | (byte)(0xfefe7fffL >> ((byte)uStack_80 & 0x3f))) & 1) != 0 ||
        ((bVar3 || bVar2) ||
        ((bVar1 || (uStack_80 <= uStack_68 || uStack_80 <= uStack_70)) ||
        ((uStack_80 <= local_78 || (uStack_80 < uStack_6c || uStack_80 < uStack_74)) ||
        (uStack_80 < uStack_7c || ((uStack_6c == 0 || uStack_74 == 0) || uStack_7c == 0)))))) {
      return 0;
    }
    if ((uVar12 & uVar6) != 0) {
      return 0;
    }
    if ((uVar12 & uVar9) != 0) {
      return 0;
    }
    if ((uVar9 & uVar6) != 0) {
      return 0;
    }
    if (uVar13 < uVar11) {
      return 0;
    }
    if ((uStack_90 & 0xffffffff) < uVar7) {
      return 0;
    }
    if (!CARRY8((ulong)(iVar5 - 1),local_98)) {
      *local_58 = local_98;
      { unsigned char pf_copy[16]; __builtin_memcpy(pf_copy,&(auVar4),16); __builtin_memcpy((local_58 + 1),pf_copy,16); }
      *(uint *)(local_58 + 3) = uStack_80;
      *(uint *)((long)local_58 + 0x1c) = uStack_7c;
      *(uint *)(local_58 + 4) = uStack_74;
      *(uint *)((long)local_58 + 0x24) = uStack_6c;
      *(uint *)(local_58 + 5) = local_78;
      *(uint *)((long)local_58 + 0x2c) = uStack_70;
      *(uint *)(local_58 + 6) = uStack_68;
      return CONCAT71((uint7)(uint3)(uStack_68 >> 8),1);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028087c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028087c
#undef local_78
#undef local_58
#undef uStack_90
#undef uStack_80
#undef uStack_7c
#undef uStack_74
#undef uStack_70
#undef uStack_6c
#undef uStack_68
#undef local_98
#undef local_88

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808a4
#define DAT_002808a4 (*(uint8_t *)(0x2808a4U))
#undef DAT_1000fdf3
#define DAT_1000fdf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21fU)))
#undef DAT_1000ff58
#define DAT_1000ff58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x384U)))
#undef LAB_1000a203
#define LAB_1000a203 (*(uint8_t *)(0x1000a203U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808a4
#define _DAT_002808a4 (*(uint *)(0x2808a4U))
#define local_d8 (*(uint (*)[54])(pf_stack_frame + 24))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 40))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 48))
#define local_a8 (*(code * *)(pf_stack_frame + 72))
#define local_a0 (*(undefined * *)(pf_stack_frame + 80))
#define local_98 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 104))
#define local_70 (*(ulong *)(pf_stack_frame + 128))
#define local_68 (*(ulong *)(pf_stack_frame + 136))
#define local_60 (*(void * *)(pf_stack_frame + 144))
#define local_58 (*(void * *)(pf_stack_frame + 152))
#define local_50 (*(void * *)(pf_stack_frame + 160))
#define local_44 (*(uint *)(pf_stack_frame + 172))
#define local_40 (*(undefined8 * *)(pf_stack_frame + 176))
#define local_38 (*(undefined8 *)(pf_stack_frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009d60(undefined8 *param_1)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  void *pvVar14;
  uint uVar15;
  int iVar16;
  void *pvVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;

  local_98 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 240) + -8);
  local_88 = (undefined1 *)local_d8;
  local_a8 = recovered_10008090;
  local_a0 = &DAT_1000ff58;
  local_90 = &LAB_1000a203;
  recovered_10008730(&local_c8);
  if (param_1 == (undefined8 *)0x0) goto LAB_10009f62;
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    local_c0 = 0xffffffff;
    uVar9 = recovered_1000b190((long)param_1);
    *(char *)((long)param_1 + 0x31) = (char)uVar9;
    if ((char)uVar9 == '\0') {
      *(undefined1 *)(param_1 + 6) = 1;
    }
    goto LAB_10009f62;
  }
  if (param_1[0xf] == 0) {
    local_38 = (void *)0x0;
    iVar8 = *(int *)(param_1 + 3);
  }
  else {
    local_38 = (void *)param_1[0xe];
    iVar8 = *(int *)(param_1 + 3);
  }
  if (iVar8 == 0) goto LAB_10009f62;
  uVar6 = *(uint *)(param_1 + 4);
  uVar20 = *(uint *)((long)param_1 + 0x24);
  pvVar14 = (void *)0x1;
  if (1 < (int)uVar6) {
    pvVar14 = (void *)(ulong)uVar6;
  }
  uVar5 = 1;
  if (1 < (int)uVar20) {
    uVar5 = uVar20;
  }
  if (*(char *)(param_1 + 6) != '\0') {
    recovered_10008140((void *)0x0);
    goto LAB_10009f62;
  }
  uVar19 = *(uint *)(param_1 + 0x15);
  pvVar17 = (void *)(ulong)uVar19;
  uVar15 = *(uint *)((long)param_1 + 0xac);
  if (((int)uVar15 < 1 || (int)uVar19 < 1) || local_38 == (void *)0x0) {
    pvVar10 = (void *)0x0;
    local_38 = (void *)0x0;
  }
  else if (uVar20 == uVar15 && uVar6 == uVar19) {
    pvVar10 = (void *)0x0;
    pvVar14 = pvVar17;
    uVar5 = uVar15;
  }
  else {
    lVar23 = (long)(int)uVar6;
    uVar9 = (int)uVar20 * (uintptr_t)lVar23 * 4;
    local_68 = (ulong)uVar15;
    local_60 = pvVar14;
    local_44 = uVar5;
    if (uVar9 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      local_c0 = 1;
      local_70 = uVar9;
      local_50 = pvVar17;
      local_40 = param_1;
      pvVar10 = (void *)recovered_100080e0(uVar9);
      uVar9 = 0;
      recovered_10008140((void *)0x0);
      if (local_70 < 8) goto LAB_10009f80;
      if (local_70 < 0x20) {
        uVar11 = 0;
LAB_10009f45:
        uVar9 = local_70 & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar10 + uVar11) = 0;
          uVar11 = uVar11 + 8;
        } while (uVar9 != uVar11);
        for (; local_70 != uVar9; uVar9 = uVar9 + 1) {
LAB_10009f80:
          *(undefined1 *)((long)pvVar10 + uVar9) = 0;
        }
      }
      else {
        uVar9 = local_70 & 0xffffffffffffffe0;
        uVar11 = 0;
        do {
          *(undefined8 *)((long)pvVar10 + uVar11) = 0;
          ((undefined8 *)((long)pvVar10 + uVar11))[1] = 0;
          puVar1 = (undefined8 *)((long)pvVar10 + uVar11 + 0x10);
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar11 = uVar11 + 0x20;
        } while (uVar9 != uVar11);
        if (local_70 != uVar9) {
          uVar11 = uVar9;
          if ((local_70 & 0x18) == 0) goto LAB_10009f80;
          goto LAB_10009f45;
        }
      }
      uVar2 = *(undefined1 *)((long)local_40 + 0x32);
      uVar3 = *(undefined1 *)((long)local_40 + 0x33);
      uVar4 = *(undefined1 *)((long)local_40 + 0x34);
      uVar9 = 0;
      do {
        *(undefined1 *)((long)pvVar10 + uVar9) = uVar2;
        *(undefined1 *)((long)pvVar10 + uVar9 + 1) = uVar3;
        *(undefined1 *)((long)pvVar10 + uVar9 + 2) = uVar4;
        *(undefined1 *)((long)pvVar10 + uVar9 + 3) = 0xff;
        uVar9 = uVar9 + 4;
      } while (uVar9 < local_70);
      uVar6 = *(uint *)(local_40 + 4);
      uVar20 = *(uint *)((long)local_40 + 0x24);
      lVar23 = (long)(int)uVar6;
      pvVar17 = local_50;
      param_1 = local_40;
    }
    uVar9 = lVar23 * local_68;
    if (uVar9 >> 0x20 == 0) {
      uVar5 = (uint)((uVar9 & 0xffffffff) / ((ulong)pvVar17 & 0xffffffff));
    }
    else {
      uVar5 = (uint)((long)uVar9 / (long)pvVar17);
    }
    uVar19 = 1;
    if (1 < (int)uVar5) {
      uVar19 = uVar5;
    }
    uVar15 = uVar6;
    pvVar14 = local_60;
    uVar5 = local_44;
    if ((int)uVar20 < (int)uVar19) {
      uVar9 = (long)(int)uVar20 * (long)pvVar17;
      if (uVar9 >> 0x20 == 0) {
        uVar19 = (uint)((uVar9 & 0xffffffff) / (local_68 & 0xffffffff));
      }
      else {
        uVar19 = (uint)((long)uVar9 / (long)local_68);
      }
      uVar15 = 1;
      if (1 < (int)uVar19) {
        uVar15 = uVar19;
      }
      uVar19 = uVar20;
      if ((int)uVar20 < 1) {
        local_38 = pvVar10;
        goto LAB_1000a133;
      }
    }
    uVar13 = (int)local_68 - 1;
    local_40 = (undefined8 *)CONCAT44(PF_PART4(local_40, 4),uVar13);
    iVar8 = (int)pvVar17 + -1;
    lVar21 = (long)pvVar10 +
             (long)((int)(uVar6 - uVar15) / 2) * 4 + ((int)(uVar20 - uVar19) / 2) * (uintptr_t)lVar23 * 4 + 3;
    uVar9 = 0;
    do {
      if (0 < (int)uVar15) {
        uVar11 = 0;
        uVar6 = (uint)((int)local_68 * (int)uVar9) / uVar19;
        if ((int)uVar13 < (int)uVar6) {
          uVar6 = uVar13;
        }
        uVar22 = 0;
        do {
          iVar7 = (int)(uVar11 / uVar15);
          iVar16 = iVar8;
          if (iVar7 <= iVar8) {
            iVar16 = iVar7;
          }
          lVar12 = (long)iVar16 + (long)(int)uVar6 * (long)pvVar17;
          *(undefined1 *)(lVar21 + -3 + uVar22 * 4) = *(undefined1 *)((long)local_38 + lVar12 * 4);
          *(undefined1 *)(lVar21 + -2 + uVar22 * 4) =
               *(undefined1 *)((long)local_38 + lVar12 * 4 + 1);
          *(undefined1 *)(lVar21 + -1 + uVar22 * 4) =
               *(undefined1 *)((long)local_38 + lVar12 * 4 + 2);
          *(undefined1 *)(lVar21 + uVar22 * 4) = *(undefined1 *)((long)local_38 + lVar12 * 4 + 3);
          uVar22 = uVar22 + 1;
          uVar11 = (ulong)(uint)((int)uVar11 + (int)pvVar17);
        } while (uVar15 != uVar22);
      }
      uVar9 = uVar9 + 1;
      lVar21 = lVar21 + (uintptr_t)lVar23 * 4;
    } while (uVar9 != uVar19);
    local_50 = pvVar10;
    local_38 = pvVar10;
  }
LAB_1000a133:
  puVar18 = &DAT_1000fdf3;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar18 = (undefined1 *)*param_1;
  }
  local_58 = pvVar10;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xa7 < _DAT_00280808 && ((code *)(ulong)_DAT_002808a4 != (code *)0x0)))) {
    local_d8[0] = (uint)*(byte *)((long)param_1 + 0x33) << 8 |
                  (uint)*(byte *)((long)param_1 + 0x32) << 0x10 |
                  (uint)*(byte *)((long)param_1 + 0x34);
    local_c0 = 2;
    local_40 = param_1;
    iVar8 = (*(code *)(ulong)_DAT_002808a4)
                      (*(undefined4 *)(param_1 + 3),puVar18,local_38,pvVar14,uVar5,(int)(uintptr_t)pvVar14 * 4)
    ;
    *(bool *)((long)local_40 + 0x31) = iVar8 != 0;
    param_1 = local_40;
    if (iVar8 == 0) goto LAB_1000a1e7;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x31) = 0;
LAB_1000a1e7:
    *(undefined1 *)(param_1 + 6) = 1;
  }
  recovered_10008140(local_58);
LAB_10009f62:
  recovered_10008750(&local_c8);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808a4
#undef DAT_1000fdf3
#undef DAT_1000ff58
#undef LAB_1000a203
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808a4
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_38

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808b0
#define DAT_002808b0 (*(uint8_t *)(0x2808b0U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b0
#define _DAT_002808b0 (*(uint *)(0x2808b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a260(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (((param_1 != 0) && (*(undefined1 *)(param_1 + 0x30) = 1, *(char *)(param_1 + 0x1c) == '\0'))
     && (*(int *)(param_1 + 0x18) != 0)) {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0xb3 < _DAT_00280808 && ((code *)(ulong)_DAT_002808b0 != (code *)0x0)))))) {
                    /* WARNING: Could not recover jumptable at 0x1000a2cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)_DAT_002808b0)
                (*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x2c),1,1);
      return;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280818
#define DAT_00280818 (*(uint8_t *)(0x280818U))
#undef DAT_002808a8
#define DAT_002808a8 (*(uint8_t *)(0x2808a8U))
#undef DAT_10011380
#define DAT_10011380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17acU)))
#undef DAT_10011390
#define DAT_10011390 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17bcU)))
#undef DAT_10011398
#define DAT_10011398 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17c4U)))
#undef DAT_1001139c
#define DAT_1001139c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17c8U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280818
#define _DAT_00280818 (*(uint *)(0x280818U))
#undef _DAT_002808a8
#define _DAT_002808a8 (*(uint *)(0x2808a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a2e0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (DAT_10011390 == param_1) {
    DAT_10011390 = (undefined8 *)0x0;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x1b < _DAT_00280808 && ((code *)(ulong)_DAT_00280818 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280818)();
    }
  }
  else if (((((*(int *)(param_1 + 3) != 0) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)
            ) && ((0xb < _DAT_00280808 && (0xab < _DAT_00280808)))) &&
          ((code *)(ulong)_DAT_002808a8 != (code *)0x0)) {
    (*(code *)(ulong)_DAT_002808a8)(*(int *)(param_1 + 3));
  }
  DAT_10011398 = 0;
  DAT_1001139c = 0;
  DAT_10011380 = 0;
  param_1[0x12] = 0;
  recovered_10008140((void *)param_1[0x11]);
  param_1[0xf] = 0;
  recovered_10008140((void *)param_1[0xe]);
  recovered_10008140((void *)*param_1);
  recovered_10008140(param_1);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280818
#undef DAT_002808a8
#undef DAT_10011380
#undef DAT_10011390
#undef DAT_10011398
#undef DAT_1001139c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280818
#undef _DAT_002808a8

#undef DAT_1000fdf3
#define DAT_1000fdf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21fU)))
#undef DAT_1000ff60
#define DAT_1000ff60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef LAB_1000a50c
#define LAB_1000a50c (*(uint8_t *)(0x1000a50cU))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(void * *)(pf_stack_frame + 112))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 120))
#define local_38 (*(undefined8 *)(pf_stack_frame + 136))
#define lStack_40 (*(long *)(pf_stack_frame + 128))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_88 (*(code * *)(pf_stack_frame + 56))
#define local_80 (*(undefined * *)(pf_stack_frame + 64))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a410
 */

long recovered_1000a410(undefined8 *param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined1 *puVar2;
  long lVar3;

  local_78 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  local_68 = (undefined1 *)&local_a8;
  local_48 = (undefined1 *)0x0;
  lStack_40 = 0;
  local_38 = 0;
  local_88 = recovered_10008090;
  local_80 = &DAT_1000ff60;
  local_70 = &LAB_1000a50c;
  recovered_10008730(&local_a8);
  if (param_1 == (undefined8 *)0x0) {
    lVar3 = 1;
  }
  else {
    puVar2 = &DAT_1000fdf3;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_1;
    }
    local_a0 = 0xffffffff;
    recovered_1000ef30((long *)&local_48,(long)puVar2,param_1[1]);
    lVar3 = lStack_40 + 1;
  }
  local_a0 = 1;
  local_50 = (void *)recovered_10008110(lVar3);
  puVar2 = &DAT_1000fdf3;
  if (local_48 != (undefined1 *)0x0) {
    puVar2 = local_48;
  }
  local_a0 = 2;
  recovered_10001db0(local_50,puVar2,lStack_40 + 1);
  pvVar1 = local_50;
  recovered_10008140(local_48);
  recovered_10008750(&local_a8);
  return (long)pvVar1;
}

#undef DAT_1000fdf3
#undef DAT_1000ff60
#undef LAB_1000a50c
#undef local_68
#undef local_50
#undef local_48
#undef local_38
#undef lStack_40
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a560
 */

void recovered_1000a560(long param_1,undefined4 *param_2,undefined4 *param_3)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a590
 */

void recovered_1000a590(long param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  if (param_1 != 0) {
    if (param_2 < 2) {
      param_2 = 1;
    }
    *(int *)(param_1 + 0x20) = param_2;
    iVar2 = 1;
    if (1 < param_3) {
      iVar2 = param_3;
    }
    *(int *)(param_1 + 0x24) = iVar2;
    iVar1 = *(int *)(param_1 + 0x3c);
    iVar3 = param_2 + -1;
    if (iVar1 <= param_2 + -1) {
      iVar3 = iVar1;
    }
    if (iVar1 < 0) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x3c) = iVar3;
    iVar1 = *(int *)(param_1 + 0x40);
    iVar3 = iVar2 + -1;
    if (iVar1 <= iVar2 + -1) {
      iVar3 = iVar1;
    }
    if (iVar1 < 0) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x40) = iVar3;
    if (*(char *)(param_1 + 0x1c) != '\x01') {
      recovered_10009d60((undefined8 *)param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  return;
}


#undef DAT_1000fda0
#define DAT_1000fda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ccU)))
#undef UNK_1000fda4
#define UNK_1000fda4 (*(uint *)(((uintptr_t)pf_module_state + 0x1d0U)))
#undef _DAT_1000fda0
#define _DAT_1000fda0 (*(uint *)(((uintptr_t)pf_module_state + 0x1ccU)))
#undef uRam000000001000fda4
#define uRam000000001000fda4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a5f0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;

  uVar4 = -(uint)((int)_DAT_1000fda0 < (int)*(uint *)(param_1 + 0x20));
  uVar5 = -(uint)((int)uRam000000001000fda4 < (int)*(uint *)(param_1 + 0x24));
  iVar2 = (~uVar4 & _DAT_1000fda0 | *(uint *)(param_1 + 0x20) & uVar4) - 1;
  iVar3 = (~uVar5 & uRam000000001000fda4 | *(uint *)(param_1 + 0x24) & uVar5) - 1;
  uVar1 = *(ulong *)(param_1 + 0x3c);
  uVar6 = CONCAT44(-(uint)(iVar3 < (int)(uVar1 >> 0x20)),-(uint)(iVar2 < (int)uVar1));
  *(ulong *)(param_1 + 0x3c) =
       ~CONCAT44(-(uint)((long)uVar1 < 0),-(uint)((int)uVar1 < 0)) &
       (~uVar6 & uVar1 | CONCAT44(iVar3,iVar2) & uVar6);
  return;
}

#undef DAT_1000fda0
#undef UNK_1000fda4
#undef _DAT_1000fda0
#undef uRam000000001000fda4

#undef DAT_1000fdf3
#define DAT_1000fdf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a650
 */

void recovered_1000a650(long *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;

  if (param_1 != (long *)0x0) {
    puVar3 = &DAT_1000fdf3;
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = param_2;
    }
    uVar2 = 0xffffffffffffffff;
    do {
      lVar1 = uVar2 + 1;
      uVar2 = uVar2 + 1;
    } while (puVar3[lVar1] != '\0');
    recovered_1000ef30(param_1,(long)puVar3,uVar2);
    if (*(char *)((long)param_1 + 0x1c) == '\0') {
      recovered_10009d60(param_1);
      return;
    }
  }
  return;
}

#undef DAT_1000fdf3

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(uint *)(0x2808b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a6b0(long param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;

  if (param_2 == (int *)0x0 || param_1 == 0) {
    return;
  }
  if (*(long *)(param_2 + 2) == 0) {
    return;
  }
  if (*param_2 < 1) {
    return;
  }
  if (param_2[1] < 1) {
    return;
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
       (((_DAT_00280808 < 0xb8 || ((code *)(ulong)_DAT_002808b4 == (code *)0x0)) ||
        (iVar4 = (*(code *)(ulong)_DAT_002808b4)(*(int *)(param_1 + 0x18),param_1 + 0xb0),
        iVar4 == 0)))) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0xdc);
    if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar4 = *param_2;
    iVar2 = param_2[1];
    cVar1 = *(char *)(param_1 + 0x1c);
    puVar3 = *(undefined1 **)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x78) = 0;
    recovered_1000f8c0((long *)(param_1 + 0x70),*(long *)(param_1 + 0x70),puVar3,
                       puVar3 + (long)iVar2 * (long)iVar4 * 4);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)param_2;
    if (cVar1 != '\x01') {
      recovered_10009d60((undefined8 *)param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b4

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028089c
#define DAT_0028089c (*(uint8_t *)(0x28089cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028089c
#define _DAT_0028089c (*(uint *)(0x28089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a800(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x1c) == '\x01') {
      if (*(char *)(param_1 + 0x58) == '\0') {
        recovered_1000a8a0(param_1);
      }
      uVar1 = recovered_1000b190(param_1);
      *(char *)(param_1 + 0x31) = (char)uVar1;
      if ((char)uVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
    }
    else if (*(char *)(param_1 + 0x31) == '\0') {
      recovered_10009d60((undefined8 *)param_1);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x9f < _DAT_00280808 && ((code *)(ulong)_DAT_0028089c != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000a891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)_DAT_0028089c)();
      return;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028089c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028089c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280880
#define DAT_00280880 (*(uint8_t *)(0x280880U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_00280900
#define DAT_00280900 (*(uint8_t *)(0x280900U))
#undef DAT_1000fda0
#define DAT_1000fda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ccU)))
#undef UNK_1000fda4
#define UNK_1000fda4 (*(uint *)(((uintptr_t)pf_module_state + 0x1d0U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280880
#define _DAT_00280880 (*(uint *)(0x280880U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(uint *)(0x2808b4U))
#undef _DAT_00280900
#define _DAT_00280900 (*(uint *)(0x280900U))
#undef _DAT_1000fda0
#define _DAT_1000fda0 (*(uint *)(((uintptr_t)pf_module_state + 0x1ccU)))
#undef uRam000000001000fda4
#define uRam000000001000fda4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d0U)))
#define local_98 (*(ulong *)(pf_stack_frame + 72))
#define local_90 (*(long *)(pf_stack_frame + 80))
#define local_88 (*(uint (*)[34])(pf_stack_frame + 88))
#define local_64 (*(uint *)(pf_stack_frame + 124))
#define local_60 (*(ulong *)(pf_stack_frame + 128))
#define local_58 (*(undefined1 (*)[88])(pf_stack_frame + 136))
#define local_48 (*(undefined1 (*)[72])(pf_stack_frame + 152))
#define uStack_74 (*(ulong *)(pf_stack_frame + 108))
#define local_d0 (*(ulong *)(pf_stack_frame + 16))
#define local_c8 (*(undefined1 (*)[200])(pf_stack_frame + 24))
#define local_b8 (*(undefined1 (*)[184])(pf_stack_frame + 40))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 56))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a8a0(long param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint128 auVar15;
  uint uVar16;
  uint uVar17;

  if (param_1 == 0) {
    return;
  }
  PF_PART16(local_48,0) = (uint128)0x0;
  PF_PART16(local_58,0) = (uint128)0x0;
  if (*(char *)(param_1 + 0x1c) != '\x01') {
    local_88[4] = 0;
    uStack_74 = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    PF_PART8(local_c8, 8) = 0;
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    if ((((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
         ((_DAT_00280808 < 0xb8 || ((code *)(ulong)_DAT_002808b4 == (code *)0x0)))) ||
        (iVar4 = (*(code *)(ulong)_DAT_002808b4)(*(int *)(param_1 + 0x18),param_1 + 0xb0),
        iVar4 == 0)) ||
       (*(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0xdc),
       (*(byte *)(param_1 + 0xd8) & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      return;
    }
    if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
       ((_DAT_00280808 < 0xc ||
        (((_DAT_00280808 < 0x104 || ((code *)(ulong)_DAT_00280900 == (code *)0x0)) ||
         (iVar4 = (*(code *)(ulong)_DAT_00280900)(*(undefined4 *)(param_1 + 0x18),local_88),
         iVar4 == 0)))))) {
      if (_DAT_00280800 != 0x50414d57) {
        return;
      }
      if (_DAT_00280804 == 0) {
        return;
      }
      if (_DAT_00280808 < 0xc) {
        return;
      }
      if (_DAT_00280808 < 0x84) {
        return;
      }
      if ((code *)(ulong)_DAT_00280880 == (code *)0x0) {
        return;
      }
      iVar4 = (*(code *)(ulong)_DAT_00280880)(local_58);
      if (iVar4 == 0) {
        return;
      }
      uVar6 = recovered_10009a90(&local_d0);
      if (((byte)local_58[0] & 1) == 0 || (char)uVar6 != '\x01') {
        if (((byte)local_58[0] & 2) != 0) {
          if (PF_PART4(local_48, 0) != 0 || PF_PART4(local_48, 4) != 0) {
            iVar4 = *(int *)(param_1 + 0x48);
            iVar14 = PF_PART4(local_48, 4) + iVar4;
            if (SCARRY4(PF_PART4(local_48, 4),iVar4)) {
              iVar14 = (PF_PART4(local_48, 4) + iVar4 >> 0x1f) + -0x80000000LL;
            }
            iVar4 = *(int *)(param_1 + 0x44);
            iVar13 = PF_PART4(local_48, 0) + iVar4;
            if (SCARRY4(PF_PART4(local_48, 0),iVar4)) {
              iVar13 = (PF_PART4(local_48, 0) + iVar4 >> 0x1f) + -0x80000000LL;
            }
            *(int *)(param_1 + 0x3c) = iVar13;
            goto LAB_1000b112;
          }
        }
      }
      else {
        uVar16 = 0;
        uVar17 = 0;
        if (1 < (int)PF_PART4(local_c8, 8)) {
          uVar7 = (ulong)(uint)PF_PART4(local_48, 8);
          if (uVar7 == 0) {
            uVar10 = PF_PART4(local_c8, 8) - 1;
            if ((uint)PF_PART4(local_58, 8) <= PF_PART4(local_c8, 8) - 1) {
              uVar10 = PF_PART4(local_58, 8);
            }
            uVar17 = 0;
            if (-1 < (int)PF_PART4(local_58, 8)) {
              uVar17 = uVar10;
            }
          }
          else {
            uVar17 = 0;
            if (0 < (int)PF_PART4(local_58, 8)) {
              uVar17 = PF_PART4(local_58, 8);
            }
            if ((uint)PF_PART4(local_48, 8) <= uVar17) {
              uVar17 = PF_PART4(local_48, 8);
            }
            uVar9 = (ulong)(PF_PART4(local_c8, 8) - 1) * (ulong)uVar17;
            if ((uVar9 & 0x7fffffff00000000) == 0) {
              uVar17 = (uint)((uVar9 & 0xffffffff) / uVar7);
            }
            else {
              uVar17 = (uint)(uVar9 / uVar7);
            }
          }
        }
        if (1 < (int)PF_PART4(local_c8, 12)) {
          uVar7 = (ulong)(uint)PF_PART4(local_48, 12);
          if (uVar7 == 0) {
            uVar10 = PF_PART4(local_c8, 12) - 1;
            if ((uint)PF_PART4(local_58, 12) <= PF_PART4(local_c8, 12) - 1) {
              uVar10 = PF_PART4(local_58, 12);
            }
            uVar16 = 0;
            if (-1 < (int)PF_PART4(local_58, 12)) {
              uVar16 = uVar10;
            }
          }
          else {
            uVar16 = 0;
            if (0 < (int)PF_PART4(local_58, 12)) {
              uVar16 = PF_PART4(local_58, 12);
            }
            if ((uint)PF_PART4(local_48, 12) <= uVar16) {
              uVar16 = PF_PART4(local_48, 12);
            }
            uVar9 = (ulong)(PF_PART4(local_c8, 12) - 1) * (ulong)uVar16;
            if ((uVar9 & 0x7fffffff00000000) == 0) {
              uVar16 = (uint)((uVar9 & 0xffffffff) / uVar7);
            }
            else {
              uVar16 = (uint)(uVar9 / uVar7);
            }
          }
        }
        *(uint *)(param_1 + 0x3c) = (uVar17 - *(int *)(param_1 + 0x28)) + -0xe;
        iVar14 = (uVar16 - *(int *)(param_1 + 0x2c)) + -0x26;
LAB_1000b112:
        *(int *)(param_1 + 0x40) = iVar14;
      }
      uVar16 = *(uint *)(param_1 + 0xd8) & 6;
      if (uVar16 == 2) {
        if ((((byte)local_58[4] & 1) != 0) && (*(char *)(param_1 + 0x4c) == '\0')) {
          *(undefined1 *)(param_1 + 0x55) = 1;
        }
        if ((((byte)local_58[4] & 2) != 0) && (*(char *)(param_1 + 0x4d) == '\0')) {
          *(undefined1 *)(param_1 + 0x56) = 1;
        }
        if (((byte)local_58[4] & 4) != 0) {
          uVar8 = 1;
          if (*(char *)(param_1 + 0x4e) == '\0') {
            *(undefined1 *)(param_1 + 0x57) = 1;
          }
          goto LAB_1000b148;
        }
      }
      uVar8 = 0;
LAB_1000b148:
      *(byte *)(param_1 + 0x4c) = local_58[4] & uVar16 == 2;
      *(byte *)(param_1 + 0x4d) = (byte)(((byte)local_58[4] & 2) >> 1) & uVar16 == 2;
      *(undefined1 *)(param_1 + 0x4e) = uVar8;
      *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x3c);
      recovered_1000a5f0(param_1);
      return;
    }
    if ((local_88[0] & 1) == 0) {
      *(undefined2 *)(param_1 + 0x4c) = 0;
      *(undefined1 *)(param_1 + 0x4e) = 0;
      uVar16 = -(uint)((int)_DAT_1000fda0 < (int)*(uint *)(param_1 + 0x20));
      uVar17 = -(uint)((int)uRam000000001000fda4 < (int)*(uint *)(param_1 + 0x24));
      iVar4 = (~uVar16 & _DAT_1000fda0 | *(uint *)(param_1 + 0x20) & uVar16) - 1;
      iVar14 = (~uVar17 & uRam000000001000fda4 | *(uint *)(param_1 + 0x24) & uVar17) - 1;
      uVar7 = *(ulong *)(param_1 + 0x3c);
      uVar9 = CONCAT44(-(uint)(iVar14 < (int)(uVar7 >> 0x20)),-(uint)(iVar4 < (int)uVar7));
      *(ulong *)(param_1 + 0x3c) =
           ~CONCAT44(-(uint)((long)uVar7 < 0),-(uint)((int)uVar7 < 0)) &
           (~uVar9 & uVar7 | CONCAT44(iVar14,iVar4) & uVar9);
      return;
    }
    bVar3 = (byte)local_88[1];
    bVar11 = (*(uint *)(param_1 + 0xd8) & 6) == 2;
    bVar12 = (local_88[0] & 4) != 0;
    *(ulong *)(param_1 + 0x44) = uStack_74;
    if (local_88[4] == *(int *)(param_1 + 0x38)) {
      if ((local_88[0] & 2) == 0 || (!bVar12 || !bVar11)) goto LAB_1000af79;
      *(byte *)(param_1 + 0x4c) = bVar3 & 1;
    }
    else {
      *(uint *)(param_1 + 0x38) = local_88[4];
      if (((byte)local_88[0] >> 1 & (bVar12 && bVar11)) == 0) {
LAB_1000af79:
        *(undefined2 *)(param_1 + 0x4c) = 0;
        bVar3 = 0;
        goto LAB_1000b03d;
      }
      if ((local_88[2] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x55) = 1;
      }
      if ((local_88[2] & 2) != 0) {
        *(undefined1 *)(param_1 + 0x56) = 1;
      }
      bVar3 = bVar3 | (byte)local_88[2];
      if ((local_88[2] & 4) != 0) {
        *(undefined1 *)(param_1 + 0x57) = 1;
      }
      *(byte *)(param_1 + 0x4c) = bVar3 & 1;
    }
    *(byte *)(param_1 + 0x4d) = bVar3 >> 1 & 1;
    bVar3 = bVar3 >> 2 & 1;
LAB_1000b03d:
    *(byte *)(param_1 + 0x4e) = bVar3;
    uVar16 = -(uint)((int)_DAT_1000fda0 < (int)*(uint *)(param_1 + 0x20));
    uVar17 = -(uint)((int)uRam000000001000fda4 < (int)*(uint *)(param_1 + 0x24));
    iVar4 = (~uVar16 & _DAT_1000fda0 | *(uint *)(param_1 + 0x20) & uVar16) - 1;
    iVar14 = (~uVar17 & uRam000000001000fda4 | *(uint *)(param_1 + 0x24) & uVar17) - 1;
    uVar7 = CONCAT44(-(uint)(iVar14 < (int)(uStack_74 >> 0x20)),-(uint)(iVar4 < (int)uStack_74));
    *(ulong *)(param_1 + 0x3c) =
         ~CONCAT44(-(uint)((long)uStack_74 < 0),-(uint)((int)uStack_74 < 0)) &
         (~uVar7 & uStack_74 | CONCAT44(iVar14,iVar4) & uVar7);
    return;
  }
  if (_DAT_00280800 != 0x50414d57) {
    return;
  }
  if (_DAT_00280804 == 0) {
    return;
  }
  if (_DAT_00280808 < 0xc) {
    return;
  }
  if (_DAT_00280808 < 0x84) {
    return;
  }
  if ((code *)(ulong)_DAT_00280880 == (code *)0x0) {
    return;
  }
  iVar4 = (*(code *)(ulong)_DAT_00280880)(local_58);
  if (iVar4 == 0) {
    return;
  }
  if (((byte)local_58[0] & 1) == 0) {
    if (((byte)local_58[0] & 2) != 0) {
      *(undefined2 *)(param_1 + 0x59) = 0;
      iVar14 = PF_PART4(local_48, 0);
      iVar13 = PF_PART4(local_48, 4);
      PF_PART4(auVar15, 0) = -(uint)(iVar14 == 0);
      PF_PART4(auVar15, 4) = -(uint)(iVar14 == 0);
      PF_PART4(auVar15, 8) = -(uint)(iVar13 == 0);
      PF_PART4(auVar15, 12) = -(uint)(SUB164((uint128)0x0,0xc) == iVar13);
      iVar4 = movmskpd(PF_PART4(local_58, 0),auVar15);
      if (iVar4 != 3) {
        *(ulong *)(param_1 + 0x3c) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20) + iVar13,
                      (int)*(undefined8 *)(param_1 + 0x3c) + iVar14);
      }
    }
    goto LAB_1000ab79;
  }
  local_90 = param_1;
  if (((*(char *)(param_1 + 0x59) == '\x01') && (*(uint *)(param_1 + 100) == PF_PART4(local_48, 8))) &&
     (*(uint *)(param_1 + 0x68) == PF_PART4(local_48, 12))) {
    if ((*(uint *)(param_1 + 0x5c) == PF_PART4(local_58, 8)) &&
       (*(uint *)(param_1 + 0x60) == PF_PART4(local_58, 12))) {
      if ((*(byte *)(param_1 + 0x5a) & 1) == 0) goto LAB_1000ab5b;
    }
    else {
      *(undefined1 *)(param_1 + 0x5a) = 1;
    }
    local_d0 = 0;
    PF_PART16(local_c8,0) = (uint128)0x0;
    PF_PART16(local_b8,0) = (uint128)0x0;
    local_a8 = 0;
    local_a0 = 0;
    uVar6 = recovered_10009a90(&local_d0);
    uVar17 = *(uint *)(param_1 + 0x20);
    uVar16 = PF_PART4(local_58, 8);
    uVar1 = PF_PART4(local_48, 8);
    uVar10 = PF_PART4(local_48, 8);
    if ((char)uVar6 == '\0') goto LAB_1000adae;
    if ((int)uVar17 < 1) {
      uVar5 = 0;
LAB_1000ae1e:
      *(uint *)(param_1 + 0x3c) = uVar5;
      iVar4 = *(int *)(param_1 + 0x24);
      uVar5 = 0;
      uVar17 = PF_PART4(local_58, 12);
      PF_PART4(local_48, 8) = uVar10;
      if (1 < iVar4) {
        if (PF_PART4(local_48, 12) == 0) {
          uVar10 = iVar4 - 1U;
          if ((uint)PF_PART4(local_58, 12) <= iVar4 - 1U) {
            uVar10 = PF_PART4(local_58, 12);
          }
          uVar5 = 0;
          if (-1 < (int)PF_PART4(local_58, 12)) {
            uVar5 = uVar10;
          }
        }
        else {
          uVar10 = 0;
          if (0 < (int)PF_PART4(local_58, 12)) {
            uVar10 = PF_PART4(local_58, 12);
          }
          if ((uint)PF_PART4(local_48, 12) <= uVar10) {
            uVar10 = PF_PART4(local_48, 12);
          }
          uVar7 = (ulong)(iVar4 - 1) * (ulong)uVar10;
          if ((uVar7 & 0x7fffffff00000000) == 0) {
            uVar5 = (uint)((uVar7 & 0xffffffff) / (ulong)(uint)PF_PART4(local_48, 12));
          }
          else {
            uVar5 = (uint)(uVar7 / (uint)PF_PART4(local_48, 12));
          }
        }
      }
    }
    else {
      local_60 = (ulong)(int)*(uint *)(param_1 + 0x24);
      if ((long)local_60 < 1) {
LAB_1000adae:
        uVar7 = (ulong)(uint)PF_PART4(local_48, 8);
        uVar5 = 0;
        if (1 < (int)uVar17) {
          if (PF_PART4(local_48, 8) == 0) {
            uVar5 = uVar17 - 1;
            if ((uint)PF_PART4(local_58, 8) <= uVar17 - 1) {
              uVar5 = PF_PART4(local_58, 8);
            }
            if ((int)PF_PART4(local_58, 8) < 0) {
              uVar5 = 0;
            }
            uVar10 = 0;
          }
          else {
            uVar5 = 0;
            if (0 < (int)PF_PART4(local_58, 8)) {
              uVar5 = PF_PART4(local_58, 8);
            }
            uVar9 = (ulong)uVar5;
            if ((uint)PF_PART4(local_48, 8) <= uVar5) {
              uVar9 = uVar7;
            }
            uVar9 = (uVar17 - 1) * uVar9;
            if ((uVar9 & 0x7fffffff00000000) == 0) {
              uVar5 = (uint)((uVar9 & 0xffffffff) / uVar7);
            }
            else {
              uVar5 = (uint)(uVar9 / uVar7);
            }
          }
        }
        goto LAB_1000ae1e;
      }
      if ((ulong)(uint)PF_PART4(local_c8, 8) == 0) goto LAB_1000adae;
      local_98 = (ulong)(uint)PF_PART4(local_c8, 12);
      if (local_98 == 0) goto LAB_1000adae;
      uVar7 = (uint)PF_PART4(local_c8, 8) * local_60;
      if (uVar7 >> 0x20 == 0) {
        uVar10 = (uint)((uVar7 & 0xffffffff) / (ulong)uVar17);
      }
      else {
        uVar10 = (uint)(uVar7 / uVar17);
      }
      local_64 = 1;
      if (1 < uVar10) {
        local_64 = uVar10;
      }
      uVar5 = PF_PART4(local_c8, 8);
      if ((uint)PF_PART4(local_c8, 12) < uVar10) {
        uVar7 = local_98 * uVar17;
        if (uVar7 >> 0x20 == 0) {
          uVar10 = (uint)((uVar7 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x24));
        }
        else {
          uVar10 = (uint)(uVar7 / local_60);
        }
        uVar5 = 1;
        if (1 < uVar10) {
          uVar5 = uVar10;
        }
        local_64 = PF_PART4(local_c8, 12);
      }
      uVar10 = PF_PART4(local_c8, 12) - local_64;
      uVar7 = recovered_1000f1e0(PF_PART4(local_58, 8),PF_PART4(local_48, 8),PF_PART4(local_c8, 8),
                                 PF_PART4(local_c8, 8) - uVar5 >> 1,uVar5,uVar17);
      *(int *)(param_1 + 0x3c) = (int)uVar7;
      uVar17 = PF_PART4(local_58, 12);
      uVar2 = PF_PART4(local_48, 12);
      uVar7 = recovered_1000f1e0(PF_PART4(local_58, 12),PF_PART4(local_48, 12),(uint)local_98,uVar10 >> 1,local_64
                                 ,(int)local_60);
      uVar5 = (uint)uVar7;
      PF_PART4(local_48, 8) = uVar1;
      PF_PART4(local_48, 12) = uVar2;
    }
    *(uint *)(local_90 + 0x40) = uVar5;
  }
  else {
    *(undefined2 *)(param_1 + 0x59) = 1;
LAB_1000ab5b:
    uVar16 = PF_PART4(local_58, 8);
    uVar17 = PF_PART4(local_58, 12);
  }
  *(uint *)(local_90 + 0x5c) = uVar16;
  *(uint *)(local_90 + 0x60) = uVar17;
  *(undefined4 *)(local_90 + 100) = PF_PART4(local_48, 8);
  *(undefined4 *)(local_90 + 0x68) = PF_PART4(local_48, 12);
  param_1 = local_90;
LAB_1000ab79:
  if (((local_58[4] & 1) != 0) && (*(char *)(param_1 + 0x4c) == '\0')) {
    *(undefined1 *)(param_1 + 0x52) = 1;
    *(undefined1 *)(param_1 + 0x55) = 1;
  }
  *(byte *)(param_1 + 0x4c) = local_58[4] & 1;
  if (((local_58[4] >> 1 & 1) != 0) && (*(char *)(param_1 + 0x4d) == '\0')) {
    *(undefined1 *)(param_1 + 0x53) = 1;
    *(undefined1 *)(param_1 + 0x56) = 1;
  }
  *(byte *)(param_1 + 0x4d) = local_58[4] >> 1 & 1;
  if (((local_58[4] >> 2 & 1) != 0) && (*(char *)(param_1 + 0x4e) == '\0')) {
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined1 *)(param_1 + 0x57) = 1;
  }
  *(byte *)(param_1 + 0x4e) = local_58[4] >> 2 & 1;
  uVar7 = *(ulong *)(param_1 + 0x3c);
  uVar16 = -(uint)((int)_DAT_1000fda0 < (int)*(uint *)(param_1 + 0x20));
  uVar17 = -(uint)((int)uRam000000001000fda4 < (int)*(uint *)(param_1 + 0x24));
  iVar4 = (~uVar16 & _DAT_1000fda0 | *(uint *)(param_1 + 0x20) & uVar16) - 1;
  iVar14 = (~uVar17 & uRam000000001000fda4 | *(uint *)(param_1 + 0x24) & uVar17) - 1;
  uVar9 = CONCAT44(-(uint)(iVar14 < (int)(uVar7 >> 0x20)),-(uint)(iVar4 < (int)uVar7));
  *(ulong *)(param_1 + 0x3c) =
       ~CONCAT44(-(uint)((long)uVar7 < 0),-(uint)((int)uVar7 < 0)) &
       (~uVar9 & uVar7 | CONCAT44(iVar14,iVar4) & uVar9);
  *(ulong *)(param_1 + 0x44) = uVar7;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280880
#undef DAT_002808b4
#undef DAT_00280900
#undef DAT_1000fda0
#undef UNK_1000fda4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280880
#undef _DAT_002808b4
#undef _DAT_00280900
#undef _DAT_1000fda0
#undef uRam000000001000fda4
#undef local_98
#undef local_90
#undef local_88
#undef local_64
#undef local_60
#undef local_58
#undef local_48
#undef uStack_74
#undef local_d0
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_a0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028095c
#define DAT_0028095c (*(uint8_t *)(0x28095cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028095c
#define _DAT_0028095c (*(uint *)(0x28095cU))
#define local_78 (*(ulong *)(pf_stack_frame + 24))
#define local_70 (*(undefined8 *)(pf_stack_frame + 32))
#define local_60 (*(undefined8 *)(pf_stack_frame + 48))
#define local_50 (*(undefined8 *)(pf_stack_frame + 64))
#define local_48 (*(undefined4 *)(pf_stack_frame + 72))
#define local_3c (*(uint *)(pf_stack_frame + 84))
#define local_38 (*(ulong *)(pf_stack_frame + 88))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_58 (*(undefined8 *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1000b190(long param_1)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  int iVar27;

  if ((((*(char *)(param_1 + 0x1c) != '\x01') || (*(char *)(param_1 + 0x30) != '\0')) ||
      (*(int *)(param_1 + 0x20) < 1)) || (*(int *)(param_1 + 0x24) < 1)) {
    return 0;
  }
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uVar6 = recovered_10009a90(&local_78);
  uVar7 = 0;
  uVar22 = 0;
  if ((char)uVar6 == '\0') goto LAB_1000bce1;
  bVar14 = (byte)((ulong)local_60 >> 0x20);
  if (PF_PART4(local_60, 4) != 0) {
    uVar7 = ~(-1L << (bVar14 & 0x3f));
    if (0x1f < PF_PART4(local_60, 4)) {
      uVar7 = 0xffffffff;
    }
    uVar22 = (uint)((uVar7 * *(byte *)(param_1 + 0x32) + 0x7f) / 0xff << ((byte)local_50 & 0x3f));
  }
  uVar17 = 0;
  uVar19 = 0;
  bVar10 = (byte)uStack_58;
  if ((uint)uStack_58 != 0) {
    uVar7 = ~(-1L << (bVar10 & 0x3f));
    if (0x1f < (uint)uStack_58) {
      uVar7 = 0xffffffff;
    }
    uVar19 = (uint)((uVar7 * *(byte *)(param_1 + 0x33) + 0x7f) / 0xff << (PF_PART1(local_50, 4) & 0x3f));
  }
  bVar11 = (byte)((ulong)uStack_58 >> 0x20);
  if (PF_PART4(uStack_58, 4) != 0) {
    uVar7 = ~(-1L << (bVar11 & 0x3f));
    if (0x1f < PF_PART4(uStack_58, 4)) {
      uVar7 = 0xffffffff;
    }
    uVar17 = (uint)((uVar7 * *(byte *)(param_1 + 0x34) + 0x7f) / 0xff << ((byte)local_48 & 0x3f));
  }
  if (PF_PART4(uStack_68, 4) == 0) {
    uVar22 = 0;
  }
  else {
    uVar17 = uVar19 | uVar22 | uVar17;
    uVar7 = 0;
    uVar19 = (uint)uStack_68;
    do {
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else {
        uVar20 = 0;
        do {
          if ((uVar7 < PF_PART4(uStack_68, 4)) && (7 < (int)local_60 + 7U)) {
            uVar22 = (int)local_60 + 7U >> 3;
            lVar25 = uVar20 * uVar22 + PF_PART4(local_70, 4) * uVar7 + local_78;
            if ((ulong)uVar22 - 1 < 3) {
              uVar12 = 0;
            }
            else {
              bVar13 = 0x18;
              uVar12 = 0;
              do {
                *(char *)(lVar25 + uVar12) = (char)uVar17;
                *(char *)(lVar25 + 1 + uVar12) = (char)(uVar17 >> (bVar13 - 0x10 & 0x1f));
                *(char *)(lVar25 + 2 + uVar12) = (char)(uVar17 >> (bVar13 - 8 & 0x1f));
                *(char *)(lVar25 + 3 + uVar12) = (char)(uVar17 >> (bVar13 & 0x1f));
                uVar12 = uVar12 + 4;
                bVar13 = bVar13 + 0x20;
              } while ((uVar22 & 0xfffffffc) != uVar12);
            }
            if ((uVar22 & 3) != 0) {
              bVar13 = 0;
              uVar15 = 0;
              do {
                *(char *)(lVar25 + uVar12 + uVar15) = (char)(uVar17 >> (bVar13 & 0x1f));
                uVar15 = uVar15 + 1;
                bVar13 = bVar13 + 8;
              } while ((uVar22 & 3) != uVar15);
            }
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < (uStack_68 & 0xffffffff));
        uVar19 = (uint)uStack_68;
      }
      uVar7 = uVar7 + 1;
      uVar22 = PF_PART4(uStack_68, 4);
    } while (uVar7 < PF_PART4(uStack_68, 4));
  }
  uVar20 = (ulong)(int)*(uint *)(param_1 + 0x20);
  if (0 < (long)uVar20) {
    uVar12 = (ulong)(int)*(uint *)(param_1 + 0x24);
    if (0 < (long)uVar12) {
      uVar7 = 0;
      if (((uStack_68 & 0xffffffff) == 0) || (uVar22 == 0)) goto LAB_1000bce1;
      uVar15 = (uStack_68 & 0xffffffff) * uVar12;
      if (uVar15 >> 0x20 == 0) {
        uVar19 = (uint)((uVar15 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x20));
      }
      else {
        uVar19 = (uint)(uVar15 / uVar20);
      }
      local_3c = 1;
      if (1 < uVar19) {
        local_3c = uVar19;
      }
      uVar15 = uStack_68 & 0xffffffff;
      if (uVar22 < uVar19) {
        uVar15 = uVar22 * uVar20;
        if (uVar15 >> 0x20 == 0) {
          uVar19 = (uint)((uVar15 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x24));
        }
        else {
          uVar19 = (uint)(uVar15 / uVar12);
        }
        uVar15 = 1;
        if (1 < uVar19) {
          uVar15 = (ulong)uVar19;
        }
        local_3c = uVar22;
      }
      uVar19 = (uint)uStack_68 - (int)uVar15 >> 1;
      uVar22 = uVar22 - local_3c >> 1;
      local_38 = (ulong)uVar22;
      if (*(long *)(param_1 + 0x78) == 0) {
LAB_1000b80a:
        uVar17 = *(uint *)(param_1 + 0x24);
        if (0 < (long)(int)uVar17) {
          iVar2 = (int)uVar20 + -1;
          iVar5 = *(int *)(param_1 + 0x3c);
          if (iVar5 <= iVar2) {
            iVar2 = iVar5;
          }
          iVar27 = 0;
          if (-1 < iVar5) {
            iVar27 = iVar2;
          }
          uVar15 = uVar15 * (long)iVar27;
          if (uVar15 >> 0x20 == 0) {
            iVar5 = (int)((uVar15 & 0xffffffff) / (uVar20 & 0xffffffff));
          }
          else {
            iVar5 = (int)(uVar15 / (uVar20 & 0xffffffff));
          }
          iVar2 = *(int *)(param_1 + 0x40);
          iVar27 = uVar17 - 1;
          if (iVar2 <= (int)(uVar17 - 1)) {
            iVar27 = iVar2;
          }
          iVar3 = 0;
          if (-1 < iVar2) {
            iVar3 = iVar27;
          }
          uVar7 = (ulong)local_3c * (long)iVar3;
          uVar20 = 0xffffffff;
          if (uVar7 >> 0x20 == 0) {
            uVar7 = (uVar7 & 0xffffffff) / (ulong)uVar17;
          }
          else {
            uVar7 = uVar7 / (ulong)(long)(int)uVar17;
          }
          if (*(char *)(param_1 + 0x4c) == '\x01') {
            uVar24 = 0;
            uVar17 = 0;
            if (PF_PART4(local_60, 4) != 0) {
              if (PF_PART4(local_60, 4) < 0x20) {
                uVar20 = ((0xffL << (bVar14 & 0x3f)) - 0x80U) / 0xff;
              }
              uVar17 = (uint)(uVar20 << ((byte)local_50 & 0x3f));
            }
            if ((uint)uStack_58 != 0) {
              uVar20 = 0x3c3c3c3c;
              if ((uint)uStack_58 < 0x20) {
                uVar20 = ((0x3cL << (bVar10 & 0x3f)) + 0x43U) / 0xff;
              }
              uVar24 = (uint)(uVar20 << (PF_PART1(local_50, 4) & 0x3f));
            }
            if (PF_PART4(uStack_58, 4) == 0) {
              uVar26 = 0;
              uVar24 = uVar24 | uVar17;
            }
            else {
              uVar20 = 0x3c3c3c3c;
              if (PF_PART4(uStack_58, 4) < 0x20) {
                uVar20 = ((0x3cL << (bVar11 & 0x3f)) + 0x43U) / 0xff;
              }
              uVar26 = (uint)(uVar20 << ((byte)local_48 & 0x3f));
              uVar24 = uVar24 | uVar17;
            }
          }
          else {
            if (*(char *)(param_1 + 0x4d) == '\x01') {
              uVar24 = 0;
              uVar17 = 0;
              if (PF_PART4(local_60, 4) != 0) {
                uVar12 = 0x3c3c3c3c;
                if (PF_PART4(local_60, 4) < 0x20) {
                  uVar12 = ((0x3cL << (bVar14 & 0x3f)) + 0x43U) / 0xff;
                }
                uVar17 = (uint)(uVar12 << ((byte)local_50 & 0x3f));
              }
              if ((uint)uStack_58 != 0) {
                if ((uint)uStack_58 < 0x20) {
                  uVar20 = ((0xffL << (bVar10 & 0x3f)) - 0x80U) / 0xff;
                }
                uVar24 = (uint)(uVar20 << (PF_PART1(local_50, 4) & 0x3f));
              }
              if (PF_PART4(uStack_58, 4) != 0) {
                uVar20 = 0x3c3c3c3c;
                if (PF_PART4(uStack_58, 4) < 0x20) {
                  uVar20 = ((0x3cL << (bVar11 & 0x3f)) + 0x43U) / 0xff;
                }
                goto LAB_1000bb4c;
              }
LAB_1000baff:
              uVar26 = 0;
            }
            else {
              if (*(char *)(param_1 + 0x4e) == '\x01') {
                uVar24 = 0;
                uVar17 = 0;
                if (PF_PART4(local_60, 4) != 0) {
                  uVar20 = 0x50505050;
                  if (PF_PART4(local_60, 4) < 0x20) {
                    uVar20 = ((0x50L << (bVar14 & 0x3f)) + 0x2fU) / 0xff;
                  }
                  uVar17 = (uint)(uVar20 << ((byte)local_50 & 0x3f));
                }
                if ((uint)uStack_58 != 0) {
                  if ((uint)uStack_58 < 0x20) {
                    uVar20 = ((0x82L << (bVar10 & 0x3f)) - 3U) / 0xff;
                  }
                  else {
                    uVar20 = 0x82828282;
                  }
                  uVar24 = (uint)(uVar20 << (PF_PART1(local_50, 4) & 0x3f));
                }
                if (PF_PART4(uStack_58, 4) == 0) {
                  uVar26 = 0;
                  goto LAB_1000bb4f;
                }
              }
              else {
                uVar24 = 0;
                uVar17 = 0;
                if (PF_PART4(local_60, 4) != 0) {
                  uVar20 = 0xffffffff;
                  if (PF_PART4(local_60, 4) < 0x20) {
                    uVar20 = ((0xffL << (bVar14 & 0x3f)) - 0x80U) / 0xff;
                  }
                  uVar17 = (uint)(uVar20 << ((byte)local_50 & 0x3f));
                }
                if ((uint)uStack_58 != 0) {
                  uVar20 = 0xffffffff;
                  if ((uint)uStack_58 < 0x20) {
                    uVar20 = ((0xffL << (bVar10 & 0x3f)) - 0x80U) / 0xff;
                  }
                  uVar24 = (uint)(uVar20 << (PF_PART1(local_50, 4) & 0x3f));
                }
                if (PF_PART4(uStack_58, 4) == 0) goto LAB_1000baff;
              }
              uVar20 = 0xffffffff;
              if (PF_PART4(uStack_58, 4) < 0x20) {
                uVar20 = ((0xffL << (bVar11 & 0x3f)) - 0x80U) / 0xff;
              }
LAB_1000bb4c:
              uVar26 = (uint)(uVar20 << ((byte)local_48 & 0x3f));
            }
LAB_1000bb4f:
            uVar24 = uVar24 | uVar17;
          }
          local_38 = (ulong)(uVar22 + (int)uVar7);
          iVar2 = -7;
          do {
            uVar22 = (int)local_38 + iVar2;
            iVar27 = -7;
            do {
              iVar3 = recovered_10001cb0(iVar27);
              iVar4 = recovered_10001cb0(iVar2);
              if (((iVar4 + iVar3 < 8) && (uVar17 = uVar19 + iVar5 + iVar27, -1 < (int)uVar17)) &&
                 (-1 < (int)uVar22)) {
                uVar23 = uVar24 | uVar26;
                if (5 < iVar4 + iVar3) {
                  uVar23 = 0;
                }
                if ((uVar17 < (uint)uStack_68) && (uVar22 < PF_PART4(uStack_68, 4))) {
                  if (7 < (int)local_60 + 7U) {
                    uVar18 = (int)local_60 + 7U >> 3;
                    uVar7 = (ulong)uVar17 * (ulong)uVar18 +
                            (local_70 >> 0x20) * (ulong)uVar22 + local_78;
                    if ((ulong)uVar18 - 1 < 3) {
                      uVar20 = 0;
                    }
                    else {
                      bVar14 = 0x18;
                      uVar20 = 0;
                      do {
                        *(char *)(uVar7 + uVar20) = (char)uVar23;
                        *(char *)(uVar7 + 1 + uVar20) = (char)(uVar23 >> (bVar14 - 0x10 & 0x1f));
                        *(char *)(uVar7 + 2 + uVar20) = (char)(uVar23 >> (bVar14 - 8 & 0x1f));
                        *(char *)(uVar7 + 3 + uVar20) = (char)(uVar23 >> (bVar14 & 0x1f));
                        uVar20 = uVar20 + 4;
                        bVar14 = bVar14 + 0x20;
                      } while ((uVar18 & 0xfffffffc) != uVar20);
                    }
                    if ((uVar18 & 3) != 0) {
                      uVar7 = uVar7 + uVar20;
                      bVar14 = 0;
                      uVar20 = 0;
                      do {
                        *(char *)(uVar7 + uVar20) = (char)(uVar23 >> (bVar14 & 0x1f));
                        uVar20 = uVar20 + 1;
                        bVar14 = bVar14 + 8;
                      } while ((uVar18 & 3) != uVar20);
                    }
                  }
                }
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 != 8);
            iVar2 = iVar2 + 1;
          } while (iVar2 != 8);
        }
      }
      else {
        uVar12 = (ulong)(int)*(uint *)(param_1 + 0xa8);
        if ((long)uVar12 < 1) goto LAB_1000b80a;
        uVar16 = (ulong)(int)*(uint *)(param_1 + 0xac);
        if ((long)uVar16 < 1) goto LAB_1000b80a;
        uVar7 = uVar16 * uVar15;
        if (uVar7 >> 0x20 == 0) {
          uVar17 = (uint)((uVar7 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0xa8));
        }
        else {
          uVar17 = (uint)(uVar7 / uVar12);
        }
        uVar20 = 1;
        if (1 < uVar17) {
          uVar20 = (ulong)uVar17;
        }
        uVar17 = (uint)uVar20;
        if (local_3c < uVar17) {
          uVar20 = (ulong)local_3c;
          uVar12 = uVar12 * uVar20;
          if (uVar12 >> 0x20 == 0) {
            uVar17 = (uint)((uVar12 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0xac));
          }
          else {
            uVar17 = (uint)(uVar12 / uVar16);
          }
          uVar12 = 1;
          if (1 < uVar17) {
            uVar12 = (ulong)uVar17;
          }
          uVar17 = local_3c;
        }
        else {
          uVar12 = uVar15;
        }
        uVar16 = 0;
        do {
          uVar7 = *(uint *)(param_1 + 0xac) * uVar16;
          if (uVar7 >> 0x20 == 0) {
            uVar24 = (uint)((uVar7 & 0xffffffff) / uVar20);
          }
          else {
            uVar24 = (uint)(uVar7 / uVar20);
          }
          uVar26 = (local_3c - uVar17 >> 1) + uVar22 + (int)uVar16;
          uVar21 = 0;
          do {
            uVar7 = uVar21 * *(uint *)(param_1 + 0xa8);
            if (uVar7 >> 0x20 == 0) {
              uVar23 = (uint)((uVar7 & 0xffffffff) / uVar12);
            }
            else {
              uVar23 = (uint)(uVar7 / uVar12);
            }
            lVar8 = (ulong)uVar23 + (long)(int)*(uint *)(param_1 + 0xa8) * (ulong)uVar24;
            lVar25 = *(long *)(param_1 + 0x70);
            uVar23 = 0;
            uVar7 = 0;
            if (PF_PART4(local_60, 4) != 0) {
              uVar7 = ~(-1L << (bVar14 & 0x3f));
              if (0x1f < PF_PART4(local_60, 4)) {
                uVar7 = 0xffffffff;
              }
              uVar7 = (uVar7 * *(byte *)(lVar25 + lVar8 * 4) + 0x7f) / 0xff <<
                      ((byte)local_50 & 0x3f);
            }
            if ((uint)uStack_58 != 0) {
              uVar9 = ~(-1L << (bVar10 & 0x3f));
              if (0x1f < (uint)uStack_58) {
                uVar9 = 0xffffffff;
              }
              uVar23 = (uint)((uVar9 * *(byte *)(lVar25 + 1 + lVar8 * 4) + 0x7f) / 0xff <<
                             (PF_PART1(local_50, 4) & 0x3f));
            }
            if (PF_PART4(uStack_58, 4) == 0) {
              uVar18 = 0;
            }
            else {
              uVar9 = ~(-1L << (bVar11 & 0x3f));
              if (0x1f < PF_PART4(uStack_58, 4)) {
                uVar9 = 0xffffffff;
              }
              uVar18 = (uint)((uVar9 * *(byte *)(lVar25 + 2 + lVar8 * 4) + 0x7f) / 0xff <<
                             ((byte)local_48 & 0x3f));
            }
            uVar1 = ((uint)((int)uVar15 - (int)uVar12) >> 1) + uVar19 + (int)uVar21;
            if (((uVar1 < (uint)uStack_68) && (uVar26 < PF_PART4(uStack_68, 4))) &&
               (7 < (int)local_60 + 7U)) {
              uVar18 = uVar23 | (uint)uVar7 | uVar18;
              uVar23 = (int)local_60 + 7U >> 3;
              uVar7 = (ulong)uVar1 * (ulong)uVar23 +
                      (ulong)PF_PART4(local_70, 4) * (ulong)uVar26 + local_78;
              if ((ulong)uVar23 - 1 < 3) {
                uVar9 = 0;
              }
              else {
                bVar13 = 0x18;
                uVar9 = 0;
                do {
                  *(char *)(uVar7 + uVar9) = (char)uVar18;
                  *(char *)(uVar7 + 1 + uVar9) = (char)(uVar18 >> (bVar13 - 0x10 & 0x1f));
                  *(char *)(uVar7 + 2 + uVar9) = (char)(uVar18 >> (bVar13 - 8 & 0x1f));
                  *(char *)(uVar7 + 3 + uVar9) = (char)(uVar18 >> (bVar13 & 0x1f));
                  uVar9 = uVar9 + 4;
                  bVar13 = bVar13 + 0x20;
                } while ((uVar23 & 0xfffffffc) != uVar9);
              }
              if ((uVar23 & 3) != 0) {
                uVar7 = uVar7 + uVar9;
                bVar13 = 0;
                uVar9 = 0;
                do {
                  *(char *)(uVar7 + uVar9) = (char)(uVar18 >> (bVar13 & 0x1f));
                  uVar9 = uVar9 + 1;
                  bVar13 = bVar13 + 8;
                } while ((uVar23 & 3) != uVar9);
              }
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar12);
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar20);
        uVar20 = (ulong)*(uint *)(param_1 + 0x20);
        if (0 < (int)*(uint *)(param_1 + 0x20)) goto LAB_1000b80a;
      }
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x15f < _DAT_00280808 && ((code *)(ulong)_DAT_0028095c != (code *)0x0)))) {
        iVar5 = (*(code *)(ulong)_DAT_0028095c)(0,0,uStack_68 & 0xffffffff,PF_PART4(uStack_68, 4));
        uVar7 = CONCAT71((int7)(uVar7 >> 8),iVar5 != 0);
        goto LAB_1000bce1;
      }
    }
  }
  uVar7 = 0;
LAB_1000bce1:
  return uVar7 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028095c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028095c
#undef local_78
#undef local_70
#undef local_60
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef uStack_68
#undef uStack_58

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_10011378
#define DAT_10011378 (*(void * *)(((uintptr_t)pf_module_state + 0x17a4U)))
#undef DAT_10011380
#define DAT_10011380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17acU)))
#undef DAT_10011388
#define DAT_10011388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17b4U)))
#undef DAT_10011390
#define DAT_10011390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17bcU)))
#undef DAT_1001139c
#define DAT_1001139c (*(int *)(((uintptr_t)pf_module_state + 0x17c8U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(uint *)(0x28082cU))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(uint *)(0x2808b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 recovered_1000bd10(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  char cVar11;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;

  iVar9 = DAT_1001139c;
  if (param_1 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    if ((DAT_10011390 == param_1) && (*(char *)(param_1 + 0x30) == '\0')) {
joined_r0x1000bd5f:
      do {
        while( true ) {
          if (((_DAT_00280800 != 0x50414d57) ||
              (((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)) || (_DAT_00280808 < 0x30)))) ||
             (((code *)(ulong)_DAT_0028082c == (code *)0x0 ||
              (uVar8 = (*(code *)(ulong)_DAT_0028082c)(), uVar8 == 0)))) goto LAB_1000c01b;
          cVar11 = (char)(uVar8 >> 8);
          uVar15 = uVar8 & 0xff;
          if ((uVar15 == 0x1b || cVar11 != '\x01') && (cVar11 != '\x17' || (uVar8 & 0xff) != 0))
          break;
          *(undefined1 *)(param_1 + 0x30) = 1;
        }
        if (DAT_10011380 == DAT_10011388) {
          uVar16 = DAT_10011380 * 2;
          if (DAT_10011380 == 0) {
            uVar16 = 4;
          }
          if (DAT_10011380 < uVar16) {
            pvVar10 = (void *)recovered_100080e0(uVar16 * 4);
            uVar7 = DAT_10011380;
            pvVar6 = DAT_10011378;
            if (DAT_10011380 != 0) {
              if (DAT_10011380 < 8) {
                uVar12 = 0;
              }
              else {
                uVar12 = 0;
                if (0x1f < (ulong)((long)pvVar10 - (long)DAT_10011378)) {
                  uVar12 = DAT_10011380 & 0xfffffffffffffff8;
                  uVar13 = 0;
                  do {
                    puVar1 = (undefined8 *)((long)pvVar6 + uVar13 * 4);
                    uVar3 = puVar1[1];
                    puVar2 = (undefined8 *)((long)pvVar6 + uVar13 * 4 + 0x10);
                    uVar4 = *puVar2;
                    uVar5 = puVar2[1];
                    puVar2 = (undefined8 *)((long)pvVar10 + uVar13 * 4);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar3;
                    puVar1 = (undefined8 *)((long)pvVar10 + uVar13 * 4 + 0x10);
                    *puVar1 = uVar4;
                    puVar1[1] = uVar5;
                    uVar13 = uVar13 + 8;
                  } while (uVar12 != uVar13);
                  if (uVar7 == uVar12) goto LAB_1000beda;
                }
              }
              uVar14 = uVar7 & 3;
              uVar13 = uVar12;
              if (uVar14 != 0) {
                do {
                  *(undefined4 *)((long)pvVar10 + uVar13 * 4) =
                       *(undefined4 *)((long)pvVar6 + uVar13 * 4);
                  uVar13 = uVar13 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              if (uVar12 - uVar7 < 0xfffffffffffffffd) {
                do {
                  *(undefined4 *)((long)pvVar10 + uVar13 * 4) =
                       *(undefined4 *)((long)pvVar6 + uVar13 * 4);
                  *(undefined4 *)((long)pvVar10 + uVar13 * 4 + 4) =
                       *(undefined4 *)((long)pvVar6 + uVar13 * 4 + 4);
                  *(undefined4 *)((long)pvVar10 + uVar13 * 4 + 8) =
                       *(undefined4 *)((long)pvVar6 + uVar13 * 4 + 8);
                  *(undefined4 *)((long)pvVar10 + uVar13 * 4 + 0xc) =
                       *(undefined4 *)((long)pvVar6 + uVar13 * 4 + 0xc);
                  uVar13 = uVar13 + 4;
                } while (uVar7 != uVar13);
              }
            }
LAB_1000beda:
            recovered_10008140(pvVar6);
            DAT_10011378 = pvVar10;
            DAT_10011388 = uVar16;
          }
        }
        uVar16 = DAT_10011380 + 1;
        *(uint *)((long)DAT_10011378 + DAT_10011380 * 4) = uVar8;
        DAT_10011380 = uVar16;
      } while ((uVar8 & 0xff) == 0);
      if (DAT_1001139c == 2) {
        DAT_1001139c = 0;
        if (uVar15 != 0x1b || 0xfb < (byte)((char)uVar8 + 0xbbU)) goto joined_r0x1000bd5f;
      }
      else {
        if (DAT_1001139c == 1) {
          if (uVar15 == 0x5b) {
            DAT_1001139c = 2;
            goto joined_r0x1000bd5f;
          }
          DAT_1001139c = 0;
          *(undefined1 *)(param_1 + 0x30) = 1;
        }
        if (uVar15 != 0x1b) goto joined_r0x1000bd5f;
      }
      DAT_1001139c = 1;
      goto joined_r0x1000bd5f;
    }
  }
  else if ((*(int *)(param_1 + 0x18) != 0) &&
          (((((_DAT_00280800 != 0x50414d57 || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
            ((_DAT_00280808 < 0xb8 || ((code *)(ulong)_DAT_002808b4 == (code *)0x0)))) ||
           ((iVar9 = (*(code *)(ulong)_DAT_002808b4)(*(int *)(param_1 + 0x18),param_1 + 0xb0),
            iVar9 == 0 ||
            (*(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0xdc),
            (*(byte *)(param_1 + 0xd8) & 1) != 0)))))) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
LAB_1000c002:
  return *(undefined1 *)(param_1 + 0x30);
LAB_1000c01b:
  if (DAT_1001139c == 1 && iVar9 == 1) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    DAT_1001139c = 0;
  }
  else if (DAT_1001139c == 2 && iVar9 == 2) {
    DAT_1001139c = 0;
  }
  goto LAB_1000c002;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028082c
#undef DAT_002808b4
#undef DAT_10011378
#undef DAT_10011380
#undef DAT_10011388
#undef DAT_10011390
#undef DAT_1001139c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028082c
#undef _DAT_002808b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c060
 */

void recovered_1000c060(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x32) = param_2;
    *(undefined1 *)(param_1 + 0x33) = param_3;
    *(undefined1 *)(param_1 + 0x34) = param_4;
    if (*(char *)(param_1 + 0x1c) != '\x01') {
      recovered_10009d60((undefined8 *)param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c090
 */

int * recovered_1000c090(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int *piVar4;
  void *dst;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;

  if (param_1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)recovered_100080e0(0x20);
    iVar7 = *(int *)(param_1 + 0xa8);
    if (iVar7 < 1) {
      iVar7 = *(int *)(param_1 + 0x20);
    }
    *piVar4 = iVar7;
    iVar8 = *(int *)(param_1 + 0xac);
    if (iVar8 < 1) {
      iVar8 = *(int *)(param_1 + 0x24);
    }
    piVar4[1] = iVar8;
    uVar9 = (long)iVar8 * (long)iVar7 * 4;
    dst = (void *)recovered_10008110(uVar9);
    *(void **)(piVar4 + 2) = dst;
    if (((*(long *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0xa8) != iVar7)) ||
       (*(int *)(param_1 + 0xac) != iVar8)) {
      if (uVar9 != 0) {
        uVar1 = *(undefined1 *)(param_1 + 0x32);
        uVar2 = *(undefined1 *)(param_1 + 0x33);
        uVar3 = *(undefined1 *)(param_1 + 0x34);
        uVar9 = uVar9 - 1;
        if (uVar9 == 3) {
          lVar5 = 0;
        }
        else {
          uVar6 = (uVar9 >> 2) + 1 & 0xfffffffffffffffe;
          lVar5 = 0;
          do {
            *(undefined1 *)((long)dst + lVar5) = uVar1;
            *(undefined1 *)((long)dst + lVar5 + 1) = uVar2;
            *(undefined1 *)((long)dst + lVar5 + 2) = uVar3;
            *(undefined1 *)((long)dst + lVar5 + 3) = 0xff;
            *(undefined1 *)((long)dst + lVar5 + 4) = uVar1;
            *(undefined1 *)((long)dst + lVar5 + 5) = uVar2;
            *(undefined1 *)((long)dst + lVar5 + 6) = uVar3;
            *(undefined1 *)((long)dst + lVar5 + 7) = 0xff;
            lVar5 = lVar5 + 8;
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        if ((uVar9 & 4) == 0) {
          *(undefined1 *)((long)dst + lVar5) = uVar1;
          *(undefined1 *)((long)dst + lVar5 + 1) = uVar2;
          *(undefined1 *)((long)dst + lVar5 + 2) = uVar3;
          *(undefined1 *)((long)dst + lVar5 + 3) = 0xff;
        }
      }
    }
    else {
      recovered_10001db0(dst,*(void **)(param_1 + 0x70),uVar9);
    }
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
  }
  return piVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1c0
 */

void recovered_1000c1c0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    uVar1 = 0xffffffff;
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
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


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_10011390
#define DAT_10011390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17bcU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(uint *)(0x2808b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 recovered_1000c200(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  ulong uVar3;

  if (2 < param_2 || param_1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    if (*(char *)(param_1 + 0x30) == '\0') {
LAB_1000c22c:
      if (DAT_10011390 == param_1) {
        bVar1 = *(byte *)(param_1 + 0x4f + (ulong)param_2);
      }
      else {
        recovered_1000a8a0(param_1);
        uVar3 = (ulong)param_2;
        bVar1 = 1;
        if (*(char *)(param_1 + 0x4c + uVar3) == '\0') {
          bVar1 = *(byte *)(param_1 + 0x52 + uVar3);
        }
        *(byte *)(param_1 + 0x4f + uVar3) = bVar1;
        *(undefined1 *)(param_1 + 0x52 + uVar3) = 0;
      }
      goto LAB_1000c300;
    }
  }
  else if (*(int *)(param_1 + 0x18) != 0) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0xb7 < _DAT_00280808 && ((code *)(ulong)_DAT_002808b4 != (code *)0x0)) &&
        (iVar2 = (*(code *)(ulong)_DAT_002808b4)(*(int *)(param_1 + 0x18),param_1 + 0xb0),
        iVar2 != 0)))) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0xdc);
      if ((*(uint *)(param_1 + 0xd8) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
      if ((*(uint *)(param_1 + 0xd8) & 6) == 2) goto LAB_1000c22c;
    }
    else {
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x4f + (ulong)param_2) = 0;
  bVar1 = 0;
LAB_1000c300:
  return bVar1 & 1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b4
#undef DAT_10011390
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b4

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_1000fd00
#define DAT_1000fd00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_100110f0
#define DAT_100110f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151cU)))
#undef DAT_100110f1
#define DAT_100110f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151dU)))
#undef DAT_100110f2
#define DAT_100110f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151eU)))
#undef DAT_100110f3
#define DAT_100110f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151fU)))
#undef DAT_100110f4
#define DAT_100110f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1520U)))
#undef DAT_100110f5
#define DAT_100110f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1521U)))
#undef DAT_100110f6
#define DAT_100110f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1522U)))
#undef DAT_100110f7
#define DAT_100110f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1523U)))
#undef DAT_100110f8
#define DAT_100110f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1524U)))
#undef DAT_100110f9
#define DAT_100110f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1525U)))
#undef DAT_100110fa
#define DAT_100110fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1526U)))
#undef DAT_100110fb
#define DAT_100110fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1527U)))
#undef DAT_100110fc
#define DAT_100110fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1528U)))
#undef DAT_100110fd
#define DAT_100110fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1529U)))
#undef DAT_100110fe
#define DAT_100110fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152aU)))
#undef DAT_100110ff
#define DAT_100110ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152bU)))
#undef DAT_10011100
#define DAT_10011100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152cU)))
#undef DAT_10011101
#define DAT_10011101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152dU)))
#undef DAT_10011102
#define DAT_10011102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152eU)))
#undef DAT_10011103
#define DAT_10011103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152fU)))
#undef DAT_10011104
#define DAT_10011104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1530U)))
#undef DAT_10011105
#define DAT_10011105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1531U)))
#undef DAT_10011106
#define DAT_10011106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1532U)))
#undef DAT_10011107
#define DAT_10011107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1533U)))
#undef DAT_10011108
#define DAT_10011108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1534U)))
#undef DAT_10011109
#define DAT_10011109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1535U)))
#undef DAT_1001110a
#define DAT_1001110a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1536U)))
#undef DAT_1001110b
#define DAT_1001110b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1537U)))
#undef DAT_1001110c
#define DAT_1001110c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1538U)))
#undef DAT_1001110d
#define DAT_1001110d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1539U)))
#undef DAT_1001110e
#define DAT_1001110e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153aU)))
#undef DAT_1001110f
#define DAT_1001110f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153bU)))
#undef DAT_10011110
#define DAT_10011110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153cU)))
#undef DAT_10011111
#define DAT_10011111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153dU)))
#undef DAT_10011112
#define DAT_10011112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153eU)))
#undef DAT_10011113
#define DAT_10011113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153fU)))
#undef DAT_10011114
#define DAT_10011114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1540U)))
#undef DAT_10011115
#define DAT_10011115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1541U)))
#undef DAT_10011116
#define DAT_10011116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1542U)))
#undef DAT_10011117
#define DAT_10011117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1543U)))
#undef DAT_10011118
#define DAT_10011118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1544U)))
#undef DAT_10011119
#define DAT_10011119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1545U)))
#undef DAT_1001111a
#define DAT_1001111a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1546U)))
#undef DAT_1001111b
#define DAT_1001111b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1547U)))
#undef DAT_1001111c
#define DAT_1001111c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1548U)))
#undef DAT_1001111d
#define DAT_1001111d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1549U)))
#undef DAT_1001111e
#define DAT_1001111e (*(byte *)(((uintptr_t)pf_module_state + 0x154aU)))
#undef DAT_10011378
#define DAT_10011378 (*(void * *)(((uintptr_t)pf_module_state + 0x17a4U)))
#undef DAT_10011380
#define DAT_10011380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17acU)))
#undef DAT_10011388
#define DAT_10011388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17b4U)))
#undef DAT_10011390
#define DAT_10011390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17bcU)))
#undef DAT_10011398
#define DAT_10011398 (*(int *)(((uintptr_t)pf_module_state + 0x17c4U)))
#undef DAT_1001139c
#define DAT_1001139c (*(int *)(((uintptr_t)pf_module_state + 0x17c8U)))
#undef PTR_DAT_10010008
#define PTR_DAT_10010008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x434U)))
#undef PTR_DAT_100100d8
#define PTR_DAT_100100d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x504U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(uint *)(0x28082cU))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(uint *)(0x2808b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c310(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  undefined1 uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined1 uVar17;
  ulong uVar18;
  byte bVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;

  lVar25 = DAT_10011390;
  DAT_100110f0 = 0;
  DAT_100110f1 = 0;
  DAT_100110f2 = 0;
  DAT_100110f3 = 0;
  DAT_100110f4 = 0;
  DAT_100110f5 = 0;
  DAT_100110f6 = 0;
  DAT_100110f7 = 0;
  DAT_100110f8 = 0;
  DAT_100110f9 = 0;
  DAT_100110fa = 0;
  DAT_100110fb = 0;
  DAT_100110fc = 0;
  DAT_100110fd = 0;
  DAT_100110fe = 0;
  DAT_100110ff = 0;
  DAT_10011100 = 0;
  DAT_10011101 = 0;
  DAT_10011102 = 0;
  DAT_10011103 = 0;
  DAT_10011104 = 0;
  DAT_10011105 = 0;
  DAT_10011106 = 0;
  DAT_10011107 = 0;
  DAT_10011108 = 0;
  DAT_10011109 = 0;
  DAT_1001110a = 0;
  DAT_1001110b = 0;
  DAT_1001110c = 0;
  DAT_1001110d = 0;
  DAT_1001110e = 0;
  DAT_1001110f = 0;
  DAT_10011110 = 0;
  DAT_10011111 = 0;
  DAT_10011112 = 0;
  DAT_10011113 = 0;
  DAT_10011114 = 0;
  DAT_10011115 = 0;
  DAT_10011116 = 0;
  DAT_10011117 = 0;
  DAT_10011118 = 0;
  DAT_10011119 = 0;
  DAT_1001111a = 0;
  DAT_1001111b = 0;
  DAT_1001111c = 0;
  DAT_1001111d = 0;
  DAT_1001111e = 0;
  if (DAT_10011390 == 0) {
    DAT_100110f0 = 0;
    DAT_100110f1 = 0;
    DAT_100110f2 = 0;
    DAT_100110f3 = 0;
    DAT_100110f4 = 0;
    DAT_100110f5 = 0;
    DAT_100110f6 = 0;
    DAT_100110f7 = 0;
    DAT_100110f8 = 0;
    DAT_100110f9 = 0;
    DAT_100110fa = 0;
    DAT_100110fb = 0;
    DAT_100110fc = 0;
    DAT_100110fd = 0;
    DAT_100110fe = 0;
    DAT_100110ff = 0;
    DAT_10011100 = 0;
    DAT_10011101 = 0;
    DAT_10011102 = 0;
    DAT_10011103 = 0;
    DAT_10011104 = 0;
    DAT_10011105 = 0;
    DAT_10011106 = 0;
    DAT_10011107 = 0;
    DAT_10011108 = 0;
    DAT_10011109 = 0;
    DAT_1001110a = 0;
    DAT_1001110b = 0;
    DAT_1001110c = 0;
    DAT_1001110d = 0;
    DAT_1001110e = 0;
    DAT_1001110f = 0;
    DAT_10011110 = 0;
    DAT_10011111 = 0;
    DAT_10011112 = 0;
    DAT_10011113 = 0;
    DAT_10011114 = 0;
    DAT_10011115 = 0;
    DAT_10011116 = 0;
    DAT_10011117 = 0;
    DAT_10011118 = 0;
    DAT_10011119 = 0;
    DAT_1001111a = 0;
    DAT_1001111b = 0;
    DAT_1001111c = 0;
    DAT_1001111d = 0;
    DAT_1001111e = 0;
    return;
  }
  if (*(char *)(DAT_10011390 + 0x1c) == '\x01') {
    if (*(char *)(DAT_10011390 + 0x30) != '\0') {
      DAT_100110f0 = 0;
      DAT_100110f1 = 0;
      DAT_100110f2 = 0;
      DAT_100110f3 = 0;
      DAT_100110f4 = 0;
      DAT_100110f5 = 0;
      DAT_100110f6 = 0;
      DAT_100110f7 = 0;
      DAT_100110f8 = 0;
      DAT_100110f9 = 0;
      DAT_100110fa = 0;
      DAT_100110fb = 0;
      DAT_100110fc = 0;
      DAT_100110fd = 0;
      DAT_100110fe = 0;
      DAT_100110ff = 0;
      DAT_10011100 = 0;
      DAT_10011101 = 0;
      DAT_10011102 = 0;
      DAT_10011103 = 0;
      DAT_10011104 = 0;
      DAT_10011105 = 0;
      DAT_10011106 = 0;
      DAT_10011107 = 0;
      DAT_10011108 = 0;
      DAT_10011109 = 0;
      DAT_1001110a = 0;
      DAT_1001110b = 0;
      DAT_1001110c = 0;
      DAT_1001110d = 0;
      DAT_1001110e = 0;
      DAT_1001110f = 0;
      DAT_10011110 = 0;
      DAT_10011111 = 0;
      DAT_10011112 = 0;
      DAT_10011113 = 0;
      DAT_10011114 = 0;
      DAT_10011115 = 0;
      DAT_10011116 = 0;
      DAT_10011117 = 0;
      DAT_10011118 = 0;
      DAT_10011119 = 0;
      DAT_1001111a = 0;
      DAT_1001111b = 0;
      DAT_1001111c = 0;
      DAT_1001111d = 0;
      DAT_1001111e = 0;
      return;
    }
  }
  else {
    if (*(int *)(DAT_10011390 + 0x18) == 0) {
      DAT_100110f0 = 0;
      DAT_100110f1 = 0;
      DAT_100110f2 = 0;
      DAT_100110f3 = 0;
      DAT_100110f4 = 0;
      DAT_100110f5 = 0;
      DAT_100110f6 = 0;
      DAT_100110f7 = 0;
      DAT_100110f8 = 0;
      DAT_100110f9 = 0;
      DAT_100110fa = 0;
      DAT_100110fb = 0;
      DAT_100110fc = 0;
      DAT_100110fd = 0;
      DAT_100110fe = 0;
      DAT_100110ff = 0;
      DAT_10011100 = 0;
      DAT_10011101 = 0;
      DAT_10011102 = 0;
      DAT_10011103 = 0;
      DAT_10011104 = 0;
      DAT_10011105 = 0;
      DAT_10011106 = 0;
      DAT_10011107 = 0;
      DAT_10011108 = 0;
      DAT_10011109 = 0;
      DAT_1001110a = 0;
      DAT_1001110b = 0;
      DAT_1001110c = 0;
      DAT_1001110d = 0;
      DAT_1001110e = 0;
      DAT_1001110f = 0;
      DAT_10011110 = 0;
      DAT_10011111 = 0;
      DAT_10011112 = 0;
      DAT_10011113 = 0;
      DAT_10011114 = 0;
      DAT_10011115 = 0;
      DAT_10011116 = 0;
      DAT_10011117 = 0;
      DAT_10011118 = 0;
      DAT_10011119 = 0;
      DAT_1001111a = 0;
      DAT_1001111b = 0;
      DAT_1001111c = 0;
      DAT_1001111d = 0;
      DAT_1001111e = 0;
      return;
    }
    if (((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
        ((_DAT_00280808 < 0xb8 || ((code *)(ulong)_DAT_002808b4 == (code *)0x0)))) ||
       (iVar9 = (*(code *)(ulong)_DAT_002808b4)(*(int *)(DAT_10011390 + 0x18),DAT_10011390 + 0xb0),
       iVar9 == 0)) {
      *(undefined1 *)(lVar25 + 0x30) = 1;
      return;
    }
    *(undefined8 *)(lVar25 + 0x28) = *(undefined8 *)(lVar25 + 0xdc);
    if ((*(uint *)(lVar25 + 0xd8) & 1) != 0) {
      *(undefined1 *)(lVar25 + 0x30) = 1;
    }
    if ((*(uint *)(lVar25 + 0xd8) & 6) != 2) {
      return;
    }
  }
  lVar25 = DAT_10011390;
  *(undefined8 *)(DAT_10011390 + 0x90) = 0;
  *(undefined8 *)(lVar25 + 0xa0) = 0;
  iVar9 = DAT_10011398;
  DAT_1001139c = 0;
  recovered_1000a8a0(lVar25);
  lVar25 = DAT_10011390;
  *(undefined1 *)(DAT_10011390 + 0x58) = 1;
  uVar14 = 1;
  uVar17 = 1;
  if (*(char *)(lVar25 + 0x4c) == '\0') {
    uVar17 = *(undefined1 *)(lVar25 + 0x52);
  }
  *(undefined1 *)(lVar25 + 0x4f) = uVar17;
  *(undefined1 *)(lVar25 + 0x52) = 0;
  if (*(char *)(lVar25 + 0x4d) == '\0') {
    uVar14 = *(undefined1 *)(lVar25 + 0x53);
  }
  *(undefined1 *)(lVar25 + 0x50) = uVar14;
  *(undefined1 *)(lVar25 + 0x53) = 0;
  uVar17 = 1;
  if (*(char *)(lVar25 + 0x4e) == '\0') {
    uVar17 = *(undefined1 *)(lVar25 + 0x54);
  }
  *(undefined1 *)(lVar25 + 0x51) = uVar17;
  *(undefined1 *)(lVar25 + 0x54) = 0;
  if (_DAT_00280800 == 0x50414d57) {
    do {
      if (((_DAT_00280804 == 0) || (_DAT_00280808 < 0xc)) ||
         ((_DAT_00280808 < 0x30 ||
          (((code *)(ulong)_DAT_0028082c == (code *)0x0 ||
           (iVar10 = (*(code *)(ulong)_DAT_0028082c)(), iVar10 == 0)))))) break;
      if (DAT_10011380 == DAT_10011388) {
        uVar24 = DAT_10011380 * 2;
        if (DAT_10011380 == 0) {
          uVar24 = 4;
        }
        if (DAT_10011380 < uVar24) {
          pvVar11 = (void *)recovered_100080e0(uVar24 * 4);
          uVar12 = DAT_10011380;
          pvVar4 = DAT_10011378;
          if (DAT_10011380 != 0) {
            if (DAT_10011380 < 8) {
              uVar15 = 0;
            }
            else {
              uVar15 = 0;
              if (0x1f < (ulong)((long)pvVar11 - (long)DAT_10011378)) {
                uVar15 = DAT_10011380 & 0xfffffffffffffff8;
                uVar18 = 0;
                do {
                  puVar1 = (undefined8 *)((long)pvVar4 + uVar18 * 4);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)((long)pvVar4 + uVar18 * 4 + 0x10);
                  uVar6 = *puVar2;
                  uVar7 = puVar2[1];
                  puVar2 = (undefined8 *)((long)pvVar11 + uVar18 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)((long)pvVar11 + uVar18 * 4 + 0x10);
                  *puVar1 = uVar6;
                  puVar1[1] = uVar7;
                  uVar18 = uVar18 + 8;
                } while (uVar15 != uVar18);
                if (uVar12 == uVar15) goto LAB_1000c5b7;
              }
            }
            uVar21 = uVar12 & 3;
            uVar18 = uVar15;
            if (uVar21 != 0) {
              do {
                *(undefined4 *)((long)pvVar11 + uVar18 * 4) =
                     *(undefined4 *)((long)pvVar4 + uVar18 * 4);
                uVar18 = uVar18 + 1;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            if (uVar15 - uVar12 < 0xfffffffffffffffd) {
              do {
                *(undefined4 *)((long)pvVar11 + uVar18 * 4) =
                     *(undefined4 *)((long)pvVar4 + uVar18 * 4);
                *(undefined4 *)((long)pvVar11 + uVar18 * 4 + 4) =
                     *(undefined4 *)((long)pvVar4 + uVar18 * 4 + 4);
                *(undefined4 *)((long)pvVar11 + uVar18 * 4 + 8) =
                     *(undefined4 *)((long)pvVar4 + uVar18 * 4 + 8);
                *(undefined4 *)((long)pvVar11 + uVar18 * 4 + 0xc) =
                     *(undefined4 *)((long)pvVar4 + uVar18 * 4 + 0xc);
                uVar18 = uVar18 + 4;
              } while (uVar12 != uVar18);
            }
          }
LAB_1000c5b7:
          recovered_10008140(pvVar4);
          DAT_10011378 = pvVar11;
          DAT_10011388 = uVar24;
        }
      }
      *(int *)((long)DAT_10011378 + DAT_10011380 * 4) = iVar10;
      DAT_10011380 = DAT_10011380 + 1;
    } while (_DAT_00280800 == 0x50414d57);
  }
  if (DAT_10011380 != 0) {
    uVar24 = 0;
    do {
      lVar25 = DAT_10011390;
      uVar3 = *(uint *)((long)DAT_10011378 + uVar24 * 4);
      uVar23 = uVar3 >> 8 & 0xff;
      uVar20 = uVar3 & 0xff;
      bVar19 = (byte)uVar3;
      if ((uVar20 != 0x1b & uVar23 == 1 & *(byte *)(DAT_10011390 + 0x1c)) == 1) {
switchD_1000c80a_caseD_17:
        *(undefined1 *)(DAT_10011390 + 0x30) = 1;
        goto LAB_1000c785;
      }
      if (uVar20 == 0) {
        switch((uintptr_t)(uVar23)) {
        case 1:
          DAT_100110f1 = 1;
          break;
        case 2:
          DAT_100110f2 = 1;
          break;
        case 3:
          DAT_100110f4 = 1;
          break;
        case 4:
          DAT_100110f3 = 1;
          break;
        default:
switchD_1000c80a_caseD_5:
          lVar25 = DAT_10011390;
          switch((uintptr_t)(uVar23)) {
          case 0xe:
            DAT_1001111b = 1;
            break;
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x49:
          case 0x4a:
          case 0x4c:
          case 0x4e:
          case 0x4f:
          case 0x51:
          case 0x52:
            break;
          case 0x1c:
            DAT_100110f0 = 1;
            break;
          case 0x48:
            DAT_100110f1 = 1;
            break;
          case 0x4b:
            DAT_100110f3 = 1;
            break;
          case 0x4d:
            DAT_100110f4 = 1;
            break;
          case 0x50:
            DAT_100110f2 = 1;
            break;
          case 0x53:
            DAT_1001111c = 1;
            break;
          default:
            if (uVar23 == 1) {
              *(undefined1 *)(DAT_10011390 + 0x30) = 1;
            }
          }
          goto switchD_1000cb79_caseD_f;
        case 0x17:
          goto switchD_1000c80a_caseD_17;
        }
      }
      else {
        if (DAT_10011398 == 2) {
          DAT_10011398 = 0;
          switch((uintptr_t)(uVar20)) {
          case 0x1b:
            goto switchD_1000c831_caseD_1b;
          default:
            goto switchD_1000c831_caseD_1c;
          case 0x41:
            DAT_100110f1 = 1;
            break;
          case 0x42:
            DAT_100110f2 = 1;
            break;
          case 0x43:
            DAT_100110f4 = 1;
            break;
          case 0x44:
            DAT_100110f3 = 1;
          }
        }
        else {
          if (DAT_10011398 == 1) {
            if (bVar19 == 0x5b) {
              DAT_10011398 = 2;
              goto switchD_1000cb11_caseD_5;
            }
            DAT_10011398 = 0;
            *(undefined1 *)(DAT_10011390 + 0x30) = 1;
          }
          if (bVar19 == 0x1b) {
switchD_1000c831_caseD_1b:
            DAT_10011398 = 1;
          }
          else {
switchD_1000c831_caseD_1c:
            if (bVar19 < 0x20) {
              if (bVar19 < 0xe) {
                if ((0x2500U >> (uVar3 & 0x1f) & 1) != 0) goto LAB_1000c881;
                if ((0x18U >> (uVar3 & 0x1f) & 1) == 0) goto switchD_1000cb11_caseD_5;
switchD_1000cb11_caseD_3:
                *(undefined1 *)(lVar25 + 0x30) = 1;
              }
            }
            else {
LAB_1000c881:
              bVar8 = bVar19;
              if (bVar19 == 10) {
                bVar8 = 0xd;
              }
              if (bVar19 == 0x7f) {
                bVar8 = 8;
              }
              uVar12 = *(ulong *)(lVar25 + 0x90);
              if (uVar12 == *(ulong *)(lVar25 + 0x98)) {
                uVar15 = uVar12 * 2;
                if (uVar12 == 0) {
                  uVar15 = 4;
                }
                if (uVar12 < uVar15) {
                  lVar13 = recovered_100080e0(uVar15);
                  pvVar4 = *(void **)(lVar25 + 0x88);
                  uVar12 = *(ulong *)(lVar25 + 0x90);
                  if (uVar12 != 0) {
                    if (uVar12 < 4) {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = 0;
                      if (0x1f < (ulong)(lVar13 - (long)pvVar4)) {
                        if (uVar12 < 0x20) {
                          uVar21 = 0;
                        }
                        else {
                          uVar18 = uVar12 & 0xffffffffffffffe0;
                          uVar21 = 0;
                          do {
                            uVar5 = ((undefined8 *)((long)pvVar4 + uVar21))[1];
                            puVar1 = (undefined8 *)((long)pvVar4 + uVar21 + 0x10);
                            uVar6 = *puVar1;
                            uVar7 = puVar1[1];
                            *(undefined8 *)(lVar13 + uVar21) =
                                 *(undefined8 *)((long)pvVar4 + uVar21);
                            ((undefined8 *)(lVar13 + uVar21))[1] = uVar5;
                            puVar1 = (undefined8 *)(lVar13 + 0x10 + uVar21);
                            *puVar1 = uVar6;
                            puVar1[1] = uVar7;
                            uVar21 = uVar21 + 0x20;
                          } while (uVar18 != uVar21);
                          if (uVar12 == uVar18) goto LAB_1000ca3f;
                          uVar21 = uVar18;
                          if ((uVar12 & 0x1c) == 0) goto LAB_1000c9d5;
                        }
                        uVar18 = uVar12 & 0xfffffffffffffffc;
                        do {
                          *(undefined4 *)(lVar13 + uVar21) = *(undefined4 *)((long)pvVar4 + uVar21);
                          uVar21 = uVar21 + 4;
                        } while (uVar18 != uVar21);
                        if (uVar12 == uVar18) goto LAB_1000ca3f;
                      }
                    }
LAB_1000c9d5:
                    uVar22 = uVar12 & 3;
                    uVar21 = uVar18;
                    if (uVar22 != 0) {
                      do {
                        *(undefined1 *)(lVar13 + uVar21) = *(undefined1 *)((long)pvVar4 + uVar21);
                        uVar21 = uVar21 + 1;
                        uVar22 = uVar22 - 1;
                      } while (uVar22 != 0);
                    }
                    if (uVar18 - uVar12 < 0xfffffffffffffffd) {
                      do {
                        *(undefined1 *)(lVar13 + uVar21) = *(undefined1 *)((long)pvVar4 + uVar21);
                        *(undefined1 *)(lVar13 + 1 + uVar21) =
                             *(undefined1 *)((long)pvVar4 + uVar21 + 1);
                        *(undefined1 *)(lVar13 + 2 + uVar21) =
                             *(undefined1 *)((long)pvVar4 + uVar21 + 2);
                        *(undefined1 *)(lVar13 + 3 + uVar21) =
                             *(undefined1 *)((long)pvVar4 + uVar21 + 3);
                        uVar21 = uVar21 + 4;
                      } while (uVar12 != uVar21);
                    }
                  }
LAB_1000ca3f:
                  recovered_10008140(pvVar4);
                  *(long *)(lVar25 + 0x88) = lVar13;
                  *(ulong *)(lVar25 + 0x98) = uVar15;
                  uVar12 = *(ulong *)(lVar25 + 0x90);
                }
              }
              *(byte *)(*(long *)(lVar25 + 0x88) + uVar12) = bVar8;
              *(long *)(lVar25 + 0x90) = *(long *)(lVar25 + 0x90) + 1;
              if ((byte)(bVar19 - 0x20) < 0x5f) {
                DAT_1001111e = bVar19;
                if ((byte)(bVar19 + 0x9f) < 0x1a) {
                  *(undefined1 *)(&DAT_1000fd00)[(char)bVar19] = 1;
                }
                else {
                  bVar8 = bVar19 + 0xbf;
                  if (bVar8 < 0x1a) {
                    if (0x19 < bVar8) goto switchD_1000cb11_caseD_5;
                    ppuVar16 = &PTR_DAT_10010008;
                  }
                  else {
                    bVar8 = bVar19 - 0x30U;
                    if (9 < bVar8) goto LAB_1000cafb;
                    ppuVar16 = &PTR_DAT_100100d8;
                  }
                  *ppuVar16[bVar8] = 1;
                }
              }
              else {
LAB_1000cafb:
                switch((uintptr_t)(uVar20)) {
                case 3:
                case 4:
                  goto switchD_1000cb11_caseD_3;
                case 5:
                case 6:
                case 7:
                case 9:
                case 0xb:
                case 0xc:
                case 0xe:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                  break;
                case 8:
switchD_1000cb11_caseD_8:
                  DAT_1001111b = 1;
                  break;
                case 10:
                case 0xd:
                  DAT_100110f0 = 1;
                  break;
                case 0x20:
                  DAT_1001111d = 1;
                  break;
                case 0x2d:
                  DAT_10011119 = 1;
                  break;
                case 0x2e:
                  DAT_1001111a = 1;
                  break;
                default:
                  if (uVar20 == 0x7f) goto switchD_1000cb11_caseD_8;
                }
              }
            }
          }
        }
switchD_1000cb11_caseD_5:
        if (uVar20 != 0x1b) {
          if (DAT_10011390 != 0) goto switchD_1000c80a_caseD_5;
          lVar25 = 0;
switchD_1000cb79_caseD_f:
          if (uVar20 == 0 && uVar23 == 0xe) {
            uVar12 = *(ulong *)(lVar25 + 0x90);
            if (uVar12 == *(ulong *)(lVar25 + 0x98)) {
              uVar15 = uVar12 * 2;
              if (uVar12 == 0) {
                uVar15 = 4;
              }
              if (uVar12 < uVar15) {
                lVar13 = recovered_100080e0(uVar15);
                pvVar4 = *(void **)(lVar25 + 0x88);
                uVar12 = *(ulong *)(lVar25 + 0x90);
                if (uVar12 != 0) {
                  if (uVar12 < 4) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = 0;
                    if (0x1f < (ulong)(lVar13 - (long)pvVar4)) {
                      if (uVar12 < 0x20) {
                        uVar21 = 0;
                      }
                      else {
                        uVar18 = uVar12 & 0xffffffffffffffe0;
                        uVar21 = 0;
                        do {
                          uVar5 = ((undefined8 *)((long)pvVar4 + uVar21))[1];
                          puVar1 = (undefined8 *)((long)pvVar4 + uVar21 + 0x10);
                          uVar6 = *puVar1;
                          uVar7 = puVar1[1];
                          *(undefined8 *)(lVar13 + uVar21) = *(undefined8 *)((long)pvVar4 + uVar21);
                          ((undefined8 *)(lVar13 + uVar21))[1] = uVar5;
                          puVar1 = (undefined8 *)(lVar13 + 0x10 + uVar21);
                          *puVar1 = uVar6;
                          puVar1[1] = uVar7;
                          uVar21 = uVar21 + 0x20;
                        } while (uVar18 != uVar21);
                        if (uVar12 == uVar18) goto LAB_1000cd3f;
                        uVar21 = uVar18;
                        if ((uVar12 & 0x1c) == 0) goto LAB_1000ccd5;
                      }
                      uVar18 = uVar12 & 0xfffffffffffffffc;
                      do {
                        *(undefined4 *)(lVar13 + uVar21) = *(undefined4 *)((long)pvVar4 + uVar21);
                        uVar21 = uVar21 + 4;
                      } while (uVar18 != uVar21);
                      if (uVar12 == uVar18) goto LAB_1000cd3f;
                    }
                  }
LAB_1000ccd5:
                  uVar22 = uVar12 & 3;
                  uVar21 = uVar18;
                  if (uVar22 != 0) {
                    do {
                      *(undefined1 *)(lVar13 + uVar21) = *(undefined1 *)((long)pvVar4 + uVar21);
                      uVar21 = uVar21 + 1;
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                  if (uVar18 - uVar12 < 0xfffffffffffffffd) {
                    do {
                      *(undefined1 *)(lVar13 + uVar21) = *(undefined1 *)((long)pvVar4 + uVar21);
                      *(undefined1 *)(lVar13 + 1 + uVar21) =
                           *(undefined1 *)((long)pvVar4 + uVar21 + 1);
                      *(undefined1 *)(lVar13 + 2 + uVar21) =
                           *(undefined1 *)((long)pvVar4 + uVar21 + 2);
                      *(undefined1 *)(lVar13 + 3 + uVar21) =
                           *(undefined1 *)((long)pvVar4 + uVar21 + 3);
                      uVar21 = uVar21 + 4;
                    } while (uVar12 != uVar21);
                  }
                }
LAB_1000cd3f:
                recovered_10008140(pvVar4);
                *(long *)(lVar25 + 0x88) = lVar13;
                *(ulong *)(lVar25 + 0x98) = uVar15;
                uVar12 = *(ulong *)(lVar25 + 0x90);
              }
            }
            *(undefined1 *)(*(long *)(lVar25 + 0x88) + uVar12) = 8;
            *(long *)(lVar25 + 0x90) = *(long *)(lVar25 + 0x90) + 1;
          }
        }
      }
LAB_1000c785:
      uVar24 = uVar24 + 1;
    } while (uVar24 < DAT_10011380);
  }
  DAT_10011380 = 0;
  if (DAT_10011398 == 1 && iVar9 == 1) {
    *(undefined1 *)(DAT_10011390 + 0x30) = 1;
  }
  else if (DAT_10011398 != 2 || iVar9 != 2) {
    DAT_10011380 = 0;
    DAT_1001139c = DAT_10011398;
    return;
  }
  DAT_1001139c = 0;
  DAT_10011398 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028082c
#undef DAT_002808b4
#undef DAT_1000fd00
#undef DAT_100110f0
#undef DAT_100110f1
#undef DAT_100110f2
#undef DAT_100110f3
#undef DAT_100110f4
#undef DAT_100110f5
#undef DAT_100110f6
#undef DAT_100110f7
#undef DAT_100110f8
#undef DAT_100110f9
#undef DAT_100110fa
#undef DAT_100110fb
#undef DAT_100110fc
#undef DAT_100110fd
#undef DAT_100110fe
#undef DAT_100110ff
#undef DAT_10011100
#undef DAT_10011101
#undef DAT_10011102
#undef DAT_10011103
#undef DAT_10011104
#undef DAT_10011105
#undef DAT_10011106
#undef DAT_10011107
#undef DAT_10011108
#undef DAT_10011109
#undef DAT_1001110a
#undef DAT_1001110b
#undef DAT_1001110c
#undef DAT_1001110d
#undef DAT_1001110e
#undef DAT_1001110f
#undef DAT_10011110
#undef DAT_10011111
#undef DAT_10011112
#undef DAT_10011113
#undef DAT_10011114
#undef DAT_10011115
#undef DAT_10011116
#undef DAT_10011117
#undef DAT_10011118
#undef DAT_10011119
#undef DAT_1001111a
#undef DAT_1001111b
#undef DAT_1001111c
#undef DAT_1001111d
#undef DAT_1001111e
#undef DAT_10011378
#undef DAT_10011380
#undef DAT_10011388
#undef DAT_10011390
#undef DAT_10011398
#undef DAT_1001139c
#undef PTR_DAT_10010008
#undef PTR_DAT_100100d8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028082c
#undef _DAT_002808b4

#undef DAT_100110f0
#define DAT_100110f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151cU)))
#undef DAT_100110f1
#define DAT_100110f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151dU)))
#undef DAT_100110f2
#define DAT_100110f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151eU)))
#undef DAT_100110f3
#define DAT_100110f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151fU)))
#undef DAT_100110f4
#define DAT_100110f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1520U)))
#undef DAT_100110f5
#define DAT_100110f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1521U)))
#undef DAT_100110f6
#define DAT_100110f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1522U)))
#undef DAT_100110f7
#define DAT_100110f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1523U)))
#undef DAT_100110f8
#define DAT_100110f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1524U)))
#undef DAT_100110f9
#define DAT_100110f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1525U)))
#undef DAT_100110fa
#define DAT_100110fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1526U)))
#undef DAT_100110fb
#define DAT_100110fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1527U)))
#undef DAT_100110fc
#define DAT_100110fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1528U)))
#undef DAT_100110fd
#define DAT_100110fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1529U)))
#undef DAT_100110fe
#define DAT_100110fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152aU)))
#undef DAT_100110ff
#define DAT_100110ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152bU)))
#undef DAT_10011100
#define DAT_10011100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152cU)))
#undef DAT_10011101
#define DAT_10011101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152dU)))
#undef DAT_10011102
#define DAT_10011102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152eU)))
#undef DAT_10011103
#define DAT_10011103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152fU)))
#undef DAT_10011104
#define DAT_10011104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1530U)))
#undef DAT_10011105
#define DAT_10011105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1531U)))
#undef DAT_10011106
#define DAT_10011106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1532U)))
#undef DAT_10011107
#define DAT_10011107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1533U)))
#undef DAT_10011108
#define DAT_10011108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1534U)))
#undef DAT_10011109
#define DAT_10011109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1535U)))
#undef DAT_1001110a
#define DAT_1001110a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1536U)))
#undef DAT_1001110b
#define DAT_1001110b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1537U)))
#undef DAT_1001110c
#define DAT_1001110c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1538U)))
#undef DAT_1001110d
#define DAT_1001110d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1539U)))
#undef DAT_1001110e
#define DAT_1001110e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153aU)))
#undef DAT_1001110f
#define DAT_1001110f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153bU)))
#undef DAT_10011110
#define DAT_10011110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153cU)))
#undef DAT_10011111
#define DAT_10011111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153dU)))
#undef DAT_10011112
#define DAT_10011112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153eU)))
#undef DAT_10011113
#define DAT_10011113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153fU)))
#undef DAT_10011114
#define DAT_10011114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1540U)))
#undef DAT_10011115
#define DAT_10011115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1541U)))
#undef DAT_10011116
#define DAT_10011116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1542U)))
#undef DAT_10011117
#define DAT_10011117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1543U)))
#undef DAT_10011118
#define DAT_10011118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1544U)))
#undef DAT_10011119
#define DAT_10011119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1545U)))
#undef DAT_1001111a
#define DAT_1001111a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1546U)))
#undef DAT_1001111b
#define DAT_1001111b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1547U)))
#undef DAT_1001111c
#define DAT_1001111c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1548U)))
#undef DAT_1001111d
#define DAT_1001111d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1549U)))
#undef DAT_1001111e
#define DAT_1001111e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d0c0
 */

void recovered_1000d0c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_100110f0 = 0;
  DAT_100110f1 = 0;
  DAT_100110f2 = 0;
  DAT_100110f3 = 0;
  DAT_100110f4 = 0;
  DAT_100110f5 = 0;
  DAT_100110f6 = 0;
  DAT_100110f7 = 0;
  DAT_100110f8 = 0;
  DAT_100110f9 = 0;
  DAT_100110fa = 0;
  DAT_100110fb = 0;
  DAT_100110fc = 0;
  DAT_100110fd = 0;
  DAT_100110fe = 0;
  DAT_100110ff = 0;
  DAT_10011100 = 0;
  DAT_10011101 = 0;
  DAT_10011102 = 0;
  DAT_10011103 = 0;
  DAT_10011104 = 0;
  DAT_10011105 = 0;
  DAT_10011106 = 0;
  DAT_10011107 = 0;
  DAT_10011108 = 0;
  DAT_10011109 = 0;
  DAT_1001110a = 0;
  DAT_1001110b = 0;
  DAT_1001110c = 0;
  DAT_1001110d = 0;
  DAT_1001110e = 0;
  DAT_1001110f = 0;
  DAT_10011110 = 0;
  DAT_10011111 = 0;
  DAT_10011112 = 0;
  DAT_10011113 = 0;
  DAT_10011114 = 0;
  DAT_10011115 = 0;
  DAT_10011116 = 0;
  DAT_10011117 = 0;
  DAT_10011118 = 0;
  DAT_10011119 = 0;
  DAT_1001111a = 0;
  DAT_1001111b = 0;
  DAT_1001111c = 0;
  DAT_1001111d = 0;
  DAT_1001111e = 0;
  return;
}

#undef DAT_100110f0
#undef DAT_100110f1
#undef DAT_100110f2
#undef DAT_100110f3
#undef DAT_100110f4
#undef DAT_100110f5
#undef DAT_100110f6
#undef DAT_100110f7
#undef DAT_100110f8
#undef DAT_100110f9
#undef DAT_100110fa
#undef DAT_100110fb
#undef DAT_100110fc
#undef DAT_100110fd
#undef DAT_100110fe
#undef DAT_100110ff
#undef DAT_10011100
#undef DAT_10011101
#undef DAT_10011102
#undef DAT_10011103
#undef DAT_10011104
#undef DAT_10011105
#undef DAT_10011106
#undef DAT_10011107
#undef DAT_10011108
#undef DAT_10011109
#undef DAT_1001110a
#undef DAT_1001110b
#undef DAT_1001110c
#undef DAT_1001110d
#undef DAT_1001110e
#undef DAT_1001110f
#undef DAT_10011110
#undef DAT_10011111
#undef DAT_10011112
#undef DAT_10011113
#undef DAT_10011114
#undef DAT_10011115
#undef DAT_10011116
#undef DAT_10011117
#undef DAT_10011118
#undef DAT_10011119
#undef DAT_1001111a
#undef DAT_1001111b
#undef DAT_1001111c
#undef DAT_1001111d
#undef DAT_1001111e

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000d210(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000d220(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_1000d230(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000d240(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_1000d250(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_1000fdf1
#define DAT_1000fdf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef DAT_1000fdf3
#define DAT_1000fdf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21fU)))
#undef DAT_1000fef9
#define DAT_1000fef9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1000ff70
#define DAT_1000ff70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39cU)))
#undef LAB_1000da09
#define LAB_1000da09 (*(uint8_t *)(0x1000da09U))
#define uStack_70 (*(ulong *)(pf_stack_frame + 144))
#define uStack_48 (*(ulong *)(pf_stack_frame + 184))
#define local_e0 (*(undefined8 * *)(pf_stack_frame + 32))
#define local_d8 (*(undefined8 *)(pf_stack_frame + 40))
#define local_d0 (*(undefined4 *)(pf_stack_frame + 48))
#define local_b8 (*(code * *)(pf_stack_frame + 72))
#define local_b0 (*(undefined * *)(pf_stack_frame + 80))
#define local_a8 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_a0 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_98 (*(undefined1 * *)(pf_stack_frame + 104))
#define local_80 (*(long * *)(pf_stack_frame + 128))
#define local_78 (*(void * *)(pf_stack_frame + 136))
#define local_68 (*(undefined8 *)(pf_stack_frame + 152))
#define local_60 (*(undefined8 *)(pf_stack_frame + 160))
#define local_58 (*(ulong *)(pf_stack_frame + 168))
#define local_50 (*(char * *)(pf_stack_frame + 176))
#define local_40 (*(ulong *)(pf_stack_frame + 192))
#define local_34 (*(undefined4 *)(pf_stack_frame + 204))
#define auStack_e8 (*(undefined1 (*)[232])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d480
 */

long * recovered_1000d480(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;

  local_a8 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 256) + -8);
  local_98 = auStack_e8;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  lVar11 = param_2[1];
  local_b8 = recovered_10008090;
  local_b0 = &DAT_1000ff70;
  local_a0 = &LAB_1000da09;
  local_80 = param_1;
  recovered_10008730(&local_d8);
  if (lVar11 == 0) {
    local_34 = 0;
  }
  else {
    pcVar4 = (char *)*param_2;
    pcVar5 = &DAT_1000fdf3;
    if (pcVar4 != (char *)0x0) {
      pcVar5 = pcVar4;
    }
    local_34 = (uint)CONCAT71((int7)((ulong)pcVar4 >> 8),*pcVar5 == '/');
  }
  uVar8 = 0;
  local_e0 = param_2;
  do {
    uVar10 = local_e0[1];
    uVar6 = uVar10 - uVar8;
    if (uVar10 < uVar8 || uVar6 == 0) break;
    puVar9 = (undefined1 *)*local_e0;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_1000fdf3;
    }
    uVar7 = uVar8;
    do {
      if (puVar9[uVar7] == '/') {
        if (uVar7 != 0xffffffffffffffff) {
          local_60 = (ulong)PF_PART4(local_60, 4) << 0x20;
          local_58 = uVar7;
          goto LAB_1000d5cd;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar10 != uVar7);
    local_58 = 0xffffffffffffffff;
    local_60 = CONCAT44(PF_PART4(local_60, 4),(int)CONCAT71((int7)(uVar7 >> 8),1));
    uVar7 = uVar10;
LAB_1000d5cd:
    uVar7 = uVar7 - uVar8;
    uVar10 = uVar7;
    if (uVar6 < uVar7) {
      uVar10 = uVar6;
    }
    if (uVar7 == 0xffffffffffffffff) {
      uVar10 = uVar6;
    }
    local_50 = (char *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    local_d0 = 1;
    recovered_1000ef30((long *)&local_50,(long)(puVar9 + uVar8),uVar10);
    uVar8 = local_58;
    if (uStack_48 != 0) {
      pcVar4 = local_50;
      if (local_50 == (char *)0x0) {
        pcVar4 = &DAT_1000fdf3;
      }
      if (uStack_48 == 2) {
        if ((*pcVar4 == '.') && (pcVar4[1] == '.')) {
          if (uStack_70 != 0) {
            pcVar4 = *(char **)((long)local_78 + uStack_70 * 0x18 + -0x18);
            pcVar5 = pcVar4;
            if (pcVar4 == (char *)0x0) {
              pcVar5 = &DAT_1000fdf3;
            }
            if (((*(long *)((long)local_78 + uStack_70 * 0x18 + -0x10) != 2) || (*pcVar5 != '.')) ||
               (pcVar5[1] != '.')) {
              recovered_10008140(pcVar4);
              uStack_70 = uStack_70 - 1;
              goto LAB_1000d54b;
            }
          }
          if ((char)local_34 != '\0') goto LAB_1000d54b;
        }
      }
      else if ((uStack_48 == 1) && (*pcVar4 == '.')) goto LAB_1000d54b;
      local_d0 = 2;
      recovered_1000f300((long *)&local_78,&local_50);
      uVar8 = local_58;
    }
LAB_1000d54b:
    uVar8 = uVar8 + 1;
    recovered_10008140(local_50);
  } while ((char)local_60 == '\0');
  puVar9 = &DAT_1000fdf3;
  if ((char)local_34 != '\0') {
    puVar9 = &DAT_1000fef9;
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uVar8 = 0xffffffffffffffff;
  do {
    lVar11 = uVar8 + 1;
    uVar8 = uVar8 + 1;
  } while (puVar9[lVar11] != '\0');
  local_d0 = 3;
  recovered_1000ef30((long *)&local_50,(long)puVar9,uVar8);
  if (uStack_70 != 0) {
    uVar8 = 0;
    do {
      local_58 = uVar8;
      if (uVar8 != 0 || (local_34 & 1) != 0) {
        if (uStack_48 == local_40) {
          uVar10 = uStack_48 * 2;
          if (uStack_48 == 0) {
            uVar10 = 0x10;
          }
          if (uVar10 <= uStack_48) goto LAB_1000d7b0;
          local_d0 = 4;
          local_60 = uVar10;
          pcVar4 = (char *)recovered_100080e0(uVar10 | 1);
          uVar8 = local_58;
          *pcVar4 = '\0';
          if (uStack_48 != 0) {
            if (uStack_48 < 4) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              if (0x1f < (ulong)((long)pcVar4 - (long)local_50)) {
                if (uStack_48 < 0x20) {
                  uVar6 = 0;
                }
                else {
                  uVar10 = uStack_48 & 0xffffffffffffffe0;
                  uVar6 = 0;
                  do {
                    uVar1 = *(undefined8 *)(local_50 + uVar6 + 8);
                    uVar2 = *(undefined8 *)(local_50 + uVar6 + 0x10);
                    uVar3 = *(undefined8 *)(local_50 + uVar6 + 0x10 + 8);
                    *(undefined8 *)(pcVar4 + uVar6) = *(undefined8 *)(local_50 + uVar6);
                    *(undefined8 *)(pcVar4 + uVar6 + 8) = uVar1;
                    *(undefined8 *)(pcVar4 + uVar6 + 0x10) = uVar2;
                    *(undefined8 *)(pcVar4 + uVar6 + 0x10 + 8) = uVar3;
                    uVar6 = uVar6 + 0x20;
                  } while (uVar10 != uVar6);
                  if (uStack_48 == uVar10) goto LAB_1000d8ab;
                  uVar6 = uVar10;
                  if ((uStack_48 & 0x1c) == 0) goto LAB_1000d844;
                }
                uVar10 = uStack_48 & 0xfffffffffffffffc;
                do {
                  *(undefined4 *)(pcVar4 + uVar6) = *(undefined4 *)(local_50 + uVar6);
                  uVar6 = uVar6 + 4;
                } while (uVar10 != uVar6);
                if (uStack_48 == uVar10) goto LAB_1000d8ab;
              }
            }
LAB_1000d844:
            uVar7 = uStack_48 & 3;
            uVar6 = uVar10;
            if (uVar7 != 0) {
              do {
                pcVar4[uVar6] = local_50[uVar6];
                uVar6 = uVar6 + 1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            if (uVar10 - uStack_48 < 0xfffffffffffffffd) {
              do {
                pcVar4[uVar6] = local_50[uVar6];
                pcVar4[uVar6 + 1] = local_50[uVar6 + 1];
                pcVar4[uVar6 + 2] = local_50[uVar6 + 2];
                pcVar4[uVar6 + 3] = local_50[uVar6 + 3];
                uVar6 = uVar6 + 4;
              } while (uStack_48 != uVar6);
            }
          }
LAB_1000d8ab:
          pcVar4[uStack_48] = '\0';
          recovered_10008140(local_50);
          local_40 = local_60;
LAB_1000d8b8:
          local_50 = pcVar4;
        }
        else {
LAB_1000d7b0:
          if (local_50 == (char *)0x0) {
            local_d0 = 5;
            pcVar4 = (char *)recovered_100080e0(1);
            *pcVar4 = '\0';
            local_40 = 0;
            uVar8 = local_58;
            goto LAB_1000d8b8;
          }
        }
        local_50[uStack_48] = '/';
        local_50[uStack_48 + 1] = '\0';
        uStack_48 = uStack_48 + 1;
      }
      puVar9 = *(undefined1 **)((long)local_78 + uVar8 * 0x18);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_1000fdf3;
      }
      local_d0 = 6;
      recovered_1000f420((long *)&local_50,(long)puVar9,
                         *(ulong *)((long)local_78 + uVar8 * 0x18 + 8));
      uVar8 = local_58 + 1;
    } while (uVar8 < uStack_70);
  }
  if (uStack_48 == 0) {
    pcVar4 = &DAT_1000fdf1;
    if ((char)local_34 != '\0') {
      pcVar4 = &DAT_1000fef9;
    }
    *local_80 = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    uVar8 = 0xffffffffffffffff;
    do {
      lVar11 = uVar8 + 1;
      uVar8 = uVar8 + 1;
    } while (pcVar4[lVar11] != '\0');
  }
  else {
    *local_80 = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    uVar8 = uStack_48;
    pcVar4 = &DAT_1000fdf3;
    if (local_50 != (char *)0x0) {
      pcVar4 = local_50;
    }
  }
  local_d0 = 7;
  recovered_1000ef30(local_80,(long)pcVar4,uVar8);
  recovered_10008140(local_50);
  if (uStack_70 != 0) {
    lVar11 = uStack_70 * 0x18;
    uVar8 = uStack_70;
    do {
      lVar11 = lVar11 + -0x18;
      recovered_10008140(*(void **)((long)local_78 + lVar11));
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uStack_70 = 0;
  recovered_10008140(local_78);
  recovered_10008750(&local_d8);
  return local_80;
}

#undef DAT_1000fdf1
#undef DAT_1000fdf3
#undef DAT_1000fef9
#undef DAT_1000ff70
#undef LAB_1000da09
#undef uStack_70
#undef uStack_48
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_40
#undef local_34
#undef auStack_e8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280858
#define DAT_00280858 (*(uint8_t *)(0x280858U))
#undef DAT_1000fdf3
#define DAT_1000fdf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21fU)))
#undef DAT_1000ff84
#define DAT_1000ff84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b0U)))
#undef LAB_1000ddee
#define LAB_1000ddee (*(uint8_t *)(0x1000ddeeU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
#undef _DAT_00280858
#define _DAT_00280858 (*(uint *)(0x280858U))
#define local_f8 (*(void * *)(pf_stack_frame + 24))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 192))
#define local_e8 (*(undefined8 *)(pf_stack_frame + 40))
#define local_e0 (*(undefined8 *)(pf_stack_frame + 48))
#define local_d8 (*(undefined4 *)(pf_stack_frame + 56))
#define local_c0 (*(code * *)(pf_stack_frame + 80))
#define local_b8 (*(undefined * *)(pf_stack_frame + 88))
#define local_b0 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_a8 (*(undefined1 * *)(pf_stack_frame + 104))
#define local_a0 (*(undefined1 * *)(pf_stack_frame + 112))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 136))
#define local_80 (*(long *)(pf_stack_frame + 144))
#define local_70 (*(undefined4 * *)(pf_stack_frame + 160))
#define local_68 (*(undefined4 * *)(pf_stack_frame + 168))
#define local_60 (*(void * *)(pf_stack_frame + 176))
#define local_58 (*(void * *)(pf_stack_frame + 184))
#define local_48 (*(undefined8 *)(pf_stack_frame + 200))
#define local_38 (*(undefined8 *)(pf_stack_frame + 216))
#define uStack_f0 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1000da90(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  undefined1 *puVar7;

  local_b0 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 272) + -8);
  local_a0 = (undefined1 *)&local_f8;
  local_c0 = recovered_10008090;
  local_b8 = &DAT_1000ff84;
  local_a8 = &LAB_1000ddee;
  recovered_10008730(&local_e0);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    pvVar6 = (void *)0x0;
    goto LAB_1000ddcd;
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uVar4 = 0xffffffffffffffff;
  do {
    pcVar1 = (char *)(param_1 + 1 + uVar4);
    uVar4 = uVar4 + 1;
  } while (*pcVar1 != '\0');
  local_d8 = 0xffffffff;
  local_70 = param_3;
  local_68 = param_2;
  local_38 = (void *)param_1;
  recovered_1000ef30((long *)&local_f8,param_1,uVar4);
  local_d8 = 1;
  recovered_1000d480((long *)&local_88,&local_f8);
  recovered_10008140(local_f8);
  puVar7 = local_88;
  if (local_88 == (undefined1 *)0x0) {
    puVar7 = &DAT_1000fdf3;
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x5b < _DAT_00280808 && ((code *)(ulong)_DAT_00280858 != (code *)0x0)))) {
    local_d8 = 2;
    iVar3 = (*(code *)(ulong)_DAT_00280858)(puVar7,&local_58);
    if (iVar3 == 0) goto LAB_1000dc28;
LAB_1000dcf2:
    pvVar6 = (void *)0x0;
    if (local_58 != (void *)0x0) {
      if ((((int)uStack_50 != 0) && (PF_PART4(uStack_50, 4) != 0)) && ((int)local_48 != 0)) {
        local_38 = local_58;
        local_d8 = 4;
        local_60 = (void *)recovered_10008110(uStack_50 & 0xffffffff);
        local_d8 = 5;
        recovered_10001db0(local_60,local_38,uStack_50 & 0xffffffff);
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 &&
            ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
          local_d8 = 6;
          (*(code *)(ulong)_DAT_00280850)(local_38);
        }
        if (local_68 != (undefined4 *)0x0) {
          *local_68 = PF_PART4(uStack_50, 4);
        }
        pvVar6 = local_60;
        if (local_70 != (undefined4 *)0x0) {
          *local_70 = (int)local_48;
        }
      }
    }
  }
  else {
LAB_1000dc28:
    lVar5 = -1;
    do {
      lVar2 = lVar5 + 1;
      lVar5 = lVar5 + 1;
    } while (*(char *)((long)local_38 + lVar2) != '\0');
    puVar7 = &DAT_1000fdf3;
    if (local_88 != (undefined1 *)0x0) {
      puVar7 = local_88;
    }
    if (local_80 == lVar5) {
      pvVar6 = (void *)0x0;
      if (local_80 != 0) {
        lVar5 = 0;
        do {
          if (puVar7[lVar5] != *(char *)((long)local_38 + lVar5)) goto LAB_1000dc87;
          lVar5 = lVar5 + 1;
        } while (local_80 != lVar5);
      }
    }
    else {
LAB_1000dc87:
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 &&
          ((0x5b < _DAT_00280808 && ((code *)(ulong)_DAT_00280858 != (code *)0x0)))))) {
        local_d8 = 3;
        iVar3 = (*(code *)(ulong)_DAT_00280858)(local_38,&local_58);
        if (iVar3 != 0) goto LAB_1000dcf2;
      }
      pvVar6 = (void *)0x0;
    }
  }
  recovered_10008140(local_88);
LAB_1000ddcd:
  recovered_10008750(&local_e0);
  return (ulong)pvVar6;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280858
#undef DAT_1000fdf3
#undef DAT_1000ff84
#undef LAB_1000ddee
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850
#undef _DAT_00280858
#undef local_f8
#undef uStack_50
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_48
#undef local_38
#undef uStack_f0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000de70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000deb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_00280850)();
    return;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280868
#define DAT_00280868 (*(uint8_t *)(0x280868U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280868
#define _DAT_00280868 (*(uint *)(0x280868U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000dec0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x6b < _DAT_00280808 && ((code *)(ulong)_DAT_00280868 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000df01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_00280868)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280868
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280868

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280870
#define DAT_00280870 (*(uint8_t *)(0x280870U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280870
#define _DAT_00280870 (*(uint *)(0x280870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000df10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x73 < _DAT_00280808 && ((code *)(ulong)_DAT_00280870 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000df51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_00280870)();
    return;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280870
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280870

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280874
#define DAT_00280874 (*(uint8_t *)(0x280874U))
#undef DAT_1000fbe8
#define DAT_1000fbe8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fde0
#define DAT_1000fde0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280874
#define _DAT_00280874 (*(uint *)(0x280874U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df60
 */

/* WARNING: Removing unreachable block (ram,0x1000e091) */
/* WARNING: Removing unreachable block (ram,0x1000e043) */
/* WARNING: Removing unreachable block (ram,0x1000e051) */
/* WARNING: Removing unreachable block (ram,0x1000e05b) */
/* WARNING: Removing unreachable block (ram,0x1000e067) */
/* WARNING: Removing unreachable block (ram,0x1000e073) */
/* WARNING: Removing unreachable block (ram,0x1000e07f) */
/* WARNING: Removing unreachable block (ram,0x1000e0a4) */
/* WARNING: Removing unreachable block (ram,0x1000e0a8) */
/* WARNING: Removing unreachable block (ram,0x1000e0f2) */
/* WARNING: Removing unreachable block (ram,0x1000e0fc) */
/* WARNING: Removing unreachable block (ram,0x1000e10c) */
/* WARNING: Removing unreachable block (ram,0x1000e11c) */
/* WARNING: Removing unreachable block (ram,0x1000e12c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000df60(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_2 != 0 && param_1 != 0) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
     (((0xb < _DAT_00280808 && (0x77 < _DAT_00280808)) &&
      ((code *)(ulong)_DAT_00280874 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280874)();
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280874
#undef DAT_1000fbe8
#undef DAT_1000fde0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280874

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280878
#define DAT_00280878 (*(uint8_t *)(0x280878U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280878
#define _DAT_00280878 (*(uint *)(0x280878U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000e140(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x7b < _DAT_00280808 && ((code *)(ulong)_DAT_00280878 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000e181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_00280878)();
    return;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280878
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280878

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e190
 */

uint * recovered_1000e190(uint param_1,uint param_2,undefined1 param_3,undefined1 param_4,
                         undefined1 param_5,undefined1 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;

  if ((int)param_2 < 1 || (int)param_1 < 1) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)recovered_100080e0(0x20);
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *puVar2 = param_1;
    puVar2[1] = param_2;
    lVar3 = recovered_10008110((ulong)param_2 * (ulong)param_1 * 4);
    *(long *)(puVar2 + 2) = lVar3;
    uVar1 = (ulong)param_2 * (ulong)param_1 * 4 - 1;
    if (uVar1 == 3) {
      lVar4 = 0;
    }
    else {
      uVar5 = (uVar1 >> 2) + 1 & 0xfffffffffffffffe;
      lVar4 = 0;
      do {
        *(undefined1 *)(lVar3 + lVar4) = param_3;
        *(undefined1 *)(lVar3 + 1 + lVar4) = param_4;
        *(undefined1 *)(lVar3 + 2 + lVar4) = param_5;
        *(undefined1 *)(lVar3 + 3 + lVar4) = param_6;
        *(undefined1 *)(lVar3 + 4 + lVar4) = param_3;
        *(undefined1 *)(lVar3 + 5 + lVar4) = param_4;
        *(undefined1 *)(lVar3 + 6 + lVar4) = param_5;
        *(undefined1 *)(lVar3 + 7 + lVar4) = param_6;
        lVar4 = lVar4 + 8;
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    if ((uVar1 & 4) == 0) {
      *(undefined1 *)(lVar3 + lVar4) = param_3;
      *(undefined1 *)(lVar3 + 1 + lVar4) = param_4;
      *(undefined1 *)(lVar3 + 2 + lVar4) = param_5;
      *(undefined1 *)(lVar3 + 3 + lVar4) = param_6;
    }
  }
  return puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e2a0
 */

void recovered_1000e2a0(uint *param_1,uint param_2,uint param_3,undefined1 param_4,
                       undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  if ((((param_1 != (uint *)0x0) &&
       (lVar1 = *(long *)(param_1 + 2), -1 < (int)(param_3 | param_2) && lVar1 != 0)) &&
      ((int)param_2 < (int)*param_1)) && ((int)param_3 < (int)param_1[1])) {
    lVar2 = (ulong)param_2 + (ulong)*param_1 * (ulong)param_3;
    *(undefined1 *)(lVar1 + lVar2 * 4) = param_4;
    *(undefined1 *)(lVar1 + 1 + lVar2 * 4) = param_5;
    *(undefined1 *)(lVar1 + 2 + lVar2 * 4) = param_6;
    *(undefined1 *)(lVar1 + 3 + lVar2 * 4) = param_7;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e300
 */

void recovered_1000e300(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((long)param_1 + 8) != (void *)0x0) {
    recovered_100081e0(*(void **)((long)param_1 + 8));
  }
  if (*(void **)((long)param_1 + 0x18) != (void *)0x0) {
    recovered_100081e0(*(void **)((long)param_1 + 0x18));
  }
  recovered_10008140(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e340
 */

void recovered_1000e340(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;

  if (((param_2 != (int *)0x0 && param_1 != (int *)0x0) && (*(long *)(param_1 + 2) != 0)) &&
     (*(long *)(param_2 + 2) != 0)) {
    iVar9 = param_2[1];
    if (0 < iVar9) {
      lVar11 = 0;
      lVar12 = (long)param_4;
      do {
        lVar5 = lVar11 + param_4;
        if ((-1 < lVar5) && (lVar5 < param_1[1])) {
          iVar4 = *param_2;
          if (0 < iVar4) {
            lVar5 = 0;
            do {
              lVar7 = param_3 + lVar5;
              if ((-1 < lVar7) && (lVar7 < *param_1)) {
                lVar2 = *(long *)(param_2 + 2);
                lVar13 = iVar4 * lVar11 + lVar5;
                lVar3 = *(long *)(param_1 + 2);
                lVar7 = lVar7 + *param_1 * lVar12;
                bVar1 = *(byte *)(lVar2 + 3 + lVar13 * 4);
                uVar14 = ((bVar1 ^ 0xff) * (uint)*(byte *)(lVar3 + 3 + lVar7 * 4) + 0x7f & 0xffff) /
                         0xff;
                uVar10 = uVar14 + bVar1;
                if (uVar10 != 0) {
                  uVar8 = uVar10 >> 1;
                  uVar6 = (uint)bVar1;
                  *(char *)(lVar3 + lVar7 * 4) =
                       (char)((*(byte *)(lVar2 + lVar13 * 4) * uVar6 + uVar8 +
                              *(byte *)(lVar3 + lVar7 * 4) * uVar14) / uVar10);
                  *(char *)(lVar3 + 1 + lVar7 * 4) =
                       (char)((*(byte *)(lVar2 + 1 + lVar13 * 4) * uVar6 + uVar8 +
                              *(byte *)(lVar3 + 1 + lVar7 * 4) * uVar14) / uVar10);
                  *(char *)(lVar3 + 2 + lVar7 * 4) =
                       (char)((*(byte *)(lVar2 + 2 + lVar13 * 4) * uVar6 + uVar8 +
                              *(byte *)(lVar3 + 2 + lVar7 * 4) * uVar14) / uVar10);
                  *(char *)(lVar3 + 3 + lVar7 * 4) = (char)uVar10;
                  iVar4 = *param_2;
                }
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < iVar4);
            iVar9 = param_2[1];
          }
        }
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 1;
      } while (lVar11 < iVar9);
    }
  }
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280978
#define DAT_00280978 (*(uint8_t *)(0x280978U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280978
#define _DAT_00280978 (*(uint *)(0x280978U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e4f0
 */

/* WARNING: Removing unreachable block (ram,0x1000e5e0) */
/* WARNING: Removing unreachable block (ram,0x1000e615) */
/* WARNING: Removing unreachable block (ram,0x1000e623) */
/* WARNING: Removing unreachable block (ram,0x1000e62d) */
/* WARNING: Removing unreachable block (ram,0x1000e639) */
/* WARNING: Removing unreachable block (ram,0x1000e645) */
/* WARNING: Removing unreachable block (ram,0x1000e651) */
/* WARNING: Removing unreachable block (ram,0x1000e5f4) */
/* WARNING: Removing unreachable block (ram,0x1000e603) */
/* WARNING: Removing unreachable block (ram,0x1000e667) */
/* WARNING: Removing unreachable block (ram,0x1000e67e) */
/* WARNING: Removing unreachable block (ram,0x1000e684) */
/* WARNING: Removing unreachable block (ram,0x1000e694) */
/* WARNING: Removing unreachable block (ram,0x1000e6b7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_1000e4f0(long param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 != 0) {
    uVar2 = 0xff;
    if (param_5 < 0xff) {
      uVar2 = param_5;
    }
    uVar2 = uVar2 << 8;
    uVar1 = 0xff;
    if (param_4 < 0xff) {
      uVar1 = param_4;
    }
    uVar1 = uVar1 << 0x10;
    uVar3 = 0xff;
    if (param_3 < 0xff) {
      uVar3 = param_3;
    }
    uVar3 = uVar3 << 0x18;
    if ((int)param_3 < 0) {
      uVar3 = 0;
    }
    if ((int)param_4 < 0) {
      uVar1 = 0;
    }
    if ((int)param_5 < 0) {
      uVar2 = 0;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x17b < _DAT_00280808 && ((code *)(ulong)_DAT_00280978 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280978)
                (param_1,0xffffffff,param_2,param_6 & 0xff | uVar1 | uVar3 | uVar2);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280978
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280978

/* Native system-font selection through the WinterScript variable service.
 * Pooka's Free Software License. */
void *recovered_1000e6d0(float size){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
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
 * Address: 0x1000eaf0
 */

undefined1 recovered_1000eaf0(long param_1)

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
      }
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb50
 */

void recovered_1000eb50(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    uVar1 = 0xffffffff;
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x58) == '\0') {
      recovered_1000a8a0(param_1);
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


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280964
#define DAT_00280964 (*(uint8_t *)(0x280964U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280964
#define _DAT_00280964 (*(uint *)(0x280964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ebc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000ebc0(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (((param_1 != 0) && (param_2 < 4)) && (*(char *)(param_1 + 0x1c) == '\0')) {
    if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
       ((_DAT_00280808 < 0xc ||
        ((_DAT_00280808 < 0x168 || ((code *)(ulong)_DAT_00280964 == (code *)0x0)))))) {
      return false;
    }
    iVar1 = (*(code *)(ulong)_DAT_00280964)(*(undefined4 *)(param_1 + 0x18));
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280964
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280964

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808b0
#define DAT_002808b0 (*(uint8_t *)(0x2808b0U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_00280960
#define DAT_00280960 (*(uint8_t *)(0x280960U))
#undef DAT_00280964
#define DAT_00280964 (*(uint8_t *)(0x280964U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b0
#define _DAT_002808b0 (*(uint *)(0x2808b0U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(uint *)(0x2808b4U))
#undef _DAT_00280960
#define _DAT_00280960 (*(uint *)(0x280960U))
#undef _DAT_00280964
#define _DAT_00280964 (*(uint *)(0x280964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000ec30(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((param_1 != 0) && (*(char *)(param_1 + 0x1c) == '\0')) && (*(int *)(param_1 + 0x18) != 0)) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
        ((0xb < _DAT_00280808 &&
         ((0xb7 < _DAT_00280808 && ((code *)(ulong)_DAT_002808b4 != (code *)0x0)))))) &&
       (iVar1 = (*(code *)(ulong)_DAT_002808b4)(*(int *)(param_1 + 0x18),param_1 + 0xb0), iVar1 != 0
       )) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0xdc);
      if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         (0x167 < _DAT_00280808)) {
        if ((code *)(ulong)_DAT_00280964 == (code *)0x0) {
          return false;
        }
        iVar1 = (*(code *)(ulong)_DAT_00280964)(*(undefined4 *)(param_1 + 0x18),1,0);
        if (iVar1 == 0) {
          return false;
        }
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 && (0x163 < _DAT_00280808)))) {
          if ((code *)(ulong)_DAT_00280960 == (code *)0x0) {
            return false;
          }
          iVar1 = (*(code *)(ulong)_DAT_00280960)(*(undefined4 *)(param_1 + 0x18),0xff,0);
          if (iVar1 == 0) {
            return false;
          }
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 &&
              ((0xb3 < _DAT_00280808 && ((code *)(ulong)_DAT_002808b0 != (code *)0x0)))))) {
            iVar1 = (*(code *)(ulong)_DAT_002808b0)
                              (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xdc),
                               *(undefined4 *)(param_1 + 0xe0),0x100,0x100);
            return iVar1 != 0;
          }
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b0
#undef DAT_002808b4
#undef DAT_00280960
#undef DAT_00280964
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b0
#undef _DAT_002808b4
#undef _DAT_00280960
#undef _DAT_00280964

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(uint *)(0x2808b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ee20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 recovered_1000ee20(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  int iVar2;

  if (2 < param_2 || param_1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    if (*(char *)(param_1 + 0x30) == '\0') {
LAB_1000ee4a:
      if (*(char *)(param_1 + 0x58) == '\0') {
        recovered_1000a8a0(param_1);
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      uVar1 = *(undefined1 *)(param_1 + 0x55 + (ulong)param_2);
      goto LAB_1000ef19;
    }
  }
  else if (*(int *)(param_1 + 0x18) != 0) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0xb7 < _DAT_00280808 && ((code *)(ulong)_DAT_002808b4 != (code *)0x0)) &&
        (iVar2 = (*(code *)(ulong)_DAT_002808b4)(*(int *)(param_1 + 0x18),param_1 + 0xb0),
        iVar2 != 0)))) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0xdc);
      if ((*(uint *)(param_1 + 0xd8) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
      if ((*(uint *)(param_1 + 0xd8) & 6) == 2) goto LAB_1000ee4a;
    }
    else {
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
  uVar1 = 0;
LAB_1000ef19:
  *(undefined1 *)(param_1 + (ulong)param_2 + 0x55) = 0;
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define lStack_40 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 32))
#define local_48 (*(long *)(frame + 16))
void recovered_1000ef30(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[120] = {0};

  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;

  uVar13 = param_3;
  if (param_2 == 0) {
    uVar13 = 0;
  }
  puVar8 = (undefined1 *)*param_1;
  if (puVar8 != (undefined1 *)0x0 && param_2 != 0) {
    uVar11 = param_2 - (long)puVar8;
    uVar12 = 0;
    do {
      if (uVar11 == uVar12) {
        uVar12 = param_1[1] - uVar11;
        if (uVar13 < uVar12) {
          uVar12 = uVar13;
        }
        local_48 = 0;
        lStack_40 = 0;
        local_38 = 0;
        recovered_1000ef30(&local_48,(long)(puVar8 + uVar11),uVar12);
        lVar2 = *param_1;
        *param_1 = local_48;
        lVar3 = param_1[1];
        lVar4 = param_1[2];
        param_1[1] = lStack_40;
        param_1[2] = local_38;
        local_48 = lVar2;
        lStack_40 = lVar3;
        local_38 = lVar4;
        recovered_10008140(lVar2);
        return;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 <= (ulong)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = 0;
  }
  if (uVar13 == 0) {
    if (*param_1 == 0) {
      puVar8 = (undefined1 *)recovered_100080e0(1);
      *puVar8 = 0;
      *param_1 = (long)puVar8;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar13 <= (ulong)param_1[2]) goto LAB_10008766;
  puVar8 = (undefined1 *)recovered_100080e0(uVar13 + 1);
  *puVar8 = 0;
  lVar2 = *param_1;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar12 = 0;
    if ((3 < uVar11) && (0x1f < (ulong)((long)puVar8 - lVar2))) {
      if (uVar11 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar5 = ((undefined8 *)(lVar2 + uVar9))[1];
          puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar9);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          *(undefined8 *)(puVar8 + uVar9) = *(undefined8 *)(lVar2 + uVar9);
          *(undefined8 *)((long)(puVar8 + uVar9) + 8) = uVar5;
          *(undefined8 *)(puVar8 + uVar9 + 0x10) = uVar6;
          *(undefined8 *)((long)(puVar8 + uVar9 + 0x10) + 8) = uVar7;
          uVar9 = uVar9 + 0x20;
        } while (uVar12 != uVar9);
        if (uVar11 == uVar12) goto LAB_1000874f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_100086e5;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)(lVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_1000874f;
    }
LAB_100086e5:
    uVar10 = uVar11 & 3;
    uVar9 = uVar12;
    if (uVar10 != 0) {
      do {
        puVar8[uVar9] = *(undefined1 *)(lVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar12 - uVar11 < 0xfffffffffffffffd) {
      do {
        puVar8[uVar9] = *(undefined1 *)(lVar2 + uVar9);
        puVar8[uVar9 + 1] = *(undefined1 *)(lVar2 + 1 + uVar9);
        puVar8[uVar9 + 2] = *(undefined1 *)(lVar2 + 2 + uVar9);
        puVar8[uVar9 + 3] = *(undefined1 *)(lVar2 + 3 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar11 != uVar9);
    }
  }
LAB_1000874f:
  puVar8[uVar11] = 0;
  recovered_10008140(lVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_10008766:
  uVar11 = (ulong)((uint)uVar13 & 3);
  if (uVar13 < 4) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      *(undefined1 *)(*param_1 + uVar12) = *(undefined1 *)(param_2 + uVar12);
      *(undefined1 *)(*param_1 + 1 + uVar12) = *(undefined1 *)(param_2 + 1 + uVar12);
      *(undefined1 *)(*param_1 + 2 + uVar12) = *(undefined1 *)(param_2 + 2 + uVar12);
      *(undefined1 *)(*param_1 + 3 + uVar12) = *(undefined1 *)(param_2 + 3 + uVar12);
      uVar12 = uVar12 + 4;
    } while ((uVar13 & 0xfffffffffffffffc) != uVar12);
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)(*param_1 + uVar12) = *(undefined1 *)(param_2 + uVar12);
    uVar12 = uVar12 + 1;
  }
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

#undef lStack_40
#undef local_38
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1e0
 */

ulong recovered_1000f1e0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                        int param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar5 = 0;
  if (1 < param_6 && (1 < param_5 && 1 < param_3)) {
    uVar2 = 0;
    if (1 < (int)param_3) {
      if (param_2 == 0) {
        uVar1 = param_3 - 1;
        if (param_1 <= param_3 - 1) {
          uVar1 = param_1;
        }
        uVar2 = 0;
        if (-1 < (int)param_1) {
          uVar2 = uVar1;
        }
      }
      else {
        uVar2 = 0;
        if (0 < (int)param_1) {
          uVar2 = param_1;
        }
        if (param_2 <= uVar2) {
          uVar2 = param_2;
        }
        uVar5 = (ulong)(param_3 - 1) * (ulong)uVar2;
        if ((uVar5 & 0x7fffffff00000000) == 0) {
          uVar2 = (uint)((uVar5 & 0xffffffff) / (ulong)param_2);
        }
        else {
          uVar2 = (uint)(uVar5 / param_2);
        }
      }
    }
    uVar3 = (long)(int)uVar2 - (ulong)param_4;
    uVar6 = (ulong)(param_5 - 1);
    uVar4 = uVar3;
    if ((long)uVar6 < (long)uVar3) {
      uVar4 = uVar6;
    }
    uVar5 = 0;
    if (-1 < (long)uVar3) {
      uVar5 = uVar4;
    }
    uVar5 = (param_6 - 1) * uVar5;
    if (uVar5 >> 0x20 == 0) {
      return (uVar5 & 0xffffffff) / uVar6;
    }
    uVar5 = uVar5 / uVar6;
  }
  return uVar5;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000f2a0(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x18;
    do {
      lVar2 = lVar2 + -0x18;
      recovered_10008140(*(undefined8 *)(*param_1 + lVar2));
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[1] = 0;
  recovered_10008140(*param_1);
  return;
}


#undef DAT_1000fdf3
#define DAT_1000fdf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f300
 */

long recovered_1000f300(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  uVar6 = param_1[1];
  if (uVar6 == param_1[2]) {
    uVar8 = 4;
    if (uVar6 != 0) {
      uVar8 = uVar6 * 2;
    }
    if (uVar6 < uVar8) {
      lVar4 = recovered_100080e0(uVar8 * 0x18);
      if (param_1[1] != 0) {
        lVar7 = 8;
        uVar6 = 0;
        do {
          lVar2 = *param_1;
          *(undefined8 *)(lVar4 + -8 + lVar7) = *(undefined8 *)(lVar2 + -8 + lVar7);
          uVar3 = ((undefined8 *)(lVar2 + lVar7))[1];
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
          ((undefined8 *)(lVar4 + lVar7))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar2 + -8 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar2 + 8 + lVar7) = 0;
          recovered_10008140((void *)0x0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar6 < (ulong)param_1[1]);
      }
      recovered_10008140((void *)*param_1);
      *param_1 = lVar4;
      param_1[2] = uVar8;
      uVar6 = param_1[1];
    }
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + uVar6 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x10 + uVar6 * 0x18) = 0;
  puVar5 = &DAT_1000fdf3;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*param_2;
  }
  recovered_1000ef30((long *)(lVar4 + uVar6 * 0x18),(long)puVar5,param_2[1]);
  lVar4 = param_1[1];
  param_1[1] = lVar4 + 1;
  return lVar4 * 0x18 + *param_1;
}

#undef DAT_1000fdf3

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long * recovered_1000f420(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;

  if (param_3 == 0 || param_2 == 0) {
    return param_1;
  }
  puVar6 = (undefined1 *)*param_1;
  if (puVar6 != (undefined1 *)0x0) {
    uVar14 = param_1[1];
    uVar12 = param_2 - (long)puVar6;
    uVar5 = 0;
LAB_100089e0:
    if (uVar12 != uVar5) goto code_r0x100089e5;
    uVar5 = uVar14 - uVar12;
    if (param_3 <= uVar14 - uVar12) {
      uVar5 = param_3;
    }
    param_3 = uVar5;
    uVar5 = uVar14 + param_3;
    puVar7 = puVar6;
    if (uVar5 <= (ulong)param_1[2]) goto LAB_10008d70;
    puVar7 = (undefined1 *)recovered_100080e0(uVar5 + 1);
    *puVar7 = 0;
    lVar13 = *param_1;
    uVar8 = param_1[1];
    if (uVar8 == 0) goto LAB_10008d4f;
    uVar10 = 0;
    if ((uVar8 < 4) || ((ulong)((long)puVar7 - lVar13) < 0x20)) goto LAB_10008ce5;
    if (uVar8 < 0x20) {
      uVar9 = 0;
      goto LAB_10008cba;
    }
    uVar10 = uVar8 & 0xffffffffffffffe0;
    uVar9 = 0;
    do {
      uVar2 = ((undefined8 *)(lVar13 + uVar9))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x10 + uVar9);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      *(undefined8 *)(puVar7 + uVar9) = *(undefined8 *)(lVar13 + uVar9);
      *(undefined8 *)((long)(puVar7 + uVar9) + 8) = uVar2;
      *(undefined8 *)(puVar7 + uVar9 + 0x10) = uVar3;
      *(undefined8 *)((long)(puVar7 + uVar9 + 0x10) + 8) = uVar4;
      uVar9 = uVar9 + 0x20;
    } while (uVar10 != uVar9);
    if (uVar8 != uVar10) {
      uVar9 = uVar10;
      if ((uVar8 & 0x1c) != 0) {
LAB_10008cba:
        uVar10 = uVar8 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar7 + uVar9) = *(undefined4 *)(lVar13 + uVar9);
          uVar9 = uVar9 + 4;
        } while (uVar10 != uVar9);
        if (uVar8 == uVar10) goto LAB_10008d4f;
      }
LAB_10008ce5:
      uVar11 = uVar8 & 3;
      uVar9 = uVar10;
      if (uVar11 != 0) {
        do {
          puVar7[uVar9] = *(undefined1 *)(lVar13 + uVar9);
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar10 - uVar8 < 0xfffffffffffffffd) {
        do {
          puVar7[uVar9] = *(undefined1 *)(lVar13 + uVar9);
          puVar7[uVar9 + 1] = *(undefined1 *)(lVar13 + 1 + uVar9);
          puVar7[uVar9 + 2] = *(undefined1 *)(lVar13 + 2 + uVar9);
          puVar7[uVar9 + 3] = *(undefined1 *)(lVar13 + 3 + uVar9);
          uVar9 = uVar9 + 4;
        } while (uVar8 != uVar9);
      }
    }
LAB_10008d4f:
    puVar7[uVar8] = 0;
    recovered_10008140(lVar13);
    *param_1 = (long)puVar7;
    param_1[2] = uVar5;
LAB_10008d70:
    if (param_3 == 0) goto LAB_10008c5e;
    uVar5 = (ulong)((uint)param_3 & 3);
    if (param_3 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        *(undefined1 *)(uVar8 + *param_1 + uVar14) = *(undefined1 *)(uVar8 + *param_1 + uVar12);
        *(undefined1 *)(uVar8 + *param_1 + 1 + uVar14) =
             *(undefined1 *)(uVar8 + *param_1 + uVar12 + 1);
        *(undefined1 *)(uVar8 + *param_1 + 2 + uVar14) =
             *(undefined1 *)(uVar8 + *param_1 + 2 + uVar12);
        *(undefined1 *)(uVar8 + *param_1 + uVar14 + 3) =
             *(undefined1 *)(uVar8 + *param_1 + 3 + uVar12);
        uVar8 = uVar8 + 4;
      } while ((param_3 & 0xfffffffffffffffc) != uVar8);
    }
    if (uVar5 != 0) {
      lVar15 = uVar14 + uVar8;
      lVar13 = (param_2 + uVar8) - (long)puVar6;
      do {
        *(undefined1 *)(*param_1 + lVar15) = *(undefined1 *)(*param_1 + lVar13);
        lVar15 = lVar15 + 1;
        lVar13 = lVar13 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    goto LAB_10008c5b;
  }
  uVar14 = param_1[1];
LAB_100089f3:
  uVar14 = uVar14 + param_3;
  if (uVar14 <= (ulong)param_1[2]) goto LAB_10008bb6;
  puVar6 = (undefined1 *)recovered_100080e0(uVar14 + 1);
  *puVar6 = 0;
  lVar13 = *param_1;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar12 = 0;
    if ((3 < uVar5) && (0x1f < (ulong)((long)puVar6 - lVar13))) {
      if (uVar5 < 0x20) {
        uVar8 = 0;
      }
      else {
        uVar12 = uVar5 & 0xffffffffffffffe0;
        uVar8 = 0;
        do {
          uVar2 = ((undefined8 *)(lVar13 + uVar8))[1];
          puVar1 = (undefined8 *)(lVar13 + 0x10 + uVar8);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + uVar8) = *(undefined8 *)(lVar13 + uVar8);
          *(undefined8 *)((long)(puVar6 + uVar8) + 8) = uVar2;
          *(undefined8 *)(puVar6 + uVar8 + 0x10) = uVar3;
          *(undefined8 *)((long)(puVar6 + uVar8 + 0x10) + 8) = uVar4;
          uVar8 = uVar8 + 0x20;
        } while (uVar12 != uVar8);
        if (uVar5 == uVar12) goto LAB_10008b9f;
        uVar8 = uVar12;
        if ((uVar5 & 0x1c) == 0) goto LAB_10008b35;
      }
      uVar12 = uVar5 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar6 + uVar8) = *(undefined4 *)(lVar13 + uVar8);
        uVar8 = uVar8 + 4;
      } while (uVar12 != uVar8);
      if (uVar5 == uVar12) goto LAB_10008b9f;
    }
LAB_10008b35:
    uVar10 = uVar5 & 3;
    uVar8 = uVar12;
    if (uVar10 != 0) {
      do {
        puVar6[uVar8] = *(undefined1 *)(lVar13 + uVar8);
        uVar8 = uVar8 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar12 - uVar5 < 0xfffffffffffffffd) {
      do {
        puVar6[uVar8] = *(undefined1 *)(lVar13 + uVar8);
        puVar6[uVar8 + 1] = *(undefined1 *)(lVar13 + 1 + uVar8);
        puVar6[uVar8 + 2] = *(undefined1 *)(lVar13 + 2 + uVar8);
        puVar6[uVar8 + 3] = *(undefined1 *)(lVar13 + 3 + uVar8);
        uVar8 = uVar8 + 4;
      } while (uVar5 != uVar8);
    }
  }
LAB_10008b9f:
  puVar6[uVar5] = 0;
  recovered_10008140(lVar13);
  *param_1 = (long)puVar6;
  param_1[2] = uVar14;
LAB_10008bb6:
  uVar14 = (ulong)((uint)param_3 & 3);
  if (param_3 - 1 < 3) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      *(undefined1 *)(uVar5 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar5);
      *(undefined1 *)(uVar5 + 1 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 1 + uVar5);
      *(undefined1 *)(uVar5 + 2 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 2 + uVar5);
      *(undefined1 *)(uVar5 + 3 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 3 + uVar5);
      uVar5 = uVar5 + 4;
    } while ((param_3 & 0xfffffffffffffffc) != uVar5);
  }
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined1 *)(uVar5 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar5);
    uVar5 = uVar5 + 1;
  }
LAB_10008c5b:
  puVar7 = (undefined1 *)*param_1;
LAB_10008c5e:
  lVar13 = param_3 + param_1[1];
  param_1[1] = lVar13;
  puVar7[lVar13] = 0;
  return param_1;
code_r0x100089e5:
  uVar5 = uVar5 + 1;
  if (uVar14 < uVar5) goto LAB_100089f3;
  goto LAB_100089e0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f8c0
 */

long recovered_1000f8c0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;

  lVar6 = *param_1;
  bVar17 = lVar6 == 0;
  if (bVar17) {
    uVar11 = param_1[1];
  }
  else {
    uVar11 = param_2 - lVar6;
  }
  uVar16 = (long)param_3 - (long)param_4;
  if (param_3 == param_4) goto LAB_1000fb7d;
  uVar15 = (long)param_4 - (long)param_3;
  uVar13 = param_1[1];
  uVar7 = param_1[2];
  if (uVar7 < uVar13 + uVar15) {
    uVar9 = 4;
    if (uVar7 != 0) {
      uVar9 = uVar7;
    }
    do {
      uVar7 = uVar9;
      uVar9 = uVar7 * 2;
    } while (uVar7 < uVar13 + uVar15);
    lVar6 = recovered_100080e0(uVar7);
    pvVar2 = (void *)*param_1;
    uVar13 = param_1[1];
    if (uVar13 != 0) {
      uVar9 = 0;
      if ((3 < uVar13) && (0x1f < (ulong)(lVar6 - (long)pvVar2))) {
        if (uVar13 < 0x20) {
          uVar10 = 0;
        }
        else {
          uVar9 = uVar13 & 0xffffffffffffffe0;
          uVar10 = 0;
          do {
            uVar3 = ((undefined8 *)((long)pvVar2 + uVar10))[1];
            puVar1 = (undefined8 *)((long)pvVar2 + uVar10 + 0x10);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            *(undefined8 *)(lVar6 + uVar10) = *(undefined8 *)((long)pvVar2 + uVar10);
            ((undefined8 *)(lVar6 + uVar10))[1] = uVar3;
            puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            uVar10 = uVar10 + 0x20;
          } while (uVar9 != uVar10);
          if (uVar13 == uVar9) goto LAB_1000fa3f;
          uVar10 = uVar9;
          if ((uVar13 & 0x1c) == 0) goto LAB_1000f9d5;
        }
        uVar9 = uVar13 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(lVar6 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
        if (uVar13 == uVar9) goto LAB_1000fa3f;
      }
LAB_1000f9d5:
      uVar12 = uVar13 & 3;
      uVar10 = uVar9;
      if (uVar12 != 0) {
        do {
          *(undefined1 *)(lVar6 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar9 - uVar13 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(lVar6 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10);
          *(undefined1 *)(lVar6 + 1 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10 + 1);
          *(undefined1 *)(lVar6 + 2 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10 + 2);
          *(undefined1 *)(lVar6 + 3 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10 + 3);
          uVar10 = uVar10 + 4;
        } while (uVar13 != uVar10);
      }
    }
LAB_1000fa3f:
    recovered_10008140(pvVar2);
    *param_1 = lVar6;
    param_1[2] = uVar7;
    uVar13 = param_1[1];
  }
  if (uVar11 < uVar13) {
    uVar14 = (int)uVar13 - (int)uVar11 & 3;
    uVar9 = (ulong)uVar14;
    uVar7 = uVar13;
    if (uVar14 != 0) {
      do {
        *(undefined1 *)(uVar15 + uVar7 + *param_1 + -1) = *(undefined1 *)((uVar7 - 1) + *param_1);
        uVar7 = uVar7 - 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (uVar11 - uVar13 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((uVar15 - 1) + *param_1 + uVar7) = *(undefined1 *)(*param_1 + -1 + uVar7);
        *(undefined1 *)((uVar15 - 2) + *param_1 + uVar7) = *(undefined1 *)(*param_1 + -2 + uVar7);
        *(undefined1 *)((uVar15 - 3) + *param_1 + uVar7) = *(undefined1 *)(*param_1 + -3 + uVar7);
        *(undefined1 *)(uVar15 + uVar7 + *param_1 + -4) = *(undefined1 *)((uVar7 - 4) + *param_1);
        uVar7 = uVar7 - 4;
      } while (uVar11 < uVar7);
    }
  }
  uVar7 = uVar11;
  for (uVar13 = uVar15 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined1 *)(*param_1 + uVar7) = *param_3;
    param_3 = param_3 + 1;
    uVar7 = uVar7 + 1;
  }
  if (uVar16 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)(*param_1 + uVar7) = *param_3;
      *(undefined1 *)(*param_1 + 1 + uVar7) = param_3[1];
      *(undefined1 *)(*param_1 + 2 + uVar7) = param_3[2];
      *(undefined1 *)(*param_1 + 3 + uVar7) = param_3[3];
      param_3 = param_3 + 4;
      uVar7 = uVar7 + 4;
    } while (param_3 != param_4);
  }
  param_1[1] = param_1[1] + uVar15;
  lVar6 = *param_1;
  bVar17 = lVar6 == 0;
LAB_1000fb7d:
  lVar8 = 0;
  if (!bVar17) {
    lVar8 = lVar6 + uVar11;
  }
  return lVar8;
}


#undef DAT_10011378
#define DAT_10011378 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17a4U)))
#undef DAT_10011380
#define DAT_10011380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17acU)))
#undef DAT_10011388
#define DAT_10011388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fba0
 */

void recovered_1000fba0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10011378 = 0;
  DAT_10011380 = 0;
  DAT_10011388 = 0;
  recovered_100083c0();
  return;
}

#undef DAT_10011378
#undef DAT_10011380
#undef DAT_10011388
