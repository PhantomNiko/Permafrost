#include "functions.h"
#define local_294 (*(undefined1 (*)[512])(frame + 16))
#define local_94 (*(undefined1 (*)[8])(frame + 528))
#define local_8c (*(int *)(frame + 536))
#define local_88 (*(int *)(frame + 540))
#define local_84 (*(int *)(frame + 544))
#define local_50 (*(undefined1 (*)[8])(frame + 596))
#define local_48 (*(int *)(frame + 604))
#define local_44 (*(int *)(frame + 608))
#define local_40 (*(int *)(frame + 612))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c7e5
 */

int recovered_2c7e5(uint a,uint b,uint c)

{
  unsigned char frame[708];

  undefined4 uVar1;
  int iVar2;

  uVar1 = recovered_2a1fc(a,b,(int)local_294,0x200);
  iVar2 = 0;
  if ((char)uVar1 != '\0') {
    recovered_20f42((int)local_94,(int)local_294,0x44);
    iVar2 = recovered_20fc5((int)local_94,0x42608,8);
    if ((((iVar2 == 0) && (local_8c == 1)) && (local_88 == 0x200)) && (local_84 != 0)) {
      iVar2 = 1;
    }
    else {
      recovered_20f42((int)local_50,(int)local_294,0x44);
      iVar2 = recovered_20fc5((int)local_50,0x42600,8);
      if (((iVar2 == 0) && (local_48 == 1)) && ((local_44 == 0x200 && (local_40 != 0)))) {
        iVar2 = 2;
      }
      else {
        iVar2 = recovered_2c8cc((int)local_294,c,(undefined4 *)0x0,(uint *)0x0,(uint *)0x0,
                                (uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,
                                (uint *)0x0);
      }
    }
  }
  return iVar2;
}
