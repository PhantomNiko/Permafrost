#include "functions.h"
#undef str_0002d681
#define str_0002d681 (*(char (*)[1])(0x2d681U))
#define local_30 (*(undefined4 (*)[8])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2bdd2
 */

undefined4 __fastcall
recovered_2bdd2(int *param_1,char *param_2,undefined4 *param_3,uint param_4,int param_5,
               undefined4 *param_6)

{
  unsigned char frame[96];

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
      recovered_2609c((uint)param_1,param_2,str_0002d681,param_2);
      return 0;
    }
    *(char *)param_3 = (char)param_4;
    param_4 = param_4 & 0xff;
  }
  puVar1 = recovered_28508(local_30,param_4);
  puVar3 = local_30;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_6 = *puVar3;
    puVar3 = puVar3 + 1;
    param_6 = param_6 + 1;
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}

