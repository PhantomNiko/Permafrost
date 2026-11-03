#include "functions.h"
#undef str_0004adcf
#define str_0004adcf (*(char (*)[1])(0x4adcfU))
#define local_34 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x452d7
 */

undefined4 recovered_452d7(uint param_1,char *param_2,undefined4 *param_3,uint param_4,int param_5,
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
      recovered_310b6(param_1,param_2,str_0004adcf,param_2);
      return 0;
    }
    *(char *)param_3 = (char)param_4;
    param_4 = param_4 & 0xff;
  }
  puVar1 = recovered_336f8(local_34,param_4);
  puVar3 = local_34;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_6 = *puVar3;
    puVar3 = puVar3 + 1;
    param_6 = param_6 + 1;
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}
