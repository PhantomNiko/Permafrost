/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1001c0f0
#define DAT_1001c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_1001c0f1
#define DAT_1001c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15c5U)))
#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004c0
 */

/* WARNING: Removing unreachable block (ram,0x100004fc) */

void recovered_100004c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1001c0f0 = 0;
    DAT_1001c0f1 = 0;
    recovered_10000520();
    DAT_1001c100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001c0f0
#undef DAT_1001c0f1
#undef DAT_1001c100

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
#undef DAT_1001c0f0
#define DAT_1001c0f0 (*(char *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_1001c0f8
#define DAT_1001c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15ccU)))
#undef DAT_1001c108
#define DAT_1001c108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15dcU)))
#undef _DAT_00280088
#define _DAT_00280088 (*(uint *)(0x280088U))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#undef _DAT_00280238
#define _DAT_00280238 (*(int *)(0x280238U))
#undef _DAT_0028023c
#define _DAT_0028023c (*(uint *)(0x28023cU))
#define local_438 (*(ulong (*)[130])(pf_stack_frame + 24))
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
  if (DAT_1001c0f0 != '\0') {
    return;
  }
  DAT_1001c0f8 = 0;
  DAT_1001c108 = 0;
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
      if (DAT_1001c0f8 != 0) goto LAB_100007f9;
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
  if (DAT_1001c108 == 0) {
    DAT_1001c108 = DAT_1001c0f8;
  }
  DAT_1001c0f0 = 1;
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
#undef DAT_1001c0f0
#undef DAT_1001c0f8
#undef DAT_1001c108
#undef _DAT_00280088
#undef _DAT_0028008c
#undef _DAT_00280238
#undef _DAT_0028023c
#undef local_438
#undef local_28

#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000830
 */

/* WARNING: Removing unreachable block (ram,0x1000086c) */

void recovered_10000830(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000880(param_1,param_2,param_3);
    DAT_1001c100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001c100

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1001c0f1
#define DAT_1001c0f1 (*(char *)(((uintptr_t)pf_module_state + 0x15c5U)))
#undef DAT_1001c0f8
#define DAT_1001c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15ccU)))
#undef DAT_1001c108
#define DAT_1001c108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x15dcU)))
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
  if ((bVar3) || (DAT_1001c0f1 != '\0')) {
    return false;
  }
  DAT_1001c0f1 = 1;
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
      DAT_1001c0f1 = 0;
      return false;
    }
    if (plVar6 <= plVar1) {
      DAT_1001c0f1 = 0;
      return false;
    }
    if (plVar1 < (long *)0x10000000 && (long *)0x8000000 < plVar6) {
      if (plVar1 < (long *)0x8000000) {
        uVar7 = 0x8000000 - (long)plVar1;
        if (~(ulong)plVar1 < uVar7) {
          DAT_1001c0f1 = 0;
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
        DAT_1001c0f1 = 0;
        return false;
      }
    }
    else {
      if ((long *)0xfffffffffffffff0 < plVar1) {
        DAT_1001c0f1 = 0;
        return false;
      }
      uVar10 = ((ulong)((long)plVar1 + 0xf) & 0xfffffffffffffff0) - (long)plVar1;
      uVar8 = uVar7 - uVar10;
      if (uVar7 < uVar10 || uVar8 == 0) {
        DAT_1001c0f1 = 0;
        return false;
      }
      if ((uVar8 & 0xfffffffffffffff0) < 0x31) {
        DAT_1001c0f1 = 0;
        return false;
      }
    }
    plVar2 = DAT_1001c0f8;
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
          DAT_1001c0f1 = 0;
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
        DAT_1001c0f1 = 0;
        return false;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == param_3) {
      puVar5 = (ulong *)&DAT_1001c0f8;
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
      if (DAT_1001c108 == (long *)0x0) {
        DAT_1001c108 = DAT_1001c0f8;
      }
      DAT_1001c0f1 = 0;
      return local_38 != uVar8;
    }
  } while( true );
}

#undef DAT_10000001
#undef DAT_1001c0f1
#undef DAT_1001c0f8
#undef DAT_1001c108
#undef local_38

#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
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

  iVar1 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    local_18 = param_1;
    local_10 = param_2;
    recovered_10000880((long)&local_18,(long)&local_10,1);
    DAT_1001c100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001c100
#undef local_18
#undef local_10

#undef DAT_1001c0f8
#define DAT_1001c0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x15ccU)))
#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
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

  iVar1 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000520();
  uVar4 = 0;
  for (plVar2 = DAT_1001c0f8; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      uVar4 = uVar4 + *plVar2;
    }
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_1001c100 = 0;
  return uVar3;
}

#undef DAT_1001c0f8
#undef DAT_1001c100

#undef DAT_1001c0f8
#define DAT_1001c0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x15ccU)))
#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
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

  iVar1 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000520();
  lVar2 = 0;
  for (plVar3 = DAT_1001c0f8; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    if ((char)plVar3[3] == '\x01') {
      lVar2 = lVar2 + *plVar3;
    }
  }
  DAT_1001c100 = 0;
  return lVar2;
}

#undef DAT_1001c0f8
#undef DAT_1001c100

#undef DAT_1001c0f8
#define DAT_1001c0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x15ccU)))
#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
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

  iVar2 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000520();
  uVar4 = 0;
  for (plVar1 = DAT_1001c0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar4 = uVar4 + *plVar1;
  }
  uVar3 = 0xffffffff;
  if (uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  DAT_1001c100 = 0;
  return uVar3;
}

#undef DAT_1001c0f8
#undef DAT_1001c100

#undef DAT_1001c0f8
#define DAT_1001c0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x15ccU)))
#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
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

  iVar2 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000520();
  lVar3 = 0;
  for (plVar1 = DAT_1001c0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar3 = lVar3 + *plVar1;
  }
  DAT_1001c100 = 0;
  return lVar3;
}

#undef DAT_1001c0f8
#undef DAT_1001c100

#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d20
 */

/* WARNING: Removing unreachable block (ram,0x10000d5c) */

ulong * recovered_10000d20(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    puVar2 = recovered_10000d80(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1001c100 = 0;
    return puVar2;
  }
  do {
  } while( true );
}

#undef DAT_1001c100

#undef DAT_1001c0f8
#define DAT_1001c0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x15ccU)))
#undef DAT_1001c108
#define DAT_1001c108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x15dcU)))
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
    puVar1 = DAT_1001c0f8;
    puVar5 = DAT_1001c108;
    if (DAT_1001c108 == (ulong *)0x0) {
      puVar5 = DAT_1001c0f8;
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
                          DAT_1001c108 = (ulong *)puVar3[1];
                        }
                        else {
                          DAT_1001c108 = (ulong *)((long)puVar3 + uVar9 + 0x20);
                          *(ulong *)((long)puVar3 + uVar9 + 0x20) = uVar8 - 0x20;
                          uVar11 = puVar3[1];
                          *(ulong *)((long)puVar3 + uVar9 + 0x28) = uVar11;
                          *(ulong **)((long)puVar3 + uVar9 + 0x30) = puVar3;
                          *(undefined1 *)((long)puVar3 + uVar9 + 0x38) = 1;
                          if (uVar11 != 0) {
                            *(ulong **)(uVar11 + 0x10) = DAT_1001c108;
                          }
                          *puVar3 = uVar9;
                          puVar3[1] = (ulong)DAT_1001c108;
                        }
                        *(undefined1 *)(puVar3 + 3) = 0;
                        if (DAT_1001c108 == (ulong *)0x0) {
                          DAT_1001c108 = DAT_1001c0f8;
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

#undef DAT_1001c0f8
#undef DAT_1001c108

#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f80
 */

/* WARNING: Removing unreachable block (ram,0x10000fbc) */

void recovered_10000f80(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000d80(param_1,(ulong *)0x0,param_2);
    DAT_1001c100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001c100

#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe0
 */

/* WARNING: Removing unreachable block (ram,0x1000101c) */

ulong * recovered_10000fe0(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
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
  DAT_1001c100 = 0;
  return puVar2;
}

#undef DAT_1001c100

#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001040
 */

/* WARNING: Removing unreachable block (ram,0x1000107c) */

void recovered_10001040(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001090(param_1);
    DAT_1001c100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001c100

#undef DAT_1001c108
#define DAT_1001c108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x15dcU)))
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
        if (DAT_1001c108 == puVar3) {
          DAT_1001c108 = puVar2;
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
          if (DAT_1001c108 == puVar2) {
            DAT_1001c108 = puVar3;
          }
          puVar1[2] = (ulong)puVar3;
          puVar2 = puVar1;
        } while ((char)puVar1[3] != '\0');
      }
      puVar2 = puVar3;
    }
    DAT_1001c108 = puVar2;
  }
  return;
}

#undef DAT_1001c108

#undef DAT_1001c100
#define DAT_1001c100 (*(int *)(((uintptr_t)pf_module_state + 0x15d4U)))
#undef DAT_1001c108
#define DAT_1001c108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x15dcU)))
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

  iVar7 = DAT_1001c100;
  { __typeof__(DAT_1001c100) pf_atomic_old = __atomic_exchange_n(&(DAT_1001c100),1,__ATOMIC_SEQ_CST);
}
  if (iVar7 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (ulong *)0x0) {
    puVar16 = recovered_10000d80(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1001c100 = 0;
    return puVar16;
  }
  if (param_2 == 0) {
    recovered_10001090((long)param_1);
    DAT_1001c100 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_1001c100 = 0;
    return (ulong *)0x0;
  }
  recovered_10000520();
  uVar12 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar16 = param_1 + -4;
  uVar11 = param_1[-4];
  if (uVar12 <= uVar11) {
    if (uVar11 <= uVar12 - 1) {
      DAT_1001c100 = 0;
      return (ulong *)0x0;
    }
    if (uVar11 - uVar12 < 0x30) {
      if (uVar11 < 0xffffffffffffffe0) {
        DAT_1001c100 = 0;
        return param_1;
      }
      DAT_1001c100 = 0;
      return (ulong *)0x0;
    }
    if (0xffffffffffffffb0 < param_2) {
      DAT_1001c100 = 0;
      return (ulong *)0x0;
    }
    DAT_1001c108 = (ulong *)((long)param_1 + uVar12);
    *(ulong *)((long)param_1 + uVar12) = (uVar11 - uVar12) - 0x20;
    uVar11 = param_1[-3];
    *(ulong *)((long)param_1 + uVar12 + 8) = uVar11;
    *(ulong **)((long)param_1 + uVar12 + 0x10) = puVar16;
    *(undefined1 *)((long)param_1 + uVar12 + 0x18) = 1;
    if (uVar11 != 0) {
      *(ulong **)(uVar11 + 0x10) = DAT_1001c108;
    }
    param_1[-4] = uVar12;
    param_1[-3] = (ulong)DAT_1001c108;
    DAT_1001c100 = 0;
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
      puVar14 = DAT_1001c108;
      do {
        if (((puVar8 == (ulong *)0x0) || ((char)puVar8[3] != '\x01')) ||
           ((0xffffffffffffffdf < uVar11 ||
            (((ulong *)((long)param_1 + uVar11) != puVar8 || (-uVar11 - 0x21 < *puVar8)))))) break;
        if (puVar14 == puVar8) {
          puVar14 = puVar16;
          DAT_1001c108 = puVar16;
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
        DAT_1001c100 = 0;
        return (ulong *)0x0;
      }
      uVar9 = recovered_100066e0(puVar16,uVar12);
      if ((char)uVar9 != '\0') {
        DAT_1001c108 = (ulong *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1001c100 = 0;
      return param_1;
    }
  }
  puVar8 = recovered_10000d80(uVar12,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  if (puVar8 == (ulong *)0x0) {
    DAT_1001c100 = 0;
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
  DAT_1001c100 = 0;
  return puVar8;
}

#undef DAT_1001c100
#undef DAT_1001c108

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


/* Native WMAP allocation callback; Pooka's Free Software License. */
void * recovered_10001bd0(unsigned long size){volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;if(api[0]==0x50414d57U && api[1] && api[2]>79 && api[19]){return ((void *(*)(unsigned long size))(uintptr_t)api[19])(size);}return 0;}


/* Native WMAP allocation callback; Pooka's Free Software License. */
void recovered_10001c20(void *pointer){volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;if(api[0]==0x50414d57U && api[1] && api[2]>83 && api[20]){((void(*)(void *pointer))(uintptr_t)api[20])(pointer);}return;}


/* Native WMAP allocation callback; Pooka's Free Software License. */
void * recovered_10001c70(void *pointer,unsigned long size){volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;if(api[0]==0x50414d57U && api[1] && api[2]>87 && api[21]){return ((void *(*)(void *pointer,unsigned long size))(uintptr_t)api[21])(pointer,size);}return 0;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

void * recovered_10001cc0(void *param_1,void *param_2,ulong param_3)

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

  pvVar5 = param_1;
  if (param_3 < 0x10) {
LAB_10001cdf:
    if (param_3 == 0) {
      return pvVar5;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)param_1 & 7) == 0) {
LAB_10001ece:
      puVar7 = param_1;
    }
    else {
      puVar7 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      uVar6 = param_3 - 1;
      uVar8 = (undefined7)((ulong)in_R8 >> 8);
      in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
      if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
        param_2 = (void *)((long)param_2 + 1);
        param_3 = uVar6;
      }
      else {
        puVar7 = (undefined8 *)((long)param_1 + 2);
        *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
        uVar6 = param_3 - 2;
        in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
        if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
          param_2 = (void *)((long)param_2 + 2);
          param_3 = uVar6;
        }
        else {
          puVar7 = (undefined8 *)((long)param_1 + 3);
          *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
          uVar6 = param_3 - 3;
          in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
          if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
            param_2 = (void *)((long)param_2 + 3);
            param_3 = uVar6;
          }
          else {
            puVar7 = (undefined8 *)((long)param_1 + 4);
            *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
            uVar6 = param_3 - 4;
            in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
            if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
              param_2 = (void *)((long)param_2 + 4);
              param_3 = uVar6;
            }
            else {
              puVar7 = (undefined8 *)((long)param_1 + 5);
              *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)((long)param_2 + 4);
              uVar6 = param_3 - 5;
              in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
              if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                param_2 = (void *)((long)param_2 + 5);
                param_3 = uVar6;
              }
              else {
                puVar7 = (undefined8 *)((long)param_1 + 6);
                *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
                uVar6 = param_3 - 6;
                in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                  param_2 = (void *)((long)param_2 + 6);
                  param_3 = uVar6;
                }
                else {
                  puVar7 = (undefined8 *)((long)param_1 + 7);
                  *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)((long)param_2 + 6);
                  uVar6 = param_3 - 7;
                  in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                  if (((ulong)puVar7 & 7) != 0 && uVar6 != 0) {
                    puVar1 = (undefined1 *)((long)param_2 + 7);
                    param_2 = (void *)((long)param_2 + 8);
                    *(undefined1 *)((long)param_1 + 7) = *puVar1;
                    param_3 = param_3 - 8;
                    param_1 = (undefined8 *)((long)param_1 + 8);
                    goto LAB_10001ece;
                  }
                  param_2 = (void *)((long)param_2 + 7);
                  param_3 = uVar6;
                }
              }
            }
          }
        }
      }
    }
    if (param_3 < 0x20) {
      in_R8 = param_2;
    }
    else {
      uVar6 = param_3 - 0x20;
      uVar9 = param_3;
      if ((uVar6 & 0x20) == 0) {
        *puVar7 = *(undefined8 *)param_2;
        puVar7[1] = *(undefined8 *)((long)param_2 + 8);
        puVar7[2] = *(undefined8 *)((long)param_2 + 0x10);
        puVar7[3] = *(undefined8 *)((long)param_2 + 0x18);
        puVar7 = puVar7 + 4;
        param_2 = (void *)((long)param_2 + 0x20);
        uVar9 = uVar6;
        in_R8 = param_2;
      }
      param_3 = uVar6;
      if (0x1f < uVar6) {
        do {
          *puVar7 = *(undefined8 *)param_2;
          puVar7[1] = *(undefined8 *)((long)param_2 + 8);
          puVar7[2] = *(undefined8 *)((long)param_2 + 0x10);
          puVar7[3] = *(undefined8 *)((long)param_2 + 0x18);
          puVar7[4] = *(undefined8 *)((long)param_2 + 0x20);
          puVar7[5] = *(undefined8 *)((long)param_2 + 0x28);
          puVar7[6] = *(undefined8 *)((long)param_2 + 0x30);
          puVar7[7] = *(undefined8 *)((long)param_2 + 0x38);
          puVar7 = puVar7 + 8;
          param_2 = (void *)((long)param_2 + 0x40);
          uVar9 = uVar9 - 0x40;
          param_3 = uVar9;
          in_R8 = param_2;
        } while (0x1f < uVar9);
      }
    }
    if (param_3 < 8) {
      param_2 = in_R8;
      param_1 = puVar7;
    }
    else {
      if ((0x27 < param_3 - 8) && (0x1f < (ulong)((long)puVar7 - (long)in_R8))) {
        uVar6 = (param_3 - 8 >> 3) + 1;
        uVar9 = uVar6 & 0xfffffffffffffffc;
        param_2 = in_R8 + uVar9;
        param_1 = puVar7 + uVar9;
        param_3 = param_3 + uVar9 * -8;
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
        in_R8 = param_2;
        puVar7 = param_1;
        if (uVar6 == uVar9) goto LAB_10001cdf;
      }
      do {
        param_2 = in_R8 + 1;
        *puVar7 = *in_R8;
        param_1 = puVar7 + 1;
        param_3 = param_3 - 8;
        in_R8 = param_2;
        puVar7 = param_1;
      } while (7 < param_3);
    }
    goto LAB_10001cdf;
  }
  uVar6 = param_3;
  if ((3 < param_3) && (0x1f < (ulong)((long)param_1 - (long)param_2))) {
    if (param_3 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_3 & 0xffffffffffffffe0;
      uVar6 = 0;
      do {
        uVar2 = ((undefined8 *)((long)param_2 + uVar6))[1];
        puVar7 = (undefined8 *)((long)param_2 + uVar6 + 0x10);
        uVar3 = *puVar7;
        uVar4 = puVar7[1];
        *(undefined8 *)((long)param_1 + uVar6) = *(undefined8 *)((long)param_2 + uVar6);
        ((undefined8 *)((long)param_1 + uVar6))[1] = uVar2;
        puVar7 = (undefined8 *)((long)param_1 + uVar6 + 0x10);
        *puVar7 = uVar3;
        puVar7[1] = uVar4;
        uVar6 = uVar6 + 0x20;
      } while (uVar9 != uVar6);
      if (param_3 == uVar9) {
        return pvVar5;
      }
      if ((param_3 & 0x1c) == 0) {
        param_2 = (void *)((long)param_2 + uVar9);
        param_1 = (void *)((long)param_1 + uVar9);
        uVar6 = (ulong)((uint)param_3 & 0x1f);
        goto LAB_10001ef0;
      }
    }
    uVar10 = param_3 & 0xfffffffffffffffc;
    uVar6 = (ulong)((uint)param_3 & 3);
    do {
      *(undefined4 *)((long)param_1 + uVar9) = *(undefined4 *)((long)param_2 + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar10 != uVar9);
    param_1 = (undefined8 *)((long)param_1 + uVar10);
    param_2 = (undefined8 *)((long)param_2 + uVar10);
    if (param_3 == uVar10) {
      return pvVar5;
    }
  }
LAB_10001ef0:
  uVar9 = uVar6 - 1;
  if ((uVar6 & 7) != 0) {
    uVar10 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar10) = *(undefined1 *)((long)param_2 + uVar10);
      uVar10 = uVar10 + 1;
    } while ((uVar6 & 7) != uVar10);
    uVar6 = uVar6 - uVar10;
    param_1 = (void *)((long)param_1 + uVar10);
    param_2 = (void *)((long)param_2 + uVar10);
  }
  if (6 < uVar9) {
    uVar9 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar9) = *(undefined1 *)((long)param_2 + uVar9);
      *(undefined1 *)((long)param_1 + uVar9 + 1) = *(undefined1 *)((long)param_2 + uVar9 + 1);
      *(undefined1 *)((long)param_1 + uVar9 + 2) = *(undefined1 *)((long)param_2 + uVar9 + 2);
      *(undefined1 *)((long)param_1 + uVar9 + 3) = *(undefined1 *)((long)param_2 + uVar9 + 3);
      *(undefined1 *)((long)param_1 + uVar9 + 4) = *(undefined1 *)((long)param_2 + uVar9 + 4);
      *(undefined1 *)((long)param_1 + uVar9 + 5) = *(undefined1 *)((long)param_2 + uVar9 + 5);
      *(undefined1 *)((long)param_1 + uVar9 + 6) = *(undefined1 *)((long)param_2 + uVar9 + 6);
      *(undefined1 *)((long)param_1 + uVar9 + 7) = *(undefined1 *)((long)param_2 + uVar9 + 7);
      uVar9 = uVar9 + 8;
    } while (uVar6 != uVar9);
  }
  return pvVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002100
 */

void * recovered_10002100(void *param_1,void *param_2,ulong param_3)

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

  pvVar6 = param_1;
  if (param_3 == 0 || param_1 == param_2) {
    return pvVar6;
  }
  if ((param_1 < param_2) || (pvVar7 = (void *)((long)param_2 + param_3), pvVar7 <= param_1)) {
    if ((0xf < param_3) && ((((uint)param_2 ^ (uint)param_1) & 7) == 0)) {
      if (((ulong)param_1 & 7) == 0) {
LAB_1000249a:
        puVar8 = param_1;
      }
      else {
        puVar8 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar11 = param_3 - 1;
        uVar14 = (undefined7)((ulong)in_R8 >> 8);
        in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
        if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
          param_2 = (void *)((long)param_2 + 1);
          param_3 = uVar11;
        }
        else {
          puVar8 = (undefined8 *)((long)param_1 + 2);
          *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
          uVar11 = param_3 - 2;
          in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
          if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
            param_2 = (void *)((long)param_2 + 2);
            param_3 = uVar11;
          }
          else {
            puVar8 = (undefined8 *)((long)param_1 + 3);
            *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
            uVar11 = param_3 - 3;
            in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
            if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
              param_2 = (void *)((long)param_2 + 3);
              param_3 = uVar11;
            }
            else {
              puVar8 = (undefined8 *)((long)param_1 + 4);
              *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
              uVar11 = param_3 - 4;
              in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
              if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                param_2 = (void *)((long)param_2 + 4);
                param_3 = uVar11;
              }
              else {
                puVar8 = (undefined8 *)((long)param_1 + 5);
                *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)((long)param_2 + 4);
                uVar11 = param_3 - 5;
                in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                  param_2 = (void *)((long)param_2 + 5);
                  param_3 = uVar11;
                }
                else {
                  puVar8 = (undefined8 *)((long)param_1 + 6);
                  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
                  uVar11 = param_3 - 6;
                  in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                  if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                    param_2 = (void *)((long)param_2 + 6);
                    param_3 = uVar11;
                  }
                  else {
                    puVar8 = (undefined8 *)((long)param_1 + 7);
                    *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)((long)param_2 + 6);
                    uVar11 = param_3 - 7;
                    in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                    if (((ulong)puVar8 & 7) != 0 && uVar11 != 0) {
                      puVar1 = (undefined1 *)((long)param_2 + 7);
                      param_2 = (void *)((long)param_2 + 8);
                      *(undefined1 *)((long)param_1 + 7) = *puVar1;
                      param_3 = param_3 - 8;
                      param_1 = (undefined8 *)((long)param_1 + 8);
                      goto LAB_1000249a;
                    }
                    param_2 = (void *)((long)param_2 + 7);
                    param_3 = uVar11;
                  }
                }
              }
            }
          }
        }
      }
      if (param_3 < 0x20) {
        in_R8 = param_2;
      }
      else {
        uVar11 = param_3 - 0x20;
        uVar16 = param_3;
        if ((uVar11 & 0x20) == 0) {
          *puVar8 = *(undefined8 *)param_2;
          puVar8[1] = *(undefined8 *)((long)param_2 + 8);
          puVar8[2] = *(undefined8 *)((long)param_2 + 0x10);
          puVar8[3] = *(undefined8 *)((long)param_2 + 0x18);
          puVar8 = puVar8 + 4;
          param_2 = (void *)((long)param_2 + 0x20);
          uVar16 = uVar11;
          in_R8 = param_2;
        }
        param_3 = uVar11;
        if (0x1f < uVar11) {
          param_3 = uVar16;
          do {
            *puVar8 = *(undefined8 *)param_2;
            puVar8[1] = *(undefined8 *)((long)param_2 + 8);
            puVar8[2] = *(undefined8 *)((long)param_2 + 0x10);
            puVar8[3] = *(undefined8 *)((long)param_2 + 0x18);
            puVar8[4] = *(undefined8 *)((long)param_2 + 0x20);
            puVar8[5] = *(undefined8 *)((long)param_2 + 0x28);
            puVar8[6] = *(undefined8 *)((long)param_2 + 0x30);
            puVar8[7] = *(undefined8 *)((long)param_2 + 0x38);
            puVar8 = puVar8 + 8;
            param_2 = (void *)((long)param_2 + 0x40);
            param_3 = param_3 - 0x40;
            in_R8 = param_2;
          } while (0x1f < param_3);
        }
      }
      if (param_3 < 8) {
        param_2 = in_R8;
        param_1 = puVar8;
      }
      else {
        if ((0x27 < param_3 - 8) && (0x1f < (ulong)((long)puVar8 - (long)in_R8))) {
          uVar11 = (param_3 - 8 >> 3) + 1;
          uVar16 = uVar11 & 0xfffffffffffffffc;
          param_2 = in_R8 + uVar16;
          param_1 = puVar8 + uVar16;
          param_3 = param_3 + uVar16 * -8;
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
          in_R8 = param_2;
          puVar8 = param_1;
          if (uVar11 == uVar16) goto LAB_100026f8;
        }
        do {
          uVar3 = *in_R8;
          in_R8 = in_R8 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
          param_3 = param_3 - 8;
          param_2 = in_R8;
          param_1 = puVar8;
        } while (7 < param_3);
      }
LAB_100026f8:
      if (param_3 == 0) {
        return pvVar6;
      }
    }
    uVar11 = param_3;
    if ((3 < param_3) && (0x1f < (ulong)((long)param_1 - (long)param_2))) {
      if (param_3 < 0x20) {
        uVar16 = 0;
      }
      else {
        uVar16 = param_3 & 0xffffffffffffffe0;
        uVar11 = 0;
        do {
          uVar3 = ((undefined8 *)((long)param_2 + uVar11))[1];
          puVar8 = (undefined8 *)((long)param_2 + uVar11 + 0x10);
          uVar4 = *puVar8;
          uVar5 = puVar8[1];
          *(undefined8 *)((long)param_1 + uVar11) = *(undefined8 *)((long)param_2 + uVar11);
          ((undefined8 *)((long)param_1 + uVar11))[1] = uVar3;
          puVar8 = (undefined8 *)((long)param_1 + uVar11 + 0x10);
          *puVar8 = uVar4;
          puVar8[1] = uVar5;
          uVar11 = uVar11 + 0x20;
        } while (uVar16 != uVar11);
        if (param_3 == uVar16) {
          return pvVar6;
        }
        if ((param_3 & 0x1c) == 0) {
          param_2 = (void *)((long)param_2 + uVar16);
          param_1 = (void *)((long)param_1 + uVar16);
          uVar11 = (ulong)((uint)param_3 & 0x1f);
          goto LAB_100024bc;
        }
      }
      uVar12 = param_3 & 0xfffffffffffffffc;
      uVar11 = (ulong)((uint)param_3 & 3);
      do {
        *(undefined4 *)((long)param_1 + uVar16) = *(undefined4 *)((long)param_2 + uVar16);
        uVar16 = uVar16 + 4;
      } while (uVar12 != uVar16);
      param_1 = (undefined8 *)((long)param_1 + uVar12);
      param_2 = (undefined8 *)((long)param_2 + uVar12);
      if (param_3 == uVar12) {
        return pvVar6;
      }
    }
LAB_100024bc:
    uVar16 = uVar11 - 1;
    if ((uVar11 & 7) != 0) {
      uVar12 = 0;
      do {
        *(undefined1 *)((long)param_1 + uVar12) = *(undefined1 *)((long)param_2 + uVar12);
        uVar12 = uVar12 + 1;
      } while ((uVar11 & 7) != uVar12);
      uVar11 = uVar11 - uVar12;
      param_1 = (void *)((long)param_1 + uVar12);
      param_2 = (void *)((long)param_2 + uVar12);
    }
    if (uVar16 < 7) {
      return pvVar6;
    }
    uVar16 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar16) = *(undefined1 *)((long)param_2 + uVar16);
      *(undefined1 *)((long)param_1 + uVar16 + 1) = *(undefined1 *)((long)param_2 + uVar16 + 1);
      *(undefined1 *)((long)param_1 + uVar16 + 2) = *(undefined1 *)((long)param_2 + uVar16 + 2);
      *(undefined1 *)((long)param_1 + uVar16 + 3) = *(undefined1 *)((long)param_2 + uVar16 + 3);
      *(undefined1 *)((long)param_1 + uVar16 + 4) = *(undefined1 *)((long)param_2 + uVar16 + 4);
      *(undefined1 *)((long)param_1 + uVar16 + 5) = *(undefined1 *)((long)param_2 + uVar16 + 5);
      *(undefined1 *)((long)param_1 + uVar16 + 6) = *(undefined1 *)((long)param_2 + uVar16 + 6);
      *(undefined1 *)((long)param_1 + uVar16 + 7) = *(undefined1 *)((long)param_2 + uVar16 + 7);
      uVar16 = uVar16 + 8;
    } while (uVar11 != uVar16);
    return pvVar6;
  }
  uVar11 = (long)param_1 + param_3;
  if ((0xf < param_3) && ((((uint)pvVar7 ^ (uint)uVar11) & 7) == 0)) {
    if ((uVar11 & 7) == 0) {
LAB_1000228e:
      uVar16 = uVar11;
    }
    else {
      uVar16 = uVar11 - 1;
      *(undefined1 *)(uVar11 - 1) = *(undefined1 *)((long)pvVar7 - 1);
      uVar12 = param_3 - 1;
      uVar14 = (undefined7)(in_R9 >> 8);
      in_R9 = CONCAT71(uVar14,uVar12 == 0);
      uVar17 = (undefined7)((ulong)in_R10 >> 8);
      bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
      in_R10 = (void *)CONCAT71(uVar17,bVar15);
      if (bVar15) {
        pvVar7 = (void *)((long)pvVar7 - 1);
        param_3 = uVar12;
      }
      else {
        uVar16 = uVar11 - 2;
        *(undefined1 *)(uVar11 - 2) = *(undefined1 *)((long)pvVar7 - 2);
        uVar12 = param_3 - 2;
        in_R9 = CONCAT71(uVar14,uVar12 == 0);
        bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
        in_R10 = (void *)CONCAT71(uVar17,bVar15);
        if (bVar15) {
          pvVar7 = (void *)((long)pvVar7 - 2);
          param_3 = uVar12;
        }
        else {
          uVar16 = uVar11 - 3;
          *(undefined1 *)(uVar11 - 3) = *(undefined1 *)((long)pvVar7 - 3);
          uVar12 = param_3 - 3;
          in_R9 = CONCAT71(uVar14,uVar12 == 0);
          bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
          in_R10 = (void *)CONCAT71(uVar17,bVar15);
          if (bVar15) {
            pvVar7 = (void *)((long)pvVar7 - 3);
            param_3 = uVar12;
          }
          else {
            uVar16 = uVar11 - 4;
            *(undefined1 *)(uVar11 - 4) = *(undefined1 *)((long)pvVar7 - 4);
            uVar12 = param_3 - 4;
            in_R9 = CONCAT71(uVar14,uVar12 == 0);
            bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
            in_R10 = (void *)CONCAT71(uVar17,bVar15);
            if (bVar15) {
              pvVar7 = (void *)((long)pvVar7 - 4);
              param_3 = uVar12;
            }
            else {
              uVar16 = uVar11 - 5;
              *(undefined1 *)(uVar11 - 5) = *(undefined1 *)((long)pvVar7 - 5);
              uVar12 = param_3 - 5;
              in_R9 = CONCAT71(uVar14,uVar12 == 0);
              bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
              in_R10 = (void *)CONCAT71(uVar17,bVar15);
              if (bVar15) {
                pvVar7 = (void *)((long)pvVar7 - 5);
                param_3 = uVar12;
              }
              else {
                uVar16 = uVar11 - 6;
                *(undefined1 *)(uVar11 - 6) = *(undefined1 *)((long)pvVar7 - 6);
                uVar12 = param_3 - 6;
                in_R9 = CONCAT71(uVar14,uVar12 == 0);
                bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
                in_R10 = (void *)CONCAT71(uVar17,bVar15);
                if (bVar15) {
                  pvVar7 = (void *)((long)pvVar7 - 6);
                  param_3 = uVar12;
                }
                else {
                  uVar16 = uVar11 - 7;
                  *(undefined1 *)(uVar11 - 7) = *(undefined1 *)((long)pvVar7 - 7);
                  bVar15 = param_3 - 7 == 0;
                  in_R9 = CONCAT71(uVar14,bVar15);
                  bVar18 = (uVar16 & 7) == 0;
                  in_R10 = (void *)CONCAT71(uVar17,bVar18 || bVar15);
                  if (!bVar18 && !bVar15) {
                    puVar1 = (undefined1 *)((long)pvVar7 - 8);
                    pvVar7 = (void *)((long)pvVar7 - 8);
                    *(undefined1 *)(uVar11 - 8) = *puVar1;
                    uVar11 = uVar11 - 8;
                    param_3 = param_3 - 8;
                    goto LAB_1000228e;
                  }
                  pvVar7 = (void *)((long)pvVar7 - 7);
                  param_3 = param_3 - 7;
                }
              }
            }
          }
        }
      }
    }
    if (param_3 < 0x20) {
      in_R10 = pvVar7;
    }
    else {
      uVar11 = param_3 - 0x20;
      pvVar9 = pvVar7;
      uVar12 = uVar16;
      uVar13 = param_3;
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
      param_3 = uVar11;
      if (0x1f < uVar11) {
        param_3 = uVar13;
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
          param_3 = param_3 - 0x40;
          pvVar9 = in_R10;
          uVar12 = uVar16;
        } while (0x1f < param_3);
      }
    }
    if (param_3 < 8) {
      pvVar7 = in_R10;
      uVar11 = uVar16;
    }
    else {
      if ((0x27 < param_3 - 8) && (0x1f < (long)in_R10 - uVar16)) {
        uVar12 = (param_3 - 8 >> 3) + 1;
        uVar13 = uVar12 & 0xfffffffffffffffc;
        pvVar7 = (void *)((long)in_R10 + uVar13 * -8);
        uVar11 = uVar16 + uVar13 * -8;
        param_3 = param_3 + uVar13 * -8;
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
        if (uVar12 == uVar13) goto LAB_1000285a;
      }
      do {
        puVar8 = (undefined8 *)((long)in_R10 - 8);
        in_R10 = (void *)((long)in_R10 - 8);
        *(undefined8 *)(uVar16 - 8) = *puVar8;
        uVar16 = uVar16 - 8;
        param_3 = param_3 - 8;
        pvVar7 = in_R10;
        uVar11 = uVar16;
      } while (7 < param_3);
    }
LAB_1000285a:
    if (param_3 == 0) {
      return pvVar6;
    }
  }
  if ((3 < param_3) && (0xf < (long)pvVar7 - uVar11)) {
    if (param_3 < 0x10) {
      uVar16 = 0;
    }
    else {
      uVar16 = param_3 & 0xfffffffffffffff0;
      lVar10 = 0;
      do {
        puVar8 = (undefined8 *)((long)pvVar7 + lVar10 + -0x10);
        uVar3 = puVar8[1];
        puVar2 = (undefined8 *)((uVar11 - 0x10) + lVar10);
        *puVar2 = *puVar8;
        puVar2[1] = uVar3;
        lVar10 = lVar10 + -0x10;
      } while (-lVar10 != uVar16);
      if (param_3 == uVar16) {
        return pvVar6;
      }
      if ((param_3 & 0xc) == 0) {
        param_3 = (ulong)((uint)param_3 & 0xf);
        uVar11 = uVar11 - uVar16;
        pvVar7 = (void *)((long)pvVar7 - uVar16);
        goto LAB_1000291f;
      }
    }
    uVar12 = param_3 & 0xfffffffffffffffc;
    lVar10 = -uVar16;
    do {
      *(undefined4 *)((uVar11 - 4) + lVar10) = *(undefined4 *)((long)pvVar7 + lVar10 + -4);
      lVar10 = lVar10 + -4;
    } while (-lVar10 != uVar12);
    bVar15 = param_3 == uVar12;
    pvVar7 = (void *)((long)pvVar7 - uVar12);
    uVar11 = uVar11 - uVar12;
    param_3 = (ulong)((uint)param_3 & 3);
    if (bVar15) {
      return pvVar6;
    }
  }
LAB_1000291f:
  uVar16 = param_3 - 1;
  if ((param_3 & 7) != 0) {
    uVar12 = 0;
    do {
      puVar1 = (undefined1 *)((long)pvVar7 - 1);
      pvVar7 = (void *)((long)pvVar7 - 1);
      *(undefined1 *)(uVar11 - 1) = *puVar1;
      uVar11 = uVar11 - 1;
      uVar12 = uVar12 + 1;
    } while ((param_3 & 7) != uVar12);
    param_3 = param_3 - uVar12;
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
    } while (-lVar10 != param_3);
  }
  return pvVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c0
 */

void * recovered_100029c0(void *param_1,int param_2,ulong param_3)

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

  pvVar3 = param_1;
  uVar8 = (undefined1)param_2;
  if (0xf < param_3) {
    iVar4 = (param_2 & 0xffU) * 0x1010101;
    if (((ulong)param_1 & 7) == 0) {
LAB_10002b0d:
      puVar9 = param_1;
      uVar6 = param_3;
    }
    else {
      *(undefined1 *)param_1 = uVar8;
      puVar9 = (undefined8 *)((long)param_1 + 1U);
      uVar6 = param_3 - 1;
      if (((long)param_1 + 1U & 7) != 0 && param_3 - 1 != 0) {
        *(undefined1 *)((long)param_1 + 1) = uVar8;
        puVar9 = (undefined8 *)((long)param_1 + 2U);
        uVar6 = param_3 - 2;
        if (((long)param_1 + 2U & 7) != 0 && param_3 - 2 != 0) {
          *(undefined1 *)((long)param_1 + 2) = uVar8;
          puVar9 = (undefined8 *)((long)param_1 + 3U);
          uVar6 = param_3 - 3;
          if (((long)param_1 + 3U & 7) != 0 && param_3 - 3 != 0) {
            *(undefined1 *)((long)param_1 + 3) = uVar8;
            puVar9 = (undefined8 *)((long)param_1 + 4U);
            uVar6 = param_3 - 4;
            if (((long)param_1 + 4U & 7) != 0 && param_3 - 4 != 0) {
              *(undefined1 *)((long)param_1 + 4) = uVar8;
              puVar9 = (undefined8 *)((long)param_1 + 5U);
              uVar6 = param_3 - 5;
              if (((long)param_1 + 5U & 7) != 0 && param_3 - 5 != 0) {
                *(undefined1 *)((long)param_1 + 5) = uVar8;
                puVar9 = (undefined8 *)((long)param_1 + 6U);
                uVar6 = param_3 - 6;
                if (((long)param_1 + 6U & 7) != 0 && param_3 - 6 != 0) {
                  *(undefined1 *)((long)param_1 + 6) = uVar8;
                  puVar9 = (undefined8 *)((long)param_1 + 7U);
                  uVar6 = param_3 - 7;
                  if (((long)param_1 + 7U & 7) != 0 && param_3 - 7 != 0) {
                    *(undefined1 *)((long)param_1 + 7) = uVar8;
                    param_3 = param_3 - 8;
                    param_1 = (undefined8 *)((long)param_1 + 8);
                    goto LAB_10002b0d;
                  }
                }
              }
            }
          }
        }
      }
    }
    param_3 = uVar6;
    uVar5 = CONCAT44(iVar4,iVar4);
    if (0x1f < param_3) {
      uVar6 = param_3 - 0x20;
      uVar7 = ((uint)(uVar6 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar7 == 0) {
        uVar10 = param_3;
        param_3 = 0;
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
        uVar10 = param_3 - uVar10;
        param_3 = uVar10;
      }
      if (0x5f < uVar6) {
        param_3 = uVar10;
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
          param_3 = param_3 - 0x80;
        } while (0x1f < param_3);
      }
    }
    param_1 = puVar9;
    if (7 < param_3) {
      if (0x17 < param_3 - 8) {
        uVar6 = (param_3 - 8 >> 3) + 1;
        uVar10 = uVar6 & 0xfffffffffffffffc;
        param_1 = puVar9 + uVar10;
        param_3 = param_3 + uVar10 * -8;
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
        if (uVar6 == uVar10) goto LAB_10002c41;
      }
      do {
        *(undefined8 *)param_1 = uVar5;
        param_1 = (void *)((long)param_1 + 8);
        param_3 = param_3 - 8;
      } while (7 < param_3);
    }
  }
LAB_10002c41:
  if (param_3 == 0) {
    return pvVar3;
  }
  if (param_3 < 4) {
LAB_10002c50:
    uVar10 = param_3;
    puVar9 = param_1;
  }
  else {
    if (param_3 < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_3 & 0xffffffffffffffe0;
      auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
      uVar12 = PF_PART4(auVar13, 0);
      uVar10 = 0;
      do {
        puVar2 = (undefined4 *)((long)param_1 + uVar10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        puVar2 = (undefined4 *)((long)param_1 + uVar10 + 0x10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        uVar10 = uVar10 + 0x20;
      } while (uVar6 != uVar10);
      if (param_3 == uVar6) {
        return pvVar3;
      }
      if ((param_3 & 0x1c) == 0) {
        param_1 = (void *)((long)param_1 + uVar6);
        param_3 = (ulong)((uint)param_3 & 0x1f);
        goto LAB_10002c50;
      }
    }
    uVar11 = param_3 & 0xfffffffffffffffc;
    uVar10 = (ulong)((uint)param_3 & 3);
    puVar9 = (undefined8 *)((long)param_1 + uVar11);
    auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
    do {
      *(int *)((long)param_1 + uVar6) = PF_PART4(auVar13, 0);
      uVar6 = uVar6 + 4;
    } while (uVar11 != uVar6);
    if (param_3 == uVar11) {
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
 * Address: 0x10002d10
 */

void recovered_10002d10(long param_1,ulong param_2)

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
        if (uVar2 == uVar5) goto LAB_10002f35;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar1 = uVar1 - 8;
        puVar4 = puVar6;
      } while (7 < uVar1);
    }
  }
LAB_10002f35:
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
        goto LAB_10002fb6;
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
LAB_10002fb6:
  uVar1 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar2 != uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fe0
 */

void recovered_10002fe0(long param_1,ulong param_2)

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
        if (uVar2 == uVar5) goto LAB_10003205;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar1 = uVar1 - 8;
        puVar4 = puVar6;
      } while (7 < uVar1);
    }
  }
LAB_10003205:
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
        goto LAB_10003286;
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
LAB_10003286:
  uVar1 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar2 != uVar1);
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

int recovered_100032e0(long param_1,long param_2,long param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) goto LAB_10003513;
    uVar11 = param_3;
    puVar8 = (ulong *)param_2;
    puVar10 = (ulong *)param_1;
    if ((param_1 & 7U) != 0) {
      bVar1 = *(byte *)param_1;
      bVar5 = *(byte *)param_2;
      if (bVar1 != bVar5) {
LAB_10003473:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_100035c8:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)(param_1 + 1);
      puVar8 = (ulong *)(param_2 + 1);
      uVar11 = param_3 - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10003473;
        puVar10 = (ulong *)(param_1 + 2);
        puVar8 = (ulong *)(param_2 + 2);
        uVar11 = param_3 - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10003473;
          puVar10 = (ulong *)(param_1 + 3);
          puVar8 = (ulong *)(param_2 + 3);
          uVar11 = param_3 - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10003473;
            puVar10 = (ulong *)(param_1 + 4);
            puVar8 = (ulong *)(param_2 + 4);
            uVar11 = param_3 - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10003473;
              puVar10 = (ulong *)(param_1 + 5);
              puVar8 = (ulong *)(param_2 + 5);
              uVar11 = param_3 - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10003473;
                puVar10 = (ulong *)(param_1 + 6);
                puVar8 = (ulong *)(param_2 + 6);
                uVar11 = param_3 - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10003473;
                  puVar10 = (ulong *)(param_1 + 7);
                  puVar8 = (ulong *)(param_2 + 7);
                  uVar11 = param_3 - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10003473;
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
    for (; 7 < (ulong)param_3; param_3 = param_3 - 8) {
      if (*(ulong *)param_1 != *(ulong *)param_2) {
        iVar3 = recovered_100035e0((byte *)param_1,(byte *)param_2);
        return iVar3;
      }
      param_2 = (long)(param_2 + 8);
      param_1 = (long)(param_1 + 8);
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10003513:
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

uchar recovered_10003650(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003670
 */

uchar recovered_10003670(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003690
 */

uchar recovered_10003690(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036b0
 */

uchar recovered_100036b0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036e0
 */

uchar recovered_100036e0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003700
 */

uchar recovered_10003700(int param_1)

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

ulong recovered_10003760(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffffffffffff;
  do {
    uVar1 = uVar3 + 1;
    lVar2 = uVar3 + 1;
    uVar3 = uVar1;
  } while (param_1[lVar2] != '\0');
  return uVar1;
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
 * Address: 0x10003830
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_10003830(long param_1)

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
LAB_100038d9:
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
        if (uVar5 == uVar10) goto LAB_100038d9;
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
    goto LAB_100038d9;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - param_1) < 0x20)) {
LAB_10003bf8:
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
        goto LAB_10003bf8;
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


#undef DAT_1001b0a0
#define DAT_1001b0a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x574U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e70
 */

undefined * recovered_10003e70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1001b0a0;
}

#undef DAT_1001b0a0

#undef PTR_DAT_1001c000
#define PTR_DAT_1001c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x14d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e80
 */

undefined ** recovered_10003e80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1001c000;
}

#undef PTR_DAT_1001c000

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
#define local_28 (*(undefined1 (*)[8])(pf_stack_frame + 24))
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003e90(undefined8 *param_1)

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

#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
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
          param_1 = param_1 * DAT_1001ab30;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1001ab30 * DAT_1001ab30 * DAT_1001ab30 * DAT_1001ab30 *
                    DAT_1001ab30 * DAT_1001ab30 * DAT_1001ab30 * DAT_1001ab30;
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

#undef DAT_1001ab30

#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001abb0
#define DAT_1001abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_1001abb0
#define _DAT_1001abb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004060(double param_1,int *param_2)

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
  dVar2 = (double)(_DAT_1001abb0 ^ (ulong)param_1);
  if ((double)(_DAT_1001abb0 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  uVar1 = 0;
  if (DAT_1001ab38 <= dVar2) {
    uVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1001ab30;
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (DAT_1001ab38 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1001ab30)); dVar2 = dVar2 + dVar2) {
    uVar1 = (ulong)((int)uVar1 - 1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)uVar1;
  }
  return uVar1;
}

#undef DAT_1001ab30
#undef DAT_1001ab38
#undef DAT_1001abb0
#undef _DAT_1001abb0

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


#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
      return DAT_1001ab38;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1001ab38;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1001ab38 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1001ab38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041e0
 */

ulong recovered_100041e0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (ulong)((int)param_1 - 1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004210
 */

ulong recovered_10004210(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (ulong)((int)param_1 - 1);
}


#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
    if (param_1 <= DAT_1001ab38) {
      dVar1 = DAT_1001ab38;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001ab30;
  }
  return dVar1;
}

#undef DAT_1001ab30
#undef DAT_1001ab38

#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ab40
#define DAT_1001ab40 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1001ab48
#define DAT_1001ab48 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1001ab50
#define DAT_1001ab50 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1001ab58
#define DAT_1001ab58 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1001ab60
#define DAT_1001ab60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1001ab68
#define DAT_1001ab68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1001abc0
#define DAT_1001abc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_1001abd0
#define DAT_1001abd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef DAT_1001abe0
#define DAT_1001abe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef DAT_1001abf0
#define DAT_1001abf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef _DAT_1001ab60
#define _DAT_1001ab60 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_1001ab68
#define _DAT_1001ab68 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_1001abc0
#define _DAT_1001abc0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x94U)))
#undef _DAT_1001abd0
#define _DAT_1001abd0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef _DAT_1001abe0
#define _DAT_1001abe0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef _DAT_1001abf0
#define _DAT_1001abf0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc4U)))
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
    if (DAT_1001ab48 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1001ab30;
        iVar1 = iVar1 + 1;
      } while (DAT_1001ab48 < param_1);
    }
    for (; param_1 < DAT_1001ab50; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1001ab58 + param_1) / (param_1 + DAT_1001ab38);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1001abc0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1001abd0);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1001abe0);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1001abf0);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1001ab60 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1001ab68;
  }
  return DAT_1001ab40;
}

#undef DAT_1001ab30
#undef DAT_1001ab38
#undef DAT_1001ab40
#undef DAT_1001ab48
#undef DAT_1001ab50
#undef DAT_1001ab58
#undef DAT_1001ab60
#undef DAT_1001ab68
#undef DAT_1001abc0
#undef DAT_1001abd0
#undef DAT_1001abe0
#undef DAT_1001abf0
#undef _DAT_1001ab60
#undef _DAT_1001ab68
#undef _DAT_1001abc0
#undef _DAT_1001abd0
#undef _DAT_1001abe0
#undef _DAT_1001abf0

#undef DAT_1001ac00
#define DAT_1001ac00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004570
 */

long recovered_10004570(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1001ac00 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1001ac00

#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ab70
#define DAT_1001ab70 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1001ab78
#define DAT_1001ab78 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1001ab80
#define DAT_1001ab80 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1001ab88
#define DAT_1001ab88 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1001ab90
#define DAT_1001ab90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1001ac10
#define DAT_1001ac10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef _DAT_1001ab90
#define _DAT_1001ab90 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_1001ac10
#define _DAT_1001ac10 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100045a0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1001ab70 < param_1; param_1 = param_1 + DAT_1001ab78) {
  }
  for (; param_1 < DAT_1001ab80; param_1 = param_1 + DAT_1001ab88) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1001ac10);
  return ((dVar1 / _DAT_1001ab90 + DAT_1001ab38 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1001ab38
#undef DAT_1001ab70
#undef DAT_1001ab78
#undef DAT_1001ab80
#undef DAT_1001ab88
#undef DAT_1001ab90
#undef DAT_1001ac10
#undef _DAT_1001ab90
#undef _DAT_1001ac10

#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ab70
#define DAT_1001ab70 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1001ab78
#define DAT_1001ab78 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1001ab80
#define DAT_1001ab80 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1001ab88
#define DAT_1001ab88 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1001ab98
#define DAT_1001ab98 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1001ac20
#define DAT_1001ac20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef _DAT_1001ac20
#define _DAT_1001ac20 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004650(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1001ab70 < value; value = value + DAT_1001ab78) {
  }
  for (; value < DAT_1001ab80; value = value + DAT_1001ab88) {
  }
  dVar1 = value * value;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1001ac20);
  return (DAT_1001ab98 * dVar1 + DAT_1001ab38 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1001ab38
#undef DAT_1001ab70
#undef DAT_1001ab78
#undef DAT_1001ab80
#undef DAT_1001ab88
#undef DAT_1001ab98
#undef DAT_1001ac20
#undef _DAT_1001ac20

#undef DAT_1001abb0
#define DAT_1001abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_1001abb0
#define _DAT_1001abb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1001abb0 ^ (ulong)param_1);
  if ((double)(_DAT_1001abb0 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1001abb0
#undef _DAT_1001abb0

#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001aba0
#define DAT_1001aba0 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1001abb0
#define DAT_1001abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_1001abb0
#define _DAT_1001abb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
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
  dVar7 = (double)(_DAT_1001abb0 ^ (ulong)param_1);
  if ((double)(_DAT_1001abb0 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_1001aba0;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_1001ab30;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_1001ab30;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_1001ab30
#undef DAT_1001aba0
#undef DAT_1001abb0
#undef _DAT_1001abb0

#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001aba0
#define DAT_1001aba0 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
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
  dVar6 = DAT_1001aba0;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_1001ab30;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_1001ab30;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_1001ab30
#undef DAT_1001aba0

#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
  dVar3 = DAT_1001ab38;
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

#undef DAT_1001ab38

#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001abb0
#define DAT_1001abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_1001abb0
#define _DAT_1001abb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
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
    dVar3 = DAT_1001ab38;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_1001abb0);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_1001ab38;
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

#undef DAT_1001ab38
#undef DAT_1001abb0
#undef _DAT_1001abb0

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


#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001abb0
#define DAT_1001abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef UNK_1001abb4
#define UNK_1001abb4 (*(uint *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_1001abb0
#define _DAT_1001abb0 (*(uint *)(((uintptr_t)pf_module_state + 0x84U)))
#undef uRam000000001001abb4
#define uRam000000001001abb4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100049c0(float param_1,int *param_2)

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
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam000000001001abb4,
                             SUB84(dVar2,0) ^ _DAT_1001abb0));
  }
  uVar1 = 0;
  if (DAT_1001ab38 <= dVar2) {
    uVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1001ab30;
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (DAT_1001ab38 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1001ab30)); dVar2 = dVar2 + dVar2) {
    uVar1 = (ulong)((int)uVar1 - 1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)uVar1;
  }
  return uVar1;
}

#undef DAT_1001ab30
#undef DAT_1001ab38
#undef DAT_1001abb0
#undef UNK_1001abb4
#undef _DAT_1001abb0
#undef uRam000000001001abb4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a80
 */

ulong recovered_10004a80(float param_1,uint param_2)

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


#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ac40
#define DAT_1001ac40 (*(float *)(((uintptr_t)pf_module_state + 0x114U)))
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
    return DAT_1001ac40;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1001ab38;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1001ab38 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1001ab38
#undef DAT_1001ac40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c00
 */

ulong recovered_10004c00(undefined1 *in_XMM0)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_XMM0_Da;

  return (ulong)((int)in_XMM0_Da - 1);
}


#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1001ab38 + dVar2) & uVar1);
}

#undef DAT_1001ab38

#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
                    (ulong)(DAT_1001ab38 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1001ab38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d00
 */

ulong recovered_10004d00(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_XMM0_Da;

  return (ulong)((int)in_XMM0_Da - 1);
}


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


#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ab48
#define DAT_1001ab48 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1001ab50
#define DAT_1001ab50 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1001ab58
#define DAT_1001ab58 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1001ab60
#define DAT_1001ab60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1001ab68
#define DAT_1001ab68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1001abc0
#define DAT_1001abc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_1001abd0
#define DAT_1001abd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef DAT_1001abe0
#define DAT_1001abe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef DAT_1001abf0
#define DAT_1001abf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef DAT_1001ac44
#define DAT_1001ac44 (*(float *)(((uintptr_t)pf_module_state + 0x118U)))
#undef DAT_1001ac48
#define DAT_1001ac48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef _DAT_1001ab60
#define _DAT_1001ab60 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_1001ab68
#define _DAT_1001ab68 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_1001abc0
#define _DAT_1001abc0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x94U)))
#undef _DAT_1001abd0
#define _DAT_1001abd0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef _DAT_1001abe0
#define _DAT_1001abe0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef _DAT_1001abf0
#define _DAT_1001abf0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef _DAT_1001ac48
#define _DAT_1001ac48 (*(float *)(((uintptr_t)pf_module_state + 0x11cU)))
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
    if (_DAT_1001ac48 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1001ab30;
        iVar1 = iVar1 + 1;
      } while (DAT_1001ab48 < dVar2);
    }
    for (; dVar2 < DAT_1001ab50; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1001ab58 + dVar2) / (dVar2 + DAT_1001ab38);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1001abc0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1001abd0);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1001abe0);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1001abf0);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1001ab60 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1001ab68);
  }
  return DAT_1001ac44;
}

#undef DAT_1001ab30
#undef DAT_1001ab38
#undef DAT_1001ab48
#undef DAT_1001ab50
#undef DAT_1001ab58
#undef DAT_1001ab60
#undef DAT_1001ab68
#undef DAT_1001abc0
#undef DAT_1001abd0
#undef DAT_1001abe0
#undef DAT_1001abf0
#undef DAT_1001ac44
#undef DAT_1001ac48
#undef _DAT_1001ab60
#undef _DAT_1001ab68
#undef _DAT_1001abc0
#undef _DAT_1001abd0
#undef _DAT_1001abe0
#undef _DAT_1001abf0
#undef _DAT_1001ac48

#undef DAT_1001ac00
#define DAT_1001ac00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ee0
 */

long recovered_10004ee0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1001ac00 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1001ac00

#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ab70
#define DAT_1001ab70 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1001ab78
#define DAT_1001ab78 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1001ab80
#define DAT_1001ab80 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1001ab88
#define DAT_1001ab88 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1001ab90
#define DAT_1001ab90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1001ac10
#define DAT_1001ac10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef _DAT_1001ab90
#define _DAT_1001ab90 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_1001ac10
#define _DAT_1001ac10 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe4U)))
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

  for (dVar1 = (double)param_1; DAT_1001ab70 < dVar1; dVar1 = dVar1 + DAT_1001ab78) {
  }
  for (; dVar1 < DAT_1001ab80; dVar1 = dVar1 + DAT_1001ab88) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1001ac10);
  return (float)(((dVar2 / _DAT_1001ab90 + DAT_1001ab38 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1001ab38
#undef DAT_1001ab70
#undef DAT_1001ab78
#undef DAT_1001ab80
#undef DAT_1001ab88
#undef DAT_1001ab90
#undef DAT_1001ac10
#undef _DAT_1001ab90
#undef _DAT_1001ac10

#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ab70
#define DAT_1001ab70 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1001ab78
#define DAT_1001ab78 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1001ab80
#define DAT_1001ab80 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1001ab88
#define DAT_1001ab88 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1001ab98
#define DAT_1001ab98 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1001ac20
#define DAT_1001ac20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef _DAT_1001ac20
#define _DAT_1001ac20 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004fc0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1001ab70 < dVar1; dVar1 = dVar1 + DAT_1001ab78) {
  }
  for (; dVar1 < DAT_1001ab80; dVar1 = dVar1 + DAT_1001ab88) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1001ac20);
  return (float)((DAT_1001ab98 * dVar1 + DAT_1001ab38 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1001ab38
#undef DAT_1001ab70
#undef DAT_1001ab78
#undef DAT_1001ab80
#undef DAT_1001ab88
#undef DAT_1001ab98
#undef DAT_1001ac20
#undef _DAT_1001ac20

#undef DAT_1001ac30
#define DAT_1001ac30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x104U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10005060(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 in_RAX;

  return in_RAX;
}

#undef DAT_1001ac30

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


#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001aba8
#define DAT_1001aba8 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1001abb0
#define DAT_1001abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_1001abb0
#define _DAT_1001abb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
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
    dVar11 = dVar11 * DAT_1001aba8 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1001ab38;
      do {
        dVar12 = dVar12 * DAT_1001aba8 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1001aba8;
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
                dVar11 = dVar11 * DAT_1001ab30;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1001ab30 * DAT_1001ab30 * DAT_1001ab30 * DAT_1001ab30 *
                         DAT_1001ab30 * DAT_1001ab30 * DAT_1001ab30 * DAT_1001ab30;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1001abb0);
  }
  return dVar11;
}

#undef DAT_1001ab30
#undef DAT_1001ab38
#undef DAT_1001aba8
#undef DAT_1001abb0
#undef _DAT_1001abb0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005540
 */

float recovered_10005540(byte *in_RDI,undefined8 *in_RSI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100052e0(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_1001aba8
#define DAT_1001aba8 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1001abb0
#define DAT_1001abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_1001b0a2
#define DAT_1001b0a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x576U)))
#undef _DAT_1001abb0
#define _DAT_1001abb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef str_1001b0ac
#define str_1001b0ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x580U)))
#undef str_1001b0bd
#define str_1001b0bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x591U)))
#define abStack_7a (*(byte (*)[74])(pf_stack_frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10005550(char *param_1,ulong param_2,char *param_3,void *param_4)

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
  uVar8 = _DAT_1001abb0;
  dVar7 = DAT_1001aba8;
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
      return uVar22;
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
  pbVar1 = (byte *)(param_3 + 2);
  pbVar21 = (byte *)param_3;
  while( true ) {
    param_3 = (char *)pbVar1;
    if (0x30 < bVar15) break;
    if ((0x1280900000000U >> ((ulong)bVar15 & 0x3f) & 1) == 0) {
      if ((ulong)bVar15 == 0x2a) {
        if (*(uint *)param_4 < 0x29) {
          *(uint *)param_4 = *(uint *)param_4 + 8;
        }
        else {
          *(long *)((long)param_4 + 8) = *(long *)((long)param_4 + 8) + 8;
        }
        bVar15 = *param_3;
        goto LAB_1000565c;
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
LAB_1000565c:
  iVar9 = -1;
  if (bVar15 == 0x2e) {
    bVar15 = param_3[1];
    if (bVar15 == 0x2a) {
      uVar2 = *(uint *)param_4;
      if ((ulong)uVar2 < 0x29) {
        piVar10 = (int *)((ulong)uVar2 + *(long *)((long)param_4 + 0x10));
        *(uint *)param_4 = uVar2 + 8;
      }
      else {
        piVar10 = *(int **)((long)param_4 + 8);
        *(int **)((long)param_4 + 8) = piVar10 + 2;
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
    uVar2 = *(uint *)param_4;
    uVar13 = (ulong)uVar2;
    switch((uintptr_t)(cVar16)) {
    case '\x01':
      if (uVar2 < 0x29) {
        *(uint *)param_4 = uVar2 + 8;
        uVar24 = (ulong)*(char *)(*(long *)((long)param_4 + 0x10) + uVar13);
      }
      else {
        pcVar23 = *(char **)((long)param_4 + 8);
        *(char **)((long)param_4 + 8) = pcVar23 + 8;
        uVar24 = (ulong)*pcVar23;
      }
      break;
    case '\x02':
      if (uVar2 < 0x29) {
        *(uint *)param_4 = uVar2 + 8;
        uVar24 = (ulong)*(short *)(*(long *)((long)param_4 + 0x10) + uVar13);
      }
      else {
        psVar4 = *(short **)((long)param_4 + 8);
        *(short **)((long)param_4 + 8) = psVar4 + 4;
        uVar24 = (ulong)*psVar4;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (0x28 < uVar2) goto LAB_10005af4;
      lVar3 = *(long *)((long)param_4 + 0x10);
      *(uint *)param_4 = uVar2 + 8;
LAB_100057d8:
      uVar24 = *(ulong *)(lVar3 + uVar13);
      break;
    case '\a':
      if (uVar2 < 0x29) {
        lVar3 = *(long *)((long)param_4 + 0x10);
        *(uint *)param_4 = uVar2 + 8;
        goto LAB_100057d8;
      }
LAB_10005af4:
      puVar11 = *(ulong **)((long)param_4 + 8);
      *(ulong **)((long)param_4 + 8) = puVar11 + 1;
      uVar24 = *puVar11;
      break;
    default:
      if (uVar2 < 0x29) {
        piVar10 = (int *)(uVar13 + *(long *)((long)param_4 + 0x10));
        *(uint *)param_4 = uVar2 + 8;
      }
      else {
        piVar10 = *(int **)((long)param_4 + 8);
        *(int **)((long)param_4 + 8) = piVar10 + 2;
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
      abStack_7a[uVar19 + 2] = str_1001b0bd[uVar24 % 10];
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
  case 'X':
  case 'x':
    uVar22 = *(uint *)param_4;
    uVar13 = (ulong)uVar22;
    switch((uintptr_t)(cVar16)) {
    case '\x01':
      if (uVar22 < 0x29) {
        *(uint *)param_4 = uVar22 + 8;
        uVar13 = (ulong)*(byte *)(*(long *)((long)param_4 + 0x10) + uVar13);
      }
      else {
        pbVar21 = *(byte **)((long)param_4 + 8);
        *(byte **)((long)param_4 + 8) = pbVar21 + 8;
        uVar13 = (ulong)*pbVar21;
      }
      break;
    case '\x02':
      if (uVar22 < 0x29) {
        *(uint *)param_4 = uVar22 + 8;
        uVar13 = (ulong)*(ushort *)(*(long *)((long)param_4 + 0x10) + uVar13);
      }
      else {
        puVar5 = *(ushort **)((long)param_4 + 8);
        *(ushort **)((long)param_4 + 8) = puVar5 + 4;
        uVar13 = (ulong)*puVar5;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar22 < 0x29) {
        *(uint *)param_4 = uVar22 + 8;
        uVar13 = *(ulong *)(*(long *)((long)param_4 + 0x10) + uVar13);
      }
      else {
LAB_10005c41:
        puVar11 = *(ulong **)((long)param_4 + 8);
        *(ulong **)((long)param_4 + 8) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10005c41;
      *(uint *)param_4 = uVar22 + 8;
      uVar13 = *(ulong *)(*(long *)((long)param_4 + 0x10) + uVar13);
      break;
    default:
      if (uVar22 < 0x29) {
        puVar18 = (uint *)(uVar13 + *(long *)((long)param_4 + 0x10));
        *(uint *)param_4 = uVar22 + 8;
      }
      else {
        puVar18 = *(uint **)((long)param_4 + 8);
        *(uint **)((long)param_4 + 8) = puVar18 + 2;
      }
      uVar13 = (ulong)*puVar18;
    }
    pcVar23 = str_1001b0bd;
    if (*param_3 == 0x58) {
      pcVar23 = str_1001b0ac;
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
  case 'c':
    uVar2 = *(uint *)param_4;
    if ((ulong)uVar2 < 0x29) {
      pbVar21 = (byte *)((ulong)uVar2 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar2 + 8;
    }
    else {
      pbVar21 = *(byte **)((long)param_4 + 8);
      *(byte **)((long)param_4 + 8) = pbVar21 + 8;
    }
    if (1 < uVar20) {
      *param_1 = *pbVar21;
      goto LAB_100055d2;
    }
LAB_100055b3:
    uVar13 = (ulong)(uVar22 + 1);
    break;
  case 'f':
    if (bVar6) {
      *(ulong *)((long)param_4 + 8) =
           (*(long *)((long)param_4 + 8) + 0xfU & 0xfffffffffffffff0) + 0x10;
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
      uVar2 = *(uint *)((long)param_4 + 4);
      if ((ulong)uVar2 < 0xa1) {
        pdVar12 = (double *)((ulong)uVar2 + *(long *)((long)param_4 + 0x10));
        *(uint *)((long)param_4 + 4) = uVar2 + 0x10;
      }
      else {
        pdVar12 = *(double **)((long)param_4 + 8);
        *(double **)((long)param_4 + 8) = pdVar12 + 1;
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
        abStack_7a[uVar14 + 2] = str_1001b0bd[uVar24 % 10];
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
  case 'p':
    uVar2 = *(uint *)param_4;
    if ((ulong)uVar2 < 0x29) {
      puVar11 = (ulong *)((ulong)uVar2 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar2 + 8;
    }
    else {
      puVar11 = *(ulong **)((long)param_4 + 8);
      *(ulong **)((long)param_4 + 8) = puVar11 + 1;
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
      abStack_7a[uVar14 + 2] = str_1001b0bd[(uint)uVar24 & 0xf];
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
  case 's':
    uVar22 = *(uint *)param_4;
    if ((ulong)uVar22 < 0x29) {
      puVar17 = (undefined8 *)((ulong)uVar22 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar22 + 8;
    }
    else {
      puVar17 = *(undefined8 **)((long)param_4 + 8);
      *(undefined8 **)((long)param_4 + 8) = puVar17 + 1;
    }
    if (iVar9 != 0) {
      pbVar21 = (byte *)*puVar17;
      if (pbVar21 == (byte *)0x0) {
        pbVar21 = &DAT_1001b0a2;
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
    uVar22 = *(uint *)param_4;
    uVar13 = (ulong)uVar22;
    switch((uintptr_t)(cVar16)) {
    case '\x01':
      if (uVar22 < 0x29) {
        *(uint *)param_4 = uVar22 + 8;
        uVar13 = (ulong)*(byte *)(*(long *)((long)param_4 + 0x10) + uVar13);
      }
      else {
        pbVar21 = *(byte **)((long)param_4 + 8);
        *(byte **)((long)param_4 + 8) = pbVar21 + 8;
        uVar13 = (ulong)*pbVar21;
      }
      break;
    case '\x02':
      if (uVar22 < 0x29) {
        *(uint *)param_4 = uVar22 + 8;
        uVar13 = (ulong)*(ushort *)(*(long *)((long)param_4 + 0x10) + uVar13);
      }
      else {
        puVar5 = *(ushort **)((long)param_4 + 8);
        *(ushort **)((long)param_4 + 8) = puVar5 + 4;
        uVar13 = (ulong)*puVar5;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar22 < 0x29) {
        *(uint *)param_4 = uVar22 + 8;
        uVar13 = *(ulong *)(*(long *)((long)param_4 + 0x10) + uVar13);
      }
      else {
LAB_10005f73:
        puVar11 = *(ulong **)((long)param_4 + 8);
        *(ulong **)((long)param_4 + 8) = puVar11 + 1;
        uVar13 = *puVar11;
      }
      break;
    case '\a':
      if (0x28 < uVar22) goto LAB_10005f73;
      *(uint *)param_4 = uVar22 + 8;
      uVar13 = *(ulong *)(*(long *)((long)param_4 + 0x10) + uVar13);
      break;
    default:
      if (uVar22 < 0x29) {
        puVar18 = (uint *)(uVar13 + *(long *)((long)param_4 + 0x10));
        *(uint *)param_4 = uVar22 + 8;
      }
      else {
        puVar18 = *(uint **)((long)param_4 + 8);
        *(uint **)((long)param_4 + 8) = puVar18 + 2;
      }
      uVar13 = (ulong)*puVar18;
    }
    uVar14 = 0;
    do {
      uVar19 = uVar14;
      abStack_7a[uVar19 + 2] = str_1001b0bd[uVar13 % 10];
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

#undef DAT_1001aba8
#undef DAT_1001abb0
#undef DAT_1001b0a2
#undef _DAT_1001abb0
#undef str_1001b0ac
#undef str_1001b0bd
#undef abStack_7a

/* Native variadic formatting wrapper; Pooka's Free Software License. */
int recovered_10006430(char *buffer,unsigned long capacity,char *format,...){
 __builtin_va_list arguments;__builtin_va_start(arguments,format);
 int count=recovered_10005550(buffer,capacity,format,(void *)arguments);
 __builtin_va_end(arguments);return count;
}


#undef DAT_10000000
#define DAT_10000000 (*(uint8_t *)(0x10000000U))
#undef DAT_10000008
#define DAT_10000008 (*(uint8_t *)(0x10000008U))
#undef DAT_10000010
#define DAT_10000010 (*(uint8_t *)(0x10000010U))
#undef DAT_10000018
#define DAT_10000018 (*(uint8_t *)(0x10000018U))
#undef DAT_1001c0f8
#define DAT_1001c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15ccU)))
#undef DAT_1001c108
#define DAT_1001c108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x15dcU)))
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
        if (DAT_1001c0f8 == 0) {
          puVar5 = (ulong *)&DAT_1001c0f8;
        }
        *puVar5 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1001c108 == (long *)0x0) {
          DAT_1001c108 = plVar2;
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
      if (DAT_1001c0f8 == 0) {
        plVar1 = &DAT_1001c0f8;
      }
      *plVar1 = 0x10000000;
      *param_3 = 0x10000000;
      if (DAT_1001c108 == (long *)0x0) {
        DAT_1001c108 = (long *)&DAT_10000000;
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
        if (DAT_1001c0f8 == 0) {
          puVar3 = &DAT_1001c0f8;
        }
        *puVar3 = plVar1;
        *param_3 = (ulong)plVar1;
        if (DAT_1001c108 == (long *)0x0) {
          DAT_1001c108 = plVar1;
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
#undef DAT_1001c0f8
#undef DAT_1001c108
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
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_1001c110
#define DAT_1001c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15e4U)))
#undef DAT_1001c120
#define DAT_1001c120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15f4U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#define local_238 (*(undefined1 (*)[520])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006740(long param_1,long param_2)

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
        if (DAT_1001c110 != 0) {
          DAT_1001c110 = DAT_1001c110 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1001c110 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001cc0(local_238,&DAT_1001c120,DAT_1001c110);
            uVar3 = DAT_1001c110;
          }
          local_238[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 &&
              ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00280840)(local_238);
          }
          DAT_1001c110 = 0;
        }
        else {
          if (DAT_1001c110 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001cc0(local_238,&DAT_1001c120,DAT_1001c110);
            local_238[DAT_1001c110] = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00280840)(local_238);
            }
            DAT_1001c110 = 0;
          }
          pcVar1 = &DAT_1001c120 + DAT_1001c110;
          DAT_1001c110 = DAT_1001c110 + 1;
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
#undef DAT_1001c110
#undef DAT_1001c120
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
#undef DAT_1001c110
#define DAT_1001c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15e4U)))
#undef DAT_1001c120
#define DAT_1001c120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15f4U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#define local_208 (*(undefined1 (*)[512])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006910(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1001c110 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001cc0(local_208,&DAT_1001c120,DAT_1001c110);
    uVar1 = DAT_1001c110;
  }
  local_208[uVar1] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280840)(local_208);
  }
  DAT_1001c110 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1001c110
#undef DAT_1001c120
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
#undef DAT_1001c110
#define DAT_1001c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15e4U)))
#undef DAT_1001c120
#define DAT_1001c120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15f4U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(uint *)(0x280840U))
#define local_208 (*(undefined1 (*)[512])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100069b0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1001c110 != 0) {
    recovered_10001cc0(local_208,&DAT_1001c120,DAT_1001c110);
    local_208[DAT_1001c110] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_208);
    }
    DAT_1001c110 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1001c110
#undef DAT_1001c120
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_208

#undef DAT_1001b0ab
#define DAT_1001b0ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57fU)))
#undef DAT_1001b0ce
#define DAT_1001b0ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2U)))
#define local_148 (*(char (*)[320])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a50
 */

void recovered_10006a50(undefined *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined *puVar2;
  char *format;

  format = &DAT_1001b0ce;
  if (param_1 != (undefined *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1001b0ab;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_10006430(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_10006740((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_1001b0ab
#undef DAT_1001b0ce
#undef local_148

#undef DAT_1001b0ec
#define DAT_1001b0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c0U)))
#undef str_1001b0d1
#define str_1001b0d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ab0
 */

void recovered_10006ab0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003760(str_1001b0d1);
  recovered_10006740(((uintptr_t)pf_module_state+0x5a5U),uVar1);
  uVar1 = recovered_10003760(&DAT_1001b0ec);
  recovered_10006740(((uintptr_t)pf_module_state+0x5c0U),uVar1);
  return;
}

#undef DAT_1001b0ec
#undef str_1001b0d1

#undef DAT_1001b0ec
#define DAT_1001b0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c0U)))
#undef str_1001b0ef
#define str_1001b0ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

void recovered_10006af0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003760(str_1001b0ef);
  recovered_10006740(((uintptr_t)pf_module_state+0x5c3U),uVar1);
  uVar1 = recovered_10003760(&DAT_1001b0ec);
  recovered_10006740(((uintptr_t)pf_module_state+0x5c0U),uVar1);
  return;
}

#undef DAT_1001b0ec
#undef str_1001b0ef

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
#undef DAT_1001c110
#define DAT_1001c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15e4U)))
#undef DAT_1001c120
#define DAT_1001c120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15f4U)))
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
#define local_228 (*(undefined1 (*)[512])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10006b30(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_2 == 0 || param_1 == 0) {
    return '\0';
  }
  if (DAT_1001c110 != 0) {
    recovered_10001cc0(local_228,&DAT_1001c120,DAT_1001c110);
    local_228[DAT_1001c110] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_228);
    }
    DAT_1001c110 = 0;
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
#undef DAT_1001c110
#undef DAT_1001c120
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
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
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_1001b0ce
#define DAT_1001b0ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2U)))
#undef DAT_1001c060
#define DAT_1001c060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1534U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef str_1001b170
#define str_1001b170 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x644U)))
#undef str_1001b17d
#define str_1001b17d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x651U)))
#undef str_1001b18b
#define str_1001b18b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65fU)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c80
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10006c80(long param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1001c060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10003790((byte *)param_1,(byte *)str_1001b170);
  if (iVar3 == 0) {
    uVar10 = 1;
LAB_10006f2e:
    puVar5 = recovered_10001bd0(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_1001c060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_100029c0(puVar5,0,0x340);
    *puVar5 = uVar10;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    recovered_10006430((char *)(puVar5 + 1),0xf1,&DAT_1001b0ce,param_1);
    return puVar5;
  }
  iVar4 = recovered_10003790((byte *)param_1,(byte *)str_1001b17d);
  if (iVar4 == 0) {
    uVar10 = 2;
    goto LAB_10006f2e;
  }
  iVar4 = recovered_10003790((byte *)param_1,(byte *)str_1001b18b);
  if (iVar4 == 0) {
    uVar10 = 3;
    goto LAB_10006f2e;
  }
  puVar5 = recovered_10001bd0(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_1001c060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_100029c0(puVar5,0,0x340);
  *puVar5 = 0;
  pcVar6 = recovered_10003cb0((char *)param_2,'r');
  bVar12 = true;
  bVar11 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10003cb0((char *)param_2,'+');
    bVar11 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10003cb0((char *)param_2,'a');
      bVar11 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar5 + 0x49) = bVar11;
  pcVar6 = recovered_10003cb0((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10003cb0((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10003cb0((char *)param_2,'+');
    bVar12 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar5 + 0x125) = bVar12;
  pcVar6 = recovered_10003cb0((char *)param_2,'a');
  *(bool *)((long)puVar5 + 0x126) = pcVar6 != (char *)0x0;
  puVar5[0x48] = 0xffffffff;
  recovered_10006430((char *)(puVar5 + 1),0xf1,&DAT_1001b0ce,param_1);
  recovered_100029c0(&local_34,0,0xc);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00280834)(param_1,&local_34), iVar3 != 0)))) {
    pcVar6 = recovered_10003cb0((char *)param_2,'w');
    if (local_30 != 0 && pcVar6 == (char *)0x0) {
      if (*(char *)((long)puVar5 + 0x125) == '\x01') {
        uVar9 = (ulong)local_30;
        uVar7 = *(ulong *)(puVar5 + 0x44);
        if (uVar7 < uVar9) {
          uVar2 = 0x100;
          if (uVar7 != 0) {
            uVar2 = uVar7;
          }
          do {
            uVar7 = uVar2;
            uVar2 = uVar7 * 2;
          } while (uVar7 < uVar9);
          pvVar8 = recovered_10001c70(*(void **)(puVar5 + 0x40),uVar7);
          if (pvVar8 == (void *)0x0) {
            DAT_1001c060 = 0xc;
            *(undefined1 *)((long)puVar5 + 0x129) = 1;
            goto LAB_10006fb8;
          }
          *(void **)(puVar5 + 0x40) = pvVar8;
          *(ulong *)(puVar5 + 0x44) = uVar7;
          *(void **)(puVar5 + 0x3e) = pvVar8;
          uVar9 = (ulong)local_30;
        }
        else {
          pvVar8 = *(void **)(puVar5 + 0x40);
        }
        recovered_10001cc0(pvVar8,(void *)(ulong)local_34,uVar9);
      }
      else {
        *(ulong *)(puVar5 + 0x3e) = (ulong)local_34;
      }
      *(ulong *)(puVar5 + 0x42) = (ulong)local_30;
      cVar1 = *(char *)((long)puVar5 + 0x126);
      goto joined_r0x10006f12;
    }
  }
  else if (*(char *)((long)puVar5 + 0x125) == '\0') {
    DAT_1001c060 = 2;
LAB_10006fb8:
    recovered_10001c20(puVar5);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar5 + 0x126);
joined_r0x10006f12:
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
#undef DAT_1001b0ce
#undef DAT_1001c060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_1001b170
#undef str_1001b17d
#undef str_1001b18b
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
#undef DAT_1001b0ce
#define DAT_1001b0ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2U)))
#undef DAT_1001c060
#define DAT_1001c060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1534U)))
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
#undef str_1001b170
#define str_1001b170 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x644U)))
#undef str_1001b17d
#define str_1001b17d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x651U)))
#undef str_1001b18b
#define str_1001b18b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65fU)))
#define uStack_34 (*(uint *)(pf_stack_frame + 28))
#define uStack_30 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007010
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10007010(long param_1,long param_2,int *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;

  if (param_3 != (int *)0x0) {
    if ((*param_3 == 0) && (*(char *)((long)param_3 + 0x127) == '\x01')) {
      if (((_DAT_00280800 == 0x50414d57) &&
          (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
         ((code *)(ulong)_DAT_00280838 != (code *)0x0)) {
        uStack_30 = 0x1000709a;
        iVar4 = (*(code *)(ulong)_DAT_00280838)
                          (param_3 + 1,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_100070c1;
        }
      }
      DAT_1001c060 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_100070c1:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x100070d8;
      recovered_10001c20(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x100070e0;
    recovered_10001c20(param_3);
    puVar8 = recovered_10006c80(param_1,param_2);
    return puVar8;
  }
  if (param_1 == 0 || param_2 == 0) {
    DAT_1001c060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10003790((byte *)param_1,(byte *)str_1001b170);
  if (iVar4 == 0) {
    uVar10 = 1;
LAB_10006f2e:
    puVar8 = recovered_10001bd0(0x340);
    if (puVar8 == (undefined4 *)0x0) {
      DAT_1001c060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_100029c0(puVar8,0,0x340);
    *puVar8 = uVar10;
    *(bool *)(puVar8 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar8 + 0x125) = iVar4 != 0;
    puVar8[0x48] = 0xffffffff;
    recovered_10006430((char *)(puVar8 + 1),0xf1,&DAT_1001b0ce,param_1);
    return puVar8;
  }
  iVar3 = recovered_10003790((byte *)param_1,(byte *)str_1001b17d);
  if (iVar3 == 0) {
    uVar10 = 2;
    goto LAB_10006f2e;
  }
  iVar3 = recovered_10003790((byte *)param_1,(byte *)str_1001b18b);
  if (iVar3 == 0) {
    uVar10 = 3;
    goto LAB_10006f2e;
  }
  puVar8 = recovered_10001bd0(0x340);
  if (puVar8 == (undefined4 *)0x0) {
    DAT_1001c060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_100029c0(puVar8,0,0x340);
  *puVar8 = 0;
  pcVar5 = recovered_10003cb0((char *)param_2,'r');
  bVar12 = true;
  bVar11 = true;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = recovered_10003cb0((char *)param_2,'+');
    bVar11 = true;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = recovered_10003cb0((char *)param_2,'a');
      bVar11 = pcVar5 != (char *)0x0;
    }
  }
  *(bool *)(puVar8 + 0x49) = bVar11;
  pcVar5 = recovered_10003cb0((char *)param_2,'w');
  if ((pcVar5 == (char *)0x0) &&
     (pcVar5 = recovered_10003cb0((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
    pcVar5 = recovered_10003cb0((char *)param_2,'+');
    bVar12 = pcVar5 != (char *)0x0;
  }
  *(bool *)((long)puVar8 + 0x125) = bVar12;
  pcVar5 = recovered_10003cb0((char *)param_2,'a');
  *(bool *)((long)puVar8 + 0x126) = pcVar5 != (char *)0x0;
  puVar8[0x48] = 0xffffffff;
  recovered_10006430((char *)(puVar8 + 1),0xf1,&DAT_1001b0ce,param_1);
  recovered_100029c0(&uStack_34,0,0xc);
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      (((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00280834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar5 = recovered_10003cb0((char *)param_2,'w');
    if ((uint)uStack_30 != 0 && pcVar5 == (char *)0x0) {
      if (*(char *)((long)puVar8 + 0x125) == '\x01') {
        uVar9 = uStack_30 & 0xffffffff;
        uVar6 = *(ulong *)(puVar8 + 0x44);
        if (uVar6 < uVar9) {
          uVar2 = 0x100;
          if (uVar6 != 0) {
            uVar2 = uVar6;
          }
          do {
            uVar6 = uVar2;
            uVar2 = uVar6 * 2;
          } while (uVar6 < uVar9);
          pvVar7 = recovered_10001c70(*(void **)(puVar8 + 0x40),uVar6);
          if (pvVar7 == (void *)0x0) {
            DAT_1001c060 = 0xc;
            *(undefined1 *)((long)puVar8 + 0x129) = 1;
            goto LAB_10006fb8;
          }
          *(void **)(puVar8 + 0x40) = pvVar7;
          *(ulong *)(puVar8 + 0x44) = uVar6;
          *(void **)(puVar8 + 0x3e) = pvVar7;
          uVar9 = uStack_30 & 0xffffffff;
        }
        else {
          pvVar7 = *(void **)(puVar8 + 0x40);
        }
        recovered_10001cc0(pvVar7,(void *)(ulong)uStack_34,uVar9);
      }
      else {
        *(ulong *)(puVar8 + 0x3e) = (ulong)uStack_34;
      }
      *(ulong *)(puVar8 + 0x42) = (ulong)(uint)uStack_30;
      cVar1 = *(char *)((long)puVar8 + 0x126);
      goto joined_r0x10006f12;
    }
  }
  else if (*(char *)((long)puVar8 + 0x125) == '\0') {
    DAT_1001c060 = 2;
LAB_10006fb8:
    recovered_10001c20(puVar8);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar8 + 0x126);
joined_r0x10006f12:
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
#undef DAT_1001b0ce
#undef DAT_1001c060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef str_1001b170
#undef str_1001b17d
#undef str_1001b18b
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
#undef DAT_1001c060
#define DAT_1001c060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1534U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007100
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007100(int *param_1)

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
      DAT_1001c060 = 5;
      *(undefined1 *)((long)param_1 + 0x129) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    recovered_10001c20(*(void **)(param_1 + 0x40));
  }
  recovered_10001c20(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef DAT_1001c060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071d0
 */

long recovered_100071d0(long param_1,long param_2,long param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint128 auVar2;
  uint128 auVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

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
      lVar6 = 0;
      do {
        lVar8 = 0;
        do {
          uVar4 = recovered_10007310(param_4);
          if (uVar4 == 0xffffffff) {
            return lVar6;
          }
          *(char *)(param_1 + lVar8) = (char)uVar4;
          lVar8 = lVar8 + 1;
        } while (param_2 != lVar8);
        lVar6 = lVar6 + 1;
        param_1 = param_1 + param_2;
      } while (lVar6 != param_3);
      return param_3;
    }
    uVar1 = *(ulong *)(param_4 + 0x46);
    uVar9 = *(ulong *)(param_4 + 0x42) - uVar1;
    if (uVar1 <= *(ulong *)(param_4 + 0x42) && uVar9 != 0) {
      PF_PART8(auVar2, 8) = 0;
      PF_PART8(auVar2, 0) = param_2;
      PF_PART8(auVar3, 8) = 0;
      PF_PART8(auVar3, 0) = param_3;
      uVar7 = 0xffffffffffffffff;
      if (SUB168(auVar2 * auVar3,8) == 0) {
        uVar7 = param_3 * param_2;
      }
      uVar5 = uVar7;
      if (uVar9 < uVar7) {
        uVar5 = uVar9;
      }
      recovered_10001cc0((void *)param_1,(void *)(uVar1 + *(long *)(param_4 + 0x3e)),uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      if (uVar9 < uVar7) {
        *(undefined1 *)(param_4 + 0x4a) = 1;
      }
      if ((uVar5 | param_2) >> 0x20 == 0) {
        return (uVar5 & 0xffffffff) / (param_2 & 0xffffffffU);
      }
      return uVar5 / (ulong)param_2;
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
#undef DAT_1001b0ab
#define DAT_1001b0ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57fU)))
#undef DAT_1001c110
#define DAT_1001c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15e4U)))
#undef DAT_1001c120
#define DAT_1001c120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15f4U)))
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
#define local_218 (*(undefined1 (*)[512])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10007310(int *param_1)

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
LAB_1000736a:
      *(ulong *)(param_1 + 0xce) = uVar3 + 1;
      return (uint)*(byte *)((long)param_1 + uVar3 + 0x12a);
    }
    if (DAT_1001c110 != 0) {
      recovered_10001cc0(local_218,&DAT_1001c120,DAT_1001c110);
      local_218[DAT_1001c110] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00280840)(local_218);
      }
      DAT_1001c110 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x47 < _DAT_00280808 && ((code *)(ulong)_DAT_00280844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00280844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_1001b0ab,0)
      ;
      if (iVar2 != 0) {
        uVar3 = recovered_10003760((char *)((long)param_1 + 0x12a));
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        *(undefined1 *)((long)param_1 + uVar3 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar3 = 0;
        goto LAB_1000736a;
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
#undef DAT_1001b0ab
#undef DAT_1001c110
#undef DAT_1001c120
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_218

#undef DAT_1001c060
#define DAT_1001c060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1534U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007500
 */

long recovered_10007500(long param_1,long param_2,long param_3,uint *param_4)

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
    recovered_10006740(param_1,uVar5);
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
      pvVar3 = recovered_10001c70(*(void **)(param_4 + 0x40),uVar2);
      if (pvVar3 == (void *)0x0) {
        DAT_1001c060 = 0xc;
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
      recovered_100029c0((void *)(uVar2 + *(long *)(param_4 + 0x40)),0,uVar4 - uVar2);
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10001cc0((void *)(uVar4 + *(long *)(param_4 + 0x40)),(void *)param_1,uVar5);
    uVar5 = uVar5 + *(long *)(param_4 + 0x46);
    *(ulong *)(param_4 + 0x46) = uVar5;
    if (*(ulong *)(param_4 + 0x42) < uVar5) {
      *(ulong *)(param_4 + 0x42) = uVar5;
    }
    *(undefined2 *)((long)param_4 + 0x127) = 1;
  }
  return param_3;
}

#undef DAT_1001c060

#undef DAT_1001c060
#define DAT_1001c060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1534U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007690
 */

undefined8 recovered_10007690(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1001c060 = 0x16;
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
  DAT_1001c060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1001c060

#undef DAT_1001c060
#define DAT_1001c060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1534U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007710
 */

undefined8 recovered_10007710(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1001c060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1001c060

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_1001c060
#define DAT_1001c060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1534U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007740(int *param_1)

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
  DAT_1001c060 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef DAT_1001c060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

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
#undef DAT_0028083c
#define DAT_0028083c (*(uint8_t *)(0x28083cU))
#undef DAT_1001c060
#define DAT_1001c060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1534U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(uint *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007880
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007880(long param_1)

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
  DAT_1001c060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef DAT_1001c060
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
#undef DAT_1001c060
#define DAT_1001c060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1534U)))
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
 * Address: 0x10007900
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007900(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1001c060 = 0x16;
    return 0xffffffff;
  }
  recovered_100029c0(&local_2c,0,0xc);
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
  DAT_1001c060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef DAT_1001c060
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
 * Address: 0x10007a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10007a70(long param_1,long *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar3 = 0;
    recovered_100029c0(&local_34,0,0xc);
    if (_DAT_00280800 != 0x50414d57) goto LAB_10007b2f;
    if ((((_DAT_00280804 != 0) && (0xb < _DAT_00280808)) && (0x37 < _DAT_00280808)) &&
       ((code *)(ulong)_DAT_00280834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00280834)(param_1,&local_34);
      if (iVar1 != 0) {
        pvVar2 = recovered_10001bd0((ulong)(local_30 + (local_30 == 0)));
        if (pvVar2 != (void *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001cc0(pvVar2,(void *)(ulong)local_34,(ulong)local_30);
            uVar3 = (ulong)local_30;
          }
          *param_2 = (long)pvVar2;
          *param_3 = uVar3;
          uVar3 = CONCAT71((int7)((ulong)pvVar2 >> 8),1);
          goto LAB_10007b2f;
        }
      }
    }
  }
  uVar3 = 0;
LAB_10007b2f:
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

/* Native WMAP file-write callback and argument validation.
 * Pooka's Free Software License. */
unsigned char recovered_10007b50(const char *name,const void *data,unsigned long count){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(!name || (!data && count) || api[0]!=0x50414d57U || !api[1] || api[2]<0x3c || !api[0x38/4])return 0;
 return ((int(*)(const char *,const void *,unsigned long))(uintptr_t)api[0x38/4])(name,data,count)!=0;
}


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


#undef DAT_1001b0ff
#define DAT_1001b0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d3U)))
#undef str_1001b102
#define str_1001b102 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d6U)))
#undef str_1001b10f
#define str_1001b10f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e3U)))
#undef str_1001b119
#define str_1001b119 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5edU)))
#undef str_1001b12d
#define str_1001b12d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x601U)))
#undef str_1001b13b
#define str_1001b13b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60fU)))
#undef str_1001b14d
#define str_1001b14d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x621U)))
#undef str_1001b159
#define str_1001b159 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62dU)))
#undef str_1001b16a
#define str_1001b16a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c50
 */

char * recovered_10007c50(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1001b0ff;
  default:
    return str_1001b16a;
  case 2:
    return str_1001b102;
  case 5:
    return str_1001b10f;
  case 9:
    return str_1001b119;
  case 0xc:
    return str_1001b12d;
  case 0xd:
    return str_1001b13b;
  case 0x11:
    return str_1001b14d;
  case 0x16:
    return str_1001b159;
  }
}

#undef DAT_1001b0ff
#undef str_1001b102
#undef str_1001b10f
#undef str_1001b119
#undef str_1001b12d
#undef str_1001b13b
#undef str_1001b14d
#undef str_1001b159
#undef str_1001b16a

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


#undef DAT_1001c320
#define DAT_1001c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d40
 */

void recovered_10007d40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1001c320 = DAT_1001c320 + 1;
  return;
}

#undef DAT_1001c320

#define in_stack_00000008 (*(longdouble *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d60
 */

void recovered_10007d60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_10004570((double)in_stack_00000008);
  return;
}

#undef in_stack_00000008

#define local_218 (*(char (*)[520])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d80
 */

uint recovered_10007d80(char *param_1,void *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar1 = recovered_10005550(local_218,0x200,param_1,param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = (ulong)uVar1;
    }
    recovered_10006740((long)local_218,uVar2);
  }
  return uVar1;
}

#undef local_218

#define local_2d8 (*(char (*)[512])(pf_stack_frame + 24))
#define local_d8 (*(undefined1 (*)[8])(pf_stack_frame + 536))
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
 * Address: 0x10007dd0
 */

uint recovered_10007dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                       undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  unsigned char pf_stack_frame[784] __attribute__((aligned(16))) = {0};

  char in_AL;
  uint uVar1;
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
  uVar1 = recovered_10005550(local_2d8,0x200,param_9,&local_28);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = (ulong)uVar1;
    }
    recovered_10006740((long)local_2d8,uVar2);
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
 * Address: 0x10007e90
 */

void recovered_10007e90(long param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x10007e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))();
  return;
}


#define uStack0000000000000008 (*(undefined1 *)(pf_stack_frame + 40))
#define unaff_retaddr (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ea0
 */

int recovered_10007ea0(void *context)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined2 in_FPUControlWord;

  *(undefined8 *)context = unaff_RBX;
  *(undefined8 *)((long)context + 8) = unaff_RBP;
  *(undefined8 *)((long)context + 0x10) = unaff_R12;
  *(undefined8 *)((long)context + 0x18) = unaff_R13;
  *(undefined8 *)((long)context + 0x20) = unaff_R14;
  *(undefined8 *)((long)context + 0x28) = unaff_R15;
  *(undefined1 **)((long)context + 0x30) = &uStack0000000000000008;
  *(undefined8 *)((long)context + 0x38) = unaff_retaddr;
  *(undefined4 *)((long)context + 0x40) = pf_read_MXCSR();
  *(undefined2 *)((long)context + 0x44) = in_FPUControlWord;
  return 0;
}

#undef uStack0000000000000008
#undef unaff_retaddr

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ee0
 */

void recovered_10007ee0(void *context,int value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  pf_write_MXCSR(*(undefined4 *)((long)context + 0x40));
                    /* WARNING: Could not recover jumptable at 0x10007f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((long)context + 0x38))();
  return;
}


#undef DAT_10007f71
#define DAT_10007f71 (*(uint8_t *)(0x10007f71U))
#undef DAT_1001b1f0
#define DAT_1001b1f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c4U)))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define auStack_40 (*(undefined1 (*)[16])(pf_stack_frame + 96))
#define local_50 (*(undefined * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
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
  local_60 = &DAT_1001b1f0;
  local_50 = &DAT_10007f71;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001ba0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10007f71
#undef DAT_1001b1f0
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef auStack_40
#undef local_50
#undef local_48

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


#undef DAT_1001c328
#define DAT_1001c328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fc0
 */

long recovered_10007fc0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long extraout_RAX;
  long lVar1;

  recovered_10008480(param_1);
  if (extraout_RAX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007f20();
  }
  *(long *)(extraout_RAX + 0x10) = DAT_1001c328;
  *(undefined1 *)(extraout_RAX + 0x34) = 0;
  DAT_1001c328 = extraout_RAX;
  lVar1 = recovered_100084c0(extraout_RAX);
  return lVar1;
}

#undef DAT_1001c328

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ff0
 */

long recovered_10007ff0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001bd0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001ba0();
  }
  return (long)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008020
 */

long recovered_10008020(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001bd0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001ba0();
  }
  return (long)pvVar1;
}


#undef DAT_1001b200
#define DAT_1001b200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d4U)))
#undef LAB_100080bd
#define LAB_100080bd (*(uint8_t *)(0x100080bdU))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define auStack_40 (*(undefined1 (*)[16])(pf_stack_frame + 96))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008050
 */

void recovered_10008050(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1001b200;
  local_50 = &LAB_100080bd;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(param_1);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1001b200
#undef LAB_100080bd
#undef local_58
#undef local_50
#undef local_48
#undef local_88
#undef local_80
#undef auStack_40
#undef local_68
#undef local_60

#undef DAT_1001b210
#define DAT_1001b210 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e4U)))
#undef LAB_1000815d
#define LAB_1000815d (*(uint8_t *)(0x1000815dU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(pf_stack_frame + 96))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080f0
 */

void recovered_100080f0(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1001b210;
  local_50 = &LAB_1000815d;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(param_1);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1001b210
#undef LAB_1000815d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

#undef DAT_1001b220
#define DAT_1001b220 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f4U)))
#undef LAB_100081fd
#define LAB_100081fd (*(uint8_t *)(0x100081fdU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(pf_stack_frame + 96))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008190
 */

void recovered_10008190(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1001b220;
  local_50 = &LAB_100081fd;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(param_1);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1001b220
#undef LAB_100081fd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

#undef DAT_1001b230
#define DAT_1001b230 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x704U)))
#undef LAB_1000829d
#define LAB_1000829d (*(uint8_t *)(0x1000829dU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008230
 */

void recovered_10008230(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1001b230;
  local_50 = &LAB_1000829d;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(param_1);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1001b230
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


#undef DAT_1001c338
#define DAT_1001c338 (*(int *)(((uintptr_t)pf_module_state + 0x180cU)))
#undef DAT_1001c340
#define DAT_1001c340 (*(void * *)(((uintptr_t)pf_module_state + 0x1814U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008310
 */

long recovered_10008310(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulonglong size;
  long lVar5;

  size = param_1 + 0x38 + (ulong)(param_1 == 0);
  pvVar2 = recovered_10001bd0(size);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007f20();
  }
  if (size != 0) {
    if (size < 8) {
      uVar3 = 0;
    }
    else {
      if (size < 0x20) {
        uVar4 = 0;
LAB_1000837c:
        uVar3 = size & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar2 + uVar4) = 0;
          uVar4 = uVar4 + 8;
          if (uVar3 == uVar4) goto LAB_100083af;
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
      if (size == uVar3) goto LAB_100083b4;
      uVar4 = uVar3;
      if ((size & 0x18) != 0) goto LAB_1000837c;
    }
    do {
      *(undefined1 *)((long)pvVar2 + uVar3) = 0;
      uVar3 = uVar3 + 1;
LAB_100083af:
    } while (size != uVar3);
  }
LAB_100083b4:
  DAT_1001c338 = DAT_1001c338 + 1 + (uint)(DAT_1001c338 == -1);
  if (DAT_1001c340 == (void *)0x0) {
LAB_100083fe:
    *(int *)((long)pvVar2 + 0x30) = DAT_1001c338;
    *(void **)((long)pvVar2 + 0x18) = DAT_1001c340;
    DAT_1001c340 = pvVar2;
    return (long)pvVar2 + 0x38;
  }
  do {
    lVar5 = (long)DAT_1001c340;
    while (*(int *)(lVar5 + 0x30) != DAT_1001c338) {
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) goto LAB_100083fe;
    }
    DAT_1001c338 = DAT_1001c338 + 1 + (uint)(DAT_1001c338 == -1);
  } while( true );
}

#undef DAT_1001c338
#undef DAT_1001c340

#undef DAT_1001c340
#define DAT_1001c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1814U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008420
 */

void recovered_10008420(long param_1)

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
  pvVar1 = DAT_1001c340;
  if (DAT_1001c340 == pointer) {
    puVar2 = &DAT_1001c340;
  }
  else {
    do {
      pvVar3 = pvVar1;
      if (pvVar3 == (void *)0x0) goto LAB_1000846f;
      pvVar1 = *(void **)((long)pvVar3 + 0x18);
    } while (*(void **)((long)pvVar3 + 0x18) != pointer);
    puVar2 = (undefined8 *)((long)pvVar3 + 0x18);
  }
  *puVar2 = *(undefined8 *)(param_1 + -0x20);
  *(undefined8 *)(param_1 + -0x20) = 0;
LAB_1000846f:
  recovered_10001c20(pointer);
  return;
}

#undef DAT_1001c340

#undef DAT_1001c340
#define DAT_1001c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1814U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008480
 */

void recovered_10008480(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = DAT_1001c340;
  if (DAT_1001c340 != param_1 && DAT_1001c340 != 0) {
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

#undef DAT_1001c340

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084c0
 */

long recovered_100084c0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_1001c328
#define DAT_1001c328 (*(void * *)(((uintptr_t)pf_module_state + 0x17fcU)))
#undef DAT_1001c340
#define DAT_1001c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1814U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084d0
 */

void recovered_100084d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;

  pointer = DAT_1001c328;
  if (DAT_1001c328 != (void *)0x0) {
    puVar2 = (undefined8 *)((long)DAT_1001c328 + 0x10);
    DAT_1001c328 = *(void **)((long)DAT_1001c328 + 0x10);
    *puVar2 = 0;
    if (*(char *)((long)pointer + 0x34) == '\0') {
      if (*(code **)((long)pointer + 8) != (code *)0x0) {
        (**(code **)((long)pointer + 8))((long)pointer + 0x38);
      }
      pvVar1 = DAT_1001c340;
      if (DAT_1001c340 == pointer) {
        puVar2 = &DAT_1001c340;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_1000854d;
          pvVar1 = *(void **)((long)pvVar3 + 0x18);
        } while (*(void **)((long)pvVar3 + 0x18) != pointer);
        puVar2 = (undefined8 *)((long)pvVar3 + 0x18);
      }
      *puVar2 = *(undefined8 *)((long)pointer + 0x18);
      *(undefined8 *)((long)pointer + 0x18) = 0;
LAB_1000854d:
      recovered_10001c20(pointer);
      return;
    }
  }
  return;
}

#undef DAT_1001c328
#undef DAT_1001c340

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


#undef DAT_1001c328
#define DAT_1001c328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17fcU)))
#undef DAT_1001c330
#define DAT_1001c330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1804U)))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define cStack_36 (*(char *)(pf_stack_frame + 26))
#define uStack_35 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_38 (*(undefined2 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008590
 */

void recovered_10008590(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *in_RSI;
  long *plVar4;

  if (DAT_1001c330 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_1001c330;
    do {
      local_30 = 0;
      local_38 = 0;
      cStack_36 = '\0';
      uStack_35 = 0;
      uStack_34 = 0;
      in_RSI = pbVar1;
      uVar3 = recovered_10009070((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[4] = plVar4;
        param_1[5] = CONCAT44(local_30,uStack_34);
        recovered_10008720(param_1,in_RSI);
        puVar2 = DAT_1001c328;
        if (DAT_1001c328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10007f20();
        }
        *(undefined1 *)((long)DAT_1001c328 + 0x34) = 1;
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

#undef DAT_1001c328
#undef DAT_1001c330
#undef local_30
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38

#undef DAT_1001c328
#define DAT_1001c328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008610
 */

void recovered_10008610(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1001c328;
  if (DAT_1001c328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007f20();
  }
  *(undefined1 *)((long)DAT_1001c328 + 0x34) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10008590(puVar1);
}

#undef DAT_1001c328

#undef DAT_1001c330
#define DAT_1001c330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1804U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008640
 */

void recovered_10008640(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1001c330;
  DAT_1001c330 = param_1;
  return;
}

#undef DAT_1001c330

#undef DAT_1001c330
#define DAT_1001c330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1804U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008660
 */

void recovered_10008660(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1001c330;
  if (DAT_1001c330 == param_1) {
    puVar2 = &DAT_1001c330;
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

#undef DAT_1001c330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086a0
 */

void recovered_100086a0(undefined8 *in_RDI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008590(in_RDI);
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


#undef DAT_1001c330
#define DAT_1001c330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1804U)))
#undef DAT_1001c340
#define DAT_1001c340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1814U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086c0
 */

void recovered_100086c0(undefined8 *param_1,byte *in_RSI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1001c340;
  if (DAT_1001c340 != param_1 && DAT_1001c340 != (undefined8 *)0x0) {
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
  if (DAT_1001c330 != (undefined8 *)0x0) {
    DAT_1001c330 = (undefined8 *)*DAT_1001c330;
  }
  recovered_10008720(puVar1,in_RSI);
  return;
}

#undef DAT_1001c330
#undef DAT_1001c340

#undef DAT_1001c330
#define DAT_1001c330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1804U)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008720
 */

void recovered_10008720(undefined8 *param_1,byte *in_RSI)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  long *plVar3;

  if (DAT_1001c330 != (long *)0x0) {
    plVar1 = (long *)param_1[4];
    do {
      plVar3 = DAT_1001c330;
      if (DAT_1001c330 == plVar1) {
        *(ulong *)((long)DAT_1001c330 + 0xc) =
             CONCAT44((int)*(undefined8 *)((long)param_1 + 0x2c),
                      (int)((ulong)*(undefined8 *)((long)param_1 + 0x2c) >> 0x20));
        uVar2 = *(undefined4 *)(param_1 + 5);
LAB_100087b4:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10007e90((long)plVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_100086c0(plVar3,in_RSI);
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10009070((long)DAT_1001c330,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        *(undefined4 *)((long)plVar3 + 0xc) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)(plVar3 + 2) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_100087b4;
      }
      DAT_1001c330 = (long *)*plVar3;
    } while (DAT_1001c330 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007f20();
}

#undef DAT_1001c330
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087c0
 */

void recovered_100087c0(undefined8 *in_RDI,byte *in_RSI)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100086c0(in_RDI,in_RSI);
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


#undef DAT_1001c0c0
#define DAT_1001c0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1594U)))
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
      if ((undefined *)*puVar5 != &DAT_1001c0c0) goto LAB_100088bc;
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

#undef DAT_1001c0c0

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

uchar recovered_100088f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008910
 */

uchar recovered_10008910(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return '\x01';
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008940
 */

uchar recovered_10008940(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008960
 */

uchar recovered_10008960(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong in_XMM0_Qa;

  return (in_XMM0_Qa & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008990
 */

uchar recovered_10008990(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_XMM0_Da;

  return (in_XMM0_Da & 0x7fffffff) < 0x7f800000;
}


#define in_stack_00000008_00 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010_00 (*(ushort *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089b0
 */

byte recovered_100089b0(undefined8 in_stack_00000008,ushort in_stack_00000010)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  return (in_stack_00000010_00 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010_00 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008_00 >> 0x3f);
}

#undef in_stack_00000008_00
#undef in_stack_00000010_00

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089f0
 */

uchar recovered_100089f0(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong in_XMM0_Qa;

  return (in_XMM0_Qa & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ab98
#define DAT_1001ab98 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1001ac50
#define DAT_1001ac50 (*(double *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_1001ac58
#define DAT_1001ac58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_1001ac60
#define DAT_1001ac60 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_1001ac68
#define DAT_1001ac68 (*(double *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef _DAT_1001ac58
#define _DAT_1001ac58 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
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
  if (_DAT_1001ac58 < param_1) {
    return DAT_1001ac50;
  }
  dVar4 = 0.0;
  if (DAT_1001ac60 <= param_1) {
    uVar1 = 0;
    if (DAT_1001ab30 < param_1) {
      uVar1 = 0;
      do {
        param_1 = param_1 * DAT_1001ab30;
        uVar1 = uVar1 + 1;
      } while (DAT_1001ab30 < param_1);
    }
    for (; param_1 < DAT_1001ab98; param_1 = param_1 * DAT_1001ab30) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1001ab38;
    dVar5 = DAT_1001ab38;
    dVar6 = DAT_1001ab38;
    do {
      dVar7 = (param_1 / dVar5) * dVar6;
      dVar9 = (param_1 / (double)(iVar2 + -2)) * dVar7;
      dVar8 = (param_1 / (double)(iVar2 + -1)) * dVar9;
      dVar6 = (param_1 / (double)iVar2) * dVar8;
      dVar4 = dVar4 + dVar7 + dVar9 + dVar8 + dVar6;
      dVar5 = dVar5 + DAT_1001ac68;
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

#undef DAT_1001ab30
#undef DAT_1001ab38
#undef DAT_1001ab98
#undef DAT_1001ac50
#undef DAT_1001ac58
#undef DAT_1001ac60
#undef DAT_1001ac68
#undef _DAT_1001ac58

#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ab98
#define DAT_1001ab98 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1001ac50
#define DAT_1001ac50 (*(double *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_1001ac58
#define DAT_1001ac58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_1001ac60
#define DAT_1001ac60 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_1001ac68
#define DAT_1001ac68 (*(double *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef DAT_1001ac70
#define DAT_1001ac70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef _DAT_1001ac58
#define _DAT_1001ac58 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef _DAT_1001ac70
#define _DAT_1001ac70 (*(float *)(((uintptr_t)pf_module_state + 0x144U)))
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
  if (_DAT_1001ac58 < dVar6) {
    return (float)DAT_1001ac50;
  }
  dVar5 = 0.0;
  if (DAT_1001ac60 <= dVar6) {
    uVar1 = 0;
    if (_DAT_1001ac70 < param_1) {
      uVar1 = 0;
      do {
        dVar6 = dVar6 * DAT_1001ab30;
        uVar1 = uVar1 + 1;
      } while (DAT_1001ab30 < dVar6);
    }
    for (; dVar6 < DAT_1001ab98; dVar6 = dVar6 * DAT_1001ab30) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1001ab38;
    dVar5 = DAT_1001ab38;
    dVar7 = DAT_1001ab38;
    do {
      dVar8 = (dVar6 / dVar4) * dVar7;
      dVar10 = (dVar6 / (double)(iVar2 + -2)) * dVar8;
      dVar9 = (dVar6 / (double)(iVar2 + -1)) * dVar10;
      dVar7 = (dVar6 / (double)iVar2) * dVar9;
      dVar5 = dVar5 + dVar8 + dVar10 + dVar9 + dVar7;
      dVar4 = dVar4 + DAT_1001ac68;
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

#undef DAT_1001ab30
#undef DAT_1001ab38
#undef DAT_1001ab98
#undef DAT_1001ac50
#undef DAT_1001ac58
#undef DAT_1001ac60
#undef DAT_1001ac68
#undef DAT_1001ac70
#undef _DAT_1001ac58
#undef _DAT_1001ac70

#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001ab38
#define DAT_1001ab38 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ab98
#define DAT_1001ab98 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1001ac50
#define DAT_1001ac50 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_1001ac58
#define DAT_1001ac58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_1001ac60
#define DAT_1001ac60 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_1001ac68
#define DAT_1001ac68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef _DAT_1001ac58
#define _DAT_1001ac58 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
#define in_stack_00000008 (*(longdouble *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008d20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;

  dVar4 = (double)in_stack_00000008;
  if ((dVar4 <= _DAT_1001ac58) && (DAT_1001ac60 <= dVar4)) {
    uVar1 = 0;
    if (DAT_1001ab30 < dVar4) {
      uVar1 = 0;
      do {
        dVar4 = dVar4 * DAT_1001ab30;
        uVar1 = uVar1 + 1;
      } while (DAT_1001ab30 < dVar4);
    }
    for (; dVar4 < DAT_1001ab98; dVar4 = dVar4 * DAT_1001ab30) {
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

#undef DAT_1001ab30
#undef DAT_1001ab38
#undef DAT_1001ab98
#undef DAT_1001ac50
#undef DAT_1001ac58
#undef DAT_1001ac60
#undef DAT_1001ac68
#undef _DAT_1001ac58
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008eb0
 */

double recovered_10008eb0(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)param_1 - (double)param_2;
}


#undef DAT_1001ab30
#define DAT_1001ab30 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1001ab38
#define DAT_1001ab38 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001ab58
#define DAT_1001ab58 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1001ab98
#define DAT_1001ab98 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ed0
 */

double recovered_10008ed0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double extraout_XMM0_Qa = 0;
  double dVar1;

  recovered_100041e0(param_1);
  if (DAT_1001ab30 <= param_1 - extraout_XMM0_Qa) {
    dVar1 = extraout_XMM0_Qa + DAT_1001ab38;
  }
  else {
    dVar1 = extraout_XMM0_Qa;
    if (param_1 - extraout_XMM0_Qa <= DAT_1001ab98) {
      dVar1 = extraout_XMM0_Qa + DAT_1001ab58;
    }
  }
  return dVar1;
}

#undef DAT_1001ab30
#undef DAT_1001ab38
#undef DAT_1001ab58
#undef DAT_1001ab98

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

void recovered_10009060(byte *in_RDI,undefined8 *in_RSI,uint in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008f20(in_RDI,in_RSI,in_EDX);
  return;
}


#undef DAT_1001ac80
#define DAT_1001ac80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef DAT_1001c0c0
#define DAT_1001c0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1594U)))
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
                        *(long *)(&DAT_1001ac80 + (ulong)(uVar10 & 0xf) * 8);
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
        if (*(undefined **)pbVar13 != &DAT_1001c0c0) goto LAB_100093c8;
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

#undef DAT_1001ac80
#undef DAT_1001c0c0
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095a0
 */

int recovered_100095a0(byte *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  if (param_2 == 0 || param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 < 2) goto LAB_10009629;
  }
  else {
    iVar1 = recovered_100032e0((long)param_1,((uintptr_t)pf_module_state+0x284U),8);
    if (iVar1 == 0) {
      return 1;
    }
  }
  if ((*param_1 == 0x42) && (param_1[1] == 0x4d)) {
    return 2;
  }
  if ((0xd < param_2) && (iVar1 = recovered_100032e0((long)param_1,((uintptr_t)pf_module_state+0x66dU),9), iVar1 == 0)) {
    return 4;
  }
LAB_10009629:
  uVar2 = recovered_10009650(param_1,param_2);
  return ((uint)uVar2 & 0xff) * 3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009650
 */

undefined8 recovered_10009650(byte *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;

  if (0x11 < param_2) {
    if (((0x19 < param_2) &&
        (iVar6 = recovered_100032e0((long)(param_1 + (param_2 - 0x12)),((uintptr_t)pf_module_state+0x684U),0x11), iVar6 == 0)
        ) && ((param_1 + param_2)[-1] == 0)) {
      return CONCAT71((int7)((ulong)(param_1 + param_2) >> 8),1);
    }
    bVar1 = param_1[1];
    if (bVar1 < 2) {
      bVar2 = param_1[2];
      if ((((0xfd < (byte)(bVar2 - 0xb) || 0xfc < (byte)(bVar2 - 4)) || bVar2 == 0xb) &&
          (*(short *)(param_1 + 0xc) != 0)) &&
         ((*(short *)(param_1 + 0xe) != 0 &&
          (uVar5 = *(ushort *)(param_1 + 5), bVar1 != 0 || uVar5 == 0)))) {
        bVar3 = param_1[7];
        bVar4 = param_1[0x10];
        if ((bVar1 != 1) ||
           ((((ulong)uVar5 != 0 && (bVar3 < 0x21)) &&
            ((0x101018000U >> ((ulong)bVar3 & 0x3f) & 1) != 0)))) {
          uVar7 = (ulong)(bVar2 - 8);
          if (bVar2 < 8) {
            uVar7 = (ulong)bVar2;
          }
          iVar6 = (int)uVar7;
          if (iVar6 == 3) {
            if ((bVar4 == 0x10) || (bVar4 == 8)) goto LAB_1000978b;
          }
          else if (iVar6 == 2) {
            uVar7 = 0;
            if ((bVar4 < 0x21) && ((0x101018000U >> ((ulong)bVar4 & 0x3f) & 1) != 0))
            goto LAB_1000978b;
          }
          else if ((iVar6 != 1) || ((bVar4 == 8 || (bVar4 == 0x10)))) {
LAB_1000978b:
            uVar8 = (ulong)*param_1 + 0x12;
            if (bVar1 == 1) {
              uVar8 = uVar8 + (ulong)(bVar3 + 7 >> 3) * (ulong)uVar5;
            }
            return CONCAT71((int7)(uVar7 >> 8),uVar8 < param_2);
          }
        }
      }
    }
  }
  return 0;
}


#undef DAT_1000beec
#define DAT_1000beec (*(uint8_t *)(0x1000beecU))
#undef DAT_1001b240
#define DAT_1001b240 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x714U)))
#undef LAB_1000bcf2
#define LAB_1000bcf2 (*(uint8_t *)(0x1000bcf2U))
#define local_298 (*(ulong *)(pf_stack_frame + 24))
#define local_290 (*(ulong *)(pf_stack_frame + 32))
#define local_288 (*(ulong *)(pf_stack_frame + 40))
#define local_280 (*(long *)(pf_stack_frame + 48))
#define local_278 (*(void * *)(pf_stack_frame + 56))
#define local_270 (*(uint *)(pf_stack_frame + 64))
#define local_26c (*(uint *)(pf_stack_frame + 68))
#define local_268 (*(uint * *)(pf_stack_frame + 72))
#define local_260 (*(undefined8 *)(pf_stack_frame + 80))
#define local_258 (*(undefined1 (*)[16])(pf_stack_frame + 88))
#define local_248 (*(undefined8 *)(pf_stack_frame + 104))
#define local_240 (*(uint * *)(pf_stack_frame + 112))
#define local_238 (*(undefined8 *)(pf_stack_frame + 120))
#define local_224 (*(uint *)(pf_stack_frame + 140))
#define local_220 (*(uint * *)(pf_stack_frame + 144))
#define local_218 (*(uint * *)(pf_stack_frame + 152))
#define local_210 (*(ulong *)(pf_stack_frame + 160))
#define local_208 (*(undefined1 (*)[12])(pf_stack_frame + 168))
#define local_1f8 (*(uint * *)(pf_stack_frame + 184))
#define local_1f0 (*(undefined1 (*)[16])(pf_stack_frame + 192))
#define local_1e0 (*(uint * *)(pf_stack_frame + 208))
#define local_1d8 (*(undefined1 (*)[8])(pf_stack_frame + 216))
#define local_1c8 (*(uint * *)(pf_stack_frame + 232))
#define local_1c0 (*(undefined1 (*)[8])(pf_stack_frame + 240))
#define local_1b0 (*(undefined8 *)(pf_stack_frame + 256))
#define local_1a8 (*(undefined1 (*)[16])(pf_stack_frame + 264))
#define local_198 (*(undefined8 *)(pf_stack_frame + 280))
#define local_190 (*(undefined1 (*)[16])(pf_stack_frame + 288))
#define local_180 (*(undefined8 *)(pf_stack_frame + 304))
#define local_170 (*(undefined8 *)(pf_stack_frame + 320))
#define local_168 (*(undefined4 *)(pf_stack_frame + 328))
#define local_150 (*(code * *)(pf_stack_frame + 352))
#define local_148 (*(undefined * *)(pf_stack_frame + 360))
#define local_140 (*(undefined1 * *)(pf_stack_frame + 368))
#define local_138 (*(undefined1 * *)(pf_stack_frame + 376))
#define local_130 (*(undefined1 * *)(pf_stack_frame + 384))
#define local_114 (*(uint *)(pf_stack_frame + 412))
#define local_110 (*(uint *)(pf_stack_frame + 416))
#define local_10c (*(uint *)(pf_stack_frame + 420))
#define local_108 (*(uint *)(pf_stack_frame + 424))
#define local_104 (*(uint *)(pf_stack_frame + 428))
#define local_100 (*(uint * *)(pf_stack_frame + 432))
#define local_f8 (*(uint * *)(pf_stack_frame + 440))
#define local_f0 (*(ulong *)(pf_stack_frame + 448))
#define local_e8 (*(undefined8 *)(pf_stack_frame + 456))
#define local_e0 (*(uint * *)(pf_stack_frame + 464))
#define local_d4 (*(uint *)(pf_stack_frame + 476))
#define local_d0 (*(undefined1 (*)[8])(pf_stack_frame + 480))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 496))
#define local_b8 (*(uint *)(pf_stack_frame + 504))
#define local_a8 (*(undefined1 *)(pf_stack_frame + 520))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 528))
#define local_98 (*(undefined1 (*)[8])(pf_stack_frame + 536))
#define local_88 (*(uint * *)(pf_stack_frame + 552))
#define local_80 (*(uint * *)(pf_stack_frame + 560))
#define local_74 (*(uint *)(pf_stack_frame + 572))
#define local_70 (*(uint * *)(pf_stack_frame + 576))
#define local_68 (*(uint ** *)(pf_stack_frame + 584))
#define local_60 (*(uint * *)(pf_stack_frame + 592))
#define local_58 (*(uint * *)(pf_stack_frame + 600))
#define local_50 (*(uint * *)(pf_stack_frame + 608))
#define local_48 (*(uint * *)(pf_stack_frame + 616))
#define local_40 (*(uint * *)(pf_stack_frame + 624))
#define local_38 (*(uint * *)(pf_stack_frame + 632))
#define uStack_230 (*(undefined8 *)(pf_stack_frame + 128))
#define uStack_1fc (*(uint *)(pf_stack_frame + 180))
#define puStack_1d0 (*(uint * *)(pf_stack_frame + 224))
#define puStack_1b8 (*(uint * *)(pf_stack_frame + 248))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 488))
#define uStack_b4 (*(uint *)(pf_stack_frame + 508))
#define uStack_b0 (*(uint *)(pf_stack_frame + 512))
#define uStack_ac (*(uint *)(pf_stack_frame + 516))
#define uStack_a7 (*(undefined1 *)(pf_stack_frame + 521))
#define uStack_a6 (*(undefined6 *)(pf_stack_frame + 522))
#define puStack_90 (*(uint * *)(pf_stack_frame + 544))
#define stack0xfffffffffffffdfc (*(uint64_t *)(pf_stack_frame + 172))
#define stack0xfffffffffffffe00 (*(uint64_t *)(pf_stack_frame + 176))
#define stack0xffffffffffffff31 (*(uint64_t *)(pf_stack_frame + 481))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097b0
 */

uchar recovered_100097b0(void *param_1,ulong param_2,void *param_3)

{
  unsigned char pf_stack_frame[720] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint128 auVar2;
  uint128 auVar3;
  uint128 auVar4;
  uint128 auVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint128 auVar12;
  uint128 auVar13;
  pf_u96 auVar14;
  uchar uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint *puVar20;
  void *pvVar21;
  undefined4 extraout_var = 0;
  uint *puVar22;
  ushort *puVar23;
  undefined1 *puVar24;
  undefined7 uVar25;
  ushort uVar26;
  byte *pbVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  ulong uVar31;
  uint **ppuVar32;
  long lVar33;
  byte bVar34;
  uint uVar35;
  ulong uVar36;
  short sVar37;
  uint uVar38;
  uint *puVar39;
  long *plVar40;
  undefined1 auVar41 [8];
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  uint *puVar45;
  uint uVar46;
  long lVar47;
  uint *puVar48;
  bool bVar49;

  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((long)param_3 + 0x10) = 0;
  recovered_10008050(*(void **)((long)param_3 + 8));
  *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
  *(undefined8 *)((long)param_3 + 0x18) = 0;
  bVar34 = 0;
  recovered_10008050((void *)0x0);
  local_130 = (undefined1 *)&local_298;
  local_150 = recovered_10007fa0;
  local_148 = &DAT_1001b240;
  local_138 = &LAB_1000bcf2;
  local_140 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 688) + -8);
  recovered_10008640(&local_170);
  if (param_2 == 0 || param_1 == (void *)0x0) goto LAB_1000af1b;
  ppuVar32 = (uint **)((long)param_3 + 8);
  if (param_2 < 8) {
    if (1 < param_2) goto LAB_10009899;
    goto LAB_10009a05;
  }
  local_168 = 0xffffffff;
  iVar29 = recovered_100032e0((long)param_1,((uintptr_t)pf_module_state+0x284U),8);
  if (iVar29 == 0) {
    uVar31 = 4;
    do {
      uVar42 = uVar31;
      uVar31 = (uintptr_t)uVar42 * 2;
    } while (uVar42 < param_2);
    local_168 = 0xffffffff;
    local_e0 = (uint *)recovered_10007ff0(uVar42);
    uVar31 = 0;
    recovered_10008050((void *)0x0);
    auVar13 = local_1f0;
    if (param_2 < 0x20) {
LAB_10009c58:
      do {
        *(undefined4 *)((long)local_e0 + uVar31) = *(undefined4 *)((long)param_1 + uVar31);
        uVar31 = uVar31 + 4;
        uVar42 = param_2 & 0xfffffffffffffffc;
        if ((param_2 & 0xfffffffffffffffc) == uVar31) goto joined_r0x10009c8a;
      } while( true );
    }
    uVar31 = param_2 & 0xffffffffffffffe0;
    uVar42 = 0;
    do {
      uVar19 = ((undefined8 *)((long)param_1 + uVar42))[1];
      puVar1 = (undefined8 *)((long)param_1 + uVar42 + 0x10);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      *(undefined8 *)((long)local_e0 + uVar42) = *(undefined8 *)((long)param_1 + uVar42);
      ((undefined8 *)((long)local_e0 + uVar42))[1] = uVar19;
      puVar1 = (undefined8 *)((long)local_e0 + uVar42 + 0x10);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      uVar42 = uVar42 + 0x20;
    } while (uVar31 != uVar42);
    if (uVar31 != param_2) {
      if ((param_2 & 0x1c) != 0) goto LAB_10009c58;
      do {
        *(undefined1 *)((long)local_e0 + uVar31) = *(undefined1 *)((long)param_1 + uVar31);
        uVar42 = uVar31 + 1;
joined_r0x10009c8a:
        uVar31 = uVar42;
      } while (uVar31 != param_2);
    }
    PF_PART16(local_208,0) = (uint128)0x0;
    local_1f8 = (uint *)0x0;
    PF_PART8(local_1f0, 0) = PF_PART8(local_1f0, 7) << 0x38;
    PF_PART4(local_1f0, 12) = PF_PART4(auVar13, 12);
    PF_PART4(local_1f0, 8) = 0;
    local_1e0 = (uint *)0x0;
    local_70 = param_3;
    recovered_10008050((void *)0x0);
    PF_PART16(local_1d8,0) = (uint128)0x0;
    local_1c8 = (uint *)0x0;
    recovered_10008050((void *)0x0);
    PF_PART16(local_1c0,0) = (uint128)0x0;
    local_1b0 = 0;
    recovered_10008050((void *)0x0);
    PF_PART16(local_1a8,0) = (uint128)0x0;
    local_198 = 0;
    recovered_10008050((void *)0x0);
    PF_PART16(local_190,0) = (uint128)0x0;
    local_180 = 0;
    recovered_10008050((void *)0x0);
    recovered_10008050((void *)0x0);
    recovered_10008050((void *)0x0);
    recovered_10008050((void *)0x0);
    local_168 = 0x10;
    local_40 = (uint *)param_2;
    iVar29 = recovered_100032e0((long)local_e0,((uintptr_t)pf_module_state+0x284U),8);
    if (iVar29 == 0) {
      if ((uint *)0x13 < local_40) {
        pbVar27 = (byte *)0x8;
        local_68 = (uint **)0x0;
        puVar48 = local_40;
LAB_1000a28b:
        uVar18 = *(uint *)((long)local_e0 + (long)pbVar27);
        puVar45 = (uint *)(ulong)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8
                                 | uVar18 << 0x18);
        puVar22 = (uint *)(pbVar27 + 8);
        if ((uint *)((long)puVar48 - (long)puVar22) < puVar45 + 1) goto LAB_10009db7;
        local_48 = (uint *)((byte *)((long)local_e0 + (long)pbVar27) + 4);
        puVar30 = (uint *)((long)local_e0 + (long)puVar22);
        puVar48 = (uint *)((long)puVar22 + (long)puVar45);
        uVar18 = *(uint *)((long)local_e0 + (long)puVar48);
        uVar17 = recovered_100196f0(0,(long)local_48,4);
        if (puVar45 != (uint *)0x0) {
          uVar17 = recovered_100196f0(uVar17,(long)puVar30,(ulong)puVar45);
        }
        if (uVar17 != (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                      uVar18 << 0x18)) goto LAB_10009db7;
        local_60 = puVar48;
        local_58 = puVar22;
        local_50 = puVar30;
        local_38 = puVar45;
        if (local_1f0[4] == '\0') {
          local_168 = 0x11;
          iVar29 = recovered_100032e0((long)local_48,((uintptr_t)pf_module_state+0x67aU),4);
          auVar13 = local_1f0;
          bVar34 = 0;
          if (((int)local_38 != 0xd) || (iVar29 != 0)) goto LAB_10009dba;
          uVar18 = *local_50;
          PF_PART4(local_208, 0) =
               uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
          uVar18 = local_50[1];
          PF_PART4(local_208, 4) =
               uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
          local_208[8] = (byte)local_50[2];
          PF_PART3(local_208, 9) = 0;
          PF_PART1(uStack_1fc, 0) = *(byte *)((long)local_50 + 9);
          PF_PART3(uStack_1fc, 1) = 0;
          local_1f8 = (uint *)(ulong)CONCAT14(*(byte *)((long)local_50 + 0xb),
                                              (uint)*(byte *)((long)local_50 + 10));
          PF_PART3(local_1f0, 1) = 0;
          local_1f0[0] = (byte)local_50[3];
          PF_PART11(local_1f0, 5) = PF_PART11(auVar13, 5);
          local_1f0[4] = 1;
          bVar34 = 0;
          if ((PF_PART4(local_208, 0) == 0) ||
             ((PF_PART4(local_208, 4) == 0 || (bVar34 = 0, 6 < (byte)uStack_1fc)))) goto LAB_10009dba;
          if ((0x55U >> ((byte)uStack_1fc & 0x1f) & 1) == 0) {
            if ((byte)uStack_1fc != 3) goto LAB_10009dba;
            bVar6 = local_208[8] - 8;
          }
          else {
            bVar6 = local_208[8] - 8 & 0xf7;
          }
          bVar34 = 0;
          if (((bVar6 != 0) || (*(byte *)((long)local_50 + 10) != 0)) ||
             (*(byte *)((long)local_50 + 0xb) != 0)) goto LAB_10009dba;
          puVar48 = local_40;
          puVar22 = local_38;
          if (1 < (byte)local_50[3]) goto LAB_10009dba;
        }
        else {
          local_168 = 0x12;
          iVar29 = recovered_100032e0((long)local_48,((uintptr_t)pf_module_state+0x69bU),4);
          auVar13 = local_1f0;
          if (iVar29 == 0) {
            if ((((int)local_38 != 8) || (((ulong)local_68 & 1) != 0)) || (local_1f0[6] != '\0'))
            goto LAB_10009db7;
            local_1f0[6] = 1;
            auVar12 = local_1f0;
            uVar18 = *local_50;
            PF_PART4(local_1f0, 12) = PF_PART4(auVar13, 12);
            PF_PART8(local_1f0, 0) = PF_PART8(auVar12, 0);
            PF_PART4(local_1f0, 8) =
                 uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18
            ;
            puVar48 = local_40;
            puVar22 = local_38;
          }
          else {
            local_168 = 0x13;
            iVar29 = recovered_100032e0((long)local_48,((uintptr_t)pf_module_state+0x6a0U),4);
            if (iVar29 == 0) {
              if (((int)local_38 != 0x1a) || (local_1f0[6] != '\x01')) goto LAB_10009db7;
              uStack_b0 = 0;
              uStack_ac = 0;
              local_a8 = 0;
              uStack_a7 = 0;
              uStack_a6 = 0;
              local_a0 = 0;
              uVar18 = local_50[1];
              PF_PART4(local_d0, 0) =
                   uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
              uVar18 = local_50[2];
              PF_PART4(local_d0, 4) =
                   uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
              uVar18 = local_50[3];
              PF_PART4(uStack_c8, 0) =
                   uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
              uVar18 = local_50[4];
              PF_PART4(uStack_c8, 4) =
                   uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
              local_c0 = (uint *)(ulong)CONCAT14(*(byte *)((long)local_50 + 0x19),
                                                 (uint)(byte)local_50[6]);
              local_b8 = CONCAT31(PF_PART3(local_b8, 1),~(byte)local_68 & PF_PART8(local_190, 8) == 0);
              if ((PF_PART4(local_d0, 0) != 0) && (PF_PART4(local_d0, 4) != 0)) {
                if (((uint)uStack_c8 <= (uint)PF_PART4(local_208, 0)) &&
                   ((uint)PF_PART4(local_d0, 0) <= PF_PART4(local_208, 0) - (uint)uStack_c8)) {
                  if ((PF_PART4(uStack_c8, 4) <= (uint)PF_PART4(local_208, 4)) &&
                     ((((uint)PF_PART4(local_d0, 4) <= PF_PART4(local_208, 4) - PF_PART4(uStack_c8, 4) &&
                       ((byte)local_50[6] < 3)) && (*(byte *)((long)local_50 + 0x19) < 2)))) {
                    local_168 = 0x14;
                    recovered_10019900((long *)local_190,(undefined8 *)local_d0);
                    puVar22 = local_38;
                    puVar48 = local_40;
                    recovered_10008050((void *)0x0);
                    goto LAB_1000a26f;
                  }
                }
              }
              bVar34 = 0;
              pvVar21 = (void *)0x0;
              goto LAB_1000b660;
            }
            local_168 = 0x15;
            iVar29 = recovered_100032e0((long)local_48,((uintptr_t)pf_module_state+0x6a5U),4);
            if (iVar29 == 0) {
              bVar34 = 0;
              uVar18 = (uint)local_38;
              if ((uVar18 == 0) || (0x300 < uVar18)) goto LAB_10009dba;
              ppuVar32 = &puStack_1d0;
              plVar40 = (long *)local_1d8;
              if (uVar18 + (uint)((ulong)((long)local_38 * 0xaaaaaaab) >> 0x21) * -3 != 0)
              goto LAB_10009dba;
            }
            else {
              local_168 = 0x17;
              iVar29 = recovered_100032e0((long)local_48,((uintptr_t)pf_module_state+0x6aaU),4);
              if (iVar29 != 0) {
                local_168 = 0x18;
                iVar29 = recovered_100032e0((long)local_48,((uintptr_t)pf_module_state+0x6afU),4);
                if (iVar29 == 0) {
                  local_68 = (uint **)CONCAT71((int7)(CONCAT44(extraout_var,iVar29) >> 8),1);
                  puVar48 = local_40;
                  puVar22 = local_38;
                  if ((int)local_38 != 0) {
                    uStack_c8 = local_38;
                    PF_PART8(local_d0,0) = (uint64_t)local_50;
                    local_168 = 0x19;
                    recovered_10019ad0((long *)local_1a8,(undefined8 *)local_d0);
                    if (PF_PART8(local_190, 8) != 0) {
                      if (*(char *)(PF_PART8(local_190, 0) + -0x20 + PF_PART8(local_190, 8) * 0x38) == '\x01') {
                        local_168 = 0x1a;
                        recovered_10019ad0((long *)(PF_PART8(local_190, 0) + PF_PART8(local_190, 8) * 0x38 + -0x18
                                                   ),(undefined8 *)local_d0);
                      }
                    }
                    local_1e0 = (uint *)((long)local_1e0 + (long)local_38);
                    puVar48 = local_40;
                    puVar22 = local_38;
                  }
                }
                else {
                  local_168 = 0x1b;
                  iVar29 = recovered_100032e0((long)local_48,((uintptr_t)pf_module_state+0x6b4U),4);
                  if (iVar29 == 0) {
                    if (local_1f0[6] == '\x01') {
                      bVar34 = 0;
                      if ((4 < (uint)local_38) && (PF_PART8(local_190, 8) != 0)) {
                        PF_PART4(uStack_c8, 0) = (uint)local_38 - 4;
                        PF_PART8(local_d0,0) = (uint64_t)(local_50 + 1);
                        PF_PART4(uStack_c8, 4) = 0;
                        local_168 = 0x1c;
                        recovered_10019ba0((long *)(PF_PART8(local_190, 0) + PF_PART8(local_190, 8) * 0x38 + -0x18
                                                   ),(undefined8 *)local_d0);
                        puVar48 = local_40;
                        puVar22 = local_38;
                        goto LAB_1000a26f;
                      }
                      goto LAB_10009dc1;
                    }
                    goto LAB_10009db7;
                  }
                  local_168 = 0x1d;
                  iVar29 = recovered_100032e0((long)local_48,((uintptr_t)pf_module_state+0x67fU),4);
                  if (iVar29 == 0) {
                    if ((int)local_38 != 0) goto LAB_10009db7;
                    local_1f0[5] = 1;
                    goto LAB_10009ed8;
                  }
                  puVar48 = local_40;
                  puVar22 = local_38;
                  if ((*local_48 & 0x20) == 0) goto LAB_10009db7;
                }
                goto LAB_1000a26f;
              }
              if (((int)local_38 != 2 && uStack_1fc == 0) || ((int)local_38 != 6 && uStack_1fc == 2)
                 ) goto LAB_10009db7;
              if (uStack_1fc == 3) {
                ppuVar32 = &puStack_1b8;
                plVar40 = (long *)local_1c0;
                if ((uint *)((ulong)puStack_1d0 / 3) < local_38) goto LAB_10009db7;
              }
              else {
                bVar34 = 0;
                if (uStack_1fc == 4) goto LAB_10009dba;
                ppuVar32 = &puStack_1b8;
                plVar40 = (long *)local_1c0;
                if (uStack_1fc == 6) goto LAB_10009dba;
              }
            }
            *ppuVar32 = (uint *)0x0;
            local_168 = 0x16;
            recovered_10016690(plVar40,*plVar40,(undefined1 *)local_50,
                               (byte *)((long)local_50 + (long)local_38));
            puVar48 = local_40;
            puVar22 = local_38;
          }
        }
LAB_1000a26f:
        pbVar27 = (byte *)((long)local_58 + (long)puVar22) + 4;
        if (puVar48 < local_60 + 4) goto LAB_10009ed8;
        goto LAB_1000a28b;
      }
LAB_10009ed8:
      if (local_1f0[4] != '\x01') goto LAB_10009db7;
      bVar34 = 0;
      if ((local_1f0[5] != '\x01') || (local_1e0 == (uint *)0x0)) goto LAB_10009dba;
      if ((uStack_1fc == 3) && (puStack_1d0 == (uint *)0x0)) goto LAB_10009db7;
      if (local_1f0[6] != '\x01') {
LAB_10009f68:
        recovered_10008050((void *)0x0);
        PF_PART16(local_d0,0) = (uint128)0x0;
        local_c0 = (uint *)0x0;
        local_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        local_a8 = 0;
        uStack_a7 = 0;
        recovered_10008050((void *)0x0);
        if (uStack_1fc == 0) {
          pvVar21 = (void *)0x0;
          if (puStack_1b8 != (uint *)0x0) {
            bVar34 = 0;
            if (puStack_1b8 != (uint *)0x2) goto LAB_1000b655;
            local_b8 = (uint)(ushort)(*(ushort *)PF_PART8(local_1c0, 0) << 8 | *(ushort *)PF_PART8(local_1c0, 0) >> 8);
            local_a8 = 1;
            pvVar21 = (void *)0x0;
          }
LAB_1000b581:
          PF_PART16(local_98,0) = (uint128)0x0;
          local_88 = (uint *)0x0;
          local_278 = pvVar21;
          if ((local_1f0[6] == '\x01') && (PF_PART8(local_190, 8) != 0)) {
            local_168 = 0x1f;
            uVar31 = recovered_1000bfd0((uint *)local_208,local_d0,(long *)local_98);
            bVar34 = (byte)uVar31;
          }
          else {
            local_168 = 0x20;
            uVar31 = recovered_1000c540((uint *)local_208,(long *)local_1a8,local_d0,
                                        (long *)local_98);
            bVar34 = (byte)uVar31;
          }
          puVar48 = local_70;
          if (bVar34 == 0) {
            (*(uint64_t *)(void *)auVar41) = (*(uint64_t *)(void *)local_98);
          }
          else {
            *(undefined8 *)local_70 = PF_PART8(local_208, 0);
            local_70[4] = 0;
            local_70[5] = 0;
            recovered_10008050(*(void **)(local_70 + 2));
            { unsigned char pf_copy[8]; __builtin_memcpy(pf_copy,local_98,8); __builtin_memcpy((puVar48 + 2),pf_copy,8); }
            *(uint **)(puVar48 + 4) = puStack_90;
            *(uint **)(puVar48 + 6) = local_88;
            (*(uint64_t *)(void *)auVar41) = (uint64_t)(uint *)0x0;
          }
          recovered_10008050((void *)PF_PART8(auVar41, 0));
          pvVar21 = local_278;
        }
        else {
          if (uStack_1fc == 2) {
            pvVar21 = (void *)0x0;
            if (puStack_1b8 != (uint *)0x0) {
              bVar34 = 0;
              if (puStack_1b8 != (uint *)0x6) goto LAB_1000b655;
              uStack_b4 = (uint)(ushort)(*(ushort *)PF_PART8(local_1c0, 0) << 8 | *(ushort *)PF_PART8(local_1c0, 0) >> 8);
              uStack_b0 = (uint)(ushort)(*(ushort *)((long)PF_PART8(local_1c0, 0) + 2) << 8 |
                                        *(ushort *)((long)PF_PART8(local_1c0, 0) + 2) >> 8);
              uStack_ac = (uint)(ushort)(*(ushort *)((long)PF_PART8(local_1c0, 0) + 4) << 8 |
                                        *(ushort *)((long)PF_PART8(local_1c0, 0) + 4) >> 8);
              uStack_a7 = 1;
              pvVar21 = (void *)0x0;
            }
            goto LAB_1000b581;
          }
          if (uStack_1fc == 3) {
            bVar34 = 0;
            pvVar21 = (void *)0x0;
            if ((puStack_1d0 != (uint *)0x0) &&
               (puVar48 = (uint *)((ulong)puStack_1d0 / 3), (ulong)puStack_1d0 % 3 == 0)) {
              puVar22 = (uint *)((long)(uintptr_t)puVar48 * 4);
              uStack_c8 = (uint *)0x0;
              if (puVar22 == (uint *)0x0) {
                pvVar21 = (void *)0x0;
                puVar22 = puStack_1d0;
              }
              else {
                local_48 = puStack_1d0;
                local_168 = 0x1e;
                local_40 = puVar22;
                local_38 = puVar48;
                pvVar21 = (void *)recovered_10007ff0((long)puVar22);
                puVar48 = (uint *)0x0;
                recovered_10008050((void *)0x0);
                local_c0 = local_40;
                if (local_40 < (uint *)0x20) {
LAB_1000a082:
                  do {
                    *(byte *)((long)pvVar21 + (long)puVar48) = 0xff;
                    puVar48 = (uint *)((long)puVar48 + 1);
                  } while (puVar48 < local_40);
                }
                else {
                  puVar48 = (uint *)((ulong)local_40 & 0xffffffffffffffe0);
                  puVar22 = (uint *)0x0;
                  do {
                    pbVar27 = (byte *)((long)pvVar21 + (long)puVar22);
                    pbVar27[0] = 0xff;
                    pbVar27[1] = 0xff;
                    pbVar27[2] = 0xff;
                    pbVar27[3] = 0xff;
                    pbVar27[4] = 0xff;
                    pbVar27[5] = 0xff;
                    pbVar27[6] = 0xff;
                    pbVar27[7] = 0xff;
                    pbVar27[8] = 0xff;
                    pbVar27[9] = 0xff;
                    pbVar27[10] = 0xff;
                    pbVar27[0xb] = 0xff;
                    pbVar27[0xc] = 0xff;
                    pbVar27[0xd] = 0xff;
                    pbVar27[0xe] = 0xff;
                    pbVar27[0xf] = 0xff;
                    pbVar27 = (byte *)((long)pvVar21 + 0x10 + (long)puVar22);
                    pbVar27[0] = 0xff;
                    pbVar27[1] = 0xff;
                    pbVar27[2] = 0xff;
                    pbVar27[3] = 0xff;
                    pbVar27[4] = 0xff;
                    pbVar27[5] = 0xff;
                    pbVar27[6] = 0xff;
                    pbVar27[7] = 0xff;
                    pbVar27[8] = 0xff;
                    pbVar27[9] = 0xff;
                    pbVar27[10] = 0xff;
                    pbVar27[0xb] = 0xff;
                    pbVar27[0xc] = 0xff;
                    pbVar27[0xd] = 0xff;
                    pbVar27[0xe] = 0xff;
                    pbVar27[0xf] = 0xff;
                    puVar22 = puVar22 + 8;
                  } while (puVar48 != puVar22);
                  if (local_40 != puVar48) goto LAB_1000a082;
                }
                uStack_c8 = puVar48;
                PF_PART8(local_d0,0) = (uint64_t)pvVar21;
                puVar48 = local_38;
                puVar22 = local_48;
              }
              if ((uint *)0x2 < puVar22) {
                puVar24 = (undefined1 *)((long)PF_PART8(local_1d8, 0) + 2);
                puVar22 = (uint *)0x0;
                do {
                  *(undefined1 *)((long)pvVar21 + (long)(uintptr_t)puVar22 * 4) = puVar24[-2];
                  *(undefined1 *)((long)pvVar21 + (long)(uintptr_t)puVar22 * 4 + 1) = puVar24[-1];
                  *(undefined1 *)((long)pvVar21 + (long)(uintptr_t)puVar22 * 4 + 2) = *puVar24;
                  puVar22 = (uint *)((long)puVar22 + 1);
                  puVar24 = puVar24 + 3;
                } while (puVar48 != puVar22);
              }
              if (puStack_1b8 != (uint *)0x0) {
                uVar31 = (ulong)(PF_PART4(local_1c0, 8) & 3);
                if (puStack_1b8 < (uint *)0x4) {
                  uVar42 = 0;
                }
                else {
                  uVar42 = 0;
                  do {
                    *(undefined1 *)((long)pvVar21 + (uintptr_t)uVar42 * 4 + 3) =
                         *(undefined1 *)((long)PF_PART8(local_1c0, 0) + uVar42);
                    *(undefined1 *)((long)pvVar21 + (uintptr_t)uVar42 * 4 + 7) =
                         *(undefined1 *)((long)PF_PART8(local_1c0, 0) + 1 + uVar42);
                    *(undefined1 *)((long)pvVar21 + (uintptr_t)uVar42 * 4 + 0xb) =
                         *(undefined1 *)((long)PF_PART8(local_1c0, 0) + 2 + uVar42);
                    *(undefined1 *)((long)pvVar21 + (uintptr_t)uVar42 * 4 + 0xf) =
                         *(undefined1 *)((long)PF_PART8(local_1c0, 0) + 3 + uVar42);
                    uVar42 = uVar42 + 4;
                  } while (((ulong)puStack_1b8 & 0xfffffffffffffffc) != uVar42);
                }
                if (uVar31 != 0) {
                  uVar36 = 0;
                  do {
                    *(undefined1 *)((long)pvVar21 + uVar36 * 4 + (uintptr_t)uVar42 * 4 + 3) =
                         *(undefined1 *)((long)PF_PART8(local_1c0, 0) + uVar42 + uVar36);
                    uVar36 = uVar36 + 1;
                  } while (uVar31 != uVar36);
                }
              }
              goto LAB_1000b581;
            }
          }
          else {
            pvVar21 = (void *)0x0;
            bVar34 = 0;
            if (puStack_1b8 == (uint *)0x0) goto LAB_1000b581;
          }
        }
LAB_1000b655:
        uStack_c8 = (uint *)0x0;
LAB_1000b660:
        recovered_10008050(pvVar21);
        goto LAB_10009dba;
      }
      if ((ulong)(uint)PF_PART4(local_1f0, 8) == 0) goto LAB_10009db7;
      if (PF_PART8(local_190, 8) - 1 < (ulong)(uint)PF_PART4(local_1f0, 8)) {
        lVar33 = 0;
        do {
          if (*(long *)(PF_PART8(local_190, 0) + 0x28 + lVar33) == 0) goto LAB_10009db7;
          lVar33 = lVar33 + 0x38;
        } while (PF_PART8(local_190, 8) * 0x38 != lVar33);
        goto LAB_10009f68;
      }
      bVar34 = 0;
    }
    else {
LAB_10009db7:
      bVar34 = 0;
LAB_10009dba:
    }
LAB_10009dc1:
    if (PF_PART8(local_190, 8) != 0) {
      lVar47 = PF_PART8(local_190, 8) * 0x38 + -0x10;
      lVar33 = PF_PART8(local_190, 8);
      do {
        *(undefined8 *)(PF_PART8(local_190, 0) + lVar47) = 0;
        recovered_10008050(*(void **)(PF_PART8(local_190, 0) + -8 + lVar47));
        lVar47 = lVar47 + -0x38;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
    }
    PF_PART8(local_190, 8) = 0;
    recovered_10008050((void *)PF_PART8(local_190, 0));
    PF_PART8(local_1a8, 8) = 0;
    recovered_10008050((void *)PF_PART8(local_1a8, 0));
    puStack_1b8 = (uint *)0x0;
    recovered_10008050((void *)PF_PART8(local_1c0, 0));
    puStack_1d0 = (uint *)0x0;
    recovered_10008050((void *)PF_PART8(local_1d8, 0));
    (*(uint64_t *)(void *)auVar41) = (uint64_t)local_e0;
    goto LAB_1000af16;
  }
LAB_10009899:
  if ((*(char *)param_1 == 'B') && (*(char *)((long)param_1 + 1) == 'M')) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((long)param_3 + 0x10) = 0;
    recovered_10008050(*(void **)((long)param_3 + 8));
    *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
    *(undefined8 *)((long)param_3 + 0x18) = 0;
    bVar34 = 0;
    recovered_10008050((void *)0x0);
    if (param_2 < 0x1a) goto LAB_1000af1b;
    if ((*(char *)param_1 == 'B') && (*(char *)((long)param_1 + 1) == 'M')) {
      uVar18 = *(uint *)((long)param_1 + 0xe);
      uVar31 = (ulong)uVar18;
      if (uVar31 == 0xc || 0x27 < uVar31) {
        puVar22 = (uint *)(ulong)*(uint *)((long)param_1 + 10);
        puVar48 = (uint *)(uVar31 + 0xe);
        if (uVar31 == 0xc) {
          uVar17 = (uint)*(ushort *)((long)param_1 + 0x12);
          uVar46 = (uint)*(ushort *)((long)param_1 + 0x14);
          sVar37 = *(short *)((long)param_1 + 0x16);
          uVar26 = *(ushort *)((long)param_1 + 0x18);
          uVar28 = 0;
          iVar29 = 0;
          local_e8 = (uint *)((ulong)PF_PART4(local_e8, 4) << 0x20);
          local_38 = puVar48;
LAB_1000995d:
          if (((uVar46 != 0 && uVar17 != 0) && sVar37 == 1) &&
             (puVar48 = (uint *)(param_2 - (long)puVar22),
             puVar22 <= param_2 && puVar48 != (uint *)0x0)) {
            if (iVar29 == 0) {
              uVar35 = 0;
              uVar38 = 0;
              uVar43 = 0;
              uVar44 = 0;
            }
            else {
              if ((iVar29 != 6) && (iVar29 != 3)) goto LAB_10009ec6;
              local_50 = (uint *)CONCAT44(PF_PART4(local_50, 4),uVar17);
              if (uVar18 < 0x34) {
                uVar44 = 0;
                bVar34 = 0;
                local_58 = puVar48;
                if (param_2 < (ulong)(iVar29 == 6) * 4 + 0x42) goto LAB_1000af1b;
                uVar38 = *(uint *)((long)param_1 + 0x36);
                uVar43 = *(uint *)((long)param_1 + 0x3a);
                uVar35 = *(uint *)((long)param_1 + 0x3e);
                if (iVar29 == 6) goto LAB_1000b1ef;
              }
              else {
                uVar38 = *(uint *)((long)param_1 + 0x36);
                uVar43 = *(uint *)((long)param_1 + 0x3a);
                uVar35 = *(uint *)((long)param_1 + 0x3e);
                uVar44 = 0;
                if (0x37 < uVar18) {
LAB_1000b1ef:
                  uVar44 = *(uint *)((long)param_1 + 0x42);
                }
              }
            }
            local_50 = (uint *)CONCAT44(PF_PART4(local_50, 4),uVar17);
            local_f0 = (ulong)uVar26;
            bVar8 = uVar38 != 0;
            bVar9 = uVar43 != 0;
            bVar7 = uVar26 != 0x10;
            bVar49 = uVar35 != 0;
            uVar17 = 0x1f;
            if (((bVar8 || bVar9) || bVar7) || bVar49) {
              uVar17 = uVar35;
            }
            uVar35 = 0x3e0;
            if (((bVar8 || bVar9) || bVar7) || bVar49) {
              uVar35 = uVar43;
            }
            local_d4 = 0x7c00;
            if (((bVar8 || bVar9) || bVar7) || bVar49) {
              local_d4 = uVar38;
            }
            PF_PART16(local_208,0) = (uint128)0x0;
            PF_PART8(local_208, 0) = (uint *)0x0;
            local_1f8 = (uint *)0x0;
            puVar45 = (uint *)(ulong)uVar26;
            local_60 = (uint *)CONCAT44(PF_PART4(local_60, 4),uVar46);
            local_100 = puVar22;
            local_74 = uVar44;
            if ((((uVar26 == 0x20) && (local_d4 == 0)) && (uVar35 == 0)) && (uVar17 == 0)) {
              local_d4 = 0xff0000;
              uVar35 = 0xff00;
              uVar17 = 0xff;
              uVar18 = 0xff000000;
              local_58 = puVar48;
LAB_1000b3e2:
              local_80 = (uint *)((ulong)local_50 & 0xffffffff);
              uVar31 = (long)puVar45 * (long)local_80 + 0x1fU >> 3 & 0xffffffffffc;
              if (uVar31 != 0) {
                uVar42 = CONCAT44(0,uVar46);
                PF_PART8(auVar3, 8) = 0;
                PF_PART8(auVar3, 0) = uVar31;
                PF_PART8(auVar5, 8) = 0;
                PF_PART8(auVar5, 0) = uVar42;
                if (SUB168(auVar3 * auVar5,8) == 0) {
                  local_298 = uVar31;
                  local_108 = uVar17;
                  local_104 = uVar35;
                  local_74 = uVar18;
                  local_70 = param_3;
                  local_68 = ppuVar32;
                  local_48 = param_1;
                  if ((uint *)(uVar31 * uVar42) <= local_58) {
                    local_168 = 2;
                    local_288 = uVar42;
                    recovered_100146a0((long *)local_d0,uVar42 * (long)local_80 * 4);
                    local_48 = (uint *)((long)local_48 + (long)local_100);
                    local_268 = (uint *)(local_f0 >> 3 & 0x1fffffff);
                    local_280 = (long)local_80 * 4;
                    puVar48 = (uint *)0x0;
                    local_218 = (uint *)(ulong)((int)local_f0 - 1);
                    uVar31 = 0;
                    bVar49 = false;
                    local_210 = 0;
                    do {
                      uVar42 = (ulong)(~(uint)uVar31 + (uint)local_60);
                      if ((char)local_e8 != '\0') {
                        uVar42 = uVar31 & 0xffffffff;
                      }
                      puVar45 = (uint *)(uVar42 * local_298 + (long)local_48);
                      puVar22 = (uint *)0x2;
                      puVar30 = (uint *)0x0;
                      local_290 = uVar31;
                      local_100 = puVar48;
                      local_f8 = puVar45;
                      PF_PART1(local_260, 0) = bVar49;
                      PF_PART7(local_260, 1) = 0;
                      do {
                        puVar39 = local_100;
                        (*(uint64_t *)(void *)auVar41) = (*(uint64_t *)(void *)local_d0);
                        local_58 = puVar30;
                        local_50 = puVar45;
                        local_40 = puVar22;
                        local_38 = puVar48;
                        if ((uint)local_218 < 0x18) {
                    /* WARNING: Could not recover jumptable at 0x1000b7ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar15 = (*(code *)(&DAT_1000beec +
                                             *(int *)(&DAT_1000beec + (long)local_218 * 4)))();
                          return uVar15;
                        }
                        if ((uint)local_f0 == 0x10) {
                          uVar18 = (uint)(ushort)*puVar45;
                        }
                        else {
                          uVar18 = *puVar45;
                        }
                        uVar17 = recovered_10014830(uVar18,local_d4);
                        *(byte *)((long)puVar39 + (long)((long)PF_PART8(auVar41, 0) + (uintptr_t)puVar30 * 4)) =
                             (byte)uVar17;
                        uVar17 = recovered_10014830(uVar18,local_104);
                        *(byte *)((long)puVar39 + (long)PF_PART8(auVar41, 0) + (long)(uintptr_t)puVar30 * 4 + 1) =
                             (byte)uVar17;
                        uVar17 = recovered_10014830(uVar18,local_108);
                        *(byte *)((long)puVar39 + (long)PF_PART8(auVar41, 0) + (long)(uintptr_t)puVar30 * 4 + 2) =
                             (byte)uVar17;
                        if (local_74 == 0) {
                          bVar34 = 0xff;
                        }
                        else {
                          uVar18 = recovered_10014830(uVar18,local_74);
                          bVar34 = (byte)uVar18;
                        }
                        puVar20 = local_70;
                        *(byte *)((long)puVar39 + (long)PF_PART8(auVar41, 0) + (long)(uintptr_t)puVar30 * 4 + 3) = bVar34;
                        local_210 = CONCAT71((int7)(local_210 >> 8),(byte)local_210 | bVar34 != 0) &
                                    0xffffffffffffff01;
                        puVar30 = (uint *)((long)local_58 + 1);
                        puVar45 = (uint *)((long)local_50 + (long)local_268);
                        puVar22 = (uint *)((long)local_40 + 3);
                        puVar48 = local_38 + 1;
                      } while (local_80 != puVar30);
                      uVar31 = local_290 + 1;
                      puVar48 = (uint *)((long)local_100 + local_280);
                      bVar49 = local_288 <= uVar31;
                    } while (uVar31 != local_288);
                    if ((((uint)local_f0 == 0x20) && (local_74 != 0)) &&
                       (((char)local_210 == '\0' && (3 < uStack_c8)))) {
                      uVar31 = 3;
                      do {
                        *(undefined1 *)((long)PF_PART8(local_d0, 0) + uVar31) = 0xff;
                        uVar31 = uVar31 + 4;
                      } while (uVar31 < uStack_c8);
                    }
                    *local_70 = (uint)local_80;
                    local_70[1] = (uint)local_60;
                    if (local_68 == (uint **)local_d0) {
                      uVar25 = (undefined7)((ulong)local_d0 >> 8);
                    }
                    else {
                      local_70[4] = 0;
                      local_70[5] = 0;
                      recovered_10008050(*(void **)(local_70 + 2));
                      auVar13 = PF_PART16(local_d0,0);
                      { unsigned char pf_copy[8]; __builtin_memcpy(pf_copy,local_d0,8); __builtin_memcpy((puVar20 + 2),pf_copy,8); }
                      *(uint **)(puVar20 + 4) = uStack_c8;
                      *(uint **)(puVar20 + 6) = local_c0;
                      PF_PART8(local_d0,0) = (uint64_t)0x0;
                      local_c0 = (uint *)0x0;
                      uVar25 = PF_PART7(auVar13, 1);
                    }
                    local_260 = CONCAT71(uVar25,1);
                    uStack_c8 = (uint *)0x0;
                    recovered_10008050((void *)PF_PART8(local_d0, 0));
                    bVar34 = (byte)local_260;
                    goto LAB_1000b444;
                  }
                }
              }
              bVar34 = 0;
            }
            else {
              local_58 = puVar48;
              if (uVar26 < 9) {
                uVar46 = 1 << ((byte)uVar26 & 0x1f);
                if (uVar28 != 0) {
                  uVar46 = uVar28;
                }
                puVar22 = (uint *)(ulong)uVar46;
                bVar34 = 0;
                if (local_38 <= param_2) {
                  local_40 = (uint *)((ulong)(uVar18 != 0xc) + 3);
                  if ((ulong)((long)local_40 * (long)puVar22) <= param_2 - (long)local_38) {
                    local_d0[0] = 0xff;
                    local_168 = 1;
                    local_218 = puVar22;
                    local_108 = uVar17;
                    local_104 = uVar35;
                    local_80 = puVar45;
                    local_70 = param_3;
                    local_68 = ppuVar32;
                    local_48 = param_1;
                    recovered_10014510((long *)local_208,(long)(uintptr_t)puVar22 * 4,local_d0);
                    uVar31 = 1;
                    if (1 < (uint)local_218) {
                      uVar31 = (ulong)local_218 & 0xffffffff;
                    }
                    pbVar27 = (byte *)((long)local_38 + (long)local_48) + 2;
                    uVar42 = 0;
                    do {
                      *(byte *)(PF_PART8(local_208, 0) + (uintptr_t)uVar42 * 4) = *pbVar27;
                      *(byte *)(PF_PART8(local_208, 0) + 1 + (uintptr_t)uVar42 * 4) = pbVar27[-1];
                      *(byte *)(PF_PART8(local_208, 0) + 2 + (uintptr_t)uVar42 * 4) = pbVar27[-2];
                      uVar42 = uVar42 + 1;
                      pbVar27 = pbVar27 + (long)local_40;
                      ppuVar32 = local_68;
                      puVar45 = local_80;
                      param_1 = local_48;
                      param_3 = local_70;
                      uVar46 = (uint)local_60;
                      uVar17 = local_108;
                      uVar35 = local_104;
                    } while (uVar31 != uVar42);
                    goto LAB_1000b3c3;
                  }
                }
              }
              else {
LAB_1000b3c3:
                bVar34 = 0;
                if (((uint)local_f0 < 0x21) &&
                   (uVar18 = local_74, (0x101010112U >> ((ulong)puVar45 & 0x3f) & 1) != 0))
                goto LAB_1000b3e2;
              }
            }
LAB_1000b444:
            stack0xfffffffffffffe00 = 0;
            (*(uint64_t *)(void *)auVar41) = (uint64_t)PF_PART8(local_208, 0);
            goto LAB_1000af16;
          }
        }
        else if (uVar18 + 0xe <= param_2) {
          uVar17 = *(uint *)((long)param_1 + 0x12);
          uVar28 = *(uint *)((long)param_1 + 0x16);
          if (uVar28 != 0 && 0 < (int)uVar17) {
            local_e8 = (uint *)CONCAT44(PF_PART4(local_e8, 4),uVar28 >> 0x1f);
            uVar46 = -uVar28;
            if ((int)-uVar28 < 0) {
              uVar46 = uVar28;
            }
            sVar37 = *(short *)((long)param_1 + 0x1a);
            uVar26 = *(ushort *)((long)param_1 + 0x1c);
            iVar29 = *(int *)((long)param_1 + 0x1e);
            uVar28 = *(uint *)((long)param_1 + 0x2e);
            if ((uVar18 == 0x28) && ((iVar29 == 6 || (iVar29 == 3)))) {
              puVar48 = (uint *)((ulong)(iVar29 == 6) * 4 + 0x42);
            }
            local_38 = puVar48;
            goto LAB_1000995d;
          }
        }
      }
    }
  }
  else {
    if (0xd < param_2) {
      local_168 = 0xffffffff;
      iVar29 = recovered_100032e0((long)param_1,((uintptr_t)pf_module_state+0x66dU),9);
      if (iVar29 == 0) {
        *(undefined8 *)param_3 = 0;
        *(undefined8 *)((long)param_3 + 0x10) = 0;
        recovered_10008050(*(void **)((long)param_3 + 8));
        *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
        *(undefined8 *)((long)param_3 + 0x18) = 0;
        bVar34 = 0;
        recovered_10008050((void *)0x0);
        if (param_2 < 0x1e) goto LAB_1000af1b;
        local_168 = 0xffffffff;
        iVar29 = recovered_100032e0((long)param_1,((uintptr_t)pf_module_state+0x66dU),9);
        if ((iVar29 != 0) || (*(char *)((long)param_1 + 0xd) != '\0')) goto LAB_10009ec6;
        local_1f8 = (uint *)((ulong)local_1f8 & 0xffffffff);
        PF_PART16(local_1f0,0) = (uint128)0x0;
        local_1e0 = (uint *)0x0;
        local_38 = (uint *)((long)param_1 + 9);
        local_168 = 9;
        local_70 = param_3;
        local_68 = ppuVar32;
        local_48 = param_1;
        local_40 = (uint *)param_2;
        iVar29 = recovered_100032e0((long)local_38,((uintptr_t)pf_module_state+0x696U),4);
        if (iVar29 == 0) {
          uStack_1fc = 0;
          iVar29 = 4;
          bVar49 = false;
        }
        else {
          if (((((byte)*local_38 != 0x76) || (9 < (byte)(*(byte *)((long)local_48 + 10) - 0x30U))) ||
              (9 < (byte)(*(byte *)((long)local_48 + 0xb) - 0x30U))) ||
             (9 < (byte)((byte)local_48[3] - 0x30U))) {
            (*(uint64_t *)(void *)auVar41) = (uint64_t)0x0;
            bVar34 = 0;
            goto LAB_1000af16;
          }
          uVar18 = ((uint)*(byte *)((long)local_48 + 10) * 100 +
                    (uint)*(byte *)((long)local_48 + 0xb) * 10 + (uint)(byte)local_48[3]) - 0x14d0;
          uStack_1fc = uVar18;
          iVar29 = (uint)(10 < uVar18) * 4 + 4;
          bVar49 = 3 < uVar18;
        }
        auVar14 = stack0xfffffffffffffdfc;
        local_1f8 = (uint *)CONCAT44(PF_PART4(local_1f8, 4),iVar29);
        uVar18 = *(uint *)((long)local_48 + 0xe);
        PF_PART4(local_208, 0) =
             uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
        uVar18 = *(uint *)((long)local_48 + 0x12);
        PF_PART4(local_208, 4) =
             uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
        uVar18 = *(uint *)((long)local_48 + 0x16);
        PF_PART4(local_208, 8) =
             uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
        uStack_1fc = PF_PART4(auVar14, 8);
        local_220 = (uint *)0x1a;
        bVar34 = 0;
        if (((PF_PART4(local_208, 0) == 0) || (PF_PART4(local_208, 4) == 0)) || (2 < (uint)PF_PART4(local_208, 8)))
        goto LAB_1000b4bc;
        if (bVar49) {
          uVar18 = *(uint *)((long)local_48 + 0x1a);
          uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
          local_220 = (uint *)0x1e;
          if (((uVar18 == 0) || (uVar18 == 0x96)) || (uVar18 == 100)) goto LAB_1000afe5;
        }
        else {
LAB_1000afe5:
          local_168 = 10;
          uVar16 = recovered_10014b00((long)local_48,(ulong)local_40,(ulong *)&local_220,
                                      (long)local_208);
          if ((char)uVar16 != '\0') {
            PF_PART16(local_98,0) = (uint128)0x0;
            local_88 = (uint *)0x0;
            local_58 = (uint *)((ulong)local_1f8 & 0xffffffff);
            puVar22 = (uint *)((long)local_40 - (long)local_220);
            puVar48 = local_220;
            while( true ) {
              if ((int)local_58 == 4) {
                if ((local_40 < puVar48) || (puVar22 < (uint *)0x4)) goto LAB_1000b4a2;
                uVar18 = *(uint *)((long)local_48 + (long)puVar48);
                puVar45 = (uint *)(ulong)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 |
                                          (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
              }
              else {
                if ((local_40 < puVar48) || (puVar22 < (uint *)0x8)) goto LAB_1000b4a2;
                uVar31 = *(ulong *)((long)local_48 + (long)puVar48);
                puVar45 = (uint *)(uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                                   (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8
                                   | (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                                   (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38);
              }
              PF_PART8(local_d0,0) = (uint64_t)puVar45;
              if (puVar45 == (uint *)0x0) break;
              if (local_40 <= puVar45) goto LAB_1000b4a2;
              local_168 = 0xb;
              local_50 = puVar22;
              local_38 = puVar48;
              recovered_10014e10((long *)local_98,(undefined8 *)local_d0);
              puVar48 = (uint *)((long)local_38 + (long)local_58);
              puVar22 = (uint *)((long)local_50 - (long)local_58);
            }
            if (puStack_90 != (uint *)0x0) {
              local_50 = (uint *)(ulong)(uint)PF_PART4(local_208, 0);
              local_f8 = (uint *)(ulong)(uint)PF_PART4(local_208, 4);
              if ((ulong)((long)local_f8 * (long)local_50) >> 0x3e == 0) {
                ((uint8_t *)(void *)&auVar13)[0xf] = 0;
                PF_PART15(auVar13, 0) = stack0xffffffffffffff31;
                PF_PART16(local_d0,0) = auVar13 << 8;
                local_168 = 0xc;
                recovered_10014f50((long *)&local_240,(long)local_f8 * (long)local_50 * 4,local_d0);
                puVar45 = puStack_90;
                uVar31 = local_210;
                auVar13 = PF_PART16(local_d0,0);
                puVar48 = local_70;
                puVar22 = local_40;
                goto joined_r0x1000b92f;
              }
            }
LAB_1000b4a2:
            bVar34 = 0;
            goto LAB_1000b4a5;
          }
        }
        bVar34 = 0;
        (*(uint64_t *)(void *)auVar41) = (uint64_t)PF_PART8(local_1f0, 0);
        goto LAB_1000af16;
      }
    }
LAB_10009a05:
    local_168 = 0xffffffff;
    uVar19 = recovered_10009650(param_1,param_2);
    if ((char)uVar19 != '\0') {
      *(undefined8 *)param_3 = 0;
      *(undefined8 *)((long)param_3 + 0x10) = 0;
      recovered_10008050(*(void **)((long)param_3 + 8));
      *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
      *(undefined8 *)((long)param_3 + 0x18) = 0;
      bVar34 = 0;
      recovered_10008050((void *)0x0);
      local_168 = 0xffffffff;
      uVar19 = recovered_10009650(param_1,param_2);
      if ((char)uVar19 == '\0') goto LAB_1000af1b;
      bVar34 = *(byte *)((long)param_1 + 2);
      puVar22 = (uint *)(ulong)bVar34;
      local_220 = (uint *)CONCAT44(PF_PART4(local_220, 4),(uint)*(ushort *)((long)param_1 + 3));
      uVar26 = *(ushort *)((long)param_1 + 5);
      local_114 = (uint)uVar26;
      puVar48 = (uint *)(ulong)*(byte *)((long)param_1 + 7);
      local_110 = (uint)*(ushort *)((long)param_1 + 0xc);
      local_10c = (uint)*(ushort *)((long)param_1 + 0xe);
      local_224 = (uint)*(byte *)((long)param_1 + 0x10);
      local_270 = (uint)*(byte *)((long)param_1 + 0x11);
      local_26c = bVar34 - 8;
      if (bVar34 < 8) {
        local_26c = (uint)bVar34;
      }
      puVar45 = (uint *)((ulong)*(byte *)param_1 + 0x12);
      PF_PART8(local_d0,0) = (uint64_t)0x0;
      uStack_c8 = (uint *)0x0;
      local_c0 = (uint *)0x0;
      if (*(char *)((long)param_1 + 1) == '\x01') {
        bVar34 = 0;
        local_50 = puVar48;
        local_38 = puVar22;
        if (puVar45 <= param_2) {
          puVar22 = (uint *)(ulong)(*(byte *)((long)param_1 + 7) + 7 >> 3);
          puVar30 = (uint *)((long)puVar22 * (ulong)uVar26);
          if (puVar30 <= (uint *)(param_2 - (long)puVar45)) {
            puVar39 = (uint *)(ulong)((uint)uVar26 * 4);
            local_60 = puVar30;
            if ((ulong)uVar26 == 0) {
              puVar30 = (uint *)0x0;
              local_70 = param_3;
            }
            else {
              local_168 = 4;
              local_e8 = puVar39;
              local_80 = puVar22;
              local_70 = param_3;
              local_68 = ppuVar32;
              local_58 = puVar45;
              local_48 = param_1;
              local_40 = (uint *)param_2;
              puVar20 = (uint *)recovered_10007ff0((long)puVar39);
              param_2 = (ulong)local_40;
              param_1 = local_48;
              puVar48 = local_50;
              puVar30 = uStack_c8;
              if (uStack_c8 != (uint *)0x0) {
                puVar22 = (uint *)0x0;
                if (((uint *)0x3 < uStack_c8) && (0x1f < (ulong)((long)puVar20 - (long)PF_PART8(local_d0, 0)))) {
                  if (uStack_c8 < (uint *)0x20) {
                    puVar45 = (uint *)0x0;
                  }
                  else {
                    puVar22 = (uint *)((ulong)uStack_c8 & 0xffffffffffffffe0);
                    puVar45 = (uint *)0x0;
                    do {
                      uVar19 = *(undefined8 *)((byte *)((long)PF_PART8(local_d0, 0) + (long)puVar45) + 8);
                      uVar10 = *(undefined8 *)((long)((long)PF_PART8(local_d0, 0) + 0x10) + (long)puVar45);
                      uVar11 = *(undefined8 *)
                                ((byte *)((long)((long)PF_PART8(local_d0, 0) + 0x10) + (long)puVar45) + 8);
                      *(undefined8 *)((long)puVar20 + (long)puVar45) =
                           *(undefined8 *)((long)PF_PART8(local_d0, 0) + (long)puVar45);
                      *(undefined8 *)((byte *)((long)puVar20 + (long)puVar45) + 8) = uVar19;
                      *(undefined8 *)((long)(puVar20 + 4) + (long)puVar45) = uVar10;
                      *(undefined8 *)((byte *)((long)(puVar20 + 4) + (long)puVar45) + 8) = uVar11;
                      puVar45 = puVar45 + 8;
                    } while (puVar22 != puVar45);
                    if (uStack_c8 == puVar22) goto LAB_1000a919;
                    puVar45 = puVar22;
                    if (((ulong)uStack_c8 & 0x1c) == 0) goto LAB_1000a8c6;
                  }
                  puVar22 = (uint *)((ulong)uStack_c8 & 0xfffffffffffffffc);
                  do {
                    *(undefined4 *)((long)puVar20 + (long)puVar45) =
                         *(undefined4 *)((long)PF_PART8(local_d0, 0) + (long)puVar45);
                    puVar45 = puVar45 + 1;
                  } while (puVar22 != puVar45);
                  if (uStack_c8 == puVar22) goto LAB_1000a919;
                }
LAB_1000a8c6:
                uVar31 = (ulong)uStack_c8 & 3;
                puVar45 = puVar22;
                if (uVar31 != 0) {
                  do {
                    *(byte *)((long)puVar20 + (long)puVar45) =
                         *(byte *)((long)PF_PART8(local_d0, 0) + (long)puVar45);
                    puVar45 = (uint *)((long)puVar45 + 1);
                    uVar31 = uVar31 - 1;
                  } while (uVar31 != 0);
                }
                if ((ulong)((long)puVar22 - (long)uStack_c8) < 0xfffffffffffffffd) {
                  do {
                    *(byte *)((long)puVar20 + (long)puVar45) =
                         *(byte *)((long)PF_PART8(local_d0, 0) + (long)puVar45);
                    *(byte *)((long)puVar20 + 1 + (long)puVar45) =
                         *(byte *)((long)PF_PART8(local_d0, 0) + 1 + (long)puVar45);
                    *(byte *)((long)puVar20 + 2 + (long)puVar45) =
                         *(byte *)((long)PF_PART8(local_d0, 0) + 2 + (long)puVar45);
                    *(byte *)((long)puVar20 + 3 + (long)puVar45) =
                         *(byte *)((long)PF_PART8(local_d0, 0) + 3 + (long)puVar45);
                    puVar45 = puVar45 + 1;
                  } while (uStack_c8 != puVar45);
                }
              }
LAB_1000a919:
              recovered_10008050((void *)PF_PART8(local_d0, 0));
              local_c0 = local_e8;
              ppuVar32 = local_68;
              puVar39 = local_e8;
              puVar22 = local_80;
              puVar45 = local_58;
              PF_PART8(local_d0,0) = (uint64_t)puVar20;
            }
            while (puVar30 < puVar39) {
              *(byte *)((long)PF_PART8(local_d0, 0) + (long)puVar30) = 0xff;
              puVar30 = (uint *)((long)uStack_c8 + 1);
              uStack_c8 = puVar30;
            }
            if (local_114 != 0) {
              puVar23 = (ushort *)((long)param_1 + (long)puVar45);
              iVar29 = (int)puVar48;
              uVar31 = 0;
              do {
                if ((char)puVar48 == '\b') {
                  bVar34 = (byte)*puVar23;
                  *(byte *)((long)PF_PART8(local_d0, 0) + uVar31 * 4) = bVar34;
LAB_1000aa3e:
                  *(byte *)((long)PF_PART8(local_d0, 0) + uVar31 * 4 + 1) = bVar34;
                  *(byte *)((long)PF_PART8(local_d0, 0) + uVar31 * 4 + 2) = (byte)*puVar23;
LAB_1000aa11:
                  bVar34 = 0xff;
                }
                else {
                  if (iVar29 - 0xfU < 2) {
                    uVar26 = *puVar23;
                    *(char *)((long)PF_PART8(local_d0, 0) + uVar31 * 4) =
                         (char)((uVar26 >> 10 & 0x1f) * 0x20e7f7 >> 0x12);
                    *(char *)((long)PF_PART8(local_d0, 0) + uVar31 * 4 + 1) =
                         (char)((uVar26 >> 5 & 0x1f) * 0x20e7f7 >> 0x12);
                    *(char *)((long)PF_PART8(local_d0, 0) + uVar31 * 4 + 2) =
                         (char)((uVar26 & 0x1f) * 0x20e7f7 >> 0x12);
                    goto LAB_1000aa11;
                  }
                  if (iVar29 != 0x20) {
                    if (iVar29 == 0x18) {
                      *(byte *)((long)PF_PART8(local_d0, 0) + uVar31 * 4) = (byte)puVar23[1];
                      bVar34 = *(byte *)((long)puVar23 + 1);
                      goto LAB_1000aa3e;
                    }
                    bVar34 = 0;
                    goto LAB_1000af0b;
                  }
                  *(byte *)((long)PF_PART8(local_d0, 0) + uVar31 * 4) = (byte)puVar23[1];
                  *(byte *)((long)PF_PART8(local_d0, 0) + uVar31 * 4 + 1) = *(byte *)((long)puVar23 + 1);
                  *(byte *)((long)PF_PART8(local_d0, 0) + uVar31 * 4 + 2) = (byte)*puVar23;
                  bVar34 = *(byte *)((long)puVar23 + 3);
                }
                *(byte *)((long)PF_PART8(local_d0, 0) + uVar31 * 4 + 3) = bVar34;
                uVar31 = uVar31 + 1;
                puVar23 = (ushort *)((long)puVar23 + (long)puVar22);
              } while (uVar31 < local_114);
            }
            puVar45 = (uint *)((long)puVar45 + (long)local_60);
            puVar22 = local_38;
            param_3 = local_70;
            goto LAB_1000aaa7;
          }
        }
      }
      else {
LAB_1000aaa7:
        local_240 = (uint *)((ulong)local_10c * (ulong)local_110);
        if ((ulong)local_240 >> 0x3e == 0) {
          PF_PART8(local_98,0) = (uint64_t)0x0;
          puStack_90 = (uint *)0x0;
          local_88 = (uint *)0x0;
          local_70 = param_3;
          local_68 = ppuVar32;
          local_48 = param_1;
          local_40 = (uint *)param_2;
          if (local_240 != (uint *)0x0) {
            local_50 = (uint *)((long)local_240 * 4);
            local_168 = 5;
            local_58 = puVar45;
            local_38 = puVar22;
            puVar30 = (uint *)recovered_10007ff0((long)local_50);
            param_2 = (ulong)local_40;
            param_1 = local_48;
            puVar48 = puStack_90;
            if (puStack_90 != (uint *)0x0) {
              puVar22 = (uint *)0x0;
              if (((uint *)0x3 < puStack_90) && (0x1f < (ulong)((long)puVar30 - (long)PF_PART8(local_98, 0)))) {
                if (puStack_90 < (uint *)0x20) {
                  puVar45 = (uint *)0x0;
                }
                else {
                  puVar22 = (uint *)((ulong)puStack_90 & 0xffffffffffffffe0);
                  puVar45 = (uint *)0x0;
                  do {
                    uVar19 = *(undefined8 *)((byte *)((long)PF_PART8(local_98, 0) + (long)puVar45) + 8);
                    uVar10 = *(undefined8 *)((long)((long)PF_PART8(local_98, 0) + 0x10) + (long)puVar45);
                    uVar11 = *(undefined8 *)
                              ((byte *)((long)((long)PF_PART8(local_98, 0) + 0x10) + (long)puVar45) + 8);
                    *(undefined8 *)((long)puVar30 + (long)puVar45) =
                         *(undefined8 *)((long)PF_PART8(local_98, 0) + (long)puVar45);
                    *(undefined8 *)((byte *)((long)puVar30 + (long)puVar45) + 8) = uVar19;
                    *(undefined8 *)((long)(puVar30 + 4) + (long)puVar45) = uVar10;
                    *(undefined8 *)((byte *)((long)(puVar30 + 4) + (long)puVar45) + 8) = uVar11;
                    puVar45 = puVar45 + 8;
                  } while (puVar22 != puVar45);
                  if (puStack_90 == puVar22) goto LAB_1000abf8;
                  puVar45 = puVar22;
                  if (((ulong)puStack_90 & 0x1c) == 0) goto LAB_1000aba5;
                }
                puVar22 = (uint *)((ulong)puStack_90 & 0xfffffffffffffffc);
                do {
                  *(undefined4 *)((long)puVar30 + (long)puVar45) =
                       *(undefined4 *)((long)PF_PART8(local_98, 0) + (long)puVar45);
                  puVar45 = puVar45 + 1;
                } while (puVar22 != puVar45);
                if (puStack_90 == puVar22) goto LAB_1000abf8;
              }
LAB_1000aba5:
              uVar31 = (ulong)puStack_90 & 3;
              puVar45 = puVar22;
              if (uVar31 != 0) {
                do {
                  *(byte *)((long)puVar30 + (long)puVar45) =
                       *(byte *)((long)PF_PART8(local_98, 0) + (long)puVar45);
                  puVar45 = (uint *)((long)puVar45 + 1);
                  uVar31 = uVar31 - 1;
                } while (uVar31 != 0);
              }
              if ((ulong)((long)puVar22 - (long)puStack_90) < 0xfffffffffffffffd) {
                do {
                  *(byte *)((long)puVar30 + (long)puVar45) =
                       *(byte *)((long)PF_PART8(local_98, 0) + (long)puVar45);
                  *(byte *)((long)puVar30 + 1 + (long)puVar45) =
                       *(byte *)((long)PF_PART8(local_98, 0) + 1 + (long)puVar45);
                  *(byte *)((long)puVar30 + 2 + (long)puVar45) =
                       *(byte *)((long)PF_PART8(local_98, 0) + 2 + (long)puVar45);
                  *(byte *)((long)puVar30 + 3 + (long)puVar45) =
                       *(byte *)((long)PF_PART8(local_98, 0) + 3 + (long)puVar45);
                  puVar45 = puVar45 + 1;
                } while (puStack_90 != puVar45);
              }
            }
LAB_1000abf8:
            recovered_10008050((void *)PF_PART8(local_98, 0));
            local_88 = local_50;
            while( true ) {
              puVar45 = local_58;
              puVar22 = local_38;
              PF_PART8(local_98,0) = (uint64_t)puVar30;
              if (local_50 <= puVar48) break;
              *(byte *)((long)puVar30 + (long)puVar48) = 0;
              puVar48 = (uint *)((long)puStack_90 + 1);
              puStack_90 = puVar48;
            }
          }
          local_60 = (uint *)((ulong)local_224 + 7 >> 3);
          PF_PART8(auVar12, 8) = 0;
          PF_PART8(auVar12, 0) = PF_PART8(local_258, 8);
          PF_PART16(local_258,0) = auVar12 << 0x40;
          stack0xfffffffffffffe00 = &local_240;
          PF_PART8(local_208, 0) = local_258;
          local_1f8 = &local_26c;
          PF_PART8(local_1f0, 8) = &local_220;
          PF_PART8(local_1f0, 0) = &local_224;
          local_1e0 = &local_114;
          puStack_1d0 = &local_270;
          PF_PART8(local_1d8,0) = (uint64_t)local_d0;
          local_1c8 = &local_110;
          puStack_1b8 = (uint *)local_98;
          PF_PART8(local_1c0,0) = (uint64_t)&local_10c;
          if ((byte)puVar22 < 8) {
            if (local_240 == (uint *)0x0) {
              if (puVar45 <= param_2) goto LAB_1000ae8c;
LAB_1000ae87:
              bVar34 = 0;
            }
            else {
              bVar34 = 0;
              PF_PART8(auVar2, 8) = 0;
              PF_PART8(auVar2, 0) = local_240;
              PF_PART8(auVar4, 8) = 0;
              PF_PART8(auVar4, 0) = local_60;
              if (((SUB168(auVar2 * auVar4,8) == 0) && (puVar45 <= param_2)) &&
                 ((ulong)((long)local_240 * (long)local_60) <= param_2 - (long)puVar45)) {
                puVar45 = (uint *)((long)param_1 + (long)puVar45);
                puVar48 = (uint *)0x0;
                do {
                  local_168 = 6;
                  local_48 = puVar45;
                  local_40 = puVar48;
                  uVar19 = recovered_100148c0((undefined8 *)local_208,(ushort *)puVar45);
                  if ((char)uVar19 == '\0') goto LAB_1000ae87;
                  puVar48 = (uint *)((long)local_40 + 1);
                  puVar45 = (uint *)((long)local_48 + (long)local_60);
                } while (puVar48 < local_240);
                goto LAB_1000ae8c;
              }
            }
          }
          else {
            if (local_240 != (uint *)0x0) {
              local_80 = (uint *)(param_2 + -1);
              do {
                if (param_2 <= puVar45) goto LAB_1000ae87;
                puVar48 = (uint *)((long)puVar45 + 1);
                iVar29 = (*(byte *)((long)param_1 + (long)puVar45) & 0x7f) + 1;
                if ((char)*(byte *)((long)param_1 + (long)puVar45) < '\0') {
                  if ((uint *)(param_2 - (long)puVar48) < local_60) goto LAB_1000ae87;
                  local_58 = (uint *)((long)param_1 + (long)puVar48);
                  local_50 = (uint *)((long)puVar48 + (long)local_60);
                  do {
                    local_38 = (uint *)CONCAT44(PF_PART4(local_38, 4),iVar29);
                    local_168 = 7;
                    uVar19 = recovered_100148c0((undefined8 *)local_208,(ushort *)local_58);
                    if ((char)uVar19 == '\0') goto LAB_1000ae87;
                    iVar29 = (int)local_38 + -1;
                  } while (iVar29 != 0);
                  puVar48 = local_50;
                }
                else {
                  puVar22 = (uint *)((long)local_80 - (long)puVar45);
                  do {
                    bVar34 = 0;
                    if ((param_2 < puVar48) || (puVar22 < local_60)) goto LAB_1000aeed;
                    local_38 = (uint *)CONCAT44(PF_PART4(local_38, 4),iVar29);
                    local_168 = 8;
                    local_58 = (uint *)((long)puVar22 - (long)local_60);
                    local_50 = puVar48;
                    uVar19 = recovered_100148c0((undefined8 *)local_208,
                                                (ushort *)((long)param_1 + (long)puVar48));
                    if ((char)uVar19 == '\0') goto LAB_1000ae87;
                    puVar48 = (uint *)((long)local_50 + (long)local_60);
                    iVar29 = (int)local_38 + -1;
                    puVar22 = local_58;
                    param_1 = local_48;
                    param_2 = (ulong)local_40;
                  } while (iVar29 != 0);
                }
                puVar45 = puVar48;
                param_1 = local_48;
                param_2 = (ulong)local_40;
              } while ((ulong)PF_PART8(local_258, 0) < local_240);
            }
LAB_1000ae8c:
            puVar48 = local_70;
            *local_70 = local_110;
            local_70[1] = local_10c;
            bVar34 = 1;
            if (local_68 != (uint **)local_98) {
              local_70[4] = 0;
              local_70[5] = 0;
              recovered_10008050(*(void **)(local_70 + 2));
              { unsigned char pf_copy[8]; __builtin_memcpy(pf_copy,local_98,8); __builtin_memcpy((puVar48 + 2),pf_copy,8); }
              *(uint **)(puVar48 + 4) = puStack_90;
              *(uint **)(puVar48 + 6) = local_88;
              PF_PART8(local_98,0) = (uint64_t)0x0;
              local_88 = (uint *)0x0;
            }
          }
LAB_1000aeed:
          puStack_90 = (uint *)0x0;
          recovered_10008050((void *)PF_PART8(local_98, 0));
        }
        else {
          bVar34 = 0;
        }
      }
LAB_1000af0b:
      uStack_c8 = (uint *)0x0;
      (*(uint64_t *)(void *)auVar41) = (*(uint64_t *)(void *)local_d0);
      goto LAB_1000af16;
    }
  }
LAB_10009ec6:
  bVar34 = 0;
  goto LAB_1000af1b;
joined_r0x1000b92f:
  local_210 = (ulong)puVar45;
  local_70 = puVar48;
  if (local_210 == 0) goto LAB_1000b935;
  PF_PART12(local_d0,0) = ZEXT812(0);
  PF_PART3(uStack_c8, 5) = PF_PART3(auVar13, 13);
  PF_PART1(uStack_c8, 4) = 1;
  local_c0 = (uint *)0xff;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_168 = 0xd;
  uVar15 = recovered_100150e0((long)local_48,(ulong)puVar22,(long)local_208,
                              *(ulong *)((long)PF_PART8(local_98, 0) + (local_210 * 2 + -2) * 4),(uint *)local_d0
                             );
  if (uVar15 == '\0') {
LAB_1000bbfb:
    bVar34 = 0;
    goto LAB_1000bbfe;
  }
  puVar22 = local_40;
  if ((PF_PART1(uStack_c8, 4) == '\x01') && ((int)local_c0 != 0)) {
    PF_PART16(local_258,0) = (uint128)0x0;
    local_248 = 0;
    local_168 = 0xe;
    uVar31 = recovered_100153f0((long)local_48,(ulong)local_40,(long)local_208,(uint *)local_d0,
                                (long *)local_258);
    if ((char)uVar31 == '\0') {
      PF_PART8(local_258, 8) = 0;
      recovered_10008050((void *)PF_PART8(local_258, 0));
      goto LAB_1000bbfb;
    }
    local_268 = (uint *)(ulong)(uint)PF_PART4(local_d0, 4);
    puVar22 = local_40;
    if (local_268 != (uint *)0x0) {
      local_d4 = local_b8;
      local_218 = (uint *)(ulong)(uint)PF_PART4(local_d0, 0);
      local_74 = PF_PART4(local_c0, 4);
      local_f0 = (long)local_218 * 4;
      local_e8 = (uint *)0x0;
      puVar48 = (uint *)0x0;
      do {
        uVar18 = local_d4 + (int)puVar48;
        local_100 = puVar48;
        if ((-1 < (int)uVar18 && (int)local_218 != 0) && (int)uVar18 < (int)local_f8) {
          local_80 = (uint *)((ulong)uVar18 * (long)local_50);
          puVar48 = local_218;
          puVar45 = local_e8;
          uVar18 = local_74;
          do {
            local_38 = puVar48;
            if ((int)uVar18 < (int)local_50 && -1 < (int)uVar18) {
              local_168 = 0xf;
              local_58 = (uint *)CONCAT44(PF_PART4(local_58, 4),uVar18);
              local_60 = puVar45;
              recovered_10015c80((byte *)(local_240 + (long)((ulong)uVar18 + (long)local_80)),
                                 (byte *)(PF_PART8(local_258, 0) + (long)puVar45));
              puVar22 = local_40;
              puVar45 = local_60;
              uVar18 = (uint)local_58;
            }
            puVar45 = puVar45 + 1;
            uVar18 = uVar18 + 1;
            puVar48 = (uint *)((long)local_38 + -1);
          } while (puVar48 != (uint *)0x0);
        }
        puVar48 = (uint *)((long)local_100 + 1);
        local_e8 = (uint *)((long)local_e8 + local_f0);
      } while (puVar48 != local_268);
    }
    PF_PART8(local_258, 8) = 0;
    recovered_10008050((void *)PF_PART8(local_258, 0));
  }
  puVar45 = (uint *)(local_210 - 1);
  uVar31 = local_210;
  auVar13 = PF_PART16(local_d0,0);
  puVar48 = local_70;
  goto joined_r0x1000b92f;
LAB_1000b935:
  *puVar48 = (uint)local_50;
  puVar48[1] = (uint)local_f8;
  bVar34 = 1;
  local_210 = uVar31;
  PF_PART16(local_d0,0) = auVar13;
  if (local_68 != &local_240) {
    puVar48[4] = 0;
    puVar48[5] = 0;
    recovered_10008050(*(void **)(puVar48 + 2));
    *(uint **)(puVar48 + 2) = local_240;
    *(undefined8 *)(puVar48 + 4) = local_238;
    *(undefined8 *)(puVar48 + 6) = uStack_230;
    local_240 = (uint *)0x0;
    uStack_230 = 0;
  }
LAB_1000bbfe:
  local_238 = 0;
  recovered_10008050(local_240);
LAB_1000b4a5:
  puStack_90 = (uint *)0x0;
  recovered_10008050((void *)PF_PART8(local_98, 0));
LAB_1000b4bc:
  (*(uint64_t *)(void *)auVar41) = (uint64_t)PF_PART8(local_1f0, 0);
LAB_1000af16:
  recovered_10008050((void *)PF_PART8(auVar41, 0));
LAB_1000af1b:
  recovered_10008660(&local_170);
  return bVar34 & 1;
}

#undef DAT_1000beec
#undef DAT_1001b240
#undef LAB_1000bcf2
#undef local_298
#undef local_290
#undef local_288
#undef local_280
#undef local_278
#undef local_270
#undef local_26c
#undef local_268
#undef local_260
#undef local_258
#undef local_248
#undef local_240
#undef local_238
#undef local_224
#undef local_220
#undef local_218
#undef local_210
#undef local_208
#undef local_1f8
#undef local_1f0
#undef local_1e0
#undef local_1d8
#undef local_1c8
#undef local_1c0
#undef local_1b0
#undef local_1a8
#undef local_198
#undef local_190
#undef local_180
#undef local_170
#undef local_168
#undef local_150
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d4
#undef local_d0
#undef local_c0
#undef local_b8
#undef local_a8
#undef local_a0
#undef local_98
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
#undef uStack_230
#undef uStack_1fc
#undef puStack_1d0
#undef puStack_1b8
#undef uStack_c8
#undef uStack_b4
#undef uStack_b0
#undef uStack_ac
#undef uStack_a7
#undef uStack_a6
#undef puStack_90
#undef stack0xfffffffffffffdfc
#undef stack0xfffffffffffffe00
#undef stack0xffffffffffffff31

#undef DAT_1001b284
#define DAT_1001b284 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x758U)))
#undef LAB_1000c4b8
#define LAB_1000c4b8 (*(uint8_t *)(0x1000c4b8U))
#define local_138 (*(undefined8 *)(pf_stack_frame + 24))
#define local_130 (*(undefined4 *)(pf_stack_frame + 32))
#define local_118 (*(code * *)(pf_stack_frame + 56))
#define local_110 (*(undefined * *)(pf_stack_frame + 64))
#define local_108 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_100 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_f8 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_e0 (*(byte * *)(pf_stack_frame + 112))
#define local_d0 (*(undefined8 *)(pf_stack_frame + 128))
#define uStack_d8 (*(undefined8 *)(pf_stack_frame + 120))
#define local_c8 (*(ulong *)(pf_stack_frame + 136))
#define local_c0 (*(byte * *)(pf_stack_frame + 144))
#define local_b8 (*(byte * *)(pf_stack_frame + 152))
#define local_b0 (*(long *)(pf_stack_frame + 160))
#define local_a8 (*(uint * *)(pf_stack_frame + 168))
#define local_a0 (*(uint * *)(pf_stack_frame + 176))
#define local_98 (*(ulong *)(pf_stack_frame + 184))
#define local_90 (*(ulong *)(pf_stack_frame + 192))
#define local_88 (*(long * *)(pf_stack_frame + 200))
#define local_80 (*(byte * *)(pf_stack_frame + 208))
#define local_78 (*(byte * *)(pf_stack_frame + 216))
#define local_58 (*(byte * *)(pf_stack_frame + 248))
#define local_50 (*(byte * *)(pf_stack_frame + 256))
#define uStack_70 (*(undefined4 *)(pf_stack_frame + 224))
#define local_48 (*(ulong *)(pf_stack_frame + 264))
#define uStack_6c (*(undefined4 *)(pf_stack_frame + 228))
#define local_40 (*(ulong *)(pf_stack_frame + 272))
#define uStack_68 (*(undefined4 *)(pf_stack_frame + 232))
#define local_38 (*(uint * *)(pf_stack_frame + 280))
#define uStack_64 (*(undefined4 *)(pf_stack_frame + 236))
#define uStack_60 (*(undefined4 *)(pf_stack_frame + 240))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bfd0
 */

ulong recovered_1000bfd0(uint *param_1,byte *param_2,long *param_3)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  byte bVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined7 uVar21;

  local_108 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 336) + -8);
  local_f8 = (undefined1 *)&local_138;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_118 = recovered_10007fa0;
  local_110 = &DAT_1001b284;
  local_100 = &LAB_1000c4b8;
  local_80 = param_2;
  local_38 = param_1;
  recovered_10008640(&local_138);
  if ((ulong)uVar3 * (ulong)uVar2 >> 0x3e == 0) {
    uVar15 = (ulong)uVar3 * (ulong)uVar2 * 4;
    param_3[1] = 0;
    if ((ulong)param_3[2] < uVar15) {
      local_130 = 0xffffffff;
      lVar9 = recovered_10007ff0(uVar15);
      pvVar4 = (void *)*param_3;
      uVar10 = param_3[1];
      if (uVar10 != 0) {
        uVar12 = 0;
        if ((3 < uVar10) && (0x1f < (ulong)(lVar9 - (long)pvVar4))) {
          if (uVar10 < 0x20) {
            uVar13 = 0;
          }
          else {
            uVar12 = uVar10 & 0xffffffffffffffe0;
            uVar13 = 0;
            do {
              uVar5 = ((undefined8 *)((long)pvVar4 + uVar13))[1];
              puVar1 = (undefined8 *)((long)pvVar4 + uVar13 + 0x10);
              uVar6 = *puVar1;
              uVar7 = puVar1[1];
              *(undefined8 *)(lVar9 + uVar13) = *(undefined8 *)((long)pvVar4 + uVar13);
              ((undefined8 *)(lVar9 + uVar13))[1] = uVar5;
              puVar1 = (undefined8 *)(lVar9 + 0x10 + uVar13);
              *puVar1 = uVar6;
              puVar1[1] = uVar7;
              uVar13 = uVar13 + 0x20;
            } while (uVar12 != uVar13);
            if (uVar10 == uVar12) goto LAB_1000c17f;
            uVar13 = uVar12;
            if ((uVar10 & 0x1c) == 0) goto LAB_1000c115;
          }
          uVar12 = uVar10 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)(lVar9 + uVar13) = *(undefined4 *)((long)pvVar4 + uVar13);
            uVar13 = uVar13 + 4;
          } while (uVar12 != uVar13);
          if (uVar10 == uVar12) goto LAB_1000c17f;
        }
LAB_1000c115:
        uVar18 = uVar10 & 3;
        uVar13 = uVar12;
        if (uVar18 != 0) {
          do {
            *(undefined1 *)(lVar9 + uVar13) = *(undefined1 *)((long)pvVar4 + uVar13);
            uVar13 = uVar13 + 1;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (uVar12 - uVar10 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)(lVar9 + uVar13) = *(undefined1 *)((long)pvVar4 + uVar13);
            *(undefined1 *)(lVar9 + 1 + uVar13) = *(undefined1 *)((long)pvVar4 + uVar13 + 1);
            *(undefined1 *)(lVar9 + 2 + uVar13) = *(undefined1 *)((long)pvVar4 + uVar13 + 2);
            *(undefined1 *)(lVar9 + 3 + uVar13) = *(undefined1 *)((long)pvVar4 + uVar13 + 3);
            uVar13 = uVar13 + 4;
          } while (uVar10 != uVar13);
        }
      }
LAB_1000c17f:
      recovered_10008050(pvVar4);
      *param_3 = lVar9;
      param_3[2] = uVar15;
      uVar10 = param_3[1];
    }
    else {
      uVar10 = 0;
      lVar9 = 0;
    }
    while (uVar10 < uVar15) {
      *(undefined1 *)(*param_3 + uVar10) = 0;
      uVar10 = param_3[1] + 1;
      param_3[1] = uVar10;
    }
    lVar11 = *(long *)(local_38 + 0x20);
    local_88 = param_3;
    if (lVar11 == 0) {
LAB_1000c21d:
      local_78 = (byte *)0x0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_130 = 1;
      uVar15 = recovered_1000c540(local_38,(long *)(local_38 + 0x18),local_80,(long *)&local_78);
      plVar8 = local_88;
      if (((char)uVar15 == '\0') || (lVar11 = CONCAT44(uStack_6c,uStack_70), lVar11 != local_88[1]))
      {
        pbVar19 = local_78;
LAB_1000c48a:
        recovered_10008050(pbVar19);
        goto LAB_1000c48f;
      }
      local_88[1] = 0;
      recovered_10008050((void *)*local_88);
      *plVar8 = (long)local_78;
      plVar8[1] = lVar11;
      plVar8[2] = CONCAT44(uStack_64,uStack_68);
      recovered_10008050((void *)0x0);
      puVar16 = *(uint **)(local_38 + 0x1e);
      lVar11 = *(long *)(local_38 + 0x20);
    }
    else {
      puVar16 = *(uint **)(local_38 + 0x1e);
      bVar17 = 0;
      puVar14 = puVar16;
      do {
        while ((bVar17 & 1) != 0) {
          puVar14 = puVar14 + 0xe;
          bVar17 = 1;
          if (puVar14 == puVar16 + lVar11 * 0xe) goto LAB_1000c2a1;
        }
        bVar17 = (byte)puVar14[6];
        puVar14 = puVar14 + 0xe;
      } while (puVar14 != puVar16 + lVar11 * 0xe);
      if (bVar17 == 0) goto LAB_1000c21d;
    }
LAB_1000c2a1:
    uVar21 = (undefined7)((ulong)lVar9 >> 8);
    uVar15 = CONCAT71(uVar21,1);
    if (lVar11 != 0) {
      local_a8 = puVar16 + lVar11 * 0xe;
      do {
        uStack_68 = (undefined4)((ulong)*(undefined8 *)(local_38 + 3) >> 0x20);
        uStack_64 = (undefined4)*(undefined8 *)(local_38 + 5);
        uStack_60 = (undefined4)((ulong)*(undefined8 *)(local_38 + 5) >> 0x20);
        uStack_70 = (undefined4)*(undefined8 *)(local_38 + 2);
        uStack_6c = (undefined4)((ulong)*(undefined8 *)(local_38 + 2) >> 0x20);
        local_40 = (ulong)*puVar16;
        local_78 = *(byte **)puVar16;
        local_98 = (ulong)puVar16[1];
        local_e0 = (byte *)0x0;
        uStack_d8 = 0;
        local_d0 = 0;
        local_130 = 2;
        local_a0 = puVar16;
        uVar15 = recovered_1000c540((uint *)&local_78,(long *)(puVar16 + 8),local_80,
                                    (long *)&local_e0);
        if ((char)uVar15 == '\0') {
          pbVar19 = local_e0;
          goto LAB_1000c48a;
        }
        local_90 = (ulong)*local_38;
        local_58 = local_e0;
        puVar16 = local_a0;
        if (local_98 != 0) {
          local_b0 = local_40 * 4;
          local_90 = local_90 << 2;
          local_50 = local_e0;
          local_48 = 0;
          do {
            if ((int)local_40 != 0) {
              pbVar20 = (byte *)((ulong)puVar16[2] * 4 + *local_88 +
                                (puVar16[3] + (int)local_48) * local_90);
              uVar15 = local_40;
              pbVar19 = local_50;
              do {
                local_c8 = uVar15;
                local_c0 = pbVar20;
                local_b8 = pbVar19;
                if (puVar16[5] == 0) {
                  local_130 = 3;
                  recovered_10001cc0(pbVar20,pbVar19,4);
                }
                else {
                  local_130 = 4;
                  recovered_10015c80(pbVar20,pbVar19);
                }
                pbVar20 = local_c0 + 4;
                pbVar19 = local_b8 + 4;
                uVar15 = local_c8 - 1;
                puVar16 = local_a0;
              } while (uVar15 != 0);
            }
            local_48 = local_48 + 1;
            local_50 = local_50 + local_b0;
          } while (local_48 != local_98);
        }
        recovered_10008050(local_58);
        puVar16 = puVar16 + 0xe;
      } while (puVar16 != local_a8);
      uVar15 = CONCAT71(uVar21,1);
    }
  }
  else {
LAB_1000c48f:
    uVar15 = 0;
  }
  recovered_10008660(&local_138);
  return uVar15 & 0xffffffff;
}

#undef DAT_1001b284
#undef LAB_1000c4b8
#undef local_138
#undef local_130
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_f8
#undef local_e0
#undef local_d0
#undef uStack_d8
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
#undef local_58
#undef local_50
#undef uStack_70
#undef local_48
#undef uStack_6c
#undef local_40
#undef uStack_68
#undef local_38
#undef uStack_64
#undef uStack_60

#undef DAT_1001afdc
#define DAT_1001afdc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4b0U)))
#undef DAT_1001aff8
#define DAT_1001aff8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ccU)))
#undef DAT_1001b014
#define DAT_1001b014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e8U)))
#undef DAT_1001b030
#define DAT_1001b030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x504U)))
#undef DAT_1001b06c
#define DAT_1001b06c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x540U)))
#undef DAT_1001b290
#define DAT_1001b290 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x764U)))
#undef LAB_1000e2bf
#define LAB_1000e2bf (*(uint8_t *)(0x1000e2bfU))
#define uStack_f8 (*(undefined8 *)(pf_stack_frame + 216))
#define pvStack_e8 (*(void * *)(pf_stack_frame + 232))
#define uStack_d8 (*(undefined8 *)(pf_stack_frame + 248))
#define local_1b8 (*(byte * *)(pf_stack_frame + 24))
#define local_1b0 (*(byte * *)(pf_stack_frame + 32))
#define local_1a8 (*(ulong *)(pf_stack_frame + 40))
#define local_1a0 (*(ulong *)(pf_stack_frame + 48))
#define local_198 (*(long *)(pf_stack_frame + 56))
#define local_190 (*(uint *)(pf_stack_frame + 64))
#define local_18c (*(uint *)(pf_stack_frame + 68))
#define local_188 (*(byte * *)(pf_stack_frame + 72))
#define local_180 (*(ulong *)(pf_stack_frame + 80))
#define local_178 (*(byte * *)(pf_stack_frame + 88))
#define local_16c (*(uint *)(pf_stack_frame + 100))
#define local_168 (*(ulong *)(pf_stack_frame + 104))
#define local_160 (*(byte * *)(pf_stack_frame + 112))
#define local_158 (*(undefined8 *)(pf_stack_frame + 120))
#define local_150 (*(undefined4 *)(pf_stack_frame + 128))
#define local_138 (*(code * *)(pf_stack_frame + 152))
#define local_130 (*(undefined * *)(pf_stack_frame + 160))
#define local_128 (*(undefined1 * *)(pf_stack_frame + 168))
#define local_120 (*(undefined1 * *)(pf_stack_frame + 176))
#define local_118 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_100 (*(void * *)(pf_stack_frame + 208))
#define local_f0 (*(undefined8 *)(pf_stack_frame + 224))
#define local_e0 (*(byte * *)(pf_stack_frame + 240))
#define local_d0 (*(byte * *)(pf_stack_frame + 256))
#define local_c8 (*(byte * *)(pf_stack_frame + 264))
#define local_c0 (*(byte * *)(pf_stack_frame + 272))
#define local_b8 (*(byte * *)(pf_stack_frame + 280))
#define local_b0 (*(long * *)(pf_stack_frame + 288))
#define local_a8 (*(byte * *)(pf_stack_frame + 296))
#define local_a0 (*(byte * *)(pf_stack_frame + 304))
#define local_98 (*(byte * *)(pf_stack_frame + 312))
#define local_90 (*(byte * *)(pf_stack_frame + 320))
#define local_88 (*(byte * *)(pf_stack_frame + 328))
#define local_80 (*(ulong *)(pf_stack_frame + 336))
#define local_78 (*(byte * *)(pf_stack_frame + 344))
#define local_70 (*(byte * *)(pf_stack_frame + 352))
#define local_68 (*(byte * *)(pf_stack_frame + 360))
#define local_5c (*(uint *)(pf_stack_frame + 372))
#define local_58 (*(uint * *)(pf_stack_frame + 376))
#define local_50 (*(byte * *)(pf_stack_frame + 384))
#define local_48 (*(byte * *)(pf_stack_frame + 392))
#define local_40 (*(byte * *)(pf_stack_frame + 400))
#define local_38 (*(byte * *)(pf_stack_frame + 408))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c540
 */

ulong recovered_1000c540(uint *param_1,long *param_2,byte *param_3,long *param_4)

{
  unsigned char pf_stack_frame[496] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint128 auVar9;
  uint128 auVar10;
  uint128 auVar11;
  uint128 auVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte bVar23;
  byte bVar24;
  undefined1 uVar25;
  ulong uVar26;
  byte bVar27;
  char cVar28;
  ushort uVar29;
  ushort uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  uint *puVar34;
  ushort uVar35;
  ulong uVar36;
  byte *pbVar37;
  long lVar38;
  long *plVar39;
  bool bVar40;

  local_128 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 464) + -8);
  local_118 = (undefined1 *)&local_1b8;
  uVar19 = param_1[6];
  uVar6 = *param_1;
  uVar36 = (ulong)uVar6;
  local_138 = recovered_10007fa0;
  local_130 = &DAT_1001b290;
  local_120 = &LAB_1000e2bf;
  local_78 = param_3;
  recovered_10008640(&local_158);
  if (uVar19 == 0) {
    uVar19 = param_1[3];
    if (((ulong)uVar19 < 7) && ((0x5dU >> (uVar19 & 0x1f) & 1) != 0)) {
      uVar32 = (ulong)(param_1[2] * *(int *)(&DAT_1001b06c + (ulong)uVar19 * 4));
    }
    else {
      uVar32 = 0;
    }
    uVar26 = CONCAT44(0,param_1[1]);
    if ((byte *)(uVar26 * uVar36) < (byte *)0x4000000000000000) {
      pbVar20 = (byte *)((ulong)((byte *)(uVar32 * uVar36) + 7) >> 3);
      pbVar18 = pbVar20 + 1;
      PF_PART8(auVar10, 8) = 0;
      PF_PART8(auVar10, 0) = pbVar18;
      PF_PART8(auVar12, 8) = 0;
      PF_PART8(auVar12, 0) = uVar26;
      if (SUB168(auVar10 * auVar12,8) == 0) {
        local_100 = (void *)0x0;
        uStack_f8 = 0;
        local_f0 = 0;
        pvStack_e8 = (void *)0x0;
        local_e0 = (byte *)0x0;
        uStack_d8 = 0;
        local_d0 = (byte *)0x0;
        local_150 = 1;
        local_b0 = param_4;
        local_88 = pbVar20;
        local_70 = pbVar18;
        local_58 = param_1;
        local_50 = (byte *)(uVar32 * uVar36);
        local_48 = (byte *)(uVar26 * uVar36);
        uVar36 = recovered_10019c70((long *)&local_100,param_2,uVar26 * (long)pbVar18);
        if ((char)uVar36 == '\0') goto LAB_1000c861;
        pbVar20 = (byte *)((long)local_48 * 4);
        pbVar18 = (byte *)local_b0[1];
        puVar34 = local_58;
        pbVar21 = local_70;
        if (pbVar20 < pbVar18) {
          local_b0[1] = (long)pbVar20;
        }
        else if (pbVar18 < pbVar20) {
          plVar39 = local_b0;
          if ((byte *)local_b0[2] < pbVar20) {
            local_150 = 2;
            local_48 = pbVar20;
            param_2 = (long *)recovered_10007ff0((long)pbVar20);
            plVar39 = local_b0;
            pvVar8 = (void *)*local_b0;
            uVar36 = local_b0[1];
            if (uVar36 != 0) {
              uVar32 = 0;
              if ((3 < uVar36) && (0x1f < (ulong)((long)param_2 - (long)pvVar8))) {
                if (uVar36 < 0x20) {
                  uVar26 = 0;
                }
                else {
                  uVar32 = uVar36 & 0xffffffffffffffe0;
                  uVar26 = 0;
                  do {
                    uVar13 = ((undefined8 *)((long)pvVar8 + uVar26))[1];
                    puVar1 = (undefined8 *)((long)pvVar8 + uVar26 + 0x10);
                    uVar14 = *puVar1;
                    uVar15 = puVar1[1];
                    *(undefined8 *)((long)param_2 + uVar26) = *(undefined8 *)((long)pvVar8 + uVar26)
                    ;
                    ((undefined8 *)((long)param_2 + uVar26))[1] = uVar13;
                    puVar1 = (undefined8 *)((long)param_2 + uVar26 + 0x10);
                    *puVar1 = uVar14;
                    puVar1[1] = uVar15;
                    uVar26 = uVar26 + 0x20;
                  } while (uVar32 != uVar26);
                  if (uVar36 == uVar32) goto LAB_1000d695;
                  uVar26 = uVar32;
                  if ((uVar36 & 0x1c) == 0) goto LAB_1000d641;
                }
                uVar32 = uVar36 & 0xfffffffffffffffc;
                do {
                  *(undefined4 *)((long)param_2 + uVar26) = *(undefined4 *)((long)pvVar8 + uVar26);
                  uVar26 = uVar26 + 4;
                } while (uVar32 != uVar26);
                if (uVar36 == uVar32) goto LAB_1000d695;
              }
LAB_1000d641:
              uVar33 = uVar36 & 3;
              uVar26 = uVar32;
              if (uVar33 != 0) {
                do {
                  *(undefined1 *)((long)param_2 + uVar26) = *(undefined1 *)((long)pvVar8 + uVar26);
                  uVar26 = uVar26 + 1;
                  uVar33 = uVar33 - 1;
                } while (uVar33 != 0);
              }
              if (uVar32 - uVar36 < 0xfffffffffffffffd) {
                do {
                  *(undefined1 *)((long)param_2 + uVar26) = *(undefined1 *)((long)pvVar8 + uVar26);
                  *(undefined1 *)((long)param_2 + uVar26 + 1) =
                       *(undefined1 *)((long)pvVar8 + uVar26 + 1);
                  *(undefined1 *)((long)param_2 + uVar26 + 2) =
                       *(undefined1 *)((long)pvVar8 + uVar26 + 2);
                  *(undefined1 *)((long)param_2 + uVar26 + 3) =
                       *(undefined1 *)((long)pvVar8 + uVar26 + 3);
                  uVar26 = uVar26 + 4;
                } while (uVar36 != uVar26);
              }
            }
LAB_1000d695:
            recovered_10008050(pvVar8);
            *plVar39 = (long)param_2;
            plVar39[2] = (long)local_48;
            pbVar18 = (byte *)plVar39[1];
            pbVar20 = local_48;
            puVar34 = local_58;
            pbVar21 = local_70;
          }
          while (pbVar18 < pbVar20) {
            pbVar18[*plVar39] = 0;
            pbVar18 = (byte *)(plVar39[1] + 1);
            plVar39[1] = (long)pbVar18;
          }
        }
        uVar19 = puVar34[3];
        uVar36 = (ulong)uVar19;
        local_168 = 1;
        if (((uVar36 < 7) && ((0x5dU >> (uVar19 & 0x1f) & 1) != 0)) &&
           (7 < *(int *)(&DAT_1001b06c + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) * puVar34[2])) {
          if ((0x5dU >> (uVar19 & 0x1f) & 1) == 0) {
            local_168 = 0;
          }
          else {
            local_168 = (ulong)(puVar34[2] * *(int *)(&DAT_1001b06c + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) + 7 >> 3);
          }
        }
        local_150 = 3;
        local_90 = (byte *)recovered_10007ff0((long)pbVar21);
        pbVar18 = (byte *)0x0;
        recovered_10008050((void *)0x0);
        if (local_50 < (byte *)0xf1) {
LAB_1000d7b0:
          pbVar18 = pbVar18 + -1;
          do {
            (local_90 + 1)[(long)pbVar18] = 0;
            pbVar18 = pbVar18 + 1;
          } while (local_88 != pbVar18);
        }
        else {
          pbVar18 = (byte *)((ulong)local_70 & 0x3fffffffffffffe0);
          pbVar20 = (byte *)0x0;
          do {
            pbVar21 = local_90 + (long)pbVar20;
            pbVar21[0] = 0;
            pbVar21[1] = 0;
            pbVar21[2] = 0;
            pbVar21[3] = 0;
            pbVar21[4] = 0;
            pbVar21[5] = 0;
            pbVar21[6] = 0;
            pbVar21[7] = 0;
            pbVar21[8] = 0;
            pbVar21[9] = 0;
            pbVar21[10] = 0;
            pbVar21[0xb] = 0;
            pbVar21[0xc] = 0;
            pbVar21[0xd] = 0;
            pbVar21[0xe] = 0;
            pbVar21[0xf] = 0;
            pbVar21 = local_90 + 0x10 + (long)pbVar20;
            pbVar21[0] = 0;
            pbVar21[1] = 0;
            pbVar21[2] = 0;
            pbVar21[3] = 0;
            pbVar21[4] = 0;
            pbVar21[5] = 0;
            pbVar21[6] = 0;
            pbVar21[7] = 0;
            pbVar21[8] = 0;
            pbVar21[9] = 0;
            pbVar21[10] = 0;
            pbVar21[0xb] = 0;
            pbVar21[0xc] = 0;
            pbVar21[0xd] = 0;
            pbVar21[0xe] = 0;
            pbVar21[0xf] = 0;
            pbVar20 = pbVar20 + 0x20;
          } while (pbVar18 != pbVar20);
          if (local_70 != pbVar18) goto LAB_1000d7b0;
          pbVar18 = pbVar18 + -1;
        }
        if ((local_58[3] == 6) && (local_58[2] == 8)) {
          if (local_58[1] == 0) {
LAB_1000d978:
            uVar36 = CONCAT71((int7)((ulong)param_2 >> 8),local_d0 == local_e0);
          }
          else {
            if ((local_d0 <= (byte *)(-2 - (long)pbVar18)) &&
               (local_d0 + (long)local_70 <= local_e0)) {
              local_150 = 4;
              local_a0 = (byte *)(-2 - (long)pbVar18);
              local_78 = local_d0 + (long)local_70;
              recovered_10001cc0(local_90,local_d0 + (long)pvStack_e8,(ulong)local_70);
              local_d0 = local_78;
              local_68 = local_90 + 1;
              local_150 = 5;
              uVar36 = recovered_10019fa0((uint)*local_90,*local_b0,(long)local_68,0,(ulong)local_88
                                          ,4);
              if ((char)uVar36 != '\0') {
                if (1 < local_58[1]) {
                  pbVar18 = (byte *)0x1;
                  local_78 = (byte *)0x0;
                  do {
                    if ((local_a0 < local_d0) || (local_e0 < local_d0 + (long)local_70))
                    goto LAB_1000d9ea;
                    local_150 = 6;
                    local_50 = local_d0 + (long)local_70;
                    local_48 = pbVar18;
                    recovered_10001cc0(local_90,local_d0 + (long)pvStack_e8,(ulong)local_70);
                    local_d0 = local_50;
                    local_150 = 7;
                    uVar36 = recovered_10019fa0((uint)*local_90,
                                                (long)(local_78 + *local_b0 + (long)local_88),
                                                (long)local_68,(long)(local_78 + *local_b0),
                                                (ulong)local_88,4);
                    if ((char)uVar36 == '\0') goto LAB_1000d9ea;
                    pbVar18 = local_48 + 1;
                    local_78 = local_78 + (long)local_88;
                  } while (pbVar18 < (byte *)(ulong)local_58[1]);
                }
                goto LAB_1000d978;
              }
            }
LAB_1000d9ea:
            uVar36 = 0;
          }
        }
        else {
          if (local_50 == (byte *)0x0) {
            pbVar20 = (byte *)0x0;
            pbVar21 = (byte *)0x0;
          }
          else {
            local_150 = 8;
            local_48 = pbVar18;
            local_b8 = (byte *)recovered_10007ff0((long)local_88);
            pbVar18 = (byte *)0x0;
            recovered_10008050((void *)0x0);
            local_a0 = local_88 + (local_88 == (byte *)0x0);
            if (local_50 < (byte *)0x39) {
LAB_1000da60:
              do {
                local_b8[(long)pbVar18] = 0;
                pbVar18 = pbVar18 + 1;
              } while (local_a0 != pbVar18);
            }
            else if (local_50 < (byte *)0xf9) {
              pbVar20 = (byte *)0x0;
LAB_1000da30:
              pbVar18 = (byte *)((ulong)local_a0 & 0x1ffffffffffffff8);
              do {
                pbVar21 = local_b8 + (long)pbVar20;
                pbVar21[0] = 0;
                pbVar21[1] = 0;
                pbVar21[2] = 0;
                pbVar21[3] = 0;
                pbVar21[4] = 0;
                pbVar21[5] = 0;
                pbVar21[6] = 0;
                pbVar21[7] = 0;
                pbVar20 = pbVar20 + 8;
              } while (pbVar18 != pbVar20);
              if (local_88 != pbVar18) goto LAB_1000da60;
            }
            else {
              pbVar18 = (byte *)((ulong)local_a0 & 0x1fffffffffffffe0);
              pbVar20 = (byte *)0x0;
              do {
                pbVar21 = local_b8 + (long)pbVar20;
                pbVar21[0] = 0;
                pbVar21[1] = 0;
                pbVar21[2] = 0;
                pbVar21[3] = 0;
                pbVar21[4] = 0;
                pbVar21[5] = 0;
                pbVar21[6] = 0;
                pbVar21[7] = 0;
                pbVar21[8] = 0;
                pbVar21[9] = 0;
                pbVar21[10] = 0;
                pbVar21[0xb] = 0;
                pbVar21[0xc] = 0;
                pbVar21[0xd] = 0;
                pbVar21[0xe] = 0;
                pbVar21[0xf] = 0;
                pbVar21 = local_b8 + 0x10 + (long)pbVar20;
                pbVar21[0] = 0;
                pbVar21[1] = 0;
                pbVar21[2] = 0;
                pbVar21[3] = 0;
                pbVar21[4] = 0;
                pbVar21[5] = 0;
                pbVar21[6] = 0;
                pbVar21[7] = 0;
                pbVar21[8] = 0;
                pbVar21[9] = 0;
                pbVar21[10] = 0;
                pbVar21[0xb] = 0;
                pbVar21[0xc] = 0;
                pbVar21[0xd] = 0;
                pbVar21[0xe] = 0;
                pbVar21[0xf] = 0;
                pbVar20 = pbVar20 + 0x20;
              } while (pbVar18 != pbVar20);
              if (local_88 != pbVar18) {
                pbVar20 = pbVar18;
                if (((ulong)local_a0 & 0x18) == 0) goto LAB_1000da60;
                goto LAB_1000da30;
              }
            }
            local_150 = 9;
            pbVar21 = (byte *)recovered_10007ff0((long)local_88);
            pbVar18 = (byte *)0x0;
            recovered_10008050((void *)0x0);
            if (local_50 < (byte *)0x39) {
LAB_1000db20:
              do {
                pbVar21[(long)pbVar18] = 0;
                pbVar18 = pbVar18 + 1;
              } while (local_a0 != pbVar18);
            }
            else if (local_50 < (byte *)0xf9) {
              pbVar20 = (byte *)0x0;
LAB_1000daf5:
              pbVar18 = (byte *)((ulong)local_a0 & 0x1ffffffffffffff8);
              do {
                pbVar22 = pbVar21 + (long)pbVar20;
                pbVar22[0] = 0;
                pbVar22[1] = 0;
                pbVar22[2] = 0;
                pbVar22[3] = 0;
                pbVar22[4] = 0;
                pbVar22[5] = 0;
                pbVar22[6] = 0;
                pbVar22[7] = 0;
                pbVar20 = pbVar20 + 8;
              } while (pbVar18 != pbVar20);
              if (local_88 != pbVar18) goto LAB_1000db20;
            }
            else {
              pbVar18 = (byte *)((ulong)local_a0 & 0x1fffffffffffffe0);
              pbVar20 = (byte *)0x0;
              do {
                pbVar22 = pbVar21 + (long)pbVar20;
                pbVar22[0] = 0;
                pbVar22[1] = 0;
                pbVar22[2] = 0;
                pbVar22[3] = 0;
                pbVar22[4] = 0;
                pbVar22[5] = 0;
                pbVar22[6] = 0;
                pbVar22[7] = 0;
                pbVar22[8] = 0;
                pbVar22[9] = 0;
                pbVar22[10] = 0;
                pbVar22[0xb] = 0;
                pbVar22[0xc] = 0;
                pbVar22[0xd] = 0;
                pbVar22[0xe] = 0;
                pbVar22[0xf] = 0;
                pbVar22 = pbVar21 + 0x10 + (long)pbVar20;
                pbVar22[0] = 0;
                pbVar22[1] = 0;
                pbVar22[2] = 0;
                pbVar22[3] = 0;
                pbVar22[4] = 0;
                pbVar22[5] = 0;
                pbVar22[6] = 0;
                pbVar22[7] = 0;
                pbVar22[8] = 0;
                pbVar22[9] = 0;
                pbVar22[10] = 0;
                pbVar22[0xb] = 0;
                pbVar22[0xc] = 0;
                pbVar22[0xd] = 0;
                pbVar22[0xe] = 0;
                pbVar22[0xf] = 0;
                pbVar20 = pbVar20 + 0x20;
              } while (pbVar18 != pbVar20);
              if (local_88 != pbVar18) {
                pbVar20 = pbVar18;
                if (((ulong)local_a0 & 0x18) == 0) goto LAB_1000db20;
                goto LAB_1000daf5;
              }
            }
            pbVar20 = local_b8;
            pbVar18 = local_48;
          }
          if (local_58[1] == 0) {
          }
          else {
            local_160 = (byte *)(-2 - (long)pbVar18);
            local_98 = local_90 + 1;
            local_80 = 0;
            local_68 = (byte *)0x0;
            local_40 = pbVar20;
            local_c0 = pbVar21;
            pbVar18 = (byte *)0x0;
            do {
              pbVar20 = local_40;
              pbVar21 = local_c0;
              if (local_160 < local_d0) {
LAB_1000e256:
                local_40 = pbVar21;
                local_c0 = pbVar20;
                uVar36 = 0;
                pbVar21 = local_40;
                pbVar20 = local_c0;
                goto switchD_1000dcfd_caseD_1;
              }
              pbVar20 = local_40;
              pbVar21 = local_c0;
              if (local_e0 < local_d0 + (long)local_70) goto LAB_1000e256;
              local_150 = 10;
              pbVar20 = local_c0;
              local_c0 = local_40;
              local_50 = pbVar18;
              local_48 = local_d0 + (long)local_70;
              local_40 = pbVar20;
              recovered_10001cc0(local_90,local_d0 + (long)pvStack_e8,(ulong)local_70);
              local_d0 = local_48;
              local_150 = 0xb;
              uVar36 = recovered_10019fa0((uint)*local_90,(long)local_40,(long)local_98,
                                          (long)local_50,(ulong)local_88,local_168);
              pbVar20 = local_c0;
              pbVar21 = local_40;
              if ((char)uVar36 == '\0') goto LAB_1000e256;
              uVar19 = *local_58;
              pbVar18 = (byte *)(ulong)uVar19;
              lVar38 = *local_b0;
              local_a0 = *(byte **)(local_78 + 8);
              uVar36 = 0;
              if (6 < local_58[3]) goto switchD_1000dcfd_caseD_1;
              pvVar8 = (void *)(lVar38 + (long)local_68 * (long)(uintptr_t)pbVar18 * 4);
              switch((uintptr_t)(local_58[3])) {
              case 0:
                if (local_58[2] == 8) {
                  if (pbVar18 != (byte *)0x0) {
                    lVar38 = local_80 * (long)pbVar18 + lVar38;
                    pbVar20 = (byte *)0x0;
                    do {
                      bVar23 = local_40[(long)pbVar20];
                      uVar19 = *(uint *)(local_78 + 0x18);
                      bVar5 = local_78[0x28];
                      *(byte *)(lVar38 + (long)(uintptr_t)pbVar20 * 4) = bVar23;
                      *(byte *)(lVar38 + 1 + (long)(uintptr_t)pbVar20 * 4) = bVar23;
                      *(byte *)(lVar38 + 2 + (long)(uintptr_t)pbVar20 * 4) = bVar23;
                      *(byte *)(lVar38 + 3 + (long)(uintptr_t)pbVar20 * 4) = -(~bVar5 & 1 | uVar19 != bVar23);
                      pbVar20 = pbVar20 + 1;
                    } while (pbVar18 != pbVar20);
                  }
                }
                else if (pbVar18 != (byte *)0x0) {
                  lVar38 = local_80 * (long)pbVar18 + lVar38;
                  pbVar20 = (byte *)0x0;
                  do {
                    bVar23 = local_40[(long)(uintptr_t)pbVar20 * 2];
                    bVar5 = local_40[(long)(uintptr_t)pbVar20 * 2 + 1];
                    bVar24 = local_78[0x28];
                    uVar19 = *(uint *)(local_78 + 0x18);
                    uVar25 = (undefined1)
                             ((ulong)((uint)CONCAT11(bVar23,bVar5) * 0xff + 0x7fff) / 0xffff);
                    *(undefined1 *)(lVar38 + (long)(uintptr_t)pbVar20 * 4) = uVar25;
                    *(undefined1 *)(lVar38 + 1 + (long)(uintptr_t)pbVar20 * 4) = uVar25;
                    *(undefined1 *)(lVar38 + 2 + (long)(uintptr_t)pbVar20 * 4) = uVar25;
                    *(byte *)(lVar38 + 3 + (long)(uintptr_t)pbVar20 * 4) =
                         -(~bVar24 & 1 | CONCAT11(bVar23,bVar5) != uVar19);
                    pbVar20 = pbVar20 + 1;
                  } while (pbVar18 != pbVar20);
                }
                break;
              default:
                goto switchD_1000dcfd_caseD_1;
              case 2:
                if (local_58[2] == 8) {
                  if (pbVar18 != (byte *)0x0) {
                    lVar38 = local_80 * (long)pbVar18 + lVar38;
                    pbVar20 = local_40 + 2;
                    pbVar21 = (byte *)0x0;
                    do {
                      cVar28 = -1;
                      if (((local_78[0x29] == 1) &&
                          (*(uint *)(local_78 + 0x1c) == (uint)pbVar20[-2])) &&
                         (*(uint *)(local_78 + 0x20) == (uint)pbVar20[-1])) {
                        cVar28 = -(*(uint *)(local_78 + 0x24) != (uint)*pbVar20);
                      }
                      *(byte *)(lVar38 + (long)(uintptr_t)pbVar21 * 4) = pbVar20[-2];
                      *(byte *)(lVar38 + 1 + (long)(uintptr_t)pbVar21 * 4) = pbVar20[-1];
                      *(byte *)(lVar38 + 2 + (long)(uintptr_t)pbVar21 * 4) = *pbVar20;
                      *(char *)(lVar38 + 3 + (long)(uintptr_t)pbVar21 * 4) = cVar28;
                      pbVar21 = pbVar21 + 1;
                      pbVar20 = pbVar20 + 3;
                    } while (pbVar18 != pbVar21);
                  }
                }
                else if (pbVar18 != (byte *)0x0) {
                  lVar38 = local_80 * (long)pbVar18 + lVar38;
                  pbVar20 = local_40 + 5;
                  pbVar21 = (byte *)0x0;
                  do {
                    uVar29 = *(ushort *)(pbVar20 + -5) << 8 | *(ushort *)(pbVar20 + -5) >> 8;
                    uVar35 = *(ushort *)(pbVar20 + -3) << 8 | *(ushort *)(pbVar20 + -3) >> 8;
                    uVar30 = *(ushort *)(pbVar20 + -1) << 8 | *(ushort *)(pbVar20 + -1) >> 8;
                    bVar23 = local_78[0x29];
                    uVar19 = *(uint *)(local_78 + 0x1c);
                    uVar6 = *(uint *)(local_78 + 0x20);
                    uVar7 = *(uint *)(local_78 + 0x24);
                    *(char *)(lVar38 + (long)(uintptr_t)pbVar21 * 4) =
                         (char)((ulong)(((uint)uVar29 * 0x100 - (uint)uVar29) + 0x7fff) * 0x2000201
                               >> 0x29);
                    *(char *)(lVar38 + 1 + (long)(uintptr_t)pbVar21 * 4) =
                         (char)((ulong)(((uint)uVar35 * 0x100 - (uint)uVar35) + 0x7fff) * 0x2000201
                               >> 0x29);
                    *(char *)(lVar38 + 2 + (long)(uintptr_t)pbVar21 * 4) =
                         (char)((ulong)(((uint)uVar30 * 0x100 - (uint)uVar30) + 0x7fff) * 0x2000201
                               >> 0x29);
                    *(byte *)(lVar38 + 3 + (long)(uintptr_t)pbVar21 * 4) =
                         -((uVar30 != uVar7 || uVar35 != uVar6) | ~bVar23 & 1 | uVar29 != uVar19);
                    pbVar21 = pbVar21 + 1;
                    pbVar20 = pbVar20 + 6;
                  } while (pbVar18 != pbVar21);
                }
                break;
              case 3:
                if (pbVar18 != (byte *)0x0) {
                  local_a0 = (byte *)((ulong)local_a0 >> 2);
                  pbVar37 = (byte *)(lVar38 + local_80 * (long)pbVar18);
                  pbVar22 = (byte *)0x0;
                  local_188 = pbVar18;
                  do {
                    pbVar20 = local_c0;
                    pbVar21 = local_40;
                    if (local_a0 <= (byte *)(ulong)local_40[(long)pbVar22]) goto LAB_1000e256;
                    local_150 = 0xc;
                    local_50 = pbVar37;
                    local_48 = pbVar22;
                    recovered_10001cc0(pbVar37,(void *)((ulong)local_40[(long)pbVar22] * 4 +
                                                       *(long *)local_78),4);
                    pbVar22 = local_48 + 1;
                    pbVar37 = local_50 + 4;
                  } while (local_188 != pbVar22);
                }
                break;
              case 4:
                if (local_58[2] == 8) {
                  if (pbVar18 != (byte *)0x0) {
                    if (uVar19 == 1) {
                      uVar36 = 0;
                    }
                    else {
                      lVar38 = lVar38 + local_80 * (long)pbVar18;
                      uVar36 = 0;
                      do {
                        bVar23 = local_40[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 2];
                        *(byte *)(lVar38 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) = bVar23;
                        *(byte *)(lVar38 + 1 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) = bVar23;
                        *(byte *)(lVar38 + 2 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) = local_40[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 2];
                        *(byte *)(lVar38 + 3 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) = local_40[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 2 + 1];
                        bVar23 = local_40[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 2 + 2];
                        *(byte *)(lVar38 + 4 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) = bVar23;
                        *(byte *)(lVar38 + 5 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) = bVar23;
                        *(byte *)(lVar38 + 6 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) = local_40[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 2 + 2];
                        *(byte *)(lVar38 + 7 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) = local_40[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 2 + 3];
                        uVar36 = uVar36 + 2;
                      } while ((uVar19 & 0xfffffffe) != uVar36);
                    }
                    if ((uVar19 & 1) != 0) {
                      bVar23 = local_40[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 2];
                      *(byte *)((long)pvVar8 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) = bVar23;
                      *(byte *)((long)pvVar8 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 1) = bVar23;
                      *(byte *)((long)pvVar8 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 2) = local_40[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 2];
                      *(byte *)((long)pvVar8 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 3) = local_40[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 2 + 1];
                    }
                  }
                }
                else if (pbVar18 != (byte *)0x0) {
                  lVar38 = local_80 * (long)pbVar18 + lVar38;
                  pbVar20 = (byte *)0x0;
                  do {
                    bVar23 = local_40[(long)(uintptr_t)pbVar20 * 4 + 2];
                    bVar5 = local_40[(long)(uintptr_t)pbVar20 * 4 + 3];
                    uVar25 = (undefined1)
                             ((ulong)((uint)CONCAT11(local_40[(long)(uintptr_t)pbVar20 * 4],
                                                     local_40[(long)(uintptr_t)pbVar20 * 4 + 1]) * 0xff +
                                     0x7fff) / 0xffff);
                    *(undefined1 *)(lVar38 + (long)(uintptr_t)pbVar20 * 4) = uVar25;
                    *(undefined1 *)(lVar38 + 1 + (long)(uintptr_t)pbVar20 * 4) = uVar25;
                    *(undefined1 *)(lVar38 + 2 + (long)(uintptr_t)pbVar20 * 4) = uVar25;
                    *(char *)(lVar38 + 3 + (long)(uintptr_t)pbVar20 * 4) =
                         (char)((ulong)((uint)CONCAT11(bVar23,bVar5) * 0xff + 0x7fff) / 0xffff);
                    pbVar20 = pbVar20 + 1;
                  } while (pbVar18 != pbVar20);
                }
                break;
              case 6:
                if (local_58[2] == 8) {
                  local_150 = 0xd;
                  recovered_10001cc0(pvVar8,local_40,(long)pbVar18 << 2);
                }
                else if (pbVar18 != (byte *)0x0) {
                  lVar38 = local_80 * (long)pbVar18 + lVar38;
                  pbVar20 = (byte *)0x0;
                  do {
                    *(char *)(lVar38 + (long)(uintptr_t)pbVar20 * 4) =
                         (char)((ulong)((uint)CONCAT11(local_40[(long)(uintptr_t)pbVar20 * 8],
                                                       local_40[(long)(uintptr_t)pbVar20 * 8 + 1]) * 0xff +
                                       0x7fff) / 0xffff);
                    *(char *)(lVar38 + 1 + (long)(uintptr_t)pbVar20 * 4) =
                         (char)((ulong)((uint)CONCAT11(local_40[(long)(uintptr_t)pbVar20 * 8 + 2],
                                                       local_40[(long)(uintptr_t)pbVar20 * 8 + 3]) * 0xff +
                                       0x7fff) / 0xffff);
                    *(char *)(lVar38 + 2 + (long)(uintptr_t)pbVar20 * 4) =
                         (char)((ulong)((uint)CONCAT11(local_40[(long)(uintptr_t)pbVar20 * 8 + 4],
                                                       local_40[(long)(uintptr_t)pbVar20 * 8 + 5]) * 0xff +
                                       0x7fff) / 0xffff);
                    *(char *)(lVar38 + 3 + (long)(uintptr_t)pbVar20 * 4) =
                         (char)((ulong)((uint)CONCAT11(local_40[(long)(uintptr_t)pbVar20 * 8 + 6],
                                                       local_40[(long)(uintptr_t)pbVar20 * 8 + 7]) * 0xff +
                                       0x7fff) / 0xffff);
                    pbVar20 = pbVar20 + 1;
                  } while (pbVar18 != pbVar20);
                }
              }
              local_68 = local_68 + 1;
              local_80 = local_80 + 4;
              pbVar21 = local_c0;
              pbVar18 = local_40;
              pbVar20 = local_40;
            } while (local_68 < (byte *)(ulong)local_58[1]);
          }
          uVar36 = CONCAT71((int7)((ulong)pbVar21 >> 8),local_d0 == local_e0);
switchD_1000dcfd_caseD_1:
          recovered_10008050(pbVar21);
          recovered_10008050(pbVar20);
        }
        recovered_10008050(local_90);
        goto LAB_1000e271;
      }
    }
LAB_1000c70a:
    uVar36 = 0;
  }
  else {
    uVar19 = param_1[1];
    if (0x3fffffffffffffff < uVar19 * uVar36) goto LAB_1000c70a;
    local_50 = (byte *)(uVar19 * (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4);
    uVar7 = param_1[3];
    lVar38 = 0;
    uVar36 = 0;
    do {
      uVar31 = 0;
      if (*(uint *)((long)&DAT_1001afdc + lVar38) < uVar6) {
        uVar31 = (~*(uint *)((long)&DAT_1001afdc + lVar38) + uVar6) /
                 *(uint *)((long)&DAT_1001aff8 + lVar38) + 1;
      }
      if (*(uint *)((long)&DAT_1001b014 + lVar38) < uVar19) {
        uVar16 = (~*(uint *)((long)&DAT_1001b014 + lVar38) + uVar19) /
                 *(uint *)((long)&DAT_1001b030 + lVar38) + 1;
        if ((uVar31 != 0) && (uVar16 != 0)) {
          if (uVar7 < 7 && (~(0x5dU >> ((byte)uVar7 & 0x1f)) & 1) == 0) {
            uVar32 = (ulong)(*(int *)(&DAT_1001b06c + (ulong)uVar7 * 4) * param_1[2]);
          }
          else {
            uVar32 = 0;
          }
          uVar32 = (uVar31 * uVar32 + 7 >> 3) + 1;
          uVar26 = CONCAT44(0,uVar16);
          PF_PART8(auVar9, 8) = 0;
          PF_PART8(auVar9, 0) = uVar32;
          PF_PART8(auVar11, 8) = 0;
          PF_PART8(auVar11, 0) = uVar26;
          if ((SUB168(auVar9 * auVar11,8) != 0) ||
             (uVar32 = uVar32 * uVar26, bVar40 = CARRY8(uVar36,uVar32), uVar36 = uVar36 + uVar32,
             bVar40)) goto LAB_1000c70a;
        }
      }
      lVar38 = lVar38 + 4;
    } while (lVar38 != 0x1c);
    local_100 = (void *)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    pvStack_e8 = (void *)0x0;
    local_e0 = (byte *)0x0;
    uStack_d8 = 0;
    local_d0 = (byte *)0x0;
    local_150 = 0xe;
    local_b0 = param_4;
    local_58 = param_1;
    uVar36 = recovered_10019c70((long *)&local_100,param_2,uVar36);
    if ((char)uVar36 == '\0') {
LAB_1000c861:
      uVar36 = 0;
    }
    else {
      local_b0[1] = 0;
      if ((byte *)local_b0[2] < local_50) {
        local_150 = 0xf;
        lVar38 = recovered_10007ff0((long)local_50);
        plVar39 = local_b0;
        pvVar8 = (void *)*local_b0;
        uVar36 = local_b0[1];
        if (uVar36 != 0) {
          uVar32 = 0;
          if ((3 < uVar36) && (0x1f < (ulong)(lVar38 - (long)pvVar8))) {
            if (uVar36 < 0x20) {
              uVar26 = 0;
            }
            else {
              uVar32 = uVar36 & 0xffffffffffffffe0;
              uVar26 = 0;
              do {
                uVar13 = ((undefined8 *)((long)pvVar8 + uVar26))[1];
                puVar1 = (undefined8 *)((long)pvVar8 + uVar26 + 0x10);
                uVar14 = *puVar1;
                uVar15 = puVar1[1];
                *(undefined8 *)(lVar38 + uVar26) = *(undefined8 *)((long)pvVar8 + uVar26);
                ((undefined8 *)(lVar38 + uVar26))[1] = uVar13;
                puVar1 = (undefined8 *)(lVar38 + 0x10 + uVar26);
                *puVar1 = uVar14;
                puVar1[1] = uVar15;
                uVar26 = uVar26 + 0x20;
              } while (uVar32 != uVar26);
              if (uVar36 == uVar32) goto LAB_1000c9ab;
              uVar26 = uVar32;
              if ((uVar36 & 0x1c) == 0) goto LAB_1000c944;
            }
            uVar32 = uVar36 & 0xfffffffffffffffc;
            do {
              *(undefined4 *)(lVar38 + uVar26) = *(undefined4 *)((long)pvVar8 + uVar26);
              uVar26 = uVar26 + 4;
            } while (uVar32 != uVar26);
            if (uVar36 == uVar32) goto LAB_1000c9ab;
          }
LAB_1000c944:
          uVar33 = uVar36 & 3;
          uVar26 = uVar32;
          if (uVar33 != 0) {
            do {
              *(undefined1 *)(lVar38 + uVar26) = *(undefined1 *)((long)pvVar8 + uVar26);
              uVar26 = uVar26 + 1;
              uVar33 = uVar33 - 1;
            } while (uVar33 != 0);
          }
          if (uVar32 - uVar36 < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)(lVar38 + uVar26) = *(undefined1 *)((long)pvVar8 + uVar26);
              *(undefined1 *)(lVar38 + 1 + uVar26) = *(undefined1 *)((long)pvVar8 + uVar26 + 1);
              *(undefined1 *)(lVar38 + 2 + uVar26) = *(undefined1 *)((long)pvVar8 + uVar26 + 2);
              *(undefined1 *)(lVar38 + 3 + uVar26) = *(undefined1 *)((long)pvVar8 + uVar26 + 3);
              uVar26 = uVar26 + 4;
            } while (uVar36 != uVar26);
          }
        }
LAB_1000c9ab:
        recovered_10008050(pvVar8);
        *plVar39 = lVar38;
        plVar39[2] = (long)local_50;
        pbVar18 = (byte *)plVar39[1];
      }
      else {
        pbVar18 = (byte *)0x0;
        plVar39 = local_b0;
      }
      while (pbVar18 < local_50) {
        pbVar18[*plVar39] = 0;
        pbVar18 = (byte *)(plVar39[1] + 1);
        plVar39[1] = (long)pbVar18;
      }
      uVar19 = local_58[3];
      uVar36 = (ulong)uVar19;
      local_180 = 1;
      if (((uVar36 < 7) && ((0x5dU >> (uVar19 & 0x1f) & 1) != 0)) &&
         (7 < *(int *)(&DAT_1001b06c + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) * local_58[2])) {
        if ((0x5dU >> (uVar19 & 0x1f) & 1) == 0) {
          local_180 = 0;
        }
        else {
          local_180 = (ulong)(local_58[2] * *(int *)(&DAT_1001b06c + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4) + 7 >> 3);
        }
      }
      lVar38 = 0;
      puVar34 = local_58;
      do {
        uVar19 = (&DAT_1001afdc)[lVar38];
        uVar6 = (&DAT_1001b014)[lVar38];
        uVar7 = (&DAT_1001b030)[lVar38];
        pbVar18 = (byte *)(ulong)uVar7;
        uVar31 = 0;
        if (uVar19 < *puVar34) {
          uVar31 = (*puVar34 + ~uVar19) / (uint)(&DAT_1001aff8)[lVar38] + 1;
        }
        if (uVar6 < puVar34[1]) {
          iVar17 = (puVar34[1] + ~uVar6) / uVar7 + 1;
          local_16c = uVar31;
          if (uVar31 != 0) {
            if (iVar17 != 0) {
              uVar16 = puVar34[3];
              local_48 = (byte *)CONCAT44(PF_PART4(local_48, 4),(&DAT_1001aff8)[lVar38]);
              local_70 = (byte *)CONCAT44(PF_PART4(local_70, 4),iVar17);
              if (((ulong)uVar16 < 7) && ((0x5dU >> (uVar16 & 0x1f) & 1) != 0)) {
                uVar36 = (ulong)(puVar34[2] * *(int *)(&DAT_1001b06c + (ulong)uVar16 * 4));
              }
              else {
                uVar36 = 0;
              }
              local_68 = (byte *)(ulong)uVar31;
              local_50 = (byte *)(uVar36 * (long)local_68);
              local_98 = (byte *)((ulong)(local_50 + 7) >> 3);
              local_160 = local_98 + 1;
              local_150 = 0x10;
              local_198 = lVar38;
              local_190 = uVar6;
              local_18c = uVar7;
              local_5c = uVar19;
              local_a8 = (byte *)recovered_10007ff0((long)local_160);
              recovered_10008050((void *)0x0);
              pbVar18 = (byte *)0x0;
              if (local_50 < (byte *)0x31) goto LAB_1000cc40;
              if (local_50 < (byte *)0xf1) {
                pbVar20 = (byte *)0x0;
LAB_1000cc0b:
                pbVar18 = (byte *)((ulong)local_160 & 0x3ffffffffffffff8);
                do {
                  pbVar21 = local_a8 + (long)pbVar20;
                  pbVar21[0] = 0;
                  pbVar21[1] = 0;
                  pbVar21[2] = 0;
                  pbVar21[3] = 0;
                  pbVar21[4] = 0;
                  pbVar21[5] = 0;
                  pbVar21[6] = 0;
                  pbVar21[7] = 0;
                  pbVar20 = pbVar20 + 8;
                } while (pbVar18 != pbVar20);
                for (; local_160 != pbVar18; pbVar18 = pbVar18 + 1) {
LAB_1000cc40:
                  local_a8[(long)pbVar18] = 0;
                }
              }
              else {
                pbVar18 = (byte *)((ulong)local_160 & 0x3fffffffffffffe0);
                pbVar20 = (byte *)0x0;
                do {
                  pbVar21 = local_a8 + (long)pbVar20;
                  pbVar21[0] = 0;
                  pbVar21[1] = 0;
                  pbVar21[2] = 0;
                  pbVar21[3] = 0;
                  pbVar21[4] = 0;
                  pbVar21[5] = 0;
                  pbVar21[6] = 0;
                  pbVar21[7] = 0;
                  pbVar21[8] = 0;
                  pbVar21[9] = 0;
                  pbVar21[10] = 0;
                  pbVar21[0xb] = 0;
                  pbVar21[0xc] = 0;
                  pbVar21[0xd] = 0;
                  pbVar21[0xe] = 0;
                  pbVar21[0xf] = 0;
                  pbVar21 = local_a8 + 0x10 + (long)pbVar20;
                  pbVar21[0] = 0;
                  pbVar21[1] = 0;
                  pbVar21[2] = 0;
                  pbVar21[3] = 0;
                  pbVar21[4] = 0;
                  pbVar21[5] = 0;
                  pbVar21[6] = 0;
                  pbVar21[7] = 0;
                  pbVar21[8] = 0;
                  pbVar21[9] = 0;
                  pbVar21[10] = 0;
                  pbVar21[0xb] = 0;
                  pbVar21[0xc] = 0;
                  pbVar21[0xd] = 0;
                  pbVar21[0xe] = 0;
                  pbVar21[0xf] = 0;
                  pbVar20 = pbVar20 + 0x20;
                } while (pbVar18 != pbVar20);
                if (local_160 != pbVar18) {
                  pbVar20 = pbVar18;
                  if (((ulong)local_160 & 0x18) == 0) goto LAB_1000cc40;
                  goto LAB_1000cc0b;
                }
              }
              if (local_50 == (byte *)0x0) {
                local_38 = (byte *)0x0;
                local_178 = (byte *)0x0;
              }
              else {
                local_150 = 0x11;
                local_c8 = (byte *)recovered_10007ff0((long)local_98);
                recovered_10008050((void *)0x0);
                local_88 = local_98 + (local_98 == (byte *)0x0);
                pbVar18 = (byte *)0x0;
                if (local_50 < (byte *)0x39) {
LAB_1000cd50:
                  do {
                    local_c8[(long)pbVar18] = 0;
                    pbVar18 = pbVar18 + 1;
                  } while (local_88 != pbVar18);
                }
                else if (local_50 < (byte *)0xf9) {
                  pbVar20 = (byte *)0x0;
LAB_1000ccff:
                  pbVar18 = (byte *)((ulong)local_88 & 0x1ffffffffffffff8);
                  do {
                    pbVar21 = local_c8 + (long)pbVar20;
                    pbVar21[0] = 0;
                    pbVar21[1] = 0;
                    pbVar21[2] = 0;
                    pbVar21[3] = 0;
                    pbVar21[4] = 0;
                    pbVar21[5] = 0;
                    pbVar21[6] = 0;
                    pbVar21[7] = 0;
                    pbVar20 = pbVar20 + 8;
                  } while (pbVar18 != pbVar20);
                  if (local_98 != pbVar18) goto LAB_1000cd50;
                }
                else {
                  pbVar18 = (byte *)((ulong)local_88 & 0x1fffffffffffffe0);
                  pbVar20 = (byte *)0x0;
                  do {
                    pbVar21 = local_c8 + (long)pbVar20;
                    pbVar21[0] = 0;
                    pbVar21[1] = 0;
                    pbVar21[2] = 0;
                    pbVar21[3] = 0;
                    pbVar21[4] = 0;
                    pbVar21[5] = 0;
                    pbVar21[6] = 0;
                    pbVar21[7] = 0;
                    pbVar21[8] = 0;
                    pbVar21[9] = 0;
                    pbVar21[10] = 0;
                    pbVar21[0xb] = 0;
                    pbVar21[0xc] = 0;
                    pbVar21[0xd] = 0;
                    pbVar21[0xe] = 0;
                    pbVar21[0xf] = 0;
                    pbVar21 = local_c8 + 0x10 + (long)pbVar20;
                    pbVar21[0] = 0;
                    pbVar21[1] = 0;
                    pbVar21[2] = 0;
                    pbVar21[3] = 0;
                    pbVar21[4] = 0;
                    pbVar21[5] = 0;
                    pbVar21[6] = 0;
                    pbVar21[7] = 0;
                    pbVar21[8] = 0;
                    pbVar21[9] = 0;
                    pbVar21[10] = 0;
                    pbVar21[0xb] = 0;
                    pbVar21[0xc] = 0;
                    pbVar21[0xd] = 0;
                    pbVar21[0xe] = 0;
                    pbVar21[0xf] = 0;
                    pbVar20 = pbVar20 + 0x20;
                  } while (pbVar18 != pbVar20);
                  if (local_98 != pbVar18) {
                    pbVar20 = pbVar18;
                    if (((ulong)local_88 & 0x18) == 0) goto LAB_1000cd50;
                    goto LAB_1000ccff;
                  }
                }
                local_150 = 0x12;
                pbVar18 = (byte *)recovered_10007ff0((long)local_98);
                recovered_10008050((void *)0x0);
                pbVar20 = (byte *)0x0;
                local_38 = local_c8;
                local_178 = pbVar18;
                if ((byte *)0x38 < local_50) {
                  if (local_50 < (byte *)0xf9) {
                    pbVar21 = (byte *)0x0;
                  }
                  else {
                    pbVar20 = (byte *)((ulong)local_88 & 0x1fffffffffffffe0);
                    pbVar21 = (byte *)0x0;
                    do {
                      pbVar22 = pbVar18 + (long)pbVar21;
                      pbVar22[0] = 0;
                      pbVar22[1] = 0;
                      pbVar22[2] = 0;
                      pbVar22[3] = 0;
                      pbVar22[4] = 0;
                      pbVar22[5] = 0;
                      pbVar22[6] = 0;
                      pbVar22[7] = 0;
                      pbVar22[8] = 0;
                      pbVar22[9] = 0;
                      pbVar22[10] = 0;
                      pbVar22[0xb] = 0;
                      pbVar22[0xc] = 0;
                      pbVar22[0xd] = 0;
                      pbVar22[0xe] = 0;
                      pbVar22[0xf] = 0;
                      pbVar22 = pbVar18 + 0x10 + (long)pbVar21;
                      pbVar22[0] = 0;
                      pbVar22[1] = 0;
                      pbVar22[2] = 0;
                      pbVar22[3] = 0;
                      pbVar22[4] = 0;
                      pbVar22[5] = 0;
                      pbVar22[6] = 0;
                      pbVar22[7] = 0;
                      pbVar22[8] = 0;
                      pbVar22[9] = 0;
                      pbVar22[10] = 0;
                      pbVar22[0xb] = 0;
                      pbVar22[0xc] = 0;
                      pbVar22[0xd] = 0;
                      pbVar22[0xe] = 0;
                      pbVar22[0xf] = 0;
                      pbVar21 = pbVar21 + 0x20;
                    } while (pbVar20 != pbVar21);
                    if (local_98 == pbVar20) goto LAB_1000ce43;
                    pbVar21 = pbVar20;
                    if (((ulong)local_88 & 0x18) == 0) goto LAB_1000ce30;
                  }
                  pbVar20 = (byte *)((ulong)local_88 & 0x1ffffffffffffff8);
                  do {
                    pbVar22 = pbVar18 + (long)pbVar21;
                    pbVar22[0] = 0;
                    pbVar22[1] = 0;
                    pbVar22[2] = 0;
                    pbVar22[3] = 0;
                    pbVar22[4] = 0;
                    pbVar22[5] = 0;
                    pbVar22[6] = 0;
                    pbVar22[7] = 0;
                    pbVar21 = pbVar21 + 8;
                  } while (pbVar20 != pbVar21);
                  if (local_98 == pbVar20) goto LAB_1000ce43;
                }
LAB_1000ce30:
                do {
                  pbVar18[(long)pbVar20] = 0;
                  pbVar20 = pbVar20 + 1;
                } while (local_88 != pbVar20);
              }
LAB_1000ce43:
              local_1b8 = (byte *)(-2 - (long)local_98);
              local_1b0 = local_a8 + 1;
              local_1a8 = (ulong)local_70 & 0xffffffff;
              local_188 = (byte *)((long)local_68 * 6);
              local_1a0 = (long)local_68 * 2 & 0xfffffffffffffffc;
              local_168 = (long)local_68 * 3;
              local_80 = 0;
              pbVar20 = (byte *)0x0;
              do {
                pbVar18 = local_38;
                pbVar21 = local_178;
                if (local_1b8 < local_d0) {
switchD_1000cfd6_caseD_1:
                  local_38 = pbVar21;
                  local_178 = pbVar18;
                  recovered_10008050(local_38);
                  recovered_10008050(local_178);
                  recovered_10008050(local_a8);
                  uVar36 = 0;
                  goto LAB_1000e271;
                }
                pbVar18 = local_38;
                pbVar21 = local_178;
                if (local_e0 < local_160 + (long)local_d0) goto switchD_1000cfd6_caseD_1;
                local_150 = 0x13;
                pbVar18 = local_178;
                local_178 = local_38;
                local_70 = local_160 + (long)local_d0;
                local_50 = pbVar20;
                local_38 = pbVar18;
                recovered_10001cc0(local_a8,local_d0 + (long)pvStack_e8,(ulong)local_160);
                local_d0 = local_70;
                local_150 = 0x14;
                uVar36 = recovered_10019fa0((uint)*local_a8,(long)local_38,(long)local_1b0,
                                            (long)local_50,(ulong)local_98,local_180);
                pbVar18 = local_178;
                pbVar21 = local_38;
                if (((char)uVar36 == '\0') || (6 < local_58[3])) goto switchD_1000cfd6_caseD_1;
                local_50 = (byte *)((ulong)(local_18c * (int)local_80 + local_190) *
                                    (ulong)*local_58 * 4 + *local_b0);
                switch((uintptr_t)(local_58[3])) {
                case 0:
                  if (local_58[2] == 8) {
                    pbVar18 = (byte *)0x0;
                    uVar19 = local_5c;
                    do {
                      bVar23 = local_38[(long)pbVar18];
                      bVar5 = local_78[0x28];
                      uVar6 = *(uint *)(local_78 + 0x18);
                      uVar36 = (ulong)uVar19;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4] = bVar23;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 1] = bVar23;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 2] = bVar23;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 3] = -(~bVar5 & 1 | uVar6 != bVar23);
                      pbVar18 = pbVar18 + 1;
                      uVar19 = uVar19 + (int)local_48;
                    } while (local_68 != pbVar18);
                  }
                  else {
                    pbVar18 = (byte *)0x0;
                    uVar19 = local_5c;
                    do {
                      bVar23 = local_38[(long)(uintptr_t)pbVar18 * 2];
                      bVar5 = local_38[(long)(uintptr_t)pbVar18 * 2 + 1];
                      uVar6 = *(uint *)(local_78 + 0x18);
                      bVar24 = local_78[0x28];
                      uVar36 = (ulong)uVar19;
                      bVar27 = (byte)((ulong)((uint)CONCAT11(bVar23,bVar5) * 0xff + 0x7fff) / 0xffff
                                     );
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4] = bVar27;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 1] = bVar27;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 2] = bVar27;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 3] = -(~bVar24 & 1 | CONCAT11(bVar23,bVar5) != uVar6);
                      pbVar18 = pbVar18 + 1;
                      uVar19 = uVar19 + (int)local_48;
                    } while (local_68 != pbVar18);
                  }
                  break;
                default:
                  goto switchD_1000cfd6_caseD_1;
                case 2:
                  if (local_58[2] == 8) {
                    uVar36 = 0;
                    uVar19 = local_5c;
                    do {
                      bVar23 = 0xff;
                      if (((local_78[0x29] == 1) &&
                          (*(uint *)(local_78 + 0x1c) == (uint)local_38[uVar36])) &&
                         (*(uint *)(local_78 + 0x20) == (uint)local_38[uVar36 + 1])) {
                        bVar23 = -(*(uint *)(local_78 + 0x24) != (uint)local_38[uVar36 + 2]);
                      }
                      uVar32 = (ulong)uVar19;
                      local_50[(uintptr_t)uVar32 * 4] = local_38[uVar36];
                      local_50[(uintptr_t)uVar32 * 4 + 1] = local_38[uVar36 + 1];
                      local_50[(uintptr_t)uVar32 * 4 + 2] = local_38[uVar36 + 2];
                      local_50[(uintptr_t)uVar32 * 4 + 3] = bVar23;
                      uVar19 = uVar19 + (int)local_48;
                      uVar36 = uVar36 + 3;
                    } while (local_168 != uVar36);
                  }
                  else {
                    pbVar18 = (byte *)0x0;
                    uVar19 = local_5c;
                    do {
                      bVar23 = local_38[(long)pbVar18];
                      bVar5 = (local_38 + 1)[(long)pbVar18];
                      bVar24 = (local_38 + 2)[(long)pbVar18];
                      bVar27 = (local_38 + 3)[(long)pbVar18];
                      bVar2 = (local_38 + 4)[(long)pbVar18];
                      bVar3 = (local_38 + 5)[(long)pbVar18];
                      bVar4 = local_78[0x29];
                      uVar6 = *(uint *)(local_78 + 0x1c);
                      uVar7 = *(uint *)(local_78 + 0x20);
                      uVar31 = *(uint *)(local_78 + 0x24);
                      uVar36 = (ulong)uVar19;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4] =
                           (byte)((ulong)((uint)CONCAT11(bVar23,bVar5) * 0xff + 0x7fff) / 0xffff);
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 1] =
                           (byte)((ulong)((uint)CONCAT11(bVar24,bVar27) * 0xff + 0x7fff) / 0xffff);
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 2] =
                           (byte)((ulong)((uint)CONCAT11(bVar2,bVar3) * 0xff + 0x7fff) / 0xffff);
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 3] =
                           -((CONCAT11(bVar2,bVar3) != uVar31 || CONCAT11(bVar24,bVar27) != uVar7) |
                            ~bVar4 & 1 | CONCAT11(bVar23,bVar5) != uVar6);
                      uVar19 = uVar19 + (int)local_48;
                      pbVar18 = pbVar18 + 6;
                    } while (local_188 != pbVar18);
                  }
                  break;
                case 3:
                  local_a0 = (byte *)(*(ulong *)(local_78 + 8) >> 2);
                  pbVar20 = (byte *)0x0;
                  uVar19 = local_5c;
                  do {
                    pbVar18 = local_178;
                    pbVar21 = local_38;
                    if (local_a0 <= (byte *)(ulong)local_38[(long)pbVar20])
                    goto switchD_1000cfd6_caseD_1;
                    local_150 = 0x15;
                    local_88 = (byte *)CONCAT44(PF_PART4(local_88, 4),uVar19);
                    local_70 = pbVar20;
                    recovered_10001cc0(local_50 + (ulong)uVar19 * 4,
                                       (void *)((ulong)local_38[(long)pbVar20] * 4 +
                                               *(long *)local_78),4);
                    pbVar20 = local_70 + 1;
                    uVar19 = (int)local_88 + (int)local_48;
                  } while (local_68 != pbVar20);
                  break;
                case 4:
                  if (local_58[2] == 8) {
                    uVar19 = local_5c;
                    if (local_16c == 1) {
                      uVar36 = 0;
                    }
                    else {
                      uVar36 = 0;
                      do {
                        uVar32 = (ulong)uVar19;
                        bVar23 = local_38[uVar36];
                        local_50[(uintptr_t)uVar32 * 4] = bVar23;
                        local_50[(uintptr_t)uVar32 * 4 + 1] = bVar23;
                        local_50[(uintptr_t)uVar32 * 4 + 2] = local_38[uVar36];
                        local_50[(uintptr_t)uVar32 * 4 + 3] = local_38[uVar36 + 1];
                        uVar32 = (ulong)(uVar19 + (int)local_48);
                        bVar23 = local_38[uVar36 + 2];
                        local_50[(uintptr_t)uVar32 * 4] = bVar23;
                        local_50[(uintptr_t)uVar32 * 4 + 1] = bVar23;
                        local_50[(uintptr_t)uVar32 * 4 + 2] = local_38[uVar36 + 2];
                        local_50[(uintptr_t)uVar32 * 4 + 3] = local_38[uVar36 + 3];
                        uVar19 = uVar19 + (int)local_48 + (int)local_48;
                        uVar36 = uVar36 + 4;
                      } while (local_1a0 != uVar36);
                    }
                    if (((ulong)local_68 & 1) != 0) {
                      uVar32 = (ulong)uVar19;
                      bVar23 = local_38[uVar36];
                      local_50[(uintptr_t)uVar32 * 4] = bVar23;
                      local_50[(uintptr_t)uVar32 * 4 + 1] = bVar23;
                      local_50[(uintptr_t)uVar32 * 4 + 2] = local_38[uVar36];
                      local_50[(uintptr_t)uVar32 * 4 + 3] = local_38[uVar36 + 1];
                    }
                  }
                  else {
                    pbVar18 = (byte *)0x0;
                    uVar19 = local_5c;
                    do {
                      bVar23 = local_38[(long)(uintptr_t)pbVar18 * 4 + 2];
                      bVar5 = local_38[(long)(uintptr_t)pbVar18 * 4 + 3];
                      uVar36 = (ulong)uVar19;
                      bVar24 = (byte)((ulong)((uint)CONCAT11(local_38[(long)(uintptr_t)pbVar18 * 4],
                                                             local_38[(long)(uintptr_t)pbVar18 * 4 + 1]) * 0xff
                                             + 0x7fff) / 0xffff);
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4] = bVar24;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 1] = bVar24;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 2] = bVar24;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 3] =
                           (byte)((ulong)((uint)CONCAT11(bVar23,bVar5) * 0xff + 0x7fff) / 0xffff);
                      pbVar18 = pbVar18 + 1;
                      uVar19 = uVar19 + (int)local_48;
                    } while (local_68 != pbVar18);
                  }
                  break;
                case 6:
                  if (local_58[2] == 8) {
                    pbVar18 = local_68;
                    pbVar20 = local_38;
                    uVar19 = local_5c;
                    do {
                      local_a0 = (byte *)CONCAT44(PF_PART4(local_a0, 4),uVar19);
                      local_150 = 0x16;
                      local_88 = pbVar18;
                      local_70 = pbVar20;
                      recovered_10001cc0(local_50 + (ulong)uVar19 * 4,pbVar20,4);
                      uVar19 = (int)local_a0 + (int)local_48;
                      pbVar20 = local_70 + 4;
                      pbVar18 = local_88 + -1;
                    } while (pbVar18 != (byte *)0x0);
                  }
                  else {
                    pbVar18 = (byte *)0x0;
                    uVar19 = local_5c;
                    do {
                      uVar36 = (ulong)uVar19;
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4] =
                           (byte)((ulong)((uint)CONCAT11(local_38[(long)(uintptr_t)pbVar18 * 8],
                                                         local_38[(long)(uintptr_t)pbVar18 * 8 + 1]) * 0xff +
                                         0x7fff) / 0xffff);
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 1] =
                           (byte)((ulong)((uint)CONCAT11(local_38[(long)(uintptr_t)pbVar18 * 8 + 2],
                                                         local_38[(long)(uintptr_t)pbVar18 * 8 + 3]) * 0xff +
                                         0x7fff) / 0xffff);
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 2] =
                           (byte)((ulong)((uint)CONCAT11(local_38[(long)(uintptr_t)pbVar18 * 8 + 4],
                                                         local_38[(long)(uintptr_t)pbVar18 * 8 + 5]) * 0xff +
                                         0x7fff) / 0xffff);
                      local_50[(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar36 * 4 + 3] =
                           (byte)((ulong)((uint)CONCAT11(local_38[(long)(uintptr_t)pbVar18 * 8 + 6],
                                                         local_38[(long)(uintptr_t)pbVar18 * 8 + 7]) * 0xff +
                                         0x7fff) / 0xffff);
                      pbVar18 = pbVar18 + 1;
                      uVar19 = uVar19 + (int)local_48;
                    } while (local_68 != pbVar18);
                  }
                }
                pbVar18 = local_178;
                local_80 = local_80 + 1;
                pbVar20 = local_38;
              } while (local_80 < local_1a8);
              recovered_10008050(local_178);
              recovered_10008050(local_38);
              recovered_10008050(local_a8);
              puVar34 = local_58;
              lVar38 = local_198;
            }
          }
        }
        lVar38 = lVar38 + 1;
      } while (lVar38 != 7);
      uVar36 = CONCAT71((int7)((ulong)pbVar18 >> 8),local_d0 == local_e0);
    }
LAB_1000e271:
    local_e0 = (byte *)0x0;
    recovered_10008050(pvStack_e8);
    uStack_f8 = 0;
    recovered_10008050(local_100);
  }
  recovered_10008660(&local_158);
  return uVar36 & 0xffffffff;
}

#undef DAT_1001afdc
#undef DAT_1001aff8
#undef DAT_1001b014
#undef DAT_1001b030
#undef DAT_1001b06c
#undef DAT_1001b290
#undef LAB_1000e2bf
#undef uStack_f8
#undef pvStack_e8
#undef uStack_d8
#undef local_1b8
#undef local_1b0
#undef local_1a8
#undef local_1a0
#undef local_198
#undef local_190
#undef local_18c
#undef local_188
#undef local_180
#undef local_178
#undef local_16c
#undef local_168
#undef local_160
#undef local_158
#undef local_150
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_100
#undef local_f0
#undef local_e0
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
#undef local_5c
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e480
 */

void recovered_1000e480(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x38 + -0x10;
    do {
      lVar1 = *(long *)(param_1 + 0x78);
      *(undefined8 *)(lVar1 + lVar3) = 0;
      recovered_10008050(*(void **)(lVar1 + -8 + lVar3));
      lVar3 = lVar3 + -0x38;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  recovered_10008050(*(void **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x68) = 0;
  recovered_10008050(*(void **)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x50) = 0;
  recovered_10008050(*(void **)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x38) = 0;
  recovered_10008050(*(void **)(param_1 + 0x30));
  return;
}


#undef DAT_1001b2c0
#define DAT_1001b2c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x794U)))
#undef LAB_1000e7da
#define LAB_1000e7da (*(uint8_t *)(0x1000e7daU))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_98 (*(code * *)(pf_stack_frame + 56))
#define local_90 (*(undefined * *)(pf_stack_frame + 64))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_60 (*(void * *)(pf_stack_frame + 112))
#define local_58 (*(ulong *)(pf_stack_frame + 120))
#define local_50 (*(void * *)(pf_stack_frame + 128))
#define local_48 (*(int * *)(pf_stack_frame + 136))
#define local_40 (*(void * *)(pf_stack_frame + 144))
#define local_31 (*(bool *)(pf_stack_frame + 159))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e520
 */

uchar recovered_1000e520(char *param_1,void *param_2)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uchar uVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;

  *(undefined8 *)param_2 = 0;
  *(undefined8 *)((long)param_2 + 0x10) = 0;
  recovered_10008050(*(void **)((long)param_2 + 8));
  *(undefined8 *)((long)param_2 + 8) = 0;
  *(undefined8 *)((long)param_2 + 0x10) = 0;
  *(undefined8 *)((long)param_2 + 0x18) = 0;
  recovered_10008050((void *)0x0);
  local_78 = (undefined1 *)&local_b8;
  local_98 = recovered_10007fa0;
  local_90 = &DAT_1001b2c0;
  local_80 = &LAB_1000e7da;
  local_88 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 208) + -8);
  recovered_10008640(&local_b8);
  pvVar6 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    local_40 = (void *)0x0;
    local_b0 = 1;
    local_60 = param_2;
    piVar3 = recovered_10006c80((long)param_1,((uintptr_t)pf_module_state+0x6b9U));
    if (piVar3 != (int *)0x0) {
      local_40 = (void *)0x0;
      local_b0 = 2;
      local_48 = piVar3;
      uVar4 = recovered_10007690(piVar3,0,2);
      if ((int)uVar4 == 0) {
        local_40 = (void *)0x0;
        local_b0 = 3;
        uVar5 = recovered_10007710((long)local_48);
        if (-1 < (long)uVar5) {
          local_40 = (void *)0x0;
          local_b0 = 4;
          local_58 = uVar5;
          uVar4 = recovered_10007690(local_48,0,0);
          if ((int)uVar4 == 0) {
            if (local_58 == 0) {
              local_31 = true;
              local_50 = (void *)0x0;
            }
            else {
              local_40 = (void *)0x0;
              local_b0 = 5;
              pvVar6 = (void *)recovered_10007ff0(local_58);
              piVar3 = local_48;
              uVar5 = local_58;
              uVar8 = 0;
              recovered_10008050((void *)0x0);
              if (uVar5 < 8) goto LAB_1000e743;
              if (uVar5 < 0x20) {
                uVar7 = 0;
LAB_1000e718:
                uVar8 = uVar5 & 0x7ffffffffffffff8;
                do {
                  *(undefined8 *)((long)pvVar6 + uVar7) = 0;
                  uVar7 = uVar7 + 8;
                } while (uVar8 != uVar7);
                for (; uVar5 != uVar8; uVar8 = uVar8 + 1) {
LAB_1000e743:
                  *(undefined1 *)((long)pvVar6 + uVar8) = 0;
                }
              }
              else {
                uVar8 = uVar5 & 0x7fffffffffffffe0;
                uVar7 = 0;
                do {
                  *(undefined8 *)((long)pvVar6 + uVar7) = 0;
                  ((undefined8 *)((long)pvVar6 + uVar7))[1] = 0;
                  puVar1 = (undefined8 *)((long)pvVar6 + uVar7 + 0x10);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  uVar7 = uVar7 + 0x20;
                } while (uVar8 != uVar7);
                if (uVar5 != uVar8) {
                  uVar7 = uVar8;
                  if ((uVar5 & 0x18) == 0) goto LAB_1000e743;
                  goto LAB_1000e718;
                }
              }
              local_b0 = 6;
              local_50 = pvVar6;
              local_40 = pvVar6;
              uVar5 = recovered_100071d0((long)pvVar6,1,uVar5,piVar3);
              local_31 = uVar5 == local_58;
            }
            local_b0 = 8;
            local_40 = local_50;
            uVar4 = recovered_10007100(local_48);
            pvVar6 = local_50;
            if ((local_31 & (int)uVar4 == 0) != 0) {
              local_40 = local_50;
              local_b0 = 9;
              uVar2 = recovered_100097b0(local_50,local_58,local_60);
              pvVar6 = local_50;
              goto LAB_1000e61f;
            }
            goto LAB_1000e61d;
          }
        }
      }
      local_40 = (void *)0x0;
      local_b0 = 7;
      recovered_10007100(local_48);
    }
    pvVar6 = (void *)0x0;
  }
LAB_1000e61d:
  uVar2 = '\0';
LAB_1000e61f:
  recovered_10008050(pvVar6);
  recovered_10008660(&local_b8);
  return uVar2;
}

#undef DAT_1001b2c0
#undef LAB_1000e7da
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_31

#undef DAT_1001acf0
#define DAT_1001acf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c4U)))
#undef DAT_1001ad00
#define DAT_1001ad00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4U)))
#undef DAT_1001b2d8
#define DAT_1001b2d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7acU)))
#undef LAB_1000fe20
#define LAB_1000fe20 (*(uint8_t *)(0x1000fe20U))
#undef UNK_1001acf1
#define UNK_1001acf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5U)))
#undef UNK_1001acf2
#define UNK_1001acf2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6U)))
#undef UNK_1001acf3
#define UNK_1001acf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c7U)))
#undef UNK_1001acf4
#define UNK_1001acf4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8U)))
#undef UNK_1001acf5
#define UNK_1001acf5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef UNK_1001acf6
#define UNK_1001acf6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1caU)))
#undef UNK_1001acf7
#define UNK_1001acf7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbU)))
#undef UNK_1001ad02
#define UNK_1001ad02 (*(short *)(((uintptr_t)pf_module_state + 0x1d6U)))
#undef UNK_1001ad04
#define UNK_1001ad04 (*(short *)(((uintptr_t)pf_module_state + 0x1d8U)))
#undef UNK_1001ad06
#define UNK_1001ad06 (*(short *)(((uintptr_t)pf_module_state + 0x1daU)))
#undef UNK_1001ad08
#define UNK_1001ad08 (*(short *)(((uintptr_t)pf_module_state + 0x1dcU)))
#undef UNK_1001ad0a
#define UNK_1001ad0a (*(short *)(((uintptr_t)pf_module_state + 0x1deU)))
#undef UNK_1001ad0c
#define UNK_1001ad0c (*(short *)(((uintptr_t)pf_module_state + 0x1e0U)))
#undef UNK_1001ad0e
#define UNK_1001ad0e (*(short *)(((uintptr_t)pf_module_state + 0x1e2U)))
#undef _DAT_1001ad00
#define _DAT_1001ad00 (*(short *)(((uintptr_t)pf_module_state + 0x1d4U)))
#undef sRam000000001001ad02
#define sRam000000001001ad02 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1d6U)))
#undef sRam000000001001ad04
#define sRam000000001001ad04 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1d8U)))
#undef sRam000000001001ad06
#define sRam000000001001ad06 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1daU)))
#undef sRam000000001001ad08
#define sRam000000001001ad08 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1dcU)))
#undef sRam000000001001ad0a
#define sRam000000001001ad0a (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1deU)))
#undef sRam000000001001ad0c
#define sRam000000001001ad0c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1e0U)))
#undef sRam000000001001ad0e
#define sRam000000001001ad0e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1e2U)))
#undef uRam000000001001acf1
#define uRam000000001001acf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5U)))
#undef uRam000000001001acf2
#define uRam000000001001acf2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c6U)))
#undef uRam000000001001acf3
#define uRam000000001001acf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c7U)))
#undef uRam000000001001acf4
#define uRam000000001001acf4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8U)))
#undef uRam000000001001acf5
#define uRam000000001001acf5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef uRam000000001001acf6
#define uRam000000001001acf6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1caU)))
#undef uRam000000001001acf7
#define uRam000000001001acf7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbU)))
#define auStack_158 (*(undefined1 (*)[8])(pf_stack_frame + 24))
#define local_150 (*(ulong *)(pf_stack_frame + 32))
#define local_148 (*(ulong *)(pf_stack_frame + 40))
#define local_140 (*(uchar * *)(pf_stack_frame + 48))
#define local_138 (*(ulong *)(pf_stack_frame + 56))
#define local_130 (*(ulong *)(pf_stack_frame + 64))
#define local_128 (*(ulong *)(pf_stack_frame + 72))
#define local_120 (*(undefined8 *)(pf_stack_frame + 80))
#define local_118 (*(undefined4 *)(pf_stack_frame + 88))
#define local_100 (*(code * *)(pf_stack_frame + 112))
#define local_f8 (*(undefined * *)(pf_stack_frame + 120))
#define local_f0 (*(undefined1 * *)(pf_stack_frame + 128))
#define local_e8 (*(undefined1 * *)(pf_stack_frame + 136))
#define local_e0 (*(undefined1 * *)(pf_stack_frame + 144))
#define local_c8 (*(uchar * *)(pf_stack_frame + 168))
#define local_c0 (*(ulong *)(pf_stack_frame + 176))
#define local_b8 (*(uint * *)(pf_stack_frame + 184))
#define local_b0 (*(uchar * *)(pf_stack_frame + 192))
#define local_a8 (*(uchar * *)(pf_stack_frame + 200))
#define local_9d (*(undefined1 *)(pf_stack_frame + 211))
#define local_9c (*(undefined1 *)(pf_stack_frame + 212))
#define local_9b (*(undefined1 *)(pf_stack_frame + 213))
#define local_9a (*(undefined1 *)(pf_stack_frame + 214))
#define local_99 (*(undefined1 *)(pf_stack_frame + 215))
#define local_98 (*(undefined1 *)(pf_stack_frame + 216))
#define local_97 (*(undefined1 *)(pf_stack_frame + 217))
#define local_96 (*(undefined1 *)(pf_stack_frame + 218))
#define local_95 (*(undefined4 *)(pf_stack_frame + 219))
#define local_91 (*(undefined1 *)(pf_stack_frame + 223))
#define local_90 (*(uchar * *)(pf_stack_frame + 224))
#define local_88 (*(uint * *)(pf_stack_frame + 232))
#define local_80 (*(ulong *)(pf_stack_frame + 240))
#define local_78 (*(uchar * *)(pf_stack_frame + 248))
#define local_70 (*(uchar * *)(pf_stack_frame + 256))
#define local_68 (*(uint * *)(pf_stack_frame + 264))
#define local_60 (*(uint * *)(pf_stack_frame + 272))
#define local_58 (*(uchar * *)(pf_stack_frame + 280))
#define local_50 (*(uchar * *)(pf_stack_frame + 288))
#define local_48 (*(uchar * *)(pf_stack_frame + 296))
#define local_40 (*(void * *)(pf_stack_frame + 304))
#define local_38 (*(undefined8 *)(pf_stack_frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000e840(char *name,uchar *pixels,int width,int height)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  uchar uVar33;
  uchar uVar34;
  uchar uVar35;
  uchar uVar36;
  uchar uVar37;
  uchar uVar38;
  uchar uVar39;
  uchar uVar40;
  uchar uVar41;
  uchar uVar42;
  uchar uVar43;
  uchar uVar44;
  uchar uVar45;
  uchar uVar46;
  uchar uVar47;
  uchar uVar48;
  uchar uVar49;
  uchar uVar50;
  uchar uVar51;
  uchar uVar52;
  uchar uVar53;
  uchar uVar54;
  uchar uVar55;
  uchar uVar56;
  uchar uVar57;
  uchar uVar58;
  uchar uVar59;
  uchar uVar60;
  uchar uVar61;
  uchar uVar62;
  uchar uVar63;
  uchar uVar64;
  uchar uVar65;
  uchar uVar66;
  uchar uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  pf_u112 auVar70;
  pf_u96 auVar71;
  unkbyte10 Var72;
  uchar uVar73;
  byte bVar74;
  uint *puVar75;
  long lVar76;
  undefined8 uVar77;
  uchar *puVar78;
  ulong uVar79;
  uchar *puVar80;
  uint *puVar81;
  uint *puVar82;
  uint uVar83;
  ulong uVar84;
  int iVar85;
  ulong uVar86;
  byte bVar87;
  uchar *puVar88;
  byte bVar89;
  long lVar90;
  uint uVar91;
  uchar *puVar92;
  uint uVar93;
  uint uVar94;
  uchar *puVar95;
  long lVar96;
  ulong uVar97;
  uint uVar98;
  ulong uVar99;
  uchar *puVar100;
  byte bVar101;
  int iVar102;
  uchar *puVar103;
  int iVar104;
  byte bVar105;
  ulong uVar106;
  bool bVar107;
  short sVar115;
  uint128 auVar114;
  uint128 auVar113;
  uint128 auVar112;
  uint128 auVar111;
  uint128 auVar110;
  uint128 auVar109;
  uint128 auVar108;
  char cVar116;
  char cVar117;
  char cVar118;
  char cVar119;
  uint128 auVar120;
  uint128 auVar121;
  uint128 auVar122;

  local_f0 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 368) + -8);
  local_e0 = auStack_158;
  local_50 = (uchar *)CONCAT44(PF_PART4(local_50, 4),width);
  local_100 = recovered_10007fa0;
  local_f8 = &DAT_1001b2d8;
  local_e8 = &LAB_1000fe20;
  local_78 = pixels;
  recovered_10008640(&local_120);
  if ((0 < height && 0 < width) && (pixels != (uchar *)0x0 && name != (char *)0x0)) {
    local_118 = 0xffffffff;
    puVar75 = recovered_10006c80((long)name,((uintptr_t)pf_module_state+0x677U));
    if (puVar75 != (uint *)0x0) {
      local_118 = 0xffffffff;
      lVar76 = recovered_10007500(((uintptr_t)pf_module_state+0x284U),1,8,puVar75);
      puVar103 = local_50;
      local_b8 = puVar75;
      if (lVar76 == 8) {
        local_9d = (undefined1)((ulong)local_50 >> 0x18);
        local_9c = (undefined1)((ulong)local_50 >> 0x10);
        local_9b = (undefined1)((ulong)local_50 >> 8);
        local_9a = SUB81(local_50,0);
        local_99 = (undefined1)((uint)height >> 0x18);
        local_98 = (undefined1)((uint)height >> 0x10);
        local_97 = (undefined1)((uint)height >> 8);
        local_96 = (undefined1)height;
        local_95 = 0x608;
        local_91 = 0;
        local_118 = 0xffffffff;
        uVar73 = recovered_1000fef0(puVar75,((uintptr_t)pf_module_state+0x67aU),(long)&local_9d,0xd);
        if (uVar73 == '\0') goto LAB_1000ea1b;
        local_128 = (ulong)puVar103 & 0xffffffff;
        local_70 = (uchar *)(local_128 * 4 + 1);
        local_c0 = (ulong)(uint)height;
        local_88 = (uint *)((long)local_70 * local_c0);
        local_118 = 1;
        local_40 = (void *)recovered_10007ff0((long)local_88);
        uVar106 = local_128;
        uVar84 = local_128 * 4;
        puVar75 = (uint *)0x0;
        recovered_10008050((void *)0x0);
        if (local_88 < (uint *)0x8) goto LAB_1000eab7;
        if (local_88 < (uint *)0x20) {
          puVar82 = (uint *)0x0;
LAB_1000ea96:
          puVar75 = (uint *)((ulong)local_88 & 0xfffffffffffffff8);
          do {
            *(undefined8 *)((long)local_40 + (long)puVar82) = 0;
            puVar82 = puVar82 + 2;
          } while (puVar75 != puVar82);
          for (; local_88 != puVar75; puVar75 = (uint *)((long)puVar75 + 1)) {
LAB_1000eab7:
            *(undefined1 *)((long)local_40 + (long)puVar75) = 0;
          }
        }
        else {
          puVar75 = (uint *)((ulong)local_88 & 0xffffffffffffffe0);
          puVar82 = (uint *)0x0;
          do {
            *(uint128 *)((long)local_40 + (long)puVar82) = (uint128)0x0;
            *(uint128 *)((long)local_40 + 0x10 + (long)puVar82) = (uint128)0x0;
            puVar82 = puVar82 + 8;
          } while (puVar75 != puVar82);
          if (local_88 != puVar75) {
            puVar82 = puVar75;
            if (((ulong)local_88 & 0x18) == 0) goto LAB_1000eab7;
            goto LAB_1000ea96;
          }
        }
        local_c8 = (uchar *)(uVar106 * -4);
        local_150 = uVar84 - 4;
        local_138 = uVar84 & 0x1ffffffe0;
        local_130 = local_150 & 0xffffffffffffffe0;
        local_148 = local_130 + 4;
        lVar76 = (long)local_40 + 0x11;
        lVar90 = (long)local_40 + 1;
        puVar92 = (uchar *)((long)local_40 + 0x15);
        puVar95 = (uchar *)((long)local_40 + 5);
        uVar106 = 0;
        puVar103 = local_78;
        uVar83 = (uint)local_50;
        local_38 = (uchar *)uVar84;
        do {
          puVar80 = local_78 + uVar106 * uVar84;
          puVar78 = local_c8 + (long)puVar80;
          if (uVar106 == 0) {
            puVar78 = (uchar *)0x0;
          }
          bVar74 = local_78[uVar106 * uVar84];
          uVar94 = 0x100 - bVar74;
          if (-1 < (char)bVar74) {
            uVar94 = (uint)bVar74;
          }
          if (puVar78 == (uchar *)0x0) {
            bVar4 = puVar80[1];
            uVar91 = 0x100 - bVar4;
            if (-1 < (char)bVar4) {
              uVar91 = (uint)bVar4;
            }
            bVar87 = puVar80[2];
            uVar98 = 0x100 - bVar87;
            if (-1 < (char)bVar87) {
              uVar98 = (uint)bVar87;
            }
            bVar89 = puVar80[3];
            uVar93 = 0x100 - bVar89;
            if (-1 < (char)bVar89) {
              uVar93 = (uint)bVar89;
            }
            uVar94 = uVar93 + uVar98 + uVar91 + uVar94;
            uVar79 = 0xffffffffffffffff;
          }
          else {
            bVar4 = puVar80[1];
            uVar91 = 0x100 - bVar4;
            if (-1 < (char)bVar4) {
              uVar91 = (uint)bVar4;
            }
            bVar87 = puVar80[2];
            uVar98 = 0x100 - bVar87;
            if (-1 < (char)bVar87) {
              uVar98 = (uint)bVar87;
            }
            bVar89 = puVar80[3];
            uVar93 = 0x100 - bVar89;
            if (-1 < (char)bVar89) {
              uVar93 = (uint)bVar89;
            }
            uVar94 = uVar93 + uVar98 + uVar91 + uVar94;
            uVar5 = *(undefined4 *)puVar78;
            cVar116 = bVar74 - (char)uVar5;
            cVar117 = bVar4 - (char)((uint)uVar5 >> 8);
            cVar118 = bVar87 - (char)((uint)uVar5 >> 0x10);
            cVar119 = bVar89 - (char)((uint)uVar5 >> 0x18);
            PF_PART15(auVar114, 0) = ZEXT415(0);
            ((uint8_t *)(void *)&auVar114)[0xf] = uRam000000001001acf7;
            PF_PART2(auVar113, 14) = PF_PART2(auVar114, 14);
            PF_PART13(auVar113, 0) = ZEXT413(0);
            ((uint8_t *)(void *)&auVar113)[0xd] = uRam000000001001acf6;
            PF_PART3(auVar112, 13) = PF_PART3(auVar113, 13);
            PF_PART13(auVar112, 0) = ZEXT413(0);
            PF_PART4(auVar111, 12) = PF_PART4(auVar112, 12);
            PF_PART11(auVar111, 0) = ZEXT411(0);
            ((uint8_t *)(void *)&auVar111)[0xb] = uRam000000001001acf5;
            PF_PART5(auVar110, 11) = PF_PART5(auVar111, 11);
            PF_PART11(auVar110, 0) = ZEXT411(0);
            PF_PART6(auVar109, 10) = PF_PART6(auVar110, 10);
            PF_PART9(auVar109, 0) = (unkuint9)0;
            ((uint8_t *)(void *)&auVar109)[9] = uRam000000001001acf4;
            PF_PART7(auVar108, 9) = PF_PART7(auVar109, 9);
            PF_PART9(auVar108, 0) = (unkuint9)0;
            Var72 = CONCAT91(CONCAT81(PF_PART8(auVar108, 8),uRam000000001001acf3),cVar119);
            PF_PART10(auVar71, 2) = Var72;
            PF_PART1(auVar71,1) = uRam000000001001acf2;
            PF_PART1(auVar71,0) = cVar118;
            PF_PART12(auVar70, 2) = auVar71;
            PF_PART1(auVar70,1) = uRam000000001001acf1;
            PF_PART1(auVar70,0) = cVar117;
            PF_PART2(auVar122, 0) = CONCAT11(DAT_1001acf0,cVar116);
            PF_PART14(auVar122, 2) = auVar70;
            PF_PART2(auVar120, 0) = _DAT_1001ad00 - PF_PART2(auVar122, 0);
            PF_PART2(auVar120, 2) = sRam000000001001ad02 - PF_PART2(auVar70, 0);
            PF_PART2(auVar120, 4) = sRam000000001001ad04 - PF_PART2(auVar71, 0);
            PF_PART2(auVar120, 6) = sRam000000001001ad06 - (short)Var72;
            PF_PART2(auVar120, 8) = sRam000000001001ad08 - PF_PART2(auVar108, 8);
            PF_PART2(auVar120, 10) = sRam000000001001ad0a - PF_PART2(auVar110, 10);
            PF_PART2(auVar120, 12) = sRam000000001001ad0c - PF_PART2(auVar112, 12);
            PF_PART2(auVar120, 14) = sRam000000001001ad0e - PF_PART2(auVar113, 14);
            ((uint8_t *)(void *)&auVar121)[0] = -(cVar116 < '\0');
            ((uint8_t *)(void *)&auVar121)[1] = -(cVar116 < '\0');
            ((uint8_t *)(void *)&auVar121)[2] = -(cVar117 < '\0');
            ((uint8_t *)(void *)&auVar121)[3] = -(cVar117 < '\0');
            ((uint8_t *)(void *)&auVar121)[4] = -(cVar118 < '\0');
            ((uint8_t *)(void *)&auVar121)[5] = -(cVar118 < '\0');
            ((uint8_t *)(void *)&auVar121)[6] = -(cVar119 < '\0');
            ((uint8_t *)(void *)&auVar121)[7] = -(cVar119 < '\0');
            ((uint8_t *)(void *)&auVar121)[8] = 0;
            ((uint8_t *)(void *)&auVar121)[9] = -('\0' < SUB161((uint128)0x0,9));
            ((uint8_t *)(void *)&auVar121)[10] = -('\0' < SUB161((uint128)0x0,10));
            ((uint8_t *)(void *)&auVar121)[0xb] = -('\0' < SUB161((uint128)0x0,0xb));
            ((uint8_t *)(void *)&auVar121)[0xc] = -('\0' < SUB161((uint128)0x0,0xc));
            ((uint8_t *)(void *)&auVar121)[0xd] = -('\0' < SUB161((uint128)0x0,0xd));
            ((uint8_t *)(void *)&auVar121)[0xe] = -('\0' < SUB161((uint128)0x0,0xe));
            ((uint8_t *)(void *)&auVar121)[0xf] = -('\0' < SUB161((uint128)0x0,0xf));
            auVar122 = ~auVar121 & auVar122 | auVar120 & auVar121;
            sVar115 = PF_PART2(auVar122, 6) + PF_PART2(auVar122, 2);
            uVar79 = (ulong)CONCAT22(sVar115,sVar115 + PF_PART2(auVar122, 4) + PF_PART2(auVar122, 0)) & 0xffff;
          }
          local_a8 = (uchar *)CONCAT44(PF_PART4(local_a8, 4),(uint)bVar74);
          uVar97 = (ulong)uVar94;
          uVar99 = uVar97;
          if (uVar83 == 1) {
          }
          else {
            uVar86 = 4;
            do {
              bVar101 = puVar103[uVar86];
              uVar83 = 0x100 - bVar101;
              if (-1 < (char)bVar101) {
                uVar83 = (uint)bVar101;
              }
              bVar105 = bVar101 - puVar103[uVar86 - 4];
              uVar94 = 0x100 - bVar105;
              if (-1 < (char)bVar105) {
                uVar94 = (uint)bVar105;
              }
              if (puVar78 != (uchar *)0x0) {
                bVar101 = bVar101 - puVar78[uVar86];
                uVar91 = 0x100 - bVar101;
                if (-1 < (char)bVar101) {
                  uVar91 = (uint)bVar101;
                }
                uVar79 = uVar79 + uVar91;
              }
              uVar97 = uVar97 + uVar83;
              uVar99 = uVar99 + uVar94;
              uVar86 = uVar86 + 1;
              uVar84 = (ulong)local_38;
            } while (local_38 != (uchar *)uVar86);
          }
          bVar107 = uVar99 < uVar97;
          if (bVar107) {
            uVar97 = uVar99;
          }
          cVar116 = '\x02';
          if (uVar97 <= uVar79) {
            cVar116 = bVar107;
          }
          if (puVar78 == (uchar *)0x0) {
            cVar116 = bVar107;
          }
          lVar96 = uVar106 * (long)local_70;
          *(char *)((long)local_40 + lVar96) = cVar116;
          local_80 = lVar90;
          local_68 = (uint *)uVar106;
          local_60 = (uint *)lVar76;
          local_58 = puVar92;
          local_48 = puVar95;
          if (cVar116 == '\x02') {
            if (puVar78 != (uchar *)0x0) {
              if ((uint)local_50 == 0) {
                uVar106 = 0;
LAB_1000ef20:
                do {
                  *(uchar *)(lVar90 + uVar106) = puVar103[uVar106] - puVar78[uVar106];
                  uVar106 = uVar106 + 1;
                } while (uVar84 != uVar106);
              }
              else {
                if ((uint)local_50 < 8) {
                  uVar106 = 0;
                }
                else {
                  uVar106 = 0;
                  do {
                    puVar80 = puVar103 + uVar106;
                    uVar73 = puVar80[1];
                    uVar7 = puVar80[2];
                    uVar8 = puVar80[3];
                    uVar9 = puVar80[4];
                    uVar10 = puVar80[5];
                    uVar11 = puVar80[6];
                    uVar12 = puVar80[7];
                    uVar13 = puVar80[8];
                    uVar14 = puVar80[9];
                    uVar15 = puVar80[10];
                    uVar16 = puVar80[0xb];
                    uVar17 = puVar80[0xc];
                    uVar18 = puVar80[0xd];
                    uVar19 = puVar80[0xe];
                    uVar20 = puVar80[0xf];
                    puVar92 = puVar103 + uVar106 + 0x10;
                    uVar21 = *puVar92;
                    uVar22 = puVar92[1];
                    uVar23 = puVar92[2];
                    uVar24 = puVar92[3];
                    uVar25 = puVar92[4];
                    uVar26 = puVar92[5];
                    uVar27 = puVar92[6];
                    uVar28 = puVar92[7];
                    uVar29 = puVar92[8];
                    uVar30 = puVar92[9];
                    uVar31 = puVar92[10];
                    uVar32 = puVar92[0xb];
                    uVar33 = puVar92[0xc];
                    uVar34 = puVar92[0xd];
                    uVar35 = puVar92[0xe];
                    uVar36 = puVar92[0xf];
                    puVar92 = puVar78 + uVar106;
                    uVar37 = puVar92[1];
                    uVar38 = puVar92[2];
                    uVar39 = puVar92[3];
                    uVar40 = puVar92[4];
                    uVar41 = puVar92[5];
                    uVar42 = puVar92[6];
                    uVar43 = puVar92[7];
                    uVar44 = puVar92[8];
                    uVar45 = puVar92[9];
                    uVar46 = puVar92[10];
                    uVar47 = puVar92[0xb];
                    uVar48 = puVar92[0xc];
                    uVar49 = puVar92[0xd];
                    uVar50 = puVar92[0xe];
                    uVar51 = puVar92[0xf];
                    puVar95 = puVar78 + uVar106 + 0x10;
                    uVar52 = *puVar95;
                    uVar53 = puVar95[1];
                    uVar54 = puVar95[2];
                    uVar55 = puVar95[3];
                    uVar56 = puVar95[4];
                    uVar57 = puVar95[5];
                    uVar58 = puVar95[6];
                    uVar59 = puVar95[7];
                    uVar60 = puVar95[8];
                    uVar61 = puVar95[9];
                    uVar62 = puVar95[10];
                    uVar63 = puVar95[0xb];
                    uVar64 = puVar95[0xc];
                    uVar65 = puVar95[0xd];
                    uVar66 = puVar95[0xe];
                    uVar67 = puVar95[0xf];
                    pcVar2 = (char *)(lVar76 + -0x10 + uVar106);
                    *pcVar2 = *puVar80 - *puVar92;
                    pcVar2[1] = uVar73 - uVar37;
                    pcVar2[2] = uVar7 - uVar38;
                    pcVar2[3] = uVar8 - uVar39;
                    pcVar2[4] = uVar9 - uVar40;
                    pcVar2[5] = uVar10 - uVar41;
                    pcVar2[6] = uVar11 - uVar42;
                    pcVar2[7] = uVar12 - uVar43;
                    pcVar2[8] = uVar13 - uVar44;
                    pcVar2[9] = uVar14 - uVar45;
                    pcVar2[10] = uVar15 - uVar46;
                    pcVar2[0xb] = uVar16 - uVar47;
                    pcVar2[0xc] = uVar17 - uVar48;
                    pcVar2[0xd] = uVar18 - uVar49;
                    pcVar2[0xe] = uVar19 - uVar50;
                    pcVar2[0xf] = uVar20 - uVar51;
                    pcVar2 = (char *)(lVar76 + uVar106);
                    *pcVar2 = uVar21 - uVar52;
                    pcVar2[1] = uVar22 - uVar53;
                    pcVar2[2] = uVar23 - uVar54;
                    pcVar2[3] = uVar24 - uVar55;
                    pcVar2[4] = uVar25 - uVar56;
                    pcVar2[5] = uVar26 - uVar57;
                    pcVar2[6] = uVar27 - uVar58;
                    pcVar2[7] = uVar28 - uVar59;
                    pcVar2[8] = uVar29 - uVar60;
                    pcVar2[9] = uVar30 - uVar61;
                    pcVar2[10] = uVar31 - uVar62;
                    pcVar2[0xb] = uVar32 - uVar63;
                    pcVar2[0xc] = uVar33 - uVar64;
                    pcVar2[0xd] = uVar34 - uVar65;
                    pcVar2[0xe] = uVar35 - uVar66;
                    pcVar2[0xf] = uVar36 - uVar67;
                    uVar106 = uVar106 + 0x20;
                  } while (local_138 != uVar106);
                  if (uVar84 == local_138) goto LAB_1000eb82;
                  uVar106 = local_138;
                  if ((local_128 & 7) == 0) goto LAB_1000ef20;
                }
                do {
                  uVar5 = *(undefined4 *)(puVar103 + uVar106);
                  uVar6 = *(undefined4 *)(puVar78 + uVar106);
                  *(uint *)(lVar90 + uVar106) =
                       CONCAT13((char)((uint)uVar5 >> 0x18) - (char)((uint)uVar6 >> 0x18),
                                CONCAT12((char)((uint)uVar5 >> 0x10) - (char)((uint)uVar6 >> 0x10),
                                         CONCAT11((char)((uint)uVar5 >> 8) -
                                                  (char)((uint)uVar6 >> 8),(char)uVar5 - (char)uVar6
                                                 )));
                  uVar106 = uVar106 + 4;
                } while (uVar84 != uVar106);
              }
              goto LAB_1000eb82;
            }
LAB_1000eb40:
            local_118 = 2;
            local_a8 = puVar103;
            recovered_10001cc0((void *)((long)local_40 + lVar96 + 1),puVar80,uVar84);
            puVar103 = local_a8;
            uVar84 = (ulong)local_38;
          }
          else {
            if (cVar116 != '\x01') goto LAB_1000eb40;
            *(byte *)((long)local_40 + lVar96 + 1) = bVar74;
            *(byte *)((long)local_40 + lVar96 + 2) = bVar4;
            *(byte *)((long)local_40 + lVar96 + 3) = bVar87;
            *(byte *)((long)local_40 + lVar96 + 4) = bVar89;
            if ((uint)local_50 != 1) {
              if (local_150 == 0) {
                uVar106 = 4;
LAB_1000efe0:
                do {
                  *(uchar *)(lVar90 + uVar106) = puVar103[uVar106] - puVar103[uVar106 - 4];
                  uVar106 = uVar106 + 1;
                } while (uVar84 != uVar106);
              }
              else {
                uVar79 = 0;
                if (0x1f < local_150) {
                  do {
                    puVar88 = puVar103 + uVar79;
                    uVar73 = puVar88[1];
                    uVar7 = puVar88[2];
                    uVar8 = puVar88[3];
                    uVar9 = puVar88[4];
                    uVar10 = puVar88[5];
                    uVar11 = puVar88[6];
                    uVar12 = puVar88[7];
                    uVar13 = puVar88[8];
                    uVar14 = puVar88[9];
                    uVar15 = puVar88[10];
                    uVar16 = puVar88[0xb];
                    uVar17 = puVar88[0xc];
                    uVar18 = puVar88[0xd];
                    uVar19 = puVar88[0xe];
                    uVar20 = puVar88[0xf];
                    puVar80 = puVar103 + uVar79 + 4;
                    uVar21 = puVar80[1];
                    uVar22 = puVar80[2];
                    uVar23 = puVar80[3];
                    uVar24 = puVar80[4];
                    uVar25 = puVar80[5];
                    uVar26 = puVar80[6];
                    uVar27 = puVar80[7];
                    uVar28 = puVar80[8];
                    uVar29 = puVar80[9];
                    uVar30 = puVar80[10];
                    uVar31 = puVar80[0xb];
                    uVar32 = puVar80[0xc];
                    uVar33 = puVar80[0xd];
                    uVar34 = puVar80[0xe];
                    uVar35 = puVar80[0xf];
                    puVar78 = puVar103 + uVar79 + 0x10;
                    uVar36 = *puVar78;
                    uVar37 = puVar78[1];
                    uVar38 = puVar78[2];
                    uVar39 = puVar78[3];
                    uVar40 = puVar78[4];
                    uVar41 = puVar78[5];
                    uVar42 = puVar78[6];
                    uVar43 = puVar78[7];
                    uVar44 = puVar78[8];
                    uVar45 = puVar78[9];
                    uVar46 = puVar78[10];
                    uVar47 = puVar78[0xb];
                    uVar48 = puVar78[0xc];
                    uVar49 = puVar78[0xd];
                    uVar50 = puVar78[0xe];
                    uVar51 = puVar78[0xf];
                    puVar78 = puVar103 + uVar79 + 0x14;
                    uVar52 = *puVar78;
                    uVar53 = puVar78[1];
                    uVar54 = puVar78[2];
                    uVar55 = puVar78[3];
                    uVar56 = puVar78[4];
                    uVar57 = puVar78[5];
                    uVar58 = puVar78[6];
                    uVar59 = puVar78[7];
                    uVar60 = puVar78[8];
                    uVar61 = puVar78[9];
                    uVar62 = puVar78[10];
                    uVar63 = puVar78[0xb];
                    uVar64 = puVar78[0xc];
                    uVar65 = puVar78[0xd];
                    uVar66 = puVar78[0xe];
                    uVar67 = puVar78[0xf];
                    puVar78 = puVar92 + (uVar79 - 0x10);
                    *puVar78 = *puVar80 - *puVar88;
                    puVar78[1] = uVar21 - uVar73;
                    puVar78[2] = uVar22 - uVar7;
                    puVar78[3] = uVar23 - uVar8;
                    puVar78[4] = uVar24 - uVar9;
                    puVar78[5] = uVar25 - uVar10;
                    puVar78[6] = uVar26 - uVar11;
                    puVar78[7] = uVar27 - uVar12;
                    puVar78[8] = uVar28 - uVar13;
                    puVar78[9] = uVar29 - uVar14;
                    puVar78[10] = uVar30 - uVar15;
                    puVar78[0xb] = uVar31 - uVar16;
                    puVar78[0xc] = uVar32 - uVar17;
                    puVar78[0xd] = uVar33 - uVar18;
                    puVar78[0xe] = uVar34 - uVar19;
                    puVar78[0xf] = uVar35 - uVar20;
                    puVar80 = puVar92 + uVar79;
                    *puVar80 = uVar52 - uVar36;
                    puVar80[1] = uVar53 - uVar37;
                    puVar80[2] = uVar54 - uVar38;
                    puVar80[3] = uVar55 - uVar39;
                    puVar80[4] = uVar56 - uVar40;
                    puVar80[5] = uVar57 - uVar41;
                    puVar80[6] = uVar58 - uVar42;
                    puVar80[7] = uVar59 - uVar43;
                    puVar80[8] = uVar60 - uVar44;
                    puVar80[9] = uVar61 - uVar45;
                    puVar80[10] = uVar62 - uVar46;
                    puVar80[0xb] = uVar63 - uVar47;
                    puVar80[0xc] = uVar64 - uVar48;
                    puVar80[0xd] = uVar65 - uVar49;
                    puVar80[0xe] = uVar66 - uVar50;
                    puVar80[0xf] = uVar67 - uVar51;
                    uVar79 = uVar79 + 0x20;
                  } while (local_130 != uVar79);
                  if (local_150 == local_130) goto LAB_1000eb82;
                  uVar79 = local_130;
                  uVar106 = local_148;
                  if ((local_150 & 0x1c) == 0) goto LAB_1000efe0;
                }
                do {
                  uVar5 = *(undefined4 *)(puVar103 + uVar79 + 4);
                  uVar6 = *(undefined4 *)(puVar103 + uVar79);
                  *(uint *)(puVar95 + uVar79) =
                       CONCAT13((char)((uint)uVar5 >> 0x18) - (char)((uint)uVar6 >> 0x18),
                                CONCAT12((char)((uint)uVar5 >> 0x10) - (char)((uint)uVar6 >> 0x10),
                                         CONCAT11((char)((uint)uVar5 >> 8) -
                                                  (char)((uint)uVar6 >> 8),(char)uVar5 - (char)uVar6
                                                 )));
                  uVar79 = uVar79 + 4;
                } while (local_150 != uVar79);
              }
            }
          }
LAB_1000eb82:
          uVar106 = (long)local_68 + 1;
          puVar103 = puVar103 + uVar84;
          lVar76 = (long)local_60 + (long)local_70;
          lVar90 = local_80 + (long)local_70;
          puVar92 = local_58 + (long)local_70;
          puVar95 = local_48 + (long)local_70;
          uVar83 = (uint)local_50;
        } while (uVar106 != local_c0);
        local_140 = (uchar *)0x0;
        local_118 = 3;
        puVar95 = (uchar *)recovered_10007ff0(4);
        puVar75 = (uint *)0x0;
        recovered_10008050((void *)0x0);
        puVar95[0] = 'x';
        puVar95[1] = '\x01';
        local_c0 = (long)local_40 + 0x10;
        puVar103 = (uchar *)0x2;
        puVar92 = (uchar *)0x4;
        puVar82 = local_88;
LAB_1000f05c:
        do {
          local_80 = (long)puVar82 - (long)puVar75;
          local_70 = (uchar *)0xffff;
          if (local_80 < 0xffff) {
            local_70 = (uchar *)local_80;
          }
          local_68 = (uint *)((long)puVar75 + (long)local_70);
          uVar73 = local_68 == puVar82;
          puVar81 = local_68;
          local_60 = puVar75;
          local_38 = puVar103;
          if (puVar103 == puVar92) {
            puVar103 = (uchar *)((long)(uintptr_t)puVar92 * 2);
            if (puVar92 == (uchar *)0x0) {
              puVar103 = (uchar *)0x4;
            }
            if (puVar92 < puVar103) {
              local_78 = (uchar *)CONCAT71(PF_PART7(local_78, 1),uVar73);
              local_118 = 4;
              local_90 = puVar95;
              local_58 = puVar92;
              local_50 = puVar103;
              local_48 = puVar95;
              puVar95 = (uchar *)recovered_10007ff0((long)puVar103);
              puVar81 = local_68;
              if (local_58 != (uchar *)0x0) {
                if (local_58 < (uchar *)0x4) {
                  puVar103 = (uchar *)0x0;
                }
                else {
                  puVar103 = (uchar *)0x0;
                  if (0x1f < (ulong)((long)puVar95 - (long)local_48)) {
                    if (local_58 < (uchar *)0x20) {
                      puVar92 = (uchar *)0x0;
                    }
                    else {
                      puVar103 = (uchar *)((ulong)local_58 & 0xffffffffffffffe0);
                      puVar92 = (uchar *)0x0;
                      do {
                        uVar77 = *(undefined8 *)(local_48 + (long)puVar92 + 8);
                        uVar68 = *(undefined8 *)(local_48 + 0x10 + (long)puVar92);
                        uVar69 = *(undefined8 *)(local_48 + 0x10 + (long)puVar92 + 8);
                        *(undefined8 *)(puVar95 + (long)puVar92) =
                             *(undefined8 *)(local_48 + (long)puVar92);
                        *(undefined8 *)(puVar95 + (long)puVar92 + 8) = uVar77;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar92) = uVar68;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar92 + 8) = uVar69;
                        puVar92 = puVar92 + 0x20;
                      } while (puVar103 != puVar92);
                      if (local_58 == puVar103) goto LAB_1000f1df;
                      puVar92 = puVar103;
                      if (((ulong)local_58 & 0x1c) == 0) goto LAB_1000f175;
                    }
                    puVar103 = (uchar *)((ulong)local_58 & 0xfffffffffffffffc);
                    do {
                      *(undefined4 *)(puVar95 + (long)puVar92) =
                           *(undefined4 *)(local_48 + (long)puVar92);
                      puVar92 = puVar92 + 4;
                    } while (puVar103 != puVar92);
                    if (local_58 == puVar103) goto LAB_1000f1df;
                  }
                }
LAB_1000f175:
                uVar84 = (ulong)local_58 & 3;
                puVar92 = puVar103;
                if (uVar84 != 0) {
                  do {
                    puVar95[(long)puVar92] = local_48[(long)puVar92];
                    puVar92 = puVar92 + 1;
                    uVar84 = uVar84 - 1;
                  } while (uVar84 != 0);
                }
                if ((ulong)((long)puVar103 - (long)local_58) < 0xfffffffffffffffd) {
                  do {
                    puVar95[(long)puVar92] = local_48[(long)puVar92];
                    (puVar95 + 1)[(long)puVar92] = (local_48 + 1)[(long)puVar92];
                    (puVar95 + 2)[(long)puVar92] = (local_48 + 2)[(long)puVar92];
                    (puVar95 + 3)[(long)puVar92] = (local_48 + 3)[(long)puVar92];
                    puVar92 = puVar92 + 4;
                  } while (local_58 != puVar92);
                }
              }
LAB_1000f1df:
              recovered_10008050(local_48);
              puVar82 = local_88;
              puVar92 = local_50;
              uVar73 = (uchar)local_78;
            }
          }
          puVar75 = puVar81;
          puVar95[(long)local_38] = uVar73;
          if (local_38 + 1 == puVar92) {
            puVar103 = (uchar *)((long)(uintptr_t)puVar92 * 2);
            if (puVar92 == (uchar *)0x0) {
              puVar103 = (uchar *)0x4;
            }
            if (puVar92 < puVar103) {
              local_118 = 5;
              local_90 = puVar95;
              local_78 = local_38 + 1;
              local_58 = puVar103;
              local_50 = puVar92;
              local_48 = puVar95;
              puVar95 = (uchar *)recovered_10007ff0((long)puVar103);
              puVar75 = local_68;
              if (local_50 != (uchar *)0x0) {
                if (local_78 < (uchar *)0x4) {
                  puVar103 = (uchar *)0x0;
                }
                else {
                  puVar103 = (uchar *)0x0;
                  if (0x1f < (ulong)((long)puVar95 - (long)local_48)) {
                    if (local_78 < (uchar *)0x20) {
                      puVar92 = (uchar *)0x0;
                    }
                    else {
                      puVar103 = (uchar *)((ulong)local_78 & 0xffffffffffffffe0);
                      puVar92 = (uchar *)0x0;
                      do {
                        uVar77 = *(undefined8 *)(local_48 + (long)puVar92 + 8);
                        uVar68 = *(undefined8 *)(local_48 + 0x10 + (long)puVar92);
                        uVar69 = *(undefined8 *)(local_48 + 0x10 + (long)puVar92 + 8);
                        *(undefined8 *)(puVar95 + (long)puVar92) =
                             *(undefined8 *)(local_48 + (long)puVar92);
                        *(undefined8 *)(puVar95 + (long)puVar92 + 8) = uVar77;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar92) = uVar68;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar92 + 8) = uVar69;
                        puVar92 = puVar92 + 0x20;
                      } while (puVar103 != puVar92);
                      if (local_78 == puVar103) goto LAB_1000f36f;
                      puVar92 = puVar103;
                      if (((ulong)local_78 & 0x1c) == 0) goto LAB_1000f305;
                    }
                    puVar103 = (uchar *)((ulong)local_78 & 0xfffffffffffffffc);
                    do {
                      *(undefined4 *)(puVar95 + (long)puVar92) =
                           *(undefined4 *)(local_48 + (long)puVar92);
                      puVar92 = puVar92 + 4;
                    } while (puVar103 != puVar92);
                    if (local_78 == puVar103) goto LAB_1000f36f;
                  }
                }
LAB_1000f305:
                uVar83 = (int)local_38 + 1U & 3;
                uVar84 = (ulong)uVar83;
                puVar92 = puVar103;
                if (uVar83 != 0) {
                  do {
                    puVar95[(long)puVar92] = local_48[(long)puVar92];
                    puVar92 = puVar92 + 1;
                    uVar84 = uVar84 - 1;
                  } while (uVar84 != 0);
                }
                if (2 < (ulong)((long)local_38 - (long)puVar103)) {
                  do {
                    puVar95[(long)puVar92] = local_48[(long)puVar92];
                    (puVar95 + 1)[(long)puVar92] = (local_48 + 1)[(long)puVar92];
                    (puVar95 + 2)[(long)puVar92] = (local_48 + 2)[(long)puVar92];
                    (puVar95 + 3)[(long)puVar92] = (local_48 + 3)[(long)puVar92];
                    puVar92 = puVar92 + 4;
                  } while (local_78 != puVar92);
                }
              }
LAB_1000f36f:
              recovered_10008050(local_48);
              puVar92 = local_58;
              puVar82 = local_88;
            }
          }
          (puVar95 + 1)[(long)local_38] = (uchar)local_70;
          if (local_38 + 2 == puVar92) {
            puVar103 = (uchar *)((long)(uintptr_t)puVar92 * 2);
            if (puVar92 == (uchar *)0x0) {
              puVar103 = (uchar *)0x4;
            }
            if (puVar92 < puVar103) {
              local_118 = 6;
              local_90 = puVar95;
              local_58 = puVar92;
              local_50 = puVar95;
              local_48 = puVar103;
              puVar95 = (uchar *)recovered_10007ff0((long)puVar103);
              puVar75 = local_68;
              if (local_58 != (uchar *)0x0) {
                if (local_58 < (uchar *)0x4) {
                  puVar103 = (uchar *)0x0;
                }
                else {
                  puVar103 = (uchar *)0x0;
                  if (0x1f < (ulong)((long)puVar95 - (long)local_50)) {
                    if (local_58 < (uchar *)0x20) {
                      puVar92 = (uchar *)0x0;
                    }
                    else {
                      puVar103 = (uchar *)((ulong)local_58 & 0xffffffffffffffe0);
                      puVar92 = (uchar *)0x0;
                      do {
                        uVar77 = *(undefined8 *)(local_50 + (long)puVar92 + 8);
                        uVar68 = *(undefined8 *)(local_50 + 0x10 + (long)puVar92);
                        uVar69 = *(undefined8 *)(local_50 + 0x10 + (long)puVar92 + 8);
                        *(undefined8 *)(puVar95 + (long)puVar92) =
                             *(undefined8 *)(local_50 + (long)puVar92);
                        *(undefined8 *)(puVar95 + (long)puVar92 + 8) = uVar77;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar92) = uVar68;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar92 + 8) = uVar69;
                        puVar92 = puVar92 + 0x20;
                      } while (puVar103 != puVar92);
                      if (local_58 == puVar103) goto LAB_1000f4df;
                      puVar92 = puVar103;
                      if (((ulong)local_58 & 0x1c) == 0) goto LAB_1000f475;
                    }
                    puVar103 = (uchar *)((ulong)local_58 & 0xfffffffffffffffc);
                    do {
                      *(undefined4 *)(puVar95 + (long)puVar92) =
                           *(undefined4 *)(local_50 + (long)puVar92);
                      puVar92 = puVar92 + 4;
                    } while (puVar103 != puVar92);
                    if (local_58 == puVar103) goto LAB_1000f4df;
                  }
                }
LAB_1000f475:
                uVar84 = (ulong)local_58 & 3;
                puVar92 = puVar103;
                if (uVar84 != 0) {
                  do {
                    puVar95[(long)puVar92] = local_50[(long)puVar92];
                    puVar92 = puVar92 + 1;
                    uVar84 = uVar84 - 1;
                  } while (uVar84 != 0);
                }
                if ((ulong)((long)puVar103 - (long)local_58) < 0xfffffffffffffffd) {
                  do {
                    puVar95[(long)puVar92] = local_50[(long)puVar92];
                    (puVar95 + 1)[(long)puVar92] = (local_50 + 1)[(long)puVar92];
                    (puVar95 + 2)[(long)puVar92] = (local_50 + 2)[(long)puVar92];
                    (puVar95 + 3)[(long)puVar92] = (local_50 + 3)[(long)puVar92];
                    puVar92 = puVar92 + 4;
                  } while (local_58 != puVar92);
                }
              }
LAB_1000f4df:
              recovered_10008050(local_50);
              puVar92 = local_48;
              puVar82 = local_88;
            }
          }
          (puVar95 + 2)[(long)local_38] = (uchar)((ulong)local_70 >> 8);
          if (local_38 + 3 == puVar92) {
            puVar103 = (uchar *)((long)(uintptr_t)puVar92 * 2);
            if (puVar92 == (uchar *)0x0) {
              puVar103 = (uchar *)0x4;
            }
            if (puVar92 < puVar103) {
              local_118 = 7;
              local_90 = puVar95;
              local_58 = puVar95;
              local_50 = puVar103;
              local_48 = puVar92;
              puVar95 = (uchar *)recovered_10007ff0((long)puVar103);
              puVar75 = local_68;
              if (local_48 != (uchar *)0x0) {
                if (local_48 < (uchar *)0x4) {
                  puVar103 = (uchar *)0x0;
                }
                else {
                  puVar103 = (uchar *)0x0;
                  if (0x1f < (ulong)((long)puVar95 - (long)local_58)) {
                    if (local_48 < (uchar *)0x20) {
                      puVar92 = (uchar *)0x0;
                    }
                    else {
                      puVar103 = (uchar *)((ulong)local_48 & 0xffffffffffffffe0);
                      puVar92 = (uchar *)0x0;
                      do {
                        uVar77 = *(undefined8 *)(local_58 + (long)puVar92 + 8);
                        uVar68 = *(undefined8 *)(local_58 + 0x10 + (long)puVar92);
                        uVar69 = *(undefined8 *)(local_58 + 0x10 + (long)puVar92 + 8);
                        *(undefined8 *)(puVar95 + (long)puVar92) =
                             *(undefined8 *)(local_58 + (long)puVar92);
                        *(undefined8 *)(puVar95 + (long)puVar92 + 8) = uVar77;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar92) = uVar68;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar92 + 8) = uVar69;
                        puVar92 = puVar92 + 0x20;
                      } while (puVar103 != puVar92);
                      if (local_48 == puVar103) goto LAB_1000f65f;
                      puVar92 = puVar103;
                      if (((ulong)local_48 & 0x1c) == 0) goto LAB_1000f5f5;
                    }
                    puVar103 = (uchar *)((ulong)local_48 & 0xfffffffffffffffc);
                    do {
                      *(undefined4 *)(puVar95 + (long)puVar92) =
                           *(undefined4 *)(local_58 + (long)puVar92);
                      puVar92 = puVar92 + 4;
                    } while (puVar103 != puVar92);
                    if (local_48 == puVar103) goto LAB_1000f65f;
                  }
                }
LAB_1000f5f5:
                uVar84 = (ulong)local_48 & 3;
                puVar92 = puVar103;
                if (uVar84 != 0) {
                  do {
                    puVar95[(long)puVar92] = local_58[(long)puVar92];
                    puVar92 = puVar92 + 1;
                    uVar84 = uVar84 - 1;
                  } while (uVar84 != 0);
                }
                if ((ulong)((long)puVar103 - (long)local_48) < 0xfffffffffffffffd) {
                  do {
                    puVar95[(long)puVar92] = local_58[(long)puVar92];
                    (puVar95 + 1)[(long)puVar92] = (local_58 + 1)[(long)puVar92];
                    (puVar95 + 2)[(long)puVar92] = (local_58 + 2)[(long)puVar92];
                    (puVar95 + 3)[(long)puVar92] = (local_58 + 3)[(long)puVar92];
                    puVar92 = puVar92 + 4;
                  } while (local_48 != puVar92);
                }
              }
LAB_1000f65f:
              recovered_10008050(local_58);
              puVar92 = local_50;
              puVar82 = local_88;
            }
          }
          uVar83 = (uint)local_70 ^ 0xffff;
          (puVar95 + 3)[(long)local_38] = (uchar)uVar83;
          if (local_38 + 4 == puVar92) {
            puVar103 = (uchar *)((long)(uintptr_t)puVar92 * 2);
            if (puVar92 == (uchar *)0x0) {
              puVar103 = (uchar *)0x4;
            }
            if (puVar92 < puVar103) {
              local_78 = (uchar *)(CONCAT44(PF_PART4(local_78, 4),(uint)local_70) ^ 0xffff);
              local_118 = 8;
              local_90 = puVar95;
              local_58 = puVar103;
              local_50 = puVar92;
              local_48 = puVar95;
              puVar95 = (uchar *)recovered_10007ff0((long)puVar103);
              puVar92 = local_58;
              puVar75 = local_68;
              if (local_50 != (uchar *)0x0) {
                if (local_50 < (uchar *)0x4) {
                  puVar103 = (uchar *)0x0;
                }
                else {
                  puVar103 = (uchar *)0x0;
                  if (0x1f < (ulong)((long)puVar95 - (long)local_48)) {
                    if (local_50 < (uchar *)0x20) {
                      puVar80 = (uchar *)0x0;
                    }
                    else {
                      puVar103 = (uchar *)((ulong)local_50 & 0xffffffffffffffe0);
                      puVar80 = (uchar *)0x0;
                      do {
                        uVar77 = *(undefined8 *)(local_48 + (long)puVar80 + 8);
                        uVar68 = *(undefined8 *)(local_48 + 0x10 + (long)puVar80);
                        uVar69 = *(undefined8 *)(local_48 + 0x10 + (long)puVar80 + 8);
                        *(undefined8 *)(puVar95 + (long)puVar80) =
                             *(undefined8 *)(local_48 + (long)puVar80);
                        *(undefined8 *)(puVar95 + (long)puVar80 + 8) = uVar77;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar80) = uVar68;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar80 + 8) = uVar69;
                        puVar80 = puVar80 + 0x20;
                      } while (puVar103 != puVar80);
                      if (local_50 == puVar103) goto LAB_1000f7ef;
                      puVar80 = puVar103;
                      if (((ulong)local_50 & 0x1c) == 0) goto LAB_1000f785;
                    }
                    puVar103 = (uchar *)((ulong)local_50 & 0xfffffffffffffffc);
                    do {
                      *(undefined4 *)(puVar95 + (long)puVar80) =
                           *(undefined4 *)(local_48 + (long)puVar80);
                      puVar80 = puVar80 + 4;
                    } while (puVar103 != puVar80);
                    if (local_50 == puVar103) goto LAB_1000f7ef;
                  }
                }
LAB_1000f785:
                uVar84 = (ulong)local_50 & 3;
                puVar80 = puVar103;
                if (uVar84 != 0) {
                  do {
                    puVar95[(long)puVar80] = local_48[(long)puVar80];
                    puVar80 = puVar80 + 1;
                    uVar84 = uVar84 - 1;
                  } while (uVar84 != 0);
                }
                if ((ulong)((long)puVar103 - (long)local_50) < 0xfffffffffffffffd) {
                  do {
                    puVar95[(long)puVar80] = local_48[(long)puVar80];
                    (puVar95 + 1)[(long)puVar80] = (local_48 + 1)[(long)puVar80];
                    (puVar95 + 2)[(long)puVar80] = (local_48 + 2)[(long)puVar80];
                    (puVar95 + 3)[(long)puVar80] = (local_48 + 3)[(long)puVar80];
                    puVar80 = puVar80 + 4;
                  } while (local_50 != puVar80);
                }
              }
LAB_1000f7ef:
              recovered_10008050(local_48);
              puVar82 = local_88;
              uVar83 = (uint)local_78;
            }
          }
          (puVar95 + 4)[(long)local_38] = (uchar)(uVar83 >> 8);
          puVar103 = local_38 + 5;
          if (puVar82 != local_60) {
            puVar80 = puVar103 + (long)local_70;
            puVar88 = (uchar *)((long)local_40 + (long)puVar75);
            puVar100 = (uchar *)((long)local_40 + (long)local_60);
            puVar78 = puVar103;
            if (puVar92 < puVar80) {
              if (puVar92 == (uchar *)0x0) {
                puVar92 = (uchar *)0x4;
              }
              do {
                local_58 = puVar92;
                puVar92 = (uchar *)((long)local_58 * 2);
              } while (local_58 < puVar80);
              local_118 = 9;
              local_c8 = (uchar *)((long)local_40 + (long)local_60);
              local_a8 = (uchar *)((long)local_40 + (long)puVar75);
              local_90 = puVar95;
              local_78 = puVar80;
              local_50 = puVar103;
              local_48 = puVar95;
              puVar95 = (uchar *)recovered_10007ff0((long)local_58);
              puVar78 = local_50;
              puVar92 = local_58;
              puVar75 = local_68;
              if (local_50 != (uchar *)0x0) {
                if (local_50 < (uchar *)0x4) {
                  puVar103 = (uchar *)0x0;
                }
                else {
                  puVar103 = (uchar *)0x0;
                  if (0x1f < (ulong)((long)puVar95 - (long)local_48)) {
                    if (local_50 < (uchar *)0x20) {
                      puVar80 = (uchar *)0x0;
                    }
                    else {
                      puVar103 = (uchar *)((ulong)local_50 & 0xffffffffffffffe0);
                      puVar80 = (uchar *)0x0;
                      do {
                        uVar77 = *(undefined8 *)(local_48 + (long)puVar80 + 8);
                        uVar68 = *(undefined8 *)(local_48 + 0x10 + (long)puVar80);
                        uVar69 = *(undefined8 *)(local_48 + 0x10 + (long)puVar80 + 8);
                        *(undefined8 *)(puVar95 + (long)puVar80) =
                             *(undefined8 *)(local_48 + (long)puVar80);
                        *(undefined8 *)(puVar95 + (long)puVar80 + 8) = uVar77;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar80) = uVar68;
                        *(undefined8 *)(puVar95 + 0x10 + (long)puVar80 + 8) = uVar69;
                        puVar80 = puVar80 + 0x20;
                      } while (puVar103 != puVar80);
                      if (local_50 == puVar103) goto LAB_1000f9af;
                      puVar80 = puVar103;
                      if (((ulong)local_50 & 0x1c) == 0) goto LAB_1000f935;
                    }
                    puVar103 = (uchar *)((ulong)local_50 & 0xfffffffffffffffc);
                    do {
                      *(undefined4 *)(puVar95 + (long)puVar80) =
                           *(undefined4 *)(local_48 + (long)puVar80);
                      puVar80 = puVar80 + 4;
                    } while (puVar103 != puVar80);
                    if (local_50 == puVar103) goto LAB_1000f9af;
                  }
                }
LAB_1000f935:
                uVar83 = (int)local_38 + 1U & 3;
                uVar84 = (ulong)uVar83;
                puVar80 = puVar103;
                if (uVar83 != 0) {
                  do {
                    puVar95[(long)puVar80] = local_48[(long)puVar80];
                    puVar80 = puVar80 + 1;
                    uVar84 = uVar84 - 1;
                  } while (uVar84 != 0);
                }
                if ((uchar *)0x2 < local_38 + (4 - (long)puVar103)) {
                  do {
                    puVar95[(long)puVar80] = local_48[(long)puVar80];
                    (puVar95 + 1)[(long)puVar80] = (local_48 + 1)[(long)puVar80];
                    (puVar95 + 2)[(long)puVar80] = (local_48 + 2)[(long)puVar80];
                    (puVar95 + 3)[(long)puVar80] = (local_48 + 3)[(long)puVar80];
                    puVar80 = puVar80 + 4;
                  } while (local_50 != puVar80);
                }
              }
LAB_1000f9af:
              recovered_10008050(local_48);
              puVar88 = local_a8;
              puVar82 = local_88;
              puVar80 = local_78;
              puVar100 = local_c8;
            }
            puVar103 = puVar80;
            puVar80 = puVar100;
            if ((local_80 < 4) ||
               (local_38 + (long)puVar95 + (5 - ((long)local_40 + (long)local_60)) < (uchar *)0x20))
            {
LAB_1000f9f8:
              puVar78 = puVar78 + (long)puVar95;
              do {
                *puVar78 = *puVar80;
                puVar80 = puVar80 + 1;
                puVar78 = puVar78 + 1;
              } while (puVar80 != puVar88);
            }
            else if (local_80 < 0x20) {
              uVar84 = 0;
LAB_1000fa7f:
              uVar106 = (ulong)((uint)local_70 & 0xfffc);
              puVar80 = puVar100 + uVar106;
              puVar78 = puVar78 + uVar106;
              do {
                *(undefined4 *)(local_38 + (long)puVar95 + uVar84 + 5) =
                     *(undefined4 *)(puVar100 + uVar84);
                uVar84 = uVar84 + 4;
              } while (uVar106 != uVar84);
              if (local_80 != uVar106) goto LAB_1000f9f8;
            }
            else {
              uVar84 = (ulong)((uint)local_70 & 0xffe0);
              puVar80 = puVar95 + (long)local_38;
              uVar106 = 0;
              do {
                puVar3 = (undefined8 *)((long)local_60 + uVar106 + local_c0 + -0x10);
                uVar77 = puVar3[1];
                puVar1 = (undefined8 *)((long)local_60 + uVar106 + local_c0);
                uVar68 = *puVar1;
                uVar69 = puVar1[1];
                *(undefined8 *)(puVar80 + uVar106 + 5) = *puVar3;
                *(undefined8 *)(puVar80 + uVar106 + 5 + 8) = uVar77;
                *(undefined8 *)(puVar80 + uVar106 + 0x15) = uVar68;
                *(undefined8 *)(puVar80 + uVar106 + 0x15 + 8) = uVar69;
                uVar106 = uVar106 + 0x20;
              } while (uVar84 != uVar106);
              if (local_80 != uVar84) {
                if (((ulong)local_70 & 0x1c) == 0) {
                  puVar78 = puVar78 + uVar84;
                  puVar80 = puVar100 + uVar84;
                  goto LAB_1000f9f8;
                }
                goto LAB_1000fa7f;
              }
            }
            if (puVar82 <= puVar75) break;
            goto LAB_1000f05c;
          }
        } while (puVar75 < puVar82);
        puVar81 = (uint *)0x0;
        uVar94 = 1;
        uVar83 = 0;
        do {
          uVar84 = (long)puVar82 - (long)puVar81;
          if (0x15af < uVar84) {
            uVar84 = 0x15b0;
          }
          if (puVar82 != puVar81) {
            uVar106 = uVar84 + (uVar84 == 0);
            uVar91 = (uint)uVar106;
            if ((ulong)((long)puVar82 - (long)puVar81) < 4) {
              uVar79 = 0;
            }
            else {
              uVar79 = 0;
              do {
                iVar102 = *(byte *)((long)puVar81 + (long)local_40 + uVar79) + uVar94;
                iVar104 = (uint)*(byte *)((long)puVar81 + (long)local_40 + uVar79 + 1) + iVar102;
                iVar85 = (uint)*(byte *)((long)puVar81 + (long)local_40 + uVar79 + 2) + iVar104;
                uVar94 = (uint)*(byte *)((long)puVar81 + (long)local_40 + uVar79 + 3) + iVar85;
                puVar75 = (uint *)(ulong)uVar94;
                uVar83 = uVar83 + iVar102 + iVar104 + iVar85 + uVar94;
                uVar79 = uVar79 + 4;
              } while ((uVar91 & 0x1ffc) != uVar79);
            }
            if ((uVar106 & 3) != 0) {
              uVar106 = 0;
              do {
                uVar94 = uVar94 + *(byte *)((long)local_40 + (long)puVar81 + uVar106 + uVar79);
                uVar83 = uVar83 + uVar94;
                uVar106 = uVar106 + 1;
              } while ((uVar91 & 3) != uVar106);
            }
            uVar94 = uVar94 % 0xfff1;
            uVar83 = uVar83 % 0xfff1;
            puVar82 = local_88;
          }
          puVar81 = (uint *)((long)puVar81 + uVar84);
        } while (puVar81 < puVar82);
        local_70 = puVar103 + 4;
        local_38 = puVar103;
        if (puVar103 < (uchar *)0xfffffffffffffffc) {
          local_68 = (uint *)CONCAT44(PF_PART4(local_68, 4),uVar94);
          if (puVar92 < local_70) {
            local_60 = (uint *)CONCAT44(PF_PART4(local_60, 4),uVar83);
            local_118 = 10;
            local_140 = puVar95;
            local_48 = puVar95;
            puVar95 = (uchar *)recovered_10007ff0((long)local_70);
            uVar83 = (uint)local_60;
            if (local_38 != (uchar *)0x0) {
              puVar103 = (uchar *)0x0;
              if (((uchar *)0x3 < local_38) && (0x1f < (ulong)((long)puVar95 - (long)local_48))) {
                if (local_38 < (uchar *)0x20) {
                  puVar92 = (uchar *)0x0;
                }
                else {
                  puVar103 = (uchar *)((ulong)local_38 & 0xffffffffffffffe0);
                  puVar92 = (uchar *)0x0;
                  do {
                    uVar77 = *(undefined8 *)(local_48 + (long)puVar92 + 8);
                    uVar68 = *(undefined8 *)(local_48 + 0x10 + (long)puVar92);
                    uVar69 = *(undefined8 *)(local_48 + 0x10 + (long)puVar92 + 8);
                    *(undefined8 *)(puVar95 + (long)puVar92) =
                         *(undefined8 *)(local_48 + (long)puVar92);
                    *(undefined8 *)(puVar95 + (long)puVar92 + 8) = uVar77;
                    *(undefined8 *)(puVar95 + 0x10 + (long)puVar92) = uVar68;
                    *(undefined8 *)(puVar95 + 0x10 + (long)puVar92 + 8) = uVar69;
                    puVar92 = puVar92 + 0x20;
                  } while (puVar103 != puVar92);
                  if (local_38 == puVar103) goto LAB_1000fd1a;
                  puVar92 = puVar103;
                  if (((ulong)local_38 & 0x1c) == 0) goto LAB_1000fcc6;
                }
                puVar103 = (uchar *)((ulong)local_38 & 0xfffffffffffffffc);
                do {
                  *(undefined4 *)(puVar95 + (long)puVar92) =
                       *(undefined4 *)(local_48 + (long)puVar92);
                  puVar92 = puVar92 + 4;
                } while (puVar103 != puVar92);
                if (local_38 == puVar103) goto LAB_1000fd1a;
              }
LAB_1000fcc6:
              uVar84 = (ulong)local_38 & 3;
              puVar92 = puVar103;
              if (uVar84 != 0) {
                do {
                  puVar95[(long)puVar92] = local_48[(long)puVar92];
                  puVar92 = puVar92 + 1;
                  uVar84 = uVar84 - 1;
                } while (uVar84 != 0);
              }
              if ((ulong)((long)puVar103 - (long)local_38) < 0xfffffffffffffffd) {
                do {
                  puVar95[(long)puVar92] = local_48[(long)puVar92];
                  (puVar95 + 1)[(long)puVar92] = (local_48 + 1)[(long)puVar92];
                  (puVar95 + 2)[(long)puVar92] = (local_48 + 2)[(long)puVar92];
                  (puVar95 + 3)[(long)puVar92] = (local_48 + 3)[(long)puVar92];
                  puVar92 = puVar92 + 4;
                } while (local_38 != puVar92);
              }
            }
LAB_1000fd1a:
            recovered_10008050(local_48);
          }
          puVar103 = puVar95 + (long)local_38;
          puVar103[0] = '\0';
          puVar103[1] = '\0';
          puVar103[2] = '\0';
          puVar103[3] = '\0';
          uVar94 = (uint)local_68;
        }
        iVar102 = uVar83 * 0x10000 + uVar94;
        puVar95[(long)local_38] = (uchar)((uint)iVar102 >> 0x18);
        (puVar95 + 1)[(long)local_38] = (uchar)((uint)iVar102 >> 0x10);
        (puVar95 + 2)[(long)local_38] = (uchar)(uVar94 >> 8);
        (puVar95 + 3)[(long)local_38] = (uchar)uVar94;
        puVar103 = (uchar *)0x0;
        local_b0 = puVar95;
        do {
          puVar82 = (uint *)(local_70 + -(long)puVar103);
          if (local_70 < puVar103 || puVar82 == (uint *)0x0) {
            recovered_10008050(local_b0);
            recovered_10008050(local_40);
            local_118 = 0xffffffff;
            bVar74 = recovered_1000fef0(local_b8,((uintptr_t)pf_module_state+0x67fU),0,0);
            goto LAB_1000ea1d;
          }
          if ((uint *)0x3ffff < puVar82) {
            puVar82 = (uint *)0x40000;
          }
          local_118 = 0xb;
          local_68 = puVar82;
          local_38 = puVar103;
          uVar73 = recovered_1000fef0(local_b8,((uintptr_t)pf_module_state+0x6afU),(long)(local_b0 + (long)puVar103),
                                      (ulong)puVar82);
          puVar103 = local_38 + (long)local_68;
        } while (uVar73 != '\0');
        recovered_10008050(local_b0);
        recovered_10008050(local_40);
        bVar74 = 0;
      }
      else {
LAB_1000ea1b:
        bVar74 = 0;
      }
LAB_1000ea1d:
      local_118 = 0xffffffff;
      uVar77 = recovered_10007100((int *)local_b8);
      iVar102 = (int)CONCAT71((int7)((ulong)puVar75 >> 8),(int)uVar77 == 0 & bVar74);
      goto LAB_1000ea3c;
    }
  }
  iVar102 = 0;
LAB_1000ea3c:
  recovered_10008660(&local_120);
  return iVar102;
}

#undef DAT_1001acf0
#undef DAT_1001ad00
#undef DAT_1001b2d8
#undef LAB_1000fe20
#undef UNK_1001acf1
#undef UNK_1001acf2
#undef UNK_1001acf3
#undef UNK_1001acf4
#undef UNK_1001acf5
#undef UNK_1001acf6
#undef UNK_1001acf7
#undef UNK_1001ad02
#undef UNK_1001ad04
#undef UNK_1001ad06
#undef UNK_1001ad08
#undef UNK_1001ad0a
#undef UNK_1001ad0c
#undef UNK_1001ad0e
#undef _DAT_1001ad00
#undef sRam000000001001ad02
#undef sRam000000001001ad04
#undef sRam000000001001ad06
#undef sRam000000001001ad08
#undef sRam000000001001ad0a
#undef sRam000000001001ad0c
#undef sRam000000001001ad0e
#undef uRam000000001001acf1
#undef uRam000000001001acf2
#undef uRam000000001001acf3
#undef uRam000000001001acf4
#undef uRam000000001001acf5
#undef uRam000000001001acf6
#undef uRam000000001001acf7
#undef auStack_158
#undef local_150
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_9d
#undef local_9c
#undef local_9b
#undef local_9a
#undef local_99
#undef local_98
#undef local_97
#undef local_96
#undef local_95
#undef local_91
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
#undef local_40
#undef local_38

#define local_2c (*(uint *)(pf_stack_frame + 20))
#define local_30 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fef0
 */

uchar recovered_1000fef0(uint *param_1,long param_2,long param_3,ulong param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;

  if (param_4 >> 0x20 != 0) {
    return '\0';
  }
  if (param_3 == 0 && param_4 != 0) {
    return '\0';
  }
  uVar1 = (uint)param_4;
  local_30 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = recovered_100196f0(0,param_2,4);
  if (param_4 != 0) {
    uVar1 = recovered_100196f0(uVar1,param_3,param_4);
  }
  local_2c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  lVar2 = recovered_10007500((long)&local_30,1,4,param_1);
  if (((lVar2 == 4) && (lVar2 = recovered_10007500(param_2,1,4,param_1), lVar2 == 4)) &&
     ((param_4 == 0 || (uVar3 = recovered_10007500(param_3,1,param_4,param_1), uVar3 == param_4))))
  {
    lVar2 = recovered_10007500((long)&local_2c,1,4,param_1);
    return lVar2 == 4;
  }
  return '\0';
}

#undef local_2c
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ffe0
 */

uchar recovered_1000ffe0(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_1000e840(param_1,param_2,param_3,param_4);
  return (uchar)iVar1;
}


#undef DAT_1001b2f4
#define DAT_1001b2f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c8U)))
#undef LAB_1001048c
#define LAB_1001048c (*(uint8_t *)(0x1001048cU))
#define uStack_ac (*(undefined4 *)(pf_stack_frame + 212))
#define local_160 (*(undefined8 *)(pf_stack_frame + 32))
#define local_158 (*(undefined4 *)(pf_stack_frame + 40))
#define local_140 (*(code * *)(pf_stack_frame + 64))
#define local_138 (*(undefined * *)(pf_stack_frame + 72))
#define local_130 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_128 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_120 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_108 (*(ulong *)(pf_stack_frame + 120))
#define local_100 (*(ulong *)(pf_stack_frame + 128))
#define local_f8 (*(long *)(pf_stack_frame + 136))
#define local_f0 (*(ulong *)(pf_stack_frame + 144))
#define local_e8 (*(undefined4 *)(pf_stack_frame + 152))
#define local_e4 (*(undefined1 *)(pf_stack_frame + 156))
#define local_e3 (*(undefined1 *)(pf_stack_frame + 157))
#define local_e2 (*(undefined1 *)(pf_stack_frame + 158))
#define local_e1 (*(undefined1 *)(pf_stack_frame + 159))
#define local_e0 (*(undefined1 *)(pf_stack_frame + 160))
#define local_df (*(undefined1 *)(pf_stack_frame + 161))
#define local_de (*(undefined1 *)(pf_stack_frame + 162))
#define local_dd (*(undefined1 *)(pf_stack_frame + 163))
#define local_dc (*(undefined8 *)(pf_stack_frame + 164))
#define local_d4 (*(undefined1 *)(pf_stack_frame + 172))
#define local_d3 (*(undefined1 *)(pf_stack_frame + 173))
#define local_d2 (*(undefined1 *)(pf_stack_frame + 174))
#define local_d1 (*(undefined1 *)(pf_stack_frame + 175))
#define local_d0 (*(undefined8 *)(pf_stack_frame + 176))
#define local_c8 (*(undefined1 (*)[16])(pf_stack_frame + 184))
#define local_b8 (*(undefined1 (*)[7])(pf_stack_frame + 200))
#define local_a8 (*(undefined1 (*)[16])(pf_stack_frame + 216))
#define local_8c (*(undefined4 *)(pf_stack_frame + 244))
#define local_70 (*(uint * *)(pf_stack_frame + 272))
#define local_68 (*(void * *)(pf_stack_frame + 280))
#define local_5e (*(undefined2 *)(pf_stack_frame + 290))
#define local_5c (*(undefined1 *)(pf_stack_frame + 292))
#define local_5b (*(undefined1 *)(pf_stack_frame + 293))
#define local_5a (*(undefined1 *)(pf_stack_frame + 294))
#define local_59 (*(undefined1 *)(pf_stack_frame + 295))
#define local_58 (*(undefined8 *)(pf_stack_frame + 296))
#define local_50 (*(long *)(pf_stack_frame + 304))
#define local_48 (*(ulong *)(pf_stack_frame + 312))
#define local_3c (*(uint *)(pf_stack_frame + 324))
#define local_38 (*(undefined8 *)(pf_stack_frame + 328))
#define auStack_168 (*(undefined1 (*)[8])(pf_stack_frame + 24))
#define uStack_b1 (*(undefined4 *)(pf_stack_frame + 207))
#define uStack_ad (*(undefined1 *)(pf_stack_frame + 211))
#define auStack_98 (*(undefined1 (*)[12])(pf_stack_frame + 232))
#define auStack_88 (*(undefined1 (*)[12])(pf_stack_frame + 248))
#define stack0xffffffffffffff49 (*(uint64_t *)(pf_stack_frame + 201))
#define stack0xffffffffffffff4d (*(uint64_t *)(pf_stack_frame + 205))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fff0
 */

uchar recovered_1000fff0(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[416] __attribute__((aligned(16))) = {0};

  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  bool bVar15;
  uint128 auVar16;
  uint128 auVar17;
  uint128 auVar18;

  local_130 = auStack_88 + 0x80;
  local_120 = auStack_168;
  local_140 = recovered_10007fa0;
  local_138 = &DAT_1001b2f4;
  local_128 = &LAB_1001048c;
  local_68 = param_2;
  recovered_10008640(&local_160);
  if ((0 < param_4 && 0 < param_3) && (param_2 != (void *)0x0 && param_1 != (char *)0x0)) {
    local_48 = (ulong)(uint)param_3;
    uVar10 = local_48 * 4;
    local_100 = (ulong)(uint)param_4;
    uVar14 = uVar10 * local_100;
    if (uVar14 >> 1 < 0x7fffffc3) {
      local_158 = 0xffffffff;
      local_3c = param_3;
      puVar7 = recovered_10006c80((long)param_1,((uintptr_t)pf_module_state+0x677U));
      if (puVar7 != (uint *)0x0) {
        local_58 = 0x7a00000000;
        local_5e = 0x4d42;
        iVar5 = (int)uVar14 + 0x7a;
        local_5c = (undefined1)iVar5;
        local_5b = (undefined1)((uint)iVar5 >> 8);
        local_5a = (undefined1)((uint)iVar5 >> 0x10);
        local_59 = (undefined1)((uint)iVar5 >> 0x18);
        PF_PART12(auStack_88,0) = SUB1612((uint128)0x0,4);
        PF_PART12(auStack_98,0) = SUB1612((uint128)0x0,0);
        local_8c = 0;
        PF_PART16(local_a8,0) = (uint128)0x0;
        local_e8 = 0x6c;
        local_e4 = (undefined1)local_3c;
        local_e3 = (undefined1)(local_3c >> 8);
        local_e2 = (undefined1)(local_3c >> 0x10);
        local_e1 = (undefined1)(local_3c >> 0x18);
        iVar5 = -param_4;
        local_e0 = (undefined1)iVar5;
        local_df = (undefined1)((uint)iVar5 >> 8);
        local_de = (undefined1)((uint)iVar5 >> 0x10);
        local_dd = (undefined1)((uint)iVar5 >> 0x18);
        local_dc = 0x300200001;
        local_d4 = (undefined1)uVar14;
        local_d3 = (undefined1)(uVar14 >> 8);
        local_d2 = (undefined1)(uVar14 >> 0x10);
        local_d1 = (undefined1)(uVar14 >> 0x18);
        local_d0 = 0xb1300000b13;
        PF_PART10(local_c8, 0) = SUB1610((uint128)0x0,0);
        local_c8[10] = 0xff;
        PF_PART2(local_c8, 11) = 0;
        local_c8[0xd] = 0xff;
        PF_PART2(local_c8, 14) = 0;
        stack0xffffffffffffff49 = SUB1615((uint128)0x0,1);
        local_b8[0] = 0xff;
        auVar16 = PF_PART16(local_b8,0);
        stack0xffffffffffffff4d = SUB1611((uint128)0x0,5);
        PF_PART4(local_b8, 0) = PF_PART4(auVar16, 0);
        local_b8[4] = 0;
        uStack_b1 = 0x524742ff;
        uStack_ac = SUB164((uint128)0x0,0xc);
        uStack_ad = 0x73;
        local_158 = 0xffffffff;
        lVar8 = recovered_10007500((long)&local_5e,1,0xe,puVar7);
        if (lVar8 == 0xe) {
          local_158 = 0xffffffff;
          lVar8 = recovered_10007500((long)&local_e8,1,0x6c,puVar7);
          bVar15 = lVar8 == 0x6c;
        }
        else {
          bVar15 = false;
        }
        local_158 = 0xffffffff;
        local_38 = (void *)recovered_10007ff0(uVar10);
        uVar14 = 0;
        recovered_10008050((void *)0x0);
        if (local_3c < 2) goto LAB_10010317;
        if (local_3c < 8) {
          uVar12 = 0;
LAB_100102ea:
          uVar14 = uVar10 & 0x1fffffff8;
          do {
            *(undefined8 *)((long)local_38 + uVar12) = 0;
            uVar12 = uVar12 + 8;
          } while (uVar14 != uVar12);
          for (; uVar10 != uVar14; uVar14 = uVar14 + 1) {
LAB_10010317:
            *(undefined1 *)((long)local_38 + uVar14) = 0;
          }
        }
        else {
          uVar14 = uVar10 & 0x1ffffffe0;
          uVar12 = 0;
          do {
            *(uint128 *)((long)local_38 + uVar12) = (uint128)0x0;
            *(uint128 *)((long)local_38 + uVar12 + 0x10) = (uint128)0x0;
            uVar12 = uVar12 + 0x20;
          } while (uVar14 != uVar12);
          if (uVar10 != uVar14) {
            uVar12 = uVar14;
            if ((local_48 & 6) == 0) goto LAB_10010317;
            goto LAB_100102ea;
          }
        }
        if (bVar15) {
          lVar8 = (long)local_68 + 4;
          local_f8 = (ulong)((uint)(local_48 >> 1) & 0x3fffffff) << 3;
          uVar14 = 0;
          local_f0 = uVar10;
          local_70 = puVar7;
          do {
            lVar9 = 0;
            if (local_3c != 1) {
              do {
                uVar6 = *(undefined4 *)(lVar8 + -4 + lVar9);
                PF_PART8(auVar16, 8) = 0;
                PF_PART8(auVar16, 0) =
                     (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)
                                                  (byte)((uint)uVar6 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >>
                                                  0x20),uVar6) >> 0x18),
                                                  CONCAT12((char)((uint)uVar6 >> 8),(short)uVar6))
                                           >> 0x10),(short)uVar6) & 0xffffffff00ff00ff;
                auVar16 = pshuflw(auVar16,auVar16,0xc6);
                sVar1 = PF_PART2(auVar16, 0);
                sVar2 = PF_PART2(auVar16, 2);
                sVar3 = PF_PART2(auVar16, 4);
                sVar4 = PF_PART2(auVar16, 6);
                *(uint *)((long)local_38 + lVar9) =
                     CONCAT13((0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar16)[6] - (0xff < sVar4),
                              CONCAT12((0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar16)[4] - (0xff < sVar3),
                                       CONCAT11((0 < sVar2) * (sVar2 < 0x100) * ((uint8_t *)(void *)&auVar16)[2] -
                                                (0xff < sVar2),
                                                (0 < sVar1) * (sVar1 < 0x100) * ((uint8_t *)(void *)&auVar16)[0] -
                                                (0xff < sVar1))));
                uVar6 = *(undefined4 *)(lVar8 + lVar9);
                PF_PART8(auVar17, 8) = 0;
                PF_PART8(auVar17, 0) =
                     (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)
                                                  (byte)((uint)uVar6 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >>
                                                  0x20),uVar6) >> 0x18),
                                                  CONCAT12((char)((uint)uVar6 >> 8),(short)uVar6))
                                           >> 0x10),(short)uVar6) & 0xffffffff00ff00ff;
                auVar16 = pshuflw(auVar17,auVar17,0xc6);
                sVar1 = PF_PART2(auVar16, 0);
                sVar2 = PF_PART2(auVar16, 2);
                sVar3 = PF_PART2(auVar16, 4);
                sVar4 = PF_PART2(auVar16, 6);
                *(uint *)((long)local_38 + lVar9 + 4) =
                     CONCAT13((0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar16)[6] - (0xff < sVar4),
                              CONCAT12((0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar16)[4] - (0xff < sVar3),
                                       CONCAT11((0 < sVar2) * (sVar2 < 0x100) * ((uint8_t *)(void *)&auVar16)[2] -
                                                (0xff < sVar2),
                                                (0 < sVar1) * (sVar1 < 0x100) * ((uint8_t *)(void *)&auVar16)[0] -
                                                (0xff < sVar1))));
                lVar9 = lVar9 + 8;
              } while (local_f8 != lVar9);
            }
            if ((local_48 & 1) != 0) {
              uVar6 = *(undefined4 *)((long)local_68 + lVar9 + uVar14 * local_f0);
              PF_PART8(auVar18, 8) = 0;
              PF_PART8(auVar18, 0) =
                   (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar6 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >>
                                                  0x20),uVar6) >> 0x18),
                                                  CONCAT12((char)((uint)uVar6 >> 8),(short)uVar6))
                                         >> 0x10),(short)uVar6) & 0xffffffff00ff00ff;
              auVar16 = pshuflw(auVar18,auVar18,0xc6);
              sVar1 = PF_PART2(auVar16, 0);
              sVar2 = PF_PART2(auVar16, 2);
              sVar3 = PF_PART2(auVar16, 4);
              sVar4 = PF_PART2(auVar16, 6);
              *(uint *)((long)local_38 + lVar9) =
                   CONCAT13((0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar16)[6] - (0xff < sVar4),
                            CONCAT12((0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar16)[4] - (0xff < sVar3),
                                     CONCAT11((0 < sVar2) * (sVar2 < 0x100) * ((uint8_t *)(void *)&auVar16)[2] -
                                              (0xff < sVar2),
                                              (0 < sVar1) * (sVar1 < 0x100) * ((uint8_t *)(void *)&auVar16)[0] -
                                              (0xff < sVar1))));
            }
            local_158 = 2;
            local_108 = uVar14;
            local_50 = lVar8;
            uVar10 = recovered_10007500((long)local_38,1,local_f0,local_70);
            uVar6 = (undefined4)CONCAT71((int7)(uVar10 >> 8),uVar10 == local_f0);
            puVar7 = local_70;
            if (uVar10 != local_f0) break;
            uVar14 = local_108 + 1;
            lVar8 = local_50 + local_f0;
          } while (uVar14 < local_100);
        }
        else {
          uVar6 = 0;
        }
        local_50 = CONCAT44(PF_PART4(local_50, 4),uVar6);
        local_158 = 1;
        uVar11 = recovered_10007100((int *)puVar7);
        bVar13 = (byte)local_50 & (int)uVar11 == 0;
        recovered_10008050(local_38);
        goto LAB_10010243;
      }
    }
  }
  bVar13 = 0;
LAB_10010243:
  recovered_10008660(&local_160);
  return bVar13;
}

#undef DAT_1001b2f4
#undef LAB_1001048c
#undef uStack_ac
#undef local_160
#undef local_158
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e4
#undef local_e3
#undef local_e2
#undef local_e1
#undef local_e0
#undef local_df
#undef local_de
#undef local_dd
#undef local_dc
#undef local_d4
#undef local_d3
#undef local_d2
#undef local_d1
#undef local_d0
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_8c
#undef local_70
#undef local_68
#undef local_5e
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef auStack_168
#undef uStack_b1
#undef uStack_ad
#undef auStack_98
#undef auStack_88
#undef stack0xffffffffffffff49
#undef stack0xffffffffffffff4d

#undef DAT_1001b2fc
#define DAT_1001b2fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d0U)))
#undef LAB_1001085d
#define LAB_1001085d (*(uint8_t *)(0x1001085dU))
#define local_f0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_e8 (*(undefined4 *)(pf_stack_frame + 40))
#define local_d0 (*(code * *)(pf_stack_frame + 64))
#define local_c8 (*(undefined * *)(pf_stack_frame + 72))
#define local_c0 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_b8 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_b0 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_98 (*(ulong *)(pf_stack_frame + 120))
#define local_90 (*(long *)(pf_stack_frame + 128))
#define local_88 (*(ulong *)(pf_stack_frame + 136))
#define local_80 (*(ulong *)(pf_stack_frame + 144))
#define local_78 (*(uint * *)(pf_stack_frame + 152))
#define local_70 (*(void * *)(pf_stack_frame + 160))
#define local_68 (*(undefined3 *)(pf_stack_frame + 168))
#define local_58 (*(undefined2 *)(pf_stack_frame + 184))
#define local_50 (*(ulong *)(pf_stack_frame + 192))
#define local_44 (*(uint *)(pf_stack_frame + 204))
#define local_40 (*(ulong *)(pf_stack_frame + 208))
#define local_38 (*(undefined8 *)(pf_stack_frame + 216))
#define auStack_f8 (*(undefined1 (*)[8])(pf_stack_frame + 24))
#define auStack_65 (*(undefined1 (*)[13])(pf_stack_frame + 171))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100104e0
 */

uchar recovered_100104e0(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  uint128 auVar14;
  uint128 auVar15;
  uint128 auVar16;

  local_c0 = auStack_65 + 0x5d;
  local_b0 = auStack_f8;
  local_d0 = recovered_10007fa0;
  local_c8 = &DAT_1001b2fc;
  local_b8 = &LAB_1001085d;
  local_70 = param_2;
  local_44 = param_3;
  recovered_10008640(&local_f0);
  if ((0 < param_4 && 0 < param_3) && (param_2 != (void *)0x0 && param_1 != (char *)0x0)) {
    local_e8 = 0xffffffff;
    puVar7 = recovered_10006c80((long)param_1,((uintptr_t)pf_module_state+0x677U));
    uVar6 = local_44;
    if (puVar7 != (uint *)0x0) {
      PF_PART13(auStack_65,0) = SUB1613((uint128)0x0,3);
      local_68 = 0x20000;
      auStack_65[9] = (char)local_44;
      auStack_65[10] = (char)(local_44 >> 8);
      auStack_65[0xb] = (char)param_4;
      local_40 = CONCAT44(PF_PART4(local_40, 4),param_4);
      auStack_65[0xc] = (char)((uint)param_4 >> 8);
      local_58 = 0x2820;
      local_e8 = 0xffffffff;
      lVar8 = recovered_10007500((long)&local_68,1,0x12,puVar7);
      local_50 = (ulong)uVar6;
      uVar9 = local_50 * 4;
      local_e8 = 0xffffffff;
      local_38 = (void *)recovered_10007ff0(uVar9);
      uVar13 = 0;
      recovered_10008050((void *)0x0);
      if (uVar6 < 2) goto LAB_10010697;
      if (local_44 < 8) {
        uVar11 = 0;
LAB_10010667:
        uVar13 = uVar9 & 0x1fffffff8;
        do {
          *(undefined8 *)((long)local_38 + uVar11) = 0;
          uVar11 = uVar11 + 8;
        } while (uVar13 != uVar11);
        for (; uVar9 != uVar13; uVar13 = uVar13 + 1) {
LAB_10010697:
          *(undefined1 *)((long)local_38 + uVar13) = 0;
        }
      }
      else {
        uVar13 = uVar9 & 0x1ffffffe0;
        uVar11 = 0;
        do {
          *(uint128 *)((long)local_38 + uVar11) = (uint128)0x0;
          *(uint128 *)((long)local_38 + uVar11 + 0x10) = (uint128)0x0;
          uVar11 = uVar11 + 0x20;
        } while (uVar13 != uVar11);
        if (uVar9 != uVar13) {
          uVar11 = uVar13;
          if ((local_50 & 6) == 0) goto LAB_10010697;
          goto LAB_10010667;
        }
      }
      if (lVar8 == 0x12) {
        local_80 = local_40 & 0xffffffff;
        uVar13 = (long)local_70 + 4;
        local_90 = (ulong)((uint)(local_50 >> 1) & 0x3fffffff) << 3;
        uVar11 = 0;
        local_88 = uVar9;
        local_78 = puVar7;
        do {
          if (local_44 == 1) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            do {
              uVar1 = *(undefined4 *)((uVar13 - 4) + lVar8);
              PF_PART8(auVar16, 8) = 0;
              PF_PART8(auVar16, 0) =
                   (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                                  CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1))
                                         >> 0x10),(short)uVar1) & 0xffffffff00ff00ff;
              auVar16 = pshuflw(auVar16,auVar16,0xc6);
              sVar2 = PF_PART2(auVar16, 0);
              sVar3 = PF_PART2(auVar16, 2);
              sVar4 = PF_PART2(auVar16, 4);
              sVar5 = PF_PART2(auVar16, 6);
              *(uint *)((long)local_38 + lVar8) =
                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar16)[6] - (0xff < sVar5),
                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar16)[4] - (0xff < sVar4),
                                     CONCAT11((0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar16)[2] -
                                              (0xff < sVar3),
                                              (0 < sVar2) * (sVar2 < 0x100) * ((uint8_t *)(void *)&auVar16)[0] -
                                              (0xff < sVar2))));
              uVar1 = *(undefined4 *)(uVar13 + lVar8);
              PF_PART8(auVar14, 8) = 0;
              PF_PART8(auVar14, 0) =
                   (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                                  CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1))
                                         >> 0x10),(short)uVar1) & 0xffffffff00ff00ff;
              auVar16 = pshuflw(auVar14,auVar14,0xc6);
              sVar2 = PF_PART2(auVar16, 0);
              sVar3 = PF_PART2(auVar16, 2);
              sVar4 = PF_PART2(auVar16, 4);
              sVar5 = PF_PART2(auVar16, 6);
              *(uint *)((long)local_38 + lVar8 + 4) =
                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar16)[6] - (0xff < sVar5),
                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar16)[4] - (0xff < sVar4),
                                     CONCAT11((0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar16)[2] -
                                              (0xff < sVar3),
                                              (0 < sVar2) * (sVar2 < 0x100) * ((uint8_t *)(void *)&auVar16)[0] -
                                              (0xff < sVar2))));
              lVar8 = lVar8 + 8;
            } while (local_90 != lVar8);
          }
          if ((local_50 & 1) != 0) {
            uVar1 = *(undefined4 *)((long)local_70 + lVar8 + uVar11 * local_88);
            PF_PART8(auVar15, 8) = 0;
            PF_PART8(auVar15, 0) =
                 (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                                 CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >>
                                       0x10),(short)uVar1) & 0xffffffff00ff00ff;
            auVar16 = pshuflw(auVar15,auVar15,0xc6);
            sVar2 = PF_PART2(auVar16, 0);
            sVar3 = PF_PART2(auVar16, 2);
            sVar4 = PF_PART2(auVar16, 4);
            sVar5 = PF_PART2(auVar16, 6);
            *(uint *)((long)local_38 + lVar8) =
                 CONCAT13((0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar16)[6] - (0xff < sVar5),
                          CONCAT12((0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar16)[4] - (0xff < sVar4),
                                   CONCAT11((0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar16)[2] -
                                            (0xff < sVar3),
                                            (0 < sVar2) * (sVar2 < 0x100) * ((uint8_t *)(void *)&auVar16)[0] -
                                            (0xff < sVar2))));
          }
          local_e8 = 1;
          local_98 = uVar11;
          local_40 = uVar13;
          uVar9 = recovered_10007500((long)local_38,1,local_88,local_78);
          if (uVar9 != local_88) break;
          uVar11 = local_98 + 1;
          uVar13 = local_40 + local_88;
        } while (uVar11 < local_80);
        puVar7 = local_78;
        if (uVar9 != local_88) goto LAB_10010811;
        local_e8 = 2;
        lVar8 = recovered_10007500(((uintptr_t)pf_module_state+0x524U),1,0x1a,local_78);
        local_40 = CONCAT44(PF_PART4(local_40, 4),(int)CONCAT71((int7)((ulong)lVar8 >> 8),lVar8 == 0x1a));
        puVar7 = local_78;
      }
      else {
LAB_10010811:
        local_40 = local_40 & 0xffffffff00000000;
      }
      local_e8 = 3;
      uVar10 = recovered_10007100((int *)puVar7);
      bVar12 = (byte)local_40 & (int)uVar10 == 0;
      recovered_10008050(local_38);
      goto LAB_1001083d;
    }
  }
  bVar12 = 0;
LAB_1001083d:
  recovered_10008660(&local_f0);
  return bVar12;
}

#undef DAT_1001b2fc
#undef LAB_1001085d
#undef local_f0
#undef local_e8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_38
#undef auStack_f8
#undef auStack_65

#undef DAT_1001ad10
#define DAT_1001ad10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e4U)))
#undef DAT_1001b308
#define DAT_1001b308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7dcU)))
#undef LAB_1001412c
#define LAB_1001412c (*(uint8_t *)(0x1001412cU))
#undef UNK_1001ad18
#define UNK_1001ad18 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ecU)))
#undef _DAT_1001ad10
#define _DAT_1001ad10 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e4U)))
#undef str_1001b1e8
#define str_1001b1e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bcU)))
#undef uRam000000001001ad18
#define uRam000000001001ad18 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ecU)))
#define local_238 (*(long *)(pf_stack_frame + 24))
#define local_230 (*(long *)(pf_stack_frame + 32))
#define local_228 (*(long *)(pf_stack_frame + 40))
#define local_220 (*(long *)(pf_stack_frame + 48))
#define local_218 (*(ulong *)(pf_stack_frame + 56))
#define local_210 (*(long *)(pf_stack_frame + 64))
#define local_208 (*(ulong *)(pf_stack_frame + 72))
#define local_200 (*(uint * *)(pf_stack_frame + 80))
#define local_1f8 (*(long *)(pf_stack_frame + 88))
#define local_1f0 (*(uint * *)(pf_stack_frame + 96))
#define local_1e8 (*(ulong *)(pf_stack_frame + 104))
#define local_1e0 (*(long *)(pf_stack_frame + 112))
#define local_1d8 (*(long *)(pf_stack_frame + 120))
#define local_1d0 (*(char * *)(pf_stack_frame + 128))
#define local_1c8 (*(uint * *)(pf_stack_frame + 136))
#define local_1c0 (*(uint * *)(pf_stack_frame + 144))
#define local_1b8 (*(uint * *)(pf_stack_frame + 152))
#define local_1b0 (*(undefined8 * *)(pf_stack_frame + 160))
#define local_1a8 (*(uint * *)(pf_stack_frame + 168))
#define local_1a0 (*(ulong *)(pf_stack_frame + 176))
#define local_198 (*(ulong *)(pf_stack_frame + 184))
#define local_190 (*(uint * *)(pf_stack_frame + 192))
#define local_188 (*(uint * *)(pf_stack_frame + 200))
#define local_180 (*(ulong *)(pf_stack_frame + 208))
#define local_178 (*(uint *)(pf_stack_frame + 216))
#define local_174 (*(int *)(pf_stack_frame + 220))
#define local_170 (*(uint * *)(pf_stack_frame + 224))
#define local_168 (*(uint * *)(pf_stack_frame + 232))
#define local_160 (*(uint * *)(pf_stack_frame + 240))
#define local_158 (*(uint * *)(pf_stack_frame + 248))
#define local_150 (*(ulong *)(pf_stack_frame + 256))
#define local_148 (*(uint * *)(pf_stack_frame + 264))
#define local_140 (*(undefined8 *)(pf_stack_frame + 272))
#define local_138 (*(undefined4 *)(pf_stack_frame + 280))
#define local_120 (*(code * *)(pf_stack_frame + 304))
#define local_118 (*(undefined * *)(pf_stack_frame + 312))
#define local_110 (*(undefined1 * *)(pf_stack_frame + 320))
#define local_108 (*(undefined1 * *)(pf_stack_frame + 328))
#define local_100 (*(undefined1 * *)(pf_stack_frame + 336))
#define local_e8 (*(void * *)(pf_stack_frame + 360))
#define local_e0 (*(uint * *)(pf_stack_frame + 368))
#define local_d8 (*(void * *)(pf_stack_frame + 376))
#define local_d0 (*(uint * *)(pf_stack_frame + 384))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 392))
#define local_c0 (*(uint * *)(pf_stack_frame + 400))
#define local_b8 (*(uint * *)(pf_stack_frame + 408))
#define local_b0 (*(uint * *)(pf_stack_frame + 416))
#define local_a8 (*(uint * *)(pf_stack_frame + 424))
#define local_a0 (*(uint * *)(pf_stack_frame + 432))
#define local_98 (*(uint * *)(pf_stack_frame + 440))
#define local_90 (*(uint * *)(pf_stack_frame + 448))
#define local_88 (*(uint * *)(pf_stack_frame + 456))
#define local_80 (*(uint * *)(pf_stack_frame + 464))
#define local_78 (*(ulong *)(pf_stack_frame + 472))
#define local_70 (*(undefined8 *)(pf_stack_frame + 480))
#define local_68 (*(uint * *)(pf_stack_frame + 488))
#define local_60 (*(ulong *)(pf_stack_frame + 496))
#define local_58 (*(uint * *)(pf_stack_frame + 504))
#define local_50 (*(uint * *)(pf_stack_frame + 512))
#define local_48 (*(uint * *)(pf_stack_frame + 520))
#define local_40 (*(uint * *)(pf_stack_frame + 528))
#define local_38 (*(undefined8 *)(pf_stack_frame + 536))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100108c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_100108c0(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  uint *puVar22;
  uint *puVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined4 *puVar26;
  uint *puVar27;
  uint *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  ulong uVar31;
  uint *puVar32;

  local_110 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 592) + -8);
  local_100 = (undefined1 *)&local_238;
  local_120 = recovered_10007fa0;
  local_118 = &DAT_1001b308;
  local_108 = &LAB_1001412c;
  local_1d0 = param_1;
  local_158 = param_2;
  recovered_10008640(&local_140);
  if ((0 < param_4 && 0 < param_3) && (param_2 != (void *)0x0 && param_1 != (char *)0x0)) {
    local_180 = (ulong)(param_3 + 0x3fU >> 6);
    local_150 = (ulong)(param_4 + 0x3fU >> 6);
    if ((uint *)(local_150 * local_180) < (uint *)0x40000000) {
      local_138 = 1;
      local_88 = (uint *)(local_150 * local_180);
      local_78 = (ulong)(uint)param_3;
      local_60 = (ulong)(uint)param_4;
      local_70 = (uint *)recovered_10007ff0(0x10);
      recovered_10008050((void *)0x0);
      *(undefined8 *)local_70 = 0x66637820706d6967;
      *(undefined4 *)((long)local_70 + 8) = 0x30307620;
      *(undefined2 *)((long)local_70 + 0xc) = 0x33;
      local_1b0 = (undefined8 *)local_70;
      local_138 = 2;
      puVar7 = (undefined8 *)recovered_10007ff0(0x20);
      uVar31 = local_78;
      uVar18 = local_78 >> 0x18;
      uVar20 = local_78 >> 0x10 & 0xffff;
      uVar19 = local_78 >> 8 & 0xffffff;
      *puVar7 = *(undefined8 *)local_70;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((long)local_70 + 8);
      *(undefined1 *)((long)puVar7 + 0xc) = *(undefined1 *)((long)local_70 + 0xc);
      *(undefined1 *)((long)puVar7 + 0xd) = *(undefined1 *)((long)local_70 + 0xd);
      recovered_10008050(local_70);
      local_70 = (uint *)(CONCAT44(PF_PART4(local_70, 4),(int)uVar18) & 0xffffffff000000ff);
      *(char *)((long)puVar7 + 0xe) = (char)(uVar31 >> 0x18);
      local_b0 = (uint *)CONCAT44(PF_PART4(local_b0, 4),(int)uVar20);
      *(char *)((long)puVar7 + 0xf) = (char)uVar20;
      local_90 = (uint *)CONCAT44(PF_PART4(local_90, 4),(int)uVar19);
      *(char *)(puVar7 + 2) = (char)uVar19;
      *(char *)((long)puVar7 + 0x11) = (char)uVar31;
      uVar18 = local_60 >> 0x10 & 0xffff;
      uVar31 = local_60 >> 8 & 0xffffff;
      local_c8 = (uint *)(CONCAT44(PF_PART4(local_c8, 4),(int)(local_60 >> 0x18)) & 0xffffffff000000ff);
      *(char *)((long)puVar7 + 0x12) = (char)(local_60 >> 0x18);
      local_c0 = (uint *)CONCAT44(PF_PART4(local_c0, 4),(int)uVar18);
      *(char *)((long)puVar7 + 0x13) = (char)uVar18;
      local_d0 = (uint *)CONCAT44(PF_PART4(local_d0, 4),(int)uVar31);
      *(char *)((long)puVar7 + 0x14) = (char)uVar31;
      *(char *)((long)puVar7 + 0x15) = (char)local_60;
      *(undefined8 *)((long)puVar7 + 0x16) = 0x1100000000000000;
      local_138 = 3;
      local_1b0 = puVar7;
      local_40 = (uint *)puVar7;
      puVar7 = (undefined8 *)recovered_10007ff0(0x40);
      local_a8 = local_158;
      uVar13 = *(undefined8 *)((long)local_40 + 8);
      *puVar7 = *(undefined8 *)local_40;
      puVar7[1] = uVar13;
      puVar7[2] = *(undefined8 *)((long)local_40 + 0x10);
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((long)local_40 + 0x18);
      *(undefined1 *)((long)puVar7 + 0x1c) = *(undefined1 *)((long)local_40 + 0x1c);
      *(undefined1 *)((long)puVar7 + 0x1d) = *(undefined1 *)((long)local_40 + 0x1d);
      recovered_10008050(local_40);
      *(undefined4 *)((long)puVar7 + 0x1e) = 0x1000000;
      *(undefined1 *)((long)puVar7 + 0x22) = 0;
      uVar13 = uRam000000001001ad18;
      *(undefined8 *)((long)puVar7 + 0x23) = _DAT_1001ad10;
      *(undefined8 *)((long)puVar7 + 0x2b) = uVar13;
      *(undefined8 *)((long)puVar7 + 0x33) = 0;
      *(char *)((long)puVar7 + 0x3b) = (char)local_70;
      *(char *)((long)puVar7 + 0x3c) = (char)local_b0;
      *(char *)((long)puVar7 + 0x3d) = (char)local_90;
      *(char *)((long)puVar7 + 0x3e) = (char)local_78;
      puVar10 = (uint *)0x40;
      do {
        local_38 = puVar10;
        puVar10 = (uint *)((long)local_38 * 2);
      } while (local_38 < (uint *)0x43);
      local_138 = 4;
      local_68 = (uint *)puVar7;
      local_40 = (uint *)puVar7;
      puVar8 = (uint *)recovered_10007ff0((long)local_38);
      puVar10 = local_38;
      uVar18 = local_60;
      if ((ulong)((long)puVar8 - (long)local_40) < 0x10) {
        lVar9 = 0;
      }
      else {
        uVar13 = *(undefined8 *)((long)local_40 + 8);
        *(undefined8 *)puVar8 = *(undefined8 *)local_40;
        *(undefined8 *)(puVar8 + 2) = uVar13;
        uVar13 = *(undefined8 *)((long)local_40 + 0x18);
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)((long)local_40 + 0x10);
        *(undefined8 *)(puVar8 + 6) = uVar13;
        uVar13 = *(undefined8 *)((long)local_40 + 0x28);
        *(undefined8 *)(puVar8 + 8) = *(undefined8 *)((long)local_40 + 0x20);
        *(undefined8 *)(puVar8 + 10) = uVar13;
        puVar8[0xc] = *(uint *)((long)local_40 + 0x30);
        puVar8[0xd] = *(uint *)((long)local_40 + 0x34);
        puVar8[0xe] = *(uint *)((long)local_40 + 0x38);
        lVar9 = 0x3c;
      }
      lVar17 = 3;
      do {
        *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
        lVar9 = lVar9 + 1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      if ((ulong)((long)puVar8 - (long)local_40) < 0x10) {
        do {
          *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
          *(undefined1 *)((long)puVar8 + lVar9 + 1) = *(undefined1 *)((long)local_40 + lVar9 + 1);
          *(undefined1 *)((long)puVar8 + lVar9 + 2) = *(undefined1 *)((long)local_40 + lVar9 + 2);
          *(undefined1 *)((long)puVar8 + lVar9 + 3) = *(undefined1 *)((long)local_40 + lVar9 + 3);
          lVar9 = lVar9 + 4;
        } while (lVar9 != 0x3f);
      }
      recovered_10008050(local_40);
      *(char *)((long)puVar8 + 0x3f) = (char)local_c8;
      *(char *)(puVar8 + 0x10) = (char)local_c0;
      *(char *)((long)puVar8 + 0x41) = (char)local_d0;
      *(char *)((long)puVar8 + 0x42) = (char)uVar18;
      if (puVar10 < (uint *)0x47) {
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < (uint *)0x47);
        local_138 = 5;
        local_68 = puVar8;
        local_40 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        if ((ulong)((long)puVar8 - (long)local_40) < 0x20) {
          lVar9 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(local_40 + 2);
          uVar1 = *(undefined8 *)(local_40 + 4);
          uVar2 = *(undefined8 *)(local_40 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)local_40;
          *(undefined8 *)(puVar8 + 2) = uVar13;
          *(undefined8 *)(puVar8 + 4) = uVar1;
          *(undefined8 *)(puVar8 + 6) = uVar2;
          uVar13 = *(undefined8 *)(local_40 + 10);
          uVar1 = *(undefined8 *)(local_40 + 0xc);
          uVar2 = *(undefined8 *)(local_40 + 0xe);
          *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(local_40 + 8);
          *(undefined8 *)(puVar8 + 10) = uVar13;
          *(undefined8 *)(puVar8 + 0xc) = uVar1;
          *(undefined8 *)(puVar8 + 0xe) = uVar2;
          *(short *)(puVar8 + 0x10) = (short)local_40[0x10];
          lVar9 = 0x42;
        }
        uVar18 = (ulong)(3U - (int)lVar9 & 3);
        do {
          *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
          lVar9 = lVar9 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        if ((ulong)((long)puVar8 - (long)local_40) < 0x20) {
          do {
            *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
            *(undefined1 *)((long)puVar8 + lVar9 + 1) = *(undefined1 *)((long)local_40 + lVar9 + 1);
            *(undefined1 *)((long)puVar8 + lVar9 + 2) = *(undefined1 *)((long)local_40 + lVar9 + 2);
            *(undefined1 *)((long)puVar8 + lVar9 + 3) = *(undefined1 *)((long)local_40 + lVar9 + 3);
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x43);
        }
        recovered_10008050(local_40);
      }
      else {
        local_38 = puVar10;
      }
      *(undefined4 *)((long)puVar8 + 0x43) = 0x1000000;
      local_138 = 6;
      local_68 = puVar8;
      local_40 = puVar8;
      puVar10 = (uint *)recovered_10003760(str_1001b1e8);
      puVar8 = local_38;
      if (local_38 < (uint *)0x4b) {
        do {
          local_50 = puVar8;
          puVar8 = (uint *)((long)local_50 * 2);
        } while (local_50 < (uint *)0x4b);
        local_68 = local_40;
        local_138 = 7;
        local_58 = puVar10;
        puVar8 = (uint *)recovered_10007ff0((long)local_50);
        puVar10 = local_58;
        if ((ulong)((long)puVar8 - (long)local_40) < 0x20) {
          lVar9 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(local_40 + 2);
          uVar1 = *(undefined8 *)(local_40 + 4);
          uVar2 = *(undefined8 *)(local_40 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)local_40;
          *(undefined8 *)(puVar8 + 2) = uVar13;
          *(undefined8 *)(puVar8 + 4) = uVar1;
          *(undefined8 *)(puVar8 + 6) = uVar2;
          uVar13 = *(undefined8 *)(local_40 + 10);
          uVar1 = *(undefined8 *)(local_40 + 0xc);
          uVar2 = *(undefined8 *)(local_40 + 0xe);
          *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(local_40 + 8);
          *(undefined8 *)(puVar8 + 10) = uVar13;
          *(undefined8 *)(puVar8 + 0xc) = uVar1;
          *(undefined8 *)(puVar8 + 0xe) = uVar2;
          puVar8[0x10] = local_40[0x10];
          lVar9 = 0x44;
        }
        uVar24 = (undefined1)local_60;
        lVar17 = 3;
        do {
          *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
          lVar9 = lVar9 + 1;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        if ((ulong)((long)puVar8 - (long)local_40) < 0x20) {
          do {
            *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
            *(undefined1 *)((long)puVar8 + lVar9 + 1) = *(undefined1 *)((long)local_40 + lVar9 + 1);
            *(undefined1 *)((long)puVar8 + lVar9 + 2) = *(undefined1 *)((long)local_40 + lVar9 + 2);
            *(undefined1 *)((long)puVar8 + lVar9 + 3) = *(undefined1 *)((long)local_40 + lVar9 + 3);
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x47);
        }
        recovered_10008050(local_40);
      }
      else {
        uVar24 = (undefined1)local_60;
        local_50 = local_38;
        puVar8 = local_40;
      }
      iVar5 = (int)puVar10 + 1;
      *(char *)((long)puVar8 + 0x47) = (char)((uint)iVar5 >> 0x18);
      *(char *)(puVar8 + 0x12) = (char)((uint)iVar5 >> 0x10);
      *(char *)((long)puVar8 + 0x49) = (char)((uint)iVar5 >> 8);
      *(char *)((long)puVar8 + 0x4a) = (char)iVar5;
      if (puVar10 == (uint *)0x0) {
        puVar32 = (uint *)0x4b;
      }
      else {
        puVar32 = (uint *)((long)puVar10 + 0x4b);
        if (local_50 < puVar32) {
          do {
            local_38 = local_50;
            local_50 = (uint *)((long)local_38 * 2);
          } while (local_38 < puVar32);
          local_138 = 8;
          local_68 = puVar8;
          local_58 = puVar10;
          local_50 = puVar10;
          local_48 = puVar8;
          local_40 = puVar32;
          puVar8 = (uint *)recovered_10007ff0((long)local_38);
          puVar27 = local_38;
          puVar32 = local_40;
          puVar16 = local_58;
          if ((ulong)((long)puVar8 - (long)local_48) < 0x10) {
            lVar9 = 0;
          }
          else {
            uVar13 = *(undefined8 *)(local_48 + 2);
            *(undefined8 *)puVar8 = *(undefined8 *)local_48;
            *(undefined8 *)(puVar8 + 2) = uVar13;
            uVar13 = *(undefined8 *)(local_48 + 6);
            *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(local_48 + 4);
            *(undefined8 *)(puVar8 + 6) = uVar13;
            uVar13 = *(undefined8 *)(local_48 + 10);
            *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(local_48 + 8);
            *(undefined8 *)(puVar8 + 10) = uVar13;
            uVar13 = *(undefined8 *)(local_48 + 0xe);
            *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(local_48 + 0xc);
            *(undefined8 *)(puVar8 + 0xe) = uVar13;
            *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(local_48 + 0x10);
            lVar9 = 0x48;
          }
          lVar17 = 3;
          do {
            *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_48 + lVar9);
            lVar9 = lVar9 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          if ((ulong)((long)puVar8 - (long)local_48) < 0x10) {
            do {
              *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_48 + lVar9);
              *(undefined1 *)((long)puVar8 + lVar9 + 1) =
                   *(undefined1 *)((long)local_48 + lVar9 + 1);
              *(undefined1 *)((long)puVar8 + lVar9 + 2) =
                   *(undefined1 *)((long)local_48 + lVar9 + 2);
              *(undefined1 *)((long)puVar8 + lVar9 + 3) =
                   *(undefined1 *)((long)local_48 + lVar9 + 3);
              lVar9 = lVar9 + 4;
            } while (lVar9 != 0x4b);
          }
          recovered_10008050(local_48);
          puVar10 = local_50;
          local_50 = puVar27;
        }
        else {
          puVar16 = puVar10;
        }
        lVar9 = 0x4b;
        if (puVar16 < (uint *)0x4) {
          pcVar11 = str_1001b1e8;
LAB_10011026:
          uVar18 = ~(ulong)pcVar11;
          uVar30 = (int)puVar10 + 0x1001b1e8U & 3;
          uVar31 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(char *)((long)puVar8 + lVar9) = (char)*(uint *)pcVar11;
              pcVar11 = (char *)((long)pcVar11 + 1);
              lVar9 = lVar9 + 1;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
          }
          if ((char *)0x2 < (char *)(uVar18 + (long)(puVar16 + 0x4006c7a))) {
            lVar17 = 0;
            do {
              *(char *)((long)puVar8 + lVar17 + lVar9) = *(char *)((long)pcVar11 + lVar17);
              *(char *)((long)puVar8 + lVar17 + lVar9 + 1) = *(char *)((long)pcVar11 + lVar17 + 1);
              *(char *)((long)puVar8 + lVar17 + lVar9 + 2) = *(char *)((long)pcVar11 + lVar17 + 2);
              *(char *)((long)puVar8 + lVar17 + lVar9 + 3) = *(char *)((long)pcVar11 + lVar17 + 3);
              lVar3 = lVar17 + 4;
              lVar17 = lVar17 + 4;
            } while ((uint *)((long)pcVar11 + lVar3) != puVar16 + 0x4006c7a);
          }
        }
        else {
          pcVar11 = str_1001b1e8;
          if ((long)puVar8 - 0x1001b19dU < 0x20) goto LAB_10011026;
          if (puVar16 < (uint *)0x20) {
            puVar14 = (uint *)0x0;
LAB_10010fdb:
            puVar27 = (uint *)((ulong)puVar16 & 0xfffffffffffffffc);
            pcVar11 = (char *)(puVar27 + 0x4006c7a);
            lVar9 = (long)puVar27 + 0x4b;
            do {
              *(uint *)((long)puVar8 + 0x4b + (long)puVar14) = puVar14[0x4006c7a];
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (puVar16 != puVar27) goto LAB_10011026;
          }
          else {
            puVar14 = (uint *)((ulong)puVar16 & 0xffffffffffffffe0);
            puVar27 = (uint *)0x0;
            do {
              uVar13 = *(undefined8 *)(puVar27 + 0x4006c7c);
              uVar1 = *(undefined8 *)(puVar27 + 0x4006c7e);
              uVar2 = *(undefined8 *)(puVar27 + 0x4006c80);
              puVar7 = (undefined8 *)((long)puVar8 + 0x4b + (long)puVar27);
              *puVar7 = *(undefined8 *)(puVar27 + 0x4006c7a);
              puVar7[1] = uVar13;
              puVar7 = (undefined8 *)((long)puVar8 + 0x5b + (long)puVar27);
              *puVar7 = uVar1;
              puVar7[1] = uVar2;
              puVar27 = puVar27 + 8;
            } while (puVar14 != puVar27);
            if (puVar16 != puVar14) {
              if (((ulong)puVar10 & 0x1c) == 0) {
                pcVar11 = (char *)(puVar14 + 0x4006c7a);
                lVar9 = (long)puVar14 + 0x4b;
                goto LAB_10011026;
              }
              goto LAB_10010fdb;
            }
          }
        }
        uVar24 = (undefined1)local_60;
      }
      local_40 = puVar32;
      if (puVar32 == local_50) {
        local_38 = (uint *)0x4;
        if (local_50 != (uint *)0x0) {
          local_38 = (uint *)((long)local_50 * 2);
        }
        if (local_38 <= local_50) goto LAB_1001112c;
        local_138 = 9;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_100111ff;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10011195;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_100111ff;
          }
LAB_10011195:
          uVar18 = (ulong)local_50 & 3;
          puVar16 = puVar10;
          if (uVar18 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + (long)puVar16);
              puVar16 = (uint *)((long)puVar16 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if ((ulong)((long)puVar10 - (long)local_50) < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (local_50 != puVar16);
          }
        }
LAB_100111ff:
        recovered_10008050(local_48);
      }
      else {
LAB_1001112c:
        local_38 = local_50;
      }
      *(undefined1 *)((long)puVar8 + (long)puVar32) = 0;
      local_58 = (uint *)((long)puVar32 + 5);
      if (local_38 < local_58) {
        local_48 = (uint *)((long)puVar32 + 1);
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 10;
        local_68 = puVar8;
        local_50 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_48 != (uint *)0x0) {
          uVar18 = 0;
          if ((3 < local_48) && (0x1f < (ulong)((long)puVar8 - (long)local_50))) {
            if (local_48 < 0x20) {
              uVar31 = 0;
            }
            else {
              uVar18 = (ulong)local_48 & 0xffffffffffffffe0;
              uVar31 = 0;
              do {
                uVar13 = ((undefined8 *)((long)local_50 + uVar31))[1];
                puVar7 = (undefined8 *)((long)local_50 + uVar31 + 0x10);
                uVar1 = *puVar7;
                uVar2 = puVar7[1];
                *(undefined8 *)((long)puVar8 + uVar31) = *(undefined8 *)((long)local_50 + uVar31);
                ((undefined8 *)((long)puVar8 + uVar31))[1] = uVar13;
                puVar7 = (undefined8 *)((long)puVar8 + uVar31 + 0x10);
                *puVar7 = uVar1;
                puVar7[1] = uVar2;
                uVar31 = uVar31 + 0x20;
              } while (uVar18 != uVar31);
              if (local_48 == (uint *)uVar18) goto LAB_1001136f;
              uVar31 = uVar18;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_10011305;
            }
            uVar18 = (ulong)local_48 & 0xfffffffffffffffc;
            do {
              *(undefined4 *)((long)puVar8 + uVar31) = *(undefined4 *)((long)local_50 + uVar31);
              uVar31 = uVar31 + 4;
            } while (uVar18 != uVar31);
            if (local_48 == (uint *)uVar18) goto LAB_1001136f;
          }
LAB_10011305:
          uVar31 = (long)local_40 - uVar18;
          uVar30 = (int)local_40 + 1U & 3;
          uVar19 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + uVar18) = *(undefined1 *)((long)local_50 + uVar18);
              uVar18 = uVar18 + 1;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          if (2 < uVar31) {
            do {
              *(undefined1 *)((long)puVar8 + uVar18) = *(undefined1 *)((long)local_50 + uVar18);
              *(undefined1 *)((long)puVar8 + uVar18 + 1) =
                   *(undefined1 *)((long)local_50 + uVar18 + 1);
              *(undefined1 *)((long)puVar8 + uVar18 + 2) =
                   *(undefined1 *)((long)local_50 + uVar18 + 2);
              *(undefined1 *)((long)puVar8 + uVar18 + 3) =
                   *(undefined1 *)((long)local_50 + uVar18 + 3);
              uVar18 = uVar18 + 4;
            } while (local_48 != (uint *)uVar18);
          }
        }
LAB_1001136f:
        recovered_10008050(local_50);
      }
      *(undefined4 *)((long)puVar8 + 1 + (long)puVar32) = 0x6000000;
      local_50 = (uint *)((long)puVar32 + 9);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0xb;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_100114cf;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10011465;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_100114cf;
          }
LAB_10011465:
          lVar9 = 4 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_100114cf:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 5 + (long)puVar32) = 0x4000000;
      local_58 = (uint *)((long)puVar32 + 0xd);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0xc;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_1001162f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_100115c5;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_1001162f;
          }
LAB_100115c5:
          lVar9 = 8 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_1001162f:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 9 + (long)puVar32) = 0xff000000;
      local_50 = (uint *)((long)puVar32 + 0x11);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0xd;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_1001178f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10011725;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_1001178f;
          }
LAB_10011725:
          lVar9 = 0xc - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_1001178f:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0xd + (long)puVar32) = 0x7000000;
      local_58 = (uint *)((long)puVar32 + 0x15);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0xe;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_100118ef;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10011885;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_100118ef;
          }
LAB_10011885:
          lVar9 = 0x10 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_100118ef:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x11 + (long)puVar32) = 0x4000000;
      local_50 = (uint *)((long)puVar32 + 0x19);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0xf;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_10011a4f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_100119e5;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_10011a4f;
          }
LAB_100119e5:
          lVar9 = 0x14 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_10011a4f:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x15 + (long)puVar32) = 0;
      local_58 = (uint *)((long)puVar32 + 0x1d);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0x10;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_10011baf;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10011b45;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_10011baf;
          }
LAB_10011b45:
          lVar9 = 0x18 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_10011baf:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x19 + (long)puVar32) = 0x8000000;
      local_50 = (uint *)((long)puVar32 + 0x21);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x11;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_10011d0f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10011ca5;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_10011d0f;
          }
LAB_10011ca5:
          lVar9 = 0x1c - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_10011d0f:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x1d + (long)puVar32) = 0x4000000;
      local_58 = (uint *)((long)puVar32 + 0x25);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0x12;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_10011e6f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10011e05;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_10011e6f;
          }
LAB_10011e05:
          lVar9 = 0x20 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_10011e6f:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x21 + (long)puVar32) = 0x1000000;
      local_50 = (uint *)((long)puVar32 + 0x29);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x13;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_10011fcf;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10011f65;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_10011fcf;
          }
LAB_10011f65:
          lVar9 = 0x24 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_10011fcf:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x25 + (long)puVar32) = 0xf000000;
      local_58 = (uint *)((long)puVar32 + 0x2d);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0x14;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_1001212f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_100120c5;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_1001212f;
          }
LAB_100120c5:
          lVar9 = 0x28 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_1001212f:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x29 + (long)puVar32) = 0x8000000;
      local_50 = (uint *)((long)puVar32 + 0x31);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x15;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_1001228f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10012225;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_1001228f;
          }
LAB_10012225:
          lVar9 = 0x2c - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_1001228f:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x2d + (long)puVar32) = 0;
      local_58 = (uint *)((long)puVar32 + 0x35);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0x16;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_100123ef;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10012385;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_100123ef;
          }
LAB_10012385:
          lVar9 = 0x30 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_100123ef:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x31 + (long)puVar32) = 0;
      local_50 = (uint *)((long)puVar32 + 0x39);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x17;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_1001254f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_100124e5;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_1001254f;
          }
LAB_100124e5:
          lVar9 = 0x34 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_1001254f:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x35 + (long)puVar32) = 0;
      puVar10 = (uint *)((long)puVar32 + 0x3d);
      local_58 = puVar10;
      if (local_38 < puVar10) {
        puVar32 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar32 = local_38;
        }
        do {
          local_38 = puVar32;
          puVar32 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar10);
        local_138 = 0x18;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        puVar10 = local_58;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar16 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar27 = (uint *)0x0;
            }
            else {
              puVar16 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar27 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar27))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar27);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar27))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar27) =
                     *(undefined8 *)((long)local_48 + (long)puVar27);
                ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar27) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar27))[1] = uVar2;
                puVar27 = puVar27 + 8;
              } while (puVar16 != puVar27);
              if (local_50 == puVar16) goto LAB_100126c0;
              puVar27 = puVar16;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10012656;
            }
            puVar16 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_48 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar16 != puVar27);
            if (local_50 == puVar16) goto LAB_100126c0;
          }
LAB_10012656:
          lVar9 = 0x38 - (long)puVar16;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + (long)puVar16);
              puVar16 = (uint *)((long)puVar16 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (local_50 != puVar16);
          }
        }
LAB_100126c0:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x39 + (long)puVar32) = 0;
      puVar16 = (uint *)((long)puVar32 + 0x41);
      local_50 = puVar16;
      if (local_38 < puVar16) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar16);
        local_138 = 0x19;
        local_1b8 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        puVar16 = local_50;
        puVar10 = local_58;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar27 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar14 = (uint *)0x0;
            }
            else {
              puVar27 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar14 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar14))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar14);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar14))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar14) =
                     *(undefined8 *)((long)local_48 + (long)puVar14);
                ((undefined8 *)((long)puVar8 + (long)puVar14))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar14) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar14))[1] = uVar2;
                puVar14 = puVar14 + 8;
              } while (puVar27 != puVar14);
              if (local_58 == puVar27) goto LAB_10012823;
              puVar14 = puVar27;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_100127b4;
            }
            puVar27 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_48 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_58 == puVar27) goto LAB_10012823;
          }
LAB_100127b4:
          lVar9 = 0x3c - (long)puVar27;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + (long)puVar27);
              puVar27 = (uint *)((long)puVar27 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_58 != puVar27);
          }
        }
LAB_10012823:
        recovered_10008050(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x3d + (long)puVar32) = 0;
      local_48 = (uint *)((long)puVar32 + 0x45);
      if (local_38 < local_48) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_48);
        local_138 = 0x1a;
        local_1b8 = puVar8;
        local_b8 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        puVar16 = local_50;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_b8))) {
            if (local_50 < (uint *)0x20) {
              puVar27 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar27 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_b8 + (long)puVar27))[1];
                uVar1 = *(undefined8 *)((long)(local_b8 + 4) + (long)puVar27);
                uVar2 = ((undefined8 *)((long)(local_b8 + 4) + (long)puVar27))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar27) =
                     *(undefined8 *)((long)local_b8 + (long)puVar27);
                ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar27) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar27))[1] = uVar2;
                puVar27 = puVar27 + 8;
              } while (puVar10 != puVar27);
              if (local_50 == puVar10) goto LAB_100129a0;
              puVar27 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10012936;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_b8 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar10 != puVar27);
            if (local_50 == puVar10) goto LAB_100129a0;
          }
LAB_10012936:
          lVar9 = 0x40 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_100129a0:
        recovered_10008050(local_b8);
        puVar10 = local_58;
      }
      *(undefined4 *)((long)puVar8 + (long)puVar16) = 0;
      if (puVar16 <= local_48) {
        uVar30 = (uint)local_48;
        *(uint *)((long)puVar8 + (long)puVar10) =
             uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
      }
      local_58 = (uint *)((long)puVar32 + 0x49);
      uVar4 = (undefined1)local_78;
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0x1b;
        local_170 = puVar8;
        local_50 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_48 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_48) && (0x1f < (ulong)((long)puVar8 - (long)local_50))) {
            if (local_48 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_48 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_50 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_50 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_50 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_50 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_48 == puVar10) goto LAB_10012b20;
              puVar16 = puVar10;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_10012ab6;
            }
            puVar10 = (uint *)((ulong)local_48 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_50 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_48 == puVar10) goto LAB_10012b20;
          }
LAB_10012ab6:
          lVar9 = 0x44 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_48 != puVar10);
          }
        }
LAB_10012b20:
        recovered_10008050(local_50);
        uVar4 = (undefined1)local_78;
      }
      *(char *)((long)puVar8 + 0x45 + (long)puVar32) = (char)local_70;
      *(char *)((long)puVar8 + 0x46 + (long)puVar32) = (char)local_b0;
      *(char *)((long)puVar8 + 0x47 + (long)puVar32) = (char)local_90;
      *(undefined1 *)((long)(puVar8 + 0x12) + (long)puVar32) = uVar4;
      local_48 = (uint *)((long)puVar32 + 0x4d);
      if (local_38 < local_48) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_48);
        local_138 = 0x1c;
        local_170 = puVar8;
        local_50 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_50))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_50 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_50 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_50 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_50 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_10012ca0;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10012c36;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_50 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_10012ca0;
          }
LAB_10012c36:
          lVar9 = 0x48 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_10012ca0:
        recovered_10008050(local_50);
      }
      *(char *)((long)puVar8 + 0x49 + (long)puVar32) = (char)local_c8;
      *(char *)((long)puVar8 + 0x4a + (long)puVar32) = (char)local_c0;
      *(char *)((long)puVar8 + 0x4b + (long)puVar32) = (char)local_d0;
      *(undefined1 *)((long)(puVar8 + 0x13) + (long)puVar32) = uVar24;
      local_50 = (uint *)((long)puVar32 + 0x51);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x1d;
        local_170 = puVar8;
        local_58 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        if (local_48 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_48) && (0x1f < (ulong)((long)puVar8 - (long)local_58))) {
            if (local_48 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_48 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_58 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_58 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_58 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_58 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_48 == puVar10) goto LAB_10012e20;
              puVar16 = puVar10;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_10012db6;
            }
            puVar10 = (uint *)((ulong)local_48 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_58 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_48 == puVar10) goto LAB_10012e20;
          }
LAB_10012db6:
          lVar9 = 0x4c - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_48 != puVar10);
          }
        }
LAB_10012e20:
        recovered_10008050(local_58);
      }
      *(undefined4 *)((long)puVar8 + 0x4d + (long)puVar32) = 0x4000000;
      puVar10 = (uint *)((long)puVar32 + 0x55);
      local_48 = puVar10;
      if (local_38 < puVar10) {
        puVar32 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar32 = local_38;
        }
        do {
          local_38 = puVar32;
          puVar32 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar10);
        local_138 = 0x1e;
        local_1c0 = puVar8;
        local_58 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        puVar10 = local_48;
        if (local_50 != (uint *)0x0) {
          puVar16 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_58))) {
            if (local_50 < (uint *)0x20) {
              puVar27 = (uint *)0x0;
            }
            else {
              puVar16 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar27 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_58 + (long)puVar27))[1];
                uVar1 = *(undefined8 *)((long)(local_58 + 4) + (long)puVar27);
                uVar2 = ((undefined8 *)((long)(local_58 + 4) + (long)puVar27))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar27) =
                     *(undefined8 *)((long)local_58 + (long)puVar27);
                ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar27) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar27))[1] = uVar2;
                puVar27 = puVar27 + 8;
              } while (puVar16 != puVar27);
              if (local_50 == puVar16) goto LAB_10012f84;
              puVar27 = puVar16;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10012f17;
            }
            puVar16 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_58 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar16 != puVar27);
            if (local_50 == puVar16) goto LAB_10012f84;
          }
LAB_10012f17:
          lVar9 = 0x50 - (long)puVar16;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + (long)puVar16);
              puVar16 = (uint *)((long)puVar16 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + 1 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + 2 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + 3 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (local_50 != puVar16);
          }
        }
LAB_10012f84:
        recovered_10008050(local_58);
      }
      *(undefined4 *)((long)puVar8 + 0x51 + (long)puVar32) = 0;
      puVar16 = (uint *)((long)puVar32 + 0x59);
      local_58 = puVar16;
      if (local_38 < puVar16) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar16);
        local_138 = 0x1f;
        local_1c0 = puVar8;
        local_b8 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        puVar10 = local_48;
        puVar16 = local_58;
        if (local_48 != (uint *)0x0) {
          puVar27 = (uint *)0x0;
          if (((uint *)0x3 < local_48) && (0x1f < (ulong)((long)puVar8 - (long)local_b8))) {
            if (local_48 < (uint *)0x20) {
              puVar14 = (uint *)0x0;
            }
            else {
              puVar27 = (uint *)((ulong)local_48 & 0xffffffffffffffe0);
              puVar14 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_b8 + (long)puVar14))[1];
                uVar1 = *(undefined8 *)((long)(local_b8 + 4) + (long)puVar14);
                uVar2 = ((undefined8 *)((long)(local_b8 + 4) + (long)puVar14))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar14) =
                     *(undefined8 *)((long)local_b8 + (long)puVar14);
                ((undefined8 *)((long)puVar8 + (long)puVar14))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar14) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar14))[1] = uVar2;
                puVar14 = puVar14 + 8;
              } while (puVar27 != puVar14);
              if (local_48 == puVar27) goto LAB_10013103;
              puVar14 = puVar27;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_10013094;
            }
            puVar27 = (uint *)((ulong)local_48 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_b8 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_48 == puVar27) goto LAB_10013103;
          }
LAB_10013094:
          lVar9 = 0x54 - (long)puVar27;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + (long)puVar27);
              puVar27 = (uint *)((long)puVar27 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + 1 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + 2 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + 3 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_48 != puVar27);
          }
        }
LAB_10013103:
        recovered_10008050(local_b8);
      }
      *(undefined4 *)((long)puVar8 + (long)puVar10) = 0;
      if (puVar10 <= puVar16) {
        uVar30 = (uint)puVar16;
        *(uint *)((long)puVar8 + (long)local_50) =
             uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
      }
      puVar10 = (uint *)((long)puVar32 + 0x5d);
      local_50 = puVar10;
      if (local_38 < puVar10) {
        puVar32 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar32 = local_38;
        }
        do {
          local_38 = puVar32;
          puVar32 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar10);
        local_138 = 0x20;
        local_1c8 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        puVar10 = local_50;
        puVar16 = local_58;
        if (local_58 != (uint *)0x0) {
          puVar27 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar14 = (uint *)0x0;
            }
            else {
              puVar27 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar14 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar14))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar14);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar14))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar14) =
                     *(undefined8 *)((long)local_48 + (long)puVar14);
                ((undefined8 *)((long)puVar8 + (long)puVar14))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar14) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar14))[1] = uVar2;
                puVar14 = puVar14 + 8;
              } while (puVar27 != puVar14);
              if (local_58 == puVar27) goto LAB_10013293;
              puVar14 = puVar27;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10013224;
            }
            puVar27 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_48 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_58 == puVar27) goto LAB_10013293;
          }
LAB_10013224:
          lVar9 = 0x58 - (long)puVar27;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + (long)puVar27);
              puVar27 = (uint *)((long)puVar27 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_58 != puVar27);
          }
        }
LAB_10013293:
        recovered_10008050(local_48);
      }
      *(char *)((long)puVar8 + 0x59 + (long)puVar32) = (char)local_70;
      *(char *)((long)puVar8 + 0x5a + (long)puVar32) = (char)local_b0;
      *(char *)((long)puVar8 + 0x5b + (long)puVar32) = (char)local_90;
      *(char *)((long)(puVar8 + 0x17) + (long)puVar32) = (char)local_78;
      puVar32 = (uint *)((long)puVar32 + 0x61);
      local_70 = puVar32;
      if (local_38 < puVar32) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar32);
        local_138 = 0x21;
        local_1c8 = puVar8;
        local_b0 = puVar8;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar10 = local_50;
        puVar16 = local_58;
        puVar32 = local_70;
        if (local_50 != (uint *)0x0) {
          puVar27 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_b0))) {
            if (local_50 < (uint *)0x20) {
              puVar14 = (uint *)0x0;
            }
            else {
              puVar27 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar14 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_b0 + (long)puVar14))[1];
                uVar1 = *(undefined8 *)((long)(local_b0 + 4) + (long)puVar14);
                uVar2 = ((undefined8 *)((long)(local_b0 + 4) + (long)puVar14))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar14) =
                     *(undefined8 *)((long)local_b0 + (long)puVar14);
                ((undefined8 *)((long)puVar8 + (long)puVar14))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar14) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar14))[1] = uVar2;
                puVar14 = puVar14 + 8;
              } while (puVar27 != puVar14);
              if (local_50 == puVar27) goto LAB_1001342b;
              puVar14 = puVar27;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_100133c4;
            }
            puVar27 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_b0 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_50 == puVar27) goto LAB_1001342b;
          }
LAB_100133c4:
          lVar9 = 0x5c - (long)puVar27;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + (long)puVar27);
              puVar27 = (uint *)((long)puVar27 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + 1 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + 2 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + 3 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_50 != puVar27);
          }
        }
LAB_1001342b:
        recovered_10008050(local_b0);
      }
      *(char *)((long)puVar8 + (long)puVar10) = (char)local_c8;
      *(char *)((long)puVar8 + 5 + (long)puVar16) = (char)local_c0;
      *(char *)((long)puVar8 + 6 + (long)puVar16) = (char)local_d0;
      *(char *)((long)puVar8 + 7 + (long)puVar16) = (char)local_60;
      local_148 = puVar8;
      if (local_88 == (uint *)0x0) {
        local_d8 = (void *)0x0;
        uVar18 = local_78;
        puVar10 = local_a8;
      }
      else {
        local_138 = 0x22;
        local_e8 = (void *)recovered_10007ff0((long)local_88 * 8);
        puVar10 = (uint *)0x0;
        recovered_10008050((void *)0x0);
        if (local_88 < (uint *)0x4) goto LAB_10013ec0;
        puVar10 = (uint *)(ulong)((uint)local_88 & 0x3ffffffc);
        puVar8 = (uint *)0x0;
        do {
          puVar7 = (undefined8 *)((long)local_e8 + (long)(uintptr_t)puVar8 * 8);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7 = (undefined8 *)((long)local_e8 + (long)(uintptr_t)puVar8 * 8 + 0x10);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar8 = puVar8 + 1;
        } while (puVar10 != puVar8);
        for (; local_88 != puVar10; puVar10 = (uint *)((long)puVar10 + 1)) {
LAB_10013ec0:
          *(undefined8 *)((long)local_e8 + (long)(uintptr_t)puVar10 * 8) = 0;
        }
        local_d0 = local_40 + 0x18;
        local_58 = (uint *)(ulong)((byte)((char)local_40 + 1) & 3);
        puVar14 = (uint *)0x0;
        puVar27 = local_88;
        puVar8 = local_148;
        uVar18 = local_78;
        puVar10 = local_a8;
        puVar16 = local_70;
        do {
          *(uint **)((long)local_e8 + (long)(uintptr_t)puVar14 * 8) = puVar16;
          puVar32 = puVar16 + 1;
          local_a0 = puVar8;
          if (local_38 < puVar32) {
            local_c0 = (uint *)((ulong)puVar16 & 0xfffffffffffffffc);
            local_90 = (uint *)((ulong)puVar16 & 0xffffffffffffffe0);
            local_c8 = local_d0 + (long)puVar14;
            puVar10 = local_38;
            if (local_38 == (uint *)0x0) {
              puVar10 = (uint *)0x4;
            }
            do {
              local_38 = puVar10;
              puVar10 = (uint *)((long)local_38 * 2);
            } while (local_38 < puVar32);
            local_138 = 0x24;
            local_b0 = puVar14;
            local_70 = puVar16;
            local_40 = puVar32;
            puVar8 = (uint *)recovered_10007ff0((long)local_38);
            puVar32 = local_40;
            puVar16 = local_70;
            puVar10 = local_a8;
            if (local_70 != (uint *)0x0) {
              if (local_70 < (uint *)0x4) {
                puVar27 = (uint *)0x0;
              }
              else {
                puVar27 = (uint *)0x0;
                if (0x1f < (ulong)((long)puVar8 - (long)local_a0)) {
                  if (local_70 < (uint *)0x20) {
                    puVar27 = (uint *)0x0;
                  }
                  else {
                    puVar27 = (uint *)0x0;
                    do {
                      uVar13 = ((undefined8 *)((long)local_a0 + (long)puVar27))[1];
                      uVar1 = *(undefined8 *)((long)(local_a0 + 4) + (long)puVar27);
                      uVar2 = ((undefined8 *)((long)(local_a0 + 4) + (long)puVar27))[1];
                      *(undefined8 *)((long)puVar8 + (long)puVar27) =
                           *(undefined8 *)((long)local_a0 + (long)puVar27);
                      ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                      *(undefined8 *)((long)(puVar8 + 4) + (long)puVar27) = uVar1;
                      ((undefined8 *)((long)(puVar8 + 4) + (long)puVar27))[1] = uVar2;
                      puVar27 = puVar27 + 8;
                    } while (local_90 != puVar27);
                    if (local_70 == local_90) goto LAB_10013f00;
                    puVar27 = local_90;
                    if (((ulong)local_70 & 0x1c) == 0) goto LAB_1001409f;
                  }
                  do {
                    *(undefined4 *)((long)puVar8 + (long)puVar27) =
                         *(undefined4 *)((long)local_a0 + (long)puVar27);
                    puVar27 = puVar27 + 1;
                  } while (local_c0 != puVar27);
                  puVar27 = local_c0;
                  if (local_70 == local_c0) goto LAB_10013f00;
                }
              }
LAB_1001409f:
              puVar14 = puVar27;
              if (((ulong)local_70 & 3) != 0) {
                puVar23 = local_58;
                do {
                  *(undefined1 *)((long)puVar8 + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + (long)puVar14);
                  puVar14 = (uint *)((long)puVar14 + 1);
                  puVar23 = (uint *)((long)puVar23 - 1);
                } while (puVar23 != (uint *)0x0);
              }
              if (2 < (ulong)((long)local_c8 - (long)puVar27)) {
                do {
                  *(undefined1 *)((long)puVar8 + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + (long)puVar14);
                  *(undefined1 *)((long)puVar8 + 1 + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + 1 + (long)puVar14);
                  *(undefined1 *)((long)puVar8 + 2 + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + 2 + (long)puVar14);
                  *(undefined1 *)((long)puVar8 + 3 + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + 3 + (long)puVar14);
                  puVar14 = puVar14 + 1;
                } while (local_70 != puVar14);
              }
            }
LAB_10013f00:
            recovered_10008050(local_a0);
            puVar27 = local_88;
            puVar14 = local_b0;
            uVar18 = local_78;
          }
          *(undefined4 *)((long)puVar8 + (long)puVar16) = 0;
          puVar14 = (uint *)((long)puVar14 + 1);
          local_d8 = local_e8;
          puVar16 = puVar32;
        } while (puVar14 != puVar27);
      }
      local_50 = puVar32 + 1;
      puVar16 = local_50;
      local_98 = puVar8;
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x23;
        local_40 = puVar32;
        puVar8 = (uint *)recovered_10007ff0((long)local_38);
        puVar32 = local_40;
        puVar10 = local_a8;
        if (local_40 != (uint *)0x0) {
          puVar16 = (uint *)0x0;
          if (((uint *)0x3 < local_40) && (0x1f < (ulong)((long)puVar8 - (long)local_98))) {
            if (local_40 < (uint *)0x20) {
              puVar27 = (uint *)0x0;
            }
            else {
              puVar16 = (uint *)((ulong)local_40 & 0xffffffffffffffe0);
              puVar27 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_98 + (long)puVar27))[1];
                uVar1 = *(undefined8 *)((long)(local_98 + 4) + (long)puVar27);
                uVar2 = ((undefined8 *)((long)(local_98 + 4) + (long)puVar27))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar27) =
                     *(undefined8 *)((long)local_98 + (long)puVar27);
                ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar27) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar27))[1] = uVar2;
                puVar27 = puVar27 + 8;
              } while (puVar16 != puVar27);
              if (local_40 == puVar16) goto LAB_10013697;
              puVar27 = puVar16;
              if (((ulong)local_40 & 0x1c) == 0) goto LAB_1001361b;
            }
            puVar16 = (uint *)((ulong)local_40 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_98 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar16 != puVar27);
            if (local_40 == puVar16) goto LAB_10013697;
          }
LAB_1001361b:
          uVar18 = (ulong)local_40 & 3;
          puVar27 = puVar16;
          if (uVar18 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + (long)puVar27);
              puVar27 = (uint *)((long)puVar27 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if ((ulong)((long)puVar16 - (long)local_40) < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + 1 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + 2 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + 3 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_40 != puVar27);
          }
        }
LAB_10013697:
        recovered_10008050(local_98);
        uVar18 = local_78;
        puVar16 = local_50;
      }
      *(undefined4 *)((long)puVar8 + (long)puVar32) = 0;
      puVar32 = (uint *)(uVar18 & 0xffffffff);
      local_200 = (uint *)0x1;
      if (1 < (uint)local_180) {
        local_200 = (uint *)(local_180 & 0xffffffff);
      }
      lVar9 = (long)(uintptr_t)puVar32 * 4;
      local_150 = (ulong)((int)local_150 + (uint)((int)local_150 == 0));
      local_208 = local_60 & 0xffffffff;
      local_1d8 = (long)(uintptr_t)puVar32 * 0x100;
      local_1e0 = (long)puVar32 * -0x100;
      local_230 = (long)puVar32 * -4;
      puVar27 = local_158 + 4;
      uVar19 = 0;
      uVar31 = local_60;
      local_228 = lVar9;
      local_1a8 = puVar32;
      do {
        local_1f8 = local_1e0 * uVar19;
        uVar30 = 0x40;
        if ((uint)uVar31 < 0x40) {
          uVar30 = (uint)uVar31;
        }
        puVar23 = (uint *)(ulong)(uVar30 + (uVar30 == 0));
        local_210 = uVar19 * local_180;
        local_c0 = (uint *)(uVar19 << 6);
        uVar20 = uVar18 & 0xffffffff;
        puVar14 = (uint *)0x0;
        local_1f0 = puVar27;
        local_1e8 = uVar19;
        local_190 = puVar10;
        local_188 = puVar27;
        local_168 = puVar23;
        local_a8 = puVar10;
        local_60 = uVar31;
        do {
          local_174 = (int)uVar20;
          if (0x3f < uVar20) {
            uVar20 = 0x40;
          }
          local_d0 = (uint *)CONCAT44(PF_PART4(local_d0, 4),(int)(uintptr_t)puVar14 * 0x40);
          local_178 = (int)uVar18 + (int)puVar14 * -0x40;
          uVar30 = 0x40;
          if (local_178 < 0x40) {
            uVar30 = local_178;
          }
          lVar17 = *(long *)((long)local_d8 + (local_210 + (long)puVar14) * 8);
          if ((uint *)(lVar17 + 4U) <= puVar16) {
            uVar15 = (uint)puVar16;
            *(uint *)((long)puVar8 + lVar17) =
                 uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18
            ;
          }
          puVar10 = local_a8;
          if (local_c0 != (uint *)local_208) {
            uVar15 = (int)uVar20 * 4;
            local_70 = (uint *)(ulong)uVar15;
            local_218 = (ulong)(uVar15 & 0x1e0);
            local_1a0 = (ulong)(uVar30 << 2);
            local_58 = local_158 + (long)(uintptr_t)puVar14 * 0x40;
            local_238 = local_1f8 - (long)local_58;
            puVar27 = (uint *)((long)puVar14 << 6);
            uVar15 = (int)uVar18 - (int)puVar27;
            if (0x3f < uVar15) {
              uVar15 = 0x40;
            }
            local_220 = (long)local_70 + -1;
            local_b0 = (uint *)(ulong)(uVar15 << 2);
            local_160 = (uint *)(ulong)(uVar30 << 2 & 0x1e0);
            puVar12 = (uint *)0x0;
            puVar22 = local_188;
            puVar28 = local_190;
            local_198 = uVar20;
            local_b8 = puVar27;
            local_48 = puVar14;
            local_40 = puVar16;
            do {
              local_80 = puVar8;
              if (puVar27 != puVar32) {
                local_c8 = puVar22;
                local_90 = puVar12;
                if (local_38 < (uint *)((long)local_b0 + (long)local_40)) {
                  if (local_38 == (uint *)0x0) {
                    local_38 = (uint *)0x4;
                  }
                  puVar10 = local_38;
                  do {
                    local_38 = puVar10;
                    puVar10 = (uint *)((long)local_38 * 2);
                  } while (local_38 < (uint *)((long)local_b0 + (long)local_40));
                  local_138 = 0x26;
                  local_88 = puVar28;
                  local_50 = puVar16;
                  puVar8 = (uint *)recovered_10007ff0((long)local_38);
                  puVar16 = local_50;
                  lVar9 = local_228;
                  if (local_50 != (uint *)0x0) {
                    if (local_50 < (uint *)0x4) {
                      puVar10 = (uint *)0x0;
                    }
                    else {
                      puVar10 = (uint *)0x0;
                      if (0x1f < (ulong)((long)puVar8 - (long)local_80)) {
                        if (local_50 < (uint *)0x20) {
                          puVar32 = (uint *)0x0;
                        }
                        else {
                          puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
                          puVar32 = (uint *)0x0;
                          do {
                            uVar13 = ((undefined8 *)((long)local_80 + (long)puVar32))[1];
                            uVar1 = *(undefined8 *)((long)(local_80 + 4) + (long)puVar32);
                            uVar2 = ((undefined8 *)((long)(local_80 + 4) + (long)puVar32))[1];
                            *(undefined8 *)((long)puVar8 + (long)puVar32) =
                                 *(undefined8 *)((long)local_80 + (long)puVar32);
                            ((undefined8 *)((long)puVar8 + (long)puVar32))[1] = uVar13;
                            *(undefined8 *)((long)(puVar8 + 4) + (long)puVar32) = uVar1;
                            ((undefined8 *)((long)(puVar8 + 4) + (long)puVar32))[1] = uVar2;
                            puVar32 = puVar32 + 8;
                          } while (puVar10 != puVar32);
                          if (local_50 == puVar10) goto LAB_10013b2b;
                          puVar32 = puVar10;
                          if (((ulong)local_50 & 0x1c) == 0) goto LAB_10013ab8;
                        }
                        puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
                        do {
                          *(undefined4 *)((long)puVar8 + (long)puVar32) =
                               *(undefined4 *)((long)local_80 + (long)puVar32);
                          puVar32 = puVar32 + 1;
                        } while (puVar10 != puVar32);
                        if (local_50 == puVar10) goto LAB_10013b2b;
                      }
                    }
LAB_10013ab8:
                    uVar18 = (ulong)local_50 & 3;
                    puVar32 = puVar10;
                    if (uVar18 != 0) {
                      do {
                        *(undefined1 *)((long)puVar8 + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + (long)puVar32);
                        puVar32 = (uint *)((long)puVar32 + 1);
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    if ((ulong)((long)puVar10 - (long)local_50) < 0xfffffffffffffffd) {
                      do {
                        *(undefined1 *)((long)puVar8 + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + (long)puVar32);
                        *(undefined1 *)((long)puVar8 + 1 + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + 1 + (long)puVar32);
                        *(undefined1 *)((long)puVar8 + 2 + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + 2 + (long)puVar32);
                        *(undefined1 *)((long)puVar8 + 3 + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + 3 + (long)puVar32);
                        puVar32 = puVar32 + 1;
                      } while (local_50 != puVar32);
                    }
                  }
LAB_10013b2b:
                  recovered_10008050(local_80);
                  uVar31 = (long)puVar16 - (long)local_40;
                  puVar14 = local_48;
                  puVar23 = local_168;
                  puVar27 = local_b8;
                  puVar28 = local_88;
                  puVar32 = local_1a8;
                  uVar18 = local_78;
                  puVar10 = local_a8;
                  if (!(puVar16 < local_40 || uVar31 == 0)) {
                    puVar22 = puVar16;
                    if (3 < uVar31) {
                      if (uVar31 < 0x10) {
                        uVar20 = 0;
                      }
                      else {
                        uVar20 = uVar31 & 0xfffffffffffffff0;
                        uVar19 = uVar20;
                        puVar7 = (undefined8 *)((long)puVar8 + (long)puVar16);
                        do {
                          puVar21 = puVar7 + -2;
                          uVar13 = puVar7[-1];
                          puVar7 = (undefined8 *)((long)puVar21 + local_198 * 4);
                          *puVar7 = *puVar21;
                          puVar7[1] = uVar13;
                          uVar19 = uVar19 - 0x10;
                          puVar7 = puVar21;
                        } while (uVar19 != 0);
                        if (uVar31 == uVar20) goto LAB_10013cd0;
                        if ((uVar31 & 0xc) == 0) {
                          puVar22 = (uint *)((long)puVar16 - uVar20);
                          goto LAB_10013c99;
                        }
                      }
                      uVar19 = uVar31 & 0xfffffffffffffffc;
                      puVar22 = (uint *)((long)puVar16 - uVar19);
                      lVar17 = uVar20 - uVar19;
                      puVar26 = (undefined4 *)(((long)puVar16 - uVar20) + (long)puVar8);
                      do {
                        puVar26 = puVar26 + -1;
                        puVar26[local_198] = *puVar26;
                        lVar17 = lVar17 + 4;
                      } while (lVar17 != 0);
                      if (uVar31 == uVar19) goto LAB_10013cd0;
                    }
LAB_10013c99:
                    do {
                      *(undefined1 *)((long)puVar8 + local_220 + (long)puVar22) =
                           *(undefined1 *)((long)puVar8 + -1 + (long)puVar22);
                      puVar22 = (uint *)((long)puVar22 + -1);
                    } while (local_40 < puVar22);
                  }
                }
LAB_10013cd0:
                puVar12 = (uint *)(((long)local_c0 + (long)local_90) * lVar9 + (long)local_58);
                puVar22 = puVar12;
                if ((int)uVar18 == (int)local_d0) {
LAB_10013d16:
                  puVar29 = (undefined1 *)((long)local_40 + (long)puVar8);
                  do {
                    *puVar29 = (char)*puVar22;
                    puVar22 = (uint *)((long)puVar22 + 1);
                    puVar29 = puVar29 + 1;
                  } while (puVar22 != (uint *)((long)puVar12 + (long)local_b0));
                }
                else {
                  if ((ulong)(local_230 * (long)local_90 + local_238 + (long)local_40 + (long)puVar8
                             ) < 0x20) {
                    goto LAB_10013d16;
                  }
                  if (local_178 < 8) {
                    puVar22 = (uint *)0x0;
LAB_10013dd0:
                    do {
                      *(undefined4 *)((long)local_40 + (long)puVar8 + (long)puVar22) =
                           *(undefined4 *)((long)puVar28 + (long)puVar22);
                      puVar22 = puVar22 + 1;
                    } while (local_70 != puVar22);
                  }
                  else {
                    uVar31 = 0;
                    do {
                      puVar7 = (undefined8 *)((long)local_c8 + (uVar31 - 0x10));
                      uVar13 = puVar7[1];
                      uVar1 = *(undefined8 *)((long)local_c8 + uVar31);
                      uVar2 = ((undefined8 *)((long)local_c8 + uVar31))[1];
                      puVar21 = (undefined8 *)((long)local_40 + (long)puVar8 + uVar31);
                      *puVar21 = *puVar7;
                      puVar21[1] = uVar13;
                      puVar7 = (undefined8 *)((long)local_40 + (long)puVar8 + 0x10 + uVar31);
                      *puVar7 = uVar1;
                      puVar7[1] = uVar2;
                      uVar31 = uVar31 + 0x20;
                    } while (local_218 != uVar31);
                    puVar14 = local_48;
                    puVar27 = local_b8;
                    local_88 = puVar28;
                    if ((int)local_160 != (int)local_1a0) {
                      puVar22 = local_160;
                      if ((local_1a0 & 0x1c) == 0) {
                        local_40 = (uint *)((long)local_40 + (long)local_160);
                        puVar22 = (uint *)((long)local_160 + (long)puVar12);
                        goto LAB_10013d16;
                      }
                      goto LAB_10013dd0;
                    }
                  }
                }
                puVar16 = (uint *)((long)puVar16 + (long)local_b0);
                puVar22 = local_c8;
                puVar12 = local_90;
                local_40 = puVar16;
              }
              puVar12 = (uint *)((long)puVar12 + 1);
              puVar22 = (uint *)((long)puVar22 + lVar9);
              puVar28 = (uint *)((long)puVar28 + lVar9);
            } while (puVar12 != puVar23);
          }
          puVar14 = (uint *)((long)puVar14 + 1);
          uVar20 = (ulong)(local_174 - 0x40);
          local_188 = local_188 + 0x40;
          local_190 = local_190 + 0x40;
          local_e0 = puVar8;
        } while (puVar14 != local_200);
        uVar19 = local_1e8 + 1;
        uVar31 = (ulong)((int)local_60 - 0x40);
        puVar27 = (uint *)((long)local_1f0 + local_1d8);
        puVar10 = (uint *)((long)puVar10 + local_1d8);
      } while (uVar19 != local_150);
      local_138 = 0x25;
      local_50 = puVar16;
      puVar10 = recovered_10006c80((long)local_1d0,((uintptr_t)pf_module_state+0x677U));
      if (puVar10 == (uint *)0x0) {
        bVar25 = 0;
      }
      else {
        if (local_50 == (uint *)0x0) {
          uVar6 = (undefined4)CONCAT71((int7)((ulong)puVar10 >> 8),1);
        }
        else {
          local_138 = 0x27;
          local_40 = puVar10;
          puVar10 = (uint *)recovered_10007500((long)local_e0,1,(long)local_50,puVar10);
          uVar6 = (undefined4)CONCAT71((int7)((ulong)puVar10 >> 8),puVar10 == local_50);
          puVar10 = local_40;
        }
        local_70 = (uint *)CONCAT44(PF_PART4(local_70, 4),uVar6);
        local_138 = 0x28;
        uVar13 = recovered_10007100((int *)puVar10);
        bVar25 = (byte)local_70 & (int)uVar13 == 0;
      }
      recovered_10008050(local_d8);
      recovered_10008050(local_e0);
      goto LAB_10013e9b;
    }
  }
  bVar25 = 0;
LAB_10013e9b:
  recovered_10008660(&local_140);
  return bVar25;
}

#undef DAT_1001ad10
#undef DAT_1001b308
#undef LAB_1001412c
#undef UNK_1001ad18
#undef _DAT_1001ad10
#undef str_1001b1e8
#undef uRam000000001001ad18
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
#undef local_174
#undef local_170
#undef local_168
#undef local_160
#undef local_158
#undef local_150
#undef local_148
#undef local_140
#undef local_138
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_100
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
#undef local_40
#undef local_38

#undef DAT_1001b35c
#define DAT_1001b35c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x830U)))
#undef LAB_10014466
#define LAB_10014466 (*(uint8_t *)(0x10014466U))
#define local_b0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 40))
#define auStack_b8 (*(undefined1 (*)[8])(pf_stack_frame + 24))
#define local_90 (*(code * *)(pf_stack_frame + 64))
#define local_88 (*(undefined * *)(pf_stack_frame + 72))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_58 (*(long * *)(pf_stack_frame + 120))
#define local_50 (*(long *)(pf_stack_frame + 128))
#define local_48 (*(void * *)(pf_stack_frame + 136))
#define local_38 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_40 (*(ulong *)(pf_stack_frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014330
 */

long * recovered_10014330(char *param_1)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  void *pvVar2;
  long *plVar3;

  local_80 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 208) + -8);
  local_70 = auStack_b8;
  local_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  local_90 = recovered_10007fa0;
  local_88 = &DAT_1001b35c;
  local_78 = &LAB_10014466;
  recovered_10008640(&local_b0);
  if (param_1 == (char *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    local_a8 = 1;
    uVar1 = recovered_1000e520(param_1,&local_50);
    plVar3 = (long *)0x0;
    if ((((uVar1 != '\0') && (uStack_40 != 0)) && (-1 < (int)local_50)) && (-1 < local_50)) {
      local_a8 = 2;
      local_58 = (long *)recovered_10007ff0(0x20);
      local_58[2] = 0;
      local_58[3] = 0;
      *local_58 = 0;
      local_58[1] = 0;
      *local_58 = local_50;
      local_a8 = 3;
      pvVar2 = (void *)recovered_10008020(uStack_40);
      local_58[1] = (long)pvVar2;
      local_a8 = 4;
      recovered_10001cc0(pvVar2,local_48,uStack_40);
      plVar3 = local_58;
    }
  }
  uStack_40 = 0;
  recovered_10008050(local_48);
  recovered_10008660(&local_b0);
  return plVar3;
}

#undef DAT_1001b35c
#undef LAB_10014466
#undef local_b0
#undef local_a8
#undef auStack_b8
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_58
#undef local_50
#undef local_48
#undef local_38
#undef uStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100144d0
 */

void recovered_100144d0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((long)param_1 + 8) != (void *)0x0) {
    recovered_100080f0(*(void **)((long)param_1 + 8));
  }
  if (*(void **)((long)param_1 + 0x18) != (void *)0x0) {
    recovered_100080f0(*(void **)((long)param_1 + 0x18));
  }
  recovered_10008050(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014510
 */

void recovered_10014510(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;

  param_1[1] = 0;
  if (param_2 <= (ulong)param_1[2]) {
    uVar7 = 0;
    goto LAB_10014684;
  }
  lVar6 = recovered_10007ff0(param_2);
  pvVar2 = (void *)*param_1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    if ((ulong)(lVar6 - (long)pvVar2) < 0x20 || uVar7 < 4) {
      uVar8 = 0;
    }
    else {
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
          *(undefined8 *)(lVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          ((undefined8 *)(lVar6 + uVar9))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar9);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar8 != uVar9);
        if (uVar7 == uVar8) goto LAB_1001464f;
        uVar9 = uVar8;
        if ((uVar7 & 0x1c) == 0) goto LAB_100145e5;
      }
      uVar8 = uVar7 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(lVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_1001464f;
    }
LAB_100145e5:
    uVar10 = uVar7 & 3;
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar8 - uVar7 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        *(undefined1 *)(lVar6 + 1 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        *(undefined1 *)(lVar6 + 2 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        *(undefined1 *)(lVar6 + 3 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar7 != uVar9);
    }
  }
LAB_1001464f:
  recovered_10008050(pvVar2);
  *param_1 = lVar6;
  param_1[2] = param_2;
  uVar7 = param_1[1];
LAB_10014684:
  while (uVar7 < param_2) {
    *(undefined1 *)(*param_1 + uVar7) = *param_3;
    uVar7 = param_1[1] + 1;
    param_1[1] = uVar7;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100146a0
 */

void recovered_100146a0(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return;
  }
  lVar6 = recovered_10007ff0(param_2);
  pvVar2 = (void *)*param_1;
  uVar7 = param_1[1];
  if (uVar7 == 0) goto LAB_100147df;
  if ((ulong)(lVar6 - (long)pvVar2) < 0x20 || uVar7 < 4) {
    uVar8 = 0;
  }
  else {
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
        *(undefined8 *)(lVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
        ((undefined8 *)(lVar6 + uVar9))[1] = uVar3;
        puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar9);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        uVar9 = uVar9 + 0x20;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_100147df;
      uVar9 = uVar8;
      if ((uVar7 & 0x1c) == 0) goto LAB_10014775;
    }
    uVar8 = uVar7 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)(lVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar8 != uVar9);
    if (uVar7 == uVar8) goto LAB_100147df;
  }
LAB_10014775:
  uVar10 = uVar7 & 3;
  uVar9 = uVar8;
  if (uVar10 != 0) {
    do {
      *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (uVar8 - uVar7 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
      *(undefined1 *)(lVar6 + 1 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
      *(undefined1 *)(lVar6 + 2 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
      *(undefined1 *)(lVar6 + 3 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
      uVar9 = uVar9 + 4;
    } while (uVar7 != uVar9);
  }
LAB_100147df:
  recovered_10008050(pvVar2);
  *param_1 = lVar6;
  param_1[2] = param_2;
  uVar7 = param_1[1];
  while (uVar7 < param_2) {
    *(undefined1 *)(*param_1 + uVar7) = 0;
    uVar7 = param_1[1] + 1;
    param_1[1] = uVar7;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014830
 */

uint recovered_10014830(uint pixel,uint mask)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (mask != 0) {
    uVar2 = 0xffffffff;
    do {
      uVar2 = uVar2 + 1;
      if (0x1f < uVar2) break;
    } while ((1 << ((byte)uVar2 & 0x1f) & mask) == 0);
    uVar3 = 0;
    uVar4 = mask;
    do {
      uVar3 = uVar3 + (uVar4 & 1);
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar1);
    uVar4 = ~(-1 << ((byte)uVar3 & 0x1f));
    if (0x1e < uVar3) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 != 0) {
      return ((uVar4 >> 1) + ((mask & pixel) >> ((byte)uVar2 & 0x1f)) * 0xff) / uVar4;
    }
  }
  return 0;
}


#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100148c0
 */

undefined8 recovered_100148c0(undefined8 *param_1,ushort *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;

  uVar6 = *(ulong *)*param_1;
  if (*(ulong *)param_1[1] <= uVar6) {
    return 0;
  }
  PF_PART4(uStack_18, 0) = (undefined4)uVar6;
  uStack_18 = CONCAT44(0xff000000,(undefined4)uStack_18);
  iVar2 = *(int *)param_1[2];
  if (iVar2 == 3) {
    uVar7 = (undefined1)*param_2;
    PF_PART5(uStack_18, 0) = CONCAT14(uVar7,(undefined4)uStack_18);
    PF_PART6(uStack_18, 0) = CONCAT15(uVar7,(undefined5)uStack_18);
    PF_PART7(uStack_18, 0) = CONCAT16(uVar7,(undefined6)uStack_18);
    uStack_18 = (ulong)(uint7)uStack_18;
    uVar7 = 0xff;
    if (*(int *)param_1[3] == 0x10) {
      uVar7 = *(undefined1 *)((long)param_2 + 1);
    }
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        return 0;
      }
      if (*(int *)param_1[3] == 8) {
        uVar4 = (uint)(byte)*param_2;
      }
      else {
        uVar4 = (uint)*param_2;
      }
      uVar5 = uVar4 - *(uint *)param_1[4];
      if (uVar4 < *(uint *)param_1[4]) {
        return 0;
      }
      if (*(uint *)param_1[5] <= uVar5) {
        return 0;
      }
      recovered_10001cc0((void *)((long)&uStack_18 + 4),
                         (void *)((ulong)uVar5 * 4 + *(long *)param_1[6]),4);
      uVar6 = *(ulong *)*param_1;
      goto LAB_1001494a;
    }
    iVar2 = *(int *)param_1[3];
    if (iVar2 == 8) {
      uVar7 = (undefined1)*param_2;
      PF_PART5(uStack_18, 0) = CONCAT14(uVar7,(undefined4)uStack_18);
      PF_PART6(uStack_18, 0) = CONCAT15(uVar7,(undefined5)uStack_18);
    }
    else {
      if (iVar2 - 0xfU < 2) {
        uVar1 = *param_2;
        PF_PART5(uStack_18, 0) =
             CONCAT14((char)((uVar1 >> 10 & 0x1f) * 0x20e7f7 >> 0x12),(undefined4)uStack_18);
        PF_PART6(uStack_18, 0) =
             CONCAT15((char)((uVar1 >> 5 & 0x1f) * 0x20e7f7 >> 0x12),(undefined5)uStack_18);
        PF_PART7(uStack_18, 0) = CONCAT16((char)((uVar1 & 0x1f) * 0x20e7f7 >> 0x12),(undefined6)uStack_18);
        bVar9 = 0xff;
        if (iVar2 == 0x10) {
          bVar9 = -((*(uint *)param_1[7] & 0xf) == 0) | (byte)((uint)(int)(short)uVar1 >> 0xf);
        }
        uStack_18 = CONCAT17(bVar9,(uint7)uStack_18);
        goto LAB_1001494a;
      }
      if (iVar2 == 0x20) {
        PF_PART5(uStack_18, 0) = CONCAT14((char)param_2[1],(undefined4)uStack_18);
        PF_PART6(uStack_18, 0) = CONCAT15(*(undefined1 *)((long)param_2 + 1),(undefined5)uStack_18);
        PF_PART7(uStack_18, 0) = CONCAT16((char)*param_2,(undefined6)uStack_18);
        uStack_18 = (ulong)(uint7)uStack_18;
        uVar7 = *(undefined1 *)((long)param_2 + 3);
        goto LAB_10014947;
      }
      if (iVar2 != 0x18) {
        return 0;
      }
      PF_PART5(uStack_18, 0) = CONCAT14((char)param_2[1],(undefined4)uStack_18);
      PF_PART6(uStack_18, 0) = CONCAT15(*(undefined1 *)((long)param_2 + 1),(undefined5)uStack_18);
      uVar7 = (undefined1)*param_2;
    }
    PF_PART7(uStack_18, 0) = CONCAT16(uVar7,(undefined6)uStack_18);
    uStack_18 = (ulong)(uint7)uStack_18;
    uVar7 = 0xff;
  }
LAB_10014947:
  uStack_18 = CONCAT17(uVar7,(uint7)uStack_18);
LAB_1001494a:
  uVar8 = (ulong)*(uint *)param_1[8];
  if (uVar6 >> 0x20 == 0) {
    uVar4 = (uint)((uVar6 & 0xffffffff) / uVar8);
    uVar5 = (uint)((uVar6 & 0xffffffff) % uVar8);
  }
  else {
    uVar4 = (uint)(uVar6 / uVar8);
    uVar5 = (uint)(uVar6 % uVar8);
  }
  uVar10 = ~uVar5 + *(uint *)param_1[8];
  if ((*(uint *)param_1[7] & 0x10) == 0) {
    uVar10 = uVar5;
  }
  if ((*(uint *)param_1[7] & 0x20) == 0) {
    uVar4 = ~uVar4 + *(int *)param_1[9];
  }
  recovered_10001cc0((void *)(((ulong)uVar10 + uVar4 * uVar8) * 4 + *(long *)param_1[10]),
                     (void *)((long)&uStack_18 + 4),4);
  plVar3 = (long *)*param_1;
  *plVar3 = *plVar3 + 1;
  return CONCAT71((int7)((ulong)plVar3 >> 8),1);
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014b00
 */

undefined4 recovered_10014b00(long param_1,ulong param_2,ulong *param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;

  uVar10 = *param_3;
  if (param_2 - uVar10 < 4 || param_2 < uVar10) {
LAB_10014d8c:
    uVar8 = 0;
  }
  else {
    while( true ) {
      uVar7 = *(uint *)(param_1 + uVar10);
      uVar14 = uVar10 + 4;
      *param_3 = uVar14;
      if (param_2 < uVar14) {
        return 0;
      }
      if (param_2 - uVar14 < 4) {
        return 0;
      }
      uVar12 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = *(uint *)(param_1 + 4 + uVar10);
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar10 = uVar10 + 8;
      *param_3 = uVar10;
      if (uVar12 == 0) break;
      if ((param_2 < uVar10) || (param_2 - uVar10 < (ulong)uVar7)) goto LAB_10014d8c;
      puVar1 = (uint *)(param_1 + uVar10);
      if ((uVar12 == 1) && (3 < uVar7)) {
        uVar12 = *puVar1;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
        ;
        if ((uVar12 < 0x101) && (uVar12 * 3 + 4 <= uVar7)) {
          uVar10 = (ulong)(uVar12 * 3);
          *(undefined8 *)(param_4 + 0x20) = 0;
          if (*(ulong *)(param_4 + 0x28) < uVar10) {
            lVar9 = recovered_10007ff0(uVar10);
            pvVar3 = *(void **)(param_4 + 0x18);
            uVar14 = *(ulong *)(param_4 + 0x20);
            if (uVar14 != 0) {
              if (uVar14 < 4) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                if (0x1f < (ulong)(lVar9 - (long)pvVar3)) {
                  if (uVar14 < 0x20) {
                    uVar13 = 0;
                  }
                  else {
                    uVar11 = uVar14 & 0xffffffffffffffe0;
                    uVar13 = 0;
                    do {
                      uVar4 = ((undefined8 *)((long)pvVar3 + uVar13))[1];
                      puVar2 = (undefined8 *)((long)pvVar3 + uVar13 + 0x10);
                      uVar5 = *puVar2;
                      uVar6 = puVar2[1];
                      *(undefined8 *)(lVar9 + uVar13) = *(undefined8 *)((long)pvVar3 + uVar13);
                      ((undefined8 *)(lVar9 + uVar13))[1] = uVar4;
                      puVar2 = (undefined8 *)(lVar9 + 0x10 + uVar13);
                      *puVar2 = uVar5;
                      puVar2[1] = uVar6;
                      uVar13 = uVar13 + 0x20;
                    } while (uVar11 != uVar13);
                    if (uVar14 == uVar11) goto LAB_10014d1f;
                    uVar13 = uVar11;
                    if ((uVar14 & 0x1c) == 0) goto LAB_10014cb5;
                  }
                  uVar11 = uVar14 & 0xfffffffffffffffc;
                  do {
                    *(undefined4 *)(lVar9 + uVar13) = *(undefined4 *)((long)pvVar3 + uVar13);
                    uVar13 = uVar13 + 4;
                  } while (uVar11 != uVar13);
                  if (uVar14 == uVar11) goto LAB_10014d1f;
                }
              }
LAB_10014cb5:
              uVar15 = uVar14 & 3;
              uVar13 = uVar11;
              if (uVar15 != 0) {
                do {
                  *(undefined1 *)(lVar9 + uVar13) = *(undefined1 *)((long)pvVar3 + uVar13);
                  uVar13 = uVar13 + 1;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              if (uVar11 - uVar14 < 0xfffffffffffffffd) {
                do {
                  *(undefined1 *)(lVar9 + uVar13) = *(undefined1 *)((long)pvVar3 + uVar13);
                  *(undefined1 *)(lVar9 + 1 + uVar13) = *(undefined1 *)((long)pvVar3 + uVar13 + 1);
                  *(undefined1 *)(lVar9 + 2 + uVar13) = *(undefined1 *)((long)pvVar3 + uVar13 + 2);
                  *(undefined1 *)(lVar9 + 3 + uVar13) = *(undefined1 *)((long)pvVar3 + uVar13 + 3);
                  uVar13 = uVar13 + 4;
                } while (uVar14 != uVar13);
              }
            }
LAB_10014d1f:
            recovered_10008050(pvVar3);
            *(long *)(param_4 + 0x18) = lVar9;
            *(ulong *)(param_4 + 0x28) = uVar10;
            uVar14 = *(ulong *)(param_4 + 0x20);
          }
          else {
            uVar14 = 0;
          }
          while (uVar14 < uVar10) {
            *(undefined1 *)(*(long *)(param_4 + 0x18) + uVar14) = 0;
            uVar14 = *(long *)(param_4 + 0x20) + 1;
            *(ulong *)(param_4 + 0x20) = uVar14;
          }
          recovered_10001cc0(*(void **)(param_4 + 0x18),puVar1 + 1,uVar14);
          uVar10 = *param_3;
        }
      }
      else if ((uVar12 == 0x11) && (uVar7 != 0)) {
        *(uint *)(param_4 + 0x14) = (uint)(byte)*puVar1;
      }
      uVar10 = uVar10 + uVar7;
      *param_3 = uVar10;
      if (param_2 < uVar10) {
        return 0;
      }
      if (param_2 - uVar10 < 4) {
        return 0;
      }
    }
    uVar8 = CONCAT31((int3)(uVar7 >> 8),uVar7 == 0);
  }
  return uVar8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014db0
 */

undefined8 recovered_10014db0(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar2 = *param_3;
  if (param_4 == 4) {
    if (param_2 - uVar2 < 4 || param_2 < uVar2) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + uVar2);
    uVar2 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
    ;
  }
  else {
    if (param_2 - uVar2 < 8 || param_2 < uVar2) {
      return 0;
    }
    uVar2 = *(ulong *)(param_1 + uVar2);
    uVar2 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
            (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  }
  *param_5 = uVar2;
  *param_3 = *param_3 + (ulong)param_4;
  return CONCAT71((uint7)(uint3)(param_4 >> 8),1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014e10
 */

void recovered_10014e10(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  uVar8 = param_1[1];
  if (uVar8 != param_1[2]) goto LAB_10014f32;
  uVar12 = 4;
  if (uVar8 != 0) {
    uVar12 = uVar8 * 2;
  }
  if (uVar12 <= uVar8) goto LAB_10014f32;
  lVar7 = recovered_10007ff0(uVar12 * 8);
  pvVar3 = (void *)*param_1;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar9 = 0;
    if ((5 < uVar8) && (0x1f < (ulong)(lVar7 - (long)pvVar3))) {
      uVar9 = uVar8 & 0xfffffffffffffffc;
      uVar10 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar3 + uVar10 * 8);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)((long)pvVar3 + uVar10 * 8 + 0x10);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar7 + uVar10 * 8);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar10 * 8);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        uVar10 = uVar10 + 4;
      } while (uVar9 != uVar10);
      if (uVar8 == uVar9) goto LAB_10014f1f;
    }
    uVar11 = uVar8 & 3;
    uVar10 = uVar9;
    if (uVar11 != 0) {
      do {
        *(undefined8 *)(lVar7 + uVar10 * 8) = *(undefined8 *)((long)pvVar3 + uVar10 * 8);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar9 - uVar8 < 0xfffffffffffffffd) {
      do {
        *(undefined8 *)(lVar7 + uVar10 * 8) = *(undefined8 *)((long)pvVar3 + uVar10 * 8);
        *(undefined8 *)(lVar7 + 8 + uVar10 * 8) = *(undefined8 *)((long)pvVar3 + uVar10 * 8 + 8);
        *(undefined8 *)(lVar7 + 0x10 + uVar10 * 8) =
             *(undefined8 *)((long)pvVar3 + uVar10 * 8 + 0x10);
        *(undefined8 *)(lVar7 + 0x18 + uVar10 * 8) =
             *(undefined8 *)((long)pvVar3 + uVar10 * 8 + 0x18);
        uVar10 = uVar10 + 4;
      } while (uVar8 != uVar10);
    }
  }
LAB_10014f1f:
  recovered_10008050(pvVar3);
  *param_1 = lVar7;
  param_1[2] = uVar12;
  uVar8 = param_1[1];
LAB_10014f32:
  *(undefined8 *)(*param_1 + uVar8 * 8) = *param_2;
  param_1[1] = uVar8 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014f50
 */

void recovered_10014f50(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    uVar7 = 0;
    goto LAB_100150c4;
  }
  lVar6 = recovered_10007ff0(param_2);
  pvVar2 = (void *)*param_1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    if ((ulong)(lVar6 - (long)pvVar2) < 0x20 || uVar7 < 4) {
      uVar8 = 0;
    }
    else {
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
          *(undefined8 *)(lVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          ((undefined8 *)(lVar6 + uVar9))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar9);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar8 != uVar9);
        if (uVar7 == uVar8) goto LAB_1001508f;
        uVar9 = uVar8;
        if ((uVar7 & 0x1c) == 0) goto LAB_10015025;
      }
      uVar8 = uVar7 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(lVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_1001508f;
    }
LAB_10015025:
    uVar10 = uVar7 & 3;
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar8 - uVar7 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        *(undefined1 *)(lVar6 + 1 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        *(undefined1 *)(lVar6 + 2 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        *(undefined1 *)(lVar6 + 3 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar7 != uVar9);
    }
  }
LAB_1001508f:
  recovered_10008050(pvVar2);
  *param_1 = lVar6;
  param_1[2] = param_2;
  uVar7 = param_1[1];
LAB_100150c4:
  while (uVar7 < param_2) {
    *(undefined1 *)(*param_1 + uVar7) = *param_3;
    uVar7 = param_1[1] + 1;
    param_1[1] = uVar7;
  }
  return;
}


#undef DAT_1001ac00
#define DAT_1001ac00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
#undef DAT_1001ac40
#define DAT_1001ac40 (*(float *)(((uintptr_t)pf_module_state + 0x114U)))
#undef DAT_1001ada0
#define DAT_1001ada0 (*(float *)(((uintptr_t)pf_module_state + 0x274U)))
#define local_50 (*(ulong *)(pf_stack_frame + 16))
#define local_48 (*(float (*)[2])(pf_stack_frame + 24))
#define local_40 (*(long *)(pf_stack_frame + 32))
#define local_38 (*(ulong *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100150e0
 */

/* WARNING: Type propagation algorithm not settling */

uchar recovered_100150e0(long param_1,ulong param_2,long param_3,ulong param_4,uint *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;

  if (param_2 - param_4 < 4 || param_2 < param_4) {
    return '\0';
  }
  uVar1 = *(uint *)(param_1 + param_4);
  *param_5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (param_2 - (param_4 + 4) < 4 || param_2 < param_4 + 4) {
    return '\0';
  }
  uVar1 = *(uint *)(param_1 + 4 + param_4);
  param_5[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (param_2 - (param_4 + 8) < 4 || param_2 < param_4 + 8) {
    return '\0';
  }
  uVar1 = *(uint *)(param_1 + 8 + param_4);
  param_5[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (param_2 - (param_4 + 0xc) < 4 || param_2 < param_4 + 0xc) {
    return '\0';
  }
  uVar1 = *(uint *)(param_1 + 0xc + param_4);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar3 = param_4 + 0x10;
  if (uVar1 != 0) {
    if (param_2 < uVar3) {
      return '\0';
    }
    if (param_2 - uVar3 < (ulong)uVar1) {
      return '\0';
    }
    uVar3 = uVar3 + uVar1;
  }
  if (param_2 - uVar3 < 4 || param_2 < uVar3) {
    return '\0';
  }
  while( true ) {
    if (param_2 < uVar3 + 4) {
      return '\0';
    }
    if (param_2 - (uVar3 + 4) < 4) {
      return '\0';
    }
    uVar1 = *(uint *)(param_1 + uVar3);
    uVar5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)(param_1 + 4 + uVar3);
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar3 = uVar3 + 8;
    if (uVar5 == 0) break;
    if (param_2 < uVar3) {
      return '\0';
    }
    if (param_2 - uVar3 < (ulong)uVar1) {
      return '\0';
    }
    if ((uVar5 == 6) && (3 < uVar1)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (0xfe < uVar5) {
        uVar5 = 0xff;
      }
      param_5[4] = uVar5;
    }
    else if ((uVar5 == 8) && (3 < uVar1)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      *(bool *)(param_5 + 3) =
           ((uVar5 >> 0x18 != 0 || (uVar5 & 0xff0000) != 0) || (uVar5 & 0xff00) != 0) ||
           (uVar5 & 0xff) != 0;
    }
    else if ((uVar5 == 0xf) && (7 < uVar1)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      param_5[5] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar5 = *(uint *)(param_1 + 4 + uVar3);
      param_5[6] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    }
    else if ((uVar5 == 0x21) && (3 < uVar1)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      local_50 = CONCAT44(PF_PART4(local_50, 4),
                          uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18);
      local_48[0] = 0.0;
      local_40 = param_3;
      local_38 = uVar3;
      recovered_10001cc0(local_48,&local_50,4);
      if (local_48[0] <= 0.0) {
        param_5[4] = 0;
      }
      else if (DAT_1001ac40 <= local_48[0]) {
        param_5[4] = 0xff;
      }
      else {
        param_5[4] = (uint)(long)((double)(local_48[0] * DAT_1001ada0) +
                                 *(double *)
                                  (&DAT_1001ac00 + (ulong)(0.0 <= local_48[0] * DAT_1001ada0) * 8));
      }
      uVar3 = local_38;
      param_3 = local_40;
    }
    uVar3 = uVar3 + uVar1;
    if (param_2 < uVar3) {
      return '\0';
    }
    if (param_2 - uVar3 < 4) {
      return '\0';
    }
  }
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    if ((ulong)uVar1 == 4) {
      if (param_2 - uVar3 < 4 || param_2 < uVar3) {
        return '\0';
      }
      uVar5 = *(uint *)(param_1 + uVar3);
      uVar4 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                     uVar5 << 0x18);
    }
    else {
      if (param_2 - uVar3 < 8 || param_2 < uVar3) {
        return '\0';
      }
      uVar4 = *(ulong *)(param_1 + uVar3);
      uVar4 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
              | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18
              | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
    }
    *(ulong *)(param_5 + 8) = uVar4;
    local_50 = uVar3 + uVar1;
    uVar2 = recovered_10014db0(param_1,param_2,&local_50,uVar1,(ulong *)local_48);
    if ((char)uVar2 != '\0') {
      return uVar4 != 0 && (param_5[1] != 0 && *param_5 != 0);
    }
  }
  return '\0';
}

#undef DAT_1001ac00
#undef DAT_1001ac40
#undef DAT_1001ada0
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef DAT_1001b088
#define DAT_1001b088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55cU)))
#undef DAT_1001b368
#define DAT_1001b368 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83cU)))
#undef LAB_10015be4
#define LAB_10015be4 (*(uint8_t *)(0x10015be4U))
#define auStack_1b8 (*(undefined1 (*)[8])(pf_stack_frame + 24))
#define uStack_90 (*(ulong *)(pf_stack_frame + 320))
#define local_1b0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_1a8 (*(undefined4 *)(pf_stack_frame + 40))
#define uStack_32 (*(undefined1 *)(pf_stack_frame + 414))
#define local_190 (*(code * *)(pf_stack_frame + 64))
#define uStack_31 (*(undefined1 *)(pf_stack_frame + 415))
#define local_188 (*(undefined * *)(pf_stack_frame + 72))
#define local_180 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_178 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_170 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_158 (*(ulong *)(pf_stack_frame + 120))
#define local_150 (*(ulong *)(pf_stack_frame + 128))
#define local_148 (*(ulong *)(pf_stack_frame + 136))
#define local_140 (*(long *)(pf_stack_frame + 144))
#define local_138 (*(ulong *)(pf_stack_frame + 152))
#define local_130 (*(ulong *)(pf_stack_frame + 160))
#define local_128 (*(long *)(pf_stack_frame + 168))
#define local_120 (*(ulong *)(pf_stack_frame + 176))
#define local_118 (*(ulong *)(pf_stack_frame + 184))
#define local_110 (*(void * *)(pf_stack_frame + 192))
#define local_108 (*(ulong *)(pf_stack_frame + 200))
#define local_f8 (*(ulong *)(pf_stack_frame + 216))
#define local_f0 (*(long *)(pf_stack_frame + 224))
#define local_e8 (*(ulong *)(pf_stack_frame + 232))
#define local_e0 (*(ulong *)(pf_stack_frame + 240))
#define local_d8 (*(ulong *)(pf_stack_frame + 248))
#define local_d0 (*(ulong *)(pf_stack_frame + 256))
#define local_c4 (*(uint *)(pf_stack_frame + 268))
#define local_c0 (*(long * *)(pf_stack_frame + 272))
#define local_b8 (*(uint * *)(pf_stack_frame + 280))
#define local_b0 (*(ulong *)(pf_stack_frame + 288))
#define local_a8 (*(ulong *)(pf_stack_frame + 296))
#define local_a0 (*(ulong *)(pf_stack_frame + 304))
#define local_98 (*(void * *)(pf_stack_frame + 312))
#define local_88 (*(undefined8 *)(pf_stack_frame + 328))
#define local_80 (*(ulong *)(pf_stack_frame + 336))
#define local_78 (*(ulong *)(pf_stack_frame + 344))
#define local_70 (*(ulong *)(pf_stack_frame + 352))
#define local_64 (*(uint *)(pf_stack_frame + 364))
#define local_60 (*(ulong *)(pf_stack_frame + 368))
#define local_58 (*(ulong *)(pf_stack_frame + 376))
#define local_50 (*(long *)(pf_stack_frame + 384))
#define local_48 (*(long *)(pf_stack_frame + 392))
#define local_40 (*(ulong *)(pf_stack_frame + 400))
#define local_34 (*(undefined1 (*)[2])(pf_stack_frame + 412))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100153f0
 */

ulong recovered_100153f0(long param_1,ulong param_2,long param_3,uint *param_4,long *param_5)

{
  unsigned char pf_stack_frame[496] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;

  local_180 = local_34 + 0x2c;
  local_170 = auStack_1b8;
  uVar8 = *(ulong *)(param_4 + 8);
  local_190 = recovered_10007fa0;
  local_188 = &DAT_1001b368;
  local_178 = &LAB_10015be4;
  local_c0 = param_5;
  local_50 = param_3;
  local_48 = param_1;
  recovered_10008640(&local_1b0);
  if (((3 < param_2 - uVar8 && uVar8 <= param_2) &&
      (3 < param_2 - (uVar8 + 4) && uVar8 + 4 <= param_2)) &&
     (3 < param_2 - (uVar8 + 8) && uVar8 + 8 <= param_2)) {
    uVar10 = *(uint *)(local_48 + uVar8);
    uVar17 = *(uint *)(local_48 + 4 + uVar8);
    uVar7 = uVar8 + 0xc;
    if (*(int *)(local_50 + 0x10) == 4) {
      if (3 < param_2 - uVar7 && uVar7 <= param_2) {
        uVar12 = *(uint *)(local_48 + uVar7);
        uVar7 = (ulong)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                       uVar12 << 0x18);
LAB_10015524:
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        if (uVar10 == *param_4) {
          uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                   uVar17 << 0x18;
          puVar9 = (uint *)0x0;
          if ((uVar17 != param_4[1]) || (uVar7 == 0)) goto LAB_10015728;
          if ((ulong)param_4[2] < 6) {
            uVar11 = (ulong)*(byte *)(local_48 + 8 + uVar8) * 0x1000000;
            uVar6 = (ulong)*(byte *)(local_48 + 9 + uVar8) * 0x10000;
            uVar15 = (uint)*(byte *)(local_48 + 10 + uVar8) << 8;
            uVar13 = (uint)*(byte *)(local_48 + 0xb + uVar8);
            uVar12 = (int)uVar6 + (int)uVar11 | uVar15 | uVar13;
            if (((uVar12 == *(uint *)(&DAT_1001b088 + (ulong)param_4[2] * 4)) &&
                (3 < param_2 - uVar7 && uVar7 <= param_2)) &&
               (3 < param_2 - (uVar7 + 4) && uVar7 + 4 <= param_2)) {
              uVar1 = *(uint *)(local_48 + uVar7);
              uVar2 = *(uint *)(local_48 + 4 + uVar7);
              local_118 = uVar7 + 8;
              puVar9 = (uint *)0x0;
              if (((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                   == uVar10) &&
                 ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                  == uVar17)) {
                local_40 = CONCAT44(PF_PART4(local_40, 4),uVar15);
                local_58 = CONCAT44(PF_PART4(local_58, 4),uVar13);
                local_c4 = uVar10 + 0x3f;
                local_e0 = (ulong)(local_c4 >> 6);
                local_60 = CONCAT44(PF_PART4(local_60, 4),uVar17 + 0x3f);
                local_130 = (ulong)(uVar17 + 0x3f >> 6);
                uVar8 = local_130 * local_e0;
                local_1a8 = 0xffffffff;
                local_80 = uVar6;
                local_78 = uVar11;
                local_70 = param_2;
                local_64 = uVar12;
                recovered_10015d70((long *)&local_110,uVar8);
                if (uVar8 != 0) {
                  lVar18 = 0;
                  do {
                    uVar5 = recovered_10014db0(local_48,local_70,&local_118,
                                               *(uint *)(local_50 + 0x10),
                                               (ulong *)((long)local_110 + lVar18));
                    if (((char)uVar5 == '\0') || (*(long *)((long)local_110 + lVar18) == 0))
                    goto LAB_10015bc6;
                    lVar18 = lVar18 + 8;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
                local_f8 = 0;
                uVar5 = recovered_10014db0(local_48,local_70,&local_118,*(uint *)(local_50 + 0x10),
                                           &local_f8);
                puVar9 = (uint *)0x0;
                if (((char)uVar5 != '\0') && (local_f8 == 0)) {
                  local_b8 = param_4;
                  if ((ulong)param_4[1] * (ulong)*param_4 >> 0x3e == 0) {
                    local_98 = (void *)((ulong)local_98 & 0xffffffffffffff00);
                    local_1a8 = 1;
                    recovered_10014510(local_c0,(ulong)param_4[1] * (ulong)*param_4 * 4,
                                       (undefined1 *)&local_98);
                    if (0x3f < (uint)local_60) {
                      local_120 = (ulong)local_64;
                      local_78 = (ulong)(uint)((int)local_78 + (int)local_80 + (int)local_40 +
                                              (int)local_58);
                      local_d0 = 0;
                      local_a0 = 0;
                      uVar8 = local_70;
                      puVar9 = local_b8;
                      do {
                        if (0x3f < local_c4) {
                          local_128 = local_a0 * local_e0;
                          local_d8 = local_a0 << 6;
                          local_a8 = 0;
                          local_f0 = 0;
                          uVar7 = 0;
                          do {
                            lVar18 = local_128 + uVar7;
                            uVar11 = *(ulong *)((long)local_110 + lVar18 * 8);
                            uVar6 = uVar8 - uVar11;
                            if (uVar8 < uVar11 || uVar6 == 0) goto LAB_10015bc6;
                            local_e8 = (ulong)*puVar9;
                            local_60 = (ulong)puVar9[1];
                            local_150 = uVar7 << 6;
                            uVar10 = *puVar9 - (int)local_150;
                            local_80 = (ulong)uVar10;
                            if (0x3f < uVar10) {
                              local_80 = 0x40;
                            }
                            uVar10 = puVar9[1] - (int)local_d8;
                            if (0x3f < uVar10) {
                              uVar10 = 0x40;
                            }
                            uVar8 = uVar6;
                            if ((lVar18 + 1U < local_108) &&
                               (uVar16 = *(ulong *)((long)local_110 + lVar18 * 8 + 8),
                               uVar8 = uVar16 - uVar11, uVar16 < uVar11 || uVar8 == 0)) {
                              uVar8 = uVar6;
                            }
                            uVar16 = (uVar10 * (int)local_80) * local_120;
                            local_98 = (void *)0x0;
                            uStack_90 = 0;
                            local_88 = 0;
                            iVar3 = *(int *)(local_50 + 0x14);
                            local_58 = CONCAT44(PF_PART4(local_58, 4),uVar10);
                            local_138 = uVar7;
                            if (iVar3 == 2) {
                              if (lVar18 + 1U < local_108) {
                                local_1a8 = 4;
                                local_40 = uVar16;
                                uVar8 = recovered_100164a0((undefined1 *)(uVar11 + local_48),uVar8,
                                                           (long *)&local_98);
                                if (((byte)uVar8 & uStack_90 == local_40) == 1) goto LAB_1001599b;
                              }
LAB_10015baf:
                              uStack_90 = 0;
                              recovered_10008050(local_98);
                              goto LAB_10015bc6;
                            }
                            if (iVar3 == 1) {
                              local_1a8 = 3;
                              uVar8 = recovered_10015ef0(uVar11 + local_48,uVar8,
                                                         uVar10 * (int)local_80,local_64,
                                                         (long *)&local_98);
                              if ((char)uVar8 == '\0') goto LAB_10015baf;
                            }
                            else {
                              if ((iVar3 != 0) || (uVar6 < uVar16)) goto LAB_10015baf;
                              local_1a8 = 2;
                              recovered_10016690((long *)&local_98,0,
                                                 (undefined1 *)(uVar11 + local_48),
                                                 (undefined1 *)(uVar11 + local_48) + uVar16);
                            }
LAB_1001599b:
                            puVar9 = local_b8;
                            if (local_d8 != local_60) {
                              local_148 = local_58 & 0xffffffff;
                              uVar8 = (ulong)(uint)((int)local_e8 + (int)local_a8);
                              if (0x3f < uVar8) {
                                uVar8 = 0x40;
                              }
                              local_140 = uVar8 * local_78;
                              local_b0 = 0;
                              local_40 = local_d0;
                              uVar8 = 0;
                              plVar14 = local_c0;
                              do {
                                local_158 = uVar8;
                                if (local_150 != local_e8) {
                                  uVar7 = 0;
                                  uVar8 = local_b0;
                                  do {
                                    uVar10 = puVar9[2];
                                    PF_PART3(local_34,0) = 0;
                                    uVar17 = 0xff;
                                    if (uVar10 < 6) {
                                      if ((3U >> (uVar10 & 0x1f) & 1) == 0) {
                                        if ((0xcU >> (uVar10 & 0x1f) & 1) == 0) {
                                          if ((ulong)*(byte *)((long)local_98 + uVar8) * 3 + 2 <
                                              *(ulong *)(local_50 + 0x20)) {
                                            lVar4 = (ulong)*(byte *)((long)local_98 + uVar8) * 3;
                                            lVar18 = *(long *)(local_50 + 0x18);
                                            PF_PART2(local_34,0) = (uint16_t)
                                                       CONCAT11(*(undefined1 *)(lVar18 + 1 + lVar4),
                                                                *(undefined1 *)(lVar18 + lVar4));
                                            PF_PART3(local_34,0) = CONCAT12(*(undefined1 *)(lVar18 + 2 + lVar4)
                                                                 ,local_34);
                                          }
                                          lVar18 = 1;
                                          if (uVar10 == 5) goto LAB_10015ad7;
                                        }
                                        else {
                                          PF_PART2(local_34,0) = (uint16_t)
                                                     CONCAT11(*(undefined1 *)
                                                               ((long)local_98 + uVar8),
                                                              *(undefined1 *)
                                                               ((long)local_98 + uVar8));
                                          PF_PART3(local_34,0) = CONCAT12(*(undefined1 *)
                                                                ((long)local_98 + uVar8),local_34);
                                          lVar18 = 1;
                                          if (uVar10 == 3) {
LAB_10015ad7:
                                            uVar17 = (uint)*(byte *)((long)local_98 + uVar8 + lVar18
                                                                    );
                                          }
                                        }
                                      }
                                      else {
                                        PF_PART2(local_34,0) = (uint16_t)
                                                   CONCAT11(*(undefined1 *)
                                                             ((long)local_98 + uVar8 + 1),
                                                            *(undefined1 *)((long)local_98 + uVar8));
                                        PF_PART3(local_34,0) = CONCAT12(*(undefined1 *)
                                                              ((long)local_98 + uVar8 + 2),local_34)
                                        ;
                                        lVar18 = 3;
                                        if (uVar10 == 1) goto LAB_10015ad7;
                                      }
                                    }
                                    PF_PART4(local_34,0) = CONCAT13((char)((uVar17 * puVar9[4] + 0x7f) / 0xff),
                                                         PF_PART3(local_34,0));
                                    local_1a8 = 5;
                                    local_60 = uVar8;
                                    local_58 = uVar7;
                                    recovered_10001cc0((void *)((*puVar9 * local_40 +
                                                                local_f0 + uVar7) * 4 + *plVar14),
                                                       local_34,4);
                                    uVar7 = local_58 + 1;
                                    uVar8 = local_60 + local_78;
                                    puVar9 = local_b8;
                                    plVar14 = local_c0;
                                  } while (uVar7 < local_80);
                                }
                                uVar8 = local_158 + 1;
                                local_40 = local_40 + 1;
                                local_b0 = local_b0 + local_140;
                              } while (uVar8 < local_148);
                            }
                            uStack_90 = 0;
                            recovered_10008050(local_98);
                            uVar7 = local_138 + 1;
                            local_f0 = local_f0 + 0x40;
                            local_a8 = (ulong)((int)local_a8 - 0x40);
                            uVar8 = local_70;
                          } while (uVar7 != local_e0);
                        }
                        local_a0 = local_a0 + 1;
                        local_d0 = local_d0 + 0x40;
                      } while (local_a0 != local_130);
                    }
                    puVar9 = (uint *)CONCAT71((int7)((ulong)puVar9 >> 8),1);
                  }
                  else {
LAB_10015bc6:
                    puVar9 = (uint *)0x0;
                  }
                }
                local_108 = 0;
                recovered_10008050(local_110);
              }
              goto LAB_10015728;
            }
          }
        }
      }
    }
    else if (7 < param_2 - uVar7 && uVar7 <= param_2) {
      uVar7 = *(ulong *)(local_48 + uVar7);
      uVar7 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18
              | (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18
              | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
      goto LAB_10015524;
    }
  }
  puVar9 = (uint *)0x0;
LAB_10015728:
  recovered_10008660(&local_1b0);
  return (ulong)puVar9 & 0xffffffff;
}

#undef DAT_1001b088
#undef DAT_1001b368
#undef LAB_10015be4
#undef auStack_1b8
#undef uStack_90
#undef local_1b0
#undef local_1a8
#undef uStack_32
#undef local_190
#undef uStack_31
#undef local_188
#undef local_180
#undef local_178
#undef local_170
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
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_c4
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015c80
 */

void recovered_10015c80(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  bVar1 = param_2[3];
  if (bVar1 != 0xff) {
    uVar3 = (uint)bVar1;
    if (bVar1 == 0) {
      if (param_1[3] != 0) {
        return;
      }
    }
    else if (param_1[3] != 0) {
      iVar4 = (uVar3 ^ 0xff) * (uint)param_1[3];
      uVar2 = (iVar4 + 0x7fU & 0xffff) / 0xff + uVar3;
      uVar5 = uVar2 >> 1;
      *param_1 = (byte)((*param_2 * uVar3 + uVar5 + ((uint)*param_1 * iVar4 + 0x7f) / 0xff) / uVar2)
      ;
      param_1[1] = (byte)(((uint)param_2[1] * (uint)bVar1 + uVar5 +
                          ((uint)param_1[1] * iVar4 + 0x7f) / 0xff) / uVar2);
      param_1[2] = (byte)(((uint)param_2[2] * (uint)bVar1 + uVar5 +
                          ((uint)param_1[2] * iVar4 + 0x7f) / 0xff) / uVar2);
      param_1[3] = (byte)uVar2;
      return;
    }
  }
  recovered_10001cc0(param_1,param_2,4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015d70
 */

void recovered_10015d70(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return;
  }
  lVar8 = recovered_10007ff0(param_2 * 8);
  pvVar4 = (void *)*param_1;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    if ((ulong)(lVar8 - (long)pvVar4) < 0x20 || uVar9 < 6) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar9 & 0xfffffffffffffffc;
      uVar11 = 0;
      do {
        puVar3 = (undefined8 *)((long)pvVar4 + uVar11 * 8);
        uVar5 = puVar3[1];
        puVar2 = (undefined8 *)((long)pvVar4 + uVar11 * 8 + 0x10);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        puVar2 = (undefined8 *)(lVar8 + uVar11 * 8);
        *puVar2 = *puVar3;
        puVar2[1] = uVar5;
        puVar3 = (undefined8 *)(lVar8 + 0x10 + uVar11 * 8);
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        uVar11 = uVar11 + 4;
      } while (uVar10 != uVar11);
      if (uVar9 == uVar10) goto LAB_10015e6f;
    }
    uVar12 = uVar9 & 3;
    uVar11 = uVar10;
    if (uVar12 != 0) {
      do {
        *(undefined8 *)(lVar8 + uVar11 * 8) = *(undefined8 *)((long)pvVar4 + uVar11 * 8);
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (uVar10 - uVar9 < 0xfffffffffffffffd) {
      do {
        *(undefined8 *)(lVar8 + uVar11 * 8) = *(undefined8 *)((long)pvVar4 + uVar11 * 8);
        *(undefined8 *)(lVar8 + 8 + uVar11 * 8) = *(undefined8 *)((long)pvVar4 + uVar11 * 8 + 8);
        *(undefined8 *)(lVar8 + 0x10 + uVar11 * 8) =
             *(undefined8 *)((long)pvVar4 + uVar11 * 8 + 0x10);
        *(undefined8 *)(lVar8 + 0x18 + uVar11 * 8) =
             *(undefined8 *)((long)pvVar4 + uVar11 * 8 + 0x18);
        uVar11 = uVar11 + 4;
      } while (uVar9 != uVar11);
    }
  }
LAB_10015e6f:
  recovered_10008050(pvVar4);
  *param_1 = lVar8;
  param_1[2] = param_2;
  uVar9 = param_1[1];
  uVar10 = param_2 - uVar9;
  if (param_2 < uVar9 || uVar10 == 0) {
    return;
  }
  if (3 < uVar10) {
    uVar11 = uVar10 & 0xfffffffffffffffc;
    lVar1 = lVar8 + uVar9 * 8;
    uVar9 = uVar9 + uVar11;
    uVar12 = 0;
    do {
      puVar3 = (undefined8 *)(lVar1 + uVar12 * 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)(lVar1 + 0x10 + uVar12 * 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      uVar12 = uVar12 + 4;
    } while (uVar11 != uVar12);
    if (uVar10 == uVar11) goto LAB_10015ee0;
  }
  do {
    *(undefined8 *)(lVar8 + uVar9 * 8) = 0;
    uVar9 = uVar9 + 1;
  } while (param_2 != uVar9);
LAB_10015ee0:
  param_1[1] = param_2;
  return;
}


#define local_50 (*(ulong *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015ef0
 */

ulong recovered_10015ef0(long param_1,ulong param_2,uint param_3,uint param_4,long *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  void *pvVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ushort uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  bool bVar22;

  uVar19 = (ulong)param_4;
  uVar20 = param_3 * uVar19;
  param_5[1] = 0;
  if (uVar20 <= (ulong)param_5[2]) {
    uVar17 = 0;
    goto LAB_10016072;
  }
  lVar9 = recovered_10007ff0(uVar20);
  pvVar4 = (void *)*param_5;
  uVar17 = param_5[1];
  if (uVar17 != 0) {
    uVar11 = 0;
    if ((3 < uVar17) && (0x1f < (ulong)(lVar9 - (long)pvVar4))) {
      if (uVar17 < 0x20) {
        uVar14 = 0;
      }
      else {
        uVar11 = uVar17 & 0xffffffffffffffe0;
        uVar14 = 0;
        do {
          uVar6 = ((undefined8 *)((long)pvVar4 + uVar14))[1];
          puVar1 = (undefined8 *)((long)pvVar4 + uVar14 + 0x10);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          *(undefined8 *)(lVar9 + uVar14) = *(undefined8 *)((long)pvVar4 + uVar14);
          ((undefined8 *)(lVar9 + uVar14))[1] = uVar6;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + uVar14);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          uVar14 = uVar14 + 0x20;
        } while (uVar11 != uVar14);
        if (uVar17 == uVar11) goto LAB_1001603f;
        uVar14 = uVar11;
        if ((uVar17 & 0x1c) == 0) goto LAB_10015fd5;
      }
      uVar11 = uVar17 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(lVar9 + uVar14) = *(undefined4 *)((long)pvVar4 + uVar14);
        uVar14 = uVar14 + 4;
      } while (uVar11 != uVar14);
      if (uVar17 == uVar11) goto LAB_1001603f;
    }
LAB_10015fd5:
    uVar15 = uVar17 & 3;
    uVar14 = uVar11;
    if (uVar15 != 0) {
      do {
        *(undefined1 *)(lVar9 + uVar14) = *(undefined1 *)((long)pvVar4 + uVar14);
        uVar14 = uVar14 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (uVar11 - uVar17 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)(lVar9 + uVar14) = *(undefined1 *)((long)pvVar4 + uVar14);
        *(undefined1 *)(lVar9 + 1 + uVar14) = *(undefined1 *)((long)pvVar4 + uVar14 + 1);
        *(undefined1 *)(lVar9 + 2 + uVar14) = *(undefined1 *)((long)pvVar4 + uVar14 + 2);
        *(undefined1 *)(lVar9 + 3 + uVar14) = *(undefined1 *)((long)pvVar4 + uVar14 + 3);
        uVar14 = uVar14 + 4;
      } while (uVar17 != uVar14);
    }
  }
LAB_1001603f:
  recovered_10008050(pvVar4);
  *param_5 = lVar9;
  param_5[2] = uVar20;
  uVar17 = param_5[1];
LAB_10016072:
  while (uVar17 < uVar20) {
    *(undefined1 *)(*param_5 + uVar17) = 0;
    uVar17 = param_5[1] + 1;
    param_5[1] = uVar17;
  }
  if (param_4 == 0) {
    local_50 = CONCAT71((int7)(uVar17 >> 8),1);
  }
  else {
    uVar11 = 0;
    local_50 = 0;
    uVar17 = 0;
    uVar20 = param_1 + 2U;
    do {
      bVar22 = param_3 != 0;
      if ((param_3 != 0) && (uVar17 < param_2)) {
        uVar14 = 0;
        do {
          uVar15 = uVar17 + 1;
          bVar2 = *(byte *)(param_1 + uVar17);
          uVar16 = (ulong)bVar2;
          iVar10 = (int)uVar14;
          if (bVar2 < 0x7f) {
            if (param_2 <= uVar15) {
              return local_50;
            }
            uVar20 = (ulong)(param_3 - iVar10);
            if (param_3 - iVar10 <= (uint)bVar2) {
              return local_50;
            }
            uVar16 = uVar16 + 1;
            uVar3 = *(undefined1 *)(param_1 + 1 + uVar17);
            if (bVar2 < 3) {
              uVar15 = 0;
            }
            else {
              uVar15 = 0;
              do {
                iVar13 = (int)uVar14;
                *(undefined1 *)(uVar11 + uVar14 * uVar19 + *param_5) = uVar3;
                *(undefined1 *)(uVar11 + (iVar13 + 1) * uVar19 + *param_5) = uVar3;
                *(undefined1 *)(uVar11 + (iVar13 + 2) * uVar19 + *param_5) = uVar3;
                uVar20 = (iVar13 + 3) * uVar19 + *param_5;
                *(undefined1 *)(uVar11 + uVar20) = uVar3;
                uVar15 = uVar15 + 4;
                uVar14 = (ulong)(iVar13 + 4);
              } while (((uint)uVar16 & 0xfc) != uVar15);
            }
            uVar17 = uVar17 + 2;
            uVar14 = (ulong)((uint)uVar16 & 3);
            if ((uVar16 & 3) != 0) {
              uVar21 = (int)uVar15 + iVar10;
              do {
                uVar20 = uVar21 * uVar19 + *param_5;
                *(undefined1 *)(uVar11 + uVar20) = uVar3;
                uVar21 = uVar21 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
          }
          else if (uVar16 == 0x80) {
            if (param_2 - uVar15 < 2) {
              return local_50;
            }
            uVar12 = *(ushort *)(param_1 + 1 + uVar17);
            uVar5 = uVar12 >> 8;
            uVar12 = uVar12 << 8 | uVar5;
            uVar20 = (ulong)uVar12;
            if (param_3 - iVar10 <= uVar12 - 1) {
              return local_50;
            }
            lVar9 = uVar17 + 3;
            if (param_2 - lVar9 < uVar20) {
              return local_50;
            }
            if (uVar12 == 1) {
              uVar17 = 0;
            }
            else {
              lVar18 = uVar17 + param_1 + 4;
              uVar17 = 0;
              do {
                *(undefined1 *)(uVar11 + (uint)(iVar10 + (int)uVar17) * uVar19 + *param_5) =
                     *(undefined1 *)(lVar18 + -1 + uVar17);
                *(undefined1 *)(uVar11 + (uint)(iVar10 + 1 + (int)uVar17) * uVar19 + *param_5) =
                     *(undefined1 *)(lVar18 + uVar17);
                uVar17 = uVar17 + 2;
              } while ((uVar12 & 0xfffffffe) != uVar17);
            }
            if ((uVar5 & 1) != 0) {
              *(undefined1 *)(uVar11 + (uint)((int)uVar17 + iVar10) * uVar19 + *param_5) =
                   *(undefined1 *)(param_1 + lVar9 + uVar17);
            }
            uVar17 = lVar9 + uVar20;
            uVar16 = uVar20;
          }
          else if (bVar2 == 0x7f) {
            if (param_2 - uVar15 < 3) {
              return local_50;
            }
            uVar12 = *(ushort *)(param_1 + 1 + uVar17);
            uVar5 = uVar12 >> 8;
            uVar12 = uVar12 << 8 | uVar5;
            uVar16 = (ulong)uVar12;
            if (param_3 - iVar10 <= uVar12 - 1) {
              return local_50;
            }
            uVar3 = *(undefined1 *)(param_1 + 3 + uVar17);
            if ((ulong)uVar12 - 1 < 3) {
              uVar20 = 0;
            }
            else {
              uVar20 = 0;
              do {
                iVar13 = (int)uVar14;
                *(undefined1 *)(uVar11 + uVar14 * uVar19 + *param_5) = uVar3;
                *(undefined1 *)(uVar11 + (iVar13 + 1) * uVar19 + *param_5) = uVar3;
                *(undefined1 *)(uVar11 + (iVar13 + 2) * uVar19 + *param_5) = uVar3;
                *(undefined1 *)(uVar11 + (iVar13 + 3) * uVar19 + *param_5) = uVar3;
                uVar20 = uVar20 + 4;
                uVar14 = (ulong)(iVar13 + 4);
              } while ((uVar12 & 0xfffffffc) != uVar20);
            }
            uVar17 = uVar17 + 4;
            uVar14 = (ulong)(uVar12 & 3);
            if ((uVar5 & 3) == 0) {
              uVar20 = uVar16;
            }
            else {
              uVar21 = (int)uVar20 + iVar10;
              do {
                uVar20 = uVar21 * uVar19 + *param_5;
                *(undefined1 *)(uVar11 + uVar20) = uVar3;
                uVar21 = uVar21 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
          }
          else {
            uVar16 = 0x100 - uVar16;
            if (param_3 - iVar10 < (uint)uVar16) {
              return local_50;
            }
            uVar20 = param_2 - uVar15;
            if (uVar20 < uVar16) {
              return local_50;
            }
            if (bVar2 == 0xff) {
              uVar17 = 0;
            }
            else {
              lVar9 = uVar17 + param_1 + 2U;
              uVar17 = 0;
              do {
                *(undefined1 *)(uVar11 + (uint)(iVar10 + (int)uVar17) * uVar19 + *param_5) =
                     *(undefined1 *)(lVar9 + -1 + uVar17);
                uVar20 = (uint)(iVar10 + 1 + (int)uVar17) * uVar19 + *param_5;
                *(undefined1 *)(uVar11 + uVar20) = *(undefined1 *)(lVar9 + uVar17);
                uVar17 = uVar17 + 2;
              } while (((uint)uVar16 & 0xfffffffe) != uVar17);
            }
            if ((uVar16 & 1) != 0) {
              uVar20 = 0;
              *(undefined1 *)(uVar11 + (uint)((int)uVar17 + iVar10) * uVar19 + *param_5) =
                   *(undefined1 *)(param_1 + uVar15 + uVar17);
            }
            uVar17 = uVar15 + uVar16;
          }
          uVar21 = iVar10 + (int)uVar16;
          uVar14 = (ulong)uVar21;
          bVar22 = uVar21 < param_3;
        } while ((bVar22) && (uVar17 < param_2));
      }
      if (bVar22) {
        return local_50;
      }
      uVar11 = uVar11 + 1;
      uVar20 = CONCAT71((int7)(uVar20 >> 8),uVar19 <= uVar11);
      local_50 = uVar20;
    } while (uVar11 != uVar19);
  }
  return local_50;
}

#undef local_50

#undef DAT_1001b378
#define DAT_1001b378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84cU)))
#undef LAB_1001664b
#define LAB_1001664b (*(uint8_t *)(0x1001664bU))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_88 (*(code * *)(pf_stack_frame + 56))
#define local_80 (*(undefined * *)(pf_stack_frame + 64))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(void * *)(pf_stack_frame + 112))
#define local_48 (*(ulong *)(pf_stack_frame + 120))
#define local_40 (*(ulong *)(pf_stack_frame + 128))
#define local_38 (*(undefined8 *)(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100164a0
 */

ulong recovered_100164a0(undefined1 *param_1,ulong param_2,long *param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;

  local_78 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  local_68 = (undefined1 *)&local_a8;
  param_3[1] = 0;
  local_88 = recovered_10007fa0;
  local_80 = &DAT_1001b378;
  local_70 = &LAB_1001664b;
  recovered_10008640(&local_a8);
  if (param_2 == 0 || param_1 == (undefined1 *)0x0) {
    uVar7 = 0;
    goto LAB_1001662e;
  }
  uVar7 = 4;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 * 2;
  } while (uVar5 < param_2);
  local_a0 = 0xffffffff;
  local_38 = (void *)recovered_10007ff0(uVar5);
  uVar7 = 0;
  recovered_10008050((void *)0x0);
  local_50 = local_38;
  if (param_2 < 4) {
    puVar6 = param_1;
LAB_100165df:
    puVar9 = (undefined1 *)(uVar7 + (long)local_38);
    do {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (puVar6 != param_1 + param_2);
  }
  else if (param_2 < 0x20) {
    uVar8 = 0;
LAB_100165b0:
    uVar7 = param_2 & 0xfffffffffffffffc;
    puVar6 = param_1 + uVar7;
    do {
      *(undefined4 *)((long)local_38 + uVar8) = *(undefined4 *)(param_1 + uVar8);
      uVar8 = uVar8 + 4;
    } while (uVar7 != uVar8);
    if (uVar7 != param_2) goto LAB_100165df;
  }
  else {
    uVar7 = param_2 & 0xffffffffffffffe0;
    uVar8 = 0;
    do {
      uVar2 = *(undefined8 *)((long)(param_1 + uVar8) + 8);
      uVar3 = *(undefined8 *)(param_1 + uVar8 + 0x10);
      uVar4 = *(undefined8 *)((long)(param_1 + uVar8 + 0x10) + 8);
      *(undefined8 *)((long)local_38 + uVar8) = *(undefined8 *)(param_1 + uVar8);
      ((undefined8 *)((long)local_38 + uVar8))[1] = uVar2;
      puVar1 = (undefined8 *)((long)local_38 + uVar8 + 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      uVar8 = uVar8 + 0x20;
    } while (uVar7 != uVar8);
    if (uVar7 != param_2) {
      uVar8 = uVar7;
      if ((param_2 & 0x1c) == 0) {
        puVar6 = param_1 + uVar7;
        goto LAB_100165df;
      }
      goto LAB_100165b0;
    }
  }
  local_a0 = 1;
  local_48 = param_2;
  local_40 = uVar5;
  uVar7 = recovered_10016970((long *)&local_50,param_3,0xffffffffffffffff);
  uVar7 = uVar7 & 0xffffffff;
  recovered_10008050(local_38);
LAB_1001662e:
  recovered_10008660(&local_a8);
  return uVar7;
}

#undef DAT_1001b378
#undef LAB_1001664b
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_48
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016690
 */

long recovered_10016690(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
  if (param_3 == param_4) goto LAB_1001694d;
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
    lVar6 = recovered_10007ff0(uVar7);
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
          if (uVar13 == uVar9) goto LAB_1001680f;
          uVar10 = uVar9;
          if ((uVar13 & 0x1c) == 0) goto LAB_100167a5;
        }
        uVar9 = uVar13 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(lVar6 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
        if (uVar13 == uVar9) goto LAB_1001680f;
      }
LAB_100167a5:
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
LAB_1001680f:
    recovered_10008050(pvVar2);
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
LAB_1001694d:
  lVar8 = 0;
  if (!bVar17) {
    lVar8 = lVar6 + uVar11;
  }
  return lVar8;
}


#undef DAT_1001af90
#define DAT_1001af90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x464U)))
#undef DAT_1001b380
#define DAT_1001b380 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x854U)))
#undef DAT_1001c3a8
#define DAT_1001c3a8 (*(char *)(((uintptr_t)pf_module_state + 0x187cU)))
#undef DAT_1001c410
#define DAT_1001c410 (*(char *)(((uintptr_t)pf_module_state + 0x18e4U)))
#undef LAB_10017f64
#define LAB_10017f64 (*(uint8_t *)(0x10017f64U))
#define uStack_21b (*(undefined3 *)(pf_stack_frame + 197))
#define uStack_218 (*(undefined5 *)(pf_stack_frame + 200))
#define uStack_213 (*(undefined8 *)(pf_stack_frame + 205))
#define uStack_200 (*(undefined8 *)(pf_stack_frame + 224))
#define uStack_1f0 (*(undefined8 *)(pf_stack_frame + 240))
#define uStack_1e0 (*(undefined8 *)(pf_stack_frame + 256))
#define uStack_1d0 (*(undefined8 *)(pf_stack_frame + 272))
#define uStack_1c0 (*(undefined5 *)(pf_stack_frame + 288))
#define uStack_1bb (*(undefined3 *)(pf_stack_frame + 293))
#define uStack_1b8 (*(undefined5 *)(pf_stack_frame + 296))
#define uStack_1b3 (*(undefined3 *)(pf_stack_frame + 301))
#define uStack_1b0 (*(undefined4 *)(pf_stack_frame + 304))
#define uStack_1ac (*(undefined1 *)(pf_stack_frame + 308))
#define uStack_170 (*(undefined8 *)(pf_stack_frame + 368))
#define lStack_148 (*(long *)(pf_stack_frame + 408))
#define uStack_48 (*(ulong *)(pf_stack_frame + 664))
#define local_2c8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_2b8 (*(undefined8 *)(pf_stack_frame + 40))
#define local_2a8 (*(undefined8 *)(pf_stack_frame + 56))
#define local_298 (*(undefined8 *)(pf_stack_frame + 72))
#define local_288 (*(void * *)(pf_stack_frame + 88))
#define local_280 (*(undefined5 *)(pf_stack_frame + 96))
#define local_268 (*(undefined8 *)(pf_stack_frame + 120))
#define local_258 (*(undefined8 *)(pf_stack_frame + 136))
#define local_248 (*(undefined8 *)(pf_stack_frame + 152))
#define local_238 (*(undefined8 *)(pf_stack_frame + 168))
#define local_228 (*(void * *)(pf_stack_frame + 184))
#define local_220 (*(undefined5 *)(pf_stack_frame + 192))
#define local_208 (*(undefined8 *)(pf_stack_frame + 216))
#define local_1f8 (*(undefined8 *)(pf_stack_frame + 232))
#define local_1e8 (*(undefined8 *)(pf_stack_frame + 248))
#define local_1d8 (*(undefined8 *)(pf_stack_frame + 264))
#define local_1c8 (*(void * *)(pf_stack_frame + 280))
#define local_1a0 (*(ulong *)(pf_stack_frame + 320))
#define local_198 (*(void * *)(pf_stack_frame + 328))
#define local_190 (*(undefined8 * *)(pf_stack_frame + 336))
#define local_188 (*(undefined8 *)(pf_stack_frame + 344))
#define local_180 (*(undefined8 *)(pf_stack_frame + 352))
#define local_178 (*(void * *)(pf_stack_frame + 360))
#define local_168 (*(undefined8 *)(pf_stack_frame + 376))
#define local_160 (*(ulong *)(pf_stack_frame + 384))
#define local_158 (*(long * *)(pf_stack_frame + 392))
#define local_150 (*(void * *)(pf_stack_frame + 400))
#define local_140 (*(undefined8 *)(pf_stack_frame + 416))
#define local_134 (*(uint *)(pf_stack_frame + 428))
#define local_130 (*(undefined4 * *)(pf_stack_frame + 432))
#define local_128 (*(undefined8 *)(pf_stack_frame + 440))
#define local_120 (*(undefined4 *)(pf_stack_frame + 448))
#define local_108 (*(code * *)(pf_stack_frame + 472))
#define local_100 (*(undefined * *)(pf_stack_frame + 480))
#define local_f8 (*(undefined1 * *)(pf_stack_frame + 488))
#define local_f0 (*(undefined1 * *)(pf_stack_frame + 496))
#define local_e8 (*(undefined1 * *)(pf_stack_frame + 504))
#define local_d0 (*(long *)(pf_stack_frame + 528))
#define local_c8 (*(undefined4 * *)(pf_stack_frame + 536))
#define local_c0 (*(long * *)(pf_stack_frame + 544))
#define local_b8 (*(ulong *)(pf_stack_frame + 552))
#define local_b0 (*(ulong *)(pf_stack_frame + 560))
#define local_a8 (*(ulong *)(pf_stack_frame + 568))
#define local_9c (*(uint *)(pf_stack_frame + 580))
#define local_98 (*(undefined4 * *)(pf_stack_frame + 584))
#define local_90 (*(undefined4 * *)(pf_stack_frame + 592))
#define local_88 (*(undefined4 * *)(pf_stack_frame + 600))
#define local_80 (*(undefined8 * *)(pf_stack_frame + 608))
#define local_78 (*(ulong *)(pf_stack_frame + 616))
#define local_70 (*(undefined8 *)(pf_stack_frame + 624))
#define local_68 (*(ulong *)(pf_stack_frame + 632))
#define local_60 (*(byte * *)(pf_stack_frame + 640))
#define local_58 (*(ulong *)(pf_stack_frame + 648))
#define local_50 (*(ulong *)(pf_stack_frame + 656))
#define local_40 (*(uint *)(pf_stack_frame + 672))
#define local_38 (*(undefined4 * *)(pf_stack_frame + 680))
#define uStack_2c0 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_2b0 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_2a0 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_290 (*(undefined8 *)(pf_stack_frame + 80))
#define uStack_27b (*(undefined3 *)(pf_stack_frame + 101))
#define uStack_278 (*(undefined5 *)(pf_stack_frame + 104))
#define uStack_273 (*(undefined8 *)(pf_stack_frame + 109))
#define uStack_260 (*(undefined8 *)(pf_stack_frame + 128))
#define uStack_250 (*(undefined8 *)(pf_stack_frame + 144))
#define uStack_240 (*(undefined8 *)(pf_stack_frame + 160))
#define uStack_230 (*(undefined8 *)(pf_stack_frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016970
 */

ulong recovered_10016970(long *param_1,long *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[768] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  byte *pbVar2;
  void *pvVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  byte bVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  char cVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  undefined4 uVar26;
  long *plVar27;
  bool bVar28;

  local_f8 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 736) + -8);
  local_e8 = (undefined1 *)&local_2c8;
  param_2[1] = 0;
  uVar23 = param_1[1];
  local_108 = recovered_10007fa0;
  local_100 = &DAT_1001b380;
  local_f0 = &LAB_10017f64;
  local_c0 = param_2;
  recovered_10008640(&local_128);
  uVar15 = local_40;
  if (5 < uVar23) {
    pbVar2 = (byte *)*param_1;
    if ((*pbVar2 & 0xf) == 8) {
      uVar18 = 0;
      if (((pbVar2[1] & 0x20) != 0) ||
         (uVar1 = CONCAT11(*pbVar2,pbVar2[1]), uVar15 = (uint)uVar1 * 0x843 >> 0x10,
         (ushort)((short)(((uVar1 - uVar15 & 0xffff) >> 1) + uVar15 >> 4) * -0x1f + uVar1) != 0))
      goto switchD_10016b4d_caseD_3;
      local_58 = uVar23 - 6;
      local_60 = pbVar2 + 2;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_134 = 5;
      plVar27 = local_c0;
      local_158 = param_1;
      local_b0 = param_3;
      do {
        if (local_40 == 0) {
          uVar15 = local_40;
          if (local_58 <= local_50) goto LAB_10017f25;
          uVar23 = local_50 + 1;
          local_160 = local_60[local_50] | uStack_48;
          uStack_48 = local_160 >> 3;
          local_40 = local_134;
          uVar18 = 0;
          local_50 = uVar23;
          switch((uintptr_t)((uint)(local_160 >> 1) & 3)) {
          case 1:
            goto switchD_10016b4d_caseD_1;
          case 2:
            goto switchD_10016b4d_caseD_2;
          case 3:
            goto switchD_10016b4d_caseD_3;
          }
switchD_10016b4d_caseD_0:
          uVar23 = uStack_48 >> ((byte)local_40 & 7);
          uVar15 = local_40 & 0xfffffff8;
          bVar13 = (byte)(uVar23 >> 0x10);
          uVar19 = (uint)(uVar23 >> 8);
          if (local_40 < 8) {
            uStack_48 = uVar23;
            if (local_58 <= local_50) goto LAB_10017f25;
            uVar7 = (uint)uVar23 & 0xff | (uint)local_60[local_50];
            local_40 = 0;
            local_50 = local_50 + 1;
LAB_10017942:
            uStack_48 = uVar23 >> 8;
            uVar18 = 0;
            if (local_58 <= local_50) goto switchD_10016b4d_caseD_3;
            uVar19 = local_60[local_50] | uVar19;
            local_40 = 0;
            local_50 = local_50 + 1;
LAB_10017978:
            uStack_48 = uVar23 >> 0x10;
            uVar15 = local_40;
            if (local_58 <= local_50) goto LAB_10017f25;
            uVar20 = (uint)(bVar13 | local_60[local_50]);
            local_40 = (uint)uVar18;
            local_50 = local_50 + 1;
LAB_100179a9:
            uStack_48 = uVar23 >> 0x18;
            uVar15 = local_40;
            if (local_58 <= local_50) goto LAB_10017f25;
            uVar24 = uStack_48 | (ulong)local_60[local_50] << ((byte)uVar18 & 0x3f);
            local_50 = local_50 + 1;
          }
          else {
            uVar7 = (uint)(byte)uVar23;
            local_40 = uVar15 - 8;
            if (local_40 == 0) goto LAB_10017942;
            local_40 = uVar15 - 0x10;
            uVar18 = (ulong)local_40;
            if (local_40 == 0) goto LAB_10017978;
            uVar24 = uVar23 >> 0x18;
            uVar20 = (uint)bVar13;
            local_40 = uVar15 - 0x18;
            uVar18 = (ulong)local_40;
            if (local_40 == 0) goto LAB_100179a9;
            uVar18 = (ulong)(uVar15 - 0x20);
          }
          uStack_48 = uVar24 >> 8;
          local_40 = (uint)uVar18;
          uVar7 = (uVar19 & 0xff) << 8 | uVar7;
          uVar15 = local_40;
          if (((((uint)uVar24 & 0xff) << 8 | uVar20) ^ uVar7) != 0xffff) goto LAB_10017f25;
          if (uVar7 != 0) {
            uVar19 = 0;
            do {
              if (local_40 < 8) {
                uVar15 = local_40;
                if (local_58 <= local_50) goto LAB_10017f25;
                bVar13 = (byte)local_40;
                local_40 = local_40 | 8;
                uVar23 = (ulong)local_60[local_50] << (bVar13 & 0x3f) | uStack_48;
                local_50 = local_50 + 1;
              }
              else {
                uVar23 = uStack_48;
              }
              uStack_48 = uVar23 >> 8;
              local_40 = local_40 - 8;
              uVar24 = plVar27[1];
              uVar15 = local_40;
              if (local_b0 <= uVar24) goto LAB_10017f25;
              if (uVar24 == plVar27[2]) {
                uVar18 = uVar24 * 2;
                if (uVar24 == 0) {
                  uVar18 = 4;
                }
                if (uVar24 < uVar18) {
                  local_120 = 0xffffffff;
                  lVar12 = recovered_10007ff0(uVar18);
                  pvVar3 = (void *)*plVar27;
                  uVar24 = plVar27[1];
                  if (uVar24 != 0) {
                    if (uVar24 < 4) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = 0;
                      if (0x1f < (ulong)(lVar12 - (long)pvVar3)) {
                        if (uVar24 < 0x20) {
                          uVar16 = 0;
                        }
                        else {
                          uVar14 = uVar24 & 0xffffffffffffffe0;
                          uVar16 = 0;
                          do {
                            uVar10 = ((undefined8 *)((long)pvVar3 + uVar16))[1];
                            puVar22 = (undefined8 *)((long)pvVar3 + uVar16 + 0x10);
                            uVar5 = *puVar22;
                            uVar6 = puVar22[1];
                            *(undefined8 *)(lVar12 + uVar16) =
                                 *(undefined8 *)((long)pvVar3 + uVar16);
                            ((undefined8 *)(lVar12 + uVar16))[1] = uVar10;
                            puVar22 = (undefined8 *)(lVar12 + 0x10 + uVar16);
                            *puVar22 = uVar5;
                            puVar22[1] = uVar6;
                            uVar16 = uVar16 + 0x20;
                          } while (uVar14 != uVar16);
                          if (uVar24 == uVar14) goto LAB_10017a0d;
                          uVar16 = uVar14;
                          if ((uVar24 & 0x1c) == 0) goto LAB_10017b79;
                        }
                        uVar14 = uVar24 & 0xfffffffffffffffc;
                        do {
                          *(undefined4 *)(lVar12 + uVar16) = *(undefined4 *)((long)pvVar3 + uVar16);
                          uVar16 = uVar16 + 4;
                        } while (uVar14 != uVar16);
                        if (uVar24 == uVar14) goto LAB_10017a0d;
                      }
                    }
LAB_10017b79:
                    uVar21 = uVar24 & 3;
                    uVar16 = uVar14;
                    if (uVar21 != 0) {
                      do {
                        *(undefined1 *)(lVar12 + uVar16) = *(undefined1 *)((long)pvVar3 + uVar16);
                        uVar16 = uVar16 + 1;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    if (uVar14 - uVar24 < 0xfffffffffffffffd) {
                      do {
                        *(undefined1 *)(lVar12 + uVar16) = *(undefined1 *)((long)pvVar3 + uVar16);
                        *(undefined1 *)(lVar12 + 1 + uVar16) =
                             *(undefined1 *)((long)pvVar3 + uVar16 + 1);
                        *(undefined1 *)(lVar12 + 2 + uVar16) =
                             *(undefined1 *)((long)pvVar3 + uVar16 + 2);
                        *(undefined1 *)(lVar12 + 3 + uVar16) =
                             *(undefined1 *)((long)pvVar3 + uVar16 + 3);
                        uVar16 = uVar16 + 4;
                      } while (uVar24 != uVar16);
                    }
                  }
LAB_10017a0d:
                  recovered_10008050(pvVar3);
                  *local_c0 = lVar12;
                  local_c0[2] = uVar18;
                  uVar24 = local_c0[1];
                  plVar27 = local_c0;
                }
              }
              *(char *)(*plVar27 + uVar24) = (char)uVar23;
              plVar27[1] = plVar27[1] + 1;
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar7);
            param_1 = local_158;
          }
          param_3 = local_b0;
        }
        else {
          local_160 = uStack_48;
          uVar23 = uStack_48 >> 1;
          uVar15 = local_40 - 1;
          if (local_40 < 3) {
            uStack_48 = uVar23;
            if (local_58 <= local_50) goto LAB_10017f25;
            uVar23 = uVar23 | (ulong)local_60[local_50] << ((byte)uVar15 & 0x3f);
            uVar15 = local_40 + 7;
            local_50 = local_50 + 1;
          }
          uStack_48 = uVar23 >> 2;
          local_40 = uVar15 - 2;
          uVar18 = 0;
          switch((uintptr_t)((uint)uVar23 & 3)) {
          case 0:
            goto switchD_10016b4d_caseD_0;
          case 1:
switchD_10016b4d_caseD_1:
            uVar18 = 0;
            if (DAT_1001c3a8 == '\0') {
              local_120 = 0xffffffff;
              recovered_1001aad0();
            }
            if (DAT_1001c410 == '\0') {
              local_120 = 0xffffffff;
              recovered_1001ab00();
            }
            local_120 = 0xffffffff;
            uVar10 = recovered_10018100((long *)&local_60,((uintptr_t)pf_module_state+0x181cU),((uintptr_t)pf_module_state+0x1884U),plVar27,param_3);
            uVar15 = local_40;
            if ((char)uVar10 == '\0') goto LAB_10017f25;
            break;
          case 2:
switchD_10016b4d_caseD_2:
            uStack_278 = 0;
            uStack_273 = 0;
            local_288 = (void *)0x0;
            local_280 = 0;
            uStack_27b = 0;
            local_298 = 0;
            uStack_290 = 0;
            local_2a8 = 0;
            uStack_2a0 = 0;
            local_2b8 = 0;
            uStack_2b0 = 0;
            local_2c8 = 0;
            uStack_2c0 = 0;
            uStack_1b8 = 0;
            uStack_1b3 = 0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            local_1c8 = (void *)0x0;
            uStack_1c0 = 0;
            uStack_1bb = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1f8 = 0;
            uStack_1f0 = 0;
            local_208 = 0;
            uStack_200 = 0;
            if (local_40 < 5) {
              uVar23 = uStack_48;
              uVar15 = local_40;
              if (local_50 < local_58) {
                uStack_48 = uStack_48 | (ulong)local_60[local_50] << ((byte)local_40 & 0x3f);
                local_40 = local_40 | 8;
                local_50 = local_50 + 1;
                goto LAB_10016c7a;
              }
            }
            else {
LAB_10016c7a:
              uVar18 = uStack_48 >> 5;
              uVar19 = local_40 - 5;
              if (uVar19 < 5) {
                uVar23 = uVar18;
                uVar15 = uVar19;
                if (local_58 <= local_50) goto LAB_10017f0d;
                uVar18 = uVar18 | (ulong)local_60[local_50] << ((byte)uVar19 & 0x3f);
                uVar19 = local_40 + 3;
                local_50 = local_50 + 1;
              }
              uVar23 = uVar18 >> 5;
              uVar15 = uVar19 - 5;
              local_78 = uVar18;
              local_68 = uStack_48;
              if (uVar15 < 4) {
                if (local_58 <= local_50) goto LAB_10017f0d;
                uVar23 = uVar23 | (ulong)local_60[local_50] << ((byte)uVar15 & 0x3f);
                uVar15 = uVar19 + 3;
                local_50 = local_50 + 1;
              }
              local_40 = uVar15 - 4;
              local_120 = 1;
              local_70 = uVar23;
              uStack_48 = uVar23 >> 4;
              local_80 = (undefined8 *)recovered_10007ff0(0x4c);
              uVar18 = (ulong)((uint)local_68 & 0x1f);
              uVar15 = (uint)local_78;
              recovered_10008050((void *)0x0);
              local_190 = local_80;
              local_180 = 0x13;
              *local_80 = 0;
              local_80[1] = 0;
              local_80[2] = 0;
              local_80[3] = 0;
              local_80[4] = 0;
              local_80[5] = 0;
              local_80[6] = 0;
              local_80[7] = 0;
              *(undefined4 *)(local_80 + 8) = 0;
              *(undefined4 *)((long)local_80 + 0x44) = 0;
              *(undefined4 *)(local_80 + 9) = 0;
              local_130 = (undefined4 *)(uVar18 + 0x101);
              local_188 = 0x13;
              lVar12 = 0;
              uVar23 = local_50;
              do {
                uVar24 = uVar23;
                if (local_40 < 3) {
                  if (local_58 <= uVar23) goto LAB_10017f04;
                  uVar24 = uVar23 + 1;
                  uStack_48 = uStack_48 | (ulong)local_60[uVar23] << ((byte)local_40 & 0x3f);
                  local_40 = local_40 | 8;
                  local_50 = uVar24;
                }
                uVar19 = (uint)uStack_48;
                uStack_48 = uStack_48 >> 3;
                local_40 = local_40 - 3;
                *(uint *)((long)local_80 + (ulong)*(uint *)((long)&DAT_1001af90 + lVar12) * 4) =
                     uVar19 & 7;
                lVar12 = lVar12 + 4;
                uVar23 = uVar24;
              } while ((ulong)((uint)local_70 & 0xf) * 4 + 0x10 != lVar12);
              uStack_218 = 0;
              uStack_213 = 0;
              local_228 = (void *)0x0;
              local_220 = 0;
              uStack_21b = 0;
              local_238 = 0;
              uStack_230 = 0;
              local_248 = 0;
              uStack_240 = 0;
              local_258 = 0;
              uStack_250 = 0;
              local_268 = 0;
              uStack_260 = 0;
              local_120 = 2;
              local_78 = (ulong)(uVar15 & 0x1f);
              local_68 = uVar18;
              uVar23 = recovered_10018d90((long *)&local_190,(uint *)&local_268,0);
              if ((char)uVar23 == '\0') {
                recovered_10008050(local_228);
LAB_10017f04:
                puVar22 = local_80;
              }
              else {
                local_78 = local_68 + local_78 + 0x102;
                local_120 = 3;
                puVar11 = (undefined4 *)recovered_10007ff0((ulong)(uint)((int)local_78 * 4));
                recovered_10008050((void *)0x0);
                if (PF_PART1(uStack_213, 7) == '\x01') {
                  local_198 = local_228;
                  local_1a0 = CONCAT35(uStack_21b,local_220);
                  local_68 = 0;
                  uVar23 = local_78;
                  do {
                    local_70 = uVar23;
                    local_38 = puVar11;
                    if (PF_PART4(uStack_213, 3) == 0) goto LAB_10017d81;
                    uVar24 = 1;
                    uVar15 = 0;
                    lVar12 = 0;
                    iVar8 = 0;
                    uVar18 = local_50;
                    while( true ) {
                      if (local_40 == 0) {
                        if (local_58 <= uVar18) goto LAB_10017d81;
                        uVar14 = uVar18 + 1;
                        local_50 = uVar14;
                        uStack_48 = uStack_48 | local_60[uVar18];
                        uVar19 = 8;
                      }
                      else {
                        uVar14 = uVar18;
                        uVar19 = local_40;
                      }
                      uVar15 = (uint)uStack_48 & 1 | uVar15;
                      uVar18 = uStack_48 >> 1;
                      uStack_48 = uVar18;
                      local_40 = uVar19 - 1;
                      uVar7 = *(uint *)((long)&local_268 + uVar24 * 4);
                      uVar20 = uVar7 + iVar8;
                      if (uVar15 < uVar20) break;
                      lVar12 = lVar12 + (ulong)uVar7;
                      iVar8 = uVar20 * 2;
                      uVar15 = uVar15 * 2;
                      uVar19 = (int)uVar24 + 1;
                      uVar24 = (ulong)uVar19;
                      uVar18 = uVar14;
                      if (PF_PART4(uStack_213, 3) < uVar19) goto LAB_10017d81;
                    }
                    uVar24 = lVar12 + (ulong)(uVar15 - iVar8);
                    if (local_1a0 <= uVar24) goto LAB_10017d81;
                    uVar1 = *(ushort *)((long)local_198 + uVar24 * 2);
                    uVar15 = (uint)uVar1;
                    if (uVar1 < 0x10) {
                      uVar24 = uVar23;
                      uVar18 = local_68;
                      if (local_68 == uVar23) {
                        uVar14 = local_68 * 2;
                        if (local_68 == 0) {
                          uVar14 = 4;
                        }
                        uVar24 = local_68;
                        if (local_68 < uVar14) {
                          local_70 = CONCAT44((int)(uVar23 >> 0x20),uVar15);
                          local_120 = 4;
                          local_a8 = uVar14;
                          puVar11 = (undefined4 *)recovered_10007ff0(uVar14 * 4);
                          uVar18 = local_68;
                          if (local_68 != 0) {
                            if (local_68 < 8) {
                              uVar23 = 0;
                            }
                            else {
                              uVar23 = 0;
                              if (0x1f < (ulong)((long)puVar11 - (long)local_38)) {
                                uVar23 = local_68 & 0xfffffffffffffff8;
                                uVar24 = 0;
                                do {
                                  uVar10 = *(undefined8 *)((long)(local_38 + uVar24) + 8);
                                  uVar5 = *(undefined8 *)(local_38 + uVar24 + 4);
                                  uVar6 = *(undefined8 *)((long)(local_38 + uVar24 + 4) + 8);
                                  *(undefined8 *)(puVar11 + uVar24) =
                                       *(undefined8 *)(local_38 + uVar24);
                                  *(undefined8 *)((long)(puVar11 + uVar24) + 8) = uVar10;
                                  *(undefined8 *)(puVar11 + uVar24 + 4) = uVar5;
                                  *(undefined8 *)((long)(puVar11 + uVar24 + 4) + 8) = uVar6;
                                  uVar24 = uVar24 + 8;
                                } while (uVar23 != uVar24);
                                if (local_68 == uVar23) goto LAB_10017799;
                              }
                            }
                            uVar14 = local_68 & 3;
                            uVar24 = uVar23;
                            if (uVar14 != 0) {
                              do {
                                puVar11[uVar24] = local_38[uVar24];
                                uVar24 = uVar24 + 1;
                                uVar14 = uVar14 - 1;
                              } while (uVar14 != 0);
                            }
                            if (uVar23 - local_68 < 0xfffffffffffffffd) {
                              do {
                                puVar11[uVar24] = local_38[uVar24];
                                puVar11[uVar24 + 1] = local_38[uVar24 + 1];
                                puVar11[uVar24 + 2] = local_38[uVar24 + 2];
                                puVar11[uVar24 + 3] = local_38[uVar24 + 3];
                                uVar24 = uVar24 + 4;
                              } while (local_68 != uVar24);
                            }
                          }
LAB_10017799:
                          recovered_10008050(local_38);
                          uVar24 = local_a8;
                          uVar15 = (uint)local_70;
                        }
                      }
                      uVar23 = uVar24;
                      puVar11[uVar18] = uVar15;
                      local_68 = uVar18 + 1;
                      uVar24 = local_78;
                    }
                    else {
                      bVar13 = (byte)local_40;
                      uVar24 = local_78;
                      if (uVar1 == 0x12) {
                        if (uVar19 < 8) {
                          if (local_58 <= uVar14) goto LAB_10017d81;
                          local_50 = uVar14 + 1;
                          uVar18 = uVar18 | (ulong)local_60[uVar14] << (bVar13 & 0x3f);
                          local_40 = local_40 | 8;
                        }
                        uStack_48 = uVar18 >> 7;
                        local_40 = local_40 - 7;
                        if (local_68 < local_78) {
                          uVar18 = (ulong)(((uint)uVar18 & 0x7f) + 0xb);
                          local_d0 = local_68 - 1;
                          uVar14 = 0;
                          uVar15 = 0;
                          local_a8 = uVar18;
                          uVar16 = local_68;
                          do {
                            local_98 = puVar11;
                            if (uVar16 == uVar23) {
                              uVar21 = uVar16 * 2;
                              if (uVar16 == 0) {
                                uVar21 = 4;
                              }
                              uVar23 = uVar16;
                              if (uVar16 < uVar21) {
                                local_120 = 7;
                                local_b8 = uVar21;
                                local_9c = uVar15;
                                local_70 = uVar14;
                                local_68 = uVar16;
                                puVar11 = (undefined4 *)recovered_10007ff0(uVar21 * 4);
                                uVar16 = local_68;
                                uVar14 = local_70;
                                uVar18 = local_a8;
                                if (local_68 != 0) {
                                  if (local_68 < 8) {
                                    uVar23 = 0;
                                  }
                                  else {
                                    uVar23 = 0;
                                    if (0x1f < (ulong)((long)puVar11 - (long)local_98)) {
                                      uVar23 = local_68 & 0xfffffffffffffff8;
                                      uVar24 = 0;
                                      do {
                                        uVar10 = *(undefined8 *)((long)(local_98 + uVar24) + 8);
                                        uVar5 = *(undefined8 *)(local_98 + uVar24 + 4);
                                        uVar6 = *(undefined8 *)((long)(local_98 + uVar24 + 4) + 8);
                                        *(undefined8 *)(puVar11 + uVar24) =
                                             *(undefined8 *)(local_98 + uVar24);
                                        *(undefined8 *)((long)(puVar11 + uVar24) + 8) = uVar10;
                                        *(undefined8 *)(puVar11 + uVar24 + 4) = uVar5;
                                        *(undefined8 *)((long)(puVar11 + uVar24 + 4) + 8) = uVar6;
                                        uVar24 = uVar24 + 8;
                                      } while (uVar23 != uVar24);
                                      if (local_68 == uVar23) goto LAB_100176f2;
                                    }
                                  }
                                  uVar24 = uVar23;
                                  if ((local_68 & 3) != 0) {
                                    uVar21 = (ulong)((uint)local_68 & 3);
                                    do {
                                      puVar11[uVar24] = local_98[uVar24];
                                      uVar24 = uVar24 + 1;
                                      uVar21 = uVar21 - 1;
                                    } while (uVar21 != 0);
                                  }
                                  if (2 < (local_d0 + local_70) - uVar23) {
                                    do {
                                      puVar11[uVar24] = local_98[uVar24];
                                      puVar11[uVar24 + 1] = local_98[uVar24 + 1];
                                      puVar11[uVar24 + 2] = local_98[uVar24 + 2];
                                      puVar11[uVar24 + 3] = local_98[uVar24 + 3];
                                      uVar24 = uVar24 + 4;
                                    } while (local_68 != uVar24);
                                  }
                                }
LAB_100176f2:
                                recovered_10008050(local_98);
                                uVar24 = local_78;
                                uVar23 = local_b8;
                                uVar15 = local_9c;
                              }
                            }
                            puVar11[uVar16] = 0;
                            local_68 = uVar16 + 1;
                            uVar15 = uVar15 + 1;
                            if ((uint)uVar18 <= uVar15) break;
                            uVar14 = uVar14 + 1;
                            uVar16 = local_68;
                          } while (local_68 < uVar24);
                        }
                      }
                      else if (uVar15 == 0x11) {
                        if (uVar19 < 4) {
                          if (local_58 <= uVar14) goto LAB_10017d81;
                          local_50 = uVar14 + 1;
                          uVar18 = uVar18 | (ulong)local_60[uVar14] << (bVar13 & 0x3f);
                          local_40 = local_40 | 8;
                        }
                        uStack_48 = uVar18 >> 3;
                        local_40 = local_40 - 3;
                        if (local_68 < local_78) {
                          uVar18 = (ulong)(((uint)uVar18 & 7) + 3);
                          local_d0 = local_68 - 1;
                          uVar14 = 0;
                          uVar15 = 0;
                          local_a8 = uVar18;
                          uVar16 = local_68;
                          do {
                            local_90 = puVar11;
                            if (uVar16 == uVar23) {
                              uVar21 = uVar16 * 2;
                              if (uVar16 == 0) {
                                uVar21 = 4;
                              }
                              uVar23 = uVar16;
                              if (uVar16 < uVar21) {
                                local_120 = 6;
                                local_b8 = uVar21;
                                local_9c = uVar15;
                                local_70 = uVar14;
                                local_68 = uVar16;
                                puVar11 = (undefined4 *)recovered_10007ff0(uVar21 * 4);
                                uVar16 = local_68;
                                uVar14 = local_70;
                                uVar18 = local_a8;
                                if (local_68 != 0) {
                                  if (local_68 < 8) {
                                    uVar23 = 0;
                                  }
                                  else {
                                    uVar23 = 0;
                                    if (0x1f < (ulong)((long)puVar11 - (long)local_90)) {
                                      uVar23 = local_68 & 0xfffffffffffffff8;
                                      uVar24 = 0;
                                      do {
                                        uVar10 = *(undefined8 *)((long)(local_90 + uVar24) + 8);
                                        uVar5 = *(undefined8 *)(local_90 + uVar24 + 4);
                                        uVar6 = *(undefined8 *)((long)(local_90 + uVar24 + 4) + 8);
                                        *(undefined8 *)(puVar11 + uVar24) =
                                             *(undefined8 *)(local_90 + uVar24);
                                        *(undefined8 *)((long)(puVar11 + uVar24) + 8) = uVar10;
                                        *(undefined8 *)(puVar11 + uVar24 + 4) = uVar5;
                                        *(undefined8 *)((long)(puVar11 + uVar24 + 4) + 8) = uVar6;
                                        uVar24 = uVar24 + 8;
                                      } while (uVar23 != uVar24);
                                      if (local_68 == uVar23) goto LAB_10017511;
                                    }
                                  }
                                  uVar24 = uVar23;
                                  if ((local_68 & 3) != 0) {
                                    uVar21 = (ulong)((uint)local_68 & 3);
                                    do {
                                      puVar11[uVar24] = local_90[uVar24];
                                      uVar24 = uVar24 + 1;
                                      uVar21 = uVar21 - 1;
                                    } while (uVar21 != 0);
                                  }
                                  if (2 < (local_d0 + local_70) - uVar23) {
                                    do {
                                      puVar11[uVar24] = local_90[uVar24];
                                      puVar11[uVar24 + 1] = local_90[uVar24 + 1];
                                      puVar11[uVar24 + 2] = local_90[uVar24 + 2];
                                      puVar11[uVar24 + 3] = local_90[uVar24 + 3];
                                      uVar24 = uVar24 + 4;
                                    } while (local_68 != uVar24);
                                  }
                                }
LAB_10017511:
                                recovered_10008050(local_90);
                                uVar24 = local_78;
                                uVar23 = local_b8;
                                uVar15 = local_9c;
                              }
                            }
                            puVar11[uVar16] = 0;
                            local_68 = uVar16 + 1;
                            uVar15 = uVar15 + 1;
                            if ((uint)uVar18 <= uVar15) break;
                            uVar14 = uVar14 + 1;
                            uVar16 = local_68;
                          } while (local_68 < uVar24);
                        }
                      }
                      else {
                        if ((uVar15 != 0x10) || (local_68 == 0)) goto LAB_10017d81;
                        if (uVar19 < 3) {
                          if (local_58 <= uVar14) goto LAB_10017d81;
                          local_50 = uVar14 + 1;
                          uVar18 = uVar18 | (ulong)local_60[uVar14] << (bVar13 & 0x3f);
                          local_40 = local_40 | 8;
                        }
                        uStack_48 = uVar18 >> 2;
                        local_40 = local_40 - 2;
                        uVar26 = puVar11[local_68 - 1];
                        if (local_68 < local_78) {
                          uVar18 = (ulong)(((uint)uVar18 & 3) + 3);
                          local_d0 = local_68 - 1;
                          uVar16 = 0;
                          uVar15 = 0;
                          local_a8 = uVar18;
                          local_b8 = CONCAT44(PF_PART4(local_b8, 4),uVar26);
                          uVar14 = local_68;
                          do {
                            local_88 = puVar11;
                            if (uVar14 == uVar23) {
                              uVar23 = uVar14;
                              if (0 < (long)uVar14) {
                                local_120 = 5;
                                local_9c = uVar15;
                                local_70 = uVar16;
                                local_68 = uVar14;
                                puVar11 = (undefined4 *)recovered_10007ff0(uVar14 * 8);
                                uVar14 = local_68;
                                uVar18 = local_a8;
                                uVar26 = (undefined4)local_b8;
                                if (local_68 < 8) {
                                  uVar23 = 0;
LAB_1001724d:
                                  uVar24 = uVar23;
                                  if ((local_68 & 3) != 0) {
                                    uVar16 = (ulong)((uint)local_68 & 3);
                                    do {
                                      puVar11[uVar24] = local_88[uVar24];
                                      uVar24 = uVar24 + 1;
                                      uVar16 = uVar16 - 1;
                                    } while (uVar16 != 0);
                                  }
                                  if (2 < (local_d0 + local_70) - uVar23) {
                                    do {
                                      puVar11[uVar24] = local_88[uVar24];
                                      puVar11[uVar24 + 1] = local_88[uVar24 + 1];
                                      puVar11[uVar24 + 2] = local_88[uVar24 + 2];
                                      puVar11[uVar24 + 3] = local_88[uVar24 + 3];
                                      uVar24 = uVar24 + 4;
                                    } while (local_68 != uVar24);
                                  }
                                }
                                else {
                                  uVar23 = 0;
                                  if ((ulong)((long)puVar11 - (long)local_88) < 0x20)
                                  goto LAB_1001724d;
                                  uVar23 = local_68 & 0x7ffffffffffffff8;
                                  uVar24 = 0;
                                  do {
                                    uVar10 = *(undefined8 *)((long)(local_88 + uVar24) + 8);
                                    uVar5 = *(undefined8 *)(local_88 + uVar24 + 4);
                                    uVar6 = *(undefined8 *)((long)(local_88 + uVar24 + 4) + 8);
                                    *(undefined8 *)(puVar11 + uVar24) =
                                         *(undefined8 *)(local_88 + uVar24);
                                    *(undefined8 *)((long)(puVar11 + uVar24) + 8) = uVar10;
                                    *(undefined8 *)(puVar11 + uVar24 + 4) = uVar5;
                                    *(undefined8 *)((long)(puVar11 + uVar24 + 4) + 8) = uVar6;
                                    uVar24 = uVar24 + 8;
                                  } while (uVar23 != uVar24);
                                  if (local_68 != uVar23) goto LAB_1001724d;
                                }
                                uVar23 = local_68 * 2;
                                recovered_10008050(local_88);
                                uVar16 = local_70;
                                uVar24 = local_78;
                                uVar15 = local_9c;
                              }
                            }
                            puVar11[uVar14] = uVar26;
                            local_68 = uVar14 + 1;
                            uVar15 = uVar15 + 1;
                            if ((uint)uVar18 <= uVar15) break;
                            uVar16 = uVar16 + 1;
                            uVar14 = local_68;
                          } while (local_68 < uVar24);
                        }
                      }
                    }
                    local_c8 = puVar11;
                  } while (local_68 < uVar24);
                  local_130 = (undefined4 *)((ulong)(uint)((int)local_130 << 2) + (long)puVar11);
                  local_178 = (void *)0x0;
                  uStack_170 = 0;
                  local_168 = 0;
                  local_120 = 8;
                  recovered_100193c0((long *)&local_178,0,puVar11,local_130);
                  local_150 = (void *)0x0;
                  lStack_148 = 0;
                  local_140 = 0;
                  local_120 = 9;
                  recovered_100193c0((long *)&local_150,0,local_130,local_c8 + local_68);
                  local_120 = 10;
                  uVar23 = recovered_10018d90((long *)&local_178,(uint *)&local_2c8,0);
                  uVar18 = local_b0;
                  if ((char)uVar23 == '\0') {
                    cVar17 = '\0';
LAB_10017c09:
                    uVar18 = local_b0;
                  }
                  else {
                    if (lStack_148 != 0) {
                      lVar12 = 0;
                      bVar13 = 0;
                      do {
                        bVar4 = bVar13;
                        bVar28 = *(int *)((long)local_150 + lVar12) != 0;
                        lVar12 = lVar12 + 4;
                        bVar13 = bVar4 | bVar28;
                      } while (lStack_148 * 4 != lVar12);
                      if ((bool)(bVar4 | bVar28)) {
                        local_120 = 0xb;
                        uVar23 = recovered_10018d90((long *)&local_150,(uint *)&local_208,1);
                        cVar17 = (char)uVar23;
                        goto LAB_10017c09;
                      }
                    }
                    local_1d8 = 0;
                    uStack_1d0 = 0;
                    local_1e8 = 0;
                    uStack_1e0 = 0;
                    local_1f8 = 0;
                    uStack_1f0 = 0;
                    local_208 = 0;
                    uStack_200 = 0;
                    recovered_10008050(local_1c8);
                    local_1c8 = (void *)0x0;
                    uStack_1c0 = 0;
                    uStack_1bb = 0;
                    uStack_1b8 = 0;
                    uStack_1b3 = 0;
                    uStack_1b0 = 0;
                    recovered_10008050((void *)0x0);
                    uStack_1ac = 1;
                    cVar17 = '\x01';
                  }
                  lStack_148 = 0;
                  recovered_10008050(local_150);
                  uStack_170 = 0;
                  recovered_10008050(local_178);
                  recovered_10008050(local_c8);
                  puVar22 = local_190;
                  local_220 = 0;
                  uStack_21b = 0;
                  recovered_10008050(local_228);
                  recovered_10008050(puVar22);
                  uVar23 = uStack_48;
                  uVar15 = local_40;
                  if (cVar17 == '\0') goto LAB_10017f0d;
                  local_120 = 0xc;
                  uVar18 = recovered_10018100((long *)&local_60,(long)&local_2c8,(long)&local_208,
                                              local_c0,uVar18);
                  uVar18 = uVar18 & 0xffffffff;
                  uStack_1c0 = 0;
                  uStack_1bb = 0;
                  recovered_10008050(local_1c8);
                  local_280 = 0;
                  uStack_27b = 0;
                  recovered_10008050(local_288);
                  param_1 = local_158;
                  plVar27 = local_c0;
                  param_3 = local_b0;
                  uVar15 = local_40;
                  if ((char)uVar18 != '\0') break;
                  goto LAB_10017f25;
                }
LAB_10017d81:
                recovered_10008050(puVar11);
                puVar22 = local_190;
                recovered_10008050(local_228);
              }
              recovered_10008050(puVar22);
              uVar23 = uStack_48;
              uVar15 = local_40;
            }
LAB_10017f0d:
            local_40 = uVar15;
            uStack_48 = uVar23;
            recovered_10008050(local_1c8);
            recovered_10008050(local_288);
            uVar15 = local_40;
            goto LAB_10017f25;
          case 3:
            goto switchD_10016b4d_caseD_3;
          }
        }
      } while ((local_160 & 1) == 0);
      uStack_48 = uStack_48 >> ((byte)local_40 & 7);
      local_40 = local_40 & 0xfffffff8;
      uVar15 = local_40;
      if (local_40 == 0 && local_50 == local_58) {
        uVar15 = *(uint *)(*param_1 + -4 + param_1[1]);
        uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18
        ;
        uVar23 = plVar27[1];
        if (uVar23 == 0) {
          uVar19 = 1;
        }
        else {
          local_c0 = (long *)CONCAT44(PF_PART4(local_c0, 4),uVar15);
          uVar24 = 0;
          uVar19 = 1;
          uVar7 = 0;
          do {
            uVar18 = uVar23 - uVar24;
            if (0x15af < uVar18) {
              uVar18 = 0x15b0;
            }
            if (uVar23 != uVar24) {
              uVar14 = uVar18 + (uVar18 == 0);
              uVar20 = (uint)uVar14;
              if (uVar23 - uVar24 < 4) {
                uVar16 = 0;
              }
              else {
                lVar12 = *plVar27 + 3 + uVar24;
                uVar16 = 0;
                do {
                  iVar8 = *(byte *)(lVar12 + -3 + uVar16) + uVar19;
                  iVar25 = (uint)*(byte *)(lVar12 + -2 + uVar16) + iVar8;
                  iVar9 = (uint)*(byte *)(lVar12 + -1 + uVar16) + iVar25;
                  uVar19 = (uint)*(byte *)(lVar12 + uVar16) + iVar9;
                  uVar7 = uVar7 + iVar8 + iVar25 + iVar9 + uVar19;
                  uVar16 = uVar16 + 4;
                } while ((uVar20 & 0x1ffc) != uVar16);
              }
              if ((uVar14 & 3) != 0) {
                uVar14 = 0;
                do {
                  uVar19 = uVar19 + *(byte *)(uVar16 + uVar24 + *plVar27 + uVar14);
                  uVar7 = uVar7 + uVar19;
                  uVar14 = uVar14 + 1;
                } while ((uVar20 & 3) != uVar14);
              }
              uVar19 = uVar19 % 0xfff1;
              uVar7 = uVar7 % 0xfff1;
            }
            uVar24 = uVar24 + uVar18;
          } while (uVar24 < uVar23);
          uVar19 = uVar19 + uVar7 * 0x10000;
        }
        uVar18 = CONCAT71((int7)(uVar18 >> 8),uVar19 == uVar15);
        goto switchD_10016b4d_caseD_3;
      }
    }
  }
LAB_10017f25:
  local_40 = uVar15;
  uVar18 = 0;
switchD_10016b4d_caseD_3:
  recovered_10008660(&local_128);
  return uVar18 & 0xffffffff;
}

#undef DAT_1001af90
#undef DAT_1001b380
#undef DAT_1001c3a8
#undef DAT_1001c410
#undef LAB_10017f64
#undef uStack_21b
#undef uStack_218
#undef uStack_213
#undef uStack_200
#undef uStack_1f0
#undef uStack_1e0
#undef uStack_1d0
#undef uStack_1c0
#undef uStack_1bb
#undef uStack_1b8
#undef uStack_1b3
#undef uStack_1b0
#undef uStack_1ac
#undef uStack_170
#undef lStack_148
#undef uStack_48
#undef local_2c8
#undef local_2b8
#undef local_2a8
#undef local_298
#undef local_288
#undef local_280
#undef local_268
#undef local_258
#undef local_248
#undef local_238
#undef local_228
#undef local_220
#undef local_208
#undef local_1f8
#undef local_1e8
#undef local_1d8
#undef local_1c8
#undef local_1a0
#undef local_198
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_168
#undef local_160
#undef local_158
#undef local_150
#undef local_140
#undef local_134
#undef local_130
#undef local_128
#undef local_120
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_9c
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
#undef local_40
#undef local_38
#undef uStack_2c0
#undef uStack_2b0
#undef uStack_2a0
#undef uStack_290
#undef uStack_27b
#undef uStack_278
#undef uStack_273
#undef uStack_260
#undef uStack_250
#undef uStack_240
#undef uStack_230

#undef DAT_1001adb8
#define DAT_1001adb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef DAT_1001ae2c
#define DAT_1001ae2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x300U)))
#undef DAT_1001aea0
#define DAT_1001aea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x374U)))
#undef DAT_1001af18
#define DAT_1001af18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ecU)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018100
 */

undefined8 recovered_10018100(long *param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ushort uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;

  if (*(char *)(param_2 + 0x5c) != '\x01') {
    return 0;
  }
  do {
    uVar8 = *(uint *)(param_2 + 0x58);
    uVar13 = 0;
    if (uVar8 == 0) {
      return 0;
    }
    lVar7 = *param_1;
    uVar18 = param_1[1];
    uVar12 = *(uint *)(param_1 + 4);
    uVar14 = param_1[3];
    uVar16 = 1;
    lVar19 = 0;
    iVar17 = 0;
    uVar20 = param_1[2];
    while( true ) {
      uVar10 = uVar20;
      if (uVar12 == 0) {
        if (uVar18 <= uVar20) {
          return 0;
        }
        uVar10 = uVar20 + 1;
        param_1[2] = uVar10;
        uVar14 = uVar14 | *(byte *)(lVar7 + uVar20);
        uVar12 = 8;
      }
      uVar13 = (uint)uVar14 & 1 | uVar13;
      uVar14 = uVar14 >> 1;
      param_1[3] = uVar14;
      uVar12 = uVar12 - 1;
      *(uint *)(param_1 + 4) = uVar12;
      uVar15 = *(uint *)(param_2 + uVar16 * 4);
      uVar11 = uVar15 + iVar17;
      if (uVar13 < uVar11) break;
      lVar19 = lVar19 + (ulong)uVar15;
      iVar17 = uVar11 * 2;
      uVar13 = uVar13 * 2;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar15;
      uVar20 = uVar10;
      if (uVar8 < uVar15) {
        return 0;
      }
    }
    uVar20 = lVar19 + (ulong)(uVar13 - iVar17);
    if (*(ulong *)(param_2 + 0x48) <= uVar20) {
      return 0;
    }
    uVar2 = *(ushort *)(*(long *)(param_2 + 0x40) + uVar20 * 2);
    if (uVar2 < 0x100) {
      uVar18 = param_4[1];
      if (param_5 <= uVar18) {
        return 0;
      }
      if (uVar18 == param_4[2]) {
        uVar14 = uVar18 * 2;
        if (uVar18 == 0) {
          uVar14 = 4;
        }
        if (uVar18 < uVar14) {
          lVar7 = recovered_10007ff0(uVar14);
          pvVar3 = (void *)*param_4;
          uVar18 = param_4[1];
          if (uVar18 != 0) {
            if (uVar18 < 4) {
              uVar20 = 0;
            }
            else {
              uVar20 = 0;
              if (0x1f < (ulong)(lVar7 - (long)pvVar3)) {
                if (uVar18 < 0x20) {
                  uVar16 = 0;
                }
                else {
                  uVar20 = uVar18 & 0xffffffffffffffe0;
                  uVar16 = 0;
                  do {
                    uVar4 = ((undefined8 *)((long)pvVar3 + uVar16))[1];
                    puVar1 = (undefined8 *)((long)pvVar3 + uVar16 + 0x10);
                    uVar5 = *puVar1;
                    uVar6 = puVar1[1];
                    *(undefined8 *)(lVar7 + uVar16) = *(undefined8 *)((long)pvVar3 + uVar16);
                    ((undefined8 *)(lVar7 + uVar16))[1] = uVar4;
                    puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar16);
                    *puVar1 = uVar5;
                    puVar1[1] = uVar6;
                    uVar16 = uVar16 + 0x20;
                  } while (uVar20 != uVar16);
                  if (uVar18 == uVar20) goto LAB_1001873f;
                  uVar16 = uVar20;
                  if ((uVar18 & 0x1c) == 0) goto LAB_100186d5;
                }
                uVar20 = uVar18 & 0xfffffffffffffffc;
                do {
                  *(undefined4 *)(lVar7 + uVar16) = *(undefined4 *)((long)pvVar3 + uVar16);
                  uVar16 = uVar16 + 4;
                } while (uVar20 != uVar16);
                if (uVar18 == uVar20) goto LAB_1001873f;
              }
            }
LAB_100186d5:
            uVar10 = uVar18 & 3;
            uVar16 = uVar20;
            if (uVar10 != 0) {
              do {
                *(undefined1 *)(lVar7 + uVar16) = *(undefined1 *)((long)pvVar3 + uVar16);
                uVar16 = uVar16 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            if (uVar20 - uVar18 < 0xfffffffffffffffd) {
              do {
                *(undefined1 *)(lVar7 + uVar16) = *(undefined1 *)((long)pvVar3 + uVar16);
                *(undefined1 *)(lVar7 + 1 + uVar16) = *(undefined1 *)((long)pvVar3 + uVar16 + 1);
                *(undefined1 *)(lVar7 + 2 + uVar16) = *(undefined1 *)((long)pvVar3 + uVar16 + 2);
                *(undefined1 *)(lVar7 + 3 + uVar16) = *(undefined1 *)((long)pvVar3 + uVar16 + 3);
                uVar16 = uVar16 + 4;
              } while (uVar18 != uVar16);
            }
          }
LAB_1001873f:
          recovered_10008050(pvVar3);
          *param_4 = lVar7;
          param_4[2] = uVar14;
          uVar18 = param_4[1];
        }
      }
      *(char *)(*param_4 + uVar18) = (char)uVar2;
      param_4[1] = param_4[1] + 1;
    }
    else {
      if (uVar2 == 0x100) {
        return CONCAT71((int7)((ulong)*(long *)(param_2 + 0x40) >> 8),1);
      }
      if (0x11d < uVar2) {
        return 0;
      }
      local_34 = *(uint *)(&DAT_1001adb8 + (ulong)(uVar2 - 0x101) * 4);
      uVar8 = *(uint *)(&DAT_1001ae2c + (ulong)(uVar2 - 0x101) * 4);
      if (uVar8 != 0) {
        if (0x18 < uVar8) {
          return 0;
        }
        if (uVar12 < uVar8) {
          do {
            if (uVar18 <= uVar10) goto LAB_10018311;
            uVar20 = uVar10 + 1;
            param_1[2] = uVar20;
            uVar14 = uVar14 | (ulong)*(byte *)(lVar7 + uVar10) << ((byte)uVar12 & 0x3f);
            param_1[3] = uVar14;
            uVar12 = uVar12 + 8;
            *(uint *)(param_1 + 4) = uVar12;
            uVar10 = uVar20;
          } while (uVar12 < uVar8);
        }
        else {
LAB_10018311:
          uVar20 = uVar10;
        }
        if (uVar12 < uVar8) {
          return 0;
        }
        uVar13 = (uint)uVar14;
        uVar14 = uVar14 >> ((byte)uVar8 & 0x3f);
        param_1[3] = uVar14;
        uVar12 = uVar12 - uVar8;
        *(uint *)(param_1 + 4) = uVar12;
        local_34 = local_34 + (~(uint)(-1L << ((byte)uVar8 & 0x3f)) & uVar13);
        uVar10 = uVar20;
      }
      if (*(char *)(param_3 + 0x5c) != '\x01') {
        return 0;
      }
      uVar8 = *(uint *)(param_3 + 0x58);
      uVar13 = 0;
      if (uVar8 == 0) {
        return 0;
      }
      uVar20 = 1;
      lVar19 = 0;
      iVar17 = 0;
      while( true ) {
        uVar16 = uVar10;
        if (uVar12 == 0) {
          if (uVar18 <= uVar10) {
            return 0;
          }
          uVar16 = uVar10 + 1;
          param_1[2] = uVar16;
          uVar14 = uVar14 | *(byte *)(lVar7 + uVar10);
          uVar12 = 8;
        }
        uVar13 = (uint)uVar14 & 1 | uVar13;
        uVar14 = uVar14 >> 1;
        param_1[3] = uVar14;
        uVar12 = uVar12 - 1;
        *(uint *)(param_1 + 4) = uVar12;
        uVar15 = *(uint *)(param_3 + uVar20 * 4);
        uVar11 = uVar15 + iVar17;
        if (uVar13 < uVar11) break;
        lVar19 = lVar19 + (ulong)uVar15;
        iVar17 = uVar11 * 2;
        uVar13 = uVar13 * 2;
        uVar15 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar15;
        uVar10 = uVar16;
        if (uVar8 < uVar15) {
          return 0;
        }
      }
      uVar20 = lVar19 + (ulong)(uVar13 - iVar17);
      if (*(ulong *)(param_3 + 0x48) <= uVar20) {
        return 0;
      }
      uVar2 = *(ushort *)(*(long *)(param_3 + 0x40) + uVar20 * 2);
      if (0x1d < uVar2) {
        return 0;
      }
      lVar19 = (ulong)uVar2 * 4;
      uVar8 = *(uint *)(&DAT_1001aea0 + lVar19);
      uVar13 = *(uint *)(&DAT_1001af18 + lVar19);
      if (uVar13 != 0) {
        if (0x18 < uVar13) {
          return 0;
        }
        for (; (uVar12 < uVar13 && (uVar16 < uVar18)); uVar16 = uVar16 + 1) {
          param_1[2] = uVar16 + 1;
          uVar14 = uVar14 | (ulong)*(byte *)(lVar7 + uVar16) << ((byte)uVar12 & 0x3f);
          param_1[3] = uVar14;
          uVar12 = uVar12 + 8;
          *(uint *)(param_1 + 4) = uVar12;
        }
        if (uVar12 < uVar13) {
          return 0;
        }
        param_1[3] = uVar14 >> ((byte)uVar13 & 0x3f);
        *(uint *)(param_1 + 4) = uVar12 - uVar13;
        uVar8 = uVar8 + (~(uint)(-1L << ((byte)uVar13 & 0x3f)) & (uint)uVar14);
      }
      if (uVar8 == 0) {
        return 0;
      }
      uVar18 = param_4[1];
      if (uVar18 < uVar8) {
        return 0;
      }
      if (param_5 - uVar18 < (ulong)local_34) {
        return 0;
      }
      if (local_34 != 0) {
        uVar13 = 0;
        do {
          lVar7 = *param_4;
          uVar14 = uVar18;
          lVar19 = lVar7;
          if (uVar18 == param_4[2]) {
            uVar20 = uVar18 * 2;
            if (uVar18 == 0) {
              uVar20 = 4;
            }
            if (uVar18 < uVar20) {
              lVar19 = recovered_10007ff0(uVar20);
              pvVar3 = (void *)*param_4;
              uVar14 = param_4[1];
              if (uVar14 != 0) {
                if (uVar14 < 4) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  if (0x1f < (ulong)(lVar19 - (long)pvVar3)) {
                    if (uVar14 < 0x20) {
                      uVar10 = 0;
                    }
                    else {
                      uVar16 = uVar14 & 0xffffffffffffffe0;
                      uVar10 = 0;
                      do {
                        uVar4 = ((undefined8 *)((long)pvVar3 + uVar10))[1];
                        puVar1 = (undefined8 *)((long)pvVar3 + uVar10 + 0x10);
                        uVar5 = *puVar1;
                        uVar6 = puVar1[1];
                        *(undefined8 *)(lVar19 + uVar10) = *(undefined8 *)((long)pvVar3 + uVar10);
                        ((undefined8 *)(lVar19 + uVar10))[1] = uVar4;
                        puVar1 = (undefined8 *)(lVar19 + 0x10 + uVar10);
                        *puVar1 = uVar5;
                        puVar1[1] = uVar6;
                        uVar10 = uVar10 + 0x20;
                      } while (uVar16 != uVar10);
                      if (uVar14 == uVar16) goto LAB_100184e0;
                      uVar10 = uVar16;
                      if ((uVar14 & 0x1c) == 0) goto LAB_10018609;
                    }
                    uVar16 = uVar14 & 0xfffffffffffffffc;
                    do {
                      *(undefined4 *)(lVar19 + uVar10) = *(undefined4 *)((long)pvVar3 + uVar10);
                      uVar10 = uVar10 + 4;
                    } while (uVar16 != uVar10);
                    if (uVar14 == uVar16) goto LAB_100184e0;
                  }
                }
LAB_10018609:
                uVar9 = uVar14 & 3;
                uVar10 = uVar16;
                if (uVar9 != 0) {
                  do {
                    *(undefined1 *)(lVar19 + uVar10) = *(undefined1 *)((long)pvVar3 + uVar10);
                    uVar10 = uVar10 + 1;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                if (uVar16 - uVar14 < 0xfffffffffffffffd) {
                  do {
                    *(undefined1 *)(lVar19 + uVar10) = *(undefined1 *)((long)pvVar3 + uVar10);
                    *(undefined1 *)(lVar19 + 1 + uVar10) =
                         *(undefined1 *)((long)pvVar3 + uVar10 + 1);
                    *(undefined1 *)(lVar19 + 2 + uVar10) =
                         *(undefined1 *)((long)pvVar3 + uVar10 + 2);
                    *(undefined1 *)(lVar19 + 3 + uVar10) =
                         *(undefined1 *)((long)pvVar3 + uVar10 + 3);
                    uVar10 = uVar10 + 4;
                  } while (uVar14 != uVar10);
                }
              }
LAB_100184e0:
              recovered_10008050(pvVar3);
              *param_4 = lVar19;
              param_4[2] = uVar20;
              uVar14 = param_4[1];
            }
          }
          *(undefined1 *)(lVar19 + uVar14) = *(undefined1 *)(lVar7 + (uVar18 - uVar8));
          uVar18 = param_4[1] + 1;
          param_4[1] = uVar18;
          uVar13 = uVar13 + 1;
        } while (uVar13 != local_34);
      }
    }
    if (*(char *)(param_2 + 0x5c) == '\0') {
      return 0;
    }
  } while( true );
}

#undef DAT_1001adb8
#undef DAT_1001ae2c
#undef DAT_1001aea0
#undef DAT_1001af18
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018790
 */

void recovered_10018790(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x48) = 0;
  recovered_10008050(*(void **)(param_1 + 0x40));
  return;
}


#undef DAT_1001ad20
#define DAT_1001ad20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f4U)))
#undef DAT_1001ad30
#define DAT_1001ad30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x204U)))
#undef DAT_1001ad40
#define DAT_1001ad40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x214U)))
#undef DAT_1001b39c
#define DAT_1001b39c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x870U)))
#undef DAT_1001c348
#define DAT_1001c348 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181cU)))
#undef DAT_1001c358
#define DAT_1001c358 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x182cU)))
#undef DAT_1001c368
#define DAT_1001c368 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x183cU)))
#undef DAT_1001c378
#define DAT_1001c378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x184cU)))
#undef DAT_1001c388
#define DAT_1001c388 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x185cU)))
#undef DAT_1001c395
#define DAT_1001c395 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1869U)))
#undef LAB_10018d33
#define LAB_10018d33 (*(uint8_t *)(0x10018d33U))
#undef UNK_1001ad28
#define UNK_1001ad28 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
#undef UNK_1001ad38
#define UNK_1001ad38 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x20cU)))
#undef UNK_1001ad48
#define UNK_1001ad48 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21cU)))
#undef UNK_1001c350
#define UNK_1001c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1824U)))
#undef UNK_1001c360
#define UNK_1001c360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1834U)))
#undef UNK_1001c370
#define UNK_1001c370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1844U)))
#undef UNK_1001c380
#define UNK_1001c380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1854U)))
#undef UNK_1001c390
#define UNK_1001c390 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1864U)))
#undef UNK_1001c398
#define UNK_1001c398 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x186cU)))
#undef UNK_1001c39d
#define UNK_1001c39d (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1871U)))
#undef _DAT_1001ad20
#define _DAT_1001ad20 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f4U)))
#undef _DAT_1001ad30
#define _DAT_1001ad30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x204U)))
#undef _DAT_1001ad40
#define _DAT_1001ad40 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x214U)))
#undef _DAT_1001c348
#define _DAT_1001c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x181cU)))
#undef _DAT_1001c358
#define _DAT_1001c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x182cU)))
#undef _DAT_1001c368
#define _DAT_1001c368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x183cU)))
#undef _DAT_1001c378
#define _DAT_1001c378 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x184cU)))
#undef _DAT_1001c388
#define _DAT_1001c388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x185cU)))
#undef _DAT_1001c395
#define _DAT_1001c395 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1869U)))
#undef uRam000000001001ad28
#define uRam000000001001ad28 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
#undef uRam000000001001ad38
#define uRam000000001001ad38 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x20cU)))
#undef uRam000000001001ad48
#define uRam000000001001ad48 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21cU)))
#undef uRam000000001001c350
#define uRam000000001001c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1824U)))
#undef uRam000000001001c360
#define uRam000000001001c360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1834U)))
#undef uRam000000001001c370
#define uRam000000001001c370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1844U)))
#undef uRam000000001001c380
#define uRam000000001001c380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1854U)))
#undef uRam000000001001c390
#define uRam000000001001c390 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x1864U)))->pf_payload_bits
#undef uRam000000001001c398
#define uRam000000001001c398 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x186cU)))->pf_payload_bits
#undef uRam000000001001c39d
#define uRam000000001001c39d (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1871U)))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_88 (*(code * *)(pf_stack_frame + 56))
#define local_80 (*(undefined * *)(pf_stack_frame + 64))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined8 * *)(pf_stack_frame + 112))
#define local_48 (*(undefined8 *)(pf_stack_frame + 120))
#define local_40 (*(undefined8 *)(pf_stack_frame + 128))
#define local_38 (*(undefined8 * *)(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100187b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100187b0(void)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;

  local_38 = (undefined8 *)recovered_10007ff0(0x480);
  recovered_10008050((void *)0x0);
  uVar2 = uRam000000001001ad28;
  uVar1 = _DAT_1001ad20;
  local_68 = (undefined1 *)&local_a8;
  local_50 = local_38;
  local_40 = 0x120;
  *local_38 = _DAT_1001ad20;
  local_38[1] = uVar2;
  local_38[2] = uVar1;
  local_38[3] = uVar2;
  local_38[4] = uVar1;
  local_38[5] = uVar2;
  local_38[6] = uVar1;
  local_38[7] = uVar2;
  local_38[8] = uVar1;
  local_38[9] = uVar2;
  local_38[10] = uVar1;
  local_38[0xb] = uVar2;
  local_38[0xc] = uVar1;
  local_38[0xd] = uVar2;
  local_38[0xe] = uVar1;
  local_38[0xf] = uVar2;
  local_38[0x10] = uVar1;
  local_38[0x11] = uVar2;
  local_38[0x12] = uVar1;
  local_38[0x13] = uVar2;
  local_38[0x14] = uVar1;
  local_38[0x15] = uVar2;
  local_38[0x16] = uVar1;
  local_38[0x17] = uVar2;
  local_38[0x18] = uVar1;
  local_38[0x19] = uVar2;
  local_38[0x1a] = uVar1;
  local_38[0x1b] = uVar2;
  local_38[0x1c] = uVar1;
  local_38[0x1d] = uVar2;
  local_38[0x1e] = uVar1;
  local_38[0x1f] = uVar2;
  local_38[0x20] = uVar1;
  local_38[0x21] = uVar2;
  local_38[0x22] = uVar1;
  local_38[0x23] = uVar2;
  local_38[0x24] = uVar1;
  local_38[0x25] = uVar2;
  local_38[0x26] = uVar1;
  local_38[0x27] = uVar2;
  local_38[0x28] = uVar1;
  local_38[0x29] = uVar2;
  local_38[0x2a] = uVar1;
  local_38[0x2b] = uVar2;
  local_38[0x2c] = uVar1;
  local_38[0x2d] = uVar2;
  local_38[0x2e] = uVar1;
  local_38[0x2f] = uVar2;
  local_38[0x30] = uVar1;
  local_38[0x31] = uVar2;
  local_38[0x32] = uVar1;
  local_38[0x33] = uVar2;
  local_38[0x34] = uVar1;
  local_38[0x35] = uVar2;
  local_38[0x36] = uVar1;
  local_38[0x37] = uVar2;
  local_38[0x38] = uVar1;
  local_38[0x39] = uVar2;
  local_38[0x3a] = uVar1;
  local_38[0x3b] = uVar2;
  local_38[0x3c] = uVar1;
  local_38[0x3d] = uVar2;
  local_38[0x3e] = uVar1;
  local_38[0x3f] = uVar2;
  local_38[0x40] = uVar1;
  local_38[0x41] = uVar2;
  local_38[0x42] = uVar1;
  local_38[0x43] = uVar2;
  local_38[0x44] = uVar1;
  local_38[0x45] = uVar2;
  local_38[0x46] = uVar1;
  local_38[0x47] = uVar2;
  local_38[0x48] = uVar1;
  local_38[0x49] = uVar2;
  local_38[0x4a] = uVar1;
  local_38[0x4b] = uVar2;
  local_38[0x4c] = uVar1;
  local_38[0x4d] = uVar2;
  local_38[0x4e] = uVar1;
  local_38[0x4f] = uVar2;
  local_38[0x50] = uVar1;
  local_38[0x51] = uVar2;
  local_38[0x52] = uVar1;
  local_38[0x53] = uVar2;
  local_38[0x54] = uVar1;
  local_38[0x55] = uVar2;
  local_38[0x56] = uVar1;
  local_38[0x57] = uVar2;
  local_38[0x58] = uVar1;
  local_38[0x59] = uVar2;
  local_38[0x5a] = uVar1;
  local_38[0x5b] = uVar2;
  local_38[0x5c] = uVar1;
  local_38[0x5d] = uVar2;
  local_38[0x5e] = uVar1;
  local_38[0x5f] = uVar2;
  local_38[0x60] = uVar1;
  local_38[0x61] = uVar2;
  local_38[0x62] = uVar1;
  local_38[99] = uVar2;
  local_38[100] = uVar1;
  local_38[0x65] = uVar2;
  local_38[0x66] = uVar1;
  local_38[0x67] = uVar2;
  local_38[0x68] = uVar1;
  local_38[0x69] = uVar2;
  local_38[0x6a] = uVar1;
  local_38[0x6b] = uVar2;
  local_38[0x6c] = uVar1;
  local_38[0x6d] = uVar2;
  local_38[0x6e] = uVar1;
  local_38[0x6f] = uVar2;
  local_38[0x70] = uVar1;
  local_38[0x71] = uVar2;
  local_38[0x72] = uVar1;
  local_38[0x73] = uVar2;
  local_38[0x74] = uVar1;
  local_38[0x75] = uVar2;
  local_38[0x76] = uVar1;
  local_38[0x77] = uVar2;
  local_38[0x78] = uVar1;
  local_38[0x79] = uVar2;
  local_38[0x7a] = uVar1;
  local_38[0x7b] = uVar2;
  local_38[0x7c] = uVar1;
  local_38[0x7d] = uVar2;
  local_38[0x7e] = uVar1;
  local_38[0x7f] = uVar2;
  local_38[0x80] = uVar1;
  local_38[0x81] = uVar2;
  local_38[0x82] = uVar1;
  local_38[0x83] = uVar2;
  local_38[0x84] = uVar1;
  local_38[0x85] = uVar2;
  local_38[0x86] = uVar1;
  local_38[0x87] = uVar2;
  local_38[0x88] = uVar1;
  local_38[0x89] = uVar2;
  local_38[0x8a] = uVar1;
  local_38[0x8b] = uVar2;
  local_38[0x8c] = uVar1;
  local_38[0x8d] = uVar2;
  local_38[0x8e] = uVar1;
  local_38[0x8f] = uVar2;
  uVar4 = uRam000000001001ad38;
  uVar3 = _DAT_1001ad30;
  local_48 = 0x120;
  local_38[0x48] = _DAT_1001ad30;
  local_38[0x49] = uVar4;
  local_38[0x4a] = uVar3;
  local_38[0x4b] = uVar4;
  local_38[0x4c] = uVar3;
  local_38[0x4d] = uVar4;
  local_38[0x4e] = uVar3;
  local_38[0x4f] = uVar4;
  local_38[0x50] = uVar3;
  local_38[0x51] = uVar4;
  local_38[0x52] = uVar3;
  local_38[0x53] = uVar4;
  local_38[0x54] = uVar3;
  local_38[0x55] = uVar4;
  local_38[0x56] = uVar3;
  local_38[0x57] = uVar4;
  local_38[0x58] = uVar3;
  local_38[0x59] = uVar4;
  local_38[0x5a] = uVar3;
  local_38[0x5b] = uVar4;
  local_38[0x5c] = uVar3;
  local_38[0x5d] = uVar4;
  local_38[0x5e] = uVar3;
  local_38[0x5f] = uVar4;
  local_38[0x60] = uVar3;
  local_38[0x61] = uVar4;
  local_38[0x62] = uVar3;
  local_38[99] = uVar4;
  local_38[100] = uVar3;
  local_38[0x65] = uVar4;
  local_38[0x66] = uVar3;
  local_38[0x67] = uVar4;
  local_38[0x68] = uVar3;
  local_38[0x69] = uVar4;
  local_38[0x6a] = uVar3;
  local_38[0x6b] = uVar4;
  local_38[0x6c] = uVar3;
  local_38[0x6d] = uVar4;
  local_38[0x6e] = uVar3;
  local_38[0x6f] = uVar4;
  local_38[0x70] = uVar3;
  local_38[0x71] = uVar4;
  local_38[0x72] = uVar3;
  local_38[0x73] = uVar4;
  local_38[0x74] = uVar3;
  local_38[0x75] = uVar4;
  local_38[0x76] = uVar3;
  local_38[0x77] = uVar4;
  local_38[0x78] = uVar3;
  local_38[0x79] = uVar4;
  local_38[0x7a] = uVar3;
  local_38[0x7b] = uVar4;
  local_38[0x7c] = uVar3;
  local_38[0x7d] = uVar4;
  local_38[0x7e] = uVar3;
  local_38[0x7f] = uVar4;
  uVar4 = uRam000000001001ad48;
  uVar3 = _DAT_1001ad40;
  local_38[0x80] = _DAT_1001ad40;
  local_38[0x81] = uVar4;
  local_38[0x82] = uVar3;
  local_38[0x83] = uVar4;
  local_38[0x84] = uVar3;
  local_38[0x85] = uVar4;
  local_38[0x86] = uVar3;
  local_38[0x87] = uVar4;
  local_38[0x88] = uVar3;
  local_38[0x89] = uVar4;
  local_38[0x8a] = uVar3;
  local_38[0x8b] = uVar4;
  local_38[0x8c] = uVar1;
  local_38[0x8d] = uVar2;
  local_38[0x8e] = uVar1;
  local_38[0x8f] = uVar2;
  uRam000000001001c398 = 0;
  uRam000000001001c39d = 0;
  _DAT_1001c388 = 0;
  uRam000000001001c390 = 0;
  _DAT_1001c395 = 0;
  _DAT_1001c378 = 0;
  uRam000000001001c380 = 0;
  _DAT_1001c368 = 0;
  uRam000000001001c370 = 0;
  _DAT_1001c358 = 0;
  uRam000000001001c360 = 0;
  _DAT_1001c348 = 0;
  uRam000000001001c350 = 0;
  local_88 = recovered_10007fa0;
  local_80 = &DAT_1001b39c;
  local_70 = &LAB_10018d33;
  local_a0 = 1;
  local_78 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  recovered_10008640(&local_a8);
  recovered_10018d90((long *)&local_50,(uint *)&DAT_1001c348,0);
  recovered_10008050(local_38);
  recovered_10008660(&local_a8);
  return;
}

#undef DAT_1001ad20
#undef DAT_1001ad30
#undef DAT_1001ad40
#undef DAT_1001b39c
#undef DAT_1001c348
#undef DAT_1001c358
#undef DAT_1001c368
#undef DAT_1001c378
#undef DAT_1001c388
#undef DAT_1001c395
#undef LAB_10018d33
#undef UNK_1001ad28
#undef UNK_1001ad38
#undef UNK_1001ad48
#undef UNK_1001c350
#undef UNK_1001c360
#undef UNK_1001c370
#undef UNK_1001c380
#undef UNK_1001c390
#undef UNK_1001c398
#undef UNK_1001c39d
#undef _DAT_1001ad20
#undef _DAT_1001ad30
#undef _DAT_1001ad40
#undef _DAT_1001c348
#undef _DAT_1001c358
#undef _DAT_1001c368
#undef _DAT_1001c378
#undef _DAT_1001c388
#undef _DAT_1001c395
#undef uRam000000001001ad28
#undef uRam000000001001ad38
#undef uRam000000001001ad48
#undef uRam000000001001c350
#undef uRam000000001001c360
#undef uRam000000001001c370
#undef uRam000000001001c380
#undef uRam000000001001c390
#undef uRam000000001001c398
#undef uRam000000001001c39d
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#define local_98 (*(int *)(pf_stack_frame + 40))
#define local_94 (*(int *)(pf_stack_frame + 44))
#define local_90 (*(int *)(pf_stack_frame + 48))
#define local_8c (*(int *)(pf_stack_frame + 52))
#define local_88 (*(int *)(pf_stack_frame + 56))
#define local_84 (*(int *)(pf_stack_frame + 60))
#define local_80 (*(int *)(pf_stack_frame + 64))
#define local_7c (*(int *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(int *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(int *)(pf_stack_frame + 84))
#define local_68 (*(int *)(pf_stack_frame + 88))
#define local_64 (*(int *)(pf_stack_frame + 92))
#define local_60 (*(int *)(pf_stack_frame + 96))
#define local_5c (*(int *)(pf_stack_frame + 100))
#define local_58 (*(int *)(pf_stack_frame + 104))
#define local_54 (*(int *)(pf_stack_frame + 108))
#define local_50 (*(int *)(pf_stack_frame + 112))
#define local_4c (*(int *)(pf_stack_frame + 116))
#define local_48 (*(int *)(pf_stack_frame + 120))
#define local_44 (*(int *)(pf_stack_frame + 124))
#define local_40 (*(ulong *)(pf_stack_frame + 128))
#define local_34 (*(int *)(pf_stack_frame + 140))
#define auStack_a8 (*(uint (*)[4])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018d90
 */

ulong recovered_10018d90(long *param_1,uint *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;

  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  recovered_10008050(*(void **)(param_2 + 0x10));
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  recovered_10008050((void *)0x0);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    lVar9 = *param_1;
    lVar13 = 0;
    do {
      uVar3 = *(uint *)(lVar9 + lVar13);
      if (0xf < (ulong)uVar3) {
        return 0;
      }
      param_2[uVar3] = param_2[uVar3] + 1;
      uVar15 = param_2[0x16];
      if (param_2[0x16] <= uVar3) {
        uVar15 = uVar3;
      }
      param_2[0x16] = uVar15;
      lVar13 = lVar13 + 4;
    } while (uVar10 * 4 != lVar13);
  }
  if (uVar10 == *param_2) {
    *(char *)(param_2 + 0x17) = (char)(param_3 & 0xffffffff);
    return param_3 & 0xffffffff;
  }
  uVar3 = param_2[1];
  if (2 < (int)uVar3) {
    return 0;
  }
  iVar8 = 4 - (param_2[2] + uVar3 * 2);
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[3];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[4];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[5];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[6];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[7];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[8];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[9];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[10];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xb];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xc];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xd];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xe];
  if (iVar8 < 0) {
    return 0;
  }
  if (iVar8 * 2 < (int)param_2[0xf]) {
    return 0;
  }
  iVar8 = param_2[2] + uVar3;
  iVar16 = param_2[3] + iVar8;
  local_64 = param_2[4] + iVar16;
  local_68 = param_2[5] + local_64;
  local_60 = param_2[6] + local_68;
  local_5c = param_2[7] + local_60;
  local_58 = param_2[8] + local_5c;
  local_54 = param_2[9] + local_58;
  local_50 = param_2[10] + local_54;
  local_34 = param_2[0xb] + local_50;
  local_4c = param_2[0xc] + local_34;
  local_48 = param_2[0xd] + local_4c;
  local_44 = param_2[0xe] + local_48;
  local_40 = (ulong)(param_2[0xf] + local_44);
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  if (*(ulong *)(param_2 + 0x14) < local_40) {
    lVar9 = recovered_10007ff0(local_40 * 2);
    pvVar4 = *(void **)(param_2 + 0x10);
    uVar10 = *(ulong *)(param_2 + 0x12);
    if (uVar10 != 0) {
      uVar11 = 0;
      if ((3 < uVar10) && (0x1f < (ulong)(lVar9 - (long)pvVar4))) {
        if (uVar10 < 0x10) {
          uVar12 = 0;
        }
        else {
          uVar11 = uVar10 & 0xfffffffffffffff0;
          uVar12 = 0;
          do {
            puVar2 = (undefined8 *)((long)pvVar4 + uVar12 * 2);
            uVar5 = puVar2[1];
            puVar1 = (undefined8 *)((long)pvVar4 + uVar12 * 2 + 0x10);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            puVar1 = (undefined8 *)(lVar9 + uVar12 * 2);
            *puVar1 = *puVar2;
            puVar1[1] = uVar5;
            puVar2 = (undefined8 *)(lVar9 + 0x10 + uVar12 * 2);
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            uVar12 = uVar12 + 0x10;
          } while (uVar11 != uVar12);
          if (uVar10 == uVar11) goto LAB_10019085;
          uVar12 = uVar11;
          if ((uVar10 & 0xc) == 0) goto LAB_1001902c;
        }
        uVar11 = uVar10 & 0xfffffffffffffffc;
        do {
          *(undefined8 *)(lVar9 + uVar12 * 2) = *(undefined8 *)((long)pvVar4 + uVar12 * 2);
          uVar12 = uVar12 + 4;
        } while (uVar11 != uVar12);
        if (uVar10 == uVar11) goto LAB_10019085;
      }
LAB_1001902c:
      uVar14 = uVar10 & 3;
      uVar12 = uVar11;
      if (uVar14 != 0) {
        do {
          *(undefined2 *)(lVar9 + uVar12 * 2) = *(undefined2 *)((long)pvVar4 + uVar12 * 2);
          uVar12 = uVar12 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (uVar11 - uVar10 < 0xfffffffffffffffd) {
        do {
          *(undefined2 *)(lVar9 + uVar12 * 2) = *(undefined2 *)((long)pvVar4 + uVar12 * 2);
          *(undefined2 *)(lVar9 + 2 + uVar12 * 2) = *(undefined2 *)((long)pvVar4 + uVar12 * 2 + 2);
          *(undefined2 *)(lVar9 + 4 + uVar12 * 2) = *(undefined2 *)((long)pvVar4 + uVar12 * 2 + 4);
          *(undefined2 *)(lVar9 + 6 + uVar12 * 2) = *(undefined2 *)((long)pvVar4 + uVar12 * 2 + 6);
          uVar12 = uVar12 + 4;
        } while (uVar10 != uVar12);
      }
    }
LAB_10019085:
    recovered_10008050(pvVar4);
    *(long *)(param_2 + 0x10) = lVar9;
    *(ulong *)(param_2 + 0x14) = local_40;
    uVar10 = *(ulong *)(param_2 + 0x12);
  }
  else {
    uVar10 = 0;
  }
  uVar11 = local_40 - uVar10;
  if (local_40 < uVar10 || uVar11 == 0) goto LAB_1001917f;
  lVar9 = *(long *)(param_2 + 0x10);
  if (uVar11 < 4) {
LAB_10019154:
    do {
      *(undefined2 *)(lVar9 + uVar10 * 2) = 0;
      uVar10 = uVar10 + 1;
    } while (local_40 != uVar10);
  }
  else if (uVar11 < 0x10) {
    uVar12 = 0;
LAB_1001912c:
    uVar14 = uVar11 & 0xfffffffffffffffc;
    lVar13 = uVar10 * 2;
    uVar10 = uVar10 + uVar14;
    do {
      *(undefined8 *)(lVar9 + lVar13 + uVar12 * 2) = 0;
      uVar12 = uVar12 + 4;
    } while (uVar14 != uVar12);
    if (uVar11 != uVar14) goto LAB_10019154;
  }
  else {
    uVar12 = uVar11 & 0xfffffffffffffff0;
    lVar13 = lVar9 + uVar10 * 2;
    uVar14 = 0;
    do {
      puVar2 = (undefined8 *)(lVar13 + uVar14 * 2);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar13 + 0x10 + uVar14 * 2);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar14 = uVar14 + 0x10;
    } while (uVar12 != uVar14);
    if (uVar11 != uVar12) {
      if ((uVar11 & 0xc) == 0) {
        uVar10 = uVar10 + uVar12;
        goto LAB_10019154;
      }
      goto LAB_1001912c;
    }
  }
  *(ulong *)(param_2 + 0x12) = local_40;
LAB_1001917f:
  auStack_a8[1] = 0;
  auStack_a8[2] = uVar3;
  auStack_a8[3] = iVar8;
  local_98 = iVar16;
  local_94 = local_64;
  local_90 = local_68;
  local_8c = local_60;
  local_88 = local_5c;
  local_84 = local_58;
  local_80 = local_54;
  local_7c = local_50;
  local_78 = local_34;
  local_74 = local_4c;
  local_70 = local_48;
  local_6c = local_44;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    lVar9 = *param_1;
    lVar13 = *(long *)(param_2 + 0x10);
    uVar11 = 0;
    do {
      uVar12 = (ulong)*(uint *)(lVar9 + uVar11 * 4);
      if (uVar12 != 0) {
        uVar3 = auStack_a8[uVar12];
        auStack_a8[uVar12] = uVar3 + 1;
        *(short *)(lVar13 + (ulong)uVar3 * 2) = (short)uVar11;
      }
      uVar11 = uVar11 + 1;
    } while ((uVar11 & 0xffffffff) < uVar10);
  }
  *(undefined1 *)(param_2 + 0x17) = 1;
  return CONCAT71((uint7)(uint3)((uint)iVar16 >> 8),1);
}

#undef local_98
#undef local_94
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
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_34
#undef auStack_a8

#undef DAT_1001ad50
#define DAT_1001ad50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x224U)))
#undef DAT_1001b3a4
#define DAT_1001b3a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x878U)))
#undef DAT_1001c3b0
#define DAT_1001c3b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1884U)))
#undef DAT_1001c3c0
#define DAT_1001c3c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1894U)))
#undef DAT_1001c3d0
#define DAT_1001c3d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18a4U)))
#undef DAT_1001c3e0
#define DAT_1001c3e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18b4U)))
#undef DAT_1001c3f0
#define DAT_1001c3f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18c4U)))
#undef DAT_1001c3fd
#define DAT_1001c3fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18d1U)))
#undef LAB_10019359
#define LAB_10019359 (*(uint8_t *)(0x10019359U))
#undef UNK_1001ad58
#define UNK_1001ad58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22cU)))
#undef UNK_1001c3b8
#define UNK_1001c3b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x188cU)))
#undef UNK_1001c3c8
#define UNK_1001c3c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x189cU)))
#undef UNK_1001c3d8
#define UNK_1001c3d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18acU)))
#undef UNK_1001c3e8
#define UNK_1001c3e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18bcU)))
#undef UNK_1001c3f8
#define UNK_1001c3f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18ccU)))
#undef UNK_1001c400
#define UNK_1001c400 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18d4U)))
#undef UNK_1001c405
#define UNK_1001c405 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18d9U)))
#undef _DAT_1001ad50
#define _DAT_1001ad50 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x224U)))
#undef _DAT_1001c3b0
#define _DAT_1001c3b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1884U)))
#undef _DAT_1001c3c0
#define _DAT_1001c3c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1894U)))
#undef _DAT_1001c3d0
#define _DAT_1001c3d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18a4U)))
#undef _DAT_1001c3e0
#define _DAT_1001c3e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18b4U)))
#undef _DAT_1001c3f0
#define _DAT_1001c3f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18c4U)))
#undef _DAT_1001c3fd
#define _DAT_1001c3fd (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18d1U)))
#undef uRam000000001001ad58
#define uRam000000001001ad58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22cU)))
#undef uRam000000001001c3b8
#define uRam000000001001c3b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x188cU)))
#undef uRam000000001001c3c8
#define uRam000000001001c3c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x189cU)))
#undef uRam000000001001c3d8
#define uRam000000001001c3d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18acU)))
#undef uRam000000001001c3e8
#define uRam000000001001c3e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18bcU)))
#undef uRam000000001001c3f8
#define uRam000000001001c3f8 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x18ccU)))->pf_payload_bits
#undef uRam000000001001c400
#define uRam000000001001c400 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x18d4U)))->pf_payload_bits
#undef uRam000000001001c405
#define uRam000000001001c405 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18d9U)))
#define local_80 (*(undefined * *)(pf_stack_frame + 64))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined8 * *)(pf_stack_frame + 112))
#define local_48 (*(undefined8 *)(pf_stack_frame + 120))
#define local_40 (*(undefined8 *)(pf_stack_frame + 128))
#define local_38 (*(undefined8 * *)(pf_stack_frame + 136))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_88 (*(code * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10019230(void)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_38 = (undefined8 *)recovered_10007ff0(0x80);
  recovered_10008050((void *)0x0);
  uVar2 = uRam000000001001ad58;
  uVar1 = _DAT_1001ad50;
  local_68 = (undefined1 *)&local_a8;
  local_50 = local_38;
  local_40 = 0x20;
  *local_38 = _DAT_1001ad50;
  local_38[1] = uVar2;
  local_38[2] = uVar1;
  local_38[3] = uVar2;
  local_38[4] = uVar1;
  local_38[5] = uVar2;
  local_38[6] = uVar1;
  local_38[7] = uVar2;
  local_38[8] = uVar1;
  local_38[9] = uVar2;
  local_38[10] = uVar1;
  local_38[0xb] = uVar2;
  local_38[0xc] = uVar1;
  local_38[0xd] = uVar2;
  local_38[0xe] = uVar1;
  local_38[0xf] = uVar2;
  local_48 = 0x20;
  _DAT_1001c3b0 = 0;
  uRam000000001001c3b8 = 0;
  _DAT_1001c3c0 = 0;
  uRam000000001001c3c8 = 0;
  _DAT_1001c3d0 = 0;
  uRam000000001001c3d8 = 0;
  _DAT_1001c3e0 = 0;
  uRam000000001001c3e8 = 0;
  _DAT_1001c3f0 = 0;
  uRam000000001001c3f8 = 0;
  _DAT_1001c3fd = 0;
  uRam000000001001c400 = 0;
  uRam000000001001c405 = 0;
  local_88 = recovered_10007fa0;
  local_80 = &DAT_1001b3a4;
  local_70 = &LAB_10019359;
  local_a0 = 1;
  local_78 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  recovered_10008640(&local_a8);
  recovered_10018d90((long *)&local_50,(uint *)&DAT_1001c3b0,0);
  recovered_10008050(local_38);
  recovered_10008660(&local_a8);
  return;
}

#undef DAT_1001ad50
#undef DAT_1001b3a4
#undef DAT_1001c3b0
#undef DAT_1001c3c0
#undef DAT_1001c3d0
#undef DAT_1001c3e0
#undef DAT_1001c3f0
#undef DAT_1001c3fd
#undef LAB_10019359
#undef UNK_1001ad58
#undef UNK_1001c3b8
#undef UNK_1001c3c8
#undef UNK_1001c3d8
#undef UNK_1001c3e8
#undef UNK_1001c3f8
#undef UNK_1001c400
#undef UNK_1001c405
#undef _DAT_1001ad50
#undef _DAT_1001c3b0
#undef _DAT_1001c3c0
#undef _DAT_1001c3d0
#undef _DAT_1001c3e0
#undef _DAT_1001c3f0
#undef _DAT_1001c3fd
#undef uRam000000001001ad58
#undef uRam000000001001c3b8
#undef uRam000000001001c3c8
#undef uRam000000001001c3d8
#undef uRam000000001001c3e8
#undef uRam000000001001c3f8
#undef uRam000000001001c400
#undef uRam000000001001c405
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef local_a8
#undef local_a0
#undef local_88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100193c0
 */

long recovered_100193c0(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;

  lVar7 = *param_1;
  bVar22 = lVar7 == 0;
  if (bVar22) {
    uVar11 = param_1[1];
  }
  else {
    uVar11 = param_2 - lVar7 >> 2;
  }
  if (param_3 == param_4) goto LAB_10019681;
  uVar20 = (long)param_4 + (-4 - (long)param_3);
  uVar21 = uVar20 >> 2;
  uVar8 = param_1[1];
  uVar14 = param_1[2];
  uVar13 = uVar8 + uVar21 + 1;
  if (uVar14 < uVar13) {
    uVar8 = 4;
    if (uVar14 != 0) {
      uVar8 = uVar14;
    }
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 * 2;
    } while (uVar14 < uVar13);
    lVar7 = recovered_10007ff0(uVar14 * 4);
    pvVar3 = (void *)*param_1;
    uVar8 = param_1[1];
    if (uVar8 != 0) {
      uVar13 = 0;
      if ((7 < uVar8) && (0x1f < (ulong)(lVar7 - (long)pvVar3))) {
        uVar13 = uVar8 & 0xfffffffffffffff8;
        uVar9 = 0;
        do {
          puVar1 = (undefined8 *)((long)pvVar3 + uVar9 * 4);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar3 + uVar9 * 4 + 0x10);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          puVar2 = (undefined8 *)(lVar7 + uVar9 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar9 * 4);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          uVar9 = uVar9 + 8;
        } while (uVar13 != uVar9);
        if (uVar8 == uVar13) goto LAB_1001951b;
      }
      uVar12 = uVar8 & 3;
      uVar9 = uVar13;
      if (uVar12 != 0) {
        do {
          *(undefined4 *)(lVar7 + uVar9 * 4) = *(undefined4 *)((long)pvVar3 + uVar9 * 4);
          uVar9 = uVar9 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar13 - uVar8 < 0xfffffffffffffffd) {
        do {
          *(undefined4 *)(lVar7 + uVar9 * 4) = *(undefined4 *)((long)pvVar3 + uVar9 * 4);
          *(undefined4 *)(lVar7 + 4 + uVar9 * 4) = *(undefined4 *)((long)pvVar3 + uVar9 * 4 + 4);
          *(undefined4 *)(lVar7 + 8 + uVar9 * 4) = *(undefined4 *)((long)pvVar3 + uVar9 * 4 + 8);
          *(undefined4 *)(lVar7 + 0xc + uVar9 * 4) = *(undefined4 *)((long)pvVar3 + uVar9 * 4 + 0xc)
          ;
          uVar9 = uVar9 + 4;
        } while (uVar8 != uVar9);
      }
    }
LAB_1001951b:
    recovered_10008050(pvVar3);
    *param_1 = lVar7;
    param_1[2] = uVar14;
    uVar8 = param_1[1];
  }
  uVar14 = uVar8 - uVar11;
  if (uVar11 <= uVar8 && uVar14 != 0) {
    uVar13 = uVar8;
    if (0x33 < uVar14) {
      uVar9 = ~uVar11 + uVar8;
      uVar17 = lVar7 + uVar8 * 4 + (uVar20 & 0xfffffffffffffffc);
      uVar12 = (lVar7 + uVar8 * 4) - 4;
      if ((uVar20 < 0xffffffffffffffe0 && uVar9 >> 0x3e == 0) &&
          (uVar12 + uVar9 * -4 <= uVar12 && uVar17 + uVar9 * -4 <= uVar17)) {
        uVar9 = uVar14 & 0xfffffffffffffff8;
        uVar13 = uVar8 - uVar9;
        lVar19 = uVar8 * 4 + lVar7;
        lVar16 = uVar8 * 4 + lVar7 + (uVar20 & 0xfffffffffffffffc);
        lVar18 = 0;
        do {
          puVar1 = (undefined8 *)(lVar19 + -0x20 + lVar18 * 4);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar19 + -0x10 + lVar18 * 4);
          uVar6 = puVar2[1];
          puVar1 = (undefined8 *)(lVar16 + -0xc + lVar18 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar6;
          puVar1 = (undefined8 *)(lVar16 + -0x1c + lVar18 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar18 = lVar18 + -8;
        } while (-lVar18 != uVar9);
        if (uVar14 == uVar9) goto LAB_10019631;
      }
    }
    do {
      *(undefined4 *)(lVar7 + uVar21 * 4 + uVar13 * 4) = *(undefined4 *)(lVar7 + -4 + uVar13 * 4);
      uVar13 = uVar13 - 1;
    } while (uVar11 < uVar13);
  }
LAB_10019631:
  uVar21 = uVar21 + 1;
  if ((uVar20 < 0x2c) || ((lVar7 + uVar11 * 4) - (long)param_3 < 0x20)) {
    puVar15 = param_3;
    uVar14 = uVar11;
LAB_1001964d:
    puVar10 = (undefined4 *)(lVar7 + uVar14 * 4);
    do {
      *puVar10 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar10 = puVar10 + 1;
    } while (puVar15 != param_4);
  }
  else {
    uVar13 = uVar21 & 0xfffffffffffffff8;
    puVar15 = param_3 + uVar13;
    uVar14 = uVar11 + uVar13;
    lVar19 = uVar11 * 4 + lVar7;
    uVar20 = 0;
    do {
      uVar4 = *(undefined8 *)((long)(param_3 + uVar20) + 8);
      uVar5 = *(undefined8 *)(param_3 + uVar20 + 4);
      uVar6 = *(undefined8 *)((long)(param_3 + uVar20 + 4) + 8);
      puVar1 = (undefined8 *)(lVar19 + uVar20 * 4);
      *puVar1 = *(undefined8 *)(param_3 + uVar20);
      puVar1[1] = uVar4;
      puVar1 = (undefined8 *)(lVar19 + 0x10 + uVar20 * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      uVar20 = uVar20 + 8;
    } while (uVar13 != uVar20);
    if (uVar21 != uVar13) goto LAB_1001964d;
  }
  param_1[1] = uVar8 + uVar21;
  bVar22 = lVar7 == 0;
LAB_10019681:
  lVar19 = 0;
  if (!bVar22) {
    lVar19 = lVar7 + uVar11 * 4;
  }
  return lVar19;
}


#undef DAT_1001ad60
#define DAT_1001ad60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x234U)))
#undef DAT_1001ad70
#define DAT_1001ad70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_1001ad80
#define DAT_1001ad80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x254U)))
#undef DAT_1001c411
#define DAT_1001c411 (*(char *)(((uintptr_t)pf_module_state + 0x18e5U)))
#undef DAT_1001c414
#define DAT_1001c414 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18e8U)))
#undef UNK_1001ad64
#define UNK_1001ad64 (*(uint *)(((uintptr_t)pf_module_state + 0x238U)))
#undef UNK_1001ad68
#define UNK_1001ad68 (*(uint *)(((uintptr_t)pf_module_state + 0x23cU)))
#undef UNK_1001ad6c
#define UNK_1001ad6c (*(uint *)(((uintptr_t)pf_module_state + 0x240U)))
#undef UNK_1001ad74
#define UNK_1001ad74 (*(uint *)(((uintptr_t)pf_module_state + 0x248U)))
#undef UNK_1001ad78
#define UNK_1001ad78 (*(uint *)(((uintptr_t)pf_module_state + 0x24cU)))
#undef UNK_1001ad7c
#define UNK_1001ad7c (*(uint *)(((uintptr_t)pf_module_state + 0x250U)))
#undef UNK_1001ad84
#define UNK_1001ad84 (*(int *)(((uintptr_t)pf_module_state + 0x258U)))
#undef UNK_1001ad88
#define UNK_1001ad88 (*(int *)(((uintptr_t)pf_module_state + 0x25cU)))
#undef UNK_1001ad8c
#define UNK_1001ad8c (*(int *)(((uintptr_t)pf_module_state + 0x260U)))
#undef _DAT_1001ad60
#define _DAT_1001ad60 (*(uint *)(((uintptr_t)pf_module_state + 0x234U)))
#undef _DAT_1001ad70
#define _DAT_1001ad70 (*(uint *)(((uintptr_t)pf_module_state + 0x244U)))
#undef _DAT_1001ad80
#define _DAT_1001ad80 (*(int *)(((uintptr_t)pf_module_state + 0x254U)))
#undef iRam000000001001ad84
#define iRam000000001001ad84 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x258U)))
#undef iRam000000001001ad88
#define iRam000000001001ad88 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x25cU)))
#undef iRam000000001001ad8c
#define iRam000000001001ad8c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x260U)))
#undef uRam000000001001ad64
#define uRam000000001001ad64 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x238U)))
#undef uRam000000001001ad68
#define uRam000000001001ad68 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23cU)))
#undef uRam000000001001ad6c
#define uRam000000001001ad6c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x240U)))
#undef uRam000000001001ad74
#define uRam000000001001ad74 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x248U)))
#undef uRam000000001001ad78
#define uRam000000001001ad78 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24cU)))
#undef uRam000000001001ad7c
#define uRam000000001001ad7c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x250U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100196f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100196f0(uint param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;

  iVar7 = iRam000000001001ad8c;
  iVar6 = iRam000000001001ad88;
  iVar5 = iRam000000001001ad84;
  iVar4 = _DAT_1001ad80;
  uVar3 = uRam000000001001ad7c;
  uVar2 = uRam000000001001ad78;
  uVar1 = uRam000000001001ad74;
  uVar8 = _DAT_1001ad70;
  if (DAT_1001c411 == '\0') {
    lVar9 = 0;
    uVar11 = _DAT_1001ad60;
    uVar12 = uRam000000001001ad64;
    uVar13 = uRam000000001001ad68;
    uVar14 = uRam000000001001ad6c;
    do {
      uVar15 = (int)(uVar11 << 0x1f) >> 0x1f;
      uVar17 = (int)(uVar12 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar13 << 0x1f) >> 0x1f;
      uVar21 = (int)(uVar14 << 0x1f) >> 0x1f;
      uVar15 = (uVar11 >> 1 ^ uVar8) & uVar15 | ~uVar15 & uVar11 >> 1;
      uVar17 = (uVar12 >> 1 ^ uVar1) & uVar17 | ~uVar17 & uVar12 >> 1;
      uVar19 = (uVar13 >> 1 ^ uVar2) & uVar19 | ~uVar19 & uVar13 >> 1;
      uVar21 = (uVar14 >> 1 ^ uVar3) & uVar21 | ~uVar21 & uVar14 >> 1;
      uVar16 = uVar15 >> 1;
      uVar18 = uVar17 >> 1;
      uVar20 = uVar19 >> 1;
      uVar22 = uVar21 >> 1;
      uVar15 = (int)(uVar15 << 0x1f) >> 0x1f;
      uVar17 = (int)(uVar17 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar21 = (int)(uVar21 << 0x1f) >> 0x1f;
      uVar16 = (uVar16 ^ uVar8) & uVar15 | ~uVar15 & uVar16;
      uVar18 = (uVar18 ^ uVar1) & uVar17 | ~uVar17 & uVar18;
      uVar20 = (uVar20 ^ uVar2) & uVar19 | ~uVar19 & uVar20;
      uVar22 = (uVar22 ^ uVar3) & uVar21 | ~uVar21 & uVar22;
      uVar15 = uVar16 >> 1;
      uVar17 = uVar18 >> 1;
      uVar19 = uVar20 >> 1;
      uVar21 = uVar22 >> 1;
      uVar16 = (int)(uVar16 << 0x1f) >> 0x1f;
      uVar18 = (int)(uVar18 << 0x1f) >> 0x1f;
      uVar20 = (int)(uVar20 << 0x1f) >> 0x1f;
      uVar22 = (int)(uVar22 << 0x1f) >> 0x1f;
      uVar15 = (uVar15 ^ uVar8) & uVar16 | ~uVar16 & uVar15;
      uVar17 = (uVar17 ^ uVar1) & uVar18 | ~uVar18 & uVar17;
      uVar19 = (uVar19 ^ uVar2) & uVar20 | ~uVar20 & uVar19;
      uVar21 = (uVar21 ^ uVar3) & uVar22 | ~uVar22 & uVar21;
      uVar16 = uVar15 >> 1;
      uVar18 = uVar17 >> 1;
      uVar20 = uVar19 >> 1;
      uVar22 = uVar21 >> 1;
      uVar15 = (int)(uVar15 << 0x1f) >> 0x1f;
      uVar17 = (int)(uVar17 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar21 = (int)(uVar21 << 0x1f) >> 0x1f;
      uVar15 = (uVar16 ^ uVar8) & uVar15 | ~uVar15 & uVar16;
      uVar17 = (uVar18 ^ uVar1) & uVar17 | ~uVar17 & uVar18;
      uVar19 = (uVar20 ^ uVar2) & uVar19 | ~uVar19 & uVar20;
      uVar21 = (uVar22 ^ uVar3) & uVar21 | ~uVar21 & uVar22;
      uVar16 = (int)(uVar15 << 0x1f) >> 0x1f;
      uVar18 = (int)(uVar17 << 0x1f) >> 0x1f;
      uVar20 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar22 = (int)(uVar21 << 0x1f) >> 0x1f;
      uVar15 = uVar15 >> 1;
      uVar17 = uVar17 >> 1;
      uVar19 = uVar19 >> 1;
      uVar21 = uVar21 >> 1;
      uVar15 = (uVar15 ^ uVar8) & uVar16 | ~uVar16 & uVar15;
      uVar17 = (uVar17 ^ uVar1) & uVar18 | ~uVar18 & uVar17;
      uVar19 = (uVar19 ^ uVar2) & uVar20 | ~uVar20 & uVar19;
      uVar21 = (uVar21 ^ uVar3) & uVar22 | ~uVar22 & uVar21;
      uVar16 = uVar15 >> 1;
      uVar18 = uVar17 >> 1;
      uVar20 = uVar19 >> 1;
      uVar22 = uVar21 >> 1;
      uVar15 = (int)(uVar15 << 0x1f) >> 0x1f;
      uVar17 = (int)(uVar17 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar21 = (int)(uVar21 << 0x1f) >> 0x1f;
      uVar16 = (uVar16 ^ uVar8) & uVar15 | ~uVar15 & uVar16;
      uVar18 = (uVar18 ^ uVar1) & uVar17 | ~uVar17 & uVar18;
      uVar20 = (uVar20 ^ uVar2) & uVar19 | ~uVar19 & uVar20;
      uVar22 = (uVar22 ^ uVar3) & uVar21 | ~uVar21 & uVar22;
      uVar15 = uVar16 >> 1;
      uVar17 = uVar18 >> 1;
      uVar19 = uVar20 >> 1;
      uVar21 = uVar22 >> 1;
      uVar16 = (int)(uVar16 << 0x1f) >> 0x1f;
      uVar18 = (int)(uVar18 << 0x1f) >> 0x1f;
      uVar20 = (int)(uVar20 << 0x1f) >> 0x1f;
      uVar22 = (int)(uVar22 << 0x1f) >> 0x1f;
      uVar15 = (uVar15 ^ uVar8) & uVar16 | ~uVar16 & uVar15;
      uVar17 = (uVar17 ^ uVar1) & uVar18 | ~uVar18 & uVar17;
      uVar19 = (uVar19 ^ uVar2) & uVar20 | ~uVar20 & uVar19;
      uVar21 = (uVar21 ^ uVar3) & uVar22 | ~uVar22 & uVar21;
      uVar16 = uVar15 >> 1;
      uVar18 = uVar17 >> 1;
      uVar20 = uVar19 >> 1;
      uVar22 = uVar21 >> 1;
      uVar15 = (int)(uVar15 << 0x1f) >> 0x1f;
      uVar17 = (int)(uVar17 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar21 = (int)(uVar21 << 0x1f) >> 0x1f;
      *(uint *)(&DAT_1001c414 + lVar9) = (uVar16 ^ uVar8) & uVar15 | ~uVar15 & uVar16;
      *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x18ecU)) = (uVar18 ^ uVar1) & uVar17 | ~uVar17 & uVar18;
      *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x18f0U)) = (uVar20 ^ uVar2) & uVar19 | ~uVar19 & uVar20;
      *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x18f4U)) = (uVar22 ^ uVar3) & uVar21 | ~uVar21 & uVar22;
      uVar11 = uVar11 + iVar4;
      uVar12 = uVar12 + iVar5;
      uVar13 = uVar13 + iVar6;
      uVar14 = uVar14 + iVar7;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x400);
    DAT_1001c411 = '\x01';
  }
  if (param_3 != 0) {
    uVar8 = ~param_1;
    if (param_3 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        uVar8 = uVar8 >> 8 ^
                *(uint *)(&DAT_1001c414 +
                         (ulong)(byte)(*(byte *)(param_2 + uVar10) ^ (byte)uVar8) * 4);
        uVar8 = uVar8 >> 8 ^
                *(uint *)(&DAT_1001c414 +
                         (ulong)(byte)(*(byte *)(param_2 + 1 + uVar10) ^ (byte)uVar8) * 4);
        uVar10 = uVar10 + 2;
      } while ((param_3 & 0xfffffffffffffffe) != uVar10);
    }
    if ((param_3 & 1) != 0) {
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_1001c414 + (ulong)(byte)(*(byte *)(param_2 + uVar10) ^ (byte)uVar8) * 4
                       );
    }
    param_1 = ~uVar8;
  }
  return param_1;
}

#undef DAT_1001ad60
#undef DAT_1001ad70
#undef DAT_1001ad80
#undef DAT_1001c411
#undef DAT_1001c414
#undef UNK_1001ad64
#undef UNK_1001ad68
#undef UNK_1001ad6c
#undef UNK_1001ad74
#undef UNK_1001ad78
#undef UNK_1001ad7c
#undef UNK_1001ad84
#undef UNK_1001ad88
#undef UNK_1001ad8c
#undef _DAT_1001ad60
#undef _DAT_1001ad70
#undef _DAT_1001ad80
#undef iRam000000001001ad84
#undef iRam000000001001ad88
#undef iRam000000001001ad8c
#undef uRam000000001001ad64
#undef uRam000000001001ad68
#undef uRam000000001001ad6c
#undef uRam000000001001ad74
#undef uRam000000001001ad78
#undef uRam000000001001ad7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019900
 */

void recovered_10019900(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;

  uVar11 = param_1[1];
  if (uVar11 == param_1[2]) {
    uVar9 = 4;
    if (uVar11 != 0) {
      uVar9 = uVar11 * 2;
    }
    if (uVar11 < uVar9) {
      lVar7 = recovered_10007ff0(uVar9 * 0x38);
      if (param_1[1] != 0) {
        lVar12 = 0x28;
        uVar11 = 0;
        do {
          lVar8 = *param_1;
          puVar1 = (undefined8 *)(lVar8 + -0x28 + lVar12);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (undefined8 *)(lVar8 + -0x1f + lVar12);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)(lVar7 + -0x1f + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          puVar1 = (undefined8 *)(lVar7 + -0x28 + lVar12);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          *(undefined8 *)(lVar7 + -8 + lVar12) = *(undefined8 *)(lVar8 + -8 + lVar12);
          uVar4 = ((undefined8 *)(lVar8 + lVar12))[1];
          *(undefined8 *)(lVar7 + lVar12) = *(undefined8 *)(lVar8 + lVar12);
          ((undefined8 *)(lVar7 + lVar12))[1] = uVar4;
          puVar1 = (undefined8 *)(lVar8 + -8 + lVar12);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar8 + 8 + lVar12) = 0;
          recovered_10008050((void *)0x0);
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 0x38;
        } while (uVar11 < (ulong)param_1[1]);
      }
      recovered_10008050((void *)*param_1);
      *param_1 = lVar7;
      param_1[2] = uVar9;
      uVar11 = param_1[1];
    }
  }
  lVar12 = *param_1;
  lVar8 = uVar11 * 0x38;
  lVar7 = lVar12 + lVar8;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = *(undefined8 *)((long)param_2 + 0x11);
  puVar1 = (undefined8 *)(lVar12 + 9 + lVar8);
  *puVar1 = *(undefined8 *)((long)param_2 + 9);
  puVar1[1] = uVar6;
  *(undefined8 *)(lVar12 + lVar8) = uVar4;
  ((undefined8 *)(lVar12 + lVar8))[1] = uVar5;
  puVar1 = (undefined8 *)(lVar12 + 0x20 + lVar8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar12 + 0x30 + lVar8) = 0;
  lVar12 = param_2[5];
  if (lVar12 != 0) {
    lVar8 = recovered_10007ff0(lVar12 << 4);
    pvVar3 = *(void **)(lVar7 + 0x20);
    uVar11 = *(ulong *)(lVar7 + 0x28);
    if (uVar11 != 0) {
      if (uVar11 == 1) {
        uVar9 = 0;
      }
      else {
        lVar10 = 0x10;
        uVar9 = 0;
        do {
          puVar1 = (undefined8 *)((long)pvVar3 + lVar10 + -0x10);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + -0x10 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          uVar4 = ((undefined8 *)((long)pvVar3 + lVar10))[1];
          *(undefined8 *)(lVar8 + lVar10) = *(undefined8 *)((long)pvVar3 + lVar10);
          ((undefined8 *)(lVar8 + lVar10))[1] = uVar4;
          uVar9 = uVar9 + 2;
          lVar10 = lVar10 + 0x20;
        } while ((uVar11 & 0xfffffffffffffffe) != uVar9);
      }
      if ((uVar11 & 1) != 0) {
        puVar1 = (undefined8 *)((long)pvVar3 + uVar9 * 0x10);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + uVar9 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
      }
    }
    recovered_10008050(pvVar3);
    *(long *)(lVar7 + 0x20) = lVar8;
    *(long *)(lVar7 + 0x30) = lVar12;
    if (param_2[5] != 0) {
      lVar12 = 0;
      uVar11 = 0;
      do {
        uVar4 = ((undefined8 *)(param_2[4] + lVar12))[1];
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x20) + lVar12);
        *puVar1 = *(undefined8 *)(param_2[4] + lVar12);
        puVar1[1] = uVar4;
        uVar11 = uVar11 + 1;
        uVar9 = param_2[5];
        lVar12 = lVar12 + 0x10;
      } while (uVar11 < uVar9);
      goto LAB_10019ab5;
    }
  }
  uVar9 = 0;
LAB_10019ab5:
  *(ulong *)(lVar7 + 0x28) = uVar9;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019ad0
 */

void recovered_10019ad0(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  uVar6 = param_1[1];
  if (uVar6 == param_1[2]) {
    uVar9 = 4;
    if (uVar6 != 0) {
      uVar9 = uVar6 * 2;
    }
    if (uVar6 < uVar9) {
      lVar5 = recovered_10007ff0(uVar9 << 4);
      pvVar3 = (void *)*param_1;
      uVar6 = param_1[1];
      if (uVar6 != 0) {
        if (uVar6 == 1) {
          uVar7 = 0;
        }
        else {
          lVar8 = 0x10;
          uVar7 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar3 + lVar8 + -0x10);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar5 + -0x10 + lVar8);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            uVar4 = ((undefined8 *)((long)pvVar3 + lVar8))[1];
            *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)((long)pvVar3 + lVar8);
            ((undefined8 *)(lVar5 + lVar8))[1] = uVar4;
            uVar7 = uVar7 + 2;
            lVar8 = lVar8 + 0x20;
          } while ((uVar6 & 0xfffffffffffffffe) != uVar7);
        }
        if ((uVar6 & 1) != 0) {
          puVar1 = (undefined8 *)((long)pvVar3 + uVar7 * 0x10);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar5 + uVar7 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        }
      }
      recovered_10008050(pvVar3);
      *param_1 = lVar5;
      param_1[2] = uVar9;
      uVar6 = param_1[1];
    }
  }
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(*param_1 + uVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019ba0
 */

void recovered_10019ba0(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  uVar6 = param_1[1];
  if (uVar6 == param_1[2]) {
    uVar9 = 4;
    if (uVar6 != 0) {
      uVar9 = uVar6 * 2;
    }
    if (uVar6 < uVar9) {
      lVar5 = recovered_10007ff0(uVar9 << 4);
      pvVar3 = (void *)*param_1;
      uVar6 = param_1[1];
      if (uVar6 != 0) {
        if (uVar6 == 1) {
          uVar7 = 0;
        }
        else {
          lVar8 = 0x10;
          uVar7 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar3 + lVar8 + -0x10);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar5 + -0x10 + lVar8);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            uVar4 = ((undefined8 *)((long)pvVar3 + lVar8))[1];
            *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)((long)pvVar3 + lVar8);
            ((undefined8 *)(lVar5 + lVar8))[1] = uVar4;
            uVar7 = uVar7 + 2;
            lVar8 = lVar8 + 0x20;
          } while ((uVar6 & 0xfffffffffffffffe) != uVar7);
        }
        if ((uVar6 & 1) != 0) {
          puVar1 = (undefined8 *)((long)pvVar3 + uVar7 * 0x10);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar5 + uVar7 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        }
      }
      recovered_10008050(pvVar3);
      *param_1 = lVar5;
      param_1[2] = uVar9;
      uVar6 = param_1[1];
    }
  }
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(*param_1 + uVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019c70
 */

ulong recovered_10019c70(long *param_1,long *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  bool bVar15;

  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    puVar13 = (undefined8 *)*param_2;
    lVar7 = 0;
    uVar14 = 0;
    do {
      puVar1 = (ulong *)((long)puVar13 + lVar7 + 8);
      bVar15 = CARRY8(uVar14,*puVar1);
      uVar14 = uVar14 + *puVar1;
      if (bVar15) {
        return 0;
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar6 * 0x10 != lVar7);
    if ((ulong)param_1[2] < uVar14) {
      lVar6 = recovered_10007ff0(uVar14);
      pvVar2 = (void *)*param_1;
      uVar9 = param_1[1];
      if (uVar9 != 0) {
        uVar8 = 0;
        if ((3 < uVar9) && (0x1f < (ulong)(lVar6 - (long)pvVar2))) {
          if (uVar9 < 0x20) {
            uVar10 = 0;
          }
          else {
            uVar8 = uVar9 & 0xffffffffffffffe0;
            uVar10 = 0;
            do {
              uVar3 = ((undefined8 *)((long)pvVar2 + uVar10))[1];
              puVar13 = (undefined8 *)((long)pvVar2 + uVar10 + 0x10);
              uVar4 = *puVar13;
              uVar5 = puVar13[1];
              *(undefined8 *)(lVar6 + uVar10) = *(undefined8 *)((long)pvVar2 + uVar10);
              ((undefined8 *)(lVar6 + uVar10))[1] = uVar3;
              puVar13 = (undefined8 *)(lVar6 + 0x10 + uVar10);
              *puVar13 = uVar4;
              puVar13[1] = uVar5;
              uVar10 = uVar10 + 0x20;
            } while (uVar8 != uVar10);
            if (uVar9 == uVar8) goto LAB_10019dff;
            uVar10 = uVar8;
            if ((uVar9 & 0x1c) == 0) goto LAB_10019d95;
          }
          uVar8 = uVar9 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)(lVar6 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
            uVar10 = uVar10 + 4;
          } while (uVar8 != uVar10);
          if (uVar9 == uVar8) goto LAB_10019dff;
        }
LAB_10019d95:
        uVar11 = uVar9 & 3;
        uVar10 = uVar8;
        if (uVar11 != 0) {
          do {
            *(undefined1 *)(lVar6 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10);
            uVar10 = uVar10 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (uVar8 - uVar9 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)(lVar6 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10);
            *(undefined1 *)(lVar6 + 1 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10 + 1);
            *(undefined1 *)(lVar6 + 2 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10 + 2);
            *(undefined1 *)(lVar6 + 3 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10 + 3);
            uVar10 = uVar10 + 4;
          } while (uVar9 != uVar10);
        }
      }
LAB_10019dff:
      recovered_10008050(pvVar2);
      *param_1 = lVar6;
      param_1[2] = uVar14;
      puVar13 = (undefined8 *)*param_2;
      lVar6 = param_2[1];
    }
    if (lVar6 != 0) {
      puVar12 = puVar13 + lVar6 * 2;
      do {
        recovered_10016690(param_1,*param_1 + param_1[1],(undefined1 *)*puVar13,
                           (undefined1 *)*puVar13 + puVar13[1]);
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar12);
    }
  }
  if (param_3 <= (ulong)param_1[5]) goto LAB_10019f7c;
  lVar6 = recovered_10007ff0(param_3);
  pvVar2 = (void *)param_1[3];
  uVar14 = param_1[4];
  if (uVar14 != 0) {
    if ((ulong)(lVar6 - (long)pvVar2) < 0x20 || uVar14 < 4) {
      uVar9 = 0;
    }
    else {
      if (uVar14 < 0x20) {
        uVar8 = 0;
      }
      else {
        uVar9 = uVar14 & 0xffffffffffffffe0;
        uVar8 = 0;
        do {
          uVar3 = ((undefined8 *)((long)pvVar2 + uVar8))[1];
          puVar13 = (undefined8 *)((long)pvVar2 + uVar8 + 0x10);
          uVar4 = *puVar13;
          uVar5 = puVar13[1];
          *(undefined8 *)(lVar6 + uVar8) = *(undefined8 *)((long)pvVar2 + uVar8);
          ((undefined8 *)(lVar6 + uVar8))[1] = uVar3;
          puVar13 = (undefined8 *)(lVar6 + 0x10 + uVar8);
          *puVar13 = uVar4;
          puVar13[1] = uVar5;
          uVar8 = uVar8 + 0x20;
        } while (uVar9 != uVar8);
        if (uVar14 == uVar9) goto LAB_10019f6f;
        uVar8 = uVar9;
        if ((uVar14 & 0x1c) == 0) goto LAB_10019f05;
      }
      uVar9 = uVar14 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(lVar6 + uVar8) = *(undefined4 *)((long)pvVar2 + uVar8);
        uVar8 = uVar8 + 4;
      } while (uVar9 != uVar8);
      if (uVar14 == uVar9) goto LAB_10019f6f;
    }
LAB_10019f05:
    uVar10 = uVar14 & 3;
    uVar8 = uVar9;
    if (uVar10 != 0) {
      do {
        *(undefined1 *)(lVar6 + uVar8) = *(undefined1 *)((long)pvVar2 + uVar8);
        uVar8 = uVar8 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar9 - uVar14 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)(lVar6 + uVar8) = *(undefined1 *)((long)pvVar2 + uVar8);
        *(undefined1 *)(lVar6 + 1 + uVar8) = *(undefined1 *)((long)pvVar2 + uVar8 + 1);
        *(undefined1 *)(lVar6 + 2 + uVar8) = *(undefined1 *)((long)pvVar2 + uVar8 + 2);
        *(undefined1 *)(lVar6 + 3 + uVar8) = *(undefined1 *)((long)pvVar2 + uVar8 + 3);
        uVar8 = uVar8 + 4;
      } while (uVar14 != uVar8);
    }
  }
LAB_10019f6f:
  recovered_10008050(pvVar2);
  param_1[3] = lVar6;
  param_1[5] = param_3;
LAB_10019f7c:
  uVar14 = recovered_10016970(param_1,param_1 + 3,param_3);
  return uVar14;
}


#undef DAT_1001ad90
#define DAT_1001ad90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264U)))
#undef _DAT_1001ad90
#define _DAT_1001ad90 (*(uint128 *)(((uintptr_t)pf_module_state + 0x264U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10019fa0(undefined4 param_1,long param_2,long param_3,long param_4,ulong param_5,
                        ulong param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  uint128 auVar73;
  ushort uVar74;
  uint uVar75;
  ulong uVar76;
  char cVar77;
  uint uVar78;
  ulong uVar79;
  uint uVar80;
  ulong uVar81;
  long lVar82;
  int iVar83;
  ulong uVar84;
  ulong uVar85;
  uint uVar86;
  undefined8 unaff_R12;
  undefined7 uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  ulong uVar91;
  uint128 auVar92;
  uint128 auVar93;

  iVar83 = (int)param_5;
  uVar87 = (undefined7)((ulong)unaff_R12 >> 8);
  switch((uintptr_t)(param_1)) {
  case 1:
    uVar76 = param_5;
    if (param_6 < param_5) {
      uVar76 = param_6;
    }
    if (uVar76 != 0) {
      if ((ulong)(param_2 - param_3) < 0x20 || uVar76 < 4) {
        uVar85 = 0;
      }
      else {
        if (uVar76 < 0x20) {
          uVar81 = 0;
        }
        else {
          uVar85 = uVar76 & 0xffffffffffffffe0;
          uVar81 = 0;
          do {
            uVar70 = ((undefined8 *)(param_3 + uVar81))[1];
            puVar3 = (undefined8 *)(param_3 + 0x10 + uVar81);
            uVar71 = *puVar3;
            uVar72 = puVar3[1];
            *(undefined8 *)(param_2 + uVar81) = *(undefined8 *)(param_3 + uVar81);
            ((undefined8 *)(param_2 + uVar81))[1] = uVar70;
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar81);
            *puVar3 = uVar71;
            puVar3[1] = uVar72;
            uVar81 = uVar81 + 0x20;
          } while (uVar85 != uVar81);
          if (uVar76 == uVar85) goto LAB_1001a3ab;
          uVar81 = uVar85;
          if ((uVar76 & 0x1c) == 0) goto LAB_1001a346;
        }
        uVar85 = uVar76 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(param_2 + uVar81) = *(undefined4 *)(param_3 + uVar81);
          uVar81 = uVar81 + 4;
        } while (uVar85 != uVar81);
        if (uVar76 == uVar85) goto LAB_1001a3ab;
      }
LAB_1001a346:
      uVar84 = uVar76 & 3;
      uVar81 = uVar85;
      if (uVar84 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar81) = *(undefined1 *)(param_3 + uVar81);
          uVar81 = uVar81 + 1;
          uVar84 = uVar84 - 1;
        } while (uVar84 != 0);
      }
      if (uVar85 - uVar76 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(param_2 + uVar81) = *(undefined1 *)(param_3 + uVar81);
          *(undefined1 *)(param_2 + 1 + uVar81) = *(undefined1 *)(param_3 + 1 + uVar81);
          *(undefined1 *)(param_2 + 2 + uVar81) = *(undefined1 *)(param_3 + 2 + uVar81);
          *(undefined1 *)(param_2 + 3 + uVar81) = *(undefined1 *)(param_3 + 3 + uVar81);
          uVar81 = uVar81 + 4;
        } while (uVar76 != uVar81);
      }
    }
LAB_1001a3ab:
    uVar85 = CONCAT71(uVar87,1);
    if (param_5 <= param_6) break;
    uVar81 = param_5 - uVar76;
    if ((uVar81 < 4) || (param_6 < 0x20 || (ulong)(param_2 - param_3) < 0x20)) {
LAB_1001a3dd:
      uVar91 = uVar76;
    }
    else {
      if (uVar81 < 0x20) {
        uVar84 = 0;
      }
      else {
        uVar84 = uVar81 & 0xffffffffffffffe0;
        lVar82 = ((uVar76 + 0x10) - param_6) + param_2;
        uVar91 = 0;
        do {
          pcVar4 = (char *)(param_3 + uVar76 + uVar91);
          cVar77 = pcVar4[1];
          cVar9 = pcVar4[2];
          cVar10 = pcVar4[3];
          cVar11 = pcVar4[4];
          cVar12 = pcVar4[5];
          cVar13 = pcVar4[6];
          cVar14 = pcVar4[7];
          cVar15 = pcVar4[8];
          cVar16 = pcVar4[9];
          cVar17 = pcVar4[10];
          cVar18 = pcVar4[0xb];
          cVar19 = pcVar4[0xc];
          cVar20 = pcVar4[0xd];
          cVar21 = pcVar4[0xe];
          cVar22 = pcVar4[0xf];
          pcVar1 = (char *)(param_3 + uVar76 + 0x10 + uVar91);
          cVar23 = *pcVar1;
          cVar24 = pcVar1[1];
          cVar25 = pcVar1[2];
          cVar26 = pcVar1[3];
          cVar27 = pcVar1[4];
          cVar28 = pcVar1[5];
          cVar29 = pcVar1[6];
          cVar30 = pcVar1[7];
          cVar31 = pcVar1[8];
          cVar32 = pcVar1[9];
          cVar33 = pcVar1[10];
          cVar34 = pcVar1[0xb];
          cVar35 = pcVar1[0xc];
          cVar36 = pcVar1[0xd];
          cVar37 = pcVar1[0xe];
          cVar38 = pcVar1[0xf];
          pcVar5 = (char *)(lVar82 + -0x10 + uVar91);
          cVar39 = pcVar5[1];
          cVar40 = pcVar5[2];
          cVar41 = pcVar5[3];
          cVar42 = pcVar5[4];
          cVar43 = pcVar5[5];
          cVar44 = pcVar5[6];
          cVar45 = pcVar5[7];
          cVar46 = pcVar5[8];
          cVar47 = pcVar5[9];
          cVar48 = pcVar5[10];
          cVar49 = pcVar5[0xb];
          cVar50 = pcVar5[0xc];
          cVar51 = pcVar5[0xd];
          cVar52 = pcVar5[0xe];
          cVar53 = pcVar5[0xf];
          pcVar1 = (char *)(lVar82 + uVar91);
          cVar54 = *pcVar1;
          cVar55 = pcVar1[1];
          cVar56 = pcVar1[2];
          cVar57 = pcVar1[3];
          cVar58 = pcVar1[4];
          cVar59 = pcVar1[5];
          cVar60 = pcVar1[6];
          cVar61 = pcVar1[7];
          cVar62 = pcVar1[8];
          cVar63 = pcVar1[9];
          cVar64 = pcVar1[10];
          cVar65 = pcVar1[0xb];
          cVar66 = pcVar1[0xc];
          cVar67 = pcVar1[0xd];
          cVar68 = pcVar1[0xe];
          cVar69 = pcVar1[0xf];
          pcVar1 = (char *)(param_2 + uVar76 + uVar91);
          *pcVar1 = *pcVar5 + *pcVar4;
          pcVar1[1] = cVar39 + cVar77;
          pcVar1[2] = cVar40 + cVar9;
          pcVar1[3] = cVar41 + cVar10;
          pcVar1[4] = cVar42 + cVar11;
          pcVar1[5] = cVar43 + cVar12;
          pcVar1[6] = cVar44 + cVar13;
          pcVar1[7] = cVar45 + cVar14;
          pcVar1[8] = cVar46 + cVar15;
          pcVar1[9] = cVar47 + cVar16;
          pcVar1[10] = cVar48 + cVar17;
          pcVar1[0xb] = cVar49 + cVar18;
          pcVar1[0xc] = cVar50 + cVar19;
          pcVar1[0xd] = cVar51 + cVar20;
          pcVar1[0xe] = cVar52 + cVar21;
          pcVar1[0xf] = cVar53 + cVar22;
          pcVar1 = (char *)(param_2 + uVar76 + 0x10 + uVar91);
          *pcVar1 = cVar54 + cVar23;
          pcVar1[1] = cVar55 + cVar24;
          pcVar1[2] = cVar56 + cVar25;
          pcVar1[3] = cVar57 + cVar26;
          pcVar1[4] = cVar58 + cVar27;
          pcVar1[5] = cVar59 + cVar28;
          pcVar1[6] = cVar60 + cVar29;
          pcVar1[7] = cVar61 + cVar30;
          pcVar1[8] = cVar62 + cVar31;
          pcVar1[9] = cVar63 + cVar32;
          pcVar1[10] = cVar64 + cVar33;
          pcVar1[0xb] = cVar65 + cVar34;
          pcVar1[0xc] = cVar66 + cVar35;
          pcVar1[0xd] = cVar67 + cVar36;
          pcVar1[0xe] = cVar68 + cVar37;
          pcVar1[0xf] = cVar69 + cVar38;
          uVar91 = uVar91 + 0x20;
        } while (uVar84 != uVar91);
        if (uVar81 == uVar84) break;
        if ((uVar81 & 0x1c) == 0) {
          uVar76 = uVar76 + uVar84;
          goto LAB_1001a3dd;
        }
      }
      uVar79 = uVar81 & 0xfffffffffffffffc;
      uVar91 = uVar76 + uVar79;
      do {
        uVar7 = *(undefined4 *)(param_3 + uVar76 + uVar84);
        uVar8 = *(undefined4 *)((uVar76 - param_6) + param_2 + uVar84);
        *(uint *)(param_2 + uVar76 + uVar84) =
             CONCAT13((char)((uint)uVar8 >> 0x18) + (char)((uint)uVar7 >> 0x18),
                      CONCAT12((char)((uint)uVar8 >> 0x10) + (char)((uint)uVar7 >> 0x10),
                               CONCAT11((char)((uint)uVar8 >> 8) + (char)((uint)uVar7 >> 8),
                                        (char)uVar8 + (char)uVar7)));
        uVar84 = uVar84 + 4;
      } while (uVar79 != uVar84);
      if (uVar81 == uVar79) break;
    }
    uVar76 = uVar91;
    if ((iVar83 - (int)uVar91 & 1U) != 0) {
      *(char *)(param_2 + uVar91) =
           *(char *)(param_2 + (uVar91 - param_6)) + *(char *)(param_3 + uVar91);
      uVar76 = uVar91 + 1;
    }
    if (uVar91 != param_5 - 1) {
      lVar82 = (param_2 + 1) - param_6;
      do {
        *(char *)(param_2 + uVar76) = *(char *)(lVar82 + -1 + uVar76) + *(char *)(param_3 + uVar76);
        *(char *)(param_2 + 1 + uVar76) =
             *(char *)(lVar82 + uVar76) + *(char *)(param_3 + 1 + uVar76);
        uVar76 = uVar76 + 2;
      } while (param_5 != uVar76);
    }
    break;
  case 2:
    if (param_4 != 0) {
      uVar85 = CONCAT71(uVar87,1);
      if (param_5 == 0) break;
      if ((param_5 < 4) || ((ulong)(param_2 - param_4) < 0x20 || (ulong)(param_2 - param_3) < 0x20))
      {
        uVar76 = 0;
      }
      else {
        if (param_5 < 0x20) {
          uVar81 = 0;
        }
        else {
          uVar76 = param_5 & 0xffffffffffffffe0;
          uVar81 = 0;
          do {
            pcVar1 = (char *)(param_3 + uVar81);
            cVar77 = pcVar1[1];
            cVar9 = pcVar1[2];
            cVar10 = pcVar1[3];
            cVar11 = pcVar1[4];
            cVar12 = pcVar1[5];
            cVar13 = pcVar1[6];
            cVar14 = pcVar1[7];
            cVar15 = pcVar1[8];
            cVar16 = pcVar1[9];
            cVar17 = pcVar1[10];
            cVar18 = pcVar1[0xb];
            cVar19 = pcVar1[0xc];
            cVar20 = pcVar1[0xd];
            cVar21 = pcVar1[0xe];
            cVar22 = pcVar1[0xf];
            pcVar4 = (char *)(param_3 + 0x10 + uVar81);
            cVar23 = *pcVar4;
            cVar24 = pcVar4[1];
            cVar25 = pcVar4[2];
            cVar26 = pcVar4[3];
            cVar27 = pcVar4[4];
            cVar28 = pcVar4[5];
            cVar29 = pcVar4[6];
            cVar30 = pcVar4[7];
            cVar31 = pcVar4[8];
            cVar32 = pcVar4[9];
            cVar33 = pcVar4[10];
            cVar34 = pcVar4[0xb];
            cVar35 = pcVar4[0xc];
            cVar36 = pcVar4[0xd];
            cVar37 = pcVar4[0xe];
            cVar38 = pcVar4[0xf];
            pcVar4 = (char *)(param_4 + uVar81);
            cVar39 = pcVar4[1];
            cVar40 = pcVar4[2];
            cVar41 = pcVar4[3];
            cVar42 = pcVar4[4];
            cVar43 = pcVar4[5];
            cVar44 = pcVar4[6];
            cVar45 = pcVar4[7];
            cVar46 = pcVar4[8];
            cVar47 = pcVar4[9];
            cVar48 = pcVar4[10];
            cVar49 = pcVar4[0xb];
            cVar50 = pcVar4[0xc];
            cVar51 = pcVar4[0xd];
            cVar52 = pcVar4[0xe];
            cVar53 = pcVar4[0xf];
            pcVar5 = (char *)(param_4 + 0x10 + uVar81);
            cVar54 = *pcVar5;
            cVar55 = pcVar5[1];
            cVar56 = pcVar5[2];
            cVar57 = pcVar5[3];
            cVar58 = pcVar5[4];
            cVar59 = pcVar5[5];
            cVar60 = pcVar5[6];
            cVar61 = pcVar5[7];
            cVar62 = pcVar5[8];
            cVar63 = pcVar5[9];
            cVar64 = pcVar5[10];
            cVar65 = pcVar5[0xb];
            cVar66 = pcVar5[0xc];
            cVar67 = pcVar5[0xd];
            cVar68 = pcVar5[0xe];
            cVar69 = pcVar5[0xf];
            pcVar5 = (char *)(param_2 + uVar81);
            *pcVar5 = *pcVar4 + *pcVar1;
            pcVar5[1] = cVar39 + cVar77;
            pcVar5[2] = cVar40 + cVar9;
            pcVar5[3] = cVar41 + cVar10;
            pcVar5[4] = cVar42 + cVar11;
            pcVar5[5] = cVar43 + cVar12;
            pcVar5[6] = cVar44 + cVar13;
            pcVar5[7] = cVar45 + cVar14;
            pcVar5[8] = cVar46 + cVar15;
            pcVar5[9] = cVar47 + cVar16;
            pcVar5[10] = cVar48 + cVar17;
            pcVar5[0xb] = cVar49 + cVar18;
            pcVar5[0xc] = cVar50 + cVar19;
            pcVar5[0xd] = cVar51 + cVar20;
            pcVar5[0xe] = cVar52 + cVar21;
            pcVar5[0xf] = cVar53 + cVar22;
            pcVar1 = (char *)(param_2 + 0x10 + uVar81);
            *pcVar1 = cVar54 + cVar23;
            pcVar1[1] = cVar55 + cVar24;
            pcVar1[2] = cVar56 + cVar25;
            pcVar1[3] = cVar57 + cVar26;
            pcVar1[4] = cVar58 + cVar27;
            pcVar1[5] = cVar59 + cVar28;
            pcVar1[6] = cVar60 + cVar29;
            pcVar1[7] = cVar61 + cVar30;
            pcVar1[8] = cVar62 + cVar31;
            pcVar1[9] = cVar63 + cVar32;
            pcVar1[10] = cVar64 + cVar33;
            pcVar1[0xb] = cVar65 + cVar34;
            pcVar1[0xc] = cVar66 + cVar35;
            pcVar1[0xd] = cVar67 + cVar36;
            pcVar1[0xe] = cVar68 + cVar37;
            pcVar1[0xf] = cVar69 + cVar38;
            uVar81 = uVar81 + 0x20;
          } while (uVar76 != uVar81);
          if (uVar76 == param_5) break;
          uVar81 = uVar76;
          if ((param_5 & 0x1c) == 0) goto LAB_1001a0ed;
        }
        uVar76 = param_5 & 0xfffffffffffffffc;
        do {
          uVar7 = *(undefined4 *)(param_3 + uVar81);
          uVar8 = *(undefined4 *)(param_4 + uVar81);
          *(uint *)(param_2 + uVar81) =
               CONCAT13((char)((uint)uVar8 >> 0x18) + (char)((uint)uVar7 >> 0x18),
                        CONCAT12((char)((uint)uVar8 >> 0x10) + (char)((uint)uVar7 >> 0x10),
                                 CONCAT11((char)((uint)uVar8 >> 8) + (char)((uint)uVar7 >> 8),
                                          (char)uVar8 + (char)uVar7)));
          uVar81 = uVar81 + 4;
        } while (uVar76 != uVar81);
        if (uVar76 == param_5) break;
      }
LAB_1001a0ed:
      uVar84 = param_5 & 3;
      uVar81 = uVar76;
      if (uVar84 != 0) {
        do {
          *(char *)(param_2 + uVar81) = *(char *)(param_4 + uVar81) + *(char *)(param_3 + uVar81);
          uVar81 = uVar81 + 1;
          uVar84 = uVar84 - 1;
        } while (uVar84 != 0);
      }
      if (uVar76 - param_5 < 0xfffffffffffffffd) {
        do {
          *(char *)(param_2 + uVar81) = *(char *)(param_4 + uVar81) + *(char *)(param_3 + uVar81);
          *(char *)(param_2 + 1 + uVar81) =
               *(char *)(param_4 + 1 + uVar81) + *(char *)(param_3 + 1 + uVar81);
          *(char *)(param_2 + 2 + uVar81) =
               *(char *)(param_4 + 2 + uVar81) + *(char *)(param_3 + 2 + uVar81);
          *(char *)(param_2 + 3 + uVar81) =
               *(char *)(param_4 + 3 + uVar81) + *(char *)(param_3 + 3 + uVar81);
          uVar81 = uVar81 + 4;
        } while (param_5 != uVar81);
      }
      break;
    }
  case 0:
    recovered_10001cc0((void *)param_2,(void *)param_3,param_5);
    uVar85 = CONCAT71(uVar87,1);
    break;
  case 3:
    uVar85 = CONCAT71(uVar87,1);
    if (param_4 != 0) {
      if (param_5 != 0) {
        if (param_5 == 1) {
          uVar81 = 0;
        }
        else {
          uVar76 = 0;
          do {
            uVar81 = uVar76;
            if (uVar81 < param_6) {
              uVar74 = 0;
            }
            else {
              uVar74 = (ushort)*(byte *)((param_2 - param_6) + uVar81);
            }
            *(char *)(param_2 + uVar81) =
                 (char)((uint)uVar74 + (uint)*(byte *)(param_4 + uVar81) >> 1) +
                 *(char *)(param_3 + uVar81);
            if (uVar81 + 1 < param_6) {
              uVar74 = 0;
            }
            else {
              uVar74 = (ushort)*(byte *)((param_2 - param_6) + 1 + uVar81);
            }
            *(char *)(param_2 + 1 + uVar81) =
                 (char)((uint)uVar74 + (uint)*(byte *)(param_4 + 1 + uVar81) >> 1) +
                 *(char *)(param_3 + 1 + uVar81);
            uVar76 = uVar81 + 2;
          } while (uVar81 + 2 != (param_5 & 0xfffffffffffffffe));
          uVar81 = uVar81 + 2;
        }
        if ((param_5 & 1) != 0) {
          if (uVar81 < param_6) {
            uVar74 = 0;
          }
          else {
            uVar74 = (ushort)*(byte *)(param_2 + (uVar81 - param_6));
          }
          *(char *)(param_2 + uVar81) =
               (char)((uint)uVar74 + (uint)*(byte *)(param_4 + uVar81) >> 1) +
               *(char *)(param_3 + uVar81);
        }
      }
      break;
    }
    if (param_5 == 0) break;
    uVar76 = param_5;
    if (param_6 < param_5) {
      uVar76 = param_6;
    }
    if (param_6 == 0) {
      uVar81 = 0;
    }
    else {
      uVar81 = uVar76;
      if ((ulong)(param_2 - param_3) < 0x20 || uVar76 < 4) {
        uVar91 = 0;
      }
      else {
        if (uVar76 < 0x20) {
          uVar84 = 0;
        }
        else {
          uVar91 = uVar76 & 0xffffffffffffffe0;
          uVar84 = 0;
          do {
            uVar70 = ((undefined8 *)(param_3 + uVar84))[1];
            puVar3 = (undefined8 *)(param_3 + 0x10 + uVar84);
            uVar71 = *puVar3;
            uVar72 = puVar3[1];
            *(undefined8 *)(param_2 + uVar84) = *(undefined8 *)(param_3 + uVar84);
            ((undefined8 *)(param_2 + uVar84))[1] = uVar70;
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar84);
            *puVar3 = uVar71;
            puVar3[1] = uVar72;
            uVar84 = uVar84 + 0x20;
          } while (uVar91 != uVar84);
          if (uVar76 == uVar91) goto LAB_1001a856;
          uVar84 = uVar91;
          if ((uVar76 & 0x1c) == 0) goto LAB_1001a7e7;
        }
        uVar91 = uVar76 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(param_2 + uVar84) = *(undefined4 *)(param_3 + uVar84);
          uVar84 = uVar84 + 4;
        } while (uVar91 != uVar84);
        if (uVar76 == uVar91) goto LAB_1001a856;
      }
LAB_1001a7e7:
      uVar79 = uVar76 & 3;
      uVar84 = uVar91;
      if (uVar79 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar84) = *(undefined1 *)(param_3 + uVar84);
          uVar84 = uVar84 + 1;
          uVar79 = uVar79 - 1;
        } while (uVar79 != 0);
      }
      if (uVar91 - uVar76 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(param_2 + uVar84) = *(undefined1 *)(param_3 + uVar84);
          *(undefined1 *)(param_2 + 1 + uVar84) = *(undefined1 *)(param_3 + 1 + uVar84);
          *(undefined1 *)(param_2 + 2 + uVar84) = *(undefined1 *)(param_3 + 2 + uVar84);
          *(undefined1 *)(param_2 + 3 + uVar84) = *(undefined1 *)(param_3 + 3 + uVar84);
          uVar84 = uVar84 + 4;
        } while (uVar76 != uVar84);
      }
    }
LAB_1001a856:
    auVar73 = _DAT_1001ad90;
    if (param_5 <= uVar81) break;
    uVar76 = param_5 - uVar76;
    if ((uVar76 < 4) || (param_6 < 0x20 || (ulong)(param_2 - param_3) < 0x20)) {
LAB_1001a883:
      uVar91 = uVar81;
    }
    else {
      if (uVar76 < 0x20) {
        uVar84 = 0;
      }
      else {
        uVar84 = uVar76 & 0xffffffffffffffe0;
        lVar82 = ((uVar81 + 0x10) - param_6) + param_2;
        uVar91 = 0;
        do {
          pcVar4 = (char *)(param_3 + uVar81 + uVar91);
          cVar77 = pcVar4[1];
          cVar9 = pcVar4[2];
          cVar10 = pcVar4[3];
          cVar11 = pcVar4[4];
          cVar12 = pcVar4[5];
          cVar13 = pcVar4[6];
          cVar14 = pcVar4[7];
          cVar15 = pcVar4[8];
          cVar16 = pcVar4[9];
          cVar17 = pcVar4[10];
          cVar18 = pcVar4[0xb];
          cVar19 = pcVar4[0xc];
          cVar20 = pcVar4[0xd];
          cVar21 = pcVar4[0xe];
          cVar22 = pcVar4[0xf];
          pcVar1 = (char *)(param_3 + uVar81 + 0x10 + uVar91);
          cVar23 = *pcVar1;
          cVar24 = pcVar1[1];
          cVar25 = pcVar1[2];
          cVar26 = pcVar1[3];
          cVar27 = pcVar1[4];
          cVar28 = pcVar1[5];
          cVar29 = pcVar1[6];
          cVar30 = pcVar1[7];
          cVar31 = pcVar1[8];
          cVar32 = pcVar1[9];
          cVar33 = pcVar1[10];
          cVar34 = pcVar1[0xb];
          cVar35 = pcVar1[0xc];
          cVar36 = pcVar1[0xd];
          cVar37 = pcVar1[0xe];
          cVar38 = pcVar1[0xf];
          puVar6 = (ushort *)(lVar82 + -0x10 + uVar91);
          puVar2 = (ushort *)(lVar82 + uVar91);
          PF_PART2(auVar92, 0) = *puVar6 >> 1;
          PF_PART2(auVar92, 2) = puVar6[1] >> 1;
          PF_PART2(auVar92, 4) = puVar6[2] >> 1;
          PF_PART2(auVar92, 6) = puVar6[3] >> 1;
          PF_PART2(auVar92, 8) = puVar6[4] >> 1;
          PF_PART2(auVar92, 10) = puVar6[5] >> 1;
          PF_PART2(auVar92, 12) = puVar6[6] >> 1;
          PF_PART2(auVar92, 14) = puVar6[7] >> 1;
          auVar92 = auVar92 & auVar73;
          PF_PART2(auVar93, 0) = *puVar2 >> 1;
          PF_PART2(auVar93, 2) = puVar2[1] >> 1;
          PF_PART2(auVar93, 4) = puVar2[2] >> 1;
          PF_PART2(auVar93, 6) = puVar2[3] >> 1;
          PF_PART2(auVar93, 8) = puVar2[4] >> 1;
          PF_PART2(auVar93, 10) = puVar2[5] >> 1;
          PF_PART2(auVar93, 12) = puVar2[6] >> 1;
          PF_PART2(auVar93, 14) = puVar2[7] >> 1;
          auVar93 = auVar93 & auVar73;
          pcVar1 = (char *)(param_2 + uVar81 + uVar91);
          *pcVar1 = ((uint8_t *)(void *)&auVar92)[0] + *pcVar4;
          pcVar1[1] = ((uint8_t *)(void *)&auVar92)[1] + cVar77;
          pcVar1[2] = ((uint8_t *)(void *)&auVar92)[2] + cVar9;
          pcVar1[3] = ((uint8_t *)(void *)&auVar92)[3] + cVar10;
          pcVar1[4] = ((uint8_t *)(void *)&auVar92)[4] + cVar11;
          pcVar1[5] = ((uint8_t *)(void *)&auVar92)[5] + cVar12;
          pcVar1[6] = ((uint8_t *)(void *)&auVar92)[6] + cVar13;
          pcVar1[7] = ((uint8_t *)(void *)&auVar92)[7] + cVar14;
          pcVar1[8] = ((uint8_t *)(void *)&auVar92)[8] + cVar15;
          pcVar1[9] = ((uint8_t *)(void *)&auVar92)[9] + cVar16;
          pcVar1[10] = ((uint8_t *)(void *)&auVar92)[10] + cVar17;
          pcVar1[0xb] = ((uint8_t *)(void *)&auVar92)[0xb] + cVar18;
          pcVar1[0xc] = ((uint8_t *)(void *)&auVar92)[0xc] + cVar19;
          pcVar1[0xd] = ((uint8_t *)(void *)&auVar92)[0xd] + cVar20;
          pcVar1[0xe] = ((uint8_t *)(void *)&auVar92)[0xe] + cVar21;
          pcVar1[0xf] = ((uint8_t *)(void *)&auVar92)[0xf] + cVar22;
          pcVar1 = (char *)(param_2 + uVar81 + 0x10 + uVar91);
          *pcVar1 = ((uint8_t *)(void *)&auVar93)[0] + cVar23;
          pcVar1[1] = ((uint8_t *)(void *)&auVar93)[1] + cVar24;
          pcVar1[2] = ((uint8_t *)(void *)&auVar93)[2] + cVar25;
          pcVar1[3] = ((uint8_t *)(void *)&auVar93)[3] + cVar26;
          pcVar1[4] = ((uint8_t *)(void *)&auVar93)[4] + cVar27;
          pcVar1[5] = ((uint8_t *)(void *)&auVar93)[5] + cVar28;
          pcVar1[6] = ((uint8_t *)(void *)&auVar93)[6] + cVar29;
          pcVar1[7] = ((uint8_t *)(void *)&auVar93)[7] + cVar30;
          pcVar1[8] = ((uint8_t *)(void *)&auVar93)[8] + cVar31;
          pcVar1[9] = ((uint8_t *)(void *)&auVar93)[9] + cVar32;
          pcVar1[10] = ((uint8_t *)(void *)&auVar93)[10] + cVar33;
          pcVar1[0xb] = ((uint8_t *)(void *)&auVar93)[0xb] + cVar34;
          pcVar1[0xc] = ((uint8_t *)(void *)&auVar93)[0xc] + cVar35;
          pcVar1[0xd] = ((uint8_t *)(void *)&auVar93)[0xd] + cVar36;
          pcVar1[0xe] = ((uint8_t *)(void *)&auVar93)[0xe] + cVar37;
          pcVar1[0xf] = ((uint8_t *)(void *)&auVar93)[0xf] + cVar38;
          uVar91 = uVar91 + 0x20;
        } while (uVar84 != uVar91);
        if (uVar76 == uVar84) break;
        if ((uVar76 & 0x1c) == 0) {
          uVar81 = uVar81 + uVar84;
          goto LAB_1001a883;
        }
      }
      auVar73 = _DAT_1001ad90;
      uVar79 = uVar76 & 0xfffffffffffffffc;
      uVar91 = uVar81 + uVar79;
      do {
        uVar7 = *(undefined4 *)(param_3 + uVar81 + uVar84);
        uVar8 = *(undefined4 *)((uVar81 - param_6) + param_2 + uVar84);
        auVar92 = ZEXT416(CONCAT22((ushort)((uint)uVar8 >> 0x11),(ushort)uVar8 >> 1)) & auVar73;
        *(uint *)(param_2 + uVar81 + uVar84) =
             CONCAT13(((uint8_t *)(void *)&auVar92)[3] + (char)((uint)uVar7 >> 0x18),
                      CONCAT12(((uint8_t *)(void *)&auVar92)[2] + (char)((uint)uVar7 >> 0x10),
                               CONCAT11(((uint8_t *)(void *)&auVar92)[1] + (char)((uint)uVar7 >> 8),
                                        ((uint8_t *)(void *)&auVar92)[0] + (char)uVar7)));
        uVar84 = uVar84 + 4;
      } while (uVar79 != uVar84);
      if (uVar76 == uVar79) break;
    }
    uVar76 = uVar91;
    if ((iVar83 - (int)uVar91 & 1U) != 0) {
      *(byte *)(param_2 + uVar91) =
           (*(byte *)(param_2 + (uVar91 - param_6)) >> 1) + *(char *)(param_3 + uVar91);
      uVar76 = uVar91 + 1;
    }
    if (uVar91 != param_5 - 1) {
      lVar82 = (param_2 + 1) - param_6;
      do {
        *(byte *)(param_2 + uVar76) =
             (*(byte *)(lVar82 + -1 + uVar76) >> 1) + *(char *)(param_3 + uVar76);
        *(byte *)(param_2 + 1 + uVar76) =
             (*(byte *)(lVar82 + uVar76) >> 1) + *(char *)(param_3 + 1 + uVar76);
        uVar76 = uVar76 + 2;
      } while (param_5 != uVar76);
    }
    break;
  case 4:
    if (param_4 != 0) {
      uVar85 = CONCAT71(uVar87,1);
      if (param_5 != 0) {
        uVar85 = 0;
        do {
          uVar78 = 0;
          uVar89 = 0;
          if (param_6 <= uVar85) {
            uVar78 = (uint)*(byte *)((param_2 - param_6) + uVar85);
            uVar89 = (uint)*(byte *)((param_4 - param_6) + uVar85);
          }
          uVar90 = (uint)*(byte *)(param_4 + uVar85);
          uVar80 = uVar78 - uVar89;
          uVar86 = -(uVar90 - uVar89);
          if ((int)uVar86 < 0) {
            uVar86 = uVar90 - uVar89;
          }
          uVar88 = -uVar80;
          if ((int)-uVar80 < 0) {
            uVar88 = uVar80;
          }
          uVar75 = (uVar80 + uVar90) - uVar89;
          uVar80 = -uVar75;
          if ((int)uVar80 < 0) {
            uVar80 = uVar75;
          }
          if (uVar88 <= uVar80) {
            uVar89 = uVar90;
          }
          if (uVar80 < uVar86) {
            uVar78 = uVar89;
          }
          cVar77 = (char)uVar78;
          if (uVar88 < uVar86) {
            cVar77 = (char)uVar89;
          }
          *(char *)(param_2 + uVar85) = cVar77 + *(char *)(param_3 + uVar85);
          uVar85 = uVar85 + 1;
        } while (param_5 != uVar85);
        uVar85 = CONCAT71((uint7)(uint3)(uVar86 >> 8),1);
      }
      break;
    }
    uVar76 = param_5;
    if (param_6 < param_5) {
      uVar76 = param_6;
    }
    if (uVar76 != 0) {
      if ((ulong)(param_2 - param_3) < 0x20 || uVar76 < 4) {
        uVar85 = 0;
      }
      else {
        if (uVar76 < 0x20) {
          uVar81 = 0;
        }
        else {
          uVar85 = uVar76 & 0xffffffffffffffe0;
          uVar81 = 0;
          do {
            uVar70 = ((undefined8 *)(param_3 + uVar81))[1];
            puVar3 = (undefined8 *)(param_3 + 0x10 + uVar81);
            uVar71 = *puVar3;
            uVar72 = puVar3[1];
            *(undefined8 *)(param_2 + uVar81) = *(undefined8 *)(param_3 + uVar81);
            ((undefined8 *)(param_2 + uVar81))[1] = uVar70;
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar81);
            *puVar3 = uVar71;
            puVar3[1] = uVar72;
            uVar81 = uVar81 + 0x20;
          } while (uVar85 != uVar81);
          if (uVar76 == uVar85) goto LAB_1001a63b;
          uVar81 = uVar85;
          if ((uVar76 & 0x1c) == 0) goto LAB_1001a5d6;
        }
        uVar85 = uVar76 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(param_2 + uVar81) = *(undefined4 *)(param_3 + uVar81);
          uVar81 = uVar81 + 4;
        } while (uVar85 != uVar81);
        if (uVar76 == uVar85) goto LAB_1001a63b;
      }
LAB_1001a5d6:
      uVar84 = uVar76 & 3;
      uVar81 = uVar85;
      if (uVar84 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar81) = *(undefined1 *)(param_3 + uVar81);
          uVar81 = uVar81 + 1;
          uVar84 = uVar84 - 1;
        } while (uVar84 != 0);
      }
      if (uVar85 - uVar76 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(param_2 + uVar81) = *(undefined1 *)(param_3 + uVar81);
          *(undefined1 *)(param_2 + 1 + uVar81) = *(undefined1 *)(param_3 + 1 + uVar81);
          *(undefined1 *)(param_2 + 2 + uVar81) = *(undefined1 *)(param_3 + 2 + uVar81);
          *(undefined1 *)(param_2 + 3 + uVar81) = *(undefined1 *)(param_3 + 3 + uVar81);
          uVar81 = uVar81 + 4;
        } while (uVar76 != uVar81);
      }
    }
LAB_1001a63b:
    uVar85 = CONCAT71(uVar87,1);
    if (param_5 <= param_6) break;
    uVar81 = param_5 - uVar76;
    if ((uVar81 < 4) || (param_6 < 0x20 || (ulong)(param_2 - param_3) < 0x20)) {
LAB_1001a671:
      uVar91 = uVar76;
    }
    else {
      if (uVar81 < 0x20) {
        uVar84 = 0;
      }
      else {
        uVar84 = uVar81 & 0xffffffffffffffe0;
        lVar82 = ((uVar76 + 0x10) - param_6) + param_2;
        uVar91 = 0;
        do {
          pcVar4 = (char *)(param_3 + uVar76 + uVar91);
          cVar77 = pcVar4[1];
          cVar9 = pcVar4[2];
          cVar10 = pcVar4[3];
          cVar11 = pcVar4[4];
          cVar12 = pcVar4[5];
          cVar13 = pcVar4[6];
          cVar14 = pcVar4[7];
          cVar15 = pcVar4[8];
          cVar16 = pcVar4[9];
          cVar17 = pcVar4[10];
          cVar18 = pcVar4[0xb];
          cVar19 = pcVar4[0xc];
          cVar20 = pcVar4[0xd];
          cVar21 = pcVar4[0xe];
          cVar22 = pcVar4[0xf];
          pcVar1 = (char *)(param_3 + uVar76 + 0x10 + uVar91);
          cVar23 = *pcVar1;
          cVar24 = pcVar1[1];
          cVar25 = pcVar1[2];
          cVar26 = pcVar1[3];
          cVar27 = pcVar1[4];
          cVar28 = pcVar1[5];
          cVar29 = pcVar1[6];
          cVar30 = pcVar1[7];
          cVar31 = pcVar1[8];
          cVar32 = pcVar1[9];
          cVar33 = pcVar1[10];
          cVar34 = pcVar1[0xb];
          cVar35 = pcVar1[0xc];
          cVar36 = pcVar1[0xd];
          cVar37 = pcVar1[0xe];
          cVar38 = pcVar1[0xf];
          pcVar5 = (char *)(lVar82 + -0x10 + uVar91);
          cVar39 = pcVar5[1];
          cVar40 = pcVar5[2];
          cVar41 = pcVar5[3];
          cVar42 = pcVar5[4];
          cVar43 = pcVar5[5];
          cVar44 = pcVar5[6];
          cVar45 = pcVar5[7];
          cVar46 = pcVar5[8];
          cVar47 = pcVar5[9];
          cVar48 = pcVar5[10];
          cVar49 = pcVar5[0xb];
          cVar50 = pcVar5[0xc];
          cVar51 = pcVar5[0xd];
          cVar52 = pcVar5[0xe];
          cVar53 = pcVar5[0xf];
          pcVar1 = (char *)(lVar82 + uVar91);
          cVar54 = *pcVar1;
          cVar55 = pcVar1[1];
          cVar56 = pcVar1[2];
          cVar57 = pcVar1[3];
          cVar58 = pcVar1[4];
          cVar59 = pcVar1[5];
          cVar60 = pcVar1[6];
          cVar61 = pcVar1[7];
          cVar62 = pcVar1[8];
          cVar63 = pcVar1[9];
          cVar64 = pcVar1[10];
          cVar65 = pcVar1[0xb];
          cVar66 = pcVar1[0xc];
          cVar67 = pcVar1[0xd];
          cVar68 = pcVar1[0xe];
          cVar69 = pcVar1[0xf];
          pcVar1 = (char *)(param_2 + uVar76 + uVar91);
          *pcVar1 = *pcVar5 + *pcVar4;
          pcVar1[1] = cVar39 + cVar77;
          pcVar1[2] = cVar40 + cVar9;
          pcVar1[3] = cVar41 + cVar10;
          pcVar1[4] = cVar42 + cVar11;
          pcVar1[5] = cVar43 + cVar12;
          pcVar1[6] = cVar44 + cVar13;
          pcVar1[7] = cVar45 + cVar14;
          pcVar1[8] = cVar46 + cVar15;
          pcVar1[9] = cVar47 + cVar16;
          pcVar1[10] = cVar48 + cVar17;
          pcVar1[0xb] = cVar49 + cVar18;
          pcVar1[0xc] = cVar50 + cVar19;
          pcVar1[0xd] = cVar51 + cVar20;
          pcVar1[0xe] = cVar52 + cVar21;
          pcVar1[0xf] = cVar53 + cVar22;
          pcVar1 = (char *)(param_2 + uVar76 + 0x10 + uVar91);
          *pcVar1 = cVar54 + cVar23;
          pcVar1[1] = cVar55 + cVar24;
          pcVar1[2] = cVar56 + cVar25;
          pcVar1[3] = cVar57 + cVar26;
          pcVar1[4] = cVar58 + cVar27;
          pcVar1[5] = cVar59 + cVar28;
          pcVar1[6] = cVar60 + cVar29;
          pcVar1[7] = cVar61 + cVar30;
          pcVar1[8] = cVar62 + cVar31;
          pcVar1[9] = cVar63 + cVar32;
          pcVar1[10] = cVar64 + cVar33;
          pcVar1[0xb] = cVar65 + cVar34;
          pcVar1[0xc] = cVar66 + cVar35;
          pcVar1[0xd] = cVar67 + cVar36;
          pcVar1[0xe] = cVar68 + cVar37;
          pcVar1[0xf] = cVar69 + cVar38;
          uVar91 = uVar91 + 0x20;
        } while (uVar84 != uVar91);
        if (uVar81 == uVar84) break;
        if ((uVar81 & 0x1c) == 0) {
          uVar76 = uVar76 + uVar84;
          goto LAB_1001a671;
        }
      }
      uVar79 = uVar81 & 0xfffffffffffffffc;
      uVar91 = uVar76 + uVar79;
      do {
        uVar7 = *(undefined4 *)(param_3 + uVar76 + uVar84);
        uVar8 = *(undefined4 *)((uVar76 - param_6) + param_2 + uVar84);
        *(uint *)(param_2 + uVar76 + uVar84) =
             CONCAT13((char)((uint)uVar8 >> 0x18) + (char)((uint)uVar7 >> 0x18),
                      CONCAT12((char)((uint)uVar8 >> 0x10) + (char)((uint)uVar7 >> 0x10),
                               CONCAT11((char)((uint)uVar8 >> 8) + (char)((uint)uVar7 >> 8),
                                        (char)uVar8 + (char)uVar7)));
        uVar84 = uVar84 + 4;
      } while (uVar79 != uVar84);
      if (uVar81 == uVar79) break;
    }
    uVar76 = uVar91;
    if ((iVar83 - (int)uVar91 & 1U) != 0) {
      *(char *)(param_2 + uVar91) =
           *(char *)(param_2 + (uVar91 - param_6)) + *(char *)(param_3 + uVar91);
      uVar76 = uVar91 + 1;
    }
    if (uVar91 != param_5 - 1) {
      lVar82 = (param_2 + 1) - param_6;
      do {
        *(char *)(param_2 + uVar76) = *(char *)(lVar82 + -1 + uVar76) + *(char *)(param_3 + uVar76);
        *(char *)(param_2 + 1 + uVar76) =
             *(char *)(lVar82 + uVar76) + *(char *)(param_3 + 1 + uVar76);
        uVar76 = uVar76 + 2;
      } while (param_5 != uVar76);
    }
    break;
  default:
    uVar85 = 0;
  }
  return uVar85 & 0xffffffff;
}

#undef DAT_1001ad90
#undef _DAT_1001ad90

#undef DAT_1001c3a8
#define DAT_1001c3a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x187cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001aad0
 */

void recovered_1001aad0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100187b0();
  recovered_100082d0();
  DAT_1001c3a8 = 1;
  return;
}

#undef DAT_1001c3a8

#undef DAT_1001c410
#define DAT_1001c410 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ab00
 */

void recovered_1001ab00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10019230();
  recovered_100082d0();
  DAT_1001c410 = 1;
  return;
}

#undef DAT_1001c410
