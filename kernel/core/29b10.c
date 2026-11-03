#include "functions.h"
#undef DAT_00047e14
#define DAT_00047e14 (*(byte *)(0x47e14U))
#undef DAT_00047e1c
#define DAT_00047e1c (*(int *)(0x47e1cU))
#undef DAT_00047e20
#define DAT_00047e20 (*(uint *)(0x47e20U))
#undef DAT_00047e24
#define DAT_00047e24 (*(int *)(0x47e24U))
#undef DAT_00047e40
#define DAT_00047e40 (*(int *)(0x47e40U))
#undef DAT_00047e50
#define DAT_00047e50 (*(int *)(0x47e50U))
#undef DAT_00047e54
#define DAT_00047e54 (*(uint *)(0x47e54U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29b10
 */

bool recovered_29b10(uint param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[64];

  bool bVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if (param_4 == 0) {
    bVar1 = param_3 == 0;
  }
  else {
    pvVar2 = recovered_20df4(DAT_00047e20);
    bVar1 = false;
    if (pvVar2 != (void *)0x0) {
      uVar3 = 0;
      uVar4 = 0;
      do {
        do {
          if (param_4 == uVar4) {
            recovered_20dfd((int)pvVar2);
            return true;
          }
          uVar5 = param_3 - uVar3;
          if (param_3 < uVar3) {
            uVar5 = 0;
          }
          recovered_20fa9((int)pvVar2,0,DAT_00047e20);
          if (DAT_00047e20 <= uVar5) {
            uVar5 = DAT_00047e20;
          }
          if (uVar5 != 0 && param_2 != 0) {
            recovered_20f42((int)pvVar2,param_2 + uVar3,uVar5);
          }
          bVar1 = recovered_29fa0((uint)DAT_00047e14,
                                  DAT_00047e1c * (param_1 - 2) + DAT_00047e40 + DAT_00047e24,
                                  (int)pvVar2,DAT_00047e20);
          if (!bVar1) goto LAB_00029c4a;
          uVar3 = uVar3 + uVar5;
          uVar4 = uVar4 + 1;
        } while (param_4 <= uVar4);
        param_1 = *(uint *)(DAT_00047e50 + param_1 * 4);
      } while ((1 < param_1) && (param_1 < DAT_00047e54));
LAB_00029c4a:
      recovered_20dfd((int)pvVar2);
      bVar1 = false;
    }
  }
  return bVar1;
}
