#include "functions.h"
#undef DAT_00047dfc
#define DAT_00047dfc (*(uint32_t *)(0x47dfcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a945
 */

uint recovered_2a945(void)

{
  unsigned char frame[64];

  uint extraout_EAX = 0;

  recovered_2ab9a(&DAT_00047dfc);
  return extraout_EAX;
}
