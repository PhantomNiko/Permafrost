#include "functions.h"
#undef DAT_000522b0
#define DAT_000522b0 (*(uint8_t *)(0x522b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28c39
 */

void recovered_28c39(void)

{
  unsigned char frame[64];

  recovered_22e2d(&DAT_000522b0,0x200,(undefined **)0x0,0,'\0');
  return;
}
