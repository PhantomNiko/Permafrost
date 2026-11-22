/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20e6760(int param_1,undefined4 *in_RSI,undefined4 *in_RDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  uVar1 = '\0';
  if ((param_1 - 0x198U < 9) && ((0x103U >> (param_1 - 0x198U & 0x1f) & 1) != 0)) {
    uVar1 = recovered_20138b0(param_1,in_RSI,in_RDX);
  }
  return uVar1;
}
