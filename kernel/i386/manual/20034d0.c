/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208bc30 (*(uint8_t *)(0x20c16a0U))
#define local_14 (*(undefined4 *)(frame + 28))
undefined4 recovered_20034d0(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_0208bc30 + (uint)(0.0 <= param_1) * 8));
  return local_14;
}
