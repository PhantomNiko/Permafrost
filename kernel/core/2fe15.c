#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2fe15
 */

int recovered_2fe15(char *path)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_2fe2b((int)path);
  return uVar1 & 0xff;
}
