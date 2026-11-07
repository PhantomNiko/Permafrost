/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_00000004 (*(uint8_t *)(0x4U))
#define DAT_0208f945 (*(uint8_t *)(0x20ccf42U))
#define DAT_0208f947 (*(uint8_t *)(0x20ccf44U))
#define DAT_0208f9a1 (*(uint8_t *)(0x20ccf9eU))
#define DAT_0208f9c6 (*(uint8_t *)(0x20ccfc3U))
#define DAT_0208fa1d (*(uint8_t *)(0x20cd01aU))
#define DAT_0208fcaa (*(uint8_t *)(0x20cd2a7U))
#define DAT_0208fe00 (*(uint8_t *)(0x20cd3fdU))
#define DAT_0208fe02 (*(uint8_t *)(0x20cd3ffU))
#define DAT_02097396 (*(uint8_t *)(0x20cc358U))
#define DAT_02097399 (*(uint8_t *)(0x20d5825U))
#define DAT_0209739c (*(uint8_t *)(0x20d5828U))
#define DAT_0209739f (*(uint8_t *)(0x20d582bU))
#define DAT_020cf1fc (*(uint32_t volatile *)(0x2245284U))
#define DAT_020cf204 (*(uint32_t volatile *)(0x224528cU))
#define local_14 (*(uint * *)(frame + 124))
#define local_18 (*(int * *)(frame + 120))
#define local_1c (*(uint * *)(frame + 116))
#define local_20 (*(void * *)(frame + 112))
#define local_24 (*(int * *)(frame + 108))
#define local_28 (*(int * *)(frame + 104))
#define local_2c (*(uint * *)(frame + 100))
#define local_30 (*(ulong * *)(frame + 96))
#define local_34 (*(uint * *)(frame + 92))
#define local_38 (*(uint * *)(frame + 88))
#define local_3c (*(uint * *)(frame + 84))
#define local_40 (*(uint * *)(frame + 80))
#define local_44 (*(uint * *)(frame + 76))
#define local_48 (*(int * *)(frame + 72))
#define local_4c (*(uint * *)(frame + 68))
#define local_50 (*(int * *)(frame + 64))
#define local_74 (*(ulong (*)[9])(frame + 28))
#define str_0208f91f (*(char (*)[1])(0x20ccf1cU))
#define str_0208f925 (*(char (*)[1])(0x20ccf22U))
#define str_0208fae7 (*(char (*)[1])(0x20cd0e4U))
#define str_0208ff63 (*(char (*)[1])(0x20cd55aU))
#define str_02097338 (*(char (*)[1])(0x20d57c7U))
#define str_0209736f (*(char (*)[1])(0x20d57feU))
#define str_020973a2 (*(char (*)[1])(0x20d582eU))
#define str_020973c7 (*(char (*)[1])(0x20d5853U))
uint * recovered_207e3b0(int *incoming_ecx,uint *incoming_edx,undefined1 *param_3)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  byte bVar3;
  uchar uVar4;
  ushort uVar5;
  char *pcVar6;
  int *piVar7;
  uint *puVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined3 uVar15;
  undefined4 extraout_EAX = 0;
  undefined4 extraout_EAX_00 = 0;
  ulong *puVar12;
  ulong *puVar13;
  undefined3 extraout_var = 0;
  undefined4 extraout_EAX_01 = 0;
  undefined4 extraout_EAX_02 = 0;
  undefined4 uVar14;
  int *extraout_ECX = 0;
  int *piVar16;
  undefined4 extraout_ECX_00 = 0;
  undefined4 extraout_ECX_01 = 0;
  uint *puVar17;
  uint incoming_edx_00;
  uint extraout_EDX = 0;
  uint incoming_edx_01;
  void *pvVar18;
  void *extraout_EDX_00;
  uint extraout_EDX_01 = 0;
  uint extraout_EDX_02 = 0;
  uint extraout_EDX_03 = 0;
  undefined4 extraout_EDX_04 = 0;
  undefined4 extraout_EDX_05 = 0;
  char cVar19;
  char cVar20;
  uint *puVar21;
  int iVar22;
  char *pcVar23;
  uint uVar24;
  byte *pbVar25;
  bool bVar26;

  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  puVar21 = (uint *)CONCAT31((int3)((uint)param_3 >> 8),1);
  if (incoming_edx == (uint *)0x0 || incoming_ecx == (int *)0x0) {
    return puVar21;
  }
  piVar7 = (int *)*incoming_edx;
  if (piVar7 == (int *)0x0) {
    return puVar21;
  }
  local_2c = (uint *)incoming_edx[2];
  pcVar6 = (char *)*local_2c;
  if (pcVar6 == (char *)0x0) {
joined_r0x0205416b:
    local_48 = (int *)0x0;
    local_44 = (uint *)0x0;
    local_20 = (void *)0x0;
    puVar21 = local_44;
    if (piVar7 == (int *)0x0) goto LAB_020543c4;
  }
  else {
    cVar20 = *pcVar6;
    if (cVar20 == '\0') {
      pcVar6 = str_0208f91f;
LAB_0205430e:
      if (*pcVar6 != '\0') goto joined_r0x0205416b;
      local_44 = (uint *)0x2;
    }
    else {
      if (cVar20 != 'n') {
        if ((byte)(cVar20 + 0x9fU) < 0x1a) {
          if (cVar20 == 'n') goto LAB_0205408d;
        }
        else if (cVar20 == 'N') goto LAB_0205408d;
LAB_020541d0:
        if (cVar20 != 'l') {
          if ((byte)(cVar20 + 0x9fU) < 0x1a) {
            cVar20 = cVar20 + -0x20;
          }
          if (cVar20 != 'L') goto joined_r0x0205416b;
        }
        cVar20 = pcVar6[1];
        if (cVar20 == '\0') {
          pcVar6 = str_0208f91f + 1;
        }
        else {
          if (cVar20 != 'o') {
            if ((byte)(cVar20 + 0x9fU) < 0x1a) {
              cVar20 = cVar20 + -0x20;
            }
            if (cVar20 != 'O') goto joined_r0x0205416b;
          }
          cVar20 = pcVar6[2];
          if (cVar20 == '\0') {
            pcVar6 = str_0208f91f + 2;
          }
          else {
            if (cVar20 != 'c') {
              if ((byte)(cVar20 + 0x9fU) < 0x1a) {
                cVar20 = cVar20 + -0x20;
              }
              if (cVar20 != 'C') goto joined_r0x0205416b;
            }
            cVar20 = pcVar6[3];
            if (cVar20 == '\0') {
              pcVar6 = str_0208f91f + 3;
            }
            else {
              if (cVar20 != 'a') {
                if ((byte)(cVar20 + 0x9fU) < 0x1a) {
                  cVar20 = cVar20 + -0x20;
                }
                if (cVar20 != 'A') goto joined_r0x0205416b;
              }
              cVar20 = pcVar6[4];
              if (cVar20 == '\0') {
                pcVar6 = str_0208f91f + 4;
              }
              else {
                if (cVar20 != 'l') {
                  if ((byte)(cVar20 + 0x9fU) < 0x1a) {
                    cVar20 = cVar20 + -0x20;
                  }
                  if (cVar20 != 'L') goto joined_r0x0205416b;
                }
                if (pcVar6[5] != '\0') goto joined_r0x0205416b;
                pcVar6 = str_0208f91f + 5;
              }
            }
          }
        }
        goto LAB_0205430e;
      }
LAB_0205408d:
      cVar19 = pcVar6[1];
      if (cVar19 == '\0') {
        pcVar23 = str_0208f925 + 1;
      }
      else {
        if (cVar19 != 'a') {
          if ((byte)(cVar19 + 0x9fU) < 0x1a) {
            cVar19 = cVar19 + -0x20;
          }
          if (cVar19 != 'A') goto LAB_020541d0;
        }
        cVar19 = pcVar6[2];
        if (cVar19 == '\0') {
          pcVar23 = str_0208f925 + 2;
        }
        else {
          if (cVar19 != 't') {
            if ((byte)(cVar19 + 0x9fU) < 0x1a) {
              cVar19 = cVar19 + -0x20;
            }
            if (cVar19 != 'T') goto LAB_020541d0;
          }
          cVar19 = pcVar6[3];
          if (cVar19 == '\0') {
            pcVar23 = str_0208f925 + 3;
          }
          else {
            if (cVar19 != 'i') {
              if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                cVar19 = cVar19 + -0x20;
              }
              if (cVar19 != 'I') goto LAB_020541d0;
            }
            cVar19 = pcVar6[4];
            if (cVar19 == '\0') {
              pcVar23 = str_0208f925 + 4;
            }
            else {
              if (cVar19 != 'v') {
                if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                  cVar19 = cVar19 + -0x20;
                }
                if (cVar19 != 'V') goto LAB_020541d0;
              }
              cVar19 = pcVar6[5];
              if (cVar19 == '\0') {
                pcVar23 = str_0208f925 + 5;
              }
              else {
                if (cVar19 != 'e') {
                  if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                    cVar19 = cVar19 + -0x20;
                  }
                  if (cVar19 != 'E') goto LAB_020541d0;
                }
                if (pcVar6[6] != '\0') goto LAB_020541d0;
                pcVar23 = str_0208f925 + 6;
              }
            }
          }
        }
      }
      if (*pcVar23 != '\0') goto LAB_020541d0;
      local_44 = (uint *)0x1;
    }
    local_20 = (void *)0x1;
    local_48 = (int *)0x1;
    puVar21 = local_44;
    if (piVar7 < (int *)0x2) goto LAB_020543c4;
  }
  pbVar25 = (byte *)local_2c[(int)local_48];
  puVar21 = (uint *)CONCAT31((int3)((uint)local_2c >> 8),1);
  if (pbVar25 == (byte *)0x0) {
    return puVar21;
  }
  bVar3 = *pbVar25;
  if (bVar3 == 0) {
    return puVar21;
  }
  if (((0x19 < (byte)((bVar3 & 0xdf) + 0xbf)) && (bVar3 != 0x5f)) && (bVar3 != 0x24)) {
LAB_020543c4:
    return (uint *)CONCAT31((int3)((uint)puVar21 >> 8),1);
  }
  bVar3 = pbVar25[1];
  if (bVar3 != 0) {
    pbVar25 = pbVar25 + 2;
    do {
      if (((bVar3 != 0x2e) && (bVar3 != 0x24)) &&
         ((bVar3 != 0x5f &&
          ((puVar21 = (uint *)CONCAT31((int3)((uint)puVar21 >> 8),1), 9 < (byte)(bVar3 - 0x30U) &&
           (0x19 < (byte)((bVar3 & 0xdf) + 0xbf))))))) {
        return puVar21;
      }
      bVar3 = *pbVar25;
      pbVar25 = pbVar25 + 1;
    } while (bVar3 != 0);
  }
  local_28 = (int *)0x0;
  puVar21 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_50 = incoming_ecx;
  local_4c = incoming_edx;
  local_24 = incoming_ecx;
  local_18 = piVar7;
  local_14 = incoming_edx;
  while( true ) {
    pcVar6 = *(char **)(local_14[2] + (int)local_48 * 4);
    if (pcVar6 == (char *)0x0) break;
    cVar20 = *pcVar6;
    if ((cVar20 == '\0') ||
       (((uVar5 = CONCAT11(cVar20,cVar20) & 0xdfff, cVar20 = (char)uVar5,
         0x19 < (byte)((char)(uVar5 >> 8) + 0xbfU) && (cVar20 != '_')) && (cVar20 != '$')))) break;
    bVar3 = pcVar6[1];
    local_18 = piVar7;
    if (bVar3 != 0) {
      pbVar25 = (byte *)(pcVar6 + 2);
      do {
        if (((bVar3 != 0x2e) && (bVar3 != 0x24)) &&
           ((bVar3 != 0x5f && ((9 < (byte)(bVar3 - 0x30U) && (0x19 < (byte)((bVar3 & 0xdf) + 0xbf))))
            ))) goto LAB_02054612;
        bVar3 = *pbVar25;
        pbVar25 = pbVar25 + 1;
      } while (bVar3 != 0);
    }
    if (puVar21 == local_1c) {
      local_1c = (uint *)&DAT_00000004;
      if (puVar21 != (uint *)0x0) {
        local_1c = (uint *)((int)puVar21 * 2);
      }
      piVar7 = recovered_2001860(local_28,(int)local_1c << 4);
      pcVar6 = *(char **)(local_14[2] + (int)local_48 * 4);
      if (piVar7 == (int *)0x0) {
        local_2c = puVar21;
        pf_varargs_204ff60___(local_24,pcVar6,str_0209736f);
        local_14 = (uint *)0x0;
        goto LAB_020547be;
      }
      local_28 = piVar7;
      local_18 = (int *)*local_14;
    }
    local_48 = (int *)((int)local_48 + 1);
    local_28[(int)puVar21 * 4] = (int)pcVar6;
    local_28[(int)puVar21 * 4 + 1] = 0;
    local_28[(int)puVar21 * 4 + 2] = 0;
    local_28[(int)puVar21 * 4 + 3] = 0;
    if (local_48 < local_18) {
      local_18 = local_28 + (int)puVar21 * 4;
      piVar16 = local_28 + (int)puVar21 * 4 + 1;
      local_2c = puVar21;
      do {
        puVar21 = local_2c;
        iVar22 = recovered_20022a0(*(char **)(local_14[2] + (int)local_48 * 4),&DAT_0208f945);
        if (iVar22 != 0) {
          piVar7 = (int *)*local_14;
          break;
        }
        local_74[0] = 0;
        local_74[1] = 0;
        local_74[2] = 0;
        local_74[3] = 0;
        local_74[4] = 0;
        local_74[5] = 0;
        local_74[6] = 0;
        local_74[7] = 0;
        local_74[8] = 0;
        local_48 = (int *)((int)local_48 + 1);
        uVar4 = recovered_207f710((ulonglong *)&local_50,local_74);
        if (uVar4 == '\0') {
          recovered_2043a90(local_74,incoming_edx_00);
LAB_020547ac:
          local_14 = (uint *)0x0;
          goto LAB_020547be;
        }
        uVar10 = incoming_edx_00;
        if ((int *)*local_4c <= local_48) {
LAB_0205472a:
          recovered_2043a90(local_74,uVar10);
          pcVar6 = str_0208ff63;
LAB_0205479c:
          pf_varargs_204ff60___(local_24,(char *)*local_18,pcVar6);
          goto LAB_020547ac;
        }
        iVar22 = recovered_20022a0(*(char **)(local_4c[2] + (int)local_48 * 4),&DAT_0208f947);
        uVar10 = extraout_EDX;
        if (iVar22 != 0) goto LAB_0205472a;
        local_48 = (int *)((int)local_48 + 1);
        uVar11 = recovered_207ab70(piVar16,(int)local_74);
        recovered_2043a90(local_74,incoming_edx_01);
        if ((char)uVar11 == '\0') {
          pcVar6 = str_0209736f;
          goto LAB_0205479c;
        }
        piVar7 = (int *)*local_14;
        puVar21 = local_2c;
      } while (local_48 < piVar7);
    }
    else {
      piVar7 = local_18;
    }
    puVar21 = (uint *)((int)puVar21 + 1);
    if (piVar7 <= local_48) break;
    iVar22 = recovered_20022a0(*(char **)(local_14[2] + (int)local_48 * 4),&DAT_0208fa1d);
    if (iVar22 != 0) break;
    local_48 = (int *)((int)local_48 + 1);
    piVar7 = (int *)*local_14;
    if (piVar7 <= local_48) break;
  }
LAB_02054612:
  if (puVar21 == (uint *)0x0) {
    return (uint *)CONCAT31((int3)((uint)local_14 >> 8),1);
  }
  piVar7 = (int *)*local_14;
  local_2c = puVar21;
  if (((byte)local_20 & local_48 == piVar7) != 1) {
    if (piVar7 <= local_48) {
LAB_0205474c:
      local_14 = (uint *)0x0;
      local_20 = (void *)0x0;
      puVar21 = (uint *)0x0;
      local_18 = (void *)0x0;
      local_1c = (uint *)CONCAT31((int3)((uint)piVar7 >> 8),1);
      puVar12 = (ulong *)0x0;
      goto LAB_02054af1;
    }
    puVar8 = *(uint **)(local_14[2] + (int)local_48 * 4);
    iVar22 = recovered_20022a0((char *)puVar8,&DAT_0208fcaa);
    if ((((iVar22 != 0) && (iVar22 = recovered_20022a0((char *)puVar8,&DAT_02097396), iVar22 != 0))
        && (iVar22 = recovered_20022a0((char *)puVar8,&DAT_02097399), iVar22 != 0)) &&
       (iVar22 = recovered_20022a0((char *)puVar8,&DAT_0209739c), iVar22 != 0)) {
      iVar22 = recovered_20022a0((char *)puVar8,&DAT_0209739f);
      piVar7 = extraout_ECX;
      if (iVar22 != 0) goto LAB_0205474c;
    }
    if ((local_2c == (uint *)0x1) ||
       (iVar22 = recovered_20022a0((char *)puVar8,&DAT_0208fcaa), iVar22 == 0)) {
      piVar16 = (int *)((int)local_48 + 1);
      piVar7 = (int *)*local_14;
      local_48 = piVar16;
      if (piVar16 < piVar7) {
        local_18 = (void *)0x0;
        local_20 = (void *)0x0;
        puVar21 = (uint *)0x0;
        local_3c = (uint *)0x0;
        local_30 = (ulong *)0x0;
        local_34 = (uint *)0x0;
        local_38 = (uint *)0x0;
        puVar17 = local_14;
        local_40 = puVar8;
        local_1c = (uint *)piVar16;
        do {
          if (piVar16 == piVar7) {
LAB_02054872:
            if ((uint *)piVar16 == local_1c) {
              pcVar6 = str_02097338;
              goto LAB_02054dc8;
            }
            if (puVar21 == local_38) {
              local_38 = (uint *)&DAT_00000004;
              if (puVar21 != (uint *)0x0) {
                local_38 = (uint *)((int)puVar21 * 2);
              }
              uVar1 = (int)local_38 * 4;
              pvVar9 = recovered_2001860(local_18,uVar1);
              pvVar18 = local_20;
              if (pvVar9 == (void *)0x0) {
                pcVar6 = str_0209736f;
                goto LAB_02054dc8;
              }
              local_18 = pvVar9;
              pvVar9 = recovered_2001860(local_20,uVar1);
              if (pvVar9 == (void *)0x0) {
                pf_varargs_204ff60___(local_24,(char *)local_40,str_0209736f);
                local_1c = (uint *)0x0;
                local_14 = (uint *)CONCAT31((int3)((uint)extraout_EAX_02 >> 8),1);
                local_20 = pvVar18;
                goto LAB_02054aef;
              }
              puVar17 = local_14;
              local_20 = pvVar9;
            }
            *(uint **)((int)local_18 + (int)puVar21 * 4) = local_1c;
            *(int **)((int)local_20 + (int)puVar21 * 4) = piVar16;
            puVar21 = (uint *)((int)puVar21 + 1);
            local_1c = (uint *)((int)piVar16 + 1);
          }
          else {
            pcVar6 = *(char **)(puVar17[2] + (int)piVar16 * 4);
            iVar22 = recovered_20022a0(pcVar6,&DAT_0208f9a1);
            if (iVar22 == 0) {
              local_34 = (uint *)((int)local_34 + 1);
              puVar17 = local_14;
            }
            else {
              iVar22 = recovered_20022a0(pcVar6,&DAT_0208f9c6);
              if (iVar22 == 0) {
                bVar26 = local_34 != (uint *)0x0;
                puVar8 = (uint *)((int)local_34 + -1);
                local_34 = (uint *)0x0;
                if (bVar26) {
                  local_34 = puVar8;
                }
                puVar17 = local_14;
              }
              else {
                iVar22 = recovered_20022a0(pcVar6,&DAT_0208f945);
                if (iVar22 == 0) {
                  local_30 = (ulong *)((int)local_30 + 1);
                  puVar17 = local_14;
                }
                else {
                  iVar22 = recovered_20022a0(pcVar6,&DAT_0208f947);
                  if (iVar22 == 0) {
                    bVar26 = local_30 != (ulong *)0x0;
                    puVar12 = (ulong *)((int)local_30 + -1);
                    local_30 = (ulong *)0x0;
                    if (bVar26) {
                      local_30 = puVar12;
                    }
                    puVar17 = local_14;
                  }
                  else {
                    iVar22 = recovered_20022a0(pcVar6,&DAT_0208fe00);
                    if (iVar22 == 0) {
                      local_3c = (uint *)((int)local_3c + 1);
                      puVar17 = local_14;
                    }
                    else {
                      iVar22 = recovered_20022a0(pcVar6,&DAT_0208fe02);
                      puVar17 = local_14;
                      if (iVar22 == 0) {
                        bVar26 = local_3c != (uint *)0x0;
                        puVar8 = (uint *)((int)local_3c + -1);
                        local_3c = (uint *)0x0;
                        if (bVar26) {
                          local_3c = puVar8;
                        }
                      }
                      else if (((local_34 == (uint *)0x0) && (local_30 == (ulong *)0x0)) &&
                              (local_3c == (uint *)0x0)) {
                        iVar22 = recovered_20022a0(pcVar6,&DAT_0208fa1d);
                        puVar17 = local_14;
                        if (iVar22 == 0) goto LAB_02054872;
                        local_34 = (uint *)0x0;
                        local_30 = (ulong *)0x0;
                        local_3c = (uint *)0x0;
                      }
                    }
                  }
                }
              }
            }
          }
          piVar16 = (int *)((int)piVar16 + 1);
          piVar7 = (int *)*puVar17;
        } while (piVar16 <= piVar7);
        puVar12 = recovered_2001650((int)puVar21 * 0x24);
        if (puVar12 == (ulong *)0x0) {
          pcVar6 = str_020973c7;
LAB_02054dc8:
          pf_varargs_204ff60___(local_24,(char *)local_40,pcVar6);
          local_1c = (uint *)0x0;
          local_14 = (uint *)CONCAT31((int3)((uint)extraout_EAX_01 >> 8),1);
          puVar12 = (ulong *)0x0;
          goto LAB_02054af1;
        }
        local_30 = puVar12;
        if (puVar21 != (uint *)0x0) {
          puVar13 = puVar12 + 8;
          puVar8 = puVar21;
          do {
            puVar13[-8] = 0;
            puVar13[-7] = 0;
            puVar13[-6] = 0;
            puVar13[-5] = 0;
            puVar13[-4] = 0;
            puVar13[-3] = 0;
            puVar13[-2] = 0;
            puVar13[-1] = 0;
            *puVar13 = 0;
            puVar13 = puVar13 + 9;
            puVar8 = (uint *)((int)puVar8 + -1);
          } while (puVar8 != (uint *)0x0);
          puVar8 = (uint *)0x0;
          puVar13 = puVar12;
          do {
            uVar4 = recovered_207de10((long)local_24,local_14,
                                      *(ulong *)((int)local_18 + (int)puVar8 * 4),
                                      *(ulong *)((int)local_20 + (int)puVar8 * 4),puVar13);
            puVar12 = (ulong *)CONCAT31(extraout_var,uVar4);
            if (uVar4 == '\0') goto LAB_02054f0b;
            puVar8 = (uint *)((int)puVar8 + 1);
            puVar13 = puVar13 + 9;
          } while (puVar21 != puVar8);
        }
        local_74[0] = 0;
        local_74[1] = 0;
        local_74[2] = 0;
        local_74[3] = 0;
        local_74[4] = 0;
        local_74[5] = 0;
        local_74[6] = 0;
        local_74[7] = 0;
        local_74[8] = 0;
        if (puVar21 == (uint *)0x0) {
          puVar8 = (uint *)0x0;
        }
        else {
          local_38 = local_40;
          if (local_2c != (uint *)0x1) {
            local_38 = (uint *)&DAT_0208fcaa;
          }
          local_34 = puVar21;
          if (local_2c <= puVar21) {
            local_34 = local_2c;
          }
          local_14 = (uint *)(local_28 + 1);
          local_3c = (uint *)((int)puVar21 + -1);
          puVar8 = (uint *)0x0;
          puVar13 = local_30;
          do {
            puVar17 = local_14;
            puVar12 = puVar13;
            local_1c = puVar8;
            if ((*puVar13 == 7) && (uVar1 = puVar13[6], uVar1 != 0)) {
              bVar3 = *(byte *)(uVar1 + 4);
              if ((local_2c == (uint *)0x1) && (bVar3 != 0)) {
                if (*(int *)(uVar1 + 8) == 0) {
                  puVar12 = local_74;
                }
                else {
                  puVar12 = *(ulong **)(uVar1 + 0x10);
                }
                puVar17 = (uint *)recovered_20b9380(local_24,(int)local_44,*local_28,
                                                    (uint *)(local_28 + 1),(byte *)local_40,
                                                    (int)puVar12);
                local_1c = puVar17;
                goto LAB_02054f41;
              }
              if ((local_3c == puVar8 & bVar3) == 1) {
                local_34 = (uint *)((int)local_2c - (int)puVar8);
                local_1c = (uint *)CONCAT31((int3)((uint)local_34 >> 8),1);
                puVar17 = local_1c;
                if (local_2c < puVar8 || local_34 == (uint *)0x0) goto LAB_02054f41;
                local_38 = (uint *)0x0;
                puVar17 = (uint *)0x0;
                puVar8 = local_14;
                goto LAB_02054ec9;
              }
              if ((bVar3 != 0) && (puVar12 = local_74, *(int *)(uVar1 + 8) != 0)) {
                puVar12 = *(ulong **)(uVar1 + 0x10);
              }
            }
            puVar12 = (ulong *)recovered_20b9380(local_24,(int)local_44,local_14[-1],local_14,
                                                 (byte *)local_38,(int)puVar12);
            if ((char)puVar12 == '\0') goto LAB_02054f0b;
            puVar8 = (uint *)((int)local_1c + 1);
            local_14 = puVar17 + 4;
            puVar13 = puVar13 + 9;
          } while (puVar8 < local_34);
        }
        local_14 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),1);
        local_1c = (uint *)CONCAT31((int3)((uint)puVar8 >> 8),1);
        if (puVar8 < local_2c) {
          local_38 = (uint *)(local_28 + (int)puVar8 * 4 + 1);
          local_1c = puVar8;
          uVar11 = recovered_20b9380(local_24,(int)local_44,local_28[(int)puVar8 * 4],local_38,
                                     &DAT_0208fcaa,(int)local_74);
          if ((char)uVar11 == '\0') {
            local_1c = (uint *)0x0;
          }
          else {
            puVar8 = (uint *)(local_28 + (int)puVar8 * 4 + 5);
            uVar11 = extraout_EDX_04;
            puVar17 = local_1c;
            do {
              puVar17 = (uint *)((int)puVar17 + 1);
              if (local_2c == puVar17) break;
              uVar14 = recovered_20b9380(local_24,(int)local_44,puVar8[-1],puVar8,&DAT_0208fcaa,
                                         (int)local_74);
              puVar8 = puVar8 + 4;
              uVar11 = extraout_EDX_05;
            } while ((char)uVar14 != '\0');
            local_1c = (uint *)CONCAT31((int3)((uint)uVar11 >> 8),local_2c <= puVar17);
          }
        }
        goto LAB_02054f15;
      }
      pcVar6 = str_02097338;
    }
    else {
      pcVar6 = str_020973a2;
    }
    pf_varargs_204ff60___(local_24,(char *)puVar8,pcVar6);
    local_14 = (uint *)CONCAT31((int3)((uint)extraout_EAX >> 8),1);
LAB_020547be:
    local_20 = (void *)0x0;
    puVar21 = (uint *)0x0;
    local_1c = (uint *)0x0;
    local_18 = (void *)0x0;
    puVar12 = (ulong *)0x0;
    goto LAB_02054af1;
  }
  local_74[0] = 0;
  local_74[1] = 0;
  local_74[2] = 0;
  local_74[3] = 0;
  local_74[4] = 0;
  local_74[5] = 0;
  local_74[6] = 0;
  local_74[7] = 0;
  local_74[8] = 0;
  if (local_28[1] == 0) {
    piVar7 = local_28 + 5;
    puVar8 = (uint *)0x0;
    do {
      if ((uint *)((int)puVar21 + -1) == puVar8) {
        uVar10 = (int)local_44 - 1;
        piVar7 = local_28;
        goto LAB_02054a3b;
      }
      puVar8 = (uint *)((int)puVar8 + 1);
      iVar22 = *piVar7;
      piVar7 = piVar7 + 4;
    } while (iVar22 == 0);
    local_14 = (uint *)CONCAT31((int3)((uint)puVar8 >> 8),puVar21 <= puVar8);
    local_1c = (uint *)CONCAT31((int3)((uint)((int)puVar21 + -1) >> 8),1);
  }
  else {
    local_14 = (uint *)0x0;
    local_1c = (uint *)CONCAT31((int3)((uint)piVar7 >> 8),1);
  }
  goto LAB_02054aeb;
  while( true ) {
    puVar17 = (uint *)((int)local_14 + 1);
    local_38 = local_38 + 9;
    puVar8 = puVar8 + 4;
    if (local_34 == puVar17) break;
LAB_02054ec9:
    puVar12 = local_74;
    if (puVar17 < *(uint **)(puVar13[6] + 8)) {
      puVar12 = (ulong *)(*(int *)(puVar13[6] + 0x10) + (int)local_38);
    }
    local_14 = puVar17;
    puVar12 = (ulong *)recovered_20b9380(local_24,(int)local_44,puVar8[-1],puVar8,&DAT_0208fcaa,
                                         (int)puVar12);
    if ((char)puVar12 == '\0') goto LAB_02054f0b;
  }
LAB_02054f41:
  local_14 = (uint *)CONCAT31((int3)((uint)puVar17 >> 8),1);
LAB_02054f15:
  puVar12 = local_30;
  goto LAB_02054af1;
LAB_02054f0b:
  local_14 = (uint *)CONCAT31((int3)((uint)puVar12 >> 8),1);
  local_1c = (uint *)0x0;
  goto LAB_02054f15;
  while( true ) {
    piVar7 = piVar7 + 4;
    puVar21 = (uint *)((int)puVar21 + -1);
    if (puVar21 == (uint *)0x0) break;
LAB_02054a3b:
    if (uVar10 < 2) {
      iVar22 = DAT_020cf1fc;
      local_14 = (uint *)CONCAT31(PF_PART3(local_14, 1),iVar22 == 0);
      uVar11 = DAT_020cf204;
      uVar11 = DAT_020cf204;
      iVar2 = DAT_020cf204;
      piVar16 = (int *)(iVar22 * 0xc + iVar2 + -0xc);
      if (piVar16 == (int *)0x0 || iVar22 == 0) goto LAB_02054a68;
      uVar11 = recovered_20b6ea0(piVar16,(char *)*piVar7,(int)local_74);
      cVar20 = (char)uVar11;
      uVar11 = extraout_ECX_01;
    }
    else {
LAB_02054a68:
      uVar11 = recovered_207e100((char *)*piVar7,(int)local_74);
      cVar20 = (char)uVar11;
      uVar11 = extraout_ECX_00;
    }
    if (cVar20 == '\0') {
      pf_varargs_204ff60__4_(local_24,(char *)*piVar7,str_0208fae7,(uint)*piVar7);
      uVar15 = (undefined3)((uint)extraout_EAX_00 >> 8);
      local_1c = (uint *)0x0;
      goto LAB_02054ae1;
    }
  }
  uVar15 = (undefined3)(uVar10 >> 8);
  local_1c = (uint *)CONCAT31((int3)((uint)uVar11 >> 8),1);
LAB_02054ae1:
  local_14 = (uint *)CONCAT31(uVar15,1);
LAB_02054aeb:
  local_20 = (void *)0x0;
  puVar21 = (uint *)0x0;
  local_18 = (void *)0x0;
LAB_02054aef:
  puVar12 = (ulong *)0x0;
LAB_02054af1:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)local_14;
  }
  if (puVar21 != (uint *)0x0 && puVar12 != (ulong *)0x0) {
    pvVar18 = local_18;
    puVar13 = puVar12;
    do {
      recovered_2043a90(puVar13,(uint)pvVar18);
      puVar13 = puVar13 + 9;
      puVar21 = (uint *)((int)puVar21 + -1);
      pvVar18 = extraout_EDX_00;
    } while (puVar21 != (uint *)0x0);
  }
  recovered_2001710(puVar12);
  recovered_2001710(local_18);
  recovered_2001710(local_20);
  if (local_28 != (int *)0x0) {
    if (local_2c != (uint *)0x0) {
      puVar21 = (uint *)0x0;
      uVar10 = extraout_EDX_01;
      do {
        puVar8 = (uint *)(local_28 + (int)puVar21 * 4 + 1);
        local_14 = puVar21;
        if (local_28[(int)puVar21 * 4 + 1] != 0) {
          iVar22 = 0;
          uVar24 = 0;
          do {
            recovered_2043a90((undefined4 *)(puVar8[2] + iVar22),uVar10);
            uVar24 = uVar24 + 1;
            iVar22 = iVar22 + 0x24;
            uVar10 = extraout_EDX_03;
          } while (uVar24 < *puVar8);
        }
        recovered_2001710((void *)puVar8[2]);
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar21 = (uint *)((int)local_14 + 1);
        uVar10 = extraout_EDX_02;
      } while (puVar21 != local_2c);
    }
    recovered_2001710(local_28);
  }
  return local_1c;
}
