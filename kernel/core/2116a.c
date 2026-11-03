#include "functions.h"
#undef DAT_0003efa0
#define DAT_0003efa0 (*(uint8_t *)(0x3efa0U))
#undef _DAT_0003efa0
#define _DAT_0003efa0 (*(float *)(0x3efa0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2116a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_2116a(double value,int *exponent)

{
  unsigned char frame[64];

  double dVar1;
  int iVar2;

  if (exponent != (int *)0x0) {
    *exponent = 0;
  }
  if ((value != 0.0) || (dVar1 = 0.0, NAN(value))) {
    dVar1 = value;
    if (value < -value) {
      dVar1 = -value;
    }
    iVar2 = 0;
    for (; 1.0 <= dVar1; dVar1 = dVar1 * (double)_DAT_0003efa0) {
      iVar2 = iVar2 + 1;
    }
    for (; (0.0 < dVar1 && (dVar1 < (double)_DAT_0003efa0)); dVar1 = dVar1 + dVar1) {
      iVar2 = iVar2 + -1;
    }
    if (exponent != (int *)0x0) {
      *exponent = iVar2;
    }
    if (value < 0.0) {
      dVar1 = -dVar1;
    }
  }
  return dVar1;
}
