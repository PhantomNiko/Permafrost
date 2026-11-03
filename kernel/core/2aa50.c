#include "functions.h"
#undef DAT_0005702c
#define DAT_0005702c (*(uint8_t *)(0x5702cU))
#undef DAT_00057030
#define DAT_00057030 (*(uint8_t *)(0x57030U))
#undef DAT_00057034
#define DAT_00057034 (*(uint8_t *)(0x57034U))
#undef DAT_00057038
#define DAT_00057038 (*(uint8_t *)(0x57038U))
#undef DAT_0005ced4
#define DAT_0005ced4 (*(uint8_t *)(0x5ced4U))
#undef LAB_0002adf4
#define LAB_0002adf4 (*(uint8_t *)(0x2adf4U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#undef _DAT_0005702c
#define _DAT_0005702c (*(float *)(0x5702cU))
#undef _DAT_00057030
#define _DAT_00057030 (*(float *)(0x57030U))
#undef _DAT_00057034
#define _DAT_00057034 (*(float *)(0x57034U))
#undef _DAT_00057038
#define _DAT_00057038 (*(float *)(0x57038U))
#define auStackY_17c (*(undefined1 (*)[128])(frame + 16))
#define local_bc (*(undefined4 *)(frame + 208))
#define local_b8 (*(undefined4 *)(frame + 212))
#define local_a4 (*(undefined * *)(frame + 232))
#define local_a0 (*(undefined * *)(frame + 236))
#define local_9c (*(undefined1 * *)(frame + 240))
#define local_98 (*(undefined1 * *)(frame + 244))
#define local_94 (*(undefined1 * *)(frame + 248))
#define local_88 (*(int *)(frame + 260))
#define local_84 (*(int *)(frame + 264))
#define local_80 (*(int *)(frame + 268))
#define local_7c (*(int *)(frame + 272))
#define local_78 (*(int *)(frame + 276))
#define local_74 (*(int *)(frame + 280))
#define local_70 (*(int *)(frame + 284))
#define local_6c (*(double *)(frame + 288))
#define local_64 (*(int *)(frame + 296))
#define local_60 (*(int *)(frame + 300))
#define local_5c (*(int *)(frame + 304))
#define local_58 (*(int * *)(frame + 308))
#define local_54 (*(double *)(frame + 312))
#define local_4c (*(int * *)(frame + 320))
#define local_48 (*(double *)(frame + 324))
#define local_40 (*(int *)(frame + 332))
#define local_3c (*(int *)(frame + 336))
#define local_35 (*(undefined1 *)(frame + 343))
#define local_34 (*(ushort *)(frame + 344))
#define local_32 (*(ushort *)(frame + 346))
#define local_30 (*(ushort *)(frame + 348))
#define local_2e (*(ushort *)(frame + 350))
#define local_2c (*(undefined8 *)(frame + 352))
#define local_24 (*(int *)(frame + 360))
#define local_18 (*(int * *)(frame + 372))
#define local_14 (*(uint * *)(frame + 376))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2aa50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_2aa50(int *param_1,int *param_2,undefined8 param_3)

{
  unsigned char frame[428] = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ushort in_FPUControlWord = pf_fpu_control();
  float10 fVar18;

  local_2c = param_3;
  local_4c = param_1;
  local_14 = param_1;
  recovered_29d3c(param_1);
  local_94 = auStackY_17c + 0x80;
  *(undefined8 *)(local_14 + 4) = local_2c;
  iVar14 = param_2[1];
  local_a4 = PTR_LAB_0005d040;
  local_a0 = &DAT_0005ced4;
  local_98 = &LAB_0002adf4;
  local_9c = (undefined1 *)((int)(uintptr_t)(frame + 396) + -4);
  recovered_234cb(&local_bc);
  iVar12 = local_3c;
  if ((iVar14 != 0) && (*(char *)((int)param_2 + 0xd) == '\x01')) {
    local_b8 = 1;
    local_18 = param_2;
    fVar18 = recovered_217e7(*(double *)(param_2 + 0xc));
    local_34 = in_FPUControlWord | 0xc00;
    local_88 = (int)ROUND(fVar18);
    local_2c = CONCAT44(PF_PART4(local_2c, 4),local_88);
    local_b8 = 2;
    fVar18 = recovered_21828(*(double *)(local_18 + 0xe));
    local_32 = in_FPUControlWord | 0xc00;
    local_84 = (int)ROUND(fVar18);
    local_b8 = 3;
    local_24 = local_84;
    fVar18 = recovered_217e7(*(double *)(local_18 + 0x10));
    local_48 = (double)fVar18;
    local_b8 = 4;
    fVar18 = recovered_21828(*(double *)(local_18 + 0x12));
    local_30 = in_FPUControlWord | 0xc00;
    local_7c = (int)ROUND(local_48);
    local_2e = in_FPUControlWord | 0xc00;
    local_80 = (int)ROUND(fVar18);
    local_3c = (local_24 - (int)local_2c) + 2;
    iVar12 = 0;
    local_24 = local_3c;
    if ((0 < local_3c) && (local_40 = (local_80 - local_7c) + 2, iVar12 = local_3c, 0 < local_40)) {
      iVar14 = (int)local_2c + -1;
      local_2c = CONCAT44(PF_PART4(local_2c, 4),iVar14);
      *local_14 = iVar14;
      local_48 = pf_bits_double(CONCAT44(PF_PART4(local_48, 4),local_80 + 1));
      local_14[1] = local_80 + 1;
      local_14[2] = local_3c;
      local_14[3] = local_40;
      local_58 = local_14 + 6;
      local_35 = 0;
      local_b8 = 5;
      recovered_25e64(local_58,local_40 * local_3c,&local_35);
      local_74 = PF_PART4(local_48, 0);
      dVar3 = (double)PF_PART4(local_48, 0);
      local_78 = (int)local_2c;
      local_54 = 0.0;
      dVar4 = (double)(int)local_2c;
      iVar14 = 0;
      while (iVar9 = iVar14, iVar12 = local_3c, iVar9 != local_40) {
        dVar5 = (double)_DAT_0005702c;
        local_5c = iVar9 * local_3c;
        local_6c = 0.0;
        iVar14 = 0;
        while (iVar12 = iVar14, iVar12 != local_24) {
          iVar14 = *local_18;
          dVar6 = 0.0;
          iVar10 = 0;
          iVar16 = 0;
          while (iVar15 = iVar16, iVar15 != 4) {
            dVar7 = (dVar3 - local_54) + dVar5 + dVar6 * (double)_DAT_00057034;
            dVar8 = 0.0;
            for (iVar16 = 0; iVar16 != 4; iVar16 = iVar16 + 1) {
              local_2c = CONCAT44(PF_PART4(local_2c, 4),iVar10);
              iVar11 = 0;
              for (iVar13 = 0; local_18[1] * 0x20 != iVar13; iVar13 = iVar13 + 0x20) {
                dVar1 = *(double *)(iVar14 + 8 + iVar13);
                dVar2 = *(double *)(iVar14 + 0x18 + iVar13);
                if (((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) &&
                   (((dVar1 <= dVar7 && (iVar17 = 1, dVar7 < dVar2)) ||
                    ((dVar7 < dVar1 && (iVar17 = -1, dVar2 <= dVar7)))))) {
                  if (*(double *)(iVar14 + iVar13) +
                      ((*(double *)(iVar14 + 0x10 + iVar13) - *(double *)(iVar14 + iVar13)) *
                      (dVar7 - dVar1)) / (dVar2 - dVar1) <=
                      local_6c + dVar4 + (double)_DAT_00057030 + dVar8 * (double)_DAT_00057038) {
                    iVar17 = 0;
                  }
                  iVar11 = iVar11 + iVar17;
                }
              }
              iVar10 = (iVar10 + 1) - (uint)(iVar11 == 0);
              local_48 = dVar8;
              dVar8 = dVar8 + 1.0;
            }
            dVar6 = dVar6 + 1.0;
            local_70 = iVar15;
            iVar16 = iVar15 + 1;
          }
          *(char *)(iVar12 + *local_58 + local_5c) = (char)((iVar10 * 0xff) / 0x10);
          local_6c = local_6c + 1.0;
          local_64 = iVar12;
          iVar14 = iVar12 + 1;
        }
        local_54 = local_54 + 1.0;
        local_60 = iVar9;
        iVar14 = iVar9 + 1;
      }
    }
  }
  local_3c = iVar12;
  recovered_234e0(&local_bc);
  return local_4c;
}
