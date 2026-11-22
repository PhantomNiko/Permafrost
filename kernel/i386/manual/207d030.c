/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208feb8 (*(uint8_t *)(0x20cd4afU))
#define local_14 (*(char * *)(frame + 108))
#define local_18 (*(undefined4 *)(frame + 104))
#define local_1c (*(undefined4 * *)(frame + 100))
#define local_38 (*(int (*)[7])(frame + 72))
#define local_3c (*(int * *)(frame + 68))
#define local_40 (*(int * *)(frame + 64))
#define local_44 (*(int *)(frame + 60))
#define local_64 (*(char (*)[32])(frame + 28))
int recovered_207d030(int *incoming_ecx,int *incoming_edx,byte param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  int *incoming_ecx_00;
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint incoming_edx_00;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint incoming_edx_01;
  uint uVar5;
  int iVar6;
  uint vararg0;
  int *piVar7;
  int *piVar8;
  byte bVar9;

  bVar9 = 0;
  local_14 = (char *)0x0;
  if (incoming_edx == (int *)0x0 || incoming_ecx == (int *)0x0) {
    return 0;
  }
  if (*incoming_ecx == 8) {
    if ((incoming_ecx[7] != 0) && (bVar1 = recovered_2085e30(incoming_edx,&local_14), bVar1)) {
      iVar4 = recovered_209b1b0(incoming_ecx[7],local_14,param_3);
      recovered_2001710(local_14);
      return iVar4;
    }
    recovered_2001710(local_14);
  }
  else {
    if (*incoming_ecx != 7) {
      return 0;
    }
    if (*incoming_edx == 1) {
      uVar5 = incoming_edx[1];
      if (((int)uVar5 < 1 & param_3) == 0) {
        if ((int)uVar5 < 1) {
          return 0;
        }
        iVar4 = incoming_ecx[6];
        if (iVar4 == 0) {
          return 0;
        }
        if (*(uint *)(iVar4 + 8) < uVar5) {
          if (param_3 == 0) {
            return 0;
          }
          uVar2 = recovered_207f4d0(iVar4,uVar5);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          iVar4 = incoming_ecx[6];
          uVar5 = incoming_edx[1];
        }
        return *(int *)(iVar4 + 0x10) + -0x24 + uVar5 * 0x24;
      }
    }
    else if (param_3 == 0) {
      return 0;
    }
    iVar4 = incoming_ecx[6];
    if (iVar4 == 0) {
      return 0;
    }
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_1c = (undefined4 *)0x0;
    local_18 = 0;
    local_40 = incoming_edx;
    local_3c = incoming_ecx;
    puVar3 = recovered_2001650(0x10);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 1;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      recovered_2043a90(local_38,incoming_edx_00);
      local_38[0] = 8;
      uVar5 = extraout_EDX;
      local_1c = puVar3;
      if (*(int *)(iVar4 + 8) != 0) {
        iVar6 = 0;
        vararg0 = 0;
        local_44 = iVar4;
        do {
          vararg0 = vararg0 + 1;
          pf_varargs_2003aa0__4_(local_64,0x20,&DAT_0208feb8,vararg0);
          iVar4 = local_44;
          puVar3 = (undefined4 *)recovered_209b1b0((int)local_1c,local_64,'\x01');
          uVar5 = extraout_EDX_00;
          if ((puVar3 == (undefined4 *)0x0) ||
             (uVar2 = recovered_207e1d0(puVar3,(undefined4 *)(*(int *)(iVar4 + 0x10) + iVar6)),
             uVar5 = extraout_EDX_01, (char)uVar2 == '\0')) {
            recovered_2043a90(local_38,uVar5);
            return 0;
          }
          iVar6 = iVar6 + 0x24;
        } while (vararg0 < *(uint *)(iVar4 + 8));
      }
      incoming_ecx_00 = local_3c;
      recovered_2043a90(local_3c,uVar5);
      recovered_2043a90(incoming_ecx_00,incoming_edx_01);
      piVar7 = local_38;
      piVar8 = incoming_ecx_00;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
        piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
      }
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = 0;
      local_38[6] = 0;
      local_1c = (undefined4 *)0x0;
      local_18 = 0;
      iVar4 = recovered_207d030(incoming_ecx_00,local_40,1);
      return iVar4;
    }
  }
  return 0;
}
