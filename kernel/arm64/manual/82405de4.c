/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_82405de4(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)((uint)param_1 < 0x21) & (uint)(0x101018000 >> (param_1 & 0x3f));
}
