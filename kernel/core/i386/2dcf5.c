#include "functions.h"
#define local_88 (*(int *)(frame + 540))
#define local_84 (*(int *)(frame + 544))
#define local_50 (*(undefined1 (*)[8])(frame + 596))
#define local_48 (*(int *)(frame + 604))
#define local_44 (*(int *)(frame + 608))
#define local_40 (*(int *)(frame + 612))
#define local_294 (*(undefined1 (*)[512])(frame + 16))
#define local_94 (*(undefined1 (*)[8])(frame + 528))
#define local_8c (*(int *)(frame + 536))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dcf5
 */

int recovered_2dcf5(uint a,uint b,uint c)

{
  unsigned char frame[708];

  bool bVar1;
  int iVar2;

  bVar1 = recovered_2b362(a,b,(int)local_294,0x200);
  iVar2 = 0;
  if (bVar1) {
    recovered_21348((int)local_94,(int)local_294,0x44);
    iVar2 = recovered_213cb((int)local_94,0x46258,8);
    if ((((iVar2 == 0) && (local_8c == 1)) && (local_88 == 0x200)) && (local_84 != 0)) {
      iVar2 = 1;
    }
    else {
      recovered_21348((int)local_50,(int)local_294,0x44);
      iVar2 = recovered_213cb((int)local_50,0x46250,8);
      if (((iVar2 == 0) && (local_48 == 1)) && ((local_44 == 0x200 && (local_40 != 0)))) {
        iVar2 = 2;
      }
      else {
        iVar2 = recovered_2dddc((int)local_294,c,(undefined4 *)0x0,(uint *)0x0,(uint *)0x0,
                                (uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,
                                (uint *)0x0);
      }
    }
  }
  return iVar2;
}
