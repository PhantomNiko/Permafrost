/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a427e (*(uint8_t *)(0x20ede4eU))
#define DAT_020a427f (*(uint8_t *)(0x20ede4fU))
#define DAT_020a4280 (*(uint8_t *)(0x20ede50U))
#define DAT_020a4281 (*(uint8_t *)(0x20ede51U))
#define DAT_020a4282 (*(uint8_t *)(0x20ede52U))
#define str_020a41be (*(char (*)[1])(0x20f4979U))
#define str_020a4283 (*(char (*)[1])(0x20ee540U))
#define str_020a4318 (*(char (*)[1])(0x20f4ac8U))
#define str_020a4371 (*(char (*)[1])(0x20f4b1eU))
uchar recovered_20a56e0(int *param_1,byte *param_2,undefined8 *param_3,undefined8 in_R8,
                       undefined8 in_R9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  char *pcVar8;
  byte bVar9;
  byte bVar10;

  if (param_3 == (undefined8 *)0x0 || param_2 == (byte *)0x0) {
    return '\0';
  }
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  uVar4 = recovered_2002e80((char *)param_2);
  if ((uVar4 < 2) ||
     (((bVar2 = *param_2, bVar2 != 0x27 && (bVar2 != 0x22)) || (param_2[uVar4 - 1] != bVar2)))) {
    uVar1 = recovered_20a5ce0((long)param_2,(int *)((long)param_3 + 4));
    if (uVar1 == '\0') {
      bVar2 = *param_2;
      pcVar8 = &DAT_020a427e;
      if (bVar2 != 0) {
        if ((bVar2 == 0x2d) || (bVar2 == 0x2b)) {
          lVar6 = 1;
          bVar5 = param_2[1];
        }
        else {
          lVar6 = 0;
          bVar5 = bVar2;
        }
        if (bVar5 != 0) {
          bVar9 = bVar5 - 0x30U;
          bVar10 = bVar9;
          while (bVar10 < 10) {
            bVar5 = param_2[lVar6 + 1];
            if (bVar5 == 0) goto LAB_02067f4c;
            lVar6 = lVar6 + 1;
            bVar10 = bVar5 - 0x30U;
          }
          if (bVar5 == 0x2e) {
            if (param_2[lVar6 + 1] == 0) {
              if (bVar9 < 10) {
LAB_02067f4c:
                uVar1 = recovered_20a5f80((char *)param_2,(float *)(param_3 + 1));
                if (uVar1 != '\0') {
                  *(undefined4 *)param_3 = 2;
                  *(int *)((long)param_3 + 4) = (int)*(float *)(param_3 + 1);
                  goto LAB_0206821b;
                }
                bVar2 = *param_2;
              }
            }
            else if ((byte)(param_2[lVar6 + 1] - 0x30U) < 10) {
              pbVar7 = param_2 + lVar6 + 2;
              do {
                bVar5 = *pbVar7;
                if (bVar5 == 0) goto LAB_02067f4c;
                pbVar7 = pbVar7 + 1;
              } while ((byte)(bVar5 - 0x30U) < 10);
            }
          }
        }
        if (bVar2 == 0) goto LAB_02068035;
        if (bVar2 == 0x74) {
LAB_02067f9e:
          bVar5 = param_2[1];
          if (bVar5 == 0) {
            pcVar8 = &DAT_020a427f;
          }
          else {
            if (bVar5 != 0x72) {
              bVar10 = bVar5 - 0x20;
              if (0x19 < (byte)(bVar5 + 0x9f)) {
                bVar10 = bVar5;
              }
              if (bVar10 != 0x52) goto LAB_02068040;
            }
            bVar5 = param_2[2];
            if (bVar5 == 0) {
              pcVar8 = &DAT_020a4280;
            }
            else {
              if (bVar5 != 0x75) {
                bVar10 = bVar5 - 0x20;
                if (0x19 < (byte)(bVar5 + 0x9f)) {
                  bVar10 = bVar5;
                }
                if (bVar10 != 0x55) goto LAB_02068040;
              }
              bVar5 = param_2[3];
              if (bVar5 == 0) {
                pcVar8 = &DAT_020a4281;
              }
              else {
                if (bVar5 != 0x65) {
                  bVar10 = bVar5 - 0x20;
                  if (0x19 < (byte)(bVar5 + 0x9f)) {
                    bVar10 = bVar5;
                  }
                  if (bVar10 != 0x45) goto LAB_02068040;
                }
                if (param_2[4] != 0) goto LAB_02068040;
                pcVar8 = &DAT_020a4282;
              }
            }
          }
          goto LAB_02068035;
        }
        bVar5 = bVar2;
        if ((byte)(bVar2 + 0x9f) < 0x1a) {
          bVar5 = bVar2 - 0x20;
        }
        if (bVar5 == 0x54) goto LAB_02067f9e;
LAB_02068040:
        if (bVar2 != 0) {
          if (bVar2 == 0x66) {
LAB_02068069:
            bVar5 = param_2[1];
            if (bVar5 == 0) {
              pcVar8 = str_020a4283 + 1;
            }
            else {
              if (bVar5 != 0x61) {
                bVar10 = bVar5 - 0x20;
                if (0x19 < (byte)(bVar5 + 0x9f)) {
                  bVar10 = bVar5;
                }
                if (bVar10 != 0x41) goto LAB_02068171;
              }
              bVar5 = param_2[2];
              if (bVar5 == 0) {
                pcVar8 = str_020a4283 + 2;
              }
              else {
                if (bVar5 != 0x6c) {
                  bVar10 = bVar5 - 0x20;
                  if (0x19 < (byte)(bVar5 + 0x9f)) {
                    bVar10 = bVar5;
                  }
                  if (bVar10 != 0x4c) goto LAB_02068171;
                }
                bVar5 = param_2[3];
                if (bVar5 == 0) {
                  pcVar8 = str_020a4283 + 3;
                }
                else {
                  if (bVar5 != 0x73) {
                    bVar10 = bVar5 - 0x20;
                    if (0x19 < (byte)(bVar5 + 0x9f)) {
                      bVar10 = bVar5;
                    }
                    if (bVar10 != 0x53) goto LAB_02068171;
                  }
                  bVar5 = param_2[4];
                  if (bVar5 == 0) {
                    pcVar8 = str_020a4283 + 4;
                  }
                  else {
                    if (bVar5 != 0x65) {
                      bVar10 = bVar5 - 0x20;
                      if (0x19 < (byte)(bVar5 + 0x9f)) {
                        bVar10 = bVar5;
                      }
                      if (bVar10 != 0x45) goto LAB_02068171;
                    }
                    if (param_2[5] != 0) goto LAB_02068171;
                    pcVar8 = str_020a4283 + 5;
                  }
                }
              }
            }
            if (*pcVar8 == '\0') {
              *param_3 = 5;
              *(undefined4 *)(param_3 + 1) = 0;
              goto LAB_02068209;
            }
            if (bVar2 == 0) goto LAB_020681c6;
          }
          else {
            bVar5 = bVar2 - 0x20;
            if (0x19 < (byte)(bVar2 + 0x9f)) {
              bVar5 = bVar2;
            }
            if (bVar5 == 0x46) goto LAB_02068069;
          }
LAB_02068171:
          if ((((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) || (bVar2 == 0x5f)) || (bVar2 == 0x24)) {
            bVar2 = param_2[1];
            if (bVar2 != 0) {
              pbVar7 = param_2 + 2;
              do {
                if ((((bVar2 != 0x2e) && (bVar2 != 0x24)) && (bVar2 != 0x5f)) &&
                   ((9 < (byte)(bVar2 - 0x30U) && (0x19 < (byte)((bVar2 & 0xdf) + 0xbf)))))
                goto LAB_020681c6;
                bVar2 = *pbVar7;
                pbVar7 = pbVar7 + 1;
              } while (bVar2 != 0);
            }
            uVar3 = recovered_20a0820((undefined4 *)param_3,param_2);
            if ((char)uVar3 != '\0') {
              return '\x01';
            }
            pcVar8 = str_020a41be;
            goto LAB_020681cd;
          }
        }
LAB_020681c6:
        pcVar8 = str_020a4318;
        goto LAB_020681cd;
      }
LAB_02068035:
      if (*pcVar8 != '\0') goto LAB_02068040;
      *param_3 = 0x100000005;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
LAB_02068209:
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
    }
    else {
      *(undefined4 *)param_3 = 1;
      *(float *)(param_3 + 1) = (float)*(int *)((long)param_3 + 4);
    }
LAB_0206821b:
    uVar1 = '\x01';
  }
  else {
    uVar1 = recovered_20a5c10((char *)param_2,(undefined4 *)param_3);
    if (uVar1 != '\0') {
      return '\x01';
    }
    pcVar8 = str_020a4371;
LAB_020681cd:
    uVar1 = '\0';
    pf_varargs_205eb00___(param_1,(char *)param_2,pcVar8);
  }
  return uVar1;
}
