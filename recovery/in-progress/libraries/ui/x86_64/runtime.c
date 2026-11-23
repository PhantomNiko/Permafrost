/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100130f0
#define DAT_100130f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2acdU)))
#undef DAT_100130f1
#define DAT_100130f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aceU)))
#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000560
 */

/* WARNING: Removing unreachable block (ram,0x1000059c) */

void recovered_10000560(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_100130f0 = 0;
    DAT_100130f1 = 0;
    recovered_100005c0();
    DAT_10013100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_100130f0
#undef DAT_100130f1
#undef DAT_10013100

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
#undef DAT_100130f0
#define DAT_100130f0 (*(char *)(((uintptr_t)pf_module_state + 0x2acdU)))
#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ad5U)))
#undef DAT_10013108
#define DAT_10013108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ae5U)))
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
  if (DAT_100130f0 != '\0') {
    return;
  }
  DAT_100130f8 = 0;
  DAT_10013108 = 0;
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
      if (DAT_100130f8 != 0) goto LAB_10000899;
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
  if (DAT_10013108 == 0) {
    DAT_10013108 = DAT_100130f8;
  }
  DAT_100130f0 = 1;
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
#undef DAT_100130f0
#undef DAT_100130f8
#undef DAT_10013108
#undef _DAT_00280088
#undef _DAT_0028008c
#undef _DAT_00280238
#undef _DAT_0028023c
#undef local_438
#undef local_28

#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d0
 */

/* WARNING: Removing unreachable block (ram,0x1000090c) */

void recovered_100008d0(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000920(param_1,param_2,param_3);
    DAT_10013100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10013100

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_100130f1
#define DAT_100130f1 (*(char *)(((uintptr_t)pf_module_state + 0x2aceU)))
#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ad5U)))
#undef DAT_10013108
#define DAT_10013108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2ae5U)))
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
  if ((bVar3) || (DAT_100130f1 != '\0')) {
    return false;
  }
  DAT_100130f1 = 1;
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
      DAT_100130f1 = 0;
      return false;
    }
    if (plVar6 <= plVar1) {
      DAT_100130f1 = 0;
      return false;
    }
    if (plVar1 < (long *)0x10000000 && (long *)0x8000000 < plVar6) {
      if (plVar1 < (long *)0x8000000) {
        uVar7 = 0x8000000 - (long)plVar1;
        if (~(ulong)plVar1 < uVar7) {
          DAT_100130f1 = 0;
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
        DAT_100130f1 = 0;
        return false;
      }
    }
    else {
      if ((long *)0xfffffffffffffff0 < plVar1) {
        DAT_100130f1 = 0;
        return false;
      }
      uVar10 = ((ulong)((long)plVar1 + 0xf) & 0xfffffffffffffff0) - (long)plVar1;
      uVar8 = uVar7 - uVar10;
      if (uVar7 < uVar10 || uVar8 == 0) {
        DAT_100130f1 = 0;
        return false;
      }
      if ((uVar8 & 0xfffffffffffffff0) < 0x31) {
        DAT_100130f1 = 0;
        return false;
      }
    }
    plVar2 = DAT_100130f8;
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
          DAT_100130f1 = 0;
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
        DAT_100130f1 = 0;
        return false;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == param_3) {
      puVar5 = (ulong *)&DAT_100130f8;
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
      if (DAT_10013108 == (long *)0x0) {
        DAT_10013108 = DAT_100130f8;
      }
      DAT_100130f1 = 0;
      return local_38 != uVar8;
    }
  } while( true );
}

#undef DAT_10000001
#undef DAT_100130f1
#undef DAT_100130f8
#undef DAT_10013108
#undef local_38

#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
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

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    local_18 = param_1;
    local_10 = param_2;
    recovered_10000920((long)&local_18,(long)&local_10,1);
    DAT_10013100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10013100
#undef local_18
#undef local_10

#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2ad5U)))
#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
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

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  uVar4 = 0;
  for (plVar2 = DAT_100130f8; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      uVar4 = uVar4 + *plVar2;
    }
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_10013100 = 0;
  return uVar3;
}

#undef DAT_100130f8
#undef DAT_10013100

#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2ad5U)))
#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
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

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  lVar2 = 0;
  for (plVar3 = DAT_100130f8; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    if ((char)plVar3[3] == '\x01') {
      lVar2 = lVar2 + *plVar3;
    }
  }
  DAT_10013100 = 0;
  return lVar2;
}

#undef DAT_100130f8
#undef DAT_10013100

#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2ad5U)))
#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
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

  iVar2 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  uVar4 = 0;
  for (plVar1 = DAT_100130f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar4 = uVar4 + *plVar1;
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_10013100 = 0;
  return uVar3;
}

#undef DAT_100130f8
#undef DAT_10013100

#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2ad5U)))
#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
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

  iVar2 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  lVar3 = 0;
  for (plVar1 = DAT_100130f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar3 = lVar3 + *plVar1;
  }
  DAT_10013100 = 0;
  return lVar3;
}

#undef DAT_100130f8
#undef DAT_10013100

#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dc0
 */

/* WARNING: Removing unreachable block (ram,0x10000dfc) */

void recovered_10000dc0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000e20(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10013100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10013100

#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2ad5U)))
#undef DAT_10013108
#define DAT_10013108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2ae5U)))
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
    puVar1 = DAT_100130f8;
    puVar5 = DAT_10013108;
    if (DAT_10013108 == (ulong *)0x0) {
      puVar5 = DAT_100130f8;
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
                          DAT_10013108 = (ulong *)puVar3[1];
                        }
                        else {
                          DAT_10013108 = (ulong *)((long)puVar3 + uVar9 + 0x20);
                          *(ulong *)((long)puVar3 + uVar9 + 0x20) = uVar8 - 0x20;
                          uVar11 = puVar3[1];
                          *(ulong *)((long)puVar3 + uVar9 + 0x28) = uVar11;
                          *(ulong **)((long)puVar3 + uVar9 + 0x30) = puVar3;
                          *(undefined1 *)((long)puVar3 + uVar9 + 0x38) = 1;
                          if (uVar11 != 0) {
                            *(ulong **)(uVar11 + 0x10) = DAT_10013108;
                          }
                          *puVar3 = uVar9;
                          puVar3[1] = (ulong)DAT_10013108;
                        }
                        *(undefined1 *)(puVar3 + 3) = 0;
                        if (DAT_10013108 == (ulong *)0x0) {
                          DAT_10013108 = DAT_100130f8;
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

#undef DAT_100130f8
#undef DAT_10013108

#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001020
 */

/* WARNING: Removing unreachable block (ram,0x1000105c) */

void recovered_10001020(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000e20(param_1,(ulong *)0x0,param_2);
    DAT_10013100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10013100

#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001080
 */

/* WARNING: Removing unreachable block (ram,0x100010bc) */

ulong * recovered_10001080(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
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
  DAT_10013100 = 0;
  return puVar2;
}

#undef DAT_10013100

#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e0
 */

/* WARNING: Removing unreachable block (ram,0x1000111c) */

void recovered_100010e0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001130(param_1);
    DAT_10013100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10013100

#undef DAT_10013108
#define DAT_10013108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2ae5U)))
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
        if (DAT_10013108 == puVar3) {
          DAT_10013108 = puVar2;
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
          if (DAT_10013108 == puVar2) {
            DAT_10013108 = puVar3;
          }
          puVar1[2] = (ulong)puVar3;
          puVar2 = puVar1;
        } while ((char)puVar1[3] != '\0');
      }
      puVar2 = puVar3;
    }
    DAT_10013108 = puVar2;
  }
  return;
}

#undef DAT_10013108

#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2addU)))
#undef DAT_10013108
#define DAT_10013108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2ae5U)))
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

  iVar7 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar7 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (ulong *)0x0) {
    puVar16 = recovered_10000e20(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10013100 = 0;
    return puVar16;
  }
  if (param_2 == 0) {
    recovered_10001130((long)param_1);
    DAT_10013100 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_10013100 = 0;
    return (ulong *)0x0;
  }
  recovered_100005c0();
  uVar12 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar16 = param_1 + -4;
  uVar11 = param_1[-4];
  if (uVar12 <= uVar11) {
    if (uVar11 <= uVar12 - 1) {
      DAT_10013100 = 0;
      return (ulong *)0x0;
    }
    if (uVar11 - uVar12 < 0x30) {
      if (uVar11 < 0xffffffffffffffe0) {
        DAT_10013100 = 0;
        return param_1;
      }
      DAT_10013100 = 0;
      return (ulong *)0x0;
    }
    if (0xffffffffffffffb0 < param_2) {
      DAT_10013100 = 0;
      return (ulong *)0x0;
    }
    DAT_10013108 = (ulong *)((long)param_1 + uVar12);
    *(ulong *)((long)param_1 + uVar12) = (uVar11 - uVar12) - 0x20;
    uVar11 = param_1[-3];
    *(ulong *)((long)param_1 + uVar12 + 8) = uVar11;
    *(ulong **)((long)param_1 + uVar12 + 0x10) = puVar16;
    *(undefined1 *)((long)param_1 + uVar12 + 0x18) = 1;
    if (uVar11 != 0) {
      *(ulong **)(uVar11 + 0x10) = DAT_10013108;
    }
    param_1[-4] = uVar12;
    param_1[-3] = (ulong)DAT_10013108;
    DAT_10013100 = 0;
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
      puVar14 = DAT_10013108;
      do {
        if (((puVar8 == (ulong *)0x0) || ((char)puVar8[3] != '\x01')) ||
           ((0xffffffffffffffdf < uVar11 ||
            (((ulong *)((long)param_1 + uVar11) != puVar8 || (-uVar11 - 0x21 < *puVar8)))))) break;
        if (puVar14 == puVar8) {
          puVar14 = puVar16;
          DAT_10013108 = puVar16;
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
        DAT_10013100 = 0;
        return (ulong *)0x0;
      }
      uVar9 = recovered_10006780(puVar16,uVar12);
      if ((char)uVar9 != '\0') {
        DAT_10013108 = (ulong *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_10013100 = 0;
      return param_1;
    }
  }
  puVar8 = recovered_10000e20(uVar12,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  if (puVar8 == (ulong *)0x0) {
    DAT_10013100 = 0;
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
  DAT_10013100 = 0;
  return puVar8;
}

#undef DAT_10013100
#undef DAT_10013108

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001900
 */

ulong recovered_10001900(ulong param_1,uint param_2)

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
 * Address: 0x10001940
 */

ulong recovered_10001940(ulong param_1,uint param_2)

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
 * Address: 0x10001980
 */

long recovered_10001980(long param_1,uint param_2)

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
 * Address: 0x100019d0
 */

ulong recovered_100019d0(ulong param_1,ulong param_2)

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
 * Address: 0x10001a70
 */

long recovered_10001a70(ulong param_1,ulong param_2)

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
 * Address: 0x10001ae0
 */

ulong recovered_10001ae0(ulong param_1,ulong param_2)

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
 * Address: 0x10001bb0
 */

long recovered_10001bb0(ulong param_1,ulong param_2)

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
 * Address: 0x10001c40
 */

void recovered_10001c40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c60
 */

int recovered_10001c60(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003350
 */

char * recovered_10003350(char *param_1,char param_2,long param_3)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036f0
 */

bool recovered_100036f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003710
 */

bool recovered_10003710(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003730
 */

bool recovered_10003730(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003750
 */

bool recovered_10003750(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003780
 */

bool recovered_10003780(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037a0
 */

bool recovered_100037a0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037c0
 */

int recovered_100037c0(int param_1)

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
 * Address: 0x100037e0
 */

int recovered_100037e0(int param_1)

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
 * Address: 0x10003800
 */

ulong recovered_10003800(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003830
 */

int recovered_10003830(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *left;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      left = left + 1;
      if (bVar1 != *right) goto LAB_10003853;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10003853:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003870
 */

int recovered_10003870(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10003893;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10003893:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038b0
 */

void recovered_100038b0(long param_1,long param_2)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d50
 */

char * recovered_10003d50(char *param_1,char param_2)

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
 * Address: 0x10003d90
 */

long recovered_10003d90(char *param_1,char *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e50
 */

char * recovered_10003e50(char *param_1,char *param_2)

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
 * Address: 0x10003eb0
 */

char * recovered_10003eb0(char *param_1,char *param_2)

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


#undef DAT_10010800
#define DAT_10010800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ddU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f10
 */

undefined * recovered_10003f10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10010800;
}

#undef DAT_10010800

#undef PTR_DAT_10013000
#define PTR_DAT_10013000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x29ddU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f20
 */

undefined ** recovered_10003f20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10013000;
}

#undef PTR_DAT_10013000

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

#undef DAT_10010630
#define DAT_10010630 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
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
          param_1 = param_1 * DAT_10010630;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_10010630 * DAT_10010630 * DAT_10010630 * DAT_10010630 *
                    DAT_10010630 * DAT_10010630 * DAT_10010630 * DAT_10010630;
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

#undef DAT_10010630

#undef DAT_10010630
#define DAT_10010630 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_100106b0
#define DAT_100106b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef _DAT_100106b0
#define _DAT_100106b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8dU)))
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
  dVar2 = (double)(_DAT_100106b0 ^ (ulong)param_1);
  if ((double)(_DAT_100106b0 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_10010638 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10010630;
      iVar1 = iVar1 + 1;
    } while (DAT_10010638 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10010630)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_100106b0 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_10010630
#undef DAT_10010638
#undef DAT_100106b0
#undef _DAT_100106b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041d0
 */

double recovered_100041d0(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
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
      return DAT_10010638;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_10010638;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_10010638 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_10010638

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004280
 */

ulong recovered_10004280(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
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
         (ulong)(DAT_10010638 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_10010638

#undef DAT_10010630
#define DAT_10010630 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
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
    if (param_1 <= DAT_10010638) {
      dVar1 = DAT_10010638;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10010630;
  }
  return dVar1;
}

#undef DAT_10010630
#undef DAT_10010638

#undef DAT_10010630
#define DAT_10010630 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_10010640
#define DAT_10010640 (*(double *)(((uintptr_t)pf_module_state + 0x1dU)))
#undef DAT_10010648
#define DAT_10010648 (*(double *)(((uintptr_t)pf_module_state + 0x25U)))
#undef DAT_10010650
#define DAT_10010650 (*(double *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef DAT_10010658
#define DAT_10010658 (*(double *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_10010660
#define DAT_10010660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef DAT_10010668
#define DAT_10010668 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45U)))
#undef DAT_100106c0
#define DAT_100106c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef DAT_100106d0
#define DAT_100106d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadU)))
#undef DAT_100106e0
#define DAT_100106e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbdU)))
#undef DAT_100106f0
#define DAT_100106f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef _DAT_10010660
#define _DAT_10010660 (*(double *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef _DAT_10010668
#define _DAT_10010668 (*(double *)(((uintptr_t)pf_module_state + 0x45U)))
#undef _DAT_100106c0
#define _DAT_100106c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef _DAT_100106d0
#define _DAT_100106d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xadU)))
#undef _DAT_100106e0
#define _DAT_100106e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbdU)))
#undef _DAT_100106f0
#define _DAT_100106f0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xcdU)))
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
    if (DAT_10010648 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_10010630;
        iVar1 = iVar1 + 1;
      } while (DAT_10010648 < param_1);
    }
    for (; param_1 < DAT_10010650; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_10010658 + param_1) / (param_1 + DAT_10010638);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_100106c0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_100106d0);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_100106e0);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_100106f0);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_10010660 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_10010668;
  }
  return DAT_10010640;
}

#undef DAT_10010630
#undef DAT_10010638
#undef DAT_10010640
#undef DAT_10010648
#undef DAT_10010650
#undef DAT_10010658
#undef DAT_10010660
#undef DAT_10010668
#undef DAT_100106c0
#undef DAT_100106d0
#undef DAT_100106e0
#undef DAT_100106f0
#undef _DAT_10010660
#undef _DAT_10010668
#undef _DAT_100106c0
#undef _DAT_100106d0
#undef _DAT_100106e0
#undef _DAT_100106f0

#undef DAT_10010700
#define DAT_10010700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xddU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004610
 */

long recovered_10004610(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_10010700 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_10010700

#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_10010670
#define DAT_10010670 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_10010678
#define DAT_10010678 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#undef DAT_10010680
#define DAT_10010680 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#undef DAT_10010688
#define DAT_10010688 (*(double *)(((uintptr_t)pf_module_state + 0x65U)))
#undef DAT_10010690
#define DAT_10010690 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef DAT_10010710
#define DAT_10010710 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xedU)))
#undef _DAT_10010690
#define _DAT_10010690 (*(double *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef _DAT_10010710
#define _DAT_10010710 (*(uint128 *)(((uintptr_t)pf_module_state + 0xedU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004640(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10010670 < param_1; param_1 = param_1 + DAT_10010678) {
  }
  for (; param_1 < DAT_10010680; param_1 = param_1 + DAT_10010688) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10010710);
  return ((dVar1 / _DAT_10010690 + DAT_10010638 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_10010638
#undef DAT_10010670
#undef DAT_10010678
#undef DAT_10010680
#undef DAT_10010688
#undef DAT_10010690
#undef DAT_10010710
#undef _DAT_10010690
#undef _DAT_10010710

#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_10010670
#define DAT_10010670 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_10010678
#define DAT_10010678 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#undef DAT_10010680
#define DAT_10010680 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#undef DAT_10010688
#define DAT_10010688 (*(double *)(((uintptr_t)pf_module_state + 0x65U)))
#undef DAT_10010698
#define DAT_10010698 (*(double *)(((uintptr_t)pf_module_state + 0x75U)))
#undef DAT_10010720
#define DAT_10010720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfdU)))
#undef _DAT_10010720
#define _DAT_10010720 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10010670 < param_1; param_1 = param_1 + DAT_10010678) {
  }
  for (; param_1 < DAT_10010680; param_1 = param_1 + DAT_10010688) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10010720);
  return (DAT_10010698 * dVar1 + DAT_10010638 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_10010638
#undef DAT_10010670
#undef DAT_10010678
#undef DAT_10010680
#undef DAT_10010688
#undef DAT_10010698
#undef DAT_10010720
#undef _DAT_10010720

#undef DAT_100106b0
#define DAT_100106b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef _DAT_100106b0
#define _DAT_100106b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004790(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_100106b0 ^ (ulong)param_1);
  if ((double)(_DAT_100106b0 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_100106b0
#undef _DAT_100106b0

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a10
 */

float recovered_10004a10(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_10010630
#define DAT_10010630 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_100106b0
#define DAT_100106b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef UNK_100106b4
#define UNK_100106b4 (*(uint *)(((uintptr_t)pf_module_state + 0x91U)))
#undef _DAT_100106b0
#define _DAT_100106b0 (*(uint *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef uRam00000000100106b4
#define uRam00000000100106b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x91U)))
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
    dVar2 = pf_bits_double(CONCAT44((uint)(pf_double_bits(dVar2) >> 0x20) ^ uRam00000000100106b4,
                             SUB84(dVar2,0) ^ _DAT_100106b0));
  }
  iVar1 = 0;
  if (DAT_10010638 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10010630;
      iVar1 = iVar1 + 1;
    } while (DAT_10010638 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10010630)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam00000000100106b4,_DAT_100106b0));
  }
  return CONCAT44((int)(pf_double_bits(dVar2) >> 0x20),(float)dVar2);
}

#undef DAT_10010630
#undef DAT_10010638
#undef DAT_100106b0
#undef UNK_100106b4
#undef _DAT_100106b0
#undef uRam00000000100106b4

#undef DAT_10010630
#define DAT_10010630 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
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
          dVar3 = dVar3 * DAT_10010630;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_10010630 * DAT_10010630 * DAT_10010630 * DAT_10010630 * DAT_10010630 *
                  DAT_10010630 * DAT_10010630 * DAT_10010630;
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

#undef DAT_10010630

#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_10010740
#define DAT_10010740 (*(float *)(((uintptr_t)pf_module_state + 0x11dU)))
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
    return DAT_10010740;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_10010638;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_10010638 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_10010638
#undef DAT_10010740

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ca0
 */

undefined8 recovered_10004ca0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  ulong uVar2;
  float fVar3;
  uint128 in_XMM0;
  uint128 auVar4;
  uint128 auVar5;
  ulong in_XMM2_Qb;

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


#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
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
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_10010638 + dVar2) & uVar1);
}

#undef DAT_10010638

#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
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
                    (ulong)(DAT_10010638 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_10010638

#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_10010638 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_10010638

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e10
 */

float recovered_10004e10(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004310((double)param_1);
  return (float)dVar1;
}


#undef DAT_10010630
#define DAT_10010630 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_10010648
#define DAT_10010648 (*(double *)(((uintptr_t)pf_module_state + 0x25U)))
#undef DAT_10010650
#define DAT_10010650 (*(double *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef DAT_10010658
#define DAT_10010658 (*(double *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_10010660
#define DAT_10010660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef DAT_10010668
#define DAT_10010668 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45U)))
#undef DAT_100106c0
#define DAT_100106c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef DAT_100106d0
#define DAT_100106d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadU)))
#undef DAT_100106e0
#define DAT_100106e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbdU)))
#undef DAT_100106f0
#define DAT_100106f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef DAT_10010744
#define DAT_10010744 (*(float *)(((uintptr_t)pf_module_state + 0x121U)))
#undef DAT_10010748
#define DAT_10010748 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x125U)))
#undef _DAT_10010660
#define _DAT_10010660 (*(double *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef _DAT_10010668
#define _DAT_10010668 (*(double *)(((uintptr_t)pf_module_state + 0x45U)))
#undef _DAT_100106c0
#define _DAT_100106c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef _DAT_100106d0
#define _DAT_100106d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xadU)))
#undef _DAT_100106e0
#define _DAT_100106e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbdU)))
#undef _DAT_100106f0
#define _DAT_100106f0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef _DAT_10010748
#define _DAT_10010748 (*(float *)(((uintptr_t)pf_module_state + 0x125U)))
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
    if (_DAT_10010748 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_10010630;
        iVar1 = iVar1 + 1;
      } while (DAT_10010648 < dVar2);
    }
    for (; dVar2 < DAT_10010650; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_10010658 + dVar2) / (dVar2 + DAT_10010638);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_100106c0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_100106d0);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_100106e0);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_100106f0);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_10010660 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_10010668);
  }
  return DAT_10010744;
}

#undef DAT_10010630
#undef DAT_10010638
#undef DAT_10010648
#undef DAT_10010650
#undef DAT_10010658
#undef DAT_10010660
#undef DAT_10010668
#undef DAT_100106c0
#undef DAT_100106d0
#undef DAT_100106e0
#undef DAT_100106f0
#undef DAT_10010744
#undef DAT_10010748
#undef _DAT_10010660
#undef _DAT_10010668
#undef _DAT_100106c0
#undef _DAT_100106d0
#undef _DAT_100106e0
#undef _DAT_100106f0
#undef _DAT_10010748

#undef DAT_10010700
#define DAT_10010700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xddU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f80
 */

long recovered_10004f80(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_10010700 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_10010700

#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_10010670
#define DAT_10010670 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_10010678
#define DAT_10010678 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#undef DAT_10010680
#define DAT_10010680 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#undef DAT_10010688
#define DAT_10010688 (*(double *)(((uintptr_t)pf_module_state + 0x65U)))
#undef DAT_10010690
#define DAT_10010690 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef DAT_10010710
#define DAT_10010710 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xedU)))
#undef _DAT_10010690
#define _DAT_10010690 (*(double *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef _DAT_10010710
#define _DAT_10010710 (*(uint128 *)(((uintptr_t)pf_module_state + 0xedU)))
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

  for (dVar1 = (double)param_1; DAT_10010670 < dVar1; dVar1 = dVar1 + DAT_10010678) {
  }
  for (; dVar1 < DAT_10010680; dVar1 = dVar1 + DAT_10010688) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_10010710);
  return (float)(((dVar2 / _DAT_10010690 + DAT_10010638 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_10010638
#undef DAT_10010670
#undef DAT_10010678
#undef DAT_10010680
#undef DAT_10010688
#undef DAT_10010690
#undef DAT_10010710
#undef _DAT_10010690
#undef _DAT_10010710

#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_10010670
#define DAT_10010670 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_10010678
#define DAT_10010678 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#undef DAT_10010680
#define DAT_10010680 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#undef DAT_10010688
#define DAT_10010688 (*(double *)(((uintptr_t)pf_module_state + 0x65U)))
#undef DAT_10010698
#define DAT_10010698 (*(double *)(((uintptr_t)pf_module_state + 0x75U)))
#undef DAT_10010720
#define DAT_10010720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfdU)))
#undef _DAT_10010720
#define _DAT_10010720 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10005060(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_10010670 < dVar1; dVar1 = dVar1 + DAT_10010678) {
  }
  for (; dVar1 < DAT_10010680; dVar1 = dVar1 + DAT_10010688) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10010720);
  return (float)((DAT_10010698 * dVar1 + DAT_10010638 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_10010638
#undef DAT_10010670
#undef DAT_10010678
#undef DAT_10010680
#undef DAT_10010688
#undef DAT_10010698
#undef DAT_10010720
#undef _DAT_10010720

#undef DAT_10010730
#define DAT_10010730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10dU)))
#undef UNK_10010734
#define UNK_10010734 (*(uint *)(((uintptr_t)pf_module_state + 0x111U)))
#undef _DAT_10010730
#define _DAT_10010730 (*(uint *)(((uintptr_t)pf_module_state + 0x10dU)))
#undef uRam0000000010010734
#define uRam0000000010010734 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x111U)))
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
  fVar2 = (float)(_DAT_10010730 ^ (uint)fVar1);
  if ((float)(_DAT_10010730 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam0000000010010734 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_10010730
#undef UNK_10010734
#undef _DAT_10010730
#undef uRam0000000010010734

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005120
 */

long recovered_10005120(byte *param_1,undefined8 *param_2,uint param_3)

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
 * Address: 0x10005250
 */

long recovered_10005250(byte *param_1,undefined8 *param_2,uint param_3)

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


#undef DAT_10010630
#define DAT_10010630 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_100106a8
#define DAT_100106a8 (*(double *)(((uintptr_t)pf_module_state + 0x85U)))
#undef DAT_100106b0
#define DAT_100106b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef _DAT_100106b0
#define _DAT_100106b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8dU)))
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
    dVar11 = dVar11 * DAT_100106a8 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_10010638;
      do {
        dVar12 = dVar12 * DAT_100106a8 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_100106a8;
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
                dVar11 = dVar11 * DAT_10010630;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_10010630 * DAT_10010630 * DAT_10010630 * DAT_10010630 *
                         DAT_10010630 * DAT_10010630 * DAT_10010630 * DAT_10010630;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_100106b0);
  }
  return dVar11;
}

#undef DAT_10010630
#undef DAT_10010638
#undef DAT_100106a8
#undef DAT_100106b0
#undef _DAT_100106b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e0
 */

float recovered_100055e0(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10005380(param_1,param_2);
  return (float)dVar1;
}


#undef DAT_100106a8
#define DAT_100106a8 (*(double *)(((uintptr_t)pf_module_state + 0x85U)))
#undef DAT_100106b0
#define DAT_100106b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef DAT_10010802
#define DAT_10010802 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef _DAT_100106b0
#define _DAT_100106b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef str_1001080c
#define str_1001080c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e9U)))
#undef str_1001081d
#define str_1001081d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1faU)))
#define abStack_7a (*(byte (*)[122])(pf_stack_frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_100055f0(byte *param_1,ulong param_2,byte *param_3,uint *param_4)

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
  uVar8 = _DAT_100106b0;
  dVar7 = DAT_100106a8;
  uVar20 = param_2;
  uVar13 = 0;
LAB_10005659:
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
      goto LAB_10005672;
    }
    goto LAB_10005653;
  }
  bVar15 = param_3[1];
  if (bVar15 == 0x25) {
    if (1 < uVar20) {
      *param_1 = 0x25;
      param_1 = param_1 + 1;
      uVar20 = uVar20 - 1;
    }
    param_3 = param_3 + 1;
    goto LAB_10005653;
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
        goto LAB_100056fc;
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
LAB_100056fc:
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
      if (0x28 < uVar2) goto LAB_10005b94;
      lVar3 = *(long *)(param_4 + 4);
      *param_4 = uVar2 + 8;
LAB_10005878:
      uVar24 = *(ulong *)(lVar3 + uVar13);
      break;
    case '\a':
      if (uVar2 < 0x29) {
        lVar3 = *(long *)(param_4 + 4);
        *param_4 = uVar2 + 8;
        goto LAB_10005878;
      }
LAB_10005b94:
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
      abStack_7a[uVar19 + 2] = str_1001081d[uVar24 % 10];
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
LAB_10005672:
      param_1 = param_1 + 1;
      uVar20 = uVar20 - 1;
    }
    goto LAB_10005653;
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
LAB_10005ce1:
        puVar11 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10005ce1;
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
    pcVar23 = str_1001081d;
    if (*param_3 == 0x58) {
      pcVar23 = str_1001080c;
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
    goto LAB_10005659;
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
      goto LAB_10005672;
    }
LAB_10005653:
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
        abStack_7a[uVar14 + 2] = str_1001081d[uVar24 % 10];
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
    goto LAB_10005659;
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
      abStack_7a[uVar14 + 2] = str_1001081d[(uint)uVar24 & 0xf];
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
    goto LAB_10005659;
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
        pbVar21 = &DAT_10010802;
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
LAB_10006013:
        puVar11 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10006013;
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
      abStack_7a[uVar19 + 2] = str_1001081d[uVar13 % 10];
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
    goto LAB_10005659;
  }
  param_3 = param_3 + 1;
  goto LAB_10005659;
}

#undef DAT_100106a8
#undef DAT_100106b0
#undef DAT_10010802
#undef _DAT_100106b0
#undef str_1001080c
#undef str_1001081d
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
#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ad5U)))
#undef DAT_10013108
#define DAT_10013108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2ae5U)))
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
        if (DAT_100130f8 == 0) {
          puVar5 = (ulong *)&DAT_100130f8;
        }
        *puVar5 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_10013108 == (long *)0x0) {
          DAT_10013108 = plVar2;
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
      if (DAT_100130f8 == 0) {
        plVar1 = &DAT_100130f8;
      }
      *plVar1 = 0x10000000;
      *param_3 = 0x10000000;
      if (DAT_10013108 == (long *)0x0) {
        DAT_10013108 = (long *)&DAT_10000000;
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
        if (DAT_100130f8 == 0) {
          puVar3 = &DAT_100130f8;
        }
        *puVar3 = plVar1;
        *param_3 = (ulong)plVar1;
        if (DAT_10013108 == (long *)0x0) {
          DAT_10013108 = plVar1;
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
#undef DAT_100130f8
#undef DAT_10013108
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
#undef DAT_10013110
#define DAT_10013110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2aedU)))
#undef DAT_10013120
#define DAT_10013120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2afdU)))
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
        if (DAT_10013110 != 0) {
          DAT_10013110 = DAT_10013110 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_10013110 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001d60(local_238,&DAT_10013120,DAT_10013110);
            uVar3 = DAT_10013110;
          }
          local_238[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 &&
              ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00280840)(local_238);
          }
          DAT_10013110 = 0;
        }
        else {
          if (DAT_10013110 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001d60(local_238,&DAT_10013120,DAT_10013110);
            local_238[DAT_10013110] = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00280840)(local_238);
            }
            DAT_10013110 = 0;
          }
          pcVar1 = &DAT_10013120 + DAT_10013110;
          DAT_10013110 = DAT_10013110 + 1;
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
#undef DAT_10013110
#undef DAT_10013120
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
#undef DAT_10013110
#define DAT_10013110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2aedU)))
#undef DAT_10013120
#define DAT_10013120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2afdU)))
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

  if (DAT_10013110 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001d60(local_208,&DAT_10013120,DAT_10013110);
    uVar1 = DAT_10013110;
  }
  local_208[uVar1] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280840)(local_208);
  }
  DAT_10013110 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_10013110
#undef DAT_10013120
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
#undef DAT_10013110
#define DAT_10013110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2aedU)))
#undef DAT_10013120
#define DAT_10013120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2afdU)))
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


  if (DAT_10013110 != 0) {
    recovered_10001d60(local_208,&DAT_10013120,DAT_10013110);
    local_208[DAT_10013110] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_208);
    }
    DAT_10013110 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_10013110
#undef DAT_10013120
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_208

#undef DAT_1001080b
#define DAT_1001080b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef DAT_1001082e
#define DAT_1001082e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20bU)))
#define local_148 (*(char (*)[328])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

void recovered_10006af0(char *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined *puVar2;
  char *format;

  format = &DAT_1001082e;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1001080b;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_100064d0(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_100067e0((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_1001080b
#undef DAT_1001082e
#undef local_148

#undef DAT_1001084c
#define DAT_1001084c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef str_10010831
#define str_10010831 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b50
 */

void recovered_10006b50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003800(str_10010831);
  recovered_100067e0(((uintptr_t)pf_module_state+0x20eU),uVar1);
  uVar1 = recovered_10003800(&DAT_1001084c);
  recovered_100067e0(((uintptr_t)pf_module_state+0x229U),uVar1);
  return;
}

#undef DAT_1001084c
#undef str_10010831

#undef DAT_1001084c
#define DAT_1001084c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef str_1001084f
#define str_1001084f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b90
 */

void recovered_10006b90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003800(str_1001084f);
  recovered_100067e0(((uintptr_t)pf_module_state+0x22cU),uVar1);
  uVar1 = recovered_10003800(&DAT_1001084c);
  recovered_100067e0(((uintptr_t)pf_module_state+0x229U),uVar1);
  return;
}

#undef DAT_1001084c
#undef str_1001084f

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
#undef DAT_10013110
#define DAT_10013110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2aedU)))
#undef DAT_10013120
#define DAT_10013120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2afdU)))
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
  if (DAT_10013110 != 0) {
    recovered_10001d60(local_228,&DAT_10013120,DAT_10013110);
    local_228[DAT_10013110] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_228);
    }
    DAT_10013110 = 0;
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
#undef DAT_10013110
#undef DAT_10013120
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cf0
 */

undefined8 recovered_10006cf0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d00
 */

void recovered_10006d00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d10
 */

undefined1 recovered_10006d10(void)

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
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_1001082e
#define DAT_1001082e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20bU)))
#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a3dU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef str_100108d0
#define str_100108d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2adU)))
#undef str_100108dd
#define str_100108dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2baU)))
#undef str_100108eb
#define str_100108eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c8U)))
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
    DAT_10013060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10003830(param_1,str_100108d0);
  if (iVar3 == 0) {
    uVar8 = 1;
LAB_10006fce:
    puVar5 = recovered_10001c70(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_10013060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10002a60(puVar5,0,0x340);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    recovered_100064d0((char *)(puVar5 + 1),0xf1,&DAT_1001082e,param_1);
    return puVar5;
  }
  iVar4 = recovered_10003830(param_1,str_100108dd);
  if (iVar4 == 0) {
    uVar8 = 2;
    goto LAB_10006fce;
  }
  iVar4 = recovered_10003830(param_1,str_100108eb);
  if (iVar4 == 0) {
    uVar8 = 3;
    goto LAB_10006fce;
  }
  puVar5 = recovered_10001c70(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_10013060 = 0xc;
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
  recovered_100064d0((char *)(puVar5 + 1),0xf1,&DAT_1001082e,param_1);
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
            DAT_10013060 = 0xc;
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
    DAT_10013060 = 2;
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
#undef DAT_1001082e
#undef DAT_10013060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_100108d0
#undef str_100108dd
#undef str_100108eb
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
#undef DAT_1001082e
#define DAT_1001082e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20bU)))
#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a3dU)))
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
#undef str_100108d0
#define str_100108d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2adU)))
#undef str_100108dd
#define str_100108dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2baU)))
#undef str_100108eb
#define str_100108eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c8U)))
#define uStack_30 (*(ulong *)(pf_stack_frame + 32))
#define uStack_34 (*(uint *)(pf_stack_frame + 28))
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
      DAT_10013060 = 5;
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
    DAT_10013060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10003830(param_1,str_100108d0);
  if (iVar4 == 0) {
    uVar8 = 1;
LAB_10006fce:
    puVar7 = recovered_10001c70(0x340);
    if (puVar7 == (undefined4 *)0x0) {
      DAT_10013060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10002a60(puVar7,0,0x340);
    *puVar7 = uVar8;
    *(bool *)(puVar7 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar7 + 0x125) = iVar4 != 0;
    puVar7[0x48] = 0xffffffff;
    recovered_100064d0((char *)(puVar7 + 1),0xf1,&DAT_1001082e,param_1);
    return puVar7;
  }
  iVar3 = recovered_10003830(param_1,str_100108dd);
  if (iVar3 == 0) {
    uVar8 = 2;
    goto LAB_10006fce;
  }
  iVar3 = recovered_10003830(param_1,str_100108eb);
  if (iVar3 == 0) {
    uVar8 = 3;
    goto LAB_10006fce;
  }
  puVar7 = recovered_10001c70(0x340);
  if (puVar7 == (undefined4 *)0x0) {
    DAT_10013060 = 0xc;
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
  recovered_100064d0((char *)(puVar7 + 1),0xf1,&DAT_1001082e,param_1);
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
            DAT_10013060 = 0xc;
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
    DAT_10013060 = 2;
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
#undef DAT_1001082e
#undef DAT_10013060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef str_100108d0
#undef str_100108dd
#undef str_100108eb
#undef uStack_30
#undef uStack_34

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a3dU)))
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
      DAT_10013060 = 5;
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
#undef DAT_10013060
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
#undef DAT_1001080b
#define DAT_1001080b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef DAT_10013110
#define DAT_10013110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2aedU)))
#undef DAT_10013120
#define DAT_10013120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2afdU)))
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
    if (DAT_10013110 != 0) {
      recovered_10001d60(local_218,&DAT_10013120,DAT_10013110);
      local_218[DAT_10013110] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00280840)(local_218);
      }
      DAT_10013110 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x47 < _DAT_00280808 && ((code *)(ulong)_DAT_00280844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00280844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_1001080b,0)
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
#undef DAT_1001080b
#undef DAT_10013110
#undef DAT_10013120
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_218

#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a3dU)))
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
        DAT_10013060 = 0xc;
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

#undef DAT_10013060

#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a3dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007730
 */

undefined8 recovered_10007730(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10013060 = 0x16;
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
  DAT_10013060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10013060

#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a3dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077b0
 */

undefined8 recovered_100077b0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10013060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10013060

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a3dU)))
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
  DAT_10013060 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef DAT_10013060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007890
 */

undefined1 recovered_10007890(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078b0
 */

undefined1 recovered_100078b0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078d0
 */

void recovered_100078d0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078f0
 */

uint recovered_100078f0(uint param_1,long param_2)

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
#undef DAT_0028083c
#define DAT_0028083c (*(uint8_t *)(0x28083cU))
#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a3dU)))
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
  DAT_10013060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef DAT_10013060
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
#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a3dU)))
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
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_2c (*(undefined4 *)(pf_stack_frame + 20))
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
    DAT_10013060 = 0x16;
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
  DAT_10013060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef DAT_10013060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef _DAT_0028083c
#undef local_28
#undef local_2c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10007b10(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar2 = 0;
    recovered_10002a60(&local_34,0,0xc);
    if (_DAT_00280800 != 0x50414d57) goto LAB_10007bcf;
    if ((((_DAT_00280804 != 0) && (0xb < _DAT_00280808)) && (0x37 < _DAT_00280808)) &&
       ((code *)(ulong)_DAT_00280834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00280834)(param_1,&local_34);
      if (iVar1 != 0) {
        destination = recovered_10001c70((ulong)(local_30 + (local_30 == 0)));
        if (destination != (void *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10001d60(destination,(void *)(ulong)local_34,(ulong)local_30);
            uVar2 = (ulong)local_30;
          }
          *param_2 = destination;
          *param_3 = uVar2;
          uVar2 = CONCAT71((int7)((ulong)destination >> 8),1);
          goto LAB_10007bcf;
        }
      }
    }
  }
  uVar2 = 0;
LAB_10007bcf:
  return uVar2 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef local_34
#undef local_30

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10007bf0(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((param_1 == 0) || (param_2 == 0 && param_3 != 0)) || (_DAT_00280800 != 0x50414d57)) ||
     (((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)) ||
      ((_DAT_00280808 < 0x3c || ((code *)(ulong)_DAT_00280838 == (code *)0x0)))))) {
    return false;
  }
  iVar1 = (*(code *)(ulong)_DAT_00280838)();
  return iVar1 != 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c60
 */

undefined8 recovered_10007c60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c70
 */

void recovered_10007c70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c80
 */

undefined8 recovered_10007c80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c90
 */

undefined8 recovered_10007c90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ca0
 */

undefined8 recovered_10007ca0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cb0
 */

int recovered_10007cb0(char *left,char *right,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  bool bVar3;

  if (count == 0) {
    return 0;
  }
  lVar2 = 0;
  do {
    bVar1 = left[lVar2];
    if (bVar1 != right[lVar2]) {
      return (uint)bVar1 - (uint)(byte)right[lVar2];
    }
  } while ((bVar1 != 0) && (bVar3 = count - 1 != lVar2, lVar2 = lVar2 + 1, bVar3));
  return 0;
}


#undef DAT_1001085f
#define DAT_1001085f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23cU)))
#undef str_10010862
#define str_10010862 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23fU)))
#undef str_1001086f
#define str_1001086f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24cU)))
#undef str_10010879
#define str_10010879 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x256U)))
#undef str_1001088d
#define str_1001088d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26aU)))
#undef str_1001089b
#define str_1001089b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x278U)))
#undef str_100108ad
#define str_100108ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28aU)))
#undef str_100108b9
#define str_100108b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x296U)))
#undef str_100108ca
#define str_100108ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cf0
 */

char * recovered_10007cf0(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1001085f;
  default:
    return str_100108ca;
  case 2:
    return str_10010862;
  case 5:
    return str_1001086f;
  case 9:
    return str_10010879;
  case 0xc:
    return str_1001088d;
  case 0xd:
    return str_1001089b;
  case 0x11:
    return str_100108ad;
  case 0x16:
    return str_100108b9;
  }
}

#undef DAT_1001085f
#undef str_10010862
#undef str_1001086f
#undef str_10010879
#undef str_1001088d
#undef str_1001089b
#undef str_100108ad
#undef str_100108b9
#undef str_100108ca

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007dc0
 */

undefined8 recovered_10007dc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007dd0
 */

undefined8 recovered_10007dd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10013320
#define DAT_10013320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2cfdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007de0
 */

void recovered_10007de0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10013320 = DAT_10013320 + 1;
  return;
}

#undef DAT_10013320

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

#define local_218 (*(byte (*)[536])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e20
 */

ulong recovered_10007e20(byte *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = recovered_100055f0(local_218,0x200,param_1,param_2);
  if (0 < (int)(uint)uVar1) {
    uVar2 = 0x1ff;
    if ((uint)uVar1 < 0x1ff) {
      uVar2 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
    recovered_100067e0((long)local_218,uVar2);
  }
  return uVar1;
}

#undef local_218

#define local_2d8 (*(byte (*)[728])(pf_stack_frame + 24))
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
 * Address: 0x10007e70
 */

ulong recovered_10007e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,byte *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
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
  uVar1 = recovered_100055f0(local_2d8,0x200,param_9,local_28);
  if (0 < (int)(uint)uVar1) {
    uVar2 = 0x1ff;
    if ((uint)uVar1 < 0x1ff) {
      uVar2 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
    recovered_100067e0((long)local_2d8,uVar2);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f30
 */

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
#undef DAT_100111b0
#define DAT_100111b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8dU)))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined * *)(pf_stack_frame + 80))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
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
  local_60 = &DAT_100111b0;
  local_50 = &DAT_10008011;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001c40();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10008011
#undef DAT_100111b0
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008040
 */

undefined8 recovered_10008040(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008050
 */

void recovered_10008050(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008060(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10007fc0();
}


#undef DAT_10013328
#define DAT_10013328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d05U)))
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
  *(long *)(extraout_RAX + 0x10) = DAT_10013328;
  *(undefined1 *)(extraout_RAX + 0x34) = 0;
  DAT_10013328 = extraout_RAX;
  recovered_10008560(extraout_RAX);
  return;
}

#undef DAT_10013328

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


#undef DAT_100111c0
#define DAT_100111c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9dU)))
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

void recovered_100080f0(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_100111c0;
  local_50 = &LAB_1000815d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_100111c0
#undef LAB_1000815d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_100111d0
#define DAT_100111d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbadU)))
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
  local_60 = &DAT_100111d0;
  local_50 = &LAB_100081fd;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_100111d0
#undef LAB_100081fd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_100111e0
#define DAT_100111e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbbdU)))
#undef LAB_1000829d
#define LAB_1000829d (*(uint8_t *)(0x1000829dU))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008230
 */

void recovered_10008230(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_100111e0;
  local_50 = &LAB_1000829d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_100111e0
#undef LAB_1000829d
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_88
#undef auStack_40
#undef local_80
#undef local_68

#undef DAT_100111f0
#define DAT_100111f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbcdU)))
#undef LAB_1000833d
#define LAB_1000833d (*(uint8_t *)(0x1000833dU))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082d0
 */

void recovered_100082d0(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_100111f0;
  local_50 = &LAB_1000833d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_100111f0
#undef LAB_1000833d
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_88
#undef auStack_40
#undef local_80
#undef local_68

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


#undef DAT_10013338
#define DAT_10013338 (*(int *)(((uintptr_t)pf_module_state + 0x2d15U)))
#undef DAT_10013340
#define DAT_10013340 (*(void * *)(((uintptr_t)pf_module_state + 0x2d1dU)))
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
  DAT_10013338 = DAT_10013338 + 1 + (uint)(DAT_10013338 == -1);
  if (DAT_10013340 == (void *)0x0) {
LAB_1000849e:
    *(int *)((long)pvVar2 + 0x30) = DAT_10013338;
    *(void **)((long)pvVar2 + 0x18) = DAT_10013340;
    DAT_10013340 = pvVar2;
    return (long)pvVar2 + 0x38;
  }
  do {
    lVar5 = (long)DAT_10013340;
    while (*(int *)(lVar5 + 0x30) != DAT_10013338) {
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) goto LAB_1000849e;
    }
    DAT_10013338 = DAT_10013338 + 1 + (uint)(DAT_10013338 == -1);
  } while( true );
}

#undef DAT_10013338
#undef DAT_10013340

#undef DAT_10013340
#define DAT_10013340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d1dU)))
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
  pvVar1 = DAT_10013340;
  if (DAT_10013340 == pointer) {
    puVar2 = &DAT_10013340;
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

#undef DAT_10013340

#undef DAT_10013340
#define DAT_10013340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d1dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008520
 */

void recovered_10008520(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = DAT_10013340;
  if (DAT_10013340 != param_1 && DAT_10013340 != 0) {
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

#undef DAT_10013340

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008560
 */

long recovered_10008560(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_10013328
#define DAT_10013328 (*(void * *)(((uintptr_t)pf_module_state + 0x2d05U)))
#undef DAT_10013340
#define DAT_10013340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d1dU)))
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

  pointer = DAT_10013328;
  if (DAT_10013328 != (void *)0x0) {
    puVar2 = (undefined8 *)((long)DAT_10013328 + 0x10);
    DAT_10013328 = *(void **)((long)DAT_10013328 + 0x10);
    *puVar2 = 0;
    if (*(char *)((long)pointer + 0x34) == '\0') {
      if (*(code **)((long)pointer + 8) != (code *)0x0) {
        (**(code **)((long)pointer + 8))((long)pointer + 0x38);
      }
      pvVar1 = DAT_10013340;
      if (DAT_10013340 == pointer) {
        puVar2 = &DAT_10013340;
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

#undef DAT_10013328
#undef DAT_10013340

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


#undef DAT_10013328
#define DAT_10013328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d05U)))
#undef DAT_10013330
#define DAT_10013330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d0dU)))
#define cStack_36 (*(char *)(pf_stack_frame + 26))
#define uStack_35 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_38 (*(undefined2 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
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

  if (DAT_10013330 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_10013330;
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
        puVar2 = DAT_10013328;
        if (DAT_10013328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10007fc0();
        }
        *(undefined1 *)((long)DAT_10013328 + 0x34) = 1;
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

#undef DAT_10013328
#undef DAT_10013330
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38
#undef local_30

#undef DAT_10013328
#define DAT_10013328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d05U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086b0
 */

void recovered_100086b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10013328;
  if (DAT_10013328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007fc0();
  }
  *(undefined1 *)((long)DAT_10013328 + 0x34) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10008630(puVar1);
}

#undef DAT_10013328

#undef DAT_10013330
#define DAT_10013330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d0dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086e0
 */

void recovered_100086e0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10013330;
  DAT_10013330 = param_1;
  return;
}

#undef DAT_10013330

#undef DAT_10013330
#define DAT_10013330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d0dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008700
 */

void recovered_10008700(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_10013330;
  if (DAT_10013330 == param_1) {
    puVar2 = &DAT_10013330;
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

#undef DAT_10013330

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


#undef DAT_10013330
#define DAT_10013330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d0dU)))
#undef DAT_10013340
#define DAT_10013340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d1dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008760
 */

void recovered_10008760(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10013340;
  if (DAT_10013340 != param_1 && DAT_10013340 != (undefined8 *)0x0) {
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
  if (DAT_10013330 != (undefined8 *)0x0) {
    DAT_10013330 = (undefined8 *)*DAT_10013330;
  }
  recovered_100087c0(puVar1);
  return;
}

#undef DAT_10013330
#undef DAT_10013340

#undef DAT_10013330
#define DAT_10013330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d0dU)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087c0
 */

undefined8 recovered_100087c0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  long *plVar3;

  if (DAT_10013330 != (long *)0x0) {
    plVar1 = (long *)param_1[4];
    do {
      plVar3 = DAT_10013330;
      if (DAT_10013330 == plVar1) {
        *(ulong *)((long)DAT_10013330 + 0xc) =
             CONCAT44((int)*(undefined8 *)((long)param_1 + 0x2c),
                      (int)((ulong)*(undefined8 *)((long)param_1 + 0x2c) >> 0x20));
        uVar2 = *(undefined4 *)(param_1 + 5);
LAB_10008854:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10007f30((long)plVar3);
        recovered_10008760(plVar3);
        return 0;
      }
      local_30 = 0;
      local_38 = 0;
      recovered_10009110((long)DAT_10013330,(byte *)*param_1,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        *(undefined4 *)((long)plVar3 + 0xc) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)(plVar3 + 2) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_10008854;
      }
      DAT_10013330 = (long *)*plVar3;
    } while (DAT_10013330 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007fc0();
}

#undef DAT_10013330
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008860
 */

undefined8 recovered_10008860(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008760(param_1);
  return 0;
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


#undef DAT_100130c0
#define DAT_100130c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a9dU)))
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
      if ((undefined *)*puVar5 != &DAT_100130c0) goto LAB_1000895c;
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

#undef DAT_100130c0

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008990
 */

bool recovered_10008990(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089b0
 */

bool recovered_100089b0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089e0
 */

bool recovered_100089e0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a00
 */

bool recovered_10008a00(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a30
 */

bool recovered_10008a30(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010 (*(ushort *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a50
 */

byte recovered_10008a50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a90
 */

bool recovered_10008a90(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_10010630
#define DAT_10010630 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_10010638
#define DAT_10010638 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_10010658
#define DAT_10010658 (*(double *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_10010698
#define DAT_10010698 (*(double *)(((uintptr_t)pf_module_state + 0x75U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f70
 */

double recovered_10008f70(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_10004280(param_1);
  if (DAT_10010630 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_10010638;
  }
  else if (param_1 - dVar1 <= DAT_10010698) {
    dVar1 = dVar1 + DAT_10010658;
  }
  return dVar1;
}

#undef DAT_10010630
#undef DAT_10010638
#undef DAT_10010658
#undef DAT_10010698

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fc0
 */

long recovered_10008fc0(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto joined_r0x1000901d;
    }
  }
  bVar7 = false;
joined_r0x1000901d:
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
 * Address: 0x10009100
 */

void recovered_10009100(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008fc0(param_1,param_2,param_3);
  return;
}


#undef DAT_10010780
#define DAT_10010780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15dU)))
#undef DAT_100130c0
#define DAT_100130c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a9dU)))
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
                        *(long *)(&DAT_10010780 + (ulong)(uVar10 & 0xf) * 8);
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
        if (*(undefined **)pbVar13 != &DAT_100130c0) goto LAB_10009468;
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

#undef DAT_10010780
#undef DAT_100130c0
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
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_10012008
#define DAT_10012008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x19e5U)))
#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013474
#define DAT_10013474 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e51U)))
#undef PTR_str_100108f9_10012000
#define PTR_str_100108f9_10012000 (*(char * *)(((uintptr_t)pf_module_state + 0x19ddU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#define local_38 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 48))
#define local_58 (*(undefined8 *)(pf_stack_frame + 24))
#define local_50 (*(undefined4 *)(pf_stack_frame + 32))
#define local_48 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10012008
#define DAT_10012008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x19e5U)))
#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013474
#define DAT_10013474 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e51U)))
#undef PTR_str_100108f9_10012000
#define PTR_str_100108f9_10012000 (*(char * *)(((uintptr_t)pf_module_state + 0x19ddU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280a04
#define UINT_00280a04 (*(uint *)(0x280a04U))
#define local_38 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 48))
#define local_58 (*(undefined8 *)(pf_stack_frame + 24))
#define local_50 (*(undefined4 *)(pf_stack_frame + 32))
#define local_48 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

void recovered_10009640(void)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;

  lVar5 = 0;
  do {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uVar1 = (&DAT_10012008)[lVar5];
    iVar2 = Ram0000000000280800;
    PF_PART4(local_58, 4) = 0;
    bVar3 = false;
    if (iVar2 == 0x50414d57) {
      iVar2 = Ram0000000000280804;
      if (iVar2 == 0) {
LAB_10009670:
        PF_PART4(local_58, 4) = 0;
        bVar3 = false;
      }
      else {
        uVar4 = Ram0000000000280808;
        PF_PART4(local_58, 4) = 0;
        if (0xb < uVar4) {
          uVar4 = Ram0000000000280808;
          PF_PART4(local_58, 4) = 0;
          if (0x207 < uVar4) {
            uVar4 = UINT_00280a04;
            if ((code *)(ulong)uVar4 == (code *)0x0) goto LAB_10009670;
            uVar4 = (*(code *)(ulong)uVar4)
                              (*(char **)((long)&PTR_str_100108f9_10012000 + lVar5 * 4),&local_58);
            bVar3 = (int)local_58 == 1 && uVar4 != 0;
          }
        }
      }
    }
    if (0xffffff < PF_PART4(local_58, 4)) {
      PF_PART4(local_58, 4) = uVar1;
    }
    if (!bVar3) {
      PF_PART4(local_58, 4) = uVar1;
    }
    *(uint *)((long)&DAT_10013350 + lVar5) = PF_PART4(local_58, 4);
    lVar5 = lVar5 + 4;
    if (lVar5 == 0x124) {
      DAT_10013474 = 1;
      return;
    }
  } while( true );
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10012008
#undef DAT_10013350
#undef DAT_10013474
#undef PTR_str_100108f9_10012000
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280a04
#undef local_38
#undef uStack_40
#undef local_58
#undef local_50
#undef local_48


#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_10012008
#undef DAT_10013350
#undef DAT_10013474
#undef PTR_str_100108f9_10012000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a04
#undef local_38
#undef uStack_40
#undef local_58
#undef local_50
#undef local_48

#undef DAT_10012008
#define DAT_10012008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x19e5U)))
#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009750
 */

undefined4 recovered_10009750(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 *puVar2;

  uVar1 = 0;
  if (param_1 < 0x49) {
    puVar2 = &DAT_10012008 + (ulong)param_1 * 4;
    if (DAT_10013474 != '\0') {
      puVar2 = &DAT_10013350 + param_1;
    }
    uVar1 = *puVar2;
  }
  return uVar1;
}

#undef DAT_10012008
#undef DAT_10013350
#undef DAT_10013474

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009790
 */

undefined8 recovered_10009790(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;

  if ((param_1 == (long *)0x0) || (*(undefined1 *)((long)param_1 + 0x2c) = 0, param_2 == 0)) {
    return 0;
  }
  uVar7 = param_4 >> 0x20;
  if ((0 < (int)(param_4 >> 0x20) && (0 < (int)(uint)param_4 && (param_3 & 0x8000000080000000) == 0)
      ) && *(long *)(param_2 + 0x30) != 0) {
    uVar3 = (uint)param_3 & 0x7fffffff;
    uVar2 = (uint)param_4 & 0x7fffffff;
    if ((((uVar2 + uVar3 <= *(uint *)(param_2 + 4)) &&
         (uVar4 = param_3 >> 0x20, uVar7 + uVar4 <= (ulong)*(uint *)(param_2 + 8))) &&
        (uVar5 = uVar2 * uVar7, uVar5 < 0x40000000)) &&
       ((ulong)*(uint *)(param_2 + 4) * 4 <= (ulong)*(uint *)(param_2 + 0xc))) {
      uVar5 = uVar5 * 4;
      if (uVar5 != param_1[1]) {
        pvVar1 = recovered_10009910((void *)*param_1,uVar5);
        if (pvVar1 == (void *)0x0) {
          return 0;
        }
        *param_1 = (long)pvVar1;
        param_1[1] = uVar5;
      }
      param_1[2] = param_3;
      param_1[3] = param_4;
      param_1[4] = *(long *)(param_2 + 4);
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0xc);
      uVar5 = (ulong)uVar2 * 4;
      lVar6 = 0;
      do {
        pvVar1 = recovered_10001d60((void *)(*param_1 + lVar6),
                                    (void *)(*(uint *)(param_2 + 0xc) * uVar4 +
                                             *(long *)(param_2 + 0x30) + (ulong)uVar3 * 4),uVar5);
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + uVar5;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      *(undefined1 *)((long)param_1 + 0x2c) = 1;
      return CONCAT71((int7)((ulong)pvVar1 >> 8),1);
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
#undef DAT_00280854
#define DAT_00280854 (*(uint8_t *)(0x280854U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280854
#define _DAT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
 * Address: 0x10009910
 */

void * recovered_10009910(void *pointer,ulong size)

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
                    /* WARNING: Could not recover jumptable at 0x10009951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*(code *)(ulong)uVar2)(pointer,size);
      return pvVar3;
    }
  }
  return (void *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280854


#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280854
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009960
 */

undefined8 recovered_10009960(long *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;
  ulong count;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  uVar2 = 0;
  if (((param_1 != (long *)0x0) && (param_2 != 0)) && (*(char *)((long)param_1 + 0x2c) != '\0')) {
    if (((*(long *)(param_2 + 0x30) == 0) || (*(int *)(param_2 + 4) != (int)param_1[4])) ||
       ((*(int *)(param_2 + 8) != *(int *)((long)param_1 + 0x24) ||
        (*(int *)(param_2 + 0xc) != (int)param_1[5])))) {
      uVar2 = 0;
    }
    else {
      lVar6 = (long)*(int *)((long)param_1 + 0x1c);
      uVar2 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_2 + 0xc) >> 8),1);
      if (0 < lVar6) {
        lVar5 = (long)*(int *)((long)param_1 + 0x14);
        lVar1 = param_1[2];
        count = (long)(int)param_1[3] * 4;
        lVar4 = 0;
        do {
          pvVar3 = recovered_10001d60((void *)((ulong)*(uint *)(param_2 + 0xc) * lVar5 +
                                               *(long *)(param_2 + 0x30) + (long)(int)lVar1 * 4),
                                      (void *)(*param_1 + lVar4),count);
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + count;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        uVar2 = CONCAT71((int7)((ulong)pvVar3 >> 8),1);
      }
    }
  }
  return uVar2;
}


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
 * Address: 0x10009a40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009a40(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280850)(*param_1);
  }
  recovered_10002a60(param_1,0,0x30);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ab0
 */

int recovered_10009ab0(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == (int *)0x0) {
    iVar2 = 0;
    iVar1 = 0;
  }
  else {
    iVar2 = *param_1;
    iVar1 = param_1[1];
    if (iVar1 < iVar2) {
      iVar2 = 0;
      iVar1 = 0;
    }
  }
  if (param_2 <= iVar1) {
    iVar1 = param_2;
  }
  if (param_2 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ae0
 */

void recovered_10009ae0(ulong param_1,ulong param_2,int *param_3,int *param_4,int *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  bool bVar9;

  if (param_5 != (int *)0x0) {
    recovered_10002a60(param_5,0,0xbc);
    iVar1 = (int)param_2;
    iVar4 = iVar1 + -2;
    if (param_3 == (int *)0x0) {
      iVar4 = iVar1;
    }
    *(bool *)((long)param_5 + 0x11) = param_4 != (int *)0x0;
    iVar2 = (int)(param_2 >> 0x20);
    iVar6 = iVar2 + -2;
    if (param_4 == (int *)0x0) {
      iVar6 = iVar2;
    }
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    bVar9 = param_3 == (int *)0x0;
    *(bool *)(param_5 + 4) = !bVar9;
    iVar3 = (int)param_1;
    iVar8 = iVar3 + 2;
    if (bVar9) {
      iVar8 = iVar3;
    }
    *param_5 = iVar8;
    iVar8 = (int)(param_1 >> 0x20);
    param_5[1] = iVar8;
    param_5[2] = iVar4;
    param_5[3] = iVar6;
    if (!bVar9) {
      lVar5 = 0xfffffff4;
      if (param_4 == (int *)0x0) {
        lVar5 = 0;
      }
      lVar5 = lVar5 + (param_2 >> 0x20);
      uVar7 = 0xc;
      if (-1 < (int)lVar5) {
        uVar7 = lVar5 << 0x20 | 0xc;
      }
      recovered_10009c30(param_1,uVar7,0,param_3,param_5 + 5);
    }
    if (param_4 != (int *)0x0) {
      iVar4 = 0xc;
      if (param_3 == (int *)0x0) {
        iVar4 = 0;
      }
      uVar7 = (ulong)(uint)(iVar1 - iVar4) + 0xc00000000;
      if (iVar1 - iVar4 < 0) {
        uVar7 = 0xc00000000;
      }
      recovered_10009c30(CONCAT44(iVar2 + iVar8,iVar4 + iVar3) - 0xc00000000,uVar7,1,param_4,
                         param_5 + 0x1a);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c30
 */

void recovered_10009c30(ulong param_1,ulong param_2,int param_3,int *param_4,int *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;

  uVar9 = param_2 >> 0x20;
  uVar4 = param_1 >> 0x20;
  if (param_3 == 1) {
    uVar9 = param_2;
    uVar4 = param_1;
  }
  iVar5 = *param_4;
  iVar11 = param_4[1];
  if (iVar11 < iVar5) {
    iVar5 = 0;
    iVar11 = 0;
  }
  iVar1 = param_4[2];
  iVar13 = iVar1;
  if (iVar11 < iVar1) {
    iVar13 = iVar11;
  }
  if (iVar1 < iVar5) {
    iVar13 = iVar5;
  }
  uVar10 = 1;
  if (1 < param_4[3]) {
    uVar10 = (ulong)(uint)param_4[3];
  }
  if (param_5 != (int *)0x0) {
    iVar1 = (int)uVar4;
    iVar7 = iVar1 + 0x10;
    iVar3 = (int)uVar9;
    uVar8 = iVar3 - 0x20;
    uVar9 = (long)iVar11 - (long)iVar5;
    recovered_10002a60(param_5,0,0x54);
    *param_5 = param_3;
    *(ulong *)(param_5 + 1) = param_1;
    *(ulong *)(param_5 + 3) = param_2;
    *(ulong *)(param_5 + 9) = param_1;
    *(ulong *)(param_5 + 0xb) = param_2;
    *(ulong *)(param_5 + 0xd) = param_1;
    *(ulong *)(param_5 + 0xf) = param_2;
    *(ulong *)(param_5 + 5) = param_1;
    *(ulong *)(param_5 + 7) = param_2;
    uVar14 = 0;
    if (0 < (int)uVar8) {
      uVar14 = uVar8;
    }
    uVar4 = (ulong)(param_3 != 1);
    param_5[uVar4 + 9] = iVar1;
    param_5[uVar4 + 0xb] = 0xe;
    param_5[uVar4 + 0xd] = iVar3 + -0xe + iVar1;
    param_5[uVar4 + 0xf] = 0xe;
    param_5[uVar4 + 5] = iVar7;
    param_5[uVar4 + 7] = uVar14;
    *(undefined8 *)(param_5 + 0x11) = *(undefined8 *)(param_5 + 5);
    *(undefined8 *)(param_5 + 0x13) = *(undefined8 *)(param_5 + 7);
    if (!(iVar3 < 0x21 || (long)uVar9 < 1)) {
      uVar6 = uVar14 * uVar10;
      uVar10 = uVar10 + uVar9;
      if ((uVar6 | uVar10) >> 0x20 == 0) {
        uVar6 = (uVar6 & 0xffffffff) / (uVar10 & 0xffffffff);
      }
      else {
        uVar6 = uVar6 / uVar10;
      }
      uVar10 = 0x7fffffff;
      if (uVar6 < 0x7fffffff) {
        uVar10 = uVar6;
      }
      uVar12 = 0x12;
      if (0x12 < (uint)uVar10) {
        uVar12 = (uint)uVar10;
      }
      if (uVar8 < uVar12) {
        uVar12 = uVar14;
      }
      bVar2 = uVar12 < uVar8;
      uVar8 = uVar12;
      if (bVar2) {
        uVar10 = (long)(int)(uVar14 - uVar12) * ((long)iVar13 - (long)iVar5);
        if ((uVar10 | uVar9) >> 0x20 == 0) {
          iVar5 = (int)((uVar10 & 0xffffffff) / (uVar9 & 0xffffffff));
        }
        else {
          iVar5 = (int)((long)uVar10 / (long)uVar9);
        }
        iVar7 = iVar7 + iVar5;
      }
    }
    param_5[uVar4 + 0x11] = iVar7;
    param_5[uVar4 + 0x13] = uVar8;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e20
 */

int recovered_10009e20(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar8 = *param_2;
  iVar9 = param_2[1];
  if (iVar9 < iVar8) {
    iVar8 = 0;
    iVar9 = 0;
  }
  if (iVar9 <= iVar8 || param_1 == (int *)0x0) {
    return iVar8;
  }
  iVar2 = (int)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20);
  uVar3 = *(ulong *)(param_1 + 0x13) >> 0x20;
  if (*param_1 == 1) {
    iVar2 = (int)*(undefined8 *)(param_1 + 7);
    uVar3 = *(ulong *)(param_1 + 0x13);
  }
  uVar1 = iVar2 - (int)uVar3;
  iVar7 = iVar8;
  if (uVar1 != 0 && (int)uVar3 <= iVar2) {
    uVar3 = *(ulong *)(param_1 + 5) >> 0x20;
    if (*param_1 == 1) {
      uVar3 = *(ulong *)(param_1 + 5);
    }
    uVar6 = (long)param_3 - ((long)param_4 + (long)(int)uVar3);
    uVar3 = 0;
    if (0 < (long)uVar6) {
      uVar3 = uVar6;
    }
    uVar5 = (ulong)uVar1;
    if ((long)uVar5 < (long)uVar6) {
      uVar3 = uVar5;
    }
    uVar3 = ((long)iVar9 - (long)iVar8) * uVar3;
    if (uVar3 >> 0x20 == 0) {
      uVar3 = (uVar3 & 0xffffffff) / uVar5;
    }
    else {
      uVar3 = (long)uVar3 / (long)uVar5;
    }
    lVar4 = uVar3 + (long)iVar8;
    iVar7 = -0x80000000LL;
    if ((-0x80000001LL < lVar4) && (iVar7 = 0x7fffffff, lVar4 < 0x80000000)) {
      iVar2 = (int)lVar4;
      if (iVar2 <= iVar9) {
        iVar9 = iVar2;
      }
      iVar7 = iVar9;
      if (iVar2 < iVar8) {
        iVar7 = iVar8;
      }
    }
  }
  return iVar7;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808bc
#define DAT_002808bc (*(uint8_t *)(0x2808bcU))
#undef DAT_002808c0
#define DAT_002808c0 (*(uint8_t *)(0x2808c0U))
#undef DAT_00280a00
#define DAT_00280a00 (*(uint8_t *)(0x280a00U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_100107f0
#define DAT_100107f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cdU)))
#undef DAT_10012008
#define DAT_10012008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x19e5U)))
#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
#undef PTR_str_100108f9_10012000
#define PTR_str_100108f9_10012000 (*(char * *)(((uintptr_t)pf_module_state + 0x19ddU)))
#undef UNK_100107f8
#define UNK_100107f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d5U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808bc
#define _DAT_002808bc (*(uint *)(0x2808bcU))
#undef _DAT_002808c0
#define _DAT_002808c0 (*(uint *)(0x2808c0U))
#undef _DAT_00280a00
#define _DAT_00280a00 (*(uint *)(0x280a00U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#undef _DAT_100107f0
#define _DAT_100107f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cdU)))
#undef uRam00000000100107f8
#define uRam00000000100107f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d5U)))
#define local_3f78 (*(undefined8 *)(pf_stack_frame + 24))
#define local_3f70 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3f68 (*(undefined8 *)(pf_stack_frame + 40))
#define local_3f58 (*(undefined4 *)(pf_stack_frame + 56))
#define local_3d88 (*(int (*)[3938])(pf_stack_frame + 520))
#define local_70 (*(undefined8 *)(pf_stack_frame + 16160))
#define local_68 (*(undefined4 *)(pf_stack_frame + 16168))
#define local_60 (*(undefined8 *)(pf_stack_frame + 16176))
#define uStack_3f60 (*(undefined8 *)(pf_stack_frame + 48))
#define local_50 (*(undefined4 *)(pf_stack_frame + 16192))
#define local_48 (*(undefined8 *)(pf_stack_frame + 16200))
#define local_3c (*(int *)(pf_stack_frame + 16212))
#define local_38 (*(undefined4 *)(pf_stack_frame + 16216))
#define local_34 (*(uint *)(pf_stack_frame + 16220))
#define uStack_58 (*(undefined8 *)(pf_stack_frame + 16184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a00
#define DAT_00280a00 (*(uint8_t *)(0x280a00U))
#undef DAT_100107f0
#define DAT_100107f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cdU)))
#undef DAT_10012008
#define DAT_10012008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x19e5U)))
#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
#undef PTR_str_100108f9_10012000
#define PTR_str_100108f9_10012000 (*(char * *)(((uintptr_t)pf_module_state + 0x19ddU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram0000000000280a00
#define Ram0000000000280a00 (*(uint32_t *)(0x280a00U))
#undef UINT_002808bc
#define UINT_002808bc (*(uint *)(0x2808bcU))
#undef UINT_002808c0
#define UINT_002808c0 (*(uint *)(0x2808c0U))
#undef UINT_00280a04
#define UINT_00280a04 (*(uint *)(0x280a04U))
#undef UNK_100107f8
#define UNK_100107f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d5U)))
#undef _DAT_100107f0
#define _DAT_100107f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cdU)))
#undef uRam00000000100107f8
#define uRam00000000100107f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d5U)))
#define local_3f78 (*(undefined8 *)(pf_stack_frame + 24))
#define local_3f70 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3f68 (*(undefined8 *)(pf_stack_frame + 40))
#define local_3f58 (*(undefined4 *)(pf_stack_frame + 56))
#define local_3d88 (*(int (*)[3938])(pf_stack_frame + 520))
#define local_70 (*(undefined8 *)(pf_stack_frame + 16160))
#define local_68 (*(undefined4 *)(pf_stack_frame + 16168))
#define local_60 (*(undefined8 *)(pf_stack_frame + 16176))
#define uStack_3f60 (*(undefined8 *)(pf_stack_frame + 48))
#define local_50 (*(undefined4 *)(pf_stack_frame + 16192))
#define local_48 (*(undefined8 *)(pf_stack_frame + 16200))
#define local_3c (*(int *)(pf_stack_frame + 16212))
#define local_38 (*(undefined4 *)(pf_stack_frame + 16216))
#define local_34 (*(uint *)(pf_stack_frame + 16220))
#define uStack_58 (*(undefined8 *)(pf_stack_frame + 16184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
recovered_10009f20(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[16304] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;

  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (DAT_10013474 != '\0') goto LAB_1000a2ac;
  lVar9 = 0;
  local_48 = param_2;
  local_3c = param_3;
  local_38 = param_4;
  do {
    iVar5 = Ram0000000000280800;
    if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
        (uVar3 = Ram0000000000280808, 0xb < uVar3)) && (uVar3 = Ram0000000000280808, 0x207 < uVar3))
    {
      uVar3 = UINT_00280a04;
      if (((code *)(ulong)uVar3 != (code *)0x0) &&
         (uVar3 = (*(code *)(ulong)uVar3)
                            (*(char **)((long)&PTR_str_100108f9_10012000 + lVar9),&local_70),
         uVar3 != 0)) goto LAB_1000a1ac;
    }
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x490);
  iVar5 = Ram0000000000280800;
  iVar4 = -1;
  if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
     ((uVar3 = Ram0000000000280808, 0xb < uVar3 && (uVar3 = Ram0000000000280808, 0xbf < uVar3)))) {
    uVar3 = UINT_002808bc;
    if (((((code *)(ulong)uVar3 == (code *)0x0) || (iVar4 = (*(code *)(ulong)uVar3)(), iVar4 < 0))
        || (iVar5 = Ram0000000000280800, iVar5 != 0x50414d57)) ||
       (((iVar5 = Ram0000000000280804, iVar5 == 0 || (uVar3 = Ram0000000000280808, uVar3 < 0xc)) ||
        (uVar3 = Ram0000000000280808, uVar3 < 0x204)))) goto LAB_1000a094;
    uVar3 = Ram0000000000280a00;
    if (((code *)(ulong)uVar3 == (code *)0x0) ||
       (iVar5 = (*(code *)(ulong)uVar3)(iVar4), iVar5 == 0)) goto LAB_1000a094;
  }
  else {
LAB_1000a094:
    local_34 = 0;
    iVar5 = Ram0000000000280800;
    if ((iVar5 == 0x50414d57) &&
       (((iVar5 = Ram0000000000280804, iVar5 != 0 && (uVar3 = Ram0000000000280808, 0xb < uVar3)) &&
        (uVar3 = Ram0000000000280808, 0xc3 < uVar3)))) {
      uVar3 = UINT_002808c0;
      if (((code *)(ulong)uVar3 != (code *)0x0) &&
         (uVar3 = (*(code *)(ulong)uVar3)(&local_3f78,0x20,&local_34), uVar3 != 0)) {
        if (local_34 < 0x21) {
          if (local_34 == 0) goto LAB_1000a1ac;
        }
        else {
          local_34 = 0x20;
        }
        piVar8 = local_3d88;
        uVar10 = 0;
        uVar3 = local_34;
        do {
          if (((*piVar8 != iVar4) && (iVar5 = Ram0000000000280800, iVar5 == 0x50414d57)) &&
             ((iVar5 = Ram0000000000280804, iVar5 != 0 &&
              ((uVar6 = Ram0000000000280808, 0xb < uVar6 &&
               (uVar6 = Ram0000000000280808, 0x203 < uVar6)))))) {
            uVar6 = Ram0000000000280a00;
            if ((code *)(ulong)uVar6 != (code *)0x0) {
              iVar5 = (*(code *)(ulong)uVar6)();
              if (iVar5 != 0) break;
              uVar3 = local_34;
            }
          }
          uVar10 = uVar10 + 1;
          piVar8 = piVar8 + 0x7e;
        } while (uVar10 < uVar3);
      }
    }
  }
LAB_1000a1ac:
  lVar9 = 0;
  do {
    local_3f78 = 0;
    local_3f70 = 0;
    local_3f68 = 0;
    uStack_3f60 = 0;
    local_3f58 = 0;
    uVar3 = (&DAT_10012008)[lVar9];
    iVar5 = Ram0000000000280800;
    PF_PART4(local_3f78, 4) = 0;
    bVar1 = false;
    if (iVar5 == 0x50414d57) {
      iVar5 = Ram0000000000280804;
      if (iVar5 == 0) {
LAB_1000a1c0:
        PF_PART4(local_3f78, 4) = 0;
        bVar1 = false;
      }
      else {
        uVar6 = Ram0000000000280808;
        PF_PART4(local_3f78, 4) = 0;
        if (0xb < uVar6) {
          uVar6 = Ram0000000000280808;
          PF_PART4(local_3f78, 4) = 0;
          if (0x207 < uVar6) {
            uVar6 = UINT_00280a04;
            if ((code *)(ulong)uVar6 == (code *)0x0) goto LAB_1000a1c0;
            uVar6 = (*(code *)(ulong)uVar6)
                              (*(char **)((long)&PTR_str_100108f9_10012000 + lVar9 * 4),&local_3f78)
            ;
            bVar1 = (int)local_3f78 == 1 && uVar6 != 0;
          }
        }
      }
    }
    uVar6 = PF_PART4(local_3f78, 4);
    if (0xffffff < PF_PART4(local_3f78, 4)) {
      uVar6 = uVar3;
    }
    if (!bVar1) {
      uVar6 = uVar3;
    }
    *(uint *)((long)&DAT_10013350 + lVar9) = uVar6;
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x124);
  DAT_10013474 = '\x01';
  param_2 = local_48;
  param_4 = local_38;
  param_3 = local_3c;
LAB_1000a2ac:
  recovered_10002a60(param_1,0,0x48);
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  *(int *)(param_1 + 2) = param_3 << 2;
  uVar7 = 0xf6f6f6;
  if (DAT_10013474 != '\0') {
    uVar7 = DAT_10013350;
  }
  *(undefined4 *)((long)param_1 + 0x14) = uVar7;
  uVar2 = uRam00000000100107f8;
  param_1[3] = _DAT_100107f0;
  param_1[4] = uVar2;
  return param_1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a00
#undef DAT_100107f0
#undef DAT_10012008
#undef DAT_10013350
#undef DAT_10013474
#undef PTR_str_100108f9_10012000
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram0000000000280a00
#undef UINT_002808bc
#undef UINT_002808c0
#undef UINT_00280a04
#undef UNK_100107f8
#undef _DAT_100107f0
#undef uRam00000000100107f8
#undef local_3f78
#undef local_3f70
#undef local_3f68
#undef local_3f58
#undef local_3d88
#undef local_70
#undef local_68
#undef local_60
#undef uStack_3f60
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef local_34
#undef uStack_58


#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808bc
#undef DAT_002808c0
#undef DAT_00280a00
#undef DAT_00280a04
#undef DAT_100107f0
#undef DAT_10012008
#undef DAT_10013350
#undef DAT_10013474
#undef PTR_str_100108f9_10012000
#undef UNK_100107f8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808bc
#undef _DAT_002808c0
#undef _DAT_00280a00
#undef _DAT_00280a04
#undef _DAT_100107f0
#undef uRam00000000100107f8
#undef local_3f78
#undef local_3f70
#undef local_3f68
#undef local_3f58
#undef local_3d88
#undef local_70
#undef local_68
#undef local_60
#undef uStack_3f60
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef local_34
#undef uStack_58

#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
#define in_stack_00000024 (*(undefined4 *)(pf_stack_frame + 68))
#define in_stack_00000028 (*(undefined8 *)(pf_stack_frame + 72))
#define in_stack_00000030 (*(undefined8 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(undefined8 *)(pf_stack_frame + 88))
#define in_stack_00000040 (*(undefined8 *)(pf_stack_frame + 96))
#define in_stack_00000048 (*(undefined8 *)(pf_stack_frame + 104))
#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a310
 */

undefined8 * recovered_1000a310(undefined8 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 100;
  if (param_2 < 100) {
    uVar1 = param_2;
  }
  param_1[8] = in_stack_00000048;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[4] = in_stack_00000028;
  param_1[5] = in_stack_00000030;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[2] = in_stack_00000018;
  *(uint *)(param_1 + 3) = uVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = in_stack_00000024;
  return param_1;
}

#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000024
#undef in_stack_00000028
#undef in_stack_00000030
#undef in_stack_00000038
#undef in_stack_00000040
#undef in_stack_00000048
#undef in_stack_00000008

#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(undefined4 *)(pf_stack_frame + 64))
#define in_stack_00000028 (*(undefined8 *)(pf_stack_frame + 72))
#define in_stack_00000030 (*(undefined8 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(undefined8 *)(pf_stack_frame + 88))
#define in_stack_00000040 (*(undefined8 *)(pf_stack_frame + 96))
#define in_stack_00000048 (*(undefined8 *)(pf_stack_frame + 104))
#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a360
 */

undefined8 * recovered_1000a360(undefined8 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 100;
  if (param_2 < 100) {
    uVar1 = param_2;
  }
  param_1[8] = in_stack_00000048;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[4] = in_stack_00000028;
  param_1[5] = in_stack_00000030;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[2] = in_stack_00000018;
  *(undefined4 *)(param_1 + 3) = in_stack_00000020;
  *(uint *)((long)param_1 + 0x1c) = uVar1;
  return param_1;
}

#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000028
#undef in_stack_00000030
#undef in_stack_00000038
#undef in_stack_00000040
#undef in_stack_00000048
#undef in_stack_00000008

#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(undefined8 *)(pf_stack_frame + 64))
#define in_stack_00000030 (*(undefined8 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(undefined8 *)(pf_stack_frame + 88))
#define in_stack_00000040 (*(undefined8 *)(pf_stack_frame + 96))
#define in_stack_00000048 (*(undefined8 *)(pf_stack_frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3b0
 */

undefined8 * recovered_1000a3b0(undefined8 *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = -1;
  if (param_2 + 1U < 5) {
    iVar1 = param_2;
  }
  uVar2 = 100;
  if (param_3 < 100) {
    uVar2 = param_3;
  }
  param_1[8] = in_stack_00000048;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  *(int *)(param_1 + 4) = iVar1;
  *(uint *)((long)param_1 + 0x24) = uVar2;
  param_1[5] = in_stack_00000030;
  return param_1;
}

#undef in_stack_00000008
#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000030
#undef in_stack_00000038
#undef in_stack_00000040
#undef in_stack_00000048

#define in_stack_00000048 (*(undefined8 *)(pf_stack_frame + 104))
#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(undefined8 *)(pf_stack_frame + 64))
#define in_stack_00000030 (*(undefined8 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(undefined8 *)(pf_stack_frame + 88))
#define in_stack_00000040 (*(undefined8 *)(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a410
 */

undefined8 * recovered_1000a410(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[5] = in_stack_00000030;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[8] = in_stack_00000048;
  param_1[4] = 0;
  return param_1;
}

#undef in_stack_00000048
#undef in_stack_00000008
#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000030
#undef in_stack_00000038
#undef in_stack_00000040

#define in_stack_00000048 (*(undefined8 *)(pf_stack_frame + 104))
#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(undefined8 *)(pf_stack_frame + 64))
#define in_stack_00000030 (*(undefined8 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(undefined8 *)(pf_stack_frame + 88))
#define in_stack_00000040 (*(undefined8 *)(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a440
 */

undefined8 * recovered_1000a440(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[5] = in_stack_00000030;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[8] = in_stack_00000048;
  param_1[4] = 1;
  return param_1;
}

#undef in_stack_00000048
#undef in_stack_00000008
#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000030
#undef in_stack_00000038
#undef in_stack_00000040

#define in_stack_00000040 (*(undefined8 *)(pf_stack_frame + 96))
#define in_stack_00000048 (*(undefined8 *)(pf_stack_frame + 104))
#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(undefined8 *)(pf_stack_frame + 64))
#define in_stack_00000030 (*(undefined8 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(undefined8 *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a470
 */

undefined8 * recovered_1000a470(undefined8 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[5] = in_stack_00000030;
  param_1[6] = in_stack_00000038;
  uVar1 = 100;
  if (param_2 < 100) {
    uVar1 = param_2;
  }
  param_1[7] = in_stack_00000040;
  param_1[8] = in_stack_00000048;
  *(undefined4 *)(param_1 + 4) = 2;
  *(uint *)((long)param_1 + 0x24) = uVar1;
  return param_1;
}

#undef in_stack_00000040
#undef in_stack_00000048
#undef in_stack_00000008
#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000030
#undef in_stack_00000038

#define in_stack_00000040 (*(undefined8 *)(pf_stack_frame + 96))
#define in_stack_00000048 (*(undefined8 *)(pf_stack_frame + 104))
#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(undefined8 *)(pf_stack_frame + 64))
#define in_stack_00000030 (*(undefined8 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(undefined8 *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4b0
 */

undefined8 * recovered_1000a4b0(undefined8 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[5] = in_stack_00000030;
  param_1[6] = in_stack_00000038;
  uVar1 = 100;
  if (param_2 < 100) {
    uVar1 = param_2;
  }
  param_1[7] = in_stack_00000040;
  param_1[8] = in_stack_00000048;
  *(undefined4 *)(param_1 + 4) = 3;
  *(uint *)((long)param_1 + 0x24) = uVar1;
  return param_1;
}

#undef in_stack_00000040
#undef in_stack_00000048
#undef in_stack_00000008
#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000030
#undef in_stack_00000038

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_002808a0
#define DAT_002808a0 (*(uint8_t *)(0x2808a0U))
#undef DAT_00280964
#define DAT_00280964 (*(uint8_t *)(0x280964U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
#undef _DAT_002808a0
#define _DAT_002808a0 (*(uint *)(0x2808a0U))
#undef _DAT_00280964
#define _DAT_00280964 (*(uint *)(0x280964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000a4f0(int *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;

  if (param_2 == (undefined8 *)0x0 || param_1 == (int *)0x0) {
    return 0;
  }
  uVar23 = *(uint *)(param_2 + 1);
  uVar16 = (ulong)uVar23;
  if (uVar16 == 0) {
    return 0;
  }
  uVar17 = *(uint *)((long)param_2 + 0xc);
  uVar20 = (ulong)uVar17;
  if (uVar20 == 0) {
    return 0;
  }
  uVar6 = *param_2;
  uVar25 = *(uint *)(param_2 + 2);
  iVar12 = *(int *)((long)param_2 + 0x14);
  uVar1 = *(uint *)(param_2 + 3);
  uVar2 = *(uint *)((long)param_2 + 0x1c);
  iVar3 = *(int *)(param_2 + 4);
  uVar4 = *(uint *)((long)param_2 + 0x24);
  puVar7 = (undefined *)param_2[5];
  puVar8 = (undefined *)param_2[6];
  puVar9 = (undefined *)param_2[7];
  uVar5 = *(uint *)(param_2 + 8);
  uVar18 = uVar20 * uVar16;
  if (uVar18 < 0x40000000) {
LAB_1000a75c:
    if (uVar25 == 0) goto LAB_1000a771;
  }
  else {
    uVar19 = 0x4000000000000000;
    if (uVar23 < uVar17) {
      uVar13 = uVar20 * 0x3fffffff;
      if ((uVar13 & 0x3fffffff00000000) == 0) {
        uVar13 = (uVar13 & 0xffffffff) / uVar16;
      }
      else {
        uVar13 = uVar13 / uVar16;
      }
      do {
        uVar22 = uVar19;
        uVar19 = uVar22 >> 2;
      } while (uVar13 < uVar22);
      if (uVar22 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          uVar24 = uVar19 + uVar22;
          uVar21 = uVar22;
          if (uVar13 < uVar24) {
            uVar24 = 0;
            uVar21 = 0;
          }
          uVar13 = uVar13 - uVar24;
          uVar19 = uVar21 + (uVar19 >> 1);
          bVar10 = 3 < uVar22;
          uVar22 = uVar22 >> 2;
        } while (bVar10);
      }
      uVar13 = (ulong)((int)uVar19 + (uint)((int)uVar19 == 0));
      uVar16 = uVar16 * uVar13;
      if (uVar16 >> 0x20 == 0) {
        uVar16 = (uVar16 & 0xffffffff) / (ulong)uVar17;
      }
      else {
        uVar16 = uVar16 / uVar20;
      }
      uVar19 = 1;
      if (1 < (uint)uVar16) {
        uVar19 = uVar16 & 0xffffffff;
      }
    }
    else {
      uVar13 = (uintptr_t)uVar16 * 0x3fffffff;
      if ((uVar13 & 0x3fffffff00000000) == 0) {
        uVar13 = (uVar13 & 0xffffffff) / (ulong)uVar17;
      }
      else {
        uVar13 = uVar13 / uVar20;
      }
      do {
        uVar22 = uVar19;
        uVar19 = uVar22 >> 2;
      } while (uVar13 < uVar22);
      if (uVar22 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          uVar24 = uVar19 + uVar22;
          uVar21 = uVar22;
          if (uVar13 < uVar24) {
            uVar24 = 0;
            uVar21 = 0;
          }
          uVar13 = uVar13 - uVar24;
          uVar19 = uVar21 + (uVar19 >> 1);
          bVar10 = 3 < uVar22;
          uVar22 = uVar22 >> 2;
        } while (bVar10);
      }
      uVar19 = (ulong)((int)uVar19 + (uint)((int)uVar19 == 0));
      uVar20 = uVar20 * uVar19;
      if (uVar20 >> 0x20 == 0) {
        uVar20 = (uVar20 & 0xffffffff) / (ulong)uVar23;
      }
      else {
        uVar20 = uVar20 / uVar16;
      }
      uVar13 = 1;
      if (1 < (uint)uVar20) {
        uVar13 = uVar20 & 0xffffffff;
      }
    }
    if (0x3fffffff < uVar13 * uVar19) {
      if ((uint)uVar19 < (uint)uVar13) {
        uVar13 = 0x3fffffff / uVar19;
      }
      else {
        uVar19 = 0x3fffffff / uVar13;
      }
    }
    if (((uint)uVar19 == uVar23) && ((uint)uVar13 == uVar17)) goto LAB_1000a75c;
    uVar18 = uVar13 * uVar19;
    uVar23 = (uint)uVar19;
    uVar17 = (uint)uVar13;
LAB_1000a771:
    uVar25 = uVar23 * 4;
  }
  if (uVar17 == 0) {
    return 0;
  }
  if (uVar23 + 0xc0000000 < 0xc0000001) {
    return 0;
  }
  if (0x3fffffff < uVar18) {
    return 0;
  }
  uVar15 = uVar25;
  if (uVar25 == 0) {
    uVar15 = uVar23 * 4;
  }
  if (uVar15 < uVar23 * 4) {
    return 0;
  }
  uVar16 = (ulong)uVar15 * (ulong)uVar17;
  if ((int)(uVar16 >> 0x20) != 0) {
    return 0;
  }
  recovered_10002a60(param_1,0,0x350);
  if (_DAT_00280800 == 0x50414d57) {
    if (_DAT_00280804 == 0) {
      return 0;
    }
    if (_DAT_00280808 < 0xc) {
      return 0;
    }
    if (_DAT_00280808 < 0xa4) {
      return 0;
    }
    if ((code *)(ulong)_DAT_002808a0 == (code *)0x0) {
      return 0;
    }
    iVar11 = (*(code *)(ulong)_DAT_002808a0)(uVar6,uVar23,uVar17);
    if (iVar11 == 0) {
      return 0;
    }
    *param_1 = iVar11;
    param_1[1] = uVar23;
    param_1[2] = uVar17;
    param_1[3] = uVar25;
    param_1[4] = iVar12;
    uVar23 = 100;
    if (uVar1 < 100) {
      uVar23 = uVar1;
    }
    uVar17 = 0xf;
    if (uVar1 != 0xffffffff) {
      uVar17 = uVar23;
    }
    param_1[5] = uVar17;
    uVar23 = 100;
    if (uVar2 < 100) {
      uVar23 = uVar2;
    }
    uVar17 = 0;
    if (uVar2 != 0xffffffff) {
      uVar17 = uVar23;
    }
    iVar12 = -1;
    if (iVar3 + 1U < 5) {
      iVar12 = iVar3;
    }
    param_1[6] = uVar17;
    uVar23 = 100;
    if (uVar4 < 100) {
      uVar23 = uVar4;
    }
    param_1[7] = iVar12;
    param_1[8] = uVar23;
    *(undefined8 *)(param_1 + 0xe) = uVar6;
    if ((uVar5 & 1) == 0) {
LAB_1000a8e6:
      if ((puVar7 != (undefined *)0x0 || puVar8 != (undefined *)0x0) || puVar9 != (undefined *)0x0)
      {
        recovered_1000aae0(param_1,puVar7,puVar8,puVar9);
      }
      if ((uVar1 & uVar2) != 0xffffffff) {
        recovered_1000ab50(param_1,param_1[5],param_1[6]);
      }
      uVar23 = param_1[7];
      if (uVar23 == 0xffffffff) {
        return iVar11;
      }
      if (*param_1 == 0) {
        return iVar11;
      }
      uVar17 = 0xffffffff;
      if (uVar23 < 4) {
        uVar17 = uVar23;
      }
      uVar25 = 100;
      if ((uint)param_1[8] < 100) {
        uVar25 = param_1[8];
      }
      uVar16 = 0;
      if (uVar23 < 4) {
        uVar23 = param_1[2];
        if ((uint)param_1[1] < (uint)param_1[2]) {
          uVar23 = param_1[1];
        }
        uVar16 = (ulong)(uVar23 * uVar25 + 0x32) / 100;
      }
      if (_DAT_00280800 != 0x50414d57) {
        return iVar11;
      }
      if (_DAT_00280804 == 0) {
        return iVar11;
      }
      if (_DAT_00280808 < 0xc) {
        return iVar11;
      }
      if (_DAT_00280808 < 0x168) {
        return iVar11;
      }
      if ((code *)(ulong)_DAT_00280964 == (code *)0x0) {
        return iVar11;
      }
      iVar12 = (*(code *)(ulong)_DAT_00280964)(*param_1,uVar17,uVar16);
      if (iVar12 == 0) {
        return iVar11;
      }
      param_1[7] = uVar17;
      param_1[8] = uVar25;
      return iVar11;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))) {
      lVar14 = (*(code *)(ulong)_DAT_0028084c)(uVar16 & 0xffffffff);
      *(long *)(param_1 + 0xc) = lVar14;
      if (lVar14 != 0) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
        param_1[10] = (int)uVar16;
        goto LAB_1000a8e6;
      }
    }
    else {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
    recovered_1000aa90(iVar11);
    recovered_10002a60(param_1,0,0x350);
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_002808a0
#undef DAT_00280964
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_002808a0
#undef _DAT_00280964

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808a8
#define DAT_002808a8 (*(uint8_t *)(0x2808a8U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808a8
#define _DAT_002808a8 (*(uint *)(0x2808a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000aa90(uint windowId)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xab < _DAT_00280808 && ((code *)(ulong)_DAT_002808a8 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000aad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_002808a8)(windowId);
    return;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808a8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808a8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808ec
#define DAT_002808ec (*(uint8_t *)(0x2808ecU))
#undef DAT_1001080b
#define DAT_1001080b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808ec
#define _DAT_002808ec (*(uint *)(0x2808ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000aae0(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (param_2 == (undefined *)0x0) {
      param_2 = &DAT_1001080b;
    }
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_1001080b;
    }
    if (param_4 == (undefined *)0x0) {
      param_4 = &DAT_1001080b;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0xef < _DAT_00280808 && ((code *)(ulong)_DAT_002808ec != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000ab4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)_DAT_002808ec)(*param_1,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808ec
#undef DAT_1001080b
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808ec

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280960
#define DAT_00280960 (*(uint8_t *)(0x280960U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280960
#define _DAT_00280960 (*(uint *)(0x280960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000ab50(int *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar3 = 100;
    if (param_3 < 100) {
      uVar3 = param_3;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x163 < _DAT_00280808 && ((code *)(ulong)_DAT_00280960 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00280960)
                        (*param_1,(param_2 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                         (uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[5] = param_2;
        param_1[6] = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280960
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280960

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
 * Address: 0x1000ac20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000ac20(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar4 = -1;
    if (param_2 + 1U < 5) {
      iVar4 = param_2;
    }
    uVar6 = 100;
    if (param_3 < 100) {
      uVar6 = param_3;
    }
    uVar2 = 0;
    uVar3 = 0;
    if (iVar4 != -1) {
      uVar5 = param_1[2];
      if ((uint)param_1[1] < (uint)param_1[2]) {
        uVar5 = param_1[1];
      }
      uVar3 = (ulong)(uVar5 * uVar6 + 0x32) / 100;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x167 < _DAT_00280808 && ((code *)(ulong)_DAT_00280964 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00280964)(*param_1,iVar4,uVar3);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[7] = iVar4;
        param_1[8] = uVar6;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
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
#undef DAT_002808a4
#define DAT_002808a4 (*(uint8_t *)(0x2808a4U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808a4
#define _DAT_002808a4 (*(uint *)(0x2808a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000acf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_1000acf0(int *param_1,byte *param_2,long param_3,uint param_4,ulong param_5,uint param_6,
                  uint param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  uint uVar12;

  uVar3 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    param_1[0x12] = 0;
    if (param_4 == 0) {
      param_4 = param_1[1];
    }
    if ((int)param_5 == 0) {
      param_5 = (ulong)(uint)param_1[2];
    }
    uVar1 = param_4 * 4;
    if (param_6 != 0) {
      uVar1 = param_6;
    }
    uVar11 = (ulong)uVar1;
    uVar6 = (uint)param_5;
    if ((((param_5 & 0xffffffff) * (ulong)param_4 < 0x40000000) &&
        (0xc0000000 < param_4 + 0xc0000000 && uVar6 != 0)) &&
       (uVar4 = (ulong)param_4 * 4, uVar4 <= uVar11)) {
      if (param_2 == (byte *)0x0) {
        param_2 = *(byte **)(param_1 + 0xe);
      }
      uVar12 = ((param_7 >> 0x10 & 0xff ^
                (param_7 >> 8 & 0xff ^
                (param_7 & 0xff ^
                ((uVar1 >> 0x10 & 0xff ^
                 (uVar1 >> 8 & 0xff ^
                 (uVar1 & 0xff ^
                 (((uint)(param_5 >> 0x10) & 0xff ^
                  ((uint)(byte)(param_5 >> 8) ^
                  (uVar6 & 0xff ^
                  ((param_4 >> 0x10 & 0xff ^
                   (param_4 >> 8 & 0xff ^ (param_4 & 0xff ^ 0x811c9dc5) * 0x1000193) * 0x1000193) *
                   0x1000193 ^ param_4 >> 0x18) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^
                 uVar6 >> 0x18) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^ uVar1 >> 0x18)
                * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^ param_7 >> 0x18) * 0x1000193;
      if ((param_2 != (byte *)0x0) && (bVar10 = *param_2, bVar10 != 0)) {
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          uVar12 = (bVar10 ^ uVar12) * 0x1000193;
          bVar10 = *pbVar7;
        } while (bVar10 != 0);
      }
      if (param_3 != 0) {
        lVar8 = (uVar6 - 1) * uVar11;
        if (lVar8 + uVar4 != 0) {
          uVar9 = (ulong)((uint)lVar8 & 3);
          if ((lVar8 + uVar4) - 1 < 3) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            do {
              uVar12 = ((uint)*(byte *)(param_3 + 3 + lVar5) ^
                       ((uint)*(byte *)(param_3 + 2 + lVar5) ^
                       ((uint)*(byte *)(param_3 + 1 + lVar5) ^
                       (*(byte *)(param_3 + lVar5) ^ uVar12) * 0x1000193) * 0x1000193) * 0x1000193)
                       * 0x1000193;
              lVar5 = lVar5 + 4;
            } while ((lVar8 + uVar4) - uVar9 != lVar5);
          }
          if (uVar9 != 0) {
            uVar4 = 0;
            do {
              uVar12 = (*(byte *)(lVar5 + param_3 + uVar4) ^ uVar12) * 0x1000193;
              uVar4 = uVar4 + 1;
            } while (uVar9 != uVar4);
          }
        }
      }
      if ((param_1[0x11] == 0) || (uVar12 != param_1[0x10])) {
        if (_DAT_00280800 != 0x50414d57) {
          return 0;
        }
        if (_DAT_00280804 == 0) {
          return 0;
        }
        if (_DAT_00280808 < 0xc) {
          return 0;
        }
        if (_DAT_00280808 < 0xa8) {
          return 0;
        }
        if ((code *)(ulong)_DAT_002808a4 == (code *)0x0) {
          return 0;
        }
        iVar2 = (*(code *)(ulong)_DAT_002808a4)
                          (*param_1,param_2,param_3,param_4,param_5,uVar11,param_7);
        if (iVar2 == 0) {
          return 0;
        }
        param_1[0x10] = uVar12;
        param_1[0x11] = 1;
      }
      *(byte **)(param_1 + 0xe) = param_2;
      param_1[1] = param_4;
      param_1[2] = uVar6;
      param_1[3] = uVar1;
      param_1[4] = param_7;
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808a4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808a4

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a14
#define DAT_00280a14 (*(uint8_t *)(0x280a14U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a14
#define _DAT_00280a14 (*(uint *)(0x280a14U))
#define local_2c (*(uint *)(pf_stack_frame + 20))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(ulong *)(pf_stack_frame + 32))
#define local_18 (*(ulong *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
#undef UINT_00280a14
#define UINT_00280a14 (*(uint *)(0x280a14U))
#define local_2c (*(uint *)(pf_stack_frame + 20))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(ulong *)(pf_stack_frame + 32))
#define local_18 (*(ulong *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b050
 */

undefined8 recovered_1000b050(int *param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pixels;
  ulong uVar5;
  uint uVar6;

  uVar4 = 0;
  if (param_1 != (int *)0x0) {
    pixels = *(void **)(param_1 + 0xc);
    if (((0 < (int)(param_3 >> 0x20) &&
         (0 < (int)(uint)param_3 && (param_2 & 0x8000000080000000) == 0)) && pixels != (void *)0x0)
       && (uVar3 = param_1[1], ((uint)param_3 & 0x7fffffff) + ((uint)param_2 & 0x7fffffff) <= uVar3)
       ) {
      local_28 = param_1[2];
      uVar5 = (ulong)local_28;
      if ((param_3 >> 0x20) + (param_2 >> 0x20) <= uVar5) {
        param_1[0x12] = 0;
        uVar6 = param_1[3];
        iVar1 = Ram0000000000280800;
        local_2c = uVar3;
        local_24 = uVar6;
        local_20 = param_2;
        local_18 = param_3;
        if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
            (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
           (uVar2 = Ram0000000000280808, 0x217 < uVar2)) {
          uVar2 = UINT_00280a14;
          if ((code *)(ulong)uVar2 != (code *)0x0) {
            uVar3 = (*(code *)(ulong)uVar2)(*param_1,pixels,&local_2c);
            if (uVar3 != 0) {
              param_1[0x11] = 0;
              return 1;
            }
            pixels = *(void **)(param_1 + 0xc);
            uVar3 = param_1[1];
            uVar5 = (ulong)(uint)param_1[2];
            uVar6 = param_1[3];
          }
        }
        uVar4 = recovered_1000acf0(param_1,*(byte **)(param_1 + 0xe),(long)pixels,uVar3,uVar5,uVar6,
                                   param_1[4]);
      }
    }
  }
  return uVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280a14
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_18


#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a14
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a14
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1a0
 */

undefined8 recovered_1000b1a0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = recovered_1000acf0(param_1,*(byte **)(param_1 + 0xe),*(long *)(param_1 + 0xc),param_1[1],
                             (ulong)(uint)param_1[2],param_1[3],param_1[4]);
  return uVar1;
}


#undef DAT_10013350
#define DAT_10013350 (*(uint *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1e0
 */

undefined8 recovered_1000b1e0(int *param_1,byte *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  if (param_3 == (uint *)0x0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    uVar1 = 0xf6f6f6;
    if (DAT_10013474 != '\0') {
      uVar1 = DAT_10013350;
    }
  }
  else {
    uVar1 = param_1[4];
  }
  uVar2 = recovered_1000acf0(param_1,param_2,*(long *)(param_3 + 4),*param_3,(ulong)param_3[1],
                             param_3[2],uVar1);
  return uVar2;
}

#undef DAT_10013350
#undef DAT_10013474

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280854
#define DAT_00280854 (*(uint8_t *)(0x280854U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280854
#define _DAT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000b230(int *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  bool bVar14;

  uVar9 = (ulong)param_3;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar6 = (ulong)param_2;
  if (param_2 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  uVar8 = (ulong)param_3;
  uVar4 = uVar6;
  if (0x3fffffff < uVar8 * uVar6) {
    uVar9 = 0x4000000000000000;
    if (param_2 < param_3) {
      uVar4 = uVar8 * 0x3fffffff;
      if ((uVar4 & 0x3fffffff00000000) == 0) {
        uVar4 = (uVar4 & 0xffffffff) / (ulong)param_2;
      }
      else {
        uVar4 = uVar4 / uVar6;
      }
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 >> 2;
      } while (uVar4 < uVar11);
      if (uVar11 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          uVar12 = uVar9 + uVar11;
          uVar10 = uVar11;
          if (uVar4 < uVar12) {
            uVar12 = 0;
            uVar10 = 0;
          }
          uVar4 = uVar4 - uVar12;
          uVar9 = uVar10 + (uVar9 >> 1);
          bVar14 = 3 < uVar11;
          uVar11 = uVar11 >> 2;
        } while (bVar14);
      }
      uVar9 = (ulong)((int)uVar9 + (uint)((int)uVar9 == 0));
      uVar6 = uVar6 * uVar9;
      if (uVar6 >> 0x20 == 0) {
        uVar3 = (uint)((uVar6 & 0xffffffff) / uVar8);
      }
      else {
        uVar3 = (uint)(uVar6 / uVar8);
      }
      uVar4 = 1;
      if (1 < uVar3) {
        uVar4 = (ulong)uVar3;
      }
    }
    else {
      uVar4 = (uintptr_t)uVar6 * 0x3fffffff;
      if ((uVar4 & 0x3fffffff00000000) == 0) {
        uVar4 = (uVar4 & 0xffffffff) / uVar8;
      }
      else {
        uVar4 = uVar4 / uVar8;
      }
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 >> 2;
      } while (uVar4 < uVar11);
      if (uVar11 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          uVar12 = uVar9 + uVar11;
          uVar10 = uVar11;
          if (uVar4 < uVar12) {
            uVar12 = 0;
            uVar10 = 0;
          }
          uVar4 = uVar4 - uVar12;
          uVar9 = uVar10 + (uVar9 >> 1);
          bVar14 = 3 < uVar11;
          uVar11 = uVar11 >> 2;
        } while (bVar14);
      }
      uVar4 = (ulong)((int)uVar9 + (uint)((int)uVar9 == 0));
      uVar8 = uVar8 * uVar4;
      if (uVar8 >> 0x20 == 0) {
        uVar3 = (uint)((uVar8 & 0xffffffff) / (ulong)param_2);
      }
      else {
        uVar3 = (uint)(uVar8 / uVar6);
      }
      uVar9 = 1;
      if (1 < uVar3) {
        uVar9 = (ulong)uVar3;
      }
    }
    if (0x3fffffff < uVar9 * uVar4) {
      if ((uint)uVar4 < (uint)uVar9) {
        uVar9 = 0x3fffffff / uVar4;
      }
      else {
        uVar4 = 0x3fffffff / uVar9;
      }
    }
  }
  iVar7 = (int)uVar9;
  if (iVar7 == 0) {
    return 0;
  }
  iVar2 = (int)uVar4;
  if (iVar2 + 0xc0000000U < 0xc0000001) {
    return 0;
  }
  if (0x3fffffff < uVar9 * uVar4) {
    return 0;
  }
  uVar13 = iVar2 * 4;
  uVar3 = (uint)(uVar13 * uVar9);
  if ((int)(uVar13 * uVar9 >> 0x20) != 0) {
    return 0;
  }
  uVar1 = param_1[10];
  bVar14 = true;
  if ((param_1[1] == iVar2) && (param_1[2] == iVar7)) {
    bVar14 = param_1[3] != uVar13;
  }
  lVar5 = *(long *)(param_1 + 0xc);
  if (uVar3 <= uVar1) {
    if (lVar5 != 0) goto LAB_1000b48e;
    lVar5 = 0;
  }
  if (_DAT_00280800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_00280804 == 0) {
    return 0;
  }
  if (_DAT_00280808 < 0xc) {
    return 0;
  }
  if (_DAT_00280808 < 0x58) {
    return 0;
  }
  if ((code *)(ulong)_DAT_00280854 == (code *)0x0) {
    return 0;
  }
  lVar5 = (*(code *)(ulong)_DAT_00280854)(lVar5,uVar3);
  if (lVar5 == 0) {
    return 0;
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
  *(long *)(param_1 + 0xc) = lVar5;
  param_1[10] = uVar3;
  if (uVar1 < uVar3) {
    recovered_10002a60((void *)(lVar5 + (ulong)uVar1),0,(ulong)(uVar3 - uVar1));
  }
  param_1[0x11] = 0;
LAB_1000b48e:
  param_1[1] = iVar2;
  param_1[2] = iVar7;
  param_1[3] = uVar13;
  if (bVar14) {
    param_1[0x11] = 0;
  }
  return 1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280854
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b570
 */

undefined8 recovered_1000b570(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x50);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_2 + 0x18);
    }
    uVar2 = *(uint *)(param_2 + 0x54);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_2 + 0x1c);
    }
    if (uVar3 != 0) goto joined_r0x1000b5ab;
  }
  uVar3 = param_1[1];
joined_r0x1000b5ab:
  if (uVar2 == 0) {
    uVar1 = recovered_1000b230(param_1,uVar3,param_1[2]);
    return uVar1;
  }
  uVar1 = recovered_1000b230(param_1,uVar3,uVar2);
  return uVar1;
}


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
#define uStack_274 (*(uint *)(pf_stack_frame + 44))
#define iStack_270 (*(int *)(pf_stack_frame + 48))
#define iStack_26c (*(int *)(pf_stack_frame + 52))
#define local_290 (*(undefined1 (*)[656])(pf_stack_frame + 16))
#define local_278 (*(uint *)(pf_stack_frame + 40))
#define local_250 (*(uint *)(pf_stack_frame + 80))
#define local_24c (*(uint *)(pf_stack_frame + 84))
#define local_248 (*(int *)(pf_stack_frame + 88))
#define local_244 (*(uint *)(pf_stack_frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000b5c0(int *param_1,void *param_2)

{
  unsigned char pf_stack_frame[704] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (param_1[0x12] == 0) {
    recovered_10002a60(local_290,0,0x278);
    if (_DAT_00280800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_00280804 == 0) {
      return 0;
    }
    if (_DAT_00280808 < 0xc) {
      return 0;
    }
    if (_DAT_00280808 < 0xb8) {
      return 0;
    }
    if ((code *)(ulong)_DAT_002808b4 == (code *)0x0) {
      return 0;
    }
    iVar1 = (*(code *)(ulong)_DAT_002808b4)(*param_1,local_290);
    if (iVar1 == 0) {
      return 0;
    }
    recovered_10001d60(param_1 + 0x13,local_290,0x278);
    param_1[0x12] = 1;
    param_1[1] = local_278;
    param_1[2] = uStack_274;
    param_1[3] = iStack_270;
    param_1[4] = iStack_26c;
    if (local_250 == 0xffffffff) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0xff;
      if (local_250 < 0xff) {
        uVar2 = local_250;
      }
      uVar2 = (uVar2 * 100 + 0x7f & 0xffff) / 0xff;
    }
    param_1[5] = uVar2;
    uVar2 = 0;
    if (local_24c != 0xffffffff) {
      uVar2 = 0xff;
      if (local_24c < 0xff) {
        uVar2 = local_24c;
      }
      uVar2 = (uVar2 * 100 + 0x7f & 0xffff) / 0xff;
    }
    param_1[6] = uVar2;
    iVar1 = -1;
    if (local_248 + 1U < 5) {
      iVar1 = local_248;
    }
    if (local_278 < uStack_274) {
      uStack_274 = local_278;
    }
    param_1[7] = iVar1;
    uVar3 = uStack_274 * 100 + 0x32;
    uVar2 = 0;
    if (99 < uVar3) {
      uVar5 = (ulong)uVar3 / 100;
      uVar4 = (ulong)uVar3 / 200 + (ulong)local_244 * 100;
      if ((char)(uVar4 >> 0x20) == '\0') {
        uVar3 = (uint)((uVar4 & 0xffffffff) / uVar5);
      }
      else {
        uVar3 = (uint)(uVar4 / uVar5);
      }
      uVar2 = 100;
      if (uVar3 < 100) {
        uVar2 = uVar3;
      }
    }
    param_1[8] = uVar2;
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_10001d60(param_2,local_290,0x278);
  }
  else {
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_10001d60(param_2,param_1 + 0x13,0x278);
  }
  return 1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b4
#undef uStack_274
#undef iStack_270
#undef iStack_26c
#undef local_290
#undef local_278
#undef local_250
#undef local_24c
#undef local_248
#undef local_244

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7e0
 */

void recovered_1000b7e0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b800
 */

bool recovered_1000b800(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return true;
  }
  return (*(byte *)(param_1 + 0x28) & 0x11) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b820
 */

void recovered_1000b820(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  recovered_10002a60(param_1,0,0x18);
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
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(uint *)(0x28082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000b840(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  recovered_10002a60(param_1,0,0x18);
  while ((((_DAT_00280800 == 0x50414d57 && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         (((0x2f < _DAT_00280808 && ((code *)(ulong)_DAT_0028082c != (code *)0x0)) &&
          (uVar1 = (*(code *)(ulong)_DAT_0028082c)(), uVar1 != 0))))) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if ((byte)((char)uVar1 - 0x20U) < 0x5f) {
      *(uint *)(param_1 + 0x10) = uVar1 & 0xff;
    }
    switch((uintptr_t)(uVar1 & 0xff)) {
    case 8:
    case 0x7f:
      param_1[4] = 1;
      break;
    case 10:
    case 0xd:
      param_1[5] = 1;
      break;
    case 0x1b:
      param_1[6] = 1;
      break;
    case 0x41:
    case 0x61:
      param_1[7] = 1;
      break;
    case 0x44:
    case 100:
      param_1[8] = 1;
      break;
    case 0x51:
    case 0x71:
      param_1[9] = 1;
      break;
    case 0x52:
    case 0x72:
      param_1[10] = 1;
      break;
    case 0x53:
    case 0x73:
      param_1[0xb] = 1;
      break;
    case 0x57:
    case 0x77:
      param_1[0xc] = 1;
    }
    uVar1 = uVar1 >> 8 & 0xff;
    if (uVar1 < 0x48) {
      if (uVar1 == 1) {
        param_1[6] = 1;
      }
      else if (uVar1 == 0xe) {
        param_1[4] = 1;
      }
      else if (uVar1 == 0x1c) {
        param_1[5] = 1;
      }
    }
    else {
      switch((uintptr_t)(uVar1)) {
      case 0x48:
        *param_1 = 1;
        break;
      case 0x4b:
        param_1[2] = 1;
        break;
      case 0x4d:
        param_1[3] = 1;
        break;
      case 0x50:
        param_1[1] = 1;
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x14);
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028082c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028082c

#define local_280 (*(undefined1 (*)[640])(pf_stack_frame + 16))
#define local_258 (*(uint *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbe0
 */

bool recovered_1000bbe0(int *param_1)

{
  unsigned char pf_stack_frame[688] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_1000b5c0(param_1,local_280);
  return (local_258 & 0x11) != 0 || (int)uVar1 == 0;
}

#undef local_280
#undef local_258

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_002808a8
#define DAT_002808a8 (*(uint8_t *)(0x2808a8U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
#undef _DAT_002808a8
#define _DAT_002808a8 (*(uint *)(0x2808a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000bc20(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    if (*param_1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0xab < _DAT_00280808 && ((code *)(ulong)_DAT_002808a8 != (code *)0x0)))) {
        uVar1 = (*(code *)(ulong)_DAT_002808a8)(*param_1);
      }
    }
    if (((((*(byte *)(param_1 + 9) & 1) != 0) && (*(long *)(param_1 + 0xc) != 0)) &&
        ((_DAT_00280800 == 0x50414d57 &&
         (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x53 < _DAT_00280808)))))) &&
       ((code *)(ulong)_DAT_00280850 != (code *)0x0)) {
      (*(code *)(ulong)_DAT_00280850)(*(long *)(param_1 + 0xc));
    }
    recovered_10002a60(param_1,0,0x350);
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_002808a8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850
#undef _DAT_002808a8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a08
#define DAT_00280a08 (*(uint8_t *)(0x280a08U))
#undef DAT_1001080b
#define DAT_1001080b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a08
#define _DAT_00280a08 (*(uint *)(0x280a08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1001080b
#define DAT_1001080b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280a08
#define UINT_00280a08 (*(uint *)(0x280a08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd00
 */

undefined8 recovered_1000bd00(int *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_var = 0;
  undefined *menus;

  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    menus = &DAT_1001080b;
    if (param_2 != (undefined *)0x0) {
      menus = param_2;
    }
    iVar1 = Ram0000000000280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x20b < uVar2))
    {
      uVar2 = UINT_00280a08;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000bd5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(ulong)uVar2)(*param_1,menus);
        return CONCAT44(extraout_var,uVar2);
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1001080b
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280a08


#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a08
#undef DAT_1001080b
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a08

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280960
#define DAT_00280960 (*(uint8_t *)(0x280960U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280960
#define _DAT_00280960 (*(uint *)(0x280960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000bd70(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar3 = 100;
    if ((uint)param_1[6] < 100) {
      uVar3 = param_1[6];
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x163 < _DAT_00280808 && ((code *)(ulong)_DAT_00280960 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00280960)
                        (*param_1,(param_2 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                         (uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[5] = param_2;
        param_1[6] = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280960
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280960

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280960
#define DAT_00280960 (*(uint8_t *)(0x280960U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280960
#define _DAT_00280960 (*(uint *)(0x280960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000be40(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar3 = param_1[5];
    if (99 < uVar3) {
      uVar3 = 100;
    }
    uVar4 = 100;
    if (param_2 < 100) {
      uVar4 = param_2;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x163 < _DAT_00280808 && ((code *)(ulong)_DAT_00280960 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00280960)
                        (*param_1,(uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                         (uVar4 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[5] = uVar3;
        param_1[6] = uVar4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280960
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280960

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
 * Address: 0x1000bf10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000bf10(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00280800 == 0x50414d57)) &&
     (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) &&
      ((0x167 < _DAT_00280808 && ((code *)(ulong)_DAT_00280964 != (code *)0x0)))))) {
    iVar1 = (*(code *)(ulong)_DAT_00280964)(*param_1,0,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      param_1[7] = 0;
      param_1[8] = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
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
 * Address: 0x1000bf90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000bf90(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00280800 == 0x50414d57)) &&
     (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) &&
      ((0x167 < _DAT_00280808 && ((code *)(ulong)_DAT_00280964 != (code *)0x0)))))) {
    iVar1 = (*(code *)(ulong)_DAT_00280964)(*param_1,1,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      param_1[7] = 1;
      param_1[8] = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
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
 * Address: 0x1000c010
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c010(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar4 = 100;
    if (param_2 < 100) {
      uVar4 = param_2;
    }
    uVar3 = param_1[2];
    if ((uint)param_1[1] < (uint)param_1[2]) {
      uVar3 = param_1[1];
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x167 < _DAT_00280808 && ((code *)(ulong)_DAT_00280964 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00280964)(*param_1,2,(ulong)(uVar3 * uVar4 + 0x32) / 100);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[7] = 2;
        param_1[8] = uVar4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
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
 * Address: 0x1000c0c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c0c0(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar4 = 100;
    if (param_2 < 100) {
      uVar4 = param_2;
    }
    uVar3 = param_1[2];
    if ((uint)param_1[1] < (uint)param_1[2]) {
      uVar3 = param_1[1];
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x167 < _DAT_00280808 && ((code *)(ulong)_DAT_00280964 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00280964)(*param_1,3,(ulong)(uVar3 * uVar4 + 0x32) / 100);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[7] = 3;
        param_1[8] = uVar4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
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
#undef DAT_00280900
#define DAT_00280900 (*(uint8_t *)(0x280900U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280900
#define _DAT_00280900 (*(uint *)(0x280900U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c170
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c170(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != (int *)0x0) {
    if ((((param_2 != 0 && *param_1 != 0) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0))
       && (((0xb < _DAT_00280808 && (0x103 < _DAT_00280808)) &&
           ((code *)(ulong)_DAT_00280900 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000c1c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)_DAT_00280900)();
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280900
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280900

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a30
#define DAT_00280a30 (*(uint8_t *)(0x280a30U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a30
#define _DAT_00280a30 (*(uint *)(0x280a30U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
#undef UINT_00280a30
#define UINT_00280a30 (*(uint *)(0x280a30U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1d0
 */

undefined8 recovered_1000c1d0(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_var = 0;

  if ((((param_1 != (int *)0x0) && (param_2 != 0 && *param_1 != 0)) &&
      (iVar1 = Ram0000000000280800, iVar1 == 0x50414d57)) &&
     (((iVar1 = Ram0000000000280804, iVar1 != 0 && (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
      (uVar2 = Ram0000000000280808, 0x233 < uVar2)))) {
    uVar2 = UINT_00280a30;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000c229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(*param_1,(void *)param_2);
      return CONCAT44(extraout_var,uVar2);
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
#undef UINT_00280a30


#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a30
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a30

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a34
#define DAT_00280a34 (*(uint8_t *)(0x280a34U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a34
#define _DAT_00280a34 (*(uint *)(0x280a34U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
#undef UINT_00280a34
#define UINT_00280a34 (*(uint *)(0x280a34U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c230
 */

undefined8 recovered_1000c230(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_var = 0;
  uint in_ESI;

  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) &&
      (iVar1 = Ram0000000000280800, iVar1 == 0x50414d57)) &&
     (((iVar1 = Ram0000000000280804, iVar1 != 0 && (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
      (uVar2 = Ram0000000000280808, 0x237 < uVar2)))) {
    uVar2 = UINT_00280a34;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000c27e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(*param_1,in_ESI);
      return CONCAT44(extraout_var,uVar2);
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
#undef UINT_00280a34


#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a34
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a34

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
 * Address: 0x1000c290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c290(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xb3 < _DAT_00280808 && ((code *)(ulong)_DAT_002808b0 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000c2d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_002808b0)();
    return uVar1;
  }
  return 0;
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
#undef DAT_0028097c
#define DAT_0028097c (*(uint8_t *)(0x28097cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028097c
#define _DAT_0028097c (*(uint *)(0x28097cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c2e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x17f < _DAT_00280808 && ((code *)(ulong)_DAT_0028097c != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000c323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_0028097c)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028097c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028097c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808ac
#define DAT_002808ac (*(uint8_t *)(0x2808acU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808ac
#define _DAT_002808ac (*(uint *)(0x2808acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c330(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xaf < _DAT_00280808 && ((code *)(ulong)_DAT_002808ac != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000c373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_002808ac)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808ac
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808ac

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808f0
#define DAT_002808f0 (*(uint8_t *)(0x2808f0U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808f0
#define _DAT_002808f0 (*(uint *)(0x2808f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c380(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xf3 < _DAT_00280808 && ((code *)(ulong)_DAT_002808f0 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000c3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_002808f0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808f0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808f0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808fc
#define DAT_002808fc (*(uint8_t *)(0x2808fcU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808fc
#define _DAT_002808fc (*(uint *)(0x2808fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c3d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c3d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xff < _DAT_00280808 && ((code *)(ulong)_DAT_002808fc != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000c413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_002808fc)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808fc
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808fc

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
 * Address: 0x1000c420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c420(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xb3 < _DAT_00280808 && ((code *)(ulong)_DAT_002808b0 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000c46e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_002808b0)();
    return uVar1;
  }
  return 0;
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
 * Address: 0x1000c480
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xb3 < _DAT_00280808 && ((code *)(ulong)_DAT_002808b0 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000c4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_002808b0)();
    return uVar1;
  }
  return 0;
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
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(uint *)(0x28082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000c4e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  do {
    if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
       ((_DAT_00280808 < 0x30 || ((code *)(ulong)_DAT_0028082c == (code *)0x0)))) {
      return 0;
    }
    uVar2 = (*(code *)(ulong)_DAT_0028082c)();
    uVar1 = (uint)uVar2;
    if (uVar1 == 0) {
      return 0;
    }
  } while ((((uVar1 & 0xff00) != 0x100) && ((uVar1 & 0xdf) != 0x51)) && ((uVar1 & 0xff) != 0x1b));
  return CONCAT71((int7)((ulong)uVar2 >> 8),1);
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028082c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028082c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028089c
#define DAT_0028089c (*(uint8_t *)(0x28089cU))
#undef DAT_00280974
#define DAT_00280974 (*(uint8_t *)(0x280974U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028089c
#define _DAT_0028089c (*(uint *)(0x28089cU))
#undef _DAT_00280974
#define _DAT_00280974 (*(uint *)(0x280974U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c570(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != 0) {
    do {
      uVar2 = 0x20c49b;
      if (param_1 < 0x20c49b) {
        uVar2 = param_1;
      }
      if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
         (((_DAT_00280808 < 0x178 || ((code *)(ulong)_DAT_00280974 == (code *)0x0)) ||
          (iVar1 = (*(code *)(ulong)_DAT_00280974)(uVar2 * 2000), iVar1 == 0)))) {
        if (_DAT_00280800 != 0x50414d57) {
          return;
        }
        if (_DAT_00280804 == 0) {
          return;
        }
        if (_DAT_00280808 < 0xc) {
          return;
        }
        if (_DAT_00280808 < 0xa0) {
          return;
        }
        if ((code *)(ulong)_DAT_0028089c == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x1000c634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_0028089c)();
        return;
      }
      param_1 = param_1 - uVar2;
    } while (param_1 != 0);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028089c
#undef DAT_00280974
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028089c
#undef _DAT_00280974

#undef DAT_10013364
#define DAT_10013364 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d41U)))
#undef DAT_10013368
#define DAT_10013368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d45U)))
#undef DAT_10013370
#define DAT_10013370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d4dU)))
#undef DAT_10013374
#define DAT_10013374 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d51U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
#define local_a0 (*(long *)(pf_stack_frame + 16))
#define local_98 (*(int *)(pf_stack_frame + 24))
#define local_94 (*(int *)(pf_stack_frame + 28))
#define local_90 (*(uint *)(pf_stack_frame + 32))
#define local_88 (*(undefined8 *)(pf_stack_frame + 40))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(int *)(pf_stack_frame + 60))
#define local_70 (*(uint * *)(pf_stack_frame + 64))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 48))
#define local_68 (*(ulong *)(pf_stack_frame + 72))
#define local_60 (*(long *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 (*)[88])(pf_stack_frame + 88))
#define local_48 (*(long *)(pf_stack_frame + 104))
#define local_40 (*(ulong *)(pf_stack_frame + 112))
#define local_31 (*(byte *)(pf_stack_frame + 127))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c640
 */

void recovered_1000c640(long param_1,uint *param_2,uint param_3)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint *puVar2;
  long lVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint128 auVar7;
  uint128 auVar8;

  if ((((param_1 != 0) &&
       (local_a0 = *(long *)(param_1 + 0x30), param_2 != (uint *)0x0 && local_a0 != 0)) &&
      (0 < (int)param_2[3])) && ((0 < (int)param_2[4] && (uVar6 = *param_2, uVar6 < 2)))) {
    local_98 = *(int *)(param_1 + 4);
    if ((-1 < (long)local_98) &&
       ((local_94 = *(int *)(param_1 + 8), -1 < local_94 &&
        (local_90 = *(uint *)(param_1 + 0xc), (ulong)((long)local_98 * 4) <= (ulong)local_90)))) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = local_98;
      local_74 = local_94;
      auVar7 = recovered_1000c8a0(*(ulong *)(param_2 + 1),*(ulong *)(param_2 + 3),uVar6,param_3);
      uVar1 = PF_PART8(auVar7, 8) >> 0x20;
      if (uVar6 != 1) {
        uVar1 = PF_PART8(auVar7, 8);
      }
      local_31 = 2 < (int)uVar1;
      auVar7 = recovered_1000c8a0(*(ulong *)(param_2 + 5),*(ulong *)(param_2 + 7),uVar6,param_3);
      local_40 = PF_PART8(auVar7, 8);
      auVar8 = recovered_1000c8a0(*(ulong *)(param_2 + 0x11),*(ulong *)(param_2 + 0x13),uVar6,
                                  param_3);
      local_68 = PF_PART8(auVar8, 8);
      local_60 = PF_PART8(auVar8, 0);
      PF_PART16(local_58,0) = recovered_1000c8a0(*(ulong *)(param_2 + 9),*(ulong *)(param_2 + 0xb),uVar6,param_3);
      local_70 = param_2;
      auVar8 = recovered_1000c8a0(*(ulong *)(param_2 + 0xd),*(ulong *)(param_2 + 0xf),uVar6,param_3)
      ;
      bVar4 = local_31;
      uVar1 = local_40;
      local_48 = PF_PART8(auVar8, 0);
      uVar5 = 0xe4e4e4;
      if (DAT_10013474 != '\0') {
        uVar5 = DAT_10013364;
      }
      recovered_1000c9b0(&local_a0,PF_PART8(auVar7, 0),local_40,uVar5);
      uVar5 = 0xacacac;
      if (DAT_10013474 != '\0') {
        uVar5 = DAT_10013370;
      }
      recovered_1000cb80(&local_a0,PF_PART8(auVar7, 0),uVar1,uVar5);
      lVar3 = local_60;
      uVar1 = local_68;
      uVar6 = (uint)bVar4;
      uVar5 = 0xbebebe;
      if (DAT_10013474 != '\0') {
        uVar5 = DAT_10013368;
      }
      recovered_1000c9b0(&local_a0,
                         CONCAT44((int)((ulong)local_60 >> 0x20) + uVar6,(uint)bVar4 + (int)local_60
                                 ),
                         CONCAT44((int)(local_68 >> 0x20) + uVar6 * -2,(int)local_68 + uVar6 * -2),
                         uVar5);
      uVar5 = 0x747474;
      if (DAT_10013474 != '\0') {
        uVar5 = DAT_10013374;
      }
      recovered_1000cb80(&local_a0,lVar3,uVar1,uVar5);
      puVar2 = local_70;
      recovered_1000d270(&local_a0,PF_PART8(local_58, 0),PF_PART8(local_58, 8),*local_70,1);
      recovered_1000d270(&local_a0,local_48,PF_PART8(auVar8, 8),*puVar2,0);
    }
  }
  return;
}

#undef DAT_10013364
#undef DAT_10013368
#undef DAT_10013370
#undef DAT_10013374
#undef DAT_10013474
#undef local_a0
#undef local_98
#undef local_94
#undef local_90
#undef local_88
#undef local_78
#undef local_74
#undef local_70
#undef uStack_80
#undef local_68
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c8a0
 */

uint128 recovered_1000c8a0(ulong param_1,ulong param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint128 auVar7;

  uVar5 = param_1 >> 0x20;
  iVar1 = (int)param_2;
  if (param_3 == 1) {
    iVar1 = (int)(param_2 >> 0x20);
    if ((long)param_2 < 0x300000000) {
      uVar2 = (uint)(iVar1 != 0 && -1 < (long)param_2);
    }
    else {
      uVar2 = (iVar1 + 2U) / 5;
    }
    uVar6 = 0x20;
    if (param_4 < 0x20) {
      uVar6 = param_4;
    }
    uVar2 = ((iVar1 - uVar2) *
             ((uVar6 * -0x40 + 0xc00) * uVar6 * 0x20 * uVar6 * 0x20 + 0x80000 >> 0x14) + 0x200 >> 10
            ) + uVar2;
    uVar5 = (ulong)(((int)(param_1 >> 0x20) + iVar1) - uVar2);
    uVar3 = (ulong)uVar2 << 0x20;
    uVar4 = param_2 & 0xffffffff;
  }
  else {
    if (iVar1 < 3) {
      uVar2 = (uint)(0 < iVar1);
    }
    else {
      uVar2 = (iVar1 + 2U) / 5;
    }
    uVar6 = 0x20;
    if (param_4 < 0x20) {
      uVar6 = param_4;
    }
    uVar3 = (ulong)(((iVar1 - uVar2) *
                     ((uVar6 * -0x40 + 0xc00) * uVar6 * 0x20 * uVar6 * 0x20 + 0x80000 >> 0x14) +
                     0x200 >> 10) + uVar2);
    uVar4 = param_2 & 0xffffffff00000000;
  }
  PF_PART8(auVar7, 8) = uVar4 | uVar3;
  PF_PART8(auVar7, 0) = param_1 & 0xffffffff | uVar5 << 0x20;
  return auVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c9b0
 */

void recovered_1000c9b0(long *param_1,long param_2,long param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  int iVar13;

  if (param_1 != (long *)0x0) {
    iVar8 = (int)param_1[4];
    iVar2 = (int)param_2;
    iVar1 = iVar8;
    if (iVar8 < iVar2) {
      iVar1 = iVar2;
    }
    iVar6 = *(int *)((long)param_1 + 0x24);
    iVar9 = (int)((ulong)param_2 >> 0x20);
    iVar13 = iVar6;
    if (iVar6 < iVar9) {
      iVar13 = iVar9;
    }
    iVar8 = iVar8 + (int)param_1[5];
    iVar2 = (int)param_3 + iVar2;
    if (iVar2 < iVar8) {
      iVar8 = iVar2;
    }
    iVar9 = iVar9 + (int)((ulong)param_3 >> 0x20);
    iVar2 = *(int *)((long)param_1 + 0x2c) + iVar6;
    if (iVar9 < iVar2) {
      iVar2 = iVar9;
    }
    if ((((iVar13 < iVar2) && (iVar8 - iVar1 != 0 && iVar1 <= iVar8)) && (*param_1 != 0)) &&
       ((0 < (int)param_3 && (0xffffffff < param_3)))) {
      lVar7 = param_2 >> 0x20;
      if (param_2 >> 0x20 < (long)iVar6) {
        lVar7 = (long)iVar6;
      }
      iVar6 = (int)lVar7;
      uVar10 = iVar8 - iVar1 & 3;
      do {
        puVar12 = (undefined1 *)((ulong)*(uint *)(param_1 + 2) * lVar7 + *param_1 + (long)iVar1 * 4)
        ;
        uVar11 = (undefined1)((uint)param_4 >> 0x10);
        uVar5 = (undefined1)((uint)param_4 >> 8);
        uVar4 = (undefined1)param_4;
        iVar9 = iVar1;
        if (uVar10 != 0) {
          iVar9 = 0;
          do {
            *puVar12 = uVar11;
            puVar12[1] = uVar5;
            puVar12[2] = uVar4;
            puVar12[3] = 0xff;
            puVar12 = puVar12 + 4;
            iVar9 = iVar9 + -1;
          } while (-uVar10 != iVar9);
          iVar9 = iVar1 - iVar9;
        }
        if ((uint)(iVar1 - iVar8) < 0xfffffffd) {
          lVar3 = 0;
          do {
            puVar12[lVar3 * 4] = uVar11;
            puVar12[lVar3 * 4 + 1] = uVar5;
            puVar12[lVar3 * 4 + 2] = uVar4;
            puVar12[lVar3 * 4 + 3] = 0xff;
            puVar12[lVar3 * 4 + 4] = uVar11;
            puVar12[lVar3 * 4 + 5] = uVar5;
            puVar12[lVar3 * 4 + 6] = uVar4;
            puVar12[lVar3 * 4 + 7] = 0xff;
            puVar12[lVar3 * 4 + 8] = uVar11;
            puVar12[lVar3 * 4 + 9] = uVar5;
            puVar12[lVar3 * 4 + 10] = uVar4;
            puVar12[lVar3 * 4 + 0xb] = 0xff;
            puVar12[lVar3 * 4 + 0xc] = uVar11;
            puVar12[lVar3 * 4 + 0xd] = uVar5;
            puVar12[lVar3 * 4 + 0xe] = uVar4;
            puVar12[lVar3 * 4 + 0xf] = 0xff;
            lVar3 = lVar3 + 4;
          } while (iVar8 - iVar9 != (int)lVar3);
        }
        lVar7 = lVar7 + 1;
      } while ((iVar2 + iVar6) - iVar13 != (int)lVar7);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb80
 */

void recovered_1000cb80(long *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined1 uVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  long lVar21;

  iVar4 = (int)param_3;
  iVar14 = (int)(param_3 >> 0x20);
  if ((param_1 != (long *)0x0 && 0 < iVar4) && 0 < iVar14) {
    iVar5 = (int)param_1[4];
    iVar8 = (int)param_2;
    iVar16 = iVar5;
    if (iVar5 < iVar8) {
      iVar16 = iVar8;
    }
    iVar2 = *(int *)((long)param_1 + 0x24);
    iVar1 = (int)((ulong)param_2 >> 0x20);
    iVar12 = iVar2;
    if (iVar2 < iVar1) {
      iVar12 = iVar1;
    }
    iVar19 = iVar4 + iVar8;
    iVar6 = (int)param_1[5] + iVar5;
    iVar10 = iVar6;
    if (iVar19 < iVar6) {
      iVar10 = iVar19;
    }
    iVar20 = *(int *)((long)param_1 + 0x2c) + iVar2;
    iVar7 = iVar1 + 1;
    if (iVar20 <= iVar1 + 1) {
      iVar7 = iVar20;
    }
    lVar21 = *param_1;
    uVar3 = (undefined1)param_4;
    lVar9 = param_2 >> 0x20;
    uVar18 = (undefined1)((uint)param_4 >> 8);
    uVar15 = (undefined1)((uint)param_4 >> 0x10);
    if (((iVar12 < iVar7) && (iVar10 - iVar16 != 0 && iVar16 <= iVar10)) && (lVar21 != 0)) {
      lVar21 = lVar9;
      if (lVar9 < iVar2) {
        lVar21 = (long)iVar2;
      }
      iVar5 = (int)lVar21;
      uVar11 = iVar10 - iVar16 & 3;
      do {
        puVar17 = (undefined1 *)
                  ((ulong)*(uint *)(param_1 + 2) * lVar21 + *param_1 + (long)iVar16 * 4);
        iVar2 = iVar16;
        if (uVar11 != 0) {
          iVar2 = 0;
          do {
            *puVar17 = uVar15;
            puVar17[1] = uVar18;
            puVar17[2] = uVar3;
            puVar17[3] = 0xff;
            puVar17 = puVar17 + 4;
            iVar2 = iVar2 + -1;
          } while (-uVar11 != iVar2);
          iVar2 = iVar16 - iVar2;
        }
        if ((uint)(iVar16 - iVar10) < 0xfffffffd) {
          lVar13 = 0;
          do {
            puVar17[lVar13 * 4] = uVar15;
            puVar17[lVar13 * 4 + 1] = uVar18;
            puVar17[lVar13 * 4 + 2] = uVar3;
            puVar17[lVar13 * 4 + 3] = 0xff;
            puVar17[lVar13 * 4 + 4] = uVar15;
            puVar17[lVar13 * 4 + 5] = uVar18;
            puVar17[lVar13 * 4 + 6] = uVar3;
            puVar17[lVar13 * 4 + 7] = 0xff;
            puVar17[lVar13 * 4 + 8] = uVar15;
            puVar17[lVar13 * 4 + 9] = uVar18;
            puVar17[lVar13 * 4 + 10] = uVar3;
            puVar17[lVar13 * 4 + 0xb] = 0xff;
            puVar17[lVar13 * 4 + 0xc] = uVar15;
            puVar17[lVar13 * 4 + 0xd] = uVar18;
            puVar17[lVar13 * 4 + 0xe] = uVar3;
            puVar17[lVar13 * 4 + 0xf] = 0xff;
            lVar13 = lVar13 + 4;
          } while (iVar10 - iVar2 != (int)lVar13);
        }
        lVar21 = lVar21 + 1;
      } while ((iVar5 - iVar12) + iVar7 != (int)lVar21);
      iVar5 = (int)param_1[4];
      iVar2 = *(int *)((long)param_1 + 0x24);
      iVar16 = iVar5;
      if (iVar5 < iVar8) {
        iVar16 = iVar8;
      }
      iVar6 = (int)param_1[5] + iVar5;
      iVar10 = iVar19;
      if (iVar6 <= iVar19) {
        iVar10 = iVar6;
      }
      lVar21 = *param_1;
      iVar20 = *(int *)((long)param_1 + 0x2c) + iVar2;
    }
    lVar13 = ((param_3 & 0xffffffff00000000) + param_2 & 0xffffffff00000000) - 0x100000000;
    iVar19 = (int)((ulong)lVar13 >> 0x20);
    iVar12 = iVar2;
    if (iVar2 < iVar19) {
      iVar12 = iVar19;
    }
    iVar7 = iVar19 + 1;
    if (iVar20 <= iVar19 + 1) {
      iVar7 = iVar20;
    }
    if (((iVar12 < iVar7) && (iVar10 - iVar16 != 0 && iVar16 <= iVar10)) && (lVar21 != 0)) {
      lVar13 = lVar13 >> 0x20;
      if (lVar13 < iVar2) {
        lVar13 = (long)iVar2;
      }
      iVar5 = (int)lVar13;
      uVar11 = iVar10 - iVar16 & 3;
      do {
        puVar17 = (undefined1 *)
                  ((ulong)*(uint *)(param_1 + 2) * lVar13 + *param_1 + (long)iVar16 * 4);
        iVar2 = iVar16;
        if (uVar11 != 0) {
          iVar2 = 0;
          do {
            *puVar17 = uVar15;
            puVar17[1] = uVar18;
            puVar17[2] = uVar3;
            puVar17[3] = 0xff;
            puVar17 = puVar17 + 4;
            iVar2 = iVar2 + -1;
          } while (-uVar11 != iVar2);
          iVar2 = iVar16 - iVar2;
        }
        if ((uint)(iVar16 - iVar10) < 0xfffffffd) {
          lVar21 = 0;
          do {
            puVar17[lVar21 * 4] = uVar15;
            puVar17[lVar21 * 4 + 1] = uVar18;
            puVar17[lVar21 * 4 + 2] = uVar3;
            puVar17[lVar21 * 4 + 3] = 0xff;
            puVar17[lVar21 * 4 + 4] = uVar15;
            puVar17[lVar21 * 4 + 5] = uVar18;
            puVar17[lVar21 * 4 + 6] = uVar3;
            puVar17[lVar21 * 4 + 7] = 0xff;
            puVar17[lVar21 * 4 + 8] = uVar15;
            puVar17[lVar21 * 4 + 9] = uVar18;
            puVar17[lVar21 * 4 + 10] = uVar3;
            puVar17[lVar21 * 4 + 0xb] = 0xff;
            puVar17[lVar21 * 4 + 0xc] = uVar15;
            puVar17[lVar21 * 4 + 0xd] = uVar18;
            puVar17[lVar21 * 4 + 0xe] = uVar3;
            puVar17[lVar21 * 4 + 0xf] = 0xff;
            lVar21 = lVar21 + 4;
          } while (iVar10 - iVar2 != (int)lVar21);
        }
        lVar13 = lVar13 + 1;
      } while ((iVar5 - iVar12) + iVar7 != (int)lVar13);
      iVar5 = (int)param_1[4];
      iVar2 = *(int *)((long)param_1 + 0x24);
      lVar21 = *param_1;
      iVar16 = iVar5;
      if (iVar5 < iVar8) {
        iVar16 = iVar8;
      }
      iVar6 = (int)param_1[5] + iVar5;
      iVar20 = *(int *)((long)param_1 + 0x2c) + iVar2;
    }
    iVar12 = iVar2;
    if (iVar2 < iVar1) {
      iVar12 = iVar1;
    }
    iVar10 = iVar8 + 1;
    if (iVar6 <= iVar8 + 1) {
      iVar10 = iVar6;
    }
    iVar14 = iVar14 + iVar1;
    if (iVar14 < iVar20) {
      iVar20 = iVar14;
    }
    if (((iVar12 < iVar20) && (iVar10 - iVar16 != 0 && iVar16 <= iVar10)) && (lVar21 != 0)) {
      lVar21 = lVar9;
      if (lVar9 < iVar2) {
        lVar21 = (long)iVar2;
      }
      iVar5 = (int)lVar21;
      uVar11 = iVar10 - iVar16 & 3;
      do {
        puVar17 = (undefined1 *)
                  ((ulong)*(uint *)(param_1 + 2) * lVar21 + *param_1 + (long)iVar16 * 4);
        iVar2 = iVar16;
        if (uVar11 != 0) {
          iVar2 = 0;
          do {
            *puVar17 = uVar15;
            puVar17[1] = uVar18;
            puVar17[2] = uVar3;
            puVar17[3] = 0xff;
            puVar17 = puVar17 + 4;
            iVar2 = iVar2 + -1;
          } while (-uVar11 != iVar2);
          iVar2 = iVar16 - iVar2;
        }
        if ((uint)(iVar16 - iVar10) < 0xfffffffd) {
          lVar13 = 0;
          do {
            puVar17[lVar13 * 4] = uVar15;
            puVar17[lVar13 * 4 + 1] = uVar18;
            puVar17[lVar13 * 4 + 2] = uVar3;
            puVar17[lVar13 * 4 + 3] = 0xff;
            puVar17[lVar13 * 4 + 4] = uVar15;
            puVar17[lVar13 * 4 + 5] = uVar18;
            puVar17[lVar13 * 4 + 6] = uVar3;
            puVar17[lVar13 * 4 + 7] = 0xff;
            puVar17[lVar13 * 4 + 8] = uVar15;
            puVar17[lVar13 * 4 + 9] = uVar18;
            puVar17[lVar13 * 4 + 10] = uVar3;
            puVar17[lVar13 * 4 + 0xb] = 0xff;
            puVar17[lVar13 * 4 + 0xc] = uVar15;
            puVar17[lVar13 * 4 + 0xd] = uVar18;
            puVar17[lVar13 * 4 + 0xe] = uVar3;
            puVar17[lVar13 * 4 + 0xf] = 0xff;
            lVar13 = lVar13 + 4;
          } while (iVar10 - iVar2 != (int)lVar13);
        }
        lVar21 = lVar21 + 1;
      } while ((iVar5 - iVar12) + iVar20 != (int)lVar21);
      iVar5 = (int)param_1[4];
      iVar2 = *(int *)((long)param_1 + 0x24);
      lVar21 = *param_1;
      iVar12 = iVar1;
      if (iVar1 <= iVar2) {
        iVar12 = iVar2;
      }
      iVar6 = (int)param_1[5] + iVar5;
      iVar20 = *(int *)((long)param_1 + 0x2c) + iVar2;
      if (iVar14 < iVar20) {
        iVar20 = iVar14;
      }
    }
    iVar14 = iVar4 + iVar8 + -1;
    if (iVar5 < iVar14) {
      iVar5 = iVar14;
    }
    if (iVar4 + iVar8 < iVar6) {
      iVar6 = iVar4 + iVar8;
    }
    if (((iVar12 < iVar20) && (iVar6 - iVar5 != 0 && iVar5 <= iVar6)) && (lVar21 != 0)) {
      if (lVar9 < iVar2) {
        lVar9 = (long)iVar2;
      }
      iVar4 = (int)lVar9;
      uVar11 = iVar6 - iVar5 & 3;
      do {
        puVar17 = (undefined1 *)((ulong)*(uint *)(param_1 + 2) * lVar9 + *param_1 + (long)iVar5 * 4)
        ;
        iVar14 = iVar5;
        if (uVar11 != 0) {
          iVar14 = 0;
          do {
            *puVar17 = uVar15;
            puVar17[1] = uVar18;
            puVar17[2] = uVar3;
            puVar17[3] = 0xff;
            puVar17 = puVar17 + 4;
            iVar14 = iVar14 + -1;
          } while (-uVar11 != iVar14);
          iVar14 = iVar5 - iVar14;
        }
        if ((uint)(iVar5 - iVar6) < 0xfffffffd) {
          lVar21 = 0;
          do {
            puVar17[lVar21 * 4] = uVar15;
            puVar17[lVar21 * 4 + 1] = uVar18;
            puVar17[lVar21 * 4 + 2] = uVar3;
            puVar17[lVar21 * 4 + 3] = 0xff;
            puVar17[lVar21 * 4 + 4] = uVar15;
            puVar17[lVar21 * 4 + 5] = uVar18;
            puVar17[lVar21 * 4 + 6] = uVar3;
            puVar17[lVar21 * 4 + 7] = 0xff;
            puVar17[lVar21 * 4 + 8] = uVar15;
            puVar17[lVar21 * 4 + 9] = uVar18;
            puVar17[lVar21 * 4 + 10] = uVar3;
            puVar17[lVar21 * 4 + 0xb] = 0xff;
            puVar17[lVar21 * 4 + 0xc] = uVar15;
            puVar17[lVar21 * 4 + 0xd] = uVar18;
            puVar17[lVar21 * 4 + 0xe] = uVar3;
            puVar17[lVar21 * 4 + 0xf] = 0xff;
            lVar21 = lVar21 + 4;
          } while (iVar6 - iVar14 != (int)lVar21);
        }
        lVar9 = lVar9 + 1;
      } while ((iVar4 - iVar12) + iVar20 != (int)lVar9);
    }
  }
  return;
}


#undef DAT_1001336c
#define DAT_1001336c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d49U)))
#undef DAT_10013378
#define DAT_10013378 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d55U)))
#undef DAT_1001337c
#define DAT_1001337c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d59U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d270
 */

void recovered_1000d270(long *param_1,long param_2,ulong param_3,int param_4,byte param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  int iVar23;
  long lVar24;
  undefined1 *puVar25;
  int iVar26;

  cVar1 = DAT_10013474;
  uVar5 = (uint)(param_3 >> 0x20);
  uVar16 = (uint)param_3;
  if (0 < (int)uVar5 && 0 < (int)uVar16) {
    uVar7 = uVar16;
    if (param_4 == 1) {
      uVar7 = uVar5;
    }
    uVar3 = uVar7 + 1 >> 1;
    uVar9 = 4;
    if (uVar3 < 4) {
      uVar9 = uVar3;
    }
    uVar4 = 0xeeeeee;
    if (DAT_10013474 != '\0') {
      uVar4 = DAT_1001336c;
    }
    iVar18 = (int)param_2;
    iVar11 = (int)((ulong)param_2 >> 0x20);
    if (param_1 != (long *)0x0) {
      iVar19 = (int)param_1[4];
      iVar6 = iVar19;
      if (iVar19 < iVar18) {
        iVar6 = iVar18;
      }
      iVar13 = *(int *)((long)param_1 + 0x24);
      iVar14 = iVar13;
      if (iVar13 < iVar11) {
        iVar14 = iVar11;
      }
      iVar19 = iVar19 + (int)param_1[5];
      if ((int)(iVar18 + uVar16) < iVar19) {
        iVar19 = iVar18 + uVar16;
      }
      iVar26 = *(int *)((long)param_1 + 0x2c) + iVar13;
      if ((int)(uVar5 + iVar11) < iVar26) {
        iVar26 = uVar5 + iVar11;
      }
      if (((iVar14 < iVar26) && (iVar19 - iVar6 != 0 && iVar6 <= iVar19)) && (*param_1 != 0)) {
        lVar24 = param_2 >> 0x20;
        if (param_2 >> 0x20 < (long)iVar13) {
          lVar24 = (long)iVar13;
        }
        iVar13 = (int)lVar24;
        uVar16 = iVar19 - iVar6 & 3;
        do {
          puVar25 = (undefined1 *)
                    ((ulong)*(uint *)(param_1 + 2) * lVar24 + *param_1 + (long)iVar6 * 4);
          uVar21 = (undefined1)((uint)uVar4 >> 0x10);
          uVar22 = (undefined1)((uint)uVar4 >> 8);
          uVar2 = (undefined1)uVar4;
          iVar10 = iVar6;
          if (uVar16 != 0) {
            iVar10 = 0;
            do {
              *puVar25 = uVar21;
              puVar25[1] = uVar22;
              puVar25[2] = uVar2;
              puVar25[3] = 0xff;
              puVar25 = puVar25 + 4;
              iVar10 = iVar10 + -1;
            } while (-uVar16 != iVar10);
            iVar10 = iVar6 - iVar10;
          }
          if ((uint)(iVar6 - iVar19) < 0xfffffffd) {
            lVar12 = 0;
            do {
              puVar25[lVar12 * 4] = uVar21;
              puVar25[lVar12 * 4 + 1] = uVar22;
              puVar25[lVar12 * 4 + 2] = uVar2;
              puVar25[lVar12 * 4 + 3] = 0xff;
              puVar25[lVar12 * 4 + 4] = uVar21;
              puVar25[lVar12 * 4 + 5] = uVar22;
              puVar25[lVar12 * 4 + 6] = uVar2;
              puVar25[lVar12 * 4 + 7] = 0xff;
              puVar25[lVar12 * 4 + 8] = uVar21;
              puVar25[lVar12 * 4 + 9] = uVar22;
              puVar25[lVar12 * 4 + 10] = uVar2;
              puVar25[lVar12 * 4 + 0xb] = 0xff;
              puVar25[lVar12 * 4 + 0xc] = uVar21;
              puVar25[lVar12 * 4 + 0xd] = uVar22;
              puVar25[lVar12 * 4 + 0xe] = uVar2;
              puVar25[lVar12 * 4 + 0xf] = 0xff;
              lVar12 = lVar12 + 4;
            } while (iVar19 - iVar10 != (int)lVar12);
          }
          lVar24 = lVar24 + 1;
        } while ((iVar13 - iVar14) + iVar26 != (int)lVar24);
      }
    }
    uVar4 = 0x969696;
    if (cVar1 != '\0') {
      uVar4 = DAT_10013378;
    }
    recovered_1000cb80(param_1,param_2,param_3,uVar4);
    if (uVar7 != 0) {
      uVar16 = (uint)(param_3 >> 1) & 0x7fffffff;
      iVar13 = uVar16 + iVar18;
      iVar11 = (uVar5 >> 1) + iVar11;
      uVar5 = (uint)(byte)~param_5 * 2 | 0xfffffffc;
      iVar14 = iVar13 + uVar5;
      iVar6 = uVar5 + uVar16;
      iVar19 = iVar6 + iVar18;
      iVar6 = iVar6 + iVar18;
      uVar8 = 0;
      do {
        iVar6 = iVar6 + 1;
        uVar7 = (uint)uVar8;
        uVar16 = ~uVar7 + uVar9;
        if (param_5 != 0) {
          uVar16 = uVar7;
        }
        if (param_4 == 1) {
          uVar4 = 0x464646;
          if (cVar1 != '\0') {
            uVar4 = DAT_1001337c;
          }
          if (param_1 != (long *)0x0) {
            iVar10 = iVar11 - uVar16;
            iVar18 = (int)param_1[4];
            iVar26 = iVar14 + uVar7;
            if (iVar26 <= iVar18) {
              iVar26 = iVar18;
            }
            iVar15 = *(int *)((long)param_1 + 0x24);
            iVar17 = iVar15;
            if (iVar15 < iVar10) {
              iVar17 = iVar10;
            }
            iVar23 = (int)param_1[5] + iVar18;
            iVar20 = uVar7 + iVar14 + 1;
            if (iVar23 <= iVar20) {
              iVar20 = iVar23;
            }
            iVar10 = iVar10 + uVar16 * 2 + 1;
            iVar15 = iVar15 + *(int *)((long)param_1 + 0x2c);
            if (iVar10 < iVar15) {
              iVar15 = iVar10;
            }
            if (((iVar17 < iVar15) && (iVar20 - iVar26 != 0 && iVar26 <= iVar20)) &&
               ((-1 < (int)uVar16 && (*param_1 != 0)))) {
              lVar24 = (long)iVar17;
              if (iVar18 <= iVar19) {
                iVar18 = iVar19;
              }
              if (iVar6 < iVar23) {
                iVar23 = iVar6;
              }
              do {
                puVar25 = (undefined1 *)
                          ((ulong)*(uint *)(param_1 + 2) * lVar24 + *param_1 + (long)iVar26 * 4);
                uVar21 = (undefined1)((uint)uVar4 >> 0x10);
                uVar2 = (undefined1)((uint)uVar4 >> 8);
                uVar22 = (undefined1)uVar4;
                iVar10 = iVar26;
                if ((iVar20 - iVar26 & 3U) != 0) {
                  iVar10 = 0;
                  do {
                    *puVar25 = uVar21;
                    puVar25[1] = uVar2;
                    puVar25[2] = uVar22;
                    puVar25[3] = 0xff;
                    puVar25 = puVar25 + 4;
                    iVar10 = iVar10 + -1;
                  } while (-((byte)((char)iVar23 - (char)iVar18) & 3) != iVar10);
                  iVar10 = iVar18 - iVar10;
                }
                if ((uint)(iVar26 - iVar20) < 0xfffffffd) {
                  lVar12 = 0;
                  do {
                    puVar25[lVar12 * 4] = uVar21;
                    puVar25[lVar12 * 4 + 1] = uVar2;
                    puVar25[lVar12 * 4 + 2] = uVar22;
                    puVar25[lVar12 * 4 + 3] = 0xff;
                    puVar25[lVar12 * 4 + 4] = uVar21;
                    puVar25[lVar12 * 4 + 5] = uVar2;
                    puVar25[lVar12 * 4 + 6] = uVar22;
                    puVar25[lVar12 * 4 + 7] = 0xff;
                    puVar25[lVar12 * 4 + 8] = uVar21;
                    puVar25[lVar12 * 4 + 9] = uVar2;
                    puVar25[lVar12 * 4 + 10] = uVar22;
                    puVar25[lVar12 * 4 + 0xb] = 0xff;
                    puVar25[lVar12 * 4 + 0xc] = uVar21;
                    puVar25[lVar12 * 4 + 0xd] = uVar2;
                    puVar25[lVar12 * 4 + 0xe] = uVar22;
                    puVar25[lVar12 * 4 + 0xf] = 0xff;
                    lVar12 = lVar12 + 4;
                  } while (iVar23 - iVar10 != (int)lVar12);
                }
                lVar24 = lVar24 + 1;
              } while (iVar15 != (int)lVar24);
            }
          }
        }
        else {
          uVar4 = 0x464646;
          if (cVar1 != '\0') {
            uVar4 = DAT_1001337c;
          }
          if (param_1 != (long *)0x0) {
            iVar10 = iVar13 - uVar16;
            iVar18 = (int)param_1[4];
            iVar26 = iVar18;
            if (iVar18 < iVar10) {
              iVar26 = iVar10;
            }
            lVar24 = uVar8 + (long)(int)(iVar11 + uVar5);
            iVar15 = *(int *)((long)param_1 + 0x24);
            iVar20 = (int)lVar24;
            iVar17 = iVar15;
            if (iVar15 < iVar20) {
              iVar17 = iVar20;
            }
            iVar18 = iVar18 + (int)param_1[5];
            iVar10 = iVar10 + uVar16 * 2 + 1;
            if (iVar10 < iVar18) {
              iVar18 = iVar10;
            }
            iVar15 = iVar15 + *(int *)((long)param_1 + 0x2c);
            if (iVar20 + 1 < iVar15) {
              iVar15 = iVar20 + 1;
            }
            if (((iVar17 < iVar15) && (iVar18 - iVar26 != 0 && iVar26 <= iVar18)) &&
               ((-1 < (int)uVar16 && (*param_1 != 0)))) {
              uVar16 = iVar18 - iVar26 & 3;
              do {
                puVar25 = (undefined1 *)
                          ((ulong)*(uint *)(param_1 + 2) * lVar24 + *param_1 + (long)iVar26 * 4);
                uVar2 = (undefined1)((uint)uVar4 >> 0x10);
                uVar21 = (undefined1)((uint)uVar4 >> 8);
                uVar22 = (undefined1)uVar4;
                iVar10 = iVar26;
                if (uVar16 != 0) {
                  iVar10 = 0;
                  do {
                    *puVar25 = uVar2;
                    puVar25[1] = uVar21;
                    puVar25[2] = uVar22;
                    puVar25[3] = 0xff;
                    puVar25 = puVar25 + 4;
                    iVar10 = iVar10 + -1;
                  } while (-uVar16 != iVar10);
                  iVar10 = iVar26 - iVar10;
                }
                if ((uint)(iVar26 - iVar18) < 0xfffffffd) {
                  lVar12 = 0;
                  do {
                    puVar25[lVar12 * 4] = uVar2;
                    puVar25[lVar12 * 4 + 1] = uVar21;
                    puVar25[lVar12 * 4 + 2] = uVar22;
                    puVar25[lVar12 * 4 + 3] = 0xff;
                    puVar25[lVar12 * 4 + 4] = uVar2;
                    puVar25[lVar12 * 4 + 5] = uVar21;
                    puVar25[lVar12 * 4 + 6] = uVar22;
                    puVar25[lVar12 * 4 + 7] = 0xff;
                    puVar25[lVar12 * 4 + 8] = uVar2;
                    puVar25[lVar12 * 4 + 9] = uVar21;
                    puVar25[lVar12 * 4 + 10] = uVar22;
                    puVar25[lVar12 * 4 + 0xb] = 0xff;
                    puVar25[lVar12 * 4 + 0xc] = uVar2;
                    puVar25[lVar12 * 4 + 0xd] = uVar21;
                    puVar25[lVar12 * 4 + 0xe] = uVar22;
                    puVar25[lVar12 * 4 + 0xf] = 0xff;
                    lVar12 = lVar12 + 4;
                  } while (iVar18 - iVar10 != (int)lVar12);
                }
                lVar24 = lVar24 + 1;
              } while ((iVar20 - iVar17) + iVar15 != (int)lVar24);
            }
          }
        }
        uVar8 = uVar8 + 1;
        iVar19 = iVar19 + 1;
      } while (uVar8 != uVar9 + (uVar9 == 0));
    }
  }
  return;
}

#undef DAT_1001336c
#undef DAT_10013378
#undef DAT_1001337c
#undef DAT_10013474

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8c0
 */

void recovered_1000d8c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8e0
 */

uint128 recovered_1000d8e0(uint param_1,long param_2,uint param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 0) = (ulong)param_1 | param_2 << 0x20;
  PF_PART8(auVar1, 8) = (ulong)param_3 | param_4 << 0x20;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d900
 */

void recovered_1000d900(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013354
#define DAT_10013354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d31U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d920
 */

void * recovered_1000d920(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  recovered_10002a60(param_1,0,0x60);
  *(undefined4 *)((long)param_1 + 0x28) = 1;
  uVar1 = 0x202020;
  if (DAT_10013474 != '\0') {
    uVar1 = DAT_10013354;
  }
  uVar2 = 0xf6f6f6;
  if (DAT_10013474 != '\0') {
    uVar2 = DAT_10013350;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = uVar1;
  *(undefined4 *)((long)param_1 + 0x30) = uVar2;
  *(undefined4 *)((long)param_1 + 0x34) = 1;
  return param_1;
}

#undef DAT_10013350
#undef DAT_10013354
#undef DAT_10013474

#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013354
#define DAT_10013354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d31U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d980
 */

undefined4 * recovered_1000d980(undefined4 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_10002a60(param_1,0,0x60);
  bVar2 = DAT_10013474 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_10013354;
  }
  param_1[10] = 1;
  param_1[0xb] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_10013350;
  }
  param_1[0xc] = uVar1;
  param_1[0xd] = 1;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_2;
  return param_1;
}

#undef DAT_10013350
#undef DAT_10013354
#undef DAT_10013474

#undef DAT_10013354
#define DAT_10013354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d31U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d9f0
 */

undefined4 * recovered_1000d9f0(undefined4 *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  recovered_10002a60(param_1,0,0x60);
  param_1[10] = 1;
  uVar1 = 0x202020;
  if (DAT_10013474 != '\0') {
    uVar1 = DAT_10013354;
  }
  param_1[0xb] = uVar1;
  param_1[0xd] = 1;
  *param_1 = 2;
  param_1[0xc] = param_2;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
  return param_1;
}

#undef DAT_10013354
#undef DAT_10013474

#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013354
#define DAT_10013354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d31U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da50
 */

undefined4 * recovered_1000da50(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_10002a60(param_1,0,0x60);
  param_1[10] = 1;
  bVar2 = DAT_10013474 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_10013354;
  }
  param_1[0xb] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_10013350;
  }
  param_1[0xc] = uVar1;
  param_1[0xd] = 1;
  *param_1 = 4;
  return param_1;
}

#undef DAT_10013350
#undef DAT_10013354
#undef DAT_10013474

#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013354
#define DAT_10013354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d31U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dab0
 */

undefined4 *
recovered_1000dab0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  recovered_10002a60(param_1,0,0x60);
  param_1[10] = 1;
  uVar1 = 0x202020;
  if (DAT_10013474 != '\0') {
    uVar1 = DAT_10013354;
  }
  uVar2 = 0xf6f6f6;
  if (DAT_10013474 != '\0') {
    uVar2 = DAT_10013350;
  }
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  param_1[0xd] = 1;
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 0x14) = param_3;
  *(undefined8 *)(param_1 + 0x16) = param_4;
  return param_1;
}

#undef DAT_10013350
#undef DAT_10013354
#undef DAT_10013474

#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013354
#define DAT_10013354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d31U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db40
 */

undefined4 *
recovered_1000db40(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_10002a60(param_1,0,0x60);
  bVar2 = DAT_10013474 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_10013354;
  }
  param_1[0xb] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_10013350;
  }
  param_1[0xc] = uVar1;
  param_1[0xd] = 1;
  *param_1 = 8;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0x14) = param_5;
  *(undefined8 *)(param_1 + 0x16) = param_6;
  if (param_4 != 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x10;
  }
  return param_1;
}

#undef DAT_10013350
#undef DAT_10013354
#undef DAT_10013474

#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013354
#define DAT_10013354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d31U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dbe0
 */

undefined4 *
recovered_1000dbe0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_10002a60(param_1,0,0x60);
  bVar2 = DAT_10013474 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_10013354;
  }
  param_1[0xb] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_10013350;
  }
  param_1[0xc] = uVar1;
  param_1[0xd] = 1;
  *param_1 = 5;
  *(undefined8 *)(param_1 + 6) = param_2;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[10] = 1;
  return param_1;
}

#undef DAT_10013350
#undef DAT_10013354
#undef DAT_10013474

#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013354
#define DAT_10013354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d31U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc60
 */

undefined4 *
recovered_1000dc60(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_10002a60(param_1,0,0x60);
  bVar2 = DAT_10013474 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_10013354;
  }
  param_1[0xb] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_10013350;
  }
  param_1[0xc] = uVar1;
  param_1[0xd] = 1;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 6) = param_2;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[10] = 1;
  return param_1;
}

#undef DAT_10013350
#undef DAT_10013354
#undef DAT_10013474

#undef DAT_10013350
#define DAT_10013350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d2dU)))
#undef DAT_10013354
#define DAT_10013354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d31U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dce0
 */

undefined4 * recovered_1000dce0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  recovered_10002a60(param_1,0,0x60);
  uVar1 = 0x202020;
  if (DAT_10013474 != '\0') {
    uVar1 = DAT_10013354;
  }
  uVar2 = 0xf6f6f6;
  if (DAT_10013474 != '\0') {
    uVar2 = DAT_10013350;
  }
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  param_1[0xd] = 1;
  *param_1 = 7;
  *(undefined8 *)(param_1 + 6) = param_2;
  param_1[8] = param_3;
  param_1[10] = 1;
  return param_1;
}

#undef DAT_10013350
#undef DAT_10013354
#undef DAT_10013474

#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(undefined8 *)(pf_stack_frame + 64))
#define in_stack_00000028 (*(undefined8 *)(pf_stack_frame + 72))
#define in_stack_00000030 (*(undefined8 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(undefined8 *)(pf_stack_frame + 88))
#define in_stack_00000040 (*(undefined8 *)(pf_stack_frame + 96))
#define in_stack_00000058 (*(undefined8 *)(pf_stack_frame + 120))
#define in_stack_00000060 (*(undefined8 *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd60
 */

undefined8 * recovered_1000dd60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  param_1[10] = in_stack_00000058;
  param_1[0xb] = in_stack_00000060;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[4] = in_stack_00000028;
  param_1[5] = in_stack_00000030;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[8] = param_2;
  param_1[9] = param_3;
  return param_1;
}

#undef in_stack_00000008
#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000028
#undef in_stack_00000030
#undef in_stack_00000038
#undef in_stack_00000040
#undef in_stack_00000058
#undef in_stack_00000060

#define in_stack_00000008 (*(undefined4 *)(pf_stack_frame + 40))
#define in_stack_0000000c (*(undefined4 *)(pf_stack_frame + 44))
#define in_stack_00000010 (*(ulong *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(ulong *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(ulong *)(pf_stack_frame + 64))
#define in_stack_00000028 (*(ulong *)(pf_stack_frame + 72))
#define in_stack_00000030 (*(undefined4 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(ulong *)(pf_stack_frame + 88))
#define in_stack_00000040 (*(ulong *)(pf_stack_frame + 96))
#define in_stack_00000048 (*(ulong *)(pf_stack_frame + 104))
#define in_stack_00000050 (*(ulong *)(pf_stack_frame + 112))
#define in_stack_00000058 (*(ulong *)(pf_stack_frame + 120))
#define in_stack_00000060 (*(ulong *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ddb0
 */

ulong * recovered_1000ddb0(ulong *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  param_1[10] = in_stack_00000058;
  param_1[0xb] = in_stack_00000060;
  param_1[8] = in_stack_00000048;
  param_1[9] = in_stack_00000050;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  param_1[4] = in_stack_00000028;
  *(undefined4 *)(param_1 + 5) = in_stack_00000030;
  *(undefined4 *)((long)param_1 + 0x2c) = param_2;
  *param_1 = CONCAT44(in_stack_0000000c,in_stack_00000008) | 0x100000000;
  param_1[1] = in_stack_00000010;
  return param_1;
}

#undef in_stack_00000008
#undef in_stack_0000000c
#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000028
#undef in_stack_00000030
#undef in_stack_00000038
#undef in_stack_00000040
#undef in_stack_00000048
#undef in_stack_00000050
#undef in_stack_00000058
#undef in_stack_00000060

#define in_stack_00000008 (*(undefined4 *)(pf_stack_frame + 40))
#define in_stack_0000000c (*(undefined4 *)(pf_stack_frame + 44))
#define in_stack_00000010 (*(ulong *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(ulong *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(ulong *)(pf_stack_frame + 64))
#define in_stack_00000028 (*(ulong *)(pf_stack_frame + 72))
#define in_stack_00000030 (*(ulong *)(pf_stack_frame + 80))
#define in_stack_0000003c (*(undefined8 *)(pf_stack_frame + 92))
#define in_stack_00000044 (*(undefined4 *)(pf_stack_frame + 100))
#define in_stack_00000048 (*(ulong *)(pf_stack_frame + 104))
#define in_stack_00000050 (*(ulong *)(pf_stack_frame + 112))
#define in_stack_00000058 (*(ulong *)(pf_stack_frame + 120))
#define in_stack_00000060 (*(ulong *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de00
 */

ulong * recovered_1000de00(ulong *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  param_1[10] = in_stack_00000058;
  param_1[0xb] = in_stack_00000060;
  param_1[8] = in_stack_00000048;
  param_1[9] = in_stack_00000050;
  param_1[4] = in_stack_00000028;
  param_1[5] = in_stack_00000030;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *(undefined4 *)(param_1 + 6) = param_2;
  *(undefined8 *)((long)param_1 + 0x34) = in_stack_0000003c;
  *(undefined4 *)((long)param_1 + 0x3c) = in_stack_00000044;
  *param_1 = CONCAT44(in_stack_0000000c,in_stack_00000008) | 0x200000000;
  param_1[1] = in_stack_00000010;
  return param_1;
}

#undef in_stack_00000008
#undef in_stack_0000000c
#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000028
#undef in_stack_00000030
#undef in_stack_0000003c
#undef in_stack_00000044
#undef in_stack_00000048
#undef in_stack_00000050
#undef in_stack_00000058
#undef in_stack_00000060

#define in_stack_00000008 (*(undefined4 *)(pf_stack_frame + 40))
#define in_stack_0000000c (*(uint *)(pf_stack_frame + 44))
#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(undefined8 *)(pf_stack_frame + 64))
#define in_stack_00000028 (*(undefined8 *)(pf_stack_frame + 72))
#define in_stack_00000030 (*(undefined8 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(undefined8 *)(pf_stack_frame + 88))
#define in_stack_00000040 (*(int *)(pf_stack_frame + 96))
#define in_stack_00000044 (*(int *)(pf_stack_frame + 100))
#define in_stack_00000048 (*(undefined8 *)(pf_stack_frame + 104))
#define in_stack_00000050 (*(undefined8 *)(pf_stack_frame + 112))
#define in_stack_00000058 (*(undefined8 *)(pf_stack_frame + 120))
#define in_stack_00000060 (*(undefined8 *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de50
 */

void recovered_1000de50(undefined8 *param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  if (-1 < param_2) {
    in_stack_0000000c = in_stack_0000000c | 4;
    in_stack_00000040 = param_2;
  }
  if (-1 < param_3) {
    in_stack_0000000c = in_stack_0000000c | 8;
    in_stack_00000044 = param_3;
  }
  param_1[10] = in_stack_00000058;
  param_1[0xb] = in_stack_00000060;
  param_1[8] = in_stack_00000048;
  param_1[9] = in_stack_00000050;
  param_1[6] = in_stack_00000038;
  *(int *)(param_1 + 7) = in_stack_00000040;
  *(int *)((long)param_1 + 0x3c) = in_stack_00000044;
  param_1[4] = in_stack_00000028;
  param_1[5] = in_stack_00000030;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = CONCAT44(in_stack_0000000c,in_stack_00000008);
  param_1[1] = in_stack_00000010;
  return;
}

#undef in_stack_00000008
#undef in_stack_0000000c
#undef in_stack_00000010
#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000028
#undef in_stack_00000030
#undef in_stack_00000038
#undef in_stack_00000040
#undef in_stack_00000044
#undef in_stack_00000048
#undef in_stack_00000050
#undef in_stack_00000058
#undef in_stack_00000060

#define in_stack_00000020 (*(undefined8 *)(pf_stack_frame + 64))
#define in_stack_00000028 (*(undefined8 *)(pf_stack_frame + 72))
#define in_stack_00000030 (*(undefined8 *)(pf_stack_frame + 80))
#define in_stack_00000038 (*(undefined4 *)(pf_stack_frame + 88))
#define in_stack_00000040 (*(undefined8 *)(pf_stack_frame + 96))
#define in_stack_00000048 (*(undefined8 *)(pf_stack_frame + 104))
#define in_stack_00000050 (*(undefined8 *)(pf_stack_frame + 112))
#define in_stack_00000058 (*(undefined8 *)(pf_stack_frame + 120))
#define in_stack_00000060 (*(undefined8 *)(pf_stack_frame + 128))
#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000deb0
 */

undefined8 * recovered_1000deb0(undefined8 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  param_1[10] = in_stack_00000058;
  param_1[0xb] = in_stack_00000060;
  param_1[8] = in_stack_00000048;
  param_1[9] = in_stack_00000050;
  param_1[4] = in_stack_00000028;
  param_1[5] = in_stack_00000030;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  *(undefined4 *)(param_1 + 6) = in_stack_00000038;
  *(uint *)((long)param_1 + 0x34) = param_2 + (uint)(param_2 == 0);
  param_1[7] = in_stack_00000040;
  return param_1;
}

#undef in_stack_00000020
#undef in_stack_00000028
#undef in_stack_00000030
#undef in_stack_00000038
#undef in_stack_00000040
#undef in_stack_00000048
#undef in_stack_00000050
#undef in_stack_00000058
#undef in_stack_00000060
#undef in_stack_00000008
#undef in_stack_00000010
#undef in_stack_00000018

#define in_stack_00000018 (*(undefined8 *)(pf_stack_frame + 56))
#define in_stack_00000020 (*(undefined8 *)(pf_stack_frame + 64))
#define in_stack_00000028 (*(undefined8 *)(pf_stack_frame + 72))
#define in_stack_00000034 (*(undefined4 *)(pf_stack_frame + 84))
#define in_stack_00000038 (*(undefined8 *)(pf_stack_frame + 88))
#define in_stack_00000040 (*(undefined8 *)(pf_stack_frame + 96))
#define in_stack_00000048 (*(undefined8 *)(pf_stack_frame + 104))
#define in_stack_00000050 (*(undefined8 *)(pf_stack_frame + 112))
#define in_stack_00000058 (*(undefined8 *)(pf_stack_frame + 120))
#define in_stack_00000060 (*(undefined8 *)(pf_stack_frame + 128))
#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010 (*(undefined8 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df00
 */

undefined8 * recovered_1000df00(undefined8 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 1;
  if (param_2 < 4) {
    uVar1 = param_2;
  }
  param_1[10] = in_stack_00000058;
  param_1[0xb] = in_stack_00000060;
  param_1[8] = in_stack_00000048;
  param_1[9] = in_stack_00000050;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[4] = in_stack_00000028;
  *(uint *)(param_1 + 5) = uVar1;
  *(undefined4 *)((long)param_1 + 0x2c) = in_stack_00000034;
  return param_1;
}

#undef in_stack_00000018
#undef in_stack_00000020
#undef in_stack_00000028
#undef in_stack_00000034
#undef in_stack_00000038
#undef in_stack_00000040
#undef in_stack_00000048
#undef in_stack_00000050
#undef in_stack_00000058
#undef in_stack_00000060
#undef in_stack_00000008
#undef in_stack_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df60
 */

undefined8 recovered_1000df60(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;

  uVar17 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar7 = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  iVar2 = (int)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  uVar10 = (int)param_2 - (iVar2 + iVar7);
  uVar12 = (ulong)uVar10;
  if ((int)uVar10 < 1) {
    uVar12 = 0;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  iVar7 = 0;
  if (0 < iVar2) {
    iVar7 = iVar2;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x12);
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  uVar10 = (int)((ulong)param_2 >> 0x20) - (iVar2 + iVar7);
  if ((int)uVar10 < 1) {
    uVar10 = 0;
  }
  if (7 < *param_1 - 1U) {
switchD_1000dff8_caseD_4:
    uVar10 = 0;
    goto LAB_1000e2a8;
  }
  lVar6 = ((ulong)uVar10 << 0x20) + uVar12;
  switch((uintptr_t)(*param_1)) {
  case 1:
    uVar17 = recovered_1000fdc0(*(undefined **)(param_1 + 2),
                                param_1[0xd] + (uint)(param_1[0xd] == 0));
    uVar10 = (uint)(uVar17 >> 0x20);
    break;
  case 2:
    uVar17 = 0x10;
    uVar10 = 0x10;
    break;
  case 3:
    uVar12 = recovered_1000fdc0(*(undefined **)(param_1 + 2),
                                param_1[0xd] + (uint)(param_1[0xd] == 0));
    uVar17 = (ulong)((int)uVar12 + 0x14);
    iVar2 = (int)(uVar12 >> 0x20);
    iVar7 = 0xc;
    if (0xc < iVar2) {
      iVar7 = iVar2;
    }
    goto LAB_1000e135;
  case 4:
    goto switchD_1000dff8_caseD_4;
  case 5:
    uVar15 = param_1[8];
    if (uVar15 < 2) {
      uVar3 = 0;
      uVar10 = 0;
      uVar9 = 0;
      if (uVar15 != 0) goto LAB_1000e18e;
    }
    else {
      uVar3 = (ulong)((uVar15 - 1) * param_1[9]);
LAB_1000e18e:
      lVar18 = 0;
      uVar17 = 0;
      iVar7 = 0;
      uVar16 = 0;
      do {
        piVar14 = (int *)(*(long *)(param_1 + 6) + lVar18);
        if (*(long *)(param_1 + 6) == 0) {
          piVar14 = (int *)0x0;
        }
        if ((piVar14 == (int *)0x0) || (*piVar14 != 4)) {
          uVar4 = recovered_1000df60(piVar14,lVar6);
          uVar3 = (ulong)(uint)((int)uVar3 + (int)uVar4);
          uVar10 = (uint)((ulong)uVar4 >> 0x20);
          if ((int)uVar10 < (int)uVar16) {
            uVar10 = uVar16;
          }
          uVar15 = param_1[8];
        }
        else {
          iVar7 = iVar7 + 1;
          uVar10 = uVar16;
        }
        uVar9 = (uint)uVar3;
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 0x60;
        uVar16 = uVar10;
      } while (uVar17 < uVar15);
      uVar17 = uVar12;
      if ((int)uVar12 < (int)uVar9) {
        uVar17 = uVar3;
      }
      if (iVar7 != 0) break;
    }
    uVar17 = (ulong)uVar9;
    break;
  case 6:
    uVar15 = param_1[8];
    if (uVar15 < 2) {
      uVar9 = 0;
      uVar17 = 0;
      if (uVar15 != 0) goto LAB_1000e226;
    }
    else {
      uVar9 = (uVar15 - 1) * param_1[9];
LAB_1000e226:
      lVar18 = 0;
      uVar12 = 0;
      uVar17 = 0;
      iVar7 = 0;
      do {
        piVar14 = (int *)(*(long *)(param_1 + 6) + lVar18);
        if (*(long *)(param_1 + 6) == 0) {
          piVar14 = (int *)0x0;
        }
        if ((piVar14 == (int *)0x0) || (*piVar14 != 4)) {
          uVar3 = recovered_1000df60(piVar14,lVar6);
          if ((int)uVar17 <= (int)uVar3) {
            uVar17 = uVar3 & 0xffffffff;
          }
          uVar9 = uVar9 + (int)(uVar3 >> 0x20);
          uVar15 = param_1[8];
        }
        else {
          iVar7 = iVar7 + 1;
        }
        uVar12 = uVar12 + 1;
        lVar18 = lVar18 + 0x60;
      } while (uVar12 < uVar15);
      if ((int)uVar10 < (int)uVar9) {
        uVar10 = uVar9;
      }
      if (iVar7 != 0) break;
    }
    uVar10 = uVar9;
    break;
  case 7:
    uVar10 = 0;
    if (param_1[8] != 0) {
      lVar18 = 0;
      uVar12 = 0;
      uVar10 = 0;
      uVar17 = 0;
      do {
        piVar14 = (int *)(*(long *)(param_1 + 6) + lVar18);
        if (*(long *)(param_1 + 6) == 0) {
          piVar14 = (int *)0x0;
        }
        uVar3 = recovered_1000df60(piVar14,lVar6);
        if ((int)uVar17 <= (int)uVar3) {
          uVar17 = uVar3 & 0xffffffff;
        }
        uVar15 = (uint)(uVar3 >> 0x20);
        if ((int)uVar15 < (int)uVar10) {
          uVar15 = uVar10;
        }
        uVar10 = uVar15;
        uVar12 = uVar12 + 1;
        lVar18 = lVar18 + 0x60;
      } while (uVar12 < (uint)param_1[8]);
    }
    break;
  case 8:
    pcVar13 = *(char **)(param_1 + 2);
    if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) {
      pcVar13 = *(char **)(param_1 + 4);
    }
    uVar12 = recovered_1000fdc0(pcVar13,param_1[0xd] + (uint)(param_1[0xd] == 0));
    iVar7 = 100;
    if (100 < (int)uVar12) {
      iVar7 = (int)uVar12;
    }
    uVar17 = (ulong)(iVar7 + 0x14);
    iVar2 = (int)(uVar12 >> 0x20);
    iVar7 = 0x10;
    if (0x10 < iVar2) {
      iVar7 = iVar2;
    }
LAB_1000e135:
    uVar10 = iVar7 + 0xc;
  }
LAB_1000e2a8:
  iVar7 = (int)uVar17;
  if ((param_1[1] & 4U) != 0) {
    iVar7 = 0;
    if (0 < param_1[0xe]) {
      iVar7 = param_1[0xe];
    }
  }
  if ((param_1[1] & 8U) != 0) {
    uVar10 = 0;
    if (0 < param_1[0xf]) {
      uVar10 = param_1[0xf];
    }
  }
  iVar2 = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar1 = (int)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar5 = (int)*(undefined8 *)(param_1 + 0x10);
  iVar11 = 0;
  if (0 < iVar5) {
    iVar11 = iVar5;
  }
  iVar8 = (int)*(undefined8 *)(param_1 + 0x12);
  iVar5 = 0;
  if (0 < iVar8) {
    iVar5 = iVar8;
  }
  return CONCAT44(iVar5 + iVar11 + uVar10,iVar1 + iVar2 + iVar7);
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280900
#define DAT_00280900 (*(uint8_t *)(0x280900U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280900
#define _DAT_00280900 (*(uint *)(0x280900U))
#define local_3c (*(undefined1 (*)[60])(pf_stack_frame + 20))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
#define local_28 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000e340(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_2 == (byte *)0x0) {
    return 0;
  }
  iVar2 = 0;
  recovered_10002a60(param_2,0,0x2c);
  recovered_10002a60(local_3c,0,0x1c);
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00280800 == 0x50414d57)) &&
     (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) &&
      ((0x103 < _DAT_00280808 && ((code *)(ulong)_DAT_00280900 != (code *)0x0)))))) {
    iVar1 = (*(code *)(ulong)_DAT_00280900)(*param_1,local_3c);
    if (iVar1 != 0) {
      *param_2 = *param_2 | 1;
      *(undefined8 *)(param_2 + 4) = local_28;
      *(undefined8 *)(param_2 + 0xc) = local_38;
      iVar2 = 1;
    }
  }
  *param_2 = *param_2 | 2;
  iVar1 = recovered_1000b840(param_2 + 0x14);
  return iVar1 + iVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280900
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280900
#undef local_3c
#undef local_38
#undef local_28

#define local_70 (*(long *)(pf_stack_frame + 16))
#define local_68 (*(int *)(pf_stack_frame + 24))
#define local_64 (*(undefined8 *)(pf_stack_frame + 28))
#define local_58 (*(undefined8 *)(pf_stack_frame + 40))
#define local_50 (*(int *)(pf_stack_frame + 48))
#define local_4c (*(int *)(pf_stack_frame + 52))
#define local_48 (*(int *)(pf_stack_frame + 56))
#define local_44 (*(int *)(pf_stack_frame + 60))
#define local_40 (*(undefined8 *)(pf_stack_frame + 64))
#define local_38 (*(int * *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e410
 */

undefined8
recovered_1000e410(long param_1,int *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;

  if ((param_2 != (int *)0x0 && param_1 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    iVar4 = *(int *)(param_1 + 4);
    lVar6 = (long)iVar4;
    if (-1 < lVar6) {
      uVar3 = *(uint *)(param_1 + 8);
      if ((((-1 < (long)(int)uVar3) && (0xc0000000 < iVar4 + 0xc0000000U)) && (uVar3 != 0)) &&
         ((ulong)((int)uVar3 * lVar6) < 0x40000000)) {
        uVar1 = *(uint *)(param_1 + 0xc);
        uVar5 = uVar1;
        if ((ulong)uVar1 == 0) {
          uVar5 = iVar4 * 4;
        }
        if (((uint)(iVar4 * 4) <= uVar5) && ((int)((ulong)uVar5 * (ulong)uVar3 >> 0x20) == 0)) {
          uVar3 = (uint)param_4;
          iVar4 = (int)(param_4 >> 0x20);
          if ((iVar4 < 1 || (int)uVar3 < 1) || (ulong)uVar1 < (ulong)((uintptr_t)lVar6 * 4)) {
            return 0;
          }
          iVar7 = (int)param_3;
          if (0x7fffffff < (long)((ulong)(uVar3 & 0x7fffffff) + (long)iVar7)) {
            return 0;
          }
          if (0x7fffffff < (long)((param_4 >> 0x20) + (param_3 >> 0x20))) {
            return 0;
          }
          local_40 = param_5;
          local_38 = param_2;
          recovered_10002a60(&local_70,0,0x30);
          local_70 = *(long *)(param_1 + 0x30);
          local_68 = *(int *)(param_1 + 4);
          local_64 = *(undefined8 *)(param_1 + 8);
          local_58 = local_40;
          local_50 = 0;
          if (0 < iVar7) {
            local_50 = iVar7;
          }
          local_44 = (int)((ulong)param_3 >> 0x20);
          local_4c = 0;
          if (0xffffffff < param_3) {
            local_4c = local_44;
          }
          iVar2 = local_68;
          if ((int)(iVar7 + uVar3) < local_68) {
            iVar2 = iVar7 + uVar3;
          }
          local_44 = local_44 + iVar4;
          if ((int)local_64 <= local_44) {
            local_44 = (int)local_64;
          }
          local_44 = local_44 - local_4c;
          local_48 = iVar2 - local_50;
          if (local_48 != 0 && local_50 <= iVar2) {
            if (local_44 < 1) {
              return 0;
            }
            recovered_1000e5f0(&local_70,local_38,param_3,param_4);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

#undef local_70
#undef local_68
#undef local_64
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_38

#undef DAT_1001080b
#define DAT_1001080b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef DAT_10013354
#define DAT_10013354 (*(int *)(((uintptr_t)pf_module_state + 0x2d31U)))
#undef DAT_10013358
#define DAT_10013358 (*(uint *)(((uintptr_t)pf_module_state + 0x2d35U)))
#undef DAT_1001335c
#define DAT_1001335c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d39U)))
#undef DAT_10013360
#define DAT_10013360 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d3dU)))
#undef DAT_10013380
#define DAT_10013380 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d5dU)))
#undef DAT_10013384
#define DAT_10013384 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d61U)))
#undef DAT_100133cc
#define DAT_100133cc (*(uint *)(((uintptr_t)pf_module_state + 0x2da9U)))
#undef DAT_10013414
#define DAT_10013414 (*(int *)(((uintptr_t)pf_module_state + 0x2df1U)))
#undef DAT_10013474
#define DAT_10013474 (*(char *)(((uintptr_t)pf_module_state + 0x2e51U)))
#define local_78 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5f0
 */

void recovered_1000e5f0(long *param_1,int *param_2,long param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  byte *pbVar23;
  ulong uVar24;
  undefined1 uVar25;
  uint uVar26;
  ulong uVar27;
  undefined *puVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  undefined1 uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  undefined1 uVar40;
  byte bVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  undefined1 *puVar45;
  ulong uVar46;
  byte bVar47;
  int iVar48;
  long lVar49;
  byte bVar50;
  ulong uVar51;
  bool bVar52;

  iVar7 = (int)param_4;
  iVar35 = (int)((ulong)param_4 >> 0x20);
  if (iVar35 < 1 || (iVar7 < 1 || (param_2 == (int *)0x0 || param_1 == (long *)0x0))) {
    return;
  }
  iVar5 = *param_2;
  iVar15 = (int)((ulong)param_3 >> 0x20);
  iVar19 = (int)param_3;
  if ((((*(byte *)(param_2 + 1) & 2) != 0) && (iVar5 != 3)) && (iVar5 != 8)) {
    iVar37 = (int)param_1[4];
    iVar30 = iVar37;
    if (iVar37 < iVar19) {
      iVar30 = iVar19;
    }
    iVar48 = *(int *)((long)param_1 + 0x24);
    iVar4 = iVar48;
    if (iVar48 < iVar15) {
      iVar4 = iVar15;
    }
    iVar37 = iVar37 + (int)param_1[5];
    if (iVar19 + iVar7 < iVar37) {
      iVar37 = iVar19 + iVar7;
    }
    iVar44 = *(int *)((long)param_1 + 0x2c) + iVar48;
    if (iVar15 + iVar35 < iVar44) {
      iVar44 = iVar15 + iVar35;
    }
    if (((iVar4 < iVar44) && (iVar37 - iVar30 != 0 && iVar30 <= iVar37)) && (*param_1 != 0)) {
      iVar5 = param_2[0xc];
      lVar21 = param_3 >> 0x20;
      if (param_3 >> 0x20 < (long)iVar48) {
        lVar21 = (long)iVar48;
      }
      iVar48 = (int)lVar21;
      uVar29 = iVar37 - iVar30 & 3;
      do {
        puVar45 = (undefined1 *)
                  ((ulong)*(uint *)(param_1 + 2) * lVar21 + *param_1 + (long)iVar30 * 4);
        uVar36 = (undefined1)((uint)iVar5 >> 0x10);
        uVar40 = (undefined1)((uint)iVar5 >> 8);
        uVar25 = (undefined1)iVar5;
        iVar3 = iVar30;
        if (uVar29 != 0) {
          iVar3 = 0;
          do {
            *puVar45 = uVar36;
            puVar45[1] = uVar40;
            puVar45[2] = uVar25;
            puVar45[3] = 0xff;
            puVar45 = puVar45 + 4;
            iVar3 = iVar3 + -1;
          } while (-uVar29 != iVar3);
          iVar3 = iVar30 - iVar3;
        }
        if ((uint)(iVar30 - iVar37) < 0xfffffffd) {
          lVar20 = 0;
          do {
            puVar45[lVar20 * 4] = uVar36;
            puVar45[lVar20 * 4 + 1] = uVar40;
            puVar45[lVar20 * 4 + 2] = uVar25;
            puVar45[lVar20 * 4 + 3] = 0xff;
            puVar45[lVar20 * 4 + 4] = uVar36;
            puVar45[lVar20 * 4 + 5] = uVar40;
            puVar45[lVar20 * 4 + 6] = uVar25;
            puVar45[lVar20 * 4 + 7] = 0xff;
            puVar45[lVar20 * 4 + 8] = uVar36;
            puVar45[lVar20 * 4 + 9] = uVar40;
            puVar45[lVar20 * 4 + 10] = uVar25;
            puVar45[lVar20 * 4 + 0xb] = 0xff;
            puVar45[lVar20 * 4 + 0xc] = uVar36;
            puVar45[lVar20 * 4 + 0xd] = uVar40;
            puVar45[lVar20 * 4 + 0xe] = uVar25;
            puVar45[lVar20 * 4 + 0xf] = 0xff;
            lVar20 = lVar20 + 4;
          } while (iVar37 - iVar3 != (int)lVar20);
        }
        lVar21 = lVar21 + 1;
      } while ((iVar48 - iVar4) + iVar44 != (int)lVar21);
      iVar5 = *param_2;
    }
  }
  cVar2 = DAT_10013474;
  iVar37 = (int)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  if (iVar37 < 1) {
    iVar37 = 0;
  }
  iVar30 = (int)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20);
  if (iVar30 < 1) {
    iVar30 = 0;
  }
  iVar4 = (int)*(undefined8 *)(param_2 + 0x10);
  iVar48 = 0;
  if (0 < iVar4) {
    iVar48 = iVar4;
  }
  iVar44 = (int)*(undefined8 *)(param_2 + 0x12);
  iVar4 = 0;
  if (0 < iVar44) {
    iVar4 = iVar44;
  }
  uVar29 = iVar7 - (iVar30 + iVar37);
  uVar51 = 0;
  if (0 < (int)uVar29) {
    uVar51 = (ulong)uVar29;
  }
  uVar33 = iVar35 - (iVar4 + iVar48);
  uVar46 = 0;
  if (0 < (int)uVar33) {
    uVar46 = (ulong)uVar33;
  }
  if (7 < iVar5 - 1U) {
    return;
  }
  uVar38 = iVar37 + iVar19;
  uVar22 = (ulong)uVar38;
  uVar42 = iVar48 + iVar15;
  uVar31 = (ulong)uVar42;
  uVar9 = uVar46 << 0x20 | uVar51;
  lVar21 = CONCAT44(uVar42,uVar38);
  iVar35 = (int)uVar51;
  iVar7 = (int)uVar46;
  switch((uintptr_t)(iVar5)) {
  case 1:
    uVar10 = recovered_1000fdc0(*(undefined **)(param_2 + 2),
                                param_2[0xd] + (uint)(param_2[0xd] == 0));
    iVar5 = param_2[10];
    uVar9 = uVar10 & 0xffffffff;
    if (iVar35 < (int)uVar10) {
      uVar9 = uVar51;
    }
    uVar11 = uVar10 >> 0x20;
    if (iVar7 < (int)(uVar10 >> 0x20)) {
      uVar11 = uVar46;
    }
    if (iVar5 != 3) {
      uVar51 = uVar9;
      uVar46 = uVar11;
      if (iVar5 == 2) {
        uVar22 = (ulong)((iVar35 + uVar38) - (int)uVar9);
        uVar31 = (ulong)((iVar7 + uVar42) - (int)uVar11);
      }
      else if (iVar5 == 1) {
        uVar22 = (ulong)((iVar35 - (int)uVar9) / 2 + uVar38);
        uVar31 = (ulong)((iVar7 - (int)uVar11) / 2 + uVar42);
      }
    }
    uVar22 = uVar22 | uVar31 << 0x20;
    uVar51 = uVar51 | uVar46 << 0x20;
    puVar28 = &DAT_1001080b;
    if (*(undefined **)(param_2 + 2) != (undefined *)0x0) {
      puVar28 = *(undefined **)(param_2 + 2);
    }
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      iVar7 = 0x202020;
      if (DAT_10013474 != '\0') {
        iVar7 = DAT_10013354;
      }
    }
    else {
      iVar7 = param_2[0xb];
    }
    iVar35 = param_2[0xd] + (uint)(param_2[0xd] == 0);
    goto LAB_1000f8fc;
  case 2:
    uVar6 = 0xf4f4f4;
    if (DAT_10013474 != '\0') {
      uVar6 = DAT_10013358;
    }
    if ((*(byte *)(param_2 + 1) & 2) != 0) {
      uVar6 = param_2[0xc];
    }
    uVar26 = *(uint *)(param_1 + 4);
    uVar17 = uVar26;
    if ((int)uVar26 < (int)uVar38) {
      uVar17 = uVar38;
    }
    uVar18 = *(uint *)((long)param_1 + 0x24);
    uVar43 = uVar18;
    if ((int)uVar18 < (int)uVar42) {
      uVar43 = uVar42;
    }
    iVar5 = uVar26 + (int)param_1[5];
    if ((int)(iVar35 + uVar38) < iVar5) {
      iVar5 = iVar35 + uVar38;
    }
    iVar35 = uVar18 + *(int *)((long)param_1 + 0x2c);
    if ((int)(iVar7 + uVar42) < iVar35) {
      iVar35 = iVar7 + uVar42;
    }
    if (((((int)uVar43 < iVar35) && (iVar5 - uVar17 != 0 && (int)uVar17 <= iVar5)) &&
        (0 < (int)uVar33)) && ((0 < (int)uVar29 && (*param_1 != 0)))) {
      lVar21 = (long)(int)uVar43;
      uVar29 = iVar5 - uVar17 & 3;
      do {
        puVar45 = (undefined1 *)
                  ((ulong)*(uint *)(param_1 + 2) * lVar21 + *param_1 + (long)(int)uVar17 * 4);
        uVar36 = (undefined1)(uVar6 >> 0x10);
        uVar40 = (undefined1)(uVar6 >> 8);
        uVar25 = (undefined1)uVar6;
        uVar33 = uVar17;
        if (uVar29 != 0) {
          iVar7 = 0;
          do {
            *puVar45 = uVar36;
            puVar45[1] = uVar40;
            puVar45[2] = uVar25;
            puVar45[3] = 0xff;
            puVar45 = puVar45 + 4;
            iVar7 = iVar7 + -1;
          } while (-uVar29 != iVar7);
          uVar33 = uVar17 - iVar7;
        }
        if (uVar17 - iVar5 < 0xfffffffd) {
          lVar20 = 0;
          do {
            puVar45[lVar20 * 4] = uVar36;
            puVar45[lVar20 * 4 + 1] = uVar40;
            puVar45[lVar20 * 4 + 2] = uVar25;
            puVar45[lVar20 * 4 + 3] = 0xff;
            puVar45[lVar20 * 4 + 4] = uVar36;
            puVar45[lVar20 * 4 + 5] = uVar40;
            puVar45[lVar20 * 4 + 6] = uVar25;
            puVar45[lVar20 * 4 + 7] = 0xff;
            puVar45[lVar20 * 4 + 8] = uVar36;
            puVar45[lVar20 * 4 + 9] = uVar40;
            puVar45[lVar20 * 4 + 10] = uVar25;
            puVar45[lVar20 * 4 + 0xb] = 0xff;
            puVar45[lVar20 * 4 + 0xc] = uVar36;
            puVar45[lVar20 * 4 + 0xd] = uVar40;
            puVar45[lVar20 * 4 + 0xe] = uVar25;
            puVar45[lVar20 * 4 + 0xf] = 0xff;
            lVar20 = lVar20 + 4;
          } while (iVar5 - uVar33 != (int)lVar20);
        }
        lVar21 = lVar21 + 1;
      } while (iVar35 != (int)lVar21);
    }
    break;
  case 3:
    pbVar23 = (byte *)param_1[3];
    uVar6 = 0;
    uVar26 = 0;
    if ((pbVar23 == (byte *)0x0) || ((*pbVar23 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      iVar5 = *(int *)(pbVar23 + 4);
      bVar1 = false;
      if (((((int)uVar38 <= iVar5) && (iVar15 = *(int *)(pbVar23 + 8), (int)uVar42 <= iVar15)) &&
          (iVar5 < (int)(iVar35 + uVar38))) && (iVar15 < (int)(uVar42 + iVar7))) {
        iVar37 = (int)param_1[4];
        iVar19 = (int)((ulong)param_1[4] >> 0x20);
        if ((iVar5 < iVar37 + (int)param_1[5] && (iVar19 <= iVar15 && iVar37 <= iVar5)) &&
           (iVar15 < (int)((ulong)param_1[5] >> 0x20) + iVar19)) {
          uVar6 = *(uint *)(pbVar23 + 0xc);
          uVar26 = *(uint *)(pbVar23 + 0x10);
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
    }
    uVar17 = 0xf4f4f4;
    if (DAT_10013474 != '\0') {
      uVar17 = DAT_10013358;
    }
    if ((*(byte *)(param_2 + 1) & 2) != 0) {
      uVar17 = param_2[0xc];
    }
    if ((uVar6 & 1) == 0) {
      if (bVar1) {
        iVar15 = 0x12;
        iVar5 = 0x52;
        uVar6 = 0xffffff;
        puVar12 = &DAT_10013384;
        goto LAB_1000ecd2;
      }
      uVar6 = *(uint *)(param_1 + 4);
      uVar18 = *(uint *)((long)param_1 + 0x24);
      uVar43 = uVar6;
      if ((int)uVar6 < (int)uVar38) {
        uVar43 = uVar38;
      }
      uVar34 = uVar18;
      if ((int)uVar18 < (int)uVar42) {
        uVar34 = uVar42;
      }
      iVar5 = uVar6 + (int)param_1[5];
      if ((int)(iVar35 + uVar38) < iVar5) {
        iVar5 = iVar35 + uVar38;
      }
      iVar35 = uVar18 + *(int *)((long)param_1 + 0x2c);
      if ((int)(iVar7 + uVar42) < iVar35) {
        iVar35 = iVar7 + uVar42;
      }
      if ((((int)uVar34 < iVar35) && (iVar5 - uVar43 != 0 && (int)uVar43 <= iVar5)) &&
         ((0 < (int)uVar33 && ((0 < (int)uVar29 && (*param_1 != 0)))))) {
        lVar20 = (long)(int)uVar34;
        uVar42 = iVar5 - uVar43 & 3;
        do {
          puVar45 = (undefined1 *)
                    ((ulong)*(uint *)(param_1 + 2) * lVar20 + *param_1 + (long)(int)uVar43 * 4);
          uVar36 = (undefined1)(uVar17 >> 0x10);
          uVar40 = (undefined1)(uVar17 >> 8);
          uVar25 = (undefined1)uVar17;
          uVar6 = uVar43;
          if (uVar42 != 0) {
            iVar7 = 0;
            do {
              *puVar45 = uVar36;
              puVar45[1] = uVar40;
              puVar45[2] = uVar25;
              puVar45[3] = 0xff;
              puVar45 = puVar45 + 4;
              iVar7 = iVar7 + -1;
            } while (-uVar42 != iVar7);
            uVar6 = uVar43 - iVar7;
          }
          if (uVar43 - iVar5 < 0xfffffffd) {
            lVar49 = 0;
            do {
              puVar45[lVar49 * 4] = uVar36;
              puVar45[lVar49 * 4 + 1] = uVar40;
              puVar45[lVar49 * 4 + 2] = uVar25;
              puVar45[lVar49 * 4 + 3] = 0xff;
              puVar45[lVar49 * 4 + 4] = uVar36;
              puVar45[lVar49 * 4 + 5] = uVar40;
              puVar45[lVar49 * 4 + 6] = uVar25;
              puVar45[lVar49 * 4 + 7] = 0xff;
              puVar45[lVar49 * 4 + 8] = uVar36;
              puVar45[lVar49 * 4 + 9] = uVar40;
              puVar45[lVar49 * 4 + 10] = uVar25;
              puVar45[lVar49 * 4 + 0xb] = 0xff;
              puVar45[lVar49 * 4 + 0xc] = uVar36;
              puVar45[lVar49 * 4 + 0xd] = uVar40;
              puVar45[lVar49 * 4 + 0xe] = uVar25;
              puVar45[lVar49 * 4 + 0xf] = 0xff;
              lVar49 = lVar49 + 4;
            } while (iVar5 - uVar6 != (int)lVar49);
          }
          lVar20 = lVar20 + 1;
        } while (iVar35 != (int)lVar20);
      }
LAB_1000f811:
      uVar8 = 0x9a9a9a;
      puVar13 = &DAT_1001335c;
    }
    else {
      iVar15 = 0xc;
      iVar5 = 0x58;
      uVar6 = 0;
      puVar12 = (uint *)&DAT_10013380;
LAB_1000ecd2:
      uVar18 = *(uint *)(param_1 + 4);
      uVar43 = *(uint *)((long)param_1 + 0x24);
      uVar34 = uVar18;
      if ((int)uVar18 < (int)uVar38) {
        uVar34 = uVar38;
      }
      uVar14 = uVar43;
      if ((int)uVar43 < (int)uVar42) {
        uVar14 = uVar42;
      }
      iVar19 = uVar18 + (int)param_1[5];
      if ((int)(iVar35 + uVar38) < iVar19) {
        iVar19 = iVar35 + uVar38;
      }
      iVar35 = uVar43 + *(int *)((long)param_1 + 0x2c);
      if ((int)(iVar7 + uVar42) < iVar35) {
        iVar35 = iVar7 + uVar42;
      }
      if (((((int)uVar14 < iVar35) && (iVar19 - uVar34 != 0 && (int)uVar34 <= iVar19)) &&
          (0 < (int)uVar33)) && ((0 < (int)uVar29 && (*param_1 != 0)))) {
        if (DAT_10013474 != '\0') {
          uVar6 = *puVar12;
        }
        uVar18 = ((uVar6 & 0xff) * iVar15 + (uVar17 & 0xff) * iVar5 + 0x32 & 0xffff) >> 2;
        uVar42 = ((uVar17 >> 8 & 0xff) * iVar5 + (uVar6 >> 8 & 0xff) * iVar15 + 0x32 & 0xffff) >> 2;
        bVar50 = (byte)(uVar42 * 0x147b >> 0x19) |
                 (byte)(((uVar6 >> 0x10 & 0xff) * iVar15 + (uVar17 >> 0x10 & 0xff) * iVar5 + 0x32 &
                        0xffff) / 100);
        bVar41 = (byte)(uVar18 * 0x147b >> 0x19) | (byte)(uVar42 / 0x19);
        lVar20 = (long)(int)uVar14;
        uVar42 = iVar19 - uVar34 & 3;
        do {
          pbVar23 = (byte *)((ulong)*(uint *)(param_1 + 2) * lVar20 + *param_1 +
                            (long)(int)uVar34 * 4);
          bVar47 = (byte)(uVar18 / 0x19);
          uVar6 = uVar34;
          if (uVar42 != 0) {
            iVar7 = 0;
            do {
              *pbVar23 = bVar50;
              pbVar23[1] = bVar41;
              pbVar23[2] = bVar47;
              pbVar23[3] = 0xff;
              pbVar23 = pbVar23 + 4;
              iVar7 = iVar7 + -1;
            } while (-uVar42 != iVar7);
            uVar6 = uVar34 - iVar7;
          }
          if (uVar34 - iVar19 < 0xfffffffd) {
            lVar49 = 0;
            do {
              pbVar23[lVar49 * 4] = bVar50;
              pbVar23[lVar49 * 4 + 1] = bVar41;
              pbVar23[lVar49 * 4 + 2] = bVar47;
              pbVar23[lVar49 * 4 + 3] = 0xff;
              pbVar23[lVar49 * 4 + 4] = bVar50;
              pbVar23[lVar49 * 4 + 5] = bVar41;
              pbVar23[lVar49 * 4 + 6] = bVar47;
              pbVar23[lVar49 * 4 + 7] = 0xff;
              pbVar23[lVar49 * 4 + 8] = bVar50;
              pbVar23[lVar49 * 4 + 9] = bVar41;
              pbVar23[lVar49 * 4 + 10] = bVar47;
              pbVar23[lVar49 * 4 + 0xb] = 0xff;
              pbVar23[lVar49 * 4 + 0xc] = bVar50;
              pbVar23[lVar49 * 4 + 0xd] = bVar41;
              pbVar23[lVar49 * 4 + 0xe] = bVar47;
              pbVar23[lVar49 * 4 + 0xf] = 0xff;
              lVar49 = lVar49 + 4;
            } while (iVar19 - uVar6 != (int)lVar49);
          }
          lVar20 = lVar20 + 1;
        } while (iVar35 != (int)lVar20);
      }
      if (!bVar1) goto LAB_1000f811;
      uVar8 = 0x286dc4;
      puVar13 = &DAT_10013360;
    }
    if (cVar2 != '\0') {
      uVar8 = *puVar13;
    }
    recovered_1000cb80(param_1,lVar21,uVar9,uVar8);
    if (((uVar26 & 1) != 0) && (*(code **)(param_2 + 0x14) != (code *)0x0)) {
      (**(code **)(param_2 + 0x14))(*(undefined8 *)(param_2 + 0x16));
    }
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      iVar7 = 0x202020;
      if (DAT_10013474 != '\0') {
        iVar7 = DAT_10013354;
      }
    }
    else {
      iVar7 = param_2[0xb];
    }
    puVar28 = &DAT_1001080b;
    if (*(undefined **)(param_2 + 2) != (undefined *)0x0) {
      puVar28 = *(undefined **)(param_2 + 2);
    }
    uVar22 = (ulong)(uVar38 + 10) | (uVar31 << 0x20) + 0x600000000;
    uVar38 = 0xc;
    if (0xc < (int)uVar33) {
      uVar38 = uVar33;
    }
    uVar33 = 0x14;
    if (0x14 < (int)uVar29) {
      uVar33 = uVar29;
    }
    uVar51 = CONCAT44(uVar38 - 0xc,uVar33 - 0x14);
    iVar35 = param_2[0xd] + (uint)(param_2[0xd] == 0);
    iVar5 = 1;
LAB_1000f8fc:
    recovered_10010240(param_1,uVar22,uVar51,(long)puVar28,iVar7,iVar35,iVar5,'\0');
    return;
  case 5:
    iVar7 = 1;
    goto LAB_1000ec97;
  case 6:
    iVar7 = 0;
LAB_1000ec97:
    recovered_1000ff50(param_1,(long)param_2,param_3,param_4,iVar7);
    return;
  case 7:
    if ((*(long *)(param_2 + 6) != 0) && (param_2[8] != 0)) {
      lVar21 = 0;
      uVar22 = 0;
      do {
        lVar20 = *(long *)(param_2 + 6);
        uVar11 = recovered_1000df60((int *)(lVar20 + lVar21),uVar9);
        uVar10 = uVar51;
        if ((int)uVar11 <= iVar35) {
          uVar10 = uVar11 & 0xffffffff;
        }
        iVar5 = param_2[10];
        uVar29 = (uint)(uVar11 >> 0x20);
        uVar11 = uVar46;
        if ((int)uVar29 <= iVar7) {
          uVar11 = (ulong)uVar29;
        }
        uVar24 = uVar31;
        uVar27 = uVar51;
        uVar32 = uVar46;
        uVar29 = uVar38;
        if (iVar5 != 3) {
          if (iVar5 == 2) {
            uVar29 = (iVar35 + uVar38) - (int)uVar10;
            uVar24 = (ulong)((uVar42 + iVar7) - (int)uVar11);
          }
          else if (iVar5 == 1) {
            uVar24 = (ulong)((iVar7 - (int)uVar11) / 2 + uVar42);
            uVar29 = (iVar35 - (int)uVar10) / 2 + uVar38;
          }
          uVar27 = uVar10;
          uVar32 = uVar11;
        }
        recovered_1000e5f0(param_1,(int *)(lVar20 + lVar21),(ulong)uVar29 | uVar24 << 0x20,
                           uVar27 | uVar32 << 0x20);
        uVar22 = uVar22 + 1;
        lVar21 = lVar21 + 0x60;
      } while (uVar22 < (uint)param_2[8]);
    }
    break;
  case 8:
    pbVar23 = (byte *)param_1[3];
    if ((pbVar23 == (byte *)0x0) || ((*pbVar23 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      iVar5 = *(int *)(pbVar23 + 4);
      bVar1 = false;
      if (((((int)uVar38 <= iVar5) && (iVar15 = *(int *)(pbVar23 + 8), (int)uVar42 <= iVar15)) &&
          (iVar5 < (int)(iVar35 + uVar38))) && (iVar15 < (int)(uVar42 + iVar7))) {
        iVar19 = (int)param_1[4];
        iVar37 = (int)((ulong)param_1[4] >> 0x20);
        bVar1 = (iVar5 < iVar19 + (int)param_1[5] && (iVar37 <= iVar15 && iVar19 <= iVar5)) &&
                iVar15 < (int)((ulong)param_1[5] >> 0x20) + iVar37;
      }
    }
    if (*(char **)(param_2 + 2) == (char *)0x0) {
      bVar52 = false;
    }
    else {
      bVar52 = **(char **)(param_2 + 2) != '\0';
    }
    iVar5 = param_2[0xd] + (uint)(param_2[0xd] == 0);
    uVar6 = iVar35 - 0x14;
    uVar51 = 0;
    if (0 < (int)uVar6) {
      uVar51 = (ulong)uVar6;
    }
    uVar26 = 0xc;
    if (0xc < (int)uVar33) {
      uVar26 = uVar33;
    }
    uVar17 = param_2[1];
    uVar18 = 0xffffff;
    if (DAT_10013474 != '\0') {
      uVar18 = DAT_100133cc;
    }
    if ((uVar17 & 2) != 0) {
      uVar18 = param_2[0xc];
    }
    uVar26 = uVar26 - 0xc;
    bVar41 = (byte)((uVar17 & 0x10) >> 4);
    if (bVar1 && bVar41 == 0) {
      uVar43 = 0xffffff;
      if (DAT_10013474 != '\0') {
        uVar43 = DAT_10013384;
      }
      uVar18 = ((uVar18 & 0xff) * 0x5a + (uVar43 & 0xff) * 10 + 0x32 & 0xffff) / 100 |
               (((uVar18 >> 8 & 0xff) * 0x5a + (uVar43 >> 8 & 0xff) * 10 + 0x32 & 0xffff) >> 2) *
               0x147b >> 9 & 0x3ff00 |
               (((uVar18 >> 0x10 & 0xff) * 0x5a + (uVar43 >> 0x10 & 0xff) * 10 + 0x32 & 0xffff) >> 2
               ) * 0x147b >> 1 & 0x3ff0000;
    }
    uVar43 = *(uint *)(param_1 + 4);
    uVar34 = uVar43;
    if ((int)uVar43 < (int)uVar38) {
      uVar34 = uVar38;
    }
    uVar14 = *(uint *)((long)param_1 + 0x24);
    uVar39 = uVar14;
    if ((int)uVar14 < (int)uVar42) {
      uVar39 = uVar42;
    }
    iVar15 = uVar43 + (int)param_1[5];
    if ((int)(iVar35 + uVar38) < iVar15) {
      iVar15 = iVar35 + uVar38;
    }
    iVar35 = uVar14 + *(int *)((long)param_1 + 0x2c);
    if ((int)(iVar7 + uVar42) < iVar35) {
      iVar35 = iVar7 + uVar42;
    }
    local_78 = (int)(lVar21 + 10U);
    if ((((int)uVar39 < iVar35) && (iVar15 - uVar34 != 0 && (int)uVar34 <= iVar15)) &&
       ((0 < (int)uVar33 && ((0 < (int)uVar29 && (*param_1 != 0)))))) {
      lVar20 = (long)(int)uVar39;
      uVar38 = iVar15 - uVar34 & 3;
      do {
        puVar45 = (undefined1 *)
                  ((ulong)*(uint *)(param_1 + 2) * lVar20 + *param_1 + (long)(int)uVar34 * 4);
        uVar40 = (undefined1)(uVar18 >> 0x10);
        uVar36 = (undefined1)(uVar18 >> 8);
        uVar25 = (undefined1)uVar18;
        uVar43 = uVar34;
        if (uVar38 != 0) {
          iVar7 = 0;
          do {
            *puVar45 = uVar40;
            puVar45[1] = uVar36;
            puVar45[2] = uVar25;
            puVar45[3] = 0xff;
            puVar45 = puVar45 + 4;
            iVar7 = iVar7 + -1;
          } while (-uVar38 != iVar7);
          uVar43 = uVar34 - iVar7;
        }
        if (uVar34 - iVar15 < 0xfffffffd) {
          lVar49 = 0;
          do {
            puVar45[lVar49 * 4] = uVar40;
            puVar45[lVar49 * 4 + 1] = uVar36;
            puVar45[lVar49 * 4 + 2] = uVar25;
            puVar45[lVar49 * 4 + 3] = 0xff;
            puVar45[lVar49 * 4 + 4] = uVar40;
            puVar45[lVar49 * 4 + 5] = uVar36;
            puVar45[lVar49 * 4 + 6] = uVar25;
            puVar45[lVar49 * 4 + 7] = 0xff;
            puVar45[lVar49 * 4 + 8] = uVar40;
            puVar45[lVar49 * 4 + 9] = uVar36;
            puVar45[lVar49 * 4 + 10] = uVar25;
            puVar45[lVar49 * 4 + 0xb] = 0xff;
            puVar45[lVar49 * 4 + 0xc] = uVar40;
            puVar45[lVar49 * 4 + 0xd] = uVar36;
            puVar45[lVar49 * 4 + 0xe] = uVar25;
            puVar45[lVar49 * 4 + 0xf] = 0xff;
            lVar49 = lVar49 + 4;
          } while (iVar15 - uVar43 != (int)lVar49);
        }
        lVar20 = lVar20 + 1;
      } while (iVar35 != (int)lVar20);
    }
    uVar8 = 0x286dc4;
    if (cVar2 != '\0') {
      uVar8 = DAT_10013360;
    }
    uVar16 = 0x9a9a9a;
    if (cVar2 != '\0') {
      uVar16 = DAT_1001335c;
    }
    if (bVar1) {
      uVar16 = uVar8;
    }
    if ((uVar17 & 0x10) != 0) {
      uVar16 = uVar8;
    }
    recovered_1000cb80(param_1,lVar21,uVar9,uVar16);
    if (((bVar1) && ((*(byte *)(param_1[3] + 0x10) & 1) != 0)) &&
       (*(code **)(param_2 + 0x14) != (code *)0x0)) {
      (**(code **)(param_2 + 0x14))(*(undefined8 *)(param_2 + 0x16));
    }
    if (bVar52 == false) {
      puVar28 = &DAT_1001080b;
      if (*(undefined **)(param_2 + 4) != (undefined *)0x0) {
        puVar28 = *(undefined **)(param_2 + 4);
      }
      iVar7 = 0x5c5c5c;
      if (DAT_10013474 != '\0') {
        iVar7 = DAT_10013414;
      }
    }
    else {
      puVar28 = *(undefined **)(param_2 + 2);
      if ((*(byte *)(param_2 + 1) & 1) == 0) {
        iVar7 = 0x202020;
        if (DAT_10013474 != '\0') {
          iVar7 = DAT_10013354;
        }
      }
      else {
        iVar7 = param_2[0xb];
      }
    }
    recovered_10010240(param_1,lVar21 + 10U & 0xffffffff | (ulong)(uVar42 + 6) << 0x20,
                       ((ulong)uVar26 << 0x20) + uVar51,(long)puVar28,iVar7,iVar5,0,bVar41 & bVar52)
    ;
    if ((((uVar17 & 0x10) != 0) && (0x14 < (int)uVar29)) && (0xc < (int)uVar33)) {
      if (bVar52 == false) {
        puVar28 = &DAT_1001080b;
      }
      else {
        puVar28 = *(undefined **)(param_2 + 2);
      }
      uVar51 = recovered_1000fdc0(puVar28,iVar5);
      uVar33 = (uint)(uVar51 >> 0x20);
      uVar29 = 8;
      if (8 < (int)uVar33) {
        uVar29 = uVar33;
      }
      if (uVar26 < uVar29) {
        uVar29 = uVar26;
      }
      iVar7 = (int)(uVar26 - uVar29) / 2 + uVar42 + 6;
      uVar33 = 2;
      if (2 < uVar6) {
        uVar33 = uVar6;
      }
      iVar35 = uVar33 - 2;
      if ((int)uVar51 < (int)(uVar33 - 2)) {
        iVar35 = (int)uVar51;
      }
      iVar5 = (int)param_1[4];
      iVar15 = iVar35 + local_78;
      if (iVar35 + local_78 <= iVar5) {
        iVar15 = iVar5;
      }
      iVar19 = *(int *)((long)param_1 + 0x24);
      iVar37 = iVar19;
      if (iVar19 < iVar7) {
        iVar37 = iVar7;
      }
      iVar5 = iVar5 + (int)param_1[5];
      iVar35 = iVar35 + local_78 + 1;
      if (iVar35 < iVar5) {
        iVar5 = iVar35;
      }
      iVar19 = iVar19 + *(int *)((long)param_1 + 0x2c);
      if ((int)(iVar7 + uVar29) < iVar19) {
        iVar19 = iVar7 + uVar29;
      }
      if (((iVar5 - iVar15 != 0 && iVar15 <= iVar5) && (*param_1 != 0)) && (iVar37 < iVar19)) {
        uVar8 = 0x286dc4;
        if (DAT_10013474 != '\0') {
          uVar8 = DAT_10013360;
        }
        lVar21 = (long)iVar37;
        uVar29 = iVar5 - iVar15 & 3;
        do {
          puVar45 = (undefined1 *)
                    ((ulong)*(uint *)(param_1 + 2) * lVar21 + *param_1 + (long)iVar15 * 4);
          uVar36 = (undefined1)((uint)uVar8 >> 0x10);
          uVar40 = (undefined1)((uint)uVar8 >> 8);
          uVar25 = (undefined1)uVar8;
          iVar7 = iVar15;
          if (uVar29 != 0) {
            iVar7 = 0;
            do {
              *puVar45 = uVar36;
              puVar45[1] = uVar40;
              puVar45[2] = uVar25;
              puVar45[3] = 0xff;
              puVar45 = puVar45 + 4;
              iVar7 = iVar7 + -1;
            } while (-uVar29 != iVar7);
            iVar7 = iVar15 - iVar7;
          }
          if ((uint)(iVar15 - iVar5) < 0xfffffffd) {
            lVar20 = 0;
            do {
              puVar45[lVar20 * 4] = uVar36;
              puVar45[lVar20 * 4 + 1] = uVar40;
              puVar45[lVar20 * 4 + 2] = uVar25;
              puVar45[lVar20 * 4 + 3] = 0xff;
              puVar45[lVar20 * 4 + 4] = uVar36;
              puVar45[lVar20 * 4 + 5] = uVar40;
              puVar45[lVar20 * 4 + 6] = uVar25;
              puVar45[lVar20 * 4 + 7] = 0xff;
              puVar45[lVar20 * 4 + 8] = uVar36;
              puVar45[lVar20 * 4 + 9] = uVar40;
              puVar45[lVar20 * 4 + 10] = uVar25;
              puVar45[lVar20 * 4 + 0xb] = 0xff;
              puVar45[lVar20 * 4 + 0xc] = uVar36;
              puVar45[lVar20 * 4 + 0xd] = uVar40;
              puVar45[lVar20 * 4 + 0xe] = uVar25;
              puVar45[lVar20 * 4 + 0xf] = 0xff;
              lVar20 = lVar20 + 4;
            } while (iVar5 - iVar7 != (int)lVar20);
          }
          lVar21 = lVar21 + 1;
        } while (iVar19 != (int)lVar21);
      }
    }
  }
  return;
}

#undef DAT_1001080b
#undef DAT_10013354
#undef DAT_10013358
#undef DAT_1001335c
#undef DAT_10013360
#undef DAT_10013380
#undef DAT_10013384
#undef DAT_100133cc
#undef DAT_10013414
#undef DAT_10013474
#undef local_78

#define local_2d0 (*(undefined1 (*)[720])(pf_stack_frame + 16))
#define local_2b8 (*(uint *)(pf_stack_frame + 40))
#define local_2b4 (*(uint *)(pf_stack_frame + 44))
#define local_2a8 (*(byte *)(pf_stack_frame + 56))
#define local_280 (*(uint *)(pf_stack_frame + 96))
#define local_27c (*(uint *)(pf_stack_frame + 100))
#define local_58 (*(long *)(pf_stack_frame + 648))
#define local_50 (*(uint *)(pf_stack_frame + 656))
#define local_4c (*(ulong *)(pf_stack_frame + 660))
#define local_40 (*(undefined8 *)(pf_stack_frame + 672))
#define local_38 (*(undefined8 *)(pf_stack_frame + 680))
#define local_30 (*(uint *)(pf_stack_frame + 688))
#define local_2c (*(int *)(pf_stack_frame + 692))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f950
 */

undefined8 recovered_1000f950(int *param_1,int *param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[768] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  long lVar9;

  if ((param_2 != (int *)0x0 && param_1 != (int *)0x0) && (*param_1 != 0)) {
    recovered_10002a60(local_2d0,0,0x278);
    uVar2 = recovered_1000b5c0(param_1,local_2d0);
    if (((int)uVar2 != 0) && ((local_2a8 & 0x11) == 0)) {
      if (local_280 == 0) {
        local_280 = local_2b8;
      }
      if (local_27c == 0) {
        local_27c = local_2b4;
      }
      if (local_280 == 0) {
        local_280 = param_1[1];
      }
      if (local_27c == 0) {
        local_27c = param_1[2];
      }
      uVar2 = recovered_1000b230(param_1,local_280,local_27c);
      if ((int)uVar2 != 0) {
        if (*(long *)(param_1 + 0xc) == 0) {
          return 0;
        }
        recovered_10002a60(&local_58,0,0x30);
        local_58 = *(long *)(param_1 + 0xc);
        local_50 = param_1[1];
        local_4c = *(ulong *)(param_1 + 2);
        local_38 = 0;
        local_2c = (int)local_4c;
        if ((0 < local_2c && 0 < (int)local_50) && local_58 != 0) {
          iVar1 = param_1[4];
          uVar6 = 0;
          do {
            puVar7 = (undefined1 *)((local_4c >> 0x20) * uVar6 + local_58);
            uVar4 = (undefined1)((uint)iVar1 >> 0x10);
            uVar5 = (undefined1)((uint)iVar1 >> 8);
            uVar3 = (undefined1)iVar1;
            uVar8 = local_50 & 0x7ffffffc;
            if (3 < local_50) {
              do {
                *puVar7 = uVar4;
                puVar7[1] = uVar5;
                puVar7[2] = uVar3;
                puVar7[3] = 0xff;
                puVar7[4] = uVar4;
                puVar7[5] = uVar5;
                puVar7[6] = uVar3;
                puVar7[7] = 0xff;
                puVar7[8] = uVar4;
                puVar7[9] = uVar5;
                puVar7[10] = uVar3;
                puVar7[0xb] = 0xff;
                puVar7[0xc] = uVar4;
                puVar7[0xd] = uVar5;
                puVar7[0xe] = uVar3;
                puVar7[0xf] = 0xff;
                puVar7 = puVar7 + 0x10;
                uVar8 = uVar8 - 4;
              } while (uVar8 != 0);
            }
            if ((local_50 & 3) != 0) {
              lVar9 = 0;
              do {
                puVar7[lVar9 * 4] = uVar4;
                puVar7[lVar9 * 4 + 1] = uVar5;
                puVar7[lVar9 * 4 + 2] = uVar3;
                puVar7[lVar9 * 4 + 3] = 0xff;
                lVar9 = lVar9 + 1;
              } while ((local_50 & 3) != (uint)lVar9);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != (local_4c & 0xffffffff));
        }
        local_40 = param_3;
        local_30 = local_50;
        recovered_1000e5f0(&local_58,param_2,0,*(undefined8 *)(param_1 + 1));
        uVar2 = recovered_1000acf0(param_1,*(byte **)(param_1 + 0xe),*(long *)(param_1 + 0xc),
                                   param_1[1],(ulong)(uint)param_1[2],param_1[3],param_1[4]);
        return uVar2;
      }
    }
  }
  return 0;
}

#undef local_2d0
#undef local_2b8
#undef local_2b4
#undef local_2a8
#undef local_280
#undef local_27c
#undef local_58
#undef local_50
#undef local_4c
#undef local_40
#undef local_38
#undef local_30
#undef local_2c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028089c
#define DAT_0028089c (*(uint8_t *)(0x28089cU))
#undef DAT_00280974
#define DAT_00280974 (*(uint8_t *)(0x280974U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028089c
#define _DAT_0028089c (*(uint *)(0x28089cU))
#undef _DAT_00280974
#define _DAT_00280974 (*(uint *)(0x280974U))
#define local_878 (*(int (*)[542])(pf_stack_frame + 24))
#define local_528 (*(undefined1 (*)[1320])(pf_stack_frame + 872))
#define local_2b0 (*(undefined1 (*)[688])(pf_stack_frame + 1504))
#define local_288 (*(uint *)(pf_stack_frame + 1544))
#define local_38 (*(int * *)(pf_stack_frame + 2136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fb90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000fb90(undefined8 *param_1)

{
  unsigned char pf_stack_frame[2224] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;

  uVar3 = 0;
  if ((param_1 != (undefined8 *)0x0) && (param_1[10] != 0)) {
    uVar3 = 0;
    recovered_10002a60(local_878,0,0x350);
    piVar1 = (int *)*param_1;
    piVar7 = piVar1;
    if (piVar1 == (int *)0x0) {
      piVar7 = local_878;
    }
    if ((*piVar7 != 0) || (iVar2 = recovered_1000a4f0(piVar7,param_1 + 1), iVar2 != 0)) {
      local_38 = local_878;
      if (piVar1 != (int *)0x0) {
        local_38 = piVar1;
      }
      local_38[0x12] = 0;
      uVar3 = recovered_1000b5c0(piVar7,local_2b0);
      if (((int)uVar3 != 0) && ((local_288 & 0x11) == 0)) {
        uVar5 = 0;
        while( true ) {
          recovered_10002a60(local_528,0,0x278);
          recovered_1000b5c0(piVar7,local_528);
          if (((((code *)param_1[0xb] != (code *)0x0) &&
               (iVar2 = (*(code *)param_1[0xb])(piVar7,local_528,param_1[0xc]), iVar2 == 0)) ||
              (iVar2 = (*(code *)param_1[10])(piVar7,param_1[0xc]), iVar2 == 0)) ||
             (uVar5 = uVar5 + 1, *(int *)(param_1 + 0xd) - 1U < uVar5)) break;
          uVar4 = *(int *)((long)param_1 + 0x6c) + (uint)(*(int *)((long)param_1 + 0x6c) == 0);
          do {
            uVar6 = 0x20c49b;
            if (uVar4 < 0x20c49b) {
              uVar6 = uVar4;
            }
            if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
                ((_DAT_00280808 < 0xc ||
                 ((_DAT_00280808 < 0x178 || ((code *)(ulong)_DAT_00280974 == (code *)0x0)))))) ||
               (iVar2 = (*(code *)(ulong)_DAT_00280974)(uVar6 * 2000), iVar2 == 0)) {
              if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
                 && ((0x9f < _DAT_00280808 && ((code *)(ulong)_DAT_0028089c != (code *)0x0)))) {
                (*(code *)(ulong)_DAT_0028089c)();
              }
              break;
            }
            uVar4 = uVar4 - uVar6;
          } while (uVar4 != 0);
          local_38[0x12] = 0;
          uVar3 = recovered_1000b5c0(piVar7,local_2b0);
          if (((int)uVar3 == 0) || ((local_288 & 0x11) != 0)) break;
        }
      }
      recovered_1000bc20(piVar7);
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028089c
#undef DAT_00280974
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028089c
#undef _DAT_00280974
#undef local_878
#undef local_528
#undef local_2b0
#undef local_288
#undef local_38

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
#undef DAT_00280a10
#define DAT_00280a10 (*(uint8_t *)(0x280a10U))
#undef DAT_1001080b
#define DAT_1001080b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
#undef _DAT_00280978
#define _DAT_00280978 (*(uint *)(0x280978U))
#undef _DAT_00280a10
#define _DAT_00280a10 (*(uint *)(0x280a10U))
#define local_58 (*(uint *)(pf_stack_frame + 24))
#define local_54 (*(uint *)(pf_stack_frame + 28))
#define local_38 (*(long *)(pf_stack_frame + 56))
#define local_2c (*(uint *)(pf_stack_frame + 68))
#define local_28 (*(uint *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fdc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1001080b
#define DAT_1001080b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e8U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#undef UINT_00280a10
#define UINT_00280a10 (*(uint *)(0x280a10U))
#define local_58 (*(uint *)(pf_stack_frame + 24))
#define local_54 (*(uint *)(pf_stack_frame + 28))
#define local_38 (*(void * *)(pf_stack_frame + 56))
#define local_2c (*(uint *)(pf_stack_frame + 68))
#define local_28 (*(uint *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fdc0
 */

ulong recovered_1000fdc0(undefined *param_1,uint param_2)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  char *text;
  ulong uVar4;

  recovered_10002a60(&local_58,0,0x20);
  recovered_10002a60(&local_38,0,0x18);
  text = &DAT_1001080b;
  if (param_1 != (undefined *)0x0) {
    text = param_1;
  }
  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x213 < uVar2)) {
    uVar2 = UINT_00280a10;
    if (((code *)(ulong)uVar2 != (code *)0x0) &&
       (uVar2 = (*(code *)(ulong)uVar2)((void *)0x0,text,param_2,&local_58), uVar2 != 0)) {
      uVar3 = (ulong)local_58;
      if ((int)local_58 < 1) {
        uVar3 = 0;
      }
      uVar4 = 0;
      if (0 < (int)local_54) {
        uVar4 = (ulong)local_54;
      }
      return uVar3 | uVar4 << 0x20;
    }
  }
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x17b < uVar2)))) {
    uVar2 = UINT_00280978;
    if (((code *)(ulong)uVar2 != (code *)0x0) &&
       (uVar2 = (*(code *)(ulong)uVar2)(text,0xffffffff,param_2,0,&local_38), uVar2 != 0)) {
      if (((local_38 != (void *)0x0) &&
          (((iVar1 = Ram0000000000280800, iVar1 == 0x50414d57 &&
            (iVar1 = Ram0000000000280804, iVar1 != 0)) && (uVar2 = Ram0000000000280808, 0xb < uVar2)
           ))) && (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
        uVar2 = UINT_00280850;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          (*(code *)(ulong)uVar2)(local_38);
        }
      }
      uVar3 = (ulong)local_2c;
      if ((int)local_2c < 1) {
        uVar3 = 0;
      }
      uVar4 = 0;
      if (0 < (int)local_28) {
        uVar4 = (ulong)local_28;
      }
      return uVar3 | uVar4 << 0x20;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1001080b
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850
#undef UINT_00280978
#undef UINT_00280a10
#undef local_58
#undef local_54
#undef local_38
#undef local_2c
#undef local_28


#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280978
#undef DAT_00280a10
#undef DAT_1001080b
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850
#undef _DAT_00280978
#undef _DAT_00280a10
#undef local_58
#undef local_54
#undef local_38
#undef local_2c
#undef local_28

#define local_48 (*(uint *)(pf_stack_frame + 24))
#define local_3c (*(char *)(pf_stack_frame + 36))
#define local_38 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ff50
 */

void recovered_1000ff50(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                       )

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;

  iVar14 = 0;
  iVar25 = (int)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
  if (iVar25 < 1) {
    iVar25 = 0;
  }
  iVar20 = (int)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  if (iVar20 < 1) {
    iVar20 = 0;
  }
  iVar3 = (int)*(undefined8 *)(param_2 + 0x40);
  iVar19 = 0;
  if (0 < iVar3) {
    iVar19 = iVar3;
  }
  iVar21 = (int)*(undefined8 *)(param_2 + 0x48);
  iVar3 = 0;
  if (0 < iVar21) {
    iVar3 = iVar21;
  }
  uVar11 = (int)param_3 + iVar25;
  uVar22 = (int)((ulong)param_3 >> 0x20) + iVar19;
  uVar16 = (int)param_4 - (iVar20 + iVar25);
  uVar18 = (ulong)uVar16;
  if ((int)uVar16 < 1) {
    uVar18 = 0;
  }
  uVar16 = (int)((ulong)param_4 >> 0x20) - (iVar3 + iVar19);
  if ((int)uVar16 < 1) {
    uVar16 = 0;
  }
  uVar9 = *(uint *)(param_2 + 0x20);
  uVar15 = uVar22;
  if (param_5 != 0) {
    uVar15 = uVar11;
  }
  if (1 < uVar9) {
    iVar14 = (uVar9 - 1) * *(int *)(param_2 + 0x24);
  }
  if (uVar9 != 0 && *(long *)(param_2 + 0x18) != 0) {
    local_48 = (uint)uVar18;
    uVar13 = uVar18 | (ulong)uVar16 << 0x20;
    lVar23 = 0;
    uVar24 = 0;
    iVar25 = 0;
    do {
      local_3c = (char)param_5;
      if (*(int *)(*(long *)(param_2 + 0x18) + lVar23) == 4) {
        iVar25 = iVar25 + 1;
      }
      else {
        uVar6 = recovered_1000df60((int *)(*(long *)(param_2 + 0x18) + lVar23),uVar13);
        iVar20 = (int)((ulong)uVar6 >> 0x20);
        if (local_3c != '\0') {
          iVar20 = (int)uVar6;
        }
        iVar14 = iVar14 + iVar20;
        uVar9 = *(uint *)(param_2 + 0x20);
      }
      uVar24 = uVar24 + 1;
      lVar23 = lVar23 + 0x60;
    } while (uVar24 < uVar9);
    if (iVar25 == 0) {
      local_38 = 0;
    }
    else {
      uVar12 = uVar16;
      if (local_3c != '\0') {
        uVar12 = local_48;
      }
      iVar20 = 0;
      if (0 < (int)(uVar12 - iVar14)) {
        iVar20 = uVar12 - iVar14;
      }
      local_38 = iVar20 / iVar25;
    }
    if (uVar9 != 0) {
      uVar12 = local_48;
      uVar9 = local_38;
      if (local_3c != '\0') {
        uVar12 = local_38;
        uVar9 = uVar16;
      }
      lVar23 = 0;
      uVar24 = 0;
      do {
        lVar2 = *(long *)(param_2 + 0x18);
        piVar1 = (int *)(lVar2 + lVar23);
        uVar8 = recovered_1000df60(piVar1,uVar13);
        iVar14 = *(int *)(lVar2 + lVar23);
        uVar4 = (uint)(uVar8 >> 0x20);
        uVar17 = (uint)uVar8;
        uVar5 = uVar4;
        if (iVar14 == 4) {
          uVar17 = uVar12;
          uVar5 = uVar9;
        }
        if (local_3c == '\0') {
          iVar25 = *(int *)(param_2 + 0x28);
          uVar7 = (ulong)uVar17;
          if (iVar25 == 3) {
            uVar7 = uVar18;
          }
          if (iVar14 == 4) {
            uVar4 = local_38;
          }
          uVar8 = (ulong)uVar4;
          uVar10 = uVar8 << 0x20 | uVar7;
          if ((iVar25 == 1) && ((int)uVar7 < (int)local_48)) {
            uVar4 = (int)(local_48 - uVar17) / 2 + uVar11;
          }
          else {
            uVar4 = (uVar11 + local_48) - uVar17;
            if ((int)local_48 <= (int)uVar7) {
              uVar4 = uVar11;
            }
            if (iVar25 != 2) {
              uVar4 = uVar11;
            }
          }
          uVar7 = (ulong)uVar15;
        }
        else {
          uVar8 = uVar8 & 0xffffffff;
          if (iVar14 == 4) {
            uVar8 = (ulong)local_38;
          }
          iVar14 = *(int *)(param_2 + 0x28);
          uVar4 = uVar5;
          if (iVar14 == 3) {
            uVar4 = uVar16;
          }
          uVar10 = (ulong)uVar4 << 0x20 | uVar8;
          if ((iVar14 == 1) && ((int)uVar4 < (int)uVar16)) {
            uVar7 = (ulong)((int)(uVar16 - uVar5) / 2 + uVar22);
          }
          else {
            uVar5 = (uVar16 + uVar22) - uVar5;
            if ((int)uVar16 <= (int)uVar4) {
              uVar5 = uVar22;
            }
            uVar7 = (ulong)uVar5;
            if (iVar14 != 2) {
              uVar7 = (ulong)uVar22;
            }
          }
          uVar4 = uVar15;
        }
        uVar15 = (int)uVar8 + *(int *)(param_2 + 0x24) + uVar15;
        recovered_1000e5f0(param_1,piVar1,(ulong)uVar4 | uVar7 << 0x20,uVar10);
        uVar24 = uVar24 + 1;
        lVar23 = lVar23 + 0x60;
      } while (uVar24 < *(uint *)(param_2 + 0x20));
    }
  }
  return;
}

#undef local_48
#undef local_3c
#undef local_38

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
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
#undef _DAT_00280978
#define _DAT_00280978 (*(uint *)(0x280978U))
#define local_68 (*(long *)(pf_stack_frame + 24))
#define local_5c (*(uint *)(pf_stack_frame + 36))
#define local_58 (*(uint *)(pf_stack_frame + 40))
#define local_54 (*(uint *)(pf_stack_frame + 44))
#define local_50 (*(ulong *)(pf_stack_frame + 48))
#define local_48 (*(ulong *)(pf_stack_frame + 56))
#define local_3c (*(int *)(pf_stack_frame + 68))
#define local_38 (*(ulong *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10010240(long *param_1,ulong param_2,ulong param_3,long param_4,int param_5,
                       undefined4 param_6,int param_7,char param_8)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;

  local_38 = param_2;
  recovered_10002a60(&local_68,0,0x18);
  if (param_1 == (long *)0x0) {
    return;
  }
  local_48 = param_3 >> 0x20;
  iVar6 = (int)param_3;
  if (((int)(param_3 >> 0x20) < 1 || (iVar6 < 1 || param_4 == 0)) || *param_1 == 0) {
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
  if (_DAT_00280808 < 0x17c) {
    return;
  }
  if ((code *)(ulong)_DAT_00280978 == (code *)0x0) {
    return;
  }
  iVar3 = (*(code *)(ulong)_DAT_00280978)(param_4,0xffffffff,param_6,param_5 << 8 | 0xff,&local_68);
  iVar2 = (int)local_48;
  if (iVar3 == 0) {
    return;
  }
  if (local_68 == 0) {
    return;
  }
  local_50 = local_38 >> 0x20;
  if ((param_8 == '\0') || ((int)local_5c < iVar6 + -2)) {
    if (param_7 == 2) {
      uVar7 = local_38 & 0xffffffff;
      if ((int)local_5c < iVar6) {
        uVar7 = (ulong)((iVar6 + (int)local_38) - local_5c);
      }
    }
    else {
      uVar7 = local_38 & 0xffffffff;
      if (param_7 == 1) {
        uVar7 = local_38 & 0xffffffff;
        if (iVar6 - local_5c != 0 && (int)local_5c <= iVar6) {
          uVar7 = (ulong)(uint)((int)(iVar6 - local_5c) / 2 + (int)local_38);
        }
      }
    }
  }
  else {
    uVar7 = (ulong)((((int)local_38 + iVar6) - local_5c) - 2);
  }
  iVar3 = (int)(local_38 >> 0x20);
  if (iVar2 - local_58 != 0 && (int)local_58 <= iVar2) {
    if (local_58 == 0) goto LAB_100105d2;
    local_50 = (ulong)(uint)((int)(iVar2 - local_58) / 2 + iVar3);
  }
  local_48 = (ulong)(uint)(iVar2 + iVar3);
  local_3c = iVar6 + (int)local_38;
  uVar10 = 0;
  do {
    uVar11 = (int)local_50 + (int)uVar10;
    if (((iVar3 <= (int)uVar11) && (-1 < (int)uVar11 && (int)uVar11 < iVar2 + iVar3)) &&
       (local_5c != 0 && (int)uVar11 < *(int *)((long)param_1 + 0xc))) {
      uVar16 = 0;
      lVar5 = local_68 + 1;
      do {
        iVar6 = (int)(uVar7 + uVar16);
        if ((((int)local_38 <= iVar6) && (-1 < iVar6 && iVar6 < local_3c)) &&
           ((iVar6 < (int)param_1[1] &&
            ((*param_1 != 0 && ((int)uVar11 < *(int *)((long)param_1 + 0xc))))))) {
          iVar12 = (int)param_1[4];
          iVar4 = (int)((ulong)param_1[4] >> 0x20);
          if ((iVar6 < (int)param_1[5] + iVar12 && (iVar4 <= (int)uVar11 && iVar12 <= iVar6)) &&
             ((int)uVar11 < (int)((ulong)param_1[5] >> 0x20) + iVar4)) {
            lVar9 = local_54 * uVar10;
            bVar1 = *(byte *)(lVar5 + 2 + lVar9);
            if (bVar1 != 0) {
              lVar15 = *param_1 + (ulong)*(uint *)(param_1 + 2) * (ulong)uVar11;
              uVar8 = uVar7 + uVar16 & 0xffffffff;
              uVar13 = (uint)bVar1;
              if (uVar13 == 0xff) {
                *(undefined1 *)(lVar15 + uVar8 * 4) = *(undefined1 *)(lVar5 + -1 + lVar9);
                *(undefined1 *)(lVar15 + 1 + uVar8 * 4) = *(undefined1 *)(lVar5 + lVar9);
                *(undefined1 *)(lVar15 + 2 + uVar8 * 4) = *(undefined1 *)(lVar5 + 1 + lVar9);
              }
              else {
                uVar14 = uVar13 ^ 0xff;
                *(char *)(lVar15 + uVar8 * 4) =
                     (char)((*(byte *)(lVar5 + -1 + lVar9) * uVar13 +
                             *(byte *)(lVar15 + uVar8 * 4) * uVar14 + 0x7f) / 0xff);
                *(char *)(lVar15 + 1 + uVar8 * 4) =
                     (char)((*(byte *)(lVar5 + lVar9) * uVar13 +
                             *(byte *)(lVar15 + 1 + uVar8 * 4) * uVar14 + 0x7f) / 0xff);
                *(char *)(lVar15 + 2 + uVar8 * 4) =
                     (char)(((uint)*(byte *)(lVar5 + 1 + lVar9) * (uint)bVar1 +
                             *(byte *)(lVar15 + 2 + uVar8 * 4) * uVar14 + 0x7f) / 0xff);
              }
              *(undefined1 *)(lVar15 + 3 + uVar8 * 4) = 0xff;
            }
          }
        }
        uVar16 = uVar16 + 1;
        lVar5 = lVar5 + 4;
      } while (uVar16 < local_5c);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < local_58);
LAB_100105d2:
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280850)(local_68);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280978
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850
#undef _DAT_00280978
#undef local_68
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_48
#undef local_3c
#undef local_38


/* Release 1.1 aggregate exports. */
PFUIInsets pf_ui_insets(int32_t all){return (PFUIInsets){all,all,all,all};}
PFUIInsets pf_ui_insets_xy(int32_t x,int32_t y){return (PFUIInsets){y,x,y,x};}
PFUIInsets pf_ui_insets_make(int32_t t,int32_t r,int32_t b,int32_t l){return (PFUIInsets){t,r,b,l};}
PFUIView pf_ui_view_empty(void){PFUIView v;recovered_1000d920(&v);return v;}
PFUIView pf_ui_text(uintptr_t text){PFUIView v=pf_ui_view_empty();v.type=1;v.text=text;return v;}
PFUIView pf_ui_rectangle(uint32_t color){PFUIView v=pf_ui_view_empty();v.type=2;v.background=color;v.flags=2;return v;}
PFUIView pf_ui_spacer(void){PFUIView v=pf_ui_view_empty();v.type=4;return v;}
PFUIView pf_ui_button(uintptr_t text,uintptr_t callback,uintptr_t userdata){PFUIView v=pf_ui_text(text);v.type=3;v.callback=callback;v.userdata=userdata;return v;}
PFUIView pf_ui_hstack(uintptr_t children,uint32_t count,int32_t spacing){PFUIView v=pf_ui_view_empty();v.type=5;v.children=children;v.count=count;v.spacing=spacing;return v;}
PFUIView pf_ui_vstack(uintptr_t children,uint32_t count,int32_t spacing){PFUIView v=pf_ui_hstack(children,count,spacing);v.type=6;return v;}
PFUIView pf_ui_zstack(uintptr_t children,uint32_t count){PFUIView v=pf_ui_hstack(children,count,0);v.type=7;return v;}
PFUIView pf_ui_view_padding(PFUIView v,PFUIInsets padding){v.padding=padding;return v;}
PFUIView pf_ui_view_foreground(PFUIView v,uint32_t color){v.foreground=color;v.flags|=1;return v;}
PFUIView pf_ui_view_background(PFUIView v,uint32_t color){v.background=color;v.flags|=2;return v;}
PFUIView pf_ui_view_frame(PFUIView v,int32_t width,int32_t height){if(width>=0){v.flags|=4;v.width=width;}if(height>=0){v.flags|=8;v.height=height;}return v;}
PFUIView pf_ui_view_text_scale(PFUIView v,uint32_t scale){v.scale=scale?scale:1;return v;}
PFUIView pf_ui_view_alignment(PFUIView v,uint32_t alignment){v.alignment=alignment<4?alignment:1;return v;}
PFUIWindowSpec pf_ui_window_spec(uintptr_t title,uint32_t width,uint32_t height){PFUIWindowSpec value;recovered_10009f20(&value,title,width,height);return value;}
PFUIWindowSpec pf_ui_window_spec_transparency(PFUIWindowSpec s,uint32_t value){s.transparency=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_shadow(PFUIWindowSpec s,uint32_t value){s.shadow=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_mode(PFUIWindowSpec s,int32_t mode,uint32_t amount){s.mode=(uint32_t)mode+1<5?mode:-1;s.amount=amount<100?amount:100;return s;}
PFUIWindowSpec pf_ui_window_spec_solid(PFUIWindowSpec s){s.mode=0;s.amount=0;return s;}
PFUIWindowSpec pf_ui_window_spec_clear(PFUIWindowSpec s){s.mode=1;s.amount=0;return s;}
PFUIWindowSpec pf_ui_window_spec_blur(PFUIWindowSpec s,uint32_t value){s.mode=2;s.amount=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_refract(PFUIWindowSpec s,uint32_t value){s.mode=3;s.amount=value<100?value:100;return s;}

PFUIView pf_ui_text_field(uintptr_t text,uintptr_t capacity,int password,uintptr_t callback,uintptr_t userdata){PFUIView v=pf_ui_view_empty();v.type=8;v.text=text;v.text_capacity=capacity;v.alignment=0;v.callback=callback;v.userdata=userdata;if(password)v.flags|=16;return v;}

/* Release 1.1 service forwards. */
/* Explicit service wrappers preserve arguments across native tail calls. */
static uintptr_t pf_ui_service(uint32_t offset){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)
#if defined(__aarch64__)
 0x82010800U;
#elif defined(__arm__)
 0x40010800U;
#else
 0x280800U;
#endif
 if(api[0]!=0x50414d57U||!api[1]||api[2]<offset+4)return 0;
 return api[offset/4];
}
uint32_t pf_ui_window_configure(uint32_t id,int32_t x,int32_t y,uint32_t a,uint32_t b){uintptr_t fn=pf_ui_service(0xb0);return fn?((uint32_t(*)(uint32_t,int32_t,int32_t,uint32_t,uint32_t))fn)(id,x,y,a,b):0;}
uint32_t pf_ui_window_list(void *records,uint32_t capacity,void *count){uintptr_t fn=pf_ui_service(0xac);return fn?((uint32_t(*)(void*,uint32_t,void*))fn)(records,capacity,count):0;}
uint32_t pf_ui_window_menu_command(uint32_t id,uint32_t menu,uint32_t command){uintptr_t fn=pf_ui_service(0xf0);return fn?((uint32_t(*)(uint32_t,uint32_t,uint32_t))fn)(id,menu,command):0;}
uint32_t pf_ui_window_pointer_event(uint32_t id,int32_t x,int32_t y,uint32_t buttons,uint32_t flags){uintptr_t fn=pf_ui_service(0xfc);return fn?((uint32_t(*)(uint32_t,int32_t,int32_t,uint32_t,uint32_t))fn)(id,x,y,buttons,flags):0;}
uint32_t pf_ui_window_pointer_state(uint32_t *window,void *state){uintptr_t fn=pf_ui_service(0x100);return window&&*window&&state&&fn?((uint32_t(*)(uint32_t,void*))fn)(*window,state):0;}
uint32_t pf_ui_window_focus(uint32_t id,int32_t x,int32_t y){return pf_ui_window_configure(id,x,y,14,10);}
uint32_t pf_ui_window_request_close(uint32_t id,int32_t x,int32_t y){return pf_ui_window_configure(id,x,y,1,1);}
