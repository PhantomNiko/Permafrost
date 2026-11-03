#include "functions.h"
#undef DAT_000475f8
#define DAT_000475f8 (*(uint8_t *)(0x475f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x208a2
 */

void recovered_208a2(void)

{
  unsigned char frame[64];

  DAT_000475f8 = 0;
  recovered_208b2();
  return;
}
