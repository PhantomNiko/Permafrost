#include "functions.h"
#undef DAT_0005e721
#define DAT_0005e721 (*(uint8_t *)(0x5e721U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3675a
 */

void recovered_3675a(void)

{
  unsigned char frame[64] = {0};

  recovered_30251(&DAT_0005e721,0x200,(undefined **)0x0,0,'\0');
  return;
}
