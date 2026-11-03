#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27dfd
 */

void recovered_27dfd(int param_1,int param_2,undefined1 *param_3,undefined1 param_4,undefined1 param_5,
               undefined1 param_6)

{
  unsigned char frame[64];

  int iVar1;
  undefined1 *puVar2;

  puVar2 = &DAT_00042614;
  if (param_3 != (undefined1 *)0x0) {
    puVar2 = param_3;
  }
  iVar1 = recovered_20ff4((int)puVar2);
  recovered_280ea(param_1,param_2,(int)puVar2,iVar1,param_4,param_5,param_6);
  return;
}
