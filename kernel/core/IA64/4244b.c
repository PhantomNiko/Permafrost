#include "functions.h"
#undef str_00046de0
#define str_00046de0 (*(char (*)[1])(0x46de0U))
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
 * Address: 0x4244b
 */

int recovered_4244b(int context,char *text)

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
    text = str_00046de0;
  }
  uVar1 = recovered_2c6ca(local_34,text);
  if ((char)uVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = recovered_421f6(context,(int)&local_58,2);
  }
  recovered_26052(local_34);
  return iVar2;
}
