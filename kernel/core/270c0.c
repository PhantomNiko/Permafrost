#include "functions.h"
#undef DAT_00057334
#define DAT_00057334 (*(uint8_t *)(0x57334U))
#undef DAT_00057336
#define DAT_00057336 (*(uint8_t *)(0x57336U))
#undef DAT_0005733a
#define DAT_0005733a (*(uint8_t *)(0x5733aU))
#undef DAT_0005742c
#define DAT_0005742c (*(int *)(0x5742cU))
#undef _DAT_00057336
#define _DAT_00057336 (*(uint32_t *)(0x57336U))
#undef _DAT_0005733a
#define _DAT_0005733a (*(uint16_t *)(0x5733aU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x270c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_270c0(void)

{
  unsigned char frame[64];

  if (DAT_0005742c != 0) {
    recovered_20dfd(DAT_0005742c);
    DAT_0005742c = 0;
  }
  DAT_00057334 = 0;
  _DAT_00057336 = 0;
  _DAT_0005733a = 0;
  return;
}
