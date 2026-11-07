/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8240e294(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 != 0) {
    for (uVar1 = 0; ((param_1 & 1) == 0 && (uVar1 < 0x1f)); uVar1 = uVar1 + 1) {
      param_1 = param_1 >> 1;
    }
  }
  return;
}
