/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208fe3b (*(char *)(0x20cd438U))
#define DAT_0208fe3c (*(char *)(0x20cd439U))
#define DAT_0208fe3d (*(char *)(0x20cd43aU))
#define DAT_0208fe3e (*(char *)(0x20cd43bU))
#define DAT_0208fe3f (*(uint8_t *)(0x20cd43cU))
#define local_34 (*(ulong (*)[9])(frame + 28))
uchar recovered_207f940(ulonglong *param_1,ulong *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *left;
  char cVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  ulonglong *incoming_edx;
  ulonglong *incoming_edx_00;
  ulonglong *incoming_edx_01;
  ulong *puVar5;
  ulong *puVar6;
  bool bVar7;
  byte bVar8;

  bVar8 = 0;
  uVar2 = recovered_207fba0(param_1,param_2);
  if (uVar2 == '\0') {
    uVar2 = '\0';
  }
  else {
    while( true ) {
      if (**(uint **)((int)param_1 + 4) <= (uint)param_1[1]) break;
      left = *(char **)((*(uint **)((int)param_1 + 4))[2] + (uint)param_1[1] * 4);
      if (left == (char *)0x0) {
LAB_020556a0:
        iVar4 = recovered_20022a0(left,&DAT_0208fe3f);
        if (iVar4 != 0) break;
      }
      else {
        cVar3 = *left;
        cVar1 = DAT_0208fe3b;
        if (cVar3 != '\0') {
          if (cVar3 != 'a') {
            if ((byte)(cVar3 + 0x9fU) < 0x1a) {
              cVar3 = cVar3 + -0x20;
            }
            if (cVar3 != 'A') goto LAB_020556a0;
          }
          cVar3 = left[1];
          cVar1 = DAT_0208fe3c;
          if (cVar3 != '\0') {
            if (cVar3 != 'n') {
              if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                cVar3 = cVar3 + -0x20;
              }
              if (cVar3 != 'N') goto LAB_020556a0;
            }
            cVar3 = left[2];
            cVar1 = DAT_0208fe3d;
            if (cVar3 != '\0') {
              if (cVar3 != 'd') {
                if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                  cVar3 = cVar3 + -0x20;
                }
                if (cVar3 != 'D') goto LAB_020556a0;
              }
              cVar1 = DAT_0208fe3e;
              if (left[3] != '\0') goto LAB_020556a0;
            }
          }
        }
        if (cVar1 != '\0') goto LAB_020556a0;
      }
      if (param_2 == (ulong *)0x0) {
switchD_020556c5_default:
        bVar7 = false;
      }
      else {
        switch((uintptr_t)(*param_2)) {
        case 1:
        case 5:
        case 6:
          bVar7 = param_2[1] == 0;
          break;
        case 2:
          bVar7 = pf_bits_float((uint32_t)param_2[2]) != 0.0;
          goto LAB_02055722;
        case 3:
          if ((char *)param_2[3] == (char *)0x0) goto switchD_020556c5_default;
          bVar7 = *(char *)param_2[3] == '\0';
          break;
        case 4:
          bVar7 = param_2[5] == 0;
          break;
        case 7:
          if (param_2[6] == 0) goto switchD_020556c5_default;
          bVar7 = *(int *)(param_2[6] + 8) == 0;
          break;
        case 8:
          if (param_2[7] == 0) goto switchD_020556c5_default;
          bVar7 = *(int *)(param_2[7] + 4) == 0;
          break;
        case 9:
          bVar7 = param_2[8] == 0;
          break;
        default:
          goto switchD_020556c5_default;
        }
        bVar7 = !bVar7;
      }
LAB_02055722:
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      local_34[0] = 0;
      local_34[1] = 0;
      local_34[2] = 0;
      local_34[3] = 0;
      local_34[4] = 0;
      local_34[5] = 0;
      local_34[6] = 0;
      local_34[7] = 0;
      local_34[8] = 0;
      uVar2 = recovered_207fba0(param_1,local_34);
      if (uVar2 == '\0') {
        recovered_2043a90(param_2,(uint)incoming_edx_00);
        return '\0';
      }
      incoming_edx = incoming_edx_00;
      if ((bVar7) &&
         (recovered_2043a90(param_2,(uint)incoming_edx_00), incoming_edx = incoming_edx_01,
         param_2 != (ulong *)0x0)) {
        recovered_2043a90(param_2,(uint)incoming_edx_01);
        puVar5 = local_34;
        puVar6 = param_2;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        }
        local_34[0] = 0;
        local_34[1] = 0;
        local_34[2] = 0;
        local_34[3] = 0;
        local_34[4] = 0;
        local_34[5] = 0;
        local_34[6] = 0;
        local_34[7] = 0;
        local_34[8] = 0;
        incoming_edx = param_1;
      }
      recovered_2043a90(local_34,(uint)incoming_edx);
    }
    uVar2 = '\x01';
  }
  return uVar2;
}
