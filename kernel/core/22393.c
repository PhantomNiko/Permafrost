#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22393
 */

int recovered_22393(char *path,void *data,uint size)

{
  unsigned char frame[64];

  uint uVar1;

  uVar1 = recovered_223b2((int)path,(int)data,size);
  return uVar1 & 0xff;
}
