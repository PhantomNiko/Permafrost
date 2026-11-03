#include "functions.h"
#undef DAT_000445d8
#define DAT_000445d8 (*(uint32_t *)(0x445d8U))
#undef DAT_00054f20
#define DAT_00054f20 (*(int *)(0x54f20U))
#undef DAT_00054f24
#define DAT_00054f24 (*(uint32_t *)(0x54f24U))
#undef DAT_00054f28
#define DAT_00054f28 (*(uint8_t *)(0x54f28U))
#undef DAT_00054f34
#define DAT_00054f34 (*(uint32_t *)(0x54f34U))
#undef DAT_00054f3c
#define DAT_00054f3c (*(uint32_t *)(0x54f3cU))
#undef DAT_00054f40
#define DAT_00054f40 (*(uint32_t *)(0x54f40U))
#undef DAT_00054f44
#define DAT_00054f44 (*(uint32_t *)(0x54f44U))
#define local_14 (*(undefined4 * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3e267
 */

void recovered_3e267(int param_1,int param_2,int param_3)

{
  unsigned char frame[68];

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;

  iVar4 = DAT_00054f20;
  if (param_2 != 0 && param_1 != 0) {
    iVar9 = param_2 + 1;
    iVar8 = param_1 + -0x24;
    do {
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar7 = 0;
        break;
      }
      iVar7 = iVar8 + 0x24;
      piVar6 = (int *)(iVar8 + 0x24);
      iVar8 = iVar7;
    } while (*piVar6 != param_3);
    local_14 = (undefined4 *)0x0;
    for (iVar9 = 0; iVar9 != iVar4; iVar9 = iVar9 + 1) {
      piVar6 = (int *)(param_1 + 0x20);
      iVar8 = param_2;
      while (bVar10 = iVar8 != 0, iVar8 = iVar8 + -1, bVar10) {
        iVar3 = piVar6[-7];
        if ((((char)iVar3 == (&DAT_00054f28)[iVar9 * 0x24]) &&
            (iVar1 = piVar6[-4], iVar1 == (&DAT_00054f34)[iVar9 * 9])) &&
           (iVar2 = piVar6[-2], iVar2 == (&DAT_00054f3c)[iVar9 * 9])) {
          iVar8 = *piVar6;
          if ((iVar8 != 0) && ((&DAT_00054f40)[iVar9 * 9] == iVar8)) {
            (&DAT_00054f44)[iVar9 * 9] = iVar8;
          }
          if (((iVar7 != 0) && (*(char *)(iVar7 + 4) == (char)iVar3)) &&
             ((*(int *)(iVar7 + 0x10) == iVar1 && (*(int *)(iVar7 + 0x18) == iVar2)))) {
            local_14 = &DAT_00054f24 + iVar9 * 9;
          }
          break;
        }
        piVar6 = piVar6 + 9;
      }
    }
    if ((((iVar7 != 0) && (local_14 != (undefined4 *)0x0)) && (*(int *)(iVar7 + 0x20) != 0)) &&
       (uVar5 = recovered_3d40c((int)local_14,*(int *)(iVar7 + 0x20)), (char)uVar5 != '\0')) {
      local_14[8] = *(undefined4 *)(iVar7 + 0x20);
      DAT_000445d8 = *local_14;
    }
  }
  return;
}
