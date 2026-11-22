/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c555e (*(uint8_t *)(0x20c555eU))
#define DAT_020c5580 (*(uint8_t *)(0x20c5580U))
#define DAT_020c55a6 (*(uint8_t *)(0x20c55a6U))
#define DAT_020cb03e (*(uint8_t *)(0x20cb03eU))
#define DAT_020cb03f (*(uint8_t *)(0x20cb03fU))
#define DAT_020cb040 (*(uint8_t *)(0x20cb040U))
#define DAT_020cb041 (*(uint8_t *)(0x20cb041U))
#define DAT_020cb043 (*(uint8_t *)(0x20cb043U))
#define DAT_020cb044 (*(uint8_t *)(0x20cb044U))
#define DAT_020cb045 (*(uint8_t *)(0x20cb045U))
#define DAT_020cb046 (*(uint8_t *)(0x20cb046U))
#define DAT_020cb3d9 (*(uint8_t *)(0x20cb3d9U))
#define DAT_020cd795 (*(uint8_t *)(0x20cd795U))
#define DAT_020cd796 (*(uint8_t *)(0x20cd796U))
#define DAT_020cd797 (*(uint8_t *)(0x20cd797U))
#define DAT_020cd798 (*(uint8_t *)(0x20cd798U))
#define DAT_020cd799 (*(uint8_t *)(0x20cd799U))
#define DAT_020cd79a (*(uint8_t *)(0x20cd79aU))
#define DAT_020ceab4 (*(uint8_t *)(0x20ceab4U))
#define DAT_020d2d67 (*(uint8_t *)(0x20d2d67U))
#define DAT_020d2d68 (*(uint8_t *)(0x20d2d68U))
#define DAT_020d2d69 (*(uint8_t *)(0x20d2d69U))
#define DAT_020d2d6a (*(uint8_t *)(0x20d2d6aU))
#define DAT_020d2d6b (*(uint8_t *)(0x20d2d6bU))
#define DAT_020d2f4a (*(uint8_t *)(0x20d2f4aU))
#define DAT_020de328 (*(uint8_t volatile *)(0x20de328U))
#define DAT_02148014 (*(uint32_t volatile *)(0x2148014U))
#define DAT_02148018 (*(uint32_t volatile *)(0x2148018U))
#define DAT_0223de29 (*(uint8_t volatile *)(0x223de29U))
#define DAT_0224522c (*(uint32_t volatile *)(0x224522cU))
#define DAT_02245230 (*(uint32_t volatile *)(0x2245230U))
#define str_020cdd76 (*(char (*)[1])(0x20cdd76U))
#define str_020cea9b (*(char (*)[1])(0x20cea9bU))
#define str_020ceab6 (*(char (*)[1])(0x20ceab6U))
#define str_020cead0 (*(char (*)[1])(0x20cead0U))
#define str_020cf0a0 (*(char (*)[1])(0x20cf0a0U))
#define str_020d2d26 (*(char (*)[1])(0x20d2d26U))
#define str_020d2d40 (*(char (*)[1])(0x20d2d40U))
#define str_020d2d48 (*(char (*)[1])(0x20d2d48U))
#define str_020d2d6c (*(char (*)[1])(0x20d2d6cU))
#define str_020d2da4 (*(char (*)[1])(0x20d2da4U))
#define str_020d2dc0 (*(char (*)[1])(0x20d2dc0U))
#define str_020d2de5 (*(char (*)[1])(0x20d2de5U))
#define str_020d2dfd (*(char (*)[1])(0x20d2dfdU))
#define str_020d2e08 (*(char (*)[1])(0x20d2e08U))
#define str_020d2e14 (*(char (*)[1])(0x20d2e14U))
#define str_020d2e1f (*(char (*)[1])(0x20d2e1fU))
#define str_020d2e48 (*(char (*)[1])(0x20d2e48U))
#define str_020d2e5d (*(char (*)[1])(0x20d2e5dU))
#define str_020d2e64 (*(char (*)[1])(0x20d2e64U))
#define str_020d2e8c (*(char (*)[1])(0x20d2e8cU))
#define str_020d2eb1 (*(char (*)[1])(0x20d2eb1U))
#define str_020d2eda (*(char (*)[1])(0x20d2edaU))
#define str_020d2ee7 (*(char (*)[1])(0x20d2ee7U))
#define str_020d2f07 (*(char (*)[1])(0x20d2f07U))
#define str_020d2f20 (*(char (*)[1])(0x20d2f20U))
#define str_020d2f3b (*(char (*)[1])(0x20d2f3bU))
#define str_020d2f4f (*(char (*)[1])(0x20d2f4fU))
#define str_020d2f71 (*(char (*)[1])(0x20d2f71U))
#define str_020d2f95 (*(char (*)[1])(0x20d2f95U))
#define str_020d2fb3 (*(char (*)[1])(0x20d2fb3U))
#define str_020d2fdc (*(char (*)[1])(0x20d2fdcU))
#define str_020d300d (*(char (*)[1])(0x20d300dU))
#define str_020d3019 (*(char (*)[1])(0x20d3019U))
#define str_020d3044 (*(char (*)[1])(0x20d3044U))
#define str_020d3057 (*(char (*)[1])(0x20d3057U))
#define str_020d3098 (*(char (*)[1])(0x20d3098U))
#define str_020d30ca (*(char (*)[1])(0x20d30caU))
#define str_020d3820 (*(char (*)[1])(0x20d3820U))
#define str_020d384d (*(char (*)[1])(0x20d384dU))
#define local_180 (*(undefined4 *)(frame + 608))
#define local_17c (*(undefined4 * *)(frame + 612))
#define local_178 (*(undefined4 *)(frame + 616))
#define local_a4 (*(uchar * (*)[9])(frame + 828))
#define local_80 (*(uchar * *)(frame + 864))
#define local_7c (*(uint *)(frame + 868))
#define local_78 (*(uint *)(frame + 872))
#define local_74 (*(uchar * *)(frame + 876))
#define local_70 (*(uchar * *)(frame + 880))
#define local_6c (*(uchar * *)(frame + 884))
#define local_68 (*(undefined4 *)(frame + 888))
#define local_64 (*(undefined4 *)(frame + 892))
#define local_60 (*(undefined4 *)(frame + 896))
#define local_5c (*(undefined4 *)(frame + 900))
#define local_58 (*(undefined4 *)(frame + 904))
#define local_54 (*(undefined4 *)(frame + 908))
#define local_50 (*(undefined4 * *)(frame + 912))
#define local_4c (*(undefined4 *)(frame + 916))
#define local_48 (*(uchar * *)(frame + 920))
#define local_44 (*(undefined4 *)(frame + 924))
#define local_40 (*(undefined4 *)(frame + 928))
#define local_3c (*(undefined4 *)(frame + 932))
#define local_38 (*(undefined4 *)(frame + 936))
#define local_34 (*(undefined4 *)(frame + 940))
#define local_30 (*(uchar ** *)(frame + 944))
#define local_2c (*(undefined4 *)(frame + 948))
#define local_28 (*(undefined4 *)(frame + 952))
#define local_24 (*(uchar * *)(frame + 956))
#define local_20 (*(uchar * *)(frame + 960))
#define local_1c (*(uchar * *)(frame + 964))
#define local_18 (*(int * *)(frame + 968))
#define local_14 (*(char * *)(frame + 972))
#define in_stack_fffffc38 (*(undefined * *)(frame + 24))
#define in_stack_fffffc3c (*(uchar * *)(frame + 28))
#define in_stack_fffffc40 (*(uchar ** *)(frame + 32))
#define local_3b8 (*(uchar * (*)[68])(frame + 40))
#define local_2a8 (*(uchar * *)(frame + 312))
#define local_2a4 (*(undefined4 *)(frame + 316))
#define local_2a0 (*(undefined4 *)(frame + 320))
#define local_29c (*(undefined4 *)(frame + 324))
#define local_298 (*(undefined4 *)(frame + 328))
#define local_294 (*(undefined4 *)(frame + 332))
#define local_290 (*(int *)(frame + 336))
#define local_28c (*(undefined4 *)(frame + 340))
#define local_288 (*(undefined4 *)(frame + 344))
#define local_198 (*(uchar * *)(frame + 584))
#define local_194 (*(uint *)(frame + 588))
#define local_190 (*(undefined4 *)(frame + 592))
#define local_18c (*(undefined4 *)(frame + 596))
#define local_188 (*(undefined4 *)(frame + 600))
#define local_184 (*(undefined4 *)(frame + 604))


uint recovered_2098720(int *incoming_ecx,char *incoming_edx,int *param_3,uint param_4,uint *param_5)

{
  unsigned char frame[1024] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar **ppuVar5;
  uint *puVar6;
  uchar *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uchar *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uchar in_CL;
  uchar extraout_CL;
  uchar extraout_CL_00;
  uchar extraout_CL_01;
  uchar extraout_CL_02;
  uchar in_CL_00;
  uchar in_CL_01;
  uchar in_CL_02;
  uchar in_CL_03;
  uchar extraout_CL_03;
  uchar extraout_CL_04;
  uchar extraout_CL_05;
  uchar extraout_CL_06;
  uchar extraout_CL_07;
  uchar extraout_CL_08;
  uchar in_CL_04;
  uchar in_CL_05;
  uchar *vararg2;
  uchar in_DL;
  uchar in_DL_00;
  uchar extraout_DL;
  uchar extraout_DL_00;
  uchar extraout_DL_01;
  uint incoming_edx_00;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint incoming_edx_01;
  uint extraout_EDX_01 = 0;
  uint incoming_edx_02;
  uint extraout_EDX_02 = 0;
  uint extraout_EDX_03 = 0;
  uint extraout_EDX_04 = 0;
  uint extraout_EDX_05 = 0;
  uint extraout_EDX_06 = 0;
  uint extraout_EDX_07 = 0;
  uint incoming_edx_03;
  uint extraout_EDX_08 = 0;
  uint extraout_EDX_09 = 0;
  uint incoming_edx_04;
  uint extraout_EDX_10 = 0;
  uint extraout_EDX_11 = 0;
  uint extraout_EDX_12 = 0;
  uint extraout_EDX_13 = 0;
  uint incoming_edx_05;
  uint incoming_edx_06;
  uint extraout_EDX_14 = 0;
  uint extraout_EDX_15 = 0;
  uint incoming_edx_07;
  uint extraout_EDX_16 = 0;
  uint extraout_EDX_17 = 0;
  uint extraout_EDX_18 = 0;
  uint extraout_EDX_19 = 0;
  uint extraout_EDX_20 = 0;
  uint extraout_EDX_21 = 0;
  uint incoming_edx_08;
  uint extraout_EDX_22 = 0;
  uint extraout_EDX_23 = 0;
  uint extraout_EDX_24 = 0;
  uint incoming_edx_09;
  uint incoming_edx_10;
  uint incoming_edx_11;
  uint extraout_EDX_25 = 0;
  uint extraout_EDX_26 = 0;
  uint extraout_EDX_27 = 0;
  uint extraout_EDX_28 = 0;
  uint extraout_EDX_29 = 0;
  uint extraout_EDX_30 = 0;
  uint incoming_edx_12;
  uint incoming_edx_13;
  uint incoming_edx_14;
  uint extraout_EDX_31 = 0;
  uint incoming_edx_15;
  uint incoming_edx_16;
  uint extraout_EDX_32 = 0;
  uint incoming_edx_17;
  uint extraout_EDX_33 = 0;
  uint extraout_EDX_34 = 0;
  uint extraout_EDX_35 = 0;
  uint extraout_EDX_36 = 0;
  uint extraout_EDX_37 = 0;
  uint extraout_EDX_38 = 0;
  uint incoming_edx_18;
  uint extraout_EDX_39 = 0;
  uint extraout_EDX_40 = 0;
  uint extraout_EDX_41 = 0;
  uint extraout_EDX_42 = 0;
  uint extraout_EDX_43 = 0;
  uint extraout_EDX_44 = 0;
  uint extraout_EDX_45 = 0;
  uint extraout_EDX_46 = 0;
  char cVar14;
  uchar **unaff_EBX;
  undefined3 uVar15;
  char *pcVar16;
  uint uVar17;
  bool bVar18;
  byte bVar19;
  char *pcVar20;

  bVar19 = 0;
  if (param_3 == (int *)0x0 || param_4 == 0) {
    pcVar20 = str_020ceab6;
LAB_0209880b:
    pf_varargs_207a2e0__4__4_(incoming_ecx,incoming_edx,pcVar20,(uint)incoming_edx,1);
    return 0;
  }
  if ((*param_3 != 3) || (pcVar20 = (char *)param_3[3], pcVar20 == (char *)0x0)) {
    pcVar20 = str_020cead0;
    goto LAB_0209880b;
  }
  cVar1 = *pcVar20;
  local_14 = incoming_edx;
  if (cVar1 != '\0') {
    if (cVar1 == 'l') {
LAB_0209876d:
      cVar14 = pcVar20[1];
      if (cVar14 == '\0') {
        pcVar16 = &DAT_020cb03e;
      }
      else {
        if (cVar14 != 'o') {
          if ((byte)(cVar14 + 0x9fU) < 0x1a) {
            cVar14 = cVar14 + -0x20;
          }
          if (cVar14 != 'O') goto LAB_02098870;
        }
        cVar14 = pcVar20[2];
        if (cVar14 == '\0') {
          pcVar16 = &DAT_020cb03f;
        }
        else {
          if (cVar14 != 'a') {
            if ((byte)(cVar14 + 0x9fU) < 0x1a) {
              cVar14 = cVar14 + -0x20;
            }
            if (cVar14 != 'A') goto LAB_02098870;
          }
          cVar14 = pcVar20[3];
          if (cVar14 == '\0') {
            pcVar16 = &DAT_020cb040;
          }
          else {
            if (cVar14 != 'd') {
              if ((byte)(cVar14 + 0x9fU) < 0x1a) {
                cVar14 = cVar14 + -0x20;
              }
              if (cVar14 != 'D') goto LAB_02098870;
            }
            if (pcVar20[4] != '\0') goto LAB_02098870;
            pcVar16 = &DAT_020cb041;
          }
        }
      }
      if (*pcVar16 != '\0') goto LAB_02098870;
      local_2a8 = (uchar *)((uint)local_2a8 & 0xffffff00);
      if (param_4 == 2) {
        if ((param_3[9] != 3) || (param_3[0xc] == 0)) {
          pcVar20 = str_020cead0;
          goto LAB_02098a79;
        }
        uVar9 = recovered_20b20d0(param_3[0xc],(uchar *)0x0,(char *)0x0,(int)local_3b8,
                                  (uchar *)&local_2a8);
        if ((char)uVar9 != '\0') {
          cVar1 = DAT_0223de29;
          if (cVar1 == '\0') {
            recovered_2027720(in_CL);
          }
          *param_5 = 5;
          param_5[1] = 1;
          param_5[2] = 0x3f800000;
          param_5[3] = 0;
          param_5[4] = 0;
          param_5[5] = 0;
          param_5[6] = 0;
          param_5[7] = 0;
          param_5[8] = 0;
          return CONCAT31((int3)((uint)&local_2a8 >> 8),1);
        }
        goto LAB_02099eba;
      }
      in_stack_fffffc38 = &DAT_020ceab4;
      pcVar20 = str_020cea9b;
LAB_02098a79:
      pf_varargs_207a2e0__4__4__4_
                (incoming_ecx,incoming_edx,pcVar20,(uint)incoming_edx,2,(uint)in_stack_fffffc38);
      pcVar20 = str_020d2d26;
      goto LAB_02098c6b;
    }
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      if (cVar1 == 'l') goto LAB_0209876d;
    }
    else if (cVar1 == 'L') goto LAB_0209876d;
LAB_02098870:
    if (cVar1 == 'p') {
LAB_02098878:
      cVar14 = pcVar20[1];
      if (cVar14 == '\0') {
        pcVar16 = str_020d2d40 + 1;
        unaff_EBX = (uchar **)0x0;
      }
      else {
        if (cVar14 != 'a') {
          if ((byte)(cVar14 + 0x9fU) < 0x1a) {
            cVar14 = cVar14 + -0x20;
          }
          if (cVar14 != 'A') goto LAB_02098abf;
        }
        cVar14 = pcVar20[2];
        if (cVar14 == '\0') {
          pcVar16 = str_020d2d40 + 2;
          unaff_EBX = (uchar **)0x0;
        }
        else {
          if (cVar14 != 'c') {
            if ((byte)(cVar14 + 0x9fU) < 0x1a) {
              cVar14 = cVar14 + -0x20;
            }
            if (cVar14 != 'C') goto LAB_02098abf;
          }
          cVar14 = pcVar20[3];
          if (cVar14 == '\0') {
            pcVar16 = str_020d2d40 + 3;
            unaff_EBX = (uchar **)0x0;
          }
          else {
            if (cVar14 != 'k') {
              if ((byte)(cVar14 + 0x9fU) < 0x1a) {
                cVar14 = cVar14 + -0x20;
              }
              if (cVar14 != 'K') goto LAB_02098abf;
            }
            cVar14 = pcVar20[4];
            if (cVar14 == '\0') {
              pcVar16 = str_020d2d40 + 4;
              unaff_EBX = (uchar **)0x0;
            }
            else {
              if (cVar14 != 'a') {
                if ((byte)(cVar14 + 0x9fU) < 0x1a) {
                  cVar14 = cVar14 + -0x20;
                }
                if (cVar14 != 'A') goto LAB_02098abf;
              }
              cVar14 = pcVar20[5];
              if (cVar14 == '\0') {
                pcVar16 = str_020d2d40 + 5;
                unaff_EBX = (uchar **)0x0;
              }
              else {
                if (cVar14 != 'g') {
                  if ((byte)(cVar14 + 0x9fU) < 0x1a) {
                    cVar14 = cVar14 + -0x20;
                  }
                  if (cVar14 != 'G') goto LAB_02098abf;
                }
                cVar14 = pcVar20[6];
                if (cVar14 == '\0') {
                  pcVar16 = str_020d2d40 + 6;
                  unaff_EBX = (uchar **)0x0;
                }
                else {
                  if (cVar14 != 'e') {
                    if ((byte)(cVar14 + 0x9fU) < 0x1a) {
                      cVar14 = cVar14 + -0x20;
                    }
                    if (cVar14 != 'E') goto LAB_02098abf;
                  }
                  unaff_EBX = (uchar **)0x0;
                  if (pcVar20[7] != '\0') goto LAB_02098abf;
                  pcVar16 = str_020d2d40 + 7;
                }
              }
            }
          }
        }
      }
      goto LAB_02098ab2;
    }
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      if (cVar1 == 'p') goto LAB_02098878;
    }
    else if (cVar1 == 'P') goto LAB_02098878;
LAB_02098abf:
    if (cVar1 != 'l') {
      cVar14 = cVar1;
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar14 = cVar1 + -0x20;
      }
      if (cVar14 == 'L') goto LAB_02098bbd;
LAB_02098c8d:
      if (cVar1 == 'd') {
LAB_02098cb7:
        cVar14 = pcVar20[1];
        if (cVar14 == '\0') {
          pcVar16 = str_020cdd76 + 1;
          unaff_EBX = (uchar **)0x0;
          goto LAB_020992ff;
        }
        if (cVar14 != 'e') {
          if ((byte)(cVar14 + 0x9fU) < 0x1a) {
            cVar14 = cVar14 + -0x20;
          }
          if (cVar14 != 'E') goto LAB_02099310;
        }
        cVar14 = pcVar20[2];
        if (cVar14 == '\0') {
          pcVar16 = str_020cdd76 + 2;
          unaff_EBX = (uchar **)0x0;
          goto LAB_020992ff;
        }
        if (cVar14 != 'v') {
          if ((byte)(cVar14 + 0x9fU) < 0x1a) {
            cVar14 = cVar14 + -0x20;
          }
          if (cVar14 != 'V') goto LAB_02099310;
        }
        cVar14 = pcVar20[3];
        if (cVar14 == '\0') {
          pcVar16 = str_020cdd76 + 3;
          unaff_EBX = (uchar **)0x0;
          goto LAB_020992ff;
        }
        if (cVar14 != 'i') {
          if ((byte)(cVar14 + 0x9fU) < 0x1a) {
            cVar14 = cVar14 + -0x20;
          }
          if (cVar14 != 'I') goto LAB_02099310;
        }
        cVar14 = pcVar20[4];
        if (cVar14 == '\0') {
          pcVar16 = str_020cdd76 + 4;
          unaff_EBX = (uchar **)0x0;
          goto LAB_020992ff;
        }
        if (cVar14 != 'c') {
          if ((byte)(cVar14 + 0x9fU) < 0x1a) {
            cVar14 = cVar14 + -0x20;
          }
          if (cVar14 != 'C') goto LAB_02099310;
        }
        cVar14 = pcVar20[5];
        if (cVar14 == '\0') {
          pcVar16 = str_020cdd76 + 5;
          unaff_EBX = (uchar **)0x0;
          goto LAB_020992ff;
        }
        if (cVar14 != 'e') {
          if ((byte)(cVar14 + 0x9fU) < 0x1a) {
            cVar14 = cVar14 + -0x20;
          }
          if (cVar14 != 'E') goto LAB_02099310;
        }
        cVar14 = pcVar20[6];
        if (cVar14 == '\0') {
          pcVar16 = str_020cdd76 + 6;
          unaff_EBX = (uchar **)0x0;
          goto LAB_020992ff;
        }
        if (cVar14 != 's') {
          if ((byte)(cVar14 + 0x9fU) < 0x1a) {
            cVar14 = cVar14 + -0x20;
          }
          if (cVar14 != 'S') goto LAB_02099310;
        }
        unaff_EBX = (uchar **)0x0;
        if (pcVar20[7] == '\0') {
          pcVar16 = str_020cdd76 + 7;
          goto LAB_020992ff;
        }
      }
      else {
        cVar14 = cVar1;
        if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          cVar14 = cVar1 + -0x20;
        }
        if (cVar14 == 'D') goto LAB_02098cb7;
      }
      goto LAB_02099310;
    }
LAB_02098bbd:
    cVar14 = pcVar20[1];
    if (cVar14 == '\0') {
      pcVar16 = &DAT_020cb043;
    }
    else {
      if (cVar14 != 'i') {
        if ((byte)(cVar14 + 0x9fU) < 0x1a) {
          cVar14 = cVar14 + -0x20;
        }
        if (cVar14 != 'I') goto LAB_02098c8d;
      }
      cVar14 = pcVar20[2];
      if (cVar14 == '\0') {
        pcVar16 = &DAT_020cb044;
      }
      else {
        if (cVar14 != 's') {
          if ((byte)(cVar14 + 0x9fU) < 0x1a) {
            cVar14 = cVar14 + -0x20;
          }
          if (cVar14 != 'S') goto LAB_02098c8d;
        }
        cVar14 = pcVar20[3];
        if (cVar14 == '\0') {
          pcVar16 = &DAT_020cb045;
        }
        else {
          if (cVar14 != 't') {
            if ((byte)(cVar14 + 0x9fU) < 0x1a) {
              cVar14 = cVar14 + -0x20;
            }
            if (cVar14 != 'T') goto LAB_02098c8d;
          }
          if (pcVar20[4] != '\0') goto LAB_02098c8d;
          pcVar16 = &DAT_020cb046;
        }
      }
    }
    unaff_EBX = (uchar **)0x0;
    if (*pcVar16 != '\0') {
      if (cVar1 == '\0') goto LAB_02098c9f;
      goto LAB_02098c8d;
    }
    local_48 = (uchar *)0x0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = (uchar **)0x0;
    local_2c = 0;
    local_28 = 0;
    if (param_4 != 1) {
      local_18 = incoming_ecx;
      pf_varargs_207a2e0__4__4__4_
                (incoming_ecx,incoming_edx,str_020cea9b,(uint)incoming_edx,1,0x20c5084);
      uVar9 = extraout_EDX_00;
LAB_02098ea5:
      in_stack_fffffc40 = (uchar **)0x2098ead;
      recovered_2043a90((uint *)&local_48,uVar9);
      pcVar20 = str_020d2dc0;
      goto LAB_02099e5e;
    }
    local_18 = incoming_ecx;
    ppuVar5 = recovered_2001650(0x14);
    uVar9 = incoming_edx_00;
    if (ppuVar5 == (uchar **)0x0) goto LAB_02098ea5;
    *ppuVar5 = (uchar *)0x1;
    *(char *)(ppuVar5 + 1) = '\0';
    ppuVar5[2] = (uchar *)0x0;
    ppuVar5[3] = (uchar *)0x0;
    ppuVar5[4] = (uchar *)0x0;
    recovered_2043a90((uint *)&local_48,incoming_edx_00);
    local_48 = (uchar *)0x7;
    uVar9 = DAT_0224522c;
    local_30 = ppuVar5;
    pf_varargs_202ce90__4_(str_020d2de5,uVar9);
    iVar10 = DAT_0224522c;
    uVar9 = extraout_EDX;
    uVar2 = extraout_CL;
    if (iVar10 != 0) {
      puVar11 = (uchar *)0x0;
      local_1c = (uchar *)0x68a;
      do {
        iVar10 = DAT_02245230;
        local_6c = (uchar *)0x0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        local_50 = (undefined4 *)0x0;
        local_4c = 0;
        local_20 = puVar11;
        puVar8 = recovered_2001650(0x10);
        uVar9 = incoming_edx_02;
        if (puVar8 == (undefined4 *)0x0) {
LAB_020992cc:
          recovered_2043a90((uint *)&local_6c,uVar9);
          in_stack_fffffc40 = (uchar **)0x20992dc;
          recovered_2043a90((uint *)&local_48,incoming_edx_05);
          pcVar20 = str_020d2e1f;
          goto LAB_02099e5e;
        }
        *puVar8 = 1;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        recovered_2043a90((uint *)&local_6c,incoming_edx_02);
        local_6c = (uchar *)0x8;
        local_24 = local_1c + iVar10 + -0x642;
        local_50 = puVar8;
        uVar17 = recovered_20a0640((int *)&local_6c,0x20cf40a,local_24);
        uVar9 = extraout_EDX_02;
        if (((char)uVar17 == '\0') ||
           (uVar17 = recovered_20a0640((int *)&local_6c,0x20d2d40,local_1c + iVar10 + -0x682),
           uVar9 = extraout_EDX_03, (char)uVar17 == '\0')) goto LAB_020992cc;
        local_74 = local_1c + iVar10 + -0x551;
        uVar17 = recovered_20a0640((int *)&local_6c,0x20ca028,local_74);
        uVar9 = extraout_EDX_04;
        if ((char)uVar17 == '\0') goto LAB_020992cc;
        local_70 = local_1c + iVar10;
        uVar17 = recovered_20a0640((int *)&local_6c,0x20d2df7,local_70);
        uVar9 = extraout_EDX_05;
        if ((char)uVar17 == '\0') goto LAB_020992cc;
        local_80 = local_1c + iVar10 + 0x20;
        uVar17 = recovered_20a0640((int *)&local_6c,0x20d2dfd,local_80);
        uVar9 = extraout_EDX_06;
        if ((char)uVar17 == '\0') goto LAB_020992cc;
        bVar18 = true;
        if (local_1c[iVar10 + 0x61] == '\x01') {
          bVar18 = *(int *)(local_1c + iVar10 + 0x62) != 0;
        }
        local_18c = 0;
        local_188 = 0;
        local_184 = 0;
        local_180 = 0;
        local_17c = (undefined4 *)0x0;
        local_178 = 0;
        local_198 = (uchar *)0x5;
        local_194 = (uint)bVar18;
        local_190 = 0x3f800000;
        if (bVar18 == false) {
          local_190 = 0;
        }
        if (((local_6c != (uchar *)0x8) || (local_50 == (undefined4 *)0x0)) ||
           (puVar6 = (uint *)recovered_209b1b0((int)local_50,str_020d2e08,'\x01'),
           uVar9 = extraout_EDX_07, puVar6 == (uint *)0x0)) {
LAB_020992c1:
          recovered_2043a90((uint *)&local_198,uVar9);
          uVar9 = extraout_EDX_13;
          goto LAB_020992cc;
        }
        uVar17 = recovered_207e1d0(puVar6,(uint *)&local_198);
        recovered_2043a90((uint *)&local_198,incoming_edx_03);
        uVar9 = extraout_EDX_08;
        if ((char)uVar17 == '\0') goto LAB_020992cc;
        local_194 = *(uint *)(local_1c + iVar10 + 0x62);
        local_190 = 0;
        local_18c = 0;
        local_188 = 0;
        local_184 = 0;
        local_180 = 0;
        local_17c = (undefined4 *)0x0;
        local_178 = 0;
        local_198 = (uchar *)0x6;
        if (((local_6c != (uchar *)0x8) || (local_50 == (undefined4 *)0x0)) ||
           (puVar6 = (uint *)recovered_209b1b0((int)local_50,str_020d2e14,'\x01'),
           uVar9 = extraout_EDX_09, puVar6 == (uint *)0x0)) goto LAB_020992c1;
        uVar17 = recovered_207e1d0(puVar6,(uint *)&local_198);
        recovered_2043a90((uint *)&local_198,incoming_edx_04);
        unaff_EBX = local_30;
        uVar9 = extraout_EDX_10;
        if ((((char)uVar17 == '\0') || (local_30 == (uchar **)0x0)) ||
           ((uVar17 = recovered_207f4d0((int)local_30,(uint)(local_30[2] + 1)),
            uVar9 = extraout_EDX_11, (char)uVar17 == '\0' ||
            (uVar17 = recovered_207e1d0((uint *)(unaff_EBX[4] + (int)unaff_EBX[2] * 0x24 + -0x24),
                                        (uint *)&local_6c), uVar9 = extraout_EDX_12,
            (char)uVar17 == '\0')))) goto LAB_020992cc;
        uVar9 = *(uint *)(local_1c + iVar10 + -0x686);
        recovered_202a060((int)local_24,(uchar *)&local_198);
        if ((char)local_198 == '\0') {
          pf_varargs_20044f0__4_((char *)local_3b8,0x110,str_020cf0a0,uVar9);
        }
        else {
          pf_varargs_20044f0__4__4_((char *)local_3b8,0x110,str_020d3820,uVar9,(uint)&local_198);
        }
        puVar11 = local_20;
        recovered_20b42f0((char *)local_74,(char *)&local_2a8);
        pf_varargs_20044f0__4__4_((char *)local_a4,0x20,str_020d384d,1,0);
        puVar7 = (uchar *)str_020d2e5d;
        if (*local_70 != '\0') {
          puVar7 = local_70;
        }
        vararg2 = (uchar *)str_020d2dfd;
        if (*local_80 != '\0') {
          vararg2 = local_80;
        }
        puVar11 = puVar11 + 1;
        pf_varargs_202ce90__4__4__4__4__4__4_
                  (str_020d2e48,(uint)puVar11,(uint)puVar7,(uint)vararg2,(uint)local_3b8,
                   (uint)&local_2a8,(uint)local_a4);
        recovered_2043a90((uint *)&local_6c,incoming_edx_01);
        local_1c = local_1c + 0x6f0;
        puVar7 = (uchar *)DAT_0224522c;
        uVar9 = extraout_EDX_01;
        uVar2 = extraout_CL_00;
      } while (puVar11 < puVar7);
    }
LAB_02099df3:
    cVar1 = DAT_0223de29;
    if (cVar1 == '\0') {
      recovered_2027720(uVar2);
      uVar9 = extraout_EDX_39;
    }
    uVar15 = (undefined3)((uint)unaff_EBX >> 8);
joined_r0x0209a03f:
    uVar17 = CONCAT31(uVar15,1);
    if (param_5 == (uint *)0x0) {
      return uVar17;
    }
    recovered_2043a90(param_5,uVar9);
    ppuVar5 = &local_48;
LAB_02099e18:
    for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *param_5 = (uint)*ppuVar5;
      ppuVar5 = ppuVar5 + (uint)bVar19 * -2 + 1;
      param_5 = param_5 + (uint)bVar19 * -2 + 1;
    }
    return uVar17;
  }
  pcVar16 = str_020d2d40;
LAB_02098ab2:
  if (*pcVar16 == '\0') {
    local_2a8 = (uchar *)0x0;
    if (param_4 == 2) {
      if ((param_3[9] == 3) && (puVar11 = (uchar *)param_3[0xc], puVar11 != (uchar *)0x0)) {
        uVar2 = *puVar11;
        if (uVar2 == '\0') {
          pcVar20 = &DAT_020d2d67;
LAB_02099e83:
          if (*pcVar20 == '\0') {
            in_stack_fffffc40 = local_3b8;
            uVar13 = recovered_20b2600((uint *)&local_2a8,(char *)in_stack_fffffc40);
            if ((char)uVar13 != '\0') {
              pcVar20 = str_020d2d6c;
              puVar11 = local_2a8;
              goto LAB_02099eeb;
            }
            pcVar20 = &DAT_020c5119;
            pcVar16 = local_14;
            goto LAB_02099e64;
          }
        }
        else {
          if (uVar2 == 'a') {
LAB_02098b2c:
            uVar2 = puVar11[1];
            if (uVar2 == '\0') {
              pcVar20 = &DAT_020d2d68;
            }
            else {
              if (uVar2 != 'u') {
                if ((byte)(uVar2 + 0x9f) < 0x1a) {
                  uVar2 = uVar2 + 0xe0;
                }
                if (uVar2 != 'U') goto LAB_02099e88;
              }
              uVar2 = puVar11[2];
              if (uVar2 == '\0') {
                pcVar20 = &DAT_020d2d69;
              }
              else {
                if (uVar2 != 't') {
                  if ((byte)(uVar2 + 0x9f) < 0x1a) {
                    uVar2 = uVar2 + 0xe0;
                  }
                  if (uVar2 != 'T') goto LAB_02099e88;
                }
                uVar2 = puVar11[3];
                if (uVar2 == '\0') {
                  pcVar20 = &DAT_020d2d6a;
                }
                else {
                  if (uVar2 != 'o') {
                    if ((byte)(uVar2 + 0x9f) < 0x1a) {
                      uVar2 = uVar2 + 0xe0;
                    }
                    if (uVar2 != 'O') goto LAB_02099e88;
                  }
                  if (puVar11[4] != '\0') goto LAB_02099e88;
                  pcVar20 = &DAT_020d2d6b;
                }
              }
            }
            goto LAB_02099e83;
          }
          if ((byte)(uVar2 + 0x9f) < 0x1a) {
            uVar2 = uVar2 + 0xe0;
          }
          if (uVar2 == 'A') goto LAB_02098b2c;
        }
LAB_02099e88:
        unaff_EBX = local_3b8;
        uVar13 = recovered_20b3c00((char *)puVar11,(int *)&local_2a8,(char *)unaff_EBX);
        if ((char)uVar13 != '\0') {
          pcVar20 = str_020d2da4;
          in_stack_fffffc3c = local_2a8;
LAB_02099eeb:
          pf_varargs_202ce90__4__4_(pcVar20,(uint)puVar11,(uint)in_stack_fffffc3c);
          cVar1 = DAT_0223de29;
          if (cVar1 == '\0') {
            recovered_2027720(in_CL_04);
          }
          *param_5 = 1;
          param_5[1] = (uint)local_2a8;
          param_5[2] = (uint)(float)(int)local_2a8;
          param_5[3] = 0;
          param_5[4] = 0;
          param_5[5] = 0;
          param_5[6] = 0;
          param_5[7] = 0;
          param_5[8] = 0;
          return CONCAT31((int3)((uint)unaff_EBX >> 8),1);
        }
LAB_02099eba:
        in_stack_fffffc40 = local_3b8;
        pcVar20 = &DAT_020c5119;
        goto LAB_02098c6b;
      }
      pcVar20 = str_020cead0;
    }
    else {
      in_stack_fffffc38 = &DAT_020ceab4;
      pcVar20 = str_020cea9b;
    }
    pf_varargs_207a2e0__4__4__4_
              (incoming_ecx,incoming_edx,pcVar20,(uint)incoming_edx,2,(uint)in_stack_fffffc38);
    pcVar20 = str_020d2d48;
LAB_02098c6b:
    pcVar16 = local_14;
    goto LAB_02099e64;
  }
  if (cVar1 != '\0') goto LAB_02098abf;
LAB_02098c9f:
  pcVar16 = str_020cdd76;
LAB_020992ff:
  if (*pcVar16 == '\0') {
    local_2a8 = (uchar *)0x0;
    local_2a4 = 0;
    local_2a0 = 0;
    local_29c = 0;
    local_298 = 0;
    local_294 = 0;
    local_290 = 0;
    local_28c = 0;
    local_288 = 0;
    local_18 = incoming_ecx;
    recovered_203a840((uchar)incoming_ecx,(uchar)incoming_edx);
    if (param_4 == 1) {
      uVar2 = recovered_207cf70((uint *)&local_2a8,incoming_edx_06);
      uVar9 = extraout_EDX_14;
      if (uVar2 != '\0') {
        uVar9 = DAT_02148014;
        pf_varargs_202ce90__4_(str_020d2e8c,uVar9);
        iVar10 = DAT_02148014;
        uVar9 = extraout_EDX_15;
        uVar2 = extraout_CL_01;
        if (iVar10 != 0) {
          local_1c = (uchar *)0x0;
          puVar11 = (uchar *)0x0;
          do {
            unaff_EBX = (uchar **)DAT_02148018;
            local_198 = (uchar *)0x0;
            local_194 = 0;
            local_190 = 0;
            local_18c = 0;
            local_188 = 0;
            local_184 = 0;
            local_180 = 0;
            local_17c = (undefined4 *)0x0;
            local_178 = 0;
            local_24 = puVar11;
            puVar8 = recovered_2001650(0x10);
            uVar9 = incoming_edx_07;
            if (puVar8 == (undefined4 *)0x0) {
LAB_02099c63:
              recovered_2043a90((uint *)&local_198,uVar9);
              in_stack_fffffc40 = (uchar **)0x2099c79;
              recovered_2043a90((uint *)&local_2a8,incoming_edx_15);
              pcVar20 = str_020d2eb1;
              goto LAB_02099e5e;
            }
            local_20 = local_1c + (int)unaff_EBX;
            *puVar8 = 1;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            recovered_2043a90((uint *)&local_198,incoming_edx_07);
            local_198 = (uchar *)0x8;
            local_17c = puVar8;
            uVar17 = recovered_20a0640((int *)&local_198,0x20cf40a,local_20);
            uVar9 = extraout_EDX_16;
            if ((char)uVar17 == '\0') goto LAB_02099c63;
            local_74 = (uchar *)((char *)((int)unaff_EBX + 0xf1) + (int)local_1c);
            uVar17 = recovered_20a0640((int *)&local_198,0x20cafda,local_74);
            uVar9 = extraout_EDX_17;
            if ((char)uVar17 == '\0') goto LAB_02099c63;
            local_70 = (uchar *)((char *)((int)unaff_EBX + 0x111) + (int)local_1c);
            uVar17 = recovered_20a0640((int *)&local_198,0x20d2ea1,local_70);
            uVar9 = extraout_EDX_18;
            if (((((char)uVar17 == '\0') ||
                 (uVar17 = recovered_20a0640((int *)&local_198,0x20d2ea9,
                                             (uchar *)((char *)((int)unaff_EBX + 0x171) +
                                                      (int)local_1c)), iVar10 = local_290,
                 uVar9 = extraout_EDX_19, (char)uVar17 == '\0')) || (local_290 == 0)) ||
               ((uVar17 = recovered_207f4d0(local_290,*(int *)(local_290 + 8) + 1),
                uVar9 = extraout_EDX_20, (char)uVar17 == '\0' ||
                (uVar17 = recovered_207e1d0((uint *)(*(int *)(iVar10 + 0x10) + -0x24 +
                                                    *(int *)(iVar10 + 8) * 0x24),(uint *)&local_198)
                , uVar9 = extraout_EDX_21, (char)uVar17 == '\0')))) goto LAB_02099c63;
            recovered_20b42f0((char *)local_20,(char *)local_3b8);
            pf_varargs_202ce90__4__4__4_(str_020d2eda,(uint)local_3b8,(uint)local_74,(uint)local_70)
            ;
            recovered_2043a90((uint *)&local_198,incoming_edx_08);
            puVar11 = local_24 + 1;
            local_1c = local_1c + 0x571;
            puVar7 = (uchar *)DAT_02148014;
            uVar9 = extraout_EDX_22;
            uVar2 = extraout_CL_02;
          } while (puVar11 < puVar7);
        }
        cVar1 = DAT_0223de29;
        if (cVar1 == '\0') {
          recovered_2027720(uVar2);
          uVar9 = extraout_EDX_23;
        }
        uVar17 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
        if (param_5 == (uint *)0x0) {
          return uVar17;
        }
        recovered_2043a90(param_5,uVar9);
        ppuVar5 = &local_2a8;
        goto LAB_02099e18;
      }
    }
    else {
      pf_varargs_207a2e0__4__4__4_(local_18,local_14,str_020cea9b,(uint)local_14,1,0x20c5084);
      uVar9 = extraout_EDX_24;
    }
    in_stack_fffffc40 = (uchar **)0x209969b;
    recovered_2043a90((uint *)&local_2a8,uVar9);
    pcVar20 = str_020d2e64;
    goto LAB_02099e5e;
  }
  if (cVar1 == '\0') {
    pcVar16 = &DAT_020cd795;
LAB_020996b4:
    if (*pcVar16 == '\0') {
      local_48 = (uchar *)0x0;
      local_198 = (uchar *)0x0;
      local_194 = 0;
      local_190 = 0;
      local_18c = 0;
      local_188 = 0;
      local_184 = 0;
      local_180 = 0;
      local_17c = (undefined4 *)0x0;
      local_178 = 0;
      if (param_4 == 2) {
        in_stack_fffffc40 = &local_48;
        uVar9 = recovered_208e420(incoming_ecx,incoming_edx,(int)param_3,2,1,
                                  (int *)in_stack_fffffc40);
        if ((char)uVar9 == '\0') goto LAB_02099a59;
        recovered_203a840(in_CL_02,in_DL_00);
        in_stack_fffffc40 = (uchar **)0x2099846;
        uVar2 = recovered_20b4390((char *)local_48,(char *)&local_2a8);
        if (uVar2 == '\0') {
          pcVar20 = str_020d2f07;
        }
        else {
          in_stack_fffffc40 = (uchar **)0x2099859;
          puVar11 = (uchar *)recovered_20b4490((char *)&local_2a8,incoming_edx_11);
          if (puVar11 == (uchar *)0x0) {
            pcVar20 = str_020d2f20;
          }
          else {
            recovered_20b42f0((char *)puVar11,(char *)local_3b8);
            pf_varargs_202ce90__4_(str_020d2f3b,(uint)local_3b8);
            local_1c = puVar11 + 0xf1;
            pf_varargs_202ce90__4_(&DAT_020d2f4a,(uint)local_1c);
            local_20 = puVar11 + 0x111;
            pf_varargs_202ce90__4_(&DAT_020d2f4a,(uint)local_20);
            pf_varargs_202ce90__4_(&DAT_020d2f4a,(uint)(puVar11 + 0x171));
            cVar1 = DAT_0223de29;
            uVar9 = extraout_EDX_25;
            if (cVar1 == '\0') {
              recovered_2027720(in_CL_03);
              uVar9 = extraout_EDX_26;
            }
            uVar2 = recovered_207cfd0((uint *)&local_198,uVar9);
            uVar9 = extraout_EDX_27;
            if (((uVar2 != '\0') &&
                (uVar17 = recovered_20a0640((int *)&local_198,0x20cf40a,puVar11),
                uVar9 = extraout_EDX_28, (char)uVar17 != '\0')) &&
               ((uVar17 = recovered_20a0640((int *)&local_198,0x20cafda,local_1c),
                uVar9 = extraout_EDX_29, (char)uVar17 != '\0' &&
                ((uVar17 = recovered_20a0640((int *)&local_198,0x20d2ea1,local_20),
                 uVar9 = extraout_EDX_30, (char)uVar17 != '\0' &&
                 (uVar17 = recovered_20a0640((int *)&local_198,0x20d2ea9,puVar11 + 0x171),
                 uVar9 = incoming_edx_12, (char)uVar17 != '\0')))))) {
              uVar17 = CONCAT31((int3)((uint)incoming_ecx >> 8),1);
              if (param_5 == (uint *)0x0) {
                return uVar17;
              }
              recovered_2043a90(param_5,incoming_edx_12);
              ppuVar5 = &local_198;
              goto LAB_02099e18;
            }
            in_stack_fffffc40 = (uchar **)0x2099e2f;
            recovered_2043a90((uint *)&local_198,uVar9);
            pcVar20 = str_020d2f4f;
          }
        }
      }
      else {
        pf_varargs_207a2e0__4__4__4_
                  (incoming_ecx,incoming_edx,str_020cea9b,(uint)incoming_edx,2,0x20ceab4);
LAB_02099a59:
        pcVar20 = str_020d2ee7;
      }
      pcVar16 = local_14;
      goto LAB_02099e64;
    }
  }
  else {
LAB_02099310:
    if (cVar1 == 'd') {
LAB_0209932e:
      cVar1 = pcVar20[1];
      if (cVar1 == '\0') {
        pcVar16 = &DAT_020cd796;
      }
      else {
        if (cVar1 != 'u') {
          if ((byte)(cVar1 + 0x9fU) < 0x1a) {
            cVar1 = cVar1 + -0x20;
          }
          if (cVar1 != 'U') goto LAB_020996bd;
        }
        cVar1 = pcVar20[2];
        if (cVar1 == '\0') {
          pcVar16 = &DAT_020cd797;
        }
        else {
          if (cVar1 != 'm') {
            if ((byte)(cVar1 + 0x9fU) < 0x1a) {
              cVar1 = cVar1 + -0x20;
            }
            if (cVar1 != 'M') goto LAB_020996bd;
          }
          cVar1 = pcVar20[3];
          if (cVar1 == '\0') {
            pcVar16 = &DAT_020cd798;
          }
          else {
            if (cVar1 != 'p') {
              if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                cVar1 = cVar1 + -0x20;
              }
              if (cVar1 != 'P') goto LAB_020996bd;
            }
            if (pcVar20[4] != '\0') goto LAB_020996bd;
            pcVar16 = &DAT_020cd799;
          }
        }
      }
      goto LAB_020996b4;
    }
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      cVar1 = cVar1 + -0x20;
    }
    if (cVar1 == 'D') goto LAB_0209932e;
  }
LAB_020996bd:
  in_stack_fffffc40 = (uchar **)0x20996cc;
  local_18 = incoming_ecx;
  uVar2 = recovered_207a9c0(pcVar20,&DAT_020c555e);
  pcVar16 = local_14;
  incoming_ecx = local_18;
  if (uVar2 != '\0') {
    if (param_4 == 1) {
LAB_020996d9:
      recovered_20b42f0(&DAT_020de328,(char *)local_3b8);
      recovered_203e190((char *)local_3b8,incoming_edx_09);
      cVar1 = DAT_0223de29;
      if (cVar1 == '\0') {
        recovered_2027720(in_CL_00);
      }
      uVar9 = recovered_207e340(param_5,(char *)local_3b8);
      return uVar9;
    }
    pf_varargs_207a2e0__4__4__4_(local_18,local_14,str_020cea9b,(uint)local_14,1,0x20c5084);
    pcVar20 = str_020d2f71;
    goto LAB_02099e64;
  }
  in_stack_fffffc40 = (uchar **)0x2099721;
  uVar2 = recovered_207a9c0(pcVar20,&DAT_020c5580);
  if (uVar2 == '\0') {
    in_stack_fffffc40 = (uchar **)0x20999ca;
    uVar3 = recovered_207a9c0(pcVar20,&DAT_020cd79a);
    uVar2 = extraout_CL_03;
    uVar4 = extraout_DL;
    if (uVar3 == '\0') {
      in_stack_fffffc40 = (uchar **)0x20999da;
      uVar3 = recovered_207a9c0(pcVar20,&DAT_020c55a6);
      uVar2 = extraout_CL_04;
      uVar4 = extraout_DL_00;
      if (uVar3 != '\0') goto LAB_020999e2;
      in_stack_fffffc40 = (uchar **)0x2099b49;
      uVar2 = recovered_207a9c0(pcVar20,str_020d300d);
      if (uVar2 == '\0') {
        pcVar20 = str_020d30ca;
        goto LAB_02099e5e;
      }
      local_6c = (uchar *)0x0;
      local_a4[0] = (uchar *)0x0;
      local_7c = 0;
      local_78 = 0;
      local_48 = (uchar *)0x0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = (uchar **)0x0;
      local_2c = 0;
      local_28 = 0;
      if (param_4 != 3) {
        pf_varargs_207a2e0__4__4__4_(local_18,local_14,str_020cea9b,(uint)local_14,3,0x20ceab4);
LAB_02099e56:
        pcVar20 = str_020d3019;
        goto LAB_02099e5e;
      }
      in_stack_fffffc40 = &local_6c;
      uVar9 = recovered_208e420(local_18,local_14,(int)param_3,3,1,(int *)in_stack_fffffc40);
      if ((char)uVar9 == '\0') goto LAB_02099e56;
      in_stack_fffffc40 = local_a4;
      uVar9 = recovered_208e420(local_18,local_14,(int)param_3,3,2,(int *)in_stack_fffffc40);
      if ((char)uVar9 == '\0') goto LAB_02099e56;
      local_198 = (uchar *)((uint)local_198 & 0xffffff00);
      uVar9 = recovered_20b4680((char *)local_6c,(char *)local_a4[0],(int *)&local_7c,
                                (int *)&local_78,(char *)&local_198);
      puVar11 = local_6c;
      if ((char)uVar9 == '\0') {
        in_stack_fffffc40 = (uchar **)str_020d3044;
        if ((char)local_198 != '\0') {
          in_stack_fffffc40 = &local_198;
        }
        pcVar20 = &DAT_020c5119;
        goto LAB_02099e5e;
      }
      uVar2 = recovered_2051f00((char *)local_6c,&DAT_020cb3d9);
      if (uVar2 == '\0') {
        recovered_20b4390((char *)puVar11,(char *)&local_2a8);
      }
      else {
        pf_varargs_20044f0___((char *)&local_2a8,0xf1,&DAT_020c5359);
      }
      recovered_20b42f0((char *)&local_2a8,(char *)local_3b8);
      pf_varargs_202ce90__4__4__4__4_
                (str_020d3057,(uint)local_3b8,(uint)local_a4[0],local_7c,local_78);
      cVar1 = DAT_0223de29;
      uVar9 = extraout_EDX_40;
      if (cVar1 == '\0') {
        recovered_2027720(in_CL_05);
        uVar9 = extraout_EDX_41;
      }
      uVar2 = recovered_207cfd0((uint *)&local_48,uVar9);
      uVar9 = extraout_EDX_42;
      if ((((uVar2 == '\0') ||
           (uVar17 = recovered_20a0640((int *)&local_48,0x20cf273,(uchar *)&local_2a8),
           uVar9 = extraout_EDX_43, (char)uVar17 == '\0')) ||
          (uVar17 = recovered_20a0640((int *)&local_48,0x20d3085,local_a4[0]),
          uVar9 = extraout_EDX_44, (char)uVar17 == '\0')) ||
         ((uVar17 = recovered_209fae0((int *)&local_48,0x20d308c), uVar9 = extraout_EDX_45,
          (char)uVar17 == '\0' ||
          (uVar17 = recovered_209fae0((int *)&local_48,0x20d3092), uVar9 = extraout_EDX_46,
          (char)uVar17 == '\0')))) {
        in_stack_fffffc40 = (uchar **)0x209a055;
        recovered_2043a90((uint *)&local_48,uVar9);
        pcVar20 = str_020d3098;
        goto LAB_02099e5e;
      }
      uVar15 = (undefined3)((uint)&local_2a8 >> 8);
      goto joined_r0x0209a03f;
    }
LAB_020999e2:
    local_a4[0] = (uchar *)0x0;
    local_48 = (uchar *)0x0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = (uchar **)0x0;
    local_2c = 0;
    local_28 = 0;
    if (param_4 < 3) {
      if ((param_4 == 2) &&
         (uVar9 = recovered_208e420(local_18,local_14,(int)param_3,2,1,(int *)local_a4),
         uVar2 = extraout_CL_05, uVar4 = extraout_DL_01, (char)uVar9 == '\0')) {
        return 0;
      }
      recovered_203a840(uVar2,uVar4);
      in_stack_fffffc40 = (uchar **)0x2099ad3;
      uVar2 = recovered_20b4390((char *)local_a4[0],(char *)&local_198);
      if (uVar2 != '\0') {
        in_stack_fffffc40 = (uchar **)0x2099ae2;
        iVar10 = recovered_20b4490((char *)&local_198,incoming_edx_13);
        if (iVar10 != 0) {
          in_stack_fffffc40 = (uchar **)0x2099aee;
          uVar2 = recovered_207cf70((uint *)&local_48,incoming_edx_14);
          if (uVar2 != '\0') {
            recovered_20b42f0((char *)&local_198,(char *)local_3b8);
            pf_varargs_202ce90__4_(str_020d2f3b,(uint)local_3b8);
            iVar10 = DAT_02148014;
            uVar9 = extraout_EDX_31;
            unaff_EBX = (uchar **)param_4;
            uVar2 = extraout_CL_06;
            if (iVar10 != 0) {
              iVar10 = 0;
              uVar17 = 0;
              do {
                unaff_EBX = (uchar **)DAT_02148018;
                local_1c = (uchar *)((int)unaff_EBX + iVar10);
                local_6c = (uchar *)0x0;
                local_68 = 0;
                local_64 = 0;
                local_60 = 0;
                local_5c = 0;
                local_58 = 0;
                local_54 = 0;
                local_50 = (undefined4 *)0x0;
                local_4c = 0;
                uVar4 = recovered_20b45e0((char *)local_1c,(char *)&local_198);
                uVar9 = incoming_edx_17;
                uVar2 = extraout_CL_08;
                if (uVar4 != '\0') {
                  uVar2 = recovered_207cfd0((uint *)&local_6c,incoming_edx_17);
                  uVar9 = extraout_EDX_33;
                  if ((uVar2 != '\0') &&
                     (uVar12 = recovered_20a0640((int *)&local_6c,0x20cf40a,local_1c),
                     uVar9 = extraout_EDX_34, (char)uVar12 != '\0')) {
                    local_20 = (uchar *)((int)unaff_EBX + iVar10 + 0xf1);
                    uVar12 = recovered_20a0640((int *)&local_6c,0x20cafda,local_20);
                    uVar9 = extraout_EDX_35;
                    if ((char)uVar12 != '\0') {
                      local_24 = (uchar *)((int)unaff_EBX + iVar10 + 0x111);
                      uVar12 = recovered_20a0640((int *)&local_6c,0x20d2ea1,local_24);
                      uVar9 = extraout_EDX_36;
                      if ((((char)uVar12 != '\0') &&
                          (uVar12 = recovered_20a0640((int *)&local_6c,0x20d2ea9,
                                                      (uchar *)((int)unaff_EBX + iVar10 + 0x171)),
                          uVar9 = extraout_EDX_37, (char)uVar12 != '\0')) &&
                         (uVar12 = recovered_207f480((int)local_30,(int)&local_6c),
                         uVar9 = extraout_EDX_38, (char)uVar12 != '\0')) {
                        unaff_EBX = &local_2a8;
                        recovered_20b42f0((char *)local_1c,(char *)unaff_EBX);
                        pf_varargs_202ce90__4__4__4_
                                  (str_020d2eda,(uint)unaff_EBX,(uint)local_20,(uint)local_24);
                        recovered_2043a90((uint *)&local_6c,incoming_edx_16);
                        uVar9 = extraout_EDX_32;
                        uVar2 = extraout_CL_07;
                        goto LAB_02099ccc;
                      }
                    }
                  }
                  recovered_2043a90((uint *)&local_6c,uVar9);
                  in_stack_fffffc40 = (uchar **)0x2099de9;
                  recovered_2043a90((uint *)&local_48,incoming_edx_18);
                  goto LAB_02099de9;
                }
LAB_02099ccc:
                uVar17 = uVar17 + 1;
                iVar10 = iVar10 + 0x571;
                uVar12 = DAT_02148014;
              } while (uVar17 < uVar12);
            }
            goto LAB_02099df3;
          }
LAB_02099de9:
          pcVar20 = str_020d2fdc;
          goto LAB_02099e5e;
        }
      }
LAB_02099b30:
      pcVar20 = str_020d2f20;
    }
    else {
      pcVar20 = str_020d2fb3;
    }
  }
  else {
    local_198 = (uchar *)0x0;
    if (param_4 == 2) {
      in_stack_fffffc40 = &local_198;
      uVar9 = recovered_208e420(local_18,local_14,(int)param_3,2,1,(int *)in_stack_fffffc40);
      if ((char)uVar9 == '\0') goto LAB_02099a89;
      recovered_203a840(in_CL_01,in_DL);
      in_stack_fffffc40 = (uchar **)0x2099774;
      uVar2 = recovered_20b4390((char *)local_198,(char *)&local_2a8);
      if (uVar2 != '\0') {
        in_stack_fffffc40 = (uchar **)0x2099789;
        iVar10 = recovered_20b4490((char *)&local_2a8,incoming_edx_10);
        if (iVar10 != 0) {
          pf_varargs_20044f0__4_(&DAT_020de328,0xf1,&DAT_020c5119,(uint)&local_2a8);
          goto LAB_020996d9;
        }
      }
      goto LAB_02099b30;
    }
    pf_varargs_207a2e0__4__4__4_(local_18,local_14,str_020cea9b,(uint)local_14,2,0x20ceab4);
LAB_02099a89:
    pcVar20 = str_020d2f95;
  }
LAB_02099e5e:
  incoming_ecx = local_18;
  pcVar16 = local_14;
LAB_02099e64:
  pf_varargs_207a2e0__4_(incoming_ecx,pcVar16,pcVar20,(uint)in_stack_fffffc40);
  return 0;
}
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020c555e
#undef DAT_020c5580
#undef DAT_020c55a6
#undef DAT_020cb03e
#undef DAT_020cb03f
#undef DAT_020cb040
#undef DAT_020cb041
#undef DAT_020cb043
#undef DAT_020cb044
#undef DAT_020cb045
#undef DAT_020cb046
#undef DAT_020cb3d9
#undef DAT_020cd795
#undef DAT_020cd796
#undef DAT_020cd797
#undef DAT_020cd798
#undef DAT_020cd799
#undef DAT_020cd79a
#undef DAT_020ceab4
#undef DAT_020d2d67
#undef DAT_020d2d68
#undef DAT_020d2d69
#undef DAT_020d2d6a
#undef DAT_020d2d6b
#undef DAT_020d2f4a
#undef DAT_020de328
#undef DAT_02148014
#undef DAT_02148018
#undef DAT_0223de29
#undef DAT_0224522c
#undef DAT_02245230
#undef str_020cdd76
#undef str_020cea9b
#undef str_020ceab6
#undef str_020cead0
#undef str_020cf0a0
#undef str_020d2d26
#undef str_020d2d40
#undef str_020d2d48
#undef str_020d2d6c
#undef str_020d2da4
#undef str_020d2dc0
#undef str_020d2de5
#undef str_020d2dfd
#undef str_020d2e08
#undef str_020d2e14
#undef str_020d2e1f
#undef str_020d2e48
#undef str_020d2e5d
#undef str_020d2e64
#undef str_020d2e8c
#undef str_020d2eb1
#undef str_020d2eda
#undef str_020d2ee7
#undef str_020d2f07
#undef str_020d2f20
#undef str_020d2f3b
#undef str_020d2f4f
#undef str_020d2f71
#undef str_020d2f95
#undef str_020d2fb3
#undef str_020d2fdc
#undef str_020d300d
#undef str_020d3019
#undef str_020d3044
#undef str_020d3057
#undef str_020d3098
#undef str_020d30ca
#undef str_020d3820
#undef str_020d384d
#undef local_180
#undef local_17c
#undef local_178
#undef local_a4
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef in_stack_fffffc38
#undef in_stack_fffffc3c
#undef in_stack_fffffc40
#undef local_3b8
#undef local_2a8
#undef local_2a4
#undef local_2a0
#undef local_29c
#undef local_298
#undef local_294
#undef local_290
#undef local_28c
#undef local_288
#undef local_198
#undef local_194
#undef local_190
#undef local_18c
#undef local_188
#undef local_184
