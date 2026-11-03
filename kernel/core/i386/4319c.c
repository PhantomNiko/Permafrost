#include "functions.h"
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4319c
 */

int recovered_4319c(int *container,int key,uint value)

{
  unsigned char frame[100];

  int iVar1;

  recovered_351e1(local_34,value);
  iVar1 = recovered_2ca0b(container,key,(int)local_34);
  recovered_2603e(local_34);
  return iVar1;
}
