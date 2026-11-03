#include "functions.h"
#undef DAT_00048638
#define DAT_00048638 (*(uint8_t *)(0x48638U))
#undef DAT_0004ee10
#define DAT_0004ee10 (*(int *)(0x4ee10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b466
 */

void recovered_2b466(int param_1,char *param_2)

{
  unsigned char frame[64];

  int iVar1;
  int iVar2;

  recovered_213af((int)param_2,0,0x100);
  iVar2 = param_1 * 0x108;
  recovered_21de7(param_2,0xf0,&DAT_00048638,DAT_0004ee10 + iVar2);
  iVar1 = DAT_0004ee10;
  *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(DAT_0004ee10 + 0x100 + iVar2);
  *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(iVar1 + 0xf8 + iVar2);
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(iVar1 + 0xfc + iVar2);
  return;
}
