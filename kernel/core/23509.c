#include "functions.h"
#undef DAT_0005d9cc
#define DAT_0005d9cc (*(uint32_t * *)(0x5d9ccU))
#define in_stack_00000004 (*(int *)(frame + 40))
#define iStack_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23509
 */

void FUN_00023509(void)

{
  unsigned char frame[68] = {0};


  recovered_2344b(in_stack_00000004);
  recovered_230cf();
  if (DAT_0005d9cc != (undefined4 *)0x0) {
    DAT_0005d9cc = (undefined4 *)*DAT_0005d9cc;
  }
  recovered_23540(iStack_14);
  return;
}
