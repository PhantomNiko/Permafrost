#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20b3d
 */

uint recovered_20b3d(int *param_1)

{
  unsigned char frame[64];

  int *in_EAX = 0;
  
  if (param_1 != (int *)0x0) {
    in_EAX = (int *)param_1[1];
    while ((in_EAX != (int *)0x0 && ((char)in_EAX[2] == '\x01'))) {
      *param_1 = *in_EAX + *param_1 + 0xc;
      in_EAX = (int *)in_EAX[1];
      param_1[1] = (int)in_EAX;
    }
  }
  return (uint)in_EAX;
}

