#include "functions.h"
#undef str_0002d635
#define str_0002d635 (*(char (*)[1])(0x2d635U))
#define local_2c (*(undefined4 (*)[8])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2bbeb
 */

undefined4 __fastcall
recovered_2bbeb(int *param_1,char *param_2,uint *param_3,int param_4,undefined4 *param_5)

{
  unsigned char frame[92];

  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_4 == 4) {
    uVar3 = *param_3;
  }
  else if (param_4 == 2) {
    uVar3 = (uint)(ushort)*param_3;
  }
  else {
    if (param_4 != 1) {
      recovered_2609c((uint)param_1,param_2,str_0002d635,param_2);
      return 0;
    }
    uVar3 = (uint)(byte)*param_3;
  }
  puVar1 = recovered_28508(local_2c,uVar3);
  puVar4 = local_2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_5 = *puVar4;
    puVar4 = puVar4 + 1;
    param_5 = param_5 + 1;
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}

