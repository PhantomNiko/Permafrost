#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5328e
 */

int recovered_5328e(int *container,int key,uint value)

{
  unsigned char frame[100] = {0};

  int iVar1;

  recovered_44a7c(local_34,value & 0xff);
  iVar1 = recovered_3adcc(container,key,(int)local_34);
  recovered_3352a(local_34);
  return iVar1;
}
