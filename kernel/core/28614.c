#include "functions.h"
#undef DAT_0004b4a0
#define DAT_0004b4a0 (*(uint8_t *)(0x4b4a0U))
#undef DAT_0004b4a2
#define DAT_0004b4a2 (*(uint8_t *)(0x4b4a2U))
#undef DAT_0004b4a6
#define DAT_0004b4a6 (*(uint8_t *)(0x4b4a6U))
#undef DAT_0004b598
#define DAT_0004b598 (*(int *)(0x4b598U))
#undef _DAT_0004b4a2
#define _DAT_0004b4a2 (*(uint32_t *)(0x4b4a2U))
#undef _DAT_0004b4a6
#define _DAT_0004b4a6 (*(uint16_t *)(0x4b4a6U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28614
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_28614(void)

{
  unsigned char frame[64];

  if (DAT_0004b598 != 0) {
    recovered_20dfd(DAT_0004b598);
    DAT_0004b598 = 0;
  }
  DAT_0004b4a0 = 0;
  _DAT_0004b4a2 = 0;
  _DAT_0004b4a6 = 0;
  return;
}
