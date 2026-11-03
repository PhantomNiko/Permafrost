#include "functions.h"
#undef DAT_00047600
#define DAT_00047600 (*(uint8_t *)(0x47600U))
#undef DAT_00047e80
#define DAT_00047e80 (*(uint8_t *)(0x47e80U))
#undef DAT_00047e88
#define DAT_00047e88 (*(uint8_t *)(0x47e88U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25048
 */

int recovered_25048(void)

{
  unsigned char frame[64];

  FUN_00020537();
  DAT_00047e88 = 0;
  DAT_00047e80 = 0;
  DAT_00047600 = 0;
  recovered_24ed9(0xff00ff,0,0x50);
  recovered_25089();
  recovered_21d99();
  return 1;
}
