#include "functions.h"
#undef DAT_00093880
#define DAT_00093880 (*(uint8_t *)(0x93880U))
#undef DAT_00093881
#define DAT_00093881 (*(uint8_t *)(0x93881U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x38896
 */

undefined1 * recovered_38896(byte param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if ((param_1 & 0xf8) == 0x70) {
    for (iVar1 = 0; iVar1 != 0x60; iVar1 = iVar1 + 0xc) {
      if (((&DAT_00093880)[iVar1] == '\x01') && ((&DAT_00093881)[iVar1] == param_1)) {
        return &DAT_00093880 + iVar1;
      }
    }
  }
  return (undefined1 *)0x0;
}
