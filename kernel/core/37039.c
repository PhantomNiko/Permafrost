#include "functions.h"
#undef DAT_00061d4c
#define DAT_00061d4c (*(uint8_t *)(0x61d4cU))
#undef DAT_00061d4e
#define DAT_00061d4e (*(uint8_t *)(0x61d4eU))
#undef DAT_00061d52
#define DAT_00061d52 (*(uint8_t *)(0x61d52U))
#undef DAT_00061e44
#define DAT_00061e44 (*(int *)(0x61e44U))
#undef _DAT_00061d4e
#define _DAT_00061d4e (*(uint32_t *)(0x61d4eU))
#undef _DAT_00061d52
#define _DAT_00061d52 (*(uint16_t *)(0x61d52U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37039
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_37039(void)

{
  unsigned char frame[64] = {0};

  if (DAT_00061e44 != 0) {
    recovered_21203(DAT_00061e44);
    DAT_00061e44 = 0;
  }
  DAT_00061d4c = 0;
  _DAT_00061d4e = 0;
  _DAT_00061d52 = 0;
  return;
}
