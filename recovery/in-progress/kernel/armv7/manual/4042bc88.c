/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_4042bc88(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined8 uVar1;

  uVar1 = VectorSignedToFloat((int)*(short *)(param_1 + 0x72),(byte)(in_fpscr >> 0x16) & 3);
  return uVar1;
}
