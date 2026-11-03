#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x53225
 */

void recovered_53225(int param_1,uint *param_2,char param_3,char param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 != (uint *)0x0) {
    if ((((param_4 == '\x0e') || (param_3 == '\x7f')) || (param_3 == '\b')) && (*param_2 != 0)) {
      uVar1 = *param_2 - 1;
      *param_2 = uVar1;
    }
    else {
      if (0x5e < (byte)(param_3 - 0x20U)) {
        return;
      }
      if (param_4 == '\x01') {
        return;
      }
      if (param_3 == '\x1b') {
        return;
      }
      if (param_3 == '\r') {
        return;
      }
      if (param_3 == '\n') {
        return;
      }
      if (param_4 == '\x1c') {
        return;
      }
      uVar1 = *param_2;
      if (0x1fe < uVar1) {
        return;
      }
      *param_2 = uVar1 + 1;
      *(char *)(param_1 + uVar1) = param_3;
      uVar1 = *param_2;
    }
    *(undefined1 *)(param_1 + uVar1) = 0;
  }
  return;
}
