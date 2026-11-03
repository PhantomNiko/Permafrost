#include "functions.h"
#undef str_00048a29
#define str_00048a29 (*(char (*)[1])(0x48a29U))
#define local_30 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4342b
 */

undefined4 recovered_4342b(uint param_1,char *param_2,uint *param_3,int param_4,undefined4 *param_5)

{
  unsigned char frame[96];

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
      recovered_30ed3(param_1,param_2,str_00048a29,param_2);
      return 0;
    }
    uVar3 = (uint)(byte)*param_3;
  }
  puVar1 = recovered_31b59(local_30,uVar3);
  puVar4 = local_30;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_5 = *puVar4;
    puVar4 = puVar4 + 1;
    param_5 = param_5 + 1;
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}
