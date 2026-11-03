#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36828
 */

void recovered_36828(int param_1,int param_2,undefined1 *param_3,byte param_4,byte param_5,
               undefined1 param_6)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined1 *puVar2;

  puVar2 = &DAT_00057364;
  if (param_3 != (undefined1 *)0x0) {
    puVar2 = param_3;
  }
  iVar1 = recovered_214de((int)puVar2);
  recovered_36b17(param_1,param_2,(int)puVar2,iVar1,param_4,param_5,param_6);
  return;
}
