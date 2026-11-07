/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020aafee (*(uint8_t *)(0x20ec9c7U))
#define local_31 (*(byte *)(frame + 31))
#define str_020aafe7 (*(char (*)[1])(0x20f1922U))
uchar recovered_20dec80(byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char *text;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;

  pbVar11 = &DAT_020a259c;
  if (param_1 != (byte *)0x0) {
    pbVar11 = param_1;
  }
  if (param_3 == (undefined8 *)0x0 || param_2 == (undefined8 *)0x0) {
    return '\0';
  }
  *param_2 = 0;
  *param_3 = 0;
  for (; (*pbVar11 - 9 < 5 || (*pbVar11 == 0x20)); pbVar11 = pbVar11 + 1) {
  }
  uVar5 = recovered_2002e80(str_020aafe7);
  uVar6 = recovered_2002e80((char *)pbVar11);
  if ((uVar6 < uVar5) || (iVar4 = recovered_2002a00(pbVar11,str_020aafe7,uVar5), iVar4 != 0)) {
    uVar5 = recovered_2002e80(&DAT_020aafee);
    uVar6 = recovered_2002e80((char *)pbVar11);
    if (uVar6 < uVar5) {
      return '\0';
    }
    iVar4 = recovered_2002a00(pbVar11,&DAT_020aafee,uVar5);
    if (iVar4 != 0) {
      return '\0';
    }
    lVar7 = 4;
  }
  else {
    lVar7 = 6;
  }
  for (pbVar11 = pbVar11 + lVar7 + -1; (bVar3 = pbVar11[1], bVar3 - 9 < 5 || (bVar3 == 0x20));
      pbVar11 = pbVar11 + 1) {
  }
  uVar5 = 1;
  while ((bVar3 - 9 < 5 || (bVar3 == 0x20))) {
    lVar7 = uVar5 + 1;
    uVar5 = uVar5 + 1;
    bVar3 = pbVar11[lVar7];
  }
  uVar8 = recovered_2002e80((char *)(pbVar11 + 1));
  uVar6 = uVar5 - 1;
  if (uVar6 < uVar8) {
    pbVar10 = pbVar11 + uVar8;
    do {
      bVar3 = *pbVar10;
      if ((4 < bVar3 - 9) && (bVar3 != 0x20)) {
        bVar2 = pbVar11[uVar5];
        if ((bVar2 == 0x22) || (bVar2 == 0x27)) {
          uVar6 = uVar5;
          if (uVar8 <= uVar5) goto LAB_020990d2;
          uVar8 = uVar8 - (bVar3 == bVar2);
          if (uVar5 < uVar8) goto LAB_020990d7;
        }
        else if (uVar6 < uVar8) goto LAB_020990d7;
        break;
      }
      uVar8 = uVar8 - 1;
      pbVar10 = pbVar10 + -1;
    } while (uVar6 < uVar8);
  }
  else {
LAB_020990d2:
    if (uVar6 < uVar8) {
LAB_020990d7:
      text = (char *)0x0;
      uVar5 = 0;
      lVar7 = 0;
      do {
        local_31 = pbVar11[uVar6 + 1];
        if (local_31 == 0x5c) {
          if (uVar6 + 1 < uVar8) {
            local_31 = pbVar11[uVar6 + 2];
            switch((uintptr_t)(local_31)) {
            case 0x5c:
              local_31 = 0x5c;
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
switchD_02099159_caseD_5d:
              break;
            case 0x6e:
              local_31 = 10;
              break;
            case 0x72:
              local_31 = 0xd;
              break;
            case 0x74:
              local_31 = 9;
              break;
            default:
              if (local_31 == 0x22) {
                local_31 = 0x22;
              }
              else {
                if (local_31 != 0x27) goto switchD_02099159_caseD_5d;
                local_31 = 0x27;
              }
            }
            uVar6 = uVar6 + 1;
          }
        }
        uVar1 = lVar7 + 2;
        if (uVar5 < uVar1) {
          if (uVar5 == 0) {
            uVar5 = 0x20;
          }
          for (; uVar5 < uVar1; uVar5 = uVar5 * 2) {
            if ((long)uVar5 < 0) {
              uVar5 = uVar1;
              break;
            }
          }
          pcVar9 = recovered_2000d40(text,uVar5);
          if (pcVar9 == (char *)0x0) {
            recovered_2000bb0(text);
            return '\0';
          }
        }
        else {
          pcVar9 = text;
        }
        text = pcVar9;
        recovered_2001410(text + lVar7,&local_31,1);
        text[lVar7 + 1] = '\0';
        lVar7 = lVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
      goto LAB_020990b2;
    }
  }
  text = recovered_2000ad0(1);
  if (text == (char *)0x0) {
    *param_2 = 0;
    recovered_2000bb0((void *)0x0);
    return '\0';
  }
  *text = '\0';
LAB_020990b2:
  *param_2 = text;
  uVar5 = recovered_2002e80(text);
  *param_3 = uVar5;
  return '\x01';
}
