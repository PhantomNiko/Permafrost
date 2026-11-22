/* Recovered public command ABI. Pooka's Free Software License. */
#include "functions.h"
#define bStack_179 (*(byte *)(frame + 1047))
#define local_178 (*(undefined4 *)(frame + 1048))
#define DAT_020ec442 (*(uint8_t *)(0x20ec442U))
#define DAT_020ec4d3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020ec670 (*(uint8_t *)(0x20ec670U))
#define DAT_020ec722 (*(uint8_t *)(0x20ec722U))
#define DAT_020ec757 (*(uint8_t *)(0x20ec757U))
#define DAT_020ec75d (*(uint8_t *)(0x20ec75dU))
#define DAT_020ec7cc (*(uint8_t *)(0x20ec7ccU))
#define DAT_020ec7d1 (*(uint8_t *)(0x20ec7d1U))
#define DAT_020ec83c (*(uint8_t *)(0x20ec83cU))
#define DAT_020ec88a (*(uint8_t *)(0x20ec88aU))
#define DAT_020ec969 (*(uint8_t *)(0x20ec969U))
#define DAT_020ec974 (*(uint8_t *)(0x20ec974U))
#define DAT_020ec97d (*(uint8_t *)(0x20ec97dU))
#define DAT_020ec982 (*(uint8_t *)(0x20ec982U))
#define DAT_020ec987 (*(uint8_t *)(0x20ec987U))
#define DAT_020ec98b (*(uint8_t *)(0x20ec98bU))
#define DAT_020ec9b1 (*(uint8_t *)(0x20ec9b1U))
#define DAT_020ec9c0 (*(uint8_t *)(0x20ec9c0U))
#define DAT_020ec9c3 (*(uint8_t *)(0x20ec9c3U))
#define DAT_020ec9c7 (*(uint8_t *)(0x20ec9c7U))
#define DAT_020ec9cc (*(uint8_t *)(0x20ec9ccU))
#define DAT_020ec9e5 (*(uint8_t *)(0x20ec9e5U))
#define DAT_020ec9ea (*(uint8_t *)(0x20ec9eaU))
#define DAT_020ede4e (*(uint8_t *)(0x20ede4eU))
#define DAT_020ee5b5 (*(uint8_t *)(0x20ee5b5U))
#define DAT_020ee5bf (*(uint8_t *)(0x20ee5bfU))
#define DAT_020ee612 (*(uint8_t *)(0x20ee612U))
#define DAT_020f3995 (*(uint8_t *)(0x20f3995U))
#define DAT_02102800 (*(int volatile *)(0x2102800U))
#define DAT_02102804 (*(int volatile *)(0x2102804U))
#define DAT_02102808 (*(int volatile *)(0x2102808U))
#define DAT_0210280c (*(uint volatile *)(0x210280cU))
#define DAT_02102818 (*(int volatile *)(0x2102818U))
#define DAT_0210281c (*(int volatile *)(0x210281cU))
#define DAT_02102820 (*(uint8_t volatile *)(0x2102820U))
#define DAT_02102821 (*(byte volatile *)(0x2102821U))
#define DAT_02102822 (*(uint8_t volatile *)(0x2102822U))
#define DAT_02102823 (*(uint8_t volatile *)(0x2102823U))
#define DAT_02102824 (*(uint8_t volatile *)(0x2102824U))
#define DAT_02102825 (*(char volatile *)(0x2102825U))
#define DAT_02102826 (*(char volatile *)(0x2102826U))
#define DAT_02102827 (*(char volatile *)(0x2102827U))
#define DAT_02102828 (*(int volatile *)(0x2102828U))
#define DAT_0210282c (*(uint volatile *)(0x210282cU))
#define DAT_02102830 (*(uint8_t volatile *)(0x2102830U))
#define DAT_02102870 (*(uint8_t volatile *)(0x2102870U))
#define DAT_02102890 (*(uint8_t volatile *)(0x2102890U))
#define DAT_021029c1 (*(uint8_t volatile *)(0x21029c1U))
#define DAT_02102ba3 (*(uint8_t volatile *)(0x2102ba3U))
#define DAT_02102ba4 (*(uint8_t volatile *)(0x2102ba4U))
#define DAT_02176800 (*(uint64_t volatile *)(0x2176800U))
#define DAT_02176888 (*(uint32_t volatile *)(0x2176888U))
#define str_020ec75f (*(char (*)[1])(0x20ec75fU))
#define str_020ec796 (*(char (*)[1])(0x20ec796U))
#define str_020ec7ac (*(char (*)[1])(0x20ec7acU))
#define str_020ec7d6 (*(char (*)[1])(0x20ec7d6U))
#define str_020ec7f6 (*(char (*)[1])(0x20ec7f6U))
#define str_020ec7fe (*(char (*)[1])(0x20ec7feU))
#define str_020ec806 (*(char (*)[1])(0x20ec806U))
#define str_020ec810 (*(char (*)[1])(0x20ec810U))
#define str_020ec81f (*(char (*)[1])(0x20ec81fU))
#define str_020ec82d (*(char (*)[1])(0x20ec82dU))
#define str_020ec83f (*(char (*)[1])(0x20ec83fU))
#define str_020ec859 (*(char (*)[1])(0x20ec859U))
#define str_020ec877 (*(char (*)[1])(0x20ec877U))
#define str_020ec88f (*(char (*)[1])(0x20ec88fU))
#define str_020ec91f (*(char (*)[1])(0x20ec91fU))
#define str_020ec96d (*(char (*)[1])(0x20ec96dU))
#define str_020ec977 (*(char (*)[1])(0x20ec977U))
#define str_020ec98e (*(char (*)[1])(0x20ec98eU))
#define str_020ec997 (*(char (*)[1])(0x20ec997U))
#define str_020ec9b4 (*(char (*)[1])(0x20ec9b4U))
#define str_020ec9ba (*(char (*)[1])(0x20ec9baU))
#define str_020ec9d1 (*(char (*)[1])(0x20ec9d1U))
#define str_020ee428 (*(char (*)[1])(0x20ee428U))
#define str_020ee44d (*(char (*)[1])(0x20ee44dU))
#define str_020ee48c (*(char (*)[1])(0x20ee48cU))
#define str_020ee4b1 (*(char (*)[1])(0x20ee4b1U))
#define str_020ee4da (*(char (*)[1])(0x20ee4daU))
#define str_020ee4ef (*(char (*)[1])(0x20ee4efU))
#define str_020ee540 (*(char (*)[1])(0x20ee540U))
#define str_020ee546 (*(char (*)[1])(0x20ee546U))
#define str_020ee54c (*(char (*)[1])(0x20ee54cU))
#define str_020ee586 (*(char (*)[1])(0x20ee586U))
#define str_020ee58c (*(char (*)[1])(0x20ee58cU))
#define str_020ee593 (*(char (*)[1])(0x20ee593U))
#define str_020ee5a8 (*(char (*)[1])(0x20ee5a8U))
#define str_020ee5af (*(char (*)[1])(0x20ee5afU))
#define str_020ee5b9 (*(char (*)[1])(0x20ee5b9U))
#define str_020ee5c2 (*(char (*)[1])(0x20ee5c2U))
#define str_020ee5fe (*(char (*)[1])(0x20ee5feU))
#define str_020ee60b (*(char (*)[1])(0x20ee60bU))
#define str_020ee616 (*(char (*)[1])(0x20ee616U))
#define str_020ee62e (*(char (*)[1])(0x20ee62eU))
#define str_020f3980 (*(char (*)[1])(0x20f3980U))
#define str_020f3989 (*(char (*)[1])(0x20f3989U))
#define str_020f3997 (*(char (*)[1])(0x20f3997U))
#define str_021028d0 (*(char volatile (*)[1])(0x21028d0U))
#define str_02106ba8 (*(char volatile (*)[1])(0x2106ba8U))
#define local_478 (*(byte (*)[255])(frame + 280))
#define local_190 (*(byte *)(frame + 1024))
#define local_18c (*(int *)(frame + 1028))
#define local_78 (*(byte (*)[64])(frame + 1304))
#define local_38 (*(byte * *)(frame + 1368))
#define abStack_379 (*(byte (*)[489])(frame + 535))
#define auStack_574 (*(uint (*)[63])(frame + 28))
#define abStack_179 (*(byte (*)[257])(frame + 1047))

ulong recovered_2046aa0(byte *param_9,char *param_10,uint param_11)
{
 undefined8 param_1=0; undefined8 param_2=0; undefined8 param_3=0; undefined8 param_4=0; undefined8 param_5=0; undefined8 param_6=0; undefined8 param_7=0; undefined8 param_8=0; undefined8 param_12=0; byte *param_13=0; char *param_14=0;

  unsigned char frame[1456] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char cVar2;
  uchar uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined7 extraout_var = 0;
  ulong uVar11;
  undefined8 uVar12;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined8 extraout_RDX = 0;
  uint *puVar18;
  char *pcVar19;
  char *pcVar20;
  byte bVar21;
  ulong uVar22;
  bool bVar23;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;
  undefined8 extraout_XMM0_Qa_01 = 0;
  undefined8 extraout_XMM0_Qa_02 = 0;
  undefined8 extraout_XMM0_Qa_03 = 0;
  undefined8 extraout_XMM0_Qa_04 = 0;
  undefined8 extraout_XMM0_Qa_05 = 0;
  undefined8 extraout_XMM0_Qa_06 = 0;
  char cVar24;

  recovered_203dd30();
  cVar24 = '\0';
  if (param_11 != 0 && param_10 != (char *)0x0) {
    *param_10 = '\0';
  }
  pbVar8 = &DAT_020ec442;
  if (param_9 != (byte *)0x0) {
    pbVar8 = param_9;
  }
  uVar5 = recovered_2008520();
  uVar22 = 0;
  uVar7 = (ulong)uVar5;
  if (0x1f < uVar5) {
    uVar7 = 0;
  }
  lVar15 = uVar7 * 0x90;
  (&DAT_02176888)[uVar7 * 0x24] = (int)uVar7;
  puVar17 = &DAT_020ec7cc;
  if ((&DAT_02176800)[uVar7 * 0x12] == 0) {
    puVar17 = &DAT_020ec7d1;
  }
  recovered_2048220(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    str_020ec7ac,pbVar8,puVar17,lVar15,param_13,param_14,cVar24);
  if ((DAT_02102804 == 0) || ((DAT_02102821 & 1) != 0)) {
    recovered_2048220(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      str_020ec7d6,pbVar8,extraout_RDX,lVar15,param_13,param_14,cVar24);
    if (param_11 == 0 || param_10 == (char *)0x0) {
      return 0;
    }
    if ((*param_10 != '\0') && (uVar7 = recovered_2002e80(param_10), uVar7 + 1 < (ulong)param_11)) {
      (param_10 + uVar7)[0] = '\n';
      (param_10 + uVar7)[1] = '\0';
    }
    uVar7 = recovered_2002e80(param_10);
    if ((ulong)param_11 <= uVar7 + 1) {
      return 0;
    }
    cVar24 = 't';
    pcVar19 = str_020ec75f;
    uVar7 = uVar7 + 2;
    do {
      pcVar19 = pcVar19 + 1;
      param_10[uVar7 - 2] = cVar24;
      cVar24 = *pcVar19;
      uVar11 = uVar7 + 1;
      if (cVar24 == '\0') break;
      bVar23 = uVar7 < param_11;
      uVar7 = uVar11;
    } while (bVar23);
    goto LAB_020473da;
  }
  pbVar8 = param_9;
  if (param_9 == (byte *)0x0) {
    param_9 = &DAT_020ec670;
    pbVar8 = param_9;
  }
  do {
    do {
      pbVar9 = pbVar8;
      pbVar8 = pbVar9 + 1;
      bVar21 = *pbVar9;
      uVar5 = (uint)bVar21;
    } while ((uint)(bVar21) - 9 < 5);
  } while (bVar21 == 0x20);
  local_78[0] = 0;
  if (bVar21 == 0) {
    return 1;
  }
  if ((bVar21 == 0x22) || (bVar21 == 0x27)) {
    bVar21 = *pbVar8;
    pbVar9 = pbVar8;
    if (bVar21 != 0) goto LAB_02046bb4;
LAB_02046c85:
    pbVar8 = (byte *)0x0;
  }
  else {
    uVar5 = 0;
    if (bVar21 == 0) goto LAB_02046c85;
LAB_02046bb4:
    pbVar9 = pbVar9 + 1;
    pbVar8 = (byte *)0x0;
    do {
      if (uVar5 == 0) {
        if ((bVar21 < 0x21) &&
           (param_13 = (byte *)(ulong)bVar21, (0x100003e00U >> ((ulong)param_13 & 0x3f) & 1) != 0))
        break;
      }
      else {
        param_13 = (byte *)(ulong)(uint)(int)(char)bVar21;
        if (uVar5 == (int)(char)bVar21) goto LAB_02046c87;
      }
      param_13 = pbVar8 + 1;
      if (param_13 < (byte *)0x40) {
        local_78[(long)pbVar8] = bVar21;
        pbVar8 = param_13;
      }
      bVar21 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar21 != 0);
    pbVar9 = pbVar9 + -1;
  }
LAB_02046c87:
  local_78[(long)pbVar8] = 0;
  for (; ((uint)(*pbVar9) - 9 < 5 || (*pbVar9 == 0x20)); pbVar9 = pbVar9 + 1) {
  }
  if (pbVar8 == (byte *)0x0) {
    return 1;
  }
  local_38 = pbVar9;
  iVar6 = recovered_2002eb0((char *)local_78,str_020ec7f6);
  if (((((iVar6 == 0) || (iVar6 = recovered_2002eb0((char *)local_78,str_020ec7fe), iVar6 == 0)) ||
       (iVar6 = recovered_2002eb0((char *)local_78,str_020ec806), iVar6 == 0)) ||
      ((iVar6 = recovered_2002eb0((char *)local_78,str_020ec810), iVar6 == 0 ||
       (iVar6 = recovered_2002eb0((char *)local_78,str_020ec81f), iVar6 == 0)))) ||
     ((iVar6 = recovered_2002eb0((char *)local_78,str_020ec82d), iVar6 == 0 ||
      (iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec83c), iVar6 == 0)))) {
LAB_02046dd0:
    if (DAT_02102826 == '\x01') {
      pf_varargs_2005a30__8_((char *)(abStack_379 + 1),0x60,&DAT_020ec4d3,(ulonglong)param_9);
      for (lVar15 = 0; ((uint)(abStack_379[lVar15 + 1]) - 9 < 5 || (abStack_379[lVar15 + 1] == 0x20));
          lVar15 = lVar15 + 1) {
      }
      if (lVar15 != 0) {
        uVar7 = recovered_2002e80((char *)(abStack_379 + lVar15 + 1));
        recovered_2001850(abStack_379 + 1,abStack_379 + lVar15 + 1,uVar7 + 1);
      }
      for (uVar7 = recovered_2002e80((char *)(abStack_379 + 1));
          (uVar7 != 0 && (((uint)(abStack_379[uVar7]) - 9 < 5 || (abStack_379[uVar7] == 0x20))));
          uVar7 = uVar7 - 1) {
        abStack_379[uVar7] = 0;
      }
      iVar6 = recovered_2002eb0((char *)(abStack_379 + 1),str_020ee546);
      if (iVar6 == 0) {
        uVar22 = 1;
        if (param_11 == 0 || param_10 == (char *)0x0) {
          return 1;
        }
        if ((*param_10 != '\0') &&
           (uVar7 = recovered_2002e80(param_10), uVar7 + 1 < (ulong)param_11)) {
          (param_10 + uVar7)[0] = '\n';
          (param_10 + uVar7)[1] = '\0';
        }
        uVar7 = recovered_2002e80(param_10);
        if ((ulong)param_11 <= uVar7 + 1) {
          return 1;
        }
        cVar24 = 'n';
        pcVar19 = str_020ee54c;
        uVar7 = uVar7 + 2;
        do {
          pcVar19 = pcVar19 + 1;
          param_10[uVar7 - 2] = cVar24;
          cVar24 = *pcVar19;
          uVar11 = uVar7 + 1;
          if (cVar24 == '\0') break;
          bVar23 = uVar7 < param_11;
          uVar7 = uVar11;
        } while (bVar23);
LAB_020473da:
        param_10[uVar11 - 2] = '\0';
        return uVar22;
      }
      iVar6 = recovered_2002eb0((char *)(abStack_379 + 1),str_020ee586);
      if (iVar6 == 0) {
        if (DAT_0210282c == 0) {
          if (param_11 == 0 || param_10 == (char *)0x0) {
            return 1;
          }
          if ((*param_10 != '\0') &&
             (uVar7 = recovered_2002e80(param_10), uVar7 + 1 < (ulong)param_11)) {
            (param_10 + uVar7)[0] = '\n';
            (param_10 + uVar7)[1] = '\0';
          }
          uVar22 = (ulong)param_11;
          uVar7 = recovered_2002e80(param_10);
          if (uVar22 <= uVar7 + 1) {
            return 1;
          }
          param_10[uVar7] = '(';
          uVar11 = uVar7 + 1;
          if (uVar7 + 2 < uVar22) {
            param_10[uVar7 + 1] = 'e';
            uVar11 = uVar7 + 2;
            if (uVar7 + 3 < uVar22) {
              param_10[uVar7 + 2] = 'm';
              uVar11 = uVar7 + 3;
              if (uVar7 + 4 < uVar22) {
                param_10[uVar7 + 3] = 'p';
                uVar11 = uVar7 + 4;
                if (uVar7 + 5 < uVar22) {
                  param_10[uVar7 + 4] = 't';
                  uVar1 = uVar7 + 6;
                  uVar11 = uVar7 + 5;
                  if (uVar1 < uVar22) {
                    param_10[uVar7 + 5] = 'y';
                    uVar11 = uVar7 + 7;
                    if (uVar22 <= uVar11) {
                      param_10[uVar1] = '\0';
                      return 1;
                    }
                    param_10[uVar1] = ')';
                  }
                }
              }
            }
          }
          param_10[uVar11] = '\0';
          return 1;
        }
        if (param_10 == (char *)0x0) {
          return 1;
        }
        uVar7 = recovered_2002e80(param_10);
        if (param_11 == 0) {
          return 1;
        }
        if ((ulong)param_11 <= uVar7 + 1) {
          return 1;
        }
        if (DAT_02102ba3 == '\0') {
          param_10[uVar7] = '\0';
          return 1;
        }
        pcVar19 = &DAT_02102ba4;
        cVar24 = DAT_02102ba3;
        do {
          param_10[uVar7] = cVar24;
          cVar24 = *pcVar19;
          uVar22 = uVar7 + 1;
          if (cVar24 == '\0') break;
          uVar11 = uVar7 + 2;
          pcVar19 = pcVar19 + 1;
          uVar7 = uVar22;
        } while (uVar11 < param_11);
        param_10[uVar22] = '\0';
        return 1;
      }
      iVar6 = recovered_2002eb0((char *)(abStack_379 + 1),str_020ee58c);
      if (iVar6 == 0) {
        DAT_0210282c = 0;
        DAT_02102ba3 = '\0';
        DAT_02102827 = '\x01';
        if (DAT_02102828 == 0) {
          if (DAT_02102826 == '\x01') {
            pcVar16 = str_020f3980;
            if (DAT_021029c1 != '\0') {
              pcVar16 = &DAT_021029c1;
            }
            pcVar20 = str_020f3989;
            pcVar19 = &DAT_020f3995;
          }
          else {
            pcVar19 = &DAT_020ec75d;
            if (str_021028d0[0] != '\0') {
              pcVar19 = str_021028d0;
            }
            pcVar16 = &DAT_020ec722;
            if (DAT_02102870 != '\0') {
              pcVar16 = &DAT_02102870;
            }
            pcVar20 = str_020f3997;
          }
          pf_varargs_2005a30__8__8_(str_02106ba8,0x60,pcVar20,(ulonglong)pcVar16,(ulonglong)pcVar19)
          ;
        }
        else {
          recovered_2070a50();
        }
        uVar22 = 1;
        if (param_11 == 0 || param_10 == (char *)0x0) {
          return 1;
        }
        if ((*param_10 != '\0') &&
           (uVar7 = recovered_2002e80(param_10), uVar7 + 1 < (ulong)param_11)) {
          (param_10 + uVar7)[0] = '\n';
          (param_10 + uVar7)[1] = '\0';
        }
        uVar7 = recovered_2002e80(param_10);
        if ((ulong)param_11 <= uVar7 + 1) {
          return 1;
        }
        cVar24 = 'n';
        pcVar19 = str_020ee593;
        uVar7 = uVar7 + 2;
        do {
          pcVar19 = pcVar19 + 1;
          param_10[uVar7 - 2] = cVar24;
          cVar24 = *pcVar19;
          uVar11 = uVar7 + 1;
          if (cVar24 == '\0') break;
          bVar23 = uVar7 < param_11;
          uVar7 = uVar11;
        } while (bVar23);
        goto LAB_020473da;
      }
      iVar6 = recovered_2002eb0((char *)(abStack_379 + 1),str_020ee5a8);
      if ((iVar6 == 0) ||
         (iVar6 = recovered_2002eb0((char *)(abStack_379 + 1),str_020ee5af), iVar6 == 0)) {
        uVar7 = recovered_207d6d0(param_10,param_11);
        return uVar7 & 0xff;
      }
      iVar6 = recovered_2002eb0((char *)(abStack_379 + 1),&DAT_020ee5b5);
      if (iVar6 == 0) {
        uVar12 = recovered_207d6d0(param_10,param_11);
        if ((char)uVar12 == '\0') {
          return 0;
        }
        recovered_207d820();
        return 1;
      }
      iVar6 = recovered_2002eb0((char *)(abStack_379 + 1),str_020ee5b9);
      if ((iVar6 == 0) ||
         (iVar6 = recovered_2002eb0((char *)(abStack_379 + 1),&DAT_020ee5bf), iVar6 == 0)) {
        if (DAT_02102827 != '\x01') {
          recovered_207d820();
          pcVar19 = str_020ee5fe;
          goto LAB_02047806;
        }
        pcVar19 = str_020ee5c2;
      }
      else {
        iVar6 = recovered_2002eb0((char *)(abStack_379 + 1),str_020ee60b);
        if ((iVar6 == 0) ||
           (iVar6 = recovered_2002eb0((char *)(abStack_379 + 1),&DAT_020ee612), iVar6 == 0)) {
          recovered_207d820();
          pcVar19 = str_020ee616;
LAB_02047806:
          recovered_20456c0(param_10,param_11,pcVar19);
          return 1;
        }
        uVar7 = recovered_2002e80((char *)param_9);
        if (uVar7 + DAT_0210282c + 1 < 0x2000) {
          recovered_2001410(&DAT_02102ba3 + DAT_0210282c,param_9,uVar7);
          uVar5 = DAT_0210282c + (int)uVar7;
          DAT_0210282c = DAT_0210282c + (int)uVar7 + 1;
          uVar7 = (ulong)DAT_0210282c;
          (&DAT_02102ba3)[uVar5] = 10;
          (&DAT_02102ba3)[uVar7] = 0;
          DAT_02102827 = 1;
          recovered_2043ff0();
          return 1;
        }
        pcVar19 = str_020ee62e;
      }
      goto LAB_02047c80;
    }
    uVar10 = recovered_2003450((char *)local_78,'/');
    if (uVar10 != 0) {
      pbVar8 = abStack_179 + 1;
      recovered_20483e0((char *)local_78,str_021028d0,(char *)pbVar8);
      uVar7 = recovered_20486b0((char *)pbVar8,(char *)(abStack_379 + 1));
      if ((char)uVar7 == '\0') {
        pcVar19 = str_020ec859;
      }
      else {
        pcVar19 = str_020ec877;
        if ((local_18c != 2) && ((local_190 & 2) == 0)) {
          pf_varargs_2005a30__8_((char *)(auStack_574 + -1),0xf1,&DAT_020ec4d3,(ulonglong)pbVar8);
          pbVar9 = abStack_179 + 2;
          do {
            bVar21 = pbVar9[-1];
            if ((bVar21 == 0x2f) || (bVar21 == 0x5c)) {
              pbVar8 = pbVar9;
            }
            else if (bVar21 == 0) goto code_r0x020470c8;
            pbVar9 = pbVar9 + 1;
          } while( true );
        }
      }
      pbVar8 = abStack_179 + 1;
      uVar12 = extraout_XMM0_Qa_01;
      goto LAB_0204743b;
    }
    goto LAB_020470e2;
  }
  if (((DAT_02102808 == 1) && (DAT_02102804 != 0)) && ((DAT_02102821 & 1) == 0)) {
    recovered_2044650();
  }
  pbVar9 = param_9;
  if (DAT_02102828 == 0) goto LAB_02046dd0;
  do {
    do {
      pbVar8 = pbVar9;
      pbVar9 = pbVar8 + 1;
      bVar21 = *pbVar8;
      uVar5 = (uint)bVar21;
    } while ((uint)(bVar21) - 9 < 5);
  } while (bVar21 == 0x20);
  local_478[0] = 0;
  if (bVar21 == 0) {
LAB_0204790d:
    pf_varargs_2005a30__8_((char *)(abStack_179 + 1),0x80,&DAT_020ec4d3,(ulonglong)param_9);
    for (lVar15 = 0; ((uint)(abStack_179[lVar15 + 1]) - 9 < 5 || (abStack_179[lVar15 + 1] == 0x20));
        lVar15 = lVar15 + 1) {
    }
    if (lVar15 != 0) {
      uVar7 = recovered_2002e80((char *)(abStack_179 + lVar15 + 1));
      recovered_2001850(abStack_179 + 1,abStack_179 + lVar15 + 1,uVar7 + 1);
    }
    for (uVar7 = recovered_2002e80((char *)(abStack_179 + 1));
        (uVar7 != 0 && (((uint)(abStack_179[uVar7]) - 9 < 5 || (abStack_179[uVar7] == 0x20))));
        uVar7 = uVar7 - 1) {
      abStack_179[uVar7] = 0;
    }
    if (DAT_02102828 == 3) {
      if (abStack_179[1] != 0) {
        pf_varargs_2005a30__8_(&DAT_02102890,0x40,&DAT_020ec4d3,(ulonglong)(abStack_179 + 1));
        DAT_02102820 = 1;
        DAT_02102828 = 0;
        DAT_02102823 = 1;
        puVar17 = &DAT_02102870;
        if (DAT_02102870 == '\0') {
          puVar17 = &DAT_020ec722;
        }
        pf_varargs_2005a30__8_(str_021028d0,0xf1,str_020ec98e,(ulonglong)puVar17);
        if ((-1 < DAT_0210281c) || (DAT_0210281c = DAT_02102800, -1 < DAT_02102800)) {
          uVar5 = 0x180000;
          if (DAT_0210280c != 0) {
            uVar5 = DAT_0210280c;
          }
          pcVar19 = str_020ee540;
          if (DAT_02102825 != '\0') {
            pcVar19 = &DAT_020ede4e;
          }
          uVar5 = pf_varargs_2005a30__4__8__8__8__8_
                            ((char *)(abStack_379 + 1),0x200,str_020ee4ef,uVar5,(ulonglong)pcVar19,
                             0x2102830,0x2102870,0x2102890);
          if (0 < (int)uVar5) {
            uVar14 = 0x1ff;
            if (uVar5 < 0x1ff) {
              uVar14 = uVar5;
            }
            uVar3 = recovered_2042880(DAT_0210281c,0x20ede04,(long)(abStack_379 + 1),uVar14);
            if ((int)CONCAT71(extraout_var_00,uVar3) != 0) goto LAB_02047e20;
          }
        }
        if (param_11 != 0 && param_10 != (char *)0x0) {
          if ((*param_10 != '\0') &&
             (uVar7 = recovered_2002e80(param_10), uVar7 + 1 < (ulong)param_11)) {
            (param_10 + uVar7)[0] = '\n';
            (param_10 + uVar7)[1] = '\0';
          }
          uVar7 = recovered_2002e80(param_10);
          if (uVar7 + 1 < (ulong)param_11) {
            cVar24 = 't';
            pcVar19 = str_020ee4b1;
            uVar7 = uVar7 + 2;
            do {
              uVar22 = uVar7;
              pcVar19 = pcVar19 + 1;
              param_10[uVar22 - 2] = cVar24;
              cVar24 = *pcVar19;
              if (cVar24 == '\0') break;
              uVar7 = uVar22 + 1;
            } while (uVar22 < param_11);
            param_10[uVar22 - 1] = '\0';
          }
        }
LAB_02047e20:
        uVar7 = recovered_207cc00();
        if ((char)uVar7 != '\0') {
          DAT_02102822 = 0;
          recovered_207d2a0(DAT_02102818);
        }
        pcVar19 = &DAT_020ec670;
        if (param_11 != 0 && param_10 != (char *)0x0) {
          if ((*param_10 != '\0') &&
             (uVar7 = recovered_2002e80(param_10), uVar7 + 1 < (ulong)param_11)) {
            (param_10 + uVar7)[0] = '\n';
            (param_10 + uVar7)[1] = '\0';
          }
          uVar7 = recovered_2002e80(param_10);
          if (uVar7 + 1 < (ulong)param_11) {
            cVar24 = 'T';
            pcVar16 = str_020ee4da;
            uVar7 = uVar7 + 2;
            do {
              uVar22 = uVar7;
              pcVar16 = pcVar16 + 1;
              param_10[uVar22 - 2] = cVar24;
              cVar24 = *pcVar16;
              if (cVar24 == '\0') break;
              uVar7 = uVar22 + 1;
            } while (uVar22 < param_11);
            param_10[uVar22 - 1] = '\0';
          }
        }
        if (DAT_02102826 == '\x01') {
          pcVar16 = str_020f3980;
          if (DAT_021029c1 != '\0') {
            pcVar16 = &DAT_021029c1;
          }
          if (DAT_02102827 != '\0') {
            pcVar19 = &DAT_020f3995;
          }
          pcVar20 = str_020f3989;
        }
        else {
          pcVar19 = str_021028d0;
          if (str_021028d0[0] == '\0') {
            pcVar19 = &DAT_020ec75d;
          }
          pcVar16 = &DAT_02102870;
          if (DAT_02102870 == '\0') {
            pcVar16 = &DAT_020ec722;
          }
          pcVar20 = str_020f3997;
        }
        pf_varargs_2005a30__8__8_(str_02106ba8,0x60,pcVar20,(ulonglong)pcVar16,(ulonglong)pcVar19);
        return 1;
      }
      if (param_11 == 0 || param_10 == (char *)0x0) goto LAB_02047fc9;
      if ((*param_10 != '\0') && (uVar7 = recovered_2002e80(param_10), uVar7 + 1 < (ulong)param_11))
      {
        (param_10 + uVar7)[0] = '\n';
        (param_10 + uVar7)[1] = '\0';
      }
      uVar7 = recovered_2002e80(param_10);
      if ((ulong)param_11 <= uVar7 + 1) goto LAB_02047fc9;
      cVar24 = 't';
      pcVar19 = str_020ee48c;
      uVar7 = uVar7 + 2;
      do {
        pcVar19 = pcVar19 + 1;
        param_10[uVar7 - 2] = cVar24;
        cVar24 = *pcVar19;
        uVar22 = uVar7 + 1;
        if (cVar24 == '\0') break;
        bVar23 = uVar7 < param_11;
        uVar7 = uVar22;
      } while (bVar23);
    }
    else if (DAT_02102828 == 2) {
      if (abStack_179[1] != 0) {
        pbVar8 = abStack_179 + 2;
        while (((0xf5 < (byte)(abStack_179[1] - 0x3a) ||
                (0xe5 < (byte)((abStack_179[1] & 0xdf) + 0xa5))) ||
               ((abStack_179[1] - 0x2d < 0x33 &&
                ((0x4000000000003U >> ((ulong)(abStack_179[1] - 0x2d) & 0x3f) & 1) != 0))))) {
          abStack_179[1] = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (abStack_179[1] == 0) {
            pf_varargs_2005a30__8_(&DAT_02102870,0x20,&DAT_020ec4d3,(ulonglong)(abStack_179 + 1));
            DAT_02102824 = 1;
            puVar17 = &DAT_020ec722;
            if (DAT_02102870 != '\0') {
              puVar17 = &DAT_02102870;
            }
            pf_varargs_2005a30__8_(str_021028d0,0xf1,str_020ec98e,(ulonglong)puVar17);
            DAT_02102828 = 3;
            recovered_2070a50();
            return 1;
          }
        }
      }
      if (param_11 == 0 || param_10 == (char *)0x0) goto LAB_02047fc9;
      if ((*param_10 != '\0') && (uVar7 = recovered_2002e80(param_10), uVar7 + 1 < (ulong)param_11))
      {
        (param_10 + uVar7)[0] = '\n';
        (param_10 + uVar7)[1] = '\0';
      }
      uVar7 = recovered_2002e80(param_10);
      if ((ulong)param_11 <= uVar7 + 1) goto LAB_02047fc9;
      cVar24 = 't';
      pcVar19 = str_020ee44d;
      uVar7 = uVar7 + 2;
      do {
        pcVar19 = pcVar19 + 1;
        param_10[uVar7 - 2] = cVar24;
        cVar24 = *pcVar19;
        uVar22 = uVar7 + 1;
        if (cVar24 == '\0') break;
        bVar23 = uVar7 < param_11;
        uVar7 = uVar22;
      } while (bVar23);
    }
    else {
      if (DAT_02102828 != 1) {
        recovered_2044650();
        return 1;
      }
      if (abStack_179[1] != 0) {
        pf_varargs_2005a30__8_(&DAT_02102830,0x40,&DAT_020ec4d3,(ulonglong)(abStack_179 + 1));
        DAT_02102828 = 2;
        recovered_2070a50();
        return 1;
      }
      if (param_11 == 0 || param_10 == (char *)0x0) goto LAB_02047fc9;
      if ((*param_10 != '\0') && (uVar7 = recovered_2002e80(param_10), uVar7 + 1 < (ulong)param_11))
      {
        (param_10 + uVar7)[0] = '\n';
        (param_10 + uVar7)[1] = '\0';
      }
      uVar7 = recovered_2002e80(param_10);
      if ((ulong)param_11 <= uVar7 + 1) goto LAB_02047fc9;
      cVar24 = 't';
      pcVar19 = str_020ee428;
      uVar7 = uVar7 + 2;
      do {
        pcVar19 = pcVar19 + 1;
        param_10[uVar7 - 2] = cVar24;
        cVar24 = *pcVar19;
        uVar22 = uVar7 + 1;
        if (cVar24 == '\0') break;
        bVar23 = uVar7 < param_11;
        uVar7 = uVar22;
      } while (bVar23);
    }
    param_10[uVar22 - 2] = '\0';
LAB_02047fc9:
    recovered_2070a50();
    return 0;
  }
  if ((bVar21 == 0x22) || (bVar21 == 0x27)) {
    bVar21 = *pbVar9;
    pbVar8 = pbVar9;
  }
  else {
    uVar5 = 0;
  }
  if (bVar21 == 0) {
    uVar7 = 0;
  }
  else {
    pbVar8 = pbVar8 + 1;
    uVar7 = 0;
    do {
      if (uVar5 == 0) {
        if ((bVar21 < 0x21) && ((0x100003e00U >> ((ulong)bVar21 & 0x3f) & 1) != 0)) break;
      }
      else if (uVar5 == (int)(char)bVar21) goto LAB_0204787a;
      if (uVar7 + 1 < 0x40) {
        local_478[uVar7] = bVar21;
        uVar7 = uVar7 + 1;
      }
      bVar21 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar21 != 0);
    pbVar8 = pbVar8 + -1;
  }
LAB_0204787a:
  local_478[uVar7] = 0;
  for (; ((uint)(*pbVar8) - 9 < 5 || (*pbVar8 == 0x20)); pbVar8 = pbVar8 + 1) {
  }
  if ((uVar7 == 0) || (iVar6 = recovered_2002eb0((char *)local_478,&DAT_020ec757), iVar6 != 0))
  goto LAB_0204790d;
  for (; (bVar21 = *pbVar8, (uint)(bVar21) - 9 < 5 || (bVar21 == 0x20)); pbVar8 = pbVar8 + 1) {
  }
  if (bVar21 != 0) goto LAB_0204790d;
LAB_020478dc:
  DAT_02102808 = 0;
  pcVar19 = str_020ec83f;
LAB_020478ed:
  recovered_20456c0(param_10,param_11,pcVar19);
  return 1;
code_r0x020470c8:
  pf_varargs_2005a30__8_((char *)local_78,0x40,&DAT_020ec4d3,(ulonglong)pbVar8);
LAB_020470e2:
  iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec757);
  if (iVar6 != 0) {
    iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec88a);
    if (iVar6 == 0) {
      recovered_20456c0(param_10,param_11,str_020ec88f);
      pcVar19 = str_020ec91f;
    }
    else {
      iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec969);
      if (iVar6 == 0) {
        uVar7 = recovered_2048950(local_38,param_10,param_11);
        return uVar7 & 0xffffffff;
      }
      iVar6 = recovered_2002eb0((char *)local_78,str_020ec96d);
      if (iVar6 != 0) {
        iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec974);
        if (iVar6 == 0) {
          uVar7 = recovered_2048c10(local_38,param_10,param_11);
          return uVar7 & 0xffffffff;
        }
        iVar6 = recovered_2002eb0((char *)local_78,str_020ec977);
        if (iVar6 == 0) {
          uVar7 = recovered_2049220(local_38,param_10,param_11);
          return uVar7 & 0xffffffff;
        }
        iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec97d);
        if (iVar6 == 0) {
          uVar5 = recovered_2049db0(local_38,param_10,param_11);
          return (ulong)uVar5;
        }
        iVar6 = recovered_2002eb0((char *)local_78,str_020ec7f6);
        if (iVar6 == 0) {
          uVar5 = recovered_204a8d0(local_38,param_10,param_11);
          return (ulong)uVar5;
        }
        iVar6 = recovered_2002eb0((char *)local_78,str_020ec7fe);
        if (iVar6 == 0) {
          uVar4 = recovered_204adb0(local_38,param_10,param_11);
          return CONCAT71(extraout_var_01,uVar4) & 0xffffffff;
        }
        iVar6 = recovered_2002eb0((char *)local_78,str_020ec806);
        if (iVar6 == 0) {
          uVar5 = recovered_204b170(local_38,param_10,param_11);
          return (ulong)uVar5;
        }
        iVar6 = recovered_2002eb0((char *)local_78,str_020ec810);
        if (((iVar6 == 0) || (iVar6 = recovered_2002eb0((char *)local_78,str_020ec81f), iVar6 == 0))
           || (iVar6 = recovered_2002eb0((char *)local_78,str_020ec82d), iVar6 == 0)) {
          uVar7 = recovered_204b5a0(local_38,param_10,param_11);
          return uVar7 & 0xffffffff;
        }
        iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec982);
        if (iVar6 == 0) {
          uVar5 = recovered_204bbf0(local_38,param_10,param_11);
          return (ulong)uVar5;
        }
        iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec987);
        if (iVar6 == 0) {
          uVar7 = recovered_204d1e0(local_38,param_10,param_11);
          return uVar7 & 0xffffffff;
        }
        iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec98b);
        if (iVar6 == 0) {
          uVar12 = recovered_2045780(&local_38,abStack_179 + 1,0xf1);
          if ((char)uVar12 == '\0') {
            puVar17 = &DAT_020ec722;
            if (DAT_02102870 != '\0') {
              puVar17 = &DAT_02102870;
            }
            pf_varargs_2005a30__8_((char *)(abStack_179 + 1),0xf1,str_020ec98e,(ulonglong)puVar17);
          }
          recovered_20483e0((char *)(abStack_179 + 1),str_021028d0,(char *)local_478);
          uVar7 = recovered_20486b0((char *)local_478,(char *)(abStack_379 + 1));
          if (((char)uVar7 != '\0') && ((local_18c == 2 || ((local_190 & 2) != 0)))) {
            pf_varargs_2005a30__8_(str_021028d0,0xf1,&DAT_020ec4d3,(ulonglong)local_478);
            recovered_204d970();
            return 1;
          }
          pcVar19 = str_020ec997;
          pbVar8 = local_478;
          uVar12 = extraout_XMM0_Qa_04;
        }
        else {
          iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec9b1);
          if (iVar6 == 0) {
            uVar5 = recovered_204da10(local_38,param_10,param_11);
            return (ulong)uVar5;
          }
          iVar6 = recovered_2002eb0((char *)local_78,str_020ec9b4);
          if (iVar6 == 0) {
            uVar5 = recovered_204e290(local_38,param_10,param_11);
            return (ulong)uVar5;
          }
          iVar6 = recovered_2002eb0((char *)local_78,str_020ec9ba);
          if (iVar6 == 0) {
            uVar7 = recovered_204ea30(local_38,param_10,param_11);
            return uVar7 & 0xffffffff;
          }
          iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec9c0);
          if (iVar6 == 0) {
            uVar5 = recovered_204f000(local_38,param_10,param_11);
            return (ulong)uVar5;
          }
          iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec9c3);
          if (iVar6 == 0) {
            uVar5 = recovered_204f730(local_38,param_10,param_11);
            return (ulong)uVar5;
          }
          iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec9c7);
          if (iVar6 == 0) {
            recovered_2050070(local_38,param_10,param_11,pbVar8,param_13,param_14);
            return 1;
          }
          iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec83c);
          if (iVar6 == 0) {
            uVar7 = recovered_2050660(local_38,param_10,param_11);
            return uVar7 & 0xffffffff;
          }
          iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec9cc);
          if (iVar6 == 0) {
            pbVar8 = local_38;
            if (local_38 != (byte *)0x0) {
              while( true ) {
                bVar21 = *pbVar8;
                if ((4 < (uint)(bVar21) - 9) && (bVar21 != 0x20)) break;
                pbVar8 = pbVar8 + 1;
              }
              if (bVar21 != 0) {
                uVar7 = recovered_2046aa0(pbVar8,param_10,param_11);
                return uVar7 & 0xffffffff;
              }
            }
            pcVar19 = str_020ec9d1;
LAB_02047c80:
            recovered_20456c0(param_10,param_11,pcVar19);
            return 0;
          }
          iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec9e5);
          if (iVar6 == 0) {
            uVar7 = recovered_2050d10(local_38,param_10,param_11);
            return uVar7 & 0xffffffff;
          }
          iVar6 = recovered_2002eb0((char *)local_78,&DAT_020ec9ea);
          if (iVar6 == 0) {
            uVar7 = recovered_2051420(local_38,param_10,param_11);
            return uVar7 & 0xffffffff;
          }
          puVar18 = auStack_574 + -1;
          if (*(char *)puVar18 == '\0') {
            puVar18 = (uint *)0x0;
          }
          param_13 = (byte *)(ulong)param_11;
          cVar2 = recovered_20458a0(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,
                                    param_7,param_8,local_78,local_38,puVar18,param_10,param_13,
                                    param_14);
          iVar6 = (int)CONCAT71(extraout_var,cVar2);
          if (iVar6 != 0) {
            return (ulong)(iVar6 == 1);
          }
          uVar7 = recovered_2052130((char *)local_78);
          uVar12 = extraout_XMM0_Qa_05;
          if (((char)uVar7 != '\0') &&
             (uVar13 = recovered_2052200(param_10,param_11), uVar12 = extraout_XMM0_Qa_06,
             (int)uVar13 != 0)) {
            return 0;
          }
          pcVar19 = str_020ec796;
          pbVar8 = local_78;
        }
LAB_0204743b:
        recovered_2046960(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          param_11,pcVar19,pbVar8,param_13,param_14,cVar24);
        return 0;
      }
      pcVar19 = &DAT_02102870;
    }
    goto LAB_020478ed;
  }
  goto LAB_020478dc;
}
