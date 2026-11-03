#include "functions.h"
#undef DAT_000445f0
#define DAT_000445f0 (*(uint8_t *)(0x445f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21d7f
 */

undefined4 FUN_00021d7f(void)

{
  unsigned char frame[64];

  DAT_000445f0 = 0;
  recovered_21d99();
  return 1;
}
