#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x30301
 */

bool recovered_30301(undefined4 *param_1)

{
  unsigned char frame[64];

  undefined4 *puVar1;

  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  puVar1 = recovered_20df4(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    recovered_2aec1(param_1);
    *param_1 = 7;
    param_1[6] = puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}
