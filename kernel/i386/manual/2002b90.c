/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbe4 (*(float *)(0x20c1654U))
#define _DAT_0208bbe8 (*(float *)(0x20c1658U))
#define _DAT_0208bbec (*(float *)(0x20c165cU))
#define _DAT_0208bc10 (*(double *)(0x20c1680U))
#define _DAT_0208bc18 (*(double *)(0x20c1688U))
#define _DAT_0208bc20 (*(double *)(0x20c1690U))
#define _DAT_0208bc28 (*(double *)(0x20c1698U))
double recovered_2002b90(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (; _DAT_0208bc10 < value; value = value + _DAT_0208bc18) {
  }
  for (; value < _DAT_0208bc20; value = value + _DAT_0208bc28) {
  }
  dVar1 = value * value;
  return ((dVar1 * dVar1 * dVar1) / (double)_DAT_0208bbec +
         (dVar1 * dVar1) / (double)_DAT_0208bbe8 + dVar1 / (double)_DAT_0208bbe4 + 1.0) * value;
}
