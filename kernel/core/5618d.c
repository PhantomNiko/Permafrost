#include "functions.h"
#define local_6 (*(undefined2 *)(frame + 26))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5618d
 */

uint recovered_5618d(int *context,uint value)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  local_6 = (undefined2)value;
  uVar1 = recovered_37787(context,(int)&local_6,2);
  return uVar1;
}
