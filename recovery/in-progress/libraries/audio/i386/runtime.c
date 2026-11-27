/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f3U)))
#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000530
 */

/* WARNING: Removing unreachable block (ram,0x1000056c) */

void recovered_10000530(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000b0f8 = 0;
    recovered_10000590();
    DAT_1000b100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b0f8
#undef DAT_1000b100

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(char *)(((uintptr_t)pf_module_state + 0x4f3U)))
#undef DAT_1000b0fc
#define DAT_1000b0fc (*(int *)(((uintptr_t)pf_module_state + 0x4f7U)))
#undef DAT_1000b104
#define DAT_1000b104 (*(int *)(((uintptr_t)pf_module_state + 0x4ffU)))
#undef _DAT_00280088
#define _DAT_00280088 (*(uint *)(0x280088U))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_90 (*(ulong *)(pf_stack_frame + 32))
#define local_8c (*(uint (*)[35])(pf_stack_frame + 36))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000590(void)

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
  if (DAT_1000b0f8 != '\0') {
    return;
  }
  DAT_1000b0fc = 0;
  DAT_1000b104 = 0;
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
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_100005fb;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_100005fb:
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
        if (iVar10 == 0) goto LAB_10000750;
      }
      puVar7 = &local_90;
      do {
        recovered_100048f0(puVar7[-1],*puVar7,local_9c);
        puVar7 = puVar7 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (DAT_1000b0fc != 0) goto LAB_1000078b;
    }
  }
LAB_10000750:
  uVar4 = 0x4000000;
  if (0x300000 < _DAT_00280088) {
    uVar4 = _DAT_00280088 & 0xfffffff0;
  }
  size = 0x3d00000;
  if (0x300020 < uVar4) {
    size = uVar4 - 0x300000;
  }
  recovered_100048f0(0x300000,size,local_9c);
LAB_1000078b:
  if (DAT_1000b104 == 0) {
    DAT_1000b104 = DAT_1000b0fc;
  }
  DAT_1000b0f8 = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1000b0f8
#undef DAT_1000b0fc
#undef DAT_1000b104
#undef _DAT_00280088
#undef _DAT_0028008c
#undef local_90
#undef local_8c
#undef local_9c

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007b0
 */

/* WARNING: Removing unreachable block (ram,0x100007fc) */

bool recovered_100007b0(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10000820(addresses,sizes,count);
    DAT_1000b100 = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000b100

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000b0fc
#define DAT_1000b0fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f7U)))
#undef DAT_1000b104
#define DAT_1000b104 (*(int * *)(((uintptr_t)pf_module_state + 0x4ffU)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000820
 */

bool recovered_10000820(ulong *addresses,ulong *sizes,ulong count)

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
    recovered_10000590();
    local_18 = DAT_1000b0fc;
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
          if (uVar3 < uVar9 || uVar4 == 0) goto LAB_10000920;
          bVar13 = 0x20 < (uVar4 & 0xfffffff0);
        }
        else {
LAB_10000920:
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
      piVar2 = DAT_1000b0fc;
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
    piVar6 = (int *)&DAT_1000b0fc;
    iVar1 = 0;
    do {
      iVar8 = iVar1;
      iVar1 = *piVar6;
      piVar6 = (int *)(iVar1 + 4);
    } while (iVar1 != 0);
    uVar12 = 0;
    local_1c = iVar8;
    do {
      recovered_100048f0(addresses[uVar12],sizes[uVar12],&local_1c);
      uVar12 = uVar12 + 1;
    } while (count != uVar12);
    if (DAT_1000b104 == (int *)0x0) {
      DAT_1000b104 = DAT_1000b0fc;
    }
    bVar13 = local_1c != iVar8;
  }
  return bVar13;
}

#undef DAT_10000001
#undef DAT_1000b0fc
#undef DAT_1000b104
#undef local_1c
#undef local_18

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
#define local_24 (*(ulong *)(pf_stack_frame + 28))
#define local_20 (*(ulong (*)[8])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a60
 */

/* WARNING: Removing unreachable block (ram,0x10000aac) */

bool recovered_10000a60(ulong address,ulong size)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = DAT_1000b100;
  local_20[0] = address;
  local_24 = size;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    bVar2 = recovered_10000820(local_20,&local_24,1);
    DAT_1000b100 = 0;
    return bVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000b100
#undef local_24
#undef local_20

#undef DAT_1000b0fc
#define DAT_1000b0fc (*(int * *)(((uintptr_t)pf_module_state + 0x4f7U)))
#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ae0
 */

/* WARNING: Removing unreachable block (ram,0x10000b1c) */

uint recovered_10000ae0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int *piVar3;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000590();
  uVar2 = 0;
  for (piVar3 = DAT_1000b0fc; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if ((char)piVar3[3] == '\x01') {
      uVar2 = uVar2 + *piVar3;
    }
  }
  DAT_1000b100 = 0;
  return uVar2;
}

#undef DAT_1000b0fc
#undef DAT_1000b100

#undef DAT_1000b0fc
#define DAT_1000b0fc (*(uint * *)(((uintptr_t)pf_module_state + 0x4f7U)))
#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b60
 */

/* WARNING: Removing unreachable block (ram,0x10000b9c) */

ulonglong recovered_10000b60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  recovered_10000590();
  uVar1 = 0;
  iVar3 = 0;
  for (puVar2 = DAT_1000b0fc; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[1]) {
    if ((char)puVar2[3] == '\x01') {
      bVar4 = CARRY4(uVar1,*puVar2);
      uVar1 = uVar1 + *puVar2;
      iVar3 = iVar3 + (uint)bVar4;
    }
  }
  DAT_1000b100 = 0;
  return CONCAT44(iVar3,uVar1);
}

#undef DAT_1000b0fc
#undef DAT_1000b100

#undef DAT_1000b0fc
#define DAT_1000b0fc (*(int * *)(((uintptr_t)pf_module_state + 0x4f7U)))
#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000be0
 */

/* WARNING: Removing unreachable block (ram,0x10000c1c) */

uint recovered_10000be0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint uVar3;

  iVar2 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000590();
  uVar3 = 0;
  for (piVar1 = DAT_1000b0fc; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    uVar3 = uVar3 + *piVar1;
  }
  DAT_1000b100 = 0;
  return uVar3;
}

#undef DAT_1000b0fc
#undef DAT_1000b100

#undef DAT_1000b0fc
#define DAT_1000b0fc (*(uint * *)(((uintptr_t)pf_module_state + 0x4f7U)))
#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c50
 */

/* WARNING: Removing unreachable block (ram,0x10000c8c) */

ulonglong recovered_10000c50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  recovered_10000590();
  uVar2 = 0;
  iVar3 = 0;
  for (puVar1 = DAT_1000b0fc; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
    bVar4 = CARRY4(uVar2,*puVar1);
    uVar2 = uVar2 + *puVar1;
    iVar3 = iVar3 + (uint)bVar4;
  }
  DAT_1000b100 = 0;
  return CONCAT44(iVar3,uVar2);
}

#undef DAT_1000b0fc
#undef DAT_1000b100

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cd0
 */

/* WARNING: Removing unreachable block (ram,0x10000d1c) */

void * recovered_10000cd0(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    pvVar2 = recovered_10000d40(size,0,0xffffffff);
    DAT_1000b100 = 0;
    return pvVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000b100

#undef DAT_1000b0fc
#define DAT_1000b0fc (*(uint * *)(((uintptr_t)pf_module_state + 0x4f7U)))
#undef DAT_1000b104
#define DAT_1000b104 (*(uint * *)(((uintptr_t)pf_module_state + 0x4ffU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d40
 */

void * recovered_10000d40(ulong size,ulong first,ulong last)

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
    recovered_10000590();
    puVar3 = DAT_1000b0fc;
    puVar4 = DAT_1000b104;
    if (DAT_1000b104 == (uint *)0x0) {
      puVar4 = DAT_1000b0fc;
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
              if (uVar6 < uVar8) goto LAB_10000e22;
            }
          }
          else {
LAB_10000e22:
            if ((uVar7 - 1 <= last - (int)first_00 && first_00 <= last) &&
               (uVar7 <= uVar8 - uVar6 && uVar6 <= uVar8)) {
              if (uVar7 - 1 < uVar8) {
                bVar2 = 0xffffffef < uVar8;
                if ((uint)(uVar8 - uVar7 < 0x20) <= -(uint)(uVar8 < uVar7)) {
                  bVar2 = 0xffffffdf < uVar7;
                }
                if (!bVar2) {
                  if (uVar6 == 0) {
LAB_10000f04:
                    if ((bool)(~(uVar8 < uVar7) & 0x1f < uVar8 - uVar7)) {
                      DAT_1000b104 = (uint *)((int)chunk + uVar7 + 0x10);
                      *(uint *)((int)chunk + uVar7 + 0x10) = (uVar8 - uVar7) - 0x10;
                      uVar8 = chunk[1];
                      *(uint *)((int)chunk + uVar7 + 0x14) = uVar8;
                      *(uint **)((int)chunk + uVar7 + 0x18) = chunk;
                      *(undefined1 *)((int)chunk + uVar7 + 0x1c) = 1;
                      if (uVar8 != 0) {
                        *(uint **)(uVar8 + 8) = DAT_1000b104;
                      }
                      *chunk = uVar7;
                      chunk[1] = (uint)DAT_1000b104;
                    }
                    else {
                      DAT_1000b104 = (uint *)chunk[1];
                    }
                    *(undefined1 *)(chunk + 3) = 0;
                    if (DAT_1000b104 == (uint *)0x0) {
                      DAT_1000b104 = DAT_1000b0fc;
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
                      chunk = recovered_10004a90(chunk,(ulong)first_00);
                      if (chunk == (uint *)0x0) {
                        return (void *)0x0;
                      }
                      uVar8 = *chunk;
                      goto LAB_10000f04;
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

#undef DAT_1000b0fc
#undef DAT_1000b104

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f70
 */

/* WARNING: Removing unreachable block (ram,0x10000fbc) */

void * recovered_10000f70(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    pvVar2 = recovered_10000d40(size,0,limit);
    DAT_1000b100 = 0;
    return pvVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000b100

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe0
 */

/* WARNING: Removing unreachable block (ram,0x1000102c) */

void * recovered_10000fe0(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  pvVar2 = (void *)0x0;
  if (first <= last) {
    pvVar2 = recovered_10000d40(size,first,last);
  }
  DAT_1000b100 = 0;
  return pvVar2;
}

#undef DAT_1000b100

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001050
 */

/* WARNING: Removing unreachable block (ram,0x1000109c) */

void recovered_10001050(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_100010c0(pointer);
    DAT_1000b100 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b100

#undef DAT_1000b104
#define DAT_1000b104 (*(uint * *)(((uintptr_t)pf_module_state + 0x4ffU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010c0
 */

void recovered_100010c0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;

  if (pointer == (void *)0x0) {
    return;
  }
  recovered_10000590();
  puVar2 = (uint *)((int)pointer + -0x10);
  *(undefined1 *)((int)pointer + -4) = 1;
  puVar3 = *(uint **)((int)pointer + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)((int)pointer + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_1000b104 == puVar3) {
        DAT_1000b104 = puVar2;
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
      DAT_1000b104 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_1000b104 = puVar2;
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
        if (DAT_1000b104 == puVar2) {
          DAT_1000b104 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_1000b104 = puVar2;
  return;
}

#undef DAT_1000b104

#undef DAT_1000b100
#define DAT_1000b100 (*(int *)(((uintptr_t)pf_module_state + 0x4fbU)))
#undef DAT_1000b104
#define DAT_1000b104 (*(uint * *)(((uintptr_t)pf_module_state + 0x4ffU)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011e0
 */

/* WARNING: Removing unreachable block (ram,0x1000122c) */

void * recovered_100011e0(void *pointer,ulong size)

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

  iVar3 = DAT_1000b100;
  { __typeof__(DAT_1000b100) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b100),1,__ATOMIC_SEQ_CST);
}
  if (iVar3 != 0) {
    do {
    } while( true );
  }
  if (pointer == (void *)0x0) {
    pvVar7 = recovered_10000d40(size,0,0xffffffff);
    DAT_1000b100 = 0;
    return pvVar7;
  }
  if (size == 0) {
    recovered_100010c0(pointer);
    DAT_1000b100 = 0;
    return (void *)0x0;
  }
  if (0xfffffff0 < size) {
    DAT_1000b100 = 0;
    return (void *)0x0;
  }
  recovered_10000590();
  size_00 = size + 0xf & 0xfffffff0;
  chunk = (uint *)((int)pointer + -0x10);
  uVar12 = *(uint *)((int)pointer + -0x10);
  if (size_00 <= uVar12) {
    if (uVar12 <= size_00 - 1) {
      DAT_1000b100 = 0;
      return (void *)0x0;
    }
    uVar8 = uVar12 - size_00;
    bVar5 = 0xffffffdf < size_00;
    if (-(uint)(uVar12 < size_00) < (uint)(uVar8 < 0x20)) {
      bVar5 = 0xffffffef < uVar12;
    }
    if (!bVar5) {
      if (uVar8 < 0x20) {
        DAT_1000b100 = 0;
        return pointer;
      }
      DAT_1000b104 = (uint *)((int)pointer + size_00);
      *(uint *)((int)pointer + size_00) = uVar8 - 0x10;
      iVar3 = *(int *)((int)pointer + -0xc);
      *(int *)((int)pointer + size_00 + 4) = iVar3;
      *(uint **)((int)pointer + size_00 + 8) = chunk;
      *(undefined1 *)((int)pointer + size_00 + 0xc) = 1;
      if (iVar3 != 0) {
        *(uint **)(iVar3 + 8) = DAT_1000b104;
      }
      *(uint *)((int)pointer + -0x10) = size_00;
      *(uint **)((int)pointer + -0xc) = DAT_1000b104;
      DAT_1000b100 = 0;
      return pointer;
    }
    DAT_1000b100 = 0;
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
      local_20 = DAT_1000b104;
      puVar6 = *(uint **)((int)pointer + -0xc);
      do {
        if (((puVar6 == (uint *)0x0) || ((char)puVar6[3] != '\x01')) ||
           ((0xffffffef < uVar12 ||
            (((uint *)(uVar12 + (int)pointer) != puVar6 || (-uVar12 - 0x11 < *puVar6)))))) break;
        if (local_20 == puVar6) {
          local_20 = chunk;
          DAT_1000b104 = chunk;
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
        DAT_1000b100 = 0;
        return (void *)0x0;
      }
      bVar5 = recovered_10004af0(chunk,size_00);
      if (bVar5) {
        DAT_1000b104 = *(uint **)((int)pointer + -0xc);
      }
      *(undefined1 *)((int)pointer + -4) = 0;
      DAT_1000b100 = 0;
      return pointer;
    }
  }
  puVar9 = recovered_10000d40(size_00,0,0xffffffff);
  if (puVar9 == (undefined4 *)0x0) {
    DAT_1000b100 = 0;
    return (void *)0x0;
  }
  if (*chunk < size_00) {
    size_00 = *chunk;
  }
  puVar10 = pointer;
  puVar14 = puVar9;
  if (size_00 < 8) {
LAB_10001455:
    if (size_00 == 0) goto LAB_1000146c;
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
    goto LAB_10001455;
  }
  uVar12 = 0;
  do {
    *(undefined1 *)((int)puVar14 + uVar12) = *(undefined1 *)((int)puVar10 + uVar12);
    uVar12 = uVar12 + 1;
  } while (size_00 != uVar12);
LAB_1000146c:
  recovered_100010c0(pointer);
  DAT_1000b100 = 0;
  return puVar9;
}

#undef DAT_1000b100
#undef DAT_1000b104
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001580
 */

undefined8 recovered_10001580(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_100015bb;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_100015bb;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_100015bb:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015d0
 */

undefined8 recovered_100015d0(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001620
 */

undefined8 recovered_10001620(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001660
 */

undefined8 recovered_10001660(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001750
 */

undefined8 recovered_10001750(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100017c0
 */

undefined8 recovered_100017c0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001910
 */

undefined8 recovered_10001910(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100019e0
 */

void recovered_100019e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a00
 */

int recovered_10001a00(int param_1)

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
 * Address: 0x10001a20
 */

void * recovered_10001a20(ulong size)

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
 * Address: 0x10001a70
 */

void recovered_10001a70(void *pointer)

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
 * Address: 0x10001ac0
 */

void * recovered_10001ac0(void *pointer,ulong size)

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
 * Address: 0x10001b10
 */

void recovered_10001b10(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10001b3a;
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
LAB_10001b3a:
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + uVar3) = *(undefined1 *)((int)param_2 + uVar3);
    uVar3 = uVar3 + 1;
  } while (param_3 != uVar3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bd0
 */

undefined4 * recovered_10001bd0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10001da0
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

byte * recovered_10001da0(byte *param_1,byte param_2,uint param_3)

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
 * Address: 0x10001e50
 */

void recovered_10001e50(undefined4 *param_1,uint param_2)

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
 * Address: 0x10001ef0
 */

void recovered_10001ef0(undefined4 *param_1,uint param_2)

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
 * Address: 0x10001f90
 */

char * recovered_10001f90(char *param_1,char param_2,int param_3)

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
 * Address: 0x10001fd0
 */

int recovered_10001fd0(uint *param_1,uint *param_2,uint param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_1000206e;
    if (((uint)param_1 & 3) != 0) {
      uVar7 = param_3;
      puVar6 = param_1;
      do {
        puVar6 = (uint *)((int)puVar6 + 1);
        bVar1 = (byte)*param_1;
        bVar2 = (byte)*param_2;
        if (bVar1 != bVar2) goto LAB_10002085;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        param_3 = uVar7 - 1;
      } while ((uVar7 != 1) && (uVar7 = param_3, ((uint)puVar6 & 3) != 0));
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      uVar7 = *param_1;
      uVar8 = *param_2;
      if (uVar7 != uVar8) {
LAB_100020b6:
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
      if (uVar7 != uVar8) goto LAB_100020b6;
      uVar7 = param_1[2];
      uVar8 = param_2[2];
      if (uVar7 != uVar8) goto LAB_100020b6;
      uVar7 = param_1[3];
      uVar8 = param_2[3];
      if (uVar7 != uVar8) goto LAB_100020b6;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10002100();
        return iVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_1000206e:
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
LAB_10002085:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002100
 */

int recovered_10002100(void)

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
 * Address: 0x10002150
 */

bool recovered_10002150(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002170
 */

bool recovered_10002170(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002190
 */

bool recovered_10002190(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021b0
 */

bool recovered_100021b0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021e0
 */

bool recovered_100021e0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002200
 */

bool recovered_10002200(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002220
 */

int recovered_10002220(int param_1)

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
 * Address: 0x10002240
 */

int recovered_10002240(int param_1)

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
 * Address: 0x10002260
 */

int recovered_10002260(int param_1)

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
 * Address: 0x100022a0
 */

int recovered_100022a0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_100022d6;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_100022d6:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022e0
 */

int recovered_100022e0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002316;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002316:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002320
 */

void recovered_10002320(int param_1,int param_2)

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
 * Address: 0x10002350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10002350(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10002468;
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
LAB_10002468:
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
 * Address: 0x10002490
 */

char * recovered_10002490(char *param_1,char param_2)

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
 * Address: 0x100024d0
 */

int recovered_100024d0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_1000251b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_1000251b;
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
 * Address: 0x10002530
 */

ulong recovered_10002530(char *text,char *reject)

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
 * Address: 0x10002590
 */

char * recovered_10002590(char *param_1,char *param_2)

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
 * Address: 0x100025e0
 */

char * recovered_100025e0(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10002623;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10002623:
  return pcVar3;
}


#undef DAT_1000ad6d
#define DAT_1000ad6d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x168U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002630
 */

undefined * recovered_10002630(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000ad6d;
}

#undef DAT_1000ad6d

#undef PTR_DAT_1000b088
#define PTR_DAT_1000b088 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x483U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002650
 */

undefined ** recovered_10002650(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000b088;
}

#undef PTR_DAT_1000b088

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
#define local_20 (*(undefined4 *)(pf_stack_frame + 48))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002670(undefined4 *param_1)

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
#undef local_20
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002710
 */

longdouble recovered_10002710(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000ac10;
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

#undef DAT_1000ac10

#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002760
 */

void recovered_10002760(double param_1,int *param_2)

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
        param_1 = param_1 * (double)DAT_1000ac10;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_1000ac10 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_1000ac10);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000ac10

#define in_stack_00000008 (*(undefined4 *)(pf_stack_frame + 40))
#define in_stack_0000000c (*(double *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002820
 */

uchar recovered_10002820(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar in_AL;

  if ((in_stack_0000000c != 0.0) || (NAN(in_stack_0000000c))) {
    in_AL = (uchar)(int)ROUND(pf_bits_double(CONCAT44(in_stack_00000008,param_1)) / in_stack_0000000c);
  }
  return in_AL;
}

#undef in_stack_00000008
#undef in_stack_0000000c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002880
 */

longdouble recovered_10002880(double param_1,double param_2)

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
 * Address: 0x10002910
 */

double recovered_10002910(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(int)ROUND(value);
  if (value < dVar1) {
    dVar1 = (double)((int)ROUND(value) + -1);
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002960
 */

double recovered_10002960(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(int)ROUND(value);
  if (value < dVar1) {
    dVar1 = (double)((int)ROUND(value) + -1);
  }
  if (dVar1 < value) {
    dVar1 = dVar1 + 1.0;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c0
 */

void recovered_100029c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ac14
#define DAT_1000ac14 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000ac18
#define DAT_1000ac18 (*(float *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_1000ac1c
#define DAT_1000ac1c (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000ac20
#define DAT_1000ac20 (*(float *)(((uintptr_t)pf_module_state + 0x1bU)))
#undef DAT_1000ac24
#define DAT_1000ac24 (*(float *)(((uintptr_t)pf_module_state + 0x1fU)))
#undef DAT_1000ac28
#define DAT_1000ac28 (*(float *)(((uintptr_t)pf_module_state + 0x23U)))
#undef DAT_1000ac2c
#define DAT_1000ac2c (*(float *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_1000ac30
#define DAT_1000ac30 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_1000ac34
#define DAT_1000ac34 (*(float *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000ac38
#define DAT_1000ac38 (*(float *)(((uintptr_t)pf_module_state + 0x33U)))
#undef DAT_1000ac3c
#define DAT_1000ac3c (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_1000ac40
#define DAT_1000ac40 (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_1000ac68
#define DAT_1000ac68 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ac0
 */

longdouble recovered_10002ac0(double param_1)

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
    lVar2 = (longdouble)DAT_1000ac14;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_1000ac18 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000ac10;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_1000ac18 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_1000ac1c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_1000ac1c);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_1000ac40 +
            lVar9 / (longdouble)DAT_1000ac3c +
            lVar8 / (longdouble)DAT_1000ac38 +
            lVar7 / (longdouble)DAT_1000ac34 +
            lVar6 / (longdouble)DAT_1000ac30 +
            lVar5 / (longdouble)DAT_1000ac2c +
            lVar4 / (longdouble)DAT_1000ac28 +
            lVar3 / (longdouble)DAT_1000ac24 +
            (lVar10 * lVar2) / (longdouble)DAT_1000ac20 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_1000ac68;
  }
  return lVar2;
}

#undef DAT_1000ac10
#undef DAT_1000ac14
#undef DAT_1000ac18
#undef DAT_1000ac1c
#undef DAT_1000ac20
#undef DAT_1000ac24
#undef DAT_1000ac28
#undef DAT_1000ac2c
#undef DAT_1000ac30
#undef DAT_1000ac34
#undef DAT_1000ac38
#undef DAT_1000ac3c
#undef DAT_1000ac40
#undef DAT_1000ac68

#undef DAT_1000ac90
#define DAT_1000ac90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bd0
 */

longlong recovered_10002bd0(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(value + *(double *)(&DAT_1000ac90 + (uint)(0.0 <= value) * 8));
}

#undef DAT_1000ac90

#undef DAT_1000ac44
#define DAT_1000ac44 (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_1000ac48
#define DAT_1000ac48 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000ac4c
#define DAT_1000ac4c (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000ac70
#define DAT_1000ac70 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000ac78
#define DAT_1000ac78 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000ac80
#define DAT_1000ac80 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef DAT_1000ac88
#define DAT_1000ac88 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c30
 */

longdouble recovered_10002c30(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000ac70 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000ac78;
    } while ((longdouble)DAT_1000ac70 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000ac80) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000ac88;
    } while (lVar1 < (longdouble)DAT_1000ac80);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_1000ac4c +
         (lVar2 * lVar2) / (longdouble)DAT_1000ac48 +
         (longdouble)1 + lVar2 / (longdouble)DAT_1000ac44) * lVar1;
}

#undef DAT_1000ac44
#undef DAT_1000ac48
#undef DAT_1000ac4c
#undef DAT_1000ac70
#undef DAT_1000ac78
#undef DAT_1000ac80
#undef DAT_1000ac88

#undef DAT_1000ac50
#define DAT_1000ac50 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000ac54
#define DAT_1000ac54 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000ac58
#define DAT_1000ac58 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_1000ac70
#define DAT_1000ac70 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000ac78
#define DAT_1000ac78 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000ac80
#define DAT_1000ac80 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef DAT_1000ac88
#define DAT_1000ac88 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cc0
 */

longdouble recovered_10002cc0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000ac70 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000ac78;
    } while ((longdouble)DAT_1000ac70 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000ac80) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000ac88;
    } while (lVar1 < (longdouble)DAT_1000ac80);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_1000ac58 +
         (lVar1 * lVar1) / (longdouble)DAT_1000ac54 +
         (longdouble)1 + lVar1 * (longdouble)DAT_1000ac50;
}

#undef DAT_1000ac50
#undef DAT_1000ac54
#undef DAT_1000ac58
#undef DAT_1000ac70
#undef DAT_1000ac78
#undef DAT_1000ac80
#undef DAT_1000ac88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d50
 */

longdouble recovered_10002d50(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ac5c
#define DAT_1000ac5c (*(float *)(((uintptr_t)pf_module_state + 0x57U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d70
 */

undefined8 recovered_10002d70(double param_1)

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

  if ((param_1 != 0.0) || (uVar7 = 0, uVar8 = 0, NAN(param_1))) {
    dVar2 = param_1;
    if (param_1 < -param_1) {
      dVar2 = -param_1;
    }
    dVar3 = (double)DAT_1000ac5c;
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
      dVar3 = dVar3 * (double)DAT_1000ac10;
      bVar11 = uVar7 != 0;
      uVar7 = uVar7 - 1;
    } while (bVar11);
    uVar7 = -uVar9;
    uVar8 = -(uint)(uVar9 != 0) - uVar10;
    if (0.0 <= param_1) {
      uVar7 = uVar9;
      uVar8 = uVar10;
    }
  }
  return CONCAT44(uVar8,uVar7);
}

#undef DAT_1000ac10
#undef DAT_1000ac5c

#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ac5c
#define DAT_1000ac5c (*(float *)(((uintptr_t)pf_module_state + 0x57U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e30
 */

undefined8 recovered_10002e30(double param_1)

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
  if (0.0 < param_1) {
    dVar2 = (double)DAT_1000ac5c;
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
      dVar3 = param_1 - dVar2;
      if (param_1 < dVar2) {
        uVar9 = 0;
        uVar7 = 0;
        dVar3 = param_1;
      }
      param_1 = dVar3;
      uVar6 = uVar6 | uVar7;
      uVar4 = uVar4 | uVar9;
      dVar2 = dVar2 * (double)DAT_1000ac10;
      bVar10 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar6,uVar4);
}

#undef DAT_1000ac10
#undef DAT_1000ac5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec0
 */

void recovered_10002ec0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;

  if (param_1 != 0 || param_2 != 0) {
    do {
      bVar2 = 1 < param_1;
      bVar3 = param_2 != 0;
      uVar1 = -param_2;
      param_1 = param_2 << 0x1f | param_1 >> 1;
      param_2 = param_2 >> 1;
    } while (bVar3 || uVar1 < bVar2);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f30
 */

void recovered_10002f30(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;

  if ((int)param_2 < 0) {
    uVar2 = -param_1;
    uVar3 = -(uint)(param_1 != 0) - param_2;
    do {
      bVar4 = 1 < uVar2;
      bVar5 = uVar3 != 0;
      uVar1 = -uVar3;
      uVar2 = uVar3 << 0x1f | uVar2 >> 1;
      uVar3 = uVar3 >> 1;
    } while (bVar5 || uVar1 < bVar4);
  }
  else if (param_1 != 0 || param_2 != 0) {
    do {
      bVar4 = 1 < param_1;
      bVar5 = param_2 != 0;
      uVar2 = -param_2;
      param_1 = param_2 << 0x1f | param_1 >> 1;
      param_2 = param_2 >> 1;
    } while (bVar5 || uVar2 < bVar4);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff0
 */

void recovered_10002ff0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003060
 */

void recovered_10003060(float param_1,int *param_2)

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
        param_1 = param_1 * DAT_1000ac10;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_1000ac10 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_1000ac10);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000ac10

#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003150
 */

longdouble recovered_10003150(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_1000ac10;
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

#undef DAT_1000ac10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b0
 */

longdouble recovered_100031b0(float param_1,float param_2)

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
 * Address: 0x10003250
 */

longdouble recovered_10003250(float param_1)

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
 * Address: 0x100032b0
 */

longdouble recovered_100032b0(float param_1)

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
 * Address: 0x10003320
 */

longdouble recovered_10003320(double param_1)

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
 * Address: 0x10003390
 */

longdouble recovered_10003390(float param_1)

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
 * Address: 0x10003400
 */

longdouble recovered_10003400(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_100029c0();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ac18
#define DAT_1000ac18 (*(float *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_1000ac1c
#define DAT_1000ac1c (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003420
 */

void recovered_10003420(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_1000ac18 < param_1) {
      do {
        param_1 = param_1 * DAT_1000ac10;
      } while (DAT_1000ac18 < param_1);
    }
    for (; param_1 < DAT_1000ac1c; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_1000ac10
#undef DAT_1000ac18
#undef DAT_1000ac1c

#undef DAT_1000ac90
#define DAT_1000ac90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#define local_10 (*(long *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003540
 */

long recovered_10003540(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (long)(longlong)ROUND(value + *(double *)(&DAT_1000ac90 + (uint)(0.0 <= value) * 8));
  return local_10;
}

#undef DAT_1000ac90
#undef local_10

#undef DAT_1000ac44
#define DAT_1000ac44 (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_1000ac48
#define DAT_1000ac48 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000ac4c
#define DAT_1000ac4c (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000ac70
#define DAT_1000ac70 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000ac78
#define DAT_1000ac78 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000ac80
#define DAT_1000ac80 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef DAT_1000ac88
#define DAT_1000ac88 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003590
 */

longdouble recovered_10003590(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000ac70 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000ac78;
    } while ((float)DAT_1000ac70 < param_1);
  }
  if (param_1 < (float)DAT_1000ac80) {
    do {
      param_1 = param_1 + (float)DAT_1000ac88;
    } while (param_1 < (float)DAT_1000ac80);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_1000ac4c +
          (fVar1 * fVar1) / DAT_1000ac48 + fVar1 / DAT_1000ac44 + 1.0) * param_1);
}

#undef DAT_1000ac44
#undef DAT_1000ac48
#undef DAT_1000ac4c
#undef DAT_1000ac70
#undef DAT_1000ac78
#undef DAT_1000ac80
#undef DAT_1000ac88

#undef DAT_1000ac50
#define DAT_1000ac50 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000ac54
#define DAT_1000ac54 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000ac58
#define DAT_1000ac58 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_1000ac70
#define DAT_1000ac70 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000ac78
#define DAT_1000ac78 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000ac80
#define DAT_1000ac80 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef DAT_1000ac88
#define DAT_1000ac88 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003620
 */

longdouble recovered_10003620(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000ac70 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000ac78;
    } while ((float)DAT_1000ac70 < param_1);
  }
  if (param_1 < (float)DAT_1000ac80) {
    do {
      param_1 = param_1 + (float)DAT_1000ac88;
    } while (param_1 < (float)DAT_1000ac80);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_1000ac58 +
         (fVar1 * fVar1) / DAT_1000ac54 + fVar1 * DAT_1000ac50 + 1.0);
}

#undef DAT_1000ac50
#undef DAT_1000ac54
#undef DAT_1000ac58
#undef DAT_1000ac70
#undef DAT_1000ac78
#undef DAT_1000ac80
#undef DAT_1000ac88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036b0
 */

longdouble recovered_100036b0(float param_1)

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
 * Address: 0x100036d0
 */

int recovered_100036d0(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10003820
 */

int recovered_10003820(byte *param_1,undefined4 *param_2,uint param_3)

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

#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ac60
#define DAT_1000ac60 (*(float *)(((uintptr_t)pf_module_state + 0x5bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003970
 */

longdouble recovered_10003970(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)DAT_1000ac60 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)DAT_1000ac60 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_1000ac60;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10003a43;
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
LAB_10003a43:
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
              lVar10 = lVar10 * (longdouble)DAT_1000ac10;
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

#undef DAT_1000ac10
#undef DAT_1000ac60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b30
 */

longdouble recovered_10003b30(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10003970(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1000ac60
#define DAT_1000ac60 (*(float *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef str_1000ad6f
#define str_1000ad6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16aU)))
#undef str_1000ad79
#define str_1000ad79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
#undef str_1000ad8a
#define str_1000ad8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x185U)))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b60
 */

int recovered_10003b60(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10003bf3;
    }
    bVar6 = param_3[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *param_1 = 0x25;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      param_3 = param_3 + 1;
      goto LAB_10003bf3;
    }
    pbVar10 = param_3 + 2;
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10003c55;
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
LAB_10003c55:
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
      goto LAB_10003d3c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10003d48;
    case 0x6c:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x6c) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_10003d3c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10003d48;
    case 0x7a:
      cVar7 = '\x05';
LAB_10003d48:
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
        goto LAB_10004059;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004059:
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
        abStack_51[iVar12 + 1] = str_1000ad8a[uVar15 + uVar9 * -10];
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
      goto LAB_10003ba8;
    default:
      if (1 < local_bc) {
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10003bf3;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_10004187;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_10004187;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_10004187:
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
      pcVar14 = str_1000ad8a;
      if (*param_3 == 0x58) {
        pcVar14 = str_1000ad79;
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
LAB_1000415c:
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
LAB_10003bf3:
      local_c0 = local_c0 + 1;
LAB_10003bf4:
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
                        goto LAB_10004295;
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
LAB_10004295:
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
          abStack_51[iVar12 + 1] = str_1000ad8a[uVar8 + uVar9 * -10];
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
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_1000ac60;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000ac60;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000ac60;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_1000ac60;
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
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_1000ac60);
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
        abStack_51[iVar12 + 1] = str_1000ad8a[uVar8 & 0xf];
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
      goto LAB_10003bf4;
    case 0x73:
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_1000ad6f;
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
      goto LAB_1000415c;
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
        goto LAB_1000436f;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_1000436f;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_1000436f:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000ad8a[uVar8 + uVar9 * -10];
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
LAB_10003ba8:
      param_3 = param_3 + 1;
      param_1 = local_b8;
    }
  } while( true );
}

#undef DAT_1000ac60
#undef str_1000ad6f
#undef str_1000ad79
#undef str_1000ad8a
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_80
#undef abStack_51

/* Recover the native variadic formatting boundary; Pooka's Free Software License. */
int recovered_100048c0(char *buffer,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_10003b60(buffer,capacity,format,(void *)args);__builtin_va_end(args);return count;}


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
#undef DAT_1000b0fc
#define DAT_1000b0fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f7U)))
#undef DAT_1000b104
#define DAT_1000b104 (*(int * *)(((uintptr_t)pf_module_state + 0x4ffU)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100048f0(ulong address,ulong size,void *tail)

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
        if (DAT_1000b0fc == 0) {
          puVar2 = &DAT_1000b0fc;
        }
        *puVar2 = piVar4;
        *(int **)tail = piVar4;
        if (DAT_1000b104 == (int *)0x0) {
          DAT_1000b104 = piVar4;
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
    if (DAT_1000b0fc == 0) {
      puVar2 = &DAT_1000b0fc;
    }
    *puVar2 = 0x10000000;
    *(undefined4 *)tail = 0x10000000;
    if (DAT_1000b104 != (int *)0x0) {
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
    if (DAT_1000b0fc == 0) {
      puVar2 = &DAT_1000b0fc;
    }
    *puVar2 = piVar4;
    *(int **)tail = piVar4;
    if (DAT_1000b104 != (int *)0x0) {
      return;
    }
  }
  DAT_1000b104 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_1000b0fc
#undef DAT_1000b104
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a90
 */

void * recovered_10004a90(void *chunk,ulong first)

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
 * Address: 0x10004af0
 */

bool recovered_10004af0(void *chunk,ulong size)

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
#undef DAT_1000b108
#define DAT_1000b108 (*(uint *)(((uintptr_t)pf_module_state + 0x503U)))
#undef DAT_1000b10c
#define DAT_1000b10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507U)))
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
 * Address: 0x10004b50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004b50(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000b108 != 0) {
          DAT_1000b108 = DAT_1000b108 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000b108 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001b10(local_214,(undefined4 *)&DAT_1000b10c,DAT_1000b108);
            uVar3 = DAT_1000b108;
          }
          *(undefined1 *)((int)local_214 + uVar3) = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0))))))
          {
            (*_DAT_00280840)(local_214);
          }
          DAT_1000b108 = 0;
        }
        else {
          if (DAT_1000b108 - 0x1ff < 0xfffffe00) {
            recovered_10001b10(local_214,(undefined4 *)&DAT_1000b10c,DAT_1000b108);
            *(undefined1 *)((int)local_214 + DAT_1000b108) = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
              (*_DAT_00280840)(local_214);
            }
            DAT_1000b108 = 0;
          }
          pcVar1 = &DAT_1000b10c + DAT_1000b108;
          DAT_1000b108 = DAT_1000b108 + 1;
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
#undef DAT_1000b108
#undef DAT_1000b10c
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
#undef DAT_1000b108
#define DAT_1000b108 (*(uint *)(((uintptr_t)pf_module_state + 0x503U)))
#undef DAT_1000b10c
#define DAT_1000b10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507U)))
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
 * Address: 0x10004d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004d10(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (DAT_1000b108 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001b10(local_21c,(undefined4 *)&DAT_1000b10c,DAT_1000b108);
    uVar1 = DAT_1000b108;
  }
  *(undefined1 *)((int)local_21c + uVar1) = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
    (*_DAT_00280840)(local_21c);
  }
  DAT_1000b108 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000b108
#undef DAT_1000b10c
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
#undef DAT_1000b108
#define DAT_1000b108 (*(uint *)(((uintptr_t)pf_module_state + 0x503U)))
#undef DAT_1000b10c
#define DAT_1000b10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507U)))
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
 * Address: 0x10004db0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004db0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000b108 != 0) {
    recovered_10001b10(local_210,(undefined4 *)&DAT_1000b10c,DAT_1000b108);
    *(undefined1 *)((int)local_210 + DAT_1000b108) = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
      (*_DAT_00280840)(local_210);
    }
    DAT_1000b108 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000b108
#undef DAT_1000b10c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_210

#undef DAT_1000ad78
#define DAT_1000ad78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x173U)))
#undef DAT_1000ad9b
#define DAT_1000ad9b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196U)))
#define acStack_150 (*(char (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e40
 */

void recovered_10004e40(char *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  char *format;

  format = &DAT_1000ad9b;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar1 = &DAT_1000ad78;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  iVar2 = recovered_100048c0(acStack_150,0x140,format,puVar1);
  if (0 < iVar2) {
    recovered_10004b50(acStack_150,iVar2);
  }
  return;
}

#undef DAT_1000ad78
#undef DAT_1000ad9b
#undef acStack_150

#undef DAT_1000adb9
#define DAT_1000adb9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_1000ad9e
#define str_1000ad9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x199U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ea0
 */

void recovered_10004ea0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002260(((uintptr_t)pf_module_state+0x199U));
  recovered_10004b50(str_1000ad9e,iVar1);
  iVar1 = recovered_10002260(((uintptr_t)pf_module_state+0x1b4U));
  recovered_10004b50(&DAT_1000adb9,iVar1);
  return;
}

#undef DAT_1000adb9
#undef str_1000ad9e

#undef DAT_1000adb9
#define DAT_1000adb9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_1000adbc
#define str_1000adbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ef0
 */

void recovered_10004ef0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002260(((uintptr_t)pf_module_state+0x1b7U));
  recovered_10004b50(str_1000adbc,iVar1);
  iVar1 = recovered_10002260(((uintptr_t)pf_module_state+0x1b4U));
  recovered_10004b50(&DAT_1000adb9,iVar1);
  return;
}

#undef DAT_1000adb9
#undef str_1000adbc

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
#undef DAT_1000b108
#define DAT_1000b108 (*(uint *)(((uintptr_t)pf_module_state + 0x503U)))
#undef DAT_1000b10c
#define DAT_1000b10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507U)))
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
 * Address: 0x10004f40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10004f40(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000b108 != 0) {
      recovered_10001b10(local_214,(undefined4 *)&DAT_1000b10c,DAT_1000b108);
      *(undefined1 *)((int)local_214 + DAT_1000b108) = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000b108 = 0;
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
#undef DAT_1000b108
#undef DAT_1000b10c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005040
 */

undefined4 recovered_10005040(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005050
 */

void recovered_10005050(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005060
 */

undefined1 recovered_10005060(void)

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
#undef DAT_1000ad9b
#define DAT_1000ad9b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196U)))
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fbU)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef Ram00280834
#define Ram00280834 (*(uint32_t *)(0x280834U))
#undef str_1000ae3d
#define str_1000ae3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_1000ae4a
#define str_1000ae4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
#undef str_1000ae58
#define str_1000ae58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x253U)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005070
 */

byte * recovered_10005070(byte *param_1,char *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;

  if (param_1 == (byte *)0x0 || param_2 == (char *)0x0) {
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
    return (byte *)0x0;
  }
  iVar4 = recovered_100022a0(param_1,(byte *)str_1000ae3d);
  if (iVar4 == 0) {
    local_24 = 1;
  }
  else {
    iVar5 = recovered_100022a0(param_1,(byte *)str_1000ae4a);
    if (iVar5 == 0) {
      local_24 = 2;
    }
    else {
      iVar5 = recovered_100022a0(param_1,(byte *)str_1000ae58);
      if (iVar5 != 0) {
        pbVar6 = recovered_10001a20(800);
        if (pbVar6 != (byte *)0x0) {
          recovered_10001da0(pbVar6,0,800);
          pbVar6[0] = 0;
          pbVar6[1] = 0;
          pbVar6[2] = 0;
          pbVar6[3] = 0;
          pcVar7 = recovered_10002490(param_2,'r');
          bVar10 = true;
          if (pcVar7 == (char *)0x0) {
            pcVar7 = recovered_10002490(param_2,'+');
            bVar10 = true;
            if (pcVar7 == (char *)0x0) {
              pcVar7 = recovered_10002490(param_2,'a');
              bVar10 = pcVar7 != (char *)0x0;
            }
          }
          pbVar6[0x110] = bVar10;
          pcVar7 = recovered_10002490(param_2,'w');
          if (pcVar7 == (char *)0x0) {
            pcVar7 = recovered_10002490(param_2,'a');
            bVar10 = true;
            if (pcVar7 == (char *)0x0) {
              pcVar7 = recovered_10002490(param_2,'+');
              bVar10 = pcVar7 != (char *)0x0;
            }
          }
          else {
            bVar10 = true;
          }
          pbVar6[0x111] = bVar10;
          pcVar7 = recovered_10002490(param_2,'a');
          pbVar6[0x112] = pcVar7 != (char *)0x0;
          pbVar6[0x10c] = 0xff;
          pbVar6[0x10d] = 0xff;
          pbVar6[0x10e] = 0xff;
          pbVar6[0x10f] = 0xff;
          recovered_100048c0((char *)(pbVar6 + 4),0xf1,&DAT_1000ad9b,param_1);
          recovered_10001da0((byte *)&local_20,0,0xc);
          iVar4 = Ram00280800;
          if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
              (uVar8 = Ram00280808, 0xb < uVar8)) &&
             (((uVar8 = Ram00280808, 0x37 < uVar8 &&
               (pcVar2 = (code *)Ram00280834, pcVar2 != (code *)0x0)) &&
              (iVar4 = (*pcVar2)(param_1,&local_20), iVar4 != 0)))) {
            pcVar7 = recovered_10002490(param_2,'w');
            if (local_1c != 0 && pcVar7 == (char *)0x0) {
              if (pbVar6[0x111] == 1) {
                uVar8 = *(uint *)(pbVar6 + 0x104);
                if (uVar8 < local_1c) {
                  uVar3 = 0x100;
                  if (uVar8 != 0) {
                    uVar3 = uVar8;
                  }
                  do {
                    uVar8 = uVar3;
                    uVar3 = uVar8 * 2;
                  } while (uVar8 < local_1c);
                  puVar9 = recovered_10001ac0(*(void **)(pbVar6 + 0xfc),uVar8);
                  if (puVar9 == (undefined4 *)0x0) {
                    *(undefined4 *)PTR_DAT_1000b000 = 0xc;
                    pbVar6[0x115] = 1;
                    goto LAB_100053b7;
                  }
                  *(undefined4 **)(pbVar6 + 0xfc) = puVar9;
                  *(uint *)(pbVar6 + 0x104) = uVar8;
                  *(undefined4 **)(pbVar6 + 0xf8) = puVar9;
                }
                else {
                  puVar9 = *(undefined4 **)(pbVar6 + 0xfc);
                }
                recovered_10001b10(puVar9,local_20,local_1c);
              }
              else {
                *(undefined4 **)(pbVar6 + 0xf8) = local_20;
              }
              *(uint *)(pbVar6 + 0x100) = local_1c;
              bVar1 = pbVar6[0x112];
              goto joined_r0x10005394;
            }
          }
          else if (pbVar6[0x111] == 0) {
            *(undefined4 *)PTR_DAT_1000b000 = 2;
LAB_100053b7:
            recovered_10001a70(pbVar6);
            return (byte *)0x0;
          }
          bVar1 = pbVar6[0x112];
joined_r0x10005394:
          if (bVar1 == 1) {
            *(undefined4 *)(pbVar6 + 0x108) = *(undefined4 *)(pbVar6 + 0x100);
            return pbVar6;
          }
          return pbVar6;
        }
        goto LAB_10005215;
      }
      local_24 = 3;
    }
  }
  pbVar6 = recovered_10001a20(800);
  if (pbVar6 != (byte *)0x0) {
    recovered_10001da0(pbVar6,0,800);
    *(undefined4 *)pbVar6 = local_24;
    pbVar6[0x110] = iVar4 == 0;
    pbVar6[0x111] = iVar4 != 0;
    pbVar6[0x10c] = 0xff;
    pbVar6[0x10d] = 0xff;
    pbVar6[0x10e] = 0xff;
    pbVar6[0x10f] = 0xff;
    recovered_100048c0((char *)(pbVar6 + 4),0xf1,&DAT_1000ad9b,param_1);
    return pbVar6;
  }
LAB_10005215:
  *(undefined4 *)PTR_DAT_1000b000 = 0xc;
  return (byte *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_1000ad9b
#undef PTR_DAT_1000b000
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef Ram00280834
#undef str_1000ae3d
#undef str_1000ae4a
#undef str_1000ae58
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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fbU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005420(byte *param_1,char *param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_100054f7;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       (_DAT_00280838 != (code *)0x0)) {
      iVar1 = (*_DAT_00280838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_100054da;
      }
    }
    *(undefined4 *)PTR_DAT_1000b000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_100054da:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10001a70((void *)param_3[0x3f]);
  }
  recovered_10001a70(param_3);
LAB_100054f7:
  recovered_10005070(param_1,param_2);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000b000
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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fbU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005510(int *param_1)

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
      *(undefined4 *)PTR_DAT_1000b000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10001a70((void *)param_1[0x3f]);
  }
  recovered_10001a70(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000b000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055f0
 */

uint recovered_100055f0(undefined4 *param_1,uint param_2,uint param_3,int *param_4)

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
        recovered_10001b10(param_1,(undefined4 *)(uVar3 + param_4[0x3e]),uVar1);
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
          uVar2 = recovered_10005700(param_4);
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
#undef DAT_1000ad78
#define DAT_1000ad78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x173U)))
#undef DAT_1000b108
#define DAT_1000b108 (*(uint *)(((uintptr_t)pf_module_state + 0x503U)))
#undef DAT_1000b10c
#define DAT_1000b10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507U)))
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
 * Address: 0x10005700
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10005700(int *param_1)

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
LAB_10005761:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_1000b108 != 0) {
      recovered_10001b10(local_214,(undefined4 *)&DAT_1000b10c,DAT_1000b108);
      *(undefined1 *)((int)local_214 + DAT_1000b108) = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000b108 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)((int)param_1 + 0x116,0x1fe,&DAT_1000ad78,0);
      if (iVar1 != 0) {
        iVar1 = recovered_10002260((int)param_1 + 0x116);
        param_1[0xc6] = iVar1 + 1;
        *(undefined1 *)((int)param_1 + iVar1 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar2 = 0;
        goto LAB_10005761;
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
#undef DAT_1000ad78
#undef DAT_1000b108
#undef DAT_1000b10c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058c0
 */

int recovered_100058c0(char *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (char *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_10005a2a:
    param_3 = 0;
  }
  else {
    uVar5 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10004b50(param_1,uVar5);
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
      pvVar3 = recovered_10001ac0((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000b000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_10005a2a;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_10001da0((byte *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10001b10((undefined4 *)(uVar4 + param_4[0x3f]),(undefined4 *)param_1,uVar5);
    uVar5 = uVar5 + param_4[0x42];
    param_4[0x42] = uVar5;
    if (param_4[0x40] < uVar5) {
      param_4[0x40] = uVar5;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000b000

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a40
 */

undefined4 recovered_10005a40(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10005a59;
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
LAB_10005a59:
  *(undefined4 *)PTR_DAT_1000b000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000b000

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ae0
 */

undefined4 recovered_10005ae0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_1000b000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fbU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005b10(int *param_1)

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
    *(undefined4 *)PTR_DAT_1000b000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000b000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bd0
 */

undefined1 recovered_10005bd0(int param_1)

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
 * Address: 0x10005bf0
 */

undefined1 recovered_10005bf0(int param_1)

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
 * Address: 0x10005c10
 */

void recovered_10005c10(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c40
 */

uint recovered_10005c40(uint param_1,int param_2)

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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fbU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(code * *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005c80(int param_1)

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
  *(undefined4 *)PTR_DAT_1000b000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef PTR_DAT_1000b000
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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fbU)))
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
 * Address: 0x10005d00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005d00(int param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
  }
  else {
    recovered_10001da0((byte *)&local_20,0,0xc);
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
    *(undefined4 *)PTR_DAT_1000b000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef PTR_DAT_1000b000
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
 * Address: 0x10005e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005e80(int param_1,undefined4 *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  uint uVar3;

  if ((((param_3 == (uint *)0x0 || (param_2 == (undefined4 *)0x0 || param_1 == 0)) ||
       (recovered_10001da0((byte *)&local_20,0,0xc), _DAT_00280800 != 0x50414d57)) ||
      (_DAT_00280804 == 0)) ||
     (((_DAT_00280808 < 0xc || (_DAT_00280808 < 0x38)) ||
      ((_DAT_00280834 == (code *)0x0 || (iVar1 = (*_DAT_00280834)(param_1,&local_20), iVar1 == 0))))
     )) {
    return 0;
  }
  puVar2 = recovered_10001a20(local_1c + (local_1c == 0));
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar3 = 0;
  if (local_1c != 0) {
    recovered_10001b10(puVar2,local_20,local_1c);
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
 * Address: 0x10005f60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005f60(int param_1,int param_2,int param_3)

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
 * Address: 0x10005fe0
 */

undefined4 recovered_10005fe0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ff0
 */

void recovered_10005ff0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006000
 */

undefined4 recovered_10006000(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006010
 */

undefined4 recovered_10006010(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006020
 */

undefined4 recovered_10006020(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006030
 */

int recovered_10006030(int param_1,int param_2,int param_3)

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


#undef DAT_1000adcc
#define DAT_1000adcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_1000adcf
#define str_1000adcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1caU)))
#undef str_1000addc
#define str_1000addc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d7U)))
#undef str_1000ade6
#define str_1000ade6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e1U)))
#undef str_1000adfa
#define str_1000adfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f5U)))
#undef str_1000ae08
#define str_1000ae08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x203U)))
#undef str_1000ae1a
#define str_1000ae1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x215U)))
#undef str_1000ae26
#define str_1000ae26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x221U)))
#undef str_1000ae37
#define str_1000ae37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x232U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006080
 */

char * recovered_10006080(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000adcc;
  switch((uintptr_t)(param_1)) {
  case 0:
    break;
  default:
    pcVar1 = str_1000ae37;
    break;
  case 2:
    pcVar1 = str_1000adcf;
    break;
  case 5:
    pcVar1 = str_1000addc;
    break;
  case 9:
    pcVar1 = str_1000ade6;
    break;
  case 0xc:
    pcVar1 = str_1000adfa;
    break;
  case 0xd:
    pcVar1 = str_1000ae08;
    break;
  case 0x11:
    pcVar1 = str_1000ae1a;
    break;
  case 0x16:
    pcVar1 = str_1000ae26;
  }
  return pcVar1;
}

#undef DAT_1000adcc
#undef str_1000adcf
#undef str_1000addc
#undef str_1000ade6
#undef str_1000adfa
#undef str_1000ae08
#undef str_1000ae1a
#undef str_1000ae26
#undef str_1000ae37

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006150
 */

undefined4 recovered_10006150(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006160
 */

undefined4 recovered_10006160(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000b30c
#define DAT_1000b30c (*(int *)(((uintptr_t)pf_module_state + 0x707U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006170
 */

void recovered_10006170(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000b30c = DAT_1000b30c + 1;
  return;
}

#undef DAT_1000b30c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006190
 */

longlong recovered_10006190(float10 value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10002bd0((double)(longdouble)value);
  return lVar1;
}


#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061b0
 */

uint recovered_100061b0(byte *param_1,double *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10003b60(local_21c,0x200,param_1,param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10004b50((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006200
 */

uint recovered_10006200(byte *param_1,double param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10003b60(local_21c,0x200,param_1,&param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10004b50((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

/* Native IA32 exception-scope stack, frame and program-counter transfer.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006260(void *context,...){
 __asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\njmpl *36(%eax)");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006270(void *context){__asm__ volatile("movl 4(%esp), %eax\nmovl %ebx, (%eax)\nmovl %esi, 4(%eax)\nmovl %edi, 8(%eax)\nmovl %ebp, 0xc(%eax)\nleal 4(%esp), %edx\nmovl %edx, 0x10(%eax)\nmovl (%esp), %edx\nmovl %edx, 0x14(%eax)\nmovl $0xffffffff, 0x18(%eax)\nmovl %eax, %esi\nmovl $1, %eax\ncpuid \nandl $0x3000000, %edx\ncmpl $0x3000000, %edx\njne Lpf_context_100062ae\nstmxcsr 0x18(%esi)\nLpf_context_100062ae:\nfnstcw 0x1c(%esi)\nxorl %eax, %eax\nmovl (%esi), %ebx\nmovl 4(%esi), %esi\nretl \nud2 \nnop \nnop \nnop \nnop \nnop ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100062c0(void *context,int value){__asm__ volatile("movl 4(%esp), %edx\nmovl 8(%esp), %eax\ntestl %eax, %eax\njne Lpf_context_100062d1\nmovl $1, %eax\nLpf_context_100062d1:\ncmpl $-1, 0x18(%edx)\nje Lpf_context_100062db\nldmxcsr 0x18(%edx)\nLpf_context_100062db:\nfldcw 0x1c(%edx)\nmovl (%edx), %ebx\nmovl 4(%edx), %esi\nmovl 8(%edx), %edi\nmovl 0xc(%edx), %ebp\nmovl 0x10(%edx), %esp\njmpl *0x14(%edx)\nud2 \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop ");}


#undef DAT_1000ae80
#define DAT_1000ae80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27bU)))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006300
 */

void recovered_10006300(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006380;
  local_2c = &DAT_1000ae80;
  local_24 = 0x40;
  local_44 = 1;
  recovered_100069f0(&local_48);
  recovered_100019e0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000ae80
#undef local_30
#undef auStackY_d0
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006380
 */

undefined4 recovered_10006380(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006390
 */

void recovered_10006390(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100063b0();
                    /* WARNING: Subroutine does not return */
  recovered_10006300();
}


#undef DAT_1000b310
#define DAT_1000b310 (*(int *)(((uintptr_t)pf_module_state + 0x70bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063b0
 */

void recovered_100063b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;

  recovered_100067f0();
  if (extraout_EAX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006300();
  }
  *(int *)(extraout_EAX + 8) = DAT_1000b310;
  *(undefined1 *)(extraout_EAX + 0x20) = 0;
  DAT_1000b310 = extraout_EAX;
  recovered_10006840();
  return;
}

#undef DAT_1000b310

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063f0
 */

void * recovered_100063f0(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001a20(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100019e0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006420
 */

void * recovered_10006420(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001a20(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100019e0();
  }
  return pvVar1;
}


#undef DAT_1000ae90
#define DAT_1000ae90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28bU)))
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
 * Address: 0x10006450
 */

void recovered_10006450(void *pointer)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006380;
  local_2c = &DAT_1000ae90;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100069f0(&local_48);
  recovered_10001a70(pointer);
  recovered_10006a20(&local_48);
  return;
}

#undef DAT_1000ae90
#undef local_20
#undef auStackY_d0
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_1000aea0
#define DAT_1000aea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29bU)))
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
 * Address: 0x100064e0
 */

void recovered_100064e0(void *pointer)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006380;
  local_2c = &DAT_1000aea0;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100069f0(&local_48);
  recovered_10001a70(pointer);
  recovered_10006a20(&local_48);
  return;
}

#undef DAT_1000aea0
#undef local_44
#undef auStackY_d0
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48

#undef DAT_1000aeb0
#define DAT_1000aeb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2abU)))
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
 * Address: 0x10006570
 */

void recovered_10006570(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006380;
  local_2c = &DAT_1000aeb0;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100069f0(&local_48);
  recovered_10001a70(param_1);
  recovered_10006a20(&local_48);
  return;
}

#undef DAT_1000aeb0
#undef local_28
#undef auStackY_d0
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c

#undef DAT_1000aec0
#define DAT_1000aec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bbU)))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006600
 */

void recovered_10006600(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006380;
  local_2c = &DAT_1000aec0;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100069f0(&local_48);
  recovered_10001a70(param_1);
  recovered_10006a20(&local_48);
  return;
}

#undef DAT_1000aec0
#undef local_30
#undef auStackY_d0
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006690
 */

undefined4 recovered_10006690(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066a0
 */

uint recovered_100066a0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066c0
 */

void recovered_100066c0(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066d0
 */

void recovered_100066d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000b318
#define DAT_1000b318 (*(int *)(((uintptr_t)pf_module_state + 0x713U)))
#undef DAT_1000b31c
#define DAT_1000b31c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x717U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066e0
 */

undefined1 * recovered_100066e0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;
  int iVar3;

  size = param_1 + 0x24 + (uint)(param_1 == 0);
  puVar1 = recovered_10001a20(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006300();
  }
  if (size != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      size = size - 1;
    } while (size != 0);
  }
  DAT_1000b318 = DAT_1000b318 + 1 + (uint)(DAT_1000b318 == -1);
  if (DAT_1000b31c == (undefined1 *)0x0) {
LAB_1000675c:
    *(int *)(puVar1 + 0x1c) = DAT_1000b318;
    *(undefined1 **)(puVar1 + 0xc) = DAT_1000b31c;
    DAT_1000b31c = puVar1;
    return puVar1 + 0x24;
  }
  do {
    iVar3 = (int)DAT_1000b31c;
    while (*(int *)(iVar3 + 0x1c) != DAT_1000b318) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_1000675c;
    }
    DAT_1000b318 = DAT_1000b318 + 1 + (uint)(DAT_1000b318 == -1);
  } while( true );
}

#undef DAT_1000b318
#undef DAT_1000b31c

#undef DAT_1000b31c
#define DAT_1000b31c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x717U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006780
 */

void recovered_10006780(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  if (param_1 != 0) {
    pointer = (void *)(param_1 + -0x24);
    pvVar1 = DAT_1000b31c;
    if (DAT_1000b31c == pointer) {
      puVar2 = &DAT_1000b31c;
    }
    else {
      do {
        pvVar3 = pvVar1;
        if (pvVar3 == (void *)0x0) goto LAB_100067d4;
        pvVar1 = *(void **)((int)pvVar3 + 0xc);
      } while (*(void **)((int)pvVar3 + 0xc) != pointer);
      puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
    }
    *puVar2 = *(undefined4 *)(param_1 + -0x18);
    *(undefined4 *)(param_1 + -0x18) = 0;
LAB_100067d4:
    recovered_10001a70(pointer);
  }
  return;
}

#undef DAT_1000b31c

#undef DAT_1000b31c
#define DAT_1000b31c (*(int *)(((uintptr_t)pf_module_state + 0x717U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067f0
 */

void recovered_100067f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;

  iVar1 = DAT_1000b31c;
  if (DAT_1000b31c != in_ECX && DAT_1000b31c != 0) {
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

#undef DAT_1000b31c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006840
 */

int recovered_10006840(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  return in_ECX + 0x24;
}


#undef DAT_1000b310
#define DAT_1000b310 (*(void * *)(((uintptr_t)pf_module_state + 0x70bU)))
#undef DAT_1000b31c
#define DAT_1000b31c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x717U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006850
 */

void recovered_10006850(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  pointer = DAT_1000b310;
  if (DAT_1000b310 != (void *)0x0) {
    puVar2 = (undefined4 *)((int)DAT_1000b310 + 8);
    DAT_1000b310 = *(void **)((int)DAT_1000b310 + 8);
    *puVar2 = 0;
    if (*(char *)((int)pointer + 0x20) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x24);
      }
      pvVar1 = DAT_1000b31c;
      if (DAT_1000b31c == pointer) {
        puVar2 = &DAT_1000b31c;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_100068c4;
          pvVar1 = *(void **)((int)pvVar3 + 0xc);
        } while (*(void **)((int)pvVar3 + 0xc) != pointer);
        puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
      }
      *puVar2 = *(undefined4 *)((int)pointer + 0xc);
      *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_100068c4:
      recovered_10001a70(pointer);
    }
  }
  return;
}

#undef DAT_1000b310
#undef DAT_1000b31c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068e0
 */

void recovered_100068e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10006920();
}


#undef DAT_1000b310
#define DAT_1000b310 (*(int *)(((uintptr_t)pf_module_state + 0x70bU)))
#undef DAT_1000b314
#define DAT_1000b314 (*(int * *)(((uintptr_t)pf_module_state + 0x70fU)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006920
 */

void recovered_10006920(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;

  if (DAT_1000b314 != (int *)0x0) {
    piVar3 = DAT_1000b314;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar2 = recovered_100072f0((undefined2 *)&local_20);
      if (((char)uVar2 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(in_ECX + 0x10) = piVar3;
        *(undefined4 *)(in_ECX + 0x14) = local_1c;
        *(undefined4 *)(in_ECX + 0x18) = local_18;
        recovered_10006af0();
        iVar1 = DAT_1000b310;
        if (DAT_1000b310 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006300();
        }
        *(undefined1 *)(DAT_1000b310 + 0x20) = 1;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10006920();
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006300();
}

#undef DAT_1000b310
#undef DAT_1000b314
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000b310
#define DAT_1000b310 (*(int *)(((uintptr_t)pf_module_state + 0x70bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069b0
 */

void recovered_100069b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b310;
  if (DAT_1000b310 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006300();
  }
  *(undefined1 *)(DAT_1000b310 + 0x20) = 1;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10006920();
}

#undef DAT_1000b310

#undef DAT_1000b314
#define DAT_1000b314 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x70fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069f0
 */

void recovered_100069f0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000b314;
  DAT_1000b314 = param_1;
  return;
}

#undef DAT_1000b314

#undef DAT_1000b314
#define DAT_1000b314 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x70fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a20
 */

void recovered_10006a20(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000b314;
  if (DAT_1000b314 == param_1) {
    puVar2 = &DAT_1000b314;
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

#undef DAT_1000b314

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a60
 */

void recovered_10006a60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006920();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a80
 */

void recovered_10006a80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006300();
}


#undef DAT_1000b314
#define DAT_1000b314 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x70fU)))
#undef DAT_1000b31c
#define DAT_1000b31c (*(int *)(((uintptr_t)pf_module_state + 0x717U)))
#define iStack_4c (*(int *)(pf_stack_frame + 20))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a90
 */

undefined4 recovered_10006a90(int param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX = 0;

  iVar4 = DAT_1000b31c;
  if (DAT_1000b31c != param_1 && DAT_1000b31c != 0) {
    do {
      if (*(int *)(iVar4 + 0x1c) == param_1) goto LAB_10006ad2;
      iVar4 = *(int *)(iVar4 + 0xc);
    } while ((iVar4 != 0) && (iVar4 != param_1));
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006300();
  }
LAB_10006ad2:
  if (DAT_1000b314 != (undefined4 *)0x0) {
    DAT_1000b314 = (undefined4 *)*DAT_1000b314;
  }
  recovered_10006af0();
  if (DAT_1000b314 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(extraout_ECX + 0x10);
    do {
      puVar2 = DAT_1000b314;
      if (DAT_1000b314 == puVar1) {
        DAT_1000b314[2] = extraout_ECX;
        puVar2[3] = *(undefined4 *)(extraout_ECX + 0x18);
        uVar3 = *(undefined4 *)(extraout_ECX + 0x14);
LAB_10006b8e:
        puVar2[1] = uVar3;
        recovered_10006260((int)puVar2);
        recovered_10006a90(iStack_4c);
        return 0;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      recovered_100072f0((undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_3c;
        goto LAB_10006b8e;
      }
      DAT_1000b314 = (undefined4 *)*puVar2;
    } while (DAT_1000b314 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006300();
}

#undef DAT_1000b314
#undef DAT_1000b31c
#undef iStack_4c
#undef uStack_40
#undef uStack_3c
#undef uStack_38

#undef DAT_1000b314
#define DAT_1000b314 (*(int * *)(((uintptr_t)pf_module_state + 0x70fU)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define iStack_2c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

undefined4 recovered_10006af0(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;

  if (DAT_1000b314 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0x10);
    do {
      piVar2 = DAT_1000b314;
      if (DAT_1000b314 == piVar1) {
        DAT_1000b314[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x18);
        iVar3 = *(int *)(in_ECX + 0x14);
LAB_10006b8e:
        piVar2[1] = iVar3;
        recovered_10006260((int)piVar2);
        recovered_10006a90(iStack_2c);
        return 0;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      recovered_100072f0((undefined2 *)&local_20);
      if (((char)local_20 == '\x01') && (PF_PART1(local_20, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_1c;
        goto LAB_10006b8e;
      }
      DAT_1000b314 = (int *)*piVar2;
    } while (DAT_1000b314 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006300();
}

#undef DAT_1000b314
#undef local_20
#undef local_1c
#undef iStack_2c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ba0
 */

undefined4 recovered_10006ba0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006a90(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bc0
 */

undefined4 recovered_10006bc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bd0
 */

void recovered_10006bd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006300();
}


#undef DAT_1000b0e0
#define DAT_1000b0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbU)))
#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006be0
 */

int recovered_10006be0(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_10006ca0;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_10006ca0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000b0e0) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_10006ca0:
      local_1c = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_1c;
}

#undef DAT_1000b0e0
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cc0
 */

void recovered_10006cc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100019e0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ce0
 */

undefined4 recovered_10006ce0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cf0
 */

bool recovered_10006cf0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d10
 */

bool recovered_10006d10(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d50
 */

bool recovered_10006d50(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d80
 */

int recovered_10006d80(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (uint)((PF_PART4(value, 4) & 0x7fffffff) < 0x7ff00000);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006da0
 */

bool recovered_10006da0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dc0
 */

byte recovered_10006dc0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e00
 */

int recovered_10006e00(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (uint)((PF_PART4(value, 4) & 0x7fffffff) < 0x7ff00000);
}


#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ac50
#define DAT_1000ac50 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000aca0
#define DAT_1000aca0 (*(float *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_1000aca8
#define DAT_1000aca8 (*(double *)(((uintptr_t)pf_module_state + 0xa3U)))
#undef DAT_1000acb0
#define DAT_1000acb0 (*(double *)(((uintptr_t)pf_module_state + 0xabU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e20
 */

longdouble recovered_10006e20(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  int iVar2;
  int iVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;

  lVar4 = (longdouble)param_1;
  if (!NAN(lVar4)) {
    if ((longdouble)DAT_1000aca8 < lVar4) {
      return (longdouble)DAT_1000aca0;
    }
    if (lVar4 < (longdouble)DAT_1000acb0) {
      return (longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_1000ac10;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_1000ac50) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_1000ac10;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_1000ac50);
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
      return lVar4;
    }
  }
  return lVar4;
}

#undef DAT_1000ac10
#undef DAT_1000ac50
#undef DAT_1000aca0
#undef DAT_1000aca8
#undef DAT_1000acb0

#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ac50
#define DAT_1000ac50 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000aca0
#define DAT_1000aca0 (*(float *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_1000aca8
#define DAT_1000aca8 (*(double *)(((uintptr_t)pf_module_state + 0xa3U)))
#undef DAT_1000acb0
#define DAT_1000acb0 (*(double *)(((uintptr_t)pf_module_state + 0xabU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f10
 */

longdouble recovered_10006f10(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;

  if (!NAN(param_1)) {
    fVar1 = DAT_1000aca0;
    if (((float)DAT_1000aca8 < param_1) || (fVar1 = 0.0, param_1 < (float)DAT_1000acb0))
    goto LAB_10006ffd;
    iVar4 = 0;
    if (DAT_1000ac10 < param_1) {
      iVar4 = 0;
      do {
        param_1 = param_1 * DAT_1000ac10;
        iVar4 = iVar4 + 1;
      } while (DAT_1000ac10 < param_1);
    }
    if (DAT_1000ac50 <= param_1) {
      fVar1 = param_1;
    }
    else {
      do {
        param_1 = param_1 * DAT_1000ac10;
        iVar4 = iVar4 + 1;
        fVar1 = param_1;
      } while (param_1 < DAT_1000ac50);
    }
    iVar5 = 0x20;
    fVar2 = 1.0;
    fVar3 = 1.0;
    param_1 = 1.0;
    do {
      fVar2 = (fVar1 / fVar3) * fVar2;
      param_1 = param_1 + fVar2;
      fVar3 = fVar3 + 1.0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar4 != 0) {
      do {
        param_1 = param_1 * param_1;
        iVar4 = iVar4 + -1;
        fVar1 = param_1;
      } while (iVar4 != 0);
      goto LAB_10006ffd;
    }
  }
  fVar1 = param_1;
LAB_10006ffd:
  return (longdouble)fVar1;
}

#undef DAT_1000ac10
#undef DAT_1000ac50
#undef DAT_1000aca0
#undef DAT_1000aca8
#undef DAT_1000acb0

#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ac50
#define DAT_1000ac50 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000aca0
#define DAT_1000aca0 (*(float *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_1000aca8
#define DAT_1000aca8 (*(double *)(((uintptr_t)pf_module_state + 0xa3U)))
#undef DAT_1000acb0
#define DAT_1000acb0 (*(double *)(((uintptr_t)pf_module_state + 0xabU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007010
 */

float10 recovered_10007010(float10 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  int iVar2;
  int iVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;

  lVar4 = (longdouble)(double)(longdouble)param_1;
  if (!NAN(lVar4)) {
    if ((longdouble)DAT_1000aca8 < lVar4) {
      return (float10)(longdouble)DAT_1000aca0;
    }
    if (lVar4 < (longdouble)DAT_1000acb0) {
      return (float10)(longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_1000ac10;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_1000ac50) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_1000ac10;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_1000ac50);
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

#undef DAT_1000ac10
#undef DAT_1000ac50
#undef DAT_1000aca0
#undef DAT_1000aca8
#undef DAT_1000acb0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007100
 */

longdouble recovered_10007100(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longdouble)param_1 - (longdouble)param_2;
}


#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ac50
#define DAT_1000ac50 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007130
 */

longdouble recovered_10007130(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;
  double dVar3;

  dVar3 = recovered_10002910(param_1);
  lVar1 = (longdouble)dVar3;
  if ((longdouble)DAT_1000ac10 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)DAT_1000ac50 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_1000ac10
#undef DAT_1000ac50

#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007190
 */

ulonglong recovered_10007190(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_10007243;
    }
  }
  else {
    if (param_3 != 0) {
      local_18 = param_3;
      goto LAB_10007243;
    }
    if (*pbVar7 != 0x30) {
      local_18 = 10;
      goto LAB_10007243;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_18 = 8;
      goto LAB_10007243;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_18 = 0x10;
LAB_10007243:
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
 * Address: 0x100072d0
 */

ulonglong recovered_100072d0(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007190(param_1,param_2,param_3);
  return uVar1;
}


#undef DAT_1000b0e0
#define DAT_1000b0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072f0
 */

undefined4 recovered_100072f0(undefined2 *param_1)

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
      recovered_10007680();
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
          goto LAB_100074a0;
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
LAB_100074a0:
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
       (pbVar13 = recovered_10007680(), pbVar13 == (byte *)0x0)) {
LAB_1000765e:
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
          if (iVar5 == iVar11) goto LAB_1000765e;
        }
        else {
          iVar17 = 0;
          do {
            cVar2 = *(char *)(iVar5 + iVar17);
            cVar3 = *(char *)(iVar11 + iVar17);
            if ((cVar2 == '\0') || (cVar3 == '\0')) {
              if (cVar2 == cVar3) goto LAB_1000765e;
              break;
            }
            iVar17 = iVar17 + 1;
          } while (cVar2 == cVar3);
        }
        if (*(undefined **)pbVar16 != &DAT_1000b0e0) goto LAB_10007637;
        pbVar16 = *(byte **)(pbVar16 + 8);
        bVar20 = pbVar16 != (byte *)0x0;
      } while ((pbVar16 != pbVar13) && (pbVar16 != (byte *)0x0));
    }
    if (bVar20) goto LAB_1000765e;
  }
LAB_10007637:
  if ((uVar19 | uVar8) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar19 | uVar8);
  bVar20 = 0x3e < uVar7;
  uVar7 = uVar7 + 1;
  if (bVar20) {
    return 0;
  }
  goto LAB_100074a0;
}

#undef DAT_1000b0e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007680
 */

byte * recovered_10007680(void)

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
    goto LAB_10007765;
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
    goto LAB_10007765;
  case 0x4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_100076bf_caseD_5;
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
LAB_10007765:
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
switchD_100076bf_caseD_5:
  return pbVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077d0
 */

void recovered_100077d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077f0
 */

void recovered_100077f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


#undef DAT_1000aed0
#define DAT_1000aed0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cbU)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define local_58 (*(short *)(pf_stack_frame + 184))
#define local_54 (*(uint * *)(pf_stack_frame + 188))
#define local_50 (*(uint *)(pf_stack_frame + 192))
#define local_4c (*(undefined4 *)(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 200))
#define local_44 (*(undefined4 *)(pf_stack_frame + 204))
#define local_30 (*(undefined * *)(pf_stack_frame + 224))
#define local_2c (*(undefined * *)(pf_stack_frame + 228))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_24 (*(undefined4 *)(pf_stack_frame + 236))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 240))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 244))
#define local_6a (*(ushort *)(pf_stack_frame + 166))
#define local_68 (*(void * *)(pf_stack_frame + 168))
#define local_64 (*(undefined4 *)(pf_stack_frame + 172))
#define auStackY_100 (*(undefined1 (*)[256])(pf_stack_frame + 16))
#define local_60 (*(undefined4 *)(pf_stack_frame + 176))
#define local_5c (*(int *)(pf_stack_frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

undefined4 * recovered_10007810(byte *param_1)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_100 + 0x80;
  local_68 = (void *)0x0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_30 = PTR_recovered_10006380_1000b00c;
  local_2c = &DAT_1000aed0;
  local_24 = 0x18e;
  recovered_100069f0(&local_48);
  if (param_1 != (byte *)0x0) {
    local_6a = 2;
    local_54 = (uint *)0x0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 1;
    uVar2 = recovered_10008f20(param_1,(int *)&local_54);
    if ((char)uVar2 == '\0') {
      cVar1 = '\0';
    }
    else {
      local_44 = 2;
      uVar2 = recovered_10009250(local_54,local_50,&local_68,&local_6a);
      cVar1 = (char)uVar2;
    }
    local_50 = 0;
    recovered_10006450(local_54);
    if (((cVar1 != '\0') && (local_58 == 2)) && (local_5c != 0)) {
      local_44 = 3;
      puVar3 = recovered_100063f0(0x18);
      puVar3[4] = 0;
      recovered_10006450((void *)0x0);
      *puVar3 = local_68;
      puVar3[1] = local_64;
      puVar3[2] = local_60;
      local_68 = (void *)0x0;
      local_60 = 0;
      *(short *)(puVar3 + 4) = local_58;
      puVar3[3] = local_5c;
      puVar3[5] = 0;
      goto LAB_10007989;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_10007989:
  local_64 = 0;
  recovered_10006450(local_68);
  recovered_10006a20(&local_48);
  return puVar3;
}

#undef DAT_1000aed0
#undef PTR_recovered_10006380_1000b00c
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
#undef local_6a
#undef local_68
#undef local_64
#undef auStackY_100
#undef local_60
#undef local_5c

#undef DAT_1000ac10
#define DAT_1000ac10 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ac1c
#define DAT_1000ac1c (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000ac88
#define DAT_1000ac88 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
#undef DAT_1000acf0
#define DAT_1000acf0 (*(float *)(((uintptr_t)pf_module_state + 0xebU)))
#undef DAT_1000acf4
#define DAT_1000acf4 (*(float *)(((uintptr_t)pf_module_state + 0xefU)))
#undef DAT_1000acf8
#define DAT_1000acf8 (*(float *)(((uintptr_t)pf_module_state + 0xf3U)))
#undef DAT_1000acfc
#define DAT_1000acfc (*(float *)(((uintptr_t)pf_module_state + 0xf7U)))
#undef DAT_1000ad10
#define DAT_1000ad10 (*(double *)(((uintptr_t)pf_module_state + 0x10bU)))
#undef DAT_1000ad78
#define DAT_1000ad78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x173U)))
#define local_3c (*(double *)(pf_stack_frame + 84))
#define local_34 (*(double *)(pf_stack_frame + 92))
#define local_2c (*(double *)(pf_stack_frame + 100))
#define local_24 (*(double *)(pf_stack_frame + 108))
#define local_1c (*(double *)(pf_stack_frame + 116))
#define uStack_54 (*(undefined4 *)(pf_stack_frame + 60))
#define uStack_4c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(uint *)(pf_stack_frame + 24))
#define local_74 (*(void * *)(pf_stack_frame + 28))
#define local_70 (*(uint *)(pf_stack_frame + 32))
#define local_6c (*(char * *)(pf_stack_frame + 36))
#define local_68 (*(int *)(pf_stack_frame + 40))
#define local_64 (*(undefined4 *)(pf_stack_frame + 44))
#define local_60 (*(int *)(pf_stack_frame + 48))
#define local_5c (*(int *)(pf_stack_frame + 52))
#define local_58 (*(uint *)(pf_stack_frame + 56))
#define local_50 (*(int *)(pf_stack_frame + 64))
#define local_44 (*(double *)(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a20
 */

void * recovered_10007a20(int frequency,int duration,char *wave,char *side)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  undefined2 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  char *pcVar7;
  int iVar8;
  longdouble lVar9;
  longdouble lVar10;
  longlong lVar11;
  double dVar12;

  if ((duration | frequency) < 0) {
    return (void *)0x0;
  }
  local_6c = (char *)0x0;
  local_68 = 0;
  local_64 = 0;
  if (wave == (char *)0x0) goto LAB_10007cfe;
  uVar2 = 0xffffffff;
  do {
    iVar8 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (wave[iVar8] != '\0');
  recovered_10009f10((int *)&local_6c,(int)wave,uVar2);
  pcVar7 = local_6c;
  if (local_6c == (char *)0x0) {
    pcVar7 = &DAT_1000ad78;
  }
  if (local_68 == 3) {
    if (((*pcVar7 != 's') || (pcVar7[1] != 'a')) || (iVar8 = 2, pcVar7[2] != 'w'))
    goto LAB_10007cfe;
  }
  else {
    if (local_68 == 4) {
      if (((*pcVar7 != 's') || (pcVar7[1] != 'i')) || (pcVar7[2] != 'n')) goto LAB_10007cfe;
      iVar8 = 1;
      cVar6 = pcVar7[3];
    }
    else {
      if (((local_68 != 6) || (*pcVar7 != 's')) ||
         ((pcVar7[1] != 'q' || (((pcVar7[2] != 'u' || (pcVar7[3] != 'a')) || (pcVar7[4] != 'r'))))))
      goto LAB_10007cfe;
      iVar8 = 0;
      cVar6 = pcVar7[5];
    }
    if (cVar6 != 'e') goto LAB_10007cfe;
  }
  local_60 = iVar8;
  recovered_10006450(local_6c);
  local_6c = (char *)0x0;
  local_68 = 0;
  local_64 = 0;
  if (side == (char *)0x0) goto LAB_10007cfe;
  uVar2 = 0xffffffff;
  do {
    iVar8 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (side[iVar8] != '\0');
  recovered_10009f10((int *)&local_6c,(int)side,uVar2);
  pcVar7 = &DAT_1000ad78;
  if (local_6c != (char *)0x0) {
    pcVar7 = local_6c;
  }
  if (local_68 == 5) {
    if (((*pcVar7 != 'r') || (pcVar7[1] != 'i')) ||
       ((pcVar7[2] != 'g' || ((pcVar7[3] != 'h' || (local_78 = 1, pcVar7[4] != 't'))))))
    goto LAB_10007cfe;
  }
  else {
    if (local_68 != 4) goto LAB_10007cfe;
    cVar6 = *pcVar7;
    if (cVar6 == 'l') {
      if (((pcVar7[1] == 'e') && (pcVar7[2] == 'f')) && (local_78 = 0, pcVar7[3] == 't'))
      goto LAB_10007c67;
      cVar6 = *pcVar7;
    }
    if (((cVar6 != 'b') || (pcVar7[1] != 'o')) ||
       ((pcVar7[2] != 't' || (local_78 = 2, pcVar7[3] != 'h')))) {
LAB_10007cfe:
      recovered_10006450(local_6c);
      return (void *)0x0;
    }
  }
LAB_10007c67:
  recovered_10006450(local_6c);
  puVar3 = recovered_100063f0(0x18);
  puVar3[4] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xac44;
  *(undefined2 *)(puVar3 + 4) = 2;
  if (duration == 0) goto LAB_10007e8e;
  local_50 = duration;
  uStack_4c = 0;
  lVar9 = ((longdouble)(uint)duration * (longdouble)DAT_1000acf0) / (longdouble)DAT_1000acf4;
  if ((longdouble)DAT_1000ad10 <= lVar9) {
    local_70 = 0x7fffffff;
    iVar8 = -2;
LAB_10007d1c:
    local_74 = recovered_100063f0(local_70 * 4);
    recovered_10006450((void *)0x0);
    *puVar3 = local_74;
    puVar3[2] = iVar8;
    iVar4 = 0;
    do {
      *(undefined2 *)((int)local_74 + iVar4 * 2) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar8 != iVar4);
    puVar3[1] = iVar8;
  }
  else {
    lVar11 = recovered_10006190((float10)lVar9);
    local_70 = (uint)lVar11;
    iVar8 = local_70 * 2;
    puVar3[1] = 0;
    if (iVar8 != 0) goto LAB_10007d1c;
    local_74 = (void *)0x0;
  }
  if (0 < frequency) {
    local_5c = frequency;
    local_24 = (double)frequency;
    if (local_70 != 0) {
      uVar2 = 0;
      local_44 = -1.0;
      local_2c = (double)DAT_1000acfc;
      local_34 = (double)DAT_1000acf8;
      local_3c = (double)DAT_1000ac10;
      do {
        uStack_54 = 0;
        local_1c = (local_24 * (double)uVar2) / (double)DAT_1000acf0;
        local_58 = uVar2;
        dVar12 = recovered_10002910(local_1c);
        lVar9 = (longdouble)local_1c - (longdouble)dVar12;
        if (local_60 == 2) {
          lVar10 = (longdouble)local_44 + lVar9 + lVar9;
        }
        else if (local_60 == 1) {
          lVar10 = recovered_10002c30((double)((longdouble)local_1c * (longdouble)DAT_1000ac88));
        }
        else {
          lVar10 = (longdouble)local_44;
          if (lVar9 < (longdouble)local_3c) {
            lVar10 = (longdouble)1;
          }
        }
        lVar9 = lVar10 * (longdouble)DAT_1000ac1c * (longdouble)DAT_1000acf8;
        uVar1 = 0x8000;
        if (((longdouble)local_2c < lVar9) && (uVar1 = 0x7fff, lVar9 < (longdouble)local_34)) {
          lVar5 = recovered_10003540((double)lVar9);
          uVar1 = (undefined2)lVar5;
        }
        if ((local_78 & 1) == 0) {
          *(undefined2 *)((int)local_74 + uVar2 * 4) = uVar1;
        }
        if (local_78 - 1 < 2) {
          *(undefined2 *)((int)local_74 + uVar2 * 4 + 2) = uVar1;
        }
        uVar2 = uVar2 + 1;
      } while (local_70 != uVar2);
    }
  }
LAB_10007e8e:
  puVar3[5] = 0;
  return puVar3;
}

#undef DAT_1000ac10
#undef DAT_1000ac1c
#undef DAT_1000ac88
#undef DAT_1000acf0
#undef DAT_1000acf4
#undef DAT_1000acf8
#undef DAT_1000acfc
#undef DAT_1000ad10
#undef DAT_1000ad78
#undef local_3c
#undef local_34
#undef local_2c
#undef local_24
#undef local_1c
#undef uStack_54
#undef uStack_4c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_50
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ea0
 */

int recovered_10007ea0(void *track,void *view)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  int iVar2;
  int iVar3;

  if (view != (void *)0x0) {
    *(undefined4 *)view = 0;
    *(undefined4 *)((int)view + 8) = 0;
    *(undefined4 *)((int)view + 4) = 0;
    *(undefined4 *)((int)view + 0xc) = 0;
    *(undefined2 *)((int)view + 0x10) = 0;
    if ((((track != (void *)0x0) && (iVar2 = *(int *)((int)track + 4), iVar2 != 0)) &&
        (iVar3 = *(int *)((int)track + 0xc), iVar3 != 0)) &&
       (sVar1 = *(short *)((int)track + 0x10), sVar1 != 0)) {
      *(undefined4 *)view = *(undefined4 *)track;
      *(int *)((int)view + 4) = iVar2;
      *(undefined4 *)((int)view + 8) = 0;
      *(int *)((int)view + 0xc) = iVar3;
      *(short *)((int)view + 0x10) = sVar1;
      return CONCAT31((int3)((uint)view >> 8),1);
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f10
 */

bool recovered_10007f10(undefined4 *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_2 == (byte *)0x0 || param_1 == (undefined4 *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = recovered_10007f50(param_2,param_1);
  }
  return bVar1;
}


#undef DAT_1000ae66
#define DAT_1000ae66 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_1000aedc
#define DAT_1000aedc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d7U)))
#undef PTR_DAT_1000b008
#define PTR_DAT_1000b008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x403U)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define auStackY_110 (*(undefined1 (*)[272])(pf_stack_frame + 16))
#define local_78 (*(char * *)(pf_stack_frame + 168))
#define local_74 (*(int *)(pf_stack_frame + 172))
#define local_70 (*(undefined4 *)(pf_stack_frame + 176))
#define local_6c (*(uint ** *)(pf_stack_frame + 180))
#define local_68 (*(undefined * *)(pf_stack_frame + 184))
#define local_64 (*(uint * *)(pf_stack_frame + 188))
#define local_60 (*(undefined4 *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 260))
#define local_5c (*(undefined1 *)(pf_stack_frame + 196))
#define local_58 (*(uint * *)(pf_stack_frame + 200))
#define local_54 (*(bool *)(pf_stack_frame + 204))
#define local_50 (*(undefined4 *)(pf_stack_frame + 208))
#define local_4c (*(undefined4 *)(pf_stack_frame + 212))
#define local_48 (*(undefined4 *)(pf_stack_frame + 216))
#define local_44 (*(undefined4 *)(pf_stack_frame + 220))
#define local_30 (*(undefined * *)(pf_stack_frame + 240))
#define local_2c (*(undefined * *)(pf_stack_frame + 244))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 248))
#define local_24 (*(undefined4 *)(pf_stack_frame + 252))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 256))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f50
 */

bool recovered_10007f50(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_110 + 0x80;
  local_30 = PTR_recovered_10006380_1000b00c;
  local_2c = &DAT_1000aedc;
  local_24 = 0x1a6;
  recovered_100069f0(&local_48);
  if (param_1 == (byte *)0x0) {
    bVar4 = false;
    goto LAB_100080f8;
  }
  local_78 = (char *)0x0;
  local_74 = 0;
  local_70 = 0;
  local_44 = 1;
  uVar2 = recovered_1000a080(param_2,&local_78);
  if ((char)uVar2 == '\0') {
LAB_100080de:
    bVar4 = false;
  }
  else {
    local_6c = &local_58;
    local_64 = (uint *)0x0;
    local_60 = 10;
    local_5c = 0;
    local_68 = PTR_DAT_1000b008 + 8;
    local_54 = false;
    local_4c = 0;
    local_50 = 0;
    local_44 = 2;
    local_64 = (uint *)recovered_10005070(param_1,&DAT_1000ae66);
    iVar1 = local_74;
    local_54 = local_64 != (uint *)0x0;
    local_4c = 0;
    local_50 = 0;
    local_58 = local_64;
    if (local_64 == (uint *)0x0) goto LAB_100080de;
    if (local_74 == 0 || local_78 != (char *)0x0) {
      local_44 = 3;
      iVar3 = recovered_100058c0(local_78,1,local_74,local_64);
      local_54 = iVar3 == iVar1;
      if (local_58 == (uint *)0x0) goto LAB_100080de;
    }
    else {
      local_54 = false;
    }
    bVar4 = local_54;
    local_44 = 4;
    recovered_10005510((int *)local_58);
  }
  local_74 = 0;
  recovered_10006450(local_78);
LAB_100080f8:
  recovered_10006a20(&local_48);
  return bVar4;
}

#undef DAT_1000ae66
#undef DAT_1000aedc
#undef PTR_DAT_1000b008
#undef PTR_recovered_10006380_1000b00c
#undef auStackY_110
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef auStack_1c
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

#undef DAT_1000acf4
#define DAT_1000acf4 (*(float *)(((uintptr_t)pf_module_state + 0xefU)))
#undef DAT_1000acf8
#define DAT_1000acf8 (*(float *)(((uintptr_t)pf_module_state + 0xf3U)))
#undef DAT_1000acfc
#define DAT_1000acfc (*(float *)(((uintptr_t)pf_module_state + 0xf7U)))
#undef DAT_1000ad10
#define DAT_1000ad10 (*(double *)(((uintptr_t)pf_module_state + 0x10bU)))
#define local_38 (*(int *)(pf_stack_frame + 24))
#define local_30 (*(int *)(pf_stack_frame + 32))
#define local_28 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081a0
 */

undefined4 recovered_100081a0(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  short sVar1;
  uint uVar2;
  uint uVar3;
  double value;
  double dVar4;
  undefined2 uVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longdouble value_00;
  longlong lVar14;
  double dVar15;
  double dVar16;

  if ((((param_4 < 0 || (param_2 == (int *)0x0 || param_1 == (int *)0x0)) ||
       ((short)param_1[4] != 2)) || ((short)param_2[4] != 2)) ||
     ((param_1[3] == 0 || (param_2[3] == 0)))) {
    uVar8 = 0;
  }
  else {
    uVar11 = param_1[1];
    uVar10 = param_2[1];
    uVar8 = CONCAT31((int3)((uint)param_2 >> 8),1);
    if (1 < uVar10 && 1 < uVar11) {
      if (param_3 == 0 && param_4 == 0) {
        uVar9 = 0;
      }
      else {
        value_00 = ((longdouble)(uint)param_1[3] * (longdouble)CONCAT44(param_4,param_3)) /
                   (longdouble)DAT_1000acf4;
        if ((longdouble)DAT_1000ad10 <= value_00) {
          return uVar8;
        }
        lVar14 = recovered_10006190((float10)value_00);
        uVar9 = (uint)lVar14;
      }
      uVar11 = uVar11 >> 1;
      uVar12 = uVar11 - uVar9;
      if (uVar9 <= uVar11 && uVar12 != 0) {
        uVar11 = param_2[3];
        uVar2 = param_1[3];
        dVar15 = recovered_10002960((double)(uVar10 >> 1) / ((double)uVar11 / (double)uVar2));
        local_28 = (uint)(longlong)ROUND(dVar15);
        if (local_28 < uVar12) {
          uVar12 = local_28;
        }
        if (uVar12 != 0) {
          iVar7 = *param_1;
          uVar9 = uVar9 * 4;
          uVar10 = 0;
          dVar15 = 0.0;
          do {
            value = ((double)uVar11 / (double)uVar2) * dVar15;
            sVar1 = *(short *)(iVar7 + uVar9 + uVar10 * 4);
            uVar13 = (uint)*(ushort *)(param_2 + 4);
            dVar4 = 0.0;
            if (uVar13 != 0) {
              dVar4 = 0.0;
              uVar3 = param_2[1];
              if (uVar3 != 0 && 0.0 <= value) {
                if (uVar3 < uVar13) {
                  dVar4 = 0.0;
                }
                else {
                  dVar4 = 0.0;
                  if (value < (double)(uVar3 / uVar13)) {
                    dVar16 = recovered_10002910(value);
                    local_30 = (int)(longlong)ROUND(dVar16);
                    uVar13 = uVar3 / uVar13 - 1;
                    if (local_30 + 1U <= uVar13) {
                      uVar13 = local_30 + 1U;
                    }
                    dVar4 = (double)*(short *)(*param_2 +
                                              local_30 * (uint)*(ushort *)(param_2 + 4) * 2);
                    dVar4 = ((double)*(short *)(*param_2 + uVar13 * *(ushort *)(param_2 + 4) * 2) -
                            dVar4) * (value - (double)((longlong)ROUND(dVar16) & 0xffffffff)) +
                            dVar4;
                  }
                }
              }
            }
            dVar4 = dVar4 + (double)sVar1;
            uVar5 = 0x8000;
            if (((double)DAT_1000acfc < dVar4) && (uVar5 = 0x7fff, dVar4 < (double)DAT_1000acf8)) {
              lVar6 = recovered_10003540(dVar4);
              uVar5 = (undefined2)lVar6;
            }
            iVar7 = *param_1;
            *(undefined2 *)(iVar7 + uVar9 + uVar10 * 4) = uVar5;
            sVar1 = *(short *)(iVar7 + uVar9 + 2 + uVar10 * 4);
            uVar13 = (uint)*(ushort *)(param_2 + 4);
            dVar4 = 0.0;
            if (uVar13 != 0) {
              uVar3 = param_2[1];
              dVar4 = 0.0;
              if ((uVar3 == 0) || (*(ushort *)(param_2 + 4) == 1)) {
LAB_100085f5:
                dVar4 = 0.0;
              }
              else if (0.0 <= value) {
                dVar4 = 0.0;
                if (uVar3 < uVar13) goto LAB_100085f5;
                if (value < (double)(int)(uVar3 / uVar13)) {
                  dVar16 = recovered_10002910(value);
                  local_38 = (int)(longlong)ROUND(dVar16);
                  uVar13 = uVar3 / uVar13 - 1;
                  if (local_38 + 1U <= uVar13) {
                    uVar13 = local_38 + 1U;
                  }
                  dVar4 = (double)*(short *)(*param_2 + 2 +
                                            local_38 * (uint)*(ushort *)(param_2 + 4) * 2);
                  dVar4 = ((double)*(short *)(*param_2 + 2 + uVar13 * *(ushort *)(param_2 + 4) * 2)
                          - dVar4) * (value - (double)((longlong)ROUND(dVar16) & 0xffffffff)) +
                          dVar4;
                }
              }
            }
            dVar4 = (double)sVar1 + dVar4;
            uVar5 = 0x8000;
            if (((double)DAT_1000acfc < dVar4) && (uVar5 = 0x7fff, dVar4 < (double)DAT_1000acf8)) {
              lVar6 = recovered_10003540(dVar4);
              uVar5 = (undefined2)lVar6;
            }
            iVar7 = *param_1;
            *(undefined2 *)(iVar7 + uVar9 + 2 + uVar10 * 4) = uVar5;
            dVar15 = dVar15 + 1.0;
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar12);
        }
        param_1[5] = 0;
        uVar8 = CONCAT31((int3)(uVar9 >> 8),1);
      }
    }
  }
  return uVar8;
}

#undef DAT_1000acf4
#undef DAT_1000acf8
#undef DAT_1000acfc
#undef DAT_1000ad10
#undef local_38
#undef local_30
#undef local_28

#undef DAT_1000aef0
#define DAT_1000aef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ebU)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 260))
#define local_7c (*(void * *)(pf_stack_frame + 164))
#define local_78 (*(void * *)(pf_stack_frame + 168))
#define local_74 (*(void * *)(pf_stack_frame + 172))
#define local_70 (*(int *)(pf_stack_frame + 176))
#define local_6c (*(uint *)(pf_stack_frame + 180))
#define local_68 (*(void * *)(pf_stack_frame + 184))
#define local_60 (*(uint *)(pf_stack_frame + 192))
#define local_58 (*(void * *)(pf_stack_frame + 200))
#define local_50 (*(uint *)(pf_stack_frame + 208))
#define local_48 (*(undefined4 *)(pf_stack_frame + 216))
#define local_44 (*(undefined4 *)(pf_stack_frame + 220))
#define local_30 (*(undefined * *)(pf_stack_frame + 240))
#define local_2c (*(undefined * *)(pf_stack_frame + 244))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 248))
#define local_24 (*(undefined4 *)(pf_stack_frame + 252))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 256))
#define auStackY_110 (*(undefined1 (*)[272])(pf_stack_frame + 16))
#define uStack_64 (*(undefined4 *)(pf_stack_frame + 188))
#define uStack_5c (*(uint *)(pf_stack_frame + 196))
#define uStack_54 (*(undefined4 *)(pf_stack_frame + 204))
#define uStack_4c (*(uint *)(pf_stack_frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008660
 */

uint recovered_10008660(void **param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  longdouble lVar5;
  longlong lVar6;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_110 + 0x80;
  local_70 = 0x10008674;
  local_30 = PTR_recovered_10006380_1000b00c;
  local_2c = &DAT_1000aef0;
  local_24 = 0x24d;
  recovered_100069f0(&local_48);
  uVar2 = 0;
  if ((((SBORROW4(param_5,param_3) != SBORROW4(param_5 - param_3,(uint)(param_4 < param_2))) ==
        (int)((param_5 - param_3) - (uint)(param_4 < param_2)) < 0) && (param_1 != (void **)0x0)) &&
     (-1 < (int)(param_5 | param_3))) {
    if (*(ushort *)(param_1 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      pvVar4 = param_1[3];
      uVar2 = 0;
      if (pvVar4 != (void *)0x0) {
        local_6c = (uint)param_1[1] / (uint)*(ushort *)(param_1 + 4);
        if ((int)(uint)(param_2 == 0) <= (int)param_3) {
          local_50 = param_2;
          uStack_4c = param_3;
          uStack_54 = 0;
          lVar5 = ((longdouble)(uintptr_t)pvVar4 * (longdouble)CONCAT44(param_3,param_2)) /
                  (longdouble)*(float *)(((uintptr_t)pf_module_state+0xefU));
          uVar2 = 0x7fffffff;
          local_58 = pvVar4;
          if (lVar5 < (longdouble)*(double *)(((uintptr_t)pf_module_state+0x10bU))) {
            local_44 = 0xffffffff;
            lVar6 = recovered_10006190((float10)lVar5);
            uVar2 = (uint)lVar6;
            pvVar4 = param_1[3];
          }
        }
        uVar1 = 0;
        if (pvVar4 != (void *)0x0 && (int)(uint)(param_4 == 0) <= (int)param_5) {
          local_60 = param_4;
          uStack_5c = param_5;
          uStack_64 = 0;
          lVar5 = ((longdouble)(uintptr_t)pvVar4 * (longdouble)CONCAT44(param_5,param_4)) /
                  (longdouble)*(float *)(((uintptr_t)pf_module_state+0xefU));
          uVar1 = 0x7fffffff;
          local_68 = pvVar4;
          if (lVar5 < (longdouble)*(double *)(((uintptr_t)pf_module_state+0x10bU))) {
            local_44 = 0xffffffff;
            lVar6 = recovered_10006190((float10)lVar5);
            uVar1 = (uint)lVar6;
          }
        }
        if (local_6c < uVar2) {
          uVar2 = local_6c;
        }
        if (local_6c < uVar1) {
          uVar1 = local_6c;
        }
        if (uVar1 <= uVar2) {
          uVar1 = uVar2;
        }
        local_7c = (void *)0x0;
        local_74 = (void *)0x0;
        iVar3 = uVar2 * *(ushort *)(param_1 + 4);
        local_78 = (void *)0x0;
        local_44 = 1;
        recovered_1000aae0((int *)&local_7c,0,(undefined2 *)((int)*param_1 + iVar3 * 2),
                           (undefined2 *)((int)*param_1 + uVar1 * *(ushort *)(param_1 + 4) * 2));
        if (&local_7c != param_1) {
          param_1[1] = (void *)0x0;
          recovered_10006450(*param_1);
          *param_1 = local_7c;
          param_1[1] = local_78;
          param_1[2] = local_74;
          local_7c = (void *)0x0;
          local_74 = (void *)0x0;
        }
        param_1[5] = (void *)0x0;
        local_78 = (void *)0x0;
        recovered_10006450(local_7c);
        uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
    }
  }
  recovered_10006a20(&local_48);
  return uVar2;
}

#undef DAT_1000aef0
#undef PTR_recovered_10006380_1000b00c
#undef auStack_1c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_110
#undef uStack_64
#undef uStack_5c
#undef uStack_54
#undef uStack_4c

#define local_2c (*(undefined4 *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(undefined2 *)(pf_stack_frame + 36))
#define local_18 (*(double *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008900
 */

undefined4 recovered_10008900(undefined4 *param_1,double param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_18 = param_2;
    iVar1 = recovered_10006d80(param_2);
    uVar3 = 0;
    if ((0.0 < local_18) && (iVar1 != 0)) {
      uVar3 = 1;
      if (((local_18 != 1.0) || (NAN(local_18))) &&
         ((uVar2 = (uint)*(ushort *)(param_1 + 4), uVar2 != 0 && (uVar2 <= (uint)param_1[1])))) {
        recovered_100089d0(&local_2c,param_1,(uint)param_1[1] / uVar2,local_18);
        param_1[1] = 0;
        recovered_10006450((void *)*param_1);
        *param_1 = local_2c;
        param_1[1] = local_28;
        param_1[2] = local_24;
        param_1[3] = local_20;
        *(undefined2 *)(param_1 + 4) = local_1c;
        recovered_10006450((void *)0x0);
        param_1[5] = 0;
      }
    }
  }
  return uVar3;
}

#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000acf8
#define DAT_1000acf8 (*(float *)(((uintptr_t)pf_module_state + 0xf3U)))
#undef DAT_1000acfc
#define DAT_1000acfc (*(float *)(((uintptr_t)pf_module_state + 0xf7U)))
#undef DAT_1000aef8
#define DAT_1000aef8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f3U)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define auStackY_140 (*(undefined1 (*)[320])(pf_stack_frame + 16))
#define local_58 (*(undefined4 *)(pf_stack_frame + 248))
#define local_54 (*(undefined4 *)(pf_stack_frame + 252))
#define local_40 (*(undefined * *)(pf_stack_frame + 272))
#define local_3c (*(undefined * *)(pf_stack_frame + 276))
#define local_38 (*(undefined1 * *)(pf_stack_frame + 280))
#define local_34 (*(undefined4 *)(pf_stack_frame + 284))
#define local_30 (*(undefined1 * *)(pf_stack_frame + 288))
#define local_20 (*(ulonglong *)(pf_stack_frame + 304))
#define auStack_18 (*(undefined1 (*)[24])(pf_stack_frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089d0
 */

void * recovered_100089d0(void *output,void *track,uint count,double factor)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  double value;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;

  local_38 = auStack_18 + 0x14;
  local_30 = auStackY_140 + 0x80;
  *(undefined4 *)output = 0;
  *(undefined4 *)((int)output + 8) = 0;
  iVar7 = *(int *)((int)track + 0xc);
  *(int *)((int)output + 0xc) = iVar7;
  uVar1 = *(ushort *)((int)track + 0x10);
  *(ushort *)((int)output + 0x10) = uVar1;
  *(undefined4 *)((int)output + 4) = 0;
  local_40 = PTR_recovered_10006380_1000b00c;
  local_3c = &DAT_1000aef8;
  local_34 = 0x301;
  uVar5 = (uint)uVar1;
  iVar10 = uVar5 * count;
  recovered_100069f0(&local_58);
  if (iVar10 == 0) {
    pvVar6 = (void *)0x0;
    uVar3 = uVar1;
  }
  else {
    local_54 = 1;
    pvVar6 = recovered_100063f0(iVar10 * 2);
    recovered_10006450((void *)0x0);
    *(void **)output = pvVar6;
    *(int *)((int)output + 8) = iVar10;
    iVar7 = 0;
    do {
      *(undefined2 *)((int)pvVar6 + iVar7 * 2) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar10 != iVar7);
    *(int *)((int)output + 4) = iVar10;
    iVar7 = *(int *)((int)track + 0xc);
    uVar3 = *(ushort *)((int)track + 0x10);
  }
  if ((((0.0 < factor) && (uVar3 != 0)) && (iVar7 != 0)) &&
     (count != 0 && *(int *)((int)track + 4) != 0)) {
    uVar8 = 0;
    do {
      value = factor * (double)uVar8;
      if (uVar1 != 0) {
        uVar12 = 0;
        do {
          uVar11 = (uint)*(ushort *)((int)track + 0x10);
          dVar13 = 0.0;
          if (((uVar11 == 0) || (uVar11 <= uVar12)) ||
             ((value < 0.0 || (uVar2 = *(uint *)((int)track + 4), uVar2 == 0)))) {
LAB_10008cf0:
            local_54 = 3;
            lVar9 = recovered_10003540(dVar13);
            uVar4 = (undefined2)lVar9;
          }
          else {
            dVar13 = 0.0;
            if ((double)(uVar2 / uVar11) <= value || uVar2 < uVar11) goto LAB_10008cf0;
            local_54 = 2;
            dVar13 = recovered_10002910(value);
            local_20 = (ulonglong)ROUND(dVar13);
            uVar11 = uVar2 / uVar11 - 1;
            if ((int)local_20 + 1U <= uVar11) {
              uVar11 = (int)local_20 + 1U;
            }
            dVar13 = (double)*(short *)(*(int *)track +
                                        (int)local_20 * (uint)*(ushort *)((int)track + 0x10) * 2 +
                                       uVar12 * 2);
            dVar13 = dVar13 + ((double)*(short *)(*(int *)track +
                                                  uVar11 * *(ushort *)((int)track + 0x10) * 2 +
                                                 uVar12 * 2) - dVar13) *
                              (value - (double)(local_20 & 0xffffffff));
            uVar4 = 0x8000;
            if (((double)DAT_1000acfc < dVar13) && (uVar4 = 0x7fff, dVar13 < (double)DAT_1000acf8))
            goto LAB_10008cf0;
          }
          *(undefined2 *)((int)pvVar6 + uVar12 * 2 + uVar8 * (uintptr_t)uVar5 * 2) = uVar4;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar5);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != count);
  }
  recovered_10006a20(&local_58);
  return output;
}

#undef DAT_1000acf8
#undef DAT_1000acfc
#undef DAT_1000aef8
#undef PTR_recovered_10006380_1000b00c
#undef auStackY_140
#undef local_58
#undef local_54
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_20
#undef auStack_18

#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_18 (*(undefined2 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d90
 */

undefined4 recovered_10008d90(undefined4 *param_1,double param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  double value;
  int iVar1;
  uint count;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;

  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = recovered_10006d80(param_2);
    uVar2 = 0;
    if ((0.0 < param_2) && (iVar1 != 0)) {
      uVar2 = 1;
      if (((param_2 != 1.0) || (NAN(param_2))) &&
         ((uVar3 = (uint)*(ushort *)(param_1 + 4), uVar3 != 0 && (uVar3 <= (uint)param_1[1])))) {
        count = 0;
        value = (double)((uint)param_1[1] / uVar3) / param_2;
        if (0.0 < value) {
          lVar4 = recovered_10002bd0(value);
          count = (uint)lVar4;
        }
        recovered_100089d0(&local_28,param_1,count,param_2);
        param_1[1] = 0;
        recovered_10006450((void *)*param_1);
        *param_1 = local_28;
        param_1[1] = local_24;
        param_1[2] = local_20;
        param_1[3] = local_1c;
        *(undefined2 *)(param_1 + 4) = local_18;
        recovered_10006450((void *)0x0);
        param_1[5] = 0;
      }
    }
  }
  return uVar2;
}

#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ea0
 */

undefined4 recovered_10008ea0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008eb0
 */

undefined8 recovered_10008eb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ec0
 */

undefined8 recovered_10008ec0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ed0
 */

void recovered_10008ed0(void *track)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (track != (void *)0x0) {
    *(undefined4 *)((int)track + 0x14) = 0;
    *(undefined4 *)((int)track + 4) = 0;
    recovered_10006450(*(void **)track);
    recovered_10006450(track);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f10
 */

void recovered_10008f10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000ae69
#define DAT_1000ae69 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264U)))
#undef DAT_1000af04
#define DAT_1000af04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ffU)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define local_30 (*(undefined * *)(pf_stack_frame + 240))
#define local_2c (*(undefined * *)(pf_stack_frame + 244))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 248))
#define local_24 (*(undefined4 *)(pf_stack_frame + 252))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 256))
#define auStackY_110 (*(undefined1 (*)[272])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 260))
#define local_5c (*(byte * *)(pf_stack_frame + 196))
#define local_58 (*(undefined1 *)(pf_stack_frame + 200))
#define local_54 (*(uint *)(pf_stack_frame + 204))
#define local_50 (*(undefined4 *)(pf_stack_frame + 208))
#define local_4c (*(byte ** *)(pf_stack_frame + 212))
#define local_48 (*(undefined4 *)(pf_stack_frame + 216))
#define local_44 (*(undefined4 *)(pf_stack_frame + 220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f20
 */

undefined4 recovered_10008f20(byte *param_1,int *param_2)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  uint size;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_EBX = 0;
  undefined4 uVar5;
  bool bVar6;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_110 + 0x80;
  bVar6 = param_1 == (byte *)0x0;
  local_30 = PTR_recovered_10006380_1000b00c;
  local_2c = &DAT_1000af04;
  local_24 = 0x29a;
  recovered_100069f0(&local_48);
  uVar5 = CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(param_2 == (int *)0x0 || bVar6,bVar6));
  if (param_2 != (int *)0x0 && !bVar6) {
    local_4c = &local_5c;
    local_58 = 0;
    local_50 = 0;
    local_54 = 0;
    local_44 = 1;
    local_5c = recovered_10005070(param_1,&DAT_1000ae69);
    local_58 = local_5c != (byte *)0x0;
    local_50 = 0;
    local_54 = 0;
    if ((bool)local_58) {
      local_44 = 2;
      iVar1 = recovered_10005a40((int *)local_5c,0,2);
      local_58 = iVar1 == 0;
      if (local_5c != (byte *)0x0) {
        local_44 = 3;
        size = recovered_10005ae0((int)local_5c);
        if ((int)size < 0) {
          local_58 = 0;
LAB_100090c1:
          uVar5 = 0;
          if (local_5c == (byte *)0x0) goto LAB_100091b8;
        }
        else {
          local_58 = 1;
          if (size == 0) goto LAB_100090c1;
          if (local_5c == (byte *)0x0) {
            local_58 = false;
          }
          else {
            local_44 = 4;
            iVar1 = recovered_10005a40((int *)local_5c,0,0);
            local_58 = iVar1 == 0;
          }
          uVar3 = param_2[1];
          if (size < uVar3) {
            param_2[1] = size;
          }
          else if (uVar3 < size) {
            if ((uint)param_2[2] < size) {
              local_44 = 5;
              pvVar2 = recovered_100063f0(size);
              pointer = (void *)*param_2;
              iVar1 = param_2[1];
              if (iVar1 != 0) {
                iVar4 = 0;
                do {
                  uVar5 = 0;
                  *(undefined1 *)((int)pvVar2 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
                  iVar4 = iVar4 + 1;
                } while (iVar1 != iVar4);
              }
              recovered_10006450(pointer);
              *param_2 = (int)pvVar2;
              param_2[2] = size;
              uVar3 = param_2[1];
            }
            while (uVar3 < size) {
              *(undefined1 *)(*param_2 + uVar3) = 0;
              uVar3 = param_2[1] + 1;
              param_2[1] = uVar3;
            }
          }
          if ((undefined4 *)*param_2 == (undefined4 *)0x0 || local_5c == (byte *)0x0) {
            uVar5 = 0;
            local_54 = 0;
          }
          else {
            local_44 = 6;
            local_54 = recovered_100055f0((undefined4 *)*param_2,1,size,(int *)local_5c);
            uVar5 = CONCAT31((int3)((uint)uVar5 >> 8),local_54 == size);
          }
          local_58 = (undefined1)uVar5;
          local_50 = 0;
          if (local_5c == (byte *)0x0) goto LAB_100091b6;
        }
        local_44 = 7;
        recovered_10005510((int *)local_5c);
        goto LAB_100091b8;
      }
    }
  }
LAB_100091b6:
  uVar5 = 0;
LAB_100091b8:
  recovered_10006a20(&local_48);
  return uVar5;
}

#undef DAT_1000ae69
#undef DAT_1000af04
#undef PTR_recovered_10006380_1000b00c
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_110
#undef auStack_1c
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44

#undef DAT_1000ad20
#define DAT_1000ad20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11bU)))
#undef DAT_1000ae6c
#define DAT_1000ae6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267U)))
#undef DAT_1000ae71
#define DAT_1000ae71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26cU)))
#undef DAT_1000ae76
#define DAT_1000ae76 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_1000ae7b
#define DAT_1000ae7b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x276U)))
#undef DAT_1000af20
#define DAT_1000af20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31bU)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define auStack_14 (*(undefined1 (*)[20])(pf_stack_frame + 348))
#define local_c8 (*(short *)(pf_stack_frame + 168))
#define local_bc (*(uint *)(pf_stack_frame + 180))
#define local_b0 (*(uint3 * *)(pf_stack_frame + 192))
#define local_98 (*(void * *)(pf_stack_frame + 216))
#define local_94 (*(void * *)(pf_stack_frame + 220))
#define local_90 (*(void * *)(pf_stack_frame + 224))
#define local_8c (*(void * *)(pf_stack_frame + 228))
#define local_88 (*(short *)(pf_stack_frame + 232))
#define local_84 (*(uint *)(pf_stack_frame + 236))
#define local_80 (*(double *)(pf_stack_frame + 240))
#define local_78 (*(undefined4 *)(pf_stack_frame + 248))
#define local_74 (*(undefined4 *)(pf_stack_frame + 252))
#define local_60 (*(undefined * *)(pf_stack_frame + 272))
#define local_5c (*(undefined * *)(pf_stack_frame + 276))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 280))
#define local_54 (*(undefined4 *)(pf_stack_frame + 284))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 288))
#define local_40 (*(uint *)(pf_stack_frame + 304))
#define local_3c (*(uint *)(pf_stack_frame + 308))
#define local_38 (*(int *)(pf_stack_frame + 312))
#define local_34 (*(uint *)(pf_stack_frame + 316))
#define local_30 (*(int *)(pf_stack_frame + 320))
#define local_2c (*(uint *)(pf_stack_frame + 324))
#define local_28 (*(uint *)(pf_stack_frame + 328))
#define local_24 (*(uint3 * *)(pf_stack_frame + 332))
#define local_20 (*(uint *)(pf_stack_frame + 336))
#define local_1c (*(double *)(pf_stack_frame + 340))
#define auStackY_160 (*(undefined1 (*)[352])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009250
 */

undefined4 recovered_10009250(uint *param_1,uint param_2,void **param_3,ushort *param_4)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  double dVar1;
  ushort uVar2;
  void *pvVar3;
  bool bVar4;
  byte bVar5;
  ushort uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint3 *puVar16;
  undefined4 uVar17;
  undefined2 uVar18;
  uint3 *puVar19;
  longdouble lVar20;

  local_58 = auStack_14 + 0x10;
  local_50 = auStackY_160 + 0x80;
  local_60 = PTR_recovered_10006380_1000b00c;
  local_5c = &DAT_1000af20;
  local_54 = 0x7c4;
  recovered_100069f0(&local_78);
  uVar17 = 0;
  if (((param_2 < 0xc) || (param_1 == (uint *)0x0)) || (param_3 == (void **)0x0)) goto LAB_10009321;
  local_74 = 0xffffffff;
  iVar8 = recovered_10001fd0(param_1,(uint *)&DAT_1000ae6c,4);
  if (iVar8 == 0) {
    local_74 = 0xffffffff;
    iVar8 = recovered_10001fd0(param_1 + 2,(uint *)&DAT_1000ae71,4);
    local_b0 = (uint3 *)0x0;
    uVar17 = 0;
    if (iVar8 != 0) goto LAB_10009321;
    if (param_2 < 0x14) {
      bVar4 = true;
      local_c8 = 0;
      uVar12 = 0;
      uVar2 = 0;
      local_bc = 0;
      pvVar3 = (void *)0x0;
    }
    else {
      iVar8 = 0xc;
      local_bc = 0;
      local_b0 = (uint3 *)0x0;
      uVar14 = 0x14;
      local_80 = pf_bits_double(CONCAT44(PF_PART4(local_80, 4),&DAT_1000ae76));
      pvVar3 = (void *)0x0;
      uVar2 = 0;
      uVar12 = 0;
      bVar5 = 0;
      local_c8 = 0;
      do {
        uVar15 = *(uint *)((int)param_1 + iVar8 + 4);
        uVar13 = uVar15 + uVar14;
        if (param_2 < uVar13) goto LAB_10009509;
        local_74 = 0xffffffff;
        iVar9 = recovered_10001fd0((uint *)(iVar8 + (int)param_1),SUB84(local_80,0),4);
        if (iVar9 != 0) {
          local_74 = 0xffffffff;
          iVar8 = recovered_10001fd0((uint *)(iVar8 + (int)param_1),(uint *)&DAT_1000ae7b,4);
          if (iVar8 == 0 && local_b0 == (uint3 *)0x0) {
            uVar12 = uVar15;
            local_b0 = (uint3 *)(uVar14 + (int)param_1);
          }
          goto LAB_100093f6;
        }
        if (uVar15 < 0x10) {
LAB_10009509:
          uVar17 = 0;
          goto LAB_10009321;
        }
        uVar6 = *(ushort *)((int)param_1 + uVar14);
        local_bc = (uint)*(ushort *)((int)param_1 + uVar14 + 2);
        pvVar3 = *(void **)((int)param_1 + uVar14 + 4);
        uVar2 = *(ushort *)((int)param_1 + uVar14 + 0xe);
        if ((uVar6 == 0xfffe) &&
           (((uVar15 < 0x28 || (*(ushort *)((int)param_1 + uVar14 + 0x10) < 0x16)) ||
            (uVar6 = *(ushort *)((int)param_1 + uVar14 + 0x18), (uVar6 & 0xfffd) != 1))))
        goto LAB_10009509;
        if (uVar6 == 1) {
          if ((uVar2 - 8 & 0xffe7) != 0) goto LAB_10009509;
          bVar5 = 1;
          local_c8 = 1;
        }
        else {
          if (uVar6 != 3) goto LAB_100092e5;
          bVar5 = 1;
          local_c8 = 3;
          if ((uVar2 != 0x20) && (uVar2 != 0x40)) goto LAB_10009509;
        }
LAB_100093f6:
        iVar8 = uVar13 + (uVar15 & 1);
        uVar14 = uVar13 + 8 + (uVar15 & 1);
      } while (uVar14 <= param_2);
      bVar4 = (bool)(bVar5 ^ 1);
    }
    uVar17 = 0;
    if (((((bVar4) || (local_b0 == (uint3 *)0x0)) || (uVar12 == 0)) ||
        (((ushort)local_bc == 0 || (pvVar3 == (void *)0x0)))) || (uVar17 = 0, uVar2 < 8))
    goto LAB_10009321;
    uVar14 = (uint)(uVar2 >> 3);
    uVar15 = local_bc * uVar14;
    local_3c = local_bc;
    if ((uVar15 == 0) || (uVar12 < uVar15)) goto LAB_10009321;
    uVar13 = local_bc;
    if (*param_4 != 0) {
      uVar13 = (uint)*param_4;
    }
    if ((short)uVar13 != 0) {
      local_38 = 0;
      local_2c = uVar12 / uVar15;
      local_98 = (void *)0x0;
      local_94 = (void *)0x0;
      local_90 = (void *)0x0;
      local_74 = 1;
      local_8c = pvVar3;
      local_88 = (short)uVar13;
      local_84 = uVar13;
      local_40 = uVar15;
      local_28 = uVar13;
      recovered_10009d30((int *)&local_98,local_2c * uVar13);
      local_34 = 0;
      if (1 < (ushort)local_bc) {
        local_34 = uVar14;
      }
      local_1c = (double)local_bc;
      local_30 = local_84 * 2;
      uVar12 = 0;
      puVar16 = local_b0;
      local_20 = local_bc;
      do {
        puVar19 = (uint3 *)(uVar12 * local_40 + (int)local_b0);
        local_80 = pf_bits_double(CONCAT44(PF_PART4(local_80, 4),puVar19));
        local_24 = puVar16;
        if ((short)local_28 == 2) {
          local_74 = 4;
          lVar20 = recovered_10009dc0(puVar19,local_c8,uVar2);
          dVar1 = (double)lVar20;
          local_74 = 5;
          lVar20 = recovered_10009dc0((uint3 *)(PF_PART4(local_80, 0) + local_34),local_c8,uVar2);
          uVar7 = 0x8000;
          if ((-1.0 < dVar1) && (uVar7 = 0x7fff, dVar1 < 1.0)) {
            local_74 = 6;
            lVar10 = recovered_10003540(dVar1 * *(double *)(&DAT_1000ad20 + (uint)(dVar1 < 0.0) * 8)
                                       );
            uVar7 = (undefined2)lVar10;
            lVar20 = (longdouble)(double)lVar20;
          }
          uVar18 = 0x8000;
          *(undefined2 *)((int)local_98 + uVar12 * 4) = uVar7;
          if (((longdouble)-1.0 < lVar20) && (uVar18 = 0x7fff, lVar20 < (longdouble)1)) {
            local_74 = 7;
            lVar10 = recovered_10003540((double)(lVar20 * (longdouble)
                                                          *(double *)
                                                           (&DAT_1000ad20 +
                                                           (uint)(lVar20 < (longdouble)0) * 8)));
            uVar18 = (undefined2)lVar10;
          }
          *(undefined2 *)((int)local_98 + uVar12 * 4 + 2) = uVar18;
        }
        else if (local_84 == 1) {
          lVar20 = (longdouble)0;
          uVar15 = local_3c;
          do {
            local_80 = (double)lVar20;
            local_74 = 3;
            lVar20 = recovered_10009dc0(puVar16,local_c8,uVar2);
            lVar20 = (longdouble)local_80 + lVar20;
            puVar16 = (uint3 *)((int)puVar16 + uVar14);
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
          lVar20 = lVar20 / (longdouble)local_1c;
          uVar7 = 0x8000;
          if (((longdouble)-1.0 < lVar20) && (uVar7 = 0x7fff, lVar20 < (longdouble)1)) {
            local_74 = 2;
            lVar10 = recovered_10003540((double)(lVar20 * (longdouble)
                                                          *(double *)
                                                           (&DAT_1000ad20 +
                                                           (uint)(lVar20 < (longdouble)0) * 8)));
            uVar7 = (undefined2)lVar10;
          }
          *(undefined2 *)((int)local_98 + uVar12 * 2) = uVar7;
        }
        else {
          uVar15 = 0;
          do {
            uVar11 = local_bc - 1;
            if (uVar15 < local_3c) {
              uVar11 = uVar15;
            }
            local_74 = 8;
            lVar20 = recovered_10009dc0((uint3 *)((uVar11 & 0xffff) * uVar14 + PF_PART4(local_80, 0)),
                                        local_c8,uVar2);
            uVar7 = 0x8000;
            if (((longdouble)-1.0 < lVar20) && (uVar7 = 0x7fff, lVar20 < (longdouble)1)) {
              local_74 = 9;
              lVar10 = recovered_10003540((double)(lVar20 * (longdouble)
                                                            *(double *)
                                                             (&DAT_1000ad20 +
                                                             (uint)(lVar20 < (longdouble)0) * 8)));
              uVar7 = (undefined2)lVar10;
            }
            *(undefined2 *)((int)local_98 + uVar15 * 2 + local_38) = uVar7;
            uVar15 = uVar15 + 1;
          } while (local_84 != uVar15);
        }
        uVar12 = uVar12 + 1;
        puVar16 = (uint3 *)((int)local_24 + local_40);
        local_38 = local_38 + local_30;
      } while (uVar12 < local_2c);
      if (&local_98 != param_3) {
        param_3[1] = (void *)0x0;
        recovered_10006450(*param_3);
        *param_3 = local_98;
        param_3[1] = local_94;
        param_3[2] = local_90;
        local_98 = (void *)0x0;
        local_90 = (void *)0x0;
      }
      *(short *)(param_3 + 4) = local_88;
      param_3[3] = local_8c;
      local_94 = (void *)0x0;
      recovered_10006450(local_98);
      uVar17 = CONCAT31((int3)(uVar13 >> 8),1);
      goto LAB_10009321;
    }
  }
LAB_100092e5:
  uVar17 = 0;
LAB_10009321:
  recovered_10006a20(&local_78);
  return uVar17;
}

#undef DAT_1000ad20
#undef DAT_1000ae6c
#undef DAT_1000ae71
#undef DAT_1000ae76
#undef DAT_1000ae7b
#undef DAT_1000af20
#undef PTR_recovered_10006380_1000b00c
#undef auStack_14
#undef local_c8
#undef local_bc
#undef local_b0
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_78
#undef local_74
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_160

#undef DAT_1000af38
#define DAT_1000af38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x333U)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009aa0
 */

void recovered_10009aa0(int param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  piVar1 = *(int **)(param_1 + 0x18);
  local_30 = PTR_recovered_10006380_1000b00c;
  local_2c = &DAT_1000af38;
  local_24 = 0x7b;
  recovered_100069f0(&local_48);
  if (piVar1 != (int *)0x0) {
    local_44 = 1;
    recovered_10005510(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  recovered_10006a20(&local_48);
  return;
}

#undef DAT_1000af38
#undef PTR_recovered_10006380_1000b00c
#undef auStackY_d0
#undef local_48
#undef auStack_1c
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000af48
#define DAT_1000af48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x343U)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b60
 */

void recovered_10009b60(undefined4 *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  piVar1 = (int *)*param_1;
  local_30 = PTR_recovered_10006380_1000b00c;
  local_2c = &DAT_1000af48;
  local_24 = 0x79;
  recovered_100069f0(&local_48);
  if (piVar1 != (int *)0x0) {
    local_44 = 1;
    recovered_10005510(piVar1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  recovered_10006a20(&local_48);
  return;
}

#undef DAT_1000af48
#undef PTR_recovered_10006380_1000b00c
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_1000af58
#define DAT_1000af58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x353U)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined * *)(pf_stack_frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c10
 */

void recovered_10009c10(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  piVar1 = *(int **)((int)param_1 + 0x18);
  local_30 = PTR_recovered_10006380_1000b00c;
  local_2c = &DAT_1000af58;
  local_24 = 0x83;
  recovered_100069f0(&local_48);
  if (piVar1 != (int *)0x0) {
    local_44 = 1;
    recovered_10005510(piVar1);
    *(undefined4 *)((int)param_1 + 0x18) = 0;
  }
  *(undefined1 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  recovered_10006450(param_1);
  recovered_10006a20(&local_48);
  return;
}

#undef DAT_1000af58
#undef PTR_recovered_10006380_1000b00c
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
 * Address: 0x10009cd0
 */

void recovered_10009cd0(undefined4 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  void *pvVar2;
  int iVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar2 = recovered_100063f0(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar3 = 0;
      do {
        *(undefined1 *)((int)pvVar2 + iVar3) = *(undefined1 *)((int)pointer + iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
    recovered_10006450(pointer);
    *param_1 = pvVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d30
 */

void recovered_10009d30(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;

  uVar2 = param_1[1];
  if (uVar2 <= param_2) {
    if (param_2 <= uVar2) {
      return;
    }
    if ((uint)param_1[2] < param_2) {
      pvVar1 = recovered_100063f0(param_2 * 2);
      pointer = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          *(undefined2 *)((int)pvVar1 + iVar5 * 2) = *(undefined2 *)((int)pointer + iVar5 * 2);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      recovered_10006450(pointer);
      *param_1 = (int)pvVar1;
      param_1[2] = param_2;
      uVar2 = param_1[1];
    }
    iVar4 = param_2 - uVar2;
    if (param_2 < uVar2 || iVar4 == 0) {
      return;
    }
    puVar3 = (undefined2 *)(uVar2 * 2 + *param_1);
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  return;
}


#undef DAT_1000ad00
#define DAT_1000ad00 (*(float *)(((uintptr_t)pf_module_state + 0xfbU)))
#undef DAT_1000ad04
#define DAT_1000ad04 (*(float *)(((uintptr_t)pf_module_state + 0xffU)))
#undef DAT_1000ad08
#define DAT_1000ad08 (*(float *)(((uintptr_t)pf_module_state + 0x103U)))
#undef DAT_1000ad0c
#define DAT_1000ad0c (*(float *)(((uintptr_t)pf_module_state + 0x107U)))
#define local_28 (*(double (*)[5])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009dc0
 */

longdouble recovered_10009dc0(uint3 *param_1,short param_2,ushort param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;

  lVar6 = (longdouble)0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_28[0] = 0.0;
      recovered_10001b10((undefined4 *)local_28,(undefined4 *)param_1,8);
      lVar4 = (longdouble)(uintptr_t)local_28[0];
      lVar5 = (longdouble)1;
      lVar6 = lVar4;
      if (lVar5 < lVar4) {
        lVar6 = lVar5;
      }
      lVar5 = -lVar5;
      bVar3 = lVar5 == lVar4;
      bVar2 = lVar5 < lVar4;
    }
    else {
      if (param_3 != 0x20) {
        return lVar6;
      }
      local_28[0] = (double)((ulonglong)local_28[0] & 0xffffffff00000000);
      recovered_10001b10((undefined4 *)local_28,(undefined4 *)param_1,4);
      lVar4 = (longdouble)PF_PART4(local_28[0], 0);
      lVar5 = (longdouble)1;
      lVar6 = lVar4;
      if (lVar5 < lVar4) {
        lVar6 = lVar5;
      }
      bVar3 = -(longdouble)1 == lVar4;
      bVar2 = -(longdouble)1 < lVar4;
      lVar5 = -lVar5;
    }
    if (!(bool)(bVar2 | bVar3)) {
      lVar6 = lVar5;
    }
  }
  else if (param_2 == 1) {
    switch((uintptr_t)((uint)param_3 << 0x1d | param_3 - 8 >> 3)) {
    case 0:
      lVar6 = (longdouble)(int)((byte)*param_1 - 0x80) * (longdouble)DAT_1000ad0c;
      break;
    case 1:
      lVar6 = (longdouble)(short)*param_1 * (longdouble)DAT_1000ad08;
      break;
    case 2:
      uVar1 = (uint)*(byte *)((int)param_1 + 2) * 0x10000 + -0x1000000 + (uint)(ushort)*param_1;
      if (-1 < (char)*(byte *)((int)param_1 + 2)) {
        uVar1 = (uint)*param_1;
      }
      lVar6 = (longdouble)(int)uVar1 * (longdouble)DAT_1000ad04;
      break;
    case 3:
      lVar6 = (longdouble)*(int *)param_1 * (longdouble)DAT_1000ad00;
    }
  }
  return lVar6;
}

#undef DAT_1000ad00
#undef DAT_1000ad04
#undef DAT_1000ad08
#undef DAT_1000ad0c
#undef local_28

#define local_20 (*(void * *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f10
 */

void recovered_10009f10(int *param_1,int param_2,uint param_3)

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
        recovered_10009f10((int *)&local_20,(int)(puVar3 + uVar4),uVar7);
        pvVar1 = (void *)*param_1;
        *param_1 = (int)local_20;
        iVar2 = param_1[1];
        param_1[1] = local_1c;
        iVar5 = param_1[2];
        param_1[2] = local_18;
        local_20 = pvVar1;
        local_1c = iVar2;
        local_18 = iVar5;
        recovered_10006450(pvVar1);
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
      puVar3 = recovered_100063f0(1);
      *puVar3 = 0;
      *param_1 = (int)puVar3;
      param_1[2] = 0;
    }
  }
  else {
    if ((uint)param_1[2] < uVar6) {
      puVar3 = recovered_100063f0(uVar6 + 1);
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
      recovered_10006450(pvVar1);
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

#undef DAT_1000af68
#define DAT_1000af68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x363U)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define local_60 (*(undefined2 * *)(pf_stack_frame + 176))
#define local_5c (*(void * *)(pf_stack_frame + 180))
#define local_58 (*(uint *)(pf_stack_frame + 184))
#define local_54 (*(undefined2 * *)(pf_stack_frame + 188))
#define local_50 (*(undefined4 *)(pf_stack_frame + 192))
#define local_4c (*(undefined4 *)(pf_stack_frame + 196))
#define local_38 (*(undefined * *)(pf_stack_frame + 216))
#define local_34 (*(undefined * *)(pf_stack_frame + 220))
#define local_30 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_2c (*(undefined4 *)(pf_stack_frame + 228))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_18 (*(int *)(pf_stack_frame + 248))
#define auStackY_100 (*(undefined1 (*)[256])(pf_stack_frame + 16))
#define auStack_14 (*(undefined1 (*)[20])(pf_stack_frame + 252))
#define local_6c (*(void * *)(pf_stack_frame + 164))
#define local_68 (*(void * *)(pf_stack_frame + 168))
#define local_64 (*(void * *)(pf_stack_frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a080
 */

uint recovered_1000a080(undefined4 *param_1,void **param_2)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  void *pvVar2;
  undefined2 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;

  local_30 = auStack_14 + 0x10;
  local_28 = auStackY_100 + 0x80;
  local_38 = PTR_recovered_10006380_1000b00c;
  local_34 = &DAT_1000af68;
  local_2c = 0x46f;
  recovered_100069f0(&local_50);
  if ((param_2 != (void **)0x0) && (param_1[3] != 0)) {
    uVar6 = (uint)*(ushort *)(param_1 + 4);
    if (uVar6 != 0) {
      local_58 = param_1[1];
      uVar5 = 0;
      if (local_58 % uVar6 != 0) goto LAB_1000a109;
      local_60 = (undefined2 *)0x1000a091;
      lVar1 = (ulonglong)(uint)param_1[3] * ZEXT48((void *)(uVar6 * 2));
      if (-1 < (short)*(ushort *)(param_1 + 4) && (int)((ulonglong)lVar1 >> 0x20) == 0) {
        local_18 = local_58 * 2;
        local_6c = (void *)0x0;
        local_68 = (void *)0x0;
        local_64 = (void *)0x0;
        local_4c = 1;
        local_5c = (void *)(uVar6 * 2);
        local_54 = (undefined2 *)lVar1;
        recovered_10009cd0(&local_6c,local_18 + 0x2c);
        local_4c = 2;
        recovered_1000a900((int *)&local_6c,(int)local_6c + (int)local_68,
                           (undefined1 *)(((uintptr_t)pf_module_state+0x267U)),
                           (undefined1 *)(((uintptr_t)pf_module_state+0x26bU)));
        local_4c = 3;
        recovered_1000a640((int *)&local_6c,local_58 * 2 + 0x24);
        local_4c = 4;
        recovered_1000a900((int *)&local_6c,(int)local_6c + (int)local_68,
                           (undefined1 *)(((uintptr_t)pf_module_state+0x26cU)),(undefined1 *)(((uintptr_t)pf_module_state+0x270U)));
        local_4c = 5;
        recovered_1000a900((int *)&local_6c,(int)local_6c + (int)local_68,
                           (undefined1 *)(((uintptr_t)pf_module_state+0x271U)),
                           (undefined1 *)(((uintptr_t)pf_module_state+0x275U)));
        local_4c = 6;
        recovered_1000a640((int *)&local_6c,0x10);
        local_4c = 7;
        recovered_1000a810((int *)&local_6c,1);
        local_4c = 8;
        recovered_1000a810((int *)&local_6c,*(undefined2 *)(param_1 + 4));
        local_4c = 9;
        recovered_1000a640((int *)&local_6c,param_1[3]);
        local_4c = 10;
        recovered_1000a640((int *)&local_6c,local_54);
        local_4c = 0xb;
        recovered_1000a810((int *)&local_6c,(short)local_5c);
        local_4c = 0xc;
        recovered_1000a810((int *)&local_6c,0x10);
        local_4c = 0xd;
        recovered_1000a900((int *)&local_6c,(int)local_6c + (int)local_68,
                           (undefined1 *)(((uintptr_t)pf_module_state+0x276U)),(undefined1 *)(((uintptr_t)pf_module_state+0x27aU)));
        local_4c = 0xe;
        recovered_1000a640((int *)&local_6c,local_18);
        if (param_1[1] != 0) {
          puVar3 = (undefined2 *)*param_1;
          puVar7 = puVar3 + param_1[1];
          local_54 = puVar7;
          do {
            local_58 = CONCAT22(PF_PART2(local_58, 2),*puVar3);
            if (local_68 == local_64) {
              pvVar2 = (void *)((int)local_68 * 2);
              if (local_68 == (void *)0x0) {
                pvVar2 = (void *)0x4;
              }
              if (local_68 < pvVar2) {
                local_4c = 0xf;
                local_60 = puVar3;
                local_5c = pvVar2;
                pvVar2 = recovered_100063f0((ulong)pvVar2);
                if (local_68 != (void *)0x0) {
                  pvVar4 = (void *)0x0;
                  do {
                    *(undefined1 *)((int)pvVar2 + (int)pvVar4) =
                         *(undefined1 *)((int)local_6c + (int)pvVar4);
                    pvVar4 = (void *)((int)pvVar4 + 1);
                  } while (local_68 != pvVar4);
                }
                recovered_10006450(local_6c);
                local_64 = local_5c;
                puVar3 = local_60;
                puVar7 = local_54;
                local_6c = pvVar2;
              }
            }
            *(char *)((int)local_6c + (int)local_68) = (char)local_58;
            local_68 = (void *)((int)local_68 + 1);
            if (local_68 == local_64) {
              pvVar2 = (void *)((int)local_68 * 2);
              if (local_68 == (void *)0x0) {
                pvVar2 = (void *)0x4;
              }
              if (local_68 < pvVar2) {
                local_4c = 0x10;
                local_60 = puVar3;
                local_5c = pvVar2;
                pvVar2 = recovered_100063f0((ulong)pvVar2);
                if (local_68 != (void *)0x0) {
                  pvVar4 = (void *)0x0;
                  do {
                    *(undefined1 *)((int)pvVar2 + (int)pvVar4) =
                         *(undefined1 *)((int)local_6c + (int)pvVar4);
                    pvVar4 = (void *)((int)pvVar4 + 1);
                  } while (local_68 != pvVar4);
                }
                recovered_10006450(local_6c);
                local_64 = local_5c;
                puVar3 = local_60;
                puVar7 = local_54;
                local_6c = pvVar2;
              }
            }
            uVar5 = local_58 & 0xffff;
            *(char *)((int)local_6c + (int)local_68) = (char)(local_58 >> 8);
            local_68 = (void *)((int)local_68 + 1);
            puVar3 = puVar3 + 1;
          } while (puVar3 != puVar7);
        }
        if (&local_6c != param_2) {
          param_2[1] = (void *)0x0;
          recovered_10006450(*param_2);
          *param_2 = local_6c;
          param_2[1] = local_68;
          param_2[2] = local_64;
          local_6c = (void *)0x0;
          local_64 = (void *)0x0;
        }
        local_68 = (void *)0x0;
        recovered_10006450(local_6c);
        uVar5 = CONCAT31((int3)(uVar5 >> 8),1);
        goto LAB_1000a109;
      }
    }
  }
  uVar5 = 0;
LAB_1000a109:
  recovered_10006a20(&local_50);
  return uVar5;
}

#undef DAT_1000af68
#undef PTR_recovered_10006380_1000b00c
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_18
#undef auStackY_100
#undef auStack_14
#undef local_6c
#undef local_68
#undef local_64

#undef DAT_1000af8c
#define DAT_1000af8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x387U)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a580
 */

void recovered_1000a580(int param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  piVar1 = *(int **)(param_1 + 0x10);
  local_30 = PTR_recovered_10006380_1000b00c;
  local_2c = &DAT_1000af8c;
  local_24 = 0x7b;
  recovered_100069f0(&local_48);
  if (piVar1 != (int *)0x0) {
    local_44 = 1;
    recovered_10005510(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  recovered_10006a20(&local_48);
  return;
}

#undef DAT_1000af8c
#undef PTR_recovered_10006380_1000b00c
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
 * Address: 0x1000a640
 */

void recovered_1000a640(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  uVar4 = param_1[1];
  if (uVar4 == param_1[2]) {
    uVar6 = 4;
    if (uVar4 != 0) {
      uVar6 = uVar4 * 2;
    }
    if (uVar4 < uVar6) {
      pvVar3 = recovered_100063f0(uVar6);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar5) = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      recovered_10006450(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar6;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)param_2;
  uVar4 = param_1[1] + 1;
  param_1[1] = uVar4;
  if (uVar4 == param_1[2]) {
    uVar6 = 4;
    if (uVar4 != 0) {
      uVar6 = uVar4 * 2;
    }
    if (uVar4 < uVar6) {
      pvVar3 = recovered_100063f0(uVar6);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar5) = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      recovered_10006450(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar6;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)((uint)param_2 >> 8);
  uVar4 = param_1[1] + 1;
  param_1[1] = uVar4;
  if (uVar4 == param_1[2]) {
    uVar6 = 4;
    if (uVar4 != 0) {
      uVar6 = uVar4 * 2;
    }
    if (uVar4 < uVar6) {
      pvVar3 = recovered_100063f0(uVar6);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar5) = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      recovered_10006450(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar6;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)((uint)param_2 >> 0x10);
  uVar4 = param_1[1] + 1;
  param_1[1] = uVar4;
  if (uVar4 == param_1[2]) {
    uVar6 = 4;
    if (uVar4 != 0) {
      uVar6 = uVar4 * 2;
    }
    if (uVar4 < uVar6) {
      pvVar3 = recovered_100063f0(uVar6);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar5) = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      recovered_10006450(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar6;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)((uint)param_2 >> 0x18);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a810
 */

void recovered_1000a810(int *param_1,undefined2 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  uVar4 = param_1[1];
  if (uVar4 == param_1[2]) {
    uVar6 = 4;
    if (uVar4 != 0) {
      uVar6 = uVar4 * 2;
    }
    if (uVar4 < uVar6) {
      pvVar3 = recovered_100063f0(uVar6);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar5) = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      recovered_10006450(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar6;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)param_2;
  uVar4 = param_1[1] + 1;
  param_1[1] = uVar4;
  if (uVar4 == param_1[2]) {
    uVar6 = 4;
    if (uVar4 != 0) {
      uVar6 = uVar4 * 2;
    }
    if (uVar4 < uVar6) {
      pvVar3 = recovered_100063f0(uVar6);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar5) = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      recovered_10006450(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar6;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)((ushort)param_2 >> 8);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a900
 */

int recovered_1000a900(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  undefined1 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  bool bVar8;

  iVar4 = *param_1;
  bVar8 = iVar4 == 0;
  if (bVar8) {
    uVar6 = param_1[1];
  }
  else {
    uVar6 = param_2 - iVar4;
  }
  if (param_3 != param_4) {
    uVar3 = param_1[1];
    puVar7 = (undefined1 *)param_1[2];
    if (puVar7 < param_4 + (uVar3 - (int)param_3)) {
      puVar1 = (undefined1 *)0x4;
      if (puVar7 != (undefined1 *)0x0) {
        puVar1 = puVar7;
      }
      do {
        puVar7 = puVar1;
        puVar1 = (undefined1 *)((int)(uintptr_t)puVar7 * 2);
      } while (puVar7 < param_4 + (uVar3 - (int)param_3));
      pvVar2 = recovered_100063f0((ulong)puVar7);
      pointer = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar2 + iVar5) = *(undefined1 *)((int)pointer + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      recovered_10006450(pointer);
      *param_1 = (int)pvVar2;
      param_1[2] = (int)puVar7;
      uVar3 = param_1[1];
    }
    for (; uVar6 < uVar3; uVar3 = uVar3 - 1) {
      param_4[((uVar3 - 1) + *param_1) - (int)param_3] = *(undefined1 *)((uVar3 - 1) + *param_1);
    }
    uVar3 = uVar6;
    puVar7 = param_3;
    do {
      *(undefined1 *)(*param_1 + uVar3) = *puVar7;
      puVar7 = puVar7 + 1;
      uVar3 = uVar3 + 1;
    } while (puVar7 != param_4);
    param_1[1] = (int)(param_4 + (param_1[1] - (int)param_3));
    iVar4 = *param_1;
    bVar8 = iVar4 == 0;
  }
  iVar5 = 0;
  if (!bVar8) {
    iVar5 = iVar4 + uVar6;
  }
  return iVar5;
}


#undef DAT_1000af9c
#define DAT_1000af9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x397U)))
#undef PTR_recovered_10006380_1000b00c
#define PTR_recovered_10006380_1000b00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x407U)))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa20
 */

void recovered_1000aa20(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  piVar1 = *(int **)((int)param_1 + 0x10);
  local_30 = PTR_recovered_10006380_1000b00c;
  local_2c = &DAT_1000af9c;
  local_24 = 0x83;
  recovered_100069f0(&local_48);
  if (piVar1 != (int *)0x0) {
    local_44 = 1;
    recovered_10005510(piVar1);
    *(undefined4 *)((int)param_1 + 0x10) = 0;
  }
  *(undefined1 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  recovered_10006450(param_1);
  recovered_10006a20(&local_48);
  return;
}

#undef DAT_1000af9c
#undef PTR_recovered_10006380_1000b00c
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
 * Address: 0x1000aae0
 */

void * recovered_1000aae0(int *param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  pvVar3 = (void *)*param_1;
  bVar11 = pvVar3 == (void *)0x0;
  if (bVar11) {
    uVar10 = param_1[1];
  }
  else {
    uVar10 = param_2 - (int)pvVar3 >> 1;
  }
  if (param_3 != param_4) {
    uVar6 = (uint)((int)param_4 + (-2 - (int)param_3)) >> 1;
    uVar4 = param_1[1];
    uVar2 = param_1[2];
    uVar9 = uVar4 + 1 + uVar6;
    if (uVar2 < uVar9) {
      uVar4 = 4;
      if (uVar2 != 0) {
        uVar4 = uVar2;
      }
      do {
        uVar2 = uVar4;
        uVar4 = uVar2 * 2;
      } while (uVar2 < uVar9);
      pvVar3 = recovered_100063f0(uVar2 * 2);
      pvVar5 = (void *)*param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar8 = 0;
        do {
          *(undefined2 *)((int)pvVar3 + iVar8 * 2) = *(undefined2 *)((int)pvVar5 + iVar8 * 2);
          iVar8 = iVar8 + 1;
        } while (iVar1 != iVar8);
      }
      recovered_10006450(pvVar5);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar2;
      uVar4 = param_1[1];
    }
    if (uVar10 < uVar4) {
      uVar9 = uVar4;
      do {
        *(undefined2 *)((int)pvVar3 + uVar9 * 2 + uVar6 * 2) =
             *(undefined2 *)((int)pvVar3 + uVar9 * 2 + -2);
        uVar9 = uVar9 - 1;
      } while (uVar10 < uVar9);
    }
    puVar7 = (undefined2 *)((int)pvVar3 + uVar10 * 2);
    do {
      *puVar7 = *param_3;
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
    } while (param_3 != param_4);
    param_1[1] = uVar4 + uVar6 + 1;
    bVar11 = pvVar3 == (void *)0x0;
  }
  pvVar5 = (void *)0x0;
  if (!bVar11) {
    pvVar5 = (void *)((int)pvVar3 + uVar10 * 2);
  }
  return pvVar5;
}

