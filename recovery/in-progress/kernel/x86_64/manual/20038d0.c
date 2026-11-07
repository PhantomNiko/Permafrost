/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1460 (*(double *)(0x20eae40U))
#define DAT_020a1468 (*(double *)(0x20eae48U))
double recovered_20038d0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < value) {
    dVar1 = value;
    if (value <= DAT_020a1468) {
      dVar1 = DAT_020a1468;
    }
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
    dVar1 = (value / dVar1 + dVar1) * DAT_020a1460;
  }
  return dVar1;
}
