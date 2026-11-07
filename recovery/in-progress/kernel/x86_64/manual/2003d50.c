/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_020a14e0 (*(uint64_t *)(0x20eaec0U))
double recovered_2003d50(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_020a14e0 ^ (ulong)value);
  if ((double)(_DAT_020a14e0 ^ (ulong)value) <= value) {
    dVar1 = value;
  }
  return dVar1;
}
