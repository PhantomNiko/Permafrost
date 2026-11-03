#include "functions.h"
#undef DAT_00047600
#define DAT_00047600 (*(uint8_t *)(0x47600U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21d7f
 */

undefined4 FUN_00021d7f(void)

{
  unsigned char frame[64];

  DAT_00047600 = 0;
  recovered_21d99();
  return 1;
}
