/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208fe55 (*(uint8_t *)(0x20cd452U))
#define DAT_0208fe57 (*(uint8_t *)(0x20ccaf8U))
#define local_14 (*(ulong * *)(frame + 92))
#define local_18 (*(ulonglong * *)(frame + 88))
#define local_60 (*(ulong (*)[18])(frame + 16))
uchar recovered_2080840(ulonglong *param_1,ulong *param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  char *left;
  ulonglong *puVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint incoming_edx;
  uint incoming_edx_00;
  uint incoming_edx_01;
  uint incoming_edx_02;
  ulong *puVar6;
  ulong *puVar7;
  byte bVar8;

  bVar8 = 0;
  local_14 = param_2;
  uVar2 = recovered_20809b0(param_1,param_2);
  if (uVar2 == '\0') {
LAB_02056621:
    uVar2 = '\0';
  }
  else {
    puVar5 = *(uint **)((int)param_1 + 4);
    uVar4 = (uint)param_1[1];
    uVar2 = '\x01';
    if (uVar4 < *puVar5) {
      local_18 = param_1;
      do {
        puVar1 = local_18;
        left = *(char **)(puVar5[2] + uVar4 * 4);
        iVar3 = recovered_20022a0(left,&DAT_0208fe55);
        if ((iVar3 != 0) && (iVar3 = recovered_20022a0(left,&DAT_0208fe57), iVar3 != 0)) break;
        *(int *)(puVar1 + 1) = (int)puVar1[1] + 1;
        local_60[0] = 0;
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[4] = 0;
        local_60[5] = 0;
        local_60[6] = 0;
        local_60[7] = 0;
        local_60[8] = 0;
        local_60[9] = 0;
        local_60[10] = 0;
        local_60[0xb] = 0;
        local_60[0xc] = 0;
        local_60[0xd] = 0;
        local_60[0xe] = 0;
        local_60[0xf] = 0;
        local_60[0x10] = 0;
        local_60[0x11] = 0;
        uVar2 = recovered_20809b0(puVar1,local_60);
        puVar7 = local_14;
        if (uVar2 == '\0') {
          recovered_2043a90(local_14,incoming_edx);
          goto LAB_02056621;
        }
        uVar2 = recovered_207fec0(*(void **)puVar1,left,local_14,local_60,local_60 + 9);
        recovered_2043a90(puVar7,incoming_edx_00);
        recovered_2043a90(local_60,incoming_edx_01);
        puVar7 = local_14;
        if (uVar2 == '\0') goto LAB_02056621;
        if (local_14 != (ulong *)0x0) {
          recovered_2043a90(local_14,incoming_edx_02);
          puVar6 = local_60 + 9;
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
        }
        puVar5 = *(uint **)((int)local_18 + 4);
        uVar4 = (uint)local_18[1];
      } while (uVar4 < *puVar5);
      uVar2 = '\x01';
    }
  }
  return uVar2;
}
