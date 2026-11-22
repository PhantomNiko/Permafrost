/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208ffe0 (*(uint8_t *)(0x20c69e5U))
#define DAT_0208ffe1 (*(uint8_t *)(0x20c69e6U))
#define DAT_0208ffe2 (*(uint8_t *)(0x20c69e7U))
#define DAT_0208ffe3 (*(uint8_t *)(0x20c69e8U))
#define DAT_0208ffe4 (*(uint8_t *)(0x20c69e9U))
#define str_0208ff20 (*(char (*)[1])(0x20cd517U))
#define str_0208ffe5 (*(char (*)[1])(0x20c70d7U))
#define str_0209007a (*(char (*)[1])(0x20cd666U))
#define str_020900d3 (*(char (*)[1])(0x20cd6bcU))
undefined4 recovered_2082cb0(int *incoming_ecx,byte *incoming_edx,undefined4 *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uchar uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  char *pcVar10;

  if (param_3 == (undefined4 *)0x0 || incoming_edx == (byte *)0x0) {
    return 0;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  uVar5 = recovered_2002270((char *)incoming_edx);
  if ((1 < uVar5) &&
     (((bVar4 = *incoming_edx, bVar4 == 0x27 || (bVar4 == 0x22)) &&
      (incoming_edx[uVar5 - 1] == bVar4)))) {
    uVar6 = recovered_20831d0((char *)incoming_edx,param_3);
    if ((char)uVar6 != '\0') {
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    pcVar10 = str_020900d3;
    goto LAB_02058cfe;
  }
  uVar2 = recovered_2083290((long)incoming_edx,param_3 + 1);
  if (uVar2 != '\0') {
    *param_3 = 1;
    param_3[2] = PF_RAW32((float)(int)param_3[1]);
    return CONCAT31((int3)((uint)param_3[1] >> 8),1);
  }
  bVar4 = *incoming_edx;
  pcVar10 = &DAT_0208ffe0;
  if (bVar4 == 0) {
LAB_02058b71:
    if (*pcVar10 == '\0') {
      *param_3 = 5;
      param_3[1] = 1;
      param_3[2] = 0x3f800000;
      goto LAB_02058d41;
    }
  }
  else {
    if ((bVar4 == 0x2d) || (iVar7 = 0, bVar3 = bVar4, bVar4 == 0x2b)) {
      bVar3 = incoming_edx[1];
      iVar7 = 1;
    }
    if (bVar3 != 0) {
      bVar9 = 0;
      bVar1 = false;
      do {
        if ((byte)(bVar3 - 0x30U) < 10) {
          do {
            bVar3 = incoming_edx[iVar7 + 1];
            if (bVar3 == 0) goto LAB_02058a8a;
            iVar7 = iVar7 + 1;
          } while ((byte)(bVar3 - 0x30U) < 10);
          bVar1 = true;
        }
        if ((bool)(bVar3 != 0x2e | bVar9)) goto LAB_02058acd;
        bVar3 = incoming_edx[iVar7 + 1];
        iVar7 = iVar7 + 1;
        bVar9 = 1;
      } while (bVar3 != 0);
      if (bVar1) {
LAB_02058a8a:
        uVar2 = recovered_2083500((char *)incoming_edx,(float *)(param_3 + 2));
        if (uVar2 != '\0') {
          *param_3 = 2;
          param_3[1] = (int)ROUND(pf_bits_float((uint32_t)param_3[2]));
          return CONCAT31((int3)((uint)(int)ROUND(pf_bits_float((uint32_t)param_3[2])) >> 8),1);
        }
        bVar4 = *incoming_edx;
      }
    }
LAB_02058acd:
    if (bVar4 == 0) {
      pcVar10 = &DAT_0208ffe0;
      goto LAB_02058b71;
    }
    if (bVar4 == 0x74) {
LAB_02058afa:
      bVar3 = incoming_edx[1];
      if (bVar3 == 0) {
        pcVar10 = &DAT_0208ffe1;
      }
      else {
        if (bVar3 != 0x72) {
          if ((byte)(bVar3 + 0x9f) < 0x1a) {
            bVar3 = bVar3 - 0x20;
          }
          if (bVar3 != 0x52) goto LAB_02058b79;
        }
        bVar3 = incoming_edx[2];
        if (bVar3 == 0) {
          pcVar10 = &DAT_0208ffe2;
        }
        else {
          if (bVar3 != 0x75) {
            if ((byte)(bVar3 + 0x9f) < 0x1a) {
              bVar3 = bVar3 - 0x20;
            }
            if (bVar3 != 0x55) goto LAB_02058b79;
          }
          bVar3 = incoming_edx[3];
          if (bVar3 == 0) {
            pcVar10 = &DAT_0208ffe3;
          }
          else {
            if (bVar3 != 0x65) {
              if ((byte)(bVar3 + 0x9f) < 0x1a) {
                bVar3 = bVar3 - 0x20;
              }
              if (bVar3 != 0x45) goto LAB_02058b79;
            }
            if (incoming_edx[4] != 0) goto LAB_02058b79;
            pcVar10 = &DAT_0208ffe4;
          }
        }
      }
      goto LAB_02058b71;
    }
    if ((byte)(bVar4 + 0x9f) < 0x1a) {
      bVar3 = bVar4 - 0x20;
    }
    else {
      bVar3 = bVar4;
    }
    if (bVar3 == 0x54) goto LAB_02058afa;
  }
LAB_02058b79:
  if (bVar4 != 0) {
    if (bVar4 == 0x66) {
LAB_02058bba:
      bVar3 = incoming_edx[1];
      if (bVar3 == 0) {
        pcVar10 = str_0208ffe5 + 1;
      }
      else {
        if (bVar3 != 0x61) {
          if ((byte)(bVar3 + 0x9f) < 0x1a) {
            bVar3 = bVar3 - 0x20;
          }
          if (bVar3 != 0x41) goto LAB_02058ca1;
        }
        bVar3 = incoming_edx[2];
        if (bVar3 == 0) {
          pcVar10 = str_0208ffe5 + 2;
        }
        else {
          if (bVar3 != 0x6c) {
            if ((byte)(bVar3 + 0x9f) < 0x1a) {
              bVar3 = bVar3 - 0x20;
            }
            if (bVar3 != 0x4c) goto LAB_02058ca1;
          }
          bVar3 = incoming_edx[3];
          if (bVar3 == 0) {
            pcVar10 = str_0208ffe5 + 3;
          }
          else {
            if (bVar3 != 0x73) {
              if ((byte)(bVar3 + 0x9f) < 0x1a) {
                bVar3 = bVar3 - 0x20;
              }
              if (bVar3 != 0x53) goto LAB_02058ca1;
            }
            bVar3 = incoming_edx[4];
            if (bVar3 == 0) {
              pcVar10 = str_0208ffe5 + 4;
            }
            else {
              if (bVar3 != 0x65) {
                if ((byte)(bVar3 + 0x9f) < 0x1a) {
                  bVar3 = bVar3 - 0x20;
                }
                if (bVar3 != 0x45) goto LAB_02058ca1;
              }
              if (incoming_edx[5] != 0) goto LAB_02058ca1;
              pcVar10 = str_0208ffe5 + 5;
            }
          }
        }
      }
      if (*pcVar10 == '\0') {
        *param_3 = 5;
        param_3[1] = 0;
        param_3[2] = 0;
LAB_02058d41:
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
        param_3[8] = 0;
        return CONCAT31((int3)((uint)pcVar10 >> 8),1);
      }
      if (bVar4 == 0) goto LAB_02058cf6;
    }
    else {
      if ((byte)(bVar4 + 0x9f) < 0x1a) {
        bVar3 = bVar4 - 0x20;
      }
      else {
        bVar3 = bVar4;
      }
      if (bVar3 == 0x46) goto LAB_02058bba;
    }
LAB_02058ca1:
    if ((((byte)((bVar4 & 0xdf) + 0xbf) < 0x1a) || (bVar4 == 0x5f)) || (bVar4 == 0x24)) {
      bVar4 = incoming_edx[1];
      if (bVar4 != 0) {
        pbVar8 = incoming_edx + 2;
        do {
          if ((((bVar4 != 0x2e) && (bVar4 != 0x24)) && (bVar4 != 0x5f)) &&
             ((9 < (byte)(bVar4 - 0x30U) && (0x19 < (byte)((bVar4 & 0xdf) + 0xbf)))))
          goto LAB_02058cf6;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 != 0);
      }
      uVar6 = recovered_207e340(param_3,(char *)incoming_edx);
      if ((char)uVar6 != '\0') {
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      pcVar10 = str_0208ff20;
      goto LAB_02058cfe;
    }
  }
LAB_02058cf6:
  pcVar10 = str_0209007a;
LAB_02058cfe:
  pf_varargs_204ff60___(incoming_ecx,(char *)incoming_edx,pcVar10);
  return 0;
}
