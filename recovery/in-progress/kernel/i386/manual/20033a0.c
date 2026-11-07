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
float recovered_20033a0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;

  fVar1 = _DAT_0208bbb4;
  if (0.0 < value) {
    iVar10 = 0;
    if (_DAT_0208bbb8 < value) {
      iVar10 = 0;
      do {
        value = value * _DAT_0208bbb0;
        iVar10 = iVar10 + 1;
      } while (_DAT_0208bbb8 < value);
    }
    for (; value < _DAT_0208bbbc; value = value + value) {
      iVar10 = iVar10 + -1;
    }
    fVar1 = (value + -1.0) / (value + 1.0);
    fVar2 = fVar1 * fVar1;
    fVar3 = fVar1 * fVar2 * fVar2;
    fVar4 = fVar3 * fVar2;
    fVar5 = fVar4 * fVar2;
    fVar6 = fVar5 * fVar2;
    fVar7 = fVar6 * fVar2;
    fVar8 = fVar7 * fVar2;
    fVar9 = fVar8 * fVar2;
    fVar1 = (fVar9 * fVar2) / _DAT_0208bbe0 +
            fVar9 / _DAT_0208bbdc +
            fVar8 / _DAT_0208bbd8 +
            fVar7 / _DAT_0208bbd4 +
            fVar6 / _DAT_0208bbd0 +
            fVar5 / _DAT_0208bbcc +
            fVar4 / _DAT_0208bbc8 +
            fVar3 / _DAT_0208bbc4 + (fVar1 * fVar2) / _DAT_0208bbc0 + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)_DAT_0208bc08;
  }
  return fVar1;
}
