#include "functions.h"
#define in_stack_00000008 (*(uint *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x274ba
 */

uint recovered_274ba(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  uint extraout_EAX = 0;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  recovered_25ec4(param_1,in_stack_00000008);
  return extraout_EAX;
}
