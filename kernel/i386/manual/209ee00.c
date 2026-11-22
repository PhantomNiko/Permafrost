/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbb0 (*(float *)(0x20c1620U))
#define _DAT_0208bbc0 (*(float *)(0x20c1630U))
#define _DAT_0208bbc4 (*(float *)(0x20c1634U))
#define _DAT_0208bbc8 (*(float *)(0x20c1638U))
#define _DAT_0208bbcc (*(float *)(0x20c163cU))
#define _DAT_0208bbd0 (*(float *)(0x20c1640U))
#define _DAT_0208e2bc (*(float *)(0x20c5068U))
#define _DAT_0208e2c0 (*(float *)(0x20c506cU))
longdouble recovered_209ee00(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;

  lVar2 = (longdouble)param_1;
  lVar3 = (longdouble)0;
  if (lVar3 < lVar2) {
    iVar1 = 0;
    if ((longdouble)_DAT_0208e2bc <= lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)_DAT_0208bbb0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)_DAT_0208e2bc <= lVar2);
    }
    lVar3 = (longdouble)1;
    for (; lVar2 < lVar3; lVar2 = lVar2 + lVar2) {
      iVar1 = iVar1 + -1;
    }
    lVar6 = (-lVar3 + lVar2) / (lVar2 + lVar3);
    lVar3 = lVar6 * lVar6;
    lVar2 = lVar3 * lVar6 * lVar3;
    lVar4 = lVar2 * lVar3;
    lVar5 = lVar4 * lVar3;
    lVar3 = (lVar5 * lVar3) / (longdouble)_DAT_0208bbd0 +
            lVar5 / (longdouble)_DAT_0208bbcc +
            lVar4 / (longdouble)_DAT_0208bbc8 +
            lVar2 / (longdouble)_DAT_0208bbc4 + (lVar3 * lVar6) / (longdouble)_DAT_0208bbc0 + lVar6;
    lVar3 = lVar3 + lVar3 + (longdouble)iVar1 * (longdouble)_DAT_0208e2c0;
  }
  return lVar3;
}
