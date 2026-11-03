#include "functions.h"
#define local_20 (*(undefined4 * *)(frame + 16))
#define local_1c (*(uint *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(undefined4 * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x423c7
 */

int recovered_423c7(int unused,int context,int path,uint size)

{
  unsigned char frame[80];

  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  int iVar4;

  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_14 = (undefined4 *)unused;
  uVar2 = recovered_2e27a(path,size,(int *)&local_20,&local_1c,&local_18);
  if ((char)uVar2 == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar3 = recovered_31726(context,0,0,local_20,local_1c,local_18,1);
    if (iVar3 != 0) {
      bVar1 = recovered_2c1b1(local_14,iVar3);
      iVar4 = CONCAT31(extraout_var,bVar1);
    }
  }
  return iVar4;
}
