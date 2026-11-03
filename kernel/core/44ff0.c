#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44ff0
 */

int recovered_44ff0(int *container,int key,uint value)

{
  unsigned char frame[100];

  int iVar1;

  recovered_36bce(local_34,value);
  iVar1 = recovered_2cacf(container,key,(int)local_34);
  recovered_25fea(local_34);
  return iVar1;
}
