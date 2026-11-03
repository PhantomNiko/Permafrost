#include "functions.h"
#define local_8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45e16
 */

uint recovered_45e16(int *container,uint value)

{
  unsigned char frame[64];

  uint uVar1;

  local_8 = value;
  uVar1 = recovered_29c74(container,(int)&local_8,4);
  return uVar1;
}
