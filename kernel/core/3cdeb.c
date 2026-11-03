#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3cdeb
 */

int recovered_3cdeb(int *container,int key,uint value)

{
  unsigned char frame[100];

  int iVar1;

  recovered_3ce24(local_34,value);
  iVar1 = recovered_28cbe(container,key,(int)local_34);
  recovered_28761(local_34);
  return iVar1;
}
