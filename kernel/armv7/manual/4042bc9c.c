/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_4042bc9c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined8 uVar1;

  uVar1 = VectorUnsignedToFloat
                    ((int)*(short *)(param_1 + 0x74) & ~((int)*(short *)(param_1 + 0x74) >> 0x1f),
                     (byte)(in_fpscr >> 0x16) & 3);
  return uVar1;
}
