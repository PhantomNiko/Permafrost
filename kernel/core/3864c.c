#include "functions.h"
#undef DAT_0005e924
#define DAT_0005e924 (*(int *)(0x5e924U))
#undef PTR_DAT_0005d074
#define PTR_DAT_0005d074 (*(uint8_t * *)(0x5d074U))
#undef PTR_DAT_0005d078
#define PTR_DAT_0005d078 (*(uint8_t * *)(0x5d078U))
#undef PTR_DAT_0005d07c
#define PTR_DAT_0005d07c (*(uint8_t * *)(0x5d07cU))
#undef PTR_DAT_0005d080
#define PTR_DAT_0005d080 (*(uint8_t * *)(0x5d080U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3864c
 */

bool recovered_3864c(byte param_1,uint param_2,int param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  pcVar2 = recovered_38896(param_1);
  if (pcVar2 == (char *)0x0) {
    uVar4 = 0;
    while( true ) {
      uVar5 = param_4 - uVar4;
      bVar1 = param_4 < uVar4 || uVar5 == 0;
      if (param_4 < uVar4 || uVar5 == 0) {
        return bVar1;
      }
      if (DAT_0005e924 == 0) break;
      uVar6 = 0x7000 - (uVar4 & 0x1ff);
      if (uVar5 < uVar6) {
        uVar6 = uVar5;
      }
      *(uint *)PTR_DAT_0005d074 = (uint)param_1;
      *(uint *)PTR_DAT_0005d080 = param_2;
      *(uint *)PTR_DAT_0005d078 = uVar4;
      *(uint *)PTR_DAT_0005d07c = uVar6;
      iVar3 = FUN_00020222();
      if (iVar3 == 0) {
        return bVar1;
      }
      recovered_21348(param_3 + uVar4,uVar4 & 0x1ff | 0x10000,uVar6);
      uVar4 = uVar4 + uVar6;
    }
    return bVar1;
  }
  if ((*pcVar2 == '\x01') && (param_3 != 0 || param_4 == 0)) {
    if (param_4 == 0) {
      return true;
    }
    uVar5 = param_2 * 0x200;
    uVar6 = *(uint *)(pcVar2 + 4) >> 0x17;
    uVar4 = (param_2 >> 0x17) + (uint)CARRY4(uVar5,param_4);
    if (uVar4 <= uVar6 && (uint)(*(uint *)(pcVar2 + 4) << 9 < uVar5 + param_4) <= uVar6 - uVar4) {
      recovered_21348(param_3,uVar5 + *(int *)(pcVar2 + 8),param_4);
      return true;
    }
  }
  return false;
}
