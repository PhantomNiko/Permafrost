/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_02148014 (*(uint32_t volatile *)(0x2148014U))
#define DAT_02148018 (*(uint32_t volatile *)(0x2148018U))
#define DAT_0223b700 (*(uint32_t volatile *)(0x223b700U))
#define DAT_0223b704 (*(uint32_t volatile *)(0x223b704U))
#define str_020d33e8 (*(char (*)[1])(0x20d33e8U))
#define local_20 (*(int *)(frame + 16))
#define local_1c (*(uint *)(frame + 20))
#define local_18 (*(char * *)(frame + 24))


undefined4 recovered_20b5100(char *in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  ulong size;
  ulong uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  char cVar11;
  int iVar9;
  int iVar10;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;

  if (((in_ECX != (char *)0x0) && (*in_ECX != '\0')) && (iVar9 = DAT_02148014, iVar9 != 0)) {
    local_1c = 0;
    local_20 = 0x112;
    iVar9 = 0x172;
    do {
      iVar4 = DAT_02148018;
      if (iVar4 != 0) {
        pcVar14 = (char *)(iVar4 + local_1c * 0x571);
        size = recovered_2002270(str_020d33e8);
        uVar3 = recovered_2002270(pcVar14);
        if ((uVar3 < size) || (iVar4 = recovered_2001ff0(pcVar14,str_020d33e8,size), iVar4 != 0)) {
          if ((*pcVar14 != '\0') && (iVar4 = DAT_0223b704, iVar4 != 0)) {
            iVar4 = 0;
            uVar13 = 0;
            do {
              iVar5 = DAT_0223b700;
              iVar5 = recovered_20022a0((char *)(iVar5 + iVar4),pcVar14);
              if (iVar5 == 0) {
                if (-1 < (int)uVar13) goto LAB_020b5150;
                break;
              }
              uVar13 = uVar13 + 1;
              iVar4 = iVar4 + 0x571;
              uVar2 = DAT_0223b704;
            } while (uVar13 < uVar2);
          }
          iVar4 = DAT_02148018;
          if ((iVar4 != 0) && (*in_ECX != '\0')) {
            pcVar12 = (char *)(local_1c * 0x571 + iVar4);
            cVar8 = *pcVar12;
            pcVar14 = pcVar12;
            pcVar6 = in_ECX;
            while (cVar8 != '\0') {
              iVar5 = 0;
              do {
                cVar11 = in_ECX[iVar5];
                pcVar6 = (char *)CONCAT31((int3)((uint)pcVar6 >> 8),1);
                if (cVar11 == '\0') {
                  return pcVar6;
                }
                if ((byte)(cVar8 + 0x9fU) < 0x1a) {
                  cVar8 = cVar8 + -0x20;
                }
                if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                  cVar11 = cVar11 + -0x20;
                }
                if (cVar8 != cVar11) goto LAB_020b5272;
                cVar8 = pcVar14[iVar5 + 1];
                iVar5 = iVar5 + 1;
              } while (cVar8 != '\0');
              if (in_ECX[iVar5] == '\0') {
                return pcVar6;
              }
LAB_020b5272:
              pcVar1 = pcVar14 + 1;
              pcVar14 = pcVar14 + 1;
              cVar8 = *pcVar1;
            }
            cVar8 = pcVar12[0x111];
            if (cVar8 != '\0') {
              pcVar14 = pcVar12 + 0x111;
              iVar5 = local_20 + iVar4;
              iVar7 = local_20;
              do {
                iVar10 = 0;
                do {
                  cVar11 = in_ECX[iVar10];
                  iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),1);
                  if (cVar11 == '\0') {
                    return iVar7;
                  }
                  if ((byte)(cVar8 + 0x9fU) < 0x1a) {
                    cVar8 = cVar8 + -0x20;
                  }
                  if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                    cVar11 = cVar11 + -0x20;
                  }
                  if (cVar8 != cVar11) goto LAB_020b52e1;
                  cVar8 = *(char *)(iVar5 + iVar10);
                  iVar10 = iVar10 + 1;
                } while (cVar8 != '\0');
                if (in_ECX[iVar10] == '\0') {
                  return iVar7;
                }
LAB_020b52e1:
                cVar8 = pcVar14[1];
                pcVar14 = pcVar14 + 1;
                iVar5 = iVar5 + 1;
              } while (cVar8 != '\0');
            }
            cVar8 = pcVar12[0x171];
            if (cVar8 != '\0') {
              iVar4 = iVar4 + iVar9;
              local_18 = pcVar12 + 0x171;
              do {
                iVar5 = 0;
                do {
                  cVar11 = in_ECX[iVar5];
                  pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),1);
                  if (cVar11 == '\0') {
                    return pcVar12;
                  }
                  if ((byte)(cVar8 + 0x9fU) < 0x1a) {
                    cVar8 = cVar8 + -0x20;
                  }
                  if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                    cVar11 = cVar11 + -0x20;
                  }
                  if (cVar8 != cVar11) goto LAB_020b5349;
                  cVar8 = *(char *)(iVar4 + iVar5);
                  iVar5 = iVar5 + 1;
                } while (cVar8 != '\0');
                if (in_ECX[iVar5] == '\0') {
                  return pcVar12;
                }
LAB_020b5349:
                cVar8 = local_18[1];
                pcVar12 = local_18 + 1;
                iVar4 = iVar4 + 1;
                local_18 = pcVar12;
              } while (cVar8 != '\0');
            }
          }
        }
      }
LAB_020b5150:
      local_1c = local_1c + 1;
      local_20 = local_20 + 0x571;
      iVar9 = iVar9 + 0x571;
      uVar13 = DAT_02148014;
    } while (local_1c < uVar13);
  }
  return 0;
}
#undef DAT_02148014
#undef DAT_02148018
#undef DAT_0223b700
#undef DAT_0223b704
#undef str_020d33e8
#undef local_20
#undef local_1c
#undef local_18
