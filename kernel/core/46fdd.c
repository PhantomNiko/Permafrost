#include "functions.h"
#undef DAT_0004e5f8
#define DAT_0004e5f8 (*(uint32_t *)(0x4e5f8U))
#undef DAT_0004eeac
#define DAT_0004eeac (*(int *)(0x4eeacU))
#undef DAT_0004eeb0
#define DAT_0004eeb0 (*(uint32_t *)(0x4eeb0U))
#undef DAT_0004eeb4
#define DAT_0004eeb4 (*(uint8_t *)(0x4eeb4U))
#undef DAT_0004eec4
#define DAT_0004eec4 (*(uint32_t *)(0x4eec4U))
#undef DAT_0004eed8
#define DAT_0004eed8 (*(uint32_t *)(0x4eed8U))
#undef DAT_0004eedc
#define DAT_0004eedc (*(uint32_t *)(0x4eedcU))
#undef DAT_0004eee0
#define DAT_0004eee0 (*(uint32_t *)(0x4eee0U))
#define local_14 (*(undefined4 * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x46fdd
 */

void recovered_46fdd(int param_1,int param_2,int param_3)

{
  unsigned char frame[68];

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;

  iVar4 = DAT_0004eeac;
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
        if ((((char)iVar3 == (&DAT_0004eeb4)[iVar8 * 0x34]) &&
            (iVar1 = piVar5[-7], iVar1 == (&DAT_0004eec4)[iVar8 * 0xd])) &&
           (iVar2 = piVar5[-2], iVar2 == (&DAT_0004eed8)[iVar8 * 0xd])) {
          iVar7 = *piVar5;
          if ((iVar7 != 0) && ((&DAT_0004eedc)[iVar8 * 0xd] == iVar7)) {
            (&DAT_0004eee0)[iVar8 * 0xd] = iVar7;
          }
          if (((iVar6 != 0) && (*(char *)(iVar6 + 4) == (char)iVar3)) &&
             ((*(int *)(iVar6 + 0x14) == iVar1 && (*(int *)(iVar6 + 0x28) == iVar2)))) {
            local_14 = &DAT_0004eeb0 + iVar8 * 0xd;
          }
          break;
        }
        piVar5 = piVar5 + 0xd;
      }
    }
    if ((((iVar6 != 0) && (local_14 != (undefined4 *)0x0)) && (*(uint *)(iVar6 + 0x30) != 0)) &&
       (bVar9 = recovered_45526((int)local_14,*(uint *)(iVar6 + 0x30)), bVar9)) {
      local_14[0xc] = *(undefined4 *)(iVar6 + 0x30);
      DAT_0004e5f8 = *local_14;
    }
  }
  return;
}
