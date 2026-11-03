#include "functions.h"
#define local_10c (*(undefined1 (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28655
 */

undefined4 recovered_28655(int param_1,int param_2)

{
  unsigned char frame[316];

  bool bVar1;
  char cVar2;
  uint uVar3;
  
  if (((param_2 != 0 && param_1 != 0) && (bVar1 = recovered_2861c((char *)param_1), bVar1)) &&
     (cVar2 = recovered_2b1d0(param_1,(int)local_10c,0x100), cVar2 != '\0')) {
    uVar3 = recovered_24c66((undefined4 *)param_2,local_10c);
    return uVar3;
  }
  return 0;
}

