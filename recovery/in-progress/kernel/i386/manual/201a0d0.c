/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbb0 (*(float *)(0x20c1620U))
#define _DAT_0208bbf0 (*(float *)(0x20c1660U))
double recovered_201a0d0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_2002870(value);
  if ((double)_DAT_0208bbb0 <= value - dVar2) {
    dVar1 = 1.0;
  }
  else {
    if ((double)_DAT_0208bbf0 < value - dVar2) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar1 + dVar2;
}
