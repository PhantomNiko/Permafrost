/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10009074
#define DAT_10009074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fcU)))
#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001170
 */

/* WARNING: Removing unreachable block (ram,0x100011ac) */

void recovered_10001170(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_10009074 = 0;
    recovered_100011d0();
    DAT_1000907c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10009074
#undef DAT_1000907c

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_10009074
#define DAT_10009074 (*(char *)(((uintptr_t)pf_module_state + 0x2fcU)))
#undef DAT_10009078
#define DAT_10009078 (*(int *)(((uintptr_t)pf_module_state + 0x300U)))
#undef DAT_10009080
#define DAT_10009080 (*(int *)(((uintptr_t)pf_module_state + 0x308U)))
#undef _DAT_00280088
#define _DAT_00280088 (*(uint *)(0x280088U))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100011d0(void)

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
  if (DAT_10009074 != '\0') {
    return;
  }
  DAT_10009078 = 0;
  DAT_10009080 = 0;
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
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_1000123b;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_1000123b:
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
        if (iVar9 == 0) goto LAB_10001390;
      }
      puVar3 = local_9c + 3;
      do {
        recovered_10005530((undefined *)puVar3[-1],*puVar3,(int *)local_9c);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_10009078 != 0) goto LAB_100013cb;
    }
  }
LAB_10001390:
  uVar4 = 0x4000000;
  if (0x300000 < _DAT_00280088) {
    uVar4 = _DAT_00280088 & 0xfffffff0;
  }
  uVar7 = 0x3d00000;
  if (0x300020 < uVar4) {
    uVar7 = uVar4 - 0x300000;
  }
  recovered_10005530((undefined *)0x300000,uVar7,(int *)local_9c);
LAB_100013cb:
  if (DAT_10009080 == 0) {
    DAT_10009080 = DAT_10009078;
  }
  DAT_10009074 = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_10009074
#undef DAT_10009078
#undef DAT_10009080
#undef _DAT_00280088
#undef _DAT_0028008c
#undef local_9c

#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013f0
 */

/* WARNING: Removing unreachable block (ram,0x1000143c) */

void recovered_100013f0(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001460(param_1,param_2,param_3);
    DAT_1000907c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000907c

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_10009078
#define DAT_10009078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x300U)))
#undef DAT_10009080
#define DAT_10009080 (*(int * *)(((uintptr_t)pf_module_state + 0x308U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001460
 */

bool recovered_10001460(int in_ECX,int in_EDX,int param_3)

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
    recovered_100011d0();
    local_18 = DAT_10009078;
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
          if (uVar2 < uVar7 || uVar3 == 0) goto LAB_10001560;
          bVar11 = 0x20 < (uVar3 & 0xfffffff0);
        }
        else {
LAB_10001560:
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
      piVar1 = DAT_10009078;
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
    piVar5 = (int *)&DAT_10009078;
    iVar10 = 0;
    do {
      iVar4 = iVar10;
      iVar10 = *piVar5;
      piVar5 = (int *)(iVar10 + 4);
    } while (iVar10 != 0);
    iVar10 = 0;
    local_1c = iVar4;
    do {
      recovered_10005530(*(undefined **)(in_ECX + iVar10 * 4),*(uint *)(in_EDX + iVar10 * 4),
                         &local_1c);
      iVar10 = iVar10 + 1;
    } while (param_3 != iVar10);
    if (DAT_10009080 == (int *)0x0) {
      DAT_10009080 = DAT_10009078;
    }
    bVar11 = local_1c != iVar4;
  }
  return bVar11;
}

#undef DAT_10000001
#undef DAT_10009078
#undef DAT_10009080
#undef local_1c
#undef local_18

#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
#define local_24 (*(undefined1 (*)[36])(pf_stack_frame + 28))
#define local_20 (*(undefined1 (*)[32])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016a0
 */

/* WARNING: Removing unreachable block (ram,0x100016ec) */

void recovered_100016a0(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001460((int)local_20,(int)local_24,1);
    DAT_1000907c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000907c
#undef local_24
#undef local_20

#undef DAT_10009078
#define DAT_10009078 (*(int * *)(((uintptr_t)pf_module_state + 0x300U)))
#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001720
 */

/* WARNING: Removing unreachable block (ram,0x1000175c) */

int recovered_10001720(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100011d0();
  iVar1 = 0;
  for (piVar2 = DAT_10009078; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  DAT_1000907c = 0;
  return iVar1;
}

#undef DAT_10009078
#undef DAT_1000907c

#undef DAT_10009078
#define DAT_10009078 (*(int *)(((uintptr_t)pf_module_state + 0x300U)))
#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017a0
 */

/* WARNING: Removing unreachable block (ram,0x100017dc) */

void recovered_100017a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100011d0();
  for (iVar1 = DAT_10009078; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1000907c = 0;
  return;
}

#undef DAT_10009078
#undef DAT_1000907c

#undef DAT_10009078
#define DAT_10009078 (*(int * *)(((uintptr_t)pf_module_state + 0x300U)))
#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001820
 */

/* WARNING: Removing unreachable block (ram,0x1000185c) */

int recovered_10001820(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  iVar2 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100011d0();
  iVar2 = 0;
  for (piVar1 = DAT_10009078; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  DAT_1000907c = 0;
  return iVar2;
}

#undef DAT_10009078
#undef DAT_1000907c

#undef DAT_10009078
#define DAT_10009078 (*(int *)(((uintptr_t)pf_module_state + 0x300U)))
#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001890
 */

/* WARNING: Removing unreachable block (ram,0x100018cc) */

void recovered_10001890(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100011d0();
  for (iVar1 = DAT_10009078; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1000907c = 0;
  return;
}

#undef DAT_10009078
#undef DAT_1000907c

#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001910
 */

/* WARNING: Removing unreachable block (ram,0x1000195c) */

void recovered_10001910(int in_stack_00000004)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001980(in_stack_00000004,(uint *)0x0,(uint *)0xffffffff);
    DAT_1000907c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000907c

#undef DAT_10009078
#define DAT_10009078 (*(uint * *)(((uintptr_t)pf_module_state + 0x300U)))
#undef DAT_10009080
#define DAT_10009080 (*(uint * *)(((uintptr_t)pf_module_state + 0x308U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001980
 */

uint * recovered_10001980(int in_ECX,uint *in_EDX,uint *param_3)

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
    recovered_100011d0();
    puVar3 = DAT_10009078;
    puVar4 = DAT_10009080;
    if (DAT_10009080 == (uint *)0x0) {
      puVar4 = DAT_10009078;
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
              if (uVar6 < uVar8) goto LAB_10001a62;
            }
          }
          else {
LAB_10001a62:
            if ((uVar7 - 1 <= (uint)((int)param_3 - (int)in_EDX_00) && in_EDX_00 <= param_3) &&
               (uVar7 <= uVar8 - uVar6 && uVar6 <= uVar8)) {
              if (uVar7 - 1 < uVar8) {
                bVar2 = 0xffffffef < uVar8;
                if ((uint)(uVar8 - uVar7 < 0x20) <= -(uint)(uVar8 < uVar7)) {
                  bVar2 = 0xffffffdf < uVar7;
                }
                if (!bVar2) {
                  if (uVar6 == 0) {
LAB_10001b44:
                    if ((bool)(~(uVar8 < uVar7) & 0x1f < uVar8 - uVar7)) {
                      DAT_10009080 = (uint *)((int)in_ECX_00 + uVar7 + 0x10);
                      *(uint *)((int)in_ECX_00 + uVar7 + 0x10) = (uVar8 - uVar7) - 0x10;
                      uVar8 = in_ECX_00[1];
                      *(uint *)((int)in_ECX_00 + uVar7 + 0x14) = uVar8;
                      *(uint **)((int)in_ECX_00 + uVar7 + 0x18) = in_ECX_00;
                      *(undefined1 *)((int)in_ECX_00 + uVar7 + 0x1c) = 1;
                      if (uVar8 != 0) {
                        *(uint **)(uVar8 + 8) = DAT_10009080;
                      }
                      *in_ECX_00 = uVar7;
                      in_ECX_00[1] = (uint)DAT_10009080;
                    }
                    else {
                      DAT_10009080 = (uint *)in_ECX_00[1];
                    }
                    *(undefined1 *)(in_ECX_00 + 3) = 0;
                    if (DAT_10009080 == (uint *)0x0) {
                      DAT_10009080 = DAT_10009078;
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
                      in_ECX_00 = recovered_100056d0(in_ECX_00,in_EDX_00);
                      if (in_ECX_00 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *in_ECX_00;
                      goto LAB_10001b44;
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

#undef DAT_10009078
#undef DAT_10009080

#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bb0
 */

/* WARNING: Removing unreachable block (ram,0x10001bfc) */

void recovered_10001bb0(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001980(param_1,(uint *)0x0,param_2);
    DAT_1000907c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000907c

#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c20
 */

/* WARNING: Removing unreachable block (ram,0x10001c6c) */

uint * recovered_10001c20(int param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001980(param_1,param_2,param_3);
  }
  DAT_1000907c = 0;
  return puVar2;
}

#undef DAT_1000907c

#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c90
 */

/* WARNING: Removing unreachable block (ram,0x10001cdc) */

void recovered_10001c90(int in_stack_00000004)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001d00(in_stack_00000004);
    DAT_1000907c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000907c

#undef DAT_10009080
#define DAT_10009080 (*(uint * *)(((uintptr_t)pf_module_state + 0x308U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d00
 */

void recovered_10001d00(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;

  if (in_ECX == 0) {
    return;
  }
  recovered_100011d0();
  puVar2 = (uint *)(in_ECX + -0x10);
  *(undefined1 *)(in_ECX + -4) = 1;
  puVar3 = *(uint **)(in_ECX + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)(in_ECX + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_10009080 == puVar3) {
        DAT_10009080 = puVar2;
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
      DAT_10009080 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_10009080 = puVar2;
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
        if (DAT_10009080 == puVar2) {
          DAT_10009080 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_10009080 = puVar2;
  return;
}

#undef DAT_10009080

#undef DAT_1000907c
#define DAT_1000907c (*(int *)(((uintptr_t)pf_module_state + 0x304U)))
#undef DAT_10009080
#define DAT_10009080 (*(uint * *)(((uintptr_t)pf_module_state + 0x308U)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e20
 */

/* WARNING: Removing unreachable block (ram,0x10001e6c) */

uint * recovered_10001e20(uint *param_1,uint param_2)

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

  iVar1 = DAT_1000907c;
  { __typeof__(DAT_1000907c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000907c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (uint *)0x0) {
    puVar5 = recovered_10001980(param_2,(uint *)0x0,(uint *)0xffffffff);
    DAT_1000907c = 0;
    return puVar5;
  }
  if (param_2 == 0) {
    recovered_10001d00((int)param_1);
    DAT_1000907c = 0;
    return (uint *)0x0;
  }
  if (0xfffffff0 < param_2) {
    DAT_1000907c = 0;
    return (uint *)0x0;
  }
  recovered_100011d0();
  in_ECX = param_2 + 0xf & 0xfffffff0;
  puVar5 = param_1 + -4;
  uVar7 = param_1[-4];
  if (in_ECX <= uVar7) {
    if (uVar7 <= in_ECX - 1) {
      DAT_1000907c = 0;
      return (uint *)0x0;
    }
    uVar2 = uVar7 - in_ECX;
    bVar10 = 0xffffffdf < in_ECX;
    if (-(uint)(uVar7 < in_ECX) < (uint)(uVar2 < 0x20)) {
      bVar10 = 0xffffffef < uVar7;
    }
    if (!bVar10) {
      if (uVar2 < 0x20) {
        DAT_1000907c = 0;
        return param_1;
      }
      DAT_10009080 = (uint *)((int)param_1 + in_ECX);
      *(uint *)((int)param_1 + in_ECX) = uVar2 - 0x10;
      uVar7 = param_1[-3];
      *(uint *)((int)param_1 + in_ECX + 4) = uVar7;
      *(uint **)((int)param_1 + in_ECX + 8) = puVar5;
      *(undefined1 *)((int)param_1 + in_ECX + 0xc) = 1;
      if (uVar7 != 0) {
        *(uint **)(uVar7 + 8) = DAT_10009080;
      }
      param_1[-4] = in_ECX;
      param_1[-3] = (uint)DAT_10009080;
      DAT_1000907c = 0;
      return param_1;
    }
    DAT_1000907c = 0;
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
      local_20 = DAT_10009080;
      puVar3 = (uint *)param_1[-3];
      do {
        if (((puVar3 == (uint *)0x0) || ((char)puVar3[3] != '\x01')) ||
           ((0xffffffef < uVar7 ||
            (((uint *)(uVar7 + (int)param_1) != puVar3 || (-uVar7 - 0x11 < *puVar3)))))) break;
        if (local_20 == puVar3) {
          local_20 = puVar5;
          DAT_10009080 = puVar5;
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
        DAT_1000907c = 0;
        return (uint *)0x0;
      }
      uVar4 = recovered_10005730(puVar5,in_ECX);
      if ((char)uVar4 != '\0') {
        DAT_10009080 = (uint *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1000907c = 0;
      return param_1;
    }
  }
  puVar3 = recovered_10001980(in_ECX,(uint *)0x0,(uint *)0xffffffff);
  if (puVar3 == (uint *)0x0) {
    DAT_1000907c = 0;
    return (uint *)0x0;
  }
  if (*puVar5 < in_ECX) {
    in_ECX = *puVar5;
  }
  puVar5 = param_1;
  puVar9 = puVar3;
  if (in_ECX < 8) {
LAB_10002095:
    if (in_ECX == 0) goto LAB_100020ac;
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
    goto LAB_10002095;
  }
  uVar7 = 0;
  do {
    *(undefined1 *)((int)puVar9 + uVar7) = *(undefined1 *)((int)puVar5 + uVar7);
    uVar7 = uVar7 + 1;
  } while (in_ECX != uVar7);
LAB_100020ac:
  recovered_10001d00((int)param_1);
  DAT_1000907c = 0;
  return puVar3;
}

#undef DAT_1000907c
#undef DAT_10009080
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021c0
 */

undefined8 recovered_100021c0(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_100021fb;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_100021fb;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_100021fb:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002210
 */

undefined8 recovered_10002210(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002260
 */

undefined8 recovered_10002260(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x100022a0
 */

undefined8 recovered_100022a0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002390
 */

undefined8 recovered_10002390(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002400
 */

undefined8 recovered_10002400(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002550
 */

undefined8 recovered_10002550(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002620
 */

void recovered_10002620(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002640
 */

int recovered_10002640(int param_1)

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
 * Address: 0x10002660
 */

void * recovered_10002660(ulong param_1)

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
    pvVar4 = (*pcVar3)(param_1);
    return pvVar4;
  }
  return (void *)0;
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
 * Address: 0x100026b0
 */

void recovered_100026b0(void *param_1)

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
    (*pcVar3)(param_1);
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
 * Address: 0x10002700
 */

void * recovered_10002700(void *param_1,ulong param_2)

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
    pvVar4 = (*pcVar3)(param_1,param_2);
    return pvVar4;
  }
  return (void *)0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002750
 */

void recovered_10002750(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_1000277a;
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
LAB_1000277a:
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + uVar3) = *(undefined1 *)((int)param_2 + uVar3);
    uVar3 = uVar3 + 1;
  } while (param_3 != uVar3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002810
 */

undefined4 * recovered_10002810(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x100029e0
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

byte * recovered_100029e0(byte *param_1,byte param_2,uint param_3)

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
 * Address: 0x10002a90
 */

void recovered_10002a90(undefined4 *param_1,uint param_2)

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
 * Address: 0x10002b30
 */

void recovered_10002b30(undefined4 *param_1,uint param_2)

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
 * Address: 0x10002bd0
 */

char * recovered_10002bd0(char *param_1,char param_2,int param_3)

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
 * Address: 0x10002c10
 */

int recovered_10002c10(uint *param_1,uint *param_2,uint param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10002cae;
    if (((uint)param_1 & 3) != 0) {
      uVar7 = param_3;
      puVar6 = param_1;
      do {
        puVar6 = (uint *)((int)puVar6 + 1);
        bVar1 = (byte)*param_1;
        bVar2 = (byte)*param_2;
        if (bVar1 != bVar2) goto LAB_10002cc5;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        param_3 = uVar7 - 1;
      } while ((uVar7 != 1) && (uVar7 = param_3, ((uint)puVar6 & 3) != 0));
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      uVar7 = *param_1;
      uVar8 = *param_2;
      if (uVar7 != uVar8) {
LAB_10002cf6:
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
      if (uVar7 != uVar8) goto LAB_10002cf6;
      uVar7 = param_1[2];
      uVar8 = param_2[2];
      if (uVar7 != uVar8) goto LAB_10002cf6;
      uVar7 = param_1[3];
      uVar8 = param_2[3];
      if (uVar7 != uVar8) goto LAB_10002cf6;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10002d40((char *)param_1,(char *)param_2);
        return iVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10002cae:
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
LAB_10002cc5:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d40
 */

int recovered_10002d40(char *in_ECX,char *in_EDX)

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
 * Address: 0x10002d90
 */

bool recovered_10002d90(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002db0
 */

bool recovered_10002db0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dd0
 */

bool recovered_10002dd0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002df0
 */

bool recovered_10002df0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e20
 */

bool recovered_10002e20(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e40
 */

bool recovered_10002e40(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e60
 */

int recovered_10002e60(int param_1)

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
 * Address: 0x10002e80
 */

int recovered_10002e80(int param_1)

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
 * Address: 0x10002ea0
 */

int recovered_10002ea0(int param_1)

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
 * Address: 0x10002ee0
 */

int recovered_10002ee0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002f16;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002f16:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f20
 */

int recovered_10002f20(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002f56;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002f56:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f60
 */

void recovered_10002f60(int param_1,int param_2)

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
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f90
 */

undefined4 * recovered_10002f90(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint size;
  uint uVar8;

  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  size = 0;
  do {
    uVar6 = size;
    size = uVar6 + 1;
  } while (*(char *)((int)param_1 + uVar6) != '\0');
  iVar3 = Ram00280800;
  if (iVar3 != 0x50414d57) {
    return (undefined4 *)0x0;
  }
  iVar3 = Ram00280804;
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  uVar8 = Ram00280808;
  if (uVar8 < 0xc) {
    return (undefined4 *)0x0;
  }
  uVar8 = Ram00280808;
  if (uVar8 < 0x50) {
    return (undefined4 *)0x0;
  }
  pcVar4 = (code *)UINT_0028084c;
  if (pcVar4 == (code *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (*pcVar4)(size);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar7 = puVar5;
  if (7 < size) {
    if ((((uint)puVar5 ^ (uint)param_1) & 3) != 0) goto LAB_100030a8;
    if (((uint)puVar5 & 3) != 0) {
      uVar8 = 0;
      do {
        *(undefined1 *)((int)puVar5 + uVar8) = *(undefined1 *)((int)param_1 + uVar8);
        uVar1 = uVar8 + 1;
        if (uVar6 == uVar8) break;
        iVar3 = uVar8 + 1;
        uVar8 = uVar1;
      } while (((int)puVar5 + iVar3 & 3U) != 0);
      size = size - uVar1;
      param_1 = (undefined4 *)((int)param_1 + uVar1);
      puVar7 = (undefined4 *)((int)puVar5 + uVar1);
    }
    for (; 0xf < size; size = size - 0x10) {
      *puVar7 = *param_1;
      puVar7[1] = param_1[1];
      puVar7[2] = param_1[2];
      puVar7[3] = param_1[3];
      param_1 = param_1 + 4;
      puVar7 = puVar7 + 4;
    }
    for (; 3 < size; size = size - 4) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      *puVar7 = uVar2;
      puVar7 = puVar7 + 1;
    }
  }
  if (size == 0) {
    return puVar5;
  }
LAB_100030a8:
  uVar6 = 0;
  do {
    *(undefined1 *)((int)puVar7 + uVar6) = *(undefined1 *)((int)param_1 + uVar6);
    uVar6 = uVar6 + 1;
  } while (size != uVar6);
  return puVar5;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028084c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d0
 */

char * recovered_100030d0(char *param_1,char param_2)

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
 * Address: 0x10003110
 */

int recovered_10003110(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_1000315b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_1000315b;
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
 * Address: 0x10003170
 */

int recovered_10003170(char *param_1,char *param_2)

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
 * Address: 0x100031d0
 */

char * recovered_100031d0(char *param_1,char *param_2)

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
 * Address: 0x10003220
 */

char * recovered_10003220(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10003263;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10003263:
  return pcVar3;
}


#undef DAT_10008e60
#define DAT_10008e60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003270
 */

undefined * recovered_10003270(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10008e60;
}

#undef DAT_10008e60

#undef PTR_DAT_10009004
#define PTR_DAT_10009004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x28cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003290
 */

undefined ** recovered_10003290(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10009004;
}

#undef PTR_DAT_10009004

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
#undef UINT_00280968
#define UINT_00280968 (*(uint *)(0x280968U))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 *)(pf_stack_frame + 48))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032b0
 */

void recovered_100032b0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar1 = Ram00280800;
  if ((((iVar1 != 0x50414d57) || (iVar1 = Ram00280804, iVar1 == 0)) ||
      (uVar3 = Ram00280808, uVar3 < 0xc)) ||
     (((uVar3 = Ram00280808, uVar3 < 0x16c ||
       (pcVar2 = (code *)UINT_00280968, pcVar2 == (code *)0x0)) ||
      (uVar3 = (*pcVar2)(&local_34), uVar3 == 0)))) {
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
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280968
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_34

#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003350
 */

longdouble recovered_10003350(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_10008d80;
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

#undef DAT_10008d80

#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033a0
 */

void recovered_100033a0(double param_1,int *param_2)

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
        param_1 = param_1 * (double)DAT_10008d80;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_10008d80 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_10008d80);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_10008d80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003460
 */

longdouble recovered_10003460(double param_1,double param_2)

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
 * Address: 0x100034c0
 */

longdouble recovered_100034c0(double param_1,double param_2)

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
 * Address: 0x10003550
 */

longdouble recovered_10003550(double param_1)

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
 * Address: 0x100035a0
 */

longdouble recovered_100035a0(double param_1)

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
 * Address: 0x10003600
 */

void recovered_10003600(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008d84
#define DAT_10008d84 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10008d88
#define DAT_10008d88 (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10008d8c
#define DAT_10008d8c (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10008d90
#define DAT_10008d90 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10008d94
#define DAT_10008d94 (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10008d98
#define DAT_10008d98 (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10008d9c
#define DAT_10008d9c (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10008da0
#define DAT_10008da0 (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10008da4
#define DAT_10008da4 (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10008da8
#define DAT_10008da8 (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10008dac
#define DAT_10008dac (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10008db0
#define DAT_10008db0 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_10008dd8
#define DAT_10008dd8 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003700
 */

longdouble recovered_10003700(double param_1)

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
    lVar2 = (longdouble)DAT_10008d84;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_10008d88 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_10008d80;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_10008d88 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_10008d8c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_10008d8c);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_10008db0 +
            lVar9 / (longdouble)DAT_10008dac +
            lVar8 / (longdouble)DAT_10008da8 +
            lVar7 / (longdouble)DAT_10008da4 +
            lVar6 / (longdouble)DAT_10008da0 +
            lVar5 / (longdouble)DAT_10008d9c +
            lVar4 / (longdouble)DAT_10008d98 +
            lVar3 / (longdouble)DAT_10008d94 +
            (lVar10 * lVar2) / (longdouble)DAT_10008d90 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_10008dd8;
  }
  return lVar2;
}

#undef DAT_10008d80
#undef DAT_10008d84
#undef DAT_10008d88
#undef DAT_10008d8c
#undef DAT_10008d90
#undef DAT_10008d94
#undef DAT_10008d98
#undef DAT_10008d9c
#undef DAT_10008da0
#undef DAT_10008da4
#undef DAT_10008da8
#undef DAT_10008dac
#undef DAT_10008db0
#undef DAT_10008dd8

#undef DAT_10008e00
#define DAT_10008e00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003810
 */

longlong recovered_10003810(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10008e00 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10008e00

#undef DAT_10008db4
#define DAT_10008db4 (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_10008db8
#define DAT_10008db8 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10008dbc
#define DAT_10008dbc (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10008de0
#define DAT_10008de0 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10008de8
#define DAT_10008de8 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10008df0
#define DAT_10008df0 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_10008df8
#define DAT_10008df8 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003870
 */

longdouble recovered_10003870(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_10008de0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_10008de8;
    } while ((longdouble)DAT_10008de0 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_10008df0) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_10008df8;
    } while (lVar1 < (longdouble)DAT_10008df0);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_10008dbc +
         (lVar2 * lVar2) / (longdouble)DAT_10008db8 +
         (longdouble)1 + lVar2 / (longdouble)DAT_10008db4) * lVar1;
}

#undef DAT_10008db4
#undef DAT_10008db8
#undef DAT_10008dbc
#undef DAT_10008de0
#undef DAT_10008de8
#undef DAT_10008df0
#undef DAT_10008df8

#undef DAT_10008dc0
#define DAT_10008dc0 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10008dc4
#define DAT_10008dc4 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10008dc8
#define DAT_10008dc8 (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10008de0
#define DAT_10008de0 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10008de8
#define DAT_10008de8 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10008df0
#define DAT_10008df0 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_10008df8
#define DAT_10008df8 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003900
 */

longdouble recovered_10003900(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_10008de0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_10008de8;
    } while ((longdouble)DAT_10008de0 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_10008df0) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_10008df8;
    } while (lVar1 < (longdouble)DAT_10008df0);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_10008dc8 +
         (lVar1 * lVar1) / (longdouble)DAT_10008dc4 +
         (longdouble)1 + lVar1 * (longdouble)DAT_10008dc0;
}

#undef DAT_10008dc0
#undef DAT_10008dc4
#undef DAT_10008dc8
#undef DAT_10008de0
#undef DAT_10008de8
#undef DAT_10008df0
#undef DAT_10008df8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003990
 */

longdouble recovered_10003990(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008dcc
#define DAT_10008dcc (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b0
 */

undefined8 recovered_100039b0(double param_1)

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
    dVar3 = (double)DAT_10008dcc;
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
      dVar3 = dVar3 * (double)DAT_10008d80;
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

#undef DAT_10008d80
#undef DAT_10008dcc

#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008dcc
#define DAT_10008dcc (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a70
 */

undefined8 recovered_10003a70(double param_1)

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
    dVar2 = (double)DAT_10008dcc;
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
      dVar2 = dVar2 * (double)DAT_10008d80;
      bVar10 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar6,uVar4);
}

#undef DAT_10008d80
#undef DAT_10008dcc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b00
 */

void recovered_10003b00(uint param_1,uint param_2)

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
 * Address: 0x10003b70
 */

void recovered_10003b70(uint param_1,uint param_2)

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
 * Address: 0x10003c30
 */

void recovered_10003c30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ca0
 */

void recovered_10003ca0(float param_1,int *param_2)

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
        param_1 = param_1 * DAT_10008d80;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_10008d80 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_10008d80);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_10008d80

#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

longdouble recovered_10003d90(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_10008d80;
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

#undef DAT_10008d80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003df0
 */

longdouble recovered_10003df0(float param_1,float param_2)

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
 * Address: 0x10003e90
 */

longdouble recovered_10003e90(float param_1)

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
 * Address: 0x10003ef0
 */

longdouble recovered_10003ef0(float param_1)

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
 * Address: 0x10003f60
 */

longdouble recovered_10003f60(double param_1)

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
 * Address: 0x10003fd0
 */

longdouble recovered_10003fd0(float param_1)

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
 * Address: 0x10004040
 */

longdouble recovered_10004040(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10003600();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008d88
#define DAT_10008d88 (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10008d8c
#define DAT_10008d8c (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004060
 */

void recovered_10004060(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_10008d88 < param_1) {
      do {
        param_1 = param_1 * DAT_10008d80;
      } while (DAT_10008d88 < param_1);
    }
    for (; param_1 < DAT_10008d8c; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_10008d80
#undef DAT_10008d88
#undef DAT_10008d8c

#undef DAT_10008e00
#define DAT_10008e00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004180
 */

undefined4 recovered_10004180(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_10008e00 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_10008e00
#undef local_10

#undef DAT_10008db4
#define DAT_10008db4 (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_10008db8
#define DAT_10008db8 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10008dbc
#define DAT_10008dbc (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10008de0
#define DAT_10008de0 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10008de8
#define DAT_10008de8 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10008df0
#define DAT_10008df0 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_10008df8
#define DAT_10008df8 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041d0
 */

longdouble recovered_100041d0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_10008de0 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_10008de8;
    } while ((float)DAT_10008de0 < param_1);
  }
  if (param_1 < (float)DAT_10008df0) {
    do {
      param_1 = param_1 + (float)DAT_10008df8;
    } while (param_1 < (float)DAT_10008df0);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_10008dbc +
          (fVar1 * fVar1) / DAT_10008db8 + fVar1 / DAT_10008db4 + 1.0) * param_1);
}

#undef DAT_10008db4
#undef DAT_10008db8
#undef DAT_10008dbc
#undef DAT_10008de0
#undef DAT_10008de8
#undef DAT_10008df0
#undef DAT_10008df8

#undef DAT_10008dc0
#define DAT_10008dc0 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10008dc4
#define DAT_10008dc4 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10008dc8
#define DAT_10008dc8 (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10008de0
#define DAT_10008de0 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10008de8
#define DAT_10008de8 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10008df0
#define DAT_10008df0 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_10008df8
#define DAT_10008df8 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004260
 */

longdouble recovered_10004260(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_10008de0 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_10008de8;
    } while ((float)DAT_10008de0 < param_1);
  }
  if (param_1 < (float)DAT_10008df0) {
    do {
      param_1 = param_1 + (float)DAT_10008df8;
    } while (param_1 < (float)DAT_10008df0);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_10008dc8 +
         (fVar1 * fVar1) / DAT_10008dc4 + fVar1 * DAT_10008dc0 + 1.0);
}

#undef DAT_10008dc0
#undef DAT_10008dc4
#undef DAT_10008dc8
#undef DAT_10008de0
#undef DAT_10008de8
#undef DAT_10008df0
#undef DAT_10008df8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042f0
 */

longdouble recovered_100042f0(float param_1)

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
 * Address: 0x10004310
 */

int recovered_10004310(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10004460
 */

int recovered_10004460(byte *param_1,undefined4 *param_2,uint param_3)

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

#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008dd0
#define DAT_10008dd0 (*(float *)(((uintptr_t)pf_module_state + 0x58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045b0
 */

longdouble recovered_100045b0(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)DAT_10008dd0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)DAT_10008dd0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_10008dd0;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10004683;
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
LAB_10004683:
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
              lVar10 = lVar10 * (longdouble)DAT_10008d80;
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

#undef DAT_10008d80
#undef DAT_10008dd0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004770
 */

longdouble recovered_10004770(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_100045b0(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_10008dd0
#define DAT_10008dd0 (*(float *)(((uintptr_t)pf_module_state + 0x58U)))
#undef str_10008e62
#define str_10008e62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeaU)))
#undef str_10008e6c
#define str_10008e6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_10008e7d
#define str_10008e7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x105U)))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047a0
 */

int recovered_100047a0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10004833;
    }
    bVar6 = param_3[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *param_1 = 0x25;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      param_3 = param_3 + 1;
      goto LAB_10004833;
    }
    pbVar10 = param_3 + 2;
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10004895;
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
LAB_10004895:
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
      goto LAB_1000497c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10004988;
    case 0x6c:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x6c) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_1000497c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10004988;
    case 0x7a:
      cVar7 = '\x05';
LAB_10004988:
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
        goto LAB_10004c99;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004c99:
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
        abStack_51[iVar12 + 1] = str_10008e7d[uVar15 + uVar9 * -10];
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
      goto LAB_100047e8;
    default:
      if (1 < local_bc) {
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10004833;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_10004dc7;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_10004dc7;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_10004dc7:
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
      pcVar14 = str_10008e7d;
      if (*param_3 == 0x58) {
        pcVar14 = str_10008e6c;
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
LAB_10004d9c:
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
LAB_10004833:
      local_c0 = local_c0 + 1;
LAB_10004834:
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
                        goto LAB_10004ed5;
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
LAB_10004ed5:
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
          abStack_51[iVar12 + 1] = str_10008e7d[uVar8 + uVar9 * -10];
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
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_10008dd0;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_10008dd0;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_10008dd0;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_10008dd0;
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
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_10008dd0);
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
        abStack_51[iVar12 + 1] = str_10008e7d[uVar8 & 0xf];
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
      goto LAB_10004834;
    case 0x73:
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_10008e62;
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
      goto LAB_10004d9c;
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
        goto LAB_10004faf;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_10004faf;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_10004faf:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_10008e7d[uVar8 + uVar9 * -10];
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
LAB_100047e8:
      param_3 = param_3 + 1;
      param_1 = local_b8;
    }
  } while( true );
}

#undef DAT_10008dd0
#undef str_10008e62
#undef str_10008e6c
#undef str_10008e7d
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_80
#undef abStack_51

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005500
 */

void recovered_10005500(byte *param_1,uint param_2,byte *param_3,double param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100047a0(param_1,param_2,param_3,&param_4);
  return;
}


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
#undef DAT_10009078
#define DAT_10009078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x300U)))
#undef DAT_10009080
#define DAT_10009080 (*(int * *)(((uintptr_t)pf_module_state + 0x308U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005530(undefined *in_ECX,uint in_EDX,int *param_3)

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
        if (DAT_10009078 == 0) {
          puVar2 = &DAT_10009078;
        }
        *puVar2 = piVar4;
        *param_3 = (int)piVar4;
        if (DAT_10009080 == (int *)0x0) {
          DAT_10009080 = piVar4;
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
    if (DAT_10009078 == 0) {
      puVar2 = &DAT_10009078;
    }
    *puVar2 = 0x10000000;
    *param_3 = 0x10000000;
    if (DAT_10009080 != (int *)0x0) {
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
    if (DAT_10009078 == 0) {
      puVar2 = &DAT_10009078;
    }
    *puVar2 = piVar4;
    *param_3 = (int)piVar4;
    if (DAT_10009080 != (int *)0x0) {
      return;
    }
  }
  DAT_10009080 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_10009078
#undef DAT_10009080
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056d0
 */

uint * recovered_100056d0(uint *in_ECX,uint *in_EDX)

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
 * Address: 0x10005730
 */

undefined4 recovered_10005730(uint *in_ECX,int in_EDX)

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
#undef DAT_10009084
#define DAT_10009084 (*(uint *)(((uintptr_t)pf_module_state + 0x30cU)))
#undef DAT_10009088
#define DAT_10009088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x310U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280840
#define UINT_00280840 (*(uint *)(0x280840U))
#define local_214 (*(char (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005790
 */

void recovered_10005790(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10009084 != 0) {
          DAT_10009084 = DAT_10009084 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_10009084 == 0) {
            uVar5 = 0;
          }
          else {
            recovered_10002750((undefined4 *)local_214,(undefined4 *)&DAT_10009088,DAT_10009084);
            uVar5 = DAT_10009084;
          }
          local_214[uVar5] = '\0';
          iVar3 = Ram00280800;
          if (((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
             ((uVar5 = Ram00280808, 0xb < uVar5 &&
              ((uVar5 = Ram00280808, 0x43 < uVar5 &&
               (pcVar4 = (code *)UINT_00280840, pcVar4 != (code *)0x0)))))) {
            (*pcVar4)(local_214);
          }
          DAT_10009084 = 0;
        }
        else {
          if (DAT_10009084 - 0x1ff < 0xfffffe00) {
            recovered_10002750((undefined4 *)local_214,(undefined4 *)&DAT_10009088,DAT_10009084);
            local_214[DAT_10009084] = '\0';
            iVar3 = Ram00280800;
            if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
                (uVar5 = Ram00280808, 0xb < uVar5)) &&
               ((uVar5 = Ram00280808, 0x43 < uVar5 &&
                (pcVar4 = (code *)UINT_00280840, pcVar4 != (code *)0x0)))) {
              (*pcVar4)(local_214);
            }
            DAT_10009084 = 0;
          }
          pcVar1 = &DAT_10009088 + DAT_10009084;
          DAT_10009084 = DAT_10009084 + 1;
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
#undef DAT_10009084
#undef DAT_10009088
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280840
#undef local_214

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10009084
#define DAT_10009084 (*(uint *)(((uintptr_t)pf_module_state + 0x30cU)))
#undef DAT_10009088
#define DAT_10009088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x310U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280840
#define UINT_00280840 (*(uint *)(0x280840U))
#define local_21c (*(char (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005950
 */

void recovered_10005950(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  if (DAT_10009084 == 0) {
    uVar3 = 0;
  }
  else {
    recovered_10002750((undefined4 *)local_21c,(undefined4 *)&DAT_10009088,DAT_10009084);
    uVar3 = DAT_10009084;
  }
  local_21c[uVar3] = '\0';
  iVar1 = Ram00280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
      (uVar3 = Ram00280808, 0xb < uVar3)) &&
     ((uVar3 = Ram00280808, 0x43 < uVar3 && (pcVar2 = (code *)UINT_00280840, pcVar2 != (code *)0x0))
     )) {
    (*pcVar2)(local_21c);
  }
  DAT_10009084 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009084
#undef DAT_10009088
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280840
#undef local_21c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10009084
#define DAT_10009084 (*(uint *)(((uintptr_t)pf_module_state + 0x30cU)))
#undef DAT_10009088
#define DAT_10009088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x310U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280840
#define UINT_00280840 (*(uint *)(0x280840U))
#define local_210 (*(char (*)[528])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059f0
 */

void recovered_100059f0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  if (DAT_10009084 != 0) {
    recovered_10002750((undefined4 *)local_210,(undefined4 *)&DAT_10009088,DAT_10009084);
    local_210[DAT_10009084] = '\0';
    iVar1 = Ram00280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
        (uVar2 = Ram00280808, 0xb < uVar2)) &&
       ((uVar2 = Ram00280808, 0x43 < uVar2 &&
        (pcVar3 = (code *)UINT_00280840, pcVar3 != (code *)0x0)))) {
      (*pcVar3)(local_210);
    }
    DAT_10009084 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009084
#undef DAT_10009088
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280840
#undef local_210

#undef DAT_10008e6b
#define DAT_10008e6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf3U)))
#undef DAT_10008e8e
#define DAT_10008e8e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x116U)))
#define abStack_14a (*(byte (*)[330])(pf_stack_frame + 22))
#define in_stack_fffffeb0 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a80
 */

void recovered_10005a80(byte *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int extraout_EAX = 0;
  byte *pbVar2;

  pbVar2 = &DAT_10008e8e;
  if (param_1 != (byte *)0x0) {
    pbVar2 = param_1;
  }
  puVar1 = &DAT_10008e6b;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  recovered_10005500(abStack_14a + -6,0x140,pbVar2,pf_bits_double(CONCAT44(in_stack_fffffeb0,puVar1)));
  if (0 < extraout_EAX) {
    recovered_10005790((char *)(abStack_14a + -6),extraout_EAX);
  }
  return;
}

#undef DAT_10008e6b
#undef DAT_10008e8e
#undef abStack_14a
#undef in_stack_fffffeb0

#undef DAT_10008eac
#define DAT_10008eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef str_10008e91
#define str_10008e91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x119U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ae0
 */

void recovered_10005ae0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002ea0(((uintptr_t)pf_module_state+0x119U));
  recovered_10005790(str_10008e91,iVar1);
  iVar1 = recovered_10002ea0(((uintptr_t)pf_module_state+0x134U));
  recovered_10005790(&DAT_10008eac,iVar1);
  return;
}

#undef DAT_10008eac
#undef str_10008e91

#undef DAT_10008eac
#define DAT_10008eac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef str_10008eaf
#define str_10008eaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x137U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b30
 */

void recovered_10005b30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002ea0(((uintptr_t)pf_module_state+0x137U));
  recovered_10005790(str_10008eaf,iVar1);
  iVar1 = recovered_10002ea0(((uintptr_t)pf_module_state+0x134U));
  recovered_10005790(&DAT_10008eac,iVar1);
  return;
}

#undef DAT_10008eac
#undef str_10008eaf

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10009084
#define DAT_10009084 (*(uint *)(((uintptr_t)pf_module_state + 0x30cU)))
#undef DAT_10009088
#define DAT_10009088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x310U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280840
#define UINT_00280840 (*(uint *)(0x280840U))
#undef UINT_00280844
#define UINT_00280844 (*(uint *)(0x280844U))
#define local_214 (*(char (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b80
 */

bool recovered_10005b80(int param_1,int param_2,char *param_3,byte param_4)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_10009084 != 0) {
      recovered_10002750((undefined4 *)local_214,(undefined4 *)&DAT_10009088,DAT_10009084);
      local_214[DAT_10009084] = '\0';
      iVar1 = Ram00280800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
          (uVar3 = Ram00280808, 0xb < uVar3)) &&
         ((uVar3 = Ram00280808, 0x43 < uVar3 &&
          (pcVar2 = (code *)UINT_00280840, pcVar2 != (code *)0x0)))) {
        (*pcVar2)(local_214);
      }
      DAT_10009084 = 0;
    }
    iVar1 = Ram00280800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
       ((uVar3 = Ram00280808, 0xb < uVar3 &&
        ((uVar3 = Ram00280808, 0x47 < uVar3 &&
         (pcVar2 = (code *)UINT_00280844, pcVar2 != (code *)0x0)))))) {
      uVar3 = (*pcVar2)((char *)param_1,param_2,param_3,(uint)param_4);
      return uVar3 != 0;
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10009084
#undef DAT_10009088
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280840
#undef UINT_00280844
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c80
 */

undefined4 recovered_10005c80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c90
 */

void recovered_10005c90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ca0
 */

undefined1 recovered_10005ca0(void)

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
#undef DAT_10008e8e
#define DAT_10008e8e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x116U)))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x288U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef str_10008f30
#define str_10008f30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b8U)))
#undef str_10008f3d
#define str_10008f3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c5U)))
#undef str_10008f4b
#define str_10008f4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
#define in_stack_ffffffd0 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cb0
 */

byte * recovered_10005cb0(byte *param_1,char *param_2)

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
    *(undefined4 *)PTR_DAT_10009000 = 0x16;
    return (byte *)0x0;
  }
  iVar4 = recovered_10002ee0(param_1,(byte *)str_10008f30);
  if (iVar4 == 0) {
    local_24 = 1;
  }
  else {
    iVar5 = recovered_10002ee0(param_1,(byte *)str_10008f3d);
    if (iVar5 == 0) {
      local_24 = 2;
    }
    else {
      iVar5 = recovered_10002ee0(param_1,(byte *)str_10008f4b);
      if (iVar5 != 0) {
        pbVar6 = (byte *)recovered_10002660(800);
        if (pbVar6 != (byte *)0x0) {
          recovered_100029e0(pbVar6,0,800);
          pbVar6[0] = 0;
          pbVar6[1] = 0;
          pbVar6[2] = 0;
          pbVar6[3] = 0;
          pcVar7 = recovered_100030d0(param_2,'r');
          bVar10 = true;
          if (pcVar7 == (char *)0x0) {
            pcVar7 = recovered_100030d0(param_2,'+');
            bVar10 = true;
            if (pcVar7 == (char *)0x0) {
              pcVar7 = recovered_100030d0(param_2,'a');
              bVar10 = pcVar7 != (char *)0x0;
            }
          }
          pbVar6[0x110] = bVar10;
          pcVar7 = recovered_100030d0(param_2,'w');
          if (pcVar7 == (char *)0x0) {
            pcVar7 = recovered_100030d0(param_2,'a');
            bVar10 = true;
            if (pcVar7 == (char *)0x0) {
              pcVar7 = recovered_100030d0(param_2,'+');
              bVar10 = pcVar7 != (char *)0x0;
            }
          }
          else {
            bVar10 = true;
          }
          pbVar6[0x111] = bVar10;
          pcVar7 = recovered_100030d0(param_2,'a');
          pbVar6[0x112] = pcVar7 != (char *)0x0;
          pbVar6[0x10c] = 0xff;
          pbVar6[0x10d] = 0xff;
          pbVar6[0x10e] = 0xff;
          pbVar6[0x10f] = 0xff;
          recovered_10005500(pbVar6 + 4,0xf1,&DAT_10008e8e,
                             pf_bits_double(CONCAT44(in_stack_ffffffd0,param_1)));
          recovered_100029e0((byte *)&local_20,0,0xc);
          iVar4 = Ram00280800;
          if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00280804, iVar4 != 0)) &&
              (uVar8 = Ram00280808, 0xb < uVar8)) &&
             (((uVar8 = Ram00280808, 0x37 < uVar8 &&
               (pcVar2 = (code *)UINT_00280834, pcVar2 != (code *)0x0)) &&
              (uVar8 = (*pcVar2)((char *)param_1,&local_20), uVar8 != 0)))) {
            pcVar7 = recovered_100030d0(param_2,'w');
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
                  puVar9 = (undefined4 *)recovered_10002700(*(undefined4 *)(pbVar6 + 0xfc),uVar8);
                  if (puVar9 == (undefined4 *)0x0) {
                    *(undefined4 *)PTR_DAT_10009000 = 0xc;
                    pbVar6[0x115] = 1;
                    goto LAB_10005ff7;
                  }
                  *(undefined4 **)(pbVar6 + 0xfc) = puVar9;
                  *(uint *)(pbVar6 + 0x104) = uVar8;
                  *(undefined4 **)(pbVar6 + 0xf8) = puVar9;
                }
                else {
                  puVar9 = *(undefined4 **)(pbVar6 + 0xfc);
                }
                recovered_10002750(puVar9,local_20,local_1c);
              }
              else {
                *(undefined4 **)(pbVar6 + 0xf8) = local_20;
              }
              *(uint *)(pbVar6 + 0x100) = local_1c;
              bVar1 = pbVar6[0x112];
              goto joined_r0x10005fd4;
            }
          }
          else if (pbVar6[0x111] == 0) {
            *(undefined4 *)PTR_DAT_10009000 = 2;
LAB_10005ff7:
            recovered_100026b0(pbVar6);
            return (byte *)0x0;
          }
          bVar1 = pbVar6[0x112];
joined_r0x10005fd4:
          if (bVar1 == 1) {
            *(undefined4 *)(pbVar6 + 0x108) = *(undefined4 *)(pbVar6 + 0x100);
            return pbVar6;
          }
          return pbVar6;
        }
        goto LAB_10005e55;
      }
      local_24 = 3;
    }
  }
  pbVar6 = (byte *)recovered_10002660(800);
  if (pbVar6 != (byte *)0x0) {
    recovered_100029e0(pbVar6,0,800);
    *(undefined4 *)pbVar6 = local_24;
    pbVar6[0x110] = iVar4 == 0;
    pbVar6[0x111] = iVar4 != 0;
    pbVar6[0x10c] = 0xff;
    pbVar6[0x10d] = 0xff;
    pbVar6[0x10e] = 0xff;
    pbVar6[0x10f] = 0xff;
    recovered_10005500(pbVar6 + 4,0xf1,&DAT_10008e8e,pf_bits_double(CONCAT44(in_stack_ffffffd0,param_1)));
    return pbVar6;
  }
LAB_10005e55:
  *(undefined4 *)PTR_DAT_10009000 = 0xc;
  return (byte *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10008e8e
#undef PTR_DAT_10009000
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280834
#undef str_10008f30
#undef str_10008f3d
#undef str_10008f4b
#undef local_24
#undef local_20
#undef local_1c
#undef in_stack_ffffffd0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x288U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006060
 */

void recovered_10006060(byte *param_1,char *param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  if (param_3 == (int *)0x0) goto LAB_10006137;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    iVar1 = Ram00280800;
    if (((iVar1 == 0x50414d57) &&
        (((iVar1 = Ram00280804, iVar1 != 0 && (uVar3 = Ram00280808, 0xb < uVar3)) &&
         (uVar3 = Ram00280808, 0x3b < uVar3)))) &&
       (pcVar2 = (code *)UINT_00280838, pcVar2 != (code *)0x0)) {
      uVar3 = (*pcVar2)((char *)(param_3 + 1),(void *)param_3[0x3e],param_3[0x40]);
      if (uVar3 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_1000611a;
      }
    }
    *(undefined4 *)PTR_DAT_10009000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_1000611a:
  if (param_3[0x3f] != 0) {
    recovered_100026b0(param_3[0x3f]);
  }
  recovered_100026b0(param_3);
LAB_10006137:
  recovered_10005cb0(param_1,param_2);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef PTR_DAT_10009000
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280838

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x288U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006150
 */

undefined4 recovered_10006150(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;

  uVar4 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    iVar1 = Ram00280800;
    if (((iVar1 == 0x50414d57) &&
        (((iVar1 = Ram00280804, iVar1 != 0 && (uVar3 = Ram00280808, 0xb < uVar3)) &&
         (uVar3 = Ram00280808, 0x3b < uVar3)))) &&
       ((pcVar2 = (code *)UINT_00280838, pcVar2 != (code *)0x0 &&
        (uVar3 = (*pcVar2)((char *)(param_1 + 1),(void *)param_1[0x3e],param_1[0x40]), uVar3 != 0)))
       ) {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
    else {
      *(undefined4 *)PTR_DAT_10009000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar4 = 0xffffffff;
    }
  }
  if (param_1[0x3f] != 0) {
    recovered_100026b0(param_1[0x3f]);
  }
  recovered_100026b0(param_1);
  return uVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef PTR_DAT_10009000
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006230
 */

uint recovered_10006230(undefined4 *param_1,uint param_2,uint param_3,int *param_4)

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
        recovered_10002750(param_1,(undefined4 *)(uVar3 + param_4[0x3e]),uVar1);
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
          uVar2 = recovered_10006340(param_4);
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
#undef DAT_10008e6b
#define DAT_10008e6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf3U)))
#undef DAT_10009084
#define DAT_10009084 (*(uint *)(((uintptr_t)pf_module_state + 0x30cU)))
#undef DAT_10009088
#define DAT_10009088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x310U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280840
#define UINT_00280840 (*(uint *)(0x280840U))
#undef UINT_00280844
#define UINT_00280844 (*(uint *)(0x280844U))
#define local_214 (*(char (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006340
 */

uint recovered_10006340(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  int iVar3;

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
LAB_100063a1:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_10009084 != 0) {
      recovered_10002750((undefined4 *)local_214,(undefined4 *)&DAT_10009088,DAT_10009084);
      local_214[DAT_10009084] = '\0';
      iVar3 = Ram00280800;
      if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
          (uVar2 = Ram00280808, 0xb < uVar2)) &&
         ((uVar2 = Ram00280808, 0x43 < uVar2 &&
          (pcVar1 = (code *)UINT_00280840, pcVar1 != (code *)0x0)))) {
        (*pcVar1)(local_214);
      }
      DAT_10009084 = 0;
    }
    iVar3 = Ram00280800;
    if (((iVar3 == 0x50414d57) && (iVar3 = Ram00280804, iVar3 != 0)) &&
       ((uVar2 = Ram00280808, 0xb < uVar2 &&
        ((uVar2 = Ram00280808, 0x47 < uVar2 &&
         (pcVar1 = (code *)UINT_00280844, pcVar1 != (code *)0x0)))))) {
      uVar2 = (*pcVar1)((char *)((int)param_1 + 0x116),0x1fe,&DAT_10008e6b,0);
      if (uVar2 != 0) {
        iVar3 = recovered_10002ea0((int)param_1 + 0x116);
        param_1[0xc6] = iVar3 + 1;
        *(undefined1 *)((int)param_1 + iVar3 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar2 = 0;
        goto LAB_100063a1;
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
#undef DAT_10008e6b
#undef DAT_10009084
#undef DAT_10009088
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280840
#undef UINT_00280844
#undef local_214

#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006500
 */

int recovered_10006500(char *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (char *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_1000666a:
    param_3 = 0;
  }
  else {
    uVar4 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10005790(param_1,uVar4);
      param_4[0x42] = param_4[0x42] + uVar4;
      return param_3;
    }
    if (*(char *)((int)param_4 + 0x112) == '\0') {
      uVar3 = param_4[0x42];
    }
    else {
      uVar3 = param_4[0x40];
      param_4[0x42] = uVar3;
    }
    uVar2 = param_4[0x41];
    if (uVar2 < uVar3 + uVar4) {
      uVar1 = 0x100;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 * 2;
      } while (uVar2 < uVar3 + uVar4);
      uVar3 = recovered_10002700(param_4[0x3f],uVar2);
      if (uVar3 == 0) {
        *(undefined4 *)PTR_DAT_10009000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_1000666a;
      }
      param_4[0x3f] = uVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = uVar3;
      uVar3 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      recovered_100029e0((byte *)(uVar2 + param_4[0x3f]),0,uVar3 - uVar2);
      uVar3 = param_4[0x42];
    }
    recovered_10002750((undefined4 *)(uVar3 + param_4[0x3f]),(undefined4 *)param_1,uVar4);
    uVar4 = uVar4 + param_4[0x42];
    param_4[0x42] = uVar4;
    if (param_4[0x40] < uVar4) {
      param_4[0x40] = uVar4;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_10009000

#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006680
 */

undefined4 recovered_10006680(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_10009000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10006699;
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
LAB_10006699:
  *(undefined4 *)PTR_DAT_10009000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_10009000

#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006720
 */

undefined4 recovered_10006720(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_10009000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_10009000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x288U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006750
 */

undefined4 recovered_10006750(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;

  uVar3 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    iVar1 = Ram00280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
        ((uVar4 = Ram00280808, 0xb < uVar4 &&
         ((uVar4 = Ram00280808, 0x3b < uVar4 &&
          (pcVar2 = (code *)UINT_00280838, pcVar2 != (code *)0x0)))))) &&
       (uVar4 = (*pcVar2)((char *)(param_1 + 1),(void *)param_1[0x3e],param_1[0x40]), uVar4 != 0)) {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
    *(undefined4 *)PTR_DAT_10009000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef PTR_DAT_10009000
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006810
 */

undefined1 recovered_10006810(int param_1)

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
 * Address: 0x10006830
 */

undefined1 recovered_10006830(int param_1)

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
 * Address: 0x10006850
 */

void recovered_10006850(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006880
 */

uint recovered_10006880(uint param_1,int param_2)

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
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x288U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028083c
#define UINT_0028083c (*(uint *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068c0
 */

undefined4 recovered_100068c0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;

  if (param_1 == 0) {
    uVar4 = 0x16;
  }
  else {
    iVar1 = Ram00280800;
    uVar4 = 5;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
        (uVar3 = Ram00280808, 0xb < uVar3)) &&
       (((uVar3 = Ram00280808, 0x3f < uVar3 &&
         (pcVar2 = (code *)UINT_0028083c, pcVar2 != (code *)0x0)) &&
        (uVar3 = (*pcVar2)((char *)param_1), uVar3 != 0)))) {
      return 0;
    }
  }
  *(undefined4 *)PTR_DAT_10009000 = uVar4;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef PTR_DAT_10009000
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_0028083c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x288U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
#undef UINT_0028083c
#define UINT_0028083c (*(uint *)(0x28083cU))
#define local_20 (*(void * *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006940
 */

undefined4 recovered_10006940(int param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10009000 = 0x16;
  }
  else {
    recovered_100029e0((byte *)&local_20,0,0xc);
    iVar1 = Ram00280800;
    uVar4 = 2;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
        (uVar3 = Ram00280808, 0xb < uVar3)) &&
       ((uVar3 = Ram00280808, 0x37 < uVar3 &&
        (pcVar2 = (code *)UINT_00280834, pcVar2 != (code *)0x0)))) {
      uVar3 = (*pcVar2)((char *)param_1,&local_20);
      uVar4 = 2;
      if (uVar3 != 0) {
        iVar1 = Ram00280800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
           ((uVar3 = Ram00280808, 0xb < uVar3 &&
            (((uVar3 = Ram00280808, 0x3b < uVar3 &&
              (pcVar2 = (code *)UINT_00280838, pcVar2 != (code *)0x0)) &&
             (uVar3 = (*pcVar2)((char *)param_2,local_20,local_1c), uVar3 != 0)))))) {
          iVar1 = Ram00280800;
          uVar4 = 5;
          if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
             ((uVar3 = Ram00280808, 0xb < uVar3 &&
              ((uVar3 = Ram00280808, 0x3f < uVar3 &&
               (pcVar2 = (code *)UINT_0028083c, pcVar2 != (code *)0x0)))))) {
            uVar3 = (*pcVar2)((char *)param_1);
            uVar4 = 5;
            if (uVar3 != 0) {
              return 0;
            }
          }
        }
        else {
          uVar4 = 5;
        }
      }
    }
    *(undefined4 *)PTR_DAT_10009000 = uVar4;
  }
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef PTR_DAT_10009000
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280834
#undef UINT_00280838
#undef UINT_0028083c
#undef local_20
#undef local_1c

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
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ac0
 */

undefined4 recovered_10006ac0(int param_1,undefined4 *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;

  if (param_3 != (uint *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    recovered_100029e0((byte *)&local_20,0,0xc);
    iVar1 = Ram00280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
        (uVar3 = Ram00280808, 0xb < uVar3)) &&
       (((uVar3 = Ram00280808, 0x37 < uVar3 &&
         (pcVar2 = (code *)UINT_00280834, pcVar2 != (code *)0x0)) &&
        (uVar3 = (*pcVar2)((char *)param_1,&local_20), uVar3 != 0)))) {
      puVar4 = (undefined4 *)recovered_10002660(local_1c + (local_1c == 0));
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
      uVar3 = 0;
      if (local_1c != 0) {
        recovered_10002750(puVar4,local_20,local_1c);
        uVar3 = local_1c;
      }
      *param_2 = puVar4;
      *param_3 = uVar3;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280834
#undef local_20
#undef local_1c

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
#undef UINT_00280838
#define UINT_00280838 (*(uint *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ba0
 */

bool recovered_10006ba0(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  if ((((param_1 == 0) || (param_2 == 0 && param_3 != 0)) ||
      (iVar1 = Ram00280800, iVar1 != 0x50414d57)) ||
     (((iVar1 = Ram00280804, iVar1 == 0 || (uVar3 = Ram00280808, uVar3 < 0xc)) ||
      ((uVar3 = Ram00280808, uVar3 < 0x3c || (pcVar2 = (code *)UINT_00280838, pcVar2 == (code *)0x0)
       ))))) {
    return false;
  }
  uVar3 = (*pcVar2)((char *)param_1,(void *)param_2,param_3);
  return uVar3 != 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c20
 */

undefined4 recovered_10006c20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c30
 */

void recovered_10006c30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c40
 */

undefined4 recovered_10006c40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c50
 */

undefined4 recovered_10006c50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c60
 */

undefined4 recovered_10006c60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c70
 */

int recovered_10006c70(int param_1,int param_2,int param_3)

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


#undef DAT_10008ebf
#define DAT_10008ebf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x147U)))
#undef str_10008ec2
#define str_10008ec2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14aU)))
#undef str_10008ecf
#define str_10008ecf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x157U)))
#undef str_10008ed9
#define str_10008ed9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x161U)))
#undef str_10008eed
#define str_10008eed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175U)))
#undef str_10008efb
#define str_10008efb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x183U)))
#undef str_10008f0d
#define str_10008f0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x195U)))
#undef str_10008f19
#define str_10008f19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a1U)))
#undef str_10008f2a
#define str_10008f2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cc0
 */

char * recovered_10006cc0(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_10008ebf;
  switch((uintptr_t)(param_1)) {
  case 0:
    break;
  default:
    pcVar1 = str_10008f2a;
    break;
  case 2:
    pcVar1 = str_10008ec2;
    break;
  case 5:
    pcVar1 = str_10008ecf;
    break;
  case 9:
    pcVar1 = str_10008ed9;
    break;
  case 0xc:
    pcVar1 = str_10008eed;
    break;
  case 0xd:
    pcVar1 = str_10008efb;
    break;
  case 0x11:
    pcVar1 = str_10008f0d;
    break;
  case 0x16:
    pcVar1 = str_10008f19;
  }
  return pcVar1;
}

#undef DAT_10008ebf
#undef str_10008ec2
#undef str_10008ecf
#undef str_10008ed9
#undef str_10008eed
#undef str_10008efb
#undef str_10008f0d
#undef str_10008f19
#undef str_10008f2a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d90
 */

undefined4 recovered_10006d90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006da0
 */

undefined4 recovered_10006da0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10009288
#define DAT_10009288 (*(int *)(((uintptr_t)pf_module_state + 0x510U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006db0
 */

void recovered_10006db0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10009288 = DAT_10009288 + 1;
  return;
}

#undef DAT_10009288

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dd0
 */

longlong recovered_10006dd0(longdouble param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10003810((double)param_1);
  return lVar1;
}


#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006df0
 */

uint recovered_10006df0(byte *param_1,double *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_100047a0(local_21c,0x200,param_1,param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005790((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e40
 */

uint recovered_10006e40(byte *param_1,double param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_100047a0(local_21c,0x200,param_1,&param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005790((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

/* Native IA32 exception-scope stack, frame and program-counter transfer.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006ea0(void *context,...){
 __asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\njmpl *36(%eax)");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006eb0(void *context){__asm__ volatile("movl 4(%esp), %eax\nmovl %ebx, (%eax)\nmovl %esi, 4(%eax)\nmovl %edi, 8(%eax)\nmovl %ebp, 0xc(%eax)\nleal 4(%esp), %edx\nmovl %edx, 0x10(%eax)\nmovl (%esp), %edx\nmovl %edx, 0x14(%eax)\nmovl $0xffffffff, 0x18(%eax)\nmovl %eax, %esi\nmovl $1, %eax\ncpuid \nandl $0x3000000, %edx\ncmpl $0x3000000, %edx\njne Lpf_context_10006eee\nstmxcsr 0x18(%esi)\nLpf_context_10006eee:\nfnstcw 0x1c(%esi)\nxorl %eax, %eax\nmovl (%esi), %ebx\nmovl 4(%esi), %esi\nretl \nud2 \nnop \nnop \nnop \nnop \nnop ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006f00(void *context,int value){__asm__ volatile("movl 4(%esp), %edx\nmovl 8(%esp), %eax\ntestl %eax, %eax\njne Lpf_context_10006f11\nmovl $1, %eax\nLpf_context_10006f11:\ncmpl $-1, 0x18(%edx)\nje Lpf_context_10006f1b\nldmxcsr 0x18(%edx)\nLpf_context_10006f1b:\nfldcw 0x1c(%edx)\nmovl (%edx), %ebx\nmovl 4(%edx), %esi\nmovl 8(%edx), %edi\nmovl 0xc(%edx), %ebp\nmovl 0x10(%edx), %esp\njmpl *0x14(%edx)\nud2 \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop \nnop ");}


#undef DAT_10008f5c
#define DAT_10008f5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e4U)))
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
 * Address: 0x10006f40
 */

void recovered_10006f40(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006fc0;
  local_2c = &DAT_10008f5c;
  local_24 = 0x40;
  local_44 = 1;
  recovered_10007630(&local_48);
  recovered_10002620();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10008f5c
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
 * Address: 0x10006fc0
 */

undefined4 recovered_10006fc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#define in_stack_00000004 (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fd0
 */

void recovered_10006fd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_10006ff0(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
  recovered_10006f40();
}

#undef in_stack_00000004

#undef DAT_1000928c
#define DAT_1000928c (*(int *)(((uintptr_t)pf_module_state + 0x514U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff0
 */

void recovered_10006ff0(int in_stack_00000004)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  recovered_10007430(in_stack_00000004);
  if (in_ECX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006f40();
  }
  *(int *)(in_ECX + 8) = DAT_1000928c;
  *(undefined1 *)(in_ECX + 0x20) = 0;
  DAT_1000928c = in_ECX;
  recovered_10007480(in_ECX);
  return;
}

#undef DAT_1000928c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007030
 */

int recovered_10007030(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002660(param_1 + (uint)(param_1 == 0));
  if (iVar1 == 0) {
    recovered_10002620();
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007060
 */

int recovered_10007060(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002660(param_1 + (uint)(param_1 == 0));
  if (iVar1 == 0) {
    recovered_10002620();
  }
  return iVar1;
}


#undef DAT_10008f6c
#define DAT_10008f6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f4U)))
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
 * Address: 0x10007090
 */

void recovered_10007090(undefined4 param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006fc0;
  local_2c = &DAT_10008f6c;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007630(&local_48);
  recovered_100026b0(param_1);
  recovered_10007660(&local_48);
  return;
}

#undef DAT_10008f6c
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_10008f7c
#define DAT_10008f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x204U)))
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
 * Address: 0x10007120
 */

void recovered_10007120(undefined4 param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006fc0;
  local_2c = &DAT_10008f7c;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007630(&local_48);
  recovered_100026b0(param_1);
  recovered_10007660(&local_48);
  return;
}

#undef DAT_10008f7c
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_10008f8c
#define DAT_10008f8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x214U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071b0
 */

void recovered_100071b0(undefined4 param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006fc0;
  local_2c = &DAT_10008f8c;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007630(&local_48);
  recovered_100026b0(param_1);
  recovered_10007660(&local_48);
  return;
}

#undef DAT_10008f8c
#undef auStackY_d0
#undef local_48
#undef auStack_1c
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10008f9c
#define DAT_10008f9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x224U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007240
 */

void recovered_10007240(undefined4 param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006fc0;
  local_2c = &DAT_10008f9c;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007630(&local_48);
  recovered_100026b0(param_1);
  recovered_10007660(&local_48);
  return;
}

#undef DAT_10008f9c
#undef auStackY_d0
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

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

uint recovered_100072e0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007300
 */

void recovered_10007300(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007310
 */

void recovered_10007310(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10009294
#define DAT_10009294 (*(int *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_10009298
#define DAT_10009298 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007320
 */

undefined1 * recovered_10007320(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;

  iVar3 = param_1 + 0x24 + (uint)(param_1 == 0);
  puVar1 = (undefined1 *)recovered_10002660(iVar3);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006f40();
  }
  if (iVar3 != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  DAT_10009294 = DAT_10009294 + 1 + (uint)(DAT_10009294 == -1);
  if (DAT_10009298 == (undefined1 *)0x0) {
LAB_1000739c:
    *(int *)(puVar1 + 0x1c) = DAT_10009294;
    *(undefined1 **)(puVar1 + 0xc) = DAT_10009298;
    DAT_10009298 = puVar1;
    return puVar1 + 0x24;
  }
  do {
    iVar3 = (int)DAT_10009298;
    while (*(int *)(iVar3 + 0x1c) != DAT_10009294) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_1000739c;
    }
    DAT_10009294 = DAT_10009294 + 1 + (uint)(DAT_10009294 == -1);
  } while( true );
}

#undef DAT_10009294
#undef DAT_10009298

#undef DAT_10009298
#define DAT_10009298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073c0
 */

void recovered_100073c0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;

  if (param_1 != 0) {
    iVar1 = param_1 + -0x24;
    iVar2 = DAT_10009298;
    if (DAT_10009298 == iVar1) {
      puVar3 = &DAT_10009298;
    }
    else {
      do {
        iVar4 = iVar2;
        if (iVar4 == 0) goto LAB_10007414;
        iVar2 = *(int *)(iVar4 + 0xc);
      } while (*(int *)(iVar4 + 0xc) != iVar1);
      puVar3 = (undefined4 *)(iVar4 + 0xc);
    }
    *puVar3 = *(undefined4 *)(param_1 + -0x18);
    *(undefined4 *)(param_1 + -0x18) = 0;
LAB_10007414:
    recovered_100026b0(iVar1);
  }
  return;
}

#undef DAT_10009298

#undef DAT_10009298
#define DAT_10009298 (*(int *)(((uintptr_t)pf_module_state + 0x520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007430
 */

void recovered_10007430(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10009298;
  if (DAT_10009298 != in_ECX && DAT_10009298 != 0) {
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

#undef DAT_10009298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007480
 */

int recovered_10007480(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x24;
}


#undef DAT_1000928c
#define DAT_1000928c (*(int *)(((uintptr_t)pf_module_state + 0x514U)))
#undef DAT_10009298
#define DAT_10009298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007490
 */

void recovered_10007490(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;

  iVar1 = DAT_1000928c;
  if (DAT_1000928c != 0) {
    puVar3 = (undefined4 *)(DAT_1000928c + 8);
    DAT_1000928c = *(int *)(DAT_1000928c + 8);
    *puVar3 = 0;
    if (*(char *)(iVar1 + 0x20) == '\0') {
      if (*(code **)(iVar1 + 4) != (code *)0x0) {
        (**(code **)(iVar1 + 4))(iVar1 + 0x24);
      }
      iVar2 = DAT_10009298;
      if (DAT_10009298 == iVar1) {
        puVar3 = &DAT_10009298;
      }
      else {
        do {
          iVar4 = iVar2;
          if (iVar4 == 0) goto LAB_10007504;
          iVar2 = *(int *)(iVar4 + 0xc);
        } while (*(int *)(iVar4 + 0xc) != iVar1);
        puVar3 = (undefined4 *)(iVar4 + 0xc);
      }
      *puVar3 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
LAB_10007504:
      recovered_100026b0(iVar1);
    }
  }
  return;
}

#undef DAT_1000928c
#undef DAT_10009298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007520
 */

void recovered_10007520(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007560(param_1 + -0x24);
}


#undef DAT_1000928c
#define DAT_1000928c (*(int *)(((uintptr_t)pf_module_state + 0x514U)))
#undef DAT_10009290
#define DAT_10009290 (*(int * *)(((uintptr_t)pf_module_state + 0x518U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007560
 */

void recovered_10007560(int in_ECX)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte *in_EDX;
  int in_ECX_00;
  undefined4 uVar1;
  int *in_ECX_01;

  if (DAT_10009290 != (int *)0x0) {
    in_EDX = *(byte **)in_ECX;
    in_ECX_01 = DAT_10009290;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_10007f30((int)in_ECX_01,in_EDX,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(in_ECX + 0x10) = in_ECX_01;
        *(undefined4 *)(in_ECX + 0x14) = local_1c;
        *(undefined4 *)(in_ECX + 0x18) = local_18;
        recovered_10007730(in_ECX);
        in_ECX_00 = DAT_1000928c;
        if (DAT_1000928c == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006f40();
        }
        *(undefined1 *)(DAT_1000928c + 0x20) = 1;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
        *(undefined4 *)(in_ECX_00 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10007560(in_ECX_00);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006f40();
}

#undef DAT_1000928c
#undef DAT_10009290
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000928c
#define DAT_1000928c (*(int *)(((uintptr_t)pf_module_state + 0x514U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

void recovered_100075f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  in_ECX = DAT_1000928c;
  if (DAT_1000928c == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006f40();
  }
  *(undefined1 *)(DAT_1000928c + 0x20) = 1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007560(in_ECX);
}

#undef DAT_1000928c

#undef DAT_10009290
#define DAT_10009290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x518U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007630
 */

void recovered_10007630(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10009290;
  DAT_10009290 = param_1;
  return;
}

#undef DAT_10009290

#undef DAT_10009290
#define DAT_10009290 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x518U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007660
 */

void recovered_10007660(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10009290;
  if (DAT_10009290 == param_1) {
    puVar2 = &DAT_10009290;
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

#undef DAT_10009290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076a0
 */

void recovered_100076a0(int in_stack_00000004)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007560(in_stack_00000004);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076c0
 */

void recovered_100076c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006f40();
}


#undef DAT_10009290
#define DAT_10009290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x518U)))
#undef DAT_10009298
#define DAT_10009298 (*(int *)(((uintptr_t)pf_module_state + 0x520U)))
#define iStack_4c (*(int *)(pf_stack_frame + 20))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076d0
 */

undefined4 recovered_100076d0(int param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *extraout_ECX = 0;

  in_ECX = DAT_10009298;
  if (DAT_10009298 != param_1 && DAT_10009298 != 0) {
    do {
      if (*(int *)(in_ECX + 0x1c) == param_1) goto LAB_10007712;
      in_ECX = *(int *)(in_ECX + 0xc);
    } while ((in_ECX != 0) && (in_ECX != param_1));
  }
  if (in_ECX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006f40();
  }
LAB_10007712:
  if (DAT_10009290 != (undefined4 *)0x0) {
    DAT_10009290 = (undefined4 *)*DAT_10009290;
  }
  recovered_10007730(in_ECX);
  if (DAT_10009290 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[4];
    do {
      puVar2 = DAT_10009290;
      if (DAT_10009290 == puVar1) {
        DAT_10009290[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[6];
        uVar3 = extraout_ECX[5];
LAB_100077ce:
        puVar2[1] = uVar3;
        recovered_10006ea0((int)puVar2);
        recovered_100076d0(iStack_4c);
        return 0;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      recovered_10007f30((int)DAT_10009290,(byte *)*extraout_ECX,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_3c;
        goto LAB_100077ce;
      }
      DAT_10009290 = (undefined4 *)*puVar2;
    } while (DAT_10009290 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006f40();
}

#undef DAT_10009290
#undef DAT_10009298
#undef iStack_4c
#undef uStack_40
#undef uStack_3c
#undef uStack_38

#undef DAT_10009290
#define DAT_10009290 (*(int * *)(((uintptr_t)pf_module_state + 0x518U)))
#define iStack_2c (*(int *)(pf_stack_frame + 20))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007730
 */

undefined4 recovered_10007730(int in_ECX)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_10009290 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0x10);
    do {
      piVar2 = DAT_10009290;
      if (DAT_10009290 == piVar1) {
        DAT_10009290[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x18);
        iVar3 = *(int *)(in_ECX + 0x14);
LAB_100077ce:
        piVar2[1] = iVar3;
        recovered_10006ea0((int)piVar2);
        recovered_100076d0(iStack_2c);
        return 0;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      recovered_10007f30((int)DAT_10009290,*(byte **)in_ECX,(undefined2 *)&local_20);
      if (((char)local_20 == '\x01') && (PF_PART1(local_20, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_1c;
        goto LAB_100077ce;
      }
      DAT_10009290 = (int *)*piVar2;
    } while (DAT_10009290 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006f40();
}

#undef DAT_10009290
#undef iStack_2c
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077e0
 */

undefined4 recovered_100077e0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100076d0(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007800
 */

undefined4 recovered_10007800(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

void recovered_10007810(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006f40();
}


#undef DAT_1000905c
#define DAT_1000905c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007820
 */

int recovered_10007820(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_100078e0;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_100078e0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000905c) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_100078e0:
      local_1c = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_1c;
}

#undef DAT_1000905c
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007900
 */

void recovered_10007900(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002620();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007920
 */

undefined4 recovered_10007920(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007930
 */

bool recovered_10007930(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007950
 */

bool recovered_10007950(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007990
 */

bool recovered_10007990(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079c0
 */

bool recovered_100079c0(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079e0
 */

bool recovered_100079e0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a00
 */

byte recovered_10007a00(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a40
 */

bool recovered_10007a40(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008dc0
#define DAT_10008dc0 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10008e10
#define DAT_10008e10 (*(float *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_10008e18
#define DAT_10008e18 (*(double *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef DAT_10008e20
#define DAT_10008e20 (*(double *)(((uintptr_t)pf_module_state + 0xa8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a60
 */

longdouble recovered_10007a60(double param_1)

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
    if ((longdouble)DAT_10008e18 < lVar4) {
      return (longdouble)DAT_10008e10;
    }
    if (lVar4 < (longdouble)DAT_10008e20) {
      return (longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_10008d80;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_10008dc0) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_10008d80;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_10008dc0);
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

#undef DAT_10008d80
#undef DAT_10008dc0
#undef DAT_10008e10
#undef DAT_10008e18
#undef DAT_10008e20

#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008dc0
#define DAT_10008dc0 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10008e10
#define DAT_10008e10 (*(float *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_10008e18
#define DAT_10008e18 (*(double *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef DAT_10008e20
#define DAT_10008e20 (*(double *)(((uintptr_t)pf_module_state + 0xa8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b50
 */

longdouble recovered_10007b50(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;

  if (!NAN(param_1)) {
    fVar1 = DAT_10008e10;
    if (((float)DAT_10008e18 < param_1) || (fVar1 = 0.0, param_1 < (float)DAT_10008e20))
    goto LAB_10007c3d;
    iVar4 = 0;
    if (DAT_10008d80 < param_1) {
      iVar4 = 0;
      do {
        param_1 = param_1 * DAT_10008d80;
        iVar4 = iVar4 + 1;
      } while (DAT_10008d80 < param_1);
    }
    if (DAT_10008dc0 <= param_1) {
      fVar1 = param_1;
    }
    else {
      do {
        param_1 = param_1 * DAT_10008d80;
        iVar4 = iVar4 + 1;
        fVar1 = param_1;
      } while (param_1 < DAT_10008dc0);
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
      goto LAB_10007c3d;
    }
  }
  fVar1 = param_1;
LAB_10007c3d:
  return (longdouble)fVar1;
}

#undef DAT_10008d80
#undef DAT_10008dc0
#undef DAT_10008e10
#undef DAT_10008e18
#undef DAT_10008e20

#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008dc0
#define DAT_10008dc0 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10008e10
#define DAT_10008e10 (*(float *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_10008e18
#define DAT_10008e18 (*(double *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef DAT_10008e20
#define DAT_10008e20 (*(double *)(((uintptr_t)pf_module_state + 0xa8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c50
 */

longdouble recovered_10007c50(longdouble param_1)

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
    if ((longdouble)DAT_10008e18 < lVar4) {
      return (longdouble)DAT_10008e10;
    }
    if (lVar4 < (longdouble)DAT_10008e20) {
      return (longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_10008d80;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_10008dc0) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_10008d80;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_10008dc0);
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

#undef DAT_10008d80
#undef DAT_10008dc0
#undef DAT_10008e10
#undef DAT_10008e18
#undef DAT_10008e20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d40
 */

longdouble recovered_10007d40(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longdouble)param_1 - (longdouble)param_2;
}


#undef DAT_10008d80
#define DAT_10008d80 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008dc0
#define DAT_10008dc0 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d70
 */

longdouble recovered_10007d70(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_10003550(param_1);
  if ((longdouble)DAT_10008d80 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)DAT_10008dc0 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_10008d80
#undef DAT_10008dc0

#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007dd0
 */

ulonglong recovered_10007dd0(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_10007e83;
    }
  }
  else {
    if (param_3 != 0) {
      local_18 = param_3;
      goto LAB_10007e83;
    }
    if (*pbVar7 != 0x30) {
      local_18 = 10;
      goto LAB_10007e83;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_18 = 8;
      goto LAB_10007e83;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_18 = 0x10;
LAB_10007e83:
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
 * Address: 0x10007f10
 */

ulonglong recovered_10007f10(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007dd0(param_1,param_2,param_3);
  return uVar1;
}


#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
#define local_20 (*(uint *)(pf_stack_frame + 48))
#define local_1c (*(byte * *)(pf_stack_frame + 52))
#define local_18 (*(byte * (*)[6])(pf_stack_frame + 56))
#define local_38 (*(byte * *)(pf_stack_frame + 24))
#define local_34 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f30
 */

undefined4 recovered_10007f30(int in_ECX,byte *in_EDX,undefined2 *param_3)

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

  local_2c = 0x10007f45;
  pbVar11 = *(byte **)(in_ECX + 0x1c);
  if (pbVar11 != (byte *)0x0) {
    local_38 = pbVar11 + 1;
    if (*pbVar11 != 0xff) {
      recovered_100082c0((uint)*pbVar11,(int *)&local_38);
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
          goto LAB_100080e0;
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
LAB_100080e0:
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
LAB_1000829e:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar7;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
    local_18[0] = local_34 + *(int *)(local_2c + 0xee7 + local_28 * 4) * uVar7;
    pbVar11 = recovered_100082c0(local_30,(int *)local_18);
    if (pbVar11 == (byte *)0x0) goto LAB_1000829e;
    bVar17 = in_EDX != (byte *)0x0;
    if ((in_EDX != (byte *)0x0) && (pbVar11 != in_EDX)) {
      iVar9 = *(int *)(pbVar11 + 4);
      pbVar13 = in_EDX;
      do {
        iVar5 = *(int *)(pbVar13 + 4);
        if ((iVar9 == 0) || (iVar5 == 0)) {
          if (iVar5 == iVar9) goto LAB_1000829e;
        }
        else {
          iVar14 = 0;
          do {
            cVar3 = *(char *)(iVar5 + iVar14);
            cVar4 = *(char *)(iVar9 + iVar14);
            if ((cVar3 == '\0') || (cVar4 == '\0')) {
              if (cVar3 == cVar4) goto LAB_1000829e;
              break;
            }
            iVar14 = iVar14 + 1;
          } while (cVar3 == cVar4);
        }
        if (*(int *)pbVar13 != local_2c + 0x1117) goto LAB_10008277;
        pbVar13 = *(byte **)(pbVar13 + 8);
        bVar17 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar11) && (pbVar13 != (byte *)0x0));
    }
    if (bVar17) goto LAB_1000829e;
  }
LAB_10008277:
  if ((uVar15 | uVar6) == 0) {
    return 0;
  }
  local_1c = local_1c + (uVar15 | uVar6);
  bVar17 = 0x3e < local_20;
  local_20 = local_20 + 1;
  if (bVar17) {
    return 0;
  }
  goto LAB_100080e0;
}

#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082c0
 */

byte * recovered_100082c0(uint in_ECX,int *in_EDX)

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
    goto LAB_100083a5;
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
    goto LAB_100083a5;
  case 0x4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_100082ff_caseD_5;
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
LAB_100083a5:
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
switchD_100082ff_caseD_5:
  return pbVar3;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_10008f59
#define DAT_10008f59 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e1U)))
#undef Ram00280800
#define Ram00280800 (*(uint32_t *)(0x280800U))
#undef Ram00280804
#define Ram00280804 (*(uint32_t *)(0x280804U))
#undef Ram00280808
#define Ram00280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280828
#define UINT_00280828 (*(uint *)(0x280828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008410
 */

undefined4 recovered_10008410(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  if (param_1 != 0) {
    iVar1 = Ram00280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
        (uVar3 = Ram00280808, 0xb < uVar3)) &&
       ((uVar3 = Ram00280808, 0x2b < uVar3 &&
        (pcVar2 = (code *)UINT_00280828, pcVar2 != (code *)0x0)))) {
      (*pcVar2)((char *)param_1);
    }
    iVar1 = Ram00280800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00280804, iVar1 != 0)) &&
       ((uVar3 = Ram00280808, 0xb < uVar3 &&
        ((uVar3 = Ram00280808, 0x2b < uVar3 &&
         (pcVar2 = (code *)UINT_00280828, pcVar2 != (code *)0x0)))))) {
      uVar3 = (*pcVar2)(&DAT_10008f59);
      return uVar3;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_10008f59
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280828

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
#undef UINT_00280898
#define UINT_00280898 (*(uint *)(0x280898U))
#define local_154 (*(byte (*)[340])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084b0
 */

uint recovered_100084b0(char *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  byte bVar9;
  uint uVar8;
  int iVar10;

  uVar5 = 0;
  if ((param_1 != (char *)0x0) &&
     ((cVar2 = *param_1, (byte)(cVar2 + 0xbfU) < 0x1a ||
      (cVar2 == '_' || (byte)(cVar2 + 0x9fU) < 0x1a)))) {
    uVar8 = (uint)CONCAT11(param_1[1],cVar2);
    if (param_1[1] != '\0') {
      pcVar7 = param_1 + 2;
      do {
        bVar9 = (byte)(uVar8 >> 8);
        if ((0x19 < (byte)((bVar9 & 0xdf) + 0xbf)) && (bVar9 != 0x5f && 9 < (byte)(bVar9 - 0x30U))) {
          return 0;
        }
        cVar2 = *pcVar7;
        uVar8 = (uint)CONCAT11(cVar2,(char)uVar8);
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
    }
    if (param_2 != (byte *)0x0) {
      if ((char)uVar8 == '\0') {
        iVar6 = 0;
      }
      else {
        iVar10 = 0;
        do {
          if (iVar10 == 0x13b) {
            return 0;
          }
          iVar6 = iVar10 + 1;
          local_154[iVar10] = (byte)uVar8;
          iVar4 = iVar10 + 1;
          uVar8 = (uint)(byte)param_1[iVar4];
          iVar10 = iVar6;
        } while (param_1[iVar4] != 0);
      }
      pbVar1 = local_154 + iVar6;
      pbVar1[0] = 0x20;
      pbVar1[1] = 0x3d;
      pbVar1[2] = 0x20;
      pbVar1[3] = 0x22;
      iVar10 = iVar6 + 4;
      bVar9 = *param_2;
      while (bVar9 != 0) {
        param_2 = param_2 + 1;
        if (0x13f < iVar10 + 3U) {
          return 0;
        }
        switch((uintptr_t)(bVar9)) {
        case 9:
        case 10:
        case 0xd:
        case 0x22:
        case 0x2f:
          local_154[iVar10] = 0x2f;
          iVar10 = iVar10 + 1;
          if (bVar9 == 10) {
            bVar9 = 0x6e;
          }
          else if (bVar9 == 0xd) {
            bVar9 = 0x72;
          }
          else if (bVar9 == 9) {
            bVar9 = 0x74;
          }
        }
        local_154[iVar10] = bVar9;
        iVar10 = iVar10 + 1;
        bVar9 = *param_2;
      }
      uVar5 = 0;
      if ((uint)(iVar10 - (iVar6 + 3)) < 0xff) {
        (local_154 + iVar10)[0] = 0x22;
        (local_154 + iVar10)[1] = 0;
        iVar6 = Ram00280800;
        if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00280804, iVar6 != 0)) &&
            (uVar8 = Ram00280808, 0xb < uVar8)) &&
           ((uVar8 = Ram00280808, 0x9b < uVar8 &&
            (pcVar3 = (code *)UINT_00280898, pcVar3 != (code *)0x0)))) {
          uVar5 = (*pcVar3)((char *)local_154,(char *)0x0,0);
        }
      }
    }
  }
  return uVar5;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280898
#undef local_154

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
#undef UINT_00280a04
#define UINT_00280a04 (*(uint *)(0x280a04U))
#define local_2c (*(int (*)[11])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008720
 */

undefined4 recovered_10008720(int param_1,undefined1 *param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  local_2c[4] = 0;
  local_2c[5] = 0;
  if (((((param_3 != 0 && param_2 != (undefined1 *)0x0) && (*param_2 = 0, param_1 != 0)) &&
       (iVar3 = Ram00280800, iVar3 == 0x50414d57)) &&
      ((iVar3 = Ram00280804, iVar3 != 0 && (uVar2 = Ram00280808, 0xb < uVar2)))) &&
     ((uVar2 = Ram00280808, 0x207 < uVar2 &&
      ((pcVar1 = (code *)UINT_00280a04, pcVar1 != (code *)0x0 &&
       (uVar2 = (*pcVar1)((char *)param_1,local_2c),
       (local_2c[3] != 0 && local_2c[0] == 3) && uVar2 != 0)))))) {
    iVar3 = 1;
    do {
      if (*(char *)(local_2c[3] + -1 + iVar3) == '\0') {
        iVar4 = 0;
        do {
          param_2[iVar4] = *(undefined1 *)(local_2c[3] + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar3 != iVar4);
        return 1;
      }
      iVar4 = (1 - param_3) + iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar4 != 1);
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram00280800
#undef Ram00280804
#undef Ram00280808
#undef UINT_00280a04
#undef local_2c

#define local_50 (*(uint *)(pf_stack_frame + 16))
#define local_48 (*(uint *)(pf_stack_frame + 24))
#define local_44 (*(int *)(pf_stack_frame + 28))
#define local_40 (*(char * *)(pf_stack_frame + 32))
#define local_3c (*(char * *)(pf_stack_frame + 36))
#define local_38 (*(char * *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
#define local_30 (*(char * *)(pf_stack_frame + 48))
#define local_2c (*(char * *)(pf_stack_frame + 52))
#define local_28 (*(undefined4 *)(pf_stack_frame + 56))
#define local_24 (*(char * *)(pf_stack_frame + 60))
#define local_20 (*(char * *)(pf_stack_frame + 64))
#define local_1c (*(undefined4 *)(pf_stack_frame + 68))
#define local_18 (*(int *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008830
 */

uint recovered_10008830(char *param_1,char *param_2,undefined1 *param_3,int param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char **in_ECX;
  bool bVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;

  local_40 = param_1;
  local_1c = 0;
  local_20 = (char *)0x0;
  local_24 = (char *)0x0;
  local_28 = 0;
  local_2c = (char *)0x0;
  local_30 = (char *)0x0;
  local_44 = 0;
  if (param_4 == 0 || param_3 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if (param_2 == (char *)0x0 || param_1 == (char *)0x0) {
    return 0;
  }
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return 0;
  }
  uVar9 = 0xffffffff;
  local_48 = 0;
  local_50 = 0xffffffff;
  bVar6 = false;
  if ((byte)(cVar1 - 0x30U) < 10) {
    uVar7 = 0;
    pcVar8 = param_2;
    do {
      pcVar8 = pcVar8 + 1;
      if (~(uint)(byte)(cVar1 - 0x30) / 10 < uVar7) {
        bVar6 = false;
        local_50 = 0xffffffff;
        goto LAB_1000894f;
      }
      uVar7 = (uint)(byte)(cVar1 - 0x30) + uVar7 * 10;
      cVar1 = *pcVar8;
    } while ((byte)(cVar1 - 0x30U) < 10);
    bVar6 = uVar7 != 0 && cVar1 == '\0';
    local_50 = -(uint)(cVar1 != '\0') | uVar7 - 1;
  }
LAB_1000894f:
  iVar4 = 1;
  do {
    local_18 = iVar4;
    uVar3 = recovered_10008b10((int *)&local_40,&local_3c,&local_44);
    if ((char)uVar3 == '\0') goto LAB_10008a86;
    if (uVar9 == 0xffffffff) {
      if ((local_3c != (char *)0x0) && (local_38 != (char *)0x0)) {
        pcVar8 = param_2;
        pcVar10 = local_3c;
        do {
          if (local_38 <= pcVar10) {
            uVar9 = -(uint)(*pcVar8 != '\0') | local_48;
            goto LAB_10008a08;
          }
          pcVar5 = pcVar10 + 1;
          cVar1 = *pcVar10;
          if ((pcVar5 < local_38 & (byte)local_34 & cVar1 == '\"') == 1) {
            if (pcVar10[1] == '\"') {
              pcVar5 = pcVar10 + 2;
            }
          }
          cVar2 = *pcVar8;
          if (cVar2 == '\0') break;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar5;
        } while (cVar1 == cVar2);
      }
      uVar9 = 0xffffffff;
    }
LAB_10008a08:
    if ((bool)(local_48 == local_50 & bVar6)) {
      local_1c = local_34;
      local_20 = local_38;
      local_24 = local_3c;
    }
    local_48 = local_48 + 1;
    iVar4 = local_18 + 1;
  } while (local_44 == 1);
  if (local_44 == 0) {
    if (!(bool)(bVar6 & local_50 < local_48)) {
      return 0;
    }
    in_ECX = &local_24;
LAB_10008a72:
    uVar9 = recovered_10008cd0(in_ECX,param_3,param_4);
    uVar9 = uVar9 & 0xff;
  }
  else {
    iVar4 = local_18;
    if (uVar9 != 0xffffffff) {
      do {
        uVar3 = recovered_10008b10((int *)&local_40,&local_3c,&local_44);
        if ((char)uVar3 == '\0') goto LAB_10008a86;
        bVar6 = uVar9 == 0;
        uVar9 = uVar9 - 1;
        if (bVar6) {
          local_28 = local_34;
          local_2c = local_38;
          local_30 = local_3c;
        }
        iVar4 = iVar4 + -1;
      } while (local_44 == 1);
      if (iVar4 == 0) {
        if (local_30 == (char *)0x0) {
          return 0;
        }
        in_ECX = &local_30;
        if ((local_44 == 2) && (*local_40 != '\0')) {
          return 0;
        }
        goto LAB_10008a72;
      }
    }
LAB_10008a86:
    uVar9 = 0;
  }
  return uVar9;
}

#undef local_50
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
 * Address: 0x10008b10
 */

undefined4 recovered_10008b10(int *in_ECX,undefined4 *in_EDX,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;

  if (in_ECX == (int *)0x0) {
    return 0;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  if (in_EDX == (undefined4 *)0x0) {
    return 0;
  }
  pbVar2 = (byte *)*in_ECX;
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  *in_EDX = pbVar2;
  in_EDX[1] = pbVar2;
  *(undefined1 *)(in_EDX + 2) = 0;
  *param_3 = 0;
  bVar5 = *pbVar2;
  if (bVar5 != 0x22) {
    do {
      switch((uintptr_t)(bVar5)) {
      case 0:
      case 10:
      case 0xd:
      case 0x2c:
        goto switchD_10008ba6_caseD_0;
      default:
        bVar5 = pbVar2[1];
        pbVar2 = pbVar2 + 1;
        break;
      case 0x22:
        goto LAB_10008c10;
      }
    } while( true );
  }
  *(undefined1 *)(in_EDX + 2) = 1;
  pbVar7 = pbVar2 + 1;
  pbVar6 = pbVar7;
  do {
    if (*pbVar6 == 0x22) {
      iVar1 = 2;
      if (pbVar6[1] != 0x22) {
        pbVar2 = pbVar6 + 1;
        *in_EDX = pbVar7;
        in_EDX[1] = pbVar6;
        uVar3 = (uint)pbVar6[1];
        if (((0xd < uVar3) || ((0x2401U >> (uVar3 & 0x1f) & 1) == 0)) && (uVar3 != 0x2c)) {
LAB_10008c10:
          return 0;
        }
        goto LAB_10008bd2;
      }
    }
    else {
      iVar1 = 1;
      if (*pbVar6 == 0) {
        return 0;
      }
    }
    pbVar6 = pbVar6 + iVar1;
  } while( true );
switchD_10008ba6_caseD_0:
  in_EDX[1] = pbVar2;
  uVar3 = (uint)*pbVar2;
LAB_10008bd2:
  if ((char)uVar3 == '\n') {
    pbVar2 = pbVar2 + 1;
  }
  else {
    if (uVar3 != 0xd) {
      uVar4 = 0;
      if (uVar3 == 0x2c) {
        pbVar2 = pbVar2 + 1;
        uVar4 = 1;
      }
      goto LAB_10008c07;
    }
    pbVar6 = pbVar2 + 2;
    pbVar7 = pbVar2 + 1;
    pbVar2 = pbVar2 + 1;
    if (*pbVar7 == 10) {
      pbVar2 = pbVar6;
    }
  }
  uVar4 = 2;
LAB_10008c07:
  *in_ECX = (int)pbVar2;
  *param_3 = uVar4;
  return CONCAT31((int3)((uint)pbVar2 >> 8),1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cd0
 */

int recovered_10008cd0(undefined4 *in_ECX,undefined1 *in_EDX,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;

  if (in_ECX == (undefined4 *)0x0) {
    return 0;
  }
  pcVar5 = (char *)*in_ECX;
  if (pcVar5 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar4 = (char *)in_ECX[1];
    iVar3 = 0;
    if (pcVar4 != (char *)0x0) {
      if (pcVar5 < pcVar4) {
        iVar3 = 0;
        do {
          pcVar1 = pcVar5 + 1;
          cVar2 = *pcVar5;
          if (((pcVar1 < pcVar4 & cVar2 == '\"' & *(byte *)(in_ECX + 2)) == 1) &&
             (pcVar5[1] == '\"')) {
            pcVar1 = pcVar5 + 2;
          }
          pcVar5 = pcVar1;
          if (param_3 + -1 + (uint)(param_3 == 0) == iVar3) {
            iVar3 = 0;
            goto LAB_10008d6d;
          }
          in_EDX[iVar3] = cVar2;
          iVar3 = iVar3 + 1;
          pcVar4 = (char *)in_ECX[1];
        } while (pcVar5 < pcVar4);
      }
      in_EDX = in_EDX + iVar3;
      iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),1);
LAB_10008d6d:
      *in_EDX = 0;
    }
  }
  return iVar3;
}

