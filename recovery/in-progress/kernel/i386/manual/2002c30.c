/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbf0 (*(float *)(0x20c1660U))
#define _DAT_0208bbf4 (*(float *)(0x20c1664U))
#define _DAT_0208bbf8 (*(float *)(0x20c1668U))
#define _DAT_0208bc10 (*(double *)(0x20c1680U))
#define _DAT_0208bc18 (*(double *)(0x20c1688U))
#define _DAT_0208bc20 (*(double *)(0x20c1690U))
#define _DAT_0208bc28 (*(double *)(0x20c1698U))
double recovered_2002c30(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (; _DAT_0208bc10 < value; value = value + _DAT_0208bc18) {
  }
  for (; value < _DAT_0208bc20; value = value + _DAT_0208bc28) {
  }
  dVar1 = value * value;
  return (dVar1 * dVar1 * dVar1) / (double)_DAT_0208bbf8 +
         (dVar1 * dVar1) / (double)_DAT_0208bbf4 + dVar1 * (double)_DAT_0208bbf0 + 1.0;
}
