#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x431b7
 */

int recovered_431b7(int *container,int key,uint value)

{
  unsigned char frame[100];

  int iVar1;

  recovered_35219(local_34,value);
  iVar1 = recovered_2ca43(container,key,(int)local_34);
  recovered_26052(local_34);
  return iVar1;
}
