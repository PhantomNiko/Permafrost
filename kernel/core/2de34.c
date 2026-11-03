#include "functions.h"
#define in_stack_00000008 (*(uint *)(frame + 40))
#define in_stack_0000000c (*(undefined1 * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2de34
 */

void recovered_2de34(undefined4 *param_1)

{
  unsigned char frame[64] = {0};


  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00025e74(param_1,in_stack_00000008,in_stack_0000000c);
  return;
}
