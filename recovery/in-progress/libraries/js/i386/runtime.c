/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000d090
#define DAT_1000d090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b3U)))
#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c40
 */

/* WARNING: Removing unreachable block (ram,0x10000c7c) */

void recovered_10000c40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000d090 = 0;
    recovered_10000ca0();
    DAT_1000d098 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000d090
#undef DAT_1000d098

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1000d090
#define DAT_1000d090 (*(char *)(((uintptr_t)pf_module_state + 0x5b3U)))
#undef DAT_1000d094
#define DAT_1000d094 (*(int *)(((uintptr_t)pf_module_state + 0x5b7U)))
#undef DAT_1000d09c
#define DAT_1000d09c (*(int *)(((uintptr_t)pf_module_state + 0x5bfU)))
#undef _DAT_00280088
#define _DAT_00280088 (*(uint *)(0x280088U))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
#define local_90 (*(ulong *)(pf_stack_frame + 32))
#define local_8c (*(uint (*)[35])(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000ca0(void)

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
  if (DAT_1000d090 != '\0') {
    return;
  }
  DAT_1000d094 = 0;
  DAT_1000d09c = 0;
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
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_10000d0b;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_10000d0b:
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
        if (iVar10 == 0) goto LAB_10000e60;
      }
      puVar7 = &local_90;
      do {
        recovered_10005000(puVar7[-1],*puVar7,local_9c);
        puVar7 = puVar7 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (DAT_1000d094 != 0) goto LAB_10000e9b;
    }
  }
LAB_10000e60:
  uVar4 = 0x4000000;
  if (0x300000 < _DAT_00280088) {
    uVar4 = _DAT_00280088 & 0xfffffff0;
  }
  size = 0x3d00000;
  if (0x300020 < uVar4) {
    size = uVar4 - 0x300000;
  }
  recovered_10005000(0x300000,size,local_9c);
LAB_10000e9b:
  if (DAT_1000d09c == 0) {
    DAT_1000d09c = DAT_1000d094;
  }
  DAT_1000d090 = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1000d090
#undef DAT_1000d094
#undef DAT_1000d09c
#undef _DAT_00280088
#undef _DAT_0028008c
#undef local_9c
#undef local_90
#undef local_8c

#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ec0
 */

/* WARNING: Removing unreachable block (ram,0x10000f0c) */

bool recovered_10000ec0(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10000f30(addresses,sizes,count);
    DAT_1000d098 = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000d098

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000d094
#define DAT_1000d094 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b7U)))
#undef DAT_1000d09c
#define DAT_1000d09c (*(int * *)(((uintptr_t)pf_module_state + 0x5bfU)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f30
 */

bool recovered_10000f30(ulong *addresses,ulong *sizes,ulong count)

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
    recovered_10000ca0();
    local_18 = DAT_1000d094;
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
          if (uVar3 < uVar9 || uVar4 == 0) goto LAB_10001030;
          bVar13 = 0x20 < (uVar4 & 0xfffffff0);
        }
        else {
LAB_10001030:
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
      piVar2 = DAT_1000d094;
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
    piVar6 = (int *)&DAT_1000d094;
    iVar1 = 0;
    do {
      iVar8 = iVar1;
      iVar1 = *piVar6;
      piVar6 = (int *)(iVar1 + 4);
    } while (iVar1 != 0);
    uVar12 = 0;
    local_1c = iVar8;
    do {
      recovered_10005000(addresses[uVar12],sizes[uVar12],&local_1c);
      uVar12 = uVar12 + 1;
    } while (count != uVar12);
    if (DAT_1000d09c == (int *)0x0) {
      DAT_1000d09c = DAT_1000d094;
    }
    bVar13 = local_1c != iVar8;
  }
  return bVar13;
}

#undef DAT_10000001
#undef DAT_1000d094
#undef DAT_1000d09c
#undef local_1c
#undef local_18

#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
#define local_24 (*(ulong *)(pf_stack_frame + 28))
#define local_20 (*(ulong (*)[8])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001170
 */

/* WARNING: Removing unreachable block (ram,0x100011bc) */

bool recovered_10001170(ulong address,ulong size)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_1000d098;
  local_20[0] = address;
  local_24 = size;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10000f30(local_20,&local_24,1);
    DAT_1000d098 = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000d098
#undef local_24
#undef local_20

#undef DAT_1000d094
#define DAT_1000d094 (*(int * *)(((uintptr_t)pf_module_state + 0x5b7U)))
#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f0
 */

/* WARNING: Removing unreachable block (ram,0x1000122c) */

uint recovered_100011f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int *piVar3;

  iVar1 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000ca0();
  uVar2 = 0;
  for (piVar3 = DAT_1000d094; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if ((char)piVar3[3] == '\x01') {
      uVar2 = uVar2 + *piVar3;
    }
  }
  DAT_1000d098 = 0;
  return uVar2;
}

#undef DAT_1000d094
#undef DAT_1000d098

#undef DAT_1000d094
#define DAT_1000d094 (*(uint * *)(((uintptr_t)pf_module_state + 0x5b7U)))
#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001270
 */

/* WARNING: Removing unreachable block (ram,0x100012ac) */

ulonglong recovered_10001270(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  recovered_10000ca0();
  uVar1 = 0;
  iVar3 = 0;
  for (puVar2 = DAT_1000d094; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[1]) {
    if ((char)puVar2[3] == '\x01') {
      bVar4 = CARRY4(uVar1,*puVar2);
      uVar1 = uVar1 + *puVar2;
      iVar3 = iVar3 + (uint)bVar4;
    }
  }
  DAT_1000d098 = 0;
  return CONCAT44(iVar3,uVar1);
}

#undef DAT_1000d094
#undef DAT_1000d098

#undef DAT_1000d094
#define DAT_1000d094 (*(int * *)(((uintptr_t)pf_module_state + 0x5b7U)))
#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012f0
 */

/* WARNING: Removing unreachable block (ram,0x1000132c) */

uint recovered_100012f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint uVar3;

  iVar2 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000ca0();
  uVar3 = 0;
  for (piVar1 = DAT_1000d094; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    uVar3 = uVar3 + *piVar1;
  }
  DAT_1000d098 = 0;
  return uVar3;
}

#undef DAT_1000d094
#undef DAT_1000d098

#undef DAT_1000d094
#define DAT_1000d094 (*(uint * *)(((uintptr_t)pf_module_state + 0x5b7U)))
#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001360
 */

/* WARNING: Removing unreachable block (ram,0x1000139c) */

ulonglong recovered_10001360(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  recovered_10000ca0();
  uVar2 = 0;
  iVar3 = 0;
  for (puVar1 = DAT_1000d094; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
    bVar4 = CARRY4(uVar2,*puVar1);
    uVar2 = uVar2 + *puVar1;
    iVar3 = iVar3 + (uint)bVar4;
  }
  DAT_1000d098 = 0;
  return CONCAT44(iVar3,uVar2);
}

#undef DAT_1000d094
#undef DAT_1000d098

#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e0
 */

/* WARNING: Removing unreachable block (ram,0x1000142c) */

void * recovered_100013e0(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    pvVar2 = recovered_10001450(size,0,0xffffffff);
    DAT_1000d098 = 0;
    return pvVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000d098

#undef DAT_1000d094
#define DAT_1000d094 (*(uint * *)(((uintptr_t)pf_module_state + 0x5b7U)))
#undef DAT_1000d09c
#define DAT_1000d09c (*(uint * *)(((uintptr_t)pf_module_state + 0x5bfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001450
 */

void * recovered_10001450(ulong size,ulong first,ulong last)

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
    recovered_10000ca0();
    puVar3 = DAT_1000d094;
    puVar4 = DAT_1000d09c;
    if (DAT_1000d09c == (uint *)0x0) {
      puVar4 = DAT_1000d094;
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
              if (uVar6 < uVar8) goto LAB_10001532;
            }
          }
          else {
LAB_10001532:
            if ((uVar7 - 1 <= last - (int)first_00 && first_00 <= last) &&
               (uVar7 <= uVar8 - uVar6 && uVar6 <= uVar8)) {
              if (uVar7 - 1 < uVar8) {
                bVar2 = 0xffffffef < uVar8;
                if ((uint)(uVar8 - uVar7 < 0x20) <= -(uint)(uVar8 < uVar7)) {
                  bVar2 = 0xffffffdf < uVar7;
                }
                if (!bVar2) {
                  if (uVar6 == 0) {
LAB_10001614:
                    if ((bool)(~(uVar8 < uVar7) & 0x1f < uVar8 - uVar7)) {
                      DAT_1000d09c = (uint *)((int)chunk + uVar7 + 0x10);
                      *(uint *)((int)chunk + uVar7 + 0x10) = (uVar8 - uVar7) - 0x10;
                      uVar8 = chunk[1];
                      *(uint *)((int)chunk + uVar7 + 0x14) = uVar8;
                      *(uint **)((int)chunk + uVar7 + 0x18) = chunk;
                      *(undefined1 *)((int)chunk + uVar7 + 0x1c) = 1;
                      if (uVar8 != 0) {
                        *(uint **)(uVar8 + 8) = DAT_1000d09c;
                      }
                      *chunk = uVar7;
                      chunk[1] = (uint)DAT_1000d09c;
                    }
                    else {
                      DAT_1000d09c = (uint *)chunk[1];
                    }
                    *(undefined1 *)(chunk + 3) = 0;
                    if (DAT_1000d09c == (uint *)0x0) {
                      DAT_1000d09c = DAT_1000d094;
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
                      chunk = recovered_100051a0(chunk,(ulong)first_00);
                      if (chunk == (uint *)0x0) {
                        return (void *)0x0;
                      }
                      uVar8 = *chunk;
                      goto LAB_10001614;
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

#undef DAT_1000d094
#undef DAT_1000d09c

#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001680
 */

/* WARNING: Removing unreachable block (ram,0x100016cc) */

void * recovered_10001680(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    pvVar2 = recovered_10001450(size,0,limit);
    DAT_1000d098 = 0;
    return pvVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000d098

#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016f0
 */

/* WARNING: Removing unreachable block (ram,0x1000173c) */

void * recovered_100016f0(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  pvVar2 = (void *)0x0;
  if (first <= last) {
    pvVar2 = recovered_10001450(size,first,last);
  }
  DAT_1000d098 = 0;
  return pvVar2;
}

#undef DAT_1000d098

#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001760
 */

/* WARNING: Removing unreachable block (ram,0x100017ac) */

void recovered_10001760(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_100017d0(pointer);
    DAT_1000d098 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000d098

#undef DAT_1000d09c
#define DAT_1000d09c (*(uint * *)(((uintptr_t)pf_module_state + 0x5bfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017d0
 */

void recovered_100017d0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;

  if (pointer == (void *)0x0) {
    return;
  }
  recovered_10000ca0();
  puVar2 = (uint *)((int)pointer + -0x10);
  *(undefined1 *)((int)pointer + -4) = 1;
  puVar3 = *(uint **)((int)pointer + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)((int)pointer + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_1000d09c == puVar3) {
        DAT_1000d09c = puVar2;
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
      DAT_1000d09c = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_1000d09c = puVar2;
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
        if (DAT_1000d09c == puVar2) {
          DAT_1000d09c = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_1000d09c = puVar2;
  return;
}

#undef DAT_1000d09c

#undef DAT_1000d098
#define DAT_1000d098 (*(int *)(((uintptr_t)pf_module_state + 0x5bbU)))
#undef DAT_1000d09c
#define DAT_1000d09c (*(uint * *)(((uintptr_t)pf_module_state + 0x5bfU)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018f0
 */

/* WARNING: Removing unreachable block (ram,0x1000193c) */

void * recovered_100018f0(void *pointer,ulong size)

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

  iVar3 = DAT_1000d098;
  { __typeof__(DAT_1000d098) pf_atomic_old = __atomic_exchange_n(&(DAT_1000d098),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  if (pointer == (void *)0x0) {
    pvVar7 = recovered_10001450(size,0,0xffffffff);
    DAT_1000d098 = 0;
    return pvVar7;
  }
  if (size == 0) {
    recovered_100017d0(pointer);
    DAT_1000d098 = 0;
    return (void *)0x0;
  }
  if (0xfffffff0 < size) {
    DAT_1000d098 = 0;
    return (void *)0x0;
  }
  recovered_10000ca0();
  size_00 = size + 0xf & 0xfffffff0;
  chunk = (uint *)((int)pointer + -0x10);
  uVar12 = *(uint *)((int)pointer + -0x10);
  if (size_00 <= uVar12) {
    if (uVar12 <= size_00 - 1) {
      DAT_1000d098 = 0;
      return (void *)0x0;
    }
    uVar8 = uVar12 - size_00;
    bVar5 = 0xffffffdf < size_00;
    if (-(uint)(uVar12 < size_00) < (uint)(uVar8 < 0x20)) {
      bVar5 = 0xffffffef < uVar12;
    }
    if (!bVar5) {
      if (uVar8 < 0x20) {
        DAT_1000d098 = 0;
        return pointer;
      }
      DAT_1000d09c = (uint *)((int)pointer + size_00);
      *(uint *)((int)pointer + size_00) = uVar8 - 0x10;
      iVar3 = *(int *)((int)pointer + -0xc);
      *(int *)((int)pointer + size_00 + 4) = iVar3;
      *(uint **)((int)pointer + size_00 + 8) = chunk;
      *(undefined1 *)((int)pointer + size_00 + 0xc) = 1;
      if (iVar3 != 0) {
        *(uint **)(iVar3 + 8) = DAT_1000d09c;
      }
      *(uint *)((int)pointer + -0x10) = size_00;
      *(uint **)((int)pointer + -0xc) = DAT_1000d09c;
      DAT_1000d098 = 0;
      return pointer;
    }
    DAT_1000d098 = 0;
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
      local_20 = DAT_1000d09c;
      puVar6 = *(uint **)((int)pointer + -0xc);
      do {
        if (((puVar6 == (uint *)0x0) || ((char)puVar6[3] != '\x01')) ||
           ((0xffffffef < uVar12 ||
            (((uint *)(uVar12 + (int)pointer) != puVar6 || (-uVar12 - 0x11 < *puVar6)))))) break;
        if (local_20 == puVar6) {
          local_20 = chunk;
          DAT_1000d09c = chunk;
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
        DAT_1000d098 = 0;
        return (void *)0x0;
      }
      bVar5 = recovered_10005200(chunk,size_00);
      if (bVar5) {
        DAT_1000d09c = *(uint **)((int)pointer + -0xc);
      }
      *(undefined1 *)((int)pointer + -4) = 0;
      DAT_1000d098 = 0;
      return pointer;
    }
  }
  puVar9 = recovered_10001450(size_00,0,0xffffffff);
  if (puVar9 == (undefined4 *)0x0) {
    DAT_1000d098 = 0;
    return (void *)0x0;
  }
  if (*chunk < size_00) {
    size_00 = *chunk;
  }
  puVar10 = pointer;
  puVar14 = puVar9;
  if (size_00 < 8) {
LAB_10001b65:
    if (size_00 == 0) goto LAB_10001b7c;
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
    goto LAB_10001b65;
  }
  uVar12 = 0;
  do {
    *(undefined1 *)((int)puVar14 + uVar12) = *(undefined1 *)((int)puVar10 + uVar12);
    uVar12 = uVar12 + 1;
  } while (size_00 != uVar12);
LAB_10001b7c:
  recovered_100017d0(pointer);
  DAT_1000d098 = 0;
  return puVar9;
}

#undef DAT_1000d098
#undef DAT_1000d09c
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c90
 */

undefined8 recovered_10001c90(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10001ccb;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10001ccb;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10001ccb:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ce0
 */

undefined8 recovered_10001ce0(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001d30
 */

undefined8 recovered_10001d30(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001d70
 */

undefined8 recovered_10001d70(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001e60
 */

undefined8 recovered_10001e60(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001ed0
 */

undefined8 recovered_10001ed0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002020
 */

undefined8 recovered_10002020(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100020f0
 */

void recovered_100020f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002110
 */

int recovered_10002110(int param_1)

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
 * Address: 0x10002130
 */

void * recovered_10002130(ulong size)

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
 * Address: 0x10002180
 */

void recovered_10002180(void *pointer)

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
 * Address: 0x100021d0
 */

void * recovered_100021d0(void *pointer,ulong size)

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
 * Address: 0x10002220
 */

void recovered_10002220(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_1000224a;
    if (((uint)param_1 & 3) != 0) {
      puVar4 = param_1;
      do {
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        uVar1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        *(undefined1 *)param_1 = uVar1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        bVar5 = param_3 == 1;
        param_3 = param_3 - 1;
        if (bVar5) break;
      } while (((uint)puVar4 & 3) != 0);
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 == 0) {
    return;
  }
LAB_1000224a:
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + uVar3) = *(undefined1 *)((int)param_2 + uVar3);
    uVar3 = uVar3 + 1;
  } while (param_3 != uVar3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022e0
 */

undefined4 * recovered_100022e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;

  if (param_3 != 0 && param_1 != param_2) {
    if ((param_1 < param_2) || (puVar5 = (undefined4 *)((int)param_2 + param_3), puVar5 <= param_1))
    {
      puVar5 = param_1;
      if ((7 < param_3) && (puVar7 = param_1, (((uint)param_2 ^ (uint)param_1) & 3) == 0)) {
        do {
          if (((uint)puVar7 & 3) == 0) break;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          uVar2 = *(undefined1 *)param_2;
          param_2 = (undefined4 *)((int)param_2 + 1);
          *(undefined1 *)puVar5 = uVar2;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          bVar8 = param_3 != 1;
          param_3 = param_3 - 1;
        } while (bVar8);
        for (; 0xf < param_3; param_3 = param_3 - 0x10) {
          *puVar5 = *param_2;
          puVar5[1] = param_2[1];
          puVar5[2] = param_2[2];
          puVar5[3] = param_2[3];
          puVar5 = puVar5 + 4;
          param_2 = param_2 + 4;
        }
        for (; 3 < param_3; param_3 = param_3 - 4) {
          uVar3 = *param_2;
          param_2 = param_2 + 1;
          *puVar5 = uVar3;
          puVar5 = puVar5 + 1;
        }
        if (param_3 == 0) {
          return param_1;
        }
      }
      uVar4 = 0;
      do {
        *(undefined1 *)((int)puVar5 + uVar4) = *(undefined1 *)((int)param_2 + uVar4);
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
    else {
      uVar4 = (int)param_1 + param_3;
      if ((7 < param_3) && ((((uint)puVar5 ^ uVar4) & 3) == 0)) {
        if ((uVar4 & 3) != 0) {
          do {
            *(undefined1 *)((int)param_1 + (param_3 - 1)) =
                 *(undefined1 *)((int)param_2 + (param_3 - 1));
            uVar1 = param_3 - 1;
            if (param_3 == 1) break;
            iVar6 = param_3 - 1;
            param_3 = uVar1;
          } while (((int)param_1 + iVar6 & 3U) != 0);
          puVar5 = (undefined4 *)((int)param_2 + uVar1);
          uVar4 = (int)param_1 + uVar1;
          param_3 = uVar1;
        }
        for (; 0xf < param_3; param_3 = param_3 - 0x10) {
          *(undefined4 *)(uVar4 - 4) = puVar5[-1];
          *(undefined4 *)(uVar4 - 8) = puVar5[-2];
          *(undefined4 *)(uVar4 - 0xc) = puVar5[-3];
          *(undefined4 *)(uVar4 - 0x10) = puVar5[-4];
          uVar4 = uVar4 - 0x10;
          puVar5 = puVar5 + -4;
        }
        for (; 3 < param_3; param_3 = param_3 - 4) {
          puVar7 = puVar5 + -1;
          puVar5 = puVar5 + -1;
          *(undefined4 *)(uVar4 - 4) = *puVar7;
          uVar4 = uVar4 - 4;
        }
        if (param_3 == 0) {
          return param_1;
        }
      }
      iVar6 = 0;
      do {
        *(undefined1 *)((uVar4 - 1) + iVar6) = *(undefined1 *)((int)puVar5 + iVar6 + -1);
        iVar6 = iVar6 + -1;
      } while (-iVar6 != param_3);
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024b0
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

byte * recovered_100024b0(byte *param_1,byte param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;

  pbVar1 = param_1;
  if (7 < param_3) {
    if (((uint)param_1 & 3) != 0) {
      pbVar2 = param_1;
      do {
        pbVar2 = pbVar2 + 1;
        *pbVar1 = param_2;
        pbVar1 = pbVar1 + 1;
        bVar4 = param_3 == 1;
        param_3 = param_3 - 1;
        if (bVar4) break;
      } while (((uint)pbVar2 & 3) != 0);
    }
    iVar3 = (uint)param_2 * 0x1010101;
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      *(int *)pbVar1 = iVar3;
      *(int *)(pbVar1 + 4) = iVar3;
      *(int *)(pbVar1 + 8) = iVar3;
      *(int *)(pbVar1 + 0xc) = iVar3;
      pbVar1 = pbVar1 + 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *(int *)pbVar1 = iVar3;
      pbVar1 = pbVar1 + 4;
    }
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *pbVar1 = param_2;
    pbVar1 = pbVar1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002560
 */

void recovered_10002560(undefined4 *param_1,uint param_2)

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
 * Address: 0x10002600
 */

void recovered_10002600(undefined4 *param_1,uint param_2)

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
 * Address: 0x100026a0
 */

char * recovered_100026a0(char *param_1,char param_2,int param_3)

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
 * Address: 0x100026e0
 */

int recovered_100026e0(uint *param_1,uint *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_1000277e;
    if (((uint)param_1 & 3) != 0) {
      uVar7 = param_3;
      puVar6 = param_1;
      do {
        puVar6 = (uint *)((int)puVar6 + 1);
        bVar1 = (byte)*param_1;
        bVar2 = (byte)*param_2;
        if (bVar1 != bVar2) goto LAB_10002795;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        param_3 = uVar7 - 1;
      } while ((uVar7 != 1) && (uVar7 = param_3, ((uint)puVar6 & 3) != 0));
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      uVar7 = *param_1;
      uVar8 = *param_2;
      if (uVar7 != uVar8) {
LAB_100027c6:
        if ((char)uVar7 == (char)uVar8) {
          uVar5 = uVar7 >> 8;
          uVar4 = uVar8 >> 8;
          if ((char)(uVar7 >> 8) == (char)(uVar8 >> 8)) {
            uVar5 = uVar7 >> 0x10;
            uVar4 = uVar8 >> 0x10;
            if ((char)(uVar7 >> 0x10) == (char)(uVar8 >> 0x10)) {
              uVar5 = uVar7 >> 0x18;
              uVar4 = uVar8 >> 0x18;
              if (uVar5 == uVar4) {
                return 0;
              }
            }
          }
        }
        else {
          uVar5 = uVar7;
          uVar4 = uVar8;
        }
        return (uVar5 & 0xff) - (uVar4 & 0xff);
      }
      uVar7 = param_1[1];
      uVar8 = param_2[1];
      if (uVar7 != uVar8) goto LAB_100027c6;
      uVar7 = param_1[2];
      uVar8 = param_2[2];
      if (uVar7 != uVar8) goto LAB_100027c6;
      uVar7 = param_1[3];
      uVar8 = param_2[3];
      if (uVar7 != uVar8) goto LAB_100027c6;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10002810();
        return iVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_1000277e:
  uVar7 = 0;
  while( true ) {
    bVar1 = *(byte *)((int)param_1 + uVar7);
    bVar2 = *(byte *)((int)param_2 + uVar7);
    if (bVar1 != bVar2) break;
    uVar7 = uVar7 + 1;
    if (param_3 == uVar7) {
      return 0;
    }
  }
LAB_10002795:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002810
 */

int recovered_10002810(void)

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
 * Address: 0x10002860
 */

bool recovered_10002860(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002880
 */

bool recovered_10002880(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028a0
 */

bool recovered_100028a0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028c0
 */

bool recovered_100028c0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f0
 */

bool recovered_100028f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002910
 */

bool recovered_10002910(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002930
 */

int recovered_10002930(int param_1)

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
 * Address: 0x10002950
 */

int recovered_10002950(int param_1)

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
 * Address: 0x10002970
 */

int recovered_10002970(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int iVar3;

  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = -1;
    do {
      iVar2 = iVar3 + 1;
      pcVar1 = (char *)(param_1 + 1 + iVar3);
      iVar3 = iVar2;
    } while (*pcVar1 != '\0');
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029b0
 */

int recovered_100029b0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_100029e6;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_100029e6:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029f0
 */

int recovered_100029f0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002a26;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002a26:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a30
 */

void recovered_10002a30(int param_1,int param_2)

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
 * Address: 0x10002a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10002a60(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10002b78;
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
LAB_10002b78:
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
 * Address: 0x10002ba0
 */

char * recovered_10002ba0(char *param_1,char param_2)

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
 * Address: 0x10002be0
 */

int recovered_10002be0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_10002c2b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_10002c2b;
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
 * Address: 0x10002c40
 */

ulong recovered_10002c40(char *text,char *reject)

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
 * Address: 0x10002ca0
 */

char * recovered_10002ca0(char *param_1,char *param_2)

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
 * Address: 0x10002cf0
 */

char * recovered_10002cf0(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10002d33;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10002d33:
  return pcVar3;
}


#undef DAT_1000cbc0
#define DAT_1000cbc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d40
 */

undefined * recovered_10002d40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000cbc0;
}

#undef DAT_1000cbc0

#undef PTR_DAT_1000d020
#define PTR_DAT_1000d020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x543U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d60
 */

undefined ** recovered_10002d60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000d020;
}

#undef PTR_DAT_1000d020

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
 * Address: 0x10002d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002d80(undefined4 *param_1)

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

#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e20
 */

longdouble recovered_10002e20(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000cae0;
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

#undef DAT_1000cae0

#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e70
 */

void recovered_10002e70(double param_1,int *param_2)

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
        param_1 = param_1 * (double)DAT_1000cae0;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_1000cae0 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_1000cae0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000cae0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f30
 */

longdouble recovered_10002f30(double param_1,double param_2)

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
 * Address: 0x10002f90
 */

longdouble recovered_10002f90(double param_1,double param_2)

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
 * Address: 0x10003020
 */

longdouble recovered_10003020(double param_1)

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
 * Address: 0x10003070
 */

longdouble recovered_10003070(double param_1)

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
 * Address: 0x100030d0
 */

void recovered_100030d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1000cae4
#define DAT_1000cae4 (*(float *)(((uintptr_t)pf_module_state + 0x7U)))
#undef DAT_1000cae8
#define DAT_1000cae8 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000caec
#define DAT_1000caec (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000caf0
#define DAT_1000caf0 (*(float *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_1000caf4
#define DAT_1000caf4 (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000caf8
#define DAT_1000caf8 (*(float *)(((uintptr_t)pf_module_state + 0x1bU)))
#undef DAT_1000cafc
#define DAT_1000cafc (*(float *)(((uintptr_t)pf_module_state + 0x1fU)))
#undef DAT_1000cb00
#define DAT_1000cb00 (*(float *)(((uintptr_t)pf_module_state + 0x23U)))
#undef DAT_1000cb04
#define DAT_1000cb04 (*(float *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_1000cb08
#define DAT_1000cb08 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_1000cb0c
#define DAT_1000cb0c (*(float *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000cb10
#define DAT_1000cb10 (*(float *)(((uintptr_t)pf_module_state + 0x33U)))
#undef DAT_1000cb38
#define DAT_1000cb38 (*(double *)(((uintptr_t)pf_module_state + 0x5bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d0
 */

longdouble recovered_100031d0(double param_1)

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
    lVar2 = (longdouble)DAT_1000cae4;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_1000cae8 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000cae0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_1000cae8 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_1000caec) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_1000caec);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_1000cb10 +
            lVar9 / (longdouble)DAT_1000cb0c +
            lVar8 / (longdouble)DAT_1000cb08 +
            lVar7 / (longdouble)DAT_1000cb04 +
            lVar6 / (longdouble)DAT_1000cb00 +
            lVar5 / (longdouble)DAT_1000cafc +
            lVar4 / (longdouble)DAT_1000caf8 +
            lVar3 / (longdouble)DAT_1000caf4 +
            (lVar10 * lVar2) / (longdouble)DAT_1000caf0 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_1000cb38;
  }
  return lVar2;
}

#undef DAT_1000cae0
#undef DAT_1000cae4
#undef DAT_1000cae8
#undef DAT_1000caec
#undef DAT_1000caf0
#undef DAT_1000caf4
#undef DAT_1000caf8
#undef DAT_1000cafc
#undef DAT_1000cb00
#undef DAT_1000cb04
#undef DAT_1000cb08
#undef DAT_1000cb0c
#undef DAT_1000cb10
#undef DAT_1000cb38

#undef DAT_1000cb60
#define DAT_1000cb60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032e0
 */

longlong recovered_100032e0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_1000cb60 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_1000cb60

#undef DAT_1000cb14
#define DAT_1000cb14 (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_1000cb18
#define DAT_1000cb18 (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_1000cb1c
#define DAT_1000cb1c (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_1000cb40
#define DAT_1000cb40 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_1000cb48
#define DAT_1000cb48 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000cb50
#define DAT_1000cb50 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000cb58
#define DAT_1000cb58 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003340
 */

longdouble recovered_10003340(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000cb40 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000cb48;
    } while ((longdouble)DAT_1000cb40 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000cb50) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000cb58;
    } while (lVar1 < (longdouble)DAT_1000cb50);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_1000cb1c +
         (lVar2 * lVar2) / (longdouble)DAT_1000cb18 +
         (longdouble)1 + lVar2 / (longdouble)DAT_1000cb14) * lVar1;
}

#undef DAT_1000cb14
#undef DAT_1000cb18
#undef DAT_1000cb1c
#undef DAT_1000cb40
#undef DAT_1000cb48
#undef DAT_1000cb50
#undef DAT_1000cb58

#undef DAT_1000cb20
#define DAT_1000cb20 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000cb24
#define DAT_1000cb24 (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000cb28
#define DAT_1000cb28 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000cb40
#define DAT_1000cb40 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_1000cb48
#define DAT_1000cb48 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000cb50
#define DAT_1000cb50 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000cb58
#define DAT_1000cb58 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033d0
 */

longdouble recovered_100033d0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000cb40 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000cb48;
    } while ((longdouble)DAT_1000cb40 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000cb50) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000cb58;
    } while (lVar1 < (longdouble)DAT_1000cb50);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_1000cb28 +
         (lVar1 * lVar1) / (longdouble)DAT_1000cb24 +
         (longdouble)1 + lVar1 * (longdouble)DAT_1000cb20;
}

#undef DAT_1000cb20
#undef DAT_1000cb24
#undef DAT_1000cb28
#undef DAT_1000cb40
#undef DAT_1000cb48
#undef DAT_1000cb50
#undef DAT_1000cb58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003460
 */

longdouble recovered_10003460(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1000cb2c
#define DAT_1000cb2c (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003480
 */

longlong recovered_10003480(double value)

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
    dVar3 = (double)DAT_1000cb2c;
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
      dVar3 = dVar3 * (double)DAT_1000cae0;
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

#undef DAT_1000cae0
#undef DAT_1000cb2c

#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1000cb2c
#define DAT_1000cb2c (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003540
 */

ulonglong recovered_10003540(double value)

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
    dVar2 = (double)DAT_1000cb2c;
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
      dVar2 = dVar2 * (double)DAT_1000cae0;
      bVar10 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar6,uVar4);
}

#undef DAT_1000cae0
#undef DAT_1000cb2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035d0
 */

double recovered_100035d0(ulonglong value)

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
 * Address: 0x10003640
 */

double recovered_10003640(longlong value)

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
 * Address: 0x10003700
 */

void recovered_10003700(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003770
 */

void recovered_10003770(float param_1,int *param_2)

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
        param_1 = param_1 * DAT_1000cae0;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_1000cae0 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_1000cae0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000cae0

#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003860
 */

longdouble recovered_10003860(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_1000cae0;
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

#undef DAT_1000cae0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038c0
 */

longdouble recovered_100038c0(float param_1,float param_2)

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
 * Address: 0x10003960
 */

longdouble recovered_10003960(float param_1)

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
 * Address: 0x100039c0
 */

longdouble recovered_100039c0(float param_1)

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
 * Address: 0x10003a30
 */

longdouble recovered_10003a30(double param_1)

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
 * Address: 0x10003aa0
 */

longdouble recovered_10003aa0(float param_1)

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
 * Address: 0x10003b10
 */

longdouble recovered_10003b10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_100030d0();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1000cae8
#define DAT_1000cae8 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000caec
#define DAT_1000caec (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b30
 */

void recovered_10003b30(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_1000cae8 < param_1) {
      do {
        param_1 = param_1 * DAT_1000cae0;
      } while (DAT_1000cae8 < param_1);
    }
    for (; param_1 < DAT_1000caec; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_1000cae0
#undef DAT_1000cae8
#undef DAT_1000caec

#undef DAT_1000cb60
#define DAT_1000cb60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c50
 */

undefined4 recovered_10003c50(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_1000cb60 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_1000cb60
#undef local_10

#undef DAT_1000cb14
#define DAT_1000cb14 (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_1000cb18
#define DAT_1000cb18 (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_1000cb1c
#define DAT_1000cb1c (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_1000cb40
#define DAT_1000cb40 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_1000cb48
#define DAT_1000cb48 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000cb50
#define DAT_1000cb50 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000cb58
#define DAT_1000cb58 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ca0
 */

longdouble recovered_10003ca0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000cb40 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000cb48;
    } while ((float)DAT_1000cb40 < param_1);
  }
  if (param_1 < (float)DAT_1000cb50) {
    do {
      param_1 = param_1 + (float)DAT_1000cb58;
    } while (param_1 < (float)DAT_1000cb50);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_1000cb1c +
          (fVar1 * fVar1) / DAT_1000cb18 + fVar1 / DAT_1000cb14 + 1.0) * param_1);
}

#undef DAT_1000cb14
#undef DAT_1000cb18
#undef DAT_1000cb1c
#undef DAT_1000cb40
#undef DAT_1000cb48
#undef DAT_1000cb50
#undef DAT_1000cb58

#undef DAT_1000cb20
#define DAT_1000cb20 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000cb24
#define DAT_1000cb24 (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000cb28
#define DAT_1000cb28 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000cb40
#define DAT_1000cb40 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_1000cb48
#define DAT_1000cb48 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000cb50
#define DAT_1000cb50 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000cb58
#define DAT_1000cb58 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d30
 */

longdouble recovered_10003d30(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000cb40 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000cb48;
    } while ((float)DAT_1000cb40 < param_1);
  }
  if (param_1 < (float)DAT_1000cb50) {
    do {
      param_1 = param_1 + (float)DAT_1000cb58;
    } while (param_1 < (float)DAT_1000cb50);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_1000cb28 +
         (fVar1 * fVar1) / DAT_1000cb24 + fVar1 * DAT_1000cb20 + 1.0);
}

#undef DAT_1000cb20
#undef DAT_1000cb24
#undef DAT_1000cb28
#undef DAT_1000cb40
#undef DAT_1000cb48
#undef DAT_1000cb50
#undef DAT_1000cb58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dc0
 */

longdouble recovered_10003dc0(float param_1)

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
 * Address: 0x10003de0
 */

int recovered_10003de0(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10003f30
 */

int recovered_10003f30(byte *param_1,undefined4 *param_2,uint param_3)

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

#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1000cb30
#define DAT_1000cb30 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004080
 */

longdouble recovered_10004080(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)DAT_1000cb30 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)DAT_1000cb30 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_1000cb30;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10004153;
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
LAB_10004153:
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
              lVar10 = lVar10 * (longdouble)DAT_1000cae0;
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

#undef DAT_1000cae0
#undef DAT_1000cb30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004240
 */

longdouble recovered_10004240(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10004080(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1000cb30
#define DAT_1000cb30 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef str_1000cbc2
#define str_1000cbc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe5U)))
#undef str_1000cbcc
#define str_1000cbcc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xefU)))
#undef str_1000cbdd
#define str_1000cbdd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100U)))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004270
 */

int recovered_10004270(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10004303;
    }
    bVar6 = param_3[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *param_1 = 0x25;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      param_3 = param_3 + 1;
      goto LAB_10004303;
    }
    pbVar10 = param_3 + 2;
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10004365;
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
LAB_10004365:
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
      goto LAB_1000444c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10004458;
    case 0x6c:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x6c) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_1000444c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10004458;
    case 0x7a:
      cVar7 = '\x05';
LAB_10004458:
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
        goto LAB_10004769;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004769:
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
        abStack_51[iVar12 + 1] = str_1000cbdd[uVar15 + uVar9 * -10];
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
      goto LAB_100042b8;
    default:
      if (1 < local_bc) {
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10004303;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_10004897;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_10004897;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_10004897:
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
      pcVar14 = str_1000cbdd;
      if (*param_3 == 0x58) {
        pcVar14 = str_1000cbcc;
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
LAB_1000486c:
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
LAB_10004303:
      local_c0 = local_c0 + 1;
LAB_10004304:
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
                        goto LAB_100049a5;
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
LAB_100049a5:
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
          abStack_51[iVar12 + 1] = str_1000cbdd[uVar8 + uVar9 * -10];
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
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_1000cb30;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000cb30;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000cb30;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_1000cb30;
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
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_1000cb30);
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
        abStack_51[iVar12 + 1] = str_1000cbdd[uVar8 & 0xf];
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
      goto LAB_10004304;
    case 0x73:
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_1000cbc2;
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
      goto LAB_1000486c;
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
        goto LAB_10004a7f;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_10004a7f;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_10004a7f:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000cbdd[uVar8 + uVar9 * -10];
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
LAB_100042b8:
      param_3 = param_3 + 1;
      param_1 = local_b8;
    }
  } while( true );
}

#undef DAT_1000cb30
#undef str_1000cbc2
#undef str_1000cbcc
#undef str_1000cbdd
#undef local_80
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef abStack_51

#define dStack00000010 (*(double *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fd0
 */

int recovered_10004fd0(char *buffer,ulong capacity,char *format,...)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10004270((byte *)buffer,capacity,(byte *)format,&dStack00000010);
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
#undef DAT_1000d094
#define DAT_1000d094 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b7U)))
#undef DAT_1000d09c
#define DAT_1000d09c (*(int * *)(((uintptr_t)pf_module_state + 0x5bfU)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005000(ulong address,ulong size,void *tail)

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
        if (DAT_1000d094 == 0) {
          puVar2 = &DAT_1000d094;
        }
        *puVar2 = piVar4;
        *(int **)tail = piVar4;
        if (DAT_1000d09c == (int *)0x0) {
          DAT_1000d09c = piVar4;
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
    if (DAT_1000d094 == 0) {
      puVar2 = &DAT_1000d094;
    }
    *puVar2 = 0x10000000;
    *(undefined4 *)tail = 0x10000000;
    if (DAT_1000d09c != (int *)0x0) {
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
    if (DAT_1000d094 == 0) {
      puVar2 = &DAT_1000d094;
    }
    *puVar2 = piVar4;
    *(int **)tail = piVar4;
    if (DAT_1000d09c != (int *)0x0) {
      return;
    }
  }
  DAT_1000d09c = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_1000d094
#undef DAT_1000d09c
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051a0
 */

void * recovered_100051a0(void *chunk,ulong first)

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
 * Address: 0x10005200
 */

bool recovered_10005200(void *chunk,ulong size)

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
#undef DAT_1000d0a0
#define DAT_1000d0a0 (*(uint *)(((uintptr_t)pf_module_state + 0x5c3U)))
#undef DAT_1000d0a4
#define DAT_1000d0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c7U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#define local_214 (*(undefined4 (*)[133])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005260(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000d0a0 != 0) {
          DAT_1000d0a0 = DAT_1000d0a0 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000d0a0 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10002220(local_214,(undefined4 *)&DAT_1000d0a4,DAT_1000d0a0);
            uVar3 = DAT_1000d0a0;
          }
          *(undefined1 *)((int)local_214 + uVar3) = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0))))))
          {
            (*_DAT_00280840)(local_214);
          }
          DAT_1000d0a0 = 0;
        }
        else {
          if (DAT_1000d0a0 - 0x1ff < 0xfffffe00) {
            recovered_10002220(local_214,(undefined4 *)&DAT_1000d0a4,DAT_1000d0a0);
            *(undefined1 *)((int)local_214 + DAT_1000d0a0) = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
              (*_DAT_00280840)(local_214);
            }
            DAT_1000d0a0 = 0;
          }
          pcVar1 = &DAT_1000d0a4 + DAT_1000d0a0;
          DAT_1000d0a0 = DAT_1000d0a0 + 1;
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
#undef DAT_1000d0a0
#undef DAT_1000d0a4
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
#undef DAT_1000d0a0
#define DAT_1000d0a0 (*(uint *)(((uintptr_t)pf_module_state + 0x5c3U)))
#undef DAT_1000d0a4
#define DAT_1000d0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c7U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#define local_21c (*(undefined4 (*)[135])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005420(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (DAT_1000d0a0 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10002220(local_21c,(undefined4 *)&DAT_1000d0a4,DAT_1000d0a0);
    uVar1 = DAT_1000d0a0;
  }
  *(undefined1 *)((int)local_21c + uVar1) = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
    (*_DAT_00280840)(local_21c);
  }
  DAT_1000d0a0 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000d0a0
#undef DAT_1000d0a4
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
#undef DAT_1000d0a0
#define DAT_1000d0a0 (*(uint *)(((uintptr_t)pf_module_state + 0x5c3U)))
#undef DAT_1000d0a4
#define DAT_1000d0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c7U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#define local_210 (*(undefined4 (*)[132])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100054c0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000d0a0 != 0) {
    recovered_10002220(local_210,(undefined4 *)&DAT_1000d0a4,DAT_1000d0a0);
    *(undefined1 *)((int)local_210 + DAT_1000d0a0) = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
      (*_DAT_00280840)(local_210);
    }
    DAT_1000d0a0 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000d0a0
#undef DAT_1000d0a4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_210

#undef DAT_1000cbcb
#define DAT_1000cbcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef DAT_1000cbee
#define DAT_1000cbee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111U)))
#define acStack_150 (*(char (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005550
 */

void recovered_10005550(char *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  char *format;

  format = &DAT_1000cbee;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar1 = &DAT_1000cbcb;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  iVar2 = recovered_10004fd0(acStack_150,0x140,format,puVar1);
  if (0 < iVar2) {
    recovered_10005260(acStack_150,iVar2);
  }
  return;
}

#undef DAT_1000cbcb
#undef DAT_1000cbee
#undef acStack_150

#undef DAT_1000cc0c
#define DAT_1000cc0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef str_1000cbf1
#define str_1000cbf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

void recovered_100055b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002970(((uintptr_t)pf_module_state+0x114U));
  recovered_10005260(str_1000cbf1,iVar1);
  iVar1 = recovered_10002970(((uintptr_t)pf_module_state+0x12fU));
  recovered_10005260(&DAT_1000cc0c,iVar1);
  return;
}

#undef DAT_1000cc0c
#undef str_1000cbf1

#undef DAT_1000cc0c
#define DAT_1000cc0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef str_1000cc0f
#define str_1000cc0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x132U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005600
 */

void recovered_10005600(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002970(((uintptr_t)pf_module_state+0x132U));
  recovered_10005260(str_1000cc0f,iVar1);
  iVar1 = recovered_10002970(((uintptr_t)pf_module_state+0x12fU));
  recovered_10005260(&DAT_1000cc0c,iVar1);
  return;
}

#undef DAT_1000cc0c
#undef str_1000cc0f

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
#undef DAT_1000d0a0
#define DAT_1000d0a0 (*(uint *)(((uintptr_t)pf_module_state + 0x5c3U)))
#undef DAT_1000d0a4
#define DAT_1000d0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c7U)))
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
#define local_214 (*(undefined4 (*)[133])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005650(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000d0a0 != 0) {
      recovered_10002220(local_214,(undefined4 *)&DAT_1000d0a4,DAT_1000d0a0);
      *(undefined1 *)((int)local_214 + DAT_1000d0a0) = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000d0a0 = 0;
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
#undef DAT_1000d0a0
#undef DAT_1000d0a4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005750
 */

undefined4 recovered_10005750(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005760
 */

void recovered_10005760(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005770
 */

undefined1 recovered_10005770(void)

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
#undef DAT_1000cbee
#define DAT_1000cbee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111U)))
#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef str_1000cc90
#define str_1000cc90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b3U)))
#undef str_1000cc9d
#define str_1000cc9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c0U)))
#undef str_1000ccab
#define str_1000ccab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * recovered_10005780(byte *param_1,char *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;

  if (param_1 == (byte *)0x0 || param_2 == (char *)0x0) {
    *(undefined4 *)PTR_DAT_1000d000 = 0x16;
    return (byte *)0x0;
  }
  iVar3 = recovered_100029b0(param_1,(byte *)str_1000cc90);
  if (iVar3 == 0) {
    local_24 = 1;
  }
  else {
    iVar4 = recovered_100029b0(param_1,(byte *)str_1000cc9d);
    if (iVar4 == 0) {
      local_24 = 2;
    }
    else {
      iVar4 = recovered_100029b0(param_1,(byte *)str_1000ccab);
      if (iVar4 != 0) {
        pbVar5 = recovered_10002130(800);
        if (pbVar5 != (byte *)0x0) {
          recovered_100024b0(pbVar5,0,800);
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pcVar6 = recovered_10002ba0(param_2,'r');
          bVar9 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002ba0(param_2,'+');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002ba0(param_2,'a');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          pbVar5[0x110] = bVar9;
          pcVar6 = recovered_10002ba0(param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002ba0(param_2,'a');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002ba0(param_2,'+');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar9 = true;
          }
          pbVar5[0x111] = bVar9;
          pcVar6 = recovered_10002ba0(param_2,'a');
          pbVar5[0x112] = pcVar6 != (char *)0x0;
          pbVar5[0x10c] = 0xff;
          pbVar5[0x10d] = 0xff;
          pbVar5[0x10e] = 0xff;
          pbVar5[0x10f] = 0xff;
          recovered_10004fd0((char *)(pbVar5 + 4),0xf1,&DAT_1000cbee,param_1);
          recovered_100024b0((byte *)&local_20,0,0xc);
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             (((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00280834)(param_1,&local_20), iVar3 != 0)))) {
            pcVar6 = recovered_10002ba0(param_2,'w');
            if (local_1c != 0 && pcVar6 == (char *)0x0) {
              if (pbVar5[0x111] == 1) {
                uVar7 = *(uint *)(pbVar5 + 0x104);
                if (uVar7 < local_1c) {
                  uVar2 = 0x100;
                  if (uVar7 != 0) {
                    uVar2 = uVar7;
                  }
                  do {
                    uVar7 = uVar2;
                    uVar2 = uVar7 * 2;
                  } while (uVar7 < local_1c);
                  puVar8 = recovered_100021d0(*(void **)(pbVar5 + 0xfc),uVar7);
                  if (puVar8 == (undefined4 *)0x0) {
                    *(undefined4 *)PTR_DAT_1000d000 = 0xc;
                    pbVar5[0x115] = 1;
                    goto LAB_10005ac7;
                  }
                  *(undefined4 **)(pbVar5 + 0xfc) = puVar8;
                  *(uint *)(pbVar5 + 0x104) = uVar7;
                  *(undefined4 **)(pbVar5 + 0xf8) = puVar8;
                }
                else {
                  puVar8 = *(undefined4 **)(pbVar5 + 0xfc);
                }
                recovered_10002220(puVar8,local_20,local_1c);
              }
              else {
                *(undefined4 **)(pbVar5 + 0xf8) = local_20;
              }
              *(uint *)(pbVar5 + 0x100) = local_1c;
              bVar1 = pbVar5[0x112];
              goto joined_r0x10005aa4;
            }
          }
          else if (pbVar5[0x111] == 0) {
            *(undefined4 *)PTR_DAT_1000d000 = 2;
LAB_10005ac7:
            recovered_10002180(pbVar5);
            return (byte *)0x0;
          }
          bVar1 = pbVar5[0x112];
joined_r0x10005aa4:
          if (bVar1 == 1) {
            *(undefined4 *)(pbVar5 + 0x108) = *(undefined4 *)(pbVar5 + 0x100);
            return pbVar5;
          }
          return pbVar5;
        }
        goto LAB_10005925;
      }
      local_24 = 3;
    }
  }
  pbVar5 = recovered_10002130(800);
  if (pbVar5 != (byte *)0x0) {
    recovered_100024b0(pbVar5,0,800);
    *(undefined4 *)pbVar5 = local_24;
    pbVar5[0x110] = iVar3 == 0;
    pbVar5[0x111] = iVar3 != 0;
    pbVar5[0x10c] = 0xff;
    pbVar5[0x10d] = 0xff;
    pbVar5[0x10e] = 0xff;
    pbVar5[0x10f] = 0xff;
    recovered_10004fd0((char *)(pbVar5 + 4),0xf1,&DAT_1000cbee,param_1);
    return pbVar5;
  }
LAB_10005925:
  *(undefined4 *)PTR_DAT_1000d000 = 0xc;
  return (byte *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_1000cbee
#undef PTR_DAT_1000d000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_1000cc90
#undef str_1000cc9d
#undef str_1000ccab
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
#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005b30(byte *param_1,char *param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_10005c07;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       (_DAT_00280838 != (code *)0x0)) {
      iVar1 = (*_DAT_00280838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10005bea;
      }
    }
    *(undefined4 *)PTR_DAT_1000d000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10005bea:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10002180((void *)param_3[0x3f]);
  }
  recovered_10002180(param_3);
LAB_10005c07:
  recovered_10005780(param_1,param_2);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000d000
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
#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005c20(int *param_1)

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
      *(undefined4 *)PTR_DAT_1000d000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10002180((void *)param_1[0x3f]);
  }
  recovered_10002180(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000d000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d00
 */

uint recovered_10005d00(undefined4 *param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;

  uVar1 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined4 *)0x0)) &&
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
        recovered_10002220(param_1,(undefined4 *)(uVar3 + param_4[0x3e]),uVar1);
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
          uVar2 = recovered_10005e10(param_4);
          if (uVar2 == 0xffffffff) {
            return uVar1;
          }
          *(char *)puVar4 = (char)uVar2;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        uVar1 = uVar1 + 1;
        param_1 = (undefined4 *)((int)param_1 + param_2);
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
#undef DAT_1000cbcb
#define DAT_1000cbcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef DAT_1000d0a0
#define DAT_1000d0a0 (*(uint *)(((uintptr_t)pf_module_state + 0x5c3U)))
#undef DAT_1000d0a4
#define DAT_1000d0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c7U)))
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
#define local_214 (*(undefined4 (*)[133])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10005e10(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x44] != '\x01') {
    return 0xffffffff;
  }
  uVar2 = param_1[0x43];
  if (uVar2 != 0xffffffff) {
    param_1[0x43] = -1;
    return uVar2;
  }
  if (*param_1 == 1) {
    uVar2 = param_1[199];
    if (uVar2 < (uint)param_1[0xc6]) {
LAB_10005e71:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_1000d0a0 != 0) {
      recovered_10002220(local_214,(undefined4 *)&DAT_1000d0a4,DAT_1000d0a0);
      *(undefined1 *)((int)local_214 + DAT_1000d0a0) = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000d0a0 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)((int)param_1 + 0x116,0x1fe,&DAT_1000cbcb,0);
      if (iVar1 != 0) {
        iVar1 = recovered_10002970((int)param_1 + 0x116);
        param_1[0xc6] = iVar1 + 1;
        *(undefined1 *)((int)param_1 + iVar1 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar2 = 0;
        goto LAB_10005e71;
      }
    }
  }
  else {
    uVar2 = param_1[0x42];
    if (uVar2 < (uint)param_1[0x40]) {
      param_1[0x42] = uVar2 + 1;
      return (uint)*(byte *)(param_1[0x3e] + uVar2);
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
#undef DAT_1000cbcb
#undef DAT_1000d0a0
#undef DAT_1000d0a4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fd0
 */

int recovered_10005fd0(char *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (char *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_1000613a:
    param_3 = 0;
  }
  else {
    uVar5 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10005260(param_1,uVar5);
      param_4[0x42] = param_4[0x42] + uVar5;
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
    if (uVar2 < uVar4 + uVar5) {
      uVar1 = 0x100;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 * 2;
      } while (uVar2 < uVar4 + uVar5);
      pvVar3 = recovered_100021d0((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000d000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_1000613a;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_100024b0((byte *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10002220((undefined4 *)(uVar4 + param_4[0x3f]),(undefined4 *)param_1,uVar5);
    uVar5 = uVar5 + param_4[0x42];
    param_4[0x42] = uVar5;
    if (param_4[0x40] < uVar5) {
      param_4[0x40] = uVar5;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000d000

#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006150
 */

undefined4 recovered_10006150(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000d000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10006169;
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
LAB_10006169:
  *(undefined4 *)PTR_DAT_1000d000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000d000

#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061f0
 */

undefined4 recovered_100061f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000d000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_1000d000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006220(int *param_1)

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
    *(undefined4 *)PTR_DAT_1000d000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000d000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062e0
 */

undefined1 recovered_100062e0(int param_1)

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
 * Address: 0x10006300
 */

undefined1 recovered_10006300(int param_1)

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
 * Address: 0x10006320
 */

void recovered_10006320(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006350
 */

uint recovered_10006350(uint param_1,int param_2)

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
#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(code * *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006390(int param_1)

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
  *(undefined4 *)PTR_DAT_1000d000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef PTR_DAT_1000d000
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
#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523U)))
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
 * Address: 0x10006410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006410(int param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000d000 = 0x16;
  }
  else {
    recovered_100024b0((byte *)&local_20,0,0xc);
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
    *(undefined4 *)PTR_DAT_1000d000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef PTR_DAT_1000d000
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
#define local_20 (*(undefined4 * *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006590(int param_1,undefined4 *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  uint uVar3;

  if ((((param_3 == (uint *)0x0 || (param_2 == (undefined4 *)0x0 || param_1 == 0)) ||
       (recovered_100024b0((byte *)&local_20,0,0xc), _DAT_00280800 != 0x50414d57)) ||
      (_DAT_00280804 == 0)) ||
     (((_DAT_00280808 < 0xc || (_DAT_00280808 < 0x38)) ||
      ((_DAT_00280834 == (code *)0x0 || (iVar1 = (*_DAT_00280834)(param_1,&local_20), iVar1 == 0))))
     )) {
    return 0;
  }
  puVar2 = recovered_10002130(local_1c + (local_1c == 0));
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar3 = 0;
  if (local_1c != 0) {
    recovered_10002220(puVar2,local_20,local_1c);
    uVar3 = local_1c;
  }
  *param_2 = puVar2;
  *param_3 = uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
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
 * Address: 0x10006670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006670(int param_1,int param_2,int param_3)

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
 * Address: 0x100066f0
 */

undefined4 recovered_100066f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006700
 */

void recovered_10006700(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006710
 */

undefined4 recovered_10006710(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006720
 */

undefined4 recovered_10006720(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006730
 */

undefined4 recovered_10006730(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006740
 */

int recovered_10006740(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  bool bVar3;

  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    while( true ) {
      bVar1 = *(byte *)(param_1 + iVar2);
      if (bVar1 != *(byte *)(param_2 + iVar2)) break;
      if (bVar1 == 0) {
        return 0;
      }
      bVar3 = param_3 + -1 == iVar2;
      iVar2 = iVar2 + 1;
      if (bVar3) {
        return 0;
      }
    }
    iVar2 = (uint)bVar1 - (uint)*(byte *)(param_2 + iVar2);
  }
  return iVar2;
}


#undef DAT_1000cc1f
#define DAT_1000cc1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef str_1000cc22
#define str_1000cc22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x145U)))
#undef str_1000cc2f
#define str_1000cc2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x152U)))
#undef str_1000cc39
#define str_1000cc39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15cU)))
#undef str_1000cc4d
#define str_1000cc4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x170U)))
#undef str_1000cc5b
#define str_1000cc5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17eU)))
#undef str_1000cc6d
#define str_1000cc6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x190U)))
#undef str_1000cc79
#define str_1000cc79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19cU)))
#undef str_1000cc8a
#define str_1000cc8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1adU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006790
 */

char * recovered_10006790(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000cc1f;
  switch((uintptr_t)(param_1)) {
  case 0:
    break;
  default:
    pcVar1 = str_1000cc8a;
    break;
  case 2:
    pcVar1 = str_1000cc22;
    break;
  case 5:
    pcVar1 = str_1000cc2f;
    break;
  case 9:
    pcVar1 = str_1000cc39;
    break;
  case 0xc:
    pcVar1 = str_1000cc4d;
    break;
  case 0xd:
    pcVar1 = str_1000cc5b;
    break;
  case 0x11:
    pcVar1 = str_1000cc6d;
    break;
  case 0x16:
    pcVar1 = str_1000cc79;
  }
  return pcVar1;
}

#undef DAT_1000cc1f
#undef str_1000cc22
#undef str_1000cc2f
#undef str_1000cc39
#undef str_1000cc4d
#undef str_1000cc5b
#undef str_1000cc6d
#undef str_1000cc79
#undef str_1000cc8a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006860
 */

undefined4 recovered_10006860(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006870
 */

undefined4 recovered_10006870(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000d2a4
#define DAT_1000d2a4 (*(int *)(((uintptr_t)pf_module_state + 0x7c7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006880
 */

void recovered_10006880(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000d2a4 = DAT_1000d2a4 + 1;
  return;
}

#undef DAT_1000d2a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068a0
 */

longlong recovered_100068a0(longdouble param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_100032e0((double)param_1);
  return lVar1;
}


#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068c0
 */

uint recovered_100068c0(byte *param_1,double *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10004270(local_21c,0x200,param_1,param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005260((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006910
 */

uint recovered_10006910(byte *param_1,double param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10004270(local_21c,0x200,param_1,&param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005260((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

/* Native IA32 exception-scope stack, frame and program-counter transfer.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006970(void *context,...){
 __asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\njmpl *36(%eax)");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006980(void *context){__asm__ volatile("movl 4(%esp), %eax\nmovl %ebx, (%eax)\nmovl %esi, 4(%eax)\nmovl %edi, 8(%eax)\nmovl %ebp, 0xc(%eax)\nleal 4(%esp), %edx\nmovl %edx, 0x10(%eax)\nmovl (%esp), %edx\nmovl %edx, 0x14(%eax)\nmovl $0xffffffff, 0x18(%eax)\nmovl %eax, %esi\nmovl $1, %eax\ncpuid \nandl $0x3000000, %edx\ncmpl $0x3000000, %edx\njne Lpf_context_100069be\nstmxcsr 0x18(%esi)\nLpf_context_100069be:\nfnstcw 0x1c(%esi)\nxorl %eax, %eax\nmovl (%esi), %ebx\nmovl 4(%esi), %esi\nretl \nud2 \nnop \nnop \nnop \nnop \nnop ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100069d0(void *context,int value){__asm__ volatile("movl 4(%esp), %edx\nmovl 8(%esp), %eax\ntestl %eax, %eax\njne Lpf_context_100069e1\nmovl $1, %eax\nLpf_context_100069e1:\ncmpl $-1, 0x18(%edx)\nje Lpf_context_100069eb\nldmxcsr 0x18(%edx)\nLpf_context_100069eb:\nfldcw 0x1c(%edx)\nmovl (%edx), %ebx\nmovl 4(%edx), %esi\nmovl 8(%edx), %edi\nmovl 0xc(%edx), %ebp\nmovl 0x10(%edx), %esp\njmpl *0x14(%edx)\nud2 \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop ");}


#undef DAT_1000cf68
#define DAT_1000cf68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48bU)))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a10
 */

void recovered_10006a10(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a90;
  local_2c = &DAT_1000cf68;
  local_24 = 0x40;
  local_44 = 1;
  recovered_10007100(&local_48);
  recovered_100020f0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000cf68
#undef local_44
#undef auStackY_d0
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a90
 */

undefined4 recovered_10006a90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006aa0
 */

void recovered_10006aa0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006ac0();
                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}


#undef DAT_1000d2a8
#define DAT_1000d2a8 (*(int *)(((uintptr_t)pf_module_state + 0x7cbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ac0
 */

void recovered_10006ac0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;

  recovered_10006f00();
  if (extraout_EAX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006a10();
  }
  *(int *)(extraout_EAX + 8) = DAT_1000d2a8;
  *(undefined1 *)(extraout_EAX + 0x20) = 0;
  DAT_1000d2a8 = extraout_EAX;
  recovered_10006f50();
  return;
}

#undef DAT_1000d2a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b00
 */

void * recovered_10006b00(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10002130(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100020f0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b30
 */

void * recovered_10006b30(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10002130(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100020f0();
  }
  return pvVar1;
}


#undef DAT_1000cf78
#define DAT_1000cf78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49bU)))
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
 * Address: 0x10006b60
 */

void recovered_10006b60(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a90;
  local_2c = &DAT_1000cf78;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007100(&local_48);
  recovered_10002180(param_1);
  recovered_10007130(&local_48);
  return;
}

#undef DAT_1000cf78
#undef local_24
#undef auStackY_d0
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28

#undef DAT_1000cf88
#define DAT_1000cf88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4abU)))
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
 * Address: 0x10006bf0
 */

void recovered_10006bf0(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a90;
  local_2c = &DAT_1000cf88;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007100(&local_48);
  recovered_10002180(param_1);
  recovered_10007130(&local_48);
  return;
}

#undef DAT_1000cf88
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef auStack_1c
#undef local_24
#undef local_20

#undef DAT_1000cf98
#define DAT_1000cf98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bbU)))
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
 * Address: 0x10006c80
 */

void recovered_10006c80(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a90;
  local_2c = &DAT_1000cf98;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007100(&local_48);
  recovered_10002180(param_1);
  recovered_10007130(&local_48);
  return;
}

#undef DAT_1000cf98
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_1000cfa8
#define DAT_1000cfa8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cbU)))
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
 * Address: 0x10006d10
 */

void recovered_10006d10(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a90;
  local_2c = &DAT_1000cfa8;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007100(&local_48);
  recovered_10002180(param_1);
  recovered_10007130(&local_48);
  return;
}

#undef DAT_1000cfa8
#undef local_2c
#undef auStackY_d0
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006da0
 */

undefined4 recovered_10006da0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006db0
 */

uint recovered_10006db0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dd0
 */

void recovered_10006dd0(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006de0
 */

void recovered_10006de0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000d2b0
#define DAT_1000d2b0 (*(int *)(((uintptr_t)pf_module_state + 0x7d3U)))
#undef DAT_1000d2b4
#define DAT_1000d2b4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006df0
 */

undefined1 * recovered_10006df0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;
  int iVar3;

  size = param_1 + 0x24 + (uint)(param_1 == 0);
  puVar1 = recovered_10002130(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006a10();
  }
  if (size != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      size = size - 1;
    } while (size != 0);
  }
  DAT_1000d2b0 = DAT_1000d2b0 + 1 + (uint)(DAT_1000d2b0 == -1);
  if (DAT_1000d2b4 == (undefined1 *)0x0) {
LAB_10006e6c:
    *(int *)(puVar1 + 0x1c) = DAT_1000d2b0;
    *(undefined1 **)(puVar1 + 0xc) = DAT_1000d2b4;
    DAT_1000d2b4 = puVar1;
    return puVar1 + 0x24;
  }
  do {
    iVar3 = (int)DAT_1000d2b4;
    while (*(int *)(iVar3 + 0x1c) != DAT_1000d2b0) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_10006e6c;
    }
    DAT_1000d2b0 = DAT_1000d2b0 + 1 + (uint)(DAT_1000d2b0 == -1);
  } while( true );
}

#undef DAT_1000d2b0
#undef DAT_1000d2b4

#undef DAT_1000d2b4
#define DAT_1000d2b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e90
 */

void recovered_10006e90(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  if (param_1 != 0) {
    pointer = (void *)(param_1 + -0x24);
    pvVar1 = DAT_1000d2b4;
    if (DAT_1000d2b4 == pointer) {
      puVar2 = &DAT_1000d2b4;
    }
    else {
      do {
        pvVar3 = pvVar1;
        if (pvVar3 == (void *)0x0) goto LAB_10006ee4;
        pvVar1 = *(void **)((int)pvVar3 + 0xc);
      } while (*(void **)((int)pvVar3 + 0xc) != pointer);
      puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
    }
    *puVar2 = *(undefined4 *)(param_1 + -0x18);
    *(undefined4 *)(param_1 + -0x18) = 0;
LAB_10006ee4:
    recovered_10002180(pointer);
  }
  return;
}

#undef DAT_1000d2b4

#undef DAT_1000d2b4
#define DAT_1000d2b4 (*(int *)(((uintptr_t)pf_module_state + 0x7d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f00
 */

void recovered_10006f00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;

  iVar1 = DAT_1000d2b4;
  if (DAT_1000d2b4 != in_ECX && DAT_1000d2b4 != 0) {
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

#undef DAT_1000d2b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f50
 */

int recovered_10006f50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  return in_ECX + 0x24;
}


#undef DAT_1000d2a8
#define DAT_1000d2a8 (*(void * *)(((uintptr_t)pf_module_state + 0x7cbU)))
#undef DAT_1000d2b4
#define DAT_1000d2b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f60
 */

void recovered_10006f60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  pointer = DAT_1000d2a8;
  if (DAT_1000d2a8 != (void *)0x0) {
    puVar2 = (undefined4 *)((int)DAT_1000d2a8 + 8);
    DAT_1000d2a8 = *(void **)((int)DAT_1000d2a8 + 8);
    *puVar2 = 0;
    if (*(char *)((int)pointer + 0x20) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x24);
      }
      pvVar1 = DAT_1000d2b4;
      if (DAT_1000d2b4 == pointer) {
        puVar2 = &DAT_1000d2b4;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_10006fd4;
          pvVar1 = *(void **)((int)pvVar3 + 0xc);
        } while (*(void **)((int)pvVar3 + 0xc) != pointer);
        puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
      }
      *puVar2 = *(undefined4 *)((int)pointer + 0xc);
      *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_10006fd4:
      recovered_10002180(pointer);
    }
  }
  return;
}

#undef DAT_1000d2a8
#undef DAT_1000d2b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff0
 */

void recovered_10006ff0(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007030();
}


#undef DAT_1000d2a8
#define DAT_1000d2a8 (*(int *)(((uintptr_t)pf_module_state + 0x7cbU)))
#undef DAT_1000d2ac
#define DAT_1000d2ac (*(int * *)(((uintptr_t)pf_module_state + 0x7cfU)))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007030
 */

void recovered_10007030(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;

  if (DAT_1000d2ac != (int *)0x0) {
    piVar3 = DAT_1000d2ac;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar2 = recovered_10007a00((undefined2 *)&local_20);
      if (((char)uVar2 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(in_ECX + 0x10) = piVar3;
        *(undefined4 *)(in_ECX + 0x14) = local_1c;
        *(undefined4 *)(in_ECX + 0x18) = local_18;
        recovered_10007200();
        iVar1 = DAT_1000d2a8;
        if (DAT_1000d2a8 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006a10();
        }
        *(undefined1 *)(DAT_1000d2a8 + 0x20) = 1;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10007030();
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}

#undef DAT_1000d2a8
#undef DAT_1000d2ac
#undef local_18
#undef local_20
#undef local_1c

#undef DAT_1000d2a8
#define DAT_1000d2a8 (*(int *)(((uintptr_t)pf_module_state + 0x7cbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070c0
 */

void recovered_100070c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000d2a8;
  if (DAT_1000d2a8 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006a10();
  }
  *(undefined1 *)(DAT_1000d2a8 + 0x20) = 1;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007030();
}

#undef DAT_1000d2a8

#undef DAT_1000d2ac
#define DAT_1000d2ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x7cfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007100
 */

void recovered_10007100(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000d2ac;
  DAT_1000d2ac = param_1;
  return;
}

#undef DAT_1000d2ac

#undef DAT_1000d2ac
#define DAT_1000d2ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7cfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007130
 */

void recovered_10007130(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000d2ac;
  if (DAT_1000d2ac == param_1) {
    puVar2 = &DAT_1000d2ac;
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

#undef DAT_1000d2ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007170
 */

void recovered_10007170(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007030();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007190
 */

void recovered_10007190(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}


#undef DAT_1000d2ac
#define DAT_1000d2ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x7cfU)))
#undef DAT_1000d2b4
#define DAT_1000d2b4 (*(int *)(((uintptr_t)pf_module_state + 0x7d7U)))
#define iStack_4c (*(int *)(pf_stack_frame + 20))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071a0
 */

undefined4 recovered_100071a0(int param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX = 0;

  iVar4 = DAT_1000d2b4;
  if (DAT_1000d2b4 != param_1 && DAT_1000d2b4 != 0) {
    do {
      if (*(int *)(iVar4 + 0x1c) == param_1) goto LAB_100071e2;
      iVar4 = *(int *)(iVar4 + 0xc);
    } while ((iVar4 != 0) && (iVar4 != param_1));
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006a10();
  }
LAB_100071e2:
  if (DAT_1000d2ac != (undefined4 *)0x0) {
    DAT_1000d2ac = (undefined4 *)*DAT_1000d2ac;
  }
  recovered_10007200();
  if (DAT_1000d2ac != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(extraout_ECX + 0x10);
    do {
      puVar2 = DAT_1000d2ac;
      if (DAT_1000d2ac == puVar1) {
        DAT_1000d2ac[2] = extraout_ECX;
        puVar2[3] = *(undefined4 *)(extraout_ECX + 0x18);
        uVar3 = *(undefined4 *)(extraout_ECX + 0x14);
LAB_1000729e:
        puVar2[1] = uVar3;
        recovered_10006970((int)puVar2);
        recovered_100071a0(iStack_4c);
        return 0;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      recovered_10007a00((undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_3c;
        goto LAB_1000729e;
      }
      DAT_1000d2ac = (undefined4 *)*puVar2;
    } while (DAT_1000d2ac != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}

#undef DAT_1000d2ac
#undef DAT_1000d2b4
#undef iStack_4c
#undef uStack_40
#undef uStack_3c
#undef uStack_38

#undef DAT_1000d2ac
#define DAT_1000d2ac (*(int * *)(((uintptr_t)pf_module_state + 0x7cfU)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
#define iStack_2c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007200
 */

undefined4 recovered_10007200(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;

  if (DAT_1000d2ac != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0x10);
    do {
      piVar2 = DAT_1000d2ac;
      if (DAT_1000d2ac == piVar1) {
        DAT_1000d2ac[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x18);
        iVar3 = *(int *)(in_ECX + 0x14);
LAB_1000729e:
        piVar2[1] = iVar3;
        recovered_10006970((int)piVar2);
        recovered_100071a0(iStack_2c);
        return 0;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      recovered_10007a00((undefined2 *)&local_20);
      if (((char)local_20 == '\x01') && (PF_PART1(local_20, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_1c;
        goto LAB_1000729e;
      }
      DAT_1000d2ac = (int *)*piVar2;
    } while (DAT_1000d2ac != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}

#undef DAT_1000d2ac
#undef local_20
#undef local_1c
#undef local_18
#undef iStack_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072b0
 */

undefined4 recovered_100072b0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100071a0(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072d0
 */

undefined4 recovered_100072d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072e0
 */

void recovered_100072e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}


#undef DAT_1000d078
#define DAT_1000d078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59bU)))
#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072f0
 */

int recovered_100072f0(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_100073b0;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_100073b0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000d078) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_100073b0:
      local_1c = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_1c;
}

#undef DAT_1000d078
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073d0
 */

void recovered_100073d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100020f0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073f0
 */

undefined4 recovered_100073f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007400
 */

bool recovered_10007400(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007420
 */

bool recovered_10007420(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007460
 */

bool recovered_10007460(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007490
 */

bool recovered_10007490(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074b0
 */

bool recovered_100074b0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074d0
 */

byte recovered_100074d0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007510
 */

bool recovered_10007510(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1000cb20
#define DAT_1000cb20 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000cb70
#define DAT_1000cb70 (*(float *)(((uintptr_t)pf_module_state + 0x93U)))
#undef DAT_1000cb78
#define DAT_1000cb78 (*(double *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_1000cb80
#define DAT_1000cb80 (*(double *)(((uintptr_t)pf_module_state + 0xa3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007530
 */

double recovered_10007530(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;

  if (!NAN(value)) {
    if (DAT_1000cb78 < value) {
      return (double)DAT_1000cb70;
    }
    if (value < DAT_1000cb80) {
      return 0.0;
    }
    iVar4 = 0;
    dVar1 = (double)DAT_1000cae0;
    if (dVar1 < value) {
      iVar4 = 0;
      do {
        value = value * dVar1;
        iVar4 = iVar4 + 1;
      } while (dVar1 < value);
    }
    if ((double)DAT_1000cb20 <= value) {
      dVar1 = value;
    }
    else {
      do {
        value = value * (double)DAT_1000cae0;
        iVar4 = iVar4 + 1;
        dVar1 = value;
      } while (value < (double)DAT_1000cb20);
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

#undef DAT_1000cae0
#undef DAT_1000cb20
#undef DAT_1000cb70
#undef DAT_1000cb78
#undef DAT_1000cb80

#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1000cb20
#define DAT_1000cb20 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000cb70
#define DAT_1000cb70 (*(float *)(((uintptr_t)pf_module_state + 0x93U)))
#undef DAT_1000cb78
#define DAT_1000cb78 (*(double *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_1000cb80
#define DAT_1000cb80 (*(double *)(((uintptr_t)pf_module_state + 0xa3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007620
 */

float recovered_10007620(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;

  if (!NAN(value)) {
    if ((float)DAT_1000cb78 < value) {
      return DAT_1000cb70;
    }
    if (value < (float)DAT_1000cb80) {
      return 0.0;
    }
    iVar4 = 0;
    if (DAT_1000cae0 < value) {
      iVar4 = 0;
      do {
        value = value * DAT_1000cae0;
        iVar4 = iVar4 + 1;
      } while (DAT_1000cae0 < value);
    }
    if (DAT_1000cb20 <= value) {
      fVar1 = value;
    }
    else {
      do {
        value = value * DAT_1000cae0;
        iVar4 = iVar4 + 1;
        fVar1 = value;
      } while (value < DAT_1000cb20);
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

#undef DAT_1000cae0
#undef DAT_1000cb20
#undef DAT_1000cb70
#undef DAT_1000cb78
#undef DAT_1000cb80

#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1000cb20
#define DAT_1000cb20 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000cb70
#define DAT_1000cb70 (*(float *)(((uintptr_t)pf_module_state + 0x93U)))
#undef DAT_1000cb78
#define DAT_1000cb78 (*(double *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_1000cb80
#define DAT_1000cb80 (*(double *)(((uintptr_t)pf_module_state + 0xa3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007720
 */

float10 recovered_10007720(float10 value)

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
    if ((longdouble)DAT_1000cb78 < lVar4) {
      return (float10)(longdouble)DAT_1000cb70;
    }
    if (lVar4 < (longdouble)DAT_1000cb80) {
      return (float10)(longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_1000cae0;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_1000cb20) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_1000cae0;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_1000cb20);
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

#undef DAT_1000cae0
#undef DAT_1000cb20
#undef DAT_1000cb70
#undef DAT_1000cb78
#undef DAT_1000cb80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

double recovered_10007810(long end,long start)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)end - (double)start;
}


#undef DAT_1000cae0
#define DAT_1000cae0 (*(float *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1000cb20
#define DAT_1000cb20 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007840
 */

longdouble recovered_10007840(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_10003020(param_1);
  if ((longdouble)DAT_1000cae0 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)DAT_1000cb20 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_1000cae0
#undef DAT_1000cb20

#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078a0
 */

ulonglong recovered_100078a0(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_10007953;
    }
  }
  else {
    if (param_3 != 0) {
      local_18 = param_3;
      goto LAB_10007953;
    }
    if (*pbVar7 != 0x30) {
      local_18 = 10;
      goto LAB_10007953;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_18 = 8;
      goto LAB_10007953;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_18 = 0x10;
LAB_10007953:
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
 * Address: 0x100079e0
 */

ulonglong recovered_100079e0(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_100078a0(param_1,param_2,param_3);
  return uVar1;
}


#undef DAT_1000d078
#define DAT_1000d078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a00
 */

undefined4 recovered_10007a00(undefined2 *param_1)

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
      recovered_10007d90();
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
          goto LAB_10007bb0;
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
LAB_10007bb0:
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
       (pbVar13 = recovered_10007d90(), pbVar13 == (byte *)0x0)) {
LAB_10007d6e:
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
          if (iVar5 == iVar11) goto LAB_10007d6e;
        }
        else {
          iVar17 = 0;
          do {
            cVar2 = *(char *)(iVar5 + iVar17);
            cVar3 = *(char *)(iVar11 + iVar17);
            if ((cVar2 == '\0') || (cVar3 == '\0')) {
              if (cVar2 == cVar3) goto LAB_10007d6e;
              break;
            }
            iVar17 = iVar17 + 1;
          } while (cVar2 == cVar3);
        }
        if (*(undefined **)pbVar16 != &DAT_1000d078) goto LAB_10007d47;
        pbVar16 = *(byte **)(pbVar16 + 8);
        bVar20 = pbVar16 != (byte *)0x0;
      } while ((pbVar16 != pbVar13) && (pbVar16 != (byte *)0x0));
    }
    if (bVar20) goto LAB_10007d6e;
  }
LAB_10007d47:
  if ((uVar19 | uVar8) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar19 | uVar8);
  bVar20 = 0x3e < uVar7;
  uVar7 = uVar7 + 1;
  if (bVar20) {
    return 0;
  }
  goto LAB_10007bb0;
}

#undef DAT_1000d078

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d90
 */

byte * recovered_10007d90(void)

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
    goto LAB_10007e75;
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
    goto LAB_10007e75;
  case 0x4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_10007dcf_caseD_5;
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
LAB_10007e75:
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
switchD_10007dcf_caseD_5:
  return pbVar3;
}


#undef DAT_1000ccb9
#define DAT_1000ccb9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ee0
 */

undefined * recovered_10007ee0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000ccb9;
}

#undef DAT_1000ccb9

#undef PTR_str_1000cdea_1000d004
#define PTR_str_1000cdea_1000d004 (*(char * *)(((uintptr_t)pf_module_state + 0x527U)))
#undef str_1000ccbd
#define str_1000ccbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0U)))
#undef str_1000cccd
#define str_1000cccd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_1000ccee
#define str_1000ccee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x211U)))
#undef str_1000cda5
#define str_1000cda5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c8U)))
#undef str_1000cdae
#define str_1000cdae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d1U)))
#undef str_1000cdc3
#define str_1000cdc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e6U)))
#undef str_1000cdd1
#define str_1000cdd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f4U)))
#undef str_1000cde1
#define str_1000cde1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x304U)))
#define local_10b4 (*(byte * *)(pf_stack_frame + 28))
#define local_10b0 (*(byte * *)(pf_stack_frame + 32))
#define local_10ac (*(int *)(pf_stack_frame + 36))
#define local_10a0 (*(byte * *)(pf_stack_frame + 48))
#define local_1090 (*(byte * *)(pf_stack_frame + 64))
#define local_1074 (*(byte (*)[4212])(pf_stack_frame + 92))
#define local_1014 (*(char (*)[4116])(pf_stack_frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f00
 */

uint recovered_10007f00(char *param_1,byte *param_2,char *param_3,char *param_4,char *param_5,
                       uint param_6,char *param_7,uint param_8,char *param_9,uint param_10,
                       uint param_11)

{
  unsigned char pf_stack_frame[4336] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte bVar13;
  byte bVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;

  if (param_2 == (byte *)0x0) {
    local_10b4 = (byte *)0x0;
  }
  else {
    iVar2 = recovered_10002970((int)param_2);
    local_10b4 = param_2 + iVar2;
  }
  if (param_6 != 0 && param_5 != (char *)0x0) {
    *param_5 = '\0';
  }
  bVar19 = param_9 != (char *)0x0;
  bVar20 = param_10 != 0;
  if (bVar20 && bVar19) {
    *param_9 = '\0';
  }
  if (param_8 != 0 && param_7 != (char *)0x0) {
    *param_7 = '\0';
  }
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  local_1074[0] = 0;
  pbVar17 = param_2;
  do {
    pbVar3 = pbVar17 + 1;
    uVar10 = (uint)*pbVar17;
    if (0x17 < uVar10 - 9) break;
    pbVar17 = pbVar3;
  } while ((0x800013U >> (uVar10 - 9 & 0x1f) & 1) != 0);
  uVar11 = 0;
  while ((((bVar13 = (byte)uVar10, (byte)(bVar13 - 0x30U) < 10 ||
           ((byte)((bVar13 & 0xdf) + 0xbf) < 0x1a)) || (bVar13 == 0x5f)) || (uVar10 == 0x24))) {
    if (uVar11 + 1 < 0x60) {
      local_1074[uVar11] = bVar13;
      uVar11 = uVar11 + 1;
    }
    bVar13 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar10 = (uint)bVar13;
  }
  local_1074[uVar11] = 0;
  while ((uVar10 - 9 < 0x18 && ((0x800013U >> (uVar10 - 9 & 0x1f) & 1) != 0))) {
    uVar10 = (uint)*pbVar3;
    pbVar3 = pbVar3 + 1;
  }
  if ((uVar11 == 0) || ((char)uVar10 != '(')) goto LAB_100082d2;
  if (param_1 == (char *)0x0) {
    local_10a0 = (byte *)0x0;
LAB_100082a9:
    local_10b0 = (byte *)0x0;
  }
  else {
    local_10a0 = (byte *)0x0;
    if (local_1074[0] == 0) goto LAB_100082a9;
    local_10ac = recovered_10002970(((uintptr_t)pf_module_state+0x2c8U));
    local_10b0 = (byte *)0x0;
    if (local_10ac != 0) {
      local_10a0 = (byte *)0x0;
LAB_100080d5:
      if (*param_1 != '\0') {
        do {
          iVar2 = 0;
          pbVar17 = (byte *)str_1000cda5;
          while (bVar13 = param_1[iVar2], bVar13 != 0) {
            bVar14 = bVar13 | 0x20;
            if (0x19 < (byte)(bVar13 + 0xbf)) {
              bVar14 = bVar13;
            }
            bVar13 = *pbVar17;
            bVar9 = bVar13 | 0x20;
            if (0x19 < (byte)(bVar13 + 0xbf)) {
              bVar9 = bVar13;
            }
            if (bVar14 != bVar9) break;
            iVar2 = iVar2 + 1;
            pbVar17 = pbVar17 + 1;
            if (local_10ac == iVar2) goto LAB_10008160;
          }
          if (local_10ac == iVar2) goto LAB_10008160;
          pcVar5 = param_1 + 1;
          param_1 = param_1 + 1;
          if (*pcVar5 == '\0') {
            local_10b0 = (byte *)0x0;
            goto LAB_100082b1;
          }
        } while( true );
      }
      goto LAB_100082a9;
    }
  }
LAB_100082b1:
  if (local_10b0 != (byte *)0x0 && local_10a0 != (byte *)0x0) {
    param_2 = local_10b0;
    local_10b4 = local_10a0;
  }
LAB_100082d2:
  uVar10 = 0;
  if (((param_11 & 2) != 0) && (local_10b4 != (byte *)0x0)) {
    iVar2 = recovered_10002970(((uintptr_t)pf_module_state+0x1e0U));
    if ((param_2 <= local_10b4) &&
       (((param_2 != (byte *)0x0 && (iVar2 != 0)) && (uVar10 = 0, param_2 + iVar2 <= local_10b4))))
    {
      pbVar17 = param_2;
      do {
        if (*pbVar17 == 0) break;
        pbVar3 = pbVar17;
        pbVar15 = (byte *)str_1000ccbd;
        iVar4 = iVar2;
        while ((pbVar3 < local_10b4 && (bVar13 = *pbVar3, bVar13 != 0))) {
          bVar14 = bVar13 | 0x20;
          if (0x19 < (byte)(bVar13 + 0xbf)) {
            bVar14 = bVar13;
          }
          bVar13 = *pbVar15;
          bVar9 = bVar13 | 0x20;
          if (0x19 < (byte)(bVar13 + 0xbf)) {
            bVar9 = bVar13;
          }
          if (bVar14 != bVar9) break;
          pbVar15 = pbVar15 + 1;
          pbVar3 = pbVar3 + 1;
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) goto joined_r0x100083f0;
        }
        if (iVar4 == 0) {
joined_r0x100083f0:
          uVar10 = 4;
          if ((bVar20 && bVar19) && (uVar10 = 4, *param_9 == '\0')) {
            uVar11 = recovered_10002970(((uintptr_t)pf_module_state+0x1f0U));
            uVar10 = param_10 - 1;
            if (uVar11 < param_10) {
              uVar10 = uVar11;
            }
            if (uVar10 != 0) {
              recovered_10002220((undefined4 *)param_9,(undefined4 *)str_1000cccd,uVar10);
            }
            param_9[uVar10] = '\0';
            uVar10 = 4;
          }
          goto LAB_10008437;
        }
        pbVar3 = pbVar17 + iVar2 + 1;
        pbVar17 = pbVar17 + 1;
      } while (pbVar3 <= local_10b4);
      uVar10 = 0;
    }
  }
LAB_10008437:
  uVar11 = 0;
  if (((param_5 != (char *)0x0) && (param_6 != 0)) && (local_10b4 != (byte *)0x0)) {
    if (param_2 < local_10b4) {
      pbVar17 = param_2;
      do {
        iVar2 = recovered_10002970(((uintptr_t)pf_module_state+0x2d1U));
        pbVar3 = (byte *)0x0;
        if (((pbVar17 != (byte *)0x0) && (iVar2 != 0)) &&
           (pbVar3 = (byte *)0x0, pbVar17 + iVar2 <= local_10b4)) {
          pbVar3 = pbVar17;
          do {
            if (*pbVar3 == 0) break;
            pbVar15 = pbVar3;
            pbVar16 = (byte *)str_1000cdae;
            iVar4 = iVar2;
            while ((pbVar15 < local_10b4 && (bVar13 = *pbVar15, bVar13 != 0))) {
              bVar14 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar14 = bVar13;
              }
              bVar13 = *pbVar16;
              bVar9 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar9 = bVar13;
              }
              if (bVar14 != bVar9) break;
              pbVar16 = pbVar16 + 1;
              pbVar15 = pbVar15 + 1;
              iVar4 = iVar4 + -1;
              if (iVar4 == 0) goto LAB_1000859a;
            }
            if (iVar4 == 0) goto LAB_1000859a;
            pbVar15 = pbVar3 + iVar2 + 1;
            pbVar3 = pbVar3 + 1;
          } while (pbVar15 <= local_10b4);
          pbVar3 = (byte *)0x0;
        }
LAB_1000859a:
        pbVar15 = (byte *)0x0;
        iVar2 = recovered_10002970(((uintptr_t)pf_module_state+0x2e6U));
        if (((pbVar17 != (byte *)0x0) && (iVar2 != 0)) && (pbVar17 + iVar2 <= local_10b4)) {
          pbVar16 = pbVar17;
          while (pbVar15 = (byte *)0x0, *pbVar16 != 0) {
            pbVar12 = pbVar16;
            iVar4 = iVar2;
            pbVar18 = (byte *)str_1000cdc3;
            while ((pbVar15 = pbVar16, pbVar12 < local_10b4 && (bVar13 = *pbVar12, bVar13 != 0))) {
              bVar14 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar14 = bVar13;
              }
              bVar13 = *pbVar18;
              bVar9 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar9 = bVar13;
              }
              if (bVar14 != bVar9) break;
              pbVar18 = pbVar18 + 1;
              pbVar12 = pbVar12 + 1;
              iVar4 = iVar4 + -1;
              if (iVar4 == 0) goto LAB_10008668;
            }
            if (iVar4 == 0) break;
            pbVar12 = pbVar16 + iVar2 + 1;
            pbVar16 = pbVar16 + 1;
            pbVar15 = (byte *)0x0;
            if (local_10b4 < pbVar12) break;
          }
        }
LAB_10008668:
        iVar2 = recovered_10002970(((uintptr_t)pf_module_state+0x2f4U));
        local_1090 = (byte *)0x0;
        local_10b0 = (byte *)0x0;
        if (((pbVar17 != (byte *)0x0) && (local_10b0 = (byte *)0x0, iVar2 != 0)) &&
           (local_10b0 = (byte *)0x0, pbVar17 + iVar2 <= local_10b4)) {
          local_10b0 = pbVar17;
          do {
            if (*local_10b0 == 0) break;
            pbVar16 = local_10b0;
            iVar4 = iVar2;
            pbVar12 = (byte *)str_1000cdd1;
            while ((pbVar16 < local_10b4 && (bVar13 = *pbVar16, bVar13 != 0))) {
              bVar14 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar14 = bVar13;
              }
              bVar13 = *pbVar12;
              bVar9 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar9 = bVar13;
              }
              if (bVar14 != bVar9) break;
              pbVar12 = pbVar12 + 1;
              pbVar16 = pbVar16 + 1;
              iVar4 = iVar4 + -1;
              if (iVar4 == 0) goto LAB_10008768;
            }
            if (iVar4 == 0) goto LAB_10008768;
            pbVar16 = local_10b0 + iVar2 + 1;
            local_10b0 = local_10b0 + 1;
          } while (pbVar16 <= local_10b4);
          local_10b0 = (byte *)0x0;
        }
LAB_10008768:
        iVar2 = recovered_10002970(((uintptr_t)pf_module_state+0x304U));
        pbVar16 = local_1090;
        if (((pbVar17 != (byte *)0x0) && (iVar2 != 0)) && (pbVar17 + iVar2 <= local_10b4)) {
          while (pbVar16 = local_1090, *pbVar17 != 0) {
            pbVar12 = pbVar17;
            iVar4 = iVar2;
            pbVar18 = (byte *)str_1000cde1;
            while ((pbVar16 = pbVar17, pbVar12 < local_10b4 && (bVar13 = *pbVar12, bVar13 != 0))) {
              bVar14 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar14 = bVar13;
              }
              bVar13 = *pbVar18;
              bVar9 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar9 = bVar13;
              }
              if (bVar14 != bVar9) break;
              pbVar18 = pbVar18 + 1;
              pbVar12 = pbVar12 + 1;
              iVar4 = iVar4 + -1;
              if (iVar4 == 0) goto LAB_10008850;
            }
            if (iVar4 == 0) break;
            pbVar12 = pbVar17 + iVar2 + 1;
            pbVar17 = pbVar17 + 1;
            pbVar16 = local_1090;
            if (local_10b4 < pbVar12) break;
          }
        }
LAB_10008850:
        local_1090 = pbVar16;
        if (pbVar3 == (byte *)0x0) {
          if (pbVar15 != (byte *)0x0) goto LAB_10008878;
          if (local_10b0 != (byte *)0x0) goto LAB_1000888a;
LAB_10008892:
          local_10b0 = local_1090;
        }
        else {
          pbVar17 = pbVar3;
          if (pbVar15 < pbVar3) {
            pbVar17 = pbVar15;
          }
          bVar21 = pbVar15 == (byte *)0x0;
          pbVar15 = pbVar17;
          if (bVar21) {
            pbVar15 = pbVar3;
          }
LAB_10008878:
          pbVar17 = pbVar15;
          if (local_10b0 < pbVar15) {
            pbVar17 = local_10b0;
          }
          bVar21 = local_10b0 == (byte *)0x0;
          local_10b0 = pbVar17;
          if (bVar21) {
            local_10b0 = pbVar15;
          }
LAB_1000888a:
          if ((local_1090 != (byte *)0x0) && (local_1090 < local_10b0)) goto LAB_10008892;
        }
        if ((local_10b0 == (byte *)0x0) || (local_10b4 <= local_10b0)) break;
        if ((((param_2 < local_10b0) &&
             ((((bVar13 = local_10b0[-1], (byte)(bVar13 - 0x30U) < 10 ||
                ((byte)((bVar13 & 0xdf) + 0xbf) < 0x1a)) || (bVar13 == 0x24)) ||
              ((bVar13 == 0x5f || (bVar13 == 0x2e)))))) ||
            (pbVar3 = (byte *)recovered_10002ba0((char *)local_10b0,'='), pbVar3 == (byte *)0x0)) ||
           (local_10b4 <= pbVar3)) {
          pbVar17 = local_10b0 + 1;
        }
        else {
          pbVar15 = pbVar3 + 1;
          pbVar17 = pbVar15;
          if (pbVar15 < local_10b4) {
            pbVar3 = local_10b4 + (-1 - (int)pbVar3);
            do {
              bVar13 = *pbVar17;
              if (((bVar13 == 10) || (bVar13 == 0xd)) || (bVar13 == 0x3b)) goto LAB_10008950;
              pbVar17 = pbVar17 + 1;
              pbVar3 = pbVar3 + -1;
            } while (pbVar3 != (byte *)0x0);
            pbVar17 = local_10b4;
          }
LAB_10008950:
          *param_5 = '\0';
          uVar11 = recovered_1000a2e0(param_5,param_6,(char *)pbVar15,(char *)pbVar17,param_3,
                                      param_4);
          if (((uVar11 & 0x10) != 0) && (*param_5 != '\0')) goto LAB_10008b59;
        }
      } while (pbVar17 < local_10b4);
    }
    local_10b0 = (byte *)0x0;
    do {
      if (param_2 < local_10b4) {
        puVar1 = (&PTR_str_1000cdea_1000d004)[(int)local_10b0];
        pbVar17 = param_2;
LAB_10008a39:
        iVar2 = recovered_10002970((int)puVar1);
        if (((pbVar17 != (byte *)0x0) && (iVar2 != 0)) && (pbVar17 + iVar2 <= local_10b4)) {
          do {
            if (*pbVar17 == 0) break;
            iVar4 = 0;
            while ((pbVar17 + iVar4 < local_10b4 && (bVar13 = pbVar17[iVar4], bVar13 != 0))) {
              bVar14 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar14 = bVar13;
              }
              bVar13 = puVar1[iVar4];
              bVar9 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar9 = bVar13;
              }
              if (bVar14 != bVar9) break;
              iVar4 = iVar4 + 1;
              if (iVar2 == iVar4) goto LAB_10008ad0;
            }
            if (iVar2 == iVar4) goto LAB_10008ad0;
            pbVar3 = pbVar17 + iVar2 + 1;
            pbVar17 = pbVar17 + 1;
            if (local_10b4 < pbVar3) break;
          } while( true );
        }
      }
LAB_100089f0:
      local_10b0 = (byte *)((int)local_10b0 + 1);
    } while (local_10b0 != (byte *)0x5);
    uVar11 = 0;
  }
LAB_10008b59:
  uVar11 = uVar11 | uVar10;
  if (((param_11 & 1) != 0) && (local_10b4 != (byte *)0x0)) {
    uVar10 = 0xfff;
    if ((uint)((int)local_10b4 - (int)param_2) < 0xfff) {
      uVar10 = (int)local_10b4 - (int)param_2;
    }
    recovered_10002220((undefined4 *)local_1014,(undefined4 *)param_2,uVar10);
    local_1014[uVar10] = '\0';
    uVar10 = recovered_10008d00(local_1014,param_7,param_8);
    uVar6 = recovered_10008fd0(local_1014,param_7,param_8);
    uVar7 = recovered_10009720(local_1014,param_7,param_8);
    uVar8 = recovered_100098d0(local_1014,param_7,param_8);
    uVar11 = uVar11 | uVar8 | uVar7 | uVar6 | uVar10;
  }
  bVar21 = uVar11 == 0;
  if (bVar21) {
    uVar11 = 8;
  }
  if ((bVar20 && bVar19) && bVar21) {
    if (*param_9 == '\0') {
      uVar11 = recovered_10002970(((uintptr_t)pf_module_state+0x211U));
      uVar10 = param_10 - 1;
      if (uVar11 < param_10) {
        uVar10 = uVar11;
      }
      if (uVar10 != 0) {
        recovered_10002220((undefined4 *)param_9,(undefined4 *)str_1000ccee,uVar10);
      }
      param_9[uVar10] = '\0';
    }
    uVar11 = 8;
  }
  return uVar11;
LAB_10008160:
  pbVar17 = (byte *)(param_1 + 8);
  while ((*pbVar17 - 9 < 0x18 && ((0x800013U >> (*pbVar17 - 9 & 0x1f) & 1) != 0))) {
    pbVar17 = pbVar17 + 1;
  }
  iVar2 = recovered_10002970((int)local_1074);
  iVar4 = recovered_10006740((int)pbVar17,(int)local_1074,iVar2);
  if (iVar4 == 0) {
    uVar10 = pbVar17[iVar2] - 9;
    pbVar3 = local_10b0;
    pbVar15 = local_10a0;
    if ((uVar10 < 0x20) && ((0x80800013U >> (uVar10 & 0x1f) & 1) != 0)) {
      pcVar5 = recovered_10002ba0((char *)(pbVar17 + iVar2),'{');
      local_10b0 = (byte *)0x0;
      pbVar3 = local_10b0;
      if (pcVar5 != (char *)0x0) {
        iVar2 = 1;
        pbVar17 = (byte *)(pcVar5 + 1);
LAB_100081f0:
        bVar13 = *pbVar17;
        if (bVar13 < 0x27) {
          if (bVar13 == 0x22) goto LAB_10008225;
          pbVar3 = local_10b0;
          pbVar15 = local_10a0;
          if (bVar13 == 0) goto joined_r0x10008271;
        }
        else {
          if (bVar13 == 0x27) {
LAB_10008225:
            pbVar17 = pbVar17 + 1;
LAB_10008239:
            do {
              bVar14 = *pbVar17;
              if (bVar14 == 0x5c) {
                if (pbVar17[1] != 0) {
                  pbVar17 = pbVar17 + 2;
                  goto LAB_10008239;
                }
              }
              else if (bVar14 == 0) break;
              pbVar17 = pbVar17 + 1;
            } while (bVar14 != bVar13);
            goto LAB_100081f0;
          }
          if (bVar13 == 0x7b) {
            iVar2 = iVar2 + 1;
          }
          else {
            if (bVar13 != 0x7d) goto LAB_100081e7;
            iVar2 = iVar2 + -1;
            pbVar3 = (byte *)(pcVar5 + 1);
            pbVar15 = pbVar17;
            if (iVar2 == 0) goto joined_r0x10008271;
          }
        }
LAB_100081e7:
        pbVar17 = pbVar17 + 1;
        goto LAB_100081f0;
      }
    }
joined_r0x10008271:
    local_10a0 = pbVar15;
    local_10b0 = pbVar3;
    if ((uVar10 < 0x20) && ((0x80800013U >> (uVar10 & 0x1f) & 1) != 0)) goto LAB_100082b1;
  }
  param_1 = param_1 + 1;
  local_10ac = recovered_10002970(((uintptr_t)pf_module_state+0x2c8U));
  if (local_10ac == 0) goto LAB_100082a9;
  goto LAB_100080d5;
LAB_10008ad0:
  if (local_10b4 <= pbVar17) goto LAB_100089f0;
  pcVar5 = recovered_10002ba0((char *)pbVar17,'(');
  if (pcVar5 != (char *)0x0) {
    pbVar3 = (byte *)recovered_1000b510(pcVar5);
    if ((pbVar3 != (byte *)0x0) && (pbVar3 <= local_10b4)) {
      *param_5 = '\0';
      uVar11 = recovered_1000a2e0(param_5,param_6,pcVar5 + 1,(char *)pbVar3,param_3,param_4);
      pbVar17 = pbVar3;
      if (((uVar11 & 0x10) != 0) && (*param_5 != '\0')) goto LAB_10008b59;
    }
  }
  pbVar17 = pbVar17 + 1;
  if (local_10b4 <= pbVar17) goto LAB_100089f0;
  goto LAB_10008a39;
}

#undef PTR_str_1000cdea_1000d004
#undef str_1000ccbd
#undef str_1000cccd
#undef str_1000ccee
#undef str_1000cda5
#undef str_1000cdae
#undef str_1000cdc3
#undef str_1000cdd1
#undef str_1000cde1
#undef local_10b4
#undef local_10b0
#undef local_10ac
#undef local_10a0
#undef local_1090
#undef local_1074
#undef local_1014

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c90
 */

void recovered_10008c90(char *buffer,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if ((text != (char *)0x0 && (capacity != 0 && buffer != (char *)0x0)) && (*buffer == '\0')) {
    uVar1 = recovered_10002970((int)text);
    uVar2 = capacity - 1;
    if (uVar1 < capacity) {
      uVar2 = uVar1;
    }
    if (uVar2 != 0) {
      recovered_10002220((undefined4 *)buffer,(undefined4 *)text,uVar2);
    }
    buffer[uVar2] = '\0';
  }
  return;
}


#undef str_1000cd4a
#define str_1000cd4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_1000cf01
#define str_1000cf01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x424U)))
#define local_34 (*(byte * *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(byte * *)(pf_stack_frame + 36))
#define local_24 (*(char * *)(pf_stack_frame + 44))
#define local_18 (*(char * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d00
 */

uint recovered_10008d00(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  char *last;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;

  local_18 = str_1000cd4a;
  iVar2 = recovered_10002970(((uintptr_t)pf_module_state+0x26dU));
  if (iVar2 == 0 || script == (char *)0x0) {
    return 0;
  }
  local_30 = 0;
  local_24 = str_1000cf01;
LAB_10008d76:
  if (*script == 0) {
    return local_30;
  }
  local_2c = (byte *)script;
  do {
    local_2c = local_2c + 1;
    iVar7 = 0;
    pbVar6 = (byte *)local_18;
    while (bVar1 = script[iVar7], bVar1 != 0) {
      bVar5 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar5 = bVar1;
      }
      bVar1 = *pbVar6;
      bVar4 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar4 = bVar1;
      }
      if (bVar5 != bVar4) break;
      iVar7 = iVar7 + 1;
      pbVar6 = pbVar6 + 1;
      if (iVar2 == iVar7) goto LAB_10008e00;
    }
    if (iVar2 == iVar7) break;
    pbVar6 = (byte *)(script + 1);
    script = script + 1;
    if (*pbVar6 == 0) {
      return local_30;
    }
  } while( true );
LAB_10008e00:
  iVar2 = recovered_10002970(((uintptr_t)pf_module_state+0x424U));
  local_34 = (byte *)0x0;
  if ((iVar2 != 0) && (*script != 0)) {
    local_34 = (byte *)script;
    do {
      iVar7 = 0;
      pbVar6 = (byte *)local_24;
      while (bVar1 = local_34[iVar7], bVar1 != 0) {
        bVar5 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar5 = bVar1;
        }
        bVar1 = *pbVar6;
        bVar4 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar4 = bVar1;
        }
        if (bVar5 != bVar4) break;
        iVar7 = iVar7 + 1;
        pbVar6 = pbVar6 + 1;
        if (iVar2 == iVar7) goto LAB_10008ed9;
      }
      if (iVar2 == iVar7) goto LAB_10008ed9;
      pbVar6 = local_34 + 1;
      local_34 = local_34 + 1;
    } while (*pbVar6 != 0);
    local_34 = (byte *)0x0;
  }
LAB_10008ed9:
  pbVar6 = (byte *)script;
  while( true ) {
    if (*pbVar6 == 0) {
      return local_30;
    }
    if (*pbVar6 == 0x28) break;
    pbVar6 = pbVar6 + 1;
    local_2c = local_2c + 1;
  }
  while ((*local_2c - 9 < 0x18 && ((0x800013U >> (*local_2c - 9 & 0x1f) & 1) != 0))) {
    local_2c = local_2c + 1;
  }
  last = recovered_1000b510((char *)pbVar6);
  if (last != (char *)0x0) {
    uVar3 = recovered_1000c2f0(output,capacity,(char *)local_2c,last);
    if (uVar3 != 0) {
      local_30 = 1;
    }
    if (local_34 == (byte *)script) {
      local_30 = 1;
    }
    if (local_34 == (byte *)script && (capacity != 0 && output != (char *)0x0)) {
      iVar2 = recovered_10002970((int)output);
      local_30 = 1;
      if (iVar2 + 1U < capacity) {
        (output + iVar2)[0] = '\n';
        (output + iVar2)[1] = '\0';
      }
    }
    local_2c = (byte *)(last + 1);
  }
  iVar2 = recovered_10002970(((uintptr_t)pf_module_state+0x26dU));
  script = (char *)local_2c;
  if (iVar2 == 0) {
    return local_30;
  }
  goto LAB_10008d76;
}

#undef str_1000cd4a
#undef str_1000cf01
#undef local_34
#undef local_30
#undef local_2c
#undef local_24
#undef local_18

#undef PTR_str_1000cf2d_1000d018
#define PTR_str_1000cf2d_1000d018 (*(char * *)(((uintptr_t)pf_module_state + 0x53bU)))
#undef str_1000cf17
#define str_1000cf17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43aU)))
#undef str_1000cf22
#define str_1000cf22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x445U)))
#undef str_1000cf45
#define str_1000cf45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x468U)))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_28 (*(char * *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fd0
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_10008fd0(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;

  if (capacity == 0 || (output == (char *)0x0 || script == (char *)0x0)) {
    return 0;
  }
  local_28 = str_1000cf17;
  local_2c = recovered_10002970(((uintptr_t)pf_module_state+0x43aU));
  if (local_2c != 0) {
    local_24 = 0;
    pcVar5 = script;
LAB_10009068:
    if (*pcVar5 != '\0') {
      do {
        iVar14 = 0;
        pbVar12 = (byte *)local_28;
        while (bVar1 = pcVar5[iVar14], bVar1 != 0) {
          bVar11 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar11 = bVar1;
          }
          bVar1 = *pbVar12;
          bVar10 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar10 = bVar1;
          }
          if (bVar11 != bVar10) break;
          iVar14 = iVar14 + 1;
          pbVar12 = pbVar12 + 1;
          if (local_2c == iVar14) goto LAB_100090f0;
        }
        if (local_2c == iVar14) goto LAB_100090f0;
        pcVar6 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        if (*pcVar6 == '\0') break;
      } while( true );
    }
    goto LAB_1000915d;
  }
  local_24 = 0;
LAB_1000915d:
  local_2c = recovered_10002970(((uintptr_t)pf_module_state+0x445U));
  if (local_2c != 0) {
    pcVar5 = script;
LAB_100091a8:
    if (*pcVar5 != '\0') {
      do {
        iVar14 = 0;
        pbVar12 = (byte *)str_1000cf22;
        while (bVar1 = pcVar5[iVar14], bVar1 != 0) {
          bVar11 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar11 = bVar1;
          }
          bVar1 = *pbVar12;
          bVar10 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar10 = bVar1;
          }
          if (bVar11 != bVar10) break;
          iVar14 = iVar14 + 1;
          pbVar12 = pbVar12 + 1;
          if (local_2c == iVar14) goto LAB_10009230;
        }
        if (local_2c == iVar14) goto LAB_10009230;
        pcVar6 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        if (*pcVar6 == '\0') break;
      } while( true );
    }
  }
LAB_10009293:
  iVar14 = 0;
  bVar4 = true;
  do {
    bVar3 = bVar4;
    puVar2 = (&PTR_str_1000cf2d_1000d018)[iVar14];
    pcVar5 = script;
LAB_100092e5:
    iVar14 = recovered_10002970((int)puVar2);
    if ((iVar14 != 0) && (*pcVar5 != '\0')) {
      do {
        iVar13 = 0;
        while (bVar1 = pcVar5[iVar13], bVar1 != 0) {
          bVar11 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar11 = bVar1;
          }
          bVar1 = puVar2[iVar13];
          bVar10 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar10 = bVar1;
          }
          if (bVar11 != bVar10) break;
          iVar13 = iVar13 + 1;
          if (iVar14 == iVar13) goto LAB_10009370;
        }
        if (iVar14 == iVar13) goto LAB_10009370;
        pcVar6 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        if (*pcVar6 == '\0') break;
      } while( true );
    }
LAB_100092a0:
    iVar14 = 1;
    bVar4 = false;
  } while (bVar3);
LAB_100094a5:
  iVar14 = recovered_10002970(((uintptr_t)pf_module_state+0x468U));
  if (iVar14 == 0) {
    return local_24;
  }
  if (*script == '\0') {
    return local_24;
  }
  do {
    iVar13 = 0;
    pbVar12 = (byte *)str_1000cf45;
    while (bVar1 = script[iVar13], bVar1 != 0) {
      bVar11 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar11 = bVar1;
      }
      bVar1 = *pbVar12;
      bVar10 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar10 = bVar1;
      }
      if (bVar11 != bVar10) break;
      iVar13 = iVar13 + 1;
      pbVar12 = pbVar12 + 1;
      if (iVar14 == iVar13) goto LAB_10009530;
    }
    if (iVar14 == iVar13) goto LAB_10009530;
    pcVar5 = script + 1;
    script = script + 1;
    if (*pcVar5 == '\0') {
      return local_24;
    }
  } while( true );
LAB_100090f0:
  pcVar5 = recovered_10002ba0(pcVar5,'=');
  if (pcVar5 == (char *)0x0) goto LAB_1000915d;
  pcVar5 = pcVar5 + 1;
  pcVar6 = recovered_1000c7d0(pcVar5);
  if (pcVar6 != (char *)0x0) {
    uVar7 = recovered_1000c2f0(output,capacity,pcVar5,pcVar6);
    if (uVar7 != 0) {
      local_24 = 1;
    }
    if (*pcVar6 != '\0') {
      pcVar5 = pcVar6 + 1;
    }
  }
  local_2c = recovered_10002970(((uintptr_t)pf_module_state+0x43aU));
  if (local_2c == 0) goto LAB_1000915d;
  goto LAB_10009068;
LAB_10009230:
  pcVar5 = recovered_10002ba0(pcVar5,'=');
  if (pcVar5 == (char *)0x0) goto LAB_10009293;
  pcVar5 = pcVar5 + 1;
  pcVar6 = recovered_1000c7d0(pcVar5);
  if (pcVar6 != (char *)0x0) {
    uVar7 = recovered_1000c2f0(output,capacity,pcVar5,pcVar6);
    if (uVar7 != 0) {
      local_24 = 1;
    }
    if (*pcVar6 != '\0') {
      pcVar5 = pcVar6 + 1;
    }
  }
  local_2c = recovered_10002970(((uintptr_t)pf_module_state+0x445U));
  if (local_2c == 0) goto LAB_10009293;
  goto LAB_100091a8;
LAB_10009370:
  pcVar5 = recovered_10002ba0(pcVar5,'=');
  if (pcVar5 == (char *)0x0) goto LAB_100092a0;
  pcVar5 = pcVar5 + 1;
  pcVar6 = recovered_1000c7d0(pcVar5);
  if (pcVar6 != (char *)0x0) {
    uVar8 = recovered_10002970((int)output);
    uVar7 = uVar8 + 1;
    uVar9 = uVar7;
    if (uVar7 < capacity) {
      (output + uVar8)[0] = '<';
      (output + uVar8)[1] = '\0';
      uVar9 = uVar8 + 2;
      uVar8 = uVar7;
    }
    if (uVar9 < capacity) {
      output[uVar8] = 'p';
      output[uVar9] = '\0';
      uVar7 = uVar9 + 1;
    }
    else {
      uVar7 = uVar9;
      uVar9 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = '>';
      output[uVar7] = '\0';
    }
    recovered_1000c8e0(output,capacity,pcVar5,pcVar6);
    uVar8 = recovered_10002970((int)output);
    uVar7 = uVar8 + 1;
    uVar9 = uVar7;
    if (uVar7 < capacity) {
      (output + uVar8)[0] = '<';
      (output + uVar8)[1] = '\0';
      uVar9 = uVar8 + 2;
      uVar8 = uVar7;
    }
    if (uVar9 < capacity) {
      output[uVar8] = '/';
      output[uVar9] = '\0';
      uVar7 = uVar9 + 1;
    }
    else {
      uVar7 = uVar9;
      uVar9 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = 'p';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    else {
      uVar8 = uVar7;
    }
    if (uVar8 < capacity) {
      output[uVar9] = '>';
      output[uVar8] = '\0';
    }
    if (*pcVar6 != '\0') {
      pcVar5 = pcVar6 + 1;
    }
    local_24 = 1;
  }
  goto LAB_100092e5;
LAB_10009530:
  pcVar5 = recovered_10002ba0(script,'=');
  if (pcVar5 == (char *)0x0) {
    return local_24;
  }
  script = pcVar5 + 1;
  pcVar5 = recovered_1000c7d0(script);
  if (pcVar5 != (char *)0x0) {
    uVar9 = recovered_10002970((int)output);
    uVar7 = uVar9 + 1;
    uVar8 = uVar7;
    if (uVar7 < capacity) {
      (output + uVar9)[0] = '<';
      (output + uVar9)[1] = '\0';
      uVar8 = uVar9 + 2;
      uVar9 = uVar7;
    }
    if (uVar8 < capacity) {
      output[uVar9] = 't';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    else {
      uVar7 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = 'i';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    else {
      uVar8 = uVar7;
    }
    if (uVar8 < capacity) {
      output[uVar9] = 't';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    else {
      uVar7 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = 'l';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    else {
      uVar8 = uVar7;
    }
    if (uVar8 < capacity) {
      output[uVar9] = 'e';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    else {
      uVar7 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = '>';
      output[uVar7] = '\0';
    }
    recovered_1000c8e0(output,capacity,script,pcVar5);
    uVar9 = recovered_10002970((int)output);
    uVar7 = uVar9 + 1;
    if (uVar7 < capacity) {
      (output + uVar9)[0] = '<';
      (output + uVar9)[1] = '\0';
      uVar8 = uVar9 + 2;
      uVar9 = uVar7;
      uVar7 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = '/';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    else {
      uVar8 = uVar7;
    }
    uVar7 = uVar8;
    if (uVar8 < capacity) {
      output[uVar9] = 't';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = 'i';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    else {
      uVar8 = uVar7;
    }
    if (uVar8 < capacity) {
      output[uVar9] = 't';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    else {
      uVar7 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = 'l';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    else {
      uVar8 = uVar7;
    }
    if (uVar8 < capacity) {
      output[uVar9] = 'e';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    else {
      uVar7 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = '>';
      output[uVar7] = '\0';
    }
    if (*pcVar5 != '\0') {
      script = pcVar5 + 1;
    }
    local_24 = 1;
  }
  goto LAB_100094a5;
}

#undef PTR_str_1000cf2d_1000d018
#undef str_1000cf17
#undef str_1000cf22
#undef str_1000cf45
#undef local_2c
#undef local_28
#undef local_24

#undef str_1000cf54
#define str_1000cf54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x477U)))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(char * *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009720
 */

uint recovered_10009720(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *last;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;

  local_1c = str_1000cf54;
  local_20 = recovered_10002970(((uintptr_t)pf_module_state+0x477U));
  if (local_20 == 0 || script == (char *)0x0) {
    return 0;
  }
  local_24 = 0;
LAB_10009797:
  if (*script == 0) {
    return local_24;
  }
  do {
    iVar6 = 0;
    pbVar7 = (byte *)local_1c;
    while (bVar1 = script[iVar6], bVar1 != 0) {
      bVar4 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar4 = bVar1;
      }
      bVar1 = *pbVar7;
      bVar3 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar3 = bVar1;
      }
      if (bVar4 != bVar3) break;
      iVar6 = iVar6 + 1;
      pbVar7 = pbVar7 + 1;
      if (local_20 == iVar6) goto LAB_10009810;
    }
    if (local_20 == iVar6) break;
    pbVar7 = (byte *)(script + 1);
    script = script + 1;
    if (*pbVar7 == 0) {
      return local_24;
    }
  } while( true );
LAB_10009810:
  pbVar7 = (byte *)recovered_10002ba0(script,'(');
  if (pbVar7 == (byte *)0x0) {
    return local_24;
  }
  last = (byte *)recovered_1000b510((char *)pbVar7);
  if (last != (byte *)0x0) {
    pbVar5 = pbVar7 + 1;
joined_r0x1000983e:
    pbVar7 = last;
    if (pbVar5 < last) {
      bVar1 = *pbVar5;
      if (bVar1 < 0x2c) {
        if ((bVar1 == 0x22) || (bVar1 == 0x27)) goto LAB_10009875;
LAB_1000984b:
        pbVar5 = pbVar5 + 1;
      }
      else {
        if (bVar1 != 0x60) {
          if (bVar1 != 0x2c) goto LAB_1000984b;
          uVar2 = recovered_1000c2f0(output,capacity,(char *)(pbVar5 + 1),(char *)last);
          if (uVar2 != 0) {
            local_24 = 1;
          }
          goto LAB_10009782;
        }
LAB_10009875:
        pbVar7 = pbVar5 + 1;
        if (last <= pbVar5 + 1) goto LAB_1000984b;
        do {
          pbVar5 = pbVar7 + 1;
          if ((*pbVar7 == 0x5c) && (pbVar5 < last)) {
            pbVar5 = pbVar7 + 2;
          }
          else if (*pbVar7 == bVar1) break;
          pbVar7 = pbVar5;
        } while (pbVar5 < last);
      }
      goto joined_r0x1000983e;
    }
  }
LAB_10009782:
  script = (char *)(pbVar7 + 1);
  local_20 = recovered_10002970(((uintptr_t)pf_module_state+0x477U));
  if (local_20 == 0) {
    return local_24;
  }
  goto LAB_10009797;
}

#undef str_1000cf54
#undef local_24
#undef local_20
#undef local_1c

#undef str_1000cd8c
#define str_1000cd8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2afU)))
#undef str_1000cd98
#define str_1000cd98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bbU)))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_20 (*(char * *)(pf_stack_frame + 32))
#define local_1c (*(char * *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098d0
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_100098d0(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  char *pcVar9;
  byte bVar10;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  bool bVar14;

  local_28 = 0;
  if (script != (char *)0x0) {
    if (*script != '\0') {
      local_28 = 0;
      local_1c = str_1000cd8c;
      local_20 = str_1000cd98;
      do {
        iVar4 = recovered_10002970(((uintptr_t)pf_module_state+0x2afU));
        pcVar11 = (char *)0x0;
        if ((iVar4 != 0) && (*script != '\0')) {
          pcVar11 = script;
          do {
            iVar13 = 0;
            pbVar12 = (byte *)local_1c;
            while (bVar1 = pcVar11[iVar13], bVar1 != 0) {
              bVar10 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar10 = bVar1;
              }
              bVar1 = *pbVar12;
              bVar8 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar8 = bVar1;
              }
              if (bVar10 != bVar8) break;
              iVar13 = iVar13 + 1;
              pbVar12 = pbVar12 + 1;
              if (iVar4 == iVar13) goto LAB_10009a04;
            }
            if (iVar4 == iVar13) goto LAB_10009a04;
            pcVar6 = pcVar11 + 1;
            pcVar11 = pcVar11 + 1;
          } while (*pcVar6 != '\0');
          pcVar11 = (char *)0x0;
        }
LAB_10009a04:
        iVar4 = recovered_10002970(((uintptr_t)pf_module_state+0x2bbU));
        pcVar6 = (char *)0x0;
        if ((iVar4 == 0) || (*script == '\0')) {
joined_r0x10009a98:
          if (pcVar11 != (char *)0x0) goto LAB_10009a9a;
LAB_10009ab0:
          if (pcVar6 == (char *)0x0) {
            return local_28;
          }
        }
        else {
          do {
            iVar13 = 0;
            pbVar12 = (byte *)local_20;
            while( true ) {
              bVar1 = script[iVar13];
              pcVar6 = script;
              if (bVar1 == 0) break;
              bVar10 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar10 = bVar1;
              }
              bVar1 = *pbVar12;
              bVar8 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar8 = bVar1;
              }
              if (bVar10 != bVar8) break;
              iVar13 = iVar13 + 1;
              pbVar12 = pbVar12 + 1;
              if (iVar4 == iVar13) goto joined_r0x10009a98;
            }
            if (iVar4 == iVar13) goto joined_r0x10009a98;
            pcVar6 = script + 1;
            script = script + 1;
          } while (*pcVar6 != '\0');
          pcVar6 = (char *)0x0;
          if (pcVar11 == (char *)0x0) goto LAB_10009ab0;
LAB_10009a9a:
          pcVar5 = pcVar11;
          if (pcVar6 < pcVar11) {
            pcVar5 = pcVar6;
          }
          bVar14 = pcVar6 == (char *)0x0;
          pcVar6 = pcVar5;
          if (bVar14) {
            pcVar6 = pcVar11;
          }
        }
        pcVar11 = recovered_10002ba0(pcVar6,'(');
        if (pcVar11 == (char *)0x0) {
          return local_28;
        }
        pcVar6 = recovered_1000b510(pcVar11);
        if (pcVar6 != (char *)0x0) {
          bVar14 = false;
LAB_10009af0:
          do {
            pcVar5 = pcVar11 + 1;
            if (pcVar6 <= pcVar5) break;
            iVar4 = 1;
            pcVar9 = pcVar5;
            do {
              cVar2 = *pcVar9;
              if ((cVar2 == '\"') || (cVar2 == '\'')) {
                iVar4 = iVar4 + 1;
                do {
                  while( true ) {
                    if (pcVar6 <= pcVar11 + iVar4) goto LAB_10009b16;
                    pcVar9 = pcVar11 + iVar4;
                    if ((*pcVar9 != '\\') || (pcVar6 <= pcVar11 + iVar4 + 1)) break;
                    iVar4 = iVar4 + 2;
                  }
                  iVar4 = iVar4 + 1;
                } while (*pcVar9 != cVar2);
              }
              else {
                if (cVar2 == ',') {
                  bVar3 = true;
                  goto LAB_10009b82;
                }
                iVar4 = iVar4 + 1;
              }
LAB_10009b16:
              pcVar9 = pcVar11 + iVar4;
            } while (pcVar9 < pcVar6);
            bVar3 = false;
LAB_10009b82:
            pcVar11 = pcVar9;
            if (1 < iVar4) {
              if ((bVar14 && (output != (char *)0x0 && capacity != 0)) &&
                 (iVar4 = recovered_10002970((int)output), iVar4 + 1U < capacity)) {
                (output + iVar4)[0] = ' ';
                (output + iVar4)[1] = '\0';
              }
              uVar7 = recovered_1000c2f0(output,capacity,pcVar5,pcVar9);
              if (uVar7 != 0) {
                bVar14 = true;
              }
              if (!bVar3) break;
              goto LAB_10009af0;
            }
          } while (bVar3);
          if (bVar14) {
            local_28 = 1;
          }
          pcVar11 = pcVar6;
          if (bVar14 && (output != (char *)0x0 && capacity != 0)) {
            iVar4 = recovered_10002970((int)output);
            local_28 = 1;
            if (iVar4 + 1U < capacity) {
              (output + iVar4)[0] = '\n';
              (output + iVar4)[1] = '\0';
            }
          }
        }
        script = pcVar11 + 1;
      } while (pcVar11[1] != '\0');
    }
  }
  return local_28;
}

#undef str_1000cd8c
#undef str_1000cd98
#undef local_28
#undef local_20
#undef local_1c

#undef DAT_1000cd0a
#define DAT_1000cd0a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22dU)))
#undef str_1000ccbd
#define str_1000ccbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0U)))
#undef str_1000cccd
#define str_1000cccd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_1000ccee
#define str_1000ccee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x211U)))
#undef str_1000cd11
#define str_1000cd11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x234U)))
#undef str_1000cd40
#define str_1000cd40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x263U)))
#undef str_1000cd4a
#define str_1000cd4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_1000cd59
#define str_1000cd59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27cU)))
#undef str_1000cd63
#define str_1000cd63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x286U)))
#undef str_1000cd6f
#define str_1000cd6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x292U)))
#undef str_1000cd79
#define str_1000cd79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29cU)))
#undef str_1000cd8c
#define str_1000cd8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2afU)))
#undef str_1000cd98
#define str_1000cd98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bbU)))
#define local_2c (*(char * *)(pf_stack_frame + 20))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_1c (*(byte * *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c70
 */

uint recovered_10009c70(char *script,char *output,uint capacity,char *status,uint status_capacity,
                       uint flags)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  byte bVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;

  bVar12 = status != (char *)0x0;
  bVar13 = status_capacity != 0;
  if (bVar13 && bVar12) {
    *status = '\0';
  }
  if (script == (char *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = 0;
    if ((flags & 1) != 0) {
      uVar3 = recovered_10008d00(script,output,capacity);
      uVar4 = recovered_10008fd0(script,output,capacity);
      uVar5 = recovered_10009720(script,output,capacity);
      uVar6 = recovered_100098d0(script,output,capacity);
      local_28 = uVar6 | uVar5 | uVar4 | uVar3;
    }
    local_1c = &DAT_1000cd0a;
    iVar7 = recovered_10002970(((uintptr_t)pf_module_state+0x22dU));
    if ((iVar7 != 0) && (*script != '\0')) {
      local_2c = script;
      do {
        iVar9 = 0;
        pbVar11 = local_1c;
        while (bVar1 = local_2c[iVar9], bVar1 != 0) {
          bVar10 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar10 = bVar1;
          }
          bVar1 = *pbVar11;
          bVar2 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar2 = bVar1;
          }
          if (bVar10 != bVar2) break;
          iVar9 = iVar9 + 1;
          pbVar11 = pbVar11 + 1;
          if (iVar7 == iVar9) goto LAB_10009db0;
        }
        if (iVar7 == iVar9) {
LAB_10009db0:
          local_28 = local_28 | 2;
          if ((bVar13 && bVar12) && (*status == '\0')) {
            uVar4 = recovered_10002970(((uintptr_t)pf_module_state+0x234U));
            uVar3 = status_capacity - 1;
            if (uVar4 < status_capacity) {
              uVar3 = uVar4;
            }
            if (uVar3 != 0) {
              recovered_10002220((undefined4 *)status,(undefined4 *)str_1000cd11,uVar3);
            }
            status[uVar3] = '\0';
          }
          break;
        }
        pcVar8 = local_2c + 1;
        local_2c = local_2c + 1;
      } while (*pcVar8 != '\0');
    }
    if ((flags & 2) != 0) {
      local_1c = (byte *)str_1000ccbd;
      iVar7 = recovered_10002970(((uintptr_t)pf_module_state+0x1e0U));
      if ((iVar7 != 0) && (*script != '\0')) {
        local_2c = script;
        do {
          iVar9 = 0;
          pbVar11 = local_1c;
          while (bVar1 = local_2c[iVar9], bVar1 != 0) {
            bVar10 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar10 = bVar1;
            }
            bVar1 = *pbVar11;
            bVar2 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar2 = bVar1;
            }
            if (bVar10 != bVar2) break;
            iVar9 = iVar9 + 1;
            pbVar11 = pbVar11 + 1;
            if (iVar7 == iVar9) goto LAB_10009eb9;
          }
          if (iVar7 == iVar9) {
LAB_10009eb9:
            local_28 = local_28 | 4;
            if ((bVar13 && bVar12) && (*status == '\0')) {
              uVar4 = recovered_10002970(((uintptr_t)pf_module_state+0x1f0U));
              uVar3 = status_capacity - 1;
              if (uVar4 < status_capacity) {
                uVar3 = uVar4;
              }
              if (uVar3 != 0) {
                recovered_10002220((undefined4 *)status,(undefined4 *)str_1000cccd,uVar3);
              }
              status[uVar3] = '\0';
            }
            break;
          }
          pcVar8 = local_2c + 1;
          local_2c = local_2c + 1;
        } while (*pcVar8 != '\0');
      }
    }
    iVar7 = recovered_10002970(((uintptr_t)pf_module_state+0x263U));
    if ((iVar7 != 0) && (*script != '\0')) {
      local_2c = script;
      do {
        iVar9 = 0;
        pbVar11 = (byte *)str_1000cd40;
        while (bVar1 = local_2c[iVar9], bVar1 != 0) {
          bVar10 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar10 = bVar1;
          }
          bVar1 = *pbVar11;
          bVar2 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar2 = bVar1;
          }
          if (bVar10 != bVar2) break;
          iVar9 = iVar9 + 1;
          pbVar11 = pbVar11 + 1;
          if (iVar7 == iVar9) goto LAB_1000a1fd;
        }
        if (iVar7 == iVar9) goto LAB_1000a1fd;
        pcVar8 = local_2c + 1;
        local_2c = local_2c + 1;
      } while (*pcVar8 != '\0');
    }
    iVar7 = recovered_10002970(((uintptr_t)pf_module_state+0x26dU));
    if ((iVar7 != 0) && (*script != '\0')) {
      local_2c = script;
      do {
        iVar9 = 0;
        pbVar11 = (byte *)str_1000cd4a;
        while (bVar1 = local_2c[iVar9], bVar1 != 0) {
          bVar10 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar10 = bVar1;
          }
          bVar1 = *pbVar11;
          bVar2 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar2 = bVar1;
          }
          if (bVar10 != bVar2) break;
          iVar9 = iVar9 + 1;
          pbVar11 = pbVar11 + 1;
          if (iVar7 == iVar9) goto LAB_1000a1fd;
        }
        if (iVar7 == iVar9) goto LAB_1000a1fd;
        pcVar8 = local_2c + 1;
        local_2c = local_2c + 1;
      } while (*pcVar8 != '\0');
    }
    iVar7 = recovered_10002970(((uintptr_t)pf_module_state+0x27cU));
    if ((iVar7 != 0) && (*script != '\0')) {
      local_2c = script;
      do {
        iVar9 = 0;
        pbVar11 = (byte *)str_1000cd59;
        while (bVar1 = local_2c[iVar9], bVar1 != 0) {
          bVar10 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar10 = bVar1;
          }
          bVar1 = *pbVar11;
          bVar2 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar2 = bVar1;
          }
          if (bVar10 != bVar2) break;
          iVar9 = iVar9 + 1;
          pbVar11 = pbVar11 + 1;
          if (iVar7 == iVar9) goto LAB_1000a1fd;
        }
        if (iVar7 == iVar9) goto LAB_1000a1fd;
        pcVar8 = local_2c + 1;
        local_2c = local_2c + 1;
      } while (*pcVar8 != '\0');
    }
    iVar7 = recovered_10002970(((uintptr_t)pf_module_state+0x286U));
    if ((iVar7 != 0) && (*script != '\0')) {
      local_2c = script;
      do {
        iVar9 = 0;
        pbVar11 = (byte *)str_1000cd63;
        while (bVar1 = local_2c[iVar9], bVar1 != 0) {
          bVar10 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar10 = bVar1;
          }
          bVar1 = *pbVar11;
          bVar2 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar2 = bVar1;
          }
          if (bVar10 != bVar2) break;
          iVar9 = iVar9 + 1;
          pbVar11 = pbVar11 + 1;
          if (iVar7 == iVar9) goto LAB_1000a1fd;
        }
        if (iVar7 == iVar9) goto LAB_1000a1fd;
        pcVar8 = local_2c + 1;
        local_2c = local_2c + 1;
      } while (*pcVar8 != '\0');
    }
    pcVar8 = recovered_1000a230(script,str_1000cd6f);
    if ((((pcVar8 == (char *)0x0) &&
         (pcVar8 = recovered_1000a230(script,str_1000cd79), pcVar8 == (char *)0x0)) &&
        (pcVar8 = recovered_1000a230(script,str_1000cd8c), pcVar8 == (char *)0x0)) &&
       (((pcVar8 = recovered_1000a230(script,str_1000cd98), pcVar8 == (char *)0x0 &&
         (pcVar8 = recovered_1000a230(script,&DAT_1000cd0a), pcVar8 == (char *)0x0)) &&
        ((pcVar8 = recovered_1000a230(script,str_1000ccbd), pcVar8 == (char *)0x0 &&
         (*script != '\0')))))) {
      local_28 = local_28 | 8;
      recovered_10008c90(status,status_capacity,str_1000ccee);
    }
  }
LAB_1000a1fd:
  return local_28;
}

#undef DAT_1000cd0a
#undef str_1000ccbd
#undef str_1000cccd
#undef str_1000ccee
#undef str_1000cd11
#undef str_1000cd40
#undef str_1000cd4a
#undef str_1000cd59
#undef str_1000cd63
#undef str_1000cd6f
#undef str_1000cd79
#undef str_1000cd8c
#undef str_1000cd98
#undef local_2c
#undef local_28
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a230
 */

char * recovered_1000a230(char *text,char *pattern)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;

  if ((pattern != (char *)0x0) &&
     (iVar4 = recovered_10002970((int)pattern), iVar4 != 0 && text != (char *)0x0)) {
    cVar2 = *text;
    while (cVar2 != '\0') {
      iVar7 = 0;
      while (bVar3 = text[iVar7], bVar3 != 0) {
        bVar6 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar6 = bVar3;
        }
        bVar3 = pattern[iVar7];
        bVar5 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar5 = bVar3;
        }
        if (bVar6 != bVar5) break;
        iVar7 = iVar7 + 1;
        if (iVar4 == iVar7) {
          return text;
        }
      }
      if (iVar4 == iVar7) {
        return text;
      }
      pcVar1 = text + 1;
      text = text + 1;
      cVar2 = *pcVar1;
    }
  }
  return (char *)0x0;
}


#undef DAT_1000cbcb
#define DAT_1000cbcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef str_1000ce46
#define str_1000ce46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x369U)))
#undef str_1000ce59
#define str_1000ce59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37cU)))
#undef str_1000ce63
#define str_1000ce63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x386U)))
#undef str_1000ce7b
#define str_1000ce7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39eU)))
#undef str_1000ce90
#define str_1000ce90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b3U)))
#undef str_1000ce97
#define str_1000ce97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3baU)))
#undef str_1000ceae
#define str_1000ceae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d1U)))
#undef str_1000ceb9
#define str_1000ceb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#define local_244 (*(byte * *)(pf_stack_frame + 28))
#define local_240 (*(int *)(pf_stack_frame + 32))
#define local_214 (*(char (*)[532])(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2e0
 */

uint recovered_1000a2e0(char *output,uint capacity,char *first,char *last,char *url,char *html)

{
  unsigned char pf_stack_frame[640] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  char *last_00;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  byte *pbVar12;
  byte bVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;

  if (first < last && first != (char *)0x0) {
    pcVar6 = &DAT_1000cbcb;
    if (html != (char *)0x0) {
      pcVar6 = html;
    }
    do {
      bVar1 = *first;
      switch((uintptr_t)(bVar1)) {
      case 9:
      case 10:
      case 0xd:
      case 0x20:
      case 0x2b:
        first = first + 1;
        goto joined_r0x1000a9be;
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
        goto switchD_1000a357_caseD_b;
      case 0x22:
      case 0x27:
        pbVar14 = (byte *)(first + 1);
        iVar16 = 0;
        pbVar7 = pbVar14;
        if (pbVar14 < last) {
          do {
            pbVar8 = pbVar7 + 1;
            if (pbVar8 < last && *pbVar7 == 0x5c) {
              pbVar8 = pbVar7 + 2;
            }
            else if (*pbVar7 == bVar1) {
              iVar16 = 1;
              goto LAB_1000a5c2;
            }
            pbVar7 = pbVar8;
          } while (pbVar8 < last);
          iVar16 = 0;
        }
LAB_1000a5c2:
        recovered_1000af20(output,capacity,(char *)pbVar14,(char *)pbVar7);
        first = (char *)(pbVar7 + iVar16);
        goto LAB_1000a9b0;
      }
      if (bVar1 == 0x60) {
LAB_1000a3c1:
        pbVar14 = (byte *)(first + 1);
        iVar16 = 0;
        pbVar7 = pbVar14;
        if (pbVar14 < last) {
          pbVar8 = pbVar14;
          do {
            bVar1 = *pbVar8;
            pbVar7 = pbVar8 + 1;
            if (pbVar7 < last && bVar1 == 0x5c) {
              pbVar7 = pbVar8 + 2;
            }
            else if (bVar1 == 0x24) {
              if ((pbVar7 < last) && (*pbVar7 == 0x7b)) goto code_r0x1000a42c;
            }
            else if (bVar1 == 0x60) {
              iVar16 = 1;
              pbVar7 = pbVar8;
              break;
            }
            pbVar8 = pbVar7;
            if (last <= pbVar7) break;
          } while( true );
        }
        recovered_1000af20(output,capacity,(char *)pbVar14,(char *)pbVar7);
        first = (char *)(pbVar7 + iVar16);
        goto LAB_1000a9b0;
      }
switchD_1000a357_caseD_b:
      iVar16 = recovered_10002970(((uintptr_t)pf_module_state+0x369U));
      local_244 = (byte *)0x0;
      if ((iVar16 != 0) && (*first != 0)) {
        local_244 = (byte *)first;
        do {
          iVar11 = 0;
          pbVar7 = (byte *)str_1000ce46;
          while (bVar1 = local_244[iVar11], bVar1 != 0) {
            bVar13 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar13 = bVar1;
            }
            bVar1 = *pbVar7;
            bVar2 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar2 = bVar1;
            }
            if (bVar13 != bVar2) break;
            iVar11 = iVar11 + 1;
            pbVar7 = pbVar7 + 1;
            if (iVar16 == iVar11) goto LAB_1000a5f1;
          }
          if (iVar16 == iVar11) goto LAB_1000a5f1;
          pbVar7 = local_244 + 1;
          local_244 = local_244 + 1;
        } while (*pbVar7 != 0);
        local_244 = (byte *)0x0;
      }
LAB_1000a5f1:
      if ((byte *)first == local_244) {
LAB_1000a771:
        pcVar5 = recovered_10002ba0(first,'(');
        if (pcVar5 == (char *)0x0) {
          return 8;
        }
        last_00 = recovered_1000b510(pcVar5);
        if (last_00 == (char *)0x0) {
          return 8;
        }
        if (last < last_00) {
          return 8;
        }
        uVar3 = recovered_1000b640(output,capacity,pcVar5 + 1,last_00,url,html,1);
        if ((uVar3 & 8) != 0) {
          return uVar3;
        }
        first = last_00 + 1;
      }
      else {
        iVar16 = recovered_10002970(((uintptr_t)pf_module_state+0x37cU));
        local_244 = (byte *)0x0;
        if ((iVar16 != 0) && (*first != 0)) {
          local_244 = (byte *)first;
          do {
            iVar11 = 0;
            pbVar7 = (byte *)str_1000ce59;
            while (bVar1 = local_244[iVar11], bVar1 != 0) {
              bVar13 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar13 = bVar1;
              }
              bVar1 = *pbVar7;
              bVar2 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar2 = bVar1;
              }
              if (bVar13 != bVar2) break;
              iVar11 = iVar11 + 1;
              pbVar7 = pbVar7 + 1;
              if (iVar16 == iVar11) goto LAB_1000a6b1;
            }
            if (iVar16 == iVar11) goto LAB_1000a6b1;
            pbVar7 = local_244 + 1;
            local_244 = local_244 + 1;
          } while (*pbVar7 != 0);
          local_244 = (byte *)0x0;
        }
LAB_1000a6b1:
        if ((byte *)first == local_244) goto LAB_1000a771;
        iVar16 = recovered_10002970(((uintptr_t)pf_module_state+0x386U));
        local_244 = (byte *)0x0;
        if ((iVar16 != 0) && (*first != 0)) {
          local_244 = (byte *)first;
          do {
            iVar11 = 0;
            pbVar7 = (byte *)str_1000ce63;
            while (bVar1 = local_244[iVar11], bVar1 != 0) {
              bVar13 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar13 = bVar1;
              }
              bVar1 = *pbVar7;
              bVar2 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar2 = bVar1;
              }
              if (bVar13 != bVar2) break;
              iVar11 = iVar11 + 1;
              pbVar7 = pbVar7 + 1;
              if (iVar16 == iVar11) goto LAB_1000a7df;
            }
            if (iVar16 == iVar11) goto LAB_1000a7df;
            pbVar7 = local_244 + 1;
            local_244 = local_244 + 1;
          } while (*pbVar7 != 0);
          local_244 = (byte *)0x0;
        }
LAB_1000a7df:
        if ((byte *)first == local_244) {
          pcVar5 = recovered_10002ba0(first,'(');
          if (pcVar5 == (char *)0x0) {
            return 8;
          }
          pbVar7 = (byte *)recovered_1000b510(pcVar5);
          if (pbVar7 == (byte *)0x0) {
            return 8;
          }
          if (last < pbVar7) {
            return 8;
          }
          iVar16 = recovered_10002970(((uintptr_t)pf_module_state+0x39eU));
          local_244 = (byte *)0x0;
          if ((iVar16 != 0) && (*first != 0)) {
            local_244 = (byte *)first;
            do {
              iVar11 = 0;
              pbVar14 = (byte *)str_1000ce7b;
              while (bVar1 = local_244[iVar11], bVar1 != 0) {
                bVar13 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar13 = bVar1;
                }
                bVar1 = *pbVar14;
                bVar2 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar2 = bVar1;
                }
                if (bVar13 != bVar2) break;
                iVar11 = iVar11 + 1;
                pbVar14 = pbVar14 + 1;
                if (iVar16 == iVar11) goto LAB_1000ab4f;
              }
              if (iVar16 == iVar11) goto LAB_1000ab4f;
              pbVar14 = local_244 + 1;
              local_244 = local_244 + 1;
            } while (*pbVar14 != 0);
            local_244 = (byte *)0x0;
          }
LAB_1000ab4f:
          pbVar14 = pbVar7 + 1;
          if ((byte *)first != local_244) {
            iVar16 = recovered_10002970(((uintptr_t)pf_module_state+0x39eU));
            if ((iVar16 != 0) && (*pbVar14 != 0)) {
              iVar11 = 1;
              pbVar8 = pbVar7;
LAB_1000ab9d:
              pbVar8 = pbVar8 + 1;
              iVar4 = iVar16;
              pbVar12 = (byte *)str_1000ce7b;
              pbVar15 = pbVar8;
              while (bVar1 = *pbVar15, bVar1 != 0) {
                bVar13 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar13 = bVar1;
                }
                bVar1 = *pbVar12;
                bVar2 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar2 = bVar1;
                }
                if (bVar13 != bVar2) break;
                pbVar12 = pbVar12 + 1;
                pbVar15 = pbVar15 + 1;
                iVar4 = iVar4 + -1;
                if (iVar4 == 0) goto LAB_1000accc;
              }
              if (iVar4 != 0) goto code_r0x1000abfc;
LAB_1000accc:
              if (iVar11 == 1) {
                local_214[0] = '\0';
                uVar3 = recovered_10002970((int)local_214);
                cVar9 = *pcVar6;
                if (cVar9 != '\0') {
                  pcVar5 = pcVar6;
                  do {
                    pcVar5 = pcVar5 + 1;
                    if (uVar3 + 1 < 0x200) {
                      cVar10 = cVar9 + -0x20;
                      if (0x19 < (byte)(cVar9 + 0x9fU)) {
                        cVar10 = cVar9;
                      }
                      local_214[uVar3] = cVar10;
                      local_214[uVar3 + 1] = '\0';
                      uVar3 = uVar3 + 1;
                    }
                    cVar9 = *pcVar5;
                  } while (cVar9 != '\0');
                }
                local_244 = (byte *)recovered_1000b640(output,capacity,first,last,url,local_214,0);
                pcVar5 = str_1000ce7b;
                goto LAB_1000ae5b;
              }
            }
          }
LAB_1000ad3f:
          local_244 = (byte *)recovered_1000b640(output,capacity,first,last,url,html,0);
          iVar16 = recovered_10002970(((uintptr_t)pf_module_state+0x3b3U));
          first = (char *)pbVar14;
          if ((iVar16 != 0) && (*pbVar14 != 0)) {
            iVar11 = 1;
            pbVar8 = pbVar7;
            do {
              pbVar8 = pbVar8 + 1;
              pbVar12 = (byte *)str_1000ce90;
              pbVar15 = pbVar8;
              iVar4 = iVar16;
              while (bVar1 = *pbVar15, bVar1 != 0) {
                bVar13 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar13 = bVar1;
                }
                bVar1 = *pbVar12;
                bVar2 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar2 = bVar1;
                }
                if (bVar13 != bVar2) break;
                pbVar12 = pbVar12 + 1;
                pbVar15 = pbVar15 + 1;
                iVar4 = iVar4 + -1;
                if (iVar4 == 0) goto LAB_1000ae05;
              }
              if (iVar4 == 0) {
LAB_1000ae05:
                if (iVar11 == 1) {
                  pcVar5 = str_1000ce90;
LAB_1000ae5b:
                  iVar16 = recovered_10002970((int)pcVar5);
                  first = (char *)(pbVar14 + iVar16);
                }
                break;
              }
              iVar4 = iVar11 + 1;
              iVar11 = iVar11 + 1;
            } while (pbVar7[iVar4] != 0);
          }
          if (((uint)local_244 & 8) != 0) {
            return (uint)local_244;
          }
        }
        else {
          iVar16 = recovered_10002970(((uintptr_t)pf_module_state+0x3baU));
          local_244 = (byte *)0x0;
          if ((iVar16 != 0) && (*first != 0)) {
            local_244 = (byte *)first;
            do {
              iVar11 = 0;
              pbVar7 = (byte *)str_1000ce97;
              while (bVar1 = local_244[iVar11], bVar1 != 0) {
                bVar13 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar13 = bVar1;
                }
                bVar1 = *pbVar7;
                bVar2 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar2 = bVar1;
                }
                if (bVar13 != bVar2) break;
                iVar11 = iVar11 + 1;
                pbVar7 = pbVar7 + 1;
                if (iVar16 == iVar11) goto LAB_1000a9d0;
              }
              if (iVar16 == iVar11) goto LAB_1000a9d0;
              pbVar7 = local_244 + 1;
              local_244 = local_244 + 1;
            } while (*pbVar7 != 0);
            local_244 = (byte *)0x0;
          }
LAB_1000a9d0:
          if ((byte *)first == local_244) {
LAB_1000ac7a:
            uVar3 = recovered_1000b640(output,capacity,first,last,url,html,0);
            if ((uVar3 & 8) != 0) {
              return uVar3;
            }
            if (last <= first) goto LAB_1000a9b0;
            do {
              if (((byte)*first - 0x2b < 0x11) &&
                 ((0x10003U >> ((byte)*first - 0x2b & 0x1f) & 1) != 0)) goto LAB_1000a9b0;
              first = first + 1;
            } while (first < last);
          }
          else {
            iVar16 = recovered_10002970(((uintptr_t)pf_module_state+0x3d1U));
            local_244 = (byte *)0x0;
            if ((iVar16 != 0) && (*first != 0)) {
              local_244 = (byte *)first;
              do {
                iVar11 = 0;
                pbVar7 = (byte *)str_1000ceae;
                while (bVar1 = local_244[iVar11], bVar1 != 0) {
                  bVar13 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar13 = bVar1;
                  }
                  bVar1 = *pbVar7;
                  bVar2 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar2 = bVar1;
                  }
                  if (bVar13 != bVar2) break;
                  iVar11 = iVar11 + 1;
                  pbVar7 = pbVar7 + 1;
                  if (iVar16 == iVar11) goto LAB_1000aa91;
                }
                if (iVar16 == iVar11) goto LAB_1000aa91;
                pbVar7 = local_244 + 1;
                local_244 = local_244 + 1;
              } while (*pbVar7 != 0);
              local_244 = (byte *)0x0;
            }
LAB_1000aa91:
            if ((byte *)first == local_244) goto LAB_1000ac7a;
            iVar16 = recovered_10002970(((uintptr_t)pf_module_state+0x3dcU));
            local_244 = (byte *)0x0;
            if ((iVar16 != 0) && (*first != 0)) {
              local_244 = (byte *)first;
              do {
                iVar11 = 0;
                pbVar7 = (byte *)str_1000ceb9;
                while (bVar1 = local_244[iVar11], bVar1 != 0) {
                  bVar13 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar13 = bVar1;
                  }
                  bVar1 = *pbVar7;
                  bVar2 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar2 = bVar1;
                  }
                  if (bVar13 != bVar2) break;
                  iVar11 = iVar11 + 1;
                  pbVar7 = pbVar7 + 1;
                  if (iVar16 == iVar11) goto LAB_1000ac22;
                }
                if (iVar16 == iVar11) goto LAB_1000ac22;
                pbVar7 = local_244 + 1;
                local_244 = local_244 + 1;
              } while (*pbVar7 != 0);
              local_244 = (byte *)0x0;
            }
LAB_1000ac22:
            if ((byte *)first == local_244) goto LAB_1000ac7a;
            uVar3 = recovered_1000bda0(output,capacity,first,last,url,html,0);
            if ((uVar3 & 8) != 0) {
              return 8;
            }
            if (last <= first) goto LAB_1000a9b0;
            do {
              if (((byte)*first - 0x2b < 0x11) &&
                 ((0x10003U >> ((byte)*first - 0x2b & 0x1f) & 1) != 0)) goto LAB_1000a9b0;
              first = first + 1;
            } while (first < last);
          }
          first = last;
        }
      }
LAB_1000a9b0:
      if ((byte *)first == (byte *)0x0) {
        return 0x10;
      }
joined_r0x1000a9be:
    } while (first < last);
  }
  return 0x10;
code_r0x1000a42c:
  pbVar7 = pbVar8 + 2;
  if (last <= pbVar7) {
    return 8;
  }
  local_240 = 1;
  first = (char *)pbVar7;
LAB_1000a459:
  bVar1 = *first;
  if (bVar1 < 0x60) {
    if ((bVar1 == 0x22) || (bVar1 == 0x27)) goto LAB_1000a475;
  }
  else {
    if (bVar1 == 0x60) {
LAB_1000a475:
      first = first + 1;
      if (first < last) {
        pbVar12 = (byte *)first;
        do {
          first = (char *)(pbVar12 + 1);
          if (first < last && *pbVar12 == 0x5c) {
            first = (char *)(pbVar12 + 2);
          }
          else if (*pbVar12 == bVar1) break;
          pbVar12 = (byte *)first;
        } while (first < last);
      }
      goto joined_r0x1000a453;
    }
    if (bVar1 == 0x7b) {
      local_240 = local_240 + 1;
      goto LAB_1000a4c4;
    }
    if ((bVar1 == 0x7d) && (local_240 = local_240 + -1, local_240 == 0)) goto LAB_1000a4cf;
  }
LAB_1000a4c4:
  first = first + 1;
joined_r0x1000a453:
  if (last <= first) {
    return 8;
  }
  goto LAB_1000a459;
LAB_1000a4cf:
  recovered_1000af20(output,capacity,(char *)pbVar14,(char *)pbVar8);
  uVar3 = recovered_1000a2e0(output,capacity,(char *)pbVar7,first,url,html);
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  goto LAB_1000a3c1;
code_r0x1000abfc:
  iVar4 = iVar11 + 1;
  iVar11 = iVar11 + 1;
  if (pbVar7[iVar4] == 0) goto LAB_1000ad3f;
  goto LAB_1000ab9d;
}

#undef DAT_1000cbcb
#undef str_1000ce46
#undef str_1000ce59
#undef str_1000ce63
#undef str_1000ce7b
#undef str_1000ce90
#undef str_1000ce97
#undef str_1000ceae
#undef str_1000ceb9
#undef local_244
#undef local_240
#undef local_214

#define local_30 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af20
 */

uint recovered_1000af20(char *output,uint capacity,char *first,char *last)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;

  if ((((output == (char *)0x0) || (capacity == 0)) || (last < first)) || (first == (char *)0x0)) {
    local_30 = 0;
  }
  else {
    local_30 = 0;
    if ((last != (char *)0x0) && (uVar2 = recovered_10002970((int)output), first < last)) {
      local_30 = 0;
      do {
        if ((*first == '\\') && (pcVar3 = first + 1, pcVar3 < last)) {
          switch((uintptr_t)(*pcVar3)) {
          case '\"':
            local_30 = 1;
            if (uVar2 + 1 < capacity) {
              (output + uVar2)[0] = '\"';
              (output + uVar2)[1] = '\0';
              uVar2 = uVar2 + 1;
            }
            break;
          default:
            local_30 = 1;
            if (uVar2 + 1 < capacity) {
              output[uVar2] = *pcVar3;
              output[uVar2 + 1] = '\0';
              uVar2 = uVar2 + 1;
            }
            break;
          case '\'':
            local_30 = 1;
            if (uVar2 + 1 < capacity) {
              (output + uVar2)[0] = '\'';
              (output + uVar2)[1] = '\0';
              uVar2 = uVar2 + 1;
            }
            break;
          case '\\':
            local_30 = 1;
            if (uVar2 + 1 < capacity) {
              (output + uVar2)[0] = '\\';
              (output + uVar2)[1] = '\0';
              uVar2 = uVar2 + 1;
            }
            break;
          case 'b':
          case 'f':
          case 'v':
            local_30 = 1;
            break;
          case 'n':
            local_30 = 1;
            if (uVar2 + 1 < capacity) {
              (output + uVar2)[0] = '\n';
              (output + uVar2)[1] = '\0';
              uVar2 = uVar2 + 1;
            }
            break;
          case 'r':
            break;
          case 't':
            local_30 = 1;
            if (uVar2 + 1 < capacity) {
              (output + uVar2)[0] = ' ';
              (output + uVar2)[1] = '\0';
              uVar2 = uVar2 + 1;
            }
            break;
          case 'u':
            pcVar9 = first + 5;
            if (pcVar9 < last) {
              cVar1 = first[2];
              iVar8 = (int)cVar1;
              if ((byte)(cVar1 - 0x30U) < 10) {
                iVar8 = iVar8 + -0x30;
              }
              else if ((byte)(cVar1 + 0x9fU) < 6) {
                iVar8 = iVar8 + -0x57;
              }
              else {
                if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000b36f;
                iVar8 = iVar8 + -0x37;
              }
              if (-1 < iVar8) {
                cVar1 = first[3];
                iVar4 = (int)cVar1;
                if ((byte)(cVar1 - 0x30U) < 10) {
                  iVar4 = iVar4 + -0x30;
                }
                else if ((byte)(cVar1 + 0x9fU) < 6) {
                  iVar4 = iVar4 + -0x57;
                }
                else {
                  if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000b36f;
                  iVar4 = iVar4 + -0x37;
                }
                if (-1 < iVar4) {
                  cVar1 = first[4];
                  iVar5 = (int)cVar1;
                  if ((byte)(cVar1 - 0x30U) < 10) {
                    uVar6 = iVar5 - 0x30;
                  }
                  else if ((byte)(cVar1 + 0x9fU) < 6) {
                    uVar6 = iVar5 - 0x57;
                  }
                  else {
                    if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000b36f;
                    uVar6 = iVar5 - 0x37;
                  }
                  if (-1 < (int)uVar6) {
                    cVar1 = *pcVar9;
                    iVar5 = (int)cVar1;
                    if ((byte)(cVar1 - 0x30U) < 10) {
                      uVar7 = iVar5 - 0x30;
                    }
                    else if ((byte)(cVar1 + 0x9fU) < 6) {
                      uVar7 = iVar5 - 0x57;
                    }
                    else {
                      if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000b36f;
                      uVar7 = iVar5 - 0x37;
                    }
                    if (-1 < (int)uVar7) {
                      local_30 = 1;
                      if (capacity <= uVar2 + 1) goto LAB_1000b336;
                      uVar7 = uVar7 | (uVar6 | iVar4 << 4 | iVar8 << 8) << 4;
                      if (0x5e < uVar7 - 0x20) {
                        uVar7 = 0x20;
                      }
                      output[uVar2] = (char)uVar7;
                      output[uVar2 + 1] = '\0';
                      uVar2 = uVar2 + 1;
                      pcVar3 = pcVar9;
                      break;
                    }
                  }
                }
              }
            }
LAB_1000b36f:
            local_30 = 1;
            if (uVar2 + 1 < capacity) {
              (output + uVar2)[0] = 'u';
              (output + uVar2)[1] = '\0';
              uVar2 = uVar2 + 1;
            }
            break;
          case 'x':
            pcVar9 = first + 3;
            if (pcVar9 < last) {
              cVar1 = first[2];
              iVar8 = (int)cVar1;
              if ((byte)(cVar1 - 0x30U) < 10) {
                iVar8 = iVar8 + -0x30;
              }
              else if ((byte)(cVar1 + 0x9fU) < 6) {
                iVar8 = iVar8 + -0x57;
              }
              else {
                iVar8 = iVar8 + -0x37;
                if (5 < (byte)(cVar1 + 0xbfU)) {
                  iVar8 = -1;
                }
              }
              cVar1 = *pcVar9;
              iVar4 = (int)cVar1;
              if ((byte)(cVar1 - 0x30U) < 10) {
                iVar4 = iVar4 + -0x30;
              }
              else if ((byte)(cVar1 + 0x9fU) < 6) {
                iVar4 = iVar4 + -0x57;
              }
              else {
                iVar4 = iVar4 + -0x37;
                if (5 < (byte)(cVar1 + 0xbfU)) {
                  iVar4 = -1;
                }
              }
              if ((-1 < iVar8) && (-1 < iVar4)) {
                local_30 = 1;
                if (uVar2 + 1 < capacity) {
                  output[uVar2] = (byte)iVar4 | (byte)(iVar8 << 4);
                  output[uVar2 + 1] = '\0';
                  uVar2 = uVar2 + 1;
                  pcVar3 = pcVar9;
                }
                else {
LAB_1000b336:
                  local_30 = 1;
                  pcVar3 = pcVar9;
                }
                break;
              }
            }
            local_30 = 1;
            if (uVar2 + 1 < capacity) {
              (output + uVar2)[0] = 'x';
              (output + uVar2)[1] = '\0';
              uVar2 = uVar2 + 1;
            }
          }
        }
        else {
          local_30 = 1;
          if (uVar2 + 1 < capacity) {
            output[uVar2] = *first;
            output[uVar2 + 1] = '\0';
            uVar2 = uVar2 + 1;
          }
          pcVar3 = first;
        }
        first = pcVar3 + 1;
      } while (first < last);
    }
  }
  return local_30;
}

#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b510
 */

char * recovered_1000b510(char *first)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;

  if ((first == (char *)0x0) || (*first != '(')) {
    return (char *)0x0;
  }
  iVar3 = 1;
switchD_1000b541_caseD_1:
  first = first + 1;
LAB_1000b530:
  cVar1 = *first;
  switch((uintptr_t)(cVar1)) {
  case '\0':
    first = (char *)0x0;
    break;
  default:
    goto switchD_1000b541_caseD_1;
  case '\"':
  case '\'':
    goto switchD_1000b541_caseD_22;
  case '(':
    iVar3 = iVar3 + 1;
    goto switchD_1000b541_caseD_1;
  case ')':
    iVar3 = iVar3 + -1;
    if (iVar3 != 0) goto switchD_1000b541_caseD_1;
  }
  return first;
switchD_1000b541_caseD_22:
  first = first + 1;
LAB_1000b559:
  do {
    cVar2 = *first;
    if (cVar2 == '\\') {
      if (first[1] != '\0') {
        first = first + 2;
        goto LAB_1000b559;
      }
    }
    else if (cVar2 == '\0') break;
    first = first + 1;
  } while (cVar2 != cVar1);
  goto LAB_1000b530;
}


#undef DAT_1000cbcb
#define DAT_1000cbcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef str_1000ce63
#define str_1000ce63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x386U)))
#undef str_1000ce97
#define str_1000ce97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3baU)))
#undef str_1000ceae
#define str_1000ceae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d1U)))
#undef str_1000ceb9
#define str_1000ceb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#undef str_1000cecc
#define str_1000cecc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3efU)))
#define local_ec (*(byte * *)(pf_stack_frame + 20))
#define local_d4 (*(byte (*)[212])(pf_stack_frame + 44))
#define local_ce (*(byte (*)[206])(pf_stack_frame + 50))
#define local_74 (*(byte (*)[116])(pf_stack_frame + 140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b640
 */

uint recovered_1000b640(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  byte *pbVar14;
  uint uVar15;

  if (last <= first || first == (char *)0x0) {
    return 8;
  }
  iVar3 = recovered_10002970(((uintptr_t)pf_module_state+0x386U));
  pcVar4 = (char *)0x0;
  if ((iVar3 != 0) && (*first != '\0')) {
    pcVar4 = first;
    do {
      pcVar13 = str_1000ce63;
      iVar9 = 0;
      while (bVar1 = pcVar4[iVar9], bVar1 != 0) {
        bVar7 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar7 = bVar1;
        }
        bVar1 = *pcVar13;
        bVar8 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar8 = bVar1;
        }
        if (bVar7 != bVar8) break;
        iVar9 = iVar9 + 1;
        pcVar13 = pcVar13 + 1;
        if (iVar3 == iVar9) goto LAB_1000b70c;
      }
      if (iVar3 == iVar9) goto LAB_1000b70c;
      pcVar13 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar13 != '\0');
    pcVar4 = (char *)0x0;
  }
LAB_1000b70c:
  if (pcVar4 == first) {
LAB_1000b9ba:
    pcVar4 = recovered_10002ba0(first,'(');
    if ((pcVar4 < last && pcVar4 != (char *)0x0) && pcVar4 + 1 < last) {
      iVar3 = 0;
      do {
        uVar5 = (byte)pcVar4[iVar3 + 1] - 9;
        if (0x1e < uVar5) {
          return 8;
        }
        if ((0x800013U >> (uVar5 & 0x1f) & 1) == 0) {
          if ((0x42000000U >> (uVar5 & 0x1f) & 1) == 0) {
            return 8;
          }
          pbVar10 = (byte *)(pcVar4 + iVar3 + 2);
          pbVar11 = pbVar10;
          if (pbVar10 < last) goto LAB_1000ba40;
          goto LAB_1000ba4d;
        }
        iVar9 = iVar3 + 2;
        iVar3 = iVar3 + 1;
      } while (pcVar4 + iVar9 != last);
    }
    return 8;
  }
  iVar3 = recovered_10002970(((uintptr_t)pf_module_state+0x3baU));
  local_ec = (byte *)0x0;
  if ((iVar3 != 0) && (*first != '\0')) {
    local_ec = (byte *)first;
    do {
      iVar9 = 0;
      pbVar10 = (byte *)str_1000ce97;
      while (bVar1 = local_ec[iVar9], bVar1 != 0) {
        bVar7 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar7 = bVar1;
        }
        bVar1 = *pbVar10;
        bVar8 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar8 = bVar1;
        }
        if (bVar7 != bVar8) break;
        iVar9 = iVar9 + 1;
        pbVar10 = pbVar10 + 1;
        if (iVar3 == iVar9) goto LAB_1000b7e4;
      }
      if (iVar3 == iVar9) goto LAB_1000b7e4;
      pcVar4 = (char *)(local_ec + 1);
      local_ec = local_ec + 1;
    } while (*pcVar4 != '\0');
    local_ec = (byte *)0x0;
  }
LAB_1000b7e4:
  if (local_ec == (byte *)first) goto LAB_1000b9ba;
  uVar5 = recovered_1000bda0(output,capacity,first,last,url,html,depth);
  if ((uVar5 & 8) == 0) {
    return uVar5;
  }
  iVar3 = recovered_10002970(((uintptr_t)pf_module_state+0x3d1U));
  local_ec = (byte *)0x0;
  if ((iVar3 != 0) && (*first != '\0')) {
    local_ec = (byte *)first;
    do {
      iVar9 = 0;
      pbVar10 = (byte *)str_1000ceae;
      while (bVar1 = local_ec[iVar9], bVar1 != 0) {
        bVar7 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar7 = bVar1;
        }
        bVar1 = *pbVar10;
        bVar8 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar8 = bVar1;
        }
        if (bVar7 != bVar8) break;
        iVar9 = iVar9 + 1;
        pbVar10 = pbVar10 + 1;
        if (iVar3 == iVar9) goto LAB_1000b8c8;
      }
      if (iVar3 == iVar9) goto LAB_1000b8c8;
      pcVar4 = (char *)(local_ec + 1);
      local_ec = local_ec + 1;
    } while (*pcVar4 != '\0');
    local_ec = (byte *)0x0;
  }
LAB_1000b8c8:
  if (local_ec != (byte *)first) {
    iVar3 = recovered_10002970(((uintptr_t)pf_module_state+0x3dcU));
    local_ec = (byte *)0x0;
    if ((iVar3 != 0) && (*first != '\0')) {
      local_ec = (byte *)first;
      do {
        iVar9 = 0;
        pbVar10 = (byte *)str_1000ceb9;
        while (bVar1 = local_ec[iVar9], bVar1 != 0) {
          bVar7 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar7 = bVar1;
          }
          bVar1 = *pbVar10;
          bVar8 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar8 = bVar1;
          }
          if (bVar7 != bVar8) break;
          iVar9 = iVar9 + 1;
          pbVar10 = pbVar10 + 1;
          if (iVar3 == iVar9) goto LAB_1000b978;
        }
        if (iVar3 == iVar9) goto LAB_1000b978;
        pcVar4 = (char *)(local_ec + 1);
        local_ec = local_ec + 1;
      } while (*pcVar4 != '\0');
      local_ec = (byte *)0x0;
    }
LAB_1000b978:
    if (local_ec != (byte *)first) {
      return 8;
    }
  }
  pcVar4 = &DAT_1000cbcb;
  if (html != (char *)0x0) {
    pcVar4 = html;
  }
  if (depth == 0) {
    if (output == (char *)0x0) {
      return 0x10;
    }
    uVar5 = recovered_10002970((int)output);
    cVar2 = *pcVar4;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      if ((capacity != 0) && (uVar5 + 1 < capacity)) {
        output[uVar5] = cVar2;
        output[uVar5 + 1] = '\0';
        uVar5 = uVar5 + 1;
      }
      cVar2 = *pcVar4;
    }
    return 0x10;
  }
  goto LAB_1000b9a6;
  while (pbVar11 = pbVar11 + 1, pbVar11 < last) {
LAB_1000ba40:
    if (*pbVar11 == pcVar4[iVar3 + 1]) goto LAB_1000ba4d;
  }
  pbVar11 = (byte *)last;
LAB_1000ba4d:
  pbVar14 = pbVar11 + ((-2 - (int)pcVar4) - iVar3);
  if (pbVar14 == (byte *)0x0) {
    pbVar14 = (byte *)0x0;
  }
  else if (*pbVar10 == 0x23) {
    pbVar10 = (byte *)(pcVar4 + iVar3 + 3);
    pbVar14 = pbVar11 + (-iVar3 - (int)pcVar4) + -3;
  }
  pbVar11 = (byte *)0x5f;
  if (pbVar14 < (byte *)0x5f) {
    pbVar11 = pbVar14;
  }
  local_ec = local_d4;
  recovered_10002220((undefined4 *)local_ec,(undefined4 *)pbVar10,(uint)pbVar11);
  local_d4[(int)pbVar11] = 0;
  if (url == (char *)0x0) {
    return 8;
  }
  if (*url == '\0') {
    return 8;
  }
  iVar3 = recovered_100029b0(local_d4,(byte *)url);
  if (iVar3 != 0) {
    iVar3 = recovered_10002970(((uintptr_t)pf_module_state+0x3efU));
    if (iVar3 == 0) {
      return 8;
    }
    if (local_d4[0] == 0) {
      return 8;
    }
    pbVar10 = local_ce;
    do {
      iVar9 = 0;
      pbVar11 = (byte *)str_1000cecc;
      while (bVar1 = local_ec[iVar9], bVar1 != 0) {
        bVar7 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar7 = bVar1;
        }
        bVar1 = *pbVar11;
        bVar8 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar8 = bVar1;
        }
        if (bVar7 != bVar8) break;
        iVar9 = iVar9 + 1;
        pbVar11 = pbVar11 + 1;
        if (iVar3 == iVar9) goto LAB_1000bbbd;
      }
      if (iVar3 == iVar9) goto LAB_1000bbbd;
      pbVar10 = pbVar10 + 1;
      pbVar11 = local_ec + 1;
      local_ec = local_ec + 1;
      if (*pbVar11 == 0) {
        return 8;
      }
    } while( true );
  }
  goto LAB_1000bc61;
LAB_1000bbbd:
  do {
    uVar5 = (uint)pbVar10[-1];
    switch((uintptr_t)(uVar5)) {
    case 9:
    case 0x20:
      pbVar10 = pbVar10 + 1;
      break;
    default:
      goto switchD_1000bbd5_caseD_a;
    case 0x22:
    case 0x27:
      uVar6 = (uint)*pbVar10;
      goto LAB_1000bbe6;
    }
  } while( true );
switchD_1000bbd5_caseD_a:
  pbVar10 = pbVar10 + -1;
  uVar6 = uVar5;
  uVar5 = 0;
LAB_1000bbe6:
  uVar12 = 0;
  if (uVar5 != (int)(char)uVar6 && (char)uVar6 != '\0') {
    uVar15 = 0;
    while ((uVar5 != 0 ||
           ((((byte)uVar6 != 9 && ((uVar6 & 0xff) != 0x20)) && ((uVar6 & 0xff) != 0x5d))))) {
      uVar12 = uVar15 + 1;
      local_74[uVar15] = (byte)uVar6;
      uVar6 = (uint)(char)pbVar10[uVar15 + 1];
      if (((uVar6 == 0) || (0x5e < uVar12)) || (uVar15 = uVar12, uVar5 == uVar6)) goto LAB_1000bc36;
    }
    uVar12 = uVar15;
  }
LAB_1000bc36:
  local_74[uVar12] = 0;
  iVar3 = recovered_100029b0(local_74,(byte *)url);
  if (iVar3 != 0) {
    return 8;
  }
LAB_1000bc61:
  pcVar4 = &DAT_1000cbcb;
  if (html != (char *)0x0) {
    pcVar4 = html;
  }
  if (depth == 0) {
    recovered_1000c200(output,capacity,pcVar4);
  }
  else {
LAB_1000b9a6:
    recovered_1000c0a0(output,capacity,pcVar4);
  }
  return 0x10;
}

#undef DAT_1000cbcb
#undef str_1000ce63
#undef str_1000ce97
#undef str_1000ceae
#undef str_1000ceb9
#undef str_1000cecc
#undef local_ec
#undef local_d4
#undef local_ce
#undef local_74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd20
 */

uint recovered_1000bd20(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint in_EAX = 0;
  char cVar2;

  if (capacity != 0) {
    if (output == (char *)0x0) {
      in_EAX = 0;
    }
    else {
      in_EAX = recovered_10002970((int)output);
    }
    cVar1 = *(char *)capacity;
    while (cVar1 != '\0') {
      capacity = capacity + 1;
      cVar2 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar2 = cVar1;
      }
      if ((output != (char *)0x0) && (in_EAX + 1 < 0x200)) {
        output[in_EAX] = cVar2;
        output[in_EAX + 1] = '\0';
        in_EAX = in_EAX + 1;
      }
      cVar1 = *(char *)capacity;
    }
  }
  return in_EAX;
}


#undef DAT_1000cbcb
#define DAT_1000cbcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef str_1000ce90
#define str_1000ce90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b3U)))
#undef str_1000cee3
#define str_1000cee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x406U)))
#undef str_1000cef2
#define str_1000cef2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x415U)))
#define local_274 (*(byte (*)[628])(pf_stack_frame + 60))
#define local_214 (*(char (*)[532])(pf_stack_frame + 156))
#define text_00 (*(char * *)(pf_stack_frame + 16))
#define local_290 (*(byte * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bda0
 */

uint recovered_1000bda0(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char pf_stack_frame[720] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  char *text;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;

  if (last == (char *)0x0 || first == (char *)0x0) {
    return 8;
  }
  if (url == (char *)0x0 || last <= first) {
    return 8;
  }
  if (*url == '\0') {
    return 8;
  }
  bVar1 = *first;
  if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (bVar1 != 0x5f)) && (bVar1 != 0x24)) {
    return 8;
  }
  uVar3 = 0;
  do {
    bVar1 = *first;
    if (((9 < (byte)(bVar1 - 0x30U)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) &&
       ((bVar1 != 0x5f && (bVar1 != 0x24)))) goto LAB_1000be60;
    if (uVar3 + 1 < 0x60) {
      local_274[uVar3] = bVar1;
      uVar3 = uVar3 + 1;
    }
    first = first + 1;
  } while (first != last);
  first = last;
LAB_1000be60:
  local_274[uVar3] = 0;
  iVar4 = recovered_100029b0(local_274,(byte *)url);
  if (iVar4 != 0) {
    return 8;
  }
  iVar4 = recovered_10002970(((uintptr_t)pf_module_state+0x3b3U));
  local_290 = (byte *)0x0;
  if ((iVar4 != 0) && (*first != 0)) {
    local_290 = (byte *)first;
    do {
      iVar6 = 0;
      pbVar7 = (byte *)str_1000ce90;
      while (bVar1 = local_290[iVar6], bVar1 != 0) {
        bVar5 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar5 = bVar1;
        }
        bVar1 = *pbVar7;
        bVar2 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar2 = bVar1;
        }
        if (bVar5 != bVar2) break;
        iVar6 = iVar6 + 1;
        pbVar7 = pbVar7 + 1;
        if (iVar4 == iVar6) goto LAB_1000bf45;
      }
      if (iVar4 == iVar6) goto LAB_1000bf45;
      pbVar7 = local_290 + 1;
      local_290 = local_290 + 1;
    } while (*pbVar7 != 0);
    local_290 = (byte *)0x0;
  }
LAB_1000bf45:
  if (local_290 != (byte *)first) {
    return 8;
  }
  iVar4 = recovered_10002970(((uintptr_t)pf_module_state+0x3b3U));
  pbVar7 = (byte *)(first + iVar4);
  text = &DAT_1000cbcb;
  if (html != (char *)0x0) {
    text = html;
  }
  text_00 = str_1000cee3;
  iVar4 = recovered_10002970(((uintptr_t)pf_module_state+0x406U));
  local_290 = (byte *)0x0;
  if ((iVar4 != 0) && (*pbVar7 != 0)) {
    local_290 = pbVar7;
    do {
      iVar6 = 0;
      pbVar8 = (byte *)str_1000cee3;
      while (bVar1 = local_290[iVar6], bVar1 != 0) {
        bVar5 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar5 = bVar1;
        }
        bVar1 = *pbVar8;
        bVar2 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar2 = bVar1;
        }
        if (bVar5 != bVar2) break;
        iVar6 = iVar6 + 1;
        pbVar8 = pbVar8 + 1;
        if (iVar4 == iVar6) goto LAB_1000c01b;
      }
      if (iVar4 == iVar6) goto LAB_1000c01b;
      pbVar8 = local_290 + 1;
      local_290 = local_290 + 1;
    } while (*pbVar8 != 0);
    local_290 = (byte *)0x0;
  }
LAB_1000c01b:
  if (local_290 == pbVar7) {
    local_214[0] = '\0';
    recovered_1000bd20(local_214,(uint)text,text_00);
  }
  else {
    pbVar8 = (byte *)recovered_1000a230((char *)pbVar7,str_1000cef2);
    if (pbVar8 != pbVar7) goto LAB_1000c074;
    local_214[0] = '\0';
    recovered_1000c270(local_214,(uint)text,text_00);
  }
  text = local_214;
LAB_1000c074:
  if (depth == 0) {
    recovered_1000c200(output,capacity,text);
  }
  else {
    recovered_1000c0a0(output,capacity,text);
  }
  return 0x10;
}

#undef DAT_1000cbcb
#undef str_1000ce90
#undef str_1000cee3
#undef str_1000cef2
#undef local_274
#undef local_214
#undef text_00
#undef local_290

#undef str_1000ced2
#define str_1000ced2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0a0
 */

uint recovered_1000c0a0(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;

  uVar2 = 0x1000c0b5;
  if (text != (char *)0x0) {
    if (output == (char *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = recovered_10002970((int)output);
    }
    bVar3 = *text;
    if (bVar3 != 0) {
      bVar4 = capacity != 0 && output != (char *)0x0;
      uVar5 = uVar2;
      do {
        if (((byte)(bVar3 - 0x30U) < 10) || ((byte)((bVar3 & 0xdf) + 0xbf) < 0x1a)) {
LAB_1000c188:
          uVar2 = uVar5 + 1;
          if (bVar4 && uVar2 < capacity) {
LAB_1000c120:
            output[uVar5] = bVar3;
            output[uVar2] = '\0';
            uVar5 = uVar2;
          }
        }
        else {
          uVar2 = (uint)bVar3;
          if (uVar2 < 0x5f) {
            if (1 < uVar2 - 0x2d) {
              if (uVar2 != 0x20) goto LAB_1000c18e;
              bVar3 = 0x2b;
            }
            goto LAB_1000c188;
          }
          if ((uVar2 == 0x7e) || (uVar2 == 0x5f)) goto LAB_1000c188;
LAB_1000c18e:
          if (bVar4) {
            uVar1 = uVar5 + 1;
            if (uVar1 < capacity) {
              (output + uVar5)[0] = '%';
              (output + uVar5)[1] = '\0';
              uVar2 = uVar5 + 2;
              uVar5 = uVar1;
              uVar1 = uVar2;
            }
            uVar2 = uVar1;
            if (uVar1 < capacity) {
              output[uVar5] = str_1000ced2[(byte)*text >> 4];
              output[uVar1] = '\0';
              uVar2 = uVar1 + 1;
              uVar5 = uVar1;
            }
            if (capacity <= uVar2) goto LAB_1000c12d;
            bVar3 = str_1000ced2[(byte)*text & 0xf];
            goto LAB_1000c120;
          }
        }
LAB_1000c12d:
        bVar3 = text[1];
        text = text + 1;
      } while (bVar3 != 0);
    }
  }
  return uVar2;
}

#undef str_1000ced2

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c200
 */

uint recovered_1000c200(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 in_EAX = 0;
  uint uVar2;

  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),output == (char *)0x0);
  if (text != (char *)0x0 && output != (char *)0x0) {
    uVar2 = recovered_10002970((int)output);
    cVar1 = *text;
    while (cVar1 != '\0') {
      text = text + 1;
      if ((capacity != 0) && (uVar2 + 1 < capacity)) {
        output[uVar2] = cVar1;
        output[uVar2 + 1] = '\0';
        uVar2 = uVar2 + 1;
      }
      cVar1 = *text;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c270
 */

uint recovered_1000c270(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint in_EAX = 0;
  byte bVar2;

  if (capacity != 0) {
    if (output == (char *)0x0) {
      in_EAX = 0;
    }
    else {
      in_EAX = recovered_10002970((int)output);
    }
    bVar1 = *(byte *)capacity;
    while (bVar1 != 0) {
      capacity = capacity + 1;
      bVar2 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar2 = bVar1;
      }
      if ((output != (char *)0x0) && (in_EAX + 1 < 0x200)) {
        output[in_EAX] = bVar2;
        output[in_EAX + 1] = '\0';
        in_EAX = in_EAX + 1;
      }
      bVar1 = *(byte *)capacity;
    }
  }
  return in_EAX;
}


#define local_20 (*(int *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2f0
 */

uint recovered_1000c2f0(char *output,uint capacity,char *first,char *last)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  byte *pbVar9;
  byte *last_00;
  byte *pbVar10;

  if ((((first == (char *)0x0) || (last <= first)) || (output == (char *)0x0)) || (capacity == 0)) {
    return 0;
  }
  uVar3 = 0;
LAB_1000c33d:
  pbVar4 = (byte *)first;
  do {
    bVar1 = *first;
    switch((uintptr_t)(bVar1)) {
    case 9:
    case 10:
    case 0xd:
    case 0x20:
    case 0x2b:
      first = first + 1;
      pbVar4 = pbVar4 + 1;
      if (last <= first) {
        return uVar3;
      }
      break;
    case 0xb:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
      goto switchD_1000c365_caseD_b;
    case 0x22:
    case 0x27:
      pbVar5 = (byte *)(first + 1);
      iVar8 = 0;
      pbVar4 = pbVar5;
      if (pbVar5 < last) goto LAB_1000c3b1;
      goto LAB_1000c5d5;
    default:
      if (bVar1 == 0x60) {
        pbVar5 = (byte *)(first + 1);
        iVar8 = 0;
        pbVar4 = pbVar5;
        if (last <= pbVar5) goto LAB_1000c6b9;
        goto LAB_1000c401;
      }
      goto switchD_1000c365_caseD_b;
    }
  } while( true );
LAB_1000c401:
  pbVar4 = pbVar5;
  do {
    bVar1 = *pbVar4;
    pbVar9 = pbVar4 + 1;
    if (pbVar9 < last && bVar1 == 0x5c) {
      pbVar9 = pbVar4 + 2;
    }
    else if (bVar1 == 0x24) {
      if ((pbVar9 < last) && (*pbVar9 == 0x7b)) break;
    }
    else if (bVar1 == 0x60) {
      iVar8 = 1;
      goto LAB_1000c6b9;
    }
    pbVar4 = pbVar9;
    if (last <= pbVar9) {
      iVar8 = 0;
      goto LAB_1000c6b9;
    }
  } while( true );
  pbVar9 = pbVar4 + 2;
  if (last <= pbVar9) {
    return 0;
  }
  local_20 = 1;
  last_00 = pbVar9;
LAB_1000c481:
  bVar1 = *last_00;
  if (bVar1 < 0x60) {
    if ((bVar1 == 0x22) || (bVar1 == 0x27)) goto LAB_1000c4a5;
  }
  else {
    if (bVar1 == 0x60) {
LAB_1000c4a5:
      pbVar10 = last_00 + 1;
      do {
        while( true ) {
          last_00 = pbVar10;
          if (last <= pbVar10) goto joined_r0x1000c510;
          bVar2 = *pbVar10;
          last_00 = pbVar10 + 1;
          if (last <= last_00 || bVar2 != 0x5c) break;
          pbVar10 = pbVar10 + 2;
        }
        pbVar10 = last_00;
      } while (bVar2 != bVar1);
      goto joined_r0x1000c510;
    }
    if (bVar1 != 0x7b) {
      if ((bVar1 != 0x7d) || (local_20 = local_20 + -1, local_20 != 0)) goto LAB_1000c509;
      recovered_1000af20(output,capacity,(char *)pbVar5,(char *)pbVar4);
      uVar3 = recovered_1000c2f0(output,capacity,(char *)pbVar9,(char *)last_00);
      if (uVar3 == 0) {
        return 0;
      }
      pbVar5 = last_00 + 1;
      if (last <= pbVar5) goto code_r0x1000c56a;
      goto LAB_1000c401;
    }
    local_20 = local_20 + 1;
  }
LAB_1000c509:
  last_00 = last_00 + 1;
joined_r0x1000c510:
  if (last <= last_00) {
    return 0;
  }
  goto LAB_1000c481;
code_r0x1000c56a:
  iVar8 = 0;
  pbVar4 = pbVar5;
LAB_1000c6b9:
  uVar3 = recovered_1000af20(output,capacity,(char *)pbVar5,(char *)pbVar4);
  if ((uVar3 == 0) && (pbVar5 != pbVar4)) {
    return 0;
  }
  first = (char *)(pbVar4 + iVar8);
  goto LAB_1000c6e9;
LAB_1000c3b1:
  do {
    if (pbVar4 + 1 < last && *pbVar4 == 0x5c) {
      pbVar9 = pbVar4 + 2;
    }
    else {
      pbVar9 = pbVar4 + 1;
      if (*pbVar4 == bVar1) {
        iVar8 = 1;
        goto LAB_1000c5d5;
      }
    }
    pbVar4 = pbVar9;
  } while (pbVar4 < last);
  iVar8 = 0;
LAB_1000c5d5:
  uVar3 = recovered_1000af20(output,capacity,(char *)pbVar5,(char *)pbVar4);
  if (uVar3 == 0) {
    return 0;
  }
  first = (char *)(pbVar4 + iVar8);
  goto LAB_1000c6e9;
switchD_1000c365_caseD_b:
  pbVar5 = (byte *)first;
  if (first < last) {
    do {
      if ((byte)(*pbVar5 - 0x2b) < 2) goto LAB_1000c5a2;
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < last);
    pbVar5 = (byte *)last;
  }
LAB_1000c5a2:
  if (first < pbVar5) {
    pbVar4 = (byte *)(first + ((int)pbVar5 - (int)pbVar4));
    do {
      if ((0x17 < (byte)*first - 9) || ((0x800013U >> ((byte)*first - 9 & 0x1f) & 1) == 0))
      goto LAB_1000c60d;
      first = first + 1;
    } while ((byte *)first != pbVar5);
    first = (char *)pbVar4;
  }
LAB_1000c60d:
  if (pbVar5 <= first) {
    return 0;
  }
  pbVar9 = (byte *)(first + (4 - (int)pbVar5));
  pbVar4 = pbVar5;
  while ((pbVar4[-1] - 9 < 0x18 && ((0x800013U >> (pbVar4[-1] - 9 & 0x1f) & 1) != 0))) {
    pbVar4 = pbVar4 + -1;
    pbVar9 = pbVar9 + 1;
    if (pbVar4 <= first) {
      return 0;
    }
  }
  if ((pbVar9 != (byte *)0x0) || (iVar8 = recovered_10006740((int)first,((uintptr_t)pf_module_state+0x435U),4), iVar8 != 0))
  {
    pbVar9 = (byte *)first;
    if (first < pbVar4) {
      do {
        uVar7 = CONCAT11(*pbVar9,*pbVar9) & 0xdfff;
        cVar6 = (char)uVar7;
        if (((((byte)((char)(uVar7 >> 8) + 0xa5U) < 0xe6) && (cVar6 != '+')) &&
            ((byte)(cVar6 - 0x3aU) < 0xf6)) && ((byte)(cVar6 - 0x2fU) < 0xfe)) {
          return 0;
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 < pbVar4);
      uVar3 = recovered_10002970((int)output);
      do {
        if (uVar3 + 1 < capacity) {
          output[uVar3] = *first;
          output[uVar3 + 1] = '\0';
          uVar3 = uVar3 + 1;
        }
        first = first + 1;
      } while (first < pbVar4);
      first = (char *)pbVar5;
      goto LAB_1000c6e9;
    }
    recovered_10002970((int)output);
  }
  first = (char *)pbVar5;
LAB_1000c6e9:
  uVar3 = 1;
  if (last <= first) {
    return 1;
  }
  goto LAB_1000c33d;
}

#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c7d0
 */

char * recovered_1000c7d0(char *first)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (first == (char *)0x0) {
    return (char *)0x0;
  }
  iVar3 = 0;
  iVar5 = 0;
  iVar4 = 0;
LAB_1000c7f0:
  do {
    bVar1 = *first;
    if (0x26 < bVar1) {
      if ((bVar1 == 0x27) || (bVar1 == 0x60)) {
LAB_1000c815:
        first = first + 1;
LAB_1000c829:
        do {
          bVar2 = *first;
          if (bVar2 == 0x5c) {
            if (first[1] != 0) {
              first = first + 2;
              goto LAB_1000c829;
            }
          }
          else if (bVar2 == 0) break;
          first = first + 1;
        } while (bVar2 != bVar1);
      }
      else {
        if (bVar1 != 0x28) goto LAB_1000c844;
        iVar3 = iVar3 + 1;
        first = first + 1;
      }
      goto LAB_1000c7f0;
    }
    if (bVar1 == 0x22) goto LAB_1000c815;
    if (bVar1 == 0) {
      return first;
    }
LAB_1000c844:
    if (iVar3 < 1 || bVar1 != 0x29) {
      if (bVar1 == 0x5b) {
        iVar5 = iVar5 + 1;
        first = first + 1;
      }
      else if (iVar5 < 1 || bVar1 != 0x5d) {
        if (bVar1 == 0x7b) {
          iVar4 = iVar4 + 1;
          first = first + 1;
        }
        else if (iVar4 < 1 || bVar1 != 0x7d) {
          if ((bVar1 == 10) || (bVar1 == 0x3b)) {
            if (iVar3 == 0) goto LAB_1000c8b8;
          }
          else if (bVar1 == 0xd && iVar3 == 0) {
LAB_1000c8b8:
            iVar3 = 0;
            if (iVar5 == 0 && iVar4 == 0) {
              return first;
            }
          }
          first = first + 1;
        }
        else {
          iVar4 = iVar4 + -1;
          first = first + 1;
        }
      }
      else {
        iVar5 = iVar5 + -1;
        first = first + 1;
      }
    }
    else {
      iVar3 = iVar3 + -1;
      first = first + 1;
    }
  } while( true );
}


#define local_414 (*(byte (*)[1044])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c8e0
 */

uint recovered_1000c8e0(char *output,uint capacity,char *first,char *last)

{
  unsigned char pf_stack_frame[1104] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *output_00;

  local_414[0] = 0;
  output_00 = local_414;
  uVar2 = recovered_1000c2f0((char *)output_00,0x400,first,last);
  if (uVar2 == 0) {
    return 0;
  }
  if (output == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10002970((int)output);
  }
LAB_1000c959:
  while (bVar1 = *output_00, bVar1 < 0x3c) {
    if (bVar1 == 0x26) {
      if (output != (char *)0x0) {
        uVar2 = recovered_10002970((int)output);
        if (capacity != 0) {
          if (uVar2 + 1 < capacity) {
            (output + uVar2)[0] = '&';
            (output + uVar2)[1] = '\0';
            uVar2 = uVar2 + 1;
          }
          if (uVar2 + 1 < capacity) {
            (output + uVar2)[0] = 'a';
            (output + uVar2)[1] = '\0';
            uVar2 = uVar2 + 1;
          }
          if (uVar2 + 1 < capacity) {
            (output + uVar2)[0] = 'm';
            (output + uVar2)[1] = '\0';
            uVar2 = uVar2 + 1;
          }
          if (uVar2 + 1 < capacity) {
            (output + uVar2)[0] = 'p';
            (output + uVar2)[1] = '\0';
            uVar2 = uVar2 + 1;
          }
          if (uVar2 + 1 < capacity) {
            (output + uVar2)[0] = ';';
            (output + uVar2)[1] = '\0';
          }
        }
        goto LAB_1000c950;
      }
      uVar2 = 0;
      output_00 = output_00 + 1;
    }
    else {
      if (bVar1 == 0) {
        return uVar2;
      }
LAB_1000c9fb:
      if (capacity == 0 || output == (char *)0x0) goto LAB_1000c958;
      if (uVar2 + 1 < capacity) {
        output[uVar2] = bVar1;
        output[uVar2 + 1] = '\0';
        uVar2 = uVar2 + 1;
      }
      output_00 = output_00 + 1;
    }
  }
  if (bVar1 == 0x3c) {
    if (output == (char *)0x0) {
      uVar2 = 0;
      output_00 = output_00 + 1;
      goto LAB_1000c959;
    }
    uVar2 = recovered_10002970((int)output);
    if (capacity != 0) {
      if (uVar2 + 1 < capacity) {
        (output + uVar2)[0] = '&';
        (output + uVar2)[1] = '\0';
        uVar2 = uVar2 + 1;
      }
      uVar3 = uVar2 + 1;
      if (uVar3 < capacity) {
        (output + uVar2)[0] = 'l';
        (output + uVar2)[1] = '\0';
      }
      else {
LAB_1000caac:
        uVar3 = uVar2;
      }
LAB_1000caae:
      if (uVar3 + 1 < capacity) {
        (output + uVar3)[0] = 't';
        (output + uVar3)[1] = '\0';
        uVar3 = uVar3 + 1;
      }
      if (uVar3 + 1 < capacity) {
        (output + uVar3)[0] = ';';
        (output + uVar3)[1] = '\0';
      }
    }
  }
  else {
    if (bVar1 != 0x3e) goto LAB_1000c9fb;
    if (output == (char *)0x0) {
      uVar2 = 0;
      output_00 = output_00 + 1;
      goto LAB_1000c959;
    }
    uVar2 = recovered_10002970((int)output);
    if (capacity != 0) {
      if (uVar2 + 1 < capacity) {
        (output + uVar2)[0] = '&';
        (output + uVar2)[1] = '\0';
        uVar2 = uVar2 + 1;
      }
      uVar3 = uVar2 + 1;
      if (capacity <= uVar3) goto LAB_1000caac;
      (output + uVar2)[0] = 'g';
      (output + uVar2)[1] = '\0';
      goto LAB_1000caae;
    }
  }
LAB_1000c950:
  uVar2 = recovered_10002970((int)output);
LAB_1000c958:
  output_00 = output_00 + 1;
  goto LAB_1000c959;
}

#undef local_414
