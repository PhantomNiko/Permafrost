#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x243a7
 */

uint recovered_243a7(byte *param_1)

{
  unsigned char frame[64];

  uint in_EAX = 0;
  byte *pbVar1;
  int iVar2;
  
  if (param_1 != (byte *)0x0) {
    pbVar1 = recovered_2c5f9(param_1);
    if (pbVar1 != param_1) {
      iVar2 = recovered_20ccf((int)pbVar1);
      recovered_20c3e((uint)param_1,(uint)pbVar1,iVar2 + 1);
    }
    in_EAX = recovered_20ccf((int)param_1);
    while (((in_EAX != 0 && (param_1[in_EAX - 1] - 9 < 0x18)) &&
           ((0x80001fU >> (param_1[in_EAX - 1] - 9 & 0x1f) & 1) != 0))) {
      param_1[in_EAX - 1] = 0;
      in_EAX = in_EAX - 1;
    }
  }
  return in_EAX;
}

