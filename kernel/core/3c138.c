#include "functions.h"
#define local_48 (*(int *)(frame + 608))
#define local_44 (*(int *)(frame + 612))
#define local_298 (*(undefined1 (*)[512])(frame + 16))
#define local_98 (*(undefined1 (*)[68])(frame + 528))
#define local_54 (*(undefined1 (*)[8])(frame + 596))
#define local_4c (*(int *)(frame + 604))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c138
 */

int recovered_3c138(uint a,uint b,uint c)

{
  unsigned char frame[712] = {0};

  bool bVar1;
  int iVar2;
  undefined4 uVar3;

  bVar1 = recovered_3864c((byte)a,b,(int)local_298,0x200);
  iVar2 = 0;
  if (bVar1) {
    recovered_21348((int)local_98,(int)local_298,0x44);
    uVar3 = recovered_3a168((int)local_98,c,(uint *)0x0,(uint *)0x0);
    if ((char)uVar3 == '\0') {
      recovered_21348((int)local_54,(int)local_298,0x44);
      iVar2 = recovered_213fb((int)local_54,0x57350,8);
      if ((((iVar2 == 0) && (local_4c == 1)) && (local_48 == 0x200)) && (local_44 != 0)) {
        iVar2 = 2;
      }
      else {
        iVar2 = recovered_3c207((int)local_298,c,(undefined4 *)0x0,(uint *)0x0,(uint *)0x0,
                                (uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,
                                (uint *)0x0);
      }
    }
    else {
      iVar2 = 1;
    }
  }
  return iVar2;
}
