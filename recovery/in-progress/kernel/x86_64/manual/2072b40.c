/* Reused after matching normalized native instructions and named data references. */
/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_2072b40(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}
