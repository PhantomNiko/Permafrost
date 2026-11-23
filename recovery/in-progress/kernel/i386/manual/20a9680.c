/* Recovered graphics entry; Pooka's Free Software License. */
#include "functions.h"
#define DAT_02464afc (*(volatile int *)(uintptr_t)0x2464afc)
#define DAT_02464b00 (*(volatile int *)(uintptr_t)0x2464b00)
unsigned int recovered_20a9680(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_2083a40(__builtin_return_address(0));
  while( true ) {
    iVar1 = __atomic_exchange_n(&(DAT_02464afc),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
      iVar1 = DAT_02464afc;
    } while (iVar1 != 0);
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  while( true ) {
    iVar1 = __atomic_exchange_n(&(DAT_02464b00),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    iVar1 = DAT_02464b00;
    while (iVar1 != 0) {
      iVar1 = DAT_02464b00;
    }
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  unsigned int result = recovered_20a9730();
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_02464b00 = 0;
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_02464afc = 0;
  return result;
}
