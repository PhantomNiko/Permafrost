/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b93a4 (*(uint32_t volatile *)(0x2130238U))
void recovered_20193f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_020b93a4;
  DAT_020b93a4 = iVar1 + 1;
  return;
}
