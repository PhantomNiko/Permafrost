#include "functions.h"
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c11f
 */

int recovered_2c11f(int *param_1,int *param_2,char param_3)

{
  unsigned char frame[68];

  bool bVar1;
  uint uVar2;
  int iVar3;
  
  local_14 = 0;
  if (param_2 == (int *)0x0 || param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 8) {
    iVar3 = 0;
    if ((param_1[7] != 0) && (bVar1 = recovered_288cc(param_2,&local_14), bVar1)) {
      iVar3 = recovered_28989(param_1[7],local_14,param_3);
    }
    recovered_20aee(local_14);
    return iVar3;
  }
  if (*param_1 != 7) {
    return 0;
  }
  if (*param_2 != 1) {
    return 0;
  }
  uVar2 = param_2[1];
  if ((int)uVar2 < 1) {
    return 0;
  }
  iVar3 = param_1[6];
  if (iVar3 == 0) {
    return 0;
  }
  if (*(uint *)(iVar3 + 4) < uVar2) {
    if (param_3 == '\0') {
      return 0;
    }
    uVar2 = recovered_2b0c3(iVar3,uVar2);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    iVar3 = param_1[6];
    uVar2 = param_2[1];
  }
  return *(int *)(iVar3 + 0xc) + uVar2 * 0x20 + -0x20;
}

