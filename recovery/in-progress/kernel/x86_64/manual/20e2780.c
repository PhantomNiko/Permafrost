/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020da9f0 (*(uint32_t volatile *)(0x22741c4U))
#define DAT_020da9f4 (*(uint8_t volatile *)(0x22741c8U))
void recovered_20e2780(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(DAT_020da9f0),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
      iVar1 = DAT_020da9f0;
    } while (iVar1 != 0);
  }
  DAT_020da9f4 = 0;
  DAT_020da9f0 = 0;
  return;
}
