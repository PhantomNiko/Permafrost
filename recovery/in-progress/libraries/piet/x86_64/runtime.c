/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100130f0
#define DAT_100130f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d14U)))
#undef DAT_100130f1
#define DAT_100130f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d15U)))
#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
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
#define DAT_100130f0 (*(char *)(((uintptr_t)pf_module_state + 0x2d14U)))
#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d1cU)))
#undef DAT_10013108
#define DAT_10013108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d2cU)))
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
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d0
 */

/* WARNING: Removing unreachable block (ram,0x1000090c) */

bool recovered_100008d0(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10000920((long)addresses,(long)sizes,count);
    DAT_10013100 = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_10013100

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_100130f1
#define DAT_100130f1 (*(char *)(((uintptr_t)pf_module_state + 0x2d15U)))
#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d1cU)))
#undef DAT_10013108
#define DAT_10013108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d2cU)))
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
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
#define local_18 (*(ulong *)(pf_stack_frame + 24))
#define local_10 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b60
 */

/* WARNING: Removing unreachable block (ram,0x10000b9c) */

bool recovered_10000b60(ulong address,ulong size)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    local_18 = address;
    local_10 = size;
    bVar2 = recovered_10000920((long)&local_18,(long)&local_10,1);
    DAT_10013100 = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_10013100
#undef local_18
#undef local_10

#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d1cU)))
#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc0
 */

/* WARNING: Removing unreachable block (ram,0x10000bfc) */

uint recovered_10000bc0(void)

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
  return (uint)uVar3;
}

#undef DAT_100130f8
#undef DAT_10013100

#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d1cU)))
#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c40
 */

/* WARNING: Removing unreachable block (ram,0x10000c7c) */

ulonglong recovered_10000c40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulonglong uVar2;
  long *plVar3;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  uVar2 = 0;
  for (plVar3 = DAT_100130f8; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    if ((char)plVar3[3] == '\x01') {
      uVar2 = uVar2 + *plVar3;
    }
  }
  DAT_10013100 = 0;
  return uVar2;
}

#undef DAT_100130f8
#undef DAT_10013100

#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d1cU)))
#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb0
 */

/* WARNING: Removing unreachable block (ram,0x10000cec) */

uint recovered_10000cb0(void)

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
  return (uint)uVar3;
}

#undef DAT_100130f8
#undef DAT_10013100

#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d1cU)))
#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d40
 */

/* WARNING: Removing unreachable block (ram,0x10000d7c) */

ulonglong recovered_10000d40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  ulonglong uVar3;

  iVar2 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  uVar3 = 0;
  for (plVar1 = DAT_100130f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  DAT_10013100 = 0;
  return uVar3;
}

#undef DAT_100130f8
#undef DAT_10013100

#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dc0
 */

/* WARNING: Removing unreachable block (ram,0x10000dfc) */

void * recovered_10000dc0(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    puVar2 = recovered_10000e20(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10013100 = 0;
    return puVar2;
  }
  do {
  } while( true );
}

#undef DAT_10013100

#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d1cU)))
#undef DAT_10013108
#define DAT_10013108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d2cU)))
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
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001020
 */

/* WARNING: Removing unreachable block (ram,0x1000105c) */

void * recovered_10001020(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    puVar2 = recovered_10000e20(size,(ulong *)0x0,(ulong *)limit);
    DAT_10013100 = 0;
    return puVar2;
  }
  do {
  } while( true );
}

#undef DAT_10013100

#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001080
 */

/* WARNING: Removing unreachable block (ram,0x100010bc) */

void * recovered_10001080(ulong size,ulong first,ulong last)

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
  if (last < first) {
    puVar2 = (ulong *)0x0;
  }
  else {
    puVar2 = recovered_10000e20(size,(ulong *)first,(ulong *)last);
  }
  DAT_10013100 = 0;
  return puVar2;
}

#undef DAT_10013100

#undef DAT_10013100
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e0
 */

/* WARNING: Removing unreachable block (ram,0x1000111c) */

void recovered_100010e0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001130((long)pointer);
    DAT_10013100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10013100

#undef DAT_10013108
#define DAT_10013108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d2cU)))
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
#define DAT_10013100 (*(int *)(((uintptr_t)pf_module_state + 0x2d24U)))
#undef DAT_10013108
#define DAT_10013108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001250
 */

/* WARNING: Removing unreachable block (ram,0x1000128c) */

void * recovered_10001250(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;

  iVar8 = DAT_10013100;
  { __typeof__(DAT_10013100) pf_atomic_old = __atomic_exchange_n(&(DAT_10013100),1,__ATOMIC_SEQ_CST);
}
  if (iVar8 != 0) {
    do {
    } while( true );
  }
  if (pointer == (void *)0x0) {
    puVar17 = recovered_10000e20(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10013100 = 0;
    return puVar17;
  }
  if (size == 0) {
    recovered_10001130((long)pointer);
    DAT_10013100 = 0;
    return (void *)0x0;
  }
  if (0xfffffffffffffff0 < size) {
    DAT_10013100 = 0;
    return (void *)0x0;
  }
  recovered_100005c0();
  uVar13 = size + 0xf & 0xfffffffffffffff0;
  puVar17 = (ulong *)((long)pointer + -0x20);
  uVar12 = *(ulong *)((long)pointer + -0x20);
  if (uVar13 <= uVar12) {
    if (uVar12 <= uVar13 - 1) {
      DAT_10013100 = 0;
      return (void *)0x0;
    }
    if (uVar12 - uVar13 < 0x30) {
      if (uVar12 < 0xffffffffffffffe0) {
        DAT_10013100 = 0;
        return pointer;
      }
      DAT_10013100 = 0;
      return (void *)0x0;
    }
    if (0xffffffffffffffb0 < size) {
      DAT_10013100 = 0;
      return (void *)0x0;
    }
    DAT_10013108 = (ulong *)((long)pointer + uVar13);
    *(ulong *)((long)pointer + uVar13) = (uVar12 - uVar13) - 0x20;
    lVar2 = *(long *)((long)pointer + -0x18);
    *(long *)((long)pointer + uVar13 + 8) = lVar2;
    *(ulong **)((long)pointer + uVar13 + 0x10) = puVar17;
    *(undefined1 *)((long)pointer + uVar13 + 0x18) = 1;
    if (lVar2 != 0) {
      *(ulong **)(lVar2 + 0x10) = DAT_10013108;
    }
    *(ulong *)((long)pointer + -0x20) = uVar13;
    *(ulong **)((long)pointer + -0x18) = DAT_10013108;
    DAT_10013100 = 0;
    return pointer;
  }
  uVar14 = uVar12;
  uVar18 = uVar12;
  puVar9 = puVar17;
  do {
    puVar15 = (ulong *)puVar9[1];
    if ((((puVar15 == (ulong *)0x0) || ((char)puVar15[3] != '\x01')) ||
        (0xffffffffffffffdf < uVar14)) ||
       (((ulong *)((long)puVar9 + uVar18 + 0x20) != puVar15 ||
        (uVar18 = *puVar15, -uVar14 - 0x21 < uVar18)))) break;
    uVar14 = uVar14 + uVar18 + 0x20;
    puVar9 = puVar15;
  } while (uVar14 < uVar13);
  if (uVar13 - 1 < uVar14) {
    if (uVar14 - uVar13 < 0x30) {
      if (uVar14 < 0xffffffffffffffe0) goto LAB_10001424;
    }
    else if (size < 0xffffffffffffffb1) {
LAB_10001424:
      puVar9 = *(ulong **)((long)pointer + -0x18);
      puVar15 = DAT_10013108;
      do {
        if (((puVar9 == (ulong *)0x0) || ((char)puVar9[3] != '\x01')) ||
           ((0xffffffffffffffdf < uVar12 ||
            (((ulong *)((long)pointer + uVar12) != puVar9 || (-uVar12 - 0x21 < *puVar9)))))) break;
        if (puVar15 == puVar9) {
          puVar15 = puVar17;
          DAT_10013108 = puVar17;
        }
        uVar12 = uVar12 + *puVar9 + 0x20;
        *(ulong *)((long)pointer + -0x20) = uVar12;
        puVar9 = (ulong *)puVar9[1];
        *(ulong **)((long)pointer + -0x18) = puVar9;
        if (puVar9 != (ulong *)0x0) {
          puVar9[2] = (ulong)puVar17;
        }
      } while (uVar12 < uVar13);
      if (uVar12 < uVar13) {
        DAT_10013100 = 0;
        return (void *)0x0;
      }
      uVar10 = recovered_10006780(puVar17,uVar13);
      if ((char)uVar10 != '\0') {
        DAT_10013108 = *(ulong **)((long)pointer + -0x18);
      }
      *(undefined1 *)((long)pointer + -8) = 0;
      DAT_10013100 = 0;
      return pointer;
    }
  }
  puVar9 = recovered_10000e20(uVar13,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  if (puVar9 == (ulong *)0x0) {
    DAT_10013100 = 0;
    return (void *)0x0;
  }
  if (*puVar17 < uVar13) {
    uVar13 = *puVar17;
  }
  puVar17 = pointer;
  puVar15 = puVar9;
  if (uVar13 < 0x10) {
LAB_100014d6:
    if (uVar13 == 0) goto LAB_1000178f;
  }
  else if ((((uint)puVar9 ^ (uint)pointer) & 7) == 0) {
    if (((ulong)puVar9 & 7) == 0) {
      puVar16 = puVar9;
      puVar11 = pointer;
LAB_100016c1:
      uVar12 = uVar13;
    }
    else {
      puVar16 = (ulong *)((long)puVar9 + 1);
      *(undefined1 *)puVar9 = *(undefined1 *)pointer;
      uVar12 = uVar13 - 1;
      if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
        puVar11 = (ulong *)((long)pointer + 1);
      }
      else {
        puVar16 = (ulong *)((long)puVar9 + 2);
        *(undefined1 *)((long)puVar9 + 1) = *(undefined1 *)((long)pointer + 1);
        uVar12 = uVar13 - 2;
        if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
          puVar11 = (ulong *)((long)pointer + 2);
        }
        else {
          puVar16 = (ulong *)((long)puVar9 + 3);
          *(undefined1 *)((long)puVar9 + 2) = *(undefined1 *)((long)pointer + 2);
          uVar12 = uVar13 - 3;
          if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
            puVar11 = (ulong *)((long)pointer + 3);
          }
          else {
            puVar16 = (ulong *)((long)puVar9 + 4);
            *(undefined1 *)((long)puVar9 + 3) = *(undefined1 *)((long)pointer + 3);
            uVar12 = uVar13 - 4;
            if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
              puVar11 = (ulong *)((long)pointer + 4);
            }
            else {
              puVar16 = (ulong *)((long)puVar9 + 5);
              *(undefined1 *)((long)puVar9 + 4) = *(undefined1 *)((long)pointer + 4);
              uVar12 = uVar13 - 5;
              if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
                puVar11 = (ulong *)((long)pointer + 5);
              }
              else {
                puVar16 = (ulong *)((long)puVar9 + 6);
                *(undefined1 *)((long)puVar9 + 5) = *(undefined1 *)((long)pointer + 5);
                uVar12 = uVar13 - 6;
                if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
                  puVar11 = (ulong *)((long)pointer + 6);
                }
                else {
                  puVar16 = (ulong *)((long)puVar9 + 7);
                  *(undefined1 *)((long)puVar9 + 6) = *(undefined1 *)((long)pointer + 6);
                  uVar12 = uVar13 - 7;
                  if (((ulong)puVar16 & 7) != 0 && uVar12 != 0) {
                    *(undefined1 *)((long)puVar9 + 7) = *(undefined1 *)((long)pointer + 7);
                    uVar13 = uVar13 - 8;
                    puVar16 = puVar9 + 1;
                    puVar11 = (ulong *)((long)pointer + 8);
                    goto LAB_100016c1;
                  }
                  puVar11 = (ulong *)((long)pointer + 7);
                }
              }
            }
          }
        }
      }
    }
    if (uVar12 < 0x20) {
      uVar13 = uVar12;
    }
    else {
      uVar13 = uVar12 - 0x20;
      if ((uVar13 & 0x20) == 0) {
        *puVar16 = *puVar11;
        puVar16[1] = puVar11[1];
        puVar16[2] = puVar11[2];
        puVar16[3] = puVar11[3];
        puVar16 = puVar16 + 4;
        puVar11 = puVar11 + 4;
        uVar12 = uVar13;
      }
      if (0x1f < uVar13) {
        do {
          *puVar16 = *puVar11;
          puVar16[1] = puVar11[1];
          puVar16[2] = puVar11[2];
          puVar16[3] = puVar11[3];
          puVar16[4] = puVar11[4];
          puVar16[5] = puVar11[5];
          puVar16[6] = puVar11[6];
          puVar16[7] = puVar11[7];
          puVar16 = puVar16 + 8;
          puVar11 = puVar11 + 8;
          uVar12 = uVar12 - 0x40;
          uVar13 = uVar12;
        } while (0x1f < uVar12);
      }
    }
    if (uVar13 < 8) {
      puVar17 = puVar11;
      puVar15 = puVar16;
    }
    else {
      if ((0x27 < uVar13 - 8) && (0x1f < (ulong)((long)puVar16 - (long)puVar11))) {
        uVar12 = (uVar13 - 8 >> 3) + 1;
        uVar18 = uVar12 & 0xfffffffffffffffc;
        puVar17 = puVar11 + uVar18;
        puVar15 = puVar16 + uVar18;
        uVar13 = uVar13 + uVar18 * -8;
        uVar14 = 0;
        do {
          uVar5 = (puVar11 + uVar14)[1];
          uVar6 = puVar11[uVar14 + 2];
          uVar7 = (puVar11 + uVar14 + 2)[1];
          puVar16[uVar14] = puVar11[uVar14];
          (puVar16 + uVar14)[1] = uVar5;
          puVar16[uVar14 + 2] = uVar6;
          (puVar16 + uVar14 + 2)[1] = uVar7;
          uVar14 = uVar14 + 4;
        } while (uVar18 != uVar14);
        puVar11 = puVar17;
        puVar16 = puVar15;
        if (uVar12 == uVar18) goto LAB_100014d6;
      }
      do {
        puVar17 = puVar11 + 1;
        *puVar16 = *puVar11;
        puVar15 = puVar16 + 1;
        uVar13 = uVar13 - 8;
        puVar11 = puVar17;
        puVar16 = puVar15;
      } while (7 < uVar13);
    }
    goto LAB_100014d6;
  }
  uVar12 = uVar13;
  puVar16 = puVar15;
  if ((3 < uVar13) && (0x1f < (ulong)((long)puVar15 - (long)puVar17))) {
    if (uVar13 < 0x20) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar13 & 0xffffffffffffffe0;
      uVar12 = 0;
      do {
        uVar10 = ((undefined8 *)((long)puVar17 + uVar12))[1];
        puVar1 = (undefined8 *)((long)puVar17 + uVar12 + 0x10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        *(undefined8 *)((long)puVar15 + uVar12) = *(undefined8 *)((long)puVar17 + uVar12);
        ((undefined8 *)((long)puVar15 + uVar12))[1] = uVar10;
        puVar1 = (undefined8 *)((long)puVar15 + uVar12 + 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        uVar12 = uVar12 + 0x20;
      } while (uVar18 != uVar12);
      if (uVar13 == uVar18) goto LAB_1000178f;
      if ((uVar13 & 0x1c) == 0) {
        puVar17 = (ulong *)((long)puVar17 + uVar18);
        puVar16 = (ulong *)((long)puVar15 + uVar18);
        uVar12 = (ulong)((uint)uVar13 & 0x1f);
        goto LAB_100016e4;
      }
    }
    uVar14 = uVar13 & 0xfffffffffffffffc;
    uVar12 = (ulong)((uint)uVar13 & 3);
    puVar16 = (ulong *)((long)puVar15 + uVar14);
    do {
      *(undefined4 *)((long)puVar15 + uVar18) = *(undefined4 *)((long)puVar17 + uVar18);
      uVar18 = uVar18 + 4;
    } while (uVar14 != uVar18);
    puVar17 = (ulong *)((long)puVar17 + uVar14);
    if (uVar13 == uVar14) goto LAB_1000178f;
  }
LAB_100016e4:
  uVar13 = uVar12 - 1;
  if ((uVar12 & 7) != 0) {
    uVar18 = 0;
    do {
      *(undefined1 *)((long)puVar16 + uVar18) = *(undefined1 *)((long)puVar17 + uVar18);
      uVar18 = uVar18 + 1;
    } while ((uVar12 & 7) != uVar18);
    uVar12 = uVar12 - uVar18;
    puVar16 = (ulong *)((long)puVar16 + uVar18);
    puVar17 = (ulong *)((long)puVar17 + uVar18);
  }
  if (6 < uVar13) {
    uVar13 = 0;
    do {
      *(undefined1 *)((long)puVar16 + uVar13) = *(undefined1 *)((long)puVar17 + uVar13);
      *(undefined1 *)((long)puVar16 + uVar13 + 1) = *(undefined1 *)((long)puVar17 + uVar13 + 1);
      *(undefined1 *)((long)puVar16 + uVar13 + 2) = *(undefined1 *)((long)puVar17 + uVar13 + 2);
      *(undefined1 *)((long)puVar16 + uVar13 + 3) = *(undefined1 *)((long)puVar17 + uVar13 + 3);
      *(undefined1 *)((long)puVar16 + uVar13 + 4) = *(undefined1 *)((long)puVar17 + uVar13 + 4);
      *(undefined1 *)((long)puVar16 + uVar13 + 5) = *(undefined1 *)((long)puVar17 + uVar13 + 5);
      *(undefined1 *)((long)puVar16 + uVar13 + 6) = *(undefined1 *)((long)puVar17 + uVar13 + 6);
      *(undefined1 *)((long)puVar16 + uVar13 + 7) = *(undefined1 *)((long)puVar17 + uVar13 + 7);
      uVar13 = uVar13 + 8;
    } while (uVar12 != uVar13);
  }
LAB_1000178f:
  recovered_10001130((long)pointer);
  DAT_10013100 = 0;
  return puVar9;
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
 * Address: 0x10001c70
 */

void * recovered_10001c70(ulong size)

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
                    /* WARNING: Could not recover jumptable at 0x10001cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*(code *)(ulong)uVar2)(size);
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
 * Address: 0x10001cc0
 */

void recovered_10001cc0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(pointer);
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
 * Address: 0x10001d10
 */

void * recovered_10001d10(void *pointer,ulong size)

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
                    /* WARNING: Could not recover jumptable at 0x10001d51. Too many branches */
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

ulong recovered_10003df0(char *text,char *reject)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;

  cVar2 = *text;
  if (cVar2 == '\0') {
    return 0;
  }
  uVar1 = 0;
  do {
    if (*reject != '\0') {
      cVar4 = *reject;
      pcVar3 = reject;
      do {
        pcVar3 = pcVar3 + 1;
        if (cVar2 == cVar4) {
          return uVar1;
        }
        cVar4 = *pcVar3;
      } while (cVar4 != '\0');
    }
    cVar2 = text[uVar1 + 1];
    uVar1 = uVar1 + 1;
  } while (cVar2 != '\0');
  return uVar1;
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


#undef DAT_10010f21
#define DAT_10010f21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb45U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f10
 */

undefined * recovered_10003f10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10010f21;
}

#undef DAT_10010f21

#undef PTR_DAT_10013000
#define PTR_DAT_10013000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2c24U)))
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
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_20 (*(undefined8 *)(pf_stack_frame + 32))
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
#undef uStack_18
#undef uStack_20

#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
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
          param_1 = param_1 * DAT_100103e0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_100103e0 * DAT_100103e0 * DAT_100103e0 * DAT_100103e0 *
                    DAT_100103e0 * DAT_100103e0 * DAT_100103e0 * DAT_100103e0;
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

#undef DAT_100103e0

#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010460
#define DAT_10010460 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_10010460
#define _DAT_10010460 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
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
  dVar2 = (double)(_DAT_10010460 ^ (ulong)param_1);
  if ((double)(_DAT_10010460 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_100103e8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_100103e0;
      iVar1 = iVar1 + 1;
    } while (DAT_100103e8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_100103e0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_10010460 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_100103e0
#undef DAT_100103e8
#undef DAT_10010460
#undef _DAT_10010460

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


#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
      return DAT_100103e8;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_100103e8;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_100103e8 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_100103e8

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


#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
         (ulong)(DAT_100103e8 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_100103e8

#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
    if (param_1 <= DAT_100103e8) {
      dVar1 = DAT_100103e8;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_100103e0;
  }
  return dVar1;
}

#undef DAT_100103e0
#undef DAT_100103e8

#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_100103f0
#define DAT_100103f0 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_100103f8
#define DAT_100103f8 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10010400
#define DAT_10010400 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10010408
#define DAT_10010408 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10010410
#define DAT_10010410 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10010418
#define DAT_10010418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_10010470
#define DAT_10010470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_10010480
#define DAT_10010480 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef DAT_10010490
#define DAT_10010490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef DAT_100104a0
#define DAT_100104a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef _DAT_10010410
#define _DAT_10010410 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_10010418
#define _DAT_10010418 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_10010470
#define _DAT_10010470 (*(uint128 *)(((uintptr_t)pf_module_state + 0x94U)))
#undef _DAT_10010480
#define _DAT_10010480 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef _DAT_10010490
#define _DAT_10010490 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef _DAT_100104a0
#define _DAT_100104a0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc4U)))
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
    if (DAT_100103f8 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_100103e0;
        iVar1 = iVar1 + 1;
      } while (DAT_100103f8 < param_1);
    }
    for (; param_1 < DAT_10010400; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_10010408 + param_1) / (param_1 + DAT_100103e8);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_10010470);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_10010480);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_10010490);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_100104a0);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_10010410 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_10010418;
  }
  return DAT_100103f0;
}

#undef DAT_100103e0
#undef DAT_100103e8
#undef DAT_100103f0
#undef DAT_100103f8
#undef DAT_10010400
#undef DAT_10010408
#undef DAT_10010410
#undef DAT_10010418
#undef DAT_10010470
#undef DAT_10010480
#undef DAT_10010490
#undef DAT_100104a0
#undef _DAT_10010410
#undef _DAT_10010418
#undef _DAT_10010470
#undef _DAT_10010480
#undef _DAT_10010490
#undef _DAT_100104a0

#undef DAT_100104b0
#define DAT_100104b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004610
 */

long recovered_10004610(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_100104b0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_100104b0

#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010420
#define DAT_10010420 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10010428
#define DAT_10010428 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10010430
#define DAT_10010430 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_10010438
#define DAT_10010438 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10010440
#define DAT_10010440 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_100104c0
#define DAT_100104c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef _DAT_10010440
#define _DAT_10010440 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_100104c0
#define _DAT_100104c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004640(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10010420 < param_1; param_1 = param_1 + DAT_10010428) {
  }
  for (; param_1 < DAT_10010430; param_1 = param_1 + DAT_10010438) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_100104c0);
  return ((dVar1 / _DAT_10010440 + DAT_100103e8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_100103e8
#undef DAT_10010420
#undef DAT_10010428
#undef DAT_10010430
#undef DAT_10010438
#undef DAT_10010440
#undef DAT_100104c0
#undef _DAT_10010440
#undef _DAT_100104c0

#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010420
#define DAT_10010420 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10010428
#define DAT_10010428 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10010430
#define DAT_10010430 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_10010438
#define DAT_10010438 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10010448
#define DAT_10010448 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_100104d0
#define DAT_100104d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef _DAT_100104d0
#define _DAT_100104d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10010420 < param_1; param_1 = param_1 + DAT_10010428) {
  }
  for (; param_1 < DAT_10010430; param_1 = param_1 + DAT_10010438) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_100104d0);
  return (DAT_10010448 * dVar1 + DAT_100103e8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_100103e8
#undef DAT_10010420
#undef DAT_10010428
#undef DAT_10010430
#undef DAT_10010438
#undef DAT_10010448
#undef DAT_100104d0
#undef _DAT_100104d0

#undef DAT_10010460
#define DAT_10010460 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_10010460
#define _DAT_10010460 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004790(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_10010460 ^ (ulong)param_1);
  if ((double)(_DAT_10010460 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_10010460
#undef _DAT_10010460

#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10010450
#define DAT_10010450 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10010460
#define DAT_10010460 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_10010460
#define _DAT_10010460 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong recovered_100047b0(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if ((value == 0.0) && (!NAN(value))) {
    return 0;
  }
  dVar7 = (double)(_DAT_10010460 ^ (ulong)value);
  if ((double)(_DAT_10010460 ^ (ulong)value) <= value) {
    dVar7 = value;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_10010450;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_100103e0;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_100103e0;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= value) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_100103e0
#undef DAT_10010450
#undef DAT_10010460
#undef _DAT_10010460

#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10010450
#define DAT_10010450 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004880
 */

ulonglong recovered_10004880(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if (value <= 0.0) {
    return 0;
  }
  lVar3 = 0x3f;
  uVar2 = 0;
  dVar6 = DAT_10010450;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (value < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(value < dVar6) & (ulong)value |
                    ~-(ulong)(value < dVar6) & (ulong)(value - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_100103e0;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    value = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_100103e0;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_100103e0
#undef DAT_10010450

#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004930
 */

double recovered_10004930(ulonglong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (value == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_100103e8;
  do {
    if ((value & 1) != 0) {
      dVar2 = dVar2 + dVar3;
    }
    dVar3 = dVar3 + dVar3;
    bVar1 = 1 < value;
    value = value >> 1;
  } while (bVar1);
  return dVar2;
}

#undef DAT_100103e8

#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010460
#define DAT_10010460 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_10010460
#define _DAT_10010460 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004980(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if (value < 0) {
    dVar4 = 0.0;
    uVar2 = -value;
    dVar3 = DAT_100103e8;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_10010460);
  }
  dVar3 = 0.0;
  if (value != 0) {
    dVar4 = DAT_100103e8;
    do {
      if ((value & 1U) != 0) {
        dVar3 = dVar3 + dVar4;
      }
      dVar4 = dVar4 + dVar4;
      bVar1 = 1 < (ulong)value;
      value = (ulong)value >> 1;
    } while (bVar1);
  }
  return dVar3;
}

#undef DAT_100103e8
#undef DAT_10010460
#undef _DAT_10010460

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


#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010460
#define DAT_10010460 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef UNK_10010464
#define UNK_10010464 (*(uint *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_10010460
#define _DAT_10010460 (*(uint *)(((uintptr_t)pf_module_state + 0x84U)))
#undef uRam0000000010010464
#define uRam0000000010010464 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x88U)))
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
    dVar2 = pf_bits_double(CONCAT44((uint)(pf_double_bits(dVar2) >> 0x20) ^ uRam0000000010010464,
                             SUB84(dVar2,0) ^ _DAT_10010460));
  }
  iVar1 = 0;
  if (DAT_100103e8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_100103e0;
      iVar1 = iVar1 + 1;
    } while (DAT_100103e8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_100103e0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam0000000010010464,_DAT_10010460));
  }
  return CONCAT44((int)(pf_double_bits(dVar2) >> 0x20),(float)dVar2);
}

#undef DAT_100103e0
#undef DAT_100103e8
#undef DAT_10010460
#undef UNK_10010464
#undef _DAT_10010460
#undef uRam0000000010010464

#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
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
          dVar3 = dVar3 * DAT_100103e0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_100103e0 * DAT_100103e0 * DAT_100103e0 * DAT_100103e0 * DAT_100103e0 *
                  DAT_100103e0 * DAT_100103e0 * DAT_100103e0;
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

#undef DAT_100103e0

#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_100104f0
#define DAT_100104f0 (*(float *)(((uintptr_t)pf_module_state + 0x114U)))
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
    return DAT_100104f0;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_100103e8;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_100103e8 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_100103e8
#undef DAT_100104f0

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


#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_100103e8 + dVar2) & uVar1);
}

#undef DAT_100103e8

#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
                    (ulong)(DAT_100103e8 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_100103e8

#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_100103e8 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_100103e8

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


#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_100103f8
#define DAT_100103f8 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10010400
#define DAT_10010400 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10010408
#define DAT_10010408 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10010410
#define DAT_10010410 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10010418
#define DAT_10010418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_10010470
#define DAT_10010470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_10010480
#define DAT_10010480 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef DAT_10010490
#define DAT_10010490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef DAT_100104a0
#define DAT_100104a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef DAT_100104f4
#define DAT_100104f4 (*(float *)(((uintptr_t)pf_module_state + 0x118U)))
#undef DAT_100104f8
#define DAT_100104f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef _DAT_10010410
#define _DAT_10010410 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_10010418
#define _DAT_10010418 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_10010470
#define _DAT_10010470 (*(uint128 *)(((uintptr_t)pf_module_state + 0x94U)))
#undef _DAT_10010480
#define _DAT_10010480 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef _DAT_10010490
#define _DAT_10010490 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef _DAT_100104a0
#define _DAT_100104a0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef _DAT_100104f8
#define _DAT_100104f8 (*(float *)(((uintptr_t)pf_module_state + 0x11cU)))
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
    if (_DAT_100104f8 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_100103e0;
        iVar1 = iVar1 + 1;
      } while (DAT_100103f8 < dVar2);
    }
    for (; dVar2 < DAT_10010400; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_10010408 + dVar2) / (dVar2 + DAT_100103e8);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_10010470);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_10010480);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_10010490);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_100104a0);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_10010410 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_10010418);
  }
  return DAT_100104f4;
}

#undef DAT_100103e0
#undef DAT_100103e8
#undef DAT_100103f8
#undef DAT_10010400
#undef DAT_10010408
#undef DAT_10010410
#undef DAT_10010418
#undef DAT_10010470
#undef DAT_10010480
#undef DAT_10010490
#undef DAT_100104a0
#undef DAT_100104f4
#undef DAT_100104f8
#undef _DAT_10010410
#undef _DAT_10010418
#undef _DAT_10010470
#undef _DAT_10010480
#undef _DAT_10010490
#undef _DAT_100104a0
#undef _DAT_100104f8

#undef DAT_100104b0
#define DAT_100104b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f80
 */

long recovered_10004f80(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_100104b0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_100104b0

#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010420
#define DAT_10010420 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10010428
#define DAT_10010428 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10010430
#define DAT_10010430 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_10010438
#define DAT_10010438 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10010440
#define DAT_10010440 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_100104c0
#define DAT_100104c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef _DAT_10010440
#define _DAT_10010440 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_100104c0
#define _DAT_100104c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe4U)))
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

  for (dVar1 = (double)param_1; DAT_10010420 < dVar1; dVar1 = dVar1 + DAT_10010428) {
  }
  for (; dVar1 < DAT_10010430; dVar1 = dVar1 + DAT_10010438) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_100104c0);
  return (float)(((dVar2 / _DAT_10010440 + DAT_100103e8 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_100103e8
#undef DAT_10010420
#undef DAT_10010428
#undef DAT_10010430
#undef DAT_10010438
#undef DAT_10010440
#undef DAT_100104c0
#undef _DAT_10010440
#undef _DAT_100104c0

#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010420
#define DAT_10010420 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10010428
#define DAT_10010428 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10010430
#define DAT_10010430 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_10010438
#define DAT_10010438 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10010448
#define DAT_10010448 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_100104d0
#define DAT_100104d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef _DAT_100104d0
#define _DAT_100104d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10005060(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_10010420 < dVar1; dVar1 = dVar1 + DAT_10010428) {
  }
  for (; dVar1 < DAT_10010430; dVar1 = dVar1 + DAT_10010438) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_100104d0);
  return (float)((DAT_10010448 * dVar1 + DAT_100103e8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_100103e8
#undef DAT_10010420
#undef DAT_10010428
#undef DAT_10010430
#undef DAT_10010438
#undef DAT_10010448
#undef DAT_100104d0
#undef _DAT_100104d0

#undef DAT_100104e0
#define DAT_100104e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef UNK_100104e4
#define UNK_100104e4 (*(uint *)(((uintptr_t)pf_module_state + 0x108U)))
#undef _DAT_100104e0
#define _DAT_100104e0 (*(uint *)(((uintptr_t)pf_module_state + 0x104U)))
#undef uRam00000000100104e4
#define uRam00000000100104e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x108U)))
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
  fVar2 = (float)(_DAT_100104e0 ^ (uint)fVar1);
  if ((float)(_DAT_100104e0 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam00000000100104e4 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_100104e0
#undef UNK_100104e4
#undef _DAT_100104e0
#undef uRam00000000100104e4

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


#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010458
#define DAT_10010458 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10010460
#define DAT_10010460 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_10010460
#define _DAT_10010460 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
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
    dVar11 = dVar11 * DAT_10010458 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_100103e8;
      do {
        dVar12 = dVar12 * DAT_10010458 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_10010458;
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
                dVar11 = dVar11 * DAT_100103e0;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_100103e0 * DAT_100103e0 * DAT_100103e0 * DAT_100103e0 *
                         DAT_100103e0 * DAT_100103e0 * DAT_100103e0 * DAT_100103e0;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_10010460);
  }
  return dVar11;
}

#undef DAT_100103e0
#undef DAT_100103e8
#undef DAT_10010458
#undef DAT_10010460
#undef _DAT_10010460

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


#undef DAT_10010458
#define DAT_10010458 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10010460
#define DAT_10010460 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_10010f23
#define DAT_10010f23 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb47U)))
#undef _DAT_10010460
#define _DAT_10010460 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef str_10010f2d
#define str_10010f2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb51U)))
#undef str_10010f3e
#define str_10010f3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb62U)))
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
  uVar8 = _DAT_10010460;
  dVar7 = DAT_10010458;
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
      abStack_7a[uVar19 + 2] = str_10010f3e[uVar24 % 10];
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
    pcVar23 = str_10010f3e;
    if (*param_3 == 0x58) {
      pcVar23 = str_10010f2d;
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
        abStack_7a[uVar14 + 2] = str_10010f3e[uVar24 % 10];
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
      abStack_7a[uVar14 + 2] = str_10010f3e[(uint)uVar24 & 0xf];
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
        pbVar21 = &DAT_10010f23;
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
      abStack_7a[uVar19 + 2] = str_10010f3e[uVar13 % 10];
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

#undef DAT_10010458
#undef DAT_10010460
#undef DAT_10010f23
#undef _DAT_10010460
#undef str_10010f2d
#undef str_10010f3e
#undef abStack_7a

#define uStack0000000000000008 (*(undefined1 *)(pf_stack_frame + 248))
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
#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
#define local_18 (*(undefined1 * *)(pf_stack_frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064d0
 */

int recovered_100064d0(char *buffer,ulong capacity,char *format,...)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  char in_AL;
  ulong uVar1;
  undefined8 in_RCX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  if (in_AL != '\0') {
    local_a8 = in_XMM0_Qa;
    local_98 = in_XMM1_Qa;
    local_88 = in_XMM2_Qa;
    local_78 = in_XMM3_Qa;
    local_68 = in_XMM4_Qa;
    local_58 = in_XMM5_Qa;
    local_48 = in_XMM6_Qa;
    local_38 = in_XMM7_Qa;
  }
  local_18 = local_d8;
  local_20 = &uStack0000000000000008;
  local_28[0] = 0x18;
  local_28[1] = 0x30;
  local_c0 = in_RCX;
  local_b8 = in_R8;
  local_b0 = in_R9;
  uVar1 = recovered_100055f0((byte *)buffer,capacity,(byte *)format,local_28);
  return (int)uVar1;
}

#undef uStack0000000000000008
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
#undef local_20
#undef local_18

#undef DAT_10000000
#define DAT_10000000 (*(uint8_t *)(0x10000000U))
#undef DAT_10000008
#define DAT_10000008 (*(uint8_t *)(0x10000008U))
#undef DAT_10000010
#define DAT_10000010 (*(uint8_t *)(0x10000010U))
#undef DAT_10000018
#define DAT_10000018 (*(uint8_t *)(0x10000018U))
#undef DAT_100130f8
#define DAT_100130f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d1cU)))
#undef DAT_10013108
#define DAT_10013108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d2cU)))
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
#define DAT_10013110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d34U)))
#undef DAT_10013120
#define DAT_10013120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d44U)))
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
#define DAT_10013110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d34U)))
#undef DAT_10013120
#define DAT_10013120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d44U)))
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
#define DAT_10013110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d34U)))
#undef DAT_10013120
#define DAT_10013120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d44U)))
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

#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_10010f4f
#define DAT_10010f4f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb73U)))
#define local_148 (*(char (*)[328])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

void recovered_10006af0(char *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  char *format;

  format = &DAT_10010f4f;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10010f2c;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_100064d0(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_100067e0((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_10010f2c
#undef DAT_10010f4f
#undef local_148

#undef DAT_10010f6d
#define DAT_10010f6d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb91U)))
#undef str_10010f52
#define str_10010f52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb76U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b50
 */

void recovered_10006b50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003800(str_10010f52);
  recovered_100067e0(((uintptr_t)pf_module_state+0xb76U),uVar1);
  uVar1 = recovered_10003800(&DAT_10010f6d);
  recovered_100067e0(((uintptr_t)pf_module_state+0xb91U),uVar1);
  return;
}

#undef DAT_10010f6d
#undef str_10010f52

#undef DAT_10010f6d
#define DAT_10010f6d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb91U)))
#undef str_10010f70
#define str_10010f70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b90
 */

void recovered_10006b90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003800(str_10010f70);
  recovered_100067e0(((uintptr_t)pf_module_state+0xb94U),uVar1);
  uVar1 = recovered_10003800(&DAT_10010f6d);
  recovered_100067e0(((uintptr_t)pf_module_state+0xb91U),uVar1);
  return;
}

#undef DAT_10010f6d
#undef str_10010f70

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
#define DAT_10013110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d34U)))
#undef DAT_10013120
#define DAT_10013120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d44U)))
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
#undef DAT_10010f4f
#define DAT_10010f4f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb73U)))
#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2c84U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef str_10010ff1
#define str_10010ff1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc15U)))
#undef str_10010ffe
#define str_10010ffe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc22U)))
#undef str_1001100c
#define str_1001100c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc30U)))
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
  iVar3 = recovered_10003830(param_1,str_10010ff1);
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
    recovered_100064d0((char *)(puVar5 + 1),0xf1,&DAT_10010f4f,param_1);
    return puVar5;
  }
  iVar4 = recovered_10003830(param_1,str_10010ffe);
  if (iVar4 == 0) {
    uVar8 = 2;
    goto LAB_10006fce;
  }
  iVar4 = recovered_10003830(param_1,str_1001100c);
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
  recovered_100064d0((char *)(puVar5 + 1),0xf1,&DAT_10010f4f,param_1);
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
#undef DAT_10010f4f
#undef DAT_10013060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_10010ff1
#undef str_10010ffe
#undef str_1001100c
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
#undef DAT_10010f4f
#define DAT_10010f4f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb73U)))
#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2c84U)))
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
#undef str_10010ff1
#define str_10010ff1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc15U)))
#undef str_10010ffe
#define str_10010ffe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc22U)))
#undef str_1001100c
#define str_1001100c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc30U)))
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
  iVar4 = recovered_10003830(param_1,str_10010ff1);
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
    recovered_100064d0((char *)(puVar7 + 1),0xf1,&DAT_10010f4f,param_1);
    return puVar7;
  }
  iVar3 = recovered_10003830(param_1,str_10010ffe);
  if (iVar3 == 0) {
    uVar8 = 2;
    goto LAB_10006fce;
  }
  iVar3 = recovered_10003830(param_1,str_1001100c);
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
  recovered_100064d0((char *)(puVar7 + 1),0xf1,&DAT_10010f4f,param_1);
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
#undef DAT_10010f4f
#undef DAT_10013060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef str_10010ff1
#undef str_10010ffe
#undef str_1001100c
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
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2c84U)))
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
#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_10013110
#define DAT_10013110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d34U)))
#undef DAT_10013120
#define DAT_10013120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d44U)))
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
      iVar2 = (*(code *)(ulong)_DAT_00280844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_10010f2c,0)
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
#undef DAT_10010f2c
#undef DAT_10013110
#undef DAT_10013120
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_218

#undef DAT_10013060
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2c84U)))
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
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2c84U)))
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
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2c84U)))
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
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2c84U)))
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
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2c84U)))
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
#define DAT_10013060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2c84U)))
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
#undef local_2c
#undef local_28

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


#undef DAT_10010f80
#define DAT_10010f80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba4U)))
#undef str_10010f83
#define str_10010f83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba7U)))
#undef str_10010f90
#define str_10010f90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb4U)))
#undef str_10010f9a
#define str_10010f9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbeU)))
#undef str_10010fae
#define str_10010fae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd2U)))
#undef str_10010fbc
#define str_10010fbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe0U)))
#undef str_10010fce
#define str_10010fce (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf2U)))
#undef str_10010fda
#define str_10010fda (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfeU)))
#undef str_10010feb
#define str_10010feb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cf0
 */

char * recovered_10007cf0(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10010f80;
  default:
    return str_10010feb;
  case 2:
    return str_10010f83;
  case 5:
    return str_10010f90;
  case 9:
    return str_10010f9a;
  case 0xc:
    return str_10010fae;
  case 0xd:
    return str_10010fbc;
  case 0x11:
    return str_10010fce;
  case 0x16:
    return str_10010fda;
  }
}

#undef DAT_10010f80
#undef str_10010f83
#undef str_10010f90
#undef str_10010f9a
#undef str_10010fae
#undef str_10010fbc
#undef str_10010fce
#undef str_10010fda
#undef str_10010feb

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
#define DAT_10013320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2f44U)))
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
#define local_2d8 (*(byte (*)[728])(pf_stack_frame + 24))
#define local_d8 (*(undefined1 (*)[216])(pf_stack_frame + 536))
#define local_d0 (*(undefined8 *)(pf_stack_frame + 544))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 552))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 560))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 568))
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
#undef local_2d8
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8

/* Native scope transfer; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007f30(void *context,...){
 __asm__ volatile("movq 64(%rdi),%rsp\nmovq 48(%rdi),%rbp\njmp *56(%rdi)");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10007f40(void *context){__asm__ volatile("movq %rbx, (%rdi)\nmovq %rbp, 8(%rdi)\nmovq %r12, 0x10(%rdi)\nmovq %r13, 0x18(%rdi)\nmovq %r14, 0x20(%rdi)\nmovq %r15, 0x28(%rdi)\nleaq 8(%rsp), %rdx\nmovq %rdx, 0x30(%rdi)\nmovq (%rsp), %rdx\nmovq %rdx, 0x38(%rdi)\nstmxcsr 0x40(%rdi)\nfnstcw 0x44(%rdi)\nxorl %eax, %eax\nretq \nud2 \nnopw %cs:(%rax, %rax)");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007f80(void *context,int value){__asm__ volatile("movq %rdi, %rdx\nmovl %esi, %eax\ntestl %eax, %eax\njne Lpf_context_10007f8e\nmovl $1, %eax\nLpf_context_10007f8e:\nldmxcsr 0x40(%rdx)\nfldcw 0x44(%rdx)\nmovq (%rdx), %rbx\nmovq 8(%rdx), %rbp\nmovq 0x10(%rdx), %r12\nmovq 0x18(%rdx), %r13\nmovq 0x20(%rdx), %r14\nmovq 0x28(%rdx), %r15\nmovq 0x30(%rdx), %rsp\njmpq *0x38(%rdx)\nud2 \nnopw %cs:(%rax, %rax)");}


#undef DAT_10008011
#define DAT_10008011 (*(uint8_t *)(0x10008011U))
#undef DAT_10011020
#define DAT_10011020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc44U)))
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
  local_60 = &DAT_10011020;
  local_50 = &DAT_10008011;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001c40();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10008011
#undef DAT_10011020
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
#define DAT_10013328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2f4cU)))
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


#undef DAT_10011030
#define DAT_10011030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc54U)))
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
  local_60 = &DAT_10011030;
  local_50 = &LAB_1000815d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_10011030
#undef LAB_1000815d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_10011040
#define DAT_10011040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc64U)))
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
  local_60 = &DAT_10011040;
  local_50 = &LAB_100081fd;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_10011040
#undef LAB_100081fd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_10011050
#define DAT_10011050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc74U)))
#undef LAB_1000829d
#define LAB_1000829d (*(uint8_t *)(0x1000829dU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008230
 */

void recovered_10008230(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_10011050;
  local_50 = &LAB_1000829d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_10011050
#undef LAB_1000829d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

#undef DAT_10011060
#define DAT_10011060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc84U)))
#undef LAB_1000833d
#define LAB_1000833d (*(uint8_t *)(0x1000833dU))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082d0
 */

void recovered_100082d0(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_10011060;
  local_50 = &LAB_1000833d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_10011060
#undef LAB_1000833d
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88

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
#define DAT_10013338 (*(int *)(((uintptr_t)pf_module_state + 0x2f5cU)))
#undef DAT_10013340
#define DAT_10013340 (*(void * *)(((uintptr_t)pf_module_state + 0x2f64U)))
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
#define DAT_10013340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2f64U)))
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
#define DAT_10013340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2f64U)))
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
#define DAT_10013328 (*(void * *)(((uintptr_t)pf_module_state + 0x2f4cU)))
#undef DAT_10013340
#define DAT_10013340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2f64U)))
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
#define DAT_10013328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2f4cU)))
#undef DAT_10013330
#define DAT_10013330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2f54U)))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define cStack_36 (*(char *)(pf_stack_frame + 26))
#define uStack_35 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_38 (*(undefined2 *)(pf_stack_frame + 24))
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
#undef local_30
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38

#undef DAT_10013328
#define DAT_10013328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2f4cU)))
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
#define DAT_10013330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2f54U)))
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
#define DAT_10013330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2f54U)))
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
#define DAT_10013330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2f54U)))
#undef DAT_10013340
#define DAT_10013340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2f64U)))
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
#define DAT_10013330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2f54U)))
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
                    /* WARNING: Subroutine does not return */
        recovered_10008760(plVar3);
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


#undef DAT_100130c0
#define DAT_100130c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ce4U)))
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


#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010448
#define DAT_10010448 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10010500
#define DAT_10010500 (*(double *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_10010508
#define DAT_10010508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_10010510
#define DAT_10010510 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10010518
#define DAT_10010518 (*(double *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef _DAT_10010508
#define _DAT_10010508 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10008ac0(double value)

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

  if (NAN(value)) {
    return value;
  }
  if (_DAT_10010508 < value) {
    return DAT_10010500;
  }
  dVar4 = 0.0;
  if (DAT_10010510 <= value) {
    uVar1 = 0;
    if (DAT_100103e0 < value) {
      uVar1 = 0;
      do {
        value = value * DAT_100103e0;
        uVar1 = uVar1 + 1;
      } while (DAT_100103e0 < value);
    }
    for (; value < DAT_10010448; value = value * DAT_100103e0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_100103e8;
    dVar5 = DAT_100103e8;
    dVar6 = DAT_100103e8;
    do {
      dVar7 = (value / dVar5) * dVar6;
      dVar9 = (value / (double)(iVar2 + -2)) * dVar7;
      dVar8 = (value / (double)(iVar2 + -1)) * dVar9;
      dVar6 = (value / (double)iVar2) * dVar8;
      dVar4 = dVar4 + dVar7 + dVar9 + dVar8 + dVar6;
      dVar5 = dVar5 + DAT_10010518;
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

#undef DAT_100103e0
#undef DAT_100103e8
#undef DAT_10010448
#undef DAT_10010500
#undef DAT_10010508
#undef DAT_10010510
#undef DAT_10010518
#undef _DAT_10010508

#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010448
#define DAT_10010448 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10010500
#define DAT_10010500 (*(double *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_10010508
#define DAT_10010508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_10010510
#define DAT_10010510 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10010518
#define DAT_10010518 (*(double *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef DAT_10010520
#define DAT_10010520 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef _DAT_10010508
#define _DAT_10010508 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef _DAT_10010520
#define _DAT_10010520 (*(float *)(((uintptr_t)pf_module_state + 0x144U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10008c30(float value)

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

  dVar6 = (double)value;
  if (NAN(value)) {
    return value;
  }
  if (_DAT_10010508 < dVar6) {
    return (float)DAT_10010500;
  }
  dVar5 = 0.0;
  if (DAT_10010510 <= dVar6) {
    uVar1 = 0;
    if (_DAT_10010520 < value) {
      uVar1 = 0;
      do {
        dVar6 = dVar6 * DAT_100103e0;
        uVar1 = uVar1 + 1;
      } while (DAT_100103e0 < dVar6);
    }
    for (; dVar6 < DAT_10010448; dVar6 = dVar6 * DAT_100103e0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_100103e8;
    dVar5 = DAT_100103e8;
    dVar7 = DAT_100103e8;
    do {
      dVar8 = (dVar6 / dVar4) * dVar7;
      dVar10 = (dVar6 / (double)(iVar2 + -2)) * dVar8;
      dVar9 = (dVar6 / (double)(iVar2 + -1)) * dVar10;
      dVar7 = (dVar6 / (double)iVar2) * dVar9;
      dVar5 = dVar5 + dVar8 + dVar10 + dVar9 + dVar7;
      dVar4 = dVar4 + DAT_10010518;
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

#undef DAT_100103e0
#undef DAT_100103e8
#undef DAT_10010448
#undef DAT_10010500
#undef DAT_10010508
#undef DAT_10010510
#undef DAT_10010518
#undef DAT_10010520
#undef _DAT_10010508
#undef _DAT_10010520

#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010448
#define DAT_10010448 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10010500
#define DAT_10010500 (*(double *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_10010508
#define DAT_10010508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_10010510
#define DAT_10010510 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10010518
#define DAT_10010518 (*(double *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef _DAT_10010508
#define _DAT_10010508 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
#define in_stack_00000008 (*(longdouble *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008dc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10008dc0(double value)

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

  dVar5 = (double)in_stack_00000008;
  if (NAN(dVar5)) {
    dVar4 = dVar5;
  }
  else if (dVar5 <= _DAT_10010508) {
    dVar4 = 0.0;
    if (DAT_10010510 <= dVar5) {
      uVar1 = 0;
      if (DAT_100103e0 < dVar5) {
        uVar1 = 0;
        do {
          dVar5 = dVar5 * DAT_100103e0;
          uVar1 = uVar1 + 1;
        } while (DAT_100103e0 < dVar5);
      }
      for (; dVar5 < DAT_10010448; dVar5 = dVar5 * DAT_100103e0) {
        uVar1 = uVar1 + 1;
      }
      iVar2 = 4;
      dVar4 = DAT_100103e8;
      dVar6 = DAT_100103e8;
      dVar7 = DAT_100103e8;
      do {
        dVar8 = (dVar5 / dVar6) * dVar7;
        dVar10 = (dVar5 / (double)(iVar2 + -2)) * dVar8;
        dVar9 = (dVar5 / (double)(iVar2 + -1)) * dVar10;
        dVar7 = (dVar5 / (double)iVar2) * dVar9;
        dVar4 = dVar4 + dVar8 + dVar10 + dVar9 + dVar7;
        dVar6 = dVar6 + DAT_10010518;
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
  }
  else {
    dVar4 = DAT_10010500;
  }
  return dVar4;
}

#undef DAT_100103e0
#undef DAT_100103e8
#undef DAT_10010448
#undef DAT_10010500
#undef DAT_10010508
#undef DAT_10010510
#undef DAT_10010518
#undef _DAT_10010508
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f50
 */

double recovered_10008f50(long end,long start)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)end - (double)start;
}


#undef DAT_100103e0
#define DAT_100103e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100103e8
#define DAT_100103e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10010408
#define DAT_10010408 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10010448
#define DAT_10010448 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f70
 */

double recovered_10008f70(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_10004280(param_1);
  if (DAT_100103e0 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_100103e8;
  }
  else if (param_1 - dVar1 <= DAT_10010448) {
    dVar1 = dVar1 + DAT_10010408;
  }
  return dVar1;
}

#undef DAT_100103e0
#undef DAT_100103e8
#undef DAT_10010408
#undef DAT_10010448

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

longlong recovered_10009100(char *text,char **end,int base)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10008fc0((byte *)text,end,base);
  return lVar1;
}


#undef DAT_10010530
#define DAT_10010530 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef DAT_100130c0
#define DAT_100130c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ce4U)))
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
                        *(long *)(&DAT_10010530 + (ulong)(uVar10 & 0xf) * 8);
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

#undef DAT_10010530
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


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_10011070
#define DAT_10011070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc94U)))
#undef LAB_1000970d
#define LAB_1000970d (*(uint8_t *)(0x1000970dU))
#define local_98 (*(undefined8 *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_78 (*(code * *)(pf_stack_frame + 56))
#define local_70 (*(undefined * *)(pf_stack_frame + 64))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_40 (*(undefined1 * *)(pf_stack_frame + 112))
#define local_38 (*(undefined8 *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

undefined1 * recovered_10009640(undefined1 *param_1,long *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined1 *puVar2;

  local_68 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_58 = (undefined1 *)&local_98;
  plVar1 = (long *)(param_1 + 8);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  *param_1 = 0;
  local_78 = recovered_10008040;
  local_70 = &DAT_10011070;
  local_60 = &LAB_1000970d;
  local_38 = plVar1;
  recovered_100086e0(&local_98);
  if (plVar1 != param_2) {
    puVar2 = &DAT_10010f2c;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_2;
    }
    local_90 = 1;
    local_40 = param_1;
    recovered_1000d370(local_38,(long)puVar2,param_2[1]);
    param_1 = local_40;
  }
  param_1[0x30] = 0;
  recovered_10008700(&local_98);
  return param_1;
}

#undef DAT_10010f2c
#undef DAT_10011070
#undef LAB_1000970d
#undef local_98
#undef local_90
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009760
 */

undefined1 * recovered_10009760(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  *param_1 = 0;
  if ((undefined8 *)(param_1 + 8) != param_2) {
    recovered_100080f0((void *)0x0);
    *(undefined8 *)(param_1 + 8) = *param_2;
    uVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_1[0x30] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097d0
 */

undefined1 * recovered_100097d0(undefined1 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  param_1[0x30] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009800
 */

undefined1 * recovered_10009800(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *param_1 = 2;
  *(ulong *)(param_1 + 0x28) = param_2 + (ulong)(param_2 == 0);
  param_1[0x30] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009830
 */

void recovered_10009830(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009860
 */

void recovered_10009860(undefined1 *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  *param_1 = 1;
  if ((long *)(param_1 + 8) != param_2) {
    puVar1 = &DAT_10010f2c;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_1000d370((long *)(param_1 + 8),(long)puVar1,param_2[1]);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

#undef DAT_10010f2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098a0
 */

void recovered_100098a0(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  *param_1 = 1;
  if ((undefined8 *)(param_1 + 8) != param_2) {
    recovered_100080f0(*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = *param_2;
    uVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098f0
 */

void recovered_100098f0(undefined1 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  return;
}


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#define auStack_a8 (*(undefined1 (*)[168])(pf_stack_frame + 24))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 40))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 48))
#define abStack_88 (*(byte (*)[136])(pf_stack_frame + 56))
#define cStack_34 (*(char *)(pf_stack_frame + 140))
#define cStack_33 (*(char *)(pf_stack_frame + 141))
#define cStack_32 (*(char *)(pf_stack_frame + 142))
#define cStack_31 (*(char *)(pf_stack_frame + 143))
#define cStack_30 (*(char *)(pf_stack_frame + 144))
#define cStack_2f (*(char *)(pf_stack_frame + 145))
#define cStack_2e (*(char *)(pf_stack_frame + 146))
#define cStack_2d (*(char *)(pf_stack_frame + 147))
#define cStack_2c (*(char *)(pf_stack_frame + 148))
#define cStack_2b (*(char *)(pf_stack_frame + 149))
#define cStack_2a (*(char *)(pf_stack_frame + 150))
#define cStack_29 (*(char *)(pf_stack_frame + 151))
#define cStack_27 (*(char *)(pf_stack_frame + 153))
#define cStack_26 (*(char *)(pf_stack_frame + 154))
#define cStack_25 (*(char *)(pf_stack_frame + 155))
#define cStack_24 (*(char *)(pf_stack_frame + 156))
#define cStack_23 (*(char *)(pf_stack_frame + 157))
#define cStack_22 (*(char *)(pf_stack_frame + 158))
#define cStack_21 (*(char *)(pf_stack_frame + 159))
#define cStack_20 (*(char *)(pf_stack_frame + 160))
#define cStack_1f (*(char *)(pf_stack_frame + 161))
#define cStack_1e (*(char *)(pf_stack_frame + 162))
#define cStack_1d (*(char *)(pf_stack_frame + 163))
#define cStack_1c (*(char *)(pf_stack_frame + 164))
#define cStack_1b (*(char *)(pf_stack_frame + 165))
#define cStack_1a (*(char *)(pf_stack_frame + 166))
#define cStack_19 (*(char *)(pf_stack_frame + 167))
#define local_38 (*(byte (*)[56])(pf_stack_frame + 136))
#define local_28 (*(char *)(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009920
 */

uint128 * recovered_10009920(uint128 *param_1,char *param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  pf_u120 auVar19;
  pf_u120 auVar20;
  pf_u120 auVar21;
  pf_u120 auVar22;
  pf_u120 auVar23;
  pf_u120 auVar24;
  pf_u120 auVar25;
  pf_u120 auVar26;
  pf_u120 auVar27;
  pf_u120 auVar28;
  pf_u120 auVar29;
  pf_u120 auVar30;
  pf_u120 auVar31;
  pf_u120 auVar32;
  pf_u120 auVar33;
  pf_u120 auVar34;
  pf_u120 auVar35;
  pf_u120 auVar36;
  pf_u88 auVar37;
  pf_u120 auVar38;
  pf_u120 auVar39;
  pf_u120 auVar40;
  pf_u88 auVar41;
  pf_u120 auVar42;
  ulong uVar43;
  byte *pbVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  undefined1 *puVar49;
  uint128 auVar50;
  pf_u88 auVar51;
  pf_u120 auVar52;
  pf_u120 auVar53;
  uint128 auVar54;
  uint128 auVar55;
  uint128 auVar56;
  uint128 auVar57;

  if (*param_2 != '\x02') {
    if (*param_2 == '\x01') {
      *param_1 = (uint128)0x0;
      *(undefined8 *)(uintptr_t)(param_1+(1)) = 0;
      puVar49 = &DAT_10010f2c;
      if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
        puVar49 = *(undefined1 **)(param_2 + 8);
      }
      uStack_90 = 0x1000997b;
      recovered_1000d370((long *)param_1,(long)puVar49,*(ulong *)(param_2 + 0x10));
      return param_1;
    }
LAB_10009938:
    *param_1 = (uint128)0x0;
    *(undefined8 *)(uintptr_t)(param_1+(1)) = 0;
    return param_1;
  }
  uVar43 = *(ulong *)(param_2 + 0x20);
  uVar47 = -uVar43;
  if ((long)-uVar43 < 0) {
    uVar47 = uVar43;
  }
  uVar46 = 0;
  do {
    uVar45 = uVar46;
    abStack_88[uVar45] = (char)uVar47 + (char)(uVar47 / 10) * -10 | 0x30;
    uVar46 = uVar45 + 1;
    bVar2 = 9 < uVar47;
    uVar47 = uVar47 / 10;
  } while (bVar2);
  if ((long)uVar43 < 0) {
    abStack_88[uVar45 + 1] = 0x2d;
    uVar46 = uVar45 + 2;
  }
  if (0x20 < uVar46) goto LAB_10009938;
  if (uVar46 == 0) goto LAB_10009b13;
  if (uVar46 < 4) {
    uVar43 = 0;
  }
  else {
    if (uVar46 < 0x10) {
      uVar47 = 0;
    }
    else {
      uVar43 = (ulong)((uint)uVar46 & 0x30);
      auVar54 = *(uint128 *)(auStack_98 + uVar46);
      PF_PART1(auVar19,0xd) = 0;
      PF_PART13(auVar19, 0) = PF_PART13(auVar54, 0);
      PF_PART1(auVar19,0xe) = ((uint8_t *)(void *)&auVar54)[7];
      PF_PART1(auVar21,0xc) = ((uint8_t *)(void *)&auVar54)[6];
      PF_PART12(auVar21, 0) = PF_PART12(auVar54, 0);
      PF_PART2(auVar21, 13) = PF_PART2(auVar19, 13);
      PF_PART1(auVar23,0xb) = 0;
      PF_PART11(auVar23, 0) = PF_PART11(auVar54, 0);
      PF_PART3(auVar23, 12) = PF_PART3(auVar21, 12);
      PF_PART1(auVar25,10) = ((uint8_t *)(void *)&auVar54)[5];
      PF_PART10(auVar25, 0) = PF_PART10(auVar54, 0);
      PF_PART4(auVar25, 11) = PF_PART4(auVar23, 11);
      PF_PART1(auVar27,9) = 0;
      PF_PART9(auVar27, 0) = PF_PART9(auVar54, 0);
      PF_PART5(auVar27, 10) = PF_PART5(auVar25, 10);
      PF_PART1(auVar29,8) = ((uint8_t *)(void *)&auVar54)[4];
      PF_PART8(auVar29, 0) = PF_PART8(auVar54, 0);
      PF_PART6(auVar29, 9) = PF_PART6(auVar27, 9);
      ((uint8_t *)(void *)&auVar56)[7] = 0;
      PF_PART7(auVar56, 0) = PF_PART7(auVar29, 8);
      PF_PART8(auVar35, 7) = 0;
      PF_PART7(auVar35, 0) = PF_PART7(auVar29, 8);
      PF_PART8(auVar36, 1) = SUB158(auVar35 << 0x40,7);
      PF_PART1(auVar36,0) = ((uint8_t *)(void *)&auVar54)[3];
      PF_PART6(auVar36, 9) = 0;
      PF_PART10(auVar37, 1) = SUB1510(auVar36 << 0x30,5);
      PF_PART1(auVar37,0) = ((uint8_t *)(void *)&auVar54)[2];
      PF_PART4(auVar38, 11) = 0;
      PF_PART11(auVar38, 0) = auVar37;
      PF_PART1(auVar31,2) = ((uint8_t *)(void *)&auVar54)[1];
      PF_PART2(auVar31, 0) = PF_PART2(auVar54, 0);
      PF_PART12(auVar31, 3) = SUB1512(auVar38 << 0x20,3);
      PF_PART13(auVar33, 2) = PF_PART13(auVar31, 2);
      PF_PART2(auVar33, 0) = PF_PART2(auVar54, 0) & 0xff;
      PF_PART4(auVar56, 8) = PF_PART4(auVar33, 0);
      PF_PART4(auVar56, 12) = PF_PART4(auVar37, 0);
      auVar55 = pshuflw(auVar56,auVar56,0x1b);
      auVar56 = pshufhw(auVar55,auVar55,0x1b);
      ((uint8_t *)(void *)&auVar55)[8] = ((uint8_t *)(void *)&auVar54)[8];
      ((uint8_t *)(void *)&auVar55)[9] = 0;
      ((uint8_t *)(void *)&auVar55)[10] = ((uint8_t *)(void *)&auVar54)[9];
      PF_PART10(auVar51, 0) = (unkuint10)((uint8_t *)(void *)&auVar54)[0xc] << 0x40;
      PF_PART1(auVar51,10) = ((uint8_t *)(void *)&auVar54)[0xd];
      PF_PART1(auVar52,0xb) = 0;
      PF_PART11(auVar52, 0) = auVar51;
      PF_PART1(auVar52,0xc) = ((uint8_t *)(void *)&auVar54)[0xe];
      PF_PART1(auVar52,0xd) = 0;
      PF_PART1(auVar52,0xe) = ((uint8_t *)(void *)&auVar54)[0xf];
      ((uint8_t *)(void *)&auVar55)[3] = 0;
      PF_PART3(auVar55, 0) = PF_PART3(auVar51, 8);
      PF_PART3(auVar55, 4) = PF_PART3(auVar52, 12);
      ((uint8_t *)(void *)&auVar55)[7] = 0;
      ((uint8_t *)(void *)&auVar55)[0xb] = 0;
      PF_PART3(auVar55, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar54)[0xb],(uint6)((uint8_t *)(void *)&auVar54)[10] << 0x20) >> 0x20);
      ((uint8_t *)(void *)&auVar55)[0xf] = 0;
      auVar54 = pshuflw(auVar55,auVar55,0x1b);
      auVar54 = pshufhw(auVar54,auVar54,0x1b);
      sVar3 = PF_PART2(auVar54, 0);
      sVar4 = PF_PART2(auVar54, 2);
      sVar5 = PF_PART2(auVar54, 4);
      sVar6 = PF_PART2(auVar54, 6);
      sVar7 = PF_PART2(auVar54, 8);
      sVar8 = PF_PART2(auVar54, 10);
      sVar9 = PF_PART2(auVar54, 12);
      sVar10 = PF_PART2(auVar54, 14);
      sVar11 = PF_PART2(auVar56, 0);
      sVar12 = PF_PART2(auVar56, 2);
      sVar13 = PF_PART2(auVar56, 4);
      sVar14 = PF_PART2(auVar56, 6);
      sVar15 = PF_PART2(auVar56, 8);
      sVar16 = PF_PART2(auVar56, 10);
      sVar17 = PF_PART2(auVar56, 12);
      sVar18 = PF_PART2(auVar56, 14);
      local_38[0] = (0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar54)[0] - (0xff < sVar3);
      local_38[1] = (0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar54)[2] - (0xff < sVar4);
      local_38[2] = (0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar54)[4] - (0xff < sVar5);
      local_38[3] = (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar54)[6] - (0xff < sVar6);
      cStack_34 = (0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar54)[8] - (0xff < sVar7);
      cStack_33 = (0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar54)[10] - (0xff < sVar8);
      cStack_32 = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar54)[0xc] - (0xff < sVar9);
      cStack_31 = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar54)[0xe] - (0xff < sVar10);
      cStack_30 = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar56)[0] - (0xff < sVar11);
      cStack_2f = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar56)[2] - (0xff < sVar12);
      cStack_2e = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar56)[4] - (0xff < sVar13);
      cStack_2d = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar56)[6] - (0xff < sVar14);
      cStack_2c = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar56)[8] - (0xff < sVar15);
      cStack_2b = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar56)[10] - (0xff < sVar16);
      cStack_2a = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar56)[0xc] - (0xff < sVar17);
      cStack_29 = (0 < sVar18) * (sVar18 < 0x100) * ((uint8_t *)(void *)&auVar56)[0xe] - (0xff < sVar18);
      if (uVar43 != 0x10) {
        auVar54 = *(uint128 *)(auStack_a8 + uVar46);
        PF_PART1(auVar20,0xd) = 0;
        PF_PART13(auVar20, 0) = PF_PART13(auVar54, 0);
        PF_PART1(auVar20,0xe) = ((uint8_t *)(void *)&auVar54)[7];
        PF_PART1(auVar22,0xc) = ((uint8_t *)(void *)&auVar54)[6];
        PF_PART12(auVar22, 0) = PF_PART12(auVar54, 0);
        PF_PART2(auVar22, 13) = PF_PART2(auVar20, 13);
        PF_PART1(auVar24,0xb) = 0;
        PF_PART11(auVar24, 0) = PF_PART11(auVar54, 0);
        PF_PART3(auVar24, 12) = PF_PART3(auVar22, 12);
        PF_PART1(auVar26,10) = ((uint8_t *)(void *)&auVar54)[5];
        PF_PART10(auVar26, 0) = PF_PART10(auVar54, 0);
        PF_PART4(auVar26, 11) = PF_PART4(auVar24, 11);
        PF_PART1(auVar28,9) = 0;
        PF_PART9(auVar28, 0) = PF_PART9(auVar54, 0);
        PF_PART5(auVar28, 10) = PF_PART5(auVar26, 10);
        PF_PART1(auVar30,8) = ((uint8_t *)(void *)&auVar54)[4];
        PF_PART8(auVar30, 0) = PF_PART8(auVar54, 0);
        PF_PART6(auVar30, 9) = PF_PART6(auVar28, 9);
        ((uint8_t *)(void *)&auVar57)[7] = 0;
        PF_PART7(auVar57, 0) = PF_PART7(auVar30, 8);
        PF_PART8(auVar39, 7) = 0;
        PF_PART7(auVar39, 0) = PF_PART7(auVar30, 8);
        PF_PART8(auVar40, 1) = SUB158(auVar39 << 0x40,7);
        PF_PART1(auVar40,0) = ((uint8_t *)(void *)&auVar54)[3];
        PF_PART6(auVar40, 9) = 0;
        PF_PART10(auVar41, 1) = SUB1510(auVar40 << 0x30,5);
        PF_PART1(auVar41,0) = ((uint8_t *)(void *)&auVar54)[2];
        PF_PART4(auVar42, 11) = 0;
        PF_PART11(auVar42, 0) = auVar41;
        PF_PART1(auVar32,2) = ((uint8_t *)(void *)&auVar54)[1];
        PF_PART2(auVar32, 0) = PF_PART2(auVar54, 0);
        PF_PART12(auVar32, 3) = SUB1512(auVar42 << 0x20,3);
        PF_PART13(auVar34, 2) = PF_PART13(auVar32, 2);
        PF_PART2(auVar34, 0) = PF_PART2(auVar54, 0) & 0xff;
        PF_PART4(auVar57, 8) = PF_PART4(auVar34, 0);
        PF_PART4(auVar57, 12) = PF_PART4(auVar41, 0);
        auVar55 = pshuflw(auVar57,auVar57,0x1b);
        auVar55 = pshufhw(auVar55,auVar55,0x1b);
        ((uint8_t *)(void *)&auVar50)[9] = 0;
        ((uint8_t *)(void *)&auVar50)[8] = ((uint8_t *)(void *)&auVar54)[8];
        ((uint8_t *)(void *)&auVar50)[10] = ((uint8_t *)(void *)&auVar54)[9];
        PF_PART10(auVar53, 0) = (unkuint10)((uint8_t *)(void *)&auVar54)[0xc] << 0x40;
        PF_PART1(auVar53,10) = ((uint8_t *)(void *)&auVar54)[0xd];
        PF_PART1(auVar53,0xb) = 0;
        PF_PART1(auVar53,0xc) = ((uint8_t *)(void *)&auVar54)[0xe];
        PF_PART1(auVar53,0xd) = 0;
        PF_PART1(auVar53,0xe) = ((uint8_t *)(void *)&auVar54)[0xf];
        ((uint8_t *)(void *)&auVar50)[7] = 0;
        PF_PART7(auVar50, 0) = PF_PART7(auVar53, 8);
        ((uint8_t *)(void *)&auVar50)[0xb] = 0;
        PF_PART3(auVar50, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar54)[0xb],(uint6)((uint8_t *)(void *)&auVar54)[10] << 0x20) >> 0x20);
        ((uint8_t *)(void *)&auVar50)[0xf] = 0;
        auVar54 = pshuflw(auVar50,auVar50,0x1b);
        auVar54 = pshufhw(auVar54,auVar54,0x1b);
        sVar3 = PF_PART2(auVar54, 0);
        sVar4 = PF_PART2(auVar54, 2);
        sVar5 = PF_PART2(auVar54, 4);
        sVar6 = PF_PART2(auVar54, 6);
        sVar7 = PF_PART2(auVar54, 8);
        sVar8 = PF_PART2(auVar54, 10);
        sVar9 = PF_PART2(auVar54, 12);
        sVar10 = PF_PART2(auVar54, 14);
        sVar11 = PF_PART2(auVar55, 0);
        sVar12 = PF_PART2(auVar55, 2);
        sVar13 = PF_PART2(auVar55, 4);
        sVar14 = PF_PART2(auVar55, 6);
        sVar15 = PF_PART2(auVar55, 8);
        sVar16 = PF_PART2(auVar55, 10);
        sVar17 = PF_PART2(auVar55, 12);
        sVar18 = PF_PART2(auVar55, 14);
        local_28 = (0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar54)[0] - (0xff < sVar3);
        cStack_27 = (0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar54)[2] - (0xff < sVar4);
        cStack_26 = (0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar54)[4] - (0xff < sVar5);
        cStack_25 = (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar54)[6] - (0xff < sVar6);
        cStack_24 = (0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar54)[8] - (0xff < sVar7);
        cStack_23 = (0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar54)[10] - (0xff < sVar8);
        cStack_22 = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar54)[0xc] - (0xff < sVar9);
        cStack_21 = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar54)[0xe] - (0xff < sVar10);
        cStack_20 = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar55)[0] - (0xff < sVar11);
        cStack_1f = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar55)[2] - (0xff < sVar12);
        cStack_1e = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar55)[4] - (0xff < sVar13);
        cStack_1d = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar55)[6] - (0xff < sVar14);
        cStack_1c = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar55)[8] - (0xff < sVar15);
        cStack_1b = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar55)[10] - (0xff < sVar16);
        cStack_1a = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar55)[0xc] - (0xff < sVar17);
        cStack_19 = (0 < sVar18) * (sVar18 < 0x100) * ((uint8_t *)(void *)&auVar55)[0xe] - (0xff < sVar18);
      }
      if (uVar46 == uVar43) goto LAB_10009b13;
      uVar47 = uVar43;
      if ((uVar46 & 0xc) == 0) goto LAB_10009ae9;
    }
    uVar43 = (ulong)((uint)uVar46 & 0x3c);
    pbVar44 = abStack_88 + (uVar46 - uVar47) + -4;
    do {
      uVar1 = *(undefined4 *)pbVar44;
      auVar54 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                                 CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >>
                                       0x10),(short)uVar1) & 0xffffff00ff00ff);
      auVar54 = pshuflw(auVar54,auVar54,0x1b);
      sVar3 = PF_PART2(auVar54, 0);
      sVar4 = PF_PART2(auVar54, 2);
      sVar5 = PF_PART2(auVar54, 4);
      sVar6 = PF_PART2(auVar54, 6);
      *(uint *)(local_38 + uVar47) =
           CONCAT13((0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar54)[6] - (0xff < sVar6),
                    CONCAT12((0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar54)[4] - (0xff < sVar5),
                             CONCAT11((0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar54)[2] - (0xff < sVar4),
                                      (0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar54)[0] - (0xff < sVar3))))
      ;
      uVar47 = uVar47 + 4;
      pbVar44 = pbVar44 + -4;
    } while (uVar43 != uVar47);
    if (uVar46 == uVar43) goto LAB_10009b13;
  }
LAB_10009ae9:
  lVar48 = uVar46 - uVar43;
  pbVar44 = local_38 + uVar43;
  do {
    *pbVar44 = abStack_88[lVar48 + -1];
    pbVar44 = pbVar44 + 1;
    lVar48 = lVar48 + -1;
  } while (lVar48 != 0);
LAB_10009b13:
  *param_1 = (uint128)0x0;
  *(undefined8 *)(uintptr_t)(param_1+(1)) = 0;
  uStack_90 = 0x10009b32;
  recovered_1000d370((long *)param_1,(long)local_38,uVar46);
  return param_1;
}

#undef DAT_10010f2c
#undef auStack_a8
#undef auStack_98
#undef uStack_90
#undef abStack_88
#undef cStack_34
#undef cStack_33
#undef cStack_32
#undef cStack_31
#undef cStack_30
#undef cStack_2f
#undef cStack_2e
#undef cStack_2d
#undef cStack_2c
#undef cStack_2b
#undef cStack_2a
#undef cStack_29
#undef cStack_27
#undef cStack_26
#undef cStack_25
#undef cStack_24
#undef cStack_23
#undef cStack_22
#undef cStack_21
#undef cStack_20
#undef cStack_1f
#undef cStack_1e
#undef cStack_1d
#undef cStack_1c
#undef cStack_1b
#undef cStack_1a
#undef cStack_19
#undef local_38
#undef local_28

#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_10013060
#define DAT_10013060 (*(int *)(((uintptr_t)pf_module_state + 0x2c84U)))
#define local_28 (*(char * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b40
 */

longlong recovered_10009b40(void *variable)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;

  if (*(char *)variable == '\x01') {
    if (*(long *)((long)variable + 0x10) != 0) {
      local_28 = (char *)0x0;
      DAT_10013060 = 0;
      pcVar1 = *(char **)((long)variable + 8);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = &DAT_10010f2c;
      }
      lVar2 = recovered_10009100(pcVar1,&local_28,10);
      pcVar1 = *(char **)((long)variable + 8);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = &DAT_10010f2c;
      }
      if (((local_28 == (char *)0x0 || local_28 == pcVar1) || (*local_28 != '\0')) ||
         (DAT_10013060 == 0x22)) {
        if (((2 < *(ulong *)((long)variable + 0x10)) && (*pcVar1 == '0')) &&
           ((byte)(pcVar1[1] | 0x20U) == 0x78)) {
          local_28 = (char *)0x0;
          DAT_10013060 = 0;
          lVar2 = recovered_10009100(pcVar1 + 2,&local_28,0x10);
          puVar3 = &DAT_10010f2c;
          if (*(undefined1 **)((long)variable + 8) != (undefined1 *)0x0) {
            puVar3 = *(undefined1 **)((long)variable + 8);
          }
          if (((local_28 != (char *)0x0) && (local_28 != puVar3 + 2)) &&
             ((*local_28 == '\0' && (DAT_10013060 != 0x22)))) {
            return lVar2;
          }
        }
        lVar2 = 0;
      }
      return lVar2;
    }
  }
  else if (*(char *)variable == '\x02') {
    return *(longlong *)((long)variable + 0x20);
  }
  return 0;
}

#undef DAT_10010f2c
#undef DAT_10013060
#undef local_28

#undef DAT_10011078
#define DAT_10011078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc9cU)))
#undef LAB_10009d66
#define LAB_10009d66 (*(uint8_t *)(0x10009d66U))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_80 (*(code * *)(pf_stack_frame + 64))
#define local_78 (*(undefined * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_48 (*(undefined8 * *)(pf_stack_frame + 120))
#define local_40 (*(undefined8 * *)(pf_stack_frame + 128))
#define local_38 (*(uintptr_t * *)(pf_stack_frame + 136))
#define auStack_a8 (*(undefined1 (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c50
 */

void recovered_10009c50(undefined8 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  int *piVar1;
  bool bVar2;

  local_70 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  local_60 = auStack_a8;
  *param_1 = param_2;
  local_38 = param_1 + 1;
  *local_38 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_40 = param_1 + 4;
  *local_40 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  *(undefined2 *)(param_1 + 9) = 0x100;
  param_1[10] = 0;
  local_80 = recovered_10008040;
  local_78 = &DAT_10011078;
  local_68 = &LAB_10009d66;
  local_98 = 1;
  recovered_100086e0(&local_a0);
  local_48 = param_1;
  recovered_10009dc0((long)param_1);
  local_48[7] = 0x100000001;
  *(undefined1 *)(local_48 + 8) = 0;
  *(undefined4 *)((long)local_48 + 0x44) = 0xfff;
  piVar1 = (int *)*local_48;
  bVar2 = true;
  if (((piVar1 != (int *)0x0) && (*(long *)(piVar1 + 2) != 0)) && (0 < *piVar1)) {
    bVar2 = piVar1[1] < 1;
  }
  *(bool *)(local_48 + 9) = bVar2;
  *(undefined1 *)((long)local_48 + 0x49) = 1;
  recovered_10008700(&local_a0);
  return;
}

#undef DAT_10011078
#undef LAB_10009d66
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_48
#undef local_40
#undef local_38
#undef auStack_a8

#undef DAT_10011080
#define DAT_10011080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xca4U)))
#undef LAB_1000abab
#define LAB_1000abab (*(uint8_t *)(0x1000ababU))
#undef PTR_recovered_1000da40_10012010
#define PTR_recovered_1000da40_10012010 (*(void * *)(((uintptr_t)pf_module_state + 0x1c34U)))
#undef PTR_recovered_1000dc30_10012068
#define PTR_recovered_1000dc30_10012068 (*(void * *)(((uintptr_t)pf_module_state + 0x1c8cU)))
#undef PTR_recovered_1000dcd0_100120b0
#define PTR_recovered_1000dcd0_100120b0 (*(void * *)(((uintptr_t)pf_module_state + 0x1cd4U)))
#undef PTR_recovered_1000de00_100120f8
#define PTR_recovered_1000de00_100120f8 (*(void * *)(((uintptr_t)pf_module_state + 0x1d1cU)))
#undef PTR_recovered_1000dee0_10012140
#define PTR_recovered_1000dee0_10012140 (*(void * *)(((uintptr_t)pf_module_state + 0x1d64U)))
#undef PTR_recovered_1000e0c0_10012188
#define PTR_recovered_1000e0c0_10012188 (*(void * *)(((uintptr_t)pf_module_state + 0x1dacU)))
#undef PTR_recovered_1000e250_100121d0
#define PTR_recovered_1000e250_100121d0 (*(void * *)(((uintptr_t)pf_module_state + 0x1df4U)))
#undef PTR_recovered_1000e470_10012218
#define PTR_recovered_1000e470_10012218 (*(void * *)(((uintptr_t)pf_module_state + 0x1e3cU)))
#undef PTR_recovered_1000e5c0_10012260
#define PTR_recovered_1000e5c0_10012260 (*(void * *)(((uintptr_t)pf_module_state + 0x1e84U)))
#undef PTR_recovered_1000ebe0_100122a8
#define PTR_recovered_1000ebe0_100122a8 (*(void * *)(((uintptr_t)pf_module_state + 0x1eccU)))
#undef PTR_recovered_1000ec70_100122f0
#define PTR_recovered_1000ec70_100122f0 (*(void * *)(((uintptr_t)pf_module_state + 0x1f14U)))
#undef PTR_recovered_1000ed40_10012338
#define PTR_recovered_1000ed40_10012338 (*(void * *)(((uintptr_t)pf_module_state + 0x1f5cU)))
#undef PTR_recovered_1000f500_10012380
#define PTR_recovered_1000f500_10012380 (*(void * *)(((uintptr_t)pf_module_state + 0x1fa4U)))
#undef PTR_recovered_1000f780_100123c8
#define PTR_recovered_1000f780_100123c8 (*(void * *)(((uintptr_t)pf_module_state + 0x1fecU)))
#undef PTR_recovered_1000f870_10012410
#define PTR_recovered_1000f870_10012410 (*(void * *)(((uintptr_t)pf_module_state + 0x2034U)))
#undef PTR_recovered_1000f990_10012458
#define PTR_recovered_1000f990_10012458 (*(void * *)(((uintptr_t)pf_module_state + 0x207cU)))
#undef PTR_recovered_1000fa80_100124a0
#define PTR_recovered_1000fa80_100124a0 (*(void * *)(((uintptr_t)pf_module_state + 0x20c4U)))
#undef PTR_recovered_1000fba0_100124e8
#define PTR_recovered_1000fba0_100124e8 (*(void * *)(((uintptr_t)pf_module_state + 0x210cU)))
#undef PTR_recovered_1000fc90_10012530
#define PTR_recovered_1000fc90_10012530 (*(void * *)(((uintptr_t)pf_module_state + 0x2154U)))
#undef PTR_recovered_1000fdc0_10012578
#define PTR_recovered_1000fdc0_10012578 (*(void * *)(((uintptr_t)pf_module_state + 0x219cU)))
#undef PTR_recovered_1000fed0_100125c0
#define PTR_recovered_1000fed0_100125c0 (*(void * *)(((uintptr_t)pf_module_state + 0x21e4U)))
#undef PTR_recovered_10010020_10012608
#define PTR_recovered_10010020_10012608 (*(void * *)(((uintptr_t)pf_module_state + 0x222cU)))
#define local_a8 (*(long * *)(pf_stack_frame + 712))
#define local_a0 (*(long * *)(pf_stack_frame + 720))
#define local_98 (*(undefined8 *)(pf_stack_frame + 728))
#define local_90 (*(undefined4 *)(pf_stack_frame + 736))
#define local_78 (*(code * *)(pf_stack_frame + 760))
#define local_70 (*(undefined * *)(pf_stack_frame + 768))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 776))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 784))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 792))
#define local_40 (*(long *)(pf_stack_frame + 816))
#define local_33 (*(undefined2 *)(pf_stack_frame + 829))
#define local_31 (*(undefined1 *)(pf_stack_frame + 831))
#define local_358 (*(void * *)(pf_stack_frame + 24))
#define local_350 (*(undefined8 *)(pf_stack_frame + 32))
#define local_340 (*(void * *)(pf_stack_frame + 48))
#define local_338 (*(undefined8 *)(pf_stack_frame + 56))
#define local_328 (*(void * *)(pf_stack_frame + 72))
#define local_320 (*(undefined8 *)(pf_stack_frame + 80))
#define local_310 (*(void * *)(pf_stack_frame + 96))
#define local_308 (*(undefined8 *)(pf_stack_frame + 104))
#define local_2f8 (*(void * *)(pf_stack_frame + 120))
#define local_2f0 (*(undefined8 *)(pf_stack_frame + 128))
#define local_2e0 (*(void * *)(pf_stack_frame + 144))
#define local_2d8 (*(undefined8 *)(pf_stack_frame + 152))
#define local_2c8 (*(void * *)(pf_stack_frame + 168))
#define local_2c0 (*(undefined8 *)(pf_stack_frame + 176))
#define local_2b0 (*(void * *)(pf_stack_frame + 192))
#define local_2a8 (*(undefined8 *)(pf_stack_frame + 200))
#define local_298 (*(void * *)(pf_stack_frame + 216))
#define local_290 (*(undefined8 *)(pf_stack_frame + 224))
#define local_280 (*(void * *)(pf_stack_frame + 240))
#define local_278 (*(undefined8 *)(pf_stack_frame + 248))
#define local_268 (*(void * *)(pf_stack_frame + 264))
#define local_260 (*(undefined8 *)(pf_stack_frame + 272))
#define local_250 (*(void * *)(pf_stack_frame + 288))
#define local_248 (*(undefined8 *)(pf_stack_frame + 296))
#define local_238 (*(void * *)(pf_stack_frame + 312))
#define local_230 (*(undefined8 *)(pf_stack_frame + 320))
#define local_220 (*(void * *)(pf_stack_frame + 336))
#define local_218 (*(undefined8 *)(pf_stack_frame + 344))
#define local_208 (*(void * *)(pf_stack_frame + 360))
#define local_200 (*(undefined8 *)(pf_stack_frame + 368))
#define local_1f0 (*(void * *)(pf_stack_frame + 384))
#define local_1e8 (*(undefined8 *)(pf_stack_frame + 392))
#define local_1d8 (*(void * *)(pf_stack_frame + 408))
#define local_1d0 (*(undefined8 *)(pf_stack_frame + 416))
#define local_1c0 (*(void * *)(pf_stack_frame + 432))
#define local_1b8 (*(undefined8 *)(pf_stack_frame + 440))
#define local_1a8 (*(void * *)(pf_stack_frame + 456))
#define local_1a0 (*(undefined8 *)(pf_stack_frame + 464))
#define local_190 (*(void * *)(pf_stack_frame + 480))
#define local_188 (*(undefined8 *)(pf_stack_frame + 488))
#define local_178 (*(void * *)(pf_stack_frame + 504))
#define local_170 (*(undefined8 *)(pf_stack_frame + 512))
#define local_160 (*(void * *)(pf_stack_frame + 528))
#define local_158 (*(undefined8 *)(pf_stack_frame + 536))
#define local_148 (*(long * *)(pf_stack_frame + 552))
#define local_140 (*(long * *)(pf_stack_frame + 560))
#define local_138 (*(long * *)(pf_stack_frame + 568))
#define local_130 (*(long * *)(pf_stack_frame + 576))
#define local_128 (*(long * *)(pf_stack_frame + 584))
#define local_120 (*(long * *)(pf_stack_frame + 592))
#define local_118 (*(long * *)(pf_stack_frame + 600))
#define local_110 (*(long * *)(pf_stack_frame + 608))
#define local_108 (*(long * *)(pf_stack_frame + 616))
#define local_100 (*(long * *)(pf_stack_frame + 624))
#define local_f8 (*(long * *)(pf_stack_frame + 632))
#define local_f0 (*(long * *)(pf_stack_frame + 640))
#define local_e8 (*(long * *)(pf_stack_frame + 648))
#define local_e0 (*(long * *)(pf_stack_frame + 656))
#define local_d8 (*(long * *)(pf_stack_frame + 664))
#define local_d0 (*(long * *)(pf_stack_frame + 672))
#define local_c8 (*(long * *)(pf_stack_frame + 680))
#define local_c0 (*(long * *)(pf_stack_frame + 688))
#define local_b8 (*(long * *)(pf_stack_frame + 696))
#define local_b0 (*(long * *)(pf_stack_frame + 704))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009dc0
 */

void recovered_10009dc0(long param_1)

{
  unsigned char pf_stack_frame[912] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *owner;
  long lVar2;
  long lVar3;

  local_68 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 880) + -8);
  local_58 = (undefined1 *)&local_358;
  lVar2 = *(long *)(param_1 + 0x28);
  local_78 = recovered_10008040;
  local_70 = &DAT_10011080;
  local_60 = &LAB_1000abab;
  recovered_100086e0(&local_98);
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x20 + -8;
    do {
      lVar1 = *(long *)(param_1 + 0x20);
      owner = *(long **)(lVar1 + lVar3);
      if (owner != (long *)0x0) {
        (**(code **)(*owner + 8))(owner);
      }
      *(undefined8 *)(lVar1 + -0x10 + lVar3) = 0;
      recovered_100080f0(*(void **)(lVar1 + -0x18 + lVar3));
      lVar3 = lVar3 + -0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_33 = (ushort)PF_PART1(local_33, 1) << 8;
  local_90 = 0xffffffff;
  local_40 = param_1;
  recovered_1000d760(&local_358,(undefined1 *)&local_33,1);
  local_90 = 1;
  local_148 = recovered_10008090(0x10);
  *local_148 = (long)&PTR_recovered_1000da40_10012010;
  local_90 = 2;
  recovered_1000c8e0(local_40,1,&local_358,&local_148);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 8))(local_148);
  }
  local_350 = 0;
  recovered_100080f0(local_358);
  local_33 = CONCAT11(PF_PART1(local_33, 1),1);
  local_90 = 0xffffffff;
  recovered_1000d760(&local_340,(undefined1 *)&local_33,1);
  local_90 = 3;
  local_140 = recovered_10008090(0x10);
  *local_140 = (long)&PTR_recovered_1000dc30_10012068;
  local_90 = 4;
  recovered_1000c8e0(local_40,2,&local_340,&local_140);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 8))(local_140);
  }
  local_338 = 0;
  recovered_100080f0(local_340);
  local_33 = CONCAT11(PF_PART1(local_33, 1),2);
  local_90 = 0xffffffff;
  recovered_1000d760(&local_328,(undefined1 *)&local_33,1);
  local_90 = 5;
  local_138 = recovered_10008090(0x10);
  *local_138 = (long)&PTR_recovered_1000dcd0_100120b0;
  local_90 = 6;
  recovered_1000c8e0(local_40,3,&local_328,&local_138);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 8))(local_138);
  }
  local_320 = 0;
  recovered_100080f0(local_328);
  local_33 = CONCAT11(PF_PART1(local_33, 1),2);
  local_90 = 0xffffffff;
  recovered_1000d760(&local_310,(undefined1 *)&local_33,1);
  local_90 = 7;
  local_130 = recovered_10008090(0x10);
  *local_130 = (long)&PTR_recovered_1000de00_100120f8;
  local_90 = 8;
  recovered_1000c8e0(local_40,4,&local_310,&local_130);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 8))(local_130);
  }
  local_308 = 0;
  recovered_100080f0(local_310);
  local_33 = local_33 & 0xff00;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_2f8,(undefined1 *)&local_33,1);
  local_90 = 9;
  local_128 = recovered_10008090(0x10);
  *local_128 = (long)&PTR_recovered_1000dee0_10012140;
  local_90 = 10;
  recovered_1000c8e0(local_40,5,&local_2f8,&local_128);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 8))(local_128);
  }
  local_2f0 = 0;
  recovered_100080f0(local_2f8);
  local_33 = CONCAT11(PF_PART1(local_33, 1),1);
  local_90 = 0xffffffff;
  recovered_1000d760(&local_2e0,(undefined1 *)&local_33,1);
  local_90 = 0xb;
  local_120 = recovered_10008090(0x10);
  *local_120 = (long)&PTR_recovered_1000e0c0_10012188;
  local_90 = 0xc;
  recovered_1000c8e0(local_40,6,&local_2e0,&local_120);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 8))(local_120);
  }
  local_2d8 = 0;
  recovered_100080f0(local_2e0);
  local_33 = CONCAT11(PF_PART1(local_33, 1),2);
  local_90 = 0xffffffff;
  recovered_1000d760(&local_2c8,(undefined1 *)&local_33,1);
  local_90 = 0xd;
  local_118 = recovered_10008090(0x10);
  *local_118 = (long)&PTR_recovered_1000e250_100121d0;
  local_90 = 0xe;
  recovered_1000c8e0(local_40,7,&local_2c8,&local_118);
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 8))(local_118);
  }
  local_2c0 = 0;
  recovered_100080f0(local_2c8);
  local_33 = 0x101;
  local_31 = 1;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_2b0,(undefined1 *)&local_33,3);
  local_90 = 0xf;
  local_110 = recovered_10008090(0x10);
  *local_110 = (long)&PTR_recovered_1000e470_10012218;
  local_90 = 0x10;
  recovered_1000c8e0(local_40,8,&local_2b0,&local_110);
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 8))(local_110);
  }
  local_2a8 = 0;
  recovered_100080f0(local_2b0);
  local_33 = 0x101;
  local_31 = 0;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_298,(undefined1 *)&local_33,3);
  local_90 = 0x11;
  local_108 = recovered_10008090(0x10);
  *local_108 = (long)&PTR_recovered_1000e5c0_10012260;
  local_90 = 0x12;
  recovered_1000c8e0(local_40,9,&local_298,&local_108);
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 8))(local_108);
  }
  local_290 = 0;
  recovered_100080f0(local_298);
  local_33 = 0x101;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_280,(undefined1 *)&local_33,2);
  local_90 = 0x13;
  local_100 = recovered_10008090(0x10);
  *local_100 = (long)&PTR_recovered_1000ebe0_100122a8;
  local_90 = 0x14;
  recovered_1000c8e0(local_40,10,&local_280,&local_100);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 8))(local_100);
  }
  local_278 = 0;
  recovered_100080f0(local_280);
  local_33 = CONCAT11(PF_PART1(local_33, 1),1);
  local_90 = 0xffffffff;
  recovered_1000d760(&local_268,(undefined1 *)&local_33,1);
  local_90 = 0x15;
  local_f8 = recovered_10008090(0x10);
  *local_f8 = (long)&PTR_recovered_1000ec70_100122f0;
  local_90 = 0x16;
  recovered_1000c8e0(local_40,0xb,&local_268,&local_f8);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 8))(local_f8);
  }
  local_260 = 0;
  recovered_100080f0(local_268);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_250,(undefined1 *)&local_33,2);
  local_90 = 0x17;
  local_f0 = recovered_10008090(0x10);
  *local_f0 = (long)&PTR_recovered_1000ed40_10012338;
  local_90 = 0x18;
  recovered_1000c8e0(local_40,0xc,&local_250,&local_f0);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 8))(local_f0);
  }
  local_248 = 0;
  recovered_100080f0(local_250);
  local_33 = 2;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_238,(undefined1 *)&local_33,2);
  local_90 = 0x19;
  local_e8 = recovered_10008090(0x10);
  *local_e8 = (long)&PTR_recovered_1000f500_10012380;
  local_90 = 0x1a;
  recovered_1000c8e0(local_40,0xd,&local_238,&local_e8);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 8))(local_e8);
  }
  local_230 = 0;
  recovered_100080f0(local_238);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_220,(undefined1 *)&local_33,2);
  local_90 = 0x1b;
  local_e0 = recovered_10008090(0x10);
  *local_e0 = (long)&PTR_recovered_1000f780_100123c8;
  local_90 = 0x1c;
  recovered_1000c8e0(local_40,0xe,&local_220,&local_e0);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 8))(local_e0);
  }
  local_218 = 0;
  recovered_100080f0(local_220);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_208,(undefined1 *)&local_33,2);
  local_90 = 0x1d;
  local_d8 = recovered_10008090(0x10);
  *local_d8 = (long)&PTR_recovered_1000f870_10012410;
  local_90 = 0x1e;
  recovered_1000c8e0(local_40,0xf,&local_208,&local_d8);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 8))(local_d8);
  }
  local_200 = 0;
  recovered_100080f0(local_208);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_1f0,(undefined1 *)&local_33,2);
  local_90 = 0x1f;
  local_d0 = recovered_10008090(0x10);
  *local_d0 = (long)&PTR_recovered_1000f990_10012458;
  local_90 = 0x20;
  recovered_1000c8e0(local_40,0x10,&local_1f0,&local_d0);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 8))(local_d0);
  }
  local_1e8 = 0;
  recovered_100080f0(local_1f0);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_1d8,(undefined1 *)&local_33,2);
  local_90 = 0x21;
  local_c8 = recovered_10008090(0x10);
  *local_c8 = (long)&PTR_recovered_1000fa80_100124a0;
  local_90 = 0x22;
  recovered_1000c8e0(local_40,0x11,&local_1d8,&local_c8);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 8))(local_c8);
  }
  local_1d0 = 0;
  recovered_100080f0(local_1d8);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_1c0,(undefined1 *)&local_33,2);
  local_90 = 0x23;
  local_c0 = recovered_10008090(0x10);
  *local_c0 = (long)&PTR_recovered_1000fba0_100124e8;
  local_90 = 0x24;
  recovered_1000c8e0(local_40,0x12,&local_1c0,&local_c0);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 8))(local_c0);
  }
  local_1b8 = 0;
  recovered_100080f0(local_1c0);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_1a8,(undefined1 *)&local_33,2);
  local_90 = 0x25;
  local_b8 = recovered_10008090(0x10);
  *local_b8 = (long)&PTR_recovered_1000fc90_10012530;
  local_90 = 0x26;
  recovered_1000c8e0(local_40,0x13,&local_1a8,&local_b8);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 8))(local_b8);
  }
  local_1a0 = 0;
  recovered_100080f0(local_1a8);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_190,(undefined1 *)&local_33,2);
  local_90 = 0x27;
  local_b0 = recovered_10008090(0x10);
  *local_b0 = (long)&PTR_recovered_1000fdc0_10012578;
  local_90 = 0x28;
  recovered_1000c8e0(local_40,0x14,&local_190,&local_b0);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 8))(local_b0);
  }
  local_188 = 0;
  recovered_100080f0(local_190);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_178,(undefined1 *)&local_33,2);
  local_90 = 0x29;
  local_a8 = recovered_10008090(0x10);
  *local_a8 = (long)&PTR_recovered_1000fed0_100125c0;
  local_90 = 0x2a;
  recovered_1000c8e0(local_40,0x15,&local_178,&local_a8);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 8))(local_a8);
  }
  local_170 = 0;
  recovered_100080f0(local_178);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000d760(&local_160,(undefined1 *)&local_33,2);
  local_90 = 0x2b;
  local_a0 = recovered_10008090(0x10);
  *local_a0 = (long)&PTR_recovered_10010020_10012608;
  local_90 = 0x2c;
  recovered_1000c8e0(local_40,0x16,&local_160,&local_a0);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 8))(local_a0);
  }
  local_158 = 0;
  recovered_100080f0(local_160);
  recovered_10008700(&local_98);
  return;
}

#undef DAT_10011080
#undef LAB_1000abab
#undef PTR_recovered_1000da40_10012010
#undef PTR_recovered_1000dc30_10012068
#undef PTR_recovered_1000dcd0_100120b0
#undef PTR_recovered_1000de00_100120f8
#undef PTR_recovered_1000dee0_10012140
#undef PTR_recovered_1000e0c0_10012188
#undef PTR_recovered_1000e250_100121d0
#undef PTR_recovered_1000e470_10012218
#undef PTR_recovered_1000e5c0_10012260
#undef PTR_recovered_1000ebe0_100122a8
#undef PTR_recovered_1000ec70_100122f0
#undef PTR_recovered_1000ed40_10012338
#undef PTR_recovered_1000f500_10012380
#undef PTR_recovered_1000f780_100123c8
#undef PTR_recovered_1000f870_10012410
#undef PTR_recovered_1000f990_10012458
#undef PTR_recovered_1000fa80_100124a0
#undef PTR_recovered_1000fba0_100124e8
#undef PTR_recovered_1000fc90_10012530
#undef PTR_recovered_1000fdc0_10012578
#undef PTR_recovered_1000fed0_100125c0
#undef PTR_recovered_10010020_10012608
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_40
#undef local_33
#undef local_31
#undef local_358
#undef local_350
#undef local_340
#undef local_338
#undef local_328
#undef local_320
#undef local_310
#undef local_308
#undef local_2f8
#undef local_2f0
#undef local_2e0
#undef local_2d8
#undef local_2c8
#undef local_2c0
#undef local_2b0
#undef local_2a8
#undef local_298
#undef local_290
#undef local_280
#undef local_278
#undef local_268
#undef local_260
#undef local_250
#undef local_248
#undef local_238
#undef local_230
#undef local_220
#undef local_218
#undef local_208
#undef local_200
#undef local_1f0
#undef local_1e8
#undef local_1d8
#undef local_1d0
#undef local_1c0
#undef local_1b8
#undef local_1a8
#undef local_1a0
#undef local_190
#undef local_188
#undef local_178
#undef local_170
#undef local_160
#undef local_158
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b200
 */

void recovered_1000b200(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  bool bVar2;

  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  piVar1 = (int *)*param_1;
  bVar2 = true;
  if (((piVar1 != (int *)0x0) && (*(long *)(piVar1 + 2) != 0)) && (0 < *piVar1)) {
    bVar2 = piVar1[1] < 1;
  }
  *(bool *)(param_1 + 9) = bVar2;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b250
 */

void recovered_1000b250(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *owner;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x20 + -8;
    do {
      lVar1 = *param_1;
      owner = *(long **)(lVar1 + lVar3);
      if (owner != (long *)0x0) {
        (**(code **)(*owner + 8))(owner);
      }
      *(undefined8 *)(lVar1 + -0x10 + lVar3) = 0;
      recovered_100080f0(*(void **)(lVar1 + -0x18 + lVar3));
      lVar3 = lVar3 + -0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[1] = 0;
  recovered_100080f0((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b2d0
 */

void recovered_1000b2d0(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x28 + -0x20;
    do {
      recovered_100080f0(*(void **)(*param_1 + lVar2));
      lVar2 = lVar2 + -0x28;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[1] = 0;
  recovered_100080f0((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b330
 */

void recovered_1000b330(undefined8 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10009c50(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b340
 */

void recovered_1000b340(undefined8 *param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  *param_1 = param_2;
  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  bVar1 = true;
  if (((param_2 != (int *)0x0) && (*(long *)(param_2 + 2) != 0)) && (0 < *param_2)) {
    bVar1 = param_2[1] < 1;
  }
  *(bool *)(param_1 + 9) = bVar1;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b390
 */

undefined8 recovered_1000b390(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *param_1;
}


#undef DAT_100110dc
#define DAT_100110dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd00U)))
#undef LAB_1000c2c5
#define LAB_1000c2c5 (*(uint8_t *)(0x1000c2c5U))
#define uStack_b0 (*(ulong *)(pf_stack_frame + 224))
#define lStack_90 (*(long *)(pf_stack_frame + 256))
#define local_178 (*(byte * *)(pf_stack_frame + 24))
#define local_170 (*(byte * *)(pf_stack_frame + 32))
#define local_168 (*(long * *)(pf_stack_frame + 40))
#define local_160 (*(undefined8 * *)(pf_stack_frame + 48))
#define local_158 (*(undefined8 *)(pf_stack_frame + 56))
#define local_150 (*(undefined4 *)(pf_stack_frame + 64))
#define local_138 (*(code * *)(pf_stack_frame + 88))
#define local_130 (*(undefined * *)(pf_stack_frame + 96))
#define local_128 (*(undefined1 * *)(pf_stack_frame + 104))
#define local_120 (*(undefined1 * *)(pf_stack_frame + 112))
#define local_118 (*(undefined1 * *)(pf_stack_frame + 120))
#define local_fc (*(uint *)(pf_stack_frame + 148))
#define local_f8 (*(undefined1 * *)(pf_stack_frame + 152))
#define local_f0 (*(undefined1 * *)(pf_stack_frame + 160))
#define local_e8 (*(undefined1 * *)(pf_stack_frame + 168))
#define local_e0 (*(undefined1 * *)(pf_stack_frame + 176))
#define local_d8 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_d0 (*(uint (*)[52])(pf_stack_frame + 192))
#define local_c8 (*(undefined1 * *)(pf_stack_frame + 200))
#define local_b8 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_a8 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_a0 (*(undefined1 *)(pf_stack_frame + 240))
#define local_98 (*(void * *)(pf_stack_frame + 248))
#define local_88 (*(undefined8 *)(pf_stack_frame + 264))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 272))
#define local_78 (*(undefined8 * *)(pf_stack_frame + 280))
#define local_70 (*(uint * *)(pf_stack_frame + 288))
#define local_68 (*(ulong *)(pf_stack_frame + 296))
#define local_5c (*(uint *)(pf_stack_frame + 308))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 312))
#define local_50 (*(uint *)(pf_stack_frame + 320))
#define local_4c (*(uint *)(pf_stack_frame + 324))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 328))
#define local_40 (*(undefined1 * *)(pf_stack_frame + 336))
#define local_34 (*(undefined4 *)(pf_stack_frame + 348))
#define puStack_c0 (*(undefined1 * *)(pf_stack_frame + 208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3a0
 */

byte recovered_1000b3a0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[432] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long *owner;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  void **ppvVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  byte bVar23;
  uint uVar24;
  undefined1 uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  undefined1 *puVar30;
  long lVar31;
  uint uVar32;
  long lVar33;

  local_128 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 400) + -8);
  local_118 = (undefined1 *)&local_178;
  cVar1 = *(char *)(param_1 + 9);
  local_138 = recovered_10008040;
  local_130 = &DAT_100110dc;
  local_120 = &LAB_1000c2c5;
  recovered_100086e0(&local_158);
  if (cVar1 == '\0') {
    puVar17 = (uint *)*param_1;
    if (((puVar17 == (uint *)0x0) || (lVar31 = *(long *)(puVar17 + 2), lVar31 == 0)) ||
       (uVar24 = *puVar17, (int)uVar24 < 1)) {
LAB_1000b4f0:
      *(undefined1 *)(param_1 + 9) = 1;
      goto LAB_1000b4f5;
    }
    uVar14 = *(uint *)(param_1 + 7);
    uVar32 = *(uint *)((long)param_1 + 0x3c);
    uVar4 = puVar17[1];
    if ((uVar24 < uVar14 || (((int)uVar32 < 1 || (int)uVar14 < 1) || (int)uVar4 < 1)) ||
        uVar4 < uVar32) goto LAB_1000b4f0;
    uVar19 = (ulong)(((uVar32 - 1) * uVar24 + uVar14) - 1);
    uVar11 = (uint)*(byte *)(lVar31 + 2 + uVar19 * 4) |
             (uint)*(byte *)(lVar31 + 1 + uVar19 * 4) << 8 |
             (uint)*(byte *)(lVar31 + uVar19 * 4) << 0x10;
    if (uVar11 == 0) {
      bVar23 = *(byte *)(param_1 + 8);
      if (bVar23 < 4) {
        bVar23 = (byte)(0x30201 >> ((bVar23 & 3) << 3));
        *(byte *)(param_1 + 8) = bVar23;
      }
      local_d0[0] = uVar14;
      local_98 = (void *)CONCAT44(PF_PART4(local_98, 4),uVar32);
      if (bVar23 < 4) {
        iVar12 = 1;
        ppvVar15 = (void **)local_d0;
        iVar13 = 1;
        switch((uintptr_t)(bVar23)) {
        case 2:
          iVar12 = -1;
          break;
        case 3:
          iVar13 = -1;
        case 1:
          iVar12 = iVar13;
          ppvVar15 = &local_98;
        }
        *(int *)ppvVar15 = *(int *)ppvVar15 + iVar12;
LAB_1000b640:
        uVar32 = (uint)local_98;
      }
    }
    else {
      if (uVar11 != 0xffffff) {
        uVar5 = *(uint *)((long)param_1 + 0x44);
        if (*(char *)((long)param_1 + 0x49) == '\x01') {
          uVar29 = uVar11 - uVar5;
          if (uVar11 < uVar5) {
            uVar29 = -(uVar11 - uVar5);
          }
          *(uint *)((long)param_1 + 0x44) = uVar11;
          *(undefined1 *)((long)param_1 + 0x49) = 0;
        }
        else {
          *(uint *)((long)param_1 + 0x44) = uVar11;
          *(undefined1 *)((long)param_1 + 0x49) = 0;
          uVar29 = uVar11 - uVar5;
          if (uVar11 < uVar5) {
            uVar29 = -(uVar11 - uVar5);
          }
          if (uVar11 - uVar5 == 0) {
            local_d0[0] = uVar14;
            local_98 = (void *)CONCAT44(PF_PART4(local_98, 4),uVar32);
            if (*(byte *)(param_1 + 8) < 4) {
              iVar12 = 1;
              ppvVar15 = (void **)local_d0;
              iVar13 = 1;
              switch((uintptr_t)(*(byte *)(param_1 + 8))) {
              case 1:
                goto switchD_1000b4e1_caseD_1;
              case 2:
                goto switchD_1000b4e1_caseD_2;
              case 3:
                goto switchD_1000b4e1_caseD_3;
              }
              goto switchD_1000b4e1_caseD_0;
            }
            goto LAB_1000b64c;
          }
        }
        local_5c = uVar14;
        local_4c = uVar32;
        if (*(byte *)(param_1 + 8) < 4) {
          iVar12 = 1;
          puVar17 = &local_5c;
          iVar13 = 1;
          switch((uintptr_t)(*(byte *)(param_1 + 8))) {
          case 2:
            iVar12 = -1;
            break;
          case 3:
            iVar13 = -1;
          case 1:
            iVar12 = iVar13;
            puVar17 = &local_4c;
          }
          *puVar17 = *puVar17 + iVar12;
        }
        local_98 = (void *)0x0;
        lStack_90 = 0;
        local_88 = 0;
        if (((ulong)uVar29 < (ulong)param_1[5]) && (param_1[4] != 0)) {
          local_160 = (undefined8 *)(param_1[4] + (ulong)uVar29 * 0x20);
          local_150 = 1;
          local_78 = param_1;
          recovered_1000c430((long *)&local_98,local_160[1]);
          param_1 = local_78;
          if (local_160[1] != 0) {
            pbVar22 = (byte *)*local_160;
            local_170 = pbVar22 + local_160[1];
            local_168 = local_78 + 1;
            do {
              local_fc = (uint)*pbVar22;
              puVar17 = (uint *)*param_1;
              puVar16 = (uint *)(ulong)local_5c;
              uVar19 = (ulong)local_4c;
              uVar20 = (ulong)*(byte *)(param_1 + 8);
              local_d0[0] = local_5c;
              local_50 = local_4c;
              if ((puVar17 == (uint *)0x0) || (lVar31 = *(long *)(puVar17 + 2), lVar31 == 0)) {
                puVar10 = (undefined1 *)0x0;
LAB_1000c259:
                *(int *)(param_1 + 7) = (int)puVar16;
                *(int *)((long)param_1 + 0x3c) = (int)uVar19;
                *(undefined1 *)(param_1 + 9) = 1;
                recovered_100080f0(puVar10);
                goto LAB_1000c26b;
              }
              bVar9 = false;
              puVar30 = (undefined1 *)0x0;
              local_40 = (undefined1 *)0x0;
              puVar28 = (undefined1 *)0x0;
              puVar10 = (undefined1 *)0x0;
              local_e8 = (undefined1 *)CONCAT44(PF_PART4(local_e8, 4),(uint)*(byte *)(param_1 + 8));
              local_70 = puVar17;
              local_178 = pbVar22;
              while( true ) {
                local_80 = puVar10;
                uVar24 = *puVar17;
                if ((int)uVar24 < 1) goto LAB_1000c259;
                uVar14 = (uint)puVar16;
                if ((((uVar24 < uVar14) || (uVar32 = (uint)uVar19, (int)uVar32 < 1)) ||
                    ((int)uVar14 < 1)) || (((int)puVar17[1] < 1 || (puVar17[1] < uVar32))))
                goto LAB_1000c259;
                uVar18 = (ulong)((uVar24 * (uVar32 - 1) + uVar14) - 1);
                bVar23 = *(byte *)(lVar31 + uVar18 * 4);
                local_58 = (undefined1 *)CONCAT44(PF_PART4(local_58, 4),(uint)bVar23);
                bVar2 = *(byte *)(lVar31 + 1 + uVar18 * 4);
                uVar24 = (uint)bVar2;
                bVar3 = *(byte *)(lVar31 + 2 + uVar18 * 4);
                uVar14 = (uint)bVar3;
                if (((uint)bVar2 << 8 | (uint)bVar23 << 0x10 | (uint)bVar3) == 0xffffff) break;
                if (bVar9) {
                  bVar9 = true;
                }
                else {
                  puVar10 = puVar28;
                  if (bVar23 != 0xff) {
                    if (puVar30 == local_40) {
                      puVar26 = (undefined1 *)((long)(uintptr_t)puVar30 * 2);
                      if (puVar30 == (undefined1 *)0x0) {
                        puVar26 = (undefined1 *)0x4;
                      }
                      if (puVar26 <= puVar30) goto LAB_1000b8d2;
                      local_68 = CONCAT44(PF_PART4(local_68, 4),(uint)bVar2);
                      local_150 = 2;
                      local_f8 = puVar28;
                      local_f0 = puVar28;
                      local_e0 = puVar30;
                      local_d8 = puVar26;
                      local_34 = (uint)bVar3;
                      puVar10 = recovered_10008090((long)puVar26);
                      puVar28 = local_d8;
                      uVar24 = (uint)local_68;
                      if (local_e0 != (undefined1 *)0x0) {
                        if (local_e0 < (undefined1 *)0x4) {
                          puVar30 = (undefined1 *)0x0;
                        }
                        else {
                          puVar30 = (undefined1 *)0x0;
                          if (0x1f < (ulong)((long)puVar10 - (long)local_f0)) {
                            if (local_e0 < (undefined1 *)0x20) {
                              puVar26 = (undefined1 *)0x0;
                            }
                            else {
                              puVar30 = (undefined1 *)((ulong)local_e0 & 0xffffffffffffffe0);
                              puVar26 = (undefined1 *)0x0;
                              do {
                                uVar6 = *(undefined8 *)((long)(local_f0 + (long)puVar26) + 8);
                                uVar7 = *(undefined8 *)(local_f0 + 0x10 + (long)puVar26);
                                uVar8 = *(undefined8 *)((long)(local_f0 + 0x10 + (long)puVar26) + 8)
                                ;
                                *(undefined8 *)(puVar10 + (long)puVar26) =
                                     *(undefined8 *)(local_f0 + (long)puVar26);
                                *(undefined8 *)((long)(puVar10 + (long)puVar26) + 8) = uVar6;
                                *(undefined8 *)(puVar10 + 0x10 + (long)puVar26) = uVar7;
                                *(undefined8 *)((long)(puVar10 + 0x10 + (long)puVar26) + 8) = uVar8;
                                puVar26 = puVar26 + 0x20;
                              } while (puVar30 != puVar26);
                              if (local_e0 == puVar30) goto LAB_1000b985;
                              puVar26 = puVar30;
                              if (((ulong)local_e0 & 0x1c) == 0) goto LAB_1000b92f;
                            }
                            puVar30 = (undefined1 *)((ulong)local_e0 & 0xfffffffffffffffc);
                            do {
                              *(undefined4 *)(puVar10 + (long)puVar26) =
                                   *(undefined4 *)(local_f0 + (long)puVar26);
                              puVar26 = puVar26 + 4;
                            } while (puVar30 != puVar26);
                            if (local_e0 == puVar30) goto LAB_1000b985;
                          }
                        }
LAB_1000b92f:
                        uVar19 = (ulong)local_e0 & 3;
                        puVar26 = puVar30;
                        if (uVar19 != 0) {
                          do {
                            puVar10[(long)puVar26] = local_f0[(long)puVar26];
                            puVar26 = puVar26 + 1;
                            uVar19 = uVar19 - 1;
                          } while (uVar19 != 0);
                        }
                        if ((ulong)((long)puVar30 - (long)local_e0) < 0xfffffffffffffffd) {
                          do {
                            puVar10[(long)puVar26] = local_f0[(long)puVar26];
                            (puVar10 + 1)[(long)puVar26] = (local_f0 + 1)[(long)puVar26];
                            (puVar10 + 2)[(long)puVar26] = (local_f0 + 2)[(long)puVar26];
                            (puVar10 + 3)[(long)puVar26] = (local_f0 + 3)[(long)puVar26];
                            puVar26 = puVar26 + 4;
                          } while (local_e0 != puVar26);
                        }
                      }
LAB_1000b985:
                      recovered_100080f0(local_f0);
                      uVar20 = (ulong)local_e8 & 0xffffffff;
                      bVar23 = (byte)local_58;
                      puVar26 = local_e0;
                      puVar17 = local_70;
                      param_1 = local_78;
                      uVar14 = local_34;
                    }
                    else {
LAB_1000b8d2:
                      puVar26 = puVar30;
                      puVar28 = local_40;
                    }
                    puVar10[(long)puVar26] = bVar23;
                    puVar30 = puVar26 + 1;
                    if ((char)uVar24 == -1) {
                      local_40 = puVar28;
                      bVar9 = true;
                      puVar28 = puVar10;
                      goto LAB_1000bcd5;
                    }
                    if (puVar30 == puVar28) {
                      local_40 = (undefined1 *)((long)(uintptr_t)puVar28 * 2);
                      if (puVar28 == (undefined1 *)0x0) {
                        local_40 = (undefined1 *)0x4;
                      }
                      if (local_40 <= puVar28) goto LAB_1000ba4b;
                      local_68 = CONCAT44(PF_PART4(local_68, 4),uVar24);
                      local_150 = 3;
                      local_f8 = puVar10;
                      local_d8 = puVar28;
                      local_58 = puVar10;
                      local_34 = uVar14;
                      puVar10 = recovered_10008090((long)local_40);
                      uVar19 = local_68;
                      puVar30 = local_d8;
                      if (local_d8 != (undefined1 *)0x0) {
                        if (local_d8 < (undefined1 *)0x4) {
                          puVar28 = (undefined1 *)0x0;
                        }
                        else {
                          puVar28 = (undefined1 *)0x0;
                          if (0x1f < (ulong)((long)puVar10 - (long)local_58)) {
                            if (local_d8 < (undefined1 *)0x20) {
                              puVar26 = (undefined1 *)0x0;
                            }
                            else {
                              puVar28 = (undefined1 *)((ulong)local_d8 & 0xffffffffffffffe0);
                              puVar26 = (undefined1 *)0x0;
                              do {
                                uVar6 = *(undefined8 *)((long)(local_58 + (long)puVar26) + 8);
                                uVar7 = *(undefined8 *)(local_58 + 0x10 + (long)puVar26);
                                uVar8 = *(undefined8 *)((long)(local_58 + 0x10 + (long)puVar26) + 8)
                                ;
                                *(undefined8 *)(puVar10 + (long)puVar26) =
                                     *(undefined8 *)(local_58 + (long)puVar26);
                                *(undefined8 *)((long)(puVar10 + (long)puVar26) + 8) = uVar6;
                                *(undefined8 *)(puVar10 + 0x10 + (long)puVar26) = uVar7;
                                *(undefined8 *)((long)(puVar10 + 0x10 + (long)puVar26) + 8) = uVar8;
                                puVar26 = puVar26 + 0x20;
                              } while (puVar28 != puVar26);
                              if (local_d8 == puVar28) goto LAB_1000bb1d;
                              puVar26 = puVar28;
                              if (((ulong)local_d8 & 0x1c) == 0) goto LAB_1000bac2;
                            }
                            puVar28 = (undefined1 *)((ulong)local_d8 & 0xfffffffffffffffc);
                            do {
                              *(undefined4 *)(puVar10 + (long)puVar26) =
                                   *(undefined4 *)(local_58 + (long)puVar26);
                              puVar26 = puVar26 + 4;
                            } while (puVar28 != puVar26);
                            if (local_d8 == puVar28) goto LAB_1000bb1d;
                          }
                        }
LAB_1000bac2:
                        uVar20 = (ulong)local_d8 & 3;
                        puVar26 = puVar28;
                        if (uVar20 != 0) {
                          do {
                            puVar10[(long)puVar26] = local_58[(long)puVar26];
                            puVar26 = puVar26 + 1;
                            uVar20 = uVar20 - 1;
                          } while (uVar20 != 0);
                        }
                        if ((ulong)((long)puVar28 - (long)local_d8) < 0xfffffffffffffffd) {
                          do {
                            puVar10[(long)puVar26] = local_58[(long)puVar26];
                            (puVar10 + 1)[(long)puVar26] = (local_58 + 1)[(long)puVar26];
                            (puVar10 + 2)[(long)puVar26] = (local_58 + 2)[(long)puVar26];
                            (puVar10 + 3)[(long)puVar26] = (local_58 + 3)[(long)puVar26];
                            puVar26 = puVar26 + 4;
                          } while (local_d8 != puVar26);
                        }
                      }
LAB_1000bb1d:
                      recovered_100080f0(local_58);
                      puVar10[(long)puVar30] = (char)uVar19;
                      puVar30 = puVar30 + 1;
                      uVar20 = (ulong)local_e8 & 0xffffffff;
                      puVar28 = local_40;
                      puVar17 = local_70;
                      param_1 = local_78;
                      uVar14 = local_34;
                    }
                    else {
LAB_1000ba4b:
                      (puVar10 + 1)[(long)puVar26] = (char)uVar24;
                      puVar30 = puVar26 + 2;
                    }
                    local_40 = puVar28;
                    if ((char)uVar14 != -1) {
                      if (puVar30 == puVar28) {
                        puVar26 = (undefined1 *)((long)(uintptr_t)puVar28 * 2);
                        if (puVar28 == (undefined1 *)0x0) {
                          puVar26 = (undefined1 *)0x4;
                        }
                        if (puVar26 <= puVar28) goto LAB_1000bbe6;
                        local_150 = 4;
                        local_f8 = puVar10;
                        local_f0 = puVar10;
                        local_58 = puVar26;
                        local_34 = uVar14;
                        puVar10 = recovered_10008090((long)puVar26);
                        param_1 = local_78;
                        if (local_40 != (undefined1 *)0x0) {
                          if (local_40 < (undefined1 *)0x4) {
                            puVar30 = (undefined1 *)0x0;
                          }
                          else {
                            puVar30 = (undefined1 *)0x0;
                            if (0x1f < (ulong)((long)puVar10 - (long)local_f0)) {
                              if (local_40 < (undefined1 *)0x20) {
                                puVar28 = (undefined1 *)0x0;
                              }
                              else {
                                puVar30 = (undefined1 *)((ulong)local_40 & 0xffffffffffffffe0);
                                puVar28 = (undefined1 *)0x0;
                                do {
                                  uVar6 = *(undefined8 *)((long)(local_f0 + (long)puVar28) + 8);
                                  uVar7 = *(undefined8 *)(local_f0 + 0x10 + (long)puVar28);
                                  uVar8 = *(undefined8 *)
                                           ((long)(local_f0 + 0x10 + (long)puVar28) + 8);
                                  *(undefined8 *)(puVar10 + (long)puVar28) =
                                       *(undefined8 *)(local_f0 + (long)puVar28);
                                  *(undefined8 *)((long)(puVar10 + (long)puVar28) + 8) = uVar6;
                                  *(undefined8 *)(puVar10 + 0x10 + (long)puVar28) = uVar7;
                                  *(undefined8 *)((long)(puVar10 + 0x10 + (long)puVar28) + 8) =
                                       uVar8;
                                  puVar28 = puVar28 + 0x20;
                                } while (puVar30 != puVar28);
                                if (local_40 == puVar30) goto LAB_1000bc9c;
                                puVar28 = puVar30;
                                if (((ulong)local_40 & 0x1c) == 0) goto LAB_1000bc47;
                              }
                              puVar30 = (undefined1 *)((ulong)local_40 & 0xfffffffffffffffc);
                              do {
                                *(undefined4 *)(puVar10 + (long)puVar28) =
                                     *(undefined4 *)(local_f0 + (long)puVar28);
                                puVar28 = puVar28 + 4;
                              } while (puVar30 != puVar28);
                              if (local_40 == puVar30) goto LAB_1000bc9c;
                            }
                          }
LAB_1000bc47:
                          uVar19 = (ulong)local_40 & 3;
                          puVar28 = puVar30;
                          if (uVar19 != 0) {
                            do {
                              puVar10[(long)puVar28] = local_f0[(long)puVar28];
                              puVar28 = puVar28 + 1;
                              uVar19 = uVar19 - 1;
                            } while (uVar19 != 0);
                          }
                          if ((ulong)((long)puVar30 - (long)local_40) < 0xfffffffffffffffd) {
                            do {
                              puVar10[(long)puVar28] = local_f0[(long)puVar28];
                              (puVar10 + 1)[(long)puVar28] = (local_f0 + 1)[(long)puVar28];
                              (puVar10 + 2)[(long)puVar28] = (local_f0 + 2)[(long)puVar28];
                              (puVar10 + 3)[(long)puVar28] = (local_f0 + 3)[(long)puVar28];
                              puVar28 = puVar28 + 4;
                            } while (local_40 != puVar28);
                          }
                        }
LAB_1000bc9c:
                        recovered_100080f0(local_f0);
                        puVar26 = puVar10 + (long)local_40;
                        uVar20 = (ulong)local_e8 & 0xffffffff;
                        puVar28 = local_58;
                        puVar30 = local_40;
                        puVar17 = local_70;
                        uVar14 = local_34;
                      }
                      else {
LAB_1000bbe6:
                        puVar26 = puVar10 + (long)puVar30;
                      }
                      *puVar26 = (char)uVar14;
                      puVar30 = puVar30 + 1;
                      bVar9 = false;
                      local_40 = puVar28;
                      puVar28 = puVar10;
                      goto LAB_1000bcd5;
                    }
                  }
                  bVar9 = true;
                  puVar28 = puVar10;
                }
LAB_1000bcd5:
                iVar13 = 1;
                switch((uintptr_t)(uVar20)) {
                case 2:
                  iVar13 = -1;
                case 0:
                  ppvVar15 = (void **)local_d0;
                  break;
                case 3:
                  iVar13 = -1;
                case 1:
                  ppvVar15 = (void **)&local_50;
                  break;
                default:
                  goto switchD_1000bcee_default;
                }
                *(uint *)ppvVar15 = *(uint *)ppvVar15 + iVar13;
switchD_1000bcee_default:
                puVar16 = (uint *)(ulong)local_d0[0];
                uVar19 = (ulong)local_50;
                lVar31 = *(long *)(puVar17 + 2);
                if (lVar31 == 0) goto LAB_1000c259;
              }
              iVar12 = 1;
              iVar13 = 1;
              switch((uintptr_t)(uVar20)) {
              case 0:
                ppvVar15 = (void **)local_d0;
                break;
              case 2:
                iVar12 = -1;
                ppvVar15 = (void **)local_d0;
                break;
              case 3:
                iVar13 = -1;
              case 1:
                iVar12 = iVar13;
                ppvVar15 = (void **)&local_50;
                break;
              default:
                goto switchD_1000bd20_default;
              }
              *(int *)ppvVar15 = *(int *)ppvVar15 + iVar12;
              puVar16 = (uint *)(ulong)local_d0[0];
              uVar19 = (ulong)local_50;
switchD_1000bd20_default:
              if (local_fc == 2) {
                if (puVar30 == (undefined1 *)0x0) {
                  uVar20 = 0;
LAB_1000bfec:
                  local_a8 = (undefined1 *)(uVar20 + 1);
                }
                else {
                  puVar10 = (undefined1 *)0x0;
                  uVar20 = 0;
                  do {
                    local_a8 = (undefined1 *)0xffffffffffffffff;
                    if (0xffffffffffffff < uVar20) goto LAB_1000bff2;
                    uVar20 = uVar20 << 8 | (ulong)(byte)local_80[(long)puVar10];
                    puVar10 = puVar10 + 1;
                  } while (puVar30 != puVar10);
                  if (uVar20 < 0xfffffffffffffffe) goto LAB_1000bfec;
                }
LAB_1000bff2:
                local_a0 = puVar30 == (undefined1 *)0x0;
                local_c8 = (undefined1 *)0x0;
                puStack_c0 = (undefined1 *)0x0;
                local_b8 = (undefined1 *)0x0;
                uStack_b0 = 0;
                local_d0[0] = CONCAT31(PF_PART3(local_d0[0], 1),2);
                local_150 = 9;
                local_70 = puVar16;
                local_68 = uVar19;
                local_58 = local_a8;
                recovered_1000d620((long *)&local_98,(undefined1 *)local_d0);
                if ((undefined1 *)local_78[2] < local_58) {
                  local_150 = 10;
                  recovered_1000cae0(local_168,(ulong)local_58);
                }
LAB_1000c15f:
                puVar10 = local_c8;
LAB_1000c166:
                recovered_100080f0(puVar10);
                puVar16 = local_70;
                param_1 = local_78;
                uVar19 = local_68;
              }
              else {
                if (local_fc == 1) {
                  if (puVar30 == (undefined1 *)0x0) {
                    uStack_b0 = 0;
                  }
                  else {
                    puVar10 = (undefined1 *)0x0;
                    uStack_b0 = 0;
                    do {
                      if (0xffffffffffffff < uStack_b0) {
                        uStack_b0 = 0xffffffffffffffff;
                        break;
                      }
                      uStack_b0 = uStack_b0 << 8 | (ulong)(byte)local_80[(long)puVar10];
                      puVar10 = puVar10 + 1;
                    } while (puVar30 != puVar10);
                  }
                  if (0x7ffffffffffffffe < uStack_b0) {
                    uStack_b0 = 0x7fffffffffffffff;
                  }
                  local_a0 = puVar30 == (undefined1 *)0x0;
                  local_c8 = (undefined1 *)0x0;
                  puStack_c0 = (undefined1 *)0x0;
                  local_b8 = (undefined1 *)0x0;
                  local_a8 = (undefined1 *)0x0;
                  local_d0[0] = CONCAT31(PF_PART3(local_d0[0], 1),1);
                  local_150 = 8;
                  local_70 = puVar16;
                  local_68 = uVar19;
                  recovered_1000d620((long *)&local_98,(undefined1 *)local_d0);
                  goto LAB_1000c15f;
                }
                if (local_fc == 0) {
                  if (puVar30 == (undefined1 *)0x0) {
                    puVar10 = (undefined1 *)0x0;
                    puVar28 = (undefined1 *)0x0;
                    local_e0 = puVar30;
                    local_70 = puVar16;
                    local_68 = uVar19;
                  }
                  else {
                    local_150 = 5;
                    local_e0 = puVar30;
                    local_70 = puVar16;
                    local_68 = uVar19;
                    puVar28 = recovered_10008090((long)(puVar30 + 1));
                    *puVar28 = 0;
                    recovered_100080f0((void *)0x0);
                    puVar26 = local_80 + (long)local_e0;
                    puVar30 = (undefined1 *)0x0;
                    puVar21 = local_80;
                    puVar10 = local_e0;
                    local_d8 = puVar26;
                    do {
                      uVar25 = *puVar21;
                      local_48 = puVar28;
                      if (puVar30 == puVar10) {
                        puVar27 = (undefined1 *)((long)(uintptr_t)puVar30 * 2);
                        if (puVar30 == (undefined1 *)0x0) {
                          puVar27 = (undefined1 *)0x10;
                        }
                        if (puVar30 < puVar27) {
                          local_34 = CONCAT31(PF_PART3(local_34, 1),uVar25);
                          local_150 = 7;
                          local_e8 = puVar27;
                          local_58 = puVar21;
                          local_40 = puVar30;
                          puVar28 = recovered_10008090((ulong)puVar27 | 1);
                          puVar30 = local_40;
                          *puVar28 = 0;
                          if (local_40 != (undefined1 *)0x0) {
                            if (local_40 < (undefined1 *)0x4) {
                              puVar10 = (undefined1 *)0x0;
                            }
                            else {
                              puVar10 = (undefined1 *)0x0;
                              if (0x1f < (ulong)((long)puVar28 - (long)local_48)) {
                                if (local_40 < (undefined1 *)0x20) {
                                  puVar26 = (undefined1 *)0x0;
                                }
                                else {
                                  puVar10 = (undefined1 *)((ulong)local_40 & 0xffffffffffffffe0);
                                  puVar26 = (undefined1 *)0x0;
                                  do {
                                    uVar6 = *(undefined8 *)((long)(local_48 + (long)puVar26) + 8);
                                    uVar7 = *(undefined8 *)(local_48 + 0x10 + (long)puVar26);
                                    uVar8 = *(undefined8 *)
                                             ((long)(local_48 + 0x10 + (long)puVar26) + 8);
                                    *(undefined8 *)(puVar28 + (long)puVar26) =
                                         *(undefined8 *)(local_48 + (long)puVar26);
                                    *(undefined8 *)((long)(puVar28 + (long)puVar26) + 8) = uVar6;
                                    *(undefined8 *)(puVar28 + 0x10 + (long)puVar26) = uVar7;
                                    *(undefined8 *)((long)(puVar28 + 0x10 + (long)puVar26) + 8) =
                                         uVar8;
                                    puVar26 = puVar26 + 0x20;
                                  } while (puVar10 != puVar26);
                                  if (local_40 == puVar10) goto LAB_1000bdc4;
                                  puVar26 = puVar10;
                                  if (((ulong)local_40 & 0x1c) == 0) goto LAB_1000beea;
                                }
                                puVar10 = (undefined1 *)((ulong)local_40 & 0xfffffffffffffffc);
                                do {
                                  *(undefined4 *)(puVar28 + (long)puVar26) =
                                       *(undefined4 *)(local_48 + (long)puVar26);
                                  puVar26 = puVar26 + 4;
                                } while (puVar10 != puVar26);
                                if (local_40 == puVar10) goto LAB_1000bdc4;
                              }
                            }
LAB_1000beea:
                            puVar26 = puVar10;
                            if (((ulong)local_40 & 3) != 0) {
                              uVar19 = (ulong)((uint)local_40 & 3);
                              do {
                                puVar28[(long)puVar26] = local_48[(long)puVar26];
                                puVar26 = puVar26 + 1;
                                uVar19 = uVar19 - 1;
                              } while (uVar19 != 0);
                            }
                            if ((ulong)((long)puVar10 - (long)local_40) < 0xfffffffffffffffd) {
                              do {
                                puVar28[(long)puVar26] = local_48[(long)puVar26];
                                (puVar28 + 1)[(long)puVar26] = (local_48 + 1)[(long)puVar26];
                                (puVar28 + 2)[(long)puVar26] = (local_48 + 2)[(long)puVar26];
                                (puVar28 + 3)[(long)puVar26] = (local_48 + 3)[(long)puVar26];
                                puVar26 = puVar26 + 4;
                              } while (local_40 != puVar26);
                            }
                          }
LAB_1000bdc4:
                          puVar28[(long)local_40] = 0;
                          recovered_100080f0(local_48);
                          puVar26 = local_d8;
                          puVar21 = local_58;
                          puVar10 = local_e8;
                          uVar25 = (undefined1)local_34;
                        }
                      }
                      puVar28[(long)puVar30] = uVar25;
                      (puVar28 + 1)[(long)puVar30] = 0;
                      puVar30 = puVar30 + 1;
                      puVar21 = puVar21 + 1;
                    } while (puVar21 != puVar26);
                  }
                  local_c8 = (undefined1 *)0x0;
                  puStack_c0 = (undefined1 *)0x0;
                  local_b8 = (undefined1 *)0x0;
                  uStack_b0 = 0;
                  local_a8 = (undefined1 *)0x0;
                  local_a0 = 0;
                  local_d0[0] = local_d0[0] & 0xffffff00;
                  recovered_100080f0((void *)0x0);
                  local_a0 = local_e0 == (undefined1 *)0x0;
                  puStack_c0 = local_e0;
                  local_150 = 6;
                  local_c8 = puVar28;
                  local_b8 = puVar10;
                  recovered_1000d620((long *)&local_98,(undefined1 *)local_d0);
                  recovered_100080f0(local_c8);
                  puVar10 = (undefined1 *)0x0;
                  goto LAB_1000c166;
                }
              }
              local_5c = (uint)puVar16;
              local_4c = (uint)uVar19;
              recovered_100080f0(local_80);
              pbVar22 = local_178 + 1;
            } while (pbVar22 != local_170);
          }
          *(uint *)(param_1 + 7) = local_5c;
          *(uint *)((long)param_1 + 0x3c) = local_4c;
          owner = (long *)local_160[3];
          uVar24 = local_5c;
          uVar14 = local_4c;
          if (owner != (long *)0x0) {
            local_150 = 0xb;
            (**(code **)(*owner + 0x10))(owner,param_1,&local_98);
            param_1 = local_78;
            uVar24 = *(uint *)(local_78 + 7);
            uVar14 = *(uint *)((long)local_78 + 0x3c);
          }
        }
        else {
          *(uint *)(param_1 + 7) = local_5c;
          *(uint *)((long)param_1 + 0x3c) = local_4c;
          uVar24 = local_5c;
          uVar14 = local_4c;
        }
        puVar17 = (uint *)*param_1;
        if (((puVar17 == (uint *)0x0) || (*(long *)(puVar17 + 2) == 0)) ||
           (((int)*puVar17 < 1 ||
            ((puVar17[1] < uVar14 || *puVar17 < uVar24) ||
             (((int)uVar14 < 1 || (int)uVar24 < 1) || (int)puVar17[1] < 1))))) {
          *(undefined1 *)(param_1 + 9) = 1;
LAB_1000c26b:
          bVar23 = 0;
        }
        else {
          bVar23 = *(byte *)(param_1 + 9) ^ 1;
        }
        if (lStack_90 != 0) {
          lVar33 = lStack_90 * 0x38 + -0x30;
          lVar31 = lStack_90;
          do {
            recovered_100080f0(*(void **)((long)local_98 + lVar33));
            lVar33 = lVar33 + -0x38;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
        lStack_90 = 0;
        recovered_100080f0(local_98);
        goto LAB_1000b4f7;
      }
      *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
      local_d0[0] = uVar14;
      local_98 = (void *)CONCAT44(PF_PART4(local_98, 4),uVar32);
      if (*(byte *)(param_1 + 8) < 4) {
        iVar12 = 1;
        ppvVar15 = (void **)local_d0;
        iVar13 = 1;
        switch((uintptr_t)(*(byte *)(param_1 + 8))) {
        case 2:
switchD_1000b4e1_caseD_2:
          local_98 = (void *)CONCAT44(PF_PART4(local_98, 4),uVar32);
          local_d0[0] = uVar14 - 1;
          break;
        case 3:
switchD_1000b4e1_caseD_3:
          iVar13 = -1;
          local_d0[0] = uVar14;
        case 1:
switchD_1000b4e1_caseD_1:
          iVar12 = iVar13;
          ppvVar15 = &local_98;
        case 0:
switchD_1000b4e1_caseD_0:
          local_98 = (void *)CONCAT44(PF_PART4(local_98, 4),uVar32);
          *(int *)ppvVar15 = *(int *)ppvVar15 + iVar12;
        }
        goto LAB_1000b640;
      }
    }
LAB_1000b64c:
    *(uint *)(param_1 + 7) = local_d0[0];
    *(uint *)((long)param_1 + 0x3c) = uVar32;
    if ((uVar24 < local_d0[0] || ((int)uVar32 < 1 || (int)local_d0[0] < 1)) || uVar4 < uVar32) {
      *(undefined1 *)(param_1 + 9) = 1;
    }
    bVar23 = (uVar24 >= local_d0[0] && ((int)uVar32 >= 1 && (int)local_d0[0] >= 1)) &&
             uVar4 >= uVar32;
  }
  else {
LAB_1000b4f5:
    bVar23 = 0;
  }
LAB_1000b4f7:
  recovered_10008700(&local_158);
  return bVar23 & 1;
}

#undef DAT_100110dc
#undef LAB_1000c2c5
#undef uStack_b0
#undef lStack_90
#undef local_178
#undef local_170
#undef local_168
#undef local_160
#undef local_158
#undef local_150
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_fc
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_a0
#undef local_98
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_5c
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_34
#undef puStack_c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c410
 */

void recovered_1000c410(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(byte *)(param_1 + 0x40) < 4) {
    *(char *)(param_1 + 0x40) = (char)(0x30201 >> ((*(byte *)(param_1 + 0x40) & 3) << 3));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c430
 */

void recovered_1000c430(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;

  if ((ulong)param_1[2] < param_2) {
    pvVar5 = recovered_10008090(param_2 * 0x38);
    if (param_1[1] != 0) {
      lVar6 = 0x20;
      uVar7 = 0;
      do {
        lVar3 = *param_1;
        *(undefined1 *)((long)pvVar5 + lVar6 + -0x20) = *(undefined1 *)(lVar3 + -0x20 + lVar6);
        *(undefined8 *)((long)pvVar5 + lVar6 + -0x18) = *(undefined8 *)(lVar3 + -0x18 + lVar6);
        puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar6);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)((long)pvVar5 + lVar6 + -0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar3 + -0x18 + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar3 + -8 + lVar6) = 0;
        *(undefined1 *)((long)pvVar5 + lVar6 + 0x10) = *(undefined1 *)(lVar3 + 0x10 + lVar6);
        uVar4 = ((undefined8 *)(lVar3 + lVar6))[1];
        *(undefined8 *)((long)pvVar5 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
        ((undefined8 *)((long)pvVar5 + lVar6))[1] = uVar4;
        recovered_100080f0((void *)0x0);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x38;
      } while (uVar7 < (ulong)param_1[1]);
    }
    recovered_100080f0((void *)*param_1);
    *param_1 = (long)pvVar5;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4f0
 */

long recovered_1000c4f0(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = param_2 + (ulong)(param_2 == 0);
  if (*(ulong *)(param_1 + 0x10) < uVar1) {
    recovered_1000cae0((long *)(param_1 + 8),uVar1);
  }
  return *(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c530
 */

void recovered_1000c530(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x38 + -0x30;
    do {
      recovered_100080f0(*(void **)(*param_1 + lVar2));
      lVar2 = lVar2 + -0x38;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[1] = 0;
  recovered_100080f0((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c580
 */

void recovered_1000c580(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  do {
    bVar1 = recovered_1000b3a0(param_1);
  } while (bVar1 != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c5b0
 */

undefined1 recovered_1000c5b0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x48);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c5c0
 */

void recovered_1000c5c0(long param_1,ulong param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;

  if (*(ulong *)(param_1 + 0x28) <= param_2) {
    recovered_1000c780((long *)(param_1 + 0x20),param_2 + 1);
  }
  plVar12 = (long *)(param_2 * 0x20 + *(long *)(param_1 + 0x20));
  if (plVar12 == param_3) {
    return;
  }
  lVar2 = param_3[1];
  if (lVar2 == 0) {
    pvVar10 = (void *)0x0;
    uVar11 = 0;
    goto LAB_1000c722;
  }
  pvVar10 = recovered_10008090(lVar2);
  recovered_100080f0((void *)0x0);
  uVar3 = param_3[1];
  uVar11 = 0;
  if (uVar3 == 0) goto LAB_1000c722;
  lVar4 = *param_3;
  uVar11 = 0;
  if ((uVar3 < 4) || ((ulong)((long)pvVar10 - lVar4) < 0x20)) {
LAB_1000c6b5:
    uVar14 = uVar3 & 3;
    uVar13 = uVar11;
    if (uVar14 != 0) {
      do {
        *(undefined1 *)((long)pvVar10 + uVar13) = *(undefined1 *)(lVar4 + uVar13);
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (uVar11 - uVar3 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)pvVar10 + uVar13) = *(undefined1 *)(lVar4 + uVar13);
        *(undefined1 *)((long)pvVar10 + uVar13 + 1) = *(undefined1 *)(lVar4 + 1 + uVar13);
        *(undefined1 *)((long)pvVar10 + uVar13 + 2) = *(undefined1 *)(lVar4 + 2 + uVar13);
        *(undefined1 *)((long)pvVar10 + uVar13 + 3) = *(undefined1 *)(lVar4 + 3 + uVar13);
        uVar13 = uVar13 + 4;
      } while (uVar3 != uVar13);
    }
  }
  else if (uVar3 < 0x20) {
    uVar13 = 0;
LAB_1000c68a:
    uVar11 = uVar3 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)((long)pvVar10 + uVar13) = *(undefined4 *)(lVar4 + uVar13);
      uVar13 = uVar13 + 4;
    } while (uVar11 != uVar13);
    if (uVar3 != uVar11) goto LAB_1000c6b5;
  }
  else {
    uVar11 = uVar3 & 0xffffffffffffffe0;
    uVar13 = 0;
    do {
      uVar7 = ((undefined8 *)(lVar4 + uVar13))[1];
      puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar13);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)((long)pvVar10 + uVar13) = *(undefined8 *)(lVar4 + uVar13);
      ((undefined8 *)((long)pvVar10 + uVar13))[1] = uVar7;
      puVar1 = (undefined8 *)((long)pvVar10 + uVar13 + 0x10);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      uVar13 = uVar13 + 0x20;
    } while (uVar11 != uVar13);
    if (uVar3 != uVar11) {
      uVar13 = uVar11;
      if ((uVar3 & 0x1c) == 0) goto LAB_1000c6b5;
      goto LAB_1000c68a;
    }
  }
  uVar11 = uVar3;
LAB_1000c722:
  pvVar5 = (void *)*plVar12;
  *plVar12 = (long)pvVar10;
  plVar12[1] = uVar11;
  plVar12[2] = lVar2;
  recovered_100080f0(pvVar5);
  plVar6 = (long *)param_3[3];
  if (plVar6 == (long *)0x0) {
    pvVar10 = (void *)0x0;
  }
  else {
    pvVar10 = (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar6 = (long *)plVar12[3];
  plVar12[3] = (long)pvVar10;
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000c766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 8))(plVar6);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c780
 */

void recovered_1000c780(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *owner;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;

  uVar7 = param_1[1];
  if (param_2 < uVar7) {
    lVar6 = uVar7 * 0x20 + -8;
    do {
      lVar3 = *param_1;
      owner = *(long **)(lVar3 + lVar6);
      if (owner != (long *)0x0) {
        (**(code **)(*owner + 8))(owner);
      }
      *(undefined8 *)(lVar3 + -0x10 + lVar6) = 0;
      recovered_100080f0(*(void **)(lVar3 + -0x18 + lVar6));
      uVar7 = uVar7 - 1;
      lVar6 = lVar6 + -0x20;
    } while (param_2 < uVar7);
    param_1[1] = param_2;
  }
  else if (uVar7 < param_2) {
    if ((ulong)param_1[2] < param_2) {
      pvVar5 = recovered_10008090(param_2 << 5);
      if (param_1[1] != 0) {
        lVar6 = 0x18;
        uVar7 = 0;
        do {
          lVar3 = *param_1;
          *(undefined8 *)((long)pvVar5 + lVar6 + -0x18) = *(undefined8 *)(lVar3 + -0x18 + lVar6);
          puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar6);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar5 + lVar6 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          *(undefined8 *)(lVar3 + -0x18 + lVar6) = 0;
          *(undefined8 *)(lVar3 + -8 + lVar6) = 0;
          *(undefined8 *)((long)pvVar5 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          *(undefined8 *)(lVar3 + lVar6) = 0;
          *(undefined8 *)(lVar3 + -0x10 + lVar6) = 0;
          recovered_100080f0((void *)0x0);
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x20;
        } while (uVar7 < (ulong)param_1[1]);
      }
      recovered_100080f0((void *)*param_1);
      *param_1 = (long)pvVar5;
      param_1[2] = param_2;
      uVar7 = param_1[1];
    }
    while (uVar7 < param_2) {
      lVar6 = *param_1;
      puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar7 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar6 + uVar7 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar7 = param_1[1] + 1;
      param_1[1] = uVar7;
    }
  }
  return;
}


#undef DAT_100110f8
#define DAT_100110f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1cU)))
#undef LAB_1000c9ea
#define LAB_1000c9ea (*(uint8_t *)(0x1000c9eaU))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(void * *)(pf_stack_frame + 112))
#define local_40 (*(void * *)(pf_stack_frame + 128))
#define pvStack_48 (*(void * *)(pf_stack_frame + 120))
#define uStack_38 (*(long * *)(pf_stack_frame + 136))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_88 (*(code * *)(pf_stack_frame + 56))
#define local_80 (*(undefined * *)(pf_stack_frame + 64))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c8e0
 */

void recovered_1000c8e0(long param_1,ulong param_2,void **param_3,undefined8 *param_4)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};


  local_78 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  local_68 = (undefined1 *)&local_a8;
  local_50 = (void *)0x0;
  pvStack_48 = (void *)0x0;
  local_40 = (void *)0x0;
  uStack_38 = (long *)0x0;
  local_88 = recovered_10008040;
  local_80 = &DAT_100110f8;
  local_70 = &LAB_1000c9ea;
  recovered_100086e0(&local_a8);
  if (&local_50 != param_3) {
    recovered_100080f0((void *)0x0);
    local_50 = *param_3;
    pvStack_48 = param_3[1];
    local_40 = param_3[2];
    *param_3 = (void *)0x0;
    param_3[1] = (void *)0x0;
    param_3[2] = (void *)0x0;
  }
  if (&uStack_38 != param_4) {
    if (uStack_38 != (long *)0x0) {
      (**(code **)(*uStack_38 + 8))(uStack_38);
    }
    uStack_38 = (long *)*param_4;
    *param_4 = 0;
  }
  local_a0 = 1;
  recovered_1000c5c0(param_1,param_2,(long *)&local_50);
  if (uStack_38 != (long *)0x0) {
    (**(code **)(*uStack_38 + 8))(uStack_38);
  }
  pvStack_48 = (void *)0x0;
  recovered_100080f0(local_50);
  recovered_10008700(&local_a8);
  return;
}

#undef DAT_100110f8
#undef LAB_1000c9ea
#undef local_70
#undef local_68
#undef local_50
#undef local_40
#undef pvStack_48
#undef uStack_38
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ca50
 */

void recovered_1000ca50(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *owner;
  long lVar2;

  if (*(ulong *)(param_1 + 0x28) <= param_2) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = param_2 * 0x20;
  *(undefined8 *)(lVar1 + 8 + lVar2) = 0;
  recovered_100080f0(*(void **)(lVar1 + lVar2));
  *(undefined8 *)(lVar1 + lVar2) = 0;
  ((undefined8 *)(lVar1 + lVar2))[1] = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar2) = 0;
  owner = *(long **)(lVar1 + 0x18 + lVar2);
  if (owner != (long *)0x0) {
    (**(code **)(*owner + 8))(owner);
  }
  *(undefined8 *)(lVar1 + lVar2 + 0x18) = 0;
  recovered_100080f0((void *)0x0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cac0
 */

long recovered_1000cac0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cad0
 */

long recovered_1000cad0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cae0
 */

void recovered_1000cae0(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;

  uVar7 = param_1[1];
  if (param_2 < uVar7) {
    lVar6 = uVar7 * 0x28 + -0x20;
    do {
      recovered_100080f0(*(void **)(*param_1 + lVar6));
      uVar7 = uVar7 - 1;
      lVar6 = lVar6 + -0x28;
    } while (param_2 < uVar7);
    param_1[1] = param_2;
  }
  else if (uVar7 < param_2) {
    if ((ulong)param_1[2] < param_2) {
      pvVar5 = recovered_10008090(param_2 * 0x28);
      if (param_1[1] != 0) {
        lVar6 = 0x20;
        uVar7 = 0;
        do {
          lVar3 = *param_1;
          *(undefined1 *)((long)pvVar5 + lVar6 + -0x20) = *(undefined1 *)(lVar3 + -0x20 + lVar6);
          *(undefined8 *)((long)pvVar5 + lVar6 + -0x18) = *(undefined8 *)(lVar3 + -0x18 + lVar6);
          puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar6);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar5 + lVar6 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar3 + -0x18 + lVar6);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar3 + -8 + lVar6) = 0;
          *(undefined8 *)((long)pvVar5 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          recovered_100080f0((void *)0x0);
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (uVar7 < (ulong)param_1[1]);
      }
      recovered_100080f0((void *)*param_1);
      *param_1 = (long)pvVar5;
      param_1[2] = param_2;
      uVar7 = param_1[1];
    }
    while (uVar7 < param_2) {
      lVar6 = *param_1;
      puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar7 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar6 + uVar7 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar6 + 0x20 + uVar7 * 0x28) = 0;
      uVar7 = param_1[1] + 1;
      param_1[1] = uVar7;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc20
 */

long recovered_1000cc20(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = param_2 + (ulong)(param_2 == 0);
  if (*(ulong *)(param_1 + 0x10) < uVar1) {
    return 0;
  }
  return *(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc50
 */

void recovered_1000cc50(long param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10010160((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc80
 */

void recovered_1000cc80(long param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100102b0((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_10011100
#define DAT_10011100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd24U)))
#undef LAB_1000cda1
#define LAB_1000cda1 (*(uint8_t *)(0x1000cda1U))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 144))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_98 (*(code * *)(pf_stack_frame + 56))
#define local_90 (*(undefined * *)(pf_stack_frame + 64))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 112))
#define local_58 (*(void * *)(pf_stack_frame + 120))
#define local_48 (*(undefined8 *)(pf_stack_frame + 136))
#define local_38 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ccb0
 */

undefined8 recovered_1000ccb0(long param_1,void **param_2)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined1 *puVar2;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_60[0] = 1;
  local_98 = recovered_10008040;
  local_90 = &DAT_10011100;
  local_80 = &LAB_1000cda1;
  recovered_100086e0(&local_b8);
  local_38 = param_1;
  if (&local_58 != param_2) {
    puVar2 = &DAT_10010f2c;
    if (*param_2 != (undefined1 *)0x0) {
      puVar2 = *param_2;
    }
    local_b0 = 1;
    recovered_1000d370((long *)&local_58,(long)puVar2,(ulong)param_2[1]);
  }
  uStack_40 = 0;
  local_b0 = 2;
  recovered_100102b0((long *)(local_38 + 8),local_60);
  uVar1 = *(undefined8 *)(local_38 + 0x10);
  *(undefined8 *)(local_38 + 0x50) = uVar1;
  recovered_100080f0(local_58);
  recovered_10008700(&local_b8);
  return uVar1;
}

#undef DAT_10010f2c
#undef DAT_10011100
#undef LAB_1000cda1
#undef uStack_40
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_38
#undef uStack_50

#undef DAT_10011108
#define DAT_10011108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd2cU)))
#undef LAB_1000ceda
#define LAB_1000ceda (*(uint8_t *)(0x1000cedaU))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 144))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_98 (*(code * *)(pf_stack_frame + 56))
#define local_90 (*(undefined * *)(pf_stack_frame + 64))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 112))
#define local_58 (*(void * *)(pf_stack_frame + 120))
#define local_48 (*(void * *)(pf_stack_frame + 136))
#define local_38 (*(undefined8 *)(pf_stack_frame + 152))
#define pvStack_50 (*(void * *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cdf0
 */

undefined8 recovered_1000cdf0(long param_1,void **param_2)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  local_58 = (void *)0x0;
  pvStack_50 = (void *)0x0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_60[0] = 1;
  local_98 = recovered_10008040;
  local_90 = &DAT_10011108;
  local_80 = &LAB_1000ceda;
  recovered_100086e0(&local_b8);
  if (&local_58 != param_2) {
    recovered_100080f0((void *)0x0);
    local_58 = *param_2;
    pvStack_50 = param_2[1];
    local_48 = param_2[2];
    *param_2 = (void *)0x0;
    param_2[1] = (void *)0x0;
    param_2[2] = (void *)0x0;
  }
  uStack_40 = 0;
  local_b0 = 1;
  local_38 = param_1;
  recovered_100102b0((long *)(param_1 + 8),local_60);
  uVar1 = *(undefined8 *)(local_38 + 0x10);
  *(undefined8 *)(local_38 + 0x50) = uVar1;
  recovered_100080f0(local_58);
  recovered_10008700(&local_b8);
  return uVar1;
}

#undef DAT_10011108
#undef LAB_1000ceda
#undef uStack_40
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_38
#undef pvStack_50

#undef DAT_10011110
#define DAT_10011110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd34U)))
#undef LAB_1000cfda
#define LAB_1000cfda (*(uint8_t *)(0x1000cfdaU))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_98 (*(code * *)(pf_stack_frame + 56))
#define local_90 (*(undefined * *)(pf_stack_frame + 64))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 112))
#define local_58 (*(void * *)(pf_stack_frame + 120))
#define local_48 (*(undefined8 *)(pf_stack_frame + 136))
#define local_40 (*(undefined8 *)(pf_stack_frame + 144))
#define local_38 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf20
 */

undefined8 recovered_1000cf20(long param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_60[0] = 2;
  local_98 = recovered_10008040;
  local_90 = &DAT_10011110;
  local_80 = &LAB_1000cfda;
  local_b0 = 1;
  local_40 = param_2;
  local_38 = param_1;
  recovered_100086e0(&local_b8);
  recovered_100102b0((long *)(param_1 + 8),local_60);
  uVar1 = *(undefined8 *)(local_38 + 0x10);
  *(undefined8 *)(local_38 + 0x50) = uVar1;
  recovered_100080f0(local_58);
  recovered_10008700(&local_b8);
  return uVar1;
}

#undef DAT_10011110
#undef LAB_1000cfda
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_38
#undef uStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d020
 */

void recovered_1000d020(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = param_2 + (ulong)(param_2 == 0);
  if (*(ulong *)(param_1 + 0x10) < uVar1) {
    recovered_1000cae0((long *)(param_1 + 8),uVar1);
  }
  recovered_10010160((long *)(param_1 + 8),
                     (undefined1 *)(*(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28));
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d080
 */

void recovered_1000d080(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;

  uVar4 = param_2 + (ulong)(param_2 == 0);
  *(ulong *)(param_1 + 0x50) = uVar4;
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 < uVar4) {
    recovered_1000cae0((long *)(param_1 + 8),uVar4);
    uVar3 = *(ulong *)(param_1 + 0x10);
  }
  if (uVar3 < uVar4) {
    recovered_1000cae0((long *)(param_1 + 8),uVar4);
  }
  lVar1 = *(long *)(param_1 + 8);
  *(undefined1 *)(lVar1 + -0x28 + uVar4 * 0x28) = 0;
  *(undefined8 *)(lVar1 + -0x18 + uVar4 * 0x28) = 0;
  puVar2 = *(undefined1 **)(lVar1 + -0x20 + uVar4 * 0x28);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  *(undefined8 *)(lVar1 + uVar4 * 0x28 + -8) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d100
 */

void recovered_1000d100(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = param_2 + (ulong)(param_2 == 0);
  *(ulong *)(param_1 + 0x50) = uVar1;
  if (*(ulong *)(param_1 + 0x10) < uVar1) {
    recovered_1000cae0((long *)(param_1 + 8),uVar1);
    return;
  }
  return;
}


#undef DAT_10011118
#define DAT_10011118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd3cU)))
#undef LAB_1000d269
#define LAB_1000d269 (*(uint8_t *)(0x1000d269U))
#define auStack_c8 (*(undefined1 (*)[200])(pf_stack_frame + 24))
#define local_98 (*(undefined * *)(pf_stack_frame + 72))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_68 (*(undefined1 (*)[104])(pf_stack_frame + 120))
#define local_60 (*(void * *)(pf_stack_frame + 128))
#define local_50 (*(undefined8 *)(pf_stack_frame + 144))
#define local_40 (*(long * *)(pf_stack_frame + 160))
#define local_38 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_58 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 152))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 40))
#define local_a0 (*(code * *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d130
 */

long recovered_1000d130(ulong param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  local_90 = local_68 + 0x60;
  local_80 = auStack_c8;
  uVar1 = *(ulong *)(param_1 + 0x50);
  local_a0 = recovered_10008040;
  local_98 = &DAT_10011118;
  local_88 = &LAB_1000d269;
  recovered_100086e0(&local_c0);
  if (uVar1 == 0) {
    local_68[0] = 0;
    local_60 = (void *)0x0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = (long *)(param_1 + 8);
    local_b8 = 1;
    local_38 = param_1;
    recovered_100102b0(local_40,local_68);
    lVar2 = *(long *)(local_38 + 0x10);
    *(long *)(local_38 + 0x50) = lVar2;
    uVar1 = lVar2 + (ulong)(lVar2 == 0);
    if (lVar2 == 0) {
      local_b8 = 2;
      local_38 = uVar1;
      recovered_1000cae0(local_40,uVar1);
      uVar1 = local_38;
    }
    lVar2 = uVar1 * 0x28 + *local_40;
    recovered_100080f0(local_60);
  }
  else {
    if (*(ulong *)(param_1 + 0x10) < uVar1) {
      local_b8 = 0xffffffff;
      recovered_1000cae0((long *)(param_1 + 8),uVar1);
    }
    lVar2 = uVar1 * 0x28 + *(long *)(param_1 + 8);
  }
  recovered_10008700(&local_c0);
  return lVar2 + -0x28;
}

#undef DAT_10011118
#undef LAB_1000d269
#undef auStack_c8
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_50
#undef local_40
#undef local_38
#undef uStack_58
#undef uStack_48
#undef local_c0
#undef local_b8
#undef local_a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d2b0
 */

long recovered_1000d2b0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = *(ulong *)(param_1 + 0x50);
  if ((uVar1 == 0) || (*(ulong *)(param_1 + 0x10) < uVar1)) {
    return 0;
  }
  return *(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d2e0
 */

long recovered_1000d2e0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d2f0
 */

long recovered_1000d2f0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d300
 */

undefined8 recovered_1000d300(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined8 *)(param_1 + 0x50);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d310
 */

undefined4 recovered_1000d310(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x38);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d320
 */

undefined4 recovered_1000d320(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x3c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d330
 */

undefined1 recovered_1000d330(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x40);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d340
 */

void recovered_1000d340(long param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d350
 */

undefined4 recovered_1000d350(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x44);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d360
 */

void recovered_1000d360(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(uint *)(param_1 + 0x44) = param_2 & 0xffffff;
  return;
}


#define lStack_40 (*(long *)(pf_stack_frame + 32))
#define local_48 (*(void * *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d370
 */

void recovered_1000d370(long *param_1,long param_2,ulong param_3)

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
        recovered_1000d370((long *)&local_48,(long)(puVar8 + uVar11),uVar12);
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
  if (uVar13 <= (ulong)param_1[2]) goto LAB_1000d596;
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
        if (uVar11 == uVar12) goto LAB_1000d57f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_1000d515;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_1000d57f;
    }
LAB_1000d515:
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
LAB_1000d57f:
  puVar8[uVar11] = 0;
  recovered_100080f0(pvVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_1000d596:
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
 * Address: 0x1000d620
 */

long recovered_1000d620(long *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
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
      pvVar4 = recovered_10008090(uVar8 * 0x38);
      if (param_1[1] != 0) {
        lVar7 = 0x20;
        uVar6 = 0;
        do {
          lVar5 = *param_1;
          *(undefined1 *)((long)pvVar4 + lVar7 + -0x20) = *(undefined1 *)(lVar5 + -0x20 + lVar7);
          *(undefined8 *)((long)pvVar4 + lVar7 + -0x18) = *(undefined8 *)(lVar5 + -0x18 + lVar7);
          puVar1 = (undefined8 *)(lVar5 + -0x10 + lVar7);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar4 + lVar7 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(lVar5 + -0x18 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar5 + -8 + lVar7) = 0;
          *(undefined1 *)((long)pvVar4 + lVar7 + 0x10) = *(undefined1 *)(lVar5 + 0x10 + lVar7);
          uVar3 = ((undefined8 *)(lVar5 + lVar7))[1];
          *(undefined8 *)((long)pvVar4 + lVar7) = *(undefined8 *)(lVar5 + lVar7);
          ((undefined8 *)((long)pvVar4 + lVar7))[1] = uVar3;
          recovered_100080f0((void *)0x0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x38;
        } while (uVar6 < (ulong)param_1[1]);
      }
      recovered_100080f0((void *)*param_1);
      *param_1 = (long)pvVar4;
      param_1[2] = uVar8;
      uVar6 = param_1[1];
    }
  }
  lVar7 = *param_1;
  lVar5 = uVar6 * 0x38;
  *(undefined1 *)(lVar7 + lVar5) = *param_2;
  *(undefined8 *)(lVar7 + 8 + lVar5) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar5);
  *puVar1 = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar3;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(lVar7 + 0x30 + lVar5) = param_2[0x30];
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar5);
  *puVar1 = *(undefined8 *)(param_2 + 0x20);
  puVar1[1] = uVar3;
  lVar7 = param_1[1];
  param_1[1] = lVar7 + 1;
  return lVar7 * 0x38 + *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d760
 */

void recovered_1000d760(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    return;
  }
  pvVar7 = recovered_10008090(param_3);
  pvVar3 = (void *)*param_1;
  uVar8 = param_1[1];
  if (uVar8 == 0) goto LAB_1000d89f;
  if ((ulong)((long)pvVar7 - (long)pvVar3) < 0x20 || uVar8 < 4) {
    uVar12 = 0;
  }
  else {
    if (uVar8 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar12 = uVar8 & 0xffffffffffffffe0;
      uVar9 = 0;
      do {
        uVar4 = ((undefined8 *)((long)pvVar3 + uVar9))[1];
        puVar2 = (undefined8 *)((long)pvVar3 + uVar9 + 0x10);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        *(undefined8 *)((long)pvVar7 + uVar9) = *(undefined8 *)((long)pvVar3 + uVar9);
        ((undefined8 *)((long)pvVar7 + uVar9))[1] = uVar4;
        puVar2 = (undefined8 *)((long)pvVar7 + uVar9 + 0x10);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        uVar9 = uVar9 + 0x20;
      } while (uVar12 != uVar9);
      if (uVar8 == uVar12) goto LAB_1000d89f;
      uVar9 = uVar12;
      if ((uVar8 & 0x1c) == 0) goto LAB_1000d835;
    }
    uVar12 = uVar8 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)((long)pvVar7 + uVar9) = *(undefined4 *)((long)pvVar3 + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar12 != uVar9);
    if (uVar8 == uVar12) goto LAB_1000d89f;
  }
LAB_1000d835:
  uVar10 = uVar8 & 3;
  uVar9 = uVar12;
  if (uVar10 != 0) {
    do {
      *(undefined1 *)((long)pvVar7 + uVar9) = *(undefined1 *)((long)pvVar3 + uVar9);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (uVar12 - uVar8 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)((long)pvVar7 + uVar9) = *(undefined1 *)((long)pvVar3 + uVar9);
      *(undefined1 *)((long)pvVar7 + uVar9 + 1) = *(undefined1 *)((long)pvVar3 + uVar9 + 1);
      *(undefined1 *)((long)pvVar7 + uVar9 + 2) = *(undefined1 *)((long)pvVar3 + uVar9 + 2);
      *(undefined1 *)((long)pvVar7 + uVar9 + 3) = *(undefined1 *)((long)pvVar3 + uVar9 + 3);
      uVar9 = uVar9 + 4;
    } while (uVar8 != uVar9);
  }
LAB_1000d89f:
  recovered_100080f0(pvVar3);
  *param_1 = pvVar7;
  param_1[2] = param_3;
  puVar1 = param_2 + param_3;
  uVar8 = param_1[1];
  do {
    if (uVar8 == param_3) {
      uVar12 = param_3 * 2;
      if (param_3 == 0) {
        uVar12 = 4;
      }
      uVar8 = param_3;
      if (param_3 < uVar12) {
        pvVar7 = recovered_10008090(uVar12);
        pvVar3 = (void *)*param_1;
        uVar8 = param_1[1];
        if (uVar8 != 0) {
          if (uVar8 < 4) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            if (0x1f < (ulong)((long)pvVar7 - (long)pvVar3)) {
              if (uVar8 < 0x20) {
                uVar10 = 0;
              }
              else {
                uVar9 = uVar8 & 0xffffffffffffffe0;
                uVar10 = 0;
                do {
                  uVar4 = ((undefined8 *)((long)pvVar3 + uVar10))[1];
                  puVar2 = (undefined8 *)((long)pvVar3 + uVar10 + 0x10);
                  uVar5 = *puVar2;
                  uVar6 = puVar2[1];
                  *(undefined8 *)((long)pvVar7 + uVar10) = *(undefined8 *)((long)pvVar3 + uVar10);
                  ((undefined8 *)((long)pvVar7 + uVar10))[1] = uVar4;
                  puVar2 = (undefined8 *)((long)pvVar7 + uVar10 + 0x10);
                  *puVar2 = uVar5;
                  puVar2[1] = uVar6;
                  uVar10 = uVar10 + 0x20;
                } while (uVar9 != uVar10);
                if (uVar8 == uVar9) goto LAB_1000d8c0;
                uVar10 = uVar9;
                if ((uVar8 & 0x1c) == 0) goto LAB_1000d9b9;
              }
              uVar9 = uVar8 & 0xfffffffffffffffc;
              do {
                *(undefined4 *)((long)pvVar7 + uVar10) = *(undefined4 *)((long)pvVar3 + uVar10);
                uVar10 = uVar10 + 4;
              } while (uVar9 != uVar10);
              if (uVar8 == uVar9) goto LAB_1000d8c0;
            }
          }
LAB_1000d9b9:
          uVar11 = uVar8 & 3;
          uVar10 = uVar9;
          if (uVar11 != 0) {
            do {
              *(undefined1 *)((long)pvVar7 + uVar10) = *(undefined1 *)((long)pvVar3 + uVar10);
              uVar10 = uVar10 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (uVar9 - uVar8 < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)((long)pvVar7 + uVar10) = *(undefined1 *)((long)pvVar3 + uVar10);
              *(undefined1 *)((long)pvVar7 + uVar10 + 1) =
                   *(undefined1 *)((long)pvVar3 + uVar10 + 1);
              *(undefined1 *)((long)pvVar7 + uVar10 + 2) =
                   *(undefined1 *)((long)pvVar3 + uVar10 + 2);
              *(undefined1 *)((long)pvVar7 + uVar10 + 3) =
                   *(undefined1 *)((long)pvVar3 + uVar10 + 3);
              uVar10 = uVar10 + 4;
            } while (uVar8 != uVar10);
          }
        }
LAB_1000d8c0:
        recovered_100080f0(pvVar3);
        *param_1 = pvVar7;
        param_1[2] = uVar12;
        uVar8 = param_1[1];
        param_3 = uVar12;
      }
    }
    *(undefined1 *)((long)pvVar7 + uVar8) = *param_2;
    uVar8 = uVar8 + 1;
    param_1[1] = uVar8;
    param_2 = param_2 + 1;
    if (param_2 == puVar1) {
      return;
    }
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da40
 */

void recovered_1000da40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da50
 */

void recovered_1000da50(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_10011120
#define DAT_10011120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10013070
#define DAT_10013070 (*(uint * *)(((uintptr_t)pf_module_state + 0x2c94U)))
#undef LAB_1000dbca
#define LAB_1000dbca (*(uint8_t *)(0x1000dbcaU))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_80 (*(code * *)(pf_stack_frame + 64))
#define local_78 (*(undefined * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_a8 (*(undefined1 (*)[168])(pf_stack_frame + 24))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_48 (*(undefined1 * (*)[9])(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da60
 */

void recovered_1000da60(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;

  local_70 = (undefined1 *)(local_48 + 8);
  local_60 = auStack_a8;
  lVar2 = *(long *)((long)arguments + 8);
  local_80 = recovered_10008040;
  local_78 = &DAT_10011120;
  local_68 = &LAB_1000dbca;
  recovered_100086e0(&local_a0);
  if (lVar2 != 0) {
    if (*(char *)(*(long *)arguments + 0x30) == '\x01') {
      if ((*(long *)((long)engine + 0x50) - 1U < *(ulong *)((long)engine + 0x10)) &&
         (pcVar3 = (char *)(*(long *)((long)engine + 0x50) * 0x28 + *(long *)((long)engine + 8) +
                           -0x28), pcVar3 != (char *)0x0)) {
        local_98 = 0xffffffff;
        recovered_10009920((uint128 *)local_48,pcVar3);
        puVar4 = &DAT_10010f2c;
        if (local_48[0] != (undefined1 *)0x0) {
          puVar4 = local_48[0];
        }
        if (DAT_10013070 != (uint *)0x0) {
          lVar2 = -1;
          do {
            lVar1 = lVar2 + 1;
            lVar2 = lVar2 + 1;
          } while (puVar4[lVar1] != '\0');
          local_98 = 1;
          recovered_100075a0(puVar4,1,lVar2,DAT_10013070);
        }
        recovered_100080f0(local_48[0]);
      }
    }
    else {
      puVar4 = *(undefined1 **)(*(long *)arguments + 8);
      puVar5 = &DAT_10010f2c;
      if (puVar4 != (undefined1 *)0x0) {
        puVar5 = puVar4;
      }
      if (DAT_10013070 != (uint *)0x0) {
        lVar2 = -1;
        do {
          lVar1 = lVar2 + 1;
          lVar2 = lVar2 + 1;
        } while (puVar5[lVar1] != '\0');
        local_98 = 0xffffffff;
        recovered_100075a0(puVar5,1,lVar2,DAT_10013070);
      }
    }
  }
  recovered_10008700(&local_a0);
  return;
}

#undef DAT_10010f2c
#undef DAT_10011120
#undef DAT_10013070
#undef LAB_1000dbca
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef auStack_a8
#undef local_60
#undef local_48

#undef PTR_recovered_1000da40_10012010
#define PTR_recovered_1000da40_10012010 (*(void * *)(((uintptr_t)pf_module_state + 0x1c34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc10
 */

void * recovered_1000dc10(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000da40_10012010;
  return puVar1;
}

#undef PTR_recovered_1000da40_10012010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc30
 */

void recovered_1000dc30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc40
 */

void recovered_1000dc40(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


#undef DAT_1001101a
#define DAT_1001101a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc3eU)))
#define in_stack_00000008 (*(undefined1 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc50
 */

void recovered_1000dc50(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  ulong in_RCX;
  void *extraout_RDX;
  void *variable;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 in_XMM0_Qa;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  if (*(long *)((long)arguments + 8) == 0) {
    return;
  }
  if (*(char *)(*(long *)arguments + 0x30) == '\x01') {
    in_RCX = *(long *)((long)engine + 0x50) - 1;
    if (*(ulong *)((long)engine + 0x10) <= in_RCX) {
      return;
    }
    variable = (void *)(*(long *)((long)engine + 0x50) * 0x28 + *(long *)((long)engine + 8) + -0x28)
    ;
    if (variable == (void *)0x0) {
      return;
    }
    lVar1 = recovered_10009b40(variable);
    arguments = extraout_RDX;
    in_XMM0_Qa = extraout_XMM0_Qa;
  }
  else {
    lVar1 = *(longlong *)(*(long *)arguments + 0x20);
  }
  recovered_10007e70(in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa,&DAT_1001101a,lVar1,arguments,in_RCX,in_R8,in_R9,in_stack_00000008);
  return;
}

#undef DAT_1001101a
#undef in_stack_00000008

#undef PTR_recovered_1000dc30_10012068
#define PTR_recovered_1000dc30_10012068 (*(void * *)(((uintptr_t)pf_module_state + 0x1c8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcb0
 */

void * recovered_1000dcb0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000dc30_10012068;
  return puVar1;
}

#undef PTR_recovered_1000dc30_10012068

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcd0
 */

void recovered_1000dcd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dce0
 */

void recovered_1000dce0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_30 (*(undefined8 *)(pf_stack_frame + 32))
#define local_40 (*(void * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcf0
 */

void recovered_1000dcf0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;

  uVar4 = *(long *)(*(long *)arguments + 0x28) + (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar4;
  uVar3 = *(ulong *)((long)engine + 0x10);
  if (uVar3 < uVar4) {
    recovered_1000cae0((long *)((long)engine + 8),uVar4);
    uVar3 = *(ulong *)((long)engine + 0x10);
    uVar4 = *(long *)(*(long *)arguments + 0x28) +
            (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  }
  if (uVar3 < uVar4) {
    recovered_1000cae0((long *)((long)engine + 8),uVar4);
  }
  lVar2 = *(long *)((long)engine + 8);
  lVar1 = lVar2 + uVar4 * 0x28;
  recovered_10009920((uint128 *)&local_40,(char *)(lVar2 + uVar4 * 0x28 + -0x28));
  *(undefined1 *)(lVar2 + -0x28 + uVar4 * 0x28) = 1;
  if ((uint128 *)(lVar2 + uVar4 * 0x28 + -0x20) != (uint128 *)&local_40) {
    recovered_100080f0(*(void **)(lVar1 + -0x20));
    *(void **)(lVar1 + -0x20) = local_40;
    *(undefined8 *)(lVar1 + -0x18) = uStack_38;
    *(undefined8 *)(lVar1 + -0x10) = uStack_30;
    local_40 = (void *)0x0;
    uStack_38 = 0;
    uStack_30 = 0;
  }
  *(undefined8 *)(lVar1 + -8) = 0;
  recovered_100080f0(local_40);
  return;
}

#undef uStack_38
#undef uStack_30
#undef local_40

#undef PTR_recovered_1000dcd0_100120b0
#define PTR_recovered_1000dcd0_100120b0 (*(void * *)(((uintptr_t)pf_module_state + 0x1cd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dde0
 */

void * recovered_1000dde0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000dcd0_100120b0;
  return puVar1;
}

#undef PTR_recovered_1000dcd0_100120b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de00
 */

void recovered_1000de00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de10
 */

void recovered_1000de10(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de20
 */

void recovered_1000de20(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  longlong lVar4;
  ulong uVar5;

  uVar5 = *(long *)(*(long *)arguments + 0x28) + (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar5;
  uVar3 = *(ulong *)((long)engine + 0x10);
  if (uVar3 < uVar5) {
    recovered_1000cae0((long *)((long)engine + 8),uVar5);
    uVar3 = *(ulong *)((long)engine + 0x10);
    uVar5 = *(long *)(*(long *)arguments + 0x28) +
            (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  }
  if (uVar3 < uVar5) {
    recovered_1000cae0((long *)((long)engine + 8),uVar5);
  }
  lVar1 = *(long *)((long)engine + 8);
  lVar4 = recovered_10009b40((void *)(lVar1 + uVar5 * 0x28 + -0x28));
  *(undefined1 *)(lVar1 + -0x28 + uVar5 * 0x28) = 2;
  *(longlong *)(lVar1 + -8 + uVar5 * 0x28) = lVar4;
  *(undefined8 *)(lVar1 + -0x18 + uVar5 * 0x28) = 0;
  puVar2 = *(undefined1 **)(lVar1 + -0x20 + uVar5 * 0x28);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  return;
}


#undef PTR_recovered_1000de00_100120f8
#define PTR_recovered_1000de00_100120f8 (*(void * *)(((uintptr_t)pf_module_state + 0x1d1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dec0
 */

void * recovered_1000dec0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000de00_100120f8;
  return puVar1;
}

#undef PTR_recovered_1000de00_100120f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dee0
 */

void recovered_1000dee0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000def0
 */

void recovered_1000def0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_10011128
#define DAT_10011128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4cU)))
#undef LAB_1000e059
#define LAB_1000e059 (*(uint8_t *)(0x1000e059U))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 144))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_98 (*(code * *)(pf_stack_frame + 56))
#define local_90 (*(undefined * *)(pf_stack_frame + 64))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 112))
#define local_58 (*(void * *)(pf_stack_frame + 120))
#define local_48 (*(undefined8 *)(pf_stack_frame + 136))
#define local_38 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df00
 */

void recovered_1000df00(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  lVar1 = *(long *)((long)engine + 0x50);
  local_98 = recovered_10008040;
  local_90 = &DAT_10011128;
  local_80 = &LAB_1000e059;
  recovered_100086e0(&local_b8);
  if (lVar1 == 0) {
    puVar2 = *(undefined1 **)arguments;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_60[0] = 1;
    local_38 = engine;
    if (local_60 != puVar2) {
      puVar3 = &DAT_10010f2c;
      if (*(undefined1 **)(puVar2 + 8) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(puVar2 + 8);
      }
      local_b0 = 1;
      recovered_1000d370((long *)&local_58,(long)puVar3,*(ulong *)(puVar2 + 0x10));
    }
    uStack_40 = 0;
    local_b0 = 2;
    recovered_100102b0((long *)((long)local_38 + 8),local_60);
    *(undefined8 *)((long)local_38 + 0x50) = *(undefined8 *)((long)local_38 + 0x10);
    recovered_100080f0(local_58);
  }
  else {
    local_b0 = 0xffffffff;
    puVar3 = (undefined1 *)recovered_1000d130((ulong)engine);
    puVar2 = *(undefined1 **)arguments;
    *puVar3 = 1;
    if (puVar3 != puVar2) {
      puVar4 = &DAT_10010f2c;
      if (*(undefined1 **)(puVar2 + 8) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(puVar2 + 8);
      }
      local_b0 = 0xffffffff;
      recovered_1000d370((long *)(puVar3 + 8),(long)puVar4,*(ulong *)(puVar2 + 0x10));
    }
    *(undefined8 *)(puVar3 + 0x20) = 0;
  }
  recovered_10008700(&local_b8);
  return;
}

#undef DAT_10010f2c
#undef DAT_10011128
#undef LAB_1000e059
#undef uStack_40
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_38
#undef uStack_50

#undef PTR_recovered_1000dee0_10012140
#define PTR_recovered_1000dee0_10012140 (*(void * *)(((uintptr_t)pf_module_state + 0x1d64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e0a0
 */

void * recovered_1000e0a0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000dee0_10012140;
  return puVar1;
}

#undef PTR_recovered_1000dee0_10012140

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e0c0
 */

void recovered_1000e0c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e0d0
 */

void recovered_1000e0d0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


#undef DAT_10011130
#define DAT_10011130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd54U)))
#undef LAB_1000e1e3
#define LAB_1000e1e3 (*(uint8_t *)(0x1000e1e3U))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_98 (*(code * *)(pf_stack_frame + 56))
#define local_90 (*(undefined * *)(pf_stack_frame + 64))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 112))
#define local_58 (*(void * *)(pf_stack_frame + 120))
#define local_48 (*(undefined8 *)(pf_stack_frame + 136))
#define local_40 (*(undefined8 *)(pf_stack_frame + 144))
#define local_38 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e0e0
 */

void recovered_1000e0e0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  lVar1 = *(long *)((long)engine + 0x50);
  local_98 = recovered_10008040;
  local_90 = &DAT_10011130;
  local_80 = &LAB_1000e1e3;
  recovered_100086e0(&local_b8);
  if (lVar1 == 0) {
    local_40 = *(undefined8 *)(*(long *)arguments + 0x20);
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_60[0] = 2;
    local_b0 = 1;
    local_38 = engine;
    recovered_100102b0((long *)((long)engine + 8),local_60);
    *(undefined8 *)((long)local_38 + 0x50) = *(undefined8 *)((long)local_38 + 0x10);
    recovered_100080f0(local_58);
  }
  else {
    local_b0 = 0xffffffff;
    puVar3 = (undefined1 *)recovered_1000d130((ulong)engine);
    uVar2 = *(undefined8 *)(*(long *)arguments + 0x20);
    *puVar3 = 2;
    *(undefined8 *)(puVar3 + 0x20) = uVar2;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    if (*(undefined1 **)(puVar3 + 8) != (undefined1 *)0x0) {
      **(undefined1 **)(puVar3 + 8) = 0;
    }
  }
  recovered_10008700(&local_b8);
  return;
}

#undef DAT_10011130
#undef LAB_1000e1e3
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_38
#undef uStack_50

#undef PTR_recovered_1000e0c0_10012188
#define PTR_recovered_1000e0c0_10012188 (*(void * *)(((uintptr_t)pf_module_state + 0x1dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e230
 */

void * recovered_1000e230(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000e0c0_10012188;
  return puVar1;
}

#undef PTR_recovered_1000e0c0_10012188

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e250
 */

void recovered_1000e250(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e260
 */

void recovered_1000e260(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_10011138
#define DAT_10011138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd5cU)))
#undef LAB_1000e3fd
#define LAB_1000e3fd (*(uint8_t *)(0x1000e3fdU))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_98 (*(code * *)(pf_stack_frame + 56))
#define local_90 (*(undefined * *)(pf_stack_frame + 64))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 112))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 120))
#define local_48 (*(undefined8 *)(pf_stack_frame + 136))
#define local_40 (*(undefined8 *)(pf_stack_frame + 144))
#define local_38 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_50 (*(ulong *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e270
 */

void recovered_1000e270(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  uVar5 = *(long *)(*(long *)arguments + 0x28) + (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  uVar1 = *(ulong *)((long)engine + 0x10);
  local_98 = recovered_10008040;
  local_90 = &DAT_10011138;
  local_80 = &LAB_1000e3fd;
  recovered_100086e0(&local_b8);
  if (uVar1 < uVar5) {
    local_b0 = 0xffffffff;
    recovered_1000cae0((long *)((long)engine + 8),uVar5);
  }
  lVar2 = *(long *)((long)engine + 8);
  local_60[0] = *(undefined1 *)(lVar2 + -0x28 + uVar5 * 0x28);
  local_58 = (undefined1 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  puVar3 = *(undefined1 **)(lVar2 + -0x20 + uVar5 * 0x28);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_10010f2c;
  }
  local_b0 = 0xffffffff;
  recovered_1000d370((long *)&local_58,(long)puVar3,*(ulong *)(lVar2 + -0x18 + uVar5 * 0x28));
  local_40 = *(undefined8 *)(lVar2 + -8 + uVar5 * 0x28);
  if (*(long *)((long)engine + 0x50) == 0) {
    local_b0 = 1;
    local_38 = engine;
    recovered_10010160((long *)((long)engine + 8),local_60);
    *(undefined8 *)(local_38 + 0x50) = *(undefined8 *)(local_38 + 0x10);
  }
  else {
    local_b0 = 2;
    puVar3 = (undefined1 *)recovered_1000d130((ulong)engine);
    *puVar3 = local_60[0];
    if (puVar3 != local_60) {
      puVar4 = &DAT_10010f2c;
      if (local_58 != (undefined1 *)0x0) {
        puVar4 = local_58;
      }
      local_b0 = 3;
      local_38 = puVar3;
      recovered_1000d370((long *)(puVar3 + 8),(long)puVar4,uStack_50);
      puVar3 = local_38;
    }
    *(undefined8 *)(puVar3 + 0x20) = local_40;
  }
  recovered_100080f0(local_58);
  recovered_10008700(&local_b8);
  return;
}

#undef DAT_10010f2c
#undef DAT_10011138
#undef LAB_1000e3fd
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_38
#undef uStack_50

#undef PTR_recovered_1000e250_100121d0
#define PTR_recovered_1000e250_100121d0 (*(void * *)(((uintptr_t)pf_module_state + 0x1df4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e450
 */

void * recovered_1000e450(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000e250_100121d0;
  return puVar1;
}

#undef PTR_recovered_1000e250_100121d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e470
 */

void recovered_1000e470(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e480
 */

void recovered_1000e480(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e490
 */

void recovered_1000e490(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  undefined1 uVar10;
  undefined8 uVar9;
  ulong uVar11;
  char cVar12;
  long lVar13;

  puVar2 = *(uint **)engine;
  lVar3 = *(long *)arguments;
  lVar4 = *(long *)(lVar3 + 0x20);
  lVar5 = *(long *)(lVar3 + 0x58);
  lVar8 = -0x80000000LL;
  if (-0x80000000LL < lVar4) {
    lVar8 = lVar4;
  }
  if (0x7ffffffe < lVar8) {
    lVar8 = 0x7fffffff;
  }
  lVar13 = -0x80000000LL;
  if (-0x80000000LL < lVar5) {
    lVar13 = lVar5;
  }
  if (0x7ffffffe < lVar13) {
    lVar13 = 0x7fffffff;
  }
  if (((puVar2 != (uint *)0x0) && (lVar6 = *(long *)(puVar2 + 2), lVar6 != 0)) &&
     (uVar1 = *puVar2, 0 < (int)uVar1)) {
    if ((((uint)lVar13 <= puVar2[1]) && ((uint)lVar8 <= uVar1)) &&
       ((0 < lVar5 && ((0 < lVar4 && (0 < (int)puVar2[1])))))) {
      uVar9 = *(undefined8 *)(lVar3 + 0x90);
      uVar11 = (ulong)(((uint)lVar8 + uVar1 * ((uint)lVar13 - 1)) - 1);
      lVar4 = uVar11 * 4;
      lVar3 = uVar11 * 4 + 1;
      cVar12 = (char)((ulong)uVar9 >> 0x18);
      uVar10 = (undefined1)((ulong)uVar9 >> 8);
      uVar7 = (undefined1)((ulong)uVar9 >> 0x10);
      if (cVar12 == '\0') {
        *(undefined1 *)(lVar6 + lVar4) = uVar7;
        *(undefined1 *)(*(long *)(puVar2 + 2) + lVar3) = uVar10;
        *(char *)(*(long *)(puVar2 + 2) + 2 + lVar4) = (char)uVar9;
        uVar9 = 0xff;
      }
      else {
        *(char *)(lVar6 + lVar4) = cVar12;
        *(undefined1 *)(*(long *)(puVar2 + 2) + lVar3) = uVar7;
        *(undefined1 *)(*(long *)(puVar2 + 2) + 2 + lVar4) = uVar10;
      }
      *(char *)(*(long *)(puVar2 + 2) + 3 + lVar4) = (char)uVar9;
    }
  }
  return;
}


#undef PTR_recovered_1000e470_10012218
#define PTR_recovered_1000e470_10012218 (*(void * *)(((uintptr_t)pf_module_state + 0x1e3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5a0
 */

void * recovered_1000e5a0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000e470_10012218;
  return puVar1;
}

#undef PTR_recovered_1000e470_10012218

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5c0
 */

void recovered_1000e5c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5d0
 */

void recovered_1000e5d0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_10011144
#define DAT_10011144 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd68U)))
#undef LAB_1000eb5b
#define LAB_1000eb5b (*(uint8_t *)(0x1000eb5bU))
#define local_d0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_c8 (*(undefined4 *)(pf_stack_frame + 40))
#define local_b0 (*(code * *)(pf_stack_frame + 64))
#define local_a8 (*(undefined * *)(pf_stack_frame + 72))
#define local_a0 (*(undefined1 * *)(pf_stack_frame + 80))
#define auStack_d8 (*(undefined1 (*)[216])(pf_stack_frame + 24))
#define local_98 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_78 (*(char * *)(pf_stack_frame + 120))
#define local_70 (*(byte * *)(pf_stack_frame + 128))
#define local_68 (*(long * *)(pf_stack_frame + 136))
#define local_60 (*(undefined8 * *)(pf_stack_frame + 144))
#define local_58 (*(char * *)(pf_stack_frame + 152))
#define local_50 (*(byte * *)(pf_stack_frame + 160))
#define local_48 (*(ulong *)(pf_stack_frame + 168))
#define local_40 (*(byte * *)(pf_stack_frame + 176))
#define local_38 (*(undefined8 *)(pf_stack_frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5e0
 */

void recovered_1000e5e0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  byte *pbVar11;
  byte bVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined1 uVar18;
  uint uVar17;
  long lVar19;
  undefined1 uVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;

  local_a0 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 240) + -8);
  local_90 = auStack_d8;
  pbVar11 = *(byte **)arguments;
  pbVar22 = *(byte **)(pbVar11 + 0x80);
  local_b0 = recovered_10008040;
  local_a8 = &DAT_10011144;
  local_98 = &LAB_1000eb5b;
  recovered_100086e0(&local_d0);
  if (pbVar22 == (byte *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    local_c8 = 1;
    local_68 = arguments;
    local_60 = engine;
    local_40 = pbVar11;
    local_38 = pbVar22;
    pcVar10 = recovered_10008090((long)(pbVar22 + 1));
    *pcVar10 = '\0';
    recovered_100080f0((void *)0x0);
    pbVar11 = &DAT_10010f2c;
    if (*(byte **)(local_40 + 0x78) != (byte *)0x0) {
      pbVar11 = *(byte **)(local_40 + 0x78);
    }
    if (*(long *)(local_40 + 0x80) != 0) {
      pbVar13 = pbVar11 + *(long *)(local_40 + 0x80);
      pbVar22 = (byte *)0x0;
      pbVar16 = local_38;
      local_50 = pbVar13;
      do {
        bVar12 = *pbVar11;
        uVar15 = (ulong)bVar12;
        if ((0x23 < uVar15) || ((0x900002600U >> (uVar15 & 0x3f) & 1) == 0)) {
          if (pbVar22 == pbVar16) {
            pbVar21 = (byte *)((long)(uintptr_t)pbVar22 * 2);
            if (pbVar22 == (byte *)0x0) {
              pbVar21 = (byte *)0x10;
            }
            if (pbVar21 <= pbVar22) goto LAB_1000e7aa;
            local_c8 = 2;
            local_78 = pcVar10;
            local_70 = pbVar21;
            local_58 = pcVar10;
            local_48 = uVar15;
            local_40 = pbVar22;
            local_38 = pbVar11;
            pcVar10 = recovered_10008090((ulong)pbVar21 | 1);
            pbVar22 = local_40;
            *pcVar10 = '\0';
            if (local_40 != (byte *)0x0) {
              if (local_40 < (byte *)0x4) {
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar11 = (byte *)0x0;
                if (0x1f < (ulong)((long)pcVar10 - (long)local_78)) {
                  if (local_40 < (byte *)0x20) {
                    pbVar13 = (byte *)0x0;
                  }
                  else {
                    pbVar11 = (byte *)((ulong)local_40 & 0xffffffffffffffe0);
                    pbVar13 = (byte *)0x0;
                    do {
                      uVar7 = *(undefined8 *)(local_78 + (long)pbVar13 + 8);
                      uVar8 = *(undefined8 *)(local_78 + 0x10 + (long)pbVar13);
                      uVar9 = *(undefined8 *)(local_78 + 0x10 + (long)pbVar13 + 8);
                      *(undefined8 *)(pcVar10 + (long)pbVar13) =
                           *(undefined8 *)(local_78 + (long)pbVar13);
                      *(undefined8 *)(pcVar10 + (long)pbVar13 + 8) = uVar7;
                      *(undefined8 *)(pcVar10 + 0x10 + (long)pbVar13) = uVar8;
                      *(undefined8 *)(pcVar10 + 0x10 + (long)pbVar13 + 8) = uVar9;
                      pbVar13 = pbVar13 + 0x20;
                    } while (pbVar11 != pbVar13);
                    if (local_40 == pbVar11) goto LAB_1000e6c2;
                    pbVar13 = pbVar11;
                    if (((ulong)local_40 & 0x1c) == 0) goto LAB_1000e878;
                  }
                  pbVar11 = (byte *)((ulong)local_40 & 0xfffffffffffffffc);
                  do {
                    *(undefined4 *)(pcVar10 + (long)pbVar13) =
                         *(undefined4 *)(local_78 + (long)pbVar13);
                    pbVar13 = pbVar13 + 4;
                  } while (pbVar11 != pbVar13);
                  if (local_40 == pbVar11) goto LAB_1000e6c2;
                }
              }
LAB_1000e878:
              uVar15 = (ulong)local_40 & 3;
              pbVar13 = pbVar11;
              if (uVar15 != 0) {
                do {
                  pcVar10[(long)pbVar13] = local_78[(long)pbVar13];
                  pbVar13 = pbVar13 + 1;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              if ((ulong)((long)pbVar11 - (long)local_40) < 0xfffffffffffffffd) {
                do {
                  pcVar10[(long)pbVar13] = local_78[(long)pbVar13];
                  (pcVar10 + 1)[(long)pbVar13] = (local_78 + 1)[(long)pbVar13];
                  (pcVar10 + 2)[(long)pbVar13] = (local_78 + 2)[(long)pbVar13];
                  (pcVar10 + 3)[(long)pbVar13] = (local_78 + 3)[(long)pbVar13];
                  pbVar13 = pbVar13 + 4;
                } while (local_40 != pbVar13);
              }
            }
LAB_1000e6c2:
            pcVar10[(long)local_40] = '\0';
            recovered_100080f0(local_78);
            bVar12 = (byte)local_48;
            pbVar13 = local_50;
            pbVar11 = local_38;
            pbVar16 = local_70;
          }
          else {
LAB_1000e7aa:
            if (pcVar10 == (char *)0x0) {
              local_58 = (char *)0x0;
              local_c8 = 3;
              local_48 = uVar15;
              local_40 = pbVar22;
              local_38 = pbVar11;
              pcVar10 = recovered_10008090(1);
              *pcVar10 = '\0';
              pbVar16 = (byte *)0x0;
              bVar12 = (byte)local_48;
              pbVar13 = local_50;
              pbVar11 = local_38;
              pbVar22 = local_40;
            }
          }
          pcVar10[(long)pbVar22] = bVar12;
          (pcVar10 + 1)[(long)pbVar22] = '\0';
          pbVar22 = pbVar22 + 1;
        }
        pbVar11 = pbVar11 + 1;
      } while (pbVar11 != pbVar13);
      if ((byte *)0x1 < pbVar22) {
        if ((*pcVar10 == '0') && ((byte)(pcVar10[1] | 0x20U) == 0x78)) {
          if (pbVar22 != (byte *)0x2) {
            pbVar11 = pbVar22 + -2;
            if (pbVar11 < (byte *)0x4) {
              pbVar13 = (byte *)0x0;
            }
            else {
              if (pbVar11 < (byte *)0x20) {
                pbVar16 = (byte *)0x0;
              }
              else {
                pbVar13 = (byte *)((ulong)pbVar11 & 0xffffffffffffffe0);
                pbVar16 = (byte *)0x0;
                do {
                  uVar7 = *(undefined8 *)(pcVar10 + 2 + (long)pbVar16 + 8);
                  uVar8 = *(undefined8 *)(pcVar10 + 0x12 + (long)pbVar16);
                  uVar9 = *(undefined8 *)(pcVar10 + 0x12 + (long)pbVar16 + 8);
                  *(undefined8 *)(pcVar10 + (long)pbVar16) =
                       *(undefined8 *)(pcVar10 + 2 + (long)pbVar16);
                  *(undefined8 *)(pcVar10 + (long)pbVar16 + 8) = uVar7;
                  *(undefined8 *)(pcVar10 + 0x10 + (long)pbVar16) = uVar8;
                  *(undefined8 *)(pcVar10 + 0x10 + (long)pbVar16 + 8) = uVar9;
                  pbVar16 = pbVar16 + 0x20;
                } while (pbVar13 != pbVar16);
                if (pbVar11 == pbVar13) goto LAB_1000e9d2;
                pbVar16 = pbVar13;
                if (((ulong)pbVar11 & 0x1c) == 0) goto LAB_1000e9b7;
              }
              pbVar13 = (byte *)((ulong)pbVar11 & 0xfffffffffffffffc);
              do {
                *(undefined4 *)(pcVar10 + (long)pbVar16) =
                     *(undefined4 *)(pcVar10 + 2 + (long)pbVar16);
                pbVar16 = pbVar16 + 4;
              } while (pbVar13 != pbVar16);
              if (pbVar11 == pbVar13) goto LAB_1000e9d2;
            }
LAB_1000e9b7:
            pbVar13 = pbVar13 + 2;
            do {
              (pcVar10 + -2)[(long)pbVar13] = pcVar10[(long)pbVar13];
              pbVar13 = pbVar13 + 1;
            } while (pbVar22 != pbVar13);
          }
LAB_1000e9d2:
          (pcVar10 + -2)[(long)pbVar22] = '\0';
          pbVar22 = pbVar22 + -2;
        }
        if ((pbVar22 == (byte *)0x6) || (pbVar22 == (byte *)0x8)) {
          pbVar11 = (byte *)0x0;
          uVar23 = 0;
          do {
            cVar1 = pcVar10[(long)pbVar11];
            bVar12 = cVar1 - 0x30;
            if (9 < bVar12) {
              if ((byte)(cVar1 + 0x9fU) < 6) {
                bVar12 = cVar1 + 0xa9;
              }
              else {
                if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000e920;
                bVar12 = cVar1 - 0x37;
              }
            }
            uVar17 = uVar23 << 4;
            uVar23 = bVar12 | uVar17;
            pbVar11 = pbVar11 + 1;
          } while (pbVar22 != pbVar11);
          recovered_100080f0(pcVar10);
          puVar3 = (uint *)*local_60;
          lVar4 = *(long *)(*local_68 + 0x20);
          lVar5 = *(long *)(*local_68 + 0x58);
          lVar14 = -0x80000000LL;
          if (-0x80000000LL < lVar4) {
            lVar14 = lVar4;
          }
          if (0x7ffffffe < lVar14) {
            lVar14 = 0x7fffffff;
          }
          lVar19 = -0x80000000LL;
          if (-0x80000000LL < lVar5) {
            lVar19 = lVar5;
          }
          if (0x7ffffffe < lVar19) {
            lVar19 = 0x7fffffff;
          }
          if (((puVar3 != (uint *)0x0) && (lVar6 = *(long *)(puVar3 + 2), lVar6 != 0)) &&
             (uVar2 = *puVar3, 0 < (int)uVar2)) {
            if ((((uint)lVar19 <= puVar3[1]) && ((uint)lVar14 <= uVar2)) &&
               ((0 < lVar5 && ((0 < lVar4 && (0 < (int)puVar3[1])))))) {
              uVar15 = (ulong)(((uint)lVar14 + uVar2 * ((uint)lVar19 - 1)) - 1);
              lVar5 = uVar15 * 4;
              lVar4 = uVar15 * 4 + 1;
              uVar18 = (undefined1)(uVar17 >> 8);
              uVar20 = (undefined1)(uVar17 >> 0x10);
              if (uVar17 < 0x1000000) {
                *(undefined1 *)(lVar6 + lVar5) = uVar20;
                *(undefined1 *)(*(long *)(puVar3 + 2) + lVar4) = uVar18;
                *(char *)(*(long *)(puVar3 + 2) + 2 + lVar5) = (char)uVar23;
                uVar23 = 0xff;
              }
              else {
                *(char *)(lVar6 + lVar5) = (char)(uVar17 >> 0x18);
                *(undefined1 *)(*(long *)(puVar3 + 2) + lVar4) = uVar20;
                *(undefined1 *)(*(long *)(puVar3 + 2) + 2 + lVar5) = uVar18;
              }
              *(char *)(*(long *)(puVar3 + 2) + 3 + lVar5) = (char)uVar23;
            }
          }
          goto LAB_1000e928;
        }
      }
    }
  }
LAB_1000e920:
  recovered_100080f0(pcVar10);
LAB_1000e928:
  recovered_10008700(&local_d0);
  return;
}

#undef DAT_10010f2c
#undef DAT_10011144
#undef LAB_1000eb5b
#undef local_d0
#undef local_c8
#undef local_b0
#undef local_a8
#undef local_a0
#undef auStack_d8
#undef local_98
#undef local_90
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef PTR_recovered_1000e5c0_10012260
#define PTR_recovered_1000e5c0_10012260 (*(void * *)(((uintptr_t)pf_module_state + 0x1e84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ebc0
 */

void * recovered_1000ebc0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000e5c0_10012260;
  return puVar1;
}

#undef PTR_recovered_1000e5c0_10012260

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ebe0
 */

void recovered_1000ebe0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ebf0
 */

void recovered_1000ebf0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec00
 */

void recovered_1000ec00(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar2 = *(long *)(*(long *)arguments + 0x20);
  lVar1 = *(long *)(*(long *)arguments + 0x58);
  if (lVar2 < -0x7fffffff) {
    lVar2 = -0x80000000LL;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  lVar3 = -0x80000000LL;
  if (-0x80000000LL < lVar1) {
    lVar3 = lVar1;
  }
  if (0x7ffffffe < lVar3) {
    lVar3 = 0x7fffffff;
  }
  *(int *)((long)engine + 0x38) = (int)lVar2;
  *(int *)((long)engine + 0x3c) = (int)lVar3;
  return;
}


#undef PTR_recovered_1000ebe0_100122a8
#define PTR_recovered_1000ebe0_100122a8 (*(void * *)(((uintptr_t)pf_module_state + 0x1eccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec50
 */

void * recovered_1000ec50(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000ebe0_100122a8;
  return puVar1;
}

#undef PTR_recovered_1000ebe0_100122a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec70
 */

void recovered_1000ec70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec80
 */

void recovered_1000ec80(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec90
 */

void recovered_1000ec90(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;

  uVar4 = 1;
  if (1 < (long)*(ulong *)(*(long *)arguments + 0x20)) {
    uVar4 = *(ulong *)(*(long *)arguments + 0x20);
  }
  *(ulong *)((long)engine + 0x50) = uVar4;
  uVar3 = *(ulong *)((long)engine + 0x10);
  if (uVar3 < uVar4) {
    recovered_1000cae0((long *)((long)engine + 8),uVar4);
    uVar3 = *(ulong *)((long)engine + 0x10);
  }
  if (uVar3 < uVar4) {
    recovered_1000cae0((long *)((long)engine + 8),uVar4);
  }
  lVar1 = *(long *)((long)engine + 8);
  *(undefined1 *)(lVar1 + -0x28 + uVar4 * 0x28) = 0;
  *(undefined8 *)(lVar1 + -0x18 + uVar4 * 0x28) = 0;
  puVar2 = *(undefined1 **)(lVar1 + -0x20 + uVar4 * 0x28);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  *(undefined8 *)(lVar1 + uVar4 * 0x28 + -8) = 0;
  return;
}


#undef PTR_recovered_1000ec70_100122f0
#define PTR_recovered_1000ec70_100122f0 (*(void * *)(((uintptr_t)pf_module_state + 0x1f14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed20
 */

void * recovered_1000ed20(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000ec70_100122f0;
  return puVar1;
}

#undef PTR_recovered_1000ec70_100122f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed40
 */

void recovered_1000ed40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed50
 */

void recovered_1000ed50(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_10011150
#define DAT_10011150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef LAB_1000efac
#define LAB_1000efac (*(uint8_t *)(0x1000efacU))
#define local_38 (*(undefined8 *)(pf_stack_frame + 200))
#define auStack_e8 (*(undefined1 (*)[232])(pf_stack_frame + 24))
#define local_e0 (*(undefined1 * *)(pf_stack_frame + 32))
#define local_d8 (*(ulong *)(pf_stack_frame + 40))
#define local_c8 (*(undefined1 * *)(pf_stack_frame + 56))
#define local_c0 (*(ulong *)(pf_stack_frame + 64))
#define local_b0 (*(undefined8 *)(pf_stack_frame + 80))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 88))
#define local_90 (*(code * *)(pf_stack_frame + 112))
#define local_88 (*(undefined * *)(pf_stack_frame + 120))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 128))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 136))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 144))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 184))
#define local_58 (*(long *)(pf_stack_frame + 168))
#define local_50 (*(void * *)(pf_stack_frame + 176))
#define local_40 (*(undefined8 *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed60
 */

void recovered_1000ed60(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  local_80 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 256) + -8);
  local_70 = auStack_e8;
  lVar7 = *(long *)arguments;
  uVar8 = *(long *)(lVar7 + 0x28) + (ulong)(*(long *)(lVar7 + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar8;
  uVar6 = *(ulong *)((long)engine + 0x10);
  local_90 = recovered_10008040;
  local_88 = &DAT_10011150;
  local_78 = &LAB_1000efac;
  local_38 = engine;
  recovered_100086e0(&local_b0);
  if (uVar6 < uVar8) {
    local_a8 = 0xffffffff;
    recovered_1000cae0((long *)((long)engine + 8),uVar8);
    lVar7 = *(long *)arguments;
    uVar6 = *(ulong *)((long)local_38 + 0x10);
    uVar8 = *(long *)(lVar7 + 0x28) + (ulong)(*(long *)(lVar7 + 0x28) == 0);
  }
  pvVar2 = local_38;
  plVar4 = (long *)((long)engine + 8);
  if (uVar6 < uVar8) {
    local_a8 = 0xffffffff;
    recovered_1000cae0(plVar4,uVar8);
    lVar7 = *(long *)arguments;
    uVar6 = *(ulong *)((long)pvVar2 + 0x10);
  }
  lVar3 = *plVar4;
  local_58 = uVar8 * 5;
  lVar1 = lVar3 + uVar8 * 0x28;
  uVar8 = *(long *)(lVar7 + 0x60) + (ulong)(*(long *)(lVar7 + 0x60) == 0);
  local_38 = (void *)lVar3;
  if (uVar6 < uVar8) {
    local_a8 = 0xffffffff;
    recovered_1000cae0(plVar4,uVar8);
    lVar3 = *plVar4;
  }
  local_a8 = 0xffffffff;
  recovered_10009920((uint128 *)&local_e0,(char *)(lVar3 + uVar8 * 0x28 + -0x28));
  local_a8 = 1;
  recovered_10009920((uint128 *)&local_c8,(char *)(lVar1 + -0x28));
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  puVar5 = local_c8;
  if (local_c8 == (undefined1 *)0x0) {
    puVar5 = &DAT_10010f2c;
  }
  local_a8 = 2;
  recovered_1000d370((long *)&local_50,(long)puVar5,local_c0);
  puVar5 = &DAT_10010f2c;
  if (local_e0 != (undefined1 *)0x0) {
    puVar5 = local_e0;
  }
  local_a8 = 3;
  recovered_1000f060((long *)&local_50,(long)puVar5,local_d8);
  lVar7 = (long)local_38 + local_58 * 8;
  *(undefined1 *)(lVar7 + -0x28) = 1;
  if ((void **)(lVar7 + -0x20) != &local_50) {
    recovered_100080f0(*(void **)(lVar7 + -0x20));
    *(void **)(lVar7 + -0x20) = local_50;
    *(undefined8 *)(lVar7 + -0x18) = uStack_48;
    *(undefined8 *)(lVar7 + -0x10) = local_40;
    local_50 = (void *)0x0;
    uStack_48 = 0;
    local_40 = 0;
  }
  *(undefined8 *)(lVar7 + -8) = 0;
  recovered_100080f0(local_50);
  recovered_100080f0(local_c8);
  recovered_100080f0(local_e0);
  recovered_10008700(&local_b0);
  return;
}

#undef DAT_10010f2c
#undef DAT_10011150
#undef LAB_1000efac
#undef local_38
#undef auStack_e8
#undef local_e0
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_b0
#undef local_a8
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef uStack_48
#undef local_58
#undef local_50
#undef local_40

#undef PTR_recovered_1000ed40_10012338
#define PTR_recovered_1000ed40_10012338 (*(void * *)(((uintptr_t)pf_module_state + 0x1f5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f040
 */

void * recovered_1000f040(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000ed40_10012338;
  return puVar1;
}

#undef PTR_recovered_1000ed40_10012338

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f060
 */

long * recovered_1000f060(long *param_1,long param_2,ulong param_3)

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
LAB_1000f0a0:
    if (uVar13 != uVar6) goto code_r0x1000f0a5;
    uVar6 = uVar15 - uVar13;
    if (param_3 <= uVar15 - uVar13) {
      uVar6 = param_3;
    }
    param_3 = uVar6;
    uVar6 = uVar15 + param_3;
    puVar8 = puVar7;
    if (uVar6 <= (ulong)param_1[2]) goto LAB_1000f430;
    puVar8 = recovered_10008090(uVar6 + 1);
    *puVar8 = 0;
    pvVar2 = (void *)*param_1;
    uVar9 = param_1[1];
    if (uVar9 == 0) goto LAB_1000f40f;
    uVar11 = 0;
    if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)pvVar2) < 0x20)) goto LAB_1000f3a5;
    if (uVar9 < 0x20) {
      uVar10 = 0;
      goto LAB_1000f37a;
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
LAB_1000f37a:
        uVar11 = uVar9 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar8 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar11 != uVar10);
        if (uVar9 == uVar11) goto LAB_1000f40f;
      }
LAB_1000f3a5:
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
LAB_1000f40f:
    puVar8[uVar9] = 0;
    recovered_100080f0(pvVar2);
    *param_1 = (long)puVar8;
    param_1[2] = uVar6;
LAB_1000f430:
    if (param_3 == 0) goto LAB_1000f31e;
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
    goto LAB_1000f31b;
  }
  uVar15 = param_1[1];
LAB_1000f0b3:
  uVar15 = uVar15 + param_3;
  if (uVar15 <= (ulong)param_1[2]) goto LAB_1000f276;
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
        if (uVar6 == uVar13) goto LAB_1000f25f;
        uVar9 = uVar13;
        if ((uVar6 & 0x1c) == 0) goto LAB_1000f1f5;
      }
      uVar13 = uVar6 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar7 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar13 != uVar9);
      if (uVar6 == uVar13) goto LAB_1000f25f;
    }
LAB_1000f1f5:
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
LAB_1000f25f:
  puVar7[uVar6] = 0;
  recovered_100080f0(pvVar2);
  *param_1 = (long)puVar7;
  param_1[2] = uVar15;
LAB_1000f276:
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
LAB_1000f31b:
  puVar8 = (undefined1 *)*param_1;
LAB_1000f31e:
  lVar14 = param_3 + param_1[1];
  param_1[1] = lVar14;
  puVar8[lVar14] = 0;
  return param_1;
code_r0x1000f0a5:
  uVar6 = uVar6 + 1;
  if (uVar15 < uVar6) goto LAB_1000f0b3;
  goto LAB_1000f0a0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f500
 */

void recovered_1000f500(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f510
 */

void recovered_1000f510(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
#undef DAT_1001115c
#define DAT_1001115c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef LAB_1000f6f8
#define LAB_1000f6f8 (*(uint8_t *)(0x1000f6f8U))
#define local_70 (*(ulong *)(pf_stack_frame + 128))
#define local_60 (*(long *)(pf_stack_frame + 144))
#define local_58 (*(long *)(pf_stack_frame + 152))
#define local_50 (*(long *)(pf_stack_frame + 160))
#define local_48 (*(void * *)(pf_stack_frame + 168))
#define local_38 (*(undefined8 *)(pf_stack_frame + 184))
#define auStack_d8 (*(undefined1 (*)[216])(pf_stack_frame + 24))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 176))
#define local_d0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_c8 (*(undefined4 *)(pf_stack_frame + 40))
#define local_b0 (*(code * *)(pf_stack_frame + 64))
#define local_a8 (*(undefined * *)(pf_stack_frame + 72))
#define local_a0 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_98 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f520
 */

void recovered_1000f520(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;

  local_a0 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 240) + -8);
  local_90 = auStack_d8;
  uVar4 = *(long *)(*(long *)arguments + 0x28) + (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar4;
  uVar3 = *(ulong *)((long)engine + 0x10);
  local_b0 = recovered_10008040;
  local_a8 = &DAT_1001115c;
  local_98 = &LAB_1000f6f8;
  recovered_100086e0(&local_d0);
  if (uVar3 < uVar4) {
    local_c8 = 0xffffffff;
    recovered_1000cae0((long *)((long)engine + 8),uVar4);
    uVar3 = *(ulong *)((long)engine + 0x10);
    uVar4 = *(long *)(*(long *)arguments + 0x28) +
            (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  }
  if (uVar3 < uVar4) {
    local_c8 = 0xffffffff;
    recovered_1000cae0((long *)((long)engine + 8),uVar4);
  }
  local_58 = *(long *)((long)engine + 8);
  local_50 = uVar4 * 5;
  local_c8 = 0xffffffff;
  recovered_10009920((uint128 *)&local_78,(char *)(local_58 + uVar4 * 0x28 + -0x28));
  local_60 = *(long *)arguments;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  puVar2 = local_78;
  if (local_78 == (undefined1 *)0x0) {
    puVar2 = &DAT_10010f2c;
  }
  local_c8 = 1;
  recovered_1000d370((long *)&local_48,(long)puVar2,local_70);
  puVar2 = &DAT_10010f2c;
  if (*(undefined1 **)(local_60 + 0x40) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(local_60 + 0x40);
  }
  local_c8 = 2;
  recovered_1000f060((long *)&local_48,(long)puVar2,*(ulong *)(local_60 + 0x48));
  lVar1 = local_58 + local_50 * 8;
  *(undefined1 *)(lVar1 + -0x28) = 1;
  if ((void **)(lVar1 + -0x20) != &local_48) {
    recovered_100080f0(*(void **)(lVar1 + -0x20));
    *(void **)(lVar1 + -0x20) = local_48;
    *(undefined8 *)(lVar1 + -0x18) = uStack_40;
    *(undefined8 *)(lVar1 + -0x10) = local_38;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_38 = 0;
  }
  *(undefined8 *)(lVar1 + -8) = 0;
  recovered_100080f0(local_48);
  recovered_100080f0(local_78);
  recovered_10008700(&local_d0);
  return;
}

#undef DAT_10010f2c
#undef DAT_1001115c
#undef LAB_1000f6f8
#undef local_70
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_38
#undef auStack_d8
#undef uStack_40
#undef local_d0
#undef local_c8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_78

#undef PTR_recovered_1000f500_10012380
#define PTR_recovered_1000f500_10012380 (*(void * *)(((uintptr_t)pf_module_state + 0x1fa4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f760
 */

void * recovered_1000f760(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000f500_10012380;
  return puVar1;
}

#undef PTR_recovered_1000f500_10012380

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f780
 */

void recovered_1000f780(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f790
 */

void recovered_1000f790(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f7a0
 */

void recovered_1000f7a0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  longlong lVar5;
  ulong uVar6;

  uVar6 = *(long *)(*(long *)arguments + 0x28) + (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar6;
  uVar4 = *(ulong *)((long)engine + 0x10);
  if (uVar4 < uVar6) {
    recovered_1000cae0((long *)((long)engine + 8),uVar6);
    uVar4 = *(ulong *)((long)engine + 0x10);
    uVar6 = *(long *)(*(long *)arguments + 0x28) +
            (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  }
  if (uVar4 < uVar6) {
    recovered_1000cae0((long *)((long)engine + 8),uVar6);
  }
  lVar1 = *(long *)((long)engine + 8);
  lVar5 = recovered_10009b40((void *)(lVar1 + uVar6 * 0x28 + -0x28));
  lVar2 = *(long *)(*(long *)arguments + 0x58);
  *(undefined1 *)(lVar1 + -0x28 + uVar6 * 0x28) = 2;
  *(longlong *)(lVar1 + -8 + uVar6 * 0x28) = lVar5 + lVar2;
  *(undefined8 *)(lVar1 + -0x18 + uVar6 * 0x28) = 0;
  puVar3 = *(undefined1 **)(lVar1 + -0x20 + uVar6 * 0x28);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  return;
}


#undef PTR_recovered_1000f780_100123c8
#define PTR_recovered_1000f780_100123c8 (*(void * *)(((uintptr_t)pf_module_state + 0x1fecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f850
 */

void * recovered_1000f850(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000f780_100123c8;
  return puVar1;
}

#undef PTR_recovered_1000f780_100123c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f870
 */

void recovered_1000f870(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f880
 */

void recovered_1000f880(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f890
 */

void recovered_1000f890(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  longlong lVar5;
  longlong lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  lVar4 = *(long *)arguments;
  uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar9;
  uVar7 = *(ulong *)((long)engine + 0x10);
  if (uVar7 < uVar9) {
    recovered_1000cae0((long *)((long)engine + 8),uVar9);
    lVar4 = *(long *)arguments;
    uVar7 = *(ulong *)((long)engine + 0x10);
    uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  }
  plVar1 = (long *)((long)engine + 8);
  if (uVar7 < uVar9) {
    recovered_1000cae0(plVar1,uVar9);
    lVar4 = *(long *)arguments;
    uVar7 = *(ulong *)((long)engine + 0x10);
  }
  lVar8 = *plVar1;
  lVar2 = lVar8 + uVar9 * 0x28;
  lVar3 = lVar8 + uVar9 * 0x28;
  uVar9 = *(long *)(lVar4 + 0x60) + (ulong)(*(long *)(lVar4 + 0x60) == 0);
  if (uVar7 < uVar9) {
    recovered_1000cae0(plVar1,uVar9);
    lVar8 = *plVar1;
  }
  lVar5 = recovered_10009b40((void *)(lVar8 + uVar9 * 0x28 + -0x28));
  lVar6 = recovered_10009b40((void *)(lVar3 + -0x28));
  *(undefined1 *)(lVar2 + -0x28) = 2;
  *(longlong *)(lVar2 + -8) = lVar6 + lVar5;
  *(undefined8 *)(lVar2 + -0x18) = 0;
  if (*(undefined1 **)(lVar2 + -0x20) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar2 + -0x20) = 0;
  }
  return;
}


#undef PTR_recovered_1000f870_10012410
#define PTR_recovered_1000f870_10012410 (*(void * *)(((uintptr_t)pf_module_state + 0x2034U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f970
 */

void * recovered_1000f970(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000f870_10012410;
  return puVar1;
}

#undef PTR_recovered_1000f870_10012410

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f990
 */

void recovered_1000f990(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f9a0
 */

void recovered_1000f9a0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f9b0
 */

void recovered_1000f9b0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  longlong lVar5;
  ulong uVar6;

  uVar6 = *(long *)(*(long *)arguments + 0x28) + (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar6;
  uVar4 = *(ulong *)((long)engine + 0x10);
  if (uVar4 < uVar6) {
    recovered_1000cae0((long *)((long)engine + 8),uVar6);
    uVar4 = *(ulong *)((long)engine + 0x10);
    uVar6 = *(long *)(*(long *)arguments + 0x28) +
            (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  }
  if (uVar4 < uVar6) {
    recovered_1000cae0((long *)((long)engine + 8),uVar6);
  }
  lVar1 = *(long *)((long)engine + 8);
  lVar5 = recovered_10009b40((void *)(lVar1 + uVar6 * 0x28 + -0x28));
  lVar2 = *(long *)(*(long *)arguments + 0x58);
  *(undefined1 *)(lVar1 + -0x28 + uVar6 * 0x28) = 2;
  *(longlong *)(lVar1 + -8 + uVar6 * 0x28) = lVar5 - lVar2;
  *(undefined8 *)(lVar1 + -0x18 + uVar6 * 0x28) = 0;
  puVar3 = *(undefined1 **)(lVar1 + -0x20 + uVar6 * 0x28);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  return;
}


#undef PTR_recovered_1000f990_10012458
#define PTR_recovered_1000f990_10012458 (*(void * *)(((uintptr_t)pf_module_state + 0x207cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fa60
 */

void * recovered_1000fa60(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000f990_10012458;
  return puVar1;
}

#undef PTR_recovered_1000f990_10012458

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fa80
 */

void recovered_1000fa80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fa90
 */

void recovered_1000fa90(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000faa0
 */

void recovered_1000faa0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  longlong lVar5;
  longlong lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  lVar4 = *(long *)arguments;
  uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar9;
  uVar7 = *(ulong *)((long)engine + 0x10);
  if (uVar7 < uVar9) {
    recovered_1000cae0((long *)((long)engine + 8),uVar9);
    lVar4 = *(long *)arguments;
    uVar7 = *(ulong *)((long)engine + 0x10);
    uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  }
  plVar1 = (long *)((long)engine + 8);
  if (uVar7 < uVar9) {
    recovered_1000cae0(plVar1,uVar9);
    lVar4 = *(long *)arguments;
    uVar7 = *(ulong *)((long)engine + 0x10);
  }
  lVar8 = *plVar1;
  lVar2 = lVar8 + uVar9 * 0x28;
  lVar3 = lVar8 + uVar9 * 0x28;
  uVar9 = *(long *)(lVar4 + 0x60) + (ulong)(*(long *)(lVar4 + 0x60) == 0);
  if (uVar7 < uVar9) {
    recovered_1000cae0(plVar1,uVar9);
    lVar8 = *plVar1;
  }
  lVar5 = recovered_10009b40((void *)(lVar8 + uVar9 * 0x28 + -0x28));
  lVar6 = recovered_10009b40((void *)(lVar3 + -0x28));
  *(undefined1 *)(lVar2 + -0x28) = 2;
  *(longlong *)(lVar2 + -8) = lVar6 - lVar5;
  *(undefined8 *)(lVar2 + -0x18) = 0;
  if (*(undefined1 **)(lVar2 + -0x20) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar2 + -0x20) = 0;
  }
  return;
}


#undef PTR_recovered_1000fa80_100124a0
#define PTR_recovered_1000fa80_100124a0 (*(void * *)(((uintptr_t)pf_module_state + 0x20c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fb80
 */

void * recovered_1000fb80(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000fa80_100124a0;
  return puVar1;
}

#undef PTR_recovered_1000fa80_100124a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fba0
 */

void recovered_1000fba0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fbb0
 */

void recovered_1000fbb0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fbc0
 */

void recovered_1000fbc0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  longlong lVar5;
  ulong uVar6;

  uVar6 = *(long *)(*(long *)arguments + 0x28) + (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar6;
  uVar4 = *(ulong *)((long)engine + 0x10);
  if (uVar4 < uVar6) {
    recovered_1000cae0((long *)((long)engine + 8),uVar6);
    uVar4 = *(ulong *)((long)engine + 0x10);
    uVar6 = *(long *)(*(long *)arguments + 0x28) +
            (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  }
  if (uVar4 < uVar6) {
    recovered_1000cae0((long *)((long)engine + 8),uVar6);
  }
  lVar1 = *(long *)((long)engine + 8);
  lVar5 = recovered_10009b40((void *)(lVar1 + uVar6 * 0x28 + -0x28));
  lVar2 = *(long *)(*(long *)arguments + 0x58);
  *(undefined1 *)(lVar1 + -0x28 + uVar6 * 0x28) = 2;
  *(longlong *)(lVar1 + -8 + uVar6 * 0x28) = lVar5 * lVar2;
  *(undefined8 *)(lVar1 + -0x18 + uVar6 * 0x28) = 0;
  puVar3 = *(undefined1 **)(lVar1 + -0x20 + uVar6 * 0x28);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  return;
}


#undef PTR_recovered_1000fba0_100124e8
#define PTR_recovered_1000fba0_100124e8 (*(void * *)(((uintptr_t)pf_module_state + 0x210cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fc70
 */

void * recovered_1000fc70(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000fba0_100124e8;
  return puVar1;
}

#undef PTR_recovered_1000fba0_100124e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fc90
 */

void recovered_1000fc90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fca0
 */

void recovered_1000fca0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fcb0
 */

void recovered_1000fcb0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  longlong lVar5;
  longlong lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  lVar4 = *(long *)arguments;
  uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar9;
  uVar7 = *(ulong *)((long)engine + 0x10);
  if (uVar7 < uVar9) {
    recovered_1000cae0((long *)((long)engine + 8),uVar9);
    lVar4 = *(long *)arguments;
    uVar7 = *(ulong *)((long)engine + 0x10);
    uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  }
  plVar1 = (long *)((long)engine + 8);
  if (uVar7 < uVar9) {
    recovered_1000cae0(plVar1,uVar9);
    lVar4 = *(long *)arguments;
    uVar7 = *(ulong *)((long)engine + 0x10);
  }
  lVar8 = *plVar1;
  lVar2 = lVar8 + uVar9 * 0x28;
  lVar3 = lVar8 + uVar9 * 0x28;
  uVar9 = *(long *)(lVar4 + 0x60) + (ulong)(*(long *)(lVar4 + 0x60) == 0);
  if (uVar7 < uVar9) {
    recovered_1000cae0(plVar1,uVar9);
    lVar8 = *plVar1;
  }
  lVar5 = recovered_10009b40((void *)(lVar8 + uVar9 * 0x28 + -0x28));
  lVar6 = recovered_10009b40((void *)(lVar3 + -0x28));
  *(undefined1 *)(lVar2 + -0x28) = 2;
  *(longlong *)(lVar2 + -8) = lVar6 * lVar5;
  *(undefined8 *)(lVar2 + -0x18) = 0;
  if (*(undefined1 **)(lVar2 + -0x20) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar2 + -0x20) = 0;
  }
  return;
}


#undef PTR_recovered_1000fc90_10012530
#define PTR_recovered_1000fc90_10012530 (*(void * *)(((uintptr_t)pf_module_state + 0x2154U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fda0
 */

void * recovered_1000fda0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000fc90_10012530;
  return puVar1;
}

#undef PTR_recovered_1000fc90_10012530

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fdc0
 */

void recovered_1000fdc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fdd0
 */

void recovered_1000fdd0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fde0
 */

void recovered_1000fde0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;

  lVar1 = *(long *)(*(long *)arguments + 0x28);
  uVar5 = lVar1 + (ulong)(lVar1 == 0);
  uVar2 = *(ulong *)(*(long *)arguments + 0x58);
  *(ulong *)((long)engine + 0x50) = uVar5;
  uVar4 = *(ulong *)((long)engine + 0x10);
  if (uVar4 < uVar5) {
    recovered_1000cae0((long *)((long)engine + 8),uVar5);
    uVar4 = *(ulong *)((long)engine + 0x10);
    uVar5 = *(long *)(*(long *)arguments + 0x28) +
            (ulong)(*(long *)(*(long *)arguments + 0x28) == 0);
  }
  if (uVar4 < uVar5) {
    recovered_1000cae0((long *)((long)engine + 8),uVar5);
  }
  lVar3 = *(long *)((long)engine + 8);
  lVar1 = lVar3 + uVar5 * 0x28;
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = recovered_10009b40((void *)(lVar3 + uVar5 * 0x28 + -0x28));
    if ((uVar4 | uVar2) >> 0x20 == 0) {
      uVar4 = (uVar4 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar4 = (long)uVar4 / (long)uVar2;
    }
  }
  *(undefined1 *)(lVar1 + -0x28) = 2;
  *(ulong *)(lVar1 + -8) = uVar4;
  *(undefined8 *)(lVar1 + -0x18) = 0;
  if (*(undefined1 **)(lVar1 + -0x20) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar1 + -0x20) = 0;
  }
  return;
}


#undef PTR_recovered_1000fdc0_10012578
#define PTR_recovered_1000fdc0_10012578 (*(void * *)(((uintptr_t)pf_module_state + 0x219cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000feb0
 */

void * recovered_1000feb0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000fdc0_10012578;
  return puVar1;
}

#undef PTR_recovered_1000fdc0_10012578

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fed0
 */

void recovered_1000fed0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fee0
 */

void recovered_1000fee0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fef0
 */

void recovered_1000fef0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  lVar4 = *(long *)arguments;
  uVar6 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  *(ulong *)((long)engine + 0x50) = uVar6;
  uVar5 = *(ulong *)((long)engine + 0x10);
  if (uVar5 < uVar6) {
    recovered_1000cae0((long *)((long)engine + 8),uVar6);
    lVar4 = *(long *)arguments;
    uVar5 = *(ulong *)((long)engine + 0x10);
    uVar6 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  }
  plVar1 = (long *)((long)engine + 8);
  if (uVar5 < uVar6) {
    recovered_1000cae0(plVar1,uVar6);
    lVar4 = *(long *)arguments;
    uVar5 = *(ulong *)((long)engine + 0x10);
  }
  lVar3 = *plVar1;
  uVar7 = *(long *)(lVar4 + 0x60) + (ulong)(*(long *)(lVar4 + 0x60) == 0);
  lVar4 = lVar3;
  if (uVar5 < uVar7) {
    recovered_1000cae0(plVar1,uVar7);
    lVar4 = *plVar1;
  }
  lVar2 = lVar3 + uVar6 * 0x28;
  uVar5 = recovered_10009b40((void *)(lVar4 + uVar7 * 0x28 + -0x28));
  if (uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = recovered_10009b40((void *)(lVar3 + uVar6 * 0x28 + -0x28));
    if ((uVar6 | uVar5) >> 0x20 == 0) {
      uVar6 = (uVar6 & 0xffffffff) / (uVar5 & 0xffffffff);
    }
    else {
      uVar6 = (long)uVar6 / (long)uVar5;
    }
  }
  *(undefined1 *)(lVar2 + -0x28) = 2;
  *(ulong *)(lVar2 + -8) = uVar6;
  *(undefined8 *)(lVar2 + -0x18) = 0;
  if (*(undefined1 **)(lVar2 + -0x20) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar2 + -0x20) = 0;
  }
  return;
}


#undef PTR_recovered_1000fed0_100125c0
#define PTR_recovered_1000fed0_100125c0 (*(void * *)(((uintptr_t)pf_module_state + 0x21e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010000
 */

void * recovered_10010000(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_1000fed0_100125c0;
  return puVar1;
}

#undef PTR_recovered_1000fed0_100125c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010020
 */

void recovered_10010020(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010030
 */

void recovered_10010030(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100080f0(param_1);
  return;
}


#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010040
 */

void recovered_10010040(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  char cVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;

  lVar5 = *(long *)arguments;
  uVar9 = *(long *)(lVar5 + 0x28) + (ulong)(*(long *)(lVar5 + 0x28) == 0);
  plVar1 = (long *)((long)engine + 8);
  uVar6 = *(ulong *)((long)engine + 0x10);
  if (uVar6 < uVar9) {
    recovered_1000cae0(plVar1,uVar9);
    lVar5 = *(long *)arguments;
    uVar6 = *(ulong *)((long)engine + 0x10);
  }
  lVar3 = *plVar1;
  lVar8 = lVar3 + uVar9 * 0x28;
  uVar9 = *(long *)(lVar5 + 0x60) + (ulong)(*(long *)(lVar5 + 0x60) == 0);
  if (uVar6 < uVar9) {
    recovered_1000cae0(plVar1,uVar9);
    lVar3 = *plVar1;
  }
  cVar2 = *(char *)(lVar8 + -0x28);
  if (cVar2 != *(char *)(lVar3 + -0x28 + uVar9 * 0x28)) {
    return;
  }
  if (cVar2 != '\0') {
    lVar3 = lVar3 + uVar9 * 0x28;
    if (cVar2 == '\x02') {
      if (*(long *)(lVar8 + -8) != *(long *)(lVar3 + -8)) {
        return;
      }
    }
    else {
      if (cVar2 != '\x01') {
        return;
      }
      puVar4 = *(undefined1 **)(lVar8 + -0x20);
      lVar5 = *(long *)(lVar8 + -0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_10010f2c;
      }
      puVar7 = *(undefined1 **)(lVar3 + -0x20);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_10010f2c;
      }
      if (lVar5 != *(long *)(lVar3 + -0x18)) {
        return;
      }
      if (lVar5 != 0) {
        lVar8 = 0;
        do {
          if (puVar4[lVar8] != puVar7[lVar8]) {
            return;
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
      }
    }
  }
  if (*(byte *)((long)engine + 0x40) < 4) {
    *(char *)((long)engine + 0x40) = (char)(0x30201 >> ((*(byte *)((long)engine + 0x40) & 3) << 3));
  }
  return;
}

#undef DAT_10010f2c

#undef PTR_recovered_10010020_10012608
#define PTR_recovered_10010020_10012608 (*(void * *)(((uintptr_t)pf_module_state + 0x222cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010140
 */

void * recovered_10010140(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10008090(0x10);
  *puVar1 = &PTR_recovered_10010020_10012608;
  return puVar1;
}

#undef PTR_recovered_10010020_10012608

#undef DAT_10010f2c
#define DAT_10010f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010160
 */

long recovered_10010160(long *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;

  uVar8 = param_1[1];
  if (uVar8 == param_1[2]) {
    uVar6 = 4;
    if (uVar8 != 0) {
      uVar6 = uVar8 * 2;
    }
    if (uVar8 < uVar6) {
      pvVar5 = recovered_10008090(uVar6 * 0x28);
      if (param_1[1] != 0) {
        lVar9 = 0x20;
        uVar8 = 0;
        do {
          lVar3 = *param_1;
          *(undefined1 *)((long)pvVar5 + lVar9 + -0x20) = *(undefined1 *)(lVar3 + -0x20 + lVar9);
          *(undefined8 *)((long)pvVar5 + lVar9 + -0x18) = *(undefined8 *)(lVar3 + -0x18 + lVar9);
          puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar9);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar5 + lVar9 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar3 + -0x18 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar3 + -8 + lVar9) = 0;
          *(undefined8 *)((long)pvVar5 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          recovered_100080f0((void *)0x0);
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x28;
        } while (uVar8 < (ulong)param_1[1]);
      }
      recovered_100080f0((void *)*param_1);
      *param_1 = (long)pvVar5;
      param_1[2] = uVar6;
      uVar8 = param_1[1];
    }
  }
  lVar9 = *param_1;
  *(undefined1 *)(lVar9 + uVar8 * 0x28) = *param_2;
  puVar1 = (undefined8 *)(lVar9 + 8 + uVar8 * 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar9 + 0x18 + uVar8 * 0x28) = 0;
  puVar7 = &DAT_10010f2c;
  if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 8);
  }
  recovered_1000d370((long *)(lVar9 + uVar8 * 0x28 + 8),(long)puVar7,*(ulong *)(param_2 + 0x10));
  *(undefined8 *)(lVar9 + 0x20 + uVar8 * 0x28) = *(undefined8 *)(param_2 + 0x20);
  lVar9 = param_1[1];
  param_1[1] = lVar9 + 1;
  return lVar9 * 0x28 + *param_1;
}

#undef DAT_10010f2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100102b0
 */

long recovered_100102b0(long *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
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
      pvVar5 = recovered_10008090(uVar8 * 0x28);
      if (param_1[1] != 0) {
        lVar7 = 0x20;
        uVar6 = 0;
        do {
          lVar3 = *param_1;
          *(undefined1 *)((long)pvVar5 + lVar7 + -0x20) = *(undefined1 *)(lVar3 + -0x20 + lVar7);
          *(undefined8 *)((long)pvVar5 + lVar7 + -0x18) = *(undefined8 *)(lVar3 + -0x18 + lVar7);
          puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar5 + lVar7 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar3 + -0x18 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar3 + -8 + lVar7) = 0;
          *(undefined8 *)((long)pvVar5 + lVar7) = *(undefined8 *)(lVar3 + lVar7);
          recovered_100080f0((void *)0x0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x28;
        } while (uVar6 < (ulong)param_1[1]);
      }
      recovered_100080f0((void *)*param_1);
      *param_1 = (long)pvVar5;
      param_1[2] = uVar8;
      uVar6 = param_1[1];
    }
  }
  lVar7 = *param_1;
  *(undefined1 *)(lVar7 + uVar6 * 0x28) = *param_2;
  *(undefined8 *)(lVar7 + 8 + uVar6 * 0x28) = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar6 * 0x28);
  *puVar1 = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar4;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x20 + uVar6 * 0x28) = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = uVar6 + 1;
  return lVar7 + uVar6 * 0x28;
}

