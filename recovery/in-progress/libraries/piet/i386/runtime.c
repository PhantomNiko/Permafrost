/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000f39c
#define DAT_1000f39c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1086U)))
#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000820
 */

/* WARNING: Removing unreachable block (ram,0x1000085c) */

void recovered_10000820(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000f39c = 0;
    recovered_10000880();
    DAT_1000f3a4 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000f39c
#undef DAT_1000f3a4

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1000f39c
#define DAT_1000f39c (*(char *)(((uintptr_t)pf_module_state + 0x1086U)))
#undef DAT_1000f3a0
#define DAT_1000f3a0 (*(int *)(((uintptr_t)pf_module_state + 0x108aU)))
#undef DAT_1000f3a8
#define DAT_1000f3a8 (*(int *)(((uintptr_t)pf_module_state + 0x1092U)))
#undef _DAT_00280088
#define _DAT_00280088 (*(uint *)(0x280088U))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
#define local_90 (*(ulong *)(pf_stack_frame + 32))
#define local_8c (*(uint (*)[35])(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000880
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000880(void)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulong size;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;

  local_9c[0] = 0;
  if (DAT_1000f39c != '\0') {
    return;
  }
  DAT_1000f3a0 = 0;
  DAT_1000f3a8 = 0;
  local_9c[1] = 0x10;
  if (_DAT_0028008c < 0x10) {
    local_9c[1] = _DAT_0028008c;
  }
  if (_DAT_0028008c != 0) {
    uVar8 = 0;
    uVar4 = 0;
    do {
      uVar5 = *(uint *)(&DAT_00280090 + uVar4 * 8);
      uVar1 = *(uint *)(&DAT_00280094 + uVar4 * 8);
      bVar11 = CARRY4(uVar1,uVar5);
      uVar6 = uVar1 + uVar5;
      if ((uVar6 < 0x300001) <= bVar11 && uVar1 != 0) {
        if (uVar5 < 0x300001) {
          uVar5 = 0x300000;
        }
        if (((uVar8 < 0x10) && (!bVar11)) && (uVar5 <= uVar6)) {
          uVar2 = 0;
          uVar1 = uVar8;
          if (uVar8 != 0) {
            do {
              uVar2 = uVar1;
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_100008eb;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_100008eb:
          local_9c[uVar2 * 2 + 2] = uVar5;
          local_9c[uVar2 * 2 + 3] = uVar6 - uVar5;
          uVar8 = uVar8 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != local_9c[1]);
    if (uVar8 != 0) {
      iVar10 = 1;
      if (uVar8 != 1) {
        iVar9 = uVar8 - 1;
        puVar3 = local_8c;
        iVar10 = 1;
        do {
          uVar4 = local_9c[iVar10 * 2 + 1] + local_9c[iVar10 * 2];
          if (uVar4 < *puVar3) {
            uVar4 = *puVar3;
            local_9c[iVar10 * 2 + 3] = puVar3[1];
            local_9c[iVar10 * 2 + 2] = uVar4;
            iVar10 = iVar10 + 1;
          }
          else {
            uVar8 = *puVar3 + puVar3[1];
            if (uVar4 < uVar8) {
              local_9c[iVar10 * 2 + 1] = uVar8 - local_9c[iVar10 * 2];
            }
          }
          puVar3 = puVar3 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if (iVar10 == 0) goto LAB_10000a40;
      }
      puVar7 = &local_90;
      do {
        recovered_10004be0(puVar7[-1],*puVar7,local_9c);
        puVar7 = puVar7 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (DAT_1000f3a0 != 0) goto LAB_10000a7b;
    }
  }
LAB_10000a40:
  uVar4 = 0x4000000;
  if (0x300000 < _DAT_00280088) {
    uVar4 = _DAT_00280088 & 0xfffffff0;
  }
  size = 0x3d00000;
  if (0x300020 < uVar4) {
    size = uVar4 - 0x300000;
  }
  recovered_10004be0(0x300000,size,local_9c);
LAB_10000a7b:
  if (DAT_1000f3a8 == 0) {
    DAT_1000f3a8 = DAT_1000f3a0;
  }
  DAT_1000f39c = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1000f39c
#undef DAT_1000f3a0
#undef DAT_1000f3a8
#undef _DAT_00280088
#undef _DAT_0028008c
#undef local_9c
#undef local_90
#undef local_8c

#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000aa0
 */

/* WARNING: Removing unreachable block (ram,0x10000aec) */

bool recovered_10000aa0(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10000b10(addresses,sizes,count);
    DAT_1000f3a4 = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000f3a4

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000f3a0
#define DAT_1000f3a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x108aU)))
#undef DAT_1000f3a8
#define DAT_1000f3a8 (*(int * *)(((uintptr_t)pf_module_state + 0x1092U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b10
 */

bool recovered_10000b10(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  bool bVar13;

  uVar12 = 0;
  bVar13 = false;
  if (count != 0 && (sizes != (ulong *)0x0 && addresses != (ulong *)0x0)) {
    recovered_10000880();
    local_18 = DAT_1000f3a0;
    do {
      piVar6 = (int *)addresses[uVar12];
      uVar3 = sizes[uVar12];
      piVar7 = (int *)((int)piVar6 + uVar3);
      if (CARRY4((uint)piVar6,uVar3)) {
        piVar7 = (int *)0xffffffff;
      }
      if (~(uint)piVar6 < uVar3) {
        return false;
      }
      if (piVar7 <= piVar6) {
        return false;
      }
      if (piVar6 < (int *)0x10000000 && (int *)0x8000000 < piVar7) {
        if (piVar6 < (int *)0x8000000) {
          uVar3 = 0x8000000 - (int)piVar6;
          if (~(uint)piVar6 < uVar3) {
            return false;
          }
          uVar9 = ((uint)((int)piVar6 + 0xf) & 0xffffff0) - (int)piVar6;
          uVar4 = uVar3 - uVar9;
          if (uVar3 < uVar9 || uVar4 == 0) goto LAB_10000c10;
          bVar13 = 0x20 < (uVar4 & 0xfffffff0);
        }
        else {
LAB_10000c10:
          bVar13 = false;
        }
        if ((piVar7 < &DAT_10000001 || 0xffffffde < ((uint)piVar7 & 0xfffffff0) + 0xefffffdf) &&
           (!bVar13)) {
          return false;
        }
      }
      else {
        if ((int *)0xfffffff0 < piVar6) {
          return false;
        }
        uVar4 = ((uint)((int)piVar6 + 0xf) & 0xfffffff0) - (int)piVar6;
        uVar9 = uVar3 - uVar4;
        if (uVar3 < uVar4 || uVar9 == 0) {
          return false;
        }
        if ((uVar9 & 0xfffffff0) < 0x21) {
          return false;
        }
      }
      piVar2 = DAT_1000f3a0;
      if (uVar12 != 0) {
        uVar5 = 0;
        do {
          piVar11 = (int *)addresses[uVar5];
          piVar10 = (int *)(sizes[uVar5] + (int)piVar11);
          if (CARRY4(sizes[uVar5],(uint)piVar11)) {
            piVar10 = (int *)0xffffffff;
          }
          if ((piVar11 < piVar7) && (piVar6 < piVar10)) {
            return false;
          }
          uVar5 = uVar5 + 1;
        } while (uVar12 != uVar5);
      }
      for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        piVar11 = (int *)(*piVar2 + 0x10U + (int)piVar2);
        if (CARRY4(*piVar2 + 0x10U,(uint)piVar2)) {
          piVar11 = (int *)0xffffffff;
        }
        if ((piVar2 < piVar7) && (piVar6 < piVar11)) {
          return false;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != count);
    piVar6 = (int *)&DAT_1000f3a0;
    iVar1 = 0;
    do {
      iVar8 = iVar1;
      iVar1 = *piVar6;
      piVar6 = (int *)(iVar1 + 4);
    } while (iVar1 != 0);
    uVar12 = 0;
    local_1c = iVar8;
    do {
      recovered_10004be0(addresses[uVar12],sizes[uVar12],&local_1c);
      uVar12 = uVar12 + 1;
    } while (count != uVar12);
    if (DAT_1000f3a8 == (int *)0x0) {
      DAT_1000f3a8 = DAT_1000f3a0;
    }
    bVar13 = local_1c != iVar8;
  }
  return bVar13;
}

#undef DAT_10000001
#undef DAT_1000f3a0
#undef DAT_1000f3a8
#undef local_1c
#undef local_18

#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
#define local_24 (*(ulong *)(pf_stack_frame + 28))
#define local_20 (*(ulong (*)[8])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d50
 */

/* WARNING: Removing unreachable block (ram,0x10000d9c) */

bool recovered_10000d50(ulong address,ulong size)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_1000f3a4;
  local_20[0] = address;
  local_24 = size;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10000b10(local_20,&local_24,1);
    DAT_1000f3a4 = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000f3a4
#undef local_24
#undef local_20

#undef DAT_1000f3a0
#define DAT_1000f3a0 (*(int * *)(((uintptr_t)pf_module_state + 0x108aU)))
#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dd0
 */

/* WARNING: Removing unreachable block (ram,0x10000e0c) */

uint recovered_10000dd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int *piVar3;

  iVar1 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000880();
  uVar2 = 0;
  for (piVar3 = DAT_1000f3a0; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if ((char)piVar3[3] == '\x01') {
      uVar2 = uVar2 + *piVar3;
    }
  }
  DAT_1000f3a4 = 0;
  return uVar2;
}

#undef DAT_1000f3a0
#undef DAT_1000f3a4

#undef DAT_1000f3a0
#define DAT_1000f3a0 (*(uint * *)(((uintptr_t)pf_module_state + 0x108aU)))
#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e50
 */

/* WARNING: Removing unreachable block (ram,0x10000e8c) */

ulonglong recovered_10000e50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  recovered_10000880();
  uVar1 = 0;
  iVar3 = 0;
  for (puVar2 = DAT_1000f3a0; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[1]) {
    if ((char)puVar2[3] == '\x01') {
      bVar4 = CARRY4(uVar1,*puVar2);
      uVar1 = uVar1 + *puVar2;
      iVar3 = iVar3 + (uint)bVar4;
    }
  }
  DAT_1000f3a4 = 0;
  return CONCAT44(iVar3,uVar1);
}

#undef DAT_1000f3a0
#undef DAT_1000f3a4

#undef DAT_1000f3a0
#define DAT_1000f3a0 (*(int * *)(((uintptr_t)pf_module_state + 0x108aU)))
#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ed0
 */

/* WARNING: Removing unreachable block (ram,0x10000f0c) */

uint recovered_10000ed0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint uVar3;

  iVar2 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000880();
  uVar3 = 0;
  for (piVar1 = DAT_1000f3a0; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    uVar3 = uVar3 + *piVar1;
  }
  DAT_1000f3a4 = 0;
  return uVar3;
}

#undef DAT_1000f3a0
#undef DAT_1000f3a4

#undef DAT_1000f3a0
#define DAT_1000f3a0 (*(uint * *)(((uintptr_t)pf_module_state + 0x108aU)))
#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f40
 */

/* WARNING: Removing unreachable block (ram,0x10000f7c) */

ulonglong recovered_10000f40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  recovered_10000880();
  uVar2 = 0;
  iVar3 = 0;
  for (puVar1 = DAT_1000f3a0; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
    bVar4 = CARRY4(uVar2,*puVar1);
    uVar2 = uVar2 + *puVar1;
    iVar3 = iVar3 + (uint)bVar4;
  }
  DAT_1000f3a4 = 0;
  return CONCAT44(iVar3,uVar2);
}

#undef DAT_1000f3a0
#undef DAT_1000f3a4

#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fc0
 */

/* WARNING: Removing unreachable block (ram,0x1000100c) */

void * recovered_10000fc0(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    pvVar2 = recovered_10001030(size,0,0xffffffff);
    DAT_1000f3a4 = 0;
    return pvVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000f3a4

#undef DAT_1000f3a0
#define DAT_1000f3a0 (*(uint * *)(((uintptr_t)pf_module_state + 0x108aU)))
#undef DAT_1000f3a8
#define DAT_1000f3a8 (*(uint * *)(((uintptr_t)pf_module_state + 0x1092U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001030
 */

void * recovered_10001030(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *chunk;
  uint *first_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  if (0xf < size + 0xf) {
    recovered_10000880();
    puVar3 = DAT_1000f3a0;
    puVar4 = DAT_1000f3a8;
    if (DAT_1000f3a8 == (uint *)0x0) {
      puVar4 = DAT_1000f3a0;
    }
    if (puVar4 != (uint *)0x0) {
      uVar7 = size + 0xf & 0xfffffff0;
      puVar5 = (uint *)(first + 0xf & 0xfffffff0);
      chunk = puVar4;
      do {
        if (((char)chunk[3] == '\x01') && (uVar8 = *chunk, uVar7 <= uVar8)) {
          puVar1 = chunk + 4;
          uVar6 = 0;
          first_00 = puVar1;
          if (puVar1 < first) {
            if ((first < 0xfffffff1) && (puVar1 < (uint *)0xffffffe0)) {
              first_00 = puVar5;
              if (puVar5 <= chunk + 0xc) {
                first_00 = chunk + 0xc;
              }
              uVar6 = (int)first_00 - (int)puVar1;
              if (uVar6 < uVar8) goto LAB_10001112;
            }
          }
          else {
LAB_10001112:
            if ((uVar7 - 1 <= last - (int)first_00 && first_00 <= last) &&
               (uVar7 <= uVar8 - uVar6 && uVar6 <= uVar8)) {
              if (uVar7 - 1 < uVar8) {
                bVar2 = 0xffffffef < uVar8;
                if ((uint)(uVar8 - uVar7 < 0x20) <= -(uint)(uVar8 < uVar7)) {
                  bVar2 = 0xffffffdf < uVar7;
                }
                if (!bVar2) {
                  if (uVar6 == 0) {
LAB_100011f4:
                    if ((bool)(~(uVar8 < uVar7) & 0x1f < uVar8 - uVar7)) {
                      DAT_1000f3a8 = (uint *)((int)chunk + uVar7 + 0x10);
                      *(uint *)((int)chunk + uVar7 + 0x10) = (uVar8 - uVar7) - 0x10;
                      uVar8 = chunk[1];
                      *(uint *)((int)chunk + uVar7 + 0x14) = uVar8;
                      *(uint **)((int)chunk + uVar7 + 0x18) = chunk;
                      *(undefined1 *)((int)chunk + uVar7 + 0x1c) = 1;
                      if (uVar8 != 0) {
                        *(uint **)(uVar8 + 8) = DAT_1000f3a8;
                      }
                      *chunk = uVar7;
                      chunk[1] = (uint)DAT_1000f3a8;
                    }
                    else {
                      DAT_1000f3a8 = (uint *)chunk[1];
                    }
                    *(undefined1 *)(chunk + 3) = 0;
                    if (DAT_1000f3a8 == (uint *)0x0) {
                      DAT_1000f3a8 = DAT_1000f3a0;
                    }
                    return chunk + 4;
                  }
                  if ((uVar6 - 1) + uVar7 < uVar8) {
                    uVar6 = uVar6 + uVar7;
                    bVar2 = 0xffffffdf < uVar6;
                    if (-(uint)(uVar8 < uVar6) < (uint)(uVar8 - uVar6 < 0x20)) {
                      bVar2 = 0xffffffef < uVar8;
                    }
                    if (!bVar2) {
                      chunk = recovered_10004d80(chunk,(ulong)first_00);
                      if (chunk == (uint *)0x0) {
                        return (void *)0x0;
                      }
                      uVar8 = *chunk;
                      goto LAB_100011f4;
                    }
                  }
                }
              }
              *(undefined1 *)(chunk + 3) = 0;
            }
          }
        }
        puVar1 = chunk + 1;
        chunk = puVar3;
        if ((uint *)*puVar1 != (uint *)0x0) {
          chunk = (uint *)*puVar1;
        }
        if (chunk == (uint *)0x0) {
          return (void *)0x0;
        }
        if (chunk == puVar4) {
          return (void *)0x0;
        }
      } while( true );
    }
  }
  return (void *)0x0;
}

#undef DAT_1000f3a0
#undef DAT_1000f3a8

#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001260
 */

/* WARNING: Removing unreachable block (ram,0x100012ac) */

void * recovered_10001260(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    pvVar2 = recovered_10001030(size,0,limit);
    DAT_1000f3a4 = 0;
    return pvVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000f3a4

#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012d0
 */

/* WARNING: Removing unreachable block (ram,0x1000131c) */

void * recovered_100012d0(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  pvVar2 = (void *)0x0;
  if (first <= last) {
    pvVar2 = recovered_10001030(size,first,last);
  }
  DAT_1000f3a4 = 0;
  return pvVar2;
}

#undef DAT_1000f3a4

#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001340
 */

/* WARNING: Removing unreachable block (ram,0x1000138c) */

void recovered_10001340(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_100013b0(pointer);
    DAT_1000f3a4 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000f3a4

#undef DAT_1000f3a8
#define DAT_1000f3a8 (*(uint * *)(((uintptr_t)pf_module_state + 0x1092U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013b0
 */

void recovered_100013b0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;

  if (pointer == (void *)0x0) {
    return;
  }
  recovered_10000880();
  puVar2 = (uint *)((int)pointer + -0x10);
  *(undefined1 *)((int)pointer + -4) = 1;
  puVar3 = *(uint **)((int)pointer + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)((int)pointer + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_1000f3a8 == puVar3) {
        DAT_1000f3a8 = puVar2;
      }
      *(uint *)((int)pointer + -0x10) = uVar4;
      puVar3 = (uint *)puVar3[1];
      *(uint **)((int)pointer + -0xc) = puVar3;
      if ((puVar3 == (uint *)0x0) || (puVar3[2] = (uint)puVar2, (char)puVar3[3] == '\0')) break;
    }
  }
  puVar3 = *(uint **)((int)pointer + -8);
  if (puVar3 != (uint *)0x0) {
    if ((char)puVar3[3] != '\x01') {
      DAT_1000f3a8 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_1000f3a8 = puVar2;
      return;
    }
    puVar2 = (uint *)puVar3[1];
    if ((puVar2 != (uint *)0x0) && ((char)puVar2[3] == '\x01')) {
      do {
        if ((0xffffffef < uVar4) ||
           (((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2 || (-uVar4 - 0x11 < *puVar2)))) break;
        uVar4 = uVar4 + 0x10 + *puVar2;
        *puVar3 = uVar4;
        puVar1 = (uint *)puVar2[1];
        puVar3[1] = (uint)puVar1;
        if (puVar1 == (uint *)0x0) break;
        if (DAT_1000f3a8 == puVar2) {
          DAT_1000f3a8 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_1000f3a8 = puVar2;
  return;
}

#undef DAT_1000f3a8

#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)(((uintptr_t)pf_module_state + 0x108eU)))
#undef DAT_1000f3a8
#define DAT_1000f3a8 (*(uint * *)(((uintptr_t)pf_module_state + 0x1092U)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014d0
 */

/* WARNING: Removing unreachable block (ram,0x1000151c) */

void * recovered_100014d0(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint *chunk;
  undefined1 uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  uint *puVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint size_00;
  undefined4 *puVar14;

  iVar3 = DAT_1000f3a4;
  { __typeof__(DAT_1000f3a4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f3a4),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  if (pointer == (void *)0x0) {
    pvVar7 = recovered_10001030(size,0,0xffffffff);
    DAT_1000f3a4 = 0;
    return pvVar7;
  }
  if (size == 0) {
    recovered_100013b0(pointer);
    DAT_1000f3a4 = 0;
    return (void *)0x0;
  }
  if (0xfffffff0 < size) {
    DAT_1000f3a4 = 0;
    return (void *)0x0;
  }
  recovered_10000880();
  size_00 = size + 0xf & 0xfffffff0;
  chunk = (uint *)((int)pointer + -0x10);
  uVar12 = *(uint *)((int)pointer + -0x10);
  if (size_00 <= uVar12) {
    if (uVar12 <= size_00 - 1) {
      DAT_1000f3a4 = 0;
      return (void *)0x0;
    }
    uVar8 = uVar12 - size_00;
    bVar5 = 0xffffffdf < size_00;
    if (-(uint)(uVar12 < size_00) < (uint)(uVar8 < 0x20)) {
      bVar5 = 0xffffffef < uVar12;
    }
    if (!bVar5) {
      if (uVar8 < 0x20) {
        DAT_1000f3a4 = 0;
        return pointer;
      }
      DAT_1000f3a8 = (uint *)((int)pointer + size_00);
      *(uint *)((int)pointer + size_00) = uVar8 - 0x10;
      iVar3 = *(int *)((int)pointer + -0xc);
      *(int *)((int)pointer + size_00 + 4) = iVar3;
      *(uint **)((int)pointer + size_00 + 8) = chunk;
      *(undefined1 *)((int)pointer + size_00 + 0xc) = 1;
      if (iVar3 != 0) {
        *(uint **)(iVar3 + 8) = DAT_1000f3a8;
      }
      *(uint *)((int)pointer + -0x10) = size_00;
      *(uint **)((int)pointer + -0xc) = DAT_1000f3a8;
      DAT_1000f3a4 = 0;
      return pointer;
    }
    DAT_1000f3a4 = 0;
    return (void *)0x0;
  }
  puVar6 = chunk;
  uVar8 = uVar12;
  uVar11 = uVar12;
  do {
    puVar2 = (uint *)puVar6[1];
    if ((((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) || (0xffffffef < uVar8)) ||
       (((uint *)((int)puVar6 + uVar11 + 0x10) != puVar2 ||
        (uVar11 = *puVar2, -uVar8 - 0x11 < uVar11)))) break;
    uVar8 = uVar8 + 0x10 + uVar11;
    puVar6 = puVar2;
  } while (uVar8 < size_00);
  if (size_00 - 1 < uVar8) {
    bVar5 = 0xffffffdf < size_00;
    if (-(uint)(uVar8 < size_00) < (uint)(uVar8 - size_00 < 0x20)) {
      bVar5 = 0xffffffef < uVar8;
    }
    if (!bVar5) {
      local_20 = DAT_1000f3a8;
      puVar6 = *(uint **)((int)pointer + -0xc);
      do {
        if (((puVar6 == (uint *)0x0) || ((char)puVar6[3] != '\x01')) ||
           ((0xffffffef < uVar12 ||
            (((uint *)(uVar12 + (int)pointer) != puVar6 || (-uVar12 - 0x11 < *puVar6)))))) break;
        if (local_20 == puVar6) {
          local_20 = chunk;
          DAT_1000f3a8 = chunk;
        }
        uVar12 = uVar12 + 0x10 + *puVar6;
        *(uint *)((int)pointer + -0x10) = uVar12;
        puVar6 = (uint *)puVar6[1];
        *(uint **)((int)pointer + -0xc) = puVar6;
        if (puVar6 != (uint *)0x0) {
          puVar6[2] = (uint)chunk;
        }
      } while (uVar12 < size_00);
      if (uVar12 < size_00) {
        DAT_1000f3a4 = 0;
        return (void *)0x0;
      }
      bVar5 = recovered_10004de0(chunk,size_00);
      if (bVar5) {
        DAT_1000f3a8 = *(uint **)((int)pointer + -0xc);
      }
      *(undefined1 *)((int)pointer + -4) = 0;
      DAT_1000f3a4 = 0;
      return pointer;
    }
  }
  puVar9 = recovered_10001030(size_00,0,0xffffffff);
  if (puVar9 == (undefined4 *)0x0) {
    DAT_1000f3a4 = 0;
    return (void *)0x0;
  }
  if (*chunk < size_00) {
    size_00 = *chunk;
  }
  puVar10 = pointer;
  puVar14 = puVar9;
  if (size_00 < 8) {
LAB_10001745:
    if (size_00 == 0) goto LAB_1000175c;
  }
  else if ((((uint)puVar9 ^ (uint)pointer) & 3) == 0) {
    if (((uint)puVar9 & 3) != 0) {
      puVar13 = puVar9;
      do {
        puVar13 = (undefined4 *)((int)puVar13 + 1);
        uVar1 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        *(undefined1 *)puVar14 = uVar1;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
        bVar5 = size_00 == 1;
        size_00 = size_00 - 1;
        if (bVar5) break;
      } while (((uint)puVar13 & 3) != 0);
    }
    for (; 0xf < size_00; size_00 = size_00 - 0x10) {
      *puVar14 = *puVar10;
      puVar14[1] = puVar10[1];
      puVar14[2] = puVar10[2];
      puVar14[3] = puVar10[3];
      puVar10 = puVar10 + 4;
      puVar14 = puVar14 + 4;
    }
    while( true ) {
      if (size_00 < 4) break;
      uVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      *puVar14 = uVar4;
      puVar14 = puVar14 + 1;
      size_00 = size_00 - 4;
    }
    goto LAB_10001745;
  }
  uVar12 = 0;
  do {
    *(undefined1 *)((int)puVar14 + uVar12) = *(undefined1 *)((int)puVar10 + uVar12);
    uVar12 = uVar12 + 1;
  } while (size_00 != uVar12);
LAB_1000175c:
  recovered_100013b0(pointer);
  DAT_1000f3a4 = 0;
  return puVar9;
}

#undef DAT_1000f3a4
#undef DAT_1000f3a8
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001870
 */

undefined8 recovered_10001870(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar3 = param_2;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    if (0x3f < param_3) goto LAB_100018ab;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_100018ab;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_100018ab:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018c0
 */

undefined8 recovered_100018c0(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar1 = param_1;
    uVar3 = param_2;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        uVar1 = param_1 >> (bVar2 & 0x1f) | param_2 << 0x20 - (bVar2 & 0x1f);
        uVar3 = param_2 >> (bVar2 & 0x1f);
      }
      else {
        uVar1 = param_2 >> (bVar2 & 0x1f);
        uVar3 = 0;
      }
    }
  }
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001910
 */

undefined8 recovered_10001910(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  uVar2 = param_2;
  if (0 < (int)param_3) {
    uVar2 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        param_1 = param_1 >> (bVar1 & 0x1f) | param_2 << 0x20 - (bVar1 & 0x1f);
        uVar2 = (int)param_2 >> (bVar1 & 0x1f);
      }
      else {
        param_1 = (int)param_2 >> (bVar1 & 0x1f);
      }
    }
    else {
      param_1 = uVar2;
    }
  }
  return CONCAT44(uVar2,param_1);
}


#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001950
 */

undefined8 recovered_10001950(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;

  if (param_3 == 0 && param_4 == 0) {
    uVar1 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = 0x3f;
    uVar9 = 0;
    iVar10 = 0;
    uVar1 = 0;
    uVar5 = 0;
    do {
      bVar3 = (byte)uVar4;
      uVar2 = 1 << (bVar3 & 0x1f);
      uVar7 = uVar2;
      if ((uVar4 & 0x20) != 0) {
        uVar7 = 0;
      }
      uVar8 = 0 << (bVar3 & 0x1f) | 1U >> 0x20 - (bVar3 & 0x1f);
      if ((uVar4 & 0x20) != 0) {
        uVar8 = uVar2;
      }
      uVar2 = param_2 >> (bVar3 & 0x1f);
      if ((uVar4 & 0x20) == 0) {
        uVar2 = param_1 >> (bVar3 & 0x1f) | param_2 << 0x20 - (bVar3 & 0x1f);
      }
      uVar11 = iVar10 << 1 | uVar9 >> 0x1f;
      uVar2 = (uVar2 & 1) + uVar9 * 2;
      local_20 = 0;
      local_24 = 0;
      uVar9 = 0;
      uVar6 = 0;
      if (param_4 <= uVar11 && (uint)(uVar2 < param_3) <= uVar11 - param_4) {
        local_24 = param_4;
        uVar9 = uVar7;
        uVar6 = param_3;
        local_20 = uVar8;
      }
      uVar1 = uVar1 | uVar9;
      uVar5 = uVar5 | local_20;
      uVar9 = uVar2 - uVar6;
      iVar10 = (uVar11 - local_24) - (uint)(uVar2 < uVar6);
      bVar12 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar12);
  }
  return CONCAT44(uVar5,uVar1);
}

#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a40
 */

undefined8 recovered_10001a40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = 0;
    uVar3 = 0x3f;
    iVar4 = 0;
    do {
      uVar5 = iVar4 << 1 | uVar2 >> 0x1f;
      bVar1 = (byte)uVar3 & 0x1f;
      uVar8 = param_2 >> ((byte)uVar3 & 0x1f);
      if ((uVar3 & 0x20) == 0) {
        uVar8 = param_1 >> bVar1 | param_2 << 0x20 - bVar1;
      }
      uVar8 = (uVar8 & 1) + uVar2 * 2;
      uVar6 = 0;
      uVar7 = 0;
      if (param_4 <= uVar5 && (uint)(uVar8 < param_3) <= uVar5 - param_4) {
        uVar6 = param_4;
        uVar7 = param_3;
      }
      uVar2 = uVar8 - uVar7;
      iVar4 = (uVar5 - uVar6) - (uint)(uVar8 < uVar7);
      bVar9 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar9);
  }
  return CONCAT44(iVar4,uVar2);
}


#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ab0
 */

undefined8 recovered_10001ab0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = (int)param_2 >> 0x1f;
    uVar11 = ((param_2 ^ uVar1) - uVar1) - (uint)((param_1 ^ uVar1) < uVar1);
    uVar2 = (int)param_4 >> 0x1f;
    uVar7 = (param_3 ^ uVar2) - uVar2;
    uVar2 = ((param_4 ^ uVar2) - uVar2) - (uint)((param_3 ^ uVar2) < uVar2);
    uVar6 = 0x3f;
    uVar8 = 0;
    iVar14 = 0;
    uVar12 = 0;
    uVar3 = 0;
    do {
      bVar5 = (byte)uVar6;
      uVar13 = 1 << (bVar5 & 0x1f);
      uVar10 = uVar13;
      if ((uVar6 & 0x20) != 0) {
        uVar10 = 0;
      }
      uVar4 = 0 << (bVar5 & 0x1f) | 1U >> 0x20 - (bVar5 & 0x1f);
      if ((uVar6 & 0x20) != 0) {
        uVar4 = uVar13;
      }
      uVar13 = uVar11 >> (bVar5 & 0x1f);
      if ((uVar6 & 0x20) == 0) {
        uVar13 = (param_1 ^ uVar1) - uVar1 >> (bVar5 & 0x1f) | uVar11 << 0x20 - (bVar5 & 0x1f);
      }
      uVar15 = iVar14 << 1 | uVar8 >> 0x1f;
      uVar13 = (uVar13 & 1) + uVar8 * 2;
      local_30 = 0;
      local_34 = 0;
      uVar9 = 0;
      uVar8 = 0;
      if (uVar2 <= uVar15 && (uint)(uVar13 < uVar7) <= uVar15 - uVar2) {
        uVar9 = uVar7;
        uVar8 = uVar10;
        local_34 = uVar2;
        local_30 = uVar4;
      }
      uVar12 = uVar12 | uVar8;
      uVar3 = uVar3 | local_30;
      uVar8 = uVar13 - uVar9;
      iVar14 = (uVar15 - local_34) - (uint)(uVar13 < uVar9);
      bVar16 = uVar6 != 0;
      uVar6 = uVar6 - 1;
    } while (bVar16);
    uVar2 = -uVar12;
    uVar1 = -(uint)(uVar12 != 0) - uVar3;
    if (param_2 >> 0x1f == param_4 >> 0x1f) {
      uVar2 = uVar12;
      uVar1 = uVar3;
    }
  }
  return CONCAT44(uVar1,uVar2);
}

#undef local_34
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c00
 */

undefined8 recovered_10001c00(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar8 = 0;
  }
  else {
    uVar2 = (int)param_2 >> 0x1f;
    uVar13 = ((param_2 ^ uVar2) - uVar2) - (uint)((param_1 ^ uVar2) < uVar2);
    uVar3 = (int)param_4 >> 0x1f;
    uVar6 = (param_3 ^ uVar3) - uVar3;
    uVar4 = ((param_4 ^ uVar3) - uVar3) - (uint)((param_3 ^ uVar3) < uVar3);
    uVar3 = 0;
    uVar5 = 0x3f;
    iVar9 = 0;
    do {
      uVar10 = iVar9 << 1 | uVar3 >> 0x1f;
      bVar1 = (byte)uVar5 & 0x1f;
      uVar12 = uVar13 >> ((byte)uVar5 & 0x1f);
      if ((uVar5 & 0x20) == 0) {
        uVar12 = (param_1 ^ uVar2) - uVar2 >> bVar1 | uVar13 << 0x20 - bVar1;
      }
      uVar12 = (uVar12 & 1) + uVar3 * 2;
      uVar7 = 0;
      uVar11 = 0;
      if (uVar4 <= uVar10 && (uint)(uVar12 < uVar6) <= uVar10 - uVar4) {
        uVar7 = uVar6;
        uVar11 = uVar4;
      }
      uVar3 = uVar12 - uVar7;
      iVar9 = (uVar10 - uVar11) - (uint)(uVar12 < uVar7);
      bVar14 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar14);
    uVar2 = -uVar3;
    iVar8 = -(uint)(uVar3 != 0) - iVar9;
    if (-1 < (int)param_2) {
      uVar2 = uVar3;
      iVar8 = iVar9;
    }
  }
  return CONCAT44(iVar8,uVar2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd0
 */

void recovered_10001cd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cf0
 */

int recovered_10001cf0(int param_1)

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
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d10
 */

void * recovered_10001d10(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;

  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x4f < uVar2 && (pcVar3 = (code *)UINT_0028084c, pcVar3 != (code *)0x0))
     )) {
    pvVar4 = (*pcVar3)(size);
    return pvVar4;
  }
  return (void *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d60
 */

void recovered_10001d60(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00280850, pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)(pointer);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280850

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db0
 */

void * recovered_10001db0(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;

  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar2 = Ram00280808, 0xb < uVar2)) &&
     ((uVar2 = Ram00280808, 0x57 < uVar2 && (pcVar3 = (code *)UINT_00280854, pcVar3 != (code *)0x0))
     )) {
    pvVar4 = (*pcVar3)(pointer,size);
    return pvVar4;
  }
  return (void *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e00
 */

void * recovered_10001e00(void *destination,void *source,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  bool bVar6;

  pvVar3 = destination;
  if (7 < count) {
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_10001e2a;
    if (((uint)destination & 3) != 0) {
      pvVar5 = destination;
      do {
        pvVar5 = (void *)((int)pvVar5 + 1);
        uVar1 = *(undefined1 *)source;
        source = (void *)((int)source + 1);
        *(undefined1 *)destination = uVar1;
        destination = (void *)((int)destination + 1);
        bVar6 = count == 1;
        count = count - 1;
        if (bVar6) break;
      } while (((uint)pvVar5 & 3) != 0);
    }
    for (; 0xf < count; count = count - 0x10) {
      *(undefined4 *)destination = *(undefined4 *)source;
      *(undefined4 *)((int)destination + 4) = *(undefined4 *)((int)source + 4);
      *(undefined4 *)((int)destination + 8) = *(undefined4 *)((int)source + 8);
      *(undefined4 *)((int)destination + 0xc) = *(undefined4 *)((int)source + 0xc);
      destination = (void *)((int)destination + 0x10);
      source = (void *)((int)source + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      uVar2 = *(undefined4 *)source;
      source = (void *)((int)source + 4);
      *(undefined4 *)destination = uVar2;
      destination = (void *)((int)destination + 4);
    }
  }
  if (count == 0) {
    return pvVar3;
  }
LAB_10001e2a:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)destination + uVar4) = *(undefined1 *)((int)source + uVar4);
    uVar4 = uVar4 + 1;
  } while (count != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ec0
 */

void * recovered_10001ec0(void *destination,void *source,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;

  if (count != 0 && destination != source) {
    if ((destination < source) || (pvVar5 = (void *)((int)source + count), pvVar5 <= destination)) {
      puVar7 = destination;
      if ((7 < count) && (pvVar5 = destination, (((uint)source ^ (uint)destination) & 3) == 0)) {
        do {
          if (((uint)pvVar5 & 3) == 0) break;
          pvVar5 = (void *)((int)pvVar5 + 1);
          uVar2 = *(undefined1 *)source;
          source = (void *)((int)source + 1);
          *(undefined1 *)puVar7 = uVar2;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          bVar8 = count != 1;
          count = count - 1;
        } while (bVar8);
        for (; 0xf < count; count = count - 0x10) {
          *puVar7 = *(undefined4 *)source;
          puVar7[1] = *(undefined4 *)((int)source + 4);
          puVar7[2] = *(undefined4 *)((int)source + 8);
          puVar7[3] = *(undefined4 *)((int)source + 0xc);
          puVar7 = puVar7 + 4;
          source = (void *)((int)source + 0x10);
        }
        for (; 3 < count; count = count - 4) {
          uVar3 = *(undefined4 *)source;
          source = (void *)((int)source + 4);
          *puVar7 = uVar3;
          puVar7 = puVar7 + 1;
        }
        if (count == 0) {
          return destination;
        }
      }
      uVar4 = 0;
      do {
        *(undefined1 *)((int)puVar7 + uVar4) = *(undefined1 *)((int)source + uVar4);
        uVar4 = uVar4 + 1;
      } while (count != uVar4);
    }
    else {
      uVar4 = (int)destination + count;
      if ((7 < count) && ((((uint)pvVar5 ^ uVar4) & 3) == 0)) {
        if ((uVar4 & 3) != 0) {
          do {
            *(undefined1 *)((int)destination + (count - 1)) =
                 *(undefined1 *)((int)source + (count - 1));
            uVar1 = count - 1;
            if (count == 1) break;
            iVar6 = count - 1;
            count = uVar1;
          } while (((int)destination + iVar6 & 3U) != 0);
          pvVar5 = (void *)((int)source + uVar1);
          uVar4 = (int)destination + uVar1;
          count = uVar1;
        }
        for (; 0xf < count; count = count - 0x10) {
          *(undefined4 *)(uVar4 - 4) = *(undefined4 *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 8) = *(undefined4 *)((int)pvVar5 - 8);
          *(undefined4 *)(uVar4 - 0xc) = *(undefined4 *)((int)pvVar5 - 0xc);
          *(undefined4 *)(uVar4 - 0x10) = *(undefined4 *)((int)pvVar5 - 0x10);
          uVar4 = uVar4 - 0x10;
          pvVar5 = (void *)((int)pvVar5 - 0x10);
        }
        for (; 3 < count; count = count - 4) {
          puVar7 = (undefined4 *)((int)pvVar5 - 4);
          pvVar5 = (void *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 4) = *puVar7;
          uVar4 = uVar4 - 4;
        }
        if (count == 0) {
          return destination;
        }
      }
      iVar6 = 0;
      do {
        *(undefined1 *)((uVar4 - 1) + iVar6) = *(undefined1 *)((int)pvVar5 + iVar6 + -1);
        iVar6 = iVar6 + -1;
      } while (-iVar6 != count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002090
 */

/* WARNING: Variable defined which should be unmapped: destination */

void * recovered_10002090(void *destination,int value,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;

  piVar1 = destination;
  if (7 < count) {
    if (((uint)destination & 3) != 0) {
      pvVar2 = destination;
      do {
        pvVar2 = (void *)((int)pvVar2 + 1);
        *(char *)piVar1 = (char)value;
        piVar1 = (int *)((int)piVar1 + 1);
        bVar4 = count == 1;
        count = count - 1;
        if (bVar4) break;
      } while (((uint)pvVar2 & 3) != 0);
    }
    iVar3 = (value & 0xffU) * 0x1010101;
    for (; 0xf < count; count = count - 0x10) {
      *piVar1 = iVar3;
      piVar1[1] = iVar3;
      piVar1[2] = iVar3;
      piVar1[3] = iVar3;
      piVar1 = piVar1 + 4;
    }
    for (; 3 < count; count = count - 4) {
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
    }
  }
  for (; count != 0; count = count - 1) {
    *(char *)piVar1 = (char)value;
    piVar1 = (int *)((int)piVar1 + 1);
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002140
 */

void recovered_10002140(undefined4 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < param_2; param_2 = param_2 - 0x10) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
    for (; 3 < param_2; param_2 = param_2 - 4) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021e0
 */

void recovered_100021e0(undefined4 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < param_2; param_2 = param_2 - 0x10) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
    for (; 3 < param_2; param_2 = param_2 - 4) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002280
 */

char * recovered_10002280(char *param_1,char param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 != 0) {
    do {
      if (*param_1 == param_2) {
        return param_1;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022c0
 */

int recovered_100022c0(void *left,void *right,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;

  if (7 < count) {
    if ((((uint)right ^ (uint)left) & 3) != 0) goto LAB_1000235e;
    if (((uint)left & 3) != 0) {
      uVar6 = count;
      pvVar7 = left;
      do {
        pvVar7 = (void *)((int)pvVar7 + 1);
        bVar1 = (byte)*(uint *)left;
        bVar2 = (byte)*(uint *)right;
        if (bVar1 != bVar2) goto LAB_10002375;
        left = (void *)((int)left + 1);
        right = (void *)((int)right + 1);
        count = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = count, ((uint)pvVar7 & 3) != 0));
    }
    for (; 0xf < count; count = count - 0x10) {
      uVar8 = *(uint *)left;
      uVar9 = *(uint *)right;
      if (uVar8 != uVar9) {
LAB_100023a6:
        if ((char)uVar8 == (char)uVar9) {
          uVar5 = uVar8 >> 8;
          uVar4 = uVar9 >> 8;
          if ((char)(uVar8 >> 8) == (char)(uVar9 >> 8)) {
            uVar5 = uVar8 >> 0x10;
            uVar4 = uVar9 >> 0x10;
            if ((char)(uVar8 >> 0x10) == (char)(uVar9 >> 0x10)) {
              uVar5 = uVar8 >> 0x18;
              uVar4 = uVar9 >> 0x18;
              if (uVar5 == uVar4) {
                return 0;
              }
            }
          }
        }
        else {
          uVar5 = uVar8;
          uVar4 = uVar9;
        }
        return (uVar5 & 0xff) - (uVar4 & 0xff);
      }
      uVar8 = *(uint *)((int)left + 4);
      uVar9 = *(uint *)((int)right + 4);
      if (uVar8 != uVar9) goto LAB_100023a6;
      uVar8 = *(uint *)((int)left + 8);
      uVar9 = *(uint *)((int)right + 8);
      if (uVar8 != uVar9) goto LAB_100023a6;
      uVar8 = *(uint *)((int)left + 0xc);
      uVar9 = *(uint *)((int)right + 0xc);
      if (uVar8 != uVar9) goto LAB_100023a6;
      left = (void *)((int)left + 0x10);
      right = (void *)((int)right + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar3 = recovered_100023f0();
        return iVar3;
      }
      left = (void *)((int)left + 4);
      right = (void *)((int)right + 4);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_1000235e:
  uVar8 = 0;
  while( true ) {
    bVar1 = *(byte *)((int)left + uVar8);
    bVar2 = *(byte *)((int)right + uVar8);
    if (bVar1 != bVar2) break;
    uVar8 = uVar8 + 1;
    if (count == uVar8) {
      return 0;
    }
  }
LAB_10002375:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023f0
 */

int recovered_100023f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *in_ECX;
  char *in_EDX;
  uint uVar1;

  uVar1 = (uint)CONCAT11(*in_EDX,*in_ECX);
  if ((((*in_ECX == *in_EDX) &&
       (uVar1 = (uint)CONCAT11(in_EDX[1],in_ECX[1]), in_ECX[1] == in_EDX[1])) &&
      (uVar1 = (uint)CONCAT11(in_EDX[2],in_ECX[2]), in_ECX[2] == in_EDX[2])) &&
     (uVar1 = (uint)CONCAT11(in_EDX[3],in_ECX[3]), in_ECX[3] == in_EDX[3])) {
    return 0;
  }
  return (uVar1 & 0xff) - (uVar1 >> 8);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002440
 */

bool recovered_10002440(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002460
 */

bool recovered_10002460(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002480
 */

bool recovered_10002480(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024a0
 */

bool recovered_100024a0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d0
 */

bool recovered_100024d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f0
 */

bool recovered_100024f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002510
 */

int recovered_10002510(int param_1)

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
 * Address: 0x10002530
 */

int recovered_10002530(int param_1)

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
 * Address: 0x10002550
 */

ulong recovered_10002550(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  ulong uVar3;

  if (text == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar2 = uVar3 + 1;
      iVar1 = uVar3 + 1;
      uVar3 = uVar2;
    } while (text[iVar1] != '\0');
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002590
 */

int recovered_10002590(char *left,char *right)

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
      uVar2 = (uint)bVar1;
      left = left + 1;
      if (bVar1 != *right) goto LAB_100025c6;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_100025c6:
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025d0
 */

int recovered_100025d0(byte *param_1,byte *param_2)

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
      uVar2 = (uint)bVar1;
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_10002606;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002606:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002610
 */

void recovered_10002610(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;

  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_2 + iVar2);
    *(char *)(param_1 + iVar2) = cVar1;
    iVar2 = iVar2 + 1;
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
#define _DAT_0028084c (*(code * *)(0x28084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10002640(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;

  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (*(char *)((int)param_1 + uVar5) != '\0');
  if (_DAT_00280800 != 0x50414d57) {
    return (undefined4 *)0x0;
  }
  if (_DAT_00280804 == 0) {
    return (undefined4 *)0x0;
  }
  if (_DAT_00280808 < 0xc) {
    return (undefined4 *)0x0;
  }
  if (_DAT_00280808 < 0x50) {
    return (undefined4 *)0x0;
  }
  if (_DAT_0028084c == (code *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)(*_DAT_0028084c)(uVar7);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar6 = puVar4;
  if (7 < uVar7) {
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10002758;
    if (((uint)puVar4 & 3) != 0) {
      uVar8 = 0;
      do {
        *(undefined1 *)((int)puVar4 + uVar8) = *(undefined1 *)((int)param_1 + uVar8);
        uVar1 = uVar8 + 1;
        if (uVar5 == uVar8) break;
        iVar3 = uVar8 + 1;
        uVar8 = uVar1;
      } while (((int)puVar4 + iVar3 & 3U) != 0);
      uVar7 = uVar7 - uVar1;
      param_1 = (undefined4 *)((int)param_1 + uVar1);
      puVar6 = (undefined4 *)((int)puVar4 + uVar1);
    }
    for (; 0xf < uVar7; uVar7 = uVar7 - 0x10) {
      *puVar6 = *param_1;
      puVar6[1] = param_1[1];
      puVar6[2] = param_1[2];
      puVar6[3] = param_1[3];
      param_1 = param_1 + 4;
      puVar6 = puVar6 + 4;
    }
    for (; 3 < uVar7; uVar7 = uVar7 - 4) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
  }
  if (uVar7 == 0) {
    return puVar4;
  }
LAB_10002758:
  uVar5 = 0;
  do {
    *(undefined1 *)((int)puVar6 + uVar5) = *(undefined1 *)((int)param_1 + uVar5);
    uVar5 = uVar5 + 1;
  } while (uVar7 != uVar5);
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
 * Address: 0x10002780
 */

char * recovered_10002780(char *param_1,char param_2)

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
 * Address: 0x100027c0
 */

int recovered_100027c0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_1000280b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_1000280b;
      pcVar5 = param_2;
      while (pcVar5 = pcVar5 + 1, (char)uVar3 != cVar4) {
        cVar4 = *pcVar5;
        if (cVar4 == '\0') {
          return iVar2;
        }
      }
      iVar1 = iVar2 + 1;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),param_1[iVar1]);
      iVar2 = iVar2 + 1;
    } while (param_1[iVar1] != '\0');
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002820
 */

ulong recovered_10002820(char *text,char *reject)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*text == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*reject,*text);
    uVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 != '\0') {
        pcVar5 = reject;
        do {
          pcVar5 = pcVar5 + 1;
          if ((char)uVar3 == cVar4) {
            return uVar2;
          }
          cVar4 = *pcVar5;
        } while (cVar4 != '\0');
      }
      iVar1 = uVar2 + 1;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),text[iVar1]);
      uVar2 = uVar2 + 1;
    } while (text[iVar1] != '\0');
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002880
 */

char * recovered_10002880(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar2;
  uint uVar1;
  char *pcVar3;

  if (*param_1 != '\0') {
    uVar1 = (uint)CONCAT11(*param_2,*param_1);
    do {
      cVar2 = (char)(uVar1 >> 8);
      if (cVar2 != '\0') {
        pcVar3 = param_2;
        do {
          pcVar3 = pcVar3 + 1;
          if ((char)uVar1 == cVar2) {
            return param_1;
          }
          cVar2 = *pcVar3;
        } while (cVar2 != '\0');
      }
      pcVar3 = param_1 + 1;
      uVar1 = CONCAT31((int3)(uVar1 >> 8),*pcVar3);
      param_1 = param_1 + 1;
    } while (*pcVar3 != '\0');
  }
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d0
 */

char * recovered_100028d0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;

  pcVar3 = param_1;
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      pcVar3 = (char *)0x0;
    }
    else {
      do {
        iVar2 = 0;
        cVar4 = *param_2;
        while (param_1[iVar2] == cVar4) {
          cVar4 = param_2[iVar2 + 1];
          iVar2 = iVar2 + 1;
          pcVar3 = param_1;
          if (cVar4 == '\0') goto LAB_10002913;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10002913:
  return pcVar3;
}


#undef DAT_1000ed71
#define DAT_1000ed71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa5bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002920
 */

undefined * recovered_10002920(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000ed71;
}

#undef DAT_1000ed71

#undef PTR_DAT_1000f32c
#define PTR_DAT_1000f32c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1016U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002940
 */

undefined ** recovered_10002940(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000f32c;
}

#undef PTR_DAT_1000f32c

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
#define _DAT_00280968 (*(code * *)(0x280968U))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002960(undefined4 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;

  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
     (((_DAT_00280808 < 0x16c || (_DAT_00280968 == (code *)0x0)) ||
      (iVar1 = (*_DAT_00280968)(&local_34), iVar1 == 0)))) {
    local_2c = 0x574d4236;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_2c;
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
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a00
 */

longdouble recovered_10002a00(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000e320;
        param_2 = param_2 + 1;
      } while (param_2 != 0);
    }
  }
  else {
    uVar1 = param_2 + 1;
    do {
      lVar2 = lVar2 + lVar2;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return lVar2;
}

#undef DAT_1000e320

#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a50
 */

void recovered_10002a50(double param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 != 0.0) || (NAN(param_1))) {
    if (param_1 < -param_1) {
      param_1 = -param_1;
    }
    iVar1 = 0;
    if (1.0 <= param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * (double)DAT_1000e320;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_1000e320 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_1000e320);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000e320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b10
 */

longdouble recovered_10002b10(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_2;
  lVar2 = (longdouble)0;
  if ((lVar1 != lVar2) || (NAN(lVar1) || NAN(lVar2))) {
    lVar2 = (longdouble)param_1 - lVar1 * (longdouble)(int)ROUND((longdouble)param_1 / lVar1);
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b70
 */

longdouble recovered_10002b70(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  longdouble lVar3;
  uint uVar4;
  longdouble lVar5;
  longdouble lVar6;

  lVar5 = (longdouble)param_1;
  uVar1 = (uint)ROUND(param_2);
  lVar6 = (longdouble)0;
  if ((((double)(int)uVar1 == param_2) && (!NAN((double)(int)uVar1) && !NAN(param_2))) &&
     (lVar6 = (longdouble)1, uVar1 != 0)) {
    uVar4 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar4 = uVar1;
    }
    lVar6 = (longdouble)1;
    do {
      lVar3 = lVar6 * lVar5;
      if ((uVar4 & 1) == 0) {
        lVar3 = lVar6;
      }
      lVar6 = lVar3;
      lVar5 = lVar5 * lVar5;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      lVar6 = (longdouble)1 / lVar6;
    }
  }
  return lVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c00
 */

longdouble recovered_10002c00(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  longdouble lVar2;

  iVar1 = (int)ROUND((longdouble)param_1);
  lVar2 = (longdouble)iVar1;
  if ((longdouble)param_1 < lVar2) {
    lVar2 = (longdouble)(iVar1 + -1);
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c50
 */

longdouble recovered_10002c50(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  lVar2 = (longdouble)(int)ROUND(lVar1);
  if (lVar1 < lVar2) {
    lVar2 = (longdouble)((int)ROUND(lVar1) + -1);
  }
  if (lVar2 < lVar1) {
    lVar2 = (longdouble)1 + lVar2;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cb0
 */

void recovered_10002cb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000e324
#define DAT_1000e324 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_1000e328
#define DAT_1000e328 (*(float *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1000e32c
#define DAT_1000e32c (*(float *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000e330
#define DAT_1000e330 (*(float *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_1000e334
#define DAT_1000e334 (*(float *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef DAT_1000e338
#define DAT_1000e338 (*(float *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_1000e33c
#define DAT_1000e33c (*(float *)(((uintptr_t)pf_module_state + 0x26U)))
#undef DAT_1000e340
#define DAT_1000e340 (*(float *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_1000e344
#define DAT_1000e344 (*(float *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef DAT_1000e348
#define DAT_1000e348 (*(float *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_1000e34c
#define DAT_1000e34c (*(float *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_1000e350
#define DAT_1000e350 (*(float *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_1000e378
#define DAT_1000e378 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002db0
 */

longdouble recovered_10002db0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;
  longdouble lVar9;
  longdouble lVar10;

  lVar2 = (longdouble)param_1;
  if (lVar2 <= (longdouble)0) {
    lVar2 = (longdouble)DAT_1000e324;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_1000e328 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000e320;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_1000e328 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_1000e32c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_1000e32c);
    }
    lVar10 = (-(longdouble)1 + lVar2) / (lVar2 + (longdouble)1);
    lVar2 = lVar10 * lVar10;
    lVar3 = lVar10 * lVar2 * lVar2;
    lVar4 = lVar3 * lVar2;
    lVar5 = lVar4 * lVar2;
    lVar6 = lVar5 * lVar2;
    lVar7 = lVar6 * lVar2;
    lVar8 = lVar7 * lVar2;
    lVar9 = lVar8 * lVar2;
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_1000e350 +
            lVar9 / (longdouble)DAT_1000e34c +
            lVar8 / (longdouble)DAT_1000e348 +
            lVar7 / (longdouble)DAT_1000e344 +
            lVar6 / (longdouble)DAT_1000e340 +
            lVar5 / (longdouble)DAT_1000e33c +
            lVar4 / (longdouble)DAT_1000e338 +
            lVar3 / (longdouble)DAT_1000e334 +
            (lVar10 * lVar2) / (longdouble)DAT_1000e330 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_1000e378;
  }
  return lVar2;
}

#undef DAT_1000e320
#undef DAT_1000e324
#undef DAT_1000e328
#undef DAT_1000e32c
#undef DAT_1000e330
#undef DAT_1000e334
#undef DAT_1000e338
#undef DAT_1000e33c
#undef DAT_1000e340
#undef DAT_1000e344
#undef DAT_1000e348
#undef DAT_1000e34c
#undef DAT_1000e350
#undef DAT_1000e378

#undef DAT_1000e3a0
#define DAT_1000e3a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec0
 */

longlong recovered_10002ec0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_1000e3a0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_1000e3a0

#undef DAT_1000e354
#define DAT_1000e354 (*(float *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef DAT_1000e358
#define DAT_1000e358 (*(float *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_1000e35c
#define DAT_1000e35c (*(float *)(((uintptr_t)pf_module_state + 0x46U)))
#undef DAT_1000e380
#define DAT_1000e380 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000e388
#define DAT_1000e388 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_1000e390
#define DAT_1000e390 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef DAT_1000e398
#define DAT_1000e398 (*(double *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f20
 */

longdouble recovered_10002f20(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000e380 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000e388;
    } while ((longdouble)DAT_1000e380 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000e390) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000e398;
    } while (lVar1 < (longdouble)DAT_1000e390);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_1000e35c +
         (lVar2 * lVar2) / (longdouble)DAT_1000e358 +
         (longdouble)1 + lVar2 / (longdouble)DAT_1000e354) * lVar1;
}

#undef DAT_1000e354
#undef DAT_1000e358
#undef DAT_1000e35c
#undef DAT_1000e380
#undef DAT_1000e388
#undef DAT_1000e390
#undef DAT_1000e398

#undef DAT_1000e360
#define DAT_1000e360 (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1000e364
#define DAT_1000e364 (*(float *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_1000e368
#define DAT_1000e368 (*(float *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1000e380
#define DAT_1000e380 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000e388
#define DAT_1000e388 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_1000e390
#define DAT_1000e390 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef DAT_1000e398
#define DAT_1000e398 (*(double *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fb0
 */

longdouble recovered_10002fb0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000e380 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000e388;
    } while ((longdouble)DAT_1000e380 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000e390) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000e398;
    } while (lVar1 < (longdouble)DAT_1000e390);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_1000e368 +
         (lVar1 * lVar1) / (longdouble)DAT_1000e364 +
         (longdouble)1 + lVar1 * (longdouble)DAT_1000e360;
}

#undef DAT_1000e360
#undef DAT_1000e364
#undef DAT_1000e368
#undef DAT_1000e380
#undef DAT_1000e388
#undef DAT_1000e390
#undef DAT_1000e398

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003040
 */

longdouble recovered_10003040(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000e36c
#define DAT_1000e36c (*(float *)(((uintptr_t)pf_module_state + 0x56U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003060
 */

longlong recovered_10003060(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  if ((value != 0.0) || (uVar7 = 0, uVar8 = 0, NAN(value))) {
    dVar2 = value;
    if (value < -value) {
      dVar2 = -value;
    }
    dVar3 = (double)DAT_1000e36c;
    uVar7 = 0x3f;
    uVar9 = 0;
    uVar10 = 0;
    do {
      bVar1 = (byte)uVar7 & 0x1f;
      uVar5 = 1 << ((byte)uVar7 & 0x1f);
      uVar6 = uVar5;
      uVar8 = 0 << bVar1 | 1U >> 0x20 - bVar1;
      if ((uVar7 & 0x20) != 0) {
        uVar6 = 0;
        uVar8 = uVar5;
      }
      dVar4 = dVar2 - dVar3;
      if (dVar2 < dVar3) {
        uVar6 = 0;
        uVar8 = 0;
        dVar4 = dVar2;
      }
      dVar2 = dVar4;
      uVar10 = uVar10 | uVar8;
      uVar9 = uVar9 | uVar6;
      dVar3 = dVar3 * (double)DAT_1000e320;
      bVar11 = uVar7 != 0;
      uVar7 = uVar7 - 1;
    } while (bVar11);
    uVar7 = -uVar9;
    uVar8 = -(uint)(uVar9 != 0) - uVar10;
    if (0.0 <= value) {
      uVar7 = uVar9;
      uVar8 = uVar10;
    }
  }
  return CONCAT44(uVar8,uVar7);
}

#undef DAT_1000e320
#undef DAT_1000e36c

#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000e36c
#define DAT_1000e36c (*(float *)(((uintptr_t)pf_module_state + 0x56U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003120
 */

ulonglong recovered_10003120(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar4 = 0;
  uVar6 = 0;
  if (0.0 < value) {
    dVar2 = (double)DAT_1000e36c;
    uVar5 = 0x3f;
    uVar4 = 0;
    uVar6 = 0;
    do {
      bVar1 = (byte)uVar5 & 0x1f;
      uVar8 = 1 << ((byte)uVar5 & 0x1f);
      uVar9 = uVar8;
      uVar7 = 0 << bVar1 | 1U >> 0x20 - bVar1;
      if ((uVar5 & 0x20) != 0) {
        uVar9 = 0;
        uVar7 = uVar8;
      }
      dVar3 = value - dVar2;
      if (value < dVar2) {
        uVar9 = 0;
        uVar7 = 0;
        dVar3 = value;
      }
      value = dVar3;
      uVar6 = uVar6 | uVar7;
      uVar4 = uVar4 | uVar9;
      dVar2 = dVar2 * (double)DAT_1000e320;
      bVar10 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar6,uVar4);
}

#undef DAT_1000e320
#undef DAT_1000e36c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b0
 */

double recovered_100031b0(ulonglong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;

  dVar1 = 0.0;
  if (value != 0) {
    dVar3 = 1.0;
    dVar2 = 0.0;
    do {
      iVar5 = (int)(value >> 0x20);
      uVar4 = (uint)value;
      dVar1 = dVar2 + dVar3;
      if ((value & 1) == 0) {
        dVar1 = dVar2;
      }
      value = value >> 1;
      dVar3 = dVar3 + dVar3;
      dVar2 = dVar1;
    } while (iVar5 != 0 || (uint)-iVar5 < (uint)(1 < uVar4));
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003220
 */

double recovered_10003220(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;

  if (value < 0) {
    dVar4 = 1.0;
    uVar5 = -(int)value;
    uVar7 = -(uint)((int)value != 0) - PF_PART4(value, 4);
    dVar3 = 0.0;
    do {
      dVar2 = dVar3 + dVar4;
      if ((uVar5 & 1) == 0) {
        dVar2 = dVar3;
      }
      dVar4 = dVar4 + dVar4;
      bVar8 = 1 < uVar5;
      bVar9 = uVar7 != 0;
      uVar1 = -uVar7;
      uVar5 = uVar7 << 0x1f | uVar5 >> 1;
      uVar7 = uVar7 >> 1;
      dVar3 = dVar2;
    } while (bVar9 || uVar1 < bVar8);
    dVar2 = -dVar2;
  }
  else {
    dVar2 = 0.0;
    if (value != 0) {
      dVar4 = 1.0;
      dVar3 = 0.0;
      do {
        iVar6 = (int)((ulonglong)value >> 0x20);
        uVar5 = (uint)value;
        dVar2 = dVar4 + dVar3;
        if ((value & 1U) == 0) {
          dVar2 = dVar3;
        }
        value = (ulonglong)value >> 1;
        dVar4 = dVar4 + dVar4;
        dVar3 = dVar2;
      } while (iVar6 != 0 || (uint)-iVar6 < (uint)(1 < uVar5));
    }
  }
  return dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032e0
 */

void recovered_100032e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003350
 */

void recovered_10003350(float param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 != 0.0) || (NAN(param_1))) {
    if (param_1 < 0.0) {
      param_1 = -param_1;
    }
    iVar1 = 0;
    if (1.0 <= param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000e320;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_1000e320 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_1000e320);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000e320

#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003440
 */

longdouble recovered_10003440(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_1000e320;
        param_2 = param_2 + 1;
      } while (param_2 != 0);
    }
  }
  else {
    uVar1 = param_2 + 1;
    do {
      param_1 = param_1 + param_1;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return (longdouble)param_1;
}

#undef DAT_1000e320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034a0
 */

longdouble recovered_100034a0(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longdouble lVar6;

  uVar1 = (uint)ROUND(param_2);
  lVar6 = (longdouble)0;
  if ((((float)(int)uVar1 == param_2) && (!NAN((float)(int)uVar1) && !NAN(param_2))) &&
     (lVar6 = (longdouble)1, uVar1 != 0)) {
    uVar5 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar5 = uVar1;
    }
    fVar4 = 1.0;
    do {
      fVar3 = fVar4 * param_1;
      if ((uVar5 & 1) == 0) {
        fVar3 = fVar4;
      }
      param_1 = param_1 * param_1;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
      fVar4 = fVar3;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      fVar3 = 1.0 / fVar3;
    }
    lVar6 = (longdouble)fVar3;
  }
  return lVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003540
 */

longdouble recovered_10003540(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = (float)(int)ROUND(param_1);
  if (param_1 < fVar1) {
    fVar1 = (float)((int)ROUND(param_1) + -1);
  }
  return (longdouble)fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035a0
 */

longdouble recovered_100035a0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = (float)(int)ROUND(param_1);
  if (param_1 < fVar1) {
    fVar1 = (float)((int)ROUND(param_1) + -1);
  }
  if (fVar1 < param_1) {
    fVar1 = fVar1 + 1.0;
  }
  return (longdouble)fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003610
 */

longdouble recovered_10003610(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;

  lVar1 = (longdouble)param_1;
  lVar2 = (longdouble)(int)ROUND(lVar1);
  if (lVar1 < lVar2) {
    lVar2 = (longdouble)((int)ROUND(lVar1) + -1);
  }
  lVar3 = lVar2;
  if (lVar2 < lVar1) {
    lVar3 = (longdouble)1 + lVar2;
  }
  if (lVar1 < (longdouble)0) {
    lVar2 = lVar3;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003680
 */

longdouble recovered_10003680(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(param_1);
  if (param_1 < fVar1) {
    fVar1 = (float)((int)ROUND(param_1) + -1);
  }
  fVar2 = fVar1;
  if (fVar1 < param_1) {
    fVar2 = fVar1 + 1.0;
  }
  if (param_1 < 0.0) {
    fVar1 = fVar2;
  }
  return (longdouble)fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036f0
 */

longdouble recovered_100036f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10002cb0();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000e328
#define DAT_1000e328 (*(float *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_1000e32c
#define DAT_1000e32c (*(float *)(((uintptr_t)pf_module_state + 0x16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003710
 */

void recovered_10003710(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_1000e328 < param_1) {
      do {
        param_1 = param_1 * DAT_1000e320;
      } while (DAT_1000e328 < param_1);
    }
    for (; param_1 < DAT_1000e32c; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_1000e320
#undef DAT_1000e328
#undef DAT_1000e32c

#undef DAT_1000e3a0
#define DAT_1000e3a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8aU)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003830
 */

undefined4 recovered_10003830(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_1000e3a0 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_1000e3a0
#undef local_10

#undef DAT_1000e354
#define DAT_1000e354 (*(float *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef DAT_1000e358
#define DAT_1000e358 (*(float *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_1000e35c
#define DAT_1000e35c (*(float *)(((uintptr_t)pf_module_state + 0x46U)))
#undef DAT_1000e380
#define DAT_1000e380 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000e388
#define DAT_1000e388 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_1000e390
#define DAT_1000e390 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef DAT_1000e398
#define DAT_1000e398 (*(double *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003880
 */

longdouble recovered_10003880(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000e380 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000e388;
    } while ((float)DAT_1000e380 < param_1);
  }
  if (param_1 < (float)DAT_1000e390) {
    do {
      param_1 = param_1 + (float)DAT_1000e398;
    } while (param_1 < (float)DAT_1000e390);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_1000e35c +
          (fVar1 * fVar1) / DAT_1000e358 + fVar1 / DAT_1000e354 + 1.0) * param_1);
}

#undef DAT_1000e354
#undef DAT_1000e358
#undef DAT_1000e35c
#undef DAT_1000e380
#undef DAT_1000e388
#undef DAT_1000e390
#undef DAT_1000e398

#undef DAT_1000e360
#define DAT_1000e360 (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1000e364
#define DAT_1000e364 (*(float *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_1000e368
#define DAT_1000e368 (*(float *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1000e380
#define DAT_1000e380 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_1000e388
#define DAT_1000e388 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_1000e390
#define DAT_1000e390 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef DAT_1000e398
#define DAT_1000e398 (*(double *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003910
 */

longdouble recovered_10003910(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000e380 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000e388;
    } while ((float)DAT_1000e380 < param_1);
  }
  if (param_1 < (float)DAT_1000e390) {
    do {
      param_1 = param_1 + (float)DAT_1000e398;
    } while (param_1 < (float)DAT_1000e390);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_1000e368 +
         (fVar1 * fVar1) / DAT_1000e364 + fVar1 * DAT_1000e360 + 1.0);
}

#undef DAT_1000e360
#undef DAT_1000e364
#undef DAT_1000e368
#undef DAT_1000e380
#undef DAT_1000e388
#undef DAT_1000e390
#undef DAT_1000e398

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039a0
 */

longdouble recovered_100039a0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


#define local_14 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c0
 */

int recovered_100039c0(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  pbVar4 = param_1;
  while( true ) {
    bVar1 = *pbVar4;
    if ((4 < bVar1 - 9) && (bVar1 != 0x20)) break;
    pbVar4 = pbVar4 + 1;
  }
  uVar6 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar3 = pbVar4 + uVar6;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar4[uVar6 + 1] | 0x20) == 0x78)) {
      pbVar3 = pbVar4 + uVar6 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar3 == 0x30) {
      if ((pbVar4[uVar6 + 1] | 0x20) == 0x78) {
        pbVar3 = pbVar4 + uVar6 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar7 = 0;
  local_14 = param_1;
  while( true ) {
    pbVar4 = pbVar3 + 1;
    bVar2 = *pbVar3;
    iVar5 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar6 = iVar5 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar6 = iVar5 - 0x57;
    }
    else {
      uVar6 = iVar5 - 0x37;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar6 = 0xffffffff;
      }
    }
    if (param_3 <= uVar6) break;
    iVar7 = iVar7 * param_3 + uVar6;
    pbVar3 = pbVar4;
    local_14 = pbVar4;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_14;
  }
  iVar5 = -iVar7;
  if (bVar1 != 0x2d) {
    iVar5 = iVar7;
  }
  return iVar5;
}

#undef local_14

#define local_14 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b10
 */

int recovered_10003b10(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  pbVar4 = param_1;
  while( true ) {
    bVar1 = *pbVar4;
    if ((4 < bVar1 - 9) && (bVar1 != 0x20)) break;
    pbVar4 = pbVar4 + 1;
  }
  uVar6 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar3 = pbVar4 + uVar6;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar4[uVar6 + 1] | 0x20) == 0x78)) {
      pbVar3 = pbVar4 + uVar6 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar3 == 0x30) {
      if ((pbVar4[uVar6 + 1] | 0x20) == 0x78) {
        pbVar3 = pbVar4 + uVar6 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar7 = 0;
  local_14 = param_1;
  while( true ) {
    pbVar4 = pbVar3 + 1;
    bVar2 = *pbVar3;
    iVar5 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar6 = iVar5 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar6 = iVar5 - 0x57;
    }
    else {
      uVar6 = iVar5 - 0x37;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar6 = 0xffffffff;
      }
    }
    if (param_3 <= uVar6) break;
    iVar7 = iVar7 * param_3 + uVar6;
    pbVar3 = pbVar4;
    local_14 = pbVar4;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_14;
  }
  iVar5 = -iVar7;
  if (bVar1 != 0x2d) {
    iVar5 = iVar7;
  }
  return iVar5;
}

#undef local_14

#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000e370
#define DAT_1000e370 (*(float *)(((uintptr_t)pf_module_state + 0x5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c60
 */

longdouble recovered_10003c60(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  longdouble lVar9;
  longdouble lVar10;
  longdouble lVar11;

  pbVar3 = param_1;
  while( true ) {
    bVar4 = *pbVar3;
    if ((4 < bVar4 - 9) && (bVar4 != 0x20)) break;
    pbVar3 = pbVar3 + 1;
  }
  pbVar3 = pbVar3 + ((bVar4 - 0x2b & 0xfd) == 0);
  uVar2 = (uint)CONCAT11(*pbVar3,bVar4);
  bVar4 = *pbVar3 - 0x30U;
  lVar9 = (longdouble)0;
  if (bVar4 < 10) {
    lVar9 = (longdouble)0;
    do {
      lVar9 = lVar9 * (longdouble)DAT_1000e370 + (longdouble)(int)((uVar2 >> 8) - 0x30);
      pbVar8 = pbVar3 + 1;
      uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
      pbVar3 = pbVar3 + 1;
    } while ((byte)(*pbVar8 - 0x30U) < 10);
  }
  if ((char)(uVar2 >> 8) == '.') {
    pbVar8 = pbVar3 + 1;
    uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
    pbVar3 = pbVar3 + 1;
    if ((byte)(*pbVar8 - 0x30U) < 10) {
      lVar10 = (longdouble)0;
      lVar11 = (longdouble)1;
      do {
        lVar10 = lVar10 * (longdouble)DAT_1000e370 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_1000e370;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10003d33;
    }
  }
  lVar10 = (longdouble)0;
  if (9 < bVar4) {
    if (param_2 == (undefined4 *)0x0) {
      return (longdouble)0;
    }
    *param_2 = param_1;
    return (longdouble)0;
  }
LAB_10003d33:
  lVar10 = lVar10 + lVar9;
  if ((uVar2 >> 8 | 0x20) == 0x65) {
    iVar5 = 1;
    if (pbVar3[1] == 0x2b) {
      pbVar8 = pbVar3 + 2;
    }
    else if (pbVar3[1] == 0x2d) {
      pbVar8 = pbVar3 + 2;
      iVar5 = -1;
    }
    else {
      pbVar8 = pbVar3 + 1;
    }
    uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
    bVar4 = *pbVar8 - 0x30U;
    if (bVar4 < 10) {
      iVar6 = 0;
      do {
        iVar6 = ((uVar2 >> 8) - 0x30) + iVar6 * 10;
        pbVar1 = pbVar8 + 1;
        uVar2 = (uint)CONCAT11(*pbVar1,(char)uVar2);
        pbVar8 = pbVar8 + 1;
      } while ((byte)(*pbVar1 - 0x30U) < 10);
      if (bVar4 < 10) {
        iVar6 = iVar6 * iVar5;
        pbVar3 = pbVar8;
        if (iVar6 < 1) {
          if (iVar6 < 0) {
            do {
              lVar10 = lVar10 * (longdouble)DAT_1000e320;
              iVar6 = iVar6 + 1;
            } while (iVar6 != 0);
          }
        }
        else {
          uVar7 = iVar6 + 1;
          do {
            lVar10 = lVar10 + lVar10;
            uVar7 = uVar7 - 1;
          } while (1 < uVar7);
        }
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar3;
  }
  if ((char)uVar2 == '-') {
    lVar10 = -lVar10;
  }
  return lVar10;
}

#undef DAT_1000e320
#undef DAT_1000e370

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e20
 */

longdouble recovered_10003e20(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10003c60(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1000e370
#define DAT_1000e370 (*(float *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef str_1000ed73
#define str_1000ed73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5dU)))
#undef str_1000ed7d
#define str_1000ed7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa67U)))
#undef str_1000ed8e
#define str_1000ed8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa78U)))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e50
 */

int recovered_10003e50(byte *param_1,uint param_2,byte *param_3,double *param_4)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;

  if (param_2 != 0) {
    *param_1 = 0;
  }
  local_c4 = param_4;
  local_c0 = 0;
  local_bc = param_2;
  do {
    bVar6 = *param_3;
    if (bVar6 != 0x25) {
      if (bVar6 == 0) {
        if (param_2 != 0) {
          *param_1 = 0;
        }
        return local_c0;
      }
      if (1 < local_bc) {
        *param_1 = bVar6;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10003ee3;
    }
    bVar6 = param_3[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *param_1 = 0x25;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      param_3 = param_3 + 1;
      goto LAB_10003ee3;
    }
    pbVar10 = param_3 + 2;
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10003f45;
        }
        break;
      }
      param_3 = param_3 + 1;
      bVar6 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
    do {
      bVar6 = param_3[1];
      pbVar10 = param_3 + 1;
      param_3 = pbVar10;
    } while ((byte)(bVar6 - 0x30U) < 10);
LAB_10003f45:
    iVar12 = -1;
    if (bVar6 == 0x2e) {
      bVar6 = pbVar10[1];
      if (bVar6 == 0x2a) {
        iVar12 = *(int *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        bVar6 = pbVar10[2];
        pbVar10 = pbVar10 + 2;
      }
      else {
        pbVar10 = pbVar10 + 1;
        iVar12 = 0;
        if ((byte)(bVar6 - 0x30U) < 10) {
          iVar13 = 0;
          do {
            iVar12 = (uint)(byte)(bVar6 - 0x30U) + iVar13 * 10;
            if ((int)(((byte)(bVar6 - 0x30U) ^ 0x7ffffffe) / 10) < iVar13) {
              iVar12 = 0x7fffffff;
            }
            bVar6 = pbVar10[1];
            pbVar10 = pbVar10 + 1;
            iVar13 = iVar12;
          } while ((byte)(bVar6 - 0x30U) < 10);
        }
      }
    }
    cVar7 = '\0';
    bVar19 = false;
    param_3 = pbVar10;
    switch((uintptr_t)(bVar6)) {
    case 0x4c:
      param_3 = pbVar10 + 1;
      cVar7 = '\b';
      bVar19 = true;
      break;
    case 0x68:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x68) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] != 0x68) + '\x01';
      goto LAB_1000402c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10004038;
    case 0x6c:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x6c) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_1000402c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10004038;
    case 0x7a:
      cVar7 = '\x05';
LAB_10004038:
      param_3 = pbVar10 + 1;
      bVar19 = false;
    }
    local_b8 = param_1;
    switch((uintptr_t)(*param_3)) {
    case 0x49:
    case 100:
    case 0x69:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(char *)local_c4;
        break;
      case '\x02':
        uVar15 = (uint)*(short *)local_c4;
        break;
      default:
        uVar15 = *(uint *)local_c4;
        break;
      case '\x04':
      case '\a':
        uVar15 = *(uint *)local_c4;
        uVar8 = *(uint *)((int)local_c4 + 4);
        local_c4 = local_c4 + 1;
        goto LAB_10004349;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004349:
      if ((int)uVar8 < 0) {
        if (1 < local_bc) {
          *param_1 = 0x2d;
          param_1 = param_1 + 1;
          local_bc = local_bc - 1;
        }
        local_c0 = local_c0 + 1;
        bVar19 = uVar15 != 0;
        uVar15 = -uVar15;
        uVar8 = -(uint)bVar19 - uVar8;
        local_b8 = param_1;
      }
      iVar12 = 0;
      do {
        uVar16 = uVar8 << 0x1f | uVar15 >> 1;
        uVar11 = uVar8 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000ed8e[uVar15 + uVar9 * -10];
        iVar12 = iVar12 + 1;
        bVar19 = 9 < uVar15;
        bVar20 = uVar8 != 0;
        uVar5 = -uVar8;
        uVar8 = (uVar11 - (uVar16 < uVar18)) * -0x33333333 +
                uVar17 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
        uVar15 = uVar9;
      } while (bVar20 || uVar5 < bVar19);
      if (iVar12 != 0) {
        local_c0 = local_c0 + iVar12;
        do {
          if (1 < local_bc) {
            *local_b8 = abStack_51[iVar12];
            local_b8 = local_b8 + 1;
            local_bc = local_bc - 1;
          }
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      goto LAB_10003e98;
    default:
      if (1 < local_bc) {
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10003ee3;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_10004477;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_10004477;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_10004477:
        local_c4 = (double *)((int)local_c4 + 4);
        uVar8 = 0;
        break;
      case '\x04':
      case '\a':
        uVar15 = *(uint *)local_c4;
        uVar8 = *(uint *)((int)local_c4 + 4);
        local_c4 = local_c4 + 1;
        break;
      case '\x06':
        uVar15 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar8 = (int)uVar15 >> 0x1f;
        break;
      default:
        uVar15 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar8 = 0;
      }
      pcVar14 = str_1000ed8e;
      if (*param_3 == 0x58) {
        pcVar14 = str_1000ed7d;
      }
      iVar12 = 0;
      do {
        abStack_51[iVar12 + 1] = pcVar14[uVar15 & 0xf];
        iVar12 = iVar12 + 1;
        bVar19 = 0xf < uVar15;
        bVar20 = uVar8 != 0;
        uVar5 = -uVar8;
        uVar15 = uVar8 << 0x1c | uVar15 >> 4;
        uVar8 = uVar8 >> 4;
      } while (bVar20 || uVar5 < bVar19);
      local_c0 = local_c0 + iVar12;
      do {
        if (1 < local_bc) {
          *param_1 = abStack_51[iVar12];
          param_1 = param_1 + 1;
          local_bc = local_bc - 1;
        }
        iVar12 = iVar12 + -1;
        pdVar1 = local_c4;
      } while (iVar12 != 0);
LAB_1000444c:
      local_c4 = pdVar1;
      param_3 = param_3 + 1;
      break;
    case 99:
      if (1 < local_bc) {
        *param_1 = *(byte *)local_c4;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      local_c4 = (double *)((int)local_c4 + 4);
LAB_10003ee3:
      local_c0 = local_c0 + 1;
LAB_10003ee4:
      param_3 = param_3 + 1;
      break;
    case 0x66:
      if (bVar19) {
        if (1 < local_bc) {
          *param_1 = 0x30;
          if (local_bc - 3 < 0xfffffffe) {
            param_1[1] = 0x2e;
            uVar8 = local_bc & 0xfffffffe;
            if (uVar8 == 2) {
              param_1 = param_1 + 2;
            }
            else {
              param_1[2] = 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                param_1[3] = 0x30;
                if (uVar8 == 4) {
                  param_1 = param_1 + 4;
                }
                else {
                  param_1[4] = 0x30;
                  if (local_bc - 7 < 0xfffffffe) {
                    param_1[5] = 0x30;
                    if (uVar8 == 6) {
                      param_1 = param_1 + 6;
                    }
                    else {
                      param_1[6] = 0x30;
                      if (local_bc - 9 < 0xfffffffe) {
                        param_1[7] = 0x30;
                        param_1 = param_1 + 8;
                        local_bc = local_bc - 8;
                        goto LAB_10004585;
                      }
                      param_1 = param_1 + 7;
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
          local_bc = 1;
        }
LAB_10004585:
        local_c4 = local_c4 + 2;
        local_c0 = local_c0 + 8;
        param_3 = param_3 + 1;
      }
      else {
        dVar2 = *local_c4;
        if (dVar2 < 0.0) {
          if (1 < local_bc) {
            *param_1 = 0x2d;
            param_1 = param_1 + 1;
            local_bc = local_bc - 1;
          }
          local_c0 = local_c0 + 1;
          dVar2 = -dVar2;
          local_b8 = param_1;
        }
        local_c4 = local_c4 + 1;
        iVar12 = 0;
        uVar8 = (int)ROUND(dVar2);
        uVar15 = 0;
        do {
          uVar16 = uVar15 << 0x1f | uVar8 >> 1;
          uVar11 = uVar15 >> 1;
          uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
          uVar17 = uVar16 - uVar18;
          lVar3 = (ulonglong)uVar17 * 0xcccccccd;
          uVar9 = (uint)lVar3;
          abStack_51[iVar12 + 1] = str_1000ed8e[uVar8 + uVar9 * -10];
          iVar12 = iVar12 + 1;
          bVar19 = 9 < uVar8;
          bVar20 = uVar15 != 0;
          uVar5 = -uVar15;
          uVar8 = uVar9;
          uVar15 = (uVar11 - (uVar16 < uVar18)) * -0x33333333 +
                   uVar17 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
        } while (bVar20 || uVar5 < bVar19);
        if (iVar12 != 0) {
          local_c0 = local_c0 + iVar12;
          do {
            if (1 < local_bc) {
              *local_b8 = abStack_51[iVar12];
              local_b8 = local_b8 + 1;
              local_bc = local_bc - 1;
            }
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        if (1 < local_bc) {
          *local_b8 = 0x2e;
          if (local_bc - 1 < 2) {
            local_b8 = local_b8 + 1;
            local_bc = local_bc - 1;
          }
          else {
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_1000e370;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000e370;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000e370;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_1000e370;
                  dVar2 = (dVar2 - (double)iVar12) * dVar4;
                  iVar12 = (int)ROUND(dVar2);
                  local_b8[4] = (char)iVar12 + 0x30;
                  dVar4 = (dVar2 - (double)iVar12) * dVar4;
                  iVar12 = (int)ROUND(dVar4);
                  if (local_bc - 7 < 0xfffffffe) {
                    local_b8[5] = (char)iVar12 + 0x30;
                    if (uVar15 == 6) {
                      local_b8 = local_b8 + 6;
                    }
                    else {
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_1000e370);
                      local_b8[6] = local_80 + 0x30;
                      local_b8 = local_b8 + 7;
                      uVar8 = local_bc - 7;
                    }
                  }
                  else {
                    local_b8 = local_b8 + 5;
                  }
                }
              }
              else {
                local_b8 = local_b8 + 3;
              }
              local_bc = uVar8;
            }
          }
        }
        local_c0 = local_c0 + 7;
        param_3 = param_3 + 1;
        param_1 = local_b8;
      }
      break;
    case 0x70:
      uVar8 = *(uint *)local_c4;
      if (1 < local_bc) {
        *param_1 = 0x30;
        if (local_bc - 3 < 0xfffffffe) {
          param_1[1] = 0x78;
          local_b8 = param_1 + 2;
          local_bc = local_bc - 2;
        }
        else {
          local_b8 = param_1 + 1;
          local_bc = 1;
        }
      }
      local_c4 = (double *)((int)local_c4 + 4);
      iVar12 = 0;
      do {
        abStack_51[iVar12 + 1] = str_1000ed8e[uVar8 & 0xf];
        iVar12 = iVar12 + 1;
        bVar19 = 0xf < uVar8;
        uVar8 = uVar8 >> 4;
      } while (bVar19);
      local_c0 = local_c0 + 2 + iVar12;
      param_1 = local_b8;
      do {
        if (1 < local_bc) {
          *param_1 = abStack_51[iVar12];
          param_1 = param_1 + 1;
          local_bc = local_bc - 1;
        }
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      goto LAB_10003ee4;
    case 0x73:
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_1000ed73;
        if (*(byte **)local_c4 != (byte *)0x0) {
          pbVar10 = *(byte **)local_c4;
        }
        do {
          if (*pbVar10 == 0) break;
          if (1 < local_bc) {
            *param_1 = *pbVar10;
            param_1 = param_1 + 1;
            local_bc = local_bc - 1;
          }
          pbVar10 = pbVar10 + 1;
          local_c0 = local_c0 + 1;
          iVar12 = iVar12 - (uint)(0 < iVar12);
        } while (iVar12 != 0);
      }
      goto LAB_1000444c;
    case 0x75:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar8 = (uint)*(byte *)local_c4;
        break;
      case '\x02':
        uVar8 = (uint)*(ushort *)local_c4;
        break;
      case '\x03':
      case '\x05':
        uVar8 = *(uint *)local_c4;
        break;
      case '\x04':
      case '\a':
        uVar8 = *(uint *)local_c4;
        uVar15 = *(uint *)((int)local_c4 + 4);
        local_c4 = local_c4 + 1;
        goto LAB_1000465f;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_1000465f;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_1000465f:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000ed8e[uVar8 + uVar9 * -10];
        iVar12 = iVar12 + 1;
        bVar19 = 9 < uVar8;
        bVar20 = uVar15 != 0;
        uVar5 = -uVar15;
        uVar8 = uVar9;
        uVar15 = (uVar11 - (uVar16 < uVar18)) * -0x33333333 +
                 uVar17 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
      } while (bVar20 || uVar5 < bVar19);
      if (iVar12 != 0) {
        local_c0 = local_c0 + iVar12;
        do {
          if (1 < local_bc) {
            *local_b8 = abStack_51[iVar12];
            local_b8 = local_b8 + 1;
            local_bc = local_bc - 1;
          }
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
LAB_10003e98:
      param_3 = param_3 + 1;
      param_1 = local_b8;
    }
  } while( true );
}

#undef DAT_1000e370
#undef str_1000ed73
#undef str_1000ed7d
#undef str_1000ed8e
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_80
#undef abStack_51

#define dStack00000010 (*(double *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bb0
 */

int recovered_10004bb0(char *buffer,ulong capacity,char *format,...)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10003e50((byte *)buffer,capacity,(byte *)format,&dStack00000010);
  return iVar1;
}

#undef dStack00000010

#undef DAT_10000000
#define DAT_10000000 (*(uint8_t *)(0x10000000U))
#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_10000004
#define DAT_10000004 (*(uint8_t *)(0x10000004U))
#undef DAT_10000008
#define DAT_10000008 (*(uint8_t *)(0x10000008U))
#undef DAT_1000000c
#define DAT_1000000c (*(uint8_t *)(0x1000000cU))
#undef DAT_1000f3a0
#define DAT_1000f3a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x108aU)))
#undef DAT_1000f3a8
#define DAT_1000f3a8 (*(int * *)(((uintptr_t)pf_module_state + 0x1092U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004be0(ulong address,ulong size,void *tail)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;

  puVar5 = (undefined *)0xffffffff;
  if (!CARRY4(address,size)) {
    puVar5 = (undefined *)(address + size);
  }
  if (((address < 0x10000000) && (address < puVar5)) && ((undefined *)0x8000000 < puVar5)) {
    if (address < 0x8000000) {
      if (tail == (void *)0x0) {
        return;
      }
      piVar4 = (int *)(address + 0xf & 0xffffff0);
      uVar3 = (0x8000000 - address) - ((int)piVar4 - address);
      if (((int)piVar4 - address <= 0x8000000 - address && uVar3 != 0) &&
         (uVar3 = uVar3 & 0xfffffff0, 0x20 < uVar3)) {
        *piVar4 = uVar3 - 0x10;
        piVar4[1] = 0;
        iVar1 = *(int *)tail;
        piVar4[2] = iVar1;
        *(undefined1 *)(piVar4 + 3) = 1;
        puVar2 = (undefined4 *)(iVar1 + 4);
        if (DAT_1000f3a0 == 0) {
          puVar2 = &DAT_1000f3a0;
        }
        *puVar2 = piVar4;
        *(int **)tail = piVar4;
        if (DAT_1000f3a8 == (int *)0x0) {
          DAT_1000f3a8 = piVar4;
        }
      }
    }
    if (tail == (void *)0x0 || puVar5 < &DAT_10000001) {
      return;
    }
    if (((uint)puVar5 & 0xfffffff0) + 0xf0000000 < 0x21) {
      return;
    }
    _DAT_10000000 = ((uint)puVar5 & 0xfffffff0) + 0xeffffff0;
    _DAT_10000004 = 0;
    _DAT_10000008 = *(int *)tail;
    DAT_1000000c = 1;
    puVar2 = (undefined4 *)(_DAT_10000008 + 4);
    if (DAT_1000f3a0 == 0) {
      puVar2 = &DAT_1000f3a0;
    }
    *puVar2 = 0x10000000;
    *(undefined4 *)tail = 0x10000000;
    if (DAT_1000f3a8 != (int *)0x0) {
      return;
    }
    piVar4 = (int *)&DAT_10000000;
  }
  else {
    if (CARRY4(address,size)) {
      return;
    }
    if (0xfffffff0 < address) {
      return;
    }
    if (tail == (void *)0x0) {
      return;
    }
    piVar4 = (int *)(address + 0xf & 0xfffffff0);
    uVar3 = size - ((int)piVar4 - address);
    if (size < (int)piVar4 - address || uVar3 == 0) {
      return;
    }
    uVar3 = uVar3 & 0xfffffff0;
    if (uVar3 < 0x21) {
      return;
    }
    *piVar4 = uVar3 - 0x10;
    piVar4[1] = 0;
    iVar1 = *(int *)tail;
    piVar4[2] = iVar1;
    *(undefined1 *)(piVar4 + 3) = 1;
    puVar2 = (undefined4 *)(iVar1 + 4);
    if (DAT_1000f3a0 == 0) {
      puVar2 = &DAT_1000f3a0;
    }
    *puVar2 = piVar4;
    *(int **)tail = piVar4;
    if (DAT_1000f3a8 != (int *)0x0) {
      return;
    }
  }
  DAT_1000f3a8 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_1000f3a0
#undef DAT_1000f3a8
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d80
 */

void * recovered_10004d80(void *chunk,ulong first)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  uint uVar3;

  pvVar2 = (void *)0x0;
  if ((((chunk != (void *)0x0) && ((first & 0xf) == 0)) && (*(char *)((int)chunk + 0xc) != '\0')) &&
     ((((int)chunk + 0x10U < first && (uVar3 = first - ((int)chunk + 0x10U), 0x1f < uVar3)) &&
      (uVar3 <= *(uint *)chunk)))) {
    pvVar2 = (void *)(first - 0x10);
    *(uint *)(first - 0x10) = *(uint *)chunk - uVar3;
    iVar1 = *(int *)((int)chunk + 4);
    *(int *)(first - 0xc) = iVar1;
    *(void **)(first - 8) = chunk;
    *(undefined1 *)(first - 4) = 1;
    if (iVar1 != 0) {
      *(void **)(iVar1 + 8) = pvVar2;
    }
    *(uint *)chunk = uVar3 - 0x10;
    *(void **)((int)chunk + 4) = pvVar2;
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004de0
 */

bool recovered_10004de0(void *chunk,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;

  if (chunk == (void *)0x0) {
    return false;
  }
  uVar4 = size + 0xf & 0xfffffff0;
  uVar5 = *(uint *)chunk - uVar4;
  if (uVar5 < 0x20 || *(uint *)chunk < uVar4) {
    bVar3 = false;
  }
  else {
    iVar1 = (int)chunk + uVar4 + 0x10;
    *(uint *)((int)chunk + uVar4 + 0x10) = uVar5 - 0x10;
    iVar2 = *(int *)((int)chunk + 4);
    *(int *)((int)chunk + uVar4 + 0x14) = iVar2;
    *(void **)((int)chunk + uVar4 + 0x18) = chunk;
    *(undefined1 *)((int)chunk + uVar4 + 0x1c) = 1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar1;
    }
    *(uint *)chunk = uVar4;
    *(int *)((int)chunk + 4) = iVar1;
    bVar3 = true;
  }
  return bVar3;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_1000f3ac
#define DAT_1000f3ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1096U)))
#undef DAT_1000f3b0
#define DAT_1000f3b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x109aU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#define local_214 (*(undefined1 (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004e40(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000f3ac != 0) {
          DAT_1000f3ac = DAT_1000f3ac - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000f3ac == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001e00(local_214,&DAT_1000f3b0,DAT_1000f3ac);
            uVar3 = DAT_1000f3ac;
          }
          local_214[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0))))))
          {
            (*_DAT_00280840)(local_214);
          }
          DAT_1000f3ac = 0;
        }
        else {
          if (DAT_1000f3ac - 0x1ff < 0xfffffe00) {
            recovered_10001e00(local_214,&DAT_1000f3b0,DAT_1000f3ac);
            local_214[DAT_1000f3ac] = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
              (*_DAT_00280840)(local_214);
            }
            DAT_1000f3ac = 0;
          }
          pcVar1 = &DAT_1000f3b0 + DAT_1000f3ac;
          DAT_1000f3ac = DAT_1000f3ac + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000f3ac
#undef DAT_1000f3b0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_214

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_1000f3ac
#define DAT_1000f3ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1096U)))
#undef DAT_1000f3b0
#define DAT_1000f3b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x109aU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#define local_21c (*(undefined1 (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005000(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000f3ac == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001e00(local_21c,&DAT_1000f3b0,DAT_1000f3ac);
    uVar1 = DAT_1000f3ac;
  }
  local_21c[uVar1] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
    (*_DAT_00280840)(local_21c);
  }
  DAT_1000f3ac = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000f3ac
#undef DAT_1000f3b0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_21c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_1000f3ac
#define DAT_1000f3ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1096U)))
#undef DAT_1000f3b0
#define DAT_1000f3b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x109aU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#define local_210 (*(undefined1 (*)[528])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100050a0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000f3ac != 0) {
    recovered_10001e00(local_210,&DAT_1000f3b0,DAT_1000f3ac);
    local_210[DAT_1000f3ac] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
      (*_DAT_00280840)(local_210);
    }
    DAT_1000f3ac = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000f3ac
#undef DAT_1000f3b0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_210

#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
#undef DAT_1000ed9f
#define DAT_1000ed9f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa89U)))
#define acStack_150 (*(char (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005130
 */

void recovered_10005130(char *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  char *format;

  format = &DAT_1000ed9f;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar1 = &DAT_1000ed7c;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  iVar2 = recovered_10004bb0(acStack_150,0x140,format,puVar1);
  if (0 < iVar2) {
    recovered_10004e40(acStack_150,iVar2);
  }
  return;
}

#undef DAT_1000ed7c
#undef DAT_1000ed9f
#undef acStack_150

#undef DAT_1000edbd
#define DAT_1000edbd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaa7U)))
#undef str_1000eda2
#define str_1000eda2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005190
 */

void recovered_10005190(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002550(str_1000eda2);
  recovered_10004e40(str_1000eda2,uVar1);
  uVar1 = recovered_10002550(&DAT_1000edbd);
  recovered_10004e40(&DAT_1000edbd,uVar1);
  return;
}

#undef DAT_1000edbd
#undef str_1000eda2

#undef DAT_1000edbd
#define DAT_1000edbd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaa7U)))
#undef str_1000edc0
#define str_1000edc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaaaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051e0
 */

void recovered_100051e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002550(str_1000edc0);
  recovered_10004e40(str_1000edc0,uVar1);
  uVar1 = recovered_10002550(&DAT_1000edbd);
  recovered_10004e40(&DAT_1000edbd,uVar1);
  return;
}

#undef DAT_1000edbd
#undef str_1000edc0

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
#undef DAT_1000f3ac
#define DAT_1000f3ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1096U)))
#undef DAT_1000f3b0
#define DAT_1000f3b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x109aU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#undef _DAT_00280844
#define _DAT_00280844 (*(code * *)(0x280844U))
#define local_214 (*(undefined1 (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005230(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000f3ac != 0) {
      recovered_10001e00(local_214,&DAT_1000f3b0,DAT_1000f3ac);
      local_214[DAT_1000f3ac] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000f3ac = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)(param_1,param_2,param_3,param_4);
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_1000f3ac
#undef DAT_1000f3b0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005330
 */

undefined4 recovered_10005330(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005340
 */

void recovered_10005340(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005350
 */

undefined1 recovered_10005350(void)

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
#undef DAT_1000ed9f
#define DAT_1000ed9f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa89U)))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceaU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef str_1000ee41
#define str_1000ee41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2bU)))
#undef str_1000ee4e
#define str_1000ee4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb38U)))
#undef str_1000ee5c
#define str_1000ee5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb46U)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(void * *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005360
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005360(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  void *destination;
  bool bVar8;

  if (param_1 == (char *)0x0 || param_2 == (char *)0x0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002590(param_1,str_1000ee41);
  if (iVar3 == 0) {
    local_24 = 1;
  }
  else {
    iVar4 = recovered_10002590(param_1,str_1000ee4e);
    if (iVar4 == 0) {
      local_24 = 2;
    }
    else {
      iVar4 = recovered_10002590(param_1,str_1000ee5c);
      if (iVar4 != 0) {
        puVar5 = recovered_10001d10(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_10002090(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10002780(param_2,'r');
          bVar8 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002780(param_2,'+');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002780(param_2,'a');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar8;
          pcVar6 = recovered_10002780(param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002780(param_2,'a');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002780(param_2,'+');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar8 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar8;
          pcVar6 = recovered_10002780(param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          recovered_10004bb0((char *)(puVar5 + 1),0xf1,&DAT_1000ed9f,param_1);
          recovered_10002090(&local_20,0,0xc);
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             (((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00280834)(param_1,&local_20), iVar3 != 0)))) {
            pcVar6 = recovered_10002780(param_2,'w');
            if (local_1c != 0 && pcVar6 == (char *)0x0) {
              if (*(char *)((int)puVar5 + 0x111) == '\x01') {
                uVar7 = puVar5[0x41];
                if (uVar7 < local_1c) {
                  uVar2 = 0x100;
                  if (uVar7 != 0) {
                    uVar2 = uVar7;
                  }
                  do {
                    uVar7 = uVar2;
                    uVar2 = uVar7 * 2;
                  } while (uVar7 < local_1c);
                  destination = recovered_10001db0((void *)puVar5[0x3f],uVar7);
                  if (destination == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_1000f000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_100056a7;
                  }
                  puVar5[0x3f] = destination;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = destination;
                }
                else {
                  destination = (void *)puVar5[0x3f];
                }
                recovered_10001e00(destination,local_20,local_1c);
              }
              else {
                puVar5[0x3e] = local_20;
              }
              puVar5[0x40] = local_1c;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x10005684;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_1000f000 = 2;
LAB_100056a7:
            recovered_10001d60(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x10005684:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_10005505;
      }
      local_24 = 3;
    }
  }
  puVar5 = recovered_10001d10(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_10002090(puVar5,0,800);
    *puVar5 = local_24;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    recovered_10004bb0((char *)(puVar5 + 1),0xf1,&DAT_1000ed9f,param_1);
    return puVar5;
  }
LAB_10005505:
  *(undefined4 *)PTR_DAT_1000f000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_1000ed9f
#undef PTR_DAT_1000f000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_1000ee41
#undef str_1000ee4e
#undef str_1000ee5c
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceaU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005710
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005710(char *param_1,char *param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_100057e7;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       (_DAT_00280838 != (code *)0x0)) {
      iVar1 = (*_DAT_00280838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_100057ca;
      }
    }
    *(undefined4 *)PTR_DAT_1000f000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_100057ca:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10001d60((void *)param_3[0x3f]);
  }
  recovered_10001d60(param_3);
LAB_100057e7:
  recovered_10005360(param_1,param_2);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000f000
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
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceaU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005800(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       ((_DAT_00280838 != (code *)0x0 &&
        (iVar1 = (*_DAT_00280838)(param_1 + 1,param_1[0x3e],param_1[0x40]), iVar1 != 0)))) {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
    else {
      *(undefined4 *)PTR_DAT_1000f000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10001d60((void *)param_1[0x3f]);
  }
  recovered_10001d60(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000f000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058e0
 */

uint recovered_100058e0(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;

  uVar1 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     ((param_4 != (int *)0x0 && ((char)param_4[0x44] == '\x01')))) {
    if ((*param_4 == 0) && (param_4[0x43] == -1)) {
      uVar3 = param_4[0x42];
      uVar2 = param_4[0x40] - uVar3;
      if ((uint)param_4[0x40] < uVar3 || uVar2 == 0) {
        *(undefined1 *)(param_4 + 0x45) = 1;
      }
      else {
        uVar5 = 0xffffffff;
        if ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) == 0) {
          uVar5 = param_3 * param_2;
        }
        uVar1 = uVar5;
        if (uVar2 < uVar5) {
          uVar1 = uVar2;
        }
        recovered_10001e00(param_1,(void *)(uVar3 + param_4[0x3e]),uVar1);
        param_4[0x42] = param_4[0x42] + uVar1;
        if (uVar2 < uVar5) {
          *(undefined1 *)(param_4 + 0x45) = 1;
        }
        uVar1 = uVar1 / param_2;
      }
    }
    else {
      uVar1 = 0;
      do {
        uVar3 = param_2;
        puVar4 = param_1;
        do {
          uVar2 = recovered_100059f0(param_4);
          if (uVar2 == 0xffffffff) {
            return uVar1;
          }
          *puVar4 = (char)uVar2;
          puVar4 = puVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        uVar1 = uVar1 + 1;
        param_1 = param_1 + param_2;
      } while (uVar1 != param_3);
      uVar1 = param_3;
    }
  }
  return uVar1;
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
#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
#undef DAT_1000f3ac
#define DAT_1000f3ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1096U)))
#undef DAT_1000f3b0
#define DAT_1000f3b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x109aU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#undef _DAT_00280844
#define _DAT_00280844 (*(code * *)(0x280844U))
#define local_214 (*(undefined1 (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100059f0(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x44] != '\x01') {
    return 0xffffffff;
  }
  uVar3 = param_1[0x43];
  if (uVar3 != 0xffffffff) {
    param_1[0x43] = -1;
    return uVar3;
  }
  if (*param_1 == 1) {
    uVar3 = param_1[199];
    if (uVar3 < (uint)param_1[0xc6]) {
LAB_10005a51:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000f3ac != 0) {
      recovered_10001e00(local_214,&DAT_1000f3b0,DAT_1000f3ac);
      local_214[DAT_1000f3ac] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000f3ac = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_1000ed7c,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10002550((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_10005a51;
      }
    }
  }
  else {
    uVar3 = param_1[0x42];
    if (uVar3 < (uint)param_1[0x40]) {
      param_1[0x42] = uVar3 + 1;
      return (uint)*(byte *)(param_1[0x3e] + uVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x45) = 1;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_1000ed7c
#undef DAT_1000f3ac
#undef DAT_1000f3b0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bb0
 */

int recovered_10005bb0(char *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong count;
  uint uVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (char *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_10005d1a:
    param_3 = 0;
  }
  else {
    count = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10004e40(param_1,count);
      param_4[0x42] = param_4[0x42] + count;
      return param_3;
    }
    if (*(char *)((int)param_4 + 0x112) == '\0') {
      uVar4 = param_4[0x42];
    }
    else {
      uVar4 = param_4[0x40];
      param_4[0x42] = uVar4;
    }
    uVar2 = param_4[0x41];
    if (uVar2 < uVar4 + count) {
      uVar1 = 0x100;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 * 2;
      } while (uVar2 < uVar4 + count);
      pvVar3 = recovered_10001db0((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000f000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_10005d1a;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_10002090((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10001e00((void *)(uVar4 + param_4[0x3f]),param_1,count);
    uVar4 = count + param_4[0x42];
    param_4[0x42] = uVar4;
    if (param_4[0x40] < uVar4) {
      param_4[0x40] = uVar4;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000f000

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d30
 */

undefined4 recovered_10005d30(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10005d49;
        iVar1 = 0x100;
      }
      param_2 = param_2 + *(int *)((int)param_1 + iVar1);
    }
    if (-1 < (int)param_2) {
      param_1[0x42] = param_2;
      *(bool *)(param_1 + 0x45) = (uint)param_1[0x40] <= param_2;
      param_1[0x43] = -1;
      return 0;
    }
  }
LAB_10005d49:
  *(undefined4 *)PTR_DAT_1000f000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000f000

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dd0
 */

undefined4 recovered_10005dd0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_1000f000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceaU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005e00(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
        ((0xb < _DAT_00280808 && ((0x3b < _DAT_00280808 && (_DAT_00280838 != (code *)0x0)))))) &&
       (iVar2 = (*_DAT_00280838)(param_1 + 1,param_1[0x3e],param_1[0x40]), iVar2 != 0)) {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
    *(undefined4 *)PTR_DAT_1000f000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000f000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ec0
 */

undefined1 recovered_10005ec0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x114);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ee0
 */

undefined1 recovered_10005ee0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x115);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f00
 */

void recovered_10005f00(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f30
 */

uint recovered_10005f30(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0xffffffff && param_2 != 0) {
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x10c) = uVar1;
    *(undefined1 *)(param_2 + 0x114) = 0;
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
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceaU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(code * *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005f70(int param_1)

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
       (((0x3f < _DAT_00280808 && (_DAT_0028083c != (code *)0x0)) &&
        (iVar1 = (*_DAT_0028083c)(param_1), iVar1 != 0)))) {
      return 0;
    }
  }
  *(undefined4 *)PTR_DAT_1000f000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef PTR_DAT_1000f000
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
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceaU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(code * *)(0x28083cU))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005ff0(int param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
  }
  else {
    recovered_10002090(&local_20,0,0xc);
    uVar2 = 2;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)))) {
      iVar1 = (*_DAT_00280834)(param_1,&local_20);
      uVar2 = 2;
      if (iVar1 != 0) {
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 &&
            (((0x3b < _DAT_00280808 && (_DAT_00280838 != (code *)0x0)) &&
             (iVar1 = (*_DAT_00280838)(param_2,local_20,local_1c), iVar1 != 0)))))) {
          uVar2 = 5;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 && ((0x3f < _DAT_00280808 && (_DAT_0028083c != (code *)0x0))))))
          {
            iVar1 = (*_DAT_0028083c)(param_1);
            uVar2 = 5;
            if (iVar1 != 0) {
              return 0;
            }
          }
        }
        else {
          uVar2 = 5;
        }
      }
    }
    *(undefined4 *)PTR_DAT_1000f000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef PTR_DAT_1000f000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef _DAT_0028083c
#undef local_20
#undef local_1c

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
#define _DAT_00280834 (*(code * *)(0x280834U))
#define local_20 (*(void * *)(pf_stack_frame + 16))
#define local_1c (*(ulong *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006170
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006170(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if ((((param_3 == (ulong *)0x0 || (param_2 == (undefined4 *)0x0 || param_1 == 0)) ||
       (recovered_10002090(&local_20,0,0xc), _DAT_00280800 != 0x50414d57)) || (_DAT_00280804 == 0))
     || (((_DAT_00280808 < 0xc || (_DAT_00280808 < 0x38)) ||
         ((_DAT_00280834 == (code *)0x0 || (iVar1 = (*_DAT_00280834)(param_1,&local_20), iVar1 == 0)
          ))))) {
    return 0;
  }
  destination = recovered_10001d10(local_1c + (local_1c == 0));
  if (destination == (void *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (local_1c != 0) {
    recovered_10001e00(destination,local_20,local_1c);
    uVar2 = local_1c;
  }
  *param_2 = destination;
  *param_3 = uVar2;
  return CONCAT31((int3)(uVar2 >> 8),1);
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef local_20
#undef local_1c

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
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006250(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((param_1 == 0) || (param_2 == 0 && param_3 != 0)) || (_DAT_00280800 != 0x50414d57)) ||
     (((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)) ||
      ((_DAT_00280808 < 0x3c || (_DAT_00280838 == (code *)0x0)))))) {
    return false;
  }
  iVar1 = (*_DAT_00280838)(param_1,param_2,param_3);
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
 * Address: 0x100062d0
 */

undefined4 recovered_100062d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062e0
 */

void recovered_100062e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062f0
 */

undefined4 recovered_100062f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006300
 */

undefined4 recovered_10006300(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006310
 */

undefined4 recovered_10006310(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006320
 */

int recovered_10006320(char *left,char *right,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  bool bVar3;

  if (count == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    while( true ) {
      bVar1 = left[iVar2];
      if (bVar1 != right[iVar2]) break;
      if (bVar1 == 0) {
        return 0;
      }
      bVar3 = count - 1 == iVar2;
      iVar2 = iVar2 + 1;
      if (bVar3) {
        return 0;
      }
    }
    iVar2 = (uint)bVar1 - (uint)(byte)right[iVar2];
  }
  return iVar2;
}


#undef DAT_1000edd0
#define DAT_1000edd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabaU)))
#undef str_1000edd3
#define str_1000edd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabdU)))
#undef str_1000ede0
#define str_1000ede0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacaU)))
#undef str_1000edea
#define str_1000edea (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad4U)))
#undef str_1000edfe
#define str_1000edfe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae8U)))
#undef str_1000ee0c
#define str_1000ee0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf6U)))
#undef str_1000ee1e
#define str_1000ee1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb08U)))
#undef str_1000ee2a
#define str_1000ee2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb14U)))
#undef str_1000ee3b
#define str_1000ee3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb25U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006370
 */

char * recovered_10006370(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000edd0;
  switch((uintptr_t)(param_1)) {
  case 0:
    break;
  default:
    pcVar1 = str_1000ee3b;
    break;
  case 2:
    pcVar1 = str_1000edd3;
    break;
  case 5:
    pcVar1 = str_1000ede0;
    break;
  case 9:
    pcVar1 = str_1000edea;
    break;
  case 0xc:
    pcVar1 = str_1000edfe;
    break;
  case 0xd:
    pcVar1 = str_1000ee0c;
    break;
  case 0x11:
    pcVar1 = str_1000ee1e;
    break;
  case 0x16:
    pcVar1 = str_1000ee2a;
  }
  return pcVar1;
}

#undef DAT_1000edd0
#undef str_1000edd3
#undef str_1000ede0
#undef str_1000edea
#undef str_1000edfe
#undef str_1000ee0c
#undef str_1000ee1e
#undef str_1000ee2a
#undef str_1000ee3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006440
 */

undefined4 recovered_10006440(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006450
 */

undefined4 recovered_10006450(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000f5b0
#define DAT_1000f5b0 (*(int *)(((uintptr_t)pf_module_state + 0x129aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006460
 */

void recovered_10006460(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000f5b0 = DAT_1000f5b0 + 1;
  return;
}

#undef DAT_1000f5b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006480
 */

longlong recovered_10006480(longdouble param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10002ec0((double)param_1);
  return lVar1;
}


#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064a0
 */

uint recovered_100064a0(byte *param_1,double *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10003e50(local_21c,0x200,param_1,param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10004e40((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064f0
 */

uint recovered_100064f0(byte *param_1,double param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10003e50(local_21c,0x200,param_1,&param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10004e40((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

/* Native IA32 exception-scope stack, frame and program-counter transfer.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006550(void *context,...){
 __asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\njmpl *36(%eax)");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006560(void *context){__asm__ volatile("movl 4(%esp), %eax\nmovl %ebx, (%eax)\nmovl %esi, 4(%eax)\nmovl %edi, 8(%eax)\nmovl %ebp, 0xc(%eax)\nleal 4(%esp), %edx\nmovl %edx, 0x10(%eax)\nmovl (%esp), %edx\nmovl %edx, 0x14(%eax)\nmovl $0xffffffff, 0x18(%eax)\nmovl %eax, %esi\nmovl $1, %eax\ncpuid \nandl $0x3000000, %edx\ncmpl $0x3000000, %edx\njne Lpf_context_1000659e\nstmxcsr 0x18(%esi)\nLpf_context_1000659e:\nfnstcw 0x1c(%esi)\nxorl %eax, %eax\nmovl (%esi), %ebx\nmovl 4(%esi), %esi\nretl \nud2 \nnop \nnop \nnop \nnop \nnop ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100065b0(void *context,int value){__asm__ volatile("movl 4(%esp), %edx\nmovl 8(%esp), %eax\ntestl %eax, %eax\njne Lpf_context_100065c1\nmovl $1, %eax\nLpf_context_100065c1:\ncmpl $-1, 0x18(%edx)\nje Lpf_context_100065cb\nldmxcsr 0x18(%edx)\nLpf_context_100065cb:\nfldcw 0x1c(%edx)\nmovl (%edx), %ebx\nmovl 4(%edx), %esi\nmovl 8(%edx), %edi\nmovl 0xc(%edx), %ebp\nmovl 0x10(%edx), %esp\njmpl *0x14(%edx)\nud2 \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop ");}


#undef DAT_1000ee70
#define DAT_1000ee70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065f0
 */

void recovered_100065f0(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006670;
  local_2c = &DAT_1000ee70;
  local_24 = 0x40;
  local_44 = 1;
  recovered_10006ce0(&local_48);
  recovered_10001cd0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000ee70
#undef local_28
#undef auStackY_d0
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006670
 */

undefined4 recovered_10006670(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006680
 */

void recovered_10006680(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100066a0();
                    /* WARNING: Subroutine does not return */
  recovered_100065f0();
}


#undef DAT_1000f5b4
#define DAT_1000f5b4 (*(int *)(((uintptr_t)pf_module_state + 0x129eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066a0
 */

void recovered_100066a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;

  recovered_10006ae0();
  if (extraout_EAX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_100065f0();
  }
  *(int *)(extraout_EAX + 8) = DAT_1000f5b4;
  *(undefined1 *)(extraout_EAX + 0x20) = 0;
  DAT_1000f5b4 = extraout_EAX;
  recovered_10006b30();
  return;
}

#undef DAT_1000f5b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066e0
 */

void * recovered_100066e0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001d10(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001cd0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006710
 */

void * recovered_10006710(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001d10(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001cd0();
  }
  return pvVar1;
}


#undef DAT_1000ee80
#define DAT_1000ee80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6aU)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006740
 */

void recovered_10006740(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006670;
  local_2c = &DAT_1000ee80;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10006ce0(&local_48);
  recovered_10001d60(param_1);
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000ee80
#undef local_24
#undef auStackY_d0
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28

#undef DAT_1000ee90
#define DAT_1000ee90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb7aU)))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067d0
 */

void recovered_100067d0(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006670;
  local_2c = &DAT_1000ee90;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10006ce0(&local_48);
  recovered_10001d60(param_1);
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000ee90
#undef local_2c
#undef auStackY_d0
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30

#undef DAT_1000eea0
#define DAT_1000eea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8aU)))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006860
 */

void recovered_10006860(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006670;
  local_2c = &DAT_1000eea0;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10006ce0(&local_48);
  recovered_10001d60(param_1);
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000eea0
#undef local_48
#undef auStackY_d0
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_1000eeb0
#define DAT_1000eeb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9aU)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068f0
 */

void recovered_100068f0(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006670;
  local_2c = &DAT_1000eeb0;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10006ce0(&local_48);
  recovered_10001d60(param_1);
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000eeb0
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006980
 */

undefined4 recovered_10006980(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006990
 */

uint recovered_10006990(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069b0
 */

void recovered_100069b0(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069c0
 */

void recovered_100069c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000f5bc
#define DAT_1000f5bc (*(int *)(((uintptr_t)pf_module_state + 0x12a6U)))
#undef DAT_1000f5c0
#define DAT_1000f5c0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x12aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069d0
 */

undefined1 * recovered_100069d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;
  int iVar3;

  size = param_1 + 0x24 + (uint)(param_1 == 0);
  puVar1 = recovered_10001d10(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100065f0();
  }
  if (size != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      size = size - 1;
    } while (size != 0);
  }
  DAT_1000f5bc = DAT_1000f5bc + 1 + (uint)(DAT_1000f5bc == -1);
  if (DAT_1000f5c0 == (undefined1 *)0x0) {
LAB_10006a4c:
    *(int *)(puVar1 + 0x1c) = DAT_1000f5bc;
    *(undefined1 **)(puVar1 + 0xc) = DAT_1000f5c0;
    DAT_1000f5c0 = puVar1;
    return puVar1 + 0x24;
  }
  do {
    iVar3 = (int)DAT_1000f5c0;
    while (*(int *)(iVar3 + 0x1c) != DAT_1000f5bc) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_10006a4c;
    }
    DAT_1000f5bc = DAT_1000f5bc + 1 + (uint)(DAT_1000f5bc == -1);
  } while( true );
}

#undef DAT_1000f5bc
#undef DAT_1000f5c0

#undef DAT_1000f5c0
#define DAT_1000f5c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a70
 */

void recovered_10006a70(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  if (param_1 != 0) {
    pointer = (void *)(param_1 + -0x24);
    pvVar1 = DAT_1000f5c0;
    if (DAT_1000f5c0 == pointer) {
      puVar2 = &DAT_1000f5c0;
    }
    else {
      do {
        pvVar3 = pvVar1;
        if (pvVar3 == (void *)0x0) goto LAB_10006ac4;
        pvVar1 = *(void **)((int)pvVar3 + 0xc);
      } while (*(void **)((int)pvVar3 + 0xc) != pointer);
      puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
    }
    *puVar2 = *(undefined4 *)(param_1 + -0x18);
    *(undefined4 *)(param_1 + -0x18) = 0;
LAB_10006ac4:
    recovered_10001d60(pointer);
  }
  return;
}

#undef DAT_1000f5c0

#undef DAT_1000f5c0
#define DAT_1000f5c0 (*(int *)(((uintptr_t)pf_module_state + 0x12aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ae0
 */

void recovered_10006ae0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;

  iVar1 = DAT_1000f5c0;
  if (DAT_1000f5c0 != in_ECX && DAT_1000f5c0 != 0) {
    do {
      if (*(int *)(iVar1 + 0x1c) == in_ECX) {
        return;
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        return;
      }
    } while (iVar1 != in_ECX);
  }
  return;
}

#undef DAT_1000f5c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b30
 */

int recovered_10006b30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  return in_ECX + 0x24;
}


#undef DAT_1000f5b4
#define DAT_1000f5b4 (*(void * *)(((uintptr_t)pf_module_state + 0x129eU)))
#undef DAT_1000f5c0
#define DAT_1000f5c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b40
 */

void recovered_10006b40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  pointer = DAT_1000f5b4;
  if (DAT_1000f5b4 != (void *)0x0) {
    puVar2 = (undefined4 *)((int)DAT_1000f5b4 + 8);
    DAT_1000f5b4 = *(void **)((int)DAT_1000f5b4 + 8);
    *puVar2 = 0;
    if (*(char *)((int)pointer + 0x20) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x24);
      }
      pvVar1 = DAT_1000f5c0;
      if (DAT_1000f5c0 == pointer) {
        puVar2 = &DAT_1000f5c0;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_10006bb4;
          pvVar1 = *(void **)((int)pvVar3 + 0xc);
        } while (*(void **)((int)pvVar3 + 0xc) != pointer);
        puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
      }
      *puVar2 = *(undefined4 *)((int)pointer + 0xc);
      *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_10006bb4:
      recovered_10001d60(pointer);
    }
  }
  return;
}

#undef DAT_1000f5b4
#undef DAT_1000f5c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bd0
 */

void recovered_10006bd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10006c10();
}


#undef DAT_1000f5b4
#define DAT_1000f5b4 (*(int *)(((uintptr_t)pf_module_state + 0x129eU)))
#undef DAT_1000f5b8
#define DAT_1000f5b8 (*(int * *)(((uintptr_t)pf_module_state + 0x12a2U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c10
 */

void recovered_10006c10(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;

  if (DAT_1000f5b8 != (int *)0x0) {
    piVar3 = DAT_1000f5b8;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar2 = recovered_100075e0((undefined2 *)&local_20);
      if (((char)uVar2 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(in_ECX + 0x10) = piVar3;
        *(undefined4 *)(in_ECX + 0x14) = local_1c;
        *(undefined4 *)(in_ECX + 0x18) = local_18;
        recovered_10006de0();
        iVar1 = DAT_1000f5b4;
        if (DAT_1000f5b4 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_100065f0();
        }
        *(undefined1 *)(DAT_1000f5b4 + 0x20) = 1;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10006c10();
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100065f0();
}

#undef DAT_1000f5b4
#undef DAT_1000f5b8
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000f5b4
#define DAT_1000f5b4 (*(int *)(((uintptr_t)pf_module_state + 0x129eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ca0
 */

void recovered_10006ca0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f5b4;
  if (DAT_1000f5b4 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_100065f0();
  }
  *(undefined1 *)(DAT_1000f5b4 + 0x20) = 1;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10006c10();
}

#undef DAT_1000f5b4

#undef DAT_1000f5b8
#define DAT_1000f5b8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x12a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ce0
 */

void recovered_10006ce0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000f5b8;
  DAT_1000f5b8 = param_1;
  return;
}

#undef DAT_1000f5b8

#undef DAT_1000f5b8
#define DAT_1000f5b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d10
 */

void recovered_10006d10(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000f5b8;
  if (DAT_1000f5b8 == param_1) {
    puVar2 = &DAT_1000f5b8;
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      puVar1 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != param_1);
  }
  *puVar2 = *param_1;
  return;
}

#undef DAT_1000f5b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d50
 */

void recovered_10006d50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006c10();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d70
 */

void recovered_10006d70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100065f0();
}


#undef DAT_1000f5b8
#define DAT_1000f5b8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x12a2U)))
#undef DAT_1000f5c0
#define DAT_1000f5c0 (*(int *)(((uintptr_t)pf_module_state + 0x12aaU)))
#define iStack_4c (*(int *)(pf_stack_frame + 20))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d80
 */

undefined4 recovered_10006d80(int param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX = 0;

  iVar4 = DAT_1000f5c0;
  if (DAT_1000f5c0 != param_1 && DAT_1000f5c0 != 0) {
    do {
      if (*(int *)(iVar4 + 0x1c) == param_1) goto LAB_10006dc2;
      iVar4 = *(int *)(iVar4 + 0xc);
    } while ((iVar4 != 0) && (iVar4 != param_1));
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_100065f0();
  }
LAB_10006dc2:
  if (DAT_1000f5b8 != (undefined4 *)0x0) {
    DAT_1000f5b8 = (undefined4 *)*DAT_1000f5b8;
  }
  recovered_10006de0();
  if (DAT_1000f5b8 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(extraout_ECX + 0x10);
    do {
      puVar2 = DAT_1000f5b8;
      if (DAT_1000f5b8 == puVar1) {
        DAT_1000f5b8[2] = extraout_ECX;
        puVar2[3] = *(undefined4 *)(extraout_ECX + 0x18);
        uVar3 = *(undefined4 *)(extraout_ECX + 0x14);
LAB_10006e7e:
        puVar2[1] = uVar3;
        recovered_10006550((int)puVar2);
        recovered_10006d80(iStack_4c);
        return 0;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      recovered_100075e0((undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_3c;
        goto LAB_10006e7e;
      }
      DAT_1000f5b8 = (undefined4 *)*puVar2;
    } while (DAT_1000f5b8 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100065f0();
}

#undef DAT_1000f5b8
#undef DAT_1000f5c0
#undef iStack_4c
#undef uStack_40
#undef uStack_3c
#undef uStack_38

#undef DAT_1000f5b8
#define DAT_1000f5b8 (*(int * *)(((uintptr_t)pf_module_state + 0x12a2U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
#define iStack_2c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006de0
 */

undefined4 recovered_10006de0(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;

  if (DAT_1000f5b8 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0x10);
    do {
      piVar2 = DAT_1000f5b8;
      if (DAT_1000f5b8 == piVar1) {
        DAT_1000f5b8[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x18);
        iVar3 = *(int *)(in_ECX + 0x14);
LAB_10006e7e:
        piVar2[1] = iVar3;
        recovered_10006550((int)piVar2);
        recovered_10006d80(iStack_2c);
        return 0;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      recovered_100075e0((undefined2 *)&local_20);
      if (((char)local_20 == '\x01') && (PF_PART1(local_20, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_1c;
        goto LAB_10006e7e;
      }
      DAT_1000f5b8 = (int *)*piVar2;
    } while (DAT_1000f5b8 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100065f0();
}

#undef DAT_1000f5b8
#undef local_20
#undef local_1c
#undef local_18
#undef iStack_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e90
 */

undefined4 recovered_10006e90(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006d80(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eb0
 */

undefined4 recovered_10006eb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ec0
 */

void recovered_10006ec0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100065f0();
}


#undef DAT_1000f384
#define DAT_1000f384 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x106eU)))
#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ed0
 */

int recovered_10006ed0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;

  local_1c = 0;
  if (param_3 != (undefined4 *)0x0 && param_1 != (int *)0x0) {
    puVar6 = *(undefined4 **)(*param_1 + -4);
    bVar7 = puVar6 != (undefined4 *)0x0;
    if (puVar6 != param_3 && bVar7) {
      iVar3 = param_3[1];
      do {
        iVar4 = puVar6[1];
        if ((iVar3 == 0) || (iVar4 == 0)) {
          if (iVar4 == iVar3) goto LAB_10006f90;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_10006f90;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000f384) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_10006f90:
      local_1c = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_1c;
}

#undef DAT_1000f384
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fb0
 */

void recovered_10006fb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001cd0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fd0
 */

undefined4 recovered_10006fd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fe0
 */

bool recovered_10006fe0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007000
 */

bool recovered_10007000(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007040
 */

bool recovered_10007040(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007070
 */

bool recovered_10007070(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007090
 */

bool recovered_10007090(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070b0
 */

byte recovered_100070b0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070f0
 */

bool recovered_100070f0(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000e360
#define DAT_1000e360 (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1000e3b0
#define DAT_1000e3b0 (*(float *)(((uintptr_t)pf_module_state + 0x9aU)))
#undef DAT_1000e3b8
#define DAT_1000e3b8 (*(double *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef DAT_1000e3c0
#define DAT_1000e3c0 (*(double *)(((uintptr_t)pf_module_state + 0xaaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007110
 */

double recovered_10007110(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;

  if (!NAN(value)) {
    if (DAT_1000e3b8 < value) {
      return (double)DAT_1000e3b0;
    }
    if (value < DAT_1000e3c0) {
      return 0.0;
    }
    iVar4 = 0;
    dVar1 = (double)DAT_1000e320;
    if (dVar1 < value) {
      iVar4 = 0;
      do {
        value = value * dVar1;
        iVar4 = iVar4 + 1;
      } while (dVar1 < value);
    }
    if ((double)DAT_1000e360 <= value) {
      dVar1 = value;
    }
    else {
      do {
        value = value * (double)DAT_1000e320;
        iVar4 = iVar4 + 1;
        dVar1 = value;
      } while (value < (double)DAT_1000e360);
    }
    iVar5 = 0x20;
    dVar2 = 1.0;
    dVar3 = 1.0;
    value = 1.0;
    do {
      dVar2 = (dVar1 / dVar3) * dVar2;
      value = value + dVar2;
      dVar3 = dVar3 + 1.0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar4 != 0) {
      do {
        value = value * value;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return value;
    }
  }
  return value;
}

#undef DAT_1000e320
#undef DAT_1000e360
#undef DAT_1000e3b0
#undef DAT_1000e3b8
#undef DAT_1000e3c0

#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000e360
#define DAT_1000e360 (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1000e3b0
#define DAT_1000e3b0 (*(float *)(((uintptr_t)pf_module_state + 0x9aU)))
#undef DAT_1000e3b8
#define DAT_1000e3b8 (*(double *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef DAT_1000e3c0
#define DAT_1000e3c0 (*(double *)(((uintptr_t)pf_module_state + 0xaaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007200
 */

float recovered_10007200(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;

  if (!NAN(value)) {
    if ((float)DAT_1000e3b8 < value) {
      return DAT_1000e3b0;
    }
    if (value < (float)DAT_1000e3c0) {
      return 0.0;
    }
    iVar4 = 0;
    if (DAT_1000e320 < value) {
      iVar4 = 0;
      do {
        value = value * DAT_1000e320;
        iVar4 = iVar4 + 1;
      } while (DAT_1000e320 < value);
    }
    if (DAT_1000e360 <= value) {
      fVar1 = value;
    }
    else {
      do {
        value = value * DAT_1000e320;
        iVar4 = iVar4 + 1;
        fVar1 = value;
      } while (value < DAT_1000e360);
    }
    iVar5 = 0x20;
    fVar2 = 1.0;
    fVar3 = 1.0;
    value = 1.0;
    do {
      fVar2 = (fVar1 / fVar3) * fVar2;
      value = value + fVar2;
      fVar3 = fVar3 + 1.0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar4 != 0) {
      do {
        value = value * value;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return value;
    }
  }
  return value;
}

#undef DAT_1000e320
#undef DAT_1000e360
#undef DAT_1000e3b0
#undef DAT_1000e3b8
#undef DAT_1000e3c0

#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000e360
#define DAT_1000e360 (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_1000e3b0
#define DAT_1000e3b0 (*(float *)(((uintptr_t)pf_module_state + 0x9aU)))
#undef DAT_1000e3b8
#define DAT_1000e3b8 (*(double *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef DAT_1000e3c0
#define DAT_1000e3c0 (*(double *)(((uintptr_t)pf_module_state + 0xaaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007300
 */

float10 recovered_10007300(float10 value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  int iVar2;
  int iVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;

  lVar4 = (longdouble)(double)(longdouble)value;
  if (!NAN(lVar4)) {
    if ((longdouble)DAT_1000e3b8 < lVar4) {
      return (float10)(longdouble)DAT_1000e3b0;
    }
    if (lVar4 < (longdouble)DAT_1000e3c0) {
      return (float10)(longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_1000e320;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_1000e360) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_1000e320;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_1000e360);
    }
    lVar1 = (longdouble)1;
    iVar3 = 0x20;
    lVar7 = lVar1;
    lVar4 = lVar1;
    lVar6 = lVar1;
    do {
      lVar7 = (lVar5 / lVar6) * lVar7;
      lVar4 = lVar4 + lVar7;
      lVar6 = lVar6 + lVar1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar2 != 0) {
      do {
        lVar4 = lVar4 * lVar4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return (float10)lVar4;
    }
  }
  return (float10)lVar4;
}

#undef DAT_1000e320
#undef DAT_1000e360
#undef DAT_1000e3b0
#undef DAT_1000e3b8
#undef DAT_1000e3c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073f0
 */

double recovered_100073f0(long end,long start)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)end - (double)start;
}


#undef DAT_1000e320
#define DAT_1000e320 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000e360
#define DAT_1000e360 (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007420
 */

longdouble recovered_10007420(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_10002c00(param_1);
  if ((longdouble)DAT_1000e320 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)DAT_1000e360 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_1000e320
#undef DAT_1000e360

#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007480
 */

ulonglong recovered_10007480(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;

  pbVar7 = param_1;
  if (param_1 == (byte *)0x0) {
    bVar8 = false;
    pbVar7 = (byte *)0x0;
  }
  else {
    while( true ) {
      uVar3 = (uint)*pbVar7;
      if ((4 < uVar3 - 9) && (uVar3 != 0x20)) break;
      pbVar7 = pbVar7 + 1;
    }
    if ((uVar3 == 0x2b) || (uVar3 == 0x2d)) {
      bVar8 = *pbVar7 == 0x2d;
      pbVar7 = pbVar7 + 1;
    }
    else {
      bVar8 = false;
    }
  }
  if (param_3 == 0x10) {
    if ((*pbVar7 == 0x30) && ((pbVar7[1] | 0x20) == 0x78)) {
      local_18 = 0x10;
      pbVar7 = pbVar7 + 2;
      goto LAB_10007533;
    }
  }
  else {
    if (param_3 != 0) {
      local_18 = param_3;
      goto LAB_10007533;
    }
    if (*pbVar7 != 0x30) {
      local_18 = 10;
      goto LAB_10007533;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_18 = 8;
      goto LAB_10007533;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_18 = 0x10;
LAB_10007533:
  iVar4 = 0;
  uVar1 = 0;
  while( true ) {
    iVar6 = (int)(uVar1 >> 0x20);
    uVar5 = (uint)pbVar7[iVar4];
    uVar3 = uVar5 - 0x30;
    if (9 < uVar3) {
      if (uVar5 - 0x61 < 0x1a) {
        uVar3 = uVar5 - 0x57;
      }
      else {
        uVar3 = uVar5 - 0x37;
        if (0x19 < uVar5 - 0x41) {
          uVar3 = 0xffffffff;
        }
      }
    }
    if (((int)uVar3 < 0) || ((int)local_18 <= (int)uVar3)) break;
    uVar1 = (uVar1 & 0xffffffff) * (ulonglong)local_18 + CONCAT44(iVar6 * local_18,uVar3);
    iVar4 = iVar4 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    pbVar7 = pbVar7 + iVar4;
    if (iVar4 == 0) {
      pbVar7 = param_1;
    }
    *param_2 = pbVar7;
  }
  uVar2 = CONCAT44(-(uint)((int)uVar1 != 0) - iVar6,-(int)uVar1);
  if (!bVar8) {
    uVar2 = uVar1;
  }
  return uVar2;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075c0
 */

longlong recovered_100075c0(char *text,char **end,int base)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007480((byte *)text,end,base);
  return uVar1;
}


#undef DAT_1000f384
#define DAT_1000f384 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x106eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075e0
 */

undefined4 recovered_100075e0(undefined2 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  int in_ECX;
  int iVar11;
  uint uVar12;
  byte *in_EDX;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  bool bVar20;

  pcVar4 = *(char **)(in_ECX + 0x1c);
  if (pcVar4 != (char *)0x0) {
    pbVar13 = (byte *)(pcVar4 + 1);
    if (*pcVar4 != -1) {
      recovered_10007970();
    }
    bVar10 = *pbVar13;
    pbVar6 = (byte *)0x0;
    if (bVar10 != 0xff) {
      bVar9 = 0;
      uVar7 = 0;
      pbVar6 = (byte *)(pcVar4 + 2);
      do {
        pbVar13 = pbVar6;
        uVar7 = uVar7 | (*pbVar13 & 0x7f) << (bVar9 & 0x1f);
        bVar9 = bVar9 + 7;
        pbVar6 = pbVar13 + 1;
      } while ((char)*pbVar13 < '\0');
      pbVar6 = pbVar13 + 1 + uVar7;
    }
    bVar9 = 0;
    pbVar13 = pbVar13 + 2;
    uVar7 = 0;
    do {
      bVar1 = *pbVar13;
      uVar7 = uVar7 | (bVar1 & 0x7f) << (bVar9 & 0x1f);
      pbVar13 = pbVar13 + 1;
      bVar9 = bVar9 + 7;
    } while ((char)bVar1 < '\0');
    if ((0 < *(int *)(in_ECX + 4)) && (0 < (int)uVar7)) {
      pbVar18 = pbVar13 + uVar7;
      iVar11 = 0;
      do {
        bVar9 = 0;
        uVar7 = 0;
        do {
          bVar1 = *pbVar13;
          uVar7 = uVar7 | (bVar1 & 0x7f) << (bVar9 & 0x1f);
          pbVar13 = pbVar13 + 1;
          bVar9 = bVar9 + 7;
        } while ((char)bVar1 < '\0');
        bVar9 = 0;
        uVar8 = 0;
        do {
          bVar1 = *pbVar13;
          uVar8 = uVar8 | (bVar1 & 0x7f) << (bVar9 & 0x1f);
          pbVar13 = pbVar13 + 1;
          bVar9 = bVar9 + 7;
        } while ((char)bVar1 < '\0');
        if (iVar11 == *(int *)(in_ECX + 4) + -1) {
          *param_1 = 1;
          *(undefined1 *)(param_1 + 1) = 0;
          *(uint *)(param_1 + 2) = uVar7;
          *(undefined4 *)(param_1 + 4) = 0;
          if (uVar8 == 0) {
            *(undefined1 *)((int)param_1 + 1) = 1;
            return 0;
          }
          pbVar18 = pbVar18 + (uVar8 - 1);
          bVar10 = bVar10 & 0xf;
          uVar7 = 0;
          goto LAB_10007790;
        }
        iVar11 = iVar11 + 1;
      } while (pbVar13 < pbVar18);
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
LAB_10007790:
  uVar14 = 0;
  uVar8 = 0;
  do {
    bVar9 = *pbVar18;
    uVar14 = uVar14 | (bVar9 & 0x7f) << ((byte)uVar8 & 0x1f);
    pbVar18 = pbVar18 + 1;
    uVar8 = uVar8 + 7;
  } while ((char)bVar9 < '\0');
  uVar15 = -1 << ((byte)uVar8 & 0x1f);
  uVar19 = 0;
  uVar12 = 0;
  pbVar13 = pbVar18;
  do {
    bVar1 = *pbVar13;
    uVar19 = uVar19 | (bVar1 & 0x7f) << ((byte)uVar12 & 0x1f);
    pbVar13 = pbVar13 + 1;
    uVar12 = uVar12 + 7;
  } while ((char)bVar1 < '\0');
  if (bVar9 < 0x40) {
    uVar15 = 0;
  }
  if (0x1f < uVar8) {
    uVar15 = 0;
  }
  uVar8 = -1 << ((byte)uVar12 & 0x1f);
  if (bVar1 < 0x40) {
    uVar8 = 0;
  }
  if (0x1f < uVar12) {
    uVar8 = 0;
  }
  uVar14 = uVar14 | uVar15;
  if (uVar14 == 0) {
    *(undefined1 *)((int)param_1 + 1) = 1;
  }
  else if (0 < (int)uVar14) {
    if (((0xc < bVar10 || pbVar6 == (byte *)0x0) || (((0x1c1dU >> bVar10 ^ 1) & 1) != 0)) ||
       (pbVar13 = recovered_10007970(), pbVar13 == (byte *)0x0)) {
LAB_1000794e:
      *(undefined1 *)(param_1 + 1) = 1;
      *(uint *)(param_1 + 4) = uVar14;
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    bVar20 = in_EDX != (byte *)0x0;
    if ((in_EDX != (byte *)0x0) && (pbVar13 != in_EDX)) {
      iVar11 = *(int *)(pbVar13 + 4);
      pbVar16 = in_EDX;
      do {
        iVar5 = *(int *)(pbVar16 + 4);
        if ((iVar11 == 0) || (iVar5 == 0)) {
          if (iVar5 == iVar11) goto LAB_1000794e;
        }
        else {
          iVar17 = 0;
          do {
            cVar2 = *(char *)(iVar5 + iVar17);
            cVar3 = *(char *)(iVar11 + iVar17);
            if ((cVar2 == '\0') || (cVar3 == '\0')) {
              if (cVar2 == cVar3) goto LAB_1000794e;
              break;
            }
            iVar17 = iVar17 + 1;
          } while (cVar2 == cVar3);
        }
        if (*(undefined **)pbVar16 != &DAT_1000f384) goto LAB_10007927;
        pbVar16 = *(byte **)(pbVar16 + 8);
        bVar20 = pbVar16 != (byte *)0x0;
      } while ((pbVar16 != pbVar13) && (pbVar16 != (byte *)0x0));
    }
    if (bVar20) goto LAB_1000794e;
  }
LAB_10007927:
  if ((uVar19 | uVar8) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar19 | uVar8);
  bVar20 = 0x3e < uVar7;
  uVar7 = uVar7 + 1;
  if (bVar20) {
    return 0;
  }
  goto LAB_10007790;
}

#undef DAT_1000f384

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007970
 */

byte * recovered_10007970(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort *puVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  uint in_ECX;
  uint uVar6;
  ushort *puVar7;
  int *in_EDX;
  byte *pbVar8;
  uint uVar9;

  pbVar3 = (byte *)0x0;
  if (in_ECX == 0xff) {
    return (byte *)0x0;
  }
  pbVar8 = (byte *)(in_ECX & 0xf);
  if ((byte *)0xc < pbVar8) {
    return (byte *)0x0;
  }
  puVar1 = (ushort *)*in_EDX;
  switch((uintptr_t)(pbVar8)) {
  case 0x0:
  case 0x3:
  case 0xb:
    pbVar8 = *(byte **)puVar1;
    puVar7 = puVar1 + 2;
    goto LAB_10007a55;
  case 0x1:
    bVar5 = 0;
    pbVar8 = (byte *)0x0;
    puVar7 = puVar1;
    do {
      *in_EDX = (int)puVar7 + 1;
      uVar2 = *puVar7;
      pbVar8 = (byte *)((uint)pbVar8 | ((byte)uVar2 & 0x7f) << (bVar5 & 0x1f));
      bVar5 = bVar5 + 7;
      puVar7 = (ushort *)((int)puVar7 + 1);
    } while ((char)(byte)uVar2 < '\0');
    break;
  case 0x2:
    pbVar8 = (byte *)(uint)*puVar1;
    puVar7 = puVar1 + 1;
    goto LAB_10007a55;
  case 0x4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_100079af_caseD_5;
  case 0x9:
    uVar9 = 0;
    uVar6 = 0;
    puVar7 = puVar1;
    do {
      *in_EDX = (int)puVar7 + 1;
      bVar5 = (byte)*puVar7;
      uVar9 = uVar9 | (bVar5 & 0x7f) << ((byte)uVar6 & 0x1f);
      uVar6 = uVar6 + 7;
      puVar7 = (ushort *)((int)puVar7 + 1);
    } while ((char)bVar5 < '\0');
    uVar4 = -1 << ((byte)uVar6 & 0x1f);
    if (bVar5 < 0x40) {
      uVar4 = 0;
    }
    if (0x1f < uVar6) {
      uVar4 = 0;
    }
    pbVar8 = (byte *)(uVar9 | uVar4);
    break;
  case 0xa:
    pbVar8 = (byte *)((uint)(-1 < (char)*(byte *)((int)puVar1 + 1)) * 0x10000 + -0x10000 +
                     (uint)*puVar1);
    puVar7 = puVar1 + 1;
LAB_10007a55:
    *in_EDX = (int)puVar7;
  }
  pbVar3 = pbVar8;
  if ((in_ECX & 0x70) != 0) {
    if ((in_ECX & 0x70) != 0x10) {
      return (byte *)0x0;
    }
    pbVar3 = pbVar8 + (int)puVar1;
  }
  if (((char)in_ECX < '\0') && (pbVar3 != (byte *)0x0)) {
    pbVar3 = *(byte **)pbVar3;
  }
switchD_100079af_caseD_5:
  return pbVar3;
}


#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
#undef DAT_1000eec0
#define DAT_1000eec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbaaU)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define local_48 (*(undefined4 *)(pf_stack_frame + 168))
#define local_44 (*(undefined4 *)(pf_stack_frame + 172))
#define local_30 (*(undefined * *)(pf_stack_frame + 192))
#define local_2c (*(undefined * *)(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 200))
#define local_24 (*(undefined4 *)(pf_stack_frame + 204))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
#define auStackY_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ac0
 */

undefined1 * recovered_10007ac0(undefined1 *param_1,int *param_2)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined1 *puVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_e0 + 0x80;
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  *param_1 = 0;
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000eec0;
  local_24 = 0xc5;
  recovered_10006ce0(&local_48);
  if (piVar1 != param_2) {
    puVar2 = &DAT_1000ed7c;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_2;
    }
    local_44 = 1;
    recovered_1000b7d0(piVar1,(int)puVar2,param_2[1]);
  }
  param_1[0x1c] = 0;
  recovered_10006d10(&local_48);
  return param_1;
}

#undef DAT_1000ed7c
#undef DAT_1000eec0
#undef PTR_recovered_10006670_1000f004
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_e0
#undef auStack_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bd0
 */

undefined1 * recovered_10007bd0(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  *param_1 = 0;
  if ((undefined4 *)(param_1 + 4) != param_2) {
    recovered_10006740((void *)0x0);
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)(param_1 + 8) = param_2[1];
    *(undefined4 *)(param_1 + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_1[0x1c] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c60
 */

void recovered_10007c60(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  param_1[0x1c] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ca0
 */

void recovered_10007ca0(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(uint *)(param_1 + 0x18) = param_2 + (uint)(param_2 == 0);
  param_1[0x1c] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cf0
 */

void recovered_10007cf0(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d20
 */

void recovered_10007d20(undefined1 *param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  *param_1 = 1;
  if ((int *)(param_1 + 4) != param_2) {
    puVar1 = &DAT_1000ed7c;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_1000b7d0((int *)(param_1 + 4),(int)puVar1,param_2[1]);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

#undef DAT_1000ed7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d70
 */

void recovered_10007d70(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 1;
  if ((undefined4 *)(param_1 + 4) != param_2) {
    recovered_10006740(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)(param_1 + 8) = param_2[1];
    *(undefined4 *)(param_1 + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007dd0
 */

void recovered_10007dd0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
#define local_75 (*(byte (*)[117])(pf_stack_frame + 27))
#define abStack_56 (*(byte (*)[86])(pf_stack_frame + 58))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e00
 */

int * recovered_10007e00(int *param_1,char *param_2)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;

  if (*param_2 == '\x02') {
    uVar8 = *(uint *)(param_2 + 0x14);
    uVar5 = (int)uVar8 >> 0x1f;
    uVar3 = (*(uint *)(param_2 + 0x10) ^ uVar5) - uVar5;
    uVar9 = ((uVar8 ^ uVar5) - uVar5) - (uint)((*(uint *)(param_2 + 0x10) ^ uVar5) < uVar5);
    uVar5 = 0;
    do {
      uVar11 = uVar5;
      uVar6 = uVar9 << 0x1f | uVar3 >> 1;
      uVar10 = uVar9 >> 1;
      uVar12 = (uVar6 + uVar10 + (uint)CARRY4(uVar6,uVar10)) % 5;
      uVar7 = uVar6 - uVar12;
      lVar1 = (ulonglong)uVar7 * 0xcccccccd;
      abStack_56[uVar11 + 1] = (char)uVar3 + (char)lVar1 * -10 | 0x30;
      uVar5 = uVar11 + 1;
      bVar13 = 9 < uVar3;
      bVar14 = uVar9 != 0;
      uVar2 = -uVar9;
      uVar3 = (uint)lVar1;
      uVar9 = (uVar10 - (uVar6 < uVar12)) * -0x33333333 +
              uVar7 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
    } while (bVar14 || uVar2 < bVar13);
    if ((int)uVar8 < 0) {
      abStack_56[uVar11 + 2] = 0x2d;
      uVar5 = uVar11 + 2;
    }
    if (uVar5 < 0x21) {
      if (uVar5 != 0) {
        pbVar4 = local_75;
        uVar8 = uVar5;
        do {
          *pbVar4 = abStack_56[uVar8];
          pbVar4 = pbVar4 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      pbVar4 = local_75;
      goto LAB_10007f58;
    }
  }
  else if (*param_2 == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pbVar4 = &DAT_1000ed7c;
    if (*(byte **)(param_2 + 4) != (byte *)0x0) {
      pbVar4 = *(byte **)(param_2 + 4);
    }
    uVar5 = *(uint *)(param_2 + 8);
LAB_10007f58:
    recovered_1000b7d0(param_1,(int)pbVar4,uVar5);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}

#undef DAT_1000ed7c
#undef local_75
#undef abStack_56

#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceaU)))
#define local_20 (*(char * *)(pf_stack_frame + 16))
#define local_1c (*(undefined1 * *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f70
 */

longlong recovered_10007f70(void *variable)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  longlong lVar2;

  if (*(char *)variable == '\x01') {
    if (*(int *)((int)variable + 8) != 0) {
      local_20 = (char *)0x0;
      local_18 = (int *)PTR_DAT_1000f000;
      *(undefined4 *)PTR_DAT_1000f000 = 0;
      pcVar1 = *(char **)((int)variable + 4);
      if (*(char **)((int)variable + 4) == (char *)0x0) {
        pcVar1 = &DAT_1000ed7c;
      }
      lVar2 = recovered_100075c0(pcVar1,&local_20,10);
      local_1c = &DAT_1000ed7c;
      pcVar1 = *(char **)((int)variable + 4);
      if (*(char **)((int)variable + 4) == (char *)0x0) {
        pcVar1 = &DAT_1000ed7c;
      }
      if (((local_20 != (char *)0x0 && local_20 != pcVar1) && (*local_20 == '\0')) &&
         (*local_18 != 0x22)) {
        return lVar2;
      }
      if (((2 < *(uint *)((int)variable + 8)) && (*pcVar1 == '0')) &&
         ((byte)(pcVar1[1] | 0x20U) == 0x78)) {
        local_20 = (char *)0x0;
        *local_18 = 0;
        lVar2 = recovered_100075c0(pcVar1 + 2,&local_20,0x10);
        if (*(undefined1 **)((int)variable + 4) != (undefined1 *)0x0) {
          local_1c = *(undefined1 **)((int)variable + 4);
        }
        if (((local_20 != (char *)0x0) && (local_20 != local_1c + 2)) &&
           ((*local_20 == '\0' && (*local_18 != 0x22)))) {
          return lVar2;
        }
      }
    }
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(char *)variable == '\x02') {
      lVar2 = *(longlong *)((int)variable + 0x10);
    }
  }
  return lVar2;
}

#undef DAT_1000ed7c
#undef PTR_DAT_1000f000
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000eec8
#define DAT_1000eec8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbb2U)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define auStackY_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 168))
#define local_44 (*(undefined4 *)(pf_stack_frame + 172))
#define local_30 (*(undefined * *)(pf_stack_frame + 192))
#define local_2c (*(undefined * *)(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 200))
#define local_24 (*(undefined4 *)(pf_stack_frame + 204))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008090
 */

void recovered_10008090(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int *piVar1;
  bool bVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_e0 + 0x80;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0xfff;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[0xc] = 0;
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000eec8;
  local_24 = 0xfe;
  local_44 = 1;
  recovered_10006ce0(&local_48);
  recovered_100081f0((int)param_1);
  param_1[7] = 1;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0xfff;
  piVar1 = (int *)*param_1;
  bVar2 = true;
  if (((piVar1 != (int *)0x0) && (piVar1[2] != 0)) && (0 < *piVar1)) {
    bVar2 = piVar1[1] < 1;
  }
  *(bool *)(param_1 + 0xb) = bVar2;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000eec8
#undef PTR_recovered_10006670_1000f004
#undef auStackY_e0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_1000eed0
#define DAT_1000eed0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbbaU)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define local_1bb (*(undefined2 *)(pf_stack_frame + 165))
#define local_1b9 (*(undefined1 *)(pf_stack_frame + 167))
#define local_1b8 (*(undefined2 * *)(pf_stack_frame + 168))
#define local_1b4 (*(undefined4 *)(pf_stack_frame + 172))
#define local_1ac (*(int *)(pf_stack_frame + 180))
#define local_1a8 (*(undefined4 *)(pf_stack_frame + 184))
#define local_1a4 (*(undefined4 *)(pf_stack_frame + 188))
#define local_190 (*(undefined * *)(pf_stack_frame + 208))
#define local_18c (*(undefined * *)(pf_stack_frame + 212))
#define local_188 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_184 (*(undefined4 *)(pf_stack_frame + 220))
#define local_180 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_174 (*(int * *)(pf_stack_frame + 236))
#define local_170 (*(int * *)(pf_stack_frame + 240))
#define local_16c (*(int * *)(pf_stack_frame + 244))
#define local_168 (*(int * *)(pf_stack_frame + 248))
#define local_164 (*(int * *)(pf_stack_frame + 252))
#define local_160 (*(int * *)(pf_stack_frame + 256))
#define local_15c (*(int * *)(pf_stack_frame + 260))
#define auStackY_250 (*(undefined1 (*)[592])(pf_stack_frame + 16))
#define local_158 (*(int * *)(pf_stack_frame + 264))
#define local_154 (*(int * *)(pf_stack_frame + 268))
#define local_150 (*(int * *)(pf_stack_frame + 272))
#define local_14c (*(int * *)(pf_stack_frame + 276))
#define local_148 (*(int * *)(pf_stack_frame + 280))
#define local_144 (*(int * *)(pf_stack_frame + 284))
#define local_140 (*(int * *)(pf_stack_frame + 288))
#define local_13c (*(int * *)(pf_stack_frame + 292))
#define local_138 (*(int * *)(pf_stack_frame + 296))
#define local_134 (*(int * *)(pf_stack_frame + 300))
#define local_130 (*(int * *)(pf_stack_frame + 304))
#define local_12c (*(int * *)(pf_stack_frame + 308))
#define local_128 (*(int * *)(pf_stack_frame + 312))
#define local_124 (*(int * *)(pf_stack_frame + 316))
#define local_120 (*(int * *)(pf_stack_frame + 320))
#define local_11c (*(void * *)(pf_stack_frame + 324))
#define local_118 (*(undefined4 *)(pf_stack_frame + 328))
#define local_110 (*(void * *)(pf_stack_frame + 336))
#define local_10c (*(undefined4 *)(pf_stack_frame + 340))
#define local_104 (*(void * *)(pf_stack_frame + 348))
#define local_100 (*(undefined4 *)(pf_stack_frame + 352))
#define local_f8 (*(void * *)(pf_stack_frame + 360))
#define local_f4 (*(undefined4 *)(pf_stack_frame + 364))
#define local_ec (*(void * *)(pf_stack_frame + 372))
#define local_e8 (*(undefined4 *)(pf_stack_frame + 376))
#define local_e0 (*(void * *)(pf_stack_frame + 384))
#define local_dc (*(undefined4 *)(pf_stack_frame + 388))
#define local_d4 (*(void * *)(pf_stack_frame + 396))
#define local_d0 (*(undefined4 *)(pf_stack_frame + 400))
#define local_c8 (*(void * *)(pf_stack_frame + 408))
#define local_c4 (*(undefined4 *)(pf_stack_frame + 412))
#define local_bc (*(void * *)(pf_stack_frame + 420))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 424))
#define local_b0 (*(void * *)(pf_stack_frame + 432))
#define local_ac (*(undefined4 *)(pf_stack_frame + 436))
#define local_a4 (*(void * *)(pf_stack_frame + 444))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 448))
#define local_98 (*(void * *)(pf_stack_frame + 456))
#define local_94 (*(undefined4 *)(pf_stack_frame + 460))
#define local_8c (*(void * *)(pf_stack_frame + 468))
#define local_88 (*(undefined4 *)(pf_stack_frame + 472))
#define local_80 (*(void * *)(pf_stack_frame + 480))
#define local_7c (*(undefined4 *)(pf_stack_frame + 484))
#define local_74 (*(void * *)(pf_stack_frame + 492))
#define local_70 (*(undefined4 *)(pf_stack_frame + 496))
#define local_68 (*(void * *)(pf_stack_frame + 504))
#define local_64 (*(undefined4 *)(pf_stack_frame + 508))
#define local_5c (*(void * *)(pf_stack_frame + 516))
#define local_58 (*(undefined4 *)(pf_stack_frame + 520))
#define local_50 (*(void * *)(pf_stack_frame + 528))
#define local_4c (*(undefined4 *)(pf_stack_frame + 532))
#define local_44 (*(void * *)(pf_stack_frame + 540))
#define local_40 (*(undefined4 *)(pf_stack_frame + 544))
#define local_38 (*(void * *)(pf_stack_frame + 552))
#define local_34 (*(undefined4 *)(pf_stack_frame + 556))
#define local_2c (*(void * *)(pf_stack_frame + 564))
#define local_28 (*(undefined4 *)(pf_stack_frame + 568))
#define local_20 (*(void * *)(pf_stack_frame + 576))
#define local_1c (*(undefined4 *)(pf_stack_frame + 580))
#define auStack_18 (*(undefined1 (*)[24])(pf_stack_frame + 584))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081f0
 */

void recovered_100081f0(int param_1)

{
  unsigned char pf_stack_frame[640] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *owner;
  int iVar2;
  int iVar3;

  local_188 = auStack_18 + 0x14;
  local_180 = auStackY_250 + 0x80;
  iVar2 = *(int *)(param_1 + 0x14);
  local_1ac = 0x10008204;
  local_190 = PTR_recovered_10006670_1000f004;
  local_18c = &DAT_1000eed0;
  local_184 = 0x1106;
  recovered_10006ce0(&local_1a8);
  if (iVar2 != 0) {
    iVar3 = iVar2 * 0x10 + -4;
    do {
      iVar1 = *(int *)(param_1 + 0x10);
      owner = *(int **)(iVar1 + iVar3);
      if (owner != (int *)0x0) {
        (**(code **)(*owner + 4))(owner);
      }
      *(undefined4 *)(iVar1 + -8 + iVar3) = 0;
      recovered_10006740(*(void **)(iVar1 + -0xc + iVar3));
      iVar3 = iVar3 + -0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_1bb = (ushort)PF_PART1(local_1bb, 1) << 8;
  local_1b8 = &local_1bb;
  local_1b4 = 1;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_20,(undefined1 *)local_1b8,1);
  local_1a4 = 1;
  local_120 = recovered_100066e0(8);
  *local_120 = ((uintptr_t)pf_module_state+0xcfeU);
  local_1a4 = 2;
  recovered_1000ace0(param_1,1,&local_20,&local_120);
  if (local_120 != (int *)0x0) {
    (**(code **)(*local_120 + 4))(local_120);
  }
  local_1c = 0;
  recovered_10006740(local_20);
  local_1bb = CONCAT11(PF_PART1(local_1bb, 1),1);
  local_1b8 = &local_1bb;
  local_1b4 = 1;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_2c,(undefined1 *)local_1b8,1);
  local_1a4 = 3;
  local_124 = recovered_100066e0(8);
  *local_124 = ((uintptr_t)pf_module_state+0xd2aU);
  local_1a4 = 4;
  recovered_1000ace0(param_1,2,&local_2c,&local_124);
  if (local_124 != (int *)0x0) {
    (**(code **)(*local_124 + 4))(local_124);
  }
  local_28 = 0;
  recovered_10006740(local_2c);
  local_1bb = CONCAT11(PF_PART1(local_1bb, 1),2);
  local_1b8 = &local_1bb;
  local_1b4 = 1;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_38,(undefined1 *)local_1b8,1);
  local_1a4 = 5;
  local_128 = recovered_100066e0(8);
  *local_128 = ((uintptr_t)pf_module_state+0xd4eU);
  local_1a4 = 6;
  recovered_1000ace0(param_1,3,&local_38,&local_128);
  if (local_128 != (int *)0x0) {
    (**(code **)(*local_128 + 4))(local_128);
  }
  local_34 = 0;
  recovered_10006740(local_38);
  local_1bb = CONCAT11(PF_PART1(local_1bb, 1),2);
  local_1b8 = &local_1bb;
  local_1b4 = 1;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_44,(undefined1 *)local_1b8,1);
  local_1a4 = 7;
  local_12c = recovered_100066e0(8);
  *local_12c = ((uintptr_t)pf_module_state+0xd72U);
  local_1a4 = 8;
  recovered_1000ace0(param_1,4,&local_44,&local_12c);
  if (local_12c != (int *)0x0) {
    (**(code **)(*local_12c + 4))(local_12c);
  }
  local_40 = 0;
  recovered_10006740(local_44);
  local_1bb = local_1bb & 0xff00;
  local_1b8 = &local_1bb;
  local_1b4 = 1;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_50,(undefined1 *)local_1b8,1);
  local_1a4 = 9;
  local_130 = recovered_100066e0(8);
  *local_130 = ((uintptr_t)pf_module_state+0xd96U);
  local_1a4 = 10;
  recovered_1000ace0(param_1,5,&local_50,&local_130);
  if (local_130 != (int *)0x0) {
    (**(code **)(*local_130 + 4))(local_130);
  }
  local_4c = 0;
  recovered_10006740(local_50);
  local_1bb = CONCAT11(PF_PART1(local_1bb, 1),1);
  local_1b8 = &local_1bb;
  local_1b4 = 1;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_5c,(undefined1 *)local_1b8,1);
  local_1a4 = 0xb;
  local_134 = recovered_100066e0(8);
  *local_134 = ((uintptr_t)pf_module_state+0xdbaU);
  local_1a4 = 0xc;
  recovered_1000ace0(param_1,6,&local_5c,&local_134);
  if (local_134 != (int *)0x0) {
    (**(code **)(*local_134 + 4))(local_134);
  }
  local_58 = 0;
  recovered_10006740(local_5c);
  local_1bb = CONCAT11(PF_PART1(local_1bb, 1),2);
  local_1b8 = &local_1bb;
  local_1b4 = 1;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_68,(undefined1 *)local_1b8,1);
  local_1a4 = 0xd;
  local_138 = recovered_100066e0(8);
  *local_138 = ((uintptr_t)pf_module_state+0xddeU);
  local_1a4 = 0xe;
  recovered_1000ace0(param_1,7,&local_68,&local_138);
  if (local_138 != (int *)0x0) {
    (**(code **)(*local_138 + 4))(local_138);
  }
  local_64 = 0;
  recovered_10006740(local_68);
  local_1bb = 0x101;
  local_1b9 = 1;
  local_1b8 = &local_1bb;
  local_1b4 = 3;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_74,(undefined1 *)local_1b8,3);
  local_1a4 = 0xf;
  local_13c = recovered_100066e0(8);
  *local_13c = ((uintptr_t)pf_module_state+0xe02U);
  local_1a4 = 0x10;
  recovered_1000ace0(param_1,8,&local_74,&local_13c);
  if (local_13c != (int *)0x0) {
    (**(code **)(*local_13c + 4))(local_13c);
  }
  local_70 = 0;
  recovered_10006740(local_74);
  local_1bb = 0x101;
  local_1b9 = 0;
  local_1b8 = &local_1bb;
  local_1b4 = 3;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_80,(undefined1 *)local_1b8,3);
  local_1a4 = 0x11;
  local_140 = recovered_100066e0(8);
  *local_140 = ((uintptr_t)pf_module_state+0xe26U);
  local_1a4 = 0x12;
  recovered_1000ace0(param_1,9,&local_80,&local_140);
  if (local_140 != (int *)0x0) {
    (**(code **)(*local_140 + 4))(local_140);
  }
  local_7c = 0;
  recovered_10006740(local_80);
  local_1bb = 0x101;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_8c,(undefined1 *)local_1b8,2);
  local_1a4 = 0x13;
  local_144 = recovered_100066e0(8);
  *local_144 = ((uintptr_t)pf_module_state+0xe4aU);
  local_1a4 = 0x14;
  recovered_1000ace0(param_1,10,&local_8c,&local_144);
  if (local_144 != (int *)0x0) {
    (**(code **)(*local_144 + 4))(local_144);
  }
  local_88 = 0;
  recovered_10006740(local_8c);
  local_1bb = CONCAT11(PF_PART1(local_1bb, 1),1);
  local_1b8 = &local_1bb;
  local_1b4 = 1;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_98,(undefined1 *)local_1b8,1);
  local_1a4 = 0x15;
  local_148 = recovered_100066e0(8);
  *local_148 = ((uintptr_t)pf_module_state+0xe6eU);
  local_1a4 = 0x16;
  recovered_1000ace0(param_1,0xb,&local_98,&local_148);
  if (local_148 != (int *)0x0) {
    (**(code **)(*local_148 + 4))(local_148);
  }
  local_94 = 0;
  recovered_10006740(local_98);
  local_1bb = 0x202;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_a4,(undefined1 *)local_1b8,2);
  local_1a4 = 0x17;
  local_14c = recovered_100066e0(8);
  *local_14c = ((uintptr_t)pf_module_state+0xe92U);
  local_1a4 = 0x18;
  recovered_1000ace0(param_1,0xc,&local_a4,&local_14c);
  if (local_14c != (int *)0x0) {
    (**(code **)(*local_14c + 4))(local_14c);
  }
  local_a0 = 0;
  recovered_10006740(local_a4);
  local_1bb = 2;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_b0,(undefined1 *)local_1b8,2);
  local_1a4 = 0x19;
  local_150 = recovered_100066e0(8);
  *local_150 = ((uintptr_t)pf_module_state+0xeb6U);
  local_1a4 = 0x1a;
  recovered_1000ace0(param_1,0xd,&local_b0,&local_150);
  if (local_150 != (int *)0x0) {
    (**(code **)(*local_150 + 4))(local_150);
  }
  local_ac = 0;
  recovered_10006740(local_b0);
  local_1bb = 0x102;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_bc,(undefined1 *)local_1b8,2);
  local_1a4 = 0x1b;
  local_154 = recovered_100066e0(8);
  *local_154 = ((uintptr_t)pf_module_state+0xedaU);
  local_1a4 = 0x1c;
  recovered_1000ace0(param_1,0xe,&local_bc,&local_154);
  if (local_154 != (int *)0x0) {
    (**(code **)(*local_154 + 4))(local_154);
  }
  local_b8 = 0;
  recovered_10006740(local_bc);
  local_1bb = 0x202;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_c8,(undefined1 *)local_1b8,2);
  local_1a4 = 0x1d;
  local_158 = recovered_100066e0(8);
  *local_158 = ((uintptr_t)pf_module_state+0xefeU);
  local_1a4 = 0x1e;
  recovered_1000ace0(param_1,0xf,&local_c8,&local_158);
  if (local_158 != (int *)0x0) {
    (**(code **)(*local_158 + 4))(local_158);
  }
  local_c4 = 0;
  recovered_10006740(local_c8);
  local_1bb = 0x102;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_d4,(undefined1 *)local_1b8,2);
  local_1a4 = 0x1f;
  local_15c = recovered_100066e0(8);
  *local_15c = ((uintptr_t)pf_module_state+0xf22U);
  local_1a4 = 0x20;
  recovered_1000ace0(param_1,0x10,&local_d4,&local_15c);
  if (local_15c != (int *)0x0) {
    (**(code **)(*local_15c + 4))(local_15c);
  }
  local_d0 = 0;
  recovered_10006740(local_d4);
  local_1bb = 0x202;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_e0,(undefined1 *)local_1b8,2);
  local_1a4 = 0x21;
  local_160 = recovered_100066e0(8);
  *local_160 = ((uintptr_t)pf_module_state+0xf46U);
  local_1a4 = 0x22;
  recovered_1000ace0(param_1,0x11,&local_e0,&local_160);
  if (local_160 != (int *)0x0) {
    (**(code **)(*local_160 + 4))(local_160);
  }
  local_dc = 0;
  recovered_10006740(local_e0);
  local_1bb = 0x102;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_ec,(undefined1 *)local_1b8,2);
  local_1a4 = 0x23;
  local_164 = recovered_100066e0(8);
  *local_164 = ((uintptr_t)pf_module_state+0xf6aU);
  local_1a4 = 0x24;
  recovered_1000ace0(param_1,0x12,&local_ec,&local_164);
  if (local_164 != (int *)0x0) {
    (**(code **)(*local_164 + 4))(local_164);
  }
  local_e8 = 0;
  recovered_10006740(local_ec);
  local_1bb = 0x202;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_f8,(undefined1 *)local_1b8,2);
  local_1a4 = 0x25;
  local_168 = recovered_100066e0(8);
  *local_168 = ((uintptr_t)pf_module_state+0xf8eU);
  local_1a4 = 0x26;
  recovered_1000ace0(param_1,0x13,&local_f8,&local_168);
  if (local_168 != (int *)0x0) {
    (**(code **)(*local_168 + 4))(local_168);
  }
  local_f4 = 0;
  recovered_10006740(local_f8);
  local_1bb = 0x102;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_104,(undefined1 *)local_1b8,2);
  local_1a4 = 0x27;
  local_16c = recovered_100066e0(8);
  *local_16c = ((uintptr_t)pf_module_state+0xfb2U);
  local_1a4 = 0x28;
  recovered_1000ace0(param_1,0x14,&local_104,&local_16c);
  if (local_16c != (int *)0x0) {
    (**(code **)(*local_16c + 4))(local_16c);
  }
  local_100 = 0;
  recovered_10006740(local_104);
  local_1bb = 0x202;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_110,(undefined1 *)local_1b8,2);
  local_1a4 = 0x29;
  local_170 = recovered_100066e0(8);
  *local_170 = ((uintptr_t)pf_module_state+0xfd6U);
  local_1a4 = 0x2a;
  recovered_1000ace0(param_1,0x15,&local_110,&local_170);
  if (local_170 != (int *)0x0) {
    (**(code **)(*local_170 + 4))(local_170);
  }
  local_10c = 0;
  recovered_10006740(local_110);
  local_1bb = 0x202;
  local_1b8 = &local_1bb;
  local_1b4 = 2;
  local_1a4 = 0xffffffff;
  recovered_1000baa0(&local_11c,(undefined1 *)local_1b8,2);
  local_1a4 = 0x2b;
  local_174 = recovered_100066e0(8);
  *local_174 = ((uintptr_t)pf_module_state+0xffaU);
  local_1a4 = 0x2c;
  recovered_1000ace0(param_1,0x16,&local_11c,&local_174);
  if (local_174 != (int *)0x0) {
    (**(code **)(*local_174 + 4))(local_174);
  }
  local_118 = 0;
  recovered_10006740(local_11c);
  recovered_10006d10(&local_1a8);
  return;
}

#undef DAT_1000eed0
#undef PTR_recovered_10006670_1000f004
#undef local_1bb
#undef local_1b9
#undef local_1b8
#undef local_1b4
#undef local_1ac
#undef local_1a8
#undef local_1a4
#undef local_190
#undef local_18c
#undef local_188
#undef local_184
#undef local_180
#undef local_174
#undef local_170
#undef local_16c
#undef local_168
#undef local_164
#undef local_160
#undef local_15c
#undef auStackY_250
#undef local_158
#undef local_154
#undef local_150
#undef local_14c
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_138
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_110
#undef local_10c
#undef local_104
#undef local_100
#undef local_f8
#undef local_f4
#undef local_ec
#undef local_e8
#undef local_e0
#undef local_dc
#undef local_d4
#undef local_d0
#undef local_c8
#undef local_c4
#undef local_bc
#undef local_b8
#undef local_b0
#undef local_ac
#undef local_a4
#undef local_a0
#undef local_98
#undef local_94
#undef local_8c
#undef local_88
#undef local_80
#undef local_7c
#undef local_74
#undef local_70
#undef local_68
#undef local_64
#undef local_5c
#undef local_58
#undef local_50
#undef local_4c
#undef local_44
#undef local_40
#undef local_38
#undef local_34
#undef local_2c
#undef local_28
#undef local_20
#undef local_1c
#undef auStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009930
 */

void recovered_10009930(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  bool bVar2;

  param_1[7] = 1;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0xfff;
  piVar1 = (int *)*param_1;
  bVar2 = true;
  if (((piVar1 != (int *)0x0) && (piVar1[2] != 0)) && (0 < *piVar1)) {
    bVar2 = piVar1[1] < 1;
  }
  *(bool *)(param_1 + 0xb) = bVar2;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009980
 */

void recovered_10009980(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *owner;
  int iVar2;
  int iVar3;

  iVar3 = param_1[1];
  if (iVar3 != 0) {
    iVar2 = iVar3 * 0x10 + -4;
    do {
      iVar1 = *param_1;
      owner = *(int **)(iVar1 + iVar2);
      if (owner != (int *)0x0) {
        (**(code **)(*owner + 4))(owner);
      }
      *(undefined4 *)(iVar1 + -8 + iVar2) = 0;
      recovered_10006740(*(void **)(iVar1 + -0xc + iVar2));
      iVar2 = iVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = 0;
  recovered_10006740((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099f0
 */

void recovered_100099f0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar1 = iVar2 * 0x18 + -0x14;
    do {
      recovered_10006740(*(void **)(*param_1 + iVar1));
      iVar1 = iVar1 + -0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = 0;
  recovered_10006740((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a40
 */

void recovered_10009a40(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008090(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a60
 */

void recovered_10009a60(undefined4 *param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  *param_1 = param_2;
  param_1[7] = 1;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0xfff;
  bVar1 = true;
  if (((param_2 != (int *)0x0) && (param_2[2] != 0)) && (0 < *param_2)) {
    bVar1 = param_2[1] < 1;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ab0
 */

undefined4 recovered_10009ab0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *param_1;
}


#undef DAT_1000ef2c
#define DAT_1000ef2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc16U)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define auStackY_160 (*(undefined1 (*)[352])(pf_stack_frame + 16))
#define local_cc (*(uint * *)(pf_stack_frame + 164))
#define local_c8 (*(uint *)(pf_stack_frame + 168))
#define local_c4 (*(uint *)(pf_stack_frame + 172))
#define local_b0 (*(uint * *)(pf_stack_frame + 192))
#define local_ac (*(void * *)(pf_stack_frame + 196))
#define local_a8 (*(int *)(pf_stack_frame + 200))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 204))
#define local_a0 (*(uint * *)(pf_stack_frame + 208))
#define local_9c (*(int *)(pf_stack_frame + 212))
#define local_98 (*(void * *)(pf_stack_frame + 216))
#define local_94 (*(void * *)(pf_stack_frame + 220))
#define local_90 (*(void * *)(pf_stack_frame + 224))
#define local_8c (*(undefined1 * *)(pf_stack_frame + 228))
#define local_88 (*(uint *)(pf_stack_frame + 232))
#define local_84 (*(uint *)(pf_stack_frame + 236))
#define local_80 (*(uint *)(pf_stack_frame + 240))
#define local_7c (*(uint *)(pf_stack_frame + 244))
#define local_78 (*(uint *)(pf_stack_frame + 248))
#define local_74 (*(undefined1 *)(pf_stack_frame + 252))
#define local_70 (*(undefined4 * *)(pf_stack_frame + 256))
#define local_6c (*(uint *)(pf_stack_frame + 260))
#define local_68 (*(void * *)(pf_stack_frame + 264))
#define local_64 (*(undefined1 * *)(pf_stack_frame + 268))
#define local_60 (*(uint *)(pf_stack_frame + 272))
#define local_5c (*(uint * *)(pf_stack_frame + 276))
#define local_58 (*(undefined4 *)(pf_stack_frame + 280))
#define local_54 (*(undefined4 *)(pf_stack_frame + 284))
#define local_40 (*(undefined * *)(pf_stack_frame + 304))
#define local_3c (*(undefined * *)(pf_stack_frame + 308))
#define local_38 (*(undefined1 * *)(pf_stack_frame + 312))
#define local_34 (*(undefined4 *)(pf_stack_frame + 316))
#define local_30 (*(undefined1 * *)(pf_stack_frame + 320))
#define local_24 (*(int * *)(pf_stack_frame + 332))
#define auStack_14 (*(undefined1 (*)[20])(pf_stack_frame + 348))
#define local_20 (*(byte * *)(pf_stack_frame + 336))
#define local_1c (*(byte * *)(pf_stack_frame + 340))
#define local_18 (*(uint *)(pf_stack_frame + 344))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ac0
 */

byte recovered_10009ac0(int *param_1)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  void *pvVar2;
  int *owner;
  byte bVar3;
  bool bVar4;
  void *pvVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  void **ppvVar14;
  uint *puVar15;
  void *pvVar16;
  void *pvVar17;
  uint *puVar18;
  byte bVar19;
  undefined4 *puVar20;
  int iVar21;

  local_38 = auStack_14 + 0x10;
  local_30 = auStackY_160 + 0x80;
  iVar12 = param_1[0xb];
  local_9c = 0x10009ad4;
  local_40 = PTR_recovered_10006670_1000f004;
  local_3c = &DAT_1000ef2c;
  local_34 = 0xc91;
  recovered_10006ce0(&local_58);
  if ((char)iVar12 == '\0') {
    puVar6 = (uint *)*param_1;
    if (((puVar6 != (uint *)0x0) && (uVar11 = puVar6[2], uVar11 != 0)) &&
       (pvVar17 = (void *)*puVar6, 0 < (int)pvVar17)) {
      pvVar16 = (void *)param_1[7];
      pvVar1 = (void *)param_1[8];
      pvVar2 = (void *)puVar6[1];
      if ((pvVar16 <= pvVar17 && ((0 < (int)pvVar1 && 0 < (int)pvVar16) && 0 < (int)pvVar2)) &&
          pvVar1 <= pvVar2) {
        pvVar5 = (void *)(((int)pvVar1 - 1U) * (int)pvVar17 + (int)pvVar16);
        uVar11 = (uint)*(byte *)((uVar11 - 2) + (int)(uintptr_t)pvVar5 * 4) |
                 (uint)*(byte *)((uVar11 - 3) + (int)(uintptr_t)pvVar5 * 4) << 8 |
                 (uint)*(byte *)((uVar11 - 4) + (int)(uintptr_t)pvVar5 * 4) << 0x10;
        bVar19 = 0;
        if (uVar11 == 0) {
          bVar3 = *(byte *)(param_1 + 9);
          if (bVar3 < 4) {
            bVar3 = (byte)(0x30201 >> ((bVar3 & 3) << 3));
            *(byte *)(param_1 + 9) = bVar3;
          }
          local_90 = pvVar16;
          local_ac = pvVar1;
          if (bVar3 < 4) {
            iVar12 = 1;
            ppvVar14 = &local_90;
            switch((uintptr_t)(local_9c + *(int *)((uintptr_t)pf_piet_step_table_0 + (uint)bVar3 * 4))) {
            case 0x10009c80:
              iVar12 = -1;
              break;
            case 0x10009d99:
              iVar12 = -1;
            case 0x10009d9e:
              ppvVar14 = &local_ac;
            }
            *ppvVar14 = (void *)((int)*ppvVar14 + iVar12);
          }
          param_1[7] = (int)local_90;
          param_1[8] = (int)local_ac;
          if ((pvVar17 < local_90 || ((int)local_ac < 1 || (int)local_90 < 1)) || pvVar2 < local_ac)
          {
            *(undefined1 *)(param_1 + 0xb) = 1;
LAB_10009de2:
            bVar19 = 1;
          }
LAB_10009de4:
          bVar19 = bVar19 ^ 1;
        }
        else {
          if (uVar11 == 0xffffff) {
            param_1[10] = 0xfff;
            local_90 = pvVar16;
            local_ac = pvVar1;
            if (*(byte *)(param_1 + 9) < 4) {
              iVar12 = 1;
              ppvVar14 = &local_90;
              switch((uintptr_t)(local_9c + *(int *)((uintptr_t)pf_piet_step_table_1 + (uint)*(byte *)(param_1 + 9) * 4))) {
              case 0x10009c08:
                iVar12 = -1;
                break;
              case 0x10009d44:
                iVar12 = -1;
              case 0x10009d49:
                ppvVar14 = &local_ac;
              }
              *ppvVar14 = (void *)((int)*ppvVar14 + iVar12);
            }
            param_1[7] = (int)local_90;
            param_1[8] = (int)local_ac;
            if ((pvVar17 < local_90 || ((int)local_ac < 1 || (int)local_90 < 1)) ||
                pvVar2 < local_ac) {
              *(undefined1 *)(param_1 + 0xb) = 1;
            }
            bVar19 = (pvVar17 >= local_90 && ((int)local_ac >= 1 && (int)local_90 >= 1)) &&
                     pvVar2 >= local_ac;
            goto LAB_10009c1b;
          }
          uVar7 = param_1[10];
          if (*(char *)((int)param_1 + 0x2d) == '\x01') {
            uVar8 = uVar11 - uVar7;
            if (uVar11 < uVar7) {
              uVar8 = -(uVar11 - uVar7);
            }
            param_1[10] = uVar11;
            *(undefined1 *)((int)param_1 + 0x2d) = 0;
          }
          else {
            uVar8 = uVar11 - uVar7;
            if (uVar11 < uVar7) {
              uVar8 = -(uVar11 - uVar7);
            }
            param_1[10] = uVar11;
            *(undefined1 *)((int)param_1 + 0x2d) = 0;
            if (uVar11 - uVar7 == 0) {
              local_90 = pvVar16;
              local_ac = pvVar1;
              if (*(byte *)(param_1 + 9) < 4) {
                iVar12 = 1;
                ppvVar14 = &local_90;
                switch((uintptr_t)(local_9c + *(int *)((uintptr_t)pf_piet_step_table_2 + (uint)*(byte *)(param_1 + 9) * 4))) {
                case 0x10009cff:
                  iVar12 = -1;
                  break;
                case 0x1000a69b:
                  iVar12 = -1;
                case 0x1000a6a0:
                  ppvVar14 = &local_ac;
                }
                *ppvVar14 = (void *)((int)*ppvVar14 + iVar12);
              }
              param_1[7] = (int)local_90;
              param_1[8] = (int)local_ac;
              if ((pvVar17 < local_90 || ((int)local_ac < 1 || (int)local_90 < 1)) ||
                  pvVar2 < local_ac) {
                *(undefined1 *)(param_1 + 0xb) = 1;
                goto LAB_10009de2;
              }
              goto LAB_10009de4;
            }
          }
          local_68 = pvVar16;
          local_98 = pvVar1;
          if (*(byte *)(param_1 + 9) < 4) {
            iVar12 = 1;
            ppvVar14 = &local_68;
            switch((uintptr_t)(*(int *)((uintptr_t)pf_piet_step_table_3 + (uint)*(byte *)(param_1 + 9) * 4) + local_9c)) {
            case 0x10009d3a:
              iVar12 = -1;
              break;
            case 0x10009dec:
              iVar12 = -1;
            case 0x10009df1:
              ppvVar14 = &local_98;
            }
            *ppvVar14 = (void *)((int)*ppvVar14 + iVar12);
          }
          local_ac = (void *)0x0;
          local_a8 = 0;
          local_a4 = 0;
          if ((uVar8 < (uint)param_1[5]) && (param_1[4] != 0)) {
            local_70 = (undefined4 *)(param_1[4] + uVar8 * 0x10);
            local_54 = 1;
            recovered_1000a8f0((int *)&local_ac,local_70[1]);
            puVar20 = local_70;
            if (local_70[1] != 0) {
              pbVar13 = (byte *)*local_70;
              local_20 = pbVar13 + local_70[1];
              local_24 = param_1 + 1;
              do {
                local_18 = (uint)*pbVar13;
                puVar6 = (uint *)*param_1;
                uVar11 = (uint)*(byte *)(param_1 + 9);
                local_90 = local_68;
                local_94 = local_98;
                local_1c = pbVar13;
                if ((puVar6 == (uint *)0x0) || (uVar7 = puVar6[2], uVar7 == 0)) {
                  local_cc = (uint *)0x0;
LAB_1000a705:
                  param_1[7] = (int)local_90;
                  param_1[8] = (int)local_94;
                  *(undefined1 *)(param_1 + 0xb) = 1;
                  recovered_10006740(local_cc);
                  goto LAB_1000a71e;
                }
                bVar4 = false;
                local_c4 = 0;
                local_6c = 0;
                local_b0 = (uint *)0x0;
                local_cc = (uint *)0x0;
                local_a0 = puVar6;
                while( true ) {
                  puVar6 = local_cc;
                  pvVar17 = (void *)*local_a0;
                  if ((int)pvVar17 < 1) {
                    goto LAB_1000a705;
                  }
                  if ((((pvVar17 < local_90) || ((int)local_94 < 1)) || ((int)local_90 < 1)) ||
                     (((int)local_a0[1] < 1 || ((void *)local_a0[1] < local_94)))) {
                    goto LAB_1000a705;
                  }
                  pvVar17 = (void *)((int)pvVar17 * ((int)local_94 + -1) + (int)local_90);
                  bVar19 = *(byte *)((uVar7 - 4) + (int)(uintptr_t)pvVar17 * 4);
                  local_60 = (uint)*(byte *)((uVar7 - 3) + (int)(uintptr_t)pvVar17 * 4);
                  bVar3 = *(byte *)((uVar7 - 2) + (int)(uintptr_t)pvVar17 * 4);
                  if ((local_60 << 8 | (uint)bVar19 << 0x10 | (uint)bVar3) == 0xffffff) break;
                  if (bVar4) {
                    bVar4 = true;
                  }
                  else {
                    if (bVar19 != 0xff) {
                      if (local_c4 == local_6c) {
                        local_c8 = local_c4 * 2;
                        if (local_c4 == 0) {
                          local_c8 = 4;
                        }
                        if (local_c8 <= local_c4) goto LAB_1000a025;
                        local_5c = local_b0;
                        local_54 = 2;
                        puVar6 = recovered_100066e0(local_c8);
                        if (local_c4 != 0) {
                          uVar7 = 0;
                          do {
                            *(byte *)((int)puVar6 + uVar7) = *(byte *)((int)local_b0 + uVar7);
                            uVar7 = uVar7 + 1;
                          } while (local_c4 != uVar7);
                        }
                        recovered_10006740(local_b0);
                        local_b0 = puVar6;
                      }
                      else {
LAB_1000a025:
                        local_c8 = local_6c;
                      }
                      *(byte *)((int)local_b0 + local_c4) = bVar19;
                      if ((byte)local_60 == 0xff) {
                        local_c4 = local_c4 + 1;
                      }
                      else {
                        if (local_c4 + 1 == local_c8) {
                          uVar7 = local_c8 * 2;
                          if (local_c8 == 0) {
                            uVar7 = 4;
                          }
                          if (uVar7 <= local_c8) goto LAB_1000a0e2;
                          local_54 = 3;
                          local_5c = local_b0;
                          local_cc = recovered_100066e0(uVar7);
                          if (local_c8 != 0) {
                            uVar8 = 0;
                            do {
                              *(byte *)((int)local_cc + uVar8) = *(byte *)((int)local_b0 + uVar8);
                              uVar8 = uVar8 + 1;
                            } while (local_c8 != uVar8);
                          }
                          recovered_10006740(local_b0);
                          *(byte *)((int)local_cc + local_c8) = (byte)local_60;
                          local_c4 = local_c8 + 1;
                          local_c8 = uVar7;
                        }
                        else {
LAB_1000a0e2:
                          *(byte *)((int)local_b0 + local_c4 + 1) = (byte)local_60;
                          local_c4 = local_c4 + 2;
                          local_cc = local_b0;
                        }
                        if (bVar3 != 0xff) {
                          if (local_c4 == local_c8) {
                            local_6c = local_c8 * 2;
                            if (local_c8 == 0) {
                              local_6c = 4;
                            }
                            if (local_6c <= local_c8) goto LAB_1000a179;
                            local_5c = local_cc;
                            local_54 = 4;
                            puVar6 = recovered_100066e0(local_6c);
                            if (local_c8 != 0) {
                              uVar7 = 0;
                              do {
                                *(byte *)((int)puVar6 + uVar7) = *(byte *)((int)local_cc + uVar7);
                                uVar7 = uVar7 + 1;
                              } while (local_c8 != uVar7);
                            }
                            recovered_10006740(local_cc);
                            pbVar13 = (byte *)((int)puVar6 + local_c8);
                            local_cc = puVar6;
                          }
                          else {
LAB_1000a179:
                            pbVar13 = (byte *)((int)local_cc + local_c4);
                            local_6c = local_c8;
                            local_c8 = local_c4;
                          }
                          *pbVar13 = bVar3;
                          local_c4 = local_c8 + 1;
                          bVar4 = false;
                          local_b0 = local_cc;
                          goto LAB_1000a1bb;
                        }
                        local_b0 = local_cc;
                      }
                      local_6c = local_c8;
                    }
                    bVar4 = true;
                    local_cc = local_b0;
                  }
LAB_1000a1bb:
                  if (uVar11 < 4) {
                    iVar12 = 1;
                    ppvVar14 = &local_90;
                    switch((uintptr_t)(*(int *)((uintptr_t)pf_piet_step_table_4 + uVar11 * 4) + local_9c)) {
                    case 0x10009ee3:
                      iVar12 = -1;
                      ppvVar14 = &local_90;
                      break;
                    case 0x1000a1e0:
                      iVar12 = -1;
                    case 0x1000a1e5:
                      ppvVar14 = &local_94;
                    }
                    *ppvVar14 = (void *)((int)*ppvVar14 + iVar12);
                  }
                  uVar7 = local_a0[2];
                  if (uVar7 == 0) goto LAB_1000a705;
                }
                if (uVar11 < 4) {
                  iVar12 = 1;
                  ppvVar14 = &local_90;
                  switch((uintptr_t)(*(int *)((uintptr_t)pf_piet_step_table_5 + uVar11 * 4) + local_9c)) {
                  case 0x1000a20f:
                    iVar12 = -1;
                    ppvVar14 = &local_90;
                    break;
                  case 0x1000a21a:
                    iVar12 = -1;
                  case 0x1000a21f:
                    ppvVar14 = &local_94;
                  }
                  *ppvVar14 = (void *)((int)*ppvVar14 + iVar12);
                }
                pvVar16 = local_90;
                pvVar17 = local_94;
                if (local_18 == 2) {
                  uVar11 = 0;
                  if (local_c4 == 0) {
LAB_1000a3f1:
                    uVar7 = uVar11 + 1;
                  }
                  else {
                    uVar8 = 0;
                    uVar7 = local_c4;
                    do {
                      if (0xffffff < uVar8) {
                        uVar7 = 0xffffffff;
                        goto LAB_1000a522;
                      }
                      uVar10 = uVar11 >> 0x18;
                      uVar8 = uVar8 << 8 | uVar10;
                      uVar11 = uVar11 << 8 | (uint)(byte)*local_cc;
                      local_cc = (uint *)((int)local_cc + 1);
                      uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                    uVar7 = 0xffffffff;
                    if (uVar8 >> 1 == 0 &&
                        (uint)(0x7ffffffe < (uVar10 << 0x1f | uVar11 >> 1)) <= -(uVar8 >> 1))
                    goto LAB_1000a3f1;
                  }
LAB_1000a522:
                  local_74 = local_c4 == 0;
                  local_8c = (undefined1 *)0x0;
                  local_88 = 0;
                  local_84 = 0;
                  local_7c = 0;
                  local_80 = 0;
                  local_90 = (void *)CONCAT31(PF_PART3(local_90, 1),2);
                  local_54 = 9;
                  local_78 = uVar7;
                  recovered_1000b940((int *)&local_ac,(undefined1 *)&local_90);
                  if ((uint)param_1[2] < uVar7) {
                    local_54 = 10;
                    recovered_1000aef0(local_24,uVar7);
                  }
LAB_1000a5a7:
                  puVar9 = local_8c;
LAB_1000a5ae:
                  recovered_10006740(puVar9);
                }
                else {
                  if (local_18 == 1) {
                    local_80 = 0;
                    if (local_c4 == 0) {
                      local_7c = 0;
                    }
                    else {
                      local_7c = 0;
                      uVar11 = local_c4;
                      do {
                        if (0xffffff < local_7c) {
                          local_80 = 0xffffffff;
                          local_7c = 0xffffffff;
                          break;
                        }
                        local_7c = local_7c << 8 | local_80 >> 0x18;
                        local_80 = local_80 << 8 | (uint)(byte)*local_cc;
                        local_cc = (uint *)((int)local_cc + 1);
                        uVar11 = uVar11 - 1;
                      } while (uVar11 != 0);
                    }
                    if ((int)local_7c < 0) {
                      local_80 = 0xffffffff;
                      local_7c = 0x7fffffff;
                    }
                    local_74 = local_c4 == 0;
                    local_8c = (undefined1 *)0x0;
                    local_88 = 0;
                    local_84 = 0;
                    local_78 = 0;
                    local_90 = (void *)CONCAT31(PF_PART3(local_90, 1),1);
                    local_54 = 8;
                    recovered_1000b940((int *)&local_ac,(undefined1 *)&local_90);
                    goto LAB_1000a5a7;
                  }
                  if (local_18 == 0) {
                    if (local_c4 == 0) {
                      local_cc = (uint *)0x0;
                      puVar9 = (undefined1 *)0x0;
                    }
                    else {
                      local_54 = 5;
                      puVar9 = recovered_100066e0(local_c4 + 1);
                      *puVar9 = 0;
                      recovered_10006740((void *)0x0);
                      puVar15 = (uint *)((int)local_cc + local_c4);
                      uVar11 = 0;
                      local_cc = (uint *)local_c4;
                      puVar18 = puVar6;
                      local_a0 = puVar15;
                      do {
                        uVar7 = *puVar18;
                        local_64 = puVar9;
                        if ((uint *)uVar11 == local_cc) {
                          uVar8 = uVar11 * 2;
                          if (uVar11 == 0) {
                            uVar8 = 0x10;
                          }
                          if (uVar11 < uVar8) {
                            local_54 = 7;
                            local_60 = uVar11;
                            puVar9 = recovered_100066e0(uVar8 | 1);
                            uVar11 = local_60;
                            *puVar9 = 0;
                            if (local_60 != 0) {
                              uVar10 = 0;
                              do {
                                puVar9[uVar10] = local_64[uVar10];
                                uVar10 = uVar10 + 1;
                              } while (local_60 != uVar10);
                            }
                            puVar9[local_60] = 0;
                            recovered_10006740(local_64);
                            puVar15 = local_a0;
                            local_cc = (uint *)uVar8;
                          }
                        }
                        puVar9[uVar11] = (byte)uVar7;
                        puVar9[uVar11 + 1] = 0;
                        uVar11 = uVar11 + 1;
                        puVar18 = (uint *)((int)puVar18 + 1);
                      } while (puVar18 != puVar15);
                    }
                    local_8c = (undefined1 *)0x0;
                    local_88 = 0;
                    local_84 = 0;
                    local_7c = 0;
                    local_80 = 0;
                    local_78 = 0;
                    local_74 = 0;
                    local_90 = (void *)((uint)local_90 & 0xffffff00);
                    recovered_10006740((void *)0x0);
                    local_74 = local_c4 == 0;
                    local_88 = local_c4;
                    local_84 = (uint)local_cc;
                    local_54 = 6;
                    local_8c = puVar9;
                    recovered_1000b940((int *)&local_ac,(undefined1 *)&local_90);
                    recovered_10006740(local_8c);
                    puVar9 = (undefined1 *)0x0;
                    goto LAB_1000a5ae;
                  }
                }
                puVar20 = local_70;
                local_68 = pvVar16;
                local_98 = pvVar17;
                recovered_10006740(puVar6);
                pbVar13 = local_1c + 1;
              } while (pbVar13 != local_20);
            }
            param_1[7] = (int)local_68;
            param_1[8] = (int)local_98;
            owner = (int *)puVar20[3];
            pvVar17 = local_68;
            pvVar16 = local_98;
            if (owner != (int *)0x0) {
              local_54 = 0xb;
              (**(code **)(*owner + 8))(owner,param_1,&local_ac);
              pvVar17 = (void *)param_1[7];
              pvVar16 = (void *)param_1[8];
            }
          }
          else {
            param_1[7] = (int)local_68;
            param_1[8] = (int)local_98;
            pvVar17 = local_68;
            pvVar16 = local_98;
          }
          puVar6 = (uint *)*param_1;
          if (((puVar6 == (uint *)0x0) || (puVar6[2] == 0)) ||
             (((int)*puVar6 < 1 ||
              (((void *)puVar6[1] < pvVar16 || (void *)*puVar6 < pvVar17) ||
               (((int)pvVar16 < 1 || (int)pvVar17 < 1) || (int)puVar6[1] < 1))))) {
            *(undefined1 *)(param_1 + 0xb) = 1;
LAB_1000a71e:
            bVar19 = 0;
          }
          else {
            bVar19 = *(byte *)(param_1 + 0xb) ^ 1;
          }
          if (local_a8 != 0) {
            iVar21 = local_a8 * 0x20 + -0x1c;
            iVar12 = local_a8;
            do {
              recovered_10006740(*(void **)((int)local_ac + iVar21));
              iVar21 = iVar21 + -0x20;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          local_a8 = 0;
          recovered_10006740(local_ac);
        }
        goto LAB_10009c1b;
      }
    }
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  bVar19 = 0;
LAB_10009c1b:
  recovered_10006d10(&local_58);
  return bVar19 & 1;
}

#undef DAT_1000ef2c
#undef PTR_recovered_10006670_1000f004
#undef auStackY_160
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
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
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_24
#undef auStack_14
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8c0
 */

void recovered_1000a8c0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(byte *)(param_1 + 0x24) < 4) {
    *(char *)(param_1 + 0x24) = (char)(0x30201 >> ((*(byte *)(param_1 + 0x24) & 3) << 3));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8f0
 */

void recovered_1000a8f0(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;

  if ((uint)param_1[2] < param_2) {
    pvVar3 = recovered_100066e0(param_2 << 5);
    if (param_1[1] != 0) {
      uVar5 = 0;
      iVar4 = 0x10;
      do {
        iVar1 = *param_1;
        *(undefined1 *)((int)pvVar3 + iVar4 + -0x10) = *(undefined1 *)(iVar1 + -0x10 + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4 + -0xc) = *(undefined4 *)(iVar1 + -0xc + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4 + -8) = *(undefined4 *)(iVar1 + -8 + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4 + -4) = *(undefined4 *)(iVar1 + -4 + iVar4);
        *(undefined4 *)(iVar1 + -0xc + iVar4) = 0;
        *(undefined4 *)(iVar1 + -8 + iVar4) = 0;
        *(undefined4 *)(iVar1 + -4 + iVar4) = 0;
        *(undefined1 *)((int)pvVar3 + iVar4 + 0xc) = *(undefined1 *)(iVar1 + 0xc + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4 + 8) = *(undefined4 *)(iVar1 + 8 + iVar4);
        uVar2 = *(undefined4 *)(iVar1 + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4 + 4) = *(undefined4 *)(iVar1 + 4 + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4) = uVar2;
        recovered_10006740((void *)0x0);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x20;
      } while (uVar5 < (uint)param_1[1]);
    }
    recovered_10006740((void *)*param_1);
    *param_1 = (int)pvVar3;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9d0
 */

int recovered_1000a9d0(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_2 + (uint)(param_2 == 0);
  if (*(uint *)(param_1 + 8) < uVar1) {
    recovered_1000aef0((int *)(param_1 + 4),uVar1);
  }
  return *(int *)(param_1 + 4) + -0x18 + uVar1 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa10
 */

void recovered_1000aa10(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar1 = iVar2 * 0x20 + -0x1c;
    do {
      recovered_10006740(*(void **)(*param_1 + iVar1));
      iVar1 = iVar1 + -0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = 0;
  recovered_10006740((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa60
 */

void recovered_1000aa60(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  do {
    bVar1 = recovered_10009ac0(param_1);
  } while (bVar1 != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa90
 */

undefined1 recovered_1000aa90(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x2c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aab0
 */

void recovered_1000aab0(int param_1,uint param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int *piVar8;

  if (*(uint *)(param_1 + 0x14) <= param_2) {
    recovered_1000ab80((int *)(param_1 + 0x10),param_2 + 1);
  }
  piVar8 = (int *)(param_2 * 0x10 + *(int *)(param_1 + 0x10));
  if (piVar8 != param_3) {
    iVar1 = param_3[1];
    if (iVar1 == 0) {
      pvVar5 = (void *)0x0;
      iVar6 = 0;
    }
    else {
      pvVar5 = recovered_100066e0(iVar1);
      recovered_10006740((void *)0x0);
      iVar6 = param_3[1];
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar2 = *param_3;
        iVar7 = 0;
        do {
          *(undefined1 *)((int)pvVar5 + iVar7) = *(undefined1 *)(iVar2 + iVar7);
          iVar7 = iVar7 + 1;
        } while (iVar6 != iVar7);
      }
    }
    pvVar3 = (void *)*piVar8;
    *piVar8 = (int)pvVar5;
    piVar8[1] = iVar6;
    piVar8[2] = iVar1;
    recovered_10006740(pvVar3);
    piVar4 = (int *)param_3[3];
    pvVar5 = (void *)0x0;
    if (piVar4 != (int *)0x0) {
      pvVar5 = (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    piVar4 = (int *)piVar8[3];
    piVar8[3] = (int)pvVar5;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab80
 */

void recovered_1000ab80(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *owner;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    iVar2 = uVar3 * 0x10 + -4;
    do {
      iVar4 = *param_1;
      owner = *(int **)(iVar4 + iVar2);
      if (owner != (int *)0x0) {
        (**(code **)(*owner + 4))(owner);
      }
      *(undefined4 *)(iVar4 + -8 + iVar2) = 0;
      recovered_10006740(*(void **)(iVar4 + -0xc + iVar2));
      uVar3 = uVar3 - 1;
      iVar2 = iVar2 + -0x10;
    } while (param_2 < uVar3);
    param_1[1] = param_2;
  }
  else if (uVar3 < param_2) {
    if ((uint)param_1[2] < param_2) {
      pvVar1 = recovered_100066e0(param_2 << 4);
      if (param_1[1] != 0) {
        uVar3 = 0;
        iVar2 = 0xc;
        do {
          iVar4 = *param_1;
          *(undefined4 *)((int)pvVar1 + iVar2 + -0xc) = *(undefined4 *)(iVar4 + -0xc + iVar2);
          *(undefined4 *)((int)pvVar1 + iVar2 + -8) = *(undefined4 *)(iVar4 + -8 + iVar2);
          *(undefined4 *)((int)pvVar1 + iVar2 + -4) = *(undefined4 *)(iVar4 + -4 + iVar2);
          *(undefined4 *)(iVar4 + -0xc + iVar2) = 0;
          *(undefined4 *)(iVar4 + -4 + iVar2) = 0;
          *(undefined4 *)((int)pvVar1 + iVar2) = *(undefined4 *)(iVar4 + iVar2);
          *(undefined4 *)(iVar4 + iVar2) = 0;
          *(undefined4 *)(iVar4 + -8 + iVar2) = 0;
          recovered_10006740((void *)0x0);
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 0x10;
        } while (uVar3 < (uint)param_1[1]);
      }
      recovered_10006740((void *)*param_1);
      *param_1 = (int)pvVar1;
      param_1[2] = param_2;
      uVar3 = param_1[1];
    }
    while (uVar3 < param_2) {
      iVar2 = *param_1;
      iVar4 = uVar3 * 0x10;
      *(undefined4 *)(iVar2 + 0xc + iVar4) = 0;
      *(undefined4 *)(iVar2 + 8 + iVar4) = 0;
      *(undefined4 *)(iVar2 + 4 + iVar4) = 0;
      *(undefined4 *)(iVar2 + iVar4) = 0;
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
    }
  }
  return;
}


#undef DAT_1000ef48
#define DAT_1000ef48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc32U)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define local_58 (*(void * *)(pf_stack_frame + 168))
#define local_54 (*(void * *)(pf_stack_frame + 172))
#define local_50 (*(void * *)(pf_stack_frame + 176))
#define local_4c (*(int * *)(pf_stack_frame + 180))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ace0
 */

void recovered_1000ace0(int param_1,uint param_2,void **param_3,int **param_4)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  local_58 = (void *)0x0;
  local_54 = (void *)0x0;
  local_50 = (void *)0x0;
  local_4c = (int *)0x0;
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000ef48;
  local_24 = 0x10e;
  recovered_10006ce0(&local_48);
  if (&local_58 != param_3) {
    recovered_10006740((void *)0x0);
    local_58 = *param_3;
    local_54 = param_3[1];
    local_50 = param_3[2];
    *param_3 = (void *)0x0;
    param_3[1] = (void *)0x0;
    param_3[2] = (void *)0x0;
  }
  if (&local_4c != param_4) {
    if (local_4c != (int *)0x0) {
      (**(code **)(*local_4c + 4))(local_4c);
    }
    local_4c = *param_4;
    *param_4 = (int *)0x0;
  }
  local_44 = 1;
  recovered_1000aab0(param_1,param_2,(int *)&local_58);
  if (local_4c != (int *)0x0) {
    (**(code **)(*local_4c + 4))(local_4c);
  }
  local_54 = (void *)0x0;
  recovered_10006740(local_58);
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000ef48
#undef PTR_recovered_10006670_1000f004
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef auStackY_f0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae50
 */

void recovered_1000ae50(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *owner;
  int iVar2;

  if (param_2 < *(uint *)(param_1 + 0x14)) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = param_2 * 0x10;
    *(undefined4 *)(iVar1 + 4 + iVar2) = 0;
    recovered_10006740(*(void **)(iVar1 + iVar2));
    *(undefined4 *)(iVar1 + iVar2) = 0;
    *(undefined4 *)(iVar1 + 4 + iVar2) = 0;
    *(undefined4 *)(iVar1 + 8 + iVar2) = 0;
    owner = *(int **)(iVar1 + 0xc + iVar2);
    if (owner != (int *)0x0) {
      (**(code **)(*owner + 4))(owner);
    }
    *(undefined4 *)(iVar1 + iVar2 + 0xc) = 0;
    recovered_10006740((void *)0x0);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aed0
 */

int recovered_1000aed0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aee0
 */

int recovered_1000aee0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aef0
 */

void recovered_1000aef0(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;

  uVar4 = param_1[1];
  if (param_2 < uVar4) {
    iVar5 = uVar4 * 0x18 + -0x14;
    do {
      recovered_10006740(*(void **)(*param_1 + iVar5));
      uVar4 = uVar4 - 1;
      iVar5 = iVar5 + -0x18;
    } while (param_2 < uVar4);
    param_1[1] = param_2;
  }
  else if (uVar4 < param_2) {
    if ((uint)param_1[2] < param_2) {
      pvVar3 = recovered_100066e0(param_2 * 0x18);
      if (param_1[1] != 0) {
        uVar4 = 0;
        iVar5 = 0x10;
        do {
          iVar1 = *param_1;
          *(undefined1 *)((int)pvVar3 + iVar5 + -0x10) = *(undefined1 *)(iVar1 + -0x10 + iVar5);
          *(undefined4 *)((int)pvVar3 + iVar5 + -0xc) = *(undefined4 *)(iVar1 + -0xc + iVar5);
          *(undefined4 *)((int)pvVar3 + iVar5 + -8) = *(undefined4 *)(iVar1 + -8 + iVar5);
          *(undefined4 *)((int)pvVar3 + iVar5 + -4) = *(undefined4 *)(iVar1 + -4 + iVar5);
          *(undefined4 *)(iVar1 + -0xc + iVar5) = 0;
          *(undefined4 *)(iVar1 + -8 + iVar5) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar5) = 0;
          uVar2 = *(undefined4 *)(iVar1 + iVar5);
          *(undefined4 *)((int)pvVar3 + iVar5 + 4) = *(undefined4 *)(iVar1 + 4 + iVar5);
          *(undefined4 *)((int)pvVar3 + iVar5) = uVar2;
          recovered_10006740((void *)0x0);
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 0x18;
        } while (uVar4 < (uint)param_1[1]);
      }
      recovered_10006740((void *)*param_1);
      *param_1 = (int)pvVar3;
      param_1[2] = param_2;
      uVar4 = param_1[1];
    }
    while (uVar4 < param_2) {
      iVar5 = *param_1;
      *(undefined4 *)(iVar5 + 0x14 + uVar4 * 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x10 + uVar4 * 0x18) = 0;
      *(undefined4 *)(iVar5 + 0xc + uVar4 * 0x18) = 0;
      *(undefined4 *)(iVar5 + 8 + uVar4 * 0x18) = 0;
      *(undefined4 *)(iVar5 + 4 + uVar4 * 0x18) = 0;
      *(undefined4 *)(iVar5 + uVar4 * 0x18) = 0;
      uVar4 = param_1[1] + 1;
      param_1[1] = uVar4;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b050
 */

int recovered_1000b050(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uVar2 = param_2 + (uint)(param_2 == 0);
  iVar1 = 0;
  if (uVar2 <= *(uint *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4) + -0x18 + uVar2 * 0x18;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b080
 */

void recovered_1000b080(int param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000e070((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0b0
 */

void recovered_1000b0b0(int param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000e1e0((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
#undef DAT_1000ef50
#define DAT_1000ef50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc3aU)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 160))
#define local_5c (*(void * *)(pf_stack_frame + 164))
#define local_58 (*(undefined4 *)(pf_stack_frame + 168))
#define local_54 (*(undefined4 *)(pf_stack_frame + 172))
#define local_50 (*(undefined4 *)(pf_stack_frame + 176))
#define local_4c (*(undefined4 *)(pf_stack_frame + 180))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0e0
 */

undefined4 recovered_1000b0e0(int param_1,void **param_2)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined1 *puVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  local_5c = (void *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_50 = 0;
  local_60[0] = 1;
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000ef50;
  local_24 = 0xea;
  recovered_10006ce0(&local_48);
  if (&local_5c != param_2) {
    puVar2 = &DAT_1000ed7c;
    if (*param_2 != (undefined1 *)0x0) {
      puVar2 = *param_2;
    }
    local_44 = 1;
    recovered_1000b7d0((int *)&local_5c,(int)puVar2,(uint)param_2[1]);
  }
  local_4c = 0;
  local_50 = 0;
  local_44 = 2;
  recovered_1000e1e0((int *)(param_1 + 4),local_60);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  recovered_10006740(local_5c);
  recovered_10006d10(&local_48);
  return uVar1;
}

#undef DAT_1000ed7c
#undef DAT_1000ef50
#undef PTR_recovered_10006670_1000f004
#undef auStackY_f0
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_1000ef58
#define DAT_1000ef58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc42U)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 160))
#define local_5c (*(void * *)(pf_stack_frame + 164))
#define local_58 (*(void * *)(pf_stack_frame + 168))
#define local_54 (*(void * *)(pf_stack_frame + 172))
#define local_50 (*(undefined4 *)(pf_stack_frame + 176))
#define local_4c (*(undefined4 *)(pf_stack_frame + 180))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b220
 */

undefined4 recovered_1000b220(int param_1,void **param_2)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  local_5c = (void *)0x0;
  local_58 = (void *)0x0;
  local_54 = (void *)0x0;
  local_4c = 0;
  local_50 = 0;
  local_60[0] = 1;
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000ef58;
  local_24 = 0xf6;
  recovered_10006ce0(&local_48);
  if (&local_5c != param_2) {
    recovered_10006740((void *)0x0);
    local_5c = *param_2;
    local_58 = param_2[1];
    local_54 = param_2[2];
    *param_2 = (void *)0x0;
    param_2[1] = (void *)0x0;
    param_2[2] = (void *)0x0;
  }
  local_4c = 0;
  local_50 = 0;
  local_44 = 1;
  recovered_1000e1e0((int *)(param_1 + 4),local_60);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  recovered_10006740(local_5c);
  recovered_10006d10(&local_48);
  return uVar1;
}

#undef DAT_1000ef58
#undef PTR_recovered_10006670_1000f004
#undef auStackY_f0
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef auStack_1c
#undef local_20

#undef DAT_1000ef60
#define DAT_1000ef60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4aU)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define local_58 (*(undefined4 *)(pf_stack_frame + 168))
#define local_54 (*(undefined4 *)(pf_stack_frame + 172))
#define local_50 (*(undefined4 *)(pf_stack_frame + 176))
#define local_4c (*(undefined4 *)(pf_stack_frame + 180))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 160))
#define local_5c (*(void * *)(pf_stack_frame + 164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b360
 */

undefined4 recovered_1000b360(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  local_5c = (void *)0x0;
  local_54 = 0;
  local_60[0] = 2;
  local_4c = param_3;
  local_50 = param_2;
  local_58 = 0;
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000ef60;
  local_24 = 0xa5;
  local_44 = 1;
  recovered_10006ce0(&local_48);
  recovered_1000e1e0((int *)(param_1 + 4),local_60);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  recovered_10006740(local_5c);
  recovered_10006d10(&local_48);
  return uVar1;
}

#undef DAT_1000ef60
#undef PTR_recovered_10006670_1000f004
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_f0
#undef auStack_1c
#undef local_60
#undef local_5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b450
 */

void recovered_1000b450(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_2 + (uint)(param_2 == 0);
  if (*(uint *)(param_1 + 8) < uVar1) {
    recovered_1000aef0((int *)(param_1 + 4),uVar1);
  }
  recovered_1000e070((int *)(param_1 + 4),
                     (undefined1 *)(*(int *)(param_1 + 4) + -0x18 + uVar1 * 0x18));
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4b0
 */

void recovered_1000b4b0(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;

  uVar5 = param_2 + (uint)(param_2 == 0);
  *(uint *)(param_1 + 0x30) = uVar5;
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 < uVar5) {
    recovered_1000aef0((int *)(param_1 + 4),uVar5);
    uVar4 = *(uint *)(param_1 + 8);
  }
  if (uVar4 < uVar5) {
    recovered_1000aef0((int *)(param_1 + 4),uVar5);
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = iVar2 + uVar5 * 0x18;
  *(undefined1 *)(iVar2 + -0x18 + uVar5 * 0x18) = 0;
  *(undefined4 *)(iVar2 + -0x10 + uVar5 * 0x18) = 0;
  puVar3 = *(undefined1 **)(iVar2 + -0x14 + uVar5 * 0x18);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b530
 */

void recovered_1000b530(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_2 + (uint)(param_2 == 0);
  *(uint *)(param_1 + 0x30) = uVar1;
  if (*(uint *)(param_1 + 8) < uVar1) {
    recovered_1000aef0((int *)(param_1 + 4),uVar1);
  }
  return;
}


#undef DAT_1000ef68
#define DAT_1000ef68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc52U)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define local_58 (*(undefined4 *)(pf_stack_frame + 168))
#define local_54 (*(undefined4 *)(pf_stack_frame + 172))
#define local_50 (*(undefined4 *)(pf_stack_frame + 176))
#define local_4c (*(undefined4 *)(pf_stack_frame + 180))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 160))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_5c (*(void * *)(pf_stack_frame + 164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b570
 */

int recovered_1000b570(int param_1)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  uVar2 = *(uint *)(param_1 + 0x30);
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000ef68;
  local_24 = 0x118;
  recovered_10006ce0(&local_48);
  if (uVar2 == 0) {
    local_60[0] = 0;
    local_5c = (void *)0x0;
    local_58 = 0;
    local_54 = 0;
    local_4c = 0;
    local_50 = 0;
    piVar1 = (int *)(param_1 + 4);
    local_44 = 1;
    recovered_1000e1e0(piVar1,local_60);
    iVar3 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 0x30) = iVar3;
    uVar2 = iVar3 + (uint)(iVar3 == 0);
    if (iVar3 == 0) {
      local_44 = 2;
      recovered_1000aef0(piVar1,uVar2);
    }
    iVar3 = uVar2 * 0x18 + *piVar1;
    recovered_10006740(local_5c);
  }
  else {
    if (*(uint *)(param_1 + 8) < uVar2) {
      local_44 = 0xffffffff;
      recovered_1000aef0((int *)(param_1 + 4),uVar2);
    }
    iVar3 = uVar2 * 0x18 + *(int *)(param_1 + 4);
  }
  recovered_10006d10(&local_48);
  return iVar3 + -0x18;
}

#undef DAT_1000ef68
#undef PTR_recovered_10006670_1000f004
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_f0
#undef local_60
#undef auStack_1c
#undef local_5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b6e0
 */

int recovered_1000b6e0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  uVar1 = *(uint *)(param_1 + 0x30);
  iVar2 = 0;
  if ((uVar1 != 0) && (uVar1 <= *(uint *)(param_1 + 8))) {
    iVar2 = *(int *)(param_1 + 4) + -0x18 + uVar1 * 0x18;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b710
 */

int recovered_1000b710(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b720
 */

int recovered_1000b720(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b730
 */

undefined4 recovered_1000b730(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x30);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b740
 */

undefined4 recovered_1000b740(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x1c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b750
 */

undefined4 recovered_1000b750(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b760
 */

undefined1 recovered_1000b760(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x24);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b780
 */

void recovered_1000b780(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7a0
 */

undefined4 recovered_1000b7a0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x28);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7b0
 */

void recovered_1000b7b0(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(uint *)(param_1 + 0x28) = param_2 & 0xffffff;
  return;
}


#define local_20 (*(void * *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7d0
 */

void recovered_1000b7d0(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  uVar6 = param_3;
  if (param_2 == 0) {
    uVar6 = 0;
  }
  puVar3 = (undefined1 *)*param_1;
  if (puVar3 != (undefined1 *)0x0 && param_2 != 0) {
    uVar4 = param_2 - (int)puVar3;
    uVar7 = 0;
    do {
      if (uVar4 == uVar7) {
        uVar7 = param_1[1] - uVar4;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        local_20 = (void *)0x0;
        local_1c = 0;
        local_18 = 0;
        recovered_1000b7d0((int *)&local_20,(int)(puVar3 + uVar4),uVar7);
        pvVar1 = (void *)*param_1;
        *param_1 = (int)local_20;
        iVar2 = param_1[1];
        param_1[1] = local_1c;
        iVar5 = param_1[2];
        param_1[2] = local_18;
        local_20 = pvVar1;
        local_1c = iVar2;
        local_18 = iVar5;
        recovered_10006740(pvVar1);
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  if (uVar6 == 0) {
    if (*param_1 == 0) {
      puVar3 = recovered_100066e0(1);
      *puVar3 = 0;
      *param_1 = (int)puVar3;
      param_1[2] = 0;
    }
  }
  else {
    if ((uint)param_1[2] < uVar6) {
      puVar3 = recovered_100066e0(uVar6 + 1);
      *puVar3 = 0;
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      puVar3[iVar2] = 0;
      recovered_10006740(pvVar1);
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar4 = 0;
    do {
      *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
    param_1[1] = param_3;
    *(undefined1 *)(*param_1 + param_3) = 0;
  }
  return;
}

#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b940
 */

int recovered_1000b940(int *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar4 = 4;
    if (uVar5 != 0) {
      uVar4 = uVar5 * 2;
    }
    if (uVar5 < uVar4) {
      pvVar2 = recovered_100066e0(uVar4 << 5);
      if (param_1[1] != 0) {
        uVar5 = 0;
        iVar6 = 0x10;
        do {
          iVar3 = *param_1;
          *(undefined1 *)((int)pvVar2 + iVar6 + -0x10) = *(undefined1 *)(iVar3 + -0x10 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + -0xc) = *(undefined4 *)(iVar3 + -0xc + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + -8) = *(undefined4 *)(iVar3 + -8 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + -4) = *(undefined4 *)(iVar3 + -4 + iVar6);
          *(undefined4 *)(iVar3 + -0xc + iVar6) = 0;
          *(undefined4 *)(iVar3 + -8 + iVar6) = 0;
          *(undefined4 *)(iVar3 + -4 + iVar6) = 0;
          *(undefined1 *)((int)pvVar2 + iVar6 + 0xc) = *(undefined1 *)(iVar3 + 0xc + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + 8) = *(undefined4 *)(iVar3 + 8 + iVar6);
          uVar1 = *(undefined4 *)(iVar3 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + 4) = *(undefined4 *)(iVar3 + 4 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6) = uVar1;
          recovered_10006740((void *)0x0);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x20;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10006740((void *)*param_1);
      *param_1 = (int)pvVar2;
      param_1[2] = uVar4;
      uVar5 = param_1[1];
    }
  }
  iVar6 = *param_1;
  iVar3 = uVar5 * 0x20;
  *(undefined1 *)(iVar6 + iVar3) = *param_2;
  *(undefined4 *)(iVar6 + 4 + iVar3) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar6 + 8 + iVar3) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar6 + 0xc + iVar3) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(iVar6 + 0x1c + iVar3) = param_2[0x1c];
  *(undefined4 *)(iVar6 + 0x18 + iVar3) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(iVar6 + 0x14 + iVar3) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar6 + 0x10 + iVar3) = uVar1;
  iVar6 = param_1[1];
  param_1[1] = iVar6 + 1;
  return *param_1 + -0x20 + (iVar6 + 1) * 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000baa0
 */

void recovered_1000baa0(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    pvVar4 = recovered_100066e0(param_3);
    pvVar2 = (void *)*param_1;
    iVar3 = param_1[1];
    if (iVar3 != 0) {
      iVar7 = 0;
      do {
        *(undefined1 *)((int)pvVar4 + iVar7) = *(undefined1 *)((int)pvVar2 + iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    recovered_10006740(pvVar2);
    *param_1 = pvVar4;
    param_1[2] = param_3;
    puVar1 = param_2 + param_3;
    uVar5 = param_1[1];
    do {
      if (uVar5 == param_3) {
        uVar6 = param_3 * 2;
        if (param_3 == 0) {
          uVar6 = 4;
        }
        uVar5 = param_3;
        if (param_3 < uVar6) {
          pvVar4 = recovered_100066e0(uVar6);
          pvVar2 = (void *)*param_1;
          iVar3 = param_1[1];
          if (iVar3 != 0) {
            iVar7 = 0;
            do {
              *(undefined1 *)((int)pvVar4 + iVar7) = *(undefined1 *)((int)pvVar2 + iVar7);
              iVar7 = iVar7 + 1;
            } while (iVar3 != iVar7);
          }
          recovered_10006740(pvVar2);
          *param_1 = pvVar4;
          param_1[2] = uVar6;
          uVar5 = param_1[1];
          param_3 = uVar6;
        }
      }
      *(undefined1 *)((int)pvVar4 + uVar5) = *param_2;
      uVar5 = uVar5 + 1;
      param_1[1] = uVar5;
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bba0
 */

void recovered_1000bba0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbb0
 */

void recovered_1000bbb0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
#undef DAT_1000ef70
#define DAT_1000ef70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc5aU)))
#undef PTR_DAT_1000f008
#define PTR_DAT_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xcf2U)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define local_54 (*(char * (*)[21])(pf_stack_frame + 172))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbd0
 */

void recovered_1000bbd0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  iVar4 = *(int *)((int)arguments + 4);
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000ef70;
  local_24 = 0x14d;
  recovered_10006ce0(&local_48);
  if (iVar4 != 0) {
    if (*(char *)(*(int *)arguments + 0x1c) == '\x01') {
      if ((*(int *)((int)engine + 0x30) - 1U < *(uint *)((int)engine + 8)) &&
         (pcVar2 = (char *)(*(int *)((int)engine + 0x30) * 0x18 + *(int *)((int)engine + 4) + -0x18)
         , pcVar2 != (char *)0x0)) {
        local_44 = 0xffffffff;
        recovered_10007e00((int *)local_54,pcVar2);
        pcVar2 = &DAT_1000ed7c;
        if (local_54[0] != (char *)0x0) {
          pcVar2 = local_54[0];
        }
        if (*(uint **)PTR_DAT_1000f008 != (uint *)0x0) {
          iVar4 = -1;
          do {
            iVar1 = iVar4 + 1;
            iVar4 = iVar4 + 1;
          } while (pcVar2[iVar1] != '\0');
          local_44 = 1;
          recovered_10005bb0(pcVar2,1,iVar4,*(uint **)PTR_DAT_1000f008);
        }
        recovered_10006740(local_54[0]);
      }
    }
    else {
      pcVar2 = *(char **)(*(int *)arguments + 4);
      pcVar3 = &DAT_1000ed7c;
      if (pcVar2 != (char *)0x0) {
        pcVar3 = pcVar2;
      }
      if (*(uint **)PTR_DAT_1000f008 != (uint *)0x0) {
        iVar4 = -1;
        do {
          iVar1 = iVar4 + 1;
          iVar4 = iVar4 + 1;
        } while (pcVar3[iVar1] != '\0');
        local_44 = 0xffffffff;
        recovered_10005bb0(pcVar3,1,iVar4,*(uint **)PTR_DAT_1000f008);
      }
    }
  }
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000ed7c
#undef DAT_1000ef70
#undef PTR_DAT_1000f008
#undef PTR_recovered_10006670_1000f004
#undef auStackY_f0
#undef local_54
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef PTR_recovered_1000bba0_1000f014
#define PTR_recovered_1000bba0_1000f014 (*(void * *)(((uintptr_t)pf_module_state + 0xcfeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd70
 */

void * recovered_1000bd70(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000bba0_1000f014;
  return puVar1;
}

#undef PTR_recovered_1000bba0_1000f014

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bda0
 */

void recovered_1000bda0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdb0
 */

void recovered_1000bdb0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


#undef DAT_1000ee6a
#define DAT_1000ee6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdd0
 */

void recovered_1000bdd0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *variable;
  double dVar1;

  if (*(int *)((int)arguments + 4) != 0) {
    if (*(char *)(*(int *)arguments + 0x1c) == '\x01') {
      if (*(uint *)((int)engine + 8) <= *(int *)((int)engine + 0x30) - 1U) {
        return;
      }
      variable = (void *)(*(int *)((int)engine + 0x30) * 0x18 + *(int *)((int)engine + 4) + -0x18);
      if (variable == (void *)0x0) {
        return;
      }
      dVar1 = (double)recovered_10007f70(variable);
    }
    else {
      dVar1 = *(double *)(*(int *)arguments + 0x10);
    }
    recovered_100064f0(&DAT_1000ee6a,dVar1);
  }
  return;
}

#undef DAT_1000ee6a

#undef PTR_recovered_1000bda0_1000f040
#define PTR_recovered_1000bda0_1000f040 (*(void * *)(((uintptr_t)pf_module_state + 0xd2aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be40
 */

void * recovered_1000be40(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000bda0_1000f040;
  return puVar1;
}

#undef PTR_recovered_1000bda0_1000f040

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be70
 */

void recovered_1000be70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be80
 */

void recovered_1000be80(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


#define uStack_18 (*(undefined4 *)(pf_stack_frame + 24))
#define local_20 (*(void * *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bea0
 */

void recovered_1000bea0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar4;
  uVar3 = *(uint *)((int)engine + 8);
  if (uVar3 < uVar4) {
    recovered_1000aef0((int *)((int)engine + 4),uVar4);
    uVar3 = *(uint *)((int)engine + 8);
    uVar4 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  }
  if (uVar3 < uVar4) {
    recovered_1000aef0((int *)((int)engine + 4),uVar4);
  }
  iVar2 = *(int *)((int)engine + 4);
  iVar1 = iVar2 + uVar4 * 0x18;
  recovered_10007e00((int *)&local_20,(char *)(iVar2 + -0x18 + uVar4 * 0x18));
  *(undefined1 *)(iVar2 + -0x18 + uVar4 * 0x18) = 1;
  if ((void **)(iVar2 + -0x14 + uVar4 * 0x18) != &local_20) {
    recovered_10006740(*(void **)(iVar1 + -0x14));
    *(void **)(iVar1 + -0x14) = local_20;
    *(undefined4 *)(iVar1 + -0x10) = local_1c;
    *(undefined4 *)(iVar1 + -0xc) = uStack_18;
    local_20 = (void *)0x0;
    local_1c = 0;
    uStack_18 = 0;
  }
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  recovered_10006740(local_20);
  return;
}

#undef uStack_18
#undef local_20
#undef local_1c

#undef PTR_recovered_1000be70_1000f064
#define PTR_recovered_1000be70_1000f064 (*(void * *)(((uintptr_t)pf_module_state + 0xd4eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf90
 */

void * recovered_1000bf90(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000be70_1000f064;
  return puVar1;
}

#undef PTR_recovered_1000be70_1000f064

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bfc0
 */

void recovered_1000bfc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bfd0
 */

void recovered_1000bfd0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bff0
 */

void recovered_1000bff0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;

  uVar4 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar4;
  uVar3 = *(uint *)((int)engine + 8);
  if (uVar3 < uVar4) {
    recovered_1000aef0((int *)((int)engine + 4),uVar4);
    uVar3 = *(uint *)((int)engine + 8);
    uVar4 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  }
  if (uVar3 < uVar4) {
    recovered_1000aef0((int *)((int)engine + 4),uVar4);
  }
  iVar1 = *(int *)((int)engine + 4);
  lVar5 = recovered_10007f70((void *)(iVar1 + -0x18 + uVar4 * 0x18));
  *(undefined1 *)(iVar1 + -0x18 + uVar4 * 0x18) = 2;
  *(int *)(iVar1 + -4 + uVar4 * 0x18) = (int)((ulonglong)lVar5 >> 0x20);
  *(int *)(iVar1 + -8 + uVar4 * 0x18) = (int)lVar5;
  *(undefined4 *)(iVar1 + -0x10 + uVar4 * 0x18) = 0;
  puVar2 = *(undefined1 **)(iVar1 + -0x14 + uVar4 * 0x18);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  return;
}


#undef PTR_recovered_1000bfc0_1000f088
#define PTR_recovered_1000bfc0_1000f088 (*(void * *)(((uintptr_t)pf_module_state + 0xd72U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c080
 */

void * recovered_1000c080(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000bfc0_1000f088;
  return puVar1;
}

#undef PTR_recovered_1000bfc0_1000f088

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0b0
 */

void recovered_1000c0b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0c0
 */

void recovered_1000c0c0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
#undef DAT_1000ef78
#define DAT_1000ef78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc62U)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define local_5c (*(void * *)(pf_stack_frame + 164))
#define local_58 (*(undefined4 *)(pf_stack_frame + 168))
#define local_54 (*(undefined4 *)(pf_stack_frame + 172))
#define local_50 (*(undefined4 *)(pf_stack_frame + 176))
#define local_4c (*(undefined4 *)(pf_stack_frame + 180))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0e0
 */

void recovered_1000c0e0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  iVar1 = *(int *)((int)engine + 0x30);
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000ef78;
  local_24 = 0x157;
  recovered_10006ce0(&local_48);
  if (iVar1 == 0) {
    puVar2 = *(undefined1 **)arguments;
    local_5c = (void *)0x0;
    local_58 = 0;
    local_54 = 0;
    local_4c = 0;
    local_50 = 0;
    local_60[0] = 1;
    if (local_60 != puVar2) {
      puVar3 = &DAT_1000ed7c;
      if (*(undefined1 **)(puVar2 + 4) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(puVar2 + 4);
      }
      local_44 = 1;
      recovered_1000b7d0((int *)&local_5c,(int)puVar3,*(uint *)(puVar2 + 8));
    }
    local_4c = 0;
    local_50 = 0;
    local_44 = 2;
    recovered_1000e1e0((int *)((int)engine + 4),local_60);
    *(undefined4 *)((int)engine + 0x30) = *(undefined4 *)((int)engine + 8);
    recovered_10006740(local_5c);
  }
  else {
    local_44 = 0xffffffff;
    puVar3 = (undefined1 *)recovered_1000b570((int)engine);
    puVar2 = *(undefined1 **)arguments;
    *puVar3 = 1;
    if (puVar3 != puVar2) {
      puVar4 = &DAT_1000ed7c;
      if (*(undefined1 **)(puVar2 + 4) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(puVar2 + 4);
      }
      local_44 = 0xffffffff;
      recovered_1000b7d0((int *)(puVar3 + 4),(int)puVar4,*(uint *)(puVar2 + 8));
    }
    *(undefined4 *)(puVar3 + 0x14) = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
  }
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000ed7c
#undef DAT_1000ef78
#undef PTR_recovered_10006670_1000f004
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_f0
#undef auStack_1c
#undef local_60

#undef PTR_recovered_1000c0b0_1000f0ac
#define PTR_recovered_1000c0b0_1000f0ac (*(void * *)(((uintptr_t)pf_module_state + 0xd96U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c290
 */

void * recovered_1000c290(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000c0b0_1000f0ac;
  return puVar1;
}

#undef PTR_recovered_1000c0b0_1000f0ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2c0
 */

void recovered_1000c2c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2d0
 */

void recovered_1000c2d0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


#undef DAT_1000ef80
#define DAT_1000ef80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc6aU)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define local_54 (*(undefined4 *)(pf_stack_frame + 172))
#define local_50 (*(undefined4 *)(pf_stack_frame + 176))
#define local_4c (*(undefined4 *)(pf_stack_frame + 180))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 160))
#define local_5c (*(void * *)(pf_stack_frame + 164))
#define local_58 (*(undefined4 *)(pf_stack_frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2f0
 */

void recovered_1000c2f0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  iVar1 = *(int *)((int)engine + 0x30);
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000ef80;
  local_24 = 0xe3;
  recovered_10006ce0(&local_48);
  if (iVar1 == 0) {
    local_50 = *(undefined4 *)(*(int *)arguments + 0x10);
    local_4c = *(undefined4 *)(*(int *)arguments + 0x14);
    local_5c = (void *)0x0;
    local_54 = 0;
    local_60[0] = 2;
    local_58 = 0;
    local_44 = 1;
    recovered_1000e1e0((int *)((int)engine + 4),local_60);
    *(undefined4 *)((int)engine + 0x30) = *(undefined4 *)((int)engine + 8);
    recovered_10006740(local_5c);
  }
  else {
    local_44 = 0xffffffff;
    puVar4 = (undefined1 *)recovered_1000b570((int)engine);
    uVar2 = *(undefined4 *)(*(int *)arguments + 0x10);
    uVar3 = *(undefined4 *)(*(int *)arguments + 0x14);
    *puVar4 = 2;
    *(undefined4 *)(puVar4 + 0x10) = uVar2;
    *(undefined4 *)(puVar4 + 0x14) = uVar3;
    *(undefined4 *)(puVar4 + 8) = 0;
    if (*(undefined1 **)(puVar4 + 4) != (undefined1 *)0x0) {
      **(undefined1 **)(puVar4 + 4) = 0;
    }
  }
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000ef80
#undef PTR_recovered_10006670_1000f004
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_f0
#undef auStack_1c
#undef local_60
#undef local_5c
#undef local_58

#undef PTR_recovered_1000c2c0_1000f0d0
#define PTR_recovered_1000c2c0_1000f0d0 (*(void * *)(((uintptr_t)pf_module_state + 0xdbaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c420
 */

void * recovered_1000c420(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000c2c0_1000f0d0;
  return puVar1;
}

#undef PTR_recovered_1000c2c0_1000f0d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c450
 */

void recovered_1000c450(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c460
 */

void recovered_1000c460(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
#undef DAT_1000ef88
#define DAT_1000ef88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc72U)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define local_64 (*(undefined1 (*)[100])(pf_stack_frame + 172))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 176))
#define local_5c (*(uint *)(pf_stack_frame + 180))
#define local_58 (*(undefined4 *)(pf_stack_frame + 184))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 244))
#define local_54 (*(undefined4 *)(pf_stack_frame + 188))
#define local_50 (*(undefined4 *)(pf_stack_frame + 192))
#define local_4c (*(undefined1 * *)(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 200))
#define local_44 (*(undefined4 *)(pf_stack_frame + 204))
#define local_30 (*(undefined * *)(pf_stack_frame + 224))
#define local_2c (*(undefined * *)(pf_stack_frame + 228))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_24 (*(undefined4 *)(pf_stack_frame + 236))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 240))
#define auStackY_100 (*(undefined1 (*)[256])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c480
 */

void recovered_1000c480(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_100 + 0x80;
  uVar4 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  uVar1 = *(uint *)((int)engine + 8);
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000ef88;
  local_24 = 0x188;
  recovered_10006ce0(&local_48);
  if (uVar1 < uVar4) {
    local_44 = 0xffffffff;
    recovered_1000aef0((int *)((int)engine + 4),uVar4);
  }
  iVar2 = *(int *)((int)engine + 4);
  local_64[0] = *(undefined1 *)(iVar2 + -0x18 + uVar4 * 0x18);
  local_60 = (undefined1 *)0x0;
  local_5c = 0;
  local_58 = 0;
  puVar3 = *(undefined1 **)(iVar2 + -0x14 + uVar4 * 0x18);
  local_4c = &DAT_1000ed7c;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_1000ed7c;
  }
  local_44 = 0xffffffff;
  recovered_1000b7d0((int *)&local_60,(int)puVar3,*(uint *)(iVar2 + -0x10 + uVar4 * 0x18));
  local_54 = *(undefined4 *)(iVar2 + -8 + uVar4 * 0x18);
  local_50 = *(undefined4 *)(iVar2 + -4 + uVar4 * 0x18);
  if (*(int *)((int)engine + 0x30) == 0) {
    local_44 = 1;
    recovered_1000e070((int *)((int)engine + 4),local_64);
    *(undefined4 *)((int)engine + 0x30) = *(undefined4 *)((int)engine + 8);
  }
  else {
    local_44 = 2;
    puVar3 = (undefined1 *)recovered_1000b570((int)engine);
    *puVar3 = local_64[0];
    if (puVar3 != local_64) {
      puVar5 = local_4c;
      if (local_60 != (undefined1 *)0x0) {
        puVar5 = local_60;
      }
      local_44 = 3;
      recovered_1000b7d0((int *)(puVar3 + 4),(int)puVar5,local_5c);
    }
    *(undefined4 *)(puVar3 + 0x14) = local_50;
    *(undefined4 *)(puVar3 + 0x10) = local_54;
  }
  recovered_10006740(local_60);
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000ed7c
#undef DAT_1000ef88
#undef PTR_recovered_10006670_1000f004
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef auStack_1c
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_100

#undef PTR_recovered_1000c450_1000f0f4
#define PTR_recovered_1000c450_1000f0f4 (*(void * *)(((uintptr_t)pf_module_state + 0xddeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c660
 */

void * recovered_1000c660(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000c450_1000f0f4;
  return puVar1;
}

#undef PTR_recovered_1000c450_1000f0f4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c690
 */

void recovered_1000c690(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c6a0
 */

void recovered_1000c6a0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c6c0
 */

void recovered_1000c6c0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar10;
  uint uVar9;
  int iVar11;

  iVar1 = *(int *)arguments;
  uVar6 = *(uint *)(iVar1 + 0x10);
  iVar11 = *(int *)(iVar1 + 0x14);
  if ((SBORROW4(-1,iVar11) != SBORROW4(-1 - iVar11,(uint)(0x80000000 < uVar6))) ==
      (int)((-1 - iVar11) - (uint)(0x80000000 < uVar6)) < 0) {
    iVar11 = -1;
    uVar6 = 0x80000000;
  }
  if ((int)(uint)(uVar6 < 0x7fffffff) <= iVar11) {
    uVar6 = 0x7fffffff;
  }
  iVar11 = *(int *)(iVar1 + 0x34);
  uVar4 = (uint)(0x80000000 < *(uint *)(iVar1 + 0x30));
  uVar7 = 0x80000000;
  iVar5 = -1;
  if ((SBORROW4(-1,iVar11) != SBORROW4(-1 - iVar11,uVar4)) != (int)((-1 - iVar11) - uVar4) < 0) {
    uVar7 = *(uint *)(iVar1 + 0x30);
    iVar5 = iVar11;
  }
  if ((int)(uint)(uVar7 < 0x7fffffff) <= iVar5) {
    uVar7 = 0x7fffffff;
  }
  puVar2 = *(uint **)engine;
  if (((((puVar2 != (uint *)0x0) && (uVar4 = puVar2[2], uVar4 != 0)) &&
       (uVar3 = *puVar2, 0 < (int)uVar3)) && ((uVar7 <= puVar2[1] && (uVar6 <= uVar3)))) &&
     ((0 < (int)uVar7 && ((0 < (int)uVar6 && (0 < (int)puVar2[1])))))) {
    uVar9 = *(uint *)(iVar1 + 0x50);
    iVar11 = uVar6 + uVar3 * (uVar7 - 1);
    iVar1 = iVar11 * 4 + -4;
    iVar11 = iVar11 * 4 + -3;
    uVar8 = (undefined1)(uVar9 >> 0x10);
    uVar10 = (undefined1)(uVar9 >> 8);
    if ((uVar9 & 0xff000000) == 0) {
      *(undefined1 *)(uVar4 + iVar1) = uVar8;
      *(undefined1 *)(puVar2[2] + iVar11) = uVar10;
      *(char *)(puVar2[2] + 2 + iVar1) = (char)uVar9;
      uVar9 = 0xff;
    }
    else {
      *(char *)(uVar4 + iVar1) = (char)(uVar9 >> 0x18);
      *(undefined1 *)(puVar2[2] + iVar11) = uVar8;
      *(undefined1 *)(puVar2[2] + 2 + iVar1) = uVar10;
    }
    *(char *)(puVar2[2] + 3 + iVar1) = (char)uVar9;
  }
  return;
}


#undef PTR_recovered_1000c690_1000f118
#define PTR_recovered_1000c690_1000f118 (*(void * *)(((uintptr_t)pf_module_state + 0xe02U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c7f0
 */

void * recovered_1000c7f0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000c690_1000f118;
  return puVar1;
}

#undef PTR_recovered_1000c690_1000f118

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c820
 */

void recovered_1000c820(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c830
 */

void recovered_1000c830(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
#undef DAT_1000ef94
#define DAT_1000ef94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc7eU)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_5c (*(uint *)(pf_stack_frame + 164))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c850
 */

void recovered_1000c850(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  byte *pbVar10;
  char *pcVar11;
  byte bVar12;
  undefined1 uVar15;
  byte *pbVar13;
  uint uVar14;
  uint uVar16;
  uint uVar17;
  int iVar18;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  iVar8 = *(int *)arguments;
  local_5c = *(uint *)(iVar8 + 0x48);
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000ef94;
  local_24 = 899;
  recovered_10006ce0(&local_48);
  if (local_5c == 0) {
    pcVar5 = (char *)0x0;
  }
  else {
    local_44 = 1;
    pcVar5 = recovered_100066e0(local_5c + 1);
    *pcVar5 = '\0';
    recovered_10006740((void *)0x0);
    pbVar13 = &DAT_1000ed7c;
    if (*(byte **)(iVar8 + 0x44) != (byte *)0x0) {
      pbVar13 = *(byte **)(iVar8 + 0x44);
    }
    if (*(int *)(iVar8 + 0x48) != 0) {
      pbVar10 = pbVar13 + *(int *)(iVar8 + 0x48);
      uVar16 = 0;
      pcVar11 = pcVar5;
      do {
        bVar12 = *pbVar13;
        uVar6 = bVar12 - 9;
        pcVar5 = pcVar11;
        if ((0x1a < uVar6) || ((0x4800013U >> (uVar6 & 0x1f) & 1) == 0)) {
          if (uVar16 == local_5c) {
            uVar6 = uVar16 * 2;
            if (uVar16 == 0) {
              uVar6 = 0x10;
            }
            if (uVar6 <= uVar16) goto LAB_1000c9c1;
            local_44 = 2;
            pcVar5 = recovered_100066e0(uVar6 | 1);
            *pcVar5 = '\0';
            if (uVar16 != 0) {
              uVar7 = 0;
              do {
                pcVar5[uVar7] = pcVar11[uVar7];
                uVar7 = uVar7 + 1;
              } while (uVar16 != uVar7);
            }
            pcVar5[uVar16] = '\0';
            recovered_10006740(pcVar11);
            local_5c = uVar6;
          }
          else {
LAB_1000c9c1:
            if (pcVar11 == (char *)0x0) {
              local_44 = 3;
              pcVar5 = recovered_100066e0(1);
              *pcVar5 = '\0';
              local_5c = 0;
            }
          }
          pcVar5[uVar16] = bVar12;
          pcVar5[uVar16 + 1] = '\0';
          uVar16 = uVar16 + 1;
        }
        pbVar13 = pbVar13 + 1;
        pcVar11 = pcVar5;
      } while (pbVar13 != pbVar10);
      if (1 < uVar16) {
        if ((*pcVar5 == '0') && ((byte)(pcVar5[1] | 0x20U) == 0x78)) {
          if (uVar16 != 2) {
            iVar8 = uVar16 - 2;
            pcVar11 = pcVar5 + 2;
            do {
              pcVar11[-2] = *pcVar11;
              pcVar11 = pcVar11 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          pcVar5[uVar16 - 2] = '\0';
          uVar16 = uVar16 - 2;
        }
        if ((uVar16 == 6) || (uVar16 == 8)) {
          uVar6 = 0;
          uVar7 = 0;
          do {
            cVar1 = pcVar5[uVar6];
            bVar12 = cVar1 - 0x30;
            if (9 < bVar12) {
              if ((byte)(cVar1 + 0x9fU) < 6) {
                bVar12 = cVar1 + 0xa9;
              }
              else {
                if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000caa3;
                bVar12 = cVar1 - 0x37;
              }
            }
            uVar17 = uVar7 << 4;
            uVar7 = bVar12 | uVar17;
            uVar6 = uVar6 + 1;
          } while (uVar16 != uVar6);
          recovered_10006740(pcVar5);
          iVar8 = *(int *)arguments;
          uVar16 = *(uint *)(iVar8 + 0x10);
          iVar18 = *(int *)(iVar8 + 0x14);
          if ((SBORROW4(-1,iVar18) != SBORROW4(-1 - iVar18,(uint)(0x80000000 < uVar16))) ==
              (int)((-1 - iVar18) - (uint)(0x80000000 < uVar16)) < 0) {
            iVar18 = -1;
            uVar16 = 0x80000000;
          }
          if ((int)(uint)(uVar16 < 0x7fffffff) <= iVar18) {
            uVar16 = 0x7fffffff;
          }
          iVar18 = *(int *)(iVar8 + 0x34);
          uVar6 = (uint)(0x80000000 < *(uint *)(iVar8 + 0x30));
          uVar14 = 0x80000000;
          iVar4 = -1;
          if ((SBORROW4(-1,iVar18) != SBORROW4(-1 - iVar18,uVar6)) !=
              (int)((-1 - iVar18) - uVar6) < 0) {
            uVar14 = *(uint *)(iVar8 + 0x30);
            iVar4 = iVar18;
          }
          if ((int)(uint)(uVar14 < 0x7fffffff) <= iVar4) {
            uVar14 = 0x7fffffff;
          }
          puVar2 = *(uint **)engine;
          if (((((puVar2 != (uint *)0x0) && (uVar6 = puVar2[2], uVar6 != 0)) &&
               (uVar3 = *puVar2, 0 < (int)uVar3)) && ((uVar14 <= puVar2[1] && (uVar16 <= uVar3))))
             && ((0 < (int)uVar14 && ((0 < (int)uVar16 && (0 < (int)puVar2[1])))))) {
            iVar18 = uVar16 + uVar3 * (uVar14 - 1);
            iVar8 = iVar18 * 4 + -4;
            iVar18 = iVar18 * 4 + -3;
            uVar15 = (undefined1)(uVar17 >> 8);
            uVar9 = (undefined1)(uVar17 >> 0x10);
            if (uVar17 < 0x1000000) {
              *(undefined1 *)(uVar6 + iVar8) = uVar9;
              *(undefined1 *)(puVar2[2] + iVar18) = uVar15;
              *(char *)(puVar2[2] + 2 + iVar8) = (char)uVar7;
              uVar7 = 0xff;
            }
            else {
              *(char *)(uVar6 + iVar8) = (char)(uVar17 >> 0x18);
              *(undefined1 *)(puVar2[2] + iVar18) = uVar9;
              *(undefined1 *)(puVar2[2] + 2 + iVar8) = uVar15;
            }
            *(char *)(puVar2[2] + 3 + iVar8) = (char)uVar7;
          }
          goto LAB_1000caae;
        }
      }
    }
  }
LAB_1000caa3:
  recovered_10006740(pcVar5);
LAB_1000caae:
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000ed7c
#undef DAT_1000ef94
#undef PTR_recovered_10006670_1000f004
#undef auStack_1c
#undef local_5c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_f0

#undef PTR_recovered_1000c820_1000f13c
#define PTR_recovered_1000c820_1000f13c (*(void * *)(((uintptr_t)pf_module_state + 0xe26U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc40
 */

void * recovered_1000cc40(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000c820_1000f13c;
  return puVar1;
}

#undef PTR_recovered_1000c820_1000f13c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc70
 */

void recovered_1000cc70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc80
 */

void recovered_1000cc80(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cca0
 */

void recovered_1000cca0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  iVar1 = *(int *)arguments;
  uVar4 = *(uint *)(iVar1 + 0x10);
  iVar6 = *(int *)(iVar1 + 0x14);
  if ((SBORROW4(-1,iVar6) != SBORROW4(-1 - iVar6,(uint)(0x80000000 < uVar4))) ==
      (int)((-1 - iVar6) - (uint)(0x80000000 < uVar4)) < 0) {
    iVar6 = -1;
    uVar4 = 0x80000000;
  }
  if ((int)(uint)(uVar4 < 0x7fffffff) <= iVar6) {
    uVar4 = 0x7fffffff;
  }
  iVar6 = *(int *)(iVar1 + 0x34);
  uVar2 = (uint)(0x80000000 < *(uint *)(iVar1 + 0x30));
  uVar5 = 0x80000000;
  iVar3 = -1;
  if ((SBORROW4(-1,iVar6) != SBORROW4(-1 - iVar6,uVar2)) != (int)((-1 - iVar6) - uVar2) < 0) {
    uVar5 = *(uint *)(iVar1 + 0x30);
    iVar3 = iVar6;
  }
  if ((int)(uint)(uVar5 < 0x7fffffff) <= iVar3) {
    uVar5 = 0x7fffffff;
  }
  *(uint *)((int)engine + 0x1c) = uVar4;
  *(uint *)((int)engine + 0x20) = uVar5;
  return;
}


#undef PTR_recovered_1000cc70_1000f160
#define PTR_recovered_1000cc70_1000f160 (*(void * *)(((uintptr_t)pf_module_state + 0xe4aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd20
 */

void * recovered_1000cd20(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000cc70_1000f160;
  return puVar1;
}

#undef PTR_recovered_1000cc70_1000f160

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd50
 */

void recovered_1000cd50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd60
 */

void recovered_1000cd60(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd80
 */

void recovered_1000cd80(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  uVar6 = *(uint *)(*(int *)arguments + 0x10);
  piVar1 = (int *)(*(int *)arguments + 0x14);
  uVar5 = (uint)(1 < uVar6);
  iVar2 = -*piVar1;
  uVar7 = 1;
  if ((SBORROW4(0,*piVar1) != SBORROW4(iVar2,uVar5)) != (int)(iVar2 - uVar5) < 0) {
    uVar7 = uVar6;
  }
  uVar7 = uVar7 + (uVar7 == 0);
  *(uint *)((int)engine + 0x30) = uVar7;
  uVar6 = *(uint *)((int)engine + 8);
  if (uVar6 < uVar7) {
    recovered_1000aef0((int *)((int)engine + 4),uVar7);
    uVar6 = *(uint *)((int)engine + 8);
  }
  if (uVar6 < uVar7) {
    recovered_1000aef0((int *)((int)engine + 4),uVar7);
  }
  iVar3 = *(int *)((int)engine + 4);
  iVar2 = iVar3 + uVar7 * 0x18;
  *(undefined1 *)(iVar3 + -0x18 + uVar7 * 0x18) = 0;
  *(undefined4 *)(iVar3 + -0x10 + uVar7 * 0x18) = 0;
  puVar4 = *(undefined1 **)(iVar3 + -0x14 + uVar7 * 0x18);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
  }
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  return;
}


#undef PTR_recovered_1000cd50_1000f184
#define PTR_recovered_1000cd50_1000f184 (*(void * *)(((uintptr_t)pf_module_state + 0xe6eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce10
 */

void * recovered_1000ce10(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000cd50_1000f184;
  return puVar1;
}

#undef PTR_recovered_1000cd50_1000f184

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce40
 */

void recovered_1000ce40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce50
 */

void recovered_1000ce50(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


#undef DAT_1000efa0
#define DAT_1000efa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8aU)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define local_5c (*(undefined4 *)(pf_stack_frame + 196))
#define local_48 (*(undefined * *)(pf_stack_frame + 216))
#define local_44 (*(undefined * *)(pf_stack_frame + 220))
#define local_40 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_3c (*(undefined4 *)(pf_stack_frame + 228))
#define local_38 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_28 (*(uint *)(pf_stack_frame + 248))
#define local_20 (*(void * *)(pf_stack_frame + 256))
#define auStackY_110 (*(undefined1 (*)[272])(pf_stack_frame + 16))
#define pvStack_2c (*(void * *)(pf_stack_frame + 244))
#define uStack_1c (*(uint *)(pf_stack_frame + 260))
#define auStack_18 (*(undefined1 (*)[24])(pf_stack_frame + 264))
#define local_78 (*(void * *)(pf_stack_frame + 168))
#define local_74 (*(undefined4 *)(pf_stack_frame + 172))
#define local_70 (*(undefined4 *)(pf_stack_frame + 176))
#define local_6c (*(void * *)(pf_stack_frame + 180))
#define local_68 (*(int *)(pf_stack_frame + 184))
#define local_64 (*(int *)(pf_stack_frame + 188))
#define local_60 (*(undefined4 *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce70
 */

void recovered_1000ce70(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  local_40 = auStack_18 + 0x14;
  local_38 = auStackY_110 + 0x80;
  iVar5 = *(int *)arguments;
  uVar8 = *(int *)(iVar5 + 0x18) + (uint)(*(int *)(iVar5 + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar8;
  uVar7 = *(uint *)((int)engine + 8);
  local_6c = (void *)0x1000ce84;
  local_48 = PTR_recovered_10006670_1000f004;
  local_44 = &DAT_1000efa0;
  local_3c = 0x23b;
  recovered_10006ce0(&local_60);
  if (uVar7 < uVar8) {
    local_5c = 0xffffffff;
    recovered_1000aef0((int *)((int)engine + 4),uVar8);
    iVar5 = *(int *)arguments;
    uVar7 = *(uint *)((int)engine + 8);
    uVar8 = *(int *)(iVar5 + 0x18) + (uint)(*(int *)(iVar5 + 0x18) == 0);
  }
  piVar1 = (int *)((int)engine + 4);
  if (uVar7 < uVar8) {
    local_5c = 0xffffffff;
    recovered_1000aef0(piVar1,uVar8);
    iVar5 = *(int *)arguments;
    uVar7 = *(uint *)((int)engine + 8);
  }
  iVar3 = *piVar1;
  local_68 = uVar8 * 3;
  iVar2 = iVar3 + -0x18;
  uVar6 = *(int *)(iVar5 + 0x38) + (uint)(*(int *)(iVar5 + 0x38) == 0);
  local_64 = iVar3;
  if (uVar7 < uVar6) {
    local_5c = 0xffffffff;
    recovered_1000aef0(piVar1,uVar6);
    iVar3 = *piVar1;
  }
  local_5c = 0xffffffff;
  recovered_10007e00((int *)&local_20,(char *)(iVar3 + -0x18 + uVar6 * 0x18));
  local_5c = 1;
  recovered_10007e00((int *)&pvStack_2c,(char *)(iVar2 + uVar8 * 0x18));
  local_78 = (void *)0x0;
  local_74 = 0;
  local_70 = 0;
  local_6c = (void *)((int)local_6c + 0x1ef8);
  pvVar4 = pvStack_2c;
  if (pvStack_2c == (void *)0x0) {
    pvVar4 = local_6c;
  }
  local_5c = 2;
  recovered_1000b7d0((int *)&local_78,(int)pvVar4,local_28);
  pvVar4 = local_6c;
  if (local_20 != (void *)0x0) {
    pvVar4 = local_20;
  }
  local_5c = 3;
  recovered_1000d160((int *)&local_78,(int)pvVar4,uStack_1c);
  iVar5 = local_64 + local_68 * 8;
  *(undefined1 *)(iVar5 + -0x18) = 1;
  if ((void **)(iVar5 + -0x14) != &local_78) {
    recovered_10006740(*(void **)(iVar5 + -0x14));
    *(void **)(iVar5 + -0x14) = local_78;
    *(undefined4 *)(iVar5 + -0x10) = local_74;
    *(undefined4 *)(iVar5 + -0xc) = local_70;
    local_78 = (void *)0x0;
    local_74 = 0;
    local_70 = 0;
  }
  *(undefined4 *)(iVar5 + -4) = 0;
  *(undefined4 *)(iVar5 + -8) = 0;
  recovered_10006740(local_78);
  recovered_10006740(pvStack_2c);
  recovered_10006740(local_20);
  recovered_10006d10(&local_60);
  return;
}

#undef DAT_1000efa0
#undef PTR_recovered_10006670_1000f004
#undef local_5c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_28
#undef local_20
#undef auStackY_110
#undef pvStack_2c
#undef uStack_1c
#undef auStack_18
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

#undef PTR_recovered_1000ce40_1000f1a8
#define PTR_recovered_1000ce40_1000f1a8 (*(void * *)(((uintptr_t)pf_module_state + 0xe92U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d130
 */

void * recovered_1000d130(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000ce40_1000f1a8;
  return puVar1;
}

#undef PTR_recovered_1000ce40_1000f1a8

#define local_28 (*(undefined1 * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d160
 */

int * recovered_1000d160(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  if (param_3 != 0 && param_2 != 0) {
    local_28 = (undefined1 *)*param_1;
    if (local_28 != (undefined1 *)0x0) {
      uVar6 = param_1[1];
      uVar7 = param_2 - (int)local_28;
      uVar2 = 0;
LAB_1000d1a0:
      if (uVar7 != uVar2) goto code_r0x1000d1a8;
      uVar2 = uVar6 - uVar7;
      if (param_3 <= uVar6 - uVar7) {
        uVar2 = param_3;
      }
      param_3 = uVar2;
      uVar2 = param_3 + uVar6;
      if ((uint)param_1[2] < uVar2) {
        local_28 = recovered_100066e0(uVar2 + 1);
        *local_28 = 0;
        pvVar1 = (void *)*param_1;
        iVar4 = param_1[1];
        if (iVar4 != 0) {
          iVar5 = 0;
          do {
            local_28[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
            iVar5 = iVar5 + 1;
          } while (iVar4 != iVar5);
        }
        local_28[iVar4] = 0;
        recovered_10006740(pvVar1);
        *param_1 = (int)local_28;
        param_1[2] = uVar2;
      }
      if (param_3 != 0) {
        uVar2 = param_3;
        do {
          *(undefined1 *)(*param_1 + uVar6) = *(undefined1 *)(*param_1 + uVar7);
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        goto LAB_1000d2d6;
      }
      goto LAB_1000d2d8;
    }
    uVar6 = param_1[1];
LAB_1000d1b2:
    uVar6 = uVar6 + param_3;
    if ((uint)param_1[2] < uVar6) {
      puVar3 = recovered_100066e0(uVar6 + 1);
      *puVar3 = 0;
      pvVar1 = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      puVar3[iVar4] = 0;
      recovered_10006740(pvVar1);
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar6 = 0;
    do {
      *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
LAB_1000d2d6:
    local_28 = (undefined1 *)*param_1;
LAB_1000d2d8:
    iVar4 = param_3 + param_1[1];
    param_1[1] = iVar4;
    local_28[iVar4] = 0;
  }
  return param_1;
code_r0x1000d1a8:
  uVar2 = uVar2 + 1;
  if (uVar6 < uVar2) goto LAB_1000d1b2;
  goto LAB_1000d1a0;
}

#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d300
 */

void recovered_1000d300(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d310
 */

void recovered_1000d310(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


#undef DAT_1000efac
#define DAT_1000efac (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc96U)))
#undef PTR_recovered_10006670_1000f004
#define PTR_recovered_10006670_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xceeU)))
#define auStackY_100 (*(undefined1 (*)[256])(pf_stack_frame + 16))
#define uStack_50 (*(uint *)(pf_stack_frame + 192))
#define local_70 (*(void * *)(pf_stack_frame + 160))
#define local_6c (*(undefined4 *)(pf_stack_frame + 164))
#define local_68 (*(undefined4 *)(pf_stack_frame + 168))
#define local_64 (*(void * *)(pf_stack_frame + 172))
#define local_60 (*(int *)(pf_stack_frame + 176))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 244))
#define local_5c (*(int *)(pf_stack_frame + 180))
#define local_58 (*(int *)(pf_stack_frame + 184))
#define local_54 (*(void * *)(pf_stack_frame + 188))
#define local_48 (*(undefined4 *)(pf_stack_frame + 200))
#define local_44 (*(undefined4 *)(pf_stack_frame + 204))
#define local_30 (*(undefined * *)(pf_stack_frame + 224))
#define local_2c (*(undefined * *)(pf_stack_frame + 228))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_24 (*(undefined4 *)(pf_stack_frame + 236))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 240))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d330
 */

void recovered_1000d330(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_100 + 0x80;
  uVar4 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar4;
  uVar3 = *(uint *)((int)engine + 8);
  local_64 = (void *)0x1000d341;
  local_30 = PTR_recovered_10006670_1000f004;
  local_2c = &DAT_1000efac;
  local_24 = 0x1d6;
  recovered_10006ce0(&local_48);
  if (uVar3 < uVar4) {
    local_44 = 0xffffffff;
    recovered_1000aef0((int *)((int)engine + 4),uVar4);
    uVar3 = *(uint *)((int)engine + 8);
    uVar4 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  }
  if (uVar3 < uVar4) {
    local_44 = 0xffffffff;
    recovered_1000aef0((int *)((int)engine + 4),uVar4);
  }
  local_5c = *(int *)((int)engine + 4);
  local_60 = uVar4 * 3;
  local_44 = 0xffffffff;
  recovered_10007e00((int *)&local_54,(char *)(local_5c + -0x18 + uVar4 * 0x18));
  local_58 = *(int *)arguments;
  local_70 = (void *)0x0;
  local_6c = 0;
  local_68 = 0;
  local_64 = (void *)((int)local_64 + 0x1a3b);
  pvVar2 = local_54;
  if (local_54 == (void *)0x0) {
    pvVar2 = local_64;
  }
  local_44 = 1;
  recovered_1000b7d0((int *)&local_70,(int)pvVar2,uStack_50);
  pvVar2 = local_64;
  if (*(void **)(local_58 + 0x24) != (void *)0x0) {
    pvVar2 = *(void **)(local_58 + 0x24);
  }
  local_44 = 2;
  recovered_1000d160((int *)&local_70,(int)pvVar2,*(uint *)(local_58 + 0x28));
  iVar1 = local_5c + local_60 * 8;
  *(undefined1 *)(iVar1 + -0x18) = 1;
  if ((void **)(iVar1 + -0x14) != &local_70) {
    recovered_10006740(*(void **)(iVar1 + -0x14));
    *(void **)(iVar1 + -0x14) = local_70;
    *(undefined4 *)(iVar1 + -0x10) = local_6c;
    *(undefined4 *)(iVar1 + -0xc) = local_68;
    local_70 = (void *)0x0;
    local_6c = 0;
    local_68 = 0;
  }
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  recovered_10006740(local_70);
  recovered_10006740(local_54);
  recovered_10006d10(&local_48);
  return;
}

#undef DAT_1000efac
#undef PTR_recovered_10006670_1000f004
#undef auStackY_100
#undef uStack_50
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef auStack_1c
#undef local_5c
#undef local_58
#undef local_54
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef PTR_recovered_1000d300_1000f1cc
#define PTR_recovered_1000d300_1000f1cc (*(void * *)(((uintptr_t)pf_module_state + 0xeb6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d570
 */

void * recovered_1000d570(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000d300_1000f1cc;
  return puVar1;
}

#undef PTR_recovered_1000d300_1000f1cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5a0
 */

void recovered_1000d5a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5b0
 */

void recovered_1000d5b0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5d0
 */

void recovered_1000d5d0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;

  uVar7 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar7;
  uVar6 = *(uint *)((int)engine + 8);
  if (uVar6 < uVar7) {
    recovered_1000aef0((int *)((int)engine + 4),uVar7);
    uVar6 = *(uint *)((int)engine + 8);
    uVar7 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  }
  if (uVar6 < uVar7) {
    recovered_1000aef0((int *)((int)engine + 4),uVar7);
  }
  iVar2 = *(int *)((int)engine + 4);
  lVar8 = recovered_10007f70((void *)(iVar2 + -0x18 + uVar7 * 0x18));
  puVar1 = (uint *)(*(int *)arguments + 0x30);
  uVar6 = *puVar1;
  uVar3 = *puVar1;
  iVar4 = *(int *)(*(int *)arguments + 0x34);
  *(undefined1 *)(iVar2 + -0x18 + uVar7 * 0x18) = 2;
  *(uint *)(iVar2 + -8 + uVar7 * 0x18) = (uint)lVar8 + uVar3;
  *(uint *)(iVar2 + -4 + uVar7 * 0x18) =
       (int)((ulonglong)lVar8 >> 0x20) + iVar4 + (uint)CARRY4((uint)lVar8,uVar6);
  *(undefined4 *)(iVar2 + -0x10 + uVar7 * 0x18) = 0;
  puVar5 = *(undefined1 **)(iVar2 + -0x14 + uVar7 * 0x18);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
  }
  return;
}


#undef PTR_recovered_1000d5a0_1000f1f0
#define PTR_recovered_1000d5a0_1000f1f0 (*(void * *)(((uintptr_t)pf_module_state + 0xedaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d670
 */

void * recovered_1000d670(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000d5a0_1000f1f0;
  return puVar1;
}

#undef PTR_recovered_1000d5a0_1000f1f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d6a0
 */

void recovered_1000d6a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d6b0
 */

void recovered_1000d6b0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d6d0
 */

void recovered_1000d6d0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;

  iVar3 = *(int *)arguments;
  uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar6;
  uVar4 = *(uint *)((int)engine + 8);
  if (uVar4 < uVar6) {
    recovered_1000aef0((int *)((int)engine + 4),uVar6);
    iVar3 = *(int *)arguments;
    uVar4 = *(uint *)((int)engine + 8);
    uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  }
  piVar1 = (int *)((int)engine + 4);
  if (uVar4 < uVar6) {
    recovered_1000aef0(piVar1,uVar6);
    iVar3 = *(int *)arguments;
    uVar4 = *(uint *)((int)engine + 8);
  }
  iVar5 = *piVar1;
  uVar7 = *(int *)(iVar3 + 0x38) + (uint)(*(int *)(iVar3 + 0x38) == 0);
  iVar3 = iVar5 + uVar6 * 0x18;
  iVar2 = iVar5 + -0x18;
  if (uVar4 < uVar7) {
    recovered_1000aef0(piVar1,uVar7);
    iVar5 = *piVar1;
  }
  lVar8 = recovered_10007f70((void *)(iVar5 + -0x18 + uVar7 * 0x18));
  lVar9 = recovered_10007f70((void *)(iVar2 + uVar6 * 0x18));
  *(undefined1 *)(iVar3 + -0x18) = 2;
  *(longlong *)(iVar3 + -8) = lVar8 + lVar9;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar3 + -0x14) = 0;
  }
  return;
}


#undef PTR_recovered_1000d6a0_1000f214
#define PTR_recovered_1000d6a0_1000f214 (*(void * *)(((uintptr_t)pf_module_state + 0xefeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7b0
 */

void * recovered_1000d7b0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000d6a0_1000f214;
  return puVar1;
}

#undef PTR_recovered_1000d6a0_1000f214

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7e0
 */

void recovered_1000d7e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7f0
 */

void recovered_1000d7f0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d810
 */

void recovered_1000d810(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;

  uVar7 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar7;
  uVar6 = *(uint *)((int)engine + 8);
  if (uVar6 < uVar7) {
    recovered_1000aef0((int *)((int)engine + 4),uVar7);
    uVar6 = *(uint *)((int)engine + 8);
    uVar7 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  }
  if (uVar6 < uVar7) {
    recovered_1000aef0((int *)((int)engine + 4),uVar7);
  }
  iVar2 = *(int *)((int)engine + 4);
  lVar8 = recovered_10007f70((void *)(iVar2 + -0x18 + uVar7 * 0x18));
  puVar1 = (uint *)(*(int *)arguments + 0x30);
  uVar6 = *puVar1;
  uVar3 = *puVar1;
  iVar4 = *(int *)(*(int *)arguments + 0x34);
  *(undefined1 *)(iVar2 + -0x18 + uVar7 * 0x18) = 2;
  *(uint *)(iVar2 + -8 + uVar7 * 0x18) = (uint)lVar8 - uVar3;
  *(uint *)(iVar2 + -4 + uVar7 * 0x18) =
       ((int)((ulonglong)lVar8 >> 0x20) - iVar4) - (uint)((uint)lVar8 < uVar6);
  *(undefined4 *)(iVar2 + -0x10 + uVar7 * 0x18) = 0;
  puVar5 = *(undefined1 **)(iVar2 + -0x14 + uVar7 * 0x18);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
  }
  return;
}


#undef PTR_recovered_1000d7e0_1000f238
#define PTR_recovered_1000d7e0_1000f238 (*(void * *)(((uintptr_t)pf_module_state + 0xf22U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8b0
 */

void * recovered_1000d8b0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000d7e0_1000f238;
  return puVar1;
}

#undef PTR_recovered_1000d7e0_1000f238

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8e0
 */

void recovered_1000d8e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8f0
 */

void recovered_1000d8f0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d910
 */

void recovered_1000d910(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;

  iVar3 = *(int *)arguments;
  uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar6;
  uVar4 = *(uint *)((int)engine + 8);
  if (uVar4 < uVar6) {
    recovered_1000aef0((int *)((int)engine + 4),uVar6);
    iVar3 = *(int *)arguments;
    uVar4 = *(uint *)((int)engine + 8);
    uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  }
  piVar1 = (int *)((int)engine + 4);
  if (uVar4 < uVar6) {
    recovered_1000aef0(piVar1,uVar6);
    iVar3 = *(int *)arguments;
    uVar4 = *(uint *)((int)engine + 8);
  }
  iVar5 = *piVar1;
  uVar7 = *(int *)(iVar3 + 0x38) + (uint)(*(int *)(iVar3 + 0x38) == 0);
  iVar3 = iVar5 + uVar6 * 0x18;
  iVar2 = iVar5 + -0x18;
  if (uVar4 < uVar7) {
    recovered_1000aef0(piVar1,uVar7);
    iVar5 = *piVar1;
  }
  lVar8 = recovered_10007f70((void *)(iVar5 + -0x18 + uVar7 * 0x18));
  lVar9 = recovered_10007f70((void *)(iVar2 + uVar6 * 0x18));
  *(undefined1 *)(iVar3 + -0x18) = 2;
  *(longlong *)(iVar3 + -8) = lVar9 - lVar8;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar3 + -0x14) = 0;
  }
  return;
}


#undef PTR_recovered_1000d8e0_1000f25c
#define PTR_recovered_1000d8e0_1000f25c (*(void * *)(((uintptr_t)pf_module_state + 0xf46U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d9f0
 */

void * recovered_1000d9f0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000d8e0_1000f25c;
  return puVar1;
}

#undef PTR_recovered_1000d8e0_1000f25c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da20
 */

void recovered_1000da20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da30
 */

void recovered_1000da30(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da50
 */

void recovered_1000da50(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;

  uVar6 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar6;
  uVar5 = *(uint *)((int)engine + 8);
  if (uVar5 < uVar6) {
    recovered_1000aef0((int *)((int)engine + 4),uVar6);
    uVar5 = *(uint *)((int)engine + 8);
    uVar6 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  }
  if (uVar5 < uVar6) {
    recovered_1000aef0((int *)((int)engine + 4),uVar6);
  }
  iVar1 = *(int *)((int)engine + 4);
  uVar7 = recovered_10007f70((void *)(iVar1 + -0x18 + uVar6 * 0x18));
  uVar5 = *(uint *)(*(int *)arguments + 0x30);
  lVar4 = (ulonglong)uVar5 * (uVar7 & 0xffffffff);
  iVar2 = *(int *)(*(int *)arguments + 0x34);
  *(undefined1 *)(iVar1 + -0x18 + uVar6 * 0x18) = 2;
  *(int *)(iVar1 + -8 + uVar6 * 0x18) = (int)lVar4;
  *(uint *)(iVar1 + -4 + uVar6 * 0x18) =
       (int)uVar7 * iVar2 + (int)((ulonglong)lVar4 >> 0x20) + (int)(uVar7 >> 0x20) * uVar5;
  *(undefined4 *)(iVar1 + -0x10 + uVar6 * 0x18) = 0;
  puVar3 = *(undefined1 **)(iVar1 + -0x14 + uVar6 * 0x18);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  return;
}


#undef PTR_recovered_1000da20_1000f280
#define PTR_recovered_1000da20_1000f280 (*(void * *)(((uintptr_t)pf_module_state + 0xf6aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db10
 */

void * recovered_1000db10(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000da20_1000f280;
  return puVar1;
}

#undef PTR_recovered_1000da20_1000f280

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db40
 */

void recovered_1000db40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db50
 */

void recovered_1000db50(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db70
 */

void recovered_1000db70(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;

  iVar3 = *(int *)arguments;
  uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar6;
  uVar4 = *(uint *)((int)engine + 8);
  if (uVar4 < uVar6) {
    recovered_1000aef0((int *)((int)engine + 4),uVar6);
    iVar3 = *(int *)arguments;
    uVar4 = *(uint *)((int)engine + 8);
    uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  }
  piVar1 = (int *)((int)engine + 4);
  if (uVar4 < uVar6) {
    recovered_1000aef0(piVar1,uVar6);
    iVar3 = *(int *)arguments;
    uVar4 = *(uint *)((int)engine + 8);
  }
  iVar5 = *piVar1;
  uVar7 = *(int *)(iVar3 + 0x38) + (uint)(*(int *)(iVar3 + 0x38) == 0);
  iVar3 = iVar5 + uVar6 * 0x18;
  iVar2 = iVar5 + -0x18;
  if (uVar4 < uVar7) {
    recovered_1000aef0(piVar1,uVar7);
    iVar5 = *piVar1;
  }
  lVar8 = recovered_10007f70((void *)(iVar5 + -0x18 + uVar7 * 0x18));
  lVar9 = recovered_10007f70((void *)(iVar2 + uVar6 * 0x18));
  *(undefined1 *)(iVar3 + -0x18) = 2;
  *(longlong *)(iVar3 + -8) = lVar8 * lVar9;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar3 + -0x14) = 0;
  }
  return;
}


#undef PTR_recovered_1000db40_1000f2a4
#define PTR_recovered_1000db40_1000f2a4 (*(void * *)(((uintptr_t)pf_module_state + 0xf8eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc60
 */

void * recovered_1000dc60(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000db40_1000f2a4;
  return puVar1;
}

#undef PTR_recovered_1000db40_1000f2a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc90
 */

void recovered_1000dc90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dca0
 */

void recovered_1000dca0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcc0
 */

void recovered_1000dcc0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;

  iVar1 = *(int *)arguments;
  uVar2 = *(uint *)(iVar1 + 0x34);
  uVar3 = *(uint *)(iVar1 + 0x30);
  uVar6 = *(int *)(iVar1 + 0x18) + (uint)(*(int *)(iVar1 + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar6;
  uVar5 = *(uint *)((int)engine + 8);
  if (uVar5 < uVar6) {
    recovered_1000aef0((int *)((int)engine + 4),uVar6);
    uVar5 = *(uint *)((int)engine + 8);
    uVar6 = *(int *)(*(int *)arguments + 0x18) + (uint)(*(int *)(*(int *)arguments + 0x18) == 0);
  }
  if (uVar5 < uVar6) {
    recovered_1000aef0((int *)((int)engine + 4),uVar6);
  }
  iVar4 = *(int *)((int)engine + 4);
  iVar1 = iVar4 + uVar6 * 0x18;
  if (uVar3 == 0 && uVar2 == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = recovered_10007f70((void *)(iVar4 + -0x18 + uVar6 * 0x18));
    uVar8 = recovered_10001ab0((uint)lVar7,(uint)((ulonglong)lVar7 >> 0x20),uVar3,uVar2);
  }
  *(undefined1 *)(iVar1 + -0x18) = 2;
  *(undefined8 *)(iVar1 + -8) = uVar8;
  *(undefined4 *)(iVar1 + -0x10) = 0;
  if (*(undefined1 **)(iVar1 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar1 + -0x14) = 0;
  }
  return;
}


#undef PTR_recovered_1000dc90_1000f2c8
#define PTR_recovered_1000dc90_1000f2c8 (*(void * *)(((uintptr_t)pf_module_state + 0xfb2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd80
 */

void * recovered_1000dd80(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000dc90_1000f2c8;
  return puVar1;
}

#undef PTR_recovered_1000dc90_1000f2c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ddb0
 */

void recovered_1000ddb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ddc0
 */

void recovered_1000ddc0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dde0
 */

void recovered_1000dde0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;

  iVar4 = *(int *)arguments;
  uVar6 = *(int *)(iVar4 + 0x18) + (uint)(*(int *)(iVar4 + 0x18) == 0);
  *(uint *)((int)engine + 0x30) = uVar6;
  uVar5 = *(uint *)((int)engine + 8);
  if (uVar5 < uVar6) {
    recovered_1000aef0((int *)((int)engine + 4),uVar6);
    iVar4 = *(int *)arguments;
    uVar5 = *(uint *)((int)engine + 8);
    uVar6 = *(int *)(iVar4 + 0x18) + (uint)(*(int *)(iVar4 + 0x18) == 0);
  }
  piVar1 = (int *)((int)engine + 4);
  if (uVar5 < uVar6) {
    recovered_1000aef0(piVar1,uVar6);
    iVar4 = *(int *)arguments;
    uVar5 = *(uint *)((int)engine + 8);
  }
  iVar3 = *piVar1;
  uVar7 = *(int *)(iVar4 + 0x38) + (uint)(*(int *)(iVar4 + 0x38) == 0);
  iVar4 = iVar3;
  if (uVar5 < uVar7) {
    recovered_1000aef0(piVar1,uVar7);
    iVar4 = *piVar1;
  }
  iVar2 = iVar3 + uVar6 * 0x18;
  lVar8 = recovered_10007f70((void *)(iVar4 + -0x18 + uVar7 * 0x18));
  if (lVar8 == 0) {
    uVar10 = 0;
  }
  else {
    lVar9 = recovered_10007f70((void *)(iVar3 + -0x18 + uVar6 * 0x18));
    uVar10 = recovered_10001ab0((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),(uint)lVar8,
                                (uint)((ulonglong)lVar8 >> 0x20));
  }
  *(undefined1 *)(iVar2 + -0x18) = 2;
  *(undefined8 *)(iVar2 + -8) = uVar10;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  if (*(undefined1 **)(iVar2 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar2 + -0x14) = 0;
  }
  return;
}


#undef PTR_recovered_1000ddb0_1000f2ec
#define PTR_recovered_1000ddb0_1000f2ec (*(void * *)(((uintptr_t)pf_module_state + 0xfd6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dee0
 */

void * recovered_1000dee0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000ddb0_1000f2ec;
  return puVar1;
}

#undef PTR_recovered_1000ddb0_1000f2ec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df10
 */

void recovered_1000df10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df20
 */

void recovered_1000df20(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006740(param_1);
  return;
}


#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df40
 */

void recovered_1000df40(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;

  iVar5 = *(int *)arguments;
  uVar8 = *(int *)(iVar5 + 0x18) + (uint)(*(int *)(iVar5 + 0x18) == 0);
  uVar6 = *(uint *)((int)engine + 8);
  piVar1 = (int *)((int)engine + 4);
  if (uVar6 < uVar8) {
    recovered_1000aef0(piVar1,uVar8);
    iVar5 = *(int *)arguments;
    uVar6 = *(uint *)((int)engine + 8);
  }
  iVar3 = *piVar1;
  iVar9 = iVar3 + uVar8 * 0x18;
  uVar8 = *(int *)(iVar5 + 0x38) + (uint)(*(int *)(iVar5 + 0x38) == 0);
  if (uVar6 < uVar8) {
    recovered_1000aef0(piVar1,uVar8);
    iVar3 = *piVar1;
  }
  cVar2 = *(char *)(iVar9 + -0x18);
  if (cVar2 != *(char *)(iVar3 + -0x18 + uVar8 * 0x18)) {
    return;
  }
  if (cVar2 != '\0') {
    iVar3 = iVar3 + uVar8 * 0x18;
    if (cVar2 == '\x02') {
      if (*(int *)(iVar9 + -8) != *(int *)(iVar3 + -8) ||
          *(int *)(iVar9 + -4) != *(int *)(iVar3 + -4)) {
        return;
      }
    }
    else {
      if (cVar2 != '\x01') {
        return;
      }
      iVar5 = *(int *)(iVar9 + -0x10);
      puVar4 = *(undefined1 **)(iVar9 + -0x14);
      if (*(undefined1 **)(iVar9 + -0x14) == (undefined1 *)0x0) {
        puVar4 = &DAT_1000ed7c;
      }
      puVar7 = *(undefined1 **)(iVar3 + -0x14);
      if (*(undefined1 **)(iVar3 + -0x14) == (undefined1 *)0x0) {
        puVar7 = &DAT_1000ed7c;
      }
      if (iVar5 != *(int *)(iVar3 + -0x10)) {
        return;
      }
      if (iVar5 != 0) {
        iVar9 = 0;
        do {
          if (puVar4[iVar9] != puVar7[iVar9]) {
            return;
          }
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
      }
    }
  }
  if (*(byte *)((int)engine + 0x24) < 4) {
    *(char *)((int)engine + 0x24) = (char)(0x30201 >> ((*(byte *)((int)engine + 0x24) & 3) << 3));
  }
  return;
}

#undef DAT_1000ed7c

#undef PTR_recovered_1000df10_1000f310
#define PTR_recovered_1000df10_1000f310 (*(void * *)(((uintptr_t)pf_module_state + 0xffaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e040
 */

void * recovered_1000e040(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100066e0(8);
  *puVar1 = &PTR_recovered_1000df10_1000f310;
  return puVar1;
}

#undef PTR_recovered_1000df10_1000f310

#undef DAT_1000ed7c
#define DAT_1000ed7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa66U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e070
 */

int recovered_1000e070(int *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar6 = 4;
    if (uVar5 != 0) {
      uVar6 = uVar5 * 2;
    }
    if (uVar5 < uVar6) {
      pvVar3 = recovered_100066e0(uVar6 * 0x18);
      if (param_1[1] != 0) {
        uVar5 = 0;
        iVar7 = 0x10;
        do {
          iVar1 = *param_1;
          *(undefined1 *)((int)pvVar3 + iVar7 + -0x10) = *(undefined1 *)(iVar1 + -0x10 + iVar7);
          *(undefined4 *)((int)pvVar3 + iVar7 + -0xc) = *(undefined4 *)(iVar1 + -0xc + iVar7);
          *(undefined4 *)((int)pvVar3 + iVar7 + -8) = *(undefined4 *)(iVar1 + -8 + iVar7);
          *(undefined4 *)((int)pvVar3 + iVar7 + -4) = *(undefined4 *)(iVar1 + -4 + iVar7);
          *(undefined4 *)(iVar1 + -0xc + iVar7) = 0;
          *(undefined4 *)(iVar1 + -8 + iVar7) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar7) = 0;
          uVar2 = *(undefined4 *)(iVar1 + iVar7);
          *(undefined4 *)((int)pvVar3 + iVar7 + 4) = *(undefined4 *)(iVar1 + 4 + iVar7);
          *(undefined4 *)((int)pvVar3 + iVar7) = uVar2;
          recovered_10006740((void *)0x0);
          uVar5 = uVar5 + 1;
          iVar7 = iVar7 + 0x18;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10006740((void *)*param_1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar6;
      uVar5 = param_1[1];
    }
  }
  iVar7 = *param_1;
  *(undefined1 *)(iVar7 + uVar5 * 0x18) = *param_2;
  *(undefined4 *)(iVar7 + 4 + uVar5 * 0x18) = 0;
  *(undefined4 *)(iVar7 + 8 + uVar5 * 0x18) = 0;
  *(undefined4 *)(iVar7 + 0xc + uVar5 * 0x18) = 0;
  puVar4 = &DAT_1000ed7c;
  if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
  }
  recovered_1000b7d0((int *)(iVar7 + 4 + uVar5 * 0x18),(int)puVar4,*(uint *)(param_2 + 8));
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(iVar7 + 0x14 + uVar5 * 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar7 + 0x10 + uVar5 * 0x18) = uVar2;
  iVar7 = param_1[1];
  param_1[1] = iVar7 + 1;
  return iVar7 * 0x18 + *param_1;
}

#undef DAT_1000ed7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e1e0
 */

int recovered_1000e1e0(int *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar4 = 4;
    if (uVar5 != 0) {
      uVar4 = uVar5 * 2;
    }
    if (uVar5 < uVar4) {
      pvVar3 = recovered_100066e0(uVar4 * 0x18);
      if (param_1[1] != 0) {
        uVar5 = 0;
        iVar6 = 0x10;
        do {
          iVar1 = *param_1;
          *(undefined1 *)((int)pvVar3 + iVar6 + -0x10) = *(undefined1 *)(iVar1 + -0x10 + iVar6);
          *(undefined4 *)((int)pvVar3 + iVar6 + -0xc) = *(undefined4 *)(iVar1 + -0xc + iVar6);
          *(undefined4 *)((int)pvVar3 + iVar6 + -8) = *(undefined4 *)(iVar1 + -8 + iVar6);
          *(undefined4 *)((int)pvVar3 + iVar6 + -4) = *(undefined4 *)(iVar1 + -4 + iVar6);
          *(undefined4 *)(iVar1 + -0xc + iVar6) = 0;
          *(undefined4 *)(iVar1 + -8 + iVar6) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar6) = 0;
          uVar2 = *(undefined4 *)(iVar1 + iVar6);
          *(undefined4 *)((int)pvVar3 + iVar6 + 4) = *(undefined4 *)(iVar1 + 4 + iVar6);
          *(undefined4 *)((int)pvVar3 + iVar6) = uVar2;
          recovered_10006740((void *)0x0);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x18;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10006740((void *)*param_1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar4;
      uVar5 = param_1[1];
    }
  }
  iVar6 = *param_1;
  *(undefined1 *)(iVar6 + uVar5 * 0x18) = *param_2;
  *(undefined4 *)(iVar6 + 4 + uVar5 * 0x18) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar6 + 8 + uVar5 * 0x18) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar6 + 0xc + uVar5 * 0x18) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(iVar6 + 0x14 + uVar5 * 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar6 + 0x10 + uVar5 * 0x18) = uVar2;
  param_1[1] = uVar5 + 1;
  return iVar6 + uVar5 * 0x18;
}

