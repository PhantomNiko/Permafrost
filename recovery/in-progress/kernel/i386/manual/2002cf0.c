/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbb0 (*(float *)(0x20c1620U))
#define _DAT_0208bbfc (*(float *)(0x20c166cU))
longlong recovered_2002cf0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  if ((param_1 != 0.0) || (uVar4 = 0, uVar7 = 0, NAN(param_1))) {
    dVar2 = -param_1;
    if (-param_1 <= param_1) {
      dVar2 = param_1;
    }
    uVar8 = 0;
    dVar3 = (double)_DAT_0208bbfc;
    uVar4 = 0x3f;
    uVar10 = 0;
    do {
      bVar1 = (byte)uVar4 & 0x1f;
      uVar6 = 1 << ((byte)uVar4 & 0x1f);
      uVar7 = uVar6;
      uVar9 = 0 << bVar1 | 1U >> 0x20 - bVar1;
      if ((uVar4 & 0x20) != 0) {
        uVar7 = 0;
        uVar9 = uVar6;
      }
      uVar6 = 0;
      uVar5 = 0;
      if (dVar3 <= dVar2) {
        uVar6 = uVar7;
        uVar5 = uVar9;
        dVar2 = dVar2 - dVar3;
      }
      uVar8 = uVar8 | uVar6;
      uVar10 = uVar10 | uVar5;
      dVar3 = dVar3 * (double)_DAT_0208bbb0;
      bVar11 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar11);
    uVar4 = -uVar8;
    uVar7 = -(uint)(uVar8 != 0) - uVar10;
    if (0.0 <= param_1) {
      uVar4 = uVar8;
      uVar7 = uVar10;
    }
  }
  return CONCAT44(uVar7,uVar4);
}
