#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2fa7f
 */

int recovered_2fa7f(char *path,void *data,uint size)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_2fa9e((int)path,(int)data,size);
  return uVar1 & 0xff;
}
