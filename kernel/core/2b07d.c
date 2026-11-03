#include "functions.h"
#undef DAT_0004ee98
#define DAT_0004ee98 (*(int *)(0x4ee98U))
#undef PTR_DAT_0004e024
#define PTR_DAT_0004e024 (*(uint8_t * *)(0x4e024U))
#undef PTR_DAT_0004e028
#define PTR_DAT_0004e028 (*(uint8_t * *)(0x4e028U))
#undef PTR_DAT_0004e02c
#define PTR_DAT_0004e02c (*(uint8_t * *)(0x4e02cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b07d
 */

bool recovered_2b07d(byte param_1,uint param_2,int param_3,uint param_4)

{
  unsigned char frame[64];

  bool bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if ((param_4 & 0x1ff) == 0 && (param_4 != 0 && param_3 != 0)) {
    pcVar2 = recovered_2b180(param_1);
    if (pcVar2 == (char *)0x0) {
      uVar4 = 0;
      if (DAT_0004ee98 != 0) {
        do {
          uVar5 = param_4 - uVar4;
          bVar1 = param_4 < uVar4 || uVar5 == 0;
          if (param_4 < uVar4 || uVar5 == 0) {
            return bVar1;
          }
          uVar6 = uVar5 >> 9;
          if (0x37 < uVar5 >> 9) {
            uVar6 = 0x38;
          }
          recovered_21348(0x10000,param_3 + uVar4,uVar6 * 0x200);
          *(uint *)PTR_DAT_0004e02c = (uVar4 >> 9) + param_2;
          *(uint *)PTR_DAT_0004e028 = uVar6;
          *(uint *)PTR_DAT_0004e024 = (uint)param_1;
          iVar3 = FUN_000204b0();
          uVar4 = uVar4 + uVar6 * 0x200;
        } while (iVar3 != 0);
        return bVar1;
      }
    }
    else if ((*pcVar2 == '\x01') &&
            (uVar5 = param_2 * 0x200, uVar6 = *(uint *)(pcVar2 + 4) >> 0x17,
            uVar4 = (param_2 >> 0x17) + (uint)CARRY4(uVar5,param_4),
            uVar4 <= uVar6 && (uint)(*(uint *)(pcVar2 + 4) << 9 < uVar5 + param_4) <= uVar6 - uVar4)
            ) {
      recovered_21348(uVar5 + *(int *)(pcVar2 + 8),param_3,param_4);
      return true;
    }
  }
  return false;
}
