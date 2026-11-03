#include "functions.h"
#undef DAT_0004e610
#define DAT_0004e610 (*(uint32_t *)(0x4e610U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21203
 */

uint recovered_21203(int param_1)

{
  unsigned char frame[64];

  int *in_EAX = 0;
  int *piVar1;
  uint uVar2;
  int *piVar3;

  if (param_1 != 0) {
    recovered_20c94();
    *(undefined1 *)(param_1 + -4) = 1;
    recovered_21252((int *)(param_1 + -0xc));
    piVar3 = &DAT_0004e610;
    in_EAX = (int *)0x0;
    do {
      piVar1 = in_EAX;
      in_EAX = (int *)*piVar3;
      if (in_EAX == (int *)0x0) break;
      piVar3 = in_EAX + 1;
    } while (in_EAX != (int *)(param_1 + -0xc));
    if ((piVar1 != (int *)0x0) && ((char)piVar1[2] == '\x01')) {
      uVar2 = recovered_21252(piVar1);
      return uVar2;
    }
  }
  return (uint)in_EAX;
}
