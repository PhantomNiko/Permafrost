/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c060
#define DAT_1000c060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe92U)))
#undef DAT_1000c061
#define DAT_1000c061 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe93U)))
#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

/* WARNING: Removing unreachable block (ram,0x100004bc) */

void recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000c060 = 0;
    DAT_1000c061 = 0;
    recovered_100004e0();
    DAT_1000c070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000c060
#undef DAT_1000c061
#undef DAT_1000c070

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
#undef DAT_1000c060
#define DAT_1000c060 (*(char *)(((uintptr_t)pf_module_state + 0xe92U)))
#undef DAT_1000c068
#define DAT_1000c068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe9aU)))
#undef DAT_1000c078
#define DAT_1000c078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xeaaU)))
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
 * Address: 0x100004e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100004e0(void)

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
  if (DAT_1000c060 != '\0') {
    return;
  }
  DAT_1000c068 = 0;
  DAT_1000c078 = 0;
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
                if (*puVar2 <= uVar6) goto LAB_10000573;
                puVar2[2] = *puVar2;
                puVar2[3] = puVar2[1];
                puVar2 = puVar2 + -2;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            uVar7 = 0;
LAB_10000573:
            local_438[uVar7 * 2 + 2] = uVar6;
            local_438[uVar7 * 2 + 3] = uVar5 - uVar6;
            uVar8 = uVar8 + 1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
LAB_100006be:
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
        if (lVar11 == 0) goto LAB_10000782;
      }
      puVar2 = local_438 + 3;
      do {
        local_438[1] = 0x1000076f;
        recovered_10006470((long *)puVar2[-1],*puVar2,&local_28);
        puVar2 = puVar2 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      if (DAT_1000c068 != 0) goto LAB_100007b9;
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
              if (*puVar2 <= uVar6) goto LAB_10000635;
              puVar2[2] = *puVar2;
              puVar2[3] = puVar2[1];
              puVar2 = puVar2 + -2;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar7 = 0;
LAB_10000635:
          local_438[uVar7 * 2 + 2] = uVar6;
          local_438[uVar7 * 2 + 3] = uVar5 - uVar6;
          uVar8 = uVar8 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
    goto LAB_100006be;
  }
LAB_10000782:
  uVar3 = _DAT_00280088 & 0xfffffff0;
  if (_DAT_00280088 < 0x300001) {
    uVar3 = 0x4000000;
  }
  uVar1 = (ulong)uVar3;
  if (uVar3 < 0x300031) {
    uVar1 = 0x4000000;
  }
  local_438[1] = 0x100007b9;
  recovered_10006470((long *)0x300000,uVar1 - 0x300000,&local_28);
LAB_100007b9:
  if (DAT_1000c078 == 0) {
    DAT_1000c078 = DAT_1000c068;
  }
  DAT_1000c060 = 1;
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
#undef DAT_1000c060
#undef DAT_1000c068
#undef DAT_1000c078
#undef _DAT_00280088
#undef _DAT_0028008c
#undef _DAT_00280238
#undef _DAT_0028023c
#undef local_438
#undef local_28

#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007f0
 */

/* WARNING: Removing unreachable block (ram,0x1000082c) */

void recovered_100007f0(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000840(param_1,param_2,param_3);
    DAT_1000c070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000c070

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000c061
#define DAT_1000c061 (*(char *)(((uintptr_t)pf_module_state + 0xe93U)))
#undef DAT_1000c068
#define DAT_1000c068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe9aU)))
#undef DAT_1000c078
#define DAT_1000c078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xeaaU)))
#define local_38 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000840
 */

bool recovered_10000840(long param_1,long param_2,long param_3)

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
  if ((bVar3) || (DAT_1000c061 != '\0')) {
    return false;
  }
  DAT_1000c061 = 1;
  recovered_100004e0();
  lVar4 = 0;
  do {
    plVar1 = *(long **)(param_1 + lVar4 * 8);
    uVar7 = *(ulong *)(param_2 + lVar4 * 8);
    plVar6 = (long *)((long)plVar1 + uVar7);
    if (CARRY8((ulong)plVar1,uVar7)) {
      plVar6 = (long *)0xffffffffffffffff;
    }
    if (~(ulong)plVar1 < uVar7) {
      DAT_1000c061 = 0;
      return false;
    }
    if (plVar6 <= plVar1) {
      DAT_1000c061 = 0;
      return false;
    }
    if (plVar1 < (long *)0x10000000 && (long *)0x8000000 < plVar6) {
      if (plVar1 < (long *)0x8000000) {
        uVar7 = 0x8000000 - (long)plVar1;
        if (~(ulong)plVar1 < uVar7) {
          DAT_1000c061 = 0;
          return false;
        }
        uVar10 = (ulong)((int)plVar1 + 0xfU & 0xffffff0) - (long)plVar1;
        uVar8 = uVar7 - uVar10;
        if (uVar7 < uVar10 || uVar8 == 0) goto LAB_1000094d;
        bVar3 = 0x30 < (uVar8 & 0xfffffffffffffff0);
      }
      else {
LAB_1000094d:
        bVar3 = false;
      }
      if ((plVar6 < &DAT_10000001 ||
           0xffffffffffffffce < ((ulong)plVar6 & 0xfffffffffffffff0) - 0x10000031) && (!bVar3)) {
        DAT_1000c061 = 0;
        return false;
      }
    }
    else {
      if ((long *)0xfffffffffffffff0 < plVar1) {
        DAT_1000c061 = 0;
        return false;
      }
      uVar10 = ((ulong)((long)plVar1 + 0xf) & 0xfffffffffffffff0) - (long)plVar1;
      uVar8 = uVar7 - uVar10;
      if (uVar7 < uVar10 || uVar8 == 0) {
        DAT_1000c061 = 0;
        return false;
      }
      if ((uVar8 & 0xfffffffffffffff0) < 0x31) {
        DAT_1000c061 = 0;
        return false;
      }
    }
    plVar2 = DAT_1000c068;
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
          DAT_1000c061 = 0;
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
        DAT_1000c061 = 0;
        return false;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == param_3) {
      puVar5 = (ulong *)&DAT_1000c068;
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        uVar7 = *puVar5;
        puVar5 = (ulong *)(uVar7 + 8);
      } while (uVar7 != 0);
      lVar4 = 0;
      local_38 = uVar8;
      do {
        recovered_10006470(*(long **)(param_1 + lVar4 * 8),*(ulong *)(param_2 + lVar4 * 8),&local_38
                          );
        lVar4 = lVar4 + 1;
      } while (param_3 != lVar4);
      if (DAT_1000c078 == (long *)0x0) {
        DAT_1000c078 = DAT_1000c068;
      }
      DAT_1000c061 = 0;
      return local_38 != uVar8;
    }
  } while( true );
}

#undef DAT_10000001
#undef DAT_1000c061
#undef DAT_1000c068
#undef DAT_1000c078
#undef local_38

#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
#define local_18 (*(undefined8 *)(pf_stack_frame + 24))
#define local_10 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a80
 */

/* WARNING: Removing unreachable block (ram,0x10000abc) */

void recovered_10000a80(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    local_18 = param_1;
    local_10 = param_2;
    recovered_10000840((long)&local_18,(long)&local_10,1);
    DAT_1000c070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000c070
#undef local_18
#undef local_10

#undef DAT_1000c068
#define DAT_1000c068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xe9aU)))
#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ae0
 */

/* WARNING: Removing unreachable block (ram,0x10000b1c) */

ulong recovered_10000ae0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;

  iVar1 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  uVar4 = 0;
  for (plVar2 = DAT_1000c068; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      uVar4 = uVar4 + *plVar2;
    }
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_1000c070 = 0;
  return uVar3;
}

#undef DAT_1000c068
#undef DAT_1000c070

#undef DAT_1000c068
#define DAT_1000c068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xe9aU)))
#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b60
 */

/* WARNING: Removing unreachable block (ram,0x10000b9c) */

long recovered_10000b60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  long *plVar3;

  iVar1 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  lVar2 = 0;
  for (plVar3 = DAT_1000c068; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    if ((char)plVar3[3] == '\x01') {
      lVar2 = lVar2 + *plVar3;
    }
  }
  DAT_1000c070 = 0;
  return lVar2;
}

#undef DAT_1000c068
#undef DAT_1000c070

#undef DAT_1000c068
#define DAT_1000c068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xe9aU)))
#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bd0
 */

/* WARNING: Removing unreachable block (ram,0x10000c0c) */

ulong recovered_10000bd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;

  iVar2 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  uVar4 = 0;
  for (plVar1 = DAT_1000c068; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar4 = uVar4 + *plVar1;
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_1000c070 = 0;
  return uVar3;
}

#undef DAT_1000c068
#undef DAT_1000c070

#undef DAT_1000c068
#define DAT_1000c068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xe9aU)))
#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c60
 */

/* WARNING: Removing unreachable block (ram,0x10000c9c) */

long recovered_10000c60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  long lVar3;

  iVar2 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  lVar3 = 0;
  for (plVar1 = DAT_1000c068; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar3 = lVar3 + *plVar1;
  }
  DAT_1000c070 = 0;
  return lVar3;
}

#undef DAT_1000c068
#undef DAT_1000c070

#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce0
 */

/* WARNING: Removing unreachable block (ram,0x10000d1c) */

void recovered_10000ce0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000d40(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1000c070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000c070

#undef DAT_1000c068
#define DAT_1000c068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xe9aU)))
#undef DAT_1000c078
#define DAT_1000c078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xeaaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d40
 */

ulong * recovered_10000d40(long param_1,ulong *param_2,ulong *param_3)

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
    recovered_100004e0();
    puVar1 = DAT_1000c068;
    puVar5 = DAT_1000c078;
    if (DAT_1000c078 == (ulong *)0x0) {
      puVar5 = DAT_1000c068;
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
                if (uVar10 < uVar7) goto LAB_10000e08;
              }
            }
            else {
              uVar10 = 0;
LAB_10000e08:
              if ((uVar9 - 1 <= (ulong)((long)param_3 - (long)puVar4) && puVar4 <= param_3) &&
                 (uVar9 <= uVar7 - uVar10 && uVar10 <= uVar7)) {
                if (uVar9 - 1 < uVar7) {
                  if (uVar8 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000e4d;
                  }
                  else if (uVar11 < 0xffffffffffffffc0) {
LAB_10000e4d:
                    if (uVar10 == 0) goto LAB_10000eb8;
                    if ((uVar9 + uVar10) - 1 < uVar7) {
                      if (uVar7 - (uVar10 + uVar9) < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000e9f;
                      }
                      else if (uVar10 + uVar9 < 0xffffffffffffffc0) {
LAB_10000e9f:
                        puVar3 = recovered_10006630(puVar3,puVar4);
                        if (puVar3 == (ulong *)0x0) {
                          return (ulong *)0x0;
                        }
                        uVar7 = *puVar3;
                        uVar8 = uVar7 - uVar9;
LAB_10000eb8:
                        if (uVar7 < uVar9 || uVar8 < 0x30) {
                          DAT_1000c078 = (ulong *)puVar3[1];
                        }
                        else {
                          DAT_1000c078 = (ulong *)((long)puVar3 + uVar9 + 0x20);
                          *(ulong *)((long)puVar3 + uVar9 + 0x20) = uVar8 - 0x20;
                          uVar11 = puVar3[1];
                          *(ulong *)((long)puVar3 + uVar9 + 0x28) = uVar11;
                          *(ulong **)((long)puVar3 + uVar9 + 0x30) = puVar3;
                          *(undefined1 *)((long)puVar3 + uVar9 + 0x38) = 1;
                          if (uVar11 != 0) {
                            *(ulong **)(uVar11 + 0x10) = DAT_1000c078;
                          }
                          *puVar3 = uVar9;
                          puVar3[1] = (ulong)DAT_1000c078;
                        }
                        *(undefined1 *)(puVar3 + 3) = 0;
                        if (DAT_1000c078 == (ulong *)0x0) {
                          DAT_1000c078 = DAT_1000c068;
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

#undef DAT_1000c068
#undef DAT_1000c078

#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f40
 */

/* WARNING: Removing unreachable block (ram,0x10000f7c) */

void recovered_10000f40(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000d40(param_1,(ulong *)0x0,param_2);
    DAT_1000c070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000c070

#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fa0
 */

/* WARNING: Removing unreachable block (ram,0x10000fdc) */

ulong * recovered_10000fa0(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_3 < param_2) {
    puVar2 = (ulong *)0x0;
  }
  else {
    puVar2 = recovered_10000d40(param_1,(ulong *)param_2,(ulong *)param_3);
  }
  DAT_1000c070 = 0;
  return puVar2;
}

#undef DAT_1000c070

#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001000
 */

/* WARNING: Removing unreachable block (ram,0x1000103c) */

void recovered_10001000(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001050(param_1);
    DAT_1000c070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000c070

#undef DAT_1000c078
#define DAT_1000c078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xeaaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001050
 */

void recovered_10001050(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;

  if (param_1 != 0) {
    recovered_100004e0();
    puVar2 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    puVar3 = *(ulong **)(param_1 + -0x18);
    if ((puVar3 != (ulong *)0x0) && ((char)puVar3[3] == '\x01')) {
      uVar4 = *puVar2;
      while (((uVar4 < 0xffffffffffffffe0 && ((ulong *)(param_1 + uVar4) == puVar3)) &&
             (*puVar3 <= -uVar4 - 0x21))) {
        if (DAT_1000c078 == puVar3) {
          DAT_1000c078 = puVar2;
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
          if (DAT_1000c078 == puVar2) {
            DAT_1000c078 = puVar3;
          }
          puVar1[2] = (ulong)puVar3;
          puVar2 = puVar1;
        } while ((char)puVar1[3] != '\0');
      }
      puVar2 = puVar3;
    }
    DAT_1000c078 = puVar2;
  }
  return;
}

#undef DAT_1000c078

#undef DAT_1000c070
#define DAT_1000c070 (*(int *)(((uintptr_t)pf_module_state + 0xea2U)))
#undef DAT_1000c078
#define DAT_1000c078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xeaaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001170
 */

/* WARNING: Removing unreachable block (ram,0x100011ac) */

undefined8 * recovered_10001170(undefined8 *param_1,ulong param_2)

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

  iVar8 = DAT_1000c070;
  { __typeof__(DAT_1000c070) pf_atomic_old = __atomic_exchange_n(&(DAT_1000c070),1,__ATOMIC_SEQ_CST);
}
  if (iVar8 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (undefined8 *)0x0) {
    puVar17 = recovered_10000d40(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1000c070 = 0;
    return puVar17;
  }
  if (param_2 == 0) {
    recovered_10001050((long)param_1);
    DAT_1000c070 = 0;
    return (undefined8 *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_1000c070 = 0;
    return (undefined8 *)0x0;
  }
  recovered_100004e0();
  uVar13 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar17 = param_1 + -4;
  uVar12 = param_1[-4];
  if (uVar13 <= uVar12) {
    if (uVar12 <= uVar13 - 1) {
      DAT_1000c070 = 0;
      return (undefined8 *)0x0;
    }
    if (uVar12 - uVar13 < 0x30) {
      if (uVar12 < 0xffffffffffffffe0) {
        DAT_1000c070 = 0;
        return param_1;
      }
      DAT_1000c070 = 0;
      return (undefined8 *)0x0;
    }
    if (0xffffffffffffffb0 < param_2) {
      DAT_1000c070 = 0;
      return (undefined8 *)0x0;
    }
    DAT_1000c078 = (ulong *)((long)param_1 + uVar13);
    *(ulong *)((long)param_1 + uVar13) = (uVar12 - uVar13) - 0x20;
    lVar2 = param_1[-3];
    *(long *)((long)param_1 + uVar13 + 8) = lVar2;
    *(ulong **)((long)param_1 + uVar13 + 0x10) = puVar17;
    *(undefined1 *)((long)param_1 + uVar13 + 0x18) = 1;
    if (lVar2 != 0) {
      *(ulong **)(lVar2 + 0x10) = DAT_1000c078;
    }
    param_1[-4] = uVar13;
    param_1[-3] = DAT_1000c078;
    DAT_1000c070 = 0;
    return param_1;
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
      if (uVar14 < 0xffffffffffffffe0) goto LAB_10001344;
    }
    else if (param_2 < 0xffffffffffffffb1) {
LAB_10001344:
      puVar9 = (ulong *)param_1[-3];
      puVar15 = DAT_1000c078;
      do {
        if (((puVar9 == (ulong *)0x0) || ((char)puVar9[3] != '\x01')) ||
           ((0xffffffffffffffdf < uVar12 ||
            (((ulong *)((long)param_1 + uVar12) != puVar9 || (-uVar12 - 0x21 < *puVar9)))))) break;
        if (puVar15 == puVar9) {
          puVar15 = puVar17;
          DAT_1000c078 = puVar17;
        }
        uVar12 = uVar12 + *puVar9 + 0x20;
        param_1[-4] = uVar12;
        puVar9 = (ulong *)puVar9[1];
        param_1[-3] = puVar9;
        if (puVar9 != (ulong *)0x0) {
          puVar9[2] = (ulong)puVar17;
        }
      } while (uVar12 < uVar13);
      if (uVar12 < uVar13) {
        DAT_1000c070 = 0;
        return (undefined8 *)0x0;
      }
      uVar10 = recovered_100066a0(puVar17,uVar13);
      if ((char)uVar10 != '\0') {
        DAT_1000c078 = (ulong *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1000c070 = 0;
      return param_1;
    }
  }
  puVar9 = recovered_10000d40(uVar13,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  if (puVar9 == (ulong *)0x0) {
    DAT_1000c070 = 0;
    return (undefined8 *)0x0;
  }
  if (*puVar17 < uVar13) {
    uVar13 = *puVar17;
  }
  puVar17 = param_1;
  puVar15 = puVar9;
  if (uVar13 < 0x10) {
LAB_100013f6:
    if (uVar13 == 0) goto LAB_100016af;
  }
  else if ((((uint)puVar9 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)puVar9 & 7) == 0) {
      puVar16 = puVar9;
      puVar11 = param_1;
LAB_100015e1:
      uVar12 = uVar13;
    }
    else {
      puVar16 = (ulong *)((long)puVar9 + 1);
      *(undefined1 *)puVar9 = *(undefined1 *)param_1;
      uVar12 = uVar13 - 1;
      if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
        puVar11 = (ulong *)((long)param_1 + 1);
      }
      else {
        puVar16 = (ulong *)((long)puVar9 + 2);
        *(undefined1 *)((long)puVar9 + 1) = *(undefined1 *)((long)param_1 + 1);
        uVar12 = uVar13 - 2;
        if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
          puVar11 = (ulong *)((long)param_1 + 2);
        }
        else {
          puVar16 = (ulong *)((long)puVar9 + 3);
          *(undefined1 *)((long)puVar9 + 2) = *(undefined1 *)((long)param_1 + 2);
          uVar12 = uVar13 - 3;
          if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
            puVar11 = (ulong *)((long)param_1 + 3);
          }
          else {
            puVar16 = (ulong *)((long)puVar9 + 4);
            *(undefined1 *)((long)puVar9 + 3) = *(undefined1 *)((long)param_1 + 3);
            uVar12 = uVar13 - 4;
            if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
              puVar11 = (ulong *)((long)param_1 + 4);
            }
            else {
              puVar16 = (ulong *)((long)puVar9 + 5);
              *(undefined1 *)((long)puVar9 + 4) = *(undefined1 *)((long)param_1 + 4);
              uVar12 = uVar13 - 5;
              if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
                puVar11 = (ulong *)((long)param_1 + 5);
              }
              else {
                puVar16 = (ulong *)((long)puVar9 + 6);
                *(undefined1 *)((long)puVar9 + 5) = *(undefined1 *)((long)param_1 + 5);
                uVar12 = uVar13 - 6;
                if (((ulong)puVar16 & 7) == 0 || uVar12 == 0) {
                  puVar11 = (ulong *)((long)param_1 + 6);
                }
                else {
                  puVar16 = (ulong *)((long)puVar9 + 7);
                  *(undefined1 *)((long)puVar9 + 6) = *(undefined1 *)((long)param_1 + 6);
                  uVar12 = uVar13 - 7;
                  if (((ulong)puVar16 & 7) != 0 && uVar12 != 0) {
                    *(undefined1 *)((long)puVar9 + 7) = *(undefined1 *)((long)param_1 + 7);
                    uVar13 = uVar13 - 8;
                    puVar16 = puVar9 + 1;
                    puVar11 = param_1 + 1;
                    goto LAB_100015e1;
                  }
                  puVar11 = (ulong *)((long)param_1 + 7);
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
        if (uVar12 == uVar18) goto LAB_100013f6;
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
    goto LAB_100013f6;
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
      if (uVar13 == uVar18) goto LAB_100016af;
      if ((uVar13 & 0x1c) == 0) {
        puVar17 = (ulong *)((long)puVar17 + uVar18);
        puVar16 = (ulong *)((long)puVar15 + uVar18);
        uVar12 = (ulong)((uint)uVar13 & 0x1f);
        goto LAB_10001604;
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
    if (uVar13 == uVar14) goto LAB_100016af;
  }
LAB_10001604:
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
LAB_100016af:
  recovered_10001050((long)param_1);
  DAT_1000c070 = 0;
  return puVar9;
}

#undef DAT_1000c070
#undef DAT_1000c078

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001820
 */

ulong recovered_10001820(ulong param_1,uint param_2)

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
 * Address: 0x10001860
 */

ulong recovered_10001860(ulong param_1,uint param_2)

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
 * Address: 0x100018a0
 */

long recovered_100018a0(long param_1,uint param_2)

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
 * Address: 0x100018f0
 */

ulong recovered_100018f0(ulong param_1,ulong param_2)

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
 * Address: 0x10001990
 */

long recovered_10001990(ulong param_1,ulong param_2)

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
 * Address: 0x10001a00
 */

ulong recovered_10001a00(ulong param_1,ulong param_2)

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
 * Address: 0x10001ad0
 */

long recovered_10001ad0(ulong param_1,ulong param_2)

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
 * Address: 0x10001b60
 */

void recovered_10001b60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b80
 */

int recovered_10001b80(int param_1)

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
 * Address: 0x10001b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001b90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong in_RDI;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (*(code *)(ulong)_DAT_0028084c)(in_RDI);
    return pvVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c

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
 * Address: 0x10001be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001be0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *in_RDI;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_00280850)(in_RDI);
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
 * Address: 0x10001c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001c30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong in_RSI;
  void *in_RDI;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x57 < _DAT_00280808 && ((code *)(ulong)_DAT_00280854 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (*(code *)(ulong)_DAT_00280854)(in_RDI,in_RSI);
    return pvVar1;
  }
  return 0;
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
 * Address: 0x10001c80
 */

void recovered_10001c80(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
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
LAB_10001c9f:
    if (param_3 == 0) {
      return;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)param_1 & 7) == 0) {
LAB_10001e8e:
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
                    goto LAB_10001e8e;
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
        if (uVar5 == uVar8) goto LAB_10001c9f;
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
    goto LAB_10001c9f;
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
        goto LAB_10001eb0;
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
LAB_10001eb0:
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
 * Address: 0x100020c0
 */

void recovered_100020c0(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
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
LAB_1000245a:
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
                      goto LAB_1000245a;
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
          if (uVar9 == uVar10) goto LAB_100026b8;
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
LAB_100026b8:
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
          goto LAB_1000247c;
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
LAB_1000247c:
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
LAB_1000224e:
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
                    goto LAB_1000224e;
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
        if (uVar9 == uVar10) goto LAB_1000281a;
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
LAB_1000281a:
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
        goto LAB_100028df;
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
LAB_100028df:
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
 * Address: 0x10002980
 */

void recovered_10002980(byte *param_1,byte param_2,ulong param_3)

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
LAB_10002acd:
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
                    goto LAB_10002acd;
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
        if (uVar4 == uVar7) goto LAB_10002c01;
      }
      do {
        *(undefined8 *)param_1 = uVar3;
        param_1 = param_1 + 8;
        param_3 = param_3 - 8;
      } while (7 < param_3);
    }
  }
LAB_10002c01:
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 4) {
LAB_10002c10:
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
        goto LAB_10002c10;
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
 * Address: 0x10002cd0
 */

void recovered_10002cd0(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_10002ef5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10002ef5:
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
        goto LAB_10002f76;
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
LAB_10002f76:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fa0
 */

void recovered_10002fa0(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_100031c5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_100031c5:
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
        goto LAB_10003246;
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
LAB_10003246:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003270
 */

char * recovered_10003270(char *param_1,char param_2,long param_3)

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
 * Address: 0x100032a0
 */

int recovered_100032a0(ulong *param_1,ulong *param_2,ulong param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) goto LAB_100034d3;
    uVar11 = param_3;
    puVar8 = param_2;
    puVar10 = param_1;
    if (((ulong)param_1 & 7) != 0) {
      bVar1 = (byte)*param_1;
      bVar5 = (byte)*param_2;
      if (bVar1 != bVar5) {
LAB_10003433:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10003588:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)param_1 + 1);
      puVar8 = (ulong *)((long)param_2 + 1);
      uVar11 = param_3 - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10003433;
        puVar10 = (ulong *)((long)param_1 + 2);
        puVar8 = (ulong *)((long)param_2 + 2);
        uVar11 = param_3 - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10003433;
          puVar10 = (ulong *)((long)param_1 + 3);
          puVar8 = (ulong *)((long)param_2 + 3);
          uVar11 = param_3 - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10003433;
            puVar10 = (ulong *)((long)param_1 + 4);
            puVar8 = (ulong *)((long)param_2 + 4);
            uVar11 = param_3 - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10003433;
              puVar10 = (ulong *)((long)param_1 + 5);
              puVar8 = (ulong *)((long)param_2 + 5);
              uVar11 = param_3 - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10003433;
                puVar10 = (ulong *)((long)param_1 + 6);
                puVar8 = (ulong *)((long)param_2 + 6);
                uVar11 = param_3 - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10003433;
                  puVar10 = (ulong *)((long)param_1 + 7);
                  puVar8 = (ulong *)((long)param_2 + 7);
                  uVar11 = param_3 - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10003433;
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
LAB_100034ff:
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
        goto LAB_10003588;
      }
      uVar4 = puVar10[1];
      uVar7 = puVar8[1];
      if (uVar4 != uVar7) goto LAB_100034ff;
      uVar4 = puVar10[2];
      uVar7 = puVar8[2];
      if (uVar4 != uVar7) goto LAB_100034ff;
      uVar4 = puVar10[3];
      uVar7 = puVar8[3];
      if (uVar4 != uVar7) goto LAB_100034ff;
      uVar11 = uVar11 - 0x20;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    }
    for (; 7 < param_3; param_3 = param_3 - 8) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_100035a0((byte *)param_1,(byte *)param_2);
        return iVar3;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_100034d3:
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
 * Address: 0x100035a0
 */

int recovered_100035a0(byte *param_1,byte *param_2)

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
 * Address: 0x10003610
 */

bool recovered_10003610(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003630
 */

bool recovered_10003630(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003650
 */

bool recovered_10003650(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003670
 */

bool recovered_10003670(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036a0
 */

bool recovered_100036a0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036c0
 */

bool recovered_100036c0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036e0
 */

int recovered_100036e0(int param_1)

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
 * Address: 0x10003700
 */

int recovered_10003700(int param_1)

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
 * Address: 0x10003720
 */

long recovered_10003720(long param_1)

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
 * Address: 0x10003750
 */

int recovered_10003750(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10003773;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10003773:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
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

void recovered_100037d0(long param_1,long param_2)

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
 * Address: 0x100037f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_100037f0(undefined8 *param_1)

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
  puVar4 = (*(code *)(ulong)_DAT_0028084c)(uVar9);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar8 = puVar4;
  if (uVar9 < 0x10) {
LAB_10003899:
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
        if (uVar5 == uVar10) goto LAB_10003899;
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
    goto LAB_10003899;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)param_1) < 0x20)) {
LAB_10003bb8:
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
        goto LAB_10003bb8;
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
 * Address: 0x10003c70
 */

char * recovered_10003c70(char *param_1,char param_2)

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
 * Address: 0x10003cb0
 */

long recovered_10003cb0(char *param_1,char *param_2)

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
 * Address: 0x10003d10
 */

long recovered_10003d10(char *param_1,char *param_2)

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
 * Address: 0x10003d70
 */

char * recovered_10003d70(char *param_1,char *param_2)

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
 * Address: 0x10003dd0
 */

char * recovered_10003dd0(char *param_1,char *param_2)

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


#undef DAT_1000b320
#define DAT_1000b320 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e30
 */

undefined * recovered_10003e30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000b320;
}

#undef DAT_1000b320

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xe32U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e40
 */

undefined ** recovered_10003e40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

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
#define local_28 (*(undefined1 (*)[40])(pf_stack_frame + 24))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e50
 */

/* WARNING: Removing unreachable block (ram,0x10003e66) */
/* WARNING: Removing unreachable block (ram,0x10003eb3) */
/* WARNING: Removing unreachable block (ram,0x10003ebe) */
/* WARNING: Removing unreachable block (ram,0x10003ec7) */
/* WARNING: Removing unreachable block (ram,0x10003ed0) */
/* WARNING: Removing unreachable block (ram,0x10003ebc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003e50(undefined8 *param_1)

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
#undef local_28
#undef uStack_18

#undef DAT_1000b1d0
#define DAT_1000b1d0 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f50
 */

double recovered_10003f50(double param_1,uint param_2)

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
          param_1 = param_1 * DAT_1000b1d0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0 *
                    DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0;
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

#undef DAT_1000b1d0

#undef DAT_1000b1d0
#define DAT_1000b1d0 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b250
#define DAT_1000b250 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef _DAT_1000b250
#define _DAT_1000b250 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004020(double param_1,int *param_2)

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
  dVar2 = (double)(_DAT_1000b250 ^ (ulong)param_1);
  if ((double)(_DAT_1000b250 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1000b1d8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000b1d0;
      iVar1 = iVar1 + 1;
    } while (DAT_1000b1d8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000b1d0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1000b250 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1000b1d0
#undef DAT_1000b1d8
#undef DAT_1000b250
#undef _DAT_1000b250

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040f0
 */

double recovered_100040f0(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004120
 */

double recovered_10004120(double param_1,double param_2)

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
      return DAT_1000b1d8;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000b1d8;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000b1d8 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000b1d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041a0
 */

ulong recovered_100041a0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041d0
 */

ulong recovered_100041d0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  return ~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
         (ulong)(DAT_1000b1d8 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_1000b1d8

#undef DAT_1000b1d0
#define DAT_1000b1d0 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004230
 */

double recovered_10004230(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_1000b1d8) {
      dVar1 = DAT_1000b1d8;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b1d0;
  }
  return dVar1;
}

#undef DAT_1000b1d0
#undef DAT_1000b1d8

#undef DAT_1000b1d0
#define DAT_1000b1d0 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b1e0
#define DAT_1000b1e0 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1000b1e8
#define DAT_1000b1e8 (*(double *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_1000b1f0
#define DAT_1000b1f0 (*(double *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_1000b1f8
#define DAT_1000b1f8 (*(double *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_1000b200
#define DAT_1000b200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_1000b208
#define DAT_1000b208 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_1000b260
#define DAT_1000b260 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92U)))
#undef DAT_1000b270
#define DAT_1000b270 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef DAT_1000b280
#define DAT_1000b280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2U)))
#undef DAT_1000b290
#define DAT_1000b290 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc2U)))
#undef _DAT_1000b200
#define _DAT_1000b200 (*(double *)(((uintptr_t)pf_module_state + 0x32U)))
#undef _DAT_1000b208
#define _DAT_1000b208 (*(double *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef _DAT_1000b260
#define _DAT_1000b260 (*(uint128 *)(((uintptr_t)pf_module_state + 0x92U)))
#undef _DAT_1000b270
#define _DAT_1000b270 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef _DAT_1000b280
#define _DAT_1000b280 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb2U)))
#undef _DAT_1000b290
#define _DAT_1000b290 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100043e0(double param_1)

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
    if (DAT_1000b1e8 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000b1d0;
        iVar1 = iVar1 + 1;
      } while (DAT_1000b1e8 < param_1);
    }
    for (; param_1 < DAT_1000b1f0; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000b1f8 + param_1) / (param_1 + DAT_1000b1d8);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000b260);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000b270);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000b280);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000b290);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000b200 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000b208;
  }
  return DAT_1000b1e0;
}

#undef DAT_1000b1d0
#undef DAT_1000b1d8
#undef DAT_1000b1e0
#undef DAT_1000b1e8
#undef DAT_1000b1f0
#undef DAT_1000b1f8
#undef DAT_1000b200
#undef DAT_1000b208
#undef DAT_1000b260
#undef DAT_1000b270
#undef DAT_1000b280
#undef DAT_1000b290
#undef _DAT_1000b200
#undef _DAT_1000b208
#undef _DAT_1000b260
#undef _DAT_1000b270
#undef _DAT_1000b280
#undef _DAT_1000b290

#undef DAT_1000b2a0
#define DAT_1000b2a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004530
 */

long recovered_10004530(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000b2a0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000b2a0

#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b210
#define DAT_1000b210 (*(double *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_1000b218
#define DAT_1000b218 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1000b220
#define DAT_1000b220 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1000b228
#define DAT_1000b228 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_1000b230
#define DAT_1000b230 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_1000b2b0
#define DAT_1000b2b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe2U)))
#undef _DAT_1000b230
#define _DAT_1000b230 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_1000b2b0
#define _DAT_1000b2b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004560(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000b210 < param_1; param_1 = param_1 + DAT_1000b218) {
  }
  for (; param_1 < DAT_1000b220; param_1 = param_1 + DAT_1000b228) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000b2b0);
  return ((dVar1 / _DAT_1000b230 + DAT_1000b1d8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000b1d8
#undef DAT_1000b210
#undef DAT_1000b218
#undef DAT_1000b220
#undef DAT_1000b228
#undef DAT_1000b230
#undef DAT_1000b2b0
#undef _DAT_1000b230
#undef _DAT_1000b2b0

#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b210
#define DAT_1000b210 (*(double *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_1000b218
#define DAT_1000b218 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1000b220
#define DAT_1000b220 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1000b228
#define DAT_1000b228 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_1000b238
#define DAT_1000b238 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000b2c0
#define DAT_1000b2c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf2U)))
#undef _DAT_1000b2c0
#define _DAT_1000b2c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004610(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000b210 < param_1; param_1 = param_1 + DAT_1000b218) {
  }
  for (; param_1 < DAT_1000b220; param_1 = param_1 + DAT_1000b228) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000b2c0);
  return (DAT_1000b238 * dVar1 + DAT_1000b1d8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000b1d8
#undef DAT_1000b210
#undef DAT_1000b218
#undef DAT_1000b220
#undef DAT_1000b228
#undef DAT_1000b238
#undef DAT_1000b2c0
#undef _DAT_1000b2c0

#undef DAT_1000b250
#define DAT_1000b250 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef _DAT_1000b250
#define _DAT_1000b250 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046b0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000b250 ^ (ulong)param_1);
  if ((double)(_DAT_1000b250 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000b250
#undef _DAT_1000b250

#undef DAT_1000b1d0
#define DAT_1000b1d0 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_1000b240
#define DAT_1000b240 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_1000b250
#define DAT_1000b250 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef _DAT_1000b250
#define _DAT_1000b250 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_100046d0(double param_1)

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
  dVar7 = (double)(_DAT_1000b250 ^ (ulong)param_1);
  if ((double)(_DAT_1000b250 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_1000b240;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_1000b1d0;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_1000b1d0;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_1000b1d0
#undef DAT_1000b240
#undef DAT_1000b250
#undef _DAT_1000b250

#undef DAT_1000b1d0
#define DAT_1000b1d0 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_1000b240
#define DAT_1000b240 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047a0
 */

ulong recovered_100047a0(double param_1)

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
  dVar6 = DAT_1000b240;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_1000b1d0;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_1000b1d0;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_1000b1d0
#undef DAT_1000b240

#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004850
 */

double recovered_10004850(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (param_1 == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_1000b1d8;
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

#undef DAT_1000b1d8

#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b250
#define DAT_1000b250 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef _DAT_1000b250
#define _DAT_1000b250 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100048a0(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if ((long)param_1 < 0) {
    dVar4 = 0.0;
    uVar2 = -param_1;
    dVar3 = DAT_1000b1d8;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_1000b250);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_1000b1d8;
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

#undef DAT_1000b1d8
#undef DAT_1000b250
#undef _DAT_1000b250

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004930
 */

float recovered_10004930(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000b1d0
#define DAT_1000b1d0 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b250
#define DAT_1000b250 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef UNK_1000b254
#define UNK_1000b254 (*(uint *)(((uintptr_t)pf_module_state + 0x86U)))
#undef _DAT_1000b250
#define _DAT_1000b250 (*(uint *)(((uintptr_t)pf_module_state + 0x82U)))
#undef uRam000000001000b254
#define uRam000000001000b254 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x86U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004980(float param_1,int *param_2)

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
    dVar2 = pf_bits_double(CONCAT44((uint)(pf_double_bits(dVar2) >> 0x20) ^ uRam000000001000b254,
                             SUB84(dVar2,0) ^ _DAT_1000b250));
  }
  iVar1 = 0;
  if (DAT_1000b1d8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000b1d0;
      iVar1 = iVar1 + 1;
    } while (DAT_1000b1d8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000b1d0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001000b254,_DAT_1000b250));
  }
  return CONCAT44((int)(pf_double_bits(dVar2) >> 0x20),(float)dVar2);
}

#undef DAT_1000b1d0
#undef DAT_1000b1d8
#undef DAT_1000b250
#undef UNK_1000b254
#undef _DAT_1000b250
#undef uRam000000001000b254

#undef DAT_1000b1d0
#define DAT_1000b1d0 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a40
 */

undefined8 recovered_10004a40(float param_1,uint param_2)

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
          dVar3 = dVar3 * DAT_1000b1d0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0 *
                  DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0;
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

#undef DAT_1000b1d0

#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b2e0
#define DAT_1000b2e0 (*(float *)(((uintptr_t)pf_module_state + 0x112U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b30
 */

float recovered_10004b30(float param_1,float param_2)

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
    return DAT_1000b2e0;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000b1d8;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000b1d8 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000b1d8
#undef DAT_1000b2e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bc0
 */

undefined8 recovered_10004bc0(void)

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


#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c00
 */

float recovered_10004c00(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000b1d8 + dVar2) & uVar1);
}

#undef DAT_1000b1d8

#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c60
 */

double recovered_10004c60(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  if (param_1 < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
                    (ulong)(DAT_1000b1d8 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000b1d8

#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cc0
 */

undefined8 recovered_10004cc0(undefined8 param_1)

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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1000b1d8 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1000b1d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d30
 */

float recovered_10004d30(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004230((double)param_1);
  return (float)dVar1;
}


#undef DAT_1000b1d0
#define DAT_1000b1d0 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b1e8
#define DAT_1000b1e8 (*(double *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_1000b1f0
#define DAT_1000b1f0 (*(double *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_1000b1f8
#define DAT_1000b1f8 (*(double *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_1000b200
#define DAT_1000b200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_1000b208
#define DAT_1000b208 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_1000b260
#define DAT_1000b260 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92U)))
#undef DAT_1000b270
#define DAT_1000b270 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef DAT_1000b280
#define DAT_1000b280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2U)))
#undef DAT_1000b290
#define DAT_1000b290 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc2U)))
#undef DAT_1000b2e4
#define DAT_1000b2e4 (*(float *)(((uintptr_t)pf_module_state + 0x116U)))
#undef DAT_1000b2e8
#define DAT_1000b2e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11aU)))
#undef _DAT_1000b200
#define _DAT_1000b200 (*(double *)(((uintptr_t)pf_module_state + 0x32U)))
#undef _DAT_1000b208
#define _DAT_1000b208 (*(double *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef _DAT_1000b260
#define _DAT_1000b260 (*(uint128 *)(((uintptr_t)pf_module_state + 0x92U)))
#undef _DAT_1000b270
#define _DAT_1000b270 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef _DAT_1000b280
#define _DAT_1000b280 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb2U)))
#undef _DAT_1000b290
#define _DAT_1000b290 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc2U)))
#undef _DAT_1000b2e8
#define _DAT_1000b2e8 (*(float *)(((uintptr_t)pf_module_state + 0x11aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004d50(float param_1)

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
    if (_DAT_1000b2e8 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000b1d0;
        iVar1 = iVar1 + 1;
      } while (DAT_1000b1e8 < dVar2);
    }
    for (; dVar2 < DAT_1000b1f0; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000b1f8 + dVar2) / (dVar2 + DAT_1000b1d8);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000b260);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000b270);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000b280);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000b290);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000b200 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000b208);
  }
  return DAT_1000b2e4;
}

#undef DAT_1000b1d0
#undef DAT_1000b1d8
#undef DAT_1000b1e8
#undef DAT_1000b1f0
#undef DAT_1000b1f8
#undef DAT_1000b200
#undef DAT_1000b208
#undef DAT_1000b260
#undef DAT_1000b270
#undef DAT_1000b280
#undef DAT_1000b290
#undef DAT_1000b2e4
#undef DAT_1000b2e8
#undef _DAT_1000b200
#undef _DAT_1000b208
#undef _DAT_1000b260
#undef _DAT_1000b270
#undef _DAT_1000b280
#undef _DAT_1000b290
#undef _DAT_1000b2e8

#undef DAT_1000b2a0
#define DAT_1000b2a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ea0
 */

long recovered_10004ea0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000b2a0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000b2a0

#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b210
#define DAT_1000b210 (*(double *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_1000b218
#define DAT_1000b218 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1000b220
#define DAT_1000b220 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1000b228
#define DAT_1000b228 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_1000b230
#define DAT_1000b230 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_1000b2b0
#define DAT_1000b2b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe2U)))
#undef _DAT_1000b230
#define _DAT_1000b230 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_1000b2b0
#define _DAT_1000b2b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004ed0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_1000b210 < dVar1; dVar1 = dVar1 + DAT_1000b218) {
  }
  for (; dVar1 < DAT_1000b220; dVar1 = dVar1 + DAT_1000b228) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000b2b0);
  return (float)(((dVar2 / _DAT_1000b230 + DAT_1000b1d8 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000b1d8
#undef DAT_1000b210
#undef DAT_1000b218
#undef DAT_1000b220
#undef DAT_1000b228
#undef DAT_1000b230
#undef DAT_1000b2b0
#undef _DAT_1000b230
#undef _DAT_1000b2b0

#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b210
#define DAT_1000b210 (*(double *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_1000b218
#define DAT_1000b218 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1000b220
#define DAT_1000b220 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1000b228
#define DAT_1000b228 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_1000b238
#define DAT_1000b238 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000b2c0
#define DAT_1000b2c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf2U)))
#undef _DAT_1000b2c0
#define _DAT_1000b2c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004f80(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000b210 < dVar1; dVar1 = dVar1 + DAT_1000b218) {
  }
  for (; dVar1 < DAT_1000b220; dVar1 = dVar1 + DAT_1000b228) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000b2c0);
  return (float)((DAT_1000b238 * dVar1 + DAT_1000b1d8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000b1d8
#undef DAT_1000b210
#undef DAT_1000b218
#undef DAT_1000b220
#undef DAT_1000b228
#undef DAT_1000b238
#undef DAT_1000b2c0
#undef _DAT_1000b2c0

#undef DAT_1000b2d0
#define DAT_1000b2d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x102U)))
#undef UNK_1000b2d4
#define UNK_1000b2d4 (*(uint *)(((uintptr_t)pf_module_state + 0x106U)))
#undef _DAT_1000b2d0
#define _DAT_1000b2d0 (*(uint *)(((uintptr_t)pf_module_state + 0x102U)))
#undef uRam000000001000b2d4
#define uRam000000001000b2d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x106U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10005020(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)param_1;
  fVar2 = (float)(_DAT_1000b2d0 ^ (uint)fVar1);
  if ((float)(_DAT_1000b2d0 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000b2d4 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000b2d0
#undef UNK_1000b2d4
#undef _DAT_1000b2d0
#undef uRam000000001000b2d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005040
 */

long recovered_10005040(byte *param_1,undefined8 *param_2,uint param_3)

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
 * Address: 0x10005170
 */

long recovered_10005170(byte *param_1,undefined8 *param_2,uint param_3)

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


#undef DAT_1000b1d0
#define DAT_1000b1d0 (*(double *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_1000b1d8
#define DAT_1000b1d8 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000b248
#define DAT_1000b248 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef DAT_1000b250
#define DAT_1000b250 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef _DAT_1000b250
#define _DAT_1000b250 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100052a0(byte *param_1,undefined8 *param_2)

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
    dVar11 = dVar11 * DAT_1000b248 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1000b1d8;
      do {
        dVar12 = dVar12 * DAT_1000b248 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000b248;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_10005379;
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
LAB_10005379:
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
                dVar11 = dVar11 * DAT_1000b1d0;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0 *
                         DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0 * DAT_1000b1d0;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000b250);
  }
  return dVar11;
}

#undef DAT_1000b1d0
#undef DAT_1000b1d8
#undef DAT_1000b248
#undef DAT_1000b250
#undef _DAT_1000b250

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005500
 */

float recovered_10005500(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *in_RSI;
  byte *in_RDI;
  double dVar1;

  dVar1 = recovered_100052a0(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_1000b248
#define DAT_1000b248 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef DAT_1000b250
#define DAT_1000b250 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef DAT_1000b322
#define DAT_1000b322 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef _DAT_1000b250
#define _DAT_1000b250 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x82U)))
#undef str_1000b32c
#define str_1000b32c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15eU)))
#undef str_1000b33d
#define str_1000b33d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16fU)))
#define abStack_7a (*(byte (*)[122])(pf_stack_frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10005510(byte *param_1,ulong param_2,byte *param_3,uint *param_4)

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
  uVar8 = _DAT_1000b250;
  dVar7 = DAT_1000b248;
  uVar20 = param_2;
  uVar13 = 0;
LAB_10005579:
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
      goto LAB_10005592;
    }
    goto LAB_10005573;
  }
  bVar15 = param_3[1];
  if (bVar15 == 0x25) {
    if (1 < uVar20) {
      *param_1 = 0x25;
      param_1 = param_1 + 1;
      uVar20 = uVar20 - 1;
    }
    param_3 = param_3 + 1;
    goto LAB_10005573;
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
        goto LAB_1000561c;
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
LAB_1000561c:
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
      if (0x28 < uVar2) goto LAB_10005ab4;
      lVar3 = *(long *)(param_4 + 4);
      *param_4 = uVar2 + 8;
LAB_10005798:
      uVar24 = *(ulong *)(lVar3 + uVar13);
      break;
    case '\a':
      if (uVar2 < 0x29) {
        lVar3 = *(long *)(param_4 + 4);
        *param_4 = uVar2 + 8;
        goto LAB_10005798;
      }
LAB_10005ab4:
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
      abStack_7a[uVar19 + 2] = str_1000b33d[uVar24 % 10];
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
LAB_10005592:
      param_1 = param_1 + 1;
      uVar20 = uVar20 - 1;
    }
    goto LAB_10005573;
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
LAB_10005c01:
        puVar11 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10005c01;
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
    pcVar23 = str_1000b33d;
    if (*param_3 == 0x58) {
      pcVar23 = str_1000b32c;
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
    goto LAB_10005579;
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
      goto LAB_10005592;
    }
LAB_10005573:
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
        abStack_7a[uVar14 + 2] = str_1000b33d[uVar24 % 10];
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
    goto LAB_10005579;
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
      abStack_7a[uVar14 + 2] = str_1000b33d[(uint)uVar24 & 0xf];
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
    goto LAB_10005579;
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
        pbVar21 = &DAT_1000b322;
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
LAB_10005f33:
        puVar11 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10005f33;
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
      abStack_7a[uVar19 + 2] = str_1000b33d[uVar13 % 10];
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
    goto LAB_10005579;
  }
  param_3 = param_3 + 1;
  goto LAB_10005579;
}

#undef DAT_1000b248
#undef DAT_1000b250
#undef DAT_1000b322
#undef _DAT_1000b250
#undef str_1000b32c
#undef str_1000b33d
#undef abStack_7a

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
#define uStack0000000000000008 (*(undefined1 *)(pf_stack_frame + 248))
#define local_d8 (*(undefined1 (*)[216])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063f0
 */

void recovered_100063f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  char in_AL;
  byte *in_RDX;
  ulong in_RSI;
  byte *in_RDI;

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
  local_20 = &uStack0000000000000008;
  local_28[0] = 0x18;
  local_28[1] = 0x30;
  recovered_10005510(in_RDI,in_RSI,in_RDX,local_28);
  return;
}

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
#undef uStack0000000000000008
#undef local_d8

#undef DAT_10000000
#define DAT_10000000 (*(uint8_t *)(0x10000000U))
#undef DAT_10000008
#define DAT_10000008 (*(uint8_t *)(0x10000008U))
#undef DAT_10000010
#define DAT_10000010 (*(uint8_t *)(0x10000010U))
#undef DAT_10000018
#define DAT_10000018 (*(uint8_t *)(0x10000018U))
#undef DAT_1000c068
#define DAT_1000c068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe9aU)))
#undef DAT_1000c078
#define DAT_1000c078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xeaaU)))
#undef _DAT_10000000
#define _DAT_10000000 (*(uint64_t * *)(0x10000000U))
#undef _DAT_10000008
#define _DAT_10000008 (*(uint64_t *)(0x10000008U))
#undef _DAT_10000010
#define _DAT_10000010 (*(uint64_t *)(0x10000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006470
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_10006470(long *param_1,ulong param_2,ulong *param_3)

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
        if (DAT_1000c068 == 0) {
          puVar5 = (ulong *)&DAT_1000c068;
        }
        *puVar5 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1000c078 == (long *)0x0) {
          DAT_1000c078 = plVar2;
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
      if (DAT_1000c068 == 0) {
        plVar1 = &DAT_1000c068;
      }
      *plVar1 = 0x10000000;
      *param_3 = 0x10000000;
      if (DAT_1000c078 == (long *)0x0) {
        DAT_1000c078 = (long *)&DAT_10000000;
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
        if (DAT_1000c068 == 0) {
          puVar3 = &DAT_1000c068;
        }
        *puVar3 = plVar1;
        *param_3 = (ulong)plVar1;
        if (DAT_1000c078 == (long *)0x0) {
          DAT_1000c078 = plVar1;
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
#undef DAT_1000c068
#undef DAT_1000c078
#undef _DAT_10000000
#undef _DAT_10000008
#undef _DAT_10000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006630
 */

ulong * recovered_10006630(ulong *param_1,ulong *param_2)

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
 * Address: 0x100066a0
 */

undefined8 recovered_100066a0(ulong *param_1,long param_2)

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
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_002808bc
#define DAT_002808bc (*(uint8_t *)(0x2808bcU))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_00280910
#define DAT_00280910 (*(uint8_t *)(0x280910U))
#undef DAT_00280a18
#define DAT_00280a18 (*(uint8_t *)(0x280a18U))
#undef DAT_1000b470
#define DAT_1000b470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a2U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280828
#define _DAT_00280828 (*(uint *)(0x280828U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
#undef _DAT_002808bc
#define _DAT_002808bc (*(uint *)(0x2808bcU))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(uint *)(0x2808c8U))
#undef _DAT_00280910
#define _DAT_00280910 (*(uint *)(0x280910U))
#undef _DAT_00280a18
#define _DAT_00280a18 (*(uint *)(0x280a18U))
#undef str_1000b350
#define str_1000b350 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_1000b361
#define str_1000b361 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x193U)))
#undef str_1000b368
#define str_1000b368 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19aU)))
#undef str_1000b370
#define str_1000b370 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a2U)))
#undef str_1000b37b
#define str_1000b37b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1adU)))
#undef str_1000b399
#define str_1000b399 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cbU)))
#undef str_1000b3a2
#define str_1000b3a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4U)))
#undef str_1000b3aa
#define str_1000b3aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dcU)))
#undef str_1000b3e9
#define str_1000b3e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21bU)))
#undef str_1000b3f0
#define str_1000b3f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x222U)))
#undef str_1000b44c
#define str_1000b44c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27eU)))
#undef str_1000b473
#define str_1000b473 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a5U)))
#undef str_1000b492
#define str_1000b492 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c4U)))
#undef str_1000b4bd
#define str_1000b4bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2efU)))
#undef str_1000b4ef
#define str_1000b4ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x321U)))
#undef str_1000b51e
#define str_1000b51e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x350U)))
#undef str_1000b53e
#define str_1000b53e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x370U)))
#undef str_1000b547
#define str_1000b547 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x379U)))
#undef str_1000b57e
#define str_1000b57e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b0U)))
#undef str_1000b5c2
#define str_1000b5c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f4U)))
#undef str_1000b5e7
#define str_1000b5e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x419U)))
#undef str_1000b60b
#define str_1000b60b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_1000b627
#define str_1000b627 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x459U)))
#undef str_1000b650
#define str_1000b650 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x482U)))
#define local_138 (*(void * *)(pf_stack_frame + 24))
#define local_128 (*(undefined8 *)(pf_stack_frame + 40))
#define local_a8 (*(char * *)(pf_stack_frame + 168))
#define local_98 (*(undefined8 *)(pf_stack_frame + 184))
#define local_88 (*(ulong *)(pf_stack_frame + 200))
#define local_80 (*(char * *)(pf_stack_frame + 208))
#define local_78 (*(char * *)(pf_stack_frame + 216))
#define local_70 (*(ulong *)(pf_stack_frame + 224))
#define local_68 (*(char * *)(pf_stack_frame + 232))
#define local_60 (*(ulong *)(pf_stack_frame + 240))
#define local_58 (*(byte * *)(pf_stack_frame + 248))
#define local_50 (*(uint *)(pf_stack_frame + 256))
#define local_4c (*(uint *)(pf_stack_frame + 260))
#define local_48 (*(byte *)(pf_stack_frame + 264))
#define local_44 (*(uint *)(pf_stack_frame + 268))
#define local_40 (*(uint *)(pf_stack_frame + 272))
#define local_3c (*(int *)(pf_stack_frame + 276))
#define local_38 (*(char * *)(pf_stack_frame + 280))
#define uStack_130 (*(ulong *)(pf_stack_frame + 32))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006700
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006700(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong *puVar2;
  byte *pbVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  uint device;
  uint device_00;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined7 extraout_var = 0;
  byte bVar12;
  undefined8 *in_R8;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;

  pcVar14 = str_1000b3aa;
  if ((int)param_1 < 2 || param_2 == 0) {
LAB_10006966:
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280828)(str_1000b3e9);
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280828)(pcVar14);
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280828)(str_1000b3f0);
    }
    return 1;
  }
  local_60 = (ulong)param_1;
  uVar15 = 1;
  pcVar13 = (char *)0x0;
  local_58 = (byte *)0x0;
  local_38 = (char *)0x0;
  do {
    puVar2 = *(ulong **)(param_2 + uVar15 * 8);
    if (puVar2 == (ulong *)0x0) {
      pcVar14 = str_1000b350;
      goto LAB_10006966;
    }
    uVar8 = recovered_10003720((long)puVar2);
    if (uVar8 < 6) {
LAB_1000682d:
      pcVar14 = str_1000b37b;
      goto LAB_10006966;
    }
    iVar6 = recovered_100032a0(puVar2,(ulong *)str_1000b361,6);
    if (pcVar13 == (char *)0x0 && iVar6 == 0) {
      pcVar13 = (char *)((long)puVar2 + 6);
    }
    else {
      if (uVar8 == 6) goto LAB_1000682d;
      iVar6 = recovered_100032a0(puVar2,(ulong *)str_1000b368,7);
      if (local_38 == (char *)0x0 && iVar6 == 0) {
        local_38 = (char *)((long)puVar2 + 7);
      }
      else {
        if (((uVar8 < 10) ||
            (iVar6 = recovered_100032a0(puVar2,(ulong *)str_1000b370,10), iVar6 != 0)) ||
           (local_58 != (byte *)0x0)) goto LAB_1000682d;
        local_58 = (byte *)((long)puVar2 + 10);
      }
    }
    pcVar4 = local_38;
    pbVar3 = local_58;
    uVar15 = uVar15 + 1;
  } while (uVar15 < local_60);
  if (pcVar13 == (char *)0x0) {
    pcVar14 = str_1000b3aa;
    goto LAB_10006966;
  }
  pcVar14 = str_1000b3aa;
  if (((local_38 == (char *)0x0 || *pcVar13 == '\0') ||
      (local_58 == (byte *)0x0 || *local_38 == '\0')) ||
     ((iVar6 = recovered_10003750(local_58,(byte *)str_1000b399), iVar6 != 0 &&
      (iVar6 = recovered_10003750(pbVar3,(byte *)str_1000b3a2), iVar6 != 0)))) goto LAB_10006966;
  local_78 = pcVar4;
  local_44 = 0xffffffff;
  local_80 = pcVar13;
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0xbf < _DAT_00280808 && ((code *)(ulong)_DAT_002808bc != (code *)0x0)))))) {
    local_44 = (*(code *)(ulong)_DAT_002808bc)();
  }
  local_40 = local_44;
  recovered_10007310(pcVar13,(int *)&local_44,&local_80);
  recovered_10007310(pcVar4,(int *)&local_40,&local_78);
  device_00 = local_40;
  device = local_44;
  pcVar13 = local_78;
  pcVar14 = local_80;
  if (local_40 == 0x7fffffff || local_44 == 0x7fffffff) {
    pcVar13 = str_1000b44c;
  }
  else {
    iVar6 = recovered_10003750(pbVar3,(byte *)str_1000b3a2);
    if ((((((int)device < 0) && (device = 0xffffffff, _DAT_00280800 == 0x50414d57)) &&
         (_DAT_00280804 != 0)) && ((0xb < _DAT_00280808 && (0xbf < _DAT_00280808)))) &&
       ((code *)(ulong)_DAT_002808bc != (code *)0x0)) {
      device = (*(code *)(ulong)_DAT_002808bc)();
    }
    if ((((int)device_00 < 0) && (device_00 = 0xffffffff, _DAT_00280800 == 0x50414d57)) &&
       ((_DAT_00280804 != 0 &&
        (((0xb < _DAT_00280808 && (0xbf < _DAT_00280808)) &&
         ((code *)(ulong)_DAT_002808bc != (code *)0x0)))))) {
      device_00 = (*(code *)(ulong)_DAT_002808bc)();
    }
    recovered_10002980((byte *)&local_138,0,0x8c);
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       (((0xb < _DAT_00280808 &&
         ((0x113 < _DAT_00280808 && ((code *)(ulong)_DAT_00280910 != (code *)0x0)))) &&
        (iVar7 = (*(code *)(ulong)_DAT_00280910)(device,&local_138), iVar7 != 0)))) {
      local_38 = pcVar13;
      pcVar13 = str_1000b4bd;
      local_60 = CONCAT44(PF_PART4(local_60, 4),(int)uStack_130);
      if (((((int)uStack_130 != 0) &&
           (recovered_10002980((byte *)&local_138,0,0x8c), _DAT_00280800 == 0x50414d57)) &&
          (_DAT_00280804 != 0)) &&
         (((0xb < _DAT_00280808 && (0x113 < _DAT_00280808)) &&
          (((code *)(ulong)_DAT_00280910 != (code *)0x0 &&
           (iVar7 = (*(code *)(ulong)_DAT_00280910)(device_00,&local_138), iVar7 != 0)))))) {
        local_3c = (int)uStack_130;
        if ((int)uStack_130 != 0) {
          pcVar14 = recovered_100075c0(pcVar14,(int)local_60 == 0xd);
          local_38 = recovered_100075c0(local_38,(int)uStack_130 == 0xd);
          local_138 = (void *)0x0;
          uStack_130 = 0;
          local_128 = 0;
          local_a8 = (char *)0x0;
          uStack_a0 = 0;
          local_98 = 0;
          pcVar13 = str_1000b4ef;
          local_68 = pcVar14;
          if ((pcVar14 == (char *)0x0) || (local_38 == (char *)0x0)) goto LAB_10007129;
          if (iVar6 == 0) {
            uVar10 = recovered_100095c0((ulong)device,pcVar14,&local_50);
            if ((int)uVar10 == 0) {
              pcVar13 = str_1000b5e7;
            }
            else {
              pcVar14 = (char *)(ulong)local_50;
              local_70 = 0;
              local_88 = 0;
              pcVar13 = str_1000b60b;
              local_a8 = pcVar14;
              if (((local_48 & 2) == 0) &&
                 (uVar10 = recovered_100097e0(pcVar14,(ulong)local_4c,0xffffffffffffffff,&local_70),
                 (int)uVar10 != 0)) {
                pvVar11 = recovered_10009840(local_70);
                local_138 = pvVar11;
                if (pvVar11 == (void *)0x0) {
                  pcVar13 = str_1000b627;
                  goto LAB_10007129;
                }
                bVar5 = recovered_10009890(pcVar14,(ulong)local_4c,(long)pvVar11,local_70,&local_88)
                ;
                if ((int)CONCAT71(extraout_var,bVar5) == 0) {
                  pcVar13 = str_1000b650;
                  goto LAB_10007129;
                }
                pcVar13 = recovered_10009b90(device_00,local_38,local_3c == 0xd,(long)pvVar11,
                                             local_88);
                goto LAB_10007126;
              }
            }
          }
          else {
            uVar15 = recovered_10003720((long)local_38);
            if (uVar15 < 8) {
LAB_10006dcd:
              lVar9 = recovered_10003720((long)local_38);
              if (lVar9 - 0x2ff9U < 0xffffffffffffcffe) {
                pcVar13 = str_1000b51e;
                goto LAB_10007129;
              }
              recovered_10001c80((undefined8 *)(local_38 + lVar9),(undefined8 *)str_1000b53e,9,
                                 lVar9 - 0x2ff9U,in_R8);
            }
            else {
              bVar1 = local_38[uVar15 - 8];
              bVar12 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar12 = bVar1;
              }
              if (bVar12 != 0x2e) goto LAB_10006dcd;
              bVar1 = local_38[uVar15 - 7];
              bVar12 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar12 = bVar1;
              }
              if (bVar12 != 0x70) goto LAB_10006dcd;
              bVar1 = local_38[uVar15 - 6];
              bVar12 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar12 = bVar1;
              }
              if (bVar12 != 0x69) goto LAB_10006dcd;
              bVar1 = local_38[uVar15 - 5];
              bVar12 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar12 = bVar1;
              }
              if (bVar12 != 99) goto LAB_10006dcd;
              bVar1 = local_38[uVar15 - 4];
              bVar12 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar12 = bVar1;
              }
              if (bVar12 != 0x6f) goto LAB_10006dcd;
              bVar1 = local_38[uVar15 - 3];
              bVar12 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar12 = bVar1;
              }
              if (bVar12 != 0x7a) goto LAB_10006dcd;
              bVar1 = local_38[uVar15 - 2];
              bVar12 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar12 = bVar1;
              }
              if (bVar12 != 0x69) goto LAB_10006dcd;
              bVar1 = local_38[uVar15 - 1];
              bVar12 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar12 = bVar1;
              }
              if (bVar12 != 0x70) goto LAB_10006dcd;
            }
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x21b < _DAT_00280808 && (_DAT_00280a18 != 0)))) {
              iVar6 = (*(code *)(ulong)_DAT_00280a18)(device_00,local_38,&local_50);
            }
            else {
              if (((_DAT_00280800 == 0x50414d57) && ((_DAT_00280804 != 0 && (0xb < _DAT_00280808))))
                 && (0xcb < _DAT_00280808)) {
                if ((code *)(ulong)_DAT_002808c8 == (code *)0x0) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = (*(code *)(ulong)_DAT_002808c8)(device_00,local_38,&local_50);
                }
              }
              else {
                iVar6 = 0;
                if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                    (0xb < _DAT_00280808)) &&
                   ((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)))) {
                  iVar6 = (*(code *)(ulong)_DAT_00280834)(local_38,&local_50);
                }
              }
              local_50 = 0;
            }
            if (iVar6 == 0) {
              pcVar13 = recovered_100079f0(device,local_68,(int)local_60 == 0xd,(long *)&local_138);
              if ((pcVar13 == (char *)0x0) &&
                 (pcVar13 = recovered_10008df0((long)local_138,uStack_130,(long *)&local_a8),
                 pcVar13 == (char *)0x0)) {
                uVar10 = recovered_100078f0((ulong)device_00,local_38,&local_50);
                if ((int)uVar10 == 0) {
                  uVar10 = recovered_10009530((ulong)device_00,local_38,local_a8,(uint)uStack_a0);
                  pcVar13 = (char *)0x0;
                  if ((int)uVar10 == 0) {
                    pcVar13 = str_1000b5c2;
                  }
                }
                else {
                  pcVar13 = str_1000b57e;
                }
              }
              else {
LAB_10007126:
              }
            }
            else {
              pcVar13 = str_1000b547;
            }
          }
LAB_10007129:
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
            (*(code *)(ulong)_DAT_00280850)(local_68);
          }
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 &&
              ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00280850)(local_38);
          }
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
            (*(code *)(ulong)_DAT_00280850)(local_138);
          }
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 &&
              ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00280850)(local_a8);
          }
          if (pcVar13 == (char *)0x0) {
            iVar6 = recovered_10003750(local_58,(byte *)str_1000b3a2);
            pcVar14 = str_1000b492;
            if (iVar6 == 0) {
              pcVar14 = str_1000b473;
            }
            if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) {
              return 0;
            }
            if (_DAT_00280808 < 0x2c) {
              return 0;
            }
            uVar10 = 0;
            if (_DAT_00280828 == 0) {
              return 0;
            }
            goto LAB_10006edf;
          }
        }
      }
    }
    else {
      pcVar13 = str_1000b4bd;
    }
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280828)(str_1000b3e9);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280828)(pcVar13);
  }
  uVar10 = 1;
  if (_DAT_00280800 != 0x50414d57) {
    return 1;
  }
  if (_DAT_00280804 == 0) {
    return 1;
  }
  if (_DAT_00280808 < 0xc) {
    return 1;
  }
  if (_DAT_00280808 < 0x2c) {
    return 1;
  }
  if (_DAT_00280828 == 0) {
    return 1;
  }
  pcVar14 = &DAT_1000b470;
LAB_10006edf:
  (*(code *)(ulong)_DAT_00280828)(pcVar14);
  return uVar10;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280828
#undef DAT_00280834
#undef DAT_00280850
#undef DAT_002808bc
#undef DAT_002808c8
#undef DAT_00280910
#undef DAT_00280a18
#undef DAT_1000b470
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280828
#undef _DAT_00280834
#undef _DAT_00280850
#undef _DAT_002808bc
#undef _DAT_002808c8
#undef _DAT_00280910
#undef _DAT_00280a18
#undef str_1000b350
#undef str_1000b361
#undef str_1000b368
#undef str_1000b370
#undef str_1000b37b
#undef str_1000b399
#undef str_1000b3a2
#undef str_1000b3aa
#undef str_1000b3e9
#undef str_1000b3f0
#undef str_1000b44c
#undef str_1000b473
#undef str_1000b492
#undef str_1000b4bd
#undef str_1000b4ef
#undef str_1000b51e
#undef str_1000b53e
#undef str_1000b547
#undef str_1000b57e
#undef str_1000b5c2
#undef str_1000b5e7
#undef str_1000b60b
#undef str_1000b627
#undef str_1000b650
#undef local_138
#undef local_128
#undef local_a8
#undef local_98
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef uStack_130
#undef uStack_a0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a20
#define _DAT_00280a20 (*(uint *)(0x280a20U))
#define local_138 (*(char (*)[312])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007310(char *param_1,int *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;

  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 != '[') {
    return;
  }
  uVar2 = 0;
  for (lVar6 = 1; (cVar8 = param_1[lVar6], cVar8 != '\0' && (cVar8 != ']')); lVar6 = lVar6 + 1) {
    if (uVar2 + 1 < 0x80) {
      local_138[uVar2] = cVar8;
      uVar2 = uVar2 + 1;
    }
  }
  local_138[uVar2] = '\0';
  uVar2 = (ulong)(cVar8 == ']');
  iVar4 = 0x7fffffff;
  if (uVar2 + lVar6 < 0x82 && cVar8 == ']') {
    pcVar5 = local_138;
    if (local_138[0] == '[') {
      pcVar5 = local_138 + 1;
    }
    uVar10 = 0;
    for (uVar7 = 3; (cVar8 = pcVar5[uVar7 - 3], cVar8 != '\0' && (cVar8 != ']')); uVar7 = uVar7 + 4)
    {
      local_138[uVar7 + 0x7d] = cVar8;
      cVar8 = pcVar5[uVar7 - 2];
      if ((cVar8 == '\0') || (cVar8 == ']')) {
        uVar7 = uVar7 - 2;
        goto LAB_10007447;
      }
      local_138[uVar7 + 0x7e] = cVar8;
      cVar8 = pcVar5[uVar7 - 1];
      if ((cVar8 == '\0') || (cVar8 == ']')) {
        uVar7 = uVar7 - 1;
        goto LAB_10007447;
      }
      local_138[uVar7 + 0x7f] = cVar8;
      cVar8 = pcVar5[uVar7];
      if ((cVar8 == '\0') || (cVar8 == ']')) goto LAB_10007447;
      if (uVar7 == 0x7f) {
        uVar7 = uVar10 | 3;
        goto LAB_10007447;
      }
      uVar10 = uVar10 + 4;
      local_138[uVar7 + 0x80] = cVar8;
    }
    uVar7 = uVar7 - 3;
LAB_10007447:
    local_138[uVar7 + 0x80] = '\0';
    iVar4 = 0x7fffffff;
    if (local_138[0] == '[') {
      if (cVar8 != ']') goto LAB_10007597;
      cVar8 = local_138[uVar7 + 2];
    }
    if ((cVar8 == '\0') && (local_138[0x80] != 0)) {
      lVar3 = 1;
      lVar9 = 0;
      uVar7 = 1;
      do {
        if (lVar3 == 0x80) goto LAB_10007597;
        if (local_138[0x80] == 0x5c) {
          if ((lVar9 == 0) || (uVar7 = uVar7 + 1, 6 < uVar7)) goto LAB_10007597;
          lVar9 = 0;
        }
        else {
          if ((((9 < (byte)(local_138[0x80] - 0x30U)) &&
               (0x19 < (byte)((local_138[0x80] & 0xdfU) + 0xbf))) && (local_138[0x80] != 0x5f)) &&
             (local_138[0x80] != 0x2d)) goto LAB_10007597;
          lVar9 = lVar9 + 1;
        }
        local_138[0x80] = local_138[lVar3 + 0x80];
        lVar3 = lVar3 + 1;
      } while (local_138[0x80] != 0);
      if (((1 < uVar7 && lVar9 != 0) && (_DAT_00280800 == 0x50414d57)) &&
         ((_DAT_00280804 != 0 &&
          (((0xb < _DAT_00280808 && (0x223 < _DAT_00280808)) && (_DAT_00280a20 != 0)))))) {
        iVar1 = (*(code *)(ulong)_DAT_00280a20)(0xfffffffe,local_138 + 0x80,0x80);
        iVar4 = 0x7fffffff;
        if (-1 < iVar1) {
          iVar4 = iVar1;
        }
      }
    }
  }
LAB_10007597:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar4;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1 + lVar6 + uVar2;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a20
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a20
#undef local_138

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_100075c0(char *param_1,byte param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  ulong uVar3;
  undefined1 *pointer;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  byte bVar10;
  long lVar11;

  if (param_1 == (char *)0x0) {
    return (undefined1 *)0x0;
  }
  uVar3 = recovered_10003720((long)param_1);
  if ((((uVar3 < 0x3001) && (*param_1 != '[')) && (_DAT_00280800 == 0x50414d57)) &&
     (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) &&
      ((0x4f < _DAT_00280808 &&
       (((code *)(ulong)_DAT_0028084c != (code *)0x0 &&
        (pointer = (*(code *)(ulong)_DAT_0028084c)(0x3001), pointer != (undefined1 *)0x0)))))))) {
    *pointer = 0x5c;
    if (*param_1 == '\0') {
      pointer[1] = 0;
      return pointer;
    }
    puVar9 = (undefined8 *)0x1;
    lVar8 = 0;
    bVar10 = param_2 ^ 1;
    do {
      lVar11 = lVar8 + -1;
      pcVar4 = param_1 + lVar8 + 1;
      do {
        pcVar7 = pcVar4;
        cVar1 = param_1[lVar11 + 1];
        lVar11 = lVar11 + 1;
        pcVar4 = pcVar7 + 1;
      } while ((cVar1 == '/' & bVar10) != 0 || cVar1 == '\\');
      lVar8 = 0;
      while (((cVar1 != '\0' && (cVar1 != '\\')) && ((cVar1 == '/' & bVar10) == 0))) {
        lVar8 = lVar8 + -1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      }
      if (lVar8 == 0) break;
      uVar3 = -lVar8;
      pcVar4 = (char *)recovered_1000a3e0((long)(param_1 + lVar11),uVar3,param_2);
      if (pcVar4 == (char *)0x0) {
LAB_10007887:
        if (_DAT_00280800 != 0x50414d57) {
          return (undefined1 *)0x0;
        }
        if (_DAT_00280804 == 0) {
          return (undefined1 *)0x0;
        }
        if (_DAT_00280808 < 0xc) {
          return (undefined1 *)0x0;
        }
        if (_DAT_00280808 < 0x54) {
          return (undefined1 *)0x0;
        }
        if ((code *)(ulong)_DAT_00280850 == (code *)0x0) {
          return (undefined1 *)0x0;
        }
        (*(code *)(ulong)_DAT_00280850)(pointer);
        return (undefined1 *)0x0;
      }
      pcVar2 = param_1 + lVar11;
      if (param_2 != 0) {
        uVar3 = recovered_10003720((long)pcVar4);
        pcVar2 = pcVar4;
      }
      uVar6 = 0x3001 - (long)puVar9;
      if (uVar6 <= (uVar3 + 1) - (ulong)(puVar9 < (undefined8 *)0x2)) {
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 &&
            ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
          (*(code *)(ulong)_DAT_00280850)(pcVar4);
        }
        goto LAB_10007887;
      }
      if ((undefined8 *)0x1 < puVar9) {
        pointer[(long)puVar9] = 0x5c;
        puVar9 = (undefined8 *)((long)puVar9 + 1);
      }
      recovered_10001c80((undefined8 *)(pointer + (long)puVar9),(undefined8 *)pcVar2,uVar3,uVar6,
                         puVar9);
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00280850)(pcVar4);
      }
      lVar8 = lVar11 - lVar8;
      puVar9 = (undefined8 *)((long)puVar9 + uVar3);
    } while (pcVar7[-1] != '\0');
    pointer[(long)puVar9] = 0;
    if (puVar9 < (undefined8 *)0x2 || bVar10 != 0) {
      return pointer;
    }
    uVar5 = recovered_1000a6d0((long)(pointer + 1),(long)puVar9 - 1);
    if ((char)uVar5 != '\0') {
      return pointer;
    }
    recovered_1000a390(pointer);
  }
  return (undefined1 *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_00280a18
#define DAT_00280a18 (*(uint8_t *)(0x280a18U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(uint *)(0x2808c8U))
#undef _DAT_00280a18
#define _DAT_00280a18 (*(uint *)(0x280a18U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100078f0(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 extraout_var = 0;
  undefined4 extraout_var_00 = 0;
  undefined8 uVar2;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x21b < _DAT_00280808 && (_DAT_00280a18 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10007933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(ulong)_DAT_00280a18)((int)param_1,param_2,param_3);
    return CONCAT44(extraout_var,iVar1);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && (0xcb < _DAT_00280808)))) {
    if ((code *)(ulong)_DAT_002808c8 == (code *)0x0) {
      uVar2 = 0;
    }
    else {
      iVar1 = (*(code *)(ulong)_DAT_002808c8)((int)param_1,param_2,param_3);
      uVar2 = CONCAT44(extraout_var_00,iVar1);
    }
  }
  else {
    uVar2 = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)))) {
      uVar2 = (*(code *)(ulong)_DAT_00280834)(param_2,param_3);
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_002808c8
#undef DAT_00280a18
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_002808c8
#undef _DAT_00280a18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280854
#define DAT_00280854 (*(uint8_t *)(0x280854U))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_00280910
#define DAT_00280910 (*(uint8_t *)(0x280910U))
#undef DAT_002809d4
#define DAT_002809d4 (*(uint8_t *)(0x2809d4U))
#undef DAT_00280a18
#define DAT_00280a18 (*(uint8_t *)(0x280a18U))
#undef DAT_1000b681
#define DAT_1000b681 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b3U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(uint *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
#undef _DAT_00280854
#define _DAT_00280854 (*(uint *)(0x280854U))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(uint *)(0x2808c8U))
#undef _DAT_00280910
#define _DAT_00280910 (*(uint *)(0x280910U))
#undef _DAT_002809d4
#define _DAT_002809d4 (*(uint *)(0x2809d4U))
#undef _DAT_00280a18
#define _DAT_00280a18 (*(uint *)(0x280a18U))
#undef str_1000b686
#define str_1000b686 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b8U)))
#undef str_1000b699
#define str_1000b699 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cbU)))
#undef str_1000b6bd
#define str_1000b6bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4efU)))
#undef str_1000b6df
#define str_1000b6df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x511U)))
#undef str_1000b6fd
#define str_1000b6fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52fU)))
#undef str_1000b731
#define str_1000b731 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x563U)))
#undef str_1000b74e
#define str_1000b74e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x580U)))
#undef str_1000b76d
#define str_1000b76d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59fU)))
#undef str_1000b799
#define str_1000b799 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cbU)))
#undef str_1000b7b8
#define str_1000b7b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5eaU)))
#undef str_1000b7e3
#define str_1000b7e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x615U)))
#undef str_1000b80f
#define str_1000b80f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x641U)))
#undef str_1000b83b
#define str_1000b83b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66dU)))
#undef str_1000b85b
#define str_1000b85b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68dU)))
#undef str_1000b890
#define str_1000b890 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c2U)))
#define local_14c (*(byte (*)[332])(pf_stack_frame + 20))
#define local_144 (*(int *)(pf_stack_frame + 28))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 160))
#define local_b8 (*(ulong *)(pf_stack_frame + 168))
#define local_b0 (*(undefined8 * *)(pf_stack_frame + 176))
#define local_a8 (*(undefined8 * *)(pf_stack_frame + 184))
#define local_9c (*(uint *)(pf_stack_frame + 196))
#define local_98 (*(char (*)[152])(pf_stack_frame + 200))
#define local_93 (*(undefined1 *)(pf_stack_frame + 205))
#define local_92 (*(undefined1 *)(pf_stack_frame + 206))
#define local_91 (*(undefined1 *)(pf_stack_frame + 207))
#define local_90 (*(uint *)(pf_stack_frame + 208))
#define local_8c (*(uint *)(pf_stack_frame + 212))
#define local_88 (*(undefined8 * *)(pf_stack_frame + 216))
#define local_80 (*(undefined8 * *)(pf_stack_frame + 224))
#define local_78 (*(uint *)(pf_stack_frame + 232))
#define local_74 (*(uint *)(pf_stack_frame + 236))
#define local_70 (*(byte * *)(pf_stack_frame + 240))
#define local_68 (*(void * *)(pf_stack_frame + 248))
#define local_60 (*(void * *)(pf_stack_frame + 256))
#define local_54 (*(uint *)(pf_stack_frame + 268))
#define local_50 (*(uint *)(pf_stack_frame + 272))
#define local_4c (*(uint *)(pf_stack_frame + 276))
#define local_48 (*(ulong *)(pf_stack_frame + 280))
#define local_40 (*(undefined8 * *)(pf_stack_frame + 288))
#define local_38 (*(long * *)(pf_stack_frame + 296))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_100079f0(undefined4 param_1,char *param_2,byte param_3,long *param_4)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  undefined1 *pointer;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *pointer_00;
  code *pcVar9;
  undefined7 uVar13;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar14;
  char *pcVar15;
  long lVar16;
  long *in_R8;
  char *pcVar17;
  byte *pbVar18;
  ulong uVar19;
  char cVar20;
  char *pcVar21;
  undefined8 *puVar22;
  ulong uVar23;
  bool bVar24;

  pcVar21 = param_2;
  pcVar17 = param_2;
  do {
    while( true ) {
      pcVar15 = pcVar17 + 1;
      cVar20 = *pcVar17;
      pcVar17 = pcVar15;
      if (cVar20 != '\\') break;
      pcVar21 = pcVar15;
    }
  } while (cVar20 != '\0');
  pcVar17 = &DAT_1000b681;
  if (*pcVar21 != '\0') {
    pcVar17 = pcVar21;
  }
  local_38 = param_4;
  uVar5 = recovered_10003720((long)pcVar17);
  pvVar6 = (void *)recovered_1000a3e0((long)pcVar17,uVar5,param_3);
  pointer = recovered_100075c0(param_2,param_3);
  if (pvVar6 == (void *)0x0 || pointer == (undefined1 *)0x0) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280850)(pvVar6);
    }
    if (_DAT_00280800 != 0x50414d57) {
      return str_1000b686;
    }
    if (_DAT_00280804 == 0) {
      return str_1000b686;
    }
    if (_DAT_00280808 < 0xc) {
      return str_1000b686;
    }
    if (_DAT_00280808 < 0x54) {
      return str_1000b686;
    }
    if ((code *)(ulong)_DAT_00280850 == (code *)0x0) {
      return str_1000b686;
    }
    (*(code *)(ulong)_DAT_00280850)(pointer);
    return str_1000b686;
  }
  if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
     ((_DAT_00280808 < 0xc ||
      (((_DAT_00280808 < 0x50 || ((code *)(ulong)_DAT_0028084c == (code *)0x0)) ||
       (puVar7 = (*(code *)(ulong)_DAT_0028084c)(0x20), puVar7 == (undefined8 *)0x0)))))) {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280850)(pointer);
    }
    if (_DAT_00280800 != 0x50414d57) {
      return str_1000b699;
    }
    if (_DAT_00280804 == 0) {
      return str_1000b699;
    }
    if (_DAT_00280808 < 0xc) {
      return str_1000b699;
    }
    if (_DAT_00280808 < 0x54) {
      return str_1000b699;
    }
    if ((code *)(ulong)_DAT_00280850 == (code *)0x0) {
      return str_1000b699;
    }
    (*(code *)(ulong)_DAT_00280850)(pvVar6);
    return str_1000b699;
  }
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 1) = param_1;
  puVar7[2] = pointer;
  puVar7[3] = pvVar6;
  local_c0 = 0x31415a50;
  uVar5 = local_38[1];
  pcVar9 = (code *)0xfffffff8;
  pcVar21 = str_1000b6bd;
  if ((uVar5 & 0xfffffffffffffff8) == 0xfffffff8) goto LAB_10008ce9;
  uVar19 = uVar5 + 8;
  uVar23 = local_38[2];
  if (uVar23 < uVar19) {
    uVar5 = 0x100;
    if (uVar23 != 0) {
      uVar5 = uVar23;
    }
    for (; uVar5 < uVar19; uVar5 = uVar5 * 2) {
      if (0x7fffffff < uVar5) {
        uVar5 = uVar19;
        break;
      }
    }
    if (_DAT_00280800 != 0x50414d57) goto LAB_10008ce9;
    if (_DAT_00280804 == 0) goto LAB_10008ce9;
    if (_DAT_00280808 < 0xc) goto LAB_10008ce9;
    if (_DAT_00280808 < 0x58) goto LAB_10008ce9;
    if ((code *)(ulong)_DAT_00280854 == (code *)0x0) goto LAB_10008ce9;
    pvVar6 = (*(code *)(ulong)_DAT_00280854)((void *)*local_38,uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_10008ce9;
    *local_38 = (long)pvVar6;
    local_38[2] = uVar5;
    uVar5 = local_38[1];
  }
  else {
    pvVar6 = (void *)*local_38;
  }
  plVar10 = local_38;
  recovered_10001c80((undefined8 *)(uVar5 + (long)pvVar6),&local_c0,8,pcVar9,in_R8);
  plVar10[1] = uVar19;
  uVar5 = 0;
  puVar22 = puVar7;
  local_b0 = puVar7;
  local_40 = puVar7;
  do {
    recovered_10002980((byte *)&local_54,0,0xc);
    pcVar21 = (char *)puVar22[2];
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x21b < _DAT_00280808 && (_DAT_00280a18 != 0)))) {
      iVar3 = (*(code *)(ulong)_DAT_00280a18)(*(int *)(puVar22 + 1),pcVar21,&local_54);
    }
    else {
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && (0xcb < _DAT_00280808)))) {
        if ((code *)(ulong)_DAT_002808c8 == (code *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(code *)(ulong)_DAT_002808c8)(*(int *)(puVar22 + 1),pcVar21,&local_54);
        }
      }
      else {
        pcVar9 = (code *)(ulong)_DAT_00280800;
        iVar3 = 0;
        if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
            (pcVar9 = (code *)(ulong)_DAT_00280808, 0xb < _DAT_00280808)) &&
           ((pcVar9 = (code *)(ulong)_DAT_00280808, 0x37 < _DAT_00280808 &&
            (pcVar9 = (code *)(ulong)_DAT_00280834, pcVar9 != (code *)0x0)))) {
          iVar3 = (*pcVar9)(pcVar21,&local_54);
        }
      }
      local_54 = 0;
    }
    uVar14 = local_4c;
    if (iVar3 == 0) {
      pcVar21 = str_1000b6df;
      goto LAB_10008ce9;
    }
    pvVar6 = (void *)recovered_10003720(puVar22[3]);
    local_88 = puVar22;
    uVar8 = recovered_1000a6d0(puVar22[3],(ulong)pvVar6);
    puVar7 = local_40;
    if ((char)uVar8 == '\0') {
      pcVar21 = str_1000b6fd;
      goto LAB_10008ce9;
    }
    uVar13 = (undefined7)((ulong)pcVar9 >> 8);
    local_98[0] = '\x02' - ((uVar14 & 2) == 0);
    local_92 = (undefined1)((ulong)pvVar6 >> 0x10);
    local_90 = 0;
    local_98[1] = '\0';
    local_98[2] = '\0';
    local_98[3] = 0;
    local_98[4] = (char)pvVar6;
    local_93 = (undefined1)((ulong)pvVar6 >> 8);
    local_91 = (undefined1)((ulong)pvVar6 >> 0x18);
    local_60 = pvVar6;
    if ((uVar14 & 2) == 0) {
      local_90 = local_50;
      uVar8 = recovered_100095c0((ulong)*(uint *)(local_88 + 1),(char *)local_88[2],&local_54);
      puVar7 = local_40;
      if ((int)uVar8 == 0) {
        pcVar21 = str_1000b731;
        goto LAB_10008ce9;
      }
      pbVar18 = (byte *)(ulong)local_54;
      if (((local_4c & 2) != 0) ||
         (pcVar9 = (code *)CONCAT71(uVar13,local_50 == 0), local_54 == 0 && local_50 != 0)) {
        pcVar21 = str_1000b74e;
        if (_DAT_00280800 == 0x50414d57) {
          if (_DAT_00280804 != 0) {
            if (0xb < _DAT_00280808) {
              if (_DAT_00280808 < 0x54) {
              }
              else if ((code *)(ulong)_DAT_00280850 == (code *)0x0) {
              }
              else {
                (*(code *)(ulong)_DAT_00280850)(pbVar18);
                puVar7 = local_40;
              }
            }
          }
        }
        goto LAB_10008ce9;
      }
      local_90 = local_50;
      lVar2 = local_38[1];
      in_R8 = local_38;
      if ((ulong)lVar2 - 0xfffffff4ULL < 0xc) {
        cVar20 = '\0';
      }
      else {
        uVar19 = lVar2 + 0xc;
        uVar23 = local_38[2];
        plVar10 = local_38;
        local_70 = pbVar18;
        if (uVar23 < uVar19) {
          if (uVar23 == 0) {
            uVar23 = 0x100;
          }
          for (; uVar23 < uVar19; uVar23 = uVar23 * 2) {
            if (0x7fffffff < uVar23) {
              uVar23 = uVar19;
              break;
            }
          }
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             (0x57 < _DAT_00280808)) {
            if ((code *)(ulong)_DAT_00280854 == (code *)0x0) goto LAB_100088ea;
            local_48 = uVar5;
            pvVar6 = (*(code *)(ulong)_DAT_00280854)((void *)*local_38,uVar23);
            if (pvVar6 != (void *)0x0) {
              *local_38 = (long)pvVar6;
              local_38[2] = uVar23;
              lVar16 = local_38[1];
              goto LAB_10007f9f;
            }
LAB_10008967:
            puVar7 = local_40;
            in_R8 = local_38;
            uVar5 = local_48;
          }
          else {
LAB_100088e7:
LAB_100088ea:
          }
LAB_100088ee:
          cVar20 = '\0';
          pbVar18 = local_70;
        }
        else {
          pvVar6 = (void *)*local_38;
          lVar16 = lVar2;
          local_48 = uVar5;
LAB_10007f9f:
          in_R8 = local_38;
          puVar7 = local_40;
          recovered_10001c80((undefined8 *)(lVar16 + (long)pvVar6),(undefined8 *)local_98,0xc,pcVar9
                             ,plVar10);
          in_R8[1] = uVar19;
          uVar5 = local_48;
          if ((void *)(0xfffffff3U - lVar2) < local_60) {
            goto LAB_100088ea;
          }
          puVar22 = (undefined8 *)local_88[3];
          uVar19 = uVar19 + (long)local_60;
          uVar23 = in_R8[2];
          if (uVar23 < uVar19) {
            if (uVar23 == 0) {
              uVar23 = 0x100;
            }
            if (uVar23 < uVar19) {
              do {
                if (0x7fffffff < uVar23) {
                  uVar23 = uVar19;
                  break;
                }
                uVar23 = uVar23 * 2;
              } while (uVar23 < uVar19);
            }
            if (_DAT_00280800 != 0x50414d57) goto LAB_100088ee;
            if ((_DAT_00280804 == 0) || (_DAT_00280808 < 0xc)) goto LAB_100088e7;
            if (((_DAT_00280808 < 0x58) || ((code *)(ulong)_DAT_00280854 == (code *)0x0)) ||
               (pvVar6 = (*(code *)(ulong)_DAT_00280854)((void *)*in_R8,uVar23),
               pvVar6 == (void *)0x0)) goto LAB_10008967;
            *local_38 = (long)pvVar6;
            local_38[2] = uVar23;
            puVar7 = local_40;
            in_R8 = local_38;
          }
          uVar5 = local_48;
          if (local_60 != (void *)0x0) {
            recovered_10001c80((undefined8 *)(*in_R8 + in_R8[1]),puVar22,(ulong)local_60,pcVar9,
                               in_R8);
            in_R8 = local_38;
          }
          pbVar18 = local_70;
          in_R8[1] = uVar19;
          uVar8 = recovered_1000a8b0(in_R8,(undefined8 *)local_70,(ulong)local_50);
          cVar20 = (char)uVar8;
          in_R8 = local_38;
        }
      }
      iVar3 = (int)uVar5;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         (0x53 < _DAT_00280808)) {
        if ((code *)(ulong)_DAT_00280850 != (code *)0x0) {
          (*(code *)(ulong)_DAT_00280850)(pbVar18);
          in_R8 = local_38;
        }
      }
      if (cVar20 == '\0') {
        pcVar21 = str_1000b76d;
        goto LAB_10008ce9;
      }
    }
    else {
      lVar2 = local_38[1];
      if ((ulong)lVar2 - 0xfffffff4ULL < 0xc) {
        pcVar21 = str_1000b76d;
        goto LAB_10008ce9;
      }
      uVar19 = lVar2 + 0xc;
      uVar23 = local_38[2];
      plVar10 = local_38;
      if (uVar23 < uVar19) {
        if (uVar23 == 0) {
          uVar23 = 0x100;
        }
        for (; uVar23 < uVar19; uVar23 = uVar23 * 2) {
          if (0x7fffffff < uVar23) {
            uVar23 = uVar19;
            break;
          }
        }
        if (_DAT_00280800 != 0x50414d57) {
          pcVar21 = str_1000b76d;
          local_48 = uVar5;
          goto LAB_10008ce9;
        }
        if (_DAT_00280804 == 0) {
          pcVar21 = str_1000b76d;
          local_48 = uVar5;
          goto LAB_10008ce9;
        }
        if (_DAT_00280808 < 0xc) {
          pcVar21 = str_1000b76d;
          local_48 = uVar5;
          goto LAB_10008ce9;
        }
        if (_DAT_00280808 < 0x58) {
          pcVar21 = str_1000b76d;
          local_48 = uVar5;
          goto LAB_10008ce9;
        }
        if ((code *)(ulong)_DAT_00280854 == (code *)0x0) {
          pcVar21 = str_1000b76d;
          local_48 = uVar5;
          goto LAB_10008ce9;
        }
        local_48 = uVar5;
        pvVar6 = (*(code *)(ulong)_DAT_00280854)((void *)*local_38,uVar23);
        if (pvVar6 == (void *)0x0) {
          pcVar21 = str_1000b76d;
          goto LAB_10008ce9;
        }
        *local_38 = (long)pvVar6;
        local_38[2] = uVar23;
        lVar16 = local_38[1];
      }
      else {
        pvVar6 = (void *)*local_38;
        lVar16 = lVar2;
        local_48 = uVar5;
      }
      plVar11 = local_38;
      puVar22 = local_88;
      recovered_10001c80((undefined8 *)(lVar16 + (long)pvVar6),(undefined8 *)local_98,0xc,plVar10,
                         in_R8);
      plVar11[1] = uVar19;
      if ((void *)(0xfffffff3U - lVar2) < local_60) {
        pcVar21 = str_1000b76d;
        goto LAB_10008ce9;
      }
      puVar22 = (undefined8 *)puVar22[3];
      uVar19 = uVar19 + (long)local_60;
      uVar5 = plVar11[2];
      iVar3 = (int)local_48;
      if (uVar5 < uVar19) {
        if (uVar5 == 0) {
          uVar5 = 0x100;
        }
        for (; uVar5 < uVar19; uVar5 = uVar5 * 2) {
          if (0x7fffffff < uVar5) {
            uVar5 = uVar19;
            break;
          }
        }
        if (_DAT_00280800 != 0x50414d57) {
          pcVar21 = str_1000b76d;
          goto LAB_10008ce9;
        }
        if (_DAT_00280804 == 0) {
          pcVar21 = str_1000b76d;
          goto LAB_10008ce9;
        }
        if (_DAT_00280808 < 0xc) {
          pcVar21 = str_1000b76d;
          goto LAB_10008ce9;
        }
        if (_DAT_00280808 < 0x58) {
          pcVar21 = str_1000b76d;
          goto LAB_10008ce9;
        }
        if ((code *)(ulong)_DAT_00280854 == (code *)0x0) {
          pcVar21 = str_1000b76d;
          goto LAB_10008ce9;
        }
        pvVar6 = (*(code *)(ulong)_DAT_00280854)((void *)*plVar11,uVar5);
        if (pvVar6 == (void *)0x0) {
          pcVar21 = str_1000b76d;
          goto LAB_10008ce9;
        }
        *local_38 = (long)pvVar6;
        local_38[2] = uVar5;
        plVar11 = local_38;
      }
      if (local_60 != (void *)0x0) {
        recovered_10001c80((undefined8 *)(*plVar11 + plVar11[1]),puVar22,(ulong)local_60,plVar11,
                           in_R8);
        plVar11 = local_38;
      }
      plVar11[1] = uVar19;
      local_78 = 0;
      local_74 = 0;
      local_8c = 0;
      local_9c = 0;
      if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
         (((_DAT_00280808 < 0xc ||
           ((_DAT_00280808 < 0x1d8 || ((code *)(ulong)_DAT_002809d4 == (code *)0x0)))) ||
          (iVar4 = (*(code *)(ulong)_DAT_002809d4)
                             (*(undefined4 *)(local_88 + 1),local_88[2],0,0,0,0,&local_78,&local_74)
          , iVar4 == 0)))) {
        pcVar21 = str_1000b799;
        goto LAB_10008ce9;
      }
      if ((((((ulong)local_78 == 0) || (_DAT_00280800 != 0x50414d57)) || (_DAT_00280804 == 0)) ||
          ((_DAT_00280808 < 0xc || (_DAT_00280808 < 0x50)))) ||
         ((code *)(ulong)_DAT_0028084c == (code *)0x0)) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = (*(code *)(ulong)_DAT_0028084c)((ulong)local_78 * 0x28);
      }
      if ((((ulong)local_74 == 0) || (_DAT_00280800 != 0x50414d57)) ||
         ((_DAT_00280804 == 0 ||
          (((_DAT_00280808 < 0xc || (_DAT_00280808 < 0x50)) ||
           ((code *)(ulong)_DAT_0028084c == (code *)0x0)))))) {
        pointer_00 = (void *)0x0;
      }
      else {
        pointer_00 = (*(code *)(ulong)_DAT_0028084c)((ulong)local_74);
      }
      if (((local_78 == 0) || (pvVar6 != (void *)0x0)) &&
         ((local_74 == 0 || (pointer_00 != (void *)0x0)))) {
        local_60 = pvVar6;
        uVar8 = recovered_1000a9c0();
        pvVar6 = local_60;
        if ((int)uVar8 == 0) {
          pcVar9 = (code *)0x0;
          pcVar21 = str_1000b7e3;
        }
        else if ((local_8c == local_78) && (local_9c <= local_74)) {
          pcVar9 = (code *)CONCAT71((uint7)(uint3)(local_9c >> 8),1);
          if (local_8c == 0) {
            pcVar21 = (char *)0x0;
          }
          else {
            uVar5 = 0;
            plVar10 = local_38;
            puVar7 = local_b0;
            local_68 = pointer_00;
            do {
              local_b0 = puVar7;
              if ((*(long *)((long)local_60 + uVar5 * 0x28) == 0) ||
                 (plVar11 = (long *)((long)local_60 + uVar5 * 0x28), plVar11[1] == 0)) {
                pcVar21 = str_1000b80f;
                iVar3 = (int)local_48;
LAB_10008a5d:
                pcVar9 = (code *)0x0;
                goto LAB_10008a61;
              }
              if (1 < (int)plVar11[3] - 1U) {
LAB_10008993:
                pcVar21 = str_1000b80f;
LAB_10008a4d:
                iVar3 = (int)local_48;
                goto LAB_10008a5d;
              }
              iVar3 = *(int *)((long)plVar11 + 0x1c);
              recovered_10002980(local_14c,0,0x8c);
              if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc))
                 || (((_DAT_00280808 < 0x114 || ((code *)(ulong)_DAT_00280910 == (code *)0x0)) ||
                     ((iVar3 = (*(code *)(ulong)_DAT_00280910)(iVar3,local_14c), iVar3 == 0 ||
                      (local_144 == 0)))))) goto LAB_10008993;
              bVar24 = local_144 == 0xd;
              lVar2 = *plVar11;
              uVar19 = recovered_10003720(lVar2);
              puVar7 = (undefined8 *)recovered_1000a3e0(lVar2,uVar19,bVar24);
              local_70 = recovered_100075c0((char *)plVar11[1],bVar24);
              local_a8 = puVar7;
              if (puVar7 == (undefined8 *)0x0) {
LAB_100086cd:
                puVar7 = (undefined8 *)0x0;
              }
              else {
                puVar22 = (undefined8 *)local_88[3];
                uVar19 = recovered_10003720((long)puVar7);
                uVar23 = recovered_10003720((long)puVar22);
                if (uVar23 != 0) {
                  do {
                    if (*(char *)((long)puVar22 + (uVar23 - 1)) != '\\') goto LAB_1000860e;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
                uVar23 = 0;
LAB_1000860e:
                if (0x2fff < uVar23) goto LAB_100086cd;
                puVar7 = (undefined8 *)0x0;
                if (uVar19 <= 0x2fff - uVar23) {
                  if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
                     ((_DAT_00280808 < 0xc ||
                      (((_DAT_00280808 < 0x50 || ((code *)(ulong)_DAT_0028084c == (code *)0x0)) ||
                       (puVar7 = (*(code *)(ulong)_DAT_0028084c)(uVar23 + uVar19 + 2),
                       puVar7 == (undefined8 *)0x0)))))) goto LAB_100086cd;
                  local_80 = (undefined8 *)(uVar19 + uVar23);
                  puVar12 = puVar7;
                  local_b8 = uVar19;
                  recovered_10001c80(puVar7,puVar22,uVar23,puVar7,plVar10);
                  *(undefined1 *)((long)puVar7 + uVar23) = 0x5c;
                  recovered_10001c80((undefined8 *)((long)puVar7 + uVar23 + 1),local_a8,local_b8,
                                     puVar12,plVar10);
                  *(undefined1 *)((long)puVar7 + (long)local_80 + 1) = 0;
                }
              }
              local_80 = puVar7;
              if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                 ((0xb < _DAT_00280808 &&
                  ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
                (*(code *)(ulong)_DAT_00280850)(local_a8);
              }
              pbVar18 = local_70;
              if ((local_70 == (byte *)0x0) || (local_80 == (undefined8 *)0x0)) {
                if ((_DAT_00280800 == 0x50414d57) &&
                   ((((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x53 < _DAT_00280808)) &&
                    ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                  (*(code *)(ulong)_DAT_00280850)(local_70);
                }
                if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                   ((0xb < _DAT_00280808 &&
                    ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
                  (*(code *)(ulong)_DAT_00280850)(local_80);
                }
                pcVar21 = str_1000b83b;
                goto LAB_10008a4d;
              }
              if ((int)plVar11[3] == 2) {
                puVar7 = local_40;
                do {
                  if ((*(int *)(puVar7 + 1) == *(int *)((long)plVar11 + 0x1c)) &&
                     (iVar3 = recovered_10003750((byte *)puVar7[2],pbVar18), iVar3 == 0)) {
                    recovered_1000a390(pbVar18);
                    recovered_1000a390(local_80);
                    pcVar21 = str_1000b85b;
                    goto LAB_10008a4d;
                  }
                  puVar7 = (undefined8 *)*puVar7;
                } while (puVar7 != (undefined8 *)0x0);
              }
              uVar1 = *(undefined4 *)((long)plVar11 + 0x1c);
              if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc))
                 || (((_DAT_00280808 < 0x50 || ((code *)(ulong)_DAT_0028084c == (code *)0x0)) ||
                     (puVar7 = (*(code *)(ulong)_DAT_0028084c)(0x20), puVar7 == (undefined8 *)0x0)))
                 ) {
                if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                   ((0xb < _DAT_00280808 &&
                    ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
                  (*(code *)(ulong)_DAT_00280850)(local_70);
                }
                if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                    (0xb < _DAT_00280808)) &&
                   ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                  (*(code *)(ulong)_DAT_00280850)(local_80);
                }
                pcVar21 = str_1000b699;
                goto LAB_10008a4d;
              }
              *puVar7 = 0;
              *(undefined4 *)(puVar7 + 1) = uVar1;
              puVar7[2] = pbVar18;
              puVar7[3] = local_80;
              *local_b0 = puVar7;
              uVar14 = (int)uVar5 + 1;
              uVar5 = (ulong)uVar14;
            } while (uVar14 < local_8c);
            pcVar21 = (char *)0x0;
            iVar3 = (int)local_48;
            pcVar9 = (code *)CONCAT71((int7)((ulong)local_b0 >> 8),1);
            local_b0 = puVar7;
LAB_10008a61:
            pvVar6 = local_60;
            puVar7 = local_40;
            pointer_00 = local_68;
          }
        }
        else {
          pcVar9 = (code *)0x0;
          pcVar21 = str_1000b7e3;
        }
      }
      else {
        pcVar9 = (code *)0x0;
        pcVar21 = str_1000b7b8;
      }
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 &&
          ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
        local_60 = (void *)CONCAT44(PF_PART4(local_60, 4),(int)pcVar9);
        (*(code *)(ulong)_DAT_00280850)(pvVar6);
        pcVar9 = (code *)((ulong)local_60 & 0xffffffff);
      }
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
        pcVar9 = (code *)((ulong)pcVar9 & 0xffffffff);
        (*(code *)(ulong)_DAT_00280850)(pointer_00);
      }
      in_R8 = local_38;
      if ((char)pcVar9 == '\0') goto LAB_10008ce9;
    }
    if (iVar3 == -1) {
      pcVar21 = str_1000b890;
      goto LAB_10008ce9;
    }
    uVar5 = (ulong)(iVar3 + 1U);
    puVar22 = (undefined8 *)*local_88;
  } while (puVar22 != (undefined8 *)0x0);
  *(uint *)(*in_R8 + 4) = iVar3 + 1U;
  pcVar21 = (char *)0x0;
LAB_10008ce9:
  do {
    puVar22 = (undefined8 *)*puVar7;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280850)((void *)puVar7[2]);
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280850)((void *)puVar7[3]);
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280850)(puVar7);
    }
    puVar7 = puVar22;
  } while (puVar22 != (undefined8 *)0x0);
  return pcVar21;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_00280854
#undef DAT_002808c8
#undef DAT_00280910
#undef DAT_002809d4
#undef DAT_00280a18
#undef DAT_1000b681
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_00280854
#undef _DAT_002808c8
#undef _DAT_00280910
#undef _DAT_002809d4
#undef _DAT_00280a18
#undef str_1000b686
#undef str_1000b699
#undef str_1000b6bd
#undef str_1000b6df
#undef str_1000b6fd
#undef str_1000b731
#undef str_1000b74e
#undef str_1000b76d
#undef str_1000b799
#undef str_1000b7b8
#undef str_1000b7e3
#undef str_1000b80f
#undef str_1000b83b
#undef str_1000b85b
#undef str_1000b890
#undef local_14c
#undef local_144
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_9c
#undef local_98
#undef local_93
#undef local_92
#undef local_91
#undef local_90
#undef local_8c
#undef local_88
#undef local_80
#undef local_78
#undef local_74
#undef local_70
#undef local_68
#undef local_60
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_38

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280854
#define DAT_00280854 (*(uint8_t *)(0x280854U))
#undef DAT_1000b2f0
#define DAT_1000b2f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x122U)))
#undef DAT_1000b300
#define DAT_1000b300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef DAT_1000b310
#define DAT_1000b310 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef UNK_1000b2f4
#define UNK_1000b2f4 (*(uint *)(((uintptr_t)pf_module_state + 0x126U)))
#undef UNK_1000b2f8
#define UNK_1000b2f8 (*(uint *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef UNK_1000b2fc
#define UNK_1000b2fc (*(uint *)(((uintptr_t)pf_module_state + 0x12eU)))
#undef UNK_1000b304
#define UNK_1000b304 (*(uint *)(((uintptr_t)pf_module_state + 0x136U)))
#undef UNK_1000b308
#define UNK_1000b308 (*(uint *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef UNK_1000b30c
#define UNK_1000b30c (*(uint *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef UNK_1000b318
#define UNK_1000b318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14aU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
#undef _DAT_00280854
#define _DAT_00280854 (*(uint *)(0x280854U))
#undef _DAT_1000b2f0
#define _DAT_1000b2f0 (*(uint *)(((uintptr_t)pf_module_state + 0x122U)))
#undef _DAT_1000b300
#define _DAT_1000b300 (*(uint *)(((uintptr_t)pf_module_state + 0x132U)))
#undef _DAT_1000b310
#define _DAT_1000b310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef str_1000b6bd
#define str_1000b6bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4efU)))
#undef str_1000b76d
#define str_1000b76d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59fU)))
#undef str_1000b8a9
#define str_1000b8a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dbU)))
#undef uRam000000001000b2f4
#define uRam000000001000b2f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x126U)))
#undef uRam000000001000b2f8
#define uRam000000001000b2f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef uRam000000001000b2fc
#define uRam000000001000b2fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12eU)))
#undef uRam000000001000b304
#define uRam000000001000b304 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x136U)))
#undef uRam000000001000b308
#define uRam000000001000b308 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef uRam000000001000b30c
#define uRam000000001000b30c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef uRam000000001000b318
#define uRam000000001000b318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14aU)))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 32))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_78 (*(long *)(pf_stack_frame + 40))
#define local_70 (*(undefined8 * *)(pf_stack_frame + 48))
#define local_68 (*(ulong *)(pf_stack_frame + 56))
#define local_60 (*(long * *)(pf_stack_frame + 64))
#define local_54 (*(uint *)(pf_stack_frame + 76))
#define local_50 (*(ulong *)(pf_stack_frame + 80))
#define local_48 (*(long * *)(pf_stack_frame + 88))
#define local_40 (*(long * *)(pf_stack_frame + 96))
#define local_33 (*(ushort *)(pf_stack_frame + 109))
#define local_31 (*(byte *)(pf_stack_frame + 111))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008df0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10008df0(long param_1,ulong param_2,long *param_3)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  void *pointer;
  long lVar10;
  char *pcVar11;
  void *pvVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 *in_R8;
  ulong uVar21;
  byte bVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long *plVar26;
  uint uVar27;
  uint uVar28;

  if (_DAT_00280800 != 0x50414d57) {
    return str_1000b8a9;
  }
  if (_DAT_00280804 == 0) {
    return str_1000b8a9;
  }
  if (_DAT_00280808 < 0xc) {
    return str_1000b8a9;
  }
  if (_DAT_00280808 < 0x50) {
    return str_1000b8a9;
  }
  if ((code *)(ulong)_DAT_0028084c == (code *)0x0) {
    return str_1000b8a9;
  }
  local_78 = param_1;
  local_70 = (undefined8 *)param_2;
  local_40 = param_3;
  pointer = (*(code *)(ulong)_DAT_0028084c)(0x10000);
  if (pointer == (void *)0x0) {
    return str_1000b8a9;
  }
  lVar10 = 0xe;
  do {
    puVar1 = (undefined4 *)((long)pointer + lVar10 * 8 + -0x70);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1 = (undefined4 *)((long)pointer + lVar10 * 8 + -0x60);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1 = (undefined4 *)((long)pointer + lVar10 * 8 + -0x50);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1 = (undefined4 *)((long)pointer + lVar10 * 8 + -0x40);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1 = (undefined4 *)((long)pointer + lVar10 * 8 + -0x30);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1 = (undefined4 *)((long)pointer + lVar10 * 8 + -0x20);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1 = (undefined4 *)((long)pointer + lVar10 * 8 + -0x10);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1 = (undefined4 *)((long)pointer + lVar10 * 8);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x200e);
  local_88 = _DAT_1000b310;
  uStack_80 = uRam000000001000b318;
  uVar24 = local_40[1];
  pcVar11 = str_1000b6bd;
  if (uVar24 >> 4 == 0xfffffff) goto LAB_100094cb;
  plVar18 = (long *)(uVar24 + 0x10);
  plVar23 = (long *)local_40[2];
  if (plVar23 < plVar18) {
    plVar26 = (long *)0x100;
    if (plVar23 != (long *)0x0) {
      plVar26 = plVar23;
    }
    for (; plVar26 < plVar18; plVar26 = (long *)((long)(uintptr_t)plVar26 * 2)) {
      if ((long *)0x7fffffff < plVar26) {
        plVar26 = plVar18;
        break;
      }
    }
    if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
       ((_DAT_00280808 < 0x58 || ((code *)(ulong)_DAT_00280854 == (code *)0x0)))) goto LAB_100094cb;
    pvVar12 = (*(code *)(ulong)_DAT_00280854)((void *)*local_40,(ulong)plVar26);
    pcVar11 = str_1000b6bd;
    if (pvVar12 == (void *)0x0) goto LAB_100094cb;
    *local_40 = (long)pvVar12;
    local_40[2] = (long)plVar26;
    uVar24 = local_40[1];
  }
  else {
    pvVar12 = (void *)*local_40;
  }
  recovered_10001c80((undefined8 *)(uVar24 + (long)pvVar12),&local_88,0x10,pvVar12,in_R8);
  local_40[1] = (long)plVar18;
  if (local_70 == (undefined8 *)0x0) {
    uVar27 = 0;
LAB_10008f7e:
    *(int *)(*local_40 + 4) = (int)local_70;
    *(int *)(*local_40 + 8) = (int)local_40[1] + -0x10;
    *(uint *)(*local_40 + 0xc) = uVar27;
    pcVar11 = (char *)0x0;
  }
  else {
    local_31 = 0;
    local_60 = plVar18;
    if (plVar18 != (long *)0xffffffff) {
      uVar27 = 0xffffffff;
      puVar25 = (undefined8 *)0x0;
      do {
        local_31 = 0;
        plVar18 = (long *)((long)local_60 + 1);
        plVar23 = (long *)local_40[2];
        if (plVar23 < plVar18) {
          if (plVar23 == (long *)0x0) {
            plVar23 = (long *)0x100;
          }
          for (; plVar23 < plVar18; plVar23 = (long *)((long)(uintptr_t)plVar23 * 2)) {
            if ((long *)0x7fffffff < plVar23) {
              plVar23 = plVar18;
              break;
            }
          }
          if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
             ((_DAT_00280808 < 0xc ||
              (((_DAT_00280808 < 0x58 || ((code *)(ulong)_DAT_00280854 == (code *)0x0)) ||
               (pvVar12 = (*(code *)(ulong)_DAT_00280854)((void *)*local_40,(ulong)plVar23),
               pvVar12 == (void *)0x0)))))) break;
          *local_40 = (long)pvVar12;
          local_40[2] = (long)plVar23;
          plVar23 = local_40;
          plVar26 = (long *)local_40[1];
        }
        else {
          pvVar12 = (void *)*local_40;
          plVar23 = local_60;
          plVar26 = local_60;
        }
        plVar9 = local_60;
        recovered_10001c80((undefined8 *)((long)plVar26 + (long)pvVar12),(undefined8 *)&local_31,1,
                           plVar23,in_R8);
        local_40[1] = (long)plVar18;
        if (puVar25 < local_70) {
          uVar14 = 0;
          do {
            uVar24 = (long)local_70 - (long)puVar25;
            if (uVar24 < 3) {
              bVar22 = *(byte *)(local_78 + (long)puVar25);
LAB_100091ad:
              local_31 = local_31 | (byte)(1 << ((byte)uVar14 & 0x1f));
              local_33 = CONCAT11(PF_PART1(local_33, 1),bVar22);
              local_50 = 1;
              uVar15 = 1;
            }
            else {
              bVar22 = *(byte *)(local_78 + (long)puVar25);
              bVar2 = *(byte *)(local_78 + 1 + (long)puVar25);
              in_R8 = *(undefined8 **)
                       ((long)pointer +
                       (ulong)((uint)*(byte *)(local_78 + 2 + (long)puVar25) +
                               (uint)bVar2 * 0x10 + (uint)bVar2 + (uint)bVar22 * 0xfb & 0xfff) * 8);
              if (((long)in_R8 < 0) || (puVar25 <= in_R8)) goto LAB_100091ad;
              local_68 = CONCAT44(PF_PART4(local_68, 4),(uint)bVar22);
              uVar15 = 0x12;
              if (uVar24 < 0x12) {
                uVar15 = uVar24;
              }
              uVar13 = 0;
              uVar17 = 0;
              local_50 = 0;
              while( true ) {
                sVar16 = (short)uVar17;
                local_48 = plVar18;
                if ((0x1000 < (ulong)((long)puVar25 - (long)in_R8)) || (0x3f < uVar13)) break;
                uVar21 = 0;
                do {
                  if (*(char *)((long)in_R8 + uVar21 + local_78) !=
                      *(char *)((long)puVar25 + uVar21 + local_78)) goto LAB_10009146;
                  uVar21 = uVar21 + 1;
                } while (uVar15 != uVar21);
                uVar21 = uVar15;
LAB_10009146:
                if (local_50 < uVar21) {
                  uVar17 = (long)puVar25 - (long)in_R8;
                  local_50 = uVar21;
                }
                sVar16 = (short)uVar17;
                if (local_50 == 0x12) {
                  local_50 = 0x12;
                  goto LAB_100093fd;
                }
                puVar19 = *(undefined8 **)
                           ((long)pointer + (ulong)((uint)in_R8 & 0xfff) * 8 + 0x8000);
                if ((((long)in_R8 <= (long)puVar19) || ((long)puVar19 < 0)) ||
                   (uVar13 = uVar13 + 1, in_R8 = puVar19, puVar25 <= puVar19)) break;
              }
              if (local_50 < 3) goto LAB_100091ad;
LAB_100093fd:
              local_33 = (short)local_50 - 3U | sVar16 * 0x10 - 0x10U;
              uVar15 = 2;
            }
            local_54 = uVar14;
            if (0xffffffffU - (long)plVar18 < uVar15) goto LAB_10008f6f;
            plVar23 = (long *)((long)plVar18 + uVar15);
            plVar26 = (long *)local_40[2];
            local_48 = plVar23;
            if (plVar26 < plVar23) {
              if (plVar26 == (long *)0x0) {
                plVar26 = (long *)0x100;
              }
              for (; plVar26 < plVar23; plVar26 = (long *)((long)(uintptr_t)plVar26 * 2)) {
                if ((long *)0x7fffffff < plVar26) {
                  plVar26 = plVar23;
                  break;
                }
              }
              if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
                  ((_DAT_00280808 < 0xc ||
                   ((_DAT_00280808 < 0x58 || ((code *)(ulong)_DAT_00280854 == (code *)0x0)))))) ||
                 (local_68 = uVar15,
                 pvVar12 = (*(code *)(ulong)_DAT_00280854)((void *)*local_40,(ulong)plVar26),
                 pvVar12 == (void *)0x0)) goto LAB_10008f6f;
              *local_40 = (long)pvVar12;
              local_40[2] = (long)plVar26;
              plVar18 = (long *)local_40[1];
              plVar23 = local_40;
              uVar15 = local_68;
            }
            else {
              pvVar12 = (void *)*local_40;
            }
            recovered_10001c80((undefined8 *)((long)plVar18 + (long)pvVar12),(undefined8 *)&local_33
                               ,uVar15,plVar23,in_R8);
            local_40[1] = (long)local_48;
            uVar8 = uRam000000001000b30c;
            uVar7 = uRam000000001000b308;
            uVar6 = uRam000000001000b304;
            uVar5 = _DAT_1000b300;
            uVar4 = uRam000000001000b2fc;
            uVar3 = uRam000000001000b2f8;
            uVar13 = uRam000000001000b2f4;
            uVar14 = _DAT_1000b2f0;
            lVar10 = local_50 + (local_50 == 0);
            puVar19 = puVar25;
            do {
              bVar22 = *(byte *)(local_78 + (long)puVar19);
              if (2 < uVar24) {
                bVar2 = *(byte *)(local_78 + 1 + (long)puVar19);
                uVar15 = (ulong)((uint)*(byte *)(local_78 + 2 + (long)puVar19) +
                                 (uint)bVar2 * 0x10 + (uint)bVar2 + (uint)bVar22 * 0xfb & 0xfff);
                *(undefined8 *)((long)pointer + (ulong)((uint)puVar19 & 0xfff) * 8 + 0x8000) =
                     *(undefined8 *)((long)pointer + uVar15 * 8);
                *(undefined8 **)((long)pointer + uVar15 * 8) = puVar19;
              }
              uVar27 = uVar27 ^ bVar22;
              uVar20 = -(uVar27 & 1) & 0xedb88320 ^ uVar27 >> 1;
              uVar28 = (int)(uVar27 << 0x1e) >> 0x1f & 0xedb88320U ^ uVar20 >> 1;
              uVar20 = (int)(uVar20 << 0x1a) >> 0x1f & 0x76dc4190;
              in_R8 = (undefined8 *)(ulong)uVar20;
              uVar27 = -(uint)((uVar27 & uVar4) == uVar4) & uVar8 ^
                       -(uint)((uVar27 & uVar13) == uVar13) & uVar6 ^
                       -(uint)((uVar27 & uVar3) == uVar3) & uVar7 ^
                       -(uint)((uVar27 & uVar14) == uVar14) & uVar5 ^
                       (int)(uVar28 << 0x1a) >> 0x1f & 0xedb88320U ^ uVar28 >> 6 ^ uVar20;
              puVar19 = (undefined8 *)((long)puVar19 + 1);
              uVar24 = uVar24 - 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            puVar25 = (undefined8 *)((long)puVar25 + local_50);
          } while ((local_54 < 7) && (uVar14 = local_54 + 1, plVar18 = local_48, puVar25 < local_70)
                  );
          *(byte *)(*local_40 + (long)local_60) = local_31;
          if (local_70 <= puVar25) {
            uVar27 = ~uVar27;
            goto LAB_10008f7e;
          }
        }
        else {
          *(byte *)(*local_40 + (long)plVar9) = local_31;
        }
        local_60 = (long *)local_40[1];
        local_31 = 0;
      } while (local_60 != (long *)0xffffffff);
    }
LAB_10008f6f:
    pcVar11 = str_1000b76d;
  }
LAB_100094cb:
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280850)(pointer);
  }
  return pcVar11;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_00280854
#undef DAT_1000b2f0
#undef DAT_1000b300
#undef DAT_1000b310
#undef UNK_1000b2f4
#undef UNK_1000b2f8
#undef UNK_1000b2fc
#undef UNK_1000b304
#undef UNK_1000b308
#undef UNK_1000b30c
#undef UNK_1000b318
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_00280854
#undef _DAT_1000b2f0
#undef _DAT_1000b300
#undef _DAT_1000b310
#undef str_1000b6bd
#undef str_1000b76d
#undef str_1000b8a9
#undef uRam000000001000b2f4
#undef uRam000000001000b2f8
#undef uRam000000001000b2fc
#undef uRam000000001000b304
#undef uRam000000001000b308
#undef uRam000000001000b30c
#undef uRam000000001000b318
#undef uStack_80
#undef local_88
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_54
#undef local_50
#undef local_48
#undef local_40
#undef local_33
#undef local_31

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_002808d0
#define DAT_002808d0 (*(uint8_t *)(0x2808d0U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
#undef _DAT_002808d0
#define _DAT_002808d0 (*(uint *)(0x2808d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009530(undefined8 param_1,char *param_2,void *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 extraout_var = 0;
  undefined8 uVar2;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (0xd3 < _DAT_00280808)) {
    if ((code *)(ulong)_DAT_002808d0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10009573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)(ulong)_DAT_002808d0)((int)param_1,param_2,param_3,param_4);
      return CONCAT44(extraout_var,iVar1);
    }
  }
  else if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
          ((0xb < _DAT_00280808 &&
           ((0x3b < _DAT_00280808 && ((code *)(ulong)_DAT_00280838 != (code *)0x0)))))) {
                    /* WARNING: Could not recover jumptable at 0x100095ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_00280838)(param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef DAT_002808d0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838
#undef _DAT_002808d0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_00280a1c
#define DAT_00280a1c (*(uint8_t *)(0x280a1cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(uint *)(0x2808c8U))
#undef _DAT_00280a1c
#define _DAT_00280a1c (*(uint *)(0x280a1cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100095c0(undefined8 param_1,char *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 extraout_var = 0;
  void *pointer;
  ulong uVar3;

  if (param_3 != (uint *)0x0) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x21f < _DAT_00280808 && (_DAT_00280a1c != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10009617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*(code *)(ulong)_DAT_00280a1c)((int)param_1,param_2,param_3);
      return CONCAT44(extraout_var,iVar2);
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && (0xcb < _DAT_00280808)))) {
      if ((code *)(ulong)_DAT_002808c8 == (code *)0x0) {
        return 0;
      }
      iVar2 = (*(code *)(ulong)_DAT_002808c8)((int)param_1,param_2,param_3);
    }
    else {
      if (_DAT_00280800 != 0x50414d57) {
        return 0;
      }
      if (_DAT_00280804 == 0) {
        return 0;
      }
      if (_DAT_00280808 < 0xc) {
        return 0;
      }
      if (_DAT_00280808 < 0x38) {
        return 0;
      }
      if ((code *)(ulong)_DAT_00280834 == (code *)0x0) {
        return 0;
      }
      iVar2 = (*(code *)(ulong)_DAT_00280834)(param_2,param_3);
    }
    if (iVar2 != 0) {
      uVar1 = *param_3;
      *param_3 = 0;
      if ((ulong)param_3[1] == 0) {
        return 1;
      }
      if ((((((ulong)uVar1 != 0) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
          ((0xb < _DAT_00280808 && (0x4f < _DAT_00280808)))) &&
         (((code *)(ulong)_DAT_0028084c != (code *)0x0 &&
          (pointer = (*(code *)(ulong)_DAT_0028084c)((ulong)param_3[1]), pointer != (void *)0x0))))
      {
        if ((ulong)param_3[1] != 0) {
          if (((ulong)pointer >> 0x20 != 0) || (0xffffffffU - (long)pointer < (ulong)param_3[1] - 1)
             ) {
            if (_DAT_00280800 != 0x50414d57) {
              return 0;
            }
            if (_DAT_00280804 == 0) {
              return 0;
            }
            if (_DAT_00280808 < 0xc) {
              return 0;
            }
            if (_DAT_00280808 < 0x54) {
              return 0;
            }
            if ((code *)(ulong)_DAT_00280850 == (code *)0x0) {
              return 0;
            }
            (*(code *)(ulong)_DAT_00280850)(pointer);
            return 0;
          }
          uVar3 = 0;
          do {
            *(undefined1 *)((long)pointer + uVar3) = *(undefined1 *)(uVar1 + uVar3);
            uVar3 = uVar3 + 1;
          } while (uVar3 < param_3[1]);
        }
        *param_3 = (uint)pointer;
        return 1;
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_002808c8
#undef DAT_00280a1c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_002808c8
#undef _DAT_00280a1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097e0
 */

undefined8 recovered_100097e0(char *param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  uVar1 = 0;
  if ((((((param_4 != (ulong *)0x0) && (3 < param_2 && param_1 != (char *)0x0)) && (*param_1 == 'P')
        ) && ((param_1[1] == 'F' && (param_1[2] == 'Z')))) &&
      ((0xf < param_2 &&
       ((param_1[3] == '1' && (uVar2 = (ulong)*(uint *)(param_1 + 4), uVar2 != 0)))))) &&
     ((uVar2 <= param_3 && (param_2 - 0x10 == (ulong)*(uint *)(param_1 + 8))))) {
    *param_4 = uVar2;
    uVar1 = 1;
  }
  return uVar1;
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
 * Address: 0x10009840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10009840(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10009881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (*(code *)(ulong)_DAT_0028084c)(size);
    return pvVar1;
  }
  return (void *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c

#undef DAT_1000b2f0
#define DAT_1000b2f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x122U)))
#undef DAT_1000b300
#define DAT_1000b300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef UNK_1000b2f4
#define UNK_1000b2f4 (*(uint *)(((uintptr_t)pf_module_state + 0x126U)))
#undef UNK_1000b2f8
#define UNK_1000b2f8 (*(uint *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef UNK_1000b2fc
#define UNK_1000b2fc (*(uint *)(((uintptr_t)pf_module_state + 0x12eU)))
#undef _DAT_1000b2f0
#define _DAT_1000b2f0 (*(uint *)(((uintptr_t)pf_module_state + 0x122U)))
#undef _DAT_1000b300
#define _DAT_1000b300 (*(uint128 *)(((uintptr_t)pf_module_state + 0x132U)))
#undef uRam000000001000b2f4
#define uRam000000001000b2f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x126U)))
#undef uRam000000001000b2f8
#define uRam000000001000b2f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef uRam000000001000b2fc
#define uRam000000001000b2fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10009890(char *param_1,ulong param_2,long param_3,ulong param_4,ulong *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint128 auVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  bool bVar17;
  uint128 auVar18;
  uint128 auVar19;
  uint128 auVar20;
  uint128 auVar21;

  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  auVar7 = _DAT_1000b300;
  uVar6 = uRam000000001000b2fc;
  uVar5 = uRam000000001000b2f8;
  uVar4 = uRam000000001000b2f4;
  uVar3 = _DAT_1000b2f0;
  bVar17 = false;
  if ((((((3 < param_2 && param_1 != (char *)0x0) && (*param_1 == 'P')) && (param_1[1] == 'F')) &&
       ((param_1[2] == 'Z' && (0xf < param_2)))) &&
      ((param_1[3] == '1' &&
       ((uVar11 = (ulong)*(uint *)(param_1 + 4), uVar11 != 0 && (uVar11 <= param_4)))))) &&
     (bVar17 = false, param_2 - 0x10 == (ulong)*(uint *)(param_1 + 8))) {
    uVar13 = 0xffffffff;
    uVar10 = 0x10;
    uVar12 = 0;
    do {
      if (param_2 <= uVar10) goto LAB_10009b71;
      bVar1 = param_1[uVar10];
      uVar10 = uVar10 + 1;
      uVar9 = 0;
      do {
        if (uVar11 == uVar12) {
          uVar12 = uVar11;
          if (bVar1 >> ((byte)uVar9 & 0x1f) == 0) goto LAB_10009b4a;
          goto LAB_10009b71;
        }
        if ((bVar1 >> (uVar9 & 0x1f) & 1) == 0) {
          bVar17 = false;
          if (param_2 - uVar10 < 2) goto LAB_10009b81;
          uVar8 = (uint)(ushort)(CONCAT11(param_1[uVar10 + 1],param_1[uVar10]) >> 4);
          if ((uVar12 < uVar8 + 1) ||
             (uVar15 = (ulong)((byte)param_1[uVar10] & 0xf) + 3, uVar11 - uVar12 < uVar15))
          goto LAB_10009b81;
          uVar10 = uVar10 + 2;
          do {
            bVar2 = *(byte *)(((param_3 + -1) - (ulong)uVar8) + uVar12);
            *(byte *)(param_3 + uVar12) = bVar2;
            uVar12 = uVar12 + 1;
            uVar13 = uVar13 ^ bVar2;
            uVar16 = -(uVar13 & 1) & 0xedb88320 ^ uVar13 >> 1;
            uVar14 = (int)(uVar13 << 0x1e) >> 0x1f & 0xedb88320U ^ uVar16 >> 1;
            PF_PART4(auVar19, 0) = -(uint)((uVar13 & uVar3) == uVar3);
            PF_PART4(auVar19, 4) = -(uint)((uVar13 & uVar4) == uVar4);
            PF_PART4(auVar19, 8) = -(uint)((uVar13 & uVar5) == uVar5);
            PF_PART4(auVar19, 12) = -(uint)((uVar13 & uVar6) == uVar6);
            auVar19 = auVar19 & auVar7;
            PF_PART8(auVar21, 0) = PF_PART8(auVar19, 8);
            PF_PART4(auVar21, 8) = PF_PART4(auVar19, 8);
            PF_PART4(auVar21, 12) = PF_PART4(auVar19, 12);
            uVar13 = SUB164(auVar21 ^ auVar19,4) ^ SUB164(auVar21 ^ auVar19,0) ^
                     (int)(uVar14 << 0x1a) >> 0x1f & 0xedb88320U ^ uVar14 >> 6 ^
                     (int)(uVar16 << 0x1a) >> 0x1f & 0x76dc4190U;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        else {
          if (param_2 <= uVar10) goto LAB_10009b71;
          bVar2 = param_1[uVar10];
          uVar10 = uVar10 + 1;
          *(byte *)(param_3 + uVar12) = bVar2;
          uVar12 = uVar12 + 1;
          uVar13 = uVar13 ^ bVar2;
          uVar8 = -(uVar13 & 1) & 0xedb88320 ^ uVar13 >> 1;
          uVar14 = (int)(uVar13 << 0x1e) >> 0x1f & 0xedb88320U ^ uVar8 >> 1;
          PF_PART4(auVar18, 0) = -(uint)((uVar13 & uVar3) == uVar3);
          PF_PART4(auVar18, 4) = -(uint)((uVar13 & uVar4) == uVar4);
          PF_PART4(auVar18, 8) = -(uint)((uVar13 & uVar5) == uVar5);
          PF_PART4(auVar18, 12) = -(uint)((uVar13 & uVar6) == uVar6);
          auVar18 = auVar18 & auVar7;
          PF_PART8(auVar20, 0) = PF_PART8(auVar18, 8);
          PF_PART4(auVar20, 8) = PF_PART4(auVar18, 8);
          PF_PART4(auVar20, 12) = PF_PART4(auVar18, 12);
          uVar13 = (int)(uVar14 << 0x1a) >> 0x1f & 0xedb88320U ^ uVar14 >> 6 ^
                   (int)(uVar8 << 0x1a) >> 0x1f & 0x76dc4190U ^
                   SUB164(auVar20 ^ auVar18,4) ^ SUB164(auVar20 ^ auVar18,0);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 8);
    } while (uVar12 < uVar11);
LAB_10009b4a:
    if (uVar10 == param_2) {
      bVar17 = (uVar13 ^ *(uint *)(param_1 + 0xc)) == 0xffffffff;
      if ((param_5 != (ulong *)0x0) && ((uVar13 ^ *(uint *)(param_1 + 0xc)) == 0xffffffff)) {
        *param_5 = uVar12;
        bVar17 = true;
      }
    }
    else {
LAB_10009b71:
      bVar17 = false;
    }
  }
LAB_10009b81:
  return bVar17;
}

#undef DAT_1000b2f0
#undef DAT_1000b300
#undef UNK_1000b2f4
#undef UNK_1000b2f8
#undef UNK_1000b2fc
#undef _DAT_1000b2f0
#undef _DAT_1000b300
#undef uRam000000001000b2f4
#undef uRam000000001000b2f8
#undef uRam000000001000b2fc

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
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_0028088c
#define DAT_0028088c (*(uint8_t *)(0x28088cU))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_002808d0
#define DAT_002808d0 (*(uint8_t *)(0x2808d0U))
#undef DAT_002808dc
#define DAT_002808dc (*(uint8_t *)(0x2808dcU))
#undef DAT_00280a18
#define DAT_00280a18 (*(uint8_t *)(0x280a18U))
#undef DAT_1000b8d3
#define DAT_1000b8d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x705U)))
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
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
#undef _DAT_0028088c
#define _DAT_0028088c (*(uint *)(0x28088cU))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(uint *)(0x2808c8U))
#undef _DAT_002808d0
#define _DAT_002808d0 (*(uint *)(0x2808d0U))
#undef _DAT_002808dc
#define _DAT_002808dc (*(uint *)(0x2808dcU))
#undef _DAT_00280a18
#define _DAT_00280a18 (*(uint *)(0x280a18U))
#undef str_1000b890
#define str_1000b890 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c2U)))
#undef str_1000b8d8
#define str_1000b8d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70aU)))
#undef str_1000b908
#define str_1000b908 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73aU)))
#undef str_1000b924
#define str_1000b924 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x756U)))
#undef str_1000b94e
#define str_1000b94e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x780U)))
#undef str_1000b97a
#define str_1000b97a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7acU)))
#undef str_1000b993
#define str_1000b993 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c5U)))
#undef str_1000b9b2
#define str_1000b9b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e4U)))
#undef str_1000b9ca
#define str_1000b9ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fcU)))
#undef str_1000ba00
#define str_1000ba00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x832U)))
#undef str_1000ba25
#define str_1000ba25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x857U)))
#undef str_1000ba72
#define str_1000ba72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a4U)))
#undef str_1000baaa
#define str_1000baaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dcU)))
#undef str_1000bacc
#define str_1000bacc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8feU)))
#undef str_1000bb01
#define str_1000bb01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x933U)))
#undef str_1000bb3e
#define str_1000bb3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x970U)))
#define local_84 (*(undefined4 (*)[33])(pf_stack_frame + 28))
#define local_7c (*(byte *)(pf_stack_frame + 36))
#define local_78 (*(long *)(pf_stack_frame + 40))
#define local_70 (*(ulong *)(pf_stack_frame + 48))
#define local_68 (*(ulong *)(pf_stack_frame + 56))
#define local_60 (*(byte * *)(pf_stack_frame + 64))
#define local_54 (*(uint *)(pf_stack_frame + 76))
#define local_50 (*(byte * *)(pf_stack_frame + 80))
#define local_48 (*(ulong *)(pf_stack_frame + 88))
#define local_3c (*(uint *)(pf_stack_frame + 100))
#define local_38 (*(byte * *)(pf_stack_frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10009b90(uint param_1,char *param_2,byte param_3,long param_4,ulong param_5)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long extraout_RAX;
  long extraout_RAX_00;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;

  pcVar11 = str_1000b8d8;
  if (7 < param_5) {
    local_3c = param_1;
    iVar3 = recovered_100032a0((ulong *)param_4,(ulong *)&DAT_1000b8d3,4);
    if (iVar3 == 0) {
      local_48 = (ulong)*(uint *)(param_4 + 4);
      pcVar11 = str_1000b908;
      if ((((local_48 != 0) && (local_48 <= (param_5 - 8) / 0xd)) &&
          (pcVar11 = str_1000b924, _DAT_00280800 == 0x50414d57)) &&
         (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) &&
          ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))))) {
        local_50 = (byte *)(local_48 * 0x28);
        local_38 = (*(code *)(ulong)_DAT_0028084c)((ulong)local_50);
        if (local_38 != (byte *)0x0) {
          recovered_10002980(local_38,0,(ulong)local_50);
          uVar10 = 2;
          if ((int)local_48 != 1) {
            uVar10 = 2;
            do {
              uVar7 = uVar10 * 2;
              if (local_48 <= uVar10) {
                uVar8 = uVar10;
                uVar10 = uVar7;
                break;
              }
              uVar6 = uVar10 * 4;
              if (local_48 <= uVar7) {
LAB_10009d01:
                uVar8 = uVar7;
                uVar10 = uVar6;
                break;
              }
              uVar7 = uVar10 * 8;
              if (local_48 <= uVar6) {
                uVar8 = uVar6;
                uVar10 = uVar7;
                break;
              }
              uVar6 = uVar10 * 0x10;
              if (local_48 <= uVar7) goto LAB_10009d01;
              uVar7 = uVar10 * 0x20;
              if (local_48 <= uVar6) {
                uVar8 = uVar6;
                uVar10 = uVar7;
                break;
              }
              uVar6 = uVar10 * 0x40;
              if (local_48 <= uVar7) {
                uVar8 = uVar7;
                uVar10 = uVar6;
                break;
              }
              if ((long)uVar6 < 0) goto LAB_10009d2a;
              uVar10 = uVar10 << 7;
              uVar8 = uVar6;
            } while (uVar6 < local_48);
            if (uVar8 >> 0x3c != 0) {
LAB_10009d2a:
              recovered_1000a390(local_38);
              return str_1000b890;
            }
          }
          pbVar4 = recovered_10009840(uVar10 * 8);
          if (pbVar4 == (byte *)0x0) {
            recovered_1000a390(local_38);
            pcVar11 = str_1000b94e;
          }
          else {
            local_50 = pbVar4;
            recovered_10002980(pbVar4,0,uVar10 * 8);
            pcVar11 = recovered_1000aa10(local_3c,param_2,'\0');
            pbVar4 = local_38;
            if (pcVar11 == (char *)0x0) {
              uVar8 = 8;
              local_54 = (uint)(param_3 ^ 1);
              uVar7 = 0;
              do {
                pcVar11 = str_1000b97a;
                if ((param_5 < uVar8) || (param_5 - uVar8 < 0xc)) goto LAB_1000a31d;
                iVar3 = *(int *)(param_4 + uVar8);
                *(int *)(local_38 + uVar7 * 0x28 + 0x18) = iVar3;
                uVar1 = *(uint *)(param_4 + 4 + uVar8);
                uVar6 = (ulong)uVar1;
                *(uint *)(local_38 + uVar7 * 0x28 + 0x10) = uVar1;
                uVar1 = *(uint *)(param_4 + 8 + uVar8);
                *(uint *)(local_38 + uVar7 * 0x28 + 0x14) = uVar1;
                if ((1 < iVar3 - 1U) || (uVar1 != 0 && iVar3 == 2)) {
LAB_1000a008:
                  pcVar11 = str_1000b993;
                  goto LAB_1000a31d;
                }
                lVar9 = uVar8 + 0xc;
                if (param_5 - lVar9 < uVar6) goto LAB_1000a008;
                local_68 = uVar7;
                local_60 = (byte *)(uVar7 * 5);
                if ((param_5 - lVar9) - uVar6 < (ulong)uVar1) {
LAB_1000a014:
                  pcVar12 = str_1000b993;
                  goto LAB_1000a315;
                }
                local_78 = lVar9 + param_4;
                local_70 = uVar6;
                uVar5 = recovered_1000a6d0(local_78,uVar6);
                if ((char)uVar5 == '\0') goto LAB_1000a014;
                local_60 = local_38 + (long)local_60 * 8;
                *(long *)local_60 = local_78;
                *(ulong *)(local_60 + 8) = local_78 + local_70;
                recovered_1000aca0(local_78,local_70,(long)local_38,(long)local_50,uVar10,
                                   (char)local_54);
                uVar7 = local_70;
                if (*(long *)(local_50 + extraout_RAX * 8) != 0) {
                  pcVar12 = str_1000b9b2;
                  goto LAB_1000a315;
                }
                do {
                  if (uVar7 == 0) {
                    if (local_68 == 0) goto LAB_10009f2b;
                    pcVar12 = str_1000ba00;
                    goto LAB_1000a315;
                  }
                  uVar7 = uVar7 - 1;
                } while (*(char *)(local_78 + uVar7) != '\\');
                recovered_1000aca0(local_78,uVar7,(long)local_38,(long)local_50,uVar10,
                                   (char)local_54);
                if ((*(long *)(local_50 + extraout_RAX_00 * 8) == 0) ||
                   (*(int *)(pbVar4 + *(long *)(local_50 + extraout_RAX_00 * 8) * 0x28 + -0x10) != 2
                   )) {
                  pcVar12 = str_1000b9ca;
                  goto LAB_1000a315;
                }
LAB_10009f2b:
                local_68 = local_68 + 1;
                *(ulong *)(local_50 + extraout_RAX * 8) = local_68;
                pcVar11 = (char *)recovered_1000ae30((long)param_2,local_78,local_70,param_3);
                *(char **)(local_60 + 0x20) = pcVar11;
                if (pcVar11 == (char *)0x0) {
                  pcVar12 = str_1000ba25;
                  goto LAB_1000a315;
                }
                uVar5 = recovered_100078f0((ulong)local_3c,pcVar11,local_84);
                if (((int)uVar5 != 0) && ((*(int *)(local_60 + 0x18) != 2 || ((local_7c & 2) == 0)))
                   ) {
                  pcVar12 = str_1000ba72;
                  goto LAB_1000a315;
                }
                uVar8 = lVar9 + local_70 + (ulong)uVar1;
                uVar7 = local_68;
              } while (local_68 < local_48);
              if (uVar8 == param_5) {
                pcVar11 = recovered_1000aa10(local_3c,param_2,'\x01');
              }
              else {
                pcVar11 = str_1000baaa;
              }
              if (pcVar11 == (char *)0x0) {
                pbVar4 = local_38 + 0x20;
                pcVar11 = (char *)0x0;
                pcVar12 = str_1000bacc;
                uVar10 = 0;
                while( true ) {
                  pcVar2 = *(char **)pbVar4;
                  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                      (0xb < _DAT_00280808)) && ((0x21b < _DAT_00280808 && (_DAT_00280a18 != 0)))) {
                    iVar3 = (*(code *)(ulong)_DAT_00280a18)(local_3c,pcVar2,local_84);
                  }
                  else {
                    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                       ((0xb < _DAT_00280808 && (0xcb < _DAT_00280808)))) {
                      if ((code *)(ulong)_DAT_002808c8 == (code *)0x0) {
                        iVar3 = 0;
                      }
                      else {
                        iVar3 = (*(code *)(ulong)_DAT_002808c8)(local_3c,pcVar2,local_84);
                      }
                    }
                    else {
                      iVar3 = 0;
                      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                          (0xb < _DAT_00280808)) &&
                         ((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0))))
                      {
                        iVar3 = (*(code *)(ulong)_DAT_00280834)(pcVar2,local_84);
                      }
                    }
                    local_84[0] = 0;
                  }
                  if (iVar3 == 0) break;
                  if ((*(int *)(pbVar4 + -8) != 2) || ((local_7c & 2) == 0)) goto LAB_1000a315;
LAB_1000a178:
                  uVar10 = uVar10 + 1;
                  pbVar4 = pbVar4 + 0x28;
                  if (local_48 <= uVar10) goto LAB_1000a31d;
                }
                pcVar2 = *(char **)pbVar4;
                if (*(int *)(pbVar4 + -8) == 2) {
                  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                     ((0xb < _DAT_00280808 && (0xdf < _DAT_00280808)))) {
                    if ((code *)(ulong)_DAT_002808dc != (code *)0x0) {
                      iVar3 = (*(code *)(ulong)_DAT_002808dc)(local_3c,pcVar2);
                      goto joined_r0x1000a063;
                    }
                  }
                  else if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                           (0xb < _DAT_00280808)) &&
                          ((0x8f < _DAT_00280808 && ((code *)(ulong)_DAT_0028088c != (code *)0x0))))
                  {
                    iVar3 = (*(code *)(ulong)_DAT_0028088c)(pcVar2);
joined_r0x1000a063:
                    if (iVar3 != 0) goto LAB_1000a178;
                  }
                  pcVar12 = str_1000bb01;
                }
                else {
                  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                     ((0xb < _DAT_00280808 && (0xd3 < _DAT_00280808)))) {
                    if ((code *)(ulong)_DAT_002808d0 != (code *)0x0) {
                      iVar3 = (*(code *)(ulong)_DAT_002808d0)
                                        (local_3c,pcVar2,*(void **)(pbVar4 + -0x18),
                                         *(uint *)(pbVar4 + -0xc));
                      goto joined_r0x1000a2fc;
                    }
                  }
                  else if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                           (0xb < _DAT_00280808)) &&
                          ((0x3b < _DAT_00280808 && ((code *)(ulong)_DAT_00280838 != (code *)0x0))))
                  {
                    iVar3 = (*(code *)(ulong)_DAT_00280838)
                                      (pcVar2,*(void **)(pbVar4 + -0x18),*(uint *)(pbVar4 + -0xc));
joined_r0x1000a2fc:
                    if (iVar3 != 0) goto LAB_1000a178;
                  }
                  pcVar12 = str_1000bb3e;
                }
LAB_1000a315:
                pcVar11 = pcVar12;
              }
            }
LAB_1000a31d:
            pbVar4 = local_38 + 0x20;
            uVar10 = local_48;
            do {
              if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
                 && ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                (*(code *)(ulong)_DAT_00280850)(*(void **)pbVar4);
              }
              pbVar4 = pbVar4 + 0x28;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
            recovered_1000a390(local_50);
            recovered_1000a390(local_38);
          }
        }
      }
    }
  }
  return pcVar11;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_0028088c
#undef DAT_002808c8
#undef DAT_002808d0
#undef DAT_002808dc
#undef DAT_00280a18
#undef DAT_1000b8d3
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_0028088c
#undef _DAT_002808c8
#undef _DAT_002808d0
#undef _DAT_002808dc
#undef _DAT_00280a18
#undef str_1000b890
#undef str_1000b8d8
#undef str_1000b908
#undef str_1000b924
#undef str_1000b94e
#undef str_1000b97a
#undef str_1000b993
#undef str_1000b9b2
#undef str_1000b9ca
#undef str_1000ba00
#undef str_1000ba25
#undef str_1000ba72
#undef str_1000baaa
#undef str_1000bacc
#undef str_1000bb01
#undef str_1000bb3e
#undef local_84
#undef local_7c
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_54
#undef local_50
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
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a390(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000a3d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_00280850)(pointer);
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
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
#undef str_1000b670
#define str_1000b670 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_1000a3e0(long param_1,ulong param_2,byte param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;

  if (param_2 - 0x2fe < 0xfffffffffffffd03) {
    return 0;
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)) &&
      (pvVar4 = (*(code *)(ulong)_DAT_0028084c)(param_2 * 3 + 1), pvVar4 != (void *)0x0)))) {
    uVar7 = 0;
    bVar5 = 0;
    bVar6 = 0;
    lVar11 = 0;
    lVar3 = 0;
    do {
      lVar10 = lVar3;
      bVar13 = *(byte *)(param_1 + uVar7);
      if ((2 < param_2 - uVar7 & param_3 & bVar13 == 0x25) == 1) {
        bVar1 = *(byte *)(param_1 + 1 + uVar7);
        bVar12 = bVar1 - 0x30U;
        if (bVar12 < 10) {
          iVar9 = bVar1 - 0x30U;
LAB_1000a535:
          bVar13 = 0x25;
          if (-1 < iVar9) {
            bVar2 = *(byte *)(param_1 + 2 + uVar7);
            bVar8 = bVar2 - 0x30U;
            if (bVar8 < 10) {
              iVar9 = bVar2 - 0x30U;
            }
            else if ((byte)(bVar2 + 0xbf) < 6) {
              iVar9 = bVar2 - 0x37;
            }
            else {
              if (5 < (byte)(bVar2 + 0x9f)) goto LAB_1000a60e;
              iVar9 = bVar2 - 0x57;
            }
            if (-1 < iVar9) {
              if (9 < bVar12) {
                if ((byte)(bVar1 + 0xbf) < 6) {
                  bVar12 = bVar1 - 0x37;
                }
                else {
                  bVar12 = bVar1 + 0xa9;
                  if (5 < (byte)(bVar1 + 0x9f)) {
                    bVar12 = 0xff;
                  }
                }
              }
              if (9 < bVar8) {
                if ((byte)(bVar2 + 0xbf) < 6) {
                  bVar8 = bVar2 - 0x37;
                }
                else {
                  bVar8 = bVar2 + 0xa9;
                  if (5 < (byte)(bVar2 + 0x9f)) {
                    bVar8 = 0xff;
                  }
                }
              }
              uVar7 = uVar7 + 2;
              bVar13 = bVar12 << 4 | bVar8;
            }
            goto LAB_1000a60e;
          }
        }
        else {
          if ((byte)(bVar1 + 0xbf) < 6) {
            iVar9 = bVar1 - 0x37;
            goto LAB_1000a535;
          }
          if ((byte)(bVar1 + 0x9f) < 6) {
            iVar9 = bVar1 - 0x57;
            goto LAB_1000a535;
          }
        }
        bVar13 = 0x25;
      }
LAB_1000a60e:
      if (lVar10 == 0) {
        bVar6 = bVar13;
      }
      if (lVar10 == 1) {
        bVar5 = bVar13;
      }
      if (lVar10 == 0xff) goto LAB_1000a67a;
      if ((((byte)(bVar13 - 0x20) < 0x5f) && (bVar13 != 0x25)) && (bVar13 != 0x5c)) {
        *(byte *)((long)pvVar4 + lVar11) = bVar13;
        lVar11 = lVar11 + 1;
      }
      else {
        *(undefined1 *)((long)pvVar4 + lVar11) = 0x25;
        *(char *)((long)pvVar4 + lVar11 + 1) = str_1000b670[bVar13 >> 4];
        *(char *)((long)pvVar4 + lVar11 + 2) = str_1000b670[bVar13 & 0xf];
        lVar11 = lVar11 + 3;
      }
      uVar7 = uVar7 + 1;
      lVar3 = lVar10 + 1;
    } while (uVar7 < param_2);
    *(undefined1 *)((long)pvVar4 + lVar11) = 0;
    if ((lVar10 != 0) || (bVar6 != 0x2e)) {
      if (lVar10 + 1 != 2) {
        return (long)pvVar4;
      }
      if (bVar6 != 0x2e) {
        return (long)pvVar4;
      }
      if (bVar5 != 0x2e) {
        return (long)pvVar4;
      }
    }
LAB_1000a67a:
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x53 < _DAT_00280808 && (_DAT_00280850 != 0)))) {
      (*(code *)(ulong)_DAT_00280850)(pvVar4);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850
#undef str_1000b670

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6d0
 */

undefined8 recovered_1000a6d0(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;

  if (param_2 - 0x3001 < 0xffffffffffffd000) {
    return 0;
  }
  uVar8 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar7 = 0;
  uVar9 = 0;
  do {
    uVar6 = uVar8;
    if (param_2 == uVar8) {
LAB_1000a72d:
      if (uVar9 == 0) {
        return 0;
      }
      if ((uVar9 == 1) && ((char)uVar5 == '.')) {
        return 0;
      }
      if (((uVar9 == 2) && ((char)uVar5 == '.')) && ((char)uVar4 == '.')) {
        return 0;
      }
      if (param_2 == uVar8) {
        uVar3 = 0;
        uVar6 = param_2;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar3 = 0;
        if (0x1000 < uVar7) {
          return 0;
        }
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + uVar8);
      uVar10 = (uint)bVar1;
      if (bVar1 == 0x25) {
        if (param_2 - uVar8 < 3) {
          return 0;
        }
        bVar1 = *(byte *)(param_1 + 1 + uVar8);
        if ((byte)(bVar1 - 0x30U) < 10) {
          iVar11 = bVar1 - 0x30U;
        }
        else if ((byte)(bVar1 + 0xbf) < 6) {
          iVar11 = bVar1 - 0x37;
        }
        else if ((byte)(bVar1 + 0x9f) < 6) {
          iVar11 = bVar1 - 0x57;
        }
        else {
          iVar11 = -1;
        }
        bVar2 = *(byte *)(param_1 + 2 + uVar8);
        if ((byte)(bVar2 - 0x30U) < 10) {
          uVar10 = bVar2 - 0x30U;
        }
        else if ((byte)(bVar2 + 0xbf) < 6) {
          uVar10 = bVar2 - 0x37;
        }
        else if ((byte)(bVar2 + 0x9f) < 6) {
          uVar10 = bVar2 - 0x57;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if ((byte)(bVar2 + 0x9f) < 6) {
          return 0;
        }
        if ((byte)(bVar1 + 0x9f) < 6) {
          return 0;
        }
        if (iVar11 < 0) {
          return 0;
        }
        if ((int)uVar10 < 0) {
          return 0;
        }
        uVar3 = uVar8 + 2;
        uVar10 = uVar10 | iVar11 << 4;
        uVar6 = uVar3;
        if (0xa0 < (byte)((char)uVar10 + 0x81U)) {
          if (uVar10 != 0x5c) {
            uVar6 = uVar8;
          }
          if (uVar10 == 0x25) {
            uVar6 = uVar3;
          }
          else if (uVar10 != 0x5c) {
            return 0;
          }
        }
      }
      else {
        if (bVar1 == 0x5c) goto LAB_1000a72d;
        if (bVar1 == 0x5c) {
          return 0;
        }
        if (0x5e < (byte)(bVar1 - 0x20)) {
          return 0;
        }
      }
      uVar3 = uVar9 + 1;
      if (0xff < uVar3) {
        return 0;
      }
      if (uVar9 == 1) {
        uVar4 = uVar10 & 0xff;
      }
      if (uVar9 == 0) {
        uVar5 = uVar10 & 0xff;
      }
      uVar7 = uVar7 + 1;
      if (0x1000 < uVar7) {
        return 0;
      }
    }
    uVar8 = uVar6 + 1;
    uVar9 = uVar3;
    if (param_2 < uVar8) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  } while( true );
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
 * Address: 0x1000a8b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000a8b0(long *param_1,undefined8 *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  void *extraout_RAX;
  undefined8 uVar2;
  code *in_RCX;
  void *size;
  undefined8 *in_R8;
  void *pvVar3;

  if (0xffffffffU - param_1[1] < param_3) {
LAB_1000a8cf:
    uVar2 = 0;
  }
  else {
    pvVar3 = (void *)(param_1[1] + param_3);
    pvVar1 = (void *)param_1[2];
    if (pvVar1 < pvVar3) {
      size = (void *)0x100;
      if (pvVar1 != (void *)0x0) {
        size = pvVar1;
      }
      for (; size < pvVar3; size = (void *)((long)(uintptr_t)size * 2)) {
        if ((void *)0x7fffffff < size) {
          size = pvVar3;
          break;
        }
      }
      if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
         (((_DAT_00280808 < 0x58 || (in_RCX = (code *)(ulong)_DAT_00280854, in_RCX == (code *)0x0))
          || (pvVar1 = (*in_RCX)((void *)*param_1,(ulong)size), pvVar1 == (void *)0x0))))
      goto LAB_1000a8cf;
      *param_1 = (long)pvVar1;
      param_1[2] = (long)size;
    }
    if (param_3 != 0) {
      recovered_10001c80((undefined8 *)(*param_1 + param_1[1]),param_2,param_3,in_RCX,in_R8);
      pvVar1 = extraout_RAX;
    }
    param_1[1] = (long)pvVar3;
    uVar2 = CONCAT71((int7)((ulong)pvVar1 >> 8),1);
  }
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280854
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280854

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002809d4
#define DAT_002809d4 (*(uint8_t *)(0x2809d4U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002809d4
#define _DAT_002809d4 (*(uint *)(0x2809d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000a9c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x1d7 < _DAT_00280808 && ((code *)(ulong)_DAT_002809d4 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000aa03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_002809d4)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809d4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002809d4

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_0028088c
#define DAT_0028088c (*(uint8_t *)(0x28088cU))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_002808dc
#define DAT_002808dc (*(uint8_t *)(0x2808dcU))
#undef DAT_00280a18
#define DAT_00280a18 (*(uint8_t *)(0x280a18U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef _DAT_0028088c
#define _DAT_0028088c (*(uint *)(0x28088cU))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(uint *)(0x2808c8U))
#undef _DAT_002808dc
#define _DAT_002808dc (*(uint *)(0x2808dcU))
#undef _DAT_00280a18
#define _DAT_00280a18 (*(uint *)(0x280a18U))
#undef str_1000bb78
#define str_1000bb78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9aaU)))
#undef str_1000bba6
#define str_1000bba6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d8U)))
#define local_4c (*(undefined4 (*)[19])(pf_stack_frame + 20))
#define local_44 (*(byte *)(pf_stack_frame + 28))
#define local_40 (*(char * *)(pf_stack_frame + 32))
#define local_34 (*(int *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_1000aa10(int param_1,char *param_2,char param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;

  local_40 = param_2;
  local_34 = param_1;
LAB_1000aa43:
  do {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
    if (cVar1 != '\\') {
      if (cVar1 != '\0') goto LAB_1000aa43;
    }
    *param_2 = '\0';
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x21b < _DAT_00280808 && (_DAT_00280a18 != 0)))) {
      iVar2 = (*(code *)(ulong)_DAT_00280a18)(local_34,local_40,local_4c);
      if (iVar2 != 0) goto LAB_1000ac5f;
LAB_1000aad0:
      if (param_3 != '\0') {
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 && (0xdf < _DAT_00280808)))) {
          if ((code *)(ulong)_DAT_002808dc == (code *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (*(code *)(ulong)_DAT_002808dc)(local_34,local_40);
          }
        }
        else {
          iVar2 = 0;
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             ((0x8f < _DAT_00280808 && ((code *)(ulong)_DAT_0028088c != (code *)0x0)))) {
            iVar2 = (*(code *)(ulong)_DAT_0028088c)(local_40);
          }
        }
        bVar5 = iVar2 == 0;
        bVar4 = !bVar5;
        pcVar3 = str_1000bba6;
        goto LAB_1000ac7b;
      }
      bVar4 = true;
      pcVar3 = (char *)0x0;
    }
    else {
      if (((_DAT_00280800 == 0x50414d57) && ((_DAT_00280804 != 0 && (0xb < _DAT_00280808)))) &&
         (0xcb < _DAT_00280808)) {
        if ((code *)(ulong)_DAT_002808c8 == (code *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*(code *)(ulong)_DAT_002808c8)(local_34,local_40,local_4c);
        }
      }
      else {
        iVar2 = 0;
        if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
           ((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)))) {
          iVar2 = (*(code *)(ulong)_DAT_00280834)(local_40,local_4c);
        }
      }
      local_4c[0] = 0;
      if (iVar2 == 0) goto LAB_1000aad0;
LAB_1000ac5f:
      bVar4 = (bool)((local_44 & 2) >> 1);
      bVar5 = bVar4 == false;
      pcVar3 = str_1000bb78;
LAB_1000ac7b:
      if (!bVar5) {
        pcVar3 = (char *)0x0;
      }
    }
    *param_2 = cVar1;
    if ((cVar1 == '\0') || (bVar4 == false)) {
      return pcVar3;
    }
  } while( true );
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_0028088c
#undef DAT_002808c8
#undef DAT_002808dc
#undef DAT_00280a18
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_0028088c
#undef _DAT_002808c8
#undef _DAT_002808dc
#undef _DAT_00280a18
#undef str_1000bb78
#undef str_1000bba6
#undef local_4c
#undef local_44
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aca0
 */

void recovered_1000aca0(long param_1,ulong param_2,long param_3,long param_4,long param_5,
                       char param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;

  if (param_2 == 0) {
    uVar3 = 0x811c9dc5;
  }
  else {
    if (param_2 == 1) {
      uVar3 = 0x811c9dc5;
      uVar4 = 0;
    }
    else {
      uVar3 = 0x811c9dc5;
      uVar4 = 0;
      do {
        bVar1 = *(byte *)(param_1 + uVar4);
        bVar6 = *(byte *)(param_1 + 1 + uVar4);
        bVar5 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar5 = bVar1;
        }
        bVar8 = bVar6 | 0x20;
        if (0x19 < (byte)(bVar6 + 0xbf)) {
          bVar8 = bVar6;
        }
        if (param_6 == '\0') {
          bVar8 = bVar6;
          bVar5 = bVar1;
        }
        uVar3 = ((uint)bVar8 ^ (bVar5 ^ uVar3) * 0x1000193) * 0x1000193;
        uVar4 = uVar4 + 2;
      } while ((param_2 & 0xfffffffffffffffe) != uVar4);
    }
    if ((param_2 & 1) != 0) {
      bVar1 = *(byte *)(param_1 + uVar4);
      bVar6 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar6 = bVar1;
      }
      if (param_6 == '\0') {
        bVar6 = bVar1;
      }
      uVar3 = (uVar3 ^ bVar6) * 0x1000193;
    }
  }
  uVar4 = (ulong)(uVar3 & (uint)(param_5 - 1U));
  do {
    lVar2 = *(long *)(param_4 + uVar4 * 8);
    if (lVar2 == 0) {
      return;
    }
    if (*(uint *)(param_3 + -0x18 + lVar2 * 0x28) == param_2) {
      if (param_2 != 0) {
        lVar2 = param_3 + lVar2 * 0x28;
        uVar7 = 0;
        do {
          bVar1 = *(byte *)(param_1 + uVar7);
          if (param_6 == '\0') {
            if (bVar1 != *(byte *)(*(long *)(lVar2 + -0x28) + uVar7)) goto LAB_1000ad88;
          }
          else {
            bVar6 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar6 = bVar1;
            }
            bVar1 = *(byte *)(*(long *)(lVar2 + -0x28) + uVar7);
            bVar5 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar5 = bVar1;
            }
            if (bVar6 != bVar5) goto LAB_1000ad88;
          }
          uVar7 = uVar7 + 1;
          if (param_2 == uVar7) {
            return;
          }
        } while( true );
      }
      uVar7 = 0;
LAB_1000ad88:
      if (uVar7 == param_2) {
        return;
      }
    }
    uVar4 = uVar4 + 1 & param_5 - 1U;
  } while( true );
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_1000ae30(long param_1,long param_2,ulong param_3,char param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  undefined8 *pointer;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *in_R8;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  byte bVar11;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)) &&
      (pointer = (*(code *)(ulong)_DAT_0028084c)(param_3 + 1), pointer != (undefined8 *)0x0)))) {
    if (param_3 == 0) {
      uVar10 = 0;
    }
    else {
      uVar7 = 0;
      in_R8 = (undefined8 *)0xff;
      uVar10 = 0;
      do {
        bVar9 = *(byte *)(param_2 + uVar7);
        if ((param_4 == '\0') && (bVar9 == 0x25)) {
          cVar2 = *(char *)(param_2 + 1 + uVar7);
          bVar8 = cVar2 - 0x30U;
          if (9 < (byte)(cVar2 - 0x30U)) {
            if ((byte)(cVar2 + 0xbfU) < 6) {
              bVar8 = cVar2 - 0x37;
            }
            else {
              bVar8 = cVar2 + 0xa9;
              if (5 < (byte)(cVar2 + 0x9fU)) {
                bVar8 = 0xff;
              }
            }
          }
          bVar11 = *(byte *)(param_2 + 2 + uVar7);
          bVar9 = bVar11 - 0x30U;
          if (9 < (byte)(bVar11 - 0x30U)) {
            if ((byte)(bVar11 + 0xbf) < 6) {
              bVar9 = bVar11 - 0x37;
            }
            else {
              bVar9 = bVar11 + 0xa9;
              if (5 < (byte)(bVar11 + 0x9f)) {
                bVar9 = 0xff;
              }
            }
          }
          bVar9 = bVar8 << 4 | bVar9;
          uVar7 = uVar7 + 2;
LAB_1000af91:
          if (0x1f < bVar9) {
            uVar1 = bVar9 - 0x22;
            if (uVar1 < 0x3b) {
              if ((ulong)uVar1 == 0x3a) {
                if (bVar11 == 0x5c) goto LAB_1000aee5;
              }
              else if ((0x35002101UL >> ((ulong)uVar1 & 0x3f) & 1) == 0) goto LAB_1000aedb;
            }
            else {
LAB_1000aedb:
              if (bVar9 != 0x7c) goto LAB_1000aee5;
            }
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
          if (_DAT_00280808 < 0x54) {
            return 0;
          }
          puVar3 = pointer;
          goto LAB_1000b1a8;
        }
        bVar11 = bVar9;
        if (param_4 == '\0') goto LAB_1000af91;
LAB_1000aee5:
        *(byte *)((long)pointer + uVar10) = bVar9;
        uVar10 = uVar10 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_3);
    }
    *(undefined1 *)((long)pointer + uVar10) = 0;
    uVar7 = recovered_10003720(param_1);
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      do {
        if (*(char *)(param_1 + -1 + uVar7) != '\\') goto LAB_1000b03d;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar7 = 0;
    }
LAB_1000b03d:
    if (((((0x2fff - uVar7 < uVar10 || 0x2fff < uVar7) || (_DAT_00280800 != 0x50414d57)) ||
         (_DAT_00280804 == 0)) || ((_DAT_00280808 < 0xc || (_DAT_00280808 < 0x50)))) ||
       ((code *)(ulong)_DAT_0028084c == (code *)0x0)) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (*(code *)(ulong)_DAT_0028084c)(uVar7 + uVar10 + 2);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        lVar4 = uVar7 + uVar10;
        lVar6 = lVar4;
        recovered_10001c80(puVar3,(undefined8 *)param_1,uVar7,lVar4,in_R8);
        *(undefined1 *)((long)puVar3 + uVar7) = 0x5c;
        recovered_10001c80((undefined8 *)((long)puVar3 + uVar7 + 1),pointer,uVar10,lVar6,in_R8);
        *(undefined1 *)((long)puVar3 + lVar4 + 1) = 0;
      }
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280850)(pointer);
    }
    if (param_4 != '\x01' || puVar3 == (undefined8 *)0x0) {
      return (long)puVar3;
    }
    lVar4 = recovered_10003720((long)puVar3);
    uVar5 = recovered_1000a6d0((long)puVar3 + 1,lVar4 - 1);
    if ((char)uVar5 != '\0') {
      return (long)puVar3;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (0x53 < _DAT_00280808)) {
LAB_1000b1a8:
      if (_DAT_00280850 != 0) {
        (*(code *)(ulong)_DAT_00280850)(puVar3);
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850
