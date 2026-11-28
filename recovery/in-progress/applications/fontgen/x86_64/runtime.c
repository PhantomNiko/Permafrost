/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10009060
#define DAT_10009060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cbU)))
#undef DAT_10009061
#define DAT_10009061 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14ccU)))
#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

/* WARNING: Removing unreachable block (ram,0x100004bc) */

void recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_10009060 = 0;
    DAT_10009061 = 0;
    recovered_100004e0();
    DAT_10009070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10009060
#undef DAT_10009061
#undef DAT_10009070

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
#undef DAT_10009060
#define DAT_10009060 (*(char *)(((uintptr_t)pf_module_state + 0x14cbU)))
#undef DAT_10009068
#define DAT_10009068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14d3U)))
#undef DAT_10009078
#define DAT_10009078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14e3U)))
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
  if (DAT_10009060 != '\0') {
    return;
  }
  DAT_10009068 = 0;
  DAT_10009078 = 0;
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
      if (DAT_10009068 != 0) goto LAB_100007b9;
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
  if (DAT_10009078 == 0) {
    DAT_10009078 = DAT_10009068;
  }
  DAT_10009060 = 1;
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
#undef DAT_10009060
#undef DAT_10009068
#undef DAT_10009078
#undef _DAT_00280088
#undef _DAT_0028008c
#undef _DAT_00280238
#undef _DAT_0028023c
#undef local_438
#undef local_28

#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007f0
 */

/* WARNING: Removing unreachable block (ram,0x1000082c) */

void recovered_100007f0(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000840(param_1,param_2,param_3);
    DAT_10009070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10009070

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_10009061
#define DAT_10009061 (*(char *)(((uintptr_t)pf_module_state + 0x14ccU)))
#undef DAT_10009068
#define DAT_10009068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14d3U)))
#undef DAT_10009078
#define DAT_10009078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x14e3U)))
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
  if ((bVar3) || (DAT_10009061 != '\0')) {
    return false;
  }
  DAT_10009061 = 1;
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
      DAT_10009061 = 0;
      return false;
    }
    if (plVar6 <= plVar1) {
      DAT_10009061 = 0;
      return false;
    }
    if (plVar1 < (long *)0x10000000 && (long *)0x8000000 < plVar6) {
      if (plVar1 < (long *)0x8000000) {
        uVar7 = 0x8000000 - (long)plVar1;
        if (~(ulong)plVar1 < uVar7) {
          DAT_10009061 = 0;
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
        DAT_10009061 = 0;
        return false;
      }
    }
    else {
      if ((long *)0xfffffffffffffff0 < plVar1) {
        DAT_10009061 = 0;
        return false;
      }
      uVar10 = ((ulong)((long)plVar1 + 0xf) & 0xfffffffffffffff0) - (long)plVar1;
      uVar8 = uVar7 - uVar10;
      if (uVar7 < uVar10 || uVar8 == 0) {
        DAT_10009061 = 0;
        return false;
      }
      if ((uVar8 & 0xfffffffffffffff0) < 0x31) {
        DAT_10009061 = 0;
        return false;
      }
    }
    plVar2 = DAT_10009068;
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
          DAT_10009061 = 0;
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
        DAT_10009061 = 0;
        return false;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == param_3) {
      puVar5 = (ulong *)&DAT_10009068;
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
      if (DAT_10009078 == (long *)0x0) {
        DAT_10009078 = DAT_10009068;
      }
      DAT_10009061 = 0;
      return local_38 != uVar8;
    }
  } while( true );
}

#undef DAT_10000001
#undef DAT_10009061
#undef DAT_10009068
#undef DAT_10009078
#undef local_38

#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
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

  iVar1 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    local_18 = param_1;
    local_10 = param_2;
    recovered_10000840((long)&local_18,(long)&local_10,1);
    DAT_10009070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10009070
#undef local_18
#undef local_10

#undef DAT_10009068
#define DAT_10009068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x14d3U)))
#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
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

  iVar1 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  uVar4 = 0;
  for (plVar2 = DAT_10009068; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      uVar4 = uVar4 + *plVar2;
    }
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_10009070 = 0;
  return uVar3;
}

#undef DAT_10009068
#undef DAT_10009070

#undef DAT_10009068
#define DAT_10009068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x14d3U)))
#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
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

  iVar1 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  lVar2 = 0;
  for (plVar3 = DAT_10009068; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    if ((char)plVar3[3] == '\x01') {
      lVar2 = lVar2 + *plVar3;
    }
  }
  DAT_10009070 = 0;
  return lVar2;
}

#undef DAT_10009068
#undef DAT_10009070

#undef DAT_10009068
#define DAT_10009068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x14d3U)))
#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
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

  iVar2 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  uVar4 = 0;
  for (plVar1 = DAT_10009068; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar4 = uVar4 + *plVar1;
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_10009070 = 0;
  return uVar3;
}

#undef DAT_10009068
#undef DAT_10009070

#undef DAT_10009068
#define DAT_10009068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x14d3U)))
#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
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

  iVar2 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100004e0();
  lVar3 = 0;
  for (plVar1 = DAT_10009068; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar3 = lVar3 + *plVar1;
  }
  DAT_10009070 = 0;
  return lVar3;
}

#undef DAT_10009068
#undef DAT_10009070

#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce0
 */

/* WARNING: Removing unreachable block (ram,0x10000d1c) */

void recovered_10000ce0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000d40(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10009070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10009070

#undef DAT_10009068
#define DAT_10009068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x14d3U)))
#undef DAT_10009078
#define DAT_10009078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x14e3U)))
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
    puVar1 = DAT_10009068;
    puVar5 = DAT_10009078;
    if (DAT_10009078 == (ulong *)0x0) {
      puVar5 = DAT_10009068;
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
                          DAT_10009078 = (ulong *)puVar3[1];
                        }
                        else {
                          DAT_10009078 = (ulong *)((long)puVar3 + uVar9 + 0x20);
                          *(ulong *)((long)puVar3 + uVar9 + 0x20) = uVar8 - 0x20;
                          uVar11 = puVar3[1];
                          *(ulong *)((long)puVar3 + uVar9 + 0x28) = uVar11;
                          *(ulong **)((long)puVar3 + uVar9 + 0x30) = puVar3;
                          *(undefined1 *)((long)puVar3 + uVar9 + 0x38) = 1;
                          if (uVar11 != 0) {
                            *(ulong **)(uVar11 + 0x10) = DAT_10009078;
                          }
                          *puVar3 = uVar9;
                          puVar3[1] = (ulong)DAT_10009078;
                        }
                        *(undefined1 *)(puVar3 + 3) = 0;
                        if (DAT_10009078 == (ulong *)0x0) {
                          DAT_10009078 = DAT_10009068;
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

#undef DAT_10009068
#undef DAT_10009078

#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f40
 */

/* WARNING: Removing unreachable block (ram,0x10000f7c) */

void recovered_10000f40(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000d40(param_1,(ulong *)0x0,param_2);
    DAT_10009070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10009070

#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fa0
 */

/* WARNING: Removing unreachable block (ram,0x10000fdc) */

ulong * recovered_10000fa0(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
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
  DAT_10009070 = 0;
  return puVar2;
}

#undef DAT_10009070

#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001000
 */

/* WARNING: Removing unreachable block (ram,0x1000103c) */

void recovered_10001000(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001050(param_1);
    DAT_10009070 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10009070

#undef DAT_10009078
#define DAT_10009078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x14e3U)))
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
        if (DAT_10009078 == puVar3) {
          DAT_10009078 = puVar2;
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
          if (DAT_10009078 == puVar2) {
            DAT_10009078 = puVar3;
          }
          puVar1[2] = (ulong)puVar3;
          puVar2 = puVar1;
        } while ((char)puVar1[3] != '\0');
      }
      puVar2 = puVar3;
    }
    DAT_10009078 = puVar2;
  }
  return;
}

#undef DAT_10009078

#undef DAT_10009070
#define DAT_10009070 (*(int *)(((uintptr_t)pf_module_state + 0x14dbU)))
#undef DAT_10009078
#define DAT_10009078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x14e3U)))
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

  iVar8 = DAT_10009070;
  { __typeof__(DAT_10009070) pf_atomic_old = __atomic_exchange_n(&(DAT_10009070),1,__ATOMIC_SEQ_CST);
}
  if (iVar8 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (undefined8 *)0x0) {
    puVar17 = recovered_10000d40(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10009070 = 0;
    return puVar17;
  }
  if (param_2 == 0) {
    recovered_10001050((long)param_1);
    DAT_10009070 = 0;
    return (undefined8 *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_10009070 = 0;
    return (undefined8 *)0x0;
  }
  recovered_100004e0();
  uVar13 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar17 = param_1 + -4;
  uVar12 = param_1[-4];
  if (uVar13 <= uVar12) {
    if (uVar12 <= uVar13 - 1) {
      DAT_10009070 = 0;
      return (undefined8 *)0x0;
    }
    if (uVar12 - uVar13 < 0x30) {
      if (uVar12 < 0xffffffffffffffe0) {
        DAT_10009070 = 0;
        return param_1;
      }
      DAT_10009070 = 0;
      return (undefined8 *)0x0;
    }
    if (0xffffffffffffffb0 < param_2) {
      DAT_10009070 = 0;
      return (undefined8 *)0x0;
    }
    DAT_10009078 = (ulong *)((long)param_1 + uVar13);
    *(ulong *)((long)param_1 + uVar13) = (uVar12 - uVar13) - 0x20;
    lVar2 = param_1[-3];
    *(long *)((long)param_1 + uVar13 + 8) = lVar2;
    *(ulong **)((long)param_1 + uVar13 + 0x10) = puVar17;
    *(undefined1 *)((long)param_1 + uVar13 + 0x18) = 1;
    if (lVar2 != 0) {
      *(ulong **)(lVar2 + 0x10) = DAT_10009078;
    }
    param_1[-4] = uVar13;
    param_1[-3] = DAT_10009078;
    DAT_10009070 = 0;
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
      puVar15 = DAT_10009078;
      do {
        if (((puVar9 == (ulong *)0x0) || ((char)puVar9[3] != '\x01')) ||
           ((0xffffffffffffffdf < uVar12 ||
            (((ulong *)((long)param_1 + uVar12) != puVar9 || (-uVar12 - 0x21 < *puVar9)))))) break;
        if (puVar15 == puVar9) {
          puVar15 = puVar17;
          DAT_10009078 = puVar17;
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
        DAT_10009070 = 0;
        return (undefined8 *)0x0;
      }
      uVar10 = recovered_100066a0(puVar17,uVar13);
      if ((char)uVar10 != '\0') {
        DAT_10009078 = (ulong *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_10009070 = 0;
      return param_1;
    }
  }
  puVar9 = recovered_10000d40(uVar13,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  if (puVar9 == (ulong *)0x0) {
    DAT_10009070 = 0;
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
  DAT_10009070 = 0;
  return puVar9;
}

#undef DAT_10009070
#undef DAT_10009078

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


#undef DAT_10007cfc
#define DAT_10007cfc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x167U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e30
 */

undefined * recovered_10003e30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10007cfc;
}

#undef DAT_10007cfc

#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x146bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e40
 */

undefined ** recovered_10003e40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10009000;
}

#undef PTR_DAT_10009000

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
#undef local_28
#undef uStack_20
#undef uStack_18

#undef DAT_10007ba0
#define DAT_10007ba0 (*(double *)(((uintptr_t)pf_module_state + 0xbU)))
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
          param_1 = param_1 * DAT_10007ba0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0 *
                    DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0;
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

#undef DAT_10007ba0

#undef DAT_10007ba0
#define DAT_10007ba0 (*(double *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007c20
#define DAT_10007c20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef _DAT_10007c20
#define _DAT_10007c20 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bU)))
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
  dVar2 = (double)(_DAT_10007c20 ^ (ulong)param_1);
  if ((double)(_DAT_10007c20 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_10007ba8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10007ba0;
      iVar1 = iVar1 + 1;
    } while (DAT_10007ba8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10007ba0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_10007c20 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_10007ba0
#undef DAT_10007ba8
#undef DAT_10007c20
#undef _DAT_10007c20

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


#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
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
      return DAT_10007ba8;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_10007ba8;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_10007ba8 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_10007ba8

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


#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
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
         (ulong)(DAT_10007ba8 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_10007ba8

#undef DAT_10007ba0
#define DAT_10007ba0 (*(double *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
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
    if (param_1 <= DAT_10007ba8) {
      dVar1 = DAT_10007ba8;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10007ba0;
  }
  return dVar1;
}

#undef DAT_10007ba0
#undef DAT_10007ba8

#undef DAT_10007ba0
#define DAT_10007ba0 (*(double *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007bb0
#define DAT_10007bb0 (*(double *)(((uintptr_t)pf_module_state + 0x1bU)))
#undef DAT_10007bb8
#define DAT_10007bb8 (*(double *)(((uintptr_t)pf_module_state + 0x23U)))
#undef DAT_10007bc0
#define DAT_10007bc0 (*(double *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_10007bc8
#define DAT_10007bc8 (*(double *)(((uintptr_t)pf_module_state + 0x33U)))
#undef DAT_10007bd0
#define DAT_10007bd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10007bd8
#define DAT_10007bd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_10007c30
#define DAT_10007c30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_10007c40
#define DAT_10007c40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabU)))
#undef DAT_10007c50
#define DAT_10007c50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbbU)))
#undef DAT_10007c60
#define DAT_10007c60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcbU)))
#undef _DAT_10007bd0
#define _DAT_10007bd0 (*(double *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef _DAT_10007bd8
#define _DAT_10007bd8 (*(double *)(((uintptr_t)pf_module_state + 0x43U)))
#undef _DAT_10007c30
#define _DAT_10007c30 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef _DAT_10007c40
#define _DAT_10007c40 (*(uint128 *)(((uintptr_t)pf_module_state + 0xabU)))
#undef _DAT_10007c50
#define _DAT_10007c50 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbbU)))
#undef _DAT_10007c60
#define _DAT_10007c60 (*(uint128 *)(((uintptr_t)pf_module_state + 0xcbU)))
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
    if (DAT_10007bb8 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_10007ba0;
        iVar1 = iVar1 + 1;
      } while (DAT_10007bb8 < param_1);
    }
    for (; param_1 < DAT_10007bc0; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_10007bc8 + param_1) / (param_1 + DAT_10007ba8);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_10007c30);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_10007c40);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_10007c50);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_10007c60);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_10007bd0 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_10007bd8;
  }
  return DAT_10007bb0;
}

#undef DAT_10007ba0
#undef DAT_10007ba8
#undef DAT_10007bb0
#undef DAT_10007bb8
#undef DAT_10007bc0
#undef DAT_10007bc8
#undef DAT_10007bd0
#undef DAT_10007bd8
#undef DAT_10007c30
#undef DAT_10007c40
#undef DAT_10007c50
#undef DAT_10007c60
#undef _DAT_10007bd0
#undef _DAT_10007bd8
#undef _DAT_10007c30
#undef _DAT_10007c40
#undef _DAT_10007c50
#undef _DAT_10007c60

#undef DAT_10007c70
#define DAT_10007c70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004530
 */

long recovered_10004530(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_10007c70 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_10007c70

#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007be0
#define DAT_10007be0 (*(double *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_10007be8
#define DAT_10007be8 (*(double *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_10007bf0
#define DAT_10007bf0 (*(double *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef DAT_10007bf8
#define DAT_10007bf8 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_10007c00
#define DAT_10007c00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_10007c80
#define DAT_10007c80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xebU)))
#undef _DAT_10007c00
#define _DAT_10007c00 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_10007c80
#define _DAT_10007c80 (*(uint128 *)(((uintptr_t)pf_module_state + 0xebU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004560(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10007be0 < param_1; param_1 = param_1 + DAT_10007be8) {
  }
  for (; param_1 < DAT_10007bf0; param_1 = param_1 + DAT_10007bf8) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10007c80);
  return ((dVar1 / _DAT_10007c00 + DAT_10007ba8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_10007ba8
#undef DAT_10007be0
#undef DAT_10007be8
#undef DAT_10007bf0
#undef DAT_10007bf8
#undef DAT_10007c00
#undef DAT_10007c80
#undef _DAT_10007c00
#undef _DAT_10007c80

#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007be0
#define DAT_10007be0 (*(double *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_10007be8
#define DAT_10007be8 (*(double *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_10007bf0
#define DAT_10007bf0 (*(double *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef DAT_10007bf8
#define DAT_10007bf8 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_10007c08
#define DAT_10007c08 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_10007c90
#define DAT_10007c90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfbU)))
#undef _DAT_10007c90
#define _DAT_10007c90 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004610(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10007be0 < param_1; param_1 = param_1 + DAT_10007be8) {
  }
  for (; param_1 < DAT_10007bf0; param_1 = param_1 + DAT_10007bf8) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10007c90);
  return (DAT_10007c08 * dVar1 + DAT_10007ba8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_10007ba8
#undef DAT_10007be0
#undef DAT_10007be8
#undef DAT_10007bf0
#undef DAT_10007bf8
#undef DAT_10007c08
#undef DAT_10007c90
#undef _DAT_10007c90

#undef DAT_10007c20
#define DAT_10007c20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef _DAT_10007c20
#define _DAT_10007c20 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046b0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_10007c20 ^ (ulong)param_1);
  if ((double)(_DAT_10007c20 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_10007c20
#undef _DAT_10007c20

#undef DAT_10007ba0
#define DAT_10007ba0 (*(double *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_10007c10
#define DAT_10007c10 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef DAT_10007c20
#define DAT_10007c20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef _DAT_10007c20
#define _DAT_10007c20 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bU)))
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
  dVar7 = (double)(_DAT_10007c20 ^ (ulong)param_1);
  if ((double)(_DAT_10007c20 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_10007c10;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_10007ba0;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_10007ba0;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_10007ba0
#undef DAT_10007c10
#undef DAT_10007c20
#undef _DAT_10007c20

#undef DAT_10007ba0
#define DAT_10007ba0 (*(double *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_10007c10
#define DAT_10007c10 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
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
  dVar6 = DAT_10007c10;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_10007ba0;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_10007ba0;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_10007ba0
#undef DAT_10007c10

#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
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
  dVar3 = DAT_10007ba8;
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

#undef DAT_10007ba8

#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007c20
#define DAT_10007c20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef _DAT_10007c20
#define _DAT_10007c20 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bU)))
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
    dVar3 = DAT_10007ba8;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_10007c20);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_10007ba8;
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

#undef DAT_10007ba8
#undef DAT_10007c20
#undef _DAT_10007c20

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


#undef DAT_10007ba0
#define DAT_10007ba0 (*(double *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007c20
#define DAT_10007c20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef UNK_10007c24
#define UNK_10007c24 (*(uint *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef _DAT_10007c20
#define _DAT_10007c20 (*(uint *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef uRam0000000010007c24
#define uRam0000000010007c24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8fU)))
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
    dVar2 = pf_bits_double(CONCAT44((uint)(pf_double_bits(dVar2) >> 0x20) ^ uRam0000000010007c24,
                             SUB84(dVar2,0) ^ _DAT_10007c20));
  }
  iVar1 = 0;
  if (DAT_10007ba8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10007ba0;
      iVar1 = iVar1 + 1;
    } while (DAT_10007ba8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10007ba0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam0000000010007c24,_DAT_10007c20));
  }
  return CONCAT44((int)(pf_double_bits(dVar2) >> 0x20),(float)dVar2);
}

#undef DAT_10007ba0
#undef DAT_10007ba8
#undef DAT_10007c20
#undef UNK_10007c24
#undef _DAT_10007c20
#undef uRam0000000010007c24

#undef DAT_10007ba0
#define DAT_10007ba0 (*(double *)(((uintptr_t)pf_module_state + 0xbU)))
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
          dVar3 = dVar3 * DAT_10007ba0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0 *
                  DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0;
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

#undef DAT_10007ba0

#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007cb0
#define DAT_10007cb0 (*(float *)(((uintptr_t)pf_module_state + 0x11bU)))
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
    return DAT_10007cb0;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_10007ba8;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_10007ba8 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_10007ba8
#undef DAT_10007cb0

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


#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
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
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_10007ba8 + dVar2) & uVar1);
}

#undef DAT_10007ba8

#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
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
                    (ulong)(DAT_10007ba8 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_10007ba8

#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_10007ba8 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_10007ba8

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


#undef DAT_10007ba0
#define DAT_10007ba0 (*(double *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007bb8
#define DAT_10007bb8 (*(double *)(((uintptr_t)pf_module_state + 0x23U)))
#undef DAT_10007bc0
#define DAT_10007bc0 (*(double *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_10007bc8
#define DAT_10007bc8 (*(double *)(((uintptr_t)pf_module_state + 0x33U)))
#undef DAT_10007bd0
#define DAT_10007bd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10007bd8
#define DAT_10007bd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_10007c30
#define DAT_10007c30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_10007c40
#define DAT_10007c40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabU)))
#undef DAT_10007c50
#define DAT_10007c50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbbU)))
#undef DAT_10007c60
#define DAT_10007c60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcbU)))
#undef DAT_10007cb4
#define DAT_10007cb4 (*(float *)(((uintptr_t)pf_module_state + 0x11fU)))
#undef DAT_10007cb8
#define DAT_10007cb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x123U)))
#undef _DAT_10007bd0
#define _DAT_10007bd0 (*(double *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef _DAT_10007bd8
#define _DAT_10007bd8 (*(double *)(((uintptr_t)pf_module_state + 0x43U)))
#undef _DAT_10007c30
#define _DAT_10007c30 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef _DAT_10007c40
#define _DAT_10007c40 (*(uint128 *)(((uintptr_t)pf_module_state + 0xabU)))
#undef _DAT_10007c50
#define _DAT_10007c50 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbbU)))
#undef _DAT_10007c60
#define _DAT_10007c60 (*(uint128 *)(((uintptr_t)pf_module_state + 0xcbU)))
#undef _DAT_10007cb8
#define _DAT_10007cb8 (*(float *)(((uintptr_t)pf_module_state + 0x123U)))
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
    if (_DAT_10007cb8 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_10007ba0;
        iVar1 = iVar1 + 1;
      } while (DAT_10007bb8 < dVar2);
    }
    for (; dVar2 < DAT_10007bc0; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_10007bc8 + dVar2) / (dVar2 + DAT_10007ba8);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_10007c30);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_10007c40);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_10007c50);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_10007c60);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_10007bd0 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_10007bd8);
  }
  return DAT_10007cb4;
}

#undef DAT_10007ba0
#undef DAT_10007ba8
#undef DAT_10007bb8
#undef DAT_10007bc0
#undef DAT_10007bc8
#undef DAT_10007bd0
#undef DAT_10007bd8
#undef DAT_10007c30
#undef DAT_10007c40
#undef DAT_10007c50
#undef DAT_10007c60
#undef DAT_10007cb4
#undef DAT_10007cb8
#undef _DAT_10007bd0
#undef _DAT_10007bd8
#undef _DAT_10007c30
#undef _DAT_10007c40
#undef _DAT_10007c50
#undef _DAT_10007c60
#undef _DAT_10007cb8

#undef DAT_10007c70
#define DAT_10007c70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ea0
 */

long recovered_10004ea0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_10007c70 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_10007c70

#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007be0
#define DAT_10007be0 (*(double *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_10007be8
#define DAT_10007be8 (*(double *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_10007bf0
#define DAT_10007bf0 (*(double *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef DAT_10007bf8
#define DAT_10007bf8 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_10007c00
#define DAT_10007c00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_10007c80
#define DAT_10007c80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xebU)))
#undef _DAT_10007c00
#define _DAT_10007c00 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_10007c80
#define _DAT_10007c80 (*(uint128 *)(((uintptr_t)pf_module_state + 0xebU)))
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

  for (dVar1 = (double)param_1; DAT_10007be0 < dVar1; dVar1 = dVar1 + DAT_10007be8) {
  }
  for (; dVar1 < DAT_10007bf0; dVar1 = dVar1 + DAT_10007bf8) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_10007c80);
  return (float)(((dVar2 / _DAT_10007c00 + DAT_10007ba8 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_10007ba8
#undef DAT_10007be0
#undef DAT_10007be8
#undef DAT_10007bf0
#undef DAT_10007bf8
#undef DAT_10007c00
#undef DAT_10007c80
#undef _DAT_10007c00
#undef _DAT_10007c80

#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007be0
#define DAT_10007be0 (*(double *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_10007be8
#define DAT_10007be8 (*(double *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_10007bf0
#define DAT_10007bf0 (*(double *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef DAT_10007bf8
#define DAT_10007bf8 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_10007c08
#define DAT_10007c08 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_10007c90
#define DAT_10007c90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfbU)))
#undef _DAT_10007c90
#define _DAT_10007c90 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004f80(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_10007be0 < dVar1; dVar1 = dVar1 + DAT_10007be8) {
  }
  for (; dVar1 < DAT_10007bf0; dVar1 = dVar1 + DAT_10007bf8) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10007c90);
  return (float)((DAT_10007c08 * dVar1 + DAT_10007ba8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_10007ba8
#undef DAT_10007be0
#undef DAT_10007be8
#undef DAT_10007bf0
#undef DAT_10007bf8
#undef DAT_10007c08
#undef DAT_10007c90
#undef _DAT_10007c90

#undef DAT_10007ca0
#define DAT_10007ca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10bU)))
#undef UNK_10007ca4
#define UNK_10007ca4 (*(uint *)(((uintptr_t)pf_module_state + 0x10fU)))
#undef _DAT_10007ca0
#define _DAT_10007ca0 (*(uint *)(((uintptr_t)pf_module_state + 0x10bU)))
#undef uRam0000000010007ca4
#define uRam0000000010007ca4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10fU)))
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
  fVar2 = (float)(_DAT_10007ca0 ^ (uint)fVar1);
  if ((float)(_DAT_10007ca0 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam0000000010007ca4 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_10007ca0
#undef UNK_10007ca4
#undef _DAT_10007ca0
#undef uRam0000000010007ca4

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


#undef DAT_10007ba0
#define DAT_10007ba0 (*(double *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_10007ba8
#define DAT_10007ba8 (*(double *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_10007c18
#define DAT_10007c18 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
#undef DAT_10007c20
#define DAT_10007c20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef _DAT_10007c20
#define _DAT_10007c20 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bU)))
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
    dVar11 = dVar11 * DAT_10007c18 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_10007ba8;
      do {
        dVar12 = dVar12 * DAT_10007c18 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_10007c18;
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
                dVar11 = dVar11 * DAT_10007ba0;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0 *
                         DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0 * DAT_10007ba0;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_10007c20);
  }
  return dVar11;
}

#undef DAT_10007ba0
#undef DAT_10007ba8
#undef DAT_10007c18
#undef DAT_10007c20
#undef _DAT_10007c20

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


#undef DAT_10007c18
#define DAT_10007c18 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
#undef DAT_10007c20
#define DAT_10007c20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef DAT_10007cfe
#define DAT_10007cfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x169U)))
#undef _DAT_10007c20
#define _DAT_10007c20 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef str_10007d08
#define str_10007d08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x173U)))
#undef str_10007d19
#define str_10007d19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x184U)))
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
  uVar8 = _DAT_10007c20;
  dVar7 = DAT_10007c18;
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
      abStack_7a[uVar19 + 2] = str_10007d19[uVar24 % 10];
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
    pcVar23 = str_10007d19;
    if (*param_3 == 0x58) {
      pcVar23 = str_10007d08;
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
        abStack_7a[uVar14 + 2] = str_10007d19[uVar24 % 10];
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
      abStack_7a[uVar14 + 2] = str_10007d19[(uint)uVar24 & 0xf];
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
        pbVar21 = &DAT_10007cfe;
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
      abStack_7a[uVar19 + 2] = str_10007d19[uVar13 % 10];
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

#undef DAT_10007c18
#undef DAT_10007c20
#undef DAT_10007cfe
#undef _DAT_10007c20
#undef str_10007d08
#undef str_10007d19
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
#undef DAT_10009068
#define DAT_10009068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14d3U)))
#undef DAT_10009078
#define DAT_10009078 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x14e3U)))
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
        if (DAT_10009068 == 0) {
          puVar5 = (ulong *)&DAT_10009068;
        }
        *puVar5 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_10009078 == (long *)0x0) {
          DAT_10009078 = plVar2;
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
      if (DAT_10009068 == 0) {
        plVar1 = &DAT_10009068;
      }
      *plVar1 = 0x10000000;
      *param_3 = 0x10000000;
      if (DAT_10009078 == (long *)0x0) {
        DAT_10009078 = (long *)&DAT_10000000;
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
        if (DAT_10009068 == 0) {
          puVar3 = &DAT_10009068;
        }
        *puVar3 = plVar1;
        *param_3 = (ulong)plVar1;
        if (DAT_10009078 == (long *)0x0) {
          DAT_10009078 = plVar1;
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
#undef DAT_10009068
#undef DAT_10009078
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006700
 */

undefined8 recovered_10006700(uint param_1,uint param_2,uint *param_3,uint *param_4,ulong *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;

  uVar4 = 1;
  if (param_5 != (ulong *)0x0 && (param_4 != (uint *)0x0 && param_3 != (uint *)0x0)) {
    uVar1 = *param_3;
    uVar4 = 2;
    if (((0xffffffdf < uVar1 - 0x21) && (uVar2 = param_3[1], 0xffffffdf < uVar2 - 0x21)) &&
       (uVar4 = 3, param_2 != 0 && param_1 != 0)) {
      if (param_1 % uVar1 != 0) {
        return 3;
      }
      uVar4 = 3;
      if (param_2 % uVar2 == 0) {
        uVar5 = param_3[3];
        if (param_3[3] == 0) {
          uVar5 = param_1 / uVar1;
        }
        uVar4 = 4;
        if (uVar5 - 1 < param_1 / uVar1) {
          uVar3 = param_3[2];
          uVar6 = param_3[4];
          uVar7 = ((ulong)param_2 / (ulong)uVar2) * (ulong)uVar5;
          if (uVar6 == 0) {
            if (0x100 < uVar7) {
              return 5;
            }
            uVar6 = (uint)uVar7;
          }
          uVar4 = 5;
          if (((uVar6 <= uVar7 && 0xfffffeff < uVar6 - 0x101) && (uVar4 = 6, uVar3 < 0x100)) &&
             (uVar6 + uVar3 < 0x101)) {
            *param_4 = uVar1;
            param_4[1] = uVar2;
            param_4[2] = uVar3;
            param_4[3] = uVar5;
            param_4[4] = uVar6;
            *param_5 = (ulong)(uVar2 * uVar6 * (uVar1 + 7 >> 3) + 0xc);
            uVar4 = 0;
          }
        }
        return uVar4;
      }
    }
  }
  return uVar4;
}


#define local_48 (*(uint * *)(pf_stack_frame + 24))
#define local_40 (*(uint * *)(pf_stack_frame + 32))
#define local_38 (*(uint * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006830
 */

undefined8
recovered_10006830(long param_1,ulong param_2,uint param_3,uint param_4,ulong param_5,uint *param_6,
                  undefined4 *param_7,ulong param_8,ulong *param_9)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint unaff_R14D;
  undefined1 uVar14;
  uint unaff_R15D;
  ulong uVar15;

  uVar14 = (undefined1)unaff_R15D;
  if (param_6 == (uint *)0x0) {
    uVar6 = 1;
  }
  else {
    uVar10 = *param_6;
    local_40 = (uint *)(ulong)uVar10;
    uVar6 = 2;
    if (0xffffffdf < uVar10 - 0x21) {
      uVar2 = param_6[1];
      local_38 = (uint *)(ulong)uVar2;
      if ((0xffffffdf < uVar2 - 0x21) && (uVar6 = 3, param_4 != 0 && param_3 != 0)) {
        puVar3 = (uint *)((ulong)param_3 / (ulong)local_40);
        uVar11 = (uint)puVar3;
        puVar4 = puVar3;
        if (param_3 % uVar10 == 0) {
          puVar4 = (uint *)((ulong)param_4 / (ulong)local_38);
          unaff_R14D = uVar11;
          if (param_4 % uVar2 == 0) {
            local_48 = (uint *)(ulong)param_6[3];
            if (param_6[3] == 0) {
              local_48 = puVar3;
            }
            if (uVar11 <= (int)local_48 - 1U) {
              uVar6 = 4;
              goto LAB_100068c9;
            }
            unaff_R15D = param_6[2];
            uVar14 = (undefined1)unaff_R15D;
            uVar13 = (ulong)param_6[4];
            uVar9 = (long)puVar4 * (long)local_48;
            if (param_6[4] == 0) {
              param_6 = local_48;
              if (uVar9 < 0x101) {
                uVar13 = uVar9 & 0xffffffff;
                goto LAB_10006ac9;
              }
            }
            else {
LAB_10006ac9:
              unaff_R14D = (uint)uVar13;
              uVar11 = unaff_R14D - 0x101;
              param_6 = (uint *)(ulong)CONCAT31((int3)(uVar11 >> 8),uVar11 < 0xffffff00);
              if (uVar13 <= uVar9 && uVar11 >= 0xffffff00) {
                uVar9 = 0;
                uVar6 = 6;
                bVar5 = false;
                if (unaff_R15D < 0x100) {
                  if (unaff_R14D + unaff_R15D < 0x101) {
                    uVar9 = (ulong)(uVar2 * unaff_R14D * (uVar10 + 7 >> 3) + 0xc);
                    uVar6 = 0;
                    bVar5 = true;
                  }
                }
                else {
                  local_40 = local_48;
                  local_38 = local_48;
                }
                goto LAB_100068db;
              }
            }
            uVar6 = 5;
            unaff_R14D = (uint)uVar13;
            goto LAB_100068c9;
          }
        }
        uVar9 = 0;
        bVar5 = false;
        uVar6 = 3;
        local_48 = puVar4;
        local_40 = puVar4;
        local_38 = puVar4;
        goto LAB_100068db;
      }
    }
  }
LAB_100068c9:
  uVar14 = (undefined1)unaff_R15D;
  uVar9 = 0;
  bVar5 = false;
  local_48 = param_6;
  local_40 = param_6;
  local_38 = param_6;
LAB_100068db:
  if (param_9 != (ulong *)0x0) {
    *param_9 = uVar9;
  }
  if (bVar5) {
    uVar6 = 1;
    if ((param_7 != (undefined4 *)0x0 && param_1 != 0) && param_9 != (ulong *)0x0) {
      uVar13 = param_5 & 0xffffffff;
      uVar6 = 7;
      if ((((ulong)param_3 * 4 <= uVar13) && (param_4 * uVar13 <= param_2)) &&
         (uVar6 = 8, uVar9 <= param_8)) {
        recovered_10002980((byte *)param_7,0,uVar9);
        uVar9 = 0;
        *param_7 = 0x31464257;
        *(char *)(param_7 + 1) = (char)local_40;
        *(char *)((long)param_7 + 5) = (char)local_38;
        *(undefined1 *)((long)param_7 + 6) = uVar14;
        *(char *)((long)param_7 + 7) = (char)unaff_R14D;
        uVar10 = (int)local_40 + 7U >> 3;
        *(char *)(param_7 + 2) = (char)uVar10;
        do {
          uVar15 = 0;
          do {
            lVar12 = (uint)((int)((uVar9 & 0xffffffff) / ((ulong)local_48 & 0xffffffff)) *
                            (int)local_38 + (int)uVar15) * uVar13 + param_1;
            uVar8 = 0;
            do {
              uVar7 = (ulong)(uint)((int)((uVar9 & 0xffffffff) % ((ulong)local_48 & 0xffffffff)) *
                                    (int)local_40 + (int)uVar8);
              if ((*(char *)(lVar12 + 3 + uVar7 * 4) < '\0') &&
                 ((uint)*(byte *)(lVar12 + 2 + uVar7 * 4) * 0x72 +
                  (uint)*(byte *)(lVar12 + 1 + uVar7 * 4) * 0x24b +
                  (uint)*(byte *)(lVar12 + uVar7 * 4) * 299 < 0x1f400)) {
                pbVar1 = (byte *)((long)param_7 +
                                 (uVar8 >> 3 & 0x1fffffff) +
                                 uVar15 * uVar10 +
                                 (ulong)uVar10 * ((ulong)local_38 & 0xffffffff) * uVar9 + 0xc);
                *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)uVar8 & 7));
              }
              uVar8 = uVar8 + 1;
            } while (((ulong)local_40 & 0xffffffff) != uVar8);
            uVar15 = uVar15 + 1;
          } while (uVar15 != ((ulong)local_38 & 0xffffffff));
          uVar9 = uVar9 + 1;
        } while (uVar9 != unaff_R14D);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}

#undef local_48
#undef local_40
#undef local_38

#undef DAT_10007d2a
#define DAT_10007d2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195U)))
#undef str_10007cc0
#define str_10007cc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b60
 */

undefined8 recovered_10006b60(char *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 *puVar9;
  bool bVar10;

  uVar2 = 9;
  if (param_3 == 0 || (param_2 == 0 || param_1 == (char *)0x0)) {
    return 9;
  }
  bVar8 = *param_1;
  if (bVar8 == 0) {
    return 9;
  }
  pbVar6 = (byte *)param_1;
  do {
    pbVar6 = pbVar6 + 1;
    if ((bVar8 == 0x2f) || (puVar9 = (undefined8 *)(ulong)bVar8, bVar8 == 0x5c)) {
      param_1 = (char *)pbVar6;
    }
    else if (bVar8 == 0) break;
    bVar8 = *pbVar6;
  } while( true );
  if (*param_1 != 0) {
    uVar3 = recovered_10003720((long)param_1);
    uVar4 = uVar3;
    do {
      uVar5 = uVar3;
      if (uVar4 == 0) break;
      lVar1 = uVar4 - 1;
      bVar10 = uVar4 == 1;
      uVar4 = uVar4 - 1;
      uVar5 = uVar4;
    } while (bVar10 || param_1[lVar1] != 0x2e);
    bVar10 = param_3 < uVar5 + 0x15;
    uVar7 = CONCAT71((int7)(param_3 >> 8),bVar10 || uVar5 == 0);
    uVar2 = 9;
    if (!bVar10 && uVar5 != 0) {
      recovered_10001c80((undefined8 *)param_2,(undefined8 *)str_10007cc0,0x10,uVar7,puVar9);
      recovered_10001c80((undefined8 *)(param_2 + 0x10),(undefined8 *)param_1,uVar5,uVar7,puVar9);
      recovered_10001c80((undefined8 *)(param_2 + uVar5 + 0x10),(undefined8 *)&DAT_10007d2a,5,uVar7,
                         puVar9);
      uVar2 = 0;
    }
  }
  return uVar2;
}

#undef DAT_10007d2a
#undef str_10007cc0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c80
 */

undefined8 recovered_10006c80(byte *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;

  if (param_2 == (uint *)0x0 || param_1 == (byte *)0x0) {
    return 0;
  }
  for (; (bVar1 = *param_1, bVar1 == 9 || (bVar1 == 0x20)); param_1 = param_1 + 1) {
  }
  if ((bVar1 == 0x30) && ((param_1[1] | 0x20) == 0x78)) {
    param_1 = param_1 + 2;
    uVar4 = 0x10;
  }
  else {
    uVar4 = 10;
  }
  iVar3 = 0;
  uVar6 = 0;
  while( true ) {
    pbVar2 = param_1 + 1;
    bVar1 = *param_1;
    uVar7 = (ulong)bVar1;
    if ((uVar7 < 0x21) && ((0x100000201U >> (uVar7 & 0x3f) & 1) != 0)) {
      while (((char)uVar7 == ' ' || ((int)uVar7 == 9))) {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
        uVar7 = (ulong)bVar1;
      }
      if (iVar3 == 0) {
        return 0;
      }
      if ((char)uVar7 == '\0') {
        *param_2 = uVar6;
        return 1;
      }
      return 0;
    }
    if ((byte)(bVar1 - 0x30U) < 10) {
      uVar5 = (uint)(byte)(bVar1 - 0x30U);
    }
    else if ((byte)(bVar1 + 0x9f) < 6) {
      uVar5 = bVar1 - 0x57;
    }
    else {
      if (5 < (byte)(bVar1 + 0xbf)) {
        return 0;
      }
      uVar5 = bVar1 - 0x37;
    }
    if ((uint)uVar4 <= uVar5) break;
    if ((uint)(~uVar5 / uVar4) < uVar6) {
      return 0;
    }
    uVar6 = uVar5 + uVar6 * (uint)uVar4;
    iVar3 = iVar3 + -1;
    param_1 = pbVar2;
  }
  return 0;
}


#undef DAT_10007cd4
#define DAT_10007cd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef str_10007eaf
#define str_10007eaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dc0
 */

char * recovered_10006dc0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 10) {
    return &DAT_10007cd4 + *(int *)(&DAT_10007cd4 + (ulong)param_1 * 4);
  }
  return str_10007eaf;
}

#undef DAT_10007cd4
#undef str_10007eaf

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_00280844
#define DAT_00280844 (*(uint8_t *)(0x280844U))
#undef DAT_100080d6
#define DAT_100080d6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x541U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280828
#define _DAT_00280828 (*(uint *)(0x280828U))
#undef _DAT_00280844
#define _DAT_00280844 (*(uint *)(0x280844U))
#undef str_10007d32
#define str_10007d32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19dU)))
#undef str_10007d43
#define str_10007d43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aeU)))
#undef str_10007d7a
#define str_10007d7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e5U)))
#undef str_10007db5
#define str_10007db5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x220U)))
#undef str_10007dda
#define str_10007dda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
#undef str_10007e12
#define str_10007e12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27dU)))
#undef str_10007e47
#define str_10007e47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b2U)))
#undef str_10007e6d
#define str_10007e6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d8U)))
#undef str_10007e8c
#define str_10007e8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f7U)))
#undef str_10007eaf
#define str_10007eaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31aU)))
#undef str_10007ecd
#define str_10007ecd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x338U)))
#undef str_10007ef7
#define str_10007ef7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x362U)))
#undef str_10007f08
#define str_10007f08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x373U)))
#undef str_10007f1b
#define str_10007f1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x386U)))
#undef str_10007f30
#define str_10007f30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39bU)))
#undef str_10007f46
#define str_10007f46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b1U)))
#undef str_10007f61
#define str_10007f61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ccU)))
#undef str_10007f7d
#define str_10007f7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e8U)))
#undef str_10007f97
#define str_10007f97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x402U)))
#undef str_10007fb0
#define str_10007fb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41bU)))
#undef str_10007fcd
#define str_10007fcd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x438U)))
#undef str_10008008
#define str_10008008 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x473U)))
#undef str_1000801e
#define str_1000801e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x489U)))
#undef str_1000803e
#define str_1000803e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a9U)))
#undef str_1000804c
#define str_1000804c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b7U)))
#undef str_1000806c
#define str_1000806c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d7U)))
#undef str_10008093
#define str_10008093 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4feU)))
#undef str_100080a3
#define str_100080a3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50eU)))
#undef str_100080c0
#define str_100080c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52bU)))
#define uStack_48 (*(uint *)(pf_stack_frame + 12488))
#define local_20e8 (*(char (*)[8424])(pf_stack_frame + 4136))
#define local_1078 (*(char (*)[4216])(pf_stack_frame + 8344))
#define local_70 (*(uint (*)[28])(pf_stack_frame + 12448))
#define local_5c (*(void * *)(pf_stack_frame + 12468))
#define local_50 (*(uint *)(pf_stack_frame + 12480))
#define local_4c (*(uint *)(pf_stack_frame + 12484))
#define local_44 (*(uint *)(pf_stack_frame + 12492))
#define local_40 (*(uint *)(pf_stack_frame + 12496))
#define local_3c (*(uint *)(pf_stack_frame + 12500))
#define local_38 (*(uint *)(pf_stack_frame + 12504))
#define local_34 (*(uint *)(pf_stack_frame + 12508))
#define local_30 (*(ulong *)(pf_stack_frame + 12512))
#define acStack_30f8 (*(char (*)[12536])(pf_stack_frame + 24))
#define uStack_60 (*(uint *)(pf_stack_frame + 12464))
#define uStack_54 (*(uint *)(pf_stack_frame + 12476))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006df0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006df0(void)

{
  unsigned char pf_stack_frame[12592] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *data;
  char *pcVar4;
  char *pcVar5;

  local_30 = 0;
  recovered_10002980((byte *)&local_44,0,0x14);
  recovered_10002980((byte *)local_70,0,0x14);
  recovered_10002980((byte *)&local_5c,0,0x18);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280828)(str_10007ecd);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280828)(&DAT_100080d6);
  }
  local_1078[0] = '\0';
  if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
     (((_DAT_00280808 < 0x48 || ((code *)(ulong)_DAT_00280844 == (code *)0x0)) ||
      ((((iVar1 = (*(code *)(ulong)_DAT_00280844)(local_1078,0x1001,str_10007ef7,1), iVar1 == 0 ||
         ((local_1078[0] == '\0' ||
          (uVar2 = recovered_10007490(str_10007f1b,&local_44), (char)uVar2 == '\0')))) ||
        (uVar2 = recovered_10007490(str_10007f30,&local_40), (char)uVar2 == '\0')) ||
       (((uVar2 = recovered_10007690(str_10007f46,0xff,&local_3c), (char)uVar2 == '\0' ||
         (uVar2 = recovered_10007690(str_10007f61,0xffffffff,&local_38), (char)uVar2 == '\0')) ||
        (uVar2 = recovered_10007690(str_10007f7d,0x100,&local_34), (char)uVar2 == '\0')))))))) {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280828)(str_10007f08);
    }
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
    if ((code *)(ulong)_DAT_00280828 == (code *)0x0) {
      return 1;
    }
    (*(code *)(ulong)_DAT_00280828)(&DAT_100080d6);
    return 1;
  }
  iVar1 = recovered_100078b0(local_1078,&local_5c);
  if (iVar1 == 0) {
    local_20e8[0] = '\0';
    pcVar4 = local_20e8;
    recovered_10007900(pcVar4);
    pcVar5 = str_10007f97;
LAB_100071e1:
    recovered_10007960(pcVar5,pcVar4);
    return 1;
  }
  if (local_5c == (void *)0x0) {
    pcVar5 = str_10007fb0;
    pcVar4 = str_10007fcd;
    goto LAB_100071e1;
  }
  uVar3 = recovered_10006700(local_50,local_4c,&local_44,local_70,&local_30);
                    /* WARNING: Switch is manually overridden */
  switch((uintptr_t)(uVar3 & 0xffffffff)) {
  case 0:
    data = (undefined4 *)recovered_10007a60(local_30);
    if (data != (undefined4 *)0x0) {
      uVar3 = recovered_10006830((long)local_5c,(ulong)uStack_54,local_50,local_4c,(ulong)uStack_48,
                                 &local_44,data,local_30,&local_30);
      switch((uintptr_t)(uVar3 & 0xffffffff)) {
      case 0:
        uVar3 = recovered_10006b60(local_1078,(long)acStack_30f8,0x1001);
                    /* WARNING: Switch is manually overridden */
        switch((uintptr_t)(uVar3 & 0xffffffff)) {
        case 0:
          recovered_10007ab0((char *)((uintptr_t)pf_module_state + 0x4f8U));
          recovered_10007ab0(str_10008093);
          iVar1 = recovered_10007b00(acStack_30f8,data,(uint)local_30);
          if (iVar1 == 0) {
            local_20e8[0] = '\0';
            pcVar4 = local_20e8;
            recovered_10007900(pcVar4);
            pcVar5 = str_100080a3;
            break;
          }
          uVar2 = 0;
          recovered_100063f0(local_20e8,0x1061,str_100080c0,(ulong)uStack_60,
                             acStack_30f8);
          recovered_100073f0(local_20e8);
          goto LAB_100072b8;
        case 1:
          pcVar4 = str_10007d32;
          pcVar5 = str_1000806c;
          break;
        case 2:
          pcVar4 = str_10007d43;
          pcVar5 = str_1000806c;
          break;
        case 3:
          pcVar4 = str_10007d7a;
          pcVar5 = str_1000806c;
          break;
        case 4:
          pcVar4 = str_10007db5;
          pcVar5 = str_1000806c;
          break;
        case 5:
          pcVar4 = str_10007dda;
          pcVar5 = str_1000806c;
          break;
        case 6:
          pcVar4 = str_10007e12;
          pcVar5 = str_1000806c;
          break;
        case 7:
          pcVar4 = str_10007e47;
          pcVar5 = str_1000806c;
          break;
        case 8:
          pcVar4 = str_10007e6d;
          pcVar5 = str_1000806c;
          break;
        case 9:
          pcVar4 = str_10007e8c;
          pcVar5 = str_1000806c;
        }
        goto LAB_100072ad;
      case 1:
        pcVar4 = str_10007d32;
        break;
      case 2:
        pcVar4 = str_10007d43;
        break;
      case 3:
        pcVar4 = str_10007d7a;
        break;
      case 4:
        pcVar4 = str_10007db5;
        break;
      case 5:
        pcVar4 = str_10007dda;
        break;
      case 6:
        pcVar4 = str_10007e12;
        break;
      case 7:
        pcVar4 = str_10007e47;
        break;
      case 8:
        pcVar4 = str_10007e6d;
        break;
      case 9:
        pcVar4 = str_10007e8c;
        break;
      default:
        pcVar4 = str_10007eaf;
      }
      pcVar5 = str_1000804c;
LAB_100072ad:
      recovered_10007960(pcVar5,pcVar4);
      uVar2 = 1;
LAB_100072b8:
      recovered_10007b50(data);
      goto LAB_1000722e;
    }
    pcVar5 = str_1000801e;
    pcVar4 = str_1000803e;
    goto LAB_10007223;
  case 1:
    pcVar4 = str_10007d32;
    break;
  case 2:
    pcVar4 = str_10007d43;
    break;
  case 3:
    pcVar4 = str_10007d7a;
    break;
  case 4:
    pcVar4 = str_10007db5;
    break;
  case 5:
    pcVar4 = str_10007dda;
    break;
  case 6:
    pcVar4 = str_10007e12;
  }
  pcVar5 = str_10008008;
LAB_10007223:
  recovered_10007960(pcVar5,pcVar4);
  uVar2 = 1;
LAB_1000722e:
  recovered_10007b50(local_5c);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280828
#undef DAT_00280844
#undef DAT_100080d6
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280828
#undef _DAT_00280844
#undef str_10007d32
#undef str_10007d43
#undef str_10007d7a
#undef str_10007db5
#undef str_10007dda
#undef str_10007e12
#undef str_10007e47
#undef str_10007e6d
#undef str_10007e8c
#undef str_10007eaf
#undef str_10007ecd
#undef str_10007ef7
#undef str_10007f08
#undef str_10007f1b
#undef str_10007f30
#undef str_10007f46
#undef str_10007f61
#undef str_10007f7d
#undef str_10007f97
#undef str_10007fb0
#undef str_10007fcd
#undef str_10008008
#undef str_1000801e
#undef str_1000803e
#undef str_1000804c
#undef str_1000806c
#undef str_10008093
#undef str_100080a3
#undef str_100080c0
#undef uStack_48
#undef local_20e8
#undef local_1078
#undef local_70
#undef local_5c
#undef local_50
#undef local_4c
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef acStack_30f8
#undef uStack_60
#undef uStack_54

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_100080d6
#define DAT_100080d6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x541U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280828
#define _DAT_00280828 (*(uint *)(0x280828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100073f0(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (((((param_1 != (char *)0x0) && (*param_1 != '\0')) && (_DAT_00280800 == 0x50414d57)) &&
      ((_DAT_00280804 != 0 && (0xb < _DAT_00280808)))) &&
     ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280828)();
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
                    /* WARNING: Could not recover jumptable at 0x10007480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_00280828)(&DAT_100080d6);
    return;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280828
#undef DAT_100080d6
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280828

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280844
#define DAT_00280844 (*(uint8_t *)(0x280844U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280844
#define _DAT_00280844 (*(uint *)(0x280844U))
#undef str_100080d9
#define str_100080d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x544U)))
#undef str_100080e7
#define str_100080e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x552U)))
#define local_78 (*(byte (*)[120])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007490(undefined8 param_1,uint *param_2)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;

  if (_DAT_00280800 != 0x50414d57) {
    return 0;
  }
LAB_10007505:
  local_78[0] = 0;
  if (_DAT_00280804 == 0) {
    return 0;
  }
  if (_DAT_00280808 < 0xc) {
    return 0;
  }
  if (_DAT_00280808 < 0x48) {
    return 0;
  }
  if ((code *)(ulong)_DAT_00280844 == (code *)0x0) {
    return 0;
  }
  iVar2 = (*(code *)(ulong)_DAT_00280844)(local_78,0x40,param_1,1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 != (uint *)0x0) {
    for (pbVar3 = local_78; (bVar1 = *pbVar3, bVar1 == 9 || (bVar1 == 0x20)); pbVar3 = pbVar3 + 1) {
    }
    if ((bVar1 == 0x30) && ((pbVar3[1] | 0x20) == 0x78)) {
      pbVar3 = pbVar3 + 2;
      uVar9 = 0x10;
    }
    else {
      uVar9 = 10;
    }
    lVar4 = 0;
    uVar7 = 0;
    pbVar5 = pbVar3;
    do {
      pbVar5 = pbVar5 + 1;
      bVar1 = pbVar3[lVar4];
      uVar8 = (ulong)bVar1;
      if ((uVar8 < 0x21) && ((0x100000201U >> (uVar8 & 0x3f) & 1) != 0)) goto LAB_10007647;
      if ((byte)(bVar1 - 0x30U) < 10) {
        uVar6 = (uint)(byte)(bVar1 - 0x30U);
      }
      else if ((byte)(bVar1 + 0x9f) < 6) {
        uVar6 = bVar1 - 0x57;
      }
      else {
        if (5 < (byte)(bVar1 + 0xbf)) break;
        uVar6 = bVar1 - 0x37;
      }
      if (((uint)uVar9 <= uVar6) || ((uint)(~uVar6 / uVar9) < uVar7)) break;
      uVar7 = uVar6 + uVar7 * (uint)uVar9;
      lVar4 = lVar4 + 1;
    } while( true );
  }
  goto LAB_100074e0;
LAB_10007647:
  while (((char)uVar8 == ' ' || ((int)uVar8 == 9))) {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar8 = (ulong)bVar1;
  }
  if ((((int)lVar4 != 0) && ((char)uVar8 == '\0')) && (*param_2 = uVar7, uVar7 - 1 < 0x20)) {
    return 1;
  }
LAB_100074e0:
  recovered_10007960(str_100080d9,str_100080e7);
  if (_DAT_00280800 != 0x50414d57) {
    return 0;
  }
  goto LAB_10007505;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280844
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280844
#undef str_100080d9
#undef str_100080e7
#undef local_78

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280844
#define DAT_00280844 (*(uint8_t *)(0x280844U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280844
#define _DAT_00280844 (*(uint *)(0x280844U))
#undef str_100080d9
#define str_100080d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x544U)))
#undef str_1000810f
#define str_1000810f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57aU)))
#define local_78 (*(byte *)(pf_stack_frame + 24))
#define local_77 (*(byte (*)[119])(pf_stack_frame + 25))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007690
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007690(undefined8 param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;

  if (_DAT_00280800 != 0x50414d57) {
    return 0;
  }
LAB_100076f9:
  local_78 = 0;
  if (_DAT_00280804 == 0) {
    return 0;
  }
  if (_DAT_00280808 < 0xc) {
    return 0;
  }
  if (_DAT_00280808 < 0x48) {
    return 0;
  }
  if ((code *)(ulong)_DAT_00280844 == (code *)0x0) {
    return 0;
  }
  iVar2 = (*(code *)(ulong)_DAT_00280844)(&local_78,0x40,param_1,1);
  if (iVar2 == 0) {
    return 0;
  }
  if (local_78 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_3 != (uint *)0x0) {
    pbVar3 = local_77;
    bVar1 = local_78;
    while ((pbVar3 = pbVar3 + 1, bVar1 == 9 || (bVar1 == 0x20))) {
      bVar1 = pbVar3[-1];
    }
    if ((bVar1 != 0x30) || (uVar6 = 0x10, (pbVar3[-1] | 0x20) != 0x78)) {
      pbVar3 = pbVar3 + -2;
      uVar6 = 10;
    }
    lVar4 = 0;
    uVar8 = 0;
    pbVar5 = pbVar3;
    do {
      pbVar5 = pbVar5 + 1;
      bVar1 = pbVar3[lVar4];
      uVar9 = (ulong)bVar1;
      if ((uVar9 < 0x21) && ((0x100000201U >> (uVar9 & 0x3f) & 1) != 0)) goto LAB_10007857;
      if ((byte)(bVar1 - 0x30U) < 10) {
        uVar7 = (uint)(byte)(bVar1 - 0x30U);
      }
      else if ((byte)(bVar1 + 0x9f) < 6) {
        uVar7 = bVar1 - 0x57;
      }
      else {
        if (5 < (byte)(bVar1 + 0xbf)) break;
        uVar7 = bVar1 - 0x37;
      }
      if (((uint)uVar6 <= uVar7) || ((uint)(~uVar7 / uVar6) < uVar8)) break;
      uVar8 = uVar7 + uVar8 * (uint)uVar6;
      lVar4 = lVar4 + 1;
    } while( true );
  }
  goto LAB_100076d0;
LAB_10007857:
  while (((char)uVar9 == ' ' || ((int)uVar9 == 9))) {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar9 = (ulong)bVar1;
  }
  if ((((int)lVar4 != 0) && ((char)uVar9 == '\0')) && (*param_3 = uVar8, uVar8 <= param_2)) {
    return 1;
  }
LAB_100076d0:
  recovered_10007960(str_100080d9,str_1000810f);
  if (_DAT_00280800 != 0x50414d57) {
    return 0;
  }
  goto LAB_100076f9;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280844
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280844
#undef str_100080d9
#undef str_1000810f
#undef local_78
#undef local_77

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280858
#define DAT_00280858 (*(uint8_t *)(0x280858U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280858
#define _DAT_00280858 (*(uint *)(0x280858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100078b0(char *path,void *image)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x5b < _DAT_00280808 && ((code *)(ulong)_DAT_00280858 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x100078f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(ulong)_DAT_00280858)(path,image);
    return iVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280858
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280858

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280958
#define DAT_00280958 (*(uint8_t *)(0x280958U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280958
#define _DAT_00280958 (*(uint *)(0x280958U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007900
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007900(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (0x15b < _DAT_00280808)) {
    if ((code *)(ulong)_DAT_00280958 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10007948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)_DAT_00280958)(param_1,0xa0);
      return;
    }
  }
  else if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280958
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280958

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_10007d07
#define DAT_10007d07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172U)))
#undef DAT_100080d6
#define DAT_100080d6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x541U)))
#undef DAT_10008150
#define DAT_10008150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bbU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280828
#define _DAT_00280828 (*(uint *)(0x280828U))
#undef str_10008139
#define str_10008139 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a4U)))
#undef str_10008149
#define str_10008149 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b4U)))
#define local_108 (*(char (*)[264])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007960(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  char *arg3;
  undefined *arg4;

  if (param_2 == (char *)0x0) {
    arg4 = &DAT_10007d07;
    param_2 = &DAT_10007d07;
  }
  else {
    arg4 = &DAT_10008150;
    if (*param_2 == '\0') {
      arg4 = &DAT_10007d07;
      param_2 = &DAT_10007d07;
    }
  }
  arg3 = str_10008149;
  if (param_1 != (char *)0x0) {
    arg3 = param_1;
  }
  recovered_100063f0(local_108,0x100,str_10008139,arg3,arg4,param_2);
  if (((((local_108[0] != '\0') && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
      ((0xb < _DAT_00280808 && (0x2b < _DAT_00280808)))) &&
     ((code *)(ulong)_DAT_00280828 != (code *)0x0)) {
    (*(code *)(ulong)_DAT_00280828)(local_108);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x2b < _DAT_00280808 && ((code *)(ulong)_DAT_00280828 != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_00280828)(&DAT_100080d6);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280828
#undef DAT_10007d07
#undef DAT_100080d6
#undef DAT_10008150
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280828
#undef str_10008139
#undef str_10008149
#undef local_108

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
 * Address: 0x10007a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10007a60(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10007aa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (*(code *)(ulong)_DAT_0028084c)(size);
    return (ulong)pvVar1;
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
#undef DAT_0028088c
#define DAT_0028088c (*(uint8_t *)(0x28088cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(uint *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028088c
#define _DAT_0028088c (*(uint *)(0x28088cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10007ab0(char *path)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uVar2 = _DAT_00280800;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
      (uVar2 = _DAT_00280808, 0xb < _DAT_00280808)) && (0x8f < _DAT_00280808)) {
    uVar2 = _DAT_0028088c;
    if ((code *)(ulong)_DAT_0028088c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10007af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)(ulong)_DAT_0028088c)(path);
      return iVar1;
    }
  }
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028088c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028088c

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
 * Address: 0x10007b00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10007b00(char *path,void *data,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x3b < _DAT_00280808 && ((code *)(ulong)_DAT_00280838 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10007b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(ulong)_DAT_00280838)(path,data,size);
    return iVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

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
 * Address: 0x10007b50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007b50(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10007b91. Too many branches */
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
