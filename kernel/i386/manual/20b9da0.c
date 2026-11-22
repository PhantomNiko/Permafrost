/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c3bc8 (*(uint32_t volatile *)(0x22452b4U))
#define DAT_020c3bcc (*(uint8_t volatile *)(0x22452b8U))
void recovered_20b9da0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(DAT_020c3bc8),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
      iVar1 = DAT_020c3bc8;
    } while (iVar1 != 0);
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_020c3bcc = 0;
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_020c3bc8 = 0;
  return;
}
