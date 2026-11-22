/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cc3e4 (*(uint8_t *)(0x20cc3e4U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020cc3c3 (*(char (*)[1])(0x20cc3c3U))
#define str_020cc3e7 (*(char (*)[1])(0x20cc3e7U))
#define str_020cc3fc (*(char (*)[1])(0x20cc3fcU))
#define str_020cc443 (*(char (*)[1])(0x20cc443U))
#define local_10d (*(byte (*)[241])(frame + 19))
#define local_1c (*(undefined4 *)(frame + 260))
#define local_15 (*(char *)(frame + 267))
#define local_14 (*(char * *)(frame + 268))


undefined4 recovered_2034a10(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;

  local_14 = in_EDX;
  if (in_ECX == (byte *)0x0) goto LAB_02034bf1;
  do {
    do {
      pbVar11 = in_ECX;
      in_ECX = pbVar11 + 1;
      bVar9 = *pbVar11;
      uVar1 = (uint)bVar9;
    } while (uVar1 - 9 < 5);
  } while (uVar1 == 0x20);
  local_10d[0] = 0;
  if (uVar1 == 0) goto LAB_02034bf1;
  if ((uVar1 == 0x22) || (uVar1 == 0x27)) {
    bVar9 = *in_ECX;
    pbVar11 = in_ECX;
    if (bVar9 != 0) goto LAB_02034a65;
LAB_02034ac0:
    uVar8 = 0;
  }
  else {
    uVar1 = 0;
    if (bVar9 == 0) goto LAB_02034ac0;
LAB_02034a65:
    pbVar11 = pbVar11 + 1;
    uVar8 = 0;
    do {
      if (uVar1 == 0) {
        if ((bVar9 - 9 < 0x18) && ((0x80001fU >> (bVar9 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar1 == (int)(char)bVar9) goto LAB_02034ac2;
      if (uVar8 + 1 < 0xf1) {
        local_10d[uVar8] = bVar9;
        uVar8 = uVar8 + 1;
      }
      bVar9 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar9 != 0);
    pbVar11 = pbVar11 + -1;
  }
LAB_02034ac2:
  local_10d[uVar8] = 0;
  for (; ((uint)(*pbVar11) - 9 < 5 || (*pbVar11 == 0x20)); pbVar11 = pbVar11 + 1) {
  }
  if (uVar8 == 0) {
LAB_02034bf1:
    recovered_2073e80(local_14,param_3);
    return 1;
  }
  iVar2 = recovered_20022a0((char *)local_10d,str_020c7213);
  if (iVar2 == 0) {
    local_1c = 1;
    if (param_3 == 0 || local_14 == (char *)0x0) {
      return 1;
    }
    if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
      (local_14 + uVar4)[0] = '\n';
      (local_14 + uVar4)[1] = '\0';
    }
    uVar4 = recovered_2002270(local_14);
    if (param_3 <= uVar4 + 1) {
      return local_1c;
    }
    cVar7 = 'u';
    iVar2 = 0;
    do {
      local_14[iVar2 + uVar4] = cVar7;
      cVar7 = str_020cc3c3[iVar2 + 1];
      iVar13 = iVar2 + 1;
      if (cVar7 == '\0') break;
      uVar1 = iVar2 + uVar4 + 2;
      iVar2 = iVar13;
    } while (uVar1 < param_3);
    local_14[iVar13 + uVar4] = '\0';
    return local_1c;
  }
  iVar2 = recovered_20022a0((char *)local_10d,&DAT_020cc3e4);
  if ((iVar2 == 0) || (iVar2 = recovered_20022a0((char *)local_10d,str_020cc3e7), iVar2 == 0)) {
    local_15 = param_3 == 0 || local_14 == (char *)0x0;
LAB_02034c31:
    for (; ((uint)(*pbVar11) - 9 < 5 || (*pbVar11 == 0x20)); pbVar11 = pbVar11 + 1) {
    }
    local_10d[0] = 0;
    uVar1 = (uint)*pbVar11;
    if ((uVar1 == 0x22) || (uVar1 == 0x27)) {
      uVar10 = (uint)pbVar11[1];
      pbVar11 = pbVar11 + 1;
      uVar8 = uVar1;
    }
    else {
      if (uVar1 == 0) {
        return 1;
      }
      uVar8 = 0;
      uVar10 = uVar1;
    }
    local_1c = 1;
    if ((char)uVar10 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      pbVar12 = pbVar11;
      do {
        pbVar11 = pbVar12 + 1;
        if (uVar8 == 0) {
          if ((uVar10 - 9 < 0x18) && ((0x80001fU >> (uVar10 - 9 & 0x1f) & 1) != 0)) {
            pbVar11 = pbVar12;
            break;
          }
        }
        else if (uVar8 == (int)(char)(byte)uVar10) break;
        if (uVar1 + 1 < 0xf1) {
          local_10d[uVar1] = (byte)uVar10;
          uVar1 = uVar1 + 1;
        }
        uVar10 = (uint)*pbVar11;
        pbVar12 = pbVar11;
      } while (*pbVar11 != 0);
    }
    local_10d[uVar1] = 0;
    for (; ((uint)(*pbVar11) - 9 < 5 || (*pbVar11 == 0x20)); pbVar11 = pbVar11 + 1) {
    }
    if (uVar1 == 0) {
      return local_1c;
    }
    pcVar5 = recovered_20024f0((char *)local_10d,'=');
    if (pcVar5 != (char *)0x0) {
      if (local_15 == '\0') {
        if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
          (local_14 + uVar4)[0] = '\n';
          (local_14 + uVar4)[1] = '\0';
        }
        uVar4 = recovered_2002270(local_14);
        if (uVar4 + 1 < param_3) {
          if (local_10d[0] != 0) {
            pbVar12 = local_10d;
            uVar6 = uVar4;
            do {
              pbVar12 = pbVar12 + 1;
              local_14[uVar6] = local_10d[0];
              local_10d[0] = *pbVar12;
              uVar4 = uVar6 + 1;
              if (local_10d[0] == 0) break;
              uVar1 = uVar6 + 2;
              uVar6 = uVar4;
            } while (uVar1 < param_3);
          }
          local_14[uVar4] = '\0';
        }
      }
      goto LAB_02034c31;
    }
    if (local_15 != '\0') {
      return 0;
    }
    local_1c = 0;
    if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
      (local_14 + uVar4)[0] = '\n';
      (local_14 + uVar4)[1] = '\0';
    }
    uVar4 = recovered_2002270(local_14);
    if (param_3 <= uVar4 + 1) {
      return local_1c;
    }
    local_14 = local_14 + uVar4;
    cVar7 = 'e';
    iVar2 = 0;
    do {
      local_14[iVar2] = cVar7;
      cVar7 = str_020cc3fc[iVar2 + 1];
      iVar13 = iVar2 + 1;
      if (cVar7 == '\0') break;
      uVar1 = iVar2 + uVar4 + 2;
      iVar2 = iVar13;
    } while (uVar1 < param_3);
  }
  else {
    pcVar3 = recovered_20024f0((char *)local_10d,'=');
    pcVar5 = local_14;
    if (pcVar3 != (char *)0x0) {
      recovered_2073e80(local_14,param_3);
      local_15 = param_3 == 0 || pcVar5 == (char *)0x0;
      if ((bool)local_15) goto LAB_02034f71;
      if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
        (local_14 + uVar4)[0] = '\n';
        (local_14 + uVar4)[1] = '\0';
      }
      uVar4 = recovered_2002270(local_14);
      if (param_3 <= uVar4 + 1) goto LAB_02034f71;
      if (local_10d[0] != 0) {
        pbVar12 = local_10d;
        uVar6 = uVar4;
        do {
          pbVar12 = pbVar12 + 1;
          local_14[uVar6] = local_10d[0];
          local_10d[0] = *pbVar12;
          uVar4 = uVar6 + 1;
          if (local_10d[0] == 0) break;
          uVar1 = uVar6 + 2;
          uVar6 = uVar4;
        } while (uVar1 < param_3);
      }
      do {
        do {
          local_14[uVar4] = '\0';
LAB_02034f71:
          do {
            do {
              for (; ((uint)(*pbVar11) - 9 < 5 || (*pbVar11 == 0x20)); pbVar11 = pbVar11 + 1) {
              }
              local_10d[0] = 0;
              uVar1 = (uint)*pbVar11;
              if ((uVar1 == 0x22) || (uVar1 == 0x27)) {
                uVar10 = (uint)pbVar11[1];
                pbVar11 = pbVar11 + 1;
                uVar8 = uVar1;
              }
              else {
                if (uVar1 == 0) {
                  return 1;
                }
                uVar8 = 0;
                uVar10 = uVar1;
              }
              local_1c = 1;
              if ((char)uVar10 == '\0') {
                uVar1 = 0;
              }
              else {
                uVar1 = 0;
                pbVar12 = pbVar11;
                do {
                  pbVar11 = pbVar12 + 1;
                  if (uVar8 == 0) {
                    if ((uVar10 - 9 < 0x18) && ((0x80001fU >> (uVar10 - 9 & 0x1f) & 1) != 0)) {
                      pbVar11 = pbVar12;
                      break;
                    }
                  }
                  else if (uVar8 == (int)(char)(byte)uVar10) break;
                  if (uVar1 + 1 < 0xf1) {
                    local_10d[uVar1] = (byte)uVar10;
                    uVar1 = uVar1 + 1;
                  }
                  uVar10 = (uint)*pbVar11;
                  pbVar12 = pbVar11;
                } while (*pbVar11 != 0);
              }
              local_10d[uVar1] = 0;
              for (; ((uint)(*pbVar11) - 9 < 5 || (*pbVar11 == 0x20)); pbVar11 = pbVar11 + 1) {
              }
              if (uVar1 == 0) {
                return local_1c;
              }
              pcVar5 = recovered_20024f0((char *)local_10d,'=');
              if (pcVar5 == (char *)0x0) {
                if (local_15 != '\0') {
                  return 0;
                }
                local_1c = 0;
                if ((*local_14 != '\0') &&
                   (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
                  (local_14 + uVar4)[0] = '\n';
                  (local_14 + uVar4)[1] = '\0';
                }
                uVar4 = recovered_2002270(local_14);
                if (param_3 <= uVar4 + 1) {
                  return local_1c;
                }
                local_14 = local_14 + uVar4;
                cVar7 = 'e';
                iVar2 = 0;
                goto LAB_02035139;
              }
            } while (local_15 != '\0');
            if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
              (local_14 + uVar4)[0] = '\n';
              (local_14 + uVar4)[1] = '\0';
            }
            uVar4 = recovered_2002270(local_14);
          } while (param_3 <= uVar4 + 1);
        } while (local_10d[0] == 0);
        pbVar12 = local_10d;
        uVar6 = uVar4;
        do {
          pbVar12 = pbVar12 + 1;
          local_14[uVar6] = local_10d[0];
          local_10d[0] = *pbVar12;
          uVar4 = uVar6 + 1;
          if (local_10d[0] == 0) break;
          uVar1 = uVar6 + 2;
          uVar6 = uVar4;
        } while (uVar1 < param_3);
      } while( true );
    }
    local_1c = 0;
    if (param_3 == 0 || local_14 == (char *)0x0) {
      return 0;
    }
    if ((*local_14 != '\0') && (uVar4 = recovered_2002270(local_14), uVar4 + 1 < param_3)) {
      (local_14 + uVar4)[0] = '\n';
      (local_14 + uVar4)[1] = '\0';
    }
    uVar4 = recovered_2002270(local_14);
    if (param_3 <= uVar4 + 1) {
      return local_1c;
    }
    local_14 = local_14 + uVar4;
    cVar7 = 'e';
    iVar2 = 0;
    do {
      local_14[iVar2] = cVar7;
      cVar7 = str_020cc443[iVar2 + 1];
      iVar13 = iVar2 + 1;
      if (cVar7 == '\0') break;
      uVar1 = iVar2 + uVar4 + 2;
      iVar2 = iVar13;
    } while (uVar1 < param_3);
  }
LAB_02035153:
  local_14[iVar13] = '\0';
  return 0;
  while (uVar1 = iVar2 + uVar4 + 2, iVar2 = iVar13, uVar1 < param_3) {
LAB_02035139:
    local_14[iVar2] = cVar7;
    cVar7 = str_020cc3fc[iVar2 + 1];
    iVar13 = iVar2 + 1;
    if (cVar7 == '\0') break;
  }
  goto LAB_02035153;
}
#undef DAT_020cc3e4
#undef str_020c7213
#undef str_020cc3c3
#undef str_020cc3e7
#undef str_020cc3fc
#undef str_020cc443
#undef local_10d
#undef local_1c
#undef local_15
#undef local_14
