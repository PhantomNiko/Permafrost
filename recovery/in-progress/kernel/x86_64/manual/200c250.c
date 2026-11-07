/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ae0b4 (*(uint32_t volatile *)(0x210cc34U))
uint recovered_200c250(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_020ae0b4;
  return iVar1 + 7U >> 3;
}
