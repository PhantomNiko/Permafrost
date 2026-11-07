/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1530 (*(uint8_t *)(0x20eaf10U))
ulonglong recovered_2004540(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_020a1530 + (ulong)(0.0 <= param_1) * 8));
}
