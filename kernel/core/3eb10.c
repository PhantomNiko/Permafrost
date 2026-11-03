#include "functions.h"
#undef str_0004305a
#define str_0004305a (*(char (*)[1])(0x4305aU))
#define local_3c (*(undefined4 *)(frame + 44))
#define local_38 (*(undefined4 *)(frame + 48))
#define local_34 (*(uint (*)[9])(frame + 52))
#define local_58 (*(undefined4 *)(frame + 16))
#define local_54 (*(undefined4 *)(frame + 20))
#define local_50 (*(undefined4 *)(frame + 24))
#define local_4c (*(undefined4 *)(frame + 28))
#define local_48 (*(undefined4 *)(frame + 32))
#define local_44 (*(undefined4 *)(frame + 36))
#define local_40 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3eb10
 */

int recovered_3eb10(int context,char *text)

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
    text = str_0004305a;
  }
  uVar1 = recovered_2ad2e(local_34,text);
  if ((char)uVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = recovered_3e8bb(context,(int)&local_58,2);
  }
  recovered_2aec1(local_34);
  return iVar2;
}
