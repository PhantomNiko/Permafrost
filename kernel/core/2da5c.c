#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2da5c
 */

int recovered_2da5c(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,
               undefined4 param_6,undefined1 param_7)

{
  unsigned char frame[64];

  undefined4 *puVar1;
  
  puVar1 = recovered_29539(0,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    recovered_2d892(param_2,param_3);
    recovered_28bb5(param_4,param_5);
  }
  else {
    *(undefined1 *)(puVar1 + 2) = param_7;
    puVar1[0xe] = param_2;
    puVar1[0xf] = param_3;
    puVar1[0x10] = param_4;
    puVar1[0x11] = param_5;
    puVar1[0x12] = param_6;
  }
  return (int)puVar1;
}

