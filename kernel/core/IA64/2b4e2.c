#include "functions.h"
#undef DAT_00046398
#define DAT_00046398 (*(uint8_t *)(0x46398U))
#undef DAT_0004ce10
#define DAT_0004ce10 (*(int *)(0x4ce10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b4e2
 */

void recovered_2b4e2(int param_1,char *param_2)

{
  unsigned char frame[64];

  int iVar1;
  int iVar2;

  recovered_213af((int)param_2,0,0x100);
  iVar2 = param_1 * 0x108;
  recovered_21de7(param_2,0xf0,&DAT_00046398,DAT_0004ce10 + iVar2);
  iVar1 = DAT_0004ce10;
  *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(DAT_0004ce10 + 0x100 + iVar2);
  *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(iVar1 + 0xf8 + iVar2);
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(iVar1 + 0xfc + iVar2);
  return;
}
