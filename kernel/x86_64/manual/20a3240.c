/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(uint32_t *)(0x20eaf50U))
#define DAT_020a3b09 (*(uint8_t *)(0x20f42caU))
#define DAT_020a3b0a (*(uint8_t *)(0x20f42cbU))
#define DAT_020a3b0b (*(uint8_t *)(0x20f42ccU))
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
#define DAT_020a3be3 (*(uint8_t *)(0x20f43a4U))
#define DAT_020a3be5 (*(uint8_t *)(0x20f43a6U))
#define DAT_020a3c3f (*(uint8_t *)(0x20f4400U))
#define DAT_020a3c64 (*(uint8_t *)(0x20f4425U))
#define DAT_020a3c66 (*(uint8_t *)(0x20f4427U))
#define DAT_020a3cbb (*(uint8_t *)(0x20f447cU))
#define DAT_020a3f48 (*(uint8_t *)(0x20f4709U))
#define DAT_020a409e (*(uint8_t *)(0x20f485fU))
#define DAT_020a40a0 (*(uint8_t *)(0x20f4861U))
#define DAT_020a40d3 (*(uint8_t *)(0x20f4894U))
#define DAT_020a40d6 (*(uint8_t *)(0x20f4897U))
#define DAT_020a40d9 (*(uint8_t *)(0x20f489aU))
#define DAT_020a40dd (*(uint8_t *)(0x20f489eU))
#define DAT_020a40e0 (*(uint8_t *)(0x20f48a1U))
#define DAT_020a40e3 (*(uint8_t *)(0x20f48a4U))
#define DAT_020a40e6 (*(uint8_t *)(0x20f48a7U))
#define DAT_020a40e9 (*(uint8_t *)(0x20f48aaU))
#define DAT_020a40eb (*(uint8_t *)(0x20f48acU))
#define DAT_020a40ed (*(uint8_t *)(0x20f48aeU))
#define DAT_020a40f0 (*(uint8_t *)(0x20f48b1U))
#define DAT_020a40f5 (*(uint8_t *)(0x20f3f5aU))
#define DAT_020a4121 (*(uint8_t *)(0x20f48dcU))
#define DAT_020a4123 (*(uint8_t *)(0x20f48deU))
#define DAT_020a4124 (*(char *)(0x20f48dfU))
#define DAT_020a4125 (*(char *)(0x20f48e0U))
#define DAT_020a4126 (*(char *)(0x20f48e1U))
#define DAT_020a4127 (*(uint8_t *)(0x20f48e2U))
#define DAT_020a4159 (*(uint8_t *)(0x20f4914U))
#define DAT_020a420e (*(uint8_t *)(0x20f49c9U))
#define DAT_020a427e (*(uint8_t *)(0x20ede4eU))
#define DAT_020a427f (*(uint8_t *)(0x20ede4fU))
#define DAT_020a4280 (*(uint8_t *)(0x20ede50U))
#define DAT_020a4281 (*(uint8_t *)(0x20ede51U))
#define DAT_020a4282 (*(uint8_t *)(0x20ede52U))
#define DAT_020a4289 (*(uint8_t *)(0x20f4a39U))
#define DAT_020a428e (*(uint8_t *)(0x20f4a3eU))
#define DAT_020de638 (*(uint64_t volatile *)(0x226c288U))
#define DAT_020de640 (*(uint64_t volatile *)(0x226c290U))
#define _DAT_020a1560 (*(uint *)(0x20eaf40U))
#define apuStackY_598 (*(ulong * (*)[128])(frame + 24))
#define in_stack_fffffffffffffe68 (*(undefined8 *)(frame + 1048))
#define in_stack_fffffffffffffe70 (*(float *)(frame + 1056))
#define in_stack_fffffffffffffe74 (*(undefined4 *)(frame + 1060))
#define in_stack_fffffffffffffe78 (*(ulong *** *)(frame + 1064))
#define in_stack_fffffffffffffe80 (*(ulong *** *)(frame + 1072))
#define in_stack_fffffffffffffe88 (*(undefined8 *)(frame + 1080))
#define in_stack_fffffffffffffe90 (*(undefined8 *)(frame + 1088))
#define in_stack_fffffffffffffe98 (*(undefined8 *)(frame + 1096))
#define in_stack_fffffffffffffea0 (*(undefined8 *)(frame + 1104))
#define local_100 (*(byte * *)(frame + 1200))
#define local_108 (*(ulong *)(frame + 1192))
#define local_118 (*(undefined8 *)(frame + 1176))
#define local_128 (*(undefined8 *)(frame + 1160))
#define local_138 (*(ulong * *)(frame + 1144))
#define local_148 (*(ulong * *)(frame + 1128))
#define local_158 (*(long *)(frame + 1112))
#define local_48 (*(undefined8 *)(frame + 1384))
#define local_58 (*(undefined8 *)(frame + 1368))
#define local_68 (*(char * *)(frame + 1352))
#define local_78 (*(undefined8 *)(frame + 1336))
#define local_88 (*(undefined8 *)(frame + 1320))
#define local_98 (*(undefined8 *)(frame + 1304))
#define local_a8 (*(undefined8 *)(frame + 1288))
#define local_b8 (*(undefined8 *)(frame + 1272))
#define local_c8 (*(undefined8 *)(frame + 1256))
#define local_d8 (*(undefined8 *)(frame + 1240))
#define local_e8 (*(undefined8 *)(frame + 1224))
#define local_f8 (*(undefined8 *)(frame + 1208))
#define str_020a3b18 (*(char (*)[1])(0x20f42d9U))
#define str_020a40ff (*(char (*)[1])(0x20f48baU))
#define str_020a4129 (*(char (*)[1])(0x20f48e4U))
#define str_020a415d (*(char (*)[1])(0x20f4918U))
#define str_020a417a (*(char (*)[1])(0x20f4935U))
#define str_020a4187 (*(char (*)[1])(0x20f4942U))
#define str_020a41aa (*(char (*)[1])(0x20f4965U))
#define str_020a41be (*(char (*)[1])(0x20f4979U))
#define str_020a41e1 (*(char (*)[1])(0x20f499cU))
#define str_020a4201 (*(char (*)[1])(0x20f49bcU))
#define str_020a4210 (*(char (*)[1])(0x20f49cbU))
#define str_020a422d (*(char (*)[1])(0x20f49e8U))
#define str_020a4241 (*(char (*)[1])(0x20f49fcU))
#define str_020a4267 (*(char (*)[1])(0x20f4a22U))
#define str_020a4283 (*(char (*)[1])(0x20ee540U))
#define str_020a4292 (*(char (*)[1])(0x20f4a42U))
#define str_020a42b5 (*(char (*)[1])(0x20f4a65U))
#define str_020a42c6 (*(char (*)[1])(0x20f4a76U))
#define str_020a42db (*(char (*)[1])(0x20f4a8bU))
#define str_020a4304 (*(char (*)[1])(0x20f4ab4U))
#define uStack_110 (*(undefined8 *)(frame + 1184))
#define uStack_120 (*(undefined8 *)(frame + 1168))
#define uStack_130 (*(undefined8 *)(frame + 1152))
#define uStack_140 (*(ulong *)(frame + 1136))
#define uStack_40 (*(undefined8 *)(frame + 1392))
#define uStack_50 (*(undefined8 *)(frame + 1376))
#define uStack_60 (*(undefined8 *)(frame + 1360))
#define uStack_70 (*(undefined8 *)(frame + 1344))
#define uStack_80 (*(undefined8 *)(frame + 1328))
#define uStack_90 (*(undefined8 *)(frame + 1312))
#define uStack_a0 (*(undefined8 *)(frame + 1296))
#define uStack_ac (*(undefined4 *)(frame + 1284))
#define uStack_b0 (*(undefined4 *)(frame + 1280))
#define uStack_c0 (*(undefined8 *)(frame + 1264))
#define uStack_d0 (*(undefined8 *)(frame + 1248))
#define uStack_e0 (*(undefined8 *)(frame + 1232))
#define uStack_ec (*(undefined4 *)(frame + 1220))
#define uStack_f0 (*(undefined4 *)(frame + 1216))
uchar recovered_20a3240(ulonglong *param_1,ulong *param_2)

{
  unsigned char frame[1488] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  ulonglong uVar3;
  long lVar4;
  undefined8 *puVar5;
  uchar uVar6;
  int iVar7;
  int extraout_EAX = 0;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_RAX = 0;
  undefined8 extraout_RAX_00 = 0;
  byte bVar12;
  char cVar13;
  char cVar14;
  undefined8 *puVar15;
  byte bVar16;
  char *pcVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 *puVar20;
  char cVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  char cVar24;
  undefined8 *puVar25;
  ulong **ppuVar26;
  void *pvVar27;
  byte *in_R8;
  undefined8 *puVar28;
  ulong *******in_R9;
  long lVar29;
  byte *pbVar30;
  ulong *puVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;

  if (param_1 == (ulonglong *)0x0) {
LAB_020659d7:
    uVar9 = param_1[2];
    uVar18 = *(ulong *)param_1[1];
    if (uVar9 < uVar18) {
      uVar2 = ((ulong *)param_1[1])[2];
      pbVar23 = *(byte **)(uVar2 + uVar9 * 8);
      if (pbVar23 != (byte *)0x0) {
        bVar1 = *pbVar23;
        cVar13 = DAT_020a4123;
        if (bVar1 != 0) {
          if (bVar1 != 0x6e) {
            in_R9 = (ulong *******)(ulong)(bVar1 - 0x20);
            in_R8 = (byte *)((ulong)in_R9 & 0xff);
            if (0x19 < (byte)(bVar1 + 0x9f)) {
              in_R8 = (byte *)(ulong)bVar1;
            }
            if ((char)in_R8 != 'N') goto LAB_02065b9e;
          }
          bVar1 = pbVar23[1];
          cVar13 = DAT_020a4124;
          if (bVar1 != 0) {
            if (bVar1 != 0x6f) {
              in_R9 = (ulong *******)(ulong)(bVar1 - 0x20);
              in_R8 = (byte *)((ulong)in_R9 & 0xff);
              if (0x19 < (byte)(bVar1 + 0x9f)) {
                in_R8 = (byte *)(ulong)bVar1;
              }
              if ((char)in_R8 != 'O') goto LAB_02065b9e;
            }
            bVar1 = pbVar23[2];
            cVar13 = DAT_020a4125;
            if (bVar1 != 0) {
              if (bVar1 != 0x74) {
                in_R9 = (ulong *******)(ulong)(bVar1 - 0x20);
                in_R8 = (byte *)((ulong)in_R9 & 0xff);
                if (0x19 < (byte)(bVar1 + 0x9f)) {
                  in_R8 = (byte *)(ulong)bVar1;
                }
                if ((char)in_R8 != 'T') goto LAB_02065b9e;
              }
              cVar13 = DAT_020a4126;
              if (pbVar23[3] != 0) goto LAB_02065b9e;
            }
          }
        }
        if (cVar13 == '\0') {
          param_1[2] = uVar9 + 1;
          if (((uVar18 <= uVar9 + 1) ||
              (pcVar17 = *(char **)(uVar2 + 8 + uVar9 * 8), pcVar17 == (char *)0x0)) ||
             (cVar13 = *pcVar17, cVar13 == '\0')) goto switchD_0206692a_caseD_25;
          cVar14 = pcVar17[1];
          if (cVar14 == '\0') {
            switch((uintptr_t)(cVar13)) {
            case '%':
            case ')':
            case '*':
            case '+':
            case ',':
            case '-':
            case '/':
            case ';':
            case '\\':
            case ']':
            case '^':
            case '}':
              goto switchD_0206692a_caseD_25;
            }
          }
          if (cVar13 == 'e') {
LAB_02065f8e:
            if (cVar14 == '\0') {
              pcVar19 = &DAT_020a3b09;
LAB_02066984:
              if (*pcVar19 == '\0') goto switchD_0206692a_caseD_25;
            }
            else {
              if (cVar14 == 'n') {
LAB_02065fb7:
                cVar24 = pcVar17[2];
                if (cVar24 == '\0') {
                  pcVar19 = &DAT_020a3b0a;
                }
                else {
                  if (cVar24 != 'd') {
                    cVar21 = cVar24 + -0x20;
                    if (0x19 < (byte)(cVar24 + 0x9fU)) {
                      cVar21 = cVar24;
                    }
                    if (cVar21 != 'D') goto LAB_0206698d;
                  }
                  if (pcVar17[3] != '\0') goto LAB_0206698d;
                  pcVar19 = &DAT_020a3b0b;
                }
                goto LAB_02066984;
              }
              cVar24 = cVar14 + -0x20;
              if (0x19 < (byte)(cVar14 + 0x9fU)) {
                cVar24 = cVar14;
              }
              if (cVar24 == 'N') goto LAB_02065fb7;
            }
LAB_0206698d:
            if (cVar13 != 'e') goto LAB_02066998;
LAB_020669ac:
            if (cVar14 == '\0') {
              pcVar19 = &DAT_020a3b14;
LAB_02066c35:
              if (*pcVar19 == '\0') goto switchD_0206692a_caseD_25;
            }
            else {
              if (cVar14 == 'l') {
LAB_020669d5:
                cVar24 = pcVar17[2];
                if (cVar24 == '\0') {
                  pcVar19 = &DAT_020a3b15;
                }
                else {
                  if (cVar24 != 's') {
                    cVar21 = cVar24 + -0x20;
                    if (0x19 < (byte)(cVar24 + 0x9fU)) {
                      cVar21 = cVar24;
                    }
                    if (cVar21 != 'S') goto LAB_02066c3e;
                  }
                  cVar24 = pcVar17[3];
                  if (cVar24 == '\0') {
                    pcVar19 = &DAT_020a3b16;
                  }
                  else {
                    if (cVar24 != 'e') {
                      cVar21 = cVar24 + -0x20;
                      if (0x19 < (byte)(cVar24 + 0x9fU)) {
                        cVar21 = cVar24;
                      }
                      if (cVar21 != 'E') goto LAB_02066c3e;
                    }
                    if (pcVar17[4] != '\0') goto LAB_02066c3e;
                    pcVar19 = &DAT_020a3b17;
                  }
                }
                goto LAB_02066c35;
              }
              cVar24 = cVar14 + -0x20;
              if (0x19 < (byte)(cVar14 + 0x9fU)) {
                cVar24 = cVar14;
              }
              if (cVar24 == 'L') goto LAB_020669d5;
            }
LAB_02066c3e:
            if (cVar13 != 'e') goto LAB_02066c49;
LAB_02066c5c:
            if (cVar14 == '\0') {
              pcVar19 = &DAT_020a3b0d;
            }
            else {
              if (cVar14 != 'l') {
                cVar24 = cVar14 + -0x20;
                if (0x19 < (byte)(cVar14 + 0x9fU)) {
                  cVar24 = cVar14;
                }
                if (cVar24 != 'L') goto LAB_0206767a;
              }
              cVar24 = pcVar17[2];
              if (cVar24 == '\0') {
                pcVar19 = &DAT_020a3b0e;
              }
              else {
                if (cVar24 != 's') {
                  cVar21 = cVar24 + -0x20;
                  if (0x19 < (byte)(cVar24 + 0x9fU)) {
                    cVar21 = cVar24;
                  }
                  if (cVar21 != 'S') goto LAB_0206767a;
                }
                cVar24 = pcVar17[3];
                if (cVar24 == '\0') {
                  pcVar19 = &DAT_020a3b0f;
                }
                else {
                  if (cVar24 != 'e') {
                    cVar21 = cVar24 + -0x20;
                    if (0x19 < (byte)(cVar24 + 0x9fU)) {
                      cVar21 = cVar24;
                    }
                    if (cVar21 != 'E') goto LAB_0206767a;
                  }
                  cVar24 = pcVar17[4];
                  if (cVar24 == '\0') {
                    pcVar19 = &DAT_020a3b10;
                  }
                  else {
                    if (cVar24 != 'i') {
                      cVar21 = cVar24 + -0x20;
                      if (0x19 < (byte)(cVar24 + 0x9fU)) {
                        cVar21 = cVar24;
                      }
                      if (cVar21 != 'I') goto LAB_0206767a;
                    }
                    cVar24 = pcVar17[5];
                    if (cVar24 == '\0') {
                      pcVar19 = &DAT_020a3b11;
                    }
                    else {
                      if (cVar24 != 'f') {
                        cVar21 = cVar24 + -0x20;
                        if (0x19 < (byte)(cVar24 + 0x9fU)) {
                          cVar21 = cVar24;
                        }
                        if (cVar21 != 'F') goto LAB_0206767a;
                      }
                      if (pcVar17[6] != '\0') goto LAB_0206767a;
                      pcVar19 = &DAT_020a3b12;
                    }
                  }
                }
              }
            }
            if (*pcVar19 == '\0') goto switchD_0206692a_caseD_25;
          }
          else {
            cVar24 = cVar13 + -0x20;
            if (0x19 < (byte)(cVar13 + 0x9fU)) {
              cVar24 = cVar13;
            }
            if (cVar24 == 'E') goto LAB_02065f8e;
LAB_02066998:
            cVar24 = cVar13 + -0x20;
            if (0x19 < (byte)(cVar13 + 0x9fU)) {
              cVar24 = cVar13;
            }
            if (cVar24 == 'E') goto LAB_020669ac;
LAB_02066c49:
            cVar24 = cVar13 + -0x20;
            if (0x19 < (byte)(cVar13 + 0x9fU)) {
              cVar24 = cVar13;
            }
            if (cVar24 == 'E') goto LAB_02066c5c;
          }
LAB_0206767a:
          if (cVar13 == 'u') {
LAB_02067698:
            if (cVar14 == '\0') {
              pcVar19 = str_020a3b18 + 1;
            }
            else {
              if (cVar14 != 'n') {
                cVar13 = cVar14 + -0x20;
                if (0x19 < (byte)(cVar14 + 0x9fU)) {
                  cVar13 = cVar14;
                }
                if (cVar13 != 'N') goto LAB_02067771;
              }
              cVar13 = pcVar17[2];
              if (cVar13 == '\0') {
                pcVar19 = str_020a3b18 + 2;
              }
              else {
                if (cVar13 != 't') {
                  cVar14 = cVar13 + -0x20;
                  if (0x19 < (byte)(cVar13 + 0x9fU)) {
                    cVar14 = cVar13;
                  }
                  if (cVar14 != 'T') goto LAB_02067771;
                }
                cVar13 = pcVar17[3];
                if (cVar13 == '\0') {
                  pcVar19 = str_020a3b18 + 3;
                }
                else {
                  if (cVar13 != 'i') {
                    cVar14 = cVar13 + -0x20;
                    if (0x19 < (byte)(cVar13 + 0x9fU)) {
                      cVar14 = cVar13;
                    }
                    if (cVar14 != 'I') goto LAB_02067771;
                  }
                  cVar13 = pcVar17[4];
                  if (cVar13 == '\0') {
                    pcVar19 = str_020a3b18 + 4;
                  }
                  else {
                    if (cVar13 != 'l') {
                      cVar14 = cVar13 + -0x20;
                      if (0x19 < (byte)(cVar13 + 0x9fU)) {
                        cVar14 = cVar13;
                      }
                      if (cVar14 != 'L') goto LAB_02067771;
                    }
                    if (pcVar17[5] != '\0') goto LAB_02067771;
                    pcVar19 = str_020a3b18 + 5;
                  }
                }
              }
            }
            if (*pcVar19 == '\0') goto switchD_0206692a_caseD_25;
          }
          else {
            cVar24 = cVar13 + -0x20;
            if (0x19 < (byte)(cVar13 + 0x9fU)) {
              cVar24 = cVar13;
            }
            if (cVar24 == 'U') goto LAB_02067698;
          }
LAB_02067771:
          uVar8 = recovered_209cd00(pcVar17,&DAT_020a40d3);
          if (((((char)uVar8 == '\0') &&
               (uVar8 = recovered_209cd00(pcVar17,&DAT_020a40d9), (char)uVar8 == '\0')) &&
              ((iVar7 = recovered_2002eb0(pcVar17,&DAT_020a40d6), iVar7 != 0 &&
               ((iVar7 = recovered_2002eb0(pcVar17,&DAT_020a40dd), iVar7 != 0 &&
                (iVar7 = recovered_2002eb0(pcVar17,&DAT_020a40e0), iVar7 != 0)))))) &&
             ((iVar7 = recovered_2002eb0(pcVar17,&DAT_020a40e3), iVar7 != 0 &&
              ((((iVar7 = recovered_2002eb0(pcVar17,&DAT_020a40e6), iVar7 != 0 &&
                 (iVar7 = recovered_2002eb0(pcVar17,&DAT_020a40e9), iVar7 != 0)) &&
                (iVar7 = recovered_2002eb0(pcVar17,&DAT_020a40ed), iVar7 != 0)) &&
               ((iVar7 = recovered_2002eb0(pcVar17,&DAT_020a40eb), iVar7 != 0 &&
                (iVar7 = recovered_2002eb0(pcVar17,&DAT_020a40f0), iVar7 != 0)))))))) {
            local_78 = 0;
            uStack_70 = (ulong)PF_PART4(uStack_70, 4) << 0x20;
            local_68 = (char *)0x0;
            uStack_60 = 0;
            local_58 = 0;
            uStack_50 = (undefined4 *)0x0;
            local_48 = 0;
            uStack_40 = 0;
            uVar6 = recovered_20a3240(param_1,&local_78);
            if (uVar6 == '\0') {
              return '\0';
            }
            uVar8 = recovered_209f670((int *)&local_78);
            uVar33 = 0;
            if ((byte)uVar8 == 0) {
              uVar33 = DAT_020a1570;
            }
            *(undefined4 *)param_2 = 5;
            *(uint *)((long)param_2 + 4) = (uint)(byte)((byte)uVar8 ^ 1);
            *(undefined4 *)(param_2 + 1) = uVar33;
            param_2[2] = 0;
            param_2[3] = 0;
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[6] = 0;
            param_2[7] = 0;
            recovered_205ec00(&local_78);
            return uVar6;
          }
switchD_0206692a_caseD_25:
          *param_2 = 0;
          *(undefined4 *)(param_2 + 1) = 0;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          return '\x01';
        }
      }
LAB_02065b9e:
      iVar7 = recovered_2002eb0((char *)pbVar23,&DAT_020a4127);
      if (iVar7 == 0) {
        param_1[2] = param_1[2] + 1;
        local_78 = 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        local_68 = (char *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = (undefined4 *)0x0;
        local_48 = 0;
        uStack_40 = 0;
        uVar6 = recovered_20a3240(param_1,&local_78);
        if (uVar6 == '\0') {
          return '\0';
        }
        if (uStack_50 == (undefined4 *)0x0 || (int)local_78 != 7) {
          if (local_48 == 0 || (int)local_78 != 8) {
            if (local_68 != (char *)0x0 && (int)local_78 == 3) {
              uVar9 = recovered_2002e80(local_68);
              fVar32 = (float)(int)uVar9;
              *(undefined4 *)param_2 = 1;
              *(int *)((long)param_2 + 4) = (int)uVar9;
              goto LAB_02066282;
            }
            recovered_205ec00(&local_78);
            pvVar27 = (void *)*param_1;
            pbVar23 = &DAT_020a4127;
            pcVar17 = str_020a4129;
            goto LAB_02065cae;
          }
          extraout_EAX = recovered_20a5390(local_48);
          iVar7 = extraout_EAX;
        }
        else {
          iVar7 = ((uint32_t *)(uintptr_t)uStack_50)[2];
        }
        fVar32 = (float)iVar7;
        *(undefined4 *)param_2 = 1;
        goto LAB_0206627e;
      }
    }
    if (param_2 == (ulong *)0x0) {
      return '\0';
    }
    uVar9 = param_1[2];
    if (*(ulong *)param_1[1] <= uVar9) {
      pvVar27 = (void *)*param_1;
      pbVar23 = &DAT_020a4159;
      pcVar17 = str_020a415d;
      goto LAB_02065cae;
    }
    uVar18 = ((ulong *)param_1[1])[2];
    param_1[2] = uVar9 + 1;
    pbVar23 = *(byte **)(uVar18 + uVar9 * 8);
    local_78 = 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = (undefined4 *)0x0;
    local_48 = 0;
    uStack_40 = 0;
    iVar7 = recovered_2002eb0((char *)pbVar23,&DAT_020a3c3f);
    if (iVar7 == 0) {
      uVar6 = recovered_20a1dc0(param_1,&local_78);
      if (uVar6 == '\0') {
        return '\0';
      }
      if ((*(ulong *)param_1[1] <= param_1[2]) ||
         (iVar7 = recovered_2002eb0(*(char **)(((ulong *)param_1[1])[2] + param_1[2] * 8),
                                    &DAT_020a3c64), iVar7 != 0)) {
        recovered_205ec00(&local_78);
        pvVar27 = (void *)*param_1;
        pbVar23 = &DAT_020a3c64;
        pcVar17 = str_020a417a;
        goto LAB_02065cae;
      }
      param_1[2] = param_1[2] + 1;
      goto LAB_02066eba;
    }
    iVar7 = recovered_2002eb0((char *)pbVar23,&DAT_020a3be3);
    if (iVar7 == 0) {
      puVar10 = recovered_2000ad0(0x20);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 1;
        *(undefined1 *)(puVar10 + 1) = 0;
        *(undefined8 *)(puVar10 + 2) = 0;
        *(undefined8 *)(puVar10 + 4) = 0;
        *(undefined8 *)(puVar10 + 6) = 0;
        recovered_205ec00(&local_78);
        local_78 = CONCAT44(PF_PART4(local_78, 4),7);
        uStack_50 = puVar10;
        if ((*(ulong *)param_1[1] <= param_1[2]) ||
           (iVar7 = recovered_2002eb0(*(char **)(((ulong *)param_1[1])[2] + param_1[2] * 8),
                                      &DAT_020a3be5), iVar7 != 0)) {
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = (char *)0x0;
          uStack_e0 = 0;
          local_d8 = 0;
          uStack_d0 = (undefined4 *)0x0;
          local_c8 = 0;
          uStack_c0 = 0;
          uVar6 = recovered_20a1dc0(param_1,&local_f8);
          if (uVar6 != '\0') {
            do {
              puVar10 = uStack_50;
              if (((uStack_50 == (undefined4 *)0x0) ||
                  (uVar6 = recovered_20a1b00((long)uStack_50,*(long *)(uStack_50 + 2) + 1),
                  uVar6 == '\0')) ||
                 (uVar8 = recovered_20a0670((undefined8 *)
                                            (*(long *)(puVar10 + 6) + *(long *)(puVar10 + 2) * 0x40
                                            + -0x40),&local_f8), (char)uVar8 == '\0')) {
                recovered_205ec00(&local_f8);
                recovered_205ec00(&local_78);
                pvVar27 = (void *)*param_1;
                pcVar17 = str_020a4187;
                goto LAB_02067610;
              }
              recovered_205ec00(&local_f8);
              puVar31 = (ulong *)param_1[1];
              uVar9 = param_1[2];
              uVar18 = *puVar31;
              if (uVar9 < uVar18) {
                iVar7 = recovered_2002eb0(*(char **)(puVar31[2] + uVar9 * 8),&DAT_020a3be5);
                uVar9 = param_1[2];
                if (iVar7 == 0) {
                  param_1[2] = uVar9 + 1;
                  goto LAB_02066eba;
                }
                puVar31 = (ulong *)param_1[1];
                uVar18 = *puVar31;
              }
              if ((uVar18 <= uVar9) ||
                 (iVar7 = recovered_2002eb0(*(char **)(puVar31[2] + uVar9 * 8),&DAT_020a3cbb),
                 iVar7 != 0)) {
                recovered_205ec00(&local_78);
                pvVar27 = (void *)*param_1;
                pcVar17 = str_020a41aa;
                goto LAB_02067610;
              }
              param_1[2] = param_1[2] + 1;
              local_f8 = 0;
              uStack_f0 = 0;
              local_e8 = (char *)0x0;
              uStack_e0 = 0;
              local_d8 = 0;
              uStack_d0 = (undefined4 *)0x0;
              local_c8 = 0;
              uStack_c0 = 0;
              uVar6 = recovered_20a1dc0(param_1,&local_f8);
            } while (uVar6 != '\0');
          }
LAB_0206741f:
          puVar25 = &local_78;
LAB_02067423:
          recovered_205ec00(puVar25);
          return '\0';
        }
        param_1[2] = param_1[2] + 1;
        goto LAB_02066eba;
      }
      pvVar27 = (void *)*param_1;
      pcVar17 = str_020a4187;
      goto LAB_02065cae;
    }
    iVar7 = recovered_2002eb0((char *)pbVar23,&DAT_020a409e);
    if (iVar7 == 0) {
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = (char *)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = (undefined4 *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = (char *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = (undefined4 *)0x0;
      local_88 = 0;
      uStack_80 = 0;
      puVar10 = recovered_2000ad0(0x20);
      if (puVar10 == (undefined4 *)0x0) {
LAB_020675eb:
        recovered_205ec00(&local_f8);
        recovered_205ec00(&local_b8);
        pvVar27 = (void *)*param_1;
        pcVar17 = str_020a41be;
LAB_02067610:
        pf_varargs_205eb00___(pvVar27,(char *)pbVar23,pcVar17);
        return '\0';
      }
      *puVar10 = 1;
      *(undefined1 *)(puVar10 + 1) = 0;
      *(undefined8 *)(puVar10 + 2) = 0;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0;
      recovered_205ec00(&local_f8);
      local_f8 = CONCAT44(PF_PART4(local_f8, 4),7);
      uStack_d0 = puVar10;
      uVar6 = recovered_209f2c0((undefined4 *)&local_b8);
      if (uVar6 == '\0') goto LAB_020675eb;
      uVar6 = recovered_209ce70((long)param_1,0x20f4861U);
      pbVar30 = pbVar23;
      if (uVar6 == '\0') {
        local_108 = 0;
        local_158 = 0;
        local_100 = pbVar23;
        do {
          if (*(ulong *)param_1[1] <= param_1[2]) {
            recovered_205ec00(&local_f8);
            recovered_205ec00(&local_b8);
            pvVar27 = (void *)*param_1;
            pbVar23 = &DAT_020a4159;
            pcVar17 = str_020a41e1;
            goto LAB_02067610;
          }
          iVar7 = recovered_2002eb0(*(char **)(((ulong *)param_1[1])[2] + param_1[2] * 8),
                                    &DAT_020a3be3);
          if (iVar7 == 0) {
            local_148 = (ulong *)0x0;
            uStack_140 = uStack_140 & 0xffffffff00000000;
            local_138 = (ulong *)0x0;
            uStack_130 = 0;
            local_128 = 0;
            uStack_120 = 0;
            local_118 = 0;
            uStack_110 = 0;
            in_stack_fffffffffffffe68 = 0;
            in_stack_fffffffffffffe70 = 0.0;
            in_stack_fffffffffffffe78 = (ulong ***)0x0;
            in_stack_fffffffffffffe80 = (ulong ***)0x0;
            in_stack_fffffffffffffe88 = 0;
            in_stack_fffffffffffffe90 = 0;
            in_stack_fffffffffffffe98 = 0;
            in_stack_fffffffffffffea0 = 0;
            pbVar23 = *(byte **)(*(long *)(param_1[1] + 0x10) + param_1[2] * 8);
            param_1[2] = param_1[2] + 1;
            uVar6 = recovered_20a1dc0(param_1,(ulong *)&local_148);
            if (uVar6 != '\0') {
              uVar6 = recovered_209ce70((long)param_1,0x20f43a6U);
              if (uVar6 == '\0') {
                recovered_205ec00(&local_148);
                recovered_205ec00(apuStackY_598 + 0x80);
                recovered_205ec00(&local_f8);
                recovered_205ec00(&local_b8);
                pvVar27 = (void *)*param_1;
                pcVar17 = str_020a4201;
                goto LAB_02067610;
              }
              uVar6 = recovered_209ce70((long)param_1,0x20f49c9U);
              if ((uVar6 == '\0') &&
                 (uVar6 = recovered_209ce70((long)param_1,0x20f4709U), uVar6 == '\0')) {
                recovered_205ec00(&local_148);
                recovered_205ec00(apuStackY_598 + 0x80);
                recovered_205ec00(&local_f8);
                recovered_205ec00(&local_b8);
                pvVar27 = (void *)*param_1;
                pcVar17 = str_020a4210;
                goto LAB_02067610;
              }
              if (((local_108 & 1) != 0 || local_158 == 0) ||
                 (uVar6 = recovered_20a54d0((int *)*param_1,(int *)&local_b8,(int *)&local_f8,
                                            (char *)pbVar23,in_R8,in_R9), uVar6 != '\0')) {
                ppuVar26 = apuStackY_598 + 0x80;
                uVar6 = recovered_20a1dc0(param_1,(ulong *)ppuVar26);
                if ((uVar6 != '\0') &&
                   (uVar6 = recovered_20a5630((int *)*param_1,(int *)&local_b8,(int *)&local_148,
                                              (long)ppuVar26,(char *)pbVar23,in_R9), uVar6 != '\0'))
                {
                  recovered_205ec00(&local_148);
                  recovered_205ec00(ppuVar26);
                  local_108 = CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
                  pbVar30 = local_100;
                  goto LAB_020668b4;
                }
              }
            }
LAB_02066965:
            recovered_205ec00(&local_148);
            ppuVar26 = apuStackY_598 + 0x80;
LAB_02066c11:
            recovered_205ec00(ppuVar26);
            recovered_205ec00(&local_f8);
            puVar25 = &local_b8;
            goto LAB_02067423;
          }
          pbVar23 = in_R8;
          if (param_1[2] + 1 < *(ulong *)param_1[1]) {
            iVar7 = recovered_2002eb0(*(char **)(((ulong *)param_1[1])[2] + 8 + param_1[2] * 8),
                                      &DAT_020a420e);
            if (iVar7 != 0) {
              iVar7 = recovered_2002eb0(*(char **)(*(long *)(param_1[1] + 0x10) + 8 + param_1[2] * 8
                                                  ),&DAT_020a3f48);
              pbVar23 = in_R8;
              if (iVar7 != 0) goto LAB_02066546;
            }
            local_148 = (ulong *)0x0;
            uStack_140 = uStack_140 & 0xffffffff00000000;
            local_138 = (ulong *)0x0;
            uStack_130 = 0;
            local_128 = 0;
            uStack_120 = 0;
            local_118 = 0;
            uStack_110 = 0;
            in_stack_fffffffffffffe68 = 0;
            in_stack_fffffffffffffe70 = 0.0;
            in_stack_fffffffffffffe78 = (ulong ***)0x0;
            in_stack_fffffffffffffe80 = (ulong ***)0x0;
            in_stack_fffffffffffffe88 = 0;
            in_stack_fffffffffffffe90 = 0;
            in_stack_fffffffffffffe98 = 0;
            in_stack_fffffffffffffea0 = 0;
            lVar29 = *(long *)(param_1[1] + 0x10);
            uVar3 = param_1[2];
            param_1[2] = uVar3 + 1;
            pbVar23 = *(byte **)(lVar29 + uVar3 * 8);
            uVar6 = recovered_20a56e0((int *)*param_1,pbVar23,&local_148,uVar3,in_R8);
            if (((uVar6 == '\0') ||
                (((param_1[2] = param_1[2] + 1, (local_108 & 1) == 0 && local_158 != 0 &&
                  (uVar6 = recovered_20a54d0((int *)*param_1,(int *)&local_b8,(int *)&local_f8,
                                             (char *)pbVar23,in_R8,in_R9), uVar6 == '\0')) ||
                 (uVar6 = recovered_20a1dc0(param_1,(ulong *)(apuStackY_598 + 0x80)), uVar6 == '\0')
                 ))) || (uVar6 = recovered_20a5630((int *)*param_1,(int *)&local_b8,
                                                   (int *)&local_148,(long)(apuStackY_598 + 0x80),
                                                   (char *)pbVar23,in_R9), uVar6 == '\0'))
            goto LAB_02066965;
            recovered_205ec00(&local_148);
            recovered_205ec00(apuStackY_598 + 0x80);
            local_108 = CONCAT71((int7)((ulong)extraout_RAX_00 >> 8),1);
          }
          else {
LAB_02066546:
            local_148 = (ulong *)0x0;
            uStack_140 = uStack_140 & 0xffffffff00000000;
            local_138 = (ulong *)0x0;
            uStack_130 = 0;
            local_128 = 0;
            uStack_120 = 0;
            local_118 = 0;
            uStack_110 = 0;
            uVar6 = recovered_20a1dc0(param_1,(ulong *)&local_148);
            if (uVar6 == '\0') {
LAB_02066c0a:
              ppuVar26 = &local_148;
              goto LAB_02066c11;
            }
            local_158 = local_158 + 1;
            if ((local_108 & 1) == 0) {
              uVar6 = recovered_20a1aa0((long)uStack_d0,(long)&local_148);
              if (uVar6 == '\0') {
                recovered_205ec00(&local_148);
                pbVar23 = pbVar30;
                goto LAB_020675eb;
              }
            }
            else {
              in_stack_fffffffffffffe78 = (ulong ***)0x0;
              in_stack_fffffffffffffe80 = (ulong ***)0x0;
              in_stack_fffffffffffffe88 = 0;
              in_stack_fffffffffffffe90 = 0;
              in_stack_fffffffffffffe98 = 0;
              in_stack_fffffffffffffea0 = 0;
              in_stack_fffffffffffffe70 = (float)(int)local_158;
              in_stack_fffffffffffffe68 = CONCAT44((int)local_158,1);
              pbVar23 = pbVar30;
              uVar6 = recovered_20a5630((int *)*param_1,(int *)&local_b8,
                                        (int *)(apuStackY_598 + 0x80),(long)&local_148,
                                        (char *)pbVar30,in_R9);
              if (uVar6 == '\0') goto LAB_02066c0a;
            }
            recovered_205ec00(&local_148);
          }
LAB_020668b4:
          in_R8 = pbVar23;
          if (param_1[2] < *(ulong *)param_1[1]) {
            iVar7 = recovered_2002eb0(*(char **)(((ulong *)param_1[1])[2] + param_1[2] * 8),
                                      &DAT_020a40a0);
            in_R8 = pbVar23;
            if (iVar7 == 0) {
              param_1[2] = param_1[2] + 1;
              break;
            }
          }
          uVar6 = recovered_209ce70((long)param_1,0x20f447cU);
          if (uVar6 == '\0') {
            recovered_205ec00(&local_f8);
            recovered_205ec00(&local_b8);
            pvVar27 = (void *)*param_1;
            pcVar17 = str_020a422d;
            pbVar23 = pbVar30;
            goto LAB_02067610;
          }
          uVar6 = recovered_209ce70((long)param_1,0x20f4861U);
        } while (uVar6 == '\0');
        recovered_205ec00(&local_78);
        if ((local_108 & 1) != 0) {
          uStack_70 = CONCAT44(uStack_ac,uStack_b0);
          local_78 = local_b8;
          goto LAB_0206614c;
        }
        uStack_70 = CONCAT44(uStack_ec,uStack_f0);
        local_48 = local_c8;
        uStack_40 = uStack_c0;
        local_58 = local_d8;
        uStack_50 = uStack_d0;
        local_68 = local_e8;
        uStack_60 = uStack_e0;
        local_78 = local_f8;
        local_f8 = local_f8 & 0xffffffff00000000;
        puVar5 = &local_f8;
        puVar10 = &uStack_f0;
        puVar11 = &local_e8;
        puVar15 = &uStack_e0;
        puVar20 = &local_d8;
        puVar22 = &uStack_d0;
        puVar25 = &local_c8;
        puVar28 = &uStack_c0;
      }
      else {
        recovered_205ec00(&local_78);
        uStack_70 = CONCAT44(uStack_ac,uStack_b0);
        local_78 = local_b8;
LAB_0206614c:
        local_b8 = local_78 & 0xffffffff00000000;
        puVar10 = &uStack_b0;
        puVar5 = &local_b8;
        puVar11 = &local_a8;
        puVar15 = &uStack_a0;
        puVar20 = &local_98;
        puVar22 = &uStack_90;
        puVar25 = &local_88;
        puVar28 = &uStack_80;
        local_68 = local_a8;
        uStack_60 = uStack_a0;
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_48 = local_88;
        uStack_40 = uStack_80;
      }
      *(undefined4 *)((long)puVar5 + 4) = 0;
      *puVar10 = 0;
      *puVar11 = 0;
      *puVar15 = 0;
      *puVar20 = 0;
      *puVar22 = 0;
      *puVar25 = 0;
      *puVar28 = 0;
      recovered_205ec00(&local_f8);
      recovered_205ec00(&local_b8);
      pbVar23 = pbVar30;
      goto LAB_02066eba;
    }
    iVar7 = recovered_2002eb0((char *)pbVar23,&DAT_020a3c66);
    if (iVar7 == 0) {
      lVar29 = DAT_020de638;
      if (lVar29 != 0) {
        lVar4 = DAT_020de640;
        uVar8 = recovered_20a5b10((undefined4 *)&local_78,
                                  *(undefined4 **)(lVar4 + -0x10 + lVar29 * 0x10),
                                  *(long *)(lVar4 + -8 + lVar29 * 0x10));
        if ((char)uVar8 != '\0') goto LAB_02066eba;
        pvVar27 = (void *)*param_1;
        pcVar17 = str_020a4241;
        goto LAB_02065cae;
      }
LAB_02066e9c:
      local_78 = 0;
LAB_02066ea4:
      uStack_70 = uStack_70 & 0xffffffff00000000;
    }
    else {
      if (pbVar23 == (byte *)0x0) {
LAB_02066e5f:
        uVar8 = recovered_209cd00((char *)pbVar23,&DAT_020a4123);
        if ((((char)uVar8 == '\0') &&
            (uVar8 = recovered_209cd00((char *)pbVar23,&DAT_020a4289), (char)uVar8 == '\0')) &&
           (uVar8 = recovered_209cd00((char *)pbVar23,&DAT_020a428e), (char)uVar8 == '\0')) {
          uVar6 = recovered_20a5ce0((long)pbVar23,(int *)((long)&local_78 + 4));
          if (uVar6 != '\0') {
            local_78 = CONCAT44(PF_PART4(local_78, 4),1);
            uStack_70 = CONCAT44(PF_PART4(uStack_70, 4),(float)PF_PART4(local_78, 4));
            goto LAB_02066eba;
          }
          local_f8 = local_f8 & 0xffffffff00000000;
          if (pbVar23 != (byte *)0x0) {
            uVar8 = recovered_208f550(pbVar23,(undefined4 *)&local_f8);
            if (((int)local_f8 < 0 & (byte)uVar8) == 1) {
              local_78 = CONCAT44((int)local_f8,6);
              goto LAB_02066ea4;
            }
          }
          uVar6 = recovered_20a5f00((char *)pbVar23);
          if ((uVar6 != '\0') &&
             (uVar6 = recovered_20a5f80((char *)pbVar23,(float *)&uStack_70), uVar6 != '\0')) {
            local_78 = CONCAT44((int)pf_bits_float((uint32_t)uStack_70),2);
            goto LAB_02066eba;
          }
          uVar6 = recovered_209cd80(pbVar23);
          if (uVar6 == '\0') {
            pvVar27 = (void *)*param_1;
            pcVar17 = str_020a42b5;
LAB_02065cae:
            pf_varargs_205eb00___(pvVar27,(char *)pbVar23,pcVar17);
            return '\0';
          }
          uVar6 = recovered_209f0e0((long)pbVar23,&local_78);
          if (uVar6 != '\0') goto LAB_02066eba;
          uVar6 = recovered_20a60a0((char *)pbVar23);
          if (uVar6 != '\0') {
            uVar6 = recovered_20a7b90((undefined4 *)&local_78,(long)pbVar23);
            if (uVar6 == '\0') {
              pf_varargs_205eb00__8_
                        ((void *)*param_1,(char *)pbVar23,str_020a4292,(ulonglong)pbVar23);
              return '\0';
            }
            goto LAB_02066eba;
          }
        }
        goto LAB_02066e9c;
      }
      uVar9 = recovered_2002e80((char *)pbVar23);
      bVar1 = *pbVar23;
      pcVar17 = &DAT_020a427e;
      if (1 < uVar9) {
        if (bVar1 < 0x27) {
          if (bVar1 == 0) goto LAB_02066a99;
          if (bVar1 == 0x22) goto LAB_020663be;
        }
        else {
          if (bVar1 == 0x74) goto LAB_020663fe;
          if (bVar1 == 0x27) {
LAB_020663be:
            if (pbVar23[uVar9 - 1] == bVar1) {
              uVar6 = recovered_20a5c10((char *)pbVar23,(undefined4 *)&local_78);
              if (uVar6 != '\0') goto LAB_02066eba;
              pvVar27 = (void *)*param_1;
              pcVar17 = str_020a4267;
              goto LAB_02065cae;
            }
          }
        }
LAB_020663e8:
        bVar12 = bVar1 - 0x20;
        if (0x19 < (byte)(bVar1 + 0x9f)) {
          bVar12 = bVar1;
        }
        if (bVar12 == 0x54) {
LAB_020663fe:
          bVar12 = pbVar23[1];
          if (bVar12 == 0) {
            pcVar17 = &DAT_020a427f;
          }
          else {
            if (bVar12 != 0x72) {
              bVar16 = bVar12 - 0x20;
              if (0x19 < (byte)(bVar12 + 0x9f)) {
                bVar16 = bVar12;
              }
              if (bVar16 != 0x52) goto LAB_02066aa2;
            }
            bVar12 = pbVar23[2];
            if (bVar12 == 0) {
              pcVar17 = &DAT_020a4280;
            }
            else {
              if (bVar12 != 0x75) {
                bVar16 = bVar12 - 0x20;
                if (0x19 < (byte)(bVar12 + 0x9f)) {
                  bVar16 = bVar12;
                }
                if (bVar16 != 0x55) goto LAB_02066aa2;
              }
              bVar12 = pbVar23[3];
              if (bVar12 == 0) {
                pcVar17 = &DAT_020a4281;
              }
              else {
                if (bVar12 != 0x65) {
                  bVar16 = bVar12 - 0x20;
                  if (0x19 < (byte)(bVar12 + 0x9f)) {
                    bVar16 = bVar12;
                  }
                  if (bVar16 != 0x45) goto LAB_02066aa2;
                }
                if (pbVar23[4] != 0) goto LAB_02066aa2;
                pcVar17 = &DAT_020a4282;
              }
            }
          }
          goto LAB_02066a99;
        }
LAB_02066aa2:
        if (bVar1 == 0) {
          pcVar17 = str_020a4283;
        }
        else {
          if (bVar1 != 0x66) {
            bVar12 = bVar1 - 0x20;
            if (0x19 < (byte)(bVar1 + 0x9f)) {
              bVar12 = bVar1;
            }
            if (bVar12 != 0x46) goto LAB_02066e5f;
          }
          bVar1 = pbVar23[1];
          if (bVar1 == 0) {
            pcVar17 = str_020a4283 + 1;
          }
          else {
            if (bVar1 != 0x61) {
              bVar12 = bVar1 - 0x20;
              if (0x19 < (byte)(bVar1 + 0x9f)) {
                bVar12 = bVar1;
              }
              if (bVar12 != 0x41) goto LAB_02066e5f;
            }
            bVar1 = pbVar23[2];
            if (bVar1 == 0) {
              pcVar17 = str_020a4283 + 2;
            }
            else {
              if (bVar1 != 0x6c) {
                bVar12 = bVar1 - 0x20;
                if (0x19 < (byte)(bVar1 + 0x9f)) {
                  bVar12 = bVar1;
                }
                if (bVar12 != 0x4c) goto LAB_02066e5f;
              }
              bVar1 = pbVar23[3];
              if (bVar1 == 0) {
                pcVar17 = str_020a4283 + 3;
              }
              else {
                if (bVar1 != 0x73) {
                  bVar12 = bVar1 - 0x20;
                  if (0x19 < (byte)(bVar1 + 0x9f)) {
                    bVar12 = bVar1;
                  }
                  if (bVar12 != 0x53) goto LAB_02066e5f;
                }
                bVar1 = pbVar23[4];
                if (bVar1 == 0) {
                  pcVar17 = str_020a4283 + 4;
                }
                else {
                  if (bVar1 != 0x65) {
                    bVar12 = bVar1 - 0x20;
                    if (0x19 < (byte)(bVar1 + 0x9f)) {
                      bVar12 = bVar1;
                    }
                    if (bVar12 != 0x45) goto LAB_02066e5f;
                  }
                  if (pbVar23[5] != 0) goto LAB_02066e5f;
                  pcVar17 = str_020a4283 + 5;
                }
              }
            }
          }
        }
        if (*pcVar17 != '\0') goto LAB_02066e5f;
        local_78 = 5;
        goto LAB_02066ea4;
      }
      if (bVar1 != 0) {
        if (bVar1 != 0x74) goto LAB_020663e8;
        goto LAB_020663fe;
      }
LAB_02066a99:
      if (*pcVar17 != '\0') goto LAB_02066aa2;
      local_78 = 0x100000005;
      uStack_70 = CONCAT44(PF_PART4(uStack_70, 4),0x3f800000);
    }
    local_68 = (char *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = (undefined4 *)0x0;
    local_48 = 0;
    uStack_40 = 0;
LAB_02066eba:
    puVar31 = (ulong *)param_1[1];
    uVar9 = param_1[2];
    if (*puVar31 <= uVar9) {
LAB_020672b4:
      recovered_205ec00(param_2);
      param_2[6] = local_48;
      param_2[7] = uStack_40;
      param_2[4] = local_58;
      param_2[5] = (ulong)uStack_50;
      param_2[2] = (ulong)local_68;
      param_2[3] = uStack_60;
      *param_2 = local_78;
      param_2[1] = uStack_70;
      return '\x01';
    }
    local_100 = pbVar23;
LAB_02066ee0:
    pbVar23 = local_100;
    iVar7 = recovered_2002eb0(*(char **)(puVar31[2] + uVar9 * 8),&DAT_020a3be3);
    if (iVar7 == 0) {
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = (char *)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = (undefined4 *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = (char *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = (undefined4 *)0x0;
      local_88 = 0;
      uStack_80 = 0;
      param_1[2] = param_1[2] + 1;
      uVar6 = recovered_20a1dc0(param_1,&local_f8);
      if (uVar6 == '\0') goto LAB_0206741f;
      if ((param_1[2] < *(ulong *)param_1[1]) &&
         (iVar7 = recovered_2002eb0(*(char **)(((ulong *)param_1[1])[2] + param_1[2] * 8),
                                    &DAT_020a3be5), iVar7 == 0)) {
        param_1[2] = param_1[2] + 1;
        uVar8 = recovered_20a7ca0((int *)&local_78,(int *)&local_f8,&local_b8);
        recovered_205ec00(&local_f8);
        recovered_205ec00(&local_78);
        if ((char)uVar8 != '\0') {
          recovered_205ec00(&local_78);
          iVar7 = (int)local_b8;
          uVar33 = PF_PART4(local_b8, 4);
          uVar34 = uStack_b0;
          uVar35 = uStack_ac;
          uVar36 = (undefined4)local_a8;
          uVar37 = PF_PART4(local_a8, 4);
          uVar38 = (undefined4)uStack_a0;
          uVar39 = PF_PART4(uStack_a0, 4);
          uVar40 = (undefined4)local_98;
          uVar41 = PF_PART4(local_98, 4);
          uVar42 = (undefined4)uStack_90;
          uVar43 = PF_PART4(uStack_90, 4);
          uVar44 = (undefined4)local_88;
          uVar45 = PF_PART4(local_88, 4);
          uVar46 = (undefined4)uStack_80;
          uVar47 = PF_PART4(uStack_80, 4);
          goto LAB_02067285;
        }
        pvVar27 = (void *)*param_1;
        pcVar17 = str_020a42c6;
        pbVar23 = local_100;
      }
      else {
        recovered_205ec00(&local_f8);
        recovered_205ec00(&local_78);
        pvVar27 = (void *)*param_1;
        pcVar17 = str_020a4201;
      }
      goto LAB_02067610;
    }
    iVar7 = recovered_2002eb0(*(char **)(*(long *)(param_1[1] + 0x10) + param_1[2] * 8),
                              &DAT_020a3c3f);
    if (iVar7 == 0) {
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = (char *)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = (undefined4 *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_148 = (ulong *)0x0;
      uStack_140 = 0;
      local_138 = (ulong *)0x0;
      uVar3 = param_1[2];
      uVar9 = uVar3 + 1;
      param_1[2] = uVar9;
      if ((*(ulong *)param_1[1] <= uVar9) ||
         (iVar7 = recovered_2002eb0(*(char **)(((ulong *)param_1[1])[2] + 8 + uVar3 * 8),
                                    &DAT_020a3c64), iVar7 != 0)) {
        do {
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = (char *)0x0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = (undefined4 *)0x0;
          local_88 = 0;
          uStack_80 = 0;
          uVar6 = recovered_20a1dc0(param_1,&local_b8);
          if (uVar6 == '\0') {
            recovered_205ec00(&local_b8);
            if (local_148 != (ulong *)0x0) {
              lVar29 = 0;
              puVar31 = (ulong *)0x0;
              do {
                recovered_205ec00((undefined8 *)((long)local_138 + lVar29));
                puVar31 = (ulong *)((long)puVar31 + 1);
                lVar29 = lVar29 + 0x40;
              } while (puVar31 < local_148);
            }
            recovered_2000bb0(local_138);
            local_148 = (ulong *)0x0;
            uStack_140 = 0;
            local_138 = (ulong *)0x0;
            goto LAB_0206741f;
          }
          if ((((*(ulong *)param_1[1] <= param_1[2]) ||
               (iVar7 = recovered_2002eb0(*(char **)(((ulong *)param_1[1])[2] + param_1[2] * 8),
                                          &DAT_020a3c64), iVar7 != 0)) || ((int)local_b8 != 7)) ||
             ((uStack_90 == (undefined4 *)0x0 || (*(char *)(uStack_90 + 1) != '\x01')))) {
            uVar8 = recovered_209cec0((long *)&local_148,&local_b8);
            if ((char)uVar8 != '\0') goto LAB_02067063;
LAB_02067349:
            recovered_205ec00(&local_b8);
            if (local_148 != (ulong *)0x0) {
              lVar29 = 0;
              puVar31 = (ulong *)0x0;
              do {
                recovered_205ec00((undefined8 *)((long)local_138 + lVar29));
                puVar31 = (ulong *)((long)puVar31 + 1);
                lVar29 = lVar29 + 0x40;
              } while (puVar31 < local_148);
            }
            recovered_2000bb0(local_138);
            local_148 = (ulong *)0x0;
            uStack_140 = 0;
            local_138 = (ulong *)0x0;
            recovered_205ec00(&local_78);
            pvVar27 = (void *)*param_1;
            pcVar17 = str_020a42db;
LAB_020673b8:
            pbVar23 = local_100;
            goto LAB_02067610;
          }
          if (*(long *)(uStack_90 + 2) != 0) {
            lVar29 = 0;
            uVar9 = 0;
            do {
              uVar8 = recovered_209cec0((long *)&local_148,
                                        (undefined8 *)(*(long *)(uStack_90 + 6) + lVar29));
              if ((char)uVar8 == '\0') goto LAB_02067349;
              uVar9 = uVar9 + 1;
              lVar29 = lVar29 + 0x40;
            } while (uVar9 < *(ulong *)(uStack_90 + 2));
          }
LAB_02067063:
          recovered_205ec00(&local_b8);
          puVar31 = (ulong *)param_1[1];
          uVar9 = param_1[2];
          uVar18 = *puVar31;
          if (uVar9 < uVar18) {
            iVar7 = recovered_2002eb0(*(char **)(puVar31[2] + uVar9 * 8),&DAT_020a3c64);
            uVar9 = param_1[2];
            if (iVar7 == 0) goto LAB_020671d5;
            puVar31 = (ulong *)param_1[1];
            uVar18 = *puVar31;
          }
          if ((uVar18 <= uVar9) ||
             (iVar7 = recovered_2002eb0(*(char **)(puVar31[2] + uVar9 * 8),&DAT_020a3cbb),
             iVar7 != 0)) {
            if (local_148 != (ulong *)0x0) {
              lVar29 = 0;
              puVar31 = (ulong *)0x0;
              do {
                recovered_205ec00((undefined8 *)((long)local_138 + lVar29));
                puVar31 = (ulong *)((long)puVar31 + 1);
                lVar29 = lVar29 + 0x40;
              } while (puVar31 < local_148);
            }
            recovered_2000bb0(local_138);
            local_148 = (ulong *)0x0;
            uStack_140 = 0;
            local_138 = (ulong *)0x0;
            recovered_205ec00(&local_78);
            pvVar27 = (void *)*param_1;
            pcVar17 = str_020a4304;
            goto LAB_020673b8;
          }
          param_1[2] = param_1[2] + 1;
        } while( true );
      }
      param_1[2] = param_1[2] + 1;
      goto LAB_020671dc;
    }
    goto LAB_020672b4;
  }
  puVar31 = (ulong *)param_1[1];
  uVar9 = param_1[2];
  uVar18 = *puVar31;
  if (uVar9 < uVar18) {
    iVar7 = recovered_2002eb0(*(char **)(puVar31[2] + uVar9 * 8),&DAT_020a40f5);
    uVar9 = param_1[2];
    if (iVar7 != 0) {
      puVar31 = (ulong *)param_1[1];
      uVar18 = *puVar31;
      goto LAB_020659b6;
    }
    param_1[2] = uVar9 + 1;
    local_78 = 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = (undefined4 *)0x0;
    local_48 = 0;
    uStack_40 = 0;
    uVar6 = recovered_20a3240(param_1,&local_78);
    if (uVar6 == '\0') {
      return '\0';
    }
    if ((int)local_78 == 1) {
LAB_02065b06:
      iVar7 = -PF_PART4(local_78, 4);
      fVar32 = (float)iVar7;
      uVar33 = 1;
    }
    else {
      if ((int)local_78 != 2) {
        if ((int)local_78 != 5) {
          recovered_205ec00(&local_78);
          pvVar27 = (void *)*param_1;
          pbVar23 = &DAT_020a40f5;
          pcVar17 = str_020a40ff;
          goto LAB_02065cae;
        }
        goto LAB_02065b06;
      }
      fVar32 = pf_bits_float((uint32_t)uStack_70 ^ _DAT_020a1560);
      iVar7 = (int)fVar32;
      uVar33 = 2;
    }
    *(undefined4 *)param_2 = uVar33;
LAB_0206627e:
    *(int *)((long)param_2 + 4) = iVar7;
LAB_02066282:
    *(float *)(param_2 + 1) = fVar32;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    recovered_205ec00(&local_78);
    return '\x01';
  }
LAB_020659b6:
  if ((uVar18 <= uVar9) ||
     (iVar7 = recovered_2002eb0(*(char **)(puVar31[2] + uVar9 * 8),&DAT_020a4121), iVar7 != 0))
  goto LAB_020659d7;
  param_1[2] = param_1[2] + 1;
  local_78 = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = (undefined4 *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  uVar6 = recovered_20a3240(param_1,&local_78);
  if (uVar6 == '\0') {
    return '\0';
  }
  uVar34 = 1;
  uVar33 = DAT_020a1570;
  switch((uintptr_t)((int)local_78)) {
  case 1:
  case 5:
  case 6:
    if (PF_PART4(local_78, 4) == 0) goto switchD_02065b7d_default;
    break;
  case 2:
    if ((pf_bits_float((uint32_t)uStack_70) == 0.0) && (!NAN(pf_bits_float((uint32_t)uStack_70)))) goto switchD_02065b7d_default;
    break;
  case 3:
    if ((local_68 == (char *)0x0) || (*local_68 == '\0')) goto switchD_02065b7d_default;
    break;
  case 4:
    lVar29 = local_58;
    goto joined_r0x0206635b;
  case 7:
    lVar29 = (long)uStack_50;
    goto LAB_02066348;
  case 8:
    lVar29 = local_48;
LAB_02066348:
    if (lVar29 == 0) goto switchD_02065b7d_default;
    lVar29 = *(long *)(lVar29 + 8);
    goto joined_r0x0206635b;
  case 9:
    lVar29 = uStack_40;
joined_r0x0206635b:
    if (lVar29 == 0) goto switchD_02065b7d_default;
    break;
  default:
    goto switchD_02065b7d_default;
  }
  uVar34 = 0;
  uVar33 = 0;
switchD_02065b7d_default:
  *(undefined4 *)param_2 = 5;
  *(undefined4 *)((long)param_2 + 4) = uVar34;
  *(undefined4 *)(param_2 + 1) = uVar33;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  recovered_205ec00(&local_78);
  return uVar6;
LAB_020671d5:
  param_1[2] = uVar9 + 1;
LAB_020671dc:
  uVar8 = recovered_20a81b0((ulong *)*param_1,(int *)&local_78,local_138,local_148,&local_f8,in_R9,
                            in_stack_fffffffffffffe68,
                            (ulong ****)
                            CONCAT44(in_stack_fffffffffffffe74,in_stack_fffffffffffffe70),
                            in_stack_fffffffffffffe78,in_stack_fffffffffffffe80,
                            in_stack_fffffffffffffe88,in_stack_fffffffffffffe90,
                            in_stack_fffffffffffffe98,in_stack_fffffffffffffea0);
  if ((char)uVar8 == '\0') {
    recovered_209ce10((ulong *)&local_148);
    recovered_205ec00(&local_f8);
    goto LAB_0206741f;
  }
  if (local_148 != (ulong *)0x0) {
    lVar29 = 0;
    puVar31 = (ulong *)0x0;
    do {
      recovered_205ec00((undefined8 *)((long)local_138 + lVar29));
      puVar31 = (ulong *)((long)puVar31 + 1);
      lVar29 = lVar29 + 0x40;
    } while (puVar31 < local_148);
  }
  recovered_2000bb0(local_138);
  local_148 = (ulong *)0x0;
  uStack_140 = 0;
  local_138 = (ulong *)0x0;
  recovered_205ec00(&local_78);
  recovered_205ec00(&local_78);
  iVar7 = (int)local_f8;
  uVar33 = PF_PART4(local_f8, 4);
  uVar34 = uStack_f0;
  uVar35 = uStack_ec;
  uVar36 = (undefined4)local_e8;
  uVar37 = PF_PART4(local_e8, 4);
  uVar38 = (undefined4)uStack_e0;
  uVar39 = PF_PART4(uStack_e0, 4);
  uVar40 = (undefined4)local_d8;
  uVar41 = PF_PART4(local_d8, 4);
  uVar42 = (undefined4)uStack_d0;
  uVar43 = PF_PART4(uStack_d0, 4);
  uVar44 = (undefined4)local_c8;
  uVar45 = PF_PART4(local_c8, 4);
  uVar46 = (undefined4)uStack_c0;
  uVar47 = PF_PART4(uStack_c0, 4);
LAB_02067285:
  local_48 = CONCAT44(uVar45,uVar44);
  uStack_40 = CONCAT44(uVar47,uVar46);
  local_58 = CONCAT44(uVar41,uVar40);
  uStack_50 = (undefined4 *)CONCAT44(uVar43,uVar42);
  local_68 = (char *)CONCAT44(uVar37,uVar36);
  uStack_60 = CONCAT44(uVar39,uVar38);
  local_78 = CONCAT44(uVar33,iVar7);
  uStack_70 = CONCAT44(uVar35,uVar34);
  puVar31 = (ulong *)param_1[1];
  uVar9 = param_1[2];
  if (*puVar31 <= uVar9) goto LAB_020672b4;
  goto LAB_02066ee0;
}
