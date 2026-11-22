/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1460 (*(double *)(0x20eae40U))
#define DAT_020a1468 (*(double *)(0x20eae48U))
#define DAT_020a1488 (*(double *)(0x20eae68U))
#define DAT_020a14c8 (*(double *)(0x20eaea8U))
double recovered_201d880(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_2003840(value);
  if (DAT_020a1460 <= value - dVar1) {
    dVar1 = dVar1 + DAT_020a1468;
  }
  else if (value - dVar1 <= DAT_020a14c8) {
    dVar1 = dVar1 + DAT_020a1488;
  }
  return dVar1;
}
