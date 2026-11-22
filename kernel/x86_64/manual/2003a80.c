/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1460 (*(double *)(0x20eae40U))
#define DAT_020a1468 (*(double *)(0x20eae48U))
#define DAT_020a1470 (*(double *)(0x20eae50U))
#define DAT_020a1478 (*(double *)(0x20eae58U))
#define DAT_020a1480 (*(double *)(0x20eae60U))
#define DAT_020a1488 (*(double *)(0x20eae68U))
#define _DAT_020a1490 (*(double *)(0x20eae70U))
#define _DAT_020a1498 (*(double *)(0x20eae78U))
#define _DAT_020a14f0 (*(uint128 *)(0x20eaed0U))
#define _DAT_020a1500 (*(uint128 *)(0x20eaee0U))
#define _DAT_020a1510 (*(uint128 *)(0x20eaef0U))
#define _DAT_020a1520 (*(uint128 *)(0x20eaf00U))
double recovered_2003a80(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint128 auVar2;
  double dVar3;
  uint128 auVar4;
  uint128 auVar5;
  double dVar6;
  uint128 auVar7;
  uint128 auVar8;

  if (0.0 < value) {
    iVar1 = 0;
    if (DAT_020a1478 < value) {
      iVar1 = 0;
      do {
        value = value * DAT_020a1460;
        iVar1 = iVar1 + 1;
      } while (DAT_020a1478 < value);
    }
    for (; value < DAT_020a1480; value = value + value) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_020a1488 + value) / (value + DAT_020a1468);
    dVar3 = dVar6 * dVar6;
    PF_PART8(auVar7, 0) = dVar3 * dVar6 * dVar3;
    PF_PART8(auVar7, 8) = dVar3 * PF_PART8(auVar7, 0);
    auVar8 = divpd(auVar7,_DAT_020a14f0);
    PF_PART8(auVar5, 0) = dVar3 * PF_PART8(auVar7, 0) * dVar3;
    PF_PART8(auVar5, 8) = dVar3 * PF_PART8(auVar5, 0);
    auVar7 = divpd(auVar5,_DAT_020a1500);
    PF_PART8(auVar4, 0) = dVar3 * PF_PART8(auVar5, 0) * dVar3;
    PF_PART8(auVar4, 8) = dVar3 * PF_PART8(auVar4, 0);
    auVar5 = divpd(auVar4,_DAT_020a1510);
    PF_PART8(auVar2, 0) = dVar3 * PF_PART8(auVar4, 0) * dVar3;
    PF_PART8(auVar2, 8) = dVar3 * PF_PART8(auVar2, 0);
    auVar2 = divpd(auVar2,_DAT_020a1520);
    dVar3 = PF_PART8(auVar2, 8) +
            PF_PART8(auVar5, 8) +
            PF_PART8(auVar7, 8) +
            PF_PART8(auVar8, 8) + (dVar6 * dVar3) / _DAT_020a1490 + dVar6 + 0.0 + PF_PART8(auVar8, 0) +
            PF_PART8(auVar7, 0) + PF_PART8(auVar5, 0) + PF_PART8(auVar2, 0);
    return dVar3 + dVar3 + (double)iVar1 * _DAT_020a1498;
  }
  return DAT_020a1470;
}
