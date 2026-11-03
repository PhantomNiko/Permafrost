#include "functions.h"
#undef DAT_0005d9c8
#define DAT_0005d9c8 (*(int *)(0x5d9c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23140
 */

int recovered_23140(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_0005d9c8;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_0005d9c8 = param_1;
  iVar1 = FUN_000233d8(param_1);
  return iVar1;
}
