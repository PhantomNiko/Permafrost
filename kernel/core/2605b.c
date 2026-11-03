#include "functions.h"
#define local_1c (*(uint (*)[2])(frame + 16))
#define local_14 (*(int * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2605b
 */

int recovered_2605b(int param_1,int param_2)

{
  unsigned char frame[76];

  undefined4 uVar1;
  int iVar2;
  
  uVar1 = recovered_26135(param_1,local_1c);
  iVar2 = 0;
  if (((char)uVar1 != '\0') && (local_1c[0] != 0)) {
    iVar2 = recovered_26458(*local_14,param_2);
    recovered_26419(local_1c);
  }
  return iVar2;
}

