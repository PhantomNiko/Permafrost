/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000e120
#define DAT_1000e120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1808U)))
#undef DAT_1000e121
#define DAT_1000e121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1809U)))
#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000560
 */

/* WARNING: Removing unreachable block (ram,0x1000059c) */

void recovered_10000560(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000e120 = 0;
    DAT_1000e121 = 0;
    recovered_100005c0();
    DAT_1000e130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e120
#undef DAT_1000e121
#undef DAT_1000e130

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
#undef DAT_1000e120
#define DAT_1000e120 (*(char *)(((uintptr_t)pf_module_state + 0x1808U)))
#undef DAT_1000e128
#define DAT_1000e128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1810U)))
#undef DAT_1000e138
#define DAT_1000e138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1820U)))
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
 * Address: 0x100005c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100005c0(void)

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
  if (DAT_1000e120 != '\0') {
    return;
  }
  DAT_1000e128 = 0;
  DAT_1000e138 = 0;
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
                if (*puVar2 <= uVar6) goto LAB_10000653;
                puVar2[2] = *puVar2;
                puVar2[3] = puVar2[1];
                puVar2 = puVar2 + -2;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            uVar7 = 0;
LAB_10000653:
            local_438[uVar7 * 2 + 2] = uVar6;
            local_438[uVar7 * 2 + 3] = uVar5 - uVar6;
            uVar8 = uVar8 + 1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
LAB_1000079e:
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
        if (lVar11 == 0) goto LAB_10000862;
      }
      puVar2 = local_438 + 3;
      do {
        local_438[1] = 0x1000084f;
        recovered_10006550((long *)puVar2[-1],*puVar2,&local_28);
        puVar2 = puVar2 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      if (DAT_1000e128 != 0) goto LAB_10000899;
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
              if (*puVar2 <= uVar6) goto LAB_10000715;
              puVar2[2] = *puVar2;
              puVar2[3] = puVar2[1];
              puVar2 = puVar2 + -2;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar7 = 0;
LAB_10000715:
          local_438[uVar7 * 2 + 2] = uVar6;
          local_438[uVar7 * 2 + 3] = uVar5 - uVar6;
          uVar8 = uVar8 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
    goto LAB_1000079e;
  }
LAB_10000862:
  uVar3 = _DAT_00280088 & 0xfffffff0;
  if (_DAT_00280088 < 0x300001) {
    uVar3 = 0x4000000;
  }
  uVar1 = (ulong)uVar3;
  if (uVar3 < 0x300031) {
    uVar1 = 0x4000000;
  }
  local_438[1] = 0x10000899;
  recovered_10006550((long *)0x300000,uVar1 - 0x300000,&local_28);
LAB_10000899:
  if (DAT_1000e138 == 0) {
    DAT_1000e138 = DAT_1000e128;
  }
  DAT_1000e120 = 1;
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
#undef DAT_1000e120
#undef DAT_1000e128
#undef DAT_1000e138
#undef _DAT_00280088
#undef _DAT_0028008c
#undef _DAT_00280238
#undef _DAT_0028023c
#undef local_438
#undef local_28

#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d0
 */

/* WARNING: Removing unreachable block (ram,0x1000090c) */

void recovered_100008d0(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000920(param_1,param_2,param_3);
    DAT_1000e130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e130

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000e121
#define DAT_1000e121 (*(char *)(((uintptr_t)pf_module_state + 0x1809U)))
#undef DAT_1000e128
#define DAT_1000e128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1810U)))
#undef DAT_1000e138
#define DAT_1000e138 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1820U)))
#define local_38 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000920
 */

bool recovered_10000920(long param_1,long param_2,long param_3)

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
  if ((bVar3) || (DAT_1000e121 != '\0')) {
    return false;
  }
  DAT_1000e121 = 1;
  recovered_100005c0();
  lVar4 = 0;
  do {
    plVar1 = *(long **)(param_1 + lVar4 * 8);
    uVar7 = *(ulong *)(param_2 + lVar4 * 8);
    plVar6 = (long *)((long)plVar1 + uVar7);
    if (CARRY8((ulong)plVar1,uVar7)) {
      plVar6 = (long *)0xffffffffffffffff;
    }
    if (~(ulong)plVar1 < uVar7) {
      DAT_1000e121 = 0;
      return false;
    }
    if (plVar6 <= plVar1) {
      DAT_1000e121 = 0;
      return false;
    }
    if (plVar1 < (long *)0x10000000 && (long *)0x8000000 < plVar6) {
      if (plVar1 < (long *)0x8000000) {
        uVar7 = 0x8000000 - (long)plVar1;
        if (~(ulong)plVar1 < uVar7) {
          DAT_1000e121 = 0;
          return false;
        }
        uVar10 = (ulong)((int)plVar1 + 0xfU & 0xffffff0) - (long)plVar1;
        uVar8 = uVar7 - uVar10;
        if (uVar7 < uVar10 || uVar8 == 0) goto LAB_10000a2d;
        bVar3 = 0x30 < (uVar8 & 0xfffffffffffffff0);
      }
      else {
LAB_10000a2d:
        bVar3 = false;
      }
      if ((plVar6 < &DAT_10000001 ||
           0xffffffffffffffce < ((ulong)plVar6 & 0xfffffffffffffff0) - 0x10000031) && (!bVar3)) {
        DAT_1000e121 = 0;
        return false;
      }
    }
    else {
      if ((long *)0xfffffffffffffff0 < plVar1) {
        DAT_1000e121 = 0;
        return false;
      }
      uVar10 = ((ulong)((long)plVar1 + 0xf) & 0xfffffffffffffff0) - (long)plVar1;
      uVar8 = uVar7 - uVar10;
      if (uVar7 < uVar10 || uVar8 == 0) {
        DAT_1000e121 = 0;
        return false;
      }
      if ((uVar8 & 0xfffffffffffffff0) < 0x31) {
        DAT_1000e121 = 0;
        return false;
      }
    }
    plVar2 = DAT_1000e128;
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
          DAT_1000e121 = 0;
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
        DAT_1000e121 = 0;
        return false;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == param_3) {
      puVar5 = (ulong *)&DAT_1000e128;
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        uVar7 = *puVar5;
        puVar5 = (ulong *)(uVar7 + 8);
      } while (uVar7 != 0);
      lVar4 = 0;
      local_38 = uVar8;
      do {
        recovered_10006550(*(long **)(param_1 + lVar4 * 8),*(ulong *)(param_2 + lVar4 * 8),&local_38
                          );
        lVar4 = lVar4 + 1;
      } while (param_3 != lVar4);
      if (DAT_1000e138 == (long *)0x0) {
        DAT_1000e138 = DAT_1000e128;
      }
      DAT_1000e121 = 0;
      return local_38 != uVar8;
    }
  } while( true );
}

#undef DAT_10000001
#undef DAT_1000e121
#undef DAT_1000e128
#undef DAT_1000e138
#undef local_38

#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
#define local_18 (*(undefined8 *)(pf_stack_frame + 24))
#define local_10 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b60
 */

/* WARNING: Removing unreachable block (ram,0x10000b9c) */

void recovered_10000b60(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    local_18 = param_1;
    local_10 = param_2;
    recovered_10000920((long)&local_18,(long)&local_10,1);
    DAT_1000e130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e130
#undef local_18
#undef local_10

#undef DAT_1000e128
#define DAT_1000e128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1810U)))
#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc0
 */

/* WARNING: Removing unreachable block (ram,0x10000bfc) */

ulong recovered_10000bc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;

  iVar1 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  uVar4 = 0;
  for (plVar2 = DAT_1000e128; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      uVar4 = uVar4 + *plVar2;
    }
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_1000e130 = 0;
  return uVar3;
}

#undef DAT_1000e128
#undef DAT_1000e130

#undef DAT_1000e128
#define DAT_1000e128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1810U)))
#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c40
 */

/* WARNING: Removing unreachable block (ram,0x10000c7c) */

long recovered_10000c40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  long *plVar3;

  iVar1 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  lVar2 = 0;
  for (plVar3 = DAT_1000e128; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    if ((char)plVar3[3] == '\x01') {
      lVar2 = lVar2 + *plVar3;
    }
  }
  DAT_1000e130 = 0;
  return lVar2;
}

#undef DAT_1000e128
#undef DAT_1000e130

#undef DAT_1000e128
#define DAT_1000e128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1810U)))
#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb0
 */

/* WARNING: Removing unreachable block (ram,0x10000cec) */

ulong recovered_10000cb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;

  iVar2 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  uVar4 = 0;
  for (plVar1 = DAT_1000e128; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar4 = uVar4 + *plVar1;
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_1000e130 = 0;
  return uVar3;
}

#undef DAT_1000e128
#undef DAT_1000e130

#undef DAT_1000e128
#define DAT_1000e128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1810U)))
#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d40
 */

/* WARNING: Removing unreachable block (ram,0x10000d7c) */

long recovered_10000d40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  long lVar3;

  iVar2 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  lVar3 = 0;
  for (plVar1 = DAT_1000e128; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar3 = lVar3 + *plVar1;
  }
  DAT_1000e130 = 0;
  return lVar3;
}

#undef DAT_1000e128
#undef DAT_1000e130

#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dc0
 */

/* WARNING: Removing unreachable block (ram,0x10000dfc) */

void recovered_10000dc0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000e20(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1000e130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e130

#undef DAT_1000e128
#define DAT_1000e128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1810U)))
#undef DAT_1000e138
#define DAT_1000e138 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e20
 */

ulong * recovered_10000e20(long param_1,ulong *param_2,ulong *param_3)

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
    recovered_100005c0();
    puVar1 = DAT_1000e128;
    puVar5 = DAT_1000e138;
    if (DAT_1000e138 == (ulong *)0x0) {
      puVar5 = DAT_1000e128;
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
                if (uVar10 < uVar7) goto LAB_10000ee8;
              }
            }
            else {
              uVar10 = 0;
LAB_10000ee8:
              if ((uVar9 - 1 <= (ulong)((long)param_3 - (long)puVar4) && puVar4 <= param_3) &&
                 (uVar9 <= uVar7 - uVar10 && uVar10 <= uVar7)) {
                if (uVar9 - 1 < uVar7) {
                  if (uVar8 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000f2d;
                  }
                  else if (uVar11 < 0xffffffffffffffc0) {
LAB_10000f2d:
                    if (uVar10 == 0) goto LAB_10000f98;
                    if ((uVar9 + uVar10) - 1 < uVar7) {
                      if (uVar7 - (uVar10 + uVar9) < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000f7f;
                      }
                      else if (uVar10 + uVar9 < 0xffffffffffffffc0) {
LAB_10000f7f:
                        puVar3 = recovered_10006710(puVar3,puVar4);
                        if (puVar3 == (ulong *)0x0) {
                          return (ulong *)0x0;
                        }
                        uVar7 = *puVar3;
                        uVar8 = uVar7 - uVar9;
LAB_10000f98:
                        if (uVar7 < uVar9 || uVar8 < 0x30) {
                          DAT_1000e138 = (ulong *)puVar3[1];
                        }
                        else {
                          DAT_1000e138 = (ulong *)((long)puVar3 + uVar9 + 0x20);
                          *(ulong *)((long)puVar3 + uVar9 + 0x20) = uVar8 - 0x20;
                          uVar11 = puVar3[1];
                          *(ulong *)((long)puVar3 + uVar9 + 0x28) = uVar11;
                          *(ulong **)((long)puVar3 + uVar9 + 0x30) = puVar3;
                          *(undefined1 *)((long)puVar3 + uVar9 + 0x38) = 1;
                          if (uVar11 != 0) {
                            *(ulong **)(uVar11 + 0x10) = DAT_1000e138;
                          }
                          *puVar3 = uVar9;
                          puVar3[1] = (ulong)DAT_1000e138;
                        }
                        *(undefined1 *)(puVar3 + 3) = 0;
                        if (DAT_1000e138 == (ulong *)0x0) {
                          DAT_1000e138 = DAT_1000e128;
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

#undef DAT_1000e128
#undef DAT_1000e138

#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001020
 */

/* WARNING: Removing unreachable block (ram,0x1000105c) */

void recovered_10001020(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000e20(param_1,(ulong *)0x0,param_2);
    DAT_1000e130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e130

#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001080
 */

/* WARNING: Removing unreachable block (ram,0x100010bc) */

ulong * recovered_10001080(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_3 < param_2) {
    puVar2 = (ulong *)0x0;
  }
  else {
    puVar2 = recovered_10000e20(param_1,param_2,param_3);
  }
  DAT_1000e130 = 0;
  return puVar2;
}

#undef DAT_1000e130

#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e0
 */

/* WARNING: Removing unreachable block (ram,0x1000111c) */

void recovered_100010e0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001130(param_1);
    DAT_1000e130 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e130

#undef DAT_1000e138
#define DAT_1000e138 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001130
 */

void recovered_10001130(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;

  if (param_1 != 0) {
    recovered_100005c0();
    puVar2 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    puVar3 = *(ulong **)(param_1 + -0x18);
    if ((puVar3 != (ulong *)0x0) && ((char)puVar3[3] == '\x01')) {
      uVar4 = *puVar2;
      while (((uVar4 < 0xffffffffffffffe0 && ((ulong *)(param_1 + uVar4) == puVar3)) &&
             (*puVar3 <= -uVar4 - 0x21))) {
        if (DAT_1000e138 == puVar3) {
          DAT_1000e138 = puVar2;
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
          if (DAT_1000e138 == puVar2) {
            DAT_1000e138 = puVar3;
          }
          puVar1[2] = (ulong)puVar3;
          puVar2 = puVar1;
        } while ((char)puVar1[3] != '\0');
      }
      puVar2 = puVar3;
    }
    DAT_1000e138 = puVar2;
  }
  return;
}

#undef DAT_1000e138

#undef DAT_1000e130
#define DAT_1000e130 (*(int *)(((uintptr_t)pf_module_state + 0x1818U)))
#undef DAT_1000e138
#define DAT_1000e138 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001250
 */

/* WARNING: Removing unreachable block (ram,0x1000128c) */

ulong * recovered_10001250(ulong *param_1,ulong param_2)

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

  iVar7 = DAT_1000e130;
  { __typeof__(DAT_1000e130) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e130),1,__ATOMIC_SEQ_CST);
}
  if (iVar7 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (ulong *)0x0) {
    puVar16 = recovered_10000e20(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1000e130 = 0;
    return puVar16;
  }
  if (param_2 == 0) {
    recovered_10001130((long)param_1);
    DAT_1000e130 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_1000e130 = 0;
    return (ulong *)0x0;
  }
  recovered_100005c0();
  uVar12 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar16 = param_1 + -4;
  uVar11 = param_1[-4];
  if (uVar12 <= uVar11) {
    if (uVar11 <= uVar12 - 1) {
      DAT_1000e130 = 0;
      return (ulong *)0x0;
    }
    if (uVar11 - uVar12 < 0x30) {
      if (uVar11 < 0xffffffffffffffe0) {
        DAT_1000e130 = 0;
        return param_1;
      }
      DAT_1000e130 = 0;
      return (ulong *)0x0;
    }
    if (0xffffffffffffffb0 < param_2) {
      DAT_1000e130 = 0;
      return (ulong *)0x0;
    }
    DAT_1000e138 = (ulong *)((long)param_1 + uVar12);
    *(ulong *)((long)param_1 + uVar12) = (uVar11 - uVar12) - 0x20;
    uVar11 = param_1[-3];
    *(ulong *)((long)param_1 + uVar12 + 8) = uVar11;
    *(ulong **)((long)param_1 + uVar12 + 0x10) = puVar16;
    *(undefined1 *)((long)param_1 + uVar12 + 0x18) = 1;
    if (uVar11 != 0) {
      *(ulong **)(uVar11 + 0x10) = DAT_1000e138;
    }
    param_1[-4] = uVar12;
    param_1[-3] = (ulong)DAT_1000e138;
    DAT_1000e130 = 0;
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
      if (uVar13 < 0xffffffffffffffe0) goto LAB_10001424;
    }
    else if (param_2 < 0xffffffffffffffb1) {
LAB_10001424:
      puVar8 = (ulong *)param_1[-3];
      puVar14 = DAT_1000e138;
      do {
        if (((puVar8 == (ulong *)0x0) || ((char)puVar8[3] != '\x01')) ||
           ((0xffffffffffffffdf < uVar11 ||
            (((ulong *)((long)param_1 + uVar11) != puVar8 || (-uVar11 - 0x21 < *puVar8)))))) break;
        if (puVar14 == puVar8) {
          puVar14 = puVar16;
          DAT_1000e138 = puVar16;
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
        DAT_1000e130 = 0;
        return (ulong *)0x0;
      }
      uVar9 = recovered_10006780(puVar16,uVar12);
      if ((char)uVar9 != '\0') {
        DAT_1000e138 = (ulong *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1000e130 = 0;
      return param_1;
    }
  }
  puVar8 = recovered_10000e20(uVar12,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  if (puVar8 == (ulong *)0x0) {
    DAT_1000e130 = 0;
    return (ulong *)0x0;
  }
  if (*puVar16 < uVar12) {
    uVar12 = *puVar16;
  }
  puVar16 = param_1;
  puVar14 = puVar8;
  if (uVar12 < 0x10) {
LAB_100014d6:
    if (uVar12 == 0) goto LAB_1000178f;
  }
  else if ((((uint)puVar8 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)puVar8 & 7) == 0) {
      puVar15 = puVar8;
      puVar10 = param_1;
LAB_100016c1:
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
                    goto LAB_100016c1;
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
        if (uVar11 == uVar17) goto LAB_100014d6;
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
    goto LAB_100014d6;
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
      if (uVar12 == uVar17) goto LAB_1000178f;
      if ((uVar12 & 0x1c) == 0) {
        puVar16 = (ulong *)((long)puVar16 + uVar17);
        puVar15 = (ulong *)((long)puVar14 + uVar17);
        uVar11 = (ulong)((uint)uVar12 & 0x1f);
        goto LAB_100016e4;
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
    if (uVar12 == uVar13) goto LAB_1000178f;
  }
LAB_100016e4:
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
LAB_1000178f:
  recovered_10001130((long)param_1);
  DAT_1000e130 = 0;
  return puVar8;
}

#undef DAT_1000e130
#undef DAT_1000e138

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001900(ulong param_1,uint param_2)

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

ulong recovered_10001940(ulong param_1,uint param_2)

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

long recovered_10001980(long param_1,uint param_2)

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

ulong recovered_100019d0(ulong param_1,ulong param_2)

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

long recovered_10001a70(ulong param_1,ulong param_2)

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

ulong recovered_10001ae0(ulong param_1,ulong param_2)

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

long recovered_10001bb0(ulong param_1,ulong param_2)

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

void recovered_10001c40(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10001c60(int param_1)

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
void * recovered_10001c70(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10001cc0(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001d10(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d60
 */

void * recovered_10001d60(void *destination,void *source,ulong count)

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

  pvVar5 = destination;
  if (count < 0x10) {
LAB_10001d7f:
    if (count == 0) {
      return pvVar5;
    }
  }
  else if ((((uint)source ^ (uint)destination) & 7) == 0) {
    if (((ulong)destination & 7) == 0) {
LAB_10001f6e:
      puVar7 = destination;
    }
    else {
      puVar7 = (undefined8 *)((long)destination + 1);
      *(undefined1 *)destination = *(undefined1 *)source;
      uVar6 = count - 1;
      uVar8 = (undefined7)((ulong)in_R8 >> 8);
      in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
      if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
        source = (void *)((long)source + 1);
        count = uVar6;
      }
      else {
        puVar7 = (undefined8 *)((long)destination + 2);
        *(undefined1 *)((long)destination + 1) = *(undefined1 *)((long)source + 1);
        uVar6 = count - 2;
        in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
        if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
          source = (void *)((long)source + 2);
          count = uVar6;
        }
        else {
          puVar7 = (undefined8 *)((long)destination + 3);
          *(undefined1 *)((long)destination + 2) = *(undefined1 *)((long)source + 2);
          uVar6 = count - 3;
          in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
          if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
            source = (void *)((long)source + 3);
            count = uVar6;
          }
          else {
            puVar7 = (undefined8 *)((long)destination + 4);
            *(undefined1 *)((long)destination + 3) = *(undefined1 *)((long)source + 3);
            uVar6 = count - 4;
            in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
            if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
              source = (void *)((long)source + 4);
              count = uVar6;
            }
            else {
              puVar7 = (undefined8 *)((long)destination + 5);
              *(undefined1 *)((long)destination + 4) = *(undefined1 *)((long)source + 4);
              uVar6 = count - 5;
              in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
              if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                source = (void *)((long)source + 5);
                count = uVar6;
              }
              else {
                puVar7 = (undefined8 *)((long)destination + 6);
                *(undefined1 *)((long)destination + 5) = *(undefined1 *)((long)source + 5);
                uVar6 = count - 6;
                in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                  source = (void *)((long)source + 6);
                  count = uVar6;
                }
                else {
                  puVar7 = (undefined8 *)((long)destination + 7);
                  *(undefined1 *)((long)destination + 6) = *(undefined1 *)((long)source + 6);
                  uVar6 = count - 7;
                  in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                  if (((ulong)puVar7 & 7) != 0 && uVar6 != 0) {
                    puVar1 = (undefined1 *)((long)source + 7);
                    source = (void *)((long)source + 8);
                    *(undefined1 *)((long)destination + 7) = *puVar1;
                    count = count - 8;
                    destination = (undefined8 *)((long)destination + 8);
                    goto LAB_10001f6e;
                  }
                  source = (void *)((long)source + 7);
                  count = uVar6;
                }
              }
            }
          }
        }
      }
    }
    if (count < 0x20) {
      in_R8 = source;
    }
    else {
      uVar6 = count - 0x20;
      uVar9 = count;
      if ((uVar6 & 0x20) == 0) {
        *puVar7 = *(undefined8 *)source;
        puVar7[1] = *(undefined8 *)((long)source + 8);
        puVar7[2] = *(undefined8 *)((long)source + 0x10);
        puVar7[3] = *(undefined8 *)((long)source + 0x18);
        puVar7 = puVar7 + 4;
        source = (void *)((long)source + 0x20);
        uVar9 = uVar6;
        in_R8 = source;
      }
      count = uVar6;
      if (0x1f < uVar6) {
        do {
          *puVar7 = *(undefined8 *)source;
          puVar7[1] = *(undefined8 *)((long)source + 8);
          puVar7[2] = *(undefined8 *)((long)source + 0x10);
          puVar7[3] = *(undefined8 *)((long)source + 0x18);
          puVar7[4] = *(undefined8 *)((long)source + 0x20);
          puVar7[5] = *(undefined8 *)((long)source + 0x28);
          puVar7[6] = *(undefined8 *)((long)source + 0x30);
          puVar7[7] = *(undefined8 *)((long)source + 0x38);
          puVar7 = puVar7 + 8;
          source = (void *)((long)source + 0x40);
          uVar9 = uVar9 - 0x40;
          count = uVar9;
          in_R8 = source;
        } while (0x1f < uVar9);
      }
    }
    if (count < 8) {
      source = in_R8;
      destination = puVar7;
    }
    else {
      if ((0x27 < count - 8) && (0x1f < (ulong)((long)puVar7 - (long)in_R8))) {
        uVar6 = (count - 8 >> 3) + 1;
        uVar9 = uVar6 & 0xfffffffffffffffc;
        source = in_R8 + uVar9;
        destination = puVar7 + uVar9;
        count = count + uVar9 * -8;
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
        in_R8 = source;
        puVar7 = destination;
        if (uVar6 == uVar9) goto LAB_10001d7f;
      }
      do {
        source = in_R8 + 1;
        *puVar7 = *in_R8;
        destination = puVar7 + 1;
        count = count - 8;
        in_R8 = source;
        puVar7 = destination;
      } while (7 < count);
    }
    goto LAB_10001d7f;
  }
  uVar6 = count;
  if ((3 < count) && (0x1f < (ulong)((long)destination - (long)source))) {
    if (count < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = count & 0xffffffffffffffe0;
      uVar6 = 0;
      do {
        uVar2 = ((undefined8 *)((long)source + uVar6))[1];
        puVar7 = (undefined8 *)((long)source + uVar6 + 0x10);
        uVar3 = *puVar7;
        uVar4 = puVar7[1];
        *(undefined8 *)((long)destination + uVar6) = *(undefined8 *)((long)source + uVar6);
        ((undefined8 *)((long)destination + uVar6))[1] = uVar2;
        puVar7 = (undefined8 *)((long)destination + uVar6 + 0x10);
        *puVar7 = uVar3;
        puVar7[1] = uVar4;
        uVar6 = uVar6 + 0x20;
      } while (uVar9 != uVar6);
      if (count == uVar9) {
        return pvVar5;
      }
      if ((count & 0x1c) == 0) {
        source = (void *)((long)source + uVar9);
        destination = (void *)((long)destination + uVar9);
        uVar6 = (ulong)((uint)count & 0x1f);
        goto LAB_10001f90;
      }
    }
    uVar10 = count & 0xfffffffffffffffc;
    uVar6 = (ulong)((uint)count & 3);
    do {
      *(undefined4 *)((long)destination + uVar9) = *(undefined4 *)((long)source + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar10 != uVar9);
    destination = (undefined8 *)((long)destination + uVar10);
    source = (undefined8 *)((long)source + uVar10);
    if (count == uVar10) {
      return pvVar5;
    }
  }
LAB_10001f90:
  uVar9 = uVar6 - 1;
  if ((uVar6 & 7) != 0) {
    uVar10 = 0;
    do {
      *(undefined1 *)((long)destination + uVar10) = *(undefined1 *)((long)source + uVar10);
      uVar10 = uVar10 + 1;
    } while ((uVar6 & 7) != uVar10);
    uVar6 = uVar6 - uVar10;
    destination = (void *)((long)destination + uVar10);
    source = (void *)((long)source + uVar10);
  }
  if (6 < uVar9) {
    uVar9 = 0;
    do {
      *(undefined1 *)((long)destination + uVar9) = *(undefined1 *)((long)source + uVar9);
      *(undefined1 *)((long)destination + uVar9 + 1) = *(undefined1 *)((long)source + uVar9 + 1);
      *(undefined1 *)((long)destination + uVar9 + 2) = *(undefined1 *)((long)source + uVar9 + 2);
      *(undefined1 *)((long)destination + uVar9 + 3) = *(undefined1 *)((long)source + uVar9 + 3);
      *(undefined1 *)((long)destination + uVar9 + 4) = *(undefined1 *)((long)source + uVar9 + 4);
      *(undefined1 *)((long)destination + uVar9 + 5) = *(undefined1 *)((long)source + uVar9 + 5);
      *(undefined1 *)((long)destination + uVar9 + 6) = *(undefined1 *)((long)source + uVar9 + 6);
      *(undefined1 *)((long)destination + uVar9 + 7) = *(undefined1 *)((long)source + uVar9 + 7);
      uVar9 = uVar9 + 8;
    } while (uVar6 != uVar9);
  }
  return pvVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021a0
 */

void * recovered_100021a0(void *destination,void *source,ulong count)

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

  pvVar6 = destination;
  if (count == 0 || destination == source) {
    return pvVar6;
  }
  if ((destination < source) || (pvVar7 = (void *)((long)source + count), pvVar7 <= destination)) {
    if ((0xf < count) && ((((uint)source ^ (uint)destination) & 7) == 0)) {
      if (((ulong)destination & 7) == 0) {
LAB_1000253a:
        puVar8 = destination;
      }
      else {
        puVar8 = (undefined8 *)((long)destination + 1);
        *(undefined1 *)destination = *(undefined1 *)source;
        uVar11 = count - 1;
        uVar14 = (undefined7)((ulong)in_R8 >> 8);
        in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
        if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
          source = (void *)((long)source + 1);
          count = uVar11;
        }
        else {
          puVar8 = (undefined8 *)((long)destination + 2);
          *(undefined1 *)((long)destination + 1) = *(undefined1 *)((long)source + 1);
          uVar11 = count - 2;
          in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
          if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
            source = (void *)((long)source + 2);
            count = uVar11;
          }
          else {
            puVar8 = (undefined8 *)((long)destination + 3);
            *(undefined1 *)((long)destination + 2) = *(undefined1 *)((long)source + 2);
            uVar11 = count - 3;
            in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
            if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
              source = (void *)((long)source + 3);
              count = uVar11;
            }
            else {
              puVar8 = (undefined8 *)((long)destination + 4);
              *(undefined1 *)((long)destination + 3) = *(undefined1 *)((long)source + 3);
              uVar11 = count - 4;
              in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
              if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                source = (void *)((long)source + 4);
                count = uVar11;
              }
              else {
                puVar8 = (undefined8 *)((long)destination + 5);
                *(undefined1 *)((long)destination + 4) = *(undefined1 *)((long)source + 4);
                uVar11 = count - 5;
                in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                  source = (void *)((long)source + 5);
                  count = uVar11;
                }
                else {
                  puVar8 = (undefined8 *)((long)destination + 6);
                  *(undefined1 *)((long)destination + 5) = *(undefined1 *)((long)source + 5);
                  uVar11 = count - 6;
                  in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                  if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                    source = (void *)((long)source + 6);
                    count = uVar11;
                  }
                  else {
                    puVar8 = (undefined8 *)((long)destination + 7);
                    *(undefined1 *)((long)destination + 6) = *(undefined1 *)((long)source + 6);
                    uVar11 = count - 7;
                    in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                    if (((ulong)puVar8 & 7) != 0 && uVar11 != 0) {
                      puVar1 = (undefined1 *)((long)source + 7);
                      source = (void *)((long)source + 8);
                      *(undefined1 *)((long)destination + 7) = *puVar1;
                      count = count - 8;
                      destination = (undefined8 *)((long)destination + 8);
                      goto LAB_1000253a;
                    }
                    source = (void *)((long)source + 7);
                    count = uVar11;
                  }
                }
              }
            }
          }
        }
      }
      if (count < 0x20) {
        in_R8 = source;
      }
      else {
        uVar11 = count - 0x20;
        uVar16 = count;
        if ((uVar11 & 0x20) == 0) {
          *puVar8 = *(undefined8 *)source;
          puVar8[1] = *(undefined8 *)((long)source + 8);
          puVar8[2] = *(undefined8 *)((long)source + 0x10);
          puVar8[3] = *(undefined8 *)((long)source + 0x18);
          puVar8 = puVar8 + 4;
          source = (void *)((long)source + 0x20);
          uVar16 = uVar11;
          in_R8 = source;
        }
        count = uVar11;
        if (0x1f < uVar11) {
          count = uVar16;
          do {
            *puVar8 = *(undefined8 *)source;
            puVar8[1] = *(undefined8 *)((long)source + 8);
            puVar8[2] = *(undefined8 *)((long)source + 0x10);
            puVar8[3] = *(undefined8 *)((long)source + 0x18);
            puVar8[4] = *(undefined8 *)((long)source + 0x20);
            puVar8[5] = *(undefined8 *)((long)source + 0x28);
            puVar8[6] = *(undefined8 *)((long)source + 0x30);
            puVar8[7] = *(undefined8 *)((long)source + 0x38);
            puVar8 = puVar8 + 8;
            source = (void *)((long)source + 0x40);
            count = count - 0x40;
            in_R8 = source;
          } while (0x1f < count);
        }
      }
      if (count < 8) {
        source = in_R8;
        destination = puVar8;
      }
      else {
        if ((0x27 < count - 8) && (0x1f < (ulong)((long)puVar8 - (long)in_R8))) {
          uVar11 = (count - 8 >> 3) + 1;
          uVar16 = uVar11 & 0xfffffffffffffffc;
          source = in_R8 + uVar16;
          destination = puVar8 + uVar16;
          count = count + uVar16 * -8;
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
          in_R8 = source;
          puVar8 = destination;
          if (uVar11 == uVar16) goto LAB_10002798;
        }
        do {
          uVar3 = *in_R8;
          in_R8 = in_R8 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
          count = count - 8;
          source = in_R8;
          destination = puVar8;
        } while (7 < count);
      }
LAB_10002798:
      if (count == 0) {
        return pvVar6;
      }
    }
    uVar11 = count;
    if ((3 < count) && (0x1f < (ulong)((long)destination - (long)source))) {
      if (count < 0x20) {
        uVar16 = 0;
      }
      else {
        uVar16 = count & 0xffffffffffffffe0;
        uVar11 = 0;
        do {
          uVar3 = ((undefined8 *)((long)source + uVar11))[1];
          puVar8 = (undefined8 *)((long)source + uVar11 + 0x10);
          uVar4 = *puVar8;
          uVar5 = puVar8[1];
          *(undefined8 *)((long)destination + uVar11) = *(undefined8 *)((long)source + uVar11);
          ((undefined8 *)((long)destination + uVar11))[1] = uVar3;
          puVar8 = (undefined8 *)((long)destination + uVar11 + 0x10);
          *puVar8 = uVar4;
          puVar8[1] = uVar5;
          uVar11 = uVar11 + 0x20;
        } while (uVar16 != uVar11);
        if (count == uVar16) {
          return pvVar6;
        }
        if ((count & 0x1c) == 0) {
          source = (void *)((long)source + uVar16);
          destination = (void *)((long)destination + uVar16);
          uVar11 = (ulong)((uint)count & 0x1f);
          goto LAB_1000255c;
        }
      }
      uVar12 = count & 0xfffffffffffffffc;
      uVar11 = (ulong)((uint)count & 3);
      do {
        *(undefined4 *)((long)destination + uVar16) = *(undefined4 *)((long)source + uVar16);
        uVar16 = uVar16 + 4;
      } while (uVar12 != uVar16);
      destination = (undefined8 *)((long)destination + uVar12);
      source = (undefined8 *)((long)source + uVar12);
      if (count == uVar12) {
        return pvVar6;
      }
    }
LAB_1000255c:
    uVar16 = uVar11 - 1;
    if ((uVar11 & 7) != 0) {
      uVar12 = 0;
      do {
        *(undefined1 *)((long)destination + uVar12) = *(undefined1 *)((long)source + uVar12);
        uVar12 = uVar12 + 1;
      } while ((uVar11 & 7) != uVar12);
      uVar11 = uVar11 - uVar12;
      destination = (void *)((long)destination + uVar12);
      source = (void *)((long)source + uVar12);
    }
    if (uVar16 < 7) {
      return pvVar6;
    }
    uVar16 = 0;
    do {
      *(undefined1 *)((long)destination + uVar16) = *(undefined1 *)((long)source + uVar16);
      *(undefined1 *)((long)destination + uVar16 + 1) = *(undefined1 *)((long)source + uVar16 + 1);
      *(undefined1 *)((long)destination + uVar16 + 2) = *(undefined1 *)((long)source + uVar16 + 2);
      *(undefined1 *)((long)destination + uVar16 + 3) = *(undefined1 *)((long)source + uVar16 + 3);
      *(undefined1 *)((long)destination + uVar16 + 4) = *(undefined1 *)((long)source + uVar16 + 4);
      *(undefined1 *)((long)destination + uVar16 + 5) = *(undefined1 *)((long)source + uVar16 + 5);
      *(undefined1 *)((long)destination + uVar16 + 6) = *(undefined1 *)((long)source + uVar16 + 6);
      *(undefined1 *)((long)destination + uVar16 + 7) = *(undefined1 *)((long)source + uVar16 + 7);
      uVar16 = uVar16 + 8;
    } while (uVar11 != uVar16);
    return pvVar6;
  }
  uVar11 = (long)destination + count;
  if ((0xf < count) && ((((uint)pvVar7 ^ (uint)uVar11) & 7) == 0)) {
    if ((uVar11 & 7) == 0) {
LAB_1000232e:
      uVar16 = uVar11;
    }
    else {
      uVar16 = uVar11 - 1;
      *(undefined1 *)(uVar11 - 1) = *(undefined1 *)((long)pvVar7 - 1);
      uVar12 = count - 1;
      uVar14 = (undefined7)(in_R9 >> 8);
      in_R9 = CONCAT71(uVar14,uVar12 == 0);
      uVar17 = (undefined7)((ulong)in_R10 >> 8);
      bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
      in_R10 = (void *)CONCAT71(uVar17,bVar15);
      if (bVar15) {
        pvVar7 = (void *)((long)pvVar7 - 1);
        count = uVar12;
      }
      else {
        uVar16 = uVar11 - 2;
        *(undefined1 *)(uVar11 - 2) = *(undefined1 *)((long)pvVar7 - 2);
        uVar12 = count - 2;
        in_R9 = CONCAT71(uVar14,uVar12 == 0);
        bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
        in_R10 = (void *)CONCAT71(uVar17,bVar15);
        if (bVar15) {
          pvVar7 = (void *)((long)pvVar7 - 2);
          count = uVar12;
        }
        else {
          uVar16 = uVar11 - 3;
          *(undefined1 *)(uVar11 - 3) = *(undefined1 *)((long)pvVar7 - 3);
          uVar12 = count - 3;
          in_R9 = CONCAT71(uVar14,uVar12 == 0);
          bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
          in_R10 = (void *)CONCAT71(uVar17,bVar15);
          if (bVar15) {
            pvVar7 = (void *)((long)pvVar7 - 3);
            count = uVar12;
          }
          else {
            uVar16 = uVar11 - 4;
            *(undefined1 *)(uVar11 - 4) = *(undefined1 *)((long)pvVar7 - 4);
            uVar12 = count - 4;
            in_R9 = CONCAT71(uVar14,uVar12 == 0);
            bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
            in_R10 = (void *)CONCAT71(uVar17,bVar15);
            if (bVar15) {
              pvVar7 = (void *)((long)pvVar7 - 4);
              count = uVar12;
            }
            else {
              uVar16 = uVar11 - 5;
              *(undefined1 *)(uVar11 - 5) = *(undefined1 *)((long)pvVar7 - 5);
              uVar12 = count - 5;
              in_R9 = CONCAT71(uVar14,uVar12 == 0);
              bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
              in_R10 = (void *)CONCAT71(uVar17,bVar15);
              if (bVar15) {
                pvVar7 = (void *)((long)pvVar7 - 5);
                count = uVar12;
              }
              else {
                uVar16 = uVar11 - 6;
                *(undefined1 *)(uVar11 - 6) = *(undefined1 *)((long)pvVar7 - 6);
                uVar12 = count - 6;
                in_R9 = CONCAT71(uVar14,uVar12 == 0);
                bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
                in_R10 = (void *)CONCAT71(uVar17,bVar15);
                if (bVar15) {
                  pvVar7 = (void *)((long)pvVar7 - 6);
                  count = uVar12;
                }
                else {
                  uVar16 = uVar11 - 7;
                  *(undefined1 *)(uVar11 - 7) = *(undefined1 *)((long)pvVar7 - 7);
                  bVar15 = count - 7 == 0;
                  in_R9 = CONCAT71(uVar14,bVar15);
                  bVar18 = (uVar16 & 7) == 0;
                  in_R10 = (void *)CONCAT71(uVar17,bVar18 || bVar15);
                  if (!bVar18 && !bVar15) {
                    puVar1 = (undefined1 *)((long)pvVar7 - 8);
                    pvVar7 = (void *)((long)pvVar7 - 8);
                    *(undefined1 *)(uVar11 - 8) = *puVar1;
                    uVar11 = uVar11 - 8;
                    count = count - 8;
                    goto LAB_1000232e;
                  }
                  pvVar7 = (void *)((long)pvVar7 - 7);
                  count = count - 7;
                }
              }
            }
          }
        }
      }
    }
    if (count < 0x20) {
      in_R10 = pvVar7;
    }
    else {
      uVar11 = count - 0x20;
      pvVar9 = pvVar7;
      uVar12 = uVar16;
      uVar13 = count;
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
      count = uVar11;
      if (0x1f < uVar11) {
        count = uVar13;
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
          count = count - 0x40;
          pvVar9 = in_R10;
          uVar12 = uVar16;
        } while (0x1f < count);
      }
    }
    if (count < 8) {
      pvVar7 = in_R10;
      uVar11 = uVar16;
    }
    else {
      if ((0x27 < count - 8) && (0x1f < (long)in_R10 - uVar16)) {
        uVar12 = (count - 8 >> 3) + 1;
        uVar13 = uVar12 & 0xfffffffffffffffc;
        pvVar7 = (void *)((long)in_R10 + uVar13 * -8);
        uVar11 = uVar16 + uVar13 * -8;
        count = count + uVar13 * -8;
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
        if (uVar12 == uVar13) goto LAB_100028fa;
      }
      do {
        puVar8 = (undefined8 *)((long)in_R10 - 8);
        in_R10 = (void *)((long)in_R10 - 8);
        *(undefined8 *)(uVar16 - 8) = *puVar8;
        uVar16 = uVar16 - 8;
        count = count - 8;
        pvVar7 = in_R10;
        uVar11 = uVar16;
      } while (7 < count);
    }
LAB_100028fa:
    if (count == 0) {
      return pvVar6;
    }
  }
  if ((3 < count) && (0xf < (long)pvVar7 - uVar11)) {
    if (count < 0x10) {
      uVar16 = 0;
    }
    else {
      uVar16 = count & 0xfffffffffffffff0;
      lVar10 = 0;
      do {
        puVar8 = (undefined8 *)((long)pvVar7 + lVar10 + -0x10);
        uVar3 = puVar8[1];
        puVar2 = (undefined8 *)((uVar11 - 0x10) + lVar10);
        *puVar2 = *puVar8;
        puVar2[1] = uVar3;
        lVar10 = lVar10 + -0x10;
      } while (-lVar10 != uVar16);
      if (count == uVar16) {
        return pvVar6;
      }
      if ((count & 0xc) == 0) {
        count = (ulong)((uint)count & 0xf);
        uVar11 = uVar11 - uVar16;
        pvVar7 = (void *)((long)pvVar7 - uVar16);
        goto LAB_100029bf;
      }
    }
    uVar12 = count & 0xfffffffffffffffc;
    lVar10 = -uVar16;
    do {
      *(undefined4 *)((uVar11 - 4) + lVar10) = *(undefined4 *)((long)pvVar7 + lVar10 + -4);
      lVar10 = lVar10 + -4;
    } while (-lVar10 != uVar12);
    bVar15 = count == uVar12;
    pvVar7 = (void *)((long)pvVar7 - uVar12);
    uVar11 = uVar11 - uVar12;
    count = (ulong)((uint)count & 3);
    if (bVar15) {
      return pvVar6;
    }
  }
LAB_100029bf:
  uVar16 = count - 1;
  if ((count & 7) != 0) {
    uVar12 = 0;
    do {
      puVar1 = (undefined1 *)((long)pvVar7 - 1);
      pvVar7 = (void *)((long)pvVar7 - 1);
      *(undefined1 *)(uVar11 - 1) = *puVar1;
      uVar11 = uVar11 - 1;
      uVar12 = uVar12 + 1;
    } while ((count & 7) != uVar12);
    count = count - uVar12;
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
    } while (-lVar10 != count);
  }
  return pvVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a60
 */

void * recovered_10002a60(void *destination,int value,ulong count)

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

  pvVar3 = destination;
  uVar8 = (undefined1)value;
  if (0xf < count) {
    iVar4 = (value & 0xffU) * 0x1010101;
    if (((ulong)destination & 7) == 0) {
LAB_10002bad:
      puVar9 = destination;
      uVar6 = count;
    }
    else {
      *(undefined1 *)destination = uVar8;
      puVar9 = (undefined8 *)((long)destination + 1U);
      uVar6 = count - 1;
      if (((long)destination + 1U & 7) != 0 && count - 1 != 0) {
        *(undefined1 *)((long)destination + 1) = uVar8;
        puVar9 = (undefined8 *)((long)destination + 2U);
        uVar6 = count - 2;
        if (((long)destination + 2U & 7) != 0 && count - 2 != 0) {
          *(undefined1 *)((long)destination + 2) = uVar8;
          puVar9 = (undefined8 *)((long)destination + 3U);
          uVar6 = count - 3;
          if (((long)destination + 3U & 7) != 0 && count - 3 != 0) {
            *(undefined1 *)((long)destination + 3) = uVar8;
            puVar9 = (undefined8 *)((long)destination + 4U);
            uVar6 = count - 4;
            if (((long)destination + 4U & 7) != 0 && count - 4 != 0) {
              *(undefined1 *)((long)destination + 4) = uVar8;
              puVar9 = (undefined8 *)((long)destination + 5U);
              uVar6 = count - 5;
              if (((long)destination + 5U & 7) != 0 && count - 5 != 0) {
                *(undefined1 *)((long)destination + 5) = uVar8;
                puVar9 = (undefined8 *)((long)destination + 6U);
                uVar6 = count - 6;
                if (((long)destination + 6U & 7) != 0 && count - 6 != 0) {
                  *(undefined1 *)((long)destination + 6) = uVar8;
                  puVar9 = (undefined8 *)((long)destination + 7U);
                  uVar6 = count - 7;
                  if (((long)destination + 7U & 7) != 0 && count - 7 != 0) {
                    *(undefined1 *)((long)destination + 7) = uVar8;
                    count = count - 8;
                    destination = (undefined8 *)((long)destination + 8);
                    goto LAB_10002bad;
                  }
                }
              }
            }
          }
        }
      }
    }
    count = uVar6;
    uVar5 = CONCAT44(iVar4,iVar4);
    if (0x1f < count) {
      uVar6 = count - 0x20;
      uVar7 = ((uint)(uVar6 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar7 == 0) {
        uVar10 = count;
        count = 0;
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
        uVar10 = count - uVar10;
        count = uVar10;
      }
      if (0x5f < uVar6) {
        count = uVar10;
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
          count = count - 0x80;
        } while (0x1f < count);
      }
    }
    destination = puVar9;
    if (7 < count) {
      if (0x17 < count - 8) {
        uVar6 = (count - 8 >> 3) + 1;
        uVar10 = uVar6 & 0xfffffffffffffffc;
        destination = puVar9 + uVar10;
        count = count + uVar10 * -8;
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
        if (uVar6 == uVar10) goto LAB_10002ce1;
      }
      do {
        *(undefined8 *)destination = uVar5;
        destination = (void *)((long)destination + 8);
        count = count - 8;
      } while (7 < count);
    }
  }
LAB_10002ce1:
  if (count == 0) {
    return pvVar3;
  }
  if (count < 4) {
LAB_10002cf0:
    uVar10 = count;
    puVar9 = destination;
  }
  else {
    if (count < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = count & 0xffffffffffffffe0;
      auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
      uVar12 = PF_PART4(auVar13, 0);
      uVar10 = 0;
      do {
        puVar2 = (undefined4 *)((long)destination + uVar10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        puVar2 = (undefined4 *)((long)destination + uVar10 + 0x10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        uVar10 = uVar10 + 0x20;
      } while (uVar6 != uVar10);
      if (count == uVar6) {
        return pvVar3;
      }
      if ((count & 0x1c) == 0) {
        destination = (void *)((long)destination + uVar6);
        count = (ulong)((uint)count & 0x1f);
        goto LAB_10002cf0;
      }
    }
    uVar11 = count & 0xfffffffffffffffc;
    uVar10 = (ulong)((uint)count & 3);
    puVar9 = (undefined8 *)((long)destination + uVar11);
    auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
    do {
      *(int *)((long)destination + uVar6) = PF_PART4(auVar13, 0);
      uVar6 = uVar6 + 4;
    } while (uVar11 != uVar6);
    if (count == uVar11) {
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
 * Address: 0x10002db0
 */

void recovered_10002db0(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_10002fd5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10002fd5:
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
        goto LAB_10003056;
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
LAB_10003056:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003080
 */

void recovered_10003080(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_100032a5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_100032a5:
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
        goto LAB_10003326;
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
LAB_10003326:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10003350(char *param_1,char param_2,long param_3)

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
 * Address: 0x10003380
 */

int recovered_10003380(void *left,void *right,ulong count)

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

  if (0xf < count) {
    if ((((uint)right ^ (uint)left) & 7) != 0) goto LAB_100035b3;
    uVar11 = count;
    puVar8 = right;
    puVar10 = left;
    if (((ulong)left & 7) != 0) {
      bVar1 = *(byte *)left;
      bVar5 = *(byte *)right;
      if (bVar1 != bVar5) {
LAB_10003513:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10003668:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)left + 1);
      puVar8 = (ulong *)((long)right + 1);
      uVar11 = count - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10003513;
        puVar10 = (ulong *)((long)left + 2);
        puVar8 = (ulong *)((long)right + 2);
        uVar11 = count - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10003513;
          puVar10 = (ulong *)((long)left + 3);
          puVar8 = (ulong *)((long)right + 3);
          uVar11 = count - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10003513;
            puVar10 = (ulong *)((long)left + 4);
            puVar8 = (ulong *)((long)right + 4);
            uVar11 = count - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10003513;
              puVar10 = (ulong *)((long)left + 5);
              puVar8 = (ulong *)((long)right + 5);
              uVar11 = count - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10003513;
                puVar10 = (ulong *)((long)left + 6);
                puVar8 = (ulong *)((long)right + 6);
                uVar11 = count - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10003513;
                  puVar10 = (ulong *)((long)left + 7);
                  puVar8 = (ulong *)((long)right + 7);
                  uVar11 = count - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10003513;
                    puVar10 = (ulong *)((long)left + 8);
                    puVar8 = (ulong *)((long)right + 8);
                    uVar11 = count - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    while( true ) {
      count = uVar11;
      right = puVar8;
      left = puVar10;
      if (uVar11 < 0x20) break;
      uVar4 = *puVar10;
      uVar7 = *puVar8;
      if (uVar4 != uVar7) {
LAB_100035df:
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
        goto LAB_10003668;
      }
      uVar4 = puVar10[1];
      uVar7 = puVar8[1];
      if (uVar4 != uVar7) goto LAB_100035df;
      uVar4 = puVar10[2];
      uVar7 = puVar8[2];
      if (uVar4 != uVar7) goto LAB_100035df;
      uVar4 = puVar10[3];
      uVar7 = puVar8[3];
      if (uVar4 != uVar7) goto LAB_100035df;
      uVar11 = uVar11 - 0x20;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    }
    for (; 7 < count; count = count - 8) {
      if (*(ulong *)left != *(ulong *)right) {
        iVar3 = recovered_10003680(left,right);
        return iVar3;
      }
      right = (ulong *)((long)right + 8);
      left = (ulong *)((long)left + 8);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_100035b3:
  uVar11 = 0;
  do {
    if (*(byte *)((long)left + uVar11) != *(byte *)((long)right + uVar11)) {
      return (uint)*(byte *)((long)left + uVar11) - (uint)*(byte *)((long)right + uVar11);
    }
    uVar11 = uVar11 + 1;
  } while (count != uVar11);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003680
 */

int recovered_10003680(byte *param_1,byte *param_2)

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

bool recovered_100036f0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003710(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003730(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003750(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003780(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100037a0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100037c0(int param_1)

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

int recovered_100037e0(int param_1)

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

ulong recovered_10003800(char *text)

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

int recovered_10003830(byte *param_1,byte *param_2)

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

int recovered_10003870(byte *param_1,byte *param_2)

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

void recovered_100038b0(long param_1,long param_2)

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
 * Address: 0x100038d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_100038d0(undefined8 *param_1)

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

  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar5 = 0xfffffffffffffff8;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (*(char *)((long)param_1 + uVar10 + 8) != '\0');
  if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
     ((_DAT_00280808 < 0x50 || ((code *)(ulong)_DAT_0028084c == (code *)0x0)))) {
    return (undefined8 *)0x0;
  }
  uVar9 = uVar10 + 9;
  puVar4 = (undefined8 *)(*(code *)(ulong)_DAT_0028084c)(uVar9);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar8 = puVar4;
  if (uVar9 < 0x10) {
LAB_10003979:
    if (uVar9 == 0) {
      return puVar4;
    }
  }
  else if ((((uint)puVar4 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)puVar4 & 7) == 0) {
      puVar7 = param_1;
      puVar6 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)((long)puVar4 + 1);
      *(undefined1 *)puVar4 = *(undefined1 *)param_1;
      puVar7 = (undefined8 *)((long)param_1 + 1);
      uVar9 = uVar10 + 8;
      if ((uVar5 != 0xfffffffffffffff9) && (((ulong)puVar6 & 7) != 0)) {
        puVar6 = (undefined8 *)((long)puVar4 + 2);
        *(undefined1 *)((long)puVar4 + 1) = *(undefined1 *)((long)param_1 + 1);
        puVar7 = (undefined8 *)((long)param_1 + 2);
        uVar9 = uVar10 + 7;
        if ((uVar5 != 0xfffffffffffffffa) && (((ulong)puVar6 & 7) != 0)) {
          puVar6 = (undefined8 *)((long)puVar4 + 3);
          *(undefined1 *)((long)puVar4 + 2) = *(undefined1 *)((long)param_1 + 2);
          puVar7 = (undefined8 *)((long)param_1 + 3);
          uVar9 = uVar10 + 6;
          if ((uVar5 != 0xfffffffffffffffb) && (((ulong)puVar6 & 7) != 0)) {
            puVar6 = (undefined8 *)((long)puVar4 + 4);
            *(undefined1 *)((long)puVar4 + 3) = *(undefined1 *)((long)param_1 + 3);
            puVar7 = (undefined8 *)((long)param_1 + 4);
            uVar9 = uVar10 + 5;
            if ((uVar5 != 0xfffffffffffffffc) && (((ulong)puVar6 & 7) != 0)) {
              puVar6 = (undefined8 *)((long)puVar4 + 5);
              *(undefined1 *)((long)puVar4 + 4) = *(undefined1 *)((long)param_1 + 4);
              puVar7 = (undefined8 *)((long)param_1 + 5);
              uVar9 = uVar10 + 4;
              if ((uVar5 != 0xfffffffffffffffd) && (((ulong)puVar6 & 7) != 0)) {
                puVar6 = (undefined8 *)((long)puVar4 + 6);
                *(undefined1 *)((long)puVar4 + 5) = *(undefined1 *)((long)param_1 + 5);
                puVar7 = (undefined8 *)((long)param_1 + 6);
                uVar9 = uVar10 + 3;
                if ((uVar5 != 0xfffffffffffffffe) && (((ulong)puVar6 & 7) != 0)) {
                  puVar6 = (undefined8 *)((long)puVar4 + 7);
                  *(undefined1 *)((long)puVar4 + 6) = *(undefined1 *)((long)param_1 + 6);
                  puVar7 = (undefined8 *)((long)param_1 + 7);
                  uVar9 = uVar10 + 2;
                  if ((uVar5 != 0xffffffffffffffff) && (((ulong)puVar6 & 7) != 0)) {
                    *(undefined1 *)((long)puVar4 + 7) = *(undefined1 *)((long)param_1 + 7);
                    puVar7 = param_1 + 1;
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
      param_1 = puVar7;
      puVar8 = puVar6;
    }
    else {
      if ((0x27 < uVar9 - 8) && (0x1f < (ulong)((long)puVar6 - (long)puVar7))) {
        uVar5 = (uVar9 - 8 >> 3) + 1;
        uVar10 = uVar5 & 0xfffffffffffffffc;
        param_1 = puVar7 + uVar10;
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
        puVar7 = param_1;
        puVar6 = puVar8;
        if (uVar5 == uVar10) goto LAB_10003979;
      }
      do {
        param_1 = puVar7 + 1;
        *puVar6 = *puVar7;
        puVar8 = puVar6 + 1;
        uVar9 = uVar9 - 8;
        puVar7 = param_1;
        puVar6 = puVar8;
      } while (7 < uVar9);
    }
    goto LAB_10003979;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)param_1) < 0x20)) {
LAB_10003c98:
    puVar7 = param_1;
  }
  else {
    if (uVar9 < 0x20) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar9 & 0xffffffffffffffe0;
      uVar5 = 0;
      do {
        uVar1 = ((undefined8 *)((long)param_1 + uVar5))[1];
        puVar6 = (undefined8 *)((long)param_1 + uVar5 + 0x10);
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        *(undefined8 *)((long)puVar8 + uVar5) = *(undefined8 *)((long)param_1 + uVar5);
        ((undefined8 *)((long)puVar8 + uVar5))[1] = uVar1;
        puVar6 = (undefined8 *)((long)puVar8 + uVar5 + 0x10);
        *puVar6 = uVar2;
        puVar6[1] = uVar3;
        uVar5 = uVar5 + 0x20;
      } while (uVar10 != uVar5);
      if (uVar9 == uVar10) {
        return puVar4;
      }
      if ((uVar9 & 0x1c) == 0) {
        param_1 = (undefined8 *)((long)param_1 + uVar10);
        puVar6 = (undefined8 *)((long)puVar8 + uVar10);
        uVar5 = (ulong)((uint)uVar9 & 0x1f);
        goto LAB_10003c98;
      }
    }
    uVar11 = uVar9 & 0xfffffffffffffffc;
    uVar5 = (ulong)((uint)uVar9 & 3);
    puVar6 = (undefined8 *)((long)puVar8 + uVar11);
    puVar7 = (undefined8 *)((long)param_1 + uVar11);
    do {
      *(undefined4 *)((long)puVar8 + uVar10) = *(undefined4 *)((long)param_1 + uVar10);
      uVar10 = uVar10 + 4;
    } while (uVar11 != uVar10);
    if (uVar9 == uVar11) {
      return puVar4;
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
    return puVar4;
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
  return puVar4;
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

char * recovered_10003d50(char *param_1,char param_2)

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

long recovered_10003d90(char *param_1,char *param_2)

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
 * Address: 0x10003df0
 */

long recovered_10003df0(char *param_1,char *param_2)

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

char * recovered_10003e50(char *param_1,char *param_2)

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

char * recovered_10003eb0(char *param_1,char *param_2)

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


#undef DAT_1000cb10
#define DAT_1000cb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f10
 */

undefined * recovered_10003f10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000cb10;
}

#undef DAT_1000cb10

#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x16e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f20
 */

undefined ** recovered_10003f20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000e000;
}

#undef PTR_DAT_1000e000

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
 * Address: 0x10003f30
 */

/* WARNING: Removing unreachable block (ram,0x10003f46) */
/* WARNING: Removing unreachable block (ram,0x10003f93) */
/* WARNING: Removing unreachable block (ram,0x10003f9e) */
/* WARNING: Removing unreachable block (ram,0x10003fa7) */
/* WARNING: Removing unreachable block (ram,0x10003fb0) */
/* WARNING: Removing unreachable block (ram,0x10003f9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003f30(undefined8 *param_1)

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
  return;
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

#undef DAT_1000c920
#define DAT_1000c920 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004030
 */

double recovered_10004030(double param_1,uint param_2)

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
          param_1 = param_1 * DAT_1000c920;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000c920 * DAT_1000c920 * DAT_1000c920 * DAT_1000c920 *
                    DAT_1000c920 * DAT_1000c920 * DAT_1000c920 * DAT_1000c920;
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

#undef DAT_1000c920

#undef DAT_1000c920
#define DAT_1000c920 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000c9a0
#define DAT_1000c9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_1000c9a0
#define _DAT_1000c9a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004100
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004100(double param_1,int *param_2)

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
  dVar2 = (double)(_DAT_1000c9a0 ^ (ulong)param_1);
  if ((double)(_DAT_1000c9a0 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1000c928 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000c920;
      iVar1 = iVar1 + 1;
    } while (DAT_1000c928 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000c920)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1000c9a0 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1000c920
#undef DAT_1000c928
#undef DAT_1000c9a0
#undef _DAT_1000c9a0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_100041d0(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004200
 */

double recovered_10004200(double param_1,double param_2)

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
      return DAT_1000c928;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000c928;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000c928 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000c928

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10004280(double param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042b0
 */

ulong recovered_100042b0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  return ~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
         (ulong)(DAT_1000c928 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_1000c928

#undef DAT_1000c920
#define DAT_1000c920 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004310
 */

double recovered_10004310(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_1000c928) {
      dVar1 = DAT_1000c928;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c920;
  }
  return dVar1;
}

#undef DAT_1000c920
#undef DAT_1000c928

#undef DAT_1000c920
#define DAT_1000c920 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000c930
#define DAT_1000c930 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_1000c938
#define DAT_1000c938 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_1000c940
#define DAT_1000c940 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000c948
#define DAT_1000c948 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_1000c950
#define DAT_1000c950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1000c958
#define DAT_1000c958 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_1000c9b0
#define DAT_1000c9b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_1000c9c0
#define DAT_1000c9c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_1000c9d0
#define DAT_1000c9d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef DAT_1000c9e0
#define DAT_1000c9e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef _DAT_1000c950
#define _DAT_1000c950 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_1000c958
#define _DAT_1000c958 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_1000c9b0
#define _DAT_1000c9b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x98U)))
#undef _DAT_1000c9c0
#define _DAT_1000c9c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef _DAT_1000c9d0
#define _DAT_1000c9d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef _DAT_1000c9e0
#define _DAT_1000c9e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100044c0(double param_1)

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
    if (DAT_1000c938 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000c920;
        iVar1 = iVar1 + 1;
      } while (DAT_1000c938 < param_1);
    }
    for (; param_1 < DAT_1000c940; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000c948 + param_1) / (param_1 + DAT_1000c928);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000c9b0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000c9c0);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000c9d0);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000c9e0);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000c950 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000c958;
  }
  return DAT_1000c930;
}

#undef DAT_1000c920
#undef DAT_1000c928
#undef DAT_1000c930
#undef DAT_1000c938
#undef DAT_1000c940
#undef DAT_1000c948
#undef DAT_1000c950
#undef DAT_1000c958
#undef DAT_1000c9b0
#undef DAT_1000c9c0
#undef DAT_1000c9d0
#undef DAT_1000c9e0
#undef _DAT_1000c950
#undef _DAT_1000c958
#undef _DAT_1000c9b0
#undef _DAT_1000c9c0
#undef _DAT_1000c9d0
#undef _DAT_1000c9e0

#undef DAT_1000c9f0
#define DAT_1000c9f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004610
 */

long recovered_10004610(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000c9f0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000c9f0

#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000c960
#define DAT_1000c960 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000c968
#define DAT_1000c968 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_1000c970
#define DAT_1000c970 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_1000c978
#define DAT_1000c978 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_1000c980
#define DAT_1000c980 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_1000ca00
#define DAT_1000ca00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe8U)))
#undef _DAT_1000c980
#define _DAT_1000c980 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef _DAT_1000ca00
#define _DAT_1000ca00 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004640(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000c960 < param_1; param_1 = param_1 + DAT_1000c968) {
  }
  for (; param_1 < DAT_1000c970; param_1 = param_1 + DAT_1000c978) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000ca00);
  return ((dVar1 / _DAT_1000c980 + DAT_1000c928 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000c928
#undef DAT_1000c960
#undef DAT_1000c968
#undef DAT_1000c970
#undef DAT_1000c978
#undef DAT_1000c980
#undef DAT_1000ca00
#undef _DAT_1000c980
#undef _DAT_1000ca00

#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000c960
#define DAT_1000c960 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000c968
#define DAT_1000c968 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_1000c970
#define DAT_1000c970 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_1000c978
#define DAT_1000c978 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_1000c988
#define DAT_1000c988 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_1000ca10
#define DAT_1000ca10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf8U)))
#undef _DAT_1000ca10
#define _DAT_1000ca10 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000c960 < param_1; param_1 = param_1 + DAT_1000c968) {
  }
  for (; param_1 < DAT_1000c970; param_1 = param_1 + DAT_1000c978) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000ca10);
  return (DAT_1000c988 * dVar1 + DAT_1000c928 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000c928
#undef DAT_1000c960
#undef DAT_1000c968
#undef DAT_1000c970
#undef DAT_1000c978
#undef DAT_1000c988
#undef DAT_1000ca10
#undef _DAT_1000ca10

#undef DAT_1000c9a0
#define DAT_1000c9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_1000c9a0
#define _DAT_1000c9a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004790(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000c9a0 ^ (ulong)param_1);
  if ((double)(_DAT_1000c9a0 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000c9a0
#undef _DAT_1000c9a0

/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_100047b0(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10004880(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10004930(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10004980(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10004a10(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000c920
#define DAT_1000c920 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000c9a0
#define DAT_1000c9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef UNK_1000c9a4
#define UNK_1000c9a4 (*(uint *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_1000c9a0
#define _DAT_1000c9a0 (*(uint *)(((uintptr_t)pf_module_state + 0x88U)))
#undef uRam000000001000c9a4
#define uRam000000001000c9a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004a60(float param_1,int *param_2)

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
    dVar2 = pf_bits_double(CONCAT44((uint)(pf_double_bits(dVar2) >> 0x20) ^ uRam000000001000c9a4,
                             SUB84(dVar2,0) ^ _DAT_1000c9a0));
  }
  iVar1 = 0;
  if (DAT_1000c928 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000c920;
      iVar1 = iVar1 + 1;
    } while (DAT_1000c928 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000c920)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001000c9a4,_DAT_1000c9a0));
  }
  return CONCAT44((int)(pf_double_bits(dVar2) >> 0x20),(float)dVar2);
}

#undef DAT_1000c920
#undef DAT_1000c928
#undef DAT_1000c9a0
#undef UNK_1000c9a4
#undef _DAT_1000c9a0
#undef uRam000000001000c9a4

#undef DAT_1000c920
#define DAT_1000c920 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b20
 */

undefined8 recovered_10004b20(float param_1,uint param_2)

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
          dVar3 = dVar3 * DAT_1000c920;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1000c920 * DAT_1000c920 * DAT_1000c920 * DAT_1000c920 * DAT_1000c920 *
                  DAT_1000c920 * DAT_1000c920 * DAT_1000c920;
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

#undef DAT_1000c920

#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000ca30
#define DAT_1000ca30 (*(float *)(((uintptr_t)pf_module_state + 0x118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c10
 */

float recovered_10004c10(float param_1,float param_2)

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
    return DAT_1000ca30;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000c928;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000c928 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000c928
#undef DAT_1000ca30

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10004ca0(void)

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


#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ce0
 */

float recovered_10004ce0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000c928 + dVar2) & uVar1);
}

#undef DAT_1000c928

#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d40
 */

double recovered_10004d40(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  if (param_1 < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
                    (ulong)(DAT_1000c928 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000c928

#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004da0
 */

undefined8 recovered_10004da0(undefined8 param_1)

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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1000c928 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1000c928

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10004e10(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10004310((double)param_1);
  return (float)dVar1;
}


#undef DAT_1000c920
#define DAT_1000c920 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000c938
#define DAT_1000c938 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_1000c940
#define DAT_1000c940 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000c948
#define DAT_1000c948 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_1000c950
#define DAT_1000c950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1000c958
#define DAT_1000c958 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_1000c9b0
#define DAT_1000c9b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_1000c9c0
#define DAT_1000c9c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_1000c9d0
#define DAT_1000c9d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef DAT_1000c9e0
#define DAT_1000c9e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_1000ca34
#define DAT_1000ca34 (*(float *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef DAT_1000ca38
#define DAT_1000ca38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x120U)))
#undef _DAT_1000c950
#define _DAT_1000c950 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_1000c958
#define _DAT_1000c958 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_1000c9b0
#define _DAT_1000c9b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x98U)))
#undef _DAT_1000c9c0
#define _DAT_1000c9c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef _DAT_1000c9d0
#define _DAT_1000c9d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef _DAT_1000c9e0
#define _DAT_1000c9e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef _DAT_1000ca38
#define _DAT_1000ca38 (*(float *)(((uintptr_t)pf_module_state + 0x120U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004e30(float param_1)

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
    if (_DAT_1000ca38 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000c920;
        iVar1 = iVar1 + 1;
      } while (DAT_1000c938 < dVar2);
    }
    for (; dVar2 < DAT_1000c940; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000c948 + dVar2) / (dVar2 + DAT_1000c928);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000c9b0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000c9c0);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000c9d0);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000c9e0);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000c950 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000c958);
  }
  return DAT_1000ca34;
}

#undef DAT_1000c920
#undef DAT_1000c928
#undef DAT_1000c938
#undef DAT_1000c940
#undef DAT_1000c948
#undef DAT_1000c950
#undef DAT_1000c958
#undef DAT_1000c9b0
#undef DAT_1000c9c0
#undef DAT_1000c9d0
#undef DAT_1000c9e0
#undef DAT_1000ca34
#undef DAT_1000ca38
#undef _DAT_1000c950
#undef _DAT_1000c958
#undef _DAT_1000c9b0
#undef _DAT_1000c9c0
#undef _DAT_1000c9d0
#undef _DAT_1000c9e0
#undef _DAT_1000ca38

#undef DAT_1000c9f0
#define DAT_1000c9f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f80
 */

long recovered_10004f80(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000c9f0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000c9f0

#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000c960
#define DAT_1000c960 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000c968
#define DAT_1000c968 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_1000c970
#define DAT_1000c970 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_1000c978
#define DAT_1000c978 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_1000c980
#define DAT_1000c980 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_1000ca00
#define DAT_1000ca00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe8U)))
#undef _DAT_1000c980
#define _DAT_1000c980 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef _DAT_1000ca00
#define _DAT_1000ca00 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004fb0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_1000c960 < dVar1; dVar1 = dVar1 + DAT_1000c968) {
  }
  for (; dVar1 < DAT_1000c970; dVar1 = dVar1 + DAT_1000c978) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000ca00);
  return (float)(((dVar2 / _DAT_1000c980 + DAT_1000c928 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000c928
#undef DAT_1000c960
#undef DAT_1000c968
#undef DAT_1000c970
#undef DAT_1000c978
#undef DAT_1000c980
#undef DAT_1000ca00
#undef _DAT_1000c980
#undef _DAT_1000ca00

#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000c960
#define DAT_1000c960 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000c968
#define DAT_1000c968 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_1000c970
#define DAT_1000c970 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_1000c978
#define DAT_1000c978 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_1000c988
#define DAT_1000c988 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_1000ca10
#define DAT_1000ca10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf8U)))
#undef _DAT_1000ca10
#define _DAT_1000ca10 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10005060(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000c960 < dVar1; dVar1 = dVar1 + DAT_1000c968) {
  }
  for (; dVar1 < DAT_1000c970; dVar1 = dVar1 + DAT_1000c978) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000ca10);
  return (float)((DAT_1000c988 * dVar1 + DAT_1000c928 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000c928
#undef DAT_1000c960
#undef DAT_1000c968
#undef DAT_1000c970
#undef DAT_1000c978
#undef DAT_1000c988
#undef DAT_1000ca10
#undef _DAT_1000ca10

#undef DAT_1000ca20
#define DAT_1000ca20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef UNK_1000ca24
#define UNK_1000ca24 (*(uint *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef _DAT_1000ca20
#define _DAT_1000ca20 (*(uint *)(((uintptr_t)pf_module_state + 0x108U)))
#undef uRam000000001000ca24
#define uRam000000001000ca24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005100
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10005100(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)param_1;
  fVar2 = (float)(_DAT_1000ca20 ^ (uint)fVar1);
  if ((float)(_DAT_1000ca20 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000ca24 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000ca20
#undef UNK_1000ca24
#undef _DAT_1000ca20
#undef uRam000000001000ca24

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10005120(byte *param_1,undefined8 *param_2,uint param_3)

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

long recovered_10005250(byte *param_1,undefined8 *param_2,uint param_3)

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


#undef DAT_1000c920
#define DAT_1000c920 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000c998
#define DAT_1000c998 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_1000c9a0
#define DAT_1000c9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_1000c9a0
#define _DAT_1000c9a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10005380(byte *param_1,undefined8 *param_2)

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
    dVar11 = dVar11 * DAT_1000c998 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1000c928;
      do {
        dVar12 = dVar12 * DAT_1000c998 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000c998;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_10005459;
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
LAB_10005459:
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
                dVar11 = dVar11 * DAT_1000c920;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000c920 * DAT_1000c920 * DAT_1000c920 * DAT_1000c920 *
                         DAT_1000c920 * DAT_1000c920 * DAT_1000c920 * DAT_1000c920;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000c9a0);
  }
  return dVar11;
}

#undef DAT_1000c920
#undef DAT_1000c928
#undef DAT_1000c998
#undef DAT_1000c9a0
#undef _DAT_1000c9a0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100055e0(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RSI;
  byte *in_RDI;
  double dVar1;

  dVar1 = recovered_10005380(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_1000c998
#define DAT_1000c998 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_1000c9a0
#define DAT_1000c9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef DAT_1000cb12
#define DAT_1000cb12 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1faU)))
#undef _DAT_1000c9a0
#define _DAT_1000c9a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef str_1000cb1c
#define str_1000cb1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x204U)))
#undef str_1000cb2d
#define str_1000cb2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x215U)))
#define abStack_7a (*(byte (*)[122])(pf_stack_frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100055f0(char *buffer,ulong capacity,char *format,void *arguments)

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

  if (capacity != 0) {
    *buffer = '\0';
  }
  uVar8 = _DAT_1000c9a0;
  dVar7 = DAT_1000c998;
  uVar20 = capacity;
  uVar13 = 0;
LAB_10005659:
  bVar15 = *format;
  uVar22 = (uint)uVar13;
  if (bVar15 != 0x25) {
    if (bVar15 == 0) {
      if (capacity != 0) {
        *buffer = 0;
      }
      return uVar22;
    }
    if (1 < uVar20) {
      *buffer = bVar15;
      goto LAB_10005672;
    }
    goto LAB_10005653;
  }
  bVar15 = format[1];
  if (bVar15 == 0x25) {
    if (1 < uVar20) {
      *buffer = 0x25;
      buffer = buffer + 1;
      uVar20 = uVar20 - 1;
    }
    format = format + 1;
    goto LAB_10005653;
  }
  uVar24 = uVar13 & 0xffffffff;
  pbVar1 = (byte *)(format + 2);
  pbVar21 = (byte *)format;
  while( true ) {
    format = (char *)pbVar1;
    if (0x30 < bVar15) break;
    if ((0x1280900000000U >> ((ulong)bVar15 & 0x3f) & 1) == 0) {
      if ((ulong)bVar15 == 0x2a) {
        if (*(uint *)arguments < 0x29) {
          *(uint *)arguments = *(uint *)arguments + 8;
        }
        else {
          *(long *)((long)arguments + 8) = *(long *)((long)arguments + 8) + 8;
        }
        bVar15 = *format;
        goto LAB_100056fc;
      }
      break;
    }
    pbVar21 = pbVar21 + 1;
    bVar15 = *format;
    pbVar1 = (byte *)(format + 1);
  }
  do {
    bVar15 = pbVar21[1];
    format = (char *)(pbVar21 + 1);
    pbVar21 = (byte *)format;
  } while ((byte)(bVar15 - 0x30U) < 10);
LAB_100056fc:
  iVar9 = -1;
  if (bVar15 == 0x2e) {
    bVar15 = format[1];
    if (bVar15 == 0x2a) {
      uVar2 = *(uint *)arguments;
      if ((ulong)uVar2 < 0x29) {
        piVar10 = (int *)((ulong)uVar2 + *(long *)((long)arguments + 0x10));
        *(uint *)arguments = uVar2 + 8;
      }
      else {
        piVar10 = *(int **)((long)arguments + 8);
        *(int **)((long)arguments + 8) = piVar10 + 2;
      }
      iVar9 = *piVar10;
      bVar15 = format[2];
      format = format + 2;
    }
    else {
      format = format + 1;
      iVar9 = 0;
      if ((byte)(bVar15 - 0x30U) < 10) {
        iVar9 = 0;
        do {
          bVar6 = (int)(((byte)(bVar15 - 0x30U) ^ 0x7ffffffe) / 10) < iVar9;
          iVar9 = (uint)(byte)(bVar15 - 0x30U) + iVar9 * 10;
          if (bVar6) {
            iVar9 = 0x7fffffff;
          }
          bVar15 = format[1];
          format = format + 1;
        } while ((byte)(bVar15 - 0x30U) < 10);
      }
    }
  }
  bVar6 = false;
  switch((uintptr_t)(bVar15)) {
  case 0x4c:
    format = format + 1;
    cVar16 = '\b';
    bVar6 = true;
    break;
  default:
    cVar16 = '\0';
    break;
  case 0x68:
    pbVar21 = (byte *)(format + 1);
    pbVar1 = (byte *)(format + 2);
    format = format + 1;
    if (*pbVar21 == 0x68) {
      format = (char *)pbVar1;
    }
    cVar16 = (*pbVar21 != 0x68) + '\x01';
    bVar6 = false;
    break;
  case 0x6a:
    format = format + 1;
    cVar16 = '\a';
    bVar6 = false;
    break;
  case 0x6c:
    pbVar21 = (byte *)(format + 1);
    pbVar1 = (byte *)(format + 2);
    format = format + 1;
    if (*pbVar21 == 0x6c) {
      format = (char *)pbVar1;
    }
    cVar16 = (*pbVar21 == 0x6c) + '\x03';
    bVar6 = false;
    break;
  case 0x74:
    format = format + 1;
    cVar16 = '\x06';
    bVar6 = false;
    break;
  case 0x7a:
    format = format + 1;
    cVar16 = '\x05';
    bVar6 = false;
  }
  switch((uintptr_t)(*format)) {
  case 'I':
  case 'd':
  case 'i':
    uVar2 = *(uint *)arguments;
    uVar13 = (ulong)uVar2;
    switch((uintptr_t)(cVar16)) {
    case '\x01':
      if (uVar2 < 0x29) {
        *(uint *)arguments = uVar2 + 8;
        uVar24 = (ulong)*(char *)(*(long *)((long)arguments + 0x10) + uVar13);
      }
      else {
        pcVar23 = *(char **)((long)arguments + 8);
        *(char **)((long)arguments + 8) = pcVar23 + 8;
        uVar24 = (ulong)*pcVar23;
      }
      break;
    case '\x02':
      if (uVar2 < 0x29) {
        *(uint *)arguments = uVar2 + 8;
        uVar24 = (ulong)*(short *)(*(long *)((long)arguments + 0x10) + uVar13);
      }
      else {
        psVar4 = *(short **)((long)arguments + 8);
        *(short **)((long)arguments + 8) = psVar4 + 4;
        uVar24 = (ulong)*psVar4;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (0x28 < uVar2) goto LAB_10005b94;
      lVar3 = *(long *)((long)arguments + 0x10);
      *(uint *)arguments = uVar2 + 8;
LAB_10005878:
      uVar24 = *(ulong *)(lVar3 + uVar13);
      break;
    case '\a':
      if (uVar2 < 0x29) {
        lVar3 = *(long *)((long)arguments + 0x10);
        *(uint *)arguments = uVar2 + 8;
        goto LAB_10005878;
      }
LAB_10005b94:
      puVar11 = *(ulong **)((long)arguments + 8);
      *(ulong **)((long)arguments + 8) = puVar11 + 1;
      uVar24 = *puVar11;
      break;
    default:
      if (uVar2 < 0x29) {
        piVar10 = (int *)(uVar13 + *(long *)((long)arguments + 0x10));
        *(uint *)arguments = uVar2 + 8;
      }
      else {
        piVar10 = *(int **)((long)arguments + 8);
        *(int **)((long)arguments + 8) = piVar10 + 2;
      }
      uVar24 = (ulong)*piVar10;
    }
    if ((long)uVar24 < 0) {
      if (1 < uVar20) {
        *buffer = 0x2d;
        buffer = buffer + 1;
        uVar20 = uVar20 - 1;
      }
      uVar22 = uVar22 + 1;
      uVar24 = -uVar24;
    }
    uVar13 = (ulong)uVar22;
    uVar14 = 0;
    do {
      uVar19 = uVar14;
      abStack_7a[uVar19 + 2] = str_1000cb2d[uVar24 % 10];
      uVar14 = uVar19 + 1;
      bVar6 = 9 < uVar24;
      uVar24 = uVar24 / 10;
    } while (bVar6);
    if (uVar14 != 0) {
      if ((uVar19 & 1) == 0) {
        if (1 < uVar20) {
          *buffer = abStack_7a[uVar19 + 2];
          buffer = buffer + 1;
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
            *buffer = abStack_7a[uVar19 + 1];
            buffer = buffer + 1;
            uVar20 = uVar20 - 1;
          }
          if (1 < uVar20) {
            *buffer = abStack_7a[uVar19];
            buffer = buffer + 1;
            uVar20 = uVar20 - 1;
          }
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
    }
    break;
  default:
    if (1 < uVar20) {
      *buffer = 0x3f;
LAB_10005672:
      buffer = buffer + 1;
      uVar20 = uVar20 - 1;
    }
    goto LAB_10005653;
  case 'X':
  case 'x':
    uVar22 = *(uint *)arguments;
    uVar13 = (ulong)uVar22;
    switch((uintptr_t)(cVar16)) {
    case '\x01':
      if (uVar22 < 0x29) {
        *(uint *)arguments = uVar22 + 8;
        uVar13 = (ulong)*(byte *)(*(long *)((long)arguments + 0x10) + uVar13);
      }
      else {
        pbVar21 = *(byte **)((long)arguments + 8);
        *(byte **)((long)arguments + 8) = pbVar21 + 8;
        uVar13 = (ulong)*pbVar21;
      }
      break;
    case '\x02':
      if (uVar22 < 0x29) {
        *(uint *)arguments = uVar22 + 8;
        uVar13 = (ulong)*(ushort *)(*(long *)((long)arguments + 0x10) + uVar13);
      }
      else {
        puVar5 = *(ushort **)((long)arguments + 8);
        *(ushort **)((long)arguments + 8) = puVar5 + 4;
        uVar13 = (ulong)*puVar5;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar22 < 0x29) {
        *(uint *)arguments = uVar22 + 8;
        uVar13 = *(ulong *)(*(long *)((long)arguments + 0x10) + uVar13);
      }
      else {
LAB_10005ce1:
        puVar11 = *(ulong **)((long)arguments + 8);
        *(ulong **)((long)arguments + 8) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10005ce1;
      *(uint *)arguments = uVar22 + 8;
      uVar13 = *(ulong *)(*(long *)((long)arguments + 0x10) + uVar13);
      break;
    default:
      if (uVar22 < 0x29) {
        puVar18 = (uint *)(uVar13 + *(long *)((long)arguments + 0x10));
        *(uint *)arguments = uVar22 + 8;
      }
      else {
        puVar18 = *(uint **)((long)arguments + 8);
        *(uint **)((long)arguments + 8) = puVar18 + 2;
      }
      uVar13 = (ulong)*puVar18;
    }
    pcVar23 = str_1000cb2d;
    if (*format == 0x58) {
      pcVar23 = str_1000cb1c;
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
        *buffer = abStack_7a[uVar19 + 2];
        buffer = buffer + 1;
        uVar20 = uVar20 - 1;
      }
    }
    else {
      uVar19 = uVar14;
    }
    if (uVar14 != 1) {
      do {
        if (1 < uVar20) {
          *buffer = abStack_7a[uVar19 + 1];
          buffer = buffer + 1;
          uVar20 = uVar20 - 1;
        }
        if (1 < uVar20) {
          *buffer = abStack_7a[uVar19];
          buffer = buffer + 1;
          uVar20 = uVar20 - 1;
        }
        uVar19 = uVar19 - 2;
      } while (uVar19 != 0);
    }
    format = format + 1;
    uVar13 = uVar24 + uVar14 & 0xffffffff;
    goto LAB_10005659;
  case 'c':
    uVar2 = *(uint *)arguments;
    if ((ulong)uVar2 < 0x29) {
      pbVar21 = (byte *)((ulong)uVar2 + *(long *)((long)arguments + 0x10));
      *(uint *)arguments = uVar2 + 8;
    }
    else {
      pbVar21 = *(byte **)((long)arguments + 8);
      *(byte **)((long)arguments + 8) = pbVar21 + 8;
    }
    if (1 < uVar20) {
      *buffer = *pbVar21;
      goto LAB_10005672;
    }
LAB_10005653:
    uVar13 = (ulong)(uVar22 + 1);
    break;
  case 'f':
    if (bVar6) {
      *(ulong *)((long)arguments + 8) =
           (*(long *)((long)arguments + 8) + 0xfU & 0xfffffffffffffff0) + 0x10;
      uVar24 = uVar20;
      if (1 < uVar20) {
        *buffer = 0x30;
        uVar24 = 1;
        if (uVar20 - 3 < 0xfffffffffffffffe) {
          buffer[1] = 0x2e;
          uVar13 = uVar20 & 0xfffffffffffffffe;
          if (uVar13 == 2) {
            buffer = buffer + 2;
          }
          else {
            buffer[2] = 0x30;
            if (uVar20 - 5 < 0xfffffffffffffffe) {
              buffer[3] = 0x30;
              if (uVar13 == 4) {
                buffer = buffer + 4;
              }
              else {
                buffer[4] = 0x30;
                if (uVar20 - 7 < 0xfffffffffffffffe) {
                  buffer[5] = 0x30;
                  if (uVar13 == 6) {
                    buffer = buffer + 6;
                  }
                  else {
                    buffer[6] = 0x30;
                    if (uVar20 - 9 < 0xfffffffffffffffe) {
                      buffer[7] = 0x30;
                      buffer = buffer + 8;
                      uVar24 = uVar20 - 8;
                    }
                    else {
                      buffer = buffer + 7;
                    }
                  }
                }
                else {
                  buffer = buffer + 5;
                }
              }
            }
            else {
              buffer = buffer + 3;
            }
          }
        }
        else {
          buffer = buffer + 1;
        }
      }
      uVar13 = (ulong)(uVar22 + 8);
      format = format + 1;
      uVar20 = uVar24;
    }
    else {
      uVar2 = *(uint *)((long)arguments + 4);
      if ((ulong)uVar2 < 0xa1) {
        pdVar12 = (double *)((ulong)uVar2 + *(long *)((long)arguments + 0x10));
        *(uint *)((long)arguments + 4) = uVar2 + 0x10;
      }
      else {
        pdVar12 = *(double **)((long)arguments + 8);
        *(double **)((long)arguments + 8) = pdVar12 + 1;
      }
      dVar25 = *pdVar12;
      uVar13 = uVar20;
      if (dVar25 < 0.0) {
        if (1 < uVar20) {
          *buffer = 0x2d;
          buffer = buffer + 1;
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
        abStack_7a[uVar14 + 2] = str_1000cb2d[uVar24 % 10];
        uVar20 = uVar14 + 1;
        bVar6 = 9 < uVar24;
        uVar24 = uVar24 / 10;
      } while (bVar6);
      if (uVar20 != 0) {
        if ((uVar14 & 1) == 0) {
          if (1 < uVar13) {
            *buffer = abStack_7a[uVar14 + 2];
            buffer = buffer + 1;
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
              *buffer = abStack_7a[uVar14 + 1];
              buffer = buffer + 1;
              uVar13 = uVar13 - 1;
            }
            if (1 < uVar13) {
              *buffer = abStack_7a[uVar14];
              buffer = buffer + 1;
              uVar13 = uVar13 - 1;
            }
            uVar14 = uVar14 - 2;
          } while (uVar14 != 0);
        }
      }
      uVar20 = uVar13;
      if (1 < uVar13) {
        *buffer = 0x2e;
        uVar20 = uVar13 - 1;
        if (uVar20 < 2) {
          buffer = buffer + 1;
        }
        else {
          dVar25 = (dVar25 - (double)(int)dVar25) * dVar7;
          iVar9 = (int)dVar25;
          buffer[1] = (char)iVar9 + 0x30;
          uVar24 = uVar13 & 0xfffffffffffffffe;
          uVar20 = 1;
          if (uVar24 == 2) {
            buffer = buffer + 2;
          }
          else {
            dVar25 = (dVar25 - (double)iVar9) * dVar7;
            iVar9 = (int)dVar25;
            buffer[2] = (char)iVar9 + 0x30;
            if (uVar13 - 5 < 0xfffffffffffffffe) {
              dVar25 = (dVar25 - (double)iVar9) * dVar7;
              iVar9 = (int)dVar25;
              buffer[3] = (char)iVar9 + 0x30;
              if (uVar24 == 4) {
                buffer = buffer + 4;
              }
              else {
                dVar25 = (dVar25 - (double)iVar9) * dVar7;
                buffer[4] = (char)(int)dVar25 + 0x30;
                if (uVar13 - 7 < 0xfffffffffffffffe) {
                  dVar25 = (dVar25 - (double)(int)dVar25) * dVar7;
                  iVar9 = (int)dVar25;
                  buffer[5] = (char)iVar9 + 0x30;
                  if (uVar24 == 6) {
                    buffer = buffer + 6;
                  }
                  else {
                    buffer[6] = (char)(int)((dVar25 - (double)iVar9) * dVar7) + 0x30;
                    buffer = buffer + 7;
                    uVar20 = uVar13 - 7;
                  }
                }
                else {
                  buffer = buffer + 5;
                }
              }
            }
            else {
              buffer = buffer + 3;
            }
          }
        }
      }
      uVar13 = (ulong)(uVar22 + 7);
      format = format + 1;
    }
    goto LAB_10005659;
  case 'p':
    uVar2 = *(uint *)arguments;
    if ((ulong)uVar2 < 0x29) {
      puVar11 = (ulong *)((ulong)uVar2 + *(long *)((long)arguments + 0x10));
      *(uint *)arguments = uVar2 + 8;
    }
    else {
      puVar11 = *(ulong **)((long)arguments + 8);
      *(ulong **)((long)arguments + 8) = puVar11 + 1;
    }
    uVar24 = *puVar11;
    if (1 < uVar20) {
      *buffer = 0x30;
      if (uVar20 - 3 < 0xfffffffffffffffe) {
        buffer[1] = 0x78;
        buffer = buffer + 2;
        uVar20 = uVar20 - 2;
      }
      else {
        buffer = buffer + 1;
        uVar20 = 1;
      }
    }
    uVar13 = 0;
    do {
      uVar14 = uVar13;
      abStack_7a[uVar14 + 2] = str_1000cb2d[(uint)uVar24 & 0xf];
      uVar13 = uVar14 + 1;
      bVar6 = 0xf < uVar24;
      uVar24 = uVar24 >> 4;
    } while (bVar6);
    if ((uVar14 & 1) == 0) {
      if (1 < uVar20) {
        *buffer = abStack_7a[uVar14 + 2];
        buffer = buffer + 1;
        uVar20 = uVar20 - 1;
      }
    }
    else {
      uVar14 = uVar13;
    }
    if (uVar13 != 1) {
      do {
        if (1 < uVar20) {
          *buffer = abStack_7a[uVar14 + 1];
          buffer = buffer + 1;
          uVar20 = uVar20 - 1;
        }
        if (1 < uVar20) {
          *buffer = abStack_7a[uVar14];
          buffer = buffer + 1;
          uVar20 = uVar20 - 1;
        }
        uVar14 = uVar14 - 2;
      } while (uVar14 != 0);
    }
    uVar13 = (uVar22 + 2) + uVar13;
    format = format + 1;
    goto LAB_10005659;
  case 's':
    uVar22 = *(uint *)arguments;
    if ((ulong)uVar22 < 0x29) {
      puVar17 = (undefined8 *)((ulong)uVar22 + *(long *)((long)arguments + 0x10));
      *(uint *)arguments = uVar22 + 8;
    }
    else {
      puVar17 = *(undefined8 **)((long)arguments + 8);
      *(undefined8 **)((long)arguments + 8) = puVar17 + 1;
    }
    if (iVar9 != 0) {
      pbVar21 = (byte *)*puVar17;
      if (pbVar21 == (byte *)0x0) {
        pbVar21 = &DAT_1000cb12;
      }
      do {
        if (*pbVar21 == 0) break;
        if (1 < uVar20) {
          *buffer = *pbVar21;
          buffer = buffer + 1;
          uVar20 = uVar20 - 1;
        }
        pbVar21 = pbVar21 + 1;
        uVar13 = (ulong)((int)uVar13 + 1);
        iVar9 = iVar9 - (uint)(0 < iVar9);
      } while (iVar9 != 0);
    }
    break;
  case 'u':
    uVar22 = *(uint *)arguments;
    uVar13 = (ulong)uVar22;
    switch((uintptr_t)(cVar16)) {
    case '\x01':
      if (uVar22 < 0x29) {
        *(uint *)arguments = uVar22 + 8;
        uVar13 = (ulong)*(byte *)(*(long *)((long)arguments + 0x10) + uVar13);
      }
      else {
        pbVar21 = *(byte **)((long)arguments + 8);
        *(byte **)((long)arguments + 8) = pbVar21 + 8;
        uVar13 = (ulong)*pbVar21;
      }
      break;
    case '\x02':
      if (uVar22 < 0x29) {
        *(uint *)arguments = uVar22 + 8;
        uVar13 = (ulong)*(ushort *)(*(long *)((long)arguments + 0x10) + uVar13);
      }
      else {
        puVar5 = *(ushort **)((long)arguments + 8);
        *(ushort **)((long)arguments + 8) = puVar5 + 4;
        uVar13 = (ulong)*puVar5;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar22 < 0x29) {
        *(uint *)arguments = uVar22 + 8;
        uVar13 = *(ulong *)(*(long *)((long)arguments + 0x10) + uVar13);
      }
      else {
LAB_10006013:
        puVar11 = *(ulong **)((long)arguments + 8);
        *(ulong **)((long)arguments + 8) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10006013;
      *(uint *)arguments = uVar22 + 8;
      uVar13 = *(ulong *)(*(long *)((long)arguments + 0x10) + uVar13);
      break;
    default:
      if (uVar22 < 0x29) {
        puVar18 = (uint *)(uVar13 + *(long *)((long)arguments + 0x10));
        *(uint *)arguments = uVar22 + 8;
      }
      else {
        puVar18 = *(uint **)((long)arguments + 8);
        *(uint **)((long)arguments + 8) = puVar18 + 2;
      }
      uVar13 = (ulong)*puVar18;
    }
    uVar14 = 0;
    do {
      uVar19 = uVar14;
      abStack_7a[uVar19 + 2] = str_1000cb2d[uVar13 % 10];
      uVar14 = uVar19 + 1;
      bVar6 = 9 < uVar13;
      uVar13 = uVar13 / 10;
    } while (bVar6);
    if (uVar14 == 0) {
      format = format + 1;
      uVar13 = uVar24;
    }
    else {
      if ((uVar19 & 1) == 0) {
        if (1 < uVar20) {
          *buffer = abStack_7a[uVar19 + 2];
          buffer = buffer + 1;
          uVar20 = uVar20 - 1;
        }
      }
      else {
        uVar19 = uVar14;
      }
      if (uVar14 == 1) {
        uVar13 = uVar24 + uVar14 & 0xffffffff;
        format = format + 1;
      }
      else {
        do {
          if (1 < uVar20) {
            *buffer = abStack_7a[uVar19 + 1];
            buffer = buffer + 1;
            uVar20 = uVar20 - 1;
          }
          if (1 < uVar20) {
            *buffer = abStack_7a[uVar19];
            buffer = buffer + 1;
            uVar20 = uVar20 - 1;
          }
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
        uVar13 = uVar24 + uVar14 & 0xffffffff;
        format = format + 1;
      }
    }
    goto LAB_10005659;
  }
  format = format + 1;
  goto LAB_10005659;
}

#undef DAT_1000c998
#undef DAT_1000c9a0
#undef DAT_1000cb12
#undef _DAT_1000c9a0
#undef str_1000cb1c
#undef str_1000cb2d
#undef abStack_7a

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_100064d0(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_100055f0(buffer,capacity,format,(void *)args);
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
#undef DAT_1000e128
#define DAT_1000e128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1810U)))
#undef DAT_1000e138
#define DAT_1000e138 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1820U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(uint64_t * *)(0x10000000U))
#undef _DAT_10000008
#define _DAT_10000008 (*(uint64_t *)(0x10000008U))
#undef _DAT_10000010
#define _DAT_10000010 (*(uint64_t *)(0x10000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_10006550(long *param_1,ulong param_2,ulong *param_3)

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
        if (DAT_1000e128 == 0) {
          puVar5 = (ulong *)&DAT_1000e128;
        }
        *puVar5 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1000e138 == (long *)0x0) {
          DAT_1000e138 = plVar2;
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
      if (DAT_1000e128 == 0) {
        plVar1 = &DAT_1000e128;
      }
      *plVar1 = 0x10000000;
      *param_3 = 0x10000000;
      if (DAT_1000e138 == (long *)0x0) {
        DAT_1000e138 = (long *)&DAT_10000000;
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
        if (DAT_1000e128 == 0) {
          puVar3 = &DAT_1000e128;
        }
        *puVar3 = plVar1;
        *param_3 = (ulong)plVar1;
        if (DAT_1000e138 == (long *)0x0) {
          DAT_1000e138 = plVar1;
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
#undef DAT_1000e128
#undef DAT_1000e138
#undef _DAT_10000000
#undef _DAT_10000008
#undef _DAT_10000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006710
 */

ulong * recovered_10006710(ulong *param_1,ulong *param_2)

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
 * Address: 0x10006780
 */

undefined8 recovered_10006780(ulong *param_1,long param_2)

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
#undef DAT_1000e140
#define DAT_1000e140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1828U)))
#undef DAT_1000e150
#define DAT_1000e150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1838U)))
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
 * Address: 0x100067e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100067e0(long param_1,long param_2)

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
        if (DAT_1000e140 != 0) {
          DAT_1000e140 = DAT_1000e140 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000e140 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001d60(local_238,&DAT_1000e150,DAT_1000e140);
            uVar3 = DAT_1000e140;
          }
          local_238[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 &&
              ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00280840)(local_238);
          }
          DAT_1000e140 = 0;
        }
        else {
          if (DAT_1000e140 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001d60(local_238,&DAT_1000e150,DAT_1000e140);
            local_238[DAT_1000e140] = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00280840)(local_238);
            }
            DAT_1000e140 = 0;
          }
          pcVar1 = &DAT_1000e150 + DAT_1000e140;
          DAT_1000e140 = DAT_1000e140 + 1;
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
#undef DAT_1000e140
#undef DAT_1000e150
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
#undef DAT_1000e140
#define DAT_1000e140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1828U)))
#undef DAT_1000e150
#define DAT_1000e150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1838U)))
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
 * Address: 0x100069b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100069b0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000e140 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001d60(local_208,&DAT_1000e150,DAT_1000e140);
    uVar1 = DAT_1000e140;
  }
  local_208[uVar1] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280840)(local_208);
  }
  DAT_1000e140 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000e140
#undef DAT_1000e150
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
#undef DAT_1000e140
#define DAT_1000e140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1828U)))
#undef DAT_1000e150
#define DAT_1000e150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1838U)))
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
 * Address: 0x10006a50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006a50(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000e140 != 0) {
    recovered_10001d60(local_208,&DAT_1000e150,DAT_1000e140);
    local_208[DAT_1000e140] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_208);
    }
    DAT_1000e140 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000e140
#undef DAT_1000e150
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_208

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_148 (*(undefined1 (*)[320])(frame + 16))
void recovered_10006af0(undefined *param_1,undefined1 *param_2)

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

  recovered_100064d0(in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa);
  if (0 < (int)extraout_EAX) {
    recovered_100067e0((long)local_148,(ulong)extraout_EAX);
  }
  return;
}

#undef local_148

#undef DAT_1000cb5c
#define DAT_1000cb5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef str_1000cb41
#define str_1000cb41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x229U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b50
 */

void recovered_10006b50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003800(str_1000cb41);
  recovered_100067e0(((uintptr_t)pf_module_state+0x229U),uVar1);
  uVar1 = recovered_10003800(&DAT_1000cb5c);
  recovered_100067e0(((uintptr_t)pf_module_state+0x244U),uVar1);
  return;
}

#undef DAT_1000cb5c
#undef str_1000cb41

#undef DAT_1000cb5c
#define DAT_1000cb5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef str_1000cb5f
#define str_1000cb5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x247U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b90
 */

void recovered_10006b90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003800(str_1000cb5f);
  recovered_100067e0(((uintptr_t)pf_module_state+0x247U),uVar1);
  uVar1 = recovered_10003800(&DAT_1000cb5c);
  recovered_100067e0(((uintptr_t)pf_module_state+0x244U),uVar1);
  return;
}

#undef DAT_1000cb5c
#undef str_1000cb5f

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
#undef DAT_1000e140
#define DAT_1000e140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1828U)))
#undef DAT_1000e150
#define DAT_1000e150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1838U)))
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
 * Address: 0x10006bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006bd0(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  if (DAT_1000e140 != 0) {
    recovered_10001d60(local_228,&DAT_1000e150,DAT_1000e140);
    local_228[DAT_1000e140] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_228);
    }
    DAT_1000e140 = 0;
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
#undef DAT_1000e140
#undef DAT_1000e150
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_228

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006cf0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006d00(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10006d10(void)

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
#undef DAT_1000cb3e
#define DAT_1000cb3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x226U)))
#undef DAT_1000e060
#define DAT_1000e060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1748U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef str_1000cbe0
#define str_1000cbe0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c8U)))
#undef str_1000cbed
#define str_1000cbed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d5U)))
#undef str_1000cbfb
#define str_1000cbfb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e3U)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d20
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10006d20(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ulong uVar7;
  void *destination;
  ulong count;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;

  if (param_1 == (char *)0x0 || param_2 == (char *)0x0) {
    DAT_1000e060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10003830(param_1,str_1000cbe0);
  if (iVar3 == 0) {
    uVar8 = 1;
LAB_10006fce:
    puVar5 = recovered_10001c70(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_1000e060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10002a60(puVar5,0,0x340);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    recovered_100064d0((char *)(puVar5 + 1),0xf1,&DAT_1000cb3e,param_1);
    return puVar5;
  }
  iVar4 = recovered_10003830(param_1,str_1000cbed);
  if (iVar4 == 0) {
    uVar8 = 2;
    goto LAB_10006fce;
  }
  iVar4 = recovered_10003830(param_1,str_1000cbfb);
  if (iVar4 == 0) {
    uVar8 = 3;
    goto LAB_10006fce;
  }
  puVar5 = recovered_10001c70(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_1000e060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10002a60(puVar5,0,0x340);
  *puVar5 = 0;
  pcVar6 = recovered_10003d50(param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10003d50(param_2,'+');
    bVar9 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10003d50(param_2,'a');
      bVar9 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar5 + 0x49) = bVar9;
  pcVar6 = recovered_10003d50(param_2,'w');
  if ((pcVar6 == (char *)0x0) && (pcVar6 = recovered_10003d50(param_2,'a'), pcVar6 == (char *)0x0))
  {
    pcVar6 = recovered_10003d50(param_2,'+');
    bVar10 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar5 + 0x125) = bVar10;
  pcVar6 = recovered_10003d50(param_2,'a');
  *(bool *)((long)puVar5 + 0x126) = pcVar6 != (char *)0x0;
  puVar5[0x48] = 0xffffffff;
  recovered_100064d0((char *)(puVar5 + 1),0xf1,&DAT_1000cb3e,param_1);
  recovered_10002a60(&local_34,0,0xc);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00280834)(param_1,&local_34), iVar3 != 0)))) {
    pcVar6 = recovered_10003d50(param_2,'w');
    if (local_30 != 0 && pcVar6 == (char *)0x0) {
      if (*(char *)((long)puVar5 + 0x125) == '\x01') {
        count = (ulong)local_30;
        uVar7 = *(ulong *)(puVar5 + 0x44);
        if (uVar7 < count) {
          uVar2 = 0x100;
          if (uVar7 != 0) {
            uVar2 = uVar7;
          }
          do {
            uVar7 = uVar2;
            uVar2 = uVar7 * 2;
          } while (uVar7 < count);
          destination = recovered_10001d10(*(void **)(puVar5 + 0x40),uVar7);
          if (destination == (void *)0x0) {
            DAT_1000e060 = 0xc;
            *(undefined1 *)((long)puVar5 + 0x129) = 1;
            goto LAB_10007058;
          }
          *(void **)(puVar5 + 0x40) = destination;
          *(ulong *)(puVar5 + 0x44) = uVar7;
          *(void **)(puVar5 + 0x3e) = destination;
          count = (ulong)local_30;
        }
        else {
          destination = *(void **)(puVar5 + 0x40);
        }
        recovered_10001d60(destination,(void *)(ulong)local_34,count);
      }
      else {
        *(ulong *)(puVar5 + 0x3e) = (ulong)local_34;
      }
      *(ulong *)(puVar5 + 0x42) = (ulong)local_30;
      cVar1 = *(char *)((long)puVar5 + 0x126);
      goto joined_r0x10006fb2;
    }
  }
  else if (*(char *)((long)puVar5 + 0x125) == '\0') {
    DAT_1000e060 = 2;
LAB_10007058:
    recovered_10001cc0(puVar5);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar5 + 0x126);
joined_r0x10006fb2:
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
#undef DAT_1000cb3e
#undef DAT_1000e060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_1000cbe0
#undef str_1000cbed
#undef str_1000cbfb
#undef local_34
#undef local_30

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
#undef DAT_1000cb3e
#define DAT_1000cb3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x226U)))
#undef DAT_1000e060
#define DAT_1000e060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1748U)))
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
#undef str_1000cbe0
#define str_1000cbe0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c8U)))
#undef str_1000cbed
#define str_1000cbed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d5U)))
#undef str_1000cbfb
#define str_1000cbfb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e3U)))
#define uStack_34 (*(uint *)(pf_stack_frame + 28))
#define uStack_30 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070b0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_100070b0(char *param_1,char *param_2,int *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  void *destination;
  undefined4 *puVar7;
  ulong count;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;

  if (param_3 != (int *)0x0) {
    if ((*param_3 == 0) && (*(char *)((long)param_3 + 0x127) == '\x01')) {
      if (((_DAT_00280800 == 0x50414d57) &&
          (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
         ((code *)(ulong)_DAT_00280838 != (code *)0x0)) {
        uStack_30 = 0x1000713a;
        iVar4 = (*(code *)(ulong)_DAT_00280838)
                          (param_3 + 1,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_10007161;
        }
      }
      DAT_1000e060 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_10007161:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x10007178;
      recovered_10001cc0(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x10007180;
    recovered_10001cc0(param_3);
    puVar7 = recovered_10006d20(param_1,param_2);
    return puVar7;
  }
  if (param_1 == (char *)0x0 || param_2 == (char *)0x0) {
    DAT_1000e060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10003830(param_1,str_1000cbe0);
  if (iVar4 == 0) {
    uVar8 = 1;
LAB_10006fce:
    puVar7 = recovered_10001c70(0x340);
    if (puVar7 == (undefined4 *)0x0) {
      DAT_1000e060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10002a60(puVar7,0,0x340);
    *puVar7 = uVar8;
    *(bool *)(puVar7 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar7 + 0x125) = iVar4 != 0;
    puVar7[0x48] = 0xffffffff;
    recovered_100064d0((char *)(puVar7 + 1),0xf1,&DAT_1000cb3e,param_1);
    return puVar7;
  }
  iVar3 = recovered_10003830(param_1,str_1000cbed);
  if (iVar3 == 0) {
    uVar8 = 2;
    goto LAB_10006fce;
  }
  iVar3 = recovered_10003830(param_1,str_1000cbfb);
  if (iVar3 == 0) {
    uVar8 = 3;
    goto LAB_10006fce;
  }
  puVar7 = recovered_10001c70(0x340);
  if (puVar7 == (undefined4 *)0x0) {
    DAT_1000e060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10002a60(puVar7,0,0x340);
  *puVar7 = 0;
  pcVar5 = recovered_10003d50(param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = recovered_10003d50(param_2,'+');
    bVar9 = true;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = recovered_10003d50(param_2,'a');
      bVar9 = pcVar5 != (char *)0x0;
    }
  }
  *(bool *)(puVar7 + 0x49) = bVar9;
  pcVar5 = recovered_10003d50(param_2,'w');
  if ((pcVar5 == (char *)0x0) && (pcVar5 = recovered_10003d50(param_2,'a'), pcVar5 == (char *)0x0))
  {
    pcVar5 = recovered_10003d50(param_2,'+');
    bVar10 = pcVar5 != (char *)0x0;
  }
  *(bool *)((long)puVar7 + 0x125) = bVar10;
  pcVar5 = recovered_10003d50(param_2,'a');
  *(bool *)((long)puVar7 + 0x126) = pcVar5 != (char *)0x0;
  puVar7[0x48] = 0xffffffff;
  recovered_100064d0((char *)(puVar7 + 1),0xf1,&DAT_1000cb3e,param_1);
  recovered_10002a60(&uStack_34,0,0xc);
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      (((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00280834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar5 = recovered_10003d50(param_2,'w');
    if ((uint)uStack_30 != 0 && pcVar5 == (char *)0x0) {
      if (*(char *)((long)puVar7 + 0x125) == '\x01') {
        count = uStack_30 & 0xffffffff;
        uVar6 = *(ulong *)(puVar7 + 0x44);
        if (uVar6 < count) {
          uVar2 = 0x100;
          if (uVar6 != 0) {
            uVar2 = uVar6;
          }
          do {
            uVar6 = uVar2;
            uVar2 = uVar6 * 2;
          } while (uVar6 < count);
          destination = recovered_10001d10(*(void **)(puVar7 + 0x40),uVar6);
          if (destination == (void *)0x0) {
            DAT_1000e060 = 0xc;
            *(undefined1 *)((long)puVar7 + 0x129) = 1;
            goto LAB_10007058;
          }
          *(void **)(puVar7 + 0x40) = destination;
          *(ulong *)(puVar7 + 0x44) = uVar6;
          *(void **)(puVar7 + 0x3e) = destination;
          count = uStack_30 & 0xffffffff;
        }
        else {
          destination = *(void **)(puVar7 + 0x40);
        }
        recovered_10001d60(destination,(void *)(ulong)uStack_34,count);
      }
      else {
        *(ulong *)(puVar7 + 0x3e) = (ulong)uStack_34;
      }
      *(ulong *)(puVar7 + 0x42) = (ulong)(uint)uStack_30;
      cVar1 = *(char *)((long)puVar7 + 0x126);
      goto joined_r0x10006fb2;
    }
  }
  else if (*(char *)((long)puVar7 + 0x125) == '\0') {
    DAT_1000e060 = 2;
LAB_10007058:
    recovered_10001cc0(puVar7);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar7 + 0x126);
joined_r0x10006fb2:
  if (cVar1 == '\x01') {
    *(undefined8 *)(puVar7 + 0x46) = *(undefined8 *)(puVar7 + 0x42);
    return puVar7;
  }
  return puVar7;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_1000cb3e
#undef DAT_1000e060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef str_1000cbe0
#undef str_1000cbed
#undef str_1000cbfb
#undef uStack_34
#undef uStack_30

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_1000e060
#define DAT_1000e060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1748U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100071a0(int *param_1)

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
      DAT_1000e060 = 5;
      *(undefined1 *)((long)param_1 + 0x129) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    recovered_10001cc0(*(void **)(param_1 + 0x40));
  }
  recovered_10001cc0(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef DAT_1000e060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007270
 */

ulong recovered_10007270(void *param_1,ulong param_2,ulong param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint uVar3;
  ulong count;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_4 == (int *)0x0) {
    return 0;
  }
  if ((char)param_4[0x49] == '\x01') {
    if ((*param_4 != 0) || (param_4[0x48] != -1)) {
      uVar4 = 0;
      do {
        uVar6 = 0;
        do {
          uVar3 = recovered_100073b0(param_4);
          if (uVar3 == 0xffffffff) {
            return uVar4;
          }
          *(char *)((long)param_1 + uVar6) = (char)uVar3;
          uVar6 = uVar6 + 1;
        } while (param_2 != uVar6);
        uVar4 = uVar4 + 1;
        param_1 = (void *)((long)param_1 + param_2);
      } while (uVar4 != param_3);
      return param_3;
    }
    uVar4 = *(ulong *)(param_4 + 0x46);
    uVar6 = *(ulong *)(param_4 + 0x42) - uVar4;
    if (uVar4 <= *(ulong *)(param_4 + 0x42) && uVar6 != 0) {
      PF_PART8(auVar1, 8) = 0;
      PF_PART8(auVar1, 0) = param_2;
      PF_PART8(auVar2, 8) = 0;
      PF_PART8(auVar2, 0) = param_3;
      uVar5 = 0xffffffffffffffff;
      if (SUB168(auVar1 * auVar2,8) == 0) {
        uVar5 = param_3 * param_2;
      }
      count = uVar5;
      if (uVar6 < uVar5) {
        count = uVar6;
      }
      recovered_10001d60(param_1,(void *)(uVar4 + *(long *)(param_4 + 0x3e)),count);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + count;
      if (uVar6 < uVar5) {
        *(undefined1 *)(param_4 + 0x4a) = 1;
      }
      if ((count | param_2) >> 0x20 == 0) {
        return (count & 0xffffffff) / (param_2 & 0xffffffff);
      }
      return count / param_2;
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
#undef DAT_1000cb1b
#define DAT_1000cb1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
#undef DAT_1000e140
#define DAT_1000e140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1828U)))
#undef DAT_1000e150
#define DAT_1000e150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1838U)))
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
 * Address: 0x100073b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100073b0(int *param_1)

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
LAB_1000740a:
      *(ulong *)(param_1 + 0xce) = uVar3 + 1;
      return (uint)*(byte *)((long)param_1 + uVar3 + 0x12a);
    }
    if (DAT_1000e140 != 0) {
      recovered_10001d60(local_218,&DAT_1000e150,DAT_1000e140);
      local_218[DAT_1000e140] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00280840)(local_218);
      }
      DAT_1000e140 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x47 < _DAT_00280808 && ((code *)(ulong)_DAT_00280844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00280844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_1000cb1b,0)
      ;
      if (iVar2 != 0) {
        uVar3 = recovered_10003800((char *)((long)param_1 + 0x12a));
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        *(undefined1 *)((long)param_1 + uVar3 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar3 = 0;
        goto LAB_1000740a;
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
#undef DAT_1000cb1b
#undef DAT_1000e140
#undef DAT_1000e150
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_218

#undef DAT_1000e060
#define DAT_1000e060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1748U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075a0
 */

long recovered_100075a0(void *param_1,long param_2,long param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (void *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((long)param_4 + 0x125) != '\x01')))) {
    return 0;
  }
  uVar5 = param_2 * param_3;
  if ((*param_4 & 0xfffffffe) == 2) {
    recovered_100067e0((long)param_1,uVar5);
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
      pvVar3 = recovered_10001d10(*(void **)(param_4 + 0x40),uVar2);
      if (pvVar3 == (void *)0x0) {
        DAT_1000e060 = 0xc;
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
      recovered_10002a60((void *)(uVar2 + *(long *)(param_4 + 0x40)),0,uVar4 - uVar2);
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10001d60((void *)(uVar4 + *(long *)(param_4 + 0x40)),param_1,uVar5);
    uVar5 = uVar5 + *(long *)(param_4 + 0x46);
    *(ulong *)(param_4 + 0x46) = uVar5;
    if (*(ulong *)(param_4 + 0x42) < uVar5) {
      *(ulong *)(param_4 + 0x42) = uVar5;
    }
    *(undefined2 *)((long)param_4 + 0x127) = 1;
  }
  return param_3;
}

#undef DAT_1000e060

#undef DAT_1000e060
#define DAT_1000e060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1748U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007730
 */

undefined8 recovered_10007730(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000e060 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_1000773e;
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
LAB_1000773e:
  DAT_1000e060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000e060

#undef DAT_1000e060
#define DAT_1000e060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1748U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077b0
 */

undefined8 recovered_100077b0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1000e060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000e060

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_1000e060
#define DAT_1000e060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1748U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100077e0(int *param_1)

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
  DAT_1000e060 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef DAT_1000e060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10007890(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_100078b0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100078d0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_100078f0(uint param_1,long param_2)

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
#undef DAT_1000e060
#define DAT_1000e060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1748U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(uint *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007920(long param_1)

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
  DAT_1000e060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef DAT_1000e060
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
#undef DAT_1000e060
#define DAT_1000e060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1748U)))
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
 * Address: 0x100079a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100079a0(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000e060 = 0x16;
    return 0xffffffff;
  }
  recovered_10002a60(&local_2c,0,0xc);
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
  DAT_1000e060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef DAT_1000e060
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
ulong recovered_10007b10(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[100] = {0};

  uint uVar1;
  int iVar2;
  void *dst;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar3 = 0;
    recovered_10002a60(&local_34,0,0xc);
    iVar2 = Ram0000000000006800;
    if (iVar2 != 0x50414d57) goto LAB_10004d5f;
    iVar2 = Ram0000000000006804;
    if (((iVar2 != 0) && (uVar1 = Ram0000000000006808, 0xb < uVar1)) &&
       (uVar1 = Ram0000000000006808, 0x37 < uVar1)) {
      uVar1 = UINT_00006834;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        iVar2 = (*(code *)(ulong)uVar1)((char *)param_1,&local_34);
        if (iVar2 != 0) {
          dst = recovered_10001c70((ulong)(local_30 + (local_30 == 0)));
          if (dst != (void *)0x0) {
            if ((ulong)local_30 == 0) {
              uVar3 = 0;
            }
            else {
              recovered_10001d60(dst,(void *)(ulong)local_34,(ulong)local_30);
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
bool recovered_10007bf0(long param_1,long param_2,long param_3)

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

undefined8 recovered_10007c60(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007c70(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007c80(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007c90(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007ca0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10007cb0(long param_1,long param_2,long param_3)

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


#undef DAT_1000cb6f
#define DAT_1000cb6f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x257U)))
#undef str_1000cb72
#define str_1000cb72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25aU)))
#undef str_1000cb7f
#define str_1000cb7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x267U)))
#undef str_1000cb89
#define str_1000cb89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x271U)))
#undef str_1000cb9d
#define str_1000cb9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x285U)))
#undef str_1000cbab
#define str_1000cbab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x293U)))
#undef str_1000cbbd
#define str_1000cbbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a5U)))
#undef str_1000cbc9
#define str_1000cbc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_1000cbda
#define str_1000cbda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cf0
 */

char * recovered_10007cf0(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000cb6f;
  default:
    return str_1000cbda;
  case 2:
    return str_1000cb72;
  case 5:
    return str_1000cb7f;
  case 9:
    return str_1000cb89;
  case 0xc:
    return str_1000cb9d;
  case 0xd:
    return str_1000cbab;
  case 0x11:
    return str_1000cbbd;
  case 0x16:
    return str_1000cbc9;
  }
}

#undef DAT_1000cb6f
#undef str_1000cb72
#undef str_1000cb7f
#undef str_1000cb89
#undef str_1000cb9d
#undef str_1000cbab
#undef str_1000cbbd
#undef str_1000cbc9
#undef str_1000cbda

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007dc0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007dd0(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000e350
#define DAT_1000e350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007de0
 */

void recovered_10007de0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000e350 = DAT_1000e350 + 1;
  return;
}

#undef DAT_1000e350

#define in_stack_00000008 (*(longdouble *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e00
 */

void recovered_10007e00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_10004610((double)in_stack_00000008);
  return;
}

#undef in_stack_00000008

#define local_218 (*(char (*)[536])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e20
 */

ulong recovered_10007e20(byte *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 extraout_var = 0;
  ulong uVar2;

  uVar1 = recovered_100055f0(local_218,0x200,(char *)param_1,param_2);
  uVar2 = CONCAT44(extraout_var,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = (ulong)uVar1;
    }
    recovered_100067e0((long)local_218,uVar2);
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
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
#define local_28 (*(undefined8 *)(pf_stack_frame + 712))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 720))
#define local_18 (*(undefined1 * *)(pf_stack_frame + 728))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e70
 */

ulong recovered_10007e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,byte *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                        undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  unsigned char pf_stack_frame[784] __attribute__((aligned(16))) = {0};

  char in_AL;
  uint uVar1;
  undefined4 extraout_var = 0;
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
  local_28 = 0x3000000008;
  local_d0 = param_10;
  local_c8 = param_11;
  local_c0 = param_12;
  local_b8 = param_13;
  local_b0 = param_14;
  uVar1 = recovered_100055f0(local_2d8,0x200,(char *)param_9,&local_28);
  uVar2 = CONCAT44(extraout_var,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = (ulong)uVar1;
    }
    recovered_100067e0((long)local_2d8,uVar2);
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
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
__attribute__((naked,noreturn)) void recovered_10007f30(void *context,...){
 __asm__ volatile("movq 64(%rdi),%rsp\nmovq 48(%rdi),%rbp\njmp *56(%rdi)");
}


/* Native nonlocal task context and floating control state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10007f40(void *context){
 __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rdx\nmovq %rdx,48(%rdi)\nmovq (%rsp),%rdx\nmovq %rdx,56(%rdi)\nstmxcsr 64(%rdi)\nfnstcw 68(%rdi)\nxorl %eax,%eax\nret");
}


/* Native task restore; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007f80(void *context,int value){
 __asm__ volatile("movq %rdi,%rdx\nmovl %esi,%eax\ntestl %eax,%eax\njnz 1f\nmovl $1,%eax\n1: ldmxcsr 64(%rdx)\nfldcw 68(%rdx)\nmovq 0(%rdx),%rbx\nmovq 8(%rdx),%rbp\nmovq 16(%rdx),%r12\nmovq 24(%rdx),%r13\nmovq 32(%rdx),%r14\nmovq 40(%rdx),%r15\nmovq 48(%rdx),%rsp\njmp *56(%rdx)");
}


#undef DAT_10008011
#define DAT_10008011 (*(uint8_t *)(0x10008011U))
#undef DAT_1000cc18
#define DAT_1000cc18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x300U)))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fc0
 */

void recovered_10007fc0(void)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_1000cc18;
  local_50 = &DAT_10008011;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001c40();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10008011
#undef DAT_1000cc18
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008040
 */

undefined8 recovered_10008040(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008050(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10008060(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10007fc0();
}


#undef DAT_1000e358
#define DAT_1000e358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008060
 */

void recovered_10008060(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long extraout_RAX;

  recovered_10008520(param_1);
  if (extraout_RAX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007fc0();
  }
  *(long *)(extraout_RAX + 0x10) = DAT_1000e358;
  *(undefined1 *)(extraout_RAX + 0x34) = 0;
  DAT_1000e358 = extraout_RAX;
  recovered_10008560(extraout_RAX);
  return;
}

#undef DAT_1000e358

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008090
 */

void * recovered_10008090(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001c70(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001c40();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080c0
 */

void * recovered_100080c0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001c70(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001c40();
  }
  return pvVar1;
}


#undef DAT_1000cc28
#define DAT_1000cc28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x310U)))
#undef LAB_1000815d
#define LAB_1000815d (*(uint8_t *)(0x1000815dU))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080f0
 */

void recovered_100080f0(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_1000cc28;
  local_50 = &LAB_1000815d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_1000cc28
#undef LAB_1000815d
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_88
#undef auStack_40
#undef local_80
#undef local_68

#undef DAT_1000cc38
#define DAT_1000cc38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x320U)))
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

void recovered_10008190(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_1000cc38;
  local_50 = &LAB_100081fd;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_1000cc38
#undef LAB_100081fd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000cc48
#define DAT_1000cc48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x330U)))
#undef LAB_1000829d
#define LAB_1000829d (*(uint8_t *)(0x1000829dU))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008230
 */

void recovered_10008230(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_1000cc48;
  local_50 = &LAB_1000829d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_1000cc48
#undef LAB_1000829d
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef auStack_40
#undef local_58
#undef local_50

#undef DAT_1000cc58
#define DAT_1000cc58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x340U)))
#undef LAB_1000833d
#define LAB_1000833d (*(uint8_t *)(0x1000833dU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082d0
 */

void recovered_100082d0(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_1000cc58;
  local_50 = &LAB_1000833d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_1000cc58
#undef LAB_1000833d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008370
 */

undefined8 recovered_10008370(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008380
 */

uint recovered_10008380(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008390
 */

void recovered_10008390(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083a0
 */

void recovered_100083a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000e368
#define DAT_1000e368 (*(int *)(((uintptr_t)pf_module_state + 0x1a50U)))
#undef DAT_1000e370
#define DAT_1000e370 (*(void * *)(((uintptr_t)pf_module_state + 0x1a58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083b0
 */

long recovered_100083b0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong size;
  long lVar5;

  size = param_1 + 0x38 + (ulong)(param_1 == 0);
  pvVar2 = recovered_10001c70(size);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007fc0();
  }
  if (size != 0) {
    if (size < 8) {
      uVar3 = 0;
    }
    else {
      if (size < 0x20) {
        uVar4 = 0;
LAB_1000841c:
        uVar3 = size & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar2 + uVar4) = 0;
          uVar4 = uVar4 + 8;
          if (uVar3 == uVar4) goto LAB_1000844f;
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
      if (size == uVar3) goto LAB_10008454;
      uVar4 = uVar3;
      if ((size & 0x18) != 0) goto LAB_1000841c;
    }
    do {
      *(undefined1 *)((long)pvVar2 + uVar3) = 0;
      uVar3 = uVar3 + 1;
LAB_1000844f:
    } while (size != uVar3);
  }
LAB_10008454:
  DAT_1000e368 = DAT_1000e368 + 1 + (uint)(DAT_1000e368 == -1);
  if (DAT_1000e370 == (void *)0x0) {
LAB_1000849e:
    *(int *)((long)pvVar2 + 0x30) = DAT_1000e368;
    *(void **)((long)pvVar2 + 0x18) = DAT_1000e370;
    DAT_1000e370 = pvVar2;
    return (long)pvVar2 + 0x38;
  }
  do {
    lVar5 = (long)DAT_1000e370;
    while (*(int *)(lVar5 + 0x30) != DAT_1000e368) {
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) goto LAB_1000849e;
    }
    DAT_1000e368 = DAT_1000e368 + 1 + (uint)(DAT_1000e368 == -1);
  } while( true );
}

#undef DAT_1000e368
#undef DAT_1000e370

#undef DAT_1000e370
#define DAT_1000e370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084c0
 */

void recovered_100084c0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;

  if (param_1 == 0) {
    return;
  }
  pointer = (void *)(param_1 + -0x38);
  pvVar1 = DAT_1000e370;
  if (DAT_1000e370 == pointer) {
    puVar2 = &DAT_1000e370;
  }
  else {
    do {
      pvVar3 = pvVar1;
      if (pvVar3 == (void *)0x0) goto LAB_1000850f;
      pvVar1 = *(void **)((long)pvVar3 + 0x18);
    } while (*(void **)((long)pvVar3 + 0x18) != pointer);
    puVar2 = (undefined8 *)((long)pvVar3 + 0x18);
  }
  *puVar2 = *(undefined8 *)(param_1 + -0x20);
  *(undefined8 *)(param_1 + -0x20) = 0;
LAB_1000850f:
  recovered_10001cc0(pointer);
  return;
}

#undef DAT_1000e370

#undef DAT_1000e370
#define DAT_1000e370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008520
 */

void recovered_10008520(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = DAT_1000e370;
  if (DAT_1000e370 != param_1 && DAT_1000e370 != 0) {
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

#undef DAT_1000e370

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008560
 */

long recovered_10008560(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_1000e358
#define DAT_1000e358 (*(void * *)(((uintptr_t)pf_module_state + 0x1a40U)))
#undef DAT_1000e370
#define DAT_1000e370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008570
 */

void recovered_10008570(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;

  pointer = DAT_1000e358;
  if (DAT_1000e358 != (void *)0x0) {
    puVar2 = (undefined8 *)((long)DAT_1000e358 + 0x10);
    DAT_1000e358 = *(void **)((long)DAT_1000e358 + 0x10);
    *puVar2 = 0;
    if (*(char *)((long)pointer + 0x34) == '\0') {
      if (*(code **)((long)pointer + 8) != (code *)0x0) {
        (**(code **)((long)pointer + 8))((long)pointer + 0x38);
      }
      pvVar1 = DAT_1000e370;
      if (DAT_1000e370 == pointer) {
        puVar2 = &DAT_1000e370;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_100085ed;
          pvVar1 = *(void **)((long)pvVar3 + 0x18);
        } while (*(void **)((long)pvVar3 + 0x18) != pointer);
        puVar2 = (undefined8 *)((long)pvVar3 + 0x18);
      }
      *puVar2 = *(undefined8 *)((long)pointer + 0x18);
      *(undefined8 *)((long)pointer + 0x18) = 0;
LAB_100085ed:
      recovered_10001cc0(pointer);
      return;
    }
  }
  return;
}

#undef DAT_1000e358
#undef DAT_1000e370

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008600
 */

void recovered_10008600(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x38) = param_2;
  *(undefined8 *)(param_1 + -0x30) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10008630((undefined8 *)(param_1 + -0x38));
}


#undef DAT_1000e358
#define DAT_1000e358 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a40U)))
#undef DAT_1000e360
#define DAT_1000e360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a48U)))
#define cStack_36 (*(char *)(pf_stack_frame + 26))
#define local_38 (*(undefined2 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_35 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008630
 */

void recovered_10008630(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;

  if (DAT_1000e360 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_1000e360;
    do {
      local_30 = 0;
      local_38 = 0;
      cStack_36 = '\0';
      uStack_35 = 0;
      uStack_34 = 0;
      uVar3 = recovered_10009110((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[4] = plVar4;
        param_1[5] = CONCAT44(local_30,uStack_34);
        recovered_100087c0(param_1);
        puVar2 = DAT_1000e358;
        if (DAT_1000e358 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10007fc0();
        }
        *(undefined1 *)((long)DAT_1000e358 + 0x34) = 1;
        puVar2[4] = 0;
        puVar2[5] = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10008630(puVar2);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007fc0();
}

#undef DAT_1000e358
#undef DAT_1000e360
#undef cStack_36
#undef local_38
#undef local_30
#undef uStack_35
#undef uStack_34

#undef DAT_1000e358
#define DAT_1000e358 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086b0
 */

void recovered_100086b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000e358;
  if (DAT_1000e358 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007fc0();
  }
  *(undefined1 *)((long)DAT_1000e358 + 0x34) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10008630(puVar1);
}

#undef DAT_1000e358

#undef DAT_1000e360
#define DAT_1000e360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086e0
 */

void recovered_100086e0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000e360;
  DAT_1000e360 = param_1;
  return;
}

#undef DAT_1000e360

#undef DAT_1000e360
#define DAT_1000e360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008700
 */

void recovered_10008700(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1000e360;
  if (DAT_1000e360 == param_1) {
    puVar2 = &DAT_1000e360;
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

#undef DAT_1000e360

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008740
 */

void recovered_10008740(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008630(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008750
 */

void recovered_10008750(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007fc0();
}


#undef DAT_1000e360
#define DAT_1000e360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a48U)))
#undef DAT_1000e370
#define DAT_1000e370 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008760
 */

void recovered_10008760(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000e370;
  if (DAT_1000e370 != param_1 && DAT_1000e370 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar1 + 6) == (int)param_1) goto LAB_100087a5;
      puVar1 = (undefined8 *)puVar1[3];
    } while ((puVar1 != (undefined8 *)0x0) && (puVar1 != param_1));
  }
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007fc0();
  }
LAB_100087a5:
  if (DAT_1000e360 != (undefined8 *)0x0) {
    DAT_1000e360 = (undefined8 *)*DAT_1000e360;
  }
  recovered_100087c0(puVar1);
  return;
}

#undef DAT_1000e360
#undef DAT_1000e370

#undef DAT_1000e360
#define DAT_1000e360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a48U)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087c0
 */

void recovered_100087c0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  long *plVar3;

  if (DAT_1000e360 != (long *)0x0) {
    plVar1 = (long *)param_1[4];
    do {
      plVar3 = DAT_1000e360;
      if (DAT_1000e360 == plVar1) {
        *(ulong *)((long)DAT_1000e360 + 0xc) =
             CONCAT44((int)*(undefined8 *)((long)param_1 + 0x2c),
                      (int)((ulong)*(undefined8 *)((long)param_1 + 0x2c) >> 0x20));
        uVar2 = *(undefined4 *)(param_1 + 5);
LAB_10008854:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10007f30((long)plVar3);
                    /* WARNING: Subroutine does not return */
        recovered_10008760(plVar3);
      }
      local_30 = 0;
      local_38 = 0;
      recovered_10009110((long)DAT_1000e360,(byte *)*param_1,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        *(undefined4 *)((long)plVar3 + 0xc) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)(plVar3 + 2) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_10008854;
      }
      DAT_1000e360 = (long *)*plVar3;
    } while (DAT_1000e360 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007fc0();
}

#undef DAT_1000e360
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008860
 */

void recovered_10008860(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008760(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008870
 */

undefined8 recovered_10008870(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008880
 */

void recovered_10008880(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007fc0();
}


#undef DAT_1000e0c0
#define DAT_1000e0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008890
 */

long recovered_10008890(long *param_1,undefined8 param_2,undefined8 *param_3)

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
        if (lVar3 == lVar4) goto LAB_10008954;
      }
      else {
        lVar6 = 0;
        do {
          cVar1 = *(char *)(lVar3 + lVar6);
          cVar2 = *(char *)(lVar4 + lVar6);
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10008954;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar5 != &DAT_1000e0c0) goto LAB_1000895c;
      puVar5 = (undefined8 *)puVar5[2];
      bVar7 = puVar5 != (undefined8 *)0x0;
    } while ((puVar5 != param_3) && (puVar5 != (undefined8 *)0x0));
  }
  if (bVar7) {
LAB_10008954:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x10);
  }
  else {
LAB_1000895c:
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_1000e0c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008970
 */

void recovered_10008970(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001c40();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008980
 */

undefined8 recovered_10008980(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008990(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100089b0(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100089e0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a00(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a30(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define in_stack_00000008 (*(undefined8 *)(frame + 40))
#define in_stack_00000010 (*(ushort *)(frame + 48))
byte recovered_10008a50(void)

{
  unsigned char frame[64] = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a90(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10008ac0(double value) {
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
float recovered_10008c30(float value){return (float)recovered_10008ac0((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10008dc0(long double value){return (long double)recovered_10008ac0((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10008f50(long end,long start){return (double)end-(double)start;}


#undef DAT_1000c920
#define DAT_1000c920 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000c928
#define DAT_1000c928 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000c948
#define DAT_1000c948 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_1000c988
#define DAT_1000c988 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f70
 */

double recovered_10008f70(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_10004280(param_1);
  if (DAT_1000c920 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_1000c928;
  }
  else if (param_1 - dVar1 <= DAT_1000c988) {
    dVar1 = dVar1 + DAT_1000c948;
  }
  return dVar1;
}

#undef DAT_1000c920
#undef DAT_1000c928
#undef DAT_1000c948
#undef DAT_1000c988

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10008fc0(byte *param_1,undefined8 *param_2,uint param_3)

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

void recovered_10009100(void)

{
  unsigned char frame[64] = {0};

  uint in_EDX;
  undefined8 *in_RSI;
  byte *in_RDI;

  recovered_10008fc0(in_RDI,in_RSI,in_EDX);
  return;
}


#undef DAT_1000ca70
#define DAT_1000ca70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x158U)))
#undef DAT_1000e0c0
#define DAT_1000e0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a8U)))
#define local_40 (*(byte * *)(pf_stack_frame + 16))
#define local_31 (*(char *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009110
 */

undefined8 recovered_10009110(long param_1,byte *param_2,undefined2 *param_3)

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
      recovered_100094b0((uint)*pbVar8,(long *)&local_40);
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
          goto LAB_100092e0;
        }
        iVar16 = iVar16 + 1;
      } while (pbVar18 < local_40 + uVar7);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  return 0;
LAB_100092e0:
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
LAB_1000948b:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar6;
      return CONCAT71((int7)((ulong)param_3 >> 8),1);
    }
    local_40 = pbVar8 + (ulong)(uVar6 & 0x7fffffff) *
                        *(long *)(&DAT_1000ca70 + (ulong)(uVar10 & 0xf) * 8);
    pbVar17 = recovered_100094b0((uint)uVar10,(long *)&local_40);
    if (pbVar17 == (byte *)0x0) goto LAB_1000948b;
    cVar23 = local_31;
    if ((param_2 != (byte *)0x0) && (pbVar17 != param_2)) {
      lVar4 = *(long *)(pbVar17 + 8);
      pbVar13 = param_2;
      do {
        lVar5 = *(long *)(pbVar13 + 8);
        if ((lVar4 == 0) || (lVar5 == 0)) {
          if (lVar5 == lVar4) goto LAB_1000948b;
        }
        else {
          lVar15 = 0;
          do {
            cVar23 = *(char *)(lVar5 + lVar15);
            cVar3 = *(char *)(lVar4 + lVar15);
            if ((cVar23 == '\0') || (cVar3 == '\0')) {
              if (cVar23 == cVar3) goto LAB_1000948b;
              break;
            }
            lVar15 = lVar15 + 1;
          } while (cVar23 == cVar3);
        }
        if (*(undefined **)pbVar13 != &DAT_1000e0c0) goto LAB_10009468;
        pbVar13 = *(byte **)(pbVar13 + 0x10);
        cVar23 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar17) && (pbVar13 != (byte *)0x0));
    }
    if (cVar23 != '\0') goto LAB_1000948b;
  }
LAB_10009468:
  if ((uVar20 | uVar21) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar20 | uVar21);
  bVar22 = 0x3e < uVar11;
  uVar11 = uVar11 + 1;
  if (bVar22) {
    return 0;
  }
  goto LAB_100092e0;
}

#undef DAT_1000ca70
#undef DAT_1000e0c0
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094b0
 */

byte * recovered_100094b0(uint param_1,long *param_2)

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
    goto LAB_100095d9;
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
    goto LAB_100095d5;
  case 3:
    pbVar3 = (byte *)(ulong)*puVar1;
    goto LAB_10009529;
  default:
    goto switchD_100094e1_caseD_5;
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
LAB_100095d5:
    puVar6 = (uint *)((long)puVar1 + 2);
LAB_100095d9:
    *param_2 = (long)puVar6;
    break;
  case 0xb:
    pbVar3 = (byte *)((ulong)CONCAT14(-1 < (char)*(byte *)((long)puVar1 + 3),*puVar1) - 0x100000000)
    ;
LAB_10009529:
    puVar6 = puVar1 + 1;
    goto LAB_100095d9;
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
switchD_100094e1_caseD_5:
  return pbVar3;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280814
#define DAT_00280814 (*(uint8_t *)(0x280814U))
#undef DAT_1000e378
#define DAT_1000e378 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a60U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280814
#define _DAT_00280814 (*(uint *)(0x280814U))
#undef str_1000cc09
#define str_1000cc09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_10009640(char *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x17 < _DAT_00280808 && ((code *)(ulong)_DAT_00280814 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280814)();
  }
  plVar7 = recovered_10008090(0x70);
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  *(undefined4 *)(plVar7 + 6) = 0;
  *(undefined2 *)((long)plVar7 + 0x34) = 0;
  *(undefined1 *)((long)plVar7 + 0x36) = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  pcVar12 = str_1000cc09;
  if (param_1 != (char *)0x0) {
    pcVar12 = param_1;
  }
  uVar10 = 0xffffffffffffffff;
  do {
    lVar6 = uVar10 + 1;
    uVar10 = uVar10 + 1;
  } while (pcVar12[lVar6] != '\0');
  recovered_1000bd70(plVar7,(long)pcVar12,uVar10);
  uVar10 = (ulong)param_2;
  if ((int)param_2 < 2) {
    uVar10 = 1;
  }
  uVar16 = (uint)uVar10;
  *(uint *)(plVar7 + 3) = uVar16;
  uVar15 = 1;
  if (1 < (int)param_3) {
    uVar15 = (ulong)param_3;
  }
  uVar14 = (uint)uVar15;
  *(uint *)((long)plVar7 + 0x1c) = uVar14;
  *(uint *)(plVar7 + 4) = uVar16;
  *(uint *)((long)plVar7 + 0x24) = uVar14;
  *(uint *)((long)plVar7 + 0x2c) = uVar16 >> 1;
  *(uint *)(plVar7 + 6) = uVar14 >> 1;
  uVar10 = uVar15 * (uintptr_t)uVar10 * 4;
  plVar7[0xc] = 0;
  if (uVar10 <= (ulong)plVar7[0xd]) {
    uVar15 = 0;
    goto LAB_10009882;
  }
  pvVar8 = recovered_10008090(uVar10);
  pvVar2 = (void *)plVar7[0xb];
  uVar15 = plVar7[0xc];
  if (uVar15 == 0) goto LAB_1000986f;
  uVar9 = 0;
  if ((3 < uVar15) && (0x1f < (ulong)((long)pvVar8 - (long)pvVar2))) {
    if (uVar15 < 0x20) {
      uVar11 = 0;
    }
    else {
      uVar9 = uVar15 & 0xffffffffffffffe0;
      uVar11 = 0;
      do {
        uVar3 = ((undefined8 *)((long)pvVar2 + uVar11))[1];
        puVar1 = (undefined8 *)((long)pvVar2 + uVar11 + 0x10);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        *(undefined8 *)((long)pvVar8 + uVar11) = *(undefined8 *)((long)pvVar2 + uVar11);
        ((undefined8 *)((long)pvVar8 + uVar11))[1] = uVar3;
        puVar1 = (undefined8 *)((long)pvVar8 + uVar11 + 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        uVar11 = uVar11 + 0x20;
      } while (uVar9 != uVar11);
      if (uVar15 == uVar9) goto LAB_1000986f;
      uVar11 = uVar9;
      if ((uVar15 & 0x1c) == 0) goto LAB_10009805;
    }
    uVar9 = uVar15 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)((long)pvVar8 + uVar11) = *(undefined4 *)((long)pvVar2 + uVar11);
      uVar11 = uVar11 + 4;
    } while (uVar9 != uVar11);
    if (uVar15 == uVar9) goto LAB_1000986f;
  }
LAB_10009805:
  uVar13 = uVar15 & 3;
  uVar11 = uVar9;
  if (uVar13 != 0) {
    do {
      *(undefined1 *)((long)pvVar8 + uVar11) = *(undefined1 *)((long)pvVar2 + uVar11);
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (uVar9 - uVar15 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)((long)pvVar8 + uVar11) = *(undefined1 *)((long)pvVar2 + uVar11);
      *(undefined1 *)((long)pvVar8 + uVar11 + 1) = *(undefined1 *)((long)pvVar2 + uVar11 + 1);
      *(undefined1 *)((long)pvVar8 + uVar11 + 2) = *(undefined1 *)((long)pvVar2 + uVar11 + 2);
      *(undefined1 *)((long)pvVar8 + uVar11 + 3) = *(undefined1 *)((long)pvVar2 + uVar11 + 3);
      uVar11 = uVar11 + 4;
    } while (uVar15 != uVar11);
  }
LAB_1000986f:
  recovered_100080f0(pvVar2);
  plVar7[0xb] = (long)pvVar8;
  plVar7[0xd] = uVar10;
  uVar15 = plVar7[0xc];
  while (uVar15 < uVar10) {
LAB_10009882:
    *(undefined1 *)(plVar7[0xb] + uVar15) = 0;
    uVar15 = plVar7[0xc] + 1;
    plVar7[0xc] = uVar15;
  }
  DAT_1000e378 = plVar7;
  recovered_100098c0((long)plVar7);
  recovered_10009ca0((long)plVar7);
  return plVar7;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280814
#undef DAT_1000e378
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280814
#undef str_1000cc09

#undef DAT_1000cae0
#define DAT_1000cae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8U)))
#define local_34 (*(undefined1 *)(pf_stack_frame + 28))
#define local_33 (*(undefined1 *)(pf_stack_frame + 29))
#define local_32 (*(undefined1 *)(pf_stack_frame + 30))
#define local_31 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100098c0(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  uint128 auVar26;
  uint128 auVar27;
  uint128 auVar28;
  float fVar29;

  if (param_1 == 0) {
    return;
  }
  if ((long)*(int *)(param_1 + 0x18) < 1) {
    return;
  }
  if ((long)*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  uVar24 = (long)*(int *)(param_1 + 0x18) * (long)*(int *)(param_1 + 0x1c) * 4;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (uVar24 <= *(ulong *)(param_1 + 0x68)) {
    uVar11 = 0;
    goto LAB_10009a53;
  }
  pvVar10 = recovered_10008090(uVar24);
  pvVar2 = *(void **)(param_1 + 0x58);
  uVar11 = *(ulong *)(param_1 + 0x60);
  if (uVar11 != 0) {
    uVar13 = 0;
    if ((3 < uVar11) && (0x1f < (ulong)((long)pvVar10 - (long)pvVar2))) {
      if (uVar11 < 0x20) {
        uVar15 = 0;
      }
      else {
        uVar13 = uVar11 & 0xffffffffffffffe0;
        uVar15 = 0;
        do {
          uVar4 = ((undefined8 *)((long)pvVar2 + uVar15))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar15 + 0x10);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          *(undefined8 *)((long)pvVar10 + uVar15) = *(undefined8 *)((long)pvVar2 + uVar15);
          ((undefined8 *)((long)pvVar10 + uVar15))[1] = uVar4;
          puVar1 = (undefined8 *)((long)pvVar10 + uVar15 + 0x10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          uVar15 = uVar15 + 0x20;
        } while (uVar13 != uVar15);
        if (uVar11 == uVar13) goto LAB_10009a1f;
        uVar15 = uVar13;
        if ((uVar11 & 0x1c) == 0) goto LAB_100099b5;
      }
      uVar13 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)((long)pvVar10 + uVar15) = *(undefined4 *)((long)pvVar2 + uVar15);
        uVar15 = uVar15 + 4;
      } while (uVar13 != uVar15);
      if (uVar11 == uVar13) goto LAB_10009a1f;
    }
LAB_100099b5:
    uVar18 = uVar11 & 3;
    uVar15 = uVar13;
    if (uVar18 != 0) {
      do {
        *(undefined1 *)((long)pvVar10 + uVar15) = *(undefined1 *)((long)pvVar2 + uVar15);
        uVar15 = uVar15 + 1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    if (uVar13 - uVar11 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)pvVar10 + uVar15) = *(undefined1 *)((long)pvVar2 + uVar15);
        *(undefined1 *)((long)pvVar10 + uVar15 + 1) = *(undefined1 *)((long)pvVar2 + uVar15 + 1);
        *(undefined1 *)((long)pvVar10 + uVar15 + 2) = *(undefined1 *)((long)pvVar2 + uVar15 + 2);
        *(undefined1 *)((long)pvVar10 + uVar15 + 3) = *(undefined1 *)((long)pvVar2 + uVar15 + 3);
        uVar15 = uVar15 + 4;
      } while (uVar11 != uVar15);
    }
  }
LAB_10009a1f:
  recovered_100080f0(pvVar2);
  *(void **)(param_1 + 0x58) = pvVar10;
  *(ulong *)(param_1 + 0x68) = uVar24;
  uVar11 = *(ulong *)(param_1 + 0x60);
LAB_10009a53:
  while (uVar11 < uVar24) {
    *(undefined1 *)(*(long *)(param_1 + 0x58) + uVar11) = 0;
    uVar11 = *(long *)(param_1 + 0x60) + 1;
    *(ulong *)(param_1 + 0x60) = uVar11;
  }
  if (((*(long *)(param_1 + 0x40) == 0) || ((int)*(uint *)(param_1 + 0x50) < 1)) ||
     (*(int *)(param_1 + 0x54) < 1)) {
    bVar7 = 0;
    iVar14 = 0;
    iVar12 = 0;
    iVar17 = 0;
    iVar19 = 0;
  }
  else {
    PF_PART4(auVar28, 4) = 0;
    PF_PART4(auVar28, 0) = *(uint *)(param_1 + 0x50);
    PF_PART4(auVar28, 8) = *(int *)(param_1 + 0x54);
    PF_PART4(auVar28, 12) = 0;
    (*(float *)((uint8_t *)&(auVar26)+0)) = (float)*(uint *)(param_1+0x50);
    (*(float *)((uint8_t *)&(auVar26)+4)) = (float)*(uint *)(param_1+0x54);
    PF_PART8(auVar26, 8) = 0;
    iVar12 = (int)*(undefined8 *)(param_1 + 0x18);
    iVar14 = (int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    (*(float *)((uint8_t *)&(auVar27)+0)) = (float)iVar12;
    (*(float *)((uint8_t *)&(auVar27)+4)) = (float)iVar14;
    PF_PART8(auVar27, 8) = 0;
    auVar28 = divps(auVar27,auVar26);
    fVar29 = (*(float *)((uint8_t *)&(auVar28)+4));
    if ((*(float *)((uint8_t *)&(auVar28)+0)) <= (*(float *)((uint8_t *)&(auVar28)+4))) {
      fVar29 = (*(float *)((uint8_t *)&(auVar28)+0));
    }
    iVar19 = (int)(fVar29 * (*(float *)((uint8_t *)&(auVar26)+0)));
    if (iVar19 < 2) {
      iVar19 = 1;
    }
    iVar17 = 1;
    if (1 < (int)((*(float *)((uint8_t *)&(auVar26)+4)) * fVar29)) {
      iVar17 = (int)((*(float *)((uint8_t *)&(auVar26)+4)) * fVar29);
    }
    iVar12 = (iVar12 - iVar19) / 2;
    iVar14 = (iVar14 - iVar17) / 2;
    bVar7 = 1;
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  if (0 < iVar8) {
    uVar24 = (ulong)*(uint *)(param_1 + 0x18);
    lVar23 = 0;
    do {
      if (0 < (int)uVar24) {
        lVar25 = 0;
        do {
          local_34 = *(undefined1 *)(param_1 + 0x29);
          local_33 = *(undefined1 *)(param_1 + 0x2a);
          local_32 = *(undefined1 *)(param_1 + 0x2b);
          if ((((bool)(iVar12 <= lVar25 & bVar7)) && (lVar25 < iVar19 + iVar12)) &&
             ((iVar14 <= lVar23 && (lVar23 < iVar17 + iVar14)))) {
            iVar8 = *(int *)(param_1 + 0x50);
            iVar9 = (((int)lVar25 - iVar12) * iVar8) / iVar19;
            iVar22 = iVar8 + -1;
            if (iVar9 <= iVar8 + -1) {
              iVar22 = iVar9;
            }
            iVar20 = 0;
            if (-1 < iVar9) {
              iVar20 = iVar22;
            }
            iVar9 = (*(int *)(param_1 + 0x54) * ((int)lVar23 - iVar14)) / iVar17;
            iVar22 = *(int *)(param_1 + 0x54) + -1;
            if (iVar9 <= iVar22) {
              iVar22 = iVar9;
            }
            iVar21 = 0;
            if (-1 < iVar9) {
              iVar21 = iVar22;
            }
            lVar16 = (long)iVar20 + (long)iVar21 * (long)iVar8;
            lVar3 = *(long *)(param_1 + 0x38);
            local_34 = *(undefined1 *)(lVar3 + lVar16 * 4);
            local_33 = *(undefined1 *)(lVar3 + 1 + lVar16 * 4);
            local_32 = *(undefined1 *)(lVar3 + 2 + lVar16 * 4);
          }
          local_31 = 0xff;
          recovered_10001d60((void *)(((int)uVar24 * lVar23 + lVar25) * 4 +
                                     *(long *)(param_1 + 0x58)),&local_34,4);
          lVar25 = lVar25 + 1;
          uVar24 = (ulong)*(int *)(param_1 + 0x18);
        } while (lVar25 < (long)uVar24);
        iVar8 = *(int *)(param_1 + 0x1c);
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < iVar8);
  }
  return;
}

#undef DAT_1000cae0
#undef local_34
#undef local_33
#undef local_32
#undef local_31

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028087c
#define DAT_0028087c (*(uint8_t *)(0x28087cU))
#undef DAT_1000e380
#define DAT_1000e380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a68U)))
#undef DAT_1000e388
#define DAT_1000e388 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a70U)))
#undef DAT_1000e398
#define DAT_1000e398 (*(int *)(((uintptr_t)pf_module_state + 0x1a80U)))
#undef DAT_1000e39c
#define DAT_1000e39c (*(uint *)(((uintptr_t)pf_module_state + 0x1a84U)))
#undef DAT_1000e3a0
#define DAT_1000e3a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a88U)))
#undef DAT_1000e3a4
#define DAT_1000e3a4 (*(uint *)(((uintptr_t)pf_module_state + 0x1a8cU)))
#undef DAT_1000e3a8
#define DAT_1000e3a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a90U)))
#undef DAT_1000e3ac
#define DAT_1000e3ac (*(uint *)(((uintptr_t)pf_module_state + 0x1a94U)))
#undef DAT_1000e3b0
#define DAT_1000e3b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a98U)))
#undef UNK_1000e38c
#define UNK_1000e38c (*(uint *)(((uintptr_t)pf_module_state + 0x1a74U)))
#undef UNK_1000e390
#define UNK_1000e390 (*(uint *)(((uintptr_t)pf_module_state + 0x1a78U)))
#undef UNK_1000e394
#define UNK_1000e394 (*(uint *)(((uintptr_t)pf_module_state + 0x1a7cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028087c
#define _DAT_0028087c (*(uint *)(0x28087cU))
#undef _DAT_1000e388
#define _DAT_1000e388 (*(int *)(((uintptr_t)pf_module_state + 0x1a70U)))
#undef uRam000000001000e38c
#define uRam000000001000e38c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a74U)))
#undef uRam000000001000e390
#define uRam000000001000e390 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a78U)))
#undef uRam000000001000e394
#define uRam000000001000e394 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a7cU)))
#define local_40 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009ca0(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  int iVar32;
  ulong uVar33;
  bool bVar34;
  uint128 auVar35;

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
  recovered_10002a60(&DAT_1000e380,0,0x34);
  if (_DAT_00280800 != 0x50414d57) {
    return;
  }
  if (_DAT_00280804 == 0) {
    return;
  }
  if (_DAT_00280808 < 0xc) {
    return;
  }
  if (_DAT_00280808 < 0x80) {
    return;
  }
  if ((code *)(ulong)_DAT_0028087c == (code *)0x0) {
    return;
  }
  iVar5 = (*(code *)(ulong)_DAT_0028087c)(&DAT_1000e380);
  uVar24 = DAT_1000e3ac;
  uVar19 = DAT_1000e3a4;
  uVar31 = DAT_1000e39c;
  uVar4 = uRam000000001000e394;
  uVar3 = uRam000000001000e390;
  lVar2 = DAT_1000e380;
  if (iVar5 == 0) {
    return;
  }
  PF_PART4(auVar35, 0) = -(uint)(_DAT_1000e388 == 0);
  PF_PART4(auVar35, 4) = -(uint)(uRam000000001000e38c == 0);
  PF_PART4(auVar35, 8) = -(uint)(uRam000000001000e390 == 0);
  PF_PART4(auVar35, 12) = -(uint)(SUB164((uint128)0x0,0xc) == uRam000000001000e394);
  iVar5 = movmskps(iVar5,auVar35);
  if (iVar5 != 0) {
    return;
  }
  if (DAT_1000e398 != 0x20) {
    return;
  }
  if (DAT_1000e39c == 0) {
    return;
  }
  if (DAT_1000e3a4 == 0) {
    return;
  }
  if (DAT_1000e380 == 0) {
    return;
  }
  if (DAT_1000e3ac == 0) {
    return;
  }
  if (uRam000000001000e38c >> 2 < uRam000000001000e390) {
    return;
  }
  bVar13 = (byte)DAT_1000e39c;
  uVar28 = ~(-1 << (bVar13 & 0x1f));
  if (0x1f < DAT_1000e39c) {
    uVar28 = 0xffffffff;
  }
  bVar14 = (byte)DAT_1000e3a0;
  bVar15 = (byte)DAT_1000e3a4;
  uVar26 = ~(-1 << (bVar15 & 0x1f));
  if (0x1f < DAT_1000e3a4) {
    uVar26 = 0xffffffff;
  }
  bVar16 = (byte)DAT_1000e3a8;
  bVar17 = (byte)DAT_1000e3ac;
  uVar25 = ~(-1 << (bVar17 & 0x1f));
  if (0x1f < DAT_1000e3ac) {
    uVar25 = 0xffffffff;
  }
  bVar18 = (byte)DAT_1000e3b0;
  uVar20 = (*(byte *)(param_1 + 0x2a) * uVar26 + 0x7f) / 0xff << (bVar16 & 0x1f) |
           (*(byte *)(param_1 + 0x29) * uVar28 + 0x7f) / 0xff << (bVar14 & 0x1f) |
           (*(byte *)(param_1 + 0x2b) * uVar25 + 0x7f) / 0xff << (bVar18 & 0x1f);
  uVar1 = (ulong)uRam000000001000e38c;
  uVar10 = (ulong)uRam000000001000e390;
  uVar12 = (ulong)uRam000000001000e394;
  uVar23 = uRam000000001000e390 & 7;
  uVar27 = uRam000000001000e390 & 0xfffffff8;
  uVar29 = 0;
  uVar6 = uRam000000001000e390;
  do {
    bVar34 = uVar6 != 0;
    uVar6 = 0;
    if (bVar34) {
      lVar30 = uVar29 * uVar1 + lVar2;
      if (uVar10 - 1 < 7) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          *(uint *)(lVar30 + (uintptr_t)uVar11 * 4) = uVar20;
          *(uint *)(lVar30 + 4 + (uintptr_t)uVar11 * 4) = uVar20;
          *(uint *)(lVar30 + 8 + (uintptr_t)uVar11 * 4) = uVar20;
          *(uint *)(lVar30 + 0xc + (uintptr_t)uVar11 * 4) = uVar20;
          *(uint *)(lVar30 + 0x10 + (uintptr_t)uVar11 * 4) = uVar20;
          *(uint *)(lVar30 + 0x14 + (uintptr_t)uVar11 * 4) = uVar20;
          *(uint *)(lVar30 + 0x18 + (uintptr_t)uVar11 * 4) = uVar20;
          *(uint *)(lVar30 + 0x1c + (uintptr_t)uVar11 * 4) = uVar20;
          uVar11 = uVar11 + 8;
        } while (uVar27 != uVar11);
      }
      uVar6 = uVar3;
      if ((ulong)uVar23 != 0) {
        uVar33 = 0;
        do {
          *(uint *)(lVar30 + (uintptr_t)uVar11 * 4 + uVar33 * 4) = uVar20;
          uVar33 = uVar33 + 1;
        } while (uVar23 != uVar33);
      }
    }
    uVar29 = uVar29 + 1;
  } while (uVar29 != uVar12);
  uVar29 = (ulong)*(uint *)(param_1 + 0x18);
  uVar11 = (ulong)*(uint *)(param_1 + 0x1c);
  uVar10 = uVar10 * uVar11;
  if (uVar10 >> 0x20 == 0) {
    uVar6 = (uint)((uVar10 & 0xffffffff) / uVar29);
  }
  else {
    uVar6 = (uint)(uVar10 / uVar29);
  }
  uVar20 = 1;
  if (1 < uVar6) {
    uVar20 = uVar6;
  }
  if (uVar4 < uVar20) {
    uVar29 = uVar29 * uVar12;
    if (uVar29 >> 0x20 == 0) {
      uVar6 = (uint)((uVar29 & 0xffffffff) / uVar11);
    }
    else {
      uVar6 = (uint)(uVar29 / uVar11);
    }
    uVar23 = 1;
    if (1 < uVar6) {
      uVar23 = uVar6;
    }
    uVar27 = uVar3 - uVar23 >> 1;
    uVar6 = 0;
    uVar20 = uVar4;
  }
  else {
    uVar6 = uVar4 - uVar20 >> 1;
    uVar27 = 0;
    uVar23 = uVar3;
  }
  uVar29 = (ulong)uVar20;
  uVar12 = (ulong)uVar23;
  uVar10 = 0;
  do {
    if (uVar12 != 0) {
      uVar11 = *(uint *)(param_1 + 0x1c) * uVar10;
      if (uVar11 >> 0x20 == 0) {
        uVar20 = (uint)((uVar11 & 0xffffffff) / uVar29);
      }
      else {
        uVar20 = (uint)(uVar11 / uVar29);
      }
      lVar30 = *(long *)(param_1 + 0x58);
      uVar11 = 0;
      do {
        uVar33 = uVar11 * *(uint *)(param_1 + 0x18);
        if (uVar33 >> 0x20 == 0) {
          uVar23 = (uint)((uVar33 & 0xffffffff) / uVar12);
        }
        else {
          uVar23 = (uint)(uVar33 / uVar12);
        }
        lVar21 = (ulong)uVar23 + (long)(int)*(uint *)(param_1 + 0x18) * (ulong)uVar20;
        *(uint *)((uVar6 + (int)uVar10) * uVar1 + lVar2 + (ulong)uVar27 * 4 + (uintptr_t)uVar11 * 4) =
             (*(byte *)(lVar30 + 2 + lVar21 * 4) * uVar25 + 0x7f) / 0xff << (bVar18 & 0x1f) |
             (*(byte *)(lVar30 + 1 + lVar21 * 4) * uVar26 + 0x7f) / 0xff << (bVar16 & 0x1f) |
             (*(byte *)(lVar30 + lVar21 * 4) * uVar28 + 0x7f) / 0xff << (bVar14 & 0x1f);
        uVar11 = uVar11 + 1;
      } while (uVar12 != uVar11);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < uVar29);
  uVar28 = *(uint *)(param_1 + 0x20);
  if ((long)(int)uVar28 < 1) {
    return;
  }
  uVar26 = *(uint *)(param_1 + 0x24);
  if (uVar12 == 0 || (long)(int)uVar26 < 1) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar7 = uVar28 - 1;
  if (iVar5 <= (int)(uVar28 - 1)) {
    iVar7 = iVar5;
  }
  iVar22 = 0;
  if (-1 < iVar5) {
    iVar22 = iVar7;
  }
  uVar12 = (long)iVar22 * uVar12;
  if (uVar12 >> 0x20 == 0) {
    iVar5 = (int)((uVar12 & 0xffffffff) / (ulong)uVar28);
  }
  else {
    iVar5 = (int)(uVar12 / (ulong)(long)(int)uVar28);
  }
  iVar7 = *(int *)(param_1 + 0x30);
  iVar22 = uVar26 - 1;
  if (iVar7 <= (int)(uVar26 - 1)) {
    iVar22 = iVar7;
  }
  iVar32 = 0;
  if (-1 < iVar7) {
    iVar32 = iVar22;
  }
  uVar29 = uVar29 * (long)iVar32;
  if (uVar29 >> 0x20 == 0) {
    iVar7 = (int)((uVar29 & 0xffffffff) / (ulong)uVar26);
  }
  else {
    iVar7 = (int)(uVar29 / (ulong)(long)(int)uVar26);
  }
  if (*(char *)(param_1 + 0x34) == '\x01') {
    uVar28 = 0x1010100;
    if (uVar31 < 0x20) {
      uVar28 = ((0xff << (bVar13 & 0x1f)) - 0x80U) / 0xff;
    }
    uVar31 = 0;
    uVar26 = 0;
    if (uVar19 < 0x20) {
      uVar26 = ((0x3c << (bVar15 & 0x1f)) + 0x43U) / 0xff;
    }
    if (uVar24 < 0x20) {
      uVar31 = ((0x3c << (bVar17 & 0x1f)) + 0x43U) / 0xff;
    }
    local_40 = uVar26 << (bVar16 & 0x1f) | uVar31 << (bVar18 & 0x1f) | uVar28 << (bVar14 & 0x1f);
  }
  else {
    if (*(char *)(param_1 + 0x35) == '\x01') {
      local_40 = 0;
      if (uVar31 < 0x20) {
        local_40 = ((0x3c << (bVar13 & 0x1f)) + 0x43U) / 0xff;
      }
      local_40 = local_40 << (bVar14 & 0x1f);
      uVar31 = 0x1010100;
      if (uVar19 < 0x20) {
        uVar31 = ((0xff << (bVar15 & 0x1f)) - 0x80U) / 0xff;
      }
      uVar31 = uVar31 << (bVar16 & 0x1f);
      uVar28 = 0;
      if (uVar24 < 0x20) {
        uVar28 = ((0x3c << (bVar17 & 0x1f)) + 0x43U) / 0xff;
      }
      uVar28 = uVar28 << (bVar18 & 0x1f);
    }
    else {
      local_40 = 0x1010100;
      if (uVar24 < 0x20) {
        local_40 = ((0xff << (bVar17 & 0x1f)) - 0x80U) / 0xff;
      }
      local_40 = local_40 << (bVar18 & 0x1f);
      if (*(char *)(param_1 + 0x36) == '\0') {
        uVar28 = 0x1010100;
        uVar24 = 0x1010100;
        if (uVar31 < 0x20) {
          uVar24 = ((0xff << (bVar13 & 0x1f)) - 0x80U) / 0xff;
        }
        if (uVar19 < 0x20) {
          uVar28 = ((0xff << (bVar15 & 0x1f)) - 0x80U) / 0xff;
        }
        local_40 = uVar28 << (bVar16 & 0x1f) | uVar24 << (bVar14 & 0x1f) | local_40;
        goto LAB_1000a3c8;
      }
      uVar28 = 0;
      if (uVar31 < 0x20) {
        uVar28 = ((0x50 << (bVar13 & 0x1f)) + 0x2fU) / 0xff;
      }
      uVar28 = uVar28 << (bVar14 & 0x1f);
      uVar31 = 0x1010100;
      if (uVar19 < 0x20) {
        uVar31 = ((0x82 << (bVar15 & 0x1f)) - 3U) / 0xff;
      }
      uVar31 = uVar31 << (bVar16 & 0x1f);
    }
    local_40 = uVar31 | uVar28 | local_40;
  }
LAB_1000a3c8:
  iVar22 = -7;
  do {
    uVar31 = uVar6 + iVar7 + iVar22;
    iVar32 = -7;
    do {
      iVar8 = recovered_10001c60(iVar32);
      iVar9 = recovered_10001c60(iVar22);
      if ((((iVar9 + iVar8 < 8) && (uVar19 = uVar27 + iVar5 + iVar32, -1 < (int)uVar19)) &&
          (-1 < (int)uVar31)) && ((uVar19 < uVar3 && (uVar31 < uVar4)))) {
        uVar24 = local_40;
        if (5 < iVar9 + iVar8) {
          uVar24 = 0;
        }
        *(uint *)(uVar31 * uVar1 + lVar2 + (ulong)uVar19 * 4) = uVar24;
      }
      iVar32 = iVar32 + 1;
    } while (iVar32 != 8);
    iVar22 = iVar22 + 1;
  } while (iVar22 != 8);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028087c
#undef DAT_1000e380
#undef DAT_1000e388
#undef DAT_1000e398
#undef DAT_1000e39c
#undef DAT_1000e3a0
#undef DAT_1000e3a4
#undef DAT_1000e3a8
#undef DAT_1000e3ac
#undef DAT_1000e3b0
#undef UNK_1000e38c
#undef UNK_1000e390
#undef UNK_1000e394
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028087c
#undef _DAT_1000e388
#undef uRam000000001000e38c
#undef uRam000000001000e390
#undef uRam000000001000e394
#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a470
 */

void recovered_1000a470(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280818
#define DAT_00280818 (*(uint8_t *)(0x280818U))
#undef DAT_1000e378
#define DAT_1000e378 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a60U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280818
#define _DAT_00280818 (*(uint *)(0x280818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a480
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a480(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined8 *)0x0) {
    if (DAT_1000e378 == param_1) {
      DAT_1000e378 = (undefined8 *)0x0;
    }
    param_1[0xc] = 0;
    recovered_100080f0((void *)param_1[0xb]);
    param_1[8] = 0;
    recovered_100080f0((void *)param_1[7]);
    recovered_100080f0((void *)*param_1);
    recovered_100080f0(param_1);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x1b < _DAT_00280808 && ((code *)(ulong)_DAT_00280818 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000a51d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)_DAT_00280818)();
      return;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280818
#undef DAT_1000e378
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280818

#undef DAT_1000cb1b
#define DAT_1000cb1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
#undef DAT_1000cc68
#define DAT_1000cc68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x350U)))
#undef LAB_1000a62c
#define LAB_1000a62c (*(uint8_t *)(0x1000a62cU))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a530
 */

void * recovered_1000a530(undefined8 *param_1)

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
  local_88 = recovered_10008040;
  local_80 = &DAT_1000cc68;
  local_70 = &LAB_1000a62c;
  recovered_100086e0(&local_a8);
  if (param_1 == (undefined8 *)0x0) {
    lVar3 = 1;
  }
  else {
    puVar2 = &DAT_1000cb1b;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_1;
    }
    local_a0 = 0xffffffff;
    recovered_1000bd70((long *)&local_48,(long)puVar2,param_1[1]);
    lVar3 = lStack_40 + 1;
  }
  local_a0 = 1;
  local_50 = recovered_100080c0(lVar3);
  puVar2 = &DAT_1000cb1b;
  if (local_48 != (undefined1 *)0x0) {
    puVar2 = local_48;
  }
  local_a0 = 2;
  recovered_10001d60(local_50,puVar2,lStack_40 + 1);
  pvVar1 = local_50;
  recovered_100080f0(local_48);
  recovered_10008700(&local_a8);
  return pvVar1;
}

#undef DAT_1000cb1b
#undef DAT_1000cc68
#undef LAB_1000a62c
#undef local_70
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a680
 */

void recovered_1000a680(long param_1,undefined4 *param_2,undefined4 *param_3)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6b0
 */

void recovered_1000a6b0(long param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 == 0) {
    return;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  iVar2 = 1;
  if (1 < param_3) {
    iVar2 = param_3;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = iVar2;
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x24) = iVar2;
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar4 = param_2 + -1;
  if (iVar3 <= param_2 + -1) {
    iVar4 = iVar3;
  }
  if (iVar3 < 0) {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x2c) = iVar4;
  iVar3 = iVar2 + -1;
  if (iVar1 <= iVar2 + -1) {
    iVar3 = iVar1;
  }
  if (iVar1 < 0) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x30) = iVar3;
  recovered_100098c0(param_1);
  return;
}


#undef DAT_1000cb1b
#define DAT_1000cb1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a710
 */

void recovered_1000a710(long *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;

  if (param_1 == (long *)0x0) {
    return;
  }
  puVar3 = &DAT_1000cb1b;
  if (param_2 != (undefined1 *)0x0) {
    puVar3 = param_2;
  }
  uVar2 = 0xffffffffffffffff;
  do {
    lVar1 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (puVar3[lVar1] != '\0');
  recovered_1000bd70(param_1,(long)puVar3,uVar2);
  return;
}

#undef DAT_1000cb1b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a760
 */

void recovered_1000a760(long param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined1 *puVar3;

  if ((((param_2 == (int *)0x0 || param_1 == 0) ||
       (puVar3 = *(undefined1 **)(param_2 + 2), puVar3 == (undefined1 *)0x0)) ||
      (iVar1 = *param_2, (long)iVar1 < 1)) || (iVar2 = param_2[1], (long)iVar2 < 1)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  recovered_1000c640((long *)(param_1 + 0x38),*(long *)(param_1 + 0x38),puVar3,
                     puVar3 + (long)iVar1 * (long)iVar2 * 4);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
  recovered_100098c0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7d0
 */

void recovered_1000a7d0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_1000a800();
  recovered_100098c0(param_1);
  recovered_10009ca0(param_1);
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef DAT_00280880
#define DAT_00280880 (*(uint8_t *)(0x280880U))
#undef DAT_1000caf0
#define DAT_1000caf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d8U)))
#undef DAT_1000ccf8
#define DAT_1000ccf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e0U)))
#undef DAT_1000e0f0
#define DAT_1000e0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17d8U)))
#undef DAT_1000e0f1
#define DAT_1000e0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17d9U)))
#undef DAT_1000e0f2
#define DAT_1000e0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17daU)))
#undef DAT_1000e0f3
#define DAT_1000e0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dbU)))
#undef DAT_1000e0f4
#define DAT_1000e0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dcU)))
#undef DAT_1000e0f5
#define DAT_1000e0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ddU)))
#undef DAT_1000e0f6
#define DAT_1000e0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17deU)))
#undef DAT_1000e0f7
#define DAT_1000e0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dfU)))
#undef DAT_1000e0f8
#define DAT_1000e0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e0U)))
#undef DAT_1000e0f9
#define DAT_1000e0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e1U)))
#undef DAT_1000e0fa
#define DAT_1000e0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e2U)))
#undef DAT_1000e0fb
#define DAT_1000e0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e3U)))
#undef DAT_1000e0fc
#define DAT_1000e0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e4U)))
#undef DAT_1000e0fd
#define DAT_1000e0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e5U)))
#undef DAT_1000e0fe
#define DAT_1000e0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e6U)))
#undef DAT_1000e0ff
#define DAT_1000e0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e7U)))
#undef DAT_1000e100
#define DAT_1000e100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e8U)))
#undef DAT_1000e101
#define DAT_1000e101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e9U)))
#undef DAT_1000e102
#define DAT_1000e102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eaU)))
#undef DAT_1000e103
#define DAT_1000e103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ebU)))
#undef DAT_1000e104
#define DAT_1000e104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ecU)))
#undef DAT_1000e105
#define DAT_1000e105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17edU)))
#undef DAT_1000e106
#define DAT_1000e106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eeU)))
#undef DAT_1000e107
#define DAT_1000e107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17efU)))
#undef DAT_1000e108
#define DAT_1000e108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f0U)))
#undef DAT_1000e109
#define DAT_1000e109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f1U)))
#undef DAT_1000e10a
#define DAT_1000e10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f2U)))
#undef DAT_1000e10b
#define DAT_1000e10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f3U)))
#undef DAT_1000e10c
#define DAT_1000e10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f4U)))
#undef DAT_1000e10d
#define DAT_1000e10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f5U)))
#undef DAT_1000e10e
#define DAT_1000e10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f6U)))
#undef DAT_1000e10f
#define DAT_1000e10f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f7U)))
#undef DAT_1000e110
#define DAT_1000e110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f8U)))
#undef DAT_1000e111
#define DAT_1000e111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f9U)))
#undef DAT_1000e112
#define DAT_1000e112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17faU)))
#undef DAT_1000e113
#define DAT_1000e113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fbU)))
#undef DAT_1000e114
#define DAT_1000e114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fcU)))
#undef DAT_1000e115
#define DAT_1000e115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fdU)))
#undef DAT_1000e116
#define DAT_1000e116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17feU)))
#undef DAT_1000e117
#define DAT_1000e117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ffU)))
#undef DAT_1000e118
#define DAT_1000e118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1800U)))
#undef DAT_1000e119
#define DAT_1000e119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1801U)))
#undef DAT_1000e11a
#define DAT_1000e11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1802U)))
#undef DAT_1000e11b
#define DAT_1000e11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1803U)))
#undef DAT_1000e11c
#define DAT_1000e11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1804U)))
#undef DAT_1000e11d
#define DAT_1000e11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1805U)))
#undef DAT_1000e11e
#define DAT_1000e11e (*(char *)(((uintptr_t)pf_module_state + 0x1806U)))
#undef DAT_1000e378
#define DAT_1000e378 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a60U)))
#undef DAT_1000e3b4
#define DAT_1000e3b4 (*(int *)(((uintptr_t)pf_module_state + 0x1a9cU)))
#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e8U)))
#undef PTR_DAT_1000d0d0
#define PTR_DAT_1000d0d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7b8U)))
#undef UNK_1000caf4
#define UNK_1000caf4 (*(uint *)(((uintptr_t)pf_module_state + 0x1dcU)))
#undef UNK_1000caf8
#define UNK_1000caf8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e0U)))
#undef UNK_1000cafc
#define UNK_1000cafc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e4U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(uint *)(0x28082cU))
#undef _DAT_00280880
#define _DAT_00280880 (*(uint *)(0x280880U))
#undef _DAT_1000caf0
#define _DAT_1000caf0 (*(uint *)(((uintptr_t)pf_module_state + 0x1d8U)))
#undef uRam000000001000caf4
#define uRam000000001000caf4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a800
 */

/* WARNING: Removing unreachable block (ram,0x1000ad77) */
/* WARNING: Removing unreachable block (ram,0x1000ad73) */
/* WARNING: Removing unreachable block (ram,0x1000ad7a) */
/* WARNING: Removing unreachable block (ram,0x1000ad7c) */
/* WARNING: Removing unreachable block (ram,0x1000ad7f) */
/* WARNING: Removing unreachable block (ram,0x1000adae) */
/* WARNING: Removing unreachable block (ram,0x1000ad0d) */
/* WARNING: Removing unreachable block (ram,0x1000ad09) */
/* WARNING: Removing unreachable block (ram,0x1000ad10) */
/* WARNING: Removing unreachable block (ram,0x1000ad12) */
/* WARNING: Removing unreachable block (ram,0x1000ad15) */
/* WARNING: Removing unreachable block (ram,0x1000ad5a) */
/* WARNING: Removing unreachable block (ram,0x1000acef) */
/* WARNING: Removing unreachable block (ram,0x1000acfe) */
/* WARNING: Removing unreachable block (ram,0x1000ad4a) */
/* WARNING: Removing unreachable block (ram,0x1000ad4e) */
/* WARNING: Removing unreachable block (ram,0x1000ad51) */
/* WARNING: Removing unreachable block (ram,0x1000ad55) */
/* WARNING: Removing unreachable block (ram,0x1000ad58) */
/* WARNING: Removing unreachable block (ram,0x1000ad34) */
/* WARNING: Removing unreachable block (ram,0x1000ad43) */
/* WARNING: Removing unreachable block (ram,0x1000ad2a) */
/* WARNING: Removing unreachable block (ram,0x1000ad60) */
/* WARNING: Removing unreachable block (ram,0x1000ad68) */
/* WARNING: Removing unreachable block (ram,0x1000ad9e) */
/* WARNING: Removing unreachable block (ram,0x1000ada2) */
/* WARNING: Removing unreachable block (ram,0x1000ada5) */
/* WARNING: Removing unreachable block (ram,0x1000ada9) */
/* WARNING: Removing unreachable block (ram,0x1000adac) */
/* WARNING: Removing unreachable block (ram,0x1000ad94) */
/* WARNING: Removing unreachable block (ram,0x1000adb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a800(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;

  if (DAT_1000e378 == 0) {
    DAT_1000e0f0 = 0;
    DAT_1000e0f1 = 0;
    DAT_1000e0f2 = 0;
    DAT_1000e0f3 = 0;
    DAT_1000e0f4 = 0;
    DAT_1000e0f5 = 0;
    DAT_1000e0f6 = 0;
    DAT_1000e0f7 = 0;
    DAT_1000e0f8 = 0;
    DAT_1000e0f9 = 0;
    DAT_1000e0fa = 0;
    DAT_1000e0fb = 0;
    DAT_1000e0fc = 0;
    DAT_1000e0fd = 0;
    DAT_1000e0fe = 0;
    DAT_1000e0ff = 0;
    DAT_1000e100 = 0;
    DAT_1000e101 = 0;
    DAT_1000e102 = 0;
    DAT_1000e103 = 0;
    DAT_1000e104 = 0;
    DAT_1000e105 = 0;
    DAT_1000e106 = 0;
    DAT_1000e107 = 0;
    DAT_1000e108 = 0;
    DAT_1000e109 = 0;
    DAT_1000e10a = 0;
    DAT_1000e10b = 0;
    DAT_1000e10c = 0;
    DAT_1000e10d = 0;
    DAT_1000e10e = 0;
    DAT_1000e10f = 0;
    DAT_1000e110 = 0;
    DAT_1000e111 = 0;
    DAT_1000e112 = 0;
    DAT_1000e113 = 0;
    DAT_1000e114 = 0;
    DAT_1000e115 = 0;
    DAT_1000e116 = 0;
    DAT_1000e117 = 0;
    DAT_1000e118 = 0;
    DAT_1000e119 = 0;
    DAT_1000e11a = 0;
    DAT_1000e11b = 0;
    DAT_1000e11c = 0;
    DAT_1000e11d = 0;
    DAT_1000e11e = '\0';
  }
  else {
    lVar3 = DAT_1000e378;
    if (_DAT_00280800 == 0x50414d57) {
      if (_DAT_00280804 != 0) {
        while ((0xb < _DAT_00280808 && (0x2f < _DAT_00280808))) {
          if ((code *)(ulong)_DAT_0028082c == (code *)0x0) break;
          uVar2 = (*(code *)(ulong)_DAT_0028082c)();
          lVar3 = DAT_1000e378;
          uVar9 = (uint)uVar2;
          if (uVar9 == 0) break;
          cVar1 = (char)uVar2;
          uVar11 = (uint)((ulong)uVar2 >> 8);
          if (cVar1 == '\0') {
            if (DAT_1000e378 == 0) goto LAB_1000a900;
            switch((uintptr_t)(uVar11 & 0xff)) {
            case 1:
            case 0x48:
switchD_1000aa3c_caseD_48:
              DAT_1000e0f1 = 1;
              break;
            case 2:
            case 0x50:
switchD_1000aa3c_caseD_50:
              DAT_1000e0f2 = 1;
              break;
            case 3:
            case 0x4d:
switchD_1000aa3c_caseD_4d:
              DAT_1000e0f4 = 1;
              break;
            case 4:
            case 0x4b:
switchD_1000aa3c_caseD_4b:
              DAT_1000e0f3 = 1;
              break;
            default:
              break;
            case 0xe:
switchD_1000aa3c_caseD_e:
              DAT_1000e11b = 1;
              break;
            case 0x17:
switchD_1000a8fa_caseD_17:
              *(undefined1 *)(lVar3 + 0x28) = 1;
              break;
            case 0x1c:
switchD_1000aa3c_caseD_1c:
              DAT_1000e0f0 = 1;
              break;
            case 0x53:
switchD_1000aa3c_caseD_53:
              DAT_1000e11c = 1;
            }
          }
          else if (DAT_1000e378 == 0) {
LAB_1000a900:
            lVar3 = 0;
          }
          else {
            if (DAT_1000e3b4 == 2) {
              DAT_1000e3b4 = 0;
              switch((uintptr_t)(uVar9 & 0xff)) {
              case 0x41:
                DAT_1000e0f1 = 1;
                break;
              case 0x42:
                DAT_1000e0f2 = 1;
                break;
              case 0x43:
                DAT_1000e0f4 = 1;
                break;
              case 0x44:
                DAT_1000e0f3 = 1;
              }
            }
            else if (DAT_1000e3b4 == 1) {
              DAT_1000e3b4 = (uint)(cVar1 == '[') * 2;
            }
            else if (cVar1 == '\x1b') {
              DAT_1000e3b4 = 1;
            }
            else if ((byte)(cVar1 - 0x20U) < 0x5f) {
              DAT_1000e11e = cVar1;
              if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                **(undefined1 **)(&DAT_1000ccf8 + (long)cVar1 * 8) = 1;
              }
              else {
                uVar10 = uVar9 - 0x41;
                if ((byte)uVar10 < 0x1a) {
                  if (0x19 < (byte)uVar10) goto switchD_1000a9e1_caseD_5;
                  ppuVar4 = &PTR_DAT_1000d000;
                }
                else {
                  uVar10 = uVar9 - 0x30;
                  if (9 < (byte)uVar10) goto LAB_1000a9ce;
                  ppuVar4 = &PTR_DAT_1000d0d0;
                }
                *ppuVar4[uVar10 & 0xff] = 1;
              }
            }
            else {
LAB_1000a9ce:
              switch((uintptr_t)(uVar9 & 0xff)) {
              case 3:
              case 4:
                *(undefined1 *)(DAT_1000e378 + 0x28) = 1;
                break;
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
switchD_1000a9e1_caseD_8:
                DAT_1000e11b = 1;
                break;
              case 10:
              case 0xd:
                DAT_1000e0f0 = 1;
                break;
              case 0x20:
                DAT_1000e11d = 1;
                break;
              case 0x2d:
                DAT_1000e119 = 1;
                break;
              case 0x2e:
                DAT_1000e11a = 1;
                break;
              default:
                if ((uVar9 & 0xff) == 0x7f) goto switchD_1000a9e1_caseD_8;
              }
            }
switchD_1000a9e1_caseD_5:
            if ((uVar9 & 0xffff) != 0x11b) {
              uVar11 = uVar11 & 0xff;
              switch((uintptr_t)(uVar11)) {
              case 0xe:
                goto switchD_1000aa3c_caseD_e;
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
                goto switchD_1000aa3c_caseD_1c;
              case 0x48:
                goto switchD_1000aa3c_caseD_48;
              case 0x4b:
                goto switchD_1000aa3c_caseD_4b;
              case 0x4d:
                goto switchD_1000aa3c_caseD_4d;
              case 0x50:
                goto switchD_1000aa3c_caseD_50;
              case 0x53:
                goto switchD_1000aa3c_caseD_53;
              default:
                if (uVar11 == 1) goto switchD_1000a8fa_caseD_17;
              }
            }
          }
          if ((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) break;
        }
      }
      if (lVar3 == 0) {
        return;
      }
    }
    uVar9 = -(uint)((int)_DAT_1000caf0 < (int)*(uint *)(lVar3 + 0x20));
    uVar11 = -(uint)((int)uRam000000001000caf4 < (int)*(uint *)(lVar3 + 0x24));
    iVar5 = (~uVar9 & _DAT_1000caf0 | *(uint *)(lVar3 + 0x20) & uVar9) - 1;
    iVar7 = (~uVar11 & uRam000000001000caf4 | *(uint *)(lVar3 + 0x24) & uVar11) - 1;
    uVar14 = *(ulong *)(lVar3 + 0x2c);
    uVar13 = CONCAT44(-(uint)(iVar7 < (int)(uVar14 >> 0x20)),-(uint)(iVar5 < (int)uVar14));
    *(ulong *)(lVar3 + 0x2c) =
         ~CONCAT44(-(uint)((long)uVar14 < 0),-(uint)((int)uVar14 < 0)) &
         (~uVar13 & uVar14 | CONCAT44(iVar7,iVar5) & uVar13);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x83 < _DAT_00280808 && ((code *)(ulong)_DAT_00280880 != (code *)0x0)))) {
      iVar5 = (*(code *)(ulong)_DAT_00280880)();
      uVar11 = uRam000000001000caf4;
      uVar9 = _DAT_1000caf0;
      if (iVar5 != 0) {
        iVar5 = *(int *)(lVar3 + 0x2c);
        *(undefined1 *)(lVar3 + 0x34) = 0;
        *(undefined1 *)(lVar3 + 0x35) = 0;
        *(undefined1 *)(lVar3 + 0x36) = 0;
        uVar10 = -(uint)((int)uVar9 < (int)*(uint *)(lVar3 + 0x20));
        uVar12 = -(uint)((int)uVar11 < (int)*(uint *)(lVar3 + 0x24));
        iVar6 = (~uVar10 & uVar9 | *(uint *)(lVar3 + 0x20) & uVar10) - 1;
        iVar8 = (~uVar12 & uVar11 | *(uint *)(lVar3 + 0x24) & uVar12) - 1;
        iVar7 = *(int *)(lVar3 + 0x30);
        uVar14 = CONCAT44(-(uint)(iVar8 < iVar7),-(uint)(iVar6 < iVar5));
        *(ulong *)(lVar3 + 0x2c) =
             ~CONCAT44(-(uint)(iVar7 < 0),-(uint)(iVar5 < 0)) &
             (~uVar14 & CONCAT44(iVar7,iVar5) | CONCAT44(iVar8,iVar6) & uVar14);
      }
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028082c
#undef DAT_00280880
#undef DAT_1000caf0
#undef DAT_1000ccf8
#undef DAT_1000e0f0
#undef DAT_1000e0f1
#undef DAT_1000e0f2
#undef DAT_1000e0f3
#undef DAT_1000e0f4
#undef DAT_1000e0f5
#undef DAT_1000e0f6
#undef DAT_1000e0f7
#undef DAT_1000e0f8
#undef DAT_1000e0f9
#undef DAT_1000e0fa
#undef DAT_1000e0fb
#undef DAT_1000e0fc
#undef DAT_1000e0fd
#undef DAT_1000e0fe
#undef DAT_1000e0ff
#undef DAT_1000e100
#undef DAT_1000e101
#undef DAT_1000e102
#undef DAT_1000e103
#undef DAT_1000e104
#undef DAT_1000e105
#undef DAT_1000e106
#undef DAT_1000e107
#undef DAT_1000e108
#undef DAT_1000e109
#undef DAT_1000e10a
#undef DAT_1000e10b
#undef DAT_1000e10c
#undef DAT_1000e10d
#undef DAT_1000e10e
#undef DAT_1000e10f
#undef DAT_1000e110
#undef DAT_1000e111
#undef DAT_1000e112
#undef DAT_1000e113
#undef DAT_1000e114
#undef DAT_1000e115
#undef DAT_1000e116
#undef DAT_1000e117
#undef DAT_1000e118
#undef DAT_1000e119
#undef DAT_1000e11a
#undef DAT_1000e11b
#undef DAT_1000e11c
#undef DAT_1000e11d
#undef DAT_1000e11e
#undef DAT_1000e378
#undef DAT_1000e3b4
#undef PTR_DAT_1000d000
#undef PTR_DAT_1000d0d0
#undef UNK_1000caf4
#undef UNK_1000caf8
#undef UNK_1000cafc
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028082c
#undef _DAT_00280880
#undef _DAT_1000caf0
#undef uRam000000001000caf4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b160
 */

undefined1 recovered_1000b160(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 1;
  }
  return *(undefined1 *)(param_1 + 0x28);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b180
 */

void recovered_1000b180(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x29) = param_2;
    *(undefined1 *)(param_1 + 0x2a) = param_3;
    *(undefined1 *)(param_1 + 0x2b) = param_4;
    if (*(long *)(param_1 + 0x40) == 0) {
      recovered_100098c0(param_1);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1b0
 */

int * recovered_1000b1b0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;
  void *destination;
  ulong count;

  if (param_1 == 0) {
    return (int *)0x0;
  }
  recovered_100098c0(param_1);
  if (*(long *)(param_1 + 0x60) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = recovered_10008090(0x20);
    iVar1 = *(int *)(param_1 + 0x18);
    *piVar3 = iVar1;
    iVar2 = *(int *)(param_1 + 0x1c);
    piVar3[1] = iVar2;
    count = (long)iVar1 * (long)iVar2 * 4;
    destination = recovered_100080c0(count);
    *(void **)(piVar3 + 2) = destination;
    recovered_10001d60(destination,*(void **)(param_1 + 0x58),count);
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b230
 */

void recovered_1000b230(long param_1,undefined4 *param_2,undefined4 *param_3)

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
 * Address: 0x1000b270
 */

undefined1 recovered_1000b270(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 3 && param_1 != 0) {
    return *(undefined1 *)(param_1 + 0x34 + (ulong)param_2);
  }
  return 0;
}


#undef DAT_1000e0f0
#define DAT_1000e0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17d8U)))
#undef DAT_1000e0f1
#define DAT_1000e0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17d9U)))
#undef DAT_1000e0f2
#define DAT_1000e0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17daU)))
#undef DAT_1000e0f3
#define DAT_1000e0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dbU)))
#undef DAT_1000e0f4
#define DAT_1000e0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dcU)))
#undef DAT_1000e0f5
#define DAT_1000e0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ddU)))
#undef DAT_1000e0f6
#define DAT_1000e0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17deU)))
#undef DAT_1000e0f7
#define DAT_1000e0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dfU)))
#undef DAT_1000e0f8
#define DAT_1000e0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e0U)))
#undef DAT_1000e0f9
#define DAT_1000e0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e1U)))
#undef DAT_1000e0fa
#define DAT_1000e0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e2U)))
#undef DAT_1000e0fb
#define DAT_1000e0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e3U)))
#undef DAT_1000e0fc
#define DAT_1000e0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e4U)))
#undef DAT_1000e0fd
#define DAT_1000e0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e5U)))
#undef DAT_1000e0fe
#define DAT_1000e0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e6U)))
#undef DAT_1000e0ff
#define DAT_1000e0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e7U)))
#undef DAT_1000e100
#define DAT_1000e100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e8U)))
#undef DAT_1000e101
#define DAT_1000e101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e9U)))
#undef DAT_1000e102
#define DAT_1000e102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eaU)))
#undef DAT_1000e103
#define DAT_1000e103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ebU)))
#undef DAT_1000e104
#define DAT_1000e104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ecU)))
#undef DAT_1000e105
#define DAT_1000e105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17edU)))
#undef DAT_1000e106
#define DAT_1000e106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eeU)))
#undef DAT_1000e107
#define DAT_1000e107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17efU)))
#undef DAT_1000e108
#define DAT_1000e108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f0U)))
#undef DAT_1000e109
#define DAT_1000e109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f1U)))
#undef DAT_1000e10a
#define DAT_1000e10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f2U)))
#undef DAT_1000e10b
#define DAT_1000e10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f3U)))
#undef DAT_1000e10c
#define DAT_1000e10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f4U)))
#undef DAT_1000e10d
#define DAT_1000e10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f5U)))
#undef DAT_1000e10e
#define DAT_1000e10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f6U)))
#undef DAT_1000e10f
#define DAT_1000e10f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f7U)))
#undef DAT_1000e110
#define DAT_1000e110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f8U)))
#undef DAT_1000e111
#define DAT_1000e111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f9U)))
#undef DAT_1000e112
#define DAT_1000e112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17faU)))
#undef DAT_1000e113
#define DAT_1000e113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fbU)))
#undef DAT_1000e114
#define DAT_1000e114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fcU)))
#undef DAT_1000e115
#define DAT_1000e115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fdU)))
#undef DAT_1000e116
#define DAT_1000e116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17feU)))
#undef DAT_1000e117
#define DAT_1000e117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ffU)))
#undef DAT_1000e118
#define DAT_1000e118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1800U)))
#undef DAT_1000e119
#define DAT_1000e119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1801U)))
#undef DAT_1000e11a
#define DAT_1000e11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1802U)))
#undef DAT_1000e11b
#define DAT_1000e11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1803U)))
#undef DAT_1000e11c
#define DAT_1000e11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1804U)))
#undef DAT_1000e11d
#define DAT_1000e11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1805U)))
#undef DAT_1000e11e
#define DAT_1000e11e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1806U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b2a0
 */

void recovered_1000b2a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000e0f0 = 0;
  DAT_1000e0f1 = 0;
  DAT_1000e0f2 = 0;
  DAT_1000e0f3 = 0;
  DAT_1000e0f4 = 0;
  DAT_1000e0f5 = 0;
  DAT_1000e0f6 = 0;
  DAT_1000e0f7 = 0;
  DAT_1000e0f8 = 0;
  DAT_1000e0f9 = 0;
  DAT_1000e0fa = 0;
  DAT_1000e0fb = 0;
  DAT_1000e0fc = 0;
  DAT_1000e0fd = 0;
  DAT_1000e0fe = 0;
  DAT_1000e0ff = 0;
  DAT_1000e100 = 0;
  DAT_1000e101 = 0;
  DAT_1000e102 = 0;
  DAT_1000e103 = 0;
  DAT_1000e104 = 0;
  DAT_1000e105 = 0;
  DAT_1000e106 = 0;
  DAT_1000e107 = 0;
  DAT_1000e108 = 0;
  DAT_1000e109 = 0;
  DAT_1000e10a = 0;
  DAT_1000e10b = 0;
  DAT_1000e10c = 0;
  DAT_1000e10d = 0;
  DAT_1000e10e = 0;
  DAT_1000e10f = 0;
  DAT_1000e110 = 0;
  DAT_1000e111 = 0;
  DAT_1000e112 = 0;
  DAT_1000e113 = 0;
  DAT_1000e114 = 0;
  DAT_1000e115 = 0;
  DAT_1000e116 = 0;
  DAT_1000e117 = 0;
  DAT_1000e118 = 0;
  DAT_1000e119 = 0;
  DAT_1000e11a = 0;
  DAT_1000e11b = 0;
  DAT_1000e11c = 0;
  DAT_1000e11d = 0;
  DAT_1000e11e = 0;
  return;
}

#undef DAT_1000e0f0
#undef DAT_1000e0f1
#undef DAT_1000e0f2
#undef DAT_1000e0f3
#undef DAT_1000e0f4
#undef DAT_1000e0f5
#undef DAT_1000e0f6
#undef DAT_1000e0f7
#undef DAT_1000e0f8
#undef DAT_1000e0f9
#undef DAT_1000e0fa
#undef DAT_1000e0fb
#undef DAT_1000e0fc
#undef DAT_1000e0fd
#undef DAT_1000e0fe
#undef DAT_1000e0ff
#undef DAT_1000e100
#undef DAT_1000e101
#undef DAT_1000e102
#undef DAT_1000e103
#undef DAT_1000e104
#undef DAT_1000e105
#undef DAT_1000e106
#undef DAT_1000e107
#undef DAT_1000e108
#undef DAT_1000e109
#undef DAT_1000e10a
#undef DAT_1000e10b
#undef DAT_1000e10c
#undef DAT_1000e10d
#undef DAT_1000e10e
#undef DAT_1000e10f
#undef DAT_1000e110
#undef DAT_1000e111
#undef DAT_1000e112
#undef DAT_1000e113
#undef DAT_1000e114
#undef DAT_1000e115
#undef DAT_1000e116
#undef DAT_1000e117
#undef DAT_1000e118
#undef DAT_1000e119
#undef DAT_1000e11a
#undef DAT_1000e11b
#undef DAT_1000e11c
#undef DAT_1000e11d
#undef DAT_1000e11e

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000b3f0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000b400(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_1000b410(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000b420(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_1000b430(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


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
#undef DAT_1000cb19
#define DAT_1000cb19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x201U)))
#undef DAT_1000cb1b
#define DAT_1000cb1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
#undef DAT_1000cc14
#define DAT_1000cc14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fcU)))
#undef DAT_1000cc70
#define DAT_1000cc70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x358U)))
#undef LAB_1000bcb3
#define LAB_1000bcb3 (*(uint8_t *)(0x1000bcb3U))
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
#define pvStack_128 (*(void * *)(pf_stack_frame + 56))
#define pvStack_b8 (*(void * *)(pf_stack_frame + 168))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 192))
#define pvStack_78 (*(void * *)(pf_stack_frame + 232))
#define pvStack_50 (*(void * *)(pf_stack_frame + 272))
#define local_140 (*(undefined4 * *)(pf_stack_frame + 32))
#define local_138 (*(undefined4 * *)(pf_stack_frame + 40))
#define local_130 (*(char * *)(pf_stack_frame + 48))
#define local_120 (*(undefined8 *)(pf_stack_frame + 64))
#define local_118 (*(undefined8 *)(pf_stack_frame + 72))
#define local_110 (*(undefined4 *)(pf_stack_frame + 80))
#define local_f8 (*(code * *)(pf_stack_frame + 104))
#define local_f0 (*(undefined * *)(pf_stack_frame + 112))
#define local_e8 (*(undefined1 * *)(pf_stack_frame + 120))
#define local_e0 (*(undefined1 * *)(pf_stack_frame + 128))
#define local_d8 (*(undefined1 * *)(pf_stack_frame + 136))
#define local_c0 (*(char * *)(pf_stack_frame + 160))
#define local_b0 (*(void * *)(pf_stack_frame + 176))
#define local_a8 (*(void * *)(pf_stack_frame + 184))
#define local_98 (*(undefined8 *)(pf_stack_frame + 200))
#define local_88 (*(char * *)(pf_stack_frame + 216))
#define local_80 (*(void * *)(pf_stack_frame + 224))
#define local_70 (*(undefined8 *)(pf_stack_frame + 240))
#define local_68 (*(long *)(pf_stack_frame + 248))
#define local_60 (*(undefined8 *)(pf_stack_frame + 256))
#define local_58 (*(char * *)(pf_stack_frame + 264))
#define local_48 (*(void * *)(pf_stack_frame + 280))
#define local_40 (*(void * *)(pf_stack_frame + 288))
#define local_34 (*(undefined4 *)(pf_stack_frame + 300))
#define auStack_148 (*(undefined1 (*)[328])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_1000b440(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  char *pcVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;

  local_e8 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 352) + -8);
  local_d8 = auStack_148;
  local_f8 = recovered_10008040;
  local_f0 = &DAT_1000cc70;
  local_e0 = &LAB_1000bcb3;
  local_68 = param_1;
  recovered_100086e0(&local_118);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (local_68 == 0) {
    pvVar10 = (void *)0x0;
    goto LAB_1000bc92;
  }
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_130 = (char *)0x0;
  pvStack_128 = (void *)0x0;
  local_120 = 0;
  uVar6 = 0xffffffffffffffff;
  do {
    pcVar11 = (char *)(local_68 + 1 + uVar6);
    uVar6 = uVar6 + 1;
  } while (*pcVar11 != '\0');
  local_110 = 0xffffffff;
  local_138 = param_2;
  recovered_1000bd70((long *)&local_130,local_68,uVar6);
  local_80 = (void *)0x0;
  pvStack_78 = (void *)0x0;
  local_70 = 0;
  if (pvStack_128 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    pcVar11 = &DAT_1000cb1b;
    if (local_130 != (char *)0x0) {
      pcVar11 = local_130;
    }
    local_34 = (uint)CONCAT71((int7)((ulong)local_130 >> 8),*pcVar11 == '/');
  }
  pvVar10 = (void *)0x0;
  local_88 = &DAT_1000cb1b;
  local_140 = param_3;
  do {
    uVar6 = (long)pvStack_128 - (long)pvVar10;
    if (pvStack_128 < pvVar10 || uVar6 == 0) break;
    pcVar11 = local_130;
    if (local_130 == (char *)0x0) {
      pcVar11 = &DAT_1000cb1b;
    }
    pvVar7 = pvVar10;
    do {
      if (pcVar11[(long)pvVar7] == '/') {
        if (pvVar7 != (void *)0xffffffffffffffff) {
          local_60 = (void *)((ulong)PF_PART4(local_60, 4) << 0x20);
          local_40 = pvVar7;
          goto LAB_1000b61d;
        }
        break;
      }
      pvVar7 = (void *)((long)pvVar7 + 1);
    } while (pvStack_128 != pvVar7);
    local_40 = (void *)0xffffffffffffffff;
    local_60 = (void *)CONCAT44(PF_PART4(local_60, 4),(int)CONCAT71((int7)((ulong)pvVar7 >> 8),1));
    pvVar7 = pvStack_128;
LAB_1000b61d:
    uVar13 = (long)pvVar7 - (long)pvVar10;
    uVar8 = uVar13;
    if (uVar6 < uVar13) {
      uVar8 = uVar6;
    }
    if (uVar13 == 0xffffffffffffffff) {
      uVar8 = uVar6;
    }
    local_58 = (char *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = (void *)0x0;
    local_110 = 1;
    recovered_1000bd70((long *)&local_58,(long)(pcVar11 + (long)pvVar10),uVar8);
    pvVar10 = local_40;
    if (pvStack_50 != (void *)0x0) {
      pcVar11 = local_58;
      if (local_58 == (char *)0x0) {
        pcVar11 = &DAT_1000cb1b;
      }
      if (pvStack_50 == (void *)0x1) {
        if (*pcVar11 == '.') goto LAB_1000b59b;
      }
      else if (((pvStack_50 == (void *)0x2) && (*pcVar11 == '.')) && (pcVar11[1] == '.')) {
        if (pvStack_78 != (void *)0x0) {
          pcVar11 = *(char **)((long)local_80 + (long)pvStack_78 * 0x18 + -0x18);
          pcVar5 = pcVar11;
          if (pcVar11 == (char *)0x0) {
            pcVar5 = &DAT_1000cb1b;
          }
          if (((*(long *)((long)local_80 + (long)pvStack_78 * 0x18 + -0x10) != 2) ||
              (*pcVar5 != '.')) || (pcVar5[1] != '.')) {
            recovered_100080f0(pcVar11);
            pvStack_78 = (void *)((long)pvStack_78 - 1);
            goto LAB_1000b59b;
          }
        }
        if ((char)local_34 != '\0') goto LAB_1000b59b;
      }
      local_110 = 2;
      recovered_1000c080((long *)&local_80,&local_58);
      pvVar10 = local_40;
    }
LAB_1000b59b:
    pvVar10 = (void *)((long)pvVar10 + 1);
    recovered_100080f0(local_58);
  } while ((char)local_60 == '\0');
  puVar12 = &DAT_1000cb1b;
  if ((char)local_34 != '\0') {
    puVar12 = &DAT_1000cc14;
  }
  local_58 = (char *)0x0;
  pvStack_50 = (void *)0x0;
  local_48 = (void *)0x0;
  uVar6 = 0xffffffffffffffff;
  do {
    lVar14 = uVar6 + 1;
    uVar6 = uVar6 + 1;
  } while (puVar12[lVar14] != '\0');
  local_110 = 3;
  recovered_1000bd70((long *)&local_58,(long)puVar12,uVar6);
  if (pvStack_78 != (void *)0x0) {
    pvVar10 = (void *)0x0;
    do {
      local_40 = pvVar10;
      if (pvVar10 != (void *)0x0 || (local_34 & 1) != 0) {
        if (pvStack_50 == local_48) {
          pvVar7 = (void *)((long)pvStack_50 * 2);
          if (pvStack_50 == (void *)0x0) {
            pvVar7 = (void *)0x10;
          }
          if (pvVar7 <= pvStack_50) goto LAB_1000b800;
          local_110 = 4;
          local_60 = pvVar7;
          pcVar11 = recovered_10008090((ulong)pvVar7 | 1);
          pvVar10 = local_40;
          *pcVar11 = '\0';
          if (pvStack_50 != (void *)0x0) {
            if (pvStack_50 < (void *)0x4) {
              pvVar7 = (void *)0x0;
            }
            else {
              pvVar7 = (void *)0x0;
              if (0x1f < (ulong)((long)pcVar11 - (long)local_58)) {
                if (pvStack_50 < (void *)0x20) {
                  pvVar9 = (void *)0x0;
                }
                else {
                  pvVar7 = (void *)((ulong)pvStack_50 & 0xffffffffffffffe0);
                  pvVar9 = (void *)0x0;
                  do {
                    uVar1 = *(undefined8 *)(local_58 + (long)pvVar9 + 8);
                    uVar2 = *(undefined8 *)(local_58 + 0x10 + (long)pvVar9);
                    uVar3 = *(undefined8 *)(local_58 + 0x10 + (long)pvVar9 + 8);
                    *(undefined8 *)(pcVar11 + (long)pvVar9) =
                         *(undefined8 *)(local_58 + (long)pvVar9);
                    *(undefined8 *)(pcVar11 + (long)pvVar9 + 8) = uVar1;
                    *(undefined8 *)(pcVar11 + 0x10 + (long)pvVar9) = uVar2;
                    *(undefined8 *)(pcVar11 + 0x10 + (long)pvVar9 + 8) = uVar3;
                    pvVar9 = (void *)((long)pvVar9 + 0x20);
                  } while (pvVar7 != pvVar9);
                  if (pvStack_50 == pvVar7) goto LAB_1000b8fb;
                  pvVar9 = pvVar7;
                  if (((ulong)pvStack_50 & 0x1c) == 0) goto LAB_1000b894;
                }
                pvVar7 = (void *)((ulong)pvStack_50 & 0xfffffffffffffffc);
                do {
                  *(undefined4 *)(pcVar11 + (long)pvVar9) = *(undefined4 *)(local_58 + (long)pvVar9)
                  ;
                  pvVar9 = (void *)((long)pvVar9 + 4);
                } while (pvVar7 != pvVar9);
                if (pvStack_50 == pvVar7) goto LAB_1000b8fb;
              }
            }
LAB_1000b894:
            uVar6 = (ulong)pvStack_50 & 3;
            pvVar9 = pvVar7;
            if (uVar6 != 0) {
              do {
                pcVar11[(long)pvVar9] = local_58[(long)pvVar9];
                pvVar9 = (void *)((long)pvVar9 + 1);
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            if ((ulong)((long)pvVar7 - (long)pvStack_50) < 0xfffffffffffffffd) {
              do {
                pcVar11[(long)pvVar9] = local_58[(long)pvVar9];
                (pcVar11 + 1)[(long)pvVar9] = (local_58 + 1)[(long)pvVar9];
                (pcVar11 + 2)[(long)pvVar9] = (local_58 + 2)[(long)pvVar9];
                (pcVar11 + 3)[(long)pvVar9] = (local_58 + 3)[(long)pvVar9];
                pvVar9 = (void *)((long)pvVar9 + 4);
              } while (pvStack_50 != pvVar9);
            }
          }
LAB_1000b8fb:
          pcVar11[(long)pvStack_50] = '\0';
          recovered_100080f0(local_58);
          local_48 = local_60;
LAB_1000b908:
          local_58 = pcVar11;
        }
        else {
LAB_1000b800:
          if (local_58 == (char *)0x0) {
            local_110 = 5;
            pcVar11 = recovered_10008090(1);
            *pcVar11 = '\0';
            local_48 = (void *)0x0;
            pvVar10 = local_40;
            goto LAB_1000b908;
          }
        }
        local_58[(long)pvStack_50] = '/';
        local_58[(long)pvStack_50 + 1] = '\0';
        pvStack_50 = (void *)((long)pvStack_50 + 1);
      }
      puVar12 = *(undefined1 **)((long)local_80 + (long)(uintptr_t)pvVar10 * 0x18);
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &DAT_1000cb1b;
      }
      local_110 = 6;
      recovered_1000c1a0((long *)&local_58,(long)puVar12,
                         *(ulong *)((long)local_80 + (long)(uintptr_t)pvVar10 * 0x18 + 8));
      pvVar10 = (void *)((long)local_40 + 1);
    } while (pvVar10 < pvStack_78);
  }
  if (pvStack_50 == (void *)0x0) {
    puVar12 = &DAT_1000cb19;
    if ((char)local_34 != '\0') {
      puVar12 = &DAT_1000cc14;
    }
    local_c0 = (char *)0x0;
    pvStack_b8 = (void *)0x0;
    local_b0 = (void *)0x0;
    uVar6 = 0xffffffffffffffff;
    do {
      lVar14 = uVar6 + 1;
      uVar6 = uVar6 + 1;
    } while (puVar12[lVar14] != '\0');
    local_110 = 7;
    recovered_1000bd70((long *)&local_c0,(long)puVar12,uVar6);
  }
  else {
    local_c0 = local_58;
    pvStack_b8 = pvStack_50;
    local_b0 = local_48;
    local_58 = (char *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = (void *)0x0;
  }
  recovered_100080f0(local_58);
  if (pvStack_78 != (void *)0x0) {
    lVar14 = (long)pvStack_78 * 0x18;
    pvVar10 = pvStack_78;
    do {
      lVar14 = lVar14 + -0x18;
      recovered_100080f0(*(void **)((long)local_80 + lVar14));
      pvVar10 = (void *)((long)pvVar10 - 1);
    } while (pvVar10 != (void *)0x0);
  }
  pvStack_78 = (void *)0x0;
  recovered_100080f0(local_80);
  recovered_100080f0(local_130);
  pcVar11 = local_c0;
  if (local_c0 == (char *)0x0) {
    pcVar11 = &DAT_1000cb1b;
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x5b < _DAT_00280808 && ((code *)(ulong)_DAT_00280858 != (code *)0x0)))))) {
    local_110 = 8;
    iVar4 = (*(code *)(ulong)_DAT_00280858)(pcVar11,&local_a8);
    if (iVar4 == 0) goto LAB_1000bad2;
LAB_1000bb99:
    pvVar10 = (void *)0x0;
    if (local_a8 != (void *)0x0) {
      if ((int)uStack_a0 != 0) {
        if (PF_PART4(uStack_a0, 4) != 0) {
          if ((int)local_98 != 0) {
            local_40 = local_a8;
            local_110 = 10;
            local_60 = recovered_100080c0(uStack_a0 & 0xffffffff);
            local_110 = 0xb;
            recovered_10001d60(local_60,local_40,uStack_a0 & 0xffffffff);
            if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
               ((0xb < _DAT_00280808 &&
                ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
              local_110 = 0xc;
              (*(code *)(ulong)_DAT_00280850)(local_40);
            }
            if (local_138 != (undefined4 *)0x0) {
              *local_138 = PF_PART4(uStack_a0, 4);
            }
            pvVar10 = local_60;
            if (local_140 != (undefined4 *)0x0) {
              *local_140 = (int)local_98;
            }
          }
        }
      }
    }
  }
  else {
LAB_1000bad2:
    pvVar10 = (void *)0xffffffffffffffff;
    do {
      pcVar11 = (char *)(local_68 + 1 + (long)pvVar10);
      pvVar10 = (void *)((long)pvVar10 + 1);
    } while (*pcVar11 != '\0');
    if (local_c0 != (char *)0x0) {
      local_88 = local_c0;
    }
    if (pvStack_b8 == pvVar10) {
      pvVar10 = (void *)0x0;
      if (pvStack_b8 != (void *)0x0) {
        pvVar7 = (void *)0x0;
        do {
          if (local_88[(long)pvVar7] != *(char *)(local_68 + (long)pvVar7)) goto LAB_1000bb2b;
          pvVar7 = (void *)((long)pvVar7 + 1);
        } while (pvStack_b8 != pvVar7);
      }
    }
    else {
LAB_1000bb2b:
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x5b < _DAT_00280808 && ((code *)(ulong)_DAT_00280858 != (code *)0x0)))) {
        local_110 = 9;
        iVar4 = (*(code *)(ulong)_DAT_00280858)(local_68,&local_a8);
        if (iVar4 != 0) goto LAB_1000bb99;
      }
      pvVar10 = (void *)0x0;
    }
  }
  recovered_100080f0(local_c0);
LAB_1000bc92:
  recovered_10008700(&local_118);
  return pvVar10;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280858
#undef DAT_1000cb19
#undef DAT_1000cb1b
#undef DAT_1000cc14
#undef DAT_1000cc70
#undef LAB_1000bcb3
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850
#undef _DAT_00280858
#undef pvStack_128
#undef pvStack_b8
#undef uStack_a0
#undef pvStack_78
#undef pvStack_50
#undef local_140
#undef local_138
#undef local_130
#undef local_120
#undef local_118
#undef local_110
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_c0
#undef local_b0
#undef local_a8
#undef local_98
#undef local_88
#undef local_80
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_34
#undef auStack_148

#define lStack_40 (*(long *)(pf_stack_frame + 32))
#define local_48 (*(void * *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd70
 */

void recovered_1000bd70(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
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
        local_48 = (void *)0x0;
        lStack_40 = 0;
        local_38 = 0;
        recovered_1000bd70((long *)&local_48,(long)(puVar8 + uVar11),uVar12);
        pvVar2 = (void *)*param_1;
        *param_1 = (long)local_48;
        lVar3 = param_1[1];
        lVar4 = param_1[2];
        param_1[1] = lStack_40;
        param_1[2] = local_38;
        local_48 = pvVar2;
        lStack_40 = lVar3;
        local_38 = lVar4;
        recovered_100080f0(pvVar2);
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
      puVar8 = recovered_10008090(1);
      *puVar8 = 0;
      *param_1 = (long)puVar8;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar13 <= (ulong)param_1[2]) goto LAB_1000bf96;
  puVar8 = recovered_10008090(uVar13 + 1);
  *puVar8 = 0;
  pvVar2 = (void *)*param_1;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar12 = 0;
    if ((3 < uVar11) && (0x1f < (ulong)((long)puVar8 - (long)pvVar2))) {
      if (uVar11 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar5 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          *(undefined8 *)(puVar8 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          *(undefined8 *)((long)(puVar8 + uVar9) + 8) = uVar5;
          *(undefined8 *)(puVar8 + uVar9 + 0x10) = uVar6;
          *(undefined8 *)((long)(puVar8 + uVar9 + 0x10) + 8) = uVar7;
          uVar9 = uVar9 + 0x20;
        } while (uVar12 != uVar9);
        if (uVar11 == uVar12) goto LAB_1000bf7f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_1000bf15;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_1000bf7f;
    }
LAB_1000bf15:
    uVar10 = uVar11 & 3;
    uVar9 = uVar12;
    if (uVar10 != 0) {
      do {
        puVar8[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar12 - uVar11 < 0xfffffffffffffffd) {
      do {
        puVar8[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        puVar8[uVar9 + 1] = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        puVar8[uVar9 + 2] = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        puVar8[uVar9 + 3] = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar11 != uVar9);
    }
  }
LAB_1000bf7f:
  puVar8[uVar11] = 0;
  recovered_100080f0(pvVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_1000bf96:
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
#undef local_48
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c020
 */

void recovered_1000c020(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x18;
    do {
      lVar2 = lVar2 + -0x18;
      recovered_100080f0(*(void **)(*param_1 + lVar2));
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[1] = 0;
  recovered_100080f0((void *)*param_1);
  return;
}


#undef DAT_1000cb1b
#define DAT_1000cb1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c080
 */

long recovered_1000c080(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
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
      pvVar4 = recovered_10008090(uVar8 * 0x18);
      if (param_1[1] != 0) {
        lVar7 = 8;
        uVar6 = 0;
        do {
          lVar2 = *param_1;
          *(undefined8 *)((long)pvVar4 + lVar7 + -8) = *(undefined8 *)(lVar2 + -8 + lVar7);
          uVar3 = ((undefined8 *)(lVar2 + lVar7))[1];
          *(undefined8 *)((long)pvVar4 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
          ((undefined8 *)((long)pvVar4 + lVar7))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar2 + -8 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar2 + 8 + lVar7) = 0;
          recovered_100080f0((void *)0x0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar6 < (ulong)param_1[1]);
      }
      recovered_100080f0((void *)*param_1);
      *param_1 = (long)pvVar4;
      param_1[2] = uVar8;
      uVar6 = param_1[1];
    }
  }
  lVar7 = *param_1;
  puVar1 = (undefined8 *)(lVar7 + uVar6 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + 0x10 + uVar6 * 0x18) = 0;
  puVar5 = &DAT_1000cb1b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*param_2;
  }
  recovered_1000bd70((long *)(lVar7 + uVar6 * 0x18),(long)puVar5,param_2[1]);
  lVar7 = param_1[1];
  param_1[1] = lVar7 + 1;
  return lVar7 * 0x18 + *param_1;
}

#undef DAT_1000cb1b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1a0
 */

long * recovered_1000c1a0(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;

  if (param_3 == 0 || param_2 == 0) {
    return param_1;
  }
  puVar7 = (undefined1 *)*param_1;
  if (puVar7 != (undefined1 *)0x0) {
    uVar15 = param_1[1];
    uVar13 = param_2 - (long)puVar7;
    uVar6 = 0;
LAB_1000c1e0:
    if (uVar13 != uVar6) goto code_r0x1000c1e5;
    uVar6 = uVar15 - uVar13;
    if (param_3 <= uVar15 - uVar13) {
      uVar6 = param_3;
    }
    param_3 = uVar6;
    uVar6 = uVar15 + param_3;
    puVar8 = puVar7;
    if (uVar6 <= (ulong)param_1[2]) goto LAB_1000c570;
    puVar8 = recovered_10008090(uVar6 + 1);
    *puVar8 = 0;
    pvVar2 = (void *)*param_1;
    uVar9 = param_1[1];
    if (uVar9 == 0) goto LAB_1000c54f;
    uVar11 = 0;
    if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)pvVar2) < 0x20)) goto LAB_1000c4e5;
    if (uVar9 < 0x20) {
      uVar10 = 0;
      goto LAB_1000c4ba;
    }
    uVar11 = uVar9 & 0xffffffffffffffe0;
    uVar10 = 0;
    do {
      uVar3 = ((undefined8 *)((long)pvVar2 + uVar10))[1];
      puVar1 = (undefined8 *)((long)pvVar2 + uVar10 + 0x10);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar8 + uVar10) = *(undefined8 *)((long)pvVar2 + uVar10);
      *(undefined8 *)((long)(puVar8 + uVar10) + 8) = uVar3;
      *(undefined8 *)(puVar8 + uVar10 + 0x10) = uVar4;
      *(undefined8 *)((long)(puVar8 + uVar10 + 0x10) + 8) = uVar5;
      uVar10 = uVar10 + 0x20;
    } while (uVar11 != uVar10);
    if (uVar9 != uVar11) {
      uVar10 = uVar11;
      if ((uVar9 & 0x1c) != 0) {
LAB_1000c4ba:
        uVar11 = uVar9 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar8 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar11 != uVar10);
        if (uVar9 == uVar11) goto LAB_1000c54f;
      }
LAB_1000c4e5:
      uVar12 = uVar9 & 3;
      uVar10 = uVar11;
      if (uVar12 != 0) {
        do {
          puVar8[uVar10] = *(undefined1 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar11 - uVar9 < 0xfffffffffffffffd) {
        do {
          puVar8[uVar10] = *(undefined1 *)((long)pvVar2 + uVar10);
          puVar8[uVar10 + 1] = *(undefined1 *)((long)pvVar2 + uVar10 + 1);
          puVar8[uVar10 + 2] = *(undefined1 *)((long)pvVar2 + uVar10 + 2);
          puVar8[uVar10 + 3] = *(undefined1 *)((long)pvVar2 + uVar10 + 3);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
      }
    }
LAB_1000c54f:
    puVar8[uVar9] = 0;
    recovered_100080f0(pvVar2);
    *param_1 = (long)puVar8;
    param_1[2] = uVar6;
LAB_1000c570:
    if (param_3 == 0) goto LAB_1000c45e;
    uVar6 = (ulong)((uint)param_3 & 3);
    if (param_3 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        *(undefined1 *)(uVar9 + *param_1 + uVar15) = *(undefined1 *)(uVar9 + *param_1 + uVar13);
        *(undefined1 *)(uVar9 + *param_1 + 1 + uVar15) =
             *(undefined1 *)(uVar9 + *param_1 + uVar13 + 1);
        *(undefined1 *)(uVar9 + *param_1 + 2 + uVar15) =
             *(undefined1 *)(uVar9 + *param_1 + 2 + uVar13);
        *(undefined1 *)(uVar9 + *param_1 + uVar15 + 3) =
             *(undefined1 *)(uVar9 + *param_1 + 3 + uVar13);
        uVar9 = uVar9 + 4;
      } while ((param_3 & 0xfffffffffffffffc) != uVar9);
    }
    if (uVar6 != 0) {
      lVar16 = uVar15 + uVar9;
      lVar14 = (param_2 + uVar9) - (long)puVar7;
      do {
        *(undefined1 *)(*param_1 + lVar16) = *(undefined1 *)(*param_1 + lVar14);
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    goto LAB_1000c45b;
  }
  uVar15 = param_1[1];
LAB_1000c1f3:
  uVar15 = uVar15 + param_3;
  if (uVar15 <= (ulong)param_1[2]) goto LAB_1000c3b6;
  puVar7 = recovered_10008090(uVar15 + 1);
  *puVar7 = 0;
  pvVar2 = (void *)*param_1;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar13 = 0;
    if ((3 < uVar6) && (0x1f < (ulong)((long)puVar7 - (long)pvVar2))) {
      if (uVar6 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar13 = uVar6 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined8 *)(puVar7 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          *(undefined8 *)((long)(puVar7 + uVar9) + 8) = uVar3;
          *(undefined8 *)(puVar7 + uVar9 + 0x10) = uVar4;
          *(undefined8 *)((long)(puVar7 + uVar9 + 0x10) + 8) = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar13 != uVar9);
        if (uVar6 == uVar13) goto LAB_1000c39f;
        uVar9 = uVar13;
        if ((uVar6 & 0x1c) == 0) goto LAB_1000c335;
      }
      uVar13 = uVar6 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar7 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar13 != uVar9);
      if (uVar6 == uVar13) goto LAB_1000c39f;
    }
LAB_1000c335:
    uVar11 = uVar6 & 3;
    uVar9 = uVar13;
    if (uVar11 != 0) {
      do {
        puVar7[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar13 - uVar6 < 0xfffffffffffffffd) {
      do {
        puVar7[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        puVar7[uVar9 + 1] = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        puVar7[uVar9 + 2] = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        puVar7[uVar9 + 3] = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar6 != uVar9);
    }
  }
LAB_1000c39f:
  puVar7[uVar6] = 0;
  recovered_100080f0(pvVar2);
  *param_1 = (long)puVar7;
  param_1[2] = uVar15;
LAB_1000c3b6:
  uVar15 = (ulong)((uint)param_3 & 3);
  if (param_3 - 1 < 3) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
      *(undefined1 *)(uVar6 + 1 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 1 + uVar6);
      *(undefined1 *)(uVar6 + 2 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 2 + uVar6);
      *(undefined1 *)(uVar6 + 3 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 3 + uVar6);
      uVar6 = uVar6 + 4;
    } while ((param_3 & 0xfffffffffffffffc) != uVar6);
  }
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  }
LAB_1000c45b:
  puVar8 = (undefined1 *)*param_1;
LAB_1000c45e:
  lVar14 = param_3 + param_1[1];
  param_1[1] = lVar14;
  puVar8[lVar14] = 0;
  return param_1;
code_r0x1000c1e5:
  uVar6 = uVar6 + 1;
  if (uVar15 < uVar6) goto LAB_1000c1f3;
  goto LAB_1000c1e0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c640
 */

long recovered_1000c640(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;

  lVar14 = *param_1;
  bVar18 = lVar14 == 0;
  if (bVar18) {
    uVar11 = param_1[1];
  }
  else {
    uVar11 = param_2 - lVar14;
  }
  uVar17 = (long)param_3 - (long)param_4;
  if (param_3 == param_4) goto LAB_1000c8fd;
  uVar16 = (long)param_4 - (long)param_3;
  uVar13 = param_1[1];
  uVar7 = param_1[2];
  if (uVar7 < uVar13 + uVar16) {
    uVar9 = 4;
    if (uVar7 != 0) {
      uVar9 = uVar7;
    }
    do {
      uVar7 = uVar9;
      uVar9 = uVar7 * 2;
    } while (uVar7 < uVar13 + uVar16);
    pvVar6 = recovered_10008090(uVar7);
    pvVar2 = (void *)*param_1;
    uVar13 = param_1[1];
    if (uVar13 != 0) {
      uVar9 = 0;
      if ((3 < uVar13) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
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
            *(undefined8 *)((long)pvVar6 + uVar10) = *(undefined8 *)((long)pvVar2 + uVar10);
            ((undefined8 *)((long)pvVar6 + uVar10))[1] = uVar3;
            puVar1 = (undefined8 *)((long)pvVar6 + uVar10 + 0x10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            uVar10 = uVar10 + 0x20;
          } while (uVar9 != uVar10);
          if (uVar13 == uVar9) goto LAB_1000c7bf;
          uVar10 = uVar9;
          if ((uVar13 & 0x1c) == 0) goto LAB_1000c755;
        }
        uVar9 = uVar13 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)((long)pvVar6 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
        if (uVar13 == uVar9) goto LAB_1000c7bf;
      }
LAB_1000c755:
      uVar12 = uVar13 & 3;
      uVar10 = uVar9;
      if (uVar12 != 0) {
        do {
          *(undefined1 *)((long)pvVar6 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar9 - uVar13 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)((long)pvVar6 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10);
          *(undefined1 *)((long)pvVar6 + uVar10 + 1) = *(undefined1 *)((long)pvVar2 + uVar10 + 1);
          *(undefined1 *)((long)pvVar6 + uVar10 + 2) = *(undefined1 *)((long)pvVar2 + uVar10 + 2);
          *(undefined1 *)((long)pvVar6 + uVar10 + 3) = *(undefined1 *)((long)pvVar2 + uVar10 + 3);
          uVar10 = uVar10 + 4;
        } while (uVar13 != uVar10);
      }
    }
LAB_1000c7bf:
    recovered_100080f0(pvVar2);
    *param_1 = (long)pvVar6;
    param_1[2] = uVar7;
    uVar13 = param_1[1];
  }
  if (uVar11 < uVar13) {
    uVar15 = (int)uVar13 - (int)uVar11 & 3;
    uVar9 = (ulong)uVar15;
    uVar7 = uVar13;
    if (uVar15 != 0) {
      do {
        *(undefined1 *)(uVar16 + uVar7 + *param_1 + -1) = *(undefined1 *)((uVar7 - 1) + *param_1);
        uVar7 = uVar7 - 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (uVar11 - uVar13 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((uVar16 - 1) + *param_1 + uVar7) = *(undefined1 *)(*param_1 + -1 + uVar7);
        *(undefined1 *)((uVar16 - 2) + *param_1 + uVar7) = *(undefined1 *)(*param_1 + -2 + uVar7);
        *(undefined1 *)((uVar16 - 3) + *param_1 + uVar7) = *(undefined1 *)(*param_1 + -3 + uVar7);
        *(undefined1 *)(uVar16 + uVar7 + *param_1 + -4) = *(undefined1 *)((uVar7 - 4) + *param_1);
        uVar7 = uVar7 - 4;
      } while (uVar11 < uVar7);
    }
  }
  uVar7 = uVar11;
  for (uVar13 = uVar16 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined1 *)(*param_1 + uVar7) = *param_3;
    param_3 = param_3 + 1;
    uVar7 = uVar7 + 1;
  }
  if (uVar17 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)(*param_1 + uVar7) = *param_3;
      *(undefined1 *)(*param_1 + 1 + uVar7) = param_3[1];
      *(undefined1 *)(*param_1 + 2 + uVar7) = param_3[2];
      *(undefined1 *)(*param_1 + 3 + uVar7) = param_3[3];
      param_3 = param_3 + 4;
      uVar7 = uVar7 + 4;
    } while (param_3 != param_4);
  }
  param_1[1] = param_1[1] + uVar16;
  lVar14 = *param_1;
  bVar18 = lVar14 == 0;
LAB_1000c8fd:
  lVar8 = 0;
  if (!bVar18) {
    lVar8 = lVar14 + uVar11;
  }
  return lVar8;
}

