/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000b0f0
#define DAT_1000b0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1192U)))
#undef DAT_1000b0f1
#define DAT_1000b0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1193U)))
#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004c0
 */

/* WARNING: Removing unreachable block (ram,0x100004fc) */

void recovered_100004c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000b0f0 = 0;
    DAT_1000b0f1 = 0;
    recovered_10000520();
    DAT_1000b100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b0f0
#undef DAT_1000b0f1
#undef DAT_1000b100

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
#undef DAT_1000b0f0
#define DAT_1000b0f0 (*(char *)(((uintptr_t)pf_module_state + 0x1192U)))
#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x119aU)))
#undef DAT_1000b108
#define DAT_1000b108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11aaU)))
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
 * Address: 0x10000520
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000520(void)

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
  if (DAT_1000b0f0 != '\0') {
    return;
  }
  DAT_1000b0f8 = 0;
  DAT_1000b108 = 0;
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
                if (*puVar2 <= uVar6) goto LAB_100005b3;
                puVar2[2] = *puVar2;
                puVar2[3] = puVar2[1];
                puVar2 = puVar2 + -2;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            uVar7 = 0;
LAB_100005b3:
            local_438[uVar7 * 2 + 2] = uVar6;
            local_438[uVar7 * 2 + 3] = uVar5 - uVar6;
            uVar8 = uVar8 + 1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
LAB_100006fe:
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
        if (lVar11 == 0) goto LAB_100007c2;
      }
      puVar2 = local_438 + 3;
      do {
        local_438[1] = 0x100007af;
        recovered_100064b0((long *)puVar2[-1],*puVar2,&local_28);
        puVar2 = puVar2 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      if (DAT_1000b0f8 != 0) goto LAB_100007f9;
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
              if (*puVar2 <= uVar6) goto LAB_10000675;
              puVar2[2] = *puVar2;
              puVar2[3] = puVar2[1];
              puVar2 = puVar2 + -2;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar7 = 0;
LAB_10000675:
          local_438[uVar7 * 2 + 2] = uVar6;
          local_438[uVar7 * 2 + 3] = uVar5 - uVar6;
          uVar8 = uVar8 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
    goto LAB_100006fe;
  }
LAB_100007c2:
  uVar3 = _DAT_00280088 & 0xfffffff0;
  if (_DAT_00280088 < 0x300001) {
    uVar3 = 0x4000000;
  }
  uVar1 = (ulong)uVar3;
  if (uVar3 < 0x300031) {
    uVar1 = 0x4000000;
  }
  local_438[1] = 0x100007f9;
  recovered_100064b0((long *)0x300000,uVar1 - 0x300000,&local_28);
LAB_100007f9:
  if (DAT_1000b108 == 0) {
    DAT_1000b108 = DAT_1000b0f8;
  }
  DAT_1000b0f0 = 1;
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
#undef DAT_1000b0f0
#undef DAT_1000b0f8
#undef DAT_1000b108
#undef _DAT_00280088
#undef _DAT_0028008c
#undef _DAT_00280238
#undef _DAT_0028023c
#undef local_438
#undef local_28

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000830
 */

/* WARNING: Removing unreachable block (ram,0x1000086c) */

void recovered_10000830(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000880(param_1,param_2,param_3);
    DAT_1000b100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b100

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000b0f1
#define DAT_1000b0f1 (*(char *)(((uintptr_t)pf_module_state + 0x1193U)))
#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x119aU)))
#undef DAT_1000b108
#define DAT_1000b108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x11aaU)))
#define local_38 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000880
 */

bool recovered_10000880(long param_1,long param_2,long param_3)

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
  if ((bVar3) || (DAT_1000b0f1 != '\0')) {
    return false;
  }
  DAT_1000b0f1 = 1;
  recovered_10000520();
  lVar4 = 0;
  do {
    plVar1 = *(long **)(param_1 + lVar4 * 8);
    uVar7 = *(ulong *)(param_2 + lVar4 * 8);
    plVar6 = (long *)((long)plVar1 + uVar7);
    if (CARRY8((ulong)plVar1,uVar7)) {
      plVar6 = (long *)0xffffffffffffffff;
    }
    if (~(ulong)plVar1 < uVar7) {
      DAT_1000b0f1 = 0;
      return false;
    }
    if (plVar6 <= plVar1) {
      DAT_1000b0f1 = 0;
      return false;
    }
    if (plVar1 < (long *)0x10000000 && (long *)0x8000000 < plVar6) {
      if (plVar1 < (long *)0x8000000) {
        uVar7 = 0x8000000 - (long)plVar1;
        if (~(ulong)plVar1 < uVar7) {
          DAT_1000b0f1 = 0;
          return false;
        }
        uVar10 = (ulong)((int)plVar1 + 0xfU & 0xffffff0) - (long)plVar1;
        uVar8 = uVar7 - uVar10;
        if (uVar7 < uVar10 || uVar8 == 0) goto LAB_1000098d;
        bVar3 = 0x30 < (uVar8 & 0xfffffffffffffff0);
      }
      else {
LAB_1000098d:
        bVar3 = false;
      }
      if ((plVar6 < &DAT_10000001 ||
           0xffffffffffffffce < ((ulong)plVar6 & 0xfffffffffffffff0) - 0x10000031) && (!bVar3)) {
        DAT_1000b0f1 = 0;
        return false;
      }
    }
    else {
      if ((long *)0xfffffffffffffff0 < plVar1) {
        DAT_1000b0f1 = 0;
        return false;
      }
      uVar10 = ((ulong)((long)plVar1 + 0xf) & 0xfffffffffffffff0) - (long)plVar1;
      uVar8 = uVar7 - uVar10;
      if (uVar7 < uVar10 || uVar8 == 0) {
        DAT_1000b0f1 = 0;
        return false;
      }
      if ((uVar8 & 0xfffffffffffffff0) < 0x31) {
        DAT_1000b0f1 = 0;
        return false;
      }
    }
    plVar2 = DAT_1000b0f8;
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
          DAT_1000b0f1 = 0;
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
        DAT_1000b0f1 = 0;
        return false;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == param_3) {
      puVar5 = (ulong *)&DAT_1000b0f8;
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        uVar7 = *puVar5;
        puVar5 = (ulong *)(uVar7 + 8);
      } while (uVar7 != 0);
      lVar4 = 0;
      local_38 = uVar8;
      do {
        recovered_100064b0(*(long **)(param_1 + lVar4 * 8),*(ulong *)(param_2 + lVar4 * 8),&local_38
                          );
        lVar4 = lVar4 + 1;
      } while (param_3 != lVar4);
      if (DAT_1000b108 == (long *)0x0) {
        DAT_1000b108 = DAT_1000b0f8;
      }
      DAT_1000b0f1 = 0;
      return local_38 != uVar8;
    }
  } while( true );
}

#undef DAT_10000001
#undef DAT_1000b0f1
#undef DAT_1000b0f8
#undef DAT_1000b108
#undef local_38

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
#define local_18 (*(undefined8 *)(pf_stack_frame + 24))
#define local_10 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ac0
 */

/* WARNING: Removing unreachable block (ram,0x10000afc) */

void recovered_10000ac0(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    local_18 = param_1;
    local_10 = param_2;
    recovered_10000880((long)&local_18,(long)&local_10,1);
    DAT_1000b100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b100
#undef local_18
#undef local_10

#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x119aU)))
#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b20
 */

/* WARNING: Removing unreachable block (ram,0x10000b5c) */

ulong recovered_10000b20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000520();
  uVar4 = 0;
  for (plVar2 = DAT_1000b0f8; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      uVar4 = uVar4 + *plVar2;
    }
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_1000b100 = 0;
  return uVar3;
}

#undef DAT_1000b0f8
#undef DAT_1000b100

#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x119aU)))
#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ba0
 */

/* WARNING: Removing unreachable block (ram,0x10000bdc) */

long recovered_10000ba0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  long *plVar3;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000520();
  lVar2 = 0;
  for (plVar3 = DAT_1000b0f8; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    if ((char)plVar3[3] == '\x01') {
      lVar2 = lVar2 + *plVar3;
    }
  }
  DAT_1000b100 = 0;
  return lVar2;
}

#undef DAT_1000b0f8
#undef DAT_1000b100

#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x119aU)))
#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c10
 */

/* WARNING: Removing unreachable block (ram,0x10000c4c) */

ulong recovered_10000c10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;

  iVar2 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000520();
  uVar4 = 0;
  for (plVar1 = DAT_1000b0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar4 = uVar4 + *plVar1;
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_1000b100 = 0;
  return uVar3;
}

#undef DAT_1000b0f8
#undef DAT_1000b100

#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x119aU)))
#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca0
 */

/* WARNING: Removing unreachable block (ram,0x10000cdc) */

long recovered_10000ca0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  long lVar3;

  iVar2 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000520();
  lVar3 = 0;
  for (plVar1 = DAT_1000b0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar3 = lVar3 + *plVar1;
  }
  DAT_1000b100 = 0;
  return lVar3;
}

#undef DAT_1000b0f8
#undef DAT_1000b100

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d20
 */

/* WARNING: Removing unreachable block (ram,0x10000d5c) */

void recovered_10000d20(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000d80(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1000b100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b100

#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x119aU)))
#undef DAT_1000b108
#define DAT_1000b108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x11aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d80
 */

ulong * recovered_10000d80(long param_1,ulong *param_2,ulong *param_3)

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
    recovered_10000520();
    puVar1 = DAT_1000b0f8;
    puVar5 = DAT_1000b108;
    if (DAT_1000b108 == (ulong *)0x0) {
      puVar5 = DAT_1000b0f8;
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
                if (uVar10 < uVar7) goto LAB_10000e48;
              }
            }
            else {
              uVar10 = 0;
LAB_10000e48:
              if ((uVar9 - 1 <= (ulong)((long)param_3 - (long)puVar4) && puVar4 <= param_3) &&
                 (uVar9 <= uVar7 - uVar10 && uVar10 <= uVar7)) {
                if (uVar9 - 1 < uVar7) {
                  if (uVar8 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000e8d;
                  }
                  else if (uVar11 < 0xffffffffffffffc0) {
LAB_10000e8d:
                    if (uVar10 == 0) goto LAB_10000ef8;
                    if ((uVar9 + uVar10) - 1 < uVar7) {
                      if (uVar7 - (uVar10 + uVar9) < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000edf;
                      }
                      else if (uVar10 + uVar9 < 0xffffffffffffffc0) {
LAB_10000edf:
                        puVar3 = recovered_10006670(puVar3,puVar4);
                        if (puVar3 == (ulong *)0x0) {
                          return (ulong *)0x0;
                        }
                        uVar7 = *puVar3;
                        uVar8 = uVar7 - uVar9;
LAB_10000ef8:
                        if (uVar7 < uVar9 || uVar8 < 0x30) {
                          DAT_1000b108 = (ulong *)puVar3[1];
                        }
                        else {
                          DAT_1000b108 = (ulong *)((long)puVar3 + uVar9 + 0x20);
                          *(ulong *)((long)puVar3 + uVar9 + 0x20) = uVar8 - 0x20;
                          uVar11 = puVar3[1];
                          *(ulong *)((long)puVar3 + uVar9 + 0x28) = uVar11;
                          *(ulong **)((long)puVar3 + uVar9 + 0x30) = puVar3;
                          *(undefined1 *)((long)puVar3 + uVar9 + 0x38) = 1;
                          if (uVar11 != 0) {
                            *(ulong **)(uVar11 + 0x10) = DAT_1000b108;
                          }
                          *puVar3 = uVar9;
                          puVar3[1] = (ulong)DAT_1000b108;
                        }
                        *(undefined1 *)(puVar3 + 3) = 0;
                        if (DAT_1000b108 == (ulong *)0x0) {
                          DAT_1000b108 = DAT_1000b0f8;
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

#undef DAT_1000b0f8
#undef DAT_1000b108

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f80
 */

/* WARNING: Removing unreachable block (ram,0x10000fbc) */

void recovered_10000f80(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000d80(param_1,(ulong *)0x0,param_2);
    DAT_1000b100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b100

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe0
 */

/* WARNING: Removing unreachable block (ram,0x1000101c) */

ulong * recovered_10000fe0(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_3 < param_2) {
    puVar2 = (ulong *)0x0;
  }
  else {
    puVar2 = recovered_10000d80(param_1,param_2,param_3);
  }
  DAT_1000b100 = 0;
  return puVar2;
}

#undef DAT_1000b100

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001040
 */

/* WARNING: Removing unreachable block (ram,0x1000107c) */

void recovered_10001040(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001090(param_1);
    DAT_1000b100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b100

#undef DAT_1000b108
#define DAT_1000b108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x11aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001090
 */

void recovered_10001090(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;

  if (param_1 != 0) {
    recovered_10000520();
    puVar2 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    puVar3 = *(ulong **)(param_1 + -0x18);
    if ((puVar3 != (ulong *)0x0) && ((char)puVar3[3] == '\x01')) {
      uVar4 = *puVar2;
      while (((uVar4 < 0xffffffffffffffe0 && ((ulong *)(param_1 + uVar4) == puVar3)) &&
             (*puVar3 <= -uVar4 - 0x21))) {
        if (DAT_1000b108 == puVar3) {
          DAT_1000b108 = puVar2;
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
          if (DAT_1000b108 == puVar2) {
            DAT_1000b108 = puVar3;
          }
          puVar1[2] = (ulong)puVar3;
          puVar2 = puVar1;
        } while ((char)puVar1[3] != '\0');
      }
      puVar2 = puVar3;
    }
    DAT_1000b108 = puVar2;
  }
  return;
}

#undef DAT_1000b108

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x11a2U)))
#undef DAT_1000b108
#define DAT_1000b108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x11aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011b0
 */

/* WARNING: Removing unreachable block (ram,0x100011ec) */

ulong * recovered_100011b0(ulong *param_1,ulong param_2)

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

  iVar7 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar7 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (ulong *)0x0) {
    puVar16 = recovered_10000d80(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1000b100 = 0;
    return puVar16;
  }
  if (param_2 == 0) {
    recovered_10001090((long)param_1);
    DAT_1000b100 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_1000b100 = 0;
    return (ulong *)0x0;
  }
  recovered_10000520();
  uVar12 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar16 = param_1 + -4;
  uVar11 = param_1[-4];
  if (uVar12 <= uVar11) {
    if (uVar11 <= uVar12 - 1) {
      DAT_1000b100 = 0;
      return (ulong *)0x0;
    }
    if (uVar11 - uVar12 < 0x30) {
      if (uVar11 < 0xffffffffffffffe0) {
        DAT_1000b100 = 0;
        return param_1;
      }
      DAT_1000b100 = 0;
      return (ulong *)0x0;
    }
    if (0xffffffffffffffb0 < param_2) {
      DAT_1000b100 = 0;
      return (ulong *)0x0;
    }
    DAT_1000b108 = (ulong *)((long)param_1 + uVar12);
    *(ulong *)((long)param_1 + uVar12) = (uVar11 - uVar12) - 0x20;
    uVar11 = param_1[-3];
    *(ulong *)((long)param_1 + uVar12 + 8) = uVar11;
    *(ulong **)((long)param_1 + uVar12 + 0x10) = puVar16;
    *(undefined1 *)((long)param_1 + uVar12 + 0x18) = 1;
    if (uVar11 != 0) {
      *(ulong **)(uVar11 + 0x10) = DAT_1000b108;
    }
    param_1[-4] = uVar12;
    param_1[-3] = (ulong)DAT_1000b108;
    DAT_1000b100 = 0;
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
      if (uVar13 < 0xffffffffffffffe0) goto LAB_10001384;
    }
    else if (param_2 < 0xffffffffffffffb1) {
LAB_10001384:
      puVar8 = (ulong *)param_1[-3];
      puVar14 = DAT_1000b108;
      do {
        if (((puVar8 == (ulong *)0x0) || ((char)puVar8[3] != '\x01')) ||
           ((0xffffffffffffffdf < uVar11 ||
            (((ulong *)((long)param_1 + uVar11) != puVar8 || (-uVar11 - 0x21 < *puVar8)))))) break;
        if (puVar14 == puVar8) {
          puVar14 = puVar16;
          DAT_1000b108 = puVar16;
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
        DAT_1000b100 = 0;
        return (ulong *)0x0;
      }
      uVar9 = recovered_100066e0(puVar16,uVar12);
      if ((char)uVar9 != '\0') {
        DAT_1000b108 = (ulong *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1000b100 = 0;
      return param_1;
    }
  }
  puVar8 = recovered_10000d80(uVar12,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  if (puVar8 == (ulong *)0x0) {
    DAT_1000b100 = 0;
    return (ulong *)0x0;
  }
  if (*puVar16 < uVar12) {
    uVar12 = *puVar16;
  }
  puVar16 = param_1;
  puVar14 = puVar8;
  if (uVar12 < 0x10) {
LAB_10001436:
    if (uVar12 == 0) goto LAB_100016ef;
  }
  else if ((((uint)puVar8 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)puVar8 & 7) == 0) {
      puVar15 = puVar8;
      puVar10 = param_1;
LAB_10001621:
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
                    goto LAB_10001621;
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
        if (uVar11 == uVar17) goto LAB_10001436;
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
    goto LAB_10001436;
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
      if (uVar12 == uVar17) goto LAB_100016ef;
      if ((uVar12 & 0x1c) == 0) {
        puVar16 = (ulong *)((long)puVar16 + uVar17);
        puVar15 = (ulong *)((long)puVar14 + uVar17);
        uVar11 = (ulong)((uint)uVar12 & 0x1f);
        goto LAB_10001644;
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
    if (uVar12 == uVar13) goto LAB_100016ef;
  }
LAB_10001644:
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
LAB_100016ef:
  recovered_10001090((long)param_1);
  DAT_1000b100 = 0;
  return puVar8;
}

#undef DAT_1000b100
#undef DAT_1000b108

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001860
 */

ulong recovered_10001860(ulong param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a0
 */

ulong recovered_100018a0(ulong param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e0
 */

long recovered_100018e0(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001930
 */

ulong recovered_10001930(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019d0
 */

long recovered_100019d0(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a40
 */

ulong recovered_10001a40(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b10
 */

long recovered_10001b10(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ba0
 */

void recovered_10001ba0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bc0
 */

int recovered_10001bc0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bd0
 */

undefined8 recovered_10001bd0(ulong in_RDI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x4f < uVar2)) {
    uVar2 = UINT_0028084c;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*(code *)(ulong)uVar2)(in_RDI);
      return pvVar3;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028084c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c20
 */

void recovered_10001c20(void *in_RDI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001c61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(in_RDI);
      return;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c70
 */

undefined8 recovered_10001c70(void *in_RDI,ulong in_RSI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x57 < uVar2)) {
    uVar2 = UINT_00280854;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*(code *)(ulong)uVar2)(in_RDI,in_RSI);
      return pvVar3;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

void recovered_10001cc0(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined7 uVar7;
  ulong uVar8;
  ulong uVar9;

  if (param_3 < 0x10) {
LAB_10001cdf:
    if (param_3 == 0) {
      return;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)param_1 & 7) == 0) {
LAB_10001ece:
      puVar6 = param_1;
    }
    else {
      puVar6 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      uVar5 = param_3 - 1;
      uVar7 = (undefined7)((ulong)param_5 >> 8);
      param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
      if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
        param_2 = (undefined8 *)((long)param_2 + 1);
        param_3 = uVar5;
      }
      else {
        puVar6 = (undefined8 *)((long)param_1 + 2);
        *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
        uVar5 = param_3 - 2;
        param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
        if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
          param_2 = (undefined8 *)((long)param_2 + 2);
          param_3 = uVar5;
        }
        else {
          puVar6 = (undefined8 *)((long)param_1 + 3);
          *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
          uVar5 = param_3 - 3;
          param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
          if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
            param_2 = (undefined8 *)((long)param_2 + 3);
            param_3 = uVar5;
          }
          else {
            puVar6 = (undefined8 *)((long)param_1 + 4);
            *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
            uVar5 = param_3 - 4;
            param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
            if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
              param_2 = (undefined8 *)((long)param_2 + 4);
              param_3 = uVar5;
            }
            else {
              puVar6 = (undefined8 *)((long)param_1 + 5);
              *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)((long)param_2 + 4);
              uVar5 = param_3 - 5;
              param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
              if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
                param_2 = (undefined8 *)((long)param_2 + 5);
                param_3 = uVar5;
              }
              else {
                puVar6 = (undefined8 *)((long)param_1 + 6);
                *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
                uVar5 = param_3 - 6;
                param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
                if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
                  param_2 = (undefined8 *)((long)param_2 + 6);
                  param_3 = uVar5;
                }
                else {
                  puVar6 = (undefined8 *)((long)param_1 + 7);
                  *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)((long)param_2 + 6);
                  uVar5 = param_3 - 7;
                  param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
                  if (((ulong)puVar6 & 7) != 0 && uVar5 != 0) {
                    puVar1 = (undefined1 *)((long)param_2 + 7);
                    param_2 = param_2 + 1;
                    *(undefined1 *)((long)param_1 + 7) = *puVar1;
                    param_3 = param_3 - 8;
                    param_1 = param_1 + 1;
                    goto LAB_10001ece;
                  }
                  param_2 = (undefined8 *)((long)param_2 + 7);
                  param_3 = uVar5;
                }
              }
            }
          }
        }
      }
    }
    if (param_3 < 0x20) {
      param_5 = param_2;
    }
    else {
      uVar5 = param_3 - 0x20;
      uVar8 = param_3;
      if ((uVar5 & 0x20) == 0) {
        *puVar6 = *param_2;
        puVar6[1] = param_2[1];
        puVar6[2] = param_2[2];
        puVar6[3] = param_2[3];
        puVar6 = puVar6 + 4;
        param_2 = param_2 + 4;
        uVar8 = uVar5;
        param_5 = param_2;
      }
      param_3 = uVar5;
      if (0x1f < uVar5) {
        do {
          *puVar6 = *param_2;
          puVar6[1] = param_2[1];
          puVar6[2] = param_2[2];
          puVar6[3] = param_2[3];
          puVar6[4] = param_2[4];
          puVar6[5] = param_2[5];
          puVar6[6] = param_2[6];
          puVar6[7] = param_2[7];
          puVar6 = puVar6 + 8;
          param_2 = param_2 + 8;
          uVar8 = uVar8 - 0x40;
          param_3 = uVar8;
          param_5 = param_2;
        } while (0x1f < uVar8);
      }
    }
    if (param_3 < 8) {
      param_2 = param_5;
      param_1 = puVar6;
    }
    else {
      if ((0x27 < param_3 - 8) && (0x1f < (ulong)((long)puVar6 - (long)param_5))) {
        uVar5 = (param_3 - 8 >> 3) + 1;
        uVar8 = uVar5 & 0xfffffffffffffffc;
        param_2 = param_5 + uVar8;
        param_1 = puVar6 + uVar8;
        param_3 = param_3 + uVar8 * -8;
        uVar9 = 0;
        do {
          uVar2 = (param_5 + uVar9)[1];
          uVar3 = param_5[uVar9 + 2];
          uVar4 = (param_5 + uVar9 + 2)[1];
          puVar6[uVar9] = param_5[uVar9];
          (puVar6 + uVar9)[1] = uVar2;
          puVar6[uVar9 + 2] = uVar3;
          (puVar6 + uVar9 + 2)[1] = uVar4;
          uVar9 = uVar9 + 4;
        } while (uVar8 != uVar9);
        param_5 = param_2;
        puVar6 = param_1;
        if (uVar5 == uVar8) goto LAB_10001cdf;
      }
      do {
        param_2 = param_5 + 1;
        *puVar6 = *param_5;
        param_1 = puVar6 + 1;
        param_3 = param_3 - 8;
        param_5 = param_2;
        puVar6 = param_1;
      } while (7 < param_3);
    }
    goto LAB_10001cdf;
  }
  uVar5 = param_3;
  if ((3 < param_3) && (0x1f < (ulong)((long)param_1 - (long)param_2))) {
    if (param_3 < 0x20) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_3 & 0xffffffffffffffe0;
      uVar5 = 0;
      do {
        uVar2 = ((undefined8 *)((long)param_2 + uVar5))[1];
        puVar6 = (undefined8 *)((long)param_2 + uVar5 + 0x10);
        uVar3 = *puVar6;
        uVar4 = puVar6[1];
        *(undefined8 *)((long)param_1 + uVar5) = *(undefined8 *)((long)param_2 + uVar5);
        ((undefined8 *)((long)param_1 + uVar5))[1] = uVar2;
        puVar6 = (undefined8 *)((long)param_1 + uVar5 + 0x10);
        *puVar6 = uVar3;
        puVar6[1] = uVar4;
        uVar5 = uVar5 + 0x20;
      } while (uVar8 != uVar5);
      if (param_3 == uVar8) {
        return;
      }
      if ((param_3 & 0x1c) == 0) {
        param_2 = (undefined8 *)((long)param_2 + uVar8);
        param_1 = (undefined8 *)((long)param_1 + uVar8);
        uVar5 = (ulong)((uint)param_3 & 0x1f);
        goto LAB_10001ef0;
      }
    }
    uVar9 = param_3 & 0xfffffffffffffffc;
    uVar5 = (ulong)((uint)param_3 & 3);
    do {
      *(undefined4 *)((long)param_1 + uVar8) = *(undefined4 *)((long)param_2 + uVar8);
      uVar8 = uVar8 + 4;
    } while (uVar9 != uVar8);
    param_1 = (undefined8 *)((long)param_1 + uVar9);
    param_2 = (undefined8 *)((long)param_2 + uVar9);
    if (param_3 == uVar9) {
      return;
    }
  }
LAB_10001ef0:
  uVar8 = uVar5 - 1;
  if ((uVar5 & 7) != 0) {
    uVar9 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar9) = *(undefined1 *)((long)param_2 + uVar9);
      uVar9 = uVar9 + 1;
    } while ((uVar5 & 7) != uVar9);
    uVar5 = uVar5 - uVar9;
    param_1 = (undefined8 *)((long)param_1 + uVar9);
    param_2 = (undefined8 *)((long)param_2 + uVar9);
  }
  if (6 < uVar8) {
    uVar8 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar8) = *(undefined1 *)((long)param_2 + uVar8);
      *(undefined1 *)((long)param_1 + uVar8 + 1) = *(undefined1 *)((long)param_2 + uVar8 + 1);
      *(undefined1 *)((long)param_1 + uVar8 + 2) = *(undefined1 *)((long)param_2 + uVar8 + 2);
      *(undefined1 *)((long)param_1 + uVar8 + 3) = *(undefined1 *)((long)param_2 + uVar8 + 3);
      *(undefined1 *)((long)param_1 + uVar8 + 4) = *(undefined1 *)((long)param_2 + uVar8 + 4);
      *(undefined1 *)((long)param_1 + uVar8 + 5) = *(undefined1 *)((long)param_2 + uVar8 + 5);
      *(undefined1 *)((long)param_1 + uVar8 + 6) = *(undefined1 *)((long)param_2 + uVar8 + 6);
      *(undefined1 *)((long)param_1 + uVar8 + 7) = *(undefined1 *)((long)param_2 + uVar8 + 7);
      uVar8 = uVar8 + 8;
    } while (uVar5 != uVar8);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002100
 */

void recovered_10002100(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                       undefined8 *param_5,undefined1 *param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined7 uVar11;
  ulong uVar10;
  bool bVar12;
  undefined8 *in_R10;
  undefined7 uVar13;
  ulong uVar14;
  bool bVar15;

  if (param_3 == 0 || param_1 == param_2) {
    return;
  }
  if ((param_1 < param_2) || (puVar8 = (undefined8 *)((long)param_2 + param_3), puVar8 <= param_1))
  {
    if ((0xf < param_3) && ((((uint)param_2 ^ (uint)param_1) & 7) == 0)) {
      if (((ulong)param_1 & 7) == 0) {
LAB_1000249a:
        puVar8 = param_1;
      }
      else {
        puVar8 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar9 = param_3 - 1;
        uVar11 = (undefined7)((ulong)param_5 >> 8);
        param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
        if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
          param_2 = (undefined8 *)((long)param_2 + 1);
          param_3 = uVar9;
        }
        else {
          puVar8 = (undefined8 *)((long)param_1 + 2);
          *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
          uVar9 = param_3 - 2;
          param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
          if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
            param_2 = (undefined8 *)((long)param_2 + 2);
            param_3 = uVar9;
          }
          else {
            puVar8 = (undefined8 *)((long)param_1 + 3);
            *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
            uVar9 = param_3 - 3;
            param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
            if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
              param_2 = (undefined8 *)((long)param_2 + 3);
              param_3 = uVar9;
            }
            else {
              puVar8 = (undefined8 *)((long)param_1 + 4);
              *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
              uVar9 = param_3 - 4;
              param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
              if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
                param_2 = (undefined8 *)((long)param_2 + 4);
                param_3 = uVar9;
              }
              else {
                puVar8 = (undefined8 *)((long)param_1 + 5);
                *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)((long)param_2 + 4);
                uVar9 = param_3 - 5;
                param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
                if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
                  param_2 = (undefined8 *)((long)param_2 + 5);
                  param_3 = uVar9;
                }
                else {
                  puVar8 = (undefined8 *)((long)param_1 + 6);
                  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
                  uVar9 = param_3 - 6;
                  param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
                  if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
                    param_2 = (undefined8 *)((long)param_2 + 6);
                    param_3 = uVar9;
                  }
                  else {
                    puVar8 = (undefined8 *)((long)param_1 + 7);
                    *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)((long)param_2 + 6);
                    uVar9 = param_3 - 7;
                    param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
                    if (((ulong)puVar8 & 7) != 0 && uVar9 != 0) {
                      puVar6 = (undefined1 *)((long)param_2 + 7);
                      param_2 = param_2 + 1;
                      *(undefined1 *)((long)param_1 + 7) = *puVar6;
                      param_3 = param_3 - 8;
                      param_1 = param_1 + 1;
                      goto LAB_1000249a;
                    }
                    param_2 = (undefined8 *)((long)param_2 + 7);
                    param_3 = uVar9;
                  }
                }
              }
            }
          }
        }
      }
      if (param_3 < 0x20) {
        param_5 = param_2;
      }
      else {
        uVar9 = param_3 - 0x20;
        uVar10 = param_3;
        if ((uVar9 & 0x20) == 0) {
          *puVar8 = *param_2;
          puVar8[1] = param_2[1];
          puVar8[2] = param_2[2];
          puVar8[3] = param_2[3];
          puVar8 = puVar8 + 4;
          param_2 = param_2 + 4;
          uVar10 = uVar9;
          param_5 = param_2;
        }
        param_3 = uVar9;
        if (0x1f < uVar9) {
          param_3 = uVar10;
          do {
            *puVar8 = *param_2;
            puVar8[1] = param_2[1];
            puVar8[2] = param_2[2];
            puVar8[3] = param_2[3];
            puVar8[4] = param_2[4];
            puVar8[5] = param_2[5];
            puVar8[6] = param_2[6];
            puVar8[7] = param_2[7];
            puVar8 = puVar8 + 8;
            param_2 = param_2 + 8;
            param_3 = param_3 - 0x40;
            param_5 = param_2;
          } while (0x1f < param_3);
        }
      }
      if (param_3 < 8) {
        param_2 = param_5;
        param_1 = puVar8;
      }
      else {
        if ((0x27 < param_3 - 8) && (0x1f < (ulong)((long)puVar8 - (long)param_5))) {
          uVar9 = (param_3 - 8 >> 3) + 1;
          uVar10 = uVar9 & 0xfffffffffffffffc;
          param_2 = param_5 + uVar10;
          param_1 = puVar8 + uVar10;
          param_3 = param_3 + uVar10 * -8;
          uVar14 = 0;
          do {
            uVar1 = (param_5 + uVar14)[1];
            uVar2 = param_5[uVar14 + 2];
            uVar3 = (param_5 + uVar14 + 2)[1];
            puVar8[uVar14] = param_5[uVar14];
            (puVar8 + uVar14)[1] = uVar1;
            puVar8[uVar14 + 2] = uVar2;
            (puVar8 + uVar14 + 2)[1] = uVar3;
            uVar14 = uVar14 + 4;
          } while (uVar10 != uVar14);
          param_5 = param_2;
          puVar8 = param_1;
          if (uVar9 == uVar10) goto LAB_100026f8;
        }
        do {
          uVar1 = *param_5;
          param_5 = param_5 + 1;
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
          param_3 = param_3 - 8;
          param_2 = param_5;
          param_1 = puVar8;
        } while (7 < param_3);
      }
LAB_100026f8:
      if (param_3 == 0) {
        return;
      }
    }
    uVar9 = param_3;
    if ((3 < param_3) && (0x1f < (ulong)((long)param_1 - (long)param_2))) {
      if (param_3 < 0x20) {
        uVar10 = 0;
      }
      else {
        uVar10 = param_3 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar1 = ((undefined8 *)((long)param_2 + uVar9))[1];
          puVar8 = (undefined8 *)((long)param_2 + uVar9 + 0x10);
          uVar2 = *puVar8;
          uVar3 = puVar8[1];
          *(undefined8 *)((long)param_1 + uVar9) = *(undefined8 *)((long)param_2 + uVar9);
          ((undefined8 *)((long)param_1 + uVar9))[1] = uVar1;
          puVar8 = (undefined8 *)((long)param_1 + uVar9 + 0x10);
          *puVar8 = uVar2;
          puVar8[1] = uVar3;
          uVar9 = uVar9 + 0x20;
        } while (uVar10 != uVar9);
        if (param_3 == uVar10) {
          return;
        }
        if ((param_3 & 0x1c) == 0) {
          param_2 = (undefined8 *)((long)param_2 + uVar10);
          param_1 = (undefined8 *)((long)param_1 + uVar10);
          uVar9 = (ulong)((uint)param_3 & 0x1f);
          goto LAB_100024bc;
        }
      }
      uVar14 = param_3 & 0xfffffffffffffffc;
      uVar9 = (ulong)((uint)param_3 & 3);
      do {
        *(undefined4 *)((long)param_1 + uVar10) = *(undefined4 *)((long)param_2 + uVar10);
        uVar10 = uVar10 + 4;
      } while (uVar14 != uVar10);
      param_1 = (undefined8 *)((long)param_1 + uVar14);
      param_2 = (undefined8 *)((long)param_2 + uVar14);
      if (param_3 == uVar14) {
        return;
      }
    }
LAB_100024bc:
    uVar10 = uVar9 - 1;
    if ((uVar9 & 7) != 0) {
      uVar14 = 0;
      do {
        *(undefined1 *)((long)param_1 + uVar14) = *(undefined1 *)((long)param_2 + uVar14);
        uVar14 = uVar14 + 1;
      } while ((uVar9 & 7) != uVar14);
      uVar9 = uVar9 - uVar14;
      param_1 = (undefined8 *)((long)param_1 + uVar14);
      param_2 = (undefined8 *)((long)param_2 + uVar14);
    }
    if (uVar10 < 7) {
      return;
    }
    uVar10 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar10) = *(undefined1 *)((long)param_2 + uVar10);
      *(undefined1 *)((long)param_1 + uVar10 + 1) = *(undefined1 *)((long)param_2 + uVar10 + 1);
      *(undefined1 *)((long)param_1 + uVar10 + 2) = *(undefined1 *)((long)param_2 + uVar10 + 2);
      *(undefined1 *)((long)param_1 + uVar10 + 3) = *(undefined1 *)((long)param_2 + uVar10 + 3);
      *(undefined1 *)((long)param_1 + uVar10 + 4) = *(undefined1 *)((long)param_2 + uVar10 + 4);
      *(undefined1 *)((long)param_1 + uVar10 + 5) = *(undefined1 *)((long)param_2 + uVar10 + 5);
      *(undefined1 *)((long)param_1 + uVar10 + 6) = *(undefined1 *)((long)param_2 + uVar10 + 6);
      *(undefined1 *)((long)param_1 + uVar10 + 7) = *(undefined1 *)((long)param_2 + uVar10 + 7);
      uVar10 = uVar10 + 8;
    } while (uVar9 != uVar10);
    return;
  }
  puVar6 = (undefined1 *)((long)param_1 + param_3);
  if ((0xf < param_3) && ((((uint)puVar8 ^ (uint)puVar6) & 7) == 0)) {
    if (((ulong)puVar6 & 7) == 0) {
LAB_1000228e:
      puVar7 = puVar6;
    }
    else {
      puVar7 = puVar6 + -1;
      puVar6[-1] = *(undefined1 *)((long)puVar8 - 1);
      uVar9 = param_3 - 1;
      uVar11 = (undefined7)((ulong)param_6 >> 8);
      param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
      uVar13 = (undefined7)((ulong)in_R10 >> 8);
      bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
      in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
      if (bVar12) {
        puVar8 = (undefined8 *)((long)puVar8 - 1);
        param_3 = uVar9;
      }
      else {
        puVar7 = puVar6 + -2;
        puVar6[-2] = *(undefined1 *)((long)puVar8 - 2);
        uVar9 = param_3 - 2;
        param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
        bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
        in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
        if (bVar12) {
          puVar8 = (undefined8 *)((long)puVar8 - 2);
          param_3 = uVar9;
        }
        else {
          puVar7 = puVar6 + -3;
          puVar6[-3] = *(undefined1 *)((long)puVar8 - 3);
          uVar9 = param_3 - 3;
          param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
          bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
          in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
          if (bVar12) {
            puVar8 = (undefined8 *)((long)puVar8 - 3);
            param_3 = uVar9;
          }
          else {
            puVar7 = puVar6 + -4;
            puVar6[-4] = *(undefined1 *)((long)puVar8 - 4);
            uVar9 = param_3 - 4;
            param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
            bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
            in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
            if (bVar12) {
              puVar8 = (undefined8 *)((long)puVar8 - 4);
              param_3 = uVar9;
            }
            else {
              puVar7 = puVar6 + -5;
              puVar6[-5] = *(undefined1 *)((long)puVar8 - 5);
              uVar9 = param_3 - 5;
              param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
              bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
              in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
              if (bVar12) {
                puVar8 = (undefined8 *)((long)puVar8 - 5);
                param_3 = uVar9;
              }
              else {
                puVar7 = puVar6 + -6;
                puVar6[-6] = *(undefined1 *)((long)puVar8 - 6);
                uVar9 = param_3 - 6;
                param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
                bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
                in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
                if (bVar12) {
                  puVar8 = (undefined8 *)((long)puVar8 - 6);
                  param_3 = uVar9;
                }
                else {
                  puVar7 = puVar6 + -7;
                  puVar6[-7] = *(undefined1 *)((long)puVar8 - 7);
                  bVar12 = param_3 - 7 == 0;
                  param_6 = (undefined1 *)CONCAT71(uVar11,bVar12);
                  bVar15 = ((ulong)puVar7 & 7) == 0;
                  in_R10 = (undefined8 *)CONCAT71(uVar13,bVar15 || bVar12);
                  if (!bVar15 && !bVar12) {
                    puVar4 = puVar8 + -1;
                    puVar8 = puVar8 + -1;
                    puVar6[-8] = *(undefined1 *)puVar4;
                    puVar6 = puVar6 + -8;
                    param_3 = param_3 - 8;
                    goto LAB_1000228e;
                  }
                  puVar8 = (undefined8 *)((long)puVar8 - 7);
                  param_3 = param_3 - 7;
                }
              }
            }
          }
        }
      }
    }
    if (param_3 < 0x20) {
      in_R10 = puVar8;
    }
    else {
      uVar9 = param_3 - 0x20;
      puVar4 = puVar8;
      puVar6 = puVar7;
      uVar10 = param_3;
      if ((uVar9 & 0x20) == 0) {
        puVar6 = puVar7 + -0x20;
        puVar4 = puVar8 + -4;
        *(undefined8 *)(puVar7 + -8) = puVar8[-1];
        *(undefined8 *)(puVar7 + -0x10) = puVar8[-2];
        *(undefined8 *)(puVar7 + -0x18) = puVar8[-3];
        *(undefined8 *)(puVar7 + -0x20) = puVar8[-4];
        uVar10 = uVar9;
        param_6 = puVar6;
        in_R10 = puVar4;
      }
      puVar7 = param_6;
      param_3 = uVar9;
      if (0x1f < uVar9) {
        param_3 = uVar10;
        do {
          *(undefined8 *)(puVar6 + -8) = puVar4[-1];
          *(undefined8 *)(puVar6 + -0x10) = puVar4[-2];
          *(undefined8 *)(puVar6 + -0x18) = puVar4[-3];
          *(undefined8 *)(puVar6 + -0x20) = puVar4[-4];
          puVar7 = puVar6 + -0x40;
          in_R10 = puVar4 + -8;
          *(undefined8 *)(puVar6 + -0x28) = puVar4[-5];
          *(undefined8 *)(puVar6 + -0x30) = puVar4[-6];
          *(undefined8 *)(puVar6 + -0x38) = puVar4[-7];
          *(undefined8 *)(puVar6 + -0x40) = puVar4[-8];
          param_3 = param_3 - 0x40;
          puVar4 = in_R10;
          puVar6 = puVar7;
        } while (0x1f < param_3);
      }
    }
    if (param_3 < 8) {
      puVar8 = in_R10;
      puVar6 = puVar7;
    }
    else {
      if ((0x27 < param_3 - 8) && (0x1f < (ulong)((long)in_R10 - (long)puVar7))) {
        uVar9 = (param_3 - 8 >> 3) + 1;
        uVar10 = uVar9 & 0xfffffffffffffffc;
        puVar8 = in_R10 + -uVar10;
        puVar6 = puVar7 + uVar10 * -8;
        param_3 = param_3 + uVar10 * -8;
        lVar5 = 0;
        do {
          uVar1 = in_R10[lVar5 + -4];
          uVar2 = (in_R10 + lVar5 + -4)[1];
          uVar3 = (in_R10 + lVar5 + -2)[1];
          *(undefined8 *)(puVar7 + lVar5 * 8 + -0x10) = in_R10[lVar5 + -2];
          *(undefined8 *)((long)(puVar7 + lVar5 * 8 + -0x10) + 8) = uVar3;
          *(undefined8 *)(puVar7 + lVar5 * 8 + -0x20) = uVar1;
          *(undefined8 *)((long)(puVar7 + lVar5 * 8 + -0x20) + 8) = uVar2;
          lVar5 = lVar5 + -4;
        } while (-lVar5 != uVar10);
        in_R10 = puVar8;
        puVar7 = puVar6;
        if (uVar9 == uVar10) goto LAB_1000285a;
      }
      do {
        puVar8 = in_R10 + -1;
        in_R10 = in_R10 + -1;
        *(undefined8 *)(puVar7 + -8) = *puVar8;
        puVar7 = puVar7 + -8;
        param_3 = param_3 - 8;
        puVar8 = in_R10;
        puVar6 = puVar7;
      } while (7 < param_3);
    }
LAB_1000285a:
    if (param_3 == 0) {
      return;
    }
  }
  if ((3 < param_3) && (0xf < (ulong)((long)puVar8 - (long)puVar6))) {
    if (param_3 < 0x10) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_3 & 0xfffffffffffffff0;
      lVar5 = 0;
      do {
        puVar4 = (undefined8 *)((long)puVar8 + lVar5 + -0x10);
        uVar1 = puVar4[1];
        *(undefined8 *)(puVar6 + lVar5 + -0x10) = *puVar4;
        *(undefined8 *)((long)(puVar6 + lVar5 + -0x10) + 8) = uVar1;
        lVar5 = lVar5 + -0x10;
      } while (-lVar5 != uVar9);
      if (param_3 == uVar9) {
        return;
      }
      if ((param_3 & 0xc) == 0) {
        param_3 = (ulong)((uint)param_3 & 0xf);
        puVar6 = puVar6 + -uVar9;
        puVar8 = (undefined8 *)((long)puVar8 - uVar9);
        goto LAB_1000291f;
      }
    }
    uVar10 = param_3 & 0xfffffffffffffffc;
    lVar5 = -uVar9;
    do {
      *(undefined4 *)(puVar6 + lVar5 + -4) = *(undefined4 *)((long)puVar8 + lVar5 + -4);
      lVar5 = lVar5 + -4;
    } while (-lVar5 != uVar10);
    bVar12 = param_3 == uVar10;
    puVar8 = (undefined8 *)((long)puVar8 - uVar10);
    puVar6 = puVar6 + -uVar10;
    param_3 = (ulong)((uint)param_3 & 3);
    if (bVar12) {
      return;
    }
  }
LAB_1000291f:
  uVar9 = param_3 - 1;
  if ((param_3 & 7) != 0) {
    uVar10 = 0;
    do {
      puVar7 = (undefined1 *)((long)puVar8 - 1);
      puVar8 = (undefined8 *)((long)puVar8 - 1);
      puVar6[-1] = *puVar7;
      puVar6 = puVar6 + -1;
      uVar10 = uVar10 + 1;
    } while ((param_3 & 7) != uVar10);
    param_3 = param_3 - uVar10;
  }
  if (6 < uVar9) {
    lVar5 = 0;
    do {
      puVar6[lVar5 + -1] = *(undefined1 *)((long)puVar8 + lVar5 + -1);
      puVar6[lVar5 + -2] = *(undefined1 *)((long)puVar8 + lVar5 + -2);
      puVar6[lVar5 + -3] = *(undefined1 *)((long)puVar8 + lVar5 + -3);
      puVar6[lVar5 + -4] = *(undefined1 *)((long)puVar8 + lVar5 + -4);
      puVar6[lVar5 + -5] = *(undefined1 *)((long)puVar8 + lVar5 + -5);
      puVar6[lVar5 + -6] = *(undefined1 *)((long)puVar8 + lVar5 + -6);
      puVar6[lVar5 + -7] = *(undefined1 *)((long)puVar8 + lVar5 + -7);
      puVar6[lVar5 + -8] = *(undefined1 *)((long)puVar8 + lVar5 + -8);
      lVar5 = lVar5 + -8;
    } while (-lVar5 != param_3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c0
 */

void recovered_100029c0(byte *param_1,byte param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  uint128 auVar10;

  if (0xf < param_3) {
    iVar2 = (uint)param_2 * 0x1010101;
    if (((ulong)param_1 & 7) == 0) {
LAB_10002b0d:
      pbVar6 = param_1;
      uVar4 = param_3;
    }
    else {
      *param_1 = param_2;
      pbVar6 = param_1 + 1;
      uVar4 = param_3 - 1;
      if (((ulong)(param_1 + 1) & 7) != 0 && param_3 - 1 != 0) {
        param_1[1] = param_2;
        pbVar6 = param_1 + 2;
        uVar4 = param_3 - 2;
        if (((ulong)(param_1 + 2) & 7) != 0 && param_3 - 2 != 0) {
          param_1[2] = param_2;
          pbVar6 = param_1 + 3;
          uVar4 = param_3 - 3;
          if (((ulong)(param_1 + 3) & 7) != 0 && param_3 - 3 != 0) {
            param_1[3] = param_2;
            pbVar6 = param_1 + 4;
            uVar4 = param_3 - 4;
            if (((ulong)(param_1 + 4) & 7) != 0 && param_3 - 4 != 0) {
              param_1[4] = param_2;
              pbVar6 = param_1 + 5;
              uVar4 = param_3 - 5;
              if (((ulong)(param_1 + 5) & 7) != 0 && param_3 - 5 != 0) {
                param_1[5] = param_2;
                pbVar6 = param_1 + 6;
                uVar4 = param_3 - 6;
                if (((ulong)(param_1 + 6) & 7) != 0 && param_3 - 6 != 0) {
                  param_1[6] = param_2;
                  pbVar6 = param_1 + 7;
                  uVar4 = param_3 - 7;
                  if (((ulong)(param_1 + 7) & 7) != 0 && param_3 - 7 != 0) {
                    param_1[7] = param_2;
                    param_3 = param_3 - 8;
                    param_1 = param_1 + 8;
                    goto LAB_10002b0d;
                  }
                }
              }
            }
          }
        }
      }
    }
    param_3 = uVar4;
    uVar3 = CONCAT44(iVar2,iVar2);
    if (0x1f < param_3) {
      uVar4 = param_3 - 0x20;
      uVar5 = ((uint)(uVar4 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar5 == 0) {
        uVar7 = param_3;
        param_3 = 0;
      }
      else {
        uVar7 = 0;
        do {
          *(undefined8 *)(pbVar6 + uVar7) = uVar3;
          *(undefined8 *)(pbVar6 + uVar7 + 8) = uVar3;
          *(undefined8 *)(pbVar6 + uVar7 + 0x10) = uVar3;
          *(undefined8 *)(pbVar6 + uVar7 + 0x18) = uVar3;
          uVar7 = uVar7 + 0x20;
        } while (uVar5 << 5 != uVar7);
        pbVar6 = pbVar6 + uVar7;
        uVar7 = param_3 - uVar7;
        param_3 = uVar7;
      }
      if (0x5f < uVar4) {
        param_3 = uVar7;
        do {
          *(undefined8 *)pbVar6 = uVar3;
          *(undefined8 *)(pbVar6 + 8) = uVar3;
          *(undefined8 *)(pbVar6 + 0x10) = uVar3;
          *(undefined8 *)(pbVar6 + 0x18) = uVar3;
          *(undefined8 *)(pbVar6 + 0x20) = uVar3;
          *(undefined8 *)(pbVar6 + 0x28) = uVar3;
          *(undefined8 *)(pbVar6 + 0x30) = uVar3;
          *(undefined8 *)(pbVar6 + 0x38) = uVar3;
          *(undefined8 *)(pbVar6 + 0x40) = uVar3;
          *(undefined8 *)(pbVar6 + 0x48) = uVar3;
          *(undefined8 *)(pbVar6 + 0x50) = uVar3;
          *(undefined8 *)(pbVar6 + 0x58) = uVar3;
          *(undefined8 *)(pbVar6 + 0x60) = uVar3;
          *(undefined8 *)(pbVar6 + 0x68) = uVar3;
          *(undefined8 *)(pbVar6 + 0x70) = uVar3;
          *(undefined8 *)(pbVar6 + 0x78) = uVar3;
          pbVar6 = pbVar6 + 0x80;
          param_3 = param_3 - 0x80;
        } while (0x1f < param_3);
      }
    }
    param_1 = pbVar6;
    if (7 < param_3) {
      if (0x17 < param_3 - 8) {
        uVar4 = (param_3 - 8 >> 3) + 1;
        uVar7 = uVar4 & 0xfffffffffffffffc;
        param_1 = pbVar6 + uVar7 * 8;
        param_3 = param_3 + uVar7 * -8;
        uVar8 = 0;
        do {
          pbVar1 = pbVar6 + uVar8 * 8;
          *(int *)pbVar1 = iVar2;
          *(int *)(pbVar1 + 4) = iVar2;
          *(int *)(pbVar1 + 8) = iVar2;
          *(int *)(pbVar1 + 0xc) = iVar2;
          pbVar1 = pbVar6 + uVar8 * 8 + 0x10;
          *(int *)pbVar1 = iVar2;
          *(int *)(pbVar1 + 4) = iVar2;
          *(int *)(pbVar1 + 8) = iVar2;
          *(int *)(pbVar1 + 0xc) = iVar2;
          uVar8 = uVar8 + 4;
        } while (uVar7 != uVar8);
        if (uVar4 == uVar7) goto LAB_10002c41;
      }
      do {
        *(undefined8 *)param_1 = uVar3;
        param_1 = param_1 + 8;
        param_3 = param_3 - 8;
      } while (7 < param_3);
    }
  }
LAB_10002c41:
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 4) {
LAB_10002c50:
    uVar7 = param_3;
    pbVar6 = param_1;
  }
  else {
    if (param_3 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_3 & 0xffffffffffffffe0;
      auVar10 = pshuflw(ZEXT216(CONCAT11(param_2,param_2)),ZEXT216(CONCAT11(param_2,param_2)),0);
      uVar9 = PF_PART4(auVar10, 0);
      uVar7 = 0;
      do {
        pbVar6 = param_1 + uVar7;
        *(undefined4 *)pbVar6 = uVar9;
        *(undefined4 *)(pbVar6 + 4) = uVar9;
        *(undefined4 *)(pbVar6 + 8) = uVar9;
        *(undefined4 *)(pbVar6 + 0xc) = uVar9;
        pbVar6 = param_1 + uVar7 + 0x10;
        *(undefined4 *)pbVar6 = uVar9;
        *(undefined4 *)(pbVar6 + 4) = uVar9;
        *(undefined4 *)(pbVar6 + 8) = uVar9;
        *(undefined4 *)(pbVar6 + 0xc) = uVar9;
        uVar7 = uVar7 + 0x20;
      } while (uVar4 != uVar7);
      if (param_3 == uVar4) {
        return;
      }
      if ((param_3 & 0x1c) == 0) {
        param_1 = param_1 + uVar4;
        param_3 = (ulong)((uint)param_3 & 0x1f);
        goto LAB_10002c50;
      }
    }
    uVar8 = param_3 & 0xfffffffffffffffc;
    uVar7 = (ulong)((uint)param_3 & 3);
    pbVar6 = param_1 + uVar8;
    auVar10 = pshuflw(ZEXT216(CONCAT11(param_2,param_2)),ZEXT216(CONCAT11(param_2,param_2)),0);
    do {
      *(int *)(param_1 + uVar4) = PF_PART4(auVar10, 0);
      uVar4 = uVar4 + 4;
    } while (uVar8 != uVar4);
    if (param_3 == uVar8) {
      return;
    }
  }
  uVar4 = 0;
  do {
    pbVar6[uVar4] = param_2;
    uVar4 = uVar4 + 1;
  } while (uVar7 != uVar4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d10
 */

void recovered_10002d10(undefined8 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;

  uVar2 = param_2;
  puVar1 = param_1;
  if (0xf < param_2) {
    if (((ulong)param_1 & 7) != 0) {
      puVar1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      uVar2 = param_2 - 1;
      if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
        puVar1 = (undefined8 *)((long)param_1 + 2);
        *(undefined1 *)((long)param_1 + 1) = 0;
        uVar2 = param_2 - 2;
        if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
          puVar1 = (undefined8 *)((long)param_1 + 3);
          *(undefined1 *)((long)param_1 + 2) = 0;
          uVar2 = param_2 - 3;
          if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
            puVar1 = (undefined8 *)((long)param_1 + 4);
            *(undefined1 *)((long)param_1 + 3) = 0;
            uVar2 = param_2 - 4;
            if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
              puVar1 = (undefined8 *)((long)param_1 + 5);
              *(undefined1 *)((long)param_1 + 4) = 0;
              uVar2 = param_2 - 5;
              if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                puVar1 = (undefined8 *)((long)param_1 + 6);
                *(undefined1 *)((long)param_1 + 5) = 0;
                uVar2 = param_2 - 6;
                if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                  puVar1 = (undefined8 *)((long)param_1 + 7);
                  *(undefined1 *)((long)param_1 + 6) = 0;
                  uVar2 = param_2 - 7;
                  if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                    *(undefined1 *)((long)param_1 + 7) = 0;
                    puVar1 = param_1 + 1;
                    uVar2 = param_2 - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (0x1f < uVar2) {
      uVar3 = uVar2 - 0x20;
      uVar4 = ((uint)(uVar3 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar4 == 0) {
        uVar5 = uVar2;
        uVar2 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)((long)puVar1 + uVar5) = 0;
          ((undefined8 *)((long)puVar1 + uVar5))[1] = 0;
          puVar6 = (undefined8 *)((long)puVar1 + uVar5 + 0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar5 = uVar5 + 0x20;
        } while (uVar4 << 5 != uVar5);
        puVar1 = (undefined8 *)((long)puVar1 + uVar5);
        uVar5 = uVar2 - uVar5;
        uVar2 = uVar5;
      }
      if (0x5f < uVar3) {
        uVar2 = uVar5;
        do {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          puVar1[0xc] = 0;
          puVar1[0xd] = 0;
          puVar1[0xe] = 0;
          puVar1[0xf] = 0;
          puVar1 = puVar1 + 0x10;
          uVar2 = uVar2 - 0x80;
        } while (0x1f < uVar2);
      }
    }
    if (7 < uVar2) {
      if (uVar2 - 8 < 0x18) {
        puVar6 = puVar1;
      }
      else {
        uVar3 = (uVar2 - 8 >> 3) + 1;
        uVar5 = uVar3 & 0xfffffffffffffffc;
        puVar6 = puVar1 + uVar5;
        uVar2 = uVar2 + uVar5 * -8;
        uVar7 = 0;
        do {
          puVar1[uVar7] = 0;
          (puVar1 + uVar7)[1] = 0;
          puVar1[uVar7 + 2] = 0;
          (puVar1 + uVar7 + 2)[1] = 0;
          uVar7 = uVar7 + 4;
        } while (uVar5 != uVar7);
        puVar1 = puVar6;
        if (uVar3 == uVar5) goto LAB_10002f35;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10002f35:
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  puVar6 = puVar1;
  if (7 < uVar2) {
    if (uVar2 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar2 & 0xffffffffffffffe0;
      uVar3 = 0;
      do {
        *(undefined8 *)((long)puVar1 + uVar3) = 0;
        ((undefined8 *)((long)puVar1 + uVar3))[1] = 0;
        puVar6 = (undefined8 *)((long)puVar1 + uVar3 + 0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar3 = uVar3 + 0x20;
      } while (uVar5 != uVar3);
      if (uVar2 == uVar5) {
        return;
      }
      if ((uVar2 & 0x18) == 0) {
        puVar6 = (undefined8 *)((long)puVar1 + uVar5);
        uVar3 = (ulong)((uint)uVar2 & 0x1f);
        goto LAB_10002fb6;
      }
    }
    uVar7 = uVar2 & 0xfffffffffffffff8;
    uVar3 = (ulong)((uint)uVar2 & 7);
    puVar6 = (undefined8 *)((long)puVar1 + uVar7);
    do {
      *(undefined8 *)((long)puVar1 + uVar5) = 0;
      uVar5 = uVar5 + 8;
    } while (uVar7 != uVar5);
    if (uVar2 == uVar7) {
      return;
    }
  }
LAB_10002fb6:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fe0
 */

void recovered_10002fe0(undefined8 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;

  uVar2 = param_2;
  puVar1 = param_1;
  if (0xf < param_2) {
    if (((ulong)param_1 & 7) != 0) {
      puVar1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      uVar2 = param_2 - 1;
      if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
        puVar1 = (undefined8 *)((long)param_1 + 2);
        *(undefined1 *)((long)param_1 + 1) = 0;
        uVar2 = param_2 - 2;
        if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
          puVar1 = (undefined8 *)((long)param_1 + 3);
          *(undefined1 *)((long)param_1 + 2) = 0;
          uVar2 = param_2 - 3;
          if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
            puVar1 = (undefined8 *)((long)param_1 + 4);
            *(undefined1 *)((long)param_1 + 3) = 0;
            uVar2 = param_2 - 4;
            if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
              puVar1 = (undefined8 *)((long)param_1 + 5);
              *(undefined1 *)((long)param_1 + 4) = 0;
              uVar2 = param_2 - 5;
              if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                puVar1 = (undefined8 *)((long)param_1 + 6);
                *(undefined1 *)((long)param_1 + 5) = 0;
                uVar2 = param_2 - 6;
                if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                  puVar1 = (undefined8 *)((long)param_1 + 7);
                  *(undefined1 *)((long)param_1 + 6) = 0;
                  uVar2 = param_2 - 7;
                  if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                    *(undefined1 *)((long)param_1 + 7) = 0;
                    puVar1 = param_1 + 1;
                    uVar2 = param_2 - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (0x1f < uVar2) {
      uVar3 = uVar2 - 0x20;
      uVar4 = ((uint)(uVar3 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar4 == 0) {
        uVar5 = uVar2;
        uVar2 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)((long)puVar1 + uVar5) = 0;
          ((undefined8 *)((long)puVar1 + uVar5))[1] = 0;
          puVar6 = (undefined8 *)((long)puVar1 + uVar5 + 0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar5 = uVar5 + 0x20;
        } while (uVar4 << 5 != uVar5);
        puVar1 = (undefined8 *)((long)puVar1 + uVar5);
        uVar5 = uVar2 - uVar5;
        uVar2 = uVar5;
      }
      if (0x5f < uVar3) {
        uVar2 = uVar5;
        do {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          puVar1[0xc] = 0;
          puVar1[0xd] = 0;
          puVar1[0xe] = 0;
          puVar1[0xf] = 0;
          puVar1 = puVar1 + 0x10;
          uVar2 = uVar2 - 0x80;
        } while (0x1f < uVar2);
      }
    }
    if (7 < uVar2) {
      if (uVar2 - 8 < 0x18) {
        puVar6 = puVar1;
      }
      else {
        uVar3 = (uVar2 - 8 >> 3) + 1;
        uVar5 = uVar3 & 0xfffffffffffffffc;
        puVar6 = puVar1 + uVar5;
        uVar2 = uVar2 + uVar5 * -8;
        uVar7 = 0;
        do {
          puVar1[uVar7] = 0;
          (puVar1 + uVar7)[1] = 0;
          puVar1[uVar7 + 2] = 0;
          (puVar1 + uVar7 + 2)[1] = 0;
          uVar7 = uVar7 + 4;
        } while (uVar5 != uVar7);
        puVar1 = puVar6;
        if (uVar3 == uVar5) goto LAB_10003205;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10003205:
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  puVar6 = puVar1;
  if (7 < uVar2) {
    if (uVar2 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar2 & 0xffffffffffffffe0;
      uVar3 = 0;
      do {
        *(undefined8 *)((long)puVar1 + uVar3) = 0;
        ((undefined8 *)((long)puVar1 + uVar3))[1] = 0;
        puVar6 = (undefined8 *)((long)puVar1 + uVar3 + 0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar3 = uVar3 + 0x20;
      } while (uVar5 != uVar3);
      if (uVar2 == uVar5) {
        return;
      }
      if ((uVar2 & 0x18) == 0) {
        puVar6 = (undefined8 *)((long)puVar1 + uVar5);
        uVar3 = (ulong)((uint)uVar2 & 0x1f);
        goto LAB_10003286;
      }
    }
    uVar7 = uVar2 & 0xfffffffffffffff8;
    uVar3 = (ulong)((uint)uVar2 & 7);
    puVar6 = (undefined8 *)((long)puVar1 + uVar7);
    do {
      *(undefined8 *)((long)puVar1 + uVar5) = 0;
      uVar5 = uVar5 + 8;
    } while (uVar7 != uVar5);
    if (uVar2 == uVar7) {
      return;
    }
  }
LAB_10003286:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032b0
 */

char * recovered_100032b0(char *param_1,char param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100032e0
 */

int recovered_100032e0(ulong *param_1,ulong *param_2,ulong param_3)

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

  if (0xf < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) goto LAB_10003513;
    uVar11 = param_3;
    puVar8 = param_2;
    puVar10 = param_1;
    if (((ulong)param_1 & 7) != 0) {
      bVar1 = (byte)*param_1;
      bVar5 = (byte)*param_2;
      if (bVar1 != bVar5) {
LAB_10003473:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_100035c8:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)param_1 + 1);
      puVar8 = (ulong *)((long)param_2 + 1);
      uVar11 = param_3 - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10003473;
        puVar10 = (ulong *)((long)param_1 + 2);
        puVar8 = (ulong *)((long)param_2 + 2);
        uVar11 = param_3 - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10003473;
          puVar10 = (ulong *)((long)param_1 + 3);
          puVar8 = (ulong *)((long)param_2 + 3);
          uVar11 = param_3 - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10003473;
            puVar10 = (ulong *)((long)param_1 + 4);
            puVar8 = (ulong *)((long)param_2 + 4);
            uVar11 = param_3 - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10003473;
              puVar10 = (ulong *)((long)param_1 + 5);
              puVar8 = (ulong *)((long)param_2 + 5);
              uVar11 = param_3 - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10003473;
                puVar10 = (ulong *)((long)param_1 + 6);
                puVar8 = (ulong *)((long)param_2 + 6);
                uVar11 = param_3 - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10003473;
                  puVar10 = (ulong *)((long)param_1 + 7);
                  puVar8 = (ulong *)((long)param_2 + 7);
                  uVar11 = param_3 - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10003473;
                    puVar10 = param_1 + 1;
                    puVar8 = param_2 + 1;
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
      param_2 = puVar8;
      param_1 = puVar10;
      if (uVar11 < 0x20) break;
      uVar4 = *puVar10;
      uVar7 = *puVar8;
      if (uVar4 != uVar7) {
LAB_1000353f:
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
        goto LAB_100035c8;
      }
      uVar4 = puVar10[1];
      uVar7 = puVar8[1];
      if (uVar4 != uVar7) goto LAB_1000353f;
      uVar4 = puVar10[2];
      uVar7 = puVar8[2];
      if (uVar4 != uVar7) goto LAB_1000353f;
      uVar4 = puVar10[3];
      uVar7 = puVar8[3];
      if (uVar4 != uVar7) goto LAB_1000353f;
      uVar11 = uVar11 - 0x20;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    }
    for (; 7 < param_3; param_3 = param_3 - 8) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_100035e0((byte *)param_1,(byte *)param_2);
        return iVar3;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10003513:
  uVar11 = 0;
  do {
    if (*(byte *)((long)param_1 + uVar11) != *(byte *)((long)param_2 + uVar11)) {
      return (uint)*(byte *)((long)param_1 + uVar11) - (uint)*(byte *)((long)param_2 + uVar11);
    }
    uVar11 = uVar11 + 1;
  } while (param_3 != uVar11);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e0
 */

int recovered_100035e0(byte *param_1,byte *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003650
 */

bool recovered_10003650(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003670
 */

bool recovered_10003670(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003690
 */

bool recovered_10003690(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036b0
 */

bool recovered_100036b0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036e0
 */

bool recovered_100036e0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003700
 */

bool recovered_10003700(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003720
 */

int recovered_10003720(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = param_1 + 0x20;
  if (param_1 - 0x5bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003740
 */

int recovered_10003740(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = param_1 + -0x20;
  if (param_1 - 0x7bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003760
 */

long recovered_10003760(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char *pcVar2;
  long lVar3;

  if (param_1 == 0) {
    return 0;
  }
  lVar3 = -1;
  do {
    lVar1 = lVar3 + 1;
    pcVar2 = (char *)(param_1 + 1 + lVar3);
    lVar3 = lVar1;
  } while (*pcVar2 != '\0');
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003790
 */

int recovered_10003790(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_100037b3;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_100037b3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037d0
 */

int recovered_100037d0(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_100037f3;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_100037f3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003810
 */

void recovered_10003810(long param_1,long param_2)

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


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003830
 */

undefined8 * recovered_10003830(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;

  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar7 = 0xfffffffffffffff8;
  do {
    uVar12 = uVar7;
    uVar7 = uVar12 + 1;
  } while (*(char *)((long)param_1 + uVar12 + 8) != '\0');
  iVar1 = Ram0000000000280800;
  if ((((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000280804, iVar1 == 0)) ||
      (uVar2 = Ram0000000000280808, uVar2 < 0xc)) || (uVar2 = Ram0000000000280808, uVar2 < 0x50)) {
    return (undefined8 *)0x0;
  }
  uVar2 = UINT_0028084c;
  if ((code *)(ulong)uVar2 == (code *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar11 = uVar12 + 9;
  puVar6 = (*(code *)(ulong)uVar2)(uVar11);
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar10 = puVar6;
  if (uVar11 < 0x10) {
LAB_100038d9:
    if (uVar11 == 0) {
      return puVar6;
    }
  }
  else if ((((uint)puVar6 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)puVar6 & 7) == 0) {
      puVar9 = param_1;
      puVar8 = puVar6;
    }
    else {
      puVar8 = (undefined8 *)((long)puVar6 + 1);
      *(undefined1 *)puVar6 = *(undefined1 *)param_1;
      puVar9 = (undefined8 *)((long)param_1 + 1);
      uVar11 = uVar12 + 8;
      if ((uVar7 != 0xfffffffffffffff9) && (((ulong)puVar8 & 7) != 0)) {
        puVar8 = (undefined8 *)((long)puVar6 + 2);
        *(undefined1 *)((long)puVar6 + 1) = *(undefined1 *)((long)param_1 + 1);
        puVar9 = (undefined8 *)((long)param_1 + 2);
        uVar11 = uVar12 + 7;
        if ((uVar7 != 0xfffffffffffffffa) && (((ulong)puVar8 & 7) != 0)) {
          puVar8 = (undefined8 *)((long)puVar6 + 3);
          *(undefined1 *)((long)puVar6 + 2) = *(undefined1 *)((long)param_1 + 2);
          puVar9 = (undefined8 *)((long)param_1 + 3);
          uVar11 = uVar12 + 6;
          if ((uVar7 != 0xfffffffffffffffb) && (((ulong)puVar8 & 7) != 0)) {
            puVar8 = (undefined8 *)((long)puVar6 + 4);
            *(undefined1 *)((long)puVar6 + 3) = *(undefined1 *)((long)param_1 + 3);
            puVar9 = (undefined8 *)((long)param_1 + 4);
            uVar11 = uVar12 + 5;
            if ((uVar7 != 0xfffffffffffffffc) && (((ulong)puVar8 & 7) != 0)) {
              puVar8 = (undefined8 *)((long)puVar6 + 5);
              *(undefined1 *)((long)puVar6 + 4) = *(undefined1 *)((long)param_1 + 4);
              puVar9 = (undefined8 *)((long)param_1 + 5);
              uVar11 = uVar12 + 4;
              if ((uVar7 != 0xfffffffffffffffd) && (((ulong)puVar8 & 7) != 0)) {
                puVar8 = (undefined8 *)((long)puVar6 + 6);
                *(undefined1 *)((long)puVar6 + 5) = *(undefined1 *)((long)param_1 + 5);
                puVar9 = (undefined8 *)((long)param_1 + 6);
                uVar11 = uVar12 + 3;
                if ((uVar7 != 0xfffffffffffffffe) && (((ulong)puVar8 & 7) != 0)) {
                  puVar8 = (undefined8 *)((long)puVar6 + 7);
                  *(undefined1 *)((long)puVar6 + 6) = *(undefined1 *)((long)param_1 + 6);
                  puVar9 = (undefined8 *)((long)param_1 + 7);
                  uVar11 = uVar12 + 2;
                  if ((uVar7 != 0xffffffffffffffff) && (((ulong)puVar8 & 7) != 0)) {
                    *(undefined1 *)((long)puVar6 + 7) = *(undefined1 *)((long)param_1 + 7);
                    puVar9 = param_1 + 1;
                    uVar11 = uVar7;
                    puVar8 = puVar6 + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (uVar11 < 0x20) {
    }
    else {
      uVar7 = uVar11 - 0x20;
      uVar12 = uVar11;
      if ((uVar7 & 0x20) == 0) {
        *puVar8 = *puVar9;
        puVar8[1] = puVar9[1];
        puVar8[2] = puVar9[2];
        puVar8[3] = puVar9[3];
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 4;
        uVar12 = uVar7;
      }
      uVar11 = uVar7;
      if (0x1f < uVar7) {
        do {
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          puVar8[2] = puVar9[2];
          puVar8[3] = puVar9[3];
          puVar8[4] = puVar9[4];
          puVar8[5] = puVar9[5];
          puVar8[6] = puVar9[6];
          puVar8[7] = puVar9[7];
          puVar8 = puVar8 + 8;
          puVar9 = puVar9 + 8;
          uVar12 = uVar12 - 0x40;
          uVar11 = uVar12;
        } while (0x1f < uVar12);
      }
    }
    if (uVar11 < 8) {
      param_1 = puVar9;
      puVar10 = puVar8;
    }
    else {
      if ((0x27 < uVar11 - 8) && (0x1f < (ulong)((long)puVar8 - (long)puVar9))) {
        uVar7 = (uVar11 - 8 >> 3) + 1;
        uVar12 = uVar7 & 0xfffffffffffffffc;
        param_1 = puVar9 + uVar12;
        puVar10 = puVar8 + uVar12;
        uVar11 = uVar11 + uVar12 * -8;
        uVar13 = 0;
        do {
          uVar3 = (puVar9 + uVar13)[1];
          uVar4 = puVar9[uVar13 + 2];
          uVar5 = (puVar9 + uVar13 + 2)[1];
          puVar8[uVar13] = puVar9[uVar13];
          (puVar8 + uVar13)[1] = uVar3;
          puVar8[uVar13 + 2] = uVar4;
          (puVar8 + uVar13 + 2)[1] = uVar5;
          uVar13 = uVar13 + 4;
        } while (uVar12 != uVar13);
        puVar9 = param_1;
        puVar8 = puVar10;
        if (uVar7 == uVar12) goto LAB_100038d9;
      }
      do {
        param_1 = puVar9 + 1;
        *puVar8 = *puVar9;
        puVar10 = puVar8 + 1;
        uVar11 = uVar11 - 8;
        puVar9 = param_1;
        puVar8 = puVar10;
      } while (7 < uVar11);
    }
    goto LAB_100038d9;
  }
  uVar7 = uVar11;
  puVar8 = puVar10;
  if ((uVar11 < 4) || ((ulong)((long)puVar10 - (long)param_1) < 0x20)) {
LAB_10003bf8:
    puVar9 = param_1;
  }
  else {
    if (uVar11 < 0x20) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      uVar7 = 0;
      do {
        uVar3 = ((undefined8 *)((long)param_1 + uVar7))[1];
        puVar8 = (undefined8 *)((long)param_1 + uVar7 + 0x10);
        uVar4 = *puVar8;
        uVar5 = puVar8[1];
        *(undefined8 *)((long)puVar10 + uVar7) = *(undefined8 *)((long)param_1 + uVar7);
        ((undefined8 *)((long)puVar10 + uVar7))[1] = uVar3;
        puVar8 = (undefined8 *)((long)puVar10 + uVar7 + 0x10);
        *puVar8 = uVar4;
        puVar8[1] = uVar5;
        uVar7 = uVar7 + 0x20;
      } while (uVar12 != uVar7);
      if (uVar11 == uVar12) {
        return puVar6;
      }
      if ((uVar11 & 0x1c) == 0) {
        param_1 = (undefined8 *)((long)param_1 + uVar12);
        puVar8 = (undefined8 *)((long)puVar10 + uVar12);
        uVar7 = (ulong)((uint)uVar11 & 0x1f);
        goto LAB_10003bf8;
      }
    }
    uVar13 = uVar11 & 0xfffffffffffffffc;
    uVar7 = (ulong)((uint)uVar11 & 3);
    puVar8 = (undefined8 *)((long)puVar10 + uVar13);
    puVar9 = (undefined8 *)((long)param_1 + uVar13);
    do {
      *(undefined4 *)((long)puVar10 + uVar12) = *(undefined4 *)((long)param_1 + uVar12);
      uVar12 = uVar12 + 4;
    } while (uVar13 != uVar12);
    if (uVar11 == uVar13) {
      return puVar6;
    }
  }
  uVar12 = uVar7 - 1;
  if ((uVar7 & 7) != 0) {
    uVar11 = 0;
    do {
      *(undefined1 *)((long)puVar8 + uVar11) = *(undefined1 *)((long)puVar9 + uVar11);
      uVar11 = uVar11 + 1;
    } while ((uVar7 & 7) != uVar11);
    uVar7 = uVar7 - uVar11;
    puVar8 = (undefined8 *)((long)puVar8 + uVar11);
    puVar9 = (undefined8 *)((long)puVar9 + uVar11);
  }
  if (uVar12 < 7) {
    return puVar6;
  }
  uVar12 = 0;
  do {
    *(undefined1 *)((long)puVar8 + uVar12) = *(undefined1 *)((long)puVar9 + uVar12);
    *(undefined1 *)((long)puVar8 + uVar12 + 1) = *(undefined1 *)((long)puVar9 + uVar12 + 1);
    *(undefined1 *)((long)puVar8 + uVar12 + 2) = *(undefined1 *)((long)puVar9 + uVar12 + 2);
    *(undefined1 *)((long)puVar8 + uVar12 + 3) = *(undefined1 *)((long)puVar9 + uVar12 + 3);
    *(undefined1 *)((long)puVar8 + uVar12 + 4) = *(undefined1 *)((long)puVar9 + uVar12 + 4);
    *(undefined1 *)((long)puVar8 + uVar12 + 5) = *(undefined1 *)((long)puVar9 + uVar12 + 5);
    *(undefined1 *)((long)puVar8 + uVar12 + 6) = *(undefined1 *)((long)puVar9 + uVar12 + 6);
    *(undefined1 *)((long)puVar8 + uVar12 + 7) = *(undefined1 *)((long)puVar9 + uVar12 + 7);
    uVar12 = uVar12 + 8;
  } while (uVar7 != uVar12);
  return puVar6;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028084c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cb0
 */

char * recovered_10003cb0(char *param_1,char param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cf0
 */

long recovered_10003cf0(char *param_1,char *param_2)

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
 * Address: 0x10003d50
 */

long recovered_10003d50(char *param_1,char *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003db0
 */

char * recovered_10003db0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e10
 */

char * recovered_10003e10(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_1000a118
#define DAT_1000a118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1baU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e70
 */

undefined * recovered_10003e70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000a118;
}

#undef DAT_1000a118

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e80
 */

undefined ** recovered_10003e80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000b000;
}

#undef PTR_DAT_1000b000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280968
#define UINT_00280968 (*(uint *)(0x280968U))
#define local_28 (*(undefined1 (*)[40])(pf_stack_frame + 24))
#define uStack_20 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e90
 */

/* WARNING: Removing unreachable block (ram,0x10003ea6) */
/* WARNING: Removing unreachable block (ram,0x10003ef3) */
/* WARNING: Removing unreachable block (ram,0x10003efe) */
/* WARNING: Removing unreachable block (ram,0x10003f07) */
/* WARNING: Removing unreachable block (ram,0x10003f10) */
/* WARNING: Removing unreachable block (ram,0x10003efc) */

void recovered_10003e90(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uStack_18 = 0;
  uStack_20 = 0;
  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x16b < uVar2)) {
    uVar2 = UINT_00280968;
    if (((code *)(ulong)uVar2 != (code *)0x0) &&
       (uVar2 = (*(code *)(ulong)uVar2)(local_28), uVar2 != 0)) goto LAB_10003f78;
  }
  uStack_20 = 0x574d4236;
LAB_10003f78:
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = uStack_20;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280968
#undef local_28
#undef uStack_20
#undef uStack_18

#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f90
 */

double recovered_10003f90(double param_1,uint param_2)

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
          param_1 = param_1 * DAT_10009f60;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_10009f60 * DAT_10009f60 * DAT_10009f60 * DAT_10009f60 *
                    DAT_10009f60 * DAT_10009f60 * DAT_10009f60 * DAT_10009f60;
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

#undef DAT_10009f60

#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fe0
#define DAT_10009fe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef _DAT_10009fe0
#define _DAT_10009fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004060(double param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    return 0;
  }
  dVar2 = (double)(_DAT_10009fe0 ^ (ulong)param_1);
  if ((double)(_DAT_10009fe0 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_10009f68 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10009f60;
      iVar1 = iVar1 + 1;
    } while (DAT_10009f68 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10009f60)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_10009fe0 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_10009f60
#undef DAT_10009f68
#undef DAT_10009fe0
#undef _DAT_10009fe0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004130
 */

double recovered_10004130(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004160
 */

double recovered_10004160(double param_1,double param_2)

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
      return DAT_10009f68;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_10009f68;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_10009f68 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_10009f68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041e0
 */

ulong recovered_100041e0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004210
 */

ulong recovered_10004210(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  return ~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
         (ulong)(DAT_10009f68 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_10009f68

#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004270
 */

double recovered_10004270(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_10009f68) {
      dVar1 = DAT_10009f68;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009f60;
  }
  return dVar1;
}

#undef DAT_10009f60
#undef DAT_10009f68

#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009f70
#define DAT_10009f70 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_10009f78
#define DAT_10009f78 (*(double *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_10009f80
#define DAT_10009f80 (*(double *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_10009f88
#define DAT_10009f88 (*(double *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_10009f90
#define DAT_10009f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_10009f98
#define DAT_10009f98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_10009ff0
#define DAT_10009ff0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92U)))
#undef DAT_1000a000
#define DAT_1000a000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef DAT_1000a010
#define DAT_1000a010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2U)))
#undef DAT_1000a020
#define DAT_1000a020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc2U)))
#undef _DAT_10009f90
#define _DAT_10009f90 (*(double *)(((uintptr_t)pf_module_state + 0x32U)))
#undef _DAT_10009f98
#define _DAT_10009f98 (*(double *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef _DAT_10009ff0
#define _DAT_10009ff0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x92U)))
#undef _DAT_1000a000
#define _DAT_1000a000 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef _DAT_1000a010
#define _DAT_1000a010 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb2U)))
#undef _DAT_1000a020
#define _DAT_1000a020 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004420(double param_1)

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
    if (DAT_10009f78 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_10009f60;
        iVar1 = iVar1 + 1;
      } while (DAT_10009f78 < param_1);
    }
    for (; param_1 < DAT_10009f80; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_10009f88 + param_1) / (param_1 + DAT_10009f68);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_10009ff0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000a000);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000a010);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000a020);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_10009f90 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_10009f98;
  }
  return DAT_10009f70;
}

#undef DAT_10009f60
#undef DAT_10009f68
#undef DAT_10009f70
#undef DAT_10009f78
#undef DAT_10009f80
#undef DAT_10009f88
#undef DAT_10009f90
#undef DAT_10009f98
#undef DAT_10009ff0
#undef DAT_1000a000
#undef DAT_1000a010
#undef DAT_1000a020
#undef _DAT_10009f90
#undef _DAT_10009f98
#undef _DAT_10009ff0
#undef _DAT_1000a000
#undef _DAT_1000a010
#undef _DAT_1000a020

#undef DAT_1000a030
#define DAT_1000a030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004570
 */

long recovered_10004570(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000a030 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000a030

#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fa0
#define DAT_10009fa0 (*(double *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_10009fa8
#define DAT_10009fa8 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_10009fb0
#define DAT_10009fb0 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10009fb8
#define DAT_10009fb8 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_10009fc0
#define DAT_10009fc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_1000a040
#define DAT_1000a040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe2U)))
#undef _DAT_10009fc0
#define _DAT_10009fc0 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_1000a040
#define _DAT_1000a040 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100045a0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10009fa0 < param_1; param_1 = param_1 + DAT_10009fa8) {
  }
  for (; param_1 < DAT_10009fb0; param_1 = param_1 + DAT_10009fb8) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000a040);
  return ((dVar1 / _DAT_10009fc0 + DAT_10009f68 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_10009f68
#undef DAT_10009fa0
#undef DAT_10009fa8
#undef DAT_10009fb0
#undef DAT_10009fb8
#undef DAT_10009fc0
#undef DAT_1000a040
#undef _DAT_10009fc0
#undef _DAT_1000a040

#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fa0
#define DAT_10009fa0 (*(double *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_10009fa8
#define DAT_10009fa8 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_10009fb0
#define DAT_10009fb0 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10009fb8
#define DAT_10009fb8 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_10009fc8
#define DAT_10009fc8 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000a050
#define DAT_1000a050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf2U)))
#undef _DAT_1000a050
#define _DAT_1000a050 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004650(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10009fa0 < param_1; param_1 = param_1 + DAT_10009fa8) {
  }
  for (; param_1 < DAT_10009fb0; param_1 = param_1 + DAT_10009fb8) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000a050);
  return (DAT_10009fc8 * dVar1 + DAT_10009f68 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_10009f68
#undef DAT_10009fa0
#undef DAT_10009fa8
#undef DAT_10009fb0
#undef DAT_10009fb8
#undef DAT_10009fc8
#undef DAT_1000a050
#undef _DAT_1000a050

#undef DAT_10009fe0
#define DAT_10009fe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef _DAT_10009fe0
#define _DAT_10009fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_10009fe0 ^ (ulong)param_1);
  if ((double)(_DAT_10009fe0 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_10009fe0
#undef _DAT_10009fe0

#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009fd0
#define DAT_10009fd0 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_10009fe0
#define DAT_10009fe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef _DAT_10009fe0
#define _DAT_10009fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004710
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004710(double param_1)

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
  dVar7 = (double)(_DAT_10009fe0 ^ (ulong)param_1);
  if ((double)(_DAT_10009fe0 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_10009fd0;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_10009f60;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_10009f60;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_10009f60
#undef DAT_10009fd0
#undef DAT_10009fe0
#undef _DAT_10009fe0

#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009fd0
#define DAT_10009fd0 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047e0
 */

ulong recovered_100047e0(double param_1)

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
  dVar6 = DAT_10009fd0;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_10009f60;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_10009f60;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_10009f60
#undef DAT_10009fd0

#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004890
 */

double recovered_10004890(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (param_1 == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_10009f68;
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

#undef DAT_10009f68

#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fe0
#define DAT_10009fe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef _DAT_10009fe0
#define _DAT_10009fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100048e0(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if ((long)param_1 < 0) {
    dVar4 = 0.0;
    uVar2 = -param_1;
    dVar3 = DAT_10009f68;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_10009fe0);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_10009f68;
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

#undef DAT_10009f68
#undef DAT_10009fe0
#undef _DAT_10009fe0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004970
 */

float recovered_10004970(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fe0
#define DAT_10009fe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef UNK_10009fe4
#define UNK_10009fe4 (*(uint *)(((uintptr_t)pf_module_state + 0x86U)))
#undef _DAT_10009fe0
#define _DAT_10009fe0 (*(uint *)(((uintptr_t)pf_module_state + 0x82U)))
#undef uRam0000000010009fe4
#define uRam0000000010009fe4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x86U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100049c0(float param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    return 0;
  }
  dVar2 = (double)param_1;
  if (param_1 < 0.0) {
    dVar2 = pf_bits_double(CONCAT44((uint)(pf_double_bits(dVar2) >> 0x20) ^ uRam0000000010009fe4,
                             SUB84(dVar2,0) ^ _DAT_10009fe0));
  }
  iVar1 = 0;
  if (DAT_10009f68 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10009f60;
      iVar1 = iVar1 + 1;
    } while (DAT_10009f68 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10009f60)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam0000000010009fe4,_DAT_10009fe0));
  }
  return CONCAT44((int)(pf_double_bits(dVar2) >> 0x20),(float)dVar2);
}

#undef DAT_10009f60
#undef DAT_10009f68
#undef DAT_10009fe0
#undef UNK_10009fe4
#undef _DAT_10009fe0
#undef uRam0000000010009fe4

#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a80
 */

undefined8 recovered_10004a80(float param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  double dVar3;

  dVar3 = (double)param_1;
  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      uVar1 = param_2;
      if ((-param_2 & 7) != 0) {
        iVar2 = 0;
        do {
          dVar3 = dVar3 * DAT_10009f60;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_10009f60 * DAT_10009f60 * DAT_10009f60 * DAT_10009f60 * DAT_10009f60 *
                  DAT_10009f60 * DAT_10009f60 * DAT_10009f60;
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
        dVar3 = dVar3 + dVar3;
        uVar1 = uVar1 + 1;
      } while ((param_2 & 7) != uVar1);
      uVar1 = param_2 - uVar1;
    }
    if (7 < param_2) {
      uVar1 = uVar1 - 1;
      do {
        dVar3 = dVar3 + dVar3 + dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        uVar1 = uVar1 - 8;
      } while (uVar1 < 0xfffffffe);
    }
  }
  return CONCAT44((int)(pf_double_bits(dVar3) >> 0x20),(float)dVar3);
}

#undef DAT_10009f60

#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000a070
#define DAT_1000a070 (*(float *)(((uintptr_t)pf_module_state + 0x112U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b70
 */

float recovered_10004b70(float param_1,float param_2)

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
    return DAT_1000a070;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_10009f68;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_10009f68 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_10009f68
#undef DAT_1000a070

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c00
 */

undefined8 recovered_10004c00(undefined1 in_XMM0 [16],ulong in_XMM2_Qb)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  ulong uVar2;
  float fVar3;
  uint128 auVar4;
  uint128 auVar5;

  fVar3 = (*(float *)((uint8_t *)&(in_XMM0)+0));
  uVar2 = -(ulong)((double)fVar3 < (double)(int)fVar3);
  PF_PART8(auVar4, 0) = ~uVar2 & (ulong)(double)(int)fVar3;
  PF_PART8(auVar4, 8) = ~PF_PART8(in_XMM0, 8) & (ulong)(double)(int)(*(float *)((uint8_t *)&(in_XMM0)+4));
  PF_PART8(auVar1, 8) = in_XMM2_Qb & PF_PART8(in_XMM0, 8);
  PF_PART8(auVar1, 0) = (ulong)(double)((int)fVar3 + -1) & uVar2;
  PF_PART12(auVar5, 4) = SUB1612(auVar4 | auVar1,4);
  (*(float *)((uint8_t *)&(auVar5)+0)) = (float)SUB168(auVar4 | auVar1,0);
  return PF_PART8(auVar5, 0);
}


#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c40
 */

float recovered_10004c40(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_10009f68 + dVar2) & uVar1);
}

#undef DAT_10009f68

#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ca0
 */

double recovered_10004ca0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  if (param_1 < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
                    (ulong)(DAT_10009f68 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_10009f68

#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d00
 */

undefined8 recovered_10004d00(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  float fVar2;
  uint128 auVar4;
  double dVar3;
  uint128 auVar5;
  uint128 auVar6;
  uint128 auVar7;

  fVar2 = (float)param_1;
  uVar1 = -(ulong)((double)fVar2 < (double)(int)fVar2);
  PF_PART8(auVar7, 0) = (ulong)(double)((int)fVar2 + -1) & uVar1;
  PF_PART8(auVar7, 8) = 0;
  PF_PART8(auVar4, 0) = ~uVar1 & (ulong)(double)(int)fVar2;
  (*(double *)((uint8_t *)&(auVar4)+8)) = (double)(int)(float)((ulong)param_1 >> 0x20);
  auVar5 = auVar4 | auVar7;
  if (fVar2 < 0.0) {
    dVar3 = (*(double *)((uint8_t *)&(auVar5)+0));
    uVar1 = -(ulong)(dVar3 < (double)fVar2);
    PF_PART8(auVar5, 8) = 0;
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_10009f68 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_10009f68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d70
 */

float recovered_10004d70(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004270((double)param_1);
  return (float)dVar1;
}


#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009f78
#define DAT_10009f78 (*(double *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_10009f80
#define DAT_10009f80 (*(double *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_10009f88
#define DAT_10009f88 (*(double *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_10009f90
#define DAT_10009f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_10009f98
#define DAT_10009f98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_10009ff0
#define DAT_10009ff0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92U)))
#undef DAT_1000a000
#define DAT_1000a000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef DAT_1000a010
#define DAT_1000a010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2U)))
#undef DAT_1000a020
#define DAT_1000a020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc2U)))
#undef DAT_1000a074
#define DAT_1000a074 (*(float *)(((uintptr_t)pf_module_state + 0x116U)))
#undef DAT_1000a078
#define DAT_1000a078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11aU)))
#undef _DAT_10009f90
#define _DAT_10009f90 (*(double *)(((uintptr_t)pf_module_state + 0x32U)))
#undef _DAT_10009f98
#define _DAT_10009f98 (*(double *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef _DAT_10009ff0
#define _DAT_10009ff0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x92U)))
#undef _DAT_1000a000
#define _DAT_1000a000 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef _DAT_1000a010
#define _DAT_1000a010 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb2U)))
#undef _DAT_1000a020
#define _DAT_1000a020 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc2U)))
#undef _DAT_1000a078
#define _DAT_1000a078 (*(float *)(((uintptr_t)pf_module_state + 0x11aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004d90(float param_1)

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
    if (_DAT_1000a078 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_10009f60;
        iVar1 = iVar1 + 1;
      } while (DAT_10009f78 < dVar2);
    }
    for (; dVar2 < DAT_10009f80; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_10009f88 + dVar2) / (dVar2 + DAT_10009f68);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_10009ff0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000a000);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000a010);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000a020);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_10009f90 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_10009f98);
  }
  return DAT_1000a074;
}

#undef DAT_10009f60
#undef DAT_10009f68
#undef DAT_10009f78
#undef DAT_10009f80
#undef DAT_10009f88
#undef DAT_10009f90
#undef DAT_10009f98
#undef DAT_10009ff0
#undef DAT_1000a000
#undef DAT_1000a010
#undef DAT_1000a020
#undef DAT_1000a074
#undef DAT_1000a078
#undef _DAT_10009f90
#undef _DAT_10009f98
#undef _DAT_10009ff0
#undef _DAT_1000a000
#undef _DAT_1000a010
#undef _DAT_1000a020
#undef _DAT_1000a078

#undef DAT_1000a030
#define DAT_1000a030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ee0
 */

long recovered_10004ee0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000a030 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000a030

#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fa0
#define DAT_10009fa0 (*(double *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_10009fa8
#define DAT_10009fa8 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_10009fb0
#define DAT_10009fb0 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10009fb8
#define DAT_10009fb8 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_10009fc0
#define DAT_10009fc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_1000a040
#define DAT_1000a040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe2U)))
#undef _DAT_10009fc0
#define _DAT_10009fc0 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_1000a040
#define _DAT_1000a040 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004f10(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_10009fa0 < dVar1; dVar1 = dVar1 + DAT_10009fa8) {
  }
  for (; dVar1 < DAT_10009fb0; dVar1 = dVar1 + DAT_10009fb8) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000a040);
  return (float)(((dVar2 / _DAT_10009fc0 + DAT_10009f68 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_10009f68
#undef DAT_10009fa0
#undef DAT_10009fa8
#undef DAT_10009fb0
#undef DAT_10009fb8
#undef DAT_10009fc0
#undef DAT_1000a040
#undef _DAT_10009fc0
#undef _DAT_1000a040

#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fa0
#define DAT_10009fa0 (*(double *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_10009fa8
#define DAT_10009fa8 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_10009fb0
#define DAT_10009fb0 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10009fb8
#define DAT_10009fb8 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_10009fc8
#define DAT_10009fc8 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000a050
#define DAT_1000a050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf2U)))
#undef _DAT_1000a050
#define _DAT_1000a050 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004fc0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_10009fa0 < dVar1; dVar1 = dVar1 + DAT_10009fa8) {
  }
  for (; dVar1 < DAT_10009fb0; dVar1 = dVar1 + DAT_10009fb8) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000a050);
  return (float)((DAT_10009fc8 * dVar1 + DAT_10009f68 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_10009f68
#undef DAT_10009fa0
#undef DAT_10009fa8
#undef DAT_10009fb0
#undef DAT_10009fb8
#undef DAT_10009fc8
#undef DAT_1000a050
#undef _DAT_1000a050

#undef DAT_1000a060
#define DAT_1000a060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x102U)))
#undef UNK_1000a064
#define UNK_1000a064 (*(uint *)(((uintptr_t)pf_module_state + 0x106U)))
#undef _DAT_1000a060
#define _DAT_1000a060 (*(uint *)(((uintptr_t)pf_module_state + 0x102U)))
#undef uRam000000001000a064
#define uRam000000001000a064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x106U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10005060(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)param_1;
  fVar2 = (float)(_DAT_1000a060 ^ (uint)fVar1);
  if ((float)(_DAT_1000a060 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000a064 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000a060
#undef UNK_1000a064
#undef _DAT_1000a060
#undef uRam000000001000a064

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005080
 */

long recovered_10005080(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051b0
 */

long recovered_100051b0(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fd8
#define DAT_10009fd8 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef DAT_10009fe0
#define DAT_10009fe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef _DAT_10009fe0
#define _DAT_10009fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100052e0(byte *param_1,undefined8 *param_2)

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
    dVar11 = dVar11 * DAT_10009fd8 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_10009f68;
      do {
        dVar12 = dVar12 * DAT_10009fd8 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_10009fd8;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_100053b9;
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
LAB_100053b9:
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
                dVar11 = dVar11 * DAT_10009f60;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_10009f60 * DAT_10009f60 * DAT_10009f60 * DAT_10009f60 *
                         DAT_10009f60 * DAT_10009f60 * DAT_10009f60 * DAT_10009f60;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_10009fe0);
  }
  return dVar11;
}

#undef DAT_10009f60
#undef DAT_10009f68
#undef DAT_10009fd8
#undef DAT_10009fe0
#undef _DAT_10009fe0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005540
 */

float recovered_10005540(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100052e0(param_1,param_2);
  return (float)dVar1;
}


#undef DAT_10009fd8
#define DAT_10009fd8 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef DAT_10009fe0
#define DAT_10009fe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef DAT_1000a11a
#define DAT_1000a11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef _DAT_10009fe0
#define _DAT_10009fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef str_1000a124
#define str_1000a124 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c6U)))
#undef str_1000a135
#define str_1000a135 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d7U)))
#define abStack_7a (*(byte (*)[122])(pf_stack_frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10005550(byte *param_1,ulong param_2,byte *param_3,uint *param_4)

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
    *param_1 = 0;
  }
  uVar8 = _DAT_10009fe0;
  dVar7 = DAT_10009fd8;
  uVar20 = param_2;
  uVar13 = 0;
LAB_100055b9:
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
      goto LAB_100055d2;
    }
    goto LAB_100055b3;
  }
  bVar15 = param_3[1];
  if (bVar15 == 0x25) {
    if (1 < uVar20) {
      *param_1 = 0x25;
      param_1 = param_1 + 1;
      uVar20 = uVar20 - 1;
    }
    param_3 = param_3 + 1;
    goto LAB_100055b3;
  }
  uVar24 = uVar13 & 0xffffffff;
  pbVar1 = param_3 + 2;
  pbVar21 = param_3;
  while( true ) {
    param_3 = pbVar1;
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
        goto LAB_1000565c;
      }
      break;
    }
    pbVar21 = pbVar21 + 1;
    bVar15 = *param_3;
    pbVar1 = param_3 + 1;
  }
  do {
    bVar15 = pbVar21[1];
    param_3 = pbVar21 + 1;
    pbVar21 = param_3;
  } while ((byte)(bVar15 - 0x30U) < 10);
LAB_1000565c:
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
    pbVar21 = param_3 + 1;
    pbVar1 = param_3 + 2;
    param_3 = param_3 + 1;
    if (*pbVar21 == 0x68) {
      param_3 = pbVar1;
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
    pbVar21 = param_3 + 1;
    pbVar1 = param_3 + 2;
    param_3 = param_3 + 1;
    if (*pbVar21 == 0x6c) {
      param_3 = pbVar1;
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
  case 0x49:
  case 100:
  case 0x69:
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
      if (0x28 < uVar2) goto LAB_10005af4;
      lVar3 = *(long *)(param_4 + 4);
      *param_4 = uVar2 + 8;
LAB_100057d8:
      uVar24 = *(ulong *)(lVar3 + uVar13);
      break;
    case '\a':
      if (uVar2 < 0x29) {
        lVar3 = *(long *)(param_4 + 4);
        *param_4 = uVar2 + 8;
        goto LAB_100057d8;
      }
LAB_10005af4:
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
      abStack_7a[uVar19 + 2] = str_1000a135[uVar24 % 10];
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
LAB_100055d2:
      param_1 = param_1 + 1;
      uVar20 = uVar20 - 1;
    }
    goto LAB_100055b3;
  case 0x58:
  case 0x78:
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
LAB_10005c41:
        puVar11 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10005c41;
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
    pcVar23 = str_1000a135;
    if (*param_3 == 0x58) {
      pcVar23 = str_1000a124;
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
    goto LAB_100055b9;
  case 99:
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
      goto LAB_100055d2;
    }
LAB_100055b3:
    uVar13 = (ulong)(uVar22 + 1);
    break;
  case 0x66:
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
        abStack_7a[uVar14 + 2] = str_1000a135[uVar24 % 10];
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
    goto LAB_100055b9;
  case 0x70:
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
      abStack_7a[uVar14 + 2] = str_1000a135[(uint)uVar24 & 0xf];
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
    goto LAB_100055b9;
  case 0x73:
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
        pbVar21 = &DAT_1000a11a;
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
  case 0x75:
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
LAB_10005f73:
        puVar11 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10005f73;
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
      abStack_7a[uVar19 + 2] = str_1000a135[uVar13 % 10];
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
    goto LAB_100055b9;
  }
  param_3 = param_3 + 1;
  goto LAB_100055b9;
}

#undef DAT_10009fd8
#undef DAT_10009fe0
#undef DAT_1000a11a
#undef _DAT_10009fe0
#undef str_1000a124
#undef str_1000a135
#undef abStack_7a

#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
#define local_18 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_d8 (*(undefined1 (*)[216])(pf_stack_frame + 24))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 48))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 56))
#define local_b0 (*(undefined8 *)(pf_stack_frame + 64))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 72))
#define local_98 (*(undefined8 *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 104))
#define local_78 (*(undefined8 *)(pf_stack_frame + 120))
#define local_68 (*(undefined8 *)(pf_stack_frame + 136))
#define local_58 (*(undefined8 *)(pf_stack_frame + 152))
#define local_48 (*(undefined8 *)(pf_stack_frame + 168))
#define local_38 (*(undefined8 *)(pf_stack_frame + 184))
#define local_28 (*(uint (*)[10])(pf_stack_frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006430
 */

void recovered_10006430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       byte *param_9,ulong param_10,byte *param_11,undefined8 param_12,
                       undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  char in_AL;

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
  local_28[0] = 0x18;
  local_28[1] = 0x30;
  local_c0 = param_12;
  local_b8 = param_13;
  local_b0 = param_14;
  recovered_10005550(param_9,param_10,param_11,local_28);
  return;
}

#undef local_20
#undef local_18
#undef local_d8
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

#undef DAT_10000000
#define DAT_10000000 (*(uint8_t *)(0x10000000U))
#undef DAT_10000008
#define DAT_10000008 (*(uint8_t *)(0x10000008U))
#undef DAT_10000010
#define DAT_10000010 (*(uint8_t *)(0x10000010U))
#undef DAT_10000018
#define DAT_10000018 (*(uint8_t *)(0x10000018U))
#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x119aU)))
#undef DAT_1000b108
#define DAT_1000b108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x11aaU)))
#undef _DAT_10000000
#define _DAT_10000000 (*(uint64_t * *)(0x10000000U))
#undef _DAT_10000008
#define _DAT_10000008 (*(uint64_t *)(0x10000008U))
#undef _DAT_10000010
#define _DAT_10000010 (*(uint64_t *)(0x10000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_100064b0(long *param_1,ulong param_2,ulong *param_3)

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
        if (DAT_1000b0f8 == 0) {
          puVar5 = (ulong *)&DAT_1000b0f8;
        }
        *puVar5 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1000b108 == (long *)0x0) {
          DAT_1000b108 = plVar2;
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
      if (DAT_1000b0f8 == 0) {
        plVar1 = &DAT_1000b0f8;
      }
      *plVar1 = 0x10000000;
      *param_3 = 0x10000000;
      if (DAT_1000b108 == (long *)0x0) {
        DAT_1000b108 = (long *)&DAT_10000000;
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
        if (DAT_1000b0f8 == 0) {
          puVar3 = &DAT_1000b0f8;
        }
        *puVar3 = plVar1;
        *param_3 = (ulong)plVar1;
        if (DAT_1000b108 == (long *)0x0) {
          DAT_1000b108 = plVar1;
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
#undef DAT_1000b0f8
#undef DAT_1000b108
#undef _DAT_10000000
#undef _DAT_10000008
#undef _DAT_10000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006670
 */

ulong * recovered_10006670(ulong *param_1,ulong *param_2)

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
 * Address: 0x100066e0
 */

undefined8 recovered_100066e0(ulong *param_1,long param_2)

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
#undef DAT_1000b110
#define DAT_1000b110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11b2U)))
#undef DAT_1000b120
#define DAT_1000b120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11c2U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280840
#define UINT_00280840 (*(uint *)(0x280840U))
#define local_238 (*(char (*)[568])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006740
 */

void recovered_10006740(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  long lVar8;

  uVar7 = (undefined7)((ulong)param_4 >> 8);
  uVar6 = param_2 == 0 || param_1 == 0;
  if (param_2 != 0 && param_1 != 0) {
    lVar8 = 0;
    do {
      cVar2 = *(char *)(param_1 + lVar8);
      if (cVar2 == '\b') {
        if (DAT_1000b110 != 0) {
          DAT_1000b110 = DAT_1000b110 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000b110 == 0) {
            uVar5 = 0;
          }
          else {
            recovered_10001cc0((undefined8 *)local_238,(undefined8 *)&DAT_1000b120,DAT_1000b110,
                               CONCAT71(uVar7,uVar6),param_5);
            uVar5 = DAT_1000b110;
          }
          local_238[uVar5] = '\0';
          iVar3 = Ram0000000000280800;
          if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) &&
             ((uVar4 = Ram0000000000280808, 0xb < uVar4 &&
              (uVar4 = Ram0000000000280808, 0x43 < uVar4)))) {
            uVar4 = UINT_00280840;
            if ((code *)(ulong)uVar4 != (code *)0x0) {
              (*(code *)(ulong)uVar4)(local_238);
            }
          }
          DAT_1000b110 = 0;
        }
        else {
          if (DAT_1000b110 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001cc0((undefined8 *)local_238,(undefined8 *)&DAT_1000b120,DAT_1000b110,
                               CONCAT71(uVar7,uVar6),param_5);
            local_238[DAT_1000b110] = '\0';
            iVar3 = Ram0000000000280800;
            if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) &&
                (uVar4 = Ram0000000000280808, 0xb < uVar4)) &&
               (uVar4 = Ram0000000000280808, 0x43 < uVar4)) {
              uVar4 = UINT_00280840;
              if ((code *)(ulong)uVar4 != (code *)0x0) {
                (*(code *)(ulong)uVar4)(local_238);
              }
            }
            DAT_1000b110 = 0;
          }
          pcVar1 = &DAT_1000b120 + DAT_1000b110;
          DAT_1000b110 = DAT_1000b110 + 1;
          *pcVar1 = cVar2;
        }
      }
      lVar8 = lVar8 + 1;
    } while (param_2 != lVar8);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000b110
#undef DAT_1000b120
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280840
#undef local_238

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000b110
#define DAT_1000b110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11b2U)))
#undef DAT_1000b120
#define DAT_1000b120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11c2U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280840
#define UINT_00280840 (*(uint *)(0x280840U))
#define local_208 (*(char (*)[520])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006910
 */

void recovered_10006910(undefined8 in_RCX,undefined8 *in_R8)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;

  if (DAT_1000b110 == 0) {
    uVar3 = 0;
  }
  else {
    recovered_10001cc0((undefined8 *)local_208,(undefined8 *)&DAT_1000b120,DAT_1000b110,in_RCX,in_R8
                      );
    uVar3 = DAT_1000b110;
  }
  local_208[uVar3] = '\0';
  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x43 < uVar2)) {
    uVar2 = UINT_00280840;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(local_208);
    }
  }
  DAT_1000b110 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000b110
#undef DAT_1000b120
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280840
#undef local_208

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000b110
#define DAT_1000b110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11b2U)))
#undef DAT_1000b120
#define DAT_1000b120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11c2U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280840
#define UINT_00280840 (*(uint *)(0x280840U))
#define local_208 (*(char (*)[520])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069b0
 */

void recovered_100069b0(undefined8 in_RCX,undefined8 *in_R8)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (DAT_1000b110 != 0) {
    recovered_10001cc0((undefined8 *)local_208,(undefined8 *)&DAT_1000b120,DAT_1000b110,in_RCX,in_R8
                      );
    local_208[DAT_1000b110] = '\0';
    iVar1 = Ram0000000000280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x43 < uVar2))
    {
      uVar2 = UINT_00280840;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(local_208);
      }
    }
    DAT_1000b110 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000b110
#undef DAT_1000b120
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280840
#undef local_208

#undef DAT_1000a123
#define DAT_1000a123 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5U)))
#undef DAT_1000a146
#define DAT_1000a146 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#define abStack_1c8 (*(byte (*)[456])(pf_stack_frame + 24))
#define in_stack_fffffffffffffeb8 (*(undefined1 *)(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a50
 */

void recovered_10006a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       byte *param_9,undefined *param_10,undefined8 param_11,undefined8 param_12,
                       undefined8 *param_13,undefined8 param_14)

{
  unsigned char pf_stack_frame[512] __attribute__((aligned(16))) = {0};

  uint extraout_EAX = 0;
  undefined *puVar1;
  byte *pbVar2;
  undefined8 extraout_RDX = 0;

  pbVar2 = &DAT_1000a146;
  if (param_9 != (byte *)0x0) {
    pbVar2 = param_9;
  }
  puVar1 = &DAT_1000a123;
  if (param_10 != (undefined *)0x0) {
    puVar1 = param_10;
  }
  recovered_10006430(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     abStack_1c8 + 0x80,0x140,pbVar2,puVar1,param_13,param_14,
                     in_stack_fffffffffffffeb8);
  if (0 < (int)extraout_EAX) {
    recovered_10006740((long)(abStack_1c8 + 0x80),(ulong)extraout_EAX,extraout_RDX,puVar1,param_13);
  }
  return;
}

#undef DAT_1000a123
#undef DAT_1000a146
#undef abStack_1c8
#undef in_stack_fffffffffffffeb8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ab0
 */

void recovered_10006ab0(undefined8 in_RCX,undefined8 *in_R8)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 extraout_RDX = 0;
  undefined8 extraout_RDX_00 = 0;

  lVar1 = recovered_10003760(((uintptr_t)pf_module_state+0x1ebU));
  recovered_10006740(((uintptr_t)pf_module_state+0x1ebU),lVar1,extraout_RDX,in_RCX,in_R8);
  lVar1 = recovered_10003760(((uintptr_t)pf_module_state+0x206U));
  recovered_10006740(((uintptr_t)pf_module_state+0x206U),lVar1,extraout_RDX_00,in_RCX,in_R8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

void recovered_10006af0(undefined8 in_RCX,undefined8 *in_R8)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 extraout_RDX = 0;
  undefined8 extraout_RDX_00 = 0;

  lVar1 = recovered_10003760(((uintptr_t)pf_module_state+0x209U));
  recovered_10006740(((uintptr_t)pf_module_state+0x209U),lVar1,extraout_RDX,in_RCX,in_R8);
  lVar1 = recovered_10003760(((uintptr_t)pf_module_state+0x206U));
  recovered_10006740(((uintptr_t)pf_module_state+0x206U),lVar1,extraout_RDX_00,in_RCX,in_R8);
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000b110
#define DAT_1000b110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11b2U)))
#undef DAT_1000b120
#define DAT_1000b120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11c2U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280840
#define UINT_00280840 (*(uint *)(0x280840U))
#undef UINT_00280844
#define UINT_00280844 (*(uint *)(0x280844U))
#define local_228 (*(char (*)[552])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b30
 */

bool recovered_10006b30(long param_1,long param_2,char *param_3,ulong param_4,undefined8 param_5)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  uVar3 = param_4;
  if (DAT_1000b110 != 0) {
    uVar3 = param_4 & 0xffffffff;
    recovered_10001cc0((undefined8 *)local_228,(undefined8 *)&DAT_1000b120,DAT_1000b110,param_4,
                       (undefined8 *)
                       CONCAT71((int7)((ulong)param_5 >> 8),param_2 == 0 || param_1 == 0));
    local_228[DAT_1000b110] = '\0';
    iVar1 = Ram0000000000280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x43 < uVar2))
    {
      uVar2 = UINT_00280840;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(local_228);
      }
    }
    DAT_1000b110 = 0;
  }
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x47 < uVar2)))) {
    uVar2 = UINT_00280844;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      uVar2 = (*(code *)(ulong)uVar2)((char *)param_1,(uint)param_2,param_3,(uint)uVar3 & 0xff);
      return uVar2 != 0;
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000b110
#undef DAT_1000b120
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280840
#undef UINT_00280844
#undef local_228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c50
 */

undefined8 recovered_10006c50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c60
 */

void recovered_10006c60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c70
 */

undefined1 recovered_10006c70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000a146
#define DAT_1000a146 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1102U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef str_1000a1e8
#define str_1000a1e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28aU)))
#undef str_1000a1f5
#define str_1000a1f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x297U)))
#undef str_1000a203
#define str_1000a203 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a5U)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define in_stack_ffffffffffffffc8 (*(undefined1 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c80
 */

/* WARNING: Type propagation algorithm not settling */

byte * recovered_10006c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                         undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7
                         ,undefined8 param_8,byte *param_9,char *param_10,undefined8 param_11,
                         undefined8 param_12,undefined8 *param_13,undefined8 param_14)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  ulong in_RSI;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;

  if (param_9 == (byte *)0x0 || param_10 == (char *)0x0) {
    DAT_1000b060 = 0x16;
    return (byte *)0x0;
  }
  iVar4 = recovered_10003790(param_9,(byte *)str_1000a1e8);
  if (iVar4 == 0) {
    uVar11 = 1;
LAB_10006f2e:
    pbVar6 = (byte *)recovered_10001bd0(0x340);
    if (pbVar6 == (byte *)0x0) {
      DAT_1000b060 = 0xc;
      return (byte *)0x0;
    }
    recovered_100029c0(pbVar6,0,0x340);
    *(undefined4 *)pbVar6 = uVar11;
    pbVar6[0x124] = iVar4 == 0;
    pbVar6[0x125] = iVar4 != 0;
    pbVar6[0x120] = 0xff;
    pbVar6[0x121] = 0xff;
    pbVar6[0x122] = 0xff;
    pbVar6[0x123] = 0xff;
    recovered_10006430(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       pbVar6 + 4,0xf1,&DAT_1000a146,param_9,param_13,param_14,
                       in_stack_ffffffffffffffc8);
    return pbVar6;
  }
  iVar5 = recovered_10003790(param_9,(byte *)str_1000a1f5);
  if (iVar5 == 0) {
    uVar11 = 2;
    goto LAB_10006f2e;
  }
  iVar5 = recovered_10003790(param_9,(byte *)str_1000a203);
  if (iVar5 == 0) {
    uVar11 = 3;
    goto LAB_10006f2e;
  }
  pbVar6 = (byte *)recovered_10001bd0(0x340);
  if (pbVar6 == (byte *)0x0) {
    DAT_1000b060 = 0xc;
    return (byte *)0x0;
  }
  recovered_100029c0(pbVar6,0,0x340);
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pcVar7 = recovered_10003cb0(param_10,'r');
  bVar13 = true;
  bVar12 = true;
  if (pcVar7 == (char *)0x0) {
    pcVar7 = recovered_10003cb0(param_10,'+');
    bVar12 = true;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = recovered_10003cb0(param_10,'a');
      bVar12 = pcVar7 != (char *)0x0;
    }
  }
  pbVar6[0x124] = bVar12;
  pcVar7 = recovered_10003cb0(param_10,'w');
  if ((pcVar7 == (char *)0x0) && (pcVar7 = recovered_10003cb0(param_10,'a'), pcVar7 == (char *)0x0))
  {
    pcVar7 = recovered_10003cb0(param_10,'+');
    bVar13 = pcVar7 != (char *)0x0;
  }
  pbVar6[0x125] = bVar13;
  pcVar7 = recovered_10003cb0(param_10,'a');
  pbVar6[0x126] = pcVar7 != (char *)0x0;
  pbVar6[0x120] = 0xff;
  pbVar6[0x121] = 0xff;
  pbVar6[0x122] = 0xff;
  pbVar6[0x123] = 0xff;
  recovered_10006430(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     pbVar6 + 4,0xf1,&DAT_1000a146,param_9,param_13,param_14,
                     in_stack_ffffffffffffffc8);
  recovered_100029c0((byte *)&local_34,0,0xc);
  iVar4 = Ram0000000000280800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000280804, iVar4 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x37 < uVar2)) {
    uVar2 = UINT_00280834;
    if (((code *)(ulong)uVar2 == (code *)0x0) ||
       (iVar4 = (*(code *)(ulong)uVar2)(param_9,&local_34), iVar4 == 0)) goto LAB_10006efe;
    pcVar7 = recovered_10003cb0(param_10,'w');
    if (local_30 != 0 && pcVar7 == (char *)0x0) {
      if (pbVar6[0x125] == 1) {
        uVar10 = (ulong)local_30;
        uVar9 = *(ulong *)(pbVar6 + 0x110);
        if (uVar9 < uVar10) {
          uVar3 = 0x100;
          if (uVar9 != 0) {
            uVar3 = uVar9;
          }
          do {
            in_RSI = uVar3;
            uVar3 = in_RSI * 2;
          } while (in_RSI < uVar10);
          puVar8 = (undefined8 *)recovered_10001c70(*(void **)(pbVar6 + 0x100),in_RSI);
          if (puVar8 == (undefined8 *)0x0) {
            DAT_1000b060 = 0xc;
            pbVar6[0x129] = 1;
            goto LAB_10006fb8;
          }
          *(undefined8 **)(pbVar6 + 0x100) = puVar8;
          *(ulong *)(pbVar6 + 0x110) = in_RSI;
          *(undefined8 **)(pbVar6 + 0xf8) = puVar8;
          uVar10 = (ulong)local_30;
        }
        else {
          puVar8 = *(undefined8 **)(pbVar6 + 0x100);
        }
        recovered_10001cc0(puVar8,(undefined8 *)(ulong)local_34,uVar10,uVar9,param_13);
      }
      else {
        *(ulong *)(pbVar6 + 0xf8) = (ulong)local_34;
      }
      *(ulong *)(pbVar6 + 0x108) = (ulong)local_30;
      bVar1 = pbVar6[0x126];
      goto joined_r0x10006f12;
    }
  }
  else {
LAB_10006efe:
    if (pbVar6[0x125] == 0) {
      DAT_1000b060 = 2;
LAB_10006fb8:
      recovered_10001c20(pbVar6);
      return (byte *)0x0;
    }
  }
  bVar1 = pbVar6[0x126];
joined_r0x10006f12:
  if (bVar1 == 1) {
    *(undefined8 *)(pbVar6 + 0x118) = *(undefined8 *)(pbVar6 + 0x108);
    return pbVar6;
  }
  return pbVar6;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000a146
#undef DAT_1000b060
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280834
#undef str_1000a1e8
#undef str_1000a1f5
#undef str_1000a203
#undef local_34
#undef local_30
#undef in_stack_ffffffffffffffc8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000a146
#define DAT_1000a146 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1102U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
#undef str_1000a1e8
#define str_1000a1e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28aU)))
#undef str_1000a1f5
#define str_1000a1f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x297U)))
#undef str_1000a203
#define str_1000a203 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a5U)))
#define uStack_34 (*(uint *)(pf_stack_frame + 28))
#define uStack_30 (*(ulong *)(pf_stack_frame + 32))
#define in_stack_ffffffffffffffc8 (*(undefined1 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007010
 */

/* WARNING: Type propagation algorithm not settling */

byte * recovered_10007010(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                         undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7
                         ,undefined8 param_8,byte *param_9,char *param_10,int *param_11,
                         int *param_12,undefined *param_13,undefined8 param_14)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  ulong in_RSI;
  undefined8 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_RDX = 0;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;
  undefined8 extraout_XMM0_Qa_01 = 0;

  if (param_11 != (int *)0x0) {
    if ((*param_11 == 0) && (*(char *)((long)param_11 + 0x127) == '\x01')) {
      uVar5 = Ram0000000000280800;
      param_12 = (int *)(ulong)uVar5;
      if ((uVar5 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) {
        uVar5 = Ram0000000000280808;
        param_12 = (int *)(ulong)uVar5;
        if (0xb < uVar5) {
          uVar5 = Ram0000000000280808;
          param_12 = (int *)(ulong)uVar5;
          if (0x3b < uVar5) {
            uVar5 = UINT_00280838;
            param_13 = (undefined *)(ulong)uVar5;
            if ((code *)param_13 != (code *)0x0) {
              param_12 = param_11 + 1;
              uStack_30 = 0x1000709a;
              uVar5 = (*(code *)param_13)((char *)param_12,*(void **)(param_11 + 0x3e),
                                          param_11[0x42]);
              if (uVar5 != 0) {
                *(undefined1 *)((long)param_11 + 0x127) = 0;
                goto LAB_100070c1;
              }
            }
          }
        }
      }
      DAT_1000b060 = 5;
      *(undefined1 *)((long)param_11 + 0x129) = 1;
    }
LAB_100070c1:
    if (*(void **)(param_11 + 0x40) != (void *)0x0) {
      uStack_30 = 0x100070d8;
      recovered_10001c20(*(void **)(param_11 + 0x40));
    }
    uStack_30 = 0x100070e0;
    recovered_10001c20(param_11);
    pbVar8 = recovered_10006c80(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,param_9,param_10,extraout_RDX,param_12,
                                (undefined8 *)param_13,param_14);
    return pbVar8;
  }
  if (param_9 == (byte *)0x0 || param_10 == (char *)0x0) {
    DAT_1000b060 = 0x16;
    return (byte *)0x0;
  }
  iVar3 = recovered_10003790(param_9,(byte *)str_1000a1e8);
  if (iVar3 == 0) {
    uVar11 = 1;
LAB_10006f2e:
    pbVar8 = (byte *)recovered_10001bd0(0x340);
    if (pbVar8 == (byte *)0x0) {
      DAT_1000b060 = 0xc;
      return (byte *)0x0;
    }
    recovered_100029c0(pbVar8,0,0x340);
    *(undefined4 *)pbVar8 = uVar11;
    pbVar8[0x124] = iVar3 == 0;
    pbVar8[0x125] = iVar3 != 0;
    pbVar8[0x120] = 0xff;
    pbVar8[0x121] = 0xff;
    pbVar8[0x122] = 0xff;
    pbVar8[0x123] = 0xff;
    recovered_10006430(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       pbVar8 + 4,0xf1,&DAT_1000a146,param_9,param_13,param_14,
                       in_stack_ffffffffffffffc8);
    return pbVar8;
  }
  iVar4 = recovered_10003790(param_9,(byte *)str_1000a1f5);
  if (iVar4 == 0) {
    uVar11 = 2;
    goto LAB_10006f2e;
  }
  iVar4 = recovered_10003790(param_9,(byte *)str_1000a203);
  if (iVar4 == 0) {
    uVar11 = 3;
    goto LAB_10006f2e;
  }
  pbVar8 = (byte *)recovered_10001bd0(0x340);
  if (pbVar8 == (byte *)0x0) {
    DAT_1000b060 = 0xc;
    return (byte *)0x0;
  }
  recovered_100029c0(pbVar8,0,0x340);
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pcVar6 = recovered_10003cb0(param_10,'r');
  bVar13 = true;
  bVar12 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10003cb0(param_10,'+');
    bVar12 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10003cb0(param_10,'a');
      bVar12 = pcVar6 != (char *)0x0;
    }
  }
  pbVar8[0x124] = bVar12;
  pcVar6 = recovered_10003cb0(param_10,'w');
  if ((pcVar6 == (char *)0x0) && (pcVar6 = recovered_10003cb0(param_10,'a'), pcVar6 == (char *)0x0))
  {
    pcVar6 = recovered_10003cb0(param_10,'+');
    bVar13 = pcVar6 != (char *)0x0;
  }
  pbVar8[0x125] = bVar13;
  pcVar6 = recovered_10003cb0(param_10,'a');
  pbVar8[0x126] = pcVar6 != (char *)0x0;
  pbVar8[0x120] = 0xff;
  pbVar8[0x121] = 0xff;
  pbVar8[0x122] = 0xff;
  pbVar8[0x123] = 0xff;
  recovered_10006430(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     pbVar8 + 4,0xf1,&DAT_1000a146,param_9,param_13,param_14,
                     in_stack_ffffffffffffffc8);
  recovered_100029c0((byte *)&uStack_34,0,0xc);
  iVar3 = Ram0000000000280800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) &&
      (uVar5 = Ram0000000000280808, 0xb < uVar5)) && (uVar5 = Ram0000000000280808, 0x37 < uVar5)) {
    uVar5 = UINT_00280834;
    if (((code *)(ulong)uVar5 == (code *)0x0) ||
       (uVar5 = (*(code *)(ulong)uVar5)((char *)param_9,&uStack_34), uVar5 == 0)) goto LAB_10006efe;
    pcVar6 = recovered_10003cb0(param_10,'w');
    if ((uint)uStack_30 != 0 && pcVar6 == (char *)0x0) {
      if (pbVar8[0x125] == 1) {
        uVar10 = uStack_30 & 0xffffffff;
        uVar9 = *(ulong *)(pbVar8 + 0x110);
        if (uVar9 < uVar10) {
          uVar2 = 0x100;
          if (uVar9 != 0) {
            uVar2 = uVar9;
          }
          do {
            in_RSI = uVar2;
            uVar2 = in_RSI * 2;
          } while (in_RSI < uVar10);
          puVar7 = (undefined8 *)recovered_10001c70(*(void **)(pbVar8 + 0x100),in_RSI);
          if (puVar7 == (undefined8 *)0x0) {
            DAT_1000b060 = 0xc;
            pbVar8[0x129] = 1;
            goto LAB_10006fb8;
          }
          *(undefined8 **)(pbVar8 + 0x100) = puVar7;
          *(ulong *)(pbVar8 + 0x110) = in_RSI;
          *(undefined8 **)(pbVar8 + 0xf8) = puVar7;
          uVar10 = uStack_30 & 0xffffffff;
        }
        else {
          puVar7 = *(undefined8 **)(pbVar8 + 0x100);
        }
        recovered_10001cc0(puVar7,(undefined8 *)(ulong)uStack_34,uVar10,uVar9,(undefined8 *)param_13
                          );
      }
      else {
        *(ulong *)(pbVar8 + 0xf8) = (ulong)uStack_34;
      }
      *(ulong *)(pbVar8 + 0x108) = (ulong)(uint)uStack_30;
      bVar1 = pbVar8[0x126];
      goto joined_r0x10006f12;
    }
  }
  else {
LAB_10006efe:
    if (pbVar8[0x125] == 0) {
      DAT_1000b060 = 2;
LAB_10006fb8:
      recovered_10001c20(pbVar8);
      return (byte *)0x0;
    }
  }
  bVar1 = pbVar8[0x126];
joined_r0x10006f12:
  if (bVar1 == 1) {
    *(undefined8 *)(pbVar8 + 0x118) = *(undefined8 *)(pbVar8 + 0x108);
    return pbVar8;
  }
  return pbVar8;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000a146
#undef DAT_1000b060
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280834
#undef UINT_00280838
#undef str_1000a1e8
#undef str_1000a1f5
#undef str_1000a203
#undef uStack_34
#undef uStack_30
#undef in_stack_ffffffffffffffc8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1102U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007100
 */

undefined8 recovered_10007100(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 uVar3;

  uVar3 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
    iVar1 = Ram0000000000280800;
    if ((iVar1 == 0x50414d57) &&
       (((iVar1 = Ram0000000000280804, iVar1 != 0 && (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
        (uVar2 = Ram0000000000280808, 0x3b < uVar2)))) {
      uVar2 = UINT_00280838;
      if (((code *)(ulong)uVar2 != (code *)0x0) &&
         (uVar2 = (*(code *)(ulong)uVar2)
                            ((char *)(param_1 + 1),*(void **)(param_1 + 0x3e),param_1[0x42]),
         uVar2 != 0)) {
        *(undefined1 *)((long)param_1 + 0x127) = 0;
        goto LAB_100071a2;
      }
    }
    DAT_1000b060 = 5;
    *(undefined1 *)((long)param_1 + 0x129) = 1;
    uVar3 = 0xffffffff;
  }
LAB_100071a2:
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    recovered_10001c20(*(void **)(param_1 + 0x40));
  }
  recovered_10001c20(param_1);
  return uVar3;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000b060
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071d0
 */

ulong recovered_100071d0(undefined8 *param_1,ulong param_2,ulong param_3,int *param_4,
                        undefined8 *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_4 == (int *)0x0) {
    return 0;
  }
  if ((char)param_4[0x49] == '\x01') {
    if ((*param_4 != 0) || (param_4[0x48] != -1)) {
      uVar5 = 0;
      do {
        uVar7 = 0;
        do {
          uVar3 = recovered_10007310(param_4,param_5);
          if (uVar3 == 0xffffffff) {
            return uVar5;
          }
          *(char *)((long)param_1 + uVar7) = (char)uVar3;
          uVar7 = uVar7 + 1;
        } while (param_2 != uVar7);
        uVar5 = uVar5 + 1;
        param_1 = (undefined8 *)((long)param_1 + param_2);
      } while (uVar5 != param_3);
      return param_3;
    }
    uVar5 = *(ulong *)(param_4 + 0x46);
    uVar7 = *(ulong *)(param_4 + 0x42) - uVar5;
    if (uVar5 <= *(ulong *)(param_4 + 0x42) && uVar7 != 0) {
      PF_PART8(auVar1, 8) = 0;
      PF_PART8(auVar1, 0) = param_2;
      PF_PART8(auVar2, 8) = 0;
      PF_PART8(auVar2, 0) = param_3;
      uVar6 = 0xffffffffffffffff;
      if (SUB168(auVar1 * auVar2,8) == 0) {
        uVar6 = param_3 * param_2;
      }
      uVar4 = uVar6;
      if (uVar7 < uVar6) {
        uVar4 = uVar7;
      }
      recovered_10001cc0(param_1,(undefined8 *)(uVar5 + *(long *)(param_4 + 0x3e)),uVar4,
                         param_3 * param_2,param_5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar4;
      if (uVar7 < uVar6) {
        *(undefined1 *)(param_4 + 0x4a) = 1;
      }
      if ((uVar4 | param_2) >> 0x20 == 0) {
        return (uVar4 & 0xffffffff) / (param_2 & 0xffffffff);
      }
      return uVar4 / param_2;
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
#undef DAT_1000a123
#define DAT_1000a123 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5U)))
#undef DAT_1000b110
#define DAT_1000b110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11b2U)))
#undef DAT_1000b120
#define DAT_1000b120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11c2U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280840
#define UINT_00280840 (*(uint *)(0x280840U))
#undef UINT_00280844
#define UINT_00280844 (*(uint *)(0x280844U))
#define local_218 (*(char (*)[536])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007310
 */

uint recovered_10007310(int *param_1,undefined8 *in_R8)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x49] != '\x01') {
    return 0xffffffff;
  }
  uVar2 = param_1[0x48];
  if (uVar2 != 0xffffffff) {
    param_1[0x48] = -1;
    return uVar2;
  }
  if (*param_1 == 1) {
    uVar4 = *(ulong *)(param_1 + 0xce);
    if (uVar4 < *(ulong *)(param_1 + 0xcc)) {
LAB_1000736a:
      *(ulong *)(param_1 + 0xce) = uVar4 + 1;
      return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
    }
    if (DAT_1000b110 != 0) {
      recovered_10001cc0((undefined8 *)local_218,(undefined8 *)&DAT_1000b120,DAT_1000b110,uVar4,
                         in_R8);
      local_218[DAT_1000b110] = '\0';
      iVar1 = Ram0000000000280800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
          (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x43 < uVar2)
         ) {
        uVar2 = UINT_00280840;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          (*(code *)(ulong)uVar2)(local_218);
        }
      }
      DAT_1000b110 = 0;
    }
    iVar1 = Ram0000000000280800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x47 < uVar2))))
    {
      uVar2 = UINT_00280844;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        uVar2 = (*(code *)(ulong)uVar2)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_1000a123,0);
        if (uVar2 != 0) {
          lVar3 = recovered_10003760((long)param_1 + 0x12a);
          *(long *)(param_1 + 0xcc) = lVar3 + 1;
          *(undefined1 *)((long)param_1 + lVar3 + 0x12a) = 10;
          *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
          uVar4 = 0;
          goto LAB_1000736a;
        }
      }
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
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000a123
#undef DAT_1000b110
#undef DAT_1000b120
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280840
#undef UINT_00280844
#undef local_218

#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1102U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007500
 */

long recovered_10007500(undefined8 *param_1,long param_2,long param_3,uint *param_4,
                       undefined8 *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (undefined8 *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((long)param_4 + 0x125) != '\x01')))) {
    return 0;
  }
  uVar6 = param_2 * param_3;
  if ((*param_4 & 0xfffffffe) == 2) {
    recovered_10006740((long)param_1,uVar6,param_3,param_4,param_5);
    *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar6;
  }
  else {
    if (*(char *)((long)param_4 + 0x126) == '\0') {
      uVar5 = *(ulong *)(param_4 + 0x46);
    }
    else {
      uVar5 = *(ulong *)(param_4 + 0x42);
      *(ulong *)(param_4 + 0x46) = uVar5;
    }
    puVar7 = (undefined8 *)(uVar5 + uVar6);
    puVar3 = *(undefined8 **)(param_4 + 0x44);
    if (puVar3 < puVar7) {
      puVar2 = (undefined8 *)0x100;
      if (puVar3 != (undefined8 *)0x0) {
        puVar2 = puVar3;
      }
      do {
        puVar3 = puVar2;
        puVar2 = (undefined8 *)((long)(uintptr_t)puVar3 * 2);
      } while (puVar3 < puVar7);
      lVar4 = recovered_10001c70(*(void **)(param_4 + 0x40),(ulong)puVar3);
      if (lVar4 == 0) {
        DAT_1000b060 = 0xc;
        *(undefined1 *)((long)param_4 + 0x129) = 1;
        return 0;
      }
      *(long *)(param_4 + 0x40) = lVar4;
      *(undefined8 **)(param_4 + 0x44) = puVar3;
      *(long *)(param_4 + 0x3e) = lVar4;
      uVar5 = *(ulong *)(param_4 + 0x46);
    }
    uVar1 = *(ulong *)(param_4 + 0x42);
    if (uVar1 <= uVar5 && uVar5 - uVar1 != 0) {
      recovered_100029c0((byte *)(uVar1 + *(long *)(param_4 + 0x40)),0,uVar5 - uVar1);
      uVar5 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10001cc0((undefined8 *)(uVar5 + *(long *)(param_4 + 0x40)),param_1,uVar6,param_4,
                       puVar7);
    uVar6 = uVar6 + *(long *)(param_4 + 0x46);
    *(ulong *)(param_4 + 0x46) = uVar6;
    if (*(ulong *)(param_4 + 0x42) < uVar6) {
      *(ulong *)(param_4 + 0x42) = uVar6;
    }
    *(undefined2 *)((long)param_4 + 0x127) = 1;
  }
  return param_3;
}

#undef DAT_1000b060

#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1102U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007690
 */

undefined8 recovered_10007690(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000b060 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_1000769e;
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
LAB_1000769e:
  DAT_1000b060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000b060

#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1102U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007710
 */

undefined8 recovered_10007710(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1000b060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000b060

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1102U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007740
 */

undefined8 recovered_10007740(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (((param_1 == (int *)0x0) || (*param_1 != 0)) || (*(char *)((long)param_1 + 0x127) != '\x01'))
  {
    return 0;
  }
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x3b < uVar2)))) {
    uVar2 = UINT_00280838;
    if (((code *)(ulong)uVar2 != (code *)0x0) &&
       (uVar2 = (*(code *)(ulong)uVar2)
                          ((char *)(param_1 + 1),*(void **)(param_1 + 0x3e),param_1[0x42]),
       uVar2 != 0)) {
      *(undefined1 *)((long)param_1 + 0x127) = 0;
      return 0;
    }
  }
  DAT_1000b060 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000b060
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077f0
 */

undefined1 recovered_100077f0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

undefined1 recovered_10007810(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007830
 */

void recovered_10007830(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007850
 */

uint recovered_10007850(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1102U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028083c
#define UINT_0028083c (*(uint *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007880
 */

undefined8 recovered_10007880(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  if (param_1 == 0) {
    uVar3 = 0x16;
  }
  else {
    iVar1 = Ram0000000000280800;
    uVar3 = 5;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x3f < uVar2))
    {
      uVar2 = UINT_0028083c;
      if (((code *)(ulong)uVar2 != (code *)0x0) &&
         (uVar2 = (*(code *)(ulong)uVar2)((char *)param_1), uVar2 != 0)) {
        return 0;
      }
    }
  }
  DAT_1000b060 = uVar3;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000b060
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028083c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1102U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
#undef UINT_0028083c
#define UINT_0028083c (*(uint *)(0x28083cU))
#define local_2c (*(uint *)(pf_stack_frame + 20))
#define local_28 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007900
 */

undefined8 recovered_10007900(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000b060 = 0x16;
    return 0xffffffff;
  }
  recovered_100029c0((byte *)&local_2c,0,0xc);
  iVar1 = Ram0000000000280800;
  uVar3 = 2;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x37 < uVar2)) {
    uVar2 = UINT_00280834;
    if (((code *)(ulong)uVar2 != (code *)0x0) &&
       (uVar2 = (*(code *)(ulong)uVar2)((char *)param_1,&local_2c), uVar2 != 0)) {
      iVar1 = Ram0000000000280800;
      uVar3 = 5;
      if (((iVar1 == 0x50414d57) &&
          ((iVar1 = Ram0000000000280804, iVar1 != 0 && (uVar2 = Ram0000000000280808, 0xb < uVar2))))
         && (uVar2 = Ram0000000000280808, 0x3b < uVar2)) {
        uVar2 = UINT_00280838;
        if (((((code *)(ulong)uVar2 != (code *)0x0) &&
             (uVar2 = (*(code *)(ulong)uVar2)((char *)param_2,(void *)(ulong)local_2c,local_28),
             uVar2 != 0)) && (iVar1 = Ram0000000000280800, iVar1 == 0x50414d57)) &&
           (((iVar1 = Ram0000000000280804, iVar1 != 0 && (uVar2 = Ram0000000000280808, 0xb < uVar2))
            && (uVar2 = Ram0000000000280808, 0x3f < uVar2)))) {
          uVar2 = UINT_0028083c;
          if (((code *)(ulong)uVar2 != (code *)0x0) &&
             (uVar2 = (*(code *)(ulong)uVar2)((char *)param_1), uVar2 != 0)) {
            return 0;
          }
        }
      }
    }
  }
  DAT_1000b060 = uVar3;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000b060
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280834
#undef UINT_00280838
#undef UINT_0028083c
#undef local_2c
#undef local_28

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a70
 */

ulong recovered_10007a70(long param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4,
                        undefined8 *param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined7 uVar6;

  uVar6 = (undefined7)((ulong)param_4 >> 8);
  uVar5 = param_2 == (undefined8 *)0x0 || param_1 == 0;
  if (param_3 != (ulong *)0x0 && (param_2 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar4 = 0;
    recovered_100029c0((byte *)&local_34,0,0xc);
    iVar1 = Ram0000000000280800;
    if (iVar1 != 0x50414d57) goto LAB_10007b2f;
    iVar1 = Ram0000000000280804;
    if (((iVar1 != 0) && (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
       (uVar2 = Ram0000000000280808, 0x37 < uVar2)) {
      uVar2 = UINT_00280834;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        uVar2 = (*(code *)(ulong)uVar2)((char *)param_1,&local_34);
        if (uVar2 != 0) {
          puVar3 = (undefined8 *)recovered_10001bd0((ulong)(local_30 + (local_30 == 0)));
          if (puVar3 != (undefined8 *)0x0) {
            if ((ulong)local_30 == 0) {
              uVar4 = 0;
            }
            else {
              recovered_10001cc0(puVar3,(undefined8 *)(ulong)local_34,(ulong)local_30,
                                 CONCAT71(uVar6,uVar5),param_5);
              uVar4 = (ulong)local_30;
            }
            *param_2 = puVar3;
            *param_3 = uVar4;
            uVar4 = CONCAT71((int7)((ulong)puVar3 >> 8),1);
            goto LAB_10007b2f;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_10007b2f:
  return uVar4 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280834
#undef local_34
#undef local_30

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b50
 */

bool recovered_10007b50(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if ((((param_1 != 0) && (param_2 != 0 || param_3 == 0)) &&
      (iVar1 = Ram0000000000280800, iVar1 == 0x50414d57)) &&
     (((iVar1 = Ram0000000000280804, iVar1 != 0 && (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
      (uVar2 = Ram0000000000280808, 0x3b < uVar2)))) {
    uVar2 = UINT_00280838;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      uVar2 = (*(code *)(ulong)uVar2)((char *)param_1,(void *)param_2,(uint)param_3);
      return uVar2 != 0;
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bc0
 */

undefined8 recovered_10007bc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bd0
 */

void recovered_10007bd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007be0
 */

undefined8 recovered_10007be0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bf0
 */

undefined8 recovered_10007bf0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c00
 */

undefined8 recovered_10007c00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c10
 */

int recovered_10007c10(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_1000a177
#define DAT_1000a177 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x219U)))
#undef str_1000a17a
#define str_1000a17a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21cU)))
#undef str_1000a187
#define str_1000a187 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x229U)))
#undef str_1000a191
#define str_1000a191 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x233U)))
#undef str_1000a1a5
#define str_1000a1a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x247U)))
#undef str_1000a1b3
#define str_1000a1b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x255U)))
#undef str_1000a1c5
#define str_1000a1c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x267U)))
#undef str_1000a1d1
#define str_1000a1d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x273U)))
#undef str_1000a1e2
#define str_1000a1e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x284U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c50
 */

char * recovered_10007c50(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000a177;
  default:
    return str_1000a1e2;
  case 2:
    return str_1000a17a;
  case 5:
    return str_1000a187;
  case 9:
    return str_1000a191;
  case 0xc:
    return str_1000a1a5;
  case 0xd:
    return str_1000a1b3;
  case 0x11:
    return str_1000a1c5;
  case 0x16:
    return str_1000a1d1;
  }
}

#undef DAT_1000a177
#undef str_1000a17a
#undef str_1000a187
#undef str_1000a191
#undef str_1000a1a5
#undef str_1000a1b3
#undef str_1000a1c5
#undef str_1000a1d1
#undef str_1000a1e2

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d20
 */

undefined8 recovered_10007d20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d30
 */

undefined8 recovered_10007d30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000b320
#define DAT_1000b320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d40
 */

void recovered_10007d40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000b320 = DAT_1000b320 + 1;
  return;
}

#undef DAT_1000b320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d60
 */

void recovered_10007d60(longdouble in_stack_00000008)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10004570((double)in_stack_00000008);
  return;
}


#define local_218 (*(byte (*)[536])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d80
 */

ulong recovered_10007d80(byte *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 *param_5)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 extraout_RDX = 0;
  ulong uVar2;

  uVar1 = recovered_10005550(local_218,0x200,param_1,param_2);
  if (0 < (int)(uint)uVar1) {
    uVar2 = 0x1ff;
    if ((uint)uVar1 < 0x1ff) {
      uVar2 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
    recovered_10006740((long)local_218,uVar2,extraout_RDX,param_2,param_5);
  }
  return uVar1;
}

#undef local_218

#define local_2d8 (*(byte (*)[728])(pf_stack_frame + 24))
#define local_d8 (*(undefined1 (*)[216])(pf_stack_frame + 536))
#define local_d0 (*(undefined8 *)(pf_stack_frame + 544))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 552))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 560))
#define local_b8 (*(undefined8 * *)(pf_stack_frame + 568))
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
 * Address: 0x10007dd0
 */

ulong recovered_10007dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,byte *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                        undefined8 *param_13,undefined8 param_14,undefined1 param_15)

{
  unsigned char pf_stack_frame[784] __attribute__((aligned(16))) = {0};

  char in_AL;
  ulong uVar1;
  uint *puVar2;
  undefined8 extraout_RDX = 0;
  ulong uVar3;

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
  puVar2 = local_28;
  local_d0 = param_10;
  local_c8 = param_11;
  local_c0 = param_12;
  local_b8 = param_13;
  local_b0 = param_14;
  uVar1 = recovered_10005550(local_2d8,0x200,param_9,puVar2);
  if (0 < (int)(uint)uVar1) {
    uVar3 = 0x1ff;
    if ((uint)uVar1 < 0x1ff) {
      uVar3 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
    recovered_10006740((long)local_2d8,uVar3,extraout_RDX,puVar2,param_13);
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
__attribute__((naked,noreturn)) void recovered_10007e90(void *context,...){
 __asm__ volatile("movq 64(%rdi),%rsp\nmovq 48(%rdi),%rbp\njmp *56(%rdi)");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10007ea0(void *context){__asm__ volatile("movq %rbx, (%rdi)\nmovq %rbp, 8(%rdi)\nmovq %r12, 0x10(%rdi)\nmovq %r13, 0x18(%rdi)\nmovq %r14, 0x20(%rdi)\nmovq %r15, 0x28(%rdi)\nleaq 8(%rsp), %rdx\nmovq %rdx, 0x30(%rdi)\nmovq (%rsp), %rdx\nmovq %rdx, 0x38(%rdi)\nstmxcsr 0x40(%rdi)\nfnstcw 0x44(%rdi)\nxorl %eax, %eax\nretq \nud2 \nnopw %cs:(%rax, %rax)");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007ee0(void *context,int value){__asm__ volatile("movq %rdi, %rdx\nmovl %esi, %eax\ntestl %eax, %eax\njne Lpf_context_10007eee\nmovl $1, %eax\nLpf_context_10007eee:\nldmxcsr 0x40(%rdx)\nfldcw 0x44(%rdx)\nmovq (%rdx), %rbx\nmovq 8(%rdx), %rbp\nmovq 0x10(%rdx), %r12\nmovq 0x18(%rdx), %r13\nmovq 0x20(%rdx), %r14\nmovq 0x28(%rdx), %r15\nmovq 0x30(%rdx), %rsp\njmpq *0x38(%rdx)\nud2 \nnopw %cs:(%rax, %rax)");}


#undef DAT_10007f71
#define DAT_10007f71 (*(uint8_t *)(0x10007f71U))
#undef DAT_1000a214
#define DAT_1000a214 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b6U)))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f20
 */

void recovered_10007f20(void)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1000a214;
  local_50 = &DAT_10007f71;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001ba0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10007f71
#undef DAT_1000a214
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fa0
 */

undefined8 recovered_10007fa0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fb0
 */

void recovered_10007fb0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007fc0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10007f20();
}


#undef DAT_1000b328
#define DAT_1000b328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13caU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fc0
 */

void recovered_10007fc0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long extraout_RAX;

  recovered_10008480(param_1);
  if (extraout_RAX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007f20();
  }
  *(long *)(extraout_RAX + 0x10) = DAT_1000b328;
  *(undefined1 *)(extraout_RAX + 0x34) = 0;
  DAT_1000b328 = extraout_RAX;
  recovered_100084c0(extraout_RAX);
  return;
}

#undef DAT_1000b328

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ff0
 */

long recovered_10007ff0(long in_RDI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001bd0(in_RDI + (ulong)(in_RDI == 0));
  if (lVar1 == 0) {
    recovered_10001ba0();
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008020
 */

long recovered_10008020(long in_RDI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001bd0(in_RDI + (ulong)(in_RDI == 0));
  if (lVar1 == 0) {
    recovered_10001ba0();
  }
  return lVar1;
}


#undef DAT_1000a224
#define DAT_1000a224 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c6U)))
#undef LAB_100080bd
#define LAB_100080bd (*(uint8_t *)(0x100080bdU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008050
 */

void recovered_10008050(void *in_RDI)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1000a224;
  local_50 = &LAB_100080bd;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(in_RDI);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1000a224
#undef LAB_100080bd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef auStack_40
#undef local_50
#undef local_48

#undef DAT_1000a234
#define DAT_1000a234 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef LAB_1000815d
#define LAB_1000815d (*(uint8_t *)(0x1000815dU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080f0
 */

void recovered_100080f0(void *in_RDI)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1000a234;
  local_50 = &LAB_1000815d;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(in_RDI);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1000a234
#undef LAB_1000815d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000a244
#define DAT_1000a244 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e6U)))
#undef LAB_100081fd
#define LAB_100081fd (*(uint8_t *)(0x100081fdU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008190
 */

void recovered_10008190(void *in_RDI)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1000a244;
  local_50 = &LAB_100081fd;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(in_RDI);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1000a244
#undef LAB_100081fd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000a254
#define DAT_1000a254 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f6U)))
#undef LAB_1000829d
#define LAB_1000829d (*(uint8_t *)(0x1000829dU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008230
 */

void recovered_10008230(void *in_RDI)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1000a254;
  local_50 = &LAB_1000829d;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(in_RDI);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1000a254
#undef LAB_1000829d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082d0
 */

undefined8 recovered_100082d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082e0
 */

uint recovered_100082e0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082f0
 */

void recovered_100082f0(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008300
 */

void recovered_10008300(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000b338
#define DAT_1000b338 (*(int *)(((uintptr_t)pf_module_state + 0x13daU)))
#undef DAT_1000b340
#define DAT_1000b340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13e2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008310
 */

long recovered_10008310(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong in_RDI;
  long lVar5;

  in_RDI = param_1 + 0x38 + (ulong)(param_1 == 0);
  lVar2 = recovered_10001bd0(in_RDI);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007f20();
  }
  if (in_RDI != 0) {
    if (in_RDI < 8) {
      uVar3 = 0;
    }
    else {
      if (in_RDI < 0x20) {
        uVar4 = 0;
LAB_1000837c:
        uVar3 = in_RDI & 0xfffffffffffffff8;
        do {
          *(undefined8 *)(lVar2 + uVar4) = 0;
          uVar4 = uVar4 + 8;
          if (uVar3 == uVar4) goto LAB_100083af;
        } while( true );
      }
      uVar3 = in_RDI & 0xffffffffffffffe0;
      uVar4 = 0;
      do {
        *(undefined8 *)(lVar2 + uVar4) = 0;
        ((undefined8 *)(lVar2 + uVar4))[1] = 0;
        puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar4);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar4 = uVar4 + 0x20;
      } while (uVar3 != uVar4);
      if (in_RDI == uVar3) goto LAB_100083b4;
      uVar4 = uVar3;
      if ((in_RDI & 0x18) != 0) goto LAB_1000837c;
    }
    do {
      *(undefined1 *)(lVar2 + uVar3) = 0;
      uVar3 = uVar3 + 1;
LAB_100083af:
    } while (in_RDI != uVar3);
  }
LAB_100083b4:
  DAT_1000b338 = DAT_1000b338 + 1 + (uint)(DAT_1000b338 == -1);
  if (DAT_1000b340 == 0) {
LAB_100083fe:
    *(int *)(lVar2 + 0x30) = DAT_1000b338;
    *(long *)(lVar2 + 0x18) = DAT_1000b340;
    DAT_1000b340 = lVar2;
    return lVar2 + 0x38;
  }
  do {
    lVar5 = DAT_1000b340;
    while (*(int *)(lVar5 + 0x30) != DAT_1000b338) {
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) goto LAB_100083fe;
    }
    DAT_1000b338 = DAT_1000b338 + 1 + (uint)(DAT_1000b338 == -1);
  } while( true );
}

#undef DAT_1000b338
#undef DAT_1000b340

#undef DAT_1000b340
#define DAT_1000b340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13e2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008420
 */

void recovered_10008420(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *in_RDI;
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;

  if (param_1 == 0) {
    return;
  }
  in_RDI = (void *)(param_1 + -0x38);
  pvVar1 = DAT_1000b340;
  if (DAT_1000b340 == in_RDI) {
    puVar2 = &DAT_1000b340;
  }
  else {
    do {
      pvVar3 = pvVar1;
      if (pvVar3 == (void *)0x0) goto LAB_1000846f;
      pvVar1 = *(void **)((long)pvVar3 + 0x18);
    } while (*(void **)((long)pvVar3 + 0x18) != in_RDI);
    puVar2 = (undefined8 *)((long)pvVar3 + 0x18);
  }
  *puVar2 = *(undefined8 *)(param_1 + -0x20);
  *(undefined8 *)(param_1 + -0x20) = 0;
LAB_1000846f:
  recovered_10001c20(in_RDI);
  return;
}

#undef DAT_1000b340

#undef DAT_1000b340
#define DAT_1000b340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13e2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008480
 */

void recovered_10008480(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = DAT_1000b340;
  if (DAT_1000b340 != param_1 && DAT_1000b340 != 0) {
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

#undef DAT_1000b340

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084c0
 */

long recovered_100084c0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_1000b328
#define DAT_1000b328 (*(void * *)(((uintptr_t)pf_module_state + 0x13caU)))
#undef DAT_1000b340
#define DAT_1000b340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13e2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084d0
 */

void recovered_100084d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *in_RDI;
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;

  in_RDI = DAT_1000b328;
  if (DAT_1000b328 != (void *)0x0) {
    puVar2 = (undefined8 *)((long)DAT_1000b328 + 0x10);
    DAT_1000b328 = *(void **)((long)DAT_1000b328 + 0x10);
    *puVar2 = 0;
    if (*(char *)((long)in_RDI + 0x34) == '\0') {
      if (*(code **)((long)in_RDI + 8) != (code *)0x0) {
        (**(code **)((long)in_RDI + 8))((long)in_RDI + 0x38);
      }
      pvVar1 = DAT_1000b340;
      if (DAT_1000b340 == in_RDI) {
        puVar2 = &DAT_1000b340;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_1000854d;
          pvVar1 = *(void **)((long)pvVar3 + 0x18);
        } while (*(void **)((long)pvVar3 + 0x18) != in_RDI);
        puVar2 = (undefined8 *)((long)pvVar3 + 0x18);
      }
      *puVar2 = *(undefined8 *)((long)in_RDI + 0x18);
      *(undefined8 *)((long)in_RDI + 0x18) = 0;
LAB_1000854d:
      recovered_10001c20(in_RDI);
      return;
    }
  }
  return;
}

#undef DAT_1000b328
#undef DAT_1000b340

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008560
 */

void recovered_10008560(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x38) = param_2;
  *(undefined8 *)(param_1 + -0x30) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10008590((undefined8 *)(param_1 + -0x38));
}


#undef DAT_1000b328
#define DAT_1000b328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x13caU)))
#undef DAT_1000b330
#define DAT_1000b330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x13d2U)))
#define cStack_36 (*(char *)(pf_stack_frame + 26))
#define uStack_35 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_38 (*(undefined2 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008590
 */

void recovered_10008590(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;

  if (DAT_1000b330 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_1000b330;
    do {
      local_30 = 0;
      local_38 = 0;
      cStack_36 = '\0';
      uStack_35 = 0;
      uStack_34 = 0;
      uVar3 = recovered_10009070((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[4] = plVar4;
        param_1[5] = CONCAT44(local_30,uStack_34);
        recovered_10008720(param_1);
        puVar2 = DAT_1000b328;
        if (DAT_1000b328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10007f20();
        }
        *(undefined1 *)((long)DAT_1000b328 + 0x34) = 1;
        puVar2[4] = 0;
        puVar2[5] = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10008590(puVar2);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007f20();
}

#undef DAT_1000b328
#undef DAT_1000b330
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38
#undef local_30

#undef DAT_1000b328
#define DAT_1000b328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x13caU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008610
 */

void recovered_10008610(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000b328;
  if (DAT_1000b328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007f20();
  }
  *(undefined1 *)((long)DAT_1000b328 + 0x34) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10008590(puVar1);
}

#undef DAT_1000b328

#undef DAT_1000b330
#define DAT_1000b330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x13d2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008640
 */

void recovered_10008640(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000b330;
  DAT_1000b330 = param_1;
  return;
}

#undef DAT_1000b330

#undef DAT_1000b330
#define DAT_1000b330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13d2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008660
 */

void recovered_10008660(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1000b330;
  if (DAT_1000b330 == param_1) {
    puVar2 = &DAT_1000b330;
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

#undef DAT_1000b330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086a0
 */

void recovered_100086a0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008590(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086b0
 */

void recovered_100086b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007f20();
}


#undef DAT_1000b330
#define DAT_1000b330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x13d2U)))
#undef DAT_1000b340
#define DAT_1000b340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x13e2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086c0
 */

void recovered_100086c0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000b340;
  if (DAT_1000b340 != param_1 && DAT_1000b340 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar1 + 6) == (int)param_1) goto LAB_10008705;
      puVar1 = (undefined8 *)puVar1[3];
    } while ((puVar1 != (undefined8 *)0x0) && (puVar1 != param_1));
  }
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007f20();
  }
LAB_10008705:
  if (DAT_1000b330 != (undefined8 *)0x0) {
    DAT_1000b330 = (undefined8 *)*DAT_1000b330;
  }
  recovered_10008720(puVar1);
  return;
}

#undef DAT_1000b330
#undef DAT_1000b340

#undef DAT_1000b330
#define DAT_1000b330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x13d2U)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008720
 */

undefined8 recovered_10008720(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  long *plVar3;

  if (DAT_1000b330 != (long *)0x0) {
    plVar1 = (long *)param_1[4];
    do {
      plVar3 = DAT_1000b330;
      if (DAT_1000b330 == plVar1) {
        *(ulong *)((long)DAT_1000b330 + 0xc) =
             CONCAT44((int)*(undefined8 *)((long)param_1 + 0x2c),
                      (int)((ulong)*(undefined8 *)((long)param_1 + 0x2c) >> 0x20));
        uVar2 = *(undefined4 *)(param_1 + 5);
LAB_100087b4:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10007e90((long)plVar3);
        recovered_100086c0(plVar3);
        return 0;
      }
      local_30 = 0;
      local_38 = 0;
      recovered_10009070((long)DAT_1000b330,(byte *)*param_1,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        *(undefined4 *)((long)plVar3 + 0xc) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)(plVar3 + 2) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_100087b4;
      }
      DAT_1000b330 = (long *)*plVar3;
    } while (DAT_1000b330 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007f20();
}

#undef DAT_1000b330
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087c0
 */

undefined8 recovered_100087c0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100086c0(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087d0
 */

undefined8 recovered_100087d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087e0
 */

void recovered_100087e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007f20();
}


#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1162U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087f0
 */

long recovered_100087f0(long *param_1,undefined8 param_2,undefined8 *param_3)

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
        if (lVar3 == lVar4) goto LAB_100088b4;
      }
      else {
        lVar6 = 0;
        do {
          cVar1 = *(char *)(lVar3 + lVar6);
          cVar2 = *(char *)(lVar4 + lVar6);
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_100088b4;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar5 != &DAT_1000b0c0) goto LAB_100088bc;
      puVar5 = (undefined8 *)puVar5[2];
      bVar7 = puVar5 != (undefined8 *)0x0;
    } while ((puVar5 != param_3) && (puVar5 != (undefined8 *)0x0));
  }
  if (bVar7) {
LAB_100088b4:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x10);
  }
  else {
LAB_100088bc:
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_1000b0c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088d0
 */

void recovered_100088d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001ba0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088e0
 */

undefined8 recovered_100088e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088f0
 */

bool recovered_100088f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008910
 */

bool recovered_10008910(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008940
 */

bool recovered_10008940(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008960
 */

bool recovered_10008960(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008990
 */

bool recovered_10008990(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089b0
 */

byte recovered_100089b0(undefined8 in_stack_00000008,ushort in_stack_00000010)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089f0
 */

bool recovered_100089f0(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fc8
#define DAT_10009fc8 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000a080
#define DAT_1000a080 (*(double *)(((uintptr_t)pf_module_state + 0x122U)))
#undef DAT_1000a088
#define DAT_1000a088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_1000a090
#define DAT_1000a090 (*(double *)(((uintptr_t)pf_module_state + 0x132U)))
#undef DAT_1000a098
#define DAT_1000a098 (*(double *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef _DAT_1000a088
#define _DAT_1000a088 (*(double *)(((uintptr_t)pf_module_state + 0x12aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10008a20(double param_1)

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
  if (_DAT_1000a088 < param_1) {
    return DAT_1000a080;
  }
  dVar4 = 0.0;
  if (DAT_1000a090 <= param_1) {
    uVar1 = 0;
    if (DAT_10009f60 < param_1) {
      uVar1 = 0;
      do {
        param_1 = param_1 * DAT_10009f60;
        uVar1 = uVar1 + 1;
      } while (DAT_10009f60 < param_1);
    }
    for (; param_1 < DAT_10009fc8; param_1 = param_1 * DAT_10009f60) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_10009f68;
    dVar5 = DAT_10009f68;
    dVar6 = DAT_10009f68;
    do {
      dVar7 = (param_1 / dVar5) * dVar6;
      dVar9 = (param_1 / (double)(iVar2 + -2)) * dVar7;
      dVar8 = (param_1 / (double)(iVar2 + -1)) * dVar9;
      dVar6 = (param_1 / (double)iVar2) * dVar8;
      dVar4 = dVar4 + dVar7 + dVar9 + dVar8 + dVar6;
      dVar5 = dVar5 + DAT_1000a098;
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

#undef DAT_10009f60
#undef DAT_10009f68
#undef DAT_10009fc8
#undef DAT_1000a080
#undef DAT_1000a088
#undef DAT_1000a090
#undef DAT_1000a098
#undef _DAT_1000a088

#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fc8
#define DAT_10009fc8 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000a080
#define DAT_1000a080 (*(double *)(((uintptr_t)pf_module_state + 0x122U)))
#undef DAT_1000a088
#define DAT_1000a088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_1000a090
#define DAT_1000a090 (*(double *)(((uintptr_t)pf_module_state + 0x132U)))
#undef DAT_1000a098
#define DAT_1000a098 (*(double *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef DAT_1000a0a0
#define DAT_1000a0a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef _DAT_1000a088
#define _DAT_1000a088 (*(double *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef _DAT_1000a0a0
#define _DAT_1000a0a0 (*(float *)(((uintptr_t)pf_module_state + 0x142U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10008b90(float param_1)

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
  if (_DAT_1000a088 < dVar6) {
    return (float)DAT_1000a080;
  }
  dVar5 = 0.0;
  if (DAT_1000a090 <= dVar6) {
    uVar1 = 0;
    if (_DAT_1000a0a0 < param_1) {
      uVar1 = 0;
      do {
        dVar6 = dVar6 * DAT_10009f60;
        uVar1 = uVar1 + 1;
      } while (DAT_10009f60 < dVar6);
    }
    for (; dVar6 < DAT_10009fc8; dVar6 = dVar6 * DAT_10009f60) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_10009f68;
    dVar5 = DAT_10009f68;
    dVar7 = DAT_10009f68;
    do {
      dVar8 = (dVar6 / dVar4) * dVar7;
      dVar10 = (dVar6 / (double)(iVar2 + -2)) * dVar8;
      dVar9 = (dVar6 / (double)(iVar2 + -1)) * dVar10;
      dVar7 = (dVar6 / (double)iVar2) * dVar9;
      dVar5 = dVar5 + dVar8 + dVar10 + dVar9 + dVar7;
      dVar4 = dVar4 + DAT_1000a098;
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

#undef DAT_10009f60
#undef DAT_10009f68
#undef DAT_10009fc8
#undef DAT_1000a080
#undef DAT_1000a088
#undef DAT_1000a090
#undef DAT_1000a098
#undef DAT_1000a0a0
#undef _DAT_1000a088
#undef _DAT_1000a0a0

#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009f68
#define DAT_10009f68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009fc8
#define DAT_10009fc8 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000a080
#define DAT_1000a080 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x122U)))
#undef DAT_1000a088
#define DAT_1000a088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_1000a090
#define DAT_1000a090 (*(double *)(((uintptr_t)pf_module_state + 0x132U)))
#undef DAT_1000a098
#define DAT_1000a098 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef _DAT_1000a088
#define _DAT_1000a088 (*(double *)(((uintptr_t)pf_module_state + 0x12aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008d20(longdouble in_stack_00000008)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;

  dVar4 = (double)in_stack_00000008;
  if ((dVar4 <= _DAT_1000a088) && (DAT_1000a090 <= dVar4)) {
    uVar1 = 0;
    if (DAT_10009f60 < dVar4) {
      uVar1 = 0;
      do {
        dVar4 = dVar4 * DAT_10009f60;
        uVar1 = uVar1 + 1;
      } while (DAT_10009f60 < dVar4);
    }
    for (; dVar4 < DAT_10009fc8; dVar4 = dVar4 * DAT_10009f60) {
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

#undef DAT_10009f60
#undef DAT_10009f68
#undef DAT_10009fc8
#undef DAT_1000a080
#undef DAT_1000a088
#undef DAT_1000a090
#undef DAT_1000a098
#undef _DAT_1000a088

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008eb0
 */

double recovered_10008eb0(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)param_1 - (double)param_2;
}


#undef DAT_10009f60
#define DAT_10009f60 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10009f68
#define DAT_10009f68 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_10009f88
#define DAT_10009f88 (*(double *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_10009fc8
#define DAT_10009fc8 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ed0
 */

double recovered_10008ed0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_100041e0(param_1);
  if (DAT_10009f60 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_10009f68;
  }
  else if (param_1 - dVar1 <= DAT_10009fc8) {
    dVar1 = dVar1 + DAT_10009f88;
  }
  return dVar1;
}

#undef DAT_10009f60
#undef DAT_10009f68
#undef DAT_10009f88
#undef DAT_10009fc8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f20
 */

long recovered_10008f20(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
      goto joined_r0x10008f7d;
    }
  }
  bVar7 = false;
joined_r0x10008f7d:
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009060
 */

void recovered_10009060(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008f20(param_1,param_2,param_3);
  return;
}


#undef DAT_1000a0b0
#define DAT_1000a0b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152U)))
#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1162U)))
#define local_40 (*(byte * *)(pf_stack_frame + 16))
#define local_31 (*(char *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009070
 */

undefined8 recovered_10009070(long param_1,byte *param_2,undefined2 *param_3)

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
      recovered_10009410((uint)*pbVar8,(long *)&local_40);
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
          goto LAB_10009240;
        }
        iVar16 = iVar16 + 1;
      } while (pbVar18 < local_40 + uVar7);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  return 0;
LAB_10009240:
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
LAB_100093eb:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar6;
      return CONCAT71((int7)((ulong)param_3 >> 8),1);
    }
    local_40 = pbVar8 + (ulong)(uVar6 & 0x7fffffff) *
                        *(long *)(&DAT_1000a0b0 + (ulong)(uVar10 & 0xf) * 8);
    pbVar17 = recovered_10009410((uint)uVar10,(long *)&local_40);
    if (pbVar17 == (byte *)0x0) goto LAB_100093eb;
    cVar23 = local_31;
    if ((param_2 != (byte *)0x0) && (pbVar17 != param_2)) {
      lVar4 = *(long *)(pbVar17 + 8);
      pbVar13 = param_2;
      do {
        lVar5 = *(long *)(pbVar13 + 8);
        if ((lVar4 == 0) || (lVar5 == 0)) {
          if (lVar5 == lVar4) goto LAB_100093eb;
        }
        else {
          lVar15 = 0;
          do {
            cVar23 = *(char *)(lVar5 + lVar15);
            cVar3 = *(char *)(lVar4 + lVar15);
            if ((cVar23 == '\0') || (cVar3 == '\0')) {
              if (cVar23 == cVar3) goto LAB_100093eb;
              break;
            }
            lVar15 = lVar15 + 1;
          } while (cVar23 == cVar3);
        }
        if (*(undefined **)pbVar13 != &DAT_1000b0c0) goto LAB_100093c8;
        pbVar13 = *(byte **)(pbVar13 + 0x10);
        cVar23 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar17) && (pbVar13 != (byte *)0x0));
    }
    if (cVar23 != '\0') goto LAB_100093eb;
  }
LAB_100093c8:
  if ((uVar20 | uVar21) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar20 | uVar21);
  bVar22 = 0x3e < uVar11;
  uVar11 = uVar11 + 1;
  if (bVar22) {
    return 0;
  }
  goto LAB_10009240;
}

#undef DAT_1000a0b0
#undef DAT_1000b0c0
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009410
 */

byte * recovered_10009410(uint param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    goto LAB_10009539;
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
    goto LAB_10009535;
  case 3:
    pbVar3 = (byte *)(ulong)*puVar1;
    goto LAB_10009489;
  default:
    goto switchD_10009441_caseD_5;
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
LAB_10009535:
    puVar6 = (uint *)((long)puVar1 + 2);
LAB_10009539:
    *param_2 = (long)puVar6;
    break;
  case 0xb:
    pbVar3 = (byte *)((ulong)CONCAT14(-1 < (char)*(byte *)((long)puVar1 + 3),*puVar1) - 0x100000000)
    ;
LAB_10009489:
    puVar6 = puVar1 + 1;
    goto LAB_10009539;
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
switchD_10009441_caseD_5:
  return pbVar3;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000a211
#define DAT_1000a211 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b3U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280828
#define UINT_00280828 (*(uint *)(0x280828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095a0
 */

undefined8 recovered_100095a0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_var = 0;

  if (param_1 != 0) {
    iVar1 = Ram0000000000280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x2b < uVar2))
    {
      uVar2 = UINT_00280828;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)((char *)param_1);
      }
    }
    iVar1 = Ram0000000000280800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x2b < uVar2))))
    {
      uVar2 = UINT_00280828;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000962f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(ulong)uVar2)(&DAT_1000a211);
        return CONCAT44(extraout_var,uVar2);
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000a211
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280828

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280898
#define UINT_00280898 (*(uint *)(0x280898U))
#define local_148 (*(byte (*)[328])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

undefined8 recovered_10009640(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_var = 0;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;

  uVar2 = 0;
  if ((param_1 != (byte *)0x0) &&
     ((bVar8 = *param_1, (byte)(bVar8 + 0xbf) < 0x1a ||
      (bVar8 == 0x5f || (byte)(bVar8 + 0x9f) < 0x1a)))) {
    bVar7 = param_1[1];
    if (bVar7 != 0) {
      pbVar4 = param_1 + 2;
      do {
        if ((0x19 < (byte)((bVar7 & 0xdf) + 0xbf)) && (bVar7 != 0x5f && 9 < (byte)(bVar7 - 0x30U))) {
          return 0;
        }
        bVar7 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar7 != 0);
    }
    if (param_2 != (byte *)0x0) {
      if (bVar8 == 0) {
        uVar6 = 0;
      }
      else {
        uVar5 = 0;
        do {
          local_148[uVar5] = bVar8;
          if (param_1[uVar5 + 1] == 0) {
            uVar6 = uVar5 + 1;
            break;
          }
          local_148[uVar5 + 1] = param_1[uVar5 + 1];
          if (param_1[uVar5 + 2] == 0) {
            uVar6 = uVar5 + 2;
            break;
          }
          local_148[uVar5 + 2] = param_1[uVar5 + 2];
          if (param_1[uVar5 + 3] == 0) {
            uVar6 = uVar5 + 3;
            break;
          }
          if (uVar5 == 0x138) {
            return 0;
          }
          uVar6 = uVar5 + 4;
          local_148[uVar5 + 3] = param_1[uVar5 + 3];
          bVar8 = param_1[uVar5 + 4];
          uVar5 = uVar6;
        } while (bVar8 != 0);
      }
      uVar3 = (int)uVar6 + 4;
      pbVar4 = local_148 + (uVar6 & 0xffffffff);
      pbVar4[0] = 0x20;
      pbVar4[1] = 0x3d;
      pbVar4[2] = 0x20;
      pbVar4[3] = 0x22;
      bVar8 = *param_2;
      while (bVar8 != 0) {
        param_2 = param_2 + 1;
        if (0x13f < uVar3 + 3) {
          return 0;
        }
        if ((bVar8 < 0x30) && ((0x800400002600U >> ((ulong)bVar8 & 0x3f) & 1) != 0)) {
          uVar5 = (ulong)uVar3;
          uVar3 = uVar3 + 1;
          local_148[uVar5] = 0x2f;
          if (bVar8 == 10) {
            bVar8 = 0x6e;
          }
          else if (bVar8 == 0xd) {
            bVar8 = 0x72;
          }
          else if (bVar8 == 9) {
            bVar8 = 0x74;
          }
        }
        uVar5 = (ulong)uVar3;
        uVar3 = uVar3 + 1;
        local_148[uVar5] = bVar8;
        bVar8 = *param_2;
      }
      uVar2 = 0;
      if (uVar3 - ((int)uVar6 + 3) < 0xff) {
        local_148[uVar3] = 0x22;
        local_148[uVar3 + 1] = 0;
        iVar1 = Ram0000000000280800;
        if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
            (uVar3 = Ram0000000000280808, 0xb < uVar3)) &&
           (uVar3 = Ram0000000000280808, 0x9b < uVar3)) {
          uVar3 = UINT_00280898;
          if ((code *)(ulong)uVar3 != (code *)0x0) {
            uVar3 = (*(code *)(ulong)uVar3)((char *)local_148,(char *)0x0,0);
            uVar2 = CONCAT44(extraout_var,uVar3);
          }
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280898
#undef local_148

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280a04
#define UINT_00280a04 (*(uint *)(0x280a04U))
#define local_40 (*(undefined8 *)(pf_stack_frame + 16))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_30 (*(long *)(pf_stack_frame + 32))
#define local_20 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009870
 */

undefined8 recovered_10009870(long param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;

  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  if (param_3 == 0 || param_2 == (undefined1 *)0x0) {
    return 0;
  }
  *param_2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = Ram0000000000280800;
  if (iVar2 != 0x50414d57) {
    return 0;
  }
  iVar2 = Ram0000000000280804;
  if (iVar2 == 0) {
    return 0;
  }
  uVar6 = Ram0000000000280808;
  if (uVar6 < 0xc) {
    return 0;
  }
  uVar6 = Ram0000000000280808;
  if (uVar6 < 0x208) {
    return 0;
  }
  uVar6 = UINT_00280a04;
  if ((code *)(ulong)uVar6 == (code *)0x0) {
    return 0;
  }
  uVar6 = (*(code *)(ulong)uVar6)((char *)param_1,&local_40);
  if ((local_30 == 0 || (int)local_40 != 3) || uVar6 == 0) {
    return 0;
  }
  uVar9 = 1;
  while (*(char *)(local_30 + -1 + uVar9) != '\0') {
    bVar11 = uVar9 == param_3;
    uVar9 = uVar9 + 1;
    if (bVar11) {
      return 0;
    }
  }
  uVar10 = 0;
  uVar6 = (uint)uVar9;
  if ((3 < uVar6) && (0x1f < (ulong)((long)param_2 - local_30))) {
    if (uVar6 < 0x20) {
      uVar7 = 0;
    }
    else {
      uVar10 = (ulong)(uVar6 & 0xffffffe0);
      uVar7 = 0;
      do {
        uVar3 = ((undefined8 *)(local_30 + uVar7))[1];
        puVar1 = (undefined8 *)(local_30 + 0x10 + uVar7);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        *(undefined8 *)(param_2 + uVar7) = *(undefined8 *)(local_30 + uVar7);
        *(undefined8 *)((long)(param_2 + uVar7) + 8) = uVar3;
        *(undefined8 *)(param_2 + uVar7 + 0x10) = uVar4;
        *(undefined8 *)((long)(param_2 + uVar7 + 0x10) + 8) = uVar5;
        uVar7 = uVar7 + 0x20;
      } while ((uVar9 & 0xffffffffffffffe0) != uVar7);
      if (uVar9 == uVar10) {
        return 1;
      }
      uVar7 = uVar10;
      if ((uVar9 & 0x1c) == 0) goto LAB_100099f1;
    }
    uVar10 = (ulong)(uVar6 & 0xfffffffc);
    do {
      *(undefined4 *)(param_2 + uVar7) = *(undefined4 *)(local_30 + uVar7);
      uVar7 = uVar7 + 4;
    } while ((uVar9 & 0xfffffffffffffffc) != uVar7);
    if (uVar9 == uVar10) {
      return 1;
    }
  }
LAB_100099f1:
  uVar7 = ~uVar10;
  if ((uVar9 & 3) != 0) {
    uVar8 = (ulong)(uVar6 & 3);
    do {
      param_2[uVar10] = *(undefined1 *)(local_30 + uVar10);
      uVar10 = uVar10 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (2 < uVar7 + uVar9) {
    do {
      param_2[uVar10] = *(undefined1 *)(local_30 + uVar10);
      param_2[uVar10 + 1] = *(undefined1 *)(local_30 + 1 + uVar10);
      param_2[uVar10 + 2] = *(undefined1 *)(local_30 + 2 + uVar10);
      param_2[uVar10 + 3] = *(undefined1 *)(local_30 + 3 + uVar10);
      uVar10 = uVar10 + 4;
    } while (uVar9 != uVar10);
  }
  return 1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280a04
#undef local_40
#undef local_38
#undef local_30
#undef local_20
#undef uStack_28

#define pbStack_80 (*(byte * *)(pf_stack_frame + 32))
#define pbStack_60 (*(byte * *)(pf_stack_frame + 64))
#define local_88 (*(byte * *)(pf_stack_frame + 24))
#define local_78 (*(ulong *)(pf_stack_frame + 40))
#define local_68 (*(byte * *)(pf_stack_frame + 56))
#define local_58 (*(ulong *)(pf_stack_frame + 72))
#define local_4c (*(int *)(pf_stack_frame + 84))
#define local_48 (*(byte * *)(pf_stack_frame + 88))
#define local_40 (*(ulong *)(pf_stack_frame + 96))
#define local_38 (*(undefined4 *)(pf_stack_frame + 104))
#define local_34 (*(undefined4 *)(pf_stack_frame + 108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a60
 */

/* WARNING: Type propagation algorithm not settling */

ulong recovered_10009a60(byte *param_1,byte *param_2,undefined1 *param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  byte **ppbVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte bVar15;
  bool bVar16;

  local_88 = (byte *)0x0;
  pbStack_80 = (byte *)0x0;
  local_78 = 0;
  local_68 = (byte *)0x0;
  pbStack_60 = (byte *)0x0;
  local_58 = 0;
  local_4c = (int)param_4;
  if (local_4c == 0 || param_3 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if (param_2 == (byte *)0x0 || param_1 == (byte *)0x0) {
    return 0;
  }
  bVar15 = *param_2;
  if (bVar15 == 0) {
    return 0;
  }
  uVar11 = 0xffffffffffffffff;
  if ((byte)(bVar15 - 0x30U) < 10) {
    uVar13 = 0;
    pbVar14 = param_2;
    do {
      pbVar14 = pbVar14 + 1;
      if (~(ulong)(byte)(bVar15 - 0x30U) / 10 < uVar13) {
        local_38 = 0;
        local_40 = 0xffffffffffffffff;
        goto LAB_10009b77;
      }
      uVar13 = (ulong)(byte)(bVar15 - 0x30U) + uVar13 * 10;
      bVar15 = *pbVar14;
    } while ((byte)(bVar15 - 0x30U) < 10);
    local_38 = (undefined4)CONCAT71((int7)((ulong)param_4 >> 8),uVar13 != 0 && bVar15 == 0);
    local_40 = -(ulong)(bVar15 != 0) | uVar13 - 1;
  }
  else {
    local_38 = 0;
    local_40 = 0xffffffffffffffff;
  }
LAB_10009b77:
  uVar13 = 0;
LAB_10009ba7:
  uVar5 = uVar13;
  bVar15 = *param_1;
  pbVar14 = param_1;
  if (bVar15 != 0x22) {
    do {
      if (bVar15 < 0x2d) {
        if ((0x100000002401U >> ((ulong)bVar15 & 0x3f) & 1) != 0) goto LAB_10009c40;
        if ((ulong)bVar15 == 0x22) {
          return 0;
        }
      }
      bVar15 = pbVar14[1];
      pbVar14 = pbVar14 + 1;
    } while( true );
  }
  local_48 = param_1 + 1;
  pbVar7 = local_48;
  do {
    if (*pbVar7 == 0x22) {
      bVar15 = pbVar7[1];
      lVar8 = 2;
      if (bVar15 != 0x22) goto code_r0x10009c19;
    }
    else {
      lVar8 = 1;
      if (*pbVar7 == 0) {
        return 0;
      }
    }
    pbVar7 = pbVar7 + lVar8;
  } while( true );
LAB_10009c40:
  bVar4 = 0;
  pbVar7 = pbVar14;
  local_48 = param_1;
  goto LAB_10009c49;
code_r0x10009c19:
  if (0x2c < bVar15) {
    return 0;
  }
  if ((0x100000002401U >> ((ulong)bVar15 & 0x3f) & 1) == 0) {
    return 0;
  }
  pbVar14 = pbVar7 + 1;
  bVar4 = 1;
LAB_10009c49:
  bVar16 = true;
  if (bVar15 == 10) {
    param_1 = pbVar14 + 1;
  }
  else if (bVar15 == 0xd) {
    param_1 = pbVar14 + 1;
    if (pbVar14[1] == 10) {
      param_1 = pbVar14 + 2;
    }
  }
  else {
    if (bVar15 != 0x2c) {
      local_34 = 1;
      param_1 = pbVar14;
      goto joined_r0x10009c8e;
    }
    bVar16 = false;
    param_1 = pbVar14 + 1;
  }
  local_34 = 0;
joined_r0x10009c8e:
  if (uVar11 == 0xffffffffffffffff) {
    pbVar14 = param_2;
    pbVar10 = local_48;
    do {
      if (pbVar7 <= pbVar10) {
        uVar11 = -(ulong)(*pbVar14 != 0) | uVar5;
        break;
      }
      pbVar12 = pbVar10 + 1;
      bVar15 = *pbVar10;
      if (((bVar4 != 0) && (bVar15 == 0x22)) && (pbVar12 < pbVar7)) {
        if (pbVar10[1] == 0x22) {
          pbVar12 = pbVar10 + 2;
        }
      }
      bVar2 = *pbVar14;
      uVar11 = 0xffffffffffffffff;
      if (bVar2 == 0) break;
      pbVar14 = pbVar14 + 1;
      pbVar10 = pbVar12;
    } while (bVar15 == bVar2);
  }
  if ((uVar5 == local_40 & (byte)local_38) == 1) {
    local_88 = local_48;
    local_78 = (ulong)bVar4;
    pbStack_80 = pbVar7;
  }
  uVar13 = uVar5 + 1;
  if (bVar16) goto LAB_10009d4a;
  goto LAB_10009ba7;
LAB_10009e18:
  bVar4 = 0;
  pbVar10 = pbVar7;
  goto LAB_10009e20;
code_r0x10009dfc:
  if (0x2c < bVar15) {
    return 0;
  }
  if ((0x100000002401U >> ((ulong)bVar15 & 0x3f) & 1) == 0) {
    return 0;
  }
  bVar4 = 1;
  pbVar10 = pbVar7 + 1;
LAB_10009e20:
  if (bVar15 == 10) {
    pbVar10 = pbVar10 + 1;
  }
  else {
    if (bVar15 != 0xd) {
      bVar16 = bVar15 != 0x2c;
      if (!bVar16) {
        pbVar10 = pbVar10 + 1;
      }
      bVar3 = false;
      goto LAB_10009e61;
    }
    pbVar12 = pbVar10 + 1;
    pbVar1 = pbVar10 + 2;
    pbVar10 = pbVar10 + 1;
    if (*pbVar12 == 10) {
      pbVar10 = pbVar1;
    }
  }
  bVar16 = true;
  bVar3 = true;
LAB_10009e61:
  if (uVar6 == uVar11) {
    local_58 = (ulong)bVar4;
    pbVar14 = param_1;
    local_68 = param_1;
    pbStack_60 = pbVar7;
  }
  uVar13 = uVar6 + 1;
  param_1 = pbVar10;
  if (bVar16) goto LAB_10009e8e;
  goto LAB_10009d97;
LAB_10009e8e:
  if (uVar6 != uVar5) {
    return 0;
  }
  if (pbVar14 == (byte *)0x0) {
    return 0;
  }
  ppbVar9 = &local_68;
  if ((bVar3) && (*pbVar10 != 0)) {
    return 0;
  }
LAB_10009d64:
  uVar11 = recovered_10009ec0(ppbVar9,param_3,local_4c);
  return uVar11 & 0xff;
LAB_10009d4a:
  if ((char)local_34 == '\0') {
    if (uVar11 != 0xffffffffffffffff) {
      pbVar14 = (byte *)0x0;
      uVar13 = 0;
LAB_10009d97:
      uVar6 = uVar13;
      bVar15 = *param_1;
      pbVar7 = param_1;
      if (bVar15 != 0x22) {
        do {
          if (bVar15 < 0x2d) {
            if ((0x100000002401U >> ((ulong)bVar15 & 0x3f) & 1) != 0) goto LAB_10009e18;
            if ((ulong)bVar15 == 0x22) {
              return 0;
            }
          }
          bVar15 = pbVar7[1];
          pbVar7 = pbVar7 + 1;
        } while( true );
      }
      param_1 = param_1 + 1;
      pbVar7 = param_1;
      do {
        if (*pbVar7 == 0x22) {
          bVar15 = pbVar7[1];
          lVar8 = 2;
          if (bVar15 != 0x22) goto code_r0x10009dfc;
        }
        else {
          lVar8 = 1;
          if (*pbVar7 == 0) {
            return 0;
          }
        }
        pbVar7 = pbVar7 + lVar8;
      } while( true );
    }
  }
  else if (((byte)local_38 & local_40 < uVar5 + 1) != 0) {
    ppbVar9 = &local_88;
    goto LAB_10009d64;
  }
  return 0;
}

#undef pbStack_80
#undef pbStack_60
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_4c
#undef local_48
#undef local_40
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ec0
 */

undefined8 recovered_10009ec0(undefined8 *param_1,undefined1 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;

  if (((param_1 == (undefined8 *)0x0) || (pcVar3 = (char *)*param_1, pcVar3 == (char *)0x0)) ||
     (pcVar6 = (char *)param_1[1], pcVar6 == (char *)0x0)) {
    return 0;
  }
  if (pcVar3 < pcVar6) {
    uVar5 = 0;
    do {
      pcVar1 = pcVar3 + 1;
      cVar2 = *pcVar3;
      if (((pcVar1 < pcVar6 & cVar2 == '\"' & *(byte *)(param_1 + 2)) == 1) && (pcVar3[1] == '\"'))
      {
        pcVar1 = pcVar3 + 2;
      }
      pcVar3 = pcVar1;
      if (param_3 + -1 + (uint)(param_3 == 0) == uVar5) {
        uVar4 = 0;
        goto LAB_10009f59;
      }
      param_2[uVar5] = cVar2;
      uVar5 = uVar5 + 1;
      pcVar6 = (char *)param_1[1];
    } while (pcVar3 < pcVar6);
  }
  else {
    uVar5 = 0;
  }
  param_2 = param_2 + uVar5;
  uVar4 = CONCAT71((int7)((ulong)pcVar3 >> 8),1);
LAB_10009f59:
  *param_2 = 0;
  return uVar4;
}

