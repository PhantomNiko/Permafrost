/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

int recovered_8240ace0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + (param_1 & 1);
  }
  return iVar1;
}
