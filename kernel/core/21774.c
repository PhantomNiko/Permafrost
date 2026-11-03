#include "functions.h"
#undef DAT_000481e0
#define DAT_000481e0 (*(uint8_t *)(0x481e0U))
#undef DAT_000481e4
#define DAT_000481e4 (*(uint8_t *)(0x481e4U))
#undef DAT_000481e8
#define DAT_000481e8 (*(uint8_t *)(0x481e8U))
#undef _DAT_000481e0
#define _DAT_000481e0 (*(float *)(0x481e0U))
#undef _DAT_000481e4
#define _DAT_000481e4 (*(float *)(0x481e4U))
#undef _DAT_000481e8
#define _DAT_000481e8 (*(float *)(0x481e8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21774
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_21774(double param_1)

{
  unsigned char frame[64];

  float10 fVar1;
  double dVar2;

  dVar2 = recovered_2173c(param_1);
  fVar1 = (float10)dVar2 * (float10)dVar2;
  return (fVar1 * fVar1 * fVar1) / (float10)_DAT_000481e8 +
         (fVar1 * fVar1) / (float10)_DAT_000481e4 + (float10)1 + fVar1 * (float10)_DAT_000481e0;
}
