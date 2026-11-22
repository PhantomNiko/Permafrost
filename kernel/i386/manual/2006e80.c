/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020987e8 (*(uint32_t volatile *)(0x20d9d34U))
int recovered_2006e80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_020987e8;
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = DAT_020987e8;
  return iVar1;
}
