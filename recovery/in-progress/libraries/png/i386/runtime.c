/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1001507c
#define DAT_1001507c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7baU)))
#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e30
 */

/* WARNING: Removing unreachable block (ram,0x10000e6c) */

void recovered_10000e30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1001507c = 0;
    recovered_10000e90();
    DAT_10015084 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001507c
#undef DAT_10015084

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1001507c
#define DAT_1001507c (*(char *)(((uintptr_t)pf_module_state + 0x7baU)))
#undef DAT_10015080
#define DAT_10015080 (*(int *)(((uintptr_t)pf_module_state + 0x7beU)))
#undef DAT_10015088
#define DAT_10015088 (*(int *)(((uintptr_t)pf_module_state + 0x7c6U)))
#undef _DAT_00280088
#define _DAT_00280088 (*(uint *)(0x280088U))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000e90(void)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;

  local_9c[0] = 0;
  if (DAT_1001507c != '\0') {
    return;
  }
  DAT_10015080 = 0;
  DAT_10015088 = 0;
  local_9c[1] = 0x10;
  if (_DAT_0028008c < 0x10) {
    local_9c[1] = _DAT_0028008c;
  }
  if (_DAT_0028008c != 0) {
    uVar7 = 0;
    uVar4 = 0;
    do {
      uVar5 = *(uint *)(&DAT_00280090 + uVar4 * 8);
      uVar1 = *(uint *)(&DAT_00280094 + uVar4 * 8);
      bVar10 = CARRY4(uVar1,uVar5);
      uVar6 = uVar1 + uVar5;
      if ((uVar6 < 0x300001) <= bVar10 && uVar1 != 0) {
        if (uVar5 < 0x300001) {
          uVar5 = 0x300000;
        }
        if (((uVar7 < 0x10) && (!bVar10)) && (uVar5 <= uVar6)) {
          uVar2 = 0;
          uVar1 = uVar7;
          if (uVar7 != 0) {
            do {
              uVar2 = uVar1;
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_10000efb;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_10000efb:
          local_9c[uVar2 * 2 + 2] = uVar5;
          local_9c[uVar2 * 2 + 3] = uVar6 - uVar5;
          uVar7 = uVar7 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != local_9c[1]);
    if (uVar7 != 0) {
      iVar9 = 1;
      if (uVar7 != 1) {
        iVar8 = uVar7 - 1;
        puVar3 = local_9c + 4;
        iVar9 = 1;
        do {
          uVar4 = local_9c[iVar9 * 2 + 1] + local_9c[iVar9 * 2];
          if (uVar4 < *puVar3) {
            uVar4 = *puVar3;
            local_9c[iVar9 * 2 + 3] = puVar3[1];
            local_9c[iVar9 * 2 + 2] = uVar4;
            iVar9 = iVar9 + 1;
          }
          else {
            uVar7 = *puVar3 + puVar3[1];
            if (uVar4 < uVar7) {
              local_9c[iVar9 * 2 + 1] = uVar7 - local_9c[iVar9 * 2];
            }
          }
          puVar3 = puVar3 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        if (iVar9 == 0) goto LAB_10001050;
      }
      puVar3 = local_9c + 3;
      do {
        recovered_100051f0((undefined *)puVar3[-1],*puVar3,(int *)local_9c);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_10015080 != 0) goto LAB_1000108b;
    }
  }
LAB_10001050:
  uVar4 = 0x4000000;
  if (0x300000 < _DAT_00280088) {
    uVar4 = _DAT_00280088 & 0xfffffff0;
  }
  uVar7 = 0x3d00000;
  if (0x300020 < uVar4) {
    uVar7 = uVar4 - 0x300000;
  }
  recovered_100051f0((undefined *)0x300000,uVar7,(int *)local_9c);
LAB_1000108b:
  if (DAT_10015088 == 0) {
    DAT_10015088 = DAT_10015080;
  }
  DAT_1001507c = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1001507c
#undef DAT_10015080
#undef DAT_10015088
#undef _DAT_00280088
#undef _DAT_0028008c
#undef local_9c

#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010b0
 */

/* WARNING: Removing unreachable block (ram,0x100010fc) */

void recovered_100010b0(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001120(param_1,param_2,param_3);
    DAT_10015084 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10015084

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_10015080
#define DAT_10015080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7beU)))
#undef DAT_10015088
#define DAT_10015088 (*(int * *)(((uintptr_t)pf_module_state + 0x7c6U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001120
 */

bool recovered_10001120(int in_ECX,int in_EDX,int param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;

  iVar10 = 0;
  bVar11 = false;
  if (param_3 != 0 && (in_EDX != 0 && in_ECX != 0)) {
    recovered_10000e90();
    local_18 = DAT_10015080;
    do {
      piVar5 = *(int **)(in_ECX + iVar10 * 4);
      uVar2 = *(uint *)(in_EDX + iVar10 * 4);
      piVar6 = (int *)((int)piVar5 + uVar2);
      if (CARRY4((uint)piVar5,uVar2)) {
        piVar6 = (int *)0xffffffff;
      }
      if (~(uint)piVar5 < uVar2) {
        return false;
      }
      if (piVar6 <= piVar5) {
        return false;
      }
      if (piVar5 < (int *)0x10000000 && (int *)0x8000000 < piVar6) {
        if (piVar5 < (int *)0x8000000) {
          uVar2 = 0x8000000 - (int)piVar5;
          if (~(uint)piVar5 < uVar2) {
            return false;
          }
          uVar7 = ((uint)((int)piVar5 + 0xf) & 0xffffff0) - (int)piVar5;
          uVar3 = uVar2 - uVar7;
          if (uVar2 < uVar7 || uVar3 == 0) goto LAB_10001220;
          bVar11 = 0x20 < (uVar3 & 0xfffffff0);
        }
        else {
LAB_10001220:
          bVar11 = false;
        }
        if ((piVar6 < &DAT_10000001 || 0xffffffde < ((uint)piVar6 & 0xfffffff0) + 0xefffffdf) &&
           (!bVar11)) {
          return false;
        }
      }
      else {
        if ((int *)0xfffffff0 < piVar5) {
          return false;
        }
        uVar3 = ((uint)((int)piVar5 + 0xf) & 0xfffffff0) - (int)piVar5;
        uVar7 = uVar2 - uVar3;
        if (uVar2 < uVar3 || uVar7 == 0) {
          return false;
        }
        if ((uVar7 & 0xfffffff0) < 0x21) {
          return false;
        }
      }
      piVar1 = DAT_10015080;
      if (iVar10 != 0) {
        iVar4 = 0;
        do {
          piVar9 = *(int **)(in_ECX + iVar4 * 4);
          uVar2 = *(uint *)(in_EDX + iVar4 * 4);
          piVar8 = (int *)(uVar2 + (int)piVar9);
          if (CARRY4(uVar2,(uint)piVar9)) {
            piVar8 = (int *)0xffffffff;
          }
          if ((piVar9 < piVar6) && (piVar5 < piVar8)) {
            return false;
          }
          iVar4 = iVar4 + 1;
        } while (iVar10 != iVar4);
      }
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        piVar9 = (int *)(*piVar1 + 0x10U + (int)piVar1);
        if (CARRY4(*piVar1 + 0x10U,(uint)piVar1)) {
          piVar9 = (int *)0xffffffff;
        }
        if ((piVar1 < piVar6) && (piVar5 < piVar9)) {
          return false;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != param_3);
    piVar5 = (int *)&DAT_10015080;
    iVar10 = 0;
    do {
      iVar4 = iVar10;
      iVar10 = *piVar5;
      piVar5 = (int *)(iVar10 + 4);
    } while (iVar10 != 0);
    iVar10 = 0;
    local_1c = iVar4;
    do {
      recovered_100051f0(*(undefined **)(in_ECX + iVar10 * 4),*(uint *)(in_EDX + iVar10 * 4),
                         &local_1c);
      iVar10 = iVar10 + 1;
    } while (param_3 != iVar10);
    if (DAT_10015088 == (int *)0x0) {
      DAT_10015088 = DAT_10015080;
    }
    bVar11 = local_1c != iVar4;
  }
  return bVar11;
}

#undef DAT_10000001
#undef DAT_10015080
#undef DAT_10015088
#undef local_1c
#undef local_18

#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
#define local_24 (*(undefined1 (*)[36])(pf_stack_frame + 28))
#define local_20 (*(undefined1 (*)[32])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001360
 */

/* WARNING: Removing unreachable block (ram,0x100013ac) */

void recovered_10001360(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001120((int)local_20,(int)local_24,1);
    DAT_10015084 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10015084
#undef local_24
#undef local_20

#undef DAT_10015080
#define DAT_10015080 (*(int * *)(((uintptr_t)pf_module_state + 0x7beU)))
#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e0
 */

/* WARNING: Removing unreachable block (ram,0x1000141c) */

int recovered_100013e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  iVar1 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000e90();
  iVar1 = 0;
  for (piVar2 = DAT_10015080; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  DAT_10015084 = 0;
  return iVar1;
}

#undef DAT_10015080
#undef DAT_10015084

#undef DAT_10015080
#define DAT_10015080 (*(int * *)(((uintptr_t)pf_module_state + 0x7beU)))
#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001460
 */

/* WARNING: Removing unreachable block (ram,0x1000149c) */

long recovered_10001460(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  int *piVar3;

  iVar1 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000e90();
  lVar2 = 0;
  for (piVar3 = DAT_10015080; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if ((char)piVar3[3] == '\x01') {
      lVar2 = lVar2 + *piVar3;
    }
  }
  DAT_10015084 = 0;
  return lVar2;
}

#undef DAT_10015080
#undef DAT_10015084

#undef DAT_10015080
#define DAT_10015080 (*(int * *)(((uintptr_t)pf_module_state + 0x7beU)))
#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e0
 */

/* WARNING: Removing unreachable block (ram,0x1000151c) */

int recovered_100014e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  iVar2 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000e90();
  iVar2 = 0;
  for (piVar1 = DAT_10015080; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  DAT_10015084 = 0;
  return iVar2;
}

#undef DAT_10015080
#undef DAT_10015084

#undef DAT_10015080
#define DAT_10015080 (*(int * *)(((uintptr_t)pf_module_state + 0x7beU)))
#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001550
 */

/* WARNING: Removing unreachable block (ram,0x1000158c) */

long recovered_10001550(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  iVar2 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000e90();
  iVar2 = 0;
  for (piVar1 = DAT_10015080; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  DAT_10015084 = 0;
  return iVar2;
}

#undef DAT_10015080
#undef DAT_10015084

#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015d0
 */

/* WARNING: Removing unreachable block (ram,0x1000161c) */

uint * recovered_100015d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;

  iVar1 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    puVar2 = recovered_10001640(param_1,(uint *)0x0,(uint *)0xffffffff);
    DAT_10015084 = 0;
    return puVar2;
  }
  do {
  } while( true );
}

#undef DAT_10015084

#undef DAT_10015080
#define DAT_10015080 (*(uint * *)(((uintptr_t)pf_module_state + 0x7beU)))
#undef DAT_10015088
#define DAT_10015088 (*(uint * *)(((uintptr_t)pf_module_state + 0x7c6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001640
 */

uint * recovered_10001640(int in_ECX,uint *in_EDX,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *in_ECX_00;
  uint *in_EDX_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  if (0xf < in_ECX + 0xfU) {
    recovered_10000e90();
    puVar3 = DAT_10015080;
    puVar4 = DAT_10015088;
    if (DAT_10015088 == (uint *)0x0) {
      puVar4 = DAT_10015080;
    }
    if (puVar4 != (uint *)0x0) {
      uVar7 = in_ECX + 0xfU & 0xfffffff0;
      puVar5 = (uint *)((int)in_EDX + 0xfU & 0xfffffff0);
      in_ECX_00 = puVar4;
      do {
        if (((char)in_ECX_00[3] == '\x01') && (uVar8 = *in_ECX_00, uVar7 <= uVar8)) {
          puVar1 = in_ECX_00 + 4;
          uVar6 = 0;
          in_EDX_00 = puVar1;
          if (puVar1 < in_EDX) {
            if ((in_EDX < (uint *)0xfffffff1) && (puVar1 < (uint *)0xffffffe0)) {
              in_EDX_00 = puVar5;
              if (puVar5 <= in_ECX_00 + 0xc) {
                in_EDX_00 = in_ECX_00 + 0xc;
              }
              uVar6 = (int)in_EDX_00 - (int)puVar1;
              if (uVar6 < uVar8) goto LAB_10001722;
            }
          }
          else {
LAB_10001722:
            if ((uVar7 - 1 <= (uint)((int)param_3 - (int)in_EDX_00) && in_EDX_00 <= param_3) &&
               (uVar7 <= uVar8 - uVar6 && uVar6 <= uVar8)) {
              if (uVar7 - 1 < uVar8) {
                bVar2 = 0xffffffef < uVar8;
                if ((uint)(uVar8 - uVar7 < 0x20) <= -(uint)(uVar8 < uVar7)) {
                  bVar2 = 0xffffffdf < uVar7;
                }
                if (!bVar2) {
                  if (uVar6 == 0) {
LAB_10001804:
                    if ((bool)(~(uVar8 < uVar7) & 0x1f < uVar8 - uVar7)) {
                      DAT_10015088 = (uint *)((int)in_ECX_00 + uVar7 + 0x10);
                      *(uint *)((int)in_ECX_00 + uVar7 + 0x10) = (uVar8 - uVar7) - 0x10;
                      uVar8 = in_ECX_00[1];
                      *(uint *)((int)in_ECX_00 + uVar7 + 0x14) = uVar8;
                      *(uint **)((int)in_ECX_00 + uVar7 + 0x18) = in_ECX_00;
                      *(undefined1 *)((int)in_ECX_00 + uVar7 + 0x1c) = 1;
                      if (uVar8 != 0) {
                        *(uint **)(uVar8 + 8) = DAT_10015088;
                      }
                      *in_ECX_00 = uVar7;
                      in_ECX_00[1] = (uint)DAT_10015088;
                    }
                    else {
                      DAT_10015088 = (uint *)in_ECX_00[1];
                    }
                    *(undefined1 *)(in_ECX_00 + 3) = 0;
                    if (DAT_10015088 == (uint *)0x0) {
                      DAT_10015088 = DAT_10015080;
                    }
                    return in_ECX_00 + 4;
                  }
                  if ((uVar6 - 1) + uVar7 < uVar8) {
                    uVar6 = uVar6 + uVar7;
                    bVar2 = 0xffffffdf < uVar6;
                    if (-(uint)(uVar8 < uVar6) < (uint)(uVar8 - uVar6 < 0x20)) {
                      bVar2 = 0xffffffef < uVar8;
                    }
                    if (!bVar2) {
                      in_ECX_00 = recovered_10005390(in_ECX_00,in_EDX_00);
                      if (in_ECX_00 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *in_ECX_00;
                      goto LAB_10001804;
                    }
                  }
                }
              }
              *(undefined1 *)(in_ECX_00 + 3) = 0;
            }
          }
        }
        puVar1 = in_ECX_00 + 1;
        in_ECX_00 = puVar3;
        if ((uint *)*puVar1 != (uint *)0x0) {
          in_ECX_00 = (uint *)*puVar1;
        }
        if (in_ECX_00 == (uint *)0x0) {
          return (uint *)0x0;
        }
        if (in_ECX_00 == puVar4) {
          return (uint *)0x0;
        }
      } while( true );
    }
  }
  return (uint *)0x0;
}

#undef DAT_10015080
#undef DAT_10015088

#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001870
 */

/* WARNING: Removing unreachable block (ram,0x100018bc) */

void recovered_10001870(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001640(param_1,(uint *)0x0,param_2);
    DAT_10015084 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10015084

#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e0
 */

/* WARNING: Removing unreachable block (ram,0x1000192c) */

uint * recovered_100018e0(int param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;

  iVar1 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001640(param_1,param_2,param_3);
  }
  DAT_10015084 = 0;
  return puVar2;
}

#undef DAT_10015084

#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001950
 */

/* WARNING: Removing unreachable block (ram,0x1000199c) */

void recovered_10001950(int in_stack_00000004)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_100019c0(in_stack_00000004);
    DAT_10015084 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10015084

#undef DAT_10015088
#define DAT_10015088 (*(uint * *)(((uintptr_t)pf_module_state + 0x7c6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c0
 */

void recovered_100019c0(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;

  if (in_ECX == 0) {
    return;
  }
  recovered_10000e90();
  puVar2 = (uint *)(in_ECX + -0x10);
  *(undefined1 *)(in_ECX + -4) = 1;
  puVar3 = *(uint **)(in_ECX + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)(in_ECX + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_10015088 == puVar3) {
        DAT_10015088 = puVar2;
      }
      *(uint *)(in_ECX + -0x10) = uVar4;
      puVar3 = (uint *)puVar3[1];
      *(uint **)(in_ECX + -0xc) = puVar3;
      if ((puVar3 == (uint *)0x0) || (puVar3[2] = (uint)puVar2, (char)puVar3[3] == '\0')) break;
    }
  }
  puVar3 = *(uint **)(in_ECX + -8);
  if (puVar3 != (uint *)0x0) {
    if ((char)puVar3[3] != '\x01') {
      DAT_10015088 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_10015088 = puVar2;
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
        if (DAT_10015088 == puVar2) {
          DAT_10015088 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_10015088 = puVar2;
  return;
}

#undef DAT_10015088

#undef DAT_10015084
#define DAT_10015084 (*(int *)(((uintptr_t)pf_module_state + 0x7c2U)))
#undef DAT_10015088
#define DAT_10015088 (*(uint * *)(((uintptr_t)pf_module_state + 0x7c6U)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae0
 */

/* WARNING: Removing unreachable block (ram,0x10001b2c) */

uint * recovered_10001ae0(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint in_ECX;
  uint *puVar9;
  bool bVar10;

  iVar1 = DAT_10015084;
  { __typeof__(DAT_10015084) pf_atomic_old = __atomic_exchange_n(&(DAT_10015084),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (uint *)0x0) {
    puVar5 = recovered_10001640(param_2,(uint *)0x0,(uint *)0xffffffff);
    DAT_10015084 = 0;
    return puVar5;
  }
  if (param_2 == 0) {
    recovered_100019c0((int)param_1);
    DAT_10015084 = 0;
    return (uint *)0x0;
  }
  if (0xfffffff0 < param_2) {
    DAT_10015084 = 0;
    return (uint *)0x0;
  }
  recovered_10000e90();
  in_ECX = param_2 + 0xf & 0xfffffff0;
  puVar5 = param_1 + -4;
  uVar7 = param_1[-4];
  if (in_ECX <= uVar7) {
    if (uVar7 <= in_ECX - 1) {
      DAT_10015084 = 0;
      return (uint *)0x0;
    }
    uVar2 = uVar7 - in_ECX;
    bVar10 = 0xffffffdf < in_ECX;
    if (-(uint)(uVar7 < in_ECX) < (uint)(uVar2 < 0x20)) {
      bVar10 = 0xffffffef < uVar7;
    }
    if (!bVar10) {
      if (uVar2 < 0x20) {
        DAT_10015084 = 0;
        return param_1;
      }
      DAT_10015088 = (uint *)((int)param_1 + in_ECX);
      *(uint *)((int)param_1 + in_ECX) = uVar2 - 0x10;
      uVar7 = param_1[-3];
      *(uint *)((int)param_1 + in_ECX + 4) = uVar7;
      *(uint **)((int)param_1 + in_ECX + 8) = puVar5;
      *(undefined1 *)((int)param_1 + in_ECX + 0xc) = 1;
      if (uVar7 != 0) {
        *(uint **)(uVar7 + 8) = DAT_10015088;
      }
      param_1[-4] = in_ECX;
      param_1[-3] = (uint)DAT_10015088;
      DAT_10015084 = 0;
      return param_1;
    }
    DAT_10015084 = 0;
    return (uint *)0x0;
  }
  puVar3 = puVar5;
  uVar2 = uVar7;
  uVar6 = uVar7;
  do {
    puVar9 = (uint *)puVar3[1];
    if ((((puVar9 == (uint *)0x0) || ((char)puVar9[3] != '\x01')) || (0xffffffef < uVar2)) ||
       (((uint *)((int)puVar3 + uVar6 + 0x10) != puVar9 || (uVar6 = *puVar9, -uVar2 - 0x11 < uVar6))
       )) break;
    uVar2 = uVar2 + 0x10 + uVar6;
    puVar3 = puVar9;
  } while (uVar2 < in_ECX);
  if (in_ECX - 1 < uVar2) {
    bVar10 = 0xffffffdf < in_ECX;
    if (-(uint)(uVar2 < in_ECX) < (uint)(uVar2 - in_ECX < 0x20)) {
      bVar10 = 0xffffffef < uVar2;
    }
    if (!bVar10) {
      local_20 = DAT_10015088;
      puVar3 = (uint *)param_1[-3];
      do {
        if (((puVar3 == (uint *)0x0) || ((char)puVar3[3] != '\x01')) ||
           ((0xffffffef < uVar7 ||
            (((uint *)(uVar7 + (int)param_1) != puVar3 || (-uVar7 - 0x11 < *puVar3)))))) break;
        if (local_20 == puVar3) {
          local_20 = puVar5;
          DAT_10015088 = puVar5;
        }
        uVar7 = uVar7 + 0x10 + *puVar3;
        param_1[-4] = uVar7;
        puVar3 = (uint *)puVar3[1];
        param_1[-3] = (uint)puVar3;
        if (puVar3 != (uint *)0x0) {
          puVar3[2] = (uint)puVar5;
        }
      } while (uVar7 < in_ECX);
      if (uVar7 < in_ECX) {
        DAT_10015084 = 0;
        return (uint *)0x0;
      }
      uVar4 = recovered_100053f0(puVar5,in_ECX);
      if ((char)uVar4 != '\0') {
        DAT_10015088 = (uint *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_10015084 = 0;
      return param_1;
    }
  }
  puVar3 = recovered_10001640(in_ECX,(uint *)0x0,(uint *)0xffffffff);
  if (puVar3 == (uint *)0x0) {
    DAT_10015084 = 0;
    return (uint *)0x0;
  }
  if (*puVar5 < in_ECX) {
    in_ECX = *puVar5;
  }
  puVar5 = param_1;
  puVar9 = puVar3;
  if (in_ECX < 8) {
LAB_10001d55:
    if (in_ECX == 0) goto LAB_10001d6c;
  }
  else if ((((uint)puVar3 ^ (uint)param_1) & 3) == 0) {
    if (((uint)puVar3 & 3) != 0) {
      puVar8 = puVar3;
      do {
        puVar8 = (uint *)((int)puVar8 + 1);
        uVar7 = *puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        *(char *)puVar9 = (char)uVar7;
        puVar9 = (uint *)((int)puVar9 + 1);
        bVar10 = in_ECX == 1;
        in_ECX = in_ECX - 1;
        if (bVar10) break;
      } while (((uint)puVar8 & 3) != 0);
    }
    for (; 0xf < in_ECX; in_ECX = in_ECX - 0x10) {
      *puVar9 = *puVar5;
      puVar9[1] = puVar5[1];
      puVar9[2] = puVar5[2];
      puVar9[3] = puVar5[3];
      puVar5 = puVar5 + 4;
      puVar9 = puVar9 + 4;
    }
    while( true ) {
      if (in_ECX < 4) break;
      uVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar9 = uVar7;
      puVar9 = puVar9 + 1;
      in_ECX = in_ECX - 4;
    }
    goto LAB_10001d55;
  }
  uVar7 = 0;
  do {
    *(undefined1 *)((int)puVar9 + uVar7) = *(undefined1 *)((int)puVar5 + uVar7);
    uVar7 = uVar7 + 1;
  } while (in_ECX != uVar7);
LAB_10001d6c:
  recovered_100019c0((int)param_1);
  DAT_10015084 = 0;
  return puVar3;
}

#undef DAT_10015084
#undef DAT_10015088
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e80
 */

longlong recovered_10001e80(uint param_1,int param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_10001ebb;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10001ebb;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10001ebb:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ed0
 */

ulonglong recovered_10001ed0(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001f20
 */

undefined8 recovered_10001f20(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001f60
 */

undefined8 recovered_10001f60(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002050
 */

undefined8 recovered_10002050(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100020c0
 */

undefined8 recovered_100020c0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002210
 */

undefined8 recovered_10002210(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100022e0
 */

void recovered_100022e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002300
 */

int recovered_10002300(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = -param_1;
  if ((int)-param_1 < 0) {
    uVar1 = param_1;
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
#define _DAT_0028084c (*(code * *)(0x28084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002320
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10002320(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
    pvVar1 = (void *)(*_DAT_0028084c)(size);
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
#define _DAT_00280850 (*(code * *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002370(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
    (*_DAT_00280850)(pointer);
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
#define _DAT_00280854 (*(code * *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_100023c0(void *pointer,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x57 < _DAT_00280808 && (_DAT_00280854 != (code *)0x0)))) {
    pvVar1 = (void *)(*_DAT_00280854)(pointer,size);
    return pvVar1;
  }
  return (void *)0x0;
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
 * Address: 0x10002410
 */

void * recovered_10002410(void *dst,void *src,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  bool bVar6;

  pvVar3 = dst;
  if (7 < bytes) {
    if ((((uint)src ^ (uint)dst) & 3) != 0) goto LAB_1000243a;
    if (((uint)dst & 3) != 0) {
      pvVar5 = dst;
      do {
        pvVar5 = (void *)((int)pvVar5 + 1);
        uVar1 = *(undefined1 *)src;
        src = (void *)((int)src + 1);
        *(undefined1 *)dst = uVar1;
        dst = (void *)((int)dst + 1);
        bVar6 = bytes == 1;
        bytes = bytes - 1;
        if (bVar6) break;
      } while (((uint)pvVar5 & 3) != 0);
    }
    for (; 0xf < bytes; bytes = bytes - 0x10) {
      *(undefined4 *)dst = *(undefined4 *)src;
      *(undefined4 *)((int)dst + 4) = *(undefined4 *)((int)src + 4);
      *(undefined4 *)((int)dst + 8) = *(undefined4 *)((int)src + 8);
      *(undefined4 *)((int)dst + 0xc) = *(undefined4 *)((int)src + 0xc);
      dst = (void *)((int)dst + 0x10);
      src = (void *)((int)src + 0x10);
    }
    for (; 3 < bytes; bytes = bytes - 4) {
      uVar2 = *(undefined4 *)src;
      src = (void *)((int)src + 4);
      *(undefined4 *)dst = uVar2;
      dst = (void *)((int)dst + 4);
    }
  }
  if (bytes == 0) {
    return pvVar3;
  }
LAB_1000243a:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)dst + uVar4) = *(undefined1 *)((int)src + uVar4);
    uVar4 = uVar4 + 1;
  } while (bytes != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d0
 */

void * recovered_100024d0(void *dst,void *src,uint bytes)

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

  if (bytes != 0 && dst != src) {
    if ((dst < src) || (pvVar5 = (void *)((int)src + bytes), pvVar5 <= dst)) {
      puVar7 = dst;
      if ((7 < bytes) && (pvVar5 = dst, (((uint)src ^ (uint)dst) & 3) == 0)) {
        do {
          if (((uint)pvVar5 & 3) == 0) break;
          pvVar5 = (void *)((int)pvVar5 + 1);
          uVar2 = *(undefined1 *)src;
          src = (void *)((int)src + 1);
          *(undefined1 *)puVar7 = uVar2;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          bVar8 = bytes != 1;
          bytes = bytes - 1;
        } while (bVar8);
        for (; 0xf < bytes; bytes = bytes - 0x10) {
          *puVar7 = *(undefined4 *)src;
          puVar7[1] = *(undefined4 *)((int)src + 4);
          puVar7[2] = *(undefined4 *)((int)src + 8);
          puVar7[3] = *(undefined4 *)((int)src + 0xc);
          puVar7 = puVar7 + 4;
          src = (void *)((int)src + 0x10);
        }
        for (; 3 < bytes; bytes = bytes - 4) {
          uVar3 = *(undefined4 *)src;
          src = (void *)((int)src + 4);
          *puVar7 = uVar3;
          puVar7 = puVar7 + 1;
        }
        if (bytes == 0) {
          return dst;
        }
      }
      uVar4 = 0;
      do {
        *(undefined1 *)((int)puVar7 + uVar4) = *(undefined1 *)((int)src + uVar4);
        uVar4 = uVar4 + 1;
      } while (bytes != uVar4);
    }
    else {
      uVar4 = (int)dst + bytes;
      if ((7 < bytes) && ((((uint)pvVar5 ^ uVar4) & 3) == 0)) {
        if ((uVar4 & 3) != 0) {
          do {
            *(undefined1 *)((int)dst + (bytes - 1)) = *(undefined1 *)((int)src + (bytes - 1));
            uVar1 = bytes - 1;
            if (bytes == 1) break;
            iVar6 = bytes - 1;
            bytes = uVar1;
          } while (((int)dst + iVar6 & 3U) != 0);
          pvVar5 = (void *)((int)src + uVar1);
          uVar4 = (int)dst + uVar1;
          bytes = uVar1;
        }
        for (; 0xf < bytes; bytes = bytes - 0x10) {
          *(undefined4 *)(uVar4 - 4) = *(undefined4 *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 8) = *(undefined4 *)((int)pvVar5 - 8);
          *(undefined4 *)(uVar4 - 0xc) = *(undefined4 *)((int)pvVar5 - 0xc);
          *(undefined4 *)(uVar4 - 0x10) = *(undefined4 *)((int)pvVar5 - 0x10);
          uVar4 = uVar4 - 0x10;
          pvVar5 = (void *)((int)pvVar5 - 0x10);
        }
        for (; 3 < bytes; bytes = bytes - 4) {
          puVar7 = (undefined4 *)((int)pvVar5 - 4);
          pvVar5 = (void *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 4) = *puVar7;
          uVar4 = uVar4 - 4;
        }
        if (bytes == 0) {
          return dst;
        }
      }
      iVar6 = 0;
      do {
        *(undefined1 *)((uVar4 - 1) + iVar6) = *(undefined1 *)((int)pvVar5 + iVar6 + -1);
        iVar6 = iVar6 + -1;
      } while (-iVar6 != bytes);
    }
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a0
 */

/* WARNING: Variable defined which should be unmapped: dst */

void * recovered_100026a0(void *dst,int byte,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;

  piVar1 = dst;
  if (7 < bytes) {
    if (((uint)dst & 3) != 0) {
      pvVar2 = dst;
      do {
        pvVar2 = (void *)((int)pvVar2 + 1);
        *(char *)piVar1 = (char)byte;
        piVar1 = (int *)((int)piVar1 + 1);
        bVar4 = bytes == 1;
        bytes = bytes - 1;
        if (bVar4) break;
      } while (((uint)pvVar2 & 3) != 0);
    }
    iVar3 = (byte & 0xffU) * 0x1010101;
    for (; 0xf < bytes; bytes = bytes - 0x10) {
      *piVar1 = iVar3;
      piVar1[1] = iVar3;
      piVar1[2] = iVar3;
      piVar1[3] = iVar3;
      piVar1 = piVar1 + 4;
    }
    for (; 3 < bytes; bytes = bytes - 4) {
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
    }
  }
  for (; bytes != 0; bytes = bytes - 1) {
    *(char *)piVar1 = (char)byte;
    piVar1 = (int *)((int)piVar1 + 1);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002750
 */

void recovered_10002750(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < (uint)param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = puVar1 + 1;
      *param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < (uint)param_2; param_2 = param_2 - 0x10) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
      *(undefined4 *)((int)param_1 + 8) = 0;
      *(undefined4 *)((int)param_1 + 0xc) = 0;
      param_1 = (undefined1 *)((int)param_1 + 0x10);
    }
    for (; 3 < (uint)param_2; param_2 = param_2 - 4) {
      *(undefined4 *)param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 4);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027f0
 */

void recovered_100027f0(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < (uint)param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = puVar1 + 1;
      *param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < (uint)param_2; param_2 = param_2 - 0x10) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
      *(undefined4 *)((int)param_1 + 8) = 0;
      *(undefined4 *)((int)param_1 + 0xc) = 0;
      param_1 = (undefined1 *)((int)param_1 + 0x10);
    }
    for (; 3 < (uint)param_2; param_2 = param_2 - 4) {
      *(undefined4 *)param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 4);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002890
 */

char * recovered_10002890(char *param_1,char param_2,int param_3)

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
 * Address: 0x100028d0
 */

int recovered_100028d0(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (7 < (uint)param_3) {
    if (((param_2 ^ param_1) & 3U) != 0) goto LAB_1000296e;
    if ((param_1 & 3U) != 0) {
      uVar6 = param_3;
      uVar7 = param_1;
      do {
        uVar7 = uVar7 + 1;
        bVar1 = (byte)*(uint *)param_1;
        bVar2 = (byte)*(uint *)param_2;
        if (bVar1 != bVar2) goto LAB_10002985;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        param_3 = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = param_3, (uVar7 & 3) != 0));
    }
    for (; 0xf < (uint)param_3; param_3 = param_3 - 0x10) {
      uVar7 = *(uint *)param_1;
      uVar6 = *(uint *)param_2;
      if (uVar7 != uVar6) {
LAB_100029b6:
        if ((char)uVar7 == (char)uVar6) {
          uVar5 = uVar7 >> 8;
          uVar4 = uVar6 >> 8;
          if ((char)(uVar7 >> 8) == (char)(uVar6 >> 8)) {
            uVar5 = uVar7 >> 0x10;
            uVar4 = uVar6 >> 0x10;
            if ((char)(uVar7 >> 0x10) == (char)(uVar6 >> 0x10)) {
              uVar5 = uVar7 >> 0x18;
              uVar4 = uVar6 >> 0x18;
              if (uVar5 == uVar4) {
                return 0;
              }
            }
          }
        }
        else {
          uVar5 = uVar7;
          uVar4 = uVar6;
        }
        return (uVar5 & 0xff) - (uVar4 & 0xff);
      }
      uVar7 = *(uint *)(param_1 + 4);
      uVar6 = *(uint *)(param_2 + 4);
      if (uVar7 != uVar6) goto LAB_100029b6;
      uVar7 = *(uint *)(param_1 + 8);
      uVar6 = *(uint *)(param_2 + 8);
      if (uVar7 != uVar6) goto LAB_100029b6;
      uVar7 = *(uint *)(param_1 + 0xc);
      uVar6 = *(uint *)(param_2 + 0xc);
      if (uVar7 != uVar6) goto LAB_100029b6;
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 0x10;
    }
    for (; 3 < (uint)param_3; param_3 = param_3 - 4) {
      if (*(uint *)param_1 != *(uint *)param_2) {
        iVar3 = recovered_10002a00((char *)param_1,(char *)param_2);
        return iVar3;
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_1000296e:
  uVar7 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + uVar7);
    bVar2 = *(byte *)(param_2 + uVar7);
    if (bVar1 != bVar2) break;
    uVar7 = uVar7 + 1;
    if (param_3 == uVar7) {
      return 0;
    }
  }
LAB_10002985:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a00
 */

int recovered_10002a00(char *in_ECX,char *in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10002a50
 */

uchar recovered_10002a50(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

uchar recovered_10002a70(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a90
 */

uchar recovered_10002a90(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ab0
 */

uchar recovered_10002ab0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ae0
 */

uchar recovered_10002ae0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b00
 */

uchar recovered_10002b00(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b20
 */

int recovered_10002b20(int param_1)

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
 * Address: 0x10002b40
 */

int recovered_10002b40(int param_1)

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
 * Address: 0x10002b60
 */

uint recovered_10002b60(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

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
 * Address: 0x10002ba0
 */

int recovered_10002ba0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002bd6;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002bd6:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be0
 */

int recovered_10002be0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002c16;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002c16:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c20
 */

void recovered_10002c20(int param_1,int param_2)

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
 * Address: 0x10002c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10002c50(int param_1)

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

  if (param_1 == 0) {
    return 0;
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (*(char *)(param_1 + uVar5) != '\0');
  if (_DAT_00280800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_00280804 == 0) {
    return 0;
  }
  if (_DAT_00280808 < 0xc) {
    return 0;
  }
  if (_DAT_00280808 < 0x50) {
    return 0;
  }
  if (_DAT_0028084c == (code *)0x0) {
    return 0;
  }
  puVar4 = (undefined4 *)(*_DAT_0028084c)(uVar7);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  puVar6 = puVar4;
  if (7 < uVar7) {
    if ((((uint)puVar4 ^ param_1) & 3) != 0) goto LAB_10002d68;
    if (((uint)puVar4 & 3) != 0) {
      uVar8 = 0;
      do {
        *(undefined1 *)((int)puVar4 + uVar8) = *(undefined1 *)(param_1 + uVar8);
        uVar1 = uVar8 + 1;
        if (uVar5 == uVar8) break;
        iVar3 = uVar8 + 1;
        uVar8 = uVar1;
      } while (((int)puVar4 + iVar3 & 3U) != 0);
      uVar7 = uVar7 - uVar1;
      param_1 = param_1 + uVar1;
      puVar6 = (undefined4 *)((int)puVar4 + uVar1);
    }
    for (; 0xf < uVar7; uVar7 = uVar7 - 0x10) {
      *puVar6 = *(undefined4 *)param_1;
      puVar6[1] = *(undefined4 *)(param_1 + 4);
      puVar6[2] = *(undefined4 *)(param_1 + 8);
      puVar6[3] = *(undefined4 *)(param_1 + 0xc);
      param_1 = param_1 + 0x10;
      puVar6 = puVar6 + 4;
    }
    for (; 3 < uVar7; uVar7 = uVar7 - 4) {
      uVar2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
  }
  if (uVar7 == 0) {
    return (int)puVar4;
  }
LAB_10002d68:
  uVar5 = 0;
  do {
    *(undefined1 *)((int)puVar6 + uVar5) = *(undefined1 *)(param_1 + uVar5);
    uVar5 = uVar5 + 1;
  } while (uVar7 != uVar5);
  return (int)puVar4;
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
 * Address: 0x10002d90
 */

char * recovered_10002d90(char *param_1,char param_2)

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
 * Address: 0x10002dd0
 */

int recovered_10002dd0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_10002e1b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_10002e1b;
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
 * Address: 0x10002e30
 */

int recovered_10002e30(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 != '\0') {
        pcVar5 = param_2;
        do {
          pcVar5 = pcVar5 + 1;
          if ((char)uVar3 == cVar4) {
            return iVar2;
          }
          cVar4 = *pcVar5;
        } while (cVar4 != '\0');
      }
      iVar1 = iVar2 + 1;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),param_1[iVar1]);
      iVar2 = iVar2 + 1;
    } while (param_1[iVar1] != '\0');
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e90
 */

char * recovered_10002e90(char *param_1,char *param_2)

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
 * Address: 0x10002ee0
 */

char * recovered_10002ee0(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10002f23;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10002f23:
  return pcVar3;
}


#undef DAT_10014ca0
#define DAT_10014ca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f30
 */

undefined * recovered_10002f30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10014ca0;
}

#undef DAT_10014ca0

#undef PTR_DAT_1001500c
#define PTR_DAT_1001500c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x74aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f50
 */

undefined ** recovered_10002f50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1001500c;
}

#undef PTR_DAT_1001500c

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
 * Address: 0x10002f70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002f70(undefined4 *param_1)

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
  return local_2c;
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

#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003010
 */

longdouble recovered_10003010(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_100148d0;
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

#undef DAT_100148d0

#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003060
 */

ulong recovered_10003060(double param_1,int *param_2)

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
        param_1 = param_1 * (double)DAT_100148d0;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_100148d0 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_100148d0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return (ulong)param_2;
}

#undef DAT_100148d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003120
 */

double recovered_10003120(double left,double right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((right != 0.0) || (NAN(right))) {
    dVar1 = left - right * (double)(int)ROUND(left / right);
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003180
 */

double recovered_10003180(double left,double right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  uint uVar5;

  uVar1 = (uint)ROUND(right);
  dVar3 = 0.0;
  if ((((double)(int)uVar1 == right) && (!NAN((double)(int)uVar1) && !NAN(right))) &&
     (dVar3 = 1.0, uVar1 != 0)) {
    uVar5 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar5 = uVar1;
    }
    dVar4 = 1.0;
    do {
      dVar3 = dVar4 * left;
      if ((uVar5 & 1) == 0) {
        dVar3 = dVar4;
      }
      left = left * left;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
      dVar4 = dVar3;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      dVar3 = 1.0 / dVar3;
    }
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003210
 */

double recovered_10003210(double value)

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
 * Address: 0x10003260
 */

double recovered_10003260(double value)

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


#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c0
 */

double recovered_100032c0(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = 0.0;
  if (0.0 < value) {
    dVar2 = 1.0;
    if (1.0 <= value) {
      dVar2 = value;
    }
    dVar1 = (double)DAT_100148d0;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar2 = (value / dVar2 + dVar2) * dVar1;
    dVar1 = (value / dVar2 + dVar2) * dVar1;
  }
  return dVar1;
}

#undef DAT_100148d0

#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_100148d4
#define DAT_100148d4 (*(float *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_100148d8
#define DAT_100148d8 (*(float *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_100148dc
#define DAT_100148dc (*(float *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_100148e0
#define DAT_100148e0 (*(float *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef DAT_100148e4
#define DAT_100148e4 (*(float *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_100148e8
#define DAT_100148e8 (*(float *)(((uintptr_t)pf_module_state + 0x26U)))
#undef DAT_100148ec
#define DAT_100148ec (*(float *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_100148f0
#define DAT_100148f0 (*(float *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef DAT_100148f4
#define DAT_100148f4 (*(float *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_100148f8
#define DAT_100148f8 (*(float *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_100148fc
#define DAT_100148fc (*(float *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_10014900
#define DAT_10014900 (*(float *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef DAT_10014928
#define DAT_10014928 (*(double *)(((uintptr_t)pf_module_state + 0x66U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033c0
 */

double recovered_100033c0(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;

  if (value <= 0.0) {
    dVar1 = (double)DAT_100148d4;
  }
  else {
    iVar10 = 0;
    if ((double)DAT_100148d8 < value) {
      iVar10 = 0;
      do {
        value = value * (double)DAT_100148d0;
        iVar10 = iVar10 + 1;
      } while ((double)DAT_100148d8 < value);
    }
    if (value < (double)DAT_100148dc) {
      do {
        value = value + value;
        iVar10 = iVar10 + -1;
      } while (value < (double)DAT_100148dc);
    }
    dVar1 = (value + -1.0) / (value + 1.0);
    dVar2 = dVar1 * dVar1;
    dVar3 = dVar1 * dVar2 * dVar2;
    dVar4 = dVar3 * dVar2;
    dVar5 = dVar4 * dVar2;
    dVar6 = dVar5 * dVar2;
    dVar7 = dVar6 * dVar2;
    dVar8 = dVar7 * dVar2;
    dVar9 = dVar8 * dVar2;
    dVar1 = (dVar9 * dVar2) / (double)DAT_10014900 +
            dVar9 / (double)DAT_100148fc +
            dVar8 / (double)DAT_100148f8 +
            dVar7 / (double)DAT_100148f4 +
            dVar6 / (double)DAT_100148f0 +
            dVar5 / (double)DAT_100148ec +
            dVar4 / (double)DAT_100148e8 +
            dVar3 / (double)DAT_100148e4 + (dVar1 * dVar2) / (double)DAT_100148e0 + dVar1 + 0.0;
    dVar1 = dVar1 + dVar1 + (double)iVar10 * DAT_10014928;
  }
  return dVar1;
}

#undef DAT_100148d0
#undef DAT_100148d4
#undef DAT_100148d8
#undef DAT_100148dc
#undef DAT_100148e0
#undef DAT_100148e4
#undef DAT_100148e8
#undef DAT_100148ec
#undef DAT_100148f0
#undef DAT_100148f4
#undef DAT_100148f8
#undef DAT_100148fc
#undef DAT_10014900
#undef DAT_10014928

#undef DAT_10014950
#define DAT_10014950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034d0
 */

longlong recovered_100034d0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10014950 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10014950

#undef DAT_10014904
#define DAT_10014904 (*(float *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_10014908
#define DAT_10014908 (*(float *)(((uintptr_t)pf_module_state + 0x46U)))
#undef DAT_1001490c
#define DAT_1001490c (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_10014930
#define DAT_10014930 (*(double *)(((uintptr_t)pf_module_state + 0x6eU)))
#undef DAT_10014938
#define DAT_10014938 (*(double *)(((uintptr_t)pf_module_state + 0x76U)))
#undef DAT_10014940
#define DAT_10014940 (*(double *)(((uintptr_t)pf_module_state + 0x7eU)))
#undef DAT_10014948
#define DAT_10014948 (*(double *)(((uintptr_t)pf_module_state + 0x86U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003530
 */

double recovered_10003530(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (DAT_10014930 < value) {
    do {
      value = value + DAT_10014938;
    } while (DAT_10014930 < value);
  }
  if (value < DAT_10014940) {
    do {
      value = value + DAT_10014948;
    } while (value < DAT_10014940);
  }
  dVar1 = value * value;
  return ((dVar1 * dVar1 * dVar1) / (double)DAT_1001490c +
         (dVar1 * dVar1) / (double)DAT_10014908 + dVar1 / (double)DAT_10014904 + 1.0) * value;
}

#undef DAT_10014904
#undef DAT_10014908
#undef DAT_1001490c
#undef DAT_10014930
#undef DAT_10014938
#undef DAT_10014940
#undef DAT_10014948

#undef DAT_10014910
#define DAT_10014910 (*(float *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_10014914
#define DAT_10014914 (*(float *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10014918
#define DAT_10014918 (*(float *)(((uintptr_t)pf_module_state + 0x56U)))
#undef DAT_10014930
#define DAT_10014930 (*(double *)(((uintptr_t)pf_module_state + 0x6eU)))
#undef DAT_10014938
#define DAT_10014938 (*(double *)(((uintptr_t)pf_module_state + 0x76U)))
#undef DAT_10014940
#define DAT_10014940 (*(double *)(((uintptr_t)pf_module_state + 0x7eU)))
#undef DAT_10014948
#define DAT_10014948 (*(double *)(((uintptr_t)pf_module_state + 0x86U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035c0
 */

double recovered_100035c0(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (DAT_10014930 < value) {
    do {
      value = value + DAT_10014938;
    } while (DAT_10014930 < value);
  }
  if (value < DAT_10014940) {
    do {
      value = value + DAT_10014948;
    } while (value < DAT_10014940);
  }
  dVar1 = value * value;
  return (dVar1 * dVar1 * dVar1) / (double)DAT_10014918 +
         (dVar1 * dVar1) / (double)DAT_10014914 + dVar1 * (double)DAT_10014910 + 1.0;
}

#undef DAT_10014910
#undef DAT_10014914
#undef DAT_10014918
#undef DAT_10014930
#undef DAT_10014938
#undef DAT_10014940
#undef DAT_10014948

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003650
 */

double recovered_10003650(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (value < -value) {
    value = -value;
  }
  return value;
}


#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_1001491c
#define DAT_1001491c (*(float *)(((uintptr_t)pf_module_state + 0x5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003670
 */

undefined8 recovered_10003670(double param_1)

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
    dVar3 = (double)DAT_1001491c;
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
      dVar3 = dVar3 * (double)DAT_100148d0;
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

#undef DAT_100148d0
#undef DAT_1001491c

#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_1001491c
#define DAT_1001491c (*(float *)(((uintptr_t)pf_module_state + 0x5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003730
 */

undefined8 recovered_10003730(double param_1)

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
    dVar2 = (double)DAT_1001491c;
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
      dVar2 = dVar2 * (double)DAT_100148d0;
      bVar10 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar6,uVar4);
}

#undef DAT_100148d0
#undef DAT_1001491c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037c0
 */

void recovered_100037c0(uint param_1,uint param_2)

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
 * Address: 0x10003830
 */

void recovered_10003830(uint param_1,uint param_2)

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
 * Address: 0x100038f0
 */

float recovered_100038f0(float left,float right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = 0.0;
  if ((right != 0.0) || (NAN(right))) {
    fVar1 = left - right * (float)(int)ROUND(left / right);
  }
  return fVar1;
}


#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003960
 */

void recovered_10003960(float param_1,int *param_2)

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
        param_1 = param_1 * DAT_100148d0;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_100148d0 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_100148d0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_100148d0

#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a50
 */

longdouble recovered_10003a50(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_100148d0;
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

#undef DAT_100148d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab0
 */

float recovered_10003ab0(float left,float right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  uint uVar5;

  uVar1 = (uint)ROUND(right);
  fVar3 = 0.0;
  if ((((float)(int)uVar1 == right) && (!NAN((float)(int)uVar1) && !NAN(right))) &&
     (fVar3 = 1.0, uVar1 != 0)) {
    uVar5 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar5 = uVar1;
    }
    fVar4 = 1.0;
    do {
      fVar3 = fVar4 * left;
      if ((uVar5 & 1) == 0) {
        fVar3 = fVar4;
      }
      left = left * left;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
      fVar4 = fVar3;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      fVar3 = 1.0 / fVar3;
    }
  }
  return fVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b50
 */

float recovered_10003b50(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = (float)(int)ROUND(value);
  if (value < fVar1) {
    fVar1 = (float)((int)ROUND(value) + -1);
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bb0
 */

float recovered_10003bb0(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = (float)(int)ROUND(value);
  if (value < fVar1) {
    fVar1 = (float)((int)ROUND(value) + -1);
  }
  if (fVar1 < value) {
    fVar1 = fVar1 + 1.0;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c20
 */

double recovered_10003c20(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)(int)ROUND(value);
  if (value < dVar1) {
    dVar1 = (double)((int)ROUND(value) + -1);
  }
  dVar2 = dVar1;
  if (dVar1 < value) {
    dVar2 = dVar1 + 1.0;
  }
  if (value < 0.0) {
    dVar1 = dVar2;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c90
 */

float recovered_10003c90(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(value);
  if (value < fVar1) {
    fVar1 = (float)((int)ROUND(value) + -1);
  }
  fVar2 = fVar1;
  if (fVar1 < value) {
    fVar2 = fVar1 + 1.0;
  }
  if (value < 0.0) {
    fVar1 = fVar2;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d00
 */

float recovered_10003d00(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100032c0((double)value);
  return (float)dVar1;
}


#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_100148d8
#define DAT_100148d8 (*(float *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_100148dc
#define DAT_100148dc (*(float *)(((uintptr_t)pf_module_state + 0x1aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d20
 */

void recovered_10003d20(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_100148d8 < param_1) {
      do {
        param_1 = param_1 * DAT_100148d0;
      } while (DAT_100148d8 < param_1);
    }
    for (; param_1 < DAT_100148dc; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_100148d0
#undef DAT_100148d8
#undef DAT_100148dc

#undef DAT_10014950
#define DAT_10014950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e40
 */

undefined4 recovered_10003e40(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_10014950 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_10014950
#undef local_10

#undef DAT_10014904
#define DAT_10014904 (*(float *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_10014908
#define DAT_10014908 (*(float *)(((uintptr_t)pf_module_state + 0x46U)))
#undef DAT_1001490c
#define DAT_1001490c (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_10014930
#define DAT_10014930 (*(double *)(((uintptr_t)pf_module_state + 0x6eU)))
#undef DAT_10014938
#define DAT_10014938 (*(double *)(((uintptr_t)pf_module_state + 0x76U)))
#undef DAT_10014940
#define DAT_10014940 (*(double *)(((uintptr_t)pf_module_state + 0x7eU)))
#undef DAT_10014948
#define DAT_10014948 (*(double *)(((uintptr_t)pf_module_state + 0x86U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e90
 */

float recovered_10003e90(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_10014930 < value) {
    do {
      value = value + (float)DAT_10014938;
    } while ((float)DAT_10014930 < value);
  }
  if (value < (float)DAT_10014940) {
    do {
      value = value + (float)DAT_10014948;
    } while (value < (float)DAT_10014940);
  }
  fVar1 = value * value;
  return ((fVar1 * fVar1 * fVar1) / DAT_1001490c +
         (fVar1 * fVar1) / DAT_10014908 + fVar1 / DAT_10014904 + 1.0) * value;
}

#undef DAT_10014904
#undef DAT_10014908
#undef DAT_1001490c
#undef DAT_10014930
#undef DAT_10014938
#undef DAT_10014940
#undef DAT_10014948

#undef DAT_10014910
#define DAT_10014910 (*(float *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_10014914
#define DAT_10014914 (*(float *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10014918
#define DAT_10014918 (*(float *)(((uintptr_t)pf_module_state + 0x56U)))
#undef DAT_10014930
#define DAT_10014930 (*(double *)(((uintptr_t)pf_module_state + 0x6eU)))
#undef DAT_10014938
#define DAT_10014938 (*(double *)(((uintptr_t)pf_module_state + 0x76U)))
#undef DAT_10014940
#define DAT_10014940 (*(double *)(((uintptr_t)pf_module_state + 0x7eU)))
#undef DAT_10014948
#define DAT_10014948 (*(double *)(((uintptr_t)pf_module_state + 0x86U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f20
 */

float recovered_10003f20(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_10014930 < value) {
    do {
      value = value + (float)DAT_10014938;
    } while ((float)DAT_10014930 < value);
  }
  if (value < (float)DAT_10014940) {
    do {
      value = value + (float)DAT_10014948;
    } while (value < (float)DAT_10014940);
  }
  fVar1 = value * value;
  return (fVar1 * fVar1 * fVar1) / DAT_10014918 +
         (fVar1 * fVar1) / DAT_10014914 + fVar1 * DAT_10014910 + 1.0;
}

#undef DAT_10014910
#undef DAT_10014914
#undef DAT_10014918
#undef DAT_10014930
#undef DAT_10014938
#undef DAT_10014940
#undef DAT_10014948

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fb0
 */

float recovered_10003fb0(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (value < -value) {
    value = -value;
  }
  return value;
}


#define local_14 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fd0
 */

int recovered_10003fd0(byte *param_1,undefined4 *param_2,uint param_3)

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

#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10014920
#define DAT_10014920 (*(float *)(((uintptr_t)pf_module_state + 0x5eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004270
 */

double recovered_10004270(char *text,char **end)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;

  pbVar6 = (byte *)text;
  while( true ) {
    bVar7 = *pbVar6;
    if ((4 < bVar7 - 9) && (bVar7 != 0x20)) break;
    pbVar6 = pbVar6 + 1;
  }
  pbVar6 = pbVar6 + ((bVar7 - 0x2b & 0xfd) == 0);
  uVar5 = (uint)CONCAT11(*pbVar6,bVar7);
  bVar7 = *pbVar6 - 0x30U;
  fVar2 = 0.0;
  if (bVar7 < 10) {
    fVar2 = 0.0;
    do {
      fVar2 = fVar2 * DAT_10014920 + (float)(int)((uVar5 >> 8) - 0x30);
      pbVar11 = pbVar6 + 1;
      uVar5 = (uint)CONCAT11(*pbVar11,(char)uVar5);
      pbVar6 = pbVar6 + 1;
    } while ((byte)(*pbVar11 - 0x30U) < 10);
  }
  if ((char)(uVar5 >> 8) == '.') {
    pbVar11 = pbVar6 + 1;
    uVar5 = (uint)CONCAT11(*pbVar11,(char)uVar5);
    pbVar6 = pbVar6 + 1;
    if (9 < (byte)(*pbVar11 - 0x30U)) goto LAB_1000433c;
    fVar3 = 0.0;
    fVar4 = 1.0;
    do {
      fVar3 = fVar3 * DAT_10014920 + (float)(int)((uVar5 >> 8) - 0x30);
      fVar4 = fVar4 * DAT_10014920;
      pbVar11 = pbVar6 + 1;
      uVar5 = (uint)CONCAT11(*pbVar11,(char)uVar5);
      pbVar6 = pbVar6 + 1;
    } while ((byte)(*pbVar11 - 0x30U) < 10);
    fVar3 = fVar3 / fVar4;
  }
  else {
LAB_1000433c:
    fVar3 = 0.0;
    if (9 < bVar7) {
      fVar3 = 0.0;
      if (end != (char **)0x0) {
        *end = text;
      }
      goto LAB_10004421;
    }
  }
  fVar3 = fVar3 + fVar2;
  if ((uVar5 >> 8 | 0x20) == 0x65) {
    iVar8 = 1;
    if (pbVar6[1] == 0x2b) {
      pbVar11 = pbVar6 + 2;
    }
    else if (pbVar6[1] == 0x2d) {
      pbVar11 = pbVar6 + 2;
      iVar8 = -1;
    }
    else {
      pbVar11 = pbVar6 + 1;
    }
    uVar5 = (uint)CONCAT11(*pbVar11,(char)uVar5);
    bVar7 = *pbVar11 - 0x30U;
    if (bVar7 < 10) {
      iVar9 = 0;
      do {
        iVar9 = ((uVar5 >> 8) - 0x30) + iVar9 * 10;
        pbVar1 = pbVar11 + 1;
        uVar5 = (uint)CONCAT11(*pbVar1,(char)uVar5);
        pbVar11 = pbVar11 + 1;
      } while ((byte)(*pbVar1 - 0x30U) < 10);
      if (bVar7 < 10) {
        iVar9 = iVar9 * iVar8;
        pbVar6 = pbVar11;
        if (iVar9 < 1) {
          if (iVar9 < 0) {
            do {
              fVar3 = fVar3 * DAT_100148d0;
              iVar9 = iVar9 + 1;
            } while (iVar9 != 0);
          }
        }
        else {
          uVar10 = iVar9 + 1;
          do {
            fVar3 = fVar3 + fVar3;
            uVar10 = uVar10 - 1;
          } while (1 < uVar10);
        }
      }
    }
  }
  if (end != (char **)0x0) {
    *end = (char *)pbVar6;
  }
  if ((char)uVar5 == '-') {
    fVar3 = -fVar3;
  }
LAB_10004421:
  return (double)fVar3;
}

#undef DAT_100148d0
#undef DAT_10014920

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004430
 */

float recovered_10004430(char *text,char **end)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004270(text,end);
  return (float)dVar1;
}


#undef DAT_10014920
#define DAT_10014920 (*(float *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef str_10014ca2
#define str_10014ca2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e0U)))
#undef str_10014cac
#define str_10014cac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3eaU)))
#undef str_10014cbd
#define str_10014cbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fbU)))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004460
 */

int recovered_10004460(char *out,uint capacity,char *format,void *args)

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

  if (capacity != 0) {
    *out = '\0';
  }
  local_c4 = args;
  local_c0 = 0;
  local_bc = capacity;
  do {
    bVar6 = *format;
    if (bVar6 != 0x25) {
      if (bVar6 == 0) {
        if (capacity != 0) {
          *out = 0;
        }
        return local_c0;
      }
      if (1 < local_bc) {
        *out = bVar6;
        out = out + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_100044f3;
    }
    bVar6 = format[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *out = 0x25;
        out = out + 1;
        local_bc = local_bc - 1;
      }
      format = format + 1;
      goto LAB_100044f3;
    }
    pbVar10 = (byte *)(format + 2);
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10004555;
        }
        break;
      }
      format = format + 1;
      bVar6 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
    do {
      bVar6 = format[1];
      pbVar10 = (byte *)(format + 1);
      format = (char *)pbVar10;
    } while ((byte)(bVar6 - 0x30U) < 10);
LAB_10004555:
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
    format = (char *)pbVar10;
    switch((uintptr_t)(bVar6)) {
    case 0x4c:
      format = (char *)(pbVar10 + 1);
      cVar7 = '\b';
      bVar19 = true;
      break;
    case 0x68:
      format = (char *)(pbVar10 + 1);
      if (pbVar10[1] == 0x68) {
        format = (char *)(pbVar10 + 2);
      }
      cVar7 = (pbVar10[1] != 0x68) + '\x01';
      goto LAB_1000463c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10004648;
    case 0x6c:
      format = (char *)(pbVar10 + 1);
      if (pbVar10[1] == 0x6c) {
        format = (char *)(pbVar10 + 2);
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_1000463c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10004648;
    case 0x7a:
      cVar7 = '\x05';
LAB_10004648:
      format = (char *)(pbVar10 + 1);
      bVar19 = false;
    }
    local_b8 = (byte *)out;
    switch((uintptr_t)(*format)) {
    case 'I':
    case 'd':
    case 'i':
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
        goto LAB_10004959;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004959:
      if ((int)uVar8 < 0) {
        if (1 < local_bc) {
          *out = 0x2d;
          out = out + 1;
          local_bc = local_bc - 1;
        }
        local_c0 = local_c0 + 1;
        bVar19 = uVar15 != 0;
        uVar15 = -uVar15;
        uVar8 = -(uint)bVar19 - uVar8;
        local_b8 = (byte *)out;
      }
      iVar12 = 0;
      do {
        uVar16 = uVar8 << 0x1f | uVar15 >> 1;
        uVar11 = uVar8 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_10014cbd[uVar15 + uVar9 * -10];
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
      goto LAB_100044a8;
    default:
      if (1 < local_bc) {
        *out = 0x3f;
        out = out + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_100044f3;
    case 'X':
    case 'x':
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_10004a87;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_10004a87;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_10004a87:
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
      pcVar14 = str_10014cbd;
      if (*format == 0x58) {
        pcVar14 = str_10014cac;
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
          *out = abStack_51[iVar12];
          out = out + 1;
          local_bc = local_bc - 1;
        }
        iVar12 = iVar12 + -1;
        pdVar1 = local_c4;
      } while (iVar12 != 0);
LAB_10004a5c:
      local_c4 = pdVar1;
      format = format + 1;
      break;
    case 'c':
      if (1 < local_bc) {
        *out = *(byte *)local_c4;
        out = out + 1;
        local_bc = local_bc - 1;
      }
      local_c4 = (double *)((int)local_c4 + 4);
LAB_100044f3:
      local_c0 = local_c0 + 1;
LAB_100044f4:
      format = format + 1;
      break;
    case 'f':
      if (bVar19) {
        if (1 < local_bc) {
          *out = 0x30;
          if (local_bc - 3 < 0xfffffffe) {
            out[1] = 0x2e;
            uVar8 = local_bc & 0xfffffffe;
            if (uVar8 == 2) {
              out = out + 2;
            }
            else {
              out[2] = 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                out[3] = 0x30;
                if (uVar8 == 4) {
                  out = out + 4;
                }
                else {
                  out[4] = 0x30;
                  if (local_bc - 7 < 0xfffffffe) {
                    out[5] = 0x30;
                    if (uVar8 == 6) {
                      out = out + 6;
                    }
                    else {
                      out[6] = 0x30;
                      if (local_bc - 9 < 0xfffffffe) {
                        out[7] = 0x30;
                        out = out + 8;
                        local_bc = local_bc - 8;
                        goto LAB_10004b95;
                      }
                      out = out + 7;
                    }
                  }
                  else {
                    out = out + 5;
                  }
                }
              }
              else {
                out = out + 3;
              }
            }
          }
          else {
            out = out + 1;
          }
          local_bc = 1;
        }
LAB_10004b95:
        local_c4 = local_c4 + 2;
        local_c0 = local_c0 + 8;
        format = format + 1;
      }
      else {
        dVar2 = *local_c4;
        if (dVar2 < 0.0) {
          if (1 < local_bc) {
            *out = 0x2d;
            out = out + 1;
            local_bc = local_bc - 1;
          }
          local_c0 = local_c0 + 1;
          dVar2 = -dVar2;
          local_b8 = (byte *)out;
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
          abStack_51[iVar12 + 1] = str_10014cbd[uVar8 + uVar9 * -10];
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
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_10014920;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_10014920;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_10014920;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_10014920;
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
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_10014920);
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
        format = format + 1;
        out = (char *)local_b8;
      }
      break;
    case 'p':
      uVar8 = *(uint *)local_c4;
      if (1 < local_bc) {
        *out = 0x30;
        if (local_bc - 3 < 0xfffffffe) {
          out[1] = 0x78;
          local_b8 = (byte *)(out + 2);
          local_bc = local_bc - 2;
        }
        else {
          local_b8 = (byte *)(out + 1);
          local_bc = 1;
        }
      }
      local_c4 = (double *)((int)local_c4 + 4);
      iVar12 = 0;
      do {
        abStack_51[iVar12 + 1] = str_10014cbd[uVar8 & 0xf];
        iVar12 = iVar12 + 1;
        bVar19 = 0xf < uVar8;
        uVar8 = uVar8 >> 4;
      } while (bVar19);
      local_c0 = local_c0 + 2 + iVar12;
      out = (char *)local_b8;
      do {
        if (1 < local_bc) {
          *out = abStack_51[iVar12];
          out = out + 1;
          local_bc = local_bc - 1;
        }
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      goto LAB_100044f4;
    case 's':
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_10014ca2;
        if (*(byte **)local_c4 != (byte *)0x0) {
          pbVar10 = *(byte **)local_c4;
        }
        do {
          if (*pbVar10 == 0) break;
          if (1 < local_bc) {
            *out = *pbVar10;
            out = out + 1;
            local_bc = local_bc - 1;
          }
          pbVar10 = pbVar10 + 1;
          local_c0 = local_c0 + 1;
          iVar12 = iVar12 - (uint)(0 < iVar12);
        } while (iVar12 != 0);
      }
      goto LAB_10004a5c;
    case 'u':
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
        goto LAB_10004c6f;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_10004c6f;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_10004c6f:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_10014cbd[uVar8 + uVar9 * -10];
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
LAB_100044a8:
      format = format + 1;
      out = (char *)local_b8;
    }
  } while( true );
}

#undef DAT_10014920
#undef str_10014ca2
#undef str_10014cac
#undef str_10014cbd
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_80
#undef abStack_51

#define uStack00000010 (*(undefined1 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051c0
 */

int recovered_100051c0(char *out,uint capacity,char *format,...)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10004460(out,capacity,format,&uStack00000010);
  return iVar1;
}

#undef uStack00000010

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
#undef DAT_10015080
#define DAT_10015080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7beU)))
#undef DAT_10015088
#define DAT_10015088 (*(int * *)(((uintptr_t)pf_module_state + 0x7c6U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100051f0(undefined *in_ECX,uint in_EDX,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;

  puVar5 = (undefined *)0xffffffff;
  if (!CARRY4((uint)in_ECX,in_EDX)) {
    puVar5 = in_ECX + in_EDX;
  }
  if (((in_ECX < (undefined *)0x10000000) && (in_ECX < puVar5)) && ((undefined *)0x8000000 < puVar5)
     ) {
    if (in_ECX < (undefined *)0x8000000) {
      if (param_3 == (int *)0x0) {
        return;
      }
      piVar4 = (int *)((uint)(in_ECX + 0xf) & 0xffffff0);
      uVar3 = (0x8000000U - (int)in_ECX) - ((int)piVar4 - (int)in_ECX);
      if (((uint)((int)piVar4 - (int)in_ECX) <= 0x8000000U - (int)in_ECX && uVar3 != 0) &&
         (uVar3 = uVar3 & 0xfffffff0, 0x20 < uVar3)) {
        *piVar4 = uVar3 - 0x10;
        piVar4[1] = 0;
        iVar1 = *param_3;
        piVar4[2] = iVar1;
        *(undefined1 *)(piVar4 + 3) = 1;
        puVar2 = (undefined4 *)(iVar1 + 4);
        if (DAT_10015080 == 0) {
          puVar2 = &DAT_10015080;
        }
        *puVar2 = piVar4;
        *param_3 = (int)piVar4;
        if (DAT_10015088 == (int *)0x0) {
          DAT_10015088 = piVar4;
        }
      }
    }
    if (param_3 == (int *)0x0 || puVar5 < &DAT_10000001) {
      return;
    }
    if (((uint)puVar5 & 0xfffffff0) + 0xf0000000 < 0x21) {
      return;
    }
    _DAT_10000000 = ((uint)puVar5 & 0xfffffff0) + 0xeffffff0;
    _DAT_10000004 = 0;
    _DAT_10000008 = *param_3;
    DAT_1000000c = 1;
    puVar2 = (undefined4 *)(_DAT_10000008 + 4);
    if (DAT_10015080 == 0) {
      puVar2 = &DAT_10015080;
    }
    *puVar2 = 0x10000000;
    *param_3 = 0x10000000;
    if (DAT_10015088 != (int *)0x0) {
      return;
    }
    piVar4 = (int *)&DAT_10000000;
  }
  else {
    if (CARRY4((uint)in_ECX,in_EDX)) {
      return;
    }
    if ((undefined *)0xfffffff0 < in_ECX) {
      return;
    }
    if (param_3 == (int *)0x0) {
      return;
    }
    piVar4 = (int *)((uint)(in_ECX + 0xf) & 0xfffffff0);
    uVar3 = in_EDX - ((int)piVar4 - (int)in_ECX);
    if (in_EDX < (uint)((int)piVar4 - (int)in_ECX) || uVar3 == 0) {
      return;
    }
    uVar3 = uVar3 & 0xfffffff0;
    if (uVar3 < 0x21) {
      return;
    }
    *piVar4 = uVar3 - 0x10;
    piVar4[1] = 0;
    iVar1 = *param_3;
    piVar4[2] = iVar1;
    *(undefined1 *)(piVar4 + 3) = 1;
    puVar2 = (undefined4 *)(iVar1 + 4);
    if (DAT_10015080 == 0) {
      puVar2 = &DAT_10015080;
    }
    *puVar2 = piVar4;
    *param_3 = (int)piVar4;
    if (DAT_10015088 != (int *)0x0) {
      return;
    }
  }
  DAT_10015088 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_10015080
#undef DAT_10015088
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005390
 */

uint * recovered_10005390(uint *in_ECX,uint *in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;

  puVar2 = (uint *)0x0;
  if ((((in_ECX != (uint *)0x0) && (((uint)in_EDX & 0xf) == 0)) && ((char)in_ECX[3] != '\0')) &&
     (((in_ECX + 4 < in_EDX && (uVar3 = (int)in_EDX - (int)(in_ECX + 4), 0x1f < uVar3)) &&
      (uVar3 <= *in_ECX)))) {
    puVar2 = in_EDX + -4;
    in_EDX[-4] = *in_ECX - uVar3;
    uVar1 = in_ECX[1];
    in_EDX[-3] = uVar1;
    in_EDX[-2] = (uint)in_ECX;
    *(undefined1 *)(in_EDX + -1) = 1;
    if (uVar1 != 0) {
      *(uint **)(uVar1 + 8) = puVar2;
    }
    *in_ECX = uVar3 - 0x10;
    in_ECX[1] = (uint)puVar2;
  }
  return puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053f0
 */

undefined4 recovered_100053f0(uint *in_ECX,int in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;

  if (in_ECX == (uint *)0x0) {
    return 0;
  }
  uVar3 = in_EDX + 0xfU & 0xfffffff0;
  uVar4 = *in_ECX - uVar3;
  if (uVar4 < 0x20 || *in_ECX < uVar3) {
    uVar2 = 0;
  }
  else {
    uVar1 = (int)in_ECX + uVar3 + 0x10;
    *(uint *)((int)in_ECX + uVar3 + 0x10) = uVar4 - 0x10;
    uVar4 = in_ECX[1];
    *(uint *)((int)in_ECX + uVar3 + 0x14) = uVar4;
    *(uint **)((int)in_ECX + uVar3 + 0x18) = in_ECX;
    *(undefined1 *)((int)in_ECX + uVar3 + 0x1c) = 1;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = uVar1;
    }
    *in_ECX = uVar3;
    in_ECX[1] = uVar1;
    uVar2 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar2;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_1001508c
#define DAT_1001508c (*(uint *)(((uintptr_t)pf_module_state + 0x7caU)))
#undef DAT_10015090
#define DAT_10015090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ceU)))
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
 * Address: 0x10005450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005450(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1001508c != 0) {
          DAT_1001508c = DAT_1001508c - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1001508c == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10002410(local_214,&DAT_10015090,DAT_1001508c);
            uVar3 = DAT_1001508c;
          }
          local_214[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0))))))
          {
            (*_DAT_00280840)(local_214);
          }
          DAT_1001508c = 0;
        }
        else {
          if (DAT_1001508c - 0x1ff < 0xfffffe00) {
            recovered_10002410(local_214,&DAT_10015090,DAT_1001508c);
            local_214[DAT_1001508c] = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
              (*_DAT_00280840)(local_214);
            }
            DAT_1001508c = 0;
          }
          pcVar1 = &DAT_10015090 + DAT_1001508c;
          DAT_1001508c = DAT_1001508c + 1;
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
#undef DAT_1001508c
#undef DAT_10015090
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
#undef DAT_1001508c
#define DAT_1001508c (*(uint *)(((uintptr_t)pf_module_state + 0x7caU)))
#undef DAT_10015090
#define DAT_10015090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ceU)))
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
 * Address: 0x10005610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005610(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (DAT_1001508c == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10002410(local_21c,&DAT_10015090,DAT_1001508c);
    uVar1 = DAT_1001508c;
  }
  local_21c[uVar1] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
    (*_DAT_00280840)(local_21c);
  }
  DAT_1001508c = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1001508c
#undef DAT_10015090
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
#undef DAT_1001508c
#define DAT_1001508c (*(uint *)(((uintptr_t)pf_module_state + 0x7caU)))
#undef DAT_10015090
#define DAT_10015090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ceU)))
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
 * Address: 0x100056b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100056b0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1001508c != 0) {
    recovered_10002410(local_210,&DAT_10015090,DAT_1001508c);
    local_210[DAT_1001508c] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
      (*_DAT_00280840)(local_210);
    }
    DAT_1001508c = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1001508c
#undef DAT_10015090
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_210

#undef DAT_10014cab
#define DAT_10014cab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e9U)))
#undef DAT_10014cce
#define DAT_10014cce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40cU)))
#define acStack_150 (*(char (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005740
 */

void recovered_10005740(undefined *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  char *format;

  format = &DAT_10014cce;
  if (param_1 != (undefined *)0x0) {
    format = param_1;
  }
  puVar1 = &DAT_10014cab;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  iVar2 = recovered_100051c0(acStack_150,0x140,format,puVar1);
  if (0 < iVar2) {
    recovered_10005450(acStack_150,iVar2);
  }
  return;
}

#undef DAT_10014cab
#undef DAT_10014cce
#undef acStack_150

#undef DAT_10014cec
#define DAT_10014cec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef str_10014cd1
#define str_10014cd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057a0
 */

void recovered_100057a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002b60(str_10014cd1);
  recovered_10005450(str_10014cd1,uVar1);
  uVar1 = recovered_10002b60(&DAT_10014cec);
  recovered_10005450(&DAT_10014cec,uVar1);
  return;
}

#undef DAT_10014cec
#undef str_10014cd1

#undef DAT_10014cec
#define DAT_10014cec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef str_10014cef
#define str_10014cef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057f0
 */

void recovered_100057f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002b60(str_10014cef);
  recovered_10005450(str_10014cef,uVar1);
  uVar1 = recovered_10002b60(&DAT_10014cec);
  recovered_10005450(&DAT_10014cec,uVar1);
  return;
}

#undef DAT_10014cec
#undef str_10014cef

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
#undef DAT_1001508c
#define DAT_1001508c (*(uint *)(((uintptr_t)pf_module_state + 0x7caU)))
#undef DAT_10015090
#define DAT_10015090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ceU)))
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
 * Address: 0x10005840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10005840(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1001508c != 0) {
      recovered_10002410(local_214,&DAT_10015090,DAT_1001508c);
      local_214[DAT_1001508c] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1001508c = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)(param_1,param_2,param_3,param_4);
      return iVar1 != 0;
    }
  }
  return '\0';
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_1001508c
#undef DAT_10015090
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005940
 */

undefined4 recovered_10005940(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005950
 */

void recovered_10005950(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005960
 */

undefined1 recovered_10005960(void)

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
#undef DAT_10014cce
#define DAT_10014cce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40cU)))
#undef PTR_DAT_10015000
#define PTR_DAT_10015000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73eU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef str_10014d70
#define str_10014d70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aeU)))
#undef str_10014d7d
#define str_10014d7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bbU)))
#undef str_10014d8b
#define str_10014d8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c9U)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(void * *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005970(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  void *dst;
  bool bVar8;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10015000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002ba0((byte *)param_1,(byte *)str_10014d70);
  if (iVar3 == 0) {
    local_24 = 1;
  }
  else {
    iVar4 = recovered_10002ba0((byte *)param_1,(byte *)str_10014d7d);
    if (iVar4 == 0) {
      local_24 = 2;
    }
    else {
      iVar4 = recovered_10002ba0((byte *)param_1,(byte *)str_10014d8b);
      if (iVar4 != 0) {
        puVar5 = recovered_10002320(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_100026a0(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10002d90((char *)param_2,'r');
          bVar8 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002d90((char *)param_2,'+');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002d90((char *)param_2,'a');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar8;
          pcVar6 = recovered_10002d90((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002d90((char *)param_2,'a');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002d90((char *)param_2,'+');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar8 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar8;
          pcVar6 = recovered_10002d90((char *)param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          recovered_100051c0((char *)(puVar5 + 1),0xf1,&DAT_10014cce,param_1);
          recovered_100026a0(&local_20,0,0xc);
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             (((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00280834)(param_1,&local_20), iVar3 != 0)))) {
            pcVar6 = recovered_10002d90((char *)param_2,'w');
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
                  dst = recovered_100023c0((void *)puVar5[0x3f],uVar7);
                  if (dst == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_10015000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_10005cb7;
                  }
                  puVar5[0x3f] = dst;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = dst;
                }
                else {
                  dst = (void *)puVar5[0x3f];
                }
                recovered_10002410(dst,local_20,local_1c);
              }
              else {
                puVar5[0x3e] = local_20;
              }
              puVar5[0x40] = local_1c;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x10005c94;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_10015000 = 2;
LAB_10005cb7:
            recovered_10002370(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x10005c94:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_10005b15;
      }
      local_24 = 3;
    }
  }
  puVar5 = recovered_10002320(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_100026a0(puVar5,0,800);
    *puVar5 = local_24;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    recovered_100051c0((char *)(puVar5 + 1),0xf1,&DAT_10014cce,param_1);
    return puVar5;
  }
LAB_10005b15:
  *(undefined4 *)PTR_DAT_10015000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_10014cce
#undef PTR_DAT_10015000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_10014d70
#undef str_10014d7d
#undef str_10014d8b
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
#undef PTR_DAT_10015000
#define PTR_DAT_10015000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73eU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005d20(int param_1,int param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  if (param_3 == (int *)0x0) goto LAB_10005df7;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       (_DAT_00280838 != (code *)0x0)) {
      iVar1 = (*_DAT_00280838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10005dda;
      }
    }
    *(undefined4 *)PTR_DAT_10015000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10005dda:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10002370((void *)param_3[0x3f]);
  }
  recovered_10002370(param_3);
LAB_10005df7:
  puVar2 = recovered_10005970(param_1,param_2);
  return puVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_10015000
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
#undef PTR_DAT_10015000
#define PTR_DAT_10015000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73eU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005e10(int *param_1)

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
      *(undefined4 *)PTR_DAT_10015000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10002370((void *)param_1[0x3f]);
  }
  recovered_10002370(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_10015000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ef0
 */

int recovered_10005ef0(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;

  uVar2 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     ((param_4 != (int *)0x0 && ((char)param_4[0x44] == '\x01')))) {
    if ((*param_4 == 0) && (param_4[0x43] == -1)) {
      uVar1 = param_4[0x42];
      uVar4 = param_4[0x40] - uVar1;
      if ((uint)param_4[0x40] < uVar1 || uVar4 == 0) {
        *(undefined1 *)(param_4 + 0x45) = 1;
      }
      else {
        uVar7 = 0xffffffff;
        if ((int)((ulonglong)(uint)param_2 * (ulonglong)(uint)param_3 >> 0x20) == 0) {
          uVar7 = param_3 * param_2;
        }
        uVar2 = uVar7;
        if (uVar4 < uVar7) {
          uVar2 = uVar4;
        }
        recovered_10002410(param_1,(void *)(uVar1 + param_4[0x3e]),uVar2);
        param_4[0x42] = param_4[0x42] + uVar2;
        if (uVar4 < uVar7) {
          *(undefined1 *)(param_4 + 0x45) = 1;
        }
        uVar2 = uVar2 / (uint)param_2;
      }
    }
    else {
      iVar3 = 0;
      do {
        iVar5 = param_2;
        puVar6 = param_1;
        do {
          uVar2 = recovered_10006000(param_4);
          if (uVar2 == 0xffffffff) {
            return iVar3;
          }
          *puVar6 = (char)uVar2;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar3 = iVar3 + 1;
        param_1 = param_1 + param_2;
      } while (iVar3 != param_3);
      uVar2 = param_3;
    }
  }
  return uVar2;
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
#undef DAT_10014cab
#define DAT_10014cab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e9U)))
#undef DAT_1001508c
#define DAT_1001508c (*(uint *)(((uintptr_t)pf_module_state + 0x7caU)))
#undef DAT_10015090
#define DAT_10015090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ceU)))
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
 * Address: 0x10006000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10006000(int *param_1)

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
LAB_10006061:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_1001508c != 0) {
      recovered_10002410(local_214,&DAT_10015090,DAT_1001508c);
      local_214[DAT_1001508c] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1001508c = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_10014cab,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10002b60((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar2 = 0;
        goto LAB_10006061;
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
#undef DAT_10014cab
#undef DAT_1001508c
#undef DAT_10015090
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

#undef PTR_DAT_10015000
#define PTR_DAT_10015000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061c0
 */

int recovered_100061c0(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_1000632a:
    param_3 = 0;
  }
  else {
    uVar5 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10005450((char *)param_1,uVar5);
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
      pvVar3 = recovered_100023c0((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_10015000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_1000632a;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_100026a0((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10002410((void *)(uVar4 + param_4[0x3f]),(void *)param_1,uVar5);
    uVar5 = uVar5 + param_4[0x42];
    param_4[0x42] = uVar5;
    if (param_4[0x40] < uVar5) {
      param_4[0x40] = uVar5;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_10015000

#undef PTR_DAT_10015000
#define PTR_DAT_10015000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006340
 */

undefined4 recovered_10006340(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_10015000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10006359;
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
LAB_10006359:
  *(undefined4 *)PTR_DAT_10015000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_10015000

#undef PTR_DAT_10015000
#define PTR_DAT_10015000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063e0
 */

undefined4 recovered_100063e0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_10015000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_10015000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_10015000
#define PTR_DAT_10015000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73eU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006410(int *param_1)

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
    *(undefined4 *)PTR_DAT_10015000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_10015000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064d0
 */

undefined1 recovered_100064d0(int param_1)

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
 * Address: 0x100064f0
 */

undefined1 recovered_100064f0(int param_1)

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
 * Address: 0x10006510
 */

void recovered_10006510(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006540
 */

uint recovered_10006540(uint param_1,int param_2)

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
#undef PTR_DAT_10015000
#define PTR_DAT_10015000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73eU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(code * *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006580(int param_1)

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
  *(undefined4 *)PTR_DAT_10015000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef PTR_DAT_10015000
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
#undef PTR_DAT_10015000
#define PTR_DAT_10015000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73eU)))
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
 * Address: 0x10006600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006600(int param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10015000 = 0x16;
  }
  else {
    recovered_100026a0(&local_20,0,0xc);
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
    *(undefined4 *)PTR_DAT_10015000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef PTR_DAT_10015000
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
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006780(int param_1,int *param_2,int *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *dst;
  uint uVar2;

  if ((((param_3 == (int *)0x0 || (param_2 == (int *)0x0 || param_1 == 0)) ||
       (recovered_100026a0(&local_20,0,0xc), _DAT_00280800 != 0x50414d57)) || (_DAT_00280804 == 0))
     || (((_DAT_00280808 < 0xc || (_DAT_00280808 < 0x38)) ||
         ((_DAT_00280834 == (code *)0x0 || (iVar1 = (*_DAT_00280834)(param_1,&local_20), iVar1 == 0)
          ))))) {
    return 0;
  }
  dst = recovered_10002320(local_1c + (local_1c == 0));
  if (dst == (void *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (local_1c != 0) {
    recovered_10002410(dst,local_20,local_1c);
    uVar2 = local_1c;
  }
  *param_2 = (int)dst;
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
 * Address: 0x10006860
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10006860(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((param_1 == 0) || (param_2 == 0 && param_3 != 0)) || (_DAT_00280800 != 0x50414d57)) ||
     (((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)) ||
      ((_DAT_00280808 < 0x3c || (_DAT_00280838 == (code *)0x0)))))) {
    return '\0';
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
 * Address: 0x100068e0
 */

undefined4 recovered_100068e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068f0
 */

void recovered_100068f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006900
 */

undefined4 recovered_10006900(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006910
 */

undefined4 recovered_10006910(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006920
 */

undefined4 recovered_10006920(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006930
 */

int recovered_10006930(int param_1,int param_2,int param_3)

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


#undef DAT_10014cff
#define DAT_10014cff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_10014d02
#define str_10014d02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x440U)))
#undef str_10014d0f
#define str_10014d0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44dU)))
#undef str_10014d19
#define str_10014d19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x457U)))
#undef str_10014d2d
#define str_10014d2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46bU)))
#undef str_10014d3b
#define str_10014d3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x479U)))
#undef str_10014d4d
#define str_10014d4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48bU)))
#undef str_10014d59
#define str_10014d59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x497U)))
#undef str_10014d6a
#define str_10014d6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006980
 */

char * recovered_10006980(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_10014cff;
  switch((uintptr_t)(param_1)) {
  case 0:
    break;
  default:
    pcVar1 = str_10014d6a;
    break;
  case 2:
    pcVar1 = str_10014d02;
    break;
  case 5:
    pcVar1 = str_10014d0f;
    break;
  case 9:
    pcVar1 = str_10014d19;
    break;
  case 0xc:
    pcVar1 = str_10014d2d;
    break;
  case 0xd:
    pcVar1 = str_10014d3b;
    break;
  case 0x11:
    pcVar1 = str_10014d4d;
    break;
  case 0x16:
    pcVar1 = str_10014d59;
  }
  return pcVar1;
}

#undef DAT_10014cff
#undef str_10014d02
#undef str_10014d0f
#undef str_10014d19
#undef str_10014d2d
#undef str_10014d3b
#undef str_10014d4d
#undef str_10014d59
#undef str_10014d6a

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

  return 0xffffffff;
}


#undef DAT_10015290
#define DAT_10015290 (*(int *)(((uintptr_t)pf_module_state + 0x9ceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a70
 */

void recovered_10006a70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10015290 = DAT_10015290 + 1;
  return;
}

#undef DAT_10015290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a90
 */

longlong recovered_10006a90(longdouble param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_100034d0((double)param_1);
  return lVar1;
}


#define local_21c (*(char (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ab0
 */

uint recovered_10006ab0(char *param_1,void *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10004460(local_21c,0x200,param_1,param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005450(local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

#define local_21c (*(char (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b00
 */

uint recovered_10006b00(char *param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10004460(local_21c,0x200,param_1,&param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005450(local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b60
 */

void recovered_10006b60(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x10006b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


#define unaff_retaddr (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b70
 */

/* WARNING: Removing unreachable block (ram,0x10006b9a) */

int recovered_10006b70(void *context)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 unaff_EBX = 0;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_FPUControlWord;

  *(undefined4 *)context = unaff_EBX;
  *(undefined4 *)((int)context + 4) = unaff_ESI;
  *(undefined4 *)((int)context + 8) = unaff_EDI;
  *(undefined4 *)((int)context + 0xc) = unaff_EBP;
  *(void ***)((int)context + 0x10) = &context;
  *(undefined4 *)((int)context + 0x14) = unaff_retaddr;
  *(undefined4 *)((int)context + 0x18) = 0xffffffff;
  iVar1 = cpuid_Version_info(1);
  if ((*(uint *)(iVar1 + 8) & 0x3000000) == 0x3000000) {
    *(undefined4 *)((int)context + 0x18) = pf_read_MXCSR();
  }
  *(undefined2 *)((int)context + 0x1c) = in_FPUControlWord;
  return 0;
}

#undef unaff_retaddr

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bc0
 */

void recovered_10006bc0(void *context,int value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(int *)((int)context + 0x18) != -1) {
    pf_write_MXCSR(*(undefined4 *)((int)context + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x10006bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)context + 0x14))();
  return;
}


#undef DAT_10014df0
#define DAT_10014df0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52eU)))
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
 * Address: 0x10006c00
 */

void recovered_10006c00(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006c80;
  local_2c = &DAT_10014df0;
  local_24 = 0x40;
  local_44 = 1;
  recovered_100072f0(&local_48);
  recovered_100022e0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10014df0
#undef local_48
#undef auStackY_d0
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c80
 */

undefined4 recovered_10006c80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c90
 */

void recovered_10006c90(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006cb0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10006c00();
}


#undef DAT_10015294
#define DAT_10015294 (*(int *)(((uintptr_t)pf_module_state + 0x9d2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cb0
 */

int recovered_10006cb0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;
  int iVar1;

  recovered_100070f0(param_1);
  if (in_ECX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006c00();
  }
  *(int *)(in_ECX + 8) = DAT_10015294;
  *(undefined1 *)(in_ECX + 0x20) = 0;
  DAT_10015294 = in_ECX;
  iVar1 = recovered_10007140(in_ECX);
  return iVar1;
}

#undef DAT_10015294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cf0
 */

void * recovered_10006cf0(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10002320(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100022e0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d20
 */

void * recovered_10006d20(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10002320(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100022e0();
  }
  return pvVar1;
}


#undef DAT_10014e00
#define DAT_10014e00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53eU)))
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
 * Address: 0x10006d50
 */

void recovered_10006d50(void *pointer)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006c80;
  local_2c = &DAT_10014e00;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100072f0(&local_48);
  recovered_10002370(pointer);
  recovered_10007320(&local_48);
  return;
}

#undef DAT_10014e00
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef auStack_1c
#undef local_24
#undef local_20

#undef DAT_10014e10
#define DAT_10014e10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54eU)))
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
 * Address: 0x10006de0
 */

void recovered_10006de0(void *pointer)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006c80;
  local_2c = &DAT_10014e10;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100072f0(&local_48);
  recovered_10002370(pointer);
  recovered_10007320(&local_48);
  return;
}

#undef DAT_10014e10
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_10014e20
#define DAT_10014e20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55eU)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e70
 */

void recovered_10006e70(void *pointer,uint size)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006c80;
  local_2c = &DAT_10014e20;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100072f0(&local_48);
  recovered_10002370(pointer);
  recovered_10007320(&local_48);
  return;
}

#undef DAT_10014e20
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef auStack_1c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10014e30
#define DAT_10014e30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56eU)))
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
 * Address: 0x10006f00
 */

void recovered_10006f00(void *pointer,uint size)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006c80;
  local_2c = &DAT_10014e30;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100072f0(&local_48);
  recovered_10002370(pointer);
  recovered_10007320(&local_48);
  return;
}

#undef DAT_10014e30
#undef local_48
#undef auStackY_d0
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f90
 */

undefined4 recovered_10006f90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fa0
 */

uint recovered_10006fa0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fc0
 */

void recovered_10006fc0(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fd0
 */

void recovered_10006fd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1001529c
#define DAT_1001529c (*(int *)(((uintptr_t)pf_module_state + 0x9daU)))
#undef DAT_100152a0
#define DAT_100152a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fe0
 */

undefined1 * recovered_10006fe0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  uint size;
  int iVar3;

  size = param_1 + 0x24 + (uint)(param_1 == 0);
  puVar1 = recovered_10002320(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006c00();
  }
  if (size != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      size = size - 1;
    } while (size != 0);
  }
  DAT_1001529c = DAT_1001529c + 1 + (uint)(DAT_1001529c == -1);
  if (DAT_100152a0 == (undefined1 *)0x0) {
LAB_1000705c:
    *(int *)(puVar1 + 0x1c) = DAT_1001529c;
    *(undefined1 **)(puVar1 + 0xc) = DAT_100152a0;
    DAT_100152a0 = puVar1;
    return puVar1 + 0x24;
  }
  do {
    iVar3 = (int)DAT_100152a0;
    while (*(int *)(iVar3 + 0x1c) != DAT_1001529c) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_1000705c;
    }
    DAT_1001529c = DAT_1001529c + 1 + (uint)(DAT_1001529c == -1);
  } while( true );
}

#undef DAT_1001529c
#undef DAT_100152a0

#undef DAT_100152a0
#define DAT_100152a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007080
 */

void recovered_10007080(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  if (param_1 != 0) {
    pointer = (void *)(param_1 + -0x24);
    pvVar1 = DAT_100152a0;
    if (DAT_100152a0 == pointer) {
      puVar2 = &DAT_100152a0;
    }
    else {
      do {
        pvVar3 = pvVar1;
        if (pvVar3 == (void *)0x0) goto LAB_100070d4;
        pvVar1 = *(void **)((int)pvVar3 + 0xc);
      } while (*(void **)((int)pvVar3 + 0xc) != pointer);
      puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
    }
    *puVar2 = *(undefined4 *)(param_1 + -0x18);
    *(undefined4 *)(param_1 + -0x18) = 0;
LAB_100070d4:
    recovered_10002370(pointer);
  }
  return;
}

#undef DAT_100152a0

#undef DAT_100152a0
#define DAT_100152a0 (*(int *)(((uintptr_t)pf_module_state + 0x9deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070f0
 */

void recovered_100070f0(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_100152a0;
  if (DAT_100152a0 != in_ECX && DAT_100152a0 != 0) {
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

#undef DAT_100152a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007140
 */

int recovered_10007140(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x24;
}


#undef DAT_10015294
#define DAT_10015294 (*(void * *)(((uintptr_t)pf_module_state + 0x9d2U)))
#undef DAT_100152a0
#define DAT_100152a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007150
 */

void recovered_10007150(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  pointer = DAT_10015294;
  if (DAT_10015294 != (void *)0x0) {
    puVar2 = (undefined4 *)((int)DAT_10015294 + 8);
    DAT_10015294 = *(void **)((int)DAT_10015294 + 8);
    *puVar2 = 0;
    if (*(char *)((int)pointer + 0x20) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x24);
      }
      pvVar1 = DAT_100152a0;
      if (DAT_100152a0 == pointer) {
        puVar2 = &DAT_100152a0;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_100071c4;
          pvVar1 = *(void **)((int)pvVar3 + 0xc);
        } while (*(void **)((int)pvVar3 + 0xc) != pointer);
        puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
      }
      *puVar2 = *(undefined4 *)((int)pointer + 0xc);
      *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_100071c4:
      recovered_10002370(pointer);
    }
  }
  return;
}

#undef DAT_10015294
#undef DAT_100152a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071e0
 */

void recovered_100071e0(int param_1,uchar *param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(uchar **)(param_1 + -0x24) = param_2;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007220(param_1 + -0x24,param_2);
}


#undef DAT_10015294
#define DAT_10015294 (*(int *)(((uintptr_t)pf_module_state + 0x9d2U)))
#undef DAT_10015298
#define DAT_10015298 (*(int * *)(((uintptr_t)pf_module_state + 0x9d6U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007220
 */

void recovered_10007220(int in_ECX,uchar *in_EDX)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte *in_EDX_00;
  int in_ECX_00;
  undefined4 uVar1;
  uchar *in_EDX_01;
  int *in_ECX_01;

  if (DAT_10015298 != (int *)0x0) {
    in_EDX_00 = *(byte **)in_ECX;
    in_ECX_01 = DAT_10015298;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_10007bf0((int)in_ECX_01,in_EDX_00,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(in_ECX + 0x10) = in_ECX_01;
        *(undefined4 *)(in_ECX + 0x14) = local_1c;
        *(undefined4 *)(in_ECX + 0x18) = local_18;
        recovered_100073f0(in_ECX);
        in_ECX_00 = DAT_10015294;
        if (DAT_10015294 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006c00();
        }
        *(undefined1 *)(DAT_10015294 + 0x20) = 1;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
        *(undefined4 *)(in_ECX_00 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10007220(in_ECX_00,in_EDX_01);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006c00();
}

#undef DAT_10015294
#undef DAT_10015298
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_10015294
#define DAT_10015294 (*(int *)(((uintptr_t)pf_module_state + 0x9d2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072b0
 */

void recovered_100072b0(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX_00;
  uchar *in_EDX;

  in_ECX_00 = DAT_10015294;
  if (DAT_10015294 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006c00();
  }
  *(undefined1 *)(DAT_10015294 + 0x20) = 1;
  *(undefined4 *)(in_ECX_00 + 0x10) = 0;
  *(undefined4 *)(in_ECX_00 + 0x14) = 0;
  *(undefined4 *)(in_ECX_00 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007220(in_ECX_00,in_EDX);
}

#undef DAT_10015294

#undef DAT_10015298
#define DAT_10015298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9d6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072f0
 */

void recovered_100072f0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10015298;
  DAT_10015298 = param_1;
  return;
}

#undef DAT_10015298

#undef DAT_10015298
#define DAT_10015298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007320
 */

void recovered_10007320(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10015298;
  if (DAT_10015298 == param_1) {
    puVar2 = &DAT_10015298;
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

#undef DAT_10015298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007360
 */

void recovered_10007360(int in_stack_00000004)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar *in_EDX;

                    /* WARNING: Subroutine does not return */
  recovered_10007220(in_stack_00000004,in_EDX);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007380
 */

void recovered_10007380(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006c00();
}


#undef DAT_10015298
#define DAT_10015298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9d6U)))
#undef DAT_100152a0
#define DAT_100152a0 (*(int *)(((uintptr_t)pf_module_state + 0x9deU)))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 16))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 20))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 24))
#define in_stack_00000004 (*(int *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007390
 */

void recovered_10007390(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *extraout_ECX = 0;

  in_ECX = DAT_100152a0;
  if (DAT_100152a0 != in_stack_00000004 && DAT_100152a0 != 0) {
    do {
      if (*(int *)(in_ECX + 0x1c) == in_stack_00000004) goto LAB_100073d2;
      in_ECX = *(int *)(in_ECX + 0xc);
    } while ((in_ECX != 0) && (in_ECX != in_stack_00000004));
  }
  if (in_ECX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006c00();
  }
LAB_100073d2:
  if (DAT_10015298 != (undefined4 *)0x0) {
    DAT_10015298 = (undefined4 *)*DAT_10015298;
  }
  recovered_100073f0(in_ECX);
  if (DAT_10015298 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[4];
    do {
      puVar2 = DAT_10015298;
      if (DAT_10015298 == puVar1) {
        DAT_10015298[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[6];
        uVar3 = extraout_ECX[5];
LAB_1000748e:
        puVar2[1] = uVar3;
        recovered_10006b60((int)puVar2);
        recovered_10007390();
        return;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      recovered_10007bf0((int)DAT_10015298,(byte *)*extraout_ECX,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_3c;
        goto LAB_1000748e;
      }
      DAT_10015298 = (undefined4 *)*puVar2;
    } while (DAT_10015298 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006c00();
}

#undef DAT_10015298
#undef DAT_100152a0
#undef uStack_40
#undef uStack_3c
#undef uStack_38
#undef in_stack_00000004

#undef DAT_10015298
#define DAT_10015298 (*(int * *)(((uintptr_t)pf_module_state + 0x9d6U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073f0
 */

void recovered_100073f0(int in_ECX)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_10015298 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0x10);
    do {
      piVar2 = DAT_10015298;
      if (DAT_10015298 == piVar1) {
        DAT_10015298[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x18);
        iVar3 = *(int *)(in_ECX + 0x14);
LAB_1000748e:
        piVar2[1] = iVar3;
        recovered_10006b60((int)piVar2);
        recovered_10007390();
        return;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      recovered_10007bf0((int)DAT_10015298,*(byte **)in_ECX,(undefined2 *)&local_20);
      if (((char)local_20 == '\x01') && (PF_PART1(local_20, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_1c;
        goto LAB_1000748e;
      }
      DAT_10015298 = (int *)*piVar2;
    } while (DAT_10015298 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006c00();
}

#undef DAT_10015298
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074a0
 */

void recovered_100074a0(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007390();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074c0
 */

undefined4 recovered_100074c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074d0
 */

void recovered_100074d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006c00();
}


#undef DAT_10015064
#define DAT_10015064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a2U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074e0
 */

int recovered_100074e0(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_100075a0;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_100075a0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_10015064) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_100075a0:
      local_1c = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_1c;
}

#undef DAT_10015064
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075c0
 */

void recovered_100075c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100022e0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075e0
 */

undefined4 recovered_100075e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

uchar recovered_100075f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007610
 */

uchar recovered_10007610(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007650
 */

uchar recovered_10007650(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007680
 */

uchar recovered_10007680(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076a0
 */

uchar recovered_100076a0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076c0
 */

byte recovered_100076c0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007700
 */

uchar recovered_10007700(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10014910
#define DAT_10014910 (*(float *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_10014960
#define DAT_10014960 (*(float *)(((uintptr_t)pf_module_state + 0x9eU)))
#undef DAT_10014968
#define DAT_10014968 (*(double *)(((uintptr_t)pf_module_state + 0xa6U)))
#undef DAT_10014970
#define DAT_10014970 (*(double *)(((uintptr_t)pf_module_state + 0xaeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007720
 */

longdouble recovered_10007720(double param_1)

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
    if ((longdouble)DAT_10014968 < lVar4) {
      return (longdouble)DAT_10014960;
    }
    if (lVar4 < (longdouble)DAT_10014970) {
      return (longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_100148d0;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_10014910) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_100148d0;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_10014910);
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

#undef DAT_100148d0
#undef DAT_10014910
#undef DAT_10014960
#undef DAT_10014968
#undef DAT_10014970

#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10014910
#define DAT_10014910 (*(float *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_10014960
#define DAT_10014960 (*(float *)(((uintptr_t)pf_module_state + 0x9eU)))
#undef DAT_10014968
#define DAT_10014968 (*(double *)(((uintptr_t)pf_module_state + 0xa6U)))
#undef DAT_10014970
#define DAT_10014970 (*(double *)(((uintptr_t)pf_module_state + 0xaeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

longdouble recovered_10007810(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;

  if (!NAN(param_1)) {
    fVar1 = DAT_10014960;
    if (((float)DAT_10014968 < param_1) || (fVar1 = 0.0, param_1 < (float)DAT_10014970))
    goto LAB_100078fd;
    iVar4 = 0;
    if (DAT_100148d0 < param_1) {
      iVar4 = 0;
      do {
        param_1 = param_1 * DAT_100148d0;
        iVar4 = iVar4 + 1;
      } while (DAT_100148d0 < param_1);
    }
    if (DAT_10014910 <= param_1) {
      fVar1 = param_1;
    }
    else {
      do {
        param_1 = param_1 * DAT_100148d0;
        iVar4 = iVar4 + 1;
        fVar1 = param_1;
      } while (param_1 < DAT_10014910);
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
      goto LAB_100078fd;
    }
  }
  fVar1 = param_1;
LAB_100078fd:
  return (longdouble)fVar1;
}

#undef DAT_100148d0
#undef DAT_10014910
#undef DAT_10014960
#undef DAT_10014968
#undef DAT_10014970

#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10014910
#define DAT_10014910 (*(float *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_10014960
#define DAT_10014960 (*(float *)(((uintptr_t)pf_module_state + 0x9eU)))
#undef DAT_10014968
#define DAT_10014968 (*(double *)(((uintptr_t)pf_module_state + 0xa6U)))
#undef DAT_10014970
#define DAT_10014970 (*(double *)(((uintptr_t)pf_module_state + 0xaeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007910
 */

longdouble recovered_10007910(longdouble param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  int iVar2;
  int iVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;

  lVar4 = (longdouble)(double)param_1;
  if (!NAN(lVar4)) {
    if ((longdouble)DAT_10014968 < lVar4) {
      return (longdouble)DAT_10014960;
    }
    if (lVar4 < (longdouble)DAT_10014970) {
      return (longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_100148d0;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_10014910) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_100148d0;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_10014910);
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

#undef DAT_100148d0
#undef DAT_10014910
#undef DAT_10014960
#undef DAT_10014968
#undef DAT_10014970

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a00
 */

longdouble recovered_10007a00(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longdouble)param_1 - (longdouble)param_2;
}


#undef DAT_100148d0
#define DAT_100148d0 (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10014910
#define DAT_10014910 (*(float *)(((uintptr_t)pf_module_state + 0x4eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a30
 */

double recovered_10007a30(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10003210(value);
  if ((double)DAT_100148d0 <= value - dVar2) {
    dVar1 = 1.0;
  }
  else {
    if ((double)DAT_10014910 < value - dVar2) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar1 + dVar2;
}

#undef DAT_100148d0
#undef DAT_10014910

#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a90
 */

ulonglong recovered_10007a90(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_10007b43;
    }
  }
  else {
    if (param_3 != 0) {
      local_18 = param_3;
      goto LAB_10007b43;
    }
    if (*pbVar7 != 0x30) {
      local_18 = 10;
      goto LAB_10007b43;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_18 = 8;
      goto LAB_10007b43;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_18 = 0x10;
LAB_10007b43:
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
 * Address: 0x10007bd0
 */

void recovered_10007bd0(byte *in_stack_00000004,undefined4 *in_stack_00000008,uint in_stack_0000000c
                       )

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007a90(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


#define local_38 (*(byte * *)(pf_stack_frame + 24))
#define local_34 (*(byte * *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
#define local_20 (*(uint *)(pf_stack_frame + 48))
#define local_1c (*(byte * *)(pf_stack_frame + 52))
#define local_18 (*(byte * (*)[6])(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bf0
 */

undefined4 recovered_10007bf0(int in_ECX,byte *in_EDX,undefined2 *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;

  local_2c = 0x10007c05;
  pbVar11 = *(byte **)(in_ECX + 0x1c);
  if (pbVar11 != (byte *)0x0) {
    local_38 = pbVar11 + 1;
    if (*pbVar11 != 0xff) {
      recovered_10007f80((uint)*pbVar11,(int *)&local_38);
    }
    local_30 = (uint)*local_38;
    local_34 = (byte *)0x0;
    if (local_30 != 0xff) {
      bVar8 = 0;
      uVar6 = 0;
      pbVar11 = local_38 + 1;
      do {
        local_38 = pbVar11;
        uVar6 = uVar6 | (*local_38 & 0x7f) << (bVar8 & 0x1f);
        bVar8 = bVar8 + 7;
        pbVar11 = local_38 + 1;
      } while ((char)*local_38 < '\0');
      local_34 = local_38 + 1 + uVar6;
    }
    bVar8 = 0;
    local_38 = local_38 + 2;
    uVar6 = 0;
    pbVar11 = local_38;
    do {
      bVar1 = *pbVar11;
      uVar6 = uVar6 | (bVar1 & 0x7f) << (bVar8 & 0x1f);
      pbVar11 = pbVar11 + 1;
      bVar8 = bVar8 + 7;
    } while ((char)bVar1 < '\0');
    if ((0 < *(int *)(in_ECX + 4)) && (0 < (int)uVar6)) {
      local_1c = pbVar11 + uVar6;
      iVar9 = 0;
      do {
        bVar8 = 0;
        uVar6 = 0;
        do {
          bVar1 = *pbVar11;
          uVar6 = uVar6 | (bVar1 & 0x7f) << (bVar8 & 0x1f);
          pbVar11 = pbVar11 + 1;
          bVar8 = bVar8 + 7;
        } while ((char)bVar1 < '\0');
        bVar8 = 0;
        uVar7 = 0;
        do {
          bVar1 = *pbVar11;
          uVar7 = uVar7 | (bVar1 & 0x7f) << (bVar8 & 0x1f);
          pbVar11 = pbVar11 + 1;
          bVar8 = bVar8 + 7;
        } while ((char)bVar1 < '\0');
        if (iVar9 == *(int *)(in_ECX + 4) + -1) {
          *param_3 = 1;
          *(undefined1 *)(param_3 + 1) = 0;
          *(uint *)(param_3 + 2) = uVar6;
          *(undefined4 *)(param_3 + 4) = 0;
          if (uVar7 == 0) {
            *(undefined1 *)((int)param_3 + 1) = 1;
            return 0;
          }
          local_1c = local_1c + (uVar7 - 1);
          bVar16 = local_34 == (byte *)0x0;
          local_28 = local_30 & 0xf;
          bVar8 = (byte)local_28;
          local_24 = 0x1c1dU >> bVar8 ^ 1;
          local_20 = 0;
          goto LAB_10007da0;
        }
        iVar9 = iVar9 + 1;
      } while (pbVar11 < local_1c);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  return 0;
LAB_10007da0:
  uVar7 = 0;
  uVar6 = 0;
  do {
    bVar1 = *local_1c;
    uVar7 = uVar7 | (bVar1 & 0x7f) << ((byte)uVar6 & 0x1f);
    local_1c = local_1c + 1;
    uVar6 = uVar6 + 7;
  } while ((char)bVar1 < '\0');
  uVar12 = -1 << ((byte)uVar6 & 0x1f);
  uVar15 = 0;
  uVar10 = 0;
  pbVar11 = local_1c;
  do {
    bVar2 = *pbVar11;
    uVar15 = uVar15 | (bVar2 & 0x7f) << ((byte)uVar10 & 0x1f);
    pbVar11 = pbVar11 + 1;
    uVar10 = uVar10 + 7;
  } while ((char)bVar2 < '\0');
  if (bVar1 < 0x40) {
    uVar12 = 0;
  }
  if (0x1f < uVar6) {
    uVar12 = 0;
  }
  uVar6 = -1 << ((byte)uVar10 & 0x1f);
  if (bVar2 < 0x40) {
    uVar6 = 0;
  }
  if (0x1f < uVar10) {
    uVar6 = 0;
  }
  uVar7 = uVar7 | uVar12;
  if (uVar7 == 0) {
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else if (0 < (int)uVar7) {
    if ((0xc < bVar8 || bVar16) || ((local_24 & 1) != 0)) {
LAB_10007f5e:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar7;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
    local_18[0] = local_34 + *(int *)(local_2c + 0xcd77 + local_28 * 4) * uVar7;
    pbVar11 = recovered_10007f80(local_30,(int *)local_18);
    if (pbVar11 == (byte *)0x0) goto LAB_10007f5e;
    bVar17 = in_EDX != (byte *)0x0;
    if ((in_EDX != (byte *)0x0) && (pbVar11 != in_EDX)) {
      iVar9 = *(int *)(pbVar11 + 4);
      pbVar13 = in_EDX;
      do {
        iVar5 = *(int *)(pbVar13 + 4);
        if ((iVar9 == 0) || (iVar5 == 0)) {
          if (iVar5 == iVar9) goto LAB_10007f5e;
        }
        else {
          iVar14 = 0;
          do {
            cVar3 = *(char *)(iVar5 + iVar14);
            cVar4 = *(char *)(iVar9 + iVar14);
            if ((cVar3 == '\0') || (cVar4 == '\0')) {
              if (cVar3 == cVar4) goto LAB_10007f5e;
              break;
            }
            iVar14 = iVar14 + 1;
          } while (cVar3 == cVar4);
        }
        if (*(int *)pbVar13 != local_2c + 0xd45f) goto LAB_10007f37;
        pbVar13 = *(byte **)(pbVar13 + 8);
        bVar17 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar11) && (pbVar13 != (byte *)0x0));
    }
    if (bVar17) goto LAB_10007f5e;
  }
LAB_10007f37:
  if ((uVar15 | uVar6) == 0) {
    return 0;
  }
  local_1c = local_1c + (uVar15 | uVar6);
  bVar17 = 0x3e < local_20;
  local_20 = local_20 + 1;
  if (bVar17) {
    return 0;
  }
  goto LAB_10007da0;
}

#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f80
 */

byte * recovered_10007f80(uint in_ECX,int *in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort *puVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  ushort *puVar7;
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
    goto LAB_10008065;
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
    goto LAB_10008065;
  case 0x4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_10007fbf_caseD_5;
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
LAB_10008065:
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
switchD_10007fbf_caseD_5:
  return pbVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080d0
 */

int recovered_100080d0(char *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_2 == 0 || param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 < 2) goto LAB_1000814b;
  }
  else {
    iVar1 = recovered_100028d0((int)param_1,((uintptr_t)pf_module_state+0xf2U),8);
    if (iVar1 == 0) {
      return 1;
    }
  }
  if ((*param_1 == 'B') && (param_1[1] == 'M')) {
    return 2;
  }
  if ((0xd < param_2) && (iVar1 = recovered_100028d0((int)param_1,((uintptr_t)pf_module_state+0x4d7U),9), iVar1 == 0)) {
    return 4;
  }
LAB_1000814b:
  uVar2 = recovered_10008170((byte *)param_1,param_2);
  return (uVar2 & 0xff) * 3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008170
 */

undefined4 recovered_10008170(byte *in_ECX,uint in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if (0x11 < in_EDX) {
    if (((0x19 < in_EDX) &&
        (iVar4 = recovered_100028d0((int)(in_ECX + (in_EDX - 0x12)),((uintptr_t)pf_module_state+0x4eeU),0x11), iVar4 == 0))
       && ((in_ECX + in_EDX)[-1] == 0)) {
      return CONCAT31((int3)((uint)(in_ECX + in_EDX) >> 8),1);
    }
    bVar1 = in_ECX[1];
    if (bVar1 < 2) {
      bVar2 = in_ECX[2];
      if (((byte)(bVar2 - 0xb) < 0xfe && (byte)(bVar2 - 4) < 0xfd) && bVar2 != 0xb) {
        return 0;
      }
      if (*(short *)(in_ECX + 0xc) == 0) {
        return 0;
      }
      if (*(short *)(in_ECX + 0xe) == 0) {
        return 0;
      }
      uVar3 = *(ushort *)(in_ECX + 5);
      if (bVar1 != 0 || uVar3 == 0) {
        uVar5 = (uint)in_ECX[0x10];
        if (bVar1 == 1) {
          if (uVar3 == 0) {
            return 0;
          }
          uVar6 = in_ECX[7] - 0xf;
          if (0x11 < uVar6) {
            return 0;
          }
          if ((0x20203U >> (uVar6 & 0x1f) & 1) == 0) {
            return 0;
          }
        }
        uVar6 = bVar2 - 8;
        if (bVar2 < 8) {
          uVar6 = (uint)bVar2;
        }
        if (uVar6 == 3) {
          if ((uVar5 != 0x10) && (uVar5 != 8)) {
            return 0;
          }
        }
        else if (uVar6 == 2) {
          if (0x11 < uVar5 - 0xf) {
            return 0;
          }
          if ((0x20203U >> (uVar5 - 0xf & 0x1f) & 1) == 0) {
            return 0;
          }
        }
        else if (((uVar6 == 1) && (uVar5 != 8)) && (uVar5 != 0x10)) {
          return 0;
        }
        iVar4 = 0;
        if (bVar1 == 1) {
          iVar4 = (in_ECX[7] + 7 >> 3) * (uint)uVar3;
        }
        uVar5 = *in_ECX + 0x12 + iVar4;
        return CONCAT31((int3)(uVar5 >> 8),uVar5 < in_EDX);
      }
    }
  }
  return 0;
}


#undef DAT_10014dcc
#define DAT_10014dcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50aU)))
#undef DAT_10014e40
#define DAT_10014e40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57eU)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define local_180 (*(uint ******* *)(pf_stack_frame + 160))
#define local_17c (*(uint ******* *)(pf_stack_frame + 164))
#define local_178 (*(uint *)(pf_stack_frame + 168))
#define local_174 (*(uint ******* *)(pf_stack_frame + 172))
#define local_170 (*(int *)(pf_stack_frame + 176))
#define local_16c (*(uint * *)(pf_stack_frame + 180))
#define local_164 (*(int *)(pf_stack_frame + 188))
#define local_15c (*(uint ******* *)(pf_stack_frame + 196))
#define local_158 (*(uint *)(pf_stack_frame + 200))
#define local_154 (*(uint *)(pf_stack_frame + 204))
#define local_150 (*(uint ******* *)(pf_stack_frame + 208))
#define local_14c (*(uint ******* *)(pf_stack_frame + 212))
#define local_148 (*(uint ******* *)(pf_stack_frame + 216))
#define local_144 (*(uint ******* *)(pf_stack_frame + 220))
#define local_140 (*(uint ******* *)(pf_stack_frame + 224))
#define local_13c (*(uint ******* *)(pf_stack_frame + 228))
#define local_138 (*(uint *)(pf_stack_frame + 232))
#define local_134 (*(uint *)(pf_stack_frame + 236))
#define local_130 (*(uint *)(pf_stack_frame + 240))
#define local_12c (*(undefined4 *)(pf_stack_frame + 244))
#define local_128 (*(undefined4 *)(pf_stack_frame + 248))
#define local_124 (*(undefined4 *)(pf_stack_frame + 252))
#define local_120 (*(undefined4 *)(pf_stack_frame + 256))
#define local_11c (*(undefined4 *)(pf_stack_frame + 260))
#define local_108 (*(undefined * *)(pf_stack_frame + 280))
#define local_104 (*(undefined * *)(pf_stack_frame + 284))
#define local_100 (*(undefined1 * *)(pf_stack_frame + 288))
#define auStackY_210 (*(undefined1 (*)[528])(pf_stack_frame + 16))
#define local_fc (*(undefined4 *)(pf_stack_frame + 292))
#define local_f8 (*(undefined1 * *)(pf_stack_frame + 296))
#define local_e8 (*(void * *)(pf_stack_frame + 312))
#define local_e4 (*(uint *)(pf_stack_frame + 316))
#define local_e0 (*(undefined * *)(pf_stack_frame + 320))
#define local_dc (*(uint ******* *)(pf_stack_frame + 324))
#define local_d8 (*(uint ******* *)(pf_stack_frame + 328))
#define local_d4 (*(uint * *)(pf_stack_frame + 332))
#define local_d0 (*(uint * *)(pf_stack_frame + 336))
#define local_cc (*(uint ******** *)(pf_stack_frame + 340))
#define local_c8 (*(void ** *)(pf_stack_frame + 344))
#define local_c4 (*(uint ******** *)(pf_stack_frame + 348))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 352))
#define local_bc (*(uint ******** *)(pf_stack_frame + 356))
#define local_b8 (*(uint * *)(pf_stack_frame + 360))
#define local_b4 (*(uint ******** *)(pf_stack_frame + 364))
#define local_b0 (*(uint *)(pf_stack_frame + 368))
#define local_ac (*(undefined4 *)(pf_stack_frame + 372))
#define local_a8 (*(uint ******** *)(pf_stack_frame + 376))
#define local_a4 (*(uint *)(pf_stack_frame + 380))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 384))
#define local_9c (*(void * *)(pf_stack_frame + 388))
#define local_98 (*(undefined4 *)(pf_stack_frame + 392))
#define local_94 (*(undefined4 *)(pf_stack_frame + 396))
#define local_90 (*(void * *)(pf_stack_frame + 400))
#define local_8c (*(int *)(pf_stack_frame + 404))
#define local_88 (*(undefined4 *)(pf_stack_frame + 408))
#define local_84 (*(undefined * *)(pf_stack_frame + 412))
#define local_80 (*(uint ******* *)(pf_stack_frame + 416))
#define local_7c (*(int *)(pf_stack_frame + 420))
#define local_74 (*(uint * *)(pf_stack_frame + 428))
#define local_70 (*(uint *)(pf_stack_frame + 432))
#define local_6c (*(uint ******* *)(pf_stack_frame + 436))
#define local_68 (*(uint ******* *)(pf_stack_frame + 440))
#define local_64 (*(uint ****** *)(pf_stack_frame + 444))
#define local_60 (*(void * *)(pf_stack_frame + 448))
#define local_5c (*(undefined4 *)(pf_stack_frame + 452))
#define local_58 (*(undefined4 *)(pf_stack_frame + 456))
#define local_54 (*(uint ******* *)(pf_stack_frame + 460))
#define local_50 (*(int *)(pf_stack_frame + 464))
#define local_4c (*(int *)(pf_stack_frame + 468))
#define local_48 (*(uint *)(pf_stack_frame + 472))
#define local_44 (*(int *)(pf_stack_frame + 476))
#define local_40 (*(uint *)(pf_stack_frame + 480))
#define local_3c (*(uint *)(pf_stack_frame + 484))
#define local_38 (*(uint *)(pf_stack_frame + 488))
#define local_34 (*(uint *)(pf_stack_frame + 492))
#define local_30 (*(uint ****** *)(pf_stack_frame + 496))
#define local_2c (*(uint *)(pf_stack_frame + 500))
#define local_28 (*(uint ******* *)(pf_stack_frame + 504))
#define local_24 (*(int *)(pf_stack_frame + 508))
#define local_20 (*(uint *)(pf_stack_frame + 512))
#define local_1c (*(uint *)(pf_stack_frame + 516))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 520))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082f0
 */

uint recovered_100082f0(uint *******param_1,uint *******param_2,int *param_3)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  uint ********ppppppppuVar1;
  undefined *puVar2;
  byte *data;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uchar uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *******pppppppuVar12;
  int *piVar13;
  uint *******pppppppuVar14;
  uint ******ppppppuVar15;
  uint *********pppppppppuVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint *******pppppppuVar21;
  ushort *puVar22;
  uint uVar23;
  undefined *puVar24;
  short sVar25;
  uint *******pppppppuVar26;
  void *pvVar27;
  uint uVar28;
  uint ********ppppppppuVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  uint *******pppppppuVar33;
  undefined *count;
  bool bVar34;
  bool bVar35;
  undefined8 uVar36;

  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  recovered_10006d50((void *)param_3[2]);
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  recovered_10006d50((void *)0x0);
  local_f8 = auStackY_210 + 0x80;
  local_108 = PTR_recovered_10006c80_10015008;
  local_104 = &DAT_10014e40;
  local_fc = 0x23c1;
  local_100 = (undefined1 *)(local_18 + 5);
  recovered_100072f0(&local_120);
  if (param_2 == (uint *******)0x0 || param_1 == (uint *******)0x0) goto LAB_10008a2e;
  ppppppppuVar1 = (uint ********)(param_3 + 2);
  if ((uint *******)0x7 < param_2) {
    local_11c = 0xffffffff;
    iVar30 = recovered_100028d0((int)param_1,((uintptr_t)pf_module_state+0xf2U),8);
    if (iVar30 != 0) goto LAB_100083f5;
    pppppppuVar26 = (uint *******)0x4;
    do {
      pppppppuVar14 = pppppppuVar26;
      pppppppuVar26 = (uint *******)((int)(uintptr_t)pppppppuVar14 * 2);
    } while (pppppppuVar14 < param_2);
    local_11c = 0xffffffff;
    local_e8 = recovered_10006cf0((uint)pppppppuVar14);
    recovered_10006d50((void *)0x0);
    pppppppuVar26 = (uint *******)0x0;
    do {
      *(undefined1 *)((int)local_e8 + (int)pppppppuVar26) =
           *(undefined1 *)((int)param_1 + (int)pppppppuVar26);
      pppppppuVar26 = (uint *******)((int)pppppppuVar26 + 1);
    } while (param_2 != pppppppuVar26);
    local_dc = (uint *******)0x0;
    local_d8 = (uint *******)0x0;
    local_d4 = (uint *)0x0;
    local_d0 = (uint *)0x0;
    local_cc = (uint ********)0x0;
    local_c8 = (void **)0x0;
    local_c4 = (uint ********)0x0;
    local_c0 = (uint *)((uint)PF_PART1(local_c0, 3) << 0x18);
    local_bc = (uint ********)0x0;
    local_b8 = (uint *)0x0;
    recovered_10006d50((void *)0x0);
    local_b4 = (uint ********)0x0;
    local_b0 = 0;
    local_ac = 0;
    recovered_10006d50((void *)0x0);
    local_a8 = (uint ********)0x0;
    local_a4 = 0;
    local_a0 = 0;
    recovered_10006d50((void *)0x0);
    local_9c = (void *)0x0;
    local_98 = 0;
    local_94 = 0;
    recovered_10006d50((void *)0x0);
    local_90 = (void *)0x0;
    local_8c = 0;
    local_88 = 0;
    recovered_10006d50((void *)0x0);
    recovered_10006d50((void *)0x0);
    recovered_10006d50((void *)0x0);
    recovered_10006d50((void *)0x0);
    local_11c = 0x10;
    iVar30 = recovered_100028d0((int)local_e8,((uintptr_t)pf_module_state+0xf2U),8);
    if (iVar30 == 0) {
      if ((uint *******)0x13 < param_2) {
        puVar24 = (undefined *)0x8;
        bVar34 = false;
        local_e0 = &DAT_10014dcc;
LAB_10009328:
        uVar11 = *(uint *)((int)local_e8 + (int)puVar24);
        count = (undefined *)
                (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
                );
        puVar2 = puVar24 + 8;
        if ((undefined *)((int)param_2 - (int)puVar2) < count + 4) goto LAB_100088fd;
        data = (byte *)((int)local_e8 + (int)(puVar24 + 4));
        pppppppuVar26 = (uint *******)((int)local_e8 + (int)puVar2);
        uVar11 = *(uint *)((int)local_e8 + (int)(count + (int)puVar2));
        uVar20 = recovered_10013fa0(0,data,4);
        if (count != (undefined *)0x0) {
          uVar20 = recovered_10013fa0(uVar20,(uchar *)pppppppuVar26,(uint)count);
        }
        if (uVar20 != (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                      uVar11 << 0x18)) goto LAB_100088fd;
        if ((char)local_c0 == '\0') {
          local_11c = 0x11;
          iVar32 = recovered_100028d0((int)data,((uintptr_t)pf_module_state+0x4e4U),4);
          local_180 = (uint *******)0x0;
          iVar30 = local_8c;
          if ((count != (undefined *)0xd) || (iVar32 != 0)) goto joined_r0x10009ae1;
          ppppppuVar15 = *pppppppuVar26;
          local_dc = (uint *******)
                     ((uint)ppppppuVar15 >> 0x18 | ((uint)ppppppuVar15 & 0xff0000) >> 8 |
                      ((uint)ppppppuVar15 & 0xff00) << 8 | (int)ppppppuVar15 << 0x18);
          ppppppuVar15 = pppppppuVar26[1];
          local_d8 = (uint *******)
                     ((uint)ppppppuVar15 >> 0x18 | ((uint)ppppppuVar15 & 0xff0000) >> 8 |
                      ((uint)ppppppuVar15 & 0xff00) << 8 | (int)ppppppuVar15 << 0x18);
          bVar3 = *(byte *)(pppppppuVar26 + 2);
          local_d4 = (uint *)(uint)bVar3;
          local_180 = (uint *******)0x0;
          local_d0 = (uint *)(uint)*(byte *)((int)pppppppuVar26 + 9);
          local_cc = (uint ********)(uint)*(byte *)((int)pppppppuVar26 + 10);
          local_c8 = (void **)(uint)*(byte *)((int)pppppppuVar26 + 0xb);
          local_c4 = (uint ********)(uint)*(byte *)(pppppppuVar26 + 3);
          local_c0 = (uint *)CONCAT31(PF_PART3(local_c0, 1),1);
          if ((local_dc == (uint *******)0x0) ||
             ((local_d8 == (uint *******)0x0 ||
              (local_180 = (uint *******)0x0, (uint *)0x6 < local_d0)))) goto joined_r0x10009ae1;
          if ((0x55U >> ((uint)local_d0 & 0x1f) & 1) == 0) {
            if (local_d0 != (uint *)0x3) goto joined_r0x10009ae1;
            bVar35 = bVar3 == 8;
          }
          else {
            bVar35 = (bVar3 - 8 & 0xf7) == 0;
          }
          local_180 = (uint *******)0x0;
          if ((((!bVar35) || (*(byte *)((int)pppppppuVar26 + 10) != 0)) ||
              (*(byte *)((int)pppppppuVar26 + 0xb) != 0)) || (1 < *(byte *)(pppppppuVar26 + 3)))
          goto joined_r0x10009ae1;
        }
        else {
          local_11c = 0x12;
          iVar30 = recovered_100028d0((int)data,((uintptr_t)pf_module_state+0x505U),4);
          if (iVar30 == 0) {
            if (((count != (undefined *)0x8) || (bVar34)) || (PF_PART1(local_c0, 2) != '\0'))
            goto LAB_100088fd;
            PF_PART3(local_c0, 0) = CONCAT12(1,(undefined2)local_c0);
            ppppppuVar15 = *pppppppuVar26;
            local_bc = (uint ********)
                       ((uint)ppppppuVar15 >> 0x18 | ((uint)ppppppuVar15 & 0xff0000) >> 8 |
                        ((uint)ppppppuVar15 & 0xff00) << 8 | (int)ppppppuVar15 << 0x18);
          }
          else {
            local_11c = 0x13;
            iVar30 = recovered_100028d0((int)data,(int)local_e0,4);
            if (iVar30 == 0) {
              if ((count != (undefined *)0x1a) || (PF_PART1(local_c0, 2) != '\x01')) goto LAB_100088fd;
              local_12c = 0;
              local_128 = 0;
              local_124 = 0;
              ppppppuVar15 = pppppppuVar26[1];
              local_148 = (uint *******)
                          ((uint)ppppppuVar15 >> 0x18 | ((uint)ppppppuVar15 & 0xff0000) >> 8 |
                           ((uint)ppppppuVar15 & 0xff00) << 8 | (int)ppppppuVar15 << 0x18);
              ppppppuVar15 = pppppppuVar26[2];
              local_144 = (uint *******)
                          ((uint)ppppppuVar15 >> 0x18 | ((uint)ppppppuVar15 & 0xff0000) >> 8 |
                           ((uint)ppppppuVar15 & 0xff00) << 8 | (int)ppppppuVar15 << 0x18);
              ppppppuVar15 = pppppppuVar26[3];
              local_140 = (uint *******)
                          ((uint)ppppppuVar15 >> 0x18 | ((uint)ppppppuVar15 & 0xff0000) >> 8 |
                           ((uint)ppppppuVar15 & 0xff00) << 8 | (int)ppppppuVar15 << 0x18);
              ppppppuVar15 = pppppppuVar26[4];
              local_13c = (uint *******)
                          ((uint)ppppppuVar15 >> 0x18 | ((uint)ppppppuVar15 & 0xff0000) >> 8 |
                           ((uint)ppppppuVar15 & 0xff00) << 8 | (int)ppppppuVar15 << 0x18);
              local_138 = (uint)*(byte *)(pppppppuVar26 + 6);
              local_134 = (uint)*(byte *)((int)pppppppuVar26 + 0x19);
              local_130 = CONCAT31(PF_PART3(local_130, 1),~bVar34 & local_8c == 0);
              if (((((local_148 == (uint *******)0x0) ||
                    (((local_144 == (uint *******)0x0 || (local_dc < local_140)) ||
                     ((uint *******)((int)local_dc - (int)local_140) < local_148)))) ||
                   ((local_d8 < local_13c ||
                    ((undefined *)((int)local_d8 - (int)local_13c) < local_144)))) ||
                  (2 < *(byte *)(pppppppuVar26 + 6))) || (1 < *(byte *)((int)pppppppuVar26 + 0x19)))
              {
                recovered_10006d50((void *)0x0);
                goto LAB_100088fd;
              }
              local_11c = 0x14;
              recovered_100140d0((int *)&local_90,&local_148);
              recovered_10006d50((void *)0x0);
            }
            else {
              local_11c = 0x15;
              iVar30 = recovered_100028d0((int)data,((uintptr_t)pf_module_state+0x50fU),4);
              if (iVar30 == 0) {
                if (count == (undefined *)0x0) goto LAB_100088fd;
                local_180 = (uint *******)0x0;
                iVar30 = local_8c;
                if ((undefined *)0x300 < count) goto joined_r0x10009ae1;
                puVar17 = &local_b0;
                pppppppppuVar16 = &local_b4;
                if (count != (undefined *)(((uint)count / 3) * 3)) goto joined_r0x10009ae1;
              }
              else {
                local_11c = 0x17;
                iVar30 = recovered_100028d0((int)data,((uintptr_t)pf_module_state+0x514U),4);
                if (iVar30 != 0) {
                  local_11c = 0x18;
                  iVar30 = recovered_100028d0((int)data,((uintptr_t)pf_module_state+0x519U),4);
                  if (iVar30 == 0) {
                    bVar34 = true;
                    if (count != (undefined *)0x0) {
                      local_11c = 0x19;
                      local_148 = pppppppuVar26;
                      local_144 = (uint *******)count;
                      recovered_100142f0((int *)&local_9c,&local_148);
                      if ((local_8c != 0) &&
                         (*(char *)((int)local_90 + local_8c * 0x28 + -0x10) == '\x01')) {
                        local_11c = 0x1a;
                        recovered_100142f0((int *)((int)local_90 + local_8c * 0x28 + -0xc),
                                           &local_148);
                      }
                      local_b8 = (uint *)((int)local_b8 + (int)count);
                    }
                  }
                  else {
                    local_11c = 0x1b;
                    iVar30 = recovered_100028d0((int)data,((uintptr_t)pf_module_state+0x51eU),4);
                    if (iVar30 == 0) {
                      if (PF_PART1(local_c0, 2) == '\x01') {
                        if (((undefined *)0x4 < count) && (local_8c != 0)) {
                          local_148 = pppppppuVar26 + 1;
                          local_144 = (uint *******)(count + -4);
                          local_11c = 0x1c;
                          recovered_10014390((int *)((int)local_90 + local_8c * 0x28 + -0xc),
                                             &local_148);
                          goto LAB_1000930a;
                        }
                        goto LAB_10009ad7;
                      }
                      goto LAB_100088fd;
                    }
                    local_11c = 0x1d;
                    iVar30 = recovered_100028d0((int)data,((uintptr_t)pf_module_state+0x4e9U),4);
                    if (iVar30 == 0) {
                      if (count != (undefined *)0x0) goto LAB_100088fd;
                      PF_PART2(local_c0, 0) = CONCAT11(1,(char)local_c0);
                      goto LAB_10008a6a;
                    }
                    if ((*data & 0x20) == 0) goto LAB_100088fd;
                  }
                  goto LAB_1000930a;
                }
                if ((count != (undefined *)0x2 && local_d0 == (uint *)0x0) ||
                   (count != (undefined *)0x6 && local_d0 == (uint *)0x2)) goto LAB_100088fd;
                if (local_d0 == (uint *)0x3) {
                  puVar17 = &local_a4;
                  pppppppppuVar16 = &local_a8;
                  if ((undefined *)(local_b0 / 3) < count) goto LAB_100088fd;
                }
                else {
                  local_180 = (uint *******)0x0;
                  iVar30 = local_8c;
                  if (local_d0 == (uint *)0x4) goto joined_r0x10009ae1;
                  puVar17 = &local_a4;
                  pppppppppuVar16 = &local_a8;
                  if (local_d0 == (uint *)0x6) goto joined_r0x10009ae1;
                }
              }
              *puVar17 = 0;
              local_11c = 0x16;
              recovered_100114c0((int *)pppppppppuVar16,(int)*pppppppppuVar16,
                                 (undefined1 *)pppppppuVar26,count + (int)pppppppuVar26);
            }
          }
        }
LAB_1000930a:
        puVar24 = count + 4 + (int)puVar2;
        if (param_2 < count + (int)puVar2 + 0x10) goto LAB_10008a6a;
        goto LAB_10009328;
      }
LAB_10008a6a:
      if ((char)local_c0 != '\x01') goto LAB_100088fd;
      local_180 = (uint *******)0x0;
      iVar30 = local_8c;
      if ((PF_PART1(local_c0, 1) != '\x01') || (local_b8 == (uint *)0x0)) goto joined_r0x10009ae1;
      if ((local_d0 == (uint *)0x3) && (local_b0 == 0)) goto LAB_100088fd;
      if (PF_PART1(local_c0, 2) == '\x01') {
        if (local_bc == (uint ********)0x0) goto LAB_100088fd;
        if (local_bc <= (uint ********)(local_8c - 1U)) {
LAB_10009ad7:
          local_180 = (uint *******)0x0;
          iVar30 = local_8c;
          goto joined_r0x10009ae1;
        }
        iVar30 = local_8c * 0x28;
        piVar13 = (int *)((int)local_90 + 0x20);
        do {
          if (*piVar13 == 0) goto LAB_100088fd;
          piVar13 = piVar13 + 10;
          iVar30 = iVar30 + -0x28;
        } while (iVar30 != 0);
      }
      recovered_10006d50((void *)0x0);
      local_148 = (uint *******)0x0;
      local_144 = (uint *******)0x0;
      local_140 = (uint *******)0x0;
      local_13c = (uint *******)0x0;
      local_138 = 0;
      local_134 = 0;
      local_130 = 0;
      local_12c = local_12c & 0xffff0000;
      recovered_10006d50((void *)0x0);
      uVar11 = local_b0;
      if (local_d0 == (uint *)0x0) {
        pppppppuVar26 = (uint *******)0x0;
        if (local_a4 != 0) {
          if (local_a4 != 2) goto LAB_10009ce9;
          local_13c = (uint *******)
                      (uint)(ushort)(*(ushort *)local_a8 << 8 | *(ushort *)local_a8 >> 8);
          local_12c = CONCAT31(PF_PART3(local_12c, 1),1);
        }
LAB_10009e93:
        local_15c = (uint *******)0x0;
        local_158 = 0;
        local_154 = 0;
        local_28 = pppppppuVar26;
        if ((PF_PART1(local_c0, 2) == '\x01') && (local_8c != 0)) {
          local_11c = 0x1f;
          local_180 = (uint *******)
                      recovered_1000a950((uint *)&local_dc,(int)&local_148,(int *)&local_15c);
        }
        else {
          local_11c = 0x20;
          local_180 = (uint *******)
                      recovered_1000ad90((uint *)&local_dc,(uint *)&local_9c,(int)&local_148,
                                         (int *)&local_15c);
        }
        if ((char)local_180 == '\0') {
          pppppppuVar26 = local_15c;
        }
        else {
          *param_3 = (int)local_dc;
          param_3[1] = (int)local_d8;
          param_3[3] = 0;
          recovered_10006d50((void *)param_3[2]);
          param_3[2] = (int)local_15c;
          param_3[3] = local_158;
          param_3[4] = local_154;
          pppppppuVar26 = (uint *******)0x0;
        }
        recovered_10006d50(pppppppuVar26);
        pppppppuVar26 = local_28;
      }
      else {
        if (local_d0 == (uint *)0x2) {
          pppppppuVar26 = (uint *******)0x0;
          if (local_a4 != 0) {
            if (local_a4 != 6) goto LAB_10009ce9;
            local_138 = (uint)(ushort)(*(ushort *)local_a8 << 8 | *(ushort *)local_a8 >> 8);
            local_134 = (uint)(ushort)(*(ushort *)((int)local_a8 + 2) << 8 |
                                      *(ushort *)((int)local_a8 + 2) >> 8);
            local_130 = (uint)(ushort)(*(ushort *)(local_a8 + 1) << 8 |
                                      *(ushort *)(local_a8 + 1) >> 8);
            PF_PART2(local_12c, 0) = CONCAT11(1,(undefined1)local_12c);
          }
          goto LAB_10009e93;
        }
        if (local_d0 == (uint *)0x3) {
          if (local_b0 == 0) {
LAB_10009ce9:
            pppppppuVar26 = (uint *******)0x0;
            local_180 = (uint *******)0x0;
          }
          else {
            uVar20 = local_b0 / 3;
            local_180 = (uint *******)0x0;
            pppppppuVar26 = (uint *******)0x0;
            if (local_b0 % 3 == 0) {
              pppppppuVar14 = (uint *******)(uVar20 * 4);
              local_144 = (uint *******)0x0;
              if (pppppppuVar14 == (uint *******)0x0) {
                pppppppuVar26 = (uint *******)0x0;
              }
              else {
                local_11c = 0x1e;
                pppppppuVar26 = recovered_10006cf0((uint)pppppppuVar14);
                recovered_10006d50((void *)0x0);
                local_144 = (uint *******)0x0;
                do {
                  *(undefined1 *)((int)pppppppuVar26 + (int)local_144) = 0xff;
                  local_144 = (uint *******)((int)local_144 + 1);
                } while (local_144 < pppppppuVar14);
                local_148 = pppppppuVar26;
                local_140 = pppppppuVar14;
              }
              if (2 < uVar11) {
                puVar18 = (undefined1 *)((int)pppppppuVar26 + 2);
                puVar19 = (undefined1 *)((int)local_b4 + 2);
                do {
                  puVar18[-2] = puVar19[-2];
                  puVar18[-1] = puVar19[-1];
                  *puVar18 = *puVar19;
                  puVar18 = puVar18 + 4;
                  puVar19 = puVar19 + 3;
                  uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
              }
              if (local_a4 != 0) {
                uVar11 = 0;
                do {
                  *(undefined1 *)((int)pppppppuVar26 + (uintptr_t)(uintptr_t)uVar11 * 4 + 3) =
                       *(undefined1 *)((int)local_a8 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (uVar11 < local_a4);
              }
              goto LAB_10009e93;
            }
          }
        }
        else {
          pppppppuVar26 = (uint *******)0x0;
          local_180 = (uint *******)0x0;
          if (local_a4 == 0) goto LAB_10009e93;
        }
      }
      local_144 = (uint *******)0x0;
      recovered_10006d50(pppppppuVar26);
      iVar30 = local_8c;
    }
    else {
LAB_100088fd:
      local_180 = (uint *******)0x0;
      iVar30 = local_8c;
    }
joined_r0x10009ae1:
    if (iVar30 != 0) {
      iVar32 = iVar30 * 0x28 + -8;
      local_8c = iVar30;
      do {
        *(undefined4 *)((int)local_90 + iVar32) = 0;
        recovered_10006d50(*(void **)((int)local_90 + iVar32 + -4));
        iVar32 = iVar32 + -0x28;
        iVar30 = iVar30 + -1;
      } while (iVar30 != 0);
    }
    local_8c = 0;
    recovered_10006d50(local_90);
    local_98 = 0;
    recovered_10006d50(local_9c);
    local_a4 = 0;
    recovered_10006d50(local_a8);
    local_b0 = 0;
    recovered_10006d50(local_b4);
    recovered_10006d50(local_e8);
    goto LAB_10008a34;
  }
  if ((uint *******)0x1 < param_2) {
LAB_100083f5:
    if ((*(char *)param_1 != 'B') || (*(char *)((int)param_1 + 1) != 'M')) {
      if ((uint *******)0xd < param_2) {
        local_11c = 0xffffffff;
        iVar30 = recovered_100028d0((int)param_1,((uintptr_t)pf_module_state+0x4d7U),9);
        if (iVar30 == 0) {
          param_3[1] = 0;
          *param_3 = 0;
          param_3[3] = 0;
          recovered_10006d50((void *)param_3[2]);
          param_3[2] = 0;
          param_3[3] = 0;
          param_3[4] = 0;
          recovered_10006d50((void *)0x0);
          if ((uint *******)0x1d < param_2) {
            local_11c = 0xffffffff;
            iVar30 = recovered_100028d0((int)param_1,((uintptr_t)pf_module_state+0x4d7U),9);
            if (iVar30 == 0) {
              if (*(char *)((int)param_1 + 0xd) != '\0') goto LAB_10008c4a;
              local_c8 = (void **)0x0;
              local_c4 = (uint ********)0x0;
              local_c0 = (uint *)0x0;
              local_bc = (uint ********)0x0;
              local_11c = 9;
              iVar30 = recovered_100028d0((int)param_1 + 9,((uintptr_t)pf_module_state+0x500U),4);
              if (iVar30 == 0) {
                local_d0 = (uint *)0x0;
                local_cc = (uint ********)0x4;
                bVar34 = false;
LAB_10009934:
                uVar11 = *(uint *)((int)param_1 + 0xe);
                local_dc = (uint *******)
                           (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                           uVar11 << 0x18);
                uVar11 = *(uint *)((int)param_1 + 0x12);
                local_d8 = (uint *******)
                           (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                           uVar11 << 0x18);
                uVar11 = *(uint *)((int)param_1 + 0x16);
                local_d4 = (uint *)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                    (uVar11 & 0xff00) << 8 | uVar11 << 0x18);
                local_7c = 0;
                local_80 = (uint *******)0x1a;
                local_180 = (uint *******)0x0;
                if (((local_dc != (uint *******)0x0) && (local_d8 != (uint *******)0x0)) &&
                   (local_d4 < (uint *)0x3)) {
                  if (bVar34) {
                    uVar11 = *(uint *)((int)param_1 + 0x1a);
                    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                             uVar11 << 0x18;
                    local_7c = 0;
                    local_80 = (uint *******)0x1e;
                    if (((uVar11 != 0) && (uVar11 != 0x96)) && (uVar11 != 100)) {
                      local_180 = (uint *******)0x0;
                      goto LAB_10009fd9;
                    }
                  }
                  local_7c = 0;
                  local_11c = 10;
                  uVar36 = recovered_1000fd40((int)param_1,(uint)param_2,(uint *)&local_80,
                                              (int)&local_dc);
                  ppppppppuVar29 = local_cc;
                  local_180 = (uint *******)0x0;
                  if ((char)uVar36 != '\0') {
                    local_15c = (uint *******)0x0;
                    local_158 = 0;
                    local_154 = 0;
                    local_178 = local_7c;
                    pppppppuVar26 = local_80;
                    while( true ) {
                      pppppppuVar14 = local_dc;
                      if (ppppppppuVar29 == (uint ********)0x4) {
                        if ((local_178 != 0 || -local_178 < (uint)(param_2 < pppppppuVar26)) ||
                           ((uint)((int)param_2 - (int)pppppppuVar26) < 4)) goto LAB_10009fc3;
                        uVar11 = *(uint *)((int)param_1 + (int)pppppppuVar26);
                        local_148 = (uint *******)
                                    (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                     (uVar11 & 0xff00) << 8 | uVar11 << 0x18);
                        local_144 = (uint *******)0x0;
                      }
                      else {
                        if ((local_178 != 0 || -local_178 < (uint)(param_2 < pppppppuVar26)) ||
                           ((uint)((int)param_2 - (int)pppppppuVar26) < 8)) goto LAB_10009fc3;
                        uVar11 = *(uint *)((int)param_1 + (int)pppppppuVar26);
                        uVar20 = *(uint *)((int)(param_1 + 1) + (int)pppppppuVar26);
                        local_144 = (uint *******)
                                    (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                     (uVar11 & 0xff00) << 8 | uVar11 << 0x18);
                        local_148 = (uint *******)
                                    (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                     (uVar20 & 0xff00) << 8 | uVar20 << 0x18);
                      }
                      bVar34 = CARRY4((uint)pppppppuVar26,(uint)ppppppppuVar29);
                      pppppppuVar26 = (uint *******)((int)pppppppuVar26 + (int)ppppppppuVar29);
                      local_178 = local_178 + bVar34;
                      if (local_148 == (uint *******)0x0 && local_144 == (uint *******)0x0) break;
                      if ((undefined *)(uint)(local_148 < param_2) <= local_144) goto LAB_10009fc3;
                      local_11c = 0xb;
                      recovered_1000ffd0((int *)&local_15c,&local_148);
                    }
                    if ((local_158 != 0) &&
                       (((local_150 = local_d8, local_dc == (uint *******)0x0 ||
                         ((int)(ZEXT48(local_dc) * ZEXT48(local_d8) >> 0x20) == 0)) &&
                        ((uint)((int)local_d8 * (int)local_dc) < 0x40000000)))) {
                      local_148 = (uint *******)((uint)local_148 & 0xffffff00);
                      local_11c = 0xc;
                      recovered_10010070((int *)&local_54,(int)local_d8 * (int)local_dc * 4,
                                         (undefined1 *)&local_148);
                      if (local_158 == 0) goto LAB_1000a563;
                      local_6c = (uint *******)((int)(uintptr_t)pppppppuVar14 * 4);
                      uVar11 = local_158;
                      goto LAB_1000a33f;
                    }
LAB_10009fc3:
                    local_180 = (uint *******)0x0;
                    goto LAB_10009fc5;
                  }
                }
                goto LAB_10009fd9;
              }
              local_180 = (uint *******)0x0;
              ppppppppuVar29 = (uint ********)0x0;
              if (*(char *)((int)param_1 + 9) == 'v') {
                ppppppppuVar29 = (uint ********)0x0;
                if ((byte)(*(byte *)((int)param_1 + 10) - 0x30U) < 10) {
                  local_180 = (uint *******)0x0;
                  ppppppppuVar29 = (uint ********)0x0;
                  if ((byte)(*(byte *)((int)param_1 + 0xb) - 0x30U) < 10) {
                    local_180 = (uint *******)0x0;
                    ppppppppuVar29 = (uint ********)0x0;
                    if ((byte)(*(byte *)(param_1 + 3) - 0x30U) < 10) {
                      local_d0 = (uint *)(((uint)*(byte *)((int)param_1 + 10) * 100 +
                                           (uint)*(byte *)((int)param_1 + 0xb) * 10 +
                                          (uint)*(byte *)(param_1 + 3)) - 0x14d0);
                      local_cc = (uint ********)((uint)((uint *)0xa < local_d0) * 4 + 4);
                      bVar34 = (uint *)0x3 < local_d0;
                      goto LAB_10009934;
                    }
                  }
                }
              }
              goto LAB_10009fe0;
            }
          }
          goto LAB_10008a2e;
        }
      }
      goto LAB_1000857e;
    }
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    recovered_10006d50((void *)param_3[2]);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    recovered_10006d50((void *)0x0);
    if (param_2 < (uint *******)0x1a) goto LAB_10008a2e;
    if (((*(char *)param_1 != 'B') || (*(char *)((int)param_1 + 1) != 'M')) ||
       (uVar11 = *(uint *)((int)param_1 + 0xe), uVar11 != 0xc && uVar11 < 0x28)) {
LAB_10008c4a:
      local_180 = (uint *******)0x0;
      goto LAB_10008a34;
    }
    pppppppuVar26 = *(uint ********)((int)param_1 + 10);
    if (uVar11 != 0xc) {
      local_174 = (uint *******)(uVar11 + 0xe);
      if (local_174 <= param_2) {
        pppppppuVar14 = *(uint ********)((int)param_1 + 0x12);
        uVar20 = *(uint *)((int)param_1 + 0x16);
        if (uVar20 != 0 && 0 < (int)pppppppuVar14) {
          local_e0 = (undefined *)(uVar20 >> 0x1f);
          uVar31 = -uVar20;
          if ((int)-uVar20 < 0) {
            uVar31 = uVar20;
          }
          sVar25 = *(short *)((int)param_1 + 0x1a);
          uVar5 = *(ushort *)(param_1 + 7);
          local_17c = *(uint ********)((int)param_1 + 0x1e);
          local_16c = *(uint **)((int)param_1 + 0x2e);
          if (uVar11 == 0x28) {
            if ((local_17c == (uint *******)0x6) || (local_17c == (uint *******)0x3)) {
              local_14c = (uint *******)CONCAT22(PF_PART2(local_14c, 2),sVar25);
              local_174 = (uint *******)((uint)(local_17c == (uint *******)0x6) * 4 + 0x42);
            }
            else {
              local_174 = (uint *******)0x36;
            }
          }
          goto LAB_100084ca;
        }
      }
      goto LAB_10008c4a;
    }
    pppppppuVar14 = (uint *******)(uint)*(ushort *)((int)param_1 + 0x12);
    uVar31 = (uint)*(ushort *)(param_1 + 5);
    sVar25 = *(short *)((int)param_1 + 0x16);
    uVar5 = *(ushort *)(param_1 + 6);
    local_16c = (uint *)0x0;
    local_174 = (uint *******)0x1a;
    local_17c = (uint *******)0x0;
    local_e0 = (undefined *)0x0;
LAB_100084ca:
    uVar20 = (int)param_2 - (int)pppppppuVar26;
    if (((param_2 < pppppppuVar26 || uVar20 == 0) || sVar25 != 1) ||
        (uVar31 == 0 || pppppppuVar14 == (uint *******)0x0)) goto LAB_10008a2e;
    local_14c = pppppppuVar14;
    if (local_17c == (uint *******)0x0) {
      local_150 = local_17c;
      puVar24 = (undefined *)0x0;
      uVar28 = 0;
    }
    else {
      if ((local_17c != (uint *******)0x6) && (local_17c != (uint *******)0x3)) goto LAB_10008a2e;
      if (uVar11 < 0x34) {
        puVar24 = (undefined *)0x0;
        local_180 = (uint *******)0x0;
        local_e4 = uVar20;
        if (param_2 < (uint *******)((uint)(local_17c == (uint *******)0x6) * 4 + 0x42))
        goto LAB_10008a34;
        bVar34 = local_17c == (uint *******)0x6;
        uVar28 = *(uint *)((int)param_1 + 0x36);
        local_150 = *(uint ********)((int)param_1 + 0x3a);
        local_17c = *(uint ********)((int)param_1 + 0x3e);
        if (bVar34) goto LAB_10009bd3;
      }
      else {
        uVar28 = *(uint *)((int)param_1 + 0x36);
        local_150 = *(uint ********)((int)param_1 + 0x3a);
        local_17c = *(uint ********)((int)param_1 + 0x3e);
        puVar24 = (undefined *)0x0;
        if (0x37 < uVar11) {
LAB_10009bd3:
          puVar24 = *(undefined **)((int)param_1 + 0x42);
        }
      }
    }
    uVar23 = (uint)uVar5;
    bVar6 = uVar28 != 0;
    bVar7 = local_150 != (uint *******)0x0;
    bVar35 = uVar23 != 0x10;
    bVar34 = local_17c != (uint *******)0x0;
    local_68 = (uint *******)0x1f;
    if (((bVar6 || bVar7) || bVar35) || bVar34) {
      local_68 = local_17c;
    }
    local_6c = (uint *******)0x3e0;
    if (((bVar6 || bVar7) || bVar35) || bVar34) {
      local_6c = local_150;
    }
    local_70 = 0x7c00;
    if (((bVar6 || bVar7) || bVar35) || bVar34) {
      local_70 = uVar28;
    }
    local_dc = (uint *******)0x0;
    local_d8 = (uint *******)0x0;
    local_d4 = (uint *)0x0;
    if ((((uVar23 == 0x20) && (local_70 == 0)) && (local_6c == (uint *******)0x0)) &&
       (local_68 == (uint *******)0x0)) {
      local_68 = (uint *******)0xff;
      local_84 = (undefined *)0xff000000;
      local_6c = (uint *******)0xff00;
      local_70 = 0xff0000;
      local_e4 = uVar20;
LAB_10009db4:
      if ((int)(ZEXT48(local_14c) * (ulonglong)uVar23 >> 0x20) == 0) {
        uVar11 = (int)local_14c * uVar23 + 0x1f >> 3 & 0x1ffffffc;
        if (((uVar11 != 0) && ((int)((ulonglong)uVar11 * (ulonglong)uVar31 >> 0x20) == 0)) &&
           (local_20 = uVar11, uVar11 * uVar31 <= local_e4)) {
          if ((int)(ZEXT48(local_14c) * (ulonglong)uVar31 >> 0x20) == 0) {
            if ((int)local_14c * uVar31 < 0x40000000) {
              local_11c = 2;
              recovered_1000f9f0((int *)&local_148,(int)local_14c * (uintptr_t)(uintptr_t)(uintptr_t)uVar31 * 4);
              local_38 = (uint)(uVar5 >> 3);
              local_24 = (int)local_14c * 4;
              local_44 = 0;
              local_e4 = uVar23 - 1;
              local_180 = (uint *******)0x0;
              local_48 = 0;
              local_40 = 0;
              do {
                uVar11 = ~local_48 + uVar31;
                if ((char)local_e0 != '\0') {
                  uVar11 = local_48;
                }
                local_16c = (uint *)(uVar11 * local_20 + (int)param_1 + (int)pppppppuVar26);
                pppppppuVar14 = (uint *******)0x2;
                local_174 = (uint *******)0x0;
                iVar30 = local_44;
                local_74 = local_16c;
                do {
                  pppppppuVar33 = local_148;
                  local_150 = pppppppuVar14;
                  switch((uintptr_t)(local_e4)) {
                  case 0:
                    uVar11 = (uint)((*(byte *)((int)local_74 + ((uint)local_174 >> 3)) >>
                                     ((byte)~(byte)local_174 & 7) & 1) != 0);
                    break;
                  default:
                    if (uVar23 == 0x10) {
                      uVar11 = (uint)(ushort)*local_16c;
                    }
                    else {
                      uVar11 = *local_16c;
                    }
                    local_3c = uVar11;
                    uVar20 = recovered_1000fa80(uVar11,local_70);
                    *(char *)((int)pppppppuVar33 + iVar30) = (char)uVar20;
                    uVar20 = recovered_1000fa80(uVar11,(uint)local_6c);
                    *(char *)((int)pppppppuVar33 + iVar30 + 1) = (char)uVar20;
                    uVar11 = recovered_1000fa80(uVar11,(uint)local_68);
                    *(char *)((int)pppppppuVar33 + iVar30 + 2) = (char)uVar11;
                    if (local_84 == (undefined *)0x0) {
                      cVar8 = -1;
                    }
                    else {
                      uVar11 = recovered_1000fa80(local_3c,(uint)local_84);
                      cVar8 = (char)uVar11;
                    }
                    *(char *)((int)pppppppuVar33 + iVar30 + 3) = cVar8;
                    local_40 = CONCAT31((int3)(local_40 >> 8),(byte)local_40 | cVar8 != '\0') &
                               0xffffff01;
                    goto LAB_1000a12f;
                  case 3:
                    bVar3 = *(byte *)((int)local_74 + ((uint)local_174 >> 1));
                    uVar11 = bVar3 & 0xf;
                    if (((uint)local_174 & 1) == 0) {
                      uVar11 = (uint)(bVar3 >> 4);
                    }
                    break;
                  case 7:
                    uVar11 = (uint)*(byte *)((int)local_74 + (int)local_174);
                    break;
                  case 0x17:
                    *(undefined1 *)((int)local_148 + iVar30) =
                         *(undefined1 *)((int)local_74 + (int)pppppppuVar14);
                    *(undefined1 *)((int)local_148 + iVar30 + 1) =
                         *(undefined1 *)((int)local_74 + -1 + (int)pppppppuVar14);
                    *(undefined1 *)((int)local_148 + iVar30 + 2) =
                         *(undefined1 *)((int)((int)local_74 + -2) + (int)pppppppuVar14);
                    *(undefined1 *)((int)local_148 + iVar30 + 3) = 0xff;
                    goto LAB_1000a12f;
                  }
                  if (local_d8 <= (uintptr_t)(uintptr_t)uVar11 * 4 + 3) goto LAB_1000a6a8;
                  local_11c = 3;
                  recovered_10002410((void *)((int)local_148 + iVar30),local_dc + uVar11,4);
LAB_1000a12f:
                  local_174 = (uint *******)((int)local_174 + 1);
                  local_16c = (uint *)((int)local_16c + local_38);
                  pppppppuVar14 = (uint *******)((int)local_150 + 3);
                  iVar30 = iVar30 + 4;
                } while (local_14c != local_174);
                local_48 = local_48 + 1;
                local_44 = local_44 + local_24;
                local_180 = (uint *******)CONCAT31((int3)((uint)local_44 >> 8),uVar31 <= local_48);
              } while (local_48 != uVar31);
              if (((uVar23 == 0x20) && (local_84 != (undefined *)0x0)) &&
                 (((local_40 & 1) == 0 && ((undefined *)0x3 < local_144)))) {
                puVar24 = (undefined *)0x3;
                do {
                  *(undefined1 *)((int)local_148 + (int)puVar24) = 0xff;
                  puVar24 = puVar24 + 4;
                } while (puVar24 < local_144);
              }
              *param_3 = (int)local_14c;
              param_3[1] = uVar31;
              if (ppppppppuVar1 == &local_148) {
                local_180 = (uint *******)CONCAT31((int3)((uint)&local_148 >> 8),1);
              }
              else {
                param_3[3] = 0;
                recovered_10006d50((void *)param_3[2]);
                pppppppuVar26 = local_140;
                param_3[2] = (int)local_148;
                param_3[3] = (int)local_144;
                param_3[4] = (int)local_140;
                local_148 = (uint *******)0x0;
                local_140 = (uint *******)0x0;
                local_180 = (uint *******)CONCAT31((int3)((uint)pppppppuVar26 >> 8),1);
              }
LAB_1000a6a8:
              local_144 = (uint *******)0x0;
              recovered_10006d50(local_148);
              goto LAB_10009df8;
            }
          }
LAB_10009cde:
          local_180 = (uint *******)0x0;
          goto LAB_10009df8;
        }
      }
      local_180 = (uint *******)0x0;
    }
    else {
      local_e4 = uVar20;
      local_84 = puVar24;
      if (uVar5 < 9) {
        puVar17 = (uint *)(1 << ((byte)uVar5 & 0x1f));
        if (local_16c != (uint *)0x0) {
          puVar17 = local_16c;
        }
        uVar11 = (uVar11 != 0xc) + 3;
        if ((int)(ZEXT48(puVar17) * (ulonglong)uVar11 >> 0x20) != 0) goto LAB_10009cde;
        local_180 = (uint *******)0x0;
        if (param_2 < local_174) {
        }
        else if ((int)puVar17 * uVar11 <= (uint)((int)param_2 - (int)local_174)) {
          local_148 = (uint *******)CONCAT31(PF_PART3(local_148, 1),0xff);
          local_11c = 1;
          recovered_1000f960((int *)&local_dc,(int)(uintptr_t)puVar17 * 4,(undefined1 *)&local_148);
          puVar18 = (undefined1 *)((int)local_174 + 2 + (int)param_1);
          iVar30 = 0;
          do {
            *(undefined1 *)(local_dc + iVar30) = *puVar18;
            *(undefined1 *)((int)local_dc + iVar30 * 4 + 1) = puVar18[-1];
            *(undefined1 *)((int)local_dc + iVar30 * 4 + 2) = puVar18[-2];
            iVar30 = iVar30 + 1;
            puVar18 = puVar18 + uVar11;
          } while ((int)puVar17 + (uint)(puVar17 == (uint *)0x0) != iVar30);
          goto LAB_10009d9c;
        }
      }
      else {
LAB_10009d9c:
        local_180 = (uint *******)0x0;
        if (uVar23 - 1 < 0x20) {
          if ((0x80808089U >> (uVar23 - 1 & 0x1f) & 1) != 0) goto LAB_10009db4;
        }
      }
    }
LAB_10009df8:
    local_d8 = (uint *******)0x0;
    pppppppuVar26 = local_dc;
LAB_10009119:
    recovered_10006d50(pppppppuVar26);
    goto LAB_10008a34;
  }
LAB_1000857e:
  local_11c = 0xffffffff;
  uVar10 = recovered_10008170((byte *)param_1,(uint)param_2);
  if ((char)uVar10 != '\0') {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    recovered_10006d50((void *)param_3[2]);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    recovered_10006d50((void *)0x0);
    local_11c = 0xffffffff;
    uVar10 = recovered_10008170((byte *)param_1,(uint)param_2);
    if ((char)uVar10 != '\0') {
      bVar3 = *(byte *)((int)param_1 + 2);
      uVar11 = (uint)bVar3;
      local_54 = (uint *******)(uint)*(ushort *)((int)param_1 + 3);
      local_60 = (void *)(uint)*(ushort *)((int)param_1 + 5);
      bVar4 = *(byte *)((int)param_1 + 7);
      uVar20 = (uint)bVar4;
      local_80 = (uint *******)(uint)*(ushort *)(param_1 + 3);
      local_34 = (uint)*(ushort *)((int)param_1 + 0xe);
      local_2c = (uint)*(byte *)(param_1 + 4);
      local_18[0] = (uint)*(byte *)((int)param_1 + 0x11);
      local_1c = uVar11 - 8;
      if (uVar11 < 8) {
        local_1c = uVar11;
      }
      pppppppuVar26 = (uint *******)(*(byte *)param_1 + 0x12);
      local_148 = (uint *******)0x0;
      local_144 = (uint *******)0x0;
      local_140 = (uint *******)0x0;
      local_180 = param_2;
      if (*(char *)((int)param_1 + 1) == '\x01') {
        if (param_2 < pppppppuVar26) {
LAB_1000901a:
          local_180 = (uint *******)0x0;
        }
        else {
          uVar11 = uVar20 + 7 >> 3;
          uVar31 = uVar11 * (int)local_60;
          local_180 = (uint *******)0x0;
          if (uVar31 <= (uint)((int)param_2 - (int)pppppppuVar26)) {
            pppppppuVar14 = (uint *******)((int)local_60 * 4);
            if (local_60 == (void *)0x0) {
              pppppppuVar33 = (uint *******)0x0;
            }
            else {
              local_11c = 4;
              pppppppuVar12 = recovered_10006cf0((uint)pppppppuVar14);
              pppppppuVar33 = local_144;
              if (local_144 != (uint *******)0x0) {
                pppppppuVar21 = (uint *******)0x0;
                do {
                  *(undefined1 *)((int)pppppppuVar12 + (int)pppppppuVar21) =
                       *(undefined1 *)((int)local_148 + (int)pppppppuVar21);
                  pppppppuVar21 = (uint *******)((int)pppppppuVar21 + 1);
                } while (local_144 != pppppppuVar21);
              }
              recovered_10006d50(local_148);
              local_140 = pppppppuVar14;
              local_148 = pppppppuVar12;
            }
            while (pppppppuVar33 < pppppppuVar14) {
              *(undefined1 *)((int)local_148 + (int)pppppppuVar33) = 0xff;
              pppppppuVar33 = (uint *******)((int)local_144 + 1);
              local_144 = pppppppuVar33;
            }
            if (local_60 != (void *)0x0) {
              puVar22 = (ushort *)((int)pppppppuVar26 + (int)param_1);
              pvVar27 = (void *)0x0;
              do {
                if (bVar4 == 8) {
                  uVar5 = *puVar22;
                  *(char *)(local_148 + (int)pvVar27) = (char)uVar5;
                  *(char *)((int)local_148 + (int)(uintptr_t)pvVar27 * 4 + 1) = (char)uVar5;
                  local_180 = (uint *******)0x0;
                  *(char *)((int)local_148 + (int)(uintptr_t)pvVar27 * 4 + 2) = (char)*puVar22;
LAB_10008cac:
                  local_180 = (uint *******)CONCAT31((int3)((uint)local_180 >> 8),0xff);
                }
                else {
                  if (uVar20 - 0xf < 2) {
                    uVar5 = *puVar22;
                    *(char *)(local_148 + (int)pvVar27) =
                         (char)((uVar5 >> 10 & 0x1f) * 0x20e7f7 >> 0x12);
                    local_180 = (uint *******)((uVar5 >> 5 & 0x1f) * 0x20e7f7 >> 0x12);
                    *(char *)((int)local_148 + (int)(uintptr_t)pvVar27 * 4 + 1) = (char)local_180;
                    *(char *)((int)local_148 + (int)(uintptr_t)pvVar27 * 4 + 2) =
                         (char)((uVar5 & 0x1f) * 0x20e7f7 >> 0x12);
                    goto LAB_10008cac;
                  }
                  if (uVar20 != 0x20) {
                    if (uVar20 == 0x18) {
                      *(char *)(local_148 + (int)pvVar27) = (char)puVar22[1];
                      *(undefined1 *)((int)local_148 + (int)(uintptr_t)pvVar27 * 4 + 1) =
                           *(undefined1 *)((int)puVar22 + 1);
                      *(char *)((int)local_148 + (int)(uintptr_t)pvVar27 * 4 + 2) = (char)*puVar22;
                      goto LAB_10008cac;
                    }
                    goto LAB_1000901a;
                  }
                  *(char *)(local_148 + (int)pvVar27) = (char)puVar22[1];
                  *(undefined1 *)((int)local_148 + (int)(uintptr_t)pvVar27 * 4 + 1) =
                       *(undefined1 *)((int)puVar22 + 1);
                  *(char *)((int)local_148 + (int)(uintptr_t)pvVar27 * 4 + 2) = (char)*puVar22;
                  local_180 = (uint *******)(uint)*(byte *)((int)puVar22 + 3);
                }
                *(char *)((int)local_148 + (int)(uintptr_t)pvVar27 * 4 + 3) = (char)local_180;
                pvVar27 = (void *)((int)pvVar27 + 1);
                puVar22 = (ushort *)((int)puVar22 + uVar11);
              } while (pvVar27 < local_60);
            }
            pppppppuVar26 = (uint *******)((int)pppppppuVar26 + uVar31);
            goto joined_r0x10008a53;
          }
        }
      }
      else {
joined_r0x10008a53:
        if (((local_80 == (uint *******)0x0) ||
            ((int)(ZEXT48(local_80) * (ulonglong)local_34 >> 0x20) == 0)) &&
           (local_64 = (uint ******)((int)local_80 * local_34), local_64 < (uint ******)0x40000000))
        {
          local_15c = (uint *******)0x0;
          local_158 = 0;
          local_154 = 0;
          if (local_64 != (uint ******)0x0) {
            uVar20 = (int)local_64 * 4;
            local_11c = 5;
            pppppppuVar14 = recovered_10006cf0(uVar20);
            uVar11 = local_158;
            if (local_158 != 0) {
              uVar31 = 0;
              do {
                *(undefined1 *)((int)pppppppuVar14 + uVar31) =
                     *(undefined1 *)((int)local_15c + uVar31);
                uVar31 = uVar31 + 1;
              } while (local_158 != uVar31);
            }
            recovered_10006d50(local_15c);
            while( true ) {
              local_15c = pppppppuVar14;
              local_154 = uVar20;
              if (uVar20 <= uVar11) break;
              *(undefined1 *)((int)pppppppuVar14 + uVar11) = 0;
              uVar11 = local_158 + 1;
              local_158 = uVar11;
            }
          }
          uVar11 = local_2c + 7 >> 3;
          local_30 = (uint ******)0x0;
          local_dc = &local_30;
          local_d8 = &local_64;
          local_d4 = &local_1c;
          local_d0 = &local_2c;
          local_cc = &local_54;
          local_c8 = &local_60;
          local_c4 = &local_148;
          local_c0 = local_18;
          local_bc = &local_80;
          local_b8 = &local_34;
          local_b4 = &local_15c;
          if (bVar3 < 8) {
            if (local_64 == (uint ******)0x0) {
              if (param_2 < pppppppuVar26) goto LAB_10009098;
              goto LAB_1000909c;
            }
            if ((int)(ZEXT48(local_64) * (ulonglong)uVar11 >> 0x20) == 0) {
              local_180 = (uint *******)0x0;
              if ((pppppppuVar26 <= param_2) &&
                 ((int)local_64 * uVar11 <= (uint)((int)param_2 - (int)pppppppuVar26))) {
                puVar22 = (ushort *)((int)param_1 + (int)pppppppuVar26);
                ppppppuVar15 = (uint ******)0x0;
                do {
                  local_11c = 6;
                  uVar10 = recovered_1000fb10(&local_dc,puVar22);
                  if ((char)uVar10 == '\0') goto LAB_10009098;
                  ppppppuVar15 = (uint ******)((int)ppppppuVar15 + 1);
                  puVar22 = (ushort *)((int)puVar22 + uVar11);
                } while (ppppppuVar15 < local_64);
                goto LAB_1000909c;
              }
            }
            else {
LAB_10009098:
              local_180 = (uint *******)0x0;
            }
          }
          else {
            if (local_64 != (uint ******)0x0) {
              do {
                if (param_2 <= pppppppuVar26) goto LAB_10009098;
                pppppppuVar14 = (uint *******)((int)pppppppuVar26 + 1);
                local_17c = (uint *******)
                            ((*(byte *)((int)param_1 + (int)pppppppuVar26) & 0x7f) + 1);
                if ((char)*(byte *)((int)param_1 + (int)pppppppuVar26) < '\0') {
                  if ((uint)((int)param_2 - (int)pppppppuVar14) < uVar11) {
                    local_180 = (uint *******)0x0;
                    goto LAB_100090f9;
                  }
                  local_180 = (uint *******)((int)pppppppuVar14 + uVar11);
                  do {
                    local_11c = 7;
                    uVar10 = recovered_1000fb10(&local_dc,
                                                (ushort *)((int)param_1 + (int)pppppppuVar14));
                    if ((char)uVar10 == '\0') goto LAB_10009098;
                    local_17c = (uint *******)((int)local_17c + -1);
                  } while (local_17c != (uint *******)0x0);
                  pppppppuVar26 = local_180;
                }
                else {
                  local_178 = (int)param_2 + (-1 - (int)pppppppuVar26);
                  pppppppuVar26 = pppppppuVar14;
                  do {
                    local_180 = (uint *******)0x0;
                    if ((param_2 < pppppppuVar26) ||
                       (bVar34 = local_178 < uVar11, local_178 = local_178 - uVar11, bVar34))
                    goto LAB_100090f9;
                    local_11c = 8;
                    uVar10 = recovered_1000fb10(&local_dc,
                                                (ushort *)((int)param_1 + (int)pppppppuVar26));
                    if ((char)uVar10 == '\0') goto LAB_10009098;
                    pppppppuVar26 = (uint *******)((int)pppppppuVar26 + uVar11);
                    local_17c = (uint *******)((int)local_17c + -1);
                  } while (local_17c != (uint *******)0x0);
                }
              } while (local_30 < local_64);
            }
LAB_1000909c:
            *param_3 = (int)local_80;
            param_3[1] = local_34;
            local_180 = (uint *******)CONCAT31((int3)((uint)local_180 >> 8),1);
            if (ppppppppuVar1 != &local_15c) {
              param_3[3] = 0;
              recovered_10006d50((void *)param_3[2]);
              param_3[2] = (int)local_15c;
              param_3[3] = local_158;
              param_3[4] = local_154;
              local_15c = (uint *******)0x0;
              local_154 = 0;
            }
          }
LAB_100090f9:
          local_158 = 0;
          recovered_10006d50(local_15c);
        }
        else {
          local_180 = (uint *******)0x0;
        }
      }
      local_144 = (uint *******)0x0;
      pppppppuVar26 = local_148;
      goto LAB_10009119;
    }
  }
LAB_10008a2e:
  local_180 = (uint *******)0x0;
  goto LAB_10008a30;
  while( true ) {
    if (((char)local_13c == '\x01') && (local_138 != 0)) {
      local_60 = (void *)0x0;
      local_5c = 0;
      local_58 = 0;
      local_11c = 0xe;
      uVar10 = recovered_100104f0((int)param_1,(uint)param_2,(int)&local_dc,(uint *)&local_148,
                                  (int *)&local_60);
      if ((char)uVar10 == '\0') {
        local_5c = 0;
        recovered_10006d50(local_60);
        goto LAB_1000a5e7;
      }
      local_84 = (undefined *)local_144;
      if (local_144 != (uint *******)0x0) {
        local_14c = local_148;
        local_68 = (uint *******)((int)local_148 * 4);
        local_e4 = local_130;
        local_70 = local_134;
        local_164 = ((int)pppppppuVar14 * local_130 + local_134) * 4;
        local_16c = (uint *)0x0;
        puVar24 = (undefined *)0x0;
        do {
          local_e0 = puVar24;
          if ((-1 < (int)(puVar24 + local_e4) && local_14c != (uint *******)0x0) &&
              (int)(puVar24 + local_e4) < (int)local_150) {
            local_17c = (uint *******)local_164;
            local_170 = (int)local_16c;
            pppppppuVar33 = local_14c;
            uVar11 = local_70;
            do {
              if ((int)uVar11 < (int)pppppppuVar14 && -1 < (int)uVar11) {
                local_11c = 0xf;
                recovered_10010e90((byte *)((int)local_54 + (int)local_17c),
                                   (byte *)((int)local_60 + local_170));
              }
              local_170 = local_170 + 4;
              local_17c = (uint *******)((int)local_17c + 4);
              uVar11 = uVar11 + 1;
              pppppppuVar33 = (uint *******)((int)pppppppuVar33 + -1);
            } while (pppppppuVar33 != (uint *******)0x0);
          }
          puVar24 = local_e0 + 1;
          local_16c = (uint *)((int)local_16c + (int)local_68);
          local_164 = local_164 + (int)local_6c;
        } while (puVar24 != local_84);
      }
      local_5c = 0;
      recovered_10006d50(local_60);
    }
    uVar11 = local_38 - 1;
    if (uVar11 == 0) break;
LAB_1000a33f:
    local_148 = (uint *******)0x0;
    local_144 = (uint *******)0x0;
    local_140 = (uint *******)0x0;
    local_13c = (uint *******)CONCAT31(PF_PART3(local_13c, 1),1);
    local_138 = 0xff;
    local_134 = 0;
    local_130 = 0;
    local_128 = 0;
    local_12c = 0;
    local_11c = 0xd;
    local_38 = uVar11;
    uVar9 = recovered_10010100((int)param_1,(uint)param_2,(int)&local_dc,
                               (uint)local_15c[(uintptr_t)(uintptr_t)uVar11 * 2 + -2],(int)local_15c[(uintptr_t)(uintptr_t)uVar11 * 2 + -1],
                               (uint *)&local_148);
    if (uVar9 == '\0') {
LAB_1000a5e7:
      local_180 = (uint *******)0x0;
      goto LAB_1000a5e9;
    }
  }
LAB_1000a563:
  *param_3 = (int)pppppppuVar14;
  param_3[1] = (int)local_150;
  local_180 = (uint *******)CONCAT31((int3)((uint)pppppppuVar26 >> 8),1);
  if (ppppppppuVar1 != &local_54) {
    param_3[3] = 0;
    recovered_10006d50((void *)param_3[2]);
    param_3[2] = (int)local_54;
    param_3[3] = local_50;
    param_3[4] = local_4c;
    local_54 = (uint *******)0x0;
    local_4c = 0;
  }
LAB_1000a5e9:
  local_50 = 0;
  recovered_10006d50(local_54);
LAB_10009fc5:
  local_158 = 0;
  recovered_10006d50(local_15c);
LAB_10009fd9:
  ppppppppuVar29 = local_c4;
LAB_10009fe0:
  recovered_10006d50(ppppppppuVar29);
LAB_10008a30:
LAB_10008a34:
  recovered_10007320(&local_120);
  return (uint)local_180 & 0xffffff01;
}

#undef DAT_10014dcc
#undef DAT_10014e40
#undef PTR_recovered_10006c80_10015008
#undef local_180
#undef local_17c
#undef local_178
#undef local_174
#undef local_170
#undef local_16c
#undef local_164
#undef local_15c
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
#undef local_108
#undef local_104
#undef local_100
#undef auStackY_210
#undef local_fc
#undef local_f8
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
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
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_10014e84
#define DAT_10014e84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c2U)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define auStackY_140 (*(undefined1 (*)[320])(pf_stack_frame + 16))
#define local_a0 (*(byte * *)(pf_stack_frame + 176))
#define local_9c (*(int *)(pf_stack_frame + 180))
#define local_84 (*(byte * *)(pf_stack_frame + 204))
#define local_80 (*(int *)(pf_stack_frame + 208))
#define local_7c (*(uint *)(pf_stack_frame + 212))
#define local_78 (*(uint *)(pf_stack_frame + 216))
#define local_74 (*(uint *)(pf_stack_frame + 220))
#define local_70 (*(uint *)(pf_stack_frame + 224))
#define local_6c (*(uint *)(pf_stack_frame + 228))
#define local_68 (*(byte * *)(pf_stack_frame + 232))
#define local_64 (*(undefined4 *)(pf_stack_frame + 236))
#define local_60 (*(undefined4 *)(pf_stack_frame + 240))
#define local_5c (*(int * *)(pf_stack_frame + 244))
#define local_58 (*(int *)(pf_stack_frame + 248))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 308))
#define local_54 (*(byte * *)(pf_stack_frame + 252))
#define local_50 (*(byte * *)(pf_stack_frame + 256))
#define local_4c (*(byte * *)(pf_stack_frame + 260))
#define local_48 (*(undefined4 *)(pf_stack_frame + 264))
#define local_44 (*(undefined4 *)(pf_stack_frame + 268))
#define local_30 (*(undefined * *)(pf_stack_frame + 288))
#define local_2c (*(undefined * *)(pf_stack_frame + 292))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 296))
#define local_24 (*(undefined4 *)(pf_stack_frame + 300))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 304))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a950
 */

uint recovered_1000a950(uint *in_ECX,int in_EDX,int *param_3)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  byte *pointer_00;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int *extraout_ECX = 0;
  int *piVar6;
  undefined4 extraout_ECX_00 = 0;
  int iVar7;
  int *piVar8;
  byte *in_EDX_00;
  byte bVar9;
  int *piVar10;
  uint uVar11;
  byte *in_ECX_00;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_140 + 0x80;
  uVar5 = *in_ECX;
  uVar11 = in_ECX[1];
  local_30 = PTR_recovered_10006c80_10015008;
  local_2c = &DAT_10014e84;
  local_24 = 0x3ae;
  recovered_100072f0(&local_48);
  if ((uVar5 == 0) || ((int)((ulonglong)uVar5 * (ulonglong)uVar11 >> 0x20) == 0)) {
    uVar11 = uVar11 * uVar5;
    uVar5 = 0;
    if (uVar11 < 0x40000000) {
      uVar11 = uVar11 * 4;
      param_3[1] = 0;
      if ((uint)param_3[2] < uVar11) {
        local_44 = 0xffffffff;
        pvVar2 = recovered_10006cf0(uVar11);
        pointer = (void *)*param_3;
        iVar1 = param_3[1];
        if (iVar1 != 0) {
          iVar7 = 0;
          do {
            *(undefined1 *)((int)pvVar2 + iVar7) = *(undefined1 *)((int)pointer + iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar1 != iVar7);
        }
        recovered_10006d50(pointer);
        *param_3 = (int)pvVar2;
        param_3[2] = uVar11;
        uVar5 = param_3[1];
      }
      while (uVar5 < uVar11) {
        *(undefined1 *)(*param_3 + uVar5) = 0;
        uVar5 = param_3[1] + 1;
        param_3[1] = uVar5;
      }
      uVar11 = in_ECX[0x14];
      if (uVar11 == 0) {
LAB_1000aa96:
        local_84 = (byte *)0x0;
        local_80 = 0;
        local_7c = 0;
        local_44 = 1;
        uVar5 = recovered_1000ad90(in_ECX,in_ECX + 0x10,in_EDX,(int *)&local_84);
        iVar1 = local_80;
        if (((char)uVar5 == '\0') || (local_80 != param_3[1])) {
          pbVar4 = local_84;
LAB_1000acec:
          recovered_10006d50(pbVar4);
          uVar5 = 0;
          goto LAB_1000ad02;
        }
        param_3[1] = 0;
        recovered_10006d50((void *)*param_3);
        *param_3 = (int)local_84;
        param_3[1] = iVar1;
        param_3[2] = local_7c;
        recovered_10006d50((void *)0x0);
        piVar10 = (int *)in_ECX[0x13];
        uVar11 = in_ECX[0x14];
        piVar6 = extraout_ECX;
      }
      else {
        piVar10 = (int *)in_ECX[0x13];
        piVar6 = piVar10 + uVar11 * 10;
        bVar9 = 0;
        piVar8 = piVar10;
        do {
          while ((bVar9 & 1) == 0) {
            bVar9 = *(byte *)(piVar8 + 6);
            piVar8 = piVar8 + 10;
            if (piVar8 == piVar6) {
              if (bVar9 == 0) goto LAB_1000aa96;
              goto LAB_1000ab22;
            }
          }
          piVar8 = piVar8 + 10;
          bVar9 = 1;
        } while (piVar8 != piVar6);
      }
LAB_1000ab22:
      uVar5 = CONCAT31((int3)((uint)piVar6 >> 8),1);
      if (uVar11 != 0) {
        local_5c = piVar10 + uVar11 * 10;
        do {
          local_6c = in_ECX[6];
          local_70 = in_ECX[5];
          local_74 = in_ECX[4];
          local_78 = in_ECX[3];
          local_7c = in_ECX[2];
          pbVar4 = (byte *)*piVar10;
          iVar1 = piVar10[1];
          local_68 = (byte *)0x0;
          local_64 = 0;
          local_60 = 0;
          local_44 = 2;
          local_84 = pbVar4;
          local_80 = iVar1;
          uVar5 = recovered_1000ad90((uint *)&local_84,(uint *)(piVar10 + 7),in_EDX,(int *)&local_68
                                    );
          pointer_00 = local_68;
          if ((char)uVar5 == '\0') {
            pbVar4 = local_68;
            goto LAB_1000acec;
          }
          uVar5 = *in_ECX;
          if (iVar1 != 0) {
            local_58 = (int)(uintptr_t)pbVar4 * 4;
            local_9c = 0;
            local_a0 = local_68;
            do {
              if (pbVar4 != (byte *)0x0) {
                in_ECX_00 = (byte *)(piVar10[2] * 4 + *param_3 + (piVar10[3] + local_9c) * (uintptr_t)uVar5 * 4
                                    );
                pbVar3 = pbVar4;
                in_EDX_00 = local_a0;
                do {
                  local_54 = in_EDX_00;
                  local_50 = in_ECX_00;
                  local_4c = pbVar3;
                  if (piVar10[5] == 0) {
                    local_44 = 3;
                    recovered_10002410(in_ECX_00,in_EDX_00,4);
                  }
                  else {
                    local_44 = 4;
                    recovered_10010e90(in_ECX_00,in_EDX_00);
                  }
                  in_ECX_00 = local_50 + 4;
                  in_EDX_00 = local_54 + 4;
                  pbVar3 = local_4c + -1;
                } while (pbVar3 != (byte *)0x0);
              }
              local_9c = local_9c + 1;
              local_a0 = local_a0 + local_58;
            } while (local_9c != iVar1);
          }
          recovered_10006d50(pointer_00);
          piVar10 = piVar10 + 10;
        } while (piVar10 != local_5c);
        uVar5 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),1);
      }
    }
  }
  else {
    uVar5 = 0;
  }
LAB_1000ad02:
  recovered_10007320(&local_48);
  return uVar5;
}

#undef DAT_10014e84
#undef PTR_recovered_10006c80_10015008
#undef auStackY_140
#undef local_a0
#undef local_9c
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

#undef DAT_10014be0
#define DAT_10014be0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x31eU)))
#undef DAT_10014bfc
#define DAT_10014bfc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_10014c18
#define DAT_10014c18 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x356U)))
#undef DAT_10014c34
#define DAT_10014c34 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x372U)))
#undef DAT_10014c6c
#define DAT_10014c6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aaU)))
#undef DAT_10014e90
#define DAT_10014e90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ceU)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define auStackY_170 (*(undefined1 (*)[368])(pf_stack_frame + 16))
#define auStack_14 (*(undefined1 (*)[20])(pf_stack_frame + 364))
#define local_dc (*(int *)(pf_stack_frame + 164))
#define local_d8 (*(uint * *)(pf_stack_frame + 168))
#define local_d4 (*(byte * *)(pf_stack_frame + 172))
#define local_d0 (*(int *)(pf_stack_frame + 176))
#define local_cc (*(int *)(pf_stack_frame + 180))
#define local_c0 (*(uint * *)(pf_stack_frame + 192))
#define local_a8 (*(uint *)(pf_stack_frame + 216))
#define local_a4 (*(uint *)(pf_stack_frame + 220))
#define local_9c (*(void * *)(pf_stack_frame + 228))
#define local_98 (*(undefined4 *)(pf_stack_frame + 232))
#define local_94 (*(undefined4 *)(pf_stack_frame + 236))
#define local_90 (*(void * *)(pf_stack_frame + 240))
#define local_8c (*(uint *)(pf_stack_frame + 244))
#define local_88 (*(undefined4 *)(pf_stack_frame + 248))
#define local_84 (*(uint *)(pf_stack_frame + 252))
#define local_80 (*(undefined4 *)(pf_stack_frame + 256))
#define local_7c (*(undefined4 *)(pf_stack_frame + 260))
#define local_68 (*(undefined * *)(pf_stack_frame + 280))
#define local_64 (*(undefined * *)(pf_stack_frame + 284))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 288))
#define local_5c (*(undefined4 *)(pf_stack_frame + 292))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 296))
#define local_4c (*(uint *)(pf_stack_frame + 308))
#define local_48 (*(byte * *)(pf_stack_frame + 312))
#define local_44 (*(byte * *)(pf_stack_frame + 316))
#define local_40 (*(undefined4 *)(pf_stack_frame + 320))
#define local_3c (*(undefined4 *)(pf_stack_frame + 324))
#define local_38 (*(uint *)(pf_stack_frame + 328))
#define local_34 (*(byte * *)(pf_stack_frame + 332))
#define local_30 (*(undefined4 *)(pf_stack_frame + 336))
#define local_2c (*(undefined4 *)(pf_stack_frame + 340))
#define local_28 (*(byte * *)(pf_stack_frame + 344))
#define local_24 (*(int *)(pf_stack_frame + 348))
#define local_20 (*(byte * *)(pf_stack_frame + 352))
#define local_1c (*(uint *)(pf_stack_frame + 356))
#define local_18 (*(uint *)(pf_stack_frame + 360))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad90
 */

uint recovered_1000ad90(uint *in_ECX,uint *in_EDX,int param_3,int *param_4)

{
  unsigned char pf_stack_frame[416] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  void *pvVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  char cVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  undefined2 uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  byte *in_EDX_00;
  void *pvVar28;
  char *pcVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;

  local_60 = auStack_14 + 0x10;
  local_58 = auStackY_170 + 0x80;
  uVar15 = in_ECX[6];
  uVar23 = *in_ECX;
  local_68 = PTR_recovered_10006c80_10015008;
  local_64 = &DAT_10014e90;
  local_5c = 0x15b3;
  recovered_100072f0(&local_80);
  if (uVar15 == 0) {
    uVar15 = in_ECX[3];
    uVar25 = 0;
    if (uVar15 < 7) {
      if ((0x5dU >> (uVar15 & 0x1f) & 1) != 0) {
        uVar25 = in_ECX[2] * *(int *)(&DAT_10014c6c + (uintptr_t)(uintptr_t)(uintptr_t)uVar15 * 4);
      }
      if (uVar23 == 0) goto LAB_1000afa6;
LAB_1000af7a:
      if (((int)((ulonglong)uVar23 * (ulonglong)uVar25 >> 0x20) != 0) ||
         (uVar15 = in_ECX[1], (int)((ulonglong)uVar23 * (ulonglong)uVar15 >> 0x20) != 0))
      goto LAB_1000af8d;
      uVar25 = uVar25 * uVar23 + 7 >> 3;
    }
    else {
      if (uVar23 != 0) goto LAB_1000af7a;
LAB_1000afa6:
      uVar15 = in_ECX[1];
      uVar25 = 0;
    }
    puVar21 = in_ECX + 1;
    if ((0x3fffffff < uVar23 * uVar15) ||
       (uVar6 = uVar25 + 1, (int)((ulonglong)uVar6 * (ulonglong)uVar15 >> 0x20) != 0)) {
      local_d8 = (uint *)0x0;
      goto LAB_1000bbdc;
    }
    local_9c = (void *)0x0;
    local_98 = 0;
    local_94 = 0;
    local_90 = (void *)0x0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    local_7c = 1;
    uVar8 = recovered_10014430((int *)&local_9c,(int *)in_EDX,(uint *)(uVar15 * uVar6));
    if ((char)uVar8 == '\0') {
      local_d8 = (uint *)0x0;
    }
    else {
      uVar23 = uVar23 * (uintptr_t)(uintptr_t)(uintptr_t)uVar15 * 4;
      uVar15 = param_4[1];
      if (uVar23 < uVar15) {
        param_4[1] = uVar23;
      }
      else if (uVar15 < uVar23) {
        if ((uint)param_4[2] < uVar23) {
          local_7c = 2;
          pvVar9 = recovered_10006cf0(uVar23);
          pvVar28 = (void *)*param_4;
          iVar30 = param_4[1];
          if (iVar30 != 0) {
            iVar18 = 0;
            do {
              *(undefined1 *)((int)pvVar9 + iVar18) = *(undefined1 *)((int)pvVar28 + iVar18);
              iVar18 = iVar18 + 1;
            } while (iVar30 != iVar18);
          }
          recovered_10006d50(pvVar28);
          *param_4 = (int)pvVar9;
          param_4[2] = uVar23;
          uVar15 = param_4[1];
        }
        while (uVar15 < uVar23) {
          *(undefined1 *)(*param_4 + uVar15) = 0;
          uVar15 = param_4[1] + 1;
          param_4[1] = uVar15;
        }
      }
      uVar15 = in_ECX[3];
      local_a4 = 1;
      if ((((uVar15 < 7) && ((0x5dU >> (uVar15 & 0x1f) & 1) != 0)) &&
          (7 < *(int *)(&DAT_10014c6c + (uintptr_t)(uintptr_t)(uintptr_t)uVar15 * 4) * in_ECX[2])) &&
         (local_a4 = 0, (0x5dU >> (uVar15 & 0x1f) & 1) != 0)) {
        local_a4 = in_ECX[2] * *(int *)(&DAT_10014c6c + (uintptr_t)(uintptr_t)(uintptr_t)uVar15 * 4) + 7 >> 3;
      }
      local_7c = 3;
      pbVar10 = recovered_10006cf0(uVar6);
      recovered_10006d50((void *)0x0);
      uVar15 = 0xffffffff;
      do {
        pbVar10[uVar15 + 1] = 0;
        uVar15 = uVar15 + 1;
      } while (uVar25 != uVar15);
      if ((in_ECX[3] == 6) && (in_ECX[2] == 8)) {
        if (*puVar21 == 0) {
LAB_1000c32f:
          local_d8 = (uint *)CONCAT31((int3)(local_84 >> 8),local_84 == local_8c);
        }
        else if ((-uVar25 - 2 < local_84) || (uVar15 = local_84 + uVar6, local_8c < uVar15)) {
LAB_1000b30f:
          local_d8 = (uint *)0x0;
        }
        else {
          local_7c = 4;
          recovered_10002410(pbVar10,(void *)(local_84 + (int)local_90),uVar6);
          local_7c = 5;
          local_84 = uVar15;
          uVar8 = recovered_10014590((uint)*pbVar10,(void *)*param_4,pbVar10 + 1,0,uVar25,4);
          if ((char)uVar8 != '\0') {
            if (1 < *puVar21) {
              uVar15 = 1;
              local_dc = 0;
              do {
                if ((-uVar25 - 2 < local_84) || (uVar23 = local_84 + uVar6, local_8c < uVar23))
                goto LAB_1000b30f;
                local_7c = 6;
                recovered_10002410(pbVar10,(void *)(local_84 + (int)local_90),uVar6);
                local_7c = 7;
                local_84 = uVar23;
                uVar8 = recovered_10014590((uint)*pbVar10,(void *)(*param_4 + local_dc + uVar25),
                                           pbVar10 + 1,*param_4 + local_dc,uVar25,4);
                if ((char)uVar8 == '\0') goto LAB_1000c34f;
                uVar15 = uVar15 + 1;
                local_dc = local_dc + uVar25;
              } while (uVar15 < *puVar21);
            }
            goto LAB_1000c32f;
          }
LAB_1000c34f:
          local_d8 = (uint *)0x0;
        }
      }
      else {
        local_7c = 8;
        recovered_1000f9f0((int *)&local_34,uVar25);
        local_7c = 9;
        recovered_1000f9f0((int *)&local_44,uVar25);
        if (*puVar21 != 0) {
          local_4c = -uVar25 - 2;
          local_d0 = 0;
          local_a8 = 0;
          bVar33 = false;
          do {
            if ((local_4c < local_84) || (uVar15 = local_84 + uVar6, local_8c < uVar15)) {
              local_d8 = (uint *)0x0;
              goto switchD_1000bd79_caseD_1000c1a4;
            }
            local_7c = 10;
            recovered_10002410(pbVar10,(void *)(local_84 + (int)local_90),uVar6);
            pbVar12 = (byte *)0x0;
            if (bVar33) {
              pbVar12 = local_34;
            }
            local_7c = 0xb;
            local_84 = uVar15;
            uVar8 = recovered_10014590((uint)*pbVar10,local_44,pbVar10 + 1,(int)pbVar12,uVar25,
                                       local_a4);
            if ((char)uVar8 == '\0') {
LAB_1000c18e:
              local_d8 = (uint *)0x0;
              goto switchD_1000bd79_caseD_1000c1a4;
            }
            local_d8 = (uint *)0x0;
            if (6 < in_ECX[3]) goto switchD_1000bd79_caseD_1000c1a4;
            uVar15 = *in_ECX;
            iVar30 = *param_4;
            switch((uintptr_t)(in_ECX[3])) {
            case 0:
              if (in_ECX[2] == 8) {
                if (uVar15 != 0) {
                  iVar30 = iVar30 + 3 + uVar15 * local_d0;
                  uVar23 = 0;
                  do {
                    bVar2 = local_44[uVar23];
                    uVar31 = *(uint *)(param_3 + 0xc);
                    bVar1 = *(byte *)(param_3 + 0x1c);
                    *(byte *)(iVar30 + -3 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = bVar2;
                    *(byte *)(iVar30 + -2 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = bVar2;
                    *(byte *)(iVar30 + -1 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = bVar2;
                    *(byte *)(iVar30 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = -(~bVar1 & 1 | uVar31 != bVar2);
                    uVar23 = uVar23 + 1;
                  } while (uVar15 != uVar23);
                }
              }
              else if (uVar15 != 0) {
                iVar30 = iVar30 + 3 + uVar15 * local_d0;
                uVar23 = 0;
                do {
                  uVar7 = (uint)(ushort)(*(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 2) << 8 |
                                        *(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 2) >> 8);
                  uVar31 = *(uint *)(param_3 + 0xc);
                  bVar2 = *(byte *)(param_3 + 0x1c);
                  uVar17 = (undefined1)(((uintptr_t)uVar7 * 0xff + 0x7fff) / 0xffff);
                  *(undefined1 *)(iVar30 + -3 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = uVar17;
                  *(undefined1 *)(iVar30 + -2 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = uVar17;
                  *(undefined1 *)(iVar30 + -1 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = uVar17;
                  *(byte *)(iVar30 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = -(~bVar2 & 1 | uVar7 != uVar31);
                  uVar23 = uVar23 + 1;
                } while (uVar15 != uVar23);
              }
              break;
            default:
              goto switchD_1000bd79_caseD_1000c1a4;
            case 2:
              if (in_ECX[2] == 8) {
                if (uVar15 != 0) {
                  pcVar29 = (char *)(iVar30 + 3 + uVar15 * local_d0);
                  pbVar12 = local_44 + 2;
                  do {
                    cVar13 = -1;
                    if (((*(char *)(param_3 + 0x1d) == '\x01') &&
                        (*(uint *)(param_3 + 0x10) == (uint)pbVar12[-2])) &&
                       (*(uint *)(param_3 + 0x14) == (uint)pbVar12[-1])) {
                      cVar13 = -(*(uint *)(param_3 + 0x18) != (uint)*pbVar12);
                    }
                    pcVar29[-3] = pbVar12[-2];
                    pcVar29[-2] = pbVar12[-1];
                    pcVar29[-1] = *pbVar12;
                    *pcVar29 = cVar13;
                    pcVar29 = pcVar29 + 4;
                    pbVar12 = pbVar12 + 3;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
              }
              else if (uVar15 != 0) {
                pcVar29 = (char *)(iVar30 + 3 + uVar15 * local_d0);
                pbVar12 = local_44 + 5;
                do {
                  uVar22 = (uint)(ushort)(*(ushort *)(pbVar12 + -5) << 8 |
                                         *(ushort *)(pbVar12 + -5) >> 8);
                  uVar26 = (uint)(ushort)(*(ushort *)(pbVar12 + -3) << 8 |
                                         *(ushort *)(pbVar12 + -3) >> 8);
                  uVar11 = (uint)(ushort)(*(ushort *)(pbVar12 + -1) << 8 |
                                         *(ushort *)(pbVar12 + -1) >> 8);
                  bVar2 = *(byte *)(param_3 + 0x1d);
                  uVar23 = *(uint *)(param_3 + 0x10);
                  uVar31 = *(uint *)(param_3 + 0x14);
                  uVar7 = *(uint *)(param_3 + 0x18);
                  pcVar29[-3] = (char)((uVar22 * 0xff + 0x7fff) / 0xffff);
                  pcVar29[-2] = (char)((uVar26 * 0xff + 0x7fff) / 0xffff);
                  pcVar29[-1] = (char)((uVar11 * 0xff + 0x7fff) / 0xffff);
                  *pcVar29 = -((uVar11 != uVar7 || uVar26 != uVar31) | ~bVar2 & 1 | uVar22 != uVar23
                              );
                  pcVar29 = pcVar29 + 4;
                  pbVar12 = pbVar12 + 6;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              break;
            case 3:
              if (uVar15 != 0) {
                pvVar28 = (void *)(iVar30 + uVar15 * local_d0);
                uVar23 = *(uint *)(param_3 + 4);
                pbVar12 = local_44;
                do {
                  if (uVar23 >> 2 <= (uint)*pbVar12) goto LAB_1000c18e;
                  local_7c = 0xc;
                  recovered_10002410(pvVar28,(void *)((uint)*pbVar12 * 4 + *(int *)param_3),4);
                  pvVar28 = (void *)((int)pvVar28 + 4);
                  pbVar12 = pbVar12 + 1;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              break;
            case 4:
              if (in_ECX[2] == 8) {
                if (uVar15 != 0) {
                  iVar30 = iVar30 + 3 + uVar15 * local_d0;
                  uVar23 = 0;
                  do {
                    bVar2 = local_44[(uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 2];
                    *(byte *)(iVar30 + -3 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = bVar2;
                    *(byte *)(iVar30 + -2 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = bVar2;
                    *(byte *)(iVar30 + -1 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = local_44[(uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 2];
                    *(byte *)(iVar30 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = local_44[(uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 2 + 1];
                    uVar23 = uVar23 + 1;
                  } while (uVar15 != uVar23);
                }
              }
              else if (uVar15 != 0) {
                iVar30 = iVar30 + 3 + uVar15 * local_d0;
                uVar23 = 0;
                do {
                  uVar3 = *(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4 + 2);
                  uVar17 = (undefined1)
                           (((uint)(ushort)(*(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) << 8 |
                                           *(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) >> 8) * 0xff + 0x7fff)
                           / 0xffff);
                  *(undefined1 *)(iVar30 + -3 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = uVar17;
                  *(undefined1 *)(iVar30 + -2 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = uVar17;
                  *(undefined1 *)(iVar30 + -1 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) = uVar17;
                  *(char *)(iVar30 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) =
                       (char)(((uint)(ushort)(uVar3 << 8 | uVar3 >> 8) * 0xff + 0x7fff) / 0xffff);
                  uVar23 = uVar23 + 1;
                } while (uVar15 != uVar23);
              }
              break;
            case 6:
              if (in_ECX[2] == 8) {
                local_7c = 0xd;
                recovered_10002410((void *)(iVar30 + local_a8 * (uintptr_t)(uintptr_t)(uintptr_t)uVar15 * 4),local_44,uVar15 << 2);
              }
              else if (uVar15 != 0) {
                iVar30 = iVar30 + 3 + uVar15 * local_d0;
                uVar23 = 0;
                do {
                  *(char *)(iVar30 + -3 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) =
                       (char)(((uint)(ushort)(*(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 8) << 8 |
                                             *(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 8) >> 8) * 0xff +
                              0x7fff) / 0xffff);
                  *(char *)(iVar30 + -2 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) =
                       (char)(((uint)(ushort)(*(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 8 + 2) << 8 |
                                             *(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 8 + 2) >> 8) * 0xff +
                              0x7fff) / 0xffff);
                  *(char *)(iVar30 + -1 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) =
                       (char)(((uint)(ushort)(*(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 8 + 4) << 8 |
                                             *(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 8 + 4) >> 8) * 0xff +
                              0x7fff) / 0xffff);
                  *(char *)(iVar30 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4) =
                       (char)(((uint)(ushort)(*(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 8 + 6) << 8 |
                                             *(ushort *)(local_44 + (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 8 + 6) >> 8) * 0xff +
                              0x7fff) / 0xffff);
                  uVar23 = uVar23 + 1;
                } while (uVar15 != uVar23);
              }
            }
            uVar5 = local_2c;
            uVar8 = local_30;
            pbVar12 = local_34;
            local_34 = local_44;
            local_44 = pbVar12;
            local_30 = local_40;
            local_40 = uVar8;
            local_2c = local_3c;
            local_3c = uVar5;
            local_a8 = local_a8 + 1;
            local_d0 = local_d0 + 4;
            bVar33 = true;
          } while (local_a8 < *puVar21);
        }
        local_d8 = (uint *)CONCAT31((int3)(local_84 >> 8),local_84 == local_8c);
switchD_1000bd79_caseD_1000c1a4:
        local_40 = 0;
        recovered_10006d50(local_44);
        local_30 = 0;
        recovered_10006d50(local_34);
      }
      recovered_10006d50(pbVar10);
    }
  }
  else {
    uVar15 = in_ECX[1];
    if ((uVar23 != 0) && ((int)((ulonglong)uVar23 * (ulonglong)uVar15 >> 0x20) != 0)) {
LAB_1000af8d:
      local_d8 = (uint *)0x0;
      goto LAB_1000bbdc;
    }
    local_d8 = (uint *)0x0;
    if (0x3fffffff < uVar15 * uVar23) goto LAB_1000bbdc;
    uVar6 = uVar15 * (uintptr_t)(uintptr_t)(uintptr_t)uVar23 * 4;
    local_4c = in_ECX[2];
    uVar25 = in_ECX[3];
    puVar21 = &DAT_10014bfc;
    local_c0 = &DAT_10014c34;
    iVar30 = 7;
    puVar14 = &DAT_10014c18;
    puVar24 = &DAT_10014be0;
    local_d8 = (uint *)0x0;
    do {
      uVar31 = 0;
      if (*puVar24 < uVar23) {
        uVar31 = (~*puVar24 + uVar23) / *puVar21 + 1;
      }
      if (*puVar14 < uVar15) {
        uVar7 = (~*puVar14 + uVar15) / *local_c0 + 1;
        if ((uVar31 != 0) && (uVar7 != 0)) {
          uVar22 = 0;
          if (uVar25 < 7 && (~(0x5dU >> ((byte)uVar25 & 0x1f)) & 1) == 0) {
            uVar22 = *(int *)(&DAT_10014c6c + uVar25 * 4) * local_4c;
          }
          if ((((int)((ulonglong)uVar31 * (ulonglong)uVar22 >> 0x20) != 0) ||
              (uVar31 = (uVar22 * uVar31 + 7 >> 3) + 1,
              (int)((ulonglong)uVar31 * (ulonglong)uVar7 >> 0x20) != 0)) ||
             (uVar31 = uVar31 * uVar7, bVar33 = CARRY4((uint)local_d8,uVar31),
             local_d8 = (uint *)((int)local_d8 + uVar31), bVar33)) goto LAB_1000af8d;
        }
      }
      puVar21 = puVar21 + 1;
      local_c0 = local_c0 + 1;
      puVar14 = puVar14 + 1;
      puVar24 = puVar24 + 1;
      iVar30 = iVar30 + -1;
    } while (iVar30 != 0);
    local_9c = (void *)0x0;
    local_98 = 0;
    local_94 = 0;
    local_90 = (void *)0x0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    local_7c = 0xe;
    uVar8 = recovered_10014430((int *)&local_9c,(int *)in_EDX,local_d8);
    local_d8 = (uint *)0x0;
    if ((char)uVar8 != '\0') {
      param_4[1] = 0;
      if ((uint)param_4[2] < uVar6) {
        local_7c = 0xf;
        pvVar9 = recovered_10006cf0(uVar6);
        pvVar28 = (void *)*param_4;
        iVar30 = param_4[1];
        if (iVar30 != 0) {
          iVar18 = 0;
          do {
            *(undefined1 *)((int)pvVar9 + iVar18) = *(undefined1 *)((int)pvVar28 + iVar18);
            iVar18 = iVar18 + 1;
          } while (iVar30 != iVar18);
        }
        recovered_10006d50(pvVar28);
        *param_4 = (int)pvVar9;
        param_4[2] = uVar6;
        local_d8 = (uint *)param_4[1];
      }
      while (local_d8 < uVar6) {
        *(undefined1 *)(*param_4 + (int)local_d8) = 0;
        local_d8 = (uint *)(param_4[1] + 1);
        param_4[1] = (int)local_d8;
      }
      uVar15 = in_ECX[3];
      local_38 = 1;
      if (((uVar15 < 7) && ((0x5dU >> (uVar15 & 0x1f) & 1) != 0)) &&
         ((7 < *(int *)(&DAT_10014c6c + (uintptr_t)(uintptr_t)(uintptr_t)uVar15 * 4) * in_ECX[2] &&
          (local_38 = 0, (0x5dU >> (uVar15 & 0x1f) & 1) != 0)))) {
        local_38 = in_ECX[2] * *(int *)(&DAT_10014c6c + (uintptr_t)(uintptr_t)(uintptr_t)uVar15 * 4) + 7 >> 3;
      }
      iVar30 = 0;
      do {
        uVar15 = (&DAT_10014be0)[iVar30];
        uVar23 = (&DAT_10014c18)[iVar30];
        uVar25 = (&DAT_10014bfc)[iVar30];
        uVar6 = (&DAT_10014c34)[iVar30];
        uVar31 = 0;
        if (uVar15 < *in_ECX) {
          uVar31 = (*in_ECX + ~uVar15) / uVar25 + 1;
        }
        if (uVar23 < in_ECX[1]) {
          local_18 = (in_ECX[1] + ~uVar23) / uVar6 + 1;
          if ((uVar31 != 0) && (local_18 != 0)) {
            uVar7 = in_ECX[3];
            uVar22 = 0;
            if ((uVar7 < 7) && ((0x5dU >> (uVar7 & 0x1f) & 1) != 0)) {
              uVar22 = in_ECX[2] * *(int *)(&DAT_10014c6c + (uintptr_t)uVar7 * 4);
            }
            if ((int)((ulonglong)uVar31 * (ulonglong)uVar22 >> 0x20) != 0) {
              local_d8 = (uint *)0x0;
              goto LAB_1000bbb4;
            }
            uVar26 = uVar22 * uVar31 + 7;
            uVar22 = uVar26 >> 3;
            uVar7 = uVar22 + 1;
            local_7c = 0x10;
            local_24 = iVar30;
            pbVar10 = recovered_10006cf0(uVar7);
            recovered_10006d50((void *)0x0);
            uVar11 = 0;
            do {
              pbVar10[uVar11] = 0;
              uVar11 = uVar11 + 1;
            } while (uVar7 != uVar11);
            local_d4 = (byte *)0x0;
            pbVar27 = (byte *)0x0;
            pbVar12 = (byte *)0x0;
            if (7 < uVar26) {
              local_7c = 0x11;
              local_28 = recovered_10006cf0(uVar22);
              recovered_10006d50((void *)0x0);
              iVar18 = uVar22 + (uVar22 == 0);
              iVar30 = 0;
              do {
                local_28[iVar30] = 0;
                iVar30 = iVar30 + 1;
              } while (iVar18 != iVar30);
              local_7c = 0x12;
              pbVar27 = recovered_10006cf0(uVar22);
              recovered_10006d50((void *)0x0);
              iVar30 = 0;
              do {
                pbVar27[iVar30] = 0;
                iVar30 = iVar30 + 1;
                pbVar12 = local_28;
              } while (iVar18 != iVar30);
            }
            local_1c = -uVar22 - 2;
            local_20 = pbVar10 + 1;
            iVar30 = (uintptr_t)(uintptr_t)(uintptr_t)uVar15 * 4;
            local_cc = uVar23 << 2;
            iVar18 = uVar25 * 4;
            uVar15 = 0;
            do {
              in_EDX_00 = pbVar27;
              local_4c = uVar15;
              local_48 = pbVar12;
              if ((local_1c < local_84) || (uVar15 = uVar7 + local_84, local_8c < uVar15)) {
switchD_1000b6e0_caseD_1000bb83:
                recovered_10006d50(in_EDX_00);
                recovered_10006d50(local_48);
                recovered_10006d50(pbVar10);
                local_d8 = (uint *)0x0;
                goto LAB_1000bbb4;
              }
              local_7c = 0x13;
              recovered_10002410(pbVar10,(void *)(local_84 + (int)local_90),uVar7);
              local_7c = 0x14;
              local_84 = uVar15;
              uVar8 = recovered_10014590((uint)*pbVar10,in_EDX_00,local_20,(int)local_d4,uVar22,
                                         local_38);
              if (((char)uVar8 == '\0') || (6 < in_ECX[3])) goto switchD_1000b6e0_caseD_1000bb83;
              uVar15 = *in_ECX;
              iVar4 = *param_4;
              switch((uintptr_t)(in_ECX[3])) {
              case 0:
                if (in_ECX[2] == 8) {
                  pcVar29 = (char *)(uVar15 * local_cc + 3 + iVar4 + iVar30);
                  pbVar12 = in_EDX_00;
                  uVar15 = uVar31;
                  do {
                    bVar2 = *pbVar12;
                    uVar23 = *(uint *)(param_3 + 0xc);
                    bVar1 = *(byte *)(param_3 + 0x1c);
                    pcVar29[-3] = bVar2;
                    pcVar29[-2] = bVar2;
                    pcVar29[-1] = bVar2;
                    *pcVar29 = -(~bVar1 & 1 | uVar23 != bVar2);
                    pbVar12 = pbVar12 + 1;
                    pcVar29 = pcVar29 + iVar18;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                else {
                  pbVar12 = in_EDX_00 + 1;
                  pcVar29 = (char *)(uVar15 * local_cc + 3 + iVar4 + iVar30);
                  uVar15 = uVar31;
                  do {
                    uVar25 = (uint)(ushort)(*(ushort *)(pbVar12 + -1) << 8 |
                                           *(ushort *)(pbVar12 + -1) >> 8);
                    uVar23 = *(uint *)(param_3 + 0xc);
                    bVar2 = *(byte *)(param_3 + 0x1c);
                    cVar13 = (char)((uVar25 * 0xff + 0x7fff) / 0xffff);
                    pcVar29[-3] = cVar13;
                    pcVar29[-2] = cVar13;
                    pcVar29[-1] = cVar13;
                    *pcVar29 = -(~bVar2 & 1 | uVar25 != uVar23);
                    pbVar12 = pbVar12 + 2;
                    pcVar29 = pcVar29 + iVar18;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                break;
              default:
                goto switchD_1000b6e0_caseD_1000bb83;
              case 2:
                if (in_ECX[2] == 8) {
                  pbVar12 = in_EDX_00 + 2;
                  puVar16 = (undefined1 *)(uVar15 * local_cc + 3 + iVar4 + iVar30);
                  uVar15 = uVar31;
                  do {
                    bVar2 = pbVar12[-2];
                    uVar20 = (undefined2)CONCAT31((uint3)bVar2,0xff);
                    if (((*(char *)(param_3 + 0x1d) == '\x01') &&
                        (*(uint *)(param_3 + 0x10) == (uint)(uint3)bVar2)) &&
                       (*(uint *)(param_3 + 0x14) == (uint)pbVar12[-1])) {
                      uVar20 = CONCAT11(bVar2,-(*(uint *)(param_3 + 0x18) != (uint)*pbVar12));
                    }
                    puVar16[-3] = (char)((ushort)uVar20 >> 8);
                    puVar16[-2] = pbVar12[-1];
                    puVar16[-1] = *pbVar12;
                    *puVar16 = (char)uVar20;
                    pbVar12 = pbVar12 + 3;
                    puVar16 = puVar16 + iVar18;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                else {
                  pbVar12 = in_EDX_00 + 5;
                  pcVar29 = (char *)(uVar15 * local_cc + 3 + iVar4 + iVar30);
                  uVar15 = uVar31;
                  do {
                    uVar19 = (uint)(ushort)(*(ushort *)(pbVar12 + -5) << 8 |
                                           *(ushort *)(pbVar12 + -5) >> 8);
                    uVar32 = (uint)(ushort)(*(ushort *)(pbVar12 + -3) << 8 |
                                           *(ushort *)(pbVar12 + -3) >> 8);
                    uVar26 = (uint)(ushort)(*(ushort *)(pbVar12 + -1) << 8 |
                                           *(ushort *)(pbVar12 + -1) >> 8);
                    bVar2 = *(byte *)(param_3 + 0x1d);
                    uVar23 = *(uint *)(param_3 + 0x10);
                    uVar25 = *(uint *)(param_3 + 0x14);
                    uVar11 = *(uint *)(param_3 + 0x18);
                    pcVar29[-3] = (char)((uVar19 * 0xff + 0x7fff) / 0xffff);
                    pcVar29[-2] = (char)((uVar32 * 0xff + 0x7fff) / 0xffff);
                    pcVar29[-1] = (char)((uVar26 * 0xff + 0x7fff) / 0xffff);
                    *pcVar29 = -((uVar26 != uVar11 || uVar32 != uVar25) |
                                ~bVar2 & 1 | uVar19 != uVar23);
                    pbVar12 = pbVar12 + 6;
                    pcVar29 = pcVar29 + iVar18;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                break;
              case 3:
                uVar23 = *(uint *)(param_3 + 4);
                pvVar28 = (void *)(uVar15 * local_cc + iVar4 + iVar30);
                pbVar12 = in_EDX_00;
                uVar15 = uVar31;
                do {
                  if (uVar23 >> 2 <= (uint)*pbVar12) goto switchD_1000b6e0_caseD_1000bb83;
                  local_7c = 0x15;
                  recovered_10002410(pvVar28,(void *)((uint)*pbVar12 * 4 + *(int *)param_3),4);
                  pvVar28 = (void *)((int)pvVar28 + iVar18);
                  pbVar12 = pbVar12 + 1;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
                break;
              case 4:
                if (in_ECX[2] == 8) {
                  pbVar12 = (byte *)(uVar15 * local_cc + 3 + iVar4 + iVar30);
                  pbVar27 = in_EDX_00;
                  uVar15 = uVar31;
                  do {
                    bVar2 = *pbVar27;
                    pbVar12[-3] = bVar2;
                    pbVar12[-2] = bVar2;
                    pbVar12[-1] = *pbVar27;
                    *pbVar12 = pbVar27[1];
                    pbVar12 = pbVar12 + iVar18;
                    pbVar27 = pbVar27 + 2;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                else {
                  puVar16 = (undefined1 *)(uVar15 * local_cc + 3 + iVar4 + iVar30);
                  pbVar12 = in_EDX_00 + 3;
                  uVar15 = uVar31;
                  do {
                    uVar3 = *(ushort *)(pbVar12 + -1);
                    uVar17 = (undefined1)
                             (((uint)(ushort)(*(ushort *)(pbVar12 + -3) << 8 |
                                             *(ushort *)(pbVar12 + -3) >> 8) * 0xff + 0x7fff) /
                             0xffff);
                    puVar16[-3] = uVar17;
                    puVar16[-2] = uVar17;
                    puVar16[-1] = uVar17;
                    *puVar16 = (char)(((uint)(ushort)(uVar3 << 8 | uVar3 >> 8) * 0xff + 0x7fff) /
                                     0xffff);
                    puVar16 = puVar16 + iVar18;
                    pbVar12 = pbVar12 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                break;
              case 6:
                if (in_ECX[2] == 8) {
                  pvVar28 = (void *)(uVar15 * local_cc + iVar4 + iVar30);
                  pbVar12 = in_EDX_00;
                  uVar15 = uVar31;
                  do {
                    local_7c = 0x16;
                    recovered_10002410(pvVar28,pbVar12,4);
                    pvVar28 = (void *)((int)pvVar28 + iVar18);
                    pbVar12 = pbVar12 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                else {
                  puVar16 = (undefined1 *)(uVar15 * local_cc + 3 + iVar4 + iVar30);
                  pbVar12 = in_EDX_00 + 7;
                  uVar15 = uVar31;
                  do {
                    puVar16[-3] = (char)(((uint)(ushort)(*(ushort *)(pbVar12 + -7) << 8 |
                                                        *(ushort *)(pbVar12 + -7) >> 8) * 0xff +
                                         0x7fff) / 0xffff);
                    puVar16[-2] = (char)(((uint)(ushort)(*(ushort *)(pbVar12 + -5) << 8 |
                                                        *(ushort *)(pbVar12 + -5) >> 8) * 0xff +
                                         0x7fff) / 0xffff);
                    puVar16[-1] = (char)(((uint)(ushort)(*(ushort *)(pbVar12 + -3) << 8 |
                                                        *(ushort *)(pbVar12 + -3) >> 8) * 0xff +
                                         0x7fff) / 0xffff);
                    *puVar16 = (char)(((uint)(ushort)(*(ushort *)(pbVar12 + -1) << 8 |
                                                     *(ushort *)(pbVar12 + -1) >> 8) * 0xff + 0x7fff
                                      ) / 0xffff);
                    puVar16 = puVar16 + iVar18;
                    pbVar12 = pbVar12 + 8;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
              }
              uVar15 = local_4c + 1;
              local_cc = local_cc + (uintptr_t)uVar6 * 4;
              pbVar12 = in_EDX_00;
              pbVar27 = local_48;
              local_d4 = in_EDX_00;
            } while (uVar15 < local_18);
            recovered_10006d50(local_48);
            recovered_10006d50(in_EDX_00);
            recovered_10006d50(pbVar10);
            iVar30 = local_24;
          }
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 != 7);
      local_d8 = (uint *)(uint)(local_84 == local_8c);
    }
  }
LAB_1000bbb4:
  local_8c = 0;
  recovered_10006d50(local_90);
  local_98 = 0;
  recovered_10006d50(local_9c);
LAB_1000bbdc:
  recovered_10007320(&local_80);
  return (uint)local_d8;
}

#undef DAT_10014be0
#undef DAT_10014bfc
#undef DAT_10014c18
#undef DAT_10014c34
#undef DAT_10014c6c
#undef DAT_10014e90
#undef PTR_recovered_10006c80_10015008
#undef auStackY_170
#undef auStack_14
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c0
#undef local_a8
#undef local_a4
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_4c
#undef local_48
#undef local_44
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
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c500
 */

void recovered_1000c500(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(in_ECX + 0x50);
  if (iVar3 != 0) {
    iVar2 = iVar3 * 0x28 + -8;
    do {
      iVar1 = *(int *)(in_ECX + 0x4c);
      *(undefined4 *)(iVar1 + iVar2) = 0;
      recovered_10006d50(*(void **)(iVar1 + -4 + iVar2));
      iVar2 = iVar2 + -0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(in_ECX + 0x50) = 0;
  recovered_10006d50(*(void **)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x44) = 0;
  recovered_10006d50(*(void **)(in_ECX + 0x40));
  *(undefined4 *)(in_ECX + 0x38) = 0;
  recovered_10006d50(*(void **)(in_ECX + 0x34));
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  recovered_10006d50(*(void **)(in_ECX + 0x28));
  return;
}


#undef DAT_10014ec0
#define DAT_10014ec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5feU)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c590
 */

uint recovered_1000c590(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint *******size;
  uint *******pppppppuVar3;
  uint *******pointer;
  uint uVar4;
  bool bVar5;

  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  recovered_10006d50((void *)param_2[2]);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  recovered_10006d50((void *)0x0);
  local_20 = auStackY_f0 + 0x80;
  local_30 = PTR_recovered_10006c80_10015008;
  local_2c = &DAT_10014ec0;
  local_24 = 0x255;
  local_28 = auStack_1c + 0x18;
  recovered_100072f0(&local_48);
  if (param_1 == (undefined4 *)0x0) {
LAB_1000c694:
    pointer = (uint *******)0x0;
  }
  else {
    local_44 = 1;
    piVar1 = recovered_10005970((int)param_1,((uintptr_t)pf_module_state+0x523U));
    if (piVar1 == (int *)0x0) goto LAB_1000c694;
    local_44 = 2;
    iVar2 = recovered_10006340(piVar1,0,2);
    if (iVar2 != 0) {
LAB_1000c676:
      local_44 = 7;
      recovered_10005e10(piVar1);
      pointer = (uint *******)0x0;
      uVar4 = 0;
      goto LAB_1000c698;
    }
    local_44 = 3;
    size = (uint *******)recovered_100063e0((int)piVar1);
    if ((int)size < 0) goto LAB_1000c676;
    local_44 = 4;
    iVar2 = recovered_10006340(piVar1,0,0);
    if (iVar2 != 0) goto LAB_1000c676;
    if (size == (uint *******)0x0) {
      bVar5 = true;
      pointer = (uint *******)0x0;
    }
    else {
      local_44 = 5;
      pointer = recovered_10006cf0((uint)size);
      recovered_10006d50((void *)0x0);
      pppppppuVar3 = (uint *******)0x0;
      do {
        *(undefined1 *)((int)pointer + (int)pppppppuVar3) = 0;
        pppppppuVar3 = (uint *******)((int)pppppppuVar3 + 1);
      } while (size != pppppppuVar3);
      local_44 = 6;
      pppppppuVar3 = (uint *******)recovered_10005ef0((undefined1 *)pointer,1,(int)size,piVar1);
      bVar5 = pppppppuVar3 == size;
    }
    local_44 = 8;
    iVar2 = recovered_10005e10(piVar1);
    if ((bool)(bVar5 & iVar2 == 0)) {
      local_44 = 9;
      uVar4 = recovered_100082f0(pointer,size,param_2);
      goto LAB_1000c698;
    }
  }
  uVar4 = 0;
LAB_1000c698:
  recovered_10006d50(pointer);
  recovered_10007320(&local_48);
  return uVar4;
}

#undef DAT_10014ec0
#undef PTR_recovered_10006c80_10015008
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_f0
#undef auStack_1c

#undef DAT_10014ed8
#define DAT_10014ed8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x616U)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define local_75 (*(undefined4 *)(pf_stack_frame + 251))
#define local_71 (*(undefined1 *)(pf_stack_frame + 255))
#define local_70 (*(undefined4 *)(pf_stack_frame + 256))
#define local_6c (*(undefined4 *)(pf_stack_frame + 260))
#define local_58 (*(undefined * *)(pf_stack_frame + 280))
#define local_54 (*(undefined * *)(pf_stack_frame + 284))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 288))
#define local_4c (*(undefined4 *)(pf_stack_frame + 292))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 296))
#define local_3c (*(uint *)(pf_stack_frame + 308))
#define local_38 (*(uint *)(pf_stack_frame + 312))
#define local_34 (*(uint *)(pf_stack_frame + 316))
#define local_30 (*(int *)(pf_stack_frame + 320))
#define local_2c (*(undefined2 * *)(pf_stack_frame + 324))
#define local_28 (*(int *)(pf_stack_frame + 328))
#define local_24 (*(int *)(pf_stack_frame + 332))
#define local_20 (*(uint *)(pf_stack_frame + 336))
#define local_1c (*(uint *)(pf_stack_frame + 340))
#define local_18 (*(int *)(pf_stack_frame + 344))
#define auStack_14 (*(undefined1 (*)[20])(pf_stack_frame + 348))
#define local_c4 (*(uchar * *)(pf_stack_frame + 172))
#define local_c0 (*(uint *)(pf_stack_frame + 176))
#define local_bc (*(uint *)(pf_stack_frame + 180))
#define local_b8 (*(uint *)(pf_stack_frame + 184))
#define local_b4 (*(uint *)(pf_stack_frame + 188))
#define local_b0 (*(uint *)(pf_stack_frame + 192))
#define local_ac (*(uint *)(pf_stack_frame + 196))
#define auStackY_160 (*(undefined1 (*)[352])(pf_stack_frame + 16))
#define local_9c (*(uint *)(pf_stack_frame + 212))
#define local_94 (*(uint *)(pf_stack_frame + 220))
#define local_7d (*(undefined1 *)(pf_stack_frame + 243))
#define local_7c (*(undefined1 *)(pf_stack_frame + 244))
#define local_7b (*(undefined1 *)(pf_stack_frame + 245))
#define local_7a (*(undefined1 *)(pf_stack_frame + 246))
#define local_79 (*(undefined1 *)(pf_stack_frame + 247))
#define local_78 (*(undefined1 *)(pf_stack_frame + 248))
#define local_77 (*(undefined1 *)(pf_stack_frame + 249))
#define local_76 (*(undefined1 *)(pf_stack_frame + 250))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c850
 */

int recovered_1000c850(char *name,uchar *pixels,int width,int height)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  uchar *src;
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  uint *in_ECX;
  int iVar4;
  void *pointer;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  char cVar14;
  int iVar15;
  uint unaff_EBX = 0;
  int iVar16;
  uchar *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;

  local_50 = auStack_14 + 0x10;
  local_48 = auStackY_160 + 0x80;
  local_58 = PTR_recovered_10006c80_10015008;
  local_54 = &DAT_10014ed8;
  local_4c = 0xc1c;
  local_94 = unaff_EBX & 0xffffff00;
  recovered_100072f0(&local_70);
  if ((0 < height && 0 < width) && (pixels != (uchar *)0x0 && name != (char *)0x0)) {
    local_6c = 0xffffffff;
    in_ECX = recovered_10005970((int)name,((uintptr_t)pf_module_state+0x4e1U));
    if (in_ECX != (uint *)0x0) {
      local_6c = 0xffffffff;
      iVar4 = recovered_100061c0(((uintptr_t)pf_module_state+0xf2U),1,8,in_ECX);
      if (iVar4 == 8) {
        local_7d = (undefined1)((uint)width >> 0x18);
        local_7c = (undefined1)((uint)width >> 0x10);
        local_7b = (undefined1)((uint)width >> 8);
        local_7a = (undefined1)width;
        local_79 = (undefined1)((uint)height >> 0x18);
        local_78 = (undefined1)((uint)height >> 0x10);
        local_77 = (undefined1)((uint)height >> 8);
        local_76 = (undefined1)height;
        local_75 = 0x608;
        local_71 = 0;
        local_6c = 0xffffffff;
        uVar2 = recovered_1000d530(in_ECX,((uintptr_t)pf_module_state+0x4e4U),(int)&local_7d,0xd);
        local_94 = width;
        if (uVar2 == '\0') goto LAB_1000c9b7;
        if ((0x3fffffff < (uint)width) ||
           (uVar9 = width * 4 + 1, (int)((ulonglong)uVar9 * (ulonglong)(uint)height >> 0x20) != 0))
        {
          recovered_10006d50((void *)0x0);
          goto LAB_1000c9b7;
        }
        local_94 = 0x1000c864;
        uVar11 = uVar9 * height;
        local_6c = 1;
        local_20 = uVar9;
        pointer = recovered_10006cf0(uVar11);
        uVar9 = width * 4;
        recovered_10006d50((void *)0x0);
        uVar11 = uVar11 + (uVar11 == 0);
        uVar5 = 0;
        do {
          *(undefined1 *)((int)pointer + uVar5) = 0;
          uVar5 = uVar5 + 1;
        } while (uVar11 != uVar5);
        local_24 = width * -4;
        iVar15 = (int)pointer + 1;
        local_28 = uVar9 + 1;
        local_18 = uVar9 - 4;
        iVar16 = (int)pointer + 5;
        iVar4 = 0;
        local_c4 = pixels;
        do {
          src = pixels + iVar4 * uVar9;
          puVar17 = src + local_24;
          if (iVar4 == 0) {
            puVar17 = (uchar *)0x0;
          }
          bVar1 = pixels[iVar4 * uVar9];
          local_1c = (uint)bVar1;
          uVar5 = 0x100 - local_1c;
          if (-1 < (char)bVar1) {
            uVar5 = local_1c;
          }
          if (puVar17 == (uchar *)0x0) {
            local_34 = (uint)src[1];
            uVar18 = 0x100 - local_34;
            if (-1 < (char)src[1]) {
              uVar18 = local_34;
            }
            local_38 = (uint)src[2];
            uVar21 = 0x100 - local_38;
            if (-1 < (char)src[2]) {
              uVar21 = local_38;
            }
            local_3c = (uint)src[3];
            uVar7 = 0x100 - local_3c;
            if (-1 < (char)src[3]) {
              uVar7 = local_3c;
            }
            uVar5 = uVar7 + uVar21 + uVar18 + uVar5;
            local_9c = 0xffffffff;
            local_ac = 0xffffffff;
          }
          else {
            bVar13 = bVar1 - *puVar17;
            uVar18 = 0x100 - bVar13;
            if (-1 < (char)bVar13) {
              uVar18 = (uint)bVar13;
            }
            bVar13 = src[1];
            local_34 = (uint)bVar13;
            uVar21 = 0x100 - local_34;
            if (-1 < (char)bVar13) {
              uVar21 = local_34;
            }
            bVar13 = bVar13 - puVar17[1];
            uVar7 = 0x100 - bVar13;
            if (-1 < (char)bVar13) {
              uVar7 = (uint)bVar13;
            }
            bVar13 = src[2];
            local_38 = (uint)bVar13;
            uVar8 = 0x100 - local_38;
            if (-1 < (char)bVar13) {
              uVar8 = local_38;
            }
            bVar13 = bVar13 - puVar17[2];
            uVar19 = 0x100 - bVar13;
            if (-1 < (char)bVar13) {
              uVar19 = (uint)bVar13;
            }
            bVar13 = src[3];
            local_3c = (uint)bVar13;
            uVar20 = 0x100 - local_3c;
            if (-1 < (char)bVar13) {
              uVar20 = local_3c;
            }
            uVar5 = uVar20 + uVar8 + uVar21 + uVar5;
            bVar13 = bVar13 - puVar17[3];
            uVar21 = 0x100 - bVar13;
            if (-1 < (char)bVar13) {
              uVar21 = (uint)bVar13;
            }
            local_9c = uVar21 + uVar19 + uVar7 + uVar18;
            local_ac = 0;
          }
          uVar18 = uVar5;
          if (width == 1) {
            local_b4 = 0;
            local_b0 = 0;
          }
          else {
            local_b0 = 0;
            uVar21 = 4;
            local_b4 = 0;
            do {
              bVar13 = local_c4[uVar21];
              uVar7 = 0x100 - bVar13;
              if (-1 < (char)bVar13) {
                uVar7 = (uint)bVar13;
              }
              bVar23 = CARRY4(uVar7,uVar5);
              uVar5 = uVar7 + uVar5;
              local_b0 = local_b0 + bVar23;
              bVar3 = bVar13 - local_c4[uVar21 - 4];
              uVar7 = 0x100 - bVar3;
              if (-1 < (char)bVar3) {
                uVar7 = (uint)bVar3;
              }
              bVar23 = CARRY4(uVar7,uVar18);
              uVar18 = uVar7 + uVar18;
              local_b4 = local_b4 + bVar23;
              if (puVar17 != (uchar *)0x0) {
                bVar13 = bVar13 - puVar17[uVar21];
                uVar7 = 0x100 - bVar13;
                if (-1 < (char)bVar13) {
                  uVar7 = (uint)bVar13;
                }
                bVar23 = CARRY4(local_9c,uVar7);
                local_9c = local_9c + uVar7;
                local_ac = local_ac + bVar23;
              }
              uVar21 = uVar21 + 1;
            } while (uVar9 != uVar21);
          }
          bVar23 = local_b4 - local_b0 < (uint)(uVar18 < uVar5);
          bVar22 = local_b4 < local_b0 || bVar23;
          if (local_b4 < local_b0 || bVar23) {
            uVar5 = uVar18;
            local_b0 = local_b4;
          }
          cVar14 = '\x02';
          if (local_b0 <= local_ac && (uint)(local_9c < uVar5) <= local_ac - local_b0) {
            cVar14 = bVar22;
          }
          if (puVar17 == (uchar *)0x0) {
            cVar14 = bVar22;
          }
          iVar12 = iVar4 * local_20;
          *(char *)((int)pointer + iVar12) = cVar14;
          local_30 = iVar4;
          if (cVar14 == '\x02') {
            if (puVar17 == (uchar *)0x0) goto LAB_1000caa0;
            uVar5 = 0;
            do {
              *(uchar *)(iVar15 + uVar5) = local_c4[uVar5] - puVar17[uVar5];
              uVar5 = uVar5 + 1;
            } while (uVar9 != uVar5);
          }
          else if (cVar14 == '\x01') {
            *(byte *)((int)pointer + iVar12 + 1) = bVar1;
            *(char *)((int)pointer + iVar12 + 2) = (char)local_34;
            *(char *)((int)pointer + iVar12 + 3) = (char)local_38;
            *(char *)((int)pointer + iVar12 + 4) = (char)local_3c;
            if (width != 1) {
              iVar4 = 0;
              do {
                *(uchar *)(iVar16 + iVar4) = local_c4[iVar4 + 4] - local_c4[iVar4];
                iVar4 = iVar4 + 1;
              } while (local_18 != iVar4);
            }
          }
          else {
LAB_1000caa0:
            local_6c = 2;
            recovered_10002410((void *)((int)pointer + iVar12 + 1),src,uVar9);
          }
          iVar4 = local_30 + 1;
          local_c4 = local_c4 + uVar9;
          iVar15 = iVar15 + local_28;
          iVar16 = iVar16 + local_28;
        } while (iVar4 != height);
        local_2c = (undefined2 *)0x0;
        local_6c = 3;
        local_c4 = recovered_10006cf0(4);
        recovered_10006d50((void *)0x0);
        *(undefined2 *)local_c4 = 0x178;
        local_bc = 2;
        local_c0 = 4;
        uVar9 = 0;
        do {
          uVar5 = uVar11 - uVar9;
          if (0xfffe < uVar5) {
            uVar5 = 0xffff;
          }
          uVar18 = uVar5 + uVar9;
          if (local_bc == local_c0) {
            uVar21 = local_c0 * 2;
            if (local_c0 == 0) {
              uVar21 = 4;
            }
            if (local_c0 < uVar21) {
              local_6c = 4;
              puVar6 = recovered_10006cf0(uVar21);
              if (local_c0 != 0) {
                uVar7 = 0;
                do {
                  *(undefined1 *)((int)puVar6 + uVar7) = *(undefined1 *)((int)local_c4 + uVar7);
                  uVar7 = uVar7 + 1;
                } while (local_c0 != uVar7);
              }
              recovered_10006d50(local_c4);
              local_c0 = uVar21;
              local_c4 = (uchar *)puVar6;
            }
          }
          *(bool *)((int)local_c4 + local_bc) = uVar18 == uVar11;
          if (local_bc + 1 == local_c0) {
            uVar21 = local_c0 * 2;
            if (local_c0 == 0) {
              uVar21 = 4;
            }
            if (local_c0 < uVar21) {
              local_6c = 5;
              puVar6 = recovered_10006cf0(uVar21);
              if (local_c0 != 0) {
                uVar7 = 0;
                do {
                  *(undefined1 *)((int)puVar6 + uVar7) = *(undefined1 *)((int)local_c4 + uVar7);
                  uVar7 = uVar7 + 1;
                } while (local_bc + 1 != uVar7);
              }
              recovered_10006d50(local_c4);
              local_c0 = uVar21;
              local_c4 = (uchar *)puVar6;
            }
          }
          *(char *)((int)local_c4 + local_bc + 1) = (char)uVar5;
          if (local_bc + 2 == local_c0) {
            uVar21 = local_c0 * 2;
            if (local_c0 == 0) {
              uVar21 = 4;
            }
            if (local_c0 < uVar21) {
              local_6c = 6;
              puVar6 = recovered_10006cf0(uVar21);
              if (local_c0 != 0) {
                uVar7 = 0;
                do {
                  *(undefined1 *)((int)puVar6 + uVar7) = *(undefined1 *)((int)local_c4 + uVar7);
                  uVar7 = uVar7 + 1;
                } while (local_c0 != uVar7);
              }
              recovered_10006d50(local_c4);
              local_c0 = uVar21;
              local_c4 = (uchar *)puVar6;
            }
          }
          *(char *)((int)local_c4 + local_bc + 2) = (char)(uVar5 >> 8);
          if (local_bc + 3 == local_c0) {
            uVar21 = local_c0 * 2;
            if (local_c0 == 0) {
              uVar21 = 4;
            }
            if (local_c0 < uVar21) {
              local_6c = 7;
              puVar6 = recovered_10006cf0(uVar21);
              if (local_c0 != 0) {
                uVar7 = 0;
                do {
                  *(undefined1 *)((int)puVar6 + uVar7) = *(undefined1 *)((int)local_c4 + uVar7);
                  uVar7 = uVar7 + 1;
                } while (local_c0 != uVar7);
              }
              recovered_10006d50(local_c4);
              local_c0 = uVar21;
              local_c4 = (uchar *)puVar6;
            }
          }
          *(char *)((int)local_c4 + local_bc + 3) = (char)(uVar5 ^ 0xffff);
          if (local_bc + 4 == local_c0) {
            uVar21 = local_c0 * 2;
            if (local_c0 == 0) {
              uVar21 = 4;
            }
            if (local_c0 < uVar21) {
              local_6c = 8;
              puVar6 = recovered_10006cf0(uVar21);
              if (local_c0 != 0) {
                uVar7 = 0;
                do {
                  *(undefined1 *)((int)puVar6 + uVar7) = *(undefined1 *)((int)local_c4 + uVar7);
                  uVar7 = uVar7 + 1;
                } while (local_c0 != uVar7);
              }
              recovered_10006d50(local_c4);
              local_c4 = (uchar *)puVar6;
              local_c0 = uVar21;
            }
          }
          *(char *)((int)local_c4 + local_bc + 4) = (char)((uVar5 ^ 0xffff) >> 8);
          uVar21 = local_bc + 5;
          if (uVar11 == uVar9) {
            local_bc = uVar21;
          }
          else {
            uVar7 = uVar5 + uVar21;
            if (local_c0 < uVar7) {
              if (local_c0 == 0) {
                local_c0 = 4;
              }
              uVar8 = local_c0;
              do {
                local_c0 = uVar8;
                uVar8 = local_c0 * 2;
              } while (local_c0 < uVar7);
              local_6c = 9;
              puVar6 = recovered_10006cf0(local_c0);
              if (uVar21 != 0) {
                uVar8 = 0;
                do {
                  *(undefined1 *)((int)puVar6 + uVar8) = *(undefined1 *)((int)local_c4 + uVar8);
                  uVar8 = uVar8 + 1;
                } while (uVar21 != uVar8);
              }
              recovered_10006d50(local_c4);
              local_c4 = (uchar *)puVar6;
            }
            uVar21 = 0;
            do {
              *(undefined1 *)((int)local_c4 + uVar21 + local_bc + 5) =
                   *(undefined1 *)((int)pointer + uVar21 + uVar9);
              uVar21 = uVar21 + 1;
            } while (uVar5 != uVar21);
            local_bc = uVar7;
          }
          uVar9 = uVar18;
        } while (uVar18 < uVar11);
        uVar5 = 0;
        local_b8 = 1;
        uVar9 = 0;
        do {
          uVar18 = uVar11 - uVar5;
          if (0x15af < uVar18) {
            uVar18 = 0x15b0;
          }
          if (uVar11 != uVar5) {
            pbVar10 = (byte *)((int)pointer + uVar5);
            iVar4 = uVar18 + (uVar18 == 0);
            do {
              local_b8 = local_b8 + *pbVar10;
              uVar9 = uVar9 + local_b8;
              pbVar10 = pbVar10 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            local_b8 = local_b8 % 0xfff1;
            uVar9 = uVar9 % 0xfff1;
          }
          uVar5 = uVar5 + uVar18;
        } while (uVar5 < uVar11);
        uVar5 = local_bc + 4;
        if (local_bc < 0xfffffffc) {
          if (local_c0 < uVar5) {
            local_2c = (undefined2 *)local_c4;
            local_6c = 10;
            puVar6 = recovered_10006cf0(uVar5);
            if (local_bc != 0) {
              uVar11 = 0;
              do {
                *(undefined1 *)((int)puVar6 + uVar11) = *(undefined1 *)((int)local_c4 + uVar11);
                uVar11 = uVar11 + 1;
              } while (local_bc != uVar11);
            }
            recovered_10006d50(local_c4);
            local_c4 = (uchar *)puVar6;
          }
          *(undefined4 *)((int)local_c4 + local_bc) = 0;
        }
        iVar4 = (uintptr_t)(uintptr_t)uVar9 * 0x10000 + local_b8;
        *(char *)((int)local_c4 + local_bc) = (char)((uint)iVar4 >> 0x18);
        *(char *)((int)local_c4 + local_bc + 1) = (char)((uint)iVar4 >> 0x10);
        *(char *)((int)local_c4 + local_bc + 2) = (char)(local_b8 >> 8);
        *(char *)((int)local_c4 + local_bc + 3) = (char)local_b8;
        uVar9 = 0;
        do {
          uVar11 = uVar5 - uVar9;
          if (uVar5 < uVar9 || uVar11 == 0) {
            recovered_10006d50(local_c4);
            recovered_10006d50(pointer);
            local_6c = 0xffffffff;
            PF_PART1(local_bc, 0) = recovered_1000d530(in_ECX,((uintptr_t)pf_module_state+0x4e9U),0,0);
            goto LAB_1000c9c3;
          }
          if (0x3ffff < uVar11) {
            uVar11 = 0x40000;
          }
          local_6c = 0xb;
          uVar2 = recovered_1000d530(in_ECX,((uintptr_t)pf_module_state+0x519U),(int)local_c4 + uVar9,uVar11);
          uVar9 = uVar9 + uVar11;
        } while (uVar2 != '\0');
        recovered_10006d50(local_c4);
        recovered_10006d50(pointer);
        PF_PART1(local_bc, 0) = 0;
      }
      else {
LAB_1000c9b7:
        PF_PART1(local_bc, 0) = 0;
      }
LAB_1000c9c3:
      local_6c = 0xffffffff;
      iVar4 = recovered_10005e10((int *)in_ECX);
      iVar4 = CONCAT31((int3)(local_94 >> 8),iVar4 == 0 & (byte)local_bc);
      goto LAB_1000c9e4;
    }
  }
  iVar4 = 0;
LAB_1000c9e4:
  recovered_10007320(&local_70);
  return iVar4;
}

#undef DAT_10014ed8
#undef PTR_recovered_10006c80_10015008
#undef local_75
#undef local_71
#undef local_70
#undef local_6c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef auStack_14
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef auStackY_160
#undef local_9c
#undef local_94
#undef local_7d
#undef local_7c
#undef local_7b
#undef local_7a
#undef local_79
#undef local_78
#undef local_77
#undef local_76

#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d530
 */

uchar recovered_1000d530(uint *in_ECX,int in_EDX,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  if (param_3 != 0 || param_4 == 0) {
    local_18[0] = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
                  param_4 << 0x18;
    uVar1 = recovered_10013fa0(0,(uchar *)in_EDX,4);
    if (param_4 != 0) {
      uVar1 = recovered_10013fa0(uVar1,(uchar *)param_3,param_4);
    }
    local_1c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    iVar2 = recovered_100061c0((int)local_18,1,4,in_ECX);
    if (((iVar2 == 4) && (iVar2 = recovered_100061c0(in_EDX,1,4,in_ECX), iVar2 == 4)) &&
       ((param_4 == 0 || (uVar1 = recovered_100061c0(param_3,1,param_4,in_ECX), uVar1 == param_4))))
    {
      iVar2 = recovered_100061c0((int)&local_1c,1,4,in_ECX);
      return iVar2 == 4;
    }
  }
  return '\0';
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5f0
 */

void recovered_1000d5f0(int in_stack_00000004,int in_stack_00000008,uint in_stack_0000000c,
                       char *in_stack_00000010)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000c850((char *)in_stack_00000004,(uchar *)in_stack_00000008,in_stack_0000000c,
                     (int)in_stack_00000010);
  return;
}


#undef DAT_10014ef4
#define DAT_10014ef4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x632U)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define auStackY_170 (*(undefined1 (*)[368])(pf_stack_frame + 16))
#define local_ce (*(undefined2 *)(pf_stack_frame + 178))
#define local_cc (*(undefined1 *)(pf_stack_frame + 180))
#define local_cb (*(undefined1 *)(pf_stack_frame + 181))
#define local_ca (*(undefined1 *)(pf_stack_frame + 182))
#define local_c9 (*(undefined1 *)(pf_stack_frame + 183))
#define local_c8 (*(undefined4 *)(pf_stack_frame + 184))
#define local_c4 (*(undefined4 *)(pf_stack_frame + 188))
#define local_c0 (*(int *)(pf_stack_frame + 192))
#define local_bc (*(int *)(pf_stack_frame + 196))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 200))
#define local_b4 (*(undefined4 *)(pf_stack_frame + 204))
#define local_a0 (*(undefined * *)(pf_stack_frame + 224))
#define local_9c (*(undefined * *)(pf_stack_frame + 228))
#define local_98 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_94 (*(undefined4 *)(pf_stack_frame + 236))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 240))
#define local_80 (*(undefined4 *)(pf_stack_frame + 256))
#define local_7c (*(undefined1 *)(pf_stack_frame + 260))
#define local_7b (*(undefined1 *)(pf_stack_frame + 261))
#define local_7a (*(undefined1 *)(pf_stack_frame + 262))
#define local_79 (*(undefined1 *)(pf_stack_frame + 263))
#define local_78 (*(undefined1 *)(pf_stack_frame + 264))
#define local_77 (*(undefined1 *)(pf_stack_frame + 265))
#define local_76 (*(undefined1 *)(pf_stack_frame + 266))
#define local_75 (*(undefined1 *)(pf_stack_frame + 267))
#define local_74 (*(undefined4 *)(pf_stack_frame + 268))
#define local_70 (*(undefined4 *)(pf_stack_frame + 272))
#define auStack_44 (*(undefined1 (*)[68])(pf_stack_frame + 316))
#define local_6c (*(undefined1 *)(pf_stack_frame + 276))
#define local_6b (*(undefined1 *)(pf_stack_frame + 277))
#define local_6a (*(undefined1 *)(pf_stack_frame + 278))
#define local_69 (*(undefined1 *)(pf_stack_frame + 279))
#define local_68 (*(undefined4 *)(pf_stack_frame + 280))
#define local_64 (*(undefined4 *)(pf_stack_frame + 284))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 288))
#define local_56 (*(undefined1 *)(pf_stack_frame + 298))
#define local_53 (*(undefined1 *)(pf_stack_frame + 301))
#define local_50 (*(undefined1 *)(pf_stack_frame + 304))
#define local_4c (*(undefined1 *)(pf_stack_frame + 308))
#define local_49 (*(undefined4 *)(pf_stack_frame + 311))
#define local_45 (*(undefined1 *)(pf_stack_frame + 315))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d620
 */

byte recovered_1000d620(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[416] __attribute__((aligned(16))) = {0};

  uint size;
  uint uVar1;
  uint *puVar2;
  int iVar3;
  void *pointer;
  byte bVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;

  local_98 = auStack_44 + 0x40;
  local_90 = auStackY_170 + 0x80;
  local_a0 = PTR_recovered_10006c80_10015008;
  local_9c = &DAT_10014ef4;
  local_94 = 0x36f;
  recovered_100072f0(&local_b8);
  bVar4 = 0;
  if ((((param_3 < 0x40000000) && (param_1 != (undefined4 *)0x0)) && (param_2 != 0)) &&
     ((0 < (int)param_3 && (0 < (int)param_4)))) {
    size = param_3 * 4;
    if (((int)((ulonglong)size * (ulonglong)param_4 >> 0x20) == 0) &&
       (uVar1 = size * param_4, uVar1 < 0xffffff86)) {
      local_b4 = 0xffffffff;
      puVar2 = recovered_10005970((int)param_1,((uintptr_t)pf_module_state+0x4e1U));
      if (puVar2 != (uint *)0x0) {
        local_c8 = 0;
        local_ce = 0x4d42;
        iVar3 = uVar1 + 0x7a;
        local_cc = (undefined1)iVar3;
        local_cb = (undefined1)((uint)iVar3 >> 8);
        local_ca = (undefined1)((uint)iVar3 >> 0x10);
        local_c9 = (undefined1)((uint)iVar3 >> 0x18);
        local_c4 = 0x7a;
        recovered_100027f0(local_60,0x4c);
        local_80 = 0x6c;
        local_7c = (undefined1)param_3;
        local_7b = (undefined1)(param_3 >> 8);
        local_7a = (undefined1)(param_3 >> 0x10);
        local_79 = (undefined1)(param_3 >> 0x18);
        iVar3 = -param_4;
        local_78 = (undefined1)iVar3;
        local_77 = (undefined1)((uint)iVar3 >> 8);
        local_76 = (undefined1)((uint)iVar3 >> 0x10);
        local_75 = (undefined1)((uint)iVar3 >> 0x18);
        local_74 = 0x200001;
        local_70 = 3;
        local_6c = (undefined1)uVar1;
        local_6b = (undefined1)(uVar1 >> 8);
        local_6a = (undefined1)(uVar1 >> 0x10);
        local_69 = (undefined1)(uVar1 >> 0x18);
        local_68 = 0xb13;
        local_64 = 0xb13;
        local_56 = 0xff;
        local_53 = 0xff;
        local_50 = 0xff;
        local_4c = 0;
        local_49 = 0x524742ff;
        local_45 = 0x73;
        local_b4 = 0xffffffff;
        iVar3 = recovered_100061c0((int)&local_ce,1,0xe,puVar2);
        uVar1 = 0;
        bVar6 = false;
        if (iVar3 == 0xe) {
          local_b4 = 0xffffffff;
          iVar3 = recovered_100061c0((int)&local_80,1,0x6c,puVar2);
          bVar6 = iVar3 == 0x6c;
        }
        local_b4 = 0xffffffff;
        pointer = recovered_10006cf0(size);
        recovered_10006d50((void *)0x0);
        do {
          *(undefined1 *)((int)pointer + uVar1) = 0;
          uVar1 = uVar1 + 1;
        } while (size != uVar1);
        iVar3 = 0;
        bVar7 = false;
        if (bVar6) {
          iVar5 = param_2 + 3;
          do {
            uVar1 = 0;
            do {
              *(undefined1 *)((int)pointer + uVar1 * 4) = *(undefined1 *)(iVar5 + -1 + uVar1 * 4);
              *(undefined1 *)((int)pointer + uVar1 * 4 + 1) =
                   *(undefined1 *)(iVar5 + -2 + uVar1 * 4);
              *(undefined1 *)((int)pointer + uVar1 * 4 + 2) =
                   *(undefined1 *)(iVar5 + -3 + uVar1 * 4);
              *(undefined1 *)((int)pointer + uVar1 * 4 + 3) = *(undefined1 *)(iVar5 + uVar1 * 4);
              uVar1 = uVar1 + 1;
            } while (param_3 != uVar1);
            local_b4 = 2;
            local_c0 = iVar3;
            local_bc = iVar5;
            uVar1 = recovered_100061c0((int)pointer,1,size,puVar2);
            bVar7 = uVar1 == size;
            if (!bVar7) break;
            iVar3 = local_c0 + 1;
            iVar5 = local_bc + size;
          } while (iVar3 < (int)param_4);
        }
        local_b4 = 1;
        iVar3 = recovered_10005e10((int *)puVar2);
        bVar4 = bVar7 & iVar3 == 0;
        recovered_10006d50(pointer);
        goto LAB_1000d95c;
      }
    }
    bVar4 = 0;
  }
LAB_1000d95c:
  recovered_10007320(&local_b8);
  return bVar4;
}

#undef DAT_10014ef4
#undef PTR_recovered_10006c80_10015008
#undef auStackY_170
#undef local_ce
#undef local_cc
#undef local_cb
#undef local_ca
#undef local_c9
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_80
#undef local_7c
#undef local_7b
#undef local_7a
#undef local_79
#undef local_78
#undef local_77
#undef local_76
#undef local_75
#undef local_74
#undef local_70
#undef auStack_44
#undef local_6c
#undef local_6b
#undef local_6a
#undef local_69
#undef local_68
#undef local_64
#undef local_60
#undef local_56
#undef local_53
#undef local_50
#undef local_4c
#undef local_49
#undef local_45

#undef DAT_10014efc
#define DAT_10014efc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63aU)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 260))
#define local_60 (*(undefined4 *)(pf_stack_frame + 192))
#define local_5c (*(undefined4 *)(pf_stack_frame + 196))
#define local_58 (*(undefined4 *)(pf_stack_frame + 200))
#define local_54 (*(undefined1 *)(pf_stack_frame + 204))
#define local_53 (*(undefined1 *)(pf_stack_frame + 205))
#define local_52 (*(undefined1 *)(pf_stack_frame + 206))
#define local_51 (*(undefined1 *)(pf_stack_frame + 207))
#define local_50 (*(undefined2 *)(pf_stack_frame + 208))
#define local_4c (*(int *)(pf_stack_frame + 212))
#define local_48 (*(undefined4 *)(pf_stack_frame + 216))
#define local_44 (*(undefined4 *)(pf_stack_frame + 220))
#define local_30 (*(undefined * *)(pf_stack_frame + 240))
#define local_2c (*(undefined * *)(pf_stack_frame + 244))
#define auStackY_110 (*(undefined1 (*)[272])(pf_stack_frame + 16))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 248))
#define local_24 (*(undefined4 *)(pf_stack_frame + 252))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 256))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d9f0
 */

byte recovered_1000d9f0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  uint size;
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  void *pointer;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_110 + 0x80;
  local_30 = PTR_recovered_10006c80_10015008;
  local_2c = &DAT_10014efc;
  local_24 = 0x282;
  recovered_100072f0(&local_48);
  if ((0 < param_4 && 0 < param_3) && (param_2 != 0 && param_1 != (undefined4 *)0x0)) {
    local_44 = 0xffffffff;
    puVar1 = recovered_10005970((int)param_1,((uintptr_t)pf_module_state+0x4e1U));
    if (puVar1 != (uint *)0x0) {
      local_58 = 0;
      local_5c = 0;
      local_60 = 0x20000;
      local_54 = (undefined1)param_3;
      local_53 = (undefined1)((uint)param_3 >> 8);
      local_52 = (undefined1)param_4;
      local_51 = (undefined1)((uint)param_4 >> 8);
      local_50 = 0x2820;
      local_44 = 0xffffffff;
      iVar2 = recovered_100061c0((int)&local_60,1,0x12,puVar1);
      size = param_3 * 4;
      pointer = (void *)0x0;
      if (size != 0) {
        local_44 = 0xffffffff;
        pointer = recovered_10006cf0(size);
        recovered_10006d50((void *)0x0);
        uVar3 = 0;
        do {
          *(undefined1 *)((int)pointer + uVar3) = 0;
          uVar3 = uVar3 + 1;
        } while (size != uVar3);
      }
      uVar3 = 0;
      if (iVar2 == 0x12) {
        local_4c = 0x1000da04;
        iVar2 = 0x1000da04;
        do {
          while( true ) {
            iVar4 = uVar3 * size + param_2 + 3;
            iVar6 = 0;
            do {
              *(undefined1 *)((int)pointer + iVar6 * 4) = *(undefined1 *)(iVar4 + -1 + iVar6 * 4);
              *(undefined1 *)((int)pointer + iVar6 * 4 + 1) =
                   *(undefined1 *)(iVar4 + -2 + iVar6 * 4);
              *(undefined1 *)((int)pointer + iVar6 * 4 + 2) =
                   *(undefined1 *)(iVar4 + -3 + iVar6 * 4);
              *(undefined1 *)((int)pointer + iVar6 * 4 + 3) = *(undefined1 *)(iVar4 + iVar6 * 4);
              iVar6 = iVar6 + 1;
            } while (param_3 != iVar6);
            if (size == 0) break;
            local_44 = 1;
            uVar5 = recovered_100061c0((int)pointer,1,size,puVar1);
            iVar2 = local_4c;
            if ((uVar5 != size) || (uVar3 = uVar3 + 1, param_4 <= (int)uVar3)) {
              if (uVar5 != size) {
                uVar3 = 0;
                goto LAB_1000dc41;
              }
              goto LAB_1000dc05;
            }
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < param_4);
LAB_1000dc05:
        local_44 = 2;
        iVar2 = recovered_100061c0(iVar2 + 0x724c,1,0x1a,puVar1);
        uVar3 = (uint)(iVar2 == 0x1a);
      }
LAB_1000dc41:
      local_44 = 3;
      iVar2 = recovered_10005e10((int *)puVar1);
      bVar7 = (byte)uVar3 & iVar2 == 0;
      recovered_10006d50(pointer);
      goto LAB_1000dc74;
    }
  }
  bVar7 = 0;
LAB_1000dc74:
  recovered_10007320(&local_48);
  return bVar7;
}

#undef DAT_10014efc
#undef PTR_recovered_10006c80_10015008
#undef auStack_1c
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_53
#undef local_52
#undef local_51
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef auStackY_110
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10014f08
#define DAT_10014f08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x646U)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define auStack_14 (*(undefined1 (*)[20])(pf_stack_frame + 364))
#define local_e0 (*(uint *)(pf_stack_frame + 160))
#define local_dc (*(uint *)(pf_stack_frame + 164))
#define local_d8 (*(char * *)(pf_stack_frame + 168))
#define local_c8 (*(uint *)(pf_stack_frame + 184))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 208))
#define local_ac (*(undefined4 *)(pf_stack_frame + 212))
#define local_98 (*(undefined * *)(pf_stack_frame + 232))
#define local_94 (*(undefined * *)(pf_stack_frame + 236))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 240))
#define local_8c (*(undefined4 *)(pf_stack_frame + 244))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 248))
#define local_78 (*(char * *)(pf_stack_frame + 264))
#define local_74 (*(uint *)(pf_stack_frame + 268))
#define local_70 (*(char * *)(pf_stack_frame + 272))
#define local_6c (*(void * *)(pf_stack_frame + 276))
#define local_68 (*(void * *)(pf_stack_frame + 280))
#define local_64 (*(char * *)(pf_stack_frame + 284))
#define local_60 (*(void * *)(pf_stack_frame + 288))
#define local_5c (*(void * *)(pf_stack_frame + 292))
#define local_58 (*(void * *)(pf_stack_frame + 296))
#define local_54 (*(uint *)(pf_stack_frame + 300))
#define local_50 (*(void * *)(pf_stack_frame + 304))
#define local_4c (*(int *)(pf_stack_frame + 308))
#define local_48 (*(uint *)(pf_stack_frame + 312))
#define local_44 (*(char * *)(pf_stack_frame + 316))
#define local_40 (*(int *)(pf_stack_frame + 320))
#define local_3c (*(undefined4 * *)(pf_stack_frame + 324))
#define local_38 (*(void * *)(pf_stack_frame + 328))
#define local_34 (*(void * *)(pf_stack_frame + 332))
#define local_30 (*(void * *)(pf_stack_frame + 336))
#define local_2c (*(int *)(pf_stack_frame + 340))
#define local_28 (*(int *)(pf_stack_frame + 344))
#define local_24 (*(uint *)(pf_stack_frame + 348))
#define local_20 (*(int *)(pf_stack_frame + 352))
#define local_1c (*(char * *)(pf_stack_frame + 356))
#define local_18 (*(int *)(pf_stack_frame + 360))
#define auStackY_170 (*(undefined1 (*)[368])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcd0
 */

byte recovered_1000dcd0(char *param_1,char *param_2,char *param_3,uint param_4)

{
  unsigned char pf_stack_frame[416] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar14;
  uint uVar5;
  undefined4 *pointer;
  undefined1 *pointer_00;
  undefined1 uVar15;
  undefined1 *pointer_01;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint *puVar13;
  undefined1 uVar16;
  uint uVar17;
  char *pcVar18;
  byte bVar19;
  char *pcVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;

  local_90 = auStack_14 + 0x10;
  local_88 = auStackY_170 + 0x80;
  local_4c = 0x1000dce4;
  local_98 = PTR_recovered_10006c80_10015008;
  local_94 = &DAT_10014f08;
  local_8c = 0x18aa;
  recovered_100072f0(&local_b0);
  if ((0 < (int)param_4 && 0 < (int)param_3) && (param_2 != (char *)0x0 && param_1 != (char *)0x0))
  {
    uVar17 = (uint)(param_3 + 0x3f) >> 6;
    uVar21 = param_4 + 0x3f >> 6;
    if (((int)((ulonglong)uVar17 * (ulonglong)uVar21 >> 0x20) == 0) &&
       (uVar5 = uVar21 * uVar17, uVar5 < 0x40000000)) {
      local_ac = 1;
      local_54 = uVar21;
      local_48 = uVar17;
      pointer = recovered_10006cf0(0x10);
      recovered_10006d50((void *)0x0);
      *pointer = 0x706d6967;
      pointer[1] = 0x66637820;
      pointer[2] = 0x30307620;
      *(undefined2 *)(pointer + 3) = 0x33;
      local_ac = 2;
      local_3c = pointer;
      pointer_00 = recovered_10006cf0(0x20);
      *pointer_00 = *(undefined1 *)pointer;
      pointer_00[1] = *(undefined1 *)((int)pointer + 1);
      pointer_00[2] = *(undefined1 *)((int)pointer + 2);
      pointer_00[3] = *(undefined1 *)((int)pointer + 3);
      pointer_00[4] = *(undefined1 *)(pointer + 1);
      pointer_00[5] = *(undefined1 *)((int)pointer + 5);
      pointer_00[6] = *(undefined1 *)((int)pointer + 6);
      pointer_00[7] = *(undefined1 *)((int)pointer + 7);
      pointer_00[8] = *(undefined1 *)(pointer + 2);
      pointer_00[9] = *(undefined1 *)((int)pointer + 9);
      pointer_00[10] = *(undefined1 *)((int)pointer + 10);
      pointer_00[0xb] = *(undefined1 *)((int)pointer + 0xb);
      pointer_00[0xc] = *(undefined1 *)(pointer + 3);
      pointer_00[0xd] = *(undefined1 *)((int)pointer + 0xd);
      recovered_10006d50(pointer);
      uVar2 = (undefined1)((uint)param_3 >> 0x18);
      pointer_00[0xe] = uVar2;
      pointer_00[0xf] = (char)((uint)param_3 >> 0x10);
      uVar14 = (undefined1)((uint)param_3 >> 8);
      pointer_00[0x10] = uVar14;
      uVar3 = SUB41(param_3,0);
      pointer_00[0x11] = uVar3;
      local_74 = param_4 >> 0x10;
      uVar16 = (undefined1)(param_4 >> 0x18);
      pointer_00[0x12] = uVar16;
      pointer_00[0x13] = (char)(param_4 >> 0x10);
      uVar15 = (undefined1)(param_4 >> 8);
      pointer_00[0x14] = uVar15;
      uVar4 = (undefined1)param_4;
      pointer_00[0x15] = uVar4;
      *(undefined4 *)(pointer_00 + 0x16) = 0;
      *(undefined4 *)(pointer_00 + 0x1a) = 0x11000000;
      local_ac = 3;
      local_70 = (char *)((uint)param_3 >> 0x10);
      local_3c = (undefined4 *)pointer_00;
      pointer_01 = recovered_10006cf0(0x40);
      *pointer_01 = *pointer_00;
      pointer_01[1] = pointer_00[1];
      pointer_01[2] = pointer_00[2];
      pointer_01[3] = pointer_00[3];
      pointer_01[4] = pointer_00[4];
      pointer_01[5] = pointer_00[5];
      pointer_01[6] = pointer_00[6];
      pointer_01[7] = pointer_00[7];
      pointer_01[8] = pointer_00[8];
      pointer_01[9] = pointer_00[9];
      pointer_01[10] = pointer_00[10];
      pointer_01[0xb] = pointer_00[0xb];
      pointer_01[0xc] = pointer_00[0xc];
      pointer_01[0xd] = pointer_00[0xd];
      pointer_01[0xe] = pointer_00[0xe];
      pointer_01[0xf] = pointer_00[0xf];
      pointer_01[0x10] = pointer_00[0x10];
      pointer_01[0x11] = pointer_00[0x11];
      pointer_01[0x12] = pointer_00[0x12];
      pointer_01[0x13] = pointer_00[0x13];
      pointer_01[0x14] = pointer_00[0x14];
      pointer_01[0x15] = pointer_00[0x15];
      pointer_01[0x16] = pointer_00[0x16];
      pointer_01[0x17] = pointer_00[0x17];
      pointer_01[0x18] = pointer_00[0x18];
      pointer_01[0x19] = pointer_00[0x19];
      pointer_01[0x1a] = pointer_00[0x1a];
      pointer_01[0x1b] = pointer_00[0x1b];
      pointer_01[0x1c] = pointer_00[0x1c];
      pointer_01[0x1d] = pointer_00[0x1d];
      recovered_10006d50(pointer_00);
      *(undefined4 *)(pointer_01 + 0x1e) = 0x1000000;
      *(undefined4 *)(pointer_01 + 0x22) = 0;
      *(undefined4 *)(pointer_01 + 0x26) = 0;
      *(undefined4 *)(pointer_01 + 0x2a) = 0;
      *(undefined4 *)(pointer_01 + 0x30) = 0;
      *(undefined4 *)(pointer_01 + 0x34) = 0;
      *(undefined2 *)(pointer_01 + 0x38) = 0;
      pointer_01[0x3a] = 0;
      *(undefined2 *)(pointer_01 + 0x2e) = 0x3b;
      pointer_01[0x3b] = uVar2;
      pointer_01[0x3c] = (char)local_70;
      pointer_01[0x3d] = uVar14;
      pointer_01[0x3e] = uVar3;
      uVar17 = 0x40;
      do {
        local_e0 = uVar17;
        uVar17 = local_e0 * 2;
      } while (local_e0 < 0x43);
      local_ac = 4;
      pvVar6 = recovered_10006cf0(local_e0);
      iVar7 = -0x3f;
      do {
        *(undefined1 *)((int)pvVar6 + iVar7 + 0x3f) = pointer_01[iVar7 + 0x3f];
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0);
      recovered_10006d50(pointer_01);
      *(undefined1 *)((int)pvVar6 + 0x3f) = uVar16;
      *(char *)((int)pvVar6 + 0x40) = (char)local_74;
      *(undefined1 *)((int)pvVar6 + 0x41) = uVar15;
      *(undefined1 *)((int)pvVar6 + 0x42) = uVar4;
      uVar17 = local_e0;
      if (local_e0 < 0x47) {
        do {
          local_e0 = uVar17;
          uVar17 = local_e0 * 2;
        } while (local_e0 < 0x47);
        local_ac = 5;
        pvVar8 = recovered_10006cf0(local_e0);
        iVar7 = -0x43;
        do {
          *(undefined1 *)((int)pvVar8 + iVar7 + 0x43) = *(undefined1 *)((int)pvVar6 + iVar7 + 0x43);
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0);
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      *(undefined4 *)((int)pvVar6 + 0x43) = 0x1000000;
      local_ac = 6;
      pcVar20 = (char *)(local_4c + 0x7104);
      uVar21 = recovered_10002b60(pcVar20);
      uVar17 = local_e0;
      if (local_e0 < 0x4b) {
        do {
          local_e0 = uVar17;
          uVar17 = local_e0 * 2;
        } while (local_e0 < 0x4b);
        local_ac = 7;
        pvVar8 = recovered_10006cf0(local_e0);
        iVar7 = -0x47;
        do {
          *(undefined1 *)((int)pvVar8 + iVar7 + 0x47) = *(undefined1 *)((int)pvVar6 + iVar7 + 0x47);
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0);
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      iVar7 = uVar21 + 1;
      *(char *)((int)pvVar6 + 0x47) = (char)((uint)iVar7 >> 0x18);
      *(char *)((int)pvVar6 + 0x48) = (char)((uint)iVar7 >> 0x10);
      *(char *)((int)pvVar6 + 0x49) = (char)((uint)iVar7 >> 8);
      *(char *)((int)pvVar6 + 0x4a) = (char)iVar7;
      if (uVar21 == 0) {
        uVar17 = 0x4b;
      }
      else {
        uVar17 = uVar21 + 0x4b;
        uVar9 = local_e0;
        if (local_e0 < uVar17) {
          do {
            local_e0 = uVar9;
            uVar9 = local_e0 * 2;
          } while (local_e0 < uVar17);
          local_ac = 8;
          pvVar8 = recovered_10006cf0(local_e0);
          iVar7 = -0x4b;
          do {
            *(undefined1 *)((int)pvVar8 + iVar7 + 0x4b) =
                 *(undefined1 *)((int)pvVar6 + iVar7 + 0x4b);
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0);
          recovered_10006d50(pvVar6);
          pvVar6 = pvVar8;
        }
        uVar9 = 0;
        do {
          *(char *)((int)pvVar6 + uVar9 + 0x4b) = *pcVar20;
          pcVar20 = pcVar20 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar21 != uVar9);
      }
      if (uVar17 == local_e0) {
        uVar21 = 4;
        if (local_e0 != 0) {
          uVar21 = local_e0 * 2;
        }
        if (local_e0 < uVar21) {
          local_ac = 9;
          pvVar8 = recovered_10006cf0(uVar21);
          if (local_e0 != 0) {
            uVar9 = 0;
            do {
              *(undefined1 *)((int)pvVar8 + uVar9) = *(undefined1 *)((int)pvVar6 + uVar9);
              uVar9 = uVar9 + 1;
            } while (local_e0 != uVar9);
          }
          recovered_10006d50(pvVar6);
          local_e0 = uVar21;
          pvVar6 = pvVar8;
        }
      }
      *(undefined1 *)((int)pvVar6 + uVar17) = 0;
      uVar21 = uVar17 + 5;
      pvVar8 = pvVar6;
      if (local_e0 < uVar21) {
        uVar9 = 4;
        if (local_e0 != 0) {
          uVar9 = local_e0;
        }
        do {
          local_e0 = uVar9;
          uVar9 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 10;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffff) {
          iVar7 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + iVar7) = *(undefined1 *)((int)pvVar6 + iVar7);
            iVar7 = iVar7 + 1;
          } while (uVar17 + 1 != iVar7);
        }
        recovered_10006d50(pvVar6);
      }
      *(undefined4 *)((int)pvVar8 + uVar17 + 1) = 0x6000000;
      uVar9 = uVar17 + 9;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0xb;
        pvVar6 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xfffffffb) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar10) = *(undefined1 *)((int)pvVar8 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar8);
        pvVar8 = pvVar6;
      }
      *(undefined4 *)((int)pvVar8 + uVar17 + 5) = 0x4000000;
      uVar21 = uVar17 + 0xd;
      if (local_e0 < uVar21) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 0xc;
        pvVar6 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xfffffff7) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar10) = *(undefined1 *)((int)pvVar8 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        recovered_10006d50(pvVar8);
        pvVar8 = pvVar6;
      }
      *(undefined4 *)((int)pvVar8 + uVar17 + 9) = 0xff000000;
      uVar9 = uVar17 + 0x11;
      pvVar6 = pvVar8;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0xd;
        pvVar6 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xfffffff3) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar10) = *(undefined1 *)((int)pvVar8 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar8);
      }
      *(undefined4 *)((int)pvVar6 + uVar17 + 0xd) = 0x7000000;
      uVar21 = uVar17 + 0x15;
      if (local_e0 < uVar21) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 0xe;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffef) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar10) = *(undefined1 *)((int)pvVar6 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      *(undefined4 *)((int)pvVar6 + uVar17 + 0x11) = 0x4000000;
      uVar9 = uVar17 + 0x19;
      pvVar8 = pvVar6;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0xf;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffeb) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar10) = *(undefined1 *)((int)pvVar6 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar6);
      }
      *(undefined4 *)((int)pvVar8 + uVar17 + 0x15) = 0;
      uVar21 = uVar17 + 0x1d;
      if (local_e0 < uVar21) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 0x10;
        pvVar6 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffe7) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar10) = *(undefined1 *)((int)pvVar8 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        recovered_10006d50(pvVar8);
        pvVar8 = pvVar6;
      }
      *(undefined4 *)((int)pvVar8 + uVar17 + 0x19) = 0x8000000;
      uVar9 = uVar17 + 0x21;
      pvVar6 = pvVar8;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0x11;
        pvVar6 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffe3) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar10) = *(undefined1 *)((int)pvVar8 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar8);
      }
      *(undefined4 *)((int)pvVar6 + uVar17 + 0x1d) = 0x4000000;
      uVar21 = uVar17 + 0x25;
      if (local_e0 < uVar21) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 0x12;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffdf) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar10) = *(undefined1 *)((int)pvVar6 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      *(undefined4 *)((int)pvVar6 + uVar17 + 0x21) = 0x1000000;
      uVar9 = uVar17 + 0x29;
      pvVar8 = pvVar6;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0x13;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffdb) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar10) = *(undefined1 *)((int)pvVar6 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar6);
      }
      *(undefined4 *)((int)pvVar8 + uVar17 + 0x25) = 0xf000000;
      uVar21 = uVar17 + 0x2d;
      if (local_e0 < uVar21) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 0x14;
        pvVar6 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffd7) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar10) = *(undefined1 *)((int)pvVar8 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        recovered_10006d50(pvVar8);
        pvVar8 = pvVar6;
      }
      *(undefined4 *)((int)pvVar8 + uVar17 + 0x29) = 0x8000000;
      uVar9 = uVar17 + 0x31;
      pvVar6 = pvVar8;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0x15;
        pvVar6 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffd3) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar10) = *(undefined1 *)((int)pvVar8 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar8);
      }
      *(undefined4 *)((int)pvVar6 + uVar17 + 0x2d) = 0;
      uVar21 = uVar17 + 0x35;
      if (local_e0 < uVar21) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 0x16;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffcf) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar10) = *(undefined1 *)((int)pvVar6 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      *(undefined4 *)((int)pvVar6 + uVar17 + 0x31) = 0;
      uVar9 = uVar17 + 0x39;
      pvVar8 = pvVar6;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0x17;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffcb) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar10) = *(undefined1 *)((int)pvVar6 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar6);
      }
      *(undefined4 *)((int)pvVar8 + uVar17 + 0x35) = 0;
      uVar21 = uVar17 + 0x3d;
      pvVar6 = pvVar8;
      if (local_e0 < uVar21) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 0x18;
        pvVar6 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffc7) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar10) = *(undefined1 *)((int)pvVar8 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        recovered_10006d50(pvVar8);
      }
      *(undefined4 *)((int)pvVar6 + uVar17 + 0x39) = 0;
      uVar9 = uVar17 + 0x41;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0x19;
        local_38 = pvVar6;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar21 != 0) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar10) = *(undefined1 *)((int)pvVar6 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      *(undefined4 *)((int)pvVar6 + uVar17 + 0x3d) = 0;
      uVar10 = uVar17 + 0x45;
      if (local_e0 < uVar10) {
        uVar11 = 4;
        if (local_e0 != 0) {
          uVar11 = local_e0;
        }
        do {
          local_e0 = uVar11;
          uVar11 = local_e0 * 2;
        } while (local_e0 < uVar10);
        local_ac = 0x1a;
        local_38 = pvVar6;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar9 != 0) {
          uVar11 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar11) = *(undefined1 *)((int)pvVar6 + uVar11);
            uVar11 = uVar11 + 1;
          } while (uVar9 != uVar11);
        }
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      *(undefined1 *)((int)pvVar6 + uVar9) = 0;
      *(undefined2 *)((int)pvVar6 + uVar17 + 0x42) = 0;
      *(undefined1 *)((int)pvVar6 + uVar17 + 0x44) = 0;
      if (uVar9 <= uVar10) {
        *(uint *)((int)pvVar6 + uVar21) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000
        ;
      }
      uVar21 = uVar17 + 0x49;
      if (local_e0 < uVar21) {
        uVar9 = 4;
        if (local_e0 != 0) {
          uVar9 = local_e0;
        }
        do {
          local_e0 = uVar9;
          uVar9 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 0x1b;
        local_50 = pvVar6;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar10 != 0) {
          uVar9 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar9) = *(undefined1 *)((int)pvVar6 + uVar9);
            uVar9 = uVar9 + 1;
          } while (uVar10 != uVar9);
        }
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      *(undefined1 *)((int)pvVar6 + uVar17 + 0x45) = uVar2;
      *(char *)((int)pvVar6 + uVar17 + 0x46) = (char)local_70;
      *(undefined1 *)((int)pvVar6 + uVar17 + 0x47) = uVar14;
      *(undefined1 *)((int)pvVar6 + uVar17 + 0x48) = uVar3;
      uVar9 = uVar17 + 0x4d;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0x1c;
        local_50 = pvVar6;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffb7) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar10) = *(undefined1 *)((int)pvVar6 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      *(undefined1 *)((int)pvVar6 + uVar17 + 0x49) = uVar16;
      *(char *)((int)pvVar6 + uVar17 + 0x4a) = (char)local_74;
      *(undefined1 *)((int)pvVar6 + uVar17 + 0x4b) = uVar15;
      *(undefined1 *)((int)pvVar6 + uVar17 + 0x4c) = uVar4;
      uVar21 = uVar17 + 0x51;
      if (local_e0 < uVar21) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 0x1d;
        local_50 = pvVar6;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar17 != 0xffffffb3) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar10) = *(undefined1 *)((int)pvVar6 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      *(undefined4 *)((int)pvVar6 + uVar17 + 0x4d) = 0x4000000;
      uVar9 = uVar17 + 0x55;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0x1e;
        local_34 = pvVar6;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar21 != 0) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar10) = *(undefined1 *)((int)pvVar6 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar6);
        pvVar6 = pvVar8;
      }
      *(undefined4 *)((int)pvVar6 + uVar17 + 0x51) = 0;
      uVar10 = uVar17 + 0x59;
      pvVar8 = pvVar6;
      if (local_e0 < uVar10) {
        uVar11 = 4;
        if (local_e0 != 0) {
          uVar11 = local_e0;
        }
        do {
          local_e0 = uVar11;
          uVar11 = local_e0 * 2;
        } while (local_e0 < uVar10);
        local_ac = 0x1f;
        local_34 = pvVar6;
        pvVar8 = recovered_10006cf0(local_e0);
        if (uVar9 != 0) {
          uVar11 = 0;
          do {
            *(undefined1 *)((int)pvVar8 + uVar11) = *(undefined1 *)((int)pvVar6 + uVar11);
            uVar11 = uVar11 + 1;
          } while (uVar9 != uVar11);
        }
        recovered_10006d50(pvVar6);
      }
      *(undefined1 *)((int)pvVar8 + uVar9) = 0;
      *(undefined2 *)((int)pvVar8 + uVar17 + 0x56) = 0;
      *(undefined1 *)((int)pvVar8 + uVar17 + 0x58) = 0;
      if (uVar9 <= uVar10) {
        *(uint *)((int)pvVar8 + uVar21) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000
        ;
      }
      uVar21 = uVar17 + 0x5d;
      if (local_e0 < uVar21) {
        uVar9 = 4;
        if (local_e0 != 0) {
          uVar9 = local_e0;
        }
        do {
          local_e0 = uVar9;
          uVar9 = local_e0 * 2;
        } while (local_e0 < uVar21);
        local_ac = 0x20;
        local_30 = pvVar8;
        pvVar6 = recovered_10006cf0(local_e0);
        if (uVar10 != 0) {
          uVar9 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar9) = *(undefined1 *)((int)pvVar8 + uVar9);
            uVar9 = uVar9 + 1;
          } while (uVar10 != uVar9);
        }
        recovered_10006d50(pvVar8);
        pvVar8 = pvVar6;
      }
      *(undefined1 *)((int)pvVar8 + uVar17 + 0x59) = uVar2;
      *(char *)((int)pvVar8 + uVar17 + 0x5a) = (char)local_70;
      *(undefined1 *)((int)pvVar8 + uVar17 + 0x5b) = uVar14;
      *(undefined1 *)((int)pvVar8 + uVar17 + 0x5c) = uVar3;
      uVar9 = uVar17 + 0x61;
      pvVar6 = pvVar8;
      if (local_e0 < uVar9) {
        uVar10 = 4;
        if (local_e0 != 0) {
          uVar10 = local_e0;
        }
        do {
          local_e0 = uVar10;
          uVar10 = local_e0 * 2;
        } while (local_e0 < uVar9);
        local_ac = 0x21;
        local_30 = pvVar8;
        pvVar6 = recovered_10006cf0(local_e0);
        if (uVar21 != 0) {
          uVar10 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar10) = *(undefined1 *)((int)pvVar8 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar21 != uVar10);
        }
        recovered_10006d50(pvVar8);
      }
      *(undefined1 *)((int)pvVar6 + uVar21) = uVar16;
      *(char *)((int)pvVar6 + uVar17 + 0x5e) = (char)local_74;
      *(undefined1 *)((int)pvVar6 + uVar17 + 0x5f) = uVar15;
      *(undefined1 *)((int)pvVar6 + uVar17 + 0x60) = uVar4;
      local_6c = pvVar6;
      if (uVar5 == 0) {
        pvVar8 = (void *)0x0;
        local_78 = param_2;
      }
      else {
        local_ac = 0x22;
        local_60 = recovered_10006cf0(uVar5 * 4);
        recovered_10006d50((void *)0x0);
        uVar17 = 0;
        do {
          *(undefined4 *)((int)local_60 + (uintptr_t)uVar17 * 4) = 0;
          uVar17 = uVar17 + 1;
        } while (uVar5 != uVar17);
        uVar21 = 0;
        local_78 = param_2;
        pvVar6 = local_6c;
        uVar17 = uVar9;
        do {
          *(uint *)((int)local_60 + uVar21 * 4) = uVar17;
          uVar9 = uVar17 + 4;
          local_58 = pvVar6;
          if (local_e0 < uVar9) {
            if (local_e0 == 0) {
              local_e0 = 4;
            }
            uVar10 = local_e0;
            do {
              local_e0 = uVar10;
              uVar10 = local_e0 * 2;
            } while (local_e0 < uVar9);
            local_ac = 0x24;
            pvVar6 = recovered_10006cf0(local_e0);
            if (uVar17 != 0) {
              uVar10 = 0;
              do {
                *(undefined1 *)((int)pvVar6 + uVar10) = *(undefined1 *)((int)local_58 + uVar10);
                uVar10 = uVar10 + 1;
              } while (uVar17 != uVar10);
            }
            recovered_10006d50(local_58);
          }
          *(undefined4 *)((int)pvVar6 + uVar17) = 0;
          uVar21 = uVar21 + 1;
          pvVar8 = local_60;
          uVar17 = uVar9;
        } while (uVar21 != uVar5);
      }
      local_c8 = uVar9 + 4;
      local_5c = pvVar6;
      if (local_e0 < local_c8) {
        uVar17 = 4;
        if (local_e0 != 0) {
          uVar17 = local_e0;
        }
        do {
          local_dc = uVar17;
          uVar17 = local_dc * 2;
        } while (local_dc < local_c8);
        local_ac = 0x23;
        pvVar6 = recovered_10006cf0(local_dc);
        if (uVar9 != 0) {
          uVar17 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + uVar17) = *(undefined1 *)((int)local_5c + uVar17);
            uVar17 = uVar17 + 1;
          } while (uVar9 != uVar17);
        }
        recovered_10006d50(local_5c);
        local_78 = param_2;
      }
      else {
        local_dc = local_e0;
      }
      *(undefined4 *)((int)pvVar6 + uVar9) = 0;
      local_28 = local_48 + (local_48 == 0);
      local_54 = local_54 + (local_54 == 0);
      local_2c = (int)param_3 << 8;
      iVar7 = 0;
      uVar17 = param_4;
      do {
        local_74 = 0x40;
        if (uVar17 < 0x40) {
          local_74 = uVar17;
        }
        local_74 = local_74 + (local_74 == 0);
        local_20 = iVar7 * local_48;
        local_24 = iVar7 << 6;
        local_44 = local_78;
        iVar22 = 0;
        pcVar20 = param_3;
        do {
          local_64 = (char *)0x40;
          if (pcVar20 < (char *)0x40) {
            local_64 = pcVar20;
          }
          iVar1 = *(int *)((int)pvVar8 + (local_20 + iVar22) * 4);
          if (iVar1 + 4U <= local_c8) {
            *(uint *)((int)pvVar6 + iVar1) =
                 local_c8 >> 0x18 | (local_c8 & 0xff0000) >> 8 | (local_c8 & 0xff00) << 8 |
                 local_c8 << 0x18;
          }
          local_40 = iVar22;
          local_1c = pcVar20;
          if (local_24 != param_4) {
            local_18 = (int)local_64 * 4 + -1;
            pcVar20 = (char *)((int)local_64 << 2);
            local_70 = (char *)(iVar22 * 0x40);
            pcVar18 = param_3 + iVar22 * -0x40;
            if ((char *)0x3f < pcVar18) {
              pcVar18 = (char *)0x40;
            }
            iVar22 = 0;
            local_d8 = local_44;
            local_e0 = local_c8;
            local_64 = pcVar20;
            do {
              local_68 = pvVar6;
              if (param_3 != local_70) {
                uVar21 = (int)(uintptr_t)pcVar18 * 4 + local_e0;
                if (local_dc < uVar21) {
                  if (local_dc == 0) {
                    local_dc = 4;
                  }
                  uVar5 = local_dc;
                  do {
                    local_dc = uVar5;
                    uVar5 = local_dc * 2;
                  } while (local_dc < uVar21);
                  local_ac = 0x26;
                  pvVar6 = recovered_10006cf0(local_dc);
                  if (local_c8 != 0) {
                    uVar21 = 0;
                    do {
                      *(undefined1 *)((int)pvVar6 + uVar21) =
                           *(undefined1 *)((int)local_68 + uVar21);
                      uVar21 = uVar21 + 1;
                    } while (local_c8 != uVar21);
                  }
                  recovered_10006d50(local_68);
                  if (local_e0 < local_c8) {
                    uVar21 = local_c8;
                    do {
                      *(undefined1 *)((int)pvVar6 + uVar21 + local_18) =
                           *(undefined1 *)((int)pvVar6 + (uVar21 - 1));
                      uVar21 = uVar21 - 1;
                    } while (local_e0 < uVar21);
                  }
                  pcVar20 = local_64;
                }
                pcVar12 = (char *)0x0;
                do {
                  pcVar12[local_e0 + (int)pvVar6] = local_d8[(int)pcVar12];
                  pcVar12 = pcVar12 + 1;
                } while (pcVar20 != pcVar12);
                local_e0 = local_c8 + (int)(uintptr_t)pcVar18 * 4;
                local_c8 = local_e0;
              }
              iVar22 = iVar22 + 1;
              local_d8 = local_d8 + (int)(uintptr_t)param_3 * 4;
            } while (iVar22 != local_74);
          }
          iVar22 = local_40 + 1;
          pcVar20 = local_1c + -0x40;
          local_44 = local_44 + 0x100;
        } while (iVar22 != local_28);
        iVar7 = iVar7 + 1;
        uVar17 = uVar17 - 0x40;
        local_78 = local_78 + local_2c;
      } while (iVar7 != local_54);
      local_ac = 0x25;
      puVar13 = recovered_10005970((int)param_1,local_4c + 0x70bf);
      if (puVar13 == (uint *)0x0) {
        bVar19 = 0;
      }
      else {
        if (local_c8 == 0) {
          bVar23 = true;
        }
        else {
          local_ac = 0x27;
          uVar17 = recovered_100061c0((int)pvVar6,1,local_c8,puVar13);
          bVar23 = uVar17 == local_c8;
        }
        local_ac = 0x28;
        iVar7 = recovered_10005e10((int *)puVar13);
        bVar19 = bVar23 & iVar7 == 0;
      }
      recovered_10006d50(pvVar8);
      recovered_10006d50(pvVar6);
      goto LAB_1000dd66;
    }
  }
  bVar19 = 0;
LAB_1000dd66:
  recovered_10007320(&local_b0);
  return bVar19;
}

#undef DAT_10014f08
#undef PTR_recovered_10006c80_10015008
#undef auStack_14
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_c8
#undef local_b0
#undef local_ac
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
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
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef auStackY_170

#undef DAT_10014f5c
#define DAT_10014f5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69aU)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define local_60 (*(int *)(pf_stack_frame + 160))
#define local_5c (*(int *)(pf_stack_frame + 164))
#define local_58 (*(void * *)(pf_stack_frame + 168))
#define local_54 (*(uint *)(pf_stack_frame + 172))
#define local_50 (*(undefined4 *)(pf_stack_frame + 176))
#define local_4c (*(int * *)(pf_stack_frame + 180))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f750
 */

int * recovered_1000f750(undefined4 *param_1)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *dst;
  int *piVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  local_60 = 0;
  local_5c = 0;
  local_58 = (void *)0x0;
  local_54 = 0;
  local_50 = 0;
  local_30 = PTR_recovered_10006c80_10015008;
  local_2c = &DAT_10014f5c;
  local_24 = 0x160;
  recovered_100072f0(&local_48);
  piVar2 = (int *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    local_44 = 1;
    uVar1 = recovered_1000c590(param_1,&local_60);
    piVar2 = (int *)0x0;
    if (((((char)uVar1 != '\0') && (local_54 != 0)) && (-1 < local_60)) && (-1 < local_5c)) {
      local_44 = 2;
      local_4c = recovered_10006cf0(0x18);
      local_4c[5] = 0;
      local_4c[4] = 0;
      local_4c[3] = 0;
      local_4c[2] = 0;
      local_4c[1] = 0;
      *local_4c = 0;
      *local_4c = local_60;
      local_4c[1] = local_5c;
      local_44 = 3;
      dst = recovered_10006d20(local_54);
      local_4c[2] = (int)dst;
      local_44 = 4;
      recovered_10002410(dst,local_58,local_54);
      piVar2 = local_4c;
    }
  }
  local_54 = 0;
  recovered_10006d50(local_58);
  recovered_10007320(&local_48);
  return piVar2;
}

#undef DAT_10014f5c
#undef PTR_recovered_10006c80_10015008
#undef local_20
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
#undef auStack_1c
#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f920
 */

void recovered_1000f920(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 8) != (void *)0x0) {
      recovered_10006de0(*(void **)((int)param_1 + 8));
    }
    if (*(void **)((int)param_1 + 0x14) != (void *)0x0) {
      recovered_10006de0(*(void **)((int)param_1 + 0x14));
    }
    recovered_10006d50(param_1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f960
 */

void recovered_1000f960(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;

  param_1[1] = 0;
  uVar2 = 0;
  if ((uint)param_1[2] < param_2) {
    pvVar3 = recovered_10006cf0(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar3 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_10006d50(pointer);
    *param_1 = (int)pvVar3;
    param_1[2] = param_2;
    uVar2 = param_1[1];
  }
  while (uVar2 < param_2) {
    *(undefined1 *)(*param_1 + uVar2) = *param_3;
    uVar2 = param_1[1] + 1;
    param_1[1] = uVar2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f9f0
 */

void recovered_1000f9f0(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    pvVar2 = recovered_10006cf0(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar2 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_10006d50(pointer);
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
    uVar3 = param_1[1];
    while (uVar3 < param_2) {
      *(undefined1 *)(*param_1 + uVar3) = 0;
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fa80
 */

uint recovered_1000fa80(uint in_ECX,uint in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (in_EDX == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  do {
    uVar3 = uVar3 + 1;
    if (0x1f < uVar3) break;
  } while ((1 << ((byte)uVar3 & 0x1f) & in_EDX) == 0);
  uVar2 = 0;
  uVar4 = in_EDX;
  do {
    uVar2 = uVar2 + (uVar4 & 1);
    bVar1 = 1 < uVar4;
    uVar4 = uVar4 >> 1;
  } while (bVar1);
  uVar4 = ~(-1 << ((byte)uVar2 & 0x1f));
  if (0x1e < uVar2) {
    uVar4 = 0xffffffff;
  }
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((uVar4 >> 1) + ((in_EDX & in_ECX) >> ((byte)uVar3 & 0x1f)) * 0xff) / uVar4;
  }
  return uVar4;
}


#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
#define local_18 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fb10
 */

undefined4 recovered_1000fb10(undefined4 *in_ECX,ushort *in_EDX)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;

  uVar4 = *(uint *)*in_ECX;
  if (*(uint *)in_ECX[1] <= uVar4) {
    return 0;
  }
  local_24 = 0xff000000;
  iVar2 = *(int *)in_ECX[2];
  if (iVar2 == 3) {
    uVar7 = (undefined1)*in_EDX;
    PF_PART2(local_24, 0) = CONCAT11(uVar7,uVar7);
    PF_PART3(local_24, 0) = CONCAT12(uVar7,(undefined2)local_24);
    uVar7 = 0xff;
    if (*(int *)in_ECX[3] == 0x10) {
      uVar7 = *(undefined1 *)((int)in_EDX + 1);
    }
    local_24 = CONCAT13(uVar7,(undefined3)local_24);
  }
  else if (iVar2 == 2) {
    iVar2 = *(int *)in_ECX[3];
    if (iVar2 == 8) {
      uVar7 = (undefined1)*in_EDX;
      PF_PART2(local_24, 0) = CONCAT11(uVar7,uVar7);
    }
    else {
      if (iVar2 - 0xfU < 2) {
        uVar1 = *in_EDX;
        local_20 = (uVar1 >> 5 & 0x1f) * 0x20e7f7 >> 0x12;
        local_1c = (uint)(int)(short)uVar1 >> 0xf;
        bVar8 = 0xff;
        if (iVar2 == 0x10) {
          bVar8 = -((*(uint *)in_ECX[7] & 0xf) == 0) | (byte)local_1c;
        }
        local_24 = CONCAT13(bVar8,CONCAT12((char)((uVar1 & 0x1f) * 0x20e7f7 >> 0x12),
                                           CONCAT11((char)local_20,
                                                    (char)((ushort)((uVar1 >> 10 & 0x1f) * 0xff) /
                                                          0x1f))));
        local_18 = iVar2;
        goto LAB_1000fba5;
      }
      if (iVar2 == 0x20) {
        PF_PART2(local_24, 0) = CONCAT11(*(undefined1 *)((int)in_EDX + 1),(char)in_EDX[1]);
        PF_PART3(local_24, 0) = CONCAT12((char)*in_EDX,(undefined2)local_24);
        local_24 = CONCAT13(*(undefined1 *)((int)in_EDX + 3),(undefined3)local_24);
        goto LAB_1000fba5;
      }
      if (iVar2 != 0x18) {
        return 0;
      }
      PF_PART2(local_24, 0) = CONCAT11(*(undefined1 *)((int)in_EDX + 1),(char)in_EDX[1]);
      uVar7 = (undefined1)*in_EDX;
    }
    PF_PART3(local_24, 0) = CONCAT12(uVar7,(undefined2)local_24);
    local_24 = CONCAT13(0xff,(undefined3)local_24);
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    if (*(int *)in_ECX[3] == 8) {
      uVar4 = (uint)(byte)*in_EDX;
    }
    else {
      uVar4 = (uint)*in_EDX;
    }
    uVar6 = uVar4 - *(uint *)in_ECX[4];
    if (uVar4 < *(uint *)in_ECX[4]) {
      return 0;
    }
    if (*(uint *)in_ECX[5] <= uVar6) {
      return 0;
    }
    recovered_10002410(&local_24,(void *)((uintptr_t)uVar6 * 4 + *(int *)in_ECX[6]),4);
    uVar4 = *(uint *)*in_ECX;
  }
LAB_1000fba5:
  uVar6 = *(uint *)in_ECX[8];
  uVar5 = uVar4 / uVar6;
  uVar9 = ~(uVar4 % uVar6) + uVar6;
  if ((*(uint *)in_ECX[7] & 0x10) == 0) {
    uVar9 = uVar4 % uVar6;
  }
  if ((*(uint *)in_ECX[7] & 0x20) == 0) {
    uVar5 = ~uVar5 + *(int *)in_ECX[9];
  }
  recovered_10002410((void *)((uVar5 * uVar6 + uVar9) * 4 + *(int *)in_ECX[10]),&local_24,4);
  piVar3 = (int *)*in_ECX;
  *piVar3 = *piVar3 + 1;
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fd40
 */

undefined8 recovered_1000fd40(int in_ECX,uint in_EDX,uint *param_3,int param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;

  uVar8 = *param_3;
  local_24 = param_3[1];
  uVar2 = 0;
  if (local_24 == 0 && (uint)(in_EDX < uVar8) <= -local_24) {
    while (uVar6 = local_24, 3 < in_EDX - uVar8) {
      uVar11 = uVar8 + 4;
      uVar6 = local_24 + (0xfffffffb < uVar8);
      uVar5 = *(uint *)(in_ECX + uVar8);
      param_3[1] = uVar6;
      *param_3 = uVar11;
      if ((uVar6 != 0 || -uVar6 < (uint)(in_EDX < uVar11)) || (in_EDX - uVar11 < 4)) break;
      uVar10 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar6 = *(uint *)(in_ECX + uVar11);
      uVar11 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar5 = uVar8 + 8;
      local_24 = local_24 + (0xfffffff7 < uVar8);
      *param_3 = uVar5;
      param_3[1] = local_24;
      if (uVar10 == 0) {
        uVar2 = CONCAT31((int3)((uint)param_3 >> 8),uVar11 == 0);
        goto LAB_1000ff46;
      }
      uVar6 = local_24;
      if ((local_24 != 0 || -local_24 < (uint)(in_EDX < uVar5)) ||
         (uVar7 = -(uint)(in_EDX < uVar5) - local_24, uVar8 = (uint)(in_EDX - uVar5 < uVar11),
         uVar6 = uVar7 - uVar8, uVar7 < uVar8)) break;
      puVar3 = (uint *)(in_ECX + uVar5);
      if ((uVar10 == 1) && (3 < uVar11)) {
        uVar8 = *puVar3;
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        if ((uVar8 < 0x101) && (uVar8 * 3 + 4 <= uVar11)) {
          uVar8 = uVar8 * 3;
          *(undefined4 *)(param_4 + 0x1c) = 0;
          uVar6 = 0;
          if (*(uint *)(param_4 + 0x20) < uVar8) {
            pvVar4 = recovered_10006cf0(uVar8);
            pointer = *(void **)(param_4 + 0x18);
            iVar1 = *(int *)(param_4 + 0x1c);
            if (iVar1 != 0) {
              iVar9 = 0;
              do {
                *(undefined1 *)((int)pvVar4 + iVar9) = *(undefined1 *)((int)pointer + iVar9);
                iVar9 = iVar9 + 1;
              } while (iVar1 != iVar9);
            }
            recovered_10006d50(pointer);
            *(void **)(param_4 + 0x18) = pvVar4;
            *(uint *)(param_4 + 0x20) = uVar8;
            uVar6 = *(uint *)(param_4 + 0x1c);
          }
          while (uVar6 < uVar8) {
            *(undefined1 *)(*(int *)(param_4 + 0x18) + uVar6) = 0;
            uVar6 = *(int *)(param_4 + 0x1c) + 1;
            *(uint *)(param_4 + 0x1c) = uVar6;
          }
          recovered_10002410(*(void **)(param_4 + 0x18),puVar3 + 1,uVar6);
          uVar5 = *param_3;
          local_24 = param_3[1];
        }
      }
      else if ((uVar10 == 0x11) && (uVar11 != 0)) {
        *(uint *)(param_4 + 0x14) = (uint)(byte)*puVar3;
      }
      uVar8 = uVar5 + uVar11;
      local_24 = local_24 + CARRY4(uVar5,uVar11);
      *param_3 = uVar8;
      param_3[1] = local_24;
      uVar6 = local_24;
      if (local_24 != 0 || -local_24 < (uint)(in_EDX < uVar8)) break;
    }
    uVar2 = 0;
    local_24 = uVar6;
  }
LAB_1000ff46:
  return CONCAT44(local_24,uVar2);
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ff60
 */

undefined4 recovered_1000ff60(int in_ECX,uint in_EDX,uint *param_3,uint param_4,uint *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar2 = *param_3;
  uVar1 = param_3[1];
  if (param_4 == 4) {
    if (uVar1 != 0 || -uVar1 < (uint)(in_EDX < uVar2)) {
      return 0;
    }
    uVar1 = 0;
    if (in_EDX - uVar2 < 4) {
      return 0;
    }
    uVar2 = *(uint *)(in_ECX + uVar2);
  }
  else {
    if (uVar1 != 0 || -uVar1 < (uint)(in_EDX < uVar2)) {
      return 0;
    }
    if (in_EDX - uVar2 < 8) {
      return 0;
    }
    uVar1 = *(uint *)(in_ECX + uVar2);
    uVar2 = *(uint *)(in_ECX + 4 + uVar2);
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  *param_5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  param_5[1] = uVar1;
  uVar2 = *param_3;
  *param_3 = *param_3 + param_4;
  param_3[1] = param_3[1] + (uint)CARRY4(uVar2,param_4);
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ffd0
 */

void recovered_1000ffd0(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar4 = param_1[1];
  if (uVar4 == param_1[2]) {
    uVar5 = 4;
    if (uVar4 != 0) {
      uVar5 = uVar4 * 2;
    }
    if (uVar4 < uVar5) {
      pvVar3 = recovered_10006cf0(uVar5 * 8);
      pointer = (void *)*param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar6 = 0;
        do {
          uVar2 = *(undefined4 *)((int)pointer + iVar6 * 8);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8 + 4) =
               *(undefined4 *)((int)pointer + iVar6 * 8 + 4);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8) = uVar2;
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      recovered_10006d50(pointer);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar5;
      uVar4 = param_1[1];
    }
  }
  iVar1 = *param_1;
  uVar2 = *param_2;
  *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = param_2[1];
  *(undefined4 *)(iVar1 + uVar4 * 8) = uVar2;
  param_1[1] = uVar4 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010070
 */

void recovered_10010070(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    pvVar2 = recovered_10006cf0(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar2 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_10006d50(pointer);
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
    uVar3 = param_1[1];
    if (uVar3 < param_2) {
      do {
        *(undefined1 *)(*param_1 + uVar3) = *param_3;
        uVar3 = param_1[1] + 1;
        param_1[1] = uVar3;
      } while (uVar3 < param_2);
    }
  }
  return;
}


#undef DAT_10014950
#define DAT_10014950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef DAT_100149b0
#define DAT_100149b0 (*(float *)(((uintptr_t)pf_module_state + 0xeeU)))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(int *)(pf_stack_frame + 44))
#define local_20 (*(float (*)[8])(pf_stack_frame + 48))
#define local_18 (*(uint *)(pf_stack_frame + 56))
#define local_40 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010100
 */

uchar recovered_10010100(int in_ECX,uint in_EDX,int param_3,uint param_4,int param_5,uint *param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;

  if (param_5 != 0 || (uint)-param_5 < (uint)(in_EDX < param_4)) {
    return '\0';
  }
  if (3 < in_EDX - param_4) {
    uVar1 = param_4 + 4;
    iVar5 = param_5 + (uint)(0xfffffffb < param_4);
    uVar2 = *(uint *)(in_ECX + param_4);
    *param_6 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    if ((iVar5 == 0 && (uint)(in_EDX < uVar1) <= (uint)-iVar5) && (3 < in_EDX - uVar1)) {
      uVar4 = param_4 + 8;
      iVar5 = param_5 + (uint)(0xfffffff7 < param_4);
      uVar2 = *(uint *)(in_ECX + uVar1);
      param_6[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      if ((iVar5 == 0 && (uint)(in_EDX < uVar4) <= (uint)-iVar5) && (3 < in_EDX - uVar4)) {
        uVar1 = param_4 + 0xc;
        iVar5 = param_5 + (uint)(0xfffffff3 < param_4);
        uVar2 = *(uint *)(in_ECX + uVar4);
        param_6[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
        ;
        if ((iVar5 == 0 && (uint)(in_EDX < uVar1) <= (uint)-iVar5) && (3 < in_EDX - uVar1)) {
          uVar2 = *(uint *)(in_ECX + uVar1);
          uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
          local_40 = param_4 + 0x10;
          local_24 = param_5 + (uint)(0xffffffef < param_4);
          if (uVar2 != 0) {
            if (local_24 != 0 || (uint)-local_24 < (uint)(in_EDX < local_40)) {
              return '\0';
            }
            if (-(uint)(in_EDX < local_40) - local_24 < (uint)(in_EDX - local_40 < uVar2)) {
              return '\0';
            }
            bVar7 = CARRY4(local_40,uVar2);
            local_40 = local_40 + uVar2;
            local_24 = local_24 + (uint)bVar7;
          }
          if (local_24 != 0 || (uint)-local_24 < (uint)(in_EDX < local_40)) {
            return '\0';
          }
          if (3 < in_EDX - local_40) {
            while( true ) {
              uVar2 = local_40 + 4;
              iVar5 = local_24 + (uint)(0xfffffffb < local_40);
              if (iVar5 != 0 || (uint)-iVar5 < (uint)(in_EDX < uVar2)) {
                return '\0';
              }
              if (in_EDX - uVar2 < 4) {
                return '\0';
              }
              uVar1 = *(uint *)(in_ECX + local_40);
              uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18;
              uVar2 = *(uint *)(in_ECX + uVar2);
              uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
              uVar4 = local_40 + 8;
              local_24 = local_24 + (uint)(0xfffffff7 < local_40);
              if (uVar1 == 0) break;
              if (local_24 != 0 || (uint)-local_24 < (uint)(in_EDX < uVar4)) {
                return '\0';
              }
              if (-(uint)(in_EDX < uVar4) - local_24 < (uint)(in_EDX - uVar4 < uVar2)) {
                return '\0';
              }
              if ((uVar1 == 6) && (3 < uVar2)) {
                uVar1 = *(uint *)(in_ECX + uVar4);
                uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18;
                if (0xfe < uVar1) {
                  uVar1 = 0xff;
                }
                param_6[4] = uVar1;
              }
              else if ((uVar1 == 8) && (3 < uVar2)) {
                uVar1 = *(uint *)(in_ECX + uVar4);
                *(bool *)(param_6 + 3) =
                     ((uVar1 >> 0x18 != 0 || (uVar1 & 0xff0000) != 0) || (uVar1 & 0xff00) != 0) ||
                     (uVar1 & 0xff) != 0;
              }
              else if ((uVar1 == 0xf) && (7 < uVar2)) {
                uVar1 = *(uint *)(in_ECX + uVar4);
                param_6[5] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18;
                uVar1 = *(uint *)(in_ECX + 4 + uVar4);
                param_6[6] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18;
              }
              else if ((uVar1 == 0x21) && (3 < uVar2)) {
                uVar1 = *(uint *)(in_ECX + uVar4);
                local_28 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                           uVar1 << 0x18;
                local_20[0] = 0.0;
                recovered_10002410(local_20,&local_28,4);
                if (local_20[0] <= 0.0) {
                  param_6[4] = 0;
                }
                else if (1.0 <= local_20[0]) {
                  param_6[4] = 0xff;
                }
                else {
                  local_18 = (uint)ROUND(local_20[0] * DAT_100149b0 +
                                         (float)*(double *)
                                                 (&DAT_10014950 +
                                                 (uint)(0.0 <= local_20[0] * DAT_100149b0) * 8));
                  param_6[4] = local_18;
                }
              }
              local_40 = uVar4 + uVar2;
              local_24 = local_24 + (uint)CARRY4(uVar4,uVar2);
              if (local_24 != 0 || (uint)-local_24 < (uint)(in_EDX < local_40)) {
                return '\0';
              }
              if (in_EDX - local_40 < 4) {
                return '\0';
              }
            }
            if (uVar2 == 0) {
              uVar2 = *(uint *)(param_3 + 0x10);
              if (uVar2 == 4) {
                if (local_24 != 0 || (uint)-local_24 < (uint)(in_EDX < uVar4)) {
                  return '\0';
                }
                if (in_EDX - uVar4 < 4) {
                  return '\0';
                }
                uVar6 = 0;
                uVar1 = *(uint *)(in_ECX + uVar4);
              }
              else {
                if (local_24 != 0 || (uint)-local_24 < (uint)(in_EDX < uVar4)) {
                  return '\0';
                }
                if (in_EDX - uVar4 < 8) {
                  return '\0';
                }
                uVar6 = *(uint *)(in_ECX + uVar4);
                uVar1 = *(uint *)(in_ECX + 4 + uVar4);
                uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18;
              }
              uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18;
              param_6[7] = uVar1;
              param_6[8] = uVar6;
              local_28 = uVar4 + uVar2;
              local_24 = local_24 + (uint)CARRY4(uVar4,uVar2);
              uVar3 = recovered_1000ff60(in_ECX,in_EDX,&local_28,uVar2,(uint *)local_20);
              if ((char)uVar3 != '\0') {
                return (uVar1 != 0 || uVar6 != 0) && (param_6[1] != 0 && *param_6 != 0);
              }
            }
          }
        }
      }
    }
  }
  return '\0';
}

#undef DAT_10014950
#undef DAT_100149b0
#undef local_28
#undef local_24
#undef local_20
#undef local_18
#undef local_40

#undef DAT_10014c88
#define DAT_10014c88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef DAT_10014f68
#define DAT_10014f68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a6U)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define local_cc (*(uint *)(pf_stack_frame + 196))
#define local_c8 (*(uint *)(pf_stack_frame + 200))
#define local_c4 (*(uint *)(pf_stack_frame + 204))
#define local_c0 (*(void * *)(pf_stack_frame + 208))
#define local_bc (*(uint *)(pf_stack_frame + 212))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 216))
#define local_b4 (*(uint *)(pf_stack_frame + 220))
#define local_b0 (*(uint *)(pf_stack_frame + 224))
#define local_ac (*(uint *)(pf_stack_frame + 228))
#define local_a8 (*(uint *)(pf_stack_frame + 232))
#define local_a4 (*(uint *)(pf_stack_frame + 236))
#define local_a0 (*(int *)(pf_stack_frame + 240))
#define local_9c (*(uint *)(pf_stack_frame + 244))
#define local_98 (*(int *)(pf_stack_frame + 248))
#define local_94 (*(uint *)(pf_stack_frame + 252))
#define local_90 (*(int *)(pf_stack_frame + 256))
#define local_8c (*(uint *)(pf_stack_frame + 260))
#define local_88 (*(int *)(pf_stack_frame + 264))
#define local_84 (*(uint *)(pf_stack_frame + 268))
#define local_80 (*(uint *)(pf_stack_frame + 272))
#define local_7c (*(void * *)(pf_stack_frame + 276))
#define local_78 (*(uint *)(pf_stack_frame + 280))
#define local_70 (*(undefined4 *)(pf_stack_frame + 288))
#define local_6c (*(undefined4 *)(pf_stack_frame + 292))
#define local_58 (*(undefined * *)(pf_stack_frame + 312))
#define local_54 (*(undefined * *)(pf_stack_frame + 316))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 320))
#define local_4c (*(undefined4 *)(pf_stack_frame + 324))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 328))
#define auStack_14 (*(undefined1 (*)[20])(pf_stack_frame + 380))
#define local_38 (*(uint *)(pf_stack_frame + 344))
#define local_34 (*(int *)(pf_stack_frame + 348))
#define local_30 (*(uint *)(pf_stack_frame + 352))
#define local_2c (*(int *)(pf_stack_frame + 356))
#define local_24 (*(int *)(pf_stack_frame + 364))
#define local_20 (*(int *)(pf_stack_frame + 368))
#define local_1c (*(int *)(pf_stack_frame + 372))
#define local_18 (*(uint *)(pf_stack_frame + 376))
#define auStackY_180 (*(undefined1 (*)[384])(pf_stack_frame + 16))
#define uStack_da (*(undefined1 *)(pf_stack_frame + 182))
#define uStack_d9 (*(undefined1 *)(pf_stack_frame + 183))
#define local_ec (*(undefined4 *)(pf_stack_frame + 164))
#define local_e8 (*(uint *)(pf_stack_frame + 168))
#define local_dc (*(undefined1 (*)[220])(pf_stack_frame + 180))
#define local_d8 (*(uint *)(pf_stack_frame + 184))
#define local_d4 (*(uint *)(pf_stack_frame + 188))
#define local_d0 (*(int *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100104f0
 */

undefined4 recovered_100104f0(int in_ECX,uint in_EDX,int param_3,uint *param_4,int *param_5)

{
  unsigned char pf_stack_frame[432] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_EAX = 0;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;

  local_50 = auStack_14 + 0x10;
  local_48 = auStackY_180 + 0x80;
  uVar6 = param_4[7];
  local_c4 = param_4[8];
  local_58 = PTR_recovered_10006c80_10015008;
  local_54 = &DAT_10014f68;
  local_4c = 0x8ee;
  local_d0 = in_ECX;
  recovered_100072f0(&local_70);
  local_ec = 0;
  local_d8 = in_EDX;
  if (local_c4 != 0 || -local_c4 < (uint)(in_EDX < uVar6)) goto LAB_100105cc;
  if (3 < in_EDX - uVar6) {
    uVar10 = uVar6 + 4;
    iVar8 = local_c4 + (0xfffffffb < uVar6);
    if ((iVar8 == 0 && (uint)(in_EDX < uVar10) <= (uint)-iVar8) && (3 < in_EDX - uVar10)) {
      uVar5 = uVar6 + 8;
      iVar8 = local_c4 + (0xfffffff7 < uVar6);
      if (iVar8 == 0 && (uint)(in_EDX < uVar5) <= (uint)-iVar8) {
        if (3 < in_EDX - uVar5) {
          uVar10 = *(uint *)(local_d0 + uVar10);
          local_c8 = (uint)*(byte *)(local_d0 + uVar5);
          local_d4 = (uint)*(byte *)(local_d0 + 1 + uVar5);
          local_cc = (uint)*(byte *)(local_d0 + 3 + uVar5);
          uVar11 = *(uint *)(local_d0 + uVar6);
          uVar9 = uVar6 + 0xc;
          iVar8 = local_c4 + (0xfffffff3 < uVar6);
          if (*(int *)(param_3 + 0x10) == 4) {
            local_ec = 0;
            if (iVar8 != 0 || (uint)-iVar8 < (uint)(in_EDX < uVar9)) goto LAB_100105cc;
            uVar3 = 0;
            local_ec = 0;
            if (in_EDX - uVar9 < 4) goto LAB_100105cc;
            uVar6 = *(uint *)(local_d0 + uVar9);
          }
          else {
            local_ec = 0;
            if (iVar8 != 0 || (uint)-iVar8 < (uint)(in_EDX < uVar9)) goto LAB_100105cc;
            if (in_EDX - uVar9 < 8) goto LAB_100105e5;
            uVar3 = *(uint *)(local_d0 + uVar9);
            uVar6 = *(uint *)(local_d0 + 4 + uVar9);
            uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
          }
          uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
          local_c4 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
          if (local_c4 == *param_4) {
            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            if (uVar10 == param_4[1]) {
              local_ec = 0;
              if (uVar6 == 0 && uVar3 == 0) goto LAB_100105cc;
              if (param_4[2] < 6) {
                local_c8 = (uintptr_t)local_c8 * 0x1000000;
                local_d4 = local_d4 * 0x10000;
                uVar5 = (uint)*(byte *)(local_d0 + 2 + uVar5) * 0x100;
                uVar11 = (local_c8 + local_d4 | uVar5) + local_cc;
                local_ec = 0;
                if (uVar11 != *(uint *)(&DAT_10014c88 + param_4[2] * 4)) goto LAB_100105cc;
                local_ec = 0;
                if (!(uVar3 == 0 && (uint)(in_EDX < uVar6) <= -uVar3)) goto LAB_100105cc;
                local_ec = 0;
                local_9c = uVar11;
                if (in_EDX - uVar6 < 4) goto LAB_100105cc;
                uVar11 = uVar6 + 4;
                iVar8 = uVar3 + (0xfffffffb < uVar6);
                if (!(iVar8 == 0 && (uint)(in_EDX < uVar11) <= (uint)-iVar8)) goto LAB_100105cc;
                if (3 < in_EDX - uVar11) {
                  uVar9 = *(uint *)(local_d0 + uVar6);
                  uVar11 = *(uint *)(local_d0 + uVar11);
                  local_30 = uVar6 + 8;
                  local_2c = uVar3 + (0xfffffff7 < uVar6);
                  local_ec = 0;
                  if (((uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                       uVar9 << 0x18) != local_c4) ||
                     ((uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                      uVar11 << 0x18) != uVar10)) goto LAB_100105cc;
                  local_c4 = local_c4 + 0x3f;
                  local_b0 = local_c4 >> 6;
                  local_a4 = uVar10 + 0x3f >> 6;
                  if ((local_c4 < 0x40) ||
                     ((int)((ulonglong)local_b0 * (ulonglong)local_a4 >> 0x20) == 0)) {
                    uVar6 = local_a4 * local_b0;
                    local_6c = 0xffffffff;
                    recovered_10010fa0((int *)&local_7c,uVar6);
                    if (uVar6 != 0) {
                      iVar8 = 0;
                      do {
                        uVar4 = recovered_1000ff60(local_d0,local_d8,&local_30,
                                                   *(uint *)(param_3 + 0x10),
                                                   (uint *)((int)local_7c + iVar8));
                        if (((char)uVar4 == '\0') ||
                           (*(int *)((int)local_7c + iVar8) == 0 &&
                            *(int *)((int)local_7c + iVar8 + 4) == 0)) goto LAB_10010912;
                        iVar8 = iVar8 + 8;
                        uVar6 = uVar6 - 1;
                      } while (uVar6 != 0);
                    }
                    local_34 = 0;
                    local_38 = 0;
                    uVar4 = recovered_1000ff60(local_d0,local_d8,&local_30,*(uint *)(param_3 + 0x10)
                                               ,&local_38);
                    local_ec = 0;
                    if (((char)uVar4 != '\0') && (local_34 == 0 && local_38 == 0)) {
                      uVar6 = *param_4;
                      if (((uVar6 == 0) ||
                          ((int)((ulonglong)uVar6 * (ulonglong)param_4[1] >> 0x20) == 0)) &&
                         (uVar6 = param_4[1] * uVar6, uVar6 < 0x40000000)) {
                        local_c0 = (void *)((uint)local_c0 & 0xffffff00);
                        local_6c = 1;
                        recovered_1000f960(param_5,uVar6 * 4,(undefined1 *)&local_c0);
                        local_ec = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
                        if (0x3f < uVar10 + 0x3f) {
                          local_c8 = local_c8 + local_d4 + uVar5 + local_cc;
                          local_94 = 0;
                          local_98 = 0;
                          local_a8 = 0;
                          do {
                            if (0x3f < local_c4) {
                              local_24 = local_a8 * local_b0;
                              local_8c = local_a8 << 6;
                              local_88 = 0;
                              local_90 = 0;
                              local_b4 = 0;
                              do {
                                iVar8 = local_b4 + local_24;
                                uVar6 = *(uint *)((int)local_7c + iVar8 * 8);
                                uVar10 = *(uint *)((int)local_7c + iVar8 * 8 + 4);
                                if ((uVar6 < local_d8) <= uVar10) goto LAB_10010912;
                                local_84 = *param_4;
                                local_ac = param_4[1];
                                local_18 = local_b4 * 0x40;
                                uVar5 = local_84 + local_b4 * -0x40;
                                if (0x3f < uVar5) {
                                  uVar5 = 0x40;
                                }
                                uVar11 = local_ac - local_8c;
                                if (0x3f < uVar11) {
                                  uVar11 = 0x40;
                                }
                                uVar11 = uVar11 * uVar5;
                                if ((uVar11 != 0) &&
                                   ((int)((ulonglong)uVar11 * (ulonglong)local_9c >> 0x20) != 0))
                                goto LAB_10010912;
                                uVar5 = local_d8 - uVar6;
                                local_d4 = iVar8 + 1;
                                local_cc = local_78;
                                local_e8 = uVar5;
                                if ((local_d4 < local_78) &&
                                   (uVar9 = *(uint *)((int)local_7c + iVar8 * 8 + 8),
                                   puVar1 = (uint *)((int)local_7c + iVar8 * 8 + 0xc),
                                   uVar10 < *puVar1 || uVar10 - *puVar1 < (uint)(uVar6 < uVar9))) {
                                  local_e8 = uVar9 - uVar6;
                                }
                                uVar10 = uVar11 * local_9c;
                                local_c0 = (void *)0x0;
                                local_bc = 0;
                                local_b8 = 0;
                                iVar8 = *(int *)(param_3 + 0x14);
                                if (iVar8 == 2) {
                                  if (local_d4 < local_78) {
                                    local_6c = 4;
                                    uVar4 = recovered_10011370(uVar6 + local_d0,local_e8,
                                                               (int)&local_c0);
                                    if (((byte)uVar4 & local_bc == uVar10) == 1) goto LAB_10010be1;
                                  }
LAB_10010ddf:
                                  local_bc = 0;
                                  recovered_10006d50(local_c0);
                                  goto LAB_10010912;
                                }
                                if (iVar8 == 1) {
                                  local_6c = 3;
                                  uVar4 = recovered_10011040(uVar6 + local_d0,local_e8,uVar11,
                                                             local_9c,(int *)&local_c0);
                                  if ((char)uVar4 == '\0') goto LAB_10010ddf;
                                }
                                else {
                                  if ((iVar8 != 0) || (uVar5 < uVar10)) goto LAB_10010ddf;
                                  local_6c = 2;
                                  recovered_100114c0((int *)&local_c0,0,
                                                     (undefined1 *)(uVar6 + local_d0),
                                                     (undefined1 *)(uVar6 + local_d0) + uVar10);
                                }
LAB_10010be1:
                                if (local_ac != local_8c) {
                                  uVar6 = local_84 + local_90;
                                  local_ac = local_ac + local_98;
                                  if (0x3f < local_ac) {
                                    local_ac = 0x40;
                                  }
                                  local_ac = local_ac + (local_ac == 0);
                                  if (0x3f < uVar6) {
                                    uVar6 = 0x40;
                                  }
                                  local_1c = uVar6 + (uVar6 == 0);
                                  local_20 = uVar6 * local_c8;
                                  local_a0 = 0;
                                  local_cc = local_94;
                                  local_80 = 0;
                                  do {
                                    iVar8 = local_88;
                                    iVar7 = local_1c;
                                    iVar13 = local_a0;
                                    if (local_84 != local_18) {
                                      do {
                                        uVar6 = param_4[2];
                                        uVar10 = param_4[4];
                                        PF_PART3(local_dc,0) = 0;
                                        uVar5 = 0xff;
                                        if (uVar6 < 6) {
                                          if ((3U >> (uVar6 & 0x1f) & 1) == 0) {
                                            if ((0xcU >> (uVar6 & 0x1f) & 1) == 0) {
                                              if ((uint)*(byte *)((int)local_c0 + iVar13) * 3 + 2 <
                                                  *(uint *)(param_3 + 0x1c)) {
                                                iVar2 = (uint)*(byte *)((int)local_c0 + iVar13) * 3;
                                                iVar12 = *(int *)(param_3 + 0x18);
                                                PF_PART2(local_dc,0) = (uint16_t)
                                                           CONCAT11(*(undefined1 *)
                                                                     (iVar12 + 1 + iVar2),
                                                                    *(undefined1 *)(iVar12 + iVar2));
                                                PF_PART3(local_dc,0) = CONCAT12(*(undefined1 *)
                                                                      (iVar12 + 2 + iVar2),PF_PART2(local_dc,0))
                                                ;
                                              }
                                              iVar12 = 1;
                                              bVar14 = uVar6 == 5;
                                            }
                                            else {
                                              PF_PART2(local_dc,0) = (uint16_t)
                                                         CONCAT11(*(undefined1 *)
                                                                   ((int)local_c0 + iVar13),
                                                                  *(undefined1 *)
                                                                   ((int)local_c0 + iVar13));
                                              PF_PART3(local_dc,0) = CONCAT12(*(undefined1 *)
                                                                    ((int)local_c0 + iVar13),PF_PART2(local_dc,0));
                                              iVar12 = 1;
                                              bVar14 = uVar6 == 3;
                                            }
                                          }
                                          else {
                                            PF_PART2(local_dc,0) = (uint16_t)
                                                       CONCAT11(*(undefined1 *)
                                                                 ((int)local_c0 + iVar13 + 1),
                                                                *(undefined1 *)
                                                                 ((int)local_c0 + iVar13));
                                            PF_PART3(local_dc,0) = CONCAT12(*(undefined1 *)
                                                                  ((int)local_c0 + iVar13 + 2),PF_PART2(local_dc,0));
                                            iVar12 = 3;
                                            bVar14 = uVar6 == 1;
                                          }
                                          local_d4 = uVar10;
                                          if (bVar14) {
                                            uVar5 = (uint)*(byte *)((int)local_c0 + iVar13 + iVar12)
                                            ;
                                          }
                                        }
                                        PF_PART4(local_dc,0) = CONCAT13((char)((uVar5 * uVar10 + 0x7f) / 0xff),
                                                             PF_PART3(local_dc,0));
                                        local_6c = 5;
                                        recovered_10002410((void *)((*param_4 * local_cc + iVar8) *
                                                                    4 + *param_5),local_dc,4);
                                        iVar8 = iVar8 + 1;
                                        iVar13 = iVar13 + local_c8;
                                        iVar7 = iVar7 + -1;
                                      } while (iVar7 != 0);
                                    }
                                    local_80 = local_80 + 1;
                                    local_cc = local_cc + 1;
                                    local_a0 = local_a0 + local_20;
                                  } while (local_80 != local_ac);
                                }
                                local_bc = 0;
                                recovered_10006d50(local_c0);
                                local_b4 = local_b4 + 1;
                                local_90 = local_90 + -0x40;
                                local_88 = local_88 + 0x40;
                              } while (local_b4 != local_b0);
                            }
                            local_a8 = local_a8 + 1;
                            local_98 = local_98 + -0x40;
                            local_94 = local_94 + 0x40;
                          } while (local_a8 != local_a4);
                        }
                      }
                      else {
LAB_10010912:
                        local_ec = 0;
                      }
                    }
                    local_78 = 0;
                    recovered_10006d50(local_7c);
                    goto LAB_100105cc;
                  }
                }
              }
            }
          }
        }
LAB_100105e5:
        local_ec = 0;
        goto LAB_100105cc;
      }
    }
  }
  local_ec = 0;
LAB_100105cc:
  recovered_10007320(&local_70);
  return local_ec;
}

#undef DAT_10014c88
#undef DAT_10014f68
#undef PTR_recovered_10006c80_10015008
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
#undef local_70
#undef local_6c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef auStack_14
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef auStackY_180
#undef uStack_da
#undef uStack_d9
#undef local_ec
#undef local_e8
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010e90
 */

void recovered_10010e90(byte *in_ECX,byte *in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  uVar4 = (uint)in_EDX[3];
  if (uVar4 != 0xff) {
    if (uVar4 == 0) {
      if (in_ECX[3] != 0) {
        return;
      }
    }
    else if (in_ECX[3] != 0) {
      iVar3 = (uVar4 ^ 0xff) * (uint)in_ECX[3];
      uVar2 = (iVar3 + 0x7fU & 0xffff) / 0xff + uVar4;
      uVar1 = uVar2 >> 1;
      *in_ECX = (byte)((*in_EDX * uVar4 + ((uint)*in_ECX * iVar3 + 0x7f) / 0xff + uVar1) / uVar2);
      in_ECX[1] = (byte)((in_EDX[1] * uVar4 + ((uint)in_ECX[1] * iVar3 + 0x7f) / 0xff + uVar1) /
                        uVar2);
      in_ECX[2] = (byte)((in_EDX[2] * uVar4 + ((uint)in_ECX[2] * iVar3 + 0x7f) / 0xff + uVar1) /
                        uVar2);
      in_ECX[3] = (byte)uVar2;
      return;
    }
  }
  recovered_10002410(in_ECX,in_EDX,4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010fa0
 */

void recovered_10010fa0(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    pvVar3 = recovered_10006cf0(param_2 * 8);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar5 = 0;
      do {
        uVar2 = *(undefined4 *)((int)pointer + iVar5 * 8);
        *(undefined4 *)((int)pvVar3 + iVar5 * 8 + 4) = *(undefined4 *)((int)pointer + iVar5 * 8 + 4)
        ;
        *(undefined4 *)((int)pvVar3 + iVar5 * 8) = uVar2;
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
    recovered_10006d50(pointer);
    *param_1 = (int)pvVar3;
    param_1[2] = param_2;
    uVar4 = param_1[1];
    if (uVar4 < param_2) {
      do {
        *(undefined4 *)((int)pvVar3 + uVar4 * 8 + 4) = 0;
        *(undefined4 *)((int)pvVar3 + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
      param_1[1] = param_2;
    }
  }
  return;
}


#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011040
 */

undefined4 recovered_10011040(int in_ECX,uint in_EDX,uint param_3,uint param_4,int *param_5)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  ushort uVar2;
  void *pointer;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;

  uVar10 = param_4 * param_3;
  param_5[1] = 0;
  uVar3 = 0;
  if ((uint)param_5[2] < uVar10) {
    pvVar4 = recovered_10006cf0(uVar10);
    pointer = (void *)*param_5;
    iVar11 = param_5[1];
    if (iVar11 != 0) {
      iVar8 = 0;
      do {
        *(undefined1 *)((int)pvVar4 + iVar8) = *(undefined1 *)((int)pointer + iVar8);
        iVar8 = iVar8 + 1;
      } while (iVar11 != iVar8);
    }
    recovered_10006d50(pointer);
    *param_5 = (int)pvVar4;
    param_5[2] = uVar10;
    uVar3 = param_5[1];
  }
  while (uVar3 < uVar10) {
    *(undefined1 *)(*param_5 + uVar3) = 0;
    uVar3 = param_5[1] + 1;
    param_5[1] = uVar3;
  }
  if (param_4 == 0) {
    local_18 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    local_18 = 0;
    uVar3 = 0;
    local_20 = 0;
    do {
      if (param_3 == 0) {
        bVar12 = false;
LAB_10011325:
        if (bVar12) {
          return local_18;
        }
      }
      else {
        if (uVar3 < in_EDX) {
          uVar10 = 0;
          do {
            uVar9 = uVar3 + 1;
            uVar5 = (uint)*(byte *)(in_ECX + uVar3);
            if (uVar5 < 0x7f) {
              if (in_EDX <= uVar9) {
                return local_18;
              }
              if (param_3 - uVar10 <= uVar5) {
                return local_18;
              }
              uVar6 = uVar5 + 1;
              uVar1 = *(undefined1 *)(in_ECX + 1 + uVar3);
              uVar3 = uVar3 + 2;
              iVar11 = param_4 * uVar10 + local_20;
              uVar9 = uVar6;
              do {
                *(undefined1 *)(*param_5 + iVar11) = uVar1;
                iVar11 = iVar11 + param_4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            else {
              if (uVar5 == 0x80) {
                if (in_EDX - uVar9 < 2) {
                  return local_18;
                }
                uVar2 = *(ushort *)(in_ECX + 1 + uVar3);
                uVar6 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
                if (param_3 - uVar10 <= uVar6 - 1) {
                  return local_18;
                }
                uVar9 = uVar3 + 3;
                if (in_EDX - uVar9 < uVar6) {
                  return local_18;
                }
                puVar7 = (undefined1 *)(in_ECX + uVar9);
                iVar11 = param_4 * uVar10 + local_20;
                uVar3 = uVar6;
                do {
                  *(undefined1 *)(*param_5 + iVar11) = *puVar7;
                  iVar11 = iVar11 + param_4;
                  puVar7 = puVar7 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
              else {
                if (uVar5 == 0x7f) {
                  if (in_EDX - uVar9 < 3) {
                    return local_18;
                  }
                  uVar2 = *(ushort *)(in_ECX + 1 + uVar3);
                  uVar6 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
                  if (param_3 - uVar10 <= uVar6 - 1) {
                    return local_18;
                  }
                  uVar1 = *(undefined1 *)(in_ECX + 3 + uVar3);
                  uVar3 = uVar3 + 4;
                  iVar11 = param_4 * uVar10 + local_20;
                  uVar9 = uVar6;
                  do {
                    *(undefined1 *)(*param_5 + iVar11) = uVar1;
                    iVar11 = iVar11 + param_4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                  goto LAB_100112ed;
                }
                uVar6 = 0x100 - uVar5;
                if (param_3 - uVar10 < uVar6) {
                  return local_18;
                }
                if (in_EDX - uVar9 < uVar6) {
                  return local_18;
                }
                puVar7 = (undefined1 *)(in_ECX + uVar9);
                uVar5 = uVar5 | 0xffffff00;
                iVar11 = param_4 * uVar10 + local_20;
                do {
                  *(undefined1 *)(*param_5 + iVar11) = *puVar7;
                  iVar11 = iVar11 + param_4;
                  puVar7 = puVar7 + 1;
                  uVar5 = uVar5 + 1;
                } while (uVar5 != 0);
              }
              uVar3 = uVar9 + uVar6;
            }
LAB_100112ed:
            uVar10 = uVar10 + uVar6;
            bVar12 = uVar10 < param_3;
            if (!bVar12) {
              if (bVar12) {
                return local_18;
              }
              goto LAB_10011329;
            }
          } while (uVar3 < in_EDX);
          goto LAB_10011325;
        }
        if (param_3 != 0) {
          return local_18;
        }
      }
LAB_10011329:
      local_20 = local_20 + 1;
      local_18 = CONCAT31((int3)(local_20 >> 8),param_4 <= local_20);
    } while (local_20 != param_4);
  }
  return local_18;
}

#undef local_20
#undef local_18

#undef DAT_10014f78
#define DAT_10014f78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b6U)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define auStackY_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 212))
#define local_54 (*(void * *)(pf_stack_frame + 156))
#define local_50 (*(uint *)(pf_stack_frame + 160))
#define local_4c (*(uint *)(pf_stack_frame + 164))
#define local_48 (*(undefined4 *)(pf_stack_frame + 168))
#define local_44 (*(undefined4 *)(pf_stack_frame + 172))
#define local_30 (*(undefined * *)(pf_stack_frame + 192))
#define local_2c (*(undefined * *)(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 200))
#define local_24 (*(undefined4 *)(pf_stack_frame + 204))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011370
 */

undefined4 recovered_10011370(int in_ECX,uint in_EDX,int param_3)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  uint size;
  void *pointer;
  uint uVar1;
  undefined4 uVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_e0 + 0x80;
  *(undefined4 *)(param_3 + 4) = 0;
  local_30 = PTR_recovered_10006c80_10015008;
  local_2c = &DAT_10014f78;
  local_24 = 0xfe;
  recovered_100072f0(&local_48);
  if (in_EDX == 0 || in_ECX == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = 4;
    do {
      size = uVar1;
      uVar1 = size * 2;
    } while (size < in_EDX);
    local_44 = 0xffffffff;
    pointer = recovered_10006cf0(size);
    recovered_10006d50((void *)0x0);
    uVar1 = 0;
    do {
      *(undefined1 *)((int)pointer + uVar1) = *(undefined1 *)(in_ECX + uVar1);
      uVar1 = uVar1 + 1;
    } while (in_EDX != uVar1);
    local_44 = 1;
    local_54 = pointer;
    local_50 = in_EDX;
    local_4c = size;
    uVar2 = recovered_100115e0((int *)&local_54,(uint *)param_3,(uint *)0xffffffff);
    recovered_10006d50(pointer);
  }
  recovered_10007320(&local_48);
  return uVar2;
}

#undef DAT_10014f78
#undef PTR_recovered_10006c80_10015008
#undef auStackY_e0
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100114c0
 */

int recovered_100114c0(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      pvVar2 = recovered_10006cf0((uint)puVar7);
      pointer = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar2 + iVar5) = *(undefined1 *)((int)pointer + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      recovered_10006d50(pointer);
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


/* Scalar reconstruction of the recovered DEFLATE state machine.
 * Pooka's Free Software License. */
#define PF_INFLATE_MALLOC recovered_10002320
#define PF_INFLATE_FREE recovered_10002370
#include "inflate.h"
#undef PF_INFLATE_MALLOC
#undef PF_INFLATE_FREE
undefined4 recovered_100115e0(int *in_ECX,uint *in_EDX,uint *param_3){return pf_inflate_zlib((const uintptr_t *)in_ECX,(uintptr_t *)in_EDX,(uintptr_t)param_3);}

#undef PF_INFLATE_MALLOC
#undef PF_INFLATE_FREE

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012cf0
 */

uint recovered_10012cf0(int *in_ECX,uint in_EDX,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  if (0x18 < in_EDX) {
    return 0;
  }
  uVar5 = in_ECX[5];
  if (uVar5 < in_EDX) {
    uVar8 = in_ECX[2];
    uVar3 = in_ECX[1];
    if ((uint)in_ECX[1] < uVar8) {
      uVar3 = uVar8;
    }
    do {
      uVar8 = uVar8 + 1;
      if (uVar8 - uVar3 == 1) break;
      in_ECX[2] = uVar8;
      bVar4 = *(byte *)(*in_ECX + -1 + uVar8);
      bVar1 = (byte)uVar5 & 0x1f;
      uVar6 = (uint)bVar4 << ((byte)uVar5 & 0x1f);
      uVar7 = uVar6;
      uVar2 = 0 << bVar1 | (uint)(bVar4 >> 0x20 - bVar1);
      if ((uVar5 & 0x20) != 0) {
        uVar7 = 0;
        uVar2 = uVar6;
      }
      in_ECX[3] = in_ECX[3] | uVar7;
      in_ECX[4] = in_ECX[4] | uVar2;
      uVar5 = uVar5 + 8;
      in_ECX[5] = uVar5;
    } while (uVar5 < in_EDX);
  }
  uVar8 = 0;
  if (in_EDX <= uVar5) {
    bVar4 = (byte)in_EDX;
    uVar8 = (uint)in_ECX[4] >> (bVar4 & 0x1f);
    uVar5 = uVar8;
    if ((in_EDX & 0x20) != 0) {
      uVar5 = 0;
    }
    uVar3 = (uint)in_ECX[3] >> (bVar4 & 0x1f) | in_ECX[4] << 0x20 - (bVar4 & 0x1f);
    if ((in_EDX & 0x20) != 0) {
      uVar3 = uVar8;
    }
    uVar8 = -1 << (bVar4 & 0x1f);
    if ((in_EDX & 0x20) != 0) {
      uVar8 = 0;
    }
    *param_3 = ~uVar8 & in_ECX[3];
    in_ECX[4] = uVar5;
    in_ECX[3] = uVar3;
    in_ECX[5] = in_ECX[5] - in_EDX;
    uVar8 = CONCAT31((int3)(uVar5 >> 8),1);
  }
  return uVar8;
}


#undef DAT_10014aa4
#define DAT_10014aa4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e2U)))
#undef DAT_10014b1c
#define DAT_10014b1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25aU)))
#define local_48 (*(uint *)(pf_stack_frame + 24))
#define local_44 (*(uint *)(pf_stack_frame + 28))
#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(int *)(pf_stack_frame + 40))
#define local_30 (*(uint *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 68))
#define local_4c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012de0
 */

undefined4 recovered_10012de0(int *in_ECX,int in_EDX,int param_3,int *param_4,uint param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *pointer;
  byte bVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;

  if (*(char *)(in_EDX + 0x50) != '\x01') {
    return 0;
  }
  do {
    uVar16 = *(uint *)(in_EDX + 0x4c);
    uVar13 = 0;
    if (uVar16 == 0) {
      return 0;
    }
    iVar2 = *in_ECX;
    uVar11 = in_ECX[1];
    local_4c = in_ECX[5];
    local_30 = in_ECX[2];
    local_44 = in_ECX[4];
    local_48 = in_ECX[3];
    uVar14 = 1;
    iVar6 = 0;
    local_38 = 0;
    while( true ) {
      if (local_4c == 0) {
        if (uVar11 <= local_30) {
          return 0;
        }
        in_ECX[2] = local_30 + 1;
        uVar10 = local_48 | *(byte *)(iVar2 + local_30);
        local_4c = 8;
        local_30 = local_30 + 1;
      }
      else {
        uVar10 = local_48;
      }
      local_48 = local_44 << 0x1f | uVar10 >> 1;
      uVar13 = uVar10 & 1 | uVar13;
      local_44 = local_44 >> 1;
      in_ECX[4] = local_44;
      in_ECX[3] = local_48;
      local_4c = local_4c - 1;
      in_ECX[5] = local_4c;
      iVar15 = *(int *)(in_EDX + uVar14 * 4);
      uVar10 = iVar15 + local_38;
      if (uVar13 < uVar10) break;
      iVar6 = iVar6 + iVar15;
      local_38 = uVar10 * 2;
      uVar13 = uVar13 * 2;
      uVar14 = uVar14 + 1;
      if (uVar16 < uVar14) {
        return 0;
      }
    }
    uVar16 = (uVar13 - local_38) + iVar6;
    if (*(uint *)(in_EDX + 0x44) <= uVar16) {
      return 0;
    }
    uVar1 = *(ushort *)(*(int *)(in_EDX + 0x40) + uVar16 * 2);
    uVar16 = (uint)uVar1;
    if (uVar16 < 0x100) {
      uVar16 = param_4[1];
      if (param_5 <= uVar16) {
        return 0;
      }
      if (uVar16 == param_4[2]) {
        uVar13 = uVar16 * 2;
        if (uVar16 == 0) {
          uVar13 = 4;
        }
        if (uVar16 < uVar13) {
          pvVar7 = recovered_10006cf0(uVar13);
          pvVar3 = (void *)*param_4;
          iVar2 = param_4[1];
          if (iVar2 != 0) {
            iVar6 = 0;
            do {
              *(undefined1 *)((int)pvVar7 + iVar6) = *(undefined1 *)((int)pvVar3 + iVar6);
              iVar6 = iVar6 + 1;
            } while (iVar2 != iVar6);
          }
          recovered_10006d50(pvVar3);
          *param_4 = (int)pvVar7;
          param_4[2] = uVar13;
          uVar16 = param_4[1];
        }
      }
      *(char *)(*param_4 + uVar16) = (char)uVar1;
      param_4[1] = param_4[1] + 1;
    }
    else {
      if (uVar16 == 0x100) {
        return CONCAT31((int3)(local_48 >> 8),1);
      }
      if (0x11d < uVar16) {
        return 0;
      }
      local_1c = *(uint *)(uVar16 * 4 + ((uintptr_t)pf_module_state-0x30aU));
      uVar16 = *(uint *)(uVar16 * 4 + ((uintptr_t)pf_module_state-0x296U));
      if (uVar16 != 0) {
        if (0x18 < uVar16) {
          return 0;
        }
        if (local_4c < uVar16) {
          uVar14 = uVar11;
          if (uVar11 < local_30) {
            uVar14 = local_30;
          }
          do {
            if (uVar14 == local_30) {
              uVar13 = uVar14;
              break;
            }
            uVar13 = local_30 + 1;
            in_ECX[2] = uVar13;
            bVar12 = (byte)local_4c & 0x1f;
            uVar8 = (uint)*(byte *)(iVar2 + local_30) << ((byte)local_4c & 0x1f);
            uVar9 = uVar8;
            uVar10 = 0 << bVar12 | (uint)(*(byte *)(iVar2 + local_30) >> 0x20 - bVar12);
            if ((local_4c & 0x20) != 0) {
              uVar9 = 0;
              uVar10 = uVar8;
            }
            local_44 = local_44 | uVar10;
            local_48 = local_48 | uVar9;
            in_ECX[4] = local_44;
            in_ECX[3] = local_48;
            local_4c = local_4c + 8;
            in_ECX[5] = local_4c;
            local_30 = uVar13;
          } while (local_4c < uVar16);
        }
        else {
          uVar13 = local_30;
        }
        bVar17 = local_4c < uVar16;
        local_4c = local_4c - uVar16;
        if (bVar17) {
          return 0;
        }
        bVar12 = (byte)uVar16;
        uVar10 = local_44 >> (bVar12 & 0x1f);
        uVar14 = uVar10;
        if ((uVar16 & 0x20) != 0) {
          uVar14 = 0;
        }
        uVar9 = local_48 >> (bVar12 & 0x1f) | local_44 << 0x20 - (bVar12 & 0x1f);
        if ((uVar16 & 0x20) != 0) {
          uVar9 = uVar10;
        }
        uVar10 = -1 << (bVar12 & 0x1f);
        if ((uVar16 & 0x20) != 0) {
          uVar10 = 0;
        }
        local_1c = local_1c + (~uVar10 & local_48);
        in_ECX[4] = uVar14;
        in_ECX[3] = uVar9;
        in_ECX[5] = local_4c;
        local_30 = uVar13;
        local_48 = uVar9;
        local_44 = uVar14;
      }
      if (*(char *)(param_3 + 0x50) != '\x01') {
        return 0;
      }
      uVar16 = *(uint *)(param_3 + 0x4c);
      local_40 = 0;
      if (uVar16 == 0) {
        return 0;
      }
      uVar13 = 1;
      iVar15 = 0;
      iVar6 = 0;
      local_3c = local_30;
      while( true ) {
        if (local_4c == 0) {
          if (uVar11 <= local_3c) {
            return 0;
          }
          in_ECX[2] = local_3c + 1;
          local_48 = local_48 | *(byte *)(iVar2 + local_3c);
          local_4c = 8;
          local_3c = local_3c + 1;
        }
        else {
        }
        uVar10 = local_44 << 0x1f | local_48 >> 1;
        local_40 = local_48 & 1 | local_40;
        local_44 = local_44 >> 1;
        in_ECX[4] = local_44;
        in_ECX[3] = uVar10;
        local_4c = local_4c - 1;
        in_ECX[5] = local_4c;
        iVar4 = *(int *)(param_3 + uVar13 * 4);
        uVar14 = iVar4 + iVar6;
        if (local_40 < uVar14) break;
        iVar15 = iVar15 + iVar4;
        iVar6 = uVar14 * 2;
        local_40 = local_40 * 2;
        uVar13 = uVar13 + 1;
        local_48 = uVar10;
        if (uVar16 < uVar13) {
          return 0;
        }
      }
      uVar16 = (local_40 - iVar6) + iVar15;
      if (*(uint *)(param_3 + 0x44) <= uVar16) {
        return 0;
      }
      uVar16 = (uint)*(ushort *)(*(int *)(param_3 + 0x40) + uVar16 * 2);
      if (0x1d < uVar16) {
        return 0;
      }
      uVar13 = *(uint *)(&DAT_10014aa4 + uVar16 * 4);
      uVar16 = *(uint *)(&DAT_10014b1c + uVar16 * 4);
      if (uVar16 != 0) {
        if (0x18 < uVar16) {
          return 0;
        }
        if (local_4c < uVar16) {
          if (uVar11 < local_3c) {
            uVar11 = local_3c;
          }
          do {
            local_3c = local_3c + 1;
            if (local_3c - uVar11 == 1) break;
            in_ECX[2] = local_3c;
            bVar12 = *(byte *)(iVar2 + -1 + local_3c);
            bVar5 = (byte)local_4c & 0x1f;
            uVar8 = (uint)bVar12 << ((byte)local_4c & 0x1f);
            uVar9 = uVar8;
            uVar14 = 0 << bVar5 | (uint)(bVar12 >> 0x20 - bVar5);
            if ((local_4c & 0x20) != 0) {
              uVar9 = 0;
              uVar14 = uVar8;
            }
            local_44 = local_44 | uVar14;
            uVar10 = uVar10 | uVar9;
            in_ECX[4] = local_44;
            in_ECX[3] = uVar10;
            local_4c = local_4c + 8;
            in_ECX[5] = local_4c;
          } while (local_4c < uVar16);
        }
        if (local_4c < uVar16) {
          return 0;
        }
        bVar12 = (byte)uVar16;
        uVar14 = local_44 >> (bVar12 & 0x1f);
        uVar11 = uVar14;
        if ((uVar16 & 0x20) != 0) {
          uVar11 = 0;
        }
        uVar9 = uVar10 >> (bVar12 & 0x1f) | local_44 << 0x20 - (bVar12 & 0x1f);
        if ((uVar16 & 0x20) != 0) {
          uVar9 = uVar14;
        }
        uVar14 = -1 << (bVar12 & 0x1f);
        if ((uVar16 & 0x20) != 0) {
          uVar14 = 0;
        }
        in_ECX[4] = uVar11;
        in_ECX[3] = uVar9;
        in_ECX[5] = local_4c - uVar16;
        uVar13 = uVar13 + (~uVar14 & uVar10);
      }
      if (uVar13 == 0) {
        return 0;
      }
      uVar16 = param_4[1];
      if (uVar16 < uVar13) {
        return 0;
      }
      if (param_5 - uVar16 < local_1c) {
        return 0;
      }
      if (local_1c != 0) {
        uVar11 = 0;
        do {
          pvVar3 = (void *)*param_4;
          uVar14 = uVar16;
          pvVar7 = pvVar3;
          if (uVar16 == param_4[2]) {
            uVar10 = uVar16 * 2;
            if (uVar16 == 0) {
              uVar10 = 4;
            }
            if (uVar16 < uVar10) {
              pvVar7 = recovered_10006cf0(uVar10);
              pointer = (void *)*param_4;
              iVar2 = param_4[1];
              if (iVar2 != 0) {
                iVar6 = 0;
                do {
                  *(undefined1 *)((int)pvVar7 + iVar6) = *(undefined1 *)((int)pointer + iVar6);
                  iVar6 = iVar6 + 1;
                } while (iVar2 != iVar6);
              }
              recovered_10006d50(pointer);
              *param_4 = (int)pvVar7;
              param_4[2] = uVar10;
              uVar14 = param_4[1];
            }
          }
          *(undefined1 *)((int)pvVar7 + uVar14) = *(undefined1 *)((int)pvVar3 + (uVar16 - uVar13));
          uVar16 = param_4[1] + 1;
          param_4[1] = uVar16;
          uVar11 = uVar11 + 1;
        } while (uVar11 != local_1c);
      }
    }
    if (*(char *)(in_EDX + 0x50) == '\0') {
      return 0;
    }
  } while( true );
}

#undef DAT_10014aa4
#undef DAT_10014b1c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_30
#undef local_1c
#undef local_4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013460
 */

void recovered_10013460(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x44) = 0;
  recovered_10006d50(*(void **)(param_1 + 0x40));
  return;
}


#undef DAT_10014f9c
#define DAT_10014f9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6daU)))
#undef DAT_100152a4
#define DAT_100152a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9e2U)))
#undef DAT_100152f4
#define DAT_100152f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa32U)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define auStackY_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 212))
#define local_54 (*(void * *)(pf_stack_frame + 156))
#define local_50 (*(undefined4 *)(pf_stack_frame + 160))
#define local_4c (*(undefined4 *)(pf_stack_frame + 164))
#define local_48 (*(undefined4 *)(pf_stack_frame + 168))
#define local_44 (*(undefined4 *)(pf_stack_frame + 172))
#define local_30 (*(undefined * *)(pf_stack_frame + 192))
#define local_2c (*(undefined * *)(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 200))
#define local_24 (*(undefined4 *)(pf_stack_frame + 204))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013490
 */

void recovered_10013490(void)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;

  bVar3 = 0;
  pointer = recovered_10006cf0(0x480);
  recovered_10006d50((void *)0x0);
  local_20 = auStackY_e0 + 0x80;
  local_4c = 0x120;
  local_30 = PTR_recovered_10006c80_10015008;
  local_2c = &DAT_10014f9c;
  local_24 = 0x2c7;
  local_54 = pointer;
  local_28 = auStack_1c + 0x18;
  recovered_100072f0(&local_48);
  iVar1 = -0x480;
  do {
    *(undefined4 *)((int)pointer + iVar1 + 0x480) = 8;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0);
  local_50 = 0x120;
  iVar1 = -0x1c0;
  do {
    *(undefined4 *)((int)pointer + iVar1 + 0x400) = 9;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0);
  *(undefined4 *)((int)pointer + 0x400) = 7;
  *(undefined4 *)((int)pointer + 0x404) = 7;
  *(undefined4 *)((int)pointer + 0x408) = 7;
  *(undefined4 *)((int)pointer + 0x40c) = 7;
  *(undefined4 *)((int)pointer + 0x410) = 7;
  *(undefined4 *)((int)pointer + 0x414) = 7;
  *(undefined4 *)((int)pointer + 0x418) = 7;
  *(undefined4 *)((int)pointer + 0x41c) = 7;
  *(undefined4 *)((int)pointer + 0x420) = 7;
  *(undefined4 *)((int)pointer + 0x424) = 7;
  *(undefined4 *)((int)pointer + 0x428) = 7;
  *(undefined4 *)((int)pointer + 0x42c) = 7;
  *(undefined4 *)((int)pointer + 0x430) = 7;
  *(undefined4 *)((int)pointer + 0x434) = 7;
  *(undefined4 *)((int)pointer + 0x438) = 7;
  *(undefined4 *)((int)pointer + 0x43c) = 7;
  *(undefined4 *)((int)pointer + 0x440) = 7;
  *(undefined4 *)((int)pointer + 0x444) = 7;
  *(undefined4 *)((int)pointer + 0x448) = 7;
  *(undefined4 *)((int)pointer + 0x44c) = 7;
  *(undefined4 *)((int)pointer + 0x450) = 7;
  *(undefined4 *)((int)pointer + 0x454) = 7;
  *(undefined4 *)((int)pointer + 0x458) = 7;
  *(undefined4 *)((int)pointer + 0x45c) = 7;
  *(undefined4 *)((int)pointer + 0x460) = 8;
  *(undefined4 *)((int)pointer + 0x464) = 8;
  *(undefined4 *)((int)pointer + 0x468) = 8;
  *(undefined4 *)((int)pointer + 0x46c) = 8;
  *(undefined4 *)((int)pointer + 0x470) = 8;
  *(undefined4 *)((int)pointer + 0x474) = 8;
  *(undefined4 *)((int)pointer + 0x478) = 8;
  *(undefined4 *)((int)pointer + 0x47c) = 8;
  puVar2 = &DAT_100152a4;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  DAT_100152f4 = 0;
  local_44 = 1;
  recovered_100137c0((int *)&local_54,&DAT_100152a4,0);
  recovered_10006d50(pointer);
  recovered_10007320(&local_48);
  return;
}

#undef DAT_10014f9c
#undef DAT_100152a4
#undef DAT_100152f4
#undef PTR_recovered_10006c80_10015008
#undef auStackY_e0
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

#define aiStack_54 (*(int (*)[21])(pf_stack_frame + 28))
#define local_44 (*(int *)(pf_stack_frame + 44))
#define local_40 (*(int *)(pf_stack_frame + 48))
#define local_3c (*(int *)(pf_stack_frame + 52))
#define local_38 (*(int *)(pf_stack_frame + 56))
#define local_34 (*(int *)(pf_stack_frame + 60))
#define local_30 (*(int *)(pf_stack_frame + 64))
#define local_2c (*(int *)(pf_stack_frame + 68))
#define local_28 (*(int *)(pf_stack_frame + 72))
#define local_24 (*(int *)(pf_stack_frame + 76))
#define local_20 (*(int *)(pf_stack_frame + 80))
#define local_1c (*(int *)(pf_stack_frame + 84))
#define local_18 (*(int *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100137c0
 */

undefined1 recovered_100137c0(int *in_ECX,int *in_EDX,byte param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  void *pointer;
  int iVar14;
  uint uVar15;
  void *pvVar16;
  undefined2 *puVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;

  in_EDX[0xf] = 0;
  in_EDX[0xe] = 0;
  in_EDX[0xd] = 0;
  in_EDX[0xc] = 0;
  in_EDX[0xb] = 0;
  in_EDX[10] = 0;
  in_EDX[9] = 0;
  in_EDX[8] = 0;
  in_EDX[7] = 0;
  in_EDX[6] = 0;
  in_EDX[5] = 0;
  in_EDX[4] = 0;
  in_EDX[3] = 0;
  in_EDX[2] = 0;
  in_EDX[1] = 0;
  *in_EDX = 0;
  in_EDX[0x11] = 0;
  recovered_10006d50((void *)in_EDX[0x10]);
  in_EDX[0x10] = 0;
  in_EDX[0x11] = 0;
  in_EDX[0x12] = 0;
  in_EDX[0x13] = 0;
  *(undefined1 *)(in_EDX + 0x14) = 0;
  recovered_10006d50((void *)0x0);
  iVar5 = in_ECX[1];
  if (iVar5 != 0) {
    puVar18 = (uint *)*in_ECX;
    iVar23 = iVar5 * 4;
    do {
      uVar15 = *puVar18;
      if (0xf < uVar15) goto LAB_10013baf;
      in_EDX[uVar15] = in_EDX[uVar15] + 1;
      if (uVar15 < (uint)in_EDX[0x13]) {
        uVar15 = in_EDX[0x13];
      }
      in_EDX[0x13] = uVar15;
      puVar18 = puVar18 + 1;
      iVar23 = iVar23 + -4;
    } while (iVar23 != 0);
  }
  if (*in_EDX == iVar5) {
    uVar15 = (uint)param_3;
    *(byte *)(in_EDX + 0x14) = param_3;
  }
  else {
    iVar5 = in_EDX[1];
    if (iVar5 < 3) {
      iVar23 = 4 - (in_EDX[2] + iVar5 * 2);
      if (-1 < iVar23) {
        iVar23 = iVar23 * 2 - in_EDX[3];
        if (-1 < iVar23) {
          iVar23 = iVar23 * 2 - in_EDX[4];
          if (-1 < iVar23) {
            iVar23 = iVar23 * 2 - in_EDX[5];
            if (-1 < iVar23) {
              iVar23 = iVar23 * 2 - in_EDX[6];
              if (-1 < iVar23) {
                iVar6 = in_EDX[7];
                iVar23 = iVar23 * 2 - iVar6;
                if (-1 < iVar23) {
                  iVar29 = in_EDX[8];
                  iVar23 = iVar23 * 2 - iVar29;
                  if (-1 < iVar23) {
                    iVar7 = in_EDX[9];
                    iVar23 = iVar23 * 2 - iVar7;
                    if (-1 < iVar23) {
                      iVar8 = in_EDX[10];
                      iVar23 = iVar23 * 2 - iVar8;
                      if (-1 < iVar23) {
                        iVar9 = in_EDX[0xb];
                        iVar23 = iVar23 * 2 - iVar9;
                        if (-1 < iVar23) {
                          iVar10 = in_EDX[0xc];
                          iVar23 = iVar23 * 2 - iVar10;
                          if (-1 < iVar23) {
                            iVar11 = in_EDX[0xd];
                            iVar23 = iVar23 * 2 - iVar11;
                            if (-1 < iVar23) {
                              iVar12 = in_EDX[0xe];
                              iVar23 = iVar23 * 2 - iVar12;
                              if (-1 < iVar23) {
                                iVar13 = in_EDX[0xf];
                                uVar15 = 0;
                                if (iVar13 <= iVar23 * 2) {
                                  iVar24 = in_EDX[2] + iVar5;
                                  iVar26 = in_EDX[3] + iVar24;
                                  iVar19 = in_EDX[4] + iVar26;
                                  iVar27 = in_EDX[5] + iVar19;
                                  iVar28 = in_EDX[6] + iVar27;
                                  iVar23 = iVar29 + iVar6 + iVar28;
                                  iVar1 = iVar7 + iVar23;
                                  iVar2 = iVar8 + iVar1;
                                  iVar3 = iVar9 + iVar2;
                                  in_EDX[0x11] = 0;
                                  iVar4 = iVar10 + iVar3;
                                  iVar20 = iVar11 + iVar4;
                                  iVar21 = iVar20 + iVar12;
                                  uVar22 = iVar21 + iVar13;
                                  if ((uint)in_EDX[0x12] < uVar22) {
                                    pvVar16 = recovered_10006cf0(uVar22 * 2);
                                    pointer = (void *)in_EDX[0x10];
                                    iVar14 = in_EDX[0x11];
                                    if (iVar14 != 0) {
                                      iVar25 = 0;
                                      do {
                                        *(undefined2 *)((int)pvVar16 + iVar25 * 2) =
                                             *(undefined2 *)((int)pointer + iVar25 * 2);
                                        iVar25 = iVar25 + 1;
                                      } while (iVar14 != iVar25);
                                    }
                                    recovered_10006d50(pointer);
                                    in_EDX[0x10] = (int)pvVar16;
                                    in_EDX[0x12] = uVar22;
                                    uVar15 = in_EDX[0x11];
                                  }
                                  if (uVar15 < uVar22) {
                                    iVar29 = (iVar11 + iVar12 + iVar13 +
                                             iVar6 + iVar29 + iVar7 + iVar8 + iVar9 + iVar10 +
                                             iVar28) - uVar15;
                                    puVar17 = (undefined2 *)(uVar15 * 2 + in_EDX[0x10]);
                                    do {
                                      *puVar17 = 0;
                                      puVar17 = puVar17 + 1;
                                      iVar29 = iVar29 + -1;
                                    } while (iVar29 != 0);
                                    in_EDX[0x11] = uVar22;
                                  }
                                  aiStack_54[1] = 0;
                                  aiStack_54[2] = iVar5;
                                  aiStack_54[3] = iVar24;
                                  local_44 = iVar26;
                                  local_40 = iVar19;
                                  local_3c = iVar27;
                                  local_38 = iVar28;
                                  local_34 = iVar6 + iVar28;
                                  local_30 = iVar23;
                                  local_2c = iVar1;
                                  local_28 = iVar2;
                                  local_24 = iVar3;
                                  local_20 = iVar4;
                                  local_1c = iVar20;
                                  local_18 = iVar21;
                                  iVar5 = in_ECX[1];
                                  if (iVar5 != 0) {
                                    iVar23 = *in_ECX;
                                    iVar6 = in_EDX[0x10];
                                    iVar29 = 0;
                                    do {
                                      iVar7 = *(int *)(iVar23 + iVar29 * 4);
                                      if (iVar7 != 0) {
                                        iVar8 = aiStack_54[iVar7];
                                        aiStack_54[iVar7] = iVar8 + 1;
                                        *(short *)(iVar6 + iVar8 * 2) = (short)iVar29;
                                      }
                                      iVar29 = iVar29 + 1;
                                    } while (iVar5 != iVar29);
                                  }
                                  *(undefined1 *)(in_EDX + 0x14) = 1;
                                  uVar15 = 1;
                                }
                                goto LAB_10013bb1;
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
LAB_10013baf:
    uVar15 = 0;
  }
LAB_10013bb1:
  return (char)uVar15;
}

#undef aiStack_54
#undef local_44
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
#undef local_18

#undef DAT_10014fa4
#define DAT_10014fa4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e2U)))
#undef DAT_100152fc
#define DAT_100152fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa3aU)))
#undef DAT_1001534c
#define DAT_1001534c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8aU)))
#undef PTR_recovered_10006c80_10015008
#define PTR_recovered_10006c80_10015008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x746U)))
#define local_44 (*(undefined4 *)(pf_stack_frame + 172))
#define local_30 (*(undefined * *)(pf_stack_frame + 192))
#define auStackY_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define local_2c (*(undefined * *)(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 200))
#define local_24 (*(undefined4 *)(pf_stack_frame + 204))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 212))
#define local_54 (*(undefined4 * *)(pf_stack_frame + 156))
#define local_50 (*(undefined4 *)(pf_stack_frame + 160))
#define local_4c (*(undefined4 *)(pf_stack_frame + 164))
#define local_48 (*(undefined4 *)(pf_stack_frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013bf0
 */

void recovered_10013bf0(void)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  undefined4 *pointer;
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;

  bVar3 = 0;
  pointer = recovered_10006cf0(0x80);
  recovered_10006d50((void *)0x0);
  local_20 = auStackY_e0 + 0x80;
  local_4c = 0x20;
  *pointer = 5;
  pointer[1] = 5;
  pointer[2] = 5;
  pointer[3] = 5;
  pointer[4] = 5;
  pointer[5] = 5;
  pointer[6] = 5;
  pointer[7] = 5;
  pointer[8] = 5;
  pointer[9] = 5;
  pointer[10] = 5;
  pointer[0xb] = 5;
  pointer[0xc] = 5;
  pointer[0xd] = 5;
  pointer[0xe] = 5;
  pointer[0xf] = 5;
  pointer[0x10] = 5;
  pointer[0x11] = 5;
  pointer[0x12] = 5;
  pointer[0x13] = 5;
  pointer[0x14] = 5;
  pointer[0x15] = 5;
  pointer[0x16] = 5;
  pointer[0x17] = 5;
  pointer[0x18] = 5;
  pointer[0x19] = 5;
  pointer[0x1a] = 5;
  pointer[0x1b] = 5;
  pointer[0x1c] = 5;
  pointer[0x1d] = 5;
  pointer[0x1e] = 5;
  pointer[0x1f] = 5;
  local_50 = 0x20;
  puVar2 = &DAT_100152fc;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  DAT_1001534c = 0;
  local_30 = PTR_recovered_10006c80_10015008;
  local_2c = &DAT_10014fa4;
  local_24 = 0x21a;
  local_44 = 1;
  local_54 = pointer;
  local_28 = auStack_1c + 0x18;
  recovered_100072f0(&local_48);
  recovered_100137c0((int *)&local_54,&DAT_100152fc,0);
  recovered_10006d50(pointer);
  recovered_10007320(&local_48);
  return;
}

#undef DAT_10014fa4
#undef DAT_100152fc
#undef DAT_1001534c
#undef PTR_recovered_10006c80_10015008
#undef local_44
#undef local_30
#undef auStackY_e0
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_54
#undef local_50
#undef local_4c
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013e70
 */

int recovered_10013e70(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
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
    uVar10 = param_2 - (int)pvVar3 >> 2;
  }
  if (param_3 != param_4) {
    uVar6 = (uint)((int)param_4 + (-4 - (int)param_3)) >> 2;
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
      pvVar3 = recovered_10006cf0(uVar2 * 4);
      pvVar5 = (void *)*param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar8 = 0;
        do {
          *(undefined4 *)((int)pvVar3 + iVar8 * 4) = *(undefined4 *)((int)pvVar5 + iVar8 * 4);
          iVar8 = iVar8 + 1;
        } while (iVar1 != iVar8);
      }
      recovered_10006d50(pvVar5);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar2;
      uVar4 = param_1[1];
    }
    if (uVar10 < uVar4) {
      uVar9 = uVar4;
      do {
        *(undefined4 *)((int)pvVar3 + uVar9 * 4 + uVar6 * 4) =
             *(undefined4 *)((int)pvVar3 + uVar9 * 4 + -4);
        uVar9 = uVar9 - 1;
      } while (uVar10 < uVar9);
    }
    puVar7 = (undefined4 *)((int)pvVar3 + uVar10 * 4);
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
    pvVar5 = (void *)((int)pvVar3 + uVar10 * 4);
  }
  return (int)pvVar5;
}


#undef DAT_10015351
#define DAT_10015351 (*(char *)(((uintptr_t)pf_module_state + 0xa8fU)))
#undef DAT_10015354
#define DAT_10015354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa92U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013fa0
 */

uint recovered_10013fa0(uint crc,uchar *data,uint count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;

  if (DAT_10015351 == '\0') {
    uVar1 = 0;
    puVar4 = &DAT_10015354;
    do {
      uVar2 = uVar1 >> 1 ^ 0xedb88320;
      if ((uVar1 & 1) == 0) {
        uVar2 = uVar1 >> 1;
      }
      uVar3 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2 >> 1;
      }
      uVar2 = uVar3 >> 1 ^ 0xedb88320;
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar3 >> 1;
      }
      uVar3 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2 >> 1;
      }
      uVar2 = uVar3 >> 1 ^ 0xedb88320;
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar3 >> 1;
      }
      uVar3 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2 >> 1;
      }
      uVar2 = uVar3 >> 1 ^ 0xedb88320;
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar3 >> 1;
      }
      uVar3 = uVar2 >> 1 ^ 0xedb88320;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2 >> 1;
      }
      *puVar4 = uVar3;
      uVar1 = uVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar1 != 0x100);
    DAT_10015351 = '\x01';
  }
  if (count != 0) {
    uVar1 = ~crc;
    do {
      uVar1 = uVar1 >> 8 ^ (&DAT_10015354)[(byte)(*data ^ (byte)uVar1)];
      data = data + 1;
      count = count - 1;
    } while (count != 0);
    crc = ~uVar1;
  }
  return crc;
}

#undef DAT_10015351
#undef DAT_10015354

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100140d0
 */

void recovered_100140d0(int *in_ECX,undefined4 *in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  uVar8 = in_ECX[1];
  if (uVar8 == in_ECX[2]) {
    uVar6 = 4;
    if (uVar8 != 0) {
      uVar6 = uVar8 * 2;
    }
    if (uVar8 < uVar6) {
      pvVar4 = recovered_10006cf0(uVar6 * 0x28);
      if (in_ECX[1] != 0) {
        uVar8 = 0;
        iVar9 = 0x24;
        do {
          iVar1 = *in_ECX;
          *(undefined1 *)((int)pvVar4 + iVar9 + -0xc) = *(undefined1 *)(iVar1 + -0xc + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x10) = *(undefined4 *)(iVar1 + -0x10 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x14) = *(undefined4 *)(iVar1 + -0x14 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x18) = *(undefined4 *)(iVar1 + -0x18 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x1c) = *(undefined4 *)(iVar1 + -0x1c + iVar9);
          uVar2 = *(undefined4 *)(iVar1 + -0x24 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x20) = *(undefined4 *)(iVar1 + -0x20 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x24) = uVar2;
          *(undefined4 *)((int)pvVar4 + iVar9 + -8) = *(undefined4 *)(iVar1 + -8 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -4) = *(undefined4 *)(iVar1 + -4 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9) = *(undefined4 *)(iVar1 + iVar9);
          *(undefined4 *)(iVar1 + -8 + iVar9) = 0;
          *(undefined4 *)(iVar1 + iVar9) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar9) = 0;
          recovered_10006d50((void *)0x0);
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 + 0x28;
        } while (uVar8 < (uint)in_ECX[1]);
      }
      recovered_10006d50((void *)*in_ECX);
      *in_ECX = (int)pvVar4;
      in_ECX[2] = uVar6;
      uVar8 = in_ECX[1];
    }
  }
  iVar1 = *in_ECX;
  *(undefined1 *)(iVar1 + 0x18 + uVar8 * 0x28) = *(undefined1 *)(in_EDX + 6);
  *(undefined4 *)(iVar1 + 0x14 + uVar8 * 0x28) = in_EDX[5];
  *(undefined4 *)(iVar1 + 0x10 + uVar8 * 0x28) = in_EDX[4];
  *(undefined4 *)(iVar1 + 0xc + uVar8 * 0x28) = in_EDX[3];
  *(undefined4 *)(iVar1 + 8 + uVar8 * 0x28) = in_EDX[2];
  uVar2 = *in_EDX;
  *(undefined4 *)(iVar1 + 4 + uVar8 * 0x28) = in_EDX[1];
  *(undefined4 *)(iVar1 + uVar8 * 0x28) = uVar2;
  iVar9 = iVar1 + uVar8 * 0x28;
  *(undefined4 *)(iVar1 + 0x1c + uVar8 * 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x20 + uVar8 * 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24 + uVar8 * 0x28) = 0;
  iVar1 = in_EDX[8];
  uVar8 = 0;
  if (iVar1 != 0) {
    pvVar5 = recovered_10006cf0(iVar1 * 8);
    pvVar4 = *(void **)(iVar9 + 0x1c);
    iVar3 = *(int *)(iVar9 + 0x20);
    if (iVar3 != 0) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)((int)pvVar4 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4) = *(undefined4 *)((int)pvVar4 + iVar7 * 8 + 4);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    recovered_10006d50(pvVar4);
    *(void **)(iVar9 + 0x1c) = pvVar5;
    *(int *)(iVar9 + 0x24) = iVar1;
    uVar8 = 0;
    if (in_EDX[8] != 0) {
      uVar6 = 0;
      do {
        iVar1 = *(int *)(iVar9 + 0x1c);
        uVar2 = *(undefined4 *)(in_EDX[7] + uVar6 * 8);
        *(undefined4 *)(iVar1 + 4 + uVar6 * 8) = *(undefined4 *)(in_EDX[7] + 4 + uVar6 * 8);
        *(undefined4 *)(iVar1 + uVar6 * 8) = uVar2;
        uVar6 = uVar6 + 1;
        uVar8 = in_EDX[8];
      } while (uVar6 < uVar8);
    }
  }
  *(uint *)(iVar9 + 0x20) = uVar8;
  in_ECX[1] = in_ECX[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100142f0
 */

void recovered_100142f0(int *in_ECX,undefined4 *in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  uVar4 = in_ECX[1];
  if (uVar4 == in_ECX[2]) {
    uVar6 = 4;
    if (uVar4 != 0) {
      uVar6 = uVar4 * 2;
    }
    if (uVar4 < uVar6) {
      pvVar3 = recovered_10006cf0(uVar6 * 8);
      pointer = (void *)*in_ECX;
      iVar1 = in_ECX[1];
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          uVar2 = *(undefined4 *)((int)pointer + iVar5 * 8);
          *(undefined4 *)((int)pvVar3 + iVar5 * 8 + 4) =
               *(undefined4 *)((int)pointer + iVar5 * 8 + 4);
          *(undefined4 *)((int)pvVar3 + iVar5 * 8) = uVar2;
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      recovered_10006d50(pointer);
      *in_ECX = (int)pvVar3;
      in_ECX[2] = uVar6;
      uVar4 = in_ECX[1];
    }
  }
  iVar1 = *in_ECX;
  uVar2 = *in_EDX;
  *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = in_EDX[1];
  *(undefined4 *)(iVar1 + uVar4 * 8) = uVar2;
  in_ECX[1] = in_ECX[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014390
 */

void recovered_10014390(int *in_ECX,undefined4 *in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  uVar4 = in_ECX[1];
  if (uVar4 == in_ECX[2]) {
    uVar6 = 4;
    if (uVar4 != 0) {
      uVar6 = uVar4 * 2;
    }
    if (uVar4 < uVar6) {
      pvVar3 = recovered_10006cf0(uVar6 * 8);
      pointer = (void *)*in_ECX;
      iVar1 = in_ECX[1];
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          uVar2 = *(undefined4 *)((int)pointer + iVar5 * 8);
          *(undefined4 *)((int)pvVar3 + iVar5 * 8 + 4) =
               *(undefined4 *)((int)pointer + iVar5 * 8 + 4);
          *(undefined4 *)((int)pvVar3 + iVar5 * 8) = uVar2;
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      recovered_10006d50(pointer);
      *in_ECX = (int)pvVar3;
      in_ECX[2] = uVar6;
      uVar4 = in_ECX[1];
    }
  }
  iVar1 = *in_ECX;
  uVar2 = *in_EDX;
  *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = in_EDX[1];
  *(undefined4 *)(iVar1 + uVar4 * 8) = uVar2;
  in_ECX[1] = in_ECX[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014430
 */

undefined4 recovered_10014430(int *in_ECX,int *in_EDX,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint *puVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  uint size;
  undefined4 *puVar8;
  bool bVar9;

  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  iVar7 = in_EDX[1];
  if (iVar7 != 0) {
    puVar8 = (undefined4 *)*in_EDX;
    iVar4 = 0;
    size = 0;
    do {
      puVar2 = (uint *)((int)puVar8 + iVar4 + 4);
      bVar9 = CARRY4(size,*puVar2);
      size = size + *puVar2;
      if (bVar9) {
        return 0;
      }
      iVar4 = iVar4 + 8;
    } while (iVar7 * 8 != iVar4);
    if ((uint)in_ECX[2] < size) {
      pvVar5 = recovered_10006cf0(size);
      pvVar3 = (void *)*in_ECX;
      iVar7 = in_ECX[1];
      if (iVar7 != 0) {
        iVar4 = 0;
        do {
          *(undefined1 *)((int)pvVar5 + iVar4) = *(undefined1 *)((int)pvVar3 + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar7 != iVar4);
      }
      recovered_10006d50(pvVar3);
      *in_ECX = (int)pvVar5;
      in_ECX[2] = size;
      puVar8 = (undefined4 *)*in_EDX;
      iVar7 = in_EDX[1];
    }
    if (iVar7 != 0) {
      puVar1 = puVar8 + iVar7 * 2;
      do {
        recovered_100114c0(in_ECX,*in_ECX + in_ECX[1],(undefined1 *)*puVar8,
                           (undefined1 *)*puVar8 + puVar8[1]);
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar1);
    }
  }
  if ((uint *)in_ECX[5] < param_3) {
    pvVar5 = recovered_10006cf0((uint)param_3);
    pvVar3 = (void *)in_ECX[3];
    iVar7 = in_ECX[4];
    if (iVar7 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar5 + iVar4) = *(undefined1 *)((int)pvVar3 + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar7 != iVar4);
    }
    recovered_10006d50(pvVar3);
    in_ECX[3] = (int)pvVar5;
    in_ECX[5] = (int)param_3;
  }
  uVar6 = recovered_100115e0(in_ECX,(uint *)(in_ECX + 3),param_3);
  return uVar6;
}


#undef switchdataD_10014814
#define switchdataD_10014814 (*(uint *)(0x10014814U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014590
 */

undefined4
recovered_10014590(uint in_ECX,void *in_EDX,void *param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined3 uVar3;
  undefined4 uVar2;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  char *pcVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;

  if (4 < in_ECX) {
    return 0;
  }
  pvVar1 = (void *)0;
  uVar3 = (undefined3)(param_6 >> 8);
  switch((uintptr_t)(in_ECX)) {
  case 1:
    uVar11 = param_5;
    if (param_6 < param_5) {
      uVar11 = param_6;
    }
    if (uVar11 != 0) {
      uVar12 = 0;
      do {
        *(undefined1 *)((int)in_EDX + uVar12) = *(undefined1 *)((int)param_3 + uVar12);
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
    }
    uVar2 = CONCAT31(uVar3,1);
    if (param_5 <= param_6) {
      return uVar2;
    }
    iVar6 = param_5 - uVar11;
    pcVar9 = (char *)((int)in_EDX + uVar11);
    pcVar14 = (char *)((int)param_3 + uVar11);
    do {
      *pcVar9 = pcVar9[-param_6] + *pcVar14;
      pcVar9 = pcVar9 + 1;
      pcVar14 = pcVar14 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return uVar2;
  case 2:
    if (param_4 != 0) {
      if (param_5 != 0) {
        pvVar1 = (void *)0x0;
        do {
          *(char *)((int)in_EDX + (int)pvVar1) =
               *(char *)(param_4 + (int)pvVar1) + *(char *)((int)param_3 + (int)pvVar1);
          pvVar1 = (void *)((int)pvVar1 + 1);
        } while ((void *)param_5 != pvVar1);
      }
      break;
    }
  case 0:
    pvVar1 = recovered_10002410(in_EDX,param_3,param_5);
    break;
  case 3:
    if (param_4 == 0) {
      if (param_5 != 0) {
        pvVar1 = (void *)param_5;
        if (param_6 < param_5) {
          pvVar1 = (void *)param_6;
        }
        pvVar7 = (void *)0x0;
        if (param_6 != 0) {
          do {
            *(undefined1 *)((int)in_EDX + (int)pvVar7) = *(undefined1 *)((int)param_3 + (int)pvVar7)
            ;
            pvVar7 = (void *)((int)pvVar7 + 1);
          } while (pvVar1 != pvVar7);
          pvVar7 = pvVar1;
        }
        if (pvVar7 < param_5) {
          iVar6 = param_5 - (int)pvVar1;
          pcVar9 = (char *)((int)in_EDX + (int)pvVar1);
          pcVar14 = (char *)((int)param_3 + (int)pvVar1);
          do {
            pvVar1 = (void *)0x0;
            *pcVar9 = ((byte)pcVar9[-param_6] >> 1) + *pcVar14;
            pcVar9 = pcVar9 + 1;
            pcVar14 = pcVar14 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
    }
    else if (param_5 != 0) {
      pvVar1 = (void *)((int)in_EDX - param_6);
      uVar11 = 0;
      do {
        if (uVar11 < param_6) {
          uVar12 = 0;
        }
        else {
          uVar12 = (uint)*(byte *)((int)pvVar1 + uVar11);
        }
        *(char *)((int)in_EDX + uVar11) =
             (char)(uVar12 + *(byte *)(param_4 + uVar11) >> 1) + *(char *)((int)param_3 + uVar11);
        uVar11 = uVar11 + 1;
      } while (param_5 != uVar11);
    }
    break;
  case 4:
    if (param_4 == 0) {
      uVar11 = param_5;
      if (param_6 < param_5) {
        uVar11 = param_6;
      }
      if (uVar11 != 0) {
        uVar12 = 0;
        do {
          *(undefined1 *)((int)in_EDX + uVar12) = *(undefined1 *)((int)param_3 + uVar12);
          uVar12 = uVar12 + 1;
        } while (uVar11 != uVar12);
      }
      uVar2 = CONCAT31(uVar3,1);
      if (param_5 <= param_6) {
        return uVar2;
      }
      iVar6 = param_5 - uVar11;
      pcVar9 = (char *)((int)in_EDX + uVar11);
      pcVar14 = (char *)((int)param_3 + uVar11);
      do {
        *pcVar9 = pcVar9[-param_6] + *pcVar14;
        pcVar9 = pcVar9 + 1;
        pcVar14 = pcVar14 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return uVar2;
    }
    if (param_5 != 0) {
      pvVar1 = (void *)0x0;
      do {
        uVar11 = 0;
        uVar12 = 0;
        if (param_6 <= pvVar1) {
          uVar11 = (uint)*(byte *)(((int)in_EDX - param_6) + (int)pvVar1);
          uVar12 = (uint)*(byte *)((param_4 - param_6) + (int)pvVar1);
        }
        uVar4 = (uint)*(byte *)(param_4 + (int)pvVar1);
        uVar8 = uVar11 - uVar12;
        uVar5 = -(uVar4 - uVar12);
        if ((int)uVar5 < 0) {
          uVar5 = uVar4 - uVar12;
        }
        uVar13 = -uVar8;
        if ((int)-uVar8 < 0) {
          uVar13 = uVar8;
        }
        uVar15 = (uVar8 + uVar4) - uVar12;
        uVar8 = -uVar15;
        if ((int)uVar8 < 0) {
          uVar8 = uVar15;
        }
        if (uVar13 <= uVar8) {
          uVar12 = uVar4;
        }
        if (uVar8 < uVar5) {
          uVar11 = uVar12;
        }
        cVar10 = (char)uVar11;
        if (uVar13 < uVar5) {
          cVar10 = (char)uVar12;
        }
        *(char *)((int)in_EDX + (int)pvVar1) = cVar10 + *(char *)((int)param_3 + (int)pvVar1);
        pvVar1 = (void *)((int)pvVar1 + 1);
      } while ((void *)param_5 != pvVar1);
    }
  }
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}

#undef switchdataD_10014814

#undef DAT_100152f8
#define DAT_100152f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa36U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014830
 */

void recovered_10014830(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10013490();
  recovered_10006f90();
  DAT_100152f8 = 1;
  return;
}

#undef DAT_100152f8

#undef DAT_10015350
#define DAT_10015350 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014880
 */

void recovered_10014880(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10013bf0();
  recovered_10006f90();
  DAT_10015350 = 1;
  return;
}

#undef DAT_10015350
