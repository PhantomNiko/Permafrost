/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000e074
#define DAT_1000e074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x818U)))
#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f80
 */

/* WARNING: Removing unreachable block (ram,0x10000fbc) */

void recovered_10000f80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000e074 = 0;
    recovered_10000fe0();
    DAT_1000e07c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e074
#undef DAT_1000e07c

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1000e074
#define DAT_1000e074 (*(char *)(((uintptr_t)pf_module_state + 0x818U)))
#undef DAT_1000e078
#define DAT_1000e078 (*(int *)(((uintptr_t)pf_module_state + 0x81cU)))
#undef DAT_1000e080
#define DAT_1000e080 (*(int *)(((uintptr_t)pf_module_state + 0x824U)))
#undef _DAT_00280088
#define _DAT_00280088 (*(uint *)(0x280088U))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_90 (*(ulong *)(pf_stack_frame + 32))
#define local_8c (*(uint (*)[35])(pf_stack_frame + 36))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000fe0(void)

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
  if (DAT_1000e074 != '\0') {
    return;
  }
  DAT_1000e078 = 0;
  DAT_1000e080 = 0;
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
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_1000104b;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_1000104b:
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
        if (iVar10 == 0) goto LAB_100011a0;
      }
      puVar7 = &local_90;
      do {
        recovered_10005340(puVar7[-1],*puVar7,local_9c);
        puVar7 = puVar7 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (DAT_1000e078 != 0) goto LAB_100011db;
    }
  }
LAB_100011a0:
  uVar4 = 0x4000000;
  if (0x300000 < _DAT_00280088) {
    uVar4 = _DAT_00280088 & 0xfffffff0;
  }
  size = 0x3d00000;
  if (0x300020 < uVar4) {
    size = uVar4 - 0x300000;
  }
  recovered_10005340(0x300000,size,local_9c);
LAB_100011db:
  if (DAT_1000e080 == 0) {
    DAT_1000e080 = DAT_1000e078;
  }
  DAT_1000e074 = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1000e074
#undef DAT_1000e078
#undef DAT_1000e080
#undef _DAT_00280088
#undef _DAT_0028008c
#undef local_90
#undef local_8c
#undef local_9c

#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001200
 */

/* WARNING: Removing unreachable block (ram,0x1000124c) */

bool recovered_10001200(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10001270(addresses,sizes,count);
    DAT_1000e07c = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000e07c

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000e078
#define DAT_1000e078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x81cU)))
#undef DAT_1000e080
#define DAT_1000e080 (*(int * *)(((uintptr_t)pf_module_state + 0x824U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001270
 */

bool recovered_10001270(ulong *addresses,ulong *sizes,ulong count)

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
    recovered_10000fe0();
    local_18 = DAT_1000e078;
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
          if (uVar3 < uVar9 || uVar4 == 0) goto LAB_10001370;
          bVar13 = 0x20 < (uVar4 & 0xfffffff0);
        }
        else {
LAB_10001370:
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
      piVar2 = DAT_1000e078;
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
    piVar6 = (int *)&DAT_1000e078;
    iVar1 = 0;
    do {
      iVar8 = iVar1;
      iVar1 = *piVar6;
      piVar6 = (int *)(iVar1 + 4);
    } while (iVar1 != 0);
    uVar12 = 0;
    local_1c = iVar8;
    do {
      recovered_10005340(addresses[uVar12],sizes[uVar12],&local_1c);
      uVar12 = uVar12 + 1;
    } while (count != uVar12);
    if (DAT_1000e080 == (int *)0x0) {
      DAT_1000e080 = DAT_1000e078;
    }
    bVar13 = local_1c != iVar8;
  }
  return bVar13;
}

#undef DAT_10000001
#undef DAT_1000e078
#undef DAT_1000e080
#undef local_1c
#undef local_18

#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
#define local_24 (*(ulong *)(pf_stack_frame + 28))
#define local_20 (*(ulong (*)[8])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b0
 */

/* WARNING: Removing unreachable block (ram,0x100014fc) */

bool recovered_100014b0(ulong address,ulong size)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_1000e07c;
  local_20[0] = address;
  local_24 = size;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10001270(local_20,&local_24,1);
    DAT_1000e07c = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000e07c
#undef local_24
#undef local_20

#undef DAT_1000e078
#define DAT_1000e078 (*(int * *)(((uintptr_t)pf_module_state + 0x81cU)))
#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001530
 */

/* WARNING: Removing unreachable block (ram,0x1000156c) */

uint recovered_10001530(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int *piVar3;

  iVar1 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000fe0();
  uVar2 = 0;
  for (piVar3 = DAT_1000e078; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if ((char)piVar3[3] == '\x01') {
      uVar2 = uVar2 + *piVar3;
    }
  }
  DAT_1000e07c = 0;
  return uVar2;
}

#undef DAT_1000e078
#undef DAT_1000e07c

#undef DAT_1000e078
#define DAT_1000e078 (*(uint * *)(((uintptr_t)pf_module_state + 0x81cU)))
#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015b0
 */

/* WARNING: Removing unreachable block (ram,0x100015ec) */

ulonglong recovered_100015b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  recovered_10000fe0();
  uVar1 = 0;
  iVar3 = 0;
  for (puVar2 = DAT_1000e078; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[1]) {
    if ((char)puVar2[3] == '\x01') {
      bVar4 = CARRY4(uVar1,*puVar2);
      uVar1 = uVar1 + *puVar2;
      iVar3 = iVar3 + (uint)bVar4;
    }
  }
  DAT_1000e07c = 0;
  return CONCAT44(iVar3,uVar1);
}

#undef DAT_1000e078
#undef DAT_1000e07c

#undef DAT_1000e078
#define DAT_1000e078 (*(int * *)(((uintptr_t)pf_module_state + 0x81cU)))
#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001630
 */

/* WARNING: Removing unreachable block (ram,0x1000166c) */

uint recovered_10001630(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint uVar3;

  iVar2 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000fe0();
  uVar3 = 0;
  for (piVar1 = DAT_1000e078; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    uVar3 = uVar3 + *piVar1;
  }
  DAT_1000e07c = 0;
  return uVar3;
}

#undef DAT_1000e078
#undef DAT_1000e07c

#undef DAT_1000e078
#define DAT_1000e078 (*(uint * *)(((uintptr_t)pf_module_state + 0x81cU)))
#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016a0
 */

/* WARNING: Removing unreachable block (ram,0x100016dc) */

ulonglong recovered_100016a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  recovered_10000fe0();
  uVar2 = 0;
  iVar3 = 0;
  for (puVar1 = DAT_1000e078; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
    bVar4 = CARRY4(uVar2,*puVar1);
    uVar2 = uVar2 + *puVar1;
    iVar3 = iVar3 + (uint)bVar4;
  }
  DAT_1000e07c = 0;
  return CONCAT44(iVar3,uVar2);
}

#undef DAT_1000e078
#undef DAT_1000e07c

#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001720
 */

/* WARNING: Removing unreachable block (ram,0x1000176c) */

void * recovered_10001720(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    pvVar2 = recovered_10001790(size,0,0xffffffff);
    DAT_1000e07c = 0;
    return pvVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000e07c

#undef DAT_1000e078
#define DAT_1000e078 (*(uint * *)(((uintptr_t)pf_module_state + 0x81cU)))
#undef DAT_1000e080
#define DAT_1000e080 (*(uint * *)(((uintptr_t)pf_module_state + 0x824U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001790
 */

void * recovered_10001790(ulong size,ulong first,ulong last)

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
    recovered_10000fe0();
    puVar3 = DAT_1000e078;
    puVar4 = DAT_1000e080;
    if (DAT_1000e080 == (uint *)0x0) {
      puVar4 = DAT_1000e078;
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
              if (uVar6 < uVar8) goto LAB_10001872;
            }
          }
          else {
LAB_10001872:
            if ((uVar7 - 1 <= last - (int)first_00 && first_00 <= last) &&
               (uVar7 <= uVar8 - uVar6 && uVar6 <= uVar8)) {
              if (uVar7 - 1 < uVar8) {
                bVar2 = 0xffffffef < uVar8;
                if ((uint)(uVar8 - uVar7 < 0x20) <= -(uint)(uVar8 < uVar7)) {
                  bVar2 = 0xffffffdf < uVar7;
                }
                if (!bVar2) {
                  if (uVar6 == 0) {
LAB_10001954:
                    if ((bool)(~(uVar8 < uVar7) & 0x1f < uVar8 - uVar7)) {
                      DAT_1000e080 = (uint *)((int)chunk + uVar7 + 0x10);
                      *(uint *)((int)chunk + uVar7 + 0x10) = (uVar8 - uVar7) - 0x10;
                      uVar8 = chunk[1];
                      *(uint *)((int)chunk + uVar7 + 0x14) = uVar8;
                      *(uint **)((int)chunk + uVar7 + 0x18) = chunk;
                      *(undefined1 *)((int)chunk + uVar7 + 0x1c) = 1;
                      if (uVar8 != 0) {
                        *(uint **)(uVar8 + 8) = DAT_1000e080;
                      }
                      *chunk = uVar7;
                      chunk[1] = (uint)DAT_1000e080;
                    }
                    else {
                      DAT_1000e080 = (uint *)chunk[1];
                    }
                    *(undefined1 *)(chunk + 3) = 0;
                    if (DAT_1000e080 == (uint *)0x0) {
                      DAT_1000e080 = DAT_1000e078;
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
                      chunk = recovered_100054e0(chunk,(ulong)first_00);
                      if (chunk == (uint *)0x0) {
                        return (void *)0x0;
                      }
                      uVar8 = *chunk;
                      goto LAB_10001954;
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

#undef DAT_1000e078
#undef DAT_1000e080

#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c0
 */

/* WARNING: Removing unreachable block (ram,0x10001a0c) */

void * recovered_100019c0(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    pvVar2 = recovered_10001790(size,0,limit);
    DAT_1000e07c = 0;
    return pvVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000e07c

#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a30
 */

/* WARNING: Removing unreachable block (ram,0x10001a7c) */

void * recovered_10001a30(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  pvVar2 = (void *)0x0;
  if (first <= last) {
    pvVar2 = recovered_10001790(size,first,last);
  }
  DAT_1000e07c = 0;
  return pvVar2;
}

#undef DAT_1000e07c

#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aa0
 */

/* WARNING: Removing unreachable block (ram,0x10001aec) */

void recovered_10001aa0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001b10(pointer);
    DAT_1000e07c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e07c

#undef DAT_1000e080
#define DAT_1000e080 (*(uint * *)(((uintptr_t)pf_module_state + 0x824U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b10
 */

void recovered_10001b10(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;

  if (pointer == (void *)0x0) {
    return;
  }
  recovered_10000fe0();
  puVar2 = (uint *)((int)pointer + -0x10);
  *(undefined1 *)((int)pointer + -4) = 1;
  puVar3 = *(uint **)((int)pointer + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)((int)pointer + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_1000e080 == puVar3) {
        DAT_1000e080 = puVar2;
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
      DAT_1000e080 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_1000e080 = puVar2;
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
        if (DAT_1000e080 == puVar2) {
          DAT_1000e080 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_1000e080 = puVar2;
  return;
}

#undef DAT_1000e080

#undef DAT_1000e07c
#define DAT_1000e07c (*(int *)(((uintptr_t)pf_module_state + 0x820U)))
#undef DAT_1000e080
#define DAT_1000e080 (*(uint * *)(((uintptr_t)pf_module_state + 0x824U)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c30
 */

/* WARNING: Removing unreachable block (ram,0x10001c7c) */

void * recovered_10001c30(void *pointer,ulong size)

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

  iVar3 = DAT_1000e07c;
  { __typeof__(DAT_1000e07c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e07c),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  if (pointer == (void *)0x0) {
    pvVar7 = recovered_10001790(size,0,0xffffffff);
    DAT_1000e07c = 0;
    return pvVar7;
  }
  if (size == 0) {
    recovered_10001b10(pointer);
    DAT_1000e07c = 0;
    return (void *)0x0;
  }
  if (0xfffffff0 < size) {
    DAT_1000e07c = 0;
    return (void *)0x0;
  }
  recovered_10000fe0();
  size_00 = size + 0xf & 0xfffffff0;
  chunk = (uint *)((int)pointer + -0x10);
  uVar12 = *(uint *)((int)pointer + -0x10);
  if (size_00 <= uVar12) {
    if (uVar12 <= size_00 - 1) {
      DAT_1000e07c = 0;
      return (void *)0x0;
    }
    uVar8 = uVar12 - size_00;
    bVar5 = 0xffffffdf < size_00;
    if (-(uint)(uVar12 < size_00) < (uint)(uVar8 < 0x20)) {
      bVar5 = 0xffffffef < uVar12;
    }
    if (!bVar5) {
      if (uVar8 < 0x20) {
        DAT_1000e07c = 0;
        return pointer;
      }
      DAT_1000e080 = (uint *)((int)pointer + size_00);
      *(uint *)((int)pointer + size_00) = uVar8 - 0x10;
      iVar3 = *(int *)((int)pointer + -0xc);
      *(int *)((int)pointer + size_00 + 4) = iVar3;
      *(uint **)((int)pointer + size_00 + 8) = chunk;
      *(undefined1 *)((int)pointer + size_00 + 0xc) = 1;
      if (iVar3 != 0) {
        *(uint **)(iVar3 + 8) = DAT_1000e080;
      }
      *(uint *)((int)pointer + -0x10) = size_00;
      *(uint **)((int)pointer + -0xc) = DAT_1000e080;
      DAT_1000e07c = 0;
      return pointer;
    }
    DAT_1000e07c = 0;
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
      local_20 = DAT_1000e080;
      puVar6 = *(uint **)((int)pointer + -0xc);
      do {
        if (((puVar6 == (uint *)0x0) || ((char)puVar6[3] != '\x01')) ||
           ((0xffffffef < uVar12 ||
            (((uint *)(uVar12 + (int)pointer) != puVar6 || (-uVar12 - 0x11 < *puVar6)))))) break;
        if (local_20 == puVar6) {
          local_20 = chunk;
          DAT_1000e080 = chunk;
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
        DAT_1000e07c = 0;
        return (void *)0x0;
      }
      bVar5 = recovered_10005540(chunk,size_00);
      if (bVar5) {
        DAT_1000e080 = *(uint **)((int)pointer + -0xc);
      }
      *(undefined1 *)((int)pointer + -4) = 0;
      DAT_1000e07c = 0;
      return pointer;
    }
  }
  puVar9 = recovered_10001790(size_00,0,0xffffffff);
  if (puVar9 == (undefined4 *)0x0) {
    DAT_1000e07c = 0;
    return (void *)0x0;
  }
  if (*chunk < size_00) {
    size_00 = *chunk;
  }
  puVar10 = pointer;
  puVar14 = puVar9;
  if (size_00 < 8) {
LAB_10001ea5:
    if (size_00 == 0) goto LAB_10001ebc;
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
    goto LAB_10001ea5;
  }
  uVar12 = 0;
  do {
    *(undefined1 *)((int)puVar14 + uVar12) = *(undefined1 *)((int)puVar10 + uVar12);
    uVar12 = uVar12 + 1;
  } while (size_00 != uVar12);
LAB_10001ebc:
  recovered_10001b10(pointer);
  DAT_1000e07c = 0;
  return puVar9;
}

#undef DAT_1000e07c
#undef DAT_1000e080
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fd0
 */

undefined8 recovered_10001fd0(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_1000200b;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_1000200b;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_1000200b:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002020
 */

undefined8 recovered_10002020(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002070
 */

undefined8 recovered_10002070(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x100020b0
 */

undefined8 recovered_100020b0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100021a0
 */

undefined8 recovered_100021a0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002210
 */

undefined8 recovered_10002210(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002360
 */

undefined8 recovered_10002360(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002430
 */

void recovered_10002430(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002450
 */

int recovered_10002450(int param_1)

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
 * Address: 0x10002470
 */

void * recovered_10002470(ulong size)

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
 * Address: 0x100024c0
 */

void recovered_100024c0(void *pointer)

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
 * Address: 0x10002510
 */

void * recovered_10002510(void *pointer,ulong size)

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
 * Address: 0x10002560
 */

void * recovered_10002560(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_1000258a;
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
LAB_1000258a:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)destination + uVar4) = *(undefined1 *)((int)source + uVar4);
    uVar4 = uVar4 + 1;
  } while (count != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002620
 */

void * recovered_10002620(void *destination,void *source,ulong count)

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
 * Address: 0x100027f0
 */

/* WARNING: Variable defined which should be unmapped: destination */

void * recovered_100027f0(void *destination,int value,ulong count)

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
 * Address: 0x100028a0
 */

void recovered_100028a0(undefined4 *param_1,uint param_2)

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
 * Address: 0x10002940
 */

void recovered_10002940(undefined4 *param_1,uint param_2)

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
 * Address: 0x100029e0
 */

char * recovered_100029e0(char *param_1,char param_2,int param_3)

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
 * Address: 0x10002a20
 */

int recovered_10002a20(void *left,void *right,ulong count)

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
    if ((((uint)right ^ (uint)left) & 3) != 0) goto LAB_10002abe;
    if (((uint)left & 3) != 0) {
      uVar6 = count;
      pvVar7 = left;
      do {
        pvVar7 = (void *)((int)pvVar7 + 1);
        bVar1 = (byte)*(uint *)left;
        bVar2 = (byte)*(uint *)right;
        if (bVar1 != bVar2) goto LAB_10002ad5;
        left = (void *)((int)left + 1);
        right = (void *)((int)right + 1);
        count = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = count, ((uint)pvVar7 & 3) != 0));
    }
    for (; 0xf < count; count = count - 0x10) {
      uVar8 = *(uint *)left;
      uVar9 = *(uint *)right;
      if (uVar8 != uVar9) {
LAB_10002b06:
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
      if (uVar8 != uVar9) goto LAB_10002b06;
      uVar8 = *(uint *)((int)left + 8);
      uVar9 = *(uint *)((int)right + 8);
      if (uVar8 != uVar9) goto LAB_10002b06;
      uVar8 = *(uint *)((int)left + 0xc);
      uVar9 = *(uint *)((int)right + 0xc);
      if (uVar8 != uVar9) goto LAB_10002b06;
      left = (void *)((int)left + 0x10);
      right = (void *)((int)right + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar3 = recovered_10002b50();
        return iVar3;
      }
      left = (void *)((int)left + 4);
      right = (void *)((int)right + 4);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_10002abe:
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
LAB_10002ad5:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b50
 */

int recovered_10002b50(void)

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
 * Address: 0x10002ba0
 */

bool recovered_10002ba0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bc0
 */

bool recovered_10002bc0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be0
 */

bool recovered_10002be0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c00
 */

bool recovered_10002c00(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c30
 */

bool recovered_10002c30(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c50
 */

bool recovered_10002c50(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c70
 */

int recovered_10002c70(int param_1)

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
 * Address: 0x10002c90
 */

int recovered_10002c90(int param_1)

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
 * Address: 0x10002cb0
 */

ulong recovered_10002cb0(char *text)

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
 * Address: 0x10002cf0
 */

int recovered_10002cf0(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_10002d26;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002d26:
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d30
 */

int recovered_10002d30(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002d66;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002d66:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d70
 */

void recovered_10002d70(int param_1,int param_2)

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
 * Address: 0x10002da0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10002da0(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10002eb8;
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
LAB_10002eb8:
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
 * Address: 0x10002ee0
 */

char * recovered_10002ee0(char *param_1,char param_2)

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
 * Address: 0x10002f20
 */

int recovered_10002f20(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_10002f6b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_10002f6b;
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
 * Address: 0x10002f80
 */

ulong recovered_10002f80(char *text,char *reject)

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
 * Address: 0x10002fe0
 */

char * recovered_10002fe0(char *param_1,char *param_2)

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
 * Address: 0x10003030
 */

char * recovered_10003030(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10003073;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10003073:
  return pcVar3;
}


#undef DAT_1000daa6
#define DAT_1000daa6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003080
 */

undefined * recovered_10003080(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000daa6;
}

#undef DAT_1000daa6

#undef PTR_DAT_1000e004
#define PTR_DAT_1000e004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030a0
 */

undefined ** recovered_100030a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000e004;
}

#undef PTR_DAT_1000e004

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
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 *)(pf_stack_frame + 48))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100030c0(undefined4 *param_1)

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
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_34

#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003160
 */

longdouble recovered_10003160(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000d860;
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

#undef DAT_1000d860

#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b0
 */

void recovered_100031b0(double param_1,int *param_2)

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
        param_1 = param_1 * (double)DAT_1000d860;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_1000d860 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_1000d860);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000d860

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003270
 */

longdouble recovered_10003270(double param_1,double param_2)

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
 * Address: 0x100032d0
 */

longdouble recovered_100032d0(double param_1,double param_2)

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
 * Address: 0x10003360
 */

longdouble recovered_10003360(double param_1)

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
 * Address: 0x100033b0
 */

longdouble recovered_100033b0(double param_1)

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
 * Address: 0x10003410
 */

void recovered_10003410(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000d864
#define DAT_1000d864 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000d868
#define DAT_1000d868 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000d86c
#define DAT_1000d86c (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000d870
#define DAT_1000d870 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000d874
#define DAT_1000d874 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_1000d878
#define DAT_1000d878 (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1000d87c
#define DAT_1000d87c (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_1000d880
#define DAT_1000d880 (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000d884
#define DAT_1000d884 (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000d888
#define DAT_1000d888 (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000d88c
#define DAT_1000d88c (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_1000d890
#define DAT_1000d890 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1000d8b8
#define DAT_1000d8b8 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003510
 */

longdouble recovered_10003510(double param_1)

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
    lVar2 = (longdouble)DAT_1000d864;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_1000d868 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000d860;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_1000d868 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_1000d86c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_1000d86c);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_1000d890 +
            lVar9 / (longdouble)DAT_1000d88c +
            lVar8 / (longdouble)DAT_1000d888 +
            lVar7 / (longdouble)DAT_1000d884 +
            lVar6 / (longdouble)DAT_1000d880 +
            lVar5 / (longdouble)DAT_1000d87c +
            lVar4 / (longdouble)DAT_1000d878 +
            lVar3 / (longdouble)DAT_1000d874 +
            (lVar10 * lVar2) / (longdouble)DAT_1000d870 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_1000d8b8;
  }
  return lVar2;
}

#undef DAT_1000d860
#undef DAT_1000d864
#undef DAT_1000d868
#undef DAT_1000d86c
#undef DAT_1000d870
#undef DAT_1000d874
#undef DAT_1000d878
#undef DAT_1000d87c
#undef DAT_1000d880
#undef DAT_1000d884
#undef DAT_1000d888
#undef DAT_1000d88c
#undef DAT_1000d890
#undef DAT_1000d8b8

#undef DAT_1000d8e0
#define DAT_1000d8e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003620
 */

longlong recovered_10003620(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_1000d8e0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_1000d8e0

#undef DAT_1000d894
#define DAT_1000d894 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1000d898
#define DAT_1000d898 (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1000d89c
#define DAT_1000d89c (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_1000d8c0
#define DAT_1000d8c0 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000d8c8
#define DAT_1000d8c8 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000d8d0
#define DAT_1000d8d0 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000d8d8
#define DAT_1000d8d8 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003680
 */

longdouble recovered_10003680(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000d8c0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000d8c8;
    } while ((longdouble)DAT_1000d8c0 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000d8d0) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000d8d8;
    } while (lVar1 < (longdouble)DAT_1000d8d0);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_1000d89c +
         (lVar2 * lVar2) / (longdouble)DAT_1000d898 +
         (longdouble)1 + lVar2 / (longdouble)DAT_1000d894) * lVar1;
}

#undef DAT_1000d894
#undef DAT_1000d898
#undef DAT_1000d89c
#undef DAT_1000d8c0
#undef DAT_1000d8c8
#undef DAT_1000d8d0
#undef DAT_1000d8d8

#undef DAT_1000d8a0
#define DAT_1000d8a0 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000d8a4
#define DAT_1000d8a4 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000d8a8
#define DAT_1000d8a8 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000d8c0
#define DAT_1000d8c0 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000d8c8
#define DAT_1000d8c8 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000d8d0
#define DAT_1000d8d0 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000d8d8
#define DAT_1000d8d8 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003710
 */

longdouble recovered_10003710(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000d8c0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000d8c8;
    } while ((longdouble)DAT_1000d8c0 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000d8d0) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000d8d8;
    } while (lVar1 < (longdouble)DAT_1000d8d0);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_1000d8a8 +
         (lVar1 * lVar1) / (longdouble)DAT_1000d8a4 +
         (longdouble)1 + lVar1 * (longdouble)DAT_1000d8a0;
}

#undef DAT_1000d8a0
#undef DAT_1000d8a4
#undef DAT_1000d8a8
#undef DAT_1000d8c0
#undef DAT_1000d8c8
#undef DAT_1000d8d0
#undef DAT_1000d8d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037a0
 */

longdouble recovered_100037a0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000d8ac
#define DAT_1000d8ac (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037c0
 */

longlong recovered_100037c0(double value)

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
    dVar3 = (double)DAT_1000d8ac;
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
      dVar3 = dVar3 * (double)DAT_1000d860;
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

#undef DAT_1000d860
#undef DAT_1000d8ac

#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000d8ac
#define DAT_1000d8ac (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003880
 */

ulonglong recovered_10003880(double value)

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
    dVar2 = (double)DAT_1000d8ac;
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
      dVar2 = dVar2 * (double)DAT_1000d860;
      bVar10 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar6,uVar4);
}

#undef DAT_1000d860
#undef DAT_1000d8ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003910
 */

double recovered_10003910(ulonglong value)

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
 * Address: 0x10003980
 */

double recovered_10003980(longlong value)

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
 * Address: 0x10003a40
 */

void recovered_10003a40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab0
 */

void recovered_10003ab0(float param_1,int *param_2)

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
        param_1 = param_1 * DAT_1000d860;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_1000d860 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_1000d860);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000d860

#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ba0
 */

longdouble recovered_10003ba0(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_1000d860;
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

#undef DAT_1000d860

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c00
 */

longdouble recovered_10003c00(float param_1,float param_2)

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
 * Address: 0x10003ca0
 */

longdouble recovered_10003ca0(float param_1)

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
 * Address: 0x10003d00
 */

longdouble recovered_10003d00(float param_1)

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
 * Address: 0x10003d70
 */

longdouble recovered_10003d70(double param_1)

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
 * Address: 0x10003de0
 */

longdouble recovered_10003de0(float param_1)

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
 * Address: 0x10003e50
 */

longdouble recovered_10003e50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10003410();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000d868
#define DAT_1000d868 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000d86c
#define DAT_1000d86c (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e70
 */

void recovered_10003e70(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_1000d868 < param_1) {
      do {
        param_1 = param_1 * DAT_1000d860;
      } while (DAT_1000d868 < param_1);
    }
    for (; param_1 < DAT_1000d86c; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_1000d860
#undef DAT_1000d868
#undef DAT_1000d86c

#undef DAT_1000d8e0
#define DAT_1000d8e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f90
 */

undefined4 recovered_10003f90(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_1000d8e0 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_1000d8e0
#undef local_10

#undef DAT_1000d894
#define DAT_1000d894 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1000d898
#define DAT_1000d898 (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1000d89c
#define DAT_1000d89c (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_1000d8c0
#define DAT_1000d8c0 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000d8c8
#define DAT_1000d8c8 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000d8d0
#define DAT_1000d8d0 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000d8d8
#define DAT_1000d8d8 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fe0
 */

longdouble recovered_10003fe0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000d8c0 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000d8c8;
    } while ((float)DAT_1000d8c0 < param_1);
  }
  if (param_1 < (float)DAT_1000d8d0) {
    do {
      param_1 = param_1 + (float)DAT_1000d8d8;
    } while (param_1 < (float)DAT_1000d8d0);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_1000d89c +
          (fVar1 * fVar1) / DAT_1000d898 + fVar1 / DAT_1000d894 + 1.0) * param_1);
}

#undef DAT_1000d894
#undef DAT_1000d898
#undef DAT_1000d89c
#undef DAT_1000d8c0
#undef DAT_1000d8c8
#undef DAT_1000d8d0
#undef DAT_1000d8d8

#undef DAT_1000d8a0
#define DAT_1000d8a0 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000d8a4
#define DAT_1000d8a4 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000d8a8
#define DAT_1000d8a8 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000d8c0
#define DAT_1000d8c0 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000d8c8
#define DAT_1000d8c8 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000d8d0
#define DAT_1000d8d0 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000d8d8
#define DAT_1000d8d8 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004070
 */

longdouble recovered_10004070(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000d8c0 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000d8c8;
    } while ((float)DAT_1000d8c0 < param_1);
  }
  if (param_1 < (float)DAT_1000d8d0) {
    do {
      param_1 = param_1 + (float)DAT_1000d8d8;
    } while (param_1 < (float)DAT_1000d8d0);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_1000d8a8 +
         (fVar1 * fVar1) / DAT_1000d8a4 + fVar1 * DAT_1000d8a0 + 1.0);
}

#undef DAT_1000d8a0
#undef DAT_1000d8a4
#undef DAT_1000d8a8
#undef DAT_1000d8c0
#undef DAT_1000d8c8
#undef DAT_1000d8d0
#undef DAT_1000d8d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004100
 */

longdouble recovered_10004100(float param_1)

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
 * Address: 0x10004120
 */

int recovered_10004120(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10004270
 */

int recovered_10004270(byte *param_1,undefined4 *param_2,uint param_3)

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

#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000d8b0
#define DAT_1000d8b0 (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043c0
 */

longdouble recovered_100043c0(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)DAT_1000d8b0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)DAT_1000d8b0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_1000d8b0;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10004493;
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
LAB_10004493:
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
              lVar10 = lVar10 * (longdouble)DAT_1000d860;
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

#undef DAT_1000d860
#undef DAT_1000d8b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004580
 */

longdouble recovered_10004580(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_100043c0(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1000d8b0
#define DAT_1000d8b0 (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
#undef str_1000daa8
#define str_1000daa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24cU)))
#undef str_1000dab2
#define str_1000dab2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x256U)))
#undef str_1000dac3
#define str_1000dac3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x267U)))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045b0
 */

int recovered_100045b0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10004643;
    }
    bVar6 = param_3[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *param_1 = 0x25;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      param_3 = param_3 + 1;
      goto LAB_10004643;
    }
    pbVar10 = param_3 + 2;
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_100046a5;
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
LAB_100046a5:
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
      goto LAB_1000478c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10004798;
    case 0x6c:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x6c) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_1000478c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10004798;
    case 0x7a:
      cVar7 = '\x05';
LAB_10004798:
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
        goto LAB_10004aa9;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004aa9:
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
        abStack_51[iVar12 + 1] = str_1000dac3[uVar15 + uVar9 * -10];
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
      goto LAB_100045f8;
    default:
      if (1 < local_bc) {
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10004643;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_10004bd7;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_10004bd7;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_10004bd7:
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
      pcVar14 = str_1000dac3;
      if (*param_3 == 0x58) {
        pcVar14 = str_1000dab2;
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
LAB_10004bac:
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
LAB_10004643:
      local_c0 = local_c0 + 1;
LAB_10004644:
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
                        goto LAB_10004ce5;
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
LAB_10004ce5:
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
          abStack_51[iVar12 + 1] = str_1000dac3[uVar8 + uVar9 * -10];
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
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_1000d8b0;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000d8b0;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000d8b0;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_1000d8b0;
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
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_1000d8b0);
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
        abStack_51[iVar12 + 1] = str_1000dac3[uVar8 & 0xf];
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
      goto LAB_10004644;
    case 0x73:
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_1000daa8;
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
      goto LAB_10004bac;
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
        goto LAB_10004dbf;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_10004dbf;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_10004dbf:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000dac3[uVar8 + uVar9 * -10];
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
LAB_100045f8:
      param_3 = param_3 + 1;
      param_1 = local_b8;
    }
  } while( true );
}

#undef DAT_1000d8b0
#undef str_1000daa8
#undef str_1000dab2
#undef str_1000dac3
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_80
#undef abStack_51

#define dStack00000010 (*(double *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005310
 */

int recovered_10005310(char *buffer,ulong capacity,char *format,...)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100045b0((byte *)buffer,capacity,(byte *)format,&dStack00000010);
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
#undef DAT_1000e078
#define DAT_1000e078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x81cU)))
#undef DAT_1000e080
#define DAT_1000e080 (*(int * *)(((uintptr_t)pf_module_state + 0x824U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005340(ulong address,ulong size,void *tail)

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
        if (DAT_1000e078 == 0) {
          puVar2 = &DAT_1000e078;
        }
        *puVar2 = piVar4;
        *(int **)tail = piVar4;
        if (DAT_1000e080 == (int *)0x0) {
          DAT_1000e080 = piVar4;
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
    if (DAT_1000e078 == 0) {
      puVar2 = &DAT_1000e078;
    }
    *puVar2 = 0x10000000;
    *(undefined4 *)tail = 0x10000000;
    if (DAT_1000e080 != (int *)0x0) {
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
    if (DAT_1000e078 == 0) {
      puVar2 = &DAT_1000e078;
    }
    *puVar2 = piVar4;
    *(int **)tail = piVar4;
    if (DAT_1000e080 != (int *)0x0) {
      return;
    }
  }
  DAT_1000e080 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_1000e078
#undef DAT_1000e080
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054e0
 */

void * recovered_100054e0(void *chunk,ulong first)

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
 * Address: 0x10005540
 */

bool recovered_10005540(void *chunk,ulong size)

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
#undef DAT_1000e084
#define DAT_1000e084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x828U)))
#undef DAT_1000e088
#define DAT_1000e088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82cU)))
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
 * Address: 0x100055a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100055a0(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000e084 != 0) {
          DAT_1000e084 = DAT_1000e084 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000e084 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10002560(local_214,&DAT_1000e088,DAT_1000e084);
            uVar3 = DAT_1000e084;
          }
          local_214[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0))))))
          {
            (*_DAT_00280840)(local_214);
          }
          DAT_1000e084 = 0;
        }
        else {
          if (DAT_1000e084 - 0x1ff < 0xfffffe00) {
            recovered_10002560(local_214,&DAT_1000e088,DAT_1000e084);
            local_214[DAT_1000e084] = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
              (*_DAT_00280840)(local_214);
            }
            DAT_1000e084 = 0;
          }
          pcVar1 = &DAT_1000e088 + DAT_1000e084;
          DAT_1000e084 = DAT_1000e084 + 1;
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
#undef DAT_1000e084
#undef DAT_1000e088
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
#undef DAT_1000e084
#define DAT_1000e084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x828U)))
#undef DAT_1000e088
#define DAT_1000e088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82cU)))
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
 * Address: 0x10005760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005760(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000e084 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10002560(local_21c,&DAT_1000e088,DAT_1000e084);
    uVar1 = DAT_1000e084;
  }
  local_21c[uVar1] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
    (*_DAT_00280840)(local_21c);
  }
  DAT_1000e084 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000e084
#undef DAT_1000e088
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
#undef DAT_1000e084
#define DAT_1000e084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x828U)))
#undef DAT_1000e088
#define DAT_1000e088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82cU)))
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
 * Address: 0x10005800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005800(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000e084 != 0) {
    recovered_10002560(local_210,&DAT_1000e088,DAT_1000e084);
    local_210[DAT_1000e084] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
      (*_DAT_00280840)(local_210);
    }
    DAT_1000e084 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000e084
#undef DAT_1000e088
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_210

#undef DAT_1000dab1
#define DAT_1000dab1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x255U)))
#undef DAT_1000dad4
#define DAT_1000dad4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x278U)))
#define acStack_150 (*(char (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005890
 */

void recovered_10005890(char *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  char *format;

  format = &DAT_1000dad4;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar1 = &DAT_1000dab1;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  iVar2 = recovered_10005310(acStack_150,0x140,format,puVar1);
  if (0 < iVar2) {
    recovered_100055a0(acStack_150,iVar2);
  }
  return;
}

#undef DAT_1000dab1
#undef DAT_1000dad4
#undef acStack_150

#undef DAT_1000daf2
#define DAT_1000daf2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x296U)))
#undef str_1000dad7
#define str_1000dad7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058f0
 */

void recovered_100058f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002cb0(str_1000dad7);
  recovered_100055a0(str_1000dad7,uVar1);
  uVar1 = recovered_10002cb0(&DAT_1000daf2);
  recovered_100055a0(&DAT_1000daf2,uVar1);
  return;
}

#undef DAT_1000daf2
#undef str_1000dad7

#undef DAT_1000daf2
#define DAT_1000daf2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x296U)))
#undef str_1000daf5
#define str_1000daf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x299U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005940
 */

void recovered_10005940(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002cb0(str_1000daf5);
  recovered_100055a0(str_1000daf5,uVar1);
  uVar1 = recovered_10002cb0(&DAT_1000daf2);
  recovered_100055a0(&DAT_1000daf2,uVar1);
  return;
}

#undef DAT_1000daf2
#undef str_1000daf5

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
#undef DAT_1000e084
#define DAT_1000e084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x828U)))
#undef DAT_1000e088
#define DAT_1000e088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82cU)))
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
 * Address: 0x10005990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005990(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000e084 != 0) {
      recovered_10002560(local_214,&DAT_1000e088,DAT_1000e084);
      local_214[DAT_1000e084] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000e084 = 0;
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
#undef DAT_1000e084
#undef DAT_1000e088
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a90
 */

undefined4 recovered_10005a90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005aa0
 */

void recovered_10005aa0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ab0
 */

undefined1 recovered_10005ab0(void)

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
#undef DAT_1000dad4
#define DAT_1000dad4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x278U)))
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7a4U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef str_1000db76
#define str_1000db76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31aU)))
#undef str_1000db83
#define str_1000db83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x327U)))
#undef str_1000db91
#define str_1000db91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x335U)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(void * *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005ac0(char *param_1,char *param_2)

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
    *(undefined4 *)PTR_DAT_1000e000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002cf0(param_1,str_1000db76);
  if (iVar3 == 0) {
    local_24 = 1;
  }
  else {
    iVar4 = recovered_10002cf0(param_1,str_1000db83);
    if (iVar4 == 0) {
      local_24 = 2;
    }
    else {
      iVar4 = recovered_10002cf0(param_1,str_1000db91);
      if (iVar4 != 0) {
        puVar5 = recovered_10002470(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_100027f0(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10002ee0(param_2,'r');
          bVar8 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002ee0(param_2,'+');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002ee0(param_2,'a');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar8;
          pcVar6 = recovered_10002ee0(param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002ee0(param_2,'a');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002ee0(param_2,'+');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar8 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar8;
          pcVar6 = recovered_10002ee0(param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          recovered_10005310((char *)(puVar5 + 1),0xf1,&DAT_1000dad4,param_1);
          recovered_100027f0(&local_20,0,0xc);
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             (((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00280834)(param_1,&local_20), iVar3 != 0)))) {
            pcVar6 = recovered_10002ee0(param_2,'w');
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
                  destination = recovered_10002510((void *)puVar5[0x3f],uVar7);
                  if (destination == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_1000e000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_10005e07;
                  }
                  puVar5[0x3f] = destination;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = destination;
                }
                else {
                  destination = (void *)puVar5[0x3f];
                }
                recovered_10002560(destination,local_20,local_1c);
              }
              else {
                puVar5[0x3e] = local_20;
              }
              puVar5[0x40] = local_1c;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x10005de4;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_1000e000 = 2;
LAB_10005e07:
            recovered_100024c0(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x10005de4:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_10005c65;
      }
      local_24 = 3;
    }
  }
  puVar5 = recovered_10002470(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_100027f0(puVar5,0,800);
    *puVar5 = local_24;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    recovered_10005310((char *)(puVar5 + 1),0xf1,&DAT_1000dad4,param_1);
    return puVar5;
  }
LAB_10005c65:
  *(undefined4 *)PTR_DAT_1000e000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_1000dad4
#undef PTR_DAT_1000e000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_1000db76
#undef str_1000db83
#undef str_1000db91
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
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7a4U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005e70(char *param_1,char *param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_10005f47;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       (_DAT_00280838 != (code *)0x0)) {
      iVar1 = (*_DAT_00280838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10005f2a;
      }
    }
    *(undefined4 *)PTR_DAT_1000e000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10005f2a:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_100024c0((void *)param_3[0x3f]);
  }
  recovered_100024c0(param_3);
LAB_10005f47:
  recovered_10005ac0(param_1,param_2);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000e000
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
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7a4U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005f60(int *param_1)

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
      *(undefined4 *)PTR_DAT_1000e000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_100024c0((void *)param_1[0x3f]);
  }
  recovered_100024c0(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000e000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006040
 */

uint recovered_10006040(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
        recovered_10002560(param_1,(void *)(uVar3 + param_4[0x3e]),uVar1);
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
          uVar2 = recovered_10006150(param_4);
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
#undef DAT_1000dab1
#define DAT_1000dab1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x255U)))
#undef DAT_1000e084
#define DAT_1000e084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x828U)))
#undef DAT_1000e088
#define DAT_1000e088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82cU)))
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
 * Address: 0x10006150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10006150(int *param_1)

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
LAB_100061b1:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000e084 != 0) {
      recovered_10002560(local_214,&DAT_1000e088,DAT_1000e084);
      local_214[DAT_1000e084] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000e084 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_1000dab1,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10002cb0((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_100061b1;
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
#undef DAT_1000dab1
#undef DAT_1000e084
#undef DAT_1000e088
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006310
 */

int recovered_10006310(char *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong count;
  uint uVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (char *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_1000647a:
    param_3 = 0;
  }
  else {
    count = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_100055a0(param_1,count);
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
      pvVar3 = recovered_10002510((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000e000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_1000647a;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_100027f0((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10002560((void *)(uVar4 + param_4[0x3f]),param_1,count);
    uVar4 = count + param_4[0x42];
    param_4[0x42] = uVar4;
    if (param_4[0x40] < uVar4) {
      param_4[0x40] = uVar4;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000e000

#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006490
 */

undefined4 recovered_10006490(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000e000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_100064a9;
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
LAB_100064a9:
  *(undefined4 *)PTR_DAT_1000e000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000e000

#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006530
 */

undefined4 recovered_10006530(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000e000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_1000e000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7a4U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006560(int *param_1)

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
    *(undefined4 *)PTR_DAT_1000e000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000e000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006620
 */

undefined1 recovered_10006620(int param_1)

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
 * Address: 0x10006640
 */

undefined1 recovered_10006640(int param_1)

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
 * Address: 0x10006660
 */

void recovered_10006660(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006690
 */

uint recovered_10006690(uint param_1,int param_2)

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
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7a4U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(code * *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100066d0(int param_1)

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
  *(undefined4 *)PTR_DAT_1000e000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef PTR_DAT_1000e000
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
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7a4U)))
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
 * Address: 0x10006750
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006750(int param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000e000 = 0x16;
  }
  else {
    recovered_100027f0(&local_20,0,0xc);
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
    *(undefined4 *)PTR_DAT_1000e000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef PTR_DAT_1000e000
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
 * Address: 0x100068d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100068d0(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if ((((param_3 == (ulong *)0x0 || (param_2 == (undefined4 *)0x0 || param_1 == 0)) ||
       (recovered_100027f0(&local_20,0,0xc), _DAT_00280800 != 0x50414d57)) || (_DAT_00280804 == 0))
     || (((_DAT_00280808 < 0xc || (_DAT_00280808 < 0x38)) ||
         ((_DAT_00280834 == (code *)0x0 || (iVar1 = (*_DAT_00280834)(param_1,&local_20), iVar1 == 0)
          ))))) {
    return 0;
  }
  destination = recovered_10002470(local_1c + (local_1c == 0));
  if (destination == (void *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (local_1c != 0) {
    recovered_10002560(destination,local_20,local_1c);
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
 * Address: 0x100069b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100069b0(int param_1,int param_2,int param_3)

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
 * Address: 0x10006a30
 */

undefined4 recovered_10006a30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a40
 */

void recovered_10006a40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a50
 */

undefined4 recovered_10006a50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a60
 */

undefined4 recovered_10006a60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a70
 */

undefined4 recovered_10006a70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a80
 */

int recovered_10006a80(char *left,char *right,ulong count)

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


#undef DAT_1000db05
#define DAT_1000db05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a9U)))
#undef str_1000db08
#define str_1000db08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2acU)))
#undef str_1000db15
#define str_1000db15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b9U)))
#undef str_1000db1f
#define str_1000db1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c3U)))
#undef str_1000db33
#define str_1000db33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d7U)))
#undef str_1000db41
#define str_1000db41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_1000db53
#define str_1000db53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f7U)))
#undef str_1000db5f
#define str_1000db5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x303U)))
#undef str_1000db70
#define str_1000db70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x314U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ad0
 */

char * recovered_10006ad0(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000db05;
  switch((uintptr_t)(param_1)) {
  case 0:
    break;
  default:
    pcVar1 = str_1000db70;
    break;
  case 2:
    pcVar1 = str_1000db08;
    break;
  case 5:
    pcVar1 = str_1000db15;
    break;
  case 9:
    pcVar1 = str_1000db1f;
    break;
  case 0xc:
    pcVar1 = str_1000db33;
    break;
  case 0xd:
    pcVar1 = str_1000db41;
    break;
  case 0x11:
    pcVar1 = str_1000db53;
    break;
  case 0x16:
    pcVar1 = str_1000db5f;
  }
  return pcVar1;
}

#undef DAT_1000db05
#undef str_1000db08
#undef str_1000db15
#undef str_1000db1f
#undef str_1000db33
#undef str_1000db41
#undef str_1000db53
#undef str_1000db5f
#undef str_1000db70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ba0
 */

undefined4 recovered_10006ba0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bb0
 */

undefined4 recovered_10006bb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000e288
#define DAT_1000e288 (*(int *)(((uintptr_t)pf_module_state + 0xa2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bc0
 */

void recovered_10006bc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000e288 = DAT_1000e288 + 1;
  return;
}

#undef DAT_1000e288

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006be0
 */

longlong recovered_10006be0(longdouble param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10003620((double)param_1);
  return lVar1;
}


#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c00
 */

uint recovered_10006c00(byte *param_1,double *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_100045b0(local_21c,0x200,param_1,param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_100055a0((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c50
 */

uint recovered_10006c50(byte *param_1,double param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_100045b0(local_21c,0x200,param_1,&param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_100055a0((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

/* Native IA32 exception-scope stack, frame and program-counter transfer.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006cb0(void *context,...){
 __asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\njmpl *36(%eax)");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006cc0(void *context){__asm__ volatile("movl 4(%esp), %eax\nmovl %ebx, (%eax)\nmovl %esi, 4(%eax)\nmovl %edi, 8(%eax)\nmovl %ebp, 0xc(%eax)\nleal 4(%esp), %edx\nmovl %edx, 0x10(%eax)\nmovl (%esp), %edx\nmovl %edx, 0x14(%eax)\nmovl $0xffffffff, 0x18(%eax)\nmovl %eax, %esi\nmovl $1, %eax\ncpuid \nandl $0x3000000, %edx\ncmpl $0x3000000, %edx\njne Lpf_context_10006cfe\nstmxcsr 0x18(%esi)\nLpf_context_10006cfe:\nfnstcw 0x1c(%esi)\nxorl %eax, %eax\nmovl (%esi), %ebx\nmovl 4(%esi), %esi\nretl \nud2 \nnop \nnop \nnop \nnop \nnop ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006d10(void *context,int value){__asm__ volatile("movl 4(%esp), %edx\nmovl 8(%esp), %eax\ntestl %eax, %eax\njne Lpf_context_10006d21\nmovl $1, %eax\nLpf_context_10006d21:\ncmpl $-1, 0x18(%edx)\nje Lpf_context_10006d2b\nldmxcsr 0x18(%edx)\nLpf_context_10006d2b:\nfldcw 0x1c(%edx)\nmovl (%edx), %ebx\nmovl 4(%edx), %esi\nmovl 8(%edx), %edi\nmovl 0xc(%edx), %ebp\nmovl 0x10(%edx), %esp\njmpl *0x14(%edx)\nud2 \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop ");}


#undef DAT_1000df5c
#define DAT_1000df5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x700U)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d50
 */

void recovered_10006d50(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006dd0;
  local_2c = &DAT_1000df5c;
  local_24 = 0x40;
  local_44 = 1;
  recovered_10007440(&local_48);
  recovered_10002430();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000df5c
#undef local_20
#undef auStackY_d0
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dd0
 */

undefined4 recovered_10006dd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006de0
 */

void recovered_10006de0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006e00();
                    /* WARNING: Subroutine does not return */
  recovered_10006d50();
}


#undef DAT_1000e28c
#define DAT_1000e28c (*(int *)(((uintptr_t)pf_module_state + 0xa30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e00
 */

void recovered_10006e00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;

  recovered_10007240();
  if (extraout_EAX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006d50();
  }
  *(int *)(extraout_EAX + 8) = DAT_1000e28c;
  *(undefined1 *)(extraout_EAX + 0x20) = 0;
  DAT_1000e28c = extraout_EAX;
  recovered_10007290();
  return;
}

#undef DAT_1000e28c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e40
 */

void * recovered_10006e40(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10002470(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10002430();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e70
 */

void * recovered_10006e70(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10002470(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10002430();
  }
  return pvVar1;
}


#undef DAT_1000df6c
#define DAT_1000df6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x710U)))
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
 * Address: 0x10006ea0
 */

void recovered_10006ea0(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006dd0;
  local_2c = &DAT_1000df6c;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007440(&local_48);
  recovered_100024c0(param_1);
  recovered_10007470(&local_48);
  return;
}

#undef DAT_1000df6c
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_1000df7c
#define DAT_1000df7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x720U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f30
 */

void recovered_10006f30(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006dd0;
  local_2c = &DAT_1000df7c;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007440(&local_48);
  recovered_100024c0(param_1);
  recovered_10007470(&local_48);
  return;
}

#undef DAT_1000df7c
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef auStack_1c
#undef local_24
#undef local_20

#undef DAT_1000df8c
#define DAT_1000df8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x730U)))
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
 * Address: 0x10006fc0
 */

void recovered_10006fc0(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006dd0;
  local_2c = &DAT_1000df8c;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007440(&local_48);
  recovered_100024c0(param_1);
  recovered_10007470(&local_48);
  return;
}

#undef DAT_1000df8c
#undef local_48
#undef auStackY_d0
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_1000df9c
#define DAT_1000df9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x740U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007050
 */

void recovered_10007050(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006dd0;
  local_2c = &DAT_1000df9c;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007440(&local_48);
  recovered_100024c0(param_1);
  recovered_10007470(&local_48);
  return;
}

#undef DAT_1000df9c
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef auStack_1c
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070e0
 */

undefined4 recovered_100070e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070f0
 */

uint recovered_100070f0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007110
 */

void recovered_10007110(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007120
 */

void recovered_10007120(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000e294
#define DAT_1000e294 (*(int *)(((uintptr_t)pf_module_state + 0xa38U)))
#undef DAT_1000e298
#define DAT_1000e298 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007130
 */

undefined1 * recovered_10007130(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;
  int iVar3;

  size = param_1 + 0x24 + (uint)(param_1 == 0);
  puVar1 = recovered_10002470(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006d50();
  }
  if (size != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      size = size - 1;
    } while (size != 0);
  }
  DAT_1000e294 = DAT_1000e294 + 1 + (uint)(DAT_1000e294 == -1);
  if (DAT_1000e298 == (undefined1 *)0x0) {
LAB_100071ac:
    *(int *)(puVar1 + 0x1c) = DAT_1000e294;
    *(undefined1 **)(puVar1 + 0xc) = DAT_1000e298;
    DAT_1000e298 = puVar1;
    return puVar1 + 0x24;
  }
  do {
    iVar3 = (int)DAT_1000e298;
    while (*(int *)(iVar3 + 0x1c) != DAT_1000e294) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_100071ac;
    }
    DAT_1000e294 = DAT_1000e294 + 1 + (uint)(DAT_1000e294 == -1);
  } while( true );
}

#undef DAT_1000e294
#undef DAT_1000e298

#undef DAT_1000e298
#define DAT_1000e298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071d0
 */

void recovered_100071d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  if (param_1 != 0) {
    pointer = (void *)(param_1 + -0x24);
    pvVar1 = DAT_1000e298;
    if (DAT_1000e298 == pointer) {
      puVar2 = &DAT_1000e298;
    }
    else {
      do {
        pvVar3 = pvVar1;
        if (pvVar3 == (void *)0x0) goto LAB_10007224;
        pvVar1 = *(void **)((int)pvVar3 + 0xc);
      } while (*(void **)((int)pvVar3 + 0xc) != pointer);
      puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
    }
    *puVar2 = *(undefined4 *)(param_1 + -0x18);
    *(undefined4 *)(param_1 + -0x18) = 0;
LAB_10007224:
    recovered_100024c0(pointer);
  }
  return;
}

#undef DAT_1000e298

#undef DAT_1000e298
#define DAT_1000e298 (*(int *)(((uintptr_t)pf_module_state + 0xa3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007240
 */

void recovered_10007240(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;

  iVar1 = DAT_1000e298;
  if (DAT_1000e298 != in_ECX && DAT_1000e298 != 0) {
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

#undef DAT_1000e298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007290
 */

int recovered_10007290(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  return in_ECX + 0x24;
}


#undef DAT_1000e28c
#define DAT_1000e28c (*(void * *)(((uintptr_t)pf_module_state + 0xa30U)))
#undef DAT_1000e298
#define DAT_1000e298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072a0
 */

void recovered_100072a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  pointer = DAT_1000e28c;
  if (DAT_1000e28c != (void *)0x0) {
    puVar2 = (undefined4 *)((int)DAT_1000e28c + 8);
    DAT_1000e28c = *(void **)((int)DAT_1000e28c + 8);
    *puVar2 = 0;
    if (*(char *)((int)pointer + 0x20) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x24);
      }
      pvVar1 = DAT_1000e298;
      if (DAT_1000e298 == pointer) {
        puVar2 = &DAT_1000e298;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_10007314;
          pvVar1 = *(void **)((int)pvVar3 + 0xc);
        } while (*(void **)((int)pvVar3 + 0xc) != pointer);
        puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
      }
      *puVar2 = *(undefined4 *)((int)pointer + 0xc);
      *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_10007314:
      recovered_100024c0(pointer);
    }
  }
  return;
}

#undef DAT_1000e28c
#undef DAT_1000e298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007330
 */

void recovered_10007330(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007370();
}


#undef DAT_1000e28c
#define DAT_1000e28c (*(int *)(((uintptr_t)pf_module_state + 0xa30U)))
#undef DAT_1000e290
#define DAT_1000e290 (*(int * *)(((uintptr_t)pf_module_state + 0xa34U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007370
 */

void recovered_10007370(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;

  if (DAT_1000e290 != (int *)0x0) {
    piVar3 = DAT_1000e290;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar2 = recovered_10007d40((undefined2 *)&local_20);
      if (((char)uVar2 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(in_ECX + 0x10) = piVar3;
        *(undefined4 *)(in_ECX + 0x14) = local_1c;
        *(undefined4 *)(in_ECX + 0x18) = local_18;
        recovered_10007540();
        iVar1 = DAT_1000e28c;
        if (DAT_1000e28c == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006d50();
        }
        *(undefined1 *)(DAT_1000e28c + 0x20) = 1;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10007370();
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006d50();
}

#undef DAT_1000e28c
#undef DAT_1000e290
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000e28c
#define DAT_1000e28c (*(int *)(((uintptr_t)pf_module_state + 0xa30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007400
 */

void recovered_10007400(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e28c;
  if (DAT_1000e28c == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006d50();
  }
  *(undefined1 *)(DAT_1000e28c + 0x20) = 1;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007370();
}

#undef DAT_1000e28c

#undef DAT_1000e290
#define DAT_1000e290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xa34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007440
 */

void recovered_10007440(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000e290;
  DAT_1000e290 = param_1;
  return;
}

#undef DAT_1000e290

#undef DAT_1000e290
#define DAT_1000e290 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007470
 */

void recovered_10007470(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000e290;
  if (DAT_1000e290 == param_1) {
    puVar2 = &DAT_1000e290;
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

#undef DAT_1000e290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074b0
 */

void recovered_100074b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007370();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074d0
 */

void recovered_100074d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006d50();
}


#undef DAT_1000e290
#define DAT_1000e290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xa34U)))
#undef DAT_1000e298
#define DAT_1000e298 (*(int *)(((uintptr_t)pf_module_state + 0xa3cU)))
#define iStack_4c (*(int *)(pf_stack_frame + 20))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074e0
 */

undefined4 recovered_100074e0(int param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX = 0;

  iVar4 = DAT_1000e298;
  if (DAT_1000e298 != param_1 && DAT_1000e298 != 0) {
    do {
      if (*(int *)(iVar4 + 0x1c) == param_1) goto LAB_10007522;
      iVar4 = *(int *)(iVar4 + 0xc);
    } while ((iVar4 != 0) && (iVar4 != param_1));
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006d50();
  }
LAB_10007522:
  if (DAT_1000e290 != (undefined4 *)0x0) {
    DAT_1000e290 = (undefined4 *)*DAT_1000e290;
  }
  recovered_10007540();
  if (DAT_1000e290 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(extraout_ECX + 0x10);
    do {
      puVar2 = DAT_1000e290;
      if (DAT_1000e290 == puVar1) {
        DAT_1000e290[2] = extraout_ECX;
        puVar2[3] = *(undefined4 *)(extraout_ECX + 0x18);
        uVar3 = *(undefined4 *)(extraout_ECX + 0x14);
LAB_100075de:
        puVar2[1] = uVar3;
        recovered_10006cb0((int)puVar2);
        recovered_100074e0(iStack_4c);
        return 0;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      recovered_10007d40((undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_3c;
        goto LAB_100075de;
      }
      DAT_1000e290 = (undefined4 *)*puVar2;
    } while (DAT_1000e290 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006d50();
}

#undef DAT_1000e290
#undef DAT_1000e298
#undef iStack_4c
#undef uStack_40
#undef uStack_3c
#undef uStack_38

#undef DAT_1000e290
#define DAT_1000e290 (*(int * *)(((uintptr_t)pf_module_state + 0xa34U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
#define iStack_2c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007540
 */

undefined4 recovered_10007540(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;

  if (DAT_1000e290 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0x10);
    do {
      piVar2 = DAT_1000e290;
      if (DAT_1000e290 == piVar1) {
        DAT_1000e290[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x18);
        iVar3 = *(int *)(in_ECX + 0x14);
LAB_100075de:
        piVar2[1] = iVar3;
        recovered_10006cb0((int)piVar2);
        recovered_100074e0(iStack_2c);
        return 0;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      recovered_10007d40((undefined2 *)&local_20);
      if (((char)local_20 == '\x01') && (PF_PART1(local_20, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_1c;
        goto LAB_100075de;
      }
      DAT_1000e290 = (int *)*piVar2;
    } while (DAT_1000e290 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006d50();
}

#undef DAT_1000e290
#undef local_20
#undef local_1c
#undef local_18
#undef iStack_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

undefined4 recovered_100075f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100074e0(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007610
 */

undefined4 recovered_10007610(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007620
 */

void recovered_10007620(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006d50();
}


#undef DAT_1000e05c
#define DAT_1000e05c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x800U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007630
 */

int recovered_10007630(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_100076f0;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_100076f0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000e05c) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_100076f0:
      local_1c = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_1c;
}

#undef DAT_1000e05c
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007710
 */

void recovered_10007710(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002430();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007730
 */

undefined4 recovered_10007730(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007740
 */

bool recovered_10007740(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007760
 */

bool recovered_10007760(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077a0
 */

bool recovered_100077a0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077d0
 */

bool recovered_100077d0(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077f0
 */

bool recovered_100077f0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

byte recovered_10007810(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007850
 */

bool recovered_10007850(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000d8a0
#define DAT_1000d8a0 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000d8f0
#define DAT_1000d8f0 (*(float *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_1000d8f8
#define DAT_1000d8f8 (*(double *)(((uintptr_t)pf_module_state + 0x9cU)))
#undef DAT_1000d900
#define DAT_1000d900 (*(double *)(((uintptr_t)pf_module_state + 0xa4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007870
 */

double recovered_10007870(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;

  if (!NAN(value)) {
    if (DAT_1000d8f8 < value) {
      return (double)DAT_1000d8f0;
    }
    if (value < DAT_1000d900) {
      return 0.0;
    }
    iVar4 = 0;
    dVar1 = (double)DAT_1000d860;
    if (dVar1 < value) {
      iVar4 = 0;
      do {
        value = value * dVar1;
        iVar4 = iVar4 + 1;
      } while (dVar1 < value);
    }
    if ((double)DAT_1000d8a0 <= value) {
      dVar1 = value;
    }
    else {
      do {
        value = value * (double)DAT_1000d860;
        iVar4 = iVar4 + 1;
        dVar1 = value;
      } while (value < (double)DAT_1000d8a0);
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

#undef DAT_1000d860
#undef DAT_1000d8a0
#undef DAT_1000d8f0
#undef DAT_1000d8f8
#undef DAT_1000d900

#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000d8a0
#define DAT_1000d8a0 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000d8f0
#define DAT_1000d8f0 (*(float *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_1000d8f8
#define DAT_1000d8f8 (*(double *)(((uintptr_t)pf_module_state + 0x9cU)))
#undef DAT_1000d900
#define DAT_1000d900 (*(double *)(((uintptr_t)pf_module_state + 0xa4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007960
 */

float recovered_10007960(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;

  if (!NAN(value)) {
    if ((float)DAT_1000d8f8 < value) {
      return DAT_1000d8f0;
    }
    if (value < (float)DAT_1000d900) {
      return 0.0;
    }
    iVar4 = 0;
    if (DAT_1000d860 < value) {
      iVar4 = 0;
      do {
        value = value * DAT_1000d860;
        iVar4 = iVar4 + 1;
      } while (DAT_1000d860 < value);
    }
    if (DAT_1000d8a0 <= value) {
      fVar1 = value;
    }
    else {
      do {
        value = value * DAT_1000d860;
        iVar4 = iVar4 + 1;
        fVar1 = value;
      } while (value < DAT_1000d8a0);
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

#undef DAT_1000d860
#undef DAT_1000d8a0
#undef DAT_1000d8f0
#undef DAT_1000d8f8
#undef DAT_1000d900

#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000d8a0
#define DAT_1000d8a0 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000d8f0
#define DAT_1000d8f0 (*(float *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_1000d8f8
#define DAT_1000d8f8 (*(double *)(((uintptr_t)pf_module_state + 0x9cU)))
#undef DAT_1000d900
#define DAT_1000d900 (*(double *)(((uintptr_t)pf_module_state + 0xa4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a60
 */

float10 recovered_10007a60(float10 value)

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
    if ((longdouble)DAT_1000d8f8 < lVar4) {
      return (float10)(longdouble)DAT_1000d8f0;
    }
    if (lVar4 < (longdouble)DAT_1000d900) {
      return (float10)(longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_1000d860;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_1000d8a0) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_1000d860;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_1000d8a0);
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

#undef DAT_1000d860
#undef DAT_1000d8a0
#undef DAT_1000d8f0
#undef DAT_1000d8f8
#undef DAT_1000d900

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b50
 */

double recovered_10007b50(long end,long start)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)end - (double)start;
}


#undef DAT_1000d860
#define DAT_1000d860 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000d8a0
#define DAT_1000d8a0 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b80
 */

longdouble recovered_10007b80(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_10003360(param_1);
  if ((longdouble)DAT_1000d860 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)DAT_1000d8a0 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_1000d860
#undef DAT_1000d8a0

#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007be0
 */

ulonglong recovered_10007be0(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_10007c93;
    }
  }
  else {
    if (param_3 != 0) {
      local_18 = param_3;
      goto LAB_10007c93;
    }
    if (*pbVar7 != 0x30) {
      local_18 = 10;
      goto LAB_10007c93;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_18 = 8;
      goto LAB_10007c93;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_18 = 0x10;
LAB_10007c93:
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
 * Address: 0x10007d20
 */

ulonglong recovered_10007d20(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007be0(param_1,param_2,param_3);
  return uVar1;
}


#undef DAT_1000e05c
#define DAT_1000e05c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x800U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d40
 */

undefined4 recovered_10007d40(undefined2 *param_1)

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
      recovered_100080d0();
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
          goto LAB_10007ef0;
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
LAB_10007ef0:
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
       (pbVar13 = recovered_100080d0(), pbVar13 == (byte *)0x0)) {
LAB_100080ae:
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
          if (iVar5 == iVar11) goto LAB_100080ae;
        }
        else {
          iVar17 = 0;
          do {
            cVar2 = *(char *)(iVar5 + iVar17);
            cVar3 = *(char *)(iVar11 + iVar17);
            if ((cVar2 == '\0') || (cVar3 == '\0')) {
              if (cVar2 == cVar3) goto LAB_100080ae;
              break;
            }
            iVar17 = iVar17 + 1;
          } while (cVar2 == cVar3);
        }
        if (*(undefined **)pbVar16 != &DAT_1000e05c) goto LAB_10008087;
        pbVar16 = *(byte **)(pbVar16 + 8);
        bVar20 = pbVar16 != (byte *)0x0;
      } while ((pbVar16 != pbVar13) && (pbVar16 != (byte *)0x0));
    }
    if (bVar20) goto LAB_100080ae;
  }
LAB_10008087:
  if ((uVar19 | uVar8) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar19 | uVar8);
  bVar20 = 0x3e < uVar7;
  uVar7 = uVar7 + 1;
  if (bVar20) {
    return 0;
  }
  goto LAB_10007ef0;
}

#undef DAT_1000e05c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080d0
 */

byte * recovered_100080d0(void)

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
    goto LAB_100081b5;
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
    goto LAB_100081b5;
  case 0x4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_1000810f_caseD_5;
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
LAB_100081b5:
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
switchD_1000810f_caseD_5:
  return pbVar3;
}


#undef str_1000db9f
#define str_1000db9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x343U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008220
 */

char * recovered_10008220(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return str_1000db9f;
}

#undef str_1000db9f

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_1000dab1
#define DAT_1000dab1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x255U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280968
#define _DAT_00280968 (*(code * *)(0x280968U))
#define local_2c (*(undefined1 (*)[44])(pf_stack_frame + 20))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008240(void *context,void *io,char *hostname)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  ulong count;
  char *text;
  uint uVar4;

  if (context != (void *)0x0) {
    recovered_100027f0(context,0,0x1f8);
    if (io != (void *)0x0) {
      *(undefined4 *)((int)context + 0x10) = *(undefined4 *)((int)io + 0x10);
      *(undefined4 *)((int)context + 0xc) = *(undefined4 *)((int)io + 0xc);
      *(undefined4 *)((int)context + 8) = *(undefined4 *)((int)io + 8);
      uVar1 = *(undefined4 *)io;
      *(undefined4 *)((int)context + 4) = *(undefined4 *)((int)io + 4);
      *(undefined4 *)context = uVar1;
    }
    text = &DAT_1000dab1;
    if (hostname != (char *)0x0) {
      text = hostname;
    }
    uVar2 = recovered_10002cb0(text);
    count = 0x7f;
    if (uVar2 < 0x7f) {
      count = uVar2;
    }
    recovered_10002560((void *)((int)context + 0x14),text,count);
    *(undefined1 *)((int)context + count + 0x14) = 0;
    recovered_100027f0(local_2c,0,0x18);
    uVar4 = 0x574d544c;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)))) {
      iVar3 = (*_DAT_00280968)(local_2c);
      if (iVar3 != 0) {
        uVar4 = local_20 * 0x3c6ef35f ^ local_24 ^ local_1c * 0x19660d ^ 0x574d544c;
      }
    }
    *(uint *)((int)context + 0x1f0) = uVar4 ^ (uint)context ^ *(uint *)((int)context + 0x1f0);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280968
#undef DAT_1000dab1
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280968
#undef local_2c
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000d940
#define DAT_1000d940 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef str_1000db33
#define str_1000db33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d7U)))
#undef str_1000dbcd
#define str_1000dbcd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x371U)))
#undef str_1000dbe8
#define str_1000dbe8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38cU)))
#undef str_1000dc05
#define str_1000dc05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#undef str_1000dc0d
#define str_1000dc0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b1U)))
#undef str_1000dc1a
#define str_1000dc1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3beU)))
#undef str_1000dc5b
#define str_1000dc5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ffU)))
#undef str_1000dc7d
#define str_1000dc7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x421U)))
#define local_1ea (*(undefined2 *)(pf_stack_frame + 1158))
#define local_1e8 (*(undefined1 *)(pf_stack_frame + 1160))
#define local_1e7 (*(undefined1 *)(pf_stack_frame + 1161))
#define local_1e6 (*(undefined1 *)(pf_stack_frame + 1162))
#define local_1e5 (*(undefined1 (*)[485])(pf_stack_frame + 1163))
#define uStack_493 (*(undefined4 *)(pf_stack_frame + 477))
#define auStack_48f (*(undefined1 (*)[1167])(pf_stack_frame + 481))
#define uStack_48c (*(undefined4 *)(pf_stack_frame + 484))
#define auStack_488 (*(undefined1 (*)[1160])(pf_stack_frame + 488))
#define uStack_484 (*(undefined4 *)(pf_stack_frame + 492))
#define auStack_480 (*(undefined1 (*)[1152])(pf_stack_frame + 496))
#define uStack_472 (*(undefined4 *)(pf_stack_frame + 510))
#define auStack_46e (*(undefined1 (*)[1134])(pf_stack_frame + 514))
#define format (*(char * *)(pf_stack_frame + 24))
#define local_64c (*(uint *)(pf_stack_frame + 36))
#define local_648 (*(undefined4 * *)(pf_stack_frame + 40))
#define local_644 (*(char * *)(pf_stack_frame + 44))
#define local_640 (*(ulong *)(pf_stack_frame + 48))
#define local_63c (*(undefined1 (*)[1596])(pf_stack_frame + 52))
#define local_61c (*(undefined1 (*)[1564])(pf_stack_frame + 84))
#define local_5fc (*(undefined1 (*)[1532])(pf_stack_frame + 116))
#define local_5dc (*(undefined4 *)(pf_stack_frame + 148))
#define local_5d8 (*(undefined4 *)(pf_stack_frame + 152))
#define local_5d4 (*(undefined4 *)(pf_stack_frame + 156))
#define local_5d0 (*(undefined2 *)(pf_stack_frame + 160))
#define local_4dc (*(undefined1 (*)[1244])(pf_stack_frame + 404))
#define local_4bc (*(undefined1 (*)[1212])(pf_stack_frame + 436))
#define local_49c (*(ushort *)(pf_stack_frame + 468))
#define local_49a (*(undefined1 *)(pf_stack_frame + 470))
#define local_499 (*(undefined1 *)(pf_stack_frame + 471))
#define local_498 (*(undefined1 *)(pf_stack_frame + 472))
#define local_497 (*(undefined1 (*)[1175])(pf_stack_frame + 473))
#define local_294 (*(undefined1 (*)[660])(pf_stack_frame + 988))
#define local_274 (*(undefined1 (*)[628])(pf_stack_frame + 1020))
#define local_254 (*(undefined1 (*)[596])(pf_stack_frame + 1052))
#define local_234 (*(undefined1 (*)[564])(pf_stack_frame + 1084))
#define local_214 (*(undefined1 *)(pf_stack_frame + 1116))
#define local_213 (*(undefined1 *)(pf_stack_frame + 1117))
#define local_212 (*(undefined1 *)(pf_stack_frame + 1118))
#define local_211 (*(undefined1 *)(pf_stack_frame + 1119))
#define local_210 (*(undefined2 *)(pf_stack_frame + 1120))
#define local_20e (*(undefined1 (*)[526])(pf_stack_frame + 1122))
#define local_1ee (*(undefined4 *)(pf_stack_frame + 1154))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008360
 */

int recovered_10008360(void *context,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[1680] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  byte *in_ECX;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  byte bVar10;

  bVar10 = 0;
  local_64c = 0;
  if ((((context == (void *)0x0) || (*(int *)((int)context + 4) == 0)) ||
      (*(int *)((int)context + 8) == 0)) || (*(char *)((int)context + 0x14) == '\0')) {
    format = str_1000dbcd;
  }
  else {
    local_644 = (char *)((int)context + 0x14);
    uVar4 = recovered_10002cb0(local_644);
    if (uVar4 - 0xb5 < 0xffffff4c) {
      format = str_1000dbe8;
    }
    else {
      recovered_1000c0b0(context,local_63c);
      recovered_1000c0b0(context,local_4bc);
      recovered_10008eb0(local_4dc,local_4bc,&DAT_1000d940);
      recovered_100027f0(&local_49c,0,0x200);
      recovered_100027f0(&local_5dc,0,0x100);
      local_5dc = (uint)CONCAT11((char)(uVar4 + 3),(char)(uVar4 + 3 >> 8));
      local_5d8 = CONCAT31(PF_PART3(local_5d8, 1),(char)uVar4);
      recovered_10002560((void *)((int)&local_5d8 + 1),local_644,uVar4);
      uVar7 = uVar4 & 0xffff;
      local_640 = uVar7 + 5;
      local_49c = 0;
      local_49a = (undefined1)(local_640 >> 8);
      local_499 = (undefined1)local_640;
      recovered_10002560(&local_498,&local_5dc,local_640);
      local_5dc = CONCAT13(PF_PART1(local_5dc, 3),0x40302);
      *(undefined4 *)(local_497 + uVar7 + 4) = 0x3002b00;
      recovered_10002560(auStack_48f + uVar7,&local_5dc,3);
      local_5dc = 0x1d000200;
      *(undefined4 *)(auStack_48f + uVar7 + 3) = 0x4000a00;
      recovered_10002560(auStack_488 + uVar7,&local_5dc,4);
      local_5dc = 0x3040c00;
      local_5d8 = 0x1040408;
      local_5d4 = 0x5080105;
      local_5d0 = 0x608;
      *(undefined4 *)(auStack_488 + uVar7 + 4) = 0xe000d00;
      recovered_10002560(auStack_480 + uVar7,&local_5dc,0xe);
      local_5dc = 0x1d002400;
      local_5d8 = CONCAT22(PF_PART2(local_5d8, 2),0x2000);
      recovered_10002560((void *)((int)&local_5d8 + 2),local_4dc,0x20);
      *(undefined4 *)(auStack_480 + uVar7 + 0xe) = 0x26003300;
      recovered_10002560(auStack_46e + uVar7,&local_5dc,0x26);
      uVar4 = uVar7 + 0x54;
      local_214 = 1;
      local_210 = 0x303;
      recovered_10002560(local_20e,local_63c,0x20);
      local_1ee = 0x13020000;
      local_1ea = 0x103;
      local_1e8 = 0;
      local_1e7 = (undefined1)(uVar4 >> 8);
      local_1e6 = (undefined1)uVar4;
      recovered_10002560(local_1e5,&local_49c,uVar4);
      local_213 = 0;
      local_212 = (undefined1)(uVar7 + 0x7f >> 8);
      local_211 = (undefined1)(uVar7 + 0x7f);
      uVar4 = uVar7 + 0x83;
      local_648 = (undefined4 *)((int)context + 0x94);
      *(undefined4 *)((int)context + 0x94) = 0x6a09e667;
      *(undefined4 *)((int)context + 0x98) = 0xbb67ae85;
      *(undefined4 *)((int)context + 0x9c) = 0x3c6ef372;
      *(undefined4 *)((int)context + 0xa0) = 0xa54ff53a;
      *(undefined4 *)((int)context + 0xa4) = 0x510e527f;
      *(undefined4 *)((int)context + 0xa8) = 0x9b05688c;
      *(undefined4 *)((int)context + 0xac) = 0x1f83d9ab;
      *(undefined4 *)((int)context + 0xb0) = 0x5be0cd19;
      *(undefined4 *)((int)context + 0xb8) = 0;
      *(undefined4 *)((int)context + 0xb4) = 0;
      *(undefined4 *)((int)context + 0xfc) = 0;
      recovered_100089d0(local_648,&local_214,uVar4);
      local_49c = 0x316;
      local_49a = 1;
      local_499 = (undefined1)(uVar4 >> 8);
      local_498 = (undefined1)uVar4;
      recovered_10002560(local_497,&local_214,uVar4);
      if (*(code **)((int)context + 8) == (code *)0x0) {
        format = str_1000dc5b;
      }
      else {
        cVar2 = (**(code **)((int)context + 8))
                          (*(undefined4 *)context,&local_49c,local_640 + 0x83,error,capacity);
        if (cVar2 == '\0') {
          return 0;
        }
        iVar6 = Ram00280800;
        if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
            ((uVar7 = Ram00280808, 0xb < uVar7 &&
             ((uVar7 = Ram00280808, 0x4f < uVar7 &&
              (pcVar1 = (code *)UINT_0028084c, pcVar1 != (code *)0x0)))))) &&
           (in_ECX = (byte *)(*pcVar1)(0x4100), in_ECX != (byte *)0x0)) {
          local_49c = local_49c & 0xff00;
          bVar3 = recovered_1000b980(context,(void *)0x0,(byte *)&local_49c,in_ECX,0x4100,&local_64c
                                     ,error,capacity);
          if (bVar3 != 0) {
            if ((char)local_49c == '\x16') {
              uVar5 = recovered_10008cd0((char *)in_ECX,local_64c,&local_5dc,error,capacity);
              if ((char)uVar5 != '\0') {
                recovered_100089d0(local_648,in_ECX,local_64c);
                recovered_10008c80(in_ECX);
                recovered_10008eb0(local_63c,local_4bc,&local_5dc);
                recovered_100027f0(local_234,0,0x20);
                recovered_1000a8a0(local_234,local_234,local_254);
                recovered_1000a930(local_254,str_1000dc05,(void *)0x0,local_274);
                recovered_1000a8a0(local_274,local_63c,local_5fc);
                puVar8 = local_648;
                puVar9 = &local_49c;
                for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(undefined4 *)puVar9 = *puVar8;
                  puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
                  puVar9 = puVar9 + ((uint)bVar10 * -2 + 1) * 2;
                }
                recovered_1000c860(&local_49c,local_61c);
                recovered_1000c940(local_5fc,str_1000dc0d,local_61c,0x20,&local_49c,0x20);
                recovered_1000c940(local_5fc,str_1000dc1a,local_61c,0x20,local_294,0x20);
                recovered_1000a9d0((void *)((int)context + 0x100),&local_49c);
                recovered_1000a9d0((void *)((int)context + 0x134),local_294);
                *(undefined1 *)((int)context + 500) = 1;
                uVar5 = recovered_1000aa50((int)context,local_294,local_5fc,&local_49c,error,
                                           capacity);
                if ((char)uVar5 == '\0') {
                  return 0;
                }
                uVar5 = 0;
                if ((*(code **)((int)context + 0x10) == (code *)0x0) ||
                   (uVar5 = (**(code **)((int)context + 0x10))
                                      (*(undefined4 *)context,local_644,(int)context + 0x1d0,
                                       *(undefined1 *)((int)context + 0x1f6),error,capacity),
                   (char)uVar5 != '\0')) {
                  return CONCAT31((int3)((uint)uVar5 >> 8),1);
                }
                return 0;
              }
            }
            else {
              recovered_10005310(error,capacity,str_1000dc7d);
            }
          }
          recovered_10008c80(in_ECX);
          return 0;
        }
        format = str_1000db33;
      }
    }
  }
  recovered_10005310(error,capacity,format);
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000d940
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef str_1000db33
#undef str_1000dbcd
#undef str_1000dbe8
#undef str_1000dc05
#undef str_1000dc0d
#undef str_1000dc1a
#undef str_1000dc5b
#undef str_1000dc7d
#undef local_1ea
#undef local_1e8
#undef local_1e7
#undef local_1e6
#undef local_1e5
#undef uStack_493
#undef auStack_48f
#undef uStack_48c
#undef auStack_488
#undef uStack_484
#undef auStack_480
#undef uStack_472
#undef auStack_46e
#undef format
#undef local_64c
#undef local_648
#undef local_644
#undef local_640
#undef local_63c
#undef local_61c
#undef local_5fc
#undef local_5dc
#undef local_5d8
#undef local_5d4
#undef local_5d0
#undef local_4dc
#undef local_4bc
#undef local_49c
#undef local_49a
#undef local_499
#undef local_498
#undef local_497
#undef local_294
#undef local_274
#undef local_254
#undef local_234
#undef local_214
#undef local_213
#undef local_212
#undef local_211
#undef local_210
#undef local_20e
#undef local_1ee

#undef DAT_1000d960
#define DAT_1000d960 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x104U)))
#define local_16c (*(uint *)(pf_stack_frame + 20))
#define local_168 (*(uint *)(pf_stack_frame + 24))
#define local_164 (*(uint *)(pf_stack_frame + 28))
#define local_160 (*(uint *)(pf_stack_frame + 32))
#define local_148 (*(int * *)(pf_stack_frame + 56))
#define local_144 (*(int *)(pf_stack_frame + 60))
#define local_114 (*(uint (*)[69])(pf_stack_frame + 108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089d0
 */

void recovered_100089d0(void *context,void *data,ulong size)

{
  unsigned char pf_stack_frame[416] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  if ((context != (void *)0x0) && (data != (void *)0x0 || size == 0)) {
    puVar1 = (uint *)((int)context + 0x20);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 + size;
    *(int *)((int)context + 0x24) = *(int *)((int)context + 0x24) + (uint)CARRY4(uVar9,size);
    if (size != 0) {
      iVar4 = *(int *)((int)context + 0x68);
      do {
        uVar9 = 0x40U - iVar4;
        if (size <= 0x40U - iVar4) {
          uVar9 = size;
        }
        recovered_10002560((void *)((int)context + iVar4 + 0x28),data,uVar9);
        iVar4 = *(int *)((int)context + 0x68) + uVar9;
        *(int *)((int)context + 0x68) = iVar4;
        if (iVar4 == 0x40) {
          iVar4 = -0x40;
          do {
            uVar7 = *(uint *)((int)context + iVar4 + 0x68);
            *(uint *)((int)local_114 + iVar4 + 0x40) =
                 uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
            iVar4 = iVar4 + 4;
          } while (iVar4 != 0);
          iVar4 = -0xc0;
          uVar7 = local_114[0];
          do {
            uVar5 = *(uint *)((int)local_114 + iVar4 + 0xc4);
            uVar2 = *(uint *)((int)local_114 + iVar4 + 0xf8);
            *(uint *)((int)local_114 + iVar4 + 0x100) =
                 uVar7 + *(int *)((int)local_114 + iVar4 + 0xe4) +
                 (uVar5 >> 3 ^ (uVar5 << 0xe | uVar5 >> 0x12) ^ (uVar5 << 0x19 | uVar5 >> 7)) +
                 (uVar2 >> 10 ^ (uVar2 << 0xd | uVar2 >> 0x13) ^ (uVar2 << 0xf | uVar2 >> 0x11));
            iVar4 = iVar4 + 4;
            uVar7 = uVar5;
          } while (iVar4 != 0);
          local_144 = -0x100;
          local_148 = &DAT_1000d960;
          uVar5 = *(uint *)((int)context + 0x1c);
          uVar7 = *(uint *)((int)context + 0x10);
          uVar2 = *(uint *)((int)context + 0x18);
          uVar11 = *(uint *)context;
          local_16c = *(uint *)((int)context + 0xc);
          local_168 = *(uint *)((int)context + 8);
          uVar10 = *(uint *)((int)context + 4);
          uVar6 = *(uint *)((int)context + 0x14);
          do {
            local_160 = uVar6;
            local_164 = uVar10;
            uVar10 = uVar11;
            uVar8 = uVar2;
            uVar6 = uVar7;
            uVar3 = local_168;
            uVar7 = local_16c;
            local_16c = local_168;
            local_168 = local_164;
            iVar4 = ((local_160 ^ uVar8) & uVar6 ^ uVar8) +
                    ((uVar6 << 7 | uVar6 >> 0x19) ^
                    (uVar6 << 0x15 | uVar6 >> 0xb) ^ (uVar6 << 0x1a | uVar6 >> 6)) + uVar5 +
                    *local_148 + *(int *)((int)local_114 + local_144 + 0x100);
            uVar7 = uVar7 + iVar4;
            uVar11 = (uVar3 & local_164 ^ (uVar3 ^ local_164) & uVar10) +
                     ((uVar10 << 10 | uVar10 >> 0x16) ^
                     (uVar10 << 0x13 | uVar10 >> 0xd) ^ (uVar10 << 0x1e | uVar10 >> 2)) + iVar4;
            local_148 = local_148 + 1;
            local_144 = local_144 + 4;
            uVar5 = uVar8;
            uVar2 = local_160;
          } while (local_144 != 0);
          *(uint *)context = uVar11 + *(uint *)context;
          *(uint *)((int)context + 4) = uVar10 + *(uint *)((int)context + 4);
          *(uint *)((int)context + 8) = local_164 + *(uint *)((int)context + 8);
          *(uint *)((int)context + 0xc) = uVar3 + *(uint *)((int)context + 0xc);
          *(uint *)((int)context + 0x10) = uVar7 + *(uint *)((int)context + 0x10);
          *(uint *)((int)context + 0x14) = uVar6 + *(uint *)((int)context + 0x14);
          *(uint *)((int)context + 0x18) = local_160 + *(uint *)((int)context + 0x18);
          *(uint *)((int)context + 0x1c) = uVar8 + *(uint *)((int)context + 0x1c);
          *(undefined4 *)((int)context + 0x68) = 0;
          iVar4 = 0;
        }
        data = (void *)((int)data + uVar9);
        size = size - uVar9;
      } while (size != 0);
    }
  }
  return;
}

#undef DAT_1000d960
#undef local_16c
#undef local_168
#undef local_164
#undef local_160
#undef local_148
#undef local_144
#undef local_114

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
 * Address: 0x10008c80
 */

void recovered_10008c80(void *pointer)

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

#undef str_1000dc9b
#define str_1000dc9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43fU)))
#undef str_1000dcb4
#define str_1000dcb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x458U)))
#undef str_1000dcce
#define str_1000dcce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x472U)))
#undef str_1000dcea
#define str_1000dcea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48eU)))
#undef str_1000dd04
#define str_1000dd04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a8U)))
#undef str_1000dd30
#define str_1000dd30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#undef str_1000dd49
#define str_1000dd49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4edU)))
#undef str_1000dd62
#define str_1000dd62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x506U)))
#undef str_1000dd78
#define str_1000dd78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51cU)))
#define local_1c (*(char * *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cd0
 */

undefined4 recovered_10008cd0(char *in_ECX,uint in_EDX,void *param_3,char *param_4,ulong param_5)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;

  local_1c = str_1000dc9b;
  if ((3 < in_EDX) && (*in_ECX == '\x02')) {
    uVar4 = (uint)(byte)in_ECX[2] << 8 | (uint)(byte)in_ECX[1] << 0x10;
    if (uVar4 + (byte)in_ECX[3] < 0x26 || in_EDX < (byte)in_ECX[3] + 4 + uVar4) {
      local_1c = str_1000dcb4;
    }
    else {
      local_1c = str_1000dcce;
      if ((in_ECX[4] == '\x03') && (in_ECX[5] == '\x03')) {
        uVar4 = (uint)(byte)in_ECX[0x26];
        if (in_EDX < uVar4 + 0x2b) {
          local_1c = str_1000dcea;
        }
        else if ((ushort)(*(ushort *)(in_ECX + uVar4 + 0x27) << 8 |
                         *(ushort *)(in_ECX + uVar4 + 0x27) >> 8) == 0x1303) {
          local_1c = str_1000dd30;
          if ((in_ECX[uVar4 + 0x29] == '\0') && (uVar7 = uVar4 + 0x2c, uVar7 <= in_EDX)) {
            uVar5 = (ushort)(*(ushort *)(in_ECX + uVar4 + 0x2a) << 8 |
                            *(ushort *)(in_ECX + uVar4 + 0x2a) >> 8) + uVar7;
            if (in_EDX < uVar5) {
              local_1c = str_1000dd49;
            }
            else {
              uVar4 = uVar4 + 0x30;
              local_1c = str_1000dd78;
              if (uVar4 <= uVar5) {
                bVar1 = 0;
                local_1c = str_1000dd62;
                bVar8 = false;
                do {
                  uVar3 = *(ushort *)(in_ECX + uVar7 + 2) << 8 |
                          *(ushort *)(in_ECX + uVar7 + 2) >> 8;
                  uVar2 = uVar3 + uVar4;
                  if (uVar5 < uVar2) goto LAB_10008d99;
                  uVar6 = *(ushort *)(in_ECX + uVar7) << 8 | *(ushort *)(in_ECX + uVar7) >> 8;
                  if ((uVar6 == 0x2b) && (1 < uVar3)) {
                    bVar8 = (ushort)(*(ushort *)(in_ECX + uVar4) << 8 |
                                    *(ushort *)(in_ECX + uVar4) >> 8) == 0x304;
                  }
                  else if ((((uVar6 == 0x33) && (0x23 < uVar3)) &&
                           ((ushort)(*(ushort *)(in_ECX + uVar4) << 8 |
                                    *(ushort *)(in_ECX + uVar4) >> 8) == 0x1d)) &&
                          ((ushort)(*(ushort *)(in_ECX + uVar4 + 2) << 8 |
                                   *(ushort *)(in_ECX + uVar4 + 2) >> 8) == 0x20)) {
                    recovered_10002560(param_3,in_ECX + uVar4 + 4,0x20);
                    bVar1 = 1;
                  }
                  uVar4 = uVar2 + 4;
                  uVar7 = uVar2;
                } while (uVar4 <= uVar5);
                local_1c = str_1000dd78;
                if ((bool)(bVar8 & bVar1)) {
                  return CONCAT31((int3)(uVar4 >> 8),1);
                }
              }
            }
          }
        }
        else {
          local_1c = str_1000dd04;
        }
      }
    }
  }
LAB_10008d99:
  recovered_10005310(param_4,param_5,local_1c);
  return 0;
}

#undef str_1000dc9b
#undef str_1000dcb4
#undef str_1000dcce
#undef str_1000dcea
#undef str_1000dd04
#undef str_1000dd30
#undef str_1000dd49
#undef str_1000dd62
#undef str_1000dd78
#undef local_1c

/* Recovered X25519 over the reference's seventeen radix-2^15 limbs.
 * Pooka's Free Software License. */
typedef struct {uint32_t limb[17];} pf_tls_field;
static pf_tls_field pf_tls_reduce(uint64_t value[17]){
 for(unsigned pass=0;pass<4;++pass){
  uint64_t carry=0;
  for(unsigned i=0;i<17;++i){uint64_t word=value[i]+carry;value[i]=word&32767;carry=word>>15;}
  value[0]+=19*carry;
 }
 pf_tls_field out;
 for(unsigned i=0;i<17;++i)out.limb[i]=(uint32_t)value[i];
 unsigned top=1;for(unsigned i=1;i<17;++i)top&=out.limb[i]==32767;
 if(top&&out.limb[0]>=32749){out.limb[0]-=32749;for(unsigned i=1;i<17;++i)out.limb[i]=0;}
 return out;
}
static pf_tls_field pf_tls_add(pf_tls_field a,pf_tls_field b){
 uint64_t words[17];for(unsigned i=0;i<17;++i)words[i]=(uint64_t)a.limb[i]+b.limb[i];return pf_tls_reduce(words);
}
static pf_tls_field pf_tls_sub(pf_tls_field a,pf_tls_field b){
 uint64_t words[17];for(unsigned i=0;i<17;++i)words[i]=(uint64_t)a.limb[i]+2*(i?32767:32749)-b.limb[i];return pf_tls_reduce(words);
}
static pf_tls_field pf_tls_mul(pf_tls_field a,pf_tls_field b){
 uint64_t words[34]={0};
 for(unsigned i=0;i<17;++i)for(unsigned j=0;j<17;++j)words[i+j]+=(uint64_t)a.limb[i]*b.limb[j];
 for(unsigned i=33;i>16;--i)words[i-17]+=19*words[i];
 return pf_tls_reduce(words);
}
static void pf_tls_swap(pf_tls_field *a,pf_tls_field *b,unsigned bit){
 uint32_t mask=0U-bit;for(unsigned i=0;i<17;++i){uint32_t change=mask&(a->limb[i]^b->limb[i]);a->limb[i]^=change;b->limb[i]^=change;}
}
void recovered_10008eb0(void *output,void *scalar,void *point){
 if(!output||!scalar||!point)return;
 uint8_t key[32];for(unsigned i=0;i<32;++i)key[i]=((uint8_t *)scalar)[i];key[0]&=248;key[31]=(key[31]&127)|64;
 pf_tls_field x1={{0}},x2={{1}},z2={{0}},x3,z3={{1}},a24={{121665&32767,121665>>15}};
 for(unsigned i=0;i<255;++i)x1.limb[i/15]|=(uint32_t)((((uint8_t *)point)[i/8]>>(i&7))&1)<<(i%15);
 x3=x1;unsigned previous=0;
 for(int i=254;i>=0;--i){
  unsigned bit=(key[i/8]>>(i&7))&1;pf_tls_swap(&x2,&x3,previous^bit);pf_tls_swap(&z2,&z3,previous^bit);previous=bit;
  pf_tls_field a=pf_tls_add(x2,z2),b=pf_tls_sub(x2,z2),aa=pf_tls_mul(a,a),bb=pf_tls_mul(b,b),e=pf_tls_sub(aa,bb);
  pf_tls_field c=pf_tls_add(x3,z3),d=pf_tls_sub(x3,z3),da=pf_tls_mul(d,a),cb=pf_tls_mul(c,b);
  pf_tls_field sum=pf_tls_add(da,cb),difference=pf_tls_sub(da,cb);
  x3=pf_tls_mul(sum,sum);z3=pf_tls_mul(x1,pf_tls_mul(difference,difference));x2=pf_tls_mul(aa,bb);z2=pf_tls_mul(e,pf_tls_add(aa,pf_tls_mul(a24,e)));
 }
 pf_tls_swap(&x2,&x3,previous);pf_tls_swap(&z2,&z3,previous);
 pf_tls_field inverse={{1}};
 for(int bit=254;bit>=0;--bit){inverse=pf_tls_mul(inverse,inverse);if(bit!=4&&bit!=2)inverse=pf_tls_mul(inverse,z2);}
 pf_tls_field result=pf_tls_mul(x2,inverse);
 for(unsigned i=0;i<32;++i)((uint8_t *)output)[i]=0;
 for(unsigned i=0;i<255;++i)((uint8_t *)output)[i/8]|=(uint8_t)(((result.limb[i/15]>>(i%15))&1)<<(i&7));
}


#define local_12c (*(undefined1 (*)[300])(pf_stack_frame + 20))
#define local_10c (*(undefined1 (*)[268])(pf_stack_frame + 52))
#define local_ec (*(undefined1 (*)[236])(pf_stack_frame + 84))
#define local_80 (*(undefined1 (*)[128])(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8a0
 */

void recovered_1000a8a0(void *salt,void *input,void *output)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};


  if (salt == (void *)0x0) {
    salt = local_12c;
    recovered_100027f0(salt,0,0x20);
  }
  recovered_1000c720(local_80,local_ec,salt);
  recovered_100089d0(local_80,input,0x20);
  recovered_1000c860(local_80,local_10c);
  recovered_100089d0(local_ec,local_10c,0x20);
  recovered_1000c860(local_ec,output);
  return;
}

#undef local_12c
#undef local_10c
#undef local_ec
#undef local_80

#define local_a0 (*(undefined4 *)(pf_stack_frame + 16))
#define local_9c (*(undefined4 *)(pf_stack_frame + 20))
#define local_98 (*(undefined4 *)(pf_stack_frame + 24))
#define local_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_8c (*(undefined4 *)(pf_stack_frame + 36))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_84 (*(undefined4 *)(pf_stack_frame + 44))
#define local_80 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_38 (*(undefined4 *)(pf_stack_frame + 120))
#define local_34 (*(undefined1 (*)[52])(pf_stack_frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a930
 */

void recovered_1000a930(void *secret,char *label,void *hash,void *output)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  if (hash == (void *)0x0) {
    local_a0 = 0x6a09e667;
    local_9c = 0xbb67ae85;
    local_98 = 0x3c6ef372;
    local_94 = 0xa54ff53a;
    local_90 = 0x510e527f;
    local_8c = 0x9b05688c;
    local_88 = 0x1f83d9ab;
    local_84 = 0x5be0cd19;
    local_38 = 0;
    local_7c = 0;
    local_80 = 0;
    hash = local_34;
    recovered_1000c860(&local_a0,hash);
  }
  recovered_1000c940(secret,label,hash,0x20,output,0x20);
  return;
}

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
#undef local_38
#undef local_34

#undef DAT_1000ddab
#define DAT_1000ddab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54fU)))
#undef DAT_1000ddaf
#define DAT_1000ddaf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x553U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9d0
 */

void recovered_1000a9d0(void *output,void *secret)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (secret != (void *)0x0 && output != (void *)0x0) {
    recovered_100027f0(output,0,0x34);
    recovered_1000c940(secret,&DAT_1000ddab,(void *)0x0,0,output,0x20);
    recovered_1000c940(secret,&DAT_1000ddaf,(void *)0x0,0,(void *)((int)output + 0x20),0xc);
    *(undefined4 *)((int)output + 0x30) = 0;
    *(undefined4 *)((int)output + 0x2c) = 0;
  }
  return;
}

#undef DAT_1000ddab
#undef DAT_1000ddaf

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000ddab
#define DAT_1000ddab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54fU)))
#undef DAT_1000ddaf
#define DAT_1000ddaf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x553U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_1000db33
#define str_1000db33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d7U)))
#undef str_1000dc05
#define str_1000dc05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#undef str_1000ddb2
#define str_1000ddb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x556U)))
#undef str_1000ddc8
#define str_1000ddc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56cU)))
#undef str_1000dde0
#define str_1000dde0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x584U)))
#undef str_1000ddfc
#define str_1000ddfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a0U)))
#undef str_1000de05
#define str_1000de05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a9U)))
#undef str_1000de26
#define str_1000de26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5caU)))
#undef str_1000de33
#define str_1000de33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d7U)))
#define local_c0 (*(undefined1 (*)[192])(pf_stack_frame + 528))
#define local_54 (*(undefined1 (*)[84])(pf_stack_frame + 636))
#define local_34 (*(undefined1 (*)[52])(pf_stack_frame + 668))
#define local_2bc (*(uint *)(pf_stack_frame + 20))
#define local_290 (*(undefined4 *)(pf_stack_frame + 64))
#define local_28c (*(undefined4 *)(pf_stack_frame + 68))
#define local_288 (*(undefined4 *)(pf_stack_frame + 72))
#define local_284 (*(undefined4 *)(pf_stack_frame + 76))
#define local_280 (*(undefined4 *)(pf_stack_frame + 80))
#define local_27c (*(undefined4 *)(pf_stack_frame + 84))
#define local_278 (*(undefined4 *)(pf_stack_frame + 88))
#define local_274 (*(undefined4 *)(pf_stack_frame + 92))
#define local_270 (*(undefined4 *)(pf_stack_frame + 96))
#define local_26c (*(undefined4 *)(pf_stack_frame + 100))
#define local_228 (*(undefined4 *)(pf_stack_frame + 168))
#define local_224 (*(byte (*)[548])(pf_stack_frame + 172))
#define local_204 (*(uint (*)[129])(pf_stack_frame + 204))
#define local_1e4 (*(undefined4 *)(pf_stack_frame + 236))
#define local_1e0 (*(undefined1 (*)[480])(pf_stack_frame + 240))
#define local_1c0 (*(undefined1 (*)[448])(pf_stack_frame + 272))
#define local_1a0 (*(undefined1 (*)[416])(pf_stack_frame + 304))
#define local_180 (*(undefined1 (*)[384])(pf_stack_frame + 336))
#define local_160 (*(undefined1 (*)[352])(pf_stack_frame + 368))
#define local_140 (*(undefined1 (*)[320])(pf_stack_frame + 400))
#define local_120 (*(undefined1 (*)[288])(pf_stack_frame + 432))
#define local_100 (*(byte (*)[256])(pf_stack_frame + 464))
#define local_e0 (*(byte (*)[224])(pf_stack_frame + 496))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa50
 */

/* WARNING: Removing unreachable block (ram,0x1000ac75) */
/* WARNING: Type propagation algorithm not settling */

undefined4
recovered_1000aa50(int in_ECX,void *in_EDX,void *param_3,void *param_4,char *param_5,ulong param_6)

{
  unsigned char pf_stack_frame[752] __attribute__((aligned(16))) = {0};

  undefined4 *context;
  void *data;
  code *pcVar1;
  byte bVar2;
  void *destination;
  uint uVar3;
  undefined4 uVar4;
  char *format;
  int iVar5;
  int iVar6;
  uint size;
  byte *source;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  byte bVar11;

  bVar11 = 0;
  iVar6 = Ram00280800;
  source = (byte *)0x0;
  if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
      (uVar7 = Ram00280808, 0xb < uVar7)) &&
     ((uVar7 = Ram00280808, 0x4f < uVar7 && (pcVar1 = (code *)UINT_0028084c, pcVar1 != (code *)0x0))
     )) {
    source = (byte *)(*pcVar1)(0x4100);
  }
  iVar6 = Ram00280800;
  if (((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
     ((uVar7 = Ram00280808, 0xb < uVar7 &&
      ((uVar7 = Ram00280808, 0x4f < uVar7 && (pcVar1 = (code *)UINT_0028084c, pcVar1 != (code *)0x0)
       ))))) {
    destination = (void *)(*pcVar1)(0x8000);
    bVar10 = destination != (void *)0x0;
    if (source != (byte *)0x0 && bVar10) {
      local_224[0] = 0;
      local_204[0] = 0;
      bVar2 = recovered_1000b980((undefined4 *)in_ECX,(void *)(in_ECX + 0x134),local_224,source,
                                 0x4100,local_204,param_5,param_6);
      if (bVar2 == 0) {
LAB_1000b40d:
        iVar6 = Ram00280800;
        if (((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
           ((uVar7 = Ram00280808, 0xb < uVar7 && (uVar7 = Ram00280808, 0x53 < uVar7)))) {
          pcVar1 = (code *)UINT_00280850;
joined_r0x1000b51f:
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(source);
          }
        }
LAB_1000b448:
        iVar6 = Ram00280800;
        if (iVar6 != 0x50414d57) {
          return 0;
        }
        iVar6 = Ram00280804;
        if (iVar6 == 0) {
          return 0;
        }
        uVar7 = Ram00280808;
        if (uVar7 < 0xc) {
          return 0;
        }
        uVar7 = Ram00280808;
        if (uVar7 < 0x54) {
          return 0;
        }
        pcVar1 = (code *)UINT_00280850;
        if (pcVar1 == (code *)0x0) {
          return 0;
        }
        (*pcVar1)(destination);
        return 0;
      }
      context = (undefined4 *)(in_ECX + 0x94);
      local_2bc = 0;
LAB_1000ac55:
      if (local_224[0] != 0x16) {
        if (local_224[0] == 0x15) {
          format = str_1000ddb2;
          goto LAB_1000b3fe;
        }
        goto LAB_1000ac09;
      }
      if (local_204[0] <= 0x8000 - local_2bc) {
        recovered_10002560((void *)((int)destination + local_2bc),source,local_204[0]);
        local_2bc = local_2bc + local_204[0];
        if (3 < local_2bc) {
          iVar6 = 0;
LAB_1000aceb:
          uVar7 = (uint)*(byte *)((int)destination + iVar6 + 3) |
                  (uint)*(byte *)((int)destination + iVar6 + 2) << 8 |
                  (uint)*(byte *)((int)destination + iVar6 + 1) << 0x10;
          if (iVar6 + 4 + uVar7 <= local_2bc) {
            data = (void *)((int)destination + iVar6);
            if (*(char *)((int)destination + iVar6) != '\x14') goto code_r0x1000ad25;
            if (uVar7 == 0x20) {
              puVar8 = context;
              puVar9 = &local_290;
              for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *puVar8;
                puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
              }
              recovered_1000c860(&local_290,local_e0);
              recovered_1000c940(in_EDX,str_1000ddfc,(void *)0x0,0,local_34,0x20);
              recovered_1000c720(&local_290,local_c0,local_34);
              recovered_100089d0(&local_290,local_e0,0x20);
              recovered_1000c860(&local_290,&local_1e4);
              recovered_100089d0(local_c0,&local_1e4,0x20);
              recovered_1000c860(local_c0,local_100);
              iVar5 = -0x20;
              bVar2 = 0;
              do {
                bVar2 = bVar2 | *(byte *)((int)data + iVar5 + 0x24) ^ local_e0[iVar5];
                iVar5 = iVar5 + 1;
              } while (iVar5 != 0);
              if (bVar2 == 0) {
                recovered_100089d0(context,data,0x24);
                iVar6 = iVar6 + 0x24;
                bVar10 = true;
                goto LAB_1000af51;
              }
              recovered_10005310(param_5,param_6,str_1000de05);
              iVar6 = Ram00280800;
            }
            else {
              recovered_10005310(param_5,param_6,str_1000dde0);
              iVar6 = Ram00280800;
            }
            if (((iVar6 != 0x50414d57) || (iVar6 = Ram00280804, iVar6 == 0)) ||
               ((uVar7 = Ram00280808, uVar7 < 0xc || (uVar7 = Ram00280808, uVar7 < 0x54))))
            goto LAB_1000b448;
            pcVar1 = (code *)UINT_00280850;
            goto joined_r0x1000b51f;
          }
          bVar10 = false;
          goto LAB_1000af51;
        }
        goto LAB_1000ac09;
      }
      format = str_1000ddc8;
LAB_1000b3fe:
      recovered_10005310(param_5,param_6,format);
      goto LAB_1000b40d;
    }
    if (source != (byte *)0x0) goto LAB_1000abaa;
  }
  else {
    destination = (void *)0x0;
    bVar10 = false;
    if (source == (byte *)0x0) goto LAB_1000b3be;
LAB_1000abaa:
    iVar6 = Ram00280800;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
        (uVar7 = Ram00280808, 0xb < uVar7)) &&
       ((uVar7 = Ram00280808, 0x53 < uVar7 &&
        (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)))) {
      (*pcVar1)(source);
    }
  }
  if (((bVar10) && (iVar6 = Ram00280800, iVar6 == 0x50414d57)) &&
     ((iVar6 = Ram00280804, iVar6 != 0 &&
      (((uVar7 = Ram00280808, 0xb < uVar7 && (uVar7 = Ram00280808, 0x53 < uVar7)) &&
       (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)))))) {
    (*pcVar1)(destination);
  }
LAB_1000b3be:
  recovered_10005310(param_5,param_6,str_1000db33);
  return 0;
code_r0x1000ad25:
  if (((((*(char *)((int)destination + iVar6) == '\v') && (6 < uVar7)) &&
       (uVar3 = (uint)*(byte *)((int)data + 4), uVar3 + 4 <= uVar7)) &&
      ((*(char *)((int)data + uVar3 + 7) != '\0' ||
        (*(char *)((int)data + uVar3 + 6) != '\0' || *(char *)((int)data + uVar3 + 5) != '\0') &&
       (uVar3 + 7 <= uVar7)))) &&
     ((size = (uint)*(byte *)((int)data + uVar3 + 10) |
              (uint)*(byte *)((int)data + uVar3 + 9) << 8 |
              (uint)*(byte *)((int)data + uVar3 + 8) << 0x10, size != 0 &&
      (size + uVar3 + 7 <= uVar7)))) {
    local_290 = 0x6a09e667;
    local_28c = 0xbb67ae85;
    local_288 = 0x3c6ef372;
    local_284 = 0xa54ff53a;
    local_280 = 0x510e527f;
    local_27c = 0x9b05688c;
    local_278 = 0x1f83d9ab;
    local_274 = 0x5be0cd19;
    local_26c = 0;
    local_270 = 0;
    local_228 = 0;
    recovered_100089d0(&local_290,(void *)((int)data + uVar3 + 0xb),size);
    recovered_1000c860(&local_290,(void *)(in_ECX + 0x1d0));
    *(undefined1 *)(in_ECX + 0x1f6) = 1;
  }
  recovered_100089d0(context,data,uVar7 + 4);
  iVar5 = uVar7 + 4 + iVar6;
  uVar7 = uVar7 + 8 + iVar6;
  iVar6 = iVar5;
  if (local_2bc < uVar7) goto LAB_1000af4d;
  goto LAB_1000aceb;
LAB_1000af4d:
  bVar10 = false;
LAB_1000af51:
  if (iVar6 != 0) {
    local_2bc = local_2bc - iVar6;
    if (local_2bc == 0) {
      local_2bc = 0;
    }
    else {
      recovered_10002620(destination,(void *)(iVar6 + (int)destination),local_2bc);
    }
  }
  if (bVar10) {
    puVar8 = context;
    puVar9 = &local_290;
    for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    recovered_1000c860(&local_290,local_224);
    local_290 = 0x6a09e667;
    local_28c = 0xbb67ae85;
    local_288 = 0x3c6ef372;
    local_284 = 0xa54ff53a;
    local_280 = 0x510e527f;
    local_27c = 0x9b05688c;
    local_278 = 0x1f83d9ab;
    local_274 = 0x5be0cd19;
    local_228 = 0;
    local_26c = 0;
    local_270 = 0;
    recovered_1000c860(&local_290,local_c0);
    recovered_1000c940(param_3,str_1000dc05,local_c0,0x20,local_120,0x20);
    recovered_100027f0(local_180,0,0x20);
    recovered_1000c720(&local_290,local_c0,local_120);
    recovered_100089d0(&local_290,local_180,0x20);
    recovered_1000c860(&local_290,&local_1e4);
    recovered_100089d0(local_c0,&local_1e4,0x20);
    recovered_1000c860(local_c0,local_140);
    recovered_1000c940(local_140,str_1000de26,local_224,0x20,local_1c0,0x20);
    recovered_1000c940(local_140,str_1000de33,local_224,0x20,local_160,0x20);
    recovered_100027f0((void *)(in_ECX + 0x168),0,0x34);
    recovered_1000c940(local_1c0,&DAT_1000ddab,(void *)0x0,0,(void *)(in_ECX + 0x168),0x20);
    recovered_1000c940(local_1c0,&DAT_1000ddaf,(void *)0x0,0,(void *)(in_ECX + 0x188),0xc);
    *(undefined4 *)(in_ECX + 0x198) = 0;
    *(undefined4 *)(in_ECX + 0x194) = 0;
    recovered_100027f0((void *)(in_ECX + 0x19c),0,0x34);
    recovered_1000c940(local_160,&DAT_1000ddab,(void *)0x0,0,(void *)(in_ECX + 0x19c),0x20);
    recovered_1000c940(local_160,&DAT_1000ddaf,(void *)0x0,0,(void *)(in_ECX + 0x1bc),0xc);
    *(undefined4 *)(in_ECX + 0x1cc) = 0;
    *(undefined4 *)(in_ECX + 0x1c8) = 0;
    *(undefined1 *)(in_ECX + 0x1f5) = 1;
    local_1e4 = 0x20000014;
    puVar8 = context;
    puVar9 = &local_290;
    for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    recovered_1000c860(&local_290,local_1a0);
    recovered_1000c940(param_4,str_1000ddfc,(void *)0x0,0,local_54,0x20);
    recovered_1000c720(&local_290,local_c0,local_54);
    recovered_100089d0(&local_290,local_1a0,0x20);
    recovered_1000c860(&local_290,local_204);
    recovered_100089d0(local_c0,local_204,0x20);
    recovered_1000c860(local_c0,local_1e0);
    uVar4 = recovered_1000b5c0((undefined4 *)in_ECX,(void *)(in_ECX + 0x100),0x16,&local_1e4,0x24,
                               param_5,param_6);
    if ((char)uVar4 != '\0') {
      recovered_100089d0(context,&local_1e4,0x24);
    }
    iVar6 = Ram00280800;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
        (uVar7 = Ram00280808, 0xb < uVar7)) &&
       ((uVar7 = Ram00280808, 0x53 < uVar7 &&
        (pcVar1 = (code *)UINT_00280850, pcVar1 != (code *)0x0)))) {
      (*pcVar1)(source);
    }
    iVar6 = Ram00280800;
    if (iVar6 != 0x50414d57) {
      return uVar4;
    }
    iVar6 = Ram00280804;
    if (iVar6 == 0) {
      return uVar4;
    }
    uVar7 = Ram00280808;
    if (uVar7 < 0xc) {
      return uVar4;
    }
    uVar7 = Ram00280808;
    if (uVar7 < 0x54) {
      return uVar4;
    }
    pcVar1 = (code *)UINT_00280850;
    if (pcVar1 == (code *)0x0) {
      return uVar4;
    }
    (*pcVar1)(destination);
    return uVar4;
  }
LAB_1000ac09:
  local_224[0] = 0;
  local_204[0] = 0;
  bVar2 = recovered_1000b980((undefined4 *)in_ECX,(void *)(in_ECX + 0x134),local_224,source,0x4100,
                             local_204,param_5,param_6);
  if (bVar2 == 0) goto LAB_1000b40d;
  goto LAB_1000ac55;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000ddab
#undef DAT_1000ddaf
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef str_1000db33
#undef str_1000dc05
#undef str_1000ddb2
#undef str_1000ddc8
#undef str_1000dde0
#undef str_1000ddfc
#undef str_1000de05
#undef str_1000de26
#undef str_1000de33
#undef local_c0
#undef local_54
#undef local_34
#undef local_2bc
#undef local_290
#undef local_28c
#undef local_288
#undef local_284
#undef local_280
#undef local_27c
#undef local_278
#undef local_274
#undef local_270
#undef local_26c
#undef local_228
#undef local_224
#undef local_204
#undef local_1e4
#undef local_1e0
#undef local_1c0
#undef local_1a0
#undef local_180
#undef local_160
#undef local_140
#undef local_120
#undef local_100
#undef local_e0

#undef str_1000dc27
#define str_1000dc27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b540
 */

int recovered_1000b540(void *context,void *data,ulong size,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((context == (void *)0x0) || (*(char *)((int)context + 0x1f5) != '\x01')) ||
     (data == (void *)0x0 && size != 0)) {
    recovered_10005310(error,capacity,str_1000dc27);
    iVar1 = 0;
  }
  else {
    iVar1 = recovered_1000b5c0(context,(void *)((int)context + 0x168),0x17,data,size,error,capacity)
    ;
  }
  return iVar1;
}

#undef str_1000dc27

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
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_1000db33
#define str_1000db33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d7U)))
#define local_70 (*(undefined1 (*)[112])(pf_stack_frame + 16))
#define local_6c (*(byte *)(pf_stack_frame + 20))
#define local_6b (*(byte *)(pf_stack_frame + 21))
#define local_6a (*(byte *)(pf_stack_frame + 22))
#define local_69 (*(byte *)(pf_stack_frame + 23))
#define local_68 (*(byte *)(pf_stack_frame + 24))
#define local_67 (*(byte *)(pf_stack_frame + 25))
#define local_66 (*(byte *)(pf_stack_frame + 26))
#define local_65 (*(byte *)(pf_stack_frame + 27))
#define local_64 (*(int *)(pf_stack_frame + 28))
#define local_60 (*(uint *)(pf_stack_frame + 32))
#define local_5c (*(int *)(pf_stack_frame + 36))
#define local_58 (*(undefined4 * *)(pf_stack_frame + 40))
#define local_54 (*(byte (*)[84])(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5c0
 */

undefined4
recovered_1000b5c0(undefined4 *in_ECX,void *in_EDX,undefined1 param_3,void *param_4,ulong param_5,
                  char *param_6,ulong param_7)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined2 *associated;
  void *destination;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;

  if ((in_EDX != (void *)0x0) && (param_4 != (void *)0x0 || param_5 == 0)) {
    iVar8 = Ram00280800;
    if (((iVar8 == 0x50414d57) &&
        (((iVar8 = Ram00280804, iVar8 != 0 && (uVar7 = Ram00280808, 0xb < uVar7)) &&
         (uVar7 = Ram00280808, 0x4f < uVar7)))) &&
       (pcVar4 = (code *)UINT_0028084c, pcVar4 != (code *)0x0)) {
      local_64 = param_5 + 0x16;
      local_58 = in_ECX;
      associated = (undefined2 *)(*pcVar4)(local_64);
      if (associated != (undefined2 *)0x0) {
        local_5c = 0x1000b5d1;
        local_60 = param_5 + 1;
        *associated = 0x317;
        *(undefined1 *)(associated + 1) = 3;
        *(char *)((int)associated + 3) = (char)(param_5 + 0x11 >> 8);
        *(char *)(associated + 2) = (char)(param_5 + 0x11);
        destination = (void *)((int)associated + 5);
        if (param_5 != 0) {
          recovered_10002560(destination,param_4,param_5);
        }
        *(undefined1 *)((int)destination + param_5) = param_3;
        recovered_10002560(local_70,(void *)((int)in_EDX + 0x20),0xc);
        uVar6 = *(undefined4 *)((int)in_EDX + 0x2c);
        uVar3 = *(undefined4 *)((int)in_EDX + 0x30);
        local_65 = local_65 ^ (byte)uVar6;
        local_66 = local_66 ^ (byte)((uint)uVar6 >> 8);
        local_67 = local_67 ^ (byte)((uint)uVar6 >> 0x10);
        local_68 = local_68 ^ (byte)((uint)uVar6 >> 0x18);
        local_69 = local_69 ^ (byte)uVar3;
        local_6a = local_6a ^ (byte)((uint)uVar3 >> 8);
        local_6b = local_6b ^ (byte)((uint)uVar3 >> 0x10);
        local_6c = local_6c ^ (byte)((uint)uVar3 >> 0x18);
        if (local_60 != 0) {
          uVar7 = 1;
          uVar9 = 0;
          do {
            uVar5 = local_60;
            uVar10 = local_60 - uVar9;
            if (0x3f < uVar10) {
              uVar10 = 0x40;
            }
            recovered_1000d4d0(in_EDX,uVar7,local_70,local_54);
            if (uVar5 != uVar9) {
              iVar8 = 0;
              do {
                pbVar2 = (byte *)((int)destination + iVar8 + uVar9);
                *pbVar2 = *pbVar2 ^ local_54[iVar8];
                iVar8 = iVar8 + 1;
              } while (uVar10 + (uVar10 == 0) != iVar8);
            }
            uVar7 = uVar7 + 1;
            uVar9 = uVar9 + uVar10;
          } while (uVar9 < local_60);
        }
        uVar7 = local_60;
        recovered_1000cbf0(in_EDX,local_70,associated,destination,local_60,local_54);
        recovered_10002560((void *)((int)destination + uVar7),local_54,0x10);
        puVar1 = (uint *)((int)in_EDX + 0x2c);
        uVar7 = *puVar1;
        *puVar1 = *puVar1 + 1;
        *(int *)((int)in_EDX + 0x30) = *(int *)((int)in_EDX + 0x30) + (uint)(0xfffffffe < uVar7);
        if ((code *)local_58[2] == (code *)0x0) {
          recovered_10005310(param_6,param_7,(char *)(local_5c + 0x268a));
          uVar6 = 0;
        }
        else {
          uVar6 = (*(code *)local_58[2])(*local_58,associated,local_64,param_6,param_7);
        }
        iVar8 = Ram00280800;
        if (iVar8 != 0x50414d57) {
          return uVar6;
        }
        iVar8 = Ram00280804;
        if (iVar8 == 0) {
          return uVar6;
        }
        uVar7 = Ram00280808;
        if (uVar7 < 0xc) {
          return uVar6;
        }
        uVar7 = Ram00280808;
        if (uVar7 < 0x54) {
          return uVar6;
        }
        pcVar4 = (code *)UINT_00280850;
        if (pcVar4 == (code *)0x0) {
          return uVar6;
        }
        (*pcVar4)(associated);
        return uVar6;
      }
    }
    recovered_10005310(param_6,param_7,str_1000db33);
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef str_1000db33
#undef local_70
#undef local_6c
#undef local_6b
#undef local_6a
#undef local_69
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54

#undef str_1000dc27
#define str_1000dc27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cbU)))
#define local_1d (*(byte *)(pf_stack_frame + 19))
#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b880
 */

int recovered_1000b880(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *format;

  if (read != (ulong *)0x0) {
    *read = 0;
  }
  if ((((context == (void *)0x0) || (size == 0)) || (data == (void *)0x0)) ||
     (*(char *)((int)context + 0x1f5) == '\0')) {
    format = str_1000dc27;
  }
  else {
    local_18 = 0x1000b891;
    do {
      local_1c = 0;
      local_1d = 0;
      bVar1 = recovered_1000b980(context,(void *)((int)context + 0x19c),&local_1d,data,size,
                                 &local_1c,error,capacity);
      if (bVar1 == 0) {
        return 0;
      }
      if (local_1d == 0x17) {
        if (read == (ulong *)0x0) {
          return 1;
        }
        *read = local_1c;
        return 1;
      }
    } while (local_1d != 0x15);
    format = (char *)(local_18 + 0x23b9);
  }
  recovered_10005310(error,capacity,format);
  return 0;
}

#undef str_1000dc27
#undef local_1d
#undef local_1c
#undef local_18

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
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef str_1000db33
#define str_1000db33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d7U)))
#undef str_1000de40
#define str_1000de40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e4U)))
#undef str_1000de5a
#define str_1000de5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5feU)))
#undef str_1000de79
#define str_1000de79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61dU)))
#undef str_1000dea6
#define str_1000dea6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64aU)))
#undef str_1000dee3
#define str_1000dee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x687U)))
#undef str_1000df04
#define str_1000df04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a8U)))
#undef str_1000df19
#define str_1000df19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bdU)))
#undef str_1000df3a
#define str_1000df3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6deU)))
#define local_89 (*(byte *)(pf_stack_frame + 23))
#define local_88 (*(byte *)(pf_stack_frame + 24))
#define local_86 (*(ushort *)(pf_stack_frame + 26))
#define local_84 (*(uint *)(pf_stack_frame + 28))
#define local_80 (*(byte *)(pf_stack_frame + 32))
#define local_7f (*(byte *)(pf_stack_frame + 33))
#define local_7e (*(byte *)(pf_stack_frame + 34))
#define local_7d (*(byte *)(pf_stack_frame + 35))
#define local_7c (*(byte *)(pf_stack_frame + 36))
#define local_7b (*(byte *)(pf_stack_frame + 37))
#define local_7a (*(byte *)(pf_stack_frame + 38))
#define local_79 (*(byte *)(pf_stack_frame + 39))
#define local_78 (*(byte *)(pf_stack_frame + 40))
#define local_77 (*(byte *)(pf_stack_frame + 41))
#define local_76 (*(byte *)(pf_stack_frame + 42))
#define local_75 (*(byte *)(pf_stack_frame + 43))
#define local_74 (*(byte *)(pf_stack_frame + 44))
#define local_73 (*(byte *)(pf_stack_frame + 45))
#define local_72 (*(byte *)(pf_stack_frame + 46))
#define local_71 (*(byte *)(pf_stack_frame + 47))
#define local_70 (*(uint *)(pf_stack_frame + 48))
#define local_6c (*(undefined1 (*)[108])(pf_stack_frame + 52))
#define local_68 (*(byte *)(pf_stack_frame + 56))
#define local_67 (*(byte *)(pf_stack_frame + 57))
#define local_66 (*(byte *)(pf_stack_frame + 58))
#define local_65 (*(byte *)(pf_stack_frame + 59))
#define local_64 (*(byte *)(pf_stack_frame + 60))
#define local_63 (*(byte *)(pf_stack_frame + 61))
#define local_62 (*(byte *)(pf_stack_frame + 62))
#define local_61 (*(byte *)(pf_stack_frame + 63))
#define local_60 (*(uint *)(pf_stack_frame + 64))
#define local_5c (*(void * *)(pf_stack_frame + 68))
#define local_58 (*(uint *)(pf_stack_frame + 72))
#define local_54 (*(byte (*)[84])(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b980
 */

byte recovered_1000b980(undefined4 *in_ECX,void *in_EDX,byte *param_3,byte *param_4,uint param_5,
                       uint *param_6,char *param_7,ulong param_8)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  code *pcVar6;
  byte *ciphertext;
  char *pcVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;

  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (byte *)0x0) {
    pcVar6 = (code *)in_ECX[1];
    if (pcVar6 != (code *)0x0) {
      local_5c = (void *)((int)in_EDX + 0x20);
      do {
        cVar5 = (*pcVar6)(*in_ECX,&local_89,5,param_7,param_8);
        if (cVar5 == '\0') {
          return 0;
        }
        uVar9 = local_86 << 8 | local_86 >> 8;
        if ((ushort)(uVar9 + 0xb7ff) < 0xb800) {
          pcVar7 = str_1000de40;
          goto LAB_1000bfbd;
        }
        uVar11 = (uint)uVar9;
        if (in_EDX == (void *)0x0) {
          if (param_5 < uVar11) {
            pcVar7 = str_1000de5a;
            goto LAB_1000bfbd;
          }
          if ((code *)in_ECX[1] == (code *)0x0) break;
          cVar5 = (*(code *)in_ECX[1])(*in_ECX,param_4,uVar11,param_7,param_8);
          if (cVar5 == '\0') {
            return 0;
          }
          if (local_89 != 0x14) {
            if (local_89 == 0x15) {
              uVar11 = 0;
              if (1 < uVar9) {
                uVar11 = (uint)param_4[1];
              }
              recovered_10005310(param_7,param_8,str_1000de79,(uint)*param_4,uVar11);
              return 0;
            }
            if (param_3 != (byte *)0x0) {
              *param_3 = local_89;
            }
            if (param_6 == (uint *)0x0) {
              return 1;
            }
            *param_6 = uVar11;
            return 1;
          }
        }
        else {
          iVar10 = Ram00280800;
          if (((((iVar10 != 0x50414d57) || (iVar10 = Ram00280804, iVar10 == 0)) ||
               (uVar12 = Ram00280808, uVar12 < 0xc)) ||
              ((uVar12 = Ram00280808, uVar12 < 0x50 ||
               (pcVar6 = (code *)UINT_0028084c, pcVar6 == (code *)0x0)))) ||
             (local_84 = uVar11, ciphertext = (byte *)(*pcVar6)(uVar11), ciphertext == (byte *)0x0))
          {
            pcVar7 = str_1000db33;
            goto LAB_1000bfbd;
          }
          if ((code *)in_ECX[1] == (code *)0x0) {
            recovered_10005310(param_7,param_8,str_1000dee3);
LAB_1000c017:
            iVar10 = Ram00280800;
            if (iVar10 != 0x50414d57) {
              return 0;
            }
            iVar10 = Ram00280804;
            if (iVar10 == 0) {
              return 0;
            }
            uVar11 = Ram00280808;
            if (uVar11 < 0xc) {
              return 0;
            }
            uVar11 = Ram00280808;
            if (uVar11 < 0x54) {
              return 0;
            }
            pcVar6 = (code *)UINT_00280850;
            if (pcVar6 == (code *)0x0) {
              return 0;
            }
            (*pcVar6)(ciphertext);
            return 0;
          }
          cVar5 = (*(code *)in_ECX[1])(*in_ECX,ciphertext,local_84,param_7,param_8);
          if (cVar5 == '\0') goto LAB_1000c017;
          uVar11 = (uint)local_89;
          if (uVar11 == 0x14) {
            iVar10 = Ram00280800;
            if (((iVar10 == 0x50414d57) && (iVar10 = Ram00280804, iVar10 != 0)) &&
               ((uVar11 = Ram00280808, 0xb < uVar11 &&
                ((uVar11 = Ram00280808, 0x53 < uVar11 &&
                 (pcVar6 = (code *)UINT_00280850, pcVar6 != (code *)0x0)))))) {
              (*pcVar6)(ciphertext);
            }
            goto LAB_1000b9f0;
          }
          if (uVar11 != 0x17) {
            if (uVar11 == 0x15) {
              uVar11 = (uint)*ciphertext;
              uVar12 = 0;
              if (1 < uVar9) {
                uVar12 = (uint)ciphertext[1];
              }
              pcVar7 = str_1000de79;
            }
            else {
              uVar12 = (uint)local_88;
              pcVar7 = str_1000dea6;
            }
            recovered_10005310(param_7,param_8,pcVar7,uVar11,uVar12);
            goto LAB_1000c017;
          }
          if (param_6 != (uint *)0x0) {
            *param_6 = 0;
          }
          if (param_3 != (byte *)0x0) {
            *param_3 = 0;
          }
          bVar8 = 1;
          if (0xf < uVar9) {
            uVar11 = local_84 - 0x10;
            if (param_5 < uVar11) {
              pcVar7 = str_1000df04;
            }
            else {
              recovered_10002560(local_6c,local_5c,0xc);
              uVar2 = *(undefined4 *)((int)in_EDX + 0x2c);
              uVar3 = *(undefined4 *)((int)in_EDX + 0x30);
              local_61 = local_61 ^ (byte)uVar2;
              local_62 = local_62 ^ (byte)((uint)uVar2 >> 8);
              local_63 = local_63 ^ (byte)((uint)uVar2 >> 0x10);
              local_64 = local_64 ^ (byte)((uint)uVar2 >> 0x18);
              local_65 = local_65 ^ (byte)uVar3;
              local_66 = local_66 ^ (byte)((uint)uVar3 >> 8);
              local_67 = local_67 ^ (byte)((uint)uVar3 >> 0x10);
              local_68 = local_68 ^ (byte)((uint)uVar3 >> 0x18);
              local_70 = uVar11;
              recovered_1000cbf0(in_EDX,local_6c,&local_89,ciphertext,uVar11,&local_80);
              if (((((((ciphertext[local_70] == local_80) && (ciphertext[local_70 + 1] == local_7f))
                     && (ciphertext[local_70 + 2] == local_7e)) &&
                    ((ciphertext[local_70 + 3] == local_7d && (ciphertext[local_70 + 4] == local_7c)
                     ))) && (((ciphertext[local_70 + 5] == local_7b &&
                              ((ciphertext[local_70 + 6] == local_7a &&
                               (ciphertext[local_70 + 7] == local_79)))) &&
                             (ciphertext[local_70 + 8] == local_78)))) &&
                  (((ciphertext[local_70 + 9] == local_77 && (ciphertext[local_70 + 10] == local_76)
                    ) && (ciphertext[local_70 + 0xb] == local_75)))) &&
                 (((ciphertext[local_70 + 0xc] == local_74 &&
                   (ciphertext[local_70 + 0xd] == local_73)) &&
                  ((ciphertext[local_70 + 0xe] == local_72 &&
                   (ciphertext[local_70 + 0xf] == local_71)))))) {
                if (local_70 == 0) {
                  puVar1 = (uint *)((int)in_EDX + 0x2c);
                  uVar11 = *puVar1;
                  *puVar1 = *puVar1 + 1;
                  *(int *)((int)in_EDX + 0x30) =
                       *(int *)((int)in_EDX + 0x30) + (uint)(0xfffffffe < uVar11);
                  bVar8 = 0;
                }
                else {
                  uVar11 = 1;
                  uVar12 = 0;
                  do {
                    uVar4 = local_70;
                    local_60 = local_70 - uVar12;
                    if (0x3f < local_60) {
                      local_60 = 0x40;
                    }
                    local_58 = uVar11;
                    recovered_1000d4d0(in_EDX,uVar11,local_6c,local_54);
                    if (uVar4 != uVar12) {
                      iVar10 = 0;
                      do {
                        param_4[iVar10 + uVar12] = local_54[iVar10] ^ ciphertext[iVar10 + uVar12];
                        iVar10 = iVar10 + 1;
                      } while (local_60 + (local_60 == 0) != iVar10);
                    }
                    uVar11 = local_58 + 1;
                    uVar12 = uVar12 + local_60;
                  } while (uVar12 < local_70);
                  puVar1 = (uint *)((int)in_EDX + 0x2c);
                  uVar11 = *puVar1;
                  *puVar1 = *puVar1 + 1;
                  *(int *)((int)in_EDX + 0x30) =
                       *(int *)((int)in_EDX + 0x30) + (uint)(0xfffffffe < uVar11);
                  uVar11 = local_84 - 0x11;
                  do {
                    bVar8 = param_4[uVar11];
                    if (bVar8 != 0) {
                      if ((bVar8 & 0xfc) != 0x14) {
                        recovered_10005310(param_7,param_8,str_1000df3a,(uint)bVar8);
                        goto LAB_1000bdef;
                      }
                      if (param_3 != (byte *)0x0) {
                        *param_3 = bVar8;
                      }
                      if (param_6 != (uint *)0x0) {
                        *param_6 = uVar11;
                      }
                      break;
                    }
                    bVar13 = uVar11 != 0;
                    uVar11 = uVar11 - 1;
                  } while (bVar13);
                  bVar8 = 0;
                }
                goto LAB_1000bdf1;
              }
              pcVar7 = str_1000df19;
            }
            recovered_10005310(param_7,param_8,pcVar7);
LAB_1000bdef:
            bVar8 = 1;
          }
LAB_1000bdf1:
          iVar10 = Ram00280800;
          if (((iVar10 == 0x50414d57) && (iVar10 = Ram00280804, iVar10 != 0)) &&
             ((uVar11 = Ram00280808, 0xb < uVar11 &&
              ((uVar11 = Ram00280808, 0x53 < uVar11 &&
               (pcVar6 = (code *)UINT_00280850, pcVar6 != (code *)0x0)))))) {
            (*pcVar6)(ciphertext);
          }
          if (param_3 == (byte *)0x0 || bVar8 != 0) {
            return bVar8 ^ 1;
          }
          if (param_6 == (uint *)0x0) {
            return 1;
          }
          if (*param_3 != 0) {
            return 1;
          }
          if (*param_6 != 0) {
            return 1;
          }
        }
LAB_1000b9f0:
        pcVar6 = (code *)in_ECX[1];
      } while (pcVar6 != (code *)0x0);
    }
    pcVar7 = str_1000dee3;
LAB_1000bfbd:
    recovered_10005310(param_7,param_8,pcVar7);
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c
#undef UINT_00280850
#undef str_1000db33
#undef str_1000de40
#undef str_1000de5a
#undef str_1000de79
#undef str_1000dea6
#undef str_1000dee3
#undef str_1000df04
#undef str_1000df19
#undef str_1000df3a
#undef local_89
#undef local_88
#undef local_86
#undef local_84
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
#undef local_6c
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef local_62
#undef local_61
#undef local_60
#undef local_5c
#undef local_58
#undef local_54

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c060
 */

int recovered_1000c060(void *context,void *output)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;

  if ((output == (void *)0x0 || context == (void *)0x0) ||
     (*(char *)((int)context + 0x1f6) != '\x01')) {
    iVar2 = 0;
  }
  else {
    pvVar1 = recovered_10002560(output,(void *)((int)context + 0x1d0),0x20);
    iVar2 = CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
  return iVar2;
}


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
#define local_2c (*(undefined1 (*)[44])(pf_stack_frame + 20))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c0b0(void *context,void *output)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint uVar3;

  recovered_100027f0(local_2c,0,0x18);
  uVar3 = 0x574d544c;
  if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
      ((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)))) &&
     (iVar2 = (*_DAT_00280968)(local_2c), iVar2 != 0)) {
    uVar3 = local_20 * 0x3c6ef35f ^ local_24 ^ local_1c * 0x19660d ^ 0x574d544c;
  }
  if (output != (void *)0x0) {
    uVar3 = uVar3 ^ (uint)context ^ *(uint *)((int)context + 0x1f0);
    if ((*(code **)((int)context + 0xc) == (code *)0x0) ||
       (cVar1 = (**(code **)((int)context + 0xc))(*(undefined4 *)context,output,0x20), cVar1 == '\0'
       )) {
      iVar2 = 0;
      do {
        uVar3 = uVar3 << 0xd ^ uVar3;
        uVar3 = uVar3 >> 0x11 ^ uVar3;
        uVar3 = uVar3 << 5 ^ uVar3;
        *(char *)output = (char)(uVar3 >> ((byte)iVar2 & 0x18));
        iVar2 = iVar2 + 8;
        output = (void *)((int)output + 1);
      } while (iVar2 != 0x100);
    }
    else {
      iVar2 = 0;
      do {
        uVar3 = uVar3 ^ (uint)*(byte *)output << ((byte)iVar2 & 0x18);
        iVar2 = iVar2 + 8;
        output = (void *)((int)output + 1);
      } while (iVar2 != 0x100);
    }
    *(uint *)((int)context + 0x1f0) = uVar3;
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
#undef local_2c
#undef local_24
#undef local_20
#undef local_1c

#define local_130 (*(uint (*)[76])(pf_stack_frame + 160))
#define auStackY_1b8 (*(uint (*)[110])(pf_stack_frame + 24))
#define uStackY_154 (*(undefined4 *)(pf_stack_frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1c0
 */

void recovered_1000c1c0(uint *in_ECX,uint in_EDX,int param_3)

{
  unsigned char pf_stack_frame[496] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;

  if (param_3 != 0 && (in_EDX != 0 && in_ECX != (uint *)0x0)) {
    puVar9 = local_130 + 2;
    uStackY_154 = 0x1000c207;
    local_130[0] = in_EDX;
    recovered_100027f0(puVar9,0,0x110);
    iVar7 = 0;
    do {
      local_130[1] = iVar7;
      uVar6 = *(uint *)(local_130[0] + local_130[1] * 4);
      iVar7 = -0x44;
      do {
        lVar3 = (ulonglong)uVar6 * (ulonglong)*(uint *)(param_3 + 0x44 + iVar7);
        uVar4 = (uint)lVar3;
        puVar1 = (uint *)((int)puVar9 + iVar7 * 2 + 0x88);
        uVar8 = *puVar1;
        *puVar1 = *puVar1 + uVar4;
        piVar2 = (int *)((int)puVar9 + iVar7 * 2 + 0x8c);
        *piVar2 = *piVar2 + (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar8,uVar4);
        iVar7 = iVar7 + 4;
      } while (iVar7 != 0);
      puVar9 = puVar9 + 2;
      iVar7 = local_130[1] + 1;
    } while (local_130[1] + 1 != 0x11);
    uVar6 = 0x22;
    do {
      uVar4 = local_130[uVar6 * 2 + 1];
      uVar5 = (uint)((ulonglong)local_130[uVar6 * 2] * 0x13);
      puVar9 = auStackY_1b8 + uVar6 * 2;
      uVar8 = *puVar9;
      *puVar9 = *puVar9 + uVar5;
      auStackY_1b8[uVar6 * 2 + 1] =
           auStackY_1b8[uVar6 * 2 + 1] +
           uVar4 * 0x13 + (int)((ulonglong)local_130[uVar6 * 2] * 0x13 >> 0x20) +
           (uint)CARRY4(uVar8,uVar5);
      uVar6 = uVar6 - 1;
    } while (0x11 < uVar6);
    iVar7 = -0x11;
    do {
      uVar8 = local_130[iVar7 * 2 + 0x25] >> 0xf;
      uVar6 = local_130[iVar7 * 2 + 0x25] << 0x11 | local_130[iVar7 * 2 + 0x24] >> 0xf;
      local_130[iVar7 * 2 + 0x24] = local_130[iVar7 * 2 + 0x24] & 0x7fff;
      local_130[iVar7 * 2 + 0x25] = 0;
      if (iVar7 == -1) {
        uVar4 = (uint)((ulonglong)uVar6 * 0x13);
        bVar10 = CARRY4(local_130[2],uVar4);
        local_130[2] = local_130[2] + uVar4;
        local_130[3] = local_130[3] + uVar8 * 0x13 + (int)((ulonglong)uVar6 * 0x13 >> 0x20) +
                       (uint)bVar10;
        iVar7 = -0x11;
        goto LAB_1000c2f0;
      }
      puVar9 = local_130 + iVar7 * 2 + 0x26;
      uVar4 = *puVar9;
      *puVar9 = *puVar9 + uVar6;
      local_130[iVar7 * 2 + 0x27] = local_130[iVar7 * 2 + 0x27] + uVar8 + (uint)CARRY4(uVar4,uVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0);
    iVar7 = -0x11;
LAB_1000c2f0:
    do {
      uVar8 = local_130[iVar7 * 2 + 0x25] >> 0xf;
      uVar6 = local_130[iVar7 * 2 + 0x25] << 0x11 | local_130[iVar7 * 2 + 0x24] >> 0xf;
      local_130[iVar7 * 2 + 0x24] = local_130[iVar7 * 2 + 0x24] & 0x7fff;
      local_130[iVar7 * 2 + 0x25] = 0;
      if (iVar7 == -1) {
        uVar4 = (uint)((ulonglong)uVar6 * 0x13);
        bVar10 = CARRY4(local_130[2],uVar4);
        local_130[2] = local_130[2] + uVar4;
        local_130[3] = local_130[3] + uVar8 * 0x13 + (int)((ulonglong)uVar6 * 0x13 >> 0x20) +
                       (uint)bVar10;
        break;
      }
      puVar9 = local_130 + iVar7 * 2 + 0x26;
      uVar4 = *puVar9;
      *puVar9 = *puVar9 + uVar6;
      local_130[iVar7 * 2 + 0x27] = local_130[iVar7 * 2 + 0x27] + uVar8 + (uint)CARRY4(uVar4,uVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0);
    iVar7 = -0x11;
    do {
      uVar8 = local_130[iVar7 * 2 + 0x25] >> 0xf;
      uVar6 = local_130[iVar7 * 2 + 0x25] << 0x11 | local_130[iVar7 * 2 + 0x24] >> 0xf;
      local_130[iVar7 * 2 + 0x24] = local_130[iVar7 * 2 + 0x24] & 0x7fff;
      local_130[iVar7 * 2 + 0x25] = 0;
      if (iVar7 == -1) {
        uVar4 = (uint)((ulonglong)uVar6 * 0x13);
        bVar10 = CARRY4(local_130[2],uVar4);
        local_130[2] = local_130[2] + uVar4;
        local_130[3] = local_130[3] + uVar8 * 0x13 + (int)((ulonglong)uVar6 * 0x13 >> 0x20) +
                       (uint)bVar10;
        break;
      }
      puVar9 = local_130 + iVar7 * 2 + 0x26;
      uVar4 = *puVar9;
      *puVar9 = *puVar9 + uVar6;
      local_130[iVar7 * 2 + 0x27] = local_130[iVar7 * 2 + 0x27] + uVar8 + (uint)CARRY4(uVar4,uVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0);
    iVar7 = -0x11;
    do {
      uVar8 = local_130[iVar7 * 2 + 0x25] >> 0xf;
      uVar6 = local_130[iVar7 * 2 + 0x25] << 0x11 | local_130[iVar7 * 2 + 0x24] >> 0xf;
      local_130[iVar7 * 2 + 0x24] = local_130[iVar7 * 2 + 0x24] & 0x7fff;
      local_130[iVar7 * 2 + 0x25] = 0;
      if (iVar7 == -1) {
        uVar4 = (uint)((ulonglong)uVar6 * 0x13);
        bVar10 = CARRY4(local_130[2],uVar4);
        local_130[2] = local_130[2] + uVar4;
        local_130[3] = local_130[3] + uVar8 * 0x13 + (int)((ulonglong)uVar6 * 0x13 >> 0x20) +
                       (uint)bVar10;
        break;
      }
      puVar9 = local_130 + iVar7 * 2 + 0x26;
      uVar4 = *puVar9;
      *puVar9 = *puVar9 + uVar6;
      local_130[iVar7 * 2 + 0x27] = local_130[iVar7 * 2 + 0x27] + uVar8 + (uint)CARRY4(uVar4,uVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0);
    *in_ECX = local_130[2];
    in_ECX[1] = local_130[4];
    in_ECX[2] = local_130[6];
    in_ECX[3] = local_130[8];
    in_ECX[4] = local_130[10];
    in_ECX[5] = local_130[0xc];
    in_ECX[6] = local_130[0xe];
    in_ECX[7] = local_130[0x10];
    in_ECX[8] = local_130[0x12];
    in_ECX[9] = local_130[0x14];
    in_ECX[10] = local_130[0x16];
    in_ECX[0xb] = local_130[0x18];
    in_ECX[0xc] = local_130[0x1a];
    in_ECX[0xd] = local_130[0x1c];
    in_ECX[0xe] = local_130[0x1e];
    in_ECX[0xf] = local_130[0x20];
    in_ECX[0x10] = local_130[0x22];
    recovered_1000c4c0(in_ECX);
  }
  return;
}

#undef local_130
#undef auStackY_1b8
#undef uStackY_154

#undef DAT_1000da60
#define DAT_1000da60 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x204U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4c0
 */

void recovered_1000c4c0(uint *in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;

  if (in_ECX != (uint *)0x0) {
    iVar2 = -0x11;
    do {
      uVar4 = in_ECX[iVar2 + 0x11] >> 0xf;
      in_ECX[iVar2 + 0x11] = in_ECX[iVar2 + 0x11] & 0x7fff;
      if (iVar2 == -1) {
        *in_ECX = *in_ECX + uVar4 * 0x13;
        iVar2 = -0x11;
        goto LAB_1000c520;
      }
      in_ECX[iVar2 + 0x12] = in_ECX[iVar2 + 0x12] + uVar4;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
    iVar2 = -0x11;
LAB_1000c520:
    do {
      uVar4 = in_ECX[iVar2 + 0x11] >> 0xf;
      in_ECX[iVar2 + 0x11] = in_ECX[iVar2 + 0x11] & 0x7fff;
      if (iVar2 == -1) {
        *in_ECX = *in_ECX + uVar4 * 0x13;
        break;
      }
      in_ECX[iVar2 + 0x12] = in_ECX[iVar2 + 0x12] + uVar4;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
    iVar2 = -0x11;
    do {
      uVar4 = in_ECX[iVar2 + 0x11] >> 0xf;
      in_ECX[iVar2 + 0x11] = in_ECX[iVar2 + 0x11] & 0x7fff;
      if (iVar2 == -1) {
        *in_ECX = *in_ECX + uVar4 * 0x13;
        break;
      }
      in_ECX[iVar2 + 0x12] = in_ECX[iVar2 + 0x12] + uVar4;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
    iVar2 = -0x11;
    do {
      uVar4 = in_ECX[iVar2 + 0x11] >> 0xf;
      in_ECX[iVar2 + 0x11] = in_ECX[iVar2 + 0x11] & 0x7fff;
      if (iVar2 == -1) {
        *in_ECX = *in_ECX + uVar4 * 0x13;
        break;
      }
      in_ECX[iVar2 + 0x12] = in_ECX[iVar2 + 0x12] + uVar4;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
    if ((0x7fff < in_ECX[0x10]) ||
       ((in_ECX[0x10] == 0x7fff &&
        ((0x7fff < in_ECX[0xf] ||
         ((in_ECX[0xf] == 0x7fff &&
          ((0x7fff < in_ECX[0xe] ||
           ((in_ECX[0xe] == 0x7fff &&
            ((0x7fff < in_ECX[0xd] ||
             ((in_ECX[0xd] == 0x7fff &&
              ((0x7fff < in_ECX[0xc] ||
               ((in_ECX[0xc] == 0x7fff &&
                ((0x7fff < in_ECX[0xb] ||
                 ((in_ECX[0xb] == 0x7fff &&
                  ((0x7fff < in_ECX[10] ||
                   ((in_ECX[10] == 0x7fff &&
                    ((0x7fff < in_ECX[9] ||
                     ((in_ECX[9] == 0x7fff &&
                      ((0x7fff < in_ECX[8] ||
                       ((in_ECX[8] == 0x7fff &&
                        ((0x7fff < in_ECX[7] ||
                         ((in_ECX[7] == 0x7fff &&
                          ((0x7fff < in_ECX[6] ||
                           ((in_ECX[6] == 0x7fff &&
                            ((0x7fff < in_ECX[5] ||
                             ((in_ECX[5] == 0x7fff &&
                              ((0x7fff < in_ECX[4] ||
                               ((in_ECX[4] == 0x7fff &&
                                ((0x7fff < in_ECX[3] ||
                                 ((in_ECX[3] == 0x7fff &&
                                  ((0x7fff < in_ECX[2] ||
                                   ((in_ECX[2] == 0x7fff &&
                                    ((0x7fff < in_ECX[1] ||
                                     ((in_ECX[1] == 0x7fff && (0x7fec < *in_ECX)))))))))))))))))))))
                            ))))))))))))))))))))))))))))))))))))))))))) {
      uVar4 = 0;
      iVar2 = -0x44;
      piVar3 = &DAT_1000da60;
      do {
        uVar5 = uVar4 + *piVar3;
        uVar4 = *(uint *)((int)in_ECX + iVar2 + 0x44);
        uVar1 = uVar4 + 0x8000;
        if (uVar4 >= uVar5) {
          uVar1 = uVar4;
        }
        uVar4 = (uint)(uVar4 < uVar5);
        *(uint *)((int)in_ECX + iVar2 + 0x44) = uVar1 - uVar5;
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar2 != 0);
    }
  }
  return;
}

#undef DAT_1000da60

#define abStack_14 (*(byte (*)[20])(pf_stack_frame + 220))
#define local_d4 (*(byte (*)[212])(pf_stack_frame + 28))
#define local_94 (*(byte (*)[148])(pf_stack_frame + 92))
#define local_54 (*(byte (*)[84])(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c720
 */

void recovered_1000c720(void *inner,void *outer,void *key)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_100027f0(local_54,0,0x40);
  if (key != (void *)0x0) {
    recovered_10002560(local_54,key,0x20);
  }
  iVar1 = -0x40;
  do {
    local_54[iVar1] = abStack_14[iVar1] ^ 0x36;
    local_94[iVar1] = abStack_14[iVar1] ^ 0x5c;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0);
  if (inner != (void *)0x0) {
    *(undefined4 *)inner = 0x6a09e667;
    *(undefined4 *)((int)inner + 4) = 0xbb67ae85;
    *(undefined4 *)((int)inner + 8) = 0x3c6ef372;
    *(undefined4 *)((int)inner + 0xc) = 0xa54ff53a;
    *(undefined4 *)((int)inner + 0x10) = 0x510e527f;
    *(undefined4 *)((int)inner + 0x14) = 0x9b05688c;
    *(undefined4 *)((int)inner + 0x18) = 0x1f83d9ab;
    *(undefined4 *)((int)inner + 0x1c) = 0x5be0cd19;
    *(undefined4 *)((int)inner + 0x24) = 0;
    *(undefined4 *)((int)inner + 0x20) = 0;
    *(undefined4 *)((int)inner + 0x68) = 0;
  }
  recovered_100089d0(inner,local_94,0x40);
  if (outer != (void *)0x0) {
    *(undefined4 *)outer = 0x6a09e667;
    *(undefined4 *)((int)outer + 4) = 0xbb67ae85;
    *(undefined4 *)((int)outer + 8) = 0x3c6ef372;
    *(undefined4 *)((int)outer + 0xc) = 0xa54ff53a;
    *(undefined4 *)((int)outer + 0x10) = 0x510e527f;
    *(undefined4 *)((int)outer + 0x14) = 0x9b05688c;
    *(undefined4 *)((int)outer + 0x18) = 0x1f83d9ab;
    *(undefined4 *)((int)outer + 0x1c) = 0x5be0cd19;
    *(undefined4 *)((int)outer + 0x24) = 0;
    *(undefined4 *)((int)outer + 0x20) = 0;
    *(undefined4 *)((int)outer + 0x68) = 0;
  }
  recovered_100089d0(outer,local_d4,0x40);
  return;
}

#undef abStack_14
#undef local_d4
#undef local_94
#undef local_54

#undef DAT_1000daa4
#define DAT_1000daa4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x248U)))
#undef DAT_1000dda2
#define DAT_1000dda2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546U)))
#define local_18 (*(uint *)(pf_stack_frame + 24))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c860
 */

void recovered_1000c860(void *context,void *output)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if (output != (void *)0x0 && context != (void *)0x0) {
    uVar1 = *(uint *)((int)context + 0x20);
    uVar3 = *(uint *)((int)context + 0x24) << 3;
    local_18 = (uVar1 & 0x1fffffff) >> 0x15 | (uVar1 << 3 & 0xff0000) >> 8 |
               (uVar1 << 3 & 0xff00) << 8 | uVar1 << 0x1b;
    local_1c = (*(uint *)((int)context + 0x24) & 0x1fffffff) >> 0x15 | (uVar3 & 0xff0000) >> 8 |
               (uVar3 & 0xff00) << 8 | (uVar3 | uVar1 >> 0x1d) << 0x18;
    recovered_100089d0(context,&DAT_1000dda2,1);
    iVar2 = *(int *)((int)context + 0x68);
    while (iVar2 != 0x38) {
      recovered_100089d0(context,&DAT_1000daa4,1);
      iVar2 = *(int *)((int)context + 0x68);
    }
    recovered_100089d0(context,&local_1c,8);
    uVar1 = *(uint *)context;
    *(uint *)output =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 4);
    *(uint *)((int)output + 4) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 8);
    *(uint *)((int)output + 8) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 0xc);
    *(uint *)((int)output + 0xc) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 0x10);
    *(uint *)((int)output + 0x10) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 0x14);
    *(uint *)((int)output + 0x14) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 0x18);
    *(uint *)((int)output + 0x18) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 0x1c);
    *(uint *)((int)output + 0x1c) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  return;
}

#undef DAT_1000daa4
#undef DAT_1000dda2
#undef local_18
#undef local_1c

#undef str_1000dda4
#define str_1000dda4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x548U)))
#define local_1c9 (*(char *)(pf_stack_frame + 23))
#define local_1c8 (*(void * *)(pf_stack_frame + 24))
#define local_1c4 (*(uint *)(pf_stack_frame + 28))
#define local_1c0 (*(uint *)(pf_stack_frame + 32))
#define local_1bc (*(int *)(pf_stack_frame + 36))
#define local_1b8 (*(int *)(pf_stack_frame + 40))
#define local_1b4 (*(uint *)(pf_stack_frame + 44))
#define local_1b0 (*(char * *)(pf_stack_frame + 48))
#define local_1ac (*(undefined1 (*)[428])(pf_stack_frame + 52))
#define local_18c (*(undefined1 (*)[396])(pf_stack_frame + 84))
#define local_10c (*(undefined1 (*)[268])(pf_stack_frame + 212))
#define local_ec (*(undefined1 (*)[236])(pf_stack_frame + 244))
#define local_80 (*(undefined1 (*)[128])(pf_stack_frame + 352))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c940
 */

void recovered_1000c940(void *secret,char *label,void *context,ulong context_length,void *output,
                       ulong output_length)

{
  unsigned char pf_stack_frame[512] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  local_1b0 = str_1000dda4;
  uVar1 = recovered_10002cb0(str_1000dda4);
  if (((label != (char *)0x0) &&
      (uVar2 = recovered_10002cb0(label), output != (void *)0x0 && secret != (void *)0x0)) &&
     (local_1b4 = uVar2 + uVar1, local_1b4 < 0x100)) {
    local_1b8 = uVar2 + 3 + uVar1;
    local_1c4 = context_length + 1 + local_1b8;
    if (local_1c4 < 0x81) {
      local_1c0 = uVar2 + 4 + uVar1;
      local_1bc = uVar1 + 3;
      local_18c[0] = (undefined1)(output_length >> 8);
      local_18c[1] = (undefined1)output_length;
      local_18c[2] = (undefined1)local_1b4;
      local_1c8 = secret;
      recovered_10002560(local_18c + 3,local_1b0,uVar1);
      recovered_10002560(local_18c + local_1bc,label,uVar2);
      local_18c[local_1b8] = (char)context_length;
      if (context_length == 0) {
        local_1c4 = local_1c0;
      }
      else {
        recovered_10002560(local_18c + local_1c0,context,context_length);
      }
      local_1c9 = '\x01';
      if (output_length != 0) {
        recovered_1000c720(local_80,local_ec,local_1c8);
        recovered_100089d0(local_80,local_18c,local_1c4);
        recovered_100089d0(local_80,&local_1c9,1);
        recovered_1000c860(local_80,local_10c);
        recovered_100089d0(local_ec,local_10c,0x20);
        recovered_1000c860(local_ec,local_1ac);
        uVar1 = 0x20;
        if (output_length < 0x20) {
          uVar1 = output_length;
        }
        recovered_10002560(output,local_1ac,uVar1);
        local_1c9 = local_1c9 + '\x01';
        if ((output_length < 0x21 || local_1c9 != '\0') && (0x20 < output_length)) {
          do {
            recovered_1000c720(local_80,local_ec,local_1c8);
            recovered_100089d0(local_80,local_1ac,0x20);
            recovered_100089d0(local_80,local_18c,local_1c4);
            recovered_100089d0(local_80,&local_1c9,1);
            recovered_1000c860(local_80,local_10c);
            recovered_100089d0(local_ec,local_10c,0x20);
            recovered_1000c860(local_ec,local_1ac);
            uVar2 = output_length - uVar1;
            if (0x1f < uVar2) {
              uVar2 = 0x20;
            }
            recovered_10002560((void *)((int)output + uVar1),local_1ac,uVar2);
            uVar1 = uVar2 + uVar1;
            local_1c9 = local_1c9 + '\x01';
          } while (((local_1c9 != '\0') || (output_length <= uVar1)) && (uVar1 < output_length));
        }
      }
    }
  }
  return;
}

#undef str_1000dda4
#undef local_1c9
#undef local_1c8
#undef local_1c4
#undef local_1c0
#undef local_1bc
#undef local_1b8
#undef local_1b4
#undef local_1b0
#undef local_1ac
#undef local_18c
#undef local_10c
#undef local_ec
#undef local_80

/* Recovered TLS record authentication: padded AAD/ciphertext followed by
 * little-endian lengths, using the reference's clamped Poly1305 key.
 * Pooka's Free Software License. */
static uint32_t pf_tls_load32(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static void pf_tls_store32(uint8_t *p,uint32_t value){for(unsigned i=0;i<4;++i)p[i]=(uint8_t)(value>>(8*i));}
void recovered_1000cbf0(void *key,void *nonce,void *associated,void *ciphertext,unsigned long size,void *output){
 uint8_t one_time[64];recovered_1000d4d0(key,0,nonce,one_time);
 unsigned long padded=(size+15)&~15UL,total=padded+32;
 uint8_t *message=(uint8_t *)recovered_10002470(total);
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
 recovered_100024c0(message);
}




#define local_d0 (*(uint *)(pf_stack_frame + 16))
#define local_cc (*(uint *)(pf_stack_frame + 20))
#define local_c8 (*(uint *)(pf_stack_frame + 24))
#define local_c4 (*(uint *)(pf_stack_frame + 28))
#define local_c0 (*(uint *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(uint *)(pf_stack_frame + 40))
#define local_b4 (*(uint *)(pf_stack_frame + 44))
#define local_b0 (*(uint *)(pf_stack_frame + 48))
#define local_ac (*(uint *)(pf_stack_frame + 52))
#define local_a8 (*(uint *)(pf_stack_frame + 56))
#define local_a4 (*(uint *)(pf_stack_frame + 60))
#define iStack_14 (*(int *)(pf_stack_frame + 204))
#define local_a0 (*(uint (*)[40])(pf_stack_frame + 64))
#define local_60 (*(int (*)[24])(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d4d0
 */

void recovered_1000d4d0(void *key,uint counter,void *nonce,void *output)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  local_60[3] = 0x61707865;
  local_60[4] = 0x3320646e;
  local_60[5] = 0x79622d32;
  local_60[6] = 0x6b206574;
  local_60[7] = *(int *)key;
  local_60[8] = *(undefined4 *)((int)key + 4);
  local_60[9] = *(undefined4 *)((int)key + 8);
  local_60[10] = *(undefined4 *)((int)key + 0xc);
  local_60[0xb] = *(undefined4 *)((int)key + 0x10);
  local_60[0xc] = *(undefined4 *)((int)key + 0x14);
  local_60[0xd] = *(undefined4 *)((int)key + 0x18);
  local_60[0xe] = *(undefined4 *)((int)key + 0x1c);
  local_60[0x10] = *(int *)nonce;
  local_60[0x11] = *(undefined4 *)((int)nonce + 4);
  local_60[0x12] = *(undefined4 *)((int)nonce + 8);
  local_60[0xf] = counter;
  recovered_10002560(local_a0,local_60 + 3,0x40);
  local_b4 = local_a0[4];
  local_cc = local_a0[0];
  local_b0 = local_a0[1];
  local_c0 = local_a0[8];
  local_b8 = local_a0[9];
  local_ac = local_a0[6];
  local_c4 = local_a0[2];
  local_bc = local_a0[0xe];
  local_a4 = local_a0[10];
  local_a8 = local_a0[7];
  local_d0 = local_a0[3];
  iVar4 = 10;
  local_c8 = local_a0[0xb];
  do {
    local_a0[0xc] = local_a0[0xc] ^ local_cc + local_b4;
    uVar1 = local_a0[0xc] << 0x10 | local_a0[0xc] >> 0x10;
    local_c0 = local_c0 + uVar1;
    uVar2 = local_b4 ^ local_c0;
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_cc = local_cc + local_b4 + uVar2;
    uVar1 = uVar1 ^ local_cc;
    uVar1 = uVar1 << 8 | uVar1 >> 0x18;
    local_c0 = local_c0 + uVar1;
    uVar2 = uVar2 ^ local_c0;
    uVar3 = uVar2 << 7 | uVar2 >> 0x19;
    local_a0[0xd] = local_a0[0xd] ^ local_b0 + local_a0[5];
    uVar5 = local_a0[0xd] << 0x10 | local_a0[0xd] >> 0x10;
    local_b8 = local_b8 + uVar5;
    uVar2 = local_a0[5] ^ local_b8;
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_b0 = local_b0 + local_a0[5] + uVar2;
    uVar5 = uVar5 ^ local_b0;
    uVar6 = uVar5 << 8 | uVar5 >> 0x18;
    local_b8 = local_b8 + uVar6;
    uVar2 = uVar2 ^ local_b8;
    uVar2 = uVar2 << 7 | uVar2 >> 0x19;
    local_bc = local_bc ^ local_c4 + local_ac;
    uVar5 = local_bc << 0x10 | local_bc >> 0x10;
    local_a4 = local_a4 + uVar5;
    uVar7 = local_ac ^ local_a4;
    uVar8 = uVar7 << 0xc | uVar7 >> 0x14;
    local_c4 = local_c4 + local_ac + uVar8;
    uVar5 = uVar5 ^ local_c4;
    uVar7 = uVar5 << 8 | uVar5 >> 0x18;
    local_a4 = local_a4 + uVar7;
    uVar8 = uVar8 ^ local_a4;
    uVar9 = uVar8 << 7 | uVar8 >> 0x19;
    local_a0[0xf] = local_a0[0xf] ^ local_d0 + local_a8;
    uVar5 = local_a0[0xf] << 0x10 | local_a0[0xf] >> 0x10;
    local_c8 = local_c8 + uVar5;
    uVar8 = local_a8 ^ local_c8;
    uVar8 = uVar8 << 0xc | uVar8 >> 0x14;
    local_d0 = local_d0 + local_a8 + uVar8;
    uVar5 = uVar5 ^ local_d0;
    uVar5 = uVar5 << 8 | uVar5 >> 0x18;
    local_c8 = local_c8 + uVar5;
    uVar8 = uVar8 ^ local_c8;
    uVar8 = uVar8 << 7 | uVar8 >> 0x19;
    local_cc = local_cc + uVar2;
    uVar5 = uVar5 ^ local_cc;
    uVar5 = uVar5 << 0x10 | uVar5 >> 0x10;
    local_a4 = local_a4 + uVar5;
    uVar2 = uVar2 ^ local_a4;
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_cc = local_cc + uVar2;
    uVar5 = uVar5 ^ local_cc;
    local_a0[0xf] = uVar5 << 8 | uVar5 >> 0x18;
    local_a4 = local_a4 + local_a0[0xf];
    uVar2 = uVar2 ^ local_a4;
    local_a0[5] = uVar2 << 7 | uVar2 >> 0x19;
    local_b0 = local_b0 + uVar9;
    uVar1 = uVar1 ^ local_b0;
    uVar1 = uVar1 << 0x10 | uVar1 >> 0x10;
    local_c8 = local_c8 + uVar1;
    uVar9 = uVar9 ^ local_c8;
    uVar2 = uVar9 << 0xc | uVar9 >> 0x14;
    local_b0 = local_b0 + uVar2;
    uVar1 = uVar1 ^ local_b0;
    local_a0[0xc] = uVar1 << 8 | uVar1 >> 0x18;
    local_c8 = local_c8 + local_a0[0xc];
    uVar2 = uVar2 ^ local_c8;
    local_ac = uVar2 << 7 | uVar2 >> 0x19;
    local_c4 = local_c4 + uVar8;
    uVar6 = uVar6 ^ local_c4;
    uVar2 = uVar6 << 0x10 | uVar6 >> 0x10;
    local_c0 = local_c0 + uVar2;
    uVar8 = uVar8 ^ local_c0;
    uVar1 = uVar8 << 0xc | uVar8 >> 0x14;
    local_c4 = local_c4 + uVar1;
    uVar2 = uVar2 ^ local_c4;
    local_a0[0xd] = uVar2 << 8 | uVar2 >> 0x18;
    local_c0 = local_c0 + local_a0[0xd];
    uVar1 = uVar1 ^ local_c0;
    local_a8 = uVar1 << 7 | uVar1 >> 0x19;
    local_d0 = local_d0 + uVar3;
    uVar7 = uVar7 ^ local_d0;
    uVar2 = uVar7 << 0x10 | uVar7 >> 0x10;
    local_b8 = local_b8 + uVar2;
    uVar3 = uVar3 ^ local_b8;
    uVar1 = uVar3 << 0xc | uVar3 >> 0x14;
    local_d0 = local_d0 + uVar1;
    uVar2 = uVar2 ^ local_d0;
    local_bc = uVar2 << 8 | uVar2 >> 0x18;
    local_b8 = local_b8 + local_bc;
    uVar1 = uVar1 ^ local_b8;
    local_b4 = uVar1 << 7 | uVar1 >> 0x19;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_a0[4] = local_b4;
  local_a0[0] = local_cc;
  local_a0[8] = local_c0;
  local_a0[1] = local_b0;
  local_a0[9] = local_b8;
  local_a0[6] = local_ac;
  local_a0[2] = local_c4;
  local_a0[0xe] = local_bc;
  local_a0[10] = local_a4;
  local_a0[7] = local_a8;
  local_a0[3] = local_d0;
  local_a0[0xb] = local_c8;
  iVar4 = -0x40;
  do {
    *(int *)((int)output + iVar4 + 0x40) =
         *(int *)((int)local_60 + iVar4 + 0x4c) + *(int *)((int)local_60 + iVar4);
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0);
  return;
}

#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef iStack_14
#undef local_a0
#undef local_60
