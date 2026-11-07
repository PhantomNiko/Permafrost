/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbb0 (*(float *)(0x20c1620U))
#define _DAT_0208bbb4 (*(float *)(0x20c1624U))
#define _DAT_0208bbb8 (*(float *)(0x20c1628U))
#define _DAT_0208bbbc (*(float *)(0x20c162cU))
#define _DAT_0208bbc0 (*(float *)(0x20c1630U))
#define _DAT_0208bbc4 (*(float *)(0x20c1634U))
#define _DAT_0208bbc8 (*(float *)(0x20c1638U))
#define _DAT_0208bbcc (*(float *)(0x20c163cU))
#define _DAT_0208bbd0 (*(float *)(0x20c1640U))
#define _DAT_0208bbd4 (*(float *)(0x20c1644U))
#define _DAT_0208bbd8 (*(float *)(0x20c1648U))
#define _DAT_0208bbdc (*(float *)(0x20c164cU))
#define _DAT_0208bbe0 (*(float *)(0x20c1650U))
#define _DAT_0208bc08 (*(double *)(0x20c1678U))
double recovered_2002a20(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;

  if (value <= 0.0) {
    dVar1 = (double)_DAT_0208bbb4;
  }
  else {
    iVar10 = 0;
    if ((double)_DAT_0208bbb8 < value) {
      iVar10 = 0;
      do {
        value = value * (double)_DAT_0208bbb0;
        iVar10 = iVar10 + 1;
      } while ((double)_DAT_0208bbb8 < value);
    }
    for (; value < (double)_DAT_0208bbbc; value = value + value) {
      iVar10 = iVar10 + -1;
    }
    dVar1 = (value + -1.0) / (value + 1.0);
    dVar2 = dVar1 * dVar1;
    dVar3 = dVar1 * dVar2 * dVar2;
    dVar4 = dVar3 * dVar2;
    dVar5 = dVar4 * dVar2;
    dVar6 = dVar5 * dVar2;
    dVar7 = dVar6 * dVar2;
    dVar8 = dVar7 * dVar2;
    dVar9 = dVar8 * dVar2;
    dVar1 = (dVar9 * dVar2) / (double)_DAT_0208bbe0 +
            dVar9 / (double)_DAT_0208bbdc +
            dVar8 / (double)_DAT_0208bbd8 +
            dVar7 / (double)_DAT_0208bbd4 +
            dVar6 / (double)_DAT_0208bbd0 +
            dVar5 / (double)_DAT_0208bbcc +
            dVar4 / (double)_DAT_0208bbc8 +
            dVar3 / (double)_DAT_0208bbc4 + (dVar1 * dVar2) / (double)_DAT_0208bbc0 + dVar1 + 0.0;
    dVar1 = dVar1 + dVar1 + (double)iVar10 * _DAT_0208bc08;
  }
  return dVar1;
}
