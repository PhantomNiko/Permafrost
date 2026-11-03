#include "functions.h"
#undef DAT_0005dea0
#define DAT_0005dea0 (*(uint8_t *)(0x5dea0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f453
 */

undefined4 FUN_0002f453(void)

{
  unsigned char frame[64] = {0};

  DAT_0005dea0 = 0;
  recovered_2f46d();
  return 1;
}
