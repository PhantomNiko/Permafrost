#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20f1a
 */

void recovered_20f1a(uint *param_1,int param_2)

{
  unsigned char frame[64];

  uint uVar1;
  int *piVar2;

  if (param_1 != (uint *)0x0) {
    uVar1 = param_2 + 0xfU & 0xfffffff0;
    if (uVar1 + 0x1c <= *param_1) {
      piVar2 = (int *)((int)param_1 + uVar1 + 0xc);
      *piVar2 = (*param_1 - uVar1) + -0xc;
      *(uint *)((int)param_1 + uVar1 + 0x10) = param_1[1];
      *(undefined1 *)((int)param_1 + uVar1 + 0x14) = 1;
      *param_1 = uVar1;
      param_1[1] = (uint)piVar2;
    }
  }
  return;
}
