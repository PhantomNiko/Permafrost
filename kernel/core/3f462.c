#include "functions.h"
#define local_1c (*(uint (*)[2])(frame + 16))
#define local_14 (*(int * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f462
 */

int recovered_3f462(int context,char *name)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = recovered_3f4f7(context,local_1c);
  iVar2 = 0;
  if (((char)uVar1 != '\0') && (local_1c[0] != 0)) {
    iVar2 = recovered_3b7e1(*local_14,(int)name);
    recovered_3f7dd(local_1c);
  }
  return iVar2;
}
