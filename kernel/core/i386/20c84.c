#include "functions.h"
#undef DAT_0004c60c
#define DAT_0004c60c (*(uint8_t *)(0x4c60cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20c84
 */

void recovered_20c84(void)

{
  unsigned char frame[64];

  DAT_0004c60c = 0;
  recovered_20c94();
  return;
}
