#include "functions.h"
#undef _DAT_0002c8c8
#define _DAT_0002c8c8 (*(float *)(0x2c8c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20e45
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_20e45(double value,int *exponent)

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
    for (; 1.0 <= dVar1; dVar1 = dVar1 * (double)_DAT_0002c8c8) {
      iVar2 = iVar2 + 1;
    }
    for (; (0.0 < dVar1 && (dVar1 < (double)_DAT_0002c8c8)); dVar1 = dVar1 + dVar1) {
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

