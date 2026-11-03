#include "functions.h"
#undef DAT_000475e8
#define DAT_000475e8 (*(uint32_t *)(0x475e8U))
#undef DAT_0004808c
#define DAT_0004808c (*(int *)(0x4808cU))
#undef DAT_00048090
#define DAT_00048090 (*(uint32_t *)(0x48090U))
#undef DAT_00048094
#define DAT_00048094 (*(uint8_t *)(0x48094U))
#undef DAT_000480a4
#define DAT_000480a4 (*(uint32_t *)(0x480a4U))
#undef DAT_000480b8
#define DAT_000480b8 (*(uint32_t *)(0x480b8U))
#undef DAT_000480bc
#define DAT_000480bc (*(uint32_t *)(0x480bcU))
#undef DAT_000480c0
#define DAT_000480c0 (*(uint32_t *)(0x480c0U))
#define local_14 (*(undefined4 * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4160c
 */

void recovered_4160c(int param_1,int param_2,int param_3)

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

  iVar4 = DAT_0004808c;
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
        if ((((char)iVar3 == (&DAT_00048094)[iVar8 * 0x34]) &&
            (iVar1 = piVar5[-7], iVar1 == (&DAT_000480a4)[iVar8 * 0xd])) &&
           (iVar2 = piVar5[-2], iVar2 == (&DAT_000480b8)[iVar8 * 0xd])) {
          iVar7 = *piVar5;
          if ((iVar7 != 0) && ((&DAT_000480bc)[iVar8 * 0xd] == iVar7)) {
            (&DAT_000480c0)[iVar8 * 0xd] = iVar7;
          }
          if (((iVar6 != 0) && (*(char *)(iVar6 + 4) == (char)iVar3)) &&
             ((*(int *)(iVar6 + 0x14) == iVar1 && (*(int *)(iVar6 + 0x28) == iVar2)))) {
            local_14 = &DAT_00048090 + iVar8 * 0xd;
          }
          break;
        }
        piVar5 = piVar5 + 0xd;
      }
    }
    if ((((iVar6 != 0) && (local_14 != (undefined4 *)0x0)) && (*(int *)(iVar6 + 0x30) != 0)) &&
       (bVar9 = recovered_3fcab((int)local_14,*(int *)(iVar6 + 0x30)), bVar9)) {
      local_14[0xc] = *(undefined4 *)(iVar6 + 0x30);
      DAT_000475e8 = *local_14;
    }
  }
  return;
}
