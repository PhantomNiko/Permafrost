/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbe4 (*(float *)(0x20c1654U))
#define _DAT_0208bbe8 (*(float *)(0x20c1658U))
#define _DAT_0208bbec (*(float *)(0x20c165cU))
#define _DAT_0208bc10 (*(double *)(0x20c1680U))
#define _DAT_0208bc18 (*(double *)(0x20c1688U))
#define _DAT_0208bc20 (*(double *)(0x20c1690U))
#define _DAT_0208bc28 (*(double *)(0x20c1698U))
float recovered_2003520(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_0208bc10 < value; value = value + (float)_DAT_0208bc18) {
  }
  for (; value < (float)_DAT_0208bc20; value = value + (float)_DAT_0208bc28) {
  }
  fVar1 = value * value;
  return ((fVar1 * fVar1 * fVar1) / _DAT_0208bbec +
         (fVar1 * fVar1) / _DAT_0208bbe8 + fVar1 / _DAT_0208bbe4 + 1.0) * value;
}
