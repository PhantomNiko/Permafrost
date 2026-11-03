#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22799
 */

int recovered_22799(char *path,void *data,uint size)

{
  unsigned char frame[64];

  uint uVar1;

  uVar1 = recovered_227b8((int)path,(int)data,size);
  return uVar1 & 0xff;
}
