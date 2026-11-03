#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20e4c
 */

uint recovered_20e4c(int *param_1)

{
  unsigned char frame[64];

  int *in_EAX = 0;
  int *piVar1;

  if (param_1 != (int *)0x0) {
    in_EAX = param_1 + 3;
    piVar1 = (int *)param_1[1];
    while (((piVar1 != (int *)0x0 && ((char)piVar1[2] == '\x01')) &&
           ((int *)((int)in_EAX + *param_1) == piVar1))) {
      *param_1 = *param_1 + *piVar1 + 0xc;
      piVar1 = (int *)piVar1[1];
      param_1[1] = (int)piVar1;
    }
  }
  return (uint)in_EAX;
}
