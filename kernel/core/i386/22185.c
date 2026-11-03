#include "functions.h"
#undef DAT_0004c614
#define DAT_0004c614 (*(uint8_t *)(0x4c614U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22185
 */

undefined4 FUN_00022185(void)

{
  unsigned char frame[64];

  DAT_0004c614 = 0;
  recovered_2219f();
  return 1;
}
