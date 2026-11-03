#include "functions.h"
#define local_8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x561ac
 */

uint recovered_561ac(int *container,uint value)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  local_8 = value;
  uVar1 = recovered_37787(container,(int)&local_8,4);
  return uVar1;
}
