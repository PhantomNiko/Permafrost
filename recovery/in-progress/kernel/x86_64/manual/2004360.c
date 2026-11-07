/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1468 (*(double *)(0x20eae48U))
float recovered_2004360(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)value < (double)(int)value);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
  if (value < 0.0) {
    uVar1 = -(ulong)(dVar2 < (double)value);
    dVar2 = (double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_020a1468 + dVar2) & uVar1);
  }
  return (float)dVar2;
}
