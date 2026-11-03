#include "functions.h"
#define local_f9 (*(byte (*)[241])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22772
 */

int recovered_22772(char *path)

{
  unsigned char frame[297];

  uint uVar1;

  recovered_2a46f((int)path,local_f9);
  uVar1 = recovered_2a627(local_f9);
  return uVar1;
}
