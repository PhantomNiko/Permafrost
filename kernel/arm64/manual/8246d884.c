/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8246d884(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = recovered_82400de8((char *)param_1);
    uVar1 = (uVar1 + 0xe) / 0xf;
  }
  return uVar1;
}
