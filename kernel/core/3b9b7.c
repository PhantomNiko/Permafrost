#include "functions.h"
#undef str_0003fc2b
#define str_0003fc2b (*(char (*)[1])(0x3fc2bU))
#define local_4c (*(undefined4 *)(frame + 28))
#define local_48 (*(undefined4 *)(frame + 32))
#define local_44 (*(undefined4 *)(frame + 36))
#define local_40 (*(undefined4 *)(frame + 40))
#define local_3c (*(undefined4 *)(frame + 44))
#define local_38 (*(undefined4 *)(frame + 48))
#define local_34 (*(undefined4 *)(frame + 52))
#define local_30 (*(undefined4 *)(frame + 56))
#define local_2c (*(undefined4 *)(frame + 60))
#define local_28 (*(undefined4 *)(frame + 64))
#define local_24 (*(undefined4 *)(frame + 68))
#define local_20 (*(undefined4 *)(frame + 72))
#define local_1c (*(undefined4 *)(frame + 76))
#define local_18 (*(undefined4 *)(frame + 80))
#define local_14 (*(undefined4 *)(frame + 84))
#define local_58 (*(undefined4 *)(frame + 16))
#define local_54 (*(undefined4 *)(frame + 20))
#define local_50 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3b9b7
 */

int recovered_3b9b7(int context,char *text)

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
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (text == (char *)0x0) {
    text = str_0003fc2b;
  }
  uVar1 = recovered_285ce(&local_34,text);
  if ((char)uVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = recovered_3b762(context,(int)&local_58,2);
  }
  recovered_28761(&local_34);
  return iVar2;
}

