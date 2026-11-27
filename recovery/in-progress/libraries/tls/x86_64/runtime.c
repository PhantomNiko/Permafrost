/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100100f0
#define DAT_100100f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1661U)))
#undef DAT_100100f1
#define DAT_100100f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1662U)))
#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004c0
 */

/* WARNING: Removing unreachable block (ram,0x100004fc) */

void recovered_100004c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_100100f0 = 0;
    DAT_100100f1 = 0;
    recovered_10000520();
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
#define DAT_100100f0 (*(char *)(((uintptr_t)pf_module_state + 0x1661U)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1669U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1679U)))
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
      if (DAT_100100f8 != 0) goto LAB_100007f9;
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
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000830
 */

/* WARNING: Removing unreachable block (ram,0x1000086c) */

bool recovered_10000830(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10000880((long)addresses,(long)sizes,count);
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
#define DAT_100100f1 (*(char *)(((uintptr_t)pf_module_state + 0x1662U)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1669U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1679U)))
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
  if ((bVar3) || (DAT_100100f1 != '\0')) {
    return false;
  }
  DAT_100100f1 = 1;
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
        if (uVar7 < uVar10 || uVar8 == 0) goto LAB_1000098d;
        bVar3 = 0x30 < (uVar8 & 0xfffffffffffffff0);
      }
      else {
LAB_1000098d:
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
        recovered_100064b0(*(long **)(param_1 + lVar4 * 8),*(ulong *)(param_2 + lVar4 * 8),&local_38
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
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
#define local_18 (*(ulong *)(pf_stack_frame + 24))
#define local_10 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ac0
 */

/* WARNING: Removing unreachable block (ram,0x10000afc) */

bool recovered_10000ac0(ulong address,ulong size)

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
    bVar2 = recovered_10000880((long)&local_18,(long)&local_10,1);
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
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1669U)))
#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b20
 */

/* WARNING: Removing unreachable block (ram,0x10000b5c) */

uint recovered_10000b20(void)

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
  recovered_10000520();
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
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1669U)))
#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ba0
 */

/* WARNING: Removing unreachable block (ram,0x10000bdc) */

ulonglong recovered_10000ba0(void)

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
  recovered_10000520();
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
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1669U)))
#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c10
 */

/* WARNING: Removing unreachable block (ram,0x10000c4c) */

uint recovered_10000c10(void)

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
  recovered_10000520();
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
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1669U)))
#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca0
 */

/* WARNING: Removing unreachable block (ram,0x10000cdc) */

ulonglong recovered_10000ca0(void)

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
  recovered_10000520();
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
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d20
 */

/* WARNING: Removing unreachable block (ram,0x10000d5c) */

void * recovered_10000d20(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    puVar2 = recovered_10000d80(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10010100 = 0;
    return puVar2;
  }
  do {
  } while( true );
}

#undef DAT_10010100

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1669U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1679U)))
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
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f80
 */

/* WARNING: Removing unreachable block (ram,0x10000fbc) */

void * recovered_10000f80(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong *puVar2;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    puVar2 = recovered_10000d80(size,(ulong *)0x0,(ulong *)limit);
    DAT_10010100 = 0;
    return puVar2;
  }
  do {
  } while( true );
}

#undef DAT_10010100

#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe0
 */

/* WARNING: Removing unreachable block (ram,0x1000101c) */

void * recovered_10000fe0(ulong size,ulong first,ulong last)

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
    puVar2 = recovered_10000d80(size,(ulong *)first,(ulong *)last);
  }
  DAT_10010100 = 0;
  return puVar2;
}

#undef DAT_10010100

#undef DAT_10010100
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001040
 */

/* WARNING: Removing unreachable block (ram,0x1000107c) */

void recovered_10001040(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10010100;
  { __typeof__(DAT_10010100) pf_atomic_old = __atomic_exchange_n(&(DAT_10010100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001090((long)pointer);
    DAT_10010100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10010100

#undef DAT_10010108
#define DAT_10010108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1679U)))
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
#define DAT_10010100 (*(int *)(((uintptr_t)pf_module_state + 0x1671U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1679U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011b0
 */

/* WARNING: Removing unreachable block (ram,0x100011ec) */

void * recovered_100011b0(void *pointer,ulong size)

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
    puVar17 = recovered_10000d80(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10010100 = 0;
    return puVar17;
  }
  if (size == 0) {
    recovered_10001090((long)pointer);
    DAT_10010100 = 0;
    return (void *)0x0;
  }
  if (0xfffffffffffffff0 < size) {
    DAT_10010100 = 0;
    return (void *)0x0;
  }
  recovered_10000520();
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
      if (uVar14 < 0xffffffffffffffe0) goto LAB_10001384;
    }
    else if (size < 0xffffffffffffffb1) {
LAB_10001384:
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
      uVar10 = recovered_100066e0(puVar17,uVar13);
      if ((char)uVar10 != '\0') {
        DAT_10010108 = *(ulong **)((long)pointer + -0x18);
      }
      *(undefined1 *)((long)pointer + -8) = 0;
      DAT_10010100 = 0;
      return pointer;
    }
  }
  puVar9 = recovered_10000d80(uVar13,(ulong *)0x0,(ulong *)0xffffffffffffffff);
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
LAB_10001436:
    if (uVar13 == 0) goto LAB_100016ef;
  }
  else if ((((uint)puVar9 ^ (uint)pointer) & 7) == 0) {
    if (((ulong)puVar9 & 7) == 0) {
      puVar16 = puVar9;
      puVar11 = pointer;
LAB_10001621:
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
                    goto LAB_10001621;
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
        if (uVar12 == uVar18) goto LAB_10001436;
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
    goto LAB_10001436;
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
      if (uVar13 == uVar18) goto LAB_100016ef;
      if ((uVar13 & 0x1c) == 0) {
        puVar17 = (ulong *)((long)puVar17 + uVar18);
        puVar16 = (ulong *)((long)puVar15 + uVar18);
        uVar12 = (ulong)((uint)uVar13 & 0x1f);
        goto LAB_10001644;
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
    if (uVar13 == uVar14) goto LAB_100016ef;
  }
LAB_10001644:
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
LAB_100016ef:
  recovered_10001090((long)pointer);
  DAT_10010100 = 0;
  return puVar9;
}

#undef DAT_10010100
#undef DAT_10010108

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

void * recovered_10001bd0(ulong size)

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
 * Address: 0x10001c20
 */

void recovered_10001c20(void *pointer)

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
 * Address: 0x10001c70
 */

void * recovered_10001c70(void *pointer,ulong size)

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
 * Address: 0x10001cc0
 */

void * recovered_10001cc0(void *destination,void *source,ulong count)

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
LAB_10001cdf:
    if (count == 0) {
      return pvVar5;
    }
  }
  else if ((((uint)source ^ (uint)destination) & 7) == 0) {
    if (((ulong)destination & 7) == 0) {
LAB_10001ece:
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
                    goto LAB_10001ece;
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
        if (uVar6 == uVar9) goto LAB_10001cdf;
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
    goto LAB_10001cdf;
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
        goto LAB_10001ef0;
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
LAB_10001ef0:
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
 * Address: 0x10002100
 */

void * recovered_10002100(void *destination,void *source,ulong count)

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
LAB_1000249a:
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
                      goto LAB_1000249a;
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
          if (uVar11 == uVar16) goto LAB_100026f8;
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
LAB_100026f8:
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
          goto LAB_100024bc;
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
LAB_100024bc:
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
LAB_1000228e:
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
                    goto LAB_1000228e;
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
        if (uVar12 == uVar13) goto LAB_1000285a;
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
LAB_1000285a:
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
        goto LAB_1000291f;
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
LAB_1000291f:
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
 * Address: 0x100029c0
 */

void * recovered_100029c0(void *destination,int value,ulong count)

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
LAB_10002b0d:
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
                    goto LAB_10002b0d;
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
        if (uVar6 == uVar10) goto LAB_10002c41;
      }
      do {
        *(undefined8 *)destination = uVar5;
        destination = (void *)((long)destination + 8);
        count = count - 8;
      } while (7 < count);
    }
  }
LAB_10002c41:
  if (count == 0) {
    return pvVar3;
  }
  if (count < 4) {
LAB_10002c50:
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
        goto LAB_10002c50;
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

int recovered_100032e0(void *left,void *right,ulong count)

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
    if ((((uint)right ^ (uint)left) & 7) != 0) goto LAB_10003513;
    uVar11 = count;
    puVar8 = right;
    puVar10 = left;
    if (((ulong)left & 7) != 0) {
      bVar1 = *(byte *)left;
      bVar5 = *(byte *)right;
      if (bVar1 != bVar5) {
LAB_10003473:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_100035c8:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)left + 1);
      puVar8 = (ulong *)((long)right + 1);
      uVar11 = count - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10003473;
        puVar10 = (ulong *)((long)left + 2);
        puVar8 = (ulong *)((long)right + 2);
        uVar11 = count - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10003473;
          puVar10 = (ulong *)((long)left + 3);
          puVar8 = (ulong *)((long)right + 3);
          uVar11 = count - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10003473;
            puVar10 = (ulong *)((long)left + 4);
            puVar8 = (ulong *)((long)right + 4);
            uVar11 = count - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10003473;
              puVar10 = (ulong *)((long)left + 5);
              puVar8 = (ulong *)((long)right + 5);
              uVar11 = count - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10003473;
                puVar10 = (ulong *)((long)left + 6);
                puVar8 = (ulong *)((long)right + 6);
                uVar11 = count - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10003473;
                  puVar10 = (ulong *)((long)left + 7);
                  puVar8 = (ulong *)((long)right + 7);
                  uVar11 = count - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10003473;
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
    for (; 7 < count; count = count - 8) {
      if (*(ulong *)left != *(ulong *)right) {
        iVar3 = recovered_100035e0(left,right);
        return iVar3;
      }
      right = (ulong *)((long)right + 8);
      left = (ulong *)((long)left + 8);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_10003513:
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

ulong recovered_10003760(char *text)

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
 * Address: 0x10003790
 */

int recovered_10003790(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_100037b3;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_100037b3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - (byte)*right;
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

undefined8 * recovered_10003830(undefined8 *param_1)

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
LAB_100038d9:
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
        if (uVar5 == uVar10) goto LAB_100038d9;
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
    goto LAB_100038d9;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)param_1) < 0x20)) {
LAB_10003bf8:
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
        goto LAB_10003bf8;
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

ulong recovered_10003d50(char *text,char *reject)

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


#undef DAT_1000eed6
#define DAT_1000eed6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e70
 */

undefined * recovered_10003e70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000eed6;
}

#undef DAT_1000eed6

#undef PTR_DAT_10010000
#define PTR_DAT_10010000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1571U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e80
 */

undefined ** recovered_10003e80(void)

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
 * Address: 0x10003e90
 */

/* WARNING: Removing unreachable block (ram,0x10003ea6) */
/* WARNING: Removing unreachable block (ram,0x10003ef3) */
/* WARNING: Removing unreachable block (ram,0x10003efe) */
/* WARNING: Removing unreachable block (ram,0x10003f07) */
/* WARNING: Removing unreachable block (ram,0x10003f10) */
/* WARNING: Removing unreachable block (ram,0x10003efc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003e90(undefined8 *param_1)

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

#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
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
          param_1 = param_1 * DAT_1000ea90;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90 *
                    DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90;
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

#undef DAT_1000ea90

#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eb10
#define DAT_1000eb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000eb10
#define _DAT_1000eb10 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
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
  dVar2 = (double)(_DAT_1000eb10 ^ (ulong)param_1);
  if ((double)(_DAT_1000eb10 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1000ea98 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000ea90;
      iVar1 = iVar1 + 1;
    } while (DAT_1000ea98 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000ea90)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1000eb10 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1000ea90
#undef DAT_1000ea98
#undef DAT_1000eb10
#undef _DAT_1000eb10

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


#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
      return DAT_1000ea98;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000ea98;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000ea98 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000ea98

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


#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
         (ulong)(DAT_1000ea98 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_1000ea98

#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
    if (param_1 <= DAT_1000ea98) {
      dVar1 = DAT_1000ea98;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000ea90;
  }
  return dVar1;
}

#undef DAT_1000ea90
#undef DAT_1000ea98

#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eaa0
#define DAT_1000eaa0 (*(double *)(((uintptr_t)pf_module_state + 0x11U)))
#undef DAT_1000eaa8
#define DAT_1000eaa8 (*(double *)(((uintptr_t)pf_module_state + 0x19U)))
#undef DAT_1000eab0
#define DAT_1000eab0 (*(double *)(((uintptr_t)pf_module_state + 0x21U)))
#undef DAT_1000eab8
#define DAT_1000eab8 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000eac0
#define DAT_1000eac0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000eac8
#define DAT_1000eac8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000eb20
#define DAT_1000eb20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91U)))
#undef DAT_1000eb30
#define DAT_1000eb30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef DAT_1000eb40
#define DAT_1000eb40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef DAT_1000eb50
#define DAT_1000eb50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef _DAT_1000eac0
#define _DAT_1000eac0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef _DAT_1000eac8
#define _DAT_1000eac8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef _DAT_1000eb20
#define _DAT_1000eb20 (*(uint128 *)(((uintptr_t)pf_module_state + 0x91U)))
#undef _DAT_1000eb30
#define _DAT_1000eb30 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef _DAT_1000eb40
#define _DAT_1000eb40 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000eb50
#define _DAT_1000eb50 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc1U)))
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
    if (DAT_1000eaa8 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000ea90;
        iVar1 = iVar1 + 1;
      } while (DAT_1000eaa8 < param_1);
    }
    for (; param_1 < DAT_1000eab0; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000eab8 + param_1) / (param_1 + DAT_1000ea98);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000eb20);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000eb30);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000eb40);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000eb50);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000eac0 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000eac8;
  }
  return DAT_1000eaa0;
}

#undef DAT_1000ea90
#undef DAT_1000ea98
#undef DAT_1000eaa0
#undef DAT_1000eaa8
#undef DAT_1000eab0
#undef DAT_1000eab8
#undef DAT_1000eac0
#undef DAT_1000eac8
#undef DAT_1000eb20
#undef DAT_1000eb30
#undef DAT_1000eb40
#undef DAT_1000eb50
#undef _DAT_1000eac0
#undef _DAT_1000eac8
#undef _DAT_1000eb20
#undef _DAT_1000eb30
#undef _DAT_1000eb40
#undef _DAT_1000eb50

#undef DAT_1000eb60
#define DAT_1000eb60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004570
 */

long recovered_10004570(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000eb60 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000eb60

#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000ead0
#define DAT_1000ead0 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000ead8
#define DAT_1000ead8 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000eae0
#define DAT_1000eae0 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000eae8
#define DAT_1000eae8 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000eaf0
#define DAT_1000eaf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000eb70
#define DAT_1000eb70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef _DAT_1000eaf0
#define _DAT_1000eaf0 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000eb70
#define _DAT_1000eb70 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100045a0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000ead0 < param_1; param_1 = param_1 + DAT_1000ead8) {
  }
  for (; param_1 < DAT_1000eae0; param_1 = param_1 + DAT_1000eae8) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000eb70);
  return ((dVar1 / _DAT_1000eaf0 + DAT_1000ea98 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000ea98
#undef DAT_1000ead0
#undef DAT_1000ead8
#undef DAT_1000eae0
#undef DAT_1000eae8
#undef DAT_1000eaf0
#undef DAT_1000eb70
#undef _DAT_1000eaf0
#undef _DAT_1000eb70

#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000ead0
#define DAT_1000ead0 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000ead8
#define DAT_1000ead8 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000eae0
#define DAT_1000eae0 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000eae8
#define DAT_1000eae8 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000eaf8
#define DAT_1000eaf8 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000eb80
#define DAT_1000eb80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef _DAT_1000eb80
#define _DAT_1000eb80 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004650(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000ead0 < param_1; param_1 = param_1 + DAT_1000ead8) {
  }
  for (; param_1 < DAT_1000eae0; param_1 = param_1 + DAT_1000eae8) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000eb80);
  return (DAT_1000eaf8 * dVar1 + DAT_1000ea98 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000ea98
#undef DAT_1000ead0
#undef DAT_1000ead8
#undef DAT_1000eae0
#undef DAT_1000eae8
#undef DAT_1000eaf8
#undef DAT_1000eb80
#undef _DAT_1000eb80

#undef DAT_1000eb10
#define DAT_1000eb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000eb10
#define _DAT_1000eb10 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000eb10 ^ (ulong)param_1);
  if ((double)(_DAT_1000eb10 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000eb10
#undef _DAT_1000eb10

#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000eb00
#define DAT_1000eb00 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000eb10
#define DAT_1000eb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000eb10
#define _DAT_1000eb10 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004710
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong recovered_10004710(double value)

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
  dVar7 = (double)(_DAT_1000eb10 ^ (ulong)value);
  if ((double)(_DAT_1000eb10 ^ (ulong)value) <= value) {
    dVar7 = value;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_1000eb00;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_1000ea90;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_1000ea90;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= value) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_1000ea90
#undef DAT_1000eb00
#undef DAT_1000eb10
#undef _DAT_1000eb10

#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000eb00
#define DAT_1000eb00 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047e0
 */

ulonglong recovered_100047e0(double value)

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
  dVar6 = DAT_1000eb00;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (value < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(value < dVar6) & (ulong)value |
                    ~-(ulong)(value < dVar6) & (ulong)(value - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_1000ea90;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    value = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_1000ea90;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_1000ea90
#undef DAT_1000eb00

#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004890
 */

double recovered_10004890(ulonglong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (value == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_1000ea98;
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

#undef DAT_1000ea98

#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eb10
#define DAT_1000eb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000eb10
#define _DAT_1000eb10 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100048e0(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if (value < 0) {
    dVar4 = 0.0;
    uVar2 = -value;
    dVar3 = DAT_1000ea98;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_1000eb10);
  }
  dVar3 = 0.0;
  if (value != 0) {
    dVar4 = DAT_1000ea98;
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

#undef DAT_1000ea98
#undef DAT_1000eb10
#undef _DAT_1000eb10

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


#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eb10
#define DAT_1000eb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef UNK_1000eb14
#define UNK_1000eb14 (*(uint *)(((uintptr_t)pf_module_state + 0x85U)))
#undef _DAT_1000eb10
#define _DAT_1000eb10 (*(uint *)(((uintptr_t)pf_module_state + 0x81U)))
#undef uRam000000001000eb14
#define uRam000000001000eb14 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x85U)))
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
    dVar2 = pf_bits_double(CONCAT44((uint)(pf_double_bits(dVar2) >> 0x20) ^ uRam000000001000eb14,
                             SUB84(dVar2,0) ^ _DAT_1000eb10));
  }
  iVar1 = 0;
  if (DAT_1000ea98 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000ea90;
      iVar1 = iVar1 + 1;
    } while (DAT_1000ea98 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000ea90)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001000eb14,_DAT_1000eb10));
  }
  return CONCAT44((int)(pf_double_bits(dVar2) >> 0x20),(float)dVar2);
}

#undef DAT_1000ea90
#undef DAT_1000ea98
#undef DAT_1000eb10
#undef UNK_1000eb14
#undef _DAT_1000eb10
#undef uRam000000001000eb14

#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
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
          dVar3 = dVar3 * DAT_1000ea90;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90 *
                  DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90;
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

#undef DAT_1000ea90

#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eba0
#define DAT_1000eba0 (*(float *)(((uintptr_t)pf_module_state + 0x111U)))
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
    return DAT_1000eba0;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000ea98;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000ea98 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000ea98
#undef DAT_1000eba0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c00
 */

undefined8 recovered_10004c00(void)

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


#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000ea98 + dVar2) & uVar1);
}

#undef DAT_1000ea98

#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
                    (ulong)(DAT_1000ea98 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000ea98

#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1000ea98 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1000ea98

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


#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eaa8
#define DAT_1000eaa8 (*(double *)(((uintptr_t)pf_module_state + 0x19U)))
#undef DAT_1000eab0
#define DAT_1000eab0 (*(double *)(((uintptr_t)pf_module_state + 0x21U)))
#undef DAT_1000eab8
#define DAT_1000eab8 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000eac0
#define DAT_1000eac0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000eac8
#define DAT_1000eac8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000eb20
#define DAT_1000eb20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91U)))
#undef DAT_1000eb30
#define DAT_1000eb30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef DAT_1000eb40
#define DAT_1000eb40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef DAT_1000eb50
#define DAT_1000eb50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef DAT_1000eba4
#define DAT_1000eba4 (*(float *)(((uintptr_t)pf_module_state + 0x115U)))
#undef DAT_1000eba8
#define DAT_1000eba8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x119U)))
#undef _DAT_1000eac0
#define _DAT_1000eac0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef _DAT_1000eac8
#define _DAT_1000eac8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef _DAT_1000eb20
#define _DAT_1000eb20 (*(uint128 *)(((uintptr_t)pf_module_state + 0x91U)))
#undef _DAT_1000eb30
#define _DAT_1000eb30 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef _DAT_1000eb40
#define _DAT_1000eb40 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000eb50
#define _DAT_1000eb50 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef _DAT_1000eba8
#define _DAT_1000eba8 (*(float *)(((uintptr_t)pf_module_state + 0x119U)))
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
    if (_DAT_1000eba8 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000ea90;
        iVar1 = iVar1 + 1;
      } while (DAT_1000eaa8 < dVar2);
    }
    for (; dVar2 < DAT_1000eab0; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000eab8 + dVar2) / (dVar2 + DAT_1000ea98);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000eb20);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000eb30);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000eb40);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000eb50);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000eac0 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000eac8);
  }
  return DAT_1000eba4;
}

#undef DAT_1000ea90
#undef DAT_1000ea98
#undef DAT_1000eaa8
#undef DAT_1000eab0
#undef DAT_1000eab8
#undef DAT_1000eac0
#undef DAT_1000eac8
#undef DAT_1000eb20
#undef DAT_1000eb30
#undef DAT_1000eb40
#undef DAT_1000eb50
#undef DAT_1000eba4
#undef DAT_1000eba8
#undef _DAT_1000eac0
#undef _DAT_1000eac8
#undef _DAT_1000eb20
#undef _DAT_1000eb30
#undef _DAT_1000eb40
#undef _DAT_1000eb50
#undef _DAT_1000eba8

#undef DAT_1000eb60
#define DAT_1000eb60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ee0
 */

long recovered_10004ee0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000eb60 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000eb60

#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000ead0
#define DAT_1000ead0 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000ead8
#define DAT_1000ead8 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000eae0
#define DAT_1000eae0 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000eae8
#define DAT_1000eae8 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000eaf0
#define DAT_1000eaf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000eb70
#define DAT_1000eb70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef _DAT_1000eaf0
#define _DAT_1000eaf0 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000eb70
#define _DAT_1000eb70 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe1U)))
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

  for (dVar1 = (double)param_1; DAT_1000ead0 < dVar1; dVar1 = dVar1 + DAT_1000ead8) {
  }
  for (; dVar1 < DAT_1000eae0; dVar1 = dVar1 + DAT_1000eae8) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000eb70);
  return (float)(((dVar2 / _DAT_1000eaf0 + DAT_1000ea98 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000ea98
#undef DAT_1000ead0
#undef DAT_1000ead8
#undef DAT_1000eae0
#undef DAT_1000eae8
#undef DAT_1000eaf0
#undef DAT_1000eb70
#undef _DAT_1000eaf0
#undef _DAT_1000eb70

#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000ead0
#define DAT_1000ead0 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000ead8
#define DAT_1000ead8 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000eae0
#define DAT_1000eae0 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000eae8
#define DAT_1000eae8 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000eaf8
#define DAT_1000eaf8 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000eb80
#define DAT_1000eb80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef _DAT_1000eb80
#define _DAT_1000eb80 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004fc0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000ead0 < dVar1; dVar1 = dVar1 + DAT_1000ead8) {
  }
  for (; dVar1 < DAT_1000eae0; dVar1 = dVar1 + DAT_1000eae8) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000eb80);
  return (float)((DAT_1000eaf8 * dVar1 + DAT_1000ea98 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000ea98
#undef DAT_1000ead0
#undef DAT_1000ead8
#undef DAT_1000eae0
#undef DAT_1000eae8
#undef DAT_1000eaf8
#undef DAT_1000eb80
#undef _DAT_1000eb80

#undef DAT_1000eb90
#define DAT_1000eb90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101U)))
#undef UNK_1000eb94
#define UNK_1000eb94 (*(uint *)(((uintptr_t)pf_module_state + 0x105U)))
#undef _DAT_1000eb90
#define _DAT_1000eb90 (*(uint *)(((uintptr_t)pf_module_state + 0x101U)))
#undef uRam000000001000eb94
#define uRam000000001000eb94 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x105U)))
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
  fVar2 = (float)(_DAT_1000eb90 ^ (uint)fVar1);
  if ((float)(_DAT_1000eb90 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000eb94 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000eb90
#undef UNK_1000eb94
#undef _DAT_1000eb90
#undef uRam000000001000eb94

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


#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eb08
#define DAT_1000eb08 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_1000eb10
#define DAT_1000eb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000eb10
#define _DAT_1000eb10 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
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
    dVar11 = dVar11 * DAT_1000eb08 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1000ea98;
      do {
        dVar12 = dVar12 * DAT_1000eb08 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000eb08;
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
                dVar11 = dVar11 * DAT_1000ea90;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90 *
                         DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90 * DAT_1000ea90;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000eb10);
  }
  return dVar11;
}

#undef DAT_1000ea90
#undef DAT_1000ea98
#undef DAT_1000eb08
#undef DAT_1000eb10
#undef _DAT_1000eb10

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


#undef DAT_1000eb08
#define DAT_1000eb08 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_1000eb10
#define DAT_1000eb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef DAT_1000eed8
#define DAT_1000eed8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x449U)))
#undef _DAT_1000eb10
#define _DAT_1000eb10 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef str_1000eee2
#define str_1000eee2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x453U)))
#undef str_1000eef3
#define str_1000eef3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x464U)))
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
  uVar8 = _DAT_1000eb10;
  dVar7 = DAT_1000eb08;
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
      abStack_7a[uVar19 + 2] = str_1000eef3[uVar24 % 10];
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
    pcVar23 = str_1000eef3;
    if (*param_3 == 0x58) {
      pcVar23 = str_1000eee2;
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
        abStack_7a[uVar14 + 2] = str_1000eef3[uVar24 % 10];
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
      abStack_7a[uVar14 + 2] = str_1000eef3[(uint)uVar24 & 0xf];
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
        pbVar21 = &DAT_1000eed8;
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
      abStack_7a[uVar19 + 2] = str_1000eef3[uVar13 % 10];
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

#undef DAT_1000eb08
#undef DAT_1000eb10
#undef DAT_1000eed8
#undef _DAT_1000eb10
#undef str_1000eee2
#undef str_1000eef3
#undef abStack_7a

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
#define uStack0000000000000008 (*(undefined1 *)(pf_stack_frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006430
 */

int recovered_10006430(char *buffer,ulong capacity,char *format,...)

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
  uVar1 = recovered_10005550((byte *)buffer,capacity,(byte *)format,local_28);
  return (int)uVar1;
}

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
#undef uStack0000000000000008

#undef DAT_10000000
#define DAT_10000000 (*(uint8_t *)(0x10000000U))
#undef DAT_10000008
#define DAT_10000008 (*(uint8_t *)(0x10000008U))
#undef DAT_10000010
#define DAT_10000010 (*(uint8_t *)(0x10000010U))
#undef DAT_10000018
#define DAT_10000018 (*(uint8_t *)(0x10000018U))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1669U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1679U)))
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
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1681U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1691U)))
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
            recovered_10001cc0(local_238,&DAT_10010120,DAT_10010110);
            uVar3 = DAT_10010110;
          }
          local_238[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 &&
              ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00280840)(local_238);
          }
          DAT_10010110 = 0;
        }
        else {
          if (DAT_10010110 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001cc0(local_238,&DAT_10010120,DAT_10010110);
            local_238[DAT_10010110] = 0;
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
      lVar4 = lVar4 + 1;
    } while (param_2 != lVar4);
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
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1681U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1691U)))
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
 * Address: 0x10006910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006910(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_10010110 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001cc0(local_208,&DAT_10010120,DAT_10010110);
    uVar1 = DAT_10010110;
  }
  local_208[uVar1] = 0;
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
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1681U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1691U)))
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


  if (DAT_10010110 != 0) {
    recovered_10001cc0(local_208,&DAT_10010120,DAT_10010110);
    local_208[DAT_10010110] = 0;
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

#undef DAT_1000eee1
#define DAT_1000eee1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x452U)))
#undef DAT_1000ef04
#define DAT_1000ef04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x475U)))
#define local_148 (*(char (*)[328])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a50
 */

void recovered_10006a50(char *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined *puVar2;
  char *format;

  format = &DAT_1000ef04;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000eee1;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_10006430(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_10006740((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_1000eee1
#undef DAT_1000ef04
#undef local_148

#undef DAT_1000ef22
#define DAT_1000ef22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x493U)))
#undef str_1000ef07
#define str_1000ef07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x478U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ab0
 */

void recovered_10006ab0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003760(str_1000ef07);
  recovered_10006740(((uintptr_t)pf_module_state+0x478U),uVar1);
  uVar1 = recovered_10003760(&DAT_1000ef22);
  recovered_10006740(((uintptr_t)pf_module_state+0x493U),uVar1);
  return;
}

#undef DAT_1000ef22
#undef str_1000ef07

#undef DAT_1000ef22
#define DAT_1000ef22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x493U)))
#undef str_1000ef25
#define str_1000ef25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x496U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

void recovered_10006af0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003760(str_1000ef25);
  recovered_10006740(((uintptr_t)pf_module_state+0x496U),uVar1);
  uVar1 = recovered_10003760(&DAT_1000ef22);
  recovered_10006740(((uintptr_t)pf_module_state+0x493U),uVar1);
  return;
}

#undef DAT_1000ef22
#undef str_1000ef25

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
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1681U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1691U)))
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
 * Address: 0x10006b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006b30(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  if (DAT_10010110 != 0) {
    recovered_10001cc0(local_228,&DAT_10010120,DAT_10010110);
    local_228[DAT_10010110] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00280840)(local_228);
    }
    DAT_10010110 = 0;
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
#undef DAT_10010110
#undef DAT_10010120
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
#undef DAT_1000ef04
#define DAT_1000ef04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x475U)))
#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15d1U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef str_1000efa6
#define str_1000efa6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x517U)))
#undef str_1000efb3
#define str_1000efb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x524U)))
#undef str_1000efc1
#define str_1000efc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x532U)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c80
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10006c80(char *param_1,char *param_2)

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
    DAT_10010060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10003790(param_1,str_1000efa6);
  if (iVar3 == 0) {
    uVar8 = 1;
LAB_10006f2e:
    puVar5 = recovered_10001bd0(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_10010060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_100029c0(puVar5,0,0x340);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    recovered_10006430((char *)(puVar5 + 1),0xf1,&DAT_1000ef04,param_1);
    return puVar5;
  }
  iVar4 = recovered_10003790(param_1,str_1000efb3);
  if (iVar4 == 0) {
    uVar8 = 2;
    goto LAB_10006f2e;
  }
  iVar4 = recovered_10003790(param_1,str_1000efc1);
  if (iVar4 == 0) {
    uVar8 = 3;
    goto LAB_10006f2e;
  }
  puVar5 = recovered_10001bd0(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_10010060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_100029c0(puVar5,0,0x340);
  *puVar5 = 0;
  pcVar6 = recovered_10003cb0(param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10003cb0(param_2,'+');
    bVar9 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10003cb0(param_2,'a');
      bVar9 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar5 + 0x49) = bVar9;
  pcVar6 = recovered_10003cb0(param_2,'w');
  if ((pcVar6 == (char *)0x0) && (pcVar6 = recovered_10003cb0(param_2,'a'), pcVar6 == (char *)0x0))
  {
    pcVar6 = recovered_10003cb0(param_2,'+');
    bVar10 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar5 + 0x125) = bVar10;
  pcVar6 = recovered_10003cb0(param_2,'a');
  *(bool *)((long)puVar5 + 0x126) = pcVar6 != (char *)0x0;
  puVar5[0x48] = 0xffffffff;
  recovered_10006430((char *)(puVar5 + 1),0xf1,&DAT_1000ef04,param_1);
  recovered_100029c0(&local_34,0,0xc);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00280834)(param_1,&local_34), iVar3 != 0)))) {
    pcVar6 = recovered_10003cb0(param_2,'w');
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
          destination = recovered_10001c70(*(void **)(puVar5 + 0x40),uVar7);
          if (destination == (void *)0x0) {
            DAT_10010060 = 0xc;
            *(undefined1 *)((long)puVar5 + 0x129) = 1;
            goto LAB_10006fb8;
          }
          *(void **)(puVar5 + 0x40) = destination;
          *(ulong *)(puVar5 + 0x44) = uVar7;
          *(void **)(puVar5 + 0x3e) = destination;
          count = (ulong)local_30;
        }
        else {
          destination = *(void **)(puVar5 + 0x40);
        }
        recovered_10001cc0(destination,(void *)(ulong)local_34,count);
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
    DAT_10010060 = 2;
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
#undef DAT_1000ef04
#undef DAT_10010060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_1000efa6
#undef str_1000efb3
#undef str_1000efc1
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
#undef DAT_1000ef04
#define DAT_1000ef04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x475U)))
#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15d1U)))
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
#undef str_1000efa6
#define str_1000efa6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x517U)))
#undef str_1000efb3
#define str_1000efb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x524U)))
#undef str_1000efc1
#define str_1000efc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x532U)))
#define uStack_34 (*(uint *)(pf_stack_frame + 28))
#define uStack_30 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007010
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10007010(char *param_1,char *param_2,int *param_3)

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
        uStack_30 = 0x1000709a;
        iVar4 = (*(code *)(ulong)_DAT_00280838)
                          (param_3 + 1,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_100070c1;
        }
      }
      DAT_10010060 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_100070c1:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x100070d8;
      recovered_10001c20(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x100070e0;
    recovered_10001c20(param_3);
    puVar7 = recovered_10006c80(param_1,param_2);
    return puVar7;
  }
  if (param_1 == (char *)0x0 || param_2 == (char *)0x0) {
    DAT_10010060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10003790(param_1,str_1000efa6);
  if (iVar4 == 0) {
    uVar8 = 1;
LAB_10006f2e:
    puVar7 = recovered_10001bd0(0x340);
    if (puVar7 == (undefined4 *)0x0) {
      DAT_10010060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_100029c0(puVar7,0,0x340);
    *puVar7 = uVar8;
    *(bool *)(puVar7 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar7 + 0x125) = iVar4 != 0;
    puVar7[0x48] = 0xffffffff;
    recovered_10006430((char *)(puVar7 + 1),0xf1,&DAT_1000ef04,param_1);
    return puVar7;
  }
  iVar3 = recovered_10003790(param_1,str_1000efb3);
  if (iVar3 == 0) {
    uVar8 = 2;
    goto LAB_10006f2e;
  }
  iVar3 = recovered_10003790(param_1,str_1000efc1);
  if (iVar3 == 0) {
    uVar8 = 3;
    goto LAB_10006f2e;
  }
  puVar7 = recovered_10001bd0(0x340);
  if (puVar7 == (undefined4 *)0x0) {
    DAT_10010060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_100029c0(puVar7,0,0x340);
  *puVar7 = 0;
  pcVar5 = recovered_10003cb0(param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = recovered_10003cb0(param_2,'+');
    bVar9 = true;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = recovered_10003cb0(param_2,'a');
      bVar9 = pcVar5 != (char *)0x0;
    }
  }
  *(bool *)(puVar7 + 0x49) = bVar9;
  pcVar5 = recovered_10003cb0(param_2,'w');
  if ((pcVar5 == (char *)0x0) && (pcVar5 = recovered_10003cb0(param_2,'a'), pcVar5 == (char *)0x0))
  {
    pcVar5 = recovered_10003cb0(param_2,'+');
    bVar10 = pcVar5 != (char *)0x0;
  }
  *(bool *)((long)puVar7 + 0x125) = bVar10;
  pcVar5 = recovered_10003cb0(param_2,'a');
  *(bool *)((long)puVar7 + 0x126) = pcVar5 != (char *)0x0;
  puVar7[0x48] = 0xffffffff;
  recovered_10006430((char *)(puVar7 + 1),0xf1,&DAT_1000ef04,param_1);
  recovered_100029c0(&uStack_34,0,0xc);
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      (((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00280834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar5 = recovered_10003cb0(param_2,'w');
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
          destination = recovered_10001c70(*(void **)(puVar7 + 0x40),uVar6);
          if (destination == (void *)0x0) {
            DAT_10010060 = 0xc;
            *(undefined1 *)((long)puVar7 + 0x129) = 1;
            goto LAB_10006fb8;
          }
          *(void **)(puVar7 + 0x40) = destination;
          *(ulong *)(puVar7 + 0x44) = uVar6;
          *(void **)(puVar7 + 0x3e) = destination;
          count = uStack_30 & 0xffffffff;
        }
        else {
          destination = *(void **)(puVar7 + 0x40);
        }
        recovered_10001cc0(destination,(void *)(ulong)uStack_34,count);
      }
      else {
        *(ulong *)(puVar7 + 0x3e) = (ulong)uStack_34;
      }
      *(ulong *)(puVar7 + 0x42) = (ulong)(uint)uStack_30;
      cVar1 = *(char *)((long)puVar7 + 0x126);
      goto joined_r0x10006f12;
    }
  }
  else if (*(char *)((long)puVar7 + 0x125) == '\0') {
    DAT_10010060 = 2;
LAB_10006fb8:
    recovered_10001c20(puVar7);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar7 + 0x126);
joined_r0x10006f12:
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
#undef DAT_1000ef04
#undef DAT_10010060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef str_1000efa6
#undef str_1000efb3
#undef str_1000efc1
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
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15d1U)))
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
      DAT_10010060 = 5;
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
#undef DAT_10010060
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071d0
 */

ulong recovered_100071d0(void *param_1,ulong param_2,ulong param_3,int *param_4)

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
          uVar3 = recovered_10007310(param_4);
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
      recovered_10001cc0(param_1,(void *)(uVar4 + *(long *)(param_4 + 0x3e)),count);
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
#undef DAT_1000eee1
#define DAT_1000eee1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x452U)))
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1681U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1691U)))
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
    if (DAT_10010110 != 0) {
      recovered_10001cc0(local_218,&DAT_10010120,DAT_10010110);
      local_218[DAT_10010110] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && ((code *)(ulong)_DAT_00280840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00280840)(local_218);
      }
      DAT_10010110 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x47 < _DAT_00280808 && ((code *)(ulong)_DAT_00280844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00280844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_1000eee1,0)
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
#undef DAT_1000eee1
#undef DAT_10010110
#undef DAT_10010120
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_218

#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15d1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007500
 */

long recovered_10007500(void *param_1,long param_2,long param_3,uint *param_4)

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
    recovered_10006740((long)param_1,uVar5);
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
        DAT_10010060 = 0xc;
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
    recovered_10001cc0((void *)(uVar4 + *(long *)(param_4 + 0x40)),param_1,uVar5);
    uVar5 = uVar5 + *(long *)(param_4 + 0x46);
    *(ulong *)(param_4 + 0x46) = uVar5;
    if (*(ulong *)(param_4 + 0x42) < uVar5) {
      *(ulong *)(param_4 + 0x42) = uVar5;
    }
    *(undefined2 *)((long)param_4 + 0x127) = 1;
  }
  return param_3;
}

#undef DAT_10010060

#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15d1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007690
 */

undefined8 recovered_10007690(int *param_1,ulong param_2,int param_3)

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
  DAT_10010060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10010060

#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15d1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007710
 */

undefined8 recovered_10007710(long param_1)

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
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15d1U)))
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
#undef DAT_10010060
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15d1U)))
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
#define DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15d1U)))
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
 * Address: 0x10007900
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007900(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_10010060 = 0x16;
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
 * Address: 0x10007a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10007a70(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar2 = 0;
    recovered_100029c0(&local_34,0,0xc);
    if (_DAT_00280800 != 0x50414d57) goto LAB_10007b2f;
    if ((((_DAT_00280804 != 0) && (0xb < _DAT_00280808)) && (0x37 < _DAT_00280808)) &&
       ((code *)(ulong)_DAT_00280834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00280834)(param_1,&local_34);
      if (iVar1 != 0) {
        destination = recovered_10001bd0((ulong)(local_30 + (local_30 == 0)));
        if (destination != (void *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10001cc0(destination,(void *)(ulong)local_34,(ulong)local_30);
            uVar2 = (ulong)local_30;
          }
          *param_2 = destination;
          *param_3 = uVar2;
          uVar2 = CONCAT71((int7)((ulong)destination >> 8),1);
          goto LAB_10007b2f;
        }
      }
    }
  }
  uVar2 = 0;
LAB_10007b2f:
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
 * Address: 0x10007b50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10007b50(long param_1,long param_2,long param_3)

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

int recovered_10007c10(char *left,char *right,ulong count)

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


#undef DAT_1000ef35
#define DAT_1000ef35 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a6U)))
#undef str_1000ef38
#define str_1000ef38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a9U)))
#undef str_1000ef45
#define str_1000ef45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b6U)))
#undef str_1000ef4f
#define str_1000ef4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#undef str_1000ef63
#define str_1000ef63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#undef str_1000ef71
#define str_1000ef71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e2U)))
#undef str_1000ef83
#define str_1000ef83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f4U)))
#undef str_1000ef8f
#define str_1000ef8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x500U)))
#undef str_1000efa0
#define str_1000efa0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x511U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c50
 */

char * recovered_10007c50(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000ef35;
  default:
    return str_1000efa0;
  case 2:
    return str_1000ef38;
  case 5:
    return str_1000ef45;
  case 9:
    return str_1000ef4f;
  case 0xc:
    return str_1000ef63;
  case 0xd:
    return str_1000ef71;
  case 0x11:
    return str_1000ef83;
  case 0x16:
    return str_1000ef8f;
  }
}

#undef DAT_1000ef35
#undef str_1000ef38
#undef str_1000ef45
#undef str_1000ef4f
#undef str_1000ef63
#undef str_1000ef71
#undef str_1000ef83
#undef str_1000ef8f
#undef str_1000efa0

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


#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1891U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d40
 */

void recovered_10007d40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010320 = DAT_10010320 + 1;
  return;
}

#undef DAT_10010320

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

#define local_218 (*(byte (*)[536])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d80
 */

ulong recovered_10007d80(byte *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = recovered_10005550(local_218,0x200,param_1,param_2);
  if (0 < (int)(uint)uVar1) {
    uVar2 = 0x1ff;
    if ((uint)uVar1 < 0x1ff) {
      uVar2 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
    recovered_10006740((long)local_218,uVar2);
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
 * Address: 0x10007dd0
 */

ulong recovered_10007dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
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
  uVar1 = recovered_10005550(local_2d8,0x200,param_9,local_28);
  if (0 < (int)(uint)uVar1) {
    uVar2 = 0x1ff;
    if ((uint)uVar1 < 0x1ff) {
      uVar2 = uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 & 0xffffffff;
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
#undef DAT_1000f38c
#define DAT_1000f38c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fdU)))
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
  local_60 = &DAT_1000f38c;
  local_50 = &DAT_10007f71;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001ba0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10007f71
#undef DAT_1000f38c
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


#undef DAT_10010328
#define DAT_10010328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1899U)))
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
  *(long *)(extraout_RAX + 0x10) = DAT_10010328;
  *(undefined1 *)(extraout_RAX + 0x34) = 0;
  DAT_10010328 = extraout_RAX;
  recovered_100084c0(extraout_RAX);
  return;
}

#undef DAT_10010328

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ff0
 */

void * recovered_10007ff0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001bd0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001ba0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008020
 */

void * recovered_10008020(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001bd0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001ba0();
  }
  return pvVar1;
}


#undef DAT_1000f39c
#define DAT_1000f39c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90dU)))
#undef LAB_100080bd
#define LAB_100080bd (*(uint8_t *)(0x100080bdU))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008050
 */

void recovered_10008050(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1000f39c;
  local_50 = &LAB_100080bd;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(param_1);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1000f39c
#undef LAB_100080bd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000f3ac
#define DAT_1000f3ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91dU)))
#undef LAB_1000815d
#define LAB_1000815d (*(uint8_t *)(0x1000815dU))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080f0
 */

void recovered_100080f0(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1000f3ac;
  local_50 = &LAB_1000815d;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(param_1);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1000f3ac
#undef LAB_1000815d
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88

#undef DAT_1000f3bc
#define DAT_1000f3bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92dU)))
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
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1000f3bc;
  local_50 = &LAB_100081fd;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(param_1);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1000f3bc
#undef LAB_100081fd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000f3cc
#define DAT_1000f3cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x93dU)))
#undef LAB_1000829d
#define LAB_1000829d (*(uint8_t *)(0x1000829dU))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_68 (*(code * *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008230
 */

void recovered_10008230(void *param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007fa0;
  local_60 = &DAT_1000f3cc;
  local_50 = &LAB_1000829d;
  local_80 = 1;
  recovered_10008640(&local_88);
  recovered_10001c20(param_1);
  recovered_10008660(&local_88);
  return;
}

#undef DAT_1000f3cc
#undef LAB_1000829d
#undef local_58
#undef local_50
#undef local_48
#undef local_88
#undef local_80
#undef auStack_40
#undef local_68
#undef local_60

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


#undef DAT_10010338
#define DAT_10010338 (*(int *)(((uintptr_t)pf_module_state + 0x18a9U)))
#undef DAT_10010340
#define DAT_10010340 (*(void * *)(((uintptr_t)pf_module_state + 0x18b1U)))
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
  ulong size;
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
  DAT_10010338 = DAT_10010338 + 1 + (uint)(DAT_10010338 == -1);
  if (DAT_10010340 == (void *)0x0) {
LAB_100083fe:
    *(int *)((long)pvVar2 + 0x30) = DAT_10010338;
    *(void **)((long)pvVar2 + 0x18) = DAT_10010340;
    DAT_10010340 = pvVar2;
    return (long)pvVar2 + 0x38;
  }
  do {
    lVar5 = (long)DAT_10010340;
    while (*(int *)(lVar5 + 0x30) != DAT_10010338) {
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) goto LAB_100083fe;
    }
    DAT_10010338 = DAT_10010338 + 1 + (uint)(DAT_10010338 == -1);
  } while( true );
}

#undef DAT_10010338
#undef DAT_10010340

#undef DAT_10010340
#define DAT_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18b1U)))
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
  pvVar1 = DAT_10010340;
  if (DAT_10010340 == pointer) {
    puVar2 = &DAT_10010340;
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

#undef DAT_10010340

#undef DAT_10010340
#define DAT_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18b1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008480
 */

void recovered_10008480(long param_1)

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
 * Address: 0x100084c0
 */

long recovered_100084c0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_10010328
#define DAT_10010328 (*(void * *)(((uintptr_t)pf_module_state + 0x1899U)))
#undef DAT_10010340
#define DAT_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18b1U)))
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

#undef DAT_10010328
#undef DAT_10010340

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


#undef DAT_10010328
#define DAT_10010328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1899U)))
#undef DAT_10010330
#define DAT_10010330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x18a1U)))
#define cStack_36 (*(char *)(pf_stack_frame + 26))
#define local_38 (*(undefined2 *)(pf_stack_frame + 24))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_35 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 28))
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

  if (DAT_10010330 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_10010330;
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
        puVar2 = DAT_10010328;
        if (DAT_10010328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10007f20();
        }
        *(undefined1 *)((long)DAT_10010328 + 0x34) = 1;
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

#undef DAT_10010328
#undef DAT_10010330
#undef cStack_36
#undef local_38
#undef local_30
#undef uStack_35
#undef uStack_34

#undef DAT_10010328
#define DAT_10010328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1899U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008610
 */

void recovered_10008610(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010328;
  if (DAT_10010328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007f20();
  }
  *(undefined1 *)((long)DAT_10010328 + 0x34) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10008590(puVar1);
}

#undef DAT_10010328

#undef DAT_10010330
#define DAT_10010330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x18a1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008640
 */

void recovered_10008640(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010330;
  DAT_10010330 = param_1;
  return;
}

#undef DAT_10010330

#undef DAT_10010330
#define DAT_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18a1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008660
 */

void recovered_10008660(undefined8 *param_1)

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


#undef DAT_10010330
#define DAT_10010330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x18a1U)))
#undef DAT_10010340
#define DAT_10010340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x18b1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086c0
 */

void recovered_100086c0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010340;
  if (DAT_10010340 != param_1 && DAT_10010340 != (undefined8 *)0x0) {
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
  if (DAT_10010330 != (undefined8 *)0x0) {
    DAT_10010330 = (undefined8 *)*DAT_10010330;
  }
  recovered_10008720(puVar1);
  return;
}

#undef DAT_10010330
#undef DAT_10010340

#undef DAT_10010330
#define DAT_10010330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x18a1U)))
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

  if (DAT_10010330 != (long *)0x0) {
    plVar1 = (long *)param_1[4];
    do {
      plVar3 = DAT_10010330;
      if (DAT_10010330 == plVar1) {
        *(ulong *)((long)DAT_10010330 + 0xc) =
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
      recovered_10009070((long)DAT_10010330,(byte *)*param_1,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        *(undefined4 *)((long)plVar3 + 0xc) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)(plVar3 + 2) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_100087b4;
      }
      DAT_10010330 = (long *)*plVar3;
    } while (DAT_10010330 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007f20();
}

#undef DAT_10010330
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


#undef DAT_100100c0
#define DAT_100100c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1631U)))
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
      if ((undefined *)*puVar5 != &DAT_100100c0) goto LAB_100088bc;
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

#undef DAT_100100c0

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


#define in_stack_00000008 (*(undefined8 *)(pf_stack_frame + 40))
#define in_stack_00000010 (*(ushort *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089b0
 */

byte recovered_100089b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089f0
 */

bool recovered_100089f0(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eaf8
#define DAT_1000eaf8 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000ebb0
#define DAT_1000ebb0 (*(double *)(((uintptr_t)pf_module_state + 0x121U)))
#undef DAT_1000ebb8
#define DAT_1000ebb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x129U)))
#undef DAT_1000ebc0
#define DAT_1000ebc0 (*(double *)(((uintptr_t)pf_module_state + 0x131U)))
#undef DAT_1000ebc8
#define DAT_1000ebc8 (*(double *)(((uintptr_t)pf_module_state + 0x139U)))
#undef _DAT_1000ebb8
#define _DAT_1000ebb8 (*(double *)(((uintptr_t)pf_module_state + 0x129U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10008a20(double value)

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
  if (_DAT_1000ebb8 < value) {
    return DAT_1000ebb0;
  }
  dVar4 = 0.0;
  if (DAT_1000ebc0 <= value) {
    uVar1 = 0;
    if (DAT_1000ea90 < value) {
      uVar1 = 0;
      do {
        value = value * DAT_1000ea90;
        uVar1 = uVar1 + 1;
      } while (DAT_1000ea90 < value);
    }
    for (; value < DAT_1000eaf8; value = value * DAT_1000ea90) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000ea98;
    dVar5 = DAT_1000ea98;
    dVar6 = DAT_1000ea98;
    do {
      dVar7 = (value / dVar5) * dVar6;
      dVar9 = (value / (double)(iVar2 + -2)) * dVar7;
      dVar8 = (value / (double)(iVar2 + -1)) * dVar9;
      dVar6 = (value / (double)iVar2) * dVar8;
      dVar4 = dVar4 + dVar7 + dVar9 + dVar8 + dVar6;
      dVar5 = dVar5 + DAT_1000ebc8;
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

#undef DAT_1000ea90
#undef DAT_1000ea98
#undef DAT_1000eaf8
#undef DAT_1000ebb0
#undef DAT_1000ebb8
#undef DAT_1000ebc0
#undef DAT_1000ebc8
#undef _DAT_1000ebb8

#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eaf8
#define DAT_1000eaf8 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000ebb0
#define DAT_1000ebb0 (*(double *)(((uintptr_t)pf_module_state + 0x121U)))
#undef DAT_1000ebb8
#define DAT_1000ebb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x129U)))
#undef DAT_1000ebc0
#define DAT_1000ebc0 (*(double *)(((uintptr_t)pf_module_state + 0x131U)))
#undef DAT_1000ebc8
#define DAT_1000ebc8 (*(double *)(((uintptr_t)pf_module_state + 0x139U)))
#undef DAT_1000ebd0
#define DAT_1000ebd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141U)))
#undef _DAT_1000ebb8
#define _DAT_1000ebb8 (*(double *)(((uintptr_t)pf_module_state + 0x129U)))
#undef _DAT_1000ebd0
#define _DAT_1000ebd0 (*(float *)(((uintptr_t)pf_module_state + 0x141U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10008b90(float value)

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
  if (_DAT_1000ebb8 < dVar6) {
    return (float)DAT_1000ebb0;
  }
  dVar5 = 0.0;
  if (DAT_1000ebc0 <= dVar6) {
    uVar1 = 0;
    if (_DAT_1000ebd0 < value) {
      uVar1 = 0;
      do {
        dVar6 = dVar6 * DAT_1000ea90;
        uVar1 = uVar1 + 1;
      } while (DAT_1000ea90 < dVar6);
    }
    for (; dVar6 < DAT_1000eaf8; dVar6 = dVar6 * DAT_1000ea90) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000ea98;
    dVar5 = DAT_1000ea98;
    dVar7 = DAT_1000ea98;
    do {
      dVar8 = (dVar6 / dVar4) * dVar7;
      dVar10 = (dVar6 / (double)(iVar2 + -2)) * dVar8;
      dVar9 = (dVar6 / (double)(iVar2 + -1)) * dVar10;
      dVar7 = (dVar6 / (double)iVar2) * dVar9;
      dVar5 = dVar5 + dVar8 + dVar10 + dVar9 + dVar7;
      dVar4 = dVar4 + DAT_1000ebc8;
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

#undef DAT_1000ea90
#undef DAT_1000ea98
#undef DAT_1000eaf8
#undef DAT_1000ebb0
#undef DAT_1000ebb8
#undef DAT_1000ebc0
#undef DAT_1000ebc8
#undef DAT_1000ebd0
#undef _DAT_1000ebb8
#undef _DAT_1000ebd0

#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eaf8
#define DAT_1000eaf8 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000ebb0
#define DAT_1000ebb0 (*(double *)(((uintptr_t)pf_module_state + 0x121U)))
#undef DAT_1000ebb8
#define DAT_1000ebb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x129U)))
#undef DAT_1000ebc0
#define DAT_1000ebc0 (*(double *)(((uintptr_t)pf_module_state + 0x131U)))
#undef DAT_1000ebc8
#define DAT_1000ebc8 (*(double *)(((uintptr_t)pf_module_state + 0x139U)))
#undef _DAT_1000ebb8
#define _DAT_1000ebb8 (*(double *)(((uintptr_t)pf_module_state + 0x129U)))
#define in_stack_00000008 (*(longdouble *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10008d20(double value)

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
  else if (dVar5 <= _DAT_1000ebb8) {
    dVar4 = 0.0;
    if (DAT_1000ebc0 <= dVar5) {
      uVar1 = 0;
      if (DAT_1000ea90 < dVar5) {
        uVar1 = 0;
        do {
          dVar5 = dVar5 * DAT_1000ea90;
          uVar1 = uVar1 + 1;
        } while (DAT_1000ea90 < dVar5);
      }
      for (; dVar5 < DAT_1000eaf8; dVar5 = dVar5 * DAT_1000ea90) {
        uVar1 = uVar1 + 1;
      }
      iVar2 = 4;
      dVar4 = DAT_1000ea98;
      dVar6 = DAT_1000ea98;
      dVar7 = DAT_1000ea98;
      do {
        dVar8 = (dVar5 / dVar6) * dVar7;
        dVar10 = (dVar5 / (double)(iVar2 + -2)) * dVar8;
        dVar9 = (dVar5 / (double)(iVar2 + -1)) * dVar10;
        dVar7 = (dVar5 / (double)iVar2) * dVar9;
        dVar4 = dVar4 + dVar8 + dVar10 + dVar9 + dVar7;
        dVar6 = dVar6 + DAT_1000ebc8;
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
    dVar4 = DAT_1000ebb0;
  }
  return dVar4;
}

#undef DAT_1000ea90
#undef DAT_1000ea98
#undef DAT_1000eaf8
#undef DAT_1000ebb0
#undef DAT_1000ebb8
#undef DAT_1000ebc0
#undef DAT_1000ebc8
#undef _DAT_1000ebb8
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008eb0
 */

double recovered_10008eb0(long end,long start)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)end - (double)start;
}


#undef DAT_1000ea90
#define DAT_1000ea90 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ea98
#define DAT_1000ea98 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000eab8
#define DAT_1000eab8 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000eaf8
#define DAT_1000eaf8 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ed0
 */

double recovered_10008ed0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_100041e0(param_1);
  if (DAT_1000ea90 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_1000ea98;
  }
  else if (param_1 - dVar1 <= DAT_1000eaf8) {
    dVar1 = dVar1 + DAT_1000eab8;
  }
  return dVar1;
}

#undef DAT_1000ea90
#undef DAT_1000ea98
#undef DAT_1000eab8
#undef DAT_1000eaf8

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


#undef DAT_1000ebe0
#define DAT_1000ebe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_100100c0
#define DAT_100100c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1631U)))
#define local_31 (*(char *)(pf_stack_frame + 31))
#define local_40 (*(byte * *)(pf_stack_frame + 16))
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
                        *(long *)(&DAT_1000ebe0 + (ulong)(uVar10 & 0xf) * 8);
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
        if (*(undefined **)pbVar13 != &DAT_100100c0) goto LAB_100093c8;
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

#undef DAT_1000ebe0
#undef DAT_100100c0
#undef local_31
#undef local_40

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


#undef str_1000efcf
#define str_1000efcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x540U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095a0
 */

char * recovered_100095a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return str_1000efcf;
}

#undef str_1000efcf

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_1000eee1
#define DAT_1000eee1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x452U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280968
#define _DAT_00280968 (*(uint *)(0x280968U))
#define local_40 (*(undefined1 (*)[64])(pf_stack_frame + 16))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(int *)(pf_stack_frame + 28))
#define local_30 (*(int *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100095b0(void *context,void *io,char *hostname)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  char *text;
  uint uVar6;
  ulong count;

  if (context != (void *)0x0) {
    recovered_100029c0(context,0,0x220);
    if (io != (void *)0x0) {
      *(undefined8 *)((long)context + 0x20) = *(undefined8 *)((long)io + 0x20);
      uVar1 = *(undefined8 *)io;
      uVar2 = *(undefined8 *)((long)io + 8);
      uVar3 = *(undefined8 *)((long)io + 0x18);
      *(undefined8 *)((long)context + 0x10) = *(undefined8 *)((long)io + 0x10);
      *(undefined8 *)((long)context + 0x18) = uVar3;
      *(undefined8 *)context = uVar1;
      *(undefined8 *)((long)context + 8) = uVar2;
    }
    text = &DAT_1000eee1;
    if (hostname != (char *)0x0) {
      text = hostname;
    }
    uVar5 = recovered_10003760(text);
    count = 0x7f;
    if (uVar5 < 0x7f) {
      count = uVar5;
    }
    recovered_10001cc0((void *)((long)context + 0x28),text,count);
    *(undefined1 *)((long)context + count + 0x28) = 0;
    recovered_100029c0(local_40,0,0x18);
    uVar6 = 0x574d544c;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)))) {
      iVar4 = (*(code *)(ulong)_DAT_00280968)(local_40);
      if (iVar4 != 0) {
        uVar6 = local_34 * 0x3c6ef35f ^ local_38 ^ local_30 * 0x19660d ^ 0x574d544c;
      }
    }
    *(uint *)((long)context + 0x218) = (uint)context ^ uVar6 ^ *(uint *)((long)context + 0x218);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280968
#undef DAT_1000eee1
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280968
#undef local_40
#undef local_38
#undef local_34
#undef local_30

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_1000ec50
#define DAT_1000ec50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef DAT_1000ec60
#define DAT_1000ec60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef UNK_1000ec58
#define UNK_1000ec58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef UNK_1000ec68
#define UNK_1000ec68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(uint *)(0x28084cU))
#undef _DAT_1000ec50
#define _DAT_1000ec50 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef _DAT_1000ec60
#define _DAT_1000ec60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef str_1000ed40
#define str_1000ed40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_1000ef63
#define str_1000ef63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#undef str_1000effd
#define str_1000effd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56eU)))
#undef str_1000f018
#define str_1000f018 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x589U)))
#undef str_1000f035
#define str_1000f035 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a6U)))
#undef str_1000f03d
#define str_1000f03d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5aeU)))
#undef str_1000f04a
#define str_1000f04a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bbU)))
#undef str_1000f08b
#define str_1000f08b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fcU)))
#undef str_1000f0ad
#define str_1000f0ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61eU)))
#undef uRam000000001000ec58
#define uRam000000001000ec58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef uRam000000001000ec68
#define uRam000000001000ec68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#define uStack_3b0 (*(undefined8 *)(pf_stack_frame + 768))
#define uStack_3a0 (*(undefined8 *)(pf_stack_frame + 784))
#define uStack_390 (*(undefined8 *)(pf_stack_frame + 800))
#define uStack_380 (*(undefined8 *)(pf_stack_frame + 816))
#define uStack_370 (*(undefined8 *)(pf_stack_frame + 832))
#define uStack_360 (*(undefined8 *)(pf_stack_frame + 848))
#define uStack_350 (*(undefined8 *)(pf_stack_frame + 864))
#define local_698 (*(undefined1 *)(pf_stack_frame + 24))
#define local_697 (*(undefined1 *)(pf_stack_frame + 25))
#define local_696 (*(undefined1 *)(pf_stack_frame + 26))
#define local_695 (*(undefined1 *)(pf_stack_frame + 27))
#define local_694 (*(undefined2 *)(pf_stack_frame + 28))
#define local_692 (*(undefined1 (*)[1682])(pf_stack_frame + 30))
#define local_672 (*(undefined4 *)(pf_stack_frame + 62))
#define local_66e (*(undefined2 *)(pf_stack_frame + 66))
#define local_66c (*(undefined1 *)(pf_stack_frame + 68))
#define local_66b (*(undefined1 *)(pf_stack_frame + 69))
#define local_66a (*(undefined1 *)(pf_stack_frame + 70))
#define local_669 (*(undefined1 (*)[1641])(pf_stack_frame + 71))
#define local_498 (*(undefined1 (*)[1176])(pf_stack_frame + 536))
#define local_478 (*(undefined1 (*)[1144])(pf_stack_frame + 568))
#define local_458 (*(undefined1 (*)[1112])(pf_stack_frame + 600))
#define local_438 (*(undefined1 (*)[1080])(pf_stack_frame + 632))
#define local_418 (*(undefined1 (*)[1048])(pf_stack_frame + 664))
#define local_3f8 (*(undefined1 (*)[1016])(pf_stack_frame + 696))
#define local_3d8 (*(undefined1 (*)[984])(pf_stack_frame + 728))
#define local_3b8 (*(undefined8 *)(pf_stack_frame + 760))
#define local_3a8 (*(undefined8 *)(pf_stack_frame + 776))
#define local_398 (*(undefined8 *)(pf_stack_frame + 792))
#define local_388 (*(undefined8 *)(pf_stack_frame + 808))
#define local_378 (*(undefined8 *)(pf_stack_frame + 824))
#define local_368 (*(undefined8 *)(pf_stack_frame + 840))
#define local_358 (*(undefined8 *)(pf_stack_frame + 856))
#define local_1a8 (*(uint (*)[106])(pf_stack_frame + 1288))
#define local_188 (*(undefined4 *)(pf_stack_frame + 1320))
#define local_184 (*(undefined2 *)(pf_stack_frame + 1324))
#define local_182 (*(undefined8 (*)[48])(pf_stack_frame + 1326))
#define local_88 (*(uint (*)[34])(pf_stack_frame + 1576))
#define local_60 (*(ulong *)(pf_stack_frame + 1616))
#define local_58 (*(char * *)(pf_stack_frame + 1624))
#define local_50 (*(ulong *)(pf_stack_frame + 1632))
#define local_48 (*(undefined8 * *)(pf_stack_frame + 1640))
#define local_40 (*(ulong *)(pf_stack_frame + 1648))
#define local_38 (*(char * *)(pf_stack_frame + 1656))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100096d0(void *context,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[1744] __attribute__((aligned(16))) = {0};

  ulong count;
  undefined8 *context_00;
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  byte *data;
  char *pcVar8;

  local_50 = 0;
  if ((((context == (void *)0x0) || (*(long *)((long)context + 8) == 0)) ||
      (*(long *)((long)context + 0x10) == 0)) || (*(char *)((long)context + 0x28) == '\0')) {
    pcVar8 = str_1000effd;
  }
  else {
    pcVar8 = (char *)((long)context + 0x28);
    local_48 = context;
    local_40 = capacity;
    local_38 = error;
    uVar7 = recovered_10003760(pcVar8);
    puVar3 = local_48;
    if (uVar7 - 0xb5 < 0xffffffffffffff4c) {
      pcVar8 = str_1000f018;
    }
    else {
      recovered_1000d200(local_48,local_88);
      recovered_1000d200(puVar3,local_1a8);
      recovered_1000a220(local_498,local_1a8,str_1000ed40 + 0x30);
      recovered_100029c0(&local_3b8,0,0x200);
      recovered_100029c0(&local_188,0,0x100);
      iVar5 = (int)uVar7 + 3;
      local_188 = (uint)CONCAT11((char)iVar5,(char)((uint)iVar5 >> 8));
      local_184 = CONCAT11(PF_PART1(local_184, 1),(char)uVar7);
      local_58 = pcVar8;
      recovered_10001cc0((void *)((long)&local_184 + 1),pcVar8,uVar7);
      uVar7 = uVar7 & 0xffff;
      local_60 = uVar7 + 5;
      local_3b8 = (ulong)CONCAT42(PF_PART4(local_3b8, 4),CONCAT11((char)local_60,(char)(local_60 >> 8))) <<
                  0x10;
      recovered_10001cc0((void *)((long)&local_3b8 + 4),&local_188,local_60);
      local_188 = CONCAT13(PF_PART1(local_188, 3),0x40302);
      *(undefined4 *)((long)&uStack_3b0 + uVar7 + 1) = 0x3002b00;
      recovered_10001cc0((void *)((long)&uStack_3b0 + uVar7 + 5),&local_188,3);
      local_188 = 0x1d000200;
      *(undefined4 *)((long)&local_3a8 + uVar7) = 0x4000a00;
      recovered_10001cc0((void *)((long)&local_3a8 + uVar7 + 4),&local_188,4);
      local_188 = 0x3040c00;
      local_184 = 0x408;
      local_182[0] = 0x608050801050104;
      *(undefined4 *)((long)&uStack_3a0 + uVar7) = 0xe000d00;
      recovered_10001cc0((void *)((long)&uStack_3a0 + uVar7 + 4),&local_188,0xe);
      local_188 = 0x1d002400;
      local_184 = 0x2000;
      recovered_10001cc0(local_182,local_498,0x20);
      *(undefined4 *)((long)&uStack_390 + uVar7 + 2) = 0x26003300;
      recovered_10001cc0((void *)((long)&uStack_390 + uVar7 + 6),&local_188,0x26);
      count = uVar7 + 0x54;
      local_698 = 1;
      local_694 = 0x303;
      recovered_10001cc0(local_692,local_88,0x20);
      local_672 = 0x13020000;
      local_66e = 0x103;
      local_66c = 0;
      local_66b = (undefined1)(count >> 8);
      local_66a = (undefined1)count;
      recovered_10001cc0(local_669,&local_3b8,count);
      uVar1 = uRam000000001000ec58;
      iVar5 = (int)uVar7 + 0x7f;
      local_697 = 0;
      local_696 = (undefined1)((uint)iVar5 >> 8);
      local_695 = (undefined1)iVar5;
      uVar7 = uVar7 + 0x83;
      context_00 = puVar3 + 0x15;
      puVar3[0x15] = _DAT_1000ec50;
      puVar3[0x16] = uVar1;
      uVar1 = uRam000000001000ec68;
      puVar3[0x17] = _DAT_1000ec60;
      puVar3[0x18] = uVar1;
      puVar3[0x19] = 0;
      *(undefined4 *)(puVar3 + 0x22) = 0;
      recovered_10009d40(context_00,&local_698,uVar7);
      lVar2 = local_3b8;
      PF_PART3(local_3b8, 5) = SUB83(lVar2,5);
      PF_PART5(local_3b8, 0) = CONCAT14((char)uVar7,CONCAT13((char)(uVar7 >> 8),0x10316));
      recovered_10001cc0((void *)((long)&local_3b8 + 5),&local_698,uVar7);
      if ((code *)puVar3[2] == (code *)0x0) {
        pcVar8 = str_1000f08b;
      }
      else {
        cVar4 = (*(code *)puVar3[2])(*puVar3,&local_3b8,local_60 + 0x83,local_38,local_40);
        if (cVar4 == '\0') {
          return 0;
        }
        if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
            ((0xb < _DAT_00280808 &&
             ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))))) &&
           (data = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x4100), data != (byte *)0x0)) {
          local_3b8 = local_3b8 & 0xffffffffffffff00;
          uVar7 = recovered_1000c8d0(local_48,(void *)0x0,(byte *)&local_3b8,data,0x4100,&local_50,
                                     local_38,local_40);
          if ((char)uVar7 != '\0') {
            if ((byte)local_3b8 == 0x16) {
              uVar7 = recovered_1000a010((char *)data,local_50,&local_188,local_38,local_40);
              if ((char)uVar7 != '\0') {
                recovered_10009d40(context_00,data,local_50);
                recovered_10009fc0();
                recovered_1000a220(local_88,local_1a8,&local_188);
                recovered_100029c0(local_478,0,0x20);
                recovered_1000b5d0(local_478,local_478,local_458);
                recovered_1000b670(local_458,str_1000f035,(undefined1 *)0x0,local_438);
                recovered_1000b5d0(local_438,local_88,local_418);
                local_358 = puVar3[0x21];
                uStack_350 = puVar3[0x22];
                local_368 = puVar3[0x1f];
                uStack_360 = puVar3[0x20];
                local_378 = puVar3[0x1d];
                uStack_370 = puVar3[0x1e];
                local_3b8 = *context_00;
                uStack_3b0 = puVar3[0x16];
                local_3a8 = puVar3[0x17];
                uStack_3a0 = puVar3[0x18];
                local_398 = puVar3[0x19];
                uStack_390 = puVar3[0x1a];
                local_388 = puVar3[0x1b];
                uStack_380 = puVar3[0x1c];
                recovered_1000dd80(&local_3b8,local_3f8);
                recovered_1000de60(local_418,str_1000f03d,local_3f8,0x20,&local_3b8,0x20);
                recovered_1000de60(local_418,str_1000f04a,local_3f8,0x20,local_3d8,0x20);
                puVar3 = local_48;
                recovered_1000b700(local_48 + 0x23,&local_3b8);
                recovered_1000b700(puVar3 + 0x2a,local_3d8);
                *(undefined1 *)((long)puVar3 + 0x21c) = 1;
                uVar6 = recovered_1000b770(puVar3,local_3d8,local_418,&local_3b8,local_38,local_40);
                if ((char)uVar6 == '\0') {
                  return 0;
                }
                if (((code *)local_48[4] == (code *)0x0) ||
                   (cVar4 = (*(code *)local_48[4])
                                      (*local_48,local_58,local_48 + 0x3f,
                                       *(undefined1 *)((long)local_48 + 0x21e),local_38,local_40),
                   cVar4 != '\0')) {
                  return 1;
                }
                return 0;
              }
            }
            else {
              recovered_10006430(local_38,local_40,str_1000f0ad);
            }
          }
          recovered_10009fc0();
          return 0;
        }
        pcVar8 = str_1000ef63;
      }
    }
    capacity = local_40;
    error = local_38;
  }
  recovered_10006430(error,capacity,pcVar8);
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_1000ec50
#undef DAT_1000ec60
#undef UNK_1000ec58
#undef UNK_1000ec68
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_1000ec50
#undef _DAT_1000ec60
#undef str_1000ed40
#undef str_1000ef63
#undef str_1000effd
#undef str_1000f018
#undef str_1000f035
#undef str_1000f03d
#undef str_1000f04a
#undef str_1000f08b
#undef str_1000f0ad
#undef uRam000000001000ec58
#undef uRam000000001000ec68
#undef uStack_3b0
#undef uStack_3a0
#undef uStack_390
#undef uStack_380
#undef uStack_370
#undef uStack_360
#undef uStack_350
#undef local_698
#undef local_697
#undef local_696
#undef local_695
#undef local_694
#undef local_692
#undef local_672
#undef local_66e
#undef local_66c
#undef local_66b
#undef local_66a
#undef local_669
#undef local_498
#undef local_478
#undef local_458
#undef local_438
#undef local_418
#undef local_3f8
#undef local_3d8
#undef local_3b8
#undef local_3a8
#undef local_398
#undef local_388
#undef local_378
#undef local_368
#undef local_358
#undef local_1a8
#undef local_188
#undef local_184
#undef local_182
#undef local_88
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef DAT_1000ed90
#define DAT_1000ed90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x301U)))
#define local_70 (*(ulong *)(pf_stack_frame + 352))
#define local_68 (*(void * *)(pf_stack_frame + 360))
#define local_60 (*(ulong *)(pf_stack_frame + 368))
#define local_58 (*(long *)(pf_stack_frame + 376))
#define local_50 (*(uint *)(pf_stack_frame + 384))
#define local_4c (*(uint *)(pf_stack_frame + 388))
#define local_48 (*(uint *)(pf_stack_frame + 392))
#define local_44 (*(uint *)(pf_stack_frame + 396))
#define local_40 (*(uint *)(pf_stack_frame + 400))
#define local_3c (*(uint *)(pf_stack_frame + 404))
#define local_38 (*(uint *)(pf_stack_frame + 408))
#define local_34 (*(uint *)(pf_stack_frame + 412))
#define auStack_1b4 (*(uint (*)[109])(pf_stack_frame + 28))
#define auStack_1a0 (*(uint (*)[104])(pf_stack_frame + 48))
#define auStack_180 (*(uint (*)[96])(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d40
 */

void recovered_10009d40(void *context,void *data,ulong size)

{
  unsigned char pf_stack_frame[496] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong count;
  uint uVar11;
  uint uVar12;

  if (((context != (void *)0x0) && (data != (void *)0x0 || size == 0)) &&
     (*(long *)((long)context + 0x20) = *(long *)((long)context + 0x20) + size, size != 0)) {
    lVar3 = (long)context + 0x28;
    uVar1 = *(uint *)((long)context + 0x68);
    local_58 = lVar3;
    do {
      count = (ulong)(0x40 - uVar1);
      if (size < 0x40 - uVar1) {
        count = size;
      }
      auStack_180[0] = 0x10009dcc;
      auStack_180[1] = 0;
      recovered_10001cc0((void *)((ulong)uVar1 + lVar3),data,count);
      uVar1 = *(int *)((long)context + 0x68) + (int)count;
      *(uint *)((long)context + 0x68) = uVar1;
      if (uVar1 == 0x40) {
        lVar3 = 10;
        do {
          uVar1 = *(uint *)((long)context + lVar3 * 4);
          auStack_1a0[lVar3] =
               uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x1a);
        lVar3 = 0x10;
        uVar1 = auStack_180[2];
        do {
          uVar6 = auStack_1b4[lVar3];
          uVar8 = auStack_180[lVar3];
          auStack_180[lVar3 + 2] =
               uVar1 + auStack_1a0[lVar3 + 3] +
               (uVar6 >> 3 ^ (uVar6 << 0xe | uVar6 >> 0x12) ^ (uVar6 << 0x19 | uVar6 >> 7)) +
               (uVar8 >> 10 ^ (uVar8 << 0xd | uVar8 >> 0x13) ^ (uVar8 << 0xf | uVar8 >> 0x11));
          lVar3 = lVar3 + 1;
          uVar1 = uVar6;
        } while (lVar3 != 0x40);
        local_34 = *(uint *)context;
        local_38 = *(uint *)((long)context + 4);
        local_3c = *(uint *)((long)context + 8);
        local_40 = *(uint *)((long)context + 0xc);
        local_44 = *(uint *)((long)context + 0x10);
        local_48 = *(uint *)((long)context + 0x14);
        local_4c = *(uint *)((long)context + 0x18);
        local_50 = *(uint *)((long)context + 0x1c);
        lVar3 = 0;
        uVar1 = local_34;
        uVar6 = local_38;
        uVar8 = local_3c;
        uVar5 = local_40;
        uVar10 = local_44;
        uVar9 = local_48;
        uVar12 = local_4c;
        uVar7 = local_50;
        do {
          uVar11 = uVar12;
          uVar12 = uVar9;
          uVar9 = uVar10;
          uVar2 = uVar8;
          uVar8 = uVar6;
          uVar6 = uVar1;
          iVar4 = ((uVar12 ^ uVar11) & uVar9 ^ uVar11) + uVar7 +
                  ((uVar9 << 7 | uVar9 >> 0x19) ^
                  (uVar9 << 0x15 | uVar9 >> 0xb) ^ (uVar9 << 0x1a | uVar9 >> 6)) +
                  *(int *)((long)&DAT_1000ed90 + lVar3) + *(int *)((long)auStack_180 + lVar3 + 8);
          uVar10 = uVar5 + iVar4;
          uVar1 = (uVar2 & uVar8 ^ (uVar2 ^ uVar8) & uVar6) +
                  ((uVar6 << 10 | uVar6 >> 0x16) ^
                  (uVar6 << 0x13 | uVar6 >> 0xd) ^ (uVar6 << 0x1e | uVar6 >> 2)) + iVar4;
          lVar3 = lVar3 + 4;
          uVar5 = uVar2;
          uVar7 = uVar11;
        } while (lVar3 != 0x100);
        *(uint *)context = uVar1 + local_34;
        *(uint *)((long)context + 4) = uVar6 + local_38;
        *(uint *)((long)context + 8) = uVar8 + local_3c;
        *(uint *)((long)context + 0xc) = uVar2 + local_40;
        *(uint *)((long)context + 0x10) = uVar10 + local_44;
        *(uint *)((long)context + 0x14) = uVar9 + local_48;
        *(uint *)((long)context + 0x18) = uVar12 + local_4c;
        *(uint *)((long)context + 0x1c) = uVar11 + local_50;
        *(undefined4 *)((long)context + 0x68) = 0;
        uVar1 = 0;
        lVar3 = local_58;
        local_70 = size;
        local_68 = data;
        local_60 = count;
      }
      data = (void *)((long)data + count);
      size = size - count;
    } while (size != 0);
  }
  return;
}

#undef DAT_1000ed90
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
#undef local_34
#undef auStack_1b4
#undef auStack_1a0
#undef auStack_180

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
 * Address: 0x10009fc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009fc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000a001. Too many branches */
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

#undef str_1000f0cb
#define str_1000f0cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63cU)))
#undef str_1000f0e4
#define str_1000f0e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x655U)))
#undef str_1000f0fe
#define str_1000f0fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66fU)))
#undef str_1000f11a
#define str_1000f11a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68bU)))
#undef str_1000f134
#define str_1000f134 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a5U)))
#undef str_1000f160
#define str_1000f160 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d1U)))
#undef str_1000f179
#define str_1000f179 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eaU)))
#undef str_1000f192
#define str_1000f192 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x703U)))
#undef str_1000f1a8
#define str_1000f1a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x719U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a010
 */

ulong recovered_1000a010(char *param_1,ulong param_2,void *param_3,char *param_4,ulong param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *format;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  void *unaff_R14;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;

  format = str_1000f0cb;
  if ((3 < param_2) && (*param_1 == '\x02')) {
    uVar4 = (uint)(byte)param_1[2] << 8 | (uint)(byte)param_1[1] << 0x10;
    if ((byte)param_1[3] + uVar4 < 0x26 || param_2 < (byte)param_1[3] + uVar4 + 4) {
      format = str_1000f0e4;
    }
    else {
      format = str_1000f0fe;
      if ((param_1[4] == '\x03') && (param_1[5] == '\x03')) {
        uVar2 = (ulong)(byte)param_1[0x26];
        if (param_2 < uVar2 + 0x2b) {
          format = str_1000f11a;
        }
        else if ((ushort)(*(ushort *)(param_1 + uVar2 + 0x27) << 8 |
                         *(ushort *)(param_1 + uVar2 + 0x27) >> 8) == 0x1303) {
          format = str_1000f160;
          if ((param_1[uVar2 + 0x29] == '\0') && (uVar7 = uVar2 + 0x2c, uVar7 <= param_2)) {
            uVar6 = (ushort)(*(ushort *)(param_1 + uVar2 + 0x2a) << 8 |
                            *(ushort *)(param_1 + uVar2 + 0x2a) >> 8) + uVar7;
            if (param_2 < uVar6) {
              format = str_1000f179;
            }
            else {
              uVar2 = uVar2 + 0x30;
              format = str_1000f1a8;
              if (uVar2 <= uVar6) {
                bVar1 = 0;
                bVar9 = false;
                do {
                  uVar3 = *(ushort *)(param_1 + uVar7 + 2) << 8 |
                          *(ushort *)(param_1 + uVar7 + 2) >> 8;
                  uVar8 = uVar3 + uVar2;
                  if (uVar6 < uVar8) {
                    format = str_1000f192;
                    goto LAB_1000a0fb;
                  }
                  uVar5 = *(ushort *)(param_1 + uVar7) << 8 | *(ushort *)(param_1 + uVar7) >> 8;
                  if ((uVar5 == 0x2b) && (1 < uVar3)) {
                    bVar9 = (ushort)(*(ushort *)(param_1 + uVar2) << 8 |
                                    *(ushort *)(param_1 + uVar2) >> 8) == 0x304;
                  }
                  else if ((uVar5 == 0x33) &&
                          (((0x23 < uVar3 &&
                            ((ushort)(*(ushort *)(param_1 + uVar2) << 8 |
                                     *(ushort *)(param_1 + uVar2) >> 8) == 0x1d)) &&
                           ((ushort)(*(ushort *)(param_1 + uVar2 + 2) << 8 |
                                    *(ushort *)(param_1 + uVar2 + 2) >> 8) == 0x20)))) {
                    recovered_10001cc0(param_3,param_1 + uVar2 + 4,0x20);
                    bVar1 = 1;
                    unaff_R14 = param_3;
                  }
                  uVar2 = uVar8 + 4;
                  uVar7 = uVar8;
                } while (uVar2 <= uVar6);
                uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
                if ((bool)(bVar9 & bVar1)) goto LAB_1000a10e;
              }
            }
          }
        }
        else {
          format = str_1000f134;
        }
      }
    }
  }
LAB_1000a0fb:
  uVar2 = 0;
  recovered_10006430(param_4,param_5,format);
LAB_1000a10e:
  return uVar2 & 0xffffffff;
}

#undef str_1000f0cb
#undef str_1000f0e4
#undef str_1000f0fe
#undef str_1000f11a
#undef str_1000f134
#undef str_1000f160
#undef str_1000f179
#undef str_1000f192
#undef str_1000f1a8

#undef DAT_1000ec70
#define DAT_1000ec70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1U)))
#undef DAT_1000ec80
#define DAT_1000ec80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef UNK_1000ec74
#define UNK_1000ec74 (*(int *)(((uintptr_t)pf_module_state + 0x1e5U)))
#undef UNK_1000ec78
#define UNK_1000ec78 (*(int *)(((uintptr_t)pf_module_state + 0x1e9U)))
#undef UNK_1000ec7c
#define UNK_1000ec7c (*(int *)(((uintptr_t)pf_module_state + 0x1edU)))
#undef UNK_1000ec84
#define UNK_1000ec84 (*(int *)(((uintptr_t)pf_module_state + 0x1f5U)))
#undef UNK_1000ec88
#define UNK_1000ec88 (*(int *)(((uintptr_t)pf_module_state + 0x1f9U)))
#undef UNK_1000ec8c
#define UNK_1000ec8c (*(int *)(((uintptr_t)pf_module_state + 0x1fdU)))
#undef _DAT_1000ec70
#define _DAT_1000ec70 (*(int *)(((uintptr_t)pf_module_state + 0x1e1U)))
#undef _DAT_1000ec80
#define _DAT_1000ec80 (*(int *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef iRam000000001000ec74
#define iRam000000001000ec74 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e5U)))
#undef iRam000000001000ec78
#define iRam000000001000ec78 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e9U)))
#undef iRam000000001000ec7c
#define iRam000000001000ec7c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1edU)))
#undef iRam000000001000ec84
#define iRam000000001000ec84 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f5U)))
#undef iRam000000001000ec88
#define iRam000000001000ec88 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f9U)))
#undef iRam000000001000ec8c
#define iRam000000001000ec8c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1fdU)))
#define local_298 (*(int *)(pf_stack_frame + 1032))
#define local_288 (*(int *)(pf_stack_frame + 1048))
#define local_278 (*(int *)(pf_stack_frame + 1064))
#define local_268 (*(int *)(pf_stack_frame + 1080))
#define local_260 (*(void * *)(pf_stack_frame + 1088))
#define local_258 (*(uint *)(pf_stack_frame + 1096))
#define local_248 (*(uint *)(pf_stack_frame + 1112))
#define local_238 (*(uint *)(pf_stack_frame + 1128))
#define local_228 (*(uint *)(pf_stack_frame + 1144))
#define local_218 (*(uint *)(pf_stack_frame + 1160))
#define local_208 (*(undefined8 *)(pf_stack_frame + 1176))
#define local_1f8 (*(undefined8 *)(pf_stack_frame + 1192))
#define local_1e8 (*(undefined8 *)(pf_stack_frame + 1208))
#define local_1d8 (*(undefined8 *)(pf_stack_frame + 1224))
#define local_1c8 (*(uint *)(pf_stack_frame + 1240))
#define local_1c0 (*(uint *)(pf_stack_frame + 1248))
#define local_1bc (*(uint *)(pf_stack_frame + 1252))
#define local_1b8 (*(uint *)(pf_stack_frame + 1256))
#define local_1b0 (*(uint *)(pf_stack_frame + 1264))
#define local_1a8 (*(long *)(pf_stack_frame + 1272))
#define local_1a0 (*(ulong *)(pf_stack_frame + 1280))
#define local_198 (*(ulong *)(pf_stack_frame + 1288))
#define local_190 (*(ulong *)(pf_stack_frame + 1296))
#define local_188 (*(undefined8 *)(pf_stack_frame + 1304))
#define local_178 (*(undefined8 *)(pf_stack_frame + 1320))
#define local_168 (*(undefined8 *)(pf_stack_frame + 1336))
#define local_158 (*(undefined8 *)(pf_stack_frame + 1352))
#define local_148 (*(uint *)(pf_stack_frame + 1368))
#define local_138 (*(uint *)(pf_stack_frame + 1384))
#define local_128 (*(uint *)(pf_stack_frame + 1400))
#define local_118 (*(uint *)(pf_stack_frame + 1416))
#define local_108 (*(uint *)(pf_stack_frame + 1432))
#define local_f8 (*(uint *)(pf_stack_frame + 1448))
#define local_e8 (*(undefined8 *)(pf_stack_frame + 1464))
#define local_d8 (*(undefined8 *)(pf_stack_frame + 1480))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 1496))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 1512))
#define local_a8 (*(uint *)(pf_stack_frame + 1528))
#define local_98 (*(undefined8 *)(pf_stack_frame + 1544))
#define local_88 (*(undefined8 *)(pf_stack_frame + 1560))
#define local_78 (*(undefined8 *)(pf_stack_frame + 1576))
#define local_68 (*(undefined8 *)(pf_stack_frame + 1592))
#define local_58 (*(uint *)(pf_stack_frame + 1608))
#define local_50 (*(uint *)(pf_stack_frame + 1616))
#define local_48 (*(ulong *)(pf_stack_frame + 1624))
#define local_40 (*(uint *)(pf_stack_frame + 1632))
#define local_38 (*(long *)(pf_stack_frame + 1640))
#define uStack_640 (*(ulong *)(pf_stack_frame + 96))
#define uStack_630 (*(ulong *)(pf_stack_frame + 112))
#define uStack_620 (*(ulong *)(pf_stack_frame + 128))
#define uStack_610 (*(ulong *)(pf_stack_frame + 144))
#define iStack_5f4 (*(int *)(pf_stack_frame + 172))
#define iStack_5f0 (*(int *)(pf_stack_frame + 176))
#define iStack_5ec (*(int *)(pf_stack_frame + 180))
#define iStack_5e4 (*(int *)(pf_stack_frame + 188))
#define iStack_5e0 (*(int *)(pf_stack_frame + 192))
#define iStack_5dc (*(int *)(pf_stack_frame + 196))
#define iStack_5d4 (*(int *)(pf_stack_frame + 204))
#define iStack_5d0 (*(int *)(pf_stack_frame + 208))
#define iStack_5cc (*(int *)(pf_stack_frame + 212))
#define iStack_5c4 (*(int *)(pf_stack_frame + 220))
#define iStack_5c0 (*(int *)(pf_stack_frame + 224))
#define iStack_5bc (*(int *)(pf_stack_frame + 228))
#define iStack_5a4 (*(int *)(pf_stack_frame + 252))
#define iStack_5a0 (*(int *)(pf_stack_frame + 256))
#define iStack_59c (*(int *)(pf_stack_frame + 260))
#define iStack_594 (*(int *)(pf_stack_frame + 268))
#define iStack_590 (*(int *)(pf_stack_frame + 272))
#define iStack_58c (*(int *)(pf_stack_frame + 276))
#define iStack_584 (*(int *)(pf_stack_frame + 284))
#define iStack_580 (*(int *)(pf_stack_frame + 288))
#define iStack_57c (*(int *)(pf_stack_frame + 292))
#define iStack_574 (*(int *)(pf_stack_frame + 300))
#define iStack_570 (*(int *)(pf_stack_frame + 304))
#define iStack_56c (*(int *)(pf_stack_frame + 308))
#define iStack_554 (*(int *)(pf_stack_frame + 332))
#define iStack_550 (*(int *)(pf_stack_frame + 336))
#define iStack_54c (*(int *)(pf_stack_frame + 340))
#define iStack_544 (*(int *)(pf_stack_frame + 348))
#define iStack_540 (*(int *)(pf_stack_frame + 352))
#define iStack_53c (*(int *)(pf_stack_frame + 356))
#define iStack_534 (*(int *)(pf_stack_frame + 364))
#define iStack_530 (*(int *)(pf_stack_frame + 368))
#define iStack_52c (*(int *)(pf_stack_frame + 372))
#define iStack_524 (*(int *)(pf_stack_frame + 380))
#define iStack_520 (*(int *)(pf_stack_frame + 384))
#define iStack_51c (*(int *)(pf_stack_frame + 388))
#define iStack_504 (*(int *)(pf_stack_frame + 412))
#define iStack_500 (*(int *)(pf_stack_frame + 416))
#define iStack_4fc (*(int *)(pf_stack_frame + 420))
#define iStack_4f4 (*(int *)(pf_stack_frame + 428))
#define iStack_4f0 (*(int *)(pf_stack_frame + 432))
#define iStack_4ec (*(int *)(pf_stack_frame + 436))
#define iStack_4e4 (*(int *)(pf_stack_frame + 444))
#define iStack_4e0 (*(int *)(pf_stack_frame + 448))
#define iStack_4dc (*(int *)(pf_stack_frame + 452))
#define iStack_4d4 (*(int *)(pf_stack_frame + 460))
#define iStack_4d0 (*(int *)(pf_stack_frame + 464))
#define iStack_4cc (*(int *)(pf_stack_frame + 468))
#define iStack_4b4 (*(int *)(pf_stack_frame + 492))
#define iStack_4b0 (*(int *)(pf_stack_frame + 496))
#define iStack_4ac (*(int *)(pf_stack_frame + 500))
#define iStack_4a4 (*(int *)(pf_stack_frame + 508))
#define iStack_4a0 (*(int *)(pf_stack_frame + 512))
#define iStack_49c (*(int *)(pf_stack_frame + 516))
#define iStack_494 (*(int *)(pf_stack_frame + 524))
#define iStack_490 (*(int *)(pf_stack_frame + 528))
#define iStack_48c (*(int *)(pf_stack_frame + 532))
#define iStack_484 (*(int *)(pf_stack_frame + 540))
#define iStack_480 (*(int *)(pf_stack_frame + 544))
#define iStack_47c (*(int *)(pf_stack_frame + 548))
#define uStack_434 (*(ulong *)(pf_stack_frame + 620))
#define uStack_424 (*(ulong *)(pf_stack_frame + 636))
#define uStack_414 (*(ulong *)(pf_stack_frame + 652))
#define uStack_404 (*(ulong *)(pf_stack_frame + 668))
#define iStack_3d4 (*(int *)(pf_stack_frame + 716))
#define iStack_3d0 (*(int *)(pf_stack_frame + 720))
#define iStack_3cc (*(int *)(pf_stack_frame + 724))
#define iStack_3c4 (*(int *)(pf_stack_frame + 732))
#define iStack_3c0 (*(int *)(pf_stack_frame + 736))
#define iStack_3bc (*(int *)(pf_stack_frame + 740))
#define iStack_3b4 (*(int *)(pf_stack_frame + 748))
#define iStack_3b0 (*(int *)(pf_stack_frame + 752))
#define iStack_3ac (*(int *)(pf_stack_frame + 756))
#define iStack_3a4 (*(int *)(pf_stack_frame + 764))
#define iStack_3a0 (*(int *)(pf_stack_frame + 768))
#define iStack_39c (*(int *)(pf_stack_frame + 772))
#define iStack_384 (*(int *)(pf_stack_frame + 796))
#define iStack_380 (*(int *)(pf_stack_frame + 800))
#define iStack_37c (*(int *)(pf_stack_frame + 804))
#define iStack_374 (*(int *)(pf_stack_frame + 812))
#define iStack_370 (*(int *)(pf_stack_frame + 816))
#define iStack_36c (*(int *)(pf_stack_frame + 820))
#define iStack_364 (*(int *)(pf_stack_frame + 828))
#define iStack_360 (*(int *)(pf_stack_frame + 832))
#define iStack_35c (*(int *)(pf_stack_frame + 836))
#define iStack_354 (*(int *)(pf_stack_frame + 844))
#define iStack_350 (*(int *)(pf_stack_frame + 848))
#define iStack_34c (*(int *)(pf_stack_frame + 852))
#define uStack_330 (*(ulong *)(pf_stack_frame + 880))
#define uStack_320 (*(ulong *)(pf_stack_frame + 896))
#define uStack_310 (*(ulong *)(pf_stack_frame + 912))
#define uStack_300 (*(ulong *)(pf_stack_frame + 928))
#define iStack_2a4 (*(int *)(pf_stack_frame + 1020))
#define iStack_2a0 (*(int *)(pf_stack_frame + 1024))
#define iStack_29c (*(int *)(pf_stack_frame + 1028))
#define iStack_294 (*(int *)(pf_stack_frame + 1036))
#define iStack_290 (*(int *)(pf_stack_frame + 1040))
#define iStack_28c (*(int *)(pf_stack_frame + 1044))
#define iStack_284 (*(int *)(pf_stack_frame + 1052))
#define iStack_280 (*(int *)(pf_stack_frame + 1056))
#define iStack_27c (*(int *)(pf_stack_frame + 1060))
#define iStack_274 (*(int *)(pf_stack_frame + 1068))
#define iStack_270 (*(int *)(pf_stack_frame + 1072))
#define iStack_26c (*(int *)(pf_stack_frame + 1076))
#define uStack_254 (*(uint *)(pf_stack_frame + 1100))
#define uStack_250 (*(uint *)(pf_stack_frame + 1104))
#define uStack_24c (*(uint *)(pf_stack_frame + 1108))
#define uStack_244 (*(uint *)(pf_stack_frame + 1116))
#define uStack_240 (*(uint *)(pf_stack_frame + 1120))
#define uStack_23c (*(uint *)(pf_stack_frame + 1124))
#define uStack_234 (*(uint *)(pf_stack_frame + 1132))
#define uStack_230 (*(uint *)(pf_stack_frame + 1136))
#define uStack_22c (*(uint *)(pf_stack_frame + 1140))
#define uStack_224 (*(uint *)(pf_stack_frame + 1148))
#define uStack_220 (*(uint *)(pf_stack_frame + 1152))
#define uStack_21c (*(uint *)(pf_stack_frame + 1156))
#define uStack_200 (*(undefined8 *)(pf_stack_frame + 1184))
#define uStack_1f0 (*(undefined8 *)(pf_stack_frame + 1200))
#define uStack_1e0 (*(undefined8 *)(pf_stack_frame + 1216))
#define uStack_1d0 (*(undefined8 *)(pf_stack_frame + 1232))
#define uStack_1b4 (*(undefined4 *)(pf_stack_frame + 1260))
#define uStack_1ac (*(undefined4 *)(pf_stack_frame + 1268))
#define uStack_180 (*(undefined8 *)(pf_stack_frame + 1312))
#define uStack_170 (*(undefined8 *)(pf_stack_frame + 1328))
#define uStack_160 (*(undefined8 *)(pf_stack_frame + 1344))
#define uStack_150 (*(undefined8 *)(pf_stack_frame + 1360))
#define uStack_134 (*(uint *)(pf_stack_frame + 1388))
#define uStack_130 (*(uint *)(pf_stack_frame + 1392))
#define uStack_12c (*(uint *)(pf_stack_frame + 1396))
#define uStack_124 (*(uint *)(pf_stack_frame + 1404))
#define uStack_120 (*(uint *)(pf_stack_frame + 1408))
#define uStack_11c (*(uint *)(pf_stack_frame + 1412))
#define uStack_114 (*(uint *)(pf_stack_frame + 1420))
#define uStack_110 (*(uint *)(pf_stack_frame + 1424))
#define uStack_10c (*(uint *)(pf_stack_frame + 1428))
#define uStack_104 (*(uint *)(pf_stack_frame + 1436))
#define uStack_100 (*(uint *)(pf_stack_frame + 1440))
#define uStack_fc (*(uint *)(pf_stack_frame + 1444))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 1472))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 1488))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 1504))
#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 1520))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 1552))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 1568))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 1584))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 1600))
#define uStack_4c (*(undefined4 *)(pf_stack_frame + 1620))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 1636))
#define local_68c (*(uint (*)[419])(pf_stack_frame + 20))
#define local_648 (*(ulong *)(pf_stack_frame + 88))
#define local_638 (*(ulong *)(pf_stack_frame + 104))
#define local_628 (*(ulong *)(pf_stack_frame + 120))
#define local_618 (*(ulong *)(pf_stack_frame + 136))
#define local_608 (*(uint *)(pf_stack_frame + 152))
#define local_5f8 (*(uint *)(pf_stack_frame + 168))
#define local_5e8 (*(int *)(pf_stack_frame + 184))
#define local_5d8 (*(int *)(pf_stack_frame + 200))
#define local_5c8 (*(int *)(pf_stack_frame + 216))
#define local_5b8 (*(int *)(pf_stack_frame + 232))
#define local_5a8 (*(uint *)(pf_stack_frame + 248))
#define local_598 (*(int *)(pf_stack_frame + 264))
#define local_588 (*(int *)(pf_stack_frame + 280))
#define local_578 (*(int *)(pf_stack_frame + 296))
#define local_568 (*(int *)(pf_stack_frame + 312))
#define local_558 (*(uint *)(pf_stack_frame + 328))
#define local_548 (*(int *)(pf_stack_frame + 344))
#define local_538 (*(int *)(pf_stack_frame + 360))
#define local_528 (*(int *)(pf_stack_frame + 376))
#define local_518 (*(int *)(pf_stack_frame + 392))
#define local_508 (*(uint *)(pf_stack_frame + 408))
#define local_4f8 (*(int *)(pf_stack_frame + 424))
#define local_4e8 (*(int *)(pf_stack_frame + 440))
#define local_4d8 (*(int *)(pf_stack_frame + 456))
#define local_4c8 (*(int *)(pf_stack_frame + 472))
#define local_4b8 (*(uint *)(pf_stack_frame + 488))
#define local_4a8 (*(int *)(pf_stack_frame + 504))
#define local_498 (*(int *)(pf_stack_frame + 520))
#define local_488 (*(int *)(pf_stack_frame + 536))
#define local_478 (*(int *)(pf_stack_frame + 552))
#define local_468 (*(byte (*)[1128])(pf_stack_frame + 568))
#define local_449 (*(undefined1 *)(pf_stack_frame + 599))
#define local_43c (*(ulong *)(pf_stack_frame + 612))
#define local_42c (*(ulong *)(pf_stack_frame + 628))
#define local_41c (*(ulong *)(pf_stack_frame + 644))
#define local_40c (*(ulong *)(pf_stack_frame + 660))
#define local_3fc (*(uint *)(pf_stack_frame + 676))
#define local_3f8 (*(byte (*)[1016])(pf_stack_frame + 680))
#define local_3d9 (*(byte *)(pf_stack_frame + 711))
#define local_3d8 (*(uint *)(pf_stack_frame + 712))
#define local_3c8 (*(int *)(pf_stack_frame + 728))
#define local_3b8 (*(int *)(pf_stack_frame + 744))
#define local_3a8 (*(int *)(pf_stack_frame + 760))
#define local_398 (*(int *)(pf_stack_frame + 776))
#define local_388 (*(uint *)(pf_stack_frame + 792))
#define local_378 (*(int *)(pf_stack_frame + 808))
#define local_368 (*(int *)(pf_stack_frame + 824))
#define local_358 (*(int *)(pf_stack_frame + 840))
#define local_348 (*(int *)(pf_stack_frame + 856))
#define local_338 (*(ulong *)(pf_stack_frame + 872))
#define local_328 (*(ulong *)(pf_stack_frame + 888))
#define local_318 (*(ulong *)(pf_stack_frame + 904))
#define local_308 (*(ulong *)(pf_stack_frame + 920))
#define local_2f8 (*(ulong *)(pf_stack_frame + 936))
#define local_2f0 (*(ulong *)(pf_stack_frame + 944))
#define local_2e8 (*(ulong *)(pf_stack_frame + 952))
#define local_2a8 (*(uint *)(pf_stack_frame + 1016))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a220(void *output,void *scalar,void *point)

{
  unsigned char pf_stack_frame[1728] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  uint uVar38;
  ulong uVar39;
  bool bVar40;
  uint uVar41;

  if (point != (void *)0x0 && (scalar != (void *)0x0 && output != (void *)0x0)) {
    local_260 = output;
    recovered_10001cc0(local_3f8,scalar,0x20);
    local_3f8[0] = local_3f8[0] & 0xf8;
    local_3d9 = local_3d9 & 0x3f | 0x40;
    iVar13 = 0;
    recovered_100029c0(&local_43c,0,0x44);
    iVar3 = 1;
    lVar11 = 0;
    do {
      iVar8 = 0;
      uVar15 = 0;
      while( true ) {
        uVar10 = 0;
        if ((*(byte *)((long)point + (ulong)((uint)(iVar13 + iVar8) >> 3)) >> (iVar13 + iVar8 & 7U)
            & 1) != 0) {
          uVar10 = 1 << ((byte)iVar8 & 0x1f);
        }
        if (iVar8 == 0xe) break;
        uVar16 = 0;
        if ((*(byte *)((long)point + (ulong)((uint)(iVar3 + iVar8) >> 3)) >> (iVar3 + iVar8 & 7U) &
            1) != 0) {
          uVar16 = 2 << ((byte)iVar8 & 0x1f);
        }
        uVar15 = uVar16 | uVar10 | uVar15;
        iVar8 = iVar8 + 2;
      }
      *(uint *)(local_3f8 + lVar11 * 4 + -0x44) = uVar10 | uVar15;
      lVar11 = lVar11 + 1;
      iVar3 = iVar3 + 0xf;
      iVar13 = iVar13 + 0xf;
    } while (lVar11 != 0x11);
    recovered_1000d970((uint *)&local_43c);
    recovered_100029c0(&local_e8,0,0x44);
    local_e8 = CONCAT44(PF_PART4(local_e8, 4),1);
    recovered_100029c0(&local_98,0,0x44);
    local_188 = local_43c;
    uStack_180 = uStack_434;
    local_178 = local_42c;
    uStack_170 = uStack_424;
    local_168 = local_41c;
    uStack_160 = uStack_414;
    local_158 = local_40c;
    uStack_150 = uStack_404;
    local_148 = local_3fc;
    recovered_100029c0(&local_208,0,0x44);
    local_208 = CONCAT44(PF_PART4(local_208, 4),1);
    uVar15 = 0xfe;
    local_1c0 = 0;
    do {
      uVar16 = (uint)((local_3f8[uVar15 >> 3] >> (uVar15 & 7) & 1) != 0);
      uVar10 = local_148 ^ local_a8;
      if (local_1c0 == uVar16) {
        uVar10 = 0;
      }
      local_a8 = local_a8 ^ uVar10;
      local_148 = uVar10 ^ local_148;
      uVar10 = 0;
      uVar18 = 0;
      uVar20 = 0;
      uVar34 = 0;
      uVar4 = 0;
      uVar5 = 0;
      bVar40 = local_1c0 != uVar16;
      if (bVar40) {
        uVar4 = local_188 ^ local_e8;
        uVar5 = uStack_180 ^ uStack_e0;
      }
      uVar6 = local_e8 ^ uVar4;
      uVar7 = uStack_e0 ^ uVar5;
      local_188 = local_188 ^ uVar4;
      uStack_180 = uStack_180 ^ uVar5;
      uVar4 = 0;
      uVar5 = 0;
      if (bVar40) {
        uVar4 = local_178 ^ local_d8;
        uVar5 = uStack_170 ^ uStack_d0;
      }
      uVar22 = local_d8 ^ uVar4;
      uVar9 = uStack_d0 ^ uVar5;
      local_178 = local_178 ^ uVar4;
      uStack_170 = uStack_170 ^ uVar5;
      uVar4 = 0;
      uVar5 = 0;
      if (bVar40) {
        uVar4 = local_168 ^ local_c8;
        uVar5 = uStack_160 ^ uStack_c0;
      }
      uVar12 = local_c8 ^ uVar4;
      uVar14 = uStack_c0 ^ uVar5;
      local_168 = local_168 ^ uVar4;
      uStack_160 = uStack_160 ^ uVar5;
      uVar4 = 0;
      uVar5 = 0;
      if (bVar40) {
        uVar4 = local_158 ^ local_b8;
        uVar5 = uStack_150 ^ uStack_b0;
      }
      uVar17 = local_b8 ^ uVar4;
      uVar19 = uStack_b0 ^ uVar5;
      local_158 = local_158 ^ uVar4;
      uStack_150 = uStack_150 ^ uVar5;
      uVar4 = 0;
      uVar5 = 0;
      if (bVar40) {
        uVar4 = local_208 ^ local_98;
        uVar5 = uStack_200 ^ uStack_90;
      }
      uVar21 = local_98 ^ uVar4;
      uVar29 = uStack_90 ^ uVar5;
      local_208 = local_208 ^ uVar4;
      uStack_200 = uStack_200 ^ uVar5;
      uVar4 = 0;
      uVar5 = 0;
      if (bVar40) {
        uVar4 = local_1f8 ^ local_88;
        uVar5 = uStack_1f0 ^ uStack_80;
      }
      uVar25 = local_88 ^ uVar4;
      uVar27 = uStack_80 ^ uVar5;
      local_1f8 = local_1f8 ^ uVar4;
      uStack_1f0 = uStack_1f0 ^ uVar5;
      uVar35 = 0;
      uVar28 = 0;
      uVar23 = 0;
      uVar41 = 0;
      if (bVar40) {
        uVar35 = (uint)local_1e8 ^ (uint)local_78;
        uVar28 = PF_PART4(local_1e8, 4) ^ PF_PART4(local_78, 4);
        uVar23 = (uint)uStack_1e0 ^ (uint)uStack_70;
        uVar41 = PF_PART4(uStack_1e0, 4) ^ PF_PART4(uStack_70, 4);
      }
      PF_PART4(local_78, 0) = (uint)local_78 ^ uVar35;
      PF_PART4(local_78, 4) = PF_PART4(local_78, 4) ^ uVar28;
      PF_PART4(uStack_70, 0) = (uint)uStack_70 ^ uVar23;
      PF_PART4(uStack_70, 4) = PF_PART4(uStack_70, 4) ^ uVar41;
      local_1e8 = CONCAT44(PF_PART4(local_1e8, 4) ^ uVar28,(uint)local_1e8 ^ uVar35);
      uStack_1e0 = CONCAT44(PF_PART4(uStack_1e0, 4) ^ uVar41,(uint)uStack_1e0 ^ uVar23);
      if (bVar40) {
        uVar10 = (uint)local_1d8 ^ (uint)local_68;
        uVar18 = PF_PART4(local_1d8, 4) ^ PF_PART4(local_68, 4);
        uVar20 = (uint)uStack_1d0 ^ (uint)uStack_60;
        uVar34 = PF_PART4(uStack_1d0, 4) ^ PF_PART4(uStack_60, 4);
      }
      PF_PART4(local_68, 0) = (uint)local_68 ^ uVar10;
      PF_PART4(local_68, 4) = PF_PART4(local_68, 4) ^ uVar18;
      PF_PART4(uStack_60, 0) = (uint)uStack_60 ^ uVar20;
      PF_PART4(uStack_60, 4) = PF_PART4(uStack_60, 4) ^ uVar34;
      local_1d8 = CONCAT44(PF_PART4(local_1d8, 4) ^ uVar18,(uint)local_1d8 ^ uVar10);
      uStack_1d0 = CONCAT44(PF_PART4(uStack_1d0, 4) ^ uVar34,(uint)uStack_1d0 ^ uVar20);
      uVar10 = local_1c8 ^ local_58;
      if (local_1c0 == uVar16) {
        uVar10 = 0;
      }
      local_58 = local_58 ^ uVar10;
      local_1c8 = uVar10 ^ local_1c8;
      PF_PART4(local_98, 0) = (uint)uVar21;
      PF_PART4(local_98, 4) = (int)(uVar21 >> 0x20);
      PF_PART4(uStack_90, 0) = (int)uVar29;
      PF_PART4(uStack_90, 4) = (int)(uVar29 >> 0x20);
      PF_PART4(local_e8, 0) = (uint)uVar6;
      PF_PART4(local_e8, 4) = (int)(uVar6 >> 0x20);
      PF_PART4(uStack_e0, 0) = (int)uVar7;
      PF_PART4(uStack_e0, 4) = (int)(uVar7 >> 0x20);
      local_5f8 = (uint)local_98 + (uint)local_e8;
      iStack_5f4 = PF_PART4(local_98, 4) + PF_PART4(local_e8, 4);
      iStack_5f0 = (int)uStack_90 + (int)uStack_e0;
      iStack_5ec = PF_PART4(uStack_90, 4) + PF_PART4(uStack_e0, 4);
      PF_PART4(local_88, 0) = (int)uVar25;
      PF_PART4(local_88, 4) = (int)(uVar25 >> 0x20);
      PF_PART4(uStack_80, 0) = (int)uVar27;
      PF_PART4(uStack_80, 4) = (int)(uVar27 >> 0x20);
      PF_PART4(local_d8, 0) = (int)uVar22;
      PF_PART4(local_d8, 4) = (int)(uVar22 >> 0x20);
      PF_PART4(uStack_d0, 0) = (int)uVar9;
      PF_PART4(uStack_d0, 4) = (int)(uVar9 >> 0x20);
      local_5e8 = (int)local_88 + (int)local_d8;
      iStack_5e4 = PF_PART4(local_88, 4) + PF_PART4(local_d8, 4);
      iStack_5e0 = (int)uStack_80 + (int)uStack_d0;
      iStack_5dc = PF_PART4(uStack_80, 4) + PF_PART4(uStack_d0, 4);
      PF_PART4(local_c8, 0) = (int)uVar12;
      PF_PART4(local_c8, 4) = (int)(uVar12 >> 0x20);
      PF_PART4(uStack_c0, 0) = (int)uVar14;
      PF_PART4(uStack_c0, 4) = (int)(uVar14 >> 0x20);
      local_5d8 = (uint)local_78 + (int)local_c8;
      iStack_5d4 = PF_PART4(local_78, 4) + PF_PART4(local_c8, 4);
      iStack_5d0 = (uint)uStack_70 + (int)uStack_c0;
      iStack_5cc = PF_PART4(uStack_70, 4) + PF_PART4(uStack_c0, 4);
      PF_PART4(local_b8, 0) = (int)uVar17;
      PF_PART4(local_b8, 4) = (int)(uVar17 >> 0x20);
      PF_PART4(uStack_b0, 0) = (int)uVar19;
      PF_PART4(uStack_b0, 4) = (int)(uVar19 >> 0x20);
      local_5c8 = (uint)local_68 + (int)local_b8;
      iStack_5c4 = PF_PART4(local_68, 4) + PF_PART4(local_b8, 4);
      iStack_5c0 = (uint)uStack_60 + (int)uStack_b0;
      iStack_5bc = PF_PART4(uStack_60, 4) + PF_PART4(uStack_b0, 4);
      local_5b8 = local_58 + local_a8;
      local_1c0 = uVar16;
      local_1bc = uVar15;
      local_e8 = uVar6;
      uStack_e0 = uVar7;
      local_d8 = uVar22;
      uStack_d0 = uVar9;
      local_c8 = uVar12;
      uStack_c0 = uVar14;
      local_b8 = uVar17;
      uStack_b0 = uVar19;
      local_98 = uVar21;
      uStack_90 = uVar29;
      local_88 = uVar25;
      uStack_80 = uVar27;
      recovered_1000d970(&local_5f8);
      recovered_1000d3b0(&local_2a8,(long)&local_5f8,&local_5f8);
      local_5a8 = ((uint)local_e8 - (uint)local_98) + _DAT_1000ec70;
      iStack_5a4 = (PF_PART4(local_e8, 4) - PF_PART4(local_98, 4)) + iRam000000001000ec74;
      iStack_5a0 = ((int)uStack_e0 - (int)uStack_90) + iRam000000001000ec78;
      iStack_59c = (PF_PART4(uStack_e0, 4) - PF_PART4(uStack_90, 4)) + iRam000000001000ec7c;
      local_598 = ((int)local_d8 - (int)local_88) + _DAT_1000ec80;
      iStack_594 = (PF_PART4(local_d8, 4) - PF_PART4(local_88, 4)) + iRam000000001000ec84;
      iStack_590 = ((int)uStack_d0 - (int)uStack_80) + iRam000000001000ec88;
      iStack_58c = (PF_PART4(uStack_d0, 4) - PF_PART4(uStack_80, 4)) + iRam000000001000ec8c;
      local_588 = ((int)local_c8 - (uint)local_78) + _DAT_1000ec80;
      iStack_584 = (PF_PART4(local_c8, 4) - PF_PART4(local_78, 4)) + iRam000000001000ec84;
      iStack_580 = ((int)uStack_c0 - (uint)uStack_70) + iRam000000001000ec88;
      iStack_57c = (PF_PART4(uStack_c0, 4) - PF_PART4(uStack_70, 4)) + iRam000000001000ec8c;
      local_578 = ((int)local_b8 - (uint)local_68) + _DAT_1000ec80;
      iStack_574 = (PF_PART4(local_b8, 4) - PF_PART4(local_68, 4)) + iRam000000001000ec84;
      iStack_570 = ((int)uStack_b0 - (uint)uStack_60) + iRam000000001000ec88;
      iStack_56c = (PF_PART4(uStack_b0, 4) - PF_PART4(uStack_60, 4)) + iRam000000001000ec8c;
      local_568 = (local_a8 - local_58) + 0xfffe;
      recovered_1000d970(&local_5a8);
      recovered_1000d3b0(&local_558,(long)&local_5a8,&local_5a8);
      local_258 = (local_2a8 - local_558) + _DAT_1000ec70;
      uStack_254 = (iStack_2a4 - iStack_554) + iRam000000001000ec74;
      uStack_250 = (iStack_2a0 - iStack_550) + iRam000000001000ec78;
      uStack_24c = (iStack_29c - iStack_54c) + iRam000000001000ec7c;
      local_248 = (local_298 - local_548) + _DAT_1000ec80;
      uStack_244 = (iStack_294 - iStack_544) + iRam000000001000ec84;
      uStack_240 = (iStack_290 - iStack_540) + iRam000000001000ec88;
      uStack_23c = (iStack_28c - iStack_53c) + iRam000000001000ec8c;
      local_238 = (local_288 - local_538) + _DAT_1000ec80;
      uStack_234 = (iStack_284 - iStack_534) + iRam000000001000ec84;
      uStack_230 = (iStack_280 - iStack_530) + iRam000000001000ec88;
      uStack_22c = (iStack_27c - iStack_52c) + iRam000000001000ec8c;
      local_228 = (local_278 - local_528) + _DAT_1000ec80;
      uStack_224 = (iStack_274 - iStack_524) + iRam000000001000ec84;
      uStack_220 = (iStack_270 - iStack_520) + iRam000000001000ec88;
      uStack_21c = (iStack_26c - iStack_51c) + iRam000000001000ec8c;
      local_218 = (local_268 - local_518) + 0xfffe;
      recovered_1000d970(&local_258);
      local_508 = (uint)local_208 + (uint)local_188;
      iStack_504 = PF_PART4(local_208, 4) + PF_PART4(local_188, 4);
      iStack_500 = (int)uStack_200 + (int)uStack_180;
      iStack_4fc = PF_PART4(uStack_200, 4) + PF_PART4(uStack_180, 4);
      local_4f8 = (int)local_1f8 + (int)local_178;
      iStack_4f4 = PF_PART4(local_1f8, 4) + PF_PART4(local_178, 4);
      iStack_4f0 = (int)uStack_1f0 + (int)uStack_170;
      iStack_4ec = PF_PART4(uStack_1f0, 4) + PF_PART4(uStack_170, 4);
      local_4e8 = (uint)local_1e8 + (int)local_168;
      iStack_4e4 = PF_PART4(local_1e8, 4) + PF_PART4(local_168, 4);
      iStack_4e0 = (uint)uStack_1e0 + (int)uStack_160;
      iStack_4dc = PF_PART4(uStack_1e0, 4) + PF_PART4(uStack_160, 4);
      local_4d8 = (uint)local_1d8 + (int)local_158;
      iStack_4d4 = PF_PART4(local_1d8, 4) + PF_PART4(local_158, 4);
      iStack_4d0 = (uint)uStack_1d0 + (int)uStack_150;
      iStack_4cc = PF_PART4(uStack_1d0, 4) + PF_PART4(uStack_150, 4);
      local_4c8 = local_1c8 + local_148;
      recovered_1000d970(&local_508);
      local_4b8 = ((uint)local_188 - (uint)local_208) + _DAT_1000ec70;
      iStack_4b4 = (PF_PART4(local_188, 4) - PF_PART4(local_208, 4)) + iRam000000001000ec74;
      iStack_4b0 = ((int)uStack_180 - (int)uStack_200) + iRam000000001000ec78;
      iStack_4ac = (PF_PART4(uStack_180, 4) - PF_PART4(uStack_200, 4)) + iRam000000001000ec7c;
      local_4a8 = ((int)local_178 - (int)local_1f8) + _DAT_1000ec80;
      iStack_4a4 = (PF_PART4(local_178, 4) - PF_PART4(local_1f8, 4)) + iRam000000001000ec84;
      iStack_4a0 = ((int)uStack_170 - (int)uStack_1f0) + iRam000000001000ec88;
      iStack_49c = (PF_PART4(uStack_170, 4) - PF_PART4(uStack_1f0, 4)) + iRam000000001000ec8c;
      local_498 = ((int)local_168 - (uint)local_1e8) + _DAT_1000ec80;
      iStack_494 = (PF_PART4(local_168, 4) - PF_PART4(local_1e8, 4)) + iRam000000001000ec84;
      iStack_490 = ((int)uStack_160 - (uint)uStack_1e0) + iRam000000001000ec88;
      iStack_48c = (PF_PART4(uStack_160, 4) - PF_PART4(uStack_1e0, 4)) + iRam000000001000ec8c;
      local_488 = ((int)local_158 - (uint)local_1d8) + _DAT_1000ec80;
      iStack_484 = (PF_PART4(local_158, 4) - PF_PART4(local_1d8, 4)) + iRam000000001000ec84;
      iStack_480 = ((int)uStack_150 - (uint)uStack_1d0) + iRam000000001000ec88;
      iStack_47c = (PF_PART4(uStack_150, 4) - PF_PART4(uStack_1d0, 4)) + iRam000000001000ec8c;
      local_478 = (local_148 - local_1c8) + 0xfffe;
      recovered_1000d970(&local_4b8);
      recovered_1000d3b0(&local_3d8,(long)&local_4b8,&local_5f8);
      recovered_1000d3b0(&local_388,(long)&local_508,&local_5a8);
      local_138 = local_388 + local_3d8;
      uStack_134 = iStack_384 + iStack_3d4;
      uStack_130 = iStack_380 + iStack_3d0;
      uStack_12c = iStack_37c + iStack_3cc;
      local_128 = local_378 + local_3c8;
      uStack_124 = iStack_374 + iStack_3c4;
      uStack_120 = iStack_370 + iStack_3c0;
      uStack_11c = iStack_36c + iStack_3bc;
      local_118 = local_368 + local_3b8;
      uStack_114 = iStack_364 + iStack_3b4;
      uStack_110 = iStack_360 + iStack_3b0;
      uStack_10c = iStack_35c + iStack_3ac;
      local_108 = local_358 + local_3a8;
      uStack_104 = iStack_354 + iStack_3a4;
      uStack_100 = iStack_350 + iStack_3a0;
      uStack_fc = iStack_34c + iStack_39c;
      local_f8 = local_348 + local_398;
      recovered_1000d970(&local_138);
      recovered_1000d3b0((uint *)&local_188,(long)&local_138,&local_138);
      local_138 = (local_3d8 - local_388) + _DAT_1000ec70;
      uStack_134 = (iStack_3d4 - iStack_384) + iRam000000001000ec74;
      uStack_130 = (iStack_3d0 - iStack_380) + iRam000000001000ec78;
      uStack_12c = (iStack_3cc - iStack_37c) + iRam000000001000ec7c;
      local_128 = (local_3c8 - local_378) + _DAT_1000ec80;
      uStack_124 = (iStack_3c4 - iStack_374) + iRam000000001000ec84;
      uStack_120 = (iStack_3c0 - iStack_370) + iRam000000001000ec88;
      uStack_11c = (iStack_3bc - iStack_36c) + iRam000000001000ec8c;
      local_118 = (local_3b8 - local_368) + _DAT_1000ec80;
      uStack_114 = (iStack_3b4 - iStack_364) + iRam000000001000ec84;
      uStack_110 = (iStack_3b0 - iStack_360) + iRam000000001000ec88;
      uStack_10c = (iStack_3ac - iStack_35c) + iRam000000001000ec8c;
      local_108 = (local_3a8 - local_358) + _DAT_1000ec80;
      uStack_104 = (iStack_3a4 - iStack_354) + iRam000000001000ec84;
      uStack_100 = (iStack_3a0 - iStack_350) + iRam000000001000ec88;
      uStack_fc = (iStack_39c - iStack_34c) + iRam000000001000ec8c;
      local_f8 = (local_398 - local_348) + 0xfffe;
      recovered_1000d970(&local_138);
      recovered_1000d3b0(local_68c,(long)&local_138,&local_138);
      recovered_1000d3b0((uint *)&local_208,(long)&local_43c,local_68c);
      recovered_1000d3b0((uint *)&local_e8,(long)&local_2a8,&local_558);
      recovered_100029c0(&local_338,0,0x90);
      uVar22 = ((ulong)local_258 * 0x1db41 >> 0xf) + (ulong)uStack_254 * 0x1db41;
      uVar29 = (uVar22 >> 0xf) + (ulong)uStack_250 * 0x1db41;
      uVar14 = (uVar29 >> 0xf) + (ulong)uStack_24c * 0x1db41;
      uVar37 = (uVar14 >> 0xf) + (ulong)local_248 * 0x1db41;
      uVar39 = (uVar37 >> 0xf) + (ulong)uStack_244 * 0x1db41;
      uVar12 = (uVar39 >> 0xf) + (ulong)uStack_240 * 0x1db41;
      uVar17 = (uVar12 >> 0xf) + (ulong)uStack_23c * 0x1db41;
      uVar9 = (uVar17 >> 0xf) + (ulong)local_238 * 0x1db41;
      uVar19 = (uVar9 >> 0xf) + (ulong)uStack_234 * 0x1db41;
      uVar4 = (uVar19 >> 0xf) + (ulong)uStack_230 * 0x1db41;
      uVar5 = (uVar4 >> 0xf) + (ulong)uStack_22c * 0x1db41;
      uVar6 = (uVar5 >> 0xf) + (ulong)local_228 * 0x1db41;
      uVar7 = (uVar6 >> 0xf) + (ulong)uStack_224 * 0x1db41;
      uVar21 = (uVar7 >> 0xf) + (ulong)uStack_220 * 0x1db41;
      uVar27 = (uVar21 >> 0xf) + (ulong)uStack_21c * 0x1db41;
      uVar25 = (uVar27 >> 0xf) + (ulong)local_218 * 0x1db41;
      uVar33 = (uVar25 >> 0xf) * 0x13 + (ulong)((uint)((ulong)local_258 * 0x1db41) & 0x7fff);
      uVar22 = (uVar33 >> 0xf) + (ulong)((uint)uVar22 & 0x7fff);
      uVar29 = (uVar22 >> 0xf) + (ulong)((uint)uVar29 & 0x7fff);
      uVar14 = (uVar29 >> 0xf) + (ulong)((uint)uVar14 & 0x7fff);
      uVar34 = (int)(uVar14 >> 0xf) + ((uint)uVar37 & 0x7fff);
      uVar35 = (uVar34 >> 0xf) + ((uint)uVar39 & 0x7fff);
      uVar31 = (uVar35 >> 0xf) + ((uint)uVar12 & 0x7fff);
      uVar28 = (uVar31 >> 0xf) + ((uint)uVar17 & 0x7fff);
      uVar30 = (uVar28 >> 0xf) + ((uint)uVar9 & 0x7fff);
      uVar9 = (ulong)(uVar30 >> 0xf) + (ulong)((uint)uVar19 & 0x7fff);
      uVar12 = (uVar9 >> 0xf) + (ulong)((uint)uVar4 & 0x7fff);
      uVar15 = (int)(uVar12 >> 0xf) + ((uint)uVar5 & 0x7fff);
      uVar10 = (uVar15 >> 0xf) + ((uint)uVar6 & 0x7fff);
      uVar16 = (uVar10 >> 0xf) + ((uint)uVar7 & 0x7fff);
      uVar18 = (uVar16 >> 0xf) + ((uint)uVar21 & 0x7fff);
      uVar20 = (uVar18 >> 0xf) + ((uint)uVar27 & 0x7fff);
      uVar26 = (uVar20 >> 0xf) + ((uint)uVar25 & 0x7fff);
      uVar23 = (uVar26 >> 0xf) * 0x13 + ((uint)uVar33 & 0x7fff);
      uVar41 = (uVar23 >> 0xf) + ((uint)uVar22 & 0x7fff);
      uVar24 = (uVar41 >> 0xf) + ((uint)uVar29 & 0x7fff);
      uVar4 = (ulong)(uVar24 >> 0xf) + (ulong)((uint)uVar14 & 0x7fff);
      uVar34 = (int)(uVar4 >> 0xf) + (uVar34 & 0x7fff);
      uVar35 = (uVar34 >> 0xf) + (uVar35 & 0x7fff);
      uVar36 = (uVar35 >> 0xf) + (uVar31 & 0x7fff);
      uVar38 = (uVar36 >> 0xf) + (uVar28 & 0x7fff);
      uVar30 = (uVar38 >> 0xf) + (uVar30 & 0x7fff);
      local_1a8 = (ulong)(uVar30 >> 0xf) + (ulong)((uint)uVar9 & 0x7fff);
      uVar28 = ((uint)local_1a8 >> 0xf) + ((uint)uVar12 & 0x7fff);
      uVar31 = (uVar28 >> 0xf) + (uVar15 & 0x7fff);
      PF_PART8(local_1b8,0) = CONCAT44((int)(uVar6 >> 0x20),uVar31);
      uVar32 = (uVar31 >> 0xf) + (uVar10 & 0x7fff);
      uVar10 = (uVar32 >> 0xf) + (uVar16 & 0x7fff);
      uVar16 = (uVar10 >> 0xf) + (uVar18 & 0x7fff);
      PF_PART8(local_50,0) = CONCAT44((int)(uVar33 >> 0x20),uVar16);
      uVar18 = (uVar16 >> 0xf) + (uVar20 & 0x7fff);
      local_48 = (ulong)uVar18;
      uVar20 = (uVar18 >> 0xf) + (uVar26 & 0x7fff);
      PF_PART8(local_1b0,0) = CONCAT44((int)(uVar7 >> 0x20),uVar20);
      uVar15 = (uVar20 >> 0xf) * 0x13 + (uVar23 & 0x7fff);
      PF_PART8(local_40,0) = CONCAT44((int)(uVar5 >> 0x20),uVar15);
      local_1a0 = (ulong)(uVar15 >> 0xf) + (ulong)(uVar41 & 0x7fff);
      local_198 = (local_1a0 >> 0xf) + (ulong)(uVar24 & 0x7fff);
      local_190 = (local_198 >> 0xf) + (ulong)((uint)uVar4 & 0x7fff);
      local_38 = (local_190 >> 0xf) + (ulong)(uVar34 & 0x7fff);
      uStack_124 = ((uint)local_38 >> 0xf) + (uVar35 & 0x7fff);
      uStack_120 = (uStack_124 >> 0xf) + (uVar36 & 0x7fff);
      uStack_11c = (uStack_120 >> 0xf) + (uVar38 & 0x7fff);
      local_118 = (uStack_11c >> 0xf) + (uVar30 & 0x7fff);
      uStack_114 = (local_118 >> 0xf) + ((uint)local_1a8 & 0x7fff);
      uStack_110 = (uStack_114 >> 0xf) + (uVar28 & 0x7fff);
      uStack_10c = (uStack_110 >> 0xf) + (uVar31 & 0x7fff);
      local_108 = (uStack_10c >> 0xf) + (uVar32 & 0x7fff);
      uStack_104 = (local_108 >> 0xf) + (uVar10 & 0x7fff);
      uStack_100 = (uStack_104 >> 0xf) + (uVar16 & 0x7fff);
      uStack_fc = (uStack_100 >> 0xf) + (uVar18 & 0x7fff);
      local_f8 = (uStack_fc >> 0xf) + (uVar20 & 0x7fff);
      local_138 = (local_f8 >> 0xf) * 0x13 + (uVar15 & 0x7fff);
      uStack_134 = (uint)local_1a0 & 0x7fff;
      uStack_330 = (ulong)uStack_134;
      uStack_130 = (uint)local_198 & 0x7fff;
      local_328 = (ulong)uStack_130;
      uStack_12c = (uint)local_190 & 0x7fff;
      uStack_320 = (ulong)uStack_12c;
      local_128 = (uint)local_38 & 0x7fff;
      local_318 = (ulong)local_128;
      uStack_124 = uStack_124 & 0x7fff;
      uStack_310 = (ulong)uStack_124;
      uStack_120 = uStack_120 & 0x7fff;
      local_308 = (ulong)uStack_120;
      uStack_11c = uStack_11c & 0x7fff;
      uStack_300 = (ulong)uStack_11c;
      local_118 = local_118 & 0x7fff;
      local_2f8 = (ulong)local_118;
      uStack_114 = uStack_114 & 0x7fff;
      local_2f0 = (ulong)uStack_114;
      uStack_110 = uStack_110 & 0x7fff;
      local_2e8 = (ulong)uStack_110;
      uStack_10c = uStack_10c & 0x7fff;
      local_108 = local_108 & 0x7fff;
      uStack_104 = uStack_104 & 0x7fff;
      uStack_100 = uStack_100 & 0x7fff;
      uStack_fc = uStack_fc & 0x7fff;
      local_f8 = local_f8 & 0x7fff;
      recovered_1000d970(&local_138);
      local_138 = local_138 + local_2a8;
      uStack_134 = uStack_134 + iStack_2a4;
      uStack_130 = uStack_130 + iStack_2a0;
      uStack_12c = uStack_12c + iStack_29c;
      local_128 = local_128 + local_298;
      uStack_124 = uStack_124 + iStack_294;
      uStack_120 = uStack_120 + iStack_290;
      uStack_11c = uStack_11c + iStack_28c;
      local_118 = local_118 + local_288;
      uStack_114 = uStack_114 + iStack_284;
      uStack_110 = uStack_110 + iStack_280;
      uStack_10c = uStack_10c + iStack_27c;
      local_108 = local_108 + local_278;
      uStack_104 = uStack_104 + iStack_274;
      uStack_100 = uStack_100 + iStack_270;
      uStack_fc = uStack_fc + iStack_26c;
      local_f8 = local_f8 + local_268;
      recovered_1000d970(&local_138);
      recovered_1000d3b0((uint *)&local_98,(long)&local_258,&local_138);
      uVar15 = local_1bc - 1;
    } while (local_1bc != 0);
    uVar15 = local_148 ^ local_a8;
    if (local_1c0 == 0) {
      uVar15 = 0;
    }
    local_a8 = local_a8 ^ uVar15;
    local_148 = uVar15 ^ local_148;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    bVar40 = local_1c0 != 0;
    if (bVar40) {
      uVar6 = local_188 ^ local_e8;
      uVar7 = uStack_180 ^ uStack_e0;
    }
    local_e8 = local_e8 ^ uVar6;
    uStack_e0 = uStack_e0 ^ uVar7;
    local_188 = local_188 ^ uVar6;
    uStack_180 = uStack_180 ^ uVar7;
    uVar6 = 0;
    uVar7 = 0;
    if (bVar40) {
      uVar6 = local_178 ^ local_d8;
      uVar7 = uStack_170 ^ uStack_d0;
    }
    local_d8 = local_d8 ^ uVar6;
    uStack_d0 = uStack_d0 ^ uVar7;
    local_178 = local_178 ^ uVar6;
    uStack_170 = uStack_170 ^ uVar7;
    uVar6 = 0;
    uVar7 = 0;
    if (bVar40) {
      uVar6 = local_168 ^ local_c8;
      uVar7 = uStack_160 ^ uStack_c0;
    }
    local_c8 = local_c8 ^ uVar6;
    uStack_c0 = uStack_c0 ^ uVar7;
    local_168 = local_168 ^ uVar6;
    uStack_160 = uStack_160 ^ uVar7;
    uVar6 = 0;
    uVar7 = 0;
    if (bVar40) {
      uVar6 = local_158 ^ local_b8;
      uVar7 = uStack_150 ^ uStack_b0;
    }
    local_b8 = local_b8 ^ uVar6;
    uStack_b0 = uStack_b0 ^ uVar7;
    local_158 = local_158 ^ uVar6;
    uStack_150 = uStack_150 ^ uVar7;
    uVar6 = 0;
    uVar7 = 0;
    if (bVar40) {
      uVar6 = local_208 ^ local_98;
      uVar7 = uStack_200 ^ uStack_90;
    }
    local_98 = local_98 ^ uVar6;
    uStack_90 = uStack_90 ^ uVar7;
    local_208 = local_208 ^ uVar6;
    uStack_200 = uStack_200 ^ uVar7;
    uVar6 = 0;
    uVar7 = 0;
    if (bVar40) {
      uVar6 = local_1f8 ^ local_88;
      uVar7 = uStack_1f0 ^ uStack_80;
    }
    local_88 = local_88 ^ uVar6;
    uStack_80 = uStack_80 ^ uVar7;
    local_1f8 = local_1f8 ^ uVar6;
    uStack_1f0 = uStack_1f0 ^ uVar7;
    uVar6 = 0;
    uVar7 = 0;
    if (bVar40) {
      uVar6 = local_1e8 ^ local_78;
      uVar7 = uStack_1e0 ^ uStack_70;
    }
    local_78 = local_78 ^ uVar6;
    uStack_70 = uStack_70 ^ uVar7;
    local_1e8 = local_1e8 ^ uVar6;
    uStack_1e0 = uStack_1e0 ^ uVar7;
    if (bVar40) {
      uVar4 = local_1d8 ^ local_68;
      uVar5 = uStack_1d0 ^ uStack_60;
    }
    local_68 = local_68 ^ uVar4;
    uStack_60 = uStack_60 ^ uVar5;
    local_1d8 = local_1d8 ^ uVar4;
    uStack_1d0 = uStack_1d0 ^ uVar5;
    uVar15 = local_1c8 ^ local_58;
    if (local_1c0 == 0) {
      uVar15 = 0;
    }
    local_58 = local_58 ^ uVar15;
    local_1c8 = uVar15 ^ local_1c8;
    recovered_100029c0(local_468,0xff,0x20);
    local_468[0] = 0xeb;
    local_449 = 0x7f;
    recovered_100029c0(&local_338,0,0x44);
    local_338 = CONCAT44(PF_PART4(local_338, 4),1);
    local_648 = local_98;
    uStack_640 = uStack_90;
    local_638 = local_88;
    uStack_630 = uStack_80;
    local_628 = local_78;
    uStack_620 = uStack_70;
    local_618 = local_68;
    uStack_610 = uStack_60;
    local_608 = local_58;
    uVar15 = 0xfe;
    do {
      recovered_1000d3b0((uint *)&local_338,(long)&local_338,(uint *)&local_338);
      if ((local_468[uVar15 >> 3] >> (uVar15 & 7) & 1) != 0) {
        recovered_1000d3b0((uint *)&local_338,(long)&local_338,(uint *)&local_648);
      }
      bVar40 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar40);
    local_58 = (undefined4)local_2f8;
    local_68 = local_308;
    uStack_60 = uStack_300;
    local_78 = local_318;
    uStack_70 = uStack_310;
    local_88 = local_328;
    uStack_80 = uStack_320;
    local_98 = local_338;
    uStack_90 = uStack_330;
    recovered_1000d3b0((uint *)&local_e8,(long)&local_e8,(uint *)&local_98);
    local_2f8 = CONCAT44(PF_PART4(local_2f8, 4),local_a8);
    local_308 = local_b8;
    uStack_300 = uStack_b0;
    local_318 = local_c8;
    uStack_310 = uStack_c0;
    local_328 = local_d8;
    uStack_320 = uStack_d0;
    local_338 = local_e8;
    uStack_330 = uStack_e0;
    recovered_1000d970((uint *)&local_338);
    pvVar2 = local_260;
    iVar3 = 0;
    recovered_100029c0(local_260,0,0x20);
    lVar11 = 0;
    do {
      uVar15 = *(uint *)((long)&local_338 + lVar11 * 4);
      uVar10 = 0;
      do {
        if ((uVar15 >> (uVar10 & 0x1f) & 1) != 0) {
          pbVar1 = (byte *)((long)pvVar2 + (ulong)(iVar3 + uVar10 >> 3));
          *pbVar1 = *pbVar1 | (byte)(1 << ((byte)(iVar3 + uVar10) & 7));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0xf);
      lVar11 = lVar11 + 1;
      iVar3 = iVar3 + 0xf;
    } while (lVar11 != 0x11);
  }
  return;
}

#undef DAT_1000ec70
#undef DAT_1000ec80
#undef UNK_1000ec74
#undef UNK_1000ec78
#undef UNK_1000ec7c
#undef UNK_1000ec84
#undef UNK_1000ec88
#undef UNK_1000ec8c
#undef _DAT_1000ec70
#undef _DAT_1000ec80
#undef iRam000000001000ec74
#undef iRam000000001000ec78
#undef iRam000000001000ec7c
#undef iRam000000001000ec84
#undef iRam000000001000ec88
#undef iRam000000001000ec8c
#undef local_298
#undef local_288
#undef local_278
#undef local_268
#undef local_260
#undef local_258
#undef local_248
#undef local_238
#undef local_228
#undef local_218
#undef local_208
#undef local_1f8
#undef local_1e8
#undef local_1d8
#undef local_1c8
#undef local_1c0
#undef local_1bc
#undef local_1b8
#undef local_1b0
#undef local_1a8
#undef local_1a0
#undef local_198
#undef local_190
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
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef uStack_640
#undef uStack_630
#undef uStack_620
#undef uStack_610
#undef iStack_5f4
#undef iStack_5f0
#undef iStack_5ec
#undef iStack_5e4
#undef iStack_5e0
#undef iStack_5dc
#undef iStack_5d4
#undef iStack_5d0
#undef iStack_5cc
#undef iStack_5c4
#undef iStack_5c0
#undef iStack_5bc
#undef iStack_5a4
#undef iStack_5a0
#undef iStack_59c
#undef iStack_594
#undef iStack_590
#undef iStack_58c
#undef iStack_584
#undef iStack_580
#undef iStack_57c
#undef iStack_574
#undef iStack_570
#undef iStack_56c
#undef iStack_554
#undef iStack_550
#undef iStack_54c
#undef iStack_544
#undef iStack_540
#undef iStack_53c
#undef iStack_534
#undef iStack_530
#undef iStack_52c
#undef iStack_524
#undef iStack_520
#undef iStack_51c
#undef iStack_504
#undef iStack_500
#undef iStack_4fc
#undef iStack_4f4
#undef iStack_4f0
#undef iStack_4ec
#undef iStack_4e4
#undef iStack_4e0
#undef iStack_4dc
#undef iStack_4d4
#undef iStack_4d0
#undef iStack_4cc
#undef iStack_4b4
#undef iStack_4b0
#undef iStack_4ac
#undef iStack_4a4
#undef iStack_4a0
#undef iStack_49c
#undef iStack_494
#undef iStack_490
#undef iStack_48c
#undef iStack_484
#undef iStack_480
#undef iStack_47c
#undef uStack_434
#undef uStack_424
#undef uStack_414
#undef uStack_404
#undef iStack_3d4
#undef iStack_3d0
#undef iStack_3cc
#undef iStack_3c4
#undef iStack_3c0
#undef iStack_3bc
#undef iStack_3b4
#undef iStack_3b0
#undef iStack_3ac
#undef iStack_3a4
#undef iStack_3a0
#undef iStack_39c
#undef iStack_384
#undef iStack_380
#undef iStack_37c
#undef iStack_374
#undef iStack_370
#undef iStack_36c
#undef iStack_364
#undef iStack_360
#undef iStack_35c
#undef iStack_354
#undef iStack_350
#undef iStack_34c
#undef uStack_330
#undef uStack_320
#undef uStack_310
#undef uStack_300
#undef iStack_2a4
#undef iStack_2a0
#undef iStack_29c
#undef iStack_294
#undef iStack_290
#undef iStack_28c
#undef iStack_284
#undef iStack_280
#undef iStack_27c
#undef iStack_274
#undef iStack_270
#undef iStack_26c
#undef uStack_254
#undef uStack_250
#undef uStack_24c
#undef uStack_244
#undef uStack_240
#undef uStack_23c
#undef uStack_234
#undef uStack_230
#undef uStack_22c
#undef uStack_224
#undef uStack_220
#undef uStack_21c
#undef uStack_200
#undef uStack_1f0
#undef uStack_1e0
#undef uStack_1d0
#undef uStack_1b4
#undef uStack_1ac
#undef uStack_180
#undef uStack_170
#undef uStack_160
#undef uStack_150
#undef uStack_134
#undef uStack_130
#undef uStack_12c
#undef uStack_124
#undef uStack_120
#undef uStack_11c
#undef uStack_114
#undef uStack_110
#undef uStack_10c
#undef uStack_104
#undef uStack_100
#undef uStack_fc
#undef uStack_e0
#undef uStack_d0
#undef uStack_c0
#undef uStack_b0
#undef uStack_90
#undef uStack_80
#undef uStack_70
#undef uStack_60
#undef uStack_4c
#undef uStack_3c
#undef local_68c
#undef local_648
#undef local_638
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
#undef local_449
#undef local_43c
#undef local_42c
#undef local_41c
#undef local_40c
#undef local_3fc
#undef local_3f8
#undef local_3d9
#undef local_3d8
#undef local_3c8
#undef local_3b8
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
#undef local_2f0
#undef local_2e8
#undef local_2a8

#define local_158 (*(undefined1 (*)[344])(pf_stack_frame + 24))
#define local_e8 (*(undefined1 (*)[232])(pf_stack_frame + 136))
#define local_78 (*(undefined1 (*)[120])(pf_stack_frame + 248))
#define local_58 (*(undefined1 (*)[88])(pf_stack_frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5d0
 */

void recovered_1000b5d0(void *salt,void *input,void *output)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};


  if (salt == (void *)0x0) {
    salt = local_58;
    recovered_100029c0(salt,0,0x20);
  }
  recovered_1000dc40(local_158,local_e8,salt);
  recovered_10009d40(local_158,input,0x20);
  recovered_1000dd80(local_158,local_78);
  recovered_10009d40(local_e8,local_78,0x20);
  recovered_1000dd80(local_e8,output);
  return;
}

#undef local_158
#undef local_e8
#undef local_78
#undef local_58

#undef DAT_1000ec50
#define DAT_1000ec50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef DAT_1000ec60
#define DAT_1000ec60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef UNK_1000ec58
#define UNK_1000ec58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef UNK_1000ec68
#define UNK_1000ec68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef _DAT_1000ec50
#define _DAT_1000ec50 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef _DAT_1000ec60
#define _DAT_1000ec60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef uRam000000001000ec58
#define uRam000000001000ec58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef uRam000000001000ec68
#define uRam000000001000ec68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#define local_b8 (*(undefined1 (*)[184])(pf_stack_frame + 24))
#define local_98 (*(undefined8 *)(pf_stack_frame + 56))
#define local_88 (*(undefined8 *)(pf_stack_frame + 72))
#define local_78 (*(undefined8 *)(pf_stack_frame + 88))
#define local_30 (*(undefined4 *)(pf_stack_frame + 160))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000b670(void *param_1,char *param_2,undefined1 *param_3,void *param_4)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};


  if (param_3 == (undefined1 *)0x0) {
    local_98 = _DAT_1000ec50;
    uStack_90 = uRam000000001000ec58;
    local_88 = _DAT_1000ec60;
    uStack_80 = uRam000000001000ec68;
    local_30 = 0;
    local_78 = 0;
    param_3 = local_b8;
    recovered_1000dd80(&local_98,param_3);
  }
  recovered_1000de60(param_1,param_2,param_3,0x20,param_4,0x20);
  return;
}

#undef DAT_1000ec50
#undef DAT_1000ec60
#undef UNK_1000ec58
#undef UNK_1000ec68
#undef _DAT_1000ec50
#undef _DAT_1000ec60
#undef uRam000000001000ec58
#undef uRam000000001000ec68
#undef local_b8
#undef local_98
#undef local_88
#undef local_78
#undef local_30
#undef uStack_90
#undef uStack_80

#undef DAT_1000f1db
#define DAT_1000f1db (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_1000f1df
#define DAT_1000f1df (*(uint8_t *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b700
 */

void recovered_1000b700(void *param_1,void *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (void *)0x0 && param_1 != (void *)0x0) {
    recovered_100029c0(param_1,0,0x38);
    recovered_1000de60(param_2,&DAT_1000f1db,(void *)0x0,0,param_1,0x20);
    recovered_1000de60(param_2,&DAT_1000f1df,(void *)0x0,0,(void *)((long)param_1 + 0x20),0xc);
    *(undefined8 *)((long)param_1 + 0x30) = 0;
  }
  return;
}

#undef DAT_1000f1db
#undef DAT_1000f1df

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
#undef DAT_1000ec50
#define DAT_1000ec50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef DAT_1000ec60
#define DAT_1000ec60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef DAT_1000ec90
#define DAT_1000ec90 (*(byte *)(((uintptr_t)pf_module_state + 0x201U)))
#undef DAT_1000f1db
#define DAT_1000f1db (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_1000f1df
#define DAT_1000f1df (*(uint8_t *)(((uintptr_t)pf_module_state + 0x750U)))
#undef UNK_1000ec58
#define UNK_1000ec58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef UNK_1000ec68
#define UNK_1000ec68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef UNK_1000ec91
#define UNK_1000ec91 (*(byte *)(((uintptr_t)pf_module_state + 0x202U)))
#undef UNK_1000ec92
#define UNK_1000ec92 (*(byte *)(((uintptr_t)pf_module_state + 0x203U)))
#undef UNK_1000ec93
#define UNK_1000ec93 (*(byte *)(((uintptr_t)pf_module_state + 0x204U)))
#undef UNK_1000ec94
#define UNK_1000ec94 (*(byte *)(((uintptr_t)pf_module_state + 0x205U)))
#undef UNK_1000ec95
#define UNK_1000ec95 (*(byte *)(((uintptr_t)pf_module_state + 0x206U)))
#undef UNK_1000ec96
#define UNK_1000ec96 (*(byte *)(((uintptr_t)pf_module_state + 0x207U)))
#undef UNK_1000ec97
#define UNK_1000ec97 (*(byte *)(((uintptr_t)pf_module_state + 0x208U)))
#undef UNK_1000ec98
#define UNK_1000ec98 (*(byte *)(((uintptr_t)pf_module_state + 0x209U)))
#undef UNK_1000ec99
#define UNK_1000ec99 (*(byte *)(((uintptr_t)pf_module_state + 0x20aU)))
#undef UNK_1000ec9a
#define UNK_1000ec9a (*(byte *)(((uintptr_t)pf_module_state + 0x20bU)))
#undef UNK_1000ec9b
#define UNK_1000ec9b (*(byte *)(((uintptr_t)pf_module_state + 0x20cU)))
#undef UNK_1000ec9c
#define UNK_1000ec9c (*(byte *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef UNK_1000ec9d
#define UNK_1000ec9d (*(byte *)(((uintptr_t)pf_module_state + 0x20eU)))
#undef UNK_1000ec9e
#define UNK_1000ec9e (*(byte *)(((uintptr_t)pf_module_state + 0x20fU)))
#undef UNK_1000ec9f
#define UNK_1000ec9f (*(byte *)(((uintptr_t)pf_module_state + 0x210U)))
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
#undef _DAT_1000ec50
#define _DAT_1000ec50 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef _DAT_1000ec60
#define _DAT_1000ec60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef bRam000000001000ec91
#define bRam000000001000ec91 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x202U)))
#undef bRam000000001000ec92
#define bRam000000001000ec92 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
#undef bRam000000001000ec93
#define bRam000000001000ec93 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x204U)))
#undef bRam000000001000ec94
#define bRam000000001000ec94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x205U)))
#undef bRam000000001000ec95
#define bRam000000001000ec95 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x206U)))
#undef bRam000000001000ec96
#define bRam000000001000ec96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207U)))
#undef bRam000000001000ec97
#define bRam000000001000ec97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x208U)))
#undef bRam000000001000ec98
#define bRam000000001000ec98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x209U)))
#undef bRam000000001000ec99
#define bRam000000001000ec99 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20aU)))
#undef bRam000000001000ec9a
#define bRam000000001000ec9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20bU)))
#undef bRam000000001000ec9b
#define bRam000000001000ec9b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20cU)))
#undef bRam000000001000ec9c
#define bRam000000001000ec9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef bRam000000001000ec9d
#define bRam000000001000ec9d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20eU)))
#undef bRam000000001000ec9e
#define bRam000000001000ec9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20fU)))
#undef bRam000000001000ec9f
#define bRam000000001000ec9f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x210U)))
#undef str_1000ef63
#define str_1000ef63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#undef str_1000f035
#define str_1000f035 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a6U)))
#undef str_1000f1e2
#define str_1000f1e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x753U)))
#undef str_1000f1f8
#define str_1000f1f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x769U)))
#undef str_1000f210
#define str_1000f210 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x781U)))
#undef str_1000f22c
#define str_1000f22c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79dU)))
#undef str_1000f235
#define str_1000f235 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a6U)))
#undef str_1000f256
#define str_1000f256 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c7U)))
#undef str_1000f263
#define str_1000f263 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d4U)))
#undef uRam000000001000ec58
#define uRam000000001000ec58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef uRam000000001000ec68
#define uRam000000001000ec68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#define local_38 (*(char * *)(pf_stack_frame + 760))
#define bStack_187 (*(byte *)(pf_stack_frame + 425))
#define bStack_186 (*(byte *)(pf_stack_frame + 426))
#define bStack_185 (*(byte *)(pf_stack_frame + 427))
#define bStack_184 (*(byte *)(pf_stack_frame + 428))
#define bStack_183 (*(byte *)(pf_stack_frame + 429))
#define bStack_182 (*(byte *)(pf_stack_frame + 430))
#define bStack_181 (*(byte *)(pf_stack_frame + 431))
#define bStack_180 (*(byte *)(pf_stack_frame + 432))
#define bStack_17f (*(byte *)(pf_stack_frame + 433))
#define bStack_17e (*(byte *)(pf_stack_frame + 434))
#define bStack_17d (*(byte *)(pf_stack_frame + 435))
#define bStack_17c (*(byte *)(pf_stack_frame + 436))
#define bStack_17b (*(byte *)(pf_stack_frame + 437))
#define bStack_17a (*(byte *)(pf_stack_frame + 438))
#define bStack_179 (*(byte *)(pf_stack_frame + 439))
#define bStack_177 (*(byte *)(pf_stack_frame + 441))
#define bStack_176 (*(byte *)(pf_stack_frame + 442))
#define bStack_175 (*(byte *)(pf_stack_frame + 443))
#define bStack_174 (*(byte *)(pf_stack_frame + 444))
#define bStack_173 (*(byte *)(pf_stack_frame + 445))
#define bStack_172 (*(byte *)(pf_stack_frame + 446))
#define bStack_171 (*(byte *)(pf_stack_frame + 447))
#define bStack_170 (*(byte *)(pf_stack_frame + 448))
#define bStack_16f (*(byte *)(pf_stack_frame + 449))
#define bStack_16e (*(byte *)(pf_stack_frame + 450))
#define bStack_16d (*(byte *)(pf_stack_frame + 451))
#define bStack_16c (*(byte *)(pf_stack_frame + 452))
#define bStack_16b (*(byte *)(pf_stack_frame + 453))
#define bStack_16a (*(byte *)(pf_stack_frame + 454))
#define local_318 (*(undefined1 (*)[792])(pf_stack_frame + 24))
#define bStack_169 (*(byte *)(pf_stack_frame + 455))
#define local_2f8 (*(undefined1 (*)[760])(pf_stack_frame + 56))
#define local_2d8 (*(undefined1 (*)[728])(pf_stack_frame + 88))
#define local_2b8 (*(undefined1 (*)[696])(pf_stack_frame + 120))
#define local_298 (*(undefined1 (*)[664])(pf_stack_frame + 152))
#define local_228 (*(undefined1 (*)[552])(pf_stack_frame + 264))
#define local_208 (*(undefined1 (*)[520])(pf_stack_frame + 296))
#define local_1e8 (*(undefined1 (*)[488])(pf_stack_frame + 328))
#define local_1c8 (*(undefined1 (*)[456])(pf_stack_frame + 360))
#define local_1a8 (*(undefined1 (*)[424])(pf_stack_frame + 392))
#define local_188 (*(byte *)(pf_stack_frame + 424))
#define local_178 (*(byte *)(pf_stack_frame + 440))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 608))
#define local_168 (*(undefined4 *)(pf_stack_frame + 456))
#define local_164 (*(undefined1 (*)[356])(pf_stack_frame + 460))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 624))
#define local_138 (*(ulong (*)[39])(pf_stack_frame + 504))
#define local_118 (*(byte (*)[280])(pf_stack_frame + 536))
#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 640))
#define local_f8 (*(undefined8 * *)(pf_stack_frame + 568))
#define local_f0 (*(void * *)(pf_stack_frame + 576))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 656))
#define local_e8 (*(void * *)(pf_stack_frame + 584))
#define local_e0 (*(undefined8 * *)(pf_stack_frame + 592))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 672))
#define local_d8 (*(undefined8 *)(pf_stack_frame + 600))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 616))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 688))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 632))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 648))
#define uStack_70 (*(ulong *)(pf_stack_frame + 704))
#define local_98 (*(undefined8 *)(pf_stack_frame + 664))
#define local_88 (*(undefined8 *)(pf_stack_frame + 680))
#define local_78 (*(undefined8 *)(pf_stack_frame + 696))
#define local_60 (*(void * *)(pf_stack_frame + 720))
#define local_58 (*(undefined8 * *)(pf_stack_frame + 728))
#define local_50 (*(undefined8 * *)(pf_stack_frame + 736))
#define local_48 (*(void * *)(pf_stack_frame + 744))
#define local_40 (*(ulong *)(pf_stack_frame + 752))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b770
 */

/* WARNING: Removing unreachable block (ram,0x1000b9ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1000b770(undefined8 *param_1,void *param_2,void *param_3,void *param_4,char *param_5,
                  ulong param_6)

{
  unsigned char pf_stack_frame[848] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte *source;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  char *format;
  uint uVar11;
  bool bVar12;
  uint128 auVar13;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))) {
    local_60 = param_2;
    source = (byte *)(*(code *)(ulong)_DAT_0028084c)(0x4100);
    param_2 = local_60;
  }
  else {
    source = (byte *)0x0;
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      ((0x4f < _DAT_00280808 && ((code *)(ulong)_DAT_0028084c != (code *)0x0)))))) {
    local_f0 = param_4;
    local_50 = param_1;
    local_40 = param_6;
    local_38 = param_5;
    pvVar4 = (void *)(*(code *)(ulong)_DAT_0028084c)(0x8000);
    bVar12 = pvVar4 != (void *)0x0;
    if (source != (byte *)0x0 && bVar12) {
      local_f8 = local_50 + 0x2a;
      local_118[0] = 0;
      local_138[0] = 0;
      local_e8 = param_3;
      local_60 = param_2;
      local_48 = pvVar4;
      uVar5 = recovered_1000c8d0(local_50,local_f8,local_118,source,0x4100,local_138,local_38,
                                 local_40);
      if ((char)uVar5 != '\0') {
        local_e0 = local_50 + 0x3f;
        local_58 = local_50 + 0x15;
        uVar5 = 0;
        do {
          if (local_118[0] == 0x16) {
            if (0x8000 - uVar5 < local_138[0]) {
              format = str_1000f1f8;
              goto LAB_1000c19a;
            }
            recovered_10001cc0((void *)((long)local_48 + uVar5),source,local_138[0]);
            uVar5 = uVar5 + local_138[0];
            if (3 < uVar5) {
              lVar8 = 0;
              do {
                puVar2 = local_58;
                uVar11 = (uint)*(byte *)((long)local_48 + lVar8 + 3) |
                         (uint)*(byte *)((long)local_48 + lVar8 + 2) << 8 |
                         (uint)*(byte *)((long)local_48 + lVar8 + 1) << 0x10;
                uVar6 = (ulong)uVar11;
                if (uVar5 < lVar8 + uVar6 + 4) {
                  bVar12 = false;
                  lVar7 = lVar8;
                  goto LAB_1000bcd0;
                }
                pvVar4 = (void *)((long)local_48 + lVar8);
                if (*(char *)((long)local_48 + lVar8) == '\x14') {
                  if (uVar11 != 0x20) {
                    format = str_1000f210;
                    goto LAB_1000c19a;
                  }
                  local_78 = local_58[0xc];
                  uStack_70 = local_58[0xd];
                  local_88 = local_58[10];
                  uStack_80 = local_58[0xb];
                  local_98 = local_58[8];
                  uStack_90 = local_58[9];
                  local_d8 = *local_58;
                  uStack_d0 = local_58[1];
                  local_c8 = local_58[2];
                  uStack_c0 = local_58[3];
                  local_b8 = local_58[4];
                  uStack_b0 = local_58[5];
                  local_a8 = local_58[6];
                  uStack_a0 = local_58[7];
                  recovered_1000dd80(&local_d8,local_228);
                  recovered_1000de60(local_60,str_1000f22c,(void *)0x0,0,local_208,0x20);
                  recovered_1000dc40(&local_d8,local_298,local_208);
                  recovered_10009d40(&local_d8,local_228,0x20);
                  recovered_1000dd80(&local_d8,&local_168);
                  recovered_10009d40(local_298,&local_168,0x20);
                  recovered_1000dd80(local_298,&local_188);
                  ((uint8_t *)(void *)&auVar13)[0] = -((byte)(*(byte *)((long)pvVar4 + 4) ^ local_188 |
                                       *(byte *)((long)pvVar4 + 0x14) ^ local_178) == DAT_1000ec90);
                  ((uint8_t *)(void *)&auVar13)[1] = -((byte)(*(byte *)((long)pvVar4 + 5) ^ bStack_187 |
                                       *(byte *)((long)pvVar4 + 0x15) ^ bStack_177) ==
                                bRam000000001000ec91);
                  ((uint8_t *)(void *)&auVar13)[2] = -((byte)(*(byte *)((long)pvVar4 + 6) ^ bStack_186 |
                                       *(byte *)((long)pvVar4 + 0x16) ^ bStack_176) ==
                                bRam000000001000ec92);
                  ((uint8_t *)(void *)&auVar13)[3] = -((byte)(*(byte *)((long)pvVar4 + 7) ^ bStack_185 |
                                       *(byte *)((long)pvVar4 + 0x17) ^ bStack_175) ==
                                bRam000000001000ec93);
                  ((uint8_t *)(void *)&auVar13)[4] = -((byte)(*(byte *)((long)pvVar4 + 8) ^ bStack_184 |
                                       *(byte *)((long)pvVar4 + 0x18) ^ bStack_174) ==
                                bRam000000001000ec94);
                  ((uint8_t *)(void *)&auVar13)[5] = -((byte)(*(byte *)((long)pvVar4 + 9) ^ bStack_183 |
                                       *(byte *)((long)pvVar4 + 0x19) ^ bStack_173) ==
                                bRam000000001000ec95);
                  ((uint8_t *)(void *)&auVar13)[6] = -((byte)(*(byte *)((long)pvVar4 + 10) ^ bStack_182 |
                                       *(byte *)((long)pvVar4 + 0x1a) ^ bStack_172) ==
                                bRam000000001000ec96);
                  ((uint8_t *)(void *)&auVar13)[7] = -((byte)(*(byte *)((long)pvVar4 + 0xb) ^ bStack_181 |
                                       *(byte *)((long)pvVar4 + 0x1b) ^ bStack_171) ==
                                bRam000000001000ec97);
                  ((uint8_t *)(void *)&auVar13)[8] = -((byte)(*(byte *)((long)pvVar4 + 0xc) ^ bStack_180 |
                                       *(byte *)((long)pvVar4 + 0x1c) ^ bStack_170) ==
                                bRam000000001000ec98);
                  ((uint8_t *)(void *)&auVar13)[9] = -((byte)(*(byte *)((long)pvVar4 + 0xd) ^ bStack_17f |
                                       *(byte *)((long)pvVar4 + 0x1d) ^ bStack_16f) ==
                                bRam000000001000ec99);
                  ((uint8_t *)(void *)&auVar13)[10] = -((byte)(*(byte *)((long)pvVar4 + 0xe) ^ bStack_17e |
                                        *(byte *)((long)pvVar4 + 0x1e) ^ bStack_16e) ==
                                 bRam000000001000ec9a);
                  ((uint8_t *)(void *)&auVar13)[0xb] = -((byte)(*(byte *)((long)pvVar4 + 0xf) ^ bStack_17d |
                                         *(byte *)((long)pvVar4 + 0x1f) ^ bStack_16d) ==
                                  bRam000000001000ec9b);
                  ((uint8_t *)(void *)&auVar13)[0xc] = -((byte)(*(byte *)((long)pvVar4 + 0x10) ^ bStack_17c |
                                         *(byte *)((long)pvVar4 + 0x20) ^ bStack_16c) ==
                                  bRam000000001000ec9c);
                  ((uint8_t *)(void *)&auVar13)[0xd] = -((byte)(*(byte *)((long)pvVar4 + 0x11) ^ bStack_17b |
                                         *(byte *)((long)pvVar4 + 0x21) ^ bStack_16b) ==
                                  bRam000000001000ec9d);
                  ((uint8_t *)(void *)&auVar13)[0xe] = -((byte)(*(byte *)((long)pvVar4 + 0x12) ^ bStack_17a |
                                         *(byte *)((long)pvVar4 + 0x22) ^ bStack_16a) ==
                                  bRam000000001000ec9e);
                  ((uint8_t *)(void *)&auVar13)[0xf] = -((byte)(*(byte *)((long)pvVar4 + 0x13) ^ bStack_179 |
                                         *(byte *)((long)pvVar4 + 0x23) ^ bStack_169) ==
                                  bRam000000001000ec9f);
                  if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                              (ushort)(((uint8_t *)(void *)&auVar13)[0xf] >> 7) << 0xf) != 0xffff) {
                    format = str_1000f235;
                    goto LAB_1000c19a;
                  }
                  recovered_10009d40(puVar2,pvVar4,0x24);
                  lVar7 = lVar8 + 0x24;
                  bVar12 = true;
                  goto LAB_1000bcd0;
                }
                if ((((*(char *)((long)local_48 + lVar8) == '\v') && (6 < uVar11)) &&
                    (uVar9 = (ulong)*(byte *)((long)pvVar4 + 4), uVar9 + 4 <= uVar6)) &&
                   ((*(char *)((long)pvVar4 + uVar9 + 7) != '\0' ||
                     (*(char *)((long)pvVar4 + uVar9 + 6) != '\0' ||
                     *(char *)((long)pvVar4 + uVar9 + 5) != '\0') && (uVar9 + 7 <= uVar6)))) {
                  uVar10 = (uint)*(byte *)((long)pvVar4 + uVar9 + 10) |
                           (uint)*(byte *)((long)pvVar4 + uVar9 + 9) << 8 |
                           (uint)*(byte *)((long)pvVar4 + uVar9 + 8) << 0x10;
                  if ((uVar10 != 0) && ((int)(uVar9 + 7) + uVar10 <= uVar11)) {
                    local_d8 = _DAT_1000ec50;
                    uStack_d0 = uRam000000001000ec58;
                    local_c8 = _DAT_1000ec60;
                    uStack_c0 = uRam000000001000ec68;
                    local_b8 = 0;
                    uStack_70 = uStack_70 & 0xffffffff00000000;
                    recovered_10009d40(&local_d8,(void *)((long)pvVar4 + uVar9 + 0xb),(ulong)uVar10)
                    ;
                    recovered_1000dd80(&local_d8,local_e0);
                    *(undefined1 *)((long)local_50 + 0x21e) = 1;
                  }
                }
                recovered_10009d40(local_58,pvVar4,uVar6 + 4);
                lVar7 = uVar6 + lVar8 + 4;
                lVar1 = uVar6 + lVar8;
                lVar8 = lVar7;
              } while (lVar1 + 8U <= uVar5);
              bVar12 = false;
LAB_1000bcd0:
              puVar2 = local_50;
              if (lVar7 != 0) {
                uVar5 = uVar5 - lVar7;
                if (uVar5 == 0) {
                  uVar5 = 0;
                }
                else {
                  recovered_10002100(local_48,(void *)(lVar7 + (long)local_48),uVar5);
                  puVar2 = local_50;
                }
              }
              local_50 = puVar2;
              if (bVar12) {
                local_78 = local_58[0xc];
                uStack_70 = local_58[0xd];
                local_88 = local_58[10];
                uStack_80 = local_58[0xb];
                local_98 = local_58[8];
                uStack_90 = local_58[9];
                local_d8 = *local_58;
                uStack_d0 = local_58[1];
                local_c8 = local_58[2];
                uStack_c0 = local_58[3];
                local_b8 = local_58[4];
                uStack_b0 = local_58[5];
                local_a8 = local_58[6];
                uStack_a0 = local_58[7];
                recovered_1000dd80(&local_d8,local_118);
                local_d8 = _DAT_1000ec50;
                uStack_d0 = uRam000000001000ec58;
                local_c8 = _DAT_1000ec60;
                uStack_c0 = uRam000000001000ec68;
                uStack_70 = uStack_70 & 0xffffffff00000000;
                local_b8 = 0;
                recovered_1000dd80(&local_d8,local_298);
                recovered_1000de60(local_e8,str_1000f035,local_298,0x20,local_318,0x20);
                recovered_100029c0(local_1c8,0,0x20);
                recovered_1000dc40(&local_d8,local_298,local_318);
                recovered_10009d40(&local_d8,local_1c8,0x20);
                recovered_1000dd80(&local_d8,&local_168);
                recovered_10009d40(local_298,&local_168,0x20);
                recovered_1000dd80(local_298,local_2f8);
                recovered_1000de60(local_2f8,str_1000f256,local_118,0x20,local_2d8,0x20);
                recovered_1000de60(local_2f8,str_1000f263,local_118,0x20,local_1e8,0x20);
                recovered_100029c0(puVar2 + 0x31,0,0x38);
                recovered_1000de60(local_2d8,&DAT_1000f1db,(void *)0x0,0,puVar2 + 0x31,0x20);
                recovered_1000de60(local_2d8,&DAT_1000f1df,(void *)0x0,0,puVar2 + 0x35,0xc);
                puVar2[0x37] = 0;
                recovered_100029c0(puVar2 + 0x38,0,0x38);
                recovered_1000de60(local_1e8,&DAT_1000f1db,(void *)0x0,0,puVar2 + 0x38,0x20);
                recovered_1000de60(local_1e8,&DAT_1000f1df,(void *)0x0,0,puVar2 + 0x3c,0xc);
                puVar2[0x3e] = 0;
                *(undefined1 *)((long)puVar2 + 0x21d) = 1;
                local_168 = 0x20000014;
                local_78 = local_58[0xc];
                uStack_70 = local_58[0xd];
                local_88 = local_58[10];
                uStack_80 = local_58[0xb];
                local_98 = local_58[8];
                uStack_90 = local_58[9];
                local_d8 = *local_58;
                uStack_d0 = local_58[1];
                local_c8 = local_58[2];
                uStack_c0 = local_58[3];
                local_b8 = local_58[4];
                uStack_b0 = local_58[5];
                local_a8 = local_58[6];
                uStack_a0 = local_58[7];
                recovered_1000dd80(&local_d8,local_1a8);
                recovered_1000de60(local_f0,str_1000f22c,(void *)0x0,0,local_2b8,0x20);
                recovered_1000dc40(&local_d8,local_298,local_2b8);
                recovered_10009d40(&local_d8,local_1a8,0x20);
                recovered_1000dd80(&local_d8,local_138);
                recovered_10009d40(local_298,local_138,0x20);
                recovered_1000dd80(local_298,local_164);
                uVar3 = recovered_1000c360(puVar2,puVar2 + 0x23,0x16,&local_168,0x24,local_38,
                                           local_40);
                if ((char)uVar3 == '\0') {
                  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                     ((0xb < _DAT_00280808 &&
                      ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
                    (*(code *)(ulong)_DAT_00280850)(source);
                  }
                }
                else {
                  recovered_10009d40(local_58,&local_168,0x24);
                  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                      (0xb < _DAT_00280808)) &&
                     ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                    (*(code *)(ulong)_DAT_00280850)(source);
                  }
                }
                if (_DAT_00280800 != 0x50414d57) {
                  return uVar3;
                }
                if (_DAT_00280804 == 0) {
                  return uVar3;
                }
                if (_DAT_00280808 < 0xc) {
                  return uVar3;
                }
                if (_DAT_00280808 < 0x54) {
                  return uVar3;
                }
                if (_DAT_00280850 == 0) {
                  return uVar3;
                }
                (*(code *)(ulong)_DAT_00280850)(local_48);
                return uVar3;
              }
            }
          }
          else if (local_118[0] == 0x15) {
            format = str_1000f1e2;
LAB_1000c19a:
            recovered_10006430(local_38,local_40,format);
            break;
          }
          local_118[0] = 0;
          local_138[0] = 0;
          uVar6 = recovered_1000c8d0(local_50,local_f8,local_118,source,0x4100,local_138,local_38,
                                     local_40);
        } while ((char)uVar6 != '\0');
      }
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 &&
          ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
        (*(code *)(ulong)_DAT_00280850)(source);
      }
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x53 < _DAT_00280808 && (_DAT_00280850 != 0)))) {
        (*(code *)(ulong)_DAT_00280850)(local_48);
      }
      return 0;
    }
    param_5 = local_38;
    param_6 = local_40;
    if (source != (byte *)0x0) goto LAB_1000b911;
  }
  else {
    if (source == (byte *)0x0) goto LAB_1000c15e;
    pvVar4 = (void *)0x0;
    bVar12 = false;
LAB_1000b911:
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00280850)(source);
    }
  }
  if (((((bVar12) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
      ((0xb < _DAT_00280808 && (0x53 < _DAT_00280808)))) &&
     ((code *)(ulong)_DAT_00280850 != (code *)0x0)) {
    (*(code *)(ulong)_DAT_00280850)(pvVar4);
  }
LAB_1000c15e:
  recovered_10006430(param_5,param_6,str_1000ef63);
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_1000ec50
#undef DAT_1000ec60
#undef DAT_1000ec90
#undef DAT_1000f1db
#undef DAT_1000f1df
#undef UNK_1000ec58
#undef UNK_1000ec68
#undef UNK_1000ec91
#undef UNK_1000ec92
#undef UNK_1000ec93
#undef UNK_1000ec94
#undef UNK_1000ec95
#undef UNK_1000ec96
#undef UNK_1000ec97
#undef UNK_1000ec98
#undef UNK_1000ec99
#undef UNK_1000ec9a
#undef UNK_1000ec9b
#undef UNK_1000ec9c
#undef UNK_1000ec9d
#undef UNK_1000ec9e
#undef UNK_1000ec9f
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_1000ec50
#undef _DAT_1000ec60
#undef bRam000000001000ec91
#undef bRam000000001000ec92
#undef bRam000000001000ec93
#undef bRam000000001000ec94
#undef bRam000000001000ec95
#undef bRam000000001000ec96
#undef bRam000000001000ec97
#undef bRam000000001000ec98
#undef bRam000000001000ec99
#undef bRam000000001000ec9a
#undef bRam000000001000ec9b
#undef bRam000000001000ec9c
#undef bRam000000001000ec9d
#undef bRam000000001000ec9e
#undef bRam000000001000ec9f
#undef str_1000ef63
#undef str_1000f035
#undef str_1000f1e2
#undef str_1000f1f8
#undef str_1000f210
#undef str_1000f22c
#undef str_1000f235
#undef str_1000f256
#undef str_1000f263
#undef uRam000000001000ec58
#undef uRam000000001000ec68
#undef local_38
#undef bStack_187
#undef bStack_186
#undef bStack_185
#undef bStack_184
#undef bStack_183
#undef bStack_182
#undef bStack_181
#undef bStack_180
#undef bStack_17f
#undef bStack_17e
#undef bStack_17d
#undef bStack_17c
#undef bStack_17b
#undef bStack_17a
#undef bStack_179
#undef bStack_177
#undef bStack_176
#undef bStack_175
#undef bStack_174
#undef bStack_173
#undef bStack_172
#undef bStack_171
#undef bStack_170
#undef bStack_16f
#undef bStack_16e
#undef bStack_16d
#undef bStack_16c
#undef bStack_16b
#undef bStack_16a
#undef local_318
#undef bStack_169
#undef local_2f8
#undef local_2d8
#undef local_2b8
#undef local_298
#undef local_228
#undef local_208
#undef local_1e8
#undef local_1c8
#undef local_1a8
#undef local_188
#undef local_178
#undef uStack_d0
#undef local_168
#undef local_164
#undef uStack_c0
#undef local_138
#undef local_118
#undef uStack_b0
#undef local_f8
#undef local_f0
#undef uStack_a0
#undef local_e8
#undef local_e0
#undef uStack_90
#undef local_d8
#undef local_c8
#undef uStack_80
#undef local_b8
#undef local_a8
#undef uStack_70
#undef local_98
#undef local_88
#undef local_78
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40

#undef str_1000f057
#define str_1000f057 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2f0
 */

int recovered_1000c2f0(void *context,void *data,ulong size,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((context == (void *)0x0) || (*(char *)((long)context + 0x21d) != '\x01')) ||
     (data == (void *)0x0 && size != 0)) {
    recovered_10006430(error,capacity,str_1000f057);
    iVar1 = 0;
  }
  else {
    iVar1 = recovered_1000c360(context,(void *)((long)context + 0x188),0x17,data,size,error,capacity
                              );
  }
  return iVar1;
}

#undef str_1000f057

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
#undef DAT_1000eca0
#define DAT_1000eca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef DAT_1000ecb0
#define DAT_1000ecb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef DAT_1000ecc0
#define DAT_1000ecc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x231U)))
#undef DAT_1000ecd0
#define DAT_1000ecd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef DAT_1000ece0
#define DAT_1000ece0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x251U)))
#undef DAT_1000ecf0
#define DAT_1000ecf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_1000ed00
#define DAT_1000ed00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef UNK_1000eca8
#define UNK_1000eca8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x219U)))
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
#undef _DAT_1000eca0
#define _DAT_1000eca0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef _DAT_1000ecb0
#define _DAT_1000ecb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef _DAT_1000ecc0
#define _DAT_1000ecc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x231U)))
#undef _DAT_1000ecd0
#define _DAT_1000ecd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef _DAT_1000ece0
#define _DAT_1000ece0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x251U)))
#undef _DAT_1000ecf0
#define _DAT_1000ecf0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef str_1000ef63
#define str_1000ef63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#undef str_1000f08b
#define str_1000f08b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fcU)))
#undef uRam000000001000eca8
#define uRam000000001000eca8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x219U)))
#define local_b8 (*(ulong (*)[23])(pf_stack_frame + 24))
#define local_70 (*(long *)(pf_stack_frame + 96))
#define local_68 (*(undefined8 * *)(pf_stack_frame + 104))
#define local_60 (*(long *)(pf_stack_frame + 112))
#define local_58 (*(void * *)(pf_stack_frame + 120))
#define local_4c (*(undefined1 (*)[76])(pf_stack_frame + 132))
#define local_48 (*(ulong *)(pf_stack_frame + 136))
#define local_40 (*(char * *)(pf_stack_frame + 144))
#define local_38 (*(undefined2 * *)(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c360
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1000c360(undefined8 *param_1,void *param_2,undefined1 param_3,void *param_4,ulong param_5,
                  char *param_6,ulong param_7)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *pvVar2;
  uint *puVar3;
  byte *pbVar4;
  ulong *puVar5;
  ulong *puVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  byte bVar15;
  byte bVar14;
  byte bVar13;
  byte bVar12;
  byte bVar19;
  byte bVar18;
  byte bVar17;
  byte bVar16;
  char cVar20;
  char cVar21;
  pf_u96 auVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined2 *puVar29;
  undefined4 uVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 in_XMM2_Qb;
  uint128 auVar38;
  ulong uVar39;

  if ((param_2 != (void *)0x0) && (param_4 != (void *)0x0 || param_5 == 0)) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x4f < _DAT_00280808)))) &&
       ((code *)(ulong)_DAT_0028084c != (code *)0x0)) {
      lVar33 = param_5 + 0x16;
      local_68 = param_1;
      local_40 = param_6;
      local_38 = (undefined2 *)(*(code *)(ulong)_DAT_0028084c)(lVar33);
      param_6 = local_40;
      if (local_38 != (undefined2 *)0x0) {
        uVar1 = param_5 + 1;
        iVar31 = (int)param_5 + 0x11;
        pvVar2 = (void *)((long)local_38 + 5);
        *local_38 = 0x317;
        *(undefined1 *)(local_38 + 1) = 3;
        *(char *)((long)local_38 + 3) = (char)((uint)iVar31 >> 8);
        *(char *)(local_38 + 2) = (char)iVar31;
        local_60 = lVar33;
        if (param_5 != 0) {
          recovered_10001cc0(pvVar2,param_4,param_5);
        }
        *(undefined1 *)((long)pvVar2 + param_5) = param_3;
        local_58 = pvVar2;
        recovered_10001cc0(local_4c,(void *)((long)param_2 + 0x20),0xc);
        uVar36 = *(ulong *)((long)param_2 + 0x30);
        uVar30 = (undefined4)(uVar36 >> 0x18);
        uVar35 = (uint)(uVar36 >> 0x20);
        PF_PART8(auVar22, 4) = in_XMM2_Qb;
        PF_PART4(auVar22, 0) = uVar35;
        PF_PART8(auVar38, 0) = PF_PART8(auVar22, 0) << 0x20;
        PF_PART4(auVar38, 8) = (uint)uVar36;
        PF_PART4(auVar38, 12) = uVar35;
        uVar37 = uVar36 >> 0x38 & _DAT_1000eca0;
        uVar39 = PF_PART8(auVar38, 8) >> 0x30 & uRam000000001000eca8;
        uVar7 = (ushort)uVar37;
        cVar20 = (char)uVar37;
        bVar12 = (uVar7 != 0) * (uVar7 < 0x100) * cVar20 - (0xff < uVar7);
        sVar9 = (short)uVar39;
        cVar21 = (char)uVar39;
        bVar13 = (0 < sVar9) * (sVar9 < 0x100) * cVar21 - (0xff < sVar9);
        bVar14 = (uVar7 != 0) * (uVar7 < 0x100) * cVar20 - (0xff < uVar7);
        bVar15 = (0 < sVar9) * (sVar9 < 0x100) * cVar21 - (0xff < sVar9);
        uVar7 = (ushort)bVar12;
        bVar16 = (bVar12 != 0) * (uVar7 < 0x100) * bVar12 - (0xff < uVar7);
        uVar8 = (ushort)bVar13;
        bVar17 = (bVar13 != 0) * (uVar8 < 0x100) * bVar13 - (0xff < uVar8);
        uVar10 = (ushort)bVar14;
        bVar18 = (bVar14 != 0) * (uVar10 < 0x100) * bVar14 - (0xff < uVar10);
        uVar11 = (ushort)bVar15;
        bVar19 = (bVar15 != 0) * (uVar11 < 0x100) * bVar15 - (0xff < uVar11);
        bVar12 = (bVar12 != 0) * (uVar7 < 0x100) * bVar12 - (0xff < uVar7);
        bVar13 = (bVar13 != 0) * (uVar8 < 0x100) * bVar13 - (0xff < uVar8);
        bVar14 = (bVar14 != 0) * (uVar10 < 0x100) * bVar14 - (0xff < uVar10);
        bVar15 = (bVar15 != 0) * (uVar11 < 0x100) * bVar15 - (0xff < uVar11);
        local_48 = local_48 ^
                   (uVar36 << 0x38 |
                   (~_DAT_1000ecf0 & (ulong)((uint)uVar36 >> 8) << 0x30 |
                   (~_DAT_1000ece0 & (uVar36 >> 0x10 & 0xffff) << 0x28 |
                   (~_DAT_1000ecd0 & CONCAT44(uVar30,uVar30) & 0xff000000ff |
                   (~_DAT_1000ecc0 & (ulong)(uVar35 << 0x18) |
                   (~_DAT_1000ecb0 & (ulong)((uVar35 >> 8) << 0x10) |
                   CONCAT17((bVar15 != 0) * (bVar15 < 0x100) * bVar15 - (0xff < bVar15),
                            CONCAT16((bVar14 != 0) * (bVar14 < 0x100) * bVar14 - (0xff < bVar14),
                                     CONCAT15((bVar13 != 0) * (bVar13 < 0x100) * bVar13 -
                                              (0xff < bVar13),
                                              CONCAT14((bVar12 != 0) * (bVar12 < 0x100) * bVar12 -
                                                       (0xff < bVar12),
                                                       CONCAT13((bVar19 != 0) * (bVar19 < 0x100) *
                                                                bVar19 - (0xff < bVar19),
                                                                CONCAT12((bVar18 != 0) *
                                                                         (bVar18 < 0x100) * bVar18 -
                                                                         (0xff < bVar18),
                                                                         CONCAT11((bVar17 != 0) *
                                                                                  (bVar17 < 0x100) *
                                                                                  bVar17 - (0xff <
                                                  bVar17),(bVar16 != 0) * (bVar16 < 0x100) * bVar16
                                                          - (0xff < bVar16)))))))) & _DAT_1000ecb0)
                   & _DAT_1000ecc0) & _DAT_1000ecd0) & _DAT_1000ece0) & _DAT_1000ecf0) &
                   (ulong)DAT_1000ed00);
        if (uVar1 != 0) {
          local_70 = (long)local_38 + 0x15;
          uVar35 = 1;
          uVar36 = 0;
          do {
            uVar37 = uVar1 - uVar36;
            if (0x3f < uVar37) {
              uVar37 = 0x40;
            }
            recovered_1000e790(param_2,uVar35,local_4c,local_b8);
            if (uVar1 != uVar36) {
              uVar39 = uVar37 + (uVar37 == 0);
              if (uVar1 - uVar36 < 4) {
                uVar32 = 0;
              }
              else {
                if (uVar1 - uVar36 < 0x20) {
                  uVar34 = 0;
                }
                else {
                  uVar32 = (ulong)((uint)uVar39 & 0x60);
                  lVar33 = local_70 + uVar36;
                  uVar34 = 0;
                  do {
                    puVar5 = (ulong *)(lVar33 + -0x10 + uVar34);
                    uVar23 = puVar5[1];
                    uVar25 = *(ulong *)(lVar33 + uVar34);
                    uVar26 = ((ulong *)(lVar33 + uVar34))[1];
                    uVar24 = *(ulong *)((long)local_b8 + uVar34 + 8);
                    uVar27 = *(ulong *)((long)local_b8 + uVar34 + 0x10);
                    uVar28 = *(ulong *)((long)local_b8 + uVar34 + 0x18);
                    puVar6 = (ulong *)(lVar33 + -0x10 + uVar34);
                    *puVar6 = *puVar5 ^ *(ulong *)((long)local_b8 + uVar34);
                    puVar6[1] = uVar23 ^ uVar24;
                    *(ulong *)(lVar33 + uVar34) = uVar25 ^ uVar27;
                    ((ulong *)(lVar33 + uVar34))[1] = uVar26 ^ uVar28;
                    uVar34 = uVar34 + 0x20;
                  } while (uVar32 != uVar34);
                  if (uVar37 == uVar32) goto LAB_1000c5c9;
                  uVar34 = uVar32;
                  if ((uVar39 & 0x1c) == 0) goto LAB_1000c6b0;
                }
                uVar32 = (ulong)((uint)uVar39 & 0x7c);
                do {
                  puVar3 = (uint *)((long)local_58 + uVar34 + uVar36);
                  *puVar3 = *puVar3 ^ *(uint *)((long)local_b8 + uVar34);
                  uVar34 = uVar34 + 4;
                } while (uVar32 != uVar34);
                if (uVar37 == uVar32) goto LAB_1000c5c9;
              }
LAB_1000c6b0:
              do {
                pbVar4 = (byte *)((long)local_58 + uVar32 + uVar36);
                *pbVar4 = *pbVar4 ^ *(byte *)((long)local_b8 + uVar32);
                uVar32 = uVar32 + 1;
              } while (uVar39 != uVar32);
            }
LAB_1000c5c9:
            uVar35 = uVar35 + 1;
            uVar36 = uVar36 + uVar37;
          } while (uVar36 < uVar1);
        }
        puVar29 = local_38;
        pvVar2 = local_58;
        recovered_1000e140(param_2,local_4c,local_38,local_58,uVar1,(undefined1 *)local_b8);
        recovered_10001cc0((void *)((long)pvVar2 + uVar1),local_b8,0x10);
        *(long *)((long)param_2 + 0x30) = *(long *)((long)param_2 + 0x30) + 1;
        if ((code *)local_68[2] == (code *)0x0) {
          uVar30 = 0;
          recovered_10006430(local_40,param_7,str_1000f08b);
        }
        else {
          uVar30 = (*(code *)local_68[2])(*local_68,puVar29,local_60,local_40,param_7);
        }
        if (_DAT_00280800 != 0x50414d57) {
          return uVar30;
        }
        if (_DAT_00280804 == 0) {
          return uVar30;
        }
        if (_DAT_00280808 < 0xc) {
          return uVar30;
        }
        if (_DAT_00280808 < 0x54) {
          return uVar30;
        }
        if ((code *)(ulong)_DAT_00280850 == (code *)0x0) {
          return uVar30;
        }
        (*(code *)(ulong)_DAT_00280850)(local_38);
        return uVar30;
      }
    }
    recovered_10006430(param_6,param_7,str_1000ef63);
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_1000eca0
#undef DAT_1000ecb0
#undef DAT_1000ecc0
#undef DAT_1000ecd0
#undef DAT_1000ece0
#undef DAT_1000ecf0
#undef DAT_1000ed00
#undef UNK_1000eca8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_1000eca0
#undef _DAT_1000ecb0
#undef _DAT_1000ecc0
#undef _DAT_1000ecd0
#undef _DAT_1000ece0
#undef _DAT_1000ecf0
#undef str_1000ef63
#undef str_1000f08b
#undef uRam000000001000eca8
#undef local_b8
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_4c
#undef local_48
#undef local_40
#undef local_38

#undef str_1000f057
#define str_1000f057 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c8U)))
#undef str_1000f07a
#define str_1000f07a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ebU)))
#define local_31 (*(byte *)(pf_stack_frame + 31))
#define local_40 (*(ulong *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c7a0
 */

int recovered_1000c7a0(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  char *format;
  int iVar3;

  if (read != (ulong *)0x0) {
    *read = 0;
  }
  if ((((context == (void *)0x0) || (size == 0)) || (data == (void *)0x0)) ||
     (*(char *)((long)context + 0x21d) == '\0')) {
    format = str_1000f057;
LAB_1000c88b:
    recovered_10006430(error,capacity,format);
  }
  else {
    local_31 = 0;
    local_40 = 0;
    uVar2 = recovered_1000c8d0(context,(void *)((long)context + 0x1c0),&local_31,data,size,&local_40
                               ,error,capacity);
    cVar1 = (char)uVar2;
    while (cVar1 != '\0') {
      if (local_31 == 0x17) {
        iVar3 = (int)CONCAT71((int7)(size >> 8),1);
        if (read == (ulong *)0x0) {
          return iVar3;
        }
        *read = local_40;
        return iVar3;
      }
      if (local_31 == 0x15) {
        format = str_1000f07a;
        local_31 = 0x15;
        goto LAB_1000c88b;
      }
      local_31 = 0;
      local_40 = 0;
      uVar2 = recovered_1000c8d0(context,(void *)((long)context + 0x1c0),&local_31,data,size,
                                 &local_40,error,capacity);
      cVar1 = (char)uVar2;
    }
  }
  return 0;
}

#undef str_1000f057
#undef str_1000f07a
#undef local_31
#undef local_40

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
#undef DAT_1000eca0
#define DAT_1000eca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef DAT_1000ecb0
#define DAT_1000ecb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef DAT_1000ecc0
#define DAT_1000ecc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x231U)))
#undef DAT_1000ecd0
#define DAT_1000ecd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef DAT_1000ece0
#define DAT_1000ece0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x251U)))
#undef DAT_1000ecf0
#define DAT_1000ecf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_1000ed00
#define DAT_1000ed00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef UNK_1000eca8
#define UNK_1000eca8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x219U)))
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
#undef _DAT_1000eca0
#define _DAT_1000eca0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef _DAT_1000ecb0
#define _DAT_1000ecb0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x221U)))
#undef _DAT_1000ecc0
#define _DAT_1000ecc0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x231U)))
#undef _DAT_1000ecd0
#define _DAT_1000ecd0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x241U)))
#undef _DAT_1000ece0
#define _DAT_1000ece0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x251U)))
#undef _DAT_1000ecf0
#define _DAT_1000ecf0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x261U)))
#undef _DAT_1000ed00
#define _DAT_1000ed00 (*(uint128 *)(((uintptr_t)pf_module_state + 0x271U)))
#undef str_1000ef63
#define str_1000ef63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#undef str_1000f270
#define str_1000f270 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e1U)))
#undef str_1000f28a
#define str_1000f28a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fbU)))
#undef str_1000f2a9
#define str_1000f2a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81aU)))
#undef str_1000f2d6
#define str_1000f2d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x847U)))
#undef str_1000f313
#define str_1000f313 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x884U)))
#undef str_1000f334
#define str_1000f334 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a5U)))
#undef str_1000f349
#define str_1000f349 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8baU)))
#undef str_1000f36a
#define str_1000f36a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dbU)))
#undef uRam000000001000eca8
#define uRam000000001000eca8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x219U)))
#define local_78 (*(ulong *)(pf_stack_frame + 168))
#define local_70 (*(ulong *)(pf_stack_frame + 176))
#define local_68 (*(ulong *)(pf_stack_frame + 184))
#define local_60 (*(void * *)(pf_stack_frame + 192))
#define local_58 (*(byte * *)(pf_stack_frame + 200))
#define local_50 (*(byte * *)(pf_stack_frame + 208))
#define local_48 (*(byte * *)(pf_stack_frame + 216))
#define local_40 (*(ulong * *)(pf_stack_frame + 224))
#define local_35 (*(byte *)(pf_stack_frame + 235))
#define local_34 (*(byte *)(pf_stack_frame + 236))
#define local_33 (*(byte *)(pf_stack_frame + 237))
#define local_32 (*(ushort *)(pf_stack_frame + 238))
#define auStack_100 (*(ulong (*)[32])(pf_stack_frame + 32))
#define bStack_c7 (*(byte *)(pf_stack_frame + 89))
#define bStack_c6 (*(byte *)(pf_stack_frame + 90))
#define bStack_c5 (*(byte *)(pf_stack_frame + 91))
#define bStack_c4 (*(byte *)(pf_stack_frame + 92))
#define bStack_c3 (*(byte *)(pf_stack_frame + 93))
#define bStack_c2 (*(byte *)(pf_stack_frame + 94))
#define bStack_c1 (*(byte *)(pf_stack_frame + 95))
#define bStack_c0 (*(byte *)(pf_stack_frame + 96))
#define bStack_bf (*(byte *)(pf_stack_frame + 97))
#define bStack_be (*(byte *)(pf_stack_frame + 98))
#define bStack_bd (*(byte *)(pf_stack_frame + 99))
#define bStack_bc (*(byte *)(pf_stack_frame + 100))
#define bStack_bb (*(byte *)(pf_stack_frame + 101))
#define bStack_ba (*(byte *)(pf_stack_frame + 102))
#define bStack_b9 (*(byte *)(pf_stack_frame + 103))
#define local_108 (*(undefined8 *)(pf_stack_frame + 24))
#define local_c8 (*(byte *)(pf_stack_frame + 88))
#define local_b0 (*(byte * *)(pf_stack_frame + 112))
#define local_a8 (*(void * *)(pf_stack_frame + 120))
#define local_a0 (*(byte * *)(pf_stack_frame + 128))
#define local_98 (*(ulong *)(pf_stack_frame + 136))
#define local_90 (*(byte * *)(pf_stack_frame + 144))
#define local_88 (*(byte * *)(pf_stack_frame + 152))
#define local_7c (*(undefined1 (*)[124])(pf_stack_frame + 164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c8d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1000c8d0(undefined8 *param_1,void *param_2,byte *param_3,byte *param_4,ulong param_5
                        ,ulong *param_6,char *param_7,ulong param_8)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  byte bVar11;
  byte bVar10;
  byte bVar9;
  byte bVar8;
  byte bVar15;
  byte bVar14;
  byte bVar13;
  byte bVar12;
  char cVar16;
  pf_u96 auVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  byte *pbVar25;
  char cVar26;
  byte *pbVar27;
  ulong uVar28;
  ulong uVar29;
  code *pcVar30;
  char *pcVar31;
  ulong uVar32;
  ushort uVar33;
  uint uVar34;
  undefined7 uVar36;
  ulong uVar35;
  bool bVar37;
  uint128 auVar38;
  uint128 auVar39;
  uint128 auVar40;
  uint128 auVar41;
  ushort uVar42;
  ulong uVar43;
  uint128 in_XMM2;
  uint128 auVar44;
  ulong uVar46;
  uint128 auVar45;

  if (param_6 != (ulong *)0x0) {
    *param_6 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 == (byte *)0x0) {
LAB_1000d193:
    uVar35 = 0;
  }
  else {
    pcVar30 = (code *)param_1[1];
    local_70 = param_5;
    local_60 = param_2;
    local_50 = param_3;
    local_40 = param_6;
    if (pcVar30 != (code *)0x0) {
      local_a8 = (void *)((long)param_2 + 0x20);
      local_a0 = param_4 + 0x10;
      local_b0 = param_4 + 1;
      local_58 = param_4;
      do {
        pbVar27 = local_58;
        cVar26 = (*pcVar30)(*param_1,&local_35,5,param_7,param_8);
        if (cVar26 == '\0') goto LAB_1000d193;
        uVar33 = local_32 << 8 | local_32 >> 8;
        if ((ushort)(uVar33 + 0xb7ff) < 0xb800) {
          pcVar31 = str_1000f270;
          goto LAB_1000d0f4;
        }
        uVar29 = (ulong)uVar33;
        if (local_60 != (void *)0x0) {
          if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
             (((_DAT_00280808 < 0x50 || ((code *)(ulong)_DAT_0028084c == (code *)0x0)) ||
              (pbVar27 = (byte *)(*(code *)(ulong)_DAT_0028084c)(uVar29), pbVar27 == (byte *)0x0))))
          {
            pcVar31 = str_1000ef63;
            goto LAB_1000d0f4;
          }
          if ((code *)param_1[1] == (code *)0x0) {
            recovered_10006430(param_7,param_8,str_1000f313);
LAB_1000d040:
            if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
               ((_DAT_00280808 < 0xc ||
                ((_DAT_00280808 < 0x54 ||
                 (pcVar30 = (code *)(ulong)_DAT_00280850, pcVar30 == (code *)0x0))))))
            goto LAB_1000d193;
          }
          else {
            cVar26 = (*(code *)param_1[1])(*param_1,pbVar27,uVar29,param_7,param_8);
            if (cVar26 == '\0') goto LAB_1000d040;
            local_48 = pbVar27;
            if (local_35 == 0x14) {
              if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
                 && ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))) {
                (*(code *)(ulong)_DAT_00280850)(pbVar27);
              }
              goto LAB_1000c960;
            }
            if (local_35 == 0x17) {
              if (local_40 != (ulong *)0x0) {
                *local_40 = 0;
              }
              if (local_50 != (byte *)0x0) {
                *local_50 = 0;
              }
              uVar36 = (undefined7)((ulong)pbVar27 >> 8);
              uVar35 = CONCAT71(uVar36,1);
              if (uVar33 < 0x10) {
LAB_1000cce2:
                pbVar27 = local_50;
              }
              else {
                if (local_70 < uVar29 - 0x10) {
                  pcVar31 = str_1000f334;
LAB_1000ccd4:
                  recovered_10006430(param_7,param_8,pcVar31);
                  uVar35 = CONCAT71(uVar36,1);
                  goto LAB_1000cce2;
                }
                local_68 = uVar29 - 0x10;
                recovered_10001cc0(local_7c,local_a8,0xc);
                pbVar25 = local_48;
                uVar35 = *(ulong *)((long)local_60 + 0x30);
                uVar18 = (undefined4)(uVar35 >> 0x18);
                uVar34 = (uint)(uVar35 >> 0x20);
                PF_PART8(auVar17, 4) = PF_PART8(in_XMM2, 8);
                PF_PART4(auVar17, 0) = uVar34;
                PF_PART8(auVar44, 0) = PF_PART8(auVar17, 0) << 0x20;
                PF_PART4(auVar44, 8) = (uint)uVar35;
                PF_PART4(auVar44, 12) = uVar34;
                uVar43 = uVar35 >> 0x38 & _DAT_1000eca0;
                uVar46 = PF_PART8(auVar44, 8) >> 0x30 & uRam000000001000eca8;
                uVar33 = (ushort)uVar43;
                cVar26 = (char)uVar43;
                bVar8 = (uVar33 != 0) * (uVar33 < 0x100) * cVar26 - (0xff < uVar33);
                sVar3 = (short)uVar46;
                cVar16 = (char)uVar46;
                bVar9 = (0 < sVar3) * (sVar3 < 0x100) * cVar16 - (0xff < sVar3);
                bVar10 = (uVar33 != 0) * (uVar33 < 0x100) * cVar26 - (0xff < uVar33);
                bVar11 = (0 < sVar3) * (sVar3 < 0x100) * cVar16 - (0xff < sVar3);
                uVar33 = (ushort)bVar8;
                bVar12 = (bVar8 != 0) * (uVar33 < 0x100) * bVar8 - (0xff < uVar33);
                uVar42 = (ushort)bVar12;
                uVar1 = (ushort)bVar9;
                bVar13 = (bVar9 != 0) * (uVar1 < 0x100) * bVar9 - (0xff < uVar1);
                uVar2 = (ushort)bVar10;
                bVar14 = (bVar10 != 0) * (uVar2 < 0x100) * bVar10 - (0xff < uVar2);
                uVar4 = (ushort)bVar11;
                bVar15 = (bVar11 != 0) * (uVar4 < 0x100) * bVar11 - (0xff < uVar4);
                bVar8 = (bVar8 != 0) * (uVar33 < 0x100) * bVar8 - (0xff < uVar33);
                bVar9 = (bVar9 != 0) * (uVar1 < 0x100) * bVar9 - (0xff < uVar1);
                bVar10 = (bVar10 != 0) * (uVar2 < 0x100) * bVar10 - (0xff < uVar2);
                bVar11 = (bVar11 != 0) * (uVar4 < 0x100) * bVar11 - (0xff < uVar4);
                uVar33 = (ushort)bVar13;
                ((uint8_t *)(void *)&auVar45)[1] = (bVar13 != 0) * (uVar33 < 0x100) * bVar13 - (0xff < uVar33);
                ((uint8_t *)(void *)&auVar45)[0] = (bVar12 != 0) * (uVar42 < 0x100) * bVar12 - (0xff < uVar42);
                uVar1 = (ushort)bVar14;
                ((uint8_t *)(void *)&auVar45)[2] = (bVar14 != 0) * (uVar1 < 0x100) * bVar14 - (0xff < uVar1);
                uVar2 = (ushort)bVar15;
                ((uint8_t *)(void *)&auVar45)[3] = (bVar15 != 0) * (uVar2 < 0x100) * bVar15 - (0xff < uVar2);
                uVar4 = (ushort)bVar8;
                ((uint8_t *)(void *)&auVar45)[4] = (bVar8 != 0) * (uVar4 < 0x100) * bVar8 - (0xff < uVar4);
                uVar5 = (ushort)bVar9;
                ((uint8_t *)(void *)&auVar45)[5] = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
                uVar6 = (ushort)bVar10;
                ((uint8_t *)(void *)&auVar45)[6] = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
                uVar7 = (ushort)bVar11;
                ((uint8_t *)(void *)&auVar45)[7] = (bVar11 != 0) * (uVar7 < 0x100) * bVar11 - (0xff < uVar7);
                ((uint8_t *)(void *)&auVar45)[8] = (bVar12 != 0) * (uVar42 < 0x100) * bVar12 - (0xff < uVar42);
                ((uint8_t *)(void *)&auVar45)[9] = (bVar13 != 0) * (uVar33 < 0x100) * bVar13 - (0xff < uVar33);
                ((uint8_t *)(void *)&auVar45)[10] = (bVar14 != 0) * (uVar1 < 0x100) * bVar14 - (0xff < uVar1);
                ((uint8_t *)(void *)&auVar45)[0xb] = (bVar15 != 0) * (uVar2 < 0x100) * bVar15 - (0xff < uVar2);
                ((uint8_t *)(void *)&auVar45)[0xc] = (bVar8 != 0) * (uVar4 < 0x100) * bVar8 - (0xff < uVar4);
                ((uint8_t *)(void *)&auVar45)[0xd] = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
                ((uint8_t *)(void *)&auVar45)[0xe] = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
                ((uint8_t *)(void *)&auVar45)[0xf] = (bVar11 != 0) * (uVar7 < 0x100) * bVar11 - (0xff < uVar7);
                PF_PART8(auVar38, 0) = CONCAT44(uVar18,uVar18) & 0xff000000ff;
                PF_PART8(auVar38, 8) = 0;
                PF_PART8(auVar39, 0) = (uVar35 >> 0x10 & 0xffff) << 0x28;
                PF_PART8(auVar39, 8) = 0;
                PF_PART8(auVar40, 0) = (ulong)((uint)uVar35 >> 8) << 0x30;
                PF_PART8(auVar40, 8) = 0;
                in_XMM2 = (~_DAT_1000ecf0 & auVar40 |
                          (~_DAT_1000ece0 & auVar39 |
                          (~_DAT_1000ecd0 & auVar38 |
                          (~_DAT_1000ecc0 & ZEXT416(uVar34 << 0x18) |
                          (auVar45 & _DAT_1000ecb0 | ~_DAT_1000ecb0 & ZEXT416((uVar34 >> 8) << 0x10)
                          ) & _DAT_1000ecc0) & _DAT_1000ecd0) & _DAT_1000ece0) & _DAT_1000ecf0) &
                          _DAT_1000ed00;
                local_78 = local_78 ^ (uVar35 << 0x38 | PF_PART8(in_XMM2, 0));
                recovered_1000e140(local_60,local_7c,&local_35,local_48,local_68,&local_c8);
                pbVar27 = pbVar25 + local_68;
                ((uint8_t *)(void *)&auVar41)[0] = -(*pbVar27 == local_c8);
                ((uint8_t *)(void *)&auVar41)[1] = -(pbVar27[1] == bStack_c7);
                ((uint8_t *)(void *)&auVar41)[2] = -(pbVar27[2] == bStack_c6);
                ((uint8_t *)(void *)&auVar41)[3] = -(pbVar27[3] == bStack_c5);
                ((uint8_t *)(void *)&auVar41)[4] = -(pbVar27[4] == bStack_c4);
                ((uint8_t *)(void *)&auVar41)[5] = -(pbVar27[5] == bStack_c3);
                ((uint8_t *)(void *)&auVar41)[6] = -(pbVar27[6] == bStack_c2);
                ((uint8_t *)(void *)&auVar41)[7] = -(pbVar27[7] == bStack_c1);
                ((uint8_t *)(void *)&auVar41)[8] = -(pbVar27[8] == bStack_c0);
                ((uint8_t *)(void *)&auVar41)[9] = -(pbVar27[9] == bStack_bf);
                ((uint8_t *)(void *)&auVar41)[10] = -(pbVar27[10] == bStack_be);
                ((uint8_t *)(void *)&auVar41)[0xb] = -(pbVar27[0xb] == bStack_bd);
                ((uint8_t *)(void *)&auVar41)[0xc] = -(pbVar27[0xc] == bStack_bc);
                ((uint8_t *)(void *)&auVar41)[0xd] = -(pbVar27[0xd] == bStack_bb);
                ((uint8_t *)(void *)&auVar41)[0xe] = -(pbVar27[0xe] == bStack_ba);
                ((uint8_t *)(void *)&auVar41)[0xf] = -(pbVar27[0xf] == bStack_b9);
                if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                            (ushort)(((uint8_t *)(void *)&auVar41)[0xf] >> 7) << 0xf) != 0xffff) {
                  pcVar31 = str_1000f349;
                  goto LAB_1000ccd4;
                }
                if (local_68 == 0) {
                  *(long *)((long)local_60 + 0x30) = *(long *)((long)local_60 + 0x30) + 1;
                  uVar35 = 0;
                  goto LAB_1000cce2;
                }
                local_98 = (long)local_58 - (long)pbVar25;
                local_88 = pbVar25 + 0x10;
                local_90 = pbVar25 + 1;
                uVar34 = 1;
                uVar43 = 0;
                do {
                  uVar35 = local_68 - uVar43;
                  if (0x3f < uVar35) {
                    uVar35 = 0x40;
                  }
                  recovered_1000e790(local_60,uVar34,local_7c,&local_108);
                  pbVar27 = local_50;
                  if (local_68 != uVar43) {
                    uVar46 = uVar35 + (uVar35 == 0);
                    if (local_68 - uVar43 < 4) {
                      uVar28 = 0;
                    }
                    else {
                      uVar28 = 0;
                      if (0x1f < local_98) {
                        if (local_68 - uVar43 < 0x20) {
                          uVar32 = 0;
                        }
                        else {
                          uVar28 = (ulong)((uint)uVar46 & 0x60);
                          uVar32 = 0;
                          do {
                            uVar19 = *(ulong *)((long)(local_88 + uVar32 + (uVar43 - 0x10)) + 8);
                            uVar21 = *(ulong *)(local_88 + uVar32 + uVar43);
                            uVar22 = *(ulong *)((long)(local_88 + uVar32 + uVar43) + 8);
                            uVar20 = *(ulong *)((long)auStack_100 + uVar32);
                            uVar23 = *(ulong *)((long)auStack_100 + uVar32 + 8);
                            uVar24 = *(ulong *)((long)auStack_100 + uVar32 + 0x10);
                            *(ulong *)(local_a0 + uVar32 + (uVar43 - 0x10)) =
                                 *(ulong *)(local_88 + uVar32 + (uVar43 - 0x10)) ^
                                 *(ulong *)((long)auStack_100 + (uVar32 - 8));
                            *(ulong *)((long)(local_a0 + uVar32 + (uVar43 - 0x10)) + 8) =
                                 uVar19 ^ uVar20;
                            *(ulong *)(local_a0 + uVar32 + uVar43) = uVar21 ^ uVar23;
                            *(ulong *)((long)(local_a0 + uVar32 + uVar43) + 8) = uVar22 ^ uVar24;
                            uVar32 = uVar32 + 0x20;
                          } while (uVar28 != uVar32);
                          if (uVar35 == uVar28) goto LAB_1000cda0;
                          uVar32 = uVar28;
                          if ((uVar46 & 0x1c) == 0) goto LAB_1000cec2;
                        }
                        uVar28 = (ulong)((uint)uVar46 & 0x7c);
                        do {
                          *(uint *)(local_58 + uVar32 + uVar43) =
                               *(uint *)((long)auStack_100 + (uVar32 - 8)) ^
                               *(uint *)(local_48 + uVar32 + uVar43);
                          uVar32 = uVar32 + 4;
                        } while (uVar28 != uVar32);
                        if (uVar35 == uVar28) goto LAB_1000cda0;
                      }
                    }
LAB_1000cec2:
                    uVar32 = uVar28;
                    if ((uVar46 & 1) != 0) {
                      local_58[uVar28 + uVar43] =
                           *(byte *)((long)auStack_100 + (uVar28 - 8)) ^ local_48[uVar28 + uVar43];
                      uVar32 = uVar28 | 1;
                    }
                    if (uVar46 != (uVar28 | 1)) {
                      do {
                        local_b0[uVar32 + (uVar43 - 1)] =
                             *(byte *)((long)auStack_100 + (uVar32 - 8)) ^
                             local_90[uVar32 + (uVar43 - 1)];
                        local_b0[uVar32 + uVar43] =
                             *(byte *)((long)auStack_100 + (uVar32 - 7)) ^ local_90[uVar32 + uVar43]
                        ;
                        uVar32 = uVar32 + 2;
                      } while (uVar35 != uVar32);
                    }
                  }
LAB_1000cda0:
                  uVar34 = uVar34 + 1;
                  uVar43 = uVar43 + uVar35;
                } while (uVar43 < local_68);
                *(long *)((long)local_60 + 0x30) = *(long *)((long)local_60 + 0x30) + 1;
                uVar29 = uVar29 - 0x11;
                do {
                  bVar11 = local_58[uVar29];
                  if (bVar11 != 0) {
                    if ((bVar11 & 0xfc) == 0x14) {
                      if (local_50 != (byte *)0x0) {
                        *local_50 = bVar11;
                      }
                      if (local_40 != (ulong *)0x0) {
                        *local_40 = uVar29;
                      }
                      uVar35 = 0;
                    }
                    else {
                      recovered_10006430(param_7,param_8,str_1000f36a);
                      uVar35 = CONCAT71((int7)(uVar35 >> 8),1);
                    }
                    break;
                  }
                  uVar35 = 0;
                  bVar37 = uVar29 != 0;
                  uVar29 = uVar29 - 1;
                } while (bVar37);
              }
              if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                 ((0xb < _DAT_00280808 &&
                  ((0x53 < _DAT_00280808 && ((code *)(ulong)_DAT_00280850 != (code *)0x0)))))) {
                (*(code *)(ulong)_DAT_00280850)(local_48);
              }
              if (pbVar27 == (byte *)0x0 || (char)uVar35 != '\0') {
                uVar35 = uVar35 ^ 1;
              }
              else {
                uVar35 = CONCAT71((int7)(uVar35 >> 8),1);
                if (((local_40 != (ulong *)0x0) && (*pbVar27 == 0)) && (*local_40 == 0))
                goto LAB_1000c960;
              }
              goto LAB_1000d196;
            }
            if (local_35 == 0x15) {
              uVar29 = 0;
              if (1 < uVar33) {
                uVar29 = (ulong)pbVar27[1];
              }
              recovered_10006430(param_7,param_8,str_1000f2a9,(ulong)*pbVar27,uVar29);
              pbVar27 = local_48;
            }
            else {
              recovered_10006430(param_7,param_8,str_1000f2d6,(ulong)local_35,(ulong)local_34,
                                 (ulong)local_33,(uint)uVar33);
              pbVar27 = local_48;
            }
            uVar35 = 0;
            if (_DAT_00280800 != 0x50414d57) goto LAB_1000d196;
            if (((_DAT_00280804 == 0) || (_DAT_00280808 < 0xc)) || (_DAT_00280808 < 0x54))
            goto LAB_1000d193;
            pcVar30 = (code *)(ulong)_DAT_00280850;
            local_48 = pbVar27;
            if (pcVar30 == (code *)0x0) goto LAB_1000d193;
          }
          (*pcVar30)(pbVar27);
          uVar35 = 0;
          goto LAB_1000d196;
        }
        if (local_70 < uVar29) {
          pcVar31 = str_1000f28a;
          goto LAB_1000d0f4;
        }
        if ((code *)param_1[1] == (code *)0x0) break;
        cVar26 = (*(code *)param_1[1])(*param_1,pbVar27,uVar29,param_7,param_8);
        if (cVar26 == '\0') goto LAB_1000d193;
        if (local_35 != 0x14) {
          if (local_35 == 0x15) {
            uVar29 = 0;
            if (1 < uVar33) {
              uVar29 = (ulong)local_58[1];
            }
            uVar35 = 0;
            recovered_10006430(param_7,param_8,str_1000f2a9,(ulong)*local_58,uVar29);
          }
          else {
            if (local_50 != (byte *)0x0) {
              *local_50 = local_35;
            }
            uVar35 = CONCAT71((int7)((ulong)pbVar27 >> 8),1);
            if (local_40 != (ulong *)0x0) {
              *local_40 = uVar29;
            }
          }
          goto LAB_1000d196;
        }
LAB_1000c960:
        pcVar30 = (code *)param_1[1];
      } while (pcVar30 != (code *)0x0);
    }
    pcVar31 = str_1000f313;
LAB_1000d0f4:
    uVar35 = 0;
    recovered_10006430(param_7,param_8,pcVar31);
  }
LAB_1000d196:
  return uVar35 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_1000eca0
#undef DAT_1000ecb0
#undef DAT_1000ecc0
#undef DAT_1000ecd0
#undef DAT_1000ece0
#undef DAT_1000ecf0
#undef DAT_1000ed00
#undef UNK_1000eca8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_1000eca0
#undef _DAT_1000ecb0
#undef _DAT_1000ecc0
#undef _DAT_1000ecd0
#undef _DAT_1000ece0
#undef _DAT_1000ecf0
#undef _DAT_1000ed00
#undef str_1000ef63
#undef str_1000f270
#undef str_1000f28a
#undef str_1000f2a9
#undef str_1000f2d6
#undef str_1000f313
#undef str_1000f334
#undef str_1000f349
#undef str_1000f36a
#undef uRam000000001000eca8
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_35
#undef local_34
#undef local_33
#undef local_32
#undef auStack_100
#undef bStack_c7
#undef bStack_c6
#undef bStack_c5
#undef bStack_c4
#undef bStack_c3
#undef bStack_c2
#undef bStack_c1
#undef bStack_c0
#undef bStack_bf
#undef bStack_be
#undef bStack_bd
#undef bStack_bc
#undef bStack_bb
#undef bStack_ba
#undef bStack_b9
#undef local_108
#undef local_c8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d1c0
 */

int recovered_1000d1c0(void *context,void *output)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((output == (void *)0x0 || context == (void *)0x0) ||
     (*(char *)((long)context + 0x21e) != '\x01')) {
    return 0;
  }
  pvVar1 = recovered_10001cc0(output,(void *)((long)context + 0x1f8),0x20);
  return (int)CONCAT71((int7)((ulong)pvVar1 >> 8),1);
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_1000ed10
#define DAT_1000ed10 (*(int *)(((uintptr_t)pf_module_state + 0x281U)))
#undef DAT_1000ed18
#define DAT_1000ed18 (*(uint *)(((uintptr_t)pf_module_state + 0x289U)))
#undef DAT_1000ed20
#define DAT_1000ed20 (*(int *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_1000ed28
#define DAT_1000ed28 (*(uint *)(((uintptr_t)pf_module_state + 0x299U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280968
#define _DAT_00280968 (*(uint *)(0x280968U))
#define local_38 (*(undefined1 (*)[56])(pf_stack_frame + 24))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_28 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000d200(undefined8 *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  pf_u104 auVar1;
  pf_u104 auVar2;
  pf_u104 auVar3;
  pf_u104 auVar4;
  ulong uVar5;
  pf_u104 auVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 uVar13;
  byte bVar14;

  recovered_100029c0(local_38,0,0x18);
  uVar12 = 0x574d544c;
  if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
      ((0x16b < _DAT_00280808 && ((code *)(ulong)_DAT_00280968 != (code *)0x0)))) &&
     (iVar8 = (*(code *)(ulong)_DAT_00280968)(local_38), iVar8 != 0)) {
    uVar12 = local_2c * 0x3c6ef35f ^ local_30 ^ local_28 * 0x19660d ^ 0x574d544c;
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  uVar12 = uVar12 ^ (uint)param_1 ^ *(uint *)(param_1 + 0x43);
  if (((code *)param_1[3] == (code *)0x0) ||
     (cVar7 = (*(code *)param_1[3])(*param_1,param_2,0x20), cVar7 == '\0')) {
    puVar11 = (undefined1 *)((long)param_2 + 1);
    lVar9 = 0;
    do {
      uVar12 = uVar12 << 0xd ^ uVar12;
      uVar12 = uVar12 >> 0x11 ^ uVar12;
      uVar12 = uVar12 << 5 ^ uVar12;
      uVar10 = uVar12 << 0xd ^ uVar12;
      puVar11[-1] = (char)(uVar12 >> ((byte)lVar9 & 0x10));
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      uVar12 = uVar10 << 5 ^ uVar10;
      *puVar11 = (char)(uVar12 >> ((byte)lVar9 + 8 & 0x18));
      lVar9 = lVar9 + 0x10;
      puVar11 = puVar11 + 2;
    } while (lVar9 != 0x100);
  }
  else {
    uVar10 = param_2[3] ^ param_2[1] ^ param_2[5] ^ param_2[7] ^
             *param_2 ^ param_2[2] ^ param_2[4] ^ param_2[6];
    bVar14 = (byte)(uVar10 >> 0x18);
    uVar13 = (undefined1)(uVar10 >> 8);
    uVar5 = (ulong)CONCAT12(uVar13,(short)uVar10) & 0xffffffffffff00ff;
    PF_PART4(auVar1, 8) = 0;
    PF_PART8(auVar1, 0) = uVar5;
    PF_PART1(auVar1,0xc) = bVar14;
    PF_PART1(auVar2,8) = (char)(uVar10 >> 0x10);
    PF_PART8(auVar2, 0) = uVar5;
    PF_PART1(auVar2,9) = 0;
    PF_PART3(auVar2, 10) = PF_PART3(auVar1, 10);
    PF_PART8(auVar6, 5) = 0;
    PF_PART5(auVar6, 0) = PF_PART5(auVar2, 8);
    PF_PART1(auVar3,4) = uVar13;
    PF_PART4(auVar3, 0) = (uint)uVar5;
    PF_PART1(auVar3,5) = 0;
    PF_PART7(auVar3, 6) = SUB137(auVar6 << 0x40,6);
    PF_PART1(auVar4,0xc) = bVar14;
    PF_PART12(auVar4, 0) = ZEXT112(bVar14) << 0x40;
    uVar12 = (uint)(((ulong)PF_PART5(auVar4, 8) & 0xffffffff) * (ulong)DAT_1000ed28) ^
             PF_PART4(auVar3, 4) * DAT_1000ed20 ^
             (uint)(((ulong)PF_PART5(auVar2, 8) & 0xffffffff) * (ulong)DAT_1000ed18) ^
             ((uint)uVar5 & 0xffff) * DAT_1000ed10 ^ uVar12;
  }
  *(uint *)(param_1 + 0x43) = uVar12;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280968
#undef DAT_1000ed10
#undef DAT_1000ed18
#undef DAT_1000ed20
#undef DAT_1000ed28
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280968
#undef local_38
#undef local_30
#undef local_2c
#undef local_28

#undef DAT_1000ed30
#define DAT_1000ed30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a1U)))
#undef UNK_1000ed38
#define UNK_1000ed38 (*(uint *)(((uintptr_t)pf_module_state + 0x2a9U)))
#undef _DAT_1000ed30
#define _DAT_1000ed30 (*(uint *)(((uintptr_t)pf_module_state + 0x2a1U)))
#undef uRam000000001000ed38
#define uRam000000001000ed38 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a9U)))
#define local_f8 (*(ulong *)(pf_stack_frame + 232))
#define local_e8 (*(ulong *)(pf_stack_frame + 248))
#define local_d8 (*(ulong *)(pf_stack_frame + 264))
#define local_c8 (*(long (*)[25])(pf_stack_frame + 280))
#define uStack_140 (*(ulong *)(pf_stack_frame + 160))
#define uStack_130 (*(ulong *)(pf_stack_frame + 176))
#define uStack_120 (*(ulong *)(pf_stack_frame + 192))
#define local_40 (*(long *)(pf_stack_frame + 416))
#define uStack_110 (*(ulong *)(pf_stack_frame + 208))
#define uStack_100 (*(ulong *)(pf_stack_frame + 224))
#define uStack_f0 (*(ulong *)(pf_stack_frame + 240))
#define uStack_e0 (*(ulong *)(pf_stack_frame + 256))
#define uStack_d0 (*(ulong *)(pf_stack_frame + 272))
#define local_188 (*(long *)(pf_stack_frame + 88))
#define local_180 (*(ulong *)(pf_stack_frame + 96))
#define local_178 (*(ulong *)(pf_stack_frame + 104))
#define local_170 (*(ulong *)(pf_stack_frame + 112))
#define local_168 (*(ulong *)(pf_stack_frame + 120))
#define local_160 (*(ulong *)(pf_stack_frame + 128))
#define local_158 (*(ulong *)(pf_stack_frame + 136))
#define local_150 (*(uint * *)(pf_stack_frame + 144))
#define local_148 (*(ulong *)(pf_stack_frame + 152))
#define auStack_1c8 (*(ulong (*)[57])(pf_stack_frame + 24))
#define local_138 (*(ulong *)(pf_stack_frame + 168))
#define local_128 (*(ulong *)(pf_stack_frame + 184))
#define uStack_190 (*(undefined8 *)(pf_stack_frame + 80))
#define local_118 (*(ulong *)(pf_stack_frame + 200))
#define local_108 (*(ulong *)(pf_stack_frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d3b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000d3b0(uint *param_1,long param_2,uint *param_3)

{
  unsigned char pf_stack_frame[512] __attribute__((aligned(16))) = {0};

  uint uVar1;
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
  ulong uVar12;
  long lVar13;

  if (param_3 != (uint *)0x0 && (param_2 != 0 && param_1 != (uint *)0x0)) {
    uStack_190 = 0x1000d404;
    local_188 = param_2;
    local_150 = param_1;
    recovered_100029c0(&local_148,0,0x110);
    local_180 = (ulong)param_3[7];
    local_178 = (ulong)param_3[8];
    local_170 = (ulong)param_3[9];
    local_168 = (ulong)param_3[10];
    local_160 = (ulong)param_3[0xb];
    local_158 = (ulong)*param_3;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    uVar4 = param_3[4];
    uVar5 = param_3[5];
    uVar6 = param_3[6];
    uVar7 = param_3[0xc];
    uVar8 = param_3[0xd];
    uVar9 = param_3[0xe];
    uVar10 = param_3[0xf];
    uVar11 = param_3[0x10];
    lVar13 = 0x10;
    do {
      uVar12 = (ulong)*(uint *)(local_188 + -0x40 + lVar13 * 4);
      auStack_1c8[lVar13] = auStack_1c8[lVar13] + local_158 * uVar12;
      auStack_1c8[lVar13 + 1] = auStack_1c8[lVar13 + 1] + uVar1 * uVar12;
      auStack_1c8[lVar13 + 2] = auStack_1c8[lVar13 + 2] + uVar2 * uVar12;
      auStack_1c8[lVar13 + 3] = auStack_1c8[lVar13 + 3] + uVar3 * uVar12;
      auStack_1c8[lVar13 + 4] = auStack_1c8[lVar13 + 4] + uVar4 * uVar12;
      auStack_1c8[lVar13 + 5] = auStack_1c8[lVar13 + 5] + uVar5 * uVar12;
      auStack_1c8[lVar13 + 6] = auStack_1c8[lVar13 + 6] + uVar6 * uVar12;
      auStack_1c8[lVar13 + 7] = auStack_1c8[lVar13 + 7] + local_180 * uVar12;
      auStack_1c8[lVar13 + 8] = auStack_1c8[lVar13 + 8] + local_178 * uVar12;
      auStack_1c8[lVar13 + 9] = auStack_1c8[lVar13 + 9] + local_170 * uVar12;
      auStack_1c8[lVar13 + 10] = auStack_1c8[lVar13 + 10] + local_168 * uVar12;
      auStack_1c8[lVar13 + 0xb] = auStack_1c8[lVar13 + 0xb] + local_160 * uVar12;
      auStack_1c8[lVar13 + 0xc] = auStack_1c8[lVar13 + 0xc] + uVar7 * uVar12;
      auStack_1c8[lVar13 + 0xd] = auStack_1c8[lVar13 + 0xd] + uVar8 * uVar12;
      auStack_1c8[lVar13 + 0xe] = auStack_1c8[lVar13 + 0xe] + uVar9 * uVar12;
      auStack_1c8[lVar13 + 0xf] = auStack_1c8[lVar13 + 0xf] + uVar10 * uVar12;
      local_c8[lVar13 + -0x10] = local_c8[lVar13 + -0x10] + uVar12 * uVar11;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x21);
    local_c8[0] = local_c8[0] + local_40 * 0x13;
    local_d8 = (((ulong)local_c8[0xf] >> 0x20) * (ulong)_DAT_1000ed30 << 0x20) +
               (local_c8[0xf] & 0xffffffffU) * (ulong)_DAT_1000ed30 + local_d8;
    uStack_d0 = (((ulong)local_c8[0x10] >> 0x20) * (ulong)uRam000000001000ed38 << 0x20) +
                (local_c8[0x10] & 0xffffffffU) * (ulong)uRam000000001000ed38 + uStack_d0;
    local_e8 = (((ulong)local_c8[0xd] >> 0x20) * (ulong)_DAT_1000ed30 << 0x20) +
               (local_c8[0xd] & 0xffffffffU) * (ulong)_DAT_1000ed30 + local_e8;
    uStack_e0 = (((ulong)local_c8[0xe] >> 0x20) * (ulong)uRam000000001000ed38 << 0x20) +
                (local_c8[0xe] & 0xffffffffU) * (ulong)uRam000000001000ed38 + uStack_e0;
    local_f8 = (((ulong)local_c8[0xb] >> 0x20) * (ulong)_DAT_1000ed30 << 0x20) +
               (local_c8[0xb] & 0xffffffffU) * (ulong)_DAT_1000ed30 + local_f8;
    uStack_f0 = (((ulong)local_c8[0xc] >> 0x20) * (ulong)uRam000000001000ed38 << 0x20) +
                (local_c8[0xc] & 0xffffffffU) * (ulong)uRam000000001000ed38 + uStack_f0;
    local_108 = (((ulong)local_c8[9] >> 0x20) * (ulong)_DAT_1000ed30 << 0x20) +
                (local_c8[9] & 0xffffffffU) * (ulong)_DAT_1000ed30 + local_108;
    uStack_100 = (((ulong)local_c8[10] >> 0x20) * (ulong)uRam000000001000ed38 << 0x20) +
                 (local_c8[10] & 0xffffffffU) * (ulong)uRam000000001000ed38 + uStack_100;
    local_118 = (((ulong)local_c8[7] >> 0x20) * (ulong)_DAT_1000ed30 << 0x20) +
                (local_c8[7] & 0xffffffffU) * (ulong)_DAT_1000ed30 + local_118;
    uStack_110 = (((ulong)local_c8[8] >> 0x20) * (ulong)uRam000000001000ed38 << 0x20) +
                 (local_c8[8] & 0xffffffffU) * (ulong)uRam000000001000ed38 + uStack_110;
    local_128 = (((ulong)local_c8[5] >> 0x20) * (ulong)_DAT_1000ed30 << 0x20) +
                (local_c8[5] & 0xffffffffU) * (ulong)_DAT_1000ed30 + local_128;
    uStack_120 = (((ulong)local_c8[6] >> 0x20) * (ulong)uRam000000001000ed38 << 0x20) +
                 (local_c8[6] & 0xffffffffU) * (ulong)uRam000000001000ed38 + uStack_120;
    local_138 = (((ulong)local_c8[3] >> 0x20) * (ulong)_DAT_1000ed30 << 0x20) +
                (local_c8[3] & 0xffffffffU) * (ulong)_DAT_1000ed30 + local_138;
    uStack_130 = (((ulong)local_c8[4] >> 0x20) * (ulong)uRam000000001000ed38 << 0x20) +
                 (local_c8[4] & 0xffffffffU) * (ulong)uRam000000001000ed38 + uStack_130;
    local_148 = (((ulong)local_c8[1] >> 0x20) * (ulong)_DAT_1000ed30 << 0x20) +
                (local_c8[1] & 0xffffffffU) * (ulong)_DAT_1000ed30 + local_148;
    uStack_140 = (((ulong)local_c8[2] >> 0x20) * (ulong)uRam000000001000ed38 << 0x20) +
                 (local_c8[2] & 0xffffffffU) * (ulong)uRam000000001000ed38 + uStack_140;
    lVar13 = 2;
    while( true ) {
      uVar12 = auStack_1c8[lVar13 + 0xe] >> 0xf;
      auStack_1c8[lVar13 + 0xe] = (ulong)((uint)auStack_1c8[lVar13 + 0xe] & 0x7fff);
      if (lVar13 == 0x12) break;
      uVar12 = uVar12 + auStack_1c8[lVar13 + 0xf];
      auStack_1c8[lVar13 + 0xf] = (ulong)((uint)uVar12 & 0x7fff);
      local_c8[lVar13 + -0x10] = local_c8[lVar13 + -0x10] + (uVar12 >> 0xf);
      lVar13 = lVar13 + 2;
    }
    local_148 = local_148 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar12 * 0x13;
    lVar13 = 2;
    while( true ) {
      uVar12 = auStack_1c8[lVar13 + 0xe] >> 0xf;
      auStack_1c8[lVar13 + 0xe] = (ulong)((uint)auStack_1c8[lVar13 + 0xe] & 0x7fff);
      if (lVar13 == 0x12) break;
      uVar12 = uVar12 + auStack_1c8[lVar13 + 0xf];
      auStack_1c8[lVar13 + 0xf] = (ulong)((uint)uVar12 & 0x7fff);
      local_c8[lVar13 + -0x10] = local_c8[lVar13 + -0x10] + (uVar12 >> 0xf);
      lVar13 = lVar13 + 2;
    }
    local_148 = local_148 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar12 * 0x13;
    lVar13 = 2;
    while( true ) {
      uVar12 = auStack_1c8[lVar13 + 0xe] >> 0xf;
      auStack_1c8[lVar13 + 0xe] = (ulong)((uint)auStack_1c8[lVar13 + 0xe] & 0x7fff);
      if (lVar13 == 0x12) break;
      uVar12 = uVar12 + auStack_1c8[lVar13 + 0xf];
      auStack_1c8[lVar13 + 0xf] = (ulong)((uint)uVar12 & 0x7fff);
      local_c8[lVar13 + -0x10] = local_c8[lVar13 + -0x10] + (uVar12 >> 0xf);
      lVar13 = lVar13 + 2;
    }
    local_148 = local_148 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar12 * 0x13;
    lVar13 = 2;
    while( true ) {
      uVar12 = auStack_1c8[lVar13 + 0xe] >> 0xf;
      auStack_1c8[lVar13 + 0xe] = (ulong)((uint)auStack_1c8[lVar13 + 0xe] & 0x7fff);
      if (lVar13 == 0x12) break;
      uVar12 = uVar12 + auStack_1c8[lVar13 + 0xf];
      auStack_1c8[lVar13 + 0xf] = (ulong)((uint)uVar12 & 0x7fff);
      local_c8[lVar13 + -0x10] = local_c8[lVar13 + -0x10] + (uVar12 >> 0xf);
      lVar13 = lVar13 + 2;
    }
    local_148 = local_148 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar12 * 0x13;
    *local_150 = (uint)local_148;
    local_150[1] = (uint)uStack_140;
    local_150[2] = (uint)local_138;
    local_150[3] = (uint)uStack_130;
    local_150[4] = (uint)local_128;
    local_150[5] = (uint)uStack_120;
    local_150[6] = (uint)local_118;
    local_150[7] = (uint)uStack_110;
    local_150[8] = (uint)local_108;
    local_150[9] = (uint)uStack_100;
    local_150[10] = (uint)local_f8;
    local_150[0xb] = (uint)uStack_f0;
    local_150[0xc] = (uint)local_e8;
    local_150[0xd] = (uint)uStack_e0;
    local_150[0xe] = (uint)local_d8;
    local_150[0xf] = (uint)uStack_d0;
    local_150[0x10] = (uint)local_c8[0];
    uStack_190 = 0x1000d955;
    recovered_1000d970(local_150);
  }
  return;
}

#undef DAT_1000ed30
#undef UNK_1000ed38
#undef _DAT_1000ed30
#undef uRam000000001000ed38
#undef local_f8
#undef local_e8
#undef local_d8
#undef local_c8
#undef uStack_140
#undef uStack_130
#undef uStack_120
#undef local_40
#undef uStack_110
#undef uStack_100
#undef uStack_f0
#undef uStack_e0
#undef uStack_d0
#undef local_188
#undef local_180
#undef local_178
#undef local_170
#undef local_168
#undef local_160
#undef local_158
#undef local_150
#undef local_148
#undef auStack_1c8
#undef local_138
#undef local_128
#undef uStack_190
#undef local_118
#undef local_108

#undef DAT_1000ee90
#define DAT_1000ee90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x401U)))
#undef DAT_1000ee94
#define DAT_1000ee94 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x405U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d970
 */

void recovered_1000d970(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (param_1 != (uint *)0x0) {
    lVar1 = 2;
    while( true ) {
      uVar2 = param_1[lVar1 + -2] >> 0xf;
      param_1[lVar1 + -2] = param_1[lVar1 + -2] & 0x7fff;
      if (lVar1 == 0x12) break;
      uVar2 = uVar2 + param_1[lVar1 + -1];
      param_1[lVar1 + -1] = uVar2 & 0x7fff;
      param_1[lVar1] = param_1[lVar1] + (uVar2 >> 0xf);
      lVar1 = lVar1 + 2;
    }
    *param_1 = *param_1 + uVar2 * 0x13;
    lVar1 = 2;
    while( true ) {
      uVar2 = param_1[lVar1 + -2] >> 0xf;
      param_1[lVar1 + -2] = param_1[lVar1 + -2] & 0x7fff;
      if (lVar1 == 0x12) break;
      uVar2 = uVar2 + param_1[lVar1 + -1];
      param_1[lVar1 + -1] = uVar2 & 0x7fff;
      param_1[lVar1] = param_1[lVar1] + (uVar2 >> 0xf);
      lVar1 = lVar1 + 2;
    }
    *param_1 = *param_1 + uVar2 * 0x13;
    lVar1 = 2;
    while( true ) {
      uVar2 = param_1[lVar1 + -2] >> 0xf;
      param_1[lVar1 + -2] = param_1[lVar1 + -2] & 0x7fff;
      if (lVar1 == 0x12) break;
      uVar2 = uVar2 + param_1[lVar1 + -1];
      param_1[lVar1 + -1] = uVar2 & 0x7fff;
      param_1[lVar1] = param_1[lVar1] + (uVar2 >> 0xf);
      lVar1 = lVar1 + 2;
    }
    *param_1 = *param_1 + uVar2 * 0x13;
    lVar1 = 2;
    while( true ) {
      uVar2 = param_1[lVar1 + -2] >> 0xf;
      param_1[lVar1 + -2] = param_1[lVar1 + -2] & 0x7fff;
      if (lVar1 == 0x12) break;
      uVar2 = uVar2 + param_1[lVar1 + -1];
      param_1[lVar1 + -1] = uVar2 & 0x7fff;
      param_1[lVar1] = param_1[lVar1] + (uVar2 >> 0xf);
      lVar1 = lVar1 + 2;
    }
    *param_1 = *param_1 + uVar2 * 0x13;
    if ((0x7fff < param_1[0x10]) ||
       ((param_1[0x10] == 0x7fff &&
        ((0x7fff < param_1[0xf] ||
         ((param_1[0xf] == 0x7fff &&
          ((0x7fff < param_1[0xe] ||
           ((param_1[0xe] == 0x7fff &&
            ((0x7fff < param_1[0xd] ||
             ((param_1[0xd] == 0x7fff &&
              ((0x7fff < param_1[0xc] ||
               ((param_1[0xc] == 0x7fff &&
                ((0x7fff < param_1[0xb] ||
                 ((param_1[0xb] == 0x7fff &&
                  ((0x7fff < param_1[10] ||
                   ((param_1[10] == 0x7fff &&
                    ((0x7fff < param_1[9] ||
                     ((param_1[9] == 0x7fff &&
                      ((0x7fff < param_1[8] ||
                       ((param_1[8] == 0x7fff &&
                        ((0x7fff < param_1[7] ||
                         ((param_1[7] == 0x7fff &&
                          ((0x7fff < param_1[6] ||
                           ((param_1[6] == 0x7fff &&
                            ((0x7fff < param_1[5] ||
                             ((param_1[5] == 0x7fff &&
                              ((0x7fff < param_1[4] ||
                               ((param_1[4] == 0x7fff &&
                                ((0x7fff < param_1[3] ||
                                 ((param_1[3] == 0x7fff &&
                                  ((0x7fff < param_1[2] ||
                                   ((param_1[2] == 0x7fff &&
                                    ((0x7fff < param_1[1] ||
                                     ((param_1[1] == 0x7fff && (0x7fec < *param_1)))))))))))))))))))
                             ))))))))))))))))))))))))))))))))))))))))))))) {
      lVar1 = 0;
      uVar2 = 0;
      while( true ) {
        uVar2 = uVar2 + (&DAT_1000ee90)[lVar1];
        uVar4 = param_1[lVar1];
        uVar3 = uVar4 + 0x8000;
        if (uVar2 <= uVar4) {
          uVar3 = uVar4;
        }
        param_1[lVar1] = uVar3 - uVar2;
        if (lVar1 == 0x10) break;
        uVar3 = (&DAT_1000ee94)[lVar1] + (uint)(uVar4 < uVar2);
        uVar2 = param_1[lVar1 + 1];
        uVar4 = uVar2 + 0x8000;
        if (uVar2 >= uVar3) {
          uVar4 = uVar2;
        }
        uVar2 = (uint)(uVar2 < uVar3);
        param_1[lVar1 + 1] = uVar4 - uVar3;
        lVar1 = lVar1 + 2;
      }
    }
  }
  return;
}

#undef DAT_1000ee90
#undef DAT_1000ee94

#undef DAT_1000ec50
#define DAT_1000ec50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef DAT_1000ec60
#define DAT_1000ec60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef UNK_1000ec58
#define UNK_1000ec58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef UNK_1000ec68
#define UNK_1000ec68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef _DAT_1000ec50
#define _DAT_1000ec50 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef _DAT_1000ec60
#define _DAT_1000ec60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef str_1000ed40
#define str_1000ed40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef uRam000000001000ec58
#define uRam000000001000ec58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef uRam000000001000ec68
#define uRam000000001000ec68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#define uStack_30 (*(uint *)(pf_stack_frame + 208))
#define uStack_2c (*(uint *)(pf_stack_frame + 212))
#define local_e8 (*(uint *)(pf_stack_frame + 24))
#define local_d8 (*(uint *)(pf_stack_frame + 40))
#define local_c8 (*(uint *)(pf_stack_frame + 56))
#define local_b8 (*(uint *)(pf_stack_frame + 72))
#define local_a8 (*(uint *)(pf_stack_frame + 88))
#define local_98 (*(uint *)(pf_stack_frame + 104))
#define local_88 (*(uint *)(pf_stack_frame + 120))
#define local_78 (*(uint *)(pf_stack_frame + 136))
#define local_68 (*(uint *)(pf_stack_frame + 152))
#define local_58 (*(uint *)(pf_stack_frame + 168))
#define local_48 (*(uint *)(pf_stack_frame + 184))
#define local_38 (*(uint *)(pf_stack_frame + 200))
#define uStack_e4 (*(uint *)(pf_stack_frame + 28))
#define uStack_e0 (*(uint *)(pf_stack_frame + 32))
#define uStack_dc (*(uint *)(pf_stack_frame + 36))
#define uStack_d4 (*(uint *)(pf_stack_frame + 44))
#define uStack_d0 (*(uint *)(pf_stack_frame + 48))
#define uStack_cc (*(uint *)(pf_stack_frame + 52))
#define uStack_c4 (*(uint *)(pf_stack_frame + 60))
#define uStack_c0 (*(uint *)(pf_stack_frame + 64))
#define uStack_bc (*(uint *)(pf_stack_frame + 68))
#define uStack_b4 (*(uint *)(pf_stack_frame + 76))
#define uStack_b0 (*(uint *)(pf_stack_frame + 80))
#define uStack_ac (*(uint *)(pf_stack_frame + 84))
#define uStack_a4 (*(uint *)(pf_stack_frame + 92))
#define uStack_a0 (*(uint *)(pf_stack_frame + 96))
#define uStack_9c (*(uint *)(pf_stack_frame + 100))
#define uStack_94 (*(uint *)(pf_stack_frame + 108))
#define uStack_90 (*(uint *)(pf_stack_frame + 112))
#define uStack_8c (*(uint *)(pf_stack_frame + 116))
#define uStack_84 (*(uint *)(pf_stack_frame + 124))
#define uStack_80 (*(uint *)(pf_stack_frame + 128))
#define uStack_7c (*(uint *)(pf_stack_frame + 132))
#define uStack_74 (*(uint *)(pf_stack_frame + 140))
#define uStack_70 (*(uint *)(pf_stack_frame + 144))
#define uStack_6c (*(uint *)(pf_stack_frame + 148))
#define uStack_64 (*(uint *)(pf_stack_frame + 156))
#define uStack_60 (*(uint *)(pf_stack_frame + 160))
#define uStack_5c (*(uint *)(pf_stack_frame + 164))
#define uStack_54 (*(uint *)(pf_stack_frame + 172))
#define uStack_50 (*(uint *)(pf_stack_frame + 176))
#define uStack_4c (*(uint *)(pf_stack_frame + 180))
#define uStack_44 (*(uint *)(pf_stack_frame + 188))
#define uStack_40 (*(uint *)(pf_stack_frame + 192))
#define uStack_3c (*(uint *)(pf_stack_frame + 196))
#define uStack_34 (*(uint *)(pf_stack_frame + 204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000dc40(void *inner,void *outer,void *key)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_100029c0(&local_68,0,0x40);
  if (key != (void *)0x0) {
    recovered_10001cc0(&local_68,key,0x20);
  }
  uVar1 = uRam000000001000ec58;
  local_e8 = local_68 ^ PF_PART4(str_1000ed40, 0);
  uStack_e4 = uStack_64 ^ PF_PART4(str_1000ed40, 4);
  uStack_e0 = uStack_60 ^ PF_PART4(str_1000ed40, 8);
  uStack_dc = uStack_5c ^ PF_PART4(str_1000ed40, 12);
  local_d8 = local_58 ^ PF_PART4(str_1000ed40, 0);
  uStack_d4 = uStack_54 ^ PF_PART4(str_1000ed40, 4);
  uStack_d0 = uStack_50 ^ PF_PART4(str_1000ed40, 8);
  uStack_cc = uStack_4c ^ PF_PART4(str_1000ed40, 12);
  local_a8 = local_68 ^ PF_PART4(str_1000ed40, 16);
  uStack_a4 = uStack_64 ^ PF_PART4(str_1000ed40, 20);
  uStack_a0 = uStack_60 ^ PF_PART4(str_1000ed40, 24);
  uStack_9c = uStack_5c ^ PF_PART4(str_1000ed40, 28);
  local_98 = local_58 ^ PF_PART4(str_1000ed40, 16);
  uStack_94 = uStack_54 ^ PF_PART4(str_1000ed40, 20);
  uStack_90 = uStack_50 ^ PF_PART4(str_1000ed40, 24);
  uStack_8c = uStack_4c ^ PF_PART4(str_1000ed40, 28);
  local_c8 = local_48 ^ PF_PART4(str_1000ed40, 0);
  uStack_c4 = uStack_44 ^ PF_PART4(str_1000ed40, 4);
  uStack_c0 = uStack_40 ^ PF_PART4(str_1000ed40, 8);
  uStack_bc = uStack_3c ^ PF_PART4(str_1000ed40, 12);
  local_b8 = PF_PART4(str_1000ed40, 0) ^ local_38;
  uStack_b4 = PF_PART4(str_1000ed40, 4) ^ uStack_34;
  uStack_b0 = PF_PART4(str_1000ed40, 8) ^ uStack_30;
  uStack_ac = PF_PART4(str_1000ed40, 12) ^ uStack_2c;
  local_88 = local_48 ^ PF_PART4(str_1000ed40, 16);
  uStack_84 = uStack_44 ^ PF_PART4(str_1000ed40, 20);
  uStack_80 = uStack_40 ^ PF_PART4(str_1000ed40, 24);
  uStack_7c = uStack_3c ^ PF_PART4(str_1000ed40, 28);
  local_78 = local_38 ^ PF_PART4(str_1000ed40, 16);
  uStack_74 = uStack_34 ^ PF_PART4(str_1000ed40, 20);
  uStack_70 = uStack_30 ^ PF_PART4(str_1000ed40, 24);
  uStack_6c = uStack_2c ^ PF_PART4(str_1000ed40, 28);
  if (inner != (void *)0x0) {
    *(undefined8 *)inner = _DAT_1000ec50;
    *(undefined8 *)((long)inner + 8) = uVar1;
    uVar1 = uRam000000001000ec68;
    *(undefined8 *)((long)inner + 0x10) = _DAT_1000ec60;
    *(undefined8 *)((long)inner + 0x18) = uVar1;
    *(undefined8 *)((long)inner + 0x20) = 0;
    *(undefined4 *)((long)inner + 0x68) = 0;
  }
  recovered_10009d40(inner,&local_e8,0x40);
  uVar1 = uRam000000001000ec58;
  if (outer != (void *)0x0) {
    *(undefined8 *)outer = _DAT_1000ec50;
    *(undefined8 *)((long)outer + 8) = uVar1;
    uVar1 = uRam000000001000ec68;
    *(undefined8 *)((long)outer + 0x10) = _DAT_1000ec60;
    *(undefined8 *)((long)outer + 0x18) = uVar1;
    *(undefined8 *)((long)outer + 0x20) = 0;
    *(undefined4 *)((long)outer + 0x68) = 0;
  }
  recovered_10009d40(outer,&local_a8,0x40);
  return;
}

#undef DAT_1000ec50
#undef DAT_1000ec60
#undef UNK_1000ec58
#undef UNK_1000ec68
#undef _DAT_1000ec50
#undef _DAT_1000ec60
#undef str_1000ed40
#undef uRam000000001000ec58
#undef uRam000000001000ec68
#undef uStack_30
#undef uStack_2c
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
#undef uStack_e4
#undef uStack_e0
#undef uStack_dc
#undef uStack_d4
#undef uStack_d0
#undef uStack_cc
#undef uStack_c4
#undef uStack_c0
#undef uStack_bc
#undef uStack_b4
#undef uStack_b0
#undef uStack_ac
#undef uStack_a4
#undef uStack_a0
#undef uStack_9c
#undef uStack_94
#undef uStack_90
#undef uStack_8c
#undef uStack_84
#undef uStack_80
#undef uStack_7c
#undef uStack_74
#undef uStack_70
#undef uStack_6c
#undef uStack_64
#undef uStack_60
#undef uStack_5c
#undef uStack_54
#undef uStack_50
#undef uStack_4c
#undef uStack_44
#undef uStack_40
#undef uStack_3c
#undef uStack_34

#undef DAT_1000eed4
#define DAT_1000eed4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x445U)))
#undef DAT_1000f1d2
#define DAT_1000f1d2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x743U)))
#define local_28 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd80
 */

void recovered_1000dd80(void *context,void *output)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;

  if (output != (void *)0x0 && context != (void *)0x0) {
    uVar3 = *(ulong *)((long)context + 0x20);
    uVar4 = uVar3 << 3;
    local_28 = (uVar3 & 0x1fffffffffffffff) >> 0x35 | (uVar4 & 0xff000000000000) >> 0x28 |
               (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
               (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
               uVar3 << 0x3b;
    recovered_10009d40(context,&DAT_1000f1d2,1);
    iVar1 = *(int *)((long)context + 0x68);
    while (iVar1 != 0x38) {
      recovered_10009d40(context,&DAT_1000eed4,1);
      iVar1 = *(int *)((long)context + 0x68);
    }
    recovered_10009d40(context,&local_28,8);
    uVar2 = *(uint *)context;
    *(uint *)output =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 4);
    *(uint *)((long)output + 4) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 8);
    *(uint *)((long)output + 8) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 0xc);
    *(uint *)((long)output + 0xc) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 0x10);
    *(uint *)((long)output + 0x10) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 0x14);
    *(uint *)((long)output + 0x14) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 0x18);
    *(uint *)((long)output + 0x18) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 0x1c);
    *(uint *)((long)output + 0x1c) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  }
  return;
}

#undef DAT_1000eed4
#undef DAT_1000f1d2
#undef local_28

#undef str_1000f1d4
#define str_1000f1d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x745U)))
#define local_218 (*(undefined1 (*)[536])(pf_stack_frame + 24))
#define local_1a8 (*(undefined1 (*)[424])(pf_stack_frame + 136))
#define local_138 (*(undefined1 (*)[312])(pf_stack_frame + 248))
#define local_118 (*(undefined1 (*)[280])(pf_stack_frame + 280))
#define local_f8 (*(undefined1 (*)[248])(pf_stack_frame + 312))
#define local_70 (*(void * *)(pf_stack_frame + 448))
#define local_68 (*(ulong *)(pf_stack_frame + 456))
#define local_60 (*(void * *)(pf_stack_frame + 464))
#define local_58 (*(ulong *)(pf_stack_frame + 472))
#define local_50 (*(ulong *)(pf_stack_frame + 480))
#define local_48 (*(void * *)(pf_stack_frame + 488))
#define local_40 (*(ulong *)(pf_stack_frame + 496))
#define local_31 (*(char *)(pf_stack_frame + 511))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de60
 */

void recovered_1000de60(void *param_1,char *param_2,void *param_3,ulong param_4,void *param_5,
                       ulong param_6)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong count;
  ulong uVar1;
  ulong uVar2;

  local_70 = param_3;
  local_68 = param_4;
  local_40 = param_6;
  uVar1 = recovered_10003760(str_1000f1d4);
  if (param_2 != (char *)0x0) {
    uVar2 = recovered_10003760(param_2);
    if ((param_5 != (void *)0x0 && param_1 != (void *)0x0) && (uVar2 + uVar1 < 0x100)) {
      local_50 = local_68 + uVar2 + uVar1 + 4;
      if (local_50 < 0x81) {
        local_58 = uVar2 + uVar1 + 4;
        local_f8[0] = (undefined1)(local_40 >> 8);
        local_f8[1] = (undefined1)local_40;
        local_f8[2] = (undefined1)(uVar2 + uVar1);
        local_60 = param_5;
        local_48 = param_1;
        recovered_10001cc0(local_f8 + 3,str_1000f1d4,uVar1);
        recovered_10001cc0(local_f8 + uVar1 + 3,param_2,uVar2);
        count = local_68;
        local_f8[uVar2 + uVar1 + 3] = (char)local_68;
        if (count == 0) {
          local_50 = local_58;
        }
        else {
          recovered_10001cc0(local_f8 + local_58,local_70,count);
        }
        local_31 = '\x01';
        if (local_40 != 0) {
          recovered_1000dc40(local_218,local_1a8,local_48);
          recovered_10009d40(local_218,local_f8,local_50);
          recovered_10009d40(local_218,&local_31,1);
          recovered_1000dd80(local_218,local_118);
          recovered_10009d40(local_1a8,local_118,0x20);
          recovered_1000dd80(local_1a8,local_138);
          uVar1 = 0x20;
          if (local_40 < 0x20) {
            uVar1 = local_40;
          }
          recovered_10001cc0(local_60,local_138,uVar1);
          local_31 = local_31 + '\x01';
          if ((local_40 < 0x21 || local_31 != '\0') && (0x20 < local_40)) {
            do {
              recovered_1000dc40(local_218,local_1a8,local_48);
              recovered_10009d40(local_218,local_138,0x20);
              recovered_10009d40(local_218,local_f8,local_50);
              recovered_10009d40(local_218,&local_31,1);
              recovered_1000dd80(local_218,local_118);
              recovered_10009d40(local_1a8,local_118,0x20);
              recovered_1000dd80(local_1a8,local_138);
              uVar2 = local_40 - uVar1;
              if (0x1f < uVar2) {
                uVar2 = 0x20;
              }
              recovered_10001cc0((void *)((long)local_60 + uVar1),local_138,uVar2);
              uVar1 = uVar2 + uVar1;
              local_31 = local_31 + '\x01';
            } while (((local_31 != '\0') || (local_40 <= uVar1)) && (uVar1 < local_40));
          }
        }
      }
    }
  }
  return;
}

#undef str_1000f1d4
#undef local_218
#undef local_1a8
#undef local_138
#undef local_118
#undef local_f8
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_31

/* Recovered TLS record authentication: padded AAD/ciphertext followed by
 * little-endian lengths, using the reference's clamped Poly1305 key.
 * Pooka's Free Software License. */
static uint32_t pf_tls_load32(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static void pf_tls_store32(uint8_t *p,uint32_t value){for(unsigned i=0;i<4;++i)p[i]=(uint8_t)(value>>(8*i));}
void recovered_1000e140(void *key,void *nonce,void *associated,void *ciphertext,unsigned long size,void *output){
 uint8_t one_time[64];recovered_1000e790(key,0,nonce,one_time);
 unsigned long padded=(size+15)&~15UL,total=padded+32;
 uint8_t *message=(uint8_t *)recovered_10001bd0(total);
 if(!message){for(unsigned i=0;i<16;++i)((uint8_t *)output)[i]=0;return;}
 for(unsigned long i=0;i<total;++i)message[i]=0;
 for(unsigned i=0;i<5;++i)message[i]=((uint8_t *)associated)[i];
 for(unsigned long i=0;i<size;++i)message[16+i]=((uint8_t *)ciphertext)[i];
 message[16+padded]=5;
 for(unsigned i=0;i<8;++i)message[24+padded+i]=(uint8_t)((uint64_t)size>>(8*i));
 uint8_t clamp[16];for(unsigned i=0;i<16;++i)clamp[i]=one_time[i];
 clamp[3]&=15;clamp[7]&=15;clamp[11]&=15;clamp[15]&=15;clamp[4]&=252;clamp[8]&=252;clamp[12]&=252;
 const uint32_t mask=0x3ffffffU;
 uint32_t r[5]={pf_tls_load32(clamp)&mask,(pf_tls_load32(clamp+3)>>2)&mask,(pf_tls_load32(clamp+6)>>4)&mask,(pf_tls_load32(clamp+9)>>6)&mask,pf_tls_load32(clamp+12)>>8};
 uint32_t h[5]={0};
 for(unsigned long offset=0;offset<total;offset+=16){
  uint8_t *p=message+offset;
  h[0]+=pf_tls_load32(p)&mask;h[1]+=(pf_tls_load32(p+3)>>2)&mask;h[2]+=(pf_tls_load32(p+6)>>4)&mask;h[3]+=(pf_tls_load32(p+9)>>6)&mask;h[4]+=(pf_tls_load32(p+12)>>8)|(1U<<24);
  uint64_t d[5]={0};
  for(unsigned i=0;i<5;++i)for(unsigned j=0;j<5;++j){unsigned index=(i+5-j)%5;uint64_t coefficient=r[index];if(j>i)coefficient*=5;d[i]+=(uint64_t)h[j]*coefficient;}
  for(unsigned i=0;i<4;++i){h[i]=(uint32_t)d[i]&mask;d[i+1]+=d[i]>>26;}
  h[4]=(uint32_t)d[4]&mask;h[0]+=(uint32_t)(d[4]>>26)*5;h[1]+=h[0]>>26;h[0]&=mask;
 }
 for(unsigned pass=0;pass<3;++pass){uint32_t carry=0;for(unsigned i=0;i<5;++i){uint32_t value=h[i]+carry;h[i]=value&mask;carry=value>>26;}h[0]+=carry*5;}
 uint32_t g[5],carry=5;
 for(unsigned i=0;i<4;++i){uint32_t value=h[i]+carry;g[i]=value&mask;carry=value>>26;}
 g[4]=h[4]+carry-(1U<<26);uint32_t select=(g[4]>>31)-1;g[4]&=mask;
 for(unsigned i=0;i<5;++i)h[i]=(h[i]&~select)|(g[i]&select);
 uint32_t words[4]={h[0]|h[1]<<26,h[1]>>6|h[2]<<20,h[2]>>12|h[3]<<14,h[3]>>18|h[4]<<8};
 uint64_t high=0;
 for(unsigned i=0;i<4;++i){uint64_t value=(uint64_t)words[i]+pf_tls_load32(one_time+16+4*i)+high;pf_tls_store32((uint8_t *)output+4*i,(uint32_t)value);high=value>>32;}
 recovered_10001c20(message);
}




#undef str_1000ed40
#define str_1000ed40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#define local_e8 (*(int (*)[58])(pf_stack_frame + 24))
#define local_d8 (*(undefined8 *)(pf_stack_frame + 40))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 56))
#define local_b8 (*(uint *)(pf_stack_frame + 72))
#define local_b4 (*(undefined8 *)(pf_stack_frame + 76))
#define local_ac (*(undefined4 *)(pf_stack_frame + 84))
#define local_a8 (*(void * *)(pf_stack_frame + 88))
#define local_9c (*(int (*)[39])(pf_stack_frame + 100))
#define acStack_e0 (*(char (*)[224])(pf_stack_frame + 32))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 64))
#define local_4c (*(uint *)(pf_stack_frame + 180))
#define local_48 (*(uint *)(pf_stack_frame + 184))
#define local_44 (*(uint *)(pf_stack_frame + 188))
#define local_40 (*(uint *)(pf_stack_frame + 192))
#define local_3c (*(uint *)(pf_stack_frame + 196))
#define local_38 (*(uint *)(pf_stack_frame + 200))
#define local_34 (*(uint *)(pf_stack_frame + 204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e790
 */

void recovered_1000e790(void *key,uint counter,void *nonce,void *output)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  *(uint64_t *)(void *)local_e8 = PF_PART8(str_1000ed40, 32);
  *(uint64_t *)(void *)acStack_e0 = PF_PART8(str_1000ed40, 40);
  local_d8 = *(undefined8 *)key;
  uStack_d0 = *(undefined8 *)((long)key + 8);
  local_c8 = *(undefined8 *)((long)key + 0x10);
  uStack_c0 = *(undefined8 *)((long)key + 0x18);
  local_b4 = *(undefined8 *)nonce;
  local_ac = *(undefined4 *)((long)nonce + 8);
  local_b8 = counter;
  local_a8 = output;
  recovered_10001cc0(local_9c + 1,local_e8,0x40);
  local_48 = local_9c[1];
  local_4c = local_9c[2];
  local_34 = local_9c[10];
  local_44 = local_9c[3];
  local_40 = local_9c[0xb];
  local_3c = local_9c[4];
  iVar5 = 10;
  local_38 = local_9c[0xc];
  do {
    local_9c[0xd] = local_9c[0xd] ^ local_48 + local_9c[5];
    uVar8 = local_9c[0xd] << 0x10 | (uint)local_9c[0xd] >> 0x10;
    local_9c[9] = local_9c[9] + uVar8;
    uVar2 = local_9c[5] ^ local_9c[9];
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_48 = local_48 + local_9c[5] + uVar2;
    uVar8 = uVar8 ^ local_48;
    uVar9 = uVar8 << 8 | uVar8 >> 0x18;
    local_9c[9] = local_9c[9] + uVar9;
    uVar2 = uVar2 ^ local_9c[9];
    uVar8 = uVar2 << 7 | uVar2 >> 0x19;
    local_9c[0xe] = local_9c[0xe] ^ local_4c + local_9c[6];
    uVar3 = local_9c[0xe] << 0x10 | (uint)local_9c[0xe] >> 0x10;
    local_34 = local_34 + uVar3;
    uVar2 = local_9c[6] ^ local_34;
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_4c = local_4c + local_9c[6] + uVar2;
    uVar3 = uVar3 ^ local_4c;
    uVar3 = uVar3 << 8 | uVar3 >> 0x18;
    local_34 = local_34 + uVar3;
    uVar2 = uVar2 ^ local_34;
    uVar2 = uVar2 << 7 | uVar2 >> 0x19;
    local_9c[0xf] = local_9c[0xf] ^ local_44 + local_9c[7];
    uVar6 = local_9c[0xf] << 0x10 | (uint)local_9c[0xf] >> 0x10;
    local_40 = local_40 + uVar6;
    uVar4 = local_9c[7] ^ local_40;
    uVar4 = uVar4 << 0xc | uVar4 >> 0x14;
    local_44 = local_44 + local_9c[7] + uVar4;
    uVar6 = uVar6 ^ local_44;
    uVar6 = uVar6 << 8 | uVar6 >> 0x18;
    local_40 = local_40 + uVar6;
    uVar4 = uVar4 ^ local_40;
    uVar4 = uVar4 << 7 | uVar4 >> 0x19;
    local_9c[0x10] = local_9c[0x10] ^ local_3c + local_9c[8];
    uVar7 = local_9c[0x10] << 0x10 | (uint)local_9c[0x10] >> 0x10;
    local_38 = local_38 + uVar7;
    uVar10 = local_9c[8] ^ local_38;
    uVar10 = uVar10 << 0xc | uVar10 >> 0x14;
    local_3c = local_3c + local_9c[8] + uVar10;
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
    local_9c[0x10] = uVar7 << 8 | uVar7 >> 0x18;
    local_40 = local_40 + local_9c[0x10];
    uVar2 = uVar2 ^ local_40;
    local_9c[6] = uVar2 << 7 | uVar2 >> 0x19;
    local_4c = local_4c + uVar4;
    uVar9 = uVar9 ^ local_4c;
    uVar7 = uVar9 << 0x10 | uVar9 >> 0x10;
    local_38 = local_38 + uVar7;
    uVar4 = uVar4 ^ local_38;
    uVar2 = uVar4 << 0xc | uVar4 >> 0x14;
    local_4c = local_4c + uVar2;
    uVar7 = uVar7 ^ local_4c;
    local_9c[0xd] = uVar7 << 8 | uVar7 >> 0x18;
    local_38 = local_38 + local_9c[0xd];
    uVar2 = uVar2 ^ local_38;
    local_9c[7] = uVar2 << 7 | uVar2 >> 0x19;
    local_44 = local_44 + uVar10;
    uVar3 = uVar3 ^ local_44;
    uVar2 = uVar3 << 0x10 | uVar3 >> 0x10;
    local_9c[9] = local_9c[9] + uVar2;
    uVar10 = uVar10 ^ local_9c[9];
    uVar3 = uVar10 << 0xc | uVar10 >> 0x14;
    local_44 = local_44 + uVar3;
    uVar2 = uVar2 ^ local_44;
    local_9c[0xe] = uVar2 << 8 | uVar2 >> 0x18;
    local_9c[9] = local_9c[9] + local_9c[0xe];
    uVar3 = uVar3 ^ local_9c[9];
    local_9c[8] = uVar3 << 7 | uVar3 >> 0x19;
    local_3c = local_3c + uVar8;
    uVar6 = uVar6 ^ local_3c;
    uVar3 = uVar6 << 0x10 | uVar6 >> 0x10;
    local_34 = local_34 + uVar3;
    uVar8 = uVar8 ^ local_34;
    uVar2 = uVar8 << 0xc | uVar8 >> 0x14;
    local_3c = local_3c + uVar2;
    uVar3 = uVar3 ^ local_3c;
    local_9c[0xf] = uVar3 << 8 | uVar3 >> 0x18;
    local_34 = local_34 + local_9c[0xf];
    uVar2 = uVar2 ^ local_34;
    local_9c[5] = uVar2 << 7 | uVar2 >> 0x19;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_9c[1] = local_48;
  local_9c[2] = local_4c;
  local_9c[10] = local_34;
  local_9c[3] = local_44;
  local_9c[0xb] = local_40;
  local_9c[4] = local_3c;
  local_9c[0xc] = local_38;
  lVar1 = 1;
  do {
    *(int *)((long)local_a8 + lVar1 * 4 + -4) = local_e8[lVar1 + -1] + local_9c[lVar1];
    *(int *)((long)local_a8 + lVar1 * 4) = local_e8[lVar1] + local_9c[lVar1 + 1];
    lVar1 = lVar1 + 2;
  } while (lVar1 != 0x11);
  return;
}

#undef str_1000ed40
#undef local_e8
#undef local_d8
#undef local_c8
#undef local_b8
#undef local_b4
#undef local_ac
#undef local_a8
#undef local_9c
#undef acStack_e0
#undef uStack_d0
#undef uStack_c0
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
