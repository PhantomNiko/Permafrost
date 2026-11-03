#include "functions.h"
#undef DAT_00081ff4
#define DAT_00081ff4 (*(uint8_t *)(0x81ff4U))
#undef DAT_00081ff5
#define DAT_00081ff5 (*(uint8_t *)(0x81ff5U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b1fc
 */

undefined1 * recovered_2b1fc(byte param_1)

{
  unsigned char frame[64];

  int iVar1;

  if ((param_1 & 0xf8) == 0x70) {
    for (iVar1 = 0; iVar1 != 0x60; iVar1 = iVar1 + 0xc) {
      if (((&DAT_00081ff4)[iVar1] == '\x01') && ((&DAT_00081ff5)[iVar1] == param_1)) {
        return &DAT_00081ff4 + iVar1;
      }
    }
  }
  return (undefined1 *)0x0;
}
