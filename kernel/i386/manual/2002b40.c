/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208bc30 (*(uint8_t *)(0x20c16a0U))
longlong recovered_2002b40(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_0208bc30 + (uint)(0.0 <= param_1) * 8));
}
