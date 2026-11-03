#include "functions.h"
#define local_6 (*(undefined2 *)(frame + 26))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45df7
 */

uint recovered_45df7(int *context,uint value)

{
  unsigned char frame[64];

  uint uVar1;

  local_6 = (undefined2)value;
  uVar1 = recovered_29c74(context,(int)&local_6,2);
  return uVar1;
}
