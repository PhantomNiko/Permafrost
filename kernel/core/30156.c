#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
#undef DAT_0005dea0
#define DAT_0005dea0 (*(uint8_t *)(0x5dea0U))
#undef DAT_0005e720
#define DAT_0005e720 (*(uint8_t *)(0x5e720U))
#undef DAT_0005e721
#define DAT_0005e721 (*(uint8_t *)(0x5e721U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30156
 */

int recovered_30156(char *text)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  DAT_0005dea0 = 0;
  DAT_0005e720 = 0;
  DAT_0005e721 = 0;
  pcVar1 = &DAT_00057364;
  if (text != (char *)0x0) {
    pcVar1 = text;
  }
  recovered_3018f(pcVar1);
  recovered_2f46d();
  return 1;
}
