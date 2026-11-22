/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8240ad5c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    return 0x38;
  }
  uVar1 = recovered_824052e4();
  return (ulong)(uVar1 >> 9);
}
