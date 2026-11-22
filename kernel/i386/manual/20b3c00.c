/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c6602 (*(uint8_t *)(0x20c6602U))
#define DAT_020c6603 (*(uint8_t *)(0x20c6603U))
#define DAT_020c6604 (*(uint8_t *)(0x20c6604U))
#define DAT_020c6605 (*(uint8_t *)(0x20c6605U))
#define DAT_020c6606 (*(uint8_t *)(0x20c6606U))
#define DAT_020c6607 (*(uint8_t *)(0x20c6607U))
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_020de4f0 (*(uint32_t volatile *)(0x20de4f0U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_02130728 (*(uint32_t volatile *)(0x2130728U))
#define PTR_str_020c4fc1_020d9bc4 (*(char * *)(0x20d9bc4U))
#define str_020d324c (*(char (*)[1])(0x20d324cU))
#define str_020d326e (*(char (*)[1])(0x20d326eU))
#define str_020d3290 (*(char (*)[1])(0x20d3290U))
#define str_020d376a (*(char (*)[1])(0x20d376aU))
#define str_020d3787 (*(char (*)[1])(0x20d3787U))
#define str_020d37a6 (*(char (*)[1])(0x20d37a6U))
#define str_020d37b1 (*(char (*)[1])(0x20d37b1U))
#define str_020d37ba (*(char (*)[1])(0x20d37baU))
#define str_020d37c0 (*(char (*)[1])(0x20d37c0U))
#define str_020d37f9 (*(char (*)[1])(0x20d37f9U))
#define local_3b4 (*(uchar (*)[160])(frame + 28))
#define local_314 (*(uchar (*)[241])(frame + 188))
#define local_223 (*(uchar (*)[241])(frame + 429))
#define local_132 (*(char (*)[242])(frame + 670))
#define local_40 (*(uint *)(frame + 912))
#define local_3c (*(int * *)(frame + 916))
#define local_38 (*(int *)(frame + 920))
#define local_34 (*(char * *)(frame + 924))
#define local_30 (*(uint *)(frame + 928))
#define local_2c (*(int *)(frame + 932))
#define local_28 (*(uint *)(frame + 936))
#define local_24 (*(uint *)(frame + 940))
#define local_20 (*(int *)(frame + 944))
#define local_1c (*(int *)(frame + 948))
#define local_18 (*(char * *)(frame + 952))
#define local_12 (*(char *)(frame + 958))
#define local_11 (*(byte *)(frame + 959))


undefined4 recovered_20b3c00(char *in_ECX,int *in_EDX,char *param_3)

{
  unsigned char frame[1008] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  uchar *puVar7;
  uint extraout_EAX = 0;
  undefined4 uVar8;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00 = 0;
  undefined4 extraout_ECX_01 = 0;
  uint uVar9;
  undefined4 extraout_ECX_02 = 0;
  undefined4 extraout_ECX_03 = 0;
  char *extraout_EDX = 0;
  char *extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint extraout_EDX_02 = 0;
  uint extraout_EDX_03 = 0;
  uint extraout_EDX_04 = 0;
  uint extraout_EDX_05 = 0;
  uint extraout_EDX_06 = 0;
  uint incoming_edx;
  uint incoming_edx_00;
  char *extraout_EDX_07 = 0;
  int iVar10;
  char *pcVar11;

  iVar10 = DAT_020d9d44;
  if (in_EDX != (int *)0x0) {
    *in_EDX = 0;
  }
  local_3c = in_EDX;
  if ((in_ECX == (char *)0x0) || (*in_ECX == '\0')) {
    if (param_3 == (char *)0x0) {
      return 0;
    }
    pcVar6 = str_020d376a;
  }
  else {
    recovered_202a060((int)in_ECX,local_223);
    if (local_223[0] == '\0') {
      if (param_3 == (char *)0x0) {
        return 0;
      }
      pcVar6 = str_020d3787;
    }
    else {
      iVar2 = recovered_20022a0((char *)local_223,str_020d37a6);
      uVar8 = extraout_ECX;
      pcVar6 = extraout_EDX;
      if (iVar2 == 0) {
        pf_varargs_20044f0___((char *)local_223,0xf1,str_020d37b1);
        uVar8 = extraout_ECX_00;
        pcVar6 = extraout_EDX_00;
      }
      iVar2 = DAT_020de4f0;
      if (iVar2 < 0) {
        if (-1 < iVar10) {
          local_1c = iVar10;
          if (local_223[0] != '\0') {
            iVar10 = 0;
            uVar3 = CONCAT31((int3)((uint)uVar8 >> 8),1);
            do {
              local_28 = uVar3;
              pf_varargs_20044f0__4__4_
                        (local_132,0xf2,str_020d37ba,(uint)(&PTR_str_020c4fc1_020d9bc4)[iVar10],
                         (uint)local_223);
              iVar10 = DAT_02130728;
              if (iVar10 != 0) {
                iVar10 = 0;
                uVar3 = 0;
                do {
                  iVar2 = DAT_02130724;
                  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xfc + iVar10) & 2) == 0)) {
                    local_24 = uVar3;
                    local_20 = iVar2;
                    uVar4 = recovered_2002270(local_132);
                    uVar3 = local_24;
                    local_18 = (char *)(iVar2 + iVar10);
                    uVar5 = recovered_2002270((char *)(iVar2 + iVar10));
                    if ((uVar4 <= uVar5) &&
                       ((iVar2 = recovered_2001ff0(local_18,local_132,uVar4), iVar2 == 0 &&
                        (local_18 = (char *)recovered_2002270(local_132),
                        local_18[iVar10 + local_20] != '\0')))) {
                      pcVar11 = local_18 + iVar10 + local_20;
                      pcVar6 = recovered_20024f0(pcVar11,'/');
                      if (pcVar6 == (char *)0x0) {
                        uVar4 = recovered_2002270(pcVar11);
                        uVar5 = recovered_2002270(&DAT_020c6602);
                        if (uVar5 <= uVar4) {
                          pcVar6 = local_18 + local_20 + (uVar4 - uVar5);
                          cVar1 = pcVar6[iVar10];
                          if (cVar1 == '\0') {
                            pcVar11 = &DAT_020c6602;
                            uVar8 = extraout_ECX_02;
                          }
                          else {
                            uVar8 = 0;
                            if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                              cVar1 = cVar1 + -0x20;
                            }
                            if (cVar1 != '.') goto LAB_020b4030;
                            cVar1 = pcVar6[iVar10 + 1];
                            if (cVar1 == '\0') {
                              pcVar11 = &DAT_020c6603;
                            }
                            else {
                              uVar8 = 0;
                              if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                                cVar1 = cVar1 + -0x20;
                              }
                              if (cVar1 != 'K') goto LAB_020b4030;
                              cVar1 = pcVar6[iVar10 + 2];
                              if (cVar1 == '\0') {
                                pcVar11 = &DAT_020c6604;
                              }
                              else {
                                uVar8 = 0;
                                if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                                  cVar1 = cVar1 + -0x20;
                                }
                                if (cVar1 != 'E') goto LAB_020b4030;
                                cVar1 = pcVar6[iVar10 + 3];
                                if (cVar1 == '\0') {
                                  pcVar11 = &DAT_020c6605;
                                }
                                else {
                                  uVar8 = 0;
                                  if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                                    cVar1 = cVar1 + -0x20;
                                  }
                                  if (cVar1 != 'X') goto LAB_020b4030;
                                  cVar1 = pcVar6[iVar10 + 4];
                                  if (cVar1 == '\0') {
                                    pcVar11 = &DAT_020c6606;
                                  }
                                  else {
                                    uVar8 = 0;
                                    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                                      cVar1 = cVar1 + -0x20;
                                    }
                                    if ((cVar1 != 'T') || (pcVar6[iVar10 + 5] != '\0'))
                                    goto LAB_020b4030;
                                    pcVar11 = &DAT_020c6607;
                                  }
                                }
                              }
                            }
                          }
                          if (*pcVar11 == '\0') {
                            DAT_020de4f0 = local_1c;
                            iVar2 = local_1c;
                            iVar10 = local_1c;
                            goto joined_r0x020b42dd;
                          }
                        }
                      }
                    }
                  }
LAB_020b4030:
                  uVar3 = uVar3 + 1;
                  iVar10 = iVar10 + 0x110;
                  uVar9 = DAT_02130728;
                } while (uVar3 < uVar9);
              }
              iVar10 = 1;
              uVar3 = 0;
            } while ((local_28 & 1) != 0);
          }
          iVar10 = local_1c;
        }
        uVar3 = recovered_2047890();
        if ((char)uVar3 == '\0') {
          if (param_3 == (char *)0x0) {
            return 0;
          }
          pcVar6 = str_020d324c;
          goto LAB_020b3f51;
        }
        iVar2 = DAT_020de4f0;
        pcVar6 = extraout_EDX_07;
        uVar8 = extraout_ECX_03;
joined_r0x020b42dd:
        if (iVar2 < 0) {
          if (param_3 == (char *)0x0) {
            return 0;
          }
          pcVar6 = str_020d326e;
          goto LAB_020b3f51;
        }
      }
      if (iVar10 != iVar2) {
        uVar3 = recovered_202ac50(iVar2,(uint)pcVar6);
        uVar8 = extraout_ECX_01;
        if ((char)uVar3 == '\0') {
          if (param_3 == (char *)0x0) {
            return 0;
          }
          pcVar6 = str_020d3290;
          goto LAB_020b3f51;
        }
      }
      local_12 = -1 < iVar10 && iVar10 != iVar2;
      uVar3 = 0;
      uVar9 = CONCAT31((int3)((uint)uVar8 >> 8),1);
      local_30 = 0;
      local_2c = 0;
      local_38 = iVar2;
      local_1c = iVar10;
      do {
        local_28 = uVar9;
        pf_varargs_20044f0__4__4_
                  (local_132,0xf2,str_020d37ba,(uint)(&PTR_str_020c4fc1_020d9bc4)[uVar3],
                   (uint)local_223);
        iVar10 = DAT_02130728;
        incoming_edx = extraout_EDX_01;
        if (iVar10 != 0) {
          iVar10 = 0;
          uVar3 = 0;
          do {
            iVar2 = DAT_02130724;
            local_11 = 0;
            if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xfc + iVar10) & 2) == 0)) {
              local_24 = uVar3;
              local_20 = iVar2;
              uVar4 = recovered_2002270(local_132);
              local_18 = (char *)(iVar2 + iVar10);
              uVar5 = recovered_2002270((char *)(iVar2 + iVar10));
              if (uVar5 < uVar4) {
                incoming_edx = extraout_EDX_02;
                uVar3 = local_24;
              }
              else {
                iVar2 = recovered_2001ff0(local_18,local_132,uVar4);
                uVar3 = local_24;
                incoming_edx = extraout_EDX_03;
                if (iVar2 == 0) {
                  uVar4 = recovered_2002270(local_132);
                  incoming_edx = extraout_EDX_04;
                  if (*(char *)(iVar10 + local_20 + uVar4) != '\0') {
                    local_34 = (char *)(local_20 + uVar4 + iVar10);
                    pcVar6 = recovered_20024f0(local_34,'/');
                    incoming_edx = extraout_EDX_05;
                    if (pcVar6 == (char *)0x0) {
                      local_40 = recovered_2002270(local_34);
                      uVar5 = recovered_2002270(&DAT_020c6602);
                      incoming_edx = extraout_EDX_06;
                      if (uVar5 <= local_40) {
                        incoming_edx = local_20 + ((local_40 + uVar4) - uVar5);
                        cVar1 = *(char *)(iVar10 + incoming_edx);
                        if (cVar1 == '\0') {
                          pcVar6 = &DAT_020c6602;
                        }
                        else {
                          if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                            cVar1 = cVar1 + -0x20;
                          }
                          if (cVar1 != '.') goto LAB_020b3d30;
                          cVar1 = *(char *)(iVar10 + 1 + incoming_edx);
                          if (cVar1 == '\0') {
                            pcVar6 = &DAT_020c6603;
                          }
                          else {
                            if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                              cVar1 = cVar1 + -0x20;
                            }
                            if (cVar1 != 'K') goto LAB_020b3d30;
                            cVar1 = *(char *)(iVar10 + 2 + incoming_edx);
                            if (cVar1 == '\0') {
                              pcVar6 = &DAT_020c6604;
                            }
                            else {
                              if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                                cVar1 = cVar1 + -0x20;
                              }
                              if (cVar1 != 'E') goto LAB_020b3d30;
                              cVar1 = *(char *)(iVar10 + 3 + incoming_edx);
                              if (cVar1 == '\0') {
                                pcVar6 = &DAT_020c6605;
                              }
                              else {
                                if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                                  cVar1 = cVar1 + -0x20;
                                }
                                if (cVar1 != 'X') goto LAB_020b3d30;
                                cVar1 = *(char *)(iVar10 + 4 + incoming_edx);
                                if (cVar1 == '\0') {
                                  pcVar6 = &DAT_020c6606;
                                }
                                else {
                                  if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                                    cVar1 = cVar1 + -0x20;
                                  }
                                  if ((cVar1 != 'T') ||
                                     (*(char *)(iVar10 + 5 + incoming_edx) != '\0'))
                                  goto LAB_020b3d30;
                                  pcVar6 = &DAT_020c6607;
                                }
                              }
                            }
                          }
                        }
                        if (*pcVar6 != '\0') goto LAB_020b3d30;
                        local_314[0] = '\0';
                        recovered_20b4cb0((int)local_34,local_314);
                        puVar7 = (uchar *)0x0;
                        if (local_314[0] != '\0') {
                          puVar7 = local_314;
                        }
                        uVar9 = recovered_20b20d0((int)local_18,local_223,(char *)puVar7,
                                                  (int)local_3b4,&local_11);
                        if ((char)uVar9 == '\0') {
                          if (local_12 != '\0') {
                            recovered_202ac50(local_1c,incoming_edx_00);
                          }
                          if (param_3 == (char *)0x0) {
                            return 0;
                          }
                          pcVar6 = (char *)local_3b4;
                          goto LAB_020b3f51;
                        }
                        local_2c = local_2c + (uint)local_11;
                        local_30 = 1;
                        incoming_edx = incoming_edx_00;
                      }
                    }
                  }
                }
              }
            }
LAB_020b3d30:
            uVar3 = uVar3 + 1;
            iVar10 = iVar10 + 0x110;
            uVar9 = DAT_02130728;
          } while (uVar3 < uVar9);
        }
        uVar3 = 1;
        uVar9 = 0;
      } while ((local_28 & 1) != 0);
      if (local_1c != local_38) {
        if (local_1c < 0) {
          recovered_20539f0(&DAT_02130724,incoming_edx);
          DAT_020d9d44 = 0xffffffff;
          uVar3 = extraout_EAX;
        }
        else {
          uVar3 = recovered_202ac50(local_1c,incoming_edx);
          if ((char)uVar3 == '\0') {
            if (param_3 == (char *)0x0) {
              return 0;
            }
            pcVar6 = str_020d37c0;
            goto LAB_020b3f51;
          }
        }
      }
      if ((local_30 & 1) != 0) {
        uVar8 = CONCAT31((int3)(uVar3 >> 8),1);
        if (local_3c == (int *)0x0) {
          return uVar8;
        }
        *local_3c = local_2c;
        return uVar8;
      }
      pcVar6 = (char *)local_314;
      pf_varargs_20044f0__4_(pcVar6,0xa0,str_020d37f9,(uint)local_223);
      if (param_3 == (char *)0x0) {
        return 0;
      }
    }
  }
LAB_020b3f51:
  pf_varargs_20044f0__4_(param_3,0xa0,&DAT_020c5119,(uint)pcVar6);
  return 0;
}
#undef DAT_020c5119
#undef DAT_020c6602
#undef DAT_020c6603
#undef DAT_020c6604
#undef DAT_020c6605
#undef DAT_020c6606
#undef DAT_020c6607
#undef DAT_020d9d44
#undef DAT_020de4f0
#undef DAT_02130724
#undef DAT_02130728
#undef PTR_str_020c4fc1_020d9bc4
#undef str_020d324c
#undef str_020d326e
#undef str_020d3290
#undef str_020d376a
#undef str_020d3787
#undef str_020d37a6
#undef str_020d37b1
#undef str_020d37ba
#undef str_020d37c0
#undef str_020d37f9
#undef local_3b4
#undef local_314
#undef local_223
#undef local_132
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
#undef local_12
#undef local_11
