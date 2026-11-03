#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22b27
 */

int recovered_22b27(char *path)

{
  unsigned char frame[64];

  uint uVar1;

  uVar1 = recovered_22b3d((int)path);
  return uVar1 & 0xff;
}
