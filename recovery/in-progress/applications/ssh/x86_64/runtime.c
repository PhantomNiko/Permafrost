/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1001f060
#define DAT_1001f060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19caU)))
#undef DAT_1001f061
#define DAT_1001f061 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19cbU)))
#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

/* WARNING: Removing unreachable block (ram,0x100004bc) */

void recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1001f060 = 0;
    DAT_1001f061 = 0;
    recovered_100004e0();
    DAT_1001f070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f060
#undef DAT_1001f061
#undef DAT_1001f070

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
#undef DAT_1001f060
#define DAT_1001f060 (*(char *)(((uintptr_t)pf_module_state + 0x19caU)))
#undef DAT_1001f068
#define DAT_1001f068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19d2U)))
#undef DAT_1001f078
#define DAT_1001f078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19e2U)))
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
  if (DAT_1001f060 != '\0') {
    return;
  }
  DAT_1001f068 = 0;
  DAT_1001f078 = 0;
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
      if (DAT_1001f068 != 0) goto LAB_100007b9;
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
  if (DAT_1001f078 == 0) {
    DAT_1001f078 = DAT_1001f068;
  }
  DAT_1001f060 = 1;
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
#undef DAT_1001f060
#undef DAT_1001f068
#undef DAT_1001f078
#undef _DAT_00280088
#undef _DAT_0028008c
#undef _DAT_00280238
#undef _DAT_0028023c
#undef local_438
#undef local_28

#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007f0
 */

/* WARNING: Removing unreachable block (ram,0x1000082c) */

void recovered_100007f0(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000840(param_1,param_2,param_3);
    DAT_1001f070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f070

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1001f061
#define DAT_1001f061 (*(char *)(((uintptr_t)pf_module_state + 0x19cbU)))
#undef DAT_1001f068
#define DAT_1001f068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19d2U)))
#undef DAT_1001f078
#define DAT_1001f078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19e2U)))
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
  if ((bVar3) || (DAT_1001f061 != '\0')) {
    return false;
  }
  DAT_1001f061 = 1;
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
      DAT_1001f061 = 0;
      return false;
    }
    if (plVar6 <= plVar1) {
      DAT_1001f061 = 0;
      return false;
    }
    if (plVar1 < (long *)0x10000000 && (long *)0x8000000 < plVar6) {
      if (plVar1 < (long *)0x8000000) {
        uVar7 = 0x8000000 - (long)plVar1;
        if (~(ulong)plVar1 < uVar7) {
          DAT_1001f061 = 0;
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
        DAT_1001f061 = 0;
        return false;
      }
    }
    else {
      if ((long *)0xfffffffffffffff0 < plVar1) {
        DAT_1001f061 = 0;
        return false;
      }
      uVar10 = ((ulong)((long)plVar1 + 0xf) & 0xfffffffffffffff0) - (long)plVar1;
      uVar8 = uVar7 - uVar10;
      if (uVar7 < uVar10 || uVar8 == 0) {
        DAT_1001f061 = 0;
        return false;
      }
      if ((uVar8 & 0xfffffffffffffff0) < 0x31) {
        DAT_1001f061 = 0;
        return false;
      }
    }
    plVar2 = DAT_1001f068;
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
          DAT_1001f061 = 0;
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
        DAT_1001f061 = 0;
        return false;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == param_3) {
      puVar5 = (ulong *)&DAT_1001f068;
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
      if (DAT_1001f078 == (long *)0x0) {
        DAT_1001f078 = DAT_1001f068;
      }
      DAT_1001f061 = 0;
      return local_38 != uVar8;
    }
  } while( true );
}

#undef DAT_10000001
#undef DAT_1001f061
#undef DAT_1001f068
#undef DAT_1001f078
#undef local_38

#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
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

  iVar1 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    local_18 = param_1;
    local_10 = param_2;
    recovered_10000840((long)&local_18,(long)&local_10,1);
    DAT_1001f070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f070
#undef local_18
#undef local_10

#undef DAT_1001f068
#define DAT_1001f068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19d2U)))
#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
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

  iVar1 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  uVar4 = 0;
  for (plVar2 = DAT_1001f068; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      uVar4 = uVar4 + *plVar2;
    }
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_1001f070 = 0;
  return uVar3;
}

#undef DAT_1001f068
#undef DAT_1001f070

#undef DAT_1001f068
#define DAT_1001f068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19d2U)))
#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
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

  iVar1 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  lVar2 = 0;
  for (plVar3 = DAT_1001f068; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    if ((char)plVar3[3] == '\x01') {
      lVar2 = lVar2 + *plVar3;
    }
  }
  DAT_1001f070 = 0;
  return lVar2;
}

#undef DAT_1001f068
#undef DAT_1001f070

#undef DAT_1001f068
#define DAT_1001f068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19d2U)))
#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
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

  iVar2 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  uVar4 = 0;
  for (plVar1 = DAT_1001f068; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar4 = uVar4 + *plVar1;
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_1001f070 = 0;
  return uVar3;
}

#undef DAT_1001f068
#undef DAT_1001f070

#undef DAT_1001f068
#define DAT_1001f068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19d2U)))
#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
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

  iVar2 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  lVar3 = 0;
  for (plVar1 = DAT_1001f068; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar3 = lVar3 + *plVar1;
  }
  DAT_1001f070 = 0;
  return lVar3;
}

#undef DAT_1001f068
#undef DAT_1001f070

#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce0
 */

/* WARNING: Removing unreachable block (ram,0x10000d1c) */

void recovered_10000ce0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000d40(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1001f070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f070

#undef DAT_1001f068
#define DAT_1001f068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19d2U)))
#undef DAT_1001f078
#define DAT_1001f078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19e2U)))
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
    puVar1 = DAT_1001f068;
    puVar5 = DAT_1001f078;
    if (DAT_1001f078 == (ulong *)0x0) {
      puVar5 = DAT_1001f068;
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
                          DAT_1001f078 = (ulong *)puVar3[1];
                        }
                        else {
                          DAT_1001f078 = (ulong *)((long)puVar3 + uVar9 + 0x20);
                          *(ulong *)((long)puVar3 + uVar9 + 0x20) = uVar8 - 0x20;
                          uVar11 = puVar3[1];
                          *(ulong *)((long)puVar3 + uVar9 + 0x28) = uVar11;
                          *(ulong **)((long)puVar3 + uVar9 + 0x30) = puVar3;
                          *(undefined1 *)((long)puVar3 + uVar9 + 0x38) = 1;
                          if (uVar11 != 0) {
                            *(ulong **)(uVar11 + 0x10) = DAT_1001f078;
                          }
                          *puVar3 = uVar9;
                          puVar3[1] = (ulong)DAT_1001f078;
                        }
                        *(undefined1 *)(puVar3 + 3) = 0;
                        if (DAT_1001f078 == (ulong *)0x0) {
                          DAT_1001f078 = DAT_1001f068;
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

#undef DAT_1001f068
#undef DAT_1001f078

#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f40
 */

/* WARNING: Removing unreachable block (ram,0x10000f7c) */

void recovered_10000f40(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000d40(param_1,(ulong *)0x0,param_2);
    DAT_1001f070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f070

#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fa0
 */

/* WARNING: Removing unreachable block (ram,0x10000fdc) */

ulong * recovered_10000fa0(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
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
  DAT_1001f070 = 0;
  return puVar2;
}

#undef DAT_1001f070

#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001000
 */

/* WARNING: Removing unreachable block (ram,0x1000103c) */

void recovered_10001000(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001050(param_1);
    DAT_1001f070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f070

#undef DAT_1001f078
#define DAT_1001f078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19e2U)))
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
        if (DAT_1001f078 == puVar3) {
          DAT_1001f078 = puVar2;
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
          if (DAT_1001f078 == puVar2) {
            DAT_1001f078 = puVar3;
          }
          puVar1[2] = (ulong)puVar3;
          puVar2 = puVar1;
        } while ((char)puVar1[3] != '\0');
      }
      puVar2 = puVar3;
    }
    DAT_1001f078 = puVar2;
  }
  return;
}

#undef DAT_1001f078

#undef DAT_1001f070
#define DAT_1001f070 (*(int *)(((uintptr_t)pf_module_state + 0x19daU)))
#undef DAT_1001f078
#define DAT_1001f078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19e2U)))
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

  iVar8 = DAT_1001f070;
  { __typeof__(DAT_1001f070) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f070),1,__ATOMIC_SEQ_CST);
}
  if (iVar8 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (undefined8 *)0x0) {
    puVar17 = recovered_10000d40(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1001f070 = 0;
    return puVar17;
  }
  if (param_2 == 0) {
    recovered_10001050((long)param_1);
    DAT_1001f070 = 0;
    return (undefined8 *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_1001f070 = 0;
    return (undefined8 *)0x0;
  }
  recovered_100004e0();
  uVar13 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar17 = param_1 + -4;
  uVar12 = param_1[-4];
  if (uVar13 <= uVar12) {
    if (uVar12 <= uVar13 - 1) {
      DAT_1001f070 = 0;
      return (undefined8 *)0x0;
    }
    if (uVar12 - uVar13 < 0x30) {
      if (uVar12 < 0xffffffffffffffe0) {
        DAT_1001f070 = 0;
        return param_1;
      }
      DAT_1001f070 = 0;
      return (undefined8 *)0x0;
    }
    if (0xffffffffffffffb0 < param_2) {
      DAT_1001f070 = 0;
      return (undefined8 *)0x0;
    }
    DAT_1001f078 = (ulong *)((long)param_1 + uVar13);
    *(ulong *)((long)param_1 + uVar13) = (uVar12 - uVar13) - 0x20;
    lVar2 = param_1[-3];
    *(long *)((long)param_1 + uVar13 + 8) = lVar2;
    *(ulong **)((long)param_1 + uVar13 + 0x10) = puVar17;
    *(undefined1 *)((long)param_1 + uVar13 + 0x18) = 1;
    if (lVar2 != 0) {
      *(ulong **)(lVar2 + 0x10) = DAT_1001f078;
    }
    param_1[-4] = uVar13;
    param_1[-3] = DAT_1001f078;
    DAT_1001f070 = 0;
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
      puVar15 = DAT_1001f078;
      do {
        if (((puVar9 == (ulong *)0x0) || ((char)puVar9[3] != '\x01')) ||
           ((0xffffffffffffffdf < uVar12 ||
            (((ulong *)((long)param_1 + uVar12) != puVar9 || (-uVar12 - 0x21 < *puVar9)))))) break;
        if (puVar15 == puVar9) {
          puVar15 = puVar17;
          DAT_1001f078 = puVar17;
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
        DAT_1001f070 = 0;
        return (undefined8 *)0x0;
      }
      uVar10 = recovered_100066a0(puVar17,uVar13);
      if ((char)uVar10 != '\0') {
        DAT_1001f078 = (ulong *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1001f070 = 0;
      return param_1;
    }
  }
  puVar9 = recovered_10000d40(uVar13,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  if (puVar9 == (ulong *)0x0) {
    DAT_1001f070 = 0;
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
  DAT_1001f070 = 0;
  return puVar9;
}

#undef DAT_1001f070
#undef DAT_1001f078

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

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_0028084c)();
    return uVar1;
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

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001c21. Too many branches */
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

  undefined8 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x57 < _DAT_00280808 && ((code *)(ulong)_DAT_00280854 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_00280854)();
    return uVar1;
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
  puVar4 = (undefined8 *)(*(code *)(ulong)_DAT_0028084c)(uVar9);
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


#undef DAT_1001e160
#define DAT_1001e160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xacaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e30
 */

undefined * recovered_10003e30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1001e160;
}

#undef DAT_1001e160

#undef PTR_DAT_1001f000
#define PTR_DAT_1001f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x196aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e40
 */

undefined ** recovered_10003e40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1001f000;
}

#undef PTR_DAT_1001f000

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
#undef uStack_18
#undef local_28

#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
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
          param_1 = param_1 * DAT_1001d6a0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0 *
                    DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0;
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

#undef DAT_1001d6a0

#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d720
#define DAT_1001d720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8aU)))
#undef _DAT_1001d720
#define _DAT_1001d720 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8aU)))
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
  dVar2 = (double)(_DAT_1001d720 ^ (ulong)param_1);
  if ((double)(_DAT_1001d720 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1001d6a8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1001d6a0;
      iVar1 = iVar1 + 1;
    } while (DAT_1001d6a8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1001d6a0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1001d720 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1001d6a0
#undef DAT_1001d6a8
#undef DAT_1001d720
#undef _DAT_1001d720

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


#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
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
      return DAT_1001d6a8;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1001d6a8;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1001d6a8 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1001d6a8

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


#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
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
         (ulong)(DAT_1001d6a8 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_1001d6a8

#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
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
    if (param_1 <= DAT_1001d6a8) {
      dVar1 = DAT_1001d6a8;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d6a0;
  }
  return dVar1;
}

#undef DAT_1001d6a0
#undef DAT_1001d6a8

#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d6b0
#define DAT_1001d6b0 (*(double *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_1001d6b8
#define DAT_1001d6b8 (*(double *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_1001d6c0
#define DAT_1001d6c0 (*(double *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_1001d6c8
#define DAT_1001d6c8 (*(double *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_1001d6d0
#define DAT_1001d6d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_1001d6d8
#define DAT_1001d6d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_1001d730
#define DAT_1001d730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9aU)))
#undef DAT_1001d740
#define DAT_1001d740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaaU)))
#undef DAT_1001d750
#define DAT_1001d750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbaU)))
#undef DAT_1001d760
#define DAT_1001d760 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
#undef _DAT_1001d6d0
#define _DAT_1001d6d0 (*(double *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef _DAT_1001d6d8
#define _DAT_1001d6d8 (*(double *)(((uintptr_t)pf_module_state + 0x42U)))
#undef _DAT_1001d730
#define _DAT_1001d730 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9aU)))
#undef _DAT_1001d740
#define _DAT_1001d740 (*(uint128 *)(((uintptr_t)pf_module_state + 0xaaU)))
#undef _DAT_1001d750
#define _DAT_1001d750 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbaU)))
#undef _DAT_1001d760
#define _DAT_1001d760 (*(uint128 *)(((uintptr_t)pf_module_state + 0xcaU)))
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
    if (DAT_1001d6b8 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1001d6a0;
        iVar1 = iVar1 + 1;
      } while (DAT_1001d6b8 < param_1);
    }
    for (; param_1 < DAT_1001d6c0; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1001d6c8 + param_1) / (param_1 + DAT_1001d6a8);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1001d730);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1001d740);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1001d750);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1001d760);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1001d6d0 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1001d6d8;
  }
  return DAT_1001d6b0;
}

#undef DAT_1001d6a0
#undef DAT_1001d6a8
#undef DAT_1001d6b0
#undef DAT_1001d6b8
#undef DAT_1001d6c0
#undef DAT_1001d6c8
#undef DAT_1001d6d0
#undef DAT_1001d6d8
#undef DAT_1001d730
#undef DAT_1001d740
#undef DAT_1001d750
#undef DAT_1001d760
#undef _DAT_1001d6d0
#undef _DAT_1001d6d8
#undef _DAT_1001d730
#undef _DAT_1001d740
#undef _DAT_1001d750
#undef _DAT_1001d760

#undef DAT_1001d770
#define DAT_1001d770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004530
 */

long recovered_10004530(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1001d770 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1001d770

#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d6e0
#define DAT_1001d6e0 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1001d6e8
#define DAT_1001d6e8 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1001d6f0
#define DAT_1001d6f0 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_1001d6f8
#define DAT_1001d6f8 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_1001d700
#define DAT_1001d700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1001d780
#define DAT_1001d780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeaU)))
#undef _DAT_1001d700
#define _DAT_1001d700 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef _DAT_1001d780
#define _DAT_1001d780 (*(uint128 *)(((uintptr_t)pf_module_state + 0xeaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004560(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1001d6e0 < param_1; param_1 = param_1 + DAT_1001d6e8) {
  }
  for (; param_1 < DAT_1001d6f0; param_1 = param_1 + DAT_1001d6f8) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1001d780);
  return ((dVar1 / _DAT_1001d700 + DAT_1001d6a8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1001d6a8
#undef DAT_1001d6e0
#undef DAT_1001d6e8
#undef DAT_1001d6f0
#undef DAT_1001d6f8
#undef DAT_1001d700
#undef DAT_1001d780
#undef _DAT_1001d700
#undef _DAT_1001d780

#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d6e0
#define DAT_1001d6e0 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1001d6e8
#define DAT_1001d6e8 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1001d6f0
#define DAT_1001d6f0 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_1001d6f8
#define DAT_1001d6f8 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_1001d708
#define DAT_1001d708 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_1001d790
#define DAT_1001d790 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef _DAT_1001d790
#define _DAT_1001d790 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004610(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1001d6e0 < param_1; param_1 = param_1 + DAT_1001d6e8) {
  }
  for (; param_1 < DAT_1001d6f0; param_1 = param_1 + DAT_1001d6f8) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1001d790);
  return (DAT_1001d708 * dVar1 + DAT_1001d6a8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1001d6a8
#undef DAT_1001d6e0
#undef DAT_1001d6e8
#undef DAT_1001d6f0
#undef DAT_1001d6f8
#undef DAT_1001d708
#undef DAT_1001d790
#undef _DAT_1001d790

#undef DAT_1001d720
#define DAT_1001d720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8aU)))
#undef _DAT_1001d720
#define _DAT_1001d720 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046b0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1001d720 ^ (ulong)param_1);
  if ((double)(_DAT_1001d720 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1001d720
#undef _DAT_1001d720

#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1001d710
#define DAT_1001d710 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef DAT_1001d720
#define DAT_1001d720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8aU)))
#undef _DAT_1001d720
#define _DAT_1001d720 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8aU)))
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
  dVar7 = (double)(_DAT_1001d720 ^ (ulong)param_1);
  if ((double)(_DAT_1001d720 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_1001d710;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_1001d6a0;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_1001d6a0;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_1001d6a0
#undef DAT_1001d710
#undef DAT_1001d720
#undef _DAT_1001d720

#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1001d710
#define DAT_1001d710 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
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
  dVar6 = DAT_1001d710;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_1001d6a0;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_1001d6a0;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_1001d6a0
#undef DAT_1001d710

#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
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
  dVar3 = DAT_1001d6a8;
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

#undef DAT_1001d6a8

#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d720
#define DAT_1001d720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8aU)))
#undef _DAT_1001d720
#define _DAT_1001d720 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8aU)))
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
    dVar3 = DAT_1001d6a8;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_1001d720);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_1001d6a8;
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

#undef DAT_1001d6a8
#undef DAT_1001d720
#undef _DAT_1001d720

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


#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d720
#define DAT_1001d720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8aU)))
#undef UNK_1001d724
#define UNK_1001d724 (*(uint *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef _DAT_1001d720
#define _DAT_1001d720 (*(uint *)(((uintptr_t)pf_module_state + 0x8aU)))
#undef uRam000000001001d724
#define uRam000000001001d724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8eU)))
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
    dVar2 = pf_bits_double(CONCAT44((uint)(pf_double_bits(dVar2) >> 0x20) ^ uRam000000001001d724,
                             SUB84(dVar2,0) ^ _DAT_1001d720));
  }
  iVar1 = 0;
  if (DAT_1001d6a8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1001d6a0;
      iVar1 = iVar1 + 1;
    } while (DAT_1001d6a8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1001d6a0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001001d724,_DAT_1001d720));
  }
  return CONCAT44((int)(pf_double_bits(dVar2) >> 0x20),(float)dVar2);
}

#undef DAT_1001d6a0
#undef DAT_1001d6a8
#undef DAT_1001d720
#undef UNK_1001d724
#undef _DAT_1001d720
#undef uRam000000001001d724

#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
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
          dVar3 = dVar3 * DAT_1001d6a0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0 *
                  DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0;
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

#undef DAT_1001d6a0

#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d7b0
#define DAT_1001d7b0 (*(float *)(((uintptr_t)pf_module_state + 0x11aU)))
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
    return DAT_1001d7b0;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1001d6a8;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1001d6a8 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1001d6a8
#undef DAT_1001d7b0

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


#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
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
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1001d6a8 + dVar2) & uVar1);
}

#undef DAT_1001d6a8

#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
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
                    (ulong)(DAT_1001d6a8 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1001d6a8

#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1001d6a8 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1001d6a8

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


#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d6b8
#define DAT_1001d6b8 (*(double *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_1001d6c0
#define DAT_1001d6c0 (*(double *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_1001d6c8
#define DAT_1001d6c8 (*(double *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_1001d6d0
#define DAT_1001d6d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_1001d6d8
#define DAT_1001d6d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_1001d730
#define DAT_1001d730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9aU)))
#undef DAT_1001d740
#define DAT_1001d740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaaU)))
#undef DAT_1001d750
#define DAT_1001d750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbaU)))
#undef DAT_1001d760
#define DAT_1001d760 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
#undef DAT_1001d7b4
#define DAT_1001d7b4 (*(float *)(((uintptr_t)pf_module_state + 0x11eU)))
#undef DAT_1001d7b8
#define DAT_1001d7b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x122U)))
#undef _DAT_1001d6d0
#define _DAT_1001d6d0 (*(double *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef _DAT_1001d6d8
#define _DAT_1001d6d8 (*(double *)(((uintptr_t)pf_module_state + 0x42U)))
#undef _DAT_1001d730
#define _DAT_1001d730 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9aU)))
#undef _DAT_1001d740
#define _DAT_1001d740 (*(uint128 *)(((uintptr_t)pf_module_state + 0xaaU)))
#undef _DAT_1001d750
#define _DAT_1001d750 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbaU)))
#undef _DAT_1001d760
#define _DAT_1001d760 (*(uint128 *)(((uintptr_t)pf_module_state + 0xcaU)))
#undef _DAT_1001d7b8
#define _DAT_1001d7b8 (*(float *)(((uintptr_t)pf_module_state + 0x122U)))
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
    if (_DAT_1001d7b8 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1001d6a0;
        iVar1 = iVar1 + 1;
      } while (DAT_1001d6b8 < dVar2);
    }
    for (; dVar2 < DAT_1001d6c0; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1001d6c8 + dVar2) / (dVar2 + DAT_1001d6a8);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1001d730);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1001d740);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1001d750);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1001d760);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1001d6d0 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1001d6d8);
  }
  return DAT_1001d7b4;
}

#undef DAT_1001d6a0
#undef DAT_1001d6a8
#undef DAT_1001d6b8
#undef DAT_1001d6c0
#undef DAT_1001d6c8
#undef DAT_1001d6d0
#undef DAT_1001d6d8
#undef DAT_1001d730
#undef DAT_1001d740
#undef DAT_1001d750
#undef DAT_1001d760
#undef DAT_1001d7b4
#undef DAT_1001d7b8
#undef _DAT_1001d6d0
#undef _DAT_1001d6d8
#undef _DAT_1001d730
#undef _DAT_1001d740
#undef _DAT_1001d750
#undef _DAT_1001d760
#undef _DAT_1001d7b8

#undef DAT_1001d770
#define DAT_1001d770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ea0
 */

long recovered_10004ea0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1001d770 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1001d770

#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d6e0
#define DAT_1001d6e0 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1001d6e8
#define DAT_1001d6e8 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1001d6f0
#define DAT_1001d6f0 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_1001d6f8
#define DAT_1001d6f8 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_1001d700
#define DAT_1001d700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1001d780
#define DAT_1001d780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeaU)))
#undef _DAT_1001d700
#define _DAT_1001d700 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef _DAT_1001d780
#define _DAT_1001d780 (*(uint128 *)(((uintptr_t)pf_module_state + 0xeaU)))
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

  for (dVar1 = (double)param_1; DAT_1001d6e0 < dVar1; dVar1 = dVar1 + DAT_1001d6e8) {
  }
  for (; dVar1 < DAT_1001d6f0; dVar1 = dVar1 + DAT_1001d6f8) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1001d780);
  return (float)(((dVar2 / _DAT_1001d700 + DAT_1001d6a8 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1001d6a8
#undef DAT_1001d6e0
#undef DAT_1001d6e8
#undef DAT_1001d6f0
#undef DAT_1001d6f8
#undef DAT_1001d700
#undef DAT_1001d780
#undef _DAT_1001d700
#undef _DAT_1001d780

#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d6e0
#define DAT_1001d6e0 (*(double *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1001d6e8
#define DAT_1001d6e8 (*(double *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1001d6f0
#define DAT_1001d6f0 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef DAT_1001d6f8
#define DAT_1001d6f8 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_1001d708
#define DAT_1001d708 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_1001d790
#define DAT_1001d790 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef _DAT_1001d790
#define _DAT_1001d790 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004f80(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1001d6e0 < dVar1; dVar1 = dVar1 + DAT_1001d6e8) {
  }
  for (; dVar1 < DAT_1001d6f0; dVar1 = dVar1 + DAT_1001d6f8) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1001d790);
  return (float)((DAT_1001d708 * dVar1 + DAT_1001d6a8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1001d6a8
#undef DAT_1001d6e0
#undef DAT_1001d6e8
#undef DAT_1001d6f0
#undef DAT_1001d6f8
#undef DAT_1001d708
#undef DAT_1001d790
#undef _DAT_1001d790

#undef DAT_1001d7a0
#define DAT_1001d7a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10aU)))
#undef UNK_1001d7a4
#define UNK_1001d7a4 (*(uint *)(((uintptr_t)pf_module_state + 0x10eU)))
#undef _DAT_1001d7a0
#define _DAT_1001d7a0 (*(uint *)(((uintptr_t)pf_module_state + 0x10aU)))
#undef uRam000000001001d7a4
#define uRam000000001001d7a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10eU)))
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
  fVar2 = (float)(_DAT_1001d7a0 ^ (uint)fVar1);
  if ((float)(_DAT_1001d7a0 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001001d7a4 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1001d7a0
#undef UNK_1001d7a4
#undef _DAT_1001d7a0
#undef uRam000000001001d7a4

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


#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1001d718
#define DAT_1001d718 (*(double *)(((uintptr_t)pf_module_state + 0x82U)))
#undef DAT_1001d720
#define DAT_1001d720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8aU)))
#undef _DAT_1001d720
#define _DAT_1001d720 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8aU)))
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
    dVar11 = dVar11 * DAT_1001d718 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1001d6a8;
      do {
        dVar12 = dVar12 * DAT_1001d718 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1001d718;
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
                dVar11 = dVar11 * DAT_1001d6a0;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0 *
                         DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0 * DAT_1001d6a0;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1001d720);
  }
  return dVar11;
}

#undef DAT_1001d6a0
#undef DAT_1001d6a8
#undef DAT_1001d718
#undef DAT_1001d720
#undef _DAT_1001d720

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


#undef DAT_1001d718
#define DAT_1001d718 (*(double *)(((uintptr_t)pf_module_state + 0x82U)))
#undef DAT_1001d720
#define DAT_1001d720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8aU)))
#undef DAT_1001e162
#define DAT_1001e162 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaccU)))
#undef _DAT_1001d720
#define _DAT_1001d720 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8aU)))
#undef str_1001e16b
#define str_1001e16b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad5U)))
#undef str_1001e17c
#define str_1001e17c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae6U)))
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
  uVar8 = _DAT_1001d720;
  dVar7 = DAT_1001d718;
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
      abStack_7a[uVar19 + 2] = str_1001e17c[uVar24 % 10];
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
    pcVar23 = str_1001e17c;
    if (*param_3 == 0x58) {
      pcVar23 = str_1001e16b;
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
        abStack_7a[uVar14 + 2] = str_1001e17c[uVar24 % 10];
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
      abStack_7a[uVar14 + 2] = str_1001e17c[(uint)uVar24 & 0xf];
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
        pbVar21 = &DAT_1001e162;
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
      abStack_7a[uVar19 + 2] = str_1001e17c[uVar13 % 10];
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

#undef DAT_1001d718
#undef DAT_1001d720
#undef DAT_1001e162
#undef _DAT_1001d720
#undef str_1001e16b
#undef str_1001e17c
#undef abStack_7a

/* Recover the native variadic formatting boundary; Pooka's Free Software License. */
int recovered_100063f0(char *buffer,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_10005510(buffer,capacity,format,(void *)args);__builtin_va_end(args);return count;}


#undef DAT_10000000
#define DAT_10000000 (*(uint8_t *)(0x10000000U))
#undef DAT_10000008
#define DAT_10000008 (*(uint8_t *)(0x10000008U))
#undef DAT_10000010
#define DAT_10000010 (*(uint8_t *)(0x10000010U))
#undef DAT_10000018
#define DAT_10000018 (*(uint8_t *)(0x10000018U))
#undef DAT_1001f068
#define DAT_1001f068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19d2U)))
#undef DAT_1001f078
#define DAT_1001f078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19e2U)))
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
        if (DAT_1001f068 == 0) {
          puVar5 = (ulong *)&DAT_1001f068;
        }
        *puVar5 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1001f078 == (long *)0x0) {
          DAT_1001f078 = plVar2;
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
      if (DAT_1001f068 == 0) {
        plVar1 = &DAT_1001f068;
      }
      *plVar1 = 0x10000000;
      *param_3 = 0x10000000;
      if (DAT_1001f078 == (long *)0x0) {
        DAT_1001f078 = (long *)&DAT_10000000;
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
        if (DAT_1001f068 == 0) {
          puVar3 = &DAT_1001f068;
        }
        *puVar3 = plVar1;
        *param_3 = (ulong)plVar1;
        if (DAT_1001f078 == (long *)0x0) {
          DAT_1001f078 = plVar1;
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
#undef DAT_1001f068
#undef DAT_1001f078
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
#undef DAT_00280820
#define DAT_00280820 (*(uint8_t *)(0x280820U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef DAT_00280830
#define DAT_00280830 (*(uint8_t *)(0x280830U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280894
#define DAT_00280894 (*(uint8_t *)(0x280894U))
#undef DAT_00280898
#define DAT_00280898 (*(uint8_t *)(0x280898U))
#undef DAT_0028089c
#define DAT_0028089c (*(uint8_t *)(0x28089cU))
#undef DAT_002808f8
#define DAT_002808f8 (*(uint8_t *)(0x2808f8U))
#undef DAT_00280924
#define DAT_00280924 (*(uint8_t *)(0x280924U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_00280974
#define DAT_00280974 (*(uint8_t *)(0x280974U))
#undef DAT_002809fc
#define DAT_002809fc (*(uint8_t *)(0x2809fcU))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_1001d7c0
#define DAT_1001d7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_1001d7d0
#define DAT_1001d7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef DAT_1001e22d
#define DAT_1001e22d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb97U)))
#undef DAT_1001e238
#define DAT_1001e238 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba2U)))
#undef DAT_1001e2ce
#define DAT_1001e2ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc38U)))
#undef DAT_1001e32c
#define DAT_1001e32c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc96U)))
#undef DAT_1001e343
#define DAT_1001e343 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcadU)))
#undef DAT_1001e588
#define DAT_1001e588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xef2U)))
#undef DAT_1001e7c5
#define DAT_1001e7c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x112fU)))
#undef DAT_1001f080
#define DAT_1001f080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19eaU)))
#undef DAT_1001f084
#define DAT_1001f084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x19eeU)))
#undef DAT_1001f088
#define DAT_1001f088 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19f2U)))
#undef DAT_1001f090
#define DAT_1001f090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x19faU)))
#undef DAT_1001f0a0
#define DAT_1001f0a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a0aU)))
#undef DAT_1001f1a0
#define DAT_1001f1a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b0aU)))
#undef DAT_1001f1c0
#define DAT_1001f1c0 (*(int *)(((uintptr_t)pf_module_state + 0x1b2aU)))
#undef DAT_1001f914
#define DAT_1001f914 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x227eU)))
#undef DAT_1001fc34
#define DAT_1001fc34 (*(int *)(((uintptr_t)pf_module_state + 0x259eU)))
#undef DAT_1001fc38
#define DAT_1001fc38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25a2U)))
#undef DAT_1001fc39
#define DAT_1001fc39 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25a3U)))
#undef DAT_1001fe40
#define DAT_1001fe40 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x27aaU)))
#undef DAT_1001fe48
#define DAT_1001fe48 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27b2U)))
#undef DAT_1001fe4c
#define DAT_1001fe4c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27b6U)))
#undef DAT_1001fe58
#define DAT_1001fe58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27c2U)))
#undef DAT_1001fe60
#define DAT_1001fe60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27caU)))
#undef DAT_1001fe61
#define DAT_1001fe61 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27cbU)))
#undef DAT_1001fe62
#define DAT_1001fe62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27ccU)))
#undef DAT_1001fe63
#define DAT_1001fe63 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27cdU)))
#undef DAT_1001fe64
#define DAT_1001fe64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27ceU)))
#undef DAT_1001fe68
#define DAT_1001fe68 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d2U)))
#undef DAT_1001fe6c
#define DAT_1001fe6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27d6U)))
#undef DAT_1001fe78
#define DAT_1001fe78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27e2U)))
#undef DAT_1001fe80
#define DAT_1001fe80 (*(uint * *)(((uintptr_t)pf_module_state + 0x27eaU)))
#undef DAT_1001fe88
#define DAT_1001fe88 (*(int *)(((uintptr_t)pf_module_state + 0x27f2U)))
#undef DAT_1001ffb8
#define DAT_1001ffb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2922U)))
#undef DAT_1002070c
#define DAT_1002070c (*(int *)(((uintptr_t)pf_module_state + 0x3076U)))
#undef DAT_10020a2c
#define DAT_10020a2c (*(int *)(((uintptr_t)pf_module_state + 0x3396U)))
#undef DAT_10020a31
#define DAT_10020a31 (*(char *)(((uintptr_t)pf_module_state + 0x339bU)))
#undef DAT_10020c38
#define DAT_10020c38 (*(char * *)(((uintptr_t)pf_module_state + 0x35a2U)))
#undef DAT_10020c40
#define DAT_10020c40 (*(int *)(((uintptr_t)pf_module_state + 0x35aaU)))
#undef DAT_10020c44
#define DAT_10020c44 (*(int *)(((uintptr_t)pf_module_state + 0x35aeU)))
#undef DAT_10020c50
#define DAT_10020c50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35baU)))
#undef DAT_10020c58
#define DAT_10020c58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35c2U)))
#undef DAT_10020c5a
#define DAT_10020c5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35c4U)))
#undef DAT_10020c5b
#define DAT_10020c5b (*(char *)(((uintptr_t)pf_module_state + 0x35c5U)))
#undef DAT_10020c60
#define DAT_10020c60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35caU)))
#undef DAT_10020c70
#define DAT_10020c70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35daU)))
#undef DAT_10020c78
#define DAT_10020c78 (*(uint * *)(((uintptr_t)pf_module_state + 0x35e2U)))
#undef DAT_10020c80
#define DAT_10020c80 (*(int *)(((uintptr_t)pf_module_state + 0x35eaU)))
#undef DAT_10020db0
#define DAT_10020db0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x371aU)))
#undef DAT_10021504
#define DAT_10021504 (*(int *)(((uintptr_t)pf_module_state + 0x3e6eU)))
#undef DAT_10021824
#define DAT_10021824 (*(int *)(((uintptr_t)pf_module_state + 0x418eU)))
#undef DAT_10021829
#define DAT_10021829 (*(char *)(((uintptr_t)pf_module_state + 0x4193U)))
#undef DAT_10021a30
#define DAT_10021a30 (*(char * *)(((uintptr_t)pf_module_state + 0x439aU)))
#undef DAT_10021a38
#define DAT_10021a38 (*(int *)(((uintptr_t)pf_module_state + 0x43a2U)))
#undef DAT_10021a3c
#define DAT_10021a3c (*(int *)(((uintptr_t)pf_module_state + 0x43a6U)))
#undef DAT_10021a48
#define DAT_10021a48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43b2U)))
#undef DAT_10021a50
#define DAT_10021a50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43baU)))
#undef DAT_10021a52
#define DAT_10021a52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43bcU)))
#undef DAT_10021a53
#define DAT_10021a53 (*(char *)(((uintptr_t)pf_module_state + 0x43bdU)))
#undef DAT_10021a58
#define DAT_10021a58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43c2U)))
#undef DAT_10021a68
#define DAT_10021a68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43d2U)))
#undef DAT_10021a70
#define DAT_10021a70 (*(uint * *)(((uintptr_t)pf_module_state + 0x43daU)))
#undef DAT_10021a78
#define DAT_10021a78 (*(int *)(((uintptr_t)pf_module_state + 0x43e2U)))
#undef DAT_10021ba8
#define DAT_10021ba8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4512U)))
#undef DAT_100222fc
#define DAT_100222fc (*(int *)(((uintptr_t)pf_module_state + 0x4c66U)))
#undef DAT_1002261c
#define DAT_1002261c (*(int *)(((uintptr_t)pf_module_state + 0x4f86U)))
#undef DAT_10022621
#define DAT_10022621 (*(char *)(((uintptr_t)pf_module_state + 0x4f8bU)))
#undef DAT_10022828
#define DAT_10022828 (*(char * *)(((uintptr_t)pf_module_state + 0x5192U)))
#undef DAT_10022830
#define DAT_10022830 (*(int *)(((uintptr_t)pf_module_state + 0x519aU)))
#undef DAT_10022834
#define DAT_10022834 (*(int *)(((uintptr_t)pf_module_state + 0x519eU)))
#undef DAT_10022840
#define DAT_10022840 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51aaU)))
#undef DAT_10022848
#define DAT_10022848 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51b2U)))
#undef DAT_1002284a
#define DAT_1002284a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51b4U)))
#undef DAT_1002284b
#define DAT_1002284b (*(char *)(((uintptr_t)pf_module_state + 0x51b5U)))
#undef DAT_10022850
#define DAT_10022850 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51baU)))
#undef DAT_10022860
#define DAT_10022860 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x51caU)))
#undef DAT_10022862
#define DAT_10022862 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51ccU)))
#undef DAT_10022863
#define DAT_10022863 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51cdU)))
#undef DAT_100228a2
#define DAT_100228a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x520cU)))
#undef DAT_10022922
#define DAT_10022922 (*(byte *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10022924
#define DAT_10022924 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x528eU)))
#undef DAT_10022928
#define DAT_10022928 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5292U)))
#undef DAT_1002292c
#define DAT_1002292c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5296U)))
#undef DAT_10022930
#define DAT_10022930 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x529aU)))
#undef DAT_10022a30
#define DAT_10022a30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x539aU)))
#undef DAT_10022a3a
#define DAT_10022a3a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53a4U)))
#undef DAT_10022a70
#define DAT_10022a70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53daU)))
#undef DAT_10022a90
#define DAT_10022a90 (*(char *)(((uintptr_t)pf_module_state + 0x53faU)))
#undef DAT_10022a94
#define DAT_10022a94 (*(uint *)(((uintptr_t)pf_module_state + 0x53feU)))
#undef DAT_10022a98
#define DAT_10022a98 (*(char *)(((uintptr_t)pf_module_state + 0x5402U)))
#undef DAT_10022aa0
#define DAT_10022aa0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x540aU)))
#undef DAT_10022aa4
#define DAT_10022aa4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x540eU)))
#undef DAT_10022ab0
#define DAT_10022ab0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x541aU)))
#undef DAT_10022ab4
#define DAT_10022ab4 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x541eU)))
#undef DAT_10022abc
#define DAT_10022abc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5426U)))
#undef DAT_10022ad4
#define DAT_10022ad4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x543eU)))
#undef DAT_10022ae0
#define DAT_10022ae0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x544aU)))
#undef DAT_10022aec
#define DAT_10022aec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5456U)))
#undef DAT_10022af0
#define DAT_10022af0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x545aU)))
#undef DAT_10022af4
#define DAT_10022af4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545eU)))
#undef DAT_10022af6
#define DAT_10022af6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5460U)))
#undef DAT_10022afb
#define DAT_10022afb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5465U)))
#undef DAT_10022b04
#define DAT_10022b04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546eU)))
#undef DAT_10022b0c
#define DAT_10022b0c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5476U)))
#undef DAT_10022b18
#define DAT_10022b18 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5482U)))
#undef DAT_10022b90
#define DAT_10022b90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x54faU)))
#undef DAT_10022c08
#define DAT_10022c08 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5572U)))
#undef DAT_10022c80
#define DAT_10022c80 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x55eaU)))
#undef DAT_10022cf8
#define DAT_10022cf8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5662U)))
#undef DAT_10022d70
#define DAT_10022d70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56daU)))
#undef DAT_10022de8
#define DAT_10022de8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5752U)))
#undef DAT_10022e60
#define DAT_10022e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57caU)))
#undef DAT_10022ed8
#define DAT_10022ed8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5842U)))
#undef DAT_10022f50
#define DAT_10022f50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58baU)))
#undef DAT_10022fc8
#define DAT_10022fc8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5932U)))
#undef DAT_10023040
#define DAT_10023040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59aaU)))
#undef DAT_10023046
#define DAT_10023046 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59b0U)))
#undef DAT_10023047
#define DAT_10023047 (*(byte *)(((uintptr_t)pf_module_state + 0x59b1U)))
#undef DAT_10023048
#define DAT_10023048 (*(uint *)(((uintptr_t)pf_module_state + 0x59b2U)))
#undef DAT_100230bc
#define DAT_100230bc (*(int *)(((uintptr_t)pf_module_state + 0x5a26U)))
#undef DAT_100230c0
#define DAT_100230c0 (*(uint *)(((uintptr_t)pf_module_state + 0x5a2aU)))
#undef DAT_100230cc
#define DAT_100230cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a36U)))
#undef DAT_100230d0
#define DAT_100230d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a3aU)))
#undef DAT_100230d4
#define DAT_100230d4 (*(int *)(((uintptr_t)pf_module_state + 0x5a3eU)))
#undef DAT_100230d8
#define DAT_100230d8 (*(uint *)(((uintptr_t)pf_module_state + 0x5a42U)))
#undef DAT_100230dc
#define DAT_100230dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a46U)))
#undef DAT_100230e0
#define DAT_100230e0 (*(int *)(((uintptr_t)pf_module_state + 0x5a4aU)))
#undef DAT_100230e4
#define DAT_100230e4 (*(uint *)(((uintptr_t)pf_module_state + 0x5a4eU)))
#undef DAT_100230e8
#define DAT_100230e8 (*(uint *)(((uintptr_t)pf_module_state + 0x5a52U)))
#undef DAT_100240ec
#define DAT_100240ec (*(uint *)(((uintptr_t)pf_module_state + 0x6a56U)))
#undef DAT_100240f0
#define DAT_100240f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a5aU)))
#undef DAT_100240f1
#define DAT_100240f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a5bU)))
#undef DAT_100240f2
#define DAT_100240f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a5cU)))
#undef DAT_100240f3
#define DAT_100240f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a5dU)))
#undef DAT_100240f4
#define DAT_100240f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a5eU)))
#undef DAT_100240f5
#define DAT_100240f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a5fU)))
#undef DAT_100240f6
#define DAT_100240f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a60U)))
#undef DAT_100240f7
#define DAT_100240f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a61U)))
#undef DAT_100240f8
#define DAT_100240f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a62U)))
#undef DAT_100240f9
#define DAT_100240f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a63U)))
#undef DAT_100240fa
#define DAT_100240fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a64U)))
#undef DAT_100240fb
#define DAT_100240fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a65U)))
#undef DAT_100240fc
#define DAT_100240fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a66U)))
#undef DAT_100240fd
#define DAT_100240fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a67U)))
#undef DAT_100240fe
#define DAT_100240fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a68U)))
#undef DAT_100240ff
#define DAT_100240ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a69U)))
#undef DAT_10024100
#define DAT_10024100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a6aU)))
#undef DAT_10024101
#define DAT_10024101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a6bU)))
#undef DAT_10024102
#define DAT_10024102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a6cU)))
#undef DAT_10024103
#define DAT_10024103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a6dU)))
#undef DAT_10024104
#define DAT_10024104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a6eU)))
#undef DAT_10024105
#define DAT_10024105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a6fU)))
#undef DAT_10024106
#define DAT_10024106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a70U)))
#undef DAT_10024107
#define DAT_10024107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a71U)))
#undef DAT_10024108
#define DAT_10024108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a72U)))
#undef DAT_10024109
#define DAT_10024109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a73U)))
#undef DAT_1002410a
#define DAT_1002410a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a74U)))
#undef DAT_1002410b
#define DAT_1002410b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a75U)))
#undef DAT_1002410c
#define DAT_1002410c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a76U)))
#undef DAT_1002410d
#define DAT_1002410d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a77U)))
#undef DAT_1002410e
#define DAT_1002410e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a78U)))
#undef DAT_1002410f
#define DAT_1002410f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a79U)))
#undef DAT_10024110
#define DAT_10024110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a7aU)))
#undef DAT_1002412f
#define DAT_1002412f (*(byte *)(((uintptr_t)pf_module_state + 0x6a99U)))
#undef DAT_10024130
#define DAT_10024130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a9aU)))
#undef DAT_10024134
#define DAT_10024134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a9eU)))
#undef DAT_10024164
#define DAT_10024164 (*(uint *)(((uintptr_t)pf_module_state + 0x6aceU)))
#undef DAT_10024168
#define DAT_10024168 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ad2U)))
#undef DAT_100241a8
#define DAT_100241a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b12U)))
#undef DAT_100241a9
#define DAT_100241a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b13U)))
#undef DAT_100241aa
#define DAT_100241aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b14U)))
#undef DAT_100241ab
#define DAT_100241ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b15U)))
#undef DAT_100241ac
#define DAT_100241ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b16U)))
#undef DAT_100241ad
#define DAT_100241ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b17U)))
#undef DAT_100241ae
#define DAT_100241ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b18U)))
#undef DAT_100241af
#define DAT_100241af (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b19U)))
#undef DAT_100242a8
#define DAT_100242a8 (*(uint *)(((uintptr_t)pf_module_state + 0x6c12U)))
#undef DAT_100242b0
#define DAT_100242b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c1aU)))
#undef DAT_100242b8
#define DAT_100242b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c22U)))
#undef DAT_100242c0
#define DAT_100242c0 (*(char *)(((uintptr_t)pf_module_state + 0x6c2aU)))
#undef DAT_100242c4
#define DAT_100242c4 (*(uint *)(((uintptr_t)pf_module_state + 0x6c2eU)))
#undef UNK_1001d7c8
#define UNK_1001d7c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef UNK_1001d7d8
#define UNK_1001d7d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280820
#define _DAT_00280820 (*(uint *)(0x280820U))
#undef _DAT_00280828
#define _DAT_00280828 (*(uint *)(0x280828U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(uint *)(0x28082cU))
#undef _DAT_00280830
#define _DAT_00280830 (*(uint *)(0x280830U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
#undef _DAT_00280894
#define _DAT_00280894 (*(uint *)(0x280894U))
#undef _DAT_00280898
#define _DAT_00280898 (*(uint *)(0x280898U))
#undef _DAT_0028089c
#define _DAT_0028089c (*(uint *)(0x28089cU))
#undef _DAT_002808f8
#define _DAT_002808f8 (*(uint *)(0x2808f8U))
#undef _DAT_00280924
#define _DAT_00280924 (*(uint *)(0x280924U))
#undef _DAT_00280968
#define _DAT_00280968 (*(uint *)(0x280968U))
#undef _DAT_00280974
#define _DAT_00280974 (*(uint *)(0x280974U))
#undef _DAT_002809fc
#define _DAT_002809fc (*(uint *)(0x2809fcU))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#undef _DAT_1001d7c0
#define _DAT_1001d7c0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef _DAT_1001d7d0
#define _DAT_1001d7d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef _DAT_1001fe58
#define _DAT_1001fe58 (*(char * *)(((uintptr_t)pf_module_state + 0x27c2U)))
#undef _DAT_1001fe60
#define _DAT_1001fe60 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x27caU)))
#undef _DAT_1001ffb8
#define _DAT_1001ffb8 (*(int *)(((uintptr_t)pf_module_state + 0x2922U)))
#undef _DAT_10020c50
#define _DAT_10020c50 (*(char * *)(((uintptr_t)pf_module_state + 0x35baU)))
#undef _DAT_10020c58
#define _DAT_10020c58 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x35c2U)))
#undef _DAT_10020c60
#define _DAT_10020c60 (*(uint *)(((uintptr_t)pf_module_state + 0x35caU)))
#undef _DAT_10020db0
#define _DAT_10020db0 (*(int *)(((uintptr_t)pf_module_state + 0x371aU)))
#undef _DAT_10021a48
#define _DAT_10021a48 (*(char * *)(((uintptr_t)pf_module_state + 0x43b2U)))
#undef _DAT_10021a50
#define _DAT_10021a50 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x43baU)))
#undef _DAT_10021a58
#define _DAT_10021a58 (*(uint *)(((uintptr_t)pf_module_state + 0x43c2U)))
#undef _DAT_10021ba8
#define _DAT_10021ba8 (*(int *)(((uintptr_t)pf_module_state + 0x4512U)))
#undef _DAT_10022840
#define _DAT_10022840 (*(char * *)(((uintptr_t)pf_module_state + 0x51aaU)))
#undef _DAT_10022848
#define _DAT_10022848 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x51b2U)))
#undef _DAT_10022850
#define _DAT_10022850 (*(uint *)(((uintptr_t)pf_module_state + 0x51baU)))
#undef _DAT_100230cc
#define _DAT_100230cc (*(int *)(((uintptr_t)pf_module_state + 0x5a36U)))
#undef _DAT_100230d0
#define _DAT_100230d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a3aU)))
#undef _DAT_100230dc
#define _DAT_100230dc (*(int *)(((uintptr_t)pf_module_state + 0x5a46U)))
#undef _DAT_100242b0
#define _DAT_100242b0 (*(uint *)(((uintptr_t)pf_module_state + 0x6c1aU)))
#undef _DAT_100242b8
#define _DAT_100242b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6c22U)))
#undef str_1001db2e
#define str_1001db2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x498U)))
#undef str_1001dde0
#define str_1001dde0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74aU)))
#undef str_1001e190
#define str_1001e190 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xafaU)))
#undef str_1001e1a4
#define str_1001e1a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0eU)))
#undef str_1001e1d3
#define str_1001e1d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3dU)))
#undef str_1001e1fa
#define str_1001e1fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb64U)))
#undef str_1001e22f
#define str_1001e22f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb99U)))
#undef str_1001e23c
#define str_1001e23c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba6U)))
#undef str_1001e267
#define str_1001e267 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd1U)))
#undef str_1001e26e
#define str_1001e26e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd8U)))
#undef str_1001e2ab
#define str_1001e2ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc15U)))
#undef str_1001e2b9
#define str_1001e2b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc23U)))
#undef str_1001e2d1
#define str_1001e2d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3bU)))
#undef str_1001e2e1
#define str_1001e2e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4bU)))
#undef str_1001e301
#define str_1001e301 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6bU)))
#undef str_1001e331
#define str_1001e331 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9bU)))
#undef str_1001e33a
#define str_1001e33a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xca4U)))
#undef str_1001e348
#define str_1001e348 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb2U)))
#undef str_1001e350
#define str_1001e350 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbaU)))
#undef str_1001e358
#define str_1001e358 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc2U)))
#undef str_1001e360
#define str_1001e360 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xccaU)))
#undef str_1001e367
#define str_1001e367 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd1U)))
#undef str_1001e370
#define str_1001e370 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcdaU)))
#undef str_1001e37b
#define str_1001e37b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce5U)))
#undef str_1001e384
#define str_1001e384 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceeU)))
#undef str_1001e391
#define str_1001e391 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcfbU)))
#undef str_1001e399
#define str_1001e399 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd03U)))
#undef str_1001e3cd
#define str_1001e3cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd37U)))
#undef str_1001e404
#define str_1001e404 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd6eU)))
#undef str_1001e446
#define str_1001e446 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb0U)))
#undef str_1001e48f
#define str_1001e48f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdf9U)))
#undef str_1001e4b0
#define str_1001e4b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe1aU)))
#undef str_1001e4cd
#define str_1001e4cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe37U)))
#undef str_1001e4e8
#define str_1001e4e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe52U)))
#undef str_1001e511
#define str_1001e511 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe7bU)))
#undef str_1001e535
#define str_1001e535 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe9fU)))
#undef str_1001e565
#define str_1001e565 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xecfU)))
#undef str_1001e590
#define str_1001e590 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xefaU)))
#undef str_1001e5a1
#define str_1001e5a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0bU)))
#undef str_1001e5b0
#define str_1001e5b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf1aU)))
#undef str_1001e5f1
#define str_1001e5f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf5bU)))
#undef str_1001e616
#define str_1001e616 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf80U)))
#undef str_1001e634
#define str_1001e634 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf9eU)))
#undef str_1001e649
#define str_1001e649 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfb3U)))
#undef str_1001e677
#define str_1001e677 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfe1U)))
#undef str_1001e6eb
#define str_1001e6eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1055U)))
#undef str_1001e703
#define str_1001e703 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x106dU)))
#undef str_1001e724
#define str_1001e724 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x108eU)))
#undef str_1001e72a
#define str_1001e72a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1094U)))
#undef str_1001e73e
#define str_1001e73e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10a8U)))
#undef str_1001e764
#define str_1001e764 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10ceU)))
#undef str_1001e774
#define str_1001e774 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10deU)))
#undef str_1001e78b
#define str_1001e78b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10f5U)))
#undef str_1001e799
#define str_1001e799 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1103U)))
#undef str_1001e7a8
#define str_1001e7a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1112U)))
#undef str_1001e7ca
#define str_1001e7ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1134U)))
#undef str_1001e7d3
#define str_1001e7d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113dU)))
#undef str_1001e7dc
#define str_1001e7dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1146U)))
#undef str_1001e7f9
#define str_1001e7f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1163U)))
#undef str_1001ec8b
#define str_1001ec8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15f5U)))
#undef str_1001ec97
#define str_1001ec97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1601U)))
#undef str_1001ecb6
#define str_1001ecb6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1620U)))
#undef str_1001ecbe
#define str_1001ecbe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1628U)))
#undef str_1001ecca
#define str_1001ecca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1634U)))
#undef uRam000000001001d7c8
#define uRam000000001001d7c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef uRam000000001001d7d8
#define uRam000000001001d7d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x142U)))
#define local_498 (*(ulong (*)[147])(pf_stack_frame + 24))
#define local_418 (*(uint (*)[262])(pf_stack_frame + 152))
#define local_398 (*(char (*)[920])(pf_stack_frame + 280))
#define local_378 (*(undefined8 *)(pf_stack_frame + 312))
#define local_360 (*(ulong *)(pf_stack_frame + 336))
#define local_354 (*(uint *)(pf_stack_frame + 348))
#define local_350 (*(uint *)(pf_stack_frame + 352))
#define local_348 (*(undefined8 *)(pf_stack_frame + 360))
#define local_338 (*(byte * *)(pf_stack_frame + 376))
#define local_328 (*(undefined8 *)(pf_stack_frame + 392))
#define local_320 (*(uint5 (*)[3])(pf_stack_frame + 400))
#define local_308 (*(ulong *)(pf_stack_frame + 424))
#define local_300 (*(undefined8 (*)[96])(pf_stack_frame + 432))
#define local_2e0 (*(uint *)(pf_stack_frame + 464))
#define local_2c8 (*(char (*)[712])(pf_stack_frame + 488))
#define local_280 (*(int *)(pf_stack_frame + 560))
#define local_248 (*(undefined8 (*)[73])(pf_stack_frame + 616))
#define local_148 (*(undefined8 *)(pf_stack_frame + 872))
#define local_140 (*(float *)(pf_stack_frame + 880))
#define local_13c (*(undefined1 *)(pf_stack_frame + 884))
#define local_13b (*(undefined1 *)(pf_stack_frame + 885))
#define local_13a (*(undefined1 *)(pf_stack_frame + 886))
#define local_139 (*(undefined1 *)(pf_stack_frame + 887))
#define local_138 (*(byte * *)(pf_stack_frame + 888))
#define local_128 (*(undefined4 *)(pf_stack_frame + 904))
#define local_bc (*(int *)(pf_stack_frame + 1012))
#define local_b8 (*(ulong *)(pf_stack_frame + 1016))
#define local_ac (*(uint *)(pf_stack_frame + 1028))
#define local_a8 (*(long *)(pf_stack_frame + 1032))
#define local_a0 (*(char * *)(pf_stack_frame + 1040))
#define local_98 (*(byte *)(pf_stack_frame + 1048))
#define local_97 (*(undefined1 *)(pf_stack_frame + 1049))
#define local_96 (*(undefined1 *)(pf_stack_frame + 1050))
#define local_95 (*(undefined1 *)(pf_stack_frame + 1051))
#define local_94 (*(undefined1 *)(pf_stack_frame + 1052))
#define local_93 (*(undefined1 *)(pf_stack_frame + 1053))
#define local_92 (*(undefined1 *)(pf_stack_frame + 1054))
#define local_91 (*(undefined1 *)(pf_stack_frame + 1055))
#define local_90 (*(undefined1 *)(pf_stack_frame + 1056))
#define local_8f (*(undefined1 *)(pf_stack_frame + 1057))
#define local_8e (*(undefined1 *)(pf_stack_frame + 1058))
#define local_8d (*(undefined1 *)(pf_stack_frame + 1059))
#define local_8c (*(undefined1 *)(pf_stack_frame + 1060))
#define local_8b (*(undefined1 *)(pf_stack_frame + 1061))
#define local_8a (*(undefined1 *)(pf_stack_frame + 1062))
#define local_89 (*(undefined1 *)(pf_stack_frame + 1063))
#define local_88 (*(undefined1 *)(pf_stack_frame + 1064))
#define local_87 (*(undefined1 *)(pf_stack_frame + 1065))
#define local_86 (*(undefined1 *)(pf_stack_frame + 1066))
#define local_85 (*(undefined1 *)(pf_stack_frame + 1067))
#define local_84 (*(undefined1 *)(pf_stack_frame + 1068))
#define local_83 (*(undefined1 *)(pf_stack_frame + 1069))
#define local_82 (*(undefined1 *)(pf_stack_frame + 1070))
#define local_81 (*(undefined1 *)(pf_stack_frame + 1071))
#define local_80 (*(undefined1 *)(pf_stack_frame + 1072))
#define local_7f (*(undefined1 *)(pf_stack_frame + 1073))
#define local_7e (*(undefined1 *)(pf_stack_frame + 1074))
#define local_7d (*(undefined1 *)(pf_stack_frame + 1075))
#define local_7c (*(undefined1 *)(pf_stack_frame + 1076))
#define local_7b (*(undefined1 *)(pf_stack_frame + 1077))
#define local_7a (*(undefined1 *)(pf_stack_frame + 1078))
#define local_79 (*(byte *)(pf_stack_frame + 1079))
#define local_78 (*(undefined1 *)(pf_stack_frame + 1080))
#define local_77 (*(undefined1 *)(pf_stack_frame + 1081))
#define local_76 (*(undefined1 *)(pf_stack_frame + 1082))
#define local_75 (*(undefined1 *)(pf_stack_frame + 1083))
#define local_74 (*(undefined1 *)(pf_stack_frame + 1084))
#define local_73 (*(undefined1 *)(pf_stack_frame + 1085))
#define local_72 (*(undefined1 *)(pf_stack_frame + 1086))
#define local_71 (*(undefined1 *)(pf_stack_frame + 1087))
#define local_70 (*(undefined1 *)(pf_stack_frame + 1088))
#define local_6f (*(undefined1 *)(pf_stack_frame + 1089))
#define local_6e (*(undefined1 *)(pf_stack_frame + 1090))
#define local_6d (*(undefined1 *)(pf_stack_frame + 1091))
#define local_6c (*(undefined1 *)(pf_stack_frame + 1092))
#define local_6b (*(undefined1 *)(pf_stack_frame + 1093))
#define local_6a (*(undefined1 *)(pf_stack_frame + 1094))
#define local_69 (*(undefined1 *)(pf_stack_frame + 1095))
#define local_68 (*(undefined1 *)(pf_stack_frame + 1096))
#define local_67 (*(undefined1 *)(pf_stack_frame + 1097))
#define local_66 (*(undefined1 *)(pf_stack_frame + 1098))
#define local_65 (*(undefined1 *)(pf_stack_frame + 1099))
#define local_64 (*(undefined1 *)(pf_stack_frame + 1100))
#define local_63 (*(undefined1 *)(pf_stack_frame + 1101))
#define local_62 (*(undefined1 *)(pf_stack_frame + 1102))
#define local_61 (*(undefined1 *)(pf_stack_frame + 1103))
#define local_60 (*(undefined1 *)(pf_stack_frame + 1104))
#define local_5f (*(undefined1 *)(pf_stack_frame + 1105))
#define local_5e (*(undefined1 *)(pf_stack_frame + 1106))
#define local_5d (*(undefined1 *)(pf_stack_frame + 1107))
#define local_5c (*(undefined1 *)(pf_stack_frame + 1108))
#define local_5b (*(undefined1 *)(pf_stack_frame + 1109))
#define local_5a (*(undefined1 *)(pf_stack_frame + 1110))
#define local_59 (*(undefined1 *)(pf_stack_frame + 1111))
#define local_58 (*(uint * *)(pf_stack_frame + 1112))
#define local_49 (*(char *)(pf_stack_frame + 1127))
#define local_48 (*(ulong *)(pf_stack_frame + 1128))
#define local_39 (*(byte *)(pf_stack_frame + 1143))
#define local_38 (*(char * *)(pf_stack_frame + 1144))
#define uStack_370 (*(undefined8 *)(pf_stack_frame + 320))
#define acStack_34c (*(char (*)[844])(pf_stack_frame + 356))
#define uStack_340 (*(undefined8 *)(pf_stack_frame + 368))
#define uStack_330 (*(undefined8 *)(pf_stack_frame + 384))
#define uStack_130 (*(undefined8 *)(pf_stack_frame + 896))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006700
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10006700(uint argc,char **argv)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte bVar16;
  char *pcVar17;
  ulong *puVar18;
  ulong uVar19;
  char *pcVar20;
  char *pcVar21;
  undefined8 *in_R8;
  char *pcVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  uint *puVar26;
  undefined1 *arg0;
  uint uVar27;
  undefined4 *puVar28;
  uint uVar29;
  bool bVar30;
  byte bVar31;
  undefined4 extraout_XMM0_Da = 0;
  undefined4 extraout_XMM0_Da_00 = 0;
  undefined4 extraout_XMM0_Da_01 = 0;
  undefined4 extraout_XMM0_Da_02 = 0;
  undefined4 extraout_XMM0_Da_03 = 0;
  undefined4 extraout_XMM0_Da_04 = 0;
  undefined4 extraout_XMM0_Da_05 = 0;
  undefined4 extraout_XMM0_Da_06 = 0;
  undefined4 extraout_XMM0_Da_07 = 0;
  undefined4 extraout_XMM0_Da_08 = 0;
  undefined4 extraout_XMM0_Da_09 = 0;
  undefined4 extraout_XMM0_Da_10 = 0;
  undefined4 extraout_XMM0_Da_11 = 0;
  undefined4 extraout_XMM0_Da_12 = 0;
  undefined4 extraout_XMM0_Da_13 = 0;
  undefined4 extraout_XMM0_Da_14 = 0;
  undefined4 extraout_XMM0_Da_15 = 0;
  undefined4 extraout_XMM0_Da_16 = 0;
  undefined4 extraout_XMM0_Da_17 = 0;
  undefined4 extraout_XMM0_Da_18 = 0;
  undefined4 extraout_XMM0_Da_19 = 0;
  undefined4 extraout_XMM0_Da_20 = 0;
  undefined4 extraout_XMM0_Da_21 = 0;
  undefined4 extraout_XMM0_Da_22 = 0;
  undefined4 extraout_XMM0_Db = 0;
  undefined4 extraout_XMM0_Db_00 = 0;
  undefined4 extraout_XMM0_Db_01 = 0;
  undefined4 extraout_XMM0_Db_02 = 0;
  undefined4 extraout_XMM0_Db_03 = 0;
  undefined4 extraout_XMM0_Db_04 = 0;
  undefined4 extraout_XMM0_Db_05 = 0;
  undefined4 extraout_XMM0_Db_06 = 0;
  undefined4 extraout_XMM0_Db_07 = 0;
  undefined4 extraout_XMM0_Db_08 = 0;
  undefined4 extraout_XMM0_Db_09 = 0;
  undefined4 extraout_XMM0_Db_10 = 0;
  undefined4 extraout_XMM0_Db_11 = 0;
  undefined4 extraout_XMM0_Db_12 = 0;
  undefined4 extraout_XMM0_Db_13 = 0;
  undefined4 extraout_XMM0_Db_14 = 0;
  undefined4 extraout_XMM0_Db_15 = 0;
  undefined4 extraout_XMM0_Db_16 = 0;
  undefined4 uVar32;
  undefined4 extraout_XMM0_Db_17 = 0;
  undefined4 extraout_XMM0_Db_18 = 0;
  undefined4 extraout_XMM0_Db_19 = 0;
  undefined4 extraout_XMM0_Db_20 = 0;
  undefined4 extraout_XMM0_Db_21 = 0;
  undefined4 extraout_XMM0_Db_22 = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  bVar30 = true;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x23 < _DAT_00280808 && ((code *)(ulong)_DAT_00280820 != (code *)0x0)))) {
    iVar6 = (*(code *)(ulong)_DAT_00280820)(0xb1a2c,0xd8e6f2,0x1f);
    bVar30 = iVar6 == 0;
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280828)(str_1001e190);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280828)(&DAT_1001e2ce);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280828)(str_1001e1a4);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280828)(&DAT_1001e2ce);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280828)(&DAT_1001e588);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280828)(&DAT_1001e2ce);
  }
  local_49 = bVar30;
  recovered_10002980((byte *)&local_348,0,0x18);
  local_348 = (undefined8 *)CONCAT44(PF_PART4(local_348, 4),0x18);
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280968)(&local_348);
  }
  recovered_1000b560((long)&local_348,0x18);
  iVar6 = 0x40;
  do {
    recovered_10002980((byte *)&local_348,0,0x18);
    local_348 = (undefined8 *)CONCAT44(PF_PART4(local_348, 4),0x18);
    if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
        ((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)))) &&
       (iVar7 = (*(code *)(ulong)_DAT_00280968)(&local_348), iVar7 != 0)) {
      uVar29 = (uint)local_338;
    }
    else {
      uVar29 = 0;
    }
    local_348 = (undefined8 *)(ulong)uVar29;
    recovered_1000b560((long)&local_348,8);
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x9f < _DAT_00280808 && ((code *)(ulong)_DAT_0028089c != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_0028089c)();
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  recovered_10002980((byte *)&local_348,0,0xa8);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0xfb < _DAT_00280808 && ((code *)(ulong)_DAT_002808f8 != (code *)0x0)) &&
      (iVar6 = (*(code *)(ulong)_DAT_002808f8)(&local_348), iVar6 != 0)))) {
    recovered_1000b560((long)&local_348,0xa8);
  }
  recovered_10002980((byte *)&local_348,0,0x18);
  PF_PART4(local_348, 0) = 0x18;
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280968)(&local_348);
  }
  recovered_1000b560((long)&local_348,0x18);
  uVar10 = 0;
  recovered_10002980((byte *)&local_348,0,0x18);
  local_348 = (undefined8 *)CONCAT44(PF_PART4(local_348, 4),0x18);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)))) {
    iVar6 = (*(code *)(ulong)_DAT_00280968)(&local_348);
    if (iVar6 != 0) {
      uVar10 = (ulong)local_338 & 0xffffffff;
    }
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x177 < _DAT_00280808 && ((code *)(ulong)_DAT_00280974 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280974)(250000);
  }
  uVar29 = 0;
  recovered_10002980((byte *)&local_348,0,0x18);
  local_348 = (undefined8 *)CONCAT44(PF_PART4(local_348, 4),0x18);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (0x16b < _DAT_00280808)) {
    if ((code *)(ulong)_DAT_00280968 != (code *)0x0) {
      iVar6 = (*(code *)(ulong)_DAT_00280968)(&local_348);
      if (iVar6 != 0) {
        uVar29 = (uint)local_338;
      }
    }
  }
  uVar8 = (uVar29 - (int)uVar10) * 4;
  DAT_100242a8 = 0x12;
  if (uVar8 != 0) {
    DAT_100242a8 = uVar8;
  }
  _DAT_100242b8 = 0;
  local_348 = (undefined8 *)((ulong)uVar29 | uVar10 << 0x20);
  _DAT_100242b0 = uVar29;
  recovered_1000b560((long)&local_348,8);
  recovered_10002980((byte *)&DAT_10022860,0,0x23c);
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x9b < _DAT_00280808 && ((code *)(ulong)_DAT_00280898 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280898)(str_1001e3cd,0,0);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x9b < _DAT_00280808 && ((code *)(ulong)_DAT_00280898 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280898)(str_1001e404,0,0);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x9b < _DAT_00280808 && ((code *)(ulong)_DAT_00280898 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280898)(str_1001e446,0,0);
  }
  if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
      ((0x1ff < _DAT_00280808 && ((code *)(ulong)_DAT_002809fc != (code *)0x0)))) &&
     (iVar6 = (*(code *)(ulong)_DAT_002809fc)(str_1001e2d1), iVar6 != 0)) {
    pcVar21 = str_1001e2e1;
  }
  else {
    pcVar21 = str_1001e301;
  }
  recovered_1000aa30(pcVar21,str_1001e2d1);
  local_348 = (undefined8 *)0x0;
  uStack_340 = (ulong)PF_PART4(uStack_340, 4) << 0x20;
  local_338 = (byte *)0x0;
  uStack_330 = 0;
  local_328 = (ulong)PF_PART4(local_328, 4) << 0x20;
  uVar29 = 0x16;
  if (((_DAT_00280800 == 0x50414d57) && (uVar29 = 0x16, _DAT_00280804 != 0)) &&
     ((uVar29 = 0x16, 0xb < _DAT_00280808 && (uVar29 = 0x16, 0x207 < _DAT_00280808)))) {
    uVar29 = 0x16;
    if ((code *)(ulong)_DAT_00280a04 != (code *)0x0) {
      iVar6 = (*(code *)(ulong)_DAT_00280a04)(&DAT_1001e32c,&local_348);
      uVar29 = 0x16;
      if (iVar6 != 0) {
        if ((uint)local_348 == 5) {
          uVar29 = (uint)(PF_PART4(local_348, 4) != 0);
        }
        else if ((uint)local_348 == 2) {
          uVar29 = (uint)(float)uStack_340;
        }
        else {
          uVar29 = 0x16;
          if ((uint)local_348 == 1) {
            uVar29 = PF_PART4(local_348, 4);
          }
        }
      }
    }
  }
  uVar8 = 0x16;
  if (uVar29 - 1 < 0xffff) {
    uVar8 = uVar29;
  }
  DAT_10022860 = (ushort)uVar8;
  recovered_1000b960(str_1001e331,&DAT_10022862,0x40,&DAT_1001e22d);
  recovered_1000b960(str_1001e33a,&DAT_100228a2,0x80,&DAT_1001e22d);
  local_348 = (undefined8 *)0x0;
  uStack_340 = uStack_340 & 0xffffffff00000000;
  local_338 = (byte *)0x0;
  uStack_330 = 0;
  local_328 = local_328 & 0xffffffff00000000;
  bVar30 = true;
  if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
      ((0x207 < _DAT_00280808 && ((code *)(ulong)_DAT_00280a04 != (code *)0x0)))) &&
     (iVar6 = (*(code *)(ulong)_DAT_00280a04)(&DAT_1001e343,&local_348), iVar6 != 0)) {
    if (((uint)local_348 & 0xfffffffb) == 1) {
      bVar30 = PF_PART4(local_348, 4) != 0;
    }
    else if (local_338 != (byte *)0x0 && (uint)local_348 == 3) {
      uVar29 = *local_338 - 0x54;
      if (((0x25 < uVar29) || ((0x2100000021U >> ((ulong)uVar29 & 0x3f) & 1) == 0)) &&
         (*local_338 != 0x31)) {
        bVar30 = false;
      }
    }
  }
  DAT_10022922 = bVar30;
  recovered_1000bbb0(str_1001e348,&DAT_10022924);
  recovered_1000bbb0(str_1001e350,&DAT_10022928);
  recovered_1000bbb0(str_1001e358,&DAT_1002292c);
  recovered_1000b960(str_1001e360,&DAT_10022930,0x100,&DAT_1001e588);
  recovered_1000b960(str_1001e367,&DAT_10022a30,0x40,str_1001e370);
  recovered_1000b960(str_1001e37b,(undefined1 *)&local_348,0x100,&DAT_1001e588);
  uVar10 = recovered_10003720((long)&local_348);
  if (0x3f < uVar10) {
    lVar11 = 0;
    do {
      cVar5 = acStack_34c[lVar11 * 2 + 4];
      iVar6 = (int)cVar5;
      if ((byte)(cVar5 - 0x30U) < 10) {
        iVar6 = iVar6 + -0x30;
      }
      else if ((byte)(cVar5 + 0x9fU) < 6) {
        iVar6 = iVar6 + -0x57;
      }
      else {
        if (5 < (byte)(cVar5 + 0xbfU)) goto LAB_100071f2;
        iVar6 = iVar6 + -0x37;
      }
      if (iVar6 < 0) goto LAB_100071f2;
      cVar5 = acStack_34c[lVar11 * 2 + 5];
      iVar7 = (int)cVar5;
      if ((byte)(cVar5 - 0x30U) < 10) {
        iVar7 = iVar7 + -0x30;
      }
      else if ((byte)(cVar5 + 0x9fU) < 6) {
        iVar7 = iVar7 + -0x57;
      }
      else {
        if (5 < (byte)(cVar5 + 0xbfU)) goto LAB_100071f2;
        iVar7 = iVar7 + -0x37;
      }
      if (iVar7 < 0) goto LAB_100071f2;
      *(byte *)((long)local_248 + lVar11 + 0x100) = (byte)iVar7 | (byte)(iVar6 << 4);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x20);
    if (((local_308 & 0xff) < 0x21) && ((0x100002601U >> (local_308 & 0x3f) & 1) != 0)) {
      recovered_10001c80((undefined8 *)&DAT_10022a70,&local_148,0x20,0x100002601,in_R8);
      DAT_10022a90 = '\x01';
    }
LAB_100071f2:
    local_13c = 0;
    local_13b = 0;
    local_13a = 0;
    local_139 = 0;
  }
  local_148 = 0;
  local_140 = 0.0;
  local_138 = (byte *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  uVar10 = 4;
  if ((((_DAT_00280800 == 0x50414d57) && (uVar10 = 4, _DAT_00280804 != 0)) &&
      (uVar10 = 4, 0xb < _DAT_00280808)) && (uVar10 = 4, 0x207 < _DAT_00280808)) {
    uVar10 = 4;
    if ((code *)(ulong)_DAT_00280a04 != (code *)0x0) {
      iVar6 = (*(code *)(ulong)_DAT_00280a04)(str_1001e384);
      uVar10 = 4;
      if (iVar6 != 0) {
        if ((uint)local_148 == 5) {
          uVar10 = (ulong)(PF_PART4(local_148, 4) != 0);
        }
        else if ((uint)local_148 == 2) {
          uVar10 = (ulong)(uint)(int)local_140;
        }
        else {
          uVar10 = 4;
          if ((uint)local_148 == 1) {
            uVar10 = (ulong)PF_PART4(local_148, 4);
          }
        }
      }
    }
  }
  DAT_10022a94 = 4;
  if ((uint)uVar10 - 1 < 4) {
    DAT_10022a94 = (uint)uVar10;
  }
  local_148 = 0;
  local_140 = 0.0;
  local_138 = (byte *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
      ((0xb < _DAT_00280808 &&
       ((0x207 < _DAT_00280808 && ((code *)(ulong)_DAT_00280a04 != (code *)0x0)))))) &&
     (iVar6 = (*(code *)(ulong)_DAT_00280a04)(str_1001e391), iVar6 != 0)) {
    if (((uint)local_148 & 0xfffffffb) != 1) {
      uVar10 = (ulong)CONCAT31((int3)(((uint)local_148 & 0xfffffffb) >> 8),(uint)local_148 == 3);
      if (local_138 != (byte *)0x0 && (uint)local_148 == 3) {
        bVar16 = *local_138;
        uVar10 = (ulong)bVar16;
        DAT_10022a98 = true;
        if (((bVar16 - 0x54 < 0x26) && ((0x2100000021U >> ((ulong)(bVar16 - 0x54) & 0x3f) & 1) != 0)
            ) || (bVar16 == 0x31)) goto LAB_100074a0;
      }
      goto LAB_1000749e;
    }
    DAT_10022a98 = PF_PART4(local_148, 4) != 0;
    uVar10 = 1;
  }
  else {
LAB_1000749e:
    DAT_10022a98 = false;
  }
LAB_100074a0:
  if (DAT_10022862 == '\0') {
    recovered_10001c80((undefined8 *)&DAT_10022862,(undefined8 *)&DAT_1001e22d,1,uVar10,in_R8);
    DAT_10022863 = 0;
  }
  if (DAT_10022a30 == '\0') {
    recovered_10001c80((undefined8 *)&DAT_10022a30,(undefined8 *)str_1001e370,10,uVar10,in_R8);
    DAT_10022a3a = 0;
  }
  bVar16 = DAT_10022924 != 0 | DAT_10022922;
  pcVar21 = (char *)CONCAT71((int7)(uVar10 >> 8),bVar16);
  if (bVar16 == 0) {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280828)(str_1001e399);
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280828)(&DAT_1001e2ce);
    }
    DAT_10022922 = 1;
  }
  if ((DAT_10022928 == 0) && (DAT_10022924 != 0)) {
    DAT_10022928 = 0xffffff00;
  }
  if (DAT_10022a90 == '\x01') {
    recovered_10001c80((undefined8 *)&DAT_100240f0,(undefined8 *)&DAT_10022a70,0x20,pcVar21,in_R8);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280828)(str_1001e48f);
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280828)(&DAT_1001e2ce);
    }
    recovered_10002980((byte *)&local_354,0,0xc);
  }
  else {
    recovered_10002980((byte *)&local_354,0,0xc);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)))) {
      iVar6 = (*(code *)(ulong)_DAT_00280834)(str_1001e4b0,&local_354);
      if ((0x3f < local_350 && local_354 != 0) && iVar6 != 0) {
        uVar10 = 0x4f;
        if (local_350 < 0x4f) {
          uVar10 = (ulong)local_350;
        }
        recovered_10001c80(&local_348,(undefined8 *)(ulong)local_354,uVar10,(ulong)local_354,in_R8);
        acStack_34c[uVar10 + 4] = '\0';
        lVar11 = 0;
        pcVar21 = &DAT_100240f0;
        do {
          cVar5 = acStack_34c[lVar11 * 2 + 4];
          iVar6 = (int)cVar5;
          if ((byte)(cVar5 - 0x30U) < 10) {
            iVar6 = iVar6 + -0x30;
          }
          else if ((byte)(cVar5 + 0x9fU) < 6) {
            iVar6 = iVar6 + -0x57;
          }
          else {
            if (5 < (byte)(cVar5 + 0xbfU)) goto LAB_10007820;
            iVar6 = iVar6 + -0x37;
          }
          if (iVar6 < 0) goto LAB_10007820;
          cVar5 = acStack_34c[lVar11 * 2 + 5];
          iVar7 = (int)cVar5;
          if ((byte)(cVar5 - 0x30U) < 10) {
            iVar7 = iVar7 + -0x30;
          }
          else if ((byte)(cVar5 + 0x9fU) < 6) {
            iVar7 = iVar7 + -0x57;
          }
          else {
            if (5 < (byte)(cVar5 + 0xbfU)) goto LAB_10007820;
            iVar7 = iVar7 + -0x37;
          }
          if (iVar7 < 0) goto LAB_10007820;
          (&DAT_100240f0)[lVar11] = (byte)iVar7 | (byte)(iVar6 << 4);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x20);
        if (((local_308 & 0xff) < 0x21) &&
           (pcVar21 = (char *)0x100002601, (0x100002601U >> (local_308 & 0x3f) & 1) != 0)) {
          bVar30 = true;
          pcVar17 = str_1001e4cd;
        }
        else {
LAB_10007820:
          pcVar17 = str_1001e4e8;
          bVar30 = false;
        }
        lVar11 = 0;
        recovered_1000aa30(pcVar17,str_1001e4b0);
        do {
          acStack_34c[lVar11 + 4] = '\0';
          acStack_34c[lVar11 + 5] = '\0';
          acStack_34c[lVar11 + 6] = '\0';
          acStack_34c[lVar11 + 7] = '\0';
          acStack_34c[lVar11 + 8] = '\0';
          acStack_34c[lVar11 + 9] = '\0';
          acStack_34c[lVar11 + 10] = '\0';
          acStack_34c[lVar11 + 0xb] = '\0';
          *(undefined1 *)((long)local_320 + lVar11 + -0x20) = 0;
          *(undefined1 *)((long)local_320 + lVar11 + -0x1f) = 0;
          lVar11 = lVar11 + 10;
        } while (lVar11 != 0x50);
        if (bVar30) goto LAB_10007b54;
      }
    }
    recovered_1000bd40(((uintptr_t)pf_module_state + 0x6a5aU),0x20);
    lVar11 = 0;
    pcVar21 = str_1001e590;
    do {
      bVar16 = (&DAT_100240f0)[lVar11];
      acStack_34c[lVar11 * 2 + 4] = str_1001e590[bVar16 >> 4];
      acStack_34c[lVar11 * 2 + 5] = str_1001e590[bVar16 & 0xf];
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x20);
    local_308 = CONCAT62(PF_PART6(local_308, 2),10);
    if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
        ((0x3b < _DAT_00280808 && ((code *)(ulong)_DAT_00280838 != (code *)0x0)))) &&
       (iVar6 = (*(code *)(ulong)_DAT_00280838)(str_1001e4b0,&local_348,0x41), iVar6 != 0)) {
      pcVar17 = str_1001e511;
    }
    else {
      pcVar17 = str_1001e535;
    }
    recovered_1000aa30(pcVar17,str_1001e4b0);
  }
LAB_10007b54:
  local_348 = (undefined8 *)0x6a09e667f3bcc908;
  uStack_340 = 0xbb67ae8584caa73b;
  local_338 = (byte *)0x3c6ef372fe94f82b;
  uStack_330 = 0xa54ff53a5f1d36f1;
  local_328 = 0x510e527fade682d1;
  PF_PART8(local_320[0], 0) = 0x9b05688c2b3e6c1f;
  PF_PART8(local_320[1], 0) = 0x1f83d9abfb41bd6b;
  PF_PART8(local_320[2], 0) = 0x5be0cd19137e2179;
  local_280 = 0;
  local_308 = 0x20;
  recovered_10001c80(local_300,(undefined8 *)&DAT_100240f0,0x20,pcVar21,in_R8);
  local_280 = local_280 + 0x20;
  if (local_280 == 0x80) {
    recovered_1000b770(&local_348,(long)local_300);
    local_280 = 0;
  }
  recovered_1000c4e0(&local_348,(ulong *)&local_98);
  local_98 = local_98 & 0xf8;
  local_79 = local_79 & 0x3f | 0x40;
  recovered_1000c9a0((uint128 *)&local_348,(long)&local_98);
  recovered_1000ec80(local_498,local_248);
  recovered_1000d840((long *)&local_148,(long)&local_348,local_498);
  recovered_1000d840((long *)local_418,(long)local_2c8,local_498);
  recovered_1000ed80((undefined2 *)&DAT_10024110,(uint128 *)local_418);
  recovered_1000ed80((undefined2 *)local_398,(uint128 *)&local_148);
  DAT_1002412f = DAT_1002412f ^ local_398[0] << 7;
  local_98 = 0;
  local_97 = 0;
  local_96 = 0;
  local_95 = 0;
  local_94 = 0;
  local_93 = 0;
  local_92 = 0;
  local_91 = 0;
  local_90 = 0;
  local_8f = 0;
  local_8e = 0;
  local_8d = 0;
  local_8c = 0;
  local_8b = 0;
  local_8a = 0;
  local_89 = 0;
  local_88 = 0;
  local_87 = 0;
  local_86 = 0;
  local_85 = 0;
  local_84 = 0;
  local_83 = 0;
  local_82 = 0;
  local_81 = 0;
  local_80 = 0;
  local_7f = 0;
  local_7e = 0;
  local_7d = 0;
  local_7c = 0;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  local_78 = 0;
  local_77 = 0;
  local_76 = 0;
  local_75 = 0;
  local_74 = 0;
  local_73 = 0;
  local_72 = 0;
  local_71 = 0;
  local_70 = 0;
  local_6f = 0;
  local_6e = 0;
  local_6d = 0;
  local_6c = 0;
  local_6b = 0;
  local_6a = 0;
  local_69 = 0;
  local_68 = 0;
  local_67 = 0;
  local_66 = 0;
  local_65 = 0;
  local_64 = 0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0;
  local_60 = 0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0;
  local_5c = 0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0;
  lVar11 = recovered_10003720(((uintptr_t)pf_module_state + 0x4a2U));
  uVar29 = (uint)lVar11;
  puVar24 = (undefined8 *)&DAT_10024130;
  PF_PART4(local_348, 0) =
       uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18;
  recovered_10001c80((undefined8 *)&DAT_10024130,&local_348,4,pcVar21,in_R8);
  if (uVar29 < 0x30) {
    if (uVar29 == 0) {
      uVar8 = 4;
    }
    else {
      recovered_10001c80((undefined8 *)&DAT_10024134,
                         (undefined8 *)(str_1001db2e + 10),
                         (ulong)(uVar29 & 0x3f),pcVar21,in_R8);
      uVar8 = uVar29 + 4;
      if (0x2b < uVar29) goto LAB_10007ee6;
    }
    local_348 = (undefined8 *)CONCAT44(PF_PART4(local_348, 4),0x20000000);
    recovered_10001c80((undefined8 *)(&DAT_10024130 + uVar8),&local_348,4,pcVar21,in_R8);
    uVar8 = uVar29 + 8;
    pcVar21 = (char *)(ulong)(uVar29 - 0xc);
    if (0x1f < uVar29 - 0xc) {
      recovered_10001c80((undefined8 *)(&DAT_10024130 + uVar8),(undefined8 *)&DAT_10024110,0x20,
                         pcVar21,in_R8);
      uVar8 = uVar29 + 0x28;
    }
  }
  else {
    uVar8 = 4;
  }
LAB_10007ee6:
  local_348 = _DAT_1001d7c0;
  uStack_340 = uRam000000001001d7c8;
  local_338 = (byte *)_DAT_1001d7d0;
  uStack_330 = uRam000000001001d7d8;
  local_2e0 = 0;
  uVar10 = (ulong)uVar8;
  DAT_10024164 = uVar8;
  local_328 = uVar10;
  do {
    uVar14 = (ulong)(0x40 - local_2e0);
    if (uVar10 < 0x40 - local_2e0) {
      uVar14 = uVar10;
    }
    recovered_10001c80((undefined8 *)((ulong)local_2e0 + (long)local_320),puVar24,uVar14,pcVar21,
                       in_R8);
    local_2e0 = local_2e0 + (int)uVar14;
    if (local_2e0 == 0x40) {
      recovered_1000f460((uint *)&local_348,(long)local_320);
      local_2e0 = 0;
    }
    puVar24 = (undefined8 *)((long)puVar24 + uVar14);
    uVar10 = uVar10 - uVar14;
  } while (uVar10 != 0);
  recovered_1000c7c0((uint *)&local_348,(uint *)&local_148);
  pcVar21 = (char *)((long)&local_348 + 3);
  uVar10 = 0;
  do {
    uVar29 = 0;
    if (uVar10 < 0x1e) {
      uVar29 = (uint)*(byte *)((long)local_248 + uVar10 + 0x102);
    }
    cVar5 = '=';
    if (uVar10 < 0x1e) {
      cVar5 = str_1001e5b0[uVar29 & 0x3f];
    }
    bVar16 = *(byte *)((long)local_248 + uVar10 + 0x100);
    uVar8 = (uint)*(byte *)((long)local_248 + uVar10 + 0x101) << 8;
    puVar24 = (undefined8 *)(ulong)(byte)str_1001e5b0[bVar16 >> 2];
    cVar2 = str_1001e5b0[((uint)bVar16 << 0x10 | uVar8) >> 0xc & 0x3f];
    cVar3 = str_1001e5b0[(uVar29 | uVar8) >> 6 & 0x3f];
    pcVar21[-3] = str_1001e5b0[bVar16 >> 2];
    pcVar21[-2] = cVar2;
    pcVar21[-1] = cVar3;
    *pcVar21 = cVar5;
    pcVar21 = pcVar21 + 4;
    bVar30 = uVar10 < 0x1d;
    uVar10 = uVar10 + 3;
  } while (bVar30);
  local_320[0] = (uint5)(uint)local_320[0];
  lVar11 = 0x2c;
  do {
    if (((acStack_34c[lVar11 + 3] != '=') ||
        (acStack_34c[lVar11 + 3] = '\0', acStack_34c[lVar11 + 2] != '=')) ||
       ((acStack_34c[lVar11 + 2] = '\0', acStack_34c[lVar11 + 1] != '=' ||
        (acStack_34c[lVar11 + 1] = '\0', acStack_34c[lVar11] != '=')))) break;
    acStack_34c[lVar11] = '\0';
    lVar11 = lVar11 + -4;
  } while (lVar11 != 0);
  lVar11 = 0;
  recovered_100063f0(&DAT_10024168,0x40,str_1001e5a1,&local_348);
  recovered_1000aa30(str_1001e565,&DAT_10024168);
  puVar28 = &DAT_1001f084;
  do {
    *puVar28 = (int)lVar11;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)) &&
        (pbVar12 = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x89cc), pbVar12 != (byte *)0x0)))) {
      recovered_10002980(pbVar12,0,0x89cc);
    }
    else {
      pbVar12 = (byte *)0x0;
    }
    *(byte **)(puVar28 + 0x4d) = pbVar12;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        (((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)) &&
         (pbVar12 = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x890c), pbVar12 != (byte *)0x0)))))) {
      recovered_10002980(pbVar12,0,0x890c);
    }
    else {
      pbVar12 = (byte *)0x0;
    }
    *(byte **)(puVar28 + 0x51) = pbVar12;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       (((0xb < _DAT_00280808 &&
         ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))) &&
        (pbVar12 = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x2000), pbVar12 != (byte *)0x0)))) {
      recovered_10002980(pbVar12,0,0x2000);
    }
    else {
      pbVar12 = (byte *)0x0;
    }
    *(byte **)(puVar28 + 0x53) = pbVar12;
    if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
        ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))) &&
       (pbVar12 = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x2000), pbVar12 != (byte *)0x0)) {
      recovered_10002980(pbVar12,0,0x2000);
    }
    else {
      pbVar12 = (byte *)0x0;
    }
    *(byte **)(puVar28 + 0x12f) = pbVar12;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        (((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)) &&
         (pbVar12 = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x2000), pbVar12 != (byte *)0x0)))))) {
      recovered_10002980(pbVar12,0,0x2000);
    }
    else {
      pbVar12 = (byte *)0x0;
    }
    *(byte **)(puVar28 + 0x133) = pbVar12;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       (((0xb < _DAT_00280808 &&
         ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))) &&
        (pbVar12 = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x8000), pbVar12 != (byte *)0x0)))) {
      recovered_10002980(pbVar12,0,0x8000);
    }
    else {
      pbVar12 = (byte *)0x0;
    }
    *(byte **)(puVar28 + 0x2e9) = pbVar12;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)) &&
        (pbVar12 = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x10000), pbVar12 != (byte *)0x0)))) {
      recovered_10002980(pbVar12,0,0x10000);
    }
    else {
      pbVar12 = (byte *)0x0;
    }
    *(byte **)(puVar28 + 0x36f) = pbVar12;
    if (((*(long *)(puVar28 + 0x4d) == 0) || (*(long *)(puVar28 + 0x51) == 0)) ||
       ((*(long *)(puVar28 + 0x53) == 0 ||
        ((((*(long *)(puVar28 + 0x12f) == 0 || (*(long *)(puVar28 + 0x133) == 0)) ||
          (pbVar12 == (byte *)0x0)) || (*(long *)(puVar28 + 0x2e9) == 0)))))) {
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 &&
          ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
        (*(code *)(ulong)_DAT_00280828)(str_1001e1d3);
      }
      if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
         ((_DAT_00280808 < 0x2c || (pcVar13 = (code *)(ulong)_DAT_00280828, pcVar13 == (code *)0x0))
         )) goto LAB_100086b4;
      goto LAB_100085a3;
    }
    lVar11 = lVar11 + 1;
    puVar28 = puVar28 + 0x37e;
  } while (lVar11 != 4);
  uVar29 = 0;
  recovered_10002980((byte *)&local_348,0,0x18);
  PF_PART4(local_348, 0) = 0x18;
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && (0x16b < _DAT_00280808)))) {
    if ((code *)(ulong)_DAT_00280968 != (code *)0x0) {
      iVar6 = (*(code *)(ulong)_DAT_00280968)(&local_348);
      if (iVar6 != 0) {
        uVar29 = (uint)local_338;
      }
    }
  }
  _DAT_100242b8 = (ulong)(uVar29 - _DAT_100242b0) + _DAT_100242b8;
  uVar10 = _DAT_100242b8 * 1000;
  uVar14 = (ulong)DAT_100242a8;
  if (uVar10 >> 0x20 == 0) {
    uVar10 = uVar10 & 0xffffffff;
  }
  uVar10 = uVar10 / uVar14;
  _DAT_100242b0 = uVar29;
  recovered_10002980((byte *)&local_348,0,0xc0);
  local_348 = (undefined8 *)CONCAT44(PF_PART4(local_348, 4),0xc0);
  if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
      ((0x127 < _DAT_00280808 && ((code *)(ulong)_DAT_00280924 != (code *)0x0)))) &&
     ((iVar6 = (*(code *)(ulong)_DAT_00280924)(&local_348), iVar6 != 0 &&
      (((ulong)local_348 & 0x100000000) != 0)))) {
    recovered_10001c80((undefined8 *)&DAT_10023040,&local_338,6,uVar14,puVar24);
    DAT_10023046 = 1;
    recovered_1000b560((long)&local_348,0xc0);
    pcVar21 = (char *)(ulong)PF_PART1(local_338, 1);
    puVar23 = (undefined1 *)(ulong)PF_PART1(local_338, 2);
    recovered_100063f0((char *)&local_148,0x18,str_1001e616,(uint)(byte)local_338,
                       (uint)PF_PART1(local_338, 1),(uint)PF_PART1(local_338, 2),(uint)PF_PART1(local_338, 3),
                       (uint)PF_PART1(local_338, 4),(uint)PF_PART1(local_338, 5));
    puVar18 = (ulong *)local_2c8;
    if (local_2c8[0] == '\0') {
      puVar18 = &local_308;
    }
    recovered_1000aa30(str_1001e634,&local_148,puVar18);
    if (((ulong)local_348 & 0x200000000) == 0) {
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 &&
          ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
        (*(code *)(ulong)_DAT_00280828)(str_1001e649);
      }
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00280828)(&DAT_1001e2ce);
      }
    }
    lVar11 = 0x40;
    do {
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 &&
          (((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)) &&
           (pbVar12 = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x4000), pbVar12 != (byte *)0x0))))))
      {
        recovered_10002980(pbVar12,0,0x4000);
      }
      else {
        pbVar12 = (byte *)0x0;
      }
      *(byte **)(lVar11 + ((uintptr_t)pf_module_state + 0x53f2U)) = pbVar12;
      if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
          ((_DAT_00280808 < 0xc ||
           ((_DAT_00280808 < 0x50 || ((code *)(ulong)_DAT_0028084c == (code *)0x0)))))) ||
         (pbVar12 = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x8000), pbVar12 == (byte *)0x0)) {
        *(undefined8 *)((long)&DAT_10022aa0 + lVar11) = 0;
        *(undefined4 *)(lVar11 + ((uintptr_t)pf_module_state + 0x53caU)) = 0;
LAB_100089d1:
        if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
           ((_DAT_00280808 < 0x2c ||
            (pcVar13 = (code *)(ulong)_DAT_00280828, pcVar13 == (code *)0x0)))) goto LAB_10008672;
        pcVar21 = str_1001e677;
        goto LAB_10008670;
      }
      recovered_10002980(pbVar12,0,0x8000);
      *(byte **)((long)&DAT_10022aa0 + lVar11) = pbVar12;
      *(undefined4 *)(lVar11 + ((uintptr_t)pf_module_state + 0x53caU)) = 0;
      if (*(long *)(lVar11 + ((uintptr_t)pf_module_state + 0x53f2U)) == 0) goto LAB_100089d1;
      lVar11 = lVar11 + 0x78;
    } while (lVar11 != 0x5e0);
    if (DAT_10022922 == 1) {
      DAT_10023047 = 0;
      recovered_1000bd40((long)local_418,4);
      DAT_100230c0 = local_418[0] >> 0x18 | (local_418[0] & 0xff0000) >> 8 |
                     (local_418[0] & 0xff00) << 8 | local_418[0] << 0x18;
      DAT_100230bc = 1;
      _DAT_100230d0 = 2000;
      _DAT_100230cc = (int)uVar10;
      recovered_1000f7a0('\x01',0);
    }
    else {
      DAT_100230bc = 0;
      recovered_1000f680(DAT_10022924,DAT_10022928,DAT_1002292c);
    }
    uVar29 = (uint)DAT_10022860;
    iVar6 = recovered_10003750(&DAT_100228a2,&DAT_1001e22d);
    pcVar17 = &DAT_1001e238;
    if (iVar6 == 0) {
      pcVar17 = str_1001e22f;
    }
    recovered_1000aa30(str_1001e1fa,uVar29,&DAT_10022862,pcVar17);
    local_b8 = 0;
    local_ac = 0;
    cVar5 = local_49;
LAB_10008ab3:
    if (((cVar5 == '\0') && (_DAT_00280800 == 0x50414d57)) &&
       ((_DAT_00280804 != 0 &&
        (((0xb < _DAT_00280808 && (0x2f < _DAT_00280808)) &&
         ((code *)(ulong)_DAT_0028082c != (code *)0x0)))))) {
      cVar5 = (*(code *)(ulong)_DAT_0028082c)();
      bVar30 = cVar5 == '\x1b';
    }
    else {
      bVar30 = false;
    }
    recovered_10002980((byte *)&local_348,0,0x18);
    local_348 = (undefined8 *)CONCAT44(PF_PART4(local_348, 4),0x18);
    uVar9 = extraout_XMM0_Da;
    uVar32 = extraout_XMM0_Db;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)))))) {
      iVar6 = (*(code *)(ulong)_DAT_00280968)(&local_348);
      uVar9 = extraout_XMM0_Da_00;
      uVar32 = extraout_XMM0_Db_00;
      if (iVar6 == 0) goto LAB_10008b6e;
      uVar29 = (uint)local_338;
    }
    else {
LAB_10008b6e:
      uVar29 = 0;
    }
    _DAT_100242b8 = (ulong)(uVar29 - _DAT_100242b0) + _DAT_100242b8;
    uVar14 = _DAT_100242b8 * 1000;
    uVar19 = (ulong)DAT_100242a8;
    if (uVar14 >> 0x20 == 0) {
      uVar14 = uVar14 & 0xffffffff;
    }
    uVar14 = uVar14 / uVar19;
    _DAT_100242b0 = uVar29;
    local_48 = uVar14;
    if (!bVar30) {
      local_bc = recovered_1000ab60(0x20,(uint)uVar14);
      bVar30 = local_bc != 0;
      pcVar17 = (char *)(ulong)(DAT_100230bc - 1U);
      iVar6 = (int)local_48;
      if (DAT_100230bc - 1U < 2) {
LAB_10008bf9:
        uVar29 = (int)uVar14 - _DAT_100230cc;
        pcVar17 = (char *)(ulong)uVar29;
        if (uVar29 < DAT_100230d0) goto LAB_10008e58;
        uVar29 = DAT_100230d4 + 1;
        pcVar17 = (char *)(ulong)uVar29;
        _DAT_100230d0 = CONCAT44(uVar29,DAT_100230d0);
        if (uVar29 < 4 || DAT_100230bc != 2) {
          if ((DAT_100230bc != 4) || ((uint)(iVar6 - _DAT_100230dc) < DAT_100230d8)) {
            if (DAT_100230d0 < 16000) {
              _DAT_100230d0 = CONCAT44(uVar29,DAT_100230d0 * 2);
            }
            if (DAT_100230bc == 2) {
              cVar5 = '\x03';
              _DAT_100230cc = iVar6;
LAB_10008da8:
              iVar7 = 0;
            }
            else {
              if (DAT_100230bc == 1) {
                _DAT_100230cc = iVar6;
                if ((uVar29 & 3) == 0) {
                  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                      (0xb < _DAT_00280808)) && (0x2b < _DAT_00280808)) {
                    if ((code *)(ulong)_DAT_00280828 != (code *)0x0) {
                      (*(code *)(ulong)_DAT_00280828)(str_1001e703);
                    }
                  }
                  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                     ((0xb < _DAT_00280808 &&
                      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
                    (*(code *)(ulong)_DAT_00280828)(&DAT_1001e2ce);
                  }
                }
                cVar5 = '\x01';
                goto LAB_10008da8;
              }
              cVar5 = '\x03';
              iVar7 = 1;
              _DAT_100230cc = iVar6;
            }
            recovered_1000f7a0(cVar5,iVar7);
            uVar14 = local_48;
            goto LAB_10008e58;
          }
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
            (*(code *)(ulong)_DAT_00280828)(str_1001e6eb);
          }
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 &&
              ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00280828)(&DAT_1001e2ce);
          }
          DAT_10023047 = 0;
        }
        recovered_1000bd40((long)&local_348,4);
        DAT_100230c0 = (uint)local_348 >> 0x18 | ((uint)local_348 & 0xff0000) >> 8 |
                       ((uint)local_348 & 0xff00) << 8 | (uint)local_348 << 0x18;
        DAT_100230bc = 1;
        _DAT_100230d0 = 2000;
        cVar5 = '\x01';
        iVar7 = 0;
        _DAT_100230cc = (int)local_48;
LAB_10008cb8:
        uVar14 = local_48;
        recovered_1000f7a0(cVar5,iVar7);
      }
      else {
        uVar14 = local_48;
        if (DAT_100230bc == 3) {
          if (-1 < iVar6 - DAT_100230e0) {
            DAT_100230bc = 4;
            _DAT_100230d0 = 4000;
            cVar5 = '\x03';
            iVar7 = 1;
            _DAT_100230cc = iVar6;
            goto LAB_10008cb8;
          }
        }
        else if (DAT_100230bc == 4) goto LAB_10008bf9;
      }
LAB_10008e58:
      uVar29 = (uint)uVar14;
      local_360 = uVar10;
      local_39 = bVar30;
      recovered_1000af90(&DAT_10022aa0,uVar29);
      recovered_1000af90(&DAT_10022b18,uVar29);
      recovered_1000af90(&DAT_10022b90,uVar29);
      recovered_1000af90(&DAT_10022c08,uVar29);
      recovered_1000af90(&DAT_10022c80,uVar29);
      recovered_1000af90(&DAT_10022cf8,uVar29);
      recovered_1000af90((uint *)&DAT_10022d70,uVar29);
      recovered_1000af90((uint *)&DAT_10022de8,uVar29);
      recovered_1000af90((uint *)&DAT_10022e60,uVar29);
      recovered_1000af90((uint *)&DAT_10022ed8,uVar29);
      recovered_1000af90((uint *)&DAT_10022f50,uVar29);
      recovered_1000af90((uint *)&DAT_10022fc8,uVar29);
      lVar11 = 0;
      uVar9 = extraout_XMM0_Da_01;
      uVar32 = extraout_XMM0_Db_01;
      do {
        lVar25 = lVar11 * 0x78;
        if ((((&DAT_10022aa0)[lVar11 * 0x1e] == 2) &&
            (((puVar26 = &DAT_10022aa0 + lVar11 * 0x1e, DAT_1001f080 != '\x01' ||
              (DAT_1001f088 != puVar26)) || (DAT_1001f090 != (&DAT_10022aa4)[lVar11 * 0x1e])))) &&
           ((((DAT_1001fe78 != '\x01' || (DAT_1001fe80 != puVar26)) ||
             (DAT_1001fe88 != (&DAT_10022aa4)[lVar11 * 0x1e])) &&
            ((((DAT_10020c70 != '\x01' || (DAT_10020c78 != puVar26)) ||
              (DAT_10020c80 != (&DAT_10022aa4)[lVar11 * 0x1e])) &&
             (((DAT_10021a68 != '\x01' || (DAT_10021a70 != puVar26)) ||
              (DAT_10021a78 != (&DAT_10022aa4)[lVar11 * 0x1e])))))))) {
          uVar10 = (ulong)DAT_10022a94;
          if (uVar10 != 0) {
            pbVar12 = (byte *)&DAT_1001f080;
            do {
              if ((*pbVar12 == 0) && (pbVar12[0xbb9] == 0)) {
                uVar9 = *(undefined4 *)(pbVar12 + 4);
                uVar15 = *(undefined8 *)(pbVar12 + 0x138);
                local_38 = *(char **)(pbVar12 + 0x4c0);
                local_58 = *(uint **)(pbVar12 + 0x4d0);
                local_a8 = *(long *)(pbVar12 + 0xba8);
                local_a0 = *(char **)(pbVar12 + 0xdc0);
                local_378 = *(undefined8 *)(pbVar12 + 0x148);
                uStack_370 = *(undefined8 *)(pbVar12 + 0x150);
                recovered_10002980(pbVar12,0,0xdf8);
                *(undefined4 *)(pbVar12 + 4) = uVar9;
                *(undefined8 *)(pbVar12 + 0x138) = uVar15;
                *(undefined8 *)(pbVar12 + 0x148) = local_378;
                *(undefined8 *)(pbVar12 + 0x150) = uStack_370;
                *(char **)(pbVar12 + 0x4c0) = local_38;
                *(uint **)(pbVar12 + 0x4d0) = local_58;
                *(long *)(pbVar12 + 0xba8) = local_a8;
                *(char **)(pbVar12 + 0xdc0) = local_a0;
                *pbVar12 = 1;
                *(uint **)(pbVar12 + 8) = puVar26;
                *(undefined4 *)(pbVar12 + 0x10) = (&DAT_10022aa4)[lVar11 * 0x1e];
                pbVar12[0x14] = 0;
                pbVar12[0x15] = 0;
                pbVar12[0x16] = 0;
                pbVar12[0x17] = 0;
                *(int *)(pbVar12 + 0x18) = (int)local_48;
                *(int *)(pbVar12 + 0x1c) = (int)local_48;
                uVar29 = (&DAT_10022ab0)[lVar11 * 0x1e];
                uVar8 = uVar29 >> 8 & 0xff;
                puVar23 = (undefined1 *)(ulong)uVar8;
                recovered_100063f0((char *)&local_348,0x14,str_1001ecca,uVar29 >> 0x18,
                                   uVar29 >> 0x10 & 0xff,uVar8,uVar29 & 0xff);
                pcVar21 = (char *)(ulong)(ushort)(&DAT_10022ab4)[lVar11 * 0x3c];
                recovered_100063f0((char *)(pbVar12 + 0x120),0x18,str_1001e724,&local_348,
                                   (uint)(ushort)(&DAT_10022ab4)[lVar11 * 0x3c]);
                DAT_100240ec = DAT_100240ec + 1;
                pcVar17 = str_1001e72a;
                recovered_1000aa30(str_1001e73e,*(uint *)(pbVar12 + 4),pbVar12 + 0x120,str_1001e72a)
                ;
                if (((*puVar26 & 0xfffffffe) == 2) &&
                   ((*(char *)(lVar25 + ((uintptr_t)pf_module_state + 0x545fU)) == '\0' &&
                    (0x23 < (&DAT_10022aec)[lVar11 * 0x1e] - 0x7fdd)))) {
                  pcVar17 = (char *)(&DAT_10022ae0)[lVar11 * 0xf];
                  uVar29 = (&DAT_10022aec)[lVar11 * 0x1e] + *(int *)(lVar25 + ((uintptr_t)pf_module_state + 0x5452U)) & 0x7fff;
                  uVar10 = (ulong)(0x8000 - uVar29);
                  if (0x23 < 0x8000 - uVar29) {
                    uVar10 = 0x24;
                  }
                  local_38 = pcVar17;
                  recovered_10001c80((undefined8 *)(pcVar17 + uVar29),(undefined8 *)str_1001dde0,
                                     uVar10,pcVar17,(undefined8 *)pcVar21);
                  if (0x7fdc < uVar29) {
                    recovered_10001c80((undefined8 *)local_38,(undefined8 *)(str_1001dde0 + uVar10),
                                       (ulong)(0x24 - (int)uVar10),pcVar17,(undefined8 *)pcVar21);
                  }
                  (&DAT_10022aec)[lVar11 * 0x1e] = (&DAT_10022aec)[lVar11 * 0x1e] + 0x24;
                }
                recovered_100115a0((long)pbVar12);
                uVar14 = local_48;
                recovered_10011390(puVar26,(uint)local_48);
                uVar9 = extraout_XMM0_Da_03;
                uVar32 = extraout_XMM0_Db_03;
                goto LAB_10008f30;
              }
              pbVar12 = pbVar12 + 0xdf8;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          uVar14 = local_48;
          if ((uint)local_48 - (&DAT_10022b0c)[lVar11 * 0x1e] < 90000) {
            recovered_10011390(puVar26,(uint)local_48);
            uVar9 = extraout_XMM0_Da_02;
            uVar32 = extraout_XMM0_Db_02;
          }
          else {
            pcVar17 = (char *)0x0;
            pcVar21 = (char *)0x0;
            recovered_10010ea0((long)puVar26,0x14,
                               (uint)(byte)(&DAT_10022af6)[lVar25] +
                               (uint)(byte)(&DAT_10022af4)[lVar25] +
                               (&DAT_10022af0)[lVar11 * 0x1e] + (&DAT_10022abc)[lVar11 * 0x1e],0,0);
            (&DAT_10022afb)[lVar25] = 1;
            *puVar26 = 0;
            (&DAT_10022ad4)[lVar11 * 0x1e] = 0;
            (&DAT_10022aec)[lVar11 * 0x1e] = 0;
            (&DAT_10022b04)[lVar25] = 0;
            uVar9 = extraout_XMM0_Da_04;
            uVar32 = extraout_XMM0_Db_04;
          }
        }
LAB_10008f30:
        uVar15 = CONCAT44(uVar32,uVar9);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0xc);
      lVar11 = 0;
      do {
        lVar25 = lVar11 * 0xdf8;
        pcVar20 = &DAT_1001f080 + lVar25;
        if ((&DAT_1001f080)[lVar25] == '\x01') {
          puVar26 = (&DAT_1001f088)[lVar11 * 0x1bf];
          local_38 = pcVar20;
          if (((puVar26 == (uint *)0x0) || (puVar26[1] != (&DAT_1001f090)[lVar11 * 0x37e])) ||
             (*puVar26 == 0)) {
            if (((&DAT_1001fe6c)[lVar25] == '\0') && ((&DAT_1001fe64)[lVar25] == '\0')) {
              pcVar17 = str_1001e764;
              recovered_1000aa30(str_1001e73e,(&DAT_1001f084)[lVar11 * 0x37e],
                                          &DAT_1001f1a0 + lVar25,str_1001e764);
            }
            pcVar20 = local_38;
            if (local_38[0xbb9] == '\x01') {
              *local_38 = '\0';
              local_38[8] = '\0';
              local_38[9] = '\0';
              local_38[10] = '\0';
              local_38[0xb] = '\0';
              local_38[0xc] = '\0';
              local_38[0xd] = '\0';
              local_38[0xe] = '\0';
              local_38[0xf] = '\0';
            }
            else {
LAB_1000927c:
              recovered_1000b430(pcVar20);
              uVar15 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
            }
          }
          else {
            uVar29 = puVar26[0xd];
            local_a8 = lVar11;
            local_58 = puVar26;
            if (uVar29 != 0) {
              pcVar17 = &DAT_1001f0a0 + lVar25;
              local_a0 = pcVar17;
              do {
                uVar10 = (ulong)*(uint *)(pcVar20 + 0x140);
                if ((0x89cb < uVar10) || (pcVar20[0xdec] != '\0')) break;
                puVar24 = (undefined8 *)(uVar10 + *(long *)(pcVar20 + 0x138));
                uVar8 = 0x89cc - *(uint *)(pcVar20 + 0x140);
                if (uVar29 < uVar8) {
                  uVar8 = uVar29;
                }
                puVar4 = *(undefined8 **)(local_58 + 10);
                uVar27 = 0x4000 - local_58[0xc];
                uVar29 = uVar8;
                if (uVar27 < uVar8) {
                  uVar29 = uVar27;
                }
                recovered_10001c80(puVar24,(undefined8 *)((ulong)local_58[0xc] + (long)puVar4),
                                   (ulong)uVar29,uVar10,(undefined8 *)pcVar21);
                uVar9 = extraout_XMM0_Da_07;
                uVar32 = extraout_XMM0_Db_07;
                if (uVar27 < uVar8) {
                  recovered_10001c80((undefined8 *)((long)puVar24 + (ulong)uVar29),puVar4,
                                     (ulong)(uVar8 - uVar29),uVar10,(undefined8 *)pcVar21);
                  uVar9 = extraout_XMM0_Da_08;
                  uVar32 = extraout_XMM0_Db_08;
                }
                local_58[0xc] = local_58[0xc] + uVar8 & 0x3fff;
                uVar29 = local_58[0xd] - uVar8;
                pcVar17 = (char *)(ulong)uVar29;
                local_58[0xd] = uVar29;
                if ((local_58[0xe] < local_58[9]) && (local_58[9] * 2 <= 0x4000 - uVar29)) {
                  *(undefined1 *)((long)local_58 + 0x5a) = 1;
                }
                uVar8 = uVar8 + *(int *)(local_38 + 0x140);
                *(uint *)(local_38 + 0x140) = uVar8;
                *(int *)(local_38 + 0x1c) = (int)local_48;
                uVar14 = local_48;
                pcVar20 = local_38;
                if (*(int *)(local_38 + 0x14) == 0) {
                  if (uVar8 != 0) {
                    do {
                      puVar18 = *(ulong **)(local_38 + 0x138);
                      uVar10 = 0;
                      while (*(char *)((long)puVar18 + uVar10) != '\n') {
                        uVar10 = uVar10 + 1;
                        if (uVar8 == uVar10) goto LAB_100094c2;
                      }
                      uVar29 = (uint)uVar10;
                      if (uVar8 == uVar29) {
LAB_100094c2:
                        pcVar20 = local_38;
                        if (0xfe < uVar8) {
                          recovered_1000b130(CONCAT44(uVar32,uVar9),in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa
                                             ,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,
                                             (long)local_38,2,str_1001e7a8,pcVar17,pcVar21,puVar23);
                          pcVar20 = local_38;
                          uVar9 = extraout_XMM0_Da_11;
                          uVar32 = extraout_XMM0_Db_11;
                        }
                        break;
                      }
                      if (uVar10 != 0) {
                        uVar14 = uVar10 & 0xffffffff;
                        do {
                          bVar16 = *(byte *)((long)puVar18 + (uVar14 - 1));
                          pcVar17 = (char *)(ulong)bVar16;
                          if ((bVar16 != 0xd) && (bVar16 != 10)) {
                            if (3 < uVar14) {
                              iVar6 = recovered_100032a0(puVar18,(ulong *)&DAT_1001e7c5,4);
                              if (iVar6 != 0) {
                                uVar8 = *(uint *)(local_38 + 0x140);
                                uVar14 = local_48;
                                uVar9 = extraout_XMM0_Da_09;
                                uVar32 = extraout_XMM0_Db_09;
                                goto LAB_1000947e;
                              }
                              if ((7 < uVar14) &&
                                 (iVar6 = recovered_100032a0(*(ulong **)(local_38 + 0x138),
                                                             (ulong *)str_1001e7ca,8), iVar6 != 0))
                              {
                                iVar6 = recovered_100032a0(*(ulong **)(local_38 + 0x138),
                                                           (ulong *)str_1001e7d3,8);
                                pcVar20 = local_38;
                                if (iVar6 != 0) {
                                  recovered_1000b130(CONCAT44(extraout_XMM0_Db_12,
                                                              extraout_XMM0_Da_12),in_XMM1_Qa,
                                                     in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                                                     in_XMM6_Qa,in_XMM7_Qa,(long)local_38,2,
                                                     str_1001e7dc,pcVar17,pcVar21,puVar23);
                                  uVar14 = local_48;
                                  uVar9 = extraout_XMM0_Da_13;
                                  uVar32 = extraout_XMM0_Db_13;
                                  goto LAB_100094e5;
                                }
                              }
                              pcVar20 = local_38;
                              uVar19 = uVar14 & 0xffffffff;
                              if (0xff < uVar14) {
                                uVar19 = 0xff;
                              }
                              recovered_10001c80((undefined8 *)local_a0,
                                                 *(undefined8 **)(local_38 + 0x138),uVar19,pcVar17,
                                                 (undefined8 *)pcVar21);
                              pcVar20[uVar19 + 0x20] = '\0';
                              pcVar17 = (char *)0x0;
                              if ((uint)(uVar10 + 1) < *(uint *)(pcVar20 + 0x140)) {
                                recovered_100020c0(*(undefined8 **)(pcVar20 + 0x138),
                                                   (undefined8 *)
                                                   ((uVar10 + 1 & 0xffffffff) +
                                                   (long)*(undefined8 **)(pcVar20 + 0x138)),
                                                   (ulong)(*(uint *)(pcVar20 + 0x140) + ~uVar29),0,
                                                   (undefined8 *)pcVar21,puVar23);
                                pcVar17 = (char *)(ulong)(~uVar29 + *(int *)(local_38 + 0x140));
                                pcVar20 = local_38;
                              }
                              pcVar22 = local_a0;
                              *(int *)(pcVar20 + 0x140) = (int)pcVar17;
                              recovered_1000b560((long)local_a0,uVar14 & 0xffffffff);
                              recovered_10018800(local_38,str_1001e7f9,pcVar22);
                              local_38[0x14] = '\x01';
                              local_38[0x15] = '\0';
                              local_38[0x16] = '\0';
                              local_38[0x17] = '\0';
                              uVar14 = local_48;
                              pcVar20 = local_38;
                              goto LAB_10009310;
                            }
                            break;
                          }
                          uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                        uVar14 = local_48;
                      }
LAB_1000947e:
                      pcVar17 = (char *)(uVar10 + 1);
                      if (uVar8 <= (uint)pcVar17) {
                        local_38[0x140] = '\0';
                        local_38[0x141] = '\0';
                        local_38[0x142] = '\0';
                        local_38[0x143] = '\0';
                        pcVar20 = local_38;
                        break;
                      }
                      recovered_100020c0(*(undefined8 **)(local_38 + 0x138),
                                         (undefined8 *)
                                         (((ulong)pcVar17 & 0xffffffff) +
                                         (long)*(undefined8 **)(local_38 + 0x138)),
                                         (ulong)(~uVar29 + uVar8),pcVar17,(undefined8 *)pcVar21,
                                         puVar23);
                      uVar8 = (*(int *)(local_38 + 0x140) + -1) - uVar29;
                      *(uint *)(local_38 + 0x140) = uVar8;
                      pcVar20 = local_38;
                      uVar9 = extraout_XMM0_Da_10;
                      uVar32 = extraout_XMM0_Db_10;
                    } while (uVar8 != 0);
LAB_100094e5:
                    if (*(int *)(pcVar20 + 0x14) != 0) goto LAB_10009310;
                  }
                }
                else {
LAB_10009310:
                  recovered_10014290((long)pcVar20);
                  pcVar20 = local_38;
                  uVar9 = extraout_XMM0_Da_06;
                  uVar32 = extraout_XMM0_Db_06;
                }
                uVar15 = CONCAT44(uVar32,uVar9);
                uVar29 = local_58[0xd];
              } while (uVar29 != 0);
            }
            if ((*(int *)(pcVar20 + 0x14) == 0) && (0x89cb < *(uint *)(pcVar20 + 0x140))) {
              recovered_1000b130(uVar15,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                                 in_XMM6_Qa,in_XMM7_Qa,(long)pcVar20,2,str_1001e774,pcVar17,pcVar21,
                                 puVar23);
              uVar15 = CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_14);
              pcVar20 = local_38;
            }
            lVar11 = local_a8;
            iVar6 = (int)uVar14;
            if (pcVar20[0xdec] == '\x01') {
              if (((2999 < (uint)(iVar6 - *(int *)(pcVar20 + 0xdf0))) || (*local_58 == 3)) &&
                 (pcVar20[0xbb9] == '\0')) goto LAB_1000927c;
            }
            else if ((*local_58 == 3) && (pcVar20[0xde3] == '\0')) {
              pcVar20[0xde3] = '\x01';
              pcVar20[0xdec] = '\x01';
              *(int *)(pcVar20 + 0xdf0) = iVar6;
              *(undefined1 *)((long)local_58 + 0x55) = 1;
            }
            else {
              if ((*(int *)(pcVar20 + 0x14) != 3) &&
                 (89999 < (uint)(iVar6 - *(int *)(pcVar20 + 0x18)))) {
                recovered_1000b130(uVar15,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                                   in_XMM6_Qa,in_XMM7_Qa,(long)pcVar20,0xb,str_1001e78b,pcVar17,
                                   pcVar21,puVar23);
                uVar15 = CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_15);
                goto LAB_10009281;
              }
              if (((*(int *)(pcVar20 + 0x894) == 1) && (pcVar20[0xde2] == '\x01')) &&
                 (pcVar20[0xde0] == '\0')) {
                pcVar17 = (char *)0xffff7fff;
                if (*(int *)(pcVar20 + 0xbb4) - 0x8001U < 0xffffffc0) {
                  pcVar20[0xde2] = '\0';
                  recovered_100186d0((long)pcVar20);
                  iVar6 = *(int *)(local_38 + 0xba0);
                  pcVar20 = local_38;
                  if (iVar6 != 0) {
                    pcVar22 = local_38 + 0xa9e;
                    pcVar1 = local_38 + 0xa9f;
                    do {
                      pcVar20 = local_38;
                      if (((local_38[3000] != '\0') || (local_38[0xbb9] != '\0')) ||
                         ((local_38[0xde0] != '\0' || (local_38[0xde3] != '\0')))) break;
                      bVar16 = local_38[0xa9e];
                      recovered_100020c0((undefined8 *)pcVar22,(undefined8 *)pcVar1,
                                         (ulong)(iVar6 - 1),pcVar17,(undefined8 *)pcVar21,puVar23);
                      *(int *)(local_38 + 0xba0) = *(int *)(local_38 + 0xba0) + -1;
                      recovered_1001ce10((long)local_38,(uint)bVar16);
                      iVar6 = *(int *)(local_38 + 0xba0);
                      pcVar20 = local_38;
                    } while (iVar6 != 0);
                  }
                }
              }
              recovered_1001d410((long)pcVar20);
              pcVar21 = local_38;
              uVar9 = extraout_XMM0_Da_16;
              uVar32 = extraout_XMM0_Db_16;
              if (local_38[0x870] == '\x01') {
                while( true ) {
                  pcVar21 = local_38;
                  if ((local_38[0x871] != '\0') || (local_38[0x4b9] != '\0')) break;
                  uVar29 = *(uint *)(local_38 + 0xbb4);
                  pcVar17 = (char *)(ulong)uVar29;
                  if ((uVar29 == 0) ||
                     ((((uVar8 = *(uint *)(local_38 + 0x87c), uVar8 == 0 ||
                        (puVar26 = *(uint **)(local_38 + 8), puVar26 == (uint *)0x0)) ||
                       (puVar26[1] != *(uint *)(local_38 + 0x10))) ||
                      (((*puVar26 & 0xfffffffe) != 2 || (puVar26[0x13] - 0x6fc1 < 0x1040))))))
                  break;
                  if (uVar29 < uVar8) {
                    uVar8 = uVar29;
                  }
                  if (*(uint *)(local_38 + 0x880) <= uVar8) {
                    uVar8 = *(uint *)(local_38 + 0x880);
                  }
                  uVar29 = 0x6fc0 - puVar26[0x13];
                  if (uVar8 < uVar29) {
                    uVar29 = uVar8;
                  }
                  if (0xfff < uVar29) {
                    uVar29 = 0x1000;
                  }
                  pcVar20 = *(char **)(local_38 + 0x150);
                  local_348 = (undefined8 *)CONCAT71(PF_PART7(local_348, 1),0x5e);
                  pcVar22 = local_38;
                  recovered_10001c80((undefined8 *)pcVar20,&local_348,1,pcVar17,
                                     (undefined8 *)local_38);
                  uVar8 = *(uint *)(pcVar21 + 0x878);
                  PF_PART4(local_348, 0) =
                       uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                       uVar8 << 0x18;
                  recovered_10001c80((undefined8 *)(pcVar20 + 1),&local_348,4,pcVar17,
                                     (undefined8 *)pcVar22);
                  local_348 = (undefined8 *)
                              ((ulong)CONCAT42(PF_PART4(local_348, 4),
                                               CONCAT11((char)uVar29,(char)(uVar29 >> 8))) << 0x10);
                  recovered_10001c80((undefined8 *)(pcVar20 + 5),&local_348,4,pcVar17,
                                     (undefined8 *)pcVar22);
                  puVar24 = *(undefined8 **)(pcVar21 + 0xba8);
                  uVar27 = 0x8000 - *(uint *)(pcVar21 + 0xbb0);
                  uVar8 = uVar29;
                  if (uVar27 < uVar29) {
                    uVar8 = uVar27;
                  }
                  local_a0 = pcVar20;
                  recovered_10001c80((undefined8 *)(pcVar20 + 9),
                                     (undefined8 *)
                                     ((ulong)*(uint *)(pcVar21 + 0xbb0) + (long)puVar24),
                                     (ulong)uVar8,pcVar17,(undefined8 *)pcVar22);
                  if (uVar27 < uVar29) {
                    recovered_10001c80((undefined8 *)(pcVar20 + 9 + uVar8),puVar24,
                                       (ulong)(uVar29 - uVar8),pcVar17,(undefined8 *)pcVar22);
                  }
                  pcVar21 = local_38;
                  uVar15 = recovered_10011b10((long)local_38,local_a0,uVar29 + 9);
                  uVar9 = extraout_XMM0_Da_17;
                  uVar32 = extraout_XMM0_Db_17;
                  if ((char)uVar15 == '\0') break;
                  *(uint *)(pcVar21 + 0xbb0) = *(int *)(pcVar21 + 0xbb0) + uVar29 & 0x7fff;
                  *(uint *)(pcVar21 + 0xbb4) = *(int *)(pcVar21 + 0xbb4) - uVar29;
                  *(uint *)(pcVar21 + 0x87c) = *(int *)(pcVar21 + 0x87c) - uVar29;
                  recovered_1001d410((long)pcVar21);
                  pcVar21 = local_38;
                  uVar9 = extraout_XMM0_Da_18;
                  uVar32 = extraout_XMM0_Db_18;
                  if (local_38[0x870] == '\0') break;
                }
              }
              uVar15 = CONCAT44(uVar32,uVar9);
              uVar14 = local_48;
              lVar11 = local_a8;
              if ((((pcVar21[0xde3] == '\x01') && (pcVar21[0xde4] == '\0')) &&
                  (pcVar21[0x4b9] == '\0')) &&
                 (((((pcVar21[3000] == '\0' && (pcVar21[0xbb9] == '\0')) && (pcVar21[0xde0] == '\0')
                    ) && (*(int *)(pcVar21 + 0xbb4) == 0)) || (pcVar21[0x873] == '\x01')))) {
                if ((pcVar21[0x870] == '\x01') && (pcVar21[0x873] == '\0')) {
                  puVar26 = *(uint **)(pcVar21 + 8);
                  if (puVar26 == (uint *)0x0) goto LAB_10009cae;
                  pcVar17 = (char *)(ulong)puVar26[1];
                  if (puVar26[1] != *(uint *)(pcVar21 + 0x10)) goto LAB_10009cae;
                  pcVar17 = (char *)(ulong)(*puVar26 & 0xfffffffe);
                  if ((*puVar26 & 0xfffffffe) != 2) goto LAB_10009cae;
                  pcVar17 = (char *)0xffff80ff;
                  if (0xff < puVar26[0x13] - 0x7f01) {
                    local_348 = *(undefined8 **)(local_38 + 0x150);
                    (*(float *)((uint8_t *)&(uStack_340)+0)) = 1.14794e-41;
                    local_338 = (byte *)((ulong)local_338 & 0xffffffffffffff00);
                    PF_PART1(local_148, 0) = 'b';
                    recovered_10001c80(local_348,&local_148,1,0xffff80ff,(undefined8 *)pcVar21);
                    PF_PART4(uStack_340, 4) = 1;
                    recovered_1000f410(&local_348);
                    recovered_1000c730(&local_348,str_1001ec8b);
                    local_148 = (ulong)PF_PART7(local_148, 1) << 8;
                    if ((byte)local_338 == '\0') {
                      uVar29 = PF_PART4(uStack_340, 4);
                      if ((float)uStack_340 == (float)PF_PART4(uStack_340, 4)) goto LAB_10009bf3;
                      recovered_10001c80((undefined8 *)((ulong)PF_PART4(uStack_340, 4) + (long)local_348),
                                         &local_148,1,pcVar17,(undefined8 *)pcVar21);
                      PF_PART4(uStack_340, 4) = uVar29 + 1;
                    }
                    else {
LAB_10009bf3:
                      local_338 = (byte *)CONCAT71(PF_PART7(local_338, 1),1);
                    }
                    pcVar21 = local_38;
                    recovered_1000f410(&local_348);
                    recovered_10011b10((long)pcVar21,local_348,PF_PART4(uStack_340, 4));
                    pcVar20 = local_38;
                    if (pcVar21[0x871] == '\0') {
                      recovered_10019de0((long)local_38,0x60);
                      pcVar20[0x871] = '\x01';
                    }
                    pcVar21 = local_38;
                    if (local_38[0x872] == '\0') {
                      recovered_10019de0((long)local_38,0x61);
                      pcVar21[0x872] = '\x01';
                    }
                    pcVar21 = local_38;
                    goto LAB_10009cae;
                  }
                }
                else {
LAB_10009cae:
                  uVar14 = local_48;
                  lVar11 = local_a8;
                  pcVar21[0xde4] = '\x01';
                  *(int *)(pcVar21 + 0xdf0) = (int)local_48;
                  recovered_10018800(pcVar21,str_1001ec97,*(uint *)(pcVar21 + 0xde8));
                }
                pcVar21 = local_38;
              }
              if (((pcVar21[0xde4] == '\x01') && (pcVar21[0xdec] == '\0')) &&
                 ((pcVar21[0x873] != '\0' ||
                  (2999 < (uint)((int)uVar14 - *(int *)(pcVar21 + 0xdf0)))))) {
                recovered_1000b130(uVar15,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                                   in_XMM6_Qa,in_XMM7_Qa,(long)pcVar21,0xb,str_1001e799,pcVar17,
                                   pcVar21,puVar23);
              }
            }
            recovered_10011390(local_58,(uint)uVar14);
            uVar15 = CONCAT44(extraout_XMM0_Db_19,extraout_XMM0_Da_19);
          }
        }
        else if (((&DAT_1001fc39)[lVar25] == '\x01') && ((&DAT_1001fe48)[lVar11 * 0x37e] != 0)) {
          (&DAT_1001fc39)[lVar25] = 0;
          DAT_100242c0 = '\0';
          *(undefined1 *)((long)(&DAT_1001fe40)[lVar11 * 0x1bf] + 0xffff) = 0;
          *(char **)(&DAT_1001fe58 + lVar25) = (&DAT_1001fe40)[lVar11 * 0x1bf];
          (&DAT_1001fe61)[lVar25] = 0;
          if ((&DAT_1001f914)[lVar11 * 0x37e] == 2) {
            iVar6 = (&DAT_1001fe4c)[lVar11 * 0x37e];
            if ((&DAT_1001fe63)[lVar25] == '\0') {
              pcVar17 = (char *)(ulong)(iVar6 == 0);
              (&DAT_1001fe63)[lVar25] = 1;
              (&DAT_1001fe68)[lVar11 * 0x37e] = (uint)(iVar6 == 0);
            }
          }
          else if ((&DAT_1001f914)[lVar11 * 0x37e] == 1) {
            (&DAT_1001fe62)[lVar25] = 1;
          }
          (&DAT_1001fe60)[lVar25] = 0;
        }
LAB_10009281:
        pcVar20 = DAT_1001fe40;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 4);
      if ((DAT_1001fc39 != '\0') && (DAT_1001fe48 != 0)) {
        DAT_1001fc39 = '\0';
        DAT_100242c0 = '\0';
        (&DAT_1001fe40)[0xffff] = '\0';
        _DAT_1001fe58 = pcVar20;
        _DAT_1001fe60 = 1;
        if (DAT_1001f914 == 2) {
          if (DAT_1001fe63 == '\0') {
            DAT_1001fe63 = '\x01';
            DAT_1001fe68 = (uint)(DAT_1001fe4c == 0);
          }
        }
        else if (DAT_1001f914 == 1) {
          DAT_1001fe62 = 1;
        }
        if (*pcVar20 == '\0') {
          _DAT_1001fe60 = 0;
        }
      }
      pcVar17 = DAT_10020c38;
      if ((DAT_10020a31 == '\x01') && (DAT_10020c40 != 0)) {
        DAT_10020a31 = '\0';
        DAT_100242c0 = '\0';
        DAT_10020c38[0xffff] = '\0';
        _DAT_10020c50 = pcVar17;
        _DAT_10020c58 = 1;
        if (DAT_1002070c == 1) {
          DAT_10020c5a = 1;
        }
        else if ((DAT_1002070c == 2) && (DAT_10020c5b == '\0')) {
          DAT_10020c5b = '\x01';
          _DAT_10020c60 = (uint)(DAT_10020c44 == 0);
        }
        if (*pcVar17 == '\0') {
          _DAT_10020c58 = 0;
        }
      }
      pcVar17 = DAT_10021a30;
      if ((DAT_10021829 == '\x01') && (DAT_10021a38 != 0)) {
        DAT_10021829 = '\0';
        DAT_100242c0 = '\0';
        DAT_10021a30[0xffff] = '\0';
        _DAT_10021a48 = pcVar17;
        _DAT_10021a50 = 1;
        if (DAT_10021504 == 1) {
          DAT_10021a52 = 1;
        }
        else if ((DAT_10021504 == 2) && (DAT_10021a53 == '\0')) {
          DAT_10021a53 = '\x01';
          _DAT_10021a58 = (uint)(DAT_10021a3c == 0);
        }
        if (*pcVar17 == '\0') {
          _DAT_10021a50 = 0;
        }
      }
      pcVar17 = DAT_10022828;
      if ((DAT_10022621 == '\x01') && (DAT_10022830 != 0)) {
        DAT_10022621 = '\0';
        DAT_100242c0 = '\0';
        DAT_10022828[0xffff] = '\0';
        _DAT_10022840 = pcVar17;
        _DAT_10022848 = 1;
        if (DAT_100222fc == 1) {
          DAT_1002284a = 1;
        }
        else if ((DAT_100222fc == 2) && (DAT_1002284b == '\0')) {
          DAT_1002284b = '\x01';
          _DAT_10022850 = (uint)(DAT_10022834 == 0);
        }
        if (*pcVar17 == '\0') {
          _DAT_10022848 = 0;
        }
      }
      if (DAT_100242c0 == '\0') {
        lVar11 = (ulong)(DAT_100242c4 & 3) * 0xdf8;
        if (((((((&DAT_1001f080)[lVar11] != '\0') &&
               (arg0 = &DAT_1001f080 + lVar11, (&DAT_1001fc38)[lVar11] == '\x01')) &&
              ((&DAT_1001fe6c)[lVar11] == '\0')) ||
             (((lVar11 = (ulong)(DAT_100242c4 + 1 & 3) * 0xdf8, (&DAT_1001f080)[lVar11] == '\x01' &&
               (arg0 = &DAT_1001f080 + lVar11, (&DAT_1001fc38)[lVar11] == '\x01')) &&
              ((&DAT_1001fe6c)[lVar11] != '\x01')))) ||
            (((lVar11 = (ulong)(DAT_100242c4 & 3 ^ 2) * 0xdf8, (&DAT_1001f080)[lVar11] == '\x01' &&
              (arg0 = &DAT_1001f080 + lVar11, (&DAT_1001fc38)[lVar11] == '\x01')) &&
             ((&DAT_1001fe6c)[lVar11] != '\x01')))) ||
           (((lVar11 = (ulong)(DAT_100242c4 - 1 & 3) * 0xdf8, (&DAT_1001f080)[lVar11] == '\x01' &&
             (arg0 = &DAT_1001f080 + lVar11, (&DAT_1001fc38)[lVar11] == '\x01')) &&
            ((&DAT_1001fe6c)[lVar11] != '\x01')))) {
          DAT_100242c4 = *(int *)(arg0 + 4) + 1U & 3;
          *(undefined2 *)(arg0 + 3000) = 0x100;
          *(undefined4 *)(arg0 + 0xdc8) = 0;
          *(undefined4 *)(arg0 + 0xdcc) = 0;
          *(int *)(arg0 + 0xdd0) = (int)uVar14;
          **(undefined1 **)(arg0 + 0xdc0) = 0;
          DAT_100242c0 = '\x01';
          if (DAT_10022a98 == '\x01') {
            recovered_10018800(arg0,str_1001ecb6,arg0 + 0xbba);
          }
          if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
             (((_DAT_00280808 < 0xc ||
               ((_DAT_00280808 < 0x98 || ((code *)(ulong)_DAT_00280894 == (code *)0x0)))) ||
              (iVar6 = (*(code *)(ulong)_DAT_00280894)(recovered_1001d600,arg0,str_1001ecbe),
              iVar6 == 0)))) {
            **(undefined1 **)(arg0 + 0xdc0) = 0;
            uVar9 = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x9b < _DAT_00280808 && ((code *)(ulong)_DAT_00280898 != (code *)0x0)))) {
              uVar9 = (*(code *)(ulong)_DAT_00280898)
                                (arg0 + 0xbba,*(undefined8 *)(arg0 + 0xdc0),0x10000);
            }
            *(undefined4 *)(arg0 + 0xdcc) = uVar9;
            *(undefined4 *)(arg0 + 0xdc8) = 1;
          }
        }
      }
      uVar10 = local_360;
      bVar16 = DAT_10023047;
      bVar31 = local_39;
      if (DAT_1001f080 == '\x01') {
        bVar31 = (DAT_1001fc34 != 0 || DAT_1001f1c0 != 0) || local_bc != 0;
      }
      if (DAT_1001fe78 == '\x01') {
        bVar31 = bVar31 | (DAT_10020a2c != 0 || _DAT_1001ffb8 != 0);
      }
      if (DAT_10020c70 == '\x01') {
        bVar31 = bVar31 | (DAT_10021824 != 0 || _DAT_10020db0 != 0);
      }
      if (DAT_10021a68 == '\x01') {
        bVar31 = bVar31 | (DAT_1002261c != 0 || _DAT_10021ba8 != 0);
      }
      if (DAT_10023047 != ((byte)local_b8 & 1)) {
        if (DAT_10023047 != 0) {
          uVar29 = DAT_10023048 >> 8 & 0xff;
          uVar8 = DAT_10023048 >> 0x10 & 0xff;
          pcVar21 = (char *)(ulong)uVar8;
          puVar23 = (undefined1 *)(ulong)uVar29;
          local_39 = bVar31;
          recovered_100063f0((char *)&local_348,0x14,str_1001ecca,DAT_10023048 >> 0x18,uVar8,uVar29,
                             DAT_10023048 & 0xff);
          iVar6 = recovered_10003750((byte *)&DAT_10022862,&DAT_1001e22d);
          bVar31 = local_39;
          pcVar17 = &DAT_10022862;
          if (iVar6 == 0) {
            pcVar17 = str_1001e267;
          }
          recovered_1000aa30(str_1001e23c,pcVar17,&local_348,(uint)DAT_10022860);
        }
        local_b8 = (ulong)bVar16;
      }
      bVar16 = DAT_1001fe78 + DAT_1001f080 + DAT_10021a68 + DAT_10020c70;
      if (local_ac == bVar16) {
        if (59999 < (uint)((int)local_48 - (int)uVar10)) {
          if (DAT_10022a98 == '\x01') goto LAB_1000a304;
          goto LAB_1000a32d;
        }
      }
      else {
LAB_1000a304:
        pcVar21 = (char *)(ulong)DAT_100230e8;
        recovered_1000aa30(str_1001e26e,(uint)bVar16,DAT_100240ec,DAT_100230e4,DAT_100230e8);
        local_ac = (uint)bVar16;
LAB_1000a32d:
        uVar10 = local_48;
      }
      cVar5 = local_49;
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 &&
          ((0x9f < _DAT_00280808 && ((code *)(ulong)_DAT_0028089c != (code *)0x0)))))) {
        (*(code *)(ulong)_DAT_0028089c)();
      }
      if ((((((bVar31 & 1) == 0) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
          ((0xb < _DAT_00280808 && (0x177 < _DAT_00280808)))) &&
         ((code *)(ulong)_DAT_00280974 != (code *)0x0)) {
        (*(code *)(ulong)_DAT_00280974)(1000);
      }
      goto LAB_10008ab3;
    }
    uVar15 = CONCAT44(uVar32,uVar9);
    if ((((_DAT_00280800 == 0x50414d57) && (uVar15 = CONCAT44(uVar32,uVar9), _DAT_00280804 != 0)) &&
        (uVar15 = CONCAT44(uVar32,uVar9), 0xb < _DAT_00280808)) &&
       (uVar15 = CONCAT44(uVar32,uVar9), 0x2b < _DAT_00280808)) {
      uVar15 = CONCAT44(uVar32,uVar9);
      if ((code *)(ulong)_DAT_00280828 != (code *)0x0) {
        uVar15 = (*(code *)(ulong)_DAT_00280828)(str_1001e2ab);
      }
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
      uVar15 = (*(code *)(ulong)_DAT_00280828)(&DAT_1001e2ce);
    }
    if (DAT_1001f080 != '\0') {
      recovered_1000b130(uVar15,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                         in_XMM7_Qa,((uintptr_t)pf_module_state + 0x19eaU),0xb,str_1001e2b9,uVar19,pcVar21,puVar23);
      uVar15 = CONCAT44(extraout_XMM0_Db_20,extraout_XMM0_Da_20);
    }
    if (DAT_1001fe78 == '\x01') {
      recovered_1000b130(uVar15,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                         in_XMM7_Qa,((uintptr_t)pf_module_state + 0x27e2U),0xb,str_1001e2b9,uVar19,pcVar21,puVar23);
      uVar15 = CONCAT44(extraout_XMM0_Db_22,extraout_XMM0_Da_22);
    }
    if (DAT_10020c70 == '\x01') {
      recovered_1000b130(uVar15,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                         in_XMM7_Qa,((uintptr_t)pf_module_state + 0x35daU),0xb,str_1001e2b9,uVar19,pcVar21,puVar23);
      uVar15 = CONCAT44(extraout_XMM0_Db_21,extraout_XMM0_Da_21);
    }
    if (DAT_10021a68 == '\x01') {
      recovered_1000b130(uVar15,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                         in_XMM7_Qa,((uintptr_t)pf_module_state + 0x43d2U),0xb,str_1001e2b9,uVar19,pcVar21,puVar23);
    }
    uVar29 = 0;
    recovered_10002980((byte *)&local_348,0,0x18);
    local_348 = (undefined8 *)CONCAT44(PF_PART4(local_348, 4),0x18);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (0x16b < _DAT_00280808)) {
      if ((code *)(ulong)_DAT_00280968 != (code *)0x0) {
        iVar6 = (*(code *)(ulong)_DAT_00280968)(&local_348);
        if (iVar6 != 0) {
          uVar29 = (uint)local_338;
        }
      }
    }
    _DAT_100242b8 = _DAT_100242b8 + (ulong)(uVar29 - _DAT_100242b0);
    iVar6 = 200;
    _DAT_100242b0 = uVar29;
    do {
      recovered_10002980((byte *)&local_348,0,0x18);
      local_348 = (undefined8 *)CONCAT44(PF_PART4(local_348, 4),0x18);
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         (((0xb < _DAT_00280808 &&
           ((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)))) &&
          (iVar7 = (*(code *)(ulong)_DAT_00280968)(&local_348), iVar7 != 0)))) {
        uVar29 = (uint)local_338;
      }
      else {
        uVar29 = 0;
      }
      _DAT_100242b8 = (ulong)(uVar29 - _DAT_100242b0) + _DAT_100242b8;
      uVar10 = _DAT_100242b8 * 1000;
      if (uVar10 >> 0x20 == 0) {
        uVar8 = (uint)((uVar10 & 0xffffffff) / (ulong)DAT_100242a8);
      }
      else {
        uVar8 = (uint)(uVar10 / DAT_100242a8);
      }
      _DAT_100242b0 = uVar29;
      recovered_1000ab60(0x10,uVar8);
      recovered_1000af90(&DAT_10022aa0,uVar8);
      recovered_1000af90(&DAT_10022b18,uVar8);
      recovered_1000af90(&DAT_10022b90,uVar8);
      recovered_1000af90(&DAT_10022c08,uVar8);
      recovered_1000af90(&DAT_10022c80,uVar8);
      recovered_1000af90(&DAT_10022cf8,uVar8);
      recovered_1000af90((uint *)&DAT_10022d70,uVar8);
      recovered_1000af90((uint *)&DAT_10022de8,uVar8);
      recovered_1000af90((uint *)&DAT_10022e60,uVar8);
      recovered_1000af90((uint *)&DAT_10022ed8,uVar8);
      recovered_1000af90((uint *)&DAT_10022f50,uVar8);
      recovered_1000af90((uint *)&DAT_10022fc8,uVar8);
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x177 < _DAT_00280808 && ((code *)(ulong)_DAT_00280974 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00280974)(2000);
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar11 = 0;
    do {
      if (*(int *)((long)&DAT_10022aa0 + lVar11) != 0) {
        if (*(int *)((long)&DAT_10022aa0 + lVar11) != 8) {
          recovered_10010ea0((long)&DAT_10022aa0 + lVar11,0x14,
                             (uint)(byte)(&DAT_10022af6)[lVar11] +
                             (uint)(byte)(&DAT_10022af4)[lVar11] +
                             *(int *)((long)&DAT_10022af0 + lVar11) +
                             *(int *)((long)&DAT_10022abc + lVar11),0,0);
        }
        (&DAT_10022afb)[lVar11] = 1;
        *(undefined4 *)((long)&DAT_10022aa0 + lVar11) = 0;
        *(undefined4 *)((long)&DAT_10022ad4 + lVar11) = 0;
        *(undefined4 *)((long)&DAT_10022aec + lVar11) = 0;
        (&DAT_10022b04)[lVar11] = 0;
      }
      lVar11 = lVar11 + 0x78;
    } while (lVar11 != 0x5a0);
    recovered_1000b430(&DAT_1001f080);
    recovered_1000b430(&DAT_1001fe78);
    recovered_1000b430(&DAT_10020c70);
    recovered_1000b430(&DAT_10021a68);
    DAT_100240f0 = 0;
    DAT_100240f1 = 0;
    DAT_100240f2 = 0;
    DAT_100240f3 = 0;
    DAT_100240f4 = 0;
    DAT_100240f5 = 0;
    DAT_100240f6 = 0;
    DAT_100240f7 = 0;
    DAT_100240f8 = 0;
    DAT_100240f9 = 0;
    DAT_100240fa = 0;
    DAT_100240fb = 0;
    DAT_100240fc = 0;
    DAT_100240fd = 0;
    DAT_100240fe = 0;
    DAT_100240ff = 0;
    DAT_10024100 = 0;
    DAT_10024101 = 0;
    DAT_10024102 = 0;
    DAT_10024103 = 0;
    DAT_10024104 = 0;
    DAT_10024105 = 0;
    DAT_10024106 = 0;
    DAT_10024107 = 0;
    DAT_10024108 = 0;
    DAT_10024109 = 0;
    DAT_1002410a = 0;
    DAT_1002410b = 0;
    DAT_1002410c = 0;
    DAT_1002410d = 0;
    DAT_1002410e = 0;
    DAT_1002410f = 0;
    lVar11 = 0;
    do {
      (&DAT_100241a8)[lVar11] = 0;
      (&DAT_100241a9)[lVar11] = 0;
      (&DAT_100241aa)[lVar11] = 0;
      (&DAT_100241ab)[lVar11] = 0;
      (&DAT_100241ac)[lVar11] = 0;
      (&DAT_100241ad)[lVar11] = 0;
      (&DAT_100241ae)[lVar11] = 0;
      (&DAT_100241af)[lVar11] = 0;
      lVar11 = lVar11 + 8;
    } while (lVar11 != 0x100);
    if (_DAT_00280800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_00280804 == 0) {
      return 0;
    }
    if (_DAT_00280808 < 0xc) {
      return 0;
    }
    if (_DAT_00280808 < 0x34) {
      return 0;
    }
    iVar6 = 0;
  }
  else {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x2b < _DAT_00280808 && (pcVar13 = (code *)(ulong)_DAT_00280828, pcVar13 != (code *)0x0)))
        ))) {
      pcVar21 = str_1001e5f1;
LAB_10008670:
      (*pcVar13)(pcVar21);
    }
LAB_10008672:
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && (_DAT_00280828 != 0)))) {
      pcVar13 = (code *)(ulong)_DAT_00280828;
LAB_100085a3:
      (*pcVar13)(&DAT_1001e2ce);
    }
LAB_100086b4:
    iVar6 = 1;
    if (_DAT_00280800 != 0x50414d57) {
      return 1;
    }
    if (_DAT_00280804 == 0) {
      return 1;
    }
    if (_DAT_00280808 < 0xc) {
      return 1;
    }
    if (_DAT_00280808 < 0x34) {
      return 1;
    }
  }
  _DAT_00280800 = 0x50414d57;
  if (_DAT_00280830 != 0) {
    (*(code *)(ulong)_DAT_00280830)();
  }
  return iVar6;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280820
#undef DAT_00280828
#undef DAT_0028082c
#undef DAT_00280830
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028084c
#undef DAT_00280894
#undef DAT_00280898
#undef DAT_0028089c
#undef DAT_002808f8
#undef DAT_00280924
#undef DAT_00280968
#undef DAT_00280974
#undef DAT_002809fc
#undef DAT_00280a04
#undef DAT_1001d7c0
#undef DAT_1001d7d0
#undef DAT_1001e22d
#undef DAT_1001e238
#undef DAT_1001e2ce
#undef DAT_1001e32c
#undef DAT_1001e343
#undef DAT_1001e588
#undef DAT_1001e7c5
#undef DAT_1001f080
#undef DAT_1001f084
#undef DAT_1001f088
#undef DAT_1001f090
#undef DAT_1001f0a0
#undef DAT_1001f1a0
#undef DAT_1001f1c0
#undef DAT_1001f914
#undef DAT_1001fc34
#undef DAT_1001fc38
#undef DAT_1001fc39
#undef DAT_1001fe40
#undef DAT_1001fe48
#undef DAT_1001fe4c
#undef DAT_1001fe58
#undef DAT_1001fe60
#undef DAT_1001fe61
#undef DAT_1001fe62
#undef DAT_1001fe63
#undef DAT_1001fe64
#undef DAT_1001fe68
#undef DAT_1001fe6c
#undef DAT_1001fe78
#undef DAT_1001fe80
#undef DAT_1001fe88
#undef DAT_1001ffb8
#undef DAT_1002070c
#undef DAT_10020a2c
#undef DAT_10020a31
#undef DAT_10020c38
#undef DAT_10020c40
#undef DAT_10020c44
#undef DAT_10020c50
#undef DAT_10020c58
#undef DAT_10020c5a
#undef DAT_10020c5b
#undef DAT_10020c60
#undef DAT_10020c70
#undef DAT_10020c78
#undef DAT_10020c80
#undef DAT_10020db0
#undef DAT_10021504
#undef DAT_10021824
#undef DAT_10021829
#undef DAT_10021a30
#undef DAT_10021a38
#undef DAT_10021a3c
#undef DAT_10021a48
#undef DAT_10021a50
#undef DAT_10021a52
#undef DAT_10021a53
#undef DAT_10021a58
#undef DAT_10021a68
#undef DAT_10021a70
#undef DAT_10021a78
#undef DAT_10021ba8
#undef DAT_100222fc
#undef DAT_1002261c
#undef DAT_10022621
#undef DAT_10022828
#undef DAT_10022830
#undef DAT_10022834
#undef DAT_10022840
#undef DAT_10022848
#undef DAT_1002284a
#undef DAT_1002284b
#undef DAT_10022850
#undef DAT_10022860
#undef DAT_10022862
#undef DAT_10022863
#undef DAT_100228a2
#undef DAT_10022922
#undef DAT_10022924
#undef DAT_10022928
#undef DAT_1002292c
#undef DAT_10022930
#undef DAT_10022a30
#undef DAT_10022a3a
#undef DAT_10022a70
#undef DAT_10022a90
#undef DAT_10022a94
#undef DAT_10022a98
#undef DAT_10022aa0
#undef DAT_10022aa4
#undef DAT_10022ab0
#undef DAT_10022ab4
#undef DAT_10022abc
#undef DAT_10022ad4
#undef DAT_10022ae0
#undef DAT_10022aec
#undef DAT_10022af0
#undef DAT_10022af4
#undef DAT_10022af6
#undef DAT_10022afb
#undef DAT_10022b04
#undef DAT_10022b0c
#undef DAT_10022b18
#undef DAT_10022b90
#undef DAT_10022c08
#undef DAT_10022c80
#undef DAT_10022cf8
#undef DAT_10022d70
#undef DAT_10022de8
#undef DAT_10022e60
#undef DAT_10022ed8
#undef DAT_10022f50
#undef DAT_10022fc8
#undef DAT_10023040
#undef DAT_10023046
#undef DAT_10023047
#undef DAT_10023048
#undef DAT_100230bc
#undef DAT_100230c0
#undef DAT_100230cc
#undef DAT_100230d0
#undef DAT_100230d4
#undef DAT_100230d8
#undef DAT_100230dc
#undef DAT_100230e0
#undef DAT_100230e4
#undef DAT_100230e8
#undef DAT_100240ec
#undef DAT_100240f0
#undef DAT_100240f1
#undef DAT_100240f2
#undef DAT_100240f3
#undef DAT_100240f4
#undef DAT_100240f5
#undef DAT_100240f6
#undef DAT_100240f7
#undef DAT_100240f8
#undef DAT_100240f9
#undef DAT_100240fa
#undef DAT_100240fb
#undef DAT_100240fc
#undef DAT_100240fd
#undef DAT_100240fe
#undef DAT_100240ff
#undef DAT_10024100
#undef DAT_10024101
#undef DAT_10024102
#undef DAT_10024103
#undef DAT_10024104
#undef DAT_10024105
#undef DAT_10024106
#undef DAT_10024107
#undef DAT_10024108
#undef DAT_10024109
#undef DAT_1002410a
#undef DAT_1002410b
#undef DAT_1002410c
#undef DAT_1002410d
#undef DAT_1002410e
#undef DAT_1002410f
#undef DAT_10024110
#undef DAT_1002412f
#undef DAT_10024130
#undef DAT_10024134
#undef DAT_10024164
#undef DAT_10024168
#undef DAT_100241a8
#undef DAT_100241a9
#undef DAT_100241aa
#undef DAT_100241ab
#undef DAT_100241ac
#undef DAT_100241ad
#undef DAT_100241ae
#undef DAT_100241af
#undef DAT_100242a8
#undef DAT_100242b0
#undef DAT_100242b8
#undef DAT_100242c0
#undef DAT_100242c4
#undef UNK_1001d7c8
#undef UNK_1001d7d8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280820
#undef _DAT_00280828
#undef _DAT_0028082c
#undef _DAT_00280830
#undef _DAT_00280834
#undef _DAT_00280838
#undef _DAT_0028084c
#undef _DAT_00280894
#undef _DAT_00280898
#undef _DAT_0028089c
#undef _DAT_002808f8
#undef _DAT_00280924
#undef _DAT_00280968
#undef _DAT_00280974
#undef _DAT_002809fc
#undef _DAT_00280a04
#undef _DAT_1001d7c0
#undef _DAT_1001d7d0
#undef _DAT_1001fe58
#undef _DAT_1001fe60
#undef _DAT_1001ffb8
#undef _DAT_10020c50
#undef _DAT_10020c58
#undef _DAT_10020c60
#undef _DAT_10020db0
#undef _DAT_10021a48
#undef _DAT_10021a50
#undef _DAT_10021a58
#undef _DAT_10021ba8
#undef _DAT_10022840
#undef _DAT_10022848
#undef _DAT_10022850
#undef _DAT_100230cc
#undef _DAT_100230d0
#undef _DAT_100230dc
#undef _DAT_100242b0
#undef _DAT_100242b8
#undef str_1001db2e
#undef str_1001dde0
#undef str_1001e190
#undef str_1001e1a4
#undef str_1001e1d3
#undef str_1001e1fa
#undef str_1001e22f
#undef str_1001e23c
#undef str_1001e267
#undef str_1001e26e
#undef str_1001e2ab
#undef str_1001e2b9
#undef str_1001e2d1
#undef str_1001e2e1
#undef str_1001e301
#undef str_1001e331
#undef str_1001e33a
#undef str_1001e348
#undef str_1001e350
#undef str_1001e358
#undef str_1001e360
#undef str_1001e367
#undef str_1001e370
#undef str_1001e37b
#undef str_1001e384
#undef str_1001e391
#undef str_1001e399
#undef str_1001e3cd
#undef str_1001e404
#undef str_1001e446
#undef str_1001e48f
#undef str_1001e4b0
#undef str_1001e4cd
#undef str_1001e4e8
#undef str_1001e511
#undef str_1001e535
#undef str_1001e565
#undef str_1001e590
#undef str_1001e5a1
#undef str_1001e5b0
#undef str_1001e5f1
#undef str_1001e616
#undef str_1001e634
#undef str_1001e649
#undef str_1001e677
#undef str_1001e6eb
#undef str_1001e703
#undef str_1001e724
#undef str_1001e72a
#undef str_1001e73e
#undef str_1001e764
#undef str_1001e774
#undef str_1001e78b
#undef str_1001e799
#undef str_1001e7a8
#undef str_1001e7ca
#undef str_1001e7d3
#undef str_1001e7dc
#undef str_1001e7f9
#undef str_1001ec8b
#undef str_1001ec97
#undef str_1001ecb6
#undef str_1001ecbe
#undef str_1001ecca
#undef uRam000000001001d7c8
#undef uRam000000001001d7d8
#undef local_498
#undef local_418
#undef local_398
#undef local_378
#undef local_360
#undef local_354
#undef local_350
#undef local_348
#undef local_338
#undef local_328
#undef local_320
#undef local_308
#undef local_300
#undef local_2e0
#undef local_2c8
#undef local_280
#undef local_248
#undef local_148
#undef local_140
#undef local_13c
#undef local_13b
#undef local_13a
#undef local_139
#undef local_138
#undef local_128
#undef local_bc
#undef local_b8
#undef local_ac
#undef local_a8
#undef local_a0
#undef local_98
#undef local_97
#undef local_96
#undef local_95
#undef local_94
#undef local_93
#undef local_92
#undef local_91
#undef local_90
#undef local_8f
#undef local_8e
#undef local_8d
#undef local_8c
#undef local_8b
#undef local_8a
#undef local_89
#undef local_88
#undef local_87
#undef local_86
#undef local_85
#undef local_84
#undef local_83
#undef local_82
#undef local_81
#undef local_80
#undef local_7f
#undef local_7e
#undef local_7d
#undef local_7c
#undef local_7b
#undef local_7a
#undef local_79
#undef local_78
#undef local_77
#undef local_76
#undef local_75
#undef local_74
#undef local_73
#undef local_72
#undef local_71
#undef local_70
#undef local_6f
#undef local_6e
#undef local_6d
#undef local_6c
#undef local_6b
#undef local_6a
#undef local_69
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef local_62
#undef local_61
#undef local_60
#undef local_5f
#undef local_5e
#undef local_5d
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_49
#undef local_48
#undef local_39
#undef local_38
#undef uStack_370
#undef acStack_34c
#undef uStack_340
#undef uStack_330
#undef uStack_130

/* Recovered kernel console boundary; Pooka's Free Software License. */
void recovered_1000a9a0(char *text) {
    volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800;
    if(api[0]==0x50414d57U && api[1] && api[2]>=0x2cU && api[0x28/4])
        ((void (*)(char *))(uintptr_t)api[0x28/4])(text);
    if(api[0]==0x50414d57U && api[1] && api[2]>=0x2cU && api[0x28/4])
        ((void (*)(char *))(uintptr_t)api[0x28/4])("\r\n");
}


/* Recovered variadic console formatting; Pooka's Free Software License. */
void recovered_1000aa30(char *format,...) {
    char text[256];
    __builtin_va_list arguments;
    __builtin_va_start(arguments,format);
    recovered_10005510(text,sizeof(text),format,(void *)arguments);
    __builtin_va_end(arguments);
    recovered_1000a9a0(text);
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280928
#define DAT_00280928 (*(uint8_t *)(0x280928U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_1001ddd0
#define DAT_1001ddd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73aU)))
#undef DAT_10023040
#define DAT_10023040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59aaU)))
#undef DAT_10023047
#define DAT_10023047 (*(char *)(((uintptr_t)pf_module_state + 0x59b1U)))
#undef DAT_10023048
#define DAT_10023048 (*(uint *)(((uintptr_t)pf_module_state + 0x59b2U)))
#undef DAT_100230e4
#define DAT_100230e4 (*(int *)(((uintptr_t)pf_module_state + 0x5a4eU)))
#undef DAT_100230ec
#define DAT_100230ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a56U)))
#undef DAT_100230f8
#define DAT_100230f8 (*(ushort *)(((uintptr_t)pf_module_state + 0x5a62U)))
#undef DAT_100230fa
#define DAT_100230fa (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
#undef DAT_100230fc
#define DAT_100230fc (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a66U)))
#undef DAT_100230fe
#define DAT_100230fe (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a68U)))
#undef DAT_10023100
#define DAT_10023100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a6aU)))
#undef DAT_10023102
#define DAT_10023102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a6cU)))
#undef DAT_10023108
#define DAT_10023108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a72U)))
#undef DAT_1002310c
#define DAT_1002310c (*(ushort *)(((uintptr_t)pf_module_state + 0x5a76U)))
#undef DAT_10023112
#define DAT_10023112 (*(uint *)(((uintptr_t)pf_module_state + 0x5a7cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280928
#define _DAT_00280928 (*(uint *)(0x280928U))
#undef _DAT_00280968
#define _DAT_00280968 (*(uint *)(0x280968U))
#undef _DAT_10023100
#define _DAT_10023100 (*(uint *)(((uintptr_t)pf_module_state + 0x5a6aU)))
#define local_60 (*(ulong (*)[12])(pf_stack_frame + 16))
#define local_50 (*(uint *)(pf_stack_frame + 32))
#define local_44 (*(uint *)(pf_stack_frame + 44))
#define local_40 (*(uint *)(pf_stack_frame + 48))
#define local_3a (*(ushort *)(pf_stack_frame + 54))
#define local_38 (*(uint *)(pf_stack_frame + 56))
#define local_34 (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000ab60(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 *in_R8;

  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    iVar9 = 0;
    local_40 = param_2;
    do {
      local_34 = 0;
      if (_DAT_00280800 != 0x50414d57) {
        return iVar9;
      }
      if (_DAT_00280804 == 0) {
        return iVar9;
      }
      if (_DAT_00280808 < 0xc) {
        return iVar9;
      }
      if (_DAT_00280808 < 300) {
        return iVar9;
      }
      if ((code *)(ulong)_DAT_00280928 == (code *)0x0) {
        return iVar9;
      }
      iVar2 = (*(code *)(ulong)_DAT_00280928)(&DAT_100230ec,0x800,&local_34);
      if (iVar2 == 0) {
        return iVar9;
      }
      if (local_34 < 0xe) {
        return iVar9;
      }
      DAT_100230e4 = DAT_100230e4 + 1;
      recovered_10002980((byte *)local_60,0,0x18);
      local_60[0] = CONCAT44(PF_PART4(local_60[0], 4),0x18);
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         (((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)) &&
          (iVar2 = (*(code *)(ulong)_DAT_00280968)(local_60), iVar2 != 0)))) {
        uVar5 = (ulong)local_50;
      }
      else {
        uVar5 = 0;
      }
      local_60[0] = (ulong)local_34 | uVar5 << 0x20;
      recovered_1000b560((long)local_60,8);
      iVar2 = recovered_100032a0((ulong *)&DAT_100230ec,(ulong *)&DAT_10023040,6);
      if ((iVar2 == 0) ||
         (iVar2 = recovered_100032a0((ulong *)&DAT_100230ec,(ulong *)&DAT_1001ddd0,6), iVar2 == 0))
      {
        uVar1 = DAT_100230f8 << 8 | DAT_100230f8 >> 8;
        if (uVar1 == 0x800) {
          if (0x21 < local_34) {
            if (((byte)DAT_100230fa & 0xfffffff0) == 0x40) {
              uVar3 = (byte)DAT_100230fa & 0xf;
              uVar6 = uVar3 * 4;
              uVar5 = (ulong)uVar6;
              if (0x13 < uVar6) {
                uVar4 = (uint)(ushort)(DAT_100230fc << 8 | DAT_100230fc >> 8);
                uVar3 = uVar4 + uVar3 * -4;
                if ((uVar6 <= uVar4) && (uVar4 + 0xe <= local_34)) {
                  lVar8 = (uVar5 - 2 >> 1) + 1;
                  uVar7 = 0;
                  uVar4 = 0;
                  do {
                    uVar4 = (ushort)(*(ushort *)((long)&DAT_100230fa + uVar7) << 8 |
                                    *(ushort *)((long)&DAT_100230fa + uVar7) >> 8) + uVar4;
                    in_R8 = (undefined8 *)(ulong)uVar4;
                    uVar4 = (ushort)(*(ushort *)((long)&DAT_100230fc + uVar7) << 8 |
                                    *(ushort *)((long)&DAT_100230fc + uVar7) >> 8) + uVar4;
                    uVar7 = uVar7 + 4;
                    lVar8 = lVar8 + -2;
                  } while (lVar8 != 0);
                  if ((uint)uVar7 < uVar6) {
                    uVar4 = uVar4 + (uint)*(byte *)((long)&DAT_100230fa + (uVar7 & 0xffffffff)) *
                                    0x100;
                  }
                  for (; 0xffff < uVar4; uVar4 = (uVar4 & 0xffff) + (uVar4 >> 0x10)) {
                  }
                  if ((uVar4 == 0xffff) &&
                     ((short)((_DAT_10023100 & 0x3f) << 8) == 0 && PF_PART1(DAT_10023100, 1) == '\0')) {
                    uVar4 = _DAT_10023100 >> 0x18;
                    if (uVar4 == 0x11) {
                      if ((((7 < uVar3) &&
                           (uVar1 = *(ushort *)((long)&DAT_100230fe + uVar5) << 8 |
                                    *(ushort *)((long)&DAT_100230fe + uVar5) >> 8, 7 < uVar1)) &&
                          (uVar1 <= uVar3)) &&
                         ((ushort)(*(ushort *)((long)&DAT_100230fc + uVar5) << 8 |
                                  *(ushort *)((long)&DAT_100230fc + uVar5) >> 8) == 0x44)) {
                        recovered_10010020(&DAT_10023102 + uVar5,uVar1 - 8,local_40);
                      }
                    }
                    else if ((DAT_10023047 == '\x01') &&
                            (((uint)(DAT_1002310c >> 8) | (DAT_1002310c & 0xff) << 8 |
                              (PF_PART2(DAT_10023108, 2) & 0xff00) << 8 |
                             CONCAT22(DAT_1002310c,PF_PART2(DAT_10023108, 2)) << 0x18) == DAT_10023048)) {
                      if (uVar4 == 1) {
                        recovered_10010890(uVar5,uVar3);
                      }
                      else if (uVar4 == 6) {
                        recovered_10010310(uVar6,uVar3,local_40);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if (((uVar1 == 0x806) && (0x29 < local_34)) &&
                (((ushort)(DAT_100230fa << 8 | DAT_100230fa >> 8) == 1 &&
                 ((((ushort)(DAT_100230fc << 8 | DAT_100230fc >> 8) == 0x800 &&
                   ((char)DAT_100230fe == '\x06')) && (PF_PART1(DAT_100230fe, 1) == '\x04')))))) {
          uVar3 = (uint)(PF_PART2(DAT_10023108, 2) >> 8) | (PF_PART2(DAT_10023108, 2) & 0xff) << 8 |
                  ((ushort)DAT_10023108 & 0xff00) << 8 |
                  CONCAT22(PF_PART2(DAT_10023108, 2),(ushort)DAT_10023108) << 0x18;
          uVar6 = DAT_10023112;
          uVar1 = (ushort)_DAT_10023100;
          if (uVar3 != 0) {
            local_44 = DAT_10023112;
            local_3a = (ushort)_DAT_10023100;
            local_38 = uVar3;
            recovered_1000fee0(uVar3,&DAT_10023102);
            uVar3 = local_38;
            uVar6 = local_44;
            uVar1 = local_3a;
          }
          if ((((ushort)(uVar1 << 8 | uVar1 >> 8) == 1) && (DAT_10023047 == '\x01')) &&
             (uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18, uVar6 == DAT_10023048)) {
            local_38 = uVar3;
            recovered_10001c80(local_60,(undefined8 *)&DAT_10023102,6,(ulong)uVar6,in_R8);
            recovered_1000fdd0(2,local_60,local_38,local_60);
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != param_1);
  }
  return param_1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280928
#undef DAT_00280968
#undef DAT_1001ddd0
#undef DAT_10023040
#undef DAT_10023047
#undef DAT_10023048
#undef DAT_100230e4
#undef DAT_100230ec
#undef DAT_100230f8
#undef DAT_100230fa
#undef DAT_100230fc
#undef DAT_100230fe
#undef DAT_10023100
#undef DAT_10023102
#undef DAT_10023108
#undef DAT_1002310c
#undef DAT_10023112
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280928
#undef _DAT_00280968
#undef _DAT_10023100
#undef local_60
#undef local_50
#undef local_44
#undef local_40
#undef local_3a
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af90
 */

void recovered_1000af90(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uVar1 = *param_1;
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 != 1) {
    if (uVar1 != 8) {
      if (((uVar1 & 0xfffffffc) == 4) && (4999 < param_2 - param_1[0x1b])) goto LAB_1000afe5;
      goto LAB_1000b02a;
    }
    if (param_2 - param_1[0x1b] < 1000) {
      return;
    }
LAB_1000b077:
    *param_1 = 0;
    param_1[0xd] = 0;
    param_1[0x13] = 0;
LAB_1000b08b:
    *(undefined1 *)(param_1 + 0x19) = 0;
    return;
  }
  if (29999 < param_2 - param_1[0x1b]) {
LAB_1000afe5:
    recovered_10010ea0((long)param_1,0x14,
                       (uint)*(byte *)((long)param_1 + 0x56) + (uint)(byte)param_1[0x15] +
                       param_1[0x14] + param_1[7],0,0);
    *(undefined1 *)((long)param_1 + 0x5b) = 1;
    *param_1 = 0;
    param_1[0xd] = 0;
    param_1[0x13] = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    return;
  }
LAB_1000b02a:
  if (((char)param_1[0x19] != '\x01') || ((int)(param_2 - param_1[0x18]) < 0)) goto LAB_1000b0fd;
  if (7 < param_1[0x1a]) {
    if ((uVar1 & 0xfffffff7) != 0) {
      recovered_10010ea0((long)param_1,0x14,
                         (uint)*(byte *)((long)param_1 + 0x56) + (uint)(byte)param_1[0x15] +
                         param_1[0x14] + param_1[7],0,0);
    }
    *(undefined1 *)((long)param_1 + 0x5b) = 1;
    goto LAB_1000b077;
  }
  param_1[0x1a] = param_1[0x1a] + 1;
  if (uVar1 == 1) {
    uVar2 = param_1[7];
    bVar3 = 0x12;
LAB_1000b0a8:
    uVar1 = 0;
    uVar4 = 0;
  }
  else {
    uVar1 = param_1[0x14];
    if (uVar1 == 0) {
      if (*(char *)((long)param_1 + 0x56) != '\x01') goto LAB_1000b08b;
      uVar2 = param_1[7];
      bVar3 = 0x11;
      goto LAB_1000b0a8;
    }
    uVar2 = param_1[7];
    uVar4 = param_1[9];
    if (uVar1 < param_1[9]) {
      uVar4 = uVar1;
    }
    uVar1 = param_1[0x12];
    bVar3 = 0x18;
  }
  recovered_10010ea0((long)param_1,bVar3,uVar2,uVar1,uVar4);
  uVar1 = 8000;
  if (param_1[0x17] * 2 < 8000) {
    uVar1 = param_1[0x17] * 2;
  }
  param_1[0x17] = uVar1;
  param_1[0x18] = uVar1 + param_2;
  *(undefined1 *)(param_1 + 0x19) = 1;
LAB_1000b0fd:
  if (*(char *)((long)param_1 + 0x5a) == '\x01') {
    recovered_10011390(param_1,param_2);
    return;
  }
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_1001e588
#define DAT_1001e588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xef2U)))
#undef DAT_100242a8
#define DAT_100242a8 (*(uint *)(((uintptr_t)pf_module_state + 0x6c12U)))
#undef DAT_100242b0
#define DAT_100242b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c1aU)))
#undef DAT_100242b8
#define DAT_100242b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c22U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280968
#define _DAT_00280968 (*(uint *)(0x280968U))
#undef _DAT_100242b0
#define _DAT_100242b0 (*(int *)(((uintptr_t)pf_module_state + 0x6c1aU)))
#undef _DAT_100242b8
#define _DAT_100242b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6c22U)))
#undef str_1001ecd6
#define str_1001ecd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1640U)))
#define local_48 (*(uint (*)[18])(pf_stack_frame + 24))
#define local_38 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b130
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000b130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,undefined8 *param_11,undefined8 param_12,
                       undefined8 *param_13,undefined8 param_14)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;

  if (*(char *)(param_9 + 0xdec) == '\0') {
    recovered_10018800((void *)param_9,str_1001ecd6,param_11);
  }
  puVar1 = *(uint **)(param_9 + 8);
  if ((((puVar1 != (uint *)0x0) &&
       (uVar8 = (ulong)puVar1[1], puVar1[1] == *(uint *)(param_9 + 0x10))) &&
      ((*puVar1 & 0xfffffffe) == 2)) && (*(char *)(param_9 + 0xdec) == '\0')) {
    puVar2 = *(undefined8 **)(param_9 + 0x150);
    local_48[0] = CONCAT31(PF_PART3(local_48[0], 1),1);
    recovered_10001c80(puVar2,(undefined8 *)local_48,1,uVar8,param_13);
    local_48[0] = (uint)param_10 >> 0x18 | ((uint)param_10 & 0xff0000) >> 8 |
                  ((uint)param_10 & 0xff00) << 8 | (uint)param_10 << 0x18;
    recovered_10001c80((undefined8 *)((long)puVar2 + 1),(undefined8 *)local_48,4,uVar8,param_13);
    lVar6 = recovered_10003720((long)param_11);
    uVar4 = (uint)lVar6;
    local_48[0] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    recovered_10001c80((undefined8 *)((long)puVar2 + 5),(undefined8 *)local_48,4,uVar8,param_13);
    uVar9 = 9;
    if (uVar4 < 0x1ff8) {
      if (uVar4 != 0) {
        recovered_10001c80((undefined8 *)((long)puVar2 + 9),param_11,(ulong)(uVar4 & 0x1fff),uVar8,
                           param_13);
      }
      uVar9 = uVar4 + 9;
    }
    uVar7 = recovered_10003720(((uintptr_t)pf_module_state + 0xef2U));
    uVar3 = (uint)uVar7;
    local_48[0] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if (uVar9 < 0x1ffd && uVar4 < 0x1ff8) {
      recovered_10001c80((undefined8 *)((ulong)uVar9 + (long)puVar2),(undefined8 *)local_48,4,uVar8,
                         param_13);
      uVar4 = 0x1ffc - uVar9;
      uVar9 = uVar9 + 4;
      if (uVar3 <= uVar4) {
        if (uVar3 != 0) {
          recovered_10001c80((undefined8 *)((ulong)uVar9 + (long)puVar2),(undefined8 *)&DAT_1001e588
                             ,uVar7 & 0xffffffff,uVar8,param_13);
        }
        uVar9 = uVar9 + uVar3;
      }
    }
    recovered_10011b10(param_9,puVar2,uVar9);
  }
  *(undefined1 *)(param_9 + 0xdec) = 1;
  iVar10 = 0;
  recovered_10002980((byte *)local_48,0,0x18);
  local_48[0] = 0x18;
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)))))) {
    iVar5 = (*(code *)(ulong)_DAT_00280968)(local_48);
    if (iVar5 != 0) {
      iVar10 = local_38;
    }
  }
  _DAT_100242b8 = (ulong)(uint)(iVar10 - _DAT_100242b0) + _DAT_100242b8;
  uVar8 = _DAT_100242b8 * 1000;
  if (uVar8 >> 0x20 == 0) {
    uVar4 = (uint)((uVar8 & 0xffffffff) / (ulong)DAT_100242a8);
  }
  else {
    uVar4 = (uint)(uVar8 / DAT_100242a8);
  }
  _DAT_100242b0 = iVar10;
  *(uint *)(param_9 + 0xdf0) = uVar4;
  puVar1 = *(uint **)(param_9 + 8);
  if ((puVar1 != (uint *)0x0) && (puVar1[1] == *(uint *)(param_9 + 0x10))) {
    if (*puVar1 - 2 < 2) {
      *(undefined1 *)((long)puVar1 + 0x55) = 1;
      recovered_10011390(puVar1,uVar4);
    }
    else if (*puVar1 == 1) {
      recovered_10010ea0((long)puVar1,0x14,
                         (uint)*(byte *)((long)puVar1 + 0x56) + (uint)(byte)puVar1[0x15] +
                         puVar1[0x14] + puVar1[7],0,0);
      *(undefined1 *)((long)puVar1 + 0x5b) = 1;
      *puVar1 = 0;
      puVar1[0xd] = 0;
      puVar1[0x13] = 0;
      *(undefined1 *)(puVar1 + 0x19) = 0;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280968
#undef DAT_1001e588
#undef DAT_100242a8
#undef DAT_100242b0
#undef DAT_100242b8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280968
#undef _DAT_100242b0
#undef _DAT_100242b8
#undef str_1001ecd6
#undef local_48
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3d0
 */

void recovered_1000b3d0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((*param_1 & 0xfffffff7) != 0) {
    recovered_10010ea0((long)param_1,0x14,
                       (uint)*(byte *)((long)param_1 + 0x56) + (uint)(byte)param_1[0x15] +
                       param_1[0x14] + param_1[7],0,0);
  }
  *(undefined1 *)((long)param_1 + 0x5b) = 1;
  *param_1 = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b430
 */

void recovered_1000b430(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  long lVar2;

  piVar1 = *(int **)(param_1 + 8);
  if (((piVar1 != (int *)0x0) && (piVar1[1] == *(int *)(param_1 + 0x10))) && (*piVar1 - 1U < 3)) {
    recovered_10010ea0((long)piVar1,0x14,
                       (uint)*(byte *)((long)piVar1 + 0x56) + (uint)*(byte *)(piVar1 + 0x15) +
                       piVar1[0x14] + piVar1[7],0,0);
    *(undefined1 *)((long)piVar1 + 0x5b) = 1;
    *piVar1 = 0;
    piVar1[0xd] = 0;
    piVar1[0x13] = 0;
    *(undefined1 *)(piVar1 + 0x19) = 0;
  }
  lVar2 = 0x160;
  do {
    param_1[lVar2] = 0;
    param_1[lVar2 + 1] = 0;
    param_1[lVar2 + 2] = 0;
    param_1[lVar2 + 3] = 0;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x2fc);
  lVar2 = 0x2fc;
  do {
    param_1[lVar2] = 0;
    param_1[lVar2 + 1] = 0;
    param_1[lVar2 + 2] = 0;
    param_1[lVar2 + 3] = 0;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x498);
  lVar2 = 0x4dc;
  do {
    param_1[lVar2] = 0;
    param_1[lVar2 + 1] = 0;
    param_1[lVar2 + 2] = 0;
    param_1[lVar2 + 3] = 0;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x678);
  lVar2 = 0x678;
  do {
    param_1[lVar2] = 0;
    param_1[lVar2 + 1] = 0;
    param_1[lVar2 + 2] = 0;
    param_1[lVar2 + 3] = 0;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x814);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


#undef DAT_100241a8
#define DAT_100241a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b12U)))
#undef DAT_100241b0
#define DAT_100241b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b1aU)))
#undef DAT_100241b8
#define DAT_100241b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b22U)))
#undef DAT_100241c0
#define DAT_100241c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b2aU)))
#undef DAT_100241c8
#define DAT_100241c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b32U)))
#undef DAT_100241d0
#define DAT_100241d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b3aU)))
#undef DAT_100241d8
#define DAT_100241d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b42U)))
#undef DAT_100241e0
#define DAT_100241e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b4aU)))
#undef DAT_100241e8
#define DAT_100241e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b52U)))
#undef DAT_100241f0
#define DAT_100241f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b5aU)))
#undef DAT_10024270
#define DAT_10024270 (*(uint *)(((uintptr_t)pf_module_state + 0x6bdaU)))
#undef DAT_100242a0
#define DAT_100242a0 (*(int *)(((uintptr_t)pf_module_state + 0x6c0aU)))
#undef DAT_100242a4
#define DAT_100242a4 (*(char *)(((uintptr_t)pf_module_state + 0x6c0eU)))
#undef _DAT_100241a8
#define _DAT_100241a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b12U)))
#undef _DAT_100241b0
#define _DAT_100241b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b1aU)))
#undef _DAT_100241b8
#define _DAT_100241b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b22U)))
#undef _DAT_100241c0
#define _DAT_100241c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b2aU)))
#undef _DAT_100241c8
#define _DAT_100241c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b32U)))
#undef _DAT_100241d0
#define _DAT_100241d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b3aU)))
#undef _DAT_100241d8
#define _DAT_100241d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b42U)))
#undef _DAT_100241e0
#define _DAT_100241e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b4aU)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000b560(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *in_R8;
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;

  local_38 = rdtsc();
  if ((DAT_100242a4 == '\0') && (DAT_100242a0 == 0)) {
    _DAT_100241a8 = 0x6a09e667f3bcc908;
    _DAT_100241b0 = 0xbb67ae8584caa73b;
    _DAT_100241b8 = 0x3c6ef372fe94f82b;
    _DAT_100241c0 = 0xa54ff53a5f1d36f1;
    _DAT_100241c8 = 0x510e527fade682d1;
    _DAT_100241d0 = 0x9b05688c2b3e6c1f;
    _DAT_100241d8 = 0x1f83d9abfb41bd6b;
    _DAT_100241e0 = 0x5be0cd19137e2179;
    DAT_10024270 = 0;
    DAT_100241e8 = 8;
  }
  else {
    DAT_100241e8 = DAT_100241e8 + 8;
  }
  puVar1 = &local_38;
  uVar3 = 8;
  do {
    uVar2 = (ulong)(0x80 - DAT_10024270);
    if (uVar3 < 0x80 - DAT_10024270) {
      uVar2 = uVar3;
    }
    recovered_10001c80((undefined8 *)(&DAT_100241f0 + DAT_10024270),puVar1,uVar2,&DAT_100241a8,in_R8
                      );
    DAT_10024270 = DAT_10024270 + (int)uVar2;
    if (DAT_10024270 == 0x80) {
      recovered_1000b770((ulong *)&DAT_100241a8,((uintptr_t)pf_module_state + 0x6b5aU));
      DAT_10024270 = 0;
    }
    puVar1 = (undefined8 *)((long)puVar1 + uVar2);
    uVar3 = uVar3 - uVar2;
  } while (uVar3 != 0);
  if (param_2 != 0 && param_1 != 0) {
    DAT_100241e8 = DAT_100241e8 + param_2;
    do {
      uVar3 = (ulong)(0x80 - DAT_10024270);
      if (param_2 < 0x80 - DAT_10024270) {
        uVar3 = param_2;
      }
      recovered_10001c80((undefined8 *)(&DAT_100241f0 + DAT_10024270),(undefined8 *)param_1,uVar3,
                         &DAT_100241a8,in_R8);
      DAT_10024270 = DAT_10024270 + (int)uVar3;
      if (DAT_10024270 == 0x80) {
        recovered_1000b770((ulong *)&DAT_100241a8,((uintptr_t)pf_module_state + 0x6b5aU));
        DAT_10024270 = 0;
      }
      param_1 = param_1 + uVar3;
      param_2 = param_2 - uVar3;
    } while (param_2 != 0);
  }
  DAT_100242a0 = DAT_100242a0 + 1;
  return;
}

#undef DAT_100241a8
#undef DAT_100241b0
#undef DAT_100241b8
#undef DAT_100241c0
#undef DAT_100241c8
#undef DAT_100241d0
#undef DAT_100241d8
#undef DAT_100241e0
#undef DAT_100241e8
#undef DAT_100241f0
#undef DAT_10024270
#undef DAT_100242a0
#undef DAT_100242a4
#undef _DAT_100241a8
#undef _DAT_100241b0
#undef _DAT_100241b8
#undef _DAT_100241c0
#undef _DAT_100241c8
#undef _DAT_100241d0
#undef _DAT_100241d8
#undef _DAT_100241e0
#undef local_38

#undef DAT_1001d8b0
#define DAT_1001d8b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21aU)))
#define auStack_370 (*(ulong (*)[110])(pf_stack_frame + 16))
#define alStack_330 (*(long (*)[102])(pf_stack_frame + 80))
#define auStack_308 (*(ulong (*)[97])(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b770
 */

void recovered_1000b770(ulong *param_1,long param_2)

{
  unsigned char pf_stack_frame[928] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4; ulong pf_schedule_word;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;

  lVar4 = 0;
  do {
    uVar1 = *(ulong *)(param_2 + lVar4 * 8);
    auStack_308[lVar4 + 2] =
         uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
         (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
         (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
  pf_schedule_word = auStack_308[2]; lVar4 = 0x10;
  do {
    uVar1 = auStack_370[lVar4];
    uVar2 = auStack_308[lVar4];
    auStack_308[lVar4 + 2] =
         (uVar1 >> 7 ^
         (uVar1 << 0x38 | uVar1 >> 8) ^ (uVar1 >> 1 | (ulong)((uVar1 & 1) != 0) << 0x3f)) +
         pf_schedule_word + alStack_330[lVar4] +
         (uVar2 >> 6 ^ (uVar2 << 3 | uVar2 >> 0x3d) ^ (uVar2 << 0x2d | uVar2 >> 0x13));
    lVar4 = lVar4 + 1;
    pf_schedule_word = uVar1;
  } while (lVar4 != 0x50);
  lVar4 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[6];
  uVar5 = param_1[2];
  uVar3 = param_1[5];
  uVar10 = *param_1;
  uVar11 = param_1[7];
  uVar13 = param_1[4];
  uVar14 = param_1[3];
  do {
    uVar12 = uVar13;
    uVar9 = uVar10;
    uVar8 = uVar3;
    uVar7 = uVar5;
    uVar6 = uVar2;
    uVar5 = uVar1;
    lVar15 = ((uVar8 ^ uVar6) & uVar12 ^ uVar6) + uVar11 +
             ((uVar12 << 0x17 | uVar12 >> 0x29) ^
             (uVar12 << 0x2e | uVar12 >> 0x12) ^ (uVar12 << 0x32 | uVar12 >> 0xe)) +
             *(long *)((long)&DAT_1001d8b0 + lVar4) + *(long *)((long)auStack_308 + lVar4 + 0x10);
    uVar13 = uVar14 + lVar15;
    uVar10 = (uVar5 & uVar7 ^ (uVar5 ^ uVar7) & uVar9) +
             ((uVar9 << 0x19 | uVar9 >> 0x27) ^
             (uVar9 << 0x1e | uVar9 >> 0x22) ^ (uVar9 << 0x24 | uVar9 >> 0x1c)) + lVar15;
    lVar4 = lVar4 + 8;
    uVar1 = uVar9;
    uVar2 = uVar8;
    uVar3 = uVar12;
    uVar11 = uVar6;
    uVar14 = uVar7;
  } while (lVar4 != 0x280);
  *param_1 = uVar10 + *param_1;
  param_1[1] = uVar9 + param_1[1];
  param_1[2] = uVar5 + param_1[2];
  param_1[3] = uVar7 + param_1[3];
  param_1[4] = uVar13 + param_1[4];
  param_1[5] = uVar12 + param_1[5];
  param_1[6] = uVar8 + param_1[6];
  param_1[7] = uVar6 + param_1[7];
  return;
}

#undef DAT_1001d8b0
#undef auStack_370
#undef alStack_330
#undef auStack_308

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_1001e484
#define DAT_1001e484 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdeeU)))
#undef DAT_1001e588
#define DAT_1001e588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xef2U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#undef str_1001e489
#define str_1001e489 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdf3U)))
#define local_48 (*(undefined8 *)(pf_stack_frame + 40))
#define local_40 (*(undefined4 *)(pf_stack_frame + 48))
#define local_38 (*(long *)(pf_stack_frame + 56))
#define local_28 (*(undefined4 *)(pf_stack_frame + 72))
#define abStack_55 (*(byte (*)[85])(pf_stack_frame + 27))
#define uStack_30 (*(undefined8 *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000b960(undefined8 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;

  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x207 < _DAT_00280808 && ((code *)(ulong)_DAT_00280a04 != (code *)0x0)))) {
    iVar1 = (*(code *)(ulong)_DAT_00280a04)(param_1,&local_48);
    if ((local_38 != 0 && (int)local_48 == 3) && iVar1 != 0) {
      if (param_3 < 2) {
        *param_2 = 0;
        return;
      }
      uVar5 = (ulong)(param_3 - 1);
      uVar2 = 0;
      do {
        if (*(char *)(local_38 + uVar2) == '\0') {
          uVar5 = uVar2 & 0xffffffff;
          break;
        }
        param_2[uVar2] = *(char *)(local_38 + uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar5 != uVar2);
      param_2[uVar5] = 0;
      return;
    }
    if ((int)local_48 == 1 && iVar1 != 0) {
      uVar6 = -PF_PART4(local_48, 4);
      if ((int)-PF_PART4(local_48, 4) < 0) {
        uVar6 = PF_PART4(local_48, 4);
      }
      uVar2 = 0;
      do {
        abStack_55[uVar2 + 1] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
        uVar5 = uVar2 + 1;
        if (10 < uVar2) break;
        bVar9 = 9 < uVar6;
        uVar2 = uVar5;
        uVar6 = uVar6 / 10;
      } while (bVar9);
      bVar9 = local_48 < 0;
      if (bVar9) {
        *param_2 = 0x2d;
      }
      uVar2 = (ulong)bVar9;
      if (bVar9 + 1 < param_3) {
        uVar7 = uVar2;
        do {
          param_2[uVar7] = abStack_55[uVar5];
          uVar2 = uVar7 + 1;
          if (uVar5 - 1 == 0) break;
          uVar8 = uVar7 + 2;
          uVar7 = uVar2;
          uVar5 = uVar5 - 1;
        } while (uVar8 < param_3);
      }
      param_2[uVar2 & 0xffffffff] = 0;
      return;
    }
    if ((int)local_48 != 5 || iVar1 == 0) goto LAB_1000bb54;
    pcVar3 = &DAT_1001e484;
    if (PF_PART4(local_48, 4) == 0) {
      pcVar3 = str_1001e489;
    }
    if (1 < param_3) {
      uVar2 = (ulong)(param_3 - 1);
      uVar5 = 0;
      do {
        if (pcVar3[uVar5] == '\0') goto LAB_1000bb89;
        param_2[uVar5] = pcVar3[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
      goto LAB_1000bb8d;
    }
  }
  else {
LAB_1000bb54:
    puVar4 = &DAT_1001e588;
    if (param_4 != (undefined1 *)0x0) {
      puVar4 = param_4;
    }
    if (1 < param_3) {
      uVar2 = (ulong)(param_3 - 1);
      uVar5 = 0;
      do {
        if (puVar4[uVar5] == '\0') goto LAB_1000bb89;
        param_2[uVar5] = puVar4[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
      goto LAB_1000bb8d;
    }
  }
  uVar2 = 0;
LAB_1000bb8d:
  param_2[uVar2] = 0;
  return;
LAB_1000bb89:
  uVar2 = uVar5 & 0xffffffff;
  goto LAB_1000bb8d;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_1001e484
#undef DAT_1001e588
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a04
#undef str_1001e489
#undef local_48
#undef local_40
#undef local_38
#undef local_28
#undef abStack_55
#undef uStack_30

#undef DAT_1001e588
#define DAT_1001e588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xef2U)))
#define local_118 (*(char *)(pf_stack_frame + 24))
#define local_117 (*(char (*)[279])(pf_stack_frame + 25))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbb0
 */

void recovered_1000bbb0(undefined8 param_1,uint *param_2)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;

  recovered_1000b960(param_1,&local_118,0x100,&DAT_1001e588);
  if ((byte)(local_118 - 0x30U) < 10) {
    iVar6 = 0;
    uVar3 = 0;
    pcVar2 = local_117 + 2;
    do {
      pcVar4 = pcVar2;
      uVar3 = (uint)(byte)(local_118 - 0x30) + uVar3 * 10;
      if (0xff < uVar3) {
        return;
      }
      local_118 = pcVar4[-2];
      iVar6 = iVar6 + -1;
      pcVar2 = pcVar4 + 1;
    } while ((byte)(local_118 - 0x30U) < 10);
    if (((iVar6 != 0) && (local_118 == '.')) && (cVar1 = pcVar4[-1], (byte)(cVar1 - 0x30U) < 10)) {
      iVar6 = 0;
      uVar5 = 0;
      do {
        pcVar4 = pcVar2;
        uVar5 = (uint)(byte)(cVar1 - 0x30) + uVar5 * 10;
        if (0xff < uVar5) {
          return;
        }
        cVar1 = pcVar4[-1];
        iVar6 = iVar6 + -1;
        pcVar2 = pcVar4 + 1;
      } while ((byte)(cVar1 - 0x30U) < 10);
      if (((iVar6 != 0) && (cVar1 == '.')) && (cVar1 = *pcVar4, (byte)(cVar1 - 0x30U) < 10)) {
        iVar6 = 0;
        uVar7 = 0;
        do {
          pcVar4 = pcVar2;
          uVar7 = (uint)(byte)(cVar1 - 0x30) + uVar7 * 10;
          if (0xff < uVar7) {
            return;
          }
          cVar1 = *pcVar4;
          iVar6 = iVar6 + -1;
          pcVar2 = pcVar4 + 1;
        } while ((byte)(cVar1 - 0x30U) < 10);
        if (((iVar6 != 0) && (cVar1 == '.')) && (cVar1 = pcVar4[1], (byte)(cVar1 - 0x30U) < 10)) {
          lVar9 = 0;
          uVar8 = 0;
          do {
            uVar8 = (uint)(byte)(cVar1 - 0x30) + uVar8 * 10;
            if (0xff < uVar8) {
              return;
            }
            cVar1 = pcVar4[lVar9 + 2];
            lVar9 = lVar9 + 1;
          } while ((byte)(cVar1 - 0x30U) < 10);
          if (((int)lVar9 != 0) && (cVar1 == '\0')) {
            *param_2 = uVar8 | uVar7 * 0x100 | uVar5 * 0x10000 | uVar3 * 0x1000000;
          }
        }
      }
    }
  }
  return;
}

#undef DAT_1001e588
#undef local_118
#undef local_117

#undef DAT_100241a8
#define DAT_100241a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b12U)))
#undef DAT_100241b0
#define DAT_100241b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b1aU)))
#undef DAT_100241b8
#define DAT_100241b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b22U)))
#undef DAT_100241c0
#define DAT_100241c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b2aU)))
#undef DAT_100241c8
#define DAT_100241c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b32U)))
#undef DAT_100241d0
#define DAT_100241d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b3aU)))
#undef DAT_100241d8
#define DAT_100241d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b42U)))
#undef DAT_100241e0
#define DAT_100241e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b4aU)))
#undef DAT_100241e8
#define DAT_100241e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b52U)))
#undef DAT_100241f0
#define DAT_100241f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b5aU)))
#undef DAT_10024270
#define DAT_10024270 (*(uint *)(((uintptr_t)pf_module_state + 0x6bdaU)))
#undef DAT_10024278
#define DAT_10024278 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6be2U)))
#undef DAT_10024298
#define DAT_10024298 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6c02U)))
#undef DAT_100242a0
#define DAT_100242a0 (*(uint *)(((uintptr_t)pf_module_state + 0x6c0aU)))
#undef DAT_100242a4
#define DAT_100242a4 (*(char *)(((uintptr_t)pf_module_state + 0x6c0eU)))
#undef _DAT_100241a8
#define _DAT_100241a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b12U)))
#undef _DAT_100241b0
#define _DAT_100241b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b1aU)))
#undef _DAT_100241b8
#define _DAT_100241b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b22U)))
#undef _DAT_100241c0
#define _DAT_100241c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b2aU)))
#undef _DAT_100241c8
#define _DAT_100241c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b32U)))
#undef _DAT_100241d0
#define _DAT_100241d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b3aU)))
#undef _DAT_100241d8
#define _DAT_100241d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b42U)))
#undef _DAT_100241e0
#define _DAT_100241e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6b4aU)))
#undef str_1001db2e
#define str_1001db2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x498U)))
#define local_5e (*(undefined1 *)(pf_stack_frame + 50))
#define local_5d (*(undefined1 *)(pf_stack_frame + 51))
#define local_5c (*(undefined1 *)(pf_stack_frame + 52))
#define local_5b (*(undefined1 *)(pf_stack_frame + 53))
#define local_5a (*(undefined1 *)(pf_stack_frame + 54))
#define local_59 (*(undefined1 *)(pf_stack_frame + 55))
#define local_58 (*(undefined1 *)(pf_stack_frame + 56))
#define local_57 (*(undefined1 *)(pf_stack_frame + 57))
#define local_56 (*(undefined1 *)(pf_stack_frame + 58))
#define local_55 (*(undefined1 *)(pf_stack_frame + 59))
#define local_54 (*(undefined1 *)(pf_stack_frame + 60))
#define local_53 (*(undefined1 *)(pf_stack_frame + 61))
#define local_52 (*(undefined1 *)(pf_stack_frame + 62))
#define local_51 (*(undefined1 *)(pf_stack_frame + 63))
#define local_50 (*(undefined1 *)(pf_stack_frame + 64))
#define local_4f (*(undefined1 *)(pf_stack_frame + 65))
#define local_4e (*(undefined1 *)(pf_stack_frame + 66))
#define local_4d (*(undefined1 *)(pf_stack_frame + 67))
#define local_4c (*(undefined1 *)(pf_stack_frame + 68))
#define local_4b (*(undefined1 *)(pf_stack_frame + 69))
#define local_4a (*(undefined1 *)(pf_stack_frame + 70))
#define local_49 (*(undefined1 *)(pf_stack_frame + 71))
#define local_48 (*(undefined1 *)(pf_stack_frame + 72))
#define local_47 (*(undefined1 *)(pf_stack_frame + 73))
#define local_46 (*(undefined1 *)(pf_stack_frame + 74))
#define local_45 (*(undefined1 *)(pf_stack_frame + 75))
#define local_44 (*(undefined1 *)(pf_stack_frame + 76))
#define local_43 (*(undefined1 *)(pf_stack_frame + 77))
#define local_42 (*(undefined1 *)(pf_stack_frame + 78))
#define local_41 (*(undefined1 *)(pf_stack_frame + 79))
#define local_40 (*(undefined1 *)(pf_stack_frame + 80))
#define local_3f (*(undefined1 *)(pf_stack_frame + 81))
#define local_3e (*(undefined1 *)(pf_stack_frame + 82))
#define local_3d (*(undefined1 *)(pf_stack_frame + 83))
#define local_3c (*(undefined1 *)(pf_stack_frame + 84))
#define local_3b (*(undefined1 *)(pf_stack_frame + 85))
#define local_3a (*(undefined1 *)(pf_stack_frame + 86))
#define local_39 (*(undefined1 *)(pf_stack_frame + 87))
#define local_78 (*(undefined1 *)(pf_stack_frame + 24))
#define local_77 (*(undefined1 *)(pf_stack_frame + 25))
#define local_76 (*(undefined1 *)(pf_stack_frame + 26))
#define local_75 (*(undefined1 *)(pf_stack_frame + 27))
#define local_74 (*(undefined1 *)(pf_stack_frame + 28))
#define local_73 (*(undefined1 *)(pf_stack_frame + 29))
#define local_72 (*(undefined1 *)(pf_stack_frame + 30))
#define local_71 (*(undefined1 *)(pf_stack_frame + 31))
#define local_70 (*(undefined1 *)(pf_stack_frame + 32))
#define local_6f (*(undefined1 *)(pf_stack_frame + 33))
#define local_6e (*(undefined1 *)(pf_stack_frame + 34))
#define local_6d (*(undefined1 *)(pf_stack_frame + 35))
#define local_6c (*(undefined1 *)(pf_stack_frame + 36))
#define local_6b (*(undefined1 *)(pf_stack_frame + 37))
#define local_6a (*(undefined1 *)(pf_stack_frame + 38))
#define local_69 (*(undefined1 *)(pf_stack_frame + 39))
#define local_68 (*(undefined1 *)(pf_stack_frame + 40))
#define local_67 (*(undefined1 *)(pf_stack_frame + 41))
#define local_66 (*(undefined1 *)(pf_stack_frame + 42))
#define local_65 (*(undefined1 *)(pf_stack_frame + 43))
#define local_64 (*(undefined1 *)(pf_stack_frame + 44))
#define local_63 (*(undefined1 *)(pf_stack_frame + 45))
#define local_62 (*(undefined1 *)(pf_stack_frame + 46))
#define local_61 (*(undefined1 *)(pf_stack_frame + 47))
#define local_60 (*(undefined1 *)(pf_stack_frame + 48))
#define local_5f (*(undefined1 *)(pf_stack_frame + 49))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000bd40(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  undefined8 *in_R8;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;

  if ((DAT_100242a4 != '\x01') || (0x3f < DAT_100242a0)) {
    DAT_100241e8 = DAT_100241e8 + 0x20;
    puVar5 = (undefined8 *)&DAT_10024278;
    uVar3 = 0x20;
    do {
      uVar4 = (ulong)(0x80 - DAT_10024270);
      if (uVar3 < 0x80 - DAT_10024270) {
        uVar4 = uVar3;
      }
      puVar2 = &DAT_100241a8;
      recovered_10001c80((undefined8 *)(&DAT_100241f0 + DAT_10024270),puVar5,uVar4,&DAT_100241a8,
                         in_R8);
      DAT_10024270 = DAT_10024270 + (int)uVar4;
      if (DAT_10024270 == 0x80) {
        recovered_1000b770((ulong *)&DAT_100241a8,((uintptr_t)pf_module_state + 0x6b5aU));
        DAT_10024270 = 0;
      }
      puVar5 = (undefined8 *)((long)puVar5 + uVar4);
      uVar3 = uVar3 - uVar4;
    } while (uVar3 != 0);
    recovered_1000c4e0((ulong *)&DAT_100241a8,(ulong *)&local_78);
    recovered_10001c80((undefined8 *)&DAT_10024278,(undefined8 *)&local_78,0x20,puVar2,in_R8);
    _DAT_100241a8 = 0x6a09e667f3bcc908;
    _DAT_100241b0 = 0xbb67ae8584caa73b;
    _DAT_100241b8 = 0x3c6ef372fe94f82b;
    _DAT_100241c0 = 0xa54ff53a5f1d36f1;
    _DAT_100241c8 = 0x510e527fade682d1;
    _DAT_100241d0 = 0x9b05688c2b3e6c1f;
    _DAT_100241d8 = 0x1f83d9abfb41bd6b;
    _DAT_100241e0 = 0x5be0cd19137e2179;
    DAT_10024270 = 0;
    DAT_100241e8 = 0x20;
    recovered_10001c80((undefined8 *)&DAT_100241f0,(undefined8 *)&local_58,0x20,puVar2,in_R8);
    DAT_10024270 = DAT_10024270 + 0x20;
    if (DAT_10024270 == 0x80) {
      recovered_1000b770((ulong *)&DAT_100241a8,((uintptr_t)pf_module_state + 0x6b5aU));
      DAT_10024270 = 0;
    }
    DAT_10024298 = 0;
    DAT_100242a4 = '\x01';
    local_78 = 0;
    local_77 = 0;
    local_76 = 0;
    local_75 = 0;
    local_74 = 0;
    local_73 = 0;
    local_72 = 0;
    local_71 = 0;
    local_70 = 0;
    local_6f = 0;
    local_6e = 0;
    local_6d = 0;
    local_6c = 0;
    local_6b = 0;
    local_6a = 0;
    local_69 = 0;
    local_68 = 0;
    local_67 = 0;
    local_66 = 0;
    local_65 = 0;
    local_64 = 0;
    local_63 = 0;
    local_62 = 0;
    local_61 = 0;
    local_60 = 0;
    local_5f = 0;
    local_5e = 0;
    local_5d = 0;
    local_5c = 0;
    local_5b = 0;
    local_5a = 0;
    local_59 = 0;
    local_58 = 0;
    local_57 = 0;
    local_56 = 0;
    local_55 = 0;
    local_54 = 0;
    local_53 = 0;
    local_52 = 0;
    local_51 = 0;
    local_50 = 0;
    local_4f = 0;
    local_4e = 0;
    local_4d = 0;
    local_4c = 0;
    local_4b = 0;
    local_4a = 0;
    local_49 = 0;
    local_48 = 0;
    local_47 = 0;
    local_46 = 0;
    local_45 = 0;
    local_44 = 0;
    local_43 = 0;
    local_42 = 0;
    local_41 = 0;
    local_40 = 0;
    local_3f = 0;
    local_3e = 0;
    local_3d = 0;
    local_3c = 0;
    local_3b = 0;
    local_3a = 0;
    local_39 = 0;
    DAT_100242a0 = 0;
  }
  if (param_2 != 0) {
    do {
      lVar1 = DAT_10024298;
      uVar3 = 0x40;
      if (param_2 < 0x40) {
        uVar3 = param_2;
      }
      DAT_10024298 = DAT_10024298 + 1;
      puVar5 = (undefined8 *)&local_78;
      recovered_1000c1e0((undefined8 *)&DAT_10024278,lVar1,
                         (undefined8 *)(str_1001db2e + 2),(long)&local_78);
      recovered_10001c80((undefined8 *)param_1,(undefined8 *)&local_78,uVar3,puVar5,in_R8);
      param_1 = param_1 + uVar3;
      param_2 = param_2 - uVar3;
    } while (param_2 != 0);
  }
  lVar1 = DAT_10024298;
  DAT_10024298 = DAT_10024298 + 1;
  puVar5 = (undefined8 *)&local_78;
  recovered_1000c1e0((undefined8 *)&DAT_10024278,lVar1,
                     (undefined8 *)(str_1001db2e + 2),(long)&local_78);
  recovered_10001c80((undefined8 *)&DAT_10024278,(undefined8 *)&local_78,0x20,puVar5,in_R8);
  return;
}

#undef DAT_100241a8
#undef DAT_100241b0
#undef DAT_100241b8
#undef DAT_100241c0
#undef DAT_100241c8
#undef DAT_100241d0
#undef DAT_100241d8
#undef DAT_100241e0
#undef DAT_100241e8
#undef DAT_100241f0
#undef DAT_10024270
#undef DAT_10024278
#undef DAT_10024298
#undef DAT_100242a0
#undef DAT_100242a4
#undef _DAT_100241a8
#undef _DAT_100241b0
#undef _DAT_100241b8
#undef _DAT_100241c0
#undef _DAT_100241c8
#undef _DAT_100241d0
#undef _DAT_100241d8
#undef _DAT_100241e0
#undef str_1001db2e
#undef local_5e
#undef local_5d
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_57
#undef local_56
#undef local_55
#undef local_54
#undef local_53
#undef local_52
#undef local_51
#undef local_50
#undef local_4f
#undef local_4e
#undef local_4d
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_43
#undef local_42
#undef local_41
#undef local_40
#undef local_3f
#undef local_3e
#undef local_3d
#undef local_3c
#undef local_3b
#undef local_3a
#undef local_39
#undef local_78
#undef local_77
#undef local_76
#undef local_75
#undef local_74
#undef local_73
#undef local_72
#undef local_71
#undef local_70
#undef local_6f
#undef local_6e
#undef local_6d
#undef local_6c
#undef local_6b
#undef local_6a
#undef local_69
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef local_62
#undef local_61
#undef local_60
#undef local_5f

#undef DAT_1001d7f0
#define DAT_1001d7f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15aU)))
#undef UNK_1001d7f8
#define UNK_1001d7f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x162U)))
#undef _DAT_1001d7f0
#define _DAT_1001d7f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15aU)))
#undef uRam000000001001d7f8
#define uRam000000001001d7f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x162U)))
#define local_e8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_d8 (*(undefined8 *)(pf_stack_frame + 40))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 56))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 72))
#define local_b0 (*(undefined8 *)(pf_stack_frame + 80))
#define local_a8 (*(long *)(pf_stack_frame + 88))
#define local_9c (*(int *)(pf_stack_frame + 100))
#define local_98 (*(undefined8 *)(pf_stack_frame + 104))
#define local_90 (*(uint *)(pf_stack_frame + 112))
#define local_8c (*(uint *)(pf_stack_frame + 116))
#define local_88 (*(uint *)(pf_stack_frame + 120))
#define local_84 (*(uint *)(pf_stack_frame + 124))
#define local_80 (*(uint *)(pf_stack_frame + 128))
#define local_7c (*(uint *)(pf_stack_frame + 132))
#define local_78 (*(uint *)(pf_stack_frame + 136))
#define local_74 (*(uint *)(pf_stack_frame + 140))
#define local_70 (*(uint *)(pf_stack_frame + 144))
#define local_6c (*(uint *)(pf_stack_frame + 148))
#define local_68 (*(uint *)(pf_stack_frame + 152))
#define local_64 (*(uint *)(pf_stack_frame + 156))
#define local_60 (*(uint *)(pf_stack_frame + 160))
#define local_5c (*(uint *)(pf_stack_frame + 164))
#define local_4c (*(uint *)(pf_stack_frame + 180))
#define local_48 (*(uint *)(pf_stack_frame + 184))
#define local_44 (*(uint *)(pf_stack_frame + 188))
#define local_40 (*(uint *)(pf_stack_frame + 192))
#define local_3c (*(uint *)(pf_stack_frame + 196))
#define local_38 (*(uint *)(pf_stack_frame + 200))
#define uStack_f0 (*(undefined8 *)(pf_stack_frame + 16))
#define local_34 (*(uint *)(pf_stack_frame + 204))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c1e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *in_R8;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  local_e8 = _DAT_1001d7f0;
  uStack_e0 = uRam000000001001d7f8;
  local_d8 = *param_1;
  uStack_d0 = param_1[1];
  local_c8 = param_1[2];
  uStack_c0 = param_1[3];
  local_b0 = *param_3;
  uStack_f0 = 0x1000c250;
  local_a8 = param_4;
  local_b8 = param_2;
  recovered_10001c80(&local_98,&local_e8,0x40,param_4,in_R8);
  local_48 = (uint)local_98;
  local_4c = PF_PART4(local_98, 4);
  local_34 = local_74;
  local_44 = local_90;
  local_40 = local_70;
  local_3c = local_8c;
  iVar5 = 10;
  local_38 = local_6c;
  do {
    local_68 = local_68 ^ local_48 + local_88;
    uVar8 = local_68 << 0x10 | local_68 >> 0x10;
    local_78 = local_78 + uVar8;
    uVar2 = local_88 ^ local_78;
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_48 = local_48 + local_88 + uVar2;
    uVar8 = uVar8 ^ local_48;
    uVar9 = uVar8 << 8 | uVar8 >> 0x18;
    local_78 = local_78 + uVar9;
    uVar2 = uVar2 ^ local_78;
    uVar8 = uVar2 << 7 | uVar2 >> 0x19;
    local_64 = local_64 ^ local_4c + local_84;
    uVar3 = local_64 << 0x10 | local_64 >> 0x10;
    local_34 = local_34 + uVar3;
    uVar2 = local_84 ^ local_34;
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_4c = local_4c + local_84 + uVar2;
    uVar3 = uVar3 ^ local_4c;
    uVar3 = uVar3 << 8 | uVar3 >> 0x18;
    local_34 = local_34 + uVar3;
    uVar2 = uVar2 ^ local_34;
    uVar2 = uVar2 << 7 | uVar2 >> 0x19;
    local_60 = local_60 ^ local_44 + local_80;
    uVar6 = local_60 << 0x10 | local_60 >> 0x10;
    local_40 = local_40 + uVar6;
    uVar4 = local_80 ^ local_40;
    uVar4 = uVar4 << 0xc | uVar4 >> 0x14;
    local_44 = local_44 + local_80 + uVar4;
    uVar6 = uVar6 ^ local_44;
    uVar6 = uVar6 << 8 | uVar6 >> 0x18;
    local_40 = local_40 + uVar6;
    uVar4 = uVar4 ^ local_40;
    uVar4 = uVar4 << 7 | uVar4 >> 0x19;
    local_5c = local_5c ^ local_3c + local_7c;
    uVar7 = local_5c << 0x10 | local_5c >> 0x10;
    local_38 = local_38 + uVar7;
    uVar10 = local_7c ^ local_38;
    uVar10 = uVar10 << 0xc | uVar10 >> 0x14;
    local_3c = local_3c + local_7c + uVar10;
    uVar7 = uVar7 ^ local_3c;
    uVar7 = uVar7 << 8 | uVar7 >> 0x18;
    local_38 = local_38 + uVar7;
    uVar10 = uVar10 ^ local_38;
    uVar10 = uVar10 << 7 | uVar10 >> 0x19;
    local_48 = local_48 + uVar2;
    uVar7 = uVar7 ^ local_48;
    uVar7 = uVar7 << 0x10 | uVar7 >> 0x10;
    local_40 = local_40 + uVar7;
    uVar2 = uVar2 ^ local_40;
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_48 = local_48 + uVar2;
    uVar7 = uVar7 ^ local_48;
    local_5c = uVar7 << 8 | uVar7 >> 0x18;
    local_40 = local_40 + local_5c;
    uVar2 = uVar2 ^ local_40;
    local_84 = uVar2 << 7 | uVar2 >> 0x19;
    local_4c = local_4c + uVar4;
    uVar9 = uVar9 ^ local_4c;
    uVar7 = uVar9 << 0x10 | uVar9 >> 0x10;
    local_38 = local_38 + uVar7;
    uVar4 = uVar4 ^ local_38;
    uVar2 = uVar4 << 0xc | uVar4 >> 0x14;
    local_4c = local_4c + uVar2;
    uVar7 = uVar7 ^ local_4c;
    local_68 = uVar7 << 8 | uVar7 >> 0x18;
    local_38 = local_38 + local_68;
    uVar2 = uVar2 ^ local_38;
    local_80 = uVar2 << 7 | uVar2 >> 0x19;
    local_44 = local_44 + uVar10;
    uVar3 = uVar3 ^ local_44;
    uVar2 = uVar3 << 0x10 | uVar3 >> 0x10;
    local_78 = local_78 + uVar2;
    uVar10 = uVar10 ^ local_78;
    uVar3 = uVar10 << 0xc | uVar10 >> 0x14;
    local_44 = local_44 + uVar3;
    uVar2 = uVar2 ^ local_44;
    local_64 = uVar2 << 8 | uVar2 >> 0x18;
    local_78 = local_78 + local_64;
    uVar3 = uVar3 ^ local_78;
    local_7c = uVar3 << 7 | uVar3 >> 0x19;
    local_3c = local_3c + uVar8;
    uVar6 = uVar6 ^ local_3c;
    uVar3 = uVar6 << 0x10 | uVar6 >> 0x10;
    local_34 = local_34 + uVar3;
    uVar8 = uVar8 ^ local_34;
    uVar2 = uVar8 << 0xc | uVar8 >> 0x14;
    local_3c = local_3c + uVar2;
    uVar3 = uVar3 ^ local_3c;
    local_60 = uVar3 << 8 | uVar3 >> 0x18;
    local_34 = local_34 + local_60;
    uVar2 = uVar2 ^ local_34;
    local_88 = uVar2 << 7 | uVar2 >> 0x19;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  PF_PART4(local_98, 0) = local_48;
  PF_PART4(local_98, 4) = local_4c;
  local_74 = local_34;
  local_90 = local_44;
  local_70 = local_40;
  local_8c = local_3c;
  local_6c = local_38;
  lVar1 = 1;
  do {
    *(int *)(local_a8 + -4 + lVar1 * 4) =
         *(int *)((long)&uStack_f0 + lVar1 * 4 + 4) + (&local_9c)[lVar1];
    *(int *)(local_a8 + lVar1 * 4) =
         *(int *)((long)&local_e8 + lVar1 * 4) + *(int *)((long)&local_98 + lVar1 * 4);
    lVar1 = lVar1 + 2;
  } while (lVar1 != 0x11);
  return;
}

#undef DAT_1001d7f0
#undef UNK_1001d7f8
#undef _DAT_1001d7f0
#undef uRam000000001001d7f8
#undef local_e8
#undef local_d8
#undef local_c8
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_9c
#undef local_98
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef uStack_f0
#undef local_34
#undef uStack_e0
#undef uStack_d0
#undef uStack_c0

#define local_31 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4e0
 */

void recovered_1000c4e0(ulong *param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 in_RCX;
  undefined8 *in_R8;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;

  uVar2 = param_1[8];
  local_31 = 0x80;
  param_1[8] = uVar2 + 1;
  puVar1 = param_1 + 9;
  uVar3 = (uint)param_1[0x19];
  puVar4 = (undefined8 *)&local_31;
  uVar7 = 1;
  do {
    while( true ) {
      uVar6 = (ulong)(0x80 - uVar3);
      if (uVar7 < 0x80 - uVar3) {
        uVar6 = uVar7;
      }
      recovered_10001c80((undefined8 *)((ulong)uVar3 + (long)puVar1),puVar4,uVar6,in_RCX,in_R8);
      uVar3 = (int)param_1[0x19] + (int)uVar6;
      *(uint *)(param_1 + 0x19) = uVar3;
      puVar4 = (undefined8 *)((long)puVar4 + uVar6);
      uVar7 = uVar7 - uVar6;
      if (uVar3 != 0x80) break;
      recovered_1000b770(param_1,(long)puVar1);
      *(undefined4 *)(param_1 + 0x19) = 0;
      uVar3 = 0;
      if (uVar7 == 0) {
        uVar3 = 0;
LAB_1000c5b2:
        local_31 = 0;
        do {
          param_1[8] = param_1[8] + 1;
          uVar7 = 1;
          puVar4 = (undefined8 *)&local_31;
          do {
            uVar6 = (ulong)(0x80 - uVar3);
            if (uVar7 < 0x80 - uVar3) {
              uVar6 = uVar7;
            }
            recovered_10001c80((undefined8 *)((ulong)uVar3 + (long)puVar1),puVar4,uVar6,in_RCX,in_R8
                              );
            uVar3 = (int)param_1[0x19] + (int)uVar6;
            *(uint *)(param_1 + 0x19) = uVar3;
            if (uVar3 == 0x80) {
              recovered_1000b770(param_1,(long)puVar1);
              *(undefined4 *)(param_1 + 0x19) = 0;
              uVar3 = 0;
            }
            puVar4 = (undefined8 *)((long)puVar4 + uVar6);
            uVar7 = uVar7 - uVar6;
          } while (uVar7 != 0);
        } while (uVar3 != 0x70);
LAB_1000c63b:
        uVar7 = uVar2 << 3;
        lVar5 = 0;
        recovered_10002980((byte *)(param_1 + 0x17),0,8);
        param_1[0x18] =
             (uVar2 & 0x1fffffffffffffff) >> 0x35 | (uVar7 & 0xff000000000000) >> 0x28 |
             (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
             (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
             uVar2 << 0x3b;
        recovered_1000b770(param_1,(long)puVar1);
        uVar2 = *param_1;
        *param_2 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                   (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                   (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28
                   | uVar2 << 0x38;
        uVar2 = param_1[1];
        param_2[1] = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                     (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                     (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                     (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
        uVar2 = param_1[2];
        param_2[2] = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                     (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                     (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                     (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
        uVar2 = param_1[3];
        param_2[3] = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                     (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                     (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                     (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
        uVar2 = param_1[4];
        param_2[4] = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                     (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                     (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                     (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
        uVar2 = param_1[5];
        param_2[5] = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                     (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                     (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                     (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
        uVar2 = param_1[6];
        param_2[6] = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                     (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                     (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                     (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
        uVar2 = param_1[7];
        param_2[7] = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                     (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                     (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                     (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
        do {
          *(undefined1 *)((long)param_1 + lVar5) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 1) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 2) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 3) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 4) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 5) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 6) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 7) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 8) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 9) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 10) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 0xb) = 0;
          *(undefined1 *)((long)param_1 + lVar5 + 0xc) = 0;
          lVar5 = lVar5 + 0xd;
        } while (lVar5 != 0xd0);
        return;
      }
    }
  } while (uVar7 != 0);
  local_31 = 0;
  if (uVar3 == 0x70) goto LAB_1000c63b;
  goto LAB_1000c5b2;
}

#undef local_31

#define local_24 (*(undefined1 (*)[36])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c730
 */

void recovered_1000c730(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *in_R8;

  uVar2 = recovered_10003720((long)param_2);
  uVar1 = (uint)uVar2;
  if ((char)param_1[2] == '\0') {
    uVar3 = (int)param_1[1] - *(uint *)((long)param_1 + 0xc);
    if (3 < uVar3) {
      recovered_10001c80((undefined8 *)((ulong)*(uint *)((long)param_1 + 0xc) + *param_1),
                         (undefined8 *)local_24,4,(ulong)uVar3,in_R8);
      uVar3 = *(int *)((long)param_1 + 0xc) + 4;
      *(uint *)((long)param_1 + 0xc) = uVar3;
      if (((*(byte *)(param_1 + 2) & 1) == 0) && (uVar1 <= (int)param_1[1] - uVar3)) {
        if (uVar1 != 0) {
          recovered_10001c80((undefined8 *)((ulong)uVar3 + *param_1),param_2,uVar2 & 0xffffffff,
                             (ulong)uVar3,in_R8);
          uVar3 = *(uint *)((long)param_1 + 0xc);
        }
        *(uint *)((long)param_1 + 0xc) = uVar3 + uVar1;
        return;
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

#undef local_24

#define local_50 (*(ulong *)(pf_stack_frame + 16))
#define local_48 (*(uint * *)(pf_stack_frame + 24))
#define local_40 (*(ulong *)(pf_stack_frame + 32))
#define local_31 (*(undefined1 *)(pf_stack_frame + 47))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c7c0
 */

void recovered_1000c7c0(uint *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 in_RCX;
  undefined8 *in_R8;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  local_40 = *(ulong *)(param_1 + 8);
  local_31 = 0x80;
  *(ulong *)(param_1 + 8) = local_40 + 1;
  puVar1 = param_1 + 10;
  uVar2 = param_1[0x1a];
  puVar4 = (undefined8 *)&local_31;
  uVar6 = 1;
  local_48 = param_2;
  do {
    while( true ) {
      uVar7 = (ulong)(0x40 - uVar2);
      if (uVar6 < 0x40 - uVar2) {
        uVar7 = uVar6;
      }
      recovered_10001c80((undefined8 *)((ulong)uVar2 + (long)puVar1),puVar4,uVar7,in_RCX,in_R8);
      uVar2 = param_1[0x1a] + (int)uVar7;
      param_1[0x1a] = uVar2;
      puVar4 = (undefined8 *)((long)puVar4 + uVar7);
      uVar6 = uVar6 - uVar7;
      if (uVar2 == 0x40) break;
      if (uVar6 == 0) {
        uVar6 = local_40 << 3;
        local_31 = 0;
        if (uVar2 != 0x38) {
LAB_1000c873:
          local_31 = 0;
          local_40 = uVar6;
          do {
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
            uVar7 = 1;
            puVar4 = (undefined8 *)&local_31;
            do {
              uVar5 = (ulong)(0x40 - uVar2);
              if (uVar7 < 0x40 - uVar2) {
                uVar5 = uVar7;
              }
              recovered_10001c80((undefined8 *)((ulong)uVar2 + (long)puVar1),puVar4,uVar5,uVar6,
                                 in_R8);
              uVar2 = param_1[0x1a] + (int)uVar5;
              param_1[0x1a] = uVar2;
              if (uVar2 == 0x40) {
                recovered_1000f460(param_1,(long)puVar1);
                param_1[0x1a] = 0;
                uVar2 = 0;
              }
              puVar4 = (undefined8 *)((long)puVar4 + uVar5);
              uVar7 = uVar7 - uVar5;
            } while (uVar7 != 0);
          } while (uVar2 != 0x38);
          uVar6 = local_40;
        }
        local_50 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                   (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                   (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28
                   | uVar6 << 0x38;
        recovered_10001c80((undefined8 *)(param_1 + 0x18),&local_50,8,local_50,in_R8);
        recovered_1000f460(param_1,(long)puVar1);
        param_1[0x1a] = 0;
        uVar2 = *param_1;
        *local_48 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar2 = param_1[1];
        local_48[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = param_1[2];
        local_48[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = param_1[3];
        local_48[3] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = param_1[4];
        local_48[4] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = param_1[5];
        local_48[5] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = param_1[6];
        local_48[6] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = param_1[7];
        local_48[7] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        lVar3 = 0;
        do {
          *(undefined1 *)((long)param_1 + lVar3) = 0;
          *(undefined1 *)((long)param_1 + lVar3 + 1) = 0;
          *(undefined1 *)((long)param_1 + lVar3 + 2) = 0;
          *(undefined1 *)((long)param_1 + lVar3 + 3) = 0;
          *(undefined1 *)((long)param_1 + lVar3 + 4) = 0;
          *(undefined1 *)((long)param_1 + lVar3 + 5) = 0;
          *(undefined1 *)((long)param_1 + lVar3 + 6) = 0;
          *(undefined1 *)((long)param_1 + lVar3 + 7) = 0;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0x70);
        return;
      }
    }
    recovered_1000f460(param_1,(long)puVar1);
    param_1[0x1a] = 0;
    uVar2 = 0;
  } while (uVar6 != 0);
  uVar6 = local_40 << 3;
  uVar2 = 0;
  goto LAB_1000c873;
}

#undef local_50
#undef local_48
#undef local_40
#undef local_31

#undef DAT_1001d800
#define DAT_1001d800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16aU)))
#undef DAT_1001d810
#define DAT_1001d810 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
#undef DAT_1001d820
#define DAT_1001d820 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18aU)))
#undef DAT_1001d830
#define DAT_1001d830 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19aU)))
#undef DAT_1001d840
#define DAT_1001d840 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aaU)))
#undef DAT_1001d850
#define DAT_1001d850 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1baU)))
#undef DAT_1001d860
#define DAT_1001d860 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1caU)))
#undef DAT_1001d870
#define DAT_1001d870 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1daU)))
#undef DAT_1001d880
#define DAT_1001d880 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eaU)))
#undef DAT_1001d890
#define DAT_1001d890 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1faU)))
#undef DAT_1001dbd0
#define DAT_1001dbd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53aU)))
#undef UNK_1001d808
#define UNK_1001d808 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x172U)))
#undef UNK_1001d818
#define UNK_1001d818 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x182U)))
#undef UNK_1001d828
#define UNK_1001d828 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x192U)))
#undef UNK_1001d838
#define UNK_1001d838 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a2U)))
#undef UNK_1001d848
#define UNK_1001d848 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b2U)))
#undef UNK_1001d858
#define UNK_1001d858 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c2U)))
#undef UNK_1001d868
#define UNK_1001d868 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef UNK_1001d878
#define UNK_1001d878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e2U)))
#undef UNK_1001d888
#define UNK_1001d888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f2U)))
#undef UNK_1001d898
#define UNK_1001d898 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x202U)))
#undef _DAT_1001d800
#define _DAT_1001d800 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x16aU)))
#undef _DAT_1001d810
#define _DAT_1001d810 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17aU)))
#undef _DAT_1001d820
#define _DAT_1001d820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18aU)))
#undef _DAT_1001d830
#define _DAT_1001d830 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19aU)))
#undef _DAT_1001d840
#define _DAT_1001d840 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1aaU)))
#undef _DAT_1001d850
#define _DAT_1001d850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1baU)))
#undef _DAT_1001d860
#define _DAT_1001d860 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1caU)))
#undef _DAT_1001d870
#define _DAT_1001d870 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1daU)))
#undef _DAT_1001d880
#define _DAT_1001d880 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1eaU)))
#undef _DAT_1001d890
#define _DAT_1001d890 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1faU)))
#undef uRam000000001001d808
#define uRam000000001001d808 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x172U)))
#undef uRam000000001001d818
#define uRam000000001001d818 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x182U)))
#undef uRam000000001001d828
#define uRam000000001001d828 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x192U)))
#undef uRam000000001001d838
#define uRam000000001001d838 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a2U)))
#undef uRam000000001001d848
#define uRam000000001001d848 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b2U)))
#undef uRam000000001001d858
#define uRam000000001001d858 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c2U)))
#undef uRam000000001001d868
#define uRam000000001001d868 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef uRam000000001001d878
#define uRam000000001001d878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e2U)))
#undef uRam000000001001d888
#define uRam000000001001d888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f2U)))
#undef uRam000000001001d898
#define uRam000000001001d898 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x202U)))
#define local_228 (*(undefined1 (*)[552])(pf_stack_frame + 24))
#define local_218 (*(undefined1 (*)[536])(pf_stack_frame + 40))
#define local_208 (*(undefined1 (*)[520])(pf_stack_frame + 56))
#define local_1f8 (*(undefined1 (*)[504])(pf_stack_frame + 72))
#define local_1e8 (*(undefined1 (*)[488])(pf_stack_frame + 88))
#define local_1d8 (*(undefined1 (*)[472])(pf_stack_frame + 104))
#define local_1c8 (*(undefined1 (*)[456])(pf_stack_frame + 120))
#define local_1b8 (*(undefined1 (*)[440])(pf_stack_frame + 136))
#define local_1a8 (*(undefined1 (*)[424])(pf_stack_frame + 152))
#define local_198 (*(undefined1 (*)[408])(pf_stack_frame + 168))
#define local_188 (*(undefined1 (*)[392])(pf_stack_frame + 184))
#define local_178 (*(undefined1 (*)[376])(pf_stack_frame + 200))
#define local_168 (*(undefined1 (*)[360])(pf_stack_frame + 216))
#define local_158 (*(undefined1 (*)[344])(pf_stack_frame + 232))
#define local_148 (*(undefined1 (*)[328])(pf_stack_frame + 248))
#define local_138 (*(undefined1 (*)[312])(pf_stack_frame + 264))
#define local_128 (*(undefined1 (*)[296])(pf_stack_frame + 280))
#define local_118 (*(undefined1 (*)[280])(pf_stack_frame + 296))
#define local_108 (*(undefined1 (*)[264])(pf_stack_frame + 312))
#define local_f8 (*(undefined1 (*)[248])(pf_stack_frame + 328))
#define local_e8 (*(undefined1 (*)[232])(pf_stack_frame + 344))
#define local_d8 (*(undefined1 (*)[216])(pf_stack_frame + 360))
#define local_c8 (*(undefined1 (*)[200])(pf_stack_frame + 376))
#define local_b8 (*(undefined1 (*)[184])(pf_stack_frame + 392))
#define local_a8 (*(undefined1 (*)[168])(pf_stack_frame + 408))
#define local_98 (*(undefined1 (*)[152])(pf_stack_frame + 424))
#define local_88 (*(undefined1 (*)[136])(pf_stack_frame + 440))
#define local_78 (*(undefined1 (*)[120])(pf_stack_frame + 456))
#define local_68 (*(undefined1 (*)[104])(pf_stack_frame + 472))
#define local_58 (*(undefined1 (*)[88])(pf_stack_frame + 488))
#define local_48 (*(undefined1 (*)[72])(pf_stack_frame + 504))
#define local_38 (*(undefined1 (*)[56])(pf_stack_frame + 520))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c9a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c9a0(uint128 *param_1,long param_2)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar28;
  uint uVar29;
  uint128 auVar12;
  uint128 auVar13;
  uint128 auVar14;
  uint128 auVar15;
  uint128 auVar16;
  uint128 auVar17;
  uint128 auVar18;
  uint128 auVar19;
  uint128 auVar20;
  uint128 auVar21;
  uint128 auVar22;
  uint128 auVar23;
  uint128 auVar24;
  uint128 auVar25;
  uint128 auVar26;
  uint128 auVar27;
  uint uVar30;
  uint uVar31;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint128 auVar32;
  uint128 auVar33;
  uint128 auVar34;
  uint128 auVar35;
  uint128 auVar36;
  uint128 auVar37;
  uint128 auVar38;
  uint128 auVar39;
  uint128 auVar40;
  uint128 auVar41;
  uint128 auVar42;
  uint128 auVar43;
  uint128 auVar44;
  uint128 auVar45;
  uint128 auVar46;
  uint128 auVar47;
  uint uVar51;
  uint uVar52;

  PF_PART8(local_228, 8) = uRam000000001001d808;
  PF_PART8(local_228, 0) = _DAT_1001d800;
  PF_PART8(local_218, 8) = uRam000000001001d818;
  PF_PART8(local_218, 0) = _DAT_1001d810;
  PF_PART8(local_1a8, 8) = uRam000000001001d828;
  PF_PART8(local_1a8, 0) = _DAT_1001d820;
  PF_PART8(local_198, 8) = uRam000000001001d838;
  PF_PART8(local_198, 0) = _DAT_1001d830;
  PF_PART16(local_118,0) = ZEXT816(0);
  PF_PART8(local_208, 8) = uRam000000001001d848;
  PF_PART8(local_208, 0) = _DAT_1001d840;
  PF_PART8(local_1f8, 8) = uRam000000001001d858;
  PF_PART8(local_1f8, 0) = _DAT_1001d850;
  PF_PART8(local_188, 8) = uRam000000001001d838;
  PF_PART8(local_188, 0) = _DAT_1001d830;
  PF_PART8(local_178, 8) = uRam000000001001d838;
  PF_PART8(local_178, 0) = _DAT_1001d830;
  PF_PART16(local_108,0) = ZEXT816(0);
  PF_PART16(local_f8,0) = ZEXT816(0);
  PF_PART8(local_1e8, 8) = uRam000000001001d868;
  PF_PART8(local_1e8, 0) = _DAT_1001d860;
  PF_PART8(local_1d8, 8) = uRam000000001001d878;
  PF_PART8(local_1d8, 0) = _DAT_1001d870;
  PF_PART8(local_168, 8) = uRam000000001001d838;
  PF_PART8(local_168, 0) = _DAT_1001d830;
  PF_PART8(local_158, 8) = uRam000000001001d838;
  PF_PART8(local_158, 0) = _DAT_1001d830;
  PF_PART16(local_e8,0) = ZEXT816(0);
  PF_PART16(local_d8,0) = ZEXT816(0);
  PF_PART8(local_1c8, 8) = uRam000000001001d888;
  PF_PART8(local_1c8, 0) = _DAT_1001d880;
  PF_PART8(local_1b8, 8) = uRam000000001001d898;
  PF_PART8(local_1b8, 0) = _DAT_1001d890;
  PF_PART8(local_148, 8) = uRam000000001001d838;
  PF_PART8(local_148, 0) = _DAT_1001d830;
  PF_PART8(local_138, 8) = uRam000000001001d838;
  PF_PART8(local_138, 0) = _DAT_1001d830;
  PF_PART16(local_c8,0) = ZEXT816(0);
  PF_PART16(local_b8,0) = ZEXT816(0);
  PF_PART16(local_128,0) = ZEXT816(1);
  recovered_1000d840((long *)local_a8,((uintptr_t)pf_module_state + 0x4baU),(ulong *)&DAT_1001dbd0);
  *(undefined8 *)(uintptr_t)param_1 = 0;
  *(undefined8 *)(((uint8_t *)(void *)param_1) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x18)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x18]) + 8) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[8]) + 8) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x10]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(1)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[1]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(9)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[9]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x11)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x11]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x19)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x19]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(2)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[2]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(10)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[10]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x12)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x12]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x1a)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x1a]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(3)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[3]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0xb)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0xb]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x13)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x13]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x1b)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x1b]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(4)) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0xc)) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x14)) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x1c)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[4]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(5)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0xc]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0xd)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x14]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x15)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x1c]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x1d)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[5]) + 8) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0xd]) + 8) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x15]) + 8) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x1d]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(6)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[6]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0xe)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0xe]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x16)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x16]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x1e)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x1e]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(7)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[7]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0xf)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0xf]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x17)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x17]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(0x1f)) = 0;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x1f]) + 8) = 0;
  *(undefined8 *)(uintptr_t)(param_1+(8)) = 1;
  *(undefined8 *)(uintptr_t)(param_1+(0x10)) = 1;
  uVar9 = 0xff;
  do {
    lVar1 = -(ulong)((*(byte *)(param_2 + (ulong)(uVar9 >> 3)) >> (uVar9 & 7) & 1) != 0);
    uVar50 = (uint)lVar1;
    uVar52 = (uint)((ulong)lVar1 >> 0x20);
    PF_PART4(auVar12, 8) = uVar50;
    PF_PART8(auVar12, 0) = lVar1;
    PF_PART4(auVar12, 12) = uVar52;
    auVar12 = (PF_PART16(local_228,0) ^ *param_1) & auVar12;
    PF_PART4(auVar32, 8) = uVar50;
    PF_PART8(auVar32, 0) = lVar1;
    PF_PART4(auVar32, 12) = uVar52;
    auVar32 = (PF_PART16(local_218,0) ^ param_1[1]) & auVar32;
    *param_1 = *param_1 ^ auVar12;
    param_1[1] = param_1[1] ^ auVar32;
    PF_PART16(local_228,0) = auVar12 ^ PF_PART16(local_228,0);
    PF_PART16(local_218,0) = auVar32 ^ PF_PART16(local_218,0);
    PF_PART4(auVar13, 8) = uVar50;
    PF_PART8(auVar13, 0) = lVar1;
    PF_PART4(auVar13, 12) = uVar52;
    auVar13 = (PF_PART16(local_208,0) ^ param_1[2]) & auVar13;
    PF_PART4(auVar33, 8) = uVar50;
    PF_PART8(auVar33, 0) = lVar1;
    PF_PART4(auVar33, 12) = uVar52;
    auVar33 = (PF_PART16(local_1f8,0) ^ param_1[3]) & auVar33;
    param_1[2] = param_1[2] ^ auVar13;
    param_1[3] = param_1[3] ^ auVar33;
    PF_PART16(local_208,0) = auVar13 ^ PF_PART16(local_208,0);
    PF_PART16(local_1f8,0) = auVar33 ^ PF_PART16(local_1f8,0);
    PF_PART4(auVar14, 8) = uVar50;
    PF_PART8(auVar14, 0) = lVar1;
    PF_PART4(auVar14, 12) = uVar52;
    auVar14 = (PF_PART16(local_1e8,0) ^ param_1[4]) & auVar14;
    PF_PART4(auVar34, 8) = uVar50;
    PF_PART8(auVar34, 0) = lVar1;
    PF_PART4(auVar34, 12) = uVar52;
    auVar34 = (PF_PART16(local_1d8,0) ^ param_1[5]) & auVar34;
    param_1[4] = param_1[4] ^ auVar14;
    param_1[5] = param_1[5] ^ auVar34;
    PF_PART16(local_1e8,0) = auVar14 ^ PF_PART16(local_1e8,0);
    PF_PART16(local_1d8,0) = auVar34 ^ PF_PART16(local_1d8,0);
    PF_PART4(auVar15, 8) = uVar50;
    PF_PART8(auVar15, 0) = lVar1;
    PF_PART4(auVar15, 12) = uVar52;
    auVar15 = (PF_PART16(local_1c8,0) ^ param_1[6]) & auVar15;
    PF_PART4(auVar35, 8) = uVar50;
    PF_PART8(auVar35, 0) = lVar1;
    PF_PART4(auVar35, 12) = uVar52;
    auVar35 = (PF_PART16(local_1b8,0) ^ param_1[7]) & auVar35;
    param_1[6] = param_1[6] ^ auVar15;
    param_1[7] = param_1[7] ^ auVar35;
    PF_PART16(local_1c8,0) = auVar15 ^ PF_PART16(local_1c8,0);
    PF_PART16(local_1b8,0) = auVar35 ^ PF_PART16(local_1b8,0);
    PF_PART4(auVar16, 8) = uVar50;
    PF_PART8(auVar16, 0) = lVar1;
    PF_PART4(auVar16, 12) = uVar52;
    auVar16 = (PF_PART16(local_1a8,0) ^ param_1[8]) & auVar16;
    PF_PART4(auVar36, 8) = uVar50;
    PF_PART8(auVar36, 0) = lVar1;
    PF_PART4(auVar36, 12) = uVar52;
    auVar36 = (PF_PART16(local_198,0) ^ param_1[9]) & auVar36;
    param_1[8] = param_1[8] ^ auVar16;
    param_1[9] = param_1[9] ^ auVar36;
    PF_PART16(local_1a8,0) = auVar16 ^ PF_PART16(local_1a8,0);
    PF_PART16(local_198,0) = auVar36 ^ PF_PART16(local_198,0);
    PF_PART4(auVar17, 8) = uVar50;
    PF_PART8(auVar17, 0) = lVar1;
    PF_PART4(auVar17, 12) = uVar52;
    auVar17 = (PF_PART16(local_188,0) ^ param_1[10]) & auVar17;
    PF_PART4(auVar37, 8) = uVar50;
    PF_PART8(auVar37, 0) = lVar1;
    PF_PART4(auVar37, 12) = uVar52;
    auVar37 = (PF_PART16(local_178,0) ^ param_1[0xb]) & auVar37;
    param_1[10] = param_1[10] ^ auVar17;
    param_1[0xb] = param_1[0xb] ^ auVar37;
    PF_PART16(local_188,0) = auVar17 ^ PF_PART16(local_188,0);
    PF_PART16(local_178,0) = auVar37 ^ PF_PART16(local_178,0);
    PF_PART4(auVar18, 8) = uVar50;
    PF_PART8(auVar18, 0) = lVar1;
    PF_PART4(auVar18, 12) = uVar52;
    auVar18 = (PF_PART16(local_168,0) ^ param_1[0xc]) & auVar18;
    PF_PART4(auVar38, 8) = uVar50;
    PF_PART8(auVar38, 0) = lVar1;
    PF_PART4(auVar38, 12) = uVar52;
    auVar38 = (PF_PART16(local_158,0) ^ param_1[0xd]) & auVar38;
    param_1[0xc] = param_1[0xc] ^ auVar18;
    param_1[0xd] = param_1[0xd] ^ auVar38;
    PF_PART16(local_168,0) = auVar18 ^ PF_PART16(local_168,0);
    PF_PART16(local_158,0) = auVar38 ^ PF_PART16(local_158,0);
    PF_PART4(auVar19, 8) = uVar50;
    PF_PART8(auVar19, 0) = lVar1;
    PF_PART4(auVar19, 12) = uVar52;
    auVar19 = (PF_PART16(local_148,0) ^ param_1[0xe]) & auVar19;
    PF_PART4(auVar39, 8) = uVar50;
    PF_PART8(auVar39, 0) = lVar1;
    PF_PART4(auVar39, 12) = uVar52;
    auVar39 = (PF_PART16(local_138,0) ^ param_1[0xf]) & auVar39;
    param_1[0xe] = param_1[0xe] ^ auVar19;
    param_1[0xf] = param_1[0xf] ^ auVar39;
    PF_PART16(local_148,0) = auVar19 ^ PF_PART16(local_148,0);
    PF_PART16(local_138,0) = auVar39 ^ PF_PART16(local_138,0);
    PF_PART4(auVar20, 8) = uVar50;
    PF_PART8(auVar20, 0) = lVar1;
    PF_PART4(auVar20, 12) = uVar52;
    auVar20 = (PF_PART16(local_128,0) ^ param_1[0x10]) & auVar20;
    PF_PART4(auVar40, 8) = uVar50;
    PF_PART8(auVar40, 0) = lVar1;
    PF_PART4(auVar40, 12) = uVar52;
    auVar40 = (PF_PART16(local_118,0) ^ param_1[0x11]) & auVar40;
    param_1[0x10] = param_1[0x10] ^ auVar20;
    param_1[0x11] = param_1[0x11] ^ auVar40;
    PF_PART16(local_128,0) = auVar20 ^ PF_PART16(local_128,0);
    PF_PART16(local_118,0) = auVar40 ^ PF_PART16(local_118,0);
    PF_PART4(auVar21, 8) = uVar50;
    PF_PART8(auVar21, 0) = lVar1;
    PF_PART4(auVar21, 12) = uVar52;
    auVar21 = (PF_PART16(local_108,0) ^ param_1[0x12]) & auVar21;
    PF_PART4(auVar41, 8) = uVar50;
    PF_PART8(auVar41, 0) = lVar1;
    PF_PART4(auVar41, 12) = uVar52;
    auVar41 = (PF_PART16(local_f8,0) ^ param_1[0x13]) & auVar41;
    param_1[0x12] = param_1[0x12] ^ auVar21;
    param_1[0x13] = param_1[0x13] ^ auVar41;
    PF_PART16(local_108,0) = auVar21 ^ PF_PART16(local_108,0);
    PF_PART16(local_f8,0) = auVar41 ^ PF_PART16(local_f8,0);
    PF_PART4(auVar22, 8) = uVar50;
    PF_PART8(auVar22, 0) = lVar1;
    PF_PART4(auVar22, 12) = uVar52;
    auVar22 = (PF_PART16(local_e8,0) ^ param_1[0x14]) & auVar22;
    PF_PART4(auVar42, 8) = uVar50;
    PF_PART8(auVar42, 0) = lVar1;
    PF_PART4(auVar42, 12) = uVar52;
    auVar42 = (PF_PART16(local_d8,0) ^ param_1[0x15]) & auVar42;
    param_1[0x14] = param_1[0x14] ^ auVar22;
    param_1[0x15] = param_1[0x15] ^ auVar42;
    PF_PART16(local_e8,0) = auVar22 ^ PF_PART16(local_e8,0);
    PF_PART16(local_d8,0) = auVar42 ^ PF_PART16(local_d8,0);
    PF_PART4(auVar23, 8) = uVar50;
    PF_PART8(auVar23, 0) = lVar1;
    PF_PART4(auVar23, 12) = uVar52;
    auVar23 = (PF_PART16(local_c8,0) ^ param_1[0x16]) & auVar23;
    PF_PART4(auVar43, 8) = uVar50;
    PF_PART8(auVar43, 0) = lVar1;
    PF_PART4(auVar43, 12) = uVar52;
    auVar43 = (PF_PART16(local_b8,0) ^ param_1[0x17]) & auVar43;
    param_1[0x16] = param_1[0x16] ^ auVar23;
    param_1[0x17] = param_1[0x17] ^ auVar43;
    PF_PART16(local_c8,0) = auVar23 ^ PF_PART16(local_c8,0);
    PF_PART16(local_b8,0) = auVar43 ^ PF_PART16(local_b8,0);
    PF_PART4(auVar24, 8) = uVar50;
    PF_PART8(auVar24, 0) = lVar1;
    PF_PART4(auVar24, 12) = uVar52;
    auVar24 = (PF_PART16(local_a8,0) ^ param_1[0x18]) & auVar24;
    PF_PART4(auVar44, 8) = uVar50;
    PF_PART8(auVar44, 0) = lVar1;
    PF_PART4(auVar44, 12) = uVar52;
    auVar44 = (PF_PART16(local_98,0) ^ param_1[0x19]) & auVar44;
    param_1[0x18] = param_1[0x18] ^ auVar24;
    param_1[0x19] = param_1[0x19] ^ auVar44;
    PF_PART16(local_a8,0) = auVar24 ^ PF_PART16(local_a8,0);
    PF_PART16(local_98,0) = auVar44 ^ PF_PART16(local_98,0);
    PF_PART4(auVar25, 8) = uVar50;
    PF_PART8(auVar25, 0) = lVar1;
    PF_PART4(auVar25, 12) = uVar52;
    auVar25 = (PF_PART16(local_88,0) ^ param_1[0x1a]) & auVar25;
    PF_PART4(auVar45, 8) = uVar50;
    PF_PART8(auVar45, 0) = lVar1;
    PF_PART4(auVar45, 12) = uVar52;
    auVar45 = (PF_PART16(local_78,0) ^ param_1[0x1b]) & auVar45;
    param_1[0x1a] = param_1[0x1a] ^ auVar25;
    param_1[0x1b] = param_1[0x1b] ^ auVar45;
    PF_PART16(local_88,0) = auVar25 ^ PF_PART16(local_88,0);
    PF_PART16(local_78,0) = auVar45 ^ PF_PART16(local_78,0);
    PF_PART4(auVar26, 8) = uVar50;
    PF_PART8(auVar26, 0) = lVar1;
    PF_PART4(auVar26, 12) = uVar52;
    auVar26 = (PF_PART16(local_68,0) ^ param_1[0x1c]) & auVar26;
    PF_PART4(auVar46, 8) = uVar50;
    PF_PART8(auVar46, 0) = lVar1;
    PF_PART4(auVar46, 12) = uVar52;
    auVar46 = (PF_PART16(local_58,0) ^ param_1[0x1d]) & auVar46;
    param_1[0x1c] = param_1[0x1c] ^ auVar26;
    param_1[0x1d] = param_1[0x1d] ^ auVar46;
    PF_PART16(local_68,0) = auVar26 ^ PF_PART16(local_68,0);
    PF_PART16(local_58,0) = auVar46 ^ PF_PART16(local_58,0);
    PF_PART4(auVar27, 8) = uVar50;
    PF_PART8(auVar27, 0) = lVar1;
    PF_PART4(auVar27, 12) = uVar52;
    auVar27 = (PF_PART16(local_48,0) ^ param_1[0x1e]) & auVar27;
    PF_PART4(auVar47, 8) = uVar50;
    PF_PART8(auVar47, 0) = lVar1;
    PF_PART4(auVar47, 12) = uVar52;
    auVar47 = (PF_PART16(local_38,0) ^ param_1[0x1f]) & auVar47;
    param_1[0x1e] = param_1[0x1e] ^ auVar27;
    param_1[0x1f] = param_1[0x1f] ^ auVar47;
    PF_PART16(local_48,0) = auVar27 ^ PF_PART16(local_48,0);
    PF_PART16(local_38,0) = auVar47 ^ PF_PART16(local_38,0);
    recovered_1000ddc0((long *)local_228,(long *)param_1);
    recovered_1000ddc0((long *)param_1,(long *)param_1);
    uVar2 = *(uint *)(((uint8_t *)(void *)param_1) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)param_1) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)param_1) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(1));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[1]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[1]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[1]) + 0xc);
    uVar11 = (PF_PART4(local_228, 0) ^ *(uint *)(uintptr_t)param_1) & uVar50;
    uVar28 = (PF_PART4(local_228, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_228, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_228, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_218, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_218, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_218, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_218, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)param_1 = *(uint *)(uintptr_t)param_1 ^ uVar11;
    *(uint *)(((uint8_t *)(void *)param_1) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)param_1) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)param_1) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(1)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[1]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[1]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[1]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_228, 4) = uVar28 ^ PF_PART4(local_228, 4);
    PF_PART4(local_228, 0) = uVar11 ^ PF_PART4(local_228, 0);
    PF_PART4(local_228, 8) = uVar29 ^ PF_PART4(local_228, 8);
    PF_PART4(local_228, 12) = uVar30 ^ PF_PART4(local_228, 12);
    PF_PART4(local_218, 4) = uVar48 ^ PF_PART4(local_218, 4);
    PF_PART4(local_218, 0) = uVar31 ^ PF_PART4(local_218, 0);
    PF_PART4(local_218, 8) = uVar49 ^ PF_PART4(local_218, 8);
    PF_PART4(local_218, 12) = uVar51 ^ PF_PART4(local_218, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[2]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[2]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[2]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(3));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[3]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[3]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[3]) + 0xc);
    uVar11 = (PF_PART4(local_208, 0) ^ *(uint *)(uintptr_t)(param_1+(2))) & uVar50;
    uVar28 = (PF_PART4(local_208, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_208, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_208, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_1f8, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_1f8, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_1f8, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_1f8, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(2)) = *(uint *)(uintptr_t)(param_1+(2)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[2]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[2]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[2]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(3)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[3]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[3]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[3]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_208, 4) = uVar28 ^ PF_PART4(local_208, 4);
    PF_PART4(local_208, 0) = uVar11 ^ PF_PART4(local_208, 0);
    PF_PART4(local_208, 8) = uVar29 ^ PF_PART4(local_208, 8);
    PF_PART4(local_208, 12) = uVar30 ^ PF_PART4(local_208, 12);
    PF_PART4(local_1f8, 4) = uVar48 ^ PF_PART4(local_1f8, 4);
    PF_PART4(local_1f8, 0) = uVar31 ^ PF_PART4(local_1f8, 0);
    PF_PART4(local_1f8, 8) = uVar49 ^ PF_PART4(local_1f8, 8);
    PF_PART4(local_1f8, 12) = uVar51 ^ PF_PART4(local_1f8, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[4]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[4]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[4]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(5));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[5]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[5]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[5]) + 0xc);
    uVar11 = (PF_PART4(local_1e8, 0) ^ *(uint *)(uintptr_t)(param_1+(4))) & uVar50;
    uVar28 = (PF_PART4(local_1e8, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_1e8, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_1e8, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_1d8, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_1d8, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_1d8, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_1d8, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(4)) = *(uint *)(uintptr_t)(param_1+(4)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[4]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[4]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[4]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(5)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[5]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[5]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[5]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_1e8, 4) = uVar28 ^ PF_PART4(local_1e8, 4);
    PF_PART4(local_1e8, 0) = uVar11 ^ PF_PART4(local_1e8, 0);
    PF_PART4(local_1e8, 8) = uVar29 ^ PF_PART4(local_1e8, 8);
    PF_PART4(local_1e8, 12) = uVar30 ^ PF_PART4(local_1e8, 12);
    PF_PART4(local_1d8, 4) = uVar48 ^ PF_PART4(local_1d8, 4);
    PF_PART4(local_1d8, 0) = uVar31 ^ PF_PART4(local_1d8, 0);
    PF_PART4(local_1d8, 8) = uVar49 ^ PF_PART4(local_1d8, 8);
    PF_PART4(local_1d8, 12) = uVar51 ^ PF_PART4(local_1d8, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[6]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[6]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[6]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(7));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[7]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[7]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[7]) + 0xc);
    uVar11 = (PF_PART4(local_1c8, 0) ^ *(uint *)(uintptr_t)(param_1+(6))) & uVar50;
    uVar28 = (PF_PART4(local_1c8, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_1c8, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_1c8, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_1b8, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_1b8, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_1b8, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_1b8, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(6)) = *(uint *)(uintptr_t)(param_1+(6)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[6]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[6]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[6]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(7)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[7]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[7]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[7]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_1c8, 4) = uVar28 ^ PF_PART4(local_1c8, 4);
    PF_PART4(local_1c8, 0) = uVar11 ^ PF_PART4(local_1c8, 0);
    PF_PART4(local_1c8, 8) = uVar29 ^ PF_PART4(local_1c8, 8);
    PF_PART4(local_1c8, 12) = uVar30 ^ PF_PART4(local_1c8, 12);
    PF_PART4(local_1b8, 4) = uVar48 ^ PF_PART4(local_1b8, 4);
    PF_PART4(local_1b8, 0) = uVar31 ^ PF_PART4(local_1b8, 0);
    PF_PART4(local_1b8, 8) = uVar49 ^ PF_PART4(local_1b8, 8);
    PF_PART4(local_1b8, 12) = uVar51 ^ PF_PART4(local_1b8, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[8]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[8]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[8]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(9));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[9]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[9]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[9]) + 0xc);
    uVar11 = (PF_PART4(local_1a8, 0) ^ *(uint *)(uintptr_t)(param_1+(8))) & uVar50;
    uVar28 = (PF_PART4(local_1a8, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_1a8, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_1a8, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_198, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_198, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_198, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_198, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(8)) = *(uint *)(uintptr_t)(param_1+(8)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[8]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[8]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[8]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(9)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[9]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[9]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[9]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_1a8, 4) = uVar28 ^ PF_PART4(local_1a8, 4);
    PF_PART4(local_1a8, 0) = uVar11 ^ PF_PART4(local_1a8, 0);
    PF_PART4(local_1a8, 8) = uVar29 ^ PF_PART4(local_1a8, 8);
    PF_PART4(local_1a8, 12) = uVar30 ^ PF_PART4(local_1a8, 12);
    PF_PART4(local_198, 4) = uVar48 ^ PF_PART4(local_198, 4);
    PF_PART4(local_198, 0) = uVar31 ^ PF_PART4(local_198, 0);
    PF_PART4(local_198, 8) = uVar49 ^ PF_PART4(local_198, 8);
    PF_PART4(local_198, 12) = uVar51 ^ PF_PART4(local_198, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[10]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[10]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[10]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0xb));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0xb]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0xb]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0xb]) + 0xc);
    uVar11 = (PF_PART4(local_188, 0) ^ *(uint *)(uintptr_t)(param_1+(10))) & uVar50;
    uVar28 = (PF_PART4(local_188, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_188, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_188, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_178, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_178, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_178, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_178, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(10)) = *(uint *)(uintptr_t)(param_1+(10)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[10]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[10]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[10]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0xb)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0xb]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0xb]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[0xb]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_188, 4) = uVar28 ^ PF_PART4(local_188, 4);
    PF_PART4(local_188, 0) = uVar11 ^ PF_PART4(local_188, 0);
    PF_PART4(local_188, 8) = uVar29 ^ PF_PART4(local_188, 8);
    PF_PART4(local_188, 12) = uVar30 ^ PF_PART4(local_188, 12);
    PF_PART4(local_178, 4) = uVar48 ^ PF_PART4(local_178, 4);
    PF_PART4(local_178, 0) = uVar31 ^ PF_PART4(local_178, 0);
    PF_PART4(local_178, 8) = uVar49 ^ PF_PART4(local_178, 8);
    PF_PART4(local_178, 12) = uVar51 ^ PF_PART4(local_178, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[0xc]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[0xc]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[0xc]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0xd));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0xd]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0xd]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0xd]) + 0xc);
    uVar11 = (PF_PART4(local_168, 0) ^ *(uint *)(uintptr_t)(param_1+(0xc))) & uVar50;
    uVar28 = (PF_PART4(local_168, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_168, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_168, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_158, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_158, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_158, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_158, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(0xc)) = *(uint *)(uintptr_t)(param_1+(0xc)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[0xc]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[0xc]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[0xc]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0xd)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0xd]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0xd]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[0xd]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_168, 4) = uVar28 ^ PF_PART4(local_168, 4);
    PF_PART4(local_168, 0) = uVar11 ^ PF_PART4(local_168, 0);
    PF_PART4(local_168, 8) = uVar29 ^ PF_PART4(local_168, 8);
    PF_PART4(local_168, 12) = uVar30 ^ PF_PART4(local_168, 12);
    PF_PART4(local_158, 4) = uVar48 ^ PF_PART4(local_158, 4);
    PF_PART4(local_158, 0) = uVar31 ^ PF_PART4(local_158, 0);
    PF_PART4(local_158, 8) = uVar49 ^ PF_PART4(local_158, 8);
    PF_PART4(local_158, 12) = uVar51 ^ PF_PART4(local_158, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[0xe]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[0xe]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[0xe]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0xf));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0xf]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0xf]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0xf]) + 0xc);
    uVar11 = (PF_PART4(local_148, 0) ^ *(uint *)(uintptr_t)(param_1+(0xe))) & uVar50;
    uVar28 = (PF_PART4(local_148, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_148, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_148, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_138, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_138, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_138, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_138, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(0xe)) = *(uint *)(uintptr_t)(param_1+(0xe)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[0xe]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[0xe]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[0xe]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0xf)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0xf]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0xf]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[0xf]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_148, 4) = uVar28 ^ PF_PART4(local_148, 4);
    PF_PART4(local_148, 0) = uVar11 ^ PF_PART4(local_148, 0);
    PF_PART4(local_148, 8) = uVar29 ^ PF_PART4(local_148, 8);
    PF_PART4(local_148, 12) = uVar30 ^ PF_PART4(local_148, 12);
    PF_PART4(local_138, 4) = uVar48 ^ PF_PART4(local_138, 4);
    PF_PART4(local_138, 0) = uVar31 ^ PF_PART4(local_138, 0);
    PF_PART4(local_138, 8) = uVar49 ^ PF_PART4(local_138, 8);
    PF_PART4(local_138, 12) = uVar51 ^ PF_PART4(local_138, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[0x10]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[0x10]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[0x10]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0x11));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0x11]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0x11]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0x11]) + 0xc);
    uVar11 = (PF_PART4(local_128, 0) ^ *(uint *)(uintptr_t)(param_1+(0x10))) & uVar50;
    uVar28 = (PF_PART4(local_128, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_128, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_128, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_118, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_118, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_118, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_118, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(0x10)) = *(uint *)(uintptr_t)(param_1+(0x10)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[0x10]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[0x10]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[0x10]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0x11)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0x11]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0x11]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[0x11]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_128, 4) = uVar28 ^ PF_PART4(local_128, 4);
    PF_PART4(local_128, 0) = uVar11 ^ PF_PART4(local_128, 0);
    PF_PART4(local_128, 8) = uVar29 ^ PF_PART4(local_128, 8);
    PF_PART4(local_128, 12) = uVar30 ^ PF_PART4(local_128, 12);
    PF_PART4(local_118, 4) = uVar48 ^ PF_PART4(local_118, 4);
    PF_PART4(local_118, 0) = uVar31 ^ PF_PART4(local_118, 0);
    PF_PART4(local_118, 8) = uVar49 ^ PF_PART4(local_118, 8);
    PF_PART4(local_118, 12) = uVar51 ^ PF_PART4(local_118, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[0x12]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[0x12]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[0x12]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0x13));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0x13]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0x13]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0x13]) + 0xc);
    uVar11 = (PF_PART4(local_108, 0) ^ *(uint *)(uintptr_t)(param_1+(0x12))) & uVar50;
    uVar28 = (PF_PART4(local_108, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_108, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_108, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_f8, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_f8, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_f8, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_f8, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(0x12)) = *(uint *)(uintptr_t)(param_1+(0x12)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[0x12]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[0x12]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[0x12]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0x13)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0x13]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0x13]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[0x13]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_108, 4) = uVar28 ^ PF_PART4(local_108, 4);
    PF_PART4(local_108, 0) = uVar11 ^ PF_PART4(local_108, 0);
    PF_PART4(local_108, 8) = uVar29 ^ PF_PART4(local_108, 8);
    PF_PART4(local_108, 12) = uVar30 ^ PF_PART4(local_108, 12);
    PF_PART4(local_f8, 4) = uVar48 ^ PF_PART4(local_f8, 4);
    PF_PART4(local_f8, 0) = uVar31 ^ PF_PART4(local_f8, 0);
    PF_PART4(local_f8, 8) = uVar49 ^ PF_PART4(local_f8, 8);
    PF_PART4(local_f8, 12) = uVar51 ^ PF_PART4(local_f8, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[0x14]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[0x14]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[0x14]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0x15));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0x15]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0x15]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0x15]) + 0xc);
    uVar11 = (PF_PART4(local_e8, 0) ^ *(uint *)(uintptr_t)(param_1+(0x14))) & uVar50;
    uVar28 = (PF_PART4(local_e8, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_e8, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_e8, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_d8, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_d8, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_d8, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_d8, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(0x14)) = *(uint *)(uintptr_t)(param_1+(0x14)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[0x14]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[0x14]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[0x14]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0x15)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0x15]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0x15]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[0x15]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_e8, 4) = uVar28 ^ PF_PART4(local_e8, 4);
    PF_PART4(local_e8, 0) = uVar11 ^ PF_PART4(local_e8, 0);
    PF_PART4(local_e8, 8) = uVar29 ^ PF_PART4(local_e8, 8);
    PF_PART4(local_e8, 12) = uVar30 ^ PF_PART4(local_e8, 12);
    PF_PART4(local_d8, 4) = uVar48 ^ PF_PART4(local_d8, 4);
    PF_PART4(local_d8, 0) = uVar31 ^ PF_PART4(local_d8, 0);
    PF_PART4(local_d8, 8) = uVar49 ^ PF_PART4(local_d8, 8);
    PF_PART4(local_d8, 12) = uVar51 ^ PF_PART4(local_d8, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[0x16]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[0x16]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[0x16]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0x17));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0x17]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0x17]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0x17]) + 0xc);
    uVar11 = (PF_PART4(local_c8, 0) ^ *(uint *)(uintptr_t)(param_1+(0x16))) & uVar50;
    uVar28 = (PF_PART4(local_c8, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_c8, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_c8, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_b8, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_b8, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_b8, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_b8, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(0x16)) = *(uint *)(uintptr_t)(param_1+(0x16)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[0x16]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[0x16]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[0x16]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0x17)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0x17]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0x17]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[0x17]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_c8, 4) = uVar28 ^ PF_PART4(local_c8, 4);
    PF_PART4(local_c8, 0) = uVar11 ^ PF_PART4(local_c8, 0);
    PF_PART4(local_c8, 8) = uVar29 ^ PF_PART4(local_c8, 8);
    PF_PART4(local_c8, 12) = uVar30 ^ PF_PART4(local_c8, 12);
    PF_PART4(local_b8, 4) = uVar48 ^ PF_PART4(local_b8, 4);
    PF_PART4(local_b8, 0) = uVar31 ^ PF_PART4(local_b8, 0);
    PF_PART4(local_b8, 8) = uVar49 ^ PF_PART4(local_b8, 8);
    PF_PART4(local_b8, 12) = uVar51 ^ PF_PART4(local_b8, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[0x18]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[0x18]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[0x18]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0x19));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0x19]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0x19]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0x19]) + 0xc);
    uVar11 = (PF_PART4(local_a8, 0) ^ *(uint *)(uintptr_t)(param_1+(0x18))) & uVar50;
    uVar28 = (PF_PART4(local_a8, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_a8, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_a8, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_98, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_98, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_98, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_98, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(0x18)) = *(uint *)(uintptr_t)(param_1+(0x18)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[0x18]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[0x18]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[0x18]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0x19)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0x19]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0x19]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[0x19]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_a8, 4) = uVar28 ^ PF_PART4(local_a8, 4);
    PF_PART4(local_a8, 0) = uVar11 ^ PF_PART4(local_a8, 0);
    PF_PART4(local_a8, 8) = uVar29 ^ PF_PART4(local_a8, 8);
    PF_PART4(local_a8, 12) = uVar30 ^ PF_PART4(local_a8, 12);
    PF_PART4(local_98, 4) = uVar48 ^ PF_PART4(local_98, 4);
    PF_PART4(local_98, 0) = uVar31 ^ PF_PART4(local_98, 0);
    PF_PART4(local_98, 8) = uVar49 ^ PF_PART4(local_98, 8);
    PF_PART4(local_98, 12) = uVar51 ^ PF_PART4(local_98, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[0x1a]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[0x1a]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[0x1a]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0x1b));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0x1b]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0x1b]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0x1b]) + 0xc);
    uVar11 = (PF_PART4(local_88, 0) ^ *(uint *)(uintptr_t)(param_1+(0x1a))) & uVar50;
    uVar28 = (PF_PART4(local_88, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_88, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_88, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_78, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_78, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_78, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_78, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(0x1a)) = *(uint *)(uintptr_t)(param_1+(0x1a)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1a]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1a]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1a]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0x1b)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1b]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1b]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1b]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_88, 4) = uVar28 ^ PF_PART4(local_88, 4);
    PF_PART4(local_88, 0) = uVar11 ^ PF_PART4(local_88, 0);
    PF_PART4(local_88, 8) = uVar29 ^ PF_PART4(local_88, 8);
    PF_PART4(local_88, 12) = uVar30 ^ PF_PART4(local_88, 12);
    PF_PART4(local_78, 4) = uVar48 ^ PF_PART4(local_78, 4);
    PF_PART4(local_78, 0) = uVar31 ^ PF_PART4(local_78, 0);
    PF_PART4(local_78, 8) = uVar49 ^ PF_PART4(local_78, 8);
    PF_PART4(local_78, 12) = uVar51 ^ PF_PART4(local_78, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[0x1c]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[0x1c]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[0x1c]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0x1d));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0x1d]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0x1d]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0x1d]) + 0xc);
    uVar11 = (PF_PART4(local_68, 0) ^ *(uint *)(uintptr_t)(param_1+(0x1c))) & uVar50;
    uVar28 = (PF_PART4(local_68, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_68, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_68, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_58, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_58, 4) ^ uVar6) & uVar52;
    uVar49 = (PF_PART4(local_58, 8) ^ uVar7) & uVar50;
    uVar51 = (PF_PART4(local_58, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(0x1c)) = *(uint *)(uintptr_t)(param_1+(0x1c)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1c]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1c]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1c]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0x1d)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1d]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1d]) + 8) = uVar7 ^ uVar49;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1d]) + 0xc) = uVar8 ^ uVar51;
    PF_PART4(local_68, 4) = uVar28 ^ PF_PART4(local_68, 4);
    PF_PART4(local_68, 0) = uVar11 ^ PF_PART4(local_68, 0);
    PF_PART4(local_68, 8) = uVar29 ^ PF_PART4(local_68, 8);
    PF_PART4(local_68, 12) = uVar30 ^ PF_PART4(local_68, 12);
    PF_PART4(local_58, 4) = uVar48 ^ PF_PART4(local_58, 4);
    PF_PART4(local_58, 0) = uVar31 ^ PF_PART4(local_58, 0);
    PF_PART4(local_58, 8) = uVar49 ^ PF_PART4(local_58, 8);
    PF_PART4(local_58, 12) = uVar51 ^ PF_PART4(local_58, 12);
    uVar2 = *(uint *)(((uint8_t *)(void *)&param_1[0x1e]) + 4);
    uVar3 = *(uint *)(((uint8_t *)(void *)&param_1[0x1e]) + 8);
    uVar4 = *(uint *)(((uint8_t *)(void *)&param_1[0x1e]) + 0xc);
    uVar5 = *(uint *)(uintptr_t)(param_1+(0x1f));
    uVar6 = *(uint *)(((uint8_t *)(void *)&param_1[0x1f]) + 4);
    uVar7 = *(uint *)(((uint8_t *)(void *)&param_1[0x1f]) + 8);
    uVar8 = *(uint *)(((uint8_t *)(void *)&param_1[0x1f]) + 0xc);
    uVar11 = (PF_PART4(local_48, 0) ^ *(uint *)(uintptr_t)(param_1+(0x1e))) & uVar50;
    uVar28 = (PF_PART4(local_48, 4) ^ uVar2) & uVar52;
    uVar29 = (PF_PART4(local_48, 8) ^ uVar3) & uVar50;
    uVar30 = (PF_PART4(local_48, 12) ^ uVar4) & uVar52;
    uVar31 = (PF_PART4(local_38, 0) ^ uVar5) & uVar50;
    uVar48 = (PF_PART4(local_38, 4) ^ uVar6) & uVar52;
    uVar50 = (PF_PART4(local_38, 8) ^ uVar7) & uVar50;
    uVar52 = (PF_PART4(local_38, 12) ^ uVar8) & uVar52;
    *(uint *)(uintptr_t)(param_1+(0x1e)) = *(uint *)(uintptr_t)(param_1+(0x1e)) ^ uVar11;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1e]) + 4) = uVar2 ^ uVar28;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1e]) + 8) = uVar3 ^ uVar29;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1e]) + 0xc) = uVar4 ^ uVar30;
    *(uint *)(uintptr_t)(param_1+(0x1f)) = uVar5 ^ uVar31;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1f]) + 4) = uVar6 ^ uVar48;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1f]) + 8) = uVar7 ^ uVar50;
    *(uint *)(((uint8_t *)(void *)&param_1[0x1f]) + 0xc) = uVar8 ^ uVar52;
    PF_PART4(local_48, 4) = uVar28 ^ PF_PART4(local_48, 4);
    PF_PART4(local_48, 0) = uVar11 ^ PF_PART4(local_48, 0);
    PF_PART4(local_48, 8) = uVar29 ^ PF_PART4(local_48, 8);
    PF_PART4(local_48, 12) = uVar30 ^ PF_PART4(local_48, 12);
    PF_PART4(local_38, 4) = uVar48 ^ PF_PART4(local_38, 4);
    PF_PART4(local_38, 0) = uVar31 ^ PF_PART4(local_38, 0);
    PF_PART4(local_38, 8) = uVar50 ^ PF_PART4(local_38, 8);
    PF_PART4(local_38, 12) = uVar52 ^ PF_PART4(local_38, 12);
    bVar10 = uVar9 != 0;
    uVar9 = uVar9 - 1;
  } while (bVar10);
  return;
}

#undef DAT_1001d800
#undef DAT_1001d810
#undef DAT_1001d820
#undef DAT_1001d830
#undef DAT_1001d840
#undef DAT_1001d850
#undef DAT_1001d860
#undef DAT_1001d870
#undef DAT_1001d880
#undef DAT_1001d890
#undef DAT_1001dbd0
#undef UNK_1001d808
#undef UNK_1001d818
#undef UNK_1001d828
#undef UNK_1001d838
#undef UNK_1001d848
#undef UNK_1001d858
#undef UNK_1001d868
#undef UNK_1001d878
#undef UNK_1001d888
#undef UNK_1001d898
#undef _DAT_1001d800
#undef _DAT_1001d810
#undef _DAT_1001d820
#undef _DAT_1001d830
#undef _DAT_1001d840
#undef _DAT_1001d850
#undef _DAT_1001d860
#undef _DAT_1001d870
#undef _DAT_1001d880
#undef _DAT_1001d890
#undef uRam000000001001d808
#undef uRam000000001001d818
#undef uRam000000001001d828
#undef uRam000000001001d838
#undef uRam000000001001d848
#undef uRam000000001001d858
#undef uRam000000001001d868
#undef uRam000000001001d878
#undef uRam000000001001d888
#undef uRam000000001001d898
#undef local_228
#undef local_218
#undef local_208
#undef local_1f8
#undef local_1e8
#undef local_1d8
#undef local_1c8
#undef local_1b8
#undef local_1a8
#undef local_198
#undef local_188
#undef local_178
#undef local_168
#undef local_158
#undef local_148
#undef local_138
#undef local_128
#undef local_118
#undef local_108
#undef local_f8
#undef local_e8
#undef local_d8
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_48
#undef local_38

#undef DAT_1001d8a0
#define DAT_1001d8a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20aU)))
#undef UNK_1001d8a8
#define UNK_1001d8a8 (*(uint *)(((uintptr_t)pf_module_state + 0x212U)))
#undef _DAT_1001d8a0
#define _DAT_1001d8a0 (*(uint *)(((uintptr_t)pf_module_state + 0x20aU)))
#undef uRam000000001001d8a8
#define uRam000000001001d8a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x212U)))
#define local_108 (*(long (*)[33])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000d840(long *param_1,long param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint128 auVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;

  uVar20 = uRam000000001001d8a8;
  uVar19 = _DAT_1001d8a0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_108[3] = 0;
  local_108[4] = 0;
  local_108[5] = 0;
  local_108[6] = 0;
  local_108[7] = 0;
  local_108[8] = 0;
  local_108[9] = 0;
  local_108[10] = 0;
  local_108[0xb] = 0;
  local_108[0xc] = 0;
  local_108[0xd] = 0;
  local_108[0xe] = 0;
  local_108[0xf] = 0;
  local_108[0x10] = 0;
  local_108[0x11] = 0;
  local_108[0x12] = 0;
  local_108[0x13] = 0;
  local_108[0x14] = 0;
  local_108[0x15] = 0;
  local_108[0x16] = 0;
  local_108[0x17] = 0;
  local_108[0x18] = 0;
  local_108[0x19] = 0;
  local_108[0x1a] = 0;
  local_108[0x1b] = 0;
  local_108[0x1c] = 0;
  local_108[0x1d] = 0;
  local_108[0x1e] = 0;
  uVar22 = *param_3;
  uVar3 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_3[4];
  uVar8 = param_3[5];
  uVar9 = param_3[6];
  uVar10 = param_3[7];
  uVar11 = param_3[10];
  uVar12 = param_3[0xb];
  uVar13 = param_3[8];
  uVar14 = param_3[9];
  uVar15 = param_3[0xe];
  uVar16 = param_3[0xf];
  uVar17 = param_3[0xc];
  uVar18 = param_3[0xd];
  lVar21 = 0;
  do {
    uVar2 = *(ulong *)(param_2 + lVar21 * 8);
    uVar25 = (uint)(uVar2 >> 0x20);
    PF_PART4(auVar4, 8) = (int)uVar2;
    PF_PART8(auVar4, 0) = uVar2;
    PF_PART4(auVar4, 12) = uVar25;
    local_108[lVar21] =
         local_108[lVar21] + (uVar22 & 0xffffffff) * (uVar2 & 0xffffffff) +
         ((uVar22 & 0xffffffff) * (ulong)uVar25 + (uVar22 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 1] =
         local_108[lVar21 + 1] + (uVar3 & 0xffffffff) * (uVar2 & 0xffffffff) +
         ((uVar3 & 0xffffffff) * (ulong)uVar25 + (uVar3 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 2] =
         local_108[lVar21 + 2] + (uVar5 & 0xffffffff) * (uVar2 & 0xffffffff) +
         ((uVar5 & 0xffffffff) * (ulong)uVar25 + (uVar5 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 3] =
         local_108[lVar21 + 3] + (uVar6 & 0xffffffff) * (uVar2 & 0xffffffff) +
         ((uVar6 & 0xffffffff) * (ulong)uVar25 + (uVar6 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 4] =
         (uVar7 & 0xffffffff) * (uVar2 & 0xffffffff) + local_108[lVar21 + 4] +
         ((uVar7 & 0xffffffff) * (ulong)uVar25 + (uVar7 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 5] =
         (uVar8 & 0xffffffff) * (uVar2 & 0xffffffff) + local_108[lVar21 + 5] +
         ((uVar8 & 0xffffffff) * (ulong)uVar25 + (uVar8 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 6] =
         (uVar9 & 0xffffffff) * (uVar2 & 0xffffffff) + local_108[lVar21 + 6] +
         ((uVar9 & 0xffffffff) * (ulong)uVar25 + (uVar9 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 7] =
         (uVar10 & 0xffffffff) * (uVar2 & 0xffffffff) + local_108[lVar21 + 7] +
         ((uVar10 & 0xffffffff) * (ulong)uVar25 + (uVar10 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 8] =
         local_108[lVar21 + 8] + (uVar13 & 0xffffffff) * (uVar2 & 0xffffffff) +
         ((uVar13 & 0xffffffff) * (ulong)uVar25 + (uVar13 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 9] =
         local_108[lVar21 + 9] + (uVar14 & 0xffffffff) * (uVar2 & 0xffffffff) +
         ((uVar14 & 0xffffffff) * (ulong)uVar25 + (uVar14 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 10] =
         local_108[lVar21 + 10] + (uVar11 & 0xffffffff) * (uVar2 & 0xffffffff) +
         ((uVar11 & 0xffffffff) * (ulong)uVar25 + (uVar11 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 0xb] =
         local_108[lVar21 + 0xb] + (uVar12 & 0xffffffff) * (uVar2 & 0xffffffff) +
         ((uVar12 & 0xffffffff) * (ulong)uVar25 + (uVar12 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 0xc] =
         local_108[lVar21 + 0xc] + (uVar17 & 0xffffffff) * (uVar2 & 0xffffffff) +
         ((uVar17 & 0xffffffff) * (ulong)uVar25 + (uVar17 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 0xd] =
         local_108[lVar21 + 0xd] + (uVar18 & 0xffffffff) * (uVar2 & 0xffffffff) +
         ((uVar18 & 0xffffffff) * (ulong)uVar25 + (uVar18 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 0xe] =
         local_108[lVar21 + 0xe] + (uVar2 & 0xffffffff) * (uVar15 & 0xffffffff) +
         ((ulong)uVar25 * (uVar15 & 0xffffffff) + (uVar15 >> 0x20) * (uVar2 & 0xffffffff) << 0x20);
    local_108[lVar21 + 0xf] =
         local_108[lVar21 + 0xf] + (uVar2 & 0xffffffff) * (uVar16 & 0xffffffff) +
         ((PF_PART8(auVar4, 8) >> 0x20) * (uVar16 & 0xffffffff) + (uVar16 >> 0x20) * (uVar2 & 0xffffffff)
         << 0x20);
    lVar21 = lVar21 + 1;
  } while (lVar21 != 0x10);
  uVar22 = (ulong)uRam000000001001d8a8;
  uVar3 = (ulong)uRam000000001001d8a8;
  *param_1 = (((ulong)local_108[0x10] >> 0x20) * (ulong)_DAT_1001d8a0 << 0x20) +
             (local_108[0x10] & 0xffffffffU) * (ulong)_DAT_1001d8a0 + local_108[0];
  param_1[1] = (((ulong)local_108[0x11] >> 0x20) * uVar3 << 0x20) +
               (local_108[0x11] & 0xffffffffU) * uVar22 + local_108[1];
  param_1[2] = (((ulong)local_108[0x12] >> 0x20) * (ulong)uVar19 << 0x20) +
               (local_108[0x12] & 0xffffffffU) * (ulong)uVar19 + local_108[2];
  param_1[3] = (((ulong)local_108[0x13] >> 0x20) * (ulong)uVar20 << 0x20) +
               (local_108[0x13] & 0xffffffffU) * (ulong)uVar20 + local_108[3];
  param_1[4] = (((ulong)local_108[0x14] >> 0x20) * (ulong)uVar19 << 0x20) +
               (local_108[0x14] & 0xffffffffU) * (ulong)uVar19 + local_108[4];
  param_1[5] = (((ulong)local_108[0x15] >> 0x20) * (ulong)uVar20 << 0x20) +
               (local_108[0x15] & 0xffffffffU) * (ulong)uVar20 + local_108[5];
  param_1[6] = (((ulong)local_108[0x16] >> 0x20) * (ulong)uVar19 << 0x20) +
               (local_108[0x16] & 0xffffffffU) * (ulong)uVar19 + local_108[6];
  param_1[7] = (((ulong)local_108[0x17] >> 0x20) * (ulong)uVar20 << 0x20) +
               (local_108[0x17] & 0xffffffffU) * (ulong)uVar20 + local_108[7];
  param_1[8] = (((ulong)local_108[0x18] >> 0x20) * (ulong)uVar19 << 0x20) +
               (local_108[0x18] & 0xffffffffU) * (ulong)uVar19 + local_108[8];
  param_1[9] = (((ulong)local_108[0x19] >> 0x20) * (ulong)uVar20 << 0x20) +
               (local_108[0x19] & 0xffffffffU) * (ulong)uVar20 + local_108[9];
  param_1[10] = (((ulong)local_108[0x1a] >> 0x20) * (ulong)uVar19 << 0x20) +
                (local_108[0x1a] & 0xffffffffU) * (ulong)uVar19 + local_108[10];
  param_1[0xb] = (((ulong)local_108[0x1b] >> 0x20) * (ulong)uVar20 << 0x20) +
                 (local_108[0x1b] & 0xffffffffU) * (ulong)uVar20 + local_108[0xb];
  param_1[0xc] = (((ulong)local_108[0x1c] >> 0x20) * (ulong)uVar19 << 0x20) +
                 (local_108[0x1c] & 0xffffffffU) * (ulong)uVar19 + local_108[0xc];
  param_1[0xd] = (((ulong)local_108[0x1d] >> 0x20) * (ulong)uVar20 << 0x20) +
                 (local_108[0x1d] & 0xffffffffU) * (ulong)uVar20 + local_108[0xd];
  param_1[0xe] = local_108[0x1e] * 0x26 + local_108[0xe];
  param_1[0xf] = local_108[0xf];
  lVar21 = 1;
  do {
    uVar22 = param_1[lVar21 + -1] + 0x10000;
    lVar1 = ((long)uVar22 >> 0x10) + -1;
    lVar23 = ((long)uVar22 >> 0x10) + lVar1 * 0x24 + -1;
    if (lVar21 != 0x10) {
      lVar23 = 0;
    }
    param_1[lVar21 + -1] = uVar22;
    lVar24 = lVar21;
    if (lVar21 == 0x10) {
      lVar24 = 0;
    }
    param_1[lVar24] = lVar1 + param_1[lVar24] + lVar23;
    param_1[lVar21 + -1] = param_1[lVar21 + -1] - (uVar22 & 0xffffffffffff0000);
    lVar21 = lVar21 + 1;
  } while (lVar21 != 0x11);
  lVar21 = 1;
  do {
    uVar22 = param_1[lVar21 + -1] + 0x10000;
    lVar1 = ((long)uVar22 >> 0x10) + -1;
    lVar23 = ((long)uVar22 >> 0x10) + lVar1 * 0x24 + -1;
    if (lVar21 != 0x10) {
      lVar23 = 0;
    }
    param_1[lVar21 + -1] = uVar22;
    lVar24 = lVar21;
    if (lVar21 == 0x10) {
      lVar24 = 0;
    }
    param_1[lVar24] = lVar1 + param_1[lVar24] + lVar23;
    param_1[lVar21 + -1] = param_1[lVar21 + -1] - (uVar22 & 0xffffffffffff0000);
    lVar21 = lVar21 + 1;
  } while (lVar21 != 0x11);
  return;
}

#undef DAT_1001d8a0
#undef UNK_1001d8a8
#undef _DAT_1001d8a0
#undef uRam000000001001d8a8
#undef local_108

#undef LAB_1001dc50
#define LAB_1001dc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5baU)))
#define local_40 (*(long *)(pf_stack_frame + 1664))
#define local_38 (*(long *)(pf_stack_frame + 1672))
#define local_6a8 (*(long *)(pf_stack_frame + 24))
#define local_6a0 (*(long *)(pf_stack_frame + 32))
#define local_698 (*(long *)(pf_stack_frame + 40))
#define local_690 (*(long *)(pf_stack_frame + 48))
#define local_688 (*(long *)(pf_stack_frame + 56))
#define local_680 (*(long *)(pf_stack_frame + 64))
#define local_678 (*(long *)(pf_stack_frame + 72))
#define local_670 (*(long *)(pf_stack_frame + 80))
#define local_668 (*(long *)(pf_stack_frame + 88))
#define local_660 (*(long *)(pf_stack_frame + 96))
#define local_658 (*(long *)(pf_stack_frame + 104))
#define local_650 (*(long *)(pf_stack_frame + 112))
#define local_648 (*(long *)(pf_stack_frame + 120))
#define local_640 (*(long *)(pf_stack_frame + 128))
#define local_638 (*(long *)(pf_stack_frame + 136))
#define local_630 (*(long *)(pf_stack_frame + 144))
#define local_628 (*(long *)(pf_stack_frame + 152))
#define local_620 (*(long *)(pf_stack_frame + 160))
#define local_618 (*(long *)(pf_stack_frame + 168))
#define local_610 (*(long *)(pf_stack_frame + 176))
#define local_608 (*(long *)(pf_stack_frame + 184))
#define local_600 (*(long *)(pf_stack_frame + 192))
#define local_5f8 (*(long *)(pf_stack_frame + 200))
#define local_5f0 (*(long *)(pf_stack_frame + 208))
#define local_5e8 (*(long *)(pf_stack_frame + 216))
#define local_5e0 (*(long *)(pf_stack_frame + 224))
#define local_5d8 (*(long *)(pf_stack_frame + 232))
#define local_5d0 (*(long *)(pf_stack_frame + 240))
#define local_5c8 (*(long *)(pf_stack_frame + 248))
#define local_5c0 (*(long *)(pf_stack_frame + 256))
#define local_5b8 (*(long *)(pf_stack_frame + 264))
#define local_5b0 (*(long *)(pf_stack_frame + 272))
#define local_5a8 (*(long *)(pf_stack_frame + 280))
#define local_5a0 (*(long *)(pf_stack_frame + 288))
#define local_598 (*(long *)(pf_stack_frame + 296))
#define local_590 (*(long *)(pf_stack_frame + 304))
#define local_588 (*(long *)(pf_stack_frame + 312))
#define local_580 (*(long *)(pf_stack_frame + 320))
#define local_578 (*(long *)(pf_stack_frame + 328))
#define local_570 (*(long *)(pf_stack_frame + 336))
#define local_568 (*(long *)(pf_stack_frame + 344))
#define local_560 (*(long *)(pf_stack_frame + 352))
#define local_558 (*(long *)(pf_stack_frame + 360))
#define local_550 (*(long *)(pf_stack_frame + 368))
#define local_548 (*(long *)(pf_stack_frame + 376))
#define local_540 (*(long *)(pf_stack_frame + 384))
#define local_538 (*(long *)(pf_stack_frame + 392))
#define local_530 (*(long *)(pf_stack_frame + 400))
#define local_528 (*(ulong *)(pf_stack_frame + 408))
#define local_520 (*(long *)(pf_stack_frame + 416))
#define local_518 (*(long *)(pf_stack_frame + 424))
#define local_510 (*(long *)(pf_stack_frame + 432))
#define local_508 (*(long *)(pf_stack_frame + 440))
#define local_500 (*(long *)(pf_stack_frame + 448))
#define local_4f8 (*(long *)(pf_stack_frame + 456))
#define local_4f0 (*(long *)(pf_stack_frame + 464))
#define local_4e8 (*(long *)(pf_stack_frame + 472))
#define local_4e0 (*(long *)(pf_stack_frame + 480))
#define local_4d8 (*(long *)(pf_stack_frame + 488))
#define local_4d0 (*(long *)(pf_stack_frame + 496))
#define local_4c8 (*(long *)(pf_stack_frame + 504))
#define local_4c0 (*(long *)(pf_stack_frame + 512))
#define local_4b8 (*(long *)(pf_stack_frame + 520))
#define local_4b0 (*(long *)(pf_stack_frame + 528))
#define local_4a8 (*(ulong *)(pf_stack_frame + 536))
#define local_4a0 (*(long *)(pf_stack_frame + 544))
#define local_498 (*(long *)(pf_stack_frame + 552))
#define local_490 (*(long *)(pf_stack_frame + 560))
#define local_488 (*(long *)(pf_stack_frame + 568))
#define local_480 (*(long *)(pf_stack_frame + 576))
#define local_478 (*(long *)(pf_stack_frame + 584))
#define local_470 (*(long *)(pf_stack_frame + 592))
#define local_468 (*(long *)(pf_stack_frame + 600))
#define local_460 (*(long *)(pf_stack_frame + 608))
#define local_458 (*(long *)(pf_stack_frame + 616))
#define local_450 (*(long *)(pf_stack_frame + 624))
#define local_448 (*(long *)(pf_stack_frame + 632))
#define local_440 (*(long *)(pf_stack_frame + 640))
#define local_438 (*(long *)(pf_stack_frame + 648))
#define local_430 (*(long *)(pf_stack_frame + 656))
#define local_428 (*(ulong *)(pf_stack_frame + 664))
#define local_420 (*(long *)(pf_stack_frame + 672))
#define local_418 (*(long *)(pf_stack_frame + 680))
#define local_410 (*(long *)(pf_stack_frame + 688))
#define local_408 (*(long *)(pf_stack_frame + 696))
#define local_400 (*(long *)(pf_stack_frame + 704))
#define local_3f8 (*(long *)(pf_stack_frame + 712))
#define local_3f0 (*(long *)(pf_stack_frame + 720))
#define local_3e8 (*(long *)(pf_stack_frame + 728))
#define local_3e0 (*(long *)(pf_stack_frame + 736))
#define local_3d8 (*(long *)(pf_stack_frame + 744))
#define local_3d0 (*(long *)(pf_stack_frame + 752))
#define local_3c8 (*(long *)(pf_stack_frame + 760))
#define local_3c0 (*(long *)(pf_stack_frame + 768))
#define local_3b8 (*(long *)(pf_stack_frame + 776))
#define local_3b0 (*(long *)(pf_stack_frame + 784))
#define local_3a0 (*(long * *)(pf_stack_frame + 800))
#define local_398 (*(long *)(pf_stack_frame + 808))
#define local_390 (*(long *)(pf_stack_frame + 816))
#define local_388 (*(long *)(pf_stack_frame + 824))
#define local_380 (*(long *)(pf_stack_frame + 832))
#define local_378 (*(long *)(pf_stack_frame + 840))
#define local_370 (*(long *)(pf_stack_frame + 848))
#define local_368 (*(long *)(pf_stack_frame + 856))
#define local_360 (*(long *)(pf_stack_frame + 864))
#define local_358 (*(long *)(pf_stack_frame + 872))
#define local_350 (*(long *)(pf_stack_frame + 880))
#define local_348 (*(long *)(pf_stack_frame + 888))
#define local_340 (*(long *)(pf_stack_frame + 896))
#define local_338 (*(long *)(pf_stack_frame + 904))
#define local_330 (*(long *)(pf_stack_frame + 912))
#define local_328 (*(long *)(pf_stack_frame + 920))
#define local_320 (*(long *)(pf_stack_frame + 928))
#define local_318 (*(long *)(pf_stack_frame + 936))
#define local_310 (*(long *)(pf_stack_frame + 944))
#define local_308 (*(long *)(pf_stack_frame + 952))
#define local_300 (*(long *)(pf_stack_frame + 960))
#define local_2f8 (*(long *)(pf_stack_frame + 968))
#define local_2f0 (*(long *)(pf_stack_frame + 976))
#define local_2e8 (*(long *)(pf_stack_frame + 984))
#define local_2e0 (*(long *)(pf_stack_frame + 992))
#define local_2d8 (*(long *)(pf_stack_frame + 1000))
#define local_2d0 (*(long *)(pf_stack_frame + 1008))
#define local_2c8 (*(long *)(pf_stack_frame + 1016))
#define local_2c0 (*(long *)(pf_stack_frame + 1024))
#define local_2b8 (*(long *)(pf_stack_frame + 1032))
#define local_2b0 (*(long *)(pf_stack_frame + 1040))
#define local_2a8 (*(long *)(pf_stack_frame + 1048))
#define local_2a0 (*(long *)(pf_stack_frame + 1056))
#define local_298 (*(long *)(pf_stack_frame + 1064))
#define local_290 (*(long *)(pf_stack_frame + 1072))
#define local_288 (*(long *)(pf_stack_frame + 1080))
#define local_280 (*(long *)(pf_stack_frame + 1088))
#define local_278 (*(long *)(pf_stack_frame + 1096))
#define local_270 (*(long *)(pf_stack_frame + 1104))
#define local_268 (*(ulong *)(pf_stack_frame + 1112))
#define local_260 (*(long *)(pf_stack_frame + 1120))
#define local_258 (*(long *)(pf_stack_frame + 1128))
#define local_250 (*(long *)(pf_stack_frame + 1136))
#define local_248 (*(long *)(pf_stack_frame + 1144))
#define local_240 (*(long *)(pf_stack_frame + 1152))
#define local_238 (*(long *)(pf_stack_frame + 1160))
#define local_230 (*(long *)(pf_stack_frame + 1168))
#define local_228 (*(long *)(pf_stack_frame + 1176))
#define local_220 (*(long *)(pf_stack_frame + 1184))
#define local_218 (*(long *)(pf_stack_frame + 1192))
#define local_210 (*(long *)(pf_stack_frame + 1200))
#define local_208 (*(long *)(pf_stack_frame + 1208))
#define local_200 (*(long *)(pf_stack_frame + 1216))
#define local_1f8 (*(long *)(pf_stack_frame + 1224))
#define local_1f0 (*(long *)(pf_stack_frame + 1232))
#define local_1e8 (*(long * *)(pf_stack_frame + 1240))
#define local_1e0 (*(long * *)(pf_stack_frame + 1248))
#define local_1d8 (*(long *)(pf_stack_frame + 1256))
#define local_1d0 (*(long *)(pf_stack_frame + 1264))
#define local_1c8 (*(long *)(pf_stack_frame + 1272))
#define local_1c0 (*(long *)(pf_stack_frame + 1280))
#define local_1b8 (*(long *)(pf_stack_frame + 1288))
#define local_1b0 (*(long *)(pf_stack_frame + 1296))
#define local_1a8 (*(long *)(pf_stack_frame + 1304))
#define local_1a0 (*(long *)(pf_stack_frame + 1312))
#define local_198 (*(long *)(pf_stack_frame + 1320))
#define local_190 (*(long *)(pf_stack_frame + 1328))
#define local_188 (*(long *)(pf_stack_frame + 1336))
#define local_180 (*(long *)(pf_stack_frame + 1344))
#define local_178 (*(long *)(pf_stack_frame + 1352))
#define local_170 (*(long *)(pf_stack_frame + 1360))
#define local_168 (*(long *)(pf_stack_frame + 1368))
#define local_160 (*(long *)(pf_stack_frame + 1376))
#define local_158 (*(long *)(pf_stack_frame + 1384))
#define local_150 (*(long *)(pf_stack_frame + 1392))
#define local_148 (*(long *)(pf_stack_frame + 1400))
#define local_140 (*(long *)(pf_stack_frame + 1408))
#define local_138 (*(long *)(pf_stack_frame + 1416))
#define local_130 (*(long *)(pf_stack_frame + 1424))
#define local_128 (*(long *)(pf_stack_frame + 1432))
#define local_120 (*(long *)(pf_stack_frame + 1440))
#define local_118 (*(long *)(pf_stack_frame + 1448))
#define local_110 (*(long *)(pf_stack_frame + 1456))
#define local_108 (*(long *)(pf_stack_frame + 1464))
#define local_100 (*(long *)(pf_stack_frame + 1472))
#define local_f8 (*(long *)(pf_stack_frame + 1480))
#define local_f0 (*(long *)(pf_stack_frame + 1488))
#define local_e8 (*(long *)(pf_stack_frame + 1496))
#define local_e0 (*(long *)(pf_stack_frame + 1504))
#define local_d8 (*(long *)(pf_stack_frame + 1512))
#define local_d0 (*(long *)(pf_stack_frame + 1520))
#define local_c8 (*(long *)(pf_stack_frame + 1528))
#define local_c0 (*(long *)(pf_stack_frame + 1536))
#define local_b8 (*(long *)(pf_stack_frame + 1544))
#define local_b0 (*(long *)(pf_stack_frame + 1552))
#define local_a8 (*(long *)(pf_stack_frame + 1560))
#define local_a0 (*(long *)(pf_stack_frame + 1568))
#define local_98 (*(long *)(pf_stack_frame + 1576))
#define local_90 (*(long *)(pf_stack_frame + 1584))
#define local_88 (*(long *)(pf_stack_frame + 1592))
#define local_80 (*(long *)(pf_stack_frame + 1600))
#define local_78 (*(long *)(pf_stack_frame + 1608))
#define local_70 (*(long *)(pf_stack_frame + 1616))
#define local_68 (*(long *)(pf_stack_frame + 1624))
#define local_60 (*(long *)(pf_stack_frame + 1632))
#define local_58 (*(long *)(pf_stack_frame + 1640))
#define local_50 (*(long *)(pf_stack_frame + 1648))
#define local_48 (*(long *)(pf_stack_frame + 1656))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ddc0
 */

void recovered_1000ddc0(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[1760] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  local_1e0 = (long *)*param_1;
  local_1e8 = (long *)param_1[0x10];
  local_368 = (long)local_1e8 - (long)local_1e0;
  local_1d0 = param_1[1];
  local_1d8 = param_1[0x11];
  local_360 = local_1d8 - local_1d0;
  local_1c0 = param_1[2];
  local_1c8 = param_1[0x12];
  local_358 = local_1c8 - local_1c0;
  local_1b0 = param_1[3];
  local_1b8 = param_1[0x13];
  local_350 = local_1b8 - local_1b0;
  local_1a0 = param_1[4];
  local_1a8 = param_1[0x14];
  local_348 = local_1a8 - local_1a0;
  local_190 = param_1[5];
  local_198 = param_1[0x15];
  local_340 = local_198 - local_190;
  local_180 = param_1[6];
  local_188 = param_1[0x16];
  local_338 = local_188 - local_180;
  local_170 = param_1[7];
  local_178 = param_1[0x17];
  local_330 = local_178 - local_170;
  local_160 = param_1[8];
  local_168 = param_1[0x18];
  local_328 = local_168 - local_160;
  local_150 = param_1[9];
  local_158 = param_1[0x19];
  local_320 = local_158 - local_150;
  local_140 = param_1[10];
  local_148 = param_1[0x1a];
  local_318 = local_148 - local_140;
  local_130 = param_1[0xb];
  local_138 = param_1[0x1b];
  local_310 = local_138 - local_130;
  local_120 = param_1[0xc];
  local_128 = param_1[0x1c];
  local_308 = local_128 - local_120;
  local_110 = param_1[0xd];
  local_118 = param_1[0x1d];
  local_300 = local_118 - local_110;
  local_100 = param_1[0xe];
  local_108 = param_1[0x1e];
  local_2f8 = local_108 - local_100;
  local_f0 = param_1[0xf];
  local_f8 = param_1[0x1f];
  local_2f0 = local_f8 - local_f0;
  local_e0 = *param_2;
  local_e8 = param_2[0x10];
  local_268 = local_e8 - local_e0;
  local_d0 = param_2[1];
  local_d8 = param_2[0x11];
  local_260 = local_d8 - local_d0;
  local_c0 = param_2[2];
  local_c8 = param_2[0x12];
  local_258 = local_c8 - local_c0;
  local_b0 = param_2[3];
  local_b8 = param_2[0x13];
  local_250 = local_b8 - local_b0;
  local_a0 = param_2[4];
  local_a8 = param_2[0x14];
  local_248 = local_a8 - local_a0;
  local_90 = param_2[5];
  local_98 = param_2[0x15];
  local_240 = local_98 - local_90;
  local_80 = param_2[6];
  local_88 = param_2[0x16];
  local_238 = local_88 - local_80;
  local_70 = param_2[7];
  local_78 = param_2[0x17];
  local_230 = local_78 - local_70;
  local_60 = param_2[8];
  local_68 = param_2[0x18];
  local_228 = local_68 - local_60;
  local_50 = param_2[9];
  local_58 = param_2[0x19];
  local_220 = local_58 - local_50;
  local_40 = param_2[10];
  local_48 = param_2[0x1a];
  local_218 = local_48 - local_40;
  local_398 = param_2[0xb];
  local_38 = param_2[0x1b];
  local_210 = local_38 - local_398;
  local_388 = param_2[0xc];
  local_390 = param_2[0x1c];
  local_208 = local_390 - local_388;
  lVar1 = param_2[0xd];
  local_380 = param_2[0x1d];
  local_200 = local_380 - lVar1;
  lVar2 = param_2[0xe];
  local_378 = param_2[0x1e];
  local_1f8 = local_378 - lVar2;
  lVar3 = param_2[0xf];
  local_370 = param_2[0x1f];
  local_1f0 = local_370 - lVar3;
  local_3a0 = param_1 + 0x10;
  recovered_1000d840(&local_368,(long)&local_368,&local_268);
  local_2e8 = (long)local_1e8 + (long)local_1e0;
  local_2e0 = local_1d0 + local_1d8;
  local_2d8 = local_1c0 + local_1c8;
  local_2d0 = local_1b0 + local_1b8;
  local_2c8 = local_1a0 + local_1a8;
  local_2c0 = local_190 + local_198;
  local_2b8 = local_180 + local_188;
  local_2b0 = local_170 + local_178;
  local_2a8 = local_160 + local_168;
  local_2a0 = local_150 + local_158;
  local_298 = local_140 + local_148;
  local_290 = local_130 + local_138;
  local_288 = local_120 + local_128;
  local_280 = local_110 + local_118;
  local_278 = local_100 + local_108;
  local_270 = local_f0 + local_f8;
  local_268 = local_e0 + local_e8;
  local_260 = local_d0 + local_d8;
  local_258 = local_c0 + local_c8;
  local_250 = local_b0 + local_b8;
  local_248 = local_a0 + local_a8;
  local_240 = local_90 + local_98;
  local_238 = local_80 + local_88;
  local_230 = local_70 + local_78;
  local_228 = local_60 + local_68;
  local_220 = local_50 + local_58;
  local_218 = local_40 + local_48;
  local_210 = local_398 + local_38;
  local_208 = local_388 + local_390;
  local_200 = lVar1 + local_380;
  local_1f8 = lVar2 + local_378;
  local_1f0 = lVar3 + local_370;
  recovered_1000d840(&local_2e8,(long)&local_2e8,&local_268);
  local_1e8 = param_1 + 0x30;
  recovered_1000d840(&local_6a8,(long)local_1e8,(ulong *)(param_2 + 0x30));
  recovered_1000d840(&local_6a8,(long)&local_6a8,(ulong *)&LAB_1001dc50);
  local_1e0 = param_1 + 0x20;
  recovered_1000d840(&local_628,(long)local_1e0,(ulong *)(param_2 + 0x20));
  local_1d8 = local_2e8;
  local_1d0 = local_368;
  local_5a8 = local_2e8 - local_368;
  local_1c0 = local_2e0;
  local_1c8 = local_2d8;
  local_1b0 = local_360;
  local_1b8 = local_358;
  local_5a0 = local_2e0 - local_360;
  local_598 = local_2d8 - local_358;
  local_1a8 = local_2d0;
  local_1a0 = local_350;
  local_590 = local_2d0 - local_350;
  local_198 = local_2c8;
  local_190 = local_348;
  local_588 = local_2c8 - local_348;
  local_188 = local_2c0;
  local_180 = local_340;
  local_580 = local_2c0 - local_340;
  local_178 = local_2b8;
  local_170 = local_338;
  local_578 = local_2b8 - local_338;
  local_168 = local_2b0;
  local_160 = local_330;
  local_570 = local_2b0 - local_330;
  local_158 = local_2a8;
  local_150 = local_328;
  local_568 = local_2a8 - local_328;
  local_148 = local_2a0;
  local_140 = local_320;
  local_560 = local_2a0 - local_320;
  local_138 = local_298;
  local_130 = local_318;
  local_558 = local_298 - local_318;
  local_128 = local_290;
  local_120 = local_310;
  local_550 = local_290 - local_310;
  local_118 = local_288;
  local_110 = local_308;
  local_548 = local_288 - local_308;
  local_108 = local_280;
  local_100 = local_300;
  local_540 = local_280 - local_300;
  local_f8 = local_278;
  local_f0 = local_2f8;
  local_538 = local_278 - local_2f8;
  local_e8 = local_270;
  local_e0 = local_2f0;
  local_530 = local_270 - local_2f0;
  local_d8 = local_628;
  local_d0 = local_6a8;
  local_528 = local_628 * 2 - local_6a8;
  local_c8 = local_620;
  local_c0 = local_6a0;
  local_520 = local_620 * 2 - local_6a0;
  local_b8 = local_618;
  local_b0 = local_698;
  local_518 = local_618 * 2 - local_698;
  local_a8 = local_610;
  local_a0 = local_690;
  local_510 = local_610 * 2 - local_690;
  local_98 = local_608;
  local_90 = local_688;
  local_508 = local_608 * 2 - local_688;
  local_88 = local_600;
  local_80 = local_680;
  local_500 = local_600 * 2 - local_680;
  local_78 = local_5f8;
  local_70 = local_678;
  local_4f8 = local_5f8 * 2 - local_678;
  local_68 = local_5f0;
  local_60 = local_670;
  local_4f0 = local_5f0 * 2 - local_670;
  local_58 = local_5e8;
  local_50 = local_668;
  local_4e8 = local_5e8 * 2 - local_668;
  local_48 = local_5e0;
  local_40 = local_660;
  local_4e0 = local_5e0 * 2 - local_660;
  local_38 = local_5d8;
  local_4d8 = local_5d8 * 2 - local_658;
  local_4d0 = local_5d0 * 2 - local_650;
  local_4c8 = local_5c8 * 2 - local_648;
  local_4c0 = local_5c0 * 2 - local_640;
  local_4b8 = local_5b8 * 2 - local_638;
  local_4b0 = local_5b0 * 2 - local_630;
  local_4a8 = local_628 * 2 + local_6a8;
  local_4a0 = local_6a0 + local_620 * 2;
  local_498 = local_698 + local_618 * 2;
  local_490 = local_690 + local_610 * 2;
  local_488 = local_688 + local_608 * 2;
  local_480 = local_680 + local_600 * 2;
  local_478 = local_678 + local_5f8 * 2;
  local_470 = local_670 + local_5f0 * 2;
  local_468 = local_668 + local_5e8 * 2;
  local_460 = local_660 + local_5e0 * 2;
  local_458 = local_658 + local_5d8 * 2;
  local_450 = local_650 + local_5d0 * 2;
  local_448 = local_648 + local_5c8 * 2;
  local_440 = local_640 + local_5c0 * 2;
  local_438 = local_638 + local_5b8 * 2;
  local_430 = local_630 + local_5b0 * 2;
  local_428 = local_2e8 + local_368;
  local_420 = local_360 + local_2e0;
  local_418 = local_358 + local_2d8;
  local_410 = local_350 + local_2d0;
  local_408 = local_348 + local_2c8;
  local_400 = local_340 + local_2c0;
  local_3f8 = local_338 + local_2b8;
  local_3f0 = local_330 + local_2b0;
  local_3e8 = local_328 + local_2a8;
  local_3e0 = local_320 + local_2a0;
  local_3d8 = local_318 + local_298;
  local_3d0 = local_310 + local_290;
  local_3c8 = local_308 + local_288;
  local_3c0 = local_300 + local_280;
  local_3b8 = local_2f8 + local_278;
  local_3b0 = local_2f0 + local_270;
  recovered_1000d840(param_1,(long)&local_5a8,&local_528);
  recovered_1000d840(local_3a0,(long)&local_428,&local_4a8);
  recovered_1000d840(local_1e0,(long)&local_4a8,&local_528);
  recovered_1000d840(local_1e8,(long)&local_5a8,&local_428);
  return;
}

#undef LAB_1001dc50
#undef local_40
#undef local_38
#undef local_6a8
#undef local_6a0
#undef local_698
#undef local_690
#undef local_688
#undef local_680
#undef local_678
#undef local_670
#undef local_668
#undef local_660
#undef local_658
#undef local_650
#undef local_648
#undef local_640
#undef local_638
#undef local_630
#undef local_628
#undef local_620
#undef local_618
#undef local_610
#undef local_608
#undef local_600
#undef local_5f8
#undef local_5f0
#undef local_5e8
#undef local_5e0
#undef local_5d8
#undef local_5d0
#undef local_5c8
#undef local_5c0
#undef local_5b8
#undef local_5b0
#undef local_5a8
#undef local_5a0
#undef local_598
#undef local_590
#undef local_588
#undef local_580
#undef local_578
#undef local_570
#undef local_568
#undef local_560
#undef local_558
#undef local_550
#undef local_548
#undef local_540
#undef local_538
#undef local_530
#undef local_528
#undef local_520
#undef local_518
#undef local_510
#undef local_508
#undef local_500
#undef local_4f8
#undef local_4f0
#undef local_4e8
#undef local_4e0
#undef local_4d8
#undef local_4d0
#undef local_4c8
#undef local_4c0
#undef local_4b8
#undef local_4b0
#undef local_4a8
#undef local_4a0
#undef local_498
#undef local_490
#undef local_488
#undef local_480
#undef local_478
#undef local_470
#undef local_468
#undef local_460
#undef local_458
#undef local_450
#undef local_448
#undef local_440
#undef local_438
#undef local_430
#undef local_428
#undef local_420
#undef local_418
#undef local_410
#undef local_408
#undef local_400
#undef local_3f8
#undef local_3f0
#undef local_3e8
#undef local_3e0
#undef local_3d8
#undef local_3d0
#undef local_3c8
#undef local_3c0
#undef local_3b8
#undef local_3b0
#undef local_3a0
#undef local_398
#undef local_390
#undef local_388
#undef local_380
#undef local_378
#undef local_370
#undef local_368
#undef local_360
#undef local_358
#undef local_350
#undef local_348
#undef local_340
#undef local_338
#undef local_330
#undef local_328
#undef local_320
#undef local_318
#undef local_310
#undef local_308
#undef local_300
#undef local_2f8
#undef local_2f0
#undef local_2e8
#undef local_2e0
#undef local_2d8
#undef local_2d0
#undef local_2c8
#undef local_2c0
#undef local_2b8
#undef local_2b0
#undef local_2a8
#undef local_2a0
#undef local_298
#undef local_290
#undef local_288
#undef local_280
#undef local_278
#undef local_270
#undef local_268
#undef local_260
#undef local_258
#undef local_250
#undef local_248
#undef local_240
#undef local_238
#undef local_230
#undef local_228
#undef local_220
#undef local_218
#undef local_210
#undef local_208
#undef local_200
#undef local_1f8
#undef local_1f0
#undef local_1e8
#undef local_1e0
#undef local_1d8
#undef local_1d0
#undef local_1c8
#undef local_1c0
#undef local_1b8
#undef local_1b0
#undef local_1a8
#undef local_1a0
#undef local_198
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_170
#undef local_168
#undef local_160
#undef local_158
#undef local_150
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
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48

#define local_88 (*(undefined8 *)(pf_stack_frame + 56))
#define local_78 (*(undefined8 *)(pf_stack_frame + 72))
#define local_68 (*(undefined8 *)(pf_stack_frame + 88))
#define local_58 (*(undefined8 *)(pf_stack_frame + 104))
#define local_48 (*(undefined8 *)(pf_stack_frame + 120))
#define local_38 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 80))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 96))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 112))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 128))
#define uStack_30 (*(undefined8 *)(pf_stack_frame + 144))
#define local_a8 (*(long *)(pf_stack_frame + 24))
#define local_98 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec80
 */

void recovered_1000ec80(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = param_2[2];
  uStack_90 = param_2[3];
  local_88 = param_2[4];
  uStack_80 = param_2[5];
  local_78 = param_2[6];
  uStack_70 = param_2[7];
  local_68 = param_2[8];
  uStack_60 = param_2[9];
  local_58 = param_2[10];
  uStack_50 = param_2[0xb];
  local_48 = param_2[0xc];
  uStack_40 = param_2[0xd];
  local_38 = param_2[0xe];
  uStack_30 = param_2[0xf];
  iVar1 = 0xfd;
  do {
    recovered_1000d840(&local_a8,(long)&local_a8,(ulong *)&local_a8);
    if ((iVar1 != 2) && (iVar1 != 4)) {
      recovered_1000d840(&local_a8,(long)&local_a8,param_2);
    }
    bVar2 = iVar1 != 0;
    iVar1 = iVar1 + -1;
  } while (bVar2);
  *param_1 = local_a8;
  param_1[1] = uStack_a0;
  param_1[2] = local_98;
  param_1[3] = uStack_90;
  param_1[4] = local_88;
  param_1[5] = uStack_80;
  param_1[6] = local_78;
  param_1[7] = uStack_70;
  param_1[8] = local_68;
  param_1[9] = uStack_60;
  param_1[10] = local_58;
  param_1[0xb] = uStack_50;
  param_1[0xc] = local_48;
  param_1[0xd] = uStack_40;
  param_1[0xe] = local_38;
  param_1[0xf] = uStack_30;
  return;
}

#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_48
#undef local_38
#undef uStack_a0
#undef uStack_90
#undef uStack_80
#undef uStack_70
#undef uStack_60
#undef uStack_50
#undef uStack_40
#undef uStack_30
#undef local_a8
#undef local_98

#define local_108 (*(undefined1 (*)[264])(pf_stack_frame + 40))
#define local_f8 (*(undefined1 (*)[248])(pf_stack_frame + 56))
#define local_e8 (*(undefined1 (*)[232])(pf_stack_frame + 72))
#define local_d8 (*(undefined1 (*)[216])(pf_stack_frame + 88))
#define local_c8 (*(undefined1 (*)[200])(pf_stack_frame + 104))
#define local_b8 (*(undefined1 (*)[184])(pf_stack_frame + 120))
#define local_a8 (*(undefined1 (*)[168])(pf_stack_frame + 136))
#define local_98 (*(undefined1 (*)[152])(pf_stack_frame + 152))
#define local_88 (*(undefined1 (*)[136])(pf_stack_frame + 168))
#define local_78 (*(undefined1 (*)[120])(pf_stack_frame + 184))
#define local_68 (*(undefined1 (*)[104])(pf_stack_frame + 200))
#define local_58 (*(undefined1 (*)[88])(pf_stack_frame + 216))
#define local_48 (*(undefined1 (*)[72])(pf_stack_frame + 232))
#define auStack_118 (*(ulong (*)[35])(pf_stack_frame + 24))
#define local_38 (*(undefined1 (*)[56])(pf_stack_frame + 248))
#define local_28 (*(undefined1 (*)[40])(pf_stack_frame + 264))
#define local_18 (*(undefined1 (*)[24])(pf_stack_frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed80
 */

void recovered_1000ed80(undefined2 *param_1,uint128 *param_2)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint128 auVar7;
  uint128 auVar8;
  uint128 auVar9;

  PF_PART16(local_88,0) = *param_2;
  PF_PART16(local_78,0) = param_2[1];
  PF_PART16(local_68,0) = param_2[2];
  PF_PART16(local_58,0) = param_2[3];
  PF_PART16(local_48,0) = param_2[4];
  PF_PART16(local_38,0) = param_2[5];
  PF_PART16(local_28,0) = param_2[6];
  PF_PART16(local_18,0) = param_2[7];
  lVar2 = 1;
  do {
    uVar4 = *(long *)(local_98 + lVar2 * 8 + 8) + 0x10000;
    lVar1 = ((long)uVar4 >> 0x10) + -1;
    lVar5 = ((long)uVar4 >> 0x10) + lVar1 * 0x24 + -1;
    if (lVar2 != 0x10) {
      lVar5 = 0;
    }
    *(ulong *)(local_98 + lVar2 * 8 + 8) = uVar4;
    lVar6 = lVar2;
    if (lVar2 == 0x10) {
      lVar6 = 0;
    }
    *(long *)(local_88 + lVar6 * 8) = lVar1 + *(long *)(local_88 + lVar6 * 8) + lVar5;
    *(ulong *)(local_98 + lVar2 * 8 + 8) =
         *(long *)(local_98 + lVar2 * 8 + 8) - (uVar4 & 0xffffffffffff0000);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x11);
  lVar2 = 1;
  do {
    uVar4 = *(long *)(local_98 + lVar2 * 8 + 8) + 0x10000;
    lVar1 = ((long)uVar4 >> 0x10) + -1;
    lVar5 = ((long)uVar4 >> 0x10) + lVar1 * 0x24 + -1;
    if (lVar2 != 0x10) {
      lVar5 = 0;
    }
    *(ulong *)(local_98 + lVar2 * 8 + 8) = uVar4;
    lVar6 = lVar2;
    if (lVar2 == 0x10) {
      lVar6 = 0;
    }
    *(long *)(local_88 + lVar6 * 8) = lVar1 + *(long *)(local_88 + lVar6 * 8) + lVar5;
    *(ulong *)(local_98 + lVar2 * 8 + 8) =
         *(long *)(local_98 + lVar2 * 8 + 8) - (uVar4 & 0xffffffffffff0000);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x11);
  lVar2 = 1;
  do {
    uVar4 = *(long *)(local_98 + lVar2 * 8 + 8) + 0x10000;
    lVar1 = ((long)uVar4 >> 0x10) + -1;
    lVar5 = ((long)uVar4 >> 0x10) + lVar1 * 0x24 + -1;
    if (lVar2 != 0x10) {
      lVar5 = 0;
    }
    *(ulong *)(local_98 + lVar2 * 8 + 8) = uVar4;
    lVar6 = lVar2;
    if (lVar2 == 0x10) {
      lVar6 = 0;
    }
    *(long *)(local_88 + lVar6 * 8) = lVar1 + *(long *)(local_88 + lVar6 * 8) + lVar5;
    *(ulong *)(local_98 + lVar2 * 8 + 8) =
         *(long *)(local_98 + lVar2 * 8 + 8) - (uVar4 & 0xffffffffffff0000);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x11);
  uVar4 = PF_PART8(local_88, 0) - 0xffed;
  PF_PART8(local_108, 0) = uVar4;
  lVar2 = 2;
  do {
    lVar1 = *(long *)(local_88 + lVar2 * 8);
    uVar3 = (((long)(uVar4 << 0x2f) >> 0x3f) + *(long *)(local_98 + lVar2 * 8 + 8)) - 0xffff;
    auStack_118[lVar2] = uVar4 & 0xffff;
    uVar4 = (((long)(uVar3 << 0x2f) >> 0x3f) + lVar1) - 0xffff;
    *(ulong *)(local_108 + lVar2 * 8) = uVar4;
    auStack_118[lVar2 + 1] = uVar3 & 0xffff;
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0x10);
  PF_PART8(local_98, 8) = (PF_PART8(local_18, 8) + ((long)(PF_PART8(local_98, 0) << 0x2f) >> 0x3f)) - 0x7fff;
  PF_PART8(local_98, 0) = PF_PART8(local_98, 0) & 0xffff;
  lVar2 = ((ulong)PF_PART8(local_98, 8) >> 0x10 & 0xffff | 0xfffffffffffffffe) + 1;
  PF_PART4(auVar7, 8) = (int)lVar2;
  PF_PART8(auVar7, 0) = lVar2;
  PF_PART4(auVar7, 12) = (int)((ulong)lVar2 >> 0x20);
  auVar8 = (PF_PART16(local_108,0) ^ PF_PART16(local_88,0)) & auVar7;
  auVar9 = (PF_PART16(local_f8,0) ^ PF_PART16(local_78,0)) & auVar7;
  PF_PART16(local_88,0) = PF_PART16(local_88,0) ^ auVar8;
  PF_PART16(local_78,0) = PF_PART16(local_78,0) ^ auVar9;
  PF_PART8(local_108, 8) = PF_PART8(auVar8, 8) ^ PF_PART8(local_108, 8);
  PF_PART16(local_f8,0) = auVar9 ^ PF_PART16(local_f8,0);
  auVar8 = (PF_PART16(local_e8,0) ^ PF_PART16(local_68,0)) & auVar7;
  auVar9 = (PF_PART16(local_d8,0) ^ PF_PART16(local_58,0)) & auVar7;
  PF_PART16(local_68,0) = PF_PART16(local_68,0) ^ auVar8;
  PF_PART16(local_58,0) = PF_PART16(local_58,0) ^ auVar9;
  PF_PART16(local_e8,0) = auVar8 ^ PF_PART16(local_e8,0);
  PF_PART16(local_d8,0) = auVar9 ^ PF_PART16(local_d8,0);
  auVar8 = (PF_PART16(local_c8,0) ^ PF_PART16(local_48,0)) & auVar7;
  auVar9 = (PF_PART16(local_b8,0) ^ PF_PART16(local_38,0)) & auVar7;
  PF_PART16(local_48,0) = PF_PART16(local_48,0) ^ auVar8;
  PF_PART16(local_38,0) = PF_PART16(local_38,0) ^ auVar9;
  PF_PART16(local_c8,0) = auVar8 ^ PF_PART16(local_c8,0);
  PF_PART16(local_b8,0) = auVar9 ^ PF_PART16(local_b8,0);
  auVar8 = (PF_PART16(local_a8,0) ^ PF_PART16(local_28,0)) & auVar7;
  auVar7 = (PF_PART16(local_98,0) ^ PF_PART16(local_18,0)) & auVar7;
  PF_PART16(local_28,0) = PF_PART16(local_28,0) ^ auVar8;
  PF_PART16(local_18,0) = PF_PART16(local_18,0) ^ auVar7;
  PF_PART16(local_a8,0) = auVar8 ^ PF_PART16(local_a8,0);
  PF_PART16(local_98,0) = auVar7 ^ PF_PART16(local_98,0);
  uVar4 = PF_PART8(local_88, 0) - 0xffed;
  PF_PART8(local_108, 0) = uVar4;
  lVar2 = 2;
  do {
    lVar1 = *(long *)(local_88 + lVar2 * 8);
    uVar3 = (((long)(uVar4 << 0x2f) >> 0x3f) + *(long *)(local_98 + lVar2 * 8 + 8)) - 0xffff;
    auStack_118[lVar2] = uVar4 & 0xffff;
    uVar4 = (((long)(uVar3 << 0x2f) >> 0x3f) + lVar1) - 0xffff;
    *(ulong *)(local_108 + lVar2 * 8) = uVar4;
    auStack_118[lVar2 + 1] = uVar3 & 0xffff;
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0x10);
  PF_PART8(local_98, 8) = (PF_PART8(local_18, 8) + ((long)(PF_PART8(local_98, 0) << 0x2f) >> 0x3f)) - 0x7fff;
  PF_PART8(local_98, 0) = PF_PART8(local_98, 0) & 0xffff;
  lVar2 = ((ulong)PF_PART8(local_98, 8) >> 0x10 & 0xffff | 0xfffffffffffffffe) + 1;
  PF_PART4(auVar8, 8) = (int)lVar2;
  PF_PART8(auVar8, 0) = lVar2;
  PF_PART4(auVar8, 12) = (int)((ulong)lVar2 >> 0x20);
  PF_PART16(local_88,0) = PF_PART16(local_88,0) ^ (PF_PART16(local_108,0) ^ PF_PART16(local_88,0)) & auVar8;
  PF_PART16(local_78,0) = PF_PART16(local_78,0) ^ (PF_PART16(local_f8,0) ^ PF_PART16(local_78,0)) & auVar8;
  PF_PART16(local_68,0) = PF_PART16(local_68,0) ^ (PF_PART16(local_e8,0) ^ PF_PART16(local_68,0)) & auVar8;
  PF_PART16(local_58,0) = PF_PART16(local_58,0) ^ (PF_PART16(local_d8,0) ^ PF_PART16(local_58,0)) & auVar8;
  PF_PART16(local_48,0) = PF_PART16(local_48,0) ^ (PF_PART16(local_c8,0) ^ PF_PART16(local_48,0)) & auVar8;
  PF_PART16(local_38,0) = PF_PART16(local_38,0) ^ (PF_PART16(local_b8,0) ^ PF_PART16(local_38,0)) & auVar8;
  PF_PART16(local_28,0) = PF_PART16(local_28,0) ^ (PF_PART16(local_a8,0) ^ PF_PART16(local_28,0)) & auVar8;
  PF_PART16(local_18,0) = PF_PART16(local_18,0) ^ (PF_PART16(local_98,0) ^ PF_PART16(local_18,0)) & auVar8;
  *param_1 = PF_PART2(local_88, 0);
  param_1[1] = PF_PART2(local_88, 8);
  param_1[2] = PF_PART2(local_78, 0);
  param_1[3] = PF_PART2(local_78, 8);
  param_1[4] = PF_PART2(local_68, 0);
  param_1[5] = PF_PART2(local_68, 8);
  param_1[6] = PF_PART2(local_58, 0);
  param_1[7] = PF_PART2(local_58, 8);
  param_1[8] = PF_PART2(local_48, 0);
  param_1[9] = PF_PART2(local_48, 8);
  param_1[10] = PF_PART2(local_38, 0);
  param_1[0xb] = PF_PART2(local_38, 8);
  param_1[0xc] = PF_PART2(local_28, 0);
  param_1[0xd] = PF_PART2(local_28, 8);
  param_1[0xe] = PF_PART2(local_18, 0);
  param_1[0xf] = PF_PART2(local_18, 8);
  return;
}

#undef local_108
#undef local_f8
#undef local_e8
#undef local_d8
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_48
#undef auStack_118
#undef local_38
#undef local_28
#undef local_18

#define local_14 (*(undefined1 (*)[20])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f410
 */

void recovered_1000f410(long *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *in_R8;

  if ((char)param_1[2] == '\0') {
    uVar1 = (int)param_1[1] - *(uint *)((long)param_1 + 0xc);
    if (3 < uVar1) {
      recovered_10001c80((undefined8 *)((ulong)*(uint *)((long)param_1 + 0xc) + *param_1),
                         (undefined8 *)local_14,4,(ulong)uVar1,in_R8);
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 4;
      return;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

#undef local_14

#undef DAT_1001dcd0
#define DAT_1001dcd0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x63aU)))
#define auStack_194 (*(uint (*)[101])(pf_stack_frame + 28))
#define aiStack_174 (*(int (*)[93])(pf_stack_frame + 60))
#define auStack_160 (*(uint (*)[88])(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f460
 */

void recovered_1000f460(uint *param_1,long param_2)

{
  unsigned char pf_stack_frame[464] __attribute__((aligned(16))) = {0};

  long lVar1; uint pf_schedule_word;
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
  int iVar12;

  lVar1 = 0;
  do {
    uVar7 = *(uint *)(param_2 + lVar1 * 4);
    auStack_160[lVar1 + 2] =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  pf_schedule_word = auStack_160[2]; lVar1 = 0x10;
  do {
    uVar7 = auStack_194[lVar1];
    uVar6 = auStack_160[lVar1];
    auStack_160[lVar1 + 2] =
         (uVar7 >> 3 ^ (uVar7 << 0xe | uVar7 >> 0x12) ^ (uVar7 << 0x19 | uVar7 >> 7)) +
         pf_schedule_word + aiStack_174[lVar1] +
         (uVar6 >> 10 ^ (uVar6 << 0xd | uVar6 >> 0x13) ^ (uVar6 << 0xf | uVar6 >> 0x11));
    lVar1 = lVar1 + 1;
    pf_schedule_word = uVar7;
  } while (lVar1 != 0x40);
  lVar1 = 0;
  uVar7 = *param_1;
  uVar6 = param_1[1];
  uVar2 = param_1[2];
  uVar11 = param_1[3];
  uVar10 = param_1[4];
  uVar9 = param_1[5];
  uVar5 = param_1[6];
  uVar8 = param_1[7];
  do {
    uVar3 = uVar5;
    uVar5 = uVar9;
    uVar9 = uVar10;
    uVar4 = uVar2;
    uVar2 = uVar6;
    uVar6 = uVar7;
    iVar12 = ((uVar5 ^ uVar3) & uVar9 ^ uVar3) + uVar8 +
             ((uVar9 << 7 | uVar9 >> 0x19) ^
             (uVar9 << 0x15 | uVar9 >> 0xb) ^ (uVar9 << 0x1a | uVar9 >> 6)) +
             *(int *)((long)&DAT_1001dcd0 + lVar1) + *(int *)((long)auStack_160 + lVar1 + 8);
    uVar10 = uVar11 + iVar12;
    uVar7 = (uVar2 & uVar4 ^ (uVar2 ^ uVar4) & uVar6) +
            ((uVar6 << 10 | uVar6 >> 0x16) ^
            (uVar6 << 0x13 | uVar6 >> 0xd) ^ (uVar6 << 0x1e | uVar6 >> 2)) + iVar12;
    lVar1 = lVar1 + 4;
    uVar11 = uVar4;
    uVar8 = uVar3;
  } while (lVar1 != 0x100);
  *param_1 = uVar7 + *param_1;
  param_1[1] = uVar6 + param_1[1];
  param_1[2] = uVar2 + param_1[2];
  param_1[3] = uVar4 + param_1[3];
  param_1[4] = uVar10 + param_1[4];
  param_1[5] = uVar9 + param_1[5];
  param_1[6] = uVar5 + param_1[6];
  param_1[7] = uVar3 + param_1[7];
  return;
}

#undef DAT_1001dcd0
#undef auStack_194
#undef aiStack_174
#undef auStack_160

#undef DAT_100230bc
#define DAT_100230bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a26U)))
#undef DAT_100230c0
#define DAT_100230c0 (*(uint *)(((uintptr_t)pf_module_state + 0x5a2aU)))
#undef DAT_100230cc
#define DAT_100230cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a36U)))
#undef DAT_100230d0
#define DAT_100230d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a3aU)))
#undef _DAT_100230cc
#define _DAT_100230cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a36U)))
#undef _DAT_100230d0
#define _DAT_100230d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a3aU)))
#define local_14 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f630
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000f630(undefined4 param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 in_RAX;

  local_14 = (uint)((ulong)in_RAX >> 0x20);
  recovered_1000bd40((long)&local_14,4);
  DAT_100230c0 = local_14 >> 0x18 | (local_14 & 0xff0000) >> 8 | (local_14 & 0xff00) << 8 |
                 local_14 << 0x18;
  DAT_100230bc = 1;
  _DAT_100230d0 = 2000;
  _DAT_100230cc = param_1;
  recovered_1000f7a0('\x01',0);
  return;
}

#undef DAT_100230bc
#undef DAT_100230c0
#undef DAT_100230cc
#undef DAT_100230d0
#undef _DAT_100230cc
#undef _DAT_100230d0
#undef local_14

#undef DAT_1001ddd0
#define DAT_1001ddd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73aU)))
#undef DAT_1001ddd6
#define DAT_1001ddd6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x740U)))
#undef DAT_10023047
#define DAT_10023047 (*(char *)(((uintptr_t)pf_module_state + 0x59b1U)))
#undef DAT_10023048
#define DAT_10023048 (*(uint *)(((uintptr_t)pf_module_state + 0x59b2U)))
#undef DAT_1002304c
#define DAT_1002304c (*(uint *)(((uintptr_t)pf_module_state + 0x59b6U)))
#undef DAT_10023050
#define DAT_10023050 (*(uint *)(((uintptr_t)pf_module_state + 0x59baU)))
#undef str_1001e6a1
#define str_1001e6a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100bU)))
#undef str_1001ecca
#define str_1001ecca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1634U)))
#define local_88 (*(char (*)[136])(pf_stack_frame + 24))
#define local_68 (*(char (*)[104])(pf_stack_frame + 56))
#define local_48 (*(char (*)[72])(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f680
 */

void recovered_1000f680(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  DAT_10023047 = param_1 != 0;
  DAT_10023048 = param_1;
  DAT_1002304c = param_2;
  DAT_10023050 = param_3;
  recovered_100063f0(local_88,0x14,str_1001ecca,param_1 >> 0x18,param_1 >> 0x10 & 0xff,
                     param_1 >> 8 & 0xff,param_1 & 0xff);
  recovered_100063f0(local_68,0x14,str_1001ecca,param_2 >> 0x18,param_2 >> 0x10 & 0xff,
                     param_2 >> 8 & 0xff,param_2 & 0xff);
  recovered_100063f0(local_48,0x14,str_1001ecca,param_3 >> 0x18,param_3 >> 0x10 & 0xff,
                     param_3 >> 8 & 0xff,param_3 & 0xff);
  recovered_1000aa30(str_1001e6a1,local_88,local_68,local_48);
  if (DAT_10023047 == '\x01') {
    recovered_1000fdd0(1,&DAT_1001ddd0,DAT_10023048,&DAT_1001ddd6);
  }
  return;
}

#undef DAT_1001ddd0
#undef DAT_1001ddd6
#undef DAT_10023047
#undef DAT_10023048
#undef DAT_1002304c
#undef DAT_10023050
#undef str_1001e6a1
#undef str_1001ecca
#undef local_88
#undef local_68
#undef local_48

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028092c
#define DAT_0028092c (*(uint8_t *)(0x28092cU))
#undef DAT_1001ddd0
#define DAT_1001ddd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73aU)))
#undef DAT_10022a30
#define DAT_10022a30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x539aU)))
#undef DAT_10023040
#define DAT_10023040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59aaU)))
#undef DAT_10023048
#define DAT_10023048 (*(uint *)(((uintptr_t)pf_module_state + 0x59b2U)))
#undef DAT_100230c0
#define DAT_100230c0 (*(uint *)(((uintptr_t)pf_module_state + 0x5a2aU)))
#undef DAT_100230c4
#define DAT_100230c4 (*(uint *)(((uintptr_t)pf_module_state + 0x5a2eU)))
#undef DAT_100230c8
#define DAT_100230c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a32U)))
#undef DAT_100230e8
#define DAT_100230e8 (*(int *)(((uintptr_t)pf_module_state + 0x5a52U)))
#undef DAT_100238ec
#define DAT_100238ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6256U)))
#undef DAT_100238f2
#define DAT_100238f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_100238f8
#define DAT_100238f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6262U)))
#undef DAT_1002390e
#define DAT_1002390e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6278U)))
#undef DAT_10023910
#define DAT_10023910 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x627aU)))
#undef DAT_10023912
#define DAT_10023912 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627cU)))
#undef DAT_10023913
#define DAT_10023913 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627dU)))
#undef DAT_10023914
#define DAT_10023914 (*(ushort *)(((uintptr_t)pf_module_state + 0x627eU)))
#undef DAT_10023916
#define DAT_10023916 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6280U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028092c
#define _DAT_0028092c (*(uint *)(0x28092cU))
#undef _DAT_100238f8
#define _DAT_100238f8 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6262U)))
#undef _DAT_1002390e
#define _DAT_1002390e (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6278U)))
#define local_1c4 (*(uint *)(pf_stack_frame + 28))
#define local_1be (*(undefined1 *)(pf_stack_frame + 34))
#define local_1bd (*(undefined1 *)(pf_stack_frame + 35))
#define local_1bc (*(undefined1 *)(pf_stack_frame + 36))
#define local_1bb (*(undefined1 *)(pf_stack_frame + 37))
#define local_1ba (*(undefined1 *)(pf_stack_frame + 38))
#define local_1b9 (*(undefined1 (*)[441])(pf_stack_frame + 39))
#define local_1ac (*(undefined8 (*)[53])(pf_stack_frame + 52))
#define local_dc (*(undefined4 *)(pf_stack_frame + 260))
#define local_d8 (*(undefined1 (*)[216])(pf_stack_frame + 264))
#define local_d2 (*(undefined1 (*)[210])(pf_stack_frame + 270))
#define local_cc (*(undefined2 *)(pf_stack_frame + 276))
#define local_ca (*(undefined1 *)(pf_stack_frame + 278))
#define local_c9 (*(undefined1 *)(pf_stack_frame + 279))
#define local_c8 (*(undefined1 *)(pf_stack_frame + 280))
#define local_c7 (*(undefined1 *)(pf_stack_frame + 281))
#define local_c6 (*(undefined2 *)(pf_stack_frame + 282))
#define local_c4 (*(uint *)(pf_stack_frame + 284))
#define local_38 (*(uint *)(pf_stack_frame + 424))
#define local_34 (*(uint *)(pf_stack_frame + 428))
#define uStack_d4 (*(undefined2 *)(pf_stack_frame + 268))
#define local_1c8 (*(byte (*)[456])(pf_stack_frame + 24))
#define stack0xffffffffffffff2b (*(uint16_t *)(pf_stack_frame + 267))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f7a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000f7a0(char param_1,int param_2)

{
  unsigned char pf_stack_frame[512] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ushort uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *in_R8;
  long lVar11;
  ulong uVar12;

  recovered_10002980(local_1c8,0,400);
  local_1c8[0] = 1;
  local_1c8[1] = 1;
  local_1c8[2] = 6;
  local_1c4 = DAT_100230c0 >> 0x18 | (DAT_100230c0 & 0xff0000) >> 8 | (DAT_100230c0 & 0xff00) << 8 |
              DAT_100230c0 << 0x18;
  if (param_2 == 0) {
    puVar5 = &local_1bd;
    local_1be = 0x80;
    uVar8 = 0;
  }
  else {
    puVar5 = local_1b9;
    uVar8 = (ulong)DAT_10023048;
    local_1bc = (undefined1)(DAT_10023048 >> 0x18);
    local_1bb = (undefined1)(DAT_10023048 >> 0x10);
    local_1ba = (undefined1)(DAT_10023048 >> 8);
  }
  *puVar5 = (char)uVar8;
  recovered_10001c80(local_1ac,(undefined8 *)&DAT_10023040,6,uVar8,in_R8);
  local_dc = 0x63538263;
  PF_PART2(local_d8, 0) = 0x135;
  stack0xffffffffffffff2b = 0x73d;
  PF_PART1(uStack_d4, 1) = 1;
  local_d8[2] = param_1;
  recovered_10001c80((undefined8 *)local_d2,(undefined8 *)&DAT_10023040,6,uVar8,in_R8);
  uVar2 = 0xc;
  if (param_1 == '\x03' && (char)param_2 == '\0') {
    local_cc = 0x432;
    local_ca = (undefined1)((uint)DAT_100230c8 >> 0x18);
    local_c9 = (undefined1)((uint)DAT_100230c8 >> 0x10);
    local_c8 = (undefined1)((uint)DAT_100230c8 >> 8);
    local_c7 = (undefined1)DAT_100230c8;
    local_c6 = 0x436;
    local_c4 = DAT_100230c4 >> 0x18 | (DAT_100230c4 & 0xff0000) >> 8 | (DAT_100230c4 & 0xff00) << 8
               | DAT_100230c4 << 0x18;
    uVar2 = 0x18;
  }
  uVar12 = (ulong)uVar2;
  *(undefined4 *)(local_d8 + uVar12) = 0x3010437;
  *(undefined2 *)(local_d8 + uVar12 + 4) = 0x3633;
  uVar8 = uVar12 + 6;
  uVar6 = recovered_10003720(((uintptr_t)pf_module_state + 0x539aU));
  if (uVar6 - 1 < 0x3f) {
    local_d2[uVar12] = 0xc;
    local_d2[uVar12 + 1] = (char)uVar6;
    recovered_10001c80((undefined8 *)(local_d2 + uVar12 + 2),(undefined8 *)&DAT_10022a30,uVar6,
                       local_d8,in_R8);
    uVar8 = (ulong)((int)uVar6 + uVar2 + 8);
  }
  local_d8[uVar8] = 0xff;
  uVar6 = 0;
  if ((char)param_2 != '\0') {
    uVar6 = (ulong)DAT_10023048;
  }
  uVar2 = 300;
  if (0x3a < (uint)uVar8) {
    uVar2 = (uint)uVar8 + 0xf1;
  }
  local_38 = uVar2 + 0x1c;
  uVar3 = (uint)uVar6;
  local_34 = uVar3;
  recovered_10001c80((undefined8 *)&DAT_100238ec,(undefined8 *)&DAT_1001ddd0,6,uVar6,in_R8);
  recovered_10001c80((undefined8 *)&DAT_100238f2,(undefined8 *)&DAT_10023040,6,uVar6,in_R8);
  _DAT_100238f8 = 8;
  uVar9 = 0xffffffff;
  recovered_1000fb60(local_38 & 0xffff,0x11,uVar3,0xffffffff);
  _DAT_1002390e = 0x43004400;
  uVar10 = uVar2 + 8 & 0xffff;
  DAT_10023912 = (undefined1)(uVar10 >> 8);
  DAT_10023913 = (undefined1)(uVar2 + 8);
  DAT_10023914 = 0;
  recovered_10001c80((undefined8 *)&DAT_10023916,(undefined8 *)local_1c8,(ulong)(uVar2 & 0xffff),
                     uVar9,in_R8);
  uVar3 = uVar10 + (local_34 & 0xffff) + (local_34 >> 0x10) + 0x2000f;
  lVar1 = 0;
  do {
    lVar11 = lVar1;
    uVar3 = uVar3 + (ushort)(*(ushort *)((long)&DAT_1002390e + lVar11) << 8 |
                            *(ushort *)((long)&DAT_1002390e + lVar11) >> 8);
    lVar1 = lVar11 + 2;
  } while (lVar11 + 3U < (ulong)uVar10);
  if ((uint)(lVar11 + 2) < uVar10) {
    uVar3 = uVar3 + (uint)*(byte *)((long)&DAT_10023910 + lVar11) * 0x100;
  }
  for (; 0xffff < uVar3; uVar3 = (uVar3 & 0xffff) + (uVar3 >> 0x10)) {
  }
  uVar7 = ~(ushort)uVar3;
  if (uVar3 == 0xffff) {
    uVar7 = 0xffff;
  }
  DAT_10023914 = uVar7 << 8 | uVar7 >> 8;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x12f < _DAT_00280808 && ((code *)(ulong)_DAT_0028092c != (code *)0x0)) &&
      (iVar4 = (*(code *)(ulong)_DAT_0028092c)(&DAT_100238ec,(uVar2 & 0xffff) + 0x2a), iVar4 != 0)))
     ) {
    DAT_100230e8 = DAT_100230e8 + 1;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028092c
#undef DAT_1001ddd0
#undef DAT_10022a30
#undef DAT_10023040
#undef DAT_10023048
#undef DAT_100230c0
#undef DAT_100230c4
#undef DAT_100230c8
#undef DAT_100230e8
#undef DAT_100238ec
#undef DAT_100238f2
#undef DAT_100238f8
#undef DAT_1002390e
#undef DAT_10023910
#undef DAT_10023912
#undef DAT_10023913
#undef DAT_10023914
#undef DAT_10023916
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028092c
#undef _DAT_100238f8
#undef _DAT_1002390e
#undef local_1c4
#undef local_1be
#undef local_1bd
#undef local_1bc
#undef local_1bb
#undef local_1ba
#undef local_1b9
#undef local_1ac
#undef local_dc
#undef local_d8
#undef local_d2
#undef local_cc
#undef local_ca
#undef local_c9
#undef local_c8
#undef local_c7
#undef local_c6
#undef local_c4
#undef local_38
#undef local_34
#undef uStack_d4
#undef local_1c8
#undef stack0xffffffffffffff2b

#undef DAT_10023040
#define DAT_10023040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59aaU)))
#undef DAT_100238ec
#define DAT_100238ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6256U)))
#undef DAT_100238f2
#define DAT_100238f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_100238f8
#define DAT_100238f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6262U)))
#undef _DAT_100238f8
#define _DAT_100238f8 (*(ushort *)(((uintptr_t)pf_module_state + 0x6262U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fb10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000fb10(undefined8 *param_1,ushort param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 in_RCX;
  undefined8 *in_R8;

  recovered_10001c80((undefined8 *)&DAT_100238ec,param_1,6,in_RCX,in_R8);
  recovered_10001c80((undefined8 *)&DAT_100238f2,(undefined8 *)&DAT_10023040,6,in_RCX,in_R8);
  _DAT_100238f8 = param_2 << 8 | param_2 >> 8;
  return;
}

#undef DAT_10023040
#undef DAT_100238ec
#undef DAT_100238f2
#undef DAT_100238f8
#undef _DAT_100238f8

#undef DAT_10023054
#define DAT_10023054 (*(int *)(((uintptr_t)pf_module_state + 0x59beU)))
#undef DAT_100238fa
#define DAT_100238fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6264U)))
#undef DAT_100238fb
#define DAT_100238fb (*(byte *)(((uintptr_t)pf_module_state + 0x6265U)))
#undef DAT_100238fc
#define DAT_100238fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6266U)))
#undef DAT_100238fd
#define DAT_100238fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6267U)))
#undef DAT_100238fe
#define DAT_100238fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6268U)))
#undef DAT_100238ff
#define DAT_100238ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6269U)))
#undef DAT_10023900
#define DAT_10023900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x626aU)))
#undef DAT_10023902
#define DAT_10023902 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x626cU)))
#undef DAT_10023903
#define DAT_10023903 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x626dU)))
#undef DAT_10023904
#define DAT_10023904 (*(ushort *)(((uintptr_t)pf_module_state + 0x626eU)))
#undef DAT_10023906
#define DAT_10023906 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6270U)))
#undef DAT_10023907
#define DAT_10023907 (*(byte *)(((uintptr_t)pf_module_state + 0x6271U)))
#undef DAT_10023908
#define DAT_10023908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6272U)))
#undef DAT_10023909
#define DAT_10023909 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6273U)))
#undef DAT_1002390a
#define DAT_1002390a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6274U)))
#undef DAT_1002390b
#define DAT_1002390b (*(byte *)(((uintptr_t)pf_module_state + 0x6275U)))
#undef DAT_1002390c
#define DAT_1002390c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6276U)))
#undef DAT_1002390d
#define DAT_1002390d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6277U)))
#undef _DAT_10023900
#define _DAT_10023900 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x626aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fb60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000fb60(int param_1,int param_2,uint param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  recovered_10002980(&DAT_100238fa,0,0x14);
  DAT_100238fa = 0x45;
  DAT_100238fc = (char)((uint)param_1 >> 8);
  DAT_100238fd = (char)param_1;
  uVar1 = DAT_10023054 + 1;
  DAT_10023054 = CONCAT22(PF_PART2(DAT_10023054, 2),(short)uVar1);
  DAT_100238fe = (char)((uVar1 & 0xffff) >> 8);
  DAT_100238ff = (char)uVar1;
  _DAT_10023900 = 0x40;
  DAT_10023902 = 0x40;
  DAT_10023903 = (char)param_2;
  DAT_10023906 = (char)(param_3 >> 0x18);
  DAT_10023907 = (byte)(param_3 >> 0x10);
  DAT_10023908 = (char)(param_3 >> 8);
  DAT_10023909 = (char)param_3;
  DAT_1002390a = (char)(param_4 >> 0x18);
  DAT_1002390b = (byte)(param_4 >> 0x10);
  DAT_1002390c = (char)((param_4 & 0xffffffff) >> 8);
  DAT_1002390d = (char)(param_4 & 0xffffffff);
  uVar3 = (uint)param_4 & 0xffff;
  iVar2 = ((uint)DAT_1002390b | ((uint)(param_4 >> 0x18) & 0xff) << 8) +
          (param_3 & 0xffff) + ((uint)DAT_10023907 | (param_3 >> 0x18) << 8) +
          (uint)(ushort)(DAT_10023904 << 8 | DAT_10023904 >> 8) +
          (uint)DAT_100238fb + param_1 + param_2 + (uVar1 & 0xffff);
  iVar4 = uVar3 + iVar2 + 0x4500;
  uVar3 = iVar2 + uVar3 + 0xc500;
  if ((short)iVar4 != iVar4) {
    do {
      uVar3 = (uVar3 & 0xffff) + (uVar3 >> 0x10);
    } while (0xffff < uVar3);
  }
  DAT_10023904 = ~(ushort)uVar3 << 8 | (ushort)~(ushort)uVar3 >> 8;
  return;
}

#undef DAT_10023054
#undef DAT_100238fa
#undef DAT_100238fb
#undef DAT_100238fc
#undef DAT_100238fd
#undef DAT_100238fe
#undef DAT_100238ff
#undef DAT_10023900
#undef DAT_10023902
#undef DAT_10023903
#undef DAT_10023904
#undef DAT_10023906
#undef DAT_10023907
#undef DAT_10023908
#undef DAT_10023909
#undef DAT_1002390a
#undef DAT_1002390b
#undef DAT_1002390c
#undef DAT_1002390d
#undef _DAT_10023900

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028092c
#define DAT_0028092c (*(uint8_t *)(0x28092cU))
#undef DAT_100230e8
#define DAT_100230e8 (*(int *)(((uintptr_t)pf_module_state + 0x5a52U)))
#undef DAT_100238ec
#define DAT_100238ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6256U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028092c
#define _DAT_0028092c (*(uint *)(0x28092cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fcc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000fcc0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;

  uVar2 = (ulong)param_1;
  if (param_1 < 0x3c) {
    recovered_10002980(&DAT_100238ec + uVar2,0,(ulong)(0x3c - param_1));
    uVar2 = 0x3c;
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x12f < _DAT_00280808 && ((code *)(ulong)_DAT_0028092c != (code *)0x0)))) {
    iVar1 = (*(code *)(ulong)_DAT_0028092c)(&DAT_100238ec,uVar2);
    if (iVar1 != 0) {
      DAT_100230e8 = DAT_100230e8 + 1;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028092c
#undef DAT_100230e8
#undef DAT_100238ec
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028092c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fd50
 */

uint recovered_1000fd50(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar1 = 0;
  uVar4 = 0;
  if (1 < param_2) {
    uVar1 = 0;
    uVar2 = 0;
    do {
      uVar1 = uVar1 + (ushort)(*(ushort *)(param_1 + (ulong)uVar2) << 8 |
                              *(ushort *)(param_1 + (ulong)uVar2) >> 8);
      uVar4 = uVar2 + 2;
      uVar3 = uVar2 + 3;
      uVar2 = uVar4;
    } while (uVar3 < param_2);
  }
  if (uVar4 < param_2) {
    uVar1 = uVar1 + (uint)*(byte *)(param_1 + (ulong)uVar4) * 0x100;
  }
  for (; 0xffff < uVar1; uVar1 = (uVar1 & 0xffff) + (uVar1 >> 0x10)) {
  }
  return ~uVar1 & 0xffff;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028092c
#define DAT_0028092c (*(uint8_t *)(0x28092cU))
#undef DAT_10023040
#define DAT_10023040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59aaU)))
#undef DAT_10023048
#define DAT_10023048 (*(uint *)(((uintptr_t)pf_module_state + 0x59b2U)))
#undef DAT_100230e8
#define DAT_100230e8 (*(int *)(((uintptr_t)pf_module_state + 0x5a52U)))
#undef DAT_100238ec
#define DAT_100238ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6256U)))
#undef DAT_100238f2
#define DAT_100238f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_100238f8
#define DAT_100238f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6262U)))
#undef DAT_10023900
#define DAT_10023900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x626aU)))
#undef DAT_10023901
#define DAT_10023901 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x626bU)))
#undef DAT_10023902
#define DAT_10023902 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x626cU)))
#undef DAT_10023908
#define DAT_10023908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6272U)))
#undef DAT_1002390c
#define DAT_1002390c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6276U)))
#undef DAT_10023912
#define DAT_10023912 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627cU)))
#undef DAT_10023916
#define DAT_10023916 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6280U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028092c
#define _DAT_0028092c (*(uint *)(0x28092cU))
#undef _DAT_100238f8
#define _DAT_100238f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6262U)))
#undef _DAT_10023908
#define _DAT_10023908 (*(uint *)(((uintptr_t)pf_module_state + 0x6272U)))
#undef _DAT_10023912
#define _DAT_10023912 (*(uint *)(((uintptr_t)pf_module_state + 0x627cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fdd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000fdd0(undefined4 param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 *puVar2;
  undefined8 *in_R8;

  puVar2 = param_4;
  recovered_10001c80((undefined8 *)&DAT_100238ec,param_2,6,param_4,in_R8);
  recovered_10001c80((undefined8 *)&DAT_100238f2,(undefined8 *)&DAT_10023040,6,puVar2,in_R8);
  _DAT_100238f8 = 0x406000801000608;
  DAT_10023900 = (undefined1)((uint)param_1 >> 8);
  DAT_10023901 = (undefined1)param_1;
  recovered_10001c80((undefined8 *)&DAT_10023902,(undefined8 *)&DAT_10023040,6,puVar2,in_R8);
  _DAT_10023908 =
       DAT_10023048 >> 0x18 | (DAT_10023048 & 0xff0000) >> 8 | (DAT_10023048 & 0xff00) << 8 |
       DAT_10023048 << 0x18;
  recovered_10001c80((undefined8 *)&DAT_1002390c,param_4,6,puVar2,in_R8);
  _DAT_10023912 =
       param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18;
  recovered_10002980((byte *)&DAT_10023916,0,0x12);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x12f < _DAT_00280808 && ((code *)(ulong)_DAT_0028092c != (code *)0x0)))) {
    iVar1 = (*(code *)(ulong)_DAT_0028092c)(&DAT_100238ec,0x3c);
    if (iVar1 != 0) {
      DAT_100230e8 = DAT_100230e8 + 1;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028092c
#undef DAT_10023040
#undef DAT_10023048
#undef DAT_100230e8
#undef DAT_100238ec
#undef DAT_100238f2
#undef DAT_100238f8
#undef DAT_10023900
#undef DAT_10023901
#undef DAT_10023902
#undef DAT_10023908
#undef DAT_1002390c
#undef DAT_10023912
#undef DAT_10023916
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028092c
#undef _DAT_100238f8
#undef _DAT_10023908
#undef _DAT_10023912

#undef DAT_10023058
#define DAT_10023058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59c2U)))
#undef DAT_1002305c
#define DAT_1002305c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59c6U)))
#undef DAT_10023062
#define DAT_10023062 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59ccU)))
#undef DAT_10023064
#define DAT_10023064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59ceU)))
#undef DAT_1002306e
#define DAT_1002306e (*(char *)(((uintptr_t)pf_module_state + 0x59d8U)))
#undef DAT_10023070
#define DAT_10023070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59daU)))
#undef DAT_1002307a
#define DAT_1002307a (*(char *)(((uintptr_t)pf_module_state + 0x59e4U)))
#undef DAT_1002307c
#define DAT_1002307c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59e6U)))
#undef DAT_10023086
#define DAT_10023086 (*(char *)(((uintptr_t)pf_module_state + 0x59f0U)))
#undef DAT_10023088
#define DAT_10023088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59f2U)))
#undef DAT_10023092
#define DAT_10023092 (*(char *)(((uintptr_t)pf_module_state + 0x59fcU)))
#undef DAT_10023094
#define DAT_10023094 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59feU)))
#undef DAT_1002309e
#define DAT_1002309e (*(char *)(((uintptr_t)pf_module_state + 0x5a08U)))
#undef DAT_100230a0
#define DAT_100230a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a0aU)))
#undef DAT_100230aa
#define DAT_100230aa (*(char *)(((uintptr_t)pf_module_state + 0x5a14U)))
#undef DAT_100230ac
#define DAT_100230ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a16U)))
#undef DAT_100230b6
#define DAT_100230b6 (*(char *)(((uintptr_t)pf_module_state + 0x5a20U)))
#undef DAT_100230b8
#define DAT_100230b8 (*(uint *)(((uintptr_t)pf_module_state + 0x5a22U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fee0
 */

void recovered_1000fee0(int param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 in_RCX;
  undefined4 *puVar2;
  undefined8 *in_R8;

  if ((DAT_10023062 == '\x01') && (DAT_10023058 == param_1)) {
    puVar2 = &DAT_10023058;
  }
  else if ((DAT_1002306e == '\x01') && (DAT_10023064 == param_1)) {
    puVar2 = &DAT_10023064;
  }
  else if ((DAT_1002307a == '\x01') && (DAT_10023070 == param_1)) {
    puVar2 = &DAT_10023070;
  }
  else if ((DAT_10023086 == '\x01') && (DAT_1002307c == param_1)) {
    puVar2 = &DAT_1002307c;
  }
  else if ((DAT_10023092 == '\x01') && (DAT_10023088 == param_1)) {
    puVar2 = &DAT_10023088;
  }
  else if ((DAT_1002309e == '\x01') && (DAT_10023094 == param_1)) {
    puVar2 = &DAT_10023094;
  }
  else if ((DAT_100230aa == '\x01') && (DAT_100230a0 == param_1)) {
    puVar2 = &DAT_100230a0;
  }
  else {
    if ((DAT_100230b6 != '\x01') || (DAT_100230ac != param_1)) {
      uVar1 = (ulong)DAT_100230b8;
      (&DAT_10023058)[uVar1 * 3] = param_1;
      recovered_10001c80((undefined8 *)(&DAT_1002305c + uVar1 * 0xc),param_2,6,in_RCX,in_R8);
      (&DAT_10023062)[(ulong)DAT_100230b8 * 0xc] = 1;
      DAT_100230b8 = DAT_100230b8 + 1 & 7;
      return;
    }
    puVar2 = &DAT_100230ac;
  }
  recovered_10001c80((undefined8 *)(puVar2 + 1),param_2,6,in_RCX,in_R8);
  return;
}

#undef DAT_10023058
#undef DAT_1002305c
#undef DAT_10023062
#undef DAT_10023064
#undef DAT_1002306e
#undef DAT_10023070
#undef DAT_1002307a
#undef DAT_1002307c
#undef DAT_10023086
#undef DAT_10023088
#undef DAT_10023092
#undef DAT_10023094
#undef DAT_1002309e
#undef DAT_100230a0
#undef DAT_100230aa
#undef DAT_100230ac
#undef DAT_100230b6
#undef DAT_100230b8

#undef DAT_10023040
#define DAT_10023040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59aaU)))
#undef DAT_10023047
#define DAT_10023047 (*(char *)(((uintptr_t)pf_module_state + 0x59b1U)))
#undef DAT_10023048
#define DAT_10023048 (*(uint *)(((uintptr_t)pf_module_state + 0x59b2U)))
#undef DAT_1002304c
#define DAT_1002304c (*(uint *)(((uintptr_t)pf_module_state + 0x59b6U)))
#undef DAT_10023050
#define DAT_10023050 (*(uint *)(((uintptr_t)pf_module_state + 0x59baU)))
#undef DAT_100230bc
#define DAT_100230bc (*(int *)(((uintptr_t)pf_module_state + 0x5a26U)))
#undef DAT_100230c0
#define DAT_100230c0 (*(uint *)(((uintptr_t)pf_module_state + 0x5a2aU)))
#undef DAT_100230c4
#define DAT_100230c4 (*(uint *)(((uintptr_t)pf_module_state + 0x5a2eU)))
#undef DAT_100230c8
#define DAT_100230c8 (*(uint *)(((uintptr_t)pf_module_state + 0x5a32U)))
#undef DAT_100230cc
#define DAT_100230cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a36U)))
#undef DAT_100230d0
#define DAT_100230d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a3aU)))
#undef DAT_100230d8
#define DAT_100230d8 (*(uint *)(((uintptr_t)pf_module_state + 0x5a42U)))
#undef DAT_100230dc
#define DAT_100230dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a46U)))
#undef DAT_100230e0
#define DAT_100230e0 (*(int *)(((uintptr_t)pf_module_state + 0x5a4aU)))
#undef _DAT_100230cc
#define _DAT_100230cc (*(int *)(((uintptr_t)pf_module_state + 0x5a36U)))
#undef _DAT_100230d0
#define _DAT_100230d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a3aU)))
#undef _DAT_100230dc
#define _DAT_100230dc (*(int *)(((uintptr_t)pf_module_state + 0x5a46U)))
#undef str_1001e6c7
#define str_1001e6c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1031U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10010020(char *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;

  if ((((DAT_100230bc != 0) && (DAT_100230bc != 3)) && (0xf3 < param_2)) &&
     ((*param_1 == '\x02' &&
      (uVar5 = *(uint *)(param_1 + 4),
      (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) ==
      DAT_100230c0)))) {
    iVar4 = recovered_100032a0((ulong *)(param_1 + 0x1c),(ulong *)&DAT_10023040,6);
    if ((iVar4 == 0) &&
       (uVar5 = *(uint *)(param_1 + 0xec),
       (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) ==
       0x63825363)) {
      uVar5 = *(uint *)(param_1 + 0x10);
      uVar8 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar7 = param_2 - 0xf0;
      uVar5 = 0;
      cVar3 = '\0';
      uVar12 = 0;
      uVar9 = 0;
      uVar11 = 0;
      uVar10 = 0;
      do {
        bVar1 = param_1[(ulong)uVar5 + 0xf0];
        if (bVar1 == 0) {
          uVar6 = uVar5 + 1;
        }
        else {
          if ((bVar1 == 0xff) || (uVar7 <= uVar5 + 1)) break;
          bVar2 = param_1[(ulong)uVar5 + 0xf1];
          uVar6 = uVar5 + 2 + (uint)bVar2;
          if (uVar7 < uVar6) break;
          if (bVar1 < 0x33) {
            if (bVar1 == 1) {
              if (bVar2 == 4) {
                uVar5 = *(uint *)(param_1 + (ulong)uVar5 + 0xf2);
                uVar11 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                         uVar5 << 0x18;
              }
            }
            else if ((bVar1 == 3) && (3 < bVar2)) {
              uVar5 = *(uint *)(param_1 + (ulong)uVar5 + 0xf2);
              uVar9 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18;
            }
          }
          else if (bVar1 == 0x33) {
            if (bVar2 == 4) {
              uVar5 = *(uint *)(param_1 + (ulong)uVar5 + 0xf2);
              uVar12 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18;
            }
          }
          else if (bVar1 == 0x35) {
            if (bVar2 == 1) {
              cVar3 = param_1[(ulong)uVar5 + 0xf2];
            }
          }
          else if ((bVar1 == 0x36) && (bVar2 == 4)) {
            uVar5 = *(uint *)(param_1 + (ulong)uVar5 + 0xf2);
            uVar10 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
            ;
          }
        }
        uVar5 = uVar6;
      } while (uVar5 < uVar7);
      recovered_1000b560((long)param_1,(ulong)uVar7);
      if (((DAT_100230bc == 1) && (cVar3 == '\x02')) && (uVar8 != 0)) {
        DAT_100230bc = 2;
        _DAT_100230d0 = 2000;
        DAT_100230c4 = uVar10;
        DAT_100230c8 = uVar8;
        _DAT_100230cc = param_3;
        recovered_1000f7a0('\x03',0);
        return;
      }
      if ((((DAT_100230bc - 2U & 0xfffffffd) == 0) && (cVar3 == '\x05')) && (uVar8 != 0)) {
        DAT_100230d8 = 0xf9fffc18;
        if (0xffc00000 < uVar12 - 0x400000) {
          DAT_100230d8 = uVar12 * 1000;
        }
        DAT_100230e0 = (DAT_100230d8 >> 1) + param_3;
        if (uVar10 != 0) {
          DAT_100230c4 = uVar10;
        }
        uVar5 = 0xffffff00;
        if (uVar11 != 0) {
          uVar5 = uVar11;
        }
        DAT_100230bc = 3;
        _DAT_100230dc = param_3;
        if (((DAT_10023047 != '\x01') || (DAT_10023048 != uVar8)) ||
           ((DAT_1002304c != uVar5 || (DAT_10023050 != uVar9)))) {
          recovered_1000f680(uVar8,uVar5,uVar9);
          return;
        }
      }
      else if (cVar3 == '\x06') {
        recovered_1000a9a0(str_1001e6c7);
        if (DAT_100230bc == 4) {
          DAT_10023047 = '\0';
        }
        recovered_1000f630(param_3);
        return;
      }
    }
  }
  return;
}

#undef DAT_10023040
#undef DAT_10023047
#undef DAT_10023048
#undef DAT_1002304c
#undef DAT_10023050
#undef DAT_100230bc
#undef DAT_100230c0
#undef DAT_100230c4
#undef DAT_100230c8
#undef DAT_100230cc
#undef DAT_100230d0
#undef DAT_100230d8
#undef DAT_100230dc
#undef DAT_100230e0
#undef _DAT_100230cc
#undef _DAT_100230d0
#undef _DAT_100230dc
#undef str_1001e6c7

#undef DAT_10022860
#define DAT_10022860 (*(ushort *)(((uintptr_t)pf_module_state + 0x51caU)))
#undef DAT_10022aa0
#define DAT_10022aa0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x540aU)))
#undef DAT_10022ab0
#define DAT_10022ab0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x541aU)))
#undef DAT_10022ab4
#define DAT_10022ab4 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x541eU)))
#undef DAT_10022ab6
#define DAT_10022ab6 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5420U)))
#undef DAT_10022ab8
#define DAT_10022ab8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5422U)))
#undef DAT_10022abc
#define DAT_10022abc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5426U)))
#undef DAT_10022ac0
#define DAT_10022ac0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x542aU)))
#undef DAT_10022ac8
#define DAT_10022ac8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5432U)))
#undef DAT_10022ad0
#define DAT_10022ad0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x543aU)))
#undef DAT_10022ad4
#define DAT_10022ad4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x543eU)))
#undef DAT_10022aec
#define DAT_10022aec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5456U)))
#undef DAT_10022af0
#define DAT_10022af0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x545aU)))
#undef DAT_10022af4
#define DAT_10022af4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545eU)))
#undef DAT_10022af6
#define DAT_10022af6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5460U)))
#undef DAT_10022af8
#define DAT_10022af8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5462U)))
#undef DAT_10022af9
#define DAT_10022af9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5463U)))
#undef DAT_10022afa
#define DAT_10022afa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5464U)))
#undef DAT_10022afb
#define DAT_10022afb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5465U)))
#undef DAT_10022afc
#define DAT_10022afc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5466U)))
#undef DAT_10022b04
#define DAT_10022b04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546eU)))
#undef DAT_10022b08
#define DAT_10022b08 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5472U)))
#undef DAT_10022b0c
#define DAT_10022b0c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5476U)))
#undef DAT_10022b10
#define DAT_10022b10 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x547aU)))
#undef DAT_100230fa
#define DAT_100230fa (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
#undef DAT_100230fc
#define DAT_100230fc (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a66U)))
#undef DAT_100230fe
#define DAT_100230fe (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a68U)))
#undef DAT_10023102
#define DAT_10023102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a6cU)))
#undef DAT_10023106
#define DAT_10023106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a70U)))
#undef DAT_10023107
#define DAT_10023107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a71U)))
#undef DAT_10023108
#define DAT_10023108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a72U)))
#undef DAT_1002310c
#define DAT_1002310c (*(ushort *)(((uintptr_t)pf_module_state + 0x5a76U)))
#define local_40 (*(uint * *)(pf_stack_frame + 48))
#define local_34 (*(uint *)(pf_stack_frame + 60))
#define local_60 (*(undefined8 *)(pf_stack_frame + 16))
#define local_58 (*(long *)(pf_stack_frame + 24))
#define local_50 (*(uint *)(pf_stack_frame + 32))
#define local_4c (*(uint *)(pf_stack_frame + 36))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_44 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010310
 */

void recovered_10010310(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;

  if (param_2 < 0x14) {
    return;
  }
  uVar8 = (ulong)param_1;
  local_40 = (uint *)((long)&DAT_100230fa + uVar8);
  uVar2 = (&DAT_10023106)[uVar8] >> 2 & 0x3c;
  local_4c = param_2 - uVar2;
  if (param_2 < uVar2 || (&DAT_10023106)[uVar8] < 0x50) {
    return;
  }
  uVar6 = (uint)DAT_10023107 << 0x10 | (uint)DAT_10023106 << 0x18;
  uVar13 = param_2 & 0xffff;
  uVar11 = (uint)(ushort)((ushort)DAT_10023108 << 8 | (ushort)DAT_10023108 >> 8);
  uVar7 = (ushort)(PF_PART2(DAT_10023108, 2) << 8 | PF_PART2(DAT_10023108, 2) >> 8) + uVar11 +
          (uVar6 >> 0x10) + uVar13 + (uint)(ushort)(DAT_1002310c << 8 | DAT_1002310c >> 8) + 6;
  if ((param_2 & 0xfffe) == 0) {
    uVar10 = 0;
    if (uVar13 == 0) goto joined_r0x1001041e;
  }
  else {
    uVar9 = 0;
    do {
      uVar5 = *(ushort *)((long)&DAT_100230fa + uVar9 + uVar8);
      uVar7 = uVar7 + (ushort)(uVar5 << 8 | uVar5 >> 8);
      uVar10 = uVar9 + 2;
      uVar12 = uVar9 + 3;
      uVar9 = uVar10;
    } while (uVar12 < uVar13);
    if (uVar13 <= (uint)uVar10) goto joined_r0x1001041e;
  }
  uVar7 = uVar7 + (uint)*(byte *)((long)local_40 + (uVar10 & 0xffffffff)) * 0x100;
joined_r0x1001041e:
  for (; 0xffff < uVar7; uVar7 = (uVar7 & 0xffff) + (uVar7 >> 0x10)) {
  }
  if (uVar7 == 0xffff) {
    uVar5 = *(ushort *)((long)&DAT_100230fc + uVar8) << 8 |
            *(ushort *)((long)&DAT_100230fc + uVar8) >> 8;
    uVar7 = *(uint *)((long)&DAT_100230fe + uVar8);
    uVar13 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = *(uint *)(&DAT_10023102 + uVar8);
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    bVar4 = (&DAT_10023107)[uVar8];
    local_48 = (uint)(ushort)(*(ushort *)((long)&DAT_10023108 + uVar8) << 8 |
                             *(ushort *)((long)&DAT_10023108 + uVar8) >> 8);
    local_58 = (ulong)uVar2 + (long)local_40;
    lVar14 = 0;
    while ((((*(int *)((long)&DAT_10022aa0 + lVar14) == 0 ||
             (*(uint *)((long)&DAT_10022ab0 + lVar14) != (uVar11 | uVar6))) ||
            (*(ushort *)((long)&DAT_10022ab4 + lVar14) !=
             (ushort)(*(ushort *)local_40 << 8 | *(ushort *)local_40 >> 8))) ||
           (*(ushort *)((long)&DAT_10022ab6 + lVar14) != uVar5))) {
      lVar14 = lVar14 + 0x78;
      if (lVar14 == 0x5a0) {
        if ((bVar4 & 0x16) == 2) {
LAB_100105ba:
          if (uVar5 == DAT_10022860) {
            recovered_100109d0((ushort *)local_40,uVar2,param_3);
            return;
          }
        }
        recovered_10010c10((undefined1 *)local_40,local_4c);
        return;
      }
    }
    local_44 = (uint)bVar4;
    if (((*(int *)((long)&DAT_10022aa0 + lVar14) == 8) && ((bVar4 & 0x16) == 2)) &&
       ((int)(*(int *)((long)&DAT_10022ab8 + lVar14) - uVar13) < 0)) {
      *(undefined4 *)((long)&DAT_10022aa0 + lVar14) = 0;
      *(undefined4 *)((long)&DAT_10022ad4 + lVar14) = 0;
      *(undefined4 *)((long)&DAT_10022aec + lVar14) = 0;
      (&DAT_10022b04)[lVar14] = 0;
      goto LAB_100105ba;
    }
    *(uint *)((long)&DAT_10022b10 + lVar14) = param_3;
    local_60 = CONCAT44(uVar13,param_3);
    local_50 = param_2;
    local_34 = param_3;
    recovered_1000b560((long)&local_60,8);
    if ((local_44 & 4) == 0) {
      puVar1 = (uint *)((long)&DAT_10022aa0 + lVar14);
      if (*puVar1 == 8) {
        (&DAT_10022afa)[lVar14] = 1;
        iVar3 = (uint)(byte)(&DAT_10022af6)[lVar14] + (uint)(byte)(&DAT_10022af4)[lVar14] +
                *(int *)((long)&DAT_10022af0 + lVar14) + *(int *)((long)&DAT_10022abc + lVar14);
        bVar4 = 0x10;
LAB_10010733:
        recovered_10010ea0((long)puVar1,bVar4,iVar3,0,0);
      }
      else {
        if (*puVar1 == 1) {
          if ((local_44 & 2) != 0) {
            if (((local_44 & 0x10) == 0) && (uVar13 + 1 != *(int *)((long)&DAT_10022ab8 + lVar14)))
            {
              *(undefined4 *)((long)&DAT_10022aa0 + lVar14) = 0;
              *(undefined4 *)((long)&DAT_10022ad4 + lVar14) = 0;
              *(undefined4 *)((long)&DAT_10022aec + lVar14) = 0;
              (&DAT_10022b04)[lVar14] = 0;
              recovered_100109d0((ushort *)local_40,uVar2,local_34);
              return;
            }
            iVar3 = *(int *)((long)&DAT_10022abc + lVar14);
            bVar4 = 0x12;
            goto LAB_10010733;
          }
          if ((local_44 & 0x10) == 0) {
            return;
          }
          if (uVar7 != *(int *)((long)&DAT_10022abc + lVar14) + 1U) {
            return;
          }
          (&DAT_10022af4)[lVar14] = 0;
          *(uint *)((long)&DAT_10022abc + lVar14) = uVar7;
          *(uint *)((long)&DAT_10022ac0 + lVar14) = local_48;
          (&DAT_10022b04)[lVar14] = 0;
          *(undefined4 *)((long)&DAT_10022b08 + lVar14) = 0;
          *(undefined4 *)((long)&DAT_10022afc + lVar14) = 400;
          *(undefined4 *)((long)&DAT_10022aa0 + lVar14) = 2;
          *(uint *)((long)&DAT_10022b0c + lVar14) = local_34;
        }
        else if ((local_44 & 2) != 0) {
          recovered_1000b3d0(puVar1);
          return;
        }
        if (((local_44 & 0x10) != 0) &&
           (local_40 = puVar1, recovered_10011200((int *)puVar1,uVar7,local_48,local_34),
           *local_40 != 0)) {
          iVar3 = *(int *)((long)&DAT_10022ab8 + lVar14);
          uVar13 = iVar3 - uVar13;
          if (((int)uVar13 < 0) || (local_4c < uVar13)) {
            if ((local_50 != uVar2) || ((local_44 & 1) != 0)) {
              (&DAT_10022afa)[lVar14] = 1;
            }
          }
          else {
            uVar2 = local_4c - uVar13;
            if (uVar2 == 0) {
              if ((local_44 & 1) != 0) {
LAB_1001080f:
                if ((&DAT_10022af9)[lVar14] == '\0') {
                  *(int *)((long)&DAT_10022ab8 + lVar14) = iVar3 + 1;
                  *(undefined2 *)(&DAT_10022af9 + lVar14) = 0x101;
                  iVar3 = *(int *)((long)&DAT_10022aa0 + lVar14);
                  if (iVar3 == 6) {
                    *(undefined4 *)((long)&DAT_10022aa0 + lVar14) = 8;
                  }
                  else {
                    if (iVar3 != 5) {
                      if (iVar3 == 2) {
                        *(undefined4 *)((long)&DAT_10022aa0 + lVar14) = 3;
                        *(uint *)((long)&DAT_10022b0c + lVar14) = local_34;
                      }
                      goto LAB_10010713;
                    }
                    *(uint *)((long)&DAT_10022aa0 + lVar14) = (byte)(&DAT_10022af8)[lVar14] + 7;
                  }
                  *(uint *)((long)&DAT_10022b0c + lVar14) = local_34;
                }
              }
            }
            else {
              uVar11 = 0x4000 - *(int *)((long)&DAT_10022ad4 + lVar14);
              uVar7 = uVar11;
              if (uVar2 < uVar11) {
                uVar7 = uVar2;
              }
              if ((uVar7 != 0) && ((&DAT_10022af9)[lVar14] == '\0')) {
                recovered_10011320(*(long *)((long)&DAT_10022ac8 + lVar14),0x4000,
                                   *(int *)((long)&DAT_10022ad4 + lVar14) +
                                   *(int *)((long)&DAT_10022ad0 + lVar14) & 0x3fff,
                                   local_58 + (ulong)uVar13,uVar7);
                *(int *)((long)&DAT_10022ad4 + lVar14) =
                     *(int *)((long)&DAT_10022ad4 + lVar14) + uVar7;
                iVar3 = uVar7 + *(int *)((long)&DAT_10022ab8 + lVar14);
                *(int *)((long)&DAT_10022ab8 + lVar14) = iVar3;
              }
              (&DAT_10022afa)[lVar14] = 1;
              if (((local_44 & 1) != 0) && (uVar2 <= uVar11)) goto LAB_1001080f;
            }
          }
LAB_10010713:
          recovered_10011390(local_40,local_34);
        }
      }
    }
    else if (((int)(*(int *)((long)&DAT_10022ab8 + lVar14) - uVar13) < 1) &&
            ((int)((uVar13 - *(int *)((long)&DAT_10022ab8 + lVar14)) + -0x4001) < 0)) {
      (&DAT_10022afb)[lVar14] =
           *(int *)((long)&DAT_10022aa0 + lVar14) != 8 &&
           *(int *)((long)&DAT_10022aa0 + lVar14) != 1;
      *(undefined4 *)((long)&DAT_10022aa0 + lVar14) = 0;
      *(undefined4 *)((long)&DAT_10022ad4 + lVar14) = 0;
      *(undefined4 *)((long)&DAT_10022aec + lVar14) = 0;
      (&DAT_10022b04)[lVar14] = 0;
    }
  }
  return;
}

#undef DAT_10022860
#undef DAT_10022aa0
#undef DAT_10022ab0
#undef DAT_10022ab4
#undef DAT_10022ab6
#undef DAT_10022ab8
#undef DAT_10022abc
#undef DAT_10022ac0
#undef DAT_10022ac8
#undef DAT_10022ad0
#undef DAT_10022ad4
#undef DAT_10022aec
#undef DAT_10022af0
#undef DAT_10022af4
#undef DAT_10022af6
#undef DAT_10022af8
#undef DAT_10022af9
#undef DAT_10022afa
#undef DAT_10022afb
#undef DAT_10022afc
#undef DAT_10022b04
#undef DAT_10022b08
#undef DAT_10022b0c
#undef DAT_10022b10
#undef DAT_100230fa
#undef DAT_100230fc
#undef DAT_100230fe
#undef DAT_10023102
#undef DAT_10023106
#undef DAT_10023107
#undef DAT_10023108
#undef DAT_1002310c
#undef local_40
#undef local_34
#undef local_60
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_44

#undef DAT_10023048
#define DAT_10023048 (*(uint *)(((uintptr_t)pf_module_state + 0x59b2U)))
#undef DAT_100230f2
#define DAT_100230f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a5cU)))
#undef DAT_100230fa
#define DAT_100230fa (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
#undef DAT_10023106
#define DAT_10023106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a70U)))
#undef DAT_1002390e
#define DAT_1002390e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6278U)))
#undef DAT_10023910
#define DAT_10023910 (*(ushort *)(((uintptr_t)pf_module_state + 0x627aU)))
#undef _DAT_10023106
#define _DAT_10023106 (*(uint *)(((uintptr_t)pf_module_state + 0x5a70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10010890(ulong param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *in_R8;
  char *pcVar6;

  if (7 < param_2) {
    pcVar6 = (char *)((long)&DAT_100230fa + (param_1 & 0xffffffff));
    if (((*pcVar6 == '\b') && (*(char *)((long)&DAT_100230fa + (param_1 & 0xffffffff) + 1) == '\0'))
       && (param_2 + 0x22 < 0x801)) {
      uVar1 = 0;
      uVar2 = 0;
      do {
        uVar1 = uVar1 + (ushort)(*(ushort *)(pcVar6 + uVar2) << 8 | *(ushort *)(pcVar6 + uVar2) >> 8
                                );
        uVar3 = uVar2 + 2;
        uVar5 = uVar2 + 3;
        uVar2 = uVar3;
      } while (uVar5 < param_2);
      if (uVar3 < param_2) {
        uVar1 = uVar1 + (uint)(byte)pcVar6[uVar3] * 0x100;
      }
      for (; 0xffff < uVar1; uVar1 = (uVar1 & 0xffff) + (uVar1 >> 0x10)) {
      }
      if (uVar1 == 0xffff) {
        recovered_1000fb10(&DAT_100230f2,0x800);
        uVar4 = (ulong)(_DAT_10023106 >> 0x18 | (_DAT_10023106 & 0xff0000) >> 8 |
                        (_DAT_10023106 & 0xff00) << 8 | _DAT_10023106 << 0x18);
        recovered_1000fb60(param_2 + 0x14 & 0xffff,1,DAT_10023048,uVar4);
        recovered_10001c80((undefined8 *)&DAT_1002390e,(undefined8 *)pcVar6,(ulong)param_2,uVar4,
                           in_R8);
        PF_PART1(DAT_1002390e, 0) = 0;
        DAT_10023910 = 0;
        uVar1 = recovered_1000fd50(((uintptr_t)pf_module_state + 0x6278U),param_2);
        DAT_10023910 = (ushort)uVar1 << 8 | (ushort)uVar1 >> 8;
        recovered_1000fcc0(param_2 + 0x22);
        return;
      }
    }
  }
  return;
}

#undef DAT_10023048
#undef DAT_100230f2
#undef DAT_100230fa
#undef DAT_10023106
#undef DAT_1002390e
#undef DAT_10023910
#undef _DAT_10023106

#undef DAT_1001f058
#define DAT_1001f058 (*(int *)(((uintptr_t)pf_module_state + 0x19c2U)))
#undef DAT_10022aa0
#define DAT_10022aa0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x540aU)))
#undef DAT_10022ac8
#define DAT_10022ac8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5432U)))
#undef DAT_10022ae0
#define DAT_10022ae0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x544aU)))
#undef DAT_10022b0c
#define DAT_10022b0c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5476U)))
#undef DAT_100230f2
#define DAT_100230f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a5cU)))
#undef DAT_10023106
#define DAT_10023106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a70U)))
#undef _DAT_10023106
#define _DAT_10023106 (*(uint *)(((uintptr_t)pf_module_state + 0x5a70U)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100109d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100109d0(ushort *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined8 in_RAX;
  long lVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *in_R8;

  local_34 = (uint)((ulong)in_RAX >> 0x20);
  lVar7 = 0;
  piVar9 = (int *)0x0;
  do {
    if ((*(long *)((long)&DAT_10022ac8 + lVar7) != 0) &&
       (*(long *)((long)&DAT_10022ae0 + lVar7) != 0)) {
      iVar5 = *(int *)((long)&DAT_10022aa0 + lVar7);
      uVar6 = iVar5 - 4;
      in_R8 = (undefined8 *)(ulong)uVar6;
      if (uVar6 < 5) {
        if ((piVar9 == (int *)0x0) || (*(int *)((long)&DAT_10022b0c + lVar7) - piVar9[0x1b] < 0)) {
          piVar9 = (int *)((long)&DAT_10022aa0 + lVar7);
        }
      }
      else if (iVar5 == 0) {
        piVar9 = (int *)((long)&DAT_10022aa0 + lVar7);
        goto LAB_10010a6e;
      }
    }
    lVar7 = lVar7 + 0x78;
  } while (lVar7 != 0x5a0);
  if (piVar9 == (int *)0x0) {
    recovered_10010c10((undefined1 *)param_1,0);
    return;
  }
  *piVar9 = 0;
  piVar9[0xd] = 0;
  piVar9[0x13] = 0;
  *(undefined1 *)(piVar9 + 0x19) = 0;
LAB_10010a6e:
  uVar6 = 0x218;
  if (0x14 < param_2) {
    uVar8 = 0x14;
    uVar6 = 0x218;
    do {
      uVar10 = (ulong)uVar8;
      cVar2 = *(char *)((long)param_1 + uVar10);
      if (cVar2 == '\x01') {
        uVar11 = 1;
      }
      else {
        if ((cVar2 == '\0') || (param_2 <= (uint)(uVar10 + 1))) break;
        bVar3 = *(byte *)((long)param_1 + uVar10 + 1);
        uVar11 = (uint)bVar3;
        if (uVar11 < 2) break;
        if (((cVar2 == '\x02') && (bVar3 == 4)) && (uVar8 + 4 <= param_2)) {
          uVar4 = *(ushort *)((long)param_1 + uVar10 + 2);
          uVar6 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
        }
      }
      uVar8 = uVar8 + uVar11;
    } while (uVar8 < param_2);
  }
  uVar10 = 0x5b4;
  if (uVar6 < 0x5b4) {
    uVar10 = (ulong)uVar6;
  }
  uVar6 = 0x100;
  if (0x100 < (uint)uVar10) {
    uVar6 = (uint)uVar10;
  }
  pbVar1 = (byte *)(piVar9 + 2);
  recovered_10002980(pbVar1,0,6);
  recovered_10001c80((undefined8 *)pbVar1,(undefined8 *)&DAT_100230f2,6,uVar10,in_R8);
  iVar5 = DAT_1001f058 + 1;
  piVar9[1] = DAT_1001f058;
  DAT_1001f058 = iVar5;
  piVar9[4] = _DAT_10023106 >> 0x18 | (_DAT_10023106 & 0xff0000) >> 8 |
              (_DAT_10023106 & 0xff00) << 8 | _DAT_10023106 << 0x18;
  *(ushort *)(piVar9 + 5) = *param_1 << 8 | *param_1 >> 8;
  *(ushort *)((long)piVar9 + 0x16) = param_1[1] << 8 | param_1[1] >> 8;
  uVar8 = *(uint *)(param_1 + 2);
  piVar9[6] = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) + 1;
  recovered_1000bd40((long)&local_34,4);
  uVar8 = local_34 >> 0x18 | (local_34 & 0xff0000) >> 8 | (local_34 & 0xff00) << 8 |
          local_34 << 0x18;
  piVar9[7] = uVar8;
  piVar9[8] = (uint)(ushort)(param_1[7] << 8 | param_1[7] >> 8);
  piVar9[9] = uVar6;
  piVar9[0xc] = 0;
  piVar9[0xd] = 0;
  piVar9[0x12] = 0;
  piVar9[0x13] = 0;
  piVar9[0x14] = 0;
  piVar9[0x15] = 1;
  piVar9[0x16] = 0;
  piVar9[0x17] = 800;
  piVar9[0x1a] = 0;
  piVar9[0x1c] = param_3;
  *piVar9 = 1;
  piVar9[0x1b] = param_3;
  recovered_10010ea0((long)piVar9,0x12,uVar8,0,0);
  piVar9[0x18] = param_3 + piVar9[0x17];
  *(undefined1 *)(piVar9 + 0x19) = 1;
  recovered_1000fee0(piVar9[4],pbVar1);
  return;
}

#undef DAT_1001f058
#undef DAT_10022aa0
#undef DAT_10022ac8
#undef DAT_10022ae0
#undef DAT_10022b0c
#undef DAT_100230f2
#undef DAT_10023106
#undef _DAT_10023106
#undef local_34

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028092c
#define DAT_0028092c (*(uint8_t *)(0x28092cU))
#undef DAT_10023040
#define DAT_10023040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59aaU)))
#undef DAT_10023048
#define DAT_10023048 (*(uint *)(((uintptr_t)pf_module_state + 0x59b2U)))
#undef DAT_100230e8
#define DAT_100230e8 (*(int *)(((uintptr_t)pf_module_state + 0x5a52U)))
#undef DAT_100230f2
#define DAT_100230f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a5cU)))
#undef DAT_10023106
#define DAT_10023106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a70U)))
#undef DAT_100238ec
#define DAT_100238ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6256U)))
#undef DAT_100238f2
#define DAT_100238f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_100238f8
#define DAT_100238f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6262U)))
#undef DAT_1002390e
#define DAT_1002390e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6278U)))
#undef DAT_10023910
#define DAT_10023910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627aU)))
#undef DAT_10023912
#define DAT_10023912 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627cU)))
#undef DAT_10023913
#define DAT_10023913 (*(byte *)(((uintptr_t)pf_module_state + 0x627dU)))
#undef DAT_10023914
#define DAT_10023914 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627eU)))
#undef DAT_10023916
#define DAT_10023916 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6280U)))
#undef DAT_10023918
#define DAT_10023918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6282U)))
#undef DAT_10023919
#define DAT_10023919 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6283U)))
#undef DAT_1002391a
#define DAT_1002391a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6284U)))
#undef DAT_1002391b
#define DAT_1002391b (*(byte *)(((uintptr_t)pf_module_state + 0x6285U)))
#undef DAT_1002391c
#define DAT_1002391c (*(ushort *)(((uintptr_t)pf_module_state + 0x6286U)))
#undef DAT_1002391e
#define DAT_1002391e (*(ushort *)(((uintptr_t)pf_module_state + 0x6288U)))
#undef DAT_10023920
#define DAT_10023920 (*(ushort *)(((uintptr_t)pf_module_state + 0x628aU)))
#undef DAT_10023922
#define DAT_10023922 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x628cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028092c
#define _DAT_0028092c (*(uint *)(0x28092cU))
#undef _DAT_10023106
#define _DAT_10023106 (*(uint *)(((uintptr_t)pf_module_state + 0x5a70U)))
#undef _DAT_100238f8
#define _DAT_100238f8 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6262U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10010c10(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulong in_RCX;
  undefined8 *in_R8;
  uint uVar4;
  byte bVar5;

  bVar5 = param_1[0xd];
  if ((bVar5 & 4) == 0) {
    if ((bVar5 & 0x10) == 0) {
      uVar3 = *(uint *)(param_1 + 4);
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      in_RCX = (ulong)uVar3;
      uVar3 = (bVar5 & 1) + param_2 + (uint)((bVar5 >> 1 & 1) != 0) + uVar3;
      bVar5 = 0x14;
      uVar4 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 8);
      uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      bVar5 = 4;
      uVar3 = 0;
    }
    recovered_10001c80((undefined8 *)&DAT_100238ec,(undefined8 *)&DAT_100230f2,6,in_RCX,in_R8);
    recovered_10001c80((undefined8 *)&DAT_100238f2,(undefined8 *)&DAT_10023040,6,in_RCX,in_R8);
    _DAT_100238f8 = 8;
    recovered_1000fb60(0x28,6,DAT_10023048,
                       (ulong)(_DAT_10023106 >> 0x18 | (_DAT_10023106 & 0xff0000) >> 8 |
                               (_DAT_10023106 & 0xff00) << 8 | _DAT_10023106 << 0x18));
    recovered_10002980((byte *)&DAT_1002390e,0,0x14);
    PF_PART1(DAT_1002390e, 0) = param_1[2];
    PF_PART1(DAT_1002390e, 1) = param_1[3];
    PF_PART1(DAT_10023910, 0) = *param_1;
    PF_PART1(DAT_10023910, 1) = param_1[1];
    DAT_10023912 = (undefined1)(uVar4 >> 0x18);
    DAT_10023913 = (byte)(uVar4 >> 0x10);
    PF_PART1(DAT_10023914, 0) = (undefined1)(uVar4 >> 8);
    PF_PART1(DAT_10023914, 1) = (undefined1)uVar4;
    PF_PART1(DAT_10023916, 0) = (undefined1)(uVar3 >> 0x18);
    PF_PART1(DAT_10023916, 1) = (byte)(uVar3 >> 0x10);
    DAT_10023918 = (undefined1)(uVar3 >> 8);
    DAT_10023919 = (undefined1)uVar3;
    DAT_1002391a = 0x50;
    uVar1 = (ushort)(_DAT_10023106 >> 0x10);
    for (uVar3 = (uint)(ushort)(DAT_1002391e << 8 | DAT_1002391e >> 8) +
                 (uint)(ushort)(DAT_1002391c << 8 | DAT_1002391c >> 8) +
                 (uint)bVar5 +
                 (uVar3 & 0xffff) +
                 ((uint)PF_PART1(DAT_10023916, 1) | (uVar3 >> 0x18) << 8) + (uVar4 & 0xffff) +
                 ((uint)DAT_10023913 | (uVar4 >> 0x18) << 8) +
                 (uint)CONCAT11((undefined1)DAT_10023910,PF_PART1(DAT_10023910, 1)) +
                 (uint)CONCAT11((undefined1)DAT_1002390e,PF_PART1(DAT_1002390e, 1)) +
                 (uint)(ushort)(uVar1 << 8 | uVar1 >> 8) +
                 (DAT_10023048 & 0xffff) + (DAT_10023048 >> 0x10) +
                 (uint)(ushort)((ushort)_DAT_10023106 << 8 | (ushort)_DAT_10023106 >> 8) +
                 (uint)(ushort)(DAT_10023920 << 8 | DAT_10023920 >> 8) + 0x501a; 0xffff < uVar3;
        uVar3 = (uVar3 & 0xffff) + (uVar3 >> 0x10)) {
    }
    DAT_1002391e = ~(ushort)uVar3 << 8 | (ushort)~(ushort)uVar3 >> 8;
    DAT_1002391b = bVar5;
    recovered_10002980(&DAT_10023922,0,6);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x12f < _DAT_00280808 && ((code *)(ulong)_DAT_0028092c != (code *)0x0)) &&
        (iVar2 = (*(code *)(ulong)_DAT_0028092c)(&DAT_100238ec,0x3c), iVar2 != 0)))) {
      DAT_100230e8 = DAT_100230e8 + 1;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028092c
#undef DAT_10023040
#undef DAT_10023048
#undef DAT_100230e8
#undef DAT_100230f2
#undef DAT_10023106
#undef DAT_100238ec
#undef DAT_100238f2
#undef DAT_100238f8
#undef DAT_1002390e
#undef DAT_10023910
#undef DAT_10023912
#undef DAT_10023913
#undef DAT_10023914
#undef DAT_10023916
#undef DAT_10023918
#undef DAT_10023919
#undef DAT_1002391a
#undef DAT_1002391b
#undef DAT_1002391c
#undef DAT_1002391e
#undef DAT_10023920
#undef DAT_10023922
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028092c
#undef _DAT_10023106
#undef _DAT_100238f8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028092c
#define DAT_0028092c (*(uint8_t *)(0x28092cU))
#undef DAT_10023040
#define DAT_10023040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59aaU)))
#undef DAT_10023048
#define DAT_10023048 (*(uint *)(((uintptr_t)pf_module_state + 0x59b2U)))
#undef DAT_100230e8
#define DAT_100230e8 (*(int *)(((uintptr_t)pf_module_state + 0x5a52U)))
#undef DAT_100238ec
#define DAT_100238ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6256U)))
#undef DAT_100238f2
#define DAT_100238f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_100238f8
#define DAT_100238f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6262U)))
#undef DAT_1002390e
#define DAT_1002390e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6278U)))
#undef DAT_10023910
#define DAT_10023910 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x627aU)))
#undef DAT_10023912
#define DAT_10023912 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627cU)))
#undef DAT_10023913
#define DAT_10023913 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627dU)))
#undef DAT_10023914
#define DAT_10023914 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627eU)))
#undef DAT_10023916
#define DAT_10023916 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6280U)))
#undef DAT_10023918
#define DAT_10023918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6282U)))
#undef DAT_10023919
#define DAT_10023919 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6283U)))
#undef DAT_1002391a
#define DAT_1002391a (*(char *)(((uintptr_t)pf_module_state + 0x6284U)))
#undef DAT_1002391b
#define DAT_1002391b (*(byte *)(((uintptr_t)pf_module_state + 0x6285U)))
#undef DAT_1002391c
#define DAT_1002391c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6286U)))
#undef DAT_1002391e
#define DAT_1002391e (*(ushort *)(((uintptr_t)pf_module_state + 0x6288U)))
#undef DAT_10023922
#define DAT_10023922 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x628cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028092c
#define _DAT_0028092c (*(uint *)(0x28092cU))
#undef _DAT_100238f8
#define _DAT_100238f8 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6262U)))
#undef _DAT_10023922
#define _DAT_10023922 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x628cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010ea0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10010ea0(long param_1,byte param_2,undefined4 param_3,uint param_4,uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 in_register_00000084 = 0;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;

  puVar12 = (undefined8 *)CONCAT44(in_register_00000084,param_5);
  bVar3 = (param_2 & 2) >> 1;
  uVar8 = param_5 + (uint)bVar3 * 4 + 0x36;
  if (uVar8 < 0x801) {
    uVar6 = (uint)bVar3 * 4 + 0x14;
    iVar13 = param_5 + (uint)bVar3 * 4;
    uVar14 = iVar13 + 0x14;
    uVar4 = 0x4000 - *(int *)(param_1 + 0x34);
    uVar7 = 0xffff;
    if (uVar4 < 0xffff) {
      uVar7 = (ulong)uVar4;
    }
    uVar9 = uVar7;
    recovered_10001c80((undefined8 *)&DAT_100238ec,(undefined8 *)(param_1 + 8),6,uVar7,puVar12);
    recovered_10001c80((undefined8 *)&DAT_100238f2,(undefined8 *)&DAT_10023040,6,uVar9,puVar12);
    _DAT_100238f8 = 8;
    recovered_1000fb60(iVar13 + 0x28U & 0xffff,6,DAT_10023048,(ulong)*(uint *)(param_1 + 0x10));
    uVar9 = (ulong)uVar6;
    recovered_10002980((byte *)&DAT_1002390e,0,uVar9);
    DAT_1002390e = *(ushort *)(param_1 + 0x16) << 8 | *(ushort *)(param_1 + 0x16) >> 8;
    PF_PART1(DAT_10023910, 0) = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x14) >> 8);
    PF_PART1(DAT_10023910, 1) = (undefined1)*(undefined2 *)(param_1 + 0x14);
    DAT_10023912 = (undefined1)((uint)param_3 >> 0x18);
    DAT_10023913 = (undefined1)((uint)param_3 >> 0x10);
    PF_PART1(DAT_10023914, 0) = (undefined1)((uint)param_3 >> 8);
    PF_PART1(DAT_10023914, 1) = (undefined1)param_3;
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    DAT_1002391a = (char)uVar6 << 2;
    PF_PART1(DAT_10023916, 0) = (undefined1)((uint)uVar1 >> 0x18);
    PF_PART1(DAT_10023916, 1) = (undefined1)((uint)uVar1 >> 0x10);
    DAT_10023918 = (undefined1)((uint)uVar1 >> 8);
    DAT_10023919 = (undefined1)uVar1;
    PF_PART1(DAT_1002391c, 0) = (undefined1)(uVar7 >> 8);
    PF_PART1(DAT_1002391c, 1) = (undefined1)uVar7;
    if ((param_2 & 2) != 0) {
      _DAT_10023922 = 0xb4050402;
    }
    DAT_1002391b = param_2;
    if (param_5 != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x40);
      puVar15 = (undefined8 *)((long)&DAT_1002390e + uVar9);
      uVar6 = 0x8000 - param_4;
      uVar4 = param_5;
      if (uVar6 < param_5) {
        uVar4 = uVar6;
      }
      recovered_10001c80(puVar15,(undefined8 *)((ulong)param_4 + (long)puVar2),(ulong)uVar4,uVar9,
                         puVar12);
      if (uVar6 < param_5) {
        recovered_10001c80((undefined8 *)((long)puVar15 + (ulong)uVar4),puVar2,
                           (ulong)(param_5 - uVar4),uVar9,puVar12);
      }
    }
    uVar6 = (uint)((ulong)uVar14 & 0xffff);
    uVar4 = (DAT_10023048 >> 0x10) + uVar6 +
            (DAT_10023048 & 0xffff) + (*(uint *)(param_1 + 0x10) >> 0x10) +
            (*(uint *)(param_1 + 0x10) & 0xffff) + 6;
    uVar9 = 0;
    if (1 < (ushort)uVar14) {
      uVar10 = ((ulong)uVar14 & 0xffff) - 2;
      if (uVar10 < 2) {
        uVar9 = 0;
      }
      else {
        uVar11 = (uVar10 >> 1) + 1 & 0xfffffffffffffffe;
        uVar9 = 0;
        do {
          uVar4 = (uint)(ushort)(*(ushort *)((long)&DAT_10023910 + uVar9) << 8 |
                                *(ushort *)((long)&DAT_10023910 + uVar9) >> 8) +
                  (ushort)(*(ushort *)((long)&DAT_1002390e + uVar9) << 8 |
                          *(ushort *)((long)&DAT_1002390e + uVar9) >> 8) + uVar4;
          uVar9 = uVar9 + 4;
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
      }
      if ((uVar10 & 2) == 0) {
        uVar4 = uVar4 + (ushort)(*(ushort *)((long)&DAT_1002390e + uVar9) << 8 |
                                *(ushort *)((long)&DAT_1002390e + uVar9) >> 8);
        uVar9 = uVar9 + 2;
      }
    }
    if ((uint)uVar9 < uVar6) {
      uVar4 = uVar4 + (uint)*(byte *)((long)&DAT_1002390e + (uVar9 & 0xffffffff)) * 0x100;
    }
    for (; 0xffff < uVar4; uVar4 = (uVar4 & 0xffff) + (uVar4 >> 0x10)) {
    }
    DAT_1002391e = ~(ushort)uVar4 << 8 | (ushort)~(ushort)uVar4 >> 8;
    *(int *)(param_1 + 0x38) = (int)uVar7;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    if (uVar8 < 0x3c) {
      recovered_10002980(&DAT_100238ec + uVar8,0,(ulong)(0x1a - uVar14));
      uVar8 = 0x3c;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x12f < _DAT_00280808 && ((code *)(ulong)_DAT_0028092c != (code *)0x0)) &&
        (uVar5 = (*(code *)(ulong)_DAT_0028092c)(&DAT_100238ec,uVar8), (int)uVar5 != 0)))) {
      DAT_100230e8 = DAT_100230e8 + 1;
      return CONCAT71((int7)((ulong)uVar5 >> 8),1);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028092c
#undef DAT_10023040
#undef DAT_10023048
#undef DAT_100230e8
#undef DAT_100238ec
#undef DAT_100238f2
#undef DAT_100238f8
#undef DAT_1002390e
#undef DAT_10023910
#undef DAT_10023912
#undef DAT_10023913
#undef DAT_10023914
#undef DAT_10023916
#undef DAT_10023918
#undef DAT_10023919
#undef DAT_1002391a
#undef DAT_1002391b
#undef DAT_1002391c
#undef DAT_1002391e
#undef DAT_10023922
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028092c
#undef _DAT_100238f8
#undef _DAT_10023922

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011200
 */

void recovered_10011200(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;

  iVar1 = param_1[7];
  uVar2 = param_1[0x14];
  bVar4 = *(byte *)((long)param_1 + 0x56);
  iVar6 = (uint)*(byte *)(param_1 + 0x15) + (uint)bVar4 + uVar2 + iVar1;
  if (iVar6 - param_2 < 0) {
    *(undefined1 *)((long)param_1 + 0x5a) = 1;
  }
  else {
    if (iVar1 - param_2 < 0) {
      uVar5 = param_2 - iVar1;
      if (*(byte *)(param_1 + 0x15) != 0) {
        *(undefined1 *)(param_1 + 0x15) = 0;
        uVar5 = uVar5 - 1;
      }
      if ((uVar2 < uVar5) && (uVar5 = uVar2, iVar6 == param_2 && bVar4 == 1)) {
        *(undefined1 *)((long)param_1 + 0x56) = 0;
        *(undefined1 *)(param_1 + 0x16) = 1;
        bVar4 = 0;
      }
      param_1[0x12] = param_1[0x12] + uVar5 & 0x7fff;
      param_1[0x13] = param_1[0x13] - uVar5;
      param_1[0x14] = uVar2 - uVar5;
      param_1[7] = param_2;
      param_1[0x1a] = 0;
      param_1[0x17] = 400;
      if ((uVar2 - uVar5 == 0) && (bVar4 == 0)) {
        uVar3 = 0;
      }
      else {
        param_1[0x18] = param_4 + 400;
        uVar3 = 1;
      }
      *(undefined1 *)(param_1 + 0x19) = uVar3;
      param_1[0x1c] = param_4;
    }
    param_1[8] = param_3;
    if ((char)param_1[0x16] == '\x01') {
      iVar1 = *param_1;
      if (iVar1 == 4) {
        *param_1 = 0;
        param_1[0xd] = 0;
        param_1[0x13] = 0;
        *(undefined1 *)(param_1 + 0x19) = 0;
      }
      else if (iVar1 == 7) {
        *param_1 = 8;
        param_1[0x1b] = param_4;
      }
      else if (iVar1 == 5) {
        *param_1 = (uint)*(byte *)((long)param_1 + 0x59) * 2 + 6;
        param_1[0x1b] = param_4;
      }
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011320
 */

void recovered_10011320(long param_1,int param_2,uint param_3,long param_4,uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 in_register_00000084 = 0;
  uint uVar4;

  uVar4 = param_2 - param_3;
  uVar1 = param_5;
  if (uVar4 < param_5) {
    uVar1 = uVar4;
  }
  lVar2 = param_4;
  uVar3 = param_5;
  recovered_10001c80((undefined8 *)((ulong)param_3 + param_1),(undefined8 *)param_4,(ulong)uVar1,
                     param_4,(undefined8 *)CONCAT44(in_register_00000084,param_5));
  if (uVar4 < param_5) {
    recovered_10001c80((undefined8 *)param_1,(undefined8 *)(param_4 + (ulong)uVar1),
                       (ulong)(param_5 - uVar1),lVar2,
                       (undefined8 *)CONCAT44(in_register_00000084,uVar3));
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011390
 */

void recovered_10011390(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  uVar5 = *param_1;
  if ((uVar5 < 9) && ((0x103U >> (uVar5 & 0x1f) & 1) != 0)) {
    if ((uVar5 == 1) && (*(char *)((long)param_1 + 0x5a) != '\0')) {
      *(undefined1 *)((long)param_1 + 0x5a) = 0;
    }
  }
  else {
    bVar2 = false;
    if (*(char *)((long)param_1 + 0x57) == '\0') {
      uVar5 = param_1[0x14];
      uVar4 = param_1[8] - uVar5;
      if (param_1[8] < uVar5) {
        uVar4 = 0;
      }
      uVar6 = 0x2da0 - uVar5;
      if (0x2da0 < uVar5) {
        uVar6 = 0;
      }
      if (uVar4 <= 0x2da0 - uVar5) {
        uVar6 = uVar4;
      }
      if (param_1[0x13] - uVar5 < uVar6) {
        uVar6 = param_1[0x13] - uVar5;
      }
      if (param_1[9] <= uVar6) {
        uVar6 = param_1[9];
      }
      if (uVar6 != 0) {
        uVar3 = recovered_10010ea0((long)param_1,0x18,param_1[7] + uVar5,
                                   uVar5 + param_1[0x12] & 0x7fff,uVar6);
        if ((char)uVar3 == '\0') {
          bVar2 = false;
        }
        else {
          uVar6 = uVar6 + param_1[0x14];
          param_1[0x14] = uVar6;
          cVar1 = (char)param_1[0x19];
          while( true ) {
            if (cVar1 == '\0') {
              param_1[0x18] = param_1[0x17] + param_2;
              *(undefined1 *)(param_1 + 0x19) = 1;
            }
            uVar5 = param_1[8] - uVar6;
            if (param_1[8] < uVar6) {
              uVar5 = 0;
            }
            uVar4 = 0x2da0 - uVar6;
            if (0x2da0 < uVar6) {
              uVar4 = 0;
            }
            if (uVar5 <= 0x2da0 - uVar6) {
              uVar4 = uVar5;
            }
            if (param_1[0x13] - uVar6 < uVar4) {
              uVar4 = param_1[0x13] - uVar6;
            }
            if (param_1[9] <= uVar4) {
              uVar4 = param_1[9];
            }
            bVar2 = true;
            if ((uVar4 == 0) ||
               (uVar3 = recovered_10010ea0((long)param_1,0x18,param_1[7] + uVar6,
                                           uVar6 + param_1[0x12] & 0x7fff,uVar4),
               (char)uVar3 == '\0')) break;
            uVar6 = uVar4 + param_1[0x14];
            param_1[0x14] = uVar6;
            cVar1 = (char)param_1[0x19];
          }
        }
      }
      if ((*(char *)((long)param_1 + 0x55) == '\x01') && (param_1[0x13] == param_1[0x14])) {
        *(undefined2 *)((long)param_1 + 0x56) = 0x101;
        recovered_10010ea0((long)param_1,0x11,param_1[0x13] + param_1[7],0,0);
        if ((char)param_1[0x19] == '\0') {
          param_1[0x18] = param_1[0x17] + param_2;
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
        if (*param_1 == 3) {
          *param_1 = 4;
        }
        else {
          if (*param_1 != 2) {
            return;
          }
          *param_1 = 5;
        }
        param_1[0x1b] = param_2;
        return;
      }
    }
    if ((!bVar2) && (*(char *)((long)param_1 + 0x5a) != '\0')) {
      recovered_10010ea0((long)param_1,0x10,
                         (uint)*(byte *)((long)param_1 + 0x56) + (uint)(byte)param_1[0x15] +
                         param_1[0x14] + param_1[7],0,0);
      return;
    }
  }
  return;
}


#undef DAT_1001dfa0
#define DAT_1001dfa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90aU)))
#undef DAT_1001e588
#define DAT_1001e588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xef2U)))
#undef str_1001db2e
#define str_1001db2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x498U)))
#undef str_1001de10
#define str_1001de10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77aU)))
#undef str_1001de40
#define str_1001de40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7aaU)))
#undef str_1001de80
#define str_1001de80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eaU)))
#undef str_1001e74d
#define str_1001e74d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10b7U)))
#define local_48 (*(undefined8 (*)[9])(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100115a0
 */

void recovered_100115a0(long param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 in_RCX;
  undefined8 *in_R8;
  undefined8 in_R9;
  uint uVar7;
  uint uVar8;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  puVar1 = *(undefined8 **)(param_1 + 0x4d0);
  recovered_1000bd40((long)local_48,0x10);
  local_34 = CONCAT31(PF_PART3(local_34, 1),0x14);
  recovered_10001c80(puVar1,(undefined8 *)&local_34,1,in_RCX,in_R8);
  recovered_10001c80((undefined8 *)((long)puVar1 + 1),local_48,0x10,in_RCX,in_R8);
  lVar4 = recovered_10003720(((uintptr_t)pf_module_state + 0x77aU));
  uVar8 = (uint)lVar4;
  local_34 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  recovered_10001c80((undefined8 *)((long)puVar1 + 0x11),(undefined8 *)&local_34,4,in_RCX,in_R8);
  uVar7 = 0x15;
  if (uVar8 < 0x1fec) {
    if (uVar8 != 0) {
      recovered_10001c80((undefined8 *)((long)puVar1 + 0x15),(undefined8 *)str_1001de10,
                         (ulong)(uVar8 & 0x1fff),in_RCX,in_R8);
    }
    uVar7 = uVar8 + 0x15;
  }
  uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x4a2U));
  uVar3 = (uint)uVar5;
  local_34 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  if (uVar7 - 0x1ffd < 4 || 0x1feb < uVar8) {
    bVar2 = true;
  }
  else {
    recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&local_34,4,in_RCX,
                       in_R8);
    uVar8 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    bVar2 = true;
    if (uVar3 <= uVar8) {
      if (uVar3 != 0) {
        recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),
                           (undefined8 *)(str_1001db2e + 10),uVar5 & 0xffffffff,
                           in_RCX,in_R8);
      }
      uVar7 = uVar7 + uVar3;
      bVar2 = false;
    }
  }
  uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x7aaU));
  uVar8 = (uint)uVar5;
  local_34 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if ((bVar2) || (uVar7 - 0x1ffd < 4)) {
    bVar2 = true;
  }
  else {
    recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&local_34,4,in_RCX,
                       in_R8);
    uVar3 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    bVar2 = true;
    if (uVar8 <= uVar3) {
      if (uVar8 != 0) {
        recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)str_1001de40,
                           uVar5 & 0xffffffff,in_RCX,in_R8);
      }
      uVar7 = uVar7 + uVar8;
      bVar2 = false;
    }
  }
  uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x7aaU));
  uVar8 = (uint)uVar5;
  local_34 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if ((bVar2) || (uVar7 - 0x1ffd < 4)) {
    bVar2 = true;
  }
  else {
    recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&local_34,4,in_RCX,
                       in_R8);
    uVar3 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    bVar2 = true;
    if (uVar8 <= uVar3) {
      if (uVar8 != 0) {
        recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)str_1001de40,
                           uVar5 & 0xffffffff,in_RCX,in_R8);
      }
      uVar7 = uVar7 + uVar8;
      bVar2 = false;
    }
  }
  uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x7eaU));
  uVar8 = (uint)uVar5;
  local_34 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if ((bVar2) || (uVar7 - 0x1ffd < 4)) {
    bVar2 = true;
  }
  else {
    recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&local_34,4,in_RCX,
                       in_R8);
    uVar3 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    bVar2 = true;
    if (uVar8 <= uVar3) {
      if (uVar8 != 0) {
        recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)str_1001de80,
                           uVar5 & 0xffffffff,in_RCX,in_R8);
      }
      uVar7 = uVar7 + uVar8;
      bVar2 = false;
    }
  }
  uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x7eaU));
  uVar8 = (uint)uVar5;
  local_34 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if ((bVar2) || (uVar7 - 0x1ffd < 4)) {
    bVar2 = true;
  }
  else {
    recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&local_34,4,in_RCX,
                       in_R8);
    uVar3 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    bVar2 = true;
    if (uVar8 <= uVar3) {
      if (uVar8 != 0) {
        recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)str_1001de80,
                           uVar5 & 0xffffffff,in_RCX,in_R8);
      }
      uVar7 = uVar7 + uVar8;
      bVar2 = false;
    }
  }
  uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x90aU));
  uVar8 = (uint)uVar5;
  local_34 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if ((bVar2) || (uVar7 - 0x1ffd < 4)) {
    bVar2 = true;
  }
  else {
    recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&local_34,4,in_RCX,
                       in_R8);
    uVar3 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    bVar2 = true;
    if (uVar8 <= uVar3) {
      if (uVar8 != 0) {
        recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&DAT_1001dfa0,
                           uVar5 & 0xffffffff,in_RCX,in_R8);
      }
      uVar7 = uVar7 + uVar8;
      bVar2 = false;
    }
  }
  uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x90aU));
  uVar8 = (uint)uVar5;
  local_34 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if ((bVar2) || (uVar7 - 0x1ffd < 4)) {
    bVar2 = true;
  }
  else {
    recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&local_34,4,in_RCX,
                       in_R8);
    uVar3 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    bVar2 = true;
    if (uVar8 <= uVar3) {
      if (uVar8 != 0) {
        recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&DAT_1001dfa0,
                           uVar5 & 0xffffffff,in_RCX,in_R8);
      }
      uVar7 = uVar7 + uVar8;
      bVar2 = false;
    }
  }
  uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0xef2U));
  uVar8 = (uint)uVar5;
  local_34 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if ((bVar2) || (uVar7 - 0x1ffd < 4)) {
    bVar2 = true;
  }
  else {
    recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&local_34,4,in_RCX,
                       in_R8);
    uVar3 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    bVar2 = true;
    if (uVar8 <= uVar3) {
      if (uVar8 != 0) {
        recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&DAT_1001e588,
                           uVar5 & 0xffffffff,in_RCX,in_R8);
      }
      uVar7 = uVar7 + uVar8;
      bVar2 = false;
    }
  }
  uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0xef2U));
  uVar8 = (uint)uVar5;
  local_34 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if ((!bVar2) && (3 < uVar7 - 0x1ffd)) {
    recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&local_34,4,in_RCX,
                       in_R8);
    uVar3 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    if (uVar8 <= uVar3) {
      if (uVar8 != 0) {
        recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&DAT_1001e588,
                           uVar5 & 0xffffffff,in_RCX,in_R8);
      }
      uVar8 = uVar7 + uVar8;
      local_34 = local_34 & 0xffffff00;
      uVar7 = 0x2000;
      if (uVar8 != 0x2000) {
        recovered_10001c80((undefined8 *)((ulong)uVar8 + (long)puVar1),(undefined8 *)&local_34,1,
                           in_RCX,in_R8);
        uVar7 = uVar8 + 1;
        local_34 = 0;
        if ((uVar8 & 0xfffffffc) != 0x1ffc) {
          recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar1),(undefined8 *)&local_34,4,
                             in_RCX,in_R8);
          uVar7 = uVar8 + 5;
        }
      }
    }
  }
  *(uint *)(param_1 + 0x4d8) = uVar7;
  *(undefined2 *)(param_1 + 0x4b9) = 0x101;
  *(undefined2 *)(param_1 + 0x828) = 0;
  *(undefined1 *)(param_1 + 0x814) = 0;
  uVar6 = recovered_10011b10(param_1,puVar1,uVar7);
  if ((char)uVar6 == '\0') {
    recovered_1000b130(extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                       in_XMM6_Qa,in_XMM7_Qa,param_1,2,str_1001e74d,in_RCX,in_R8,in_R9);
  }
  return;
}

#undef DAT_1001dfa0
#undef DAT_1001e588
#undef str_1001db2e
#undef str_1001de10
#undef str_1001de40
#undef str_1001de80
#undef str_1001e74d
#undef local_48
#undef local_34

#define local_4f (*(undefined1 *)(pf_stack_frame + 177))
#define local_4e (*(undefined1 *)(pf_stack_frame + 178))
#define local_4d (*(undefined1 *)(pf_stack_frame + 179))
#define local_4c (*(undefined1 *)(pf_stack_frame + 180))
#define local_4b (*(undefined1 *)(pf_stack_frame + 181))
#define local_4a (*(undefined1 *)(pf_stack_frame + 182))
#define local_49 (*(undefined1 *)(pf_stack_frame + 183))
#define local_48 (*(undefined1 *)(pf_stack_frame + 184))
#define local_47 (*(undefined1 *)(pf_stack_frame + 185))
#define uStack_98 (*(undefined8 *)(pf_stack_frame + 104))
#define local_46 (*(undefined1 *)(pf_stack_frame + 186))
#define local_45 (*(undefined1 *)(pf_stack_frame + 187))
#define local_44 (*(undefined1 *)(pf_stack_frame + 188))
#define local_43 (*(undefined1 *)(pf_stack_frame + 189))
#define local_42 (*(undefined1 *)(pf_stack_frame + 190))
#define local_41 (*(undefined1 *)(pf_stack_frame + 191))
#define local_40 (*(undefined1 *)(pf_stack_frame + 192))
#define local_3f (*(undefined1 *)(pf_stack_frame + 193))
#define local_3e (*(undefined1 *)(pf_stack_frame + 194))
#define local_3d (*(undefined1 *)(pf_stack_frame + 195))
#define local_3c (*(undefined1 *)(pf_stack_frame + 196))
#define uStack_77 (*(undefined1 *)(pf_stack_frame + 137))
#define local_3b (*(undefined1 *)(pf_stack_frame + 197))
#define uStack_76 (*(undefined1 *)(pf_stack_frame + 138))
#define local_3a (*(undefined1 *)(pf_stack_frame + 198))
#define uStack_75 (*(undefined1 *)(pf_stack_frame + 139))
#define local_39 (*(undefined1 *)(pf_stack_frame + 199))
#define uStack_71 (*(undefined1 *)(pf_stack_frame + 143))
#define uStack_70 (*(undefined1 *)(pf_stack_frame + 144))
#define uStack_6f (*(undefined1 *)(pf_stack_frame + 145))
#define uStack_6b (*(undefined1 *)(pf_stack_frame + 149))
#define uStack_6a (*(undefined1 *)(pf_stack_frame + 150))
#define uStack_69 (*(undefined1 *)(pf_stack_frame + 151))
#define uStack_67 (*(undefined1 *)(pf_stack_frame + 153))
#define uStack_66 (*(undefined1 *)(pf_stack_frame + 154))
#define uStack_65 (*(undefined1 *)(pf_stack_frame + 155))
#define uStack_64 (*(undefined1 *)(pf_stack_frame + 156))
#define uStack_63 (*(undefined1 *)(pf_stack_frame + 157))
#define uStack_62 (*(undefined1 *)(pf_stack_frame + 158))
#define uStack_61 (*(undefined1 *)(pf_stack_frame + 159))
#define uStack_60 (*(undefined1 *)(pf_stack_frame + 160))
#define uStack_5f (*(undefined1 *)(pf_stack_frame + 161))
#define uStack_5e (*(undefined1 *)(pf_stack_frame + 162))
#define uStack_5d (*(undefined1 *)(pf_stack_frame + 163))
#define uStack_5c (*(undefined1 *)(pf_stack_frame + 164))
#define uStack_5b (*(undefined1 *)(pf_stack_frame + 165))
#define uStack_5a (*(undefined1 *)(pf_stack_frame + 166))
#define uStack_59 (*(undefined1 *)(pf_stack_frame + 167))
#define local_e4 (*(undefined4 *)(pf_stack_frame + 28))
#define local_e0 (*(undefined1 *)(pf_stack_frame + 32))
#define local_df (*(undefined1 *)(pf_stack_frame + 33))
#define local_de (*(undefined1 *)(pf_stack_frame + 34))
#define local_dd (*(undefined1 *)(pf_stack_frame + 35))
#define local_dc (*(uint *)(pf_stack_frame + 36))
#define local_d8 (*(long *)(pf_stack_frame + 40))
#define local_d0 (*(uint *)(pf_stack_frame + 48))
#define local_cc (*(uint *)(pf_stack_frame + 52))
#define local_c8 (*(uint *)(pf_stack_frame + 56))
#define local_c4 (*(uint *)(pf_stack_frame + 60))
#define local_c0 (*(uint *)(pf_stack_frame + 64))
#define local_bc (*(uint *)(pf_stack_frame + 68))
#define local_b8 (*(uint *)(pf_stack_frame + 72))
#define local_b4 (*(byte (*)[180])(pf_stack_frame + 76))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 96))
#define local_90 (*(undefined1 *)(pf_stack_frame + 112))
#define local_8f (*(undefined1 *)(pf_stack_frame + 113))
#define local_8e (*(undefined1 *)(pf_stack_frame + 114))
#define local_8d (*(undefined1 *)(pf_stack_frame + 115))
#define local_8c (*(undefined1 *)(pf_stack_frame + 116))
#define local_8b (*(undefined1 *)(pf_stack_frame + 117))
#define local_8a (*(undefined1 *)(pf_stack_frame + 118))
#define local_89 (*(undefined1 *)(pf_stack_frame + 119))
#define local_80 (*(undefined4 *)(pf_stack_frame + 128))
#define local_78 (*(undefined1 *)(pf_stack_frame + 136))
#define local_74 (*(undefined1 *)(pf_stack_frame + 140))
#define local_73 (*(undefined1 *)(pf_stack_frame + 141))
#define local_72 (*(undefined1 *)(pf_stack_frame + 142))
#define local_6e (*(undefined1 *)(pf_stack_frame + 146))
#define local_6d (*(undefined1 *)(pf_stack_frame + 147))
#define local_6c (*(undefined1 *)(pf_stack_frame + 148))
#define local_68 (*(undefined1 *)(pf_stack_frame + 152))
#define local_58 (*(undefined1 *)(pf_stack_frame + 168))
#define local_57 (*(undefined1 *)(pf_stack_frame + 169))
#define local_56 (*(undefined1 *)(pf_stack_frame + 170))
#define local_55 (*(undefined1 *)(pf_stack_frame + 171))
#define local_54 (*(undefined1 *)(pf_stack_frame + 172))
#define local_53 (*(undefined1 *)(pf_stack_frame + 173))
#define local_52 (*(undefined1 *)(pf_stack_frame + 174))
#define local_51 (*(undefined1 *)(pf_stack_frame + 175))
#define local_50 (*(undefined1 *)(pf_stack_frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011b10
 */

undefined8 recovered_10011b10(long param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;

  puVar2 = *(uint **)(param_1 + 8);
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  if (puVar2[1] != *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  if (0x8898 < param_3) {
    return 0;
  }
  if ((*puVar2 & 0xfffffffe) != 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2fc) - 2U < 2) {
    uVar11 = *(uint *)(param_1 + 0x490);
    uVar12 = 0x10;
    uVar9 = 0xf;
  }
  else {
    uVar11 = 0x10;
    uVar12 = 8;
    uVar9 = 7;
    iVar5 = 1;
    if (*(int *)(param_1 + 0x2fc) == 1) goto LAB_10011b9f;
    uVar11 = 0;
    uVar9 = 7;
  }
  iVar5 = 5;
LAB_10011b9f:
  uVar9 = uVar12 - (iVar5 + param_3 & uVar9);
  if (3 < uVar9) {
    uVar12 = 0;
  }
  uVar12 = uVar12 | uVar9;
  local_cc = param_3 + uVar12 + uVar11 + 5;
  puVar10 = (uint *)(ulong)(0x8000 - puVar2[0x13]);
  if (0x8000 - puVar2[0x13] < local_cc) {
    return 0;
  }
  puVar3 = *(uint **)(param_1 + 0x148);
  local_dc = param_3 + uVar12 + 1;
  local_d0 = param_3 + 5 + uVar12;
  *(undefined1 *)puVar3 = 0;
  *(char *)((long)puVar3 + 1) = (char)(local_dc >> 0x10);
  *(char *)((long)puVar3 + 2) = (char)(local_dc >> 8);
  *(char *)((long)puVar3 + 3) = (char)local_dc;
  puVar2 = puVar3 + 1;
  *(char *)(puVar3 + 1) = (char)uVar12;
  local_d8 = param_1;
  recovered_10001c80((undefined8 *)((long)puVar3 + 5),param_2,(ulong)param_3,(ulong)local_dc,
                     (undefined8 *)puVar10);
  recovered_1000bd40((long)puVar3 + (ulong)param_3 + 5,(ulong)uVar12);
  uVar9 = local_d0;
  if (*(int *)(local_d8 + 0x2fc) - 2U < 2) {
    uVar1 = *(undefined4 *)(local_d8 + 0x15c);
    uStack_77 = (undefined1)((uint)uVar1 >> 0x10);
    uStack_76 = (undefined1)((uint)uVar1 >> 8);
    local_78 = (undefined1)((uint)uVar1 >> 0x18);
    uStack_75 = (undefined1)uVar1;
    if (*(int *)(local_d8 + 0x300) == 2) {
      recovered_10012860((undefined1 *)(local_d8 + 0x44c),*(uint *)(local_d8 + 0x48c),
                         (long)&local_78,(long)puVar3,local_d0,&local_c8);
    }
    else {
      recovered_100130f0((undefined1 *)(local_d8 + 0x44c),*(uint *)(local_d8 + 0x48c),
                         (long)&local_78,(long)puVar3,local_d0,&local_c8);
    }
    lVar6 = local_d8;
    puVar10 = (uint *)(ulong)uVar9;
    puVar7 = puVar3;
    recovered_100137c0((uint *)(local_d8 + 0x348),(char *)(local_d8 + 0x43c),(long)puVar3,
                       (long)puVar3,(ulong)puVar10);
    recovered_10001c80((undefined8 *)((long)puVar2 + (ulong)local_dc),(undefined8 *)&local_c8,
                       (ulong)uVar11,puVar7,(undefined8 *)puVar10);
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4[0] = 0;
    local_b4[1] = 0;
    local_b4[2] = 0;
    local_b4[3] = 0;
    local_b4[4] = 0;
    local_b4[5] = 0;
    local_b4[6] = 0;
    local_b4[7] = 0;
    local_b4[8] = 0;
    local_b4[9] = 0;
    local_b4[10] = 0;
    local_b4[0xb] = 0;
    local_b4[0xc] = 0;
    local_b4[0xd] = 0;
    local_b4[0xe] = 0;
    local_b4[0xf] = 0;
    local_b4[0x10] = 0;
    local_b4[0x11] = 0;
    local_b4[0x12] = 0;
    local_b4[0x13] = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_8f = 0;
    local_8e = 0;
    local_8d = 0;
    local_8c = 0;
    local_8b = 0;
    local_8a = 0;
    local_89 = 0;
  }
  else {
    lVar6 = local_d8;
    if (*(int *)(local_d8 + 0x2fc) == 1) {
      uVar1 = *(undefined4 *)(local_d8 + 0x15c);
      local_e4 = 0;
      local_e0 = (undefined1)((uint)uVar1 >> 0x18);
      local_df = (undefined1)((uint)uVar1 >> 0x10);
      local_de = (undefined1)((uint)uVar1 >> 8);
      local_dd = (undefined1)uVar1;
      puVar4 = (undefined8 *)(local_d8 + 0x305);
      recovered_1000c1e0(puVar4,0,(undefined8 *)&local_e4,(long)&local_78);
      recovered_100121d0(local_d8 + 0x325,0,&local_e4,(long)puVar3,(long)puVar3,4);
      uVar8 = (ulong)local_dc;
      puVar10 = puVar2;
      recovered_100121d0(puVar4,1,&local_e4,(long)puVar2,(long)puVar2,uVar8);
      local_c8 = CONCAT13(uStack_75,CONCAT12(uStack_76,CONCAT11(uStack_77,local_78))) & 0x3ffffff;
      local_c4 = CONCAT13(local_72,CONCAT12(local_73,CONCAT11(local_74,uStack_75))) >> 2 & 0x3ffff03
      ;
      local_c0 = CONCAT13(uStack_6f,CONCAT12(uStack_70,CONCAT11(uStack_71,local_72))) >> 4 &
                 0x3ffc0ff;
      local_bc = CONCAT13(local_6c,CONCAT12(local_6d,CONCAT11(local_6e,uStack_6f))) >> 6 & 0x3f03fff
      ;
      local_b8 = CONCAT13(uStack_69,CONCAT12(uStack_6a,CONCAT11(uStack_6b,local_6c))) >> 8 & 0xfffff
      ;
      recovered_10002980(local_b4,0,0x14);
      local_a0 = CONCAT17(uStack_61,
                          CONCAT16(uStack_62,
                                   CONCAT15(uStack_63,
                                            CONCAT14(uStack_64,
                                                     CONCAT13(uStack_65,
                                                              CONCAT12(uStack_66,
                                                                       CONCAT11(uStack_67,local_68))
                                                             )))));
      uStack_98 = CONCAT17(uStack_59,
                           CONCAT16(uStack_5a,
                                    CONCAT15(uStack_5b,
                                             CONCAT14(uStack_5c,
                                                      CONCAT13(uStack_5d,
                                                               CONCAT12(uStack_5e,
                                                                        CONCAT11(uStack_5f,uStack_60
                                                                                )))))));
      local_80 = 0;
      recovered_100124f0(&local_c8,puVar3,(ulong)local_d0);
      recovered_100125b0(&local_c8,(undefined1 *)((long)puVar2 + uVar8));
      local_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_75 = 0;
      local_74 = 0;
      local_73 = 0;
      local_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      local_6e = 0;
      local_6d = 0;
      local_6c = 0;
      uStack_6b = 0;
      uStack_6a = 0;
      uStack_69 = 0;
      local_68 = 0;
      uStack_67 = 0;
      uStack_66 = 0;
      uStack_65 = 0;
      uStack_64 = 0;
      uStack_63 = 0;
      uStack_62 = 0;
      uStack_61 = 0;
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_5e = 0;
      uStack_5d = 0;
      uStack_5c = 0;
      uStack_5b = 0;
      uStack_5a = 0;
      uStack_59 = 0;
      local_58 = 0;
      local_57 = 0;
      local_56 = 0;
      local_55 = 0;
      local_54 = 0;
      local_53 = 0;
      local_52 = 0;
      local_51 = 0;
      local_50 = 0;
      local_4f = 0;
      local_4e = 0;
      local_4d = 0;
      local_4c = 0;
      local_4b = 0;
      local_4a = 0;
      local_49 = 0;
      local_48 = 0;
      local_47 = 0;
      local_46 = 0;
      local_45 = 0;
      local_44 = 0;
      local_43 = 0;
      local_42 = 0;
      local_41 = 0;
      local_40 = 0;
      local_3f = 0;
      local_3e = 0;
      local_3d = 0;
      local_3c = 0;
      local_3b = 0;
      local_3a = 0;
      local_39 = 0;
      lVar6 = local_d8;
    }
  }
  puVar2 = *(uint **)(lVar6 + 8);
  if (((*puVar2 & 0xfffffffe) == 2) && (*(char *)((long)puVar2 + 0x55) == '\0')) {
    uVar8 = (ulong)local_cc;
    if (local_cc <= 0x8000 - puVar2[0x13]) {
      puVar4 = *(undefined8 **)(puVar2 + 0x10);
      uVar9 = puVar2[0x13] + puVar2[0x12] & 0x7fff;
      uVar12 = 0x8000 - uVar9;
      uVar11 = local_cc;
      if (uVar12 < local_cc) {
        uVar11 = uVar12;
      }
      recovered_10001c80((undefined8 *)((ulong)uVar9 + (long)puVar4),(undefined8 *)puVar3,
                         (ulong)uVar11,uVar8,(undefined8 *)puVar10);
      if (uVar12 < local_cc) {
        recovered_10001c80(puVar4,(undefined8 *)((long)puVar3 + (ulong)uVar11),
                           (ulong)(local_cc - uVar11),uVar8,(undefined8 *)puVar10);
      }
      puVar2[0x13] = puVar2[0x13] + local_cc;
      *(int *)(local_d8 + 0x15c) = *(int *)(local_d8 + 0x15c) + 1;
      return CONCAT71((int7)((ulong)local_d8 >> 8),1);
    }
  }
  return 0;
}

#undef local_4f
#undef local_4e
#undef local_4d
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48
#undef local_47
#undef uStack_98
#undef local_46
#undef local_45
#undef local_44
#undef local_43
#undef local_42
#undef local_41
#undef local_40
#undef local_3f
#undef local_3e
#undef local_3d
#undef local_3c
#undef uStack_77
#undef local_3b
#undef uStack_76
#undef local_3a
#undef uStack_75
#undef local_39
#undef uStack_71
#undef uStack_70
#undef uStack_6f
#undef uStack_6b
#undef uStack_6a
#undef uStack_69
#undef uStack_67
#undef uStack_66
#undef uStack_65
#undef uStack_64
#undef uStack_63
#undef uStack_62
#undef uStack_61
#undef uStack_60
#undef uStack_5f
#undef uStack_5e
#undef uStack_5d
#undef uStack_5c
#undef uStack_5b
#undef uStack_5a
#undef uStack_59
#undef local_e4
#undef local_e0
#undef local_df
#undef local_de
#undef local_dd
#undef local_dc
#undef local_d8
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_a0
#undef local_90
#undef local_8f
#undef local_8e
#undef local_8d
#undef local_8c
#undef local_8b
#undef local_8a
#undef local_89
#undef local_80
#undef local_78
#undef local_74
#undef local_73
#undef local_72
#undef local_6e
#undef local_6d
#undef local_6c
#undef local_68
#undef local_58
#undef local_57
#undef local_56
#undef local_55
#undef local_54
#undef local_53
#undef local_52
#undef local_51
#undef local_50

#define local_78 (*(undefined4 *)(pf_stack_frame + 24))
#define local_74 (*(uint (*)[29])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100121d0
 */

void recovered_100121d0(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,
                       long param_5,ulong param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;

  if (param_6 != 0) {
    uVar23 = 0;
    do {
      uVar22 = param_6 - uVar23;
      if (0x3f < uVar22) {
        uVar22 = 0x40;
      }
      recovered_1000c1e0(param_1,param_2,param_3,(long)&local_78);
      if (param_6 != uVar23) {
        uVar19 = uVar22 + (uVar22 == 0);
        if (param_6 - uVar23 < 4 || (ulong)(param_5 - param_4) < 0x20) {
          uVar17 = 0;
        }
        else {
          if (param_6 - uVar23 < 0x20) {
            uVar18 = 0;
          }
          else {
            uVar17 = (ulong)((uint)uVar19 & 0x60);
            lVar20 = param_5 + 0x10 + uVar23;
            lVar21 = param_4 + 0x10 + uVar23;
            uVar18 = 0;
            do {
              puVar2 = (uint *)(lVar21 + -0x10 + uVar18);
              uVar3 = puVar2[1];
              uVar4 = puVar2[2];
              uVar5 = puVar2[3];
              puVar1 = (uint *)(lVar21 + uVar18);
              uVar6 = *puVar1;
              uVar7 = puVar1[1];
              uVar8 = puVar1[2];
              uVar9 = puVar1[3];
              uVar10 = *(uint *)((long)local_74 + uVar18);
              uVar11 = *(uint *)((long)local_74 + uVar18 + 4);
              uVar12 = *(uint *)((long)local_74 + uVar18 + 8);
              uVar13 = *(uint *)((long)local_74 + uVar18 + 0xc);
              uVar14 = *(uint *)((long)local_74 + uVar18 + 0x10);
              uVar15 = *(uint *)((long)local_74 + uVar18 + 0x14);
              uVar16 = *(uint *)((long)local_74 + uVar18 + 0x18);
              puVar1 = (uint *)(lVar20 + -0x10 + uVar18);
              *puVar1 = *puVar2 ^ *(uint *)((long)local_74 + (uVar18 - 4));
              puVar1[1] = uVar3 ^ uVar10;
              puVar1[2] = uVar4 ^ uVar11;
              puVar1[3] = uVar5 ^ uVar12;
              puVar1 = (uint *)(lVar20 + uVar18);
              *puVar1 = uVar6 ^ uVar13;
              puVar1[1] = uVar7 ^ uVar14;
              puVar1[2] = uVar8 ^ uVar15;
              puVar1[3] = uVar9 ^ uVar16;
              uVar18 = uVar18 + 0x20;
            } while (uVar17 != uVar18);
            if (uVar22 == uVar17) goto LAB_10012250;
            uVar18 = uVar17;
            if ((uVar19 & 0x1c) == 0) goto LAB_1001235f;
          }
          uVar17 = (ulong)((uint)uVar19 & 0x7c);
          do {
            *(uint *)(param_5 + uVar23 + uVar18) =
                 *(uint *)((long)local_74 + (uVar18 - 4)) ^ *(uint *)(param_4 + uVar23 + uVar18);
            uVar18 = uVar18 + 4;
          } while (uVar17 != uVar18);
          if (uVar22 == uVar17) goto LAB_10012250;
        }
LAB_1001235f:
        uVar18 = uVar17;
        if ((uVar19 & 1) != 0) {
          *(byte *)(param_5 + uVar17 + uVar23) =
               *(byte *)((long)local_74 + (uVar17 - 4)) ^ *(byte *)(param_4 + uVar17 + uVar23);
          uVar18 = uVar17 | 1;
        }
        if (uVar19 != (uVar17 | 1)) {
          lVar20 = param_5 + 1 + uVar23;
          lVar21 = param_4 + 1 + uVar23;
          do {
            *(byte *)(lVar20 + -1 + uVar18) =
                 *(byte *)((long)local_74 + (uVar18 - 4)) ^ *(byte *)(lVar21 + -1 + uVar18);
            *(byte *)(lVar20 + uVar18) =
                 *(byte *)((long)local_74 + (uVar18 - 3)) ^ *(byte *)(lVar21 + uVar18);
            uVar18 = uVar18 + 2;
          } while (uVar22 != uVar18);
        }
      }
LAB_10012250:
      param_2 = param_2 + 1;
      uVar23 = uVar23 + uVar22;
    } while (uVar23 < param_6);
  }
  return;
}

#undef local_78
#undef local_74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100124f0
 */

void recovered_100124f0(uint *param_1,uint *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 in_RCX;
  undefined8 *in_R8;
  ulong uVar2;

  uVar1 = param_1[0x12];
  if ((ulong)uVar1 != 0) {
    uVar2 = (ulong)(0x10 - uVar1);
    if (param_3 <= 0x10 - uVar1) {
      uVar2 = param_3;
    }
    recovered_10001c80((undefined8 *)((long)param_1 + (ulong)uVar1 + 0x38),(undefined8 *)param_2,
                       uVar2,in_RCX,in_R8);
    uVar1 = param_1[0x12] + (int)uVar2;
    param_1[0x12] = uVar1;
    if (uVar1 < 0x10) {
      return;
    }
    param_3 = param_3 - uVar2;
    param_2 = (uint *)((long)param_2 + uVar2);
    in_RCX = 0x1000000;
    recovered_10013fd0(param_1,param_1 + 0xe,0x10,0x1000000);
    param_1[0x12] = 0;
  }
  if (0xf < param_3) {
    in_RCX = 0x1000000;
    recovered_10013fd0(param_1,param_2,param_3 & 0xfffffffffffffff0,0x1000000);
    param_2 = (uint *)((long)param_2 + (param_3 & 0xfffffffffffffff0));
    param_3 = (ulong)((uint)param_3 & 0xf);
  }
  if (param_3 != 0) {
    recovered_10001c80((undefined8 *)(param_1 + 0xe),(undefined8 *)param_2,param_3,in_RCX,in_R8);
    param_1[0x12] = (uint)param_3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100125b0
 */

void recovered_100125b0(uint *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;

  uVar6 = param_1[0x12];
  if ((ulong)uVar6 == 0) goto LAB_100126bb;
  *(undefined1 *)((long)param_1 + (ulong)uVar6 + 0x38) = 1;
  if (uVar6 + 1 < 0x10) {
    uVar8 = (ulong)(uVar6 + 1);
    uVar5 = 0x11 - (ulong)(uVar6 + 2);
    uVar13 = uVar8;
    if ((7 < uVar5) &&
       (uVar15 = 0x10 - (ulong)(uVar6 + 2), uVar15 >> 0x20 == 0 && (uint)uVar15 <= -uVar6 - 3)) {
      if (uVar5 < 0x20) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar5 & 0xffffffffffffffe0;
        uVar13 = 0;
        do {
          puVar1 = (undefined8 *)((long)param_1 + uVar13 + uVar8 + 0x38);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)((long)param_1 + uVar13 + uVar8 + 0x48);
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar13 = uVar13 + 0x20;
        } while (uVar15 != uVar13);
        if (uVar5 == uVar15) goto LAB_100126ac;
        if ((uVar5 & 0x18) == 0) {
          uVar13 = uVar15 | uVar8;
          goto LAB_100126a0;
        }
      }
      uVar16 = uVar5 & 0xfffffffffffffff8;
      uVar13 = uVar16 + uVar8;
      do {
        *(undefined8 *)((long)param_1 + uVar15 + uVar8 + 0x38) = 0;
        uVar15 = uVar15 + 8;
      } while (uVar16 != uVar15);
      if (uVar5 == uVar16) goto LAB_100126ac;
    }
LAB_100126a0:
    do {
      *(undefined1 *)((long)(param_1 + 0xe) + uVar13) = 0;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 != 0x10);
  }
LAB_100126ac:
  recovered_10013fd0(param_1,param_1 + 0xe,0x10,0);
LAB_100126bb:
  uVar9 = (param_1[6] >> 0x1a) + param_1[7];
  uVar6 = (uVar9 >> 0x1a) + param_1[8];
  uVar9 = uVar9 & 0x3ffffff;
  uVar7 = uVar6 & 0x3ffffff;
  uVar11 = (uVar6 >> 0x1a) + param_1[9];
  uVar14 = (uVar11 >> 0x1a) * 5 + param_1[5];
  uVar12 = (uVar14 >> 0x1a) + (param_1[6] & 0x3ffffff);
  uVar14 = uVar14 & 0x3ffffff;
  uVar6 = uVar14 + 5;
  uVar3 = (uVar6 >> 0x1a) + uVar12;
  uVar17 = (uVar3 >> 0x1a) + uVar9;
  uVar20 = (uVar17 >> 0x1a) + uVar7;
  uVar18 = uVar20 >> 0x1a;
  uVar2 = (int)(uVar18 + (uVar11 & 0x3ffffff) + -0x4000000) >> 0x1f;
  uVar19 = 0xffffffff - uVar2 & 0x3ffffff;
  uVar3 = uVar12 & uVar2 | uVar3 & uVar19;
  uVar9 = uVar9 & uVar2 | uVar17 & uVar19;
  uVar7 = uVar7 & uVar2 | uVar19 & uVar20;
  uVar6 = uVar3 << 0x1a | uVar14 & uVar2 | uVar6 & uVar19;
  iVar4 = uVar6 + param_1[10];
  uVar5 = (ulong)param_1[0xb] + (ulong)(uVar9 << 0x14 | uVar3 >> 6) +
          (ulong)CARRY4(uVar6,param_1[10]);
  uVar6 = param_1[0xc];
  uVar3 = param_1[0xd];
  *param_2 = (char)iVar4;
  param_2[1] = (char)((uint)iVar4 >> 8);
  param_2[2] = (char)((uint)iVar4 >> 0x10);
  param_2[3] = (char)((uint)iVar4 >> 0x18);
  uVar13 = (uVar5 >> 0x20) + (ulong)uVar6 + (ulong)(uVar7 << 0xe | uVar9 >> 0xc);
  param_2[4] = (char)uVar5;
  param_2[5] = (char)(uVar5 >> 8);
  param_2[6] = (char)(uVar5 >> 0x10);
  param_2[7] = (char)(uVar5 >> 0x18);
  param_2[8] = (char)uVar13;
  param_2[9] = (char)(uVar13 >> 8);
  param_2[10] = (char)(uVar13 >> 0x10);
  param_2[0xb] = (char)(uVar13 >> 0x18);
  lVar10 = (uVar13 >> 0x20) +
           (ulong)uVar3 +
           (ulong)((uVar2 & uVar11 | 0xffffffff - uVar2 & uVar18 + (uVar11 & 0x3ffffff)) << 8 |
                  uVar7 >> 0x12);
  param_2[0xc] = (char)lVar10;
  param_2[0xd] = (char)((ulong)lVar10 >> 8);
  param_2[0xe] = (char)((ulong)lVar10 >> 0x10);
  param_2[0xf] = (char)((ulong)lVar10 >> 0x18);
  lVar10 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar10) = 0;
    *(undefined1 *)((long)param_1 + lVar10 + 1) = 0;
    *(undefined1 *)((long)param_1 + lVar10 + 2) = 0;
    *(undefined1 *)((long)param_1 + lVar10 + 3) = 0;
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x4c);
  return;
}


#define local_228 (*(byte (*)[552])(pf_stack_frame + 24))
#define local_1a0 (*(ulong * *)(pf_stack_frame + 160))
#define local_198 (*(undefined8 * *)(pf_stack_frame + 168))
#define local_190 (*(ulong (*)[50])(pf_stack_frame + 176))
#define local_c8 (*(uint *)(pf_stack_frame + 376))
#define local_bc (*(uint *)(pf_stack_frame + 388))
#define local_78 (*(ulong (*)[15])(pf_stack_frame + 456))
#define local_b8 (*(ulong (*)[23])(pf_stack_frame + 392))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012860
 */

void recovered_10012860(undefined1 *param_1,uint param_2,long param_3,long param_4,uint param_5,
                       ulong *param_6)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;

  puVar6 = (undefined8 *)0xa54ff53a5f1d36f1;
  local_1a0 = param_6;
  local_198 = (undefined8 *)param_4;
  local_bc = param_5;
  if (0x80 < param_2) {
    uVar7 = (ulong)param_2;
    local_190[0] = 0x6a09e667f3bcc908;
    local_190[1] = 0xbb67ae8584caa73b;
    local_190[2] = 0x3c6ef372fe94f82b;
    local_190[3] = 0xa54ff53a5f1d36f1;
    local_190[4] = 0x510e527fade682d1;
    local_190[5] = 0x9b05688c2b3e6c1f;
    local_190[6] = 0x1f83d9abfb41bd6b;
    local_190[7] = 0x5be0cd19137e2179;
    local_c8 = 0;
    local_190[8] = uVar7;
    do {
      uVar8 = (ulong)(0x80 - local_c8);
      if (uVar7 < 0x80 - local_c8) {
        uVar8 = uVar7;
      }
      recovered_10001c80((undefined8 *)((long)local_190 + (ulong)local_c8 + 0x48),
                         (undefined8 *)param_1,uVar8,param_4,puVar6);
      local_c8 = local_c8 + (int)uVar8;
      if (local_c8 == 0x80) {
        recovered_1000b770(local_190,(long)(local_190 + 9));
        local_c8 = 0;
      }
      param_1 = (undefined1 *)((long)param_1 + uVar8);
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
    param_1 = (undefined1 *)local_78;
    recovered_1000c4e0(local_190,(ulong *)param_1);
    param_2 = 0x40;
  }
  puVar6 = (undefined8 *)0xa54ff53a5f1d36f1;
  uVar8 = (ulong)param_2;
  uVar7 = 0;
  do {
    param_4 = CONCAT71((int7)((ulong)param_4 >> 8),0x36);
    bVar3 = 0x36;
    if (uVar7 < uVar8) {
      bVar3 = *(byte *)((long)param_1 + uVar7) ^ 0x36;
    }
    local_228[uVar7] = bVar3;
    if (uVar7 + 1 < uVar8) {
      param_4 = (long)(*(byte *)((long)param_1 + uVar7 + 1) ^ 0x36);
    }
    local_228[uVar7 + 1] = (byte)param_4;
    uVar7 = uVar7 + 2;
  } while (uVar7 != 0x80);
  local_190[0] = 0x6a09e667f3bcc908;
  local_190[1] = 0xbb67ae8584caa73b;
  local_190[2] = 0x3c6ef372fe94f82b;
  local_190[3] = 0xa54ff53a5f1d36f1;
  local_190[4] = 0x510e527fade682d1;
  local_190[5] = 0x9b05688c2b3e6c1f;
  local_190[6] = 0x1f83d9abfb41bd6b;
  local_190[7] = 0x5be0cd19137e2179;
  local_c8 = 0;
  local_190[8] = 0x80;
  recovered_10001c80(local_190 + 9,(undefined8 *)local_228,0x80,param_4,
                     (undefined8 *)0xa54ff53a5f1d36f1);
  uVar7 = (ulong)local_c8;
  uVar1 = local_c8 + 0x80;
  bVar11 = local_c8 == 0;
  local_c8 = uVar1;
  if (bVar11) {
    recovered_1000b770(local_190,(long)(local_190 + 9));
    local_c8 = 0;
  }
  local_190[8] = local_190[8] + 4;
  uVar10 = 4;
  do {
    uVar9 = (ulong)(0x80 - local_c8);
    if (uVar10 < 0x80 - local_c8) {
      uVar9 = uVar10;
    }
    recovered_10001c80((undefined8 *)((long)local_190 + (ulong)local_c8 + 0x48),
                       (undefined8 *)param_3,uVar9,uVar7,puVar6);
    local_c8 = local_c8 + (int)uVar9;
    if (local_c8 == 0x80) {
      recovered_1000b770(local_190,(long)(local_190 + 9));
      local_c8 = 0;
    }
    param_3 = param_3 + uVar9;
    uVar10 = uVar10 - uVar9;
  } while (uVar10 != 0);
  uVar7 = (ulong)local_bc;
  uVar10 = (ulong)local_bc;
  local_190[8] = local_190[8] + uVar10;
  puVar5 = local_198;
  if (local_bc != 0) {
    do {
      uVar9 = (ulong)(0x80 - local_c8);
      if (uVar10 < 0x80 - local_c8) {
        uVar9 = uVar10;
      }
      recovered_10001c80((undefined8 *)((long)local_190 + (ulong)local_c8 + 0x48),puVar5,uVar9,uVar7
                         ,puVar6);
      local_c8 = local_c8 + (int)uVar9;
      if (local_c8 == 0x80) {
        recovered_1000b770(local_190,(long)(local_190 + 9));
        local_c8 = 0;
      }
      puVar5 = (undefined8 *)((long)puVar5 + uVar9);
      uVar10 = uVar10 - uVar9;
    } while (uVar10 != 0);
  }
  puVar4 = local_b8;
  recovered_1000c4e0(local_190,puVar4);
  uVar10 = 0;
  puVar6 = (undefined8 *)0xbb67ae8584caa73b;
  do {
    uVar7 = CONCAT71((int7)(uVar7 >> 8),0x5c);
    bVar3 = 0x5c;
    if (uVar10 < uVar8) {
      bVar3 = *(byte *)((long)param_1 + uVar10) ^ 0x5c;
    }
    local_228[uVar10] = bVar3;
    if (uVar10 + 1 < uVar8) {
      uVar7 = (ulong)(*(byte *)((long)param_1 + uVar10 + 1) ^ 0x5c);
    }
    local_228[uVar10 + 1] = (byte)uVar7;
    uVar10 = uVar10 + 2;
  } while (uVar10 != 0x80);
  local_190[0] = 0x6a09e667f3bcc908;
  local_190[1] = 0xbb67ae8584caa73b;
  local_190[2] = 0x3c6ef372fe94f82b;
  local_190[3] = 0xa54ff53a5f1d36f1;
  local_190[4] = 0x510e527fade682d1;
  local_190[5] = 0x9b05688c2b3e6c1f;
  local_190[6] = 0x1f83d9abfb41bd6b;
  local_190[7] = 0x5be0cd19137e2179;
  local_c8 = 0;
  local_190[8] = 0x80;
  recovered_10001c80(local_190 + 9,(undefined8 *)local_228,0x80,uVar7,
                     (undefined8 *)0xbb67ae8584caa73b);
  uVar7 = (ulong)local_c8;
  uVar1 = local_c8 + 0x80;
  bVar11 = local_c8 == 0;
  local_c8 = uVar1;
  if (bVar11) {
    recovered_1000b770(local_190,(long)(local_190 + 9));
    local_c8 = 0;
  }
  local_190[8] = local_190[8] + 0x40;
  uVar8 = 0x40;
  do {
    uVar10 = (ulong)(0x80 - local_c8);
    if (uVar8 < 0x80 - local_c8) {
      uVar10 = uVar8;
    }
    recovered_10001c80((undefined8 *)((long)local_190 + (ulong)local_c8 + 0x48),puVar4,uVar10,uVar7,
                       puVar6);
    local_c8 = local_c8 + (int)uVar10;
    if (local_c8 == 0x80) {
      recovered_1000b770(local_190,(long)(local_190 + 9));
      local_c8 = 0;
    }
    puVar4 = (ulong *)((long)puVar4 + uVar10);
    uVar8 = uVar8 - uVar10;
  } while (uVar8 != 0);
  recovered_1000c4e0(local_190,local_1a0);
  lVar2 = 0;
  do {
    local_228[lVar2] = 0;
    local_228[lVar2 + 1] = 0;
    local_228[lVar2 + 2] = 0;
    local_228[lVar2 + 3] = 0;
    local_228[lVar2 + 4] = 0;
    local_228[lVar2 + 5] = 0;
    local_228[lVar2 + 6] = 0;
    local_228[lVar2 + 7] = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x80);
  return;
}

#undef local_228
#undef local_1a0
#undef local_198
#undef local_190
#undef local_c8
#undef local_bc
#undef local_78
#undef local_b8

#undef DAT_1001d7c0
#define DAT_1001d7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_1001d7d0
#define DAT_1001d7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef UNK_1001d7c8
#define UNK_1001d7c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef UNK_1001d7d8
#define UNK_1001d7d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef _DAT_1001d7c0
#define _DAT_1001d7c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef _DAT_1001d7d0
#define _DAT_1001d7d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef uRam000000001001d7c8
#define uRam000000001001d7c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef uRam000000001001d7d8
#define uRam000000001001d7d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x142U)))
#define local_138 (*(undefined8 *)(pf_stack_frame + 24))
#define local_128 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_130 (*(undefined8 *)(pf_stack_frame + 32))
#define local_118 (*(ulong *)(pf_stack_frame + 56))
#define local_110 (*(undefined8 (*)[34])(pf_stack_frame + 64))
#define uStack_120 (*(undefined8 *)(pf_stack_frame + 48))
#define local_d0 (*(uint *)(pf_stack_frame + 128))
#define local_bc (*(uint *)(pf_stack_frame + 148))
#define local_78 (*(byte (*)[120])(pf_stack_frame + 216))
#define local_b8 (*(uint (*)[46])(pf_stack_frame + 152))
#define local_98 (*(uint (*)[38])(pf_stack_frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100130f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100130f0(undefined1 *param_1,uint param_2,long param_3,long param_4,uint param_5,
                       uint *param_6)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  byte bVar3;
  uint *puVar4;
  undefined4 in_register_00000084 = 0;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;

  uVar2 = param_4;
  local_bc = param_5;
  if (0x40 < param_2) {
    local_138 = _DAT_1001d7c0;
    uStack_130 = uRam000000001001d7c8;
    local_128 = _DAT_1001d7d0;
    uStack_120 = uRam000000001001d7d8;
    local_d0 = 0;
    uVar7 = (ulong)param_2;
    local_118 = uVar7;
    do {
      uVar5 = (ulong)(0x40 - local_d0);
      if (uVar7 < 0x40 - local_d0) {
        uVar5 = uVar7;
      }
      recovered_10001c80((undefined8 *)((long)local_110 + (ulong)local_d0),(undefined8 *)param_1,
                         uVar5,uVar2,(undefined8 *)CONCAT44(in_register_00000084,param_5));
      local_d0 = local_d0 + (int)uVar5;
      if (local_d0 == 0x40) {
        recovered_1000f460((uint *)&local_138,(long)local_110);
        local_d0 = 0;
      }
      param_1 = (undefined1 *)((long)param_1 + uVar5);
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
    param_1 = (undefined1 *)local_98;
    recovered_1000c7c0((uint *)&local_138,(uint *)param_1);
    param_2 = 0x20;
  }
  uVar5 = (ulong)param_2;
  uVar7 = 0;
  do {
    uVar2 = CONCAT71((int7)(uVar2 >> 8),0x36);
    bVar3 = 0x36;
    if (uVar7 < uVar5) {
      bVar3 = *(byte *)((long)param_1 + uVar7) ^ 0x36;
    }
    local_78[uVar7] = bVar3;
    if (uVar7 + 1 < uVar5) {
      uVar2 = (ulong)(*(byte *)((long)param_1 + uVar7 + 1) ^ 0x36);
    }
    local_78[uVar7 + 1] = (byte)uVar2;
    uVar7 = uVar7 + 2;
  } while (uVar7 != 0x40);
  local_138 = _DAT_1001d7c0;
  uStack_130 = uRam000000001001d7c8;
  local_128 = _DAT_1001d7d0;
  uStack_120 = uRam000000001001d7d8;
  local_d0 = 0;
  local_118 = 0x40;
  recovered_10001c80(local_110,(undefined8 *)local_78,0x40,uVar2,
                     (undefined8 *)CONCAT44(in_register_00000084,param_5));
  uVar2 = (ulong)local_d0;
  uVar1 = local_d0 + 0x40;
  bVar8 = local_d0 == 0;
  local_d0 = uVar1;
  if (bVar8) {
    recovered_1000f460((uint *)&local_138,(long)local_110);
    local_d0 = 0;
  }
  local_118 = local_118 + 4;
  uVar7 = 4;
  do {
    uVar6 = (ulong)(0x40 - local_d0);
    if (uVar7 < 0x40 - local_d0) {
      uVar6 = uVar7;
    }
    recovered_10001c80((undefined8 *)((long)local_110 + (ulong)local_d0),(undefined8 *)param_3,uVar6
                       ,uVar2,(undefined8 *)CONCAT44(in_register_00000084,param_5));
    local_d0 = local_d0 + (int)uVar6;
    if (local_d0 == 0x40) {
      recovered_1000f460((uint *)&local_138,(long)local_110);
      local_d0 = 0;
    }
    param_3 = param_3 + uVar6;
    uVar7 = uVar7 - uVar6;
  } while (uVar7 != 0);
  uVar2 = (ulong)local_bc;
  uVar7 = (ulong)local_bc;
  local_118 = local_118 + uVar7;
  if (local_bc != 0) {
    do {
      uVar6 = (ulong)(0x40 - local_d0);
      if (uVar7 < 0x40 - local_d0) {
        uVar6 = uVar7;
      }
      recovered_10001c80((undefined8 *)((long)local_110 + (ulong)local_d0),(undefined8 *)param_4,
                         uVar6,uVar2,(undefined8 *)CONCAT44(in_register_00000084,param_5));
      local_d0 = local_d0 + (int)uVar6;
      if (local_d0 == 0x40) {
        recovered_1000f460((uint *)&local_138,(long)local_110);
        local_d0 = 0;
      }
      param_4 = param_4 + uVar6;
      uVar7 = uVar7 - uVar6;
    } while (uVar7 != 0);
  }
  puVar4 = local_b8;
  recovered_1000c7c0((uint *)&local_138,puVar4);
  uVar7 = 0;
  do {
    uVar2 = CONCAT71((int7)(uVar2 >> 8),0x5c);
    bVar3 = 0x5c;
    if (uVar7 < uVar5) {
      bVar3 = *(byte *)((long)param_1 + uVar7) ^ 0x5c;
    }
    local_78[uVar7] = bVar3;
    if (uVar7 + 1 < uVar5) {
      uVar2 = (ulong)(*(byte *)((long)param_1 + uVar7 + 1) ^ 0x5c);
    }
    local_78[uVar7 + 1] = (byte)uVar2;
    uVar7 = uVar7 + 2;
  } while (uVar7 != 0x40);
  local_138 = _DAT_1001d7c0;
  uStack_130 = uRam000000001001d7c8;
  local_128 = _DAT_1001d7d0;
  uStack_120 = uRam000000001001d7d8;
  local_d0 = 0;
  local_118 = 0x40;
  recovered_10001c80(local_110,(undefined8 *)local_78,0x40,uVar2,
                     (undefined8 *)CONCAT44(in_register_00000084,param_5));
  uVar2 = (ulong)local_d0;
  uVar1 = local_d0 + 0x40;
  bVar8 = local_d0 == 0;
  local_d0 = uVar1;
  if (bVar8) {
    recovered_1000f460((uint *)&local_138,(long)local_110);
    local_d0 = 0;
  }
  local_118 = local_118 + 0x20;
  uVar7 = 0x20;
  do {
    uVar5 = (ulong)(0x40 - local_d0);
    if (uVar7 < 0x40 - local_d0) {
      uVar5 = uVar7;
    }
    recovered_10001c80((undefined8 *)((long)local_110 + (ulong)local_d0),(undefined8 *)puVar4,uVar5,
                       uVar2,(undefined8 *)CONCAT44(in_register_00000084,param_5));
    local_d0 = local_d0 + (int)uVar5;
    if (local_d0 == 0x40) {
      recovered_1000f460((uint *)&local_138,(long)local_110);
      local_d0 = 0;
    }
    puVar4 = (uint *)((long)puVar4 + uVar5);
    uVar7 = uVar7 - uVar5;
  } while (uVar7 != 0);
  recovered_1000c7c0((uint *)&local_138,param_6);
  return;
}

#undef DAT_1001d7c0
#undef DAT_1001d7d0
#undef UNK_1001d7c8
#undef UNK_1001d7d8
#undef _DAT_1001d7c0
#undef _DAT_1001d7d0
#undef uRam000000001001d7c8
#undef uRam000000001001d7d8
#undef local_138
#undef local_128
#undef uStack_130
#undef local_118
#undef local_110
#undef uStack_120
#undef local_d0
#undef local_bc
#undef local_78
#undef local_b8
#undef local_98

#undef DAT_1001dea0
#define DAT_1001dea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80aU)))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 64))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 68))
#define local_70 (*(ulong *)(pf_stack_frame + 16))
#define local_68 (*(byte *)(pf_stack_frame + 24))
#define local_4c (*(uint *)(pf_stack_frame + 52))
#define local_48 (*(undefined4 *)(pf_stack_frame + 56))
#define local_35 (*(byte *)(pf_stack_frame + 75))
#define local_34 (*(byte *)(pf_stack_frame + 76))
#define local_33 (*(byte *)(pf_stack_frame + 77))
#define local_32 (*(byte *)(pf_stack_frame + 78))
#define local_31 (*(byte *)(pf_stack_frame + 79))
#define bStack_67 (*(byte *)(pf_stack_frame + 25))
#define bStack_66 (*(byte *)(pf_stack_frame + 26))
#define bStack_65 (*(byte *)(pf_stack_frame + 27))
#define bStack_64 (*(byte *)(pf_stack_frame + 28))
#define bStack_63 (*(byte *)(pf_stack_frame + 29))
#define bStack_62 (*(byte *)(pf_stack_frame + 30))
#define bStack_61 (*(byte *)(pf_stack_frame + 31))
#define bStack_60 (*(byte *)(pf_stack_frame + 32))
#define bStack_5f (*(byte *)(pf_stack_frame + 33))
#define bStack_5e (*(byte *)(pf_stack_frame + 34))
#define bStack_5d (*(byte *)(pf_stack_frame + 35))
#define bStack_5b (*(byte *)(pf_stack_frame + 37))
#define bStack_5a (*(byte *)(pf_stack_frame + 38))
#define bStack_59 (*(byte *)(pf_stack_frame + 39))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100137c0
 */

void recovered_100137c0(uint *param_1,char *param_2,long param_3,long param_4,ulong param_5)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  uint *puVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  ulong uVar29;
  ulong uVar30;
  byte bVar31;
  ulong uVar32;

  if (param_5 != 0) {
    uVar32 = 0;
    uVar8 = param_3;
    puVar23 = (uint *)param_5;
    do {
      uVar30 = param_5 - uVar32;
      uVar29 = 0x10;
      if (uVar30 < 0x10) {
        uVar29 = uVar30;
      }
      recovered_10001c80((undefined8 *)&local_48,(undefined8 *)param_2,0x10,uVar8,
                         (undefined8 *)puVar23);
      local_48 = *param_1 ^ local_48;
      uStack_44 = param_1[1] ^ uStack_44;
      uStack_40 = param_1[2] ^ uStack_40;
      uStack_3c = param_1[3] ^ uStack_3c;
      uVar22 = param_1[0x3c];
      if (uVar22 != 0) {
        bStack_59 = (byte)(uStack_3c >> 0x18);
        bStack_5a = (byte)(uStack_3c >> 0x10);
        bStack_5b = (byte)(uStack_3c >> 8);
        local_32 = bStack_5b;
        local_4c = uStack_3c & 0xff;
        bStack_5d = (byte)(uStack_40 >> 0x18);
        bStack_5e = (byte)(uStack_40 >> 0x10);
        bStack_5f = (byte)(uStack_40 >> 8);
        local_34 = bStack_5f;
        bStack_60 = (byte)uStack_40;
        bStack_61 = (byte)(uStack_44 >> 0x18);
        bStack_62 = (byte)(uStack_44 >> 0x10);
        bStack_63 = (byte)(uStack_44 >> 8);
        local_31 = bStack_63;
        bStack_64 = (byte)uStack_44;
        local_33 = bStack_64;
        bStack_65 = (byte)(local_48 >> 0x18);
        bStack_66 = (byte)(local_48 >> 0x10);
        local_68 = (byte)local_48;
        bStack_67 = (byte)(local_48 >> 8);
        uVar8 = 1;
        uVar16 = 0x10;
        do {
          local_70 = (ulong)bStack_5e;
          local_68 = (&DAT_1001dea0)[local_68];
          local_35 = local_68;
          bVar9 = (&DAT_1001dea0)[local_31];
          bVar12 = (&DAT_1001dea0)[local_70];
          bVar13 = (&DAT_1001dea0)[bStack_59];
          local_33 = (&DAT_1001dea0)[local_33];
          local_31 = (&DAT_1001dea0)[local_34];
          bVar19 = (&DAT_1001dea0)[bStack_5a];
          bVar20 = (&DAT_1001dea0)[bStack_65];
          bStack_60 = (&DAT_1001dea0)[bStack_60];
          local_34 = (&DAT_1001dea0)[local_32];
          bStack_5e = (&DAT_1001dea0)[bStack_66];
          bVar6 = (&DAT_1001dea0)[bStack_61];
          PF_PART1(local_4c, 0) = (&DAT_1001dea0)[(byte)local_4c];
          local_32 = (&DAT_1001dea0)[bStack_67];
          bStack_5a = (&DAT_1001dea0)[bStack_62];
          bStack_59 = (&DAT_1001dea0)[bStack_5d];
          if (uVar22 != (uint)uVar8) {
            bVar11 = bVar12 ^ bVar9;
            bVar17 = bVar9 ^ local_68;
            bVar4 = bVar12 ^ bVar17;
            bVar18 = bVar4 ^ bVar13;
            bVar12 = (bVar13 ^ bVar12) * '\x02' ^ bVar17 ^ (char)(bVar13 ^ bVar12) >> 7 & 0x1bU ^
                     bVar13;
            bVar13 = (bVar13 ^ local_68) * '\x02' ^ bVar4 ^ (char)(bVar13 ^ local_68) >> 7 & 0x1bU;
            bVar14 = bVar19 ^ local_31;
            bVar15 = local_31 ^ local_33;
            bVar4 = bVar19 ^ bVar15;
            bVar21 = bVar4 ^ bVar20;
            bVar19 = (bVar20 ^ bVar19) * '\x02' ^ bVar15 ^ (char)(bVar20 ^ bVar19) >> 7 & 0x1bU ^
                     bVar20;
            bVar20 = (bVar20 ^ local_33) * '\x02' ^ bVar4 ^ (char)(bVar20 ^ local_33) >> 7 & 0x1bU;
            bVar24 = bStack_5e ^ local_34;
            bVar25 = local_34 ^ bStack_60;
            bVar26 = bStack_5e ^ bVar25;
            bVar4 = bVar26 ^ bVar6;
            bStack_5e = (bVar6 ^ bStack_5e) * '\x02' ^ bVar25 ^
                        (char)(bVar6 ^ bStack_5e) >> 7 & 0x1bU ^ bVar6;
            bVar6 = (bVar6 ^ bStack_60) * '\x02' ^ bVar26 ^ (char)(bVar6 ^ bStack_60) >> 7 & 0x1bU;
            bVar26 = bStack_5a ^ local_32;
            bVar27 = local_32 ^ (byte)local_4c;
            bVar28 = bStack_5a ^ bVar27;
            bVar31 = bVar28 ^ bStack_59;
            bStack_5a = (bStack_59 ^ bStack_5a) * '\x02' ^ bVar27 ^
                        (char)(bStack_59 ^ bStack_5a) >> 7 & 0x1bU ^ bStack_59;
            bStack_59 = (bStack_59 ^ (byte)local_4c) * '\x02' ^ bVar28 ^
                        (char)(bStack_59 ^ (byte)local_4c) >> 7 & 0x1bU;
            local_68 = bVar17 * '\x02' ^ local_68 ^ (char)bVar17 >> 7 & 0x1bU ^ bVar18;
            bVar9 = bVar11 * '\x02' ^ bVar9 ^ (char)bVar11 >> 7 & 0x1bU ^ bVar18;
            local_33 = bVar15 * '\x02' ^ local_33 ^ (char)bVar15 >> 7 & 0x1bU ^ bVar21;
            local_31 = bVar14 * '\x02' ^ local_31 ^ (char)bVar14 >> 7 & 0x1bU ^ bVar21;
            bStack_60 = bVar25 * '\x02' ^ bStack_60 ^ (char)bVar25 >> 7 & 0x1bU ^ bVar4;
            local_34 = bVar24 * '\x02' ^ local_34 ^ (char)bVar24 >> 7 & 0x1bU ^ bVar4;
            PF_PART1(local_4c, 0) = bVar27 * '\x02' ^ (byte)local_4c ^ (char)bVar27 >> 7 & 0x1bU ^ bVar31;
            local_32 = bVar26 * '\x02' ^ local_32 ^ (char)bVar26 >> 7 & 0x1bU ^ bVar31;
          }
          uVar5 = (ulong)uVar16;
          local_68 = local_68 ^ *(byte *)((long)param_1 + uVar5);
          bStack_67 = bVar9 ^ *(byte *)((long)param_1 + uVar5 + 1);
          bStack_66 = bVar12 ^ *(byte *)((long)param_1 + uVar5 + 2);
          bStack_65 = bVar13 ^ *(byte *)((long)param_1 + uVar5 + 3);
          local_33 = local_33 ^ *(byte *)((long)param_1 + uVar5 + 4);
          local_31 = local_31 ^ *(byte *)((long)param_1 + uVar5 + 5);
          bStack_62 = bVar19 ^ *(byte *)((long)param_1 + uVar5 + 6);
          bStack_61 = bVar20 ^ *(byte *)((long)param_1 + uVar5 + 7);
          bStack_60 = bStack_60 ^ *(byte *)((long)param_1 + uVar5 + 8);
          local_34 = local_34 ^ *(byte *)((long)param_1 + uVar5 + 9);
          bStack_5e = bStack_5e ^ *(byte *)((long)param_1 + uVar5 + 10);
          bStack_5d = bVar6 ^ *(byte *)((long)param_1 + uVar5 + 0xb);
          bVar9 = (byte)local_4c ^ *(byte *)((long)param_1 + uVar5 + 0xc);
          local_4c = (uint)bVar9;
          local_32 = local_32 ^ *(byte *)((long)param_1 + uVar5 + 0xd);
          bStack_5a = bStack_5a ^ *(byte *)((long)param_1 + uVar5 + 0xe);
          bStack_59 = bStack_59 ^ *(byte *)((long)param_1 + uVar5 + 0xf);
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulong)uVar7;
          uVar16 = uVar16 + 0x10;
        } while (uVar7 <= uVar22);
        local_48 = CONCAT13(bStack_65,CONCAT12(bStack_66,CONCAT11(bStack_67,local_68)));
        uStack_44 = CONCAT13(bStack_61,CONCAT12(bStack_62,CONCAT11(local_31,local_33)));
        uStack_40 = CONCAT13(bStack_5d,CONCAT12(bStack_5e,CONCAT11(local_34,bStack_60)));
        uStack_3c = CONCAT13(bStack_59,CONCAT12(bStack_5a,CONCAT11(local_32,bVar9)));
        puVar23 = param_1;
      }
      if (param_5 != uVar32) {
        uVar8 = uVar29 + (uVar29 == 0);
        if (uVar30 < 4 || (ulong)(param_4 - param_3) < 0x10) {
          uVar30 = 0;
        }
        else {
          if (uVar30 < 0x10) {
            uVar5 = 0;
          }
          else {
            uVar30 = (ulong)((uint)uVar8 & 0x10);
            puVar2 = (uint *)(param_3 + uVar32);
            uVar22 = puVar2[1];
            uVar16 = puVar2[2];
            uVar7 = puVar2[3];
            puVar3 = (uint *)(param_4 + uVar32);
            *puVar3 = *puVar2 ^ local_48;
            puVar3[1] = uVar22 ^ uStack_44;
            puVar3[2] = uVar16 ^ uStack_40;
            puVar3[3] = uVar7 ^ uStack_3c;
            if (uVar8 == uVar30) goto LAB_10013ee0;
            uVar5 = uVar30;
            if ((uVar8 & 0xc) == 0) goto LAB_10013e6b;
          }
          uVar30 = (ulong)((uint)uVar8 & 0x1c);
          do {
            uVar22 = *(uint *)((long)&local_48 + uVar5) ^ *(uint *)(param_3 + uVar32 + uVar5);
            puVar23 = (uint *)(ulong)uVar22;
            *(uint *)(param_4 + uVar32 + uVar5) = uVar22;
            uVar5 = uVar5 + 4;
          } while (uVar30 != uVar5);
          if (uVar29 == uVar30) goto LAB_10013ee0;
        }
LAB_10013e6b:
        uVar5 = uVar30;
        if ((uVar8 & 1) != 0) {
          *(byte *)(param_4 + uVar30 + uVar32) =
               *(byte *)((long)&local_48 + uVar30) ^ *(byte *)(param_3 + uVar30 + uVar32);
          uVar5 = uVar30 | 1;
        }
        if (uVar8 != (uVar30 | 1)) {
          uVar8 = param_4 + 1 + uVar32;
          lVar10 = param_3 + 1 + uVar32;
          do {
            *(byte *)((uVar8 - 1) + uVar5) =
                 *(byte *)((long)&local_48 + uVar5) ^ *(byte *)(lVar10 + -1 + uVar5);
            *(byte *)(uVar8 + uVar5) =
                 *(byte *)((long)&local_48 + uVar5 + 1) ^ *(byte *)(lVar10 + uVar5);
            uVar5 = uVar5 + 2;
          } while (uVar29 != uVar5);
        }
      }
LAB_10013ee0:
      pcVar1 = param_2 + 0xf;
      *pcVar1 = *pcVar1 + '\x01';
      if (*pcVar1 == '\0') {
        pcVar1 = param_2 + 0xe;
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 == '\0') {
          pcVar1 = param_2 + 0xd;
          *pcVar1 = *pcVar1 + '\x01';
          if (*pcVar1 == '\0') {
            pcVar1 = param_2 + 0xc;
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 == '\0') {
              pcVar1 = param_2 + 0xb;
              *pcVar1 = *pcVar1 + '\x01';
              if (*pcVar1 == '\0') {
                pcVar1 = param_2 + 10;
                *pcVar1 = *pcVar1 + '\x01';
                if (*pcVar1 == '\0') {
                  pcVar1 = param_2 + 9;
                  *pcVar1 = *pcVar1 + '\x01';
                  if (*pcVar1 == '\0') {
                    pcVar1 = param_2 + 8;
                    *pcVar1 = *pcVar1 + '\x01';
                    if (*pcVar1 == '\0') {
                      pcVar1 = param_2 + 7;
                      *pcVar1 = *pcVar1 + '\x01';
                      if (*pcVar1 == '\0') {
                        pcVar1 = param_2 + 6;
                        *pcVar1 = *pcVar1 + '\x01';
                        if (*pcVar1 == '\0') {
                          pcVar1 = param_2 + 5;
                          *pcVar1 = *pcVar1 + '\x01';
                          if (*pcVar1 == '\0') {
                            pcVar1 = param_2 + 4;
                            *pcVar1 = *pcVar1 + '\x01';
                            if (*pcVar1 == '\0') {
                              pcVar1 = param_2 + 3;
                              *pcVar1 = *pcVar1 + '\x01';
                              if (*pcVar1 == '\0') {
                                pcVar1 = param_2 + 2;
                                *pcVar1 = *pcVar1 + '\x01';
                                if (*pcVar1 == '\0') {
                                  pcVar1 = param_2 + 1;
                                  *pcVar1 = *pcVar1 + '\x01';
                                  if (*pcVar1 == '\0') {
                                    *param_2 = *param_2 + '\x01';
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar32 = uVar32 + uVar29;
    } while (uVar32 < param_5);
  }
  return;
}

#undef DAT_1001dea0
#undef uStack_40
#undef uStack_3c
#undef local_70
#undef local_68
#undef local_4c
#undef local_48
#undef local_35
#undef local_34
#undef local_33
#undef local_32
#undef local_31
#undef bStack_67
#undef bStack_66
#undef bStack_65
#undef bStack_64
#undef bStack_63
#undef bStack_62
#undef bStack_61
#undef bStack_60
#undef bStack_5f
#undef bStack_5e
#undef bStack_5d
#undef bStack_5b
#undef bStack_5a
#undef bStack_59
#undef uStack_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013fd0
 */

void recovered_10013fd0(uint *param_1,uint *param_2,ulong param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;

  uVar11 = param_1[5];
  uVar2 = param_1[6];
  uVar19 = param_1[7];
  uVar9 = param_1[8];
  uVar16 = param_1[9];
  if (0xf < param_3) {
    uVar13 = (ulong)(param_1[4] * 5);
    uVar1 = param_1[3];
    uVar4 = (ulong)((uintptr_t)(uintptr_t)uVar1 * 5);
    uVar5 = (ulong)param_1[2];
    uVar6 = (ulong)(param_1[2] * 5);
    uVar7 = (ulong)*param_1;
    uVar8 = (ulong)param_1[1];
    do {
      uVar3 = (ulong)((*param_2 & 0x3ffffff) + uVar11);
      uVar12 = (ulong)((*(uint *)((long)param_2 + 3) >> 2 & 0x3ffffff) + uVar2);
      uVar14 = (ulong)((*(uint *)((long)param_2 + 6) >> 4 & 0x3ffffff) + uVar19);
      uVar21 = (ulong)((*(uint *)((long)param_2 + 9) >> 6) + uVar9);
      uVar17 = (ulong)((param_2[3] >> 8 | param_4) + uVar16);
      uVar18 = uVar17 * (param_1[1] * 5) +
               uVar21 * uVar6 + uVar14 * uVar4 + uVar12 * uVar13 + uVar3 * uVar7;
      uVar15 = (uVar18 >> 0x1a & 0xffffffff) +
               uVar17 * uVar6 + uVar21 * uVar4 + uVar14 * uVar13 + uVar12 * uVar7 + uVar3 * uVar8;
      uVar20 = (uVar15 >> 0x1a & 0xffffffff) +
               uVar17 * uVar4 + uVar21 * uVar13 + uVar14 * uVar7 + uVar12 * uVar8 + uVar3 * uVar5;
      uVar10 = (uVar20 >> 0x1a & 0xffffffff) +
               uVar17 * uVar13 + uVar21 * uVar7 + uVar14 * uVar8 + uVar12 * uVar5 + uVar3 * uVar1;
      uVar17 = (uVar10 >> 0x1a & 0xffffffff) +
               uVar17 * uVar7 +
               uVar21 * uVar8 + uVar14 * uVar5 + uVar12 * uVar1 + uVar3 * param_1[4];
      uVar11 = (int)(uVar17 >> 0x1a) * 5 + ((uint)uVar18 & 0x3ffffff);
      uVar2 = (uVar11 >> 0x1a) + ((uint)uVar15 & 0x3ffffff);
      uVar19 = (uint)uVar20 & 0x3ffffff;
      uVar9 = (uint)uVar10 & 0x3ffffff;
      uVar16 = (uint)uVar17 & 0x3ffffff;
      uVar11 = uVar11 & 0x3ffffff;
      param_2 = param_2 + 4;
      param_3 = param_3 - 0x10;
    } while (0xf < param_3);
  }
  param_1[5] = uVar11;
  param_1[6] = uVar2;
  param_1[7] = uVar19;
  param_1[8] = uVar9;
  param_1[9] = uVar16;
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_100184cc
#define DAT_100184cc (*(uint *)(0x100184ccU))
#undef DAT_1001d7c0
#define DAT_1001d7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_1001d7d0
#define DAT_1001d7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef DAT_1001dfa0
#define DAT_1001dfa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90aU)))
#undef DAT_1001dfb0
#define DAT_1001dfb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91aU)))
#undef DAT_100240f0
#define DAT_100240f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a5aU)))
#undef DAT_10024110
#define DAT_10024110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a7aU)))
#undef DAT_10024130
#define DAT_10024130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a9aU)))
#undef DAT_10024164
#define DAT_10024164 (*(uint *)(((uintptr_t)pf_module_state + 0x6aceU)))
#undef DAT_100242a8
#define DAT_100242a8 (*(uint *)(((uintptr_t)pf_module_state + 0x6c12U)))
#undef DAT_100242b0
#define DAT_100242b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c1aU)))
#undef DAT_100242b8
#define DAT_100242b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c22U)))
#undef UNK_1001d7c8
#define UNK_1001d7c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef UNK_1001d7d8
#define UNK_1001d7d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280968
#define _DAT_00280968 (*(uint *)(0x280968U))
#undef _DAT_1001d7c0
#define _DAT_1001d7c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef _DAT_1001d7d0
#define _DAT_1001d7d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef _DAT_100242b0
#define _DAT_100242b0 (*(int *)(((uintptr_t)pf_module_state + 0x6c1aU)))
#undef _DAT_100242b8
#define _DAT_100242b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6c22U)))
#undef str_1001db2e
#define str_1001db2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x498U)))
#undef str_1001e803
#define str_1001e803 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x116dU)))
#undef str_1001e815
#define str_1001e815 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117fU)))
#undef str_1001e82e
#define str_1001e82e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1198U)))
#undef str_1001e84b
#define str_1001e84b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11b5U)))
#undef str_1001e857
#define str_1001e857 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11c1U)))
#undef str_1001e86f
#define str_1001e86f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11d9U)))
#undef str_1001e893
#define str_1001e893 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11fdU)))
#undef str_1001e8a0
#define str_1001e8a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120aU)))
#undef str_1001e8b0
#define str_1001e8b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x121aU)))
#undef str_1001e8d3
#define str_1001e8d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x123dU)))
#undef str_1001e8f6
#define str_1001e8f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1260U)))
#undef str_1001e908
#define str_1001e908 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1272U)))
#undef str_1001e91a
#define str_1001e91a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1284U)))
#undef str_1001e92c
#define str_1001e92c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1296U)))
#undef str_1001e949
#define str_1001e949 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12b3U)))
#undef str_1001e979
#define str_1001e979 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12e3U)))
#undef str_1001e9a6
#define str_1001e9a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1310U)))
#undef str_1001e9b9
#define str_1001e9b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1323U)))
#undef str_1001e9c9
#define str_1001e9c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1333U)))
#undef str_1001ea35
#define str_1001ea35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139fU)))
#undef str_1001ea48
#define str_1001ea48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13b2U)))
#undef str_1001ea6b
#define str_1001ea6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13d5U)))
#undef str_1001ea84
#define str_1001ea84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13eeU)))
#undef str_1001ea9d
#define str_1001ea9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1407U)))
#undef str_1001eac0
#define str_1001eac0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x142aU)))
#undef str_1001ead9
#define str_1001ead9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1443U)))
#undef switchdataD_100184cc
#define switchdataD_100184cc (*(uint *)(0x100184ccU))
#undef uRam000000001001d7c8
#define uRam000000001001d7c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef uRam000000001001d7d8
#define uRam000000001001d7d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x142U)))
#define local_8b8 (*(ulong (*)[279])(pf_stack_frame + 24))
#define local_838 (*(char (*)[2104])(pf_stack_frame + 152))
#define local_818 (*(undefined8 (*)[259])(pf_stack_frame + 184))
#define local_7f9 (*(byte *)(pf_stack_frame + 215))
#define local_7f8 (*(long (*)[255])(pf_stack_frame + 216))
#define local_7d8 (*(undefined1 (*)[2008])(pf_stack_frame + 248))
#define local_7c8 (*(undefined1 (*)[1992])(pf_stack_frame + 264))
#define local_7b8 (*(undefined1 (*)[1976])(pf_stack_frame + 280))
#define local_7a8 (*(undefined1 (*)[1960])(pf_stack_frame + 296))
#define local_758 (*(undefined8 (*)[235])(pf_stack_frame + 376))
#define local_738 (*(uint (*)[462])(pf_stack_frame + 408))
#define local_718 (*(undefined4 *)(pf_stack_frame + 440))
#define local_714 (*(undefined1 *)(pf_stack_frame + 444))
#define local_70c (*(undefined1 *)(pf_stack_frame + 452))
#define local_708 (*(undefined1 *)(pf_stack_frame + 456))
#define local_6f8 (*(undefined1 *)(pf_stack_frame + 472))
#define local_6f7 (*(undefined1 *)(pf_stack_frame + 473))
#define local_6f6 (*(undefined1 *)(pf_stack_frame + 474))
#define local_6f5 (*(undefined1 *)(pf_stack_frame + 475))
#define local_6f4 (*(undefined1 *)(pf_stack_frame + 476))
#define local_6f3 (*(undefined1 *)(pf_stack_frame + 477))
#define local_6f2 (*(undefined1 *)(pf_stack_frame + 478))
#define local_6f1 (*(undefined1 *)(pf_stack_frame + 479))
#define local_6f0 (*(undefined1 *)(pf_stack_frame + 480))
#define local_6ef (*(undefined1 *)(pf_stack_frame + 481))
#define local_6ee (*(undefined1 *)(pf_stack_frame + 482))
#define local_6ed (*(undefined1 *)(pf_stack_frame + 483))
#define local_6ec (*(undefined1 *)(pf_stack_frame + 484))
#define local_6eb (*(undefined1 *)(pf_stack_frame + 485))
#define local_6ea (*(undefined1 *)(pf_stack_frame + 486))
#define local_6e9 (*(undefined1 *)(pf_stack_frame + 487))
#define local_6e8 (*(undefined1 *)(pf_stack_frame + 488))
#define local_6e7 (*(undefined1 *)(pf_stack_frame + 489))
#define local_6e6 (*(undefined1 *)(pf_stack_frame + 490))
#define local_6e5 (*(undefined1 *)(pf_stack_frame + 491))
#define local_6e4 (*(undefined1 *)(pf_stack_frame + 492))
#define local_6e3 (*(undefined1 *)(pf_stack_frame + 493))
#define local_6e2 (*(undefined1 *)(pf_stack_frame + 494))
#define local_6e1 (*(undefined1 *)(pf_stack_frame + 495))
#define local_6e0 (*(undefined1 *)(pf_stack_frame + 496))
#define local_6df (*(undefined1 *)(pf_stack_frame + 497))
#define local_6de (*(undefined1 *)(pf_stack_frame + 498))
#define local_6dd (*(undefined1 *)(pf_stack_frame + 499))
#define local_6dc (*(undefined1 *)(pf_stack_frame + 500))
#define local_6db (*(undefined1 *)(pf_stack_frame + 501))
#define local_6da (*(undefined1 *)(pf_stack_frame + 502))
#define local_6d9 (*(undefined1 *)(pf_stack_frame + 503))
#define local_698 (*(undefined1 (*)[1688])(pf_stack_frame + 568))
#define local_618 (*(undefined8 (*)[195])(pf_stack_frame + 696))
#define local_518 (*(undefined8 * *)(pf_stack_frame + 952))
#define local_510 (*(long *)(pf_stack_frame + 960))
#define local_508 (*(undefined8 * *)(pf_stack_frame + 968))
#define local_500 (*(uint * *)(pf_stack_frame + 976))
#define local_4f8 (*(undefined8 *)(pf_stack_frame + 984))
#define local_4e8 (*(undefined8 *)(pf_stack_frame + 1000))
#define local_4e0 (*(undefined8 *)(pf_stack_frame + 1008))
#define local_4d8 (*(undefined8 *)(pf_stack_frame + 1016))
#define local_4d0 (*(undefined8 *)(pf_stack_frame + 1024))
#define local_4c8 (*(undefined8 *)(pf_stack_frame + 1032))
#define local_4c0 (*(undefined8 *)(pf_stack_frame + 1040))
#define local_4b8 (*(long *)(pf_stack_frame + 1048))
#define local_4b0 (*(undefined8 (*)[150])(pf_stack_frame + 1056))
#define local_430 (*(uint *)(pf_stack_frame + 1184))
#define local_428 (*(uint * *)(pf_stack_frame + 1192))
#define local_420 (*(char * *)(pf_stack_frame + 1200))
#define local_418 (*(uint * *)(pf_stack_frame + 1208))
#define local_410 (*(undefined1 * *)(pf_stack_frame + 1216))
#define local_408 (*(int * *)(pf_stack_frame + 1224))
#define local_400 (*(undefined8 * *)(pf_stack_frame + 1232))
#define local_3f8 (*(ulong *)(pf_stack_frame + 1240))
#define local_3f0 (*(uint * *)(pf_stack_frame + 1248))
#define local_3e8 (*(undefined1 (*)[1000])(pf_stack_frame + 1256))
#define local_3d8 (*(undefined1 (*)[984])(pf_stack_frame + 1272))
#define local_3c8 (*(undefined1 (*)[968])(pf_stack_frame + 1288))
#define local_3a8 (*(undefined1 (*)[936])(pf_stack_frame + 1320))
#define local_398 (*(undefined1 (*)[920])(pf_stack_frame + 1336))
#define local_388 (*(undefined1 (*)[904])(pf_stack_frame + 1352))
#define local_378 (*(undefined1 (*)[888])(pf_stack_frame + 1368))
#define local_368 (*(undefined1 (*)[872])(pf_stack_frame + 1384))
#define local_358 (*(undefined1 (*)[856])(pf_stack_frame + 1400))
#define local_348 (*(undefined1 (*)[840])(pf_stack_frame + 1416))
#define local_338 (*(undefined1 (*)[824])(pf_stack_frame + 1432))
#define local_328 (*(undefined1 (*)[808])(pf_stack_frame + 1448))
#define local_318 (*(undefined1 (*)[792])(pf_stack_frame + 1464))
#define local_308 (*(undefined1 (*)[776])(pf_stack_frame + 1480))
#define local_2f8 (*(undefined1 (*)[760])(pf_stack_frame + 1496))
#define local_2e8 (*(undefined1 (*)[744])(pf_stack_frame + 1512))
#define local_2d8 (*(undefined1 (*)[728])(pf_stack_frame + 1528))
#define local_2c8 (*(undefined1 (*)[712])(pf_stack_frame + 1544))
#define local_2b8 (*(undefined1 (*)[696])(pf_stack_frame + 1560))
#define local_2a8 (*(undefined1 (*)[680])(pf_stack_frame + 1576))
#define local_298 (*(undefined1 (*)[664])(pf_stack_frame + 1592))
#define local_288 (*(undefined1 (*)[648])(pf_stack_frame + 1608))
#define local_278 (*(undefined1 (*)[632])(pf_stack_frame + 1624))
#define local_268 (*(undefined1 (*)[616])(pf_stack_frame + 1640))
#define local_258 (*(undefined1 (*)[600])(pf_stack_frame + 1656))
#define local_248 (*(undefined1 (*)[584])(pf_stack_frame + 1672))
#define local_238 (*(undefined1 (*)[568])(pf_stack_frame + 1688))
#define local_228 (*(undefined1 (*)[552])(pf_stack_frame + 1704))
#define local_218 (*(undefined1 (*)[536])(pf_stack_frame + 1720))
#define local_208 (*(undefined1 (*)[520])(pf_stack_frame + 1736))
#define local_1f8 (*(undefined1 (*)[504])(pf_stack_frame + 1752))
#define local_1e8 (*(uint * *)(pf_stack_frame + 1768))
#define local_1e0 (*(undefined8 *)(pf_stack_frame + 1776))
#define local_1d8 (*(undefined8 *)(pf_stack_frame + 1784))
#define local_1c8 (*(undefined8 *)(pf_stack_frame + 1800))
#define local_1b8 (*(long *)(pf_stack_frame + 1816))
#define local_1b0 (*(undefined8 (*)[54])(pf_stack_frame + 1824))
#define local_170 (*(uint *)(pf_stack_frame + 1888))
#define local_168 (*(undefined8 *)(pf_stack_frame + 1896))
#define local_160 (*(undefined1 *)(pf_stack_frame + 1904))
#define local_15f (*(undefined1 *)(pf_stack_frame + 1905))
#define local_15e (*(undefined1 *)(pf_stack_frame + 1906))
#define local_15d (*(undefined1 *)(pf_stack_frame + 1907))
#define local_15c (*(undefined1 *)(pf_stack_frame + 1908))
#define local_15b (*(undefined1 *)(pf_stack_frame + 1909))
#define local_15a (*(undefined1 *)(pf_stack_frame + 1910))
#define local_159 (*(undefined1 *)(pf_stack_frame + 1911))
#define local_158 (*(undefined1 *)(pf_stack_frame + 1912))
#define local_157 (*(undefined1 *)(pf_stack_frame + 1913))
#define local_156 (*(undefined1 *)(pf_stack_frame + 1914))
#define local_155 (*(undefined1 *)(pf_stack_frame + 1915))
#define local_154 (*(undefined1 *)(pf_stack_frame + 1916))
#define local_153 (*(undefined1 *)(pf_stack_frame + 1917))
#define local_152 (*(undefined1 *)(pf_stack_frame + 1918))
#define local_151 (*(undefined1 *)(pf_stack_frame + 1919))
#define local_150 (*(undefined1 *)(pf_stack_frame + 1920))
#define local_14f (*(undefined1 *)(pf_stack_frame + 1921))
#define local_14e (*(undefined1 *)(pf_stack_frame + 1922))
#define local_14d (*(undefined1 *)(pf_stack_frame + 1923))
#define local_14c (*(undefined1 *)(pf_stack_frame + 1924))
#define local_14b (*(undefined1 *)(pf_stack_frame + 1925))
#define local_14a (*(undefined1 *)(pf_stack_frame + 1926))
#define local_149 (*(byte *)(pf_stack_frame + 1927))
#define local_148 (*(undefined1 *)(pf_stack_frame + 1928))
#define local_147 (*(undefined1 *)(pf_stack_frame + 1929))
#define local_146 (*(undefined1 *)(pf_stack_frame + 1930))
#define local_145 (*(undefined1 *)(pf_stack_frame + 1931))
#define local_144 (*(undefined1 *)(pf_stack_frame + 1932))
#define local_143 (*(undefined1 *)(pf_stack_frame + 1933))
#define local_142 (*(undefined1 *)(pf_stack_frame + 1934))
#define local_141 (*(undefined1 *)(pf_stack_frame + 1935))
#define local_140 (*(undefined1 *)(pf_stack_frame + 1936))
#define local_13f (*(undefined1 *)(pf_stack_frame + 1937))
#define local_13e (*(undefined1 *)(pf_stack_frame + 1938))
#define local_13d (*(undefined1 *)(pf_stack_frame + 1939))
#define local_13c (*(undefined1 *)(pf_stack_frame + 1940))
#define local_13b (*(undefined1 *)(pf_stack_frame + 1941))
#define local_13a (*(undefined1 *)(pf_stack_frame + 1942))
#define local_139 (*(undefined1 *)(pf_stack_frame + 1943))
#define local_138 (*(undefined1 *)(pf_stack_frame + 1944))
#define local_137 (*(undefined1 *)(pf_stack_frame + 1945))
#define local_136 (*(undefined1 *)(pf_stack_frame + 1946))
#define local_135 (*(undefined1 *)(pf_stack_frame + 1947))
#define local_134 (*(undefined1 *)(pf_stack_frame + 1948))
#define local_133 (*(undefined1 *)(pf_stack_frame + 1949))
#define local_132 (*(undefined1 *)(pf_stack_frame + 1950))
#define local_131 (*(undefined1 *)(pf_stack_frame + 1951))
#define local_130 (*(undefined1 *)(pf_stack_frame + 1952))
#define local_12f (*(undefined1 *)(pf_stack_frame + 1953))
#define local_12e (*(undefined1 *)(pf_stack_frame + 1954))
#define local_12d (*(undefined1 *)(pf_stack_frame + 1955))
#define local_12c (*(undefined1 *)(pf_stack_frame + 1956))
#define local_12b (*(undefined1 *)(pf_stack_frame + 1957))
#define local_12a (*(undefined1 *)(pf_stack_frame + 1958))
#define local_129 (*(undefined1 *)(pf_stack_frame + 1959))
#define local_128 (*(undefined1 (*)[296])(pf_stack_frame + 1960))
#define local_123 (*(undefined1 *)(pf_stack_frame + 1965))
#define local_122 (*(undefined1 *)(pf_stack_frame + 1966))
#define local_121 (*(undefined1 *)(pf_stack_frame + 1967))
#define local_120 (*(undefined1 *)(pf_stack_frame + 1968))
#define local_11f (*(undefined1 *)(pf_stack_frame + 1969))
#define local_11e (*(undefined1 *)(pf_stack_frame + 1970))
#define local_11d (*(undefined1 *)(pf_stack_frame + 1971))
#define local_11c (*(undefined1 *)(pf_stack_frame + 1972))
#define local_11b (*(undefined1 *)(pf_stack_frame + 1973))
#define local_11a (*(undefined1 *)(pf_stack_frame + 1974))
#define local_119 (*(undefined1 *)(pf_stack_frame + 1975))
#define local_118 (*(undefined1 *)(pf_stack_frame + 1976))
#define local_117 (*(undefined1 *)(pf_stack_frame + 1977))
#define local_116 (*(undefined1 *)(pf_stack_frame + 1978))
#define local_115 (*(undefined1 *)(pf_stack_frame + 1979))
#define local_114 (*(undefined1 *)(pf_stack_frame + 1980))
#define local_113 (*(undefined1 *)(pf_stack_frame + 1981))
#define local_112 (*(undefined1 *)(pf_stack_frame + 1982))
#define local_111 (*(undefined1 *)(pf_stack_frame + 1983))
#define local_110 (*(undefined1 *)(pf_stack_frame + 1984))
#define local_10f (*(undefined1 *)(pf_stack_frame + 1985))
#define local_10e (*(undefined1 *)(pf_stack_frame + 1986))
#define local_10d (*(undefined1 *)(pf_stack_frame + 1987))
#define local_10c (*(undefined1 *)(pf_stack_frame + 1988))
#define local_10b (*(undefined1 *)(pf_stack_frame + 1989))
#define local_10a (*(undefined1 *)(pf_stack_frame + 1990))
#define local_109 (*(undefined1 *)(pf_stack_frame + 1991))
#define local_108 (*(undefined1 *)(pf_stack_frame + 1992))
#define local_107 (*(undefined1 *)(pf_stack_frame + 1993))
#define local_106 (*(undefined1 *)(pf_stack_frame + 1994))
#define local_105 (*(undefined1 *)(pf_stack_frame + 1995))
#define local_104 (*(undefined1 *)(pf_stack_frame + 1996))
#define local_103 (*(undefined1 *)(pf_stack_frame + 1997))
#define local_102 (*(undefined1 *)(pf_stack_frame + 1998))
#define local_101 (*(undefined1 *)(pf_stack_frame + 1999))
#define local_f8 (*(uint * *)(pf_stack_frame + 2008))
#define local_f0 (*(uint * *)(pf_stack_frame + 2016))
#define local_e8 (*(undefined1 (*)[232])(pf_stack_frame + 2024))
#define local_d8 (*(undefined1 (*)[216])(pf_stack_frame + 2040))
#define local_c8 (*(undefined1 (*)[200])(pf_stack_frame + 2056))
#define local_b8 (*(undefined1 (*)[184])(pf_stack_frame + 2072))
#define local_a0 (*(uint * *)(pf_stack_frame + 2096))
#define local_97 (*(char *)(pf_stack_frame + 2105))
#define local_96 (*(char *)(pf_stack_frame + 2106))
#define local_95 (*(char *)(pf_stack_frame + 2107))
#define local_94 (*(char *)(pf_stack_frame + 2108))
#define local_93 (*(char *)(pf_stack_frame + 2109))
#define local_92 (*(char *)(pf_stack_frame + 2110))
#define local_91 (*(char *)(pf_stack_frame + 2111))
#define local_90 (*(char *)(pf_stack_frame + 2112))
#define local_8f (*(char *)(pf_stack_frame + 2113))
#define local_8e (*(char *)(pf_stack_frame + 2114))
#define local_8d (*(char *)(pf_stack_frame + 2115))
#define local_8c (*(char *)(pf_stack_frame + 2116))
#define local_8b (*(char *)(pf_stack_frame + 2117))
#define local_8a (*(char *)(pf_stack_frame + 2118))
#define local_89 (*(char *)(pf_stack_frame + 2119))
#define local_88 (*(undefined1 *)(pf_stack_frame + 2120))
#define local_87 (*(undefined1 *)(pf_stack_frame + 2121))
#define local_86 (*(undefined1 *)(pf_stack_frame + 2122))
#define local_85 (*(undefined1 *)(pf_stack_frame + 2123))
#define local_84 (*(undefined1 *)(pf_stack_frame + 2124))
#define local_83 (*(undefined1 *)(pf_stack_frame + 2125))
#define local_82 (*(undefined1 *)(pf_stack_frame + 2126))
#define local_81 (*(undefined1 *)(pf_stack_frame + 2127))
#define local_80 (*(undefined1 *)(pf_stack_frame + 2128))
#define local_7f (*(undefined1 *)(pf_stack_frame + 2129))
#define local_7e (*(undefined1 *)(pf_stack_frame + 2130))
#define local_7d (*(undefined1 *)(pf_stack_frame + 2131))
#define local_7c (*(undefined1 *)(pf_stack_frame + 2132))
#define local_7b (*(undefined1 *)(pf_stack_frame + 2133))
#define local_7a (*(undefined1 *)(pf_stack_frame + 2134))
#define local_79 (*(undefined1 *)(pf_stack_frame + 2135))
#define local_78 (*(undefined1 *)(pf_stack_frame + 2136))
#define local_77 (*(undefined1 *)(pf_stack_frame + 2137))
#define local_76 (*(undefined1 *)(pf_stack_frame + 2138))
#define local_75 (*(undefined1 *)(pf_stack_frame + 2139))
#define local_74 (*(undefined1 *)(pf_stack_frame + 2140))
#define local_73 (*(undefined1 *)(pf_stack_frame + 2141))
#define local_72 (*(undefined1 *)(pf_stack_frame + 2142))
#define local_71 (*(undefined1 *)(pf_stack_frame + 2143))
#define local_70 (*(undefined1 *)(pf_stack_frame + 2144))
#define local_6f (*(undefined1 *)(pf_stack_frame + 2145))
#define local_6e (*(undefined1 *)(pf_stack_frame + 2146))
#define local_6d (*(undefined1 *)(pf_stack_frame + 2147))
#define local_6c (*(undefined1 *)(pf_stack_frame + 2148))
#define local_6b (*(undefined1 *)(pf_stack_frame + 2149))
#define local_6a (*(undefined1 *)(pf_stack_frame + 2150))
#define local_69 (*(undefined1 *)(pf_stack_frame + 2151))
#define local_68 (*(char (*)[104])(pf_stack_frame + 2152))
#define local_48 (*(uint *)(pf_stack_frame + 2184))
#define local_44 (*(uint *)(pf_stack_frame + 2188))
#define local_40 (*(uint * *)(pf_stack_frame + 2192))
#define local_31 (*(char *)(pf_stack_frame + 2207))
#define uStack_713 (*(undefined1 *)(pf_stack_frame + 445))
#define uStack_712 (*(undefined1 *)(pf_stack_frame + 446))
#define uStack_711 (*(undefined1 *)(pf_stack_frame + 447))
#define uStack_710 (*(undefined1 *)(pf_stack_frame + 448))
#define uStack_70f (*(undefined1 *)(pf_stack_frame + 449))
#define uStack_70e (*(undefined1 *)(pf_stack_frame + 450))
#define uStack_70d (*(undefined1 *)(pf_stack_frame + 451))
#define uStack_70b (*(undefined1 *)(pf_stack_frame + 453))
#define uStack_70a (*(undefined1 *)(pf_stack_frame + 454))
#define uStack_709 (*(undefined1 *)(pf_stack_frame + 455))
#define uStack_707 (*(undefined1 *)(pf_stack_frame + 457))
#define uStack_706 (*(undefined1 *)(pf_stack_frame + 458))
#define uStack_705 (*(undefined1 *)(pf_stack_frame + 459))
#define uStack_704 (*(undefined1 *)(pf_stack_frame + 460))
#define uStack_703 (*(undefined1 *)(pf_stack_frame + 461))
#define uStack_702 (*(undefined1 *)(pf_stack_frame + 462))
#define uStack_701 (*(undefined1 *)(pf_stack_frame + 463))
#define uStack_700 (*(undefined1 *)(pf_stack_frame + 464))
#define uStack_6ff (*(undefined1 *)(pf_stack_frame + 465))
#define uStack_6fe (*(undefined1 *)(pf_stack_frame + 466))
#define uStack_6fd (*(undefined1 *)(pf_stack_frame + 467))
#define uStack_6fc (*(undefined1 *)(pf_stack_frame + 468))
#define uStack_6fb (*(undefined1 *)(pf_stack_frame + 469))
#define uStack_6fa (*(undefined1 *)(pf_stack_frame + 470))
#define uStack_6f9 (*(undefined1 *)(pf_stack_frame + 471))
#define uStack_4f0 (*(undefined8 *)(pf_stack_frame + 992))
#define uStack_3dc (*(uint *)(pf_stack_frame + 1268))
#define auStack_3b8 (*(undefined1 (*)[952])(pf_stack_frame + 1304))
#define uStack_1d0 (*(undefined8 *)(pf_stack_frame + 1792))
#define uStack_1c0 (*(undefined8 *)(pf_stack_frame + 1808))
#define stack0xfffffffffffffc19 (*(uint64_t *)(pf_stack_frame + 1257))
#define stack0xfffffffffffffc1c (*(uint64_t *)(pf_stack_frame + 1260))
#define stack0xfffffffffffffc20 (*(uint64_t *)(pf_stack_frame + 1264))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10014290(long param_1)

{
  unsigned char pf_stack_frame[2288] __attribute__((aligned(16))) = {0};

  pf_u120 auVar1;
  pf_u112 auVar2;
  pf_u120 auVar3;
  pf_u112 auVar4;
  pf_u120 auVar5;
  pf_u112 auVar6;
  pf_u120 auVar7;
  pf_u112 auVar8;
  pf_u120 auVar9;
  pf_u112 auVar10;
  pf_u120 auVar11;
  pf_u112 auVar12;
  pf_u120 auVar13;
  pf_u112 auVar14;
  pf_u120 auVar15;
  pf_u112 auVar16;
  pf_u120 auVar17;
  pf_u112 auVar18;
  pf_u120 auVar19;
  pf_u112 auVar20;
  pf_u120 auVar21;
  pf_u112 auVar22;
  pf_u120 auVar23;
  pf_u112 auVar24;
  pf_u104 auVar25;
  pf_u104 auVar26;
  pf_u120 auVar27;
  pf_u112 auVar28;
  pf_u120 auVar29;
  pf_u120 auVar30;
  pf_u120 auVar31;
  pf_u120 auVar32;
  pf_u120 auVar33;
  pf_u120 auVar34;
  pf_u120 auVar35;
  pf_u120 auVar36;
  pf_u120 auVar37;
  pf_u120 auVar38;
  pf_u120 auVar39;
  pf_u120 auVar40;
  pf_u120 auVar41;
  pf_u112 auVar42;
  pf_u112 auVar43;
  pf_u120 auVar44;
  pf_u120 auVar45;
  pf_u120 auVar46;
  pf_u120 auVar47;
  pf_u120 auVar48;
  pf_u120 auVar49;
  pf_u120 auVar50;
  pf_u120 auVar51;
  pf_u120 auVar52;
  pf_u120 auVar53;
  pf_u120 auVar54;
  pf_u120 auVar55;
  pf_u120 auVar56;
  pf_u120 auVar57;
  pf_u112 auVar58;
  pf_u104 auVar59;
  pf_u104 auVar60;
  pf_u104 auVar61;
  pf_u120 auVar62;
  pf_u112 auVar63;
  pf_u104 auVar64;
  pf_u104 auVar65;
  pf_u104 auVar66;
  pf_u120 auVar67;
  pf_u112 auVar68;
  pf_u104 auVar69;
  pf_u104 auVar70;
  pf_u104 auVar71;
  pf_u120 auVar72;
  pf_u112 auVar73;
  pf_u104 auVar74;
  pf_u104 auVar75;
  pf_u104 auVar76;
  pf_u120 auVar77;
  pf_u112 auVar78;
  pf_u104 auVar79;
  pf_u104 auVar80;
  pf_u104 auVar81;
  pf_u120 auVar82;
  pf_u112 auVar83;
  pf_u104 auVar84;
  pf_u104 auVar85;
  pf_u104 auVar86;
  pf_u120 auVar87;
  pf_u112 auVar88;
  pf_u104 auVar89;
  pf_u104 auVar90;
  pf_u104 auVar91;
  pf_u120 auVar92;
  pf_u112 auVar93;
  pf_u104 auVar94;
  pf_u104 auVar95;
  pf_u104 auVar96;
  pf_u120 auVar97;
  pf_u112 auVar98;
  pf_u120 auVar99;
  pf_u112 auVar100;
  pf_u120 auVar101;
  pf_u112 auVar102;
  pf_u120 auVar103;
  pf_u112 auVar104;
  pf_u104 auVar105;
  pf_u104 auVar106;
  pf_u104 auVar107;
  pf_u104 auVar108;
  pf_u120 auVar109;
  pf_u120 auVar110;
  pf_u112 auVar111;
  pf_u104 auVar112;
  pf_u120 auVar113;
  pf_u112 auVar114;
  pf_u104 auVar115;
  pf_u120 auVar116;
  pf_u112 auVar117;
  pf_u104 auVar118;
  pf_u120 auVar119;
  pf_u112 auVar120;
  pf_u104 auVar121;
  pf_u120 auVar122;
  pf_u112 auVar123;
  pf_u104 auVar124;
  pf_u120 auVar125;
  pf_u112 auVar126;
  pf_u104 auVar127;
  pf_u120 auVar128;
  pf_u112 auVar129;
  pf_u104 auVar130;
  pf_u120 auVar131;
  pf_u112 auVar132;
  pf_u104 auVar133;
  pf_u120 auVar134;
  pf_u112 auVar135;
  pf_u120 auVar136;
  pf_u112 auVar137;
  pf_u120 auVar138;
  pf_u112 auVar139;
  pf_u120 auVar140;
  pf_u112 auVar141;
  pf_u120 auVar142;
  pf_u120 auVar143;
  pf_u120 auVar144;
  pf_u120 auVar145;
  pf_u120 auVar146;
  pf_u120 auVar147;
  pf_u120 auVar148;
  pf_u120 auVar149;
  pf_u120 auVar150;
  pf_u120 auVar151;
  pf_u120 auVar152;
  pf_u120 auVar153;
  pf_u120 auVar154;
  pf_u120 auVar155;
  pf_u104 auVar156;
  pf_u104 auVar157;
  pf_u104 auVar158;
  pf_u104 auVar159;
  pf_u104 auVar160;
  pf_u104 auVar161;
  pf_u104 auVar162;
  pf_u104 auVar163;
  pf_u104 auVar164;
  pf_u104 auVar165;
  pf_u104 auVar166;
  pf_u104 auVar167;
  pf_u104 auVar168;
  pf_u104 auVar169;
  pf_u104 auVar170;
  pf_u104 auVar171;
  pf_u104 auVar172;
  pf_u104 auVar173;
  pf_u120 auVar174;
  pf_u120 auVar175;
  pf_u120 auVar176;
  pf_u120 auVar177;
  pf_u120 auVar178;
  pf_u120 auVar179;
  pf_u120 auVar180;
  pf_u120 auVar181;
  pf_u120 auVar182;
  pf_u120 auVar183;
  pf_u120 auVar184;
  pf_u120 auVar185;
  pf_u120 auVar186;
  pf_u120 auVar187;
  pf_u120 auVar188;
  pf_u120 auVar189;
  pf_u120 auVar190;
  pf_u120 auVar191;
  pf_u120 auVar192;
  pf_u120 auVar193;
  pf_u120 auVar194;
  pf_u120 auVar195;
  pf_u120 auVar196;
  pf_u120 auVar197;
  pf_u120 auVar198;
  pf_u120 auVar199;
  long lVar200;
  long lVar201;
  long lVar202;
  long lVar203;
  long lVar204;
  long lVar205;
  uint3 uVar206;
  uint128 auVar207;
  uint128 auVar208;
  uint128 auVar209;
  uint128 auVar210;
  uint128 auVar211;
  uint128 auVar212;
  uint128 auVar213;
  uint128 auVar214;
  uint128 auVar215;
  uint128 auVar216;
  uint128 auVar217;
  uint128 auVar218;
  uint128 auVar219;
  uint128 auVar220;
  pf_u120 auVar221;
  unkuint9 Var222;
  pf_u120 auVar223;
  pf_u88 auVar224;
  pf_u120 auVar225;
  pf_u112 auVar226;
  pf_u104 auVar227;
  pf_u120 auVar228;
  pf_u120 auVar229;
  pf_u88 auVar230;
  pf_u120 auVar231;
  pf_u112 auVar232;
  pf_u104 auVar233;
  pf_u120 auVar234;
  pf_u120 auVar235;
  pf_u88 auVar236;
  pf_u120 auVar237;
  pf_u112 auVar238;
  pf_u104 auVar239;
  pf_u120 auVar240;
  pf_u120 auVar241;
  pf_u88 auVar242;
  pf_u120 auVar243;
  pf_u112 auVar244;
  pf_u104 auVar245;
  pf_u120 auVar246;
  pf_u120 auVar247;
  pf_u88 auVar248;
  pf_u120 auVar249;
  pf_u112 auVar250;
  pf_u104 auVar251;
  pf_u120 auVar252;
  pf_u120 auVar253;
  pf_u88 auVar254;
  pf_u120 auVar255;
  pf_u112 auVar256;
  pf_u104 auVar257;
  pf_u120 auVar258;
  pf_u120 auVar259;
  pf_u88 auVar260;
  pf_u120 auVar261;
  pf_u112 auVar262;
  pf_u104 auVar263;
  pf_u120 auVar264;
  pf_u120 auVar265;
  pf_u88 auVar266;
  pf_u120 auVar267;
  pf_u112 auVar268;
  pf_u104 auVar269;
  pf_u120 auVar270;
  pf_u120 auVar271;
  pf_u88 auVar272;
  pf_u120 auVar273;
  pf_u112 auVar274;
  pf_u104 auVar275;
  pf_u120 auVar276;
  pf_u120 auVar277;
  pf_u88 auVar278;
  pf_u120 auVar279;
  pf_u112 auVar280;
  pf_u104 auVar281;
  pf_u120 auVar282;
  pf_u120 auVar283;
  pf_u88 auVar284;
  pf_u120 auVar285;
  pf_u112 auVar286;
  pf_u104 auVar287;
  pf_u120 auVar288;
  pf_u120 auVar289;
  pf_u88 auVar290;
  pf_u120 auVar291;
  pf_u112 auVar292;
  pf_u104 auVar293;
  pf_u104 auVar294;
  pf_u120 auVar295;
  pf_u120 auVar296;
  pf_u88 auVar297;
  pf_u120 auVar298;
  pf_u112 auVar299;
  uint128 auVar300;
  uint128 auVar301;
  uint128 auVar302;
  pf_u96 auVar303;
  pf_u96 auVar304;
  uint6 uVar305;
  byte bVar306;
  byte bVar307;
  bool bVar308;
  char cVar309;
  bool bVar310;
  int iVar311;
  uint *puVar312;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  long lVar313;
  long *plVar314;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  uint *puVar315;
  ulong uVar316;
  uint uVar317;
  ulong uVar318;
  long lVar319;
  char *pcVar320;
  byte bVar321;
  uint uVar322;
  undefined8 *puVar323;
  undefined8 uVar324;
  undefined8 uVar325;
  ulong uVar326;
  ulong uVar327;
  uint *puVar328;
  int *piVar329;
  uint *in_R8;
  uint *puVar330;
  undefined7 uVar331;
  undefined1 *in_R9;
  uint *puVar332;
  uint uVar333;
  long lVar334;
  uint *puVar335;
  undefined8 *puVar336;
  undefined1 uVar341;
  undefined1 uVar343;
  undefined8 in_XMM0_Qa;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;
  undefined8 extraout_XMM0_Qa_01 = 0;
  undefined8 extraout_XMM0_Qa_02 = 0;
  undefined8 extraout_XMM0_Qa_03 = 0;
  undefined8 extraout_XMM0_Qa_04 = 0;
  undefined8 extraout_XMM0_Qa_05 = 0;
  undefined8 extraout_XMM0_Qa_06 = 0;
  undefined8 extraout_XMM0_Qa_07 = 0;
  undefined8 extraout_XMM0_Qa_08 = 0;
  undefined8 extraout_XMM0_Qa_09 = 0;
  undefined8 extraout_XMM0_Qa_10 = 0;
  undefined8 extraout_XMM0_Qa_11 = 0;
  undefined8 extraout_XMM0_Qa_12 = 0;
  undefined8 extraout_XMM0_Qa_13 = 0;
  undefined8 extraout_XMM0_Qa_14 = 0;
  undefined8 extraout_XMM0_Qa_15 = 0;
  undefined8 extraout_XMM0_Qa_16 = 0;
  undefined8 extraout_XMM0_Qa_17 = 0;
  undefined1 uVar344;
  undefined8 extraout_XMM0_Qa_18 = 0;
  undefined8 extraout_XMM0_Qa_19 = 0;
  undefined8 extraout_XMM0_Qa_20 = 0;
  undefined8 extraout_XMM0_Qa_21 = 0;
  undefined8 extraout_XMM0_Qa_22 = 0;
  undefined8 extraout_XMM0_Qa_23 = 0;
  undefined8 extraout_XMM0_Qa_24 = 0;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  uint128 auVar337;
  undefined4 uVar342;
  uint128 auVar338;
  uint128 auVar339;
  uint128 auVar340;
  undefined8 extraout_XMM1_Qa = 0;
  undefined8 extraout_XMM1_Qa_00 = 0;
  undefined8 extraout_XMM1_Qa_01 = 0;
  uint128 in_XMM1;
  uint128 auVar345;
  uint128 auVar346;
  uint128 auVar347;
  undefined8 extraout_XMM1_Qb = 0;
  undefined8 extraout_XMM1_Qb_00 = 0;
  undefined8 extraout_XMM1_Qb_01 = 0;
  undefined2 uVar349;
  undefined8 uVar348;
  uint128 in_XMM2;
  undefined8 uVar350;
  uint128 in_XMM3;
  long in_XMM4_Qa;
  long in_XMM5_Qa;
  byte bVar351;
  long in_XMM6_Qa;
  long in_XMM7_Qa;

  uVar333 = *(uint *)(param_1 + 0x140);
  if (uVar333 < 4) {
    return;
  }
  local_428 = (uint *)(param_1 + 0x160);
  local_420 = (char *)(param_1 + 0x2a0);
  local_418 = (uint *)(param_1 + 0x1ac);
  local_510 = param_1 + 0x189;
  local_410 = (undefined1 *)(param_1 + 0x2b0);
  local_518 = (undefined8 *)(param_1 + 0x169);
  local_400 = (undefined8 *)(param_1 + 0x20);
  local_508 = (undefined8 *)(param_1 + 0x498);
  local_408 = (int *)(param_1 + 0x4dc);
  local_3f0 = (uint *)(param_1 + 0x678);
  puVar315 = (uint *)(param_1 + 0x2fc);
  PF_PART8(auVar339, 0) = in_XMM0_Qa;
  local_500 = puVar315;
  local_f8 = (uint *)param_1;
LAB_10014362:
  puVar336 = local_518;
  if ((char)*(uint *)(param_1 + 0xdec) != '\0') {
    return;
  }
  puVar330 = *(uint **)(param_1 + 0x138);
  local_40 = puVar330;
  if (*(uint *)(param_1 + 0x160) - 2 < 2) {
    if (uVar333 < 0x10) {
      return;
    }
    recovered_10001c80((undefined8 *)local_3e8,(undefined8 *)local_420,0x10,puVar315,
                       (undefined8 *)in_R8);
    in_R8 = (uint *)0x10;
    puVar315 = &local_718;
    recovered_100137c0(local_418,local_3e8,(long)puVar330,(long)puVar315,0x10);
    uVar333 = CONCAT13(PF_PART1(local_718, 3),
                       CONCAT12(PF_PART1(local_718, 2),CONCAT11(PF_PART1(local_718, 1),(byte)local_718)));
    PF_PART1(local_718, 0) = 0;
    PF_PART1(local_718, 1) = 0;
    PF_PART1(local_718, 2) = 0;
    PF_PART1(local_718, 3) = 0;
    local_714 = 0;
    uStack_713 = 0;
    uStack_712 = 0;
    uStack_711 = 0;
    uStack_710 = 0;
    uStack_70f = 0;
    uStack_70e = 0;
    uStack_70d = 0;
    local_70c = 0;
    uStack_70b = 0;
    uStack_70a = 0;
    uStack_709 = 0;
    PF_PART16(local_3e8,0) = ZEXT816(0);
    PF_PART8(auVar339, 0) = extraout_XMM0_Qa;
  }
  else if (*(uint *)(param_1 + 0x160) == 1) {
    uVar333 = *(uint *)(param_1 + 0x158);
    PF_PART4(local_1e0, 0) = 0;
    PF_PART1(local_1e0, 4) = (undefined1)(uVar333 >> 0x18);
    PF_PART1(local_1e0, 5) = (undefined1)(uVar333 >> 0x10);
    PF_PART1(local_1e0, 6) = (undefined1)(uVar333 >> 8);
    PF_PART1(local_1e0, 7) = (undefined1)uVar333;
    in_R9 = (undefined1 *)0x4;
    in_R8 = (uint *)local_3e8;
    recovered_100121d0(local_510,0,&local_1e0,(long)puVar330,(long)local_3e8,4);
    puVar315 = puVar330;
    uVar333 = PF_PART4(local_3e8, 0);
    PF_PART8(auVar339, 0) = extraout_XMM0_Qa_00;
  }
  else {
    uVar333 = *puVar330;
  }
  puVar330 = local_40;
  uVar350 = PF_PART8(in_XMM3, 0);
  uVar348 = PF_PART8(in_XMM2, 0);
  uVar324 = PF_PART8(in_XMM1, 0);
  uVar333 = uVar333 >> 0x18 | (uVar333 & 0xff0000) >> 8 | (uVar333 & 0xff00) << 8 | uVar333 << 0x18;
  if (uVar333 - 0x88b9 < 0xffff774c) {
    pcVar320 = str_1001e803;
LAB_100182c6:
    uVar325 = 2;
    puVar330 = in_R8;
LAB_100182ce:
    recovered_1000b130(PF_PART8(auVar339, 0),uVar324,uVar348,uVar350,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                       in_XMM7_Qa,param_1,uVar325,pcVar320,puVar315,puVar330,in_R9);
    return;
  }
  uVar317 = *local_428;
  puVar315 = (uint *)(ulong)(uVar317 & 0xfffffffe);
  if (((uVar317 & 0xfffffffe) == 2) &&
     (puVar315 = (uint *)(ulong)(uVar333 + 4), (uVar333 + 4 & 0xf) != 0)) {
    pcVar320 = str_1001e815;
    goto LAB_100182c6;
  }
  if (uVar317 - 2 < 2) {
    in_R8 = (uint *)(ulong)(uVar333 + *(uint *)(param_1 + 0x2f4) + 4);
  }
  else if (uVar317 == 1) {
    in_R8 = (uint *)(ulong)(uVar333 + 0x14);
  }
  else {
    in_R8 = (uint *)(ulong)(uVar333 + 4);
  }
  if (*(uint *)(param_1 + 0x140) < (uint)in_R8) {
    return;
  }
  if (uVar317 - 2 < 2) {
    uVar317 = uVar333 + 4;
    local_44 = (uint)in_R8;
    recovered_100137c0(local_418,local_420,(long)local_40,(long)local_40,(ulong)uVar317);
    uVar322 = *(uint *)(param_1 + 0x158);
    PF_PART1(local_718, 1) = (undefined1)(uVar322 >> 0x10);
    PF_PART1(local_718, 2) = (undefined1)(uVar322 >> 8);
    PF_PART1(local_718, 0) = (byte)(uVar322 >> 0x18);
    PF_PART1(local_718, 3) = (byte)uVar322;
    if (*(uint *)(param_1 + 0x164) == 2) {
      in_R9 = local_3e8;
      recovered_10012860(local_410,*(uint *)(param_1 + 0x2f0),(long)&local_718,(long)puVar330,
                         uVar317,in_R9);
      puVar315 = puVar330;
      auVar340 = extraout_XMM0;
    }
    else {
      in_R9 = local_3e8;
      recovered_100130f0(local_410,*(uint *)(param_1 + 0x2f0),(long)&local_718,(long)puVar330,
                         uVar317,in_R9);
      puVar315 = puVar330;
      auVar340 = extraout_XMM0_00;
    }
    PF_PART8(auVar339, 0) = PF_PART8(auVar340, 0);
    uVar317 = *(uint *)(param_1 + 0x2f4);
    if ((ulong)uVar317 != 0) {
      uVar327 = (ulong)uVar333;
      puVar330 = (uint *)((long)local_40 + uVar327 + 4);
      if (uVar317 < 4) {
        uVar318 = 0;
        uVar322 = 0;
LAB_10014a40:
        do {
          PF_PART8(auVar339, 0) = PF_PART8(auVar340, 0);
          bVar321 = (byte)uVar322 | *(byte *)((long)puVar330 + uVar318) ^ local_3e8[uVar318];
          uVar322 = (uint)bVar321;
          uVar318 = uVar318 + 1;
        } while (uVar317 != uVar318);
      }
      else if (uVar317 < 0x20) {
        bVar321 = 0;
        uVar327 = 0;
LAB_100149ea:
        uVar318 = (ulong)(uVar317 & 0xfffffffc);
        auVar339 = ZEXT116(bVar321);
        do {
          auVar339 = auVar339 |
                     ZEXT416(*(uint *)((long)puVar330 + uVar327) ^ *(uint *)(local_3e8 + uVar327));
          uVar327 = uVar327 + 4;
        } while (uVar318 != uVar327);
        PF_PART4(auVar347, 0) = PF_PART4(auVar339, 0) >> 0x10;
        PF_PART4(auVar347, 4) = 0;
        PF_PART4(auVar347, 8) = PF_PART4(auVar339, 8) >> 0x10;
        PF_PART4(auVar347, 12) = PF_PART4(auVar339, 12) >> 0x10;
        in_XMM1 = auVar347 | auVar339;
        PF_PART2(auVar340, 0) = PF_PART2(in_XMM1, 0) >> 8;
        PF_PART2(auVar340, 2) = PF_PART2(in_XMM1, 2) >> 8;
        PF_PART4(auVar340, 4) = 0;
        PF_PART2(auVar340, 8) = PF_PART2(in_XMM1, 8) >> 8;
        PF_PART2(auVar340, 10) = PF_PART2(in_XMM1, 10) >> 8;
        PF_PART2(auVar340, 12) = PF_PART2(in_XMM1, 12) >> 8;
        PF_PART2(auVar340, 14) = PF_PART2(in_XMM1, 14) >> 8;
        auVar340 = auVar340 | in_XMM1;
        PF_PART8(auVar339, 0) = PF_PART8(auVar340, 0);
        uVar322 = PF_PART4(auVar340, 0);
        bVar321 = ((uint8_t *)(void *)&auVar340)[0];
        if ((uVar317 & 0xfffffffc) != uVar317) goto LAB_10014a40;
      }
      else {
        uVar318 = (ulong)(uVar317 & 0xffffffe0);
        auVar339 = (uint128)0x0;
        uVar326 = 0;
        auVar340 = (uint128)0x0;
        do {
          in_XMM2 = *(uint128 *)((long)local_40 + uVar326 + uVar327 + 4) ^
                    *(uint128 *)(local_3e8 + uVar326);
          in_XMM3 = *(uint128 *)((long)local_40 + uVar326 + uVar327 + 0x14) ^
                    *(uint128 *)(local_3d8 + uVar326);
          auVar339 = auVar339 | in_XMM2;
          auVar340 = auVar340 | in_XMM3;
          uVar326 = uVar326 + 0x20;
        } while (uVar318 != uVar326);
        auVar340 = auVar340 | auVar339;
        PF_PART8(auVar337, 0) = PF_PART8(auVar340, 8);
        PF_PART4(auVar337, 8) = PF_PART4(auVar340, 8);
        PF_PART4(auVar337, 12) = PF_PART4(auVar340, 12);
        uVar342 = SUB164(auVar337 | auVar340,4);
        PF_PART4(auVar345, 4) = uVar342;
        PF_PART4(auVar345, 0) = uVar342;
        PF_PART4(auVar345, 8) = uVar342;
        PF_PART4(auVar345, 12) = uVar342;
        auVar345 = auVar345 | auVar337 | auVar340;
        PF_PART4(auVar338, 0) = PF_PART4(auVar345, 0) >> 0x10;
        PF_PART4(auVar338, 4) = PF_PART4(auVar345, 4) >> 0x10;
        PF_PART4(auVar338, 8) = PF_PART4(auVar345, 8) >> 0x10;
        PF_PART4(auVar338, 12) = PF_PART4(auVar345, 12) >> 0x10;
        auVar340 = auVar338 | auVar345;
        PF_PART8(auVar339, 0) = PF_PART8(auVar340, 0);
        PF_PART2(auVar346, 0) = PF_PART2(auVar340, 0) >> 8;
        PF_PART2(auVar346, 2) = PF_PART2(auVar340, 2) >> 8;
        PF_PART2(auVar346, 4) = PF_PART2(auVar340, 4) >> 8;
        PF_PART2(auVar346, 6) = PF_PART2(auVar340, 6) >> 8;
        PF_PART2(auVar346, 8) = PF_PART2(auVar340, 8) >> 8;
        PF_PART2(auVar346, 10) = PF_PART2(auVar340, 10) >> 8;
        PF_PART2(auVar346, 12) = PF_PART2(auVar340, 12) >> 8;
        PF_PART2(auVar346, 14) = PF_PART2(auVar340, 14) >> 8;
        in_XMM1 = auVar346 | auVar340;
        uVar322 = PF_PART4(in_XMM1, 0);
        bVar321 = ((uint8_t *)(void *)&in_XMM1)[0];
        if ((uVar317 & 0xffffffe0) != uVar317) {
          uVar327 = uVar318;
          if ((uVar317 & 0x1c) == 0) goto LAB_10014a40;
          goto LAB_100149ea;
        }
      }
      uVar350 = PF_PART8(in_XMM3, 0);
      uVar348 = PF_PART8(in_XMM2, 0);
      uVar324 = PF_PART8(in_XMM1, 0);
      if (bVar321 != 0) {
        PF_PART16(local_3e8,0) = ZEXT816(0);
        PF_PART16(local_3d8,0) = ZEXT816(0);
        PF_PART16(local_3c8,0) = ZEXT816(0);
        PF_PART16(auStack_3b8,0) = ZEXT816(0);
        goto LAB_100184bf;
      }
    }
    PF_PART16(local_3e8,0) = ZEXT816(0);
    PF_PART16(local_3d8,0) = ZEXT816(0);
    PF_PART16(local_3c8,0) = ZEXT816(0);
    PF_PART16(auStack_3b8,0) = ZEXT816(0);
    in_R8 = (uint *)(ulong)local_44;
  }
  else if (uVar317 == 1) {
    puVar330 = in_R8;
    recovered_1000c1e0(puVar336,0,&local_1e0,(long)&local_718);
    PF_PART8(local_3e8, 0) =
         CONCAT44(CONCAT13(uStack_712,CONCAT12(uStack_713,CONCAT11(local_714,PF_PART1(local_718, 3)))) >> 2
                  ,CONCAT13(PF_PART1(local_718, 3),
                            CONCAT12(PF_PART1(local_718, 2),CONCAT11(PF_PART1(local_718, 1),(byte)local_718)))) &
         0x3ffff0303ffffff;
    PF_PART4(local_3e8, 8) =
         CONCAT13(uStack_70f,CONCAT12(uStack_710,CONCAT11(uStack_711,uStack_712))) >> 4 & 0x3ffc0ff;
    uStack_3dc = CONCAT13(local_70c,CONCAT12(uStack_70d,CONCAT11(uStack_70e,uStack_70f))) >> 6 &
                 0x3f03fff;
    PF_PART4(local_3d8, 0) =
         CONCAT13(uStack_709,CONCAT12(uStack_70a,CONCAT11(uStack_70b,local_70c))) >> 8 & 0xfffff;
    recovered_10002980(local_3d8 + 4,0,0x14);
    auVar340 = auStack_3b8;
    auVar339 = local_3c8;
    local_3c8[9] = uStack_707;
    local_3c8[8] = local_708;
    local_3c8[10] = uStack_706;
    local_3c8[0xb] = uStack_705;
    local_3c8[0xc] = uStack_704;
    local_3c8[0xd] = uStack_703;
    local_3c8[0xe] = uStack_702;
    local_3c8[0xf] = uStack_701;
    auStack_3b8[1] = uStack_6ff;
    auStack_3b8[0] = uStack_700;
    auStack_3b8[2] = uStack_6fe;
    auStack_3b8[3] = uStack_6fd;
    auStack_3b8[4] = uStack_6fc;
    auStack_3b8[5] = uStack_6fb;
    auStack_3b8[6] = uStack_6fa;
    auStack_3b8[7] = uStack_6f9;
    PF_PART8(local_3c8, 0) = PF_PART8(auVar339, 0);
    PF_PART8(auStack_3b8, 8) = PF_PART8(auVar340, 8);
    PF_PART4(local_3a8, 8) = 0;
    recovered_100124f0((uint *)local_3e8,local_40,(ulong)(uVar333 + 4));
    recovered_100125b0((uint *)local_3e8,(undefined1 *)&local_4f8);
    uVar350 = PF_PART8(in_XMM3, 0);
    uVar348 = PF_PART8(in_XMM2, 0);
    uVar324 = PF_PART8(in_XMM1, 0);
    PF_PART1(local_718, 0) = 0;
    PF_PART1(local_718, 1) = 0;
    PF_PART1(local_718, 2) = 0;
    PF_PART1(local_718, 3) = 0;
    local_714 = 0;
    uStack_713 = 0;
    uStack_712 = 0;
    uStack_711 = 0;
    uStack_710 = 0;
    uStack_70f = 0;
    uStack_70e = 0;
    uStack_70d = 0;
    local_70c = 0;
    uStack_70b = 0;
    uStack_70a = 0;
    uStack_709 = 0;
    local_708 = 0;
    uStack_707 = 0;
    uStack_706 = 0;
    uStack_705 = 0;
    uStack_704 = 0;
    uStack_703 = 0;
    uStack_702 = 0;
    uStack_701 = 0;
    uStack_700 = 0;
    uStack_6ff = 0;
    uStack_6fe = 0;
    uStack_6fd = 0;
    uStack_6fc = 0;
    uStack_6fb = 0;
    uStack_6fa = 0;
    uStack_6f9 = 0;
    local_6f8 = 0;
    local_6f7 = 0;
    local_6f6 = 0;
    local_6f5 = 0;
    local_6f4 = 0;
    local_6f3 = 0;
    local_6f2 = 0;
    local_6f1 = 0;
    local_6f0 = 0;
    local_6ef = 0;
    local_6ee = 0;
    local_6ed = 0;
    local_6ec = 0;
    local_6eb = 0;
    local_6ea = 0;
    local_6e9 = 0;
    local_6e8 = 0;
    local_6e7 = 0;
    local_6e6 = 0;
    local_6e5 = 0;
    local_6e4 = 0;
    local_6e3 = 0;
    local_6e2 = 0;
    local_6e1 = 0;
    local_6e0 = 0;
    local_6df = 0;
    local_6de = 0;
    local_6dd = 0;
    local_6dc = 0;
    local_6db = 0;
    local_6da = 0;
    local_6d9 = 0;
    in_R9 = (undefined1 *)(ulong)uVar333;
    pcVar320 = (char *)((long)(local_40 + 1) + (long)in_R9);
    PF_PART8(auVar339, 0) =
         CONCAT17(-(pcVar320[7] == PF_PART1(local_4f8, 7)),
                  CONCAT16(-(pcVar320[6] == PF_PART1(local_4f8, 6)),
                           CONCAT15(-(pcVar320[5] == PF_PART1(local_4f8, 5)),
                                    CONCAT14(-(pcVar320[4] == PF_PART1(local_4f8, 4)),
                                             CONCAT13(-(pcVar320[3] == PF_PART1(local_4f8, 3)),
                                                      CONCAT12(-(pcVar320[2] == PF_PART1(local_4f8, 2)),
                                                               CONCAT11(-(pcVar320[1] ==
                                                                         PF_PART1(local_4f8, 1)),
                                                                        -(*pcVar320 ==
                                                                         (char)local_4f8))))))));
    ((uint8_t *)(void *)&auVar339)[8] = -(pcVar320[8] == (char)uStack_4f0);
    ((uint8_t *)(void *)&auVar339)[9] = -(pcVar320[9] == PF_PART1(uStack_4f0, 1));
    ((uint8_t *)(void *)&auVar339)[10] = -(pcVar320[10] == PF_PART1(uStack_4f0, 2));
    ((uint8_t *)(void *)&auVar339)[0xb] = -(pcVar320[0xb] == PF_PART1(uStack_4f0, 3));
    ((uint8_t *)(void *)&auVar339)[0xc] = -(pcVar320[0xc] == PF_PART1(uStack_4f0, 4));
    ((uint8_t *)(void *)&auVar339)[0xd] = -(pcVar320[0xd] == PF_PART1(uStack_4f0, 5));
    ((uint8_t *)(void *)&auVar339)[0xe] = -(pcVar320[0xe] == PF_PART1(uStack_4f0, 6));
    ((uint8_t *)(void *)&auVar339)[0xf] = -(pcVar320[0xf] == PF_PART1(uStack_4f0, 7));
    if ((ushort)((ushort)(SUB161(auVar339 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar339 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar339 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar339 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar339 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar339 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar339 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar339 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar339 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar339 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar339 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar339 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar339 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar339 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar339 >> 0x77,0) & 1) << 0xe |
                (ushort)(((uint8_t *)(void *)&auVar339)[0xf] >> 7) << 0xf) != 0xffff) {
      puVar315 = local_40;
      param_1 = (long)local_f8;
LAB_100184bf:
      pcVar320 = str_1001e82e;
      uVar325 = 5;
      goto LAB_100182ce;
    }
    puVar315 = local_40 + 1;
    recovered_100121d0(puVar336,1,&local_1e0,(long)puVar315,(long)puVar315,(ulong)in_R9);
    param_1 = (long)local_f8;
    PF_PART8(auVar339, 0) = extraout_XMM0_Qa_01;
  }
  piVar329 = local_408;
  uVar350 = PF_PART8(in_XMM3, 0);
  uVar348 = PF_PART8(in_XMM2, 0);
  uVar324 = PF_PART8(in_XMM1, 0);
  uVar322 = local_40[1];
  uVar317 = *(uint *)(param_1 + 0x158);
  *(uint *)(param_1 + 0x158) = uVar317 + 1;
  if (uVar333 <= (byte)uVar322) {
    pcVar320 = str_1001e84b;
    goto LAB_100182c6;
  }
  uVar333 = uVar333 + ~(uint)(byte)uVar322;
  if (uVar333 == 0) goto switchD_10014c90_caseD_2;
  bVar321 = *(byte *)((long)local_40 + 5);
  if ((bVar321 == 0x1e & (byte)*(uint *)(param_1 + 0x4bc)) == 1) {
    *(undefined1 *)(param_1 + 0x4bc) = 0;
    goto switchD_10014c90_caseD_2;
  }
  uVar322 = (uint)in_R8;
  if (0x61 < bVar321 - 1) {
switchD_10014c90_caseD_6:
    puVar323 = *(undefined8 **)(param_1 + 0x150);
    local_3e8[0] = 3;
    puVar330 = in_R8;
    recovered_10001c80(puVar323,(undefined8 *)local_3e8,1,puVar315,(undefined8 *)in_R8);
    param_1 = (long)local_f8;
    PF_PART4(local_3e8, 0) =
         uVar317 >> 0x18 | (uVar317 & 0xff0000) >> 8 | (uVar317 & 0xff00) << 8 | uVar317 << 0x18;
    recovered_10001c80((undefined8 *)((long)puVar323 + 1),(undefined8 *)local_3e8,4,puVar315,
                       (undefined8 *)puVar330);
    uVar333 = 5;
LAB_100154f8:
    recovered_10011b10(param_1,puVar323,uVar333);
LAB_100158eb:
    goto switchD_10014c90_caseD_2;
  }
  puVar336 = (undefined8 *)((long)local_40 + 5);
  puVar315 = &DAT_100184cc;
  switch((uintptr_t)((uint)bVar321)) {
  case 1:
    ((uint8_t *)(void *)&auVar207)[0xf] = 0;
    PF_PART15(auVar207, 0) = stack0xfffffffffffffc19;
    PF_PART16(local_3e8,0) = auVar207 << 8;
    puVar312 = in_R8;
    recovered_10001c80((undefined8 *)local_3e8,puVar336,1,&DAT_100184cc,
                       (undefined8 *)in_R8);
    puVar330 = local_40;
    PF_PART4(auVar208, 12) = 0;
    PF_PART12(auVar208, 0) = stack0xfffffffffffffc1c;
    PF_PART16(local_3e8,0) = auVar208 << 0x20;
    puVar336 = (undefined8 *)local_3e8;
    if (uVar333 < 5) {
LAB_10014ced:
    }
    else {
      recovered_10001c80((undefined8 *)local_3e8,(undefined8 *)((long)local_40 + 6),4,puVar315,
                         (undefined8 *)puVar312);
      PF_PART4(auVar209, 12) = 0;
      PF_PART12(auVar209, 0) = stack0xfffffffffffffc1c;
      PF_PART16(local_3e8,0) = auVar209 << 0x20;
      if (uVar333 - 5 < 4) goto LAB_10014ced;
      recovered_10001c80((undefined8 *)local_3e8,(undefined8 *)((long)puVar330 + 10),4,puVar315,
                         (undefined8 *)puVar312);
      bVar321 = local_3e8[1];
      bVar351 = local_3e8[2];
      uVar322 = (uint)local_3e8[3];
      uVar317 = (uint)bVar351 << 8 | (uint)bVar321 << 0x10 | PF_PART4(local_3e8, 0) << 0x18;
      if (uVar317 + uVar322 <= uVar333 - 9) {
        uVar327 = (ulong)uVar322;
        if (uVar317 != 0) {
          uVar327 = 0xff;
        }
        recovered_10001c80((undefined8 *)local_3e8,(undefined8 *)((long)puVar330 + 0xe),uVar327,
                           local_3e8,(undefined8 *)puVar312);
        puVar336 = (undefined8 *)(local_3e8 + uVar327);
        param_1 = (long)local_f8;
      }
    }
    *(undefined1 *)puVar336 = 0;
    recovered_10018800((void *)param_1,str_1001e857,local_3e8);
    PF_PART8(in_XMM1, 8) = extraout_XMM1_Qb;
    PF_PART8(in_XMM1, 0) = extraout_XMM1_Qa;
    *(undefined1 *)(param_1 + 0xdec) = 1;
    recovered_10002980((byte *)&local_718,0,0x18);
    PF_PART1(local_718, 0) = 0x18;
    PF_PART1(local_718, 1) = 0;
    PF_PART1(local_718, 2) = 0;
    PF_PART1(local_718, 3) = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)))) {
      iVar311 = (*(code *)(ulong)_DAT_00280968)(&local_718);
      PF_PART8(in_XMM1, 8) = extraout_XMM1_Qb_00;
      PF_PART8(in_XMM1, 0) = extraout_XMM1_Qa_00;
      if (iVar311 == 0) goto LAB_100156ad;
      iVar311 = CONCAT13(uStack_705,CONCAT12(uStack_706,CONCAT11(uStack_707,local_708)));
    }
    else {
LAB_100156ad:
      iVar311 = 0;
    }
    _DAT_100242b8 = (ulong)(uint)(iVar311 - _DAT_100242b0) + _DAT_100242b8;
    uVar327 = _DAT_100242b8 * 1000;
    puVar315 = (uint *)(ulong)DAT_100242a8;
    if (uVar327 >> 0x20 == 0) {
      uVar333 = (uint)((uVar327 & 0xffffffff) / (ulong)puVar315);
    }
    else {
      uVar333 = (uint)(uVar327 / (ulong)puVar315);
    }
    _DAT_100242b0 = iVar311;
    *(uint *)(param_1 + 0xdf0) = uVar333;
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      recovered_10018660(*(int **)(param_1 + 8));
      goto LAB_100158eb;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 7:
  case 0x5f:
    break;
  case 5:
    ((uint8_t *)(void *)&auVar211)[0xf] = 0;
    PF_PART15(auVar211, 0) = stack0xfffffffffffffc19;
    PF_PART16(local_3e8,0) = auVar211 << 8;
    puVar312 = in_R8;
    recovered_10001c80((undefined8 *)local_3e8,puVar336,1,&DAT_100184cc,
                       (undefined8 *)in_R8);
    puVar330 = local_40;
    PF_PART4(auVar212, 12) = 0;
    PF_PART12(auVar212, 0) = stack0xfffffffffffffc1c;
    PF_PART16(local_3e8,0) = auVar212 << 0x20;
    if (uVar333 < 5) {
      uVar327 = 0;
      lVar313 = 0;
      PF_PART8(auVar339, 0) = extraout_XMM0_Qa_02;
    }
    else {
      recovered_10001c80((undefined8 *)local_3e8,(undefined8 *)((long)local_40 + 6),4,puVar315,
                         (undefined8 *)puVar312);
      uVar317 = (uint)PF_PART4(local_3e8, 0) >> 0x18 | (PF_PART4(local_3e8, 0) & 0xff0000) >> 8 |
                (PF_PART4(local_3e8, 0) & 0xff00) << 8 | PF_PART4(local_3e8, 0) << 0x18;
      uVar327 = (ulong)uVar317;
      if (uVar333 - 5 < uVar317) {
        uVar327 = 0;
      }
      lVar313 = 0;
      PF_PART8(auVar339, 0) = extraout_XMM0_Qa_06;
      if (uVar317 <= uVar333 - 5) {
        lVar313 = (long)puVar330 + 10;
      }
    }
    if ((*(uint *)(param_1 + 0x14) < 2) || (*(char *)(param_1 + 0x4b9) == '\x01')) {
      recovered_1000b130(PF_PART8(auVar339, 0),PF_PART8(in_XMM1, 0),PF_PART8(in_XMM2, 0),PF_PART8(in_XMM3, 0),in_XMM4_Qa,
                         in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,2,str_1001e86f,puVar315,puVar312,
                         in_R9);
    }
    else {
      bVar308 = recovered_100189d0(lVar313,uVar327,str_1001e893);
      param_1 = (long)local_f8;
      if (bVar308) {
        PF_PART4(local_3e8, 8) = 0x2000;
        PF_PART8(local_3e8, 0) = *(undefined8 **)(local_f8 + 0x54);
        ((uint8_t *)(void *)&auVar219)[0xf] = 0;
        PF_PART15(auVar219, 0) = PF_PART15(local_3d8, 1);
        PF_PART16(local_3d8,0) = auVar219 << 8;
        PF_PART1(local_718, 0) = 6;
        recovered_10001c80(*(undefined8 **)(local_f8 + 0x54),(undefined8 *)&local_718,1,puVar315,
                           (undefined8 *)puVar312);
        uStack_3dc = 1;
        recovered_1000c730((long *)local_3e8,str_1001e893);
        recovered_10011b10(param_1,PF_PART8(local_3e8, 0),uStack_3dc);
      }
      else {
        recovered_1000b130(extraout_XMM0_Qa_10,PF_PART8(in_XMM1, 0),PF_PART8(in_XMM2, 0),PF_PART8(in_XMM3, 0),in_XMM4_Qa,
                           in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,(long)local_f8,7,str_1001e8a0,puVar315,
                           puVar312,in_R9);
      }
    }
    break;
  default:
    goto switchD_10014c90_caseD_6;
  case 0x14:
    if (uVar333 < 0x2001) {
      ((uint8_t *)(void *)&auVar218)[0xf] = 0;
      PF_PART15(auVar218, 0) = stack0xfffffffffffffc19;
      PF_PART16(local_3e8,0) = auVar218 << 8;
      local_44 = uVar322;
      recovered_10001c80((undefined8 *)local_3e8,puVar336,1,&DAT_100184cc,
                         (undefined8 *)in_R8);
      bVar321 = uVar333 < 0x11;
      uVar317 = (uint)!(bool)bVar321 * 0x10 + 1;
      lVar313 = 0;
      PF_PART8(auVar339, 0) = extraout_XMM0_Qa_07;
      do {
        local_4f8 = local_4f8 & 0xffffffff00000000;
        if (((bVar321 & 1) == 0) && (3 < uVar333 - uVar317)) {
          local_40 = (uint *)CONCAT71(PF_PART7(local_40, 1),bVar321);
          recovered_10001c80(&local_4f8,(undefined8 *)((ulong)uVar317 + (long)puVar336),4,puVar315,
                             (undefined8 *)in_R8);
          uVar317 = uVar317 + 4;
          uVar322 = (uint)local_4f8 >> 0x18 | ((uint)local_4f8 & 0xff0000) >> 8 |
                    ((uint)local_4f8 & 0xff00) << 8 | (uint)local_4f8 << 0x18;
          local_738[lVar313 + 8] = 0;
          PF_PART8(auVar339, 0) = extraout_XMM0_Qa_08;
          if (uVar322 <= uVar333 - uVar317) {
            puVar315 = (uint *)((ulong)uVar317 + (long)puVar336);
            uVar317 = uVar317 + uVar322;
            bVar321 = (byte)local_40;
            goto LAB_100157e6;
          }
          bVar321 = 1;
          puVar315 = (uint *)0x0;
        }
        else {
          bVar321 = 1;
          uVar322 = 0;
          puVar315 = (uint *)0x0;
LAB_100157e6:
          local_738[lVar313 + 8] = uVar322;
        }
        *(uint **)(local_3e8 + lVar313 * 8) = puVar315;
        lVar313 = lVar313 + 1;
      } while (lVar313 != 10);
      local_4f8 = local_4f8 & 0xffffffffffffff00;
      if (((bVar321 & 1) == 0) && (uVar317 != uVar333)) {
        recovered_10001c80(&local_4f8,(undefined8 *)((ulong)uVar317 + (long)puVar336),1,puVar315,
                           (undefined8 *)in_R8);
        cVar309 = (char)local_4f8;
        local_4f8 = local_4f8 & 0xffffffff00000000;
        PF_PART8(auVar339, 0) = extraout_XMM0_Qa_09;
        if (3 < uVar333 - (uVar317 + 1)) {
          recovered_10001c80(&local_4f8,(undefined8 *)((ulong)(uVar317 + 1) + (long)puVar336),4,
                             puVar315,(undefined8 *)in_R8);
          recovered_1000b560((long)puVar336,(ulong)uVar333);
          recovered_10001c80(*(undefined8 **)(param_1 + 0x4c0),puVar336,(ulong)uVar333,puVar315,
                             (undefined8 *)in_R8);
          *(uint *)(param_1 + 0x4c8) = uVar333;
          *(undefined1 *)(param_1 + 0x4bb) = 1;
          if (*(char *)(param_1 + 0x4ba) == '\0') {
            recovered_100115a0(param_1);
          }
          uVar324 = PF_PART8(local_3e8, 0);
          puVar330 = (uint *)(ulong)CONCAT13(PF_PART1(local_718, 3),
                                             CONCAT12(PF_PART1(local_718, 2),
                                                      CONCAT11(PF_PART1(local_718, 1),(byte)local_718)));
          puVar312 = (uint *)recovered_10003720(((uintptr_t)pf_module_state + 0x1284U));
          if ((uint *)uVar324 == (uint *)0x0) {
            recovered_10003720(((uintptr_t)pf_module_state + 0x1296U));
            PF_PART8(auVar339, 0) = extraout_XMM0_Qa_16;
          }
          else {
            local_31 = cVar309;
            puVar332 = (uint *)((long)puVar330 - 1);
            uVar333 = 0;
            local_f0 = puVar332;
            local_40 = puVar330;
            do {
              if ((uint)puVar330 < uVar333) break;
              puVar328 = (uint *)(ulong)uVar333;
              if (uVar333 < (uint)puVar330) {
                uVar331 = (undefined7)((ulong)in_R8 >> 8);
                in_R8 = (uint *)CONCAT71(uVar331,1);
                puVar335 = (uint *)(ulong)uVar333;
                puVar315 = puVar328;
                if (*(char *)(uVar324 + (long)puVar328) != ',') {
                  do {
                    if (puVar332 == puVar315) {
                      in_R8 = (uint *)0x0;
                      puVar335 = (uint *)((ulong)puVar330 & 0xffffffff);
                      goto LAB_10015b3c;
                    }
                    puVar335 = (uint *)((long)puVar315 + 1);
                    pcVar320 = (char *)(uVar324 + 1 + (long)puVar315);
                    puVar315 = puVar335;
                  } while (*pcVar320 != ',');
                  in_R8 = (uint *)CONCAT71(uVar331,puVar335 < puVar330);
                }
              }
              else {
                in_R8 = (uint *)0x0;
                puVar335 = (uint *)(ulong)uVar333;
              }
LAB_10015b3c:
              puVar315 = (uint *)(ulong)((int)puVar335 - uVar333);
              if (puVar312 == puVar315) {
                in_R8 = (uint *)((ulong)in_R8 & 0xffffffff);
                iVar311 = recovered_100032a0((ulong *)((long)puVar328 + uVar324),
                                             (ulong *)str_1001e91a,(ulong)puVar312);
                puVar330 = local_40;
                puVar332 = local_f0;
                if (iVar311 == 0) goto LAB_10015c38;
              }
              uVar333 = (int)puVar335 + 1;
            } while ((char)in_R8 != '\0');
            puVar312 = (uint *)recovered_10003720(((uintptr_t)pf_module_state + 0x1296U));
            uVar333 = 0;
            puVar330 = local_40;
            PF_PART8(auVar339, 0) = extraout_XMM0_Qa_11;
            do {
              if ((uint)puVar330 < uVar333) break;
              puVar328 = (uint *)(ulong)uVar333;
              if (uVar333 < (uint)puVar330) {
                uVar331 = (undefined7)((ulong)in_R8 >> 8);
                in_R8 = (uint *)CONCAT71(uVar331,1);
                puVar335 = (uint *)(ulong)uVar333;
                puVar315 = puVar328;
                if (*(char *)(uVar324 + (long)puVar328) != ',') {
                  do {
                    if (puVar332 == puVar315) {
                      in_R8 = (uint *)0x0;
                      puVar335 = (uint *)((ulong)puVar330 & 0xffffffff);
                      goto LAB_10015c02;
                    }
                    puVar335 = (uint *)((long)puVar315 + 1);
                    pcVar320 = (char *)(uVar324 + 1 + (long)puVar315);
                    puVar315 = puVar335;
                  } while (*pcVar320 != ',');
                  in_R8 = (uint *)CONCAT71(uVar331,puVar335 < puVar330);
                }
              }
              else {
                in_R8 = (uint *)0x0;
                puVar335 = (uint *)(ulong)uVar333;
              }
LAB_10015c02:
              puVar315 = (uint *)(ulong)((int)puVar335 - uVar333);
              if (puVar312 == puVar315) {
                local_a0 = (uint *)CONCAT44(PF_PART4(local_a0, 4),(int)in_R8);
                iVar311 = recovered_100032a0((ulong *)((long)puVar328 + uVar324),
                                             (ulong *)str_1001e92c,(ulong)puVar312);
                in_R8 = (uint *)((ulong)local_a0 & 0xffffffff);
                puVar330 = local_40;
                PF_PART8(auVar339, 0) = extraout_XMM0_Qa_12;
                if (iVar311 == 0) goto LAB_10015c38;
              }
              uVar333 = (int)puVar335 + 1;
            } while ((char)in_R8 != '\0');
          }
          uVar324 = 3;
          pcVar320 = str_1001e949;
          goto LAB_10015da1;
        }
      }
      uVar324 = 2;
      pcVar320 = str_1001e908;
    }
    else {
      uVar324 = 3;
      pcVar320 = str_1001e8f6;
      local_44 = uVar322;
    }
    goto LAB_10015da1;
  case 0x15:
    if ((*(char *)(param_1 + 0x4b9) != '\x01') || ((char)*(uint *)(param_1 + 0x814) == '\0')) {
      recovered_1000b130(PF_PART8(auVar339, 0),uVar324,uVar348,uVar350,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                         in_XMM7_Qa,param_1,2,str_1001ea35,&DAT_100184cc,
                         in_R8,in_R9);
      goto LAB_100158eb;
    }
    recovered_10001c80((undefined8 *)local_428,(undefined8 *)local_408,0x19c,
                       &DAT_100184cc,(undefined8 *)in_R8);
    *(undefined1 *)(param_1 + 0x829) = 1;
    lVar313 = 0;
    do {
      *(undefined1 *)((long)piVar329 + lVar313) = 0;
      *(undefined1 *)((long)piVar329 + lVar313 + 1) = 0;
      *(undefined1 *)((long)piVar329 + lVar313 + 2) = 0;
      *(undefined1 *)((long)piVar329 + lVar313 + 3) = 0;
      lVar313 = lVar313 + 4;
    } while (lVar313 != 0x19c);
    lVar313 = 0;
    do {
      *(undefined1 *)((long)local_3f0 + lVar313) = 0;
      *(undefined1 *)((long)local_3f0 + lVar313 + 1) = 0;
      *(undefined1 *)((long)local_3f0 + lVar313 + 2) = 0;
      *(undefined1 *)((long)local_3f0 + lVar313 + 3) = 0;
      lVar313 = lVar313 + 4;
    } while (lVar313 != 0x19c);
    *(undefined1 *)(param_1 + 0x814) = 0;
    puVar315 = local_3f0;
    if ((char)*(uint *)(param_1 + 0x828) == '\x01') {
      *(undefined2 *)(param_1 + 0x4b9) = 0;
      *(undefined1 *)(param_1 + 0x4bb) = 0;
      if (*(uint *)(param_1 + 0x14) == 1) {
        *(uint *)(param_1 + 0x14) = 2;
      }
    }
    break;
  case 0x1e:
    if (((*(char *)(param_1 + 0x4b9) == '\x01') && (*(char *)(param_1 + 0x4bb) == '\x01')) &&
       (*(char *)(param_1 + 0x4ba) != '\0')) {
      ((uint8_t *)(void *)&auVar213)[0xf] = 0;
      PF_PART15(auVar213, 0) = stack0xfffffffffffffc19;
      PF_PART16(local_3e8,0) = auVar213 << 8;
      local_44 = uVar322;
      recovered_10001c80((undefined8 *)local_3e8,puVar336,1,&DAT_100184cc,
                         (undefined8 *)in_R8);
      PF_PART4(auVar214, 12) = 0;
      PF_PART12(auVar214, 0) = stack0xfffffffffffffc1c;
      PF_PART16(local_3e8,0) = auVar214 << 0x20;
      PF_PART8(auVar339, 0) = extraout_XMM0_Qa_03;
      if (4 < uVar333) {
        recovered_10001c80((undefined8 *)local_3e8,(undefined8 *)((long)local_40 + 6),4,puVar315,
                           (undefined8 *)in_R8);
        uVar317 = (uint)PF_PART4(local_3e8, 0) >> 0x18 | (PF_PART4(local_3e8, 0) & 0xff0000) >> 8 |
                  (PF_PART4(local_3e8, 0) & 0xff00) << 8 | PF_PART4(local_3e8, 0) << 0x18;
        PF_PART8(auVar339, 0) = extraout_XMM0_Qa_04;
        if ((uVar317 <= uVar333 - 5) && (uVar317 == 0x20)) {
          local_40 = (uint *)((long)local_40 + 10);
          recovered_1000b560((long)local_40,0x20);
          recovered_10002980(local_3e8,0,0x18);
          PF_PART4(local_3e8, 0) = 0x18;
          if ((((_DAT_00280800 == 0x50414d57) && ((_DAT_00280804 != 0 && (0xb < _DAT_00280808)))) &&
              (0x16b < _DAT_00280808)) && ((code *)(ulong)_DAT_00280968 != (code *)0x0)) {
            (*(code *)(ulong)_DAT_00280968)(local_3e8);
            PF_PART8(in_XMM1, 8) = extraout_XMM1_Qb_01;
            PF_PART8(in_XMM1, 0) = extraout_XMM1_Qa_01;
          }
          recovered_1000b560((long)local_3e8,0x18);
          recovered_1000bd40((long)&local_88,0x20);
          recovered_1001a280(local_758,(ulong *)&local_88,(undefined4 *)&DAT_1001dfb0);
          recovered_1001a280(local_68,(ulong *)&local_88,local_40);
          in_R8 = (uint *)(ulong)(byte)local_68[4];
          in_R9 = (undefined1 *)(ulong)(byte)local_68[5];
          local_a0 = (uint *)CONCAT71(PF_PART7(local_a0, 1),local_68[9]);
          local_f0 = (uint *)CONCAT71(PF_PART7(local_f0, 1),local_68[10]);
          local_1e8 = (uint *)CONCAT71(PF_PART7(local_1e8, 1),local_68[0xb]);
          local_31 = local_68[0xc];
          local_3f8 = CONCAT71(PF_PART7(local_3f8, 1),local_68[0xd]);
          local_97 = local_68[0xe];
          local_96 = local_68[0xf];
          local_95 = local_68[0x10];
          local_89 = local_68[0x11];
          local_8a = local_68[0x12];
          local_8b = local_68[0x13];
          local_8c = local_68[0x14];
          local_8d = local_68[0x15];
          local_8e = local_68[0x16];
          local_8f = local_68[0x17];
          local_90 = local_68[0x18];
          local_91 = local_68[0x19];
          local_92 = local_68[0x1a];
          local_93 = local_68[0x1b];
          local_94 = local_68[0x1c];
          if (((local_68[0x1d] == '\0' && local_68[0x1e] == '\0') &&
              (((((((local_68[0x16] == '\0' && local_68[0x17] == '\0') && local_68[0x18] == '\0') &&
                  local_68[0x19] == '\0') && local_68[0x1a] == '\0') && local_68[0x1b] == '\0') &&
               local_68[0x1c] == '\0') &&
              ((((((local_68[0x10] == '\0' && local_68[0x11] == '\0') && local_68[0x12] == '\0') &&
                 local_68[0x13] == '\0') && local_68[0x14] == '\0') && local_68[0x15] == '\0') &&
              (((((local_68[0xb] == '\0' && local_68[0xc] == '\0') && local_68[0xd] == '\0') &&
                local_68[0xe] == '\0') && local_68[0xf] == '\0') &&
              ((((local_68[7] == '\0' && local_68[8] == '\0') && local_68[9] == '\0') &&
               local_68[10] == '\0') &&
              (((local_68[4] == 0 && local_68[5] == 0) && local_68[6] == '\0') &&
              ((local_68[2] == '\0' && local_68[3] == '\0') &&
              (local_68[1] == '\0' && local_68[0] == '\0')))))))) && local_68[0x1f] == '\0') {
            local_88 = 0;
            local_87 = 0;
            local_86 = 0;
            local_85 = 0;
            local_84 = 0;
            local_83 = 0;
            local_82 = 0;
            local_81 = 0;
            local_80 = 0;
            local_7f = 0;
            local_7e = 0;
            local_7d = 0;
            local_7c = 0;
            local_7b = 0;
            local_7a = 0;
            local_79 = 0;
            local_78 = 0;
            local_77 = 0;
            local_76 = 0;
            local_75 = 0;
            local_74 = 0;
            local_73 = 0;
            local_72 = 0;
            local_71 = 0;
            local_70 = 0;
            local_6f = 0;
            local_6e = 0;
            local_6d = 0;
            local_6c = 0;
            local_6b = 0;
            local_6a = 0;
            local_69 = 0;
            uVar324 = 3;
            pcVar320 = str_1001ea84;
            puVar315 = (uint *)0x0;
            PF_PART8(auVar339, 0) = extraout_XMM0_Qa_05;
            goto LAB_10015da1;
          }
          lVar313 = 0;
          if (((((((local_68[0] == '\0') && (lVar313 = 1, local_68[1] == '\0')) &&
                 (lVar313 = 2, local_68[2] == '\0')) &&
                ((lVar313 = 3, local_68[3] == '\0' && (lVar313 = 4, local_68[4] == 0)))) &&
               ((lVar313 = 5, local_68[5] == 0 &&
                ((lVar313 = 6, local_68[6] == '\0' && (lVar313 = 7, local_68[7] == '\0')))))) &&
              ((lVar313 = 8, local_68[8] == '\0' &&
               ((((((lVar313 = 9, local_68[9] == '\0' && (lVar313 = 10, local_68[10] == '\0')) &&
                   (lVar313 = 0xb, local_68[0xb] == '\0')) &&
                  (((lVar313 = 0xc, local_68[0xc] == '\0' && (lVar313 = 0xd, local_68[0xd] == '\0'))
                   && ((lVar313 = 0xe, local_68[0xe] == '\0' &&
                       ((lVar313 = 0xf, local_68[0xf] == '\0' &&
                        (lVar313 = 0x10, local_68[0x10] == '\0')))))))) &&
                 (lVar313 = 0x11, local_68[0x11] == '\0')) &&
                (((lVar313 = 0x12, local_68[0x12] == '\0' &&
                  (lVar313 = 0x13, local_68[0x13] == '\0')) &&
                 (lVar313 = 0x14, local_68[0x14] == '\0')))))))) &&
             ((((lVar313 = 0x15, local_68[0x15] == '\0' && (lVar313 = 0x16, local_68[0x16] == '\0'))
               && ((lVar313 = 0x17, local_68[0x17] == '\0' &&
                   ((lVar313 = 0x18, local_68[0x18] == '\0' &&
                    (lVar313 = 0x19, local_68[0x19] == '\0')))))) &&
              ((lVar313 = 0x1a, local_68[0x1a] == '\0' &&
               ((((lVar313 = 0x1b, local_68[0x1b] == '\0' &&
                  (lVar313 = 0x1c, local_68[0x1c] == '\0')) &&
                 (lVar313 = 0x1d, local_68[0x1d] == '\0')) &&
                (lVar313 = 0x1e, local_68[0x1e] == '\0')))))))) {
            lVar319 = 0x1f;
            lVar313 = lVar319;
            if (local_68[0x1f] != '\0') goto LAB_1001530e;
            PF_PART4(auVar300, 12) = 0;
            PF_PART12(auVar300, 0) = stack0xfffffffffffffc1c;
            PF_PART16(local_3e8,0) = auVar300 << 0x20;
            recovered_10001c80((undefined8 *)local_128,(undefined8 *)local_3e8,4,0x1f,
                               (undefined8 *)0x0);
            local_a0 = (uint *)CONCAT44(PF_PART4(local_a0, 4),4);
          }
          else {
LAB_1001530e:
            lVar319 = lVar313;
            if (local_68[lVar313] < '\0') {
              PF_PART12(auVar302, 1) = stack0xfffffffffffffc1c;
              ((uint8_t *)(void *)&auVar302)[0] = '!' - (char)lVar313;
              PF_PART3(auVar302, 13) = 0;
              PF_PART16(local_3e8,0) = auVar302 << 0x18;
              recovered_10001c80((undefined8 *)local_128,(undefined8 *)local_3e8,4,lVar313,
                                 (undefined8 *)in_R8);
              ((uint8_t *)(void *)&auVar220)[0xf] = 0;
              PF_PART15(auVar220, 0) = stack0xfffffffffffffc19;
              PF_PART16(local_3e8,0) = auVar220 << 8;
              recovered_10001c80((undefined8 *)(local_128 + 4),(undefined8 *)local_3e8,1,lVar319,
                                 (undefined8 *)in_R8);
              uVar333 = 0x20 - (int)lVar313;
              lVar334 = 5;
            }
            else {
              uVar333 = 0x20 - (int)lVar313;
              PF_PART12(auVar301, 1) = stack0xfffffffffffffc1c;
              ((uint8_t *)(void *)&auVar301)[0] = (char)uVar333;
              PF_PART3(auVar301, 13) = 0;
              PF_PART16(local_3e8,0) = auVar301 << 0x18;
              recovered_10001c80((undefined8 *)local_128,(undefined8 *)local_3e8,4,lVar313,
                                 (undefined8 *)in_R8);
              lVar334 = 4;
            }
            recovered_10001c80((undefined8 *)(local_128 + lVar334),
                               (undefined8 *)(local_68 + lVar313),(ulong)uVar333,lVar319,
                               (undefined8 *)in_R8);
            local_a0 = (uint *)CONCAT44(PF_PART4(local_a0, 4),uVar333 + (int)lVar334);
          }
          local_1d8 = _DAT_1001d7c0;
          uStack_1d0 = uRam000000001001d7c8;
          local_1c8 = _DAT_1001d7d0;
          uStack_1c0 = uRam000000001001d7d8;
          local_1b8 = 0;
          local_170 = 0;
          lVar313 = recovered_10003720((long)local_400);
          uVar333 = (uint)lVar313;
          local_48 = uVar333 >> 0x18 | (uVar333 & 0xff0000) >> 8 | (uVar333 & 0xff00) << 8 |
                     uVar333 << 0x18;
          local_1b8 = local_1b8 + 4;
          uVar327 = 4;
          puVar315 = &local_48;
          do {
            uVar318 = (ulong)(0x40 - local_170);
            if (uVar327 < 0x40 - local_170) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),
                               (undefined8 *)puVar315,uVar318,lVar319,(undefined8 *)in_R8);
            local_170 = local_170 + (int)uVar318;
            if (local_170 == 0x40) {
              recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
              local_170 = 0;
            }
            puVar315 = (uint *)((long)puVar315 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          uVar327 = recovered_10003720((long)local_400);
          local_1b8 = local_1b8 + uVar327;
          if (uVar327 != 0) {
            puVar336 = local_400;
            do {
              uVar318 = (ulong)(0x40 - local_170);
              if (uVar327 < 0x40 - local_170) {
                uVar318 = uVar327;
              }
              recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),puVar336,uVar318
                                 ,lVar319,(undefined8 *)in_R8);
              local_170 = local_170 + (int)uVar318;
              if (local_170 == 0x40) {
                recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
                local_170 = 0;
              }
              puVar336 = (undefined8 *)((long)puVar336 + uVar318);
              uVar327 = uVar327 - uVar318;
            } while (uVar327 != 0);
          }
          lVar313 = recovered_10003720(((uintptr_t)pf_module_state + 0x1407U));
          uVar333 = (uint)lVar313;
          local_48 = uVar333 >> 0x18 | (uVar333 & 0xff0000) >> 8 | (uVar333 & 0xff00) << 8 |
                     uVar333 << 0x18;
          local_1b8 = local_1b8 + 4;
          uVar327 = 4;
          puVar315 = &local_48;
          do {
            uVar318 = (ulong)(0x40 - local_170);
            if (uVar327 < 0x40 - local_170) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),
                               (undefined8 *)puVar315,uVar318,lVar319,(undefined8 *)in_R8);
            local_170 = local_170 + (int)uVar318;
            if (local_170 == 0x40) {
              recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
              local_170 = 0;
            }
            puVar315 = (uint *)((long)puVar315 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          pcVar320 = str_1001ea9d;
          uVar327 = recovered_10003720(((uintptr_t)pf_module_state + 0x1407U));
          local_1b8 = local_1b8 + uVar327;
          lVar313 = local_1b8;
          if (uVar327 != 0) {
            do {
              uVar318 = (ulong)(0x40 - local_170);
              if (uVar327 < 0x40 - local_170) {
                uVar318 = uVar327;
              }
              recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),
                                 (undefined8 *)pcVar320,uVar318,lVar313,(undefined8 *)in_R8);
              local_170 = local_170 + (int)uVar318;
              if (local_170 == 0x40) {
                recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
                local_170 = 0;
              }
              pcVar320 = pcVar320 + uVar318;
              uVar327 = uVar327 - uVar318;
            } while (uVar327 != 0);
          }
          uVar333 = *(uint *)(param_1 + 0x4c8);
          local_48 = uVar333 >> 0x18 | (uVar333 & 0xff0000) >> 8 | (uVar333 & 0xff00) << 8 |
                     uVar333 << 0x18;
          lVar313 = local_1b8 + 4;
          uVar327 = 4;
          puVar315 = &local_48;
          local_1b8 = lVar313;
          do {
            uVar318 = (ulong)(0x40 - local_170);
            if (uVar327 < 0x40 - local_170) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),
                               (undefined8 *)puVar315,uVar318,lVar313,(undefined8 *)in_R8);
            local_170 = local_170 + (int)uVar318;
            if (local_170 == 0x40) {
              recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
              local_170 = 0;
            }
            puVar315 = (uint *)((long)puVar315 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          puVar336 = *(undefined8 **)(param_1 + 0x4c0);
          uVar327 = (ulong)*(uint *)(param_1 + 0x4c8);
          local_1b8 = local_1b8 + uVar327;
          lVar313 = local_1b8;
          if (uVar327 != 0) {
            do {
              uVar318 = (ulong)(0x40 - local_170);
              if (uVar327 < 0x40 - local_170) {
                uVar318 = uVar327;
              }
              recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),puVar336,uVar318
                                 ,lVar313,(undefined8 *)in_R8);
              local_170 = local_170 + (int)uVar318;
              if (local_170 == 0x40) {
                recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
                local_170 = 0;
              }
              puVar336 = (undefined8 *)((long)puVar336 + uVar318);
              uVar327 = uVar327 - uVar318;
            } while (uVar327 != 0);
          }
          uVar333 = *(uint *)(param_1 + 0x4d8);
          local_48 = uVar333 >> 0x18 | (uVar333 & 0xff0000) >> 8 | (uVar333 & 0xff00) << 8 |
                     uVar333 << 0x18;
          lVar313 = local_1b8 + 4;
          uVar327 = 4;
          puVar315 = &local_48;
          local_1b8 = lVar313;
          do {
            uVar318 = (ulong)(0x40 - local_170);
            if (uVar327 < 0x40 - local_170) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),
                               (undefined8 *)puVar315,uVar318,lVar313,(undefined8 *)in_R8);
            local_170 = local_170 + (int)uVar318;
            if (local_170 == 0x40) {
              recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
              local_170 = 0;
            }
            puVar315 = (uint *)((long)puVar315 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          puVar336 = *(undefined8 **)(param_1 + 0x4d0);
          uVar327 = (ulong)*(uint *)(param_1 + 0x4d8);
          local_1b8 = local_1b8 + uVar327;
          lVar313 = local_1b8;
          if (uVar327 != 0) {
            do {
              uVar318 = (ulong)(0x40 - local_170);
              if (uVar327 < 0x40 - local_170) {
                uVar318 = uVar327;
              }
              recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),puVar336,uVar318
                                 ,lVar313,(undefined8 *)in_R8);
              local_170 = local_170 + (int)uVar318;
              if (local_170 == 0x40) {
                recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
                local_170 = 0;
              }
              puVar336 = (undefined8 *)((long)puVar336 + uVar318);
              uVar327 = uVar327 - uVar318;
            } while (uVar327 != 0);
          }
          local_48 = DAT_10024164 >> 0x18 | (DAT_10024164 & 0xff0000) >> 8 |
                     (DAT_10024164 & 0xff00) << 8 | DAT_10024164 << 0x18;
          lVar313 = local_1b8 + 4;
          uVar327 = 4;
          puVar315 = &local_48;
          local_1b8 = lVar313;
          do {
            uVar318 = (ulong)(0x40 - local_170);
            if (uVar327 < 0x40 - local_170) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),
                               (undefined8 *)puVar315,uVar318,lVar313,(undefined8 *)in_R8);
            local_170 = local_170 + (int)uVar318;
            if (local_170 == 0x40) {
              recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
              local_170 = 0;
            }
            puVar315 = (uint *)((long)puVar315 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          uVar327 = (ulong)DAT_10024164;
          local_1b8 = local_1b8 + uVar327;
          if (uVar327 != 0) {
            puVar336 = (undefined8 *)&DAT_10024130;
            lVar313 = local_1b8;
            do {
              uVar318 = (ulong)(0x40 - local_170);
              if (uVar327 < 0x40 - local_170) {
                uVar318 = uVar327;
              }
              recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),puVar336,uVar318
                                 ,lVar313,(undefined8 *)in_R8);
              local_170 = local_170 + (int)uVar318;
              if (local_170 == 0x40) {
                recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
                local_170 = 0;
              }
              puVar336 = (undefined8 *)((long)puVar336 + uVar318);
              uVar327 = uVar327 - uVar318;
            } while (uVar327 != 0);
          }
          local_48 = 0x20000000;
          lVar313 = local_1b8 + 4;
          uVar327 = 4;
          puVar315 = &local_48;
          local_1b8 = lVar313;
          do {
            uVar318 = (ulong)(0x40 - local_170);
            if (uVar327 < 0x40 - local_170) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),
                               (undefined8 *)puVar315,uVar318,lVar313,(undefined8 *)in_R8);
            local_170 = local_170 + (int)uVar318;
            if (local_170 == 0x40) {
              recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
              local_170 = 0;
            }
            puVar315 = (uint *)((long)puVar315 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          local_1b8 = local_1b8 + 0x20;
          uVar327 = 0x20;
          puVar315 = local_40;
          do {
            uVar318 = (ulong)(0x40 - local_170);
            if (uVar327 < 0x40 - local_170) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),
                               (undefined8 *)puVar315,uVar318,lVar313,(undefined8 *)in_R8);
            local_170 = local_170 + (int)uVar318;
            if (local_170 == 0x40) {
              recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
              local_170 = 0;
            }
            puVar315 = (uint *)((long)puVar315 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          local_1b8 = local_1b8 + 4;
          uVar327 = 4;
          puVar315 = &local_48;
          do {
            uVar318 = (ulong)(0x40 - local_170);
            if (uVar327 < 0x40 - local_170) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),
                               (undefined8 *)puVar315,uVar318,lVar313,(undefined8 *)in_R8);
            local_170 = local_170 + (int)uVar318;
            if (local_170 == 0x40) {
              recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
              local_170 = 0;
            }
            puVar315 = (uint *)((long)puVar315 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          local_1b8 = local_1b8 + 0x20;
          uVar327 = 0x20;
          puVar336 = local_758;
          do {
            uVar318 = (ulong)(0x40 - local_170);
            if (uVar327 < 0x40 - local_170) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),puVar336,uVar318,
                               lVar313,(undefined8 *)in_R8);
            local_170 = local_170 + (int)uVar318;
            if (local_170 == 0x40) {
              recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
              local_170 = 0;
            }
            puVar336 = (undefined8 *)((long)puVar336 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          uVar327 = (ulong)local_a0 & 0xffffffff;
          local_1b8 = local_1b8 + uVar327;
          puVar336 = (undefined8 *)local_128;
          do {
            uVar318 = (ulong)(0x40 - local_170);
            if (uVar327 < 0x40 - local_170) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((long)local_1b0 + (ulong)local_170),puVar336,uVar318,
                               lVar313,(undefined8 *)in_R8);
            local_170 = local_170 + (int)uVar318;
            if (local_170 == 0x40) {
              recovered_1000f460((uint *)&local_1d8,(long)local_1b0);
              local_170 = 0;
            }
            puVar336 = (undefined8 *)((long)puVar336 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          recovered_1000c7c0((uint *)&local_1d8,local_738);
          if ((char)*(uint *)(param_1 + 0x4b8) == '\0') {
            recovered_10001c80(local_508,(undefined8 *)local_738,0x20,lVar313,(undefined8 *)in_R8);
            *(undefined1 *)(param_1 + 0x4b8) = 1;
          }
          stack0xfffffffffffffc20 = (uint *)0xbb67ae8584caa73b;
          PF_PART8(local_3e8, 0) = 0x6a09e667f3bcc908;
          PF_PART8(local_3d8, 8) = 0xa54ff53a5f1d36f1;
          PF_PART8(local_3d8, 0) = 0x3c6ef372fe94f82b;
          PF_PART8(local_3c8, 8) = 0x9b05688c2b3e6c1f;
          PF_PART8(local_3c8, 0) = 0x510e527fade682d1;
          PF_PART8(auStack_3b8, 8) = 0x5be0cd19137e2179;
          PF_PART8(auStack_3b8, 0) = 0x1f83d9abfb41bd6b;
          PF_PART4(local_328, 8) = 0;
          PF_PART8(local_3a8, 0) = 0x20;
          recovered_10001c80((undefined8 *)(local_3a8 + 8),(undefined8 *)&DAT_100240f0,0x20,lVar313,
                             (undefined8 *)in_R8);
          iVar311 = PF_PART4(local_328, 8) + 0x20;
          PF_PART4(local_328, 8) = iVar311;
          if (iVar311 == 0x80) {
            recovered_1000b770((ulong *)local_3e8,(long)(local_3a8 + 8));
            PF_PART4(local_328, 8) = 0;
          }
          recovered_1000c4e0((ulong *)local_3e8,&local_168);
          PF_PART1(local_168, 0) = (byte)local_168 & 0xf8;
          local_149 = local_149 & 0x3f | 0x40;
          local_4f8 = 0x6a09e667f3bcc908;
          uStack_4f0 = 0xbb67ae8584caa73b;
          local_4e8 = 0x3c6ef372fe94f82b;
          local_4e0 = 0xa54ff53a5f1d36f1;
          local_4d8 = 0x510e527fade682d1;
          local_4d0 = 0x9b05688c2b3e6c1f;
          local_4c8 = 0x1f83d9abfb41bd6b;
          local_4c0 = 0x5be0cd19137e2179;
          local_430 = 0;
          local_4b8 = 0x20;
          recovered_10001c80(local_4b0,(undefined8 *)&local_148,0x20,lVar313,(undefined8 *)in_R8);
          local_430 = local_430 + 0x20;
          if (local_430 == 0x80) {
            recovered_1000b770(&local_4f8,(long)local_4b0);
            local_430 = 0;
          }
          local_4b8 = local_4b8 + 0x20;
          uVar327 = 0x20;
          puVar315 = local_738;
          do {
            uVar318 = (ulong)(0x80 - local_430);
            if (uVar327 < 0x80 - local_430) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((ulong)local_430 + (long)local_4b0),
                               (undefined8 *)puVar315,uVar318,lVar313,(undefined8 *)in_R8);
            local_430 = local_430 + (int)uVar318;
            if (local_430 == 0x80) {
              recovered_1000b770(&local_4f8,(long)local_4b0);
              local_430 = 0;
            }
            puVar315 = (uint *)((long)puVar315 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          recovered_1000c4e0(&local_4f8,(ulong *)local_e8);
          PF_PART1(auVar1,0xd) = 0;
          PF_PART13(auVar1, 0) = PF_PART13(local_e8, 0);
          PF_PART1(auVar1,0xe) = local_e8[7];
          PF_PART1(auVar29,0xc) = local_e8[6];
          PF_PART12(auVar29, 0) = PF_PART12(local_e8, 0);
          PF_PART2(auVar29, 13) = PF_PART2(auVar1, 13);
          PF_PART1(auVar44,0xb) = 0;
          PF_PART11(auVar44, 0) = PF_PART11(local_e8, 0);
          PF_PART3(auVar44, 12) = PF_PART3(auVar29, 12);
          PF_PART1(auVar57,10) = local_e8[5];
          PF_PART10(auVar57, 0) = PF_PART10(local_e8, 0);
          PF_PART4(auVar57, 11) = PF_PART4(auVar44, 11);
          PF_PART1(auVar110,9) = 0;
          PF_PART9(auVar110, 0) = PF_PART9(local_e8, 0);
          PF_PART5(auVar110, 10) = PF_PART5(auVar57, 10);
          PF_PART1(auVar143,8) = local_e8[4];
          PF_PART8(auVar143, 0) = PF_PART8(local_e8, 0);
          PF_PART6(auVar143, 9) = PF_PART6(auVar110, 9);
          PF_PART8(auVar221, 7) = 0;
          PF_PART7(auVar221, 0) = PF_PART7(auVar143, 8);
          Var222 = CONCAT81(SUB158(auVar221 << 0x40,7),local_e8[3]);
          PF_PART6(auVar223, 9) = 0;
          PF_PART9(auVar223, 0) = Var222;
          PF_PART10(auVar224, 1) = SUB1510(auVar223 << 0x30,5);
          PF_PART1(auVar224,0) = local_e8[2];
          PF_PART4(auVar225, 11) = 0;
          PF_PART11(auVar225, 0) = auVar224;
          PF_PART1(auVar174,2) = local_e8[1];
          PF_PART2(auVar174, 0) = PF_PART2(local_e8, 0);
          PF_PART12(auVar174, 3) = SUB1512(auVar225 << 0x20,3);
          PF_PART13(auVar187, 2) = PF_PART13(auVar174, 2);
          PF_PART2(auVar187, 0) = PF_PART2(local_e8, 0) & 0xff;
          uVar349 = (undefined2)Var222;
          PF_PART2(auVar2, 10) = 0;
          PF_PART10(auVar2, 0) = PF_PART10(auVar187, 0);
          PF_PART2(auVar2, 12) = uVar349;
          uVar305 = CONCAT42(PF_PART4(auVar2, 10),PF_PART2(auVar224, 0));
          PF_PART8(auVar226, 6) = 0;
          PF_PART6(auVar226, 0) = uVar305;
          PF_PART2(auVar58, 4) = PF_PART2(auVar174, 2);
          PF_PART4(auVar58, 0) = PF_PART4(auVar187, 0);
          PF_PART8(auVar58, 6) = SUB148(auVar226 << 0x40,6);
          PF_PART10(auVar111, 4) = PF_PART10(auVar58, 4);
          PF_PART4(auVar111, 0) = PF_PART4(auVar187, 0) & 0xffff;
          PF_PART8(local_3e8, 0) = PF_PART8(auVar111, 0) & 0xffffffff;
          PF_PART4(local_3e8, 8) = PF_PART4(auVar58, 4);
          uStack_3dc = 0;
          PF_PART8(local_3d8, 0) = (ulong)uVar305 & 0xffffffff;
          PF_PART2(local_3d8, 8) = uVar349;
          PF_PART6(local_3d8, 10) = 0;
          PF_PART8(local_3c8, 0) = (ulong)CONCAT24(PF_PART2(auVar57, 10),(uint)PF_PART2(auVar143, 8)) & 0xffffffff;
          PF_PART2(local_3c8, 8) = PF_PART2(auVar57, 10);
          PF_PART6(local_3c8, 10) = 0;
          PF_PART8(auStack_3b8, 0) = (ulong)(PF_PART7(auVar143, 8) >> 0x20) & 0xffff;
          auStack_3b8[8] = local_e8[7];
          PF_PART7(auStack_3b8, 9) = 0;
          uVar333 = CONCAT13(0,CONCAT12(local_e8[9],(ushort)local_e8[8]));
          PF_PART1(auVar59,0xc) = local_e8[0xb];
          PF_PART12(auVar59, 0) = ZEXT112(local_e8[0xc]) << 0x40;
          PF_PART3(auVar60, 10) = PF_PART3(auVar59, 10);
          PF_PART10(auVar60, 0) = (unkuint10)local_e8[10] << 0x40;
          PF_PART8(auVar227, 5) = 0;
          PF_PART5(auVar227, 0) = PF_PART5(auVar60, 8);
          PF_PART1(auVar61,4) = local_e8[9];
          PF_PART4(auVar61, 0) = uVar333;
          PF_PART1(auVar61,5) = 0;
          PF_PART7(auVar61, 6) = SUB137(auVar227 << 0x40,6);
          PF_PART9(auVar112, 4) = PF_PART9(auVar61, 4);
          PF_PART4(auVar112, 0) = uVar333 & 0xffff;
          PF_PART8(local_3a8, 0) = PF_PART8(auVar112, 0) & 0xffffffff;
          PF_PART4(local_3a8, 8) = PF_PART4(auVar61, 4);
          PF_PART4(local_3a8, 12) = 0;
          PF_PART8(local_398, 0) = (ulong)PF_PART5(auVar60, 8) & 0xffffffff;
          local_398[8] = local_e8[0xb];
          PF_PART7(local_398, 9) = 0;
          PF_PART8(local_388, 0) = (ulong)CONCAT14(local_e8[0xd],(uint)local_e8[0xc]) & 0xffffffff;
          local_388[8] = local_e8[0xd];
          PF_PART7(local_388, 9) = 0;
          PF_PART7(local_378, 1) = 0;
          local_378[0] = local_e8[0xe];
          local_378[8] = local_e8[0xf];
          PF_PART7(local_378, 9) = 0;
          PF_PART1(auVar3,0xd) = 0;
          PF_PART13(auVar3, 0) = PF_PART13(local_d8, 0);
          PF_PART1(auVar3,0xe) = local_d8[7];
          PF_PART1(auVar30,0xc) = local_d8[6];
          PF_PART12(auVar30, 0) = PF_PART12(local_d8, 0);
          PF_PART2(auVar30, 13) = PF_PART2(auVar3, 13);
          PF_PART1(auVar45,0xb) = 0;
          PF_PART11(auVar45, 0) = PF_PART11(local_d8, 0);
          PF_PART3(auVar45, 12) = PF_PART3(auVar30, 12);
          PF_PART1(auVar62,10) = local_d8[5];
          PF_PART10(auVar62, 0) = PF_PART10(local_d8, 0);
          PF_PART4(auVar62, 11) = PF_PART4(auVar45, 11);
          PF_PART1(auVar113,9) = 0;
          PF_PART9(auVar113, 0) = PF_PART9(local_d8, 0);
          PF_PART5(auVar113, 10) = PF_PART5(auVar62, 10);
          PF_PART1(auVar144,8) = local_d8[4];
          PF_PART8(auVar144, 0) = PF_PART8(local_d8, 0);
          PF_PART6(auVar144, 9) = PF_PART6(auVar113, 9);
          PF_PART8(auVar228, 7) = 0;
          PF_PART7(auVar228, 0) = PF_PART7(auVar144, 8);
          Var222 = CONCAT81(SUB158(auVar228 << 0x40,7),local_d8[3]);
          PF_PART6(auVar229, 9) = 0;
          PF_PART9(auVar229, 0) = Var222;
          PF_PART10(auVar230, 1) = SUB1510(auVar229 << 0x30,5);
          PF_PART1(auVar230,0) = local_d8[2];
          PF_PART4(auVar231, 11) = 0;
          PF_PART11(auVar231, 0) = auVar230;
          PF_PART1(auVar175,2) = local_d8[1];
          PF_PART2(auVar175, 0) = PF_PART2(local_d8, 0);
          PF_PART12(auVar175, 3) = SUB1512(auVar231 << 0x20,3);
          PF_PART13(auVar188, 2) = PF_PART13(auVar175, 2);
          PF_PART2(auVar188, 0) = PF_PART2(local_d8, 0) & 0xff;
          uVar349 = (undefined2)Var222;
          PF_PART2(auVar4, 10) = 0;
          PF_PART10(auVar4, 0) = PF_PART10(auVar188, 0);
          PF_PART2(auVar4, 12) = uVar349;
          uVar305 = CONCAT42(PF_PART4(auVar4, 10),PF_PART2(auVar230, 0));
          PF_PART8(auVar232, 6) = 0;
          PF_PART6(auVar232, 0) = uVar305;
          PF_PART2(auVar63, 4) = PF_PART2(auVar175, 2);
          PF_PART4(auVar63, 0) = PF_PART4(auVar188, 0);
          PF_PART8(auVar63, 6) = SUB148(auVar232 << 0x40,6);
          PF_PART10(auVar114, 4) = PF_PART10(auVar63, 4);
          PF_PART4(auVar114, 0) = PF_PART4(auVar188, 0) & 0xffff;
          PF_PART8(local_368, 0) = PF_PART8(auVar114, 0) & 0xffffffff;
          PF_PART4(local_368, 8) = PF_PART4(auVar63, 4);
          PF_PART4(local_368, 12) = 0;
          PF_PART8(local_358, 0) = (ulong)uVar305 & 0xffffffff;
          PF_PART2(local_358, 8) = uVar349;
          PF_PART6(local_358, 10) = 0;
          PF_PART8(local_348, 0) = (ulong)CONCAT24(PF_PART2(auVar62, 10),(uint)PF_PART2(auVar144, 8)) & 0xffffffff;
          PF_PART2(local_348, 8) = PF_PART2(auVar62, 10);
          PF_PART6(local_348, 10) = 0;
          PF_PART8(local_338, 0) = (ulong)(PF_PART7(auVar144, 8) >> 0x20) & 0xffff;
          local_338[8] = local_d8[7];
          PF_PART7(local_338, 9) = 0;
          uVar333 = CONCAT13(0,CONCAT12(local_d8[9],(ushort)local_d8[8]));
          PF_PART1(auVar64,0xc) = local_d8[0xb];
          PF_PART12(auVar64, 0) = ZEXT112(local_d8[0xc]) << 0x40;
          PF_PART3(auVar65, 10) = PF_PART3(auVar64, 10);
          PF_PART10(auVar65, 0) = (unkuint10)local_d8[10] << 0x40;
          PF_PART8(auVar233, 5) = 0;
          PF_PART5(auVar233, 0) = PF_PART5(auVar65, 8);
          PF_PART1(auVar66,4) = local_d8[9];
          PF_PART4(auVar66, 0) = uVar333;
          PF_PART1(auVar66,5) = 0;
          PF_PART7(auVar66, 6) = SUB137(auVar233 << 0x40,6);
          PF_PART9(auVar115, 4) = PF_PART9(auVar66, 4);
          PF_PART4(auVar115, 0) = uVar333 & 0xffff;
          PF_PART8(local_328, 0) = PF_PART8(auVar115, 0) & 0xffffffff;
          PF_PART4(local_328, 8) = PF_PART4(auVar66, 4);
          PF_PART4(local_328, 12) = 0;
          PF_PART8(local_318, 0) = (ulong)PF_PART5(auVar65, 8) & 0xffffffff;
          local_318[8] = local_d8[0xb];
          PF_PART7(local_318, 9) = 0;
          PF_PART8(local_308, 0) = (ulong)CONCAT14(local_d8[0xd],(uint)local_d8[0xc]) & 0xffffffff;
          local_308[8] = local_d8[0xd];
          PF_PART7(local_308, 9) = 0;
          PF_PART7(local_2f8, 1) = 0;
          local_2f8[0] = local_d8[0xe];
          local_2f8[8] = local_d8[0xf];
          PF_PART7(local_2f8, 9) = 0;
          PF_PART1(auVar5,0xd) = 0;
          PF_PART13(auVar5, 0) = PF_PART13(local_c8, 0);
          PF_PART1(auVar5,0xe) = local_c8[7];
          PF_PART1(auVar31,0xc) = local_c8[6];
          PF_PART12(auVar31, 0) = PF_PART12(local_c8, 0);
          PF_PART2(auVar31, 13) = PF_PART2(auVar5, 13);
          PF_PART1(auVar46,0xb) = 0;
          PF_PART11(auVar46, 0) = PF_PART11(local_c8, 0);
          PF_PART3(auVar46, 12) = PF_PART3(auVar31, 12);
          PF_PART1(auVar67,10) = local_c8[5];
          PF_PART10(auVar67, 0) = PF_PART10(local_c8, 0);
          PF_PART4(auVar67, 11) = PF_PART4(auVar46, 11);
          PF_PART1(auVar116,9) = 0;
          PF_PART9(auVar116, 0) = PF_PART9(local_c8, 0);
          PF_PART5(auVar116, 10) = PF_PART5(auVar67, 10);
          PF_PART1(auVar145,8) = local_c8[4];
          PF_PART8(auVar145, 0) = PF_PART8(local_c8, 0);
          PF_PART6(auVar145, 9) = PF_PART6(auVar116, 9);
          PF_PART8(auVar234, 7) = 0;
          PF_PART7(auVar234, 0) = PF_PART7(auVar145, 8);
          Var222 = CONCAT81(SUB158(auVar234 << 0x40,7),local_c8[3]);
          PF_PART6(auVar235, 9) = 0;
          PF_PART9(auVar235, 0) = Var222;
          PF_PART10(auVar236, 1) = SUB1510(auVar235 << 0x30,5);
          PF_PART1(auVar236,0) = local_c8[2];
          PF_PART4(auVar237, 11) = 0;
          PF_PART11(auVar237, 0) = auVar236;
          PF_PART1(auVar176,2) = local_c8[1];
          PF_PART2(auVar176, 0) = PF_PART2(local_c8, 0);
          PF_PART12(auVar176, 3) = SUB1512(auVar237 << 0x20,3);
          PF_PART13(auVar189, 2) = PF_PART13(auVar176, 2);
          PF_PART2(auVar189, 0) = PF_PART2(local_c8, 0) & 0xff;
          uVar349 = (undefined2)Var222;
          PF_PART2(auVar6, 10) = 0;
          PF_PART10(auVar6, 0) = PF_PART10(auVar189, 0);
          PF_PART2(auVar6, 12) = uVar349;
          uVar305 = CONCAT42(PF_PART4(auVar6, 10),PF_PART2(auVar236, 0));
          PF_PART8(auVar238, 6) = 0;
          PF_PART6(auVar238, 0) = uVar305;
          PF_PART2(auVar68, 4) = PF_PART2(auVar176, 2);
          PF_PART4(auVar68, 0) = PF_PART4(auVar189, 0);
          PF_PART8(auVar68, 6) = SUB148(auVar238 << 0x40,6);
          PF_PART10(auVar117, 4) = PF_PART10(auVar68, 4);
          PF_PART4(auVar117, 0) = PF_PART4(auVar189, 0) & 0xffff;
          PF_PART8(local_2e8, 0) = PF_PART8(auVar117, 0) & 0xffffffff;
          PF_PART4(local_2e8, 8) = PF_PART4(auVar68, 4);
          PF_PART4(local_2e8, 12) = 0;
          PF_PART8(local_2d8, 0) = (ulong)uVar305 & 0xffffffff;
          PF_PART2(local_2d8, 8) = uVar349;
          PF_PART6(local_2d8, 10) = 0;
          PF_PART8(local_2c8, 0) = (ulong)CONCAT24(PF_PART2(auVar67, 10),(uint)PF_PART2(auVar145, 8)) & 0xffffffff;
          PF_PART2(local_2c8, 8) = PF_PART2(auVar67, 10);
          PF_PART6(local_2c8, 10) = 0;
          PF_PART8(local_2b8, 0) = (ulong)(PF_PART7(auVar145, 8) >> 0x20) & 0xffff;
          local_2b8[8] = local_c8[7];
          PF_PART7(local_2b8, 9) = 0;
          uVar333 = CONCAT13(0,CONCAT12(local_c8[9],(ushort)local_c8[8]));
          PF_PART1(auVar69,0xc) = local_c8[0xb];
          PF_PART12(auVar69, 0) = ZEXT112(local_c8[0xc]) << 0x40;
          PF_PART3(auVar70, 10) = PF_PART3(auVar69, 10);
          PF_PART10(auVar70, 0) = (unkuint10)local_c8[10] << 0x40;
          PF_PART8(auVar239, 5) = 0;
          PF_PART5(auVar239, 0) = PF_PART5(auVar70, 8);
          PF_PART1(auVar71,4) = local_c8[9];
          PF_PART4(auVar71, 0) = uVar333;
          PF_PART1(auVar71,5) = 0;
          PF_PART7(auVar71, 6) = SUB137(auVar239 << 0x40,6);
          PF_PART9(auVar118, 4) = PF_PART9(auVar71, 4);
          PF_PART4(auVar118, 0) = uVar333 & 0xffff;
          PF_PART8(local_2a8, 0) = PF_PART8(auVar118, 0) & 0xffffffff;
          PF_PART4(local_2a8, 8) = PF_PART4(auVar71, 4);
          PF_PART4(local_2a8, 12) = 0;
          PF_PART8(local_298, 0) = (ulong)PF_PART5(auVar70, 8) & 0xffffffff;
          local_298[8] = local_c8[0xb];
          PF_PART7(local_298, 9) = 0;
          PF_PART8(local_288, 0) = (ulong)CONCAT14(local_c8[0xd],(uint)local_c8[0xc]) & 0xffffffff;
          local_288[8] = local_c8[0xd];
          PF_PART7(local_288, 9) = 0;
          PF_PART7(local_278, 1) = 0;
          local_278[0] = local_c8[0xe];
          local_278[8] = local_c8[0xf];
          PF_PART7(local_278, 9) = 0;
          PF_PART1(auVar7,0xd) = 0;
          PF_PART13(auVar7, 0) = PF_PART13(local_b8, 0);
          PF_PART1(auVar7,0xe) = local_b8[7];
          PF_PART1(auVar32,0xc) = local_b8[6];
          PF_PART12(auVar32, 0) = PF_PART12(local_b8, 0);
          PF_PART2(auVar32, 13) = PF_PART2(auVar7, 13);
          PF_PART1(auVar47,0xb) = 0;
          PF_PART11(auVar47, 0) = PF_PART11(local_b8, 0);
          PF_PART3(auVar47, 12) = PF_PART3(auVar32, 12);
          PF_PART1(auVar72,10) = local_b8[5];
          PF_PART10(auVar72, 0) = PF_PART10(local_b8, 0);
          PF_PART4(auVar72, 11) = PF_PART4(auVar47, 11);
          PF_PART1(auVar119,9) = 0;
          PF_PART9(auVar119, 0) = PF_PART9(local_b8, 0);
          PF_PART5(auVar119, 10) = PF_PART5(auVar72, 10);
          PF_PART1(auVar146,8) = local_b8[4];
          PF_PART8(auVar146, 0) = PF_PART8(local_b8, 0);
          PF_PART6(auVar146, 9) = PF_PART6(auVar119, 9);
          PF_PART8(auVar240, 7) = 0;
          PF_PART7(auVar240, 0) = PF_PART7(auVar146, 8);
          Var222 = CONCAT81(SUB158(auVar240 << 0x40,7),local_b8[3]);
          PF_PART6(auVar241, 9) = 0;
          PF_PART9(auVar241, 0) = Var222;
          PF_PART10(auVar242, 1) = SUB1510(auVar241 << 0x30,5);
          PF_PART1(auVar242,0) = local_b8[2];
          PF_PART4(auVar243, 11) = 0;
          PF_PART11(auVar243, 0) = auVar242;
          PF_PART1(auVar177,2) = local_b8[1];
          PF_PART2(auVar177, 0) = PF_PART2(local_b8, 0);
          PF_PART12(auVar177, 3) = SUB1512(auVar243 << 0x20,3);
          PF_PART13(auVar190, 2) = PF_PART13(auVar177, 2);
          PF_PART2(auVar190, 0) = PF_PART2(local_b8, 0) & 0xff;
          uVar349 = (undefined2)Var222;
          PF_PART2(auVar8, 10) = 0;
          PF_PART10(auVar8, 0) = PF_PART10(auVar190, 0);
          PF_PART2(auVar8, 12) = uVar349;
          uVar305 = CONCAT42(PF_PART4(auVar8, 10),PF_PART2(auVar242, 0));
          PF_PART8(auVar244, 6) = 0;
          PF_PART6(auVar244, 0) = uVar305;
          PF_PART2(auVar73, 4) = PF_PART2(auVar177, 2);
          PF_PART4(auVar73, 0) = PF_PART4(auVar190, 0);
          PF_PART8(auVar73, 6) = SUB148(auVar244 << 0x40,6);
          PF_PART10(auVar120, 4) = PF_PART10(auVar73, 4);
          PF_PART4(auVar120, 0) = PF_PART4(auVar190, 0) & 0xffff;
          PF_PART8(local_268, 0) = PF_PART8(auVar120, 0) & 0xffffffff;
          PF_PART4(local_268, 8) = PF_PART4(auVar73, 4);
          PF_PART4(local_268, 12) = 0;
          PF_PART8(local_258, 0) = (ulong)uVar305 & 0xffffffff;
          PF_PART2(local_258, 8) = uVar349;
          PF_PART6(local_258, 10) = 0;
          PF_PART8(local_248, 0) = (ulong)CONCAT24(PF_PART2(auVar72, 10),(uint)PF_PART2(auVar146, 8)) & 0xffffffff;
          PF_PART2(local_248, 8) = PF_PART2(auVar72, 10);
          PF_PART6(local_248, 10) = 0;
          PF_PART8(local_238, 0) = (ulong)(PF_PART7(auVar146, 8) >> 0x20) & 0xffff;
          local_238[8] = local_b8[7];
          PF_PART7(local_238, 9) = 0;
          uVar333 = CONCAT13(0,CONCAT12(local_b8[9],(ushort)local_b8[8]));
          PF_PART1(auVar74,0xc) = local_b8[0xb];
          PF_PART12(auVar74, 0) = ZEXT112(local_b8[0xc]) << 0x40;
          PF_PART3(auVar75, 10) = PF_PART3(auVar74, 10);
          PF_PART10(auVar75, 0) = (unkuint10)local_b8[10] << 0x40;
          PF_PART8(auVar245, 5) = 0;
          PF_PART5(auVar245, 0) = PF_PART5(auVar75, 8);
          PF_PART1(auVar76,4) = local_b8[9];
          PF_PART4(auVar76, 0) = uVar333;
          PF_PART1(auVar76,5) = 0;
          PF_PART7(auVar76, 6) = SUB137(auVar245 << 0x40,6);
          PF_PART9(auVar121, 4) = PF_PART9(auVar76, 4);
          PF_PART4(auVar121, 0) = uVar333 & 0xffff;
          PF_PART8(local_228, 0) = PF_PART8(auVar121, 0) & 0xffffffff;
          PF_PART4(local_228, 8) = PF_PART4(auVar76, 4);
          PF_PART4(local_228, 12) = 0;
          PF_PART8(local_218, 0) = (ulong)PF_PART5(auVar75, 8) & 0xffffffff;
          local_218[8] = local_b8[0xb];
          PF_PART7(local_218, 9) = 0;
          PF_PART8(local_208, 0) = (ulong)CONCAT14(local_b8[0xd],(uint)local_b8[0xc]) & 0xffffffff;
          local_208[8] = local_b8[0xd];
          PF_PART7(local_208, 9) = 0;
          PF_PART7(local_1f8, 1) = 0;
          local_1f8[0] = local_b8[0xe];
          local_1f8[8] = local_b8[0xf];
          PF_PART7(local_1f8, 9) = 0;
          PF_PART16(local_e8,0) = (uint128)0x0;
          PF_PART16(local_d8,0) = (uint128)0x0;
          PF_PART16(local_c8,0) = (uint128)0x0;
          PF_PART16(local_b8,0) = (uint128)0x0;
          recovered_1001c1c0((long *)local_e8,(long *)local_3e8);
          recovered_1000c9a0((uint128 *)&local_718,(long)local_e8);
          recovered_1000ec80(local_8b8,local_618);
          recovered_1000d840((long *)local_3e8,(long)&local_718,local_8b8);
          recovered_1000d840((long *)local_7d8,(long)local_698,local_8b8);
          recovered_1000ed80((undefined2 *)local_818,&local_7d8);
          recovered_1000ed80((undefined2 *)local_838,(uint128 *)local_3e8);
          local_7f9 = local_7f9 ^ local_838[0] << 7;
          local_4f8 = 0x6a09e667f3bcc908;
          uStack_4f0 = 0xbb67ae8584caa73b;
          local_4e8 = 0x3c6ef372fe94f82b;
          local_4e0 = 0xa54ff53a5f1d36f1;
          local_4d8 = 0x510e527fade682d1;
          local_4d0 = 0x9b05688c2b3e6c1f;
          local_4c8 = 0x1f83d9abfb41bd6b;
          local_4c0 = 0x5be0cd19137e2179;
          local_430 = 0;
          local_4b8 = 0x20;
          recovered_10001c80(local_4b0,local_818,0x20,lVar313,(undefined8 *)in_R8);
          local_430 = local_430 + 0x20;
          if (local_430 == 0x80) {
            recovered_1000b770(&local_4f8,(long)local_4b0);
            local_430 = 0;
          }
          local_4b8 = local_4b8 + 0x20;
          uVar327 = 0x20;
          puVar336 = (undefined8 *)&DAT_10024110;
          do {
            uVar318 = (ulong)(0x80 - local_430);
            if (uVar327 < 0x80 - local_430) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((ulong)local_430 + (long)local_4b0),puVar336,uVar318,
                               lVar313,(undefined8 *)in_R8);
            local_430 = local_430 + (int)uVar318;
            if (local_430 == 0x80) {
              recovered_1000b770(&local_4f8,(long)local_4b0);
              local_430 = 0;
            }
            puVar336 = (undefined8 *)((long)puVar336 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          local_4b8 = local_4b8 + 0x20;
          uVar327 = 0x20;
          puVar315 = local_738;
          do {
            uVar318 = (ulong)(0x80 - local_430);
            if (uVar327 < 0x80 - local_430) {
              uVar318 = uVar327;
            }
            recovered_10001c80((undefined8 *)((ulong)local_430 + (long)local_4b0),
                               (undefined8 *)puVar315,uVar318,lVar313,(undefined8 *)in_R8);
            local_430 = local_430 + (int)uVar318;
            if (local_430 == 0x80) {
              recovered_1000b770(&local_4f8,(long)local_4b0);
              local_430 = 0;
            }
            puVar315 = (uint *)((long)puVar315 + uVar318);
            uVar327 = uVar327 - uVar318;
          } while (uVar327 != 0);
          recovered_1000c4e0(&local_4f8,(ulong *)local_7d8);
          PF_PART1(auVar9,0xd) = 0;
          PF_PART13(auVar9, 0) = PF_PART13(local_7d8, 0);
          PF_PART1(auVar9,0xe) = local_7d8[7];
          PF_PART1(auVar33,0xc) = local_7d8[6];
          PF_PART12(auVar33, 0) = PF_PART12(local_7d8, 0);
          PF_PART2(auVar33, 13) = PF_PART2(auVar9, 13);
          PF_PART1(auVar48,0xb) = 0;
          PF_PART11(auVar48, 0) = PF_PART11(local_7d8, 0);
          PF_PART3(auVar48, 12) = PF_PART3(auVar33, 12);
          PF_PART1(auVar77,10) = local_7d8[5];
          PF_PART10(auVar77, 0) = PF_PART10(local_7d8, 0);
          PF_PART4(auVar77, 11) = PF_PART4(auVar48, 11);
          PF_PART1(auVar122,9) = 0;
          PF_PART9(auVar122, 0) = PF_PART9(local_7d8, 0);
          PF_PART5(auVar122, 10) = PF_PART5(auVar77, 10);
          PF_PART1(auVar147,8) = local_7d8[4];
          PF_PART8(auVar147, 0) = PF_PART8(local_7d8, 0);
          PF_PART6(auVar147, 9) = PF_PART6(auVar122, 9);
          PF_PART8(auVar246, 7) = 0;
          PF_PART7(auVar246, 0) = PF_PART7(auVar147, 8);
          Var222 = CONCAT81(SUB158(auVar246 << 0x40,7),local_7d8[3]);
          PF_PART6(auVar247, 9) = 0;
          PF_PART9(auVar247, 0) = Var222;
          PF_PART10(auVar248, 1) = SUB1510(auVar247 << 0x30,5);
          PF_PART1(auVar248,0) = local_7d8[2];
          PF_PART4(auVar249, 11) = 0;
          PF_PART11(auVar249, 0) = auVar248;
          PF_PART1(auVar178,2) = local_7d8[1];
          PF_PART2(auVar178, 0) = PF_PART2(local_7d8, 0);
          PF_PART12(auVar178, 3) = SUB1512(auVar249 << 0x20,3);
          PF_PART13(auVar191, 2) = PF_PART13(auVar178, 2);
          PF_PART2(auVar191, 0) = PF_PART2(local_7d8, 0) & 0xff;
          uVar349 = (undefined2)Var222;
          PF_PART2(auVar10, 10) = 0;
          PF_PART10(auVar10, 0) = PF_PART10(auVar191, 0);
          PF_PART2(auVar10, 12) = uVar349;
          uVar305 = CONCAT42(PF_PART4(auVar10, 10),PF_PART2(auVar248, 0));
          PF_PART8(auVar250, 6) = 0;
          PF_PART6(auVar250, 0) = uVar305;
          PF_PART2(auVar78, 4) = PF_PART2(auVar178, 2);
          PF_PART4(auVar78, 0) = PF_PART4(auVar191, 0);
          PF_PART8(auVar78, 6) = SUB148(auVar250 << 0x40,6);
          PF_PART10(auVar123, 4) = PF_PART10(auVar78, 4);
          PF_PART4(auVar123, 0) = PF_PART4(auVar191, 0) & 0xffff;
          PF_PART8(local_3e8, 0) = PF_PART8(auVar123, 0) & 0xffffffff;
          PF_PART4(local_3e8, 8) = PF_PART4(auVar78, 4);
          uStack_3dc = 0;
          PF_PART8(local_3d8, 0) = (ulong)uVar305 & 0xffffffff;
          PF_PART2(local_3d8, 8) = uVar349;
          PF_PART6(local_3d8, 10) = 0;
          PF_PART8(local_3c8, 0) = (ulong)CONCAT24(PF_PART2(auVar77, 10),(uint)PF_PART2(auVar147, 8)) & 0xffffffff;
          PF_PART2(local_3c8, 8) = PF_PART2(auVar77, 10);
          PF_PART6(local_3c8, 10) = 0;
          PF_PART8(auStack_3b8, 0) = (ulong)(PF_PART7(auVar147, 8) >> 0x20) & 0xffff;
          auStack_3b8[8] = local_7d8[7];
          PF_PART7(auStack_3b8, 9) = 0;
          uVar333 = CONCAT13(0,CONCAT12(local_7d8[9],(ushort)local_7d8[8]));
          PF_PART1(auVar79,0xc) = local_7d8[0xb];
          PF_PART12(auVar79, 0) = ZEXT112(local_7d8[0xc]) << 0x40;
          PF_PART3(auVar80, 10) = PF_PART3(auVar79, 10);
          PF_PART10(auVar80, 0) = (unkuint10)local_7d8[10] << 0x40;
          PF_PART8(auVar251, 5) = 0;
          PF_PART5(auVar251, 0) = PF_PART5(auVar80, 8);
          PF_PART1(auVar81,4) = local_7d8[9];
          PF_PART4(auVar81, 0) = uVar333;
          PF_PART1(auVar81,5) = 0;
          PF_PART7(auVar81, 6) = SUB137(auVar251 << 0x40,6);
          PF_PART9(auVar124, 4) = PF_PART9(auVar81, 4);
          PF_PART4(auVar124, 0) = uVar333 & 0xffff;
          PF_PART8(local_3a8, 0) = PF_PART8(auVar124, 0) & 0xffffffff;
          PF_PART4(local_3a8, 8) = PF_PART4(auVar81, 4);
          PF_PART4(local_3a8, 12) = 0;
          PF_PART8(local_398, 0) = (ulong)PF_PART5(auVar80, 8) & 0xffffffff;
          local_398[8] = local_7d8[0xb];
          PF_PART7(local_398, 9) = 0;
          PF_PART8(local_388, 0) = (ulong)CONCAT14(local_7d8[0xd],(uint)local_7d8[0xc]) & 0xffffffff;
          local_388[8] = local_7d8[0xd];
          PF_PART7(local_388, 9) = 0;
          PF_PART7(local_378, 1) = 0;
          local_378[0] = local_7d8[0xe];
          local_378[8] = local_7d8[0xf];
          PF_PART7(local_378, 9) = 0;
          PF_PART1(auVar11,0xd) = 0;
          PF_PART13(auVar11, 0) = PF_PART13(local_7c8, 0);
          PF_PART1(auVar11,0xe) = local_7c8[7];
          PF_PART1(auVar34,0xc) = local_7c8[6];
          PF_PART12(auVar34, 0) = PF_PART12(local_7c8, 0);
          PF_PART2(auVar34, 13) = PF_PART2(auVar11, 13);
          PF_PART1(auVar49,0xb) = 0;
          PF_PART11(auVar49, 0) = PF_PART11(local_7c8, 0);
          PF_PART3(auVar49, 12) = PF_PART3(auVar34, 12);
          PF_PART1(auVar82,10) = local_7c8[5];
          PF_PART10(auVar82, 0) = PF_PART10(local_7c8, 0);
          PF_PART4(auVar82, 11) = PF_PART4(auVar49, 11);
          PF_PART1(auVar125,9) = 0;
          PF_PART9(auVar125, 0) = PF_PART9(local_7c8, 0);
          PF_PART5(auVar125, 10) = PF_PART5(auVar82, 10);
          PF_PART1(auVar148,8) = local_7c8[4];
          PF_PART8(auVar148, 0) = PF_PART8(local_7c8, 0);
          PF_PART6(auVar148, 9) = PF_PART6(auVar125, 9);
          PF_PART8(auVar252, 7) = 0;
          PF_PART7(auVar252, 0) = PF_PART7(auVar148, 8);
          Var222 = CONCAT81(SUB158(auVar252 << 0x40,7),local_7c8[3]);
          PF_PART6(auVar253, 9) = 0;
          PF_PART9(auVar253, 0) = Var222;
          PF_PART10(auVar254, 1) = SUB1510(auVar253 << 0x30,5);
          PF_PART1(auVar254,0) = local_7c8[2];
          PF_PART4(auVar255, 11) = 0;
          PF_PART11(auVar255, 0) = auVar254;
          PF_PART1(auVar179,2) = local_7c8[1];
          PF_PART2(auVar179, 0) = PF_PART2(local_7c8, 0);
          PF_PART12(auVar179, 3) = SUB1512(auVar255 << 0x20,3);
          PF_PART13(auVar192, 2) = PF_PART13(auVar179, 2);
          PF_PART2(auVar192, 0) = PF_PART2(local_7c8, 0) & 0xff;
          uVar349 = (undefined2)Var222;
          PF_PART2(auVar12, 10) = 0;
          PF_PART10(auVar12, 0) = PF_PART10(auVar192, 0);
          PF_PART2(auVar12, 12) = uVar349;
          uVar305 = CONCAT42(PF_PART4(auVar12, 10),PF_PART2(auVar254, 0));
          PF_PART8(auVar256, 6) = 0;
          PF_PART6(auVar256, 0) = uVar305;
          PF_PART2(auVar83, 4) = PF_PART2(auVar179, 2);
          PF_PART4(auVar83, 0) = PF_PART4(auVar192, 0);
          PF_PART8(auVar83, 6) = SUB148(auVar256 << 0x40,6);
          PF_PART10(auVar126, 4) = PF_PART10(auVar83, 4);
          PF_PART4(auVar126, 0) = PF_PART4(auVar192, 0) & 0xffff;
          PF_PART8(local_368, 0) = PF_PART8(auVar126, 0) & 0xffffffff;
          PF_PART4(local_368, 8) = PF_PART4(auVar83, 4);
          PF_PART4(local_368, 12) = 0;
          PF_PART8(local_358, 0) = (ulong)uVar305 & 0xffffffff;
          PF_PART2(local_358, 8) = uVar349;
          PF_PART6(local_358, 10) = 0;
          PF_PART8(local_348, 0) = (ulong)CONCAT24(PF_PART2(auVar82, 10),(uint)PF_PART2(auVar148, 8)) & 0xffffffff;
          PF_PART2(local_348, 8) = PF_PART2(auVar82, 10);
          PF_PART6(local_348, 10) = 0;
          PF_PART8(local_338, 0) = (ulong)(PF_PART7(auVar148, 8) >> 0x20) & 0xffff;
          local_338[8] = local_7c8[7];
          PF_PART7(local_338, 9) = 0;
          uVar333 = CONCAT13(0,CONCAT12(local_7c8[9],(ushort)local_7c8[8]));
          PF_PART1(auVar84,0xc) = local_7c8[0xb];
          PF_PART12(auVar84, 0) = ZEXT112(local_7c8[0xc]) << 0x40;
          PF_PART3(auVar85, 10) = PF_PART3(auVar84, 10);
          PF_PART10(auVar85, 0) = (unkuint10)local_7c8[10] << 0x40;
          PF_PART8(auVar257, 5) = 0;
          PF_PART5(auVar257, 0) = PF_PART5(auVar85, 8);
          PF_PART1(auVar86,4) = local_7c8[9];
          PF_PART4(auVar86, 0) = uVar333;
          PF_PART1(auVar86,5) = 0;
          PF_PART7(auVar86, 6) = SUB137(auVar257 << 0x40,6);
          PF_PART9(auVar127, 4) = PF_PART9(auVar86, 4);
          PF_PART4(auVar127, 0) = uVar333 & 0xffff;
          PF_PART8(local_328, 0) = PF_PART8(auVar127, 0) & 0xffffffff;
          PF_PART4(local_328, 8) = PF_PART4(auVar86, 4);
          PF_PART4(local_328, 12) = 0;
          PF_PART8(local_318, 0) = (ulong)PF_PART5(auVar85, 8) & 0xffffffff;
          local_318[8] = local_7c8[0xb];
          PF_PART7(local_318, 9) = 0;
          PF_PART8(local_308, 0) = (ulong)CONCAT14(local_7c8[0xd],(uint)local_7c8[0xc]) & 0xffffffff;
          local_308[8] = local_7c8[0xd];
          PF_PART7(local_308, 9) = 0;
          PF_PART7(local_2f8, 1) = 0;
          local_2f8[0] = local_7c8[0xe];
          local_2f8[8] = local_7c8[0xf];
          PF_PART7(local_2f8, 9) = 0;
          PF_PART1(auVar13,0xd) = 0;
          PF_PART13(auVar13, 0) = PF_PART13(local_7b8, 0);
          PF_PART1(auVar13,0xe) = local_7b8[7];
          PF_PART1(auVar35,0xc) = local_7b8[6];
          PF_PART12(auVar35, 0) = PF_PART12(local_7b8, 0);
          PF_PART2(auVar35, 13) = PF_PART2(auVar13, 13);
          PF_PART1(auVar50,0xb) = 0;
          PF_PART11(auVar50, 0) = PF_PART11(local_7b8, 0);
          PF_PART3(auVar50, 12) = PF_PART3(auVar35, 12);
          PF_PART1(auVar87,10) = local_7b8[5];
          PF_PART10(auVar87, 0) = PF_PART10(local_7b8, 0);
          PF_PART4(auVar87, 11) = PF_PART4(auVar50, 11);
          PF_PART1(auVar128,9) = 0;
          PF_PART9(auVar128, 0) = PF_PART9(local_7b8, 0);
          PF_PART5(auVar128, 10) = PF_PART5(auVar87, 10);
          PF_PART1(auVar149,8) = local_7b8[4];
          PF_PART8(auVar149, 0) = PF_PART8(local_7b8, 0);
          PF_PART6(auVar149, 9) = PF_PART6(auVar128, 9);
          PF_PART8(auVar258, 7) = 0;
          PF_PART7(auVar258, 0) = PF_PART7(auVar149, 8);
          Var222 = CONCAT81(SUB158(auVar258 << 0x40,7),local_7b8[3]);
          PF_PART6(auVar259, 9) = 0;
          PF_PART9(auVar259, 0) = Var222;
          PF_PART10(auVar260, 1) = SUB1510(auVar259 << 0x30,5);
          PF_PART1(auVar260,0) = local_7b8[2];
          PF_PART4(auVar261, 11) = 0;
          PF_PART11(auVar261, 0) = auVar260;
          PF_PART1(auVar180,2) = local_7b8[1];
          PF_PART2(auVar180, 0) = PF_PART2(local_7b8, 0);
          PF_PART12(auVar180, 3) = SUB1512(auVar261 << 0x20,3);
          PF_PART13(auVar193, 2) = PF_PART13(auVar180, 2);
          PF_PART2(auVar193, 0) = PF_PART2(local_7b8, 0) & 0xff;
          uVar349 = (undefined2)Var222;
          PF_PART2(auVar14, 10) = 0;
          PF_PART10(auVar14, 0) = PF_PART10(auVar193, 0);
          PF_PART2(auVar14, 12) = uVar349;
          uVar305 = CONCAT42(PF_PART4(auVar14, 10),PF_PART2(auVar260, 0));
          PF_PART8(auVar262, 6) = 0;
          PF_PART6(auVar262, 0) = uVar305;
          PF_PART2(auVar88, 4) = PF_PART2(auVar180, 2);
          PF_PART4(auVar88, 0) = PF_PART4(auVar193, 0);
          PF_PART8(auVar88, 6) = SUB148(auVar262 << 0x40,6);
          PF_PART10(auVar129, 4) = PF_PART10(auVar88, 4);
          PF_PART4(auVar129, 0) = PF_PART4(auVar193, 0) & 0xffff;
          PF_PART8(local_2e8, 0) = PF_PART8(auVar129, 0) & 0xffffffff;
          PF_PART4(local_2e8, 8) = PF_PART4(auVar88, 4);
          PF_PART4(local_2e8, 12) = 0;
          PF_PART8(local_2d8, 0) = (ulong)uVar305 & 0xffffffff;
          PF_PART2(local_2d8, 8) = uVar349;
          PF_PART6(local_2d8, 10) = 0;
          PF_PART8(local_2c8, 0) = (ulong)CONCAT24(PF_PART2(auVar87, 10),(uint)PF_PART2(auVar149, 8)) & 0xffffffff;
          PF_PART2(local_2c8, 8) = PF_PART2(auVar87, 10);
          PF_PART6(local_2c8, 10) = 0;
          PF_PART8(local_2b8, 0) = (ulong)(PF_PART7(auVar149, 8) >> 0x20) & 0xffff;
          local_2b8[8] = local_7b8[7];
          PF_PART7(local_2b8, 9) = 0;
          uVar333 = CONCAT13(0,CONCAT12(local_7b8[9],(ushort)local_7b8[8]));
          PF_PART1(auVar89,0xc) = local_7b8[0xb];
          PF_PART12(auVar89, 0) = ZEXT112(local_7b8[0xc]) << 0x40;
          PF_PART3(auVar90, 10) = PF_PART3(auVar89, 10);
          PF_PART10(auVar90, 0) = (unkuint10)local_7b8[10] << 0x40;
          PF_PART8(auVar263, 5) = 0;
          PF_PART5(auVar263, 0) = PF_PART5(auVar90, 8);
          PF_PART1(auVar91,4) = local_7b8[9];
          PF_PART4(auVar91, 0) = uVar333;
          PF_PART1(auVar91,5) = 0;
          PF_PART7(auVar91, 6) = SUB137(auVar263 << 0x40,6);
          PF_PART9(auVar130, 4) = PF_PART9(auVar91, 4);
          PF_PART4(auVar130, 0) = uVar333 & 0xffff;
          PF_PART8(local_2a8, 0) = PF_PART8(auVar130, 0) & 0xffffffff;
          PF_PART4(local_2a8, 8) = PF_PART4(auVar91, 4);
          PF_PART4(local_2a8, 12) = 0;
          PF_PART8(local_298, 0) = (ulong)PF_PART5(auVar90, 8) & 0xffffffff;
          local_298[8] = local_7b8[0xb];
          PF_PART7(local_298, 9) = 0;
          PF_PART8(local_288, 0) = (ulong)CONCAT14(local_7b8[0xd],(uint)local_7b8[0xc]) & 0xffffffff;
          local_288[8] = local_7b8[0xd];
          PF_PART7(local_288, 9) = 0;
          PF_PART7(local_278, 1) = 0;
          local_278[0] = local_7b8[0xe];
          local_278[8] = local_7b8[0xf];
          PF_PART7(local_278, 9) = 0;
          PF_PART1(auVar15,0xd) = 0;
          PF_PART13(auVar15, 0) = PF_PART13(local_7a8, 0);
          PF_PART1(auVar15,0xe) = local_7a8[7];
          PF_PART1(auVar36,0xc) = local_7a8[6];
          PF_PART12(auVar36, 0) = PF_PART12(local_7a8, 0);
          PF_PART2(auVar36, 13) = PF_PART2(auVar15, 13);
          PF_PART1(auVar51,0xb) = 0;
          PF_PART11(auVar51, 0) = PF_PART11(local_7a8, 0);
          PF_PART3(auVar51, 12) = PF_PART3(auVar36, 12);
          PF_PART1(auVar92,10) = local_7a8[5];
          PF_PART10(auVar92, 0) = PF_PART10(local_7a8, 0);
          PF_PART4(auVar92, 11) = PF_PART4(auVar51, 11);
          PF_PART1(auVar131,9) = 0;
          PF_PART9(auVar131, 0) = PF_PART9(local_7a8, 0);
          PF_PART5(auVar131, 10) = PF_PART5(auVar92, 10);
          PF_PART1(auVar150,8) = local_7a8[4];
          PF_PART8(auVar150, 0) = PF_PART8(local_7a8, 0);
          PF_PART6(auVar150, 9) = PF_PART6(auVar131, 9);
          PF_PART8(auVar264, 7) = 0;
          PF_PART7(auVar264, 0) = PF_PART7(auVar150, 8);
          Var222 = CONCAT81(SUB158(auVar264 << 0x40,7),local_7a8[3]);
          PF_PART6(auVar265, 9) = 0;
          PF_PART9(auVar265, 0) = Var222;
          PF_PART10(auVar266, 1) = SUB1510(auVar265 << 0x30,5);
          PF_PART1(auVar266,0) = local_7a8[2];
          PF_PART4(auVar267, 11) = 0;
          PF_PART11(auVar267, 0) = auVar266;
          PF_PART1(auVar181,2) = local_7a8[1];
          PF_PART2(auVar181, 0) = PF_PART2(local_7a8, 0);
          PF_PART12(auVar181, 3) = SUB1512(auVar267 << 0x20,3);
          PF_PART13(auVar194, 2) = PF_PART13(auVar181, 2);
          PF_PART2(auVar194, 0) = PF_PART2(local_7a8, 0) & 0xff;
          uVar349 = (undefined2)Var222;
          PF_PART2(auVar16, 10) = 0;
          PF_PART10(auVar16, 0) = PF_PART10(auVar194, 0);
          PF_PART2(auVar16, 12) = uVar349;
          uVar305 = CONCAT42(PF_PART4(auVar16, 10),PF_PART2(auVar266, 0));
          PF_PART8(auVar268, 6) = 0;
          PF_PART6(auVar268, 0) = uVar305;
          PF_PART2(auVar93, 4) = PF_PART2(auVar181, 2);
          PF_PART4(auVar93, 0) = PF_PART4(auVar194, 0);
          PF_PART8(auVar93, 6) = SUB148(auVar268 << 0x40,6);
          PF_PART10(auVar132, 4) = PF_PART10(auVar93, 4);
          PF_PART4(auVar132, 0) = PF_PART4(auVar194, 0) & 0xffff;
          PF_PART8(local_268, 0) = PF_PART8(auVar132, 0) & 0xffffffff;
          PF_PART4(local_268, 8) = PF_PART4(auVar93, 4);
          PF_PART4(local_268, 12) = 0;
          PF_PART8(local_258, 0) = (ulong)uVar305 & 0xffffffff;
          PF_PART2(local_258, 8) = uVar349;
          PF_PART6(local_258, 10) = 0;
          PF_PART8(local_248, 0) = (ulong)CONCAT24(PF_PART2(auVar92, 10),(uint)PF_PART2(auVar150, 8)) & 0xffffffff;
          PF_PART2(local_248, 8) = PF_PART2(auVar92, 10);
          PF_PART6(local_248, 10) = 0;
          PF_PART8(local_238, 0) = (ulong)(PF_PART7(auVar150, 8) >> 0x20) & 0xffff;
          local_238[8] = local_7a8[7];
          PF_PART7(local_238, 9) = 0;
          uVar333 = CONCAT13(0,CONCAT12(local_7a8[9],(ushort)local_7a8[8]));
          PF_PART1(auVar94,0xc) = local_7a8[0xb];
          PF_PART12(auVar94, 0) = ZEXT112(local_7a8[0xc]) << 0x40;
          PF_PART3(auVar95, 10) = PF_PART3(auVar94, 10);
          PF_PART10(auVar95, 0) = (unkuint10)local_7a8[10] << 0x40;
          PF_PART8(auVar269, 5) = 0;
          PF_PART5(auVar269, 0) = PF_PART5(auVar95, 8);
          PF_PART1(auVar96,4) = local_7a8[9];
          PF_PART4(auVar96, 0) = uVar333;
          PF_PART1(auVar96,5) = 0;
          PF_PART7(auVar96, 6) = SUB137(auVar269 << 0x40,6);
          PF_PART9(auVar133, 4) = PF_PART9(auVar96, 4);
          PF_PART4(auVar133, 0) = uVar333 & 0xffff;
          PF_PART8(local_228, 0) = PF_PART8(auVar133, 0) & 0xffffffff;
          PF_PART4(local_228, 8) = PF_PART4(auVar96, 4);
          PF_PART4(local_228, 12) = 0;
          PF_PART8(local_218, 0) = (ulong)PF_PART5(auVar95, 8) & 0xffffffff;
          local_218[8] = local_7a8[0xb];
          PF_PART7(local_218, 9) = 0;
          PF_PART8(local_208, 0) = (ulong)CONCAT14(local_7a8[0xd],(uint)local_7a8[0xc]) & 0xffffffff;
          local_208[8] = local_7a8[0xd];
          PF_PART7(local_208, 9) = 0;
          PF_PART7(local_1f8, 1) = 0;
          local_1f8[0] = local_7a8[0xe];
          local_1f8[8] = local_7a8[0xf];
          PF_PART7(local_1f8, 9) = 0;
          PF_PART16(local_7d8,0) = (uint128)0x0;
          PF_PART16(local_7c8,0) = (uint128)0x0;
          PF_PART16(local_7b8,0) = (uint128)0x0;
          PF_PART16(local_7a8,0) = (uint128)0x0;
          recovered_1001c1c0((long *)local_7d8,(long *)local_3e8);
          PF_PART16(local_2e8,0) = (uint128)0x0;
          PF_PART16(local_2d8,0) = (uint128)0x0;
          PF_PART16(local_2c8,0) = (uint128)0x0;
          PF_PART16(local_2b8,0) = (uint128)0x0;
          PF_PART16(local_2a8,0) = (uint128)0x0;
          PF_PART16(local_298,0) = (uint128)0x0;
          PF_PART16(local_288,0) = (uint128)0x0;
          PF_PART16(local_278,0) = (uint128)0x0;
          PF_PART16(local_268,0) = (uint128)0x0;
          PF_PART16(local_258,0) = (uint128)0x0;
          PF_PART16(local_248,0) = (uint128)0x0;
          PF_PART16(local_238,0) = (uint128)0x0;
          PF_PART16(local_228,0) = (uint128)0x0;
          PF_PART16(local_218,0) = (uint128)0x0;
          PF_PART16(local_208,0) = (uint128)0x0;
          PF_PART16(local_1f8,0) = (uint128)0x0;
          uVar344 = local_e8[7];
          PF_PART1(auVar17,0xd) = 0;
          PF_PART13(auVar17, 0) = PF_PART13(local_e8, 0);
          PF_PART1(auVar17,0xe) = uVar344;
          PF_PART1(auVar37,0xc) = local_e8[6];
          PF_PART12(auVar37, 0) = PF_PART12(local_e8, 0);
          PF_PART2(auVar37, 13) = PF_PART2(auVar17, 13);
          PF_PART1(auVar52,0xb) = 0;
          PF_PART11(auVar52, 0) = PF_PART11(local_e8, 0);
          PF_PART3(auVar52, 12) = PF_PART3(auVar37, 12);
          uVar343 = local_e8[5];
          PF_PART1(auVar97,10) = uVar343;
          PF_PART10(auVar97, 0) = PF_PART10(local_e8, 0);
          PF_PART4(auVar97, 11) = PF_PART4(auVar52, 11);
          PF_PART1(auVar134,9) = 0;
          PF_PART9(auVar134, 0) = PF_PART9(local_e8, 0);
          PF_PART5(auVar134, 10) = PF_PART5(auVar97, 10);
          PF_PART1(auVar151,8) = local_e8[4];
          PF_PART8(auVar151, 0) = PF_PART8(local_e8, 0);
          PF_PART6(auVar151, 9) = PF_PART6(auVar134, 9);
          PF_PART8(auVar270, 7) = 0;
          PF_PART7(auVar270, 0) = PF_PART7(auVar151, 8);
          uVar341 = local_e8[3];
          Var222 = CONCAT81(SUB158(auVar270 << 0x40,7),uVar341);
          PF_PART6(auVar271, 9) = 0;
          PF_PART9(auVar271, 0) = Var222;
          PF_PART10(auVar272, 1) = SUB1510(auVar271 << 0x30,5);
          PF_PART1(auVar272,0) = local_e8[2];
          PF_PART4(auVar273, 11) = 0;
          PF_PART11(auVar273, 0) = auVar272;
          PF_PART1(auVar182,2) = local_e8[1];
          PF_PART2(auVar182, 0) = PF_PART2(local_e8, 0);
          PF_PART12(auVar182, 3) = SUB1512(auVar273 << 0x20,3);
          PF_PART13(auVar195, 2) = PF_PART13(auVar182, 2);
          PF_PART2(auVar195, 0) = PF_PART2(local_e8, 0) & 0xff;
          PF_PART2(auVar18, 10) = 0;
          PF_PART10(auVar18, 0) = PF_PART10(auVar195, 0);
          PF_PART2(auVar18, 12) = (short)Var222;
          PF_PART4(auVar274, 2) = PF_PART4(auVar18, 10);
          PF_PART2(auVar274, 0) = PF_PART2(auVar272, 0);
          PF_PART8(auVar274, 6) = 0;
          PF_PART2(auVar98, 4) = PF_PART2(auVar182, 2);
          PF_PART4(auVar98, 0) = PF_PART4(auVar195, 0);
          PF_PART8(auVar98, 6) = SUB148(auVar274 << 0x40,6);
          PF_PART10(auVar135, 4) = PF_PART10(auVar98, 4);
          PF_PART4(auVar135, 0) = PF_PART4(auVar195, 0) & 0xffff;
          PF_PART8(local_3e8, 0) = PF_PART8(auVar135, 0) & 0xffffffff;
          PF_PART4(local_3e8, 8) = PF_PART4(auVar98, 4);
          uStack_3dc = 0;
          PF_PART8(local_3d8, 0) =
               (ulong)(CONCAT14(uVar341,(uint)CONCAT12(uVar341,PF_PART2(local_e8, 2))) & 0xffffff00ff) &
               0xffff;
          local_3d8[8] = uVar341;
          PF_PART7(local_3d8, 9) = 0;
          uVar327 = (ulong)CONCAT12(uVar343,PF_PART2(local_e8, 4)) & 0xffffffffffff00ff;
          PF_PART4(auVar158, 8) = 0;
          PF_PART8(auVar158, 0) = uVar327;
          PF_PART1(auVar158,0xc) = uVar344;
          PF_PART1(auVar159,8) = local_e8[6];
          PF_PART8(auVar159, 0) = uVar327;
          PF_PART1(auVar159,9) = 0;
          PF_PART3(auVar159, 10) = PF_PART3(auVar158, 10);
          PF_PART8(auVar275, 5) = 0;
          PF_PART5(auVar275, 0) = PF_PART5(auVar159, 8);
          PF_PART1(auVar160,4) = uVar343;
          PF_PART4(auVar160, 0) = (uint)uVar327;
          PF_PART1(auVar160,5) = 0;
          PF_PART7(auVar160, 6) = SUB137(auVar275 << 0x40,6);
          PF_PART9(auVar161, 4) = PF_PART9(auVar160, 4);
          PF_PART4(auVar161, 0) = (uint)uVar327 & 0xffff;
          PF_PART8(local_3c8, 0) = PF_PART8(auVar161, 0) & 0xffffffff;
          PF_PART4(local_3c8, 8) = PF_PART4(auVar160, 4);
          PF_PART4(local_3c8, 12) = 0;
          PF_PART8(auStack_3b8, 0) =
               (ulong)(CONCAT14(uVar344,(uint)CONCAT12(uVar344,PF_PART2(local_e8, 6))) & 0xffffff00ff) &
               0xffff;
          auStack_3b8[8] = uVar344;
          PF_PART7(auStack_3b8, 9) = 0;
          uVar344 = local_e8[0xf];
          PF_PART6(auVar19, 8) = 0;
          PF_PART8(auVar19, 0) = PF_PART8(local_e8, 8);
          PF_PART1(auVar19,0xe) = uVar344;
          PF_PART4(auVar38, 8) = 0;
          PF_PART8(auVar38, 0) = PF_PART8(local_e8, 8);
          PF_PART1(auVar38,0xc) = local_e8[0xe];
          PF_PART2(auVar38, 13) = PF_PART2(auVar19, 13);
          PF_PART4(auVar53, 8) = 0;
          PF_PART8(auVar53, 0) = PF_PART8(local_e8, 8);
          PF_PART3(auVar53, 12) = PF_PART3(auVar38, 12);
          uVar343 = local_e8[0xd];
          PF_PART2(auVar99, 8) = 0;
          PF_PART8(auVar99, 0) = PF_PART8(local_e8, 8);
          PF_PART1(auVar99,10) = uVar343;
          PF_PART4(auVar99, 11) = PF_PART4(auVar53, 11);
          PF_PART2(auVar136, 8) = 0;
          PF_PART8(auVar136, 0) = PF_PART8(local_e8, 8);
          PF_PART5(auVar136, 10) = PF_PART5(auVar99, 10);
          PF_PART1(auVar152,8) = local_e8[0xc];
          PF_PART8(auVar152, 0) = PF_PART8(local_e8, 8);
          PF_PART6(auVar152, 9) = PF_PART6(auVar136, 9);
          PF_PART8(auVar276, 7) = 0;
          PF_PART7(auVar276, 0) = PF_PART7(auVar152, 8);
          uVar341 = local_e8[0xb];
          Var222 = CONCAT81(SUB158(auVar276 << 0x40,7),uVar341);
          PF_PART6(auVar277, 9) = 0;
          PF_PART9(auVar277, 0) = Var222;
          PF_PART10(auVar278, 1) = SUB1510(auVar277 << 0x30,5);
          PF_PART1(auVar278,0) = local_e8[10];
          PF_PART4(auVar279, 11) = 0;
          PF_PART11(auVar279, 0) = auVar278;
          PF_PART1(auVar183,2) = local_e8[9];
          PF_PART2(auVar183, 0) = PF_PART2(local_e8, 8);
          PF_PART12(auVar183, 3) = SUB1512(auVar279 << 0x20,3);
          PF_PART13(auVar196, 2) = PF_PART13(auVar183, 2);
          PF_PART2(auVar196, 0) = PF_PART2(local_e8, 8) & 0xff;
          PF_PART2(auVar20, 10) = 0;
          PF_PART10(auVar20, 0) = PF_PART10(auVar196, 0);
          PF_PART2(auVar20, 12) = (short)Var222;
          PF_PART4(auVar280, 2) = PF_PART4(auVar20, 10);
          PF_PART2(auVar280, 0) = PF_PART2(auVar278, 0);
          PF_PART8(auVar280, 6) = 0;
          PF_PART2(auVar100, 4) = PF_PART2(auVar183, 2);
          PF_PART4(auVar100, 0) = PF_PART4(auVar196, 0);
          PF_PART8(auVar100, 6) = SUB148(auVar280 << 0x40,6);
          PF_PART10(auVar137, 4) = PF_PART10(auVar100, 4);
          PF_PART4(auVar137, 0) = PF_PART4(auVar196, 0) & 0xffff;
          PF_PART8(local_3a8, 0) = PF_PART8(auVar137, 0) & 0xffffffff;
          PF_PART4(local_3a8, 8) = PF_PART4(auVar100, 4);
          PF_PART4(local_3a8, 12) = 0;
          PF_PART8(local_398, 0) =
               (ulong)(CONCAT14(uVar341,(uint)CONCAT12(uVar341,PF_PART2(local_e8, 10))) & 0xffffff00ff) &
               0xffff;
          local_398[8] = uVar341;
          PF_PART7(local_398, 9) = 0;
          uVar327 = (ulong)CONCAT12(uVar343,PF_PART2(local_e8, 12)) & 0xffffffffffff00ff;
          PF_PART4(auVar162, 8) = 0;
          PF_PART8(auVar162, 0) = uVar327;
          PF_PART1(auVar162,0xc) = uVar344;
          PF_PART1(auVar163,8) = local_e8[0xe];
          PF_PART8(auVar163, 0) = uVar327;
          PF_PART1(auVar163,9) = 0;
          PF_PART3(auVar163, 10) = PF_PART3(auVar162, 10);
          PF_PART8(auVar281, 5) = 0;
          PF_PART5(auVar281, 0) = PF_PART5(auVar163, 8);
          PF_PART1(auVar164,4) = uVar343;
          PF_PART4(auVar164, 0) = (uint)uVar327;
          PF_PART1(auVar164,5) = 0;
          PF_PART7(auVar164, 6) = SUB137(auVar281 << 0x40,6);
          PF_PART9(auVar165, 4) = PF_PART9(auVar164, 4);
          PF_PART4(auVar165, 0) = (uint)uVar327 & 0xffff;
          PF_PART8(local_388, 0) = PF_PART8(auVar165, 0) & 0xffffffff;
          PF_PART4(local_388, 8) = PF_PART4(auVar164, 4);
          PF_PART4(local_388, 12) = 0;
          PF_PART8(local_378, 0) =
               (ulong)(CONCAT14(uVar344,(uint)CONCAT12(uVar344,PF_PART2(local_e8, 14))) & 0xffffff00ff) &
               0xffff;
          local_378[8] = uVar344;
          PF_PART7(local_378, 9) = 0;
          uVar344 = local_d8[7];
          PF_PART1(auVar21,0xd) = 0;
          PF_PART13(auVar21, 0) = PF_PART13(local_d8, 0);
          PF_PART1(auVar21,0xe) = uVar344;
          PF_PART1(auVar39,0xc) = local_d8[6];
          PF_PART12(auVar39, 0) = PF_PART12(local_d8, 0);
          PF_PART2(auVar39, 13) = PF_PART2(auVar21, 13);
          PF_PART1(auVar54,0xb) = 0;
          PF_PART11(auVar54, 0) = PF_PART11(local_d8, 0);
          PF_PART3(auVar54, 12) = PF_PART3(auVar39, 12);
          uVar343 = local_d8[5];
          PF_PART1(auVar101,10) = uVar343;
          PF_PART10(auVar101, 0) = PF_PART10(local_d8, 0);
          PF_PART4(auVar101, 11) = PF_PART4(auVar54, 11);
          PF_PART1(auVar138,9) = 0;
          PF_PART9(auVar138, 0) = PF_PART9(local_d8, 0);
          PF_PART5(auVar138, 10) = PF_PART5(auVar101, 10);
          PF_PART1(auVar153,8) = local_d8[4];
          PF_PART8(auVar153, 0) = PF_PART8(local_d8, 0);
          PF_PART6(auVar153, 9) = PF_PART6(auVar138, 9);
          PF_PART8(auVar282, 7) = 0;
          PF_PART7(auVar282, 0) = PF_PART7(auVar153, 8);
          uVar341 = local_d8[3];
          Var222 = CONCAT81(SUB158(auVar282 << 0x40,7),uVar341);
          PF_PART6(auVar283, 9) = 0;
          PF_PART9(auVar283, 0) = Var222;
          PF_PART10(auVar284, 1) = SUB1510(auVar283 << 0x30,5);
          PF_PART1(auVar284,0) = local_d8[2];
          PF_PART4(auVar285, 11) = 0;
          PF_PART11(auVar285, 0) = auVar284;
          PF_PART1(auVar184,2) = local_d8[1];
          PF_PART2(auVar184, 0) = PF_PART2(local_d8, 0);
          PF_PART12(auVar184, 3) = SUB1512(auVar285 << 0x20,3);
          PF_PART13(auVar197, 2) = PF_PART13(auVar184, 2);
          PF_PART2(auVar197, 0) = PF_PART2(local_d8, 0) & 0xff;
          PF_PART2(auVar22, 10) = 0;
          PF_PART10(auVar22, 0) = PF_PART10(auVar197, 0);
          PF_PART2(auVar22, 12) = (short)Var222;
          PF_PART4(auVar286, 2) = PF_PART4(auVar22, 10);
          PF_PART2(auVar286, 0) = PF_PART2(auVar284, 0);
          PF_PART8(auVar286, 6) = 0;
          PF_PART2(auVar102, 4) = PF_PART2(auVar184, 2);
          PF_PART4(auVar102, 0) = PF_PART4(auVar197, 0);
          PF_PART8(auVar102, 6) = SUB148(auVar286 << 0x40,6);
          PF_PART10(auVar139, 4) = PF_PART10(auVar102, 4);
          PF_PART4(auVar139, 0) = PF_PART4(auVar197, 0) & 0xffff;
          PF_PART8(local_368, 0) = PF_PART8(auVar139, 0) & 0xffffffff;
          PF_PART4(local_368, 8) = PF_PART4(auVar102, 4);
          PF_PART4(local_368, 12) = 0;
          PF_PART8(local_358, 0) =
               (ulong)(CONCAT14(uVar341,(uint)CONCAT12(uVar341,PF_PART2(local_d8, 2))) & 0xffffff00ff) &
               0xffff;
          local_358[8] = uVar341;
          PF_PART7(local_358, 9) = 0;
          uVar327 = (ulong)CONCAT12(uVar343,PF_PART2(local_d8, 4)) & 0xffffffffffff00ff;
          PF_PART4(auVar166, 8) = 0;
          PF_PART8(auVar166, 0) = uVar327;
          PF_PART1(auVar166,0xc) = uVar344;
          PF_PART1(auVar167,8) = local_d8[6];
          PF_PART8(auVar167, 0) = uVar327;
          PF_PART1(auVar167,9) = 0;
          PF_PART3(auVar167, 10) = PF_PART3(auVar166, 10);
          PF_PART8(auVar287, 5) = 0;
          PF_PART5(auVar287, 0) = PF_PART5(auVar167, 8);
          PF_PART1(auVar168,4) = uVar343;
          PF_PART4(auVar168, 0) = (uint)uVar327;
          PF_PART1(auVar168,5) = 0;
          PF_PART7(auVar168, 6) = SUB137(auVar287 << 0x40,6);
          PF_PART9(auVar169, 4) = PF_PART9(auVar168, 4);
          PF_PART4(auVar169, 0) = (uint)uVar327 & 0xffff;
          PF_PART8(local_348, 0) = PF_PART8(auVar169, 0) & 0xffffffff;
          PF_PART4(local_348, 8) = PF_PART4(auVar168, 4);
          PF_PART4(local_348, 12) = 0;
          PF_PART8(local_338, 0) =
               (ulong)(CONCAT14(uVar344,(uint)CONCAT12(uVar344,PF_PART2(local_d8, 6))) & 0xffffff00ff) &
               0xffff;
          local_338[8] = uVar344;
          PF_PART7(local_338, 9) = 0;
          uVar344 = local_d8[0xf];
          PF_PART6(auVar23, 8) = 0;
          PF_PART8(auVar23, 0) = PF_PART8(local_d8, 8);
          PF_PART1(auVar23,0xe) = uVar344;
          PF_PART4(auVar40, 8) = 0;
          PF_PART8(auVar40, 0) = PF_PART8(local_d8, 8);
          PF_PART1(auVar40,0xc) = local_d8[0xe];
          PF_PART2(auVar40, 13) = PF_PART2(auVar23, 13);
          PF_PART4(auVar55, 8) = 0;
          PF_PART8(auVar55, 0) = PF_PART8(local_d8, 8);
          PF_PART3(auVar55, 12) = PF_PART3(auVar40, 12);
          uVar343 = local_d8[0xd];
          PF_PART2(auVar103, 8) = 0;
          PF_PART8(auVar103, 0) = PF_PART8(local_d8, 8);
          PF_PART1(auVar103,10) = uVar343;
          PF_PART4(auVar103, 11) = PF_PART4(auVar55, 11);
          PF_PART2(auVar140, 8) = 0;
          PF_PART8(auVar140, 0) = PF_PART8(local_d8, 8);
          PF_PART5(auVar140, 10) = PF_PART5(auVar103, 10);
          PF_PART1(auVar154,8) = local_d8[0xc];
          PF_PART8(auVar154, 0) = PF_PART8(local_d8, 8);
          PF_PART6(auVar154, 9) = PF_PART6(auVar140, 9);
          PF_PART8(auVar288, 7) = 0;
          PF_PART7(auVar288, 0) = PF_PART7(auVar154, 8);
          uVar341 = local_d8[0xb];
          Var222 = CONCAT81(SUB158(auVar288 << 0x40,7),uVar341);
          PF_PART6(auVar289, 9) = 0;
          PF_PART9(auVar289, 0) = Var222;
          PF_PART10(auVar290, 1) = SUB1510(auVar289 << 0x30,5);
          PF_PART1(auVar290,0) = local_d8[10];
          PF_PART4(auVar291, 11) = 0;
          PF_PART11(auVar291, 0) = auVar290;
          PF_PART1(auVar185,2) = local_d8[9];
          PF_PART2(auVar185, 0) = PF_PART2(local_d8, 8);
          PF_PART12(auVar185, 3) = SUB1512(auVar291 << 0x20,3);
          PF_PART13(auVar198, 2) = PF_PART13(auVar185, 2);
          PF_PART2(auVar198, 0) = PF_PART2(local_d8, 8) & 0xff;
          PF_PART2(auVar24, 10) = 0;
          PF_PART10(auVar24, 0) = PF_PART10(auVar198, 0);
          PF_PART2(auVar24, 12) = (short)Var222;
          PF_PART4(auVar292, 2) = PF_PART4(auVar24, 10);
          PF_PART2(auVar292, 0) = PF_PART2(auVar290, 0);
          PF_PART8(auVar292, 6) = 0;
          PF_PART2(auVar104, 4) = PF_PART2(auVar185, 2);
          PF_PART4(auVar104, 0) = PF_PART4(auVar198, 0);
          PF_PART8(auVar104, 6) = SUB148(auVar292 << 0x40,6);
          PF_PART10(auVar141, 4) = PF_PART10(auVar104, 4);
          PF_PART4(auVar141, 0) = PF_PART4(auVar198, 0) & 0xffff;
          PF_PART8(local_328, 0) = PF_PART8(auVar141, 0) & 0xffffffff;
          PF_PART4(local_328, 8) = PF_PART4(auVar104, 4);
          PF_PART4(local_328, 12) = 0;
          PF_PART8(local_318, 0) =
               (ulong)(CONCAT14(uVar341,(uint)CONCAT12(uVar341,PF_PART2(local_d8, 10))) & 0xffffff00ff) &
               0xffff;
          local_318[8] = uVar341;
          PF_PART7(local_318, 9) = 0;
          uVar327 = (ulong)CONCAT12(uVar343,PF_PART2(local_d8, 12)) & 0xffffffffffff00ff;
          PF_PART4(auVar170, 8) = 0;
          PF_PART8(auVar170, 0) = uVar327;
          PF_PART1(auVar170,0xc) = uVar344;
          PF_PART1(auVar171,8) = local_d8[0xe];
          PF_PART8(auVar171, 0) = uVar327;
          PF_PART1(auVar171,9) = 0;
          PF_PART3(auVar171, 10) = PF_PART3(auVar170, 10);
          PF_PART8(auVar293, 5) = 0;
          PF_PART5(auVar293, 0) = PF_PART5(auVar171, 8);
          PF_PART1(auVar172,4) = uVar343;
          PF_PART4(auVar172, 0) = (uint)uVar327;
          PF_PART1(auVar172,5) = 0;
          PF_PART7(auVar172, 6) = SUB137(auVar293 << 0x40,6);
          PF_PART9(auVar173, 4) = PF_PART9(auVar172, 4);
          PF_PART4(auVar173, 0) = (uint)uVar327 & 0xffff;
          PF_PART8(local_308, 0) = PF_PART8(auVar173, 0) & 0xffffffff;
          PF_PART4(local_308, 8) = PF_PART4(auVar172, 4);
          PF_PART4(local_308, 12) = 0;
          PF_PART8(local_2f8, 0) =
               (ulong)(CONCAT14(uVar344,(uint)CONCAT12(uVar344,PF_PART2(local_d8, 14))) & 0xffffff00ff) &
               0xffff;
          local_2f8[8] = uVar344;
          PF_PART7(local_2f8, 9) = 0;
          lVar313 = 0;
          plVar314 = (long *)local_3e8;
          do {
            bVar321 = local_7d8[lVar313];
            uVar327 = (ulong)bVar321;
            lVar319 = 0;
            do {
              auVar339 = *(uint128 *)(local_128 + lVar319 + -0x40);
              uVar333 = CONCAT13(0,CONCAT12(((uint8_t *)(void *)&auVar339)[9],(ushort)((uint8_t *)(void *)&auVar339)[8]));
              uVar341 = ((uint8_t *)(void *)&auVar339)[0xb];
              uVar316 = CONCAT17(0,CONCAT16(uVar341,(uint6)CONCAT14(((uint8_t *)(void *)&auVar339)[10],uVar333)));
              PF_PART1(auVar105,8) = ((uint8_t *)(void *)&auVar339)[0xc];
              PF_PART8(auVar105, 0) = uVar316;
              bVar351 = ((uint8_t *)(void *)&auVar339)[0xf];
              uVar318 = CONCAT35(0,CONCAT14(((uint8_t *)(void *)&auVar339)[0xd],(uint)((uint8_t *)(void *)&auVar339)[0xc]));
              PF_PART1(auVar25,0xc) = bVar351;
              PF_PART12(auVar25, 0) = ZEXT112(bVar351) << 0x40;
              PF_PART1(auVar26,8) = ((uint8_t *)(void *)&auVar339)[0xd];
              PF_PART8(auVar26, 0) = uVar318;
              PF_PART3(auVar26, 9) = 0;
              PF_PART1(auVar26,0xc) = bVar351;
              PF_PART3(auVar105, 9) = 0;
              PF_PART1(auVar105,0xc) = uVar341;
              PF_PART1(auVar106,8) = ((uint8_t *)(void *)&auVar339)[10];
              PF_PART8(auVar106, 0) = uVar316;
              PF_PART1(auVar106,9) = 0;
              PF_PART3(auVar106, 10) = PF_PART3(auVar105, 10);
              PF_PART8(auVar294, 5) = 0;
              PF_PART5(auVar294, 0) = PF_PART5(auVar106, 8);
              PF_PART1(auVar107,4) = ((uint8_t *)(void *)&auVar339)[9];
              PF_PART4(auVar107, 0) = uVar333;
              PF_PART1(auVar107,5) = 0;
              PF_PART7(auVar107, 6) = SUB137(auVar294 << 0x40,6);
              PF_PART1(auVar303,4) = uVar341;
              PF_PART4(auVar303, 0) = PF_PART4(auVar107, 4);
              PF_PART7(auVar303, 5) = 0;
              PF_PART1(auVar108,0xc) = uVar341;
              PF_PART12(auVar108, 0) = auVar303 << 0x20;
              bVar351 = ((uint8_t *)(void *)&auVar339)[7];
              PF_PART1(auVar27,0xd) = 0;
              PF_PART13(auVar27, 0) = PF_PART13(auVar339, 0);
              PF_PART1(auVar27,0xe) = bVar351;
              PF_PART1(auVar41,0xc) = ((uint8_t *)(void *)&auVar339)[6];
              PF_PART12(auVar41, 0) = PF_PART12(auVar339, 0);
              PF_PART2(auVar41, 13) = PF_PART2(auVar27, 13);
              PF_PART1(auVar56,0xb) = 0;
              PF_PART11(auVar56, 0) = PF_PART11(auVar339, 0);
              PF_PART3(auVar56, 12) = PF_PART3(auVar41, 12);
              PF_PART1(auVar109,10) = ((uint8_t *)(void *)&auVar339)[5];
              PF_PART10(auVar109, 0) = PF_PART10(auVar339, 0);
              PF_PART4(auVar109, 11) = PF_PART4(auVar56, 11);
              PF_PART1(auVar142,9) = 0;
              PF_PART9(auVar142, 0) = PF_PART9(auVar339, 0);
              PF_PART5(auVar142, 10) = PF_PART5(auVar109, 10);
              PF_PART1(auVar155,8) = ((uint8_t *)(void *)&auVar339)[4];
              PF_PART8(auVar155, 0) = PF_PART8(auVar339, 0);
              PF_PART6(auVar155, 9) = PF_PART6(auVar142, 9);
              PF_PART8(auVar295, 7) = 0;
              PF_PART7(auVar295, 0) = PF_PART7(auVar155, 8);
              Var222 = CONCAT81(SUB158(auVar295 << 0x40,7),((uint8_t *)(void *)&auVar339)[3]);
              PF_PART6(auVar296, 9) = 0;
              PF_PART9(auVar296, 0) = Var222;
              PF_PART10(auVar297, 1) = SUB1510(auVar296 << 0x30,5);
              PF_PART1(auVar297,0) = ((uint8_t *)(void *)&auVar339)[2];
              PF_PART4(auVar298, 11) = 0;
              PF_PART11(auVar298, 0) = auVar297;
              PF_PART1(auVar186,2) = ((uint8_t *)(void *)&auVar339)[1];
              PF_PART2(auVar186, 0) = PF_PART2(auVar339, 0);
              PF_PART12(auVar186, 3) = SUB1512(auVar298 << 0x20,3);
              PF_PART13(auVar199, 2) = PF_PART13(auVar186, 2);
              PF_PART2(auVar199, 0) = PF_PART2(auVar339, 0) & 0xff;
              uVar349 = (undefined2)Var222;
              PF_PART2(auVar28, 10) = 0;
              PF_PART10(auVar28, 0) = PF_PART10(auVar199, 0);
              PF_PART2(auVar28, 12) = uVar349;
              PF_PART2(auVar42, 8) = PF_PART2(auVar297, 0);
              PF_PART8(auVar42, 0) = PF_PART8(auVar199, 0);
              PF_PART4(auVar42, 10) = PF_PART4(auVar28, 10);
              PF_PART8(auVar299, 6) = 0;
              PF_PART6(auVar299, 0) = PF_PART6(auVar42, 8);
              uVar342 = (undefined4)CONCAT82(SUB148(auVar299 << 0x40,6),PF_PART2(auVar186, 2));
              PF_PART2(auVar304, 4) = uVar349;
              PF_PART4(auVar304, 0) = uVar342;
              PF_PART6(auVar304, 6) = 0;
              PF_PART2(auVar43, 12) = uVar349;
              PF_PART12(auVar43, 0) = auVar304 << 0x20;
              uVar326 = CONCAT26(0,CONCAT24(PF_PART2(auVar109, 10),(uint)PF_PART2(auVar155, 8)));
              PF_PART1(auVar156,0xc) = bVar351;
              PF_PART12(auVar156, 0) = ZEXT112(bVar351) << 0x40;
              PF_PART2(auVar157, 8) = PF_PART2(auVar109, 10);
              PF_PART8(auVar157, 0) = uVar326;
              PF_PART2(auVar157, 10) = 0;
              PF_PART1(auVar157,0xc) = bVar351;
              uVar333 = (uint)bVar321;
              uVar317 = (uint)bVar321;
              PF_PART8(in_XMM1, 0) = ((uint8_t *)(void *)&auVar339)[0xe] * uVar327;
              PF_PART8(in_XMM1, 8) = ((ulong)PF_PART5(auVar25, 8) & 0xffffffff) * (ulong)uVar317;
              lVar334 = (plVar314 + lVar319 + 8)[1];
              lVar200 = (plVar314 + lVar319)[1];
              in_XMM6_Qa = plVar314[lVar319] + (PF_PART8(auVar199, 0) & 0xffff) * uVar327;
              lVar201 = plVar314[lVar319 + 2];
              lVar202 = (plVar314 + lVar319 + 2)[1];
              lVar203 = (plVar314 + lVar319 + 4)[1];
              in_XMM7_Qa = plVar314[lVar319 + 4] + (uVar326 & 0xffffffff) * uVar327;
              lVar204 = (plVar314 + lVar319 + 6)[1];
              in_XMM5_Qa = plVar314[lVar319 + 6] + (PF_PART4(auVar56, 11) >> 8 & 0xffff) * uVar327;
              lVar205 = (plVar314 + lVar319 + 10)[1];
              in_XMM4_Qa = plVar314[lVar319 + 10] + ((ulong)PF_PART5(auVar106, 8) & 0xffffffff) * uVar327;
              PF_PART8(in_XMM3, 0) = plVar314[lVar319 + 0xc] + (uVar318 & 0xffffffff) * uVar327;
              PF_PART8(in_XMM3, 8) =
                   (plVar314 + lVar319 + 0xc)[1] +
                   ((ulong)PF_PART5(auVar26, 8) & 0xffffffff) * (ulong)uVar317;
              PF_PART8(in_XMM2, 0) = plVar314[lVar319 + 0xe] + PF_PART8(in_XMM1, 0);
              PF_PART8(in_XMM2, 8) = (plVar314 + lVar319 + 0xe)[1] + PF_PART8(in_XMM1, 8);
              plVar314[lVar319 + 8] = plVar314[lVar319 + 8] + (uVar316 & 0xffff) * uVar327;
              (plVar314 + lVar319 + 8)[1] =
                   lVar334 + ((ulong)CONCAT14(uVar341,PF_PART4(auVar107, 4)) & 0xffffffff) * (ulong)uVar333
              ;
              plVar314[lVar319 + 4] = in_XMM7_Qa;
              (plVar314 + lVar319 + 4)[1] =
                   lVar203 + ((ulong)PF_PART5(auVar157, 8) & 0xffffffff) * (ulong)uVar333;
              plVar314[lVar319 + 6] = in_XMM5_Qa;
              (plVar314 + lVar319 + 6)[1] =
                   lVar204 + ((ulong)PF_PART5(auVar156, 8) & 0xffffffff) * (ulong)uVar333;
              plVar314[lVar319] = in_XMM6_Qa;
              (plVar314 + lVar319)[1] =
                   lVar200 + ((ulong)CONCAT24(uVar349,uVar342) & 0xffffffff) * (ulong)uVar333;
              plVar314[lVar319 + 2] = lVar201 + ((ulong)PF_PART6(auVar42, 8) & 0xffffffff) * uVar327;
              (plVar314 + lVar319 + 2)[1] =
                   lVar202 + ((ulong)PF_PART6(auVar43, 8) & 0xffffffff) * (ulong)uVar317;
              plVar314[lVar319 + 10] = in_XMM4_Qa;
              (plVar314 + lVar319 + 10)[1] =
                   lVar205 + ((ulong)PF_PART5(auVar108, 8) & 0xffffffff) * (ulong)uVar317;
              { unsigned char pf_copy[16]; __builtin_memcpy(pf_copy,&(in_XMM3),16); __builtin_memcpy((plVar314 + lVar319 + 0xc),pf_copy,16); }
              { unsigned char pf_copy[16]; __builtin_memcpy(pf_copy,&(in_XMM2),16); __builtin_memcpy((plVar314 + lVar319 + 0xe),pf_copy,16); }
              lVar319 = lVar319 + 0x10;
            } while (lVar319 != 0x20);
            lVar313 = lVar313 + 1;
            plVar314 = plVar314 + 1;
          } while (lVar313 != 0x20);
          recovered_1001c1c0(local_7f8,(long *)local_3e8);
          PF_PART1(local_168, 0) = 0;
          PF_PART1(local_168, 1) = 0;
          PF_PART1(local_168, 2) = 0;
          PF_PART1(local_168, 3) = 0;
          PF_PART1(local_168, 4) = 0;
          PF_PART1(local_168, 5) = 0;
          PF_PART1(local_168, 6) = 0;
          PF_PART1(local_168, 7) = 0;
          local_160 = 0;
          local_15f = 0;
          local_15e = 0;
          local_15d = 0;
          local_15c = 0;
          local_15b = 0;
          local_15a = 0;
          local_159 = 0;
          local_158 = 0;
          local_157 = 0;
          local_156 = 0;
          local_155 = 0;
          local_154 = 0;
          local_153 = 0;
          local_152 = 0;
          local_151 = 0;
          local_150 = 0;
          local_14f = 0;
          local_14e = 0;
          local_14d = 0;
          local_14c = 0;
          local_14b = 0;
          local_14a = 0;
          local_149 = 0;
          local_148 = 0;
          local_147 = 0;
          local_146 = 0;
          local_145 = 0;
          local_144 = 0;
          local_143 = 0;
          local_142 = 0;
          local_141 = 0;
          local_140 = 0;
          local_13f = 0;
          local_13e = 0;
          local_13d = 0;
          local_13c = 0;
          local_13b = 0;
          local_13a = 0;
          local_139 = 0;
          local_138 = 0;
          local_137 = 0;
          local_136 = 0;
          local_135 = 0;
          local_134 = 0;
          local_133 = 0;
          local_132 = 0;
          local_131 = 0;
          local_130 = 0;
          local_12f = 0;
          local_12e = 0;
          local_12d = 0;
          local_12c = 0;
          local_12b = 0;
          local_12a = 0;
          local_129 = 0;
          PF_PART16(local_e8,0) = ZEXT816(0);
          PF_PART16(local_d8,0) = ZEXT816(0);
          PF_PART16(local_c8,0) = ZEXT816(0);
          PF_PART16(local_b8,0) = ZEXT816(0);
          lVar319 = 0;
          do {
            local_3e8[lVar319] = 0;
            local_3e8[lVar319 + 1] = 0;
            local_3e8[lVar319 + 2] = 0;
            local_3e8[lVar319 + 3] = 0;
            local_3e8[lVar319 + 4] = 0;
            local_3e8[lVar319 + 5] = 0;
            local_3e8[lVar319 + 6] = 0;
            local_3e8[lVar319 + 7] = 0;
            lVar319 = lVar319 + 8;
          } while (lVar319 != 0x200);
          puVar315 = *(uint **)(param_1 + 0x150);
          local_3e8[0] = 0x1f;
          recovered_10001c80((undefined8 *)puVar315,(undefined8 *)local_3e8,1,lVar313,
                             (undefined8 *)in_R8);
          uVar333 = DAT_10024164;
          uVar327 = (ulong)DAT_10024164;
          PF_PART4(local_3e8, 0) =
               DAT_10024164 >> 0x18 | (DAT_10024164 & 0xff0000) >> 8 | (DAT_10024164 & 0xff00) << 8
               | DAT_10024164 << 0x18;
          recovered_10001c80((undefined8 *)((long)puVar315 + 1),(undefined8 *)local_3e8,4,lVar313,
                             (undefined8 *)in_R8);
          local_f0 = puVar315;
          if (uVar327 < 0x1ffc) {
            if (uVar327 == 0) {
              PF_PART4(local_3e8, 0) = 0x20000000;
              puVar330 = (uint *)0x5;
LAB_10017b2e:
              recovered_10001c80((undefined8 *)((long)puVar330 + (long)puVar315),
                                 (undefined8 *)local_3e8,4,lVar313,(undefined8 *)in_R8);
              puVar330 = (uint *)(uVar327 + 9);
              if (0x1f < uVar333 - 0x1fd8) {
                recovered_10001c80((undefined8 *)((long)puVar330 + (long)local_f0),local_758,0x20,
                                   lVar313,(undefined8 *)in_R8);
                bVar321 = 0;
                puVar330 = (uint *)(ulong)(uVar333 + 0x29);
                goto LAB_10017c17;
              }
            }
            else {
              recovered_10001c80((undefined8 *)((long)puVar315 + 5),(undefined8 *)&DAT_10024130,
                                 uVar327,lVar313,(undefined8 *)in_R8);
              puVar330 = (uint *)(ulong)(uVar333 + 5);
              PF_PART4(local_3e8, 0) = 0x20000000;
              if (uVar333 < 0x1ff8) goto LAB_10017b2e;
            }
            bVar321 = 1;
          }
          else {
            puVar330 = (uint *)0x5;
            bVar321 = 1;
          }
LAB_10017c17:
          lVar319 = recovered_10003720(((uintptr_t)pf_module_state + 0x4a2U));
          uVar333 = (uint)lVar319;
          PF_PART1(local_718, 1) = (undefined1)((ulong)lVar319 >> 0x10);
          PF_PART1(local_718, 2) = (undefined1)((ulong)lVar319 >> 8);
          PF_PART1(local_718, 0) = (byte)((ulong)lVar319 >> 0x18);
          PF_PART1(local_718, 3) = (byte)lVar319;
          recovered_10001c80((undefined8 *)local_3e8,(undefined8 *)&local_718,4,lVar313,
                             (undefined8 *)in_R8);
          if (uVar333 < 0x50) {
            if (uVar333 == 0) {
              uVar317 = 4;
            }
            else {
              recovered_10001c80((undefined8 *)(local_3e8 + 4),
                                 (undefined8 *)(str_1001db2e + 10),
                                 (ulong)(uVar333 & 0x7f),lVar313,(undefined8 *)in_R8);
              uVar317 = uVar333 + 4;
              if (0x4b < uVar333) goto LAB_10017cea;
            }
            PF_PART1(local_718, 3) = 0x40;
            PF_PART1(local_718, 2) = 0;
            PF_PART1(local_718, 1) = 0;
            PF_PART1(local_718, 0) = 0;
            recovered_10001c80((undefined8 *)(local_3e8 + uVar317),(undefined8 *)&local_718,4,
                               lVar313,(undefined8 *)in_R8);
            uVar317 = uVar333 + 8;
            if (0x3f < uVar333 - 0xc) {
              recovered_10001c80((undefined8 *)(local_3e8 + uVar317),local_818,0x40,lVar313,
                                 (undefined8 *)in_R8);
              uVar317 = uVar333 + 0x48;
            }
          }
          else {
            uVar317 = 4;
          }
LAB_10017cea:
          puVar315 = local_f0;
          PF_PART1(local_718, 1) = (undefined1)(uVar317 >> 0x10);
          PF_PART1(local_718, 2) = (undefined1)(uVar317 >> 8);
          PF_PART1(local_718, 0) = (byte)(uVar317 >> 0x18);
          PF_PART1(local_718, 3) = (byte)uVar317;
          iVar311 = (int)puVar330;
          if ((bool)(bVar321 | iVar311 - 0x1ffdU < 4)) {
            piVar329 = local_408;
            puVar312 = local_3f0;
            local_40 = puVar330;
          }
          else {
            recovered_10001c80((undefined8 *)(((ulong)puVar330 & 0xffffffff) + (long)local_f0),
                               (undefined8 *)&local_718,4,lVar313,(undefined8 *)in_R8);
            puVar312 = local_3f0;
            piVar329 = local_408;
            local_40 = (uint *)(ulong)(iVar311 + 4);
            if (uVar317 <= 0x1ffcU - iVar311) {
              recovered_10001c80((undefined8 *)((long)local_40 + (long)puVar315),
                                 (undefined8 *)local_3e8,(ulong)uVar317,lVar313,(undefined8 *)in_R8)
              ;
              local_40 = (uint *)(ulong)(uVar317 + (int)local_40);
            }
          }
          puVar315 = local_a0;
          in_R8 = (uint *)local_128;
          uVar333 = (uint)local_a0;
          recovered_1001ba60(piVar329,*(uint *)(param_1 + 0x818),*(uint *)(param_1 + 0x820),param_1,
                             (long)in_R8,(uint)local_a0,(long)local_738,'\0');
          in_R9 = (undefined1 *)((ulong)puVar315 & 0xffffffff);
          puVar315 = (uint *)param_1;
          recovered_1001ba60((int *)puVar312,*(uint *)(param_1 + 0x81c),*(uint *)(param_1 + 0x824),
                             param_1,(long)in_R8,uVar333,(long)local_738,'\x01');
          *(undefined1 *)(param_1 + 0x814) = 1;
          local_88 = 0;
          local_87 = 0;
          local_86 = 0;
          local_85 = 0;
          local_84 = 0;
          local_83 = 0;
          local_82 = 0;
          local_81 = 0;
          local_80 = 0;
          local_7f = 0;
          local_7e = 0;
          local_7d = 0;
          local_7c = 0;
          local_7b = 0;
          local_7a = 0;
          local_79 = 0;
          local_78 = 0;
          local_77 = 0;
          local_76 = 0;
          local_75 = 0;
          local_74 = 0;
          local_73 = 0;
          local_72 = 0;
          local_71 = 0;
          local_70 = 0;
          local_6f = 0;
          local_6e = 0;
          local_6d = 0;
          local_6c = 0;
          local_6b = 0;
          local_6a = 0;
          local_69 = 0;
          local_68[0] = '\0';
          local_68[1] = '\0';
          local_68[2] = '\0';
          local_68[3] = '\0';
          local_68[4] = 0;
          local_68[5] = 0;
          local_68[6] = '\0';
          local_68[7] = '\0';
          local_68[8] = '\0';
          local_68[9] = '\0';
          local_68[10] = '\0';
          local_68[0xb] = '\0';
          local_68[0xc] = '\0';
          local_68[0xd] = '\0';
          local_68[0xe] = '\0';
          local_68[0xf] = '\0';
          local_68[0x10] = '\0';
          local_68[0x11] = '\0';
          local_68[0x12] = '\0';
          local_68[0x13] = '\0';
          local_68[0x14] = '\0';
          local_68[0x15] = '\0';
          local_68[0x16] = '\0';
          local_68[0x17] = '\0';
          local_68[0x18] = '\0';
          local_68[0x19] = '\0';
          local_68[0x1a] = '\0';
          local_68[0x1b] = '\0';
          local_68[0x1c] = '\0';
          local_68[0x1d] = '\0';
          local_68[0x1e] = '\0';
          local_68[0x1f] = '\0';
          local_128[0] = 0;
          local_128[1] = 0;
          local_128[2] = 0;
          local_128[3] = 0;
          local_128[4] = 0;
          local_123 = 0;
          local_122 = 0;
          local_121 = 0;
          local_120 = 0;
          local_11f = 0;
          local_11e = 0;
          local_11d = 0;
          local_11c = 0;
          local_11b = 0;
          local_11a = 0;
          local_119 = 0;
          local_118 = 0;
          local_117 = 0;
          local_116 = 0;
          local_115 = 0;
          local_114 = 0;
          local_113 = 0;
          local_112 = 0;
          local_111 = 0;
          local_110 = 0;
          local_10f = 0;
          local_10e = 0;
          local_10d = 0;
          local_10c = 0;
          local_10b = 0;
          local_10a = 0;
          local_109 = 0;
          local_108 = 0;
          local_107 = 0;
          local_106 = 0;
          local_105 = 0;
          local_104 = 0;
          local_103 = 0;
          local_102 = 0;
          local_101 = 0;
          PF_PART8(auVar339, 0) = recovered_10011b10(param_1,local_f0,(uint)local_40);
          if ((char)PF_PART8(auVar339, 0) == '\0') {
            uVar324 = 2;
            pcVar320 = str_1001eac0;
            PF_PART8(auVar339, 0) = extraout_XMM0_Qa_20;
          }
          else {
            local_3e8[0] = 0x15;
            PF_PART8(auVar339, 0) = recovered_10011b10(param_1,local_3e8,1);
            if ((char)PF_PART8(auVar339, 0) != '\0') {
              recovered_10001c80((undefined8 *)local_500,(undefined8 *)local_3f0,0x19c,puVar315,
                                 (undefined8 *)in_R8);
              *(undefined1 *)(param_1 + 0x828) = 1;
              in_R8 = (uint *)(ulong)local_44;
              if (*(char *)(param_1 + 0x829) == '\x01') {
                *(undefined2 *)(param_1 + 0x4b9) = 0;
                *(undefined1 *)(param_1 + 0x4bb) = 0;
              }
              break;
            }
            uVar324 = 2;
            pcVar320 = str_1001ead9;
            PF_PART8(auVar339, 0) = extraout_XMM0_Qa_21;
          }
          goto LAB_10015da1;
        }
      }
      uVar324 = 3;
      pcVar320 = str_1001ea6b;
    }
    else {
      uVar324 = 2;
      pcVar320 = str_1001ea48;
      local_44 = uVar322;
    }
    goto LAB_10015da1;
  case 0x32:
    if ((*(uint *)(param_1 + 0x14) < 2) || (*(char *)(param_1 + 0x4b9) == '\x01')) {
      pcVar320 = str_1001e8b0;
LAB_1001572e:
      recovered_1000b130(PF_PART8(auVar339, 0),uVar324,uVar348,uVar350,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                         in_XMM7_Qa,param_1,2,pcVar320,&DAT_100184cc,in_R8
                         ,in_R9);
    }
    else {
      recovered_10018a30(param_1,(long)puVar336,uVar333);
    }
    break;
  case 0x50:
    PF_PART4(local_3e8, 8) = uVar333;
    PF_PART8(local_3e8, 0) = puVar336;
    ((uint8_t *)(void *)&auVar210)[0xf] = 0;
    PF_PART15(auVar210, 0) = PF_PART15(local_3d8, 1);
    PF_PART16(local_3d8,0) = auVar210 << 8;
    PF_PART1(local_718, 0) = 0;
    puVar323 = (undefined8 *)&local_718;
    puVar330 = in_R8;
    recovered_10001c80(puVar323,puVar336,1,&DAT_100184cc,
                       (undefined8 *)in_R8);
    PF_PART1(local_718, 0) = 0;
    PF_PART1(local_718, 1) = 0;
    PF_PART1(local_718, 2) = 0;
    PF_PART1(local_718, 3) = 0;
    if (uVar333 < 5) goto LAB_100158eb;
    recovered_10001c80(puVar323,(undefined8 *)((long)local_40 + 6),4,puVar315,(undefined8 *)puVar330
                      );
    uVar206 = CONCAT12(PF_PART1(local_718, 2),CONCAT11(PF_PART1(local_718, 1),(byte)local_718));
    uVar317 = (uint)PF_PART1(local_718, 3) | (uVar206 & 0xff0000) >> 8 | (uVar206 & 0xff00) << 8 |
              CONCAT13(PF_PART1(local_718, 3),uVar206) << 0x18;
    if (uVar333 - 5 < uVar317) goto LAB_100158eb;
    uStack_3dc = uVar317 + 5;
    bVar308 = recovered_10018ed0((long *)local_3e8);
    if (!bVar308) goto LAB_100158eb;
    PF_PART1(local_718, 0) = 0x52;
    uVar333 = 1;
    goto LAB_100154f8;
  case 0x5a:
    if (*(char *)(param_1 + 0x82a) == '\0') {
      pcVar320 = str_1001e8d3;
      goto LAB_1001572e;
    }
    recovered_10018f20(param_1,(long)puVar336,uVar333);
    break;
  case 0x5d:
    ((uint8_t *)(void *)&auVar215)[0xf] = 0;
    PF_PART15(auVar215, 0) = stack0xfffffffffffffc19;
    PF_PART16(local_3e8,0) = auVar215 << 8;
    puVar312 = in_R8;
    recovered_10001c80((undefined8 *)local_3e8,puVar336,1,&DAT_100184cc,
                       (undefined8 *)in_R8);
    puVar330 = local_40;
    PF_PART4(auVar216, 12) = 0;
    PF_PART12(auVar216, 0) = stack0xfffffffffffffc1c;
    PF_PART16(local_3e8,0) = auVar216 << 0x20;
    if (4 < uVar333) {
      recovered_10001c80((undefined8 *)local_3e8,(undefined8 *)((long)local_40 + 6),4,puVar315,
                         (undefined8 *)puVar312);
      bVar321 = local_3e8[0];
      bVar351 = local_3e8[1];
      bVar306 = local_3e8[2];
      bVar307 = local_3e8[3];
      puVar315 = (uint *)(ulong)local_3e8[3];
      PF_PART4(auVar217, 12) = 0;
      PF_PART12(auVar217, 0) = stack0xfffffffffffffc1c;
      PF_PART16(local_3e8,0) = auVar217 << 0x20;
      if (3 < uVar333 - 5) {
        local_44 = (uint)bVar307;
        local_a0 = (uint *)CONCAT44(PF_PART4(local_a0, 4),(uint)bVar321);
        recovered_10001c80((undefined8 *)local_3e8,(undefined8 *)((long)puVar330 + 10),4,puVar315,
                           (undefined8 *)puVar312);
        if ((char)*(uint *)(param_1 + 0x870) == '\x01') {
          if (((uint)bVar306 << 8 | (uint)local_a0 << 0x18 | (uint)bVar351 << 0x10) + local_44 == 0)
          {
            *(uint *)(param_1 + 0x87c) =
                 *(uint *)(param_1 + 0x87c) +
                 ((uint)local_3e8[2] << 8 |
                  (uint)local_3e8[0] << 0x18 | (uint)(uint *)((ulong)local_3e8[1] << 0x10) |
                 (uint)local_3e8[3]);
            puVar315 = (uint *)((ulong)local_3e8[1] << 0x10);
          }
        }
        break;
      }
    }
    goto LAB_100158eb;
  case 0x5e:
    if (*(char *)(param_1 + 0x82a) == '\x01') {
      recovered_10019c00(param_1,(long)puVar336,uVar333);
    }
    break;
  case 0x60:
    if ((char)*(uint *)(param_1 + 0x870) == '\x01') {
      *(undefined1 *)(param_1 + 0x874) = 1;
      if (*(uint *)(param_1 + 0x894) == 1) {
        if (*(char *)(param_1 + 0xde3) == '\0') {
          *(undefined1 *)(param_1 + 0xde3) = 1;
          *(uint *)(param_1 + 0xde8) = 0;
        }
      }
    }
    break;
  case 0x61:
    if ((char)*(uint *)(param_1 + 0x870) == '\x01') {
      *(undefined1 *)(param_1 + 0x873) = 1;
      if (*(char *)(param_1 + 0x872) == '\0') {
        recovered_10019de0(param_1,0x61);
        *(undefined1 *)(param_1 + 0x872) = 1;
      }
      if (*(char *)(param_1 + 0xde3) == '\0') {
        *(undefined1 *)(param_1 + 0xde3) = 1;
      }
    }
    break;
  case 0x62:
    if (*(char *)(param_1 + 0x82a) == '\x01') {
      recovered_100192e0(param_1,(long)puVar336,uVar333);
    }
  }
  goto switchD_10014c90_caseD_2;
LAB_10015c38:
  in_R8 = stack0xfffffffffffffc20;
  puVar330 = (uint *)(ulong)CONCAT13(uStack_711,CONCAT12(uStack_712,CONCAT11(uStack_713,local_714)))
  ;
  puVar312 = (uint *)recovered_10003720(((uintptr_t)pf_module_state + 0x4a2U));
  PF_PART8(auVar339, 0) = extraout_XMM0_Qa_13;
  if (in_R8 != (uint *)0x0) {
    puVar332 = (uint *)((long)puVar330 - 1);
    uVar333 = 0;
    local_a0 = in_R8;
    local_1e8 = puVar332;
    local_f0 = puVar330;
    do {
      if ((uint)puVar330 < uVar333) break;
      puVar328 = (uint *)(ulong)uVar333;
      if (uVar333 < (uint)puVar330) {
        bVar308 = true;
        puVar335 = (uint *)(ulong)uVar333;
        puVar315 = puVar328;
        if (*(char *)((long)in_R8 + (long)puVar328) != ',') {
          do {
            if (puVar332 == puVar315) {
              bVar308 = false;
              puVar335 = (uint *)((ulong)puVar330 & 0xffffffff);
              goto LAB_10015cda;
            }
            puVar335 = (uint *)((long)puVar315 + 1);
            pcVar320 = (undefined1 *)((long)in_R8 + 1) + (long)puVar315;
            puVar315 = puVar335;
          } while (*pcVar320 != ',');
          bVar308 = puVar335 < puVar330;
        }
      }
      else {
        bVar308 = false;
        puVar335 = (uint *)(ulong)uVar333;
      }
LAB_10015cda:
      puVar315 = (uint *)(ulong)((int)puVar335 - uVar333);
      if (puVar312 == puVar315) {
        iVar311 = recovered_100032a0((ulong *)((long)puVar328 + (long)in_R8),
                                     (ulong *)(str_1001db2e + 10),
                                     (ulong)puVar312);
        puVar330 = local_f0;
        in_R8 = local_a0;
        puVar332 = local_1e8;
        PF_PART8(auVar339, 0) = extraout_XMM0_Qa_14;
        if (iVar311 == 0) {
          local_1e8 = (uint *)uVar324;
          cVar309 = recovered_10019f30(PF_PART8(local_3d8, 0),
                                       CONCAT13(uStack_70d,
                                                CONCAT12(uStack_70e,CONCAT11(uStack_70f,uStack_710))
                                               ));
          *(uint *)(param_1 + 0x818) = (uint)CONCAT71(extraout_var,cVar309);
          cVar309 = recovered_10019f30(PF_PART8(local_3d8, 8),
                                       CONCAT13(uStack_709,
                                                CONCAT12(uStack_70a,CONCAT11(uStack_70b,local_70c)))
                                      );
          uVar317 = (uint)CONCAT71(extraout_var_00,cVar309);
          *(uint *)(param_1 + 0x81c) = uVar317;
          uVar333 = *(uint *)(param_1 + 0x818);
          puVar315 = (uint *)CONCAT71((int7)((ulong)puVar315 >> 8),uVar333 != 0);
          PF_PART8(auVar339, 0) = extraout_XMM0_Qa_15;
          if (uVar317 == 0 || uVar333 == 0) {
            uVar324 = 3;
            pcVar320 = str_1001e9a6;
            goto LAB_10015da1;
          }
          uVar322 = 0;
          puVar315 = (uint *)0x0;
          if (uVar333 != 1) {
            cVar309 = recovered_1001a0b0(PF_PART8(local_3c8, 0),
                                         CONCAT13(uStack_705,
                                                  CONCAT12(uStack_706,CONCAT11(uStack_707,local_708)
                                                          )));
            puVar315 = (uint *)(CONCAT71(extraout_var_01,cVar309) & 0xffffffff);
            uVar317 = *(uint *)(param_1 + 0x81c);
            PF_PART8(auVar339, 0) = extraout_XMM0_Qa_18;
          }
          *(uint *)(param_1 + 0x820) = (uint)puVar315;
          if (uVar317 != 1) {
            cVar309 = recovered_1001a0b0(PF_PART8(local_3c8, 8),
                                         CONCAT13(uStack_701,
                                                  CONCAT12(uStack_702,
                                                           CONCAT11(uStack_703,uStack_704))));
            uVar322 = (uint)CONCAT71(extraout_var_02,cVar309);
            PF_PART8(auVar339, 0) = extraout_XMM0_Qa_19;
          }
          local_f8[0x209] = uVar322;
          if (((local_f8[0x206] != 1) && (local_f8[0x208] == 0)) ||
             ((uVar322 == 0 && (local_f8[0x207] != 1)))) {
            uVar324 = 3;
            pcVar320 = str_1001e9b9;
            param_1 = (long)local_f8;
            goto LAB_10015da1;
          }
          uVar324 = PF_PART8(auStack_3b8, 0);
          uVar327 = (ulong)CONCAT13(uStack_6fd,CONCAT12(uStack_6fe,CONCAT11(uStack_6ff,uStack_700)))
          ;
          puVar330 = (uint *)recovered_10003720(((uintptr_t)pf_module_state + 0x90aU));
          PF_PART8(auVar339, 0) = extraout_XMM0_Qa_22;
          if (uVar324 == 0) goto LAB_100181f5;
          uVar318 = uVar327 - 1;
          uVar333 = 0;
          local_3f8 = uVar327;
          goto LAB_100180e8;
        }
      }
      uVar333 = (int)puVar335 + 1;
    } while (bVar308);
  }
  uVar324 = 3;
  pcVar320 = str_1001e979;
  goto LAB_10015da1;
LAB_100180e8:
  do {
    if ((uint)uVar327 < uVar333) break;
    if (uVar333 < (uint)uVar327) {
      bVar308 = true;
      uVar326 = (ulong)uVar333;
      uVar316 = (ulong)uVar333;
      if (*(char *)(uVar324 + (ulong)uVar333) != ',') {
        do {
          if (uVar318 == uVar316) {
            bVar308 = false;
            uVar326 = uVar327 & 0xffffffff;
            goto LAB_1001812e;
          }
          uVar326 = uVar316 + 1;
          pcVar320 = (char *)(uVar324 + 1 + uVar316);
          uVar316 = uVar326;
        } while (*pcVar320 != ',');
        bVar308 = uVar326 < uVar327;
      }
    }
    else {
      bVar308 = false;
      uVar326 = (ulong)uVar333;
    }
LAB_1001812e:
    puVar315 = (uint *)(ulong)((int)uVar326 - uVar333);
    if (puVar330 == puVar315) {
      iVar311 = recovered_100032a0((ulong *)((ulong)uVar333 + uVar324),(ulong *)&DAT_1001dfa0,
                                   (ulong)puVar330);
      uVar327 = local_3f8;
      PF_PART8(auVar339, 0) = extraout_XMM0_Qa_23;
      if (iVar311 == 0) {
        uVar324 = recovered_10019e40(PF_PART8(auStack_3b8, 8),
                                     CONCAT13(uStack_6f9,
                                              CONCAT12(uStack_6fa,CONCAT11(uStack_6fb,uStack_6fc))),
                                     &DAT_1001dfa0);
        PF_PART8(auVar339, 0) = extraout_XMM0_Qa_24;
        if ((char)uVar324 != '\0') {
          if (local_31 != '\0') {
            bVar308 = recovered_1001a200((long)local_1e8,(ulong)local_40,str_1001e91a);
            bVar310 = true;
            if (!bVar308) {
              bVar310 = recovered_1001a200((long)local_1e8,(ulong)local_40,str_1001e92c);
            }
            bVar308 = recovered_1001a200((long)local_a0,(ulong)local_f0,
                                         str_1001db2e + 10);
            *(byte *)(local_f8 + 0x12f) = bVar308 & bVar310 ^ 1;
          }
          in_R8 = (uint *)(ulong)local_44;
          param_1 = (long)local_f8;
          goto switchD_10014c90_caseD_2;
        }
        break;
      }
    }
    uVar333 = (int)uVar326 + 1;
  } while (bVar308);
LAB_100181f5:
  uVar324 = 3;
  pcVar320 = str_1001e9c9;
  param_1 = (long)local_f8;
LAB_10015da1:
  recovered_1000b130(PF_PART8(auVar339, 0),PF_PART8(in_XMM1, 0),PF_PART8(in_XMM2, 0),PF_PART8(in_XMM3, 0),in_XMM4_Qa,in_XMM5_Qa,
                     in_XMM6_Qa,in_XMM7_Qa,param_1,uVar324,pcVar320,puVar315,in_R8,in_R9);
  in_R8 = (uint *)(ulong)local_44;
switchD_10014c90_caseD_2:
  uVar333 = (uint)in_R8;
  uVar317 = *(uint *)(param_1 + 0x140) - uVar333;
  if (*(uint *)(param_1 + 0x140) < uVar333 || uVar317 == 0) {
    *(uint *)(param_1 + 0x140) = 0;
    return;
  }
  recovered_100020c0(*(undefined8 **)(param_1 + 0x138),
                     (undefined8 *)((long)in_R8 + (long)*(undefined8 **)(param_1 + 0x138)),
                     (ulong)uVar317,puVar315,(undefined8 *)in_R8,in_R9);
  uVar333 = *(uint *)(param_1 + 0x140) - uVar333;
  *(uint *)(param_1 + 0x140) = uVar333;
  PF_PART8(auVar339, 0) = extraout_XMM0_Qa_17;
  if (uVar333 < 4) {
    return;
  }
  goto LAB_10014362;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280968
#undef DAT_100184cc
#undef DAT_1001d7c0
#undef DAT_1001d7d0
#undef DAT_1001dfa0
#undef DAT_1001dfb0
#undef DAT_100240f0
#undef DAT_10024110
#undef DAT_10024130
#undef DAT_10024164
#undef DAT_100242a8
#undef DAT_100242b0
#undef DAT_100242b8
#undef UNK_1001d7c8
#undef UNK_1001d7d8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280968
#undef _DAT_1001d7c0
#undef _DAT_1001d7d0
#undef _DAT_100242b0
#undef _DAT_100242b8
#undef str_1001db2e
#undef str_1001e803
#undef str_1001e815
#undef str_1001e82e
#undef str_1001e84b
#undef str_1001e857
#undef str_1001e86f
#undef str_1001e893
#undef str_1001e8a0
#undef str_1001e8b0
#undef str_1001e8d3
#undef str_1001e8f6
#undef str_1001e908
#undef str_1001e91a
#undef str_1001e92c
#undef str_1001e949
#undef str_1001e979
#undef str_1001e9a6
#undef str_1001e9b9
#undef str_1001e9c9
#undef str_1001ea35
#undef str_1001ea48
#undef str_1001ea6b
#undef str_1001ea84
#undef str_1001ea9d
#undef str_1001eac0
#undef str_1001ead9
#undef switchdataD_100184cc
#undef uRam000000001001d7c8
#undef uRam000000001001d7d8
#undef local_8b8
#undef local_838
#undef local_818
#undef local_7f9
#undef local_7f8
#undef local_7d8
#undef local_7c8
#undef local_7b8
#undef local_7a8
#undef local_758
#undef local_738
#undef local_718
#undef local_714
#undef local_70c
#undef local_708
#undef local_6f8
#undef local_6f7
#undef local_6f6
#undef local_6f5
#undef local_6f4
#undef local_6f3
#undef local_6f2
#undef local_6f1
#undef local_6f0
#undef local_6ef
#undef local_6ee
#undef local_6ed
#undef local_6ec
#undef local_6eb
#undef local_6ea
#undef local_6e9
#undef local_6e8
#undef local_6e7
#undef local_6e6
#undef local_6e5
#undef local_6e4
#undef local_6e3
#undef local_6e2
#undef local_6e1
#undef local_6e0
#undef local_6df
#undef local_6de
#undef local_6dd
#undef local_6dc
#undef local_6db
#undef local_6da
#undef local_6d9
#undef local_698
#undef local_618
#undef local_518
#undef local_510
#undef local_508
#undef local_500
#undef local_4f8
#undef local_4e8
#undef local_4e0
#undef local_4d8
#undef local_4d0
#undef local_4c8
#undef local_4c0
#undef local_4b8
#undef local_4b0
#undef local_430
#undef local_428
#undef local_420
#undef local_418
#undef local_410
#undef local_408
#undef local_400
#undef local_3f8
#undef local_3f0
#undef local_3e8
#undef local_3d8
#undef local_3c8
#undef local_3a8
#undef local_398
#undef local_388
#undef local_378
#undef local_368
#undef local_358
#undef local_348
#undef local_338
#undef local_328
#undef local_318
#undef local_308
#undef local_2f8
#undef local_2e8
#undef local_2d8
#undef local_2c8
#undef local_2b8
#undef local_2a8
#undef local_298
#undef local_288
#undef local_278
#undef local_268
#undef local_258
#undef local_248
#undef local_238
#undef local_228
#undef local_218
#undef local_208
#undef local_1f8
#undef local_1e8
#undef local_1e0
#undef local_1d8
#undef local_1c8
#undef local_1b8
#undef local_1b0
#undef local_170
#undef local_168
#undef local_160
#undef local_15f
#undef local_15e
#undef local_15d
#undef local_15c
#undef local_15b
#undef local_15a
#undef local_159
#undef local_158
#undef local_157
#undef local_156
#undef local_155
#undef local_154
#undef local_153
#undef local_152
#undef local_151
#undef local_150
#undef local_14f
#undef local_14e
#undef local_14d
#undef local_14c
#undef local_14b
#undef local_14a
#undef local_149
#undef local_148
#undef local_147
#undef local_146
#undef local_145
#undef local_144
#undef local_143
#undef local_142
#undef local_141
#undef local_140
#undef local_13f
#undef local_13e
#undef local_13d
#undef local_13c
#undef local_13b
#undef local_13a
#undef local_139
#undef local_138
#undef local_137
#undef local_136
#undef local_135
#undef local_134
#undef local_133
#undef local_132
#undef local_131
#undef local_130
#undef local_12f
#undef local_12e
#undef local_12d
#undef local_12c
#undef local_12b
#undef local_12a
#undef local_129
#undef local_128
#undef local_123
#undef local_122
#undef local_121
#undef local_120
#undef local_11f
#undef local_11e
#undef local_11d
#undef local_11c
#undef local_11b
#undef local_11a
#undef local_119
#undef local_118
#undef local_117
#undef local_116
#undef local_115
#undef local_114
#undef local_113
#undef local_112
#undef local_111
#undef local_110
#undef local_10f
#undef local_10e
#undef local_10d
#undef local_10c
#undef local_10b
#undef local_10a
#undef local_109
#undef local_108
#undef local_107
#undef local_106
#undef local_105
#undef local_104
#undef local_103
#undef local_102
#undef local_101
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_d8
#undef local_c8
#undef local_b8
#undef local_a0
#undef local_97
#undef local_96
#undef local_95
#undef local_94
#undef local_93
#undef local_92
#undef local_91
#undef local_90
#undef local_8f
#undef local_8e
#undef local_8d
#undef local_8c
#undef local_8b
#undef local_8a
#undef local_89
#undef local_88
#undef local_87
#undef local_86
#undef local_85
#undef local_84
#undef local_83
#undef local_82
#undef local_81
#undef local_80
#undef local_7f
#undef local_7e
#undef local_7d
#undef local_7c
#undef local_7b
#undef local_7a
#undef local_79
#undef local_78
#undef local_77
#undef local_76
#undef local_75
#undef local_74
#undef local_73
#undef local_72
#undef local_71
#undef local_70
#undef local_6f
#undef local_6e
#undef local_6d
#undef local_6c
#undef local_6b
#undef local_6a
#undef local_69
#undef local_68
#undef local_48
#undef local_44
#undef local_40
#undef local_31
#undef uStack_713
#undef uStack_712
#undef uStack_711
#undef uStack_710
#undef uStack_70f
#undef uStack_70e
#undef uStack_70d
#undef uStack_70b
#undef uStack_70a
#undef uStack_709
#undef uStack_707
#undef uStack_706
#undef uStack_705
#undef uStack_704
#undef uStack_703
#undef uStack_702
#undef uStack_701
#undef uStack_700
#undef uStack_6ff
#undef uStack_6fe
#undef uStack_6fd
#undef uStack_6fc
#undef uStack_6fb
#undef uStack_6fa
#undef uStack_6f9
#undef uStack_4f0
#undef uStack_3dc
#undef auStack_3b8
#undef uStack_1d0
#undef uStack_1c0
#undef stack0xfffffffffffffc19
#undef stack0xfffffffffffffc1c
#undef stack0xfffffffffffffc20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018660
 */

void recovered_10018660(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_ESI;

  if (*param_1 - 2U < 2) {
    *(undefined1 *)((long)param_1 + 0x55) = 1;
    recovered_10011390((uint *)param_1,in_ESI);
    return;
  }
  if (*param_1 == 1) {
    recovered_10010ea0((long)param_1,0x14,
                       (uint)*(byte *)((long)param_1 + 0x56) + (uint)*(byte *)(param_1 + 0x15) +
                       param_1[0x14] + param_1[7],0,0);
    *(undefined1 *)((long)param_1 + 0x5b) = 1;
    *param_1 = 0;
    param_1[0xd] = 0;
    param_1[0x13] = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}


#undef DAT_1001e15b
#define DAT_1001e15b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xac5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100186d0
 */

void recovered_100186d0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  undefined8 in_RCX;
  uint uVar3;
  undefined8 *in_R8;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  if (*(char *)(param_1 + 0x888) == '\x01') {
    uVar2 = recovered_10003720(((uintptr_t)pf_module_state + 0xac5U));
    iVar5 = *(int *)(param_1 + 0xbb4);
    uVar4 = (uint)uVar2;
    if (uVar4 <= 0x8000U - iVar5) {
      puVar1 = *(undefined8 **)(param_1 + 0xba8);
      uVar3 = iVar5 + *(int *)(param_1 + 0xbb0) & 0x7fff;
      uVar6 = 0x8000 - uVar3;
      uVar2 = uVar2 & 0xffffffff;
      if (uVar6 < uVar4) {
        uVar2 = (ulong)uVar6;
      }
      recovered_10001c80((undefined8 *)((ulong)uVar3 + (long)puVar1),(undefined8 *)&DAT_1001e15b,
                         uVar2,in_RCX,in_R8);
      if (uVar6 < uVar4) {
        recovered_10001c80(puVar1,(undefined8 *)(&DAT_1001e15b + uVar2),(ulong)(uVar4 - (int)uVar2),
                           in_RCX,in_R8);
      }
      iVar5 = uVar4 + *(int *)(param_1 + 0xbb4);
      *(int *)(param_1 + 0xbb4) = iVar5;
    }
    uVar4 = *(uint *)(param_1 + 0xa98);
    if ((uVar4 != 0) && (uVar4 <= 0x8000U - iVar5)) {
      puVar1 = *(undefined8 **)(param_1 + 0xba8);
      uVar6 = iVar5 + *(int *)(param_1 + 0xbb0) & 0x7fff;
      uVar7 = 0x8000 - uVar6;
      uVar3 = uVar4;
      if (uVar7 < uVar4) {
        uVar3 = uVar7;
      }
      recovered_10001c80((undefined8 *)((ulong)uVar6 + (long)puVar1),(undefined8 *)(param_1 + 0x898)
                         ,(ulong)uVar3,in_RCX,in_R8);
      if (uVar7 < uVar4) {
        recovered_10001c80(puVar1,(undefined8 *)(param_1 + 0x898 + (ulong)uVar3),
                           (ulong)(uVar4 - uVar3),in_RCX,in_R8);
      }
      *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar4;
    }
  }
  return;
}

#undef DAT_1001e15b

/* Recovered variadic session logging; Pooka's Free Software License. */
void recovered_10018800(void *session,char *format,...) {
    char text[256];
    __builtin_va_list arguments;
    __builtin_va_start(arguments,format);
    recovered_10005510(text,sizeof(text),format,(void *)arguments);
    __builtin_va_end(arguments);
    recovered_1000aa30("ssh[%u %s]: %s",*(uint32_t *)((char *)session+4),(char *)session+0x120,text);
}


#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100188d0
 */

uint recovered_100188d0(long *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  uint uVar1;
  undefined8 in_RCX;
  undefined8 *in_R8;

  uStack_18 = (ulong)in_EAX;
  if (((char)param_1[2] == '\0') && (3 < (int)param_1[1] - *(uint *)((long)param_1 + 0xc))) {
    recovered_10001c80((undefined8 *)((long)&uStack_18 + 4),
                       (undefined8 *)((ulong)*(uint *)((long)param_1 + 0xc) + *param_1),4,in_RCX,
                       in_R8);
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 4;
    uVar1 = PF_PART4(uStack_18, 4) >> 0x18 | (PF_PART4(uStack_18, 4) & 0xff0000) >> 8 |
            (PF_PART4(uStack_18, 4) & 0xff00) << 8 | PF_PART4(uStack_18, 4) << 0x18;
  }
  else {
    *(undefined1 *)(param_1 + 2) = 1;
    uVar1 = 0;
  }
  return uVar1;
}

#undef uStack_18

#define uStack_28 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018920
 */

undefined8 recovered_10018920(long *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint in_EAX = 0;
  undefined8 extraout_RAX = 0;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *in_R8;

  uStack_28 = (ulong)in_EAX;
  if (((char)param_1[2] == '\0') && (3 < (int)param_1[1] - *(uint *)((long)param_1 + 0xc))) {
    recovered_10001c80((undefined8 *)((long)&uStack_28 + 4),
                       (undefined8 *)((ulong)*(uint *)((long)param_1 + 0xc) + *param_1),4,
                       (undefined8 *)((long)&uStack_28 + 4),in_R8);
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 4;
    if ((*(byte *)(param_1 + 2) & 1) != 0) goto LAB_10018986;
    uVar4 = PF_PART4(uStack_28, 4) >> 0x18 | (PF_PART4(uStack_28, 4) & 0xff0000) >> 8 |
            (PF_PART4(uStack_28, 4) & 0xff00) << 8 | PF_PART4(uStack_28, 4) << 0x18;
    uVar1 = *(uint *)((long)param_1 + 0xc);
    if ((int)param_1[1] - uVar1 < uVar4) goto LAB_10018986;
    *(uint *)((long)param_1 + 0xc) = uVar1 + uVar4;
    if (*param_1 != 0) {
      uVar2 = param_3 - 1;
      if (uVar4 < param_3) {
        uVar2 = uVar4;
      }
      recovered_10001c80((undefined8 *)param_2,(undefined8 *)(*param_1 + (ulong)uVar1),(ulong)uVar2,
                         (ulong)uVar4,(undefined8 *)(ulong)(uVar1 + uVar4));
      param_2 = param_2 + uVar2;
      uVar3 = CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      goto LAB_1001898c;
    }
  }
  else {
LAB_10018986:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  uVar3 = 0;
LAB_1001898c:
  *param_2 = 0;
  return uVar3;
}

#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100189d0
 */

bool recovered_100189d0(long param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  bool bVar3;

  uVar2 = recovered_10003720((long)param_3);
  if (uVar2 == (param_2 & 0xffffffff) && param_1 != 0) {
    iVar1 = recovered_100032a0((ulong *)param_1,param_3,uVar2);
    bVar3 = iVar1 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


#undef DAT_1001dfa0
#define DAT_1001dfa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90aU)))
#undef DAT_1001e22d
#define DAT_1001e22d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb97U)))
#undef DAT_10022862
#define DAT_10022862 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51ccU)))
#undef DAT_100228a2
#define DAT_100228a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x520cU)))
#undef str_1001e33a
#define str_1001e33a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xca4U)))
#undef str_1001eaf0
#define str_1001eaf0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x145aU)))
#undef str_1001eaff
#define str_1001eaff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1469U)))
#undef str_1001eb22
#define str_1001eb22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x148cU)))
#undef str_1001eb3a
#define str_1001eb3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14a4U)))
#undef str_1001eb59
#define str_1001eb59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14c3U)))
#define local_88 (*(uint (*)[34])(pf_stack_frame + 24))
#define local_48 (*(ulong *)(pf_stack_frame + 88))
#define local_40 (*(void * *)(pf_stack_frame + 96))
#define local_34 (*(uint *)(pf_stack_frame + 108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018a30
 */

void recovered_10018a30(long param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong in_RCX;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 *in_R8;
  undefined8 in_R9;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 in_XMM0_Qa;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;
  undefined8 extraout_XMM0_Qa_01 = 0;
  undefined8 extraout_XMM0_Qa_02 = 0;
  undefined8 extraout_XMM0_Qa_03 = 0;
  undefined8 extraout_XMM0_Qa_04 = 0;
  undefined8 extraout_XMM0_Qa_05 = 0;
  undefined8 extraout_XMM0_Qa_06 = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  if (*(char *)(param_1 + 0x82a) != '\0') {
    return;
  }
  local_88[0] = local_88[0] & 0xffffff00;
  local_40 = (void *)param_1;
  if (param_3 == 0) {
LAB_10018aa0:
    local_88[0] = local_88[0] & 0xffffff00;
  }
  else {
    recovered_10001c80((undefined8 *)local_88,(undefined8 *)param_2,1,in_RCX,in_R8);
    local_88[0] = 0;
    in_XMM0_Qa = extraout_XMM0_Qa;
    if (param_3 < 5) goto LAB_10018aa0;
    puVar14 = local_88;
    recovered_10001c80((undefined8 *)puVar14,(undefined8 *)(param_2 + 1),4,in_RCX,in_R8);
    uVar15 = local_88[0] >> 0x18 | (local_88[0] & 0xff0000) >> 8 | (local_88[0] & 0xff00) << 8 |
             local_88[0] << 0x18;
    in_XMM0_Qa = extraout_XMM0_Qa_00;
    if (param_3 - 5 < uVar15) goto LAB_10018aa0;
    if (param_2 != 0) {
      uVar13 = 0x3f;
      if (uVar15 < 0x3f) {
        uVar13 = (ulong)uVar15;
      }
      recovered_10001c80((undefined8 *)local_88,(undefined8 *)(param_2 + 5),uVar13,in_RCX,in_R8);
      puVar14 = (uint *)((long)local_88 + uVar13);
      in_XMM0_Qa = extraout_XMM0_Qa_01;
    }
    *(undefined1 *)puVar14 = 0;
    local_34 = 0;
    if (3 < param_3 - (uVar15 + 5)) {
      recovered_10001c80((undefined8 *)&local_34,(undefined8 *)((ulong)(uVar15 + 5) + param_2),4,
                         in_RCX,in_R8);
      uVar15 = uVar15 + 9;
      uVar12 = local_34 >> 0x18 | (local_34 & 0xff0000) >> 8 | (local_34 & 0xff00) << 8 |
               local_34 << 0x18;
      in_XMM0_Qa = extraout_XMM0_Qa_02;
      if (uVar12 <= param_3 - uVar15) {
        uVar7 = uVar12 + uVar15;
        local_34 = 0;
        if (3 < param_3 - uVar7) {
          recovered_10001c80((undefined8 *)&local_34,(undefined8 *)((ulong)uVar7 + param_2),4,in_RCX
                             ,in_R8);
          uVar7 = uVar7 + 4;
          in_RCX = (ulong)uVar7;
          uVar8 = local_34 >> 0x18 | (local_34 & 0xff0000) >> 8 | (local_34 & 0xff00) << 8 |
                  local_34 << 0x18;
          local_48 = CONCAT44(PF_PART4(local_48, 4),uVar7);
          in_XMM0_Qa = extraout_XMM0_Qa_03;
          if (uVar8 <= param_3 - uVar7) {
            uVar13 = recovered_10003720(((uintptr_t)pf_module_state + 0x145aU));
            in_XMM0_Qa = extraout_XMM0_Qa_04;
            if ((param_2 != 0) && (in_RCX = (ulong)uVar12, uVar13 == in_RCX)) {
              iVar3 = recovered_100032a0((ulong *)((ulong)uVar15 + param_2),(ulong *)str_1001eaf0,
                                         uVar13);
              in_XMM0_Qa = extraout_XMM0_Qa_05;
              if (iVar3 == 0) {
                puVar9 = (ulong *)((local_48 & 0xffffffff) + param_2);
                uVar13 = recovered_10003720(((uintptr_t)pf_module_state + 0xca4U));
                uVar4 = (ulong)uVar8;
                if ((uVar13 == uVar4) &&
                   (iVar3 = recovered_100032a0(puVar9,(ulong *)str_1001e33a,uVar13), iVar3 == 0)) {
                  uVar8 = uVar8 + (int)local_48;
                  local_34 = local_34 & 0xffffff00;
                  if (uVar8 != param_3) {
                    recovered_10001c80((undefined8 *)&local_34,
                                       (undefined8 *)((ulong)uVar8 + param_2),1,in_RCX,in_R8);
                    local_34 = 0;
                    uVar15 = param_3 - (uVar8 + 1);
                    in_RCX = (ulong)uVar15;
                    if (3 < uVar15) {
                      recovered_10001c80((undefined8 *)&local_34,
                                         (undefined8 *)((ulong)(uVar8 + 1) + param_2),4,in_RCX,in_R8
                                        );
                      local_48 = (ulong)(uVar8 + 5);
                      uVar15 = local_34 >> 0x18 | (local_34 & 0xff0000) >> 8 |
                               (local_34 & 0xff00) << 8 | local_34 << 0x18;
                      if ((uVar15 <= param_3 - (uVar8 + 5)) &&
                         (((iVar3 = recovered_10003750(&DAT_10022862,&DAT_1001e22d), iVar3 == 0 ||
                           (iVar3 = recovered_10003750(&DAT_10022862,(byte *)local_88), iVar3 == 0))
                          && (bVar2 = recovered_1001c8a0(param_2 + (local_48 & 0xffffffff),
                                                         (ulong)uVar15), bVar2))))
                      goto LAB_10018c80;
                    }
                  }
                }
                else {
                  uVar13 = recovered_10003720(((uintptr_t)pf_module_state + 0x90aU));
                  if ((((uVar13 == uVar4) &&
                       (iVar3 = recovered_100032a0(puVar9,(ulong *)&DAT_1001dfa0,uVar4), iVar3 == 0)
                       ) && ((iVar3 = recovered_10003750(&DAT_10022862,&DAT_1001e22d), iVar3 == 0 ||
                             (iVar3 = recovered_10003750(&DAT_10022862,(byte *)local_88), iVar3 == 0
                             )))) &&
                     (iVar3 = recovered_10003750(&DAT_100228a2,&DAT_1001e22d), iVar3 == 0)) {
LAB_10018c80:
                    pvVar11 = local_40;
                    local_34 = CONCAT31(PF_PART3(local_34, 1),0x34);
                    puVar1 = (undefined8 *)((long)local_40 + 0x830);
                    uVar4 = recovered_10003720((long)local_88);
                    uVar13 = 0x3f;
                    if (uVar4 < 0x3f) {
                      uVar13 = uVar4;
                    }
                    recovered_10001c80(puVar1,(undefined8 *)local_88,uVar13,in_RCX,in_R8);
                    *(undefined1 *)((long)pvVar11 + uVar13 + 0x830) = 0;
                    *(undefined1 *)((long)pvVar11 + 0x82a) = 1;
                    *(undefined4 *)((long)pvVar11 + 0x14) = 3;
                    recovered_10018800(pvVar11,str_1001eb22,local_88);
                    recovered_10011b10((long)pvVar11,&local_34,1);
                    return;
                  }
                }
                uVar13 = recovered_10003720(((uintptr_t)pf_module_state + 0x90aU));
                if ((uVar13 != uVar4) ||
                   (iVar3 = recovered_100032a0(puVar9,(ulong *)&DAT_1001dfa0,uVar4), iVar3 != 0)) {
                  recovered_10018800(local_40,str_1001eb3a,local_88);
                }
                puVar1 = *(undefined8 **)((long)local_40 + 0x150);
                local_34 = CONCAT31(PF_PART3(local_34, 1),0x33);
                recovered_10001c80(puVar1,(undefined8 *)&local_34,1,in_RCX,in_R8);
                lVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0xca4U));
                uVar15 = (uint)lVar5;
                local_34 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                           uVar15 << 0x18;
                recovered_10001c80((undefined8 *)((long)puVar1 + 1),(undefined8 *)&local_34,4,in_RCX
                                   ,in_R8);
                if (uVar15 < 0x1ffc) {
                  if (uVar15 == 0) {
                    local_34 = local_34 & 0xffffff00;
                    uVar12 = 5;
                  }
                  else {
                    recovered_10001c80((undefined8 *)((long)puVar1 + 5),(undefined8 *)str_1001e33a,
                                       (ulong)(uVar15 & 0x1fff),in_RCX,in_R8);
                    uVar12 = uVar15 + 5;
                    local_34 = local_34 & 0xffffff00;
                    uVar7 = 0x2000;
                    if (uVar12 == 0x2000) goto LAB_10018e89;
                  }
                  recovered_10001c80((undefined8 *)((ulong)uVar12 + (long)puVar1),
                                     (undefined8 *)&local_34,1,in_RCX,in_R8);
                  uVar7 = uVar15 + 6;
                }
                else {
                  uVar7 = 5;
                }
LAB_10018e89:
                pvVar11 = local_40;
                recovered_10011b10((long)local_40,puVar1,uVar7);
                uVar15 = *(int *)((long)pvVar11 + 0x82c) + 1;
                *(uint *)((long)pvVar11 + 0x82c) = uVar15;
                if (uVar15 < 6) {
                  return;
                }
                pcVar6 = str_1001eb59;
                uVar10 = 0xe;
                in_XMM0_Qa = extraout_XMM0_Qa_06;
                goto LAB_10018ab4;
              }
            }
          }
        }
      }
    }
  }
  pcVar6 = str_1001eaff;
  uVar10 = 7;
  pvVar11 = local_40;
LAB_10018ab4:
  recovered_1000b130(in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa,(long)pvVar11,uVar10,pcVar6,in_RCX,in_R8,in_R9);
  return;
}

#undef DAT_1001dfa0
#undef DAT_1001e22d
#undef DAT_10022862
#undef DAT_100228a2
#undef str_1001e33a
#undef str_1001eaf0
#undef str_1001eaff
#undef str_1001eb22
#undef str_1001eb3a
#undef str_1001eb59
#undef local_88
#undef local_48
#undef local_40
#undef local_34

#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018ed0
 */

bool recovered_10018ed0(long *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulong in_RAX;
  undefined8 in_RCX;
  undefined8 *in_R8;
  bool bVar1;

  uStack_18 = in_RAX & 0xffffffffffffff;
  if (((char)param_1[2] == '\0') && (*(uint *)(param_1 + 1) != *(uint *)((long)param_1 + 0xc))) {
    recovered_10001c80((undefined8 *)((long)&uStack_18 + 7),
                       (undefined8 *)((ulong)*(uint *)((long)param_1 + 0xc) + *param_1),1,in_RCX,
                       in_R8);
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
    bVar1 = PF_PART1(uStack_18, 7) != '\0';
  }
  else {
    *(undefined1 *)(param_1 + 2) = 1;
    bVar1 = false;
  }
  return bVar1;
}

#undef uStack_18

#undef DAT_1001e588
#define DAT_1001e588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xef2U)))
#undef str_1001eb7a
#define str_1001eb7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14e4U)))
#undef str_1001eb91
#define str_1001eb91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14fbU)))
#undef str_1001eb99
#define str_1001eb99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1503U)))
#undef str_1001ebbf
#define str_1001ebbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1529U)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018f20
 */

void recovered_10018f20(long param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong in_RCX;
  ulong uVar10;
  uint uVar11;
  undefined8 *in_R8;
  undefined8 in_R9;
  uint uVar12;
  char *pcVar13;
  undefined8 in_XMM0_Qa;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;
  undefined8 extraout_XMM0_Qa_01 = 0;
  undefined8 extraout_XMM0_Qa_02 = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  local_34 = local_34 & 0xffffff00;
  if (param_3 != 0) {
    recovered_10001c80((undefined8 *)&local_34,(undefined8 *)param_2,1,in_RCX,in_R8);
    local_34 = 0;
    in_XMM0_Qa = extraout_XMM0_Qa;
    if (4 < param_3) {
      recovered_10001c80((undefined8 *)&local_34,(undefined8 *)(param_2 + 1),4,in_RCX,in_R8);
      uVar12 = local_34 >> 0x18 | (local_34 & 0xff0000) >> 8 | (local_34 & 0xff00) << 8 |
               local_34 << 0x18;
      in_XMM0_Qa = extraout_XMM0_Qa_00;
      if (uVar12 <= param_3 - 5) {
        local_34 = 0;
        uVar8 = param_3 - (uVar12 + 5);
        in_RCX = (ulong)uVar8;
        if (3 < uVar8) {
          recovered_10001c80((undefined8 *)&local_34,(undefined8 *)((ulong)(uVar12 + 5) + param_2),4
                             ,in_RCX,in_R8);
          uVar3 = local_34;
          uVar8 = local_34 >> 8;
          uVar5 = local_34 >> 0x10;
          uVar2 = local_34 >> 0x18;
          local_34 = 0;
          uVar9 = param_3 - (uVar12 + 9);
          in_RCX = (ulong)uVar9;
          in_XMM0_Qa = extraout_XMM0_Qa_01;
          if (3 < uVar9) {
            recovered_10001c80((undefined8 *)&local_34,(undefined8 *)((ulong)(uVar12 + 9) + param_2)
                               ,4,in_RCX,in_R8);
            uVar9 = local_34;
            in_RCX = (ulong)local_34;
            local_34 = 0;
            in_XMM0_Qa = extraout_XMM0_Qa_02;
            if (3 < param_3 - (uVar12 + 0xd)) {
              recovered_10001c80((undefined8 *)&local_34,
                                 (undefined8 *)((ulong)(uVar12 + 0xd) + param_2),4,in_RCX,in_R8);
              uVar11 = local_34;
              puVar1 = *(undefined8 **)(param_1 + 0x150);
              uVar6 = recovered_10003720(((uintptr_t)pf_module_state + 0x14fbU));
              uVar10 = (ulong)uVar12;
              if (((uVar6 == uVar10) &&
                  (iVar4 = recovered_100032a0((ulong *)(param_2 + 5),(ulong *)str_1001eb91,uVar6),
                  iVar4 == 0)) && (*(char *)(param_1 + 0x870) != '\x01')) {
                uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                        uVar9 << 0x18;
                uVar6 = (ulong)uVar9;
                uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                         uVar11 << 0x18;
                *(undefined1 *)(param_1 + 0x870) = 1;
                *(uint *)(param_1 + 0x878) =
                     (uVar5 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | uVar3 << 0x18 | uVar2;
                uVar12 = 0x1000;
                if (uVar11 != 0) {
                  uVar12 = uVar11;
                }
                *(uint *)(param_1 + 0x87c) = uVar9;
                *(uint *)(param_1 + 0x880) = uVar12;
                *(undefined4 *)(param_1 + 0x884) = 0x20000;
                local_34 = CONCAT31(PF_PART3(local_34, 1),0x5b);
                recovered_10001c80(puVar1,(undefined8 *)&local_34,1,uVar6,in_R8);
                local_34 = uVar3;
                recovered_10001c80((undefined8 *)((long)puVar1 + 1),(undefined8 *)&local_34,4,uVar6,
                                   in_R8);
                local_34 = 0;
                recovered_10001c80((undefined8 *)((long)puVar1 + 5),(undefined8 *)&local_34,4,uVar6,
                                   in_R8);
                local_34 = 0x200;
                recovered_10001c80((undefined8 *)((long)puVar1 + 9),(undefined8 *)&local_34,4,uVar6,
                                   in_R8);
                local_34 = 0x800000;
                recovered_10001c80((undefined8 *)((long)puVar1 + 0xd),(undefined8 *)&local_34,4,
                                   uVar6,in_R8);
                uVar8 = 0x11;
              }
              else {
                local_34 = CONCAT31(PF_PART3(local_34, 1),0x5c);
                recovered_10001c80(puVar1,(undefined8 *)&local_34,1,uVar10,in_R8);
                local_34 = uVar3;
                recovered_10001c80((undefined8 *)((long)puVar1 + 1),(undefined8 *)&local_34,4,uVar10
                                   ,in_R8);
                local_34 = (uint)(byte)((*(char *)(param_1 + 0x870) != '\0') * '\x03' + 1) << 0x18;
                recovered_10001c80((undefined8 *)((long)puVar1 + 5),(undefined8 *)&local_34,4,uVar10
                                   ,in_R8);
                pcVar13 = str_1001ebbf;
                if (*(char *)(param_1 + 0x870) != '\0') {
                  pcVar13 = str_1001eb99;
                }
                lVar7 = recovered_10003720((long)pcVar13);
                uVar12 = (uint)lVar7;
                local_34 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                           uVar12 << 0x18;
                recovered_10001c80((undefined8 *)((long)puVar1 + 9),(undefined8 *)&local_34,4,uVar10
                                   ,in_R8);
                uVar8 = 0xd;
                if (uVar12 < 0x1ff4) {
                  if (uVar12 != 0) {
                    recovered_10001c80((undefined8 *)((long)puVar1 + 0xd),(undefined8 *)pcVar13,
                                       (ulong)(uVar12 & 0x1fff),uVar10,in_R8);
                  }
                  uVar8 = uVar12 + 0xd;
                }
                uVar6 = recovered_10003720(((uintptr_t)pf_module_state + 0xef2U));
                uVar5 = (uint)uVar6;
                local_34 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                           uVar5 << 0x18;
                if (3 < uVar8 - 0x1ffd && uVar12 < 0x1ff4) {
                  recovered_10001c80((undefined8 *)((ulong)uVar8 + (long)puVar1),
                                     (undefined8 *)&local_34,4,uVar10,in_R8);
                  uVar12 = 0x1ffc - uVar8;
                  uVar8 = uVar8 + 4;
                  if (uVar5 <= uVar12) {
                    if (uVar5 != 0) {
                      recovered_10001c80((undefined8 *)((ulong)uVar8 + (long)puVar1),
                                         (undefined8 *)&DAT_1001e588,uVar6 & 0xffffffff,uVar10,in_R8
                                        );
                    }
                    uVar8 = uVar8 + uVar5;
                  }
                }
              }
              recovered_10011b10(param_1,puVar1,uVar8);
              return;
            }
          }
        }
      }
    }
  }
  recovered_1000b130(in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa,param_1,2,str_1001eb7a,in_RCX,in_R8,in_R9);
  return;
}

#undef DAT_1001e588
#undef str_1001eb7a
#undef str_1001eb91
#undef str_1001eb99
#undef str_1001ebbf
#undef local_34

#undef DAT_1001e2ce
#define DAT_1001e2ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc38U)))
#undef DAT_1001ebf1
#define DAT_1001ebf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef DAT_1001ec0d
#define DAT_1001ec0d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1577U)))
#undef DAT_1001ec1e
#define DAT_1001ec1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1588U)))
#undef DAT_10022930
#define DAT_10022930 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x529aU)))
#undef DAT_10022a30
#define DAT_10022a30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x539aU)))
#undef str_1001e73e
#define str_1001e73e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10a8U)))
#undef str_1001ebe3
#define str_1001ebe3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x154dU)))
#undef str_1001ebeb
#define str_1001ebeb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1555U)))
#undef str_1001ebf6
#define str_1001ebf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1560U)))
#undef str_1001ebff
#define str_1001ebff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1569U)))
#undef str_1001ec11
#define str_1001ec11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x157bU)))
#undef str_1001ec18
#define str_1001ec18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1582U)))
#undef str_1001ec23
#define str_1001ec23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x158dU)))
#undef str_1001ec38
#define str_1001ec38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15a2U)))
#define local_268 (*(uint (*)[154])(pf_stack_frame + 24))
#define local_68 (*(long *)(pf_stack_frame + 536))
#define local_60 (*(uint *)(pf_stack_frame + 544))
#define local_5c (*(int *)(pf_stack_frame + 548))
#define local_58 (*(undefined1 *)(pf_stack_frame + 552))
#define local_50 (*(undefined8 * *)(pf_stack_frame + 560))
#define local_44 (*(uint *)(pf_stack_frame + 572))
#define local_40 (*(ulong * *)(pf_stack_frame + 576))
#define local_31 (*(byte *)(pf_stack_frame + 591))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100192e0
 */

void recovered_100192e0(long param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[672] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 in_RCX;
  undefined1 *puVar9;
  ulong *puVar10;
  int iVar11;
  uint uVar12;
  undefined8 *in_R8;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulong *puVar18;

  local_5c = 0;
  local_58 = 0;
  local_268[0] = local_268[0] & 0xffffff00;
  if (param_3 == 0) {
    return;
  }
  local_68 = param_2;
  local_60 = param_3;
  recovered_10001c80((undefined8 *)local_268,(undefined8 *)param_2,1,in_RCX,in_R8);
  local_268[0] = 0;
  if (param_3 < 5) {
    return;
  }
  recovered_10001c80((undefined8 *)local_268,(undefined8 *)(param_2 + 1),4,in_RCX,in_R8);
  uVar4 = local_268[0];
  local_268[0] = 0;
  if (param_3 - 5 < 4) {
    return;
  }
  recovered_10001c80((undefined8 *)local_268,(undefined8 *)(param_2 + 5),4,in_RCX,in_R8);
  uVar13 = local_268[0] >> 0x18 | (local_268[0] & 0xff0000) >> 8 | (local_268[0] & 0xff00) << 8 |
           local_268[0] << 0x18;
  if (param_3 - 9 < uVar13) {
    return;
  }
  local_268[0] = local_268[0] & 0xffffff00;
  if (uVar13 + 9 == param_3) {
    return;
  }
  recovered_10001c80((undefined8 *)local_268,(undefined8 *)((ulong)(uVar13 + 9) + param_2),1,in_RCX,
                     in_R8);
  local_5c = uVar13 + 10;
  uVar6 = (ulong)(byte)local_268[0];
  if ((*(char *)(param_1 + 0x870) != '\x01') ||
     (((uVar4 >> 0x18 != 0 || (uVar4 & 0xff0000) != 0) || (uVar4 & 0xff00) != 0) ||
      (uVar4 & 0xff) != 0)) {
    if ((byte)local_268[0] == 0 || *(char *)(param_1 + 0x870) != '\x01') {
      return;
    }
    puVar17 = *(undefined8 **)(param_1 + 0x150);
    local_268[0] = CONCAT31(PF_PART3(local_268[0], 1),100);
    bVar8 = 0;
    goto LAB_10019b8c;
  }
  local_50 = (undefined8 *)CONCAT44(PF_PART4(local_50, 4),local_5c);
  local_31 = (byte)local_268[0];
  local_40 = (ulong *)(param_2 + 9);
  uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x154dU));
  uVar14 = (ulong)uVar13;
  if ((uVar5 != uVar14) ||
     (iVar3 = recovered_100032a0(local_40,(ulong *)str_1001ebe3,uVar5), iVar3 != 0)) {
    uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x1555U));
    puVar10 = local_40;
    if ((uVar5 == uVar14) &&
       (iVar3 = recovered_100032a0(local_40,(ulong *)str_1001ebeb,uVar14), iVar3 == 0)) {
      if (*(int *)(param_1 + 0x894) == 0) {
        *(undefined4 *)(param_1 + 0x894) = 1;
        *(undefined4 *)(param_1 + 0xa98) = 0;
        iVar3 = *(int *)(param_1 + 0xbb4);
        if (iVar3 - 0x8001U < 0xfffffffe) {
          local_40 = *(ulong **)(param_1 + 0xba8);
          uVar4 = iVar3 + *(int *)(param_1 + 0xbb0) & 0x7fff;
          uVar5 = (ulong)(0x8000 - uVar4);
          if (1 < 0x8000 - uVar4) {
            uVar5 = 2;
          }
          recovered_10001c80((undefined8 *)((ulong)uVar4 + (long)local_40),
                             (undefined8 *)&DAT_1001e2ce,uVar5,uVar6,in_R8);
          if (uVar4 == 0x7fff) {
            recovered_10001c80(local_40,(undefined8 *)(&DAT_1001e2ce + uVar5),
                               (ulong)(2 - (int)uVar5),uVar6,in_R8);
          }
          iVar3 = *(int *)(param_1 + 0xbb4) + 2;
          *(int *)(param_1 + 0xbb4) = iVar3;
        }
        if (DAT_10022930 != 0) {
          puVar10 = (ulong *)&DAT_10022930;
          puVar18 = (ulong *)&DAT_10022930;
          iVar11 = iVar3;
          bVar8 = DAT_10022930;
          do {
            if (bVar8 == 0) {
LAB_100196dd:
              if (puVar10 < puVar18) {
                uVar4 = (int)puVar18 - (int)puVar10;
                uVar6 = (ulong)(0x8000U - iVar11);
                if (uVar4 <= 0x8000U - iVar11) {
                  local_50 = *(undefined8 **)(param_1 + 0xba8);
                  uVar12 = iVar11 + *(int *)(param_1 + 0xbb0) & 0x7fff;
                  uVar16 = 0x8000 - uVar12;
                  uVar13 = uVar4;
                  if (uVar16 < uVar4) {
                    uVar13 = uVar16;
                  }
                  local_40 = puVar10;
                  recovered_10001c80((undefined8 *)((ulong)uVar12 + (long)local_50),puVar10,
                                     (ulong)uVar13,uVar6,in_R8);
                  if (uVar16 < uVar4) {
                    recovered_10001c80(local_50,(undefined8 *)((long)local_40 + (ulong)uVar13),
                                       (ulong)(uVar4 - uVar13),uVar6,in_R8);
                  }
                  iVar3 = uVar4 + *(int *)(param_1 + 0xbb4);
                  *(int *)(param_1 + 0xbb4) = iVar3;
                  bVar8 = (byte)*puVar18;
                }
              }
              uVar4 = iVar3 - 0x8001;
              uVar6 = (ulong)uVar4;
              if (bVar8 == 0) goto LAB_10019a32;
              if (uVar4 < 0xfffffffe) {
                puVar17 = *(undefined8 **)(param_1 + 0xba8);
                uVar4 = iVar3 + *(int *)(param_1 + 0xbb0) & 0x7fff;
                uVar5 = (ulong)(0x8000 - uVar4);
                if (1 < 0x8000 - uVar4) {
                  uVar5 = 2;
                }
                recovered_10001c80((undefined8 *)((long)puVar17 + (ulong)uVar4),
                                   (undefined8 *)&DAT_1001e2ce,uVar5,uVar6,in_R8);
                if (uVar4 == 0x7fff) {
                  recovered_10001c80(puVar17,(undefined8 *)(&DAT_1001e2ce + uVar5),
                                     (ulong)(2 - (int)uVar5),uVar6,in_R8);
                }
                iVar3 = *(int *)(param_1 + 0xbb4) + 2;
                *(int *)(param_1 + 0xbb4) = iVar3;
              }
              puVar10 = (ulong *)((long)puVar18 + 1);
              iVar11 = iVar3;
            }
            else {
              uVar4 = (uint)bVar8;
              uVar6 = (ulong)uVar4;
              if (uVar4 == 0xd) {
                if (puVar10 < puVar18) {
                  uVar4 = (int)puVar18 - (int)puVar10;
                  if (uVar4 <= 0x8000U - iVar11) {
                    local_50 = *(undefined8 **)(param_1 + 0xba8);
                    uVar12 = iVar11 + *(int *)(param_1 + 0xbb0) & 0x7fff;
                    uVar16 = 0x8000 - uVar12;
                    uVar13 = uVar4;
                    if (uVar16 < uVar4) {
                      uVar13 = uVar16;
                    }
                    local_40 = puVar10;
                    recovered_10001c80((undefined8 *)((ulong)uVar12 + (long)local_50),puVar10,
                                       (ulong)uVar13,0xd,in_R8);
                    if (uVar16 < uVar4) {
                      recovered_10001c80(local_50,(undefined8 *)((long)local_40 + (ulong)uVar13),
                                         (ulong)(uVar4 - uVar13),uVar6,in_R8);
                    }
                    iVar3 = uVar4 + *(int *)(param_1 + 0xbb4);
                    *(int *)(param_1 + 0xbb4) = iVar3;
                    iVar11 = iVar3;
                  }
                }
                if (iVar11 - 0x8001U < 0xfffffffe) {
                  puVar17 = *(undefined8 **)(param_1 + 0xba8);
                  uVar4 = iVar11 + *(int *)(param_1 + 0xbb0) & 0x7fff;
                  uVar5 = (ulong)(0x8000 - uVar4);
                  if (1 < 0x8000 - uVar4) {
                    uVar5 = 2;
                  }
                  recovered_10001c80((undefined8 *)((ulong)uVar4 + (long)puVar17),
                                     (undefined8 *)&DAT_1001e2ce,uVar5,uVar6,in_R8);
                  if (uVar4 == 0x7fff) {
                    recovered_10001c80(puVar17,(undefined8 *)(&DAT_1001e2ce + uVar5),
                                       (ulong)(2 - (int)uVar5),uVar6,in_R8);
                  }
                  iVar3 = *(int *)(param_1 + 0xbb4) + 2;
                  *(int *)(param_1 + 0xbb4) = iVar3;
                  iVar11 = iVar3;
                }
                if (*(byte *)((long)puVar18 + 1) == 10) {
                  puVar18 = (ulong *)((long)puVar18 + 1);
                }
                puVar10 = (ulong *)((long)puVar18 + 1);
              }
              else if (uVar4 == 10) goto LAB_100196dd;
            }
            bVar8 = *(byte *)((long)puVar18 + 1);
            puVar18 = (ulong *)((long)puVar18 + 1);
          } while( true );
        }
        puVar9 = &DAT_10022a30;
        recovered_100063f0((char *)local_268,0x100,str_1001ec23,&DAT_10022a30);
        uVar6 = recovered_10003720((long)local_268);
        uVar4 = (uint)uVar6;
        if (uVar4 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
          puVar17 = *(undefined8 **)(param_1 + 0xba8);
          uVar13 = *(int *)(param_1 + 0xbb4) + *(int *)(param_1 + 0xbb0) & 0x7fff;
          uVar12 = 0x8000 - uVar13;
          uVar6 = uVar6 & 0xffffffff;
          if (uVar12 < uVar4) {
            uVar6 = (ulong)uVar12;
          }
          recovered_10001c80((undefined8 *)((ulong)uVar13 + (long)puVar17),(undefined8 *)local_268,
                             uVar6,puVar9,in_R8);
          if (uVar12 < uVar4) {
            recovered_10001c80(puVar17,(undefined8 *)((long)local_268 + uVar6),
                               (ulong)(uVar4 - (int)uVar6),puVar9,in_R8);
          }
          *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar4;
        }
        goto LAB_10019b4a;
      }
LAB_100195a7:
      cVar2 = '\0';
    }
    else {
      uVar6 = recovered_10003720(((uintptr_t)pf_module_state + 0x155bU));
      if ((uVar6 != uVar14) ||
         (iVar3 = recovered_100032a0(puVar10,(ulong *)&DAT_1001ebf1,uVar14), iVar3 != 0)) {
        uVar6 = recovered_10003720(((uintptr_t)pf_module_state + 0x1569U));
        if ((uVar6 == uVar14) &&
           (iVar3 = recovered_100032a0(puVar10,(ulong *)str_1001ebff,uVar14), iVar3 == 0)) {
          uVar4 = recovered_100188d0(&local_68);
          *(uint *)(param_1 + 0x88c) = uVar4;
          uVar4 = recovered_100188d0(&local_68);
          *(uint *)(param_1 + 0x890) = uVar4;
        }
        else {
          bVar1 = recovered_100189d0((long)puVar10,(ulong)uVar13,&DAT_1001ec0d);
          if (((!bVar1) &&
              (bVar1 = recovered_100189d0((long)puVar10,(ulong)uVar13,str_1001ec11), !bVar1)) &&
             (bVar1 = recovered_100189d0((long)puVar10,(ulong)uVar13,str_1001ec18), !bVar1))
          goto LAB_100195a7;
        }
        goto LAB_10019b71;
      }
      if (*(int *)(param_1 + 0x894) == 0) {
        uVar7 = recovered_10018920(&local_68,(undefined1 *)local_268,0x200);
        if ((char)uVar7 == '\0') goto LAB_100195a7;
        *(undefined4 *)(param_1 + 0x894) = 2;
        recovered_10018800((void *)param_1,str_1001ebf6,local_268);
        uVar7 = recovered_1001c9b0((byte *)local_268);
        if ((char)uVar7 == '\0') {
          recovered_1001cc80(param_1,local_268);
          goto LAB_10019b71;
        }
        cVar2 = '\x01';
        if (*(char *)(param_1 + 0xde3) == '\0') {
          *(undefined1 *)(param_1 + 0xde3) = 1;
          *(undefined4 *)(param_1 + 0xde8) = 0;
        }
      }
      else {
        cVar2 = '\0';
      }
    }
    goto LAB_10019b77;
  }
  local_268[0] = 0;
  if (param_3 - (int)local_50 < 4) {
LAB_10019578:
    local_268[0] = local_268[0] & 0xffffff00;
LAB_1001957f:
    *(undefined4 *)(param_1 + 0x88c) = 0;
    cVar2 = '\0';
    uVar4 = 0;
  }
  else {
    puVar15 = local_268;
    recovered_10001c80((undefined8 *)puVar15,
                       (undefined8 *)(((ulong)local_50 & 0xffffffff) + param_2),4,
                       (ulong)local_50 & 0xffffffff,in_R8);
    uVar13 = uVar13 + 0xe;
    uVar4 = local_268[0] >> 0x18 | (local_268[0] & 0xff0000) >> 8 | (local_268[0] & 0xff00) << 8 |
            local_268[0] << 0x18;
    if (param_3 - uVar13 < uVar4) goto LAB_10019578;
    uVar6 = (ulong)(uVar4 + uVar13);
    local_40 = (ulong *)CONCAT44(PF_PART4(local_40, 4),uVar4 + uVar13);
    if (param_2 != 0) {
      uVar5 = 0x1f;
      if (uVar4 < 0x1f) {
        uVar5 = (ulong)uVar4;
      }
      recovered_10001c80((undefined8 *)local_268,(undefined8 *)((ulong)uVar13 + param_2),uVar5,uVar6
                         ,in_R8);
      puVar15 = (uint *)((long)local_268 + uVar5);
    }
    *(undefined1 *)puVar15 = 0;
    local_44 = 0;
    iVar3 = (int)local_40;
    if (param_3 - (int)local_40 < 4) goto LAB_1001957f;
    recovered_10001c80((undefined8 *)&local_44,
                       (undefined8 *)(((ulong)local_40 & 0xffffffff) + param_2),4,uVar6,in_R8);
    *(uint *)(param_1 + 0x88c) =
         local_44 >> 0x18 | (local_44 & 0xff0000) >> 8 | (local_44 & 0xff00) << 8 | local_44 << 0x18
    ;
    local_44 = 0;
    cVar2 = '\0';
    uVar4 = 0;
    if (3 < param_3 - (iVar3 + 4U)) {
      recovered_10001c80((undefined8 *)&local_44,(undefined8 *)(param_2 + (ulong)(iVar3 + 4U)),4,0,
                         in_R8);
      uVar4 = local_44 >> 0x18 | (local_44 & 0xff0000) >> 8 | (local_44 & 0xff00) << 8 |
              local_44 << 0x18;
      cVar2 = '\x01';
    }
  }
  *(uint *)(param_1 + 0x890) = uVar4;
  *(char *)(param_1 + 0x888) = cVar2;
LAB_10019b77:
  if (local_31 == 0) {
    return;
  }
  bVar8 = 100 - cVar2;
  puVar17 = *(undefined8 **)(param_1 + 0x150);
  local_268[0] = CONCAT31(PF_PART3(local_268[0], 1),bVar8);
LAB_10019b8c:
  uVar6 = (ulong)bVar8;
  recovered_10001c80(puVar17,(undefined8 *)local_268,1,uVar6,in_R8);
  uVar4 = *(uint *)(param_1 + 0x878);
  local_268[0] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  recovered_10001c80((undefined8 *)((long)puVar17 + 1),(undefined8 *)local_268,4,uVar6,in_R8);
  recovered_10011b10(param_1,puVar17,5);
  return;
LAB_10019a32:
  if (uVar4 < 0xfffffffc) {
    local_40 = *(ulong **)(param_1 + 0xba8);
    uVar4 = iVar3 + *(int *)(param_1 + 0xbb0) & 0x7fff;
    uVar5 = (ulong)(0x8000 - uVar4);
    if (3 < 0x8000 - uVar4) {
      uVar5 = 4;
    }
    recovered_10001c80((undefined8 *)((ulong)uVar4 + (long)local_40),(undefined8 *)&DAT_1001ec1e,
                       uVar5,uVar6,in_R8);
    if (0x7ffc < uVar4) {
      recovered_10001c80(local_40,(undefined8 *)(&DAT_1001ec1e + uVar5),(ulong)(4 - (int)uVar5),
                         uVar6,in_R8);
    }
    *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + 4;
  }
LAB_10019b4a:
  recovered_100186d0(param_1);
  recovered_1000aa30(str_1001e73e,*(uint *)(param_1 + 4),(void *)(param_1 + 0x120),str_1001ec38);
LAB_10019b71:
  cVar2 = '\x01';
  goto LAB_10019b77;
}

#undef DAT_1001e2ce
#undef DAT_1001ebf1
#undef DAT_1001ec0d
#undef DAT_1001ec1e
#undef DAT_10022930
#undef DAT_10022a30
#undef str_1001e73e
#undef str_1001ebe3
#undef str_1001ebeb
#undef str_1001ebf6
#undef str_1001ebff
#undef str_1001ec11
#undef str_1001ec18
#undef str_1001ec23
#undef str_1001ec38
#undef local_268
#undef local_68
#undef local_60
#undef local_5c
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_31

#undef str_1001ec57
#define str_1001ec57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15c1U)))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019c00
 */

void recovered_10019c00(long param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined8 uVar6;
  ulong in_RCX;
  undefined8 *in_R8;
  undefined8 in_R9;
  uint uVar7;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  PF_PART3(uStack_38, 5) = (undefined3)((ulong)in_RAX >> 0x28);
  PF_PART4(uStack_38, 0) = (uint)in_RAX;
  PF_PART5(uStack_38, 0) = (uint5)(uint)uStack_38;
  if (param_3 != 0) {
    recovered_10001c80((undefined8 *)((long)&uStack_38 + 4),(undefined8 *)param_2,1,in_RCX,in_R8);
    uStack_38 = uStack_38 & 0xffffffff;
    if (4 < param_3) {
      recovered_10001c80((undefined8 *)((long)&uStack_38 + 4),(undefined8 *)(param_2 + 1),4,in_RCX,
                         in_R8);
      uVar4 = uStack_38;
      uVar5 = PF_PART4(uStack_38, 4);
      uStack_38 = uStack_38 & 0xffffffff;
      if (3 < param_3 - 5) {
        recovered_10001c80((undefined8 *)((long)&uStack_38 + 4),(undefined8 *)(param_2 + 5),4,in_RCX
                           ,in_R8);
        uVar7 = PF_PART4(uStack_38, 4) >> 0x18 | (PF_PART4(uStack_38, 4) & 0xff0000) >> 8 |
                (PF_PART4(uStack_38, 4) & 0xff00) << 8 | PF_PART4(uStack_38, 4) << 0x18;
        if (((uVar7 <= param_3 - 9) && (*(char *)(param_1 + 0x870) == '\x01')) &&
           (((uVar5 >> 0x18 == 0 && (uVar4 & 0xff000000000000) == 0) &&
            (uVar4 & 0xff0000000000) == 0) && (uVar4 & 0xff00000000) == 0)) {
          uVar5 = *(uint *)(param_1 + 0x884) - uVar7;
          if (*(uint *)(param_1 + 0x884) < uVar7) {
            recovered_1000b130(extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                               in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,2,str_1001ec57,in_RCX,in_R8,
                               in_R9);
          }
          else {
            *(uint *)(param_1 + 0x884) = uVar5;
            if (((*(int *)(param_1 + 0x894) == 1) && (uVar7 != 0)) &&
               (*(char *)(param_1 + 0xde3) == '\0')) {
              uVar5 = 0;
              do {
                if (((*(char *)(param_1 + 3000) == '\0') && (*(char *)(param_1 + 0xbb9) == '\0')) &&
                   (*(char *)(param_1 + 0xde0) != '\x01')) {
                  recovered_1001ce10(param_1,(uint)*(byte *)(param_2 + 9 + (ulong)uVar5));
                  if (*(char *)(param_1 + 0xde3) != '\0') break;
                }
                else {
                  uVar2 = *(uint *)(param_1 + 0xba0);
                  if ((ulong)uVar2 < 0x100) {
                    bVar1 = *(byte *)(param_2 + 9 + (ulong)uVar5);
                    in_RCX = (ulong)bVar1;
                    *(uint *)(param_1 + 0xba0) = uVar2 + 1;
                    *(byte *)(param_1 + 0xa9e + (ulong)uVar2) = bVar1;
                  }
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar7);
              uVar5 = *(uint *)(param_1 + 0x884);
            }
            if (uVar5 < 0x10000) {
              puVar3 = *(undefined8 **)(param_1 + 0x150);
              PF_PART5(uStack_38, 0) = CONCAT14(0x5d,(uint)uStack_38);
              recovered_10001c80(puVar3,(undefined8 *)((long)&uStack_38 + 4),1,in_RCX,in_R8);
              uVar5 = *(uint *)(param_1 + 0x878);
              uStack_38 = CONCAT44(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                   uVar5 << 0x18,(uint)uStack_38);
              recovered_10001c80((undefined8 *)((long)puVar3 + 1),
                                 (undefined8 *)((long)&uStack_38 + 4),4,in_RCX,in_R8);
              uVar5 = 0x20000 - *(int *)(param_1 + 0x884);
              uStack_38 = CONCAT44(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                   *(int *)(param_1 + 0x884) * -0x1000000,(uint)uStack_38);
              recovered_10001c80((undefined8 *)((long)puVar3 + 5),
                                 (undefined8 *)((long)&uStack_38 + 4),4,in_RCX,in_R8);
              uVar6 = recovered_10011b10(param_1,puVar3,9);
              if ((char)uVar6 != '\0') {
                *(undefined4 *)(param_1 + 0x884) = 0x20000;
              }
            }
          }
        }
      }
    }
  }
  return;
}

#undef str_1001ec57
#undef uStack_38

#define local_1d (*(uint *)(pf_stack_frame + 19))
#define local_19 (*(undefined1 *)(pf_stack_frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019de0
 */

void recovered_10019de0(long param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 in_RCX;
  undefined8 *in_R8;

  puVar2 = *(undefined8 **)(param_1 + 0x150);
  local_19 = param_2;
  recovered_10001c80(puVar2,(undefined8 *)&local_19,1,in_RCX,in_R8);
  uVar1 = *(uint *)(param_1 + 0x878);
  local_1d = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  recovered_10001c80((undefined8 *)((long)puVar2 + 1),(undefined8 *)&local_1d,4,in_RCX,in_R8);
  recovered_10011b10(param_1,puVar2,5);
  return;
}

#undef local_1d
#undef local_19

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019e40
 */

undefined8 recovered_10019e40(long param_1,uint param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 extraout_var = 0;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;

  uVar2 = (ulong)param_2;
  uVar5 = recovered_10003720((long)param_3);
  uVar6 = 0;
  if (param_1 != 0) {
    do {
      uVar3 = (uint)uVar6;
      if (param_2 < uVar3) {
        return 0;
      }
      uVar8 = uVar6;
      if (uVar3 < param_2) {
        bVar9 = true;
        uVar7 = uVar6;
        if (*(char *)(param_1 + uVar6) != ',') {
          do {
            if (uVar2 - 1 == uVar7) {
              bVar9 = false;
              uVar8 = uVar2;
              goto LAB_10019ef0;
            }
            uVar8 = uVar7 + 1;
            pcVar1 = (char *)(param_1 + 1 + uVar7);
            uVar7 = uVar8;
          } while (*pcVar1 != ',');
          bVar9 = uVar8 < uVar2;
        }
      }
      else {
        bVar9 = false;
      }
LAB_10019ef0:
      if (uVar5 == (int)uVar8 - uVar3) {
        iVar4 = recovered_100032a0((ulong *)(uVar6 + param_1),param_3,uVar5);
        if (iVar4 == 0) {
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar4) >> 8),1);
        }
      }
      uVar6 = (ulong)((int)uVar8 + 1);
    } while (bVar9);
  }
  return 0;
}


#undef str_1001e9e5
#define str_1001e9e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x134fU)))
#undef str_1001ea03
#define str_1001ea03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x136dU)))
#undef str_1001ea0e
#define str_1001ea0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1378U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019f30
 */

char recovered_10019f30(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  bool bVar10;

  if (param_1 == 0) {
    return '\0';
  }
  uVar2 = (ulong)param_2;
  uVar8 = 0;
  do {
    uVar4 = (ulong)uVar8;
    if (uVar8 < param_2) {
      bVar10 = true;
      uVar5 = uVar4;
      uVar6 = (ulong)uVar8;
      if (*(char *)(param_1 + uVar4) != ',') {
        do {
          if (uVar2 - 1 == uVar5) {
            bVar10 = false;
            uVar6 = uVar2;
            goto LAB_10019fe0;
          }
          uVar6 = uVar5 + 1;
          pcVar1 = (char *)(param_1 + 1 + uVar5);
          uVar5 = uVar6;
        } while (*pcVar1 != ',');
        bVar10 = uVar6 < uVar2;
      }
    }
    else {
      bVar10 = false;
      uVar6 = (ulong)uVar8;
    }
LAB_10019fe0:
    puVar9 = (ulong *)(uVar4 + param_1);
    iVar7 = (int)uVar6;
    uVar6 = (ulong)(iVar7 - uVar8);
    uVar4 = recovered_10003720(((uintptr_t)pf_module_state + 0x134fU));
    if ((uVar4 == uVar6) &&
       (iVar3 = recovered_100032a0(puVar9,(ulong *)str_1001e9e5,uVar4), iVar3 == 0)) {
      return '\x01';
    }
    uVar4 = recovered_10003720(((uintptr_t)pf_module_state + 0x136dU));
    if ((uVar4 == uVar6) &&
       (iVar3 = recovered_100032a0(puVar9,(ulong *)str_1001ea03,uVar6), iVar3 == 0)) {
      return '\x03';
    }
    uVar4 = recovered_10003720(((uintptr_t)pf_module_state + 0x1378U));
    if (uVar4 == uVar6) {
      iVar3 = recovered_100032a0(puVar9,(ulong *)str_1001ea0e,uVar6);
      if (!(bool)(bVar10 & iVar3 != 0)) {
        return (iVar3 == 0) * '\x02';
      }
      uVar8 = iVar7 + 1;
      if (param_2 < uVar8) {
        return '\0';
      }
    }
    else {
      uVar8 = iVar7 + 1;
      if (!(bool)(bVar10 & uVar8 <= param_2)) {
        return '\0';
      }
    }
  } while( true );
}

#undef str_1001e9e5
#undef str_1001ea03
#undef str_1001ea0e

#undef str_1001ea19
#define str_1001ea19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1383U)))
#undef str_1001ea27
#define str_1001ea27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1391U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a0b0
 */

char recovered_1001a0b0(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;

  if (param_1 == 0) {
    return '\0';
  }
  uVar2 = (ulong)param_2;
  uVar7 = 0;
  do {
    uVar8 = (ulong)uVar7;
    if (uVar7 < param_2) {
      bVar9 = true;
      uVar5 = uVar8;
      uVar4 = (ulong)uVar7;
      if (*(char *)(param_1 + uVar8) != ',') {
        do {
          if (uVar2 - 1 == uVar5) {
            bVar9 = false;
            uVar4 = uVar2;
            goto LAB_1001a160;
          }
          uVar4 = uVar5 + 1;
          pcVar1 = (char *)(param_1 + 1 + uVar5);
          uVar5 = uVar4;
        } while (*pcVar1 != ',');
        bVar9 = uVar4 < uVar2;
      }
    }
    else {
      bVar9 = false;
      uVar4 = (ulong)uVar7;
    }
LAB_1001a160:
    iVar6 = (int)uVar4;
    uVar5 = (ulong)(iVar6 - uVar7);
    uVar4 = recovered_10003720(((uintptr_t)pf_module_state + 0x1383U));
    if ((uVar4 == uVar5) &&
       (iVar3 = recovered_100032a0((ulong *)(uVar8 + param_1),(ulong *)str_1001ea19,uVar4),
       iVar3 == 0)) {
      return '\x01';
    }
    uVar4 = recovered_10003720(((uintptr_t)pf_module_state + 0x1391U));
    if (uVar4 == uVar5) {
      iVar3 = recovered_100032a0((ulong *)(uVar8 + param_1),(ulong *)str_1001ea27,uVar5);
      if (!(bool)(bVar9 & iVar3 != 0)) {
        return (iVar3 == 0) * '\x02';
      }
      uVar7 = iVar6 + 1;
      if (param_2 < uVar7) {
        return '\0';
      }
    }
    else {
      uVar7 = iVar6 + 1;
      if (!(bool)(bVar9 & uVar7 <= param_2)) {
        return '\0';
      }
    }
  } while( true );
}

#undef str_1001ea19
#undef str_1001ea27

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a200
 */

bool recovered_1001a200(long param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  ulong uVar3;

  uVar2 = recovered_10003720((long)param_3);
  if ((int)param_2 == 0) {
    if (uVar2 != 0) {
      return false;
    }
  }
  else {
    uVar3 = 0;
    do {
      if (*(char *)(param_1 + uVar3) == ',') goto LAB_1001a241;
      uVar3 = uVar3 + 1;
    } while ((param_2 & 0xffffffff) != uVar3);
    uVar3 = param_2 & 0xffffffff;
LAB_1001a241:
    if (uVar2 != (uVar3 & 0xffffffff)) {
      return false;
    }
  }
  iVar1 = recovered_100032a0((ulong *)param_1,param_3,uVar2);
  return iVar1 == 0;
}


#undef DAT_1001dfd0
#define DAT_1001dfd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x93aU)))
#define local_160 (*(long *)(pf_stack_frame + 1440))
#define local_158 (*(undefined1 (*)[344])(pf_stack_frame + 1448))
#define local_148 (*(undefined1 (*)[328])(pf_stack_frame + 1464))
#define local_138 (*(undefined1 (*)[312])(pf_stack_frame + 1480))
#define local_128 (*(undefined1 (*)[296])(pf_stack_frame + 1496))
#define local_118 (*(undefined1 (*)[280])(pf_stack_frame + 1512))
#define local_108 (*(undefined1 (*)[264])(pf_stack_frame + 1528))
#define local_f8 (*(undefined1 (*)[248])(pf_stack_frame + 1544))
#define local_e8 (*(undefined1 (*)[232])(pf_stack_frame + 1560))
#define local_d8 (*(undefined1 (*)[216])(pf_stack_frame + 1576))
#define local_c8 (*(undefined1 (*)[200])(pf_stack_frame + 1592))
#define local_b8 (*(undefined1 (*)[184])(pf_stack_frame + 1608))
#define local_a8 (*(undefined1 (*)[168])(pf_stack_frame + 1624))
#define local_98 (*(undefined1 (*)[152])(pf_stack_frame + 1640))
#define local_88 (*(undefined1 (*)[136])(pf_stack_frame + 1656))
#define local_78 (*(undefined1 (*)[120])(pf_stack_frame + 1672))
#define local_68 (*(undefined1 (*)[104])(pf_stack_frame + 1688))
#define local_58 (*(ulong *)(pf_stack_frame + 1704))
#define local_48 (*(ulong *)(pf_stack_frame + 1720))
#define local_40 (*(undefined4 *)(pf_stack_frame + 1728))
#define local_3c (*(undefined1 *)(pf_stack_frame + 1732))
#define local_3b (*(undefined1 *)(pf_stack_frame + 1733))
#define local_3a (*(undefined1 *)(pf_stack_frame + 1734))
#define local_39 (*(byte *)(pf_stack_frame + 1735))
#define lStack_6e0 (*(long *)(pf_stack_frame + 32))
#define lStack_6d0 (*(long *)(pf_stack_frame + 48))
#define lStack_6c0 (*(long *)(pf_stack_frame + 64))
#define lStack_6b0 (*(long *)(pf_stack_frame + 80))
#define lStack_6a0 (*(long *)(pf_stack_frame + 96))
#define lStack_690 (*(long *)(pf_stack_frame + 112))
#define lStack_680 (*(long *)(pf_stack_frame + 128))
#define lStack_670 (*(long *)(pf_stack_frame + 144))
#define uStack_5f0 (*(ulong *)(pf_stack_frame + 272))
#define uStack_5e0 (*(ulong *)(pf_stack_frame + 288))
#define uStack_5d0 (*(ulong *)(pf_stack_frame + 304))
#define uStack_5c0 (*(ulong *)(pf_stack_frame + 320))
#define uStack_5b0 (*(ulong *)(pf_stack_frame + 336))
#define uStack_5a0 (*(ulong *)(pf_stack_frame + 352))
#define uStack_590 (*(ulong *)(pf_stack_frame + 368))
#define uStack_580 (*(ulong *)(pf_stack_frame + 384))
#define uStack_570 (*(ulong *)(pf_stack_frame + 400))
#define uStack_560 (*(ulong *)(pf_stack_frame + 416))
#define uStack_550 (*(ulong *)(pf_stack_frame + 432))
#define uStack_540 (*(ulong *)(pf_stack_frame + 448))
#define uStack_530 (*(ulong *)(pf_stack_frame + 464))
#define uStack_520 (*(ulong *)(pf_stack_frame + 480))
#define uStack_510 (*(ulong *)(pf_stack_frame + 496))
#define uStack_500 (*(ulong *)(pf_stack_frame + 512))
#define uStack_4f0 (*(ulong *)(pf_stack_frame + 528))
#define uStack_4e0 (*(ulong *)(pf_stack_frame + 544))
#define uStack_4d0 (*(ulong *)(pf_stack_frame + 560))
#define uStack_4c0 (*(ulong *)(pf_stack_frame + 576))
#define uStack_4b0 (*(ulong *)(pf_stack_frame + 592))
#define uStack_4a0 (*(ulong *)(pf_stack_frame + 608))
#define uStack_490 (*(ulong *)(pf_stack_frame + 624))
#define uStack_480 (*(ulong *)(pf_stack_frame + 640))
#define uStack_470 (*(ulong *)(pf_stack_frame + 656))
#define uStack_460 (*(ulong *)(pf_stack_frame + 672))
#define uStack_450 (*(ulong *)(pf_stack_frame + 688))
#define uStack_440 (*(ulong *)(pf_stack_frame + 704))
#define uStack_430 (*(ulong *)(pf_stack_frame + 720))
#define uStack_420 (*(ulong *)(pf_stack_frame + 736))
#define uStack_410 (*(ulong *)(pf_stack_frame + 752))
#define uStack_400 (*(ulong *)(pf_stack_frame + 768))
#define uStack_3f0 (*(ulong *)(pf_stack_frame + 784))
#define lStack_340 (*(long *)(pf_stack_frame + 960))
#define lStack_330 (*(long *)(pf_stack_frame + 976))
#define local_6e8 (*(ulong *)(pf_stack_frame + 24))
#define local_6d8 (*(long *)(pf_stack_frame + 40))
#define lStack_320 (*(long *)(pf_stack_frame + 992))
#define local_6c8 (*(long *)(pf_stack_frame + 56))
#define local_6b8 (*(long *)(pf_stack_frame + 72))
#define lStack_310 (*(long *)(pf_stack_frame + 1008))
#define local_6a8 (*(long *)(pf_stack_frame + 88))
#define local_698 (*(long *)(pf_stack_frame + 104))
#define lStack_300 (*(long *)(pf_stack_frame + 1024))
#define local_688 (*(long *)(pf_stack_frame + 120))
#define local_678 (*(long *)(pf_stack_frame + 136))
#define lStack_2f0 (*(long *)(pf_stack_frame + 1040))
#define local_668 (*(undefined1 (*)[1640])(pf_stack_frame + 152))
#define local_658 (*(undefined1 (*)[1624])(pf_stack_frame + 168))
#define lStack_2e0 (*(long *)(pf_stack_frame + 1056))
#define local_648 (*(undefined1 (*)[1608])(pf_stack_frame + 184))
#define local_638 (*(undefined1 (*)[1592])(pf_stack_frame + 200))
#define lStack_2d0 (*(long *)(pf_stack_frame + 1072))
#define local_628 (*(undefined1 (*)[1576])(pf_stack_frame + 216))
#define local_618 (*(undefined1 (*)[1560])(pf_stack_frame + 232))
#define local_608 (*(undefined1 (*)[1544])(pf_stack_frame + 248))
#define local_5f8 (*(ulong *)(pf_stack_frame + 264))
#define local_5e8 (*(ulong *)(pf_stack_frame + 280))
#define local_5d8 (*(ulong *)(pf_stack_frame + 296))
#define local_5c8 (*(ulong *)(pf_stack_frame + 312))
#define local_5b8 (*(ulong *)(pf_stack_frame + 328))
#define local_5a8 (*(ulong *)(pf_stack_frame + 344))
#define local_598 (*(ulong *)(pf_stack_frame + 360))
#define local_588 (*(ulong *)(pf_stack_frame + 376))
#define local_578 (*(ulong *)(pf_stack_frame + 392))
#define local_568 (*(ulong *)(pf_stack_frame + 408))
#define local_558 (*(ulong *)(pf_stack_frame + 424))
#define local_548 (*(ulong *)(pf_stack_frame + 440))
#define local_538 (*(ulong *)(pf_stack_frame + 456))
#define local_528 (*(ulong *)(pf_stack_frame + 472))
#define local_518 (*(ulong *)(pf_stack_frame + 488))
#define local_508 (*(ulong *)(pf_stack_frame + 504))
#define local_4f8 (*(ulong *)(pf_stack_frame + 520))
#define local_4e8 (*(ulong *)(pf_stack_frame + 536))
#define local_4d8 (*(ulong *)(pf_stack_frame + 552))
#define local_4c8 (*(ulong *)(pf_stack_frame + 568))
#define local_4b8 (*(ulong *)(pf_stack_frame + 584))
#define local_4a8 (*(ulong *)(pf_stack_frame + 600))
#define local_498 (*(ulong *)(pf_stack_frame + 616))
#define local_488 (*(ulong *)(pf_stack_frame + 632))
#define local_478 (*(ulong *)(pf_stack_frame + 648))
#define local_468 (*(ulong *)(pf_stack_frame + 664))
#define local_458 (*(ulong *)(pf_stack_frame + 680))
#define local_448 (*(ulong *)(pf_stack_frame + 696))
#define local_438 (*(ulong *)(pf_stack_frame + 712))
#define local_428 (*(ulong *)(pf_stack_frame + 728))
#define local_418 (*(ulong *)(pf_stack_frame + 744))
#define local_408 (*(ulong *)(pf_stack_frame + 760))
#define local_3f8 (*(ulong *)(pf_stack_frame + 776))
#define local_3e8 (*(undefined1 (*)[1000])(pf_stack_frame + 792))
#define local_3d0 (*(undefined2 * *)(pf_stack_frame + 816))
#define local_3c8 (*(ulong *)(pf_stack_frame + 824))
#define local_3c0 (*(long *)(pf_stack_frame + 832))
#define local_3b8 (*(long *)(pf_stack_frame + 840))
#define local_3b0 (*(long *)(pf_stack_frame + 848))
#define local_3a8 (*(long *)(pf_stack_frame + 856))
#define local_3a0 (*(long *)(pf_stack_frame + 864))
#define local_398 (*(long *)(pf_stack_frame + 872))
#define local_390 (*(long *)(pf_stack_frame + 880))
#define local_388 (*(long *)(pf_stack_frame + 888))
#define local_380 (*(long *)(pf_stack_frame + 896))
#define uStack_50 (*(ulong *)(pf_stack_frame + 1712))
#define local_378 (*(long *)(pf_stack_frame + 904))
#define local_370 (*(long *)(pf_stack_frame + 912))
#define local_368 (*(long *)(pf_stack_frame + 920))
#define local_360 (*(long *)(pf_stack_frame + 928))
#define local_358 (*(long *)(pf_stack_frame + 936))
#define local_350 (*(long *)(pf_stack_frame + 944))
#define local_348 (*(long *)(pf_stack_frame + 952))
#define local_338 (*(long *)(pf_stack_frame + 968))
#define local_328 (*(long *)(pf_stack_frame + 984))
#define local_318 (*(long *)(pf_stack_frame + 1000))
#define local_308 (*(ulong *)(pf_stack_frame + 1016))
#define local_2f8 (*(long *)(pf_stack_frame + 1032))
#define local_2e8 (*(long *)(pf_stack_frame + 1048))
#define local_2d8 (*(long *)(pf_stack_frame + 1064))
#define local_2c8 (*(undefined1 (*)[712])(pf_stack_frame + 1080))
#define local_2b8 (*(undefined1 (*)[696])(pf_stack_frame + 1096))
#define local_2a8 (*(undefined1 (*)[680])(pf_stack_frame + 1112))
#define local_298 (*(undefined1 (*)[664])(pf_stack_frame + 1128))
#define local_288 (*(undefined1 (*)[648])(pf_stack_frame + 1144))
#define local_278 (*(undefined1 (*)[632])(pf_stack_frame + 1160))
#define local_268 (*(undefined1 (*)[616])(pf_stack_frame + 1176))
#define local_258 (*(undefined1 (*)[600])(pf_stack_frame + 1192))
#define local_248 (*(undefined1 (*)[584])(pf_stack_frame + 1208))
#define local_238 (*(undefined1 (*)[568])(pf_stack_frame + 1224))
#define local_228 (*(undefined1 (*)[552])(pf_stack_frame + 1240))
#define local_218 (*(undefined1 (*)[536])(pf_stack_frame + 1256))
#define local_208 (*(undefined1 (*)[520])(pf_stack_frame + 1272))
#define local_1f8 (*(undefined1 (*)[504])(pf_stack_frame + 1288))
#define local_1e8 (*(undefined1 (*)[488])(pf_stack_frame + 1304))
#define local_1d8 (*(undefined1 (*)[472])(pf_stack_frame + 1320))
#define local_1bc (*(uint *)(pf_stack_frame + 1348))
#define local_1b8 (*(long *)(pf_stack_frame + 1352))
#define local_1b0 (*(long *)(pf_stack_frame + 1360))
#define local_1a8 (*(long *)(pf_stack_frame + 1368))
#define local_1a0 (*(long *)(pf_stack_frame + 1376))
#define local_198 (*(long *)(pf_stack_frame + 1384))
#define local_190 (*(long *)(pf_stack_frame + 1392))
#define local_188 (*(long *)(pf_stack_frame + 1400))
#define local_180 (*(long *)(pf_stack_frame + 1408))
#define local_178 (*(long *)(pf_stack_frame + 1416))
#define local_170 (*(long *)(pf_stack_frame + 1424))
#define local_168 (*(long *)(pf_stack_frame + 1432))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a280
 */

void recovered_1001a280(undefined2 *param_1,ulong *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[1824] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  uint128 auVar4;
  uint128 auVar5;
  uint128 auVar6;
  uint128 auVar7;
  uint128 auVar8;
  uint128 auVar9;
  uint128 auVar10;
  uint128 auVar11;
  uint128 auVar12;
  uint128 auVar13;

  uStack_50 = param_2[1];
  local_48 = param_2[2];
  local_40 = (int)param_2[3];
  local_3c = *(undefined1 *)((long)param_2 + 0x1c);
  local_3b = *(undefined1 *)((long)param_2 + 0x1d);
  local_3a = *(undefined1 *)((long)param_2 + 0x1e);
  local_39 = *(byte *)((long)param_2 + 0x1f) & 0x3f | 0x40;
  local_58 = *param_2 & 0xfffffffffffffff8;
  uVar3 = (undefined2)((uint)*param_3 >> 0x10);
  PF_PART8(local_668, 0) = (ulong)(CONCAT24(uVar3,*param_3) & 0xffff0000ffff) & 0xffffffff;
  PF_PART2(local_668, 8) = uVar3;
  PF_PART6(local_668, 10) = 0;
  uVar3 = (undefined2)((uint)param_3[1] >> 0x10);
  PF_PART8(local_658, 0) = (ulong)(CONCAT24(uVar3,param_3[1]) & 0xffff0000ffff) & 0xffffffff;
  PF_PART2(local_658, 8) = uVar3;
  PF_PART6(local_658, 10) = 0;
  PF_PART2(local_228, 8) = SUB42((uint)param_3[2] >> 0x10,0);
  PF_PART8(local_648, 0) = (ulong)(CONCAT24(PF_PART2(local_228, 8),param_3[2]) & 0xffff0000ffff) & 0xffffffff;
  PF_PART2(local_648, 8) = PF_PART2(local_228, 8);
  PF_PART6(local_648, 10) = 0;
  PF_PART2(local_218, 8) = SUB42((uint)param_3[3] >> 0x10,0);
  PF_PART8(local_638, 0) = (ulong)(CONCAT24(PF_PART2(local_218, 8),param_3[3]) & 0xffff0000ffff) & 0xffffffff;
  PF_PART2(local_638, 8) = PF_PART2(local_218, 8);
  PF_PART6(local_638, 10) = 0;
  PF_PART2(local_208, 8) = SUB42((uint)param_3[4] >> 0x10,0);
  PF_PART8(local_628, 0) = (ulong)(CONCAT24(PF_PART2(local_208, 8),param_3[4]) & 0xffff0000ffff) & 0xffffffff;
  PF_PART2(local_628, 8) = PF_PART2(local_208, 8);
  PF_PART6(local_628, 10) = 0;
  PF_PART2(local_1f8, 8) = SUB42((uint)param_3[5] >> 0x10,0);
  PF_PART8(local_618, 0) = (ulong)(CONCAT24(PF_PART2(local_1f8, 8),param_3[5]) & 0xffff0000ffff) & 0xffffffff;
  PF_PART2(local_618, 8) = PF_PART2(local_1f8, 8);
  PF_PART6(local_618, 10) = 0;
  PF_PART2(local_1e8, 8) = SUB42((uint)param_3[6] >> 0x10,0);
  PF_PART8(local_608, 0) = (ulong)(CONCAT24(PF_PART2(local_1e8, 8),param_3[6]) & 0xffff0000ffff) & 0xffffffff;
  PF_PART2(local_608, 8) = PF_PART2(local_1e8, 8);
  PF_PART6(local_608, 10) = 0;
  local_5f8 = CONCAT62(0,*(ushort *)(param_3 + 7));
  uStack_5f0 = (ulong)((*(byte *)((long)param_3 + 0x1f) & 0x7f) << 8) |
               (ulong)*(byte *)((long)param_3 + 0x1e);
  PF_PART16(local_2b8,0) = (uint128)0x0;
  PF_PART16(local_c8,0) = (uint128)0x0;
  PF_PART16(local_158,0) = (uint128)0x0;
  PF_PART16(local_148,0) = (uint128)0x0;
  PF_PART8(local_228, 0) = PF_PART8(local_648, 0);
  PF_PART6(local_228, 10) = 0;
  PF_PART8(local_218, 0) = PF_PART8(local_638, 0);
  PF_PART6(local_218, 10) = 0;
  PF_PART16(local_2a8,0) = (uint128)0x0;
  PF_PART16(local_298,0) = (uint128)0x0;
  PF_PART16(local_b8,0) = (uint128)0x0;
  PF_PART16(local_a8,0) = (uint128)0x0;
  PF_PART16(local_138,0) = (uint128)0x0;
  PF_PART16(local_128,0) = (uint128)0x0;
  PF_PART8(local_208, 0) = PF_PART8(local_628, 0);
  PF_PART6(local_208, 10) = 0;
  PF_PART8(local_1f8, 0) = PF_PART8(local_618, 0);
  PF_PART6(local_1f8, 10) = 0;
  PF_PART16(local_288,0) = (uint128)0x0;
  PF_PART16(local_278,0) = (uint128)0x0;
  PF_PART16(local_98,0) = (uint128)0x0;
  PF_PART16(local_88,0) = (uint128)0x0;
  PF_PART16(local_118,0) = (uint128)0x0;
  PF_PART16(local_108,0) = (uint128)0x0;
  PF_PART8(local_1e8, 0) = PF_PART8(local_608, 0);
  PF_PART6(local_1e8, 10) = 0;
  PF_PART8(local_1d8, 8) = uStack_5f0;
  PF_PART8(local_1d8, 0) = local_5f8;
  PF_PART16(local_268,0) = (uint128)0x0;
  PF_PART16(local_258,0) = (uint128)0x0;
  PF_PART16(local_78,0) = (uint128)0x0;
  PF_PART16(local_68,0) = (uint128)0x0;
  PF_PART16(local_f8,0) = (uint128)0x0;
  PF_PART16(local_e8,0) = (uint128)0x0;
  PF_PART16(local_d8,0) = ZEXT816(1);
  PF_PART16(local_2c8,0) = ZEXT816(1);
  uVar1 = 0xfe;
  local_3d0 = param_1;
  PF_PART16(local_248,0) = PF_PART16(local_668,0);
  PF_PART16(local_238,0) = PF_PART16(local_658,0);
  do {
    lVar2 = -(ulong)(((byte)local_68[(ulong)(uVar1 >> 3) + 0x10] >> (uVar1 & 7) & 1) != 0);
    PF_PART4(local_3e8, 8) = (int)lVar2;
    PF_PART8(local_3e8, 0) = lVar2;
    PF_PART4(local_3e8, 12) = (int)((ulong)lVar2 >> 0x20);
    auVar10 = (PF_PART16(local_248,0) ^ PF_PART16(local_d8,0)) & PF_PART16(local_3e8,0);
    auVar12 = (PF_PART16(local_238,0) ^ PF_PART16(local_c8,0)) & PF_PART16(local_3e8,0);
    PF_PART16(local_d8,0) = PF_PART16(local_d8,0) ^ auVar10;
    PF_PART16(local_c8,0) = PF_PART16(local_c8,0) ^ auVar12;
    auVar10 = auVar10 ^ PF_PART16(local_248,0);
    auVar12 = auVar12 ^ PF_PART16(local_238,0);
    auVar6 = (PF_PART16(local_228,0) ^ PF_PART16(local_b8,0)) & PF_PART16(local_3e8,0);
    auVar8 = (PF_PART16(local_218,0) ^ PF_PART16(local_a8,0)) & PF_PART16(local_3e8,0);
    PF_PART16(local_b8,0) = PF_PART16(local_b8,0) ^ auVar6;
    PF_PART16(local_a8,0) = PF_PART16(local_a8,0) ^ auVar8;
    auVar6 = auVar6 ^ PF_PART16(local_228,0);
    auVar8 = auVar8 ^ PF_PART16(local_218,0);
    auVar7 = (PF_PART16(local_208,0) ^ PF_PART16(local_98,0)) & PF_PART16(local_3e8,0);
    auVar9 = (PF_PART16(local_1f8,0) ^ PF_PART16(local_88,0)) & PF_PART16(local_3e8,0);
    PF_PART16(local_98,0) = PF_PART16(local_98,0) ^ auVar7;
    PF_PART16(local_88,0) = PF_PART16(local_88,0) ^ auVar9;
    auVar7 = auVar7 ^ PF_PART16(local_208,0);
    auVar9 = auVar9 ^ PF_PART16(local_1f8,0);
    auVar4 = (PF_PART16(local_1e8,0) ^ PF_PART16(local_78,0)) & PF_PART16(local_3e8,0);
    auVar5 = (PF_PART16(local_1d8,0) ^ PF_PART16(local_68,0)) & PF_PART16(local_3e8,0);
    PF_PART16(local_78,0) = PF_PART16(local_78,0) ^ auVar4;
    PF_PART16(local_68,0) = PF_PART16(local_68,0) ^ auVar5;
    auVar11 = (PF_PART16(local_2c8,0) ^ PF_PART16(local_158,0)) & PF_PART16(local_3e8,0);
    auVar13 = (PF_PART16(local_2b8,0) ^ PF_PART16(local_148,0)) & PF_PART16(local_3e8,0);
    PF_PART16(local_158,0) = PF_PART16(local_158,0) ^ auVar11;
    PF_PART16(local_148,0) = PF_PART16(local_148,0) ^ auVar13;
    PF_PART16(local_2c8,0) = auVar11 ^ PF_PART16(local_2c8,0);
    PF_PART16(local_2b8,0) = auVar13 ^ PF_PART16(local_2b8,0);
    auVar11 = (PF_PART16(local_2a8,0) ^ PF_PART16(local_138,0)) & PF_PART16(local_3e8,0);
    auVar13 = (PF_PART16(local_298,0) ^ PF_PART16(local_128,0)) & PF_PART16(local_3e8,0);
    PF_PART16(local_138,0) = PF_PART16(local_138,0) ^ auVar11;
    PF_PART16(local_128,0) = PF_PART16(local_128,0) ^ auVar13;
    PF_PART16(local_2a8,0) = auVar11 ^ PF_PART16(local_2a8,0);
    PF_PART16(local_298,0) = auVar13 ^ PF_PART16(local_298,0);
    auVar11 = (PF_PART16(local_288,0) ^ PF_PART16(local_118,0)) & PF_PART16(local_3e8,0);
    auVar13 = (PF_PART16(local_278,0) ^ PF_PART16(local_108,0)) & PF_PART16(local_3e8,0);
    PF_PART16(local_118,0) = PF_PART16(local_118,0) ^ auVar11;
    PF_PART16(local_108,0) = PF_PART16(local_108,0) ^ auVar13;
    PF_PART16(local_288,0) = auVar11 ^ PF_PART16(local_288,0);
    PF_PART16(local_278,0) = auVar13 ^ PF_PART16(local_278,0);
    auVar11 = (PF_PART16(local_268,0) ^ PF_PART16(local_f8,0)) & PF_PART16(local_3e8,0);
    auVar13 = (PF_PART16(local_258,0) ^ PF_PART16(local_e8,0)) & PF_PART16(local_3e8,0);
    PF_PART16(local_f8,0) = PF_PART16(local_f8,0) ^ auVar11;
    PF_PART16(local_e8,0) = PF_PART16(local_e8,0) ^ auVar13;
    local_3c8 = PF_PART8(local_158, 0) + PF_PART8(local_d8, 0);
    local_3c0 = PF_PART8(local_158, 8) + PF_PART8(local_d8, 8);
    local_3b8 = PF_PART8(local_148, 0) + PF_PART8(local_c8, 0);
    local_3b0 = PF_PART8(local_148, 8) + PF_PART8(local_c8, 8);
    local_3a8 = PF_PART8(local_138, 0) + PF_PART8(local_b8, 0);
    local_3a0 = PF_PART8(local_138, 8) + PF_PART8(local_b8, 8);
    local_398 = PF_PART8(local_128, 0) + PF_PART8(local_a8, 0);
    local_390 = PF_PART8(local_128, 8) + PF_PART8(local_a8, 8);
    local_388 = PF_PART8(local_118, 0) + PF_PART8(local_98, 0);
    local_380 = PF_PART8(local_118, 8) + PF_PART8(local_98, 8);
    local_378 = PF_PART8(local_108, 0) + PF_PART8(local_88, 0);
    local_370 = PF_PART8(local_108, 8) + PF_PART8(local_88, 8);
    local_368 = PF_PART8(local_f8, 0) + PF_PART8(local_78, 0);
    local_360 = PF_PART8(local_f8, 8) + PF_PART8(local_78, 8);
    local_358 = PF_PART8(local_e8, 0) + PF_PART8(local_68, 0);
    local_350 = PF_PART8(local_e8, 8) + PF_PART8(local_68, 8);
    PF_PART8(local_d8, 0) = PF_PART8(local_d8, 0) - PF_PART8(local_158, 0);
    PF_PART8(local_d8, 8) = PF_PART8(local_d8, 8) - PF_PART8(local_158, 8);
    PF_PART8(local_c8, 0) = PF_PART8(local_c8, 0) - PF_PART8(local_148, 0);
    PF_PART8(local_c8, 8) = PF_PART8(local_c8, 8) - PF_PART8(local_148, 8);
    PF_PART8(local_b8, 0) = PF_PART8(local_b8, 0) - PF_PART8(local_138, 0);
    PF_PART8(local_b8, 8) = PF_PART8(local_b8, 8) - PF_PART8(local_138, 8);
    PF_PART8(local_a8, 0) = PF_PART8(local_a8, 0) - PF_PART8(local_128, 0);
    PF_PART8(local_a8, 8) = PF_PART8(local_a8, 8) - PF_PART8(local_128, 8);
    PF_PART8(local_98, 0) = PF_PART8(local_98, 0) - PF_PART8(local_118, 0);
    PF_PART8(local_98, 8) = PF_PART8(local_98, 8) - PF_PART8(local_118, 8);
    auVar4 = auVar4 ^ PF_PART16(local_1e8,0);
    auVar5 = auVar5 ^ PF_PART16(local_1d8,0);
    PF_PART16(local_268,0) = auVar11 ^ PF_PART16(local_268,0);
    PF_PART16(local_258,0) = auVar13 ^ PF_PART16(local_258,0);
    PF_PART8(local_88, 0) = PF_PART8(local_88, 0) - PF_PART8(local_108, 0);
    PF_PART8(local_88, 8) = PF_PART8(local_88, 8) - PF_PART8(local_108, 8);
    PF_PART8(local_78, 0) = PF_PART8(local_78, 0) - PF_PART8(local_f8, 0);
    PF_PART8(local_78, 8) = PF_PART8(local_78, 8) - PF_PART8(local_f8, 8);
    PF_PART8(local_68, 0) = PF_PART8(local_68, 0) - PF_PART8(local_e8, 0);
    PF_PART8(local_68, 8) = PF_PART8(local_68, 8) - PF_PART8(local_e8, 8);
    PF_PART8(local_248, 0) = PF_PART8(auVar10, 0);
    local_338 = PF_PART8(local_248, 0);
    local_348 = PF_PART8(local_2c8, 0);
    PF_PART8(local_158, 0) = PF_PART8(local_2c8, 0) + PF_PART8(local_248, 0);
    PF_PART8(local_248, 8) = PF_PART8(auVar10, 8);
    local_318 = PF_PART8(local_248, 8);
    local_328 = PF_PART8(local_2c8, 8);
    PF_PART8(local_158, 8) = PF_PART8(local_2c8, 8) + PF_PART8(local_248, 8);
    PF_PART8(local_238, 0) = PF_PART8(auVar12, 0);
    local_2f8 = PF_PART8(local_238, 0);
    local_308 = PF_PART8(local_2b8, 0);
    PF_PART8(local_148, 0) = PF_PART8(local_2b8, 0) + PF_PART8(local_238, 0);
    PF_PART8(local_238, 8) = PF_PART8(auVar12, 8);
    local_170 = PF_PART8(local_238, 8);
    local_2e8 = PF_PART8(local_2b8, 8);
    PF_PART8(local_148, 8) = PF_PART8(local_2b8, 8) + PF_PART8(local_238, 8);
    PF_PART8(local_228, 0) = PF_PART8(auVar6, 0);
    local_2d8 = PF_PART8(local_2a8, 0);
    PF_PART8(local_138, 0) = PF_PART8(local_2a8, 0) + PF_PART8(local_228, 0);
    PF_PART8(local_228, 8) = PF_PART8(auVar6, 8);
    local_1b8 = PF_PART8(local_2a8, 8);
    PF_PART8(local_138, 8) = PF_PART8(local_2a8, 8) + PF_PART8(local_228, 8);
    PF_PART8(local_218, 0) = PF_PART8(auVar8, 0);
    local_1b0 = PF_PART8(local_298, 0);
    PF_PART8(local_128, 0) = PF_PART8(local_298, 0) + PF_PART8(local_218, 0);
    PF_PART8(local_218, 8) = PF_PART8(auVar8, 8);
    local_1a8 = PF_PART8(local_298, 8);
    PF_PART8(local_128, 8) = PF_PART8(local_298, 8) + PF_PART8(local_218, 8);
    PF_PART8(local_208, 0) = PF_PART8(auVar7, 0);
    local_1a0 = PF_PART8(local_288, 0);
    PF_PART8(local_118, 0) = PF_PART8(local_288, 0) + PF_PART8(local_208, 0);
    PF_PART8(local_208, 8) = PF_PART8(auVar7, 8);
    local_198 = PF_PART8(local_288, 8);
    PF_PART8(local_118, 8) = PF_PART8(local_288, 8) + PF_PART8(local_208, 8);
    PF_PART8(local_1f8, 0) = PF_PART8(auVar9, 0);
    local_190 = PF_PART8(local_278, 0);
    PF_PART8(local_108, 0) = PF_PART8(local_278, 0) + PF_PART8(local_1f8, 0);
    PF_PART8(local_1f8, 8) = PF_PART8(auVar9, 8);
    local_188 = PF_PART8(local_278, 8);
    PF_PART8(local_108, 8) = PF_PART8(local_278, 8) + PF_PART8(local_1f8, 8);
    PF_PART8(local_1e8, 0) = PF_PART8(auVar4, 0);
    local_180 = PF_PART8(local_268, 0);
    PF_PART8(local_f8, 0) = PF_PART8(local_268, 0) + PF_PART8(local_1e8, 0);
    PF_PART8(local_1e8, 8) = PF_PART8(auVar4, 8);
    local_178 = PF_PART8(local_268, 8);
    PF_PART8(local_f8, 8) = PF_PART8(local_268, 8) + PF_PART8(local_1e8, 8);
    PF_PART8(local_1d8, 0) = PF_PART8(auVar5, 0);
    local_168 = PF_PART8(local_258, 0);
    PF_PART8(local_e8, 0) = PF_PART8(local_258, 0) + PF_PART8(local_1d8, 0);
    PF_PART8(local_1d8, 8) = PF_PART8(auVar5, 8);
    local_160 = PF_PART8(local_258, 8);
    PF_PART8(local_e8, 8) = PF_PART8(local_258, 8) + PF_PART8(local_1d8, 8);
    PF_PART8(local_248, 0) = PF_PART8(local_248, 0) - PF_PART8(local_2c8, 0);
    PF_PART8(local_248, 8) = PF_PART8(local_248, 8) - PF_PART8(local_2c8, 8);
    PF_PART8(local_238, 0) = PF_PART8(local_238, 0) - PF_PART8(local_2b8, 0);
    PF_PART8(local_238, 8) = PF_PART8(local_238, 8) - PF_PART8(local_2b8, 8);
    PF_PART8(local_228, 0) = PF_PART8(local_228, 0) - PF_PART8(local_2a8, 0);
    PF_PART8(local_228, 8) = PF_PART8(local_228, 8) - PF_PART8(local_2a8, 8);
    PF_PART8(local_218, 0) = PF_PART8(local_218, 0) - PF_PART8(local_298, 0);
    PF_PART8(local_218, 8) = PF_PART8(local_218, 8) - PF_PART8(local_298, 8);
    PF_PART8(local_208, 0) = PF_PART8(local_208, 0) - PF_PART8(local_288, 0);
    PF_PART8(local_208, 8) = PF_PART8(local_208, 8) - PF_PART8(local_288, 8);
    PF_PART8(local_1f8, 0) = PF_PART8(local_1f8, 0) - PF_PART8(local_278, 0);
    PF_PART8(local_1f8, 8) = PF_PART8(local_1f8, 8) - PF_PART8(local_278, 8);
    PF_PART8(local_1e8, 0) = PF_PART8(local_1e8, 0) - PF_PART8(local_268, 0);
    PF_PART8(local_1e8, 8) = PF_PART8(local_1e8, 8) - PF_PART8(local_268, 8);
    PF_PART8(local_1d8, 0) = PF_PART8(local_1d8, 0) - PF_PART8(local_258, 0);
    PF_PART8(local_1d8, 8) = PF_PART8(local_1d8, 8) - PF_PART8(local_258, 8);
    local_1bc = uVar1;
    recovered_1000d840((long *)local_2c8,(long)&local_3c8,&local_3c8);
    recovered_1000d840((long *)&local_6e8,(long)local_d8,(ulong *)local_d8);
    recovered_1000d840((long *)local_d8,(long)local_158,(ulong *)local_d8);
    recovered_1000d840((long *)local_158,(long)local_248,&local_3c8);
    local_308 = PF_PART8(local_d8, 0);
    local_338 = PF_PART8(local_d8, 8);
    local_328 = PF_PART8(local_158, 0);
    local_348 = PF_PART8(local_158, 8);
    local_3c8 = PF_PART8(local_158, 0) + PF_PART8(local_d8, 0);
    local_3c0 = PF_PART8(local_158, 8) + PF_PART8(local_d8, 8);
    local_2f8 = PF_PART8(local_c8, 0);
    local_318 = PF_PART8(local_148, 0);
    local_3b8 = PF_PART8(local_148, 0) + PF_PART8(local_c8, 0);
    local_170 = PF_PART8(local_c8, 8);
    local_2e8 = PF_PART8(local_148, 8);
    local_3b0 = PF_PART8(local_148, 8) + PF_PART8(local_c8, 8);
    local_2d8 = PF_PART8(local_138, 0);
    local_3a8 = PF_PART8(local_138, 0) + PF_PART8(local_b8, 0);
    local_1b8 = PF_PART8(local_138, 8);
    local_3a0 = PF_PART8(local_138, 8) + PF_PART8(local_b8, 8);
    local_1b0 = PF_PART8(local_128, 0);
    local_398 = PF_PART8(local_128, 0) + PF_PART8(local_a8, 0);
    local_1a8 = PF_PART8(local_128, 8);
    local_390 = PF_PART8(local_128, 8) + PF_PART8(local_a8, 8);
    local_1a0 = PF_PART8(local_118, 0);
    local_388 = PF_PART8(local_118, 0) + PF_PART8(local_98, 0);
    local_198 = PF_PART8(local_118, 8);
    local_380 = PF_PART8(local_118, 8) + PF_PART8(local_98, 8);
    local_190 = PF_PART8(local_108, 0);
    local_378 = PF_PART8(local_108, 0) + PF_PART8(local_88, 0);
    local_188 = PF_PART8(local_108, 8);
    local_370 = PF_PART8(local_108, 8) + PF_PART8(local_88, 8);
    local_180 = PF_PART8(local_f8, 0);
    local_368 = PF_PART8(local_f8, 0) + PF_PART8(local_78, 0);
    local_178 = PF_PART8(local_f8, 8);
    local_360 = PF_PART8(local_f8, 8) + PF_PART8(local_78, 8);
    local_168 = PF_PART8(local_e8, 0);
    local_358 = PF_PART8(local_e8, 0) + PF_PART8(local_68, 0);
    local_160 = PF_PART8(local_e8, 8);
    local_350 = PF_PART8(local_e8, 8) + PF_PART8(local_68, 8);
    PF_PART8(local_d8, 0) = PF_PART8(local_d8, 0) - PF_PART8(local_158, 0);
    PF_PART8(local_d8, 8) = PF_PART8(local_d8, 8) - PF_PART8(local_158, 8);
    PF_PART8(local_c8, 0) = PF_PART8(local_c8, 0) - PF_PART8(local_148, 0);
    PF_PART8(local_c8, 8) = PF_PART8(local_c8, 8) - PF_PART8(local_148, 8);
    PF_PART8(local_b8, 0) = PF_PART8(local_b8, 0) - PF_PART8(local_138, 0);
    PF_PART8(local_b8, 8) = PF_PART8(local_b8, 8) - PF_PART8(local_138, 8);
    PF_PART8(local_a8, 0) = PF_PART8(local_a8, 0) - PF_PART8(local_128, 0);
    PF_PART8(local_a8, 8) = PF_PART8(local_a8, 8) - PF_PART8(local_128, 8);
    PF_PART8(local_98, 0) = PF_PART8(local_98, 0) - PF_PART8(local_118, 0);
    PF_PART8(local_98, 8) = PF_PART8(local_98, 8) - PF_PART8(local_118, 8);
    PF_PART8(local_88, 0) = PF_PART8(local_88, 0) - PF_PART8(local_108, 0);
    PF_PART8(local_88, 8) = PF_PART8(local_88, 8) - PF_PART8(local_108, 8);
    PF_PART8(local_78, 0) = PF_PART8(local_78, 0) - PF_PART8(local_f8, 0);
    PF_PART8(local_78, 8) = PF_PART8(local_78, 8) - PF_PART8(local_f8, 8);
    PF_PART8(local_68, 0) = PF_PART8(local_68, 0) - PF_PART8(local_e8, 0);
    PF_PART8(local_68, 8) = PF_PART8(local_68, 8) - PF_PART8(local_e8, 8);
    recovered_1000d840((long *)local_248,(long)local_d8,(ulong *)local_d8);
    local_318 = PF_PART8(local_2c8, 0);
    lStack_310 = PF_PART8(local_2c8, 8);
    local_328 = PF_PART8(local_2b8, 0);
    lStack_320 = PF_PART8(local_2b8, 8);
    local_338 = PF_PART8(local_2a8, 0);
    lStack_330 = PF_PART8(local_2a8, 8);
    local_348 = PF_PART8(local_298, 0);
    lStack_340 = PF_PART8(local_298, 8);
    PF_PART8(local_158, 0) = PF_PART8(local_2c8, 0) - local_6e8;
    PF_PART8(local_158, 8) = PF_PART8(local_2c8, 8) - lStack_6e0;
    PF_PART8(local_148, 0) = PF_PART8(local_2b8, 0) - local_6d8;
    PF_PART8(local_148, 8) = PF_PART8(local_2b8, 8) - lStack_6d0;
    PF_PART8(local_138, 0) = PF_PART8(local_2a8, 0) - local_6c8;
    PF_PART8(local_138, 8) = PF_PART8(local_2a8, 8) - lStack_6c0;
    PF_PART8(local_128, 0) = PF_PART8(local_298, 0) - local_6b8;
    PF_PART8(local_128, 8) = PF_PART8(local_298, 8) - lStack_6b0;
    local_308 = PF_PART8(local_288, 0);
    lStack_300 = PF_PART8(local_288, 8);
    PF_PART8(local_118, 0) = PF_PART8(local_288, 0) - local_6a8;
    PF_PART8(local_118, 8) = PF_PART8(local_288, 8) - lStack_6a0;
    local_2f8 = PF_PART8(local_278, 0);
    lStack_2f0 = PF_PART8(local_278, 8);
    PF_PART8(local_108, 0) = PF_PART8(local_278, 0) - local_698;
    PF_PART8(local_108, 8) = PF_PART8(local_278, 8) - lStack_690;
    local_2d8 = PF_PART8(local_268, 0);
    lStack_2d0 = PF_PART8(local_268, 8);
    local_2e8 = PF_PART8(local_258, 0);
    lStack_2e0 = PF_PART8(local_258, 8);
    PF_PART8(local_f8, 0) = PF_PART8(local_268, 0) - local_688;
    PF_PART8(local_f8, 8) = PF_PART8(local_268, 8) - lStack_680;
    PF_PART8(local_e8, 0) = PF_PART8(local_258, 0) - local_678;
    PF_PART8(local_e8, 8) = PF_PART8(local_258, 8) - lStack_670;
    recovered_1000d840((long *)local_d8,(long)local_158,(ulong *)&DAT_1001dfd0);
    PF_PART8(local_d8, 0) = local_318 + PF_PART8(local_d8, 0);
    PF_PART8(local_d8, 8) = lStack_310 + PF_PART8(local_d8, 8);
    PF_PART8(local_c8, 0) = local_328 + PF_PART8(local_c8, 0);
    PF_PART8(local_c8, 8) = lStack_320 + PF_PART8(local_c8, 8);
    PF_PART8(local_b8, 0) = local_338 + PF_PART8(local_b8, 0);
    PF_PART8(local_b8, 8) = lStack_330 + PF_PART8(local_b8, 8);
    PF_PART8(local_a8, 0) = local_348 + PF_PART8(local_a8, 0);
    PF_PART8(local_a8, 8) = lStack_340 + PF_PART8(local_a8, 8);
    PF_PART8(local_98, 0) = local_308 + PF_PART8(local_98, 0);
    PF_PART8(local_98, 8) = lStack_300 + PF_PART8(local_98, 8);
    PF_PART8(local_88, 0) = local_2f8 + PF_PART8(local_88, 0);
    PF_PART8(local_88, 8) = lStack_2f0 + PF_PART8(local_88, 8);
    PF_PART8(local_78, 0) = local_2d8 + PF_PART8(local_78, 0);
    PF_PART8(local_78, 8) = lStack_2d0 + PF_PART8(local_78, 8);
    PF_PART8(local_68, 0) = local_2e8 + PF_PART8(local_68, 0);
    PF_PART8(local_68, 8) = lStack_2e0 + PF_PART8(local_68, 8);
    recovered_1000d840((long *)local_158,(long)local_158,(ulong *)local_d8);
    recovered_1000d840((long *)local_d8,(long)local_2c8,&local_6e8);
    recovered_1000d840((long *)local_2c8,(long)local_248,(ulong *)local_668);
    recovered_1000d840((long *)local_248,(long)&local_3c8,&local_3c8);
    local_4e8 = (PF_PART8(local_248, 0) ^ PF_PART8(local_d8, 0)) & PF_PART8(local_3e8, 0);
    uStack_4e0 = (PF_PART8(local_248, 8) ^ PF_PART8(local_d8, 8)) & PF_PART8(local_3e8, 8);
    local_4d8 = (PF_PART8(local_238, 0) ^ PF_PART8(local_c8, 0)) & PF_PART8(local_3e8, 0);
    uStack_4d0 = (PF_PART8(local_238, 8) ^ PF_PART8(local_c8, 8)) & PF_PART8(local_3e8, 8);
    local_5e8 = PF_PART8(local_d8, 0) ^ local_4e8;
    uStack_5e0 = PF_PART8(local_d8, 8) ^ uStack_4e0;
    local_5d8 = PF_PART8(local_c8, 0) ^ local_4d8;
    uStack_5d0 = PF_PART8(local_c8, 8) ^ uStack_4d0;
    PF_PART8(local_d8, 8) = uStack_5e0;
    PF_PART8(local_d8, 0) = local_5e8;
    local_4e8 = local_4e8 ^ PF_PART8(local_248, 0);
    uStack_4e0 = uStack_4e0 ^ PF_PART8(local_248, 8);
    local_4d8 = local_4d8 ^ PF_PART8(local_238, 0);
    uStack_4d0 = uStack_4d0 ^ PF_PART8(local_238, 8);
    PF_PART8(local_c8, 8) = uStack_5d0;
    PF_PART8(local_c8, 0) = local_5d8;
    PF_PART8(local_248, 8) = uStack_4e0;
    PF_PART8(local_248, 0) = local_4e8;
    local_4c8 = (PF_PART8(local_228, 0) ^ PF_PART8(local_b8, 0)) & PF_PART8(local_3e8, 0);
    uStack_4c0 = (PF_PART8(local_228, 8) ^ PF_PART8(local_b8, 8)) & PF_PART8(local_3e8, 8);
    local_4b8 = (PF_PART8(local_218, 0) ^ PF_PART8(local_a8, 0)) & PF_PART8(local_3e8, 0);
    uStack_4b0 = (PF_PART8(local_218, 8) ^ PF_PART8(local_a8, 8)) & PF_PART8(local_3e8, 8);
    local_5c8 = PF_PART8(local_b8, 0) ^ local_4c8;
    uStack_5c0 = PF_PART8(local_b8, 8) ^ uStack_4c0;
    PF_PART8(local_238, 8) = uStack_4d0;
    PF_PART8(local_238, 0) = local_4d8;
    local_5b8 = PF_PART8(local_a8, 0) ^ local_4b8;
    uStack_5b0 = PF_PART8(local_a8, 8) ^ uStack_4b0;
    PF_PART8(local_b8, 8) = uStack_5c0;
    PF_PART8(local_b8, 0) = local_5c8;
    local_4c8 = local_4c8 ^ PF_PART8(local_228, 0);
    uStack_4c0 = uStack_4c0 ^ PF_PART8(local_228, 8);
    PF_PART8(local_a8, 8) = uStack_5b0;
    PF_PART8(local_a8, 0) = local_5b8;
    local_4b8 = local_4b8 ^ PF_PART8(local_218, 0);
    uStack_4b0 = uStack_4b0 ^ PF_PART8(local_218, 8);
    PF_PART8(local_228, 8) = uStack_4c0;
    PF_PART8(local_228, 0) = local_4c8;
    PF_PART8(local_218, 8) = uStack_4b0;
    PF_PART8(local_218, 0) = local_4b8;
    local_4a8 = (PF_PART8(local_208, 0) ^ PF_PART8(local_98, 0)) & PF_PART8(local_3e8, 0);
    uStack_4a0 = (PF_PART8(local_208, 8) ^ PF_PART8(local_98, 8)) & PF_PART8(local_3e8, 8);
    local_498 = (PF_PART8(local_1f8, 0) ^ PF_PART8(local_88, 0)) & PF_PART8(local_3e8, 0);
    uStack_490 = (PF_PART8(local_1f8, 8) ^ PF_PART8(local_88, 8)) & PF_PART8(local_3e8, 8);
    local_5a8 = PF_PART8(local_98, 0) ^ local_4a8;
    uStack_5a0 = PF_PART8(local_98, 8) ^ uStack_4a0;
    local_598 = PF_PART8(local_88, 0) ^ local_498;
    uStack_590 = PF_PART8(local_88, 8) ^ uStack_490;
    PF_PART8(local_98, 8) = uStack_5a0;
    PF_PART8(local_98, 0) = local_5a8;
    PF_PART8(local_88, 8) = uStack_590;
    PF_PART8(local_88, 0) = local_598;
    local_4a8 = local_4a8 ^ PF_PART8(local_208, 0);
    uStack_4a0 = uStack_4a0 ^ PF_PART8(local_208, 8);
    local_498 = local_498 ^ PF_PART8(local_1f8, 0);
    uStack_490 = uStack_490 ^ PF_PART8(local_1f8, 8);
    PF_PART8(local_208, 8) = uStack_4a0;
    PF_PART8(local_208, 0) = local_4a8;
    PF_PART8(local_1f8, 8) = uStack_490;
    PF_PART8(local_1f8, 0) = local_498;
    local_468 = (PF_PART8(local_2c8, 0) ^ PF_PART8(local_158, 0)) & PF_PART8(local_3e8, 0);
    uStack_460 = (PF_PART8(local_2c8, 8) ^ PF_PART8(local_158, 8)) & PF_PART8(local_3e8, 8);
    local_568 = PF_PART8(local_158, 0) ^ local_468;
    uStack_560 = PF_PART8(local_158, 8) ^ uStack_460;
    PF_PART8(local_158, 8) = uStack_560;
    PF_PART8(local_158, 0) = local_568;
    local_458 = (PF_PART8(local_2b8, 0) ^ PF_PART8(local_148, 0)) & PF_PART8(local_3e8, 0);
    uStack_450 = (PF_PART8(local_2b8, 8) ^ PF_PART8(local_148, 8)) & PF_PART8(local_3e8, 8);
    local_558 = PF_PART8(local_148, 0) ^ local_458;
    uStack_550 = PF_PART8(local_148, 8) ^ uStack_450;
    PF_PART8(local_148, 8) = uStack_550;
    PF_PART8(local_148, 0) = local_558;
    local_468 = local_468 ^ PF_PART8(local_2c8, 0);
    uStack_460 = uStack_460 ^ PF_PART8(local_2c8, 8);
    local_458 = local_458 ^ PF_PART8(local_2b8, 0);
    uStack_450 = uStack_450 ^ PF_PART8(local_2b8, 8);
    PF_PART8(local_2c8, 8) = uStack_460;
    PF_PART8(local_2c8, 0) = local_468;
    PF_PART8(local_2b8, 8) = uStack_450;
    PF_PART8(local_2b8, 0) = local_458;
    local_488 = (PF_PART8(local_1e8, 0) ^ PF_PART8(local_78, 0)) & PF_PART8(local_3e8, 0);
    uStack_480 = (PF_PART8(local_1e8, 8) ^ PF_PART8(local_78, 8)) & PF_PART8(local_3e8, 8);
    local_478 = (PF_PART8(local_1d8, 0) ^ PF_PART8(local_68, 0)) & PF_PART8(local_3e8, 0);
    uStack_470 = (PF_PART8(local_1d8, 8) ^ PF_PART8(local_68, 8)) & PF_PART8(local_3e8, 8);
    local_448 = (PF_PART8(local_2a8, 0) ^ PF_PART8(local_138, 0)) & PF_PART8(local_3e8, 0);
    uStack_440 = (PF_PART8(local_2a8, 8) ^ PF_PART8(local_138, 8)) & PF_PART8(local_3e8, 8);
    local_588 = PF_PART8(local_78, 0) ^ local_488;
    uStack_580 = PF_PART8(local_78, 8) ^ uStack_480;
    local_548 = PF_PART8(local_138, 0) ^ local_448;
    uStack_540 = PF_PART8(local_138, 8) ^ uStack_440;
    PF_PART8(local_138, 8) = uStack_540;
    PF_PART8(local_138, 0) = local_548;
    local_488 = local_488 ^ PF_PART8(local_1e8, 0);
    uStack_480 = uStack_480 ^ PF_PART8(local_1e8, 8);
    local_438 = (PF_PART8(local_298, 0) ^ PF_PART8(local_128, 0)) & PF_PART8(local_3e8, 0);
    uStack_430 = (PF_PART8(local_298, 8) ^ PF_PART8(local_128, 8)) & PF_PART8(local_3e8, 8);
    local_578 = PF_PART8(local_68, 0) ^ local_478;
    uStack_570 = PF_PART8(local_68, 8) ^ uStack_470;
    local_538 = PF_PART8(local_128, 0) ^ local_438;
    uStack_530 = PF_PART8(local_128, 8) ^ uStack_430;
    PF_PART8(local_128, 8) = uStack_530;
    PF_PART8(local_128, 0) = local_538;
    local_448 = local_448 ^ PF_PART8(local_2a8, 0);
    uStack_440 = uStack_440 ^ PF_PART8(local_2a8, 8);
    local_478 = local_478 ^ PF_PART8(local_1d8, 0);
    uStack_470 = uStack_470 ^ PF_PART8(local_1d8, 8);
    local_438 = local_438 ^ PF_PART8(local_298, 0);
    uStack_430 = uStack_430 ^ PF_PART8(local_298, 8);
    PF_PART8(local_2a8, 8) = uStack_440;
    PF_PART8(local_2a8, 0) = local_448;
    PF_PART8(local_298, 8) = uStack_430;
    PF_PART8(local_298, 0) = local_438;
    PF_PART8(local_78, 8) = uStack_580;
    PF_PART8(local_78, 0) = local_588;
    PF_PART8(local_68, 8) = uStack_570;
    PF_PART8(local_68, 0) = local_578;
    PF_PART8(local_1e8, 8) = uStack_480;
    PF_PART8(local_1e8, 0) = local_488;
    local_428 = (PF_PART8(local_288, 0) ^ PF_PART8(local_118, 0)) & PF_PART8(local_3e8, 0);
    uStack_420 = (PF_PART8(local_288, 8) ^ PF_PART8(local_118, 8)) & PF_PART8(local_3e8, 8);
    PF_PART8(local_1d8, 8) = uStack_470;
    PF_PART8(local_1d8, 0) = local_478;
    local_418 = (PF_PART8(local_278, 0) ^ PF_PART8(local_108, 0)) & PF_PART8(local_3e8, 0);
    uStack_410 = (PF_PART8(local_278, 8) ^ PF_PART8(local_108, 8)) & PF_PART8(local_3e8, 8);
    local_528 = PF_PART8(local_118, 0) ^ local_428;
    uStack_520 = PF_PART8(local_118, 8) ^ uStack_420;
    local_518 = PF_PART8(local_108, 0) ^ local_418;
    uStack_510 = PF_PART8(local_108, 8) ^ uStack_410;
    PF_PART8(local_118, 8) = uStack_520;
    PF_PART8(local_118, 0) = local_528;
    PF_PART8(local_108, 8) = uStack_510;
    PF_PART8(local_108, 0) = local_518;
    local_428 = local_428 ^ PF_PART8(local_288, 0);
    uStack_420 = uStack_420 ^ PF_PART8(local_288, 8);
    local_418 = local_418 ^ PF_PART8(local_278, 0);
    uStack_410 = uStack_410 ^ PF_PART8(local_278, 8);
    PF_PART8(local_288, 8) = uStack_420;
    PF_PART8(local_288, 0) = local_428;
    PF_PART8(local_278, 8) = uStack_410;
    PF_PART8(local_278, 0) = local_418;
    local_408 = (PF_PART8(local_268, 0) ^ PF_PART8(local_f8, 0)) & PF_PART8(local_3e8, 0);
    uStack_400 = (PF_PART8(local_268, 8) ^ PF_PART8(local_f8, 8)) & PF_PART8(local_3e8, 8);
    local_3f8 = (PF_PART8(local_258, 0) ^ PF_PART8(local_e8, 0)) & PF_PART8(local_3e8, 0);
    uStack_3f0 = (PF_PART8(local_258, 8) ^ PF_PART8(local_e8, 8)) & PF_PART8(local_3e8, 8);
    local_508 = PF_PART8(local_f8, 0) ^ local_408;
    uStack_500 = PF_PART8(local_f8, 8) ^ uStack_400;
    local_4f8 = PF_PART8(local_e8, 0) ^ local_3f8;
    uStack_4f0 = PF_PART8(local_e8, 8) ^ uStack_3f0;
    PF_PART8(local_f8, 8) = uStack_500;
    PF_PART8(local_f8, 0) = local_508;
    local_408 = local_408 ^ PF_PART8(local_268, 0);
    uStack_400 = uStack_400 ^ PF_PART8(local_268, 8);
    PF_PART8(local_e8, 8) = uStack_4f0;
    PF_PART8(local_e8, 0) = local_4f8;
    local_3f8 = local_3f8 ^ PF_PART8(local_258, 0);
    uStack_3f0 = uStack_3f0 ^ PF_PART8(local_258, 8);
    PF_PART8(local_268, 8) = uStack_400;
    PF_PART8(local_268, 0) = local_408;
    PF_PART8(local_258, 8) = uStack_3f0;
    PF_PART8(local_258, 0) = local_3f8;
    uVar1 = local_1bc - 1;
  } while (local_1bc != 0);
  recovered_1000ec80(&local_568,&local_568);
  recovered_1000d840((long *)&local_5e8,(long)&local_5e8,&local_568);
  recovered_1000ed80(local_3d0,(uint128 *)&local_5e8);
  lVar2 = 0;
  do {
    local_668[lVar2] = 0;
    local_668[lVar2 + 1] = 0;
    local_668[lVar2 + 2] = 0;
    local_668[lVar2 + 3] = 0;
    local_668[lVar2 + 4] = 0;
    local_668[lVar2 + 5] = 0;
    local_668[lVar2 + 6] = 0;
    local_668[lVar2 + 7] = 0;
    local_668[lVar2 + 8] = 0;
    local_668[lVar2 + 9] = 0;
    lVar2 = lVar2 + 10;
  } while (lVar2 != 0x280);
  return;
}

#undef DAT_1001dfd0
#undef local_160
#undef local_158
#undef local_148
#undef local_138
#undef local_128
#undef local_118
#undef local_108
#undef local_f8
#undef local_e8
#undef local_d8
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_48
#undef local_40
#undef local_3c
#undef local_3b
#undef local_3a
#undef local_39
#undef lStack_6e0
#undef lStack_6d0
#undef lStack_6c0
#undef lStack_6b0
#undef lStack_6a0
#undef lStack_690
#undef lStack_680
#undef lStack_670
#undef uStack_5f0
#undef uStack_5e0
#undef uStack_5d0
#undef uStack_5c0
#undef uStack_5b0
#undef uStack_5a0
#undef uStack_590
#undef uStack_580
#undef uStack_570
#undef uStack_560
#undef uStack_550
#undef uStack_540
#undef uStack_530
#undef uStack_520
#undef uStack_510
#undef uStack_500
#undef uStack_4f0
#undef uStack_4e0
#undef uStack_4d0
#undef uStack_4c0
#undef uStack_4b0
#undef uStack_4a0
#undef uStack_490
#undef uStack_480
#undef uStack_470
#undef uStack_460
#undef uStack_450
#undef uStack_440
#undef uStack_430
#undef uStack_420
#undef uStack_410
#undef uStack_400
#undef uStack_3f0
#undef lStack_340
#undef lStack_330
#undef local_6e8
#undef local_6d8
#undef lStack_320
#undef local_6c8
#undef local_6b8
#undef lStack_310
#undef local_6a8
#undef local_698
#undef lStack_300
#undef local_688
#undef local_678
#undef lStack_2f0
#undef local_668
#undef local_658
#undef lStack_2e0
#undef local_648
#undef local_638
#undef lStack_2d0
#undef local_628
#undef local_618
#undef local_608
#undef local_5f8
#undef local_5e8
#undef local_5d8
#undef local_5c8
#undef local_5b8
#undef local_5a8
#undef local_598
#undef local_588
#undef local_578
#undef local_568
#undef local_558
#undef local_548
#undef local_538
#undef local_528
#undef local_518
#undef local_508
#undef local_4f8
#undef local_4e8
#undef local_4d8
#undef local_4c8
#undef local_4b8
#undef local_4a8
#undef local_498
#undef local_488
#undef local_478
#undef local_468
#undef local_458
#undef local_448
#undef local_438
#undef local_428
#undef local_418
#undef local_408
#undef local_3f8
#undef local_3e8
#undef local_3d0
#undef local_3c8
#undef local_3c0
#undef local_3b8
#undef local_3b0
#undef local_3a8
#undef local_3a0
#undef local_398
#undef local_390
#undef local_388
#undef local_380
#undef uStack_50
#undef local_378
#undef local_370
#undef local_368
#undef local_360
#undef local_358
#undef local_350
#undef local_348
#undef local_338
#undef local_328
#undef local_318
#undef local_308
#undef local_2f8
#undef local_2e8
#undef local_2d8
#undef local_2c8
#undef local_2b8
#undef local_2a8
#undef local_298
#undef local_288
#undef local_278
#undef local_268
#undef local_258
#undef local_248
#undef local_238
#undef local_228
#undef local_218
#undef local_208
#undef local_1f8
#undef local_1e8
#undef local_1d8
#undef local_1bc
#undef local_1b8
#undef local_1b0
#undef local_1a8
#undef local_1a0
#undef local_198
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_170
#undef local_168

#undef DAT_1001dea0
#define DAT_1001dea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80aU)))
#undef DAT_1001e150
#define DAT_1001e150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabaU)))
#define local_fc (*(char *)(pf_stack_frame + 20))
#define local_78 (*(undefined8 (*)[15])(pf_stack_frame + 152))
#define local_b8 (*(undefined8 (*)[23])(pf_stack_frame + 88))
#define local_f8 (*(undefined8 (*)[31])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ba60
 */

void recovered_1001ba60(int *param_1,int param_2,int param_3,long param_4,long param_5,uint param_6,
                       long param_7,char param_8)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  byte bVar14;
  uint uVar15;
  byte bVar16;

  local_fc = param_8 + 'C';
  recovered_10002980((byte *)param_1,0,0x19c);
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_2 == 1) {
    recovered_1001c3f0(param_4,param_5,param_6,param_7,local_fc,(long)param_1 + 9);
    param_1[0x65] = 0x10;
    param_1[0x66] = 8;
  }
  else {
    uVar9 = (uint)(param_2 == 3) * 0x10;
    uVar7 = uVar9 + 0x10;
    uVar13 = (ulong)uVar7;
    recovered_1001c3f0(param_4,param_5,param_6,param_7,param_8 + 'A',(long)local_f8);
    recovered_1001c3f0(param_4,param_5,param_6,param_7,local_fc,(long)local_b8);
    puVar10 = (undefined8 *)(ulong)((byte)param_8 + 0x45);
    recovered_1001c3f0(param_4,param_5,param_6,param_7,(char)((byte)param_8 + 0x45),(long)local_78);
    piVar1 = param_1 + 0x13;
    uVar15 = uVar7 >> 2;
    param_1[0x4f] = uVar15 + 6;
    recovered_10001c80((undefined8 *)piVar1,local_b8,uVar13,param_1,puVar10);
    puVar10 = (undefined8 *)(long)(int)(uVar9 ^ 0xfffffff0);
    lVar11 = (long)param_1 + 0x4f;
    iVar12 = -4;
    uVar4 = (ulong)uVar15;
    do {
      bVar14 = *(byte *)((long)piVar1 + (ulong)(iVar12 + uVar7));
      bVar3 = *(byte *)((long)piVar1 + (ulong)(iVar12 + uVar7 + 1));
      bVar8 = *(byte *)((long)piVar1 + (ulong)(iVar12 + 2 + uVar7));
      bVar16 = *(byte *)((long)piVar1 + (ulong)(iVar12 + uVar7 + 3));
      uVar6 = uVar15 - 1 & (uint)uVar4;
      if (uVar6 == 0) {
        bVar5 = (&DAT_1001e150)[(uVar4 & 0xffffffff) / (ulong)uVar15] ^ (&DAT_1001dea0)[bVar3];
        bVar3 = bVar8;
        bVar8 = bVar16;
LAB_1001bc21:
        bVar3 = (&DAT_1001dea0)[bVar3];
        bVar8 = (&DAT_1001dea0)[bVar8];
        bVar16 = (&DAT_1001dea0)[bVar14];
      }
      else {
        bVar5 = bVar14;
        if ((param_2 == 3) && (uVar6 == 4)) {
          bVar5 = (&DAT_1001dea0)[bVar14];
          bVar14 = bVar16;
          goto LAB_1001bc21;
        }
      }
      iVar2 = (int)puVar10;
      *(byte *)(lVar11 + -3 + uVar13) = bVar5 ^ *(byte *)((long)piVar1 + (ulong)(uVar7 + iVar2));
      *(byte *)(lVar11 + -2 + uVar13) = bVar3 ^ *(byte *)((long)piVar1 + (ulong)(uVar7 + iVar2 + 1))
      ;
      *(byte *)(lVar11 + -1 + uVar13) = bVar8 ^ *(byte *)((long)piVar1 + (ulong)(uVar7 + iVar2 + 2))
      ;
      *(byte *)(lVar11 + uVar13) = bVar16 ^ *(byte *)((long)piVar1 + (ulong)(uVar7 + iVar2 + 3));
      uVar4 = uVar4 + 1;
      puVar10 = (undefined8 *)((long)puVar10 + 4);
      lVar11 = lVar11 + 4;
      iVar12 = iVar12 + 4;
    } while (uVar9 + 0x2c != uVar4);
    recovered_10001c80((undefined8 *)(param_1 + 0x50),local_f8,0x10,uVar4,puVar10);
    uVar7 = (uint)(param_3 == 2) * 0x20 + 0x20;
    param_1[100] = uVar7;
    recovered_10001c80((undefined8 *)(param_1 + 0x54),local_78,(ulong)uVar7,uVar4,puVar10);
    param_1[0x65] = param_1[100];
    param_1[0x66] = 0x10;
  }
  return;
}

#undef DAT_1001dea0
#undef DAT_1001e150
#undef local_fc
#undef local_78
#undef local_b8
#undef local_f8

#undef DAT_1001e050
#define DAT_1001e050 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9baU)))
#undef DAT_1001e058
#define DAT_1001e058 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c1c0
 */

void recovered_1001c1c0(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;

  plVar4 = param_2 + 0x1f;
  uVar5 = 0x33;
  uVar6 = 0x3f;
  do {
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar7 = lVar8 + param_2[uVar6] * *(long *)((long)&DAT_1001e050 + lVar9) * -0x10;
      uVar10 = *(long *)((long)plVar4 + lVar9) + lVar7 + 0x80;
      lVar8 = (long)uVar10 >> 8;
      *(ulong *)((long)plVar4 + lVar9) =
           (lVar7 + *(long *)((long)plVar4 + lVar9)) - (uVar10 & 0xffffffffffffff00);
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0xa0);
    param_2[uVar5 & 0xffffffff] = param_2[uVar5 & 0xffffffff] + lVar8;
    param_2[uVar6] = 0;
    uVar5 = uVar5 - 1;
    plVar4 = plVar4 + -1;
    bVar1 = 0x20 < uVar6;
    uVar6 = uVar6 - 1;
  } while (bVar1);
  lVar8 = 1;
  lVar9 = 0;
  do {
    uVar6 = (lVar9 - (param_2[0x1f] >> 4) * *(long *)(lVar8 * 8 + ((uintptr_t)pf_module_state + 0x9b2U))) + param_2[lVar8 + -1]
    ;
    param_2[lVar8 + -1] = uVar6 & 0xff;
    uVar6 = (((long)uVar6 >> 8) - (param_2[0x1f] >> 4) * (&DAT_1001e050)[lVar8]) + param_2[lVar8];
    lVar9 = (long)uVar6 >> 8;
    param_2[lVar8] = uVar6 & 0xff;
    lVar8 = lVar8 + 2;
  } while (lVar8 != 0x21);
  uVar11 = (uint)(uVar6 >> 8);
  uVar12 = (uint)((long)uVar6 >> 0x28);
  lVar8 = 2;
  do {
    uVar6 = *(ulong *)(lVar8 * 8 + ((uintptr_t)pf_module_state + 0x9aaU));
    uVar5 = *(ulong *)(lVar8 * 8 + ((uintptr_t)pf_module_state + 0x9b2U));
    uVar10 = (&DAT_1001e050)[lVar8];
    uVar3 = (&DAT_1001e058)[lVar8];
    lVar9 = (param_2 + lVar8 + -2)[1];
    lVar7 = param_2[lVar8];
    lVar2 = (param_2 + lVar8)[1];
    param_2[lVar8 + -2] =
         param_2[lVar8 + -2] -
         ((uVar6 & 0xffffffff) * (ulong)uVar11 +
         ((uVar6 >> 0x20) * (ulong)uVar11 + (uVar6 & 0xffffffff) * (ulong)uVar12 << 0x20));
    (param_2 + lVar8 + -2)[1] =
         lVar9 - ((uVar5 & 0xffffffff) * (ulong)uVar11 +
                 ((uVar5 >> 0x20) * (ulong)uVar11 + (uVar5 & 0xffffffff) * (ulong)uVar12 << 0x20));
    param_2[lVar8] =
         lVar7 - ((uVar10 & 0xffffffff) * (ulong)uVar11 +
                 ((uVar10 >> 0x20) * (ulong)uVar11 + (uVar10 & 0xffffffff) * (ulong)uVar12 << 0x20))
    ;
    (param_2 + lVar8)[1] =
         lVar2 - ((uVar3 & 0xffffffff) * (ulong)uVar11 +
                 ((uVar3 >> 0x20) * (ulong)uVar11 + (uVar3 & 0xffffffff) * (ulong)uVar12 << 0x20));
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0x22);
  if (param_1 < param_2 + 0x21 && param_2 < param_1 + 4) {
    lVar8 = 0;
    do {
      param_2[lVar8 + 1] = param_2[lVar8 + 1] + (param_2[lVar8] >> 8);
      *(char *)((long)param_1 + lVar8) = (char)param_2[lVar8];
      param_2[lVar8 + 2] = param_2[lVar8 + 2] + (param_2[lVar8 + 1] >> 8);
      *(char *)((long)param_1 + lVar8 + 1) = (char)param_2[lVar8 + 1];
      lVar8 = lVar8 + 2;
    } while (lVar8 != 0x20);
  }
  else {
    lVar9 = *param_2;
    lVar8 = 0;
    do {
      lVar7 = (lVar9 >> 8) + param_2[lVar8 + 1];
      param_2[lVar8 + 1] = lVar7;
      *(char *)((long)param_1 + lVar8) = (char)lVar9;
      lVar9 = (lVar7 >> 8) + param_2[lVar8 + 2];
      param_2[lVar8 + 2] = lVar9;
      *(char *)((long)param_1 + lVar8 + 1) = (char)lVar7;
      lVar8 = lVar8 + 2;
    } while (lVar8 != 0x20);
  }
  return;
}

#undef DAT_1001e050
#undef DAT_1001e058

#undef DAT_1001d7c0
#define DAT_1001d7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_1001d7d0
#define DAT_1001d7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef UNK_1001d7c8
#define UNK_1001d7c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef UNK_1001d7d8
#define UNK_1001d7d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef _DAT_1001d7c0
#define _DAT_1001d7c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef _DAT_1001d7d0
#define _DAT_1001d7d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13aU)))
#undef uRam000000001001d7c8
#define uRam000000001001d7c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef uRam000000001001d7d8
#define uRam000000001001d7d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x142U)))
#define local_b0 (*(undefined8 (*)[22])(pf_stack_frame + 64))
#define local_70 (*(uint *)(pf_stack_frame + 128))
#define local_5c (*(uint *)(pf_stack_frame + 148))
#define local_31 (*(undefined1 *)(pf_stack_frame + 191))
#define local_58 (*(uint (*)[22])(pf_stack_frame + 152))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 48))
#define local_d8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 40))
#define local_b8 (*(ulong *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c3f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001c3f0(long param_1,long param_2,uint param_3,long param_4,undefined1 param_5,
                       long param_6)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  uint *puVar3;
  undefined7 in_register_00000081 = 0;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  local_d8 = _DAT_1001d7c0;
  uStack_d0 = uRam000000001001d7c8;
  local_c8 = _DAT_1001d7d0;
  uStack_c0 = uRam000000001001d7d8;
  local_70 = 0;
  uVar2 = (ulong)param_3;
  uVar7 = 0x20;
  local_5c = param_3;
  local_31 = param_5;
  if (param_3 == 0) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = param_4;
    puVar4 = (undefined8 *)param_2;
    uVar5 = uVar2;
    local_b8 = uVar2;
    do {
      uVar6 = (ulong)(0x40 - local_70);
      if (uVar5 < 0x40 - local_70) {
        uVar6 = uVar5;
      }
      recovered_10001c80((undefined8 *)((long)local_b0 + (ulong)local_70),puVar4,uVar6,lVar1,
                         (undefined8 *)CONCAT71(in_register_00000081,param_5));
      local_70 = local_70 + (int)uVar6;
      if (local_70 == 0x40) {
        recovered_1000f460((uint *)&local_d8,(long)local_b0);
        local_70 = 0;
      }
      puVar4 = (undefined8 *)((long)puVar4 + uVar6);
      uVar5 = uVar5 - uVar6;
    } while (uVar5 != 0);
    lVar1 = local_b8 + 0x20;
  }
  puVar4 = (undefined8 *)param_4;
  local_b8 = lVar1;
  do {
    uVar5 = (ulong)(0x40 - local_70);
    if (uVar7 < 0x40 - local_70) {
      uVar5 = uVar7;
    }
    recovered_10001c80((undefined8 *)((long)local_b0 + (ulong)local_70),puVar4,uVar5,lVar1,
                       (undefined8 *)CONCAT71(in_register_00000081,param_5));
    local_70 = local_70 + (int)uVar5;
    if (local_70 == 0x40) {
      recovered_1000f460((uint *)&local_d8,(long)local_b0);
      local_70 = 0;
    }
    puVar4 = (undefined8 *)((long)puVar4 + uVar5);
    uVar7 = uVar7 - uVar5;
  } while (uVar7 != 0);
  local_b8 = local_b8 + 1;
  puVar4 = (undefined8 *)&local_31;
  uVar7 = 1;
  do {
    uVar5 = (ulong)(0x40 - local_70);
    if (uVar7 < 0x40 - local_70) {
      uVar5 = uVar7;
    }
    recovered_10001c80((undefined8 *)((long)local_b0 + (ulong)local_70),puVar4,uVar5,lVar1,
                       (undefined8 *)CONCAT71(in_register_00000081,param_5));
    local_70 = local_70 + (int)uVar5;
    if (local_70 == 0x40) {
      recovered_1000f460((uint *)&local_d8,(long)local_b0);
      local_70 = 0;
    }
    puVar4 = (undefined8 *)((long)puVar4 + uVar5);
    uVar7 = uVar7 - uVar5;
  } while (uVar7 != 0);
  local_b8 = local_b8 + 0x20;
  puVar4 = (undefined8 *)(param_1 + 0x498);
  uVar7 = 0x20;
  do {
    uVar5 = (ulong)(0x40 - local_70);
    if (uVar7 < 0x40 - local_70) {
      uVar5 = uVar7;
    }
    recovered_10001c80((undefined8 *)((long)local_b0 + (ulong)local_70),puVar4,uVar5,lVar1,
                       (undefined8 *)CONCAT71(in_register_00000081,param_5));
    local_70 = local_70 + (int)uVar5;
    if (local_70 == 0x40) {
      recovered_1000f460((uint *)&local_d8,(long)local_b0);
      local_70 = 0;
    }
    puVar4 = (undefined8 *)((long)puVar4 + uVar5);
    uVar7 = uVar7 - uVar5;
  } while (uVar7 != 0);
  puVar3 = local_58;
  recovered_1000c7c0((uint *)&local_d8,puVar3);
  local_d8 = _DAT_1001d7c0;
  uStack_d0 = uRam000000001001d7c8;
  local_c8 = _DAT_1001d7d0;
  uStack_c0 = uRam000000001001d7d8;
  local_70 = 0;
  uVar7 = 0x20;
  if (local_5c == 0) {
    lVar1 = 0x20;
  }
  else {
    local_b8 = uVar2;
    do {
      uVar5 = (ulong)(0x40 - local_70);
      if (uVar2 < 0x40 - local_70) {
        uVar5 = uVar2;
      }
      recovered_10001c80((undefined8 *)((long)local_b0 + (ulong)local_70),(undefined8 *)param_2,
                         uVar5,uVar2,(undefined8 *)CONCAT71(in_register_00000081,param_5));
      local_70 = local_70 + (int)uVar5;
      if (local_70 == 0x40) {
        recovered_1000f460((uint *)&local_d8,(long)local_b0);
        local_70 = 0;
      }
      param_2 = param_2 + uVar5;
      uVar2 = uVar2 - uVar5;
    } while (uVar2 != 0);
    lVar1 = local_b8 + 0x20;
  }
  local_b8 = lVar1;
  do {
    uVar2 = (ulong)(0x40 - local_70);
    if (uVar7 < 0x40 - local_70) {
      uVar2 = uVar7;
    }
    recovered_10001c80((undefined8 *)((long)local_b0 + (ulong)local_70),(undefined8 *)param_4,uVar2,
                       lVar1,(undefined8 *)CONCAT71(in_register_00000081,param_5));
    local_70 = local_70 + (int)uVar2;
    if (local_70 == 0x40) {
      recovered_1000f460((uint *)&local_d8,(long)local_b0);
      local_70 = 0;
    }
    param_4 = param_4 + uVar2;
    uVar7 = uVar7 - uVar2;
  } while (uVar7 != 0);
  local_b8 = local_b8 + 0x20;
  uVar2 = 0x20;
  do {
    uVar7 = (ulong)(0x40 - local_70);
    if (uVar2 < 0x40 - local_70) {
      uVar7 = uVar2;
    }
    recovered_10001c80((undefined8 *)((long)local_b0 + (ulong)local_70),(undefined8 *)puVar3,uVar7,
                       lVar1,(undefined8 *)CONCAT71(in_register_00000081,param_5));
    local_70 = local_70 + (int)uVar7;
    if (local_70 == 0x40) {
      recovered_1000f460((uint *)&local_d8,(long)local_b0);
      local_70 = 0;
    }
    puVar3 = (uint *)((long)puVar3 + uVar7);
    uVar2 = uVar2 - uVar7;
  } while (uVar2 != 0);
  recovered_1000c7c0((uint *)&local_d8,(uint *)(param_6 + 0x20));
  recovered_10001c80((undefined8 *)param_6,(undefined8 *)local_58,0x20,lVar1,
                     (undefined8 *)CONCAT71(in_register_00000081,param_5));
  return;
}

#undef DAT_1001d7c0
#undef DAT_1001d7d0
#undef UNK_1001d7c8
#undef UNK_1001d7d8
#undef _DAT_1001d7c0
#undef _DAT_1001d7d0
#undef uRam000000001001d7c8
#undef uRam000000001001d7d8
#undef local_b0
#undef local_70
#undef local_5c
#undef local_31
#undef local_58
#undef uStack_d0
#undef uStack_c0
#undef local_d8
#undef local_c8
#undef local_b8

#undef DAT_1001e22d
#define DAT_1001e22d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb97U)))
#undef DAT_100228a2
#define DAT_100228a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x520cU)))
#undef DAT_100228a3
#define DAT_100228a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x520dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c8a0
 */

/* WARNING: Removing unreachable block (ram,0x1001c8fa) */

bool recovered_1001c8a0(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;

  uVar7 = param_2 & 0xffffffff;
  uVar3 = recovered_10003720(((uintptr_t)pf_module_state + 0x520cU));
  iVar2 = recovered_10003750(&DAT_100228a2,&DAT_1001e22d);
  if (iVar2 == 0) {
    return true;
  }
  bVar8 = uVar3 != uVar7;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      uVar4 = 0;
    }
    else {
      uVar1 = 0;
      do {
        uVar4 = uVar1;
        if (uVar4 < uVar7) {
          bVar5 = *(byte *)(param_1 + uVar4);
        }
        else {
          bVar5 = 0;
        }
        if (uVar4 + 1 < uVar7) {
          bVar6 = *(byte *)(param_1 + 1 + uVar4);
        }
        else {
          bVar6 = 0;
        }
        bVar8 = bVar6 ^ (&DAT_100228a3)[uVar4] | bVar8 | bVar5 ^ (&DAT_100228a2)[uVar4];
        uVar1 = uVar4 + 2;
      } while (uVar4 + 2 != (uVar3 & 0xfffffffffffffffe));
      uVar4 = uVar4 + 2;
      if ((uVar3 & 1) == 0) goto LAB_1001c995;
    }
    if (uVar4 < uVar7) {
      bVar5 = *(byte *)(param_1 + uVar4);
    }
    else {
      bVar5 = 0;
    }
    bVar8 = bVar8 | bVar5 ^ (&DAT_100228a2)[uVar4];
  }
LAB_1001c995:
  return bVar8 == 0;
}

#undef DAT_1001e22d
#undef DAT_100228a2
#undef DAT_100228a3

#undef DAT_1001ec47
#define DAT_1001ec47 (*(char *)(((uintptr_t)pf_module_state + 0x15b1U)))
#undef DAT_1001ec48
#define DAT_1001ec48 (*(char *)(((uintptr_t)pf_module_state + 0x15b2U)))
#undef DAT_1001ec49
#define DAT_1001ec49 (*(char *)(((uintptr_t)pf_module_state + 0x15b3U)))
#undef DAT_1001ec4a
#define DAT_1001ec4a (*(char *)(((uintptr_t)pf_module_state + 0x15b4U)))
#undef DAT_1001ec52
#define DAT_1001ec52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15bcU)))
#undef DAT_1001ec53
#define DAT_1001ec53 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15bdU)))
#undef DAT_1001ec54
#define DAT_1001ec54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15beU)))
#undef DAT_1001ec55
#define DAT_1001ec55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15bfU)))
#undef DAT_1001ec56
#define DAT_1001ec56 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15c0U)))
#undef str_1001ec4b
#define str_1001ec4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15b5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c9b0
 */

undefined8 recovered_1001c9b0(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  byte bVar5;

  bVar2 = *param_1;
  if (bVar2 == 0) {
    pcVar4 = str_1001ec4b;
LAB_1001cbc1:
    if (*pcVar4 == '\0') {
      return 1;
    }
    if (bVar2 == 0) {
      pcVar4 = &DAT_1001ec52;
      goto LAB_1001cc6d;
    }
  }
  else {
    bVar3 = bVar2 | 0x20;
    if (0x19 < (byte)(bVar2 + 0xbf)) {
      bVar3 = bVar2;
    }
    if (bVar3 == 0x6c) {
      bVar3 = param_1[1];
      if (bVar3 == 0) {
        pcVar4 = str_1001ec4b + 1;
      }
      else {
        bVar5 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar5 = bVar3;
        }
        if (bVar5 != 0x6f) goto LAB_1001cbca;
        bVar3 = param_1[2];
        if (bVar3 == 0) {
          pcVar4 = str_1001ec4b + 2;
        }
        else {
          bVar5 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar5 = bVar3;
          }
          if (bVar5 != 0x67) goto LAB_1001cbca;
          bVar3 = param_1[3];
          if (bVar3 == 0) {
            pcVar4 = str_1001ec4b + 3;
          }
          else {
            bVar5 = bVar3 | 0x20;
            if (0x19 < (byte)(bVar3 + 0xbf)) {
              bVar5 = bVar3;
            }
            if (bVar5 != 0x6f) goto LAB_1001cbca;
            bVar3 = param_1[4];
            if (bVar3 == 0) {
              pcVar4 = str_1001ec4b + 4;
            }
            else {
              bVar5 = bVar3 | 0x20;
              if (0x19 < (byte)(bVar3 + 0xbf)) {
                bVar5 = bVar3;
              }
              if (bVar5 != 0x75) goto LAB_1001cbca;
              bVar3 = param_1[5];
              if (bVar3 == 0) {
                pcVar4 = str_1001ec4b + 5;
              }
              else {
                bVar5 = bVar3 | 0x20;
                if (0x19 < (byte)(bVar3 + 0xbf)) {
                  bVar5 = bVar3;
                }
                if ((bVar5 != 0x74) || (param_1[6] != 0)) goto LAB_1001cbca;
                pcVar4 = str_1001ec4b + 6;
              }
            }
          }
        }
      }
      goto LAB_1001cbc1;
    }
    if (bVar3 == 0x65) {
      bVar3 = param_1[1];
      cVar1 = DAT_1001ec47;
      if (bVar3 != 0) {
        bVar5 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar5 = bVar3;
        }
        if (bVar5 != 0x78) goto LAB_1001cbca;
        bVar3 = param_1[2];
        cVar1 = DAT_1001ec48;
        if (bVar3 != 0) {
          bVar5 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar5 = bVar3;
          }
          if (bVar5 != 0x69) goto LAB_1001cbca;
          bVar3 = param_1[3];
          cVar1 = DAT_1001ec49;
          if (bVar3 != 0) {
            bVar5 = bVar3 | 0x20;
            if (0x19 < (byte)(bVar3 + 0xbf)) {
              bVar5 = bVar3;
            }
            if ((bVar5 != 0x74) || (cVar1 = DAT_1001ec4a, param_1[4] != 0)) goto LAB_1001cbca;
          }
        }
      }
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
LAB_1001cbca:
  if ((byte)(bVar2 + 0xbf) < 0x1a) {
    bVar2 = bVar2 | 0x20;
  }
  if (bVar2 != 0x71) {
    return 0;
  }
  bVar2 = param_1[1];
  if (bVar2 == 0) {
    pcVar4 = &DAT_1001ec53;
  }
  else {
    bVar3 = bVar2 | 0x20;
    if (0x19 < (byte)(bVar2 + 0xbf)) {
      bVar3 = bVar2;
    }
    if (bVar3 != 0x75) {
      return 0;
    }
    bVar2 = param_1[2];
    if (bVar2 == 0) {
      pcVar4 = &DAT_1001ec54;
    }
    else {
      bVar3 = bVar2 | 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar3 = bVar2;
      }
      if (bVar3 != 0x69) {
        return 0;
      }
      bVar2 = param_1[3];
      if (bVar2 == 0) {
        pcVar4 = &DAT_1001ec55;
      }
      else {
        bVar3 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar3 = bVar2;
        }
        if (bVar3 != 0x74) {
          return 0;
        }
        if (param_1[4] != 0) {
          return 0;
        }
        pcVar4 = &DAT_1001ec56;
      }
    }
  }
LAB_1001cc6d:
  return CONCAT71((int7)((ulong)pcVar4 >> 8),*pcVar4 == '\0');
}

#undef DAT_1001ec47
#undef DAT_1001ec48
#undef DAT_1001ec49
#undef DAT_1001ec4a
#undef DAT_1001ec52
#undef DAT_1001ec53
#undef DAT_1001ec54
#undef DAT_1001ec55
#undef DAT_1001ec56
#undef str_1001ec4b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cc80
 */

void recovered_1001cc80(long param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 in_RCX;
  undefined8 *in_R8;
  ulong uVar2;

  uVar1 = recovered_10003720((long)param_2);
  uVar2 = 0x1ff;
  if (uVar1 < 0x1ff) {
    uVar2 = uVar1;
  }
  recovered_10001c80((undefined8 *)(param_1 + 0xbba),param_2,uVar2,in_RCX,in_R8);
  *(undefined1 *)(param_1 + 0xbba + uVar2) = 0;
  *(undefined1 *)(param_1 + 3000) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cce0
 */

void recovered_1001cce0(long param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint uVar2;
  undefined8 in_RCX;
  uint uVar3;
  undefined8 *in_R8;
  uint uVar4;

  if (param_3 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
    puVar1 = *(undefined8 **)(param_1 + 0xba8);
    uVar3 = *(int *)(param_1 + 0xbb4) + *(int *)(param_1 + 0xbb0) & 0x7fff;
    uVar4 = 0x8000 - uVar3;
    uVar2 = param_3;
    if (uVar4 < param_3) {
      uVar2 = uVar4;
    }
    recovered_10001c80((undefined8 *)((ulong)uVar3 + (long)puVar1),(undefined8 *)param_2,
                       (ulong)uVar2,in_RCX,in_R8);
    if (uVar4 < param_3) {
      recovered_10001c80(puVar1,(undefined8 *)(param_2 + (ulong)uVar2),(ulong)(param_3 - uVar2),
                         in_RCX,in_R8);
    }
    *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + param_3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cd70
 */

void recovered_1001cd70(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  undefined8 in_RCX;
  uint uVar3;
  undefined8 *in_R8;
  uint uVar4;
  uint uVar5;

  uVar2 = recovered_10003720(param_2);
  uVar5 = (uint)uVar2;
  if (uVar5 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
    puVar1 = *(undefined8 **)(param_1 + 0xba8);
    uVar3 = *(int *)(param_1 + 0xbb4) + *(int *)(param_1 + 0xbb0) & 0x7fff;
    uVar4 = 0x8000 - uVar3;
    uVar2 = uVar2 & 0xffffffff;
    if (uVar4 < uVar5) {
      uVar2 = (ulong)uVar4;
    }
    recovered_10001c80((undefined8 *)((ulong)uVar3 + (long)puVar1),(undefined8 *)param_2,uVar2,
                       in_RCX,in_R8);
    if (uVar4 < uVar5) {
      recovered_10001c80(puVar1,(undefined8 *)(param_2 + uVar2),(ulong)(uVar5 - (int)uVar2),in_RCX,
                         in_R8);
    }
    *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar5;
  }
  return;
}


#undef DAT_1001ec6f
#define DAT_1001ec6f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15d9U)))
#undef DAT_1001ec73
#define DAT_1001ec73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15ddU)))
#undef DAT_1001ec81
#define DAT_1001ec81 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15ebU)))
#define local_31 (*(char *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ce10
 */

void recovered_1001ce10(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *in_R8;
  uint uVar9;
  ulong uVar10;

  local_31 = (char)param_2;
  cVar1 = *(char *)(param_1 + 0xa9d);
  *(bool *)(param_1 + 0xa9d) = param_2 == 0xd;
  cVar2 = *(char *)(param_1 + 0xa9c);
  if (cVar2 == '\x03') {
LAB_1001ce6f:
    *(undefined1 *)(param_1 + 0xa9c) = 0;
    return;
  }
  if (cVar2 == '\x02') {
    if (0x3e < (byte)(local_31 - 0x40U)) {
      return;
    }
    goto LAB_1001ce6f;
  }
  uVar6 = param_2 & 0xff;
  if (cVar2 == '\x01') {
    if (local_31 == 'O') {
      *(undefined1 *)(param_1 + 0xa9c) = 3;
      return;
    }
    if (uVar6 == 0x5b) {
      *(undefined1 *)(param_1 + 0xa9c) = 2;
      return;
    }
    goto LAB_1001ce6f;
  }
  switch((uintptr_t)(uVar6)) {
  case 3:
    uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x15ddU));
    uVar6 = (uint)uVar5;
    if (uVar6 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
      puVar3 = *(undefined8 **)(param_1 + 0xba8);
      uVar7 = *(int *)(param_1 + 0xbb4) + *(int *)(param_1 + 0xbb0) & 0x7fff;
      uVar9 = 0x8000 - uVar7;
      uVar5 = uVar5 & 0xffffffff;
      if (uVar9 < uVar6) {
        uVar5 = (ulong)uVar9;
      }
      lVar8 = param_1;
      recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar3),(undefined8 *)&DAT_1001ec73,
                         uVar5,param_1,in_R8);
      if (uVar9 < uVar6) {
        recovered_10001c80(puVar3,(undefined8 *)(&DAT_1001ec73 + uVar5),(ulong)(uVar6 - (int)uVar5),
                           lVar8,in_R8);
      }
      *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar6;
    }
    *(undefined4 *)(param_1 + 0xa98) = 0;
    goto LAB_1001d075;
  case 4:
    if ((*(int *)(param_1 + 0xa98) == 0) &&
       (recovered_1001cd70(param_1,((uintptr_t)pf_module_state + 0x15e2U)), *(char *)(param_1 + 0xde3) == '\0')) {
      *(undefined1 *)(param_1 + 0xde3) = 1;
      *(undefined4 *)(param_1 + 0xde8) = 0;
    }
    break;
  case 8:
switchD_1001ce9f_caseD_8:
    if ((*(int *)(param_1 + 0xa98) != 0) &&
       (*(int *)(param_1 + 0xa98) = *(int *)(param_1 + 0xa98) + -1,
       *(char *)(param_1 + 0x888) == '\x01')) {
      recovered_1001cce0(param_1,((uintptr_t)pf_module_state + 0x15d9U),3);
      return;
    }
    break;
  case 9:
    break;
  case 10:
    if (cVar1 == '\0') goto switchD_1001ce9f_caseD_d;
    break;
  case 0xc:
    uVar5 = recovered_10003720(((uintptr_t)pf_module_state + 0x15ebU));
    uVar6 = (uint)uVar5;
    if (uVar6 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
      puVar3 = *(undefined8 **)(param_1 + 0xba8);
      uVar7 = *(int *)(param_1 + 0xbb4) + *(int *)(param_1 + 0xbb0) & 0x7fff;
      uVar9 = 0x8000 - uVar7;
      uVar5 = uVar5 & 0xffffffff;
      if (uVar9 < uVar6) {
        uVar5 = (ulong)uVar9;
      }
      lVar8 = param_1;
      recovered_10001c80((undefined8 *)((ulong)uVar7 + (long)puVar3),(undefined8 *)&DAT_1001ec81,
                         uVar5,param_1,in_R8);
      if (uVar9 < uVar6) {
        recovered_10001c80(puVar3,(undefined8 *)(&DAT_1001ec81 + uVar5),(ulong)(uVar6 - (int)uVar5),
                           lVar8,in_R8);
      }
      *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar6;
    }
LAB_1001d075:
    recovered_100186d0(param_1);
    return;
  case 0xd:
switchD_1001ce9f_caseD_d:
    recovered_1001d210(param_1);
    return;
  case 0x15:
    iVar4 = *(int *)(param_1 + 0xa98);
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      *(int *)(param_1 + 0xa98) = iVar4;
      if (*(char *)(param_1 + 0x888) == '\x01') {
        uVar6 = *(int *)(param_1 + 0xbb4) - 0x8001;
        uVar5 = (ulong)uVar6;
        if (uVar6 < 0xfffffffd) {
          puVar3 = *(undefined8 **)(param_1 + 0xba8);
          uVar6 = *(int *)(param_1 + 0xbb4) + *(int *)(param_1 + 0xbb0) & 0x7fff;
          uVar10 = (ulong)(0x8000 - uVar6);
          if (2 < 0x8000 - uVar6) {
            uVar10 = 3;
          }
          recovered_10001c80((undefined8 *)((ulong)uVar6 + (long)puVar3),(undefined8 *)&DAT_1001ec6f
                             ,uVar10,uVar5,in_R8);
          if (0x7ffd < uVar6) {
            recovered_10001c80(puVar3,(undefined8 *)(&DAT_1001ec6f + uVar10),
                               (ulong)((uint)uVar10 ^ 3),uVar5,in_R8);
          }
          *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + 3;
          iVar4 = *(int *)(param_1 + 0xa98);
        }
      }
    }
    break;
  case 0x1b:
    *(undefined1 *)(param_1 + 0xa9c) = 1;
    break;
  default:
    if (uVar6 == 0x7f) goto switchD_1001ce9f_caseD_8;
  case 5:
  case 6:
  case 7:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    if ((byte)(local_31 - 0x20U) < 0x5f) {
      uVar6 = *(uint *)(param_1 + 0xa98);
      uVar7 = uVar6 + 1;
      if (uVar7 < 0x200) {
        *(uint *)(param_1 + 0xa98) = uVar7;
        *(char *)(param_1 + 0x898 + (ulong)uVar6) = local_31;
        if (*(char *)(param_1 + 0x888) == '\x01') {
          recovered_1001cce0(param_1,(long)&local_31,1);
        }
      }
    }
  }
  return;
}

#undef DAT_1001ec6f
#undef DAT_1001ec73
#undef DAT_1001ec81
#undef local_31

#undef DAT_1001e2ce
#define DAT_1001e2ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc38U)))
#undef str_1001ec78
#define str_1001ec78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15e2U)))
#define local_238 (*(byte (*)[568])(pf_stack_frame + 24))
#define local_38 (*(undefined8 * *)(pf_stack_frame + 536))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d210
 */

void recovered_1001d210(long param_1)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  undefined8 in_RCX;
  uint uVar3;
  undefined8 *in_R8;
  ulong uVar4;
  uint uVar5;
  uint uVar6;

  if ((*(char *)(param_1 + 0x888) == '\x01') && (*(int *)(param_1 + 0xbb4) - 0x8001U < 0xfffffffe))
  {
    local_38 = *(undefined8 **)(param_1 + 0xba8);
    uVar5 = *(int *)(param_1 + 0xbb4) + *(int *)(param_1 + 0xbb0) & 0x7fff;
    uVar4 = (ulong)(0x8000 - uVar5);
    if (1 < 0x8000 - uVar5) {
      uVar4 = 2;
    }
    recovered_10001c80((undefined8 *)((ulong)uVar5 + (long)local_38),(undefined8 *)&DAT_1001e2ce,
                       uVar4,in_RCX,in_R8);
    if (uVar5 == 0x7fff) {
      recovered_10001c80(local_38,(undefined8 *)(&DAT_1001e2ce + uVar4),(ulong)(2 - (int)uVar4),
                         in_RCX,in_R8);
    }
    *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + 2;
  }
  if ((ulong)*(uint *)(param_1 + 0xa98) == 0) {
    recovered_100186d0(param_1);
    return;
  }
  recovered_10001c80((undefined8 *)local_238,(undefined8 *)(param_1 + 0x898),
                     (ulong)*(uint *)(param_1 + 0xa98),in_RCX,in_R8);
  local_238[*(uint *)(param_1 + 0xa98)] = 0;
  *(undefined4 *)(param_1 + 0xa98) = 0;
  uVar1 = recovered_1001c9b0(local_238);
  if ((char)uVar1 == '\0') {
    uVar2 = recovered_10003720((long)local_238);
    uVar4 = 0x1ff;
    if (uVar2 < 0x1ff) {
      uVar4 = uVar2;
    }
    recovered_10001c80((undefined8 *)(param_1 + 0xbba),(undefined8 *)local_238,uVar4,in_RCX,in_R8);
    *(undefined1 *)(param_1 + 0xbba + uVar4) = 0;
    *(undefined1 *)(param_1 + 3000) = 1;
  }
  else {
    uVar4 = recovered_10003720(((uintptr_t)pf_module_state + 0x15e2U));
    uVar5 = (uint)uVar4;
    if (uVar5 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
      local_38 = *(undefined8 **)(param_1 + 0xba8);
      uVar3 = *(int *)(param_1 + 0xbb4) + *(int *)(param_1 + 0xbb0) & 0x7fff;
      uVar6 = 0x8000 - uVar3;
      uVar4 = uVar4 & 0xffffffff;
      if (uVar6 < uVar5) {
        uVar4 = (ulong)uVar6;
      }
      recovered_10001c80((undefined8 *)((ulong)uVar3 + (long)local_38),(undefined8 *)str_1001ec78,
                         uVar4,in_RCX,in_R8);
      if (uVar6 < uVar5) {
        recovered_10001c80(local_38,(undefined8 *)(str_1001ec78 + uVar4),(ulong)(uVar5 - (int)uVar4)
                           ,in_RCX,in_R8);
      }
      *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar5;
    }
    if (*(char *)(param_1 + 0xde3) == '\0') {
      *(undefined1 *)(param_1 + 0xde3) = 1;
      *(undefined4 *)(param_1 + 0xde8) = 0;
    }
  }
  return;
}

#undef DAT_1001e2ce
#undef str_1001ec78
#undef local_238
#undef local_38

#undef DAT_1001e2ce
#define DAT_1001e2ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc38U)))
#undef DAT_1001ec89
#define DAT_1001ec89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15f3U)))
#define local_31 (*(char *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d410
 */

void recovered_1001d410(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 in_RCX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *in_R8;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;

  if (*(char *)(param_1 + 0xde0) == '\x01') {
    iVar3 = *(int *)(param_1 + 0xbb4);
    do {
      if (0xfffffffd < iVar3 - 0x8001U) {
        return;
      }
      local_31 = **(char **)(param_1 + 0xdd8);
      if (local_31 == '\n') {
        if ((*(char *)(param_1 + 0xde1) == '\r') || (*(char *)(param_1 + 0x888) != '\x01'))
        goto LAB_1001d500;
        puVar8 = *(undefined8 **)(param_1 + 0xba8);
        uVar2 = iVar3 + *(int *)(param_1 + 0xbb0) & 0x7fff;
        uVar6 = (ulong)(0x8000 - uVar2);
        if (1 < 0x8000 - uVar2) {
          uVar6 = 2;
        }
        recovered_10001c80((undefined8 *)((ulong)uVar2 + (long)puVar8),(undefined8 *)&DAT_1001e2ce,
                           uVar6,in_RCX,in_R8);
        iVar3 = 2;
        if (uVar2 == 0x7fff) {
          recovered_10001c80(puVar8,(undefined8 *)(&DAT_1001e2ce + uVar6),(ulong)(2 - (int)uVar6),
                             in_RCX,in_R8);
          iVar3 = 2;
        }
      }
      else {
        if (local_31 == '\0') {
          if ((*(char *)(param_1 + 0xde1) != '\0') && (*(char *)(param_1 + 0xde1) != '\n')) {
            puVar8 = (undefined8 *)&DAT_1001ec89;
            if (*(byte *)(param_1 + 0x888) != 0) {
              puVar8 = (undefined8 *)&DAT_1001e2ce;
            }
            uVar5 = *(byte *)(param_1 + 0x888) + 1;
            puVar1 = *(undefined8 **)(param_1 + 0xba8);
            uVar4 = iVar3 + *(int *)(param_1 + 0xbb0) & 0x7fff;
            uVar7 = 0x8000 - uVar4;
            uVar2 = uVar5;
            if (uVar7 < uVar5) {
              uVar2 = uVar7;
            }
            recovered_10001c80((undefined8 *)((ulong)uVar4 + (long)puVar1),puVar8,(ulong)uVar2,
                               in_RCX,in_R8);
            if (uVar7 < uVar5) {
              recovered_10001c80(puVar1,(undefined8 *)((long)puVar8 + (ulong)uVar2),
                                 (ulong)(uVar5 - uVar2),in_RCX,in_R8);
            }
            *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar5;
          }
          *(undefined1 *)(param_1 + 0xde0) = 0;
          *(undefined8 *)(param_1 + 0xdd8) = 0;
          return;
        }
LAB_1001d500:
        recovered_10001c80((undefined8 *)
                           ((ulong)(iVar3 + *(int *)(param_1 + 0xbb0) & 0x7fff) +
                           *(long *)(param_1 + 0xba8)),(undefined8 *)&local_31,1,in_RCX,in_R8);
        iVar3 = 1;
      }
      iVar3 = iVar3 + *(int *)(param_1 + 0xbb4);
      *(int *)(param_1 + 0xbb4) = iVar3;
      *(char *)(param_1 + 0xde1) = local_31;
      *(long *)(param_1 + 0xdd8) = *(long *)(param_1 + 0xdd8) + 1;
    } while (*(char *)(param_1 + 0xde0) != '\0');
  }
  return;
}

#undef DAT_1001e2ce
#undef DAT_1001ec89
#undef local_31

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280898
#define DAT_00280898 (*(uint8_t *)(0x280898U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280898
#define _DAT_00280898 (*(uint *)(0x280898U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1001d600(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  **(undefined1 **)(param_1 + 0xdc0) = 0;
  uVar1 = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x9b < _DAT_00280808 && ((code *)(ulong)_DAT_00280898 != (code *)0x0)))) {
    uVar1 = (*(code *)(ulong)_DAT_00280898)
                      (param_1 + 0xbba,*(undefined8 *)(param_1 + 0xdc0),0x10000);
  }
  *(undefined4 *)(param_1 + 0xdcc) = uVar1;
  *(undefined4 *)(param_1 + 0xdc8) = 1;
  return *(int *)(param_1 + 0xdcc) == 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280898
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280898
