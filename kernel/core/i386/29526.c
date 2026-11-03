#include "functions.h"
#undef DAT_000504c0
#define DAT_000504c0 (*(uint8_t *)(0x504c0U))
#undef DAT_000504c2
#define DAT_000504c2 (*(uint8_t *)(0x504c2U))
#undef DAT_000504c6
#define DAT_000504c6 (*(uint8_t *)(0x504c6U))
#undef DAT_000505b8
#define DAT_000505b8 (*(int *)(0x505b8U))
#undef _DAT_000504c2
#define _DAT_000504c2 (*(uint32_t *)(0x504c2U))
#undef _DAT_000504c6
#define _DAT_000504c6 (*(uint16_t *)(0x504c6U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29526
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_29526(void)

{
  unsigned char frame[64];

  if (DAT_000505b8 != 0) {
    recovered_21203(DAT_000505b8);
    DAT_000505b8 = 0;
  }
  DAT_000504c0 = 0;
  _DAT_000504c2 = 0;
  _DAT_000504c6 = 0;
  return;
}
