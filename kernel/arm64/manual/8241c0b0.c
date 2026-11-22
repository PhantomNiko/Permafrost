/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_8241c0b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x30) = 0;
  recovered_8240facc(*(void **)(param_1 + 0x28));
  recovered_8241c144((undefined8 *)(param_1 + 0x10));
  return param_1;
}
