#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dd34
 */

int recovered_2dd34(void *this,double param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  float10 fVar3;

  iVar1 = (**(code **)(**(int **)**(undefined4 **)this + 0x20))(*(int **)**(undefined4 **)this);
  if (iVar1 == 1) {
    uVar2 = recovered_21c18(param_1);
    return uVar2;
  }
  fVar3 = recovered_21828(param_1);
  return (int)ROUND(fVar3);
}
