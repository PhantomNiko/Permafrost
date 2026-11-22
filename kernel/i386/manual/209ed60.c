/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbf0 (*(float *)(0x20c1660U))
#define _DAT_0208bbf4 (*(float *)(0x20c1664U))
#define _DAT_0208bbf8 (*(float *)(0x20c1668U))
#define _DAT_0208e2a0 (*(float *)(0x20c504cU))
#define _DAT_0208e2b0 (*(float *)(0x20c505cU))
#define _DAT_0208e2b4 (*(float *)(0x20c5060U))
#define _DAT_0208e2b8 (*(float *)(0x20c5064U))
longdouble recovered_209ed60(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_0208e2a0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_0208e2b0;
    } while ((longdouble)_DAT_0208e2a0 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_0208e2b4) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_0208e2b8;
    } while (lVar1 < (longdouble)_DAT_0208e2b4);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)_DAT_0208bbf8 +
         (lVar1 * lVar1) / (longdouble)_DAT_0208bbf4 +
         (longdouble)1 + lVar1 * (longdouble)_DAT_0208bbf0;
}
