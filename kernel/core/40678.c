#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x40678
 */

int recovered_40678(int *container,int key,uint value)

{
  unsigned char frame[100];

  int iVar1;

  recovered_406b1(local_34,value);
  iVar1 = recovered_2b41e(container,key,(int)local_34);
  recovered_2aec1(local_34);
  return iVar1;
}
