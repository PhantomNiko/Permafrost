#include "functions.h"
#undef DAT_00057335
#define DAT_00057335 (*(uint8_t *)(0x57335U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29baa
 */

void recovered_29baa(void)

{
  unsigned char frame[64];

  recovered_270c0();
  DAT_00057335 = 0;
  recovered_23907();
  return;
}

