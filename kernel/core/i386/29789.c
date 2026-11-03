#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29789
 */

uint recovered_29789(int param_1,int param_2,byte param_3,uint param_4,byte param_5,uint param_6,
               byte param_7,uint param_8,byte param_9)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = recovered_297d3(param_1,param_4);
  uVar2 = recovered_297d3(param_2,param_6);
  uVar3 = recovered_297d3((uint)param_3,param_8);
  return uVar3 << (param_9 & 0x1f) | uVar2 << (param_7 & 0x1f) | uVar1 << (param_5 & 0x1f);
}
