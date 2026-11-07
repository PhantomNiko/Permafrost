/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1460 (*(double *)(0x20eae40U))
#define DAT_020a1468 (*(double *)(0x20eae48U))
#define DAT_020a1478 (*(double *)(0x20eae58U))
#define DAT_020a1480 (*(double *)(0x20eae60U))
#define DAT_020a1488 (*(double *)(0x20eae68U))
#define DAT_020a1574 (*(float *)(0x20eaf54U))
#define _DAT_020a1490 (*(double *)(0x20eae70U))
#define _DAT_020a1498 (*(double *)(0x20eae78U))
#define _DAT_020a14f0 (*(uint128 *)(0x20eaed0U))
#define _DAT_020a1500 (*(uint128 *)(0x20eaee0U))
#define _DAT_020a1510 (*(uint128 *)(0x20eaef0U))
#define _DAT_020a1520 (*(uint128 *)(0x20eaf00U))
#define _DAT_020a1578 (*(float *)(0x20eaf58U))
float recovered_20043f0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  uint128 auVar3;
  double dVar4;
  uint128 auVar5;
  uint128 auVar6;
  uint128 auVar7;
  uint128 auVar8;

  if (0.0 < value) {
    dVar2 = (double)value;
    iVar1 = 0;
    if (_DAT_020a1578 < value) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_020a1460;
        iVar1 = iVar1 + 1;
      } while (DAT_020a1478 < dVar2);
    }
    for (; dVar2 < DAT_020a1480; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_020a1488 + dVar2) / (dVar2 + DAT_020a1468);
    dVar2 = dVar4 * dVar4;
    PF_PART8(auVar3, 0) = dVar2 * dVar4 * dVar2;
    PF_PART8(auVar3, 8) = dVar2 * PF_PART8(auVar3, 0);
    auVar6 = divpd(auVar3,_DAT_020a14f0);
    PF_PART8(auVar5, 0) = dVar2 * PF_PART8(auVar3, 0) * dVar2;
    PF_PART8(auVar5, 8) = dVar2 * PF_PART8(auVar5, 0);
    auVar3 = divpd(auVar5,_DAT_020a1500);
    PF_PART8(auVar8, 0) = dVar2 * PF_PART8(auVar5, 0) * dVar2;
    PF_PART8(auVar8, 8) = dVar2 * PF_PART8(auVar8, 0);
    auVar5 = divpd(auVar8,_DAT_020a1510);
    PF_PART8(auVar7, 0) = dVar2 * PF_PART8(auVar8, 0) * dVar2;
    PF_PART8(auVar7, 8) = dVar2 * PF_PART8(auVar7, 0);
    auVar8 = divpd(auVar7,_DAT_020a1520);
    dVar2 = PF_PART8(auVar8, 8) +
            PF_PART8(auVar5, 8) +
            PF_PART8(auVar3, 8) +
            PF_PART8(auVar6, 8) + (dVar4 * dVar2) / _DAT_020a1490 + dVar4 + 0.0 + PF_PART8(auVar6, 0) +
            PF_PART8(auVar3, 0) + PF_PART8(auVar5, 0) + PF_PART8(auVar8, 0);
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_020a1498);
  }
  return DAT_020a1574;
}
