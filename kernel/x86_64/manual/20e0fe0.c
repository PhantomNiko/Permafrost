/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a3f28 (*(uint8_t *)(0x20f46e9U))
#define DAT_020a3f48 (*(uint8_t *)(0x20f4709U))
#define local_30 (*(ulong *)(frame + 224))
#define local_38 (*(ulong *)(frame + 216))
#define local_48 (*(undefined8 *)(frame + 200))
#define local_58 (*(undefined8 *)(frame + 184))
#define local_68 (*(undefined8 *)(frame + 168))
#define local_70 (*(float *)(frame + 160))
#define local_78 (*(undefined8 *)(frame + 152))
#define local_88 (*(undefined8 *)(frame + 136))
#define local_98 (*(undefined8 *)(frame + 120))
#define local_a8 (*(undefined8 *)(frame + 104))
#define local_b0 (*(float *)(frame + 96))
#define local_b8 (*(undefined8 *)(frame + 88))
#define local_c8 (*(undefined8 *)(frame + 72))
#define local_d8 (*(undefined8 *)(frame + 56))
#define local_e8 (*(undefined8 *)(frame + 40))
#define local_f0 (*(float *)(frame + 32))
#define local_f8 (*(undefined8 *)(frame + 24))
#define str_020a3f4a (*(char (*)[1])(0x20f470bU))
#define str_020a3f80 (*(char (*)[1])(0x20f4741U))
#define str_020a3fa3 (*(char (*)[1])(0x20f4764U))
#define str_020ab550 (*(char (*)[1])(0x20fcbc7U))
#define uStack_40 (*(undefined8 *)(frame + 208))
#define uStack_50 (*(undefined8 *)(frame + 192))
#define uStack_60 (*(undefined8 *)(frame + 176))
#define uStack_80 (*(undefined8 *)(frame + 144))
#define uStack_90 (*(undefined8 *)(frame + 128))
#define uStack_a0 (*(undefined8 *)(frame + 112))
#define uStack_c0 (*(undefined8 *)(frame + 80))
#define uStack_d0 (*(undefined8 *)(frame + 64))
#define uStack_e0 (*(undefined8 *)(frame + 48))
ulong recovered_20e0fe0(long param_1,ulong *param_2,long param_3,ulong in_R8,ulong in_R9)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  char *format;
  char *pcVar7;
  byte bVar8;
  ulong *puVar9;
  float fVar10;

  local_30 = 0;
  local_38 = 0;
  local_f8 = 0;
  local_f0 = 0.0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_78 = 0;
  local_70 = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_b8 = 0x100000001;
  local_b0 = 1.0;
  if ((param_3 != 0 && (param_2 != (ulong *)0x0 && param_1 != 0)) && (5 < *param_2)) {
    pbVar4 = *(byte **)(param_2[2] + 8);
    if (((pbVar4 != (byte *)0x0) && (bVar8 = *pbVar4, bVar8 != 0)) &&
       ((((byte)((bVar8 & 0xdf) + 0xbf) < 0x1a || (bVar8 == 0x5f)) || (bVar8 == 0x24)))) {
      bVar8 = pbVar4[1];
      if (bVar8 != 0) {
        pbVar4 = pbVar4 + 2;
        do {
          if (((bVar8 != 0x2e) && (bVar8 != 0x24)) &&
             ((bVar8 != 0x5f &&
              ((9 < (byte)(bVar8 - 0x30U) && (0x19 < (byte)((bVar8 & 0xdf) + 0xbf)))))))
          goto LAB_0209b3bf;
          bVar8 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar8 != 0);
      }
      iVar2 = recovered_2002eb0(*(char **)(param_2[2] + 0x10),&DAT_020a3f48);
      if ((iVar2 == 0) && (uVar1 = recovered_20a0000(param_2,3,0x20f447cU,&local_30), uVar1 != '\0'))
      {
        uVar1 = recovered_20a01c0(param_1,param_2,3,local_30,&local_f8);
        if (uVar1 == '\0') {
LAB_0209b531:
          uVar6 = 0;
        }
        else {
          uVar1 = recovered_20a0000(param_2,local_30 + 1,0x20f447cU,&local_38);
          uVar6 = local_30 + 1;
          if (uVar1 == '\0') {
            uVar5 = *param_2;
            puVar9 = &local_78;
          }
          else {
            uVar1 = recovered_20a01c0(param_1,param_2,uVar6,local_38,&local_78);
            if (uVar1 == '\0') goto LAB_0209b531;
            uVar6 = local_38 + 1;
            uVar5 = *param_2;
            puVar9 = &local_b8;
          }
          uVar1 = recovered_20a01c0(param_1,param_2,uVar6,uVar5,puVar9);
          if (uVar1 == '\0') goto LAB_0209b531;
          if ((((((uint)local_f8 < 6) && ((0x26U >> ((uint)local_f8 & 0x1f) & 1) != 0)) &&
               ((uint)local_78 < 6)) &&
              (((0x26U >> ((uint)local_78 & 0x1f) & 1) != 0 && ((uint)local_b8 < 6)))) &&
             ((0x26U >> ((uint)local_b8 & 0x1f) & 1) != 0)) {
            pcVar7 = *(char **)(param_2[2] + 8);
            uVar6 = recovered_2002e80(pcVar7);
            uVar3 = recovered_2096310((long)pcVar7,uVar6);
            *(ulonglong *)(param_3 + 0x38) = uVar3;
            if (uVar3 == 0) {
              pcVar7 = *(char **)(param_2[2] + 8);
              format = str_020ab550;
              goto LAB_0209b61a;
            }
            if (((uint)local_f8 - 5 < 2) || ((uint)local_f8 == 1)) {
              fVar10 = (float)PF_PART4(local_f8, 4);
            }
            else {
              fVar10 = 0.0;
              if ((uint)local_f8 == 2) {
                fVar10 = local_f0;
              }
            }
            *(int *)(param_3 + 0x40) = (int)fVar10;
            if (((uint)local_78 - 5 < 2) || ((uint)local_78 == 1)) {
              fVar10 = (float)PF_PART4(local_78, 4);
            }
            else {
              fVar10 = 0.0;
              if ((uint)local_78 == 2) {
                fVar10 = local_70;
              }
            }
            *(int *)(param_3 + 0x44) = (int)fVar10;
            if (((uint)local_b8 - 5 < 2) || ((uint)local_b8 == 1)) {
              fVar10 = (float)PF_PART4(local_b8, 4);
            }
            else {
              fVar10 = 0.0;
              if ((uint)local_b8 == 2) {
                fVar10 = local_b0;
              }
            }
            *(int *)(param_3 + 0x48) = (int)fVar10;
            if ((int)fVar10 == 0) {
              pcVar7 = &DAT_020a3f28;
              format = str_020a3fa3;
              goto LAB_0209b61a;
            }
            *(undefined2 *)(param_3 + 0x30) = 1;
            uVar6 = CONCAT71((int7)((ulong)param_2 >> 8),1);
          }
          else {
            pcVar7 = &DAT_020a3f28;
            format = str_020a3f80;
LAB_0209b61a:
            uVar6 = 0;
            pf_varargs_205eb00___((void *)param_1,pcVar7,format);
          }
        }
        recovered_205ec00(&local_f8);
        recovered_205ec00(&local_78);
        recovered_205ec00(&local_b8);
        goto LAB_0209b3c6;
      }
    }
  }
LAB_0209b3bf:
  uVar6 = 0;
  pf_varargs_205eb00___((void *)param_1,&DAT_020a3f28,str_020a3f4a);
LAB_0209b3c6:
  return uVar6 & 0xffffffff;
}
