#include "functions.h"
#undef DAT_404e45ce
#define DAT_404e45ce (*(uint8_t *)(0x404e45ceU))
#undef DAT_404e45d0
#define DAT_404e45d0 (*(uint8_t *)(0x404e45d0U))
#undef DAT_404e467b
#define DAT_404e467b (*(uint8_t *)(0x404e467bU))
#undef DAT_404e490a
#define DAT_404e490a (*(uint8_t *)(0x404e490aU))
#undef DAT_404e5053
#define DAT_404e5053 (*(uint8_t *)(0x404e5053U))
#undef DAT_404ebab7
#define DAT_404ebab7 (*(uint8_t *)(0x404ebab7U))
#undef DAT_404ebb2a
#define DAT_404ebb2a (*(uint8_t *)(0x404ebb2aU))
#undef DAT_404fa174
#define DAT_404fa174 (*(uint32_t volatile *)(0x404fa174U))
#undef str_404e6042
#define str_404e6042 (*(char (*)[1])(0x404e6042U))
#undef str_404e629b
#define str_404e629b (*(char (*)[1])(0x404e629bU))
#undef str_404e678e
#define str_404e678e (*(char (*)[1])(0x404e678eU))
#undef str_404ebaba
#define str_404ebaba (*(char (*)[1])(0x404ebabaU))
#undef str_404ebad9
#define str_404ebad9 (*(char (*)[1])(0x404ebad9U))
#undef str_404ebaf2
#define str_404ebaf2 (*(char (*)[1])(0x404ebaf2U))
#undef str_404ebb08
#define str_404ebb08 (*(char (*)[1])(0x404ebb08U))
#undef str_404ebb2e
#define str_404ebb2e (*(char (*)[1])(0x404ebb2eU))
#undef str_404fa22c
#define str_404fa22c (*(char volatile (*)[1])(0x404fa22cU))
#define auStack_115 (*(uchar (*)[245])(frame + 69675))
#define local_ff14 (*(byte (*)[241])(frame + 4652))
#define local_fe23 (*(char (*)[243])(frame + 4893))
#define local_fd30 (*(uint *)(frame + 5136))
#define local_fd2c (*(byte (*)[4])(frame + 5140))
#define local_fd28 (*(int (*)[16005])(frame + 5144))
#define local_130 (*(uint *)(frame + 69648))
#define local_12c (*(uint *)(frame + 69652))
#define local_128 (*(int *)(frame + 69656))
#define local_11c (*(char * *)(frame + 69668))
#define uStack_1112c (*(uint *)(frame + 20))
#define uStack_11124 (*(uint *)(frame + 28))
#define iStack_11118 (*(int *)(frame + 40))
#define iStack_11114 (*(int *)(frame + 44))
#define uStack_11120 (*(uint *)(frame + 32))
#define uStack_1111c (*(undefined4 *)(frame + 36))
#define acStack_101ed (*(char (*)[241])(frame + 3923))
#define uStack_100fc (*(uint *)(frame + 4164))
#define uStack_1110c (*(uint *)(frame + 52))
#define acStack_110fd (*(char (*)[3856])(frame + 67))
#define acStack_100f6 (*(char (*)[241])(frame + 4170))
#define acStack_10005 (*(char (*)[241])(frame + 4411))
#define acStack_314 (*(char (*)[484])(frame + 69164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x40445ae8
 */

undefined4 recovered_40445ae8(byte *param_1,char *param_2,uint param_3)

{
  unsigned char frame[69984] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  char cVar3;
  uchar uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  bool bVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  uint unaff_r5;

  uStack_11120 = 0;
  uStack_1112c = 0;
  uStack_1110c = 0;
  iStack_11114 = 0;
  iStack_11118 = 0;
  bVar1 = false;
LAB_40445b3c:
  bVar2 = true;
LAB_40445b40:
  bVar9 = bVar2;
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_404e45d0;
  }
  else {
    for (; ((uint)(*param_1) - 9 < 5 || (*param_1 == 0x20)); param_1 = param_1 + 1) {
    }
  }
  uVar10 = 0;
  acStack_101ed[0] = '\0';
  uVar12 = (uint)*param_1;
  if (uVar12 == 0x22 || uVar12 == 0x27) {
    param_1 = param_1 + 1;
    uVar10 = uVar12;
    uVar12 = (uint)*param_1;
LAB_40445ba0:
    if (uVar12 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      param_1 = param_1 + 1;
      do {
        if (uVar10 == 0) {
          if ((uVar12 - 9 < 0x18) &&
             (unaff_r5 = 0x80001f, pbVar14 = param_1, (1 << (uVar12 - 9 & 0xff) & 0x80001fU) != 0))
          break;
        }
        else if (uVar10 == (int)(char)uVar12) goto LAB_40445c0c;
        if (uVar5 + 1 < 0xf1) {
          acStack_101ed[uVar5] = (char)uVar12;
          uVar5 = uVar5 + 1;
        }
        pbVar14 = param_1 + 1;
        uVar12 = (uint)*param_1;
        param_1 = pbVar14;
      } while (uVar12 != 0);
      param_1 = pbVar14 + -1;
    }
LAB_40445c0c:
    acStack_101ed[uVar5] = '\0';
    for (; ((uint)(*param_1) - 9 < 5 || (*param_1 == 0x20)); param_1 = param_1 + 1) {
    }
    if (uVar5 == 0) goto LAB_40445e28;
    if (bVar9) goto code_r0x40445c44;
    goto LAB_40445c90;
  }
  if (uVar12 != 0) goto LAB_40445ba0;
LAB_40445e28:
  uStack_11124 = uStack_11120;
  if (uStack_11120 == 0) {
    recovered_40404a88(acStack_110fd,0xf1,&DAT_404e467b,0x404fa22c);
    uStack_11124 = 1;
  }
  if (uStack_11120 < 2) {
    uStack_11120 = 1;
  }
  uVar10 = 0;
  uStack_1110c = uStack_1112c | uStack_1110c;
  uStack_1111c = 1;
  goto LAB_40445ee8;
code_r0x40445c44:
  iVar6 = recovered_40402544(acStack_101ed,&DAT_404ebab7);
  bVar2 = false;
  if (iVar6 == 0) goto LAB_40445b40;
  iVar6 = recovered_40402544(acStack_101ed,str_404e678e);
  if (iVar6 == 0) {
    if (param_2 != (char *)0x0) {
      unaff_r5 = param_3;
    }
    if (param_2 != (char *)0x0 && unaff_r5 != 0) {
      if (*param_2 != '\0') {
        uVar8 = recovered_4040251c(param_2);
        if (uVar8 + 1 < unaff_r5) {
          param_2[uVar8 + 1] = '\0';
          param_2[uVar8] = '\n';
        }
      }
      uVar8 = recovered_4040251c(param_2);
      if (uVar8 + 1 < unaff_r5) {
        cVar3 = 'u';
        pcVar11 = str_404ebaba;
        goto LAB_40446340;
      }
    }
    return 1;
  }
  if ((acStack_101ed[0] != '-') || (acStack_101ed[1] == '\0')) {
LAB_40445c90:
    if (uStack_11120 == 0x10) {
      if (param_2 != (char *)0x0) {
        unaff_r5 = param_3;
      }
      if (param_2 == (char *)0x0 || unaff_r5 == 0) {
        return 0;
      }
      if (*param_2 != '\0') {
        uVar8 = recovered_4040251c(param_2);
        if (uVar8 + 1 < unaff_r5) {
          param_2[uVar8 + 1] = '\0';
          param_2[uVar8] = '\n';
        }
      }
      uVar8 = recovered_4040251c(param_2);
      if (unaff_r5 <= uVar8 + 1) {
        return 0;
      }
      cVar3 = 'l';
      pcVar11 = str_404ebaf2;
      goto LAB_40446298;
    }
    recovered_40404a88
              (acStack_110fd + uStack_11120 * 0xf1,0xf1,&DAT_404e467b,(uint)acStack_101ed);
    uStack_11120 = uStack_11120 + 1;
    bVar2 = bVar9;
    goto LAB_40445b40;
  }
  pcVar11 = acStack_101ed + 1;
switchD_40445cf8_caseD_31:
  pcVar7 = pcVar11 + 1;
  cVar3 = *pcVar11;
  pcVar11 = pcVar7;
  switch((uintptr_t)(cVar3)) {
  case '1':
    goto switchD_40445cf8_caseD_31;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case ';':
  case '<':
  case '=':
  case '>':
  case '?':
  case '@':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'b':
  case 'c':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
    goto switchD_40445cf8_caseD_32;
  case 'A':
    uStack_1110c = 1;
    goto switchD_40445cf8_caseD_31;
  case 'F':
    iStack_11118 = 1;
    goto switchD_40445cf8_caseD_31;
  case 'a':
    uStack_1112c = 1;
    goto switchD_40445cf8_caseD_31;
  case 'd':
    bVar1 = true;
    goto switchD_40445cf8_caseD_31;
  case 'l':
    iStack_11114 = 1;
    goto switchD_40445cf8_caseD_31;
  default:
    break;
  }
  if (cVar3 != '\0') {
switchD_40445cf8_caseD_32:
    recovered_4043df44(param_2,param_3,str_404ebad9,(int)cVar3);
    return 0;
  }
  unaff_r5 = uStack_1110c;
  goto LAB_40445b3c;
LAB_40445ee8:
  uStack_100fc = 0;
  recovered_4043f944(acStack_110fd + uVar10 * 0xf1,str_404fa22c,acStack_10005);
  uVar12 = recovered_4043fc08(acStack_10005,acStack_314);
  if (uVar12 == 0) {
    pcVar11 = str_404ebb08;
LAB_40445f74:
    recovered_4043df44(param_2,param_3,pcVar11,(uint)acStack_10005);
    uStack_1111c = 0;
  }
  else {
    if (1 < uStack_11124) {
      recovered_4043df44(param_2,param_3,&DAT_404ebb2a,(uint)acStack_10005);
    }
    if (local_128 == 2) {
      if (!bVar1) {
LAB_40445fb4:
        if ((acStack_10005[0] == '\0') ||
           (iVar6 = recovered_40402544(acStack_10005,&DAT_404e490a), iVar6 == 0)) {
          recovered_40404a88(acStack_100f6,0xf1,str_404e6042);
        }
        else {
          recovered_40404a88(acStack_100f6,0xf1,str_404e629b,(uint)acStack_10005);
        }
        recovered_40401c1c(local_ff14,0,0xfc00);
        iVar6 = DAT_404fa174;
        uVar12 = recovered_40439b88(iVar6,acStack_100f6,(char *)local_ff14,0x80,&uStack_100fc);
        if (uVar12 == 0) {
          pcVar11 = str_404ebb2e;
          goto LAB_40445f74;
        }
        if (0x80 < uStack_100fc) {
          uStack_100fc = 0x80;
        }
        if (uStack_1112c != 0) {
          recovered_4048df94(param_2,param_3,&DAT_404e45ce,0,1,iStack_11114,iStack_11118);
          recovered_4048df94(param_2,param_3,&DAT_404e5053,0,1,iStack_11114,iStack_11118);
        }
        if (uStack_100fc != 0) {
          uVar12 = 0;
          do {
            local_11c = (char *)0x0;
            iVar6 = uVar12 * 0x1f8;
            if (local_fe23[iVar6] != '\0') {
              recovered_40438654((int)acStack_100f6,auStack_115);
              uVar4 = recovered_40438874(local_fe23 + iVar6,(char *)auStack_115,(uint *)&local_11c);
              if ((uVar4 != '\0') && (cVar3 = *local_11c, pcVar11 = local_11c, cVar3 != '\0')) {
                while (cVar3 != '\0') {
                  if (cVar3 == '/' || cVar3 == '\\') goto LAB_40446118;
                  cVar3 = pcVar11[1];
                  pcVar11 = pcVar11 + 1;
                }
                uVar5 = uStack_1110c;
                if (uStack_1110c == 0) {
                  uVar5 = (uint)local_ff14[iVar6];
                }
                if (uStack_1110c != 0 || uVar5 != 0x2e) {
                  uVar5 = 1;
                  if (local_fd28[uVar12 * 0x7e] != 2) {
                    uVar5 = (local_fd2c[iVar6] & 3) >> 1;
                  }
                  recovered_4048df94(param_2,param_3,(char *)(local_ff14 + iVar6),
                                     *(uint *)(local_fe23 + iVar6 + 0xf3),uVar5,iStack_11114,
                                     iStack_11118);
                }
              }
            }
LAB_40446118:
            uVar12 = uVar12 + 1;
          } while (uVar12 < uStack_100fc);
        }
        goto LAB_40445edc;
      }
      uVar12 = 1;
    }
    else {
      if (!bVar1 && (local_12c & 2) == 2) goto LAB_40445fb4;
      uVar12 = (local_12c & 3) >> 1;
    }
    recovered_4048df94(param_2,param_3,acStack_314,local_130,uVar12,iStack_11114,iStack_11118);
  }
LAB_40445edc:
  uVar10 = uVar10 + 1;
  if (uVar10 == uStack_11120) {
    return uStack_1111c;
  }
  goto LAB_40445ee8;
  while (uVar10 = uVar8 + 2, uVar8 = uVar13, uVar10 < unaff_r5) {
LAB_40446340:
    pcVar11 = pcVar11 + 1;
    param_2[uVar8] = cVar3;
    uVar13 = uVar8 + 1;
    cVar3 = *pcVar11;
    if (cVar3 == '\0') break;
  }
  param_2[uVar13] = '\0';
  return 1;
  while (uVar10 = uVar8 + 2, uVar8 = uVar13, uVar10 < unaff_r5) {
LAB_40446298:
    pcVar11 = pcVar11 + 1;
    param_2[uVar8] = cVar3;
    uVar13 = uVar8 + 1;
    cVar3 = *pcVar11;
    if (cVar3 == '\0') break;
  }
  param_2[uVar13] = '\0';
  return 0;
}
