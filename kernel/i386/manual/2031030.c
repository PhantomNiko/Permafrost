/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c52d6 (*(uint8_t *)(0x20c52d6U))
#define DAT_020c5355 (*(uint8_t *)(0x20c5355U))
#define DAT_020c5f82 (*(uint8_t *)(0x20c5f82U))
#define str_020c4cde (*(char (*)[1])(0x20c4cdeU))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020c72e3 (*(char (*)[1])(0x20c72e3U))
#define str_020c72fd (*(char (*)[1])(0x20c72fdU))
#define str_020c7375 (*(char (*)[1])(0x20c7375U))
#define str_020c737f (*(char (*)[1])(0x20c737fU))
#define str_020c7397 (*(char (*)[1])(0x20c7397U))
#define str_020c739d (*(char (*)[1])(0x20c739dU))
#define str_020c73ab (*(char (*)[1])(0x20c73abU))
#define str_020c73b5 (*(char (*)[1])(0x20c73b5U))
#define str_020c73c0 (*(char (*)[1])(0x20c73c0U))
#define str_020c73d1 (*(char (*)[1])(0x20c73d1U))
#define str_020c73db (*(char (*)[1])(0x20c73dbU))
#define str_020c73ec (*(char (*)[1])(0x20c73ecU))
#define str_020c73f6 (*(char (*)[1])(0x20c73f6U))
#define str_020c7402 (*(char (*)[1])(0x20c7402U))
#define str_020c7416 (*(char (*)[1])(0x20c7416U))
#define str_020c7429 (*(char (*)[1])(0x20c7429U))
#define str_020c7442 (*(char (*)[1])(0x20c7442U))
#define str_020c7461 (*(char (*)[1])(0x20c7461U))
#define str_020c7471 (*(char (*)[1])(0x20c7471U))
#define local_289 (*(char (*)[241])(frame + 39))
#define local_198 (*(char (*)[384])(frame + 280))
#define local_18 (*(char * *)(frame + 664))
#define local_14 (*(uint *)(frame + 668))
#define format (*(char * *)(frame + 28))


undefined4 recovered_2031030(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;

  uVar9 = 0;
  local_18 = in_EDX;
LAB_02031056:
  if (in_ECX == (byte *)0x0) {
    in_ECX = &DAT_020c5084;
  }
  else {
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
  }
  local_289[0] = '\0';
  uVar8 = (uint)*in_ECX;
  local_14 = uVar9;
  if ((uVar8 == 0x22) || (uVar8 == 0x27)) {
    pbVar1 = in_ECX + 1;
    uVar10 = (uint)*pbVar1;
    in_ECX = in_ECX + 1;
    uVar9 = uVar8;
    if (*pbVar1 != 0) goto LAB_020310b9;
LAB_020310a5:
    uVar8 = 0;
LAB_02031121:
    local_289[uVar8] = '\0';
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    if (uVar8 != 0) {
      iVar4 = recovered_20022a0(local_289,str_020c7213);
      pcVar7 = local_18;
      if (iVar4 == 0) {
        if (param_3 == 0 || local_18 == (char *)0x0) {
          return 1;
        }
        if ((*local_18 != '\0') && (uVar5 = recovered_2002270(local_18), uVar5 + 1 < param_3)) {
          (pcVar7 + uVar5)[0] = '\n';
          (pcVar7 + uVar5)[1] = '\0';
        }
        uVar5 = recovered_2002270(pcVar7);
        if (param_3 <= uVar5 + 1) goto LAB_02031411;
        cVar11 = 'u';
        iVar4 = 0;
        goto LAB_020313f0;
      }
      iVar4 = recovered_20022a0(local_289,str_020c7375);
      pcVar7 = local_18;
      if (iVar4 == 0) {
        if (param_3 == 0 || local_18 == (char *)0x0) {
          return 1;
        }
        if ((*local_18 != '\0') && (uVar5 = recovered_2002270(local_18), uVar5 + 1 < param_3)) {
          (pcVar7 + uVar5)[0] = '\n';
          (pcVar7 + uVar5)[1] = '\0';
        }
        uVar5 = recovered_2002270(pcVar7);
        if (param_3 <= uVar5 + 1) {
          return 1;
        }
        pcVar7 = pcVar7 + uVar5;
        cVar11 = 'u';
        iVar4 = 0;
        goto LAB_020314d0;
      }
      iVar4 = recovered_20022a0(local_289,str_020c7397);
      uVar9 = 0xff;
      if (iVar4 != 0) {
        iVar4 = recovered_20022a0(local_289,str_020c739d);
        if ((iVar4 == 0) || (iVar4 = recovered_20022a0(local_289,str_020c73ab), iVar4 == 0)) {
          uVar9 = local_14 | 1;
        }
        else {
          iVar4 = recovered_20022a0(local_289,str_020c73b5);
          if (iVar4 == 0) {
            uVar9 = local_14 | 2;
          }
          else {
            iVar4 = recovered_20022a0(local_289,str_020c73c0);
            if ((iVar4 == 0) || (iVar4 = recovered_20022a0(local_289,str_020c73d1), iVar4 == 0)) {
              uVar9 = local_14 | 4;
            }
            else {
              iVar4 = recovered_20022a0(local_289,str_020c73db);
              if (iVar4 == 0) {
                uVar9 = local_14 | 8;
              }
              else {
                iVar4 = recovered_20022a0(local_289,str_020c73ec);
                if (iVar4 == 0) {
                  uVar9 = local_14 | 0x10;
                }
                else {
                  iVar4 = recovered_20022a0(local_289,str_020c73f6);
                  if (iVar4 == 0) {
                    uVar9 = local_14 | 0x20;
                  }
                  else {
                    iVar4 = recovered_20022a0(local_289,str_020c7402);
                    if (iVar4 == 0) {
                      uVar9 = local_14 | 0x40;
                    }
                    else {
                      iVar4 = recovered_20022a0(local_289,str_020c7416);
                      if (iVar4 != 0) {
                        if ((local_289[0] == '-') && (local_289[1] != '\0')) {
                          pcVar7 = local_289 + 1;
                          if (local_289[1] != '-') {
                            do {
                              cVar11 = *pcVar7;
                              switch((uintptr_t)(cVar11)) {
                              case 'a':
                                local_14 = 0xff;
                                pcVar7 = pcVar7 + 1;
                                break;
                              case 'b':
                              case 'c':
                              case 'd':
                              case 'e':
                              case 'f':
                              case 'g':
                              case 'h':
                              case 'j':
                              case 'k':
                              case 'l':
                              case 'q':
                              case 't':
                              case 'u':
                                goto switchD_020312eb_caseD_62;
                              case 'i':
                                local_14 = local_14 | 0x40;
                                pcVar7 = pcVar7 + 1;
                                break;
                              case 'm':
                                local_14 = local_14 | 0x10;
                                pcVar7 = pcVar7 + 1;
                                break;
                              case 'n':
                                local_14 = local_14 | 2;
                                pcVar7 = pcVar7 + 1;
                                break;
                              case 'o':
                                local_14 = local_14 | 0x80;
                                pcVar7 = pcVar7 + 1;
                                break;
                              case 'p':
                                local_14 = local_14 | 0x20;
                                pcVar7 = pcVar7 + 1;
                                break;
                              case 'r':
                                local_14 = local_14 | 4;
                                pcVar7 = pcVar7 + 1;
                                break;
                              case 's':
                                local_14 = local_14 | 1;
                                pcVar7 = pcVar7 + 1;
                                break;
                              case 'v':
                                local_14 = local_14 | 8;
                                pcVar7 = pcVar7 + 1;
                                break;
                              default:
                                goto switchD_020312eb_default;
                              }
                            } while( true );
                          }
                          pcVar7 = local_289;
                          format = str_020c7442;
                        }
                        else {
                          pcVar7 = local_289;
                          format = str_020c7429;
                        }
                        goto LAB_02031a04;
                      }
                      uVar9 = local_14 | 0x80;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_02031056;
    }
  }
  else if (uVar8 != 0) {
    uVar9 = 0;
    uVar10 = uVar8;
    if (*in_ECX == 0) goto LAB_020310a5;
LAB_020310b9:
    in_ECX = in_ECX + 1;
    uVar8 = 0;
    do {
      if (uVar9 == 0) {
        if ((uVar10 - 9 < 0x18) && ((0x80001fU >> (uVar10 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar9 == (int)(char)uVar10) goto LAB_02031121;
      if (uVar8 + 1 < 0xf1) {
        local_289[uVar8] = (char)uVar10;
        uVar8 = uVar8 + 1;
      }
      bVar2 = *in_ECX;
      uVar10 = (uint)bVar2;
      in_ECX = in_ECX + 1;
    } while (bVar2 != 0);
    in_ECX = in_ECX + -1;
    goto LAB_02031121;
  }
  pcVar7 = local_18;
  local_198[0] = '\0';
  if (local_14 == 0) {
    uVar9 = 1;
  }
  else {
    uVar3 = true;
    uVar9 = local_14;
    if ((local_14 & 1) == 0) goto LAB_02031557;
  }
  uVar5 = recovered_2002270(local_198);
  uVar3 = true;
  if (uVar5 + 1 < 0x180) {
    uVar8 = 0x17e - uVar5;
    if (8 < uVar8) {
      uVar8 = 9;
    }
    cVar11 = 'P';
    iVar4 = 0;
    do {
      local_198[iVar4 + (uVar5 - 0x198) + 0x198] = cVar11;
      cVar11 = str_020c4cde[iVar4 + 2];
      iVar4 = iVar4 + 1;
    } while (uVar8 + 1 != iVar4);
    local_198[iVar4 + (uVar5 - 0x198) + 0x198] = '\0';
    uVar3 = false;
  }
LAB_02031557:
  if ((uVar9 & 2) != 0) {
    uVar10 = recovered_2002270(local_198);
    uVar8 = uVar10 + 1;
    if (uVar8 < 0x180) {
      if ((bool)uVar3) {
        uVar12 = uVar8;
LAB_020315cc:
        uVar15 = 0x17f - uVar12;
        if (3 < uVar15) {
          uVar15 = 4;
        }
        cVar11 = 't';
        uVar14 = 0xffffffff;
        do {
          uVar8 = uVar12;
          local_198[uVar10] = cVar11;
          cVar11 = (&DAT_020c5355)[uVar14];
          uVar14 = uVar14 + 1;
          uVar10 = uVar8;
          uVar12 = uVar8 + 1;
        } while (uVar15 != uVar14);
        pcVar7 = local_18;
      }
      else {
        (local_198 + uVar10)[0] = ' ';
        (local_198 + uVar10)[1] = '\0';
        uVar12 = uVar10 + 2;
        uVar10 = uVar8;
        if (uVar12 < 0x180) goto LAB_020315cc;
      }
      local_198[uVar8] = '\0';
      uVar3 = false;
    }
  }
  if ((uVar9 & 4) != 0) {
    uVar10 = recovered_2002270(local_198);
    uVar8 = uVar10 + 1;
    if (uVar8 < 0x180) {
      if ((bool)uVar3) {
        uVar12 = uVar8;
LAB_0203165a:
        uVar15 = 0x17f - uVar12;
        if (1 < uVar15) {
          uVar15 = 2;
        }
        cVar11 = '0';
        uVar14 = 0xffffffff;
        do {
          uVar8 = uVar12;
          local_198[uVar10] = cVar11;
          cVar11 = (&DAT_020c52d6)[uVar14];
          uVar14 = uVar14 + 1;
          uVar10 = uVar8;
          uVar12 = uVar8 + 1;
        } while (uVar15 != uVar14);
        pcVar7 = local_18;
      }
      else {
        (local_198 + uVar10)[0] = ' ';
        (local_198 + uVar10)[1] = '\0';
        uVar12 = uVar10 + 2;
        uVar10 = uVar8;
        if (uVar12 < 0x180) goto LAB_0203165a;
      }
      local_198[uVar8] = '\0';
      uVar3 = false;
    }
  }
  if ((uVar9 & 8) != 0) {
    uVar10 = recovered_2002270(local_198);
    uVar8 = uVar10 + 1;
    if (uVar8 < 0x180) {
      if ((bool)uVar3) {
        uVar12 = uVar8;
LAB_020316ea:
        uVar15 = 0x17f - uVar12;
        if (0xd < uVar15) {
          uVar15 = 0xe;
        }
        cVar11 = 'T';
        uVar14 = 0xffffffff;
        do {
          uVar8 = uVar12;
          local_198[uVar10] = cVar11;
          cVar11 = str_020c7461[uVar14 + 2];
          uVar14 = uVar14 + 1;
          uVar10 = uVar8;
          uVar12 = uVar8 + 1;
        } while (uVar15 != uVar14);
        pcVar7 = local_18;
      }
      else {
        (local_198 + uVar10)[0] = ' ';
        (local_198 + uVar10)[1] = '\0';
        uVar12 = uVar10 + 2;
        uVar10 = uVar8;
        if (uVar12 < 0x180) goto LAB_020316ea;
      }
      local_198[uVar8] = '\0';
      uVar3 = false;
    }
  }
  if ((uVar9 & 0x10) != 0) {
    uVar10 = recovered_2002270(local_198);
    uVar8 = uVar10 + 1;
    if (uVar8 < 0x180) {
      if ((bool)uVar3) {
        uVar12 = uVar8;
LAB_0203177a:
        uVar15 = 0x17f - uVar12;
        if (2 < uVar15) {
          uVar15 = 3;
        }
        cVar11 = 'i';
        uVar14 = 0xffffffff;
        do {
          uVar8 = uVar12;
          local_198[uVar10] = cVar11;
          cVar11 = (&DAT_020c5f82)[uVar14];
          uVar14 = uVar14 + 1;
          uVar10 = uVar8;
          uVar12 = uVar8 + 1;
        } while (uVar15 != uVar14);
        pcVar7 = local_18;
      }
      else {
        (local_198 + uVar10)[0] = ' ';
        (local_198 + uVar10)[1] = '\0';
        uVar12 = uVar10 + 2;
        uVar10 = uVar8;
        if (uVar12 < 0x180) goto LAB_0203177a;
      }
      local_198[uVar8] = '\0';
      uVar3 = false;
    }
  }
  if ((uVar9 & 0x20) != 0) {
    uVar10 = recovered_2002270(local_198);
    uVar8 = uVar10 + 1;
    if (uVar8 < 0x180) {
      if ((bool)uVar3) {
        uVar12 = uVar8;
LAB_0203180a:
        uVar15 = 0x17f - uVar12;
        if (2 < uVar15) {
          uVar15 = 3;
        }
        cVar11 = 'i';
        uVar14 = 0xffffffff;
        do {
          uVar8 = uVar12;
          local_198[uVar10] = cVar11;
          cVar11 = (&DAT_020c5f82)[uVar14];
          uVar14 = uVar14 + 1;
          uVar10 = uVar8;
          uVar12 = uVar8 + 1;
        } while (uVar15 != uVar14);
        pcVar7 = local_18;
      }
      else {
        (local_198 + uVar10)[0] = ' ';
        (local_198 + uVar10)[1] = '\0';
        uVar12 = uVar10 + 2;
        uVar10 = uVar8;
        if (uVar12 < 0x180) goto LAB_0203180a;
      }
      local_198[uVar8] = '\0';
      uVar3 = false;
    }
  }
  if ((uVar9 & 0x40) != 0) {
    uVar10 = recovered_2002270(local_198);
    uVar8 = uVar10 + 1;
    if (uVar8 < 0x180) {
      if ((bool)uVar3) {
        uVar12 = uVar8;
LAB_0203189a:
        uVar15 = 0x17f - uVar12;
        if (2 < uVar15) {
          uVar15 = 3;
        }
        cVar11 = 'i';
        uVar14 = 0xffffffff;
        do {
          uVar8 = uVar12;
          local_198[uVar10] = cVar11;
          cVar11 = (&DAT_020c5f82)[uVar14];
          uVar14 = uVar14 + 1;
          uVar10 = uVar8;
          uVar12 = uVar8 + 1;
        } while (uVar15 != uVar14);
        pcVar7 = local_18;
      }
      else {
        (local_198 + uVar10)[0] = ' ';
        (local_198 + uVar10)[1] = '\0';
        uVar12 = uVar10 + 2;
        uVar10 = uVar8;
        if (uVar12 < 0x180) goto LAB_0203189a;
      }
      local_198[uVar8] = '\0';
      uVar3 = false;
    }
  }
  if ((char)uVar9 < '\0') {
    uVar8 = recovered_2002270(local_198);
    uVar9 = uVar8 + 1;
    if (uVar9 < 0x180) {
      if ((bool)uVar3) {
        uVar10 = uVar9;
LAB_02031926:
        uVar12 = 0x17f - uVar10;
        if (8 < uVar12) {
          uVar12 = 9;
        }
        cVar11 = 'P';
        uVar15 = 0xffffffff;
        do {
          uVar9 = uVar10;
          local_198[uVar8] = cVar11;
          cVar11 = str_020c4cde[uVar15 + 3];
          uVar15 = uVar15 + 1;
          uVar8 = uVar9;
          uVar10 = uVar9 + 1;
        } while (uVar12 != uVar15);
        pcVar7 = local_18;
      }
      else {
        (local_198 + uVar8)[0] = ' ';
        (local_198 + uVar8)[1] = '\0';
        uVar10 = uVar8 + 2;
        uVar8 = uVar9;
        if (uVar10 < 0x180) goto LAB_02031926;
      }
      local_198[uVar9] = '\0';
    }
  }
  if (param_3 == 0 || pcVar7 == (char *)0x0) {
    return 1;
  }
  if ((*pcVar7 != '\0') && (uVar5 = recovered_2002270(pcVar7), uVar5 + 1 < param_3)) {
    (pcVar7 + uVar5)[0] = '\n';
    (pcVar7 + uVar5)[1] = '\0';
  }
  uVar5 = recovered_2002270(pcVar7);
  if (param_3 <= uVar5 + 1) {
    return 1;
  }
  if (local_198[0] != '\0') {
    pcVar7 = local_198;
    uVar6 = uVar5;
    do {
      pcVar7 = pcVar7 + 1;
      local_18[uVar6] = local_198[0];
      local_198[0] = *pcVar7;
      uVar5 = uVar6 + 1;
      if (local_198[0] == '\0') break;
      uVar9 = uVar6 + 2;
      uVar6 = uVar5;
    } while (uVar9 < param_3);
  }
  local_18[uVar5] = '\0';
  return 1;
  while (uVar9 = iVar4 + uVar5 + 2, iVar4 = iVar13, uVar9 < param_3) {
LAB_020313f0:
    pcVar7[iVar4 + uVar5] = cVar11;
    cVar11 = str_020c72e3[iVar4 + 1];
    iVar13 = iVar4 + 1;
    if (cVar11 == '\0') break;
  }
  pcVar7[iVar13 + uVar5] = '\0';
  pcVar7 = local_18;
LAB_02031411:
  if ((*pcVar7 != '\0') && (uVar5 = recovered_2002270(pcVar7), uVar5 + 1 < param_3)) {
    (pcVar7 + uVar5)[0] = '\n';
    (pcVar7 + uVar5)[1] = '\0';
  }
  uVar5 = recovered_2002270(pcVar7);
  if (param_3 <= uVar5 + 1) {
    return 1;
  }
  pcVar7 = pcVar7 + uVar5;
  cVar11 = 'o';
  iVar4 = 0;
  do {
    pcVar7[iVar4] = cVar11;
    cVar11 = str_020c72fd[iVar4 + 1];
    iVar13 = iVar4 + 1;
    if (cVar11 == '\0') break;
    uVar9 = iVar4 + uVar5 + 2;
    iVar4 = iVar13;
  } while (uVar9 < param_3);
  goto LAB_020314ea;
switchD_020312eb_default:
  uVar9 = local_14;
  if (cVar11 != '\0') {
switchD_020312eb_caseD_62:
    pcVar7 = (char *)(int)cVar11;
    format = str_020c7471;
LAB_02031a04:
    pf_varargs_202ecc0__4_(local_18,param_3,format,(uint)pcVar7);
    return 0;
  }
  goto LAB_02031056;
  while (uVar9 = iVar4 + uVar5 + 2, iVar4 = iVar13, uVar9 < param_3) {
LAB_020314d0:
    pcVar7[iVar4] = cVar11;
    cVar11 = str_020c737f[iVar4 + 1];
    iVar13 = iVar4 + 1;
    if (cVar11 == '\0') break;
  }
LAB_020314ea:
  pcVar7[iVar13] = '\0';
  return 1;
}
#undef DAT_020c5084
#undef DAT_020c52d6
#undef DAT_020c5355
#undef DAT_020c5f82
#undef str_020c4cde
#undef str_020c7213
#undef str_020c72e3
#undef str_020c72fd
#undef str_020c7375
#undef str_020c737f
#undef str_020c7397
#undef str_020c739d
#undef str_020c73ab
#undef str_020c73b5
#undef str_020c73c0
#undef str_020c73d1
#undef str_020c73db
#undef str_020c73ec
#undef str_020c73f6
#undef str_020c7402
#undef str_020c7416
#undef str_020c7429
#undef str_020c7442
#undef str_020c7461
#undef str_020c7471
#undef local_289
#undef local_198
#undef local_18
#undef local_14
#undef format
