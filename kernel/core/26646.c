#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26646
 */

void recovered_26646(int param_1,int param_2,undefined1 *param_3,undefined1 param_4,undefined1 param_5,
               undefined1 param_6)

{
  unsigned char frame[64];

  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_0003f254;
  if (param_3 != (undefined1 *)0x0) {
    puVar2 = param_3;
  }
  iVar1 = recovered_20ff4((int)puVar2);
  recovered_26933(param_1,param_2,(int)puVar2,iVar1,param_4,param_5,param_6);
  return;
}

