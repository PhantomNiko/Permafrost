/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0215bc58 (*(uint32_t volatile *)(0x215bc58U))
#define DAT_0215bc5c (*(uint32_t volatile *)(0x215bc5cU))


void * recovered_2029b10(void *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong size;

  size = param_2 + (param_2 == 0);
  if (param_1 == (void *)0x0) {
    puVar3 = recovered_2029940(param_2);
    return puVar3;
  }
  piVar2 = (int *)0x0;
  if (param_2 < 0xffffffec) {
    while( true ) {
      iVar1 = __atomic_exchange_n(&(DAT_0215bc58),1,__ATOMIC_SEQ_CST);
      if (iVar1 == 0) break;
      do {
        iVar1 = DAT_0215bc58;
      } while (iVar1 != 0);
    }
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    if (*(int *)((int)param_1 + -8) == 0x574d414c) {
      piVar2 = recovered_2001860((int *)((int)param_1 + -0x14),size + 0x14);
      if (piVar2 == (int *)0x0) {
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_0215bc58 = 0;
        piVar2 = (int *)0x0;
      }
      else {
        if (piVar2 != (int *)((int)param_1 + -0x14)) {
          puVar3 = &DAT_0215bc5c;
          if (*piVar2 != 0) {
            puVar3 = (undefined4 *)(*piVar2 + 4);
          }
          *puVar3 = piVar2;
          if ((undefined4 *)piVar2[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar2[1] = piVar2;
          }
        }
        piVar2[4] = size;
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_0215bc58 = 0;
        piVar2 = piVar2 + 5;
      }
    }
    else {
      piVar2 = recovered_2001860(param_1,size);
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      DAT_0215bc58 = 0;
    }
  }
  return piVar2;
}
#undef DAT_0215bc58
#undef DAT_0215bc5c
