#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
#undef DAT_0004c614
#define DAT_0004c614 (*(uint8_t *)(0x4c614U))
#undef DAT_0004ce94
#define DAT_0004ce94 (*(uint8_t *)(0x4ce94U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22d38
 */

int recovered_22d38(char *text)

{
  unsigned char frame[64];

  char *pcVar1;

  DAT_0004c614 = 0;
  DAT_0004ce94 = 0;
  pcVar1 = &DAT_00046264;
  if (text != (char *)0x0) {
    pcVar1 = text;
  }
  recovered_22d6b(pcVar1);
  recovered_2219f();
  return 1;
}
