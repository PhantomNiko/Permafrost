#include "functions.h"
#undef DAT_0005d9cc
#define DAT_0005d9cc (*(uint32_t *)(0x5d9ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x234e0
 */

void recovered_234e0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_0005d9cc;
  if (DAT_0005d9cc == param_1) {
    puVar2 = &DAT_0005d9cc;
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      puVar1 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != param_1);
  }
  *puVar2 = *param_1;
  return;
}
