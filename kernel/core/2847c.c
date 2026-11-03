#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2847c
 */

undefined4 recovered_2847c(char param_1)

{
  unsigned char frame[64];

  undefined3 in_register_00000005;
  int iVar1;

  if (9 < (byte)(param_1 - 0x30U) && 0x19 < (byte)(param_1 + 0xbfU)) {
    iVar1 = (int)param_1;
    if ((iVar1 - 0x21U < 0x20) && ((0x800011fdU >> (iVar1 - 0x21U & 0x1f) & 1) != 0)) {
      return CONCAT31(in_register_00000005,1);
    }
    if ((2 < iVar1 - 0x5eU) && ((3 < iVar1 - 0x7bU || (iVar1 - 0x7bU == 1)))) {
      return 0;
    }
  }
  return CONCAT31(in_register_00000005,1);
}
