/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1468 (*(double *)(0x20eae48U))
#define DAT_020a14a0 (*(double *)(0x20eae80U))
#define DAT_020a14a8 (*(double *)(0x20eae88U))
#define DAT_020a14b0 (*(double *)(0x20eae90U))
#define DAT_020a14b8 (*(double *)(0x20eae98U))
#define _DAT_020a14c0 (*(double *)(0x20eaea0U))
#define _DAT_020a1540 (*(uint128 *)(0x20eaf20U))
float recovered_2004570(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)value; DAT_020a14a0 < dVar1; dVar1 = dVar1 + DAT_020a14a8) {
  }
  for (; dVar1 < DAT_020a14b0; dVar1 = dVar1 + DAT_020a14b8) {
  }
  dVar2 = dVar1 * dVar1;
  PF_PART8(auVar3, 0) = dVar2 * dVar2;
  PF_PART8(auVar3, 8) = dVar2 * PF_PART8(auVar3, 0);
  auVar3 = divpd(auVar3,_DAT_020a1540);
  return (float)(((dVar2 / _DAT_020a14c0 + DAT_020a1468 + PF_PART8(auVar3, 0)) - PF_PART8(auVar3, 8)) * dVar1);
}
