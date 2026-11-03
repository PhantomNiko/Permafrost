#include "functions.h"
#undef DAT_00042730
#define DAT_00042730 (*(uint8_t *)(0x42730U))
#undef DAT_00047dfc
#define DAT_00047dfc (*(int *)(0x47dfcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a289
 */

void recovered_2a289(int param_1,char *param_2)

{
  unsigned char frame[64];

  int iVar1;
  int iVar2;

  recovered_20fa9((int)param_2,0,0x100);
  iVar2 = param_1 * 0x108;
  recovered_219e1(param_2,0xf0,&DAT_00042730,DAT_00047dfc + iVar2);
  iVar1 = DAT_00047dfc;
  *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(DAT_00047dfc + 0x100 + iVar2);
  *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(iVar1 + 0xf8 + iVar2);
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(iVar1 + 0xfc + iVar2);
  return;
}
