#include "functions.h"
#undef DAT_000524c0
#define DAT_000524c0 (*(uint8_t *)(0x524c0U))
#undef DAT_000524c2
#define DAT_000524c2 (*(uint8_t *)(0x524c2U))
#undef DAT_000524c6
#define DAT_000524c6 (*(uint8_t *)(0x524c6U))
#undef DAT_000525b8
#define DAT_000525b8 (*(int *)(0x525b8U))
#undef _DAT_000524c2
#define _DAT_000524c2 (*(uint32_t *)(0x524c2U))
#undef _DAT_000524c6
#define _DAT_000524c6 (*(uint16_t *)(0x524c6U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29520
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_29520(void)

{
  unsigned char frame[64];

  if (DAT_000525b8 != 0) {
    recovered_21203(DAT_000525b8);
    DAT_000525b8 = 0;
  }
  DAT_000524c0 = 0;
  _DAT_000524c2 = 0;
  _DAT_000524c6 = 0;
  return;
}
