/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a3b08 (*(uint8_t *)(0x20f42c9U))
#define DAT_020a3b0c (*(uint8_t *)(0x20f42cdU))
#define DAT_020a3b0d (*(uint8_t *)(0x20f42ceU))
#define DAT_020a3b0e (*(uint8_t *)(0x20f42cfU))
#define DAT_020a3b0f (*(uint8_t *)(0x20f42d0U))
#define DAT_020a3b10 (*(uint8_t *)(0x20f42d1U))
#define DAT_020a3b11 (*(uint8_t *)(0x20f42d2U))
#define DAT_020a3b12 (*(uint8_t *)(0x20f42d3U))
#define DAT_020a3b14 (*(uint8_t *)(0x20f42d5U))
#define DAT_020a3b15 (*(uint8_t *)(0x20f42d6U))
#define DAT_020a3b16 (*(uint8_t *)(0x20f42d7U))
#define DAT_020a3b17 (*(uint8_t *)(0x20f42d8U))
#define DAT_020a3dc0 (*(uint8_t *)(0x20f4581U))
#define DAT_020a3dc1 (*(uint8_t *)(0x20f4582U))
#define DAT_020a3dc2 (*(uint8_t *)(0x20f4583U))
#define local_31 (*(char *)(frame + 79))
#define local_32 (*(char *)(frame + 78))
#define local_40 (*(undefined8 * *)(frame + 64))
#define local_50 (*(ulong (*)[2])(frame + 48))
#define local_58 (*(ulong *)(frame + 40))
#define local_60 (*(undefined1 * *)(frame + 32))
#define local_68 (*(ulong *)(frame + 24))
#define local_70 (*(ulong *)(frame + 16))
#define str_020a3dc3 (*(char (*)[1])(0x20f4584U))
#define str_020ab52b (*(char (*)[1])(0x20fcba2U))
#define str_020ab53d (*(char (*)[1])(0x20fcbb4U))
uchar recovered_20e0a10(long param_1,ulong param_2,ulong param_3,long *param_4,ulong *param_5,
                       long *param_6,undefined1 *param_7)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  uchar uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  char *pcVar9;
  ulong *in_R9;
  ulong uVar10;
  bool bVar11;
  uint128 auVar12;

  PF_PART4(auVar12, 0) = -(uint)(param_1 == 0);
  PF_PART4(auVar12, 4) = -(uint)(param_4 == (long *)0x0);
  PF_PART4(auVar12, 8) = -(uint)(param_5 == (ulong *)0x0);
  PF_PART4(auVar12, 12) = -(uint)(param_6 == (long *)0x0);
  iVar4 = movmskps((int)param_3,auVar12);
  if (iVar4 == 0 && param_7 != (undefined1 *)0x0) {
    local_68 = param_3;
    if (param_3 < param_2) {
      local_70 = 0;
      uVar6 = 0;
      bVar11 = false;
      in_R9 = param_5;
      while( true ) {
        uVar2 = local_68;
        local_60 = *(undefined1 **)(param_1 + local_68 * 8);
        local_58 = 0;
        local_32 = '\0';
        local_31 = '\0';
        if (!bVar11) break;
        in_R9 = (ulong *)&local_32;
        uVar3 = recovered_209f710(param_1,param_2,local_68 + 1,&local_58,(undefined1 *)in_R9);
        if (uVar3 == '\0') goto LAB_0209b0f2;
        if (local_32 == '\0') {
          *param_4 = uVar6;
          *param_5 = local_70;
          *param_6 = local_58 + 1;
          *param_7 = 1;
          return '\x01';
        }
LAB_0209ad14:
        local_68 = local_58;
        if (param_2 <= local_58) goto LAB_0209b0e3;
      }
      uVar3 = recovered_209c670((long)local_60,local_50);
      if ((uVar3 != '\0') && (local_50[0] != 0)) {
        pcVar5 = (char *)*local_40;
        if (pcVar5 == (char *)0x0) {
LAB_0209b11e:
          uVar6 = 0;
          do {
            recovered_2000bb0((void *)local_40[uVar6]);
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_50[0]);
          recovered_2000bb0(local_40);
          local_50[0] = 0;
          local_50[1] = 0;
          local_40 = (undefined8 *)0x0;
          pcVar9 = &DAT_020a3dc0;
          pcVar5 = str_020ab53d;
          goto LAB_0209b100;
        }
        cVar1 = *pcVar5;
        pcVar9 = &DAT_020a3dc0;
        if (cVar1 == '\0') goto LAB_0209aed0;
        if (cVar1 == 'e') {
LAB_0209add1:
          cVar7 = pcVar5[1];
          pcVar9 = &DAT_020a3b14;
          if (cVar7 != '\0') {
            if (cVar7 != 'l') {
              cVar8 = cVar7 + -0x20;
              if (0x19 < (byte)(cVar7 + 0x9fU)) {
                cVar8 = cVar7;
              }
              if (cVar8 != 'L') goto LAB_0209ae75;
            }
            cVar7 = pcVar5[2];
            pcVar9 = &DAT_020a3b15;
            if (cVar7 != '\0') {
              if (cVar7 != 's') {
                cVar8 = cVar7 + -0x20;
                if (0x19 < (byte)(cVar7 + 0x9fU)) {
                  cVar8 = cVar7;
                }
                if (cVar8 != 'S') goto LAB_0209ae75;
              }
              cVar7 = pcVar5[3];
              pcVar9 = &DAT_020a3b16;
              if (cVar7 != '\0') {
                if (cVar7 != 'e') {
                  cVar8 = cVar7 + -0x20;
                  if (0x19 < (byte)(cVar7 + 0x9fU)) {
                    cVar8 = cVar7;
                  }
                  if (cVar8 != 'E') goto LAB_0209ae75;
                }
                pcVar9 = &DAT_020a3b17;
                if (pcVar5[4] != '\0') goto LAB_0209ae75;
              }
            }
          }
          if (*pcVar9 != '\0') goto LAB_0209ae75;
          local_31 = '\x01';
LAB_0209b04b:
          uVar10 = 0;
          do {
            recovered_2000bb0((void *)local_40[uVar10]);
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_50[0]);
        }
        else {
          cVar7 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar7 = cVar1;
          }
          if (cVar7 == 'E') goto LAB_0209add1;
LAB_0209ae75:
          if (cVar1 == 'i') {
LAB_0209ae92:
            cVar7 = pcVar5[1];
            pcVar9 = &DAT_020a3dc1;
            if (cVar7 != '\0') {
              if (cVar7 != 'f') {
                cVar8 = cVar7 + -0x20;
                if (0x19 < (byte)(cVar7 + 0x9fU)) {
                  cVar8 = cVar7;
                }
                if (cVar8 != 'F') goto LAB_0209aee8;
              }
              pcVar9 = &DAT_020a3dc2;
              if (pcVar5[2] != '\0') goto LAB_0209aee8;
            }
LAB_0209aed0:
            if (*pcVar9 != '\0') {
              pcVar9 = &DAT_020a3b0c;
              if (cVar1 != '\0') goto LAB_0209aee8;
              goto LAB_0209b020;
            }
          }
          else {
            cVar7 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar7 = cVar1;
            }
            if (cVar7 == 'I') goto LAB_0209ae92;
LAB_0209aee8:
            if (cVar1 != 'e') {
              cVar7 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar7 = cVar1;
              }
              if (cVar7 != 'E') goto LAB_0209b11e;
            }
            cVar1 = pcVar5[1];
            pcVar9 = &DAT_020a3b0d;
            if (cVar1 != '\0') {
              if (cVar1 != 'l') {
                cVar7 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar7 = cVar1;
                }
                if (cVar7 != 'L') goto LAB_0209b11e;
              }
              cVar1 = pcVar5[2];
              pcVar9 = &DAT_020a3b0e;
              if (cVar1 != '\0') {
                if (cVar1 != 's') {
                  cVar7 = cVar1 + -0x20;
                  if (0x19 < (byte)(cVar1 + 0x9fU)) {
                    cVar7 = cVar1;
                  }
                  if (cVar7 != 'S') goto LAB_0209b11e;
                }
                cVar1 = pcVar5[3];
                pcVar9 = &DAT_020a3b0f;
                if (cVar1 != '\0') {
                  if (cVar1 != 'e') {
                    cVar7 = cVar1 + -0x20;
                    if (0x19 < (byte)(cVar1 + 0x9fU)) {
                      cVar7 = cVar1;
                    }
                    if (cVar7 != 'E') goto LAB_0209b11e;
                  }
                  cVar1 = pcVar5[4];
                  pcVar9 = &DAT_020a3b10;
                  if (cVar1 != '\0') {
                    if (cVar1 != 'i') {
                      cVar7 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar7 = cVar1;
                      }
                      if (cVar7 != 'I') goto LAB_0209b11e;
                    }
                    cVar1 = pcVar5[5];
                    pcVar9 = &DAT_020a3b11;
                    if (cVar1 != '\0') {
                      if (cVar1 != 'f') {
                        cVar7 = cVar1 + -0x20;
                        if (0x19 < (byte)(cVar1 + 0x9fU)) {
                          cVar7 = cVar1;
                        }
                        if (cVar7 != 'F') goto LAB_0209b11e;
                      }
                      pcVar9 = &DAT_020a3b12;
                      if (pcVar5[6] != '\0') goto LAB_0209b11e;
                    }
                  }
                }
              }
            }
LAB_0209b020:
            if (*pcVar9 != '\0') goto LAB_0209b11e;
          }
          uVar3 = recovered_20e18e0((long)&local_68,local_50,pcVar5,(long)&local_31,in_R9);
          if (uVar3 == '\0') {
            if (local_50[0] != 0) {
              uVar6 = 0;
              do {
                recovered_2000bb0((void *)local_40[uVar6]);
                uVar6 = uVar6 + 1;
              } while (uVar6 < local_50[0]);
            }
            recovered_2000bb0(local_40);
            return '\0';
          }
          if (local_50[0] != 0) goto LAB_0209b04b;
        }
        recovered_2000bb0(local_40);
        local_50[0] = 0;
        local_50[1] = 0;
        local_40 = (undefined8 *)0x0;
        in_R9 = (ulong *)&local_32;
        uVar3 = recovered_209f710(param_1,param_2,uVar2 + 1,&local_58,(undefined1 *)in_R9);
        if (uVar3 != '\0') {
          if (local_31 != '\0') {
            bVar11 = true;
            local_70 = local_58;
            uVar6 = uVar2 + 1;
          }
          if (local_32 == '\0') {
            *param_4 = uVar6;
            *param_5 = local_70;
            *param_6 = local_58 + 1;
            *param_7 = bVar11;
            return '\x01';
          }
          goto LAB_0209ad14;
        }
        goto LAB_0209b0f2;
      }
      if (local_50[0] != 0) {
        uVar6 = 0;
        do {
          recovered_2000bb0((void *)local_40[uVar6]);
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_50[0]);
      }
      recovered_2000bb0(local_40);
      local_50[0] = 0;
      local_50[1] = 0;
      local_40 = (undefined8 *)0x0;
      pcVar9 = &DAT_020a3dc0;
      pcVar5 = str_020ab52b;
    }
    else {
LAB_0209b0e3:
      local_60 = &DAT_020a259c;
      local_31 = '\0';
LAB_0209b0f2:
      pcVar9 = &DAT_020a3b08;
      pcVar5 = str_020a3dc3;
    }
LAB_0209b100:
    pf_varargs_205eb00___(&local_68,pcVar9,pcVar5);
  }
  return '\0';
}
