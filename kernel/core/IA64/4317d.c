#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4317d
 */

int recovered_4317d(int *container,int key,uint value)

{
  unsigned char frame[100];

  int iVar1;

  recovered_34e4c(local_34,value & 0xff);
  iVar1 = recovered_2ca43(container,key,(int)local_34);
  recovered_26052(local_34);
  return iVar1;
}
