#include "functions.h"
#undef DAT_0005d7b8
#define DAT_0005d7b8 (*(uint8_t *)(0x5d7b8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20c84
 */

void recovered_20c84(void)

{
  unsigned char frame[64] = {0};

  DAT_0005d7b8 = 0;
  recovered_20c94();
  return;
}
