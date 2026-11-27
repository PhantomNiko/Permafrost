/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100100f0
#define DAT_100100f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2541U)))
#undef DAT_100100f1
#define DAT_100100f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2542U)))
#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000560
 */

/* WARNING: Removing unreachable block (ram,0x1000059c) */

void recovered_10000560(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_100100f0 = 0;
    DAT_100100f1 = 0;
    recovered_100005c0();
    DAT_10010100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_100100f0
#undef DAT_100100f1
#undef DAT_10010100

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
#undef DAT_100100f0
#define DAT_100100f0 (*(char *)(((uintptr_t)pf_module_state + 0x2541U)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2549U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2559U)))
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
  if (DAT_100100f0 != '\0') {
    return;
  }
  DAT_100100f8 = 0;
  DAT_10010108 = 0;
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
      if (DAT_100100f8 != 0) goto LAB_10000899;
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
  if (DAT_10010108 == 0) {
    DAT_10010108 = DAT_100100f8;
  }
  DAT_100100f0 = 1;
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
#undef DAT_100100f0
#undef DAT_100100f8
#undef DAT_10010108
#undef _DAT_00280088
#undef _DAT_0028008c
#undef _DAT_00280238
#undef _DAT_0028023c
#undef local_438
#undef local_28

#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d0
 */

/* WARNING: Removing unreachable block (ram,0x1000090c) */

bool recovered_100008d0(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10000920((long)addresses,(long)sizes,count);
    DAT_10010100 = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_10010100

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_100100f1
#define DAT_100100f1 (*(char *)(((uintptr_t)pf_module_state + 0x2542U)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2549U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2559U)))
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
  if ((bVar3) || (DAT_100100f1 != '\0')) {
    return false;
  }
  DAT_100100f1 = 1;
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
      DAT_100100f1 = 0;
      return false;
    }
    if (plVar6 <= plVar1) {
      DAT_100100f1 = 0;
      return false;
    }
    if (plVar1 < (long *)0x10000000 && (long *)0x8000000 < plVar6) {
      if (plVar1 < (long *)0x8000000) {
        uVar7 = 0x8000000 - (long)plVar1;
        if (~(ulong)plVar1 < uVar7) {
          DAT_100100f1 = 0;
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
        DAT_100100f1 = 0;
        return false;
      }
    }
    else {
      if ((long *)0xfffffffffffffff0 < plVar1) {
        DAT_100100f1 = 0;
        return false;
      }
      uVar10 = ((ulong)((long)plVar1 + 0xf) & 0xfffffffffffffff0) - (long)plVar1;
      uVar8 = uVar7 - uVar10;
      if (uVar7 < uVar10 || uVar8 == 0) {
        DAT_100100f1 = 0;
        return false;
      }
      if ((uVar8 & 0xfffffffffffffff0) < 0x31) {
        DAT_100100f1 = 0;
        return false;
      }
    }
    plVar2 = DAT_100100f8;
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
          DAT_100100f1 = 0;
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
        DAT_100100f1 = 0;
        return false;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == param_3) {
      puVar5 = (ulong *)&DAT_100100f8;
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
      if (DAT_10010108 == (long *)0x0) {
        DAT_10010108 = DAT_100100f8;
      }
      DAT_100100f1 = 0;
      return local_38 != uVar8;
    }
  } while( true );
}

#undef DAT_10000001
#undef DAT_100100f1
#undef DAT_100100f8
#undef DAT_10010108
#undef local_38

#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
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

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    local_18 = address;
    local_10 = size;
    bVar2 = recovered_10000920((long)&local_18,(long)&local_10,1);
    DAT_10010100 = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_10010100
#undef local_18
#undef local_10

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2549U)))
#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
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

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  uVar4 = 0;
  for (plVar2 = DAT_100100f8; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      uVar4 = uVar4 + *plVar2;
    }
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_10010100 = 0;
  return (uint)uVar3;
}

#undef DAT_100100f8
#undef DAT_10010100

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2549U)))
#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
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

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  uVar2 = 0;
  for (plVar3 = DAT_100100f8; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    if ((char)plVar3[3] == '\x01') {
      uVar2 = uVar2 + *plVar3;
    }
  }
  DAT_10010100 = 0;
  return uVar2;
}

#undef DAT_100100f8
#undef DAT_10010100

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2549U)))
#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
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

  iVar2 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  uVar4 = 0;
  for (plVar1 = DAT_100100f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar4 = uVar4 + *plVar1;
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_10010100 = 0;
  return (uint)uVar3;
}

#undef DAT_100100f8
#undef DAT_10010100

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2549U)))
#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
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

  iVar2 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100005c0();
  uVar3 = 0;
  for (plVar1 = DAT_100100f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  DAT_10010100 = 0;
  return uVar3;
}

#undef DAT_100100f8
#undef DAT_10010100

#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dc0
 */

/* WARNING: Removing unreachable block (ram,0x10000dfc) */

void * recovered_10000dc0(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    puVar2 = recovered_10000e20(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10010100 = 0;
    return puVar2;
  }
  do {
  } while( true );
}

#undef DAT_10010100

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2549U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2559U)))
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
    puVar1 = DAT_100100f8;
    puVar5 = DAT_10010108;
    if (DAT_10010108 == (ulong *)0x0) {
      puVar5 = DAT_100100f8;
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
                          DAT_10010108 = (ulong *)puVar3[1];
                        }
                        else {
                          DAT_10010108 = (ulong *)((long)puVar3 + uVar9 + 0x20);
                          *(ulong *)((long)puVar3 + uVar9 + 0x20) = uVar8 - 0x20;
                          uVar11 = puVar3[1];
                          *(ulong *)((long)puVar3 + uVar9 + 0x28) = uVar11;
                          *(ulong **)((long)puVar3 + uVar9 + 0x30) = puVar3;
                          *(undefined1 *)((long)puVar3 + uVar9 + 0x38) = 1;
                          if (uVar11 != 0) {
                            *(ulong **)(uVar11 + 0x10) = DAT_10010108;
                          }
                          *puVar3 = uVar9;
                          puVar3[1] = (ulong)DAT_10010108;
                        }
                        *(undefined1 *)(puVar3 + 3) = 0;
                        if (DAT_10010108 == (ulong *)0x0) {
                          DAT_10010108 = DAT_100100f8;
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

#undef DAT_100100f8
#undef DAT_10010108

#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001020
 */

/* WARNING: Removing unreachable block (ram,0x1000105c) */

void * recovered_10001020(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    puVar2 = recovered_10000e20(size,(ulong *)0x0,(ulong *)limit);
    DAT_10010100 = 0;
    return puVar2;
  }
  do {
  } while( true );
}

#undef DAT_10010100

#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001080
 */

/* WARNING: Removing unreachable block (ram,0x100010bc) */

void * recovered_10001080(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
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
  DAT_10010100 = 0;
  return puVar2;
}

#undef DAT_10010100

#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e0
 */

/* WARNING: Removing unreachable block (ram,0x1000111c) */

void recovered_100010e0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001130((long)pointer);
    DAT_10010100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10010100

#undef DAT_10010108
#define DAT_10010108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2559U)))
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
        if (DAT_10010108 == puVar3) {
          DAT_10010108 = puVar2;
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
          if (DAT_10010108 == puVar2) {
            DAT_10010108 = puVar3;
          }
          puVar1[2] = (ulong)puVar3;
          puVar2 = puVar1;
        } while ((char)puVar1[3] != '\0');
      }
      puVar2 = puVar3;
    }
    DAT_10010108 = puVar2;
  }
  return;
}

#undef DAT_10010108

#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x2551U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2559U)))
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

  iVar8 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar8 != 0) {
    do {
    } while( true );
  }
  if (pointer == (void *)0x0) {
    puVar17 = recovered_10000e20(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10010100 = 0;
    return puVar17;
  }
  if (size == 0) {
    recovered_10001130((long)pointer);
    DAT_10010100 = 0;
    return (void *)0x0;
  }
  if (0xfffffffffffffff0 < size) {
    DAT_10010100 = 0;
    return (void *)0x0;
  }
  recovered_100005c0();
  uVar13 = size + 0xf & 0xfffffffffffffff0;
  puVar17 = (ulong *)((long)pointer + -0x20);
  uVar12 = *(ulong *)((long)pointer + -0x20);
  if (uVar13 <= uVar12) {
    if (uVar12 <= uVar13 - 1) {
      DAT_10010100 = 0;
      return (void *)0x0;
    }
    if (uVar12 - uVar13 < 0x30) {
      if (uVar12 < 0xffffffffffffffe0) {
        DAT_10010100 = 0;
        return pointer;
      }
      DAT_10010100 = 0;
      return (void *)0x0;
    }
    if (0xffffffffffffffb0 < size) {
      DAT_10010100 = 0;
      return (void *)0x0;
    }
    DAT_10010108 = (ulong *)((long)pointer + uVar13);
    *(ulong *)((long)pointer + uVar13) = (uVar12 - uVar13) - 0x20;
    lVar2 = *(long *)((long)pointer + -0x18);
    *(long *)((long)pointer + uVar13 + 8) = lVar2;
    *(ulong **)((long)pointer + uVar13 + 0x10) = puVar17;
    *(undefined1 *)((long)pointer + uVar13 + 0x18) = 1;
    if (lVar2 != 0) {
      *(ulong **)(lVar2 + 0x10) = DAT_10010108;
    }
    *(ulong *)((long)pointer + -0x20) = uVar13;
    *(ulong **)((long)pointer + -0x18) = DAT_10010108;
    DAT_10010100 = 0;
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
      puVar15 = DAT_10010108;
      do {
        if (((puVar9 == (ulong *)0x0) || ((char)puVar9[3] != '\x01')) ||
           ((0xffffffffffffffdf < uVar12 ||
            (((ulong *)((long)pointer + uVar12) != puVar9 || (-uVar12 - 0x21 < *puVar9)))))) break;
        if (puVar15 == puVar9) {
          puVar15 = puVar17;
          DAT_10010108 = puVar17;
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
        DAT_10010100 = 0;
        return (void *)0x0;
      }
      uVar10 = recovered_10006780(puVar17,uVar13);
      if ((char)uVar10 != '\0') {
        DAT_10010108 = *(ulong **)((long)pointer + -0x18);
      }
      *(undefined1 *)((long)pointer + -8) = 0;
      DAT_10010100 = 0;
      return pointer;
    }
  }
  puVar9 = recovered_10000e20(uVar13,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  if (puVar9 == (ulong *)0x0) {
    DAT_10010100 = 0;
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
  DAT_10010100 = 0;
  return puVar9;
}

#undef DAT_10010100
#undef DAT_10010108

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

void recovered_10001d60(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
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
LAB_10001d7f:
    if (param_3 == 0) {
      return;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)param_1 & 7) == 0) {
LAB_10001f6e:
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
                    goto LAB_10001f6e;
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
        if (uVar5 == uVar8) goto LAB_10001d7f;
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
    goto LAB_10001d7f;
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
        goto LAB_10001f90;
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
LAB_10001f90:
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
 * Address: 0x100021a0
 */

void recovered_100021a0(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
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
LAB_1000253a:
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
                      goto LAB_1000253a;
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
          if (uVar9 == uVar10) goto LAB_10002798;
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
LAB_10002798:
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
          goto LAB_1000255c;
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
LAB_1000255c:
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
LAB_1000232e:
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
                    goto LAB_1000232e;
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
        if (uVar9 == uVar10) goto LAB_100028fa;
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
LAB_100028fa:
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
        goto LAB_100029bf;
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
LAB_100029bf:
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
 * Address: 0x10002a60
 */

void recovered_10002a60(byte *param_1,byte param_2,ulong param_3)

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
LAB_10002bad:
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
                    goto LAB_10002bad;
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
        if (uVar4 == uVar7) goto LAB_10002ce1;
      }
      do {
        *(undefined8 *)param_1 = uVar3;
        param_1 = param_1 + 8;
        param_3 = param_3 - 8;
      } while (7 < param_3);
    }
  }
LAB_10002ce1:
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 4) {
LAB_10002cf0:
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
        goto LAB_10002cf0;
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

int recovered_10003380(ulong *param_1,ulong *param_2,ulong param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) goto LAB_100035b3;
    uVar11 = param_3;
    puVar8 = param_2;
    puVar10 = param_1;
    if (((ulong)param_1 & 7) != 0) {
      bVar1 = (byte)*param_1;
      bVar5 = (byte)*param_2;
      if (bVar1 != bVar5) {
LAB_10003513:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10003668:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)param_1 + 1);
      puVar8 = (ulong *)((long)param_2 + 1);
      uVar11 = param_3 - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10003513;
        puVar10 = (ulong *)((long)param_1 + 2);
        puVar8 = (ulong *)((long)param_2 + 2);
        uVar11 = param_3 - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10003513;
          puVar10 = (ulong *)((long)param_1 + 3);
          puVar8 = (ulong *)((long)param_2 + 3);
          uVar11 = param_3 - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10003513;
            puVar10 = (ulong *)((long)param_1 + 4);
            puVar8 = (ulong *)((long)param_2 + 4);
            uVar11 = param_3 - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10003513;
              puVar10 = (ulong *)((long)param_1 + 5);
              puVar8 = (ulong *)((long)param_2 + 5);
              uVar11 = param_3 - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10003513;
                puVar10 = (ulong *)((long)param_1 + 6);
                puVar8 = (ulong *)((long)param_2 + 6);
                uVar11 = param_3 - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10003513;
                  puVar10 = (ulong *)((long)param_1 + 7);
                  puVar8 = (ulong *)((long)param_2 + 7);
                  uVar11 = param_3 - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10003513;
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
    for (; 7 < param_3; param_3 = param_3 - 8) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10003680((byte *)param_1,(byte *)param_2);
        return iVar3;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_100035b3:
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

long recovered_10003800(long param_1)

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
 * Address: 0x10003830
 */

int recovered_10003830(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10003853;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10003853:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
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


#undef DAT_1000de5d
#define DAT_1000de5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f10
 */

undefined * recovered_10003f10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000de5d;
}

#undef DAT_1000de5d

#undef PTR_DAT_10010000
#define PTR_DAT_10010000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2451U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f20
 */

undefined ** recovered_10003f20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10010000;
}

#undef PTR_DAT_10010000

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
#define uStack_20 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 40))
#define local_28 (*(undefined1 (*)[40])(pf_stack_frame + 24))
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
#undef uStack_20
#undef uStack_18
#undef local_28

#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
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
          param_1 = param_1 * DAT_1000dbb0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0 *
                    DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0;
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

#undef DAT_1000dbb0

#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dc30
#define DAT_1000dc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000dc30
#define _DAT_1000dc30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
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
  dVar2 = (double)(_DAT_1000dc30 ^ (ulong)param_1);
  if ((double)(_DAT_1000dc30 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1000dbb8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000dbb0;
      iVar1 = iVar1 + 1;
    } while (DAT_1000dbb8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000dbb0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1000dc30 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1000dbb0
#undef DAT_1000dbb8
#undef DAT_1000dc30
#undef _DAT_1000dc30

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


#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
      return DAT_1000dbb8;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000dbb8;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000dbb8 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000dbb8

/* Native SSE truncation and floor selection; Pooka's Free Software License. */
double recovered_10004280(double value){
 int32_t truncated=(!(value>=-2147483648.0 && value<2147483648.0))?(-2147483647-1):(int32_t)value;
 return value<(double)truncated?(double)(int32_t)((uint32_t)truncated-1U):(double)truncated;
}


#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042b0
 */

double recovered_100042b0(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(value < (double)(int)value);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
  return (double)(~-(ulong)(dVar2 < value) & (ulong)dVar2 |
                 (ulong)(DAT_1000dbb8 + dVar2) & -(ulong)(dVar2 < value));
}

#undef DAT_1000dbb8

#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
    if (param_1 <= DAT_1000dbb8) {
      dVar1 = DAT_1000dbb8;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000dbb0;
  }
  return dVar1;
}

#undef DAT_1000dbb0
#undef DAT_1000dbb8

#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dbc0
#define DAT_1000dbc0 (*(double *)(((uintptr_t)pf_module_state + 0x11U)))
#undef DAT_1000dbc8
#define DAT_1000dbc8 (*(double *)(((uintptr_t)pf_module_state + 0x19U)))
#undef DAT_1000dbd0
#define DAT_1000dbd0 (*(double *)(((uintptr_t)pf_module_state + 0x21U)))
#undef DAT_1000dbd8
#define DAT_1000dbd8 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000dbe0
#define DAT_1000dbe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000dbe8
#define DAT_1000dbe8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000dc40
#define DAT_1000dc40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91U)))
#undef DAT_1000dc50
#define DAT_1000dc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef DAT_1000dc60
#define DAT_1000dc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef DAT_1000dc70
#define DAT_1000dc70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef _DAT_1000dbe0
#define _DAT_1000dbe0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef _DAT_1000dbe8
#define _DAT_1000dbe8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef _DAT_1000dc40
#define _DAT_1000dc40 (*(uint128 *)(((uintptr_t)pf_module_state + 0x91U)))
#undef _DAT_1000dc50
#define _DAT_1000dc50 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef _DAT_1000dc60
#define _DAT_1000dc60 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000dc70
#define _DAT_1000dc70 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc1U)))
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
    if (DAT_1000dbc8 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000dbb0;
        iVar1 = iVar1 + 1;
      } while (DAT_1000dbc8 < param_1);
    }
    for (; param_1 < DAT_1000dbd0; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000dbd8 + param_1) / (param_1 + DAT_1000dbb8);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000dc40);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000dc50);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000dc60);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000dc70);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000dbe0 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000dbe8;
  }
  return DAT_1000dbc0;
}

#undef DAT_1000dbb0
#undef DAT_1000dbb8
#undef DAT_1000dbc0
#undef DAT_1000dbc8
#undef DAT_1000dbd0
#undef DAT_1000dbd8
#undef DAT_1000dbe0
#undef DAT_1000dbe8
#undef DAT_1000dc40
#undef DAT_1000dc50
#undef DAT_1000dc60
#undef DAT_1000dc70
#undef _DAT_1000dbe0
#undef _DAT_1000dbe8
#undef _DAT_1000dc40
#undef _DAT_1000dc50
#undef _DAT_1000dc60
#undef _DAT_1000dc70

#undef DAT_1000dc80
#define DAT_1000dc80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004610
 */

longlong recovered_10004610(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(value + *(double *)(&DAT_1000dc80 + (ulong)(0.0 <= value) * 8));
}

#undef DAT_1000dc80

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dbf0
#define DAT_1000dbf0 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000dbf8
#define DAT_1000dbf8 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000dc00
#define DAT_1000dc00 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000dc08
#define DAT_1000dc08 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000dc10
#define DAT_1000dc10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000dc90
#define DAT_1000dc90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef _DAT_1000dc10
#define _DAT_1000dc10 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000dc90
#define _DAT_1000dc90 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004640(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000dbf0 < param_1; param_1 = param_1 + DAT_1000dbf8) {
  }
  for (; param_1 < DAT_1000dc00; param_1 = param_1 + DAT_1000dc08) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000dc90);
  return ((dVar1 / _DAT_1000dc10 + DAT_1000dbb8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000dbb8
#undef DAT_1000dbf0
#undef DAT_1000dbf8
#undef DAT_1000dc00
#undef DAT_1000dc08
#undef DAT_1000dc10
#undef DAT_1000dc90
#undef _DAT_1000dc10
#undef _DAT_1000dc90

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dbf0
#define DAT_1000dbf0 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000dbf8
#define DAT_1000dbf8 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000dc00
#define DAT_1000dc00 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000dc08
#define DAT_1000dc08 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000dc18
#define DAT_1000dc18 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000dca0
#define DAT_1000dca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef _DAT_1000dca0
#define _DAT_1000dca0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000dbf0 < param_1; param_1 = param_1 + DAT_1000dbf8) {
  }
  for (; param_1 < DAT_1000dc00; param_1 = param_1 + DAT_1000dc08) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000dca0);
  return (DAT_1000dc18 * dVar1 + DAT_1000dbb8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000dbb8
#undef DAT_1000dbf0
#undef DAT_1000dbf8
#undef DAT_1000dc00
#undef DAT_1000dc08
#undef DAT_1000dc18
#undef DAT_1000dca0
#undef _DAT_1000dca0

#undef DAT_1000dc30
#define DAT_1000dc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000dc30
#define _DAT_1000dc30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004790(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000dc30 ^ (ulong)param_1);
  if ((double)(_DAT_1000dc30 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000dc30
#undef _DAT_1000dc30

#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dc20
#define DAT_1000dc20 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000dc30
#define DAT_1000dc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000dc30
#define _DAT_1000dc30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_100047b0(double param_1)

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
  dVar7 = (double)(_DAT_1000dc30 ^ (ulong)param_1);
  if ((double)(_DAT_1000dc30 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_1000dc20;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_1000dbb0;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_1000dbb0;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_1000dbb0
#undef DAT_1000dc20
#undef DAT_1000dc30
#undef _DAT_1000dc30

#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dc20
#define DAT_1000dc20 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004880
 */

ulong recovered_10004880(double param_1)

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
  dVar6 = DAT_1000dc20;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_1000dbb0;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_1000dbb0;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_1000dbb0
#undef DAT_1000dc20

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004930
 */

double recovered_10004930(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (param_1 == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_1000dbb8;
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

#undef DAT_1000dbb8

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dc30
#define DAT_1000dc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000dc30
#define _DAT_1000dc30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004980(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if ((long)param_1 < 0) {
    dVar4 = 0.0;
    uVar2 = -param_1;
    dVar3 = DAT_1000dbb8;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_1000dc30);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_1000dbb8;
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

#undef DAT_1000dbb8
#undef DAT_1000dc30
#undef _DAT_1000dc30

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


#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dc30
#define DAT_1000dc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef UNK_1000dc34
#define UNK_1000dc34 (*(uint *)(((uintptr_t)pf_module_state + 0x85U)))
#undef _DAT_1000dc30
#define _DAT_1000dc30 (*(uint *)(((uintptr_t)pf_module_state + 0x81U)))
#undef uRam000000001000dc34
#define uRam000000001000dc34 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x85U)))
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
    dVar2 = pf_bits_double(CONCAT44((uint)(pf_double_bits(dVar2) >> 0x20) ^ uRam000000001000dc34,
                             SUB84(dVar2,0) ^ _DAT_1000dc30));
  }
  iVar1 = 0;
  if (DAT_1000dbb8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000dbb0;
      iVar1 = iVar1 + 1;
    } while (DAT_1000dbb8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000dbb0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001000dc34,_DAT_1000dc30));
  }
  return CONCAT44((int)(pf_double_bits(dVar2) >> 0x20),(float)dVar2);
}

#undef DAT_1000dbb0
#undef DAT_1000dbb8
#undef DAT_1000dc30
#undef UNK_1000dc34
#undef _DAT_1000dc30
#undef uRam000000001000dc34

#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
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
          dVar3 = dVar3 * DAT_1000dbb0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0 *
                  DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0;
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

#undef DAT_1000dbb0

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dcc0
#define DAT_1000dcc0 (*(float *)(((uintptr_t)pf_module_state + 0x111U)))
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
    return DAT_1000dcc0;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000dbb8;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000dbb8 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000dbb8
#undef DAT_1000dcc0

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


#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000dbb8 + dVar2) & uVar1);
}

#undef DAT_1000dbb8

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
                    (ulong)(DAT_1000dbb8 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000dbb8

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1000dbb8 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1000dbb8

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


#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dbc8
#define DAT_1000dbc8 (*(double *)(((uintptr_t)pf_module_state + 0x19U)))
#undef DAT_1000dbd0
#define DAT_1000dbd0 (*(double *)(((uintptr_t)pf_module_state + 0x21U)))
#undef DAT_1000dbd8
#define DAT_1000dbd8 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000dbe0
#define DAT_1000dbe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000dbe8
#define DAT_1000dbe8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000dc40
#define DAT_1000dc40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91U)))
#undef DAT_1000dc50
#define DAT_1000dc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef DAT_1000dc60
#define DAT_1000dc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef DAT_1000dc70
#define DAT_1000dc70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef DAT_1000dcc4
#define DAT_1000dcc4 (*(float *)(((uintptr_t)pf_module_state + 0x115U)))
#undef DAT_1000dcc8
#define DAT_1000dcc8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x119U)))
#undef _DAT_1000dbe0
#define _DAT_1000dbe0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef _DAT_1000dbe8
#define _DAT_1000dbe8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef _DAT_1000dc40
#define _DAT_1000dc40 (*(uint128 *)(((uintptr_t)pf_module_state + 0x91U)))
#undef _DAT_1000dc50
#define _DAT_1000dc50 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef _DAT_1000dc60
#define _DAT_1000dc60 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000dc70
#define _DAT_1000dc70 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef _DAT_1000dcc8
#define _DAT_1000dcc8 (*(float *)(((uintptr_t)pf_module_state + 0x119U)))
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
    if (_DAT_1000dcc8 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000dbb0;
        iVar1 = iVar1 + 1;
      } while (DAT_1000dbc8 < dVar2);
    }
    for (; dVar2 < DAT_1000dbd0; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000dbd8 + dVar2) / (dVar2 + DAT_1000dbb8);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000dc40);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000dc50);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000dc60);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000dc70);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000dbe0 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000dbe8);
  }
  return DAT_1000dcc4;
}

#undef DAT_1000dbb0
#undef DAT_1000dbb8
#undef DAT_1000dbc8
#undef DAT_1000dbd0
#undef DAT_1000dbd8
#undef DAT_1000dbe0
#undef DAT_1000dbe8
#undef DAT_1000dc40
#undef DAT_1000dc50
#undef DAT_1000dc60
#undef DAT_1000dc70
#undef DAT_1000dcc4
#undef DAT_1000dcc8
#undef _DAT_1000dbe0
#undef _DAT_1000dbe8
#undef _DAT_1000dc40
#undef _DAT_1000dc50
#undef _DAT_1000dc60
#undef _DAT_1000dc70
#undef _DAT_1000dcc8

#undef DAT_1000dc80
#define DAT_1000dc80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f80
 */

long recovered_10004f80(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(value + *(double *)(&DAT_1000dc80 + (ulong)(0.0 <= value) * 8));
}

#undef DAT_1000dc80

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dbf0
#define DAT_1000dbf0 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000dbf8
#define DAT_1000dbf8 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000dc00
#define DAT_1000dc00 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000dc08
#define DAT_1000dc08 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000dc10
#define DAT_1000dc10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000dc90
#define DAT_1000dc90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef _DAT_1000dc10
#define _DAT_1000dc10 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000dc90
#define _DAT_1000dc90 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe1U)))
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

  for (dVar1 = (double)param_1; DAT_1000dbf0 < dVar1; dVar1 = dVar1 + DAT_1000dbf8) {
  }
  for (; dVar1 < DAT_1000dc00; dVar1 = dVar1 + DAT_1000dc08) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000dc90);
  return (float)(((dVar2 / _DAT_1000dc10 + DAT_1000dbb8 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000dbb8
#undef DAT_1000dbf0
#undef DAT_1000dbf8
#undef DAT_1000dc00
#undef DAT_1000dc08
#undef DAT_1000dc10
#undef DAT_1000dc90
#undef _DAT_1000dc10
#undef _DAT_1000dc90

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dbf0
#define DAT_1000dbf0 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000dbf8
#define DAT_1000dbf8 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000dc00
#define DAT_1000dc00 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000dc08
#define DAT_1000dc08 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000dc18
#define DAT_1000dc18 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000dca0
#define DAT_1000dca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef _DAT_1000dca0
#define _DAT_1000dca0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10005060(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000dbf0 < dVar1; dVar1 = dVar1 + DAT_1000dbf8) {
  }
  for (; dVar1 < DAT_1000dc00; dVar1 = dVar1 + DAT_1000dc08) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000dca0);
  return (float)((DAT_1000dc18 * dVar1 + DAT_1000dbb8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000dbb8
#undef DAT_1000dbf0
#undef DAT_1000dbf8
#undef DAT_1000dc00
#undef DAT_1000dc08
#undef DAT_1000dc18
#undef DAT_1000dca0
#undef _DAT_1000dca0

#undef DAT_1000dcb0
#define DAT_1000dcb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101U)))
#undef UNK_1000dcb4
#define UNK_1000dcb4 (*(uint *)(((uintptr_t)pf_module_state + 0x105U)))
#undef _DAT_1000dcb0
#define _DAT_1000dcb0 (*(uint *)(((uintptr_t)pf_module_state + 0x101U)))
#undef uRam000000001000dcb4
#define uRam000000001000dcb4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x105U)))
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
  fVar2 = (float)(_DAT_1000dcb0 ^ (uint)fVar1);
  if ((float)(_DAT_1000dcb0 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000dcb4 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000dcb0
#undef UNK_1000dcb4
#undef _DAT_1000dcb0
#undef uRam000000001000dcb4

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


#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dc28
#define DAT_1000dc28 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_1000dc30
#define DAT_1000dc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000dc30
#define _DAT_1000dc30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
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
    dVar11 = dVar11 * DAT_1000dc28 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1000dbb8;
      do {
        dVar12 = dVar12 * DAT_1000dc28 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000dc28;
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
                dVar11 = dVar11 * DAT_1000dbb0;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0 *
                         DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0 * DAT_1000dbb0;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000dc30);
  }
  return dVar11;
}

#undef DAT_1000dbb0
#undef DAT_1000dbb8
#undef DAT_1000dc28
#undef DAT_1000dc30
#undef _DAT_1000dc30

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


#undef DAT_1000dc28
#define DAT_1000dc28 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_1000dc30
#define DAT_1000dc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef DAT_1000de5f
#define DAT_1000de5f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
#undef _DAT_1000dc30
#define _DAT_1000dc30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef str_1000de69
#define str_1000de69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2baU)))
#undef str_1000de7a
#define str_1000de7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cbU)))
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
  uVar8 = _DAT_1000dc30;
  dVar7 = DAT_1000dc28;
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
      abStack_7a[uVar19 + 2] = str_1000de7a[uVar24 % 10];
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
    pcVar23 = str_1000de7a;
    if (*param_3 == 0x58) {
      pcVar23 = str_1000de69;
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
        abStack_7a[uVar14 + 2] = str_1000de7a[uVar24 % 10];
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
      abStack_7a[uVar14 + 2] = str_1000de7a[(uint)uVar24 & 0xf];
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
        pbVar21 = &DAT_1000de5f;
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
      abStack_7a[uVar19 + 2] = str_1000de7a[uVar13 % 10];
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

#undef DAT_1000dc28
#undef DAT_1000dc30
#undef DAT_1000de5f
#undef _DAT_1000dc30
#undef str_1000de69
#undef str_1000de7a
#undef abStack_7a

/* Recover the native variadic formatting boundary; Pooka's Free Software License. */
int recovered_100064d0(char *buffer,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_100055f0(buffer,capacity,format,(void *)args);__builtin_va_end(args);return count;}


#undef DAT_10000000
#define DAT_10000000 (*(uint8_t *)(0x10000000U))
#undef DAT_10000008
#define DAT_10000008 (*(uint8_t *)(0x10000008U))
#undef DAT_10000010
#define DAT_10000010 (*(uint8_t *)(0x10000010U))
#undef DAT_10000018
#define DAT_10000018 (*(uint8_t *)(0x10000018U))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2549U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2559U)))
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
        if (DAT_100100f8 == 0) {
          puVar5 = (ulong *)&DAT_100100f8;
        }
        *puVar5 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_10010108 == (long *)0x0) {
          DAT_10010108 = plVar2;
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
      if (DAT_100100f8 == 0) {
        plVar1 = &DAT_100100f8;
      }
      *plVar1 = 0x10000000;
      *param_3 = 0x10000000;
      if (DAT_10010108 == (long *)0x0) {
        DAT_10010108 = (long *)&DAT_10000000;
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
        if (DAT_100100f8 == 0) {
          puVar3 = &DAT_100100f8;
        }
        *puVar3 = plVar1;
        *param_3 = (ulong)plVar1;
        if (DAT_10010108 == (long *)0x0) {
          DAT_10010108 = plVar1;
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
#undef DAT_100100f8
#undef DAT_10010108
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
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2561U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2571U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#define local_238 (*(undefined8 (*)[71])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100067e0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  long lVar6;

  uVar5 = (undefined7)((ulong)param_4 >> 8);
  uVar4 = param_2 == 0 || param_1 == 0;
  if (param_2 != 0 && param_1 != 0) {
    lVar6 = 0;
    do {
      cVar2 = *(char *)(param_1 + lVar6);
      if (cVar2 == '\b') {
        if (DAT_10010110 != 0) {
          DAT_10010110 = DAT_10010110 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_10010110 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001d60(local_238,(undefined8 *)&DAT_10010120,DAT_10010110,
                               CONCAT71(uVar5,uVar4),param_5);
            uVar3 = DAT_10010110;
          }
          *(undefined1 *)((long)local_238 + uVar3) = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 &&
              ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00280840)(local_238);
          }
          DAT_10010110 = 0;
        }
        else {
          if (DAT_10010110 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001d60(local_238,(undefined8 *)&DAT_10010120,DAT_10010110,
                               CONCAT71(uVar5,uVar4),param_5);
            *(undefined1 *)((long)local_238 + DAT_10010110) = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00280840)(local_238);
            }
            DAT_10010110 = 0;
          }
          pcVar1 = &DAT_10010120 + DAT_10010110;
          DAT_10010110 = DAT_10010110 + 1;
          *pcVar1 = cVar2;
        }
      }
      lVar6 = lVar6 + 1;
    } while (param_2 != lVar6);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_10010110
#undef DAT_10010120
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
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2561U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2571U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#define local_208 (*(undefined8 (*)[65])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100069b0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 in_RCX;
  undefined8 *in_R8;

  if (DAT_10010110 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001d60(local_208,(undefined8 *)&DAT_10010120,DAT_10010110,in_RCX,in_R8);
    uVar1 = DAT_10010110;
  }
  *(undefined1 *)((long)local_208 + uVar1) = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280840)(local_208);
  }
  DAT_10010110 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_10010110
#undef DAT_10010120
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
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2561U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2571U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#define local_208 (*(undefined8 (*)[65])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006a50(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  undefined8 in_RCX;
  undefined8 *in_R8;

  if (DAT_10010110 != 0) {
    recovered_10001d60(local_208,(undefined8 *)&DAT_10010120,DAT_10010110,in_RCX,in_R8);
    *(undefined1 *)((long)local_208 + DAT_10010110) = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_208);
    }
    DAT_10010110 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_10010110
#undef DAT_10010120
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_208

#undef DAT_1000de68
#define DAT_1000de68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b9U)))
#undef DAT_1000de8b
#define DAT_1000de8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#define local_148 (*(char (*)[328])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

void recovered_10006af0(char *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  char *format;
  undefined8 extraout_RDX = 0;

  format = &DAT_1000de8b;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000de68;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_100064d0(local_148,0x140,format);
  if (0 < (int)uVar1) {
    recovered_100067e0((long)local_148,(ulong)uVar1,extraout_RDX,puVar2,param_5);
  }
  return;
}

#undef DAT_1000de68
#undef DAT_1000de8b
#undef local_148

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b50
 */

void recovered_10006b50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 in_RCX;
  undefined8 extraout_RDX = 0;
  undefined8 extraout_RDX_00 = 0;
  undefined8 *in_R8;

  lVar1 = recovered_10003800(((uintptr_t)pf_module_state+0x2dfU));
  recovered_100067e0(((uintptr_t)pf_module_state+0x2dfU),lVar1,extraout_RDX,in_RCX,in_R8);
  lVar1 = recovered_10003800(((uintptr_t)pf_module_state+0x2faU));
  recovered_100067e0(((uintptr_t)pf_module_state+0x2faU),lVar1,extraout_RDX_00,in_RCX,in_R8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b90
 */

void recovered_10006b90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 in_RCX;
  undefined8 extraout_RDX = 0;
  undefined8 extraout_RDX_00 = 0;
  undefined8 *in_R8;

  lVar1 = recovered_10003800(((uintptr_t)pf_module_state+0x2fdU));
  recovered_100067e0(((uintptr_t)pf_module_state+0x2fdU),lVar1,extraout_RDX,in_RCX,in_R8);
  lVar1 = recovered_10003800(((uintptr_t)pf_module_state+0x2faU));
  recovered_100067e0(((uintptr_t)pf_module_state+0x2faU),lVar1,extraout_RDX_00,in_RCX,in_R8);
  return;
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
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2561U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2571U)))
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
#define local_228 (*(undefined8 (*)[69])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006bd0(long param_1,long param_2,undefined8 param_3,ulong param_4,
                       undefined8 param_5)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  bool bVar3;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  uVar2 = param_4;
  if (DAT_10010110 != 0) {
    uVar2 = param_4 & 0xffffffff;
    recovered_10001d60(local_228,(undefined8 *)&DAT_10010120,DAT_10010110,param_4,
                       (undefined8 *)
                       CONCAT71((int7)((ulong)param_5 >> 8),param_2 == 0 || param_1 == 0));
    *(undefined1 *)((long)local_228 + DAT_10010110) = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_228);
    }
    DAT_10010110 = 0;
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x47 < _DAT_00280808 && ((code *)(ulong)_DAT_00280844 != (code *)0x0)))))) {
    iVar1 = (*(code *)(ulong)_DAT_00280844)(param_1,param_2,param_3,uVar2 & 0xff);
    bVar3 = iVar1 != 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_10010110
#undef DAT_10010120
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
#undef DAT_1000de8b
#define DAT_1000de8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24b1U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef Ram0000000000280834
#define Ram0000000000280834 (*(uint32_t *)(0x280834U))
#undef str_1000df2d
#define str_1000df2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37eU)))
#undef str_1000df3a
#define str_1000df3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38bU)))
#undef str_1000df48
#define str_1000df48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x399U)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d20
 */

/* WARNING: Type propagation algorithm not settling */

byte * recovered_10006d20(byte *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                         undefined8 *param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  ulong size;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;

  if (param_1 == (byte *)0x0 || param_2 == (char *)0x0) {
    DAT_10010060 = 0x16;
    return (byte *)0x0;
  }
  iVar4 = recovered_10003830(param_1,(byte *)str_1000df2d);
  if (iVar4 == 0) {
    uVar11 = 1;
LAB_10006fce:
    pbVar6 = recovered_10001c70(0x340);
    if (pbVar6 == (byte *)0x0) {
      DAT_10010060 = 0xc;
      return (byte *)0x0;
    }
    recovered_10002a60(pbVar6,0,0x340);
    *(undefined4 *)pbVar6 = uVar11;
    pbVar6[0x124] = iVar4 == 0;
    pbVar6[0x125] = iVar4 != 0;
    pbVar6[0x120] = 0xff;
    pbVar6[0x121] = 0xff;
    pbVar6[0x122] = 0xff;
    pbVar6[0x123] = 0xff;
    recovered_100064d0((char *)(pbVar6 + 4),0xf1,&DAT_1000de8b,param_1);
    return pbVar6;
  }
  iVar5 = recovered_10003830(param_1,(byte *)str_1000df3a);
  if (iVar5 == 0) {
    uVar11 = 2;
    goto LAB_10006fce;
  }
  iVar5 = recovered_10003830(param_1,(byte *)str_1000df48);
  if (iVar5 == 0) {
    uVar11 = 3;
    goto LAB_10006fce;
  }
  pbVar6 = recovered_10001c70(0x340);
  if (pbVar6 == (byte *)0x0) {
    DAT_10010060 = 0xc;
    return (byte *)0x0;
  }
  recovered_10002a60(pbVar6,0,0x340);
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pcVar7 = recovered_10003d50(param_2,'r');
  bVar13 = true;
  bVar12 = true;
  if (pcVar7 == (char *)0x0) {
    pcVar7 = recovered_10003d50(param_2,'+');
    bVar12 = true;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = recovered_10003d50(param_2,'a');
      bVar12 = pcVar7 != (char *)0x0;
    }
  }
  pbVar6[0x124] = bVar12;
  pcVar7 = recovered_10003d50(param_2,'w');
  if ((pcVar7 == (char *)0x0) && (pcVar7 = recovered_10003d50(param_2,'a'), pcVar7 == (char *)0x0))
  {
    pcVar7 = recovered_10003d50(param_2,'+');
    bVar13 = pcVar7 != (char *)0x0;
  }
  pbVar6[0x125] = bVar13;
  pcVar7 = recovered_10003d50(param_2,'a');
  pbVar6[0x126] = pcVar7 != (char *)0x0;
  pbVar6[0x120] = 0xff;
  pbVar6[0x121] = 0xff;
  pbVar6[0x122] = 0xff;
  pbVar6[0x123] = 0xff;
  recovered_100064d0((char *)(pbVar6 + 4),0xf1,&DAT_1000de8b,param_1);
  recovered_10002a60((byte *)&local_34,0,0xc);
  iVar4 = Ram0000000000280800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000280804, iVar4 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x37 < uVar2)) {
    uVar2 = Ram0000000000280834;
    if (((code *)(ulong)uVar2 == (code *)0x0) ||
       (iVar4 = (*(code *)(ulong)uVar2)(param_1,&local_34), iVar4 == 0)) goto LAB_10006f9e;
    pcVar7 = recovered_10003d50(param_2,'w');
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
            size = uVar3;
            uVar3 = size * 2;
          } while (size < uVar10);
          puVar8 = recovered_10001d10(*(void **)(pbVar6 + 0x100),size);
          if (puVar8 == (undefined8 *)0x0) {
            DAT_10010060 = 0xc;
            pbVar6[0x129] = 1;
            goto LAB_10007058;
          }
          *(undefined8 **)(pbVar6 + 0x100) = puVar8;
          *(ulong *)(pbVar6 + 0x110) = size;
          *(undefined8 **)(pbVar6 + 0xf8) = puVar8;
          uVar10 = (ulong)local_30;
        }
        else {
          puVar8 = *(undefined8 **)(pbVar6 + 0x100);
        }
        recovered_10001d60(puVar8,(undefined8 *)(ulong)local_34,uVar10,uVar9,param_5);
      }
      else {
        *(ulong *)(pbVar6 + 0xf8) = (ulong)local_34;
      }
      *(ulong *)(pbVar6 + 0x108) = (ulong)local_30;
      bVar1 = pbVar6[0x126];
      goto joined_r0x10006fb2;
    }
  }
  else {
LAB_10006f9e:
    if (pbVar6[0x125] == 0) {
      DAT_10010060 = 2;
LAB_10007058:
      recovered_10001cc0(pbVar6);
      return (byte *)0x0;
    }
  }
  bVar1 = pbVar6[0x126];
joined_r0x10006fb2:
  if (bVar1 == 1) {
    *(undefined8 *)(pbVar6 + 0x118) = *(undefined8 *)(pbVar6 + 0x108);
    return pbVar6;
  }
  return pbVar6;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_1000de8b
#undef DAT_10010060
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef Ram0000000000280834
#undef str_1000df2d
#undef str_1000df3a
#undef str_1000df48
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
#undef DAT_1000de8b
#define DAT_1000de8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24b1U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(uint *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
#undef str_1000df2d
#define str_1000df2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37eU)))
#undef str_1000df3a
#define str_1000df3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38bU)))
#undef str_1000df48
#define str_1000df48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x399U)))
#define uStack_34 (*(uint *)(pf_stack_frame + 28))
#define uStack_30 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070b0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * recovered_100070b0(byte *param_1,char *param_2,int *param_3,int *param_4,undefined *param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong size;
  undefined8 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 extraout_RDX = 0;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;

  if (param_3 != (int *)0x0) {
    if ((*param_3 == 0) && (*(char *)((long)param_3 + 0x127) == '\x01')) {
      param_4 = (int *)(ulong)_DAT_00280800;
      if (((_DAT_00280800 == 0x50414d57) &&
          (((_DAT_00280804 != 0 && (param_4 = (int *)(ulong)_DAT_00280808, 0xb < _DAT_00280808)) &&
           (param_4 = (int *)(ulong)_DAT_00280808, 0x3b < _DAT_00280808)))) &&
         (param_5 = (undefined *)(ulong)_DAT_00280838, (code *)param_5 != (code *)0x0)) {
        param_4 = param_3 + 1;
        uStack_30 = 0x1000713a;
        iVar4 = (*(code *)param_5)(param_4,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_10007161;
        }
      }
      DAT_10010060 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_10007161:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x10007178;
      recovered_10001cc0(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x10007180;
    recovered_10001cc0(param_3);
    pbVar7 = recovered_10006d20(param_1,param_2,extraout_RDX,param_4,(undefined8 *)param_5);
    return pbVar7;
  }
  if (param_1 == (byte *)0x0 || param_2 == (char *)0x0) {
    DAT_10010060 = 0x16;
    return (byte *)0x0;
  }
  iVar4 = recovered_10003830(param_1,(byte *)str_1000df2d);
  if (iVar4 == 0) {
    uVar10 = 1;
LAB_10006fce:
    pbVar7 = recovered_10001c70(0x340);
    if (pbVar7 == (byte *)0x0) {
      DAT_10010060 = 0xc;
      return (byte *)0x0;
    }
    recovered_10002a60(pbVar7,0,0x340);
    *(undefined4 *)pbVar7 = uVar10;
    pbVar7[0x124] = iVar4 == 0;
    pbVar7[0x125] = iVar4 != 0;
    pbVar7[0x120] = 0xff;
    pbVar7[0x121] = 0xff;
    pbVar7[0x122] = 0xff;
    pbVar7[0x123] = 0xff;
    recovered_100064d0((char *)(pbVar7 + 4),0xf1,&DAT_1000de8b,param_1);
    return pbVar7;
  }
  iVar3 = recovered_10003830(param_1,(byte *)str_1000df3a);
  if (iVar3 == 0) {
    uVar10 = 2;
    goto LAB_10006fce;
  }
  iVar3 = recovered_10003830(param_1,(byte *)str_1000df48);
  if (iVar3 == 0) {
    uVar10 = 3;
    goto LAB_10006fce;
  }
  pbVar7 = recovered_10001c70(0x340);
  if (pbVar7 == (byte *)0x0) {
    DAT_10010060 = 0xc;
    return (byte *)0x0;
  }
  recovered_10002a60(pbVar7,0,0x340);
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pcVar5 = recovered_10003d50(param_2,'r');
  bVar12 = true;
  bVar11 = true;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = recovered_10003d50(param_2,'+');
    bVar11 = true;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = recovered_10003d50(param_2,'a');
      bVar11 = pcVar5 != (char *)0x0;
    }
  }
  pbVar7[0x124] = bVar11;
  pcVar5 = recovered_10003d50(param_2,'w');
  if ((pcVar5 == (char *)0x0) && (pcVar5 = recovered_10003d50(param_2,'a'), pcVar5 == (char *)0x0))
  {
    pcVar5 = recovered_10003d50(param_2,'+');
    bVar12 = pcVar5 != (char *)0x0;
  }
  pbVar7[0x125] = bVar12;
  pcVar5 = recovered_10003d50(param_2,'a');
  pbVar7[0x126] = pcVar5 != (char *)0x0;
  pbVar7[0x120] = 0xff;
  pbVar7[0x121] = 0xff;
  pbVar7[0x122] = 0xff;
  pbVar7[0x123] = 0xff;
  recovered_100064d0((char *)(pbVar7 + 4),0xf1,&DAT_1000de8b,param_1);
  recovered_10002a60((byte *)&uStack_34,0,0xc);
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      (((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00280834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar5 = recovered_10003d50(param_2,'w');
    if ((uint)uStack_30 != 0 && pcVar5 == (char *)0x0) {
      if (pbVar7[0x125] == 1) {
        uVar9 = uStack_30 & 0xffffffff;
        uVar8 = *(ulong *)(pbVar7 + 0x110);
        if (uVar8 < uVar9) {
          uVar2 = 0x100;
          if (uVar8 != 0) {
            uVar2 = uVar8;
          }
          do {
            size = uVar2;
            uVar2 = size * 2;
          } while (size < uVar9);
          puVar6 = recovered_10001d10(*(void **)(pbVar7 + 0x100),size);
          if (puVar6 == (undefined8 *)0x0) {
            DAT_10010060 = 0xc;
            pbVar7[0x129] = 1;
            goto LAB_10007058;
          }
          *(undefined8 **)(pbVar7 + 0x100) = puVar6;
          *(ulong *)(pbVar7 + 0x110) = size;
          *(undefined8 **)(pbVar7 + 0xf8) = puVar6;
          uVar9 = uStack_30 & 0xffffffff;
        }
        else {
          puVar6 = *(undefined8 **)(pbVar7 + 0x100);
        }
        recovered_10001d60(puVar6,(undefined8 *)(ulong)uStack_34,uVar9,uVar8,(undefined8 *)param_5);
      }
      else {
        *(ulong *)(pbVar7 + 0xf8) = (ulong)uStack_34;
      }
      *(ulong *)(pbVar7 + 0x108) = (ulong)(uint)uStack_30;
      bVar1 = pbVar7[0x126];
      goto joined_r0x10006fb2;
    }
  }
  else if (pbVar7[0x125] == 0) {
    DAT_10010060 = 2;
LAB_10007058:
    recovered_10001cc0(pbVar7);
    return (byte *)0x0;
  }
  bVar1 = pbVar7[0x126];
joined_r0x10006fb2:
  if (bVar1 == 1) {
    *(undefined8 *)(pbVar7 + 0x118) = *(undefined8 *)(pbVar7 + 0x108);
    return pbVar7;
  }
  return pbVar7;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_1000de8b
#undef DAT_10010060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef str_1000df2d
#undef str_1000df3a
#undef str_1000df48
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
#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24b1U)))
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
      DAT_10010060 = 5;
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
#undef DAT_10010060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007270
 */

ulong recovered_10007270(undefined8 *param_1,ulong param_2,ulong param_3,int *param_4,
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
          uVar3 = recovered_100073b0(param_4);
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
      recovered_10001d60(param_1,(undefined8 *)(uVar5 + *(long *)(param_4 + 0x3e)),uVar4,
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
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_00280844
#define DAT_00280844 (*(uint8_t *)(0x280844U))
#undef DAT_1000de68
#define DAT_1000de68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b9U)))
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2561U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2571U)))
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
#define local_218 (*(undefined8 (*)[67])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100073b0(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_R8;

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
    uVar4 = *(ulong *)(param_1 + 0xce);
    if (uVar4 < *(ulong *)(param_1 + 0xcc)) {
LAB_1000740a:
      *(ulong *)(param_1 + 0xce) = uVar4 + 1;
      return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
    }
    if (DAT_10010110 != 0) {
      recovered_10001d60(local_218,(undefined8 *)&DAT_10010120,DAT_10010110,uVar4,in_R8);
      *(undefined1 *)((long)local_218 + DAT_10010110) = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00280840)(local_218);
      }
      DAT_10010110 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x47 < _DAT_00280808 && ((code *)(ulong)_DAT_00280844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00280844)((long)param_1 + 0x12a,0x1fe,&DAT_1000de68,0);
      if (iVar2 != 0) {
        lVar3 = recovered_10003800((long)param_1 + 0x12a);
        *(long *)(param_1 + 0xcc) = lVar3 + 1;
        *(undefined1 *)((long)param_1 + lVar3 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar4 = 0;
        goto LAB_1000740a;
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
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_1000de68
#undef DAT_10010110
#undef DAT_10010120
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_218

#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24b1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075a0
 */

long recovered_100075a0(undefined8 *param_1,long param_2,long param_3,uint *param_4,
                       undefined8 *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (undefined8 *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((long)param_4 + 0x125) != '\x01')))) {
    return 0;
  }
  uVar6 = param_2 * param_3;
  if ((*param_4 & 0xfffffffe) == 2) {
    recovered_100067e0((long)param_1,uVar6,param_3,param_4,param_5);
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
      pvVar4 = recovered_10001d10(*(void **)(param_4 + 0x40),(ulong)puVar3);
      if (pvVar4 == (void *)0x0) {
        DAT_10010060 = 0xc;
        *(undefined1 *)((long)param_4 + 0x129) = 1;
        return 0;
      }
      *(void **)(param_4 + 0x40) = pvVar4;
      *(undefined8 **)(param_4 + 0x44) = puVar3;
      *(void **)(param_4 + 0x3e) = pvVar4;
      uVar5 = *(ulong *)(param_4 + 0x46);
    }
    uVar1 = *(ulong *)(param_4 + 0x42);
    if (uVar1 <= uVar5 && uVar5 - uVar1 != 0) {
      recovered_10002a60((byte *)(uVar1 + *(long *)(param_4 + 0x40)),0,uVar5 - uVar1);
      uVar5 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10001d60((undefined8 *)(uVar5 + *(long *)(param_4 + 0x40)),param_1,uVar6,param_4,
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

#undef DAT_10010060

#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24b1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007730
 */

undefined8 recovered_10007730(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10010060 = 0x16;
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
  DAT_10010060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10010060

#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24b1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077b0
 */

undefined8 recovered_100077b0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10010060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10010060

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24b1U)))
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
  DAT_10010060 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef DAT_10010060
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
#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24b1U)))
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
  DAT_10010060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef DAT_10010060
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
#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24b1U)))
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
    DAT_10010060 = 0x16;
    return 0xffffffff;
  }
  recovered_10002a60((byte *)&local_2c,0,0xc);
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
  DAT_10010060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef DAT_10010060
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

ulong recovered_10007b10(long param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4,
                        undefined8 *param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined7 uVar5;

  uVar5 = (undefined7)((ulong)param_4 >> 8);
  uVar4 = param_2 == (undefined8 *)0x0 || param_1 == 0;
  if (param_3 != (ulong *)0x0 && (param_2 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar3 = 0;
    recovered_10002a60((byte *)&local_34,0,0xc);
    if (_DAT_00280800 != 0x50414d57) goto LAB_10007bcf;
    if ((((_DAT_00280804 != 0) && (0xb < _DAT_00280808)) && (0x37 < _DAT_00280808)) &&
       ((code *)(ulong)_DAT_00280834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00280834)(param_1,&local_34);
      if (iVar1 != 0) {
        puVar2 = recovered_10001c70((ulong)(local_30 + (local_30 == 0)));
        if (puVar2 != (undefined8 *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001d60(puVar2,(undefined8 *)(ulong)local_34,(ulong)local_30,
                               CONCAT71(uVar5,uVar4),param_5);
            uVar3 = (ulong)local_30;
          }
          *param_2 = puVar2;
          *param_3 = uVar3;
          uVar3 = CONCAT71((int7)((ulong)puVar2 >> 8),1);
          goto LAB_10007bcf;
        }
      }
    }
  }
  uVar3 = 0;
LAB_10007bcf:
  return uVar3 & 0xffffffff;
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

int recovered_10007cb0(long param_1,long param_2,long param_3)

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


#undef DAT_1000debc
#define DAT_1000debc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30dU)))
#undef str_1000debf
#define str_1000debf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x310U)))
#undef str_1000decc
#define str_1000decc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31dU)))
#undef str_1000ded6
#define str_1000ded6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x327U)))
#undef str_1000deea
#define str_1000deea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33bU)))
#undef str_1000def8
#define str_1000def8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x349U)))
#undef str_1000df0a
#define str_1000df0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35bU)))
#undef str_1000df16
#define str_1000df16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x367U)))
#undef str_1000df27
#define str_1000df27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x378U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cf0
 */

char * recovered_10007cf0(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000debc;
  default:
    return str_1000df27;
  case 2:
    return str_1000debf;
  case 5:
    return str_1000decc;
  case 9:
    return str_1000ded6;
  case 0xc:
    return str_1000deea;
  case 0xd:
    return str_1000def8;
  case 0x11:
    return str_1000df0a;
  case 0x16:
    return str_1000df16;
  }
}

#undef DAT_1000debc
#undef str_1000debf
#undef str_1000decc
#undef str_1000ded6
#undef str_1000deea
#undef str_1000def8
#undef str_1000df0a
#undef str_1000df16
#undef str_1000df27

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


#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2771U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007de0
 */

void recovered_10007de0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010320 = DAT_10010320 + 1;
  return;
}

#undef DAT_10010320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e00
 */

longlong recovered_10007e00(float10 value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10004610((double)(longdouble)value);
  return lVar1;
}


#define local_218 (*(byte (*)[536])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e20
 */

ulong recovered_10007e20(byte *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 *param_5)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 extraout_RDX = 0;
  ulong uVar2;

  uVar1 = recovered_100055f0(local_218,0x200,param_1,param_2);
  if (0 < (int)(uint)uVar1) {
    uVar2 = 0x1ff;
    if ((uint)uVar1 < 0x1ff) {
      uVar2 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
    recovered_100067e0((long)local_218,uVar2,extraout_RDX,param_2,param_5);
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
 * Address: 0x10007e70
 */

ulong recovered_10007e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
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
  uVar1 = recovered_100055f0(local_2d8,0x200,param_9,puVar2);
  if (0 < (int)(uint)uVar1) {
    uVar3 = 0x1ff;
    if ((uint)uVar1 < 0x1ff) {
      uVar3 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
    recovered_100067e0((long)local_2d8,uVar3,extraout_RDX,puVar2,param_13);
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
__attribute__((naked,noreturn)) void recovered_10007f30(void *context,...){
 __asm__ volatile("movq 64(%rdi),%rsp\nmovq 48(%rdi),%rbp\njmp *56(%rdi)");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10007f40(void *context){__asm__ volatile("movq %rbx, (%rdi)\nmovq %rbp, 8(%rdi)\nmovq %r12, 0x10(%rdi)\nmovq %r13, 0x18(%rdi)\nmovq %r14, 0x20(%rdi)\nmovq %r15, 0x28(%rdi)\nleaq 8(%rsp), %rdx\nmovq %rdx, 0x30(%rdi)\nmovq (%rsp), %rdx\nmovq %rdx, 0x38(%rdi)\nstmxcsr 0x40(%rdi)\nfnstcw 0x44(%rdi)\nxorl %eax, %eax\nretq \nud2 \nnopw %cs:(%rax, %rax)");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007f80(void *context,int value){__asm__ volatile("movq %rdi, %rdx\nmovl %esi, %eax\ntestl %eax, %eax\njne Lpf_context_10007f8e\nmovl $1, %eax\nLpf_context_10007f8e:\nldmxcsr 0x40(%rdx)\nfldcw 0x44(%rdx)\nmovq (%rdx), %rbx\nmovq 8(%rdx), %rbp\nmovq 0x10(%rdx), %r12\nmovq 0x18(%rdx), %r13\nmovq 0x20(%rdx), %r14\nmovq 0x28(%rdx), %r15\nmovq 0x30(%rdx), %rsp\njmpq *0x38(%rdx)\nud2 \nnopw %cs:(%rax, %rax)");}


#undef DAT_10008011
#define DAT_10008011 (*(uint8_t *)(0x10008011U))
#undef DAT_1000df70
#define DAT_1000df70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c1U)))
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
  local_60 = &DAT_1000df70;
  local_50 = &DAT_10008011;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001c40();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10008011
#undef DAT_1000df70
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


#undef DAT_10010328
#define DAT_10010328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2779U)))
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
  *(long *)(extraout_RAX + 0x10) = DAT_10010328;
  *(undefined1 *)(extraout_RAX + 0x34) = 0;
  DAT_10010328 = extraout_RAX;
  recovered_10008560(extraout_RAX);
  return;
}

#undef DAT_10010328

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008090
 */

void * recovered_10008090(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001c70(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001c40();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080c0
 */

void * recovered_100080c0(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001c70(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001c40();
  }
  return pvVar1;
}


#undef DAT_1000df80
#define DAT_1000df80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d1U)))
#undef LAB_1000815d
#define LAB_1000815d (*(uint8_t *)(0x1000815dU))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080f0
 */

void recovered_100080f0(void *pointer)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_1000df80;
  local_50 = &LAB_1000815d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(pointer);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_1000df80
#undef LAB_1000815d
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef auStack_40
#undef local_58
#undef local_50

#undef DAT_1000df90
#define DAT_1000df90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e1U)))
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

void recovered_10008190(void *pointer)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_1000df90;
  local_50 = &LAB_100081fd;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(pointer);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_1000df90
#undef LAB_100081fd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000dfa0
#define DAT_1000dfa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f1U)))
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

void recovered_10008230(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10008040;
  local_60 = &DAT_1000dfa0;
  local_50 = &LAB_1000829d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_1000dfa0
#undef LAB_1000829d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000dfb0
#define DAT_1000dfb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x401U)))
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
  local_60 = &DAT_1000dfb0;
  local_50 = &LAB_1000833d;
  local_80 = 1;
  recovered_100086e0(&local_88);
  recovered_10001cc0(param_1);
  recovered_10008700(&local_88);
  return;
}

#undef DAT_1000dfb0
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


#undef DAT_10010338
#define DAT_10010338 (*(int *)(((uintptr_t)pf_module_state + 0x2789U)))
#undef DAT_10010340
#define DAT_10010340 (*(void * *)(((uintptr_t)pf_module_state + 0x2791U)))
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
  DAT_10010338 = DAT_10010338 + 1 + (uint)(DAT_10010338 == -1);
  if (DAT_10010340 == (void *)0x0) {
LAB_1000849e:
    *(int *)((long)pvVar2 + 0x30) = DAT_10010338;
    *(void **)((long)pvVar2 + 0x18) = DAT_10010340;
    DAT_10010340 = pvVar2;
    return (long)pvVar2 + 0x38;
  }
  do {
    lVar5 = (long)DAT_10010340;
    while (*(int *)(lVar5 + 0x30) != DAT_10010338) {
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) goto LAB_1000849e;
    }
    DAT_10010338 = DAT_10010338 + 1 + (uint)(DAT_10010338 == -1);
  } while( true );
}

#undef DAT_10010338
#undef DAT_10010340

#undef DAT_10010340
#define DAT_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2791U)))
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
  pvVar1 = DAT_10010340;
  if (DAT_10010340 == pointer) {
    puVar2 = &DAT_10010340;
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

#undef DAT_10010340

#undef DAT_10010340
#define DAT_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2791U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008520
 */

void recovered_10008520(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = DAT_10010340;
  if (DAT_10010340 != param_1 && DAT_10010340 != 0) {
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

#undef DAT_10010340

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008560
 */

long recovered_10008560(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_10010328
#define DAT_10010328 (*(void * *)(((uintptr_t)pf_module_state + 0x2779U)))
#undef DAT_10010340
#define DAT_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2791U)))
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

  pointer = DAT_10010328;
  if (DAT_10010328 != (void *)0x0) {
    puVar2 = (undefined8 *)((long)DAT_10010328 + 0x10);
    DAT_10010328 = *(void **)((long)DAT_10010328 + 0x10);
    *puVar2 = 0;
    if (*(char *)((long)pointer + 0x34) == '\0') {
      if (*(code **)((long)pointer + 8) != (code *)0x0) {
        (**(code **)((long)pointer + 8))((long)pointer + 0x38);
      }
      pvVar1 = DAT_10010340;
      if (DAT_10010340 == pointer) {
        puVar2 = &DAT_10010340;
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

#undef DAT_10010328
#undef DAT_10010340

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
  recovered_10008630();
}


#undef DAT_10010328
#define DAT_10010328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2779U)))
#undef DAT_10010330
#define DAT_10010330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2781U)))
#define cStack_36 (*(char *)(pf_stack_frame + 26))
#define uStack_35 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_38 (*(undefined2 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008630
 */

ulonglong recovered_10008630(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *in_RDI;
  long *plVar4;

  if (DAT_10010330 != (long *)0x0) {
    pbVar1 = (byte *)*in_RDI;
    plVar4 = DAT_10010330;
    do {
      local_30 = 0;
      local_38 = 0;
      cStack_36 = '\0';
      uStack_35 = 0;
      uStack_34 = 0;
      uVar3 = recovered_10009110((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        in_RDI[4] = plVar4;
        in_RDI[5] = CONCAT44(local_30,uStack_34);
        recovered_100087c0(in_RDI);
        lVar2 = DAT_10010328;
        if (DAT_10010328 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10007fc0();
        }
        *(undefined1 *)(DAT_10010328 + 0x34) = 1;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10008630();
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007fc0();
}

#undef DAT_10010328
#undef DAT_10010330
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38
#undef local_30

#undef DAT_10010328
#define DAT_10010328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2779U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086b0
 */

void recovered_100086b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = DAT_10010328;
  if (DAT_10010328 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007fc0();
  }
  *(undefined1 *)(DAT_10010328 + 0x34) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10008630();
}

#undef DAT_10010328

#undef DAT_10010330
#define DAT_10010330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2781U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086e0
 */

void recovered_100086e0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010330;
  DAT_10010330 = param_1;
  return;
}

#undef DAT_10010330

#undef DAT_10010330
#define DAT_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2781U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008700
 */

void recovered_10008700(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_10010330;
  if (DAT_10010330 == param_1) {
    puVar2 = &DAT_10010330;
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

#undef DAT_10010330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008740
 */

void recovered_10008740(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008630();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008750
 */

uchar recovered_10008750(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007fc0();
}


#undef DAT_10010330
#define DAT_10010330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2781U)))
#undef DAT_10010340
#define DAT_10010340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2791U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008760
 */

void recovered_10008760(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010340;
  if (DAT_10010340 != param_1 && DAT_10010340 != (undefined8 *)0x0) {
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
  if (DAT_10010330 != (undefined8 *)0x0) {
    DAT_10010330 = (undefined8 *)*DAT_10010330;
  }
  recovered_100087c0(puVar1);
  return;
}

#undef DAT_10010330
#undef DAT_10010340

#undef DAT_10010330
#define DAT_10010330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2781U)))
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

  if (DAT_10010330 != (long *)0x0) {
    plVar1 = (long *)param_1[4];
    do {
      plVar3 = DAT_10010330;
      if (DAT_10010330 == plVar1) {
        *(ulong *)((long)DAT_10010330 + 0xc) =
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
      recovered_10009110((long)DAT_10010330,(byte *)*param_1,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        *(undefined4 *)((long)plVar3 + 0xc) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)(plVar3 + 2) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_10008854;
      }
      DAT_10010330 = (long *)*plVar3;
    } while (DAT_10010330 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007fc0();
}

#undef DAT_10010330
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


#undef DAT_100100c0
#define DAT_100100c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2511U)))
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
      if ((undefined *)*puVar5 != &DAT_100100c0) goto LAB_1000895c;
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

#undef DAT_100100c0

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


/* Native exponent classification; Pooka's Free Software License. */
bool recovered_10008a00(double value){return (pf_double_bits(value)&0x7fffffffffffffffULL)<0x7ff0000000000000ULL;}


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


#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dc18
#define DAT_1000dc18 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000dcd0
#define DAT_1000dcd0 (*(double *)(((uintptr_t)pf_module_state + 0x121U)))
#undef DAT_1000dcd8
#define DAT_1000dcd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x129U)))
#undef DAT_1000dce0
#define DAT_1000dce0 (*(double *)(((uintptr_t)pf_module_state + 0x131U)))
#undef DAT_1000dce8
#define DAT_1000dce8 (*(double *)(((uintptr_t)pf_module_state + 0x139U)))
#undef _DAT_1000dcd8
#define _DAT_1000dcd8 (*(double *)(((uintptr_t)pf_module_state + 0x129U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10008ac0(double param_1)

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
  if (_DAT_1000dcd8 < param_1) {
    return DAT_1000dcd0;
  }
  dVar4 = 0.0;
  if (DAT_1000dce0 <= param_1) {
    uVar1 = 0;
    if (DAT_1000dbb0 < param_1) {
      uVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000dbb0;
        uVar1 = uVar1 + 1;
      } while (DAT_1000dbb0 < param_1);
    }
    for (; param_1 < DAT_1000dc18; param_1 = param_1 * DAT_1000dbb0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000dbb8;
    dVar5 = DAT_1000dbb8;
    dVar6 = DAT_1000dbb8;
    do {
      dVar7 = (param_1 / dVar5) * dVar6;
      dVar9 = (param_1 / (double)(iVar2 + -2)) * dVar7;
      dVar8 = (param_1 / (double)(iVar2 + -1)) * dVar9;
      dVar6 = (param_1 / (double)iVar2) * dVar8;
      dVar4 = dVar4 + dVar7 + dVar9 + dVar8 + dVar6;
      dVar5 = dVar5 + DAT_1000dce8;
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

#undef DAT_1000dbb0
#undef DAT_1000dbb8
#undef DAT_1000dc18
#undef DAT_1000dcd0
#undef DAT_1000dcd8
#undef DAT_1000dce0
#undef DAT_1000dce8
#undef _DAT_1000dcd8

#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dc18
#define DAT_1000dc18 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000dcd0
#define DAT_1000dcd0 (*(double *)(((uintptr_t)pf_module_state + 0x121U)))
#undef DAT_1000dcd8
#define DAT_1000dcd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x129U)))
#undef DAT_1000dce0
#define DAT_1000dce0 (*(double *)(((uintptr_t)pf_module_state + 0x131U)))
#undef DAT_1000dce8
#define DAT_1000dce8 (*(double *)(((uintptr_t)pf_module_state + 0x139U)))
#undef DAT_1000dcf0
#define DAT_1000dcf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141U)))
#undef _DAT_1000dcd8
#define _DAT_1000dcd8 (*(double *)(((uintptr_t)pf_module_state + 0x129U)))
#undef _DAT_1000dcf0
#define _DAT_1000dcf0 (*(float *)(((uintptr_t)pf_module_state + 0x141U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10008c30(float param_1)

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
  if (_DAT_1000dcd8 < dVar6) {
    return (float)DAT_1000dcd0;
  }
  dVar5 = 0.0;
  if (DAT_1000dce0 <= dVar6) {
    uVar1 = 0;
    if (_DAT_1000dcf0 < param_1) {
      uVar1 = 0;
      do {
        dVar6 = dVar6 * DAT_1000dbb0;
        uVar1 = uVar1 + 1;
      } while (DAT_1000dbb0 < dVar6);
    }
    for (; dVar6 < DAT_1000dc18; dVar6 = dVar6 * DAT_1000dbb0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000dbb8;
    dVar5 = DAT_1000dbb8;
    dVar7 = DAT_1000dbb8;
    do {
      dVar8 = (dVar6 / dVar4) * dVar7;
      dVar10 = (dVar6 / (double)(iVar2 + -2)) * dVar8;
      dVar9 = (dVar6 / (double)(iVar2 + -1)) * dVar10;
      dVar7 = (dVar6 / (double)iVar2) * dVar9;
      dVar5 = dVar5 + dVar8 + dVar10 + dVar9 + dVar7;
      dVar4 = dVar4 + DAT_1000dce8;
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

#undef DAT_1000dbb0
#undef DAT_1000dbb8
#undef DAT_1000dc18
#undef DAT_1000dcd0
#undef DAT_1000dcd8
#undef DAT_1000dce0
#undef DAT_1000dce8
#undef DAT_1000dcf0
#undef _DAT_1000dcd8
#undef _DAT_1000dcf0

#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dc18
#define DAT_1000dc18 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000dcd0
#define DAT_1000dcd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x121U)))
#undef DAT_1000dcd8
#define DAT_1000dcd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x129U)))
#undef DAT_1000dce0
#define DAT_1000dce0 (*(double *)(((uintptr_t)pf_module_state + 0x131U)))
#undef DAT_1000dce8
#define DAT_1000dce8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x139U)))
#undef _DAT_1000dcd8
#define _DAT_1000dcd8 (*(double *)(((uintptr_t)pf_module_state + 0x129U)))
#define in_stack_00000008 (*(longdouble *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008dc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008dc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;

  dVar4 = (double)in_stack_00000008;
  if ((dVar4 <= _DAT_1000dcd8) && (DAT_1000dce0 <= dVar4)) {
    uVar1 = 0;
    if (DAT_1000dbb0 < dVar4) {
      uVar1 = 0;
      do {
        dVar4 = dVar4 * DAT_1000dbb0;
        uVar1 = uVar1 + 1;
      } while (DAT_1000dbb0 < dVar4);
    }
    for (; dVar4 < DAT_1000dc18; dVar4 = dVar4 * DAT_1000dbb0) {
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

#undef DAT_1000dbb0
#undef DAT_1000dbb8
#undef DAT_1000dc18
#undef DAT_1000dcd0
#undef DAT_1000dcd8
#undef DAT_1000dce0
#undef DAT_1000dce8
#undef _DAT_1000dcd8
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f50
 */

double recovered_10008f50(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)param_1 - (double)param_2;
}


#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dbd8
#define DAT_1000dbd8 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000dc18
#define DAT_1000dc18 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f70
 */

double recovered_10008f70(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004280(param_1);
  if (DAT_1000dbb0 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_1000dbb8;
  }
  else if (param_1 - dVar1 <= DAT_1000dc18) {
    dVar1 = dVar1 + DAT_1000dbd8;
  }
  return dVar1;
}

#undef DAT_1000dbb0
#undef DAT_1000dbb8
#undef DAT_1000dbd8
#undef DAT_1000dc18

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


#undef DAT_1000dd00
#define DAT_1000dd00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_100100c0
#define DAT_100100c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2511U)))
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
                        *(long *)(&DAT_1000dd00 + (ulong)(uVar10 & 0xf) * 8);
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
        if (*(undefined **)pbVar13 != &DAT_100100c0) goto LAB_10009468;
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

#undef DAT_1000dd00
#undef DAT_100100c0
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

void recovered_10009640(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009660
 */

void recovered_10009660(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


#undef DAT_1000dfc0
#define DAT_1000dfc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x411U)))
#undef LAB_10009809
#define LAB_10009809 (*(uint8_t *)(0x10009809U))
#define uStack_68 (*(ulong *)(pf_stack_frame + 120))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 144))
#define local_a8 (*(code * *)(pf_stack_frame + 56))
#define local_a0 (*(undefined * *)(pf_stack_frame + 64))
#define local_98 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_70 (*(ulong * *)(pf_stack_frame + 112))
#define local_60 (*(undefined8 *)(pf_stack_frame + 128))
#define local_58 (*(void * *)(pf_stack_frame + 136))
#define local_48 (*(undefined8 *)(pf_stack_frame + 152))
#define local_40 (*(int *)(pf_stack_frame + 160))
#define local_3c (*(short *)(pf_stack_frame + 164))
#define local_32 (*(undefined2 *)(pf_stack_frame + 174))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009680
 */

undefined8 *
recovered_10009680(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX = 0;
  char cVar4;

  local_98 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 224) + -8);
  local_88 = (undefined1 *)&local_c8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_a8 = recovered_10008040;
  local_a0 = &DAT_1000dfc0;
  local_90 = &LAB_10009809;
  recovered_100086e0(&local_c8);
  if (param_1 != (byte *)0x0) {
    local_32 = 2;
    local_70 = (ulong *)0x0;
    uStack_68 = 0;
    local_60 = 0;
    local_c0 = 1;
    uVar1 = recovered_1000ae30(param_1,(long *)&local_70,extraout_RDX,param_4,param_5);
    if ((char)uVar1 == '\0') {
      cVar4 = '\0';
    }
    else {
      local_c0 = 2;
      uVar2 = recovered_1000b230(local_70,uStack_68,&local_58,(uint3 *)&local_32);
      cVar4 = (char)uVar2;
    }
    uStack_68 = 0;
    recovered_100080f0(local_70);
    if (((cVar4 != '\0') && (local_3c == 2)) && (local_40 != 0)) {
      local_c0 = 3;
      puVar3 = recovered_10008090(0x28);
      puVar3[3] = 0;
      recovered_100080f0((void *)0x0);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      puVar3[2] = local_48;
      local_58 = (void *)0x0;
      local_48 = 0;
      *(short *)((long)puVar3 + 0x1c) = local_3c;
      *(int *)(puVar3 + 3) = local_40;
      puVar3[4] = 0;
      goto LAB_100097d7;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_100097d7:
  uStack_50 = 0;
  recovered_100080f0(local_58);
  recovered_10008700(&local_c8);
  return puVar3;
}

#undef DAT_1000dfc0
#undef LAB_10009809
#undef uStack_68
#undef local_c8
#undef local_c0
#undef uStack_50
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_70
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_3c
#undef local_32

#undef DAT_1000dbb0
#define DAT_1000dbb0 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000dbd0
#define DAT_1000dbd0 (*(double *)(((uintptr_t)pf_module_state + 0x21U)))
#undef DAT_1000dbd8
#define DAT_1000dbd8 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000dc08
#define DAT_1000dc08 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000dd80
#define DAT_1000dd80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef DAT_1000dd90
#define DAT_1000dd90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1U)))
#undef DAT_1000dda0
#define DAT_1000dda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef DAT_1000ddb0
#define DAT_1000ddb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x201U)))
#undef DAT_1000ddd0
#define DAT_1000ddd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef DAT_1000ddd4
#define DAT_1000ddd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x225U)))
#undef DAT_1000dde0
#define DAT_1000dde0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x231U)))
#undef DAT_1000dde8
#define DAT_1000dde8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239U)))
#undef DAT_1000ddf0
#define DAT_1000ddf0 (*(double *)(((uintptr_t)pf_module_state + 0x241U)))
#undef DAT_1000de68
#define DAT_1000de68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b9U)))
#undef UNK_1000dda8
#define UNK_1000dda8 (*(double *)(((uintptr_t)pf_module_state + 0x1f9U)))
#undef _DAT_1000dd80
#define _DAT_1000dd80 (*(long double *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef _DAT_1000dda0
#define _DAT_1000dda0 (*(double *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef _DAT_1000ddd0
#define _DAT_1000ddd0 (*(float *)(((uintptr_t)pf_module_state + 0x221U)))
#undef _DAT_1000ddd4
#define _DAT_1000ddd4 (*(float *)(((uintptr_t)pf_module_state + 0x225U)))
#undef _DAT_1000dde0
#define _DAT_1000dde0 (*(double *)(((uintptr_t)pf_module_state + 0x231U)))
#undef _DAT_1000dde8
#define _DAT_1000dde8 (*(double *)(((uintptr_t)pf_module_state + 0x239U)))
#undef dRam000000001000dda8
#define dRam000000001000dda8 (*(double *)(((uintptr_t)pf_module_state + 0x1f9U)))
#define lStack_50 (*(long *)(pf_stack_frame + 32))
#define local_58 (*(char * *)(pf_stack_frame + 24))
#define local_48 (*(undefined8 *)(pf_stack_frame + 40))
#define local_3c (*(uint *)(pf_stack_frame + 52))
#define local_38 (*(undefined8 * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10009890(uint param_1,uint param_2,long param_3,long param_4)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  ulong uVar5;
  char *pcVar6;
  longlong lVar7;
  void *pvVar8;
  long lVar9;
  undefined2 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  longdouble value;
  uint128 auVar16;

  if ((int)(param_2 | param_1) < 0) {
    return (undefined8 *)0x0;
  }
  local_58 = (char *)0x0;
  lStack_50 = 0;
  local_48 = 0;
  if (param_3 != 0) {
    uVar5 = 0xffffffffffffffff;
    do {
      pcVar6 = (char *)(param_3 + 1 + uVar5);
      uVar5 = uVar5 + 1;
    } while (*pcVar6 != '\0');
    recovered_1000c1b0((long *)&local_58,param_3,uVar5);
    pcVar6 = local_58;
    if (local_58 == (char *)0x0) {
      pcVar6 = &DAT_1000de68;
    }
    if (lStack_50 == 3) {
      if (((*pcVar6 != 's') || (pcVar6[1] != 'a')) || (iVar15 = 2, pcVar6[2] != 'w'))
      goto LAB_10009a66;
    }
    else {
      if (lStack_50 == 4) {
        if (((*pcVar6 != 's') || (pcVar6[1] != 'i')) || (pcVar6[2] != 'n')) goto LAB_10009a66;
        iVar15 = 1;
        cVar4 = pcVar6[3];
      }
      else {
        if (((lStack_50 != 6) || (*pcVar6 != 's')) ||
           ((pcVar6[1] != 'q' || (((pcVar6[2] != 'u' || (pcVar6[3] != 'a')) || (pcVar6[4] != 'r'))))
           )) goto LAB_10009a66;
        iVar15 = 0;
        cVar4 = pcVar6[5];
      }
      if (cVar4 != 'e') goto LAB_10009a66;
    }
    recovered_100080f0(local_58);
    local_58 = (char *)0x0;
    lStack_50 = 0;
    local_48 = 0;
    if (param_4 != 0) {
      uVar5 = 0xffffffffffffffff;
      do {
        pcVar6 = (char *)(param_4 + 1 + uVar5);
        uVar5 = uVar5 + 1;
      } while (*pcVar6 != '\0');
      recovered_1000c1b0((long *)&local_58,param_4,uVar5);
      pcVar6 = &DAT_1000de68;
      if (local_58 != (char *)0x0) {
        pcVar6 = local_58;
      }
      if (lStack_50 == 5) {
        if (((*pcVar6 != 'r') || (pcVar6[1] != 'i')) ||
           ((pcVar6[2] != 'g' || ((pcVar6[3] != 'h' || (uVar14 = 1, pcVar6[4] != 't'))))))
        goto LAB_10009a66;
      }
      else {
        if (lStack_50 != 4) goto LAB_10009a66;
        cVar4 = *pcVar6;
        if (cVar4 == 'l') {
          if (((pcVar6[1] == 'e') && (pcVar6[2] == 'f')) && (uVar14 = 0, pcVar6[3] == 't'))
          goto LAB_10009aa4;
          cVar4 = *pcVar6;
        }
        if (((cVar4 != 'b') || (pcVar6[1] != 'o')) ||
           ((pcVar6[2] != 't' || (uVar14 = 2, pcVar6[3] != 'h')))) goto LAB_10009a66;
      }
LAB_10009aa4:
      recovered_100080f0(local_58);
      local_38 = recovered_10008090(0x28);
      local_38[2] = 0;
      local_38[3] = 0;
      *local_38 = 0;
      local_38[1] = 0;
      *(undefined4 *)(local_38 + 3) = 0xac44;
      *(undefined2 *)((long)local_38 + 0x1c) = 2;
      if (param_2 == 0) goto LAB_10009d07;
      value = ((longdouble)param_2 * (longdouble)_DAT_1000ddd0) / (longdouble)_DAT_1000ddd4;
      if (_DAT_1000dd80 <= value) {
        lVar7 = 0x7fffffffffffffff;
        uVar5 = 0xfffffffffffffffe;
LAB_10009b3a:
        pvVar8 = recovered_10008090(lVar7 * 4);
        uVar12 = 0;
        recovered_100080f0((void *)0x0);
        *local_38 = pvVar8;
        local_38[2] = uVar5;
        if (uVar5 < 4) goto LAB_10009bbd;
        if (uVar5 < 0x10) {
          uVar11 = 0;
LAB_10009ba0:
          uVar12 = uVar5 & 0xfffffffffffffffc;
          do {
            *(undefined8 *)((long)pvVar8 + uVar11 * 2) = 0;
            uVar11 = uVar11 + 4;
          } while (uVar12 != uVar11);
          for (; uVar5 != uVar12; uVar12 = uVar12 + 1) {
LAB_10009bbd:
            *(undefined2 *)((long)pvVar8 + uVar12 * 2) = 0;
          }
        }
        else {
          uVar12 = uVar5 & 0xfffffffffffffff0;
          uVar11 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar8 + uVar11 * 2);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)((long)pvVar8 + uVar11 * 2 + 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            uVar11 = uVar11 + 0x10;
          } while (uVar12 != uVar11);
          if (uVar5 != uVar12) {
            uVar11 = uVar12;
            if ((uVar5 & 0xc) == 0) goto LAB_10009bbd;
            goto LAB_10009ba0;
          }
        }
        local_38[1] = uVar5;
      }
      else {
        lVar7 = recovered_10007e00((float10)value);
        local_38[1] = 0;
        uVar5 = lVar7 * 2;
        if (uVar5 != 0) goto LAB_10009b3a;
        pvVar8 = (void *)0x0;
      }
      if ((0 < (int)param_1) && (lVar7 != 0)) {
        local_3c = uVar14 - 1;
        lVar13 = 0;
        do {
          PF_PART4(auVar16, 8) = (int)((ulong)lVar13 >> 0x20);
          PF_PART8(auVar16, 0) = lVar13;
          PF_PART4(auVar16, 12) = PF_PART4(DAT_1000dd90, 4);
          dVar2 = ((((*(double *)((uint8_t *)&(auVar16)+8)) - dRam000000001000dda8) +
                   (pf_bits_double(CONCAT44(PF_PART4(DAT_1000dd90,0),(int)lVar13)) - _DAT_1000dda0)) *
                  (double)(int)param_1) / _DAT_1000dde0;
          dVar3 = recovered_10004280(dVar2);
          dVar3 = dVar2 - dVar3;
          if (iVar15 == 2) {
            dVar2 = dVar3 + dVar3 + DAT_1000dbd8;
          }
          else if (iVar15 == 1) {
            dVar2 = recovered_10004640(dVar2 * DAT_1000dc08);
          }
          else {
            dVar2 = *(double *)((uintptr_t)&DAT_1000ddb0 + (ulong)(dVar3 < DAT_1000dbb0) * 8);
          }
          dVar2 = dVar2 * DAT_1000dbd0 * _DAT_1000dde8;
          uVar10 = 0x8000;
          if ((DAT_1000ddf0 < dVar2) && (uVar10 = 0x7fff, dVar2 < _DAT_1000dde8)) {
            lVar9 = recovered_10004f80(dVar2);
            uVar10 = (undefined2)lVar9;
          }
          if ((uVar14 & 1) == 0) {
            *(undefined2 *)((long)pvVar8 + lVar13 * 4) = uVar10;
          }
          if (local_3c < 2) {
            *(undefined2 *)((long)pvVar8 + lVar13 * 4 + 2) = uVar10;
          }
          lVar13 = lVar13 + 1;
        } while (lVar7 != lVar13);
      }
LAB_10009d07:
      local_38[4] = 0;
      return local_38;
    }
  }
  local_48 = 0;
  lStack_50 = 0;
  local_58 = (char *)0x0;
LAB_10009a66:
  recovered_100080f0(local_58);
  return (undefined8 *)0x0;
}

#undef DAT_1000dbb0
#undef DAT_1000dbd0
#undef DAT_1000dbd8
#undef DAT_1000dc08
#undef DAT_1000dd80
#undef DAT_1000dd90
#undef DAT_1000dda0
#undef DAT_1000ddb0
#undef DAT_1000ddd0
#undef DAT_1000ddd4
#undef DAT_1000dde0
#undef DAT_1000dde8
#undef DAT_1000ddf0
#undef DAT_1000de68
#undef UNK_1000dda8
#undef _DAT_1000dd80
#undef _DAT_1000dda0
#undef _DAT_1000ddd0
#undef _DAT_1000ddd4
#undef _DAT_1000dde0
#undef _DAT_1000dde8
#undef dRam000000001000dda8
#undef lStack_50
#undef local_58
#undef local_48
#undef local_3c
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d20
 */

undefined8 recovered_10009d20(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  int iVar2;
  long lVar3;

  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined2 *)((long)param_2 + 0x14) = 0;
    if ((((param_1 != (undefined8 *)0x0) && (lVar3 = param_1[1], lVar3 != 0)) &&
        (iVar2 = *(int *)(param_1 + 3), iVar2 != 0)) &&
       (sVar1 = *(short *)((long)param_1 + 0x1c), sVar1 != 0)) {
      *param_2 = *param_1;
      param_2[1] = lVar3;
      *(int *)(param_2 + 2) = iVar2;
      *(short *)((long)param_2 + 0x14) = sVar1;
      return CONCAT71((int7)((ulong)lVar3 >> 8),1);
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d80
 */

undefined4
recovered_10009d80(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  bVar2 = param_1 == (undefined8 *)0x0;
  if (param_2 == (byte *)0x0 || bVar2) {
    return 0;
  }
  uVar1 = recovered_10009db0(param_2,param_1,
                             CONCAT71((int7)((ulong)param_3 >> 8),param_2 == (byte *)0x0 || bVar2),
                             CONCAT71((int7)((ulong)param_4 >> 8),bVar2),param_5);
  return uVar1;
}


#undef DAT_1000df56
#define DAT_1000df56 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a7U)))
#undef DAT_1000dfcc
#define DAT_1000dfcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41dU)))
#undef LAB_10009f5e
#define LAB_10009f5e (*(uint8_t *)(0x10009f5eU))
#undef PTR_recovered_1000cb10_1000f088
#define PTR_recovered_1000cb10_1000f088 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x14d9U)))
#define auStack_e8 (*(undefined1 (*)[232])(pf_stack_frame + 24))
#define local_e0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_d8 (*(undefined4 *)(pf_stack_frame + 40))
#define local_c0 (*(code * *)(pf_stack_frame + 64))
#define local_b8 (*(undefined * *)(pf_stack_frame + 72))
#define local_b0 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_a8 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_a0 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_88 (*(undefined ** *)(pf_stack_frame + 120))
#define local_80 (*(uint * *)(pf_stack_frame + 128))
#define local_78 (*(undefined4 *)(pf_stack_frame + 136))
#define local_74 (*(undefined1 *)(pf_stack_frame + 140))
#define local_70 (*(uint * *)(pf_stack_frame + 144))
#define local_68 (*(bool *)(pf_stack_frame + 152))
#define local_60 (*(undefined8 *)(pf_stack_frame + 160))
#define local_58 (*(uint ** *)(pf_stack_frame + 168))
#define local_50 (*(undefined8 * *)(pf_stack_frame + 176))
#define local_40 (*(undefined8 *)(pf_stack_frame + 192))
#define pbStack_48 (*(byte * *)(pf_stack_frame + 184))
#define local_38 (*(undefined8 *)(pf_stack_frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009db0
 */

undefined4
recovered_10009db0(byte *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined8 extraout_RDX = 0;

  local_b0 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 256) + -8);
  local_a0 = auStack_e8;
  local_c0 = recovered_10008040;
  local_b8 = &DAT_1000dfcc;
  local_a8 = &LAB_10009f5e;
  recovered_100086e0(&local_e0);
  if (param_1 == (byte *)0x0) {
    uVar4 = 0;
    goto LAB_10009f3e;
  }
  local_50 = (undefined8 *)0x0;
  pbStack_48 = (byte *)0x0;
  local_40 = 0;
  local_d8 = 1;
  local_38 = param_1;
  uVar1 = recovered_1000c460(param_2,&local_50);
  if ((char)uVar1 == '\0') {
LAB_10009f07:
    uVar4 = 0;
  }
  else {
    local_58 = &local_70;
    local_80 = (uint *)0x0;
    local_78 = 10;
    local_74 = 0;
    local_88 = &PTR_recovered_1000cb10_1000f088;
    local_68 = false;
    local_60 = 0;
    local_d8 = 2;
    puVar2 = (uint *)recovered_10006d20(local_38,&DAT_1000df56,extraout_RDX,param_4,param_5);
    local_68 = puVar2 != (uint *)0x0;
    local_60 = 0;
    local_80 = puVar2;
    local_70 = puVar2;
    if (puVar2 == (uint *)0x0) goto LAB_10009f07;
    if (((long)pbStack_48 < 0) || (local_50 == (undefined8 *)0x0 && pbStack_48 != (byte *)0x0)) {
      local_68 = false;
      uVar4 = 0;
    }
    else {
      local_d8 = 3;
      local_38 = pbStack_48;
      pbVar3 = (byte *)recovered_100075a0(local_50,1,(long)pbStack_48,puVar2,param_5);
      local_68 = pbVar3 == local_38;
      uVar4 = (undefined4)CONCAT71((int7)((ulong)puVar2 >> 8),local_68);
      if (local_70 == (uint *)0x0) goto LAB_10009f07;
    }
    local_38 = (byte *)CONCAT44(PF_PART4(local_38, 4),uVar4);
    local_d8 = 4;
    recovered_100071a0((int *)local_70);
    uVar4 = (undefined4)local_38;
  }
  pbStack_48 = (byte *)0x0;
  recovered_100080f0(local_50);
LAB_10009f3e:
  recovered_10008700(&local_e0);
  return uVar4;
}

#undef DAT_1000df56
#undef DAT_1000dfcc
#undef LAB_10009f5e
#undef PTR_recovered_1000cb10_1000f088
#undef auStack_e8
#undef local_e0
#undef local_d8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_74
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_40
#undef pbStack_48
#undef local_38

#undef DAT_1000dc20
#define DAT_1000dc20 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000dd80
#define DAT_1000dd80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef DAT_1000dd90
#define DAT_1000dd90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1U)))
#undef DAT_1000dda0
#define DAT_1000dda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef DAT_1000ddd4
#define DAT_1000ddd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x225U)))
#undef DAT_1000dde8
#define DAT_1000dde8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239U)))
#undef DAT_1000ddf0
#define DAT_1000ddf0 (*(double *)(((uintptr_t)pf_module_state + 0x241U)))
#undef UNK_1000dda8
#define UNK_1000dda8 (*(double *)(((uintptr_t)pf_module_state + 0x1f9U)))
#undef _DAT_1000dd80
#define _DAT_1000dd80 (*(long double *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef _DAT_1000dda0
#define _DAT_1000dda0 (*(double *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef _DAT_1000ddd4
#define _DAT_1000ddd4 (*(float *)(((uintptr_t)pf_module_state + 0x225U)))
#undef _DAT_1000dde8
#define _DAT_1000dde8 (*(double *)(((uintptr_t)pf_module_state + 0x239U)))
#undef dRam000000001000dda8
#define dRam000000001000dda8 (*(double *)(((uintptr_t)pf_module_state + 0x1f9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1000a000(long *param_1,long *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_RBX;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  longdouble value;
  double dVar13;
  uint128 auVar14;
  uint128 auVar15;
  uint128 auVar16;
  uint128 auVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double value_00;

  if ((((param_3 < 0 || (param_2 == (long *)0x0 || param_1 == (long *)0x0)) ||
       (*(short *)((long)param_1 + 0x1c) != 2)) || (*(short *)((long)param_2 + 0x1c) != 2)) ||
     ((*(uint *)(param_1 + 3) == 0 || ((int)param_2[3] == 0)))) {
    uVar7 = 0;
  }
  else {
    uVar10 = param_1[1];
    uVar8 = param_2[1];
    uVar7 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (1 < uVar8 && 1 < uVar10) {
      if (param_3 == 0) {
        uVar5 = 0;
      }
      else {
        value = ((longdouble)*(uint *)(param_1 + 3) * (longdouble)param_3) /
                (longdouble)_DAT_1000ddd4;
        if (_DAT_1000dd80 <= value) goto LAB_1000a0b4;
        uVar5 = recovered_10007e00((float10)value);
      }
      uVar10 = uVar10 >> 1;
      uVar11 = uVar10 - uVar5;
      if (uVar5 <= uVar10 && uVar11 != 0) {
        uVar2 = *(uint *)(param_2 + 3);
        uVar3 = *(uint *)(param_1 + 3);
        dVar13 = recovered_100042b0((double)(uVar8 >> 1) / ((double)uVar2 / (double)uVar3));
        uVar10 = (long)(dVar13 - DAT_1000dc20) & (long)dVar13 >> 0x3f | (long)dVar13;
        if (uVar11 <= uVar10) {
          uVar10 = uVar11;
        }
        if (uVar10 != 0) {
          lVar6 = *param_1;
          lVar9 = uVar5 * 4;
          uVar8 = 0;
          dVar13 = DAT_1000ddf0;
          dVar21 = _DAT_1000dda0;
          dVar22 = dRam000000001000dda8;
          uVar19 = PF_PART4(DAT_1000dd90,0);
          uVar20 = PF_PART4(DAT_1000dd90, 4);
          do {
            PF_PART4(auVar14, 8) = (int)(uVar8 >> 0x20);
            PF_PART8(auVar14, 0) = uVar8;
            PF_PART4(auVar14, 12) = uVar20;
            value_00 = (((*(double *)((uint8_t *)&(auVar14)+8)) - dVar22) + (pf_bits_double(CONCAT44(uVar19,(int)uVar8)) - dVar21)) *
                       ((double)uVar2 / (double)uVar3);
            sVar1 = *(short *)(lVar6 + lVar9 + uVar8 * 4);
            uVar5 = (ulong)*(ushort *)((long)param_2 + 0x1c);
            dVar18 = 0.0;
            if ((uVar5 != 0) && (uVar11 = param_2[1], uVar11 != 0 && 0.0 <= value_00)) {
              uVar12 = uVar11;
              if (uVar11 >> 0x20 == 0) {
                uVar12 = uVar11 & 0xffffffff;
              }
              uVar12 = uVar12 / uVar5;
              PF_PART4(auVar15, 8) = (int)(uVar12 >> 0x20);
              PF_PART8(auVar15, 0) = uVar12;
              PF_PART4(auVar15, 12) = uVar20;
              if ((uVar5 <= uVar11) &&
                 (value_00 <
                  ((*(double *)((uint8_t *)&(auVar15)+8)) - dVar22) + (pf_bits_double(CONCAT44(uVar19,(int)uVar12)) - dVar21))) {
                dVar13 = recovered_10004280(value_00);
                uVar11 = (long)(dVar13 - DAT_1000dc20) & (long)dVar13 >> 0x3f | (long)dVar13;
                uVar5 = uVar12 - 1;
                if (uVar11 + 1 <= uVar12 - 1) {
                  uVar5 = uVar11 + 1;
                }
                PF_PART4(auVar16, 8) = (int)(uVar11 >> 0x20);
                PF_PART8(auVar16, 0) = uVar11;
                PF_PART4(auVar16, 12) = PF_PART4(DAT_1000dd90, 4);
                dVar18 = (double)(int)*(short *)(*param_2 +
                                                uVar11 * *(ushort *)((long)param_2 + 0x1c) * 2);
                dVar18 = ((double)(int)*(short *)(*param_2 +
                                                 uVar5 * *(ushort *)((long)param_2 + 0x1c) * 2) -
                         dVar18) * (value_00 -
                                   (((*(double *)((uint8_t *)&(auVar16)+8)) - dRam000000001000dda8) +
                                   (pf_bits_double(CONCAT44(PF_PART4(DAT_1000dd90,0),(int)uVar11)) -
                                   _DAT_1000dda0))) + dVar18;
                dVar13 = DAT_1000ddf0;
                dVar21 = _DAT_1000dda0;
                dVar22 = dRam000000001000dda8;
                uVar19 = PF_PART4(DAT_1000dd90,0);
                uVar20 = PF_PART4(DAT_1000dd90, 4);
              }
            }
            dVar18 = (double)(int)sVar1 + dVar18;
            uVar4 = 0x8000;
            if ((dVar13 < dVar18) && (uVar4 = 0x7fff, dVar18 < _DAT_1000dde8)) {
              lVar6 = recovered_10004f80(dVar18);
              uVar4 = (undefined2)lVar6;
              dVar13 = DAT_1000ddf0;
              dVar21 = _DAT_1000dda0;
              dVar22 = dRam000000001000dda8;
              uVar19 = PF_PART4(DAT_1000dd90,0);
              uVar20 = PF_PART4(DAT_1000dd90, 4);
            }
            lVar6 = *param_1;
            *(undefined2 *)(lVar6 + lVar9 + uVar8 * 4) = uVar4;
            sVar1 = *(short *)(lVar6 + lVar9 + 2 + uVar8 * 4);
            uVar5 = (ulong)*(ushort *)((long)param_2 + 0x1c);
            dVar18 = 0.0;
            if ((((uVar5 != 0) && (uVar11 = param_2[1], uVar11 != 0)) &&
                (*(ushort *)((long)param_2 + 0x1c) != 1)) && (0.0 <= value_00)) {
              uVar12 = uVar11;
              if (uVar11 >> 0x20 == 0) {
                uVar12 = uVar11 & 0xffffffff;
              }
              if ((uVar5 <= uVar11) && (value_00 < (double)(long)(uVar12 / uVar5))) {
                dVar13 = recovered_10004280(value_00);
                uVar11 = (long)(dVar13 - DAT_1000dc20) & (long)dVar13 >> 0x3f | (long)dVar13;
                uVar5 = uVar12 / uVar5 - 1;
                if (uVar11 + 1 <= uVar5) {
                  uVar5 = uVar11 + 1;
                }
                PF_PART4(auVar17, 8) = (int)(uVar11 >> 0x20);
                PF_PART8(auVar17, 0) = uVar11;
                PF_PART4(auVar17, 12) = PF_PART4(DAT_1000dd90, 4);
                dVar18 = (double)(int)*(short *)(*param_2 + 2 +
                                                uVar11 * *(ushort *)((long)param_2 + 0x1c) * 2);
                dVar18 = ((double)(int)*(short *)(*param_2 + 2 +
                                                 uVar5 * *(ushort *)((long)param_2 + 0x1c) * 2) -
                         dVar18) * (value_00 -
                                   (((*(double *)((uint8_t *)&(auVar17)+8)) - dRam000000001000dda8) +
                                   (pf_bits_double(CONCAT44(PF_PART4(DAT_1000dd90,0),(int)uVar11)) -
                                   _DAT_1000dda0))) + dVar18;
                dVar13 = DAT_1000ddf0;
                dVar21 = _DAT_1000dda0;
                dVar22 = dRam000000001000dda8;
                uVar19 = PF_PART4(DAT_1000dd90,0);
                uVar20 = PF_PART4(DAT_1000dd90, 4);
              }
            }
            dVar18 = (double)(int)sVar1 + dVar18;
            uVar4 = 0x8000;
            if ((dVar13 < dVar18) && (uVar4 = 0x7fff, dVar18 < _DAT_1000dde8)) {
              lVar6 = recovered_10004f80(dVar18);
              uVar4 = (undefined2)lVar6;
              dVar13 = DAT_1000ddf0;
              dVar21 = _DAT_1000dda0;
              dVar22 = dRam000000001000dda8;
              uVar19 = PF_PART4(DAT_1000dd90,0);
              uVar20 = PF_PART4(DAT_1000dd90, 4);
            }
            lVar6 = *param_1;
            *(undefined2 *)(lVar6 + lVar9 + 2 + uVar8 * 4) = uVar4;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar10);
        }
        param_1[4] = 0;
      }
    }
  }
LAB_1000a0b4:
  return uVar7 & 0xffffffff;
}

#undef DAT_1000dc20
#undef DAT_1000dd80
#undef DAT_1000dd90
#undef DAT_1000dda0
#undef DAT_1000ddd4
#undef DAT_1000dde8
#undef DAT_1000ddf0
#undef UNK_1000dda8
#undef _DAT_1000dd80
#undef _DAT_1000dda0
#undef _DAT_1000ddd4
#undef _DAT_1000dde8
#undef dRam000000001000dda8

#undef DAT_1000dd80
#define DAT_1000dd80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef DAT_1000ddd4
#define DAT_1000ddd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x225U)))
#undef DAT_1000dfe0
#define DAT_1000dfe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x431U)))
#undef LAB_1000a700
#define LAB_1000a700 (*(uint8_t *)(0x1000a700U))
#undef _DAT_1000dd80
#define _DAT_1000dd80 (*(long double *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef _DAT_1000ddd4
#define _DAT_1000ddd4 (*(float *)(((uintptr_t)pf_module_state + 0x225U)))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 168))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 176))
#define local_a8 (*(code * *)(pf_stack_frame + 200))
#define local_a0 (*(undefined * *)(pf_stack_frame + 208))
#define local_98 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_70 (*(ulong *)(pf_stack_frame + 256))
#define local_68 (*(ulong *)(pf_stack_frame + 264))
#define local_60 (*(ulong *)(pf_stack_frame + 272))
#define local_58 (*(ulong *)(pf_stack_frame + 280))
#define auStackY_158 (*(undefined1 (*)[344])(pf_stack_frame + 24))
#define local_50 (*(void ** *)(pf_stack_frame + 288))
#define local_48 (*(void * *)(pf_stack_frame + 296))
#define local_40 (*(void * *)(pf_stack_frame + 304))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1000a4c0(void **param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  void **ppvVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  longdouble lVar7;

  local_98 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 368) + -8);
  local_88 = auStackY_158 + 0x80;
  local_a8 = recovered_10008040;
  local_a0 = &DAT_1000dfe0;
  local_90 = &LAB_1000a700;
  recovered_100086e0(&local_c8);
  uVar6 = 0;
  if ((((long)param_2 <= (long)param_3) && (param_1 != (void **)0x0)) &&
     (-1 < (long)(param_3 | param_2))) {
    if (((ulong)*(ushort *)((long)param_1 + 0x1c) == 0) ||
       (uVar3 = *(uint *)(param_1 + 3), uVar3 == 0)) {
      uVar6 = 0;
    }
    else {
      pvVar1 = param_1[1];
      if ((ulong)pvVar1 >> 0x20 == 0) {
        pvVar1 = (void *)((ulong)pvVar1 & 0xffffffff);
      }
      uVar5 = (ulong)pvVar1 / (ulong)*(ushort *)((long)param_1 + 0x1c);
      uVar6 = 0x7fffffffffffffff;
      if ((long)param_2 < 1) {
        uVar4 = 0;
      }
      else {
        local_68 = (ulong)uVar3;
        lVar7 = ((longdouble)local_68 * (longdouble)(long)param_2) / (longdouble)_DAT_1000ddd4;
        uVar4 = 0x7fffffffffffffff;
        local_70 = param_2;
        if (lVar7 < _DAT_1000dd80) {
          local_c0 = 0xffffffff;
          uVar4 = recovered_10007e00((float10)lVar7);
          uVar3 = *(uint *)(param_1 + 3);
        }
      }
      if (uVar3 == 0 || (long)param_3 < 1) {
        uVar6 = 0;
      }
      else {
        local_58 = (ulong)uVar3;
        lVar7 = ((longdouble)local_58 * (longdouble)(long)param_3) / (longdouble)_DAT_1000ddd4;
        local_60 = param_3;
        if (lVar7 < _DAT_1000dd80) {
          local_c0 = 0xffffffff;
          uVar6 = recovered_10007e00((float10)lVar7);
        }
      }
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      if (uVar5 < uVar6) {
        uVar6 = uVar5;
      }
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      local_48 = (void *)0x0;
      uStack_38 = (void *)0x0;
      local_40 = (void *)0x0;
      local_c0 = 1;
      local_50 = param_1;
      recovered_1000d7b0((long *)&local_48,0,
                         (undefined2 *)
                         ((long)*param_1 + uVar4 * *(ushort *)((long)param_1 + 0x1c) * 2),
                         (undefined2 *)
                         ((long)*param_1 + uVar6 * *(ushort *)((long)param_1 + 0x1c) * 2));
      ppvVar2 = local_50;
      if (&local_48 != local_50) {
        local_50[1] = (void *)0x0;
        recovered_100080f0(*local_50);
        *ppvVar2 = local_48;
        ppvVar2[1] = local_40;
        ppvVar2[2] = uStack_38;
        local_48 = (void *)0x0;
        uStack_38 = (void *)0x0;
      }
      ppvVar2[4] = (void *)0x0;
      local_40 = (void *)0x0;
      recovered_100080f0(local_48);
      uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
    }
  }
  recovered_10008700(&local_c8);
  return uVar6 & 0xffffffff;
}

#undef DAT_1000dd80
#undef DAT_1000ddd4
#undef DAT_1000dfe0
#undef LAB_1000a700
#undef _DAT_1000dd80
#undef _DAT_1000ddd4
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
#undef auStackY_158
#undef local_50
#undef local_48
#undef local_40
#undef uStack_38

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#define lStack_30 (*(long *)(pf_stack_frame + 32))
#define local_40 (*(long *)(pf_stack_frame + 16))
#define local_38 (*(long *)(pf_stack_frame + 24))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined2 *)(pf_stack_frame + 44))
#define local_20 (*(double *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a750
 */

undefined8 recovered_1000a750(double param_1,long *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  undefined7 extraout_var = 0;
  ulong uVar3;
  undefined8 uVar4;

  if (param_2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    local_20 = param_1;
    bVar2 = recovered_10008a00(param_1);
    uVar4 = 0;
    if ((0.0 < local_20) && ((int)CONCAT71(extraout_var,bVar2) != 0)) {
      uVar4 = 1;
      if (((local_20 != DAT_1000dbb8) || (NAN(local_20) || NAN(DAT_1000dbb8))) &&
         ((uVar3 = (ulong)*(ushort *)((long)param_2 + 0x1c), uVar3 != 0 &&
          (uVar1 = param_2[1], uVar3 <= uVar1)))) {
        if (uVar1 >> 0x20 == 0) {
          uVar1 = uVar1 & 0xffffffff;
        }
        recovered_1000a820(local_20,&local_40,param_2,uVar1 / uVar3);
        param_2[1] = 0;
        recovered_100080f0((void *)*param_2);
        *param_2 = local_40;
        param_2[1] = local_38;
        param_2[2] = lStack_30;
        *(undefined4 *)(param_2 + 3) = local_28;
        *(undefined2 *)((long)param_2 + 0x1c) = local_24;
        recovered_100080f0((void *)0x0);
        param_2[4] = 0;
      }
    }
  }
  return uVar4;
}

#undef DAT_1000dbb8
#undef lStack_30
#undef local_40
#undef local_38
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000dc20
#define DAT_1000dc20 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000dd90
#define DAT_1000dd90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1U)))
#undef DAT_1000dda0
#define DAT_1000dda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef DAT_1000dde8
#define DAT_1000dde8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239U)))
#undef DAT_1000ddf0
#define DAT_1000ddf0 (*(double *)(((uintptr_t)pf_module_state + 0x241U)))
#undef DAT_1000dfe8
#define DAT_1000dfe8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x439U)))
#undef LAB_1000ac28
#define LAB_1000ac28 (*(uint8_t *)(0x1000ac28U))
#undef UNK_1000dda8
#define UNK_1000dda8 (*(double *)(((uintptr_t)pf_module_state + 0x1f9U)))
#undef _DAT_1000dda0
#define _DAT_1000dda0 (*(double *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef _DAT_1000dde8
#define _DAT_1000dde8 (*(double *)(((uintptr_t)pf_module_state + 0x239U)))
#undef dRam000000001000dda8
#define dRam000000001000dda8 (*(double *)(((uintptr_t)pf_module_state + 0x1f9U)))
#define local_f8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_f0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_d8 (*(code * *)(pf_stack_frame + 56))
#define local_d0 (*(undefined * *)(pf_stack_frame + 64))
#define local_c8 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_c0 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_b8 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_a0 (*(void * *)(pf_stack_frame + 112))
#define local_98 (*(ulong *)(pf_stack_frame + 120))
#define local_90 (*(undefined8 * *)(pf_stack_frame + 128))
#define local_88 (*(double *)(pf_stack_frame + 136))
#define local_78 (*(void * *)(pf_stack_frame + 152))
#define local_70 (*(ulong *)(pf_stack_frame + 160))
#define local_68 (*(long *)(pf_stack_frame + 168))
#define local_60 (*(long *)(pf_stack_frame + 176))
#define local_58 (*(double *)(pf_stack_frame + 184))
#define local_50 (*(ulong *)(pf_stack_frame + 192))
#define dStack_80 (*(double *)(pf_stack_frame + 144))
#define local_48 (*(long * *)(pf_stack_frame + 200))
#define local_40 (*(undefined8 * *)(pf_stack_frame + 208))
#define local_32 (*(undefined2 *)(pf_stack_frame + 222))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_1000a820(double param_1,undefined8 *param_2,long *param_3,long param_4)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint128 auVar11;
  double dVar13;
  uint128 auVar12;
  uint128 auVar14;

  local_c8 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 272) + -8);
  local_b8 = (undefined1 *)&local_f8;
  *param_2 = 0;
  param_2[2] = 0;
  iVar10 = (int)param_3[3];
  *(int *)(param_2 + 3) = iVar10;
  uVar3 = *(ushort *)((long)param_3 + 0x1c);
  *(ushort *)((long)param_2 + 0x1c) = uVar3;
  local_70 = (ulong)uVar3;
  uVar9 = local_70 * param_4;
  param_2[1] = 0;
  local_d8 = recovered_10008040;
  local_d0 = &DAT_1000dfe8;
  local_c0 = &LAB_1000ac28;
  local_90 = param_2;
  local_60 = param_4;
  local_58 = param_1;
  local_48 = param_3;
  local_40 = param_2;
  recovered_100086e0(&local_f8);
  if (uVar9 == 0) {
    pvVar5 = (void *)0x0;
    uVar2 = uVar3;
    goto LAB_1000a9b6;
  }
  local_f0 = 1;
  local_50 = uVar9;
  local_32 = uVar3;
  pvVar5 = recovered_10008090(uVar9 * 2);
  uVar9 = 0;
  recovered_100080f0((void *)0x0);
  *local_40 = pvVar5;
  local_40[2] = local_50;
  if (local_50 < 4) goto LAB_1000a993;
  if (local_50 < 0x10) {
    uVar6 = 0;
LAB_1000a96e:
    uVar9 = local_50 & 0xfffffffffffffffc;
    do {
      *(undefined8 *)((long)pvVar5 + uVar6 * 2) = 0;
      uVar6 = uVar6 + 4;
    } while (uVar9 != uVar6);
    for (; local_50 != uVar9; uVar9 = uVar9 + 1) {
LAB_1000a993:
      *(undefined2 *)((long)pvVar5 + uVar9 * 2) = 0;
    }
  }
  else {
    uVar9 = local_50 & 0xfffffffffffffff0;
    uVar6 = 0;
    do {
      puVar1 = (undefined8 *)((long)pvVar5 + uVar6 * 2);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)pvVar5 + uVar6 * 2 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar6 = uVar6 + 0x10;
    } while (uVar9 != uVar6);
    if (local_50 != uVar9) {
      uVar6 = uVar9;
      if ((local_50 & 0xc) == 0) goto LAB_1000a993;
      goto LAB_1000a96e;
    }
  }
  local_40[1] = local_50;
  uVar3 = *(ushort *)((long)local_48 + 0x1c);
  iVar10 = (int)local_48[3];
  uVar2 = local_32;
LAB_1000a9b6:
  local_78 = pvVar5;
  if ((((0.0 < local_58) && (uVar3 != 0)) && (iVar10 != 0)) && (local_60 != 0 && local_48[1] != 0))
  {
    lVar7 = 0;
    local_32 = uVar2;
    do {
      PF_PART4(auVar11, 8) = (int)((ulong)lVar7 >> 0x20);
      PF_PART8(auVar11, 0) = lVar7;
      PF_PART4(auVar11, 12) = PF_PART4(DAT_1000dd90, 4);
      dVar13 = (*(double *)((uint8_t *)&(auVar11)+8)) - dRam000000001000dda8;
      local_68 = lVar7;
      if (local_32 != 0) {
        local_88 = (dVar13 + (pf_bits_double(CONCAT44(PF_PART4(DAT_1000dd90,0),(int)lVar7)) - _DAT_1000dda0)
                   ) * local_58;
        local_a0 = (void *)(lVar7 * (uintptr_t)local_70 * 2 + (long)local_78);
        uVar9 = 0;
        dStack_80 = dVar13;
        do {
          uVar6 = (ulong)*(ushort *)((long)local_48 + 0x1c);
          dVar13 = 0.0;
          local_50 = uVar9;
          if (((uVar6 == 0) || (uVar6 <= uVar9)) ||
             ((local_88 < 0.0 || (uVar9 = local_48[1], uVar9 == 0)))) {
LAB_1000aa70:
            local_f0 = 3;
            lVar7 = recovered_10004f80(dVar13);
            uVar4 = (undefined2)lVar7;
          }
          else {
            uVar8 = uVar9;
            if (uVar9 >> 0x20 == 0) {
              uVar8 = uVar9 & 0xffffffff;
            }
            uVar8 = uVar8 / uVar6;
            PF_PART4(auVar14, 8) = (int)(uVar8 >> 0x20);
            PF_PART8(auVar14, 0) = uVar8;
            PF_PART4(auVar14, 12) = PF_PART4(DAT_1000dd90, 4);
            if ((uVar9 < uVar6) ||
               (((*(double *)((uint8_t *)&(auVar14)+8)) - dRam000000001000dda8) +
                (pf_bits_double(CONCAT44(PF_PART4(DAT_1000dd90,0),(int)uVar8)) - _DAT_1000dda0) <= local_88)
               ) goto LAB_1000aa70;
            local_f0 = 2;
            local_98 = uVar8;
            dVar13 = recovered_10004280(local_88);
            uVar6 = (long)(dVar13 - DAT_1000dc20) & (long)dVar13 >> 0x3f | (long)dVar13;
            uVar9 = local_98 - 1;
            if (uVar6 + 1 <= local_98 - 1) {
              uVar9 = uVar6 + 1;
            }
            PF_PART4(auVar12, 8) = (int)(uVar6 >> 0x20);
            PF_PART8(auVar12, 0) = uVar6;
            PF_PART4(auVar12, 12) = PF_PART4(DAT_1000dd90, 4);
            dVar13 = (double)(int)*(short *)(*local_48 +
                                             uVar6 * *(ushort *)((long)local_48 + 0x1c) * 2 +
                                            local_50 * 2);
            dVar13 = ((double)(int)*(short *)(*local_48 +
                                              uVar9 * *(ushort *)((long)local_48 + 0x1c) * 2 +
                                             local_50 * 2) - dVar13) *
                     (local_88 -
                     (((*(double *)((uint8_t *)&(auVar12)+8)) - dRam000000001000dda8) +
                     (pf_bits_double(CONCAT44(PF_PART4(DAT_1000dd90,0),(int)uVar6)) - _DAT_1000dda0))) +
                     dVar13;
            uVar4 = 0x8000;
            if ((DAT_1000ddf0 < dVar13) && (uVar4 = 0x7fff, dVar13 < _DAT_1000dde8))
            goto LAB_1000aa70;
          }
          *(undefined2 *)((long)local_a0 + local_50 * 2) = uVar4;
          uVar9 = local_50 + 1;
        } while (uVar9 != local_70);
      }
      lVar7 = local_68 + 1;
    } while (lVar7 != local_60);
  }
  recovered_10008700(&local_f8);
  return local_90;
}

#undef DAT_1000dc20
#undef DAT_1000dd90
#undef DAT_1000dda0
#undef DAT_1000dde8
#undef DAT_1000ddf0
#undef DAT_1000dfe8
#undef LAB_1000ac28
#undef UNK_1000dda8
#undef _DAT_1000dda0
#undef _DAT_1000dde8
#undef dRam000000001000dda8
#undef local_f8
#undef local_f0
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef dStack_80
#undef local_48
#undef local_40
#undef local_32

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dd90
#define DAT_1000dd90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1U)))
#undef DAT_1000dda0
#define DAT_1000dda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef UNK_1000dda8
#define UNK_1000dda8 (*(double *)(((uintptr_t)pf_module_state + 0x1f9U)))
#undef _DAT_1000dda0
#define _DAT_1000dda0 (*(double *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef dRam000000001000dda8
#define dRam000000001000dda8 (*(double *)(((uintptr_t)pf_module_state + 0x1f9U)))
#define lStack_30 (*(long *)(pf_stack_frame + 32))
#define local_40 (*(long *)(pf_stack_frame + 16))
#define local_38 (*(long *)(pf_stack_frame + 24))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined2 *)(pf_stack_frame + 44))
#define local_20 (*(double *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000aca0(double param_1,long *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;
  ulong uVar2;
  longlong lVar3;
  ulong uVar4;
  undefined8 uVar5;
  double value;
  uint128 auVar6;

  if (param_2 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    local_20 = param_1;
    bVar1 = recovered_10008a00(param_1);
    uVar5 = 0;
    if ((0.0 < local_20) && ((int)CONCAT71(extraout_var,bVar1) != 0)) {
      uVar5 = 1;
      if (((local_20 != DAT_1000dbb8) || (NAN(local_20) || NAN(DAT_1000dbb8))) &&
         ((uVar4 = (ulong)*(ushort *)((long)param_2 + 0x1c), uVar4 != 0 &&
          (uVar2 = param_2[1], uVar4 <= uVar2)))) {
        if (uVar2 >> 0x20 == 0) {
          uVar2 = uVar2 & 0xffffffff;
        }
        uVar2 = uVar2 / uVar4;
        PF_PART4(auVar6, 8) = (int)(uVar2 >> 0x20);
        PF_PART8(auVar6, 0) = uVar2;
        PF_PART4(auVar6, 12) = PF_PART4(DAT_1000dd90, 4);
        value = (((*(double *)((uint8_t *)&(auVar6)+8)) - dRam000000001000dda8) +
                (pf_bits_double(CONCAT44(PF_PART4(DAT_1000dd90,0),(int)uVar2)) - _DAT_1000dda0)) / local_20;
        if (value <= 0.0) {
          lVar3 = 0;
        }
        else {
          lVar3 = recovered_10004610(value);
        }
        recovered_1000a820(local_20,&local_40,param_2,lVar3);
        param_2[1] = 0;
        recovered_100080f0((void *)*param_2);
        *param_2 = local_40;
        param_2[1] = local_38;
        param_2[2] = lStack_30;
        *(undefined4 *)(param_2 + 3) = local_28;
        *(undefined2 *)((long)param_2 + 0x1c) = local_24;
        recovered_100080f0((void *)0x0);
        param_2[4] = 0;
      }
    }
  }
  return uVar5;
}

#undef DAT_1000dbb8
#undef DAT_1000dd90
#undef DAT_1000dda0
#undef UNK_1000dda8
#undef _DAT_1000dda0
#undef dRam000000001000dda8
#undef lStack_30
#undef local_40
#undef local_38
#undef local_28
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000adb0
 */

undefined8 recovered_1000adb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000adc0
 */

undefined8 recovered_1000adc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000add0
 */

undefined8 recovered_1000add0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ade0
 */

void recovered_1000ade0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  param_1[4] = 0;
  param_1[1] = 0;
  recovered_100080f0((void *)*param_1);
  recovered_100080f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae20
 */

void recovered_1000ae20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000df59
#define DAT_1000df59 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aaU)))
#undef DAT_1000dff4
#define DAT_1000dff4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x445U)))
#undef LAB_1000b193
#define LAB_1000b193 (*(uint8_t *)(0x1000b193U))
#undef PTR_recovered_1000ba70_1000f010
#define PTR_recovered_1000ba70_1000f010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1461U)))
#define local_58 (*(undefined1 *)(pf_stack_frame + 168))
#define local_50 (*(ulong *)(pf_stack_frame + 176))
#define local_48 (*(byte ** *)(pf_stack_frame + 184))
#define local_40 (*(ulong *)(pf_stack_frame + 192))
#define local_38 (*(long * *)(pf_stack_frame + 200))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 128))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 144))
#define local_e8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_e0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_c8 (*(code * *)(pf_stack_frame + 56))
#define local_c0 (*(undefined * *)(pf_stack_frame + 64))
#define local_b8 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_b0 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_a8 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_90 (*(undefined ** *)(pf_stack_frame + 112))
#define local_88 (*(byte * *)(pf_stack_frame + 120))
#define local_78 (*(undefined8 *)(pf_stack_frame + 136))
#define local_68 (*(undefined1 *)(pf_stack_frame + 152))
#define local_60 (*(byte * *)(pf_stack_frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae30
 */

ulong recovered_1000ae30(byte *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 *param_5)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_RDX = 0;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;

  local_b8 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 256) + -8);
  local_a8 = (undefined1 *)&local_e8;
  local_c8 = recovered_10008040;
  local_c0 = &DAT_1000dff4;
  local_b0 = &LAB_1000b193;
  recovered_100086e0(&local_e8);
  if (param_2 != (long *)0x0 && param_1 != (byte *)0x0) {
    local_48 = &local_60;
    local_88 = (byte *)0x0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_90 = &PTR_recovered_1000ba70_1000f010;
    local_58 = 0;
    local_50 = 0;
    local_e0 = 1;
    local_38 = param_2;
    local_88 = recovered_10006d20(param_1,&DAT_1000df59,extraout_RDX,param_4,param_5);
    local_58 = local_88 != (byte *)0x0;
    local_50 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = local_88;
    if ((bool)local_58) {
      local_e0 = 2;
      uVar4 = recovered_10007730((int *)local_88,0,2);
      local_58 = (int)uVar4 == 0;
      if (local_60 != (byte *)0x0) {
        local_e0 = 3;
        uVar5 = recovered_100077b0((long)local_60);
        if ((long)uVar5 < 0) {
          local_58 = 0;
LAB_1000afb1:
          plVar8 = (long *)0x0;
          if (local_60 == (byte *)0x0) goto LAB_1000b173;
        }
        else {
          local_58 = 1;
          if (uVar5 == 0) goto LAB_1000afb1;
          local_40 = uVar5;
          if (local_60 == (byte *)0x0) {
            local_58 = false;
          }
          else {
            local_e0 = 4;
            uVar4 = recovered_10007730((int *)local_60,0,0);
            local_58 = (int)uVar4 == 0;
          }
          uVar5 = local_38[1];
          uVar10 = local_40;
          plVar8 = local_38;
          if (local_40 < uVar5) {
            local_38[1] = local_40;
          }
          else if (uVar5 < local_40) {
            if ((ulong)local_38[2] < local_40) {
              local_e0 = 5;
              param_1 = recovered_10008090(local_40);
              plVar8 = local_38;
              uVar10 = local_40;
              pointer = (void *)*local_38;
              uVar5 = local_38[1];
              if (uVar5 != 0) {
                uVar6 = 0;
                if ((3 < uVar5) && (0x1f < (ulong)((long)param_1 - (long)pointer))) {
                  if (uVar5 < 0x20) {
                    uVar7 = 0;
                  }
                  else {
                    uVar6 = uVar5 & 0xffffffffffffffe0;
                    uVar7 = 0;
                    do {
                      uVar4 = ((undefined8 *)((long)pointer + uVar7))[1];
                      puVar1 = (undefined8 *)((long)pointer + uVar7 + 0x10);
                      uVar2 = *puVar1;
                      uVar3 = puVar1[1];
                      *(undefined8 *)(param_1 + uVar7) = *(undefined8 *)((long)pointer + uVar7);
                      *(undefined8 *)(param_1 + uVar7 + 8) = uVar4;
                      *(undefined8 *)(param_1 + uVar7 + 0x10) = uVar2;
                      *(undefined8 *)(param_1 + uVar7 + 0x10 + 8) = uVar3;
                      uVar7 = uVar7 + 0x20;
                    } while (uVar6 != uVar7);
                    if (uVar5 == uVar6) goto LAB_1000b0d6;
                    uVar7 = uVar6;
                    if ((uVar5 & 0x1c) == 0) goto LAB_1000b082;
                  }
                  uVar6 = uVar5 & 0xfffffffffffffffc;
                  do {
                    *(undefined4 *)(param_1 + uVar7) = *(undefined4 *)((long)pointer + uVar7);
                    uVar7 = uVar7 + 4;
                  } while (uVar6 != uVar7);
                  if (uVar5 == uVar6) goto LAB_1000b0d6;
                }
LAB_1000b082:
                uVar9 = uVar5 & 3;
                uVar7 = uVar6;
                if (uVar9 != 0) {
                  do {
                    param_5 = (undefined8 *)(ulong)*(byte *)((long)pointer + uVar7);
                    param_1[uVar7] = *(byte *)((long)pointer + uVar7);
                    uVar7 = uVar7 + 1;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                if (uVar6 - uVar5 < 0xfffffffffffffffd) {
                  do {
                    param_1[uVar7] = *(byte *)((long)pointer + uVar7);
                    param_1[uVar7 + 1] = *(byte *)((long)pointer + uVar7 + 1);
                    param_1[uVar7 + 2] = *(byte *)((long)pointer + uVar7 + 2);
                    param_1[uVar7 + 3] = *(byte *)((long)pointer + uVar7 + 3);
                    uVar7 = uVar7 + 4;
                  } while (uVar5 != uVar7);
                }
              }
LAB_1000b0d6:
              recovered_100080f0(pointer);
              *plVar8 = (long)param_1;
              plVar8[2] = uVar10;
              uVar5 = plVar8[1];
            }
            while (uVar5 < uVar10) {
              *(undefined1 *)(*plVar8 + uVar5) = 0;
              uVar5 = plVar8[1] + 1;
              plVar8[1] = uVar5;
            }
          }
          if ((undefined8 *)*plVar8 == (undefined8 *)0x0 || local_60 == (byte *)0x0) {
            plVar8 = (long *)0x0;
            local_50 = 0;
          }
          else {
            local_e0 = 6;
            local_50 = recovered_10007270((undefined8 *)*plVar8,1,uVar10,(int *)local_60,param_5);
            plVar8 = (long *)CONCAT71((int7)((ulong)param_1 >> 8),local_50 == local_40);
          }
          local_58 = SUB81(plVar8,0);
          if (local_60 == (byte *)0x0) goto LAB_1000b171;
        }
        local_e0 = 7;
        local_38 = plVar8;
        recovered_100071a0((int *)local_60);
        plVar8 = local_38;
        goto LAB_1000b173;
      }
    }
  }
LAB_1000b171:
  plVar8 = (long *)0x0;
LAB_1000b173:
  recovered_10008700(&local_e8);
  return (ulong)plVar8 & 0xffffffff;
}

#undef DAT_1000df59
#undef DAT_1000dff4
#undef LAB_1000b193
#undef PTR_recovered_1000ba70_1000f010
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef uStack_80
#undef uStack_70
#undef local_e8
#undef local_e0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_90
#undef local_88
#undef local_78
#undef local_68
#undef local_60

#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dbd8
#define DAT_1000dbd8 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000ddc0
#define DAT_1000ddc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef DAT_1000df5c
#define DAT_1000df5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3adU)))
#undef DAT_1000df61
#define DAT_1000df61 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b2U)))
#undef DAT_1000df66
#define DAT_1000df66 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b7U)))
#undef DAT_1000df6b
#define DAT_1000df6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bcU)))
#undef DAT_1000e010
#define DAT_1000e010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x461U)))
#undef LAB_1000b9ec
#define LAB_1000b9ec (*(uint8_t *)(0x1000b9ecU))
#define local_148 (*(uint3 * *)(pf_stack_frame + 24))
#define local_140 (*(ulong *)(pf_stack_frame + 32))
#define local_138 (*(ulong *)(pf_stack_frame + 40))
#define local_130 (*(ulong *)(pf_stack_frame + 48))
#define local_128 (*(double *)(pf_stack_frame + 56))
#define local_120 (*(ulong *)(pf_stack_frame + 64))
#define local_118 (*(undefined8 *)(pf_stack_frame + 72))
#define local_110 (*(undefined4 *)(pf_stack_frame + 80))
#define local_f8 (*(code * *)(pf_stack_frame + 104))
#define local_f0 (*(undefined * *)(pf_stack_frame + 112))
#define local_e8 (*(undefined1 * *)(pf_stack_frame + 120))
#define local_e0 (*(undefined1 * *)(pf_stack_frame + 128))
#define local_d8 (*(undefined1 * *)(pf_stack_frame + 136))
#define local_bc (*(uint *)(pf_stack_frame + 164))
#define local_b8 (*(uint3 * *)(pf_stack_frame + 168))
#define local_b0 (*(void ** *)(pf_stack_frame + 176))
#define local_a8 (*(void * *)(pf_stack_frame + 184))
#define local_98 (*(void * *)(pf_stack_frame + 200))
#define local_90 (*(int *)(pf_stack_frame + 208))
#define local_8c (*(short *)(pf_stack_frame + 212))
#define local_88 (*(uint3 * *)(pf_stack_frame + 216))
#define local_80 (*(ulong *)(pf_stack_frame + 224))
#define local_74 (*(uint *)(pf_stack_frame + 236))
#define local_70 (*(uint3 * *)(pf_stack_frame + 240))
#define local_68 (*(ulong *)(pf_stack_frame + 248))
#define local_60 (*(long *)(pf_stack_frame + 256))
#define local_58 (*(uint3 * *)(pf_stack_frame + 264))
#define local_50 (*(undefined8 *)(pf_stack_frame + 272))
#define local_48 (*(undefined8 *)(pf_stack_frame + 280))
#define local_40 (*(uint3 * *)(pf_stack_frame + 288))
#define local_38 (*(undefined8 *)(pf_stack_frame + 296))
#define pvStack_a0 (*(void * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b230
 */

undefined8 recovered_1000b230(ulong *param_1,ulong param_2,void **param_3,uint3 *param_4)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  void **ppvVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint3 *puVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  undefined2 uVar13;
  uint3 *puVar14;
  uint3 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  uint3 *puVar18;
  double dVar19;

  local_e8 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 352) + -8);
  local_d8 = (undefined1 *)&local_148;
  local_f8 = recovered_10008040;
  local_f0 = &DAT_1000e010;
  local_e0 = &LAB_1000b9ec;
  recovered_100086e0(&local_118);
  uVar16 = 0;
  if (((param_2 < 0xc) || (param_1 == (ulong *)0x0)) || (param_3 == (void **)0x0))
  goto LAB_1000b2fa;
  local_110 = 0xffffffff;
  iVar5 = recovered_10003380(param_1,(ulong *)&DAT_1000df5c,4);
  if (iVar5 == 0) {
    local_110 = 0xffffffff;
    iVar6 = recovered_10003380(param_1 + 1,(ulong *)&DAT_1000df61,4);
    iVar5 = 0;
    uVar16 = 0;
    if (iVar6 != 0) goto LAB_1000b2fa;
    if (param_2 < 0x14) {
      bVar11 = 1;
      local_58 = (uint3 *)0x0;
      local_50 = (ulong)PF_PART4(local_50, 4) << 0x20;
      uVar17 = 0;
      puVar14 = (uint3 *)0x0;
      puVar15 = (uint3 *)0x0;
    }
    else {
      lVar10 = 0xc;
      local_38 = (uint3 *)0x0;
      uVar17 = 0x14;
      local_88 = (uint3 *)0x0;
      local_50 = (ulong)PF_PART4(local_50, 4) << 0x20;
      local_58 = (uint3 *)0x0;
      local_48 = 0;
      local_60 = 0;
      local_40 = (uint3 *)0x0;
      local_b0 = param_3;
      local_70 = param_4;
      local_68 = param_2;
      do {
        uVar8 = *(uint *)((long)param_1 + lVar10 + 4);
        uVar12 = uVar17 + uVar8;
        if (local_68 < uVar12) goto LAB_1000b2c9;
        local_110 = 0xffffffff;
        iVar5 = recovered_10003380((ulong *)(lVar10 + (long)param_1),(ulong *)&DAT_1000df66,4);
        if (iVar5 == 0) {
          if (uVar8 < 0x10) goto LAB_1000b2c9;
          uVar3 = *(ushort *)((long)param_1 + uVar17);
          local_38 = (uint3 *)(ulong)*(ushort *)((long)param_1 + uVar17 + 2);
          local_88 = (uint3 *)(ulong)*(uint *)((long)param_1 + uVar17 + 4);
          uVar1 = *(ushort *)((long)param_1 + uVar17 + 0xe);
          if ((uVar3 == 0xfffe) &&
             (((uVar8 < 0x28 || (*(ushort *)((long)param_1 + uVar17 + 0x10) < 0x16)) ||
              (uVar3 = *(ushort *)((long)param_1 + uVar17 + 0x18), (uVar3 & 0xfffd) != 1))))
          goto LAB_1000b2c9;
          local_50 = CONCAT44(PF_PART4(local_50, 4),(uint)uVar1);
          if (uVar3 == 1) {
            uVar7 = uVar1 - 8;
            if ((uVar7 & 0xffe7) != 0) goto LAB_1000b2c9;
            local_60 = CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
            local_40 = (uint3 *)CONCAT62((uint6)(ushort)(uVar7 >> 0x10),1);
          }
          else {
            if (uVar3 != 3) goto LAB_1000b2c9;
            local_60 = 1;
            local_40 = (uint3 *)0x3;
            if ((uVar1 != 0x20) && (uVar1 != 0x40)) goto LAB_1000b2c9;
          }
        }
        else {
          local_110 = 0xffffffff;
          iVar5 = recovered_10003380((ulong *)(lVar10 + (long)param_1),(ulong *)&DAT_1000df6b,4);
          if (iVar5 == 0 && local_58 == (uint3 *)0x0) {
            local_58 = (uint3 *)(uVar17 + (long)param_1);
            local_48 = (ulong)uVar8;
          }
        }
        lVar10 = uVar12 + (uVar8 & 1);
        uVar17 = uVar12 + (uVar8 & 1) + 8;
      } while (uVar17 <= local_68);
      bVar11 = (byte)local_60 ^ 1;
      iVar5 = (int)local_88;
      uVar17 = local_48;
      param_3 = local_b0;
      puVar14 = local_38;
      puVar15 = local_40;
      param_4 = local_70;
    }
    uVar16 = 0;
    if (((((bVar11 & 1) != 0) || (local_58 == (uint3 *)0x0)) || (uVar17 == 0)) ||
       (((short)puVar14 == 0 || (iVar5 == 0)))) goto LAB_1000b2fa;
    uVar16 = 0;
    if ((ushort)local_50 < 8) goto LAB_1000b2fa;
    local_48 = CONCAT44(PF_PART4(local_48, 4),(uint)local_50) & 0xffffffff0000ffff;
    local_50 = (ulong)(((uint)local_50 & 0xffff) >> 3);
    local_b8 = (uint3 *)((ulong)puVar14 & 0xffff);
    uVar12 = (long)local_b8 * local_50;
    if ((uVar12 == 0) || (uVar17 < uVar12)) goto LAB_1000b2fa;
    local_74 = (uint)puVar14;
    if ((ushort)*param_4 != 0) {
      local_74 = (uint)(ushort)*param_4;
    }
    if ((short)local_74 != 0) {
      if (uVar17 >> 0x20 == 0) {
        uVar17 = uVar17 & 0xffffffff;
      }
      local_140 = uVar17 / uVar12;
      local_a8 = (void *)0x0;
      pvStack_a0 = (void *)0x0;
      local_98 = (void *)0x0;
      local_70 = (uint3 *)(ulong)(local_74 & 0xffff);
      local_110 = 1;
      local_120 = uVar12;
      local_b0 = param_3;
      local_90 = iVar5;
      local_8c = (short)local_74;
      local_40 = puVar15;
      local_38 = puVar14;
      recovered_1000be30((long *)&local_a8,local_140 * (long)local_70);
      local_60 = 0;
      local_130 = 0;
      if (1 < (ushort)local_38) {
        local_130 = local_50;
      }
      local_128 = (double)(int)local_b8;
      local_bc = (int)local_38 - 1;
      local_138 = (ulong)(uint)((int)local_70 * 2);
      local_68 = CONCAT44(PF_PART4(local_68, 4),(uint)(ushort)local_40);
      uVar12 = 0;
      uVar17 = local_130;
      puVar14 = local_58;
      do {
        local_40 = (uint3 *)(uVar12 * local_120 + (long)local_58);
        local_148 = puVar14;
        local_80 = uVar12;
        if ((short)local_74 == 2) {
          local_110 = 4;
          local_38 = (uint3 *)(uintptr_t)pf_double_bits((double)recovered_1000c040(local_40,(int)local_68,(ushort)local_48,uVar17,
                                                 (undefined8 *)puVar15));
          local_110 = 5;
          puVar14 = (uint3 *)(uintptr_t)pf_double_bits((double)recovered_1000c040((uint3 *)((long)local_40 + local_130),(int)local_68,
                                                (ushort)local_48,uVar17,(undefined8 *)puVar15));
          uVar4 = 0x8000;
          if (DAT_1000dbd8 < pf_bits_double((uintptr_t)local_38)) {
            uVar4 = 0x7fff;
            if (pf_bits_double((uintptr_t)local_38) < DAT_1000dbb8) {
              dVar19 = pf_bits_double((uintptr_t)local_38) *
                       *(double *)(&DAT_1000ddc0 + (ulong)(pf_bits_double((uintptr_t)local_38) < 0.0) * 8);
              local_110 = 6;
              local_38 = puVar14;
              lVar10 = recovered_10004f80(dVar19);
              uVar4 = (undefined2)lVar10;
              puVar14 = local_38;
            }
          }
          uVar13 = 0x8000;
          *(undefined2 *)((long)local_a8 + local_80 * 4) = uVar4;
          if ((DAT_1000dbd8 < pf_bits_double((uintptr_t)puVar14)) && (uVar13 = 0x7fff, pf_bits_double((uintptr_t)puVar14) < DAT_1000dbb8))
          {
            local_110 = 7;
            lVar10 = recovered_10004f80(pf_bits_double((uintptr_t)puVar14) *
                                        *(double *)
                                         (&DAT_1000ddc0 + (ulong)(pf_bits_double((uintptr_t)puVar14) < 0.0) * 8));
            uVar13 = (undefined2)lVar10;
          }
          *(undefined2 *)((long)local_a8 + local_80 * 4 + 2) = uVar13;
        }
        else if ((int)local_70 == 1) {
          puVar18 = (uint3 *)0x0;
          puVar9 = local_b8;
          do {
            local_110 = 3;
            local_88 = puVar14;
            local_40 = puVar9;
            local_38 = puVar18;
            dVar19 = recovered_1000c040(puVar14,(int)local_68,(ushort)local_48,uVar17,
                                        (undefined8 *)puVar15);
            puVar18 = (uint3 *)(uintptr_t)pf_double_bits((pf_bits_double((uintptr_t)local_38) + dVar19));
            puVar14 = (uint3 *)((long)local_88 + local_50);
            puVar9 = (uint3 *)((long)local_40 + -1);
          } while (puVar9 != (uint3 *)0x0);
          dVar19 = pf_bits_double((uintptr_t)puVar18) / local_128;
          uVar4 = 0x8000;
          if ((DAT_1000dbd8 < dVar19) && (uVar4 = 0x7fff, dVar19 < DAT_1000dbb8)) {
            local_110 = 2;
            lVar10 = recovered_10004f80(dVar19 * *(double *)
                                                  (&DAT_1000ddc0 + (ulong)(dVar19 < 0.0) * 8));
            uVar4 = (undefined2)lVar10;
          }
          *(undefined2 *)((long)local_a8 + local_80 * 2) = uVar4;
        }
        else {
          puVar14 = (uint3 *)0x0;
          do {
            uVar8 = local_bc;
            if (puVar14 < local_b8) {
              uVar8 = (uint)puVar14;
            }
            local_110 = 8;
            local_38 = puVar14;
            dVar19 = recovered_1000c040((uint3 *)((uVar8 & 0xffff) * local_50 + (long)local_40),
                                        (int)local_68,(ushort)local_48,puVar14,(undefined8 *)puVar15
                                       );
            uVar4 = 0x8000;
            if ((DAT_1000dbd8 < dVar19) && (uVar4 = 0x7fff, dVar19 < DAT_1000dbb8)) {
              local_110 = 9;
              lVar10 = recovered_10004f80(dVar19 * *(double *)
                                                    (&DAT_1000ddc0 + (ulong)(dVar19 < 0.0) * 8));
              uVar4 = (undefined2)lVar10;
            }
            *(undefined2 *)((long)local_a8 + (long)local_38 * 2 + local_60) = uVar4;
            puVar14 = (uint3 *)((long)local_38 + 1);
          } while (local_70 != puVar14);
        }
        ppvVar2 = local_b0;
        uVar12 = local_80 + 1;
        puVar14 = (uint3 *)((long)local_148 + local_120);
        local_60 = local_60 + local_138;
        uVar17 = local_138;
      } while (uVar12 < local_140);
      if (&local_a8 != local_b0) {
        local_b0[1] = (void *)0x0;
        recovered_100080f0(*local_b0);
        *ppvVar2 = local_a8;
        ppvVar2[1] = pvStack_a0;
        ppvVar2[2] = local_98;
        local_a8 = (void *)0x0;
        local_98 = (void *)0x0;
      }
      *(short *)((long)ppvVar2 + 0x1c) = local_8c;
      *(int *)(ppvVar2 + 3) = local_90;
      pvStack_a0 = (void *)0x0;
      recovered_100080f0(local_a8);
      uVar16 = 1;
      goto LAB_1000b2fa;
    }
  }
LAB_1000b2c9:
  uVar16 = 0;
LAB_1000b2fa:
  recovered_10008700(&local_118);
  return uVar16;
}

#undef DAT_1000dbb8
#undef DAT_1000dbd8
#undef DAT_1000ddc0
#undef DAT_1000df5c
#undef DAT_1000df61
#undef DAT_1000df66
#undef DAT_1000df6b
#undef DAT_1000e010
#undef LAB_1000b9ec
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_bc
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_98
#undef local_90
#undef local_8c
#undef local_88
#undef local_80
#undef local_74
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef pvStack_a0

#undef DAT_1000e028
#define DAT_1000e028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x479U)))
#undef LAB_1000bb09
#define LAB_1000bb09 (*(uint8_t *)(0x1000bb09U))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 24))
#define local_70 (*(code * *)(pf_stack_frame + 64))
#define local_68 (*(undefined * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_38 (*(undefined8 *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba70
 */

void recovered_1000ba70(long param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  piVar1 = *(int **)(param_1 + 0x30);
  local_70 = recovered_10008040;
  local_68 = &DAT_1000e028;
  local_58 = &LAB_1000bb09;
  recovered_100086e0(&local_90);
  if (piVar1 != (int *)0x0) {
    local_88 = 1;
    local_38 = param_1;
    recovered_100071a0(piVar1);
    *(undefined8 *)(local_38 + 0x30) = 0;
    param_1 = local_38;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  recovered_10008700(&local_90);
  return;
}

#undef DAT_1000e028
#undef LAB_1000bb09
#undef local_90
#undef local_88
#undef auStack_98
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_38

#undef DAT_1000e038
#define DAT_1000e038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x489U)))
#undef LAB_1000bbd7
#define LAB_1000bbd7 (*(uint8_t *)(0x1000bbd7U))
#define local_38 (*(undefined8 * *)(pf_stack_frame + 120))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 24))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_70 (*(code * *)(pf_stack_frame + 64))
#define local_68 (*(undefined * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb40
 */

void recovered_1000bb40(undefined8 *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  piVar1 = (int *)*param_1;
  local_70 = recovered_10008040;
  local_68 = &DAT_1000e038;
  local_58 = &LAB_1000bbd7;
  recovered_100086e0(&local_90);
  if (piVar1 != (int *)0x0) {
    local_88 = 1;
    local_38 = param_1;
    recovered_100071a0(piVar1);
    *local_38 = 0;
    param_1 = local_38;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  recovered_10008700(&local_90);
  return;
}

#undef DAT_1000e038
#undef LAB_1000bbd7
#undef local_38
#undef auStack_98
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50

#undef DAT_1000e048
#define DAT_1000e048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x499U)))
#undef LAB_1000bcb1
#define LAB_1000bcb1 (*(uint8_t *)(0x1000bcb1U))
#define local_38 (*(undefined8 *)(pf_stack_frame + 120))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 24))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_70 (*(code * *)(pf_stack_frame + 64))
#define local_68 (*(undefined * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc10
 */

void recovered_1000bc10(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  piVar1 = *(int **)((long)param_1 + 0x30);
  local_70 = recovered_10008040;
  local_68 = &DAT_1000e048;
  local_58 = &LAB_1000bcb1;
  recovered_100086e0(&local_90);
  if (piVar1 != (int *)0x0) {
    local_88 = 1;
    local_38 = param_1;
    recovered_100071a0(piVar1);
    *(undefined8 *)((long)local_38 + 0x30) = 0;
    param_1 = local_38;
  }
  *(undefined1 *)((long)param_1 + 0x38) = 0;
  *(undefined8 *)((long)param_1 + 0x40) = 0;
  recovered_100080f0(param_1);
  recovered_10008700(&local_90);
  return;
}

#undef DAT_1000e048
#undef LAB_1000bcb1
#undef local_38
#undef auStack_98
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bce0
 */

void recovered_1000bce0(undefined8 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;

  if (param_2 <= (ulong)param_1[2]) {
    return;
  }
  pvVar6 = recovered_10008090(param_2);
  pointer = (void *)*param_1;
  uVar2 = param_1[1];
  if (uVar2 == 0) goto LAB_1000be0f;
  if ((ulong)((long)pvVar6 - (long)pointer) < 0x20 || uVar2 < 4) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 0x20) {
      uVar8 = 0;
    }
    else {
      uVar7 = uVar2 & 0xffffffffffffffe0;
      uVar8 = 0;
      do {
        uVar3 = ((undefined8 *)((long)pointer + uVar8))[1];
        puVar1 = (undefined8 *)((long)pointer + uVar8 + 0x10);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        *(undefined8 *)((long)pvVar6 + uVar8) = *(undefined8 *)((long)pointer + uVar8);
        ((undefined8 *)((long)pvVar6 + uVar8))[1] = uVar3;
        puVar1 = (undefined8 *)((long)pvVar6 + uVar8 + 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        uVar8 = uVar8 + 0x20;
      } while (uVar7 != uVar8);
      if (uVar2 == uVar7) goto LAB_1000be0f;
      uVar8 = uVar7;
      if ((uVar2 & 0x1c) == 0) goto LAB_1000bda5;
    }
    uVar7 = uVar2 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)((long)pvVar6 + uVar8) = *(undefined4 *)((long)pointer + uVar8);
      uVar8 = uVar8 + 4;
    } while (uVar7 != uVar8);
    if (uVar2 == uVar7) goto LAB_1000be0f;
  }
LAB_1000bda5:
  uVar9 = uVar2 & 3;
  uVar8 = uVar7;
  if (uVar9 != 0) {
    do {
      *(undefined1 *)((long)pvVar6 + uVar8) = *(undefined1 *)((long)pointer + uVar8);
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (uVar7 - uVar2 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)((long)pvVar6 + uVar8) = *(undefined1 *)((long)pointer + uVar8);
      *(undefined1 *)((long)pvVar6 + uVar8 + 1) = *(undefined1 *)((long)pointer + uVar8 + 1);
      *(undefined1 *)((long)pvVar6 + uVar8 + 2) = *(undefined1 *)((long)pointer + uVar8 + 2);
      *(undefined1 *)((long)pvVar6 + uVar8 + 3) = *(undefined1 *)((long)pointer + uVar8 + 3);
      uVar8 = uVar8 + 4;
    } while (uVar2 != uVar8);
  }
LAB_1000be0f:
  recovered_100080f0(pointer);
  *param_1 = pvVar6;
  param_1[2] = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be30
 */

void recovered_1000be30(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pointer;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  uVar9 = param_1[1];
  if (param_2 < uVar9) goto LAB_1000be44;
  if (param_2 <= uVar9) {
    return;
  }
  if ((ulong)param_1[2] < param_2) {
    pvVar8 = recovered_10008090(param_2 * 2);
    pointer = (void *)*param_1;
    uVar9 = param_1[1];
    if (uVar9 != 0) {
      if ((ulong)((long)pvVar8 - (long)pointer) < 0x20 || uVar9 < 4) {
        uVar11 = 0;
      }
      else {
        if (uVar9 < 0x10) {
          uVar10 = 0;
        }
        else {
          uVar11 = uVar9 & 0xfffffffffffffff0;
          uVar10 = 0;
          do {
            puVar3 = (undefined8 *)((long)pointer + uVar10 * 2);
            uVar5 = puVar3[1];
            puVar2 = (undefined8 *)((long)pointer + uVar10 * 2 + 0x10);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            puVar2 = (undefined8 *)((long)pvVar8 + uVar10 * 2);
            *puVar2 = *puVar3;
            puVar2[1] = uVar5;
            puVar3 = (undefined8 *)((long)pvVar8 + uVar10 * 2 + 0x10);
            *puVar3 = uVar6;
            puVar3[1] = uVar7;
            uVar10 = uVar10 + 0x10;
          } while (uVar11 != uVar10);
          if (uVar9 == uVar11) goto LAB_1000bf7f;
          uVar10 = uVar11;
          if ((uVar9 & 0xc) == 0) goto LAB_1000bf16;
        }
        uVar11 = uVar9 & 0xfffffffffffffffc;
        do {
          *(undefined8 *)((long)pvVar8 + uVar10 * 2) = *(undefined8 *)((long)pointer + uVar10 * 2);
          uVar10 = uVar10 + 4;
        } while (uVar11 != uVar10);
        if (uVar9 == uVar11) goto LAB_1000bf7f;
      }
LAB_1000bf16:
      uVar12 = uVar9 & 3;
      uVar10 = uVar11;
      if (uVar12 != 0) {
        do {
          *(undefined2 *)((long)pvVar8 + uVar10 * 2) = *(undefined2 *)((long)pointer + uVar10 * 2);
          uVar10 = uVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar11 - uVar9 < 0xfffffffffffffffd) {
        do {
          *(undefined2 *)((long)pvVar8 + uVar10 * 2) = *(undefined2 *)((long)pointer + uVar10 * 2);
          *(undefined2 *)((long)pvVar8 + uVar10 * 2 + 2) =
               *(undefined2 *)((long)pointer + uVar10 * 2 + 2);
          *(undefined2 *)((long)pvVar8 + uVar10 * 2 + 4) =
               *(undefined2 *)((long)pointer + uVar10 * 2 + 4);
          *(undefined2 *)((long)pvVar8 + uVar10 * 2 + 6) =
               *(undefined2 *)((long)pointer + uVar10 * 2 + 6);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
      }
    }
LAB_1000bf7f:
    recovered_100080f0(pointer);
    *param_1 = (long)pvVar8;
    param_1[2] = param_2;
    uVar9 = param_1[1];
  }
  uVar11 = param_2 - uVar9;
  if (param_2 < uVar9 || uVar11 == 0) {
    return;
  }
  lVar4 = *param_1;
  if (3 < uVar11) {
    if (uVar11 < 0x10) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar11 & 0xfffffffffffffff0;
      lVar1 = lVar4 + uVar9 * 2;
      uVar12 = 0;
      do {
        puVar3 = (undefined8 *)(lVar1 + uVar12 * 2);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)(lVar1 + 0x10 + uVar12 * 2);
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar12 = uVar12 + 0x10;
      } while (uVar10 != uVar12);
      if (uVar11 == uVar10) goto LAB_1000be44;
      if ((uVar11 & 0xc) == 0) {
        uVar9 = uVar9 + uVar10;
        goto LAB_1000c020;
      }
    }
    uVar12 = uVar11 & 0xfffffffffffffffc;
    lVar1 = uVar9 * 2;
    uVar9 = uVar9 + uVar12;
    do {
      *(undefined8 *)(lVar4 + lVar1 + uVar10 * 2) = 0;
      uVar10 = uVar10 + 4;
    } while (uVar12 != uVar10);
    if (uVar11 == uVar12) goto LAB_1000be44;
  }
LAB_1000c020:
  do {
    *(undefined2 *)(lVar4 + uVar9 * 2) = 0;
    uVar9 = uVar9 + 1;
  } while (param_2 != uVar9);
LAB_1000be44:
  param_1[1] = param_2;
  return;
}


#undef DAT_1000dbb8
#define DAT_1000dbb8 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000dbd8
#define DAT_1000dbd8 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000ddd8
#define DAT_1000ddd8 (*(float *)(((uintptr_t)pf_module_state + 0x229U)))
#undef DAT_1000de00
#define DAT_1000de00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x251U)))
#undef DAT_1000de08
#define DAT_1000de08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x259U)))
#undef DAT_1000de10
#define DAT_1000de10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_1000de18
#define DAT_1000de18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x269U)))
#undef _DAT_1000de00
#define _DAT_1000de00 (*(double *)(((uintptr_t)pf_module_state + 0x251U)))
#undef _DAT_1000de08
#define _DAT_1000de08 (*(double *)(((uintptr_t)pf_module_state + 0x259U)))
#undef _DAT_1000de10
#define _DAT_1000de10 (*(double *)(((uintptr_t)pf_module_state + 0x261U)))
#undef _DAT_1000de18
#define _DAT_1000de18 (*(double *)(((uintptr_t)pf_module_state + 0x269U)))
#define local_18 (*(double *)(pf_stack_frame + 24))
#define local_c (*(float *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c040
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1000c040(uint3 *param_1,int param_2,ushort param_3,undefined8 param_4,
                         undefined8 *param_5)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  double dVar2;

  dVar2 = 0.0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_18 = 0.0;
      recovered_10001d60(&local_18,(undefined8 *)param_1,8,param_4,param_5);
      dVar2 = DAT_1000dbb8;
      if (local_18 <= DAT_1000dbb8) {
        dVar2 = local_18;
      }
      dVar2 = (double)(-(ulong)(local_18 < DAT_1000dbd8) & (ulong)DAT_1000dbd8 |
                      ~-(ulong)(local_18 < DAT_1000dbd8) & (ulong)dVar2);
    }
    else if (param_3 == 0x20) {
      local_c = 0.0;
      recovered_10001d60((undefined8 *)&local_c,(undefined8 *)param_1,4,param_4,param_5);
      if (local_c < DAT_1000ddd8) {
        dVar2 = DAT_1000dbd8;
      }
      else {
        dVar2 = DAT_1000dbb8;
        if ((double)local_c <= DAT_1000dbb8) {
          dVar2 = (double)local_c;
        }
      }
    }
  }
  else if (param_2 == 1) {
    switch((uintptr_t)((uint)param_3 << 0x1d | param_3 - 8 >> 3)) {
    case 0:
      dVar2 = (double)(int)((byte)*param_1 - 0x80) * _DAT_1000de18;
      break;
    case 1:
      dVar2 = (double)(int)(short)*param_1 * _DAT_1000de10;
      break;
    case 2:
      uVar1 = *param_1 - 0x1000000;
      if (-1 < *(char *)((long)param_1 + 2)) {
        uVar1 = (uint)*param_1;
      }
      dVar2 = (double)(int)uVar1 * _DAT_1000de08;
      break;
    case 3:
      dVar2 = (double)*(int *)param_1 * _DAT_1000de00;
    }
  }
  return dVar2;
}

#undef DAT_1000dbb8
#undef DAT_1000dbd8
#undef DAT_1000ddd8
#undef DAT_1000de00
#undef DAT_1000de08
#undef DAT_1000de10
#undef DAT_1000de18
#undef _DAT_1000de00
#undef _DAT_1000de08
#undef _DAT_1000de10
#undef _DAT_1000de18
#undef local_18
#undef local_c

#define local_48 (*(void * *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1b0
 */

void recovered_1000c1b0(long *param_1,long param_2,ulong param_3)

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
        recovered_1000c1b0((long *)&local_48,(long)(puVar8 + uVar11),uVar12);
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
  if (uVar13 <= (ulong)param_1[2]) goto LAB_1000c3d6;
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
        if (uVar11 == uVar12) goto LAB_1000c3bf;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_1000c355;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_1000c3bf;
    }
LAB_1000c355:
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
LAB_1000c3bf:
  puVar8[uVar11] = 0;
  recovered_100080f0(pvVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_1000c3d6:
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

#undef local_48
#undef local_38
#undef lStack_40

#undef DAT_1000df5c
#define DAT_1000df5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3adU)))
#undef DAT_1000df60
#define DAT_1000df60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b1U)))
#undef DAT_1000df61
#define DAT_1000df61 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b2U)))
#undef DAT_1000df65
#define DAT_1000df65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b6U)))
#undef DAT_1000df66
#define DAT_1000df66 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b7U)))
#undef DAT_1000df6a
#define DAT_1000df6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bbU)))
#undef DAT_1000df6b
#define DAT_1000df6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bcU)))
#undef DAT_1000df6f
#define DAT_1000df6f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c0U)))
#undef DAT_1000e058
#define DAT_1000e058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a9U)))
#undef LAB_1000ca75
#define LAB_1000ca75 (*(uint8_t *)(0x1000ca75U))
#define pvStack_40 (*(void * *)(pf_stack_frame + 160))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_a8 (*(code * *)(pf_stack_frame + 56))
#define local_a0 (*(undefined * *)(pf_stack_frame + 64))
#define local_98 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_70 (*(void ** *)(pf_stack_frame + 112))
#define local_68 (*(ushort * *)(pf_stack_frame + 120))
#define local_60 (*(void * *)(pf_stack_frame + 128))
#define local_58 (*(undefined8 * *)(pf_stack_frame + 136))
#define local_50 (*(ushort * *)(pf_stack_frame + 144))
#define local_48 (*(void * *)(pf_stack_frame + 152))
#define local_38 (*(undefined8 *)(pf_stack_frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c460
 */

ulong recovered_1000c460(undefined8 *param_1,void **param_2)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *pvVar8;
  ushort *puVar9;
  void *pvVar10;
  ushort *puVar11;
  ulong uVar12;
  void *pvVar13;
  void **ppvVar14;

  local_98 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 224) + -8);
  local_88 = (undefined1 *)&local_c8;
  local_a8 = recovered_10008040;
  local_a0 = &DAT_1000e058;
  local_90 = &LAB_1000ca75;
  recovered_100086e0(&local_c8);
  if ((param_2 != (void **)0x0) && (*(uint *)(param_1 + 3) != 0)) {
    uVar2 = *(ushort *)((long)param_1 + 0x1c);
    if ((ulong)uVar2 != 0) {
      uVar12 = param_1[1];
      uVar7 = uVar12;
      if (uVar12 >> 0x20 == 0) {
        uVar7 = uVar12 & 0xffffffff;
      }
      if ((uVar7 % (ulong)uVar2 == 0) && ((uVar12 & 0x7fffffffffffffff) >> 1 < 0x3ffffff7)) {
        lVar3 = (ulong)*(uint *)(param_1 + 3) * (ulong)((uint)uVar2 * 2);
        if (-1 < (short)uVar2 && (int)((ulong)lVar3 >> 0x20) == 0) {
          local_68 = (ushort *)CONCAT44(PF_PART4(local_68, 4),(int)lVar3);
          local_60 = (void *)CONCAT44(PF_PART4(local_60, 4),(uint)uVar2 * 2);
          local_48 = (void *)0x0;
          pvStack_40 = (void *)0x0;
          local_38 = (void *)0x0;
          local_c0 = 1;
          local_70 = param_2;
          local_58 = param_1;
          local_50 = (ushort *)(uVar12 * 2);
          recovered_1000bce0(&local_48,(ulong)((ushort *)(uVar12 * 2) + 0x16));
          local_c0 = 2;
          recovered_1000d400((long *)&local_48,(long)local_48 + (long)pvStack_40,&DAT_1000df5c,
                             &DAT_1000df60);
          local_c0 = 3;
          recovered_1000cbe0((long *)&local_48,(int)local_50 + 0x24);
          local_c0 = 4;
          recovered_1000d400((long *)&local_48,(long)local_48 + (long)pvStack_40,&DAT_1000df61,
                             &DAT_1000df65);
          local_c0 = 5;
          recovered_1000d400((long *)&local_48,(long)local_48 + (long)pvStack_40,&DAT_1000df66,
                             &DAT_1000df6a);
          local_c0 = 6;
          recovered_1000cbe0((long *)&local_48,0x10);
          local_c0 = 7;
          recovered_1000d140((long *)&local_48,1);
          local_c0 = 8;
          recovered_1000d140((long *)&local_48,(uint)*(ushort *)((long)local_58 + 0x1c));
          local_c0 = 9;
          recovered_1000cbe0((long *)&local_48,*(undefined4 *)(local_58 + 3));
          local_c0 = 10;
          recovered_1000cbe0((long *)&local_48,PF_PART4(local_68, 0));
          local_c0 = 0xb;
          recovered_1000d140((long *)&local_48,(uint)(ushort)local_60);
          local_c0 = 0xc;
          recovered_1000d140((long *)&local_48,0x10);
          local_c0 = 0xd;
          recovered_1000d400((long *)&local_48,(long)local_48 + (long)pvStack_40,&DAT_1000df6b,
                             &DAT_1000df6f);
          local_c0 = 0xe;
          recovered_1000cbe0((long *)&local_48,(int)local_50);
          ppvVar14 = local_70;
          if (local_58[1] != 0) {
            puVar9 = (ushort *)*local_58;
            puVar11 = puVar9 + local_58[1];
            local_68 = puVar11;
            do {
              local_58 = (undefined8 *)CONCAT44(PF_PART4(local_58, 4),(uint)*puVar9);
              if (pvStack_40 == local_38) {
                pvVar13 = (void *)((long)pvStack_40 * 2);
                if (pvStack_40 == (void *)0x0) {
                  pvVar13 = (void *)0x4;
                }
                if (pvStack_40 < pvVar13) {
                  local_c0 = 0xf;
                  local_60 = pvVar13;
                  local_50 = puVar9;
                  pvVar13 = recovered_10008090((ulong)pvVar13);
                  if (pvStack_40 != (void *)0x0) {
                    if (pvStack_40 < (void *)0x4) {
                      pvVar8 = (void *)0x0;
                    }
                    else {
                      pvVar8 = (void *)0x0;
                      if (0x1f < (ulong)((long)pvVar13 - (long)local_48)) {
                        if (pvStack_40 < (void *)0x20) {
                          pvVar10 = (void *)0x0;
                        }
                        else {
                          pvVar8 = (void *)((ulong)pvStack_40 & 0xffffffffffffffe0);
                          pvVar10 = (void *)0x0;
                          do {
                            uVar4 = ((undefined8 *)((long)local_48 + (long)pvVar10))[1];
                            puVar1 = (undefined8 *)((long)local_48 + 0x10 + (long)pvVar10);
                            uVar5 = *puVar1;
                            uVar6 = puVar1[1];
                            *(undefined8 *)((long)pvVar13 + (long)pvVar10) =
                                 *(undefined8 *)((long)local_48 + (long)pvVar10);
                            ((undefined8 *)((long)pvVar13 + (long)pvVar10))[1] = uVar4;
                            puVar1 = (undefined8 *)((long)pvVar13 + 0x10 + (long)pvVar10);
                            *puVar1 = uVar5;
                            puVar1[1] = uVar6;
                            pvVar10 = (void *)((long)pvVar10 + 0x20);
                          } while (pvVar8 != pvVar10);
                          if (pvStack_40 == pvVar8) goto LAB_1000c8ab;
                          pvVar10 = pvVar8;
                          if (((ulong)pvStack_40 & 0x1c) == 0) goto LAB_1000c844;
                        }
                        pvVar8 = (void *)((ulong)pvStack_40 & 0xfffffffffffffffc);
                        do {
                          *(undefined4 *)((long)pvVar13 + (long)pvVar10) =
                               *(undefined4 *)((long)local_48 + (long)pvVar10);
                          pvVar10 = (void *)((long)pvVar10 + 4);
                        } while (pvVar8 != pvVar10);
                        if (pvStack_40 == pvVar8) goto LAB_1000c8ab;
                      }
                    }
LAB_1000c844:
                    uVar12 = (ulong)pvStack_40 & 3;
                    pvVar10 = pvVar8;
                    if (uVar12 != 0) {
                      do {
                        *(undefined1 *)((long)pvVar13 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + (long)pvVar10);
                        pvVar10 = (void *)((long)pvVar10 + 1);
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    if ((ulong)((long)pvVar8 - (long)pvStack_40) < 0xfffffffffffffffd) {
                      do {
                        *(undefined1 *)((long)pvVar13 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 1 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 1 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 2 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 2 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 3 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 3 + (long)pvVar10);
                        pvVar10 = (void *)((long)pvVar10 + 4);
                      } while (pvStack_40 != pvVar10);
                    }
                  }
LAB_1000c8ab:
                  recovered_100080f0(local_48);
                  local_38 = local_60;
                  puVar9 = local_50;
                  puVar11 = local_68;
                  ppvVar14 = local_70;
                  local_48 = pvVar13;
                }
              }
              *(char *)((long)local_48 + (long)pvStack_40) = (char)local_58;
              pvStack_40 = (void *)((long)pvStack_40 + 1);
              if (pvStack_40 == local_38) {
                pvVar13 = (void *)((long)pvStack_40 * 2);
                if (pvStack_40 == (void *)0x0) {
                  pvVar13 = (void *)0x4;
                }
                if (pvStack_40 < pvVar13) {
                  local_c0 = 0x10;
                  local_60 = pvVar13;
                  local_50 = puVar9;
                  pvVar13 = recovered_10008090((ulong)pvVar13);
                  if (pvStack_40 != (void *)0x0) {
                    if (pvStack_40 < (void *)0x4) {
                      pvVar8 = (void *)0x0;
                    }
                    else {
                      pvVar8 = (void *)0x0;
                      if (0x1f < (ulong)((long)pvVar13 - (long)local_48)) {
                        if (pvStack_40 < (void *)0x20) {
                          pvVar10 = (void *)0x0;
                        }
                        else {
                          pvVar8 = (void *)((ulong)pvStack_40 & 0xffffffffffffffe0);
                          pvVar10 = (void *)0x0;
                          do {
                            uVar4 = ((undefined8 *)((long)local_48 + (long)pvVar10))[1];
                            puVar1 = (undefined8 *)((long)local_48 + 0x10 + (long)pvVar10);
                            uVar5 = *puVar1;
                            uVar6 = puVar1[1];
                            *(undefined8 *)((long)pvVar13 + (long)pvVar10) =
                                 *(undefined8 *)((long)local_48 + (long)pvVar10);
                            ((undefined8 *)((long)pvVar13 + (long)pvVar10))[1] = uVar4;
                            puVar1 = (undefined8 *)((long)pvVar13 + 0x10 + (long)pvVar10);
                            *puVar1 = uVar5;
                            puVar1[1] = uVar6;
                            pvVar10 = (void *)((long)pvVar10 + 0x20);
                          } while (pvVar8 != pvVar10);
                          if (pvStack_40 == pvVar8) goto LAB_1000c72a;
                          pvVar10 = pvVar8;
                          if (((ulong)pvStack_40 & 0x1c) == 0) goto LAB_1000c9b8;
                        }
                        pvVar8 = (void *)((ulong)pvStack_40 & 0xfffffffffffffffc);
                        do {
                          *(undefined4 *)((long)pvVar13 + (long)pvVar10) =
                               *(undefined4 *)((long)local_48 + (long)pvVar10);
                          pvVar10 = (void *)((long)pvVar10 + 4);
                        } while (pvVar8 != pvVar10);
                        if (pvStack_40 == pvVar8) goto LAB_1000c72a;
                      }
                    }
LAB_1000c9b8:
                    uVar12 = (ulong)pvStack_40 & 3;
                    pvVar10 = pvVar8;
                    if (uVar12 != 0) {
                      do {
                        *(undefined1 *)((long)pvVar13 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + (long)pvVar10);
                        pvVar10 = (void *)((long)pvVar10 + 1);
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    if ((ulong)((long)pvVar8 - (long)pvStack_40) < 0xfffffffffffffffd) {
                      do {
                        *(undefined1 *)((long)pvVar13 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 1 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 1 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 2 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 2 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 3 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 3 + (long)pvVar10);
                        pvVar10 = (void *)((long)pvVar10 + 4);
                      } while (pvStack_40 != pvVar10);
                    }
                  }
LAB_1000c72a:
                  recovered_100080f0(local_48);
                  local_38 = local_60;
                  puVar9 = local_50;
                  puVar11 = local_68;
                  ppvVar14 = local_70;
                  local_48 = pvVar13;
                }
              }
              param_2 = (void **)((ulong)local_58 & 0xffffffff);
              *(char *)((long)local_48 + (long)pvStack_40) = (char)((ulong)local_58 >> 8);
              pvStack_40 = (void *)((long)pvStack_40 + 1);
              puVar9 = puVar9 + 1;
            } while (puVar9 != puVar11);
          }
          if (&local_48 != ppvVar14) {
            ppvVar14[1] = (void *)0x0;
            recovered_100080f0(*ppvVar14);
            *ppvVar14 = local_48;
            ppvVar14[1] = pvStack_40;
            ppvVar14[2] = local_38;
            local_48 = (void *)0x0;
            local_38 = (void *)0x0;
          }
          pvStack_40 = (void *)0x0;
          recovered_100080f0(local_48);
          uVar12 = CONCAT71((int7)((ulong)param_2 >> 8),1);
          goto LAB_1000c526;
        }
      }
    }
  }
  uVar12 = 0;
LAB_1000c526:
  recovered_10008700(&local_c8);
  return uVar12 & 0xffffffff;
}

#undef DAT_1000df5c
#undef DAT_1000df60
#undef DAT_1000df61
#undef DAT_1000df65
#undef DAT_1000df66
#undef DAT_1000df6a
#undef DAT_1000df6b
#undef DAT_1000df6f
#undef DAT_1000e058
#undef LAB_1000ca75
#undef pvStack_40
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
#undef local_48
#undef local_38

#undef DAT_1000e07c
#define DAT_1000e07c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cdU)))
#undef LAB_1000cba9
#define LAB_1000cba9 (*(uint8_t *)(0x1000cba9U))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 24))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_70 (*(code * *)(pf_stack_frame + 64))
#define local_68 (*(undefined * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_38 (*(undefined8 *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb10
 */

void recovered_1000cb10(long param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  piVar1 = *(int **)(param_1 + 0x18);
  local_70 = recovered_10008040;
  local_68 = &DAT_1000e07c;
  local_58 = &LAB_1000cba9;
  recovered_100086e0(&local_90);
  if (piVar1 != (int *)0x0) {
    local_88 = 1;
    local_38 = param_1;
    recovered_100071a0(piVar1);
    *(undefined8 *)(local_38 + 0x18) = 0;
    param_1 = local_38;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  recovered_10008700(&local_90);
  return;
}

#undef DAT_1000e07c
#undef LAB_1000cba9
#undef local_90
#undef auStack_98
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cbe0
 */

void recovered_1000cbe0(long *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  uVar7 = param_1[1];
  if (uVar7 == param_1[2]) {
    uVar11 = 4;
    if (uVar7 != 0) {
      uVar11 = uVar7 * 2;
    }
    if (uVar7 < uVar11) {
      pvVar6 = recovered_10008090(uVar11);
      pvVar2 = (void *)*param_1;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        uVar8 = 0;
        if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
          if (uVar7 < 0x20) {
            uVar9 = 0;
          }
          else {
            uVar8 = uVar7 & 0xffffffffffffffe0;
            uVar9 = 0;
            do {
              uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
              puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
              uVar4 = *puVar1;
              uVar5 = puVar1[1];
              *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
              ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
              puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
              *puVar1 = uVar4;
              puVar1[1] = uVar5;
              uVar9 = uVar9 + 0x20;
            } while (uVar8 != uVar9);
            if (uVar7 == uVar8) goto LAB_1000cd1f;
            uVar9 = uVar8;
            if ((uVar7 & 0x1c) == 0) goto LAB_1000ccb5;
          }
          uVar8 = uVar7 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 4;
          } while (uVar8 != uVar9);
          if (uVar7 == uVar8) goto LAB_1000cd1f;
        }
LAB_1000ccb5:
        uVar10 = uVar7 & 3;
        uVar9 = uVar8;
        if (uVar10 != 0) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar8 - uVar7 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
            *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
            *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
            uVar9 = uVar9 + 4;
          } while (uVar7 != uVar9);
        }
      }
LAB_1000cd1f:
      recovered_100080f0(pvVar2);
      *param_1 = (long)pvVar6;
      param_1[2] = uVar11;
      uVar7 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar7) = (char)param_2;
  uVar7 = param_1[1] + 1;
  param_1[1] = uVar7;
  if (uVar7 == param_1[2]) {
    uVar11 = 4;
    if (uVar7 != 0) {
      uVar11 = uVar7 * 2;
    }
    if (uVar7 < uVar11) {
      pvVar6 = recovered_10008090(uVar11);
      pvVar2 = (void *)*param_1;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        uVar8 = 0;
        if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
          if (uVar7 < 0x20) {
            uVar9 = 0;
          }
          else {
            uVar8 = uVar7 & 0xffffffffffffffe0;
            uVar9 = 0;
            do {
              uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
              puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
              uVar4 = *puVar1;
              uVar5 = puVar1[1];
              *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
              ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
              puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
              *puVar1 = uVar4;
              puVar1[1] = uVar5;
              uVar9 = uVar9 + 0x20;
            } while (uVar8 != uVar9);
            if (uVar7 == uVar8) goto LAB_1000ce6f;
            uVar9 = uVar8;
            if ((uVar7 & 0x1c) == 0) goto LAB_1000ce05;
          }
          uVar8 = uVar7 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 4;
          } while (uVar8 != uVar9);
          if (uVar7 == uVar8) goto LAB_1000ce6f;
        }
LAB_1000ce05:
        uVar10 = uVar7 & 3;
        uVar9 = uVar8;
        if (uVar10 != 0) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar8 - uVar7 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
            *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
            *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
            uVar9 = uVar9 + 4;
          } while (uVar7 != uVar9);
        }
      }
LAB_1000ce6f:
      recovered_100080f0(pvVar2);
      *param_1 = (long)pvVar6;
      param_1[2] = uVar11;
      uVar7 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar7) = (char)((uint)param_2 >> 8);
  uVar7 = param_1[1] + 1;
  param_1[1] = uVar7;
  if (uVar7 == param_1[2]) {
    uVar11 = 4;
    if (uVar7 != 0) {
      uVar11 = uVar7 * 2;
    }
    if (uVar7 < uVar11) {
      pvVar6 = recovered_10008090(uVar11);
      pvVar2 = (void *)*param_1;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        uVar8 = 0;
        if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
          if (uVar7 < 0x20) {
            uVar9 = 0;
          }
          else {
            uVar8 = uVar7 & 0xffffffffffffffe0;
            uVar9 = 0;
            do {
              uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
              puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
              uVar4 = *puVar1;
              uVar5 = puVar1[1];
              *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
              ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
              puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
              *puVar1 = uVar4;
              puVar1[1] = uVar5;
              uVar9 = uVar9 + 0x20;
            } while (uVar8 != uVar9);
            if (uVar7 == uVar8) goto LAB_1000cfbf;
            uVar9 = uVar8;
            if ((uVar7 & 0x1c) == 0) goto LAB_1000cf55;
          }
          uVar8 = uVar7 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 4;
          } while (uVar8 != uVar9);
          if (uVar7 == uVar8) goto LAB_1000cfbf;
        }
LAB_1000cf55:
        uVar10 = uVar7 & 3;
        uVar9 = uVar8;
        if (uVar10 != 0) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar8 - uVar7 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
            *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
            *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
            uVar9 = uVar9 + 4;
          } while (uVar7 != uVar9);
        }
      }
LAB_1000cfbf:
      recovered_100080f0(pvVar2);
      *param_1 = (long)pvVar6;
      param_1[2] = uVar11;
      uVar7 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar7) = (char)((uint)param_2 >> 0x10);
  uVar7 = param_1[1] + 1;
  param_1[1] = uVar7;
  if (uVar7 != param_1[2]) goto LAB_1000d11f;
  uVar11 = 4;
  if (uVar7 != 0) {
    uVar11 = uVar7 * 2;
  }
  if (uVar11 <= uVar7) goto LAB_1000d11f;
  pvVar6 = recovered_10008090(uVar11);
  pvVar2 = (void *)*param_1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = 0;
    if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
      if (uVar7 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar8 = uVar7 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
          puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar8 != uVar9);
        if (uVar7 == uVar8) goto LAB_1000d10f;
        uVar9 = uVar8;
        if ((uVar7 & 0x1c) == 0) goto LAB_1000d0a5;
      }
      uVar8 = uVar7 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_1000d10f;
    }
LAB_1000d0a5:
    uVar10 = uVar7 & 3;
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar8 - uVar7 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar7 != uVar9);
    }
  }
LAB_1000d10f:
  recovered_100080f0(pvVar2);
  *param_1 = (long)pvVar6;
  param_1[2] = uVar11;
  uVar7 = param_1[1];
LAB_1000d11f:
  *(char *)(*param_1 + uVar7) = (char)((uint)param_2 >> 0x18);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d140
 */

void recovered_1000d140(long *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  uVar7 = param_1[1];
  if (uVar7 == param_1[2]) {
    uVar11 = 4;
    if (uVar7 != 0) {
      uVar11 = uVar7 * 2;
    }
    if (uVar7 < uVar11) {
      pvVar6 = recovered_10008090(uVar11);
      pvVar2 = (void *)*param_1;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        uVar8 = 0;
        if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
          if (uVar7 < 0x20) {
            uVar9 = 0;
          }
          else {
            uVar8 = uVar7 & 0xffffffffffffffe0;
            uVar9 = 0;
            do {
              uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
              puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
              uVar4 = *puVar1;
              uVar5 = puVar1[1];
              *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
              ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
              puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
              *puVar1 = uVar4;
              puVar1[1] = uVar5;
              uVar9 = uVar9 + 0x20;
            } while (uVar8 != uVar9);
            if (uVar7 == uVar8) goto LAB_1000d27f;
            uVar9 = uVar8;
            if ((uVar7 & 0x1c) == 0) goto LAB_1000d215;
          }
          uVar8 = uVar7 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 4;
          } while (uVar8 != uVar9);
          if (uVar7 == uVar8) goto LAB_1000d27f;
        }
LAB_1000d215:
        uVar10 = uVar7 & 3;
        uVar9 = uVar8;
        if (uVar10 != 0) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar8 - uVar7 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
            *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
            *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
            uVar9 = uVar9 + 4;
          } while (uVar7 != uVar9);
        }
      }
LAB_1000d27f:
      recovered_100080f0(pvVar2);
      *param_1 = (long)pvVar6;
      param_1[2] = uVar11;
      uVar7 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar7) = (char)param_2;
  uVar7 = param_1[1] + 1;
  param_1[1] = uVar7;
  if (uVar7 != param_1[2]) goto LAB_1000d3e2;
  uVar11 = 4;
  if (uVar7 != 0) {
    uVar11 = uVar7 * 2;
  }
  if (uVar11 <= uVar7) goto LAB_1000d3e2;
  pvVar6 = recovered_10008090(uVar11);
  pvVar2 = (void *)*param_1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = 0;
    if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
      if (uVar7 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar8 = uVar7 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
          puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar8 != uVar9);
        if (uVar7 == uVar8) goto LAB_1000d3cf;
        uVar9 = uVar8;
        if ((uVar7 & 0x1c) == 0) goto LAB_1000d365;
      }
      uVar8 = uVar7 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_1000d3cf;
    }
LAB_1000d365:
    uVar10 = uVar7 & 3;
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar8 - uVar7 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar7 != uVar9);
    }
  }
LAB_1000d3cf:
  recovered_100080f0(pvVar2);
  *param_1 = (long)pvVar6;
  param_1[2] = uVar11;
  uVar7 = param_1[1];
LAB_1000d3e2:
  *(char *)(*param_1 + uVar7) = (char)((uint)param_2 >> 8);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d400
 */

long recovered_1000d400(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;

  lVar13 = *param_1;
  bVar17 = lVar13 == 0;
  if (bVar17) {
    uVar10 = param_1[1];
  }
  else {
    uVar10 = param_2 - lVar13;
  }
  uVar16 = (long)param_3 - (long)param_4;
  if (param_3 == param_4) goto LAB_1000d6bd;
  uVar15 = (long)param_4 - (long)param_3;
  uVar12 = param_1[1];
  uVar6 = param_1[2];
  if (uVar6 < uVar12 + uVar15) {
    uVar8 = 4;
    if (uVar6 != 0) {
      uVar8 = uVar6;
    }
    do {
      uVar6 = uVar8;
      uVar8 = uVar6 * 2;
    } while (uVar6 < uVar12 + uVar15);
    pvVar5 = recovered_10008090(uVar6);
    pointer = (void *)*param_1;
    uVar12 = param_1[1];
    if (uVar12 != 0) {
      uVar8 = 0;
      if ((3 < uVar12) && (0x1f < (ulong)((long)pvVar5 - (long)pointer))) {
        if (uVar12 < 0x20) {
          uVar9 = 0;
        }
        else {
          uVar8 = uVar12 & 0xffffffffffffffe0;
          uVar9 = 0;
          do {
            uVar2 = ((undefined8 *)((long)pointer + uVar9))[1];
            puVar1 = (undefined8 *)((long)pointer + uVar9 + 0x10);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            *(undefined8 *)((long)pvVar5 + uVar9) = *(undefined8 *)((long)pointer + uVar9);
            ((undefined8 *)((long)pvVar5 + uVar9))[1] = uVar2;
            puVar1 = (undefined8 *)((long)pvVar5 + uVar9 + 0x10);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            uVar9 = uVar9 + 0x20;
          } while (uVar8 != uVar9);
          if (uVar12 == uVar8) goto LAB_1000d57f;
          uVar9 = uVar8;
          if ((uVar12 & 0x1c) == 0) goto LAB_1000d515;
        }
        uVar8 = uVar12 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)((long)pvVar5 + uVar9) = *(undefined4 *)((long)pointer + uVar9);
          uVar9 = uVar9 + 4;
        } while (uVar8 != uVar9);
        if (uVar12 == uVar8) goto LAB_1000d57f;
      }
LAB_1000d515:
      uVar11 = uVar12 & 3;
      uVar9 = uVar8;
      if (uVar11 != 0) {
        do {
          *(undefined1 *)((long)pvVar5 + uVar9) = *(undefined1 *)((long)pointer + uVar9);
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar8 - uVar12 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)((long)pvVar5 + uVar9) = *(undefined1 *)((long)pointer + uVar9);
          *(undefined1 *)((long)pvVar5 + uVar9 + 1) = *(undefined1 *)((long)pointer + uVar9 + 1);
          *(undefined1 *)((long)pvVar5 + uVar9 + 2) = *(undefined1 *)((long)pointer + uVar9 + 2);
          *(undefined1 *)((long)pvVar5 + uVar9 + 3) = *(undefined1 *)((long)pointer + uVar9 + 3);
          uVar9 = uVar9 + 4;
        } while (uVar12 != uVar9);
      }
    }
LAB_1000d57f:
    recovered_100080f0(pointer);
    *param_1 = (long)pvVar5;
    param_1[2] = uVar6;
    uVar12 = param_1[1];
  }
  if (uVar10 < uVar12) {
    uVar14 = (int)uVar12 - (int)uVar10 & 3;
    uVar8 = (ulong)uVar14;
    uVar6 = uVar12;
    if (uVar14 != 0) {
      do {
        *(undefined1 *)(uVar15 + uVar6 + *param_1 + -1) = *(undefined1 *)((uVar6 - 1) + *param_1);
        uVar6 = uVar6 - 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uVar10 - uVar12 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((uVar15 - 1) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -1 + uVar6);
        *(undefined1 *)((uVar15 - 2) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -2 + uVar6);
        *(undefined1 *)((uVar15 - 3) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -3 + uVar6);
        *(undefined1 *)(uVar15 + uVar6 + *param_1 + -4) = *(undefined1 *)((uVar6 - 4) + *param_1);
        uVar6 = uVar6 - 4;
      } while (uVar10 < uVar6);
    }
  }
  uVar6 = uVar10;
  for (uVar12 = uVar15 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)(*param_1 + uVar6) = *param_3;
    param_3 = param_3 + 1;
    uVar6 = uVar6 + 1;
  }
  if (uVar16 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)(*param_1 + uVar6) = *param_3;
      *(undefined1 *)(*param_1 + 1 + uVar6) = param_3[1];
      *(undefined1 *)(*param_1 + 2 + uVar6) = param_3[2];
      *(undefined1 *)(*param_1 + 3 + uVar6) = param_3[3];
      param_3 = param_3 + 4;
      uVar6 = uVar6 + 4;
    } while (param_3 != param_4);
  }
  param_1[1] = param_1[1] + uVar15;
  lVar13 = *param_1;
  bVar17 = lVar13 == 0;
LAB_1000d6bd:
  lVar7 = 0;
  if (!bVar17) {
    lVar7 = lVar13 + uVar10;
  }
  return lVar7;
}


#undef DAT_1000e08c
#define DAT_1000e08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ddU)))
#undef LAB_1000d781
#define LAB_1000d781 (*(uint8_t *)(0x1000d781U))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_70 (*(code * *)(pf_stack_frame + 64))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 24))
#define local_68 (*(undefined * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_38 (*(undefined8 *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d6e0
 */

void recovered_1000d6e0(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  piVar1 = *(int **)((long)param_1 + 0x18);
  local_70 = recovered_10008040;
  local_68 = &DAT_1000e08c;
  local_58 = &LAB_1000d781;
  recovered_100086e0(&local_90);
  if (piVar1 != (int *)0x0) {
    local_88 = 1;
    local_38 = param_1;
    recovered_100071a0(piVar1);
    *(undefined8 *)((long)local_38 + 0x18) = 0;
    param_1 = local_38;
  }
  *(undefined1 *)((long)param_1 + 0x20) = 0;
  *(undefined8 *)((long)param_1 + 0x28) = 0;
  recovered_100080f0(param_1);
  recovered_10008700(&local_90);
  return;
}

#undef DAT_1000e08c
#undef LAB_1000d781
#undef local_90
#undef local_88
#undef local_70
#undef auStack_98
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7b0
 */

void * recovered_1000d7b0(long *param_1,long param_2,undefined2 *param_3,undefined2 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined2 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined2 *puVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;

  pvVar7 = (void *)*param_1;
  bVar21 = pvVar7 == (void *)0x0;
  if (bVar21) {
    uVar12 = param_1[1];
  }
  else {
    uVar12 = param_2 - (long)pvVar7 >> 1;
  }
  if (param_3 == param_4) goto LAB_1000db02;
  uVar19 = (long)param_4 + (-2 - (long)param_3);
  uVar20 = uVar19 >> 1;
  uVar8 = param_1[1];
  uVar14 = param_1[2];
  uVar15 = uVar8 + uVar20 + 1;
  if (uVar14 < uVar15) {
    uVar8 = 4;
    if (uVar14 != 0) {
      uVar8 = uVar14;
    }
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 * 2;
    } while (uVar14 < uVar15);
    pvVar7 = recovered_10008090(uVar14 * 2);
    pvVar9 = (void *)*param_1;
    uVar8 = param_1[1];
    if (uVar8 != 0) {
      uVar15 = 0;
      if ((3 < uVar8) && (0x1f < (ulong)((long)pvVar7 - (long)pvVar9))) {
        if (uVar8 < 0x10) {
          uVar10 = 0;
        }
        else {
          uVar15 = uVar8 & 0xfffffffffffffff0;
          uVar10 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar9 + uVar10 * 2);
            uVar3 = puVar1[1];
            puVar2 = (undefined8 *)((long)pvVar9 + uVar10 * 2 + 0x10);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            puVar2 = (undefined8 *)((long)pvVar7 + uVar10 * 2);
            *puVar2 = *puVar1;
            puVar2[1] = uVar3;
            puVar1 = (undefined8 *)((long)pvVar7 + uVar10 * 2 + 0x10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            uVar10 = uVar10 + 0x10;
          } while (uVar15 != uVar10);
          if (uVar8 == uVar15) goto LAB_1000d943;
          uVar10 = uVar15;
          if ((uVar8 & 0xc) == 0) goto LAB_1000d8d6;
        }
        uVar15 = uVar8 & 0xfffffffffffffffc;
        do {
          *(undefined8 *)((long)pvVar7 + uVar10 * 2) = *(undefined8 *)((long)pvVar9 + uVar10 * 2);
          uVar10 = uVar10 + 4;
        } while (uVar15 != uVar10);
        if (uVar8 == uVar15) goto LAB_1000d943;
      }
LAB_1000d8d6:
      uVar13 = uVar8 & 3;
      uVar10 = uVar15;
      if (uVar13 != 0) {
        do {
          *(undefined2 *)((long)pvVar7 + uVar10 * 2) = *(undefined2 *)((long)pvVar9 + uVar10 * 2);
          uVar10 = uVar10 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (uVar15 - uVar8 < 0xfffffffffffffffd) {
        do {
          *(undefined2 *)((long)pvVar7 + uVar10 * 2) = *(undefined2 *)((long)pvVar9 + uVar10 * 2);
          *(undefined2 *)((long)pvVar7 + uVar10 * 2 + 2) =
               *(undefined2 *)((long)pvVar9 + uVar10 * 2 + 2);
          *(undefined2 *)((long)pvVar7 + uVar10 * 2 + 4) =
               *(undefined2 *)((long)pvVar9 + uVar10 * 2 + 4);
          *(undefined2 *)((long)pvVar7 + uVar10 * 2 + 6) =
               *(undefined2 *)((long)pvVar9 + uVar10 * 2 + 6);
          uVar10 = uVar10 + 4;
        } while (uVar8 != uVar10);
      }
    }
LAB_1000d943:
    recovered_100080f0(pvVar9);
    *param_1 = (long)pvVar7;
    param_1[2] = uVar14;
    uVar8 = param_1[1];
  }
  uVar14 = uVar8 - uVar12;
  if (uVar12 <= uVar8 && uVar14 != 0) {
    uVar15 = uVar8;
    if (3 < uVar14) {
      lVar16 = ~uVar12 + uVar8;
      uVar10 = (long)pvVar7 + (uVar19 & 0xfffffffffffffffe) + uVar8 * 2;
      uVar13 = (long)pvVar7 + uVar8 * 2 + -2;
      if ((uVar19 < 0xffffffffffffffe0 && -1 < lVar16) &&
          (uVar13 + lVar16 * -2 <= uVar13 && uVar10 + lVar16 * -2 <= uVar10)) {
        if (uVar14 < 0x10) {
          uVar10 = 0;
        }
        else {
          lVar16 = uVar8 * 2;
          uVar10 = uVar14 & 0xfffffffffffffff0;
          lVar6 = (uVar19 & 0xfffffffffffffffe) + lVar16;
          lVar17 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar7 + lVar17 * 2 + lVar16 + -0x20);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)((long)pvVar7 + lVar17 * 2 + lVar16 + -0x10);
            uVar5 = puVar2[1];
            puVar1 = (undefined8 *)((long)pvVar7 + lVar17 * 2 + lVar6 + -0xe);
            *puVar1 = *puVar2;
            puVar1[1] = uVar5;
            puVar1 = (undefined8 *)((long)pvVar7 + lVar17 * 2 + lVar6 + -0x1e);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            lVar17 = lVar17 + -0x10;
          } while (-lVar17 != uVar10);
          if (uVar14 == uVar10) goto LAB_1000dab3;
          if ((uVar14 & 0xc) == 0) {
            uVar15 = uVar8 - uVar10;
            goto LAB_1000da93;
          }
        }
        uVar13 = uVar14 & 0xfffffffffffffffc;
        uVar15 = uVar8 - uVar13;
        lVar16 = -uVar10;
        do {
          *(undefined8 *)((long)pvVar7 + lVar16 * 2 + uVar20 * 2 + uVar8 * 2 + -6) =
               *(undefined8 *)((long)pvVar7 + lVar16 * 2 + uVar8 * 2 + -8);
          lVar16 = lVar16 + -4;
        } while (-lVar16 != uVar13);
        if (uVar14 == uVar13) goto LAB_1000dab3;
      }
    }
LAB_1000da93:
    do {
      *(undefined2 *)((long)pvVar7 + uVar15 * 2 + uVar20 * 2) =
           *(undefined2 *)((long)pvVar7 + uVar15 * 2 + -2);
      uVar15 = uVar15 - 1;
    } while (uVar12 < uVar15);
  }
LAB_1000dab3:
  uVar20 = uVar20 + 1;
  if ((uVar19 < 6) || ((long)pvVar7 + (uVar12 * 2 - (long)param_3) < 0x20)) {
    puVar18 = param_3;
    uVar14 = uVar12;
LAB_1000dad2:
    puVar11 = (undefined2 *)((long)pvVar7 + uVar14 * 2);
    do {
      *puVar11 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar11 = puVar11 + 1;
    } while (puVar18 != param_4);
  }
  else if (uVar19 < 0x1e) {
    uVar15 = 0;
LAB_1000db6a:
    uVar19 = uVar20 & 0xfffffffffffffffc;
    puVar18 = param_3 + uVar19;
    uVar14 = uVar12 + uVar19;
    do {
      *(undefined8 *)((long)pvVar7 + uVar15 * 2 + uVar12 * 2) = *(undefined8 *)(param_3 + uVar15);
      uVar15 = uVar15 + 4;
    } while (uVar19 != uVar15);
    if (uVar20 != uVar19) goto LAB_1000dad2;
  }
  else {
    uVar15 = uVar20 & 0xfffffffffffffff0;
    uVar14 = 0;
    do {
      uVar3 = *(undefined8 *)((long)(param_3 + uVar14) + 8);
      uVar4 = *(undefined8 *)(param_3 + uVar14 + 8);
      uVar5 = *(undefined8 *)((long)(param_3 + uVar14 + 8) + 8);
      puVar1 = (undefined8 *)((long)pvVar7 + uVar14 * 2 + uVar12 * 2);
      *puVar1 = *(undefined8 *)(param_3 + uVar14);
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)pvVar7 + uVar14 * 2 + uVar12 * 2 + 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      uVar14 = uVar14 + 0x10;
    } while (uVar15 != uVar14);
    if (uVar20 != uVar15) {
      if ((uVar20 & 0xc) == 0) {
        uVar14 = uVar12 + uVar15;
        puVar18 = param_3 + uVar15;
        goto LAB_1000dad2;
      }
      goto LAB_1000db6a;
    }
  }
  param_1[1] = uVar8 + uVar20;
  bVar21 = pvVar7 == (void *)0x0;
LAB_1000db02:
  pvVar9 = (void *)0x0;
  if (!bVar21) {
    pvVar9 = (void *)((long)pvVar7 + uVar12 * 2);
  }
  return pvVar9;
}

