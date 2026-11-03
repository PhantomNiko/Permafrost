#include "functions.h"
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3967b
 */

void recovered_3967b(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  recovered_213af((int)param_2,0,0x100);
  iVar2 = param_1 * 0x10c;
  recovered_22362(param_2,0xf0,&DAT_00057391,DAT_0005e69c + iVar2);
  iVar1 = DAT_0005e69c;
  *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(DAT_0005e69c + 0x100 + iVar2);
  *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(iVar1 + 0xf8 + iVar2);
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(iVar1 + 0xfc + iVar2);
  return;
}
