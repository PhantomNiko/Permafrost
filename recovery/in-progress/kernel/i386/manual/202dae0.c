/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020d9d48 (*(uint32_t volatile *)(0x20d9d48U))
#define DAT_020d9d65 (*(uint8_t volatile *)(0x20d9d65U))
#define str_020c535b (*(char (*)[1])(0x20c535bU))
#define str_020c537b (*(char (*)[1])(0x20c537bU))
#define str_020c5392 (*(char (*)[1])(0x20c5392U))
#define local_50 (*(byte (*)[64])(frame + 16))


bool recovered_202dae0(byte *param_2,char *param_3,uint param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte *arguments;
  int iVar8;
  char *pcVar9;

  pbVar7 = &DAT_020c5084;
  if (param_2 != (byte *)0x0) {
    pbVar7 = param_2;
  }
  recovered_2026f10();
  if (param_4 != 0 && param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  iVar6 = DAT_020d9d48;
  if (iVar6 != 0) {
    bVar5 = DAT_020d9d65;
    if ((bVar5 & 1) == 0) {
      do {
        do {
          arguments = pbVar7;
          pbVar7 = arguments + 1;
          bVar5 = *arguments;
          uVar2 = (uint)bVar5;
        } while (uVar2 - 9 < 5);
      } while (uVar2 == 0x20);
      local_50[0] = 0;
      if (uVar2 != 0) {
        if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
          bVar5 = *pbVar7;
          arguments = pbVar7;
          if (bVar5 != 0) goto LAB_0202db6a;
LAB_0202dc53:
          uVar4 = 0;
        }
        else {
          uVar2 = 0;
          if (bVar5 == 0) goto LAB_0202dc53;
LAB_0202db6a:
          uVar4 = 0;
          pbVar7 = arguments;
          do {
            arguments = pbVar7 + 1;
            if (uVar2 == 0) {
              if ((bVar5 - 9 < 0x18) && ((0x80001fU >> (bVar5 - 9 & 0x1f) & 1) != 0)) {
                arguments = pbVar7;
                break;
              }
            }
            else if (uVar2 == (int)(char)bVar5) break;
            if (uVar4 + 1 < 0x40) {
              local_50[uVar4] = bVar5;
              uVar4 = uVar4 + 1;
            }
            bVar5 = *arguments;
            pbVar7 = arguments;
          } while (bVar5 != 0);
        }
        local_50[uVar4] = 0;
        for (; ((uint)(*arguments) - 9U < 5U || (*arguments == 0x20)); arguments = arguments + 1) {
        }
        if (uVar4 != 0) {
          cVar1 = recovered_202ded0((char *)local_50,(char *)arguments,(char *)0x0,param_3,param_4);
          if (CONCAT31(extraout_var,cVar1) == 0) {
            pf_varargs_202ecc0__4_(param_3,param_4,str_020c5392,(uint)local_50);
            return false;
          }
          return CONCAT31(extraout_var,cVar1) == 1;
        }
      }
      if (param_4 == 0 || param_3 == (char *)0x0) {
        return false;
      }
      if ((*param_3 != '\0') && (uVar3 = recovered_2002270(param_3), uVar3 + 1 < param_4)) {
        (param_3 + uVar3)[0] = '\n';
        (param_3 + uVar3)[1] = '\0';
      }
      uVar3 = recovered_2002270(param_3);
      if (param_4 <= uVar3 + 1) {
        return false;
      }
      pcVar9 = param_3 + uVar3;
      cVar1 = 't';
      iVar6 = 0;
      do {
        pcVar9[iVar6] = cVar1;
        cVar1 = str_020c537b[iVar6 + 1];
        iVar8 = iVar6 + 1;
        if (cVar1 == '\0') break;
        uVar2 = iVar6 + uVar3 + 2;
        iVar6 = iVar8;
      } while (uVar2 < param_4);
      goto LAB_0202dd09;
    }
  }
  if (param_4 == 0 || param_3 == (char *)0x0) {
    return false;
  }
  if ((*param_3 != '\0') && (uVar3 = recovered_2002270(param_3), uVar3 + 1 < param_4)) {
    (param_3 + uVar3)[0] = '\n';
    (param_3 + uVar3)[1] = '\0';
  }
  uVar3 = recovered_2002270(param_3);
  if (param_4 <= uVar3 + 1) {
    return false;
  }
  pcVar9 = param_3 + uVar3;
  cVar1 = 't';
  iVar6 = 0;
  do {
    pcVar9[iVar6] = cVar1;
    cVar1 = str_020c535b[iVar6 + 1];
    iVar8 = iVar6 + 1;
    if (cVar1 == '\0') break;
    uVar2 = iVar6 + uVar3 + 2;
    iVar6 = iVar8;
  } while (uVar2 < param_4);
LAB_0202dd09:
  pcVar9[iVar8] = '\0';
  return false;
}
#undef DAT_020c5084
#undef DAT_020d9d48
#undef DAT_020d9d65
#undef str_020c535b
#undef str_020c537b
#undef str_020c5392
#undef local_50
