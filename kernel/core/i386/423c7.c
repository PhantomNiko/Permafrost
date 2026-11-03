#include "functions.h"
#undef str_00046d8b
#define str_00046d8b (*(char (*)[1])(0x46d8bU))
#define local_58 (*(undefined4 *)(frame + 16))
#define local_54 (*(undefined4 *)(frame + 20))
#define local_50 (*(undefined4 *)(frame + 24))
#define local_4c (*(undefined4 *)(frame + 28))
#define local_48 (*(undefined4 *)(frame + 32))
#define local_44 (*(undefined4 *)(frame + 36))
#define local_40 (*(undefined4 *)(frame + 40))
#define local_3c (*(undefined4 *)(frame + 44))
#define local_38 (*(undefined4 *)(frame + 48))
#define local_34 (*(uint (*)[9])(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x423c7
 */

int recovered_423c7(int context,char *text)

{
  unsigned char frame[136];

  uint uVar1;
  int iVar2;

  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  local_34[7] = 0;
  local_34[8] = 0;
  if (text == (char *)0x0) {
    text = str_00046d8b;
  }
  uVar1 = recovered_2c654(local_34,text);
  if ((char)uVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = recovered_42172(context,(int)&local_58,2);
  }
  recovered_2603e(local_34);
  return iVar2;
}
