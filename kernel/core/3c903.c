#include "functions.h"
#undef str_00041529
#define str_00041529 (*(char (*)[1])(0x41529U))
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c903
 */

undefined4 recovered_3c903(uint param_1,char *param_2,undefined4 *param_3,uint param_4,int param_5,
               undefined4 *param_6)

{
  unsigned char frame[100];

  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;

  if (param_5 == 4) {
    *param_3 = param_4;
  }
  else if (param_5 == 2) {
    *(short *)param_3 = (short)param_4;
    param_4 = param_4 & 0xffff;
  }
  else {
    if (param_5 != 1) {
      recovered_2d241(param_1,param_2,str_00041529,param_2);
      return 0;
    }
    *(char *)param_3 = (char)param_4;
    param_4 = param_4 & 0xff;
  }
  puVar1 = recovered_2ded3(local_34,param_4);
  puVar3 = local_34;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_6 = *puVar3;
    puVar3 = puVar3 + 1;
    param_6 = param_6 + 1;
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}
