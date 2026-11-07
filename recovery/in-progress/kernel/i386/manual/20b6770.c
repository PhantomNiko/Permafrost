/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_02096d50 (*(uint8_t *)(0x20c55bcU))
#define local_11 (*(byte *)(frame + 31))
#define local_18 (*(char * *)(frame + 24))
#define local_20 (*(int *)(frame + 16))
#define str_02096d49 (*(char (*)[1])(0x20ca4c0U))
undefined4 recovered_20b6770(byte *incoming_ecx,undefined4 *incoming_edx,undefined4 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  char *text;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;

  pbVar10 = &DAT_0208e2dc;
  if (incoming_ecx != (byte *)0x0) {
    pbVar10 = incoming_ecx;
  }
  if (param_3 == (undefined4 *)0x0 || incoming_edx == (undefined4 *)0x0) {
LAB_02084378:
    uVar7 = 0;
  }
  else {
    *incoming_edx = 0;
    *param_3 = 0;
    for (; (*pbVar10 - 9 < 5 || (*pbVar10 == 0x20)); pbVar10 = pbVar10 + 1) {
    }
    uVar3 = recovered_2002270(str_02096d49);
    uVar4 = recovered_2002270((char *)pbVar10);
    if ((uVar4 < uVar3) || (iVar5 = recovered_2001ff0(pbVar10,str_02096d49,uVar3), iVar5 != 0)) {
      uVar3 = recovered_2002270(&DAT_02096d50);
      uVar4 = recovered_2002270((char *)pbVar10);
      if ((uVar4 < uVar3) || (iVar5 = recovered_2001ff0(pbVar10,&DAT_02096d50,uVar3), iVar5 != 0))
      goto LAB_02084378;
      iVar5 = 4;
    }
    else {
      iVar5 = 6;
    }
    pbVar10 = pbVar10 + iVar5 + -1;
    while( true ) {
      bVar8 = pbVar10[1];
      if ((4 < bVar8 - 9) && (bVar8 != 0x20)) break;
      pbVar10 = pbVar10 + 1;
    }
    uVar11 = 1;
    while ((bVar8 - 9 < 5 || (bVar8 == 0x20))) {
      iVar5 = uVar11 + 1;
      uVar11 = uVar11 + 1;
      bVar8 = pbVar10[iVar5];
    }
    uVar3 = recovered_2002270((char *)(pbVar10 + 1));
    uVar12 = uVar11 - 1;
    if (uVar12 < uVar3) {
      pbVar9 = pbVar10 + uVar3;
      do {
        bVar8 = *pbVar9;
        if ((4 < bVar8 - 9) && (bVar8 != 0x20)) {
          bVar1 = pbVar10[uVar11];
          if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
            uVar12 = uVar11;
            if (uVar3 <= uVar11) goto LAB_02084230;
            uVar3 = uVar3 - (bVar8 == bVar1);
            if (uVar11 < uVar3) goto LAB_02084234;
          }
          else if (uVar12 < uVar3) goto LAB_02084234;
          break;
        }
        uVar3 = uVar3 - 1;
        pbVar9 = pbVar9 + -1;
      } while (uVar12 < uVar3);
LAB_020841fc:
      text = recovered_2001650(1);
      if (text == (char *)0x0) {
        *incoming_edx = 0;
        local_18 = (char *)0x0;
LAB_02084373:
        recovered_2001710(local_18);
        goto LAB_02084378;
      }
      *text = '\0';
    }
    else {
LAB_02084230:
      if (uVar3 <= uVar12) goto LAB_020841fc;
LAB_02084234:
      local_18 = (char *)0x0;
      uVar11 = 0;
      local_20 = 0;
      do {
        local_11 = pbVar10[uVar12 + 1];
        if (local_11 == 0x5c) {
          if (uVar12 + 1 < uVar3) {
            local_11 = pbVar10[uVar12 + 2];
            switch((uintptr_t)(local_11)) {
            case 0x5c:
              local_11 = 0x5c;
              break;
            case 0x5d:
            case 0x5e:
            case 0x5f:
            case 0x60:
            case 0x61:
            case 0x62:
            case 99:
            case 100:
            case 0x65:
            case 0x66:
            case 0x67:
            case 0x68:
            case 0x69:
            case 0x6a:
            case 0x6b:
            case 0x6c:
            case 0x6d:
            case 0x6f:
            case 0x70:
            case 0x71:
            case 0x73:
switchD_020842b9_caseD_5d:
              break;
            case 0x6e:
              local_11 = 10;
              break;
            case 0x72:
              local_11 = 0xd;
              break;
            case 0x74:
              local_11 = 9;
              break;
            default:
              if (local_11 == 0x22) {
                local_11 = 0x22;
              }
              else {
                if (local_11 != 0x27) goto switchD_020842b9_caseD_5d;
                local_11 = 0x27;
              }
            }
            uVar12 = uVar12 + 1;
          }
        }
        uVar6 = local_20 + 2;
        if (uVar11 < uVar6) {
          uVar2 = 0x20;
          if (uVar11 != 0) {
            uVar2 = uVar11;
          }
          for (; uVar11 = uVar2, uVar2 < uVar6; uVar2 = uVar2 * 2) {
            if ((int)uVar2 < 0) {
              uVar11 = uVar6;
              break;
            }
          }
          text = recovered_2001860(local_18,uVar11);
          if (text == (char *)0x0) goto LAB_02084373;
        }
        else {
          text = local_18;
        }
        recovered_2001b70(text + local_20,&local_11,1);
        text[local_20 + 1] = '\0';
        local_20 = local_20 + 1;
        uVar12 = uVar12 + 1;
        local_18 = text;
      } while (uVar12 < uVar3);
    }
    *incoming_edx = text;
    uVar3 = recovered_2002270(text);
    *param_3 = uVar3;
    uVar7 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar7;
}
