#include "functions.h"
#undef str_00059dee
#define str_00059dee (*(char (*)[1])(0x59deeU))
#define local_30 (*(undefined4 (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x53557
 */

undefined4 recovered_53557(uint param_1,char *param_2,uint *param_3,int param_4,undefined4 *param_5)

{
  unsigned char frame[96] = {0};

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
      recovered_3f39b(param_1,param_2,str_00059dee,param_2);
      return 0;
    }
    uVar3 = (uint)(byte)*param_3;
  }
  puVar1 = recovered_419dd(local_30,uVar3);
  puVar4 = local_30;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_5 = *puVar4;
    puVar4 = puVar4 + 1;
    param_5 = param_5 + 1;
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}
