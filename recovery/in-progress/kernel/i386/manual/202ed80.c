/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5085 (*(uint8_t *)(0x20c5085U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c531e (*(uint8_t *)(0x20c531eU))
#define DAT_020c5353 (*(uint8_t *)(0x20c5353U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c53c1 (*(uint8_t *)(0x20c53c1U))
#define DAT_020c53c6 (*(uint8_t *)(0x20c53c6U))
#define DAT_020c5431 (*(uint8_t *)(0x20c5431U))
#define DAT_020c547f (*(uint8_t *)(0x20c547fU))
#define DAT_020c555e (*(uint8_t *)(0x20c555eU))
#define DAT_020c5569 (*(uint8_t *)(0x20c5569U))
#define DAT_020c5572 (*(uint8_t *)(0x20c5572U))
#define DAT_020c5577 (*(uint8_t *)(0x20c5577U))
#define DAT_020c557c (*(uint8_t *)(0x20c557cU))
#define DAT_020c5580 (*(uint8_t *)(0x20c5580U))
#define DAT_020c55a6 (*(uint8_t *)(0x20c55a6U))
#define DAT_020c55b5 (*(uint8_t *)(0x20c55b5U))
#define DAT_020c55b8 (*(uint8_t *)(0x20c55b8U))
#define DAT_020c55bc (*(uint8_t *)(0x20c55bcU))
#define DAT_020c55c1 (*(uint8_t *)(0x20c55c1U))
#define DAT_020c55da (*(uint8_t *)(0x20c55daU))
#define DAT_020c55df (*(uint8_t *)(0x20c55dfU))
#define DAT_020c5755 (*(uint8_t *)(0x20c5755U))
#define DAT_020c69e5 (*(uint8_t *)(0x20c69e5U))
#define DAT_020c714c (*(uint8_t *)(0x20c714cU))
#define DAT_020c7156 (*(uint8_t *)(0x20c7156U))
#define DAT_020c71a9 (*(uint8_t *)(0x20c71a9U))
#define DAT_020cc533 (*(uint8_t *)(0x20cc533U))
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_020d9d48 (*(uint32_t volatile *)(0x20d9d48U))
#define DAT_020d9d4c (*(uint32_t volatile *)(0x20d9d4cU))
#define DAT_020d9d50 (*(uint32_t volatile *)(0x20d9d50U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define DAT_020d9d60 (*(uint32_t volatile *)(0x20d9d60U))
#define DAT_020d9d64 (*(uint8_t volatile *)(0x20d9d64U))
#define DAT_020d9d65 (*(uint8_t volatile *)(0x20d9d65U))
#define DAT_020d9d66 (*(uint8_t volatile *)(0x20d9d66U))
#define DAT_020d9d67 (*(uint8_t volatile *)(0x20d9d67U))
#define DAT_020d9d68 (*(uint8_t volatile *)(0x20d9d68U))
#define DAT_020d9d69 (*(uint8_t volatile *)(0x20d9d69U))
#define DAT_020d9d6a (*(uint8_t volatile *)(0x20d9d6aU))
#define DAT_020d9d6b (*(uint8_t volatile *)(0x20d9d6bU))
#define DAT_020d9d6c (*(uint32_t volatile *)(0x20d9d6cU))
#define DAT_020d9d70 (*(uint32_t volatile *)(0x20d9d70U))
#define DAT_020d9d74 (*(uint8_t volatile *)(0x20d9d74U))
#define DAT_020d9db4 (*(uint8_t volatile *)(0x20d9db4U))
#define DAT_020d9dd4 (*(uint8_t volatile *)(0x20d9dd4U))
#define DAT_020d9f05 (*(uint8_t volatile *)(0x20d9f05U))
#define DAT_020da0e7 (*(uint8_t volatile *)(0x20da0e7U))
#define DAT_020da0e8 (*(uint8_t volatile *)(0x20da0e8U))
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#define str_020c535b (*(char (*)[1])(0x20c535bU))
#define str_020c5392 (*(char (*)[1])(0x20c5392U))
#define str_020c53a8 (*(char (*)[1])(0x20c53a8U))
#define str_020c53cb (*(char (*)[1])(0x20c53cbU))
#define str_020c53eb (*(char (*)[1])(0x20c53ebU))
#define str_020c53f3 (*(char (*)[1])(0x20c53f3U))
#define str_020c53fb (*(char (*)[1])(0x20c53fbU))
#define str_020c5405 (*(char (*)[1])(0x20c5405U))
#define str_020c5414 (*(char (*)[1])(0x20c5414U))
#define str_020c5422 (*(char (*)[1])(0x20c5422U))
#define str_020c5434 (*(char (*)[1])(0x20c5434U))
#define str_020c544e (*(char (*)[1])(0x20c544eU))
#define str_020c546c (*(char (*)[1])(0x20c546cU))
#define str_020c5484 (*(char (*)[1])(0x20c5484U))
#define str_020c5514 (*(char (*)[1])(0x20c5514U))
#define str_020c5562 (*(char (*)[1])(0x20c5562U))
#define str_020c556c (*(char (*)[1])(0x20c556cU))
#define str_020c5583 (*(char (*)[1])(0x20c5583U))
#define str_020c558c (*(char (*)[1])(0x20c558cU))
#define str_020c55a9 (*(char (*)[1])(0x20c55a9U))
#define str_020c55af (*(char (*)[1])(0x20c55afU))
#define str_020c55c6 (*(char (*)[1])(0x20c55c6U))
#define str_020c699b (*(char (*)[1])(0x20c699bU))
#define str_020c6fbf (*(char (*)[1])(0x20c6fbfU))
#define str_020c6fe4 (*(char (*)[1])(0x20c6fe4U))
#define str_020c7023 (*(char (*)[1])(0x20c7023U))
#define str_020c7048 (*(char (*)[1])(0x20c7048U))
#define str_020c7071 (*(char (*)[1])(0x20c7071U))
#define str_020c7086 (*(char (*)[1])(0x20c7086U))
#define str_020c70d7 (*(char (*)[1])(0x20c70d7U))
#define str_020c70dd (*(char (*)[1])(0x20c70ddU))
#define str_020c70e3 (*(char (*)[1])(0x20c70e3U))
#define str_020c711d (*(char (*)[1])(0x20c711dU))
#define str_020c7123 (*(char (*)[1])(0x20c7123U))
#define str_020c712a (*(char (*)[1])(0x20c712aU))
#define str_020c713f (*(char (*)[1])(0x20c713fU))
#define str_020c7146 (*(char (*)[1])(0x20c7146U))
#define str_020c7150 (*(char (*)[1])(0x20c7150U))
#define str_020c7159 (*(char (*)[1])(0x20c7159U))
#define str_020c7195 (*(char (*)[1])(0x20c7195U))
#define str_020c71a2 (*(char (*)[1])(0x20c71a2U))
#define str_020c71ad (*(char (*)[1])(0x20c71adU))
#define str_020c71c5 (*(char (*)[1])(0x20c71c5U))
#define str_020cc51e (*(char (*)[1])(0x20cc51eU))
#define str_020cc527 (*(char (*)[1])(0x20cc527U))
#define str_020cc535 (*(char (*)[1])(0x20cc535U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define str_020de0ec (*(char volatile (*)[1])(0x20de0ecU))
#define local_52e (*(char (*)[241])(frame + 66))
#define local_43d (*(byte (*)[240])(frame + 307))
#define local_164 (*(byte *)(frame + 1036))
#define local_160 (*(int *)(frame + 1040))
#define abStack_34d (*(byte (*)[489])(frame + 547))
#define abStack_14a (*(byte (*)[242])(frame + 1062))
#define local_58 (*(byte (*)[64])(frame + 1304))
#define local_18 (*(byte * *)(frame + 1368))
#define local_14 (*(byte * *)(frame + 1372))


uint recovered_202ed80(byte *param_1,char *param_2,uint param_3)

{
  unsigned char frame[1424] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uchar uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined3 extraout_var = 0;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar10;
  ulong uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;

  recovered_2026f10();
  local_52e[0] = '\0';
  if (param_3 != 0 && param_2 != (char *)0x0) {
    *param_2 = '\0';
  }
  pbVar7 = &DAT_020c5085;
  if (param_1 != (byte *)0x0) {
    pbVar7 = param_1;
  }
  uVar15 = SUB41(pbVar7,0);
  uVar2 = recovered_2006ec0();
  uVar13 = 0;
  if (CONCAT31(extraout_var,uVar2) < 0x20) {
    uVar13 = CONCAT31(extraout_var,uVar2);
  }
  (&DAT_0214b364)[uVar13 * 0x12] = uVar13;
  puVar6 = &DAT_020c53c6;
  if ((&DAT_0214b320)[uVar13 * 0x12] != 0) {
    puVar6 = &DAT_020c53c1;
  }
  recovered_2030300(str_020c53a8,uVar15);
  iVar9 = DAT_020d9d48;
  if ((iVar9 == 0) || (bVar4 = DAT_020d9d65, (bVar4 & 1) != 0)) {
    recovered_2030300(str_020c53cb,uVar15);
    if (param_3 == 0 || param_2 == (char *)0x0) {
      return 0;
    }
    if ((*param_2 != '\0') && (uVar11 = recovered_2002270(param_2), uVar11 + 1 < param_3)) {
      (param_2 + uVar11)[0] = '\n';
      (param_2 + uVar11)[1] = '\0';
    }
    uVar11 = recovered_2002270(param_2);
    if (param_3 <= uVar11 + 1) {
      return 0;
    }
    cVar3 = 't';
    iVar9 = 0;
    do {
      param_2[iVar9 + uVar11] = cVar3;
      cVar3 = str_020c535b[iVar9 + 1];
      iVar16 = iVar9 + 1;
      if (cVar3 == '\0') break;
      uVar13 = iVar9 + uVar11 + 2;
      iVar9 = iVar16;
    } while (uVar13 < param_3);
    param_2[iVar16 + uVar11] = '\0';
    return 0;
  }
  local_18 = &DAT_020c5084;
  pbVar7 = local_18;
  if (param_1 != (byte *)0x0) {
    pbVar7 = param_1;
    local_18 = param_1;
  }
  do {
    do {
      pbVar8 = pbVar7;
      pbVar7 = pbVar8 + 1;
      bVar4 = *pbVar8;
      uVar13 = (uint)bVar4;
    } while (uVar13 - 9 < 5);
  } while (uVar13 == 0x20);
  local_58[0] = 0;
  if (uVar13 == 0) {
    return 1;
  }
  if ((uVar13 == 0x22) || (uVar13 == 0x27)) {
    bVar4 = *pbVar7;
    pbVar8 = pbVar7;
    if (bVar4 != 0) goto LAB_0202ee6f;
LAB_0202ef70:
    uVar14 = 0;
  }
  else {
    uVar13 = 0;
    if (bVar4 == 0) goto LAB_0202ef70;
LAB_0202ee6f:
    pbVar8 = pbVar8 + 1;
    uVar14 = 0;
    do {
      if (uVar13 == 0) {
        if ((bVar4 - 9 < 0x18) && ((0x80001fU >> (bVar4 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar13 == (int)(char)bVar4) goto LAB_0202ef72;
      if (uVar14 + 1 < 0x40) {
        local_58[uVar14] = bVar4;
        uVar14 = uVar14 + 1;
      }
      bVar4 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar4 != 0);
    pbVar8 = pbVar8 + -1;
  }
LAB_0202ef72:
  local_58[uVar14] = 0;
  for (; ((uint)(*pbVar8) - 9U < 5U || (*pbVar8 == 0x20)); pbVar8 = pbVar8 + 1) {
  }
  if (uVar14 == 0) {
    return 1;
  }
  local_14 = pbVar8;
  iVar9 = recovered_20022a0((char *)local_58,str_020c53eb);
  if ((((((iVar9 == 0) || (iVar9 = recovered_20022a0((char *)local_58,str_020c53f3), iVar9 == 0)) ||
        (iVar9 = recovered_20022a0((char *)local_58,str_020c53fb), iVar9 == 0)) ||
       ((iVar9 = recovered_20022a0((char *)local_58,str_020c5405), iVar9 == 0 ||
        (iVar9 = recovered_20022a0((char *)local_58,str_020c5414), iVar9 == 0)))) ||
      (iVar9 = recovered_20022a0((char *)local_58,str_020c5422), iVar9 == 0)) ||
     (iVar9 = recovered_20022a0((char *)local_58,&DAT_020c5431), iVar9 == 0)) {
LAB_0202f0ba:
    cVar3 = DAT_020d9d6a;
    if (cVar3 == '\x01') {
      pbVar7 = abStack_34d + 1;
      pf_varargs_20044f0__4_((char *)pbVar7,0x60,&DAT_020c5119,(uint)local_18);
      iVar9 = 0;
      while (((uint)(abStack_34d[iVar9 + 1]) - 9U < 5U || (abStack_34d[iVar9 + 1] == 0x20))) {
        iVar9 = iVar9 + 1;
      }
      if (iVar9 != 0) {
        uVar11 = recovered_2002270((char *)(abStack_34d + iVar9 + 1));
        recovered_2001c30(pbVar7,abStack_34d + iVar9 + 1,uVar11 + 1);
      }
      for (uVar11 = recovered_2002270((char *)pbVar7);
          (uVar11 != 0 && (((uint)(abStack_34d[uVar11]) - 9 < 5 || (abStack_34d[uVar11] == 0x20))));
          uVar11 = uVar11 - 1) {
        abStack_34d[uVar11] = 0;
      }
      iVar9 = recovered_20022a0((char *)pbVar7,str_020c70dd);
      if (iVar9 == 0) {
        if (param_3 == 0 || param_2 == (char *)0x0) {
          return 1;
        }
        if ((*param_2 != '\0') && (uVar11 = recovered_2002270(param_2), uVar11 + 1 < param_3)) {
          (param_2 + uVar11)[0] = '\n';
          (param_2 + uVar11)[1] = '\0';
        }
        uVar11 = recovered_2002270(param_2);
        if (param_3 <= uVar11 + 1) {
          return 1;
        }
        pcVar18 = param_2 + uVar11;
        cVar3 = 'n';
        iVar9 = 0;
        do {
          pcVar18[iVar9] = cVar3;
          cVar3 = str_020c70e3[iVar9 + 1];
          iVar16 = iVar9 + 1;
          if (cVar3 == '\0') break;
          uVar13 = iVar9 + uVar11 + 2;
          iVar9 = iVar16;
        } while (uVar13 < param_3);
LAB_0202f9ac:
        pcVar18[iVar16] = '\0';
        return 1;
      }
      iVar9 = recovered_20022a0((char *)pbVar7,str_020c711d);
      if (iVar9 == 0) {
        iVar9 = DAT_020d9d70;
        if (iVar9 != 0) {
          if (param_2 == (char *)0x0) {
            return 1;
          }
          uVar11 = recovered_2002270(param_2);
          if (param_3 <= uVar11 + 1 || param_3 == 0) {
            return 1;
          }
          cVar3 = DAT_020da0e7;
          if (cVar3 == '\0') {
            param_2[uVar11] = '\0';
            return 1;
          }
          pcVar18 = &DAT_020da0e8;
          do {
            param_2[uVar11] = cVar3;
            cVar3 = *pcVar18;
            uVar1 = uVar11 + 1;
            if (cVar3 == '\0') break;
            uVar13 = uVar11 + 2;
            pcVar18 = pcVar18 + 1;
            uVar11 = uVar1;
          } while (uVar13 < param_3);
          param_2[uVar1] = '\0';
          return 1;
        }
        if (param_3 == 0 || param_2 == (char *)0x0) {
          return 1;
        }
        if ((*param_2 != '\0') && (uVar11 = recovered_2002270(param_2), uVar11 + 1 < param_3)) {
          (param_2 + uVar11)[0] = '\n';
          (param_2 + uVar11)[1] = '\0';
        }
        uVar11 = recovered_2002270(param_2);
        if (param_3 <= uVar11 + 1) {
          return 1;
        }
        pcVar18 = param_2 + uVar11;
        cVar3 = '(';
        iVar9 = 0;
        do {
          pcVar18[iVar9] = cVar3;
          cVar3 = (&DAT_020c5755)[iVar9];
          iVar16 = iVar9 + 1;
          if (cVar3 == '\0') break;
          uVar13 = iVar9 + uVar11 + 2;
          iVar9 = iVar16;
        } while (uVar13 < param_3);
        goto LAB_0202f9ac;
      }
      iVar9 = recovered_20022a0((char *)pbVar7,str_020c7123);
      if (iVar9 == 0) {
        DAT_020d9d70 = 0;
        DAT_020da0e7 = 0;
        DAT_020d9d6b = 1;
        iVar9 = DAT_020d9d6c;
        if (iVar9 == 0) {
          cVar3 = DAT_020d9d6a;
          if (cVar3 == '\x01') {
            cVar3 = DAT_020d9f05;
            pcVar12 = str_020cc51e;
            if (cVar3 != '\0') {
              pcVar12 = &DAT_020d9f05;
            }
            pcVar18 = &DAT_020cc533;
            pcVar17 = str_020cc527;
          }
          else {
            cVar3 = str_020d9e14[0];
            pcVar18 = &DAT_020c5359;
            if (cVar3 != '\0') {
              pcVar18 = str_020d9e14;
            }
            cVar3 = DAT_020d9db4;
            pcVar12 = &DAT_020c531e;
            if (cVar3 != '\0') {
              pcVar12 = &DAT_020d9db4;
            }
            pcVar17 = str_020cc535;
          }
          pf_varargs_20044f0__4__4_(str_020de0ec,0x60,pcVar17,(uint)pcVar12,(uint)pcVar18);
        }
        else {
          recovered_2053bd0();
        }
        if (param_3 == 0 || param_2 == (char *)0x0) {
          return 1;
        }
        if ((*param_2 != '\0') && (uVar11 = recovered_2002270(param_2), uVar11 + 1 < param_3)) {
          (param_2 + uVar11)[0] = '\n';
          (param_2 + uVar11)[1] = '\0';
        }
        uVar11 = recovered_2002270(param_2);
        if (param_3 <= uVar11 + 1) {
          return 1;
        }
        pcVar18 = param_2 + uVar11;
        cVar3 = 'n';
        iVar9 = 0;
        do {
          pcVar18[iVar9] = cVar3;
          cVar3 = str_020c712a[iVar9 + 1];
          iVar16 = iVar9 + 1;
          if (cVar3 == '\0') break;
          uVar13 = iVar9 + uVar11 + 2;
          iVar9 = iVar16;
        } while (uVar13 < param_3);
        goto LAB_0202f9ac;
      }
      iVar9 = recovered_20022a0((char *)pbVar7,str_020c713f);
      if ((iVar9 == 0) || (iVar9 = recovered_20022a0((char *)pbVar7,str_020c7146), iVar9 == 0)) {
        uVar13 = recovered_205ead0(param_2,param_3);
        return uVar13 & 0xff;
      }
      iVar9 = recovered_20022a0((char *)pbVar7,&DAT_020c714c);
      if (iVar9 == 0) {
        uVar10 = recovered_205ead0(param_2,param_3);
        if ((char)uVar10 == '\0') {
          return 0;
        }
        recovered_205ebf0();
        return 1;
      }
      iVar9 = recovered_20022a0((char *)pbVar7,str_020c7150);
      if ((iVar9 == 0) || (iVar9 = recovered_20022a0((char *)pbVar7,&DAT_020c7156), iVar9 == 0)) {
        cVar3 = DAT_020d9d6b;
        if (cVar3 == '\x01') {
          recovered_202dd30(param_2,param_3,str_020c7159);
          return 0;
        }
        recovered_205ebf0();
        pcVar18 = str_020c7195;
      }
      else {
        iVar9 = recovered_20022a0((char *)pbVar7,str_020c71a2);
        if (iVar9 != 0) {
          iVar9 = recovered_20022a0((char *)pbVar7,&DAT_020c71a9);
          pbVar7 = local_18;
          if (iVar9 != 0) {
            uVar11 = recovered_2002270((char *)local_18);
            iVar9 = DAT_020d9d70;
            if (uVar11 + 1 + iVar9 < 0x2000) {
              recovered_2001b70(&DAT_020da0e7 + iVar9,pbVar7,uVar11);
              iVar9 = DAT_020d9d70;
              DAT_020d9d70 = iVar9 + 1 + uVar11;
              (&DAT_020da0e7)[uVar11 + iVar9] = 10;
              iVar9 = DAT_020d9d70;
              (&DAT_020da0e7)[iVar9] = 0;
              DAT_020d9d6b = 1;
              recovered_202c9e0();
              return 1;
            }
            recovered_202dd30(param_2,param_3,str_020c71c5);
            return 0;
          }
        }
        recovered_205ebf0();
        pcVar18 = str_020c71ad;
      }
      goto LAB_0202faee;
    }
    pcVar18 = recovered_20024f0((char *)local_58,'/');
    if (pcVar18 != (char *)0x0) {
      pbVar7 = abStack_14a + 1;
      recovered_2030400((char *)local_58,str_020d9e14,(char *)pbVar7);
      uVar13 = recovered_2030680((char *)pbVar7,(char *)(abStack_34d + 1));
      pcVar18 = str_020c544e;
      if ((((char)uVar13 != '\0') && (pcVar18 = str_020c546c, local_160 != 2)) &&
         ((local_164 & 2) == 0)) {
        pf_varargs_20044f0__4_(local_52e,0xf1,&DAT_020c5119,(uint)pbVar7);
        pbVar8 = abStack_14a + 2;
        do {
          bVar4 = pbVar8[-1];
          if ((bVar4 == 0x2f) || (bVar4 == 0x5c)) {
            pbVar7 = pbVar8;
          }
          else if (bVar4 == 0) goto code_r0x0202f385;
          pbVar8 = pbVar8 + 1;
        } while( true );
      }
      goto LAB_0202f66b;
    }
    goto LAB_0202f399;
  }
  iVar9 = DAT_020d9d4c;
  if (((iVar9 == 1) && (iVar9 = DAT_020d9d48, iVar9 != 0)) &&
     (bVar4 = DAT_020d9d65, (bVar4 & 1) == 0)) {
    recovered_202cf30();
  }
  iVar9 = DAT_020d9d6c;
  if (iVar9 == 0) goto LAB_0202f0ba;
  pbVar7 = local_18;
  do {
    do {
      pbVar8 = pbVar7;
      pbVar7 = pbVar8 + 1;
      bVar4 = *pbVar8;
      uVar13 = (uint)bVar4;
    } while (uVar13 - 9 < 5);
  } while (uVar13 == 0x20);
  local_43d[0] = 0;
  if (uVar13 == 0) {
LAB_0202fb00:
    pbVar7 = abStack_14a + 1;
    pf_varargs_20044f0__4_((char *)pbVar7,0x80,&DAT_020c5119,(uint)local_18);
    iVar9 = 0;
    while (((uint)(abStack_14a[iVar9 + 1]) - 9U < 5U || (abStack_14a[iVar9 + 1] == 0x20))) {
      iVar9 = iVar9 + 1;
    }
    if (iVar9 != 0) {
      uVar11 = recovered_2002270((char *)(abStack_14a + iVar9 + 1));
      recovered_2001c30(pbVar7,abStack_14a + iVar9 + 1,uVar11 + 1);
    }
    for (uVar11 = recovered_2002270((char *)pbVar7);
        (uVar11 != 0 && (((uint)(abStack_14a[uVar11]) - 9 < 5 || (abStack_14a[uVar11] == 0x20))));
        uVar11 = uVar11 - 1) {
      abStack_14a[uVar11] = 0;
    }
    iVar9 = DAT_020d9d6c;
    if (iVar9 == 3) {
      if (abStack_14a[1] != 0) {
        pf_varargs_20044f0__4_(&DAT_020d9dd4,0x40,&DAT_020c5119,(uint)pbVar7);
        DAT_020d9d64 = 1;
        DAT_020d9d6c = 0;
        DAT_020d9d67 = 1;
        cVar3 = DAT_020d9db4;
        puVar6 = &DAT_020c531e;
        if (cVar3 != '\0') {
          puVar6 = &DAT_020d9db4;
        }
        pf_varargs_20044f0__4_(str_020d9e14,0xf1,str_020c5583,(uint)puVar6);
        iVar9 = DAT_020d9d60;
        if (iVar9 < 0) {
          iVar9 = DAT_020d9d44;
          DAT_020d9d60 = iVar9;
          if (-1 < iVar9) goto LAB_0202fd14;
        }
        else {
LAB_0202fd14:
          uVar13 = DAT_020d9d50;
          uVar14 = 0x180000;
          if (uVar13 != 0) {
            uVar14 = uVar13;
          }
          pcVar18 = &DAT_020c69e5;
          cVar3 = DAT_020d9d69;
          if (cVar3 == '\0') {
            pcVar18 = str_020c70d7;
          }
          uVar13 = pf_varargs_20044f0__4__4__4__4__4_
                             ((char *)(abStack_34d + 1),0x200,str_020c7086,uVar14,(uint)pcVar18,
                              0x20d9d74,0x20d9db4,0x20d9dd4);
          if (0 < (int)uVar13) {
            if (0x1fe < uVar13) {
              uVar13 = 0x1ff;
            }
            iVar9 = DAT_020d9d60;
            uVar13 = recovered_202b490(iVar9,str_020c699b,abStack_34d + 1,uVar13);
            if (uVar13 != 0) goto LAB_0202fdfc;
          }
        }
        if (param_3 != 0 && param_2 != (char *)0x0) {
          if ((*param_2 != '\0') && (uVar11 = recovered_2002270(param_2), uVar11 + 1 < param_3)) {
            (param_2 + uVar11)[0] = '\n';
            (param_2 + uVar11)[1] = '\0';
          }
          uVar11 = recovered_2002270(param_2);
          if (uVar11 + 1 < param_3) {
            cVar3 = 't';
            iVar9 = 0;
            do {
              param_2[iVar9 + uVar11] = cVar3;
              cVar3 = str_020c7048[iVar9 + 1];
              iVar16 = iVar9 + 1;
              if (cVar3 == '\0') break;
              uVar13 = iVar9 + uVar11 + 2;
              iVar9 = iVar16;
            } while (uVar13 < param_3);
            param_2[iVar16 + uVar11] = '\0';
          }
        }
LAB_0202fdfc:
        bVar4 = recovered_205e0e0();
        if (bVar4 != 0) {
          DAT_020d9d66 = 0;
          iVar9 = DAT_020d9d5c;
          recovered_205e700(iVar9);
        }
        if (param_3 != 0 && param_2 != (char *)0x0) {
          if ((*param_2 != '\0') && (uVar11 = recovered_2002270(param_2), uVar11 + 1 < param_3)) {
            (param_2 + uVar11)[0] = '\n';
            (param_2 + uVar11)[1] = '\0';
          }
          uVar11 = recovered_2002270(param_2);
          if (uVar11 + 1 < param_3) {
            cVar3 = 'T';
            iVar9 = 0;
            do {
              param_2[iVar9 + uVar11] = cVar3;
              cVar3 = str_020c7071[iVar9 + 1];
              iVar16 = iVar9 + 1;
              if (cVar3 == '\0') break;
              uVar13 = iVar9 + uVar11 + 2;
              iVar9 = iVar16;
            } while (uVar13 < param_3);
            param_2[iVar16 + uVar11] = '\0';
          }
        }
        cVar3 = DAT_020d9d6a;
        if (cVar3 == '\x01') {
          cVar3 = DAT_020d9f05;
          pcVar12 = str_020cc51e;
          if (cVar3 != '\0') {
            pcVar12 = &DAT_020d9f05;
          }
          pcVar18 = &DAT_020cc533;
          cVar3 = DAT_020d9d6b;
          if (cVar3 == '\0') {
            pcVar18 = &DAT_020c5084;
          }
          pcVar17 = str_020cc527;
        }
        else {
          cVar3 = str_020d9e14[0];
          pcVar18 = &DAT_020c5359;
          if (cVar3 != '\0') {
            pcVar18 = str_020d9e14;
          }
          cVar3 = DAT_020d9db4;
          pcVar12 = &DAT_020c531e;
          if (cVar3 != '\0') {
            pcVar12 = &DAT_020d9db4;
          }
          pcVar17 = str_020cc535;
        }
        pf_varargs_20044f0__4__4_(str_020de0ec,0x60,pcVar17,(uint)pcVar12,(uint)pcVar18);
        return 1;
      }
      if (param_3 == 0 || param_2 == (char *)0x0) goto LAB_0203004b;
      if ((*param_2 != '\0') && (uVar11 = recovered_2002270(param_2), uVar11 + 1 < param_3)) {
        (param_2 + uVar11)[0] = '\n';
        (param_2 + uVar11)[1] = '\0';
      }
      uVar11 = recovered_2002270(param_2);
      if (param_3 <= uVar11 + 1) goto LAB_0203004b;
      pcVar18 = param_2 + uVar11;
      cVar3 = 't';
      iVar9 = 0;
      do {
        pcVar18[iVar9] = cVar3;
        cVar3 = str_020c7023[iVar9 + 1];
        iVar16 = iVar9 + 1;
        if (cVar3 == '\0') break;
        uVar13 = iVar9 + uVar11 + 2;
        iVar9 = iVar16;
      } while (uVar13 < param_3);
    }
    else if (iVar9 == 2) {
      if (abStack_14a[1] != 0) {
        pbVar8 = abStack_14a + 2;
        do {
          if (((((byte)(abStack_14a[1] - 0x3a) < 0xf6) &&
               ((byte)((abStack_14a[1] & 0xdf) + 0xa5) < 0xe6)) && (1 < abStack_14a[1] - 0x2d)) &&
             (abStack_14a[1] != 0x5f)) goto LAB_0202fc21;
          abStack_14a[1] = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (abStack_14a[1] != 0);
        pf_varargs_20044f0__4_(&DAT_020d9db4,0x20,&DAT_020c5119,(uint)pbVar7);
        DAT_020d9d68 = 1;
        cVar3 = DAT_020d9db4;
        puVar6 = &DAT_020c531e;
        if (cVar3 != '\0') {
          puVar6 = &DAT_020d9db4;
        }
        pf_varargs_20044f0__4_(str_020d9e14,0xf1,str_020c5583,(uint)puVar6);
        DAT_020d9d6c = 3;
        goto LAB_0202ff4b;
      }
LAB_0202fc21:
      if (param_3 == 0 || param_2 == (char *)0x0) goto LAB_0203004b;
      if ((*param_2 != '\0') && (uVar11 = recovered_2002270(param_2), uVar11 + 1 < param_3)) {
        (param_2 + uVar11)[0] = '\n';
        (param_2 + uVar11)[1] = '\0';
      }
      uVar11 = recovered_2002270(param_2);
      if (param_3 <= uVar11 + 1) goto LAB_0203004b;
      pcVar18 = param_2 + uVar11;
      cVar3 = 't';
      iVar9 = 0;
      do {
        pcVar18[iVar9] = cVar3;
        cVar3 = str_020c6fe4[iVar9 + 1];
        iVar16 = iVar9 + 1;
        if (cVar3 == '\0') break;
        uVar13 = iVar9 + uVar11 + 2;
        iVar9 = iVar16;
      } while (uVar13 < param_3);
    }
    else {
      if (iVar9 != 1) {
        recovered_202cf30();
        return 1;
      }
      if (abStack_14a[1] != 0) {
        pf_varargs_20044f0__4_(&DAT_020d9d74,0x40,&DAT_020c5119,(uint)pbVar7);
        DAT_020d9d6c = 2;
LAB_0202ff4b:
        recovered_2053bd0();
        return 1;
      }
      if (param_3 == 0 || param_2 == (char *)0x0) goto LAB_0203004b;
      if ((*param_2 != '\0') && (uVar11 = recovered_2002270(param_2), uVar11 + 1 < param_3)) {
        (param_2 + uVar11)[0] = '\n';
        (param_2 + uVar11)[1] = '\0';
      }
      uVar11 = recovered_2002270(param_2);
      if (param_3 <= uVar11 + 1) goto LAB_0203004b;
      pcVar18 = param_2 + uVar11;
      cVar3 = 't';
      iVar9 = 0;
      do {
        pcVar18[iVar9] = cVar3;
        cVar3 = str_020c6fbf[iVar9 + 1];
        iVar16 = iVar9 + 1;
        if (cVar3 == '\0') break;
        uVar13 = iVar9 + uVar11 + 2;
        iVar9 = iVar16;
      } while (uVar13 < param_3);
    }
    pcVar18[iVar16] = '\0';
LAB_0203004b:
    recovered_2053bd0();
    return 0;
  }
  if ((uVar13 == 0x22) || (uVar13 == 0x27)) {
    bVar4 = *pbVar7;
    pbVar8 = pbVar7;
  }
  else {
    uVar13 = 0;
  }
  if (bVar4 == 0) {
    uVar14 = 0;
  }
  else {
    pbVar8 = pbVar8 + 1;
    uVar14 = 0;
    do {
      if (uVar13 == 0) {
        if ((bVar4 - 9 < 0x18) && ((0x80001fU >> (bVar4 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar13 == (int)(char)bVar4) goto LAB_0202fa77;
      if (uVar14 + 1 < 0x40) {
        local_43d[uVar14] = bVar4;
        uVar14 = uVar14 + 1;
      }
      bVar4 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar4 != 0);
    pbVar8 = pbVar8 + -1;
  }
LAB_0202fa77:
  local_43d[uVar14] = 0;
  for (; ((uint)(*pbVar8) - 9U < 5U || (*pbVar8 == 0x20)); pbVar8 = pbVar8 + 1) {
  }
  if ((uVar14 == 0) || (iVar9 = recovered_20022a0((char *)local_43d,&DAT_020c5353), iVar9 != 0))
  goto LAB_0202fb00;
  for (; (uVar13 = (uint)*pbVar8, uVar13 - 9 < 5 || (uVar13 == 0x20)); pbVar8 = pbVar8 + 1) {
  }
  if (uVar13 != 0) goto LAB_0202fb00;
LAB_0202fad7:
  DAT_020d9d4c = 0;
  pcVar18 = str_020c5434;
LAB_0202faee:
  recovered_202dd30(param_2,param_3,pcVar18);
  return 1;
code_r0x0202f385:
  puVar6 = &DAT_020c5119;
  pf_varargs_20044f0__4_((char *)local_58,0x40,&DAT_020c5119,(uint)pbVar7);
LAB_0202f399:
  iVar9 = recovered_20022a0((char *)local_58,&DAT_020c5353);
  if (iVar9 != 0) {
    iVar9 = recovered_20022a0((char *)local_58,&DAT_020c547f);
    if (iVar9 == 0) {
      recovered_202dd30(param_2,param_3,str_020c5484);
      pcVar18 = str_020c5514;
    }
    else {
      iVar9 = recovered_20022a0((char *)local_58,&DAT_020c555e);
      if (iVar9 == 0) {
        uVar13 = recovered_20308e0(local_14,param_2,param_3);
        return uVar13;
      }
      iVar9 = recovered_20022a0((char *)local_58,str_020c5562);
      if (iVar9 != 0) {
        iVar9 = recovered_20022a0((char *)local_58,&DAT_020c5569);
        if (iVar9 == 0) {
          uVar13 = recovered_2030b50(local_14,param_2,param_3);
          return uVar13;
        }
        iVar9 = recovered_20022a0((char *)local_58,str_020c556c);
        if (iVar9 == 0) {
          uVar13 = recovered_2031030(local_14,param_2,param_3);
          return uVar13;
        }
        iVar9 = recovered_20022a0((char *)local_58,&DAT_020c5572);
        if (iVar9 == 0) {
          uVar13 = recovered_2031a60(local_14,param_2,param_3);
          return uVar13;
        }
        iVar9 = recovered_20022a0((char *)local_58,str_020c53eb);
        if (iVar9 == 0) {
          uVar13 = recovered_2032470(local_14,param_2,param_3);
          return uVar13;
        }
        iVar9 = recovered_20022a0((char *)local_58,str_020c53f3);
        if (iVar9 == 0) {
          uVar13 = recovered_20328a0(local_14,param_2,param_3);
          return uVar13;
        }
        iVar9 = recovered_20022a0((char *)local_58,str_020c53fb);
        if (iVar9 == 0) {
          uVar13 = recovered_2032c00(local_14,param_2,param_3);
          return uVar13;
        }
        pcVar18 = str_020c5405;
        iVar9 = recovered_20022a0((char *)local_58,str_020c5405);
        if (iVar9 != 0) {
          pcVar18 = str_020c5414;
          iVar9 = recovered_20022a0((char *)local_58,str_020c5414);
          if (iVar9 != 0) {
            pcVar18 = str_020c5422;
            iVar9 = recovered_20022a0((char *)local_58,str_020c5422);
            if (iVar9 != 0) {
              iVar9 = recovered_20022a0((char *)local_58,&DAT_020c5577);
              if (iVar9 == 0) {
                uVar13 = recovered_20335d0(local_14,param_2,param_3);
                return uVar13;
              }
              iVar9 = recovered_20022a0((char *)local_58,&DAT_020c557c);
              if (iVar9 == 0) {
                uVar13 = recovered_2034a10(local_14,param_2,param_3);
                return uVar13;
              }
              iVar9 = recovered_20022a0((char *)local_58,&DAT_020c5580);
              if (iVar9 == 0) {
                bVar5 = recovered_202ddc0(&local_14,abStack_14a + 1,0xf1);
                if (!bVar5) {
                  cVar3 = DAT_020d9db4;
                  puVar6 = &DAT_020c531e;
                  if (cVar3 != '\0') {
                    puVar6 = &DAT_020d9db4;
                  }
                  pf_varargs_20044f0__4_((char *)(abStack_14a + 1),0xf1,str_020c5583,(uint)puVar6);
                }
                pbVar7 = local_43d;
                recovered_2030400((char *)(abStack_14a + 1),str_020d9e14,(char *)pbVar7);
                uVar13 = recovered_2030680((char *)pbVar7,(char *)(abStack_34d + 1));
                if (((char)uVar13 != '\0') && ((local_160 == 2 || ((local_164 & 2) != 0)))) {
                  pf_varargs_20044f0__4_(str_020d9e14,0xf1,&DAT_020c5119,(uint)pbVar7);
                  recovered_2035170();
                  return 1;
                }
                pcVar18 = str_020c558c;
              }
              else {
                iVar9 = recovered_20022a0((char *)local_58,&DAT_020c55a6);
                if (iVar9 == 0) {
                  uVar13 = recovered_2035200(local_14,param_2,param_3);
                  return uVar13;
                }
                iVar9 = recovered_20022a0((char *)local_58,str_020c55a9);
                if (iVar9 == 0) {
                  uVar13 = recovered_20358a0(local_14,param_2,param_3);
                  return uVar13;
                }
                iVar9 = recovered_20022a0((char *)local_58,str_020c55af);
                if (iVar9 == 0) {
                  uVar13 = recovered_2035f80(local_14,param_2,param_3);
                  return uVar13;
                }
                iVar9 = recovered_20022a0((char *)local_58,&DAT_020c55b5);
                if (iVar9 == 0) {
                  uVar13 = recovered_20364d0(local_14,param_2,param_3);
                  return uVar13;
                }
                iVar9 = recovered_20022a0((char *)local_58,&DAT_020c55b8);
                if (iVar9 == 0) {
                  uVar13 = recovered_2036b20(local_14,param_2,param_3);
                  return uVar13;
                }
                iVar9 = recovered_20022a0((char *)local_58,&DAT_020c55bc);
                if (iVar9 == 0) {
                  recovered_20372f0(local_14,param_2,param_3);
                  return 1;
                }
                iVar9 = recovered_20022a0((char *)local_58,&DAT_020c5431);
                if (iVar9 == 0) {
                  uVar13 = recovered_20376e0(local_14,param_2,param_3);
                  return uVar13;
                }
                iVar9 = recovered_20022a0((char *)local_58,&DAT_020c55c1);
                if (iVar9 == 0) {
                  pbVar7 = local_14;
                  if (local_14 != (byte *)0x0) {
                    for (; (uVar13 = (uint)*pbVar7, uVar13 - 9 < 5 || (uVar13 == 0x20));
                        pbVar7 = pbVar7 + 1) {
                    }
                    if (uVar13 != 0) {
                      uVar13 = recovered_202ed80(pbVar7,param_2,param_3);
                      return uVar13;
                    }
                  }
                  recovered_202dd30(param_2,param_3,str_020c55c6);
                  return 0;
                }
                iVar9 = recovered_20022a0((char *)local_58,&DAT_020c55da);
                if (iVar9 == 0) {
                  uVar13 = recovered_2037cc0(local_14,param_2,param_3);
                  return uVar13;
                }
                iVar9 = recovered_20022a0((char *)local_58,&DAT_020c55df);
                if (iVar9 == 0) {
                  uVar13 = recovered_2038330(local_14,param_2,param_3);
                  return uVar13;
                }
                pcVar18 = (char *)0x0;
                if (local_52e[0] != '\0') {
                  pcVar18 = local_52e;
                }
                cVar3 = recovered_202ded0((char *)local_58,(char *)local_14,pcVar18,param_2,param_3)
                ;
                if (CONCAT31(extraout_var_00,cVar3) != 0) {
                  return (uint)(CONCAT31(extraout_var_00,cVar3) == 1);
                }
                pbVar7 = local_58;
                bVar5 = recovered_2038fb0((char *)pbVar7);
                if ((bVar5) && (iVar9 = recovered_2039080(param_2,param_3), iVar9 != 0)) {
                  return 0;
                }
                pcVar18 = str_020c5392;
              }
LAB_0202f66b:
              pf_varargs_202ecc0__4_(param_2,param_3,pcVar18,(uint)pbVar7);
              return 0;
            }
          }
        }
        uVar13 = recovered_2033040(local_14,(byte *)param_3,pcVar18,(uint)puVar6);
        return uVar13;
      }
      pcVar18 = &DAT_020d9db4;
    }
    goto LAB_0202faee;
  }
  goto LAB_0202fad7;
}
#undef DAT_020c5084
#undef DAT_020c5085
#undef DAT_020c5119
#undef DAT_020c531e
#undef DAT_020c5353
#undef DAT_020c5359
#undef DAT_020c53c1
#undef DAT_020c53c6
#undef DAT_020c5431
#undef DAT_020c547f
#undef DAT_020c555e
#undef DAT_020c5569
#undef DAT_020c5572
#undef DAT_020c5577
#undef DAT_020c557c
#undef DAT_020c5580
#undef DAT_020c55a6
#undef DAT_020c55b5
#undef DAT_020c55b8
#undef DAT_020c55bc
#undef DAT_020c55c1
#undef DAT_020c55da
#undef DAT_020c55df
#undef DAT_020c5755
#undef DAT_020c69e5
#undef DAT_020c714c
#undef DAT_020c7156
#undef DAT_020c71a9
#undef DAT_020cc533
#undef DAT_020d9d44
#undef DAT_020d9d48
#undef DAT_020d9d4c
#undef DAT_020d9d50
#undef DAT_020d9d5c
#undef DAT_020d9d60
#undef DAT_020d9d64
#undef DAT_020d9d65
#undef DAT_020d9d66
#undef DAT_020d9d67
#undef DAT_020d9d68
#undef DAT_020d9d69
#undef DAT_020d9d6a
#undef DAT_020d9d6b
#undef DAT_020d9d6c
#undef DAT_020d9d70
#undef DAT_020d9d74
#undef DAT_020d9db4
#undef DAT_020d9dd4
#undef DAT_020d9f05
#undef DAT_020da0e7
#undef DAT_020da0e8
#undef DAT_0214b320
#undef DAT_0214b364
#undef str_020c535b
#undef str_020c5392
#undef str_020c53a8
#undef str_020c53cb
#undef str_020c53eb
#undef str_020c53f3
#undef str_020c53fb
#undef str_020c5405
#undef str_020c5414
#undef str_020c5422
#undef str_020c5434
#undef str_020c544e
#undef str_020c546c
#undef str_020c5484
#undef str_020c5514
#undef str_020c5562
#undef str_020c556c
#undef str_020c5583
#undef str_020c558c
#undef str_020c55a9
#undef str_020c55af
#undef str_020c55c6
#undef str_020c699b
#undef str_020c6fbf
#undef str_020c6fe4
#undef str_020c7023
#undef str_020c7048
#undef str_020c7071
#undef str_020c7086
#undef str_020c70d7
#undef str_020c70dd
#undef str_020c70e3
#undef str_020c711d
#undef str_020c7123
#undef str_020c712a
#undef str_020c713f
#undef str_020c7146
#undef str_020c7150
#undef str_020c7159
#undef str_020c7195
#undef str_020c71a2
#undef str_020c71ad
#undef str_020c71c5
#undef str_020cc51e
#undef str_020cc527
#undef str_020cc535
#undef str_020d9e14
#undef str_020de0ec
#undef local_52e
#undef local_43d
#undef local_164
#undef local_160
#undef abStack_34d
#undef abStack_14a
#undef local_58
#undef local_18
#undef local_14
