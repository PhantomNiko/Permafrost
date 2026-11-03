#include "functions.h"
#define in_stack_00000008 (*(undefined4 * *)(frame + 40))
#define in_stack_00000004 (*(byte * *)(frame + 36))
#define in_stack_0000000c (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23856
 */

void FUN_00023856(void)

{
  unsigned char frame[64] = {0};


  FUN_0002373c(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}
