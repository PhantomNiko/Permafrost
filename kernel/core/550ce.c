#include "functions.h"
#undef DAT_0005d764
#define DAT_0005d764 (*(uint32_t *)(0x5d764U))
#undef DAT_0005e938
#define DAT_0005e938 (*(int *)(0x5e938U))
#undef DAT_0005e93c
#define DAT_0005e93c (*(uint32_t *)(0x5e93cU))
#undef DAT_0005e940
#define DAT_0005e940 (*(uint8_t *)(0x5e940U))
#undef DAT_0005e950
#define DAT_0005e950 (*(uint32_t *)(0x5e950U))
#undef DAT_0005e964
#define DAT_0005e964 (*(uint32_t *)(0x5e964U))
#undef DAT_0005e968
#define DAT_0005e968 (*(uint32_t *)(0x5e968U))
#undef DAT_0005e96c
#define DAT_0005e96c (*(uint32_t *)(0x5e96cU))
#define local_14 (*(undefined4 * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x550ce
 */

void recovered_550ce(int param_1,int param_2,int param_3)

{
  unsigned char frame[68] = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;

  iVar4 = DAT_0005e938;
  if (param_2 != 0 && param_1 != 0) {
    iVar8 = param_2 + 1;
    iVar7 = param_1 + -0x34;
    do {
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = 0;
        break;
      }
      iVar6 = iVar7 + 0x34;
      piVar5 = (int *)(iVar7 + 0x34);
      iVar7 = iVar6;
    } while (*piVar5 != param_3);
    local_14 = (undefined4 *)0x0;
    for (iVar8 = 0; iVar8 != iVar4; iVar8 = iVar8 + 1) {
      piVar5 = (int *)(param_1 + 0x30);
      iVar7 = param_2;
      while (bVar9 = iVar7 != 0, iVar7 = iVar7 + -1, bVar9) {
        iVar3 = piVar5[-0xb];
        if ((((char)iVar3 == (&DAT_0005e940)[iVar8 * 0x34]) &&
            (iVar1 = piVar5[-7], iVar1 == (&DAT_0005e950)[iVar8 * 0xd])) &&
           (iVar2 = piVar5[-2], iVar2 == (&DAT_0005e964)[iVar8 * 0xd])) {
          iVar7 = *piVar5;
          if ((iVar7 != 0) && ((&DAT_0005e968)[iVar8 * 0xd] == iVar7)) {
            (&DAT_0005e96c)[iVar8 * 0xd] = iVar7;
          }
          if (((iVar6 != 0) && (*(char *)(iVar6 + 4) == (char)iVar3)) &&
             ((*(int *)(iVar6 + 0x14) == iVar1 && (*(int *)(iVar6 + 0x28) == iVar2)))) {
            local_14 = &DAT_0005e93c + iVar8 * 0xd;
          }
          break;
        }
        piVar5 = piVar5 + 0xd;
      }
    }
    if ((((iVar6 != 0) && (local_14 != (undefined4 *)0x0)) && (*(uint *)(iVar6 + 0x30) != 0)) &&
       (bVar9 = recovered_537fe((int)local_14,*(uint *)(iVar6 + 0x30)), bVar9)) {
      local_14[0xc] = *(undefined4 *)(iVar6 + 0x30);
      DAT_0005d764 = *local_14;
    }
  }
  return;
}
