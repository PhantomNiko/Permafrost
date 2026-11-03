#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44dae
 */

void recovered_44dae(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64];

  if (param_1 != 0) {
    recovered_213af(param_1,0,0x10);
    *(undefined2 *)(param_1 + 1) = 0xfffe;
    *(undefined1 *)(param_1 + 3) = 0xff;
    *(undefined1 *)(param_1 + 4) = param_2;
    *(undefined2 *)(param_1 + 5) = 0xfffe;
    *(undefined1 *)(param_1 + 7) = 0xff;
    *(char *)(param_1 + 8) = (char)param_3;
    *(char *)(param_1 + 9) = (char)((uint)param_3 >> 8);
    *(char *)(param_1 + 10) = (char)((uint)param_3 >> 0x10);
    *(char *)(param_1 + 0xb) = (char)((uint)param_3 >> 0x18);
    *(char *)(param_1 + 0xc) = (char)param_4;
    *(char *)(param_1 + 0xd) = (char)((uint)param_4 >> 8);
    *(char *)(param_1 + 0xe) = (char)((uint)param_4 >> 0x10);
    *(char *)(param_1 + 0xf) = (char)((uint)param_4 >> 0x18);
  }
  return;
}
