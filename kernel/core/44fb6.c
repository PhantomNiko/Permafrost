#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44fb6
 */

int recovered_44fb6(int *container,int key,uint value)

{
  unsigned char frame[100];

  int iVar1;

  recovered_36797(local_34,value & 0xff);
  iVar1 = recovered_2cacf(container,key,(int)local_34);
  recovered_25fea(local_34);
  return iVar1;
}
