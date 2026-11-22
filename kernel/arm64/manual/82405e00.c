/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047afbc (*(uint32_t volatile *)(0x825421ecU))
uint recovered_82405e00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_4047afbc;
  return iVar1 + 7U >> 3;
}
