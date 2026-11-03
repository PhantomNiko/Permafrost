#include "functions.h"
#undef DAT_000502b0
#define DAT_000502b0 (*(uint8_t *)(0x502b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28c3f
 */

void recovered_28c3f(void)

{
  unsigned char frame[64];

  recovered_22e2d(&DAT_000502b0,0x200,(undefined **)0x0,0,'\0');
  return;
}
