#include "functions.h"
#define local_250 (*(undefined1 (*)[512])(frame + 16))
#define local_50 (*(undefined1 (*)[8])(frame + 528))
#define local_48 (*(int *)(frame + 536))
#define local_44 (*(int *)(frame + 540))
#define local_40 (*(int *)(frame + 544))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a18c
 */

int recovered_2a18c(uint a,uint b,uint c)

{
  unsigned char frame[640];

  undefined4 uVar1;
  int iVar2;
  
  uVar1 = recovered_29b1d(a,b,(int)local_250,0x200);
  iVar2 = 0;
  if ((char)uVar1 != '\0') {
    recovered_20f42((int)local_50,(int)local_250,0x44);
    iVar2 = recovered_20fc5((int)local_50,0x3f248,8);
    if ((((iVar2 == 0) && (local_48 == 1)) && (local_44 == 0x200)) && (local_40 != 0)) {
      iVar2 = 1;
    }
    else {
      iVar2 = recovered_2a226((int)local_250,c,(undefined4 *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0
                              ,(uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0);
    }
  }
  return iVar2;
}

