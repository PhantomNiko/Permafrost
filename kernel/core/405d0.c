#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x405d0
 */

int recovered_405d0(int *container,int key,uint value)

{
  unsigned char frame[100];

  int iVar1;

  recovered_338d9(local_34,value & 0xff);
  iVar1 = recovered_2b41e(container,key,(int)local_34);
  recovered_2aec1(local_34);
  return iVar1;
}
