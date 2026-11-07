/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_02098a6c (*(uint32_t volatile *)(0x20e3c24U))
uint recovered_200b1d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_02098a6c;
  return iVar1 + 7U >> 3;
}
