#include "functions.h"
#define local_f9 (*(byte (*)[241])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22772
 */

uint recovered_22772(int param_1)

{
  unsigned char frame[297];

  uint uVar1;

  recovered_2a4eb(param_1,local_f9);
  uVar1 = recovered_2a6a3(local_f9);
  return uVar1;
}
