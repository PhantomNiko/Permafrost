#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#undef DAT_00047600
#define DAT_00047600 (*(uint8_t *)(0x47600U))
#undef DAT_00047e80
#define DAT_00047e80 (*(uint8_t *)(0x47e80U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22932
 */

int recovered_22932(char *text)

{
  unsigned char frame[64];

  char *pcVar1;

  DAT_00047600 = 0;
  DAT_00047e80 = 0;
  pcVar1 = &DAT_00042614;
  if (text != (char *)0x0) {
    pcVar1 = text;
  }
  recovered_22965(pcVar1);
  recovered_21d99();
  return 1;
}
