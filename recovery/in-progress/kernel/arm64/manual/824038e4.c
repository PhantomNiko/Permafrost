/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a2c8 (*(uint32_t volatile *)(0x824866e0U))
int recovered_824038e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_4045a2c8;
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = DAT_4045a2c8;
  return iVar1;
}
