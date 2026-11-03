#include "functions.h"
#define local_f9 (*(byte (*)[241])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2fa58
 */

int recovered_2fa58(char *path)

{
  unsigned char frame[297] = {0};

  uint uVar1;

  recovered_37f88((int)path,local_f9);
  uVar1 = recovered_38140(local_f9);
  return uVar1;
}
