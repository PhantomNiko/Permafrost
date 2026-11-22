/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020addd0 (*(uint32_t volatile *)(0x21027f0U))
uint recovered_20084e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = DAT_020addd0;
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = DAT_020addd0;
  return uVar2;
}
