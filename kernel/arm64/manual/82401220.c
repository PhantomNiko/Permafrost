/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044d4b8 (*(double *)(0x82472a58U))
double recovered_82401220(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_82401274(value);
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / 120.0 + (dVar1 * dVar1 * dVar1) / DAT_4044d4b8);
}
