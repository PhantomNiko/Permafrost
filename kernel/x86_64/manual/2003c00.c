/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1468 (*(double *)(0x20eae48U))
#define DAT_020a14a0 (*(double *)(0x20eae80U))
#define DAT_020a14a8 (*(double *)(0x20eae88U))
#define DAT_020a14b0 (*(double *)(0x20eae90U))
#define DAT_020a14b8 (*(double *)(0x20eae98U))
#define _DAT_020a14c0 (*(double *)(0x20eaea0U))
#define _DAT_020a1540 (*(uint128 *)(0x20eaf20U))
double recovered_2003c00(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_020a14a0 < value; value = value + DAT_020a14a8) {
  }
  for (; value < DAT_020a14b0; value = value + DAT_020a14b8) {
  }
  dVar1 = value * value;
  PF_PART8(auVar2, 0) = dVar1 * dVar1;
  PF_PART8(auVar2, 8) = dVar1 * PF_PART8(auVar2, 0);
  auVar2 = divpd(auVar2,_DAT_020a1540);
  return ((dVar1 / _DAT_020a14c0 + DAT_020a1468 + PF_PART8(auVar2, 0)) - PF_PART8(auVar2, 8)) * value;
}
