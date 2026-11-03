#include "functions.h"
#define local_6 (*(undefined2 *)(frame + 26))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4809c
 */

uint recovered_4809c(int *context,uint value)

{
  unsigned char frame[64];

  uint uVar1;

  local_6 = (undefined2)value;
  uVar1 = recovered_29c6e(context,(int)&local_6,2);
  return uVar1;
}
