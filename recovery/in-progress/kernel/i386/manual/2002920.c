/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbb0 (*(float *)(0x20c1620U))
double recovered_2002920(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = 0.0;
  if (0.0 < value) {
    dVar1 = value;
    if (value < 1.0) {
      dVar1 = 1.0;
    }
    dVar2 = (double)_DAT_0208bbb0;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar2 = dVar2 * (value / dVar1 + dVar1);
  }
  return dVar2;
}
