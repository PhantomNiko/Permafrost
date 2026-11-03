#include "functions.h"
#undef DAT_00047e89
#define DAT_00047e89 (*(uint8_t *)(0x47e89U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27d2f
 */

void recovered_27d2f(void)

{
  unsigned char frame[64];

  recovered_22a27(&DAT_00047e89,0x200,(char *)0x0,0,'\0');
  return;
}
