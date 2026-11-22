/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208f2f8 (*(uint8_t *)(0x20c6602U))
#define DAT_0208f2f9 (*(uint8_t *)(0x20c6603U))
#define DAT_0208f2fa (*(uint8_t *)(0x20c6604U))
#define DAT_0208f2fb (*(uint8_t *)(0x20c6605U))
#define DAT_0208f2fc (*(uint8_t *)(0x20c6606U))
#define DAT_0208f2fd (*(uint8_t *)(0x20c6607U))
#define auStack_10e (*(undefined1 (*)[5])(frame + 258))
#define local_109 (*(char (*)[241])(frame + 263))
#define local_14 (*(ulong *)(frame + 508))
#define local_18 (*(undefined1 * *)(frame + 504))
#define local_1fa (*(char (*)[236])(frame + 22))
uint recovered_20b4cb0(int incoming_ecx,undefined1 *incoming_edx)

{
  unsigned char frame[560] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  char *text;

  if (incoming_edx != (undefined1 *)0x0 && incoming_ecx != 0) {
    *incoming_edx = 0;
    local_18 = incoming_edx;
    recovered_202a060(incoming_ecx,local_1fa);
    pcVar4 = local_1fa;
    text = local_1fa;
    do {
      while( true ) {
        pcVar4 = pcVar4 + 1;
        cVar5 = pcVar4[-1];
        if ((cVar5 != '/') && (cVar5 != '\\')) break;
        text = pcVar4;
      }
    } while (cVar5 != '\0');
    if ((text != (char *)0x0) && (*text != '\0')) {
      uVar1 = recovered_2002270(text);
      uVar2 = recovered_2002270(&DAT_0208f2f8);
      if (uVar2 <= uVar1) {
        cVar5 = text[uVar1 - uVar2];
        if (cVar5 == '\0') {
          pcVar4 = &DAT_0208f2f8;
        }
        else {
          if ((byte)(cVar5 + 0x9fU) < 0x1a) {
            cVar5 = cVar5 + -0x20;
          }
          if (cVar5 != '.') {
            return 0;
          }
          iVar3 = -uVar2;
          cVar5 = text[iVar3 + uVar1 + 1];
          if (cVar5 == '\0') {
            pcVar4 = &DAT_0208f2f9;
          }
          else {
            if ((byte)(cVar5 + 0x9fU) < 0x1a) {
              cVar5 = cVar5 + -0x20;
            }
            if (cVar5 != 'K') {
              return 0;
            }
            cVar5 = text[iVar3 + uVar1 + 2];
            if (cVar5 == '\0') {
              pcVar4 = &DAT_0208f2fa;
            }
            else {
              if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                cVar5 = cVar5 + -0x20;
              }
              if (cVar5 != 'E') {
                return 0;
              }
              cVar5 = text[iVar3 + uVar1 + 3];
              if (cVar5 == '\0') {
                pcVar4 = &DAT_0208f2fb;
              }
              else {
                if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                  cVar5 = cVar5 + -0x20;
                }
                if (cVar5 != 'X') {
                  return 0;
                }
                cVar5 = text[iVar3 + uVar1 + 4];
                if (cVar5 == '\0') {
                  pcVar4 = &DAT_0208f2fc;
                }
                else {
                  if ((byte)(cVar5 + 0x9fU) < 0x1a) {
                    cVar5 = cVar5 + -0x20;
                  }
                  if (cVar5 != 'T') {
                    return 0;
                  }
                  if (text[iVar3 + uVar1 + 5] != '\0') {
                    return 0;
                  }
                  pcVar4 = &DAT_0208f2fd;
                }
              }
            }
          }
        }
        if (*pcVar4 == '\0') {
          local_14 = recovered_2002270(text);
          if (local_14 - 0xf1 < 0xffffff15) {
            return 0;
          }
          uVar2 = local_14 - 5;
          recovered_2001b70(local_109,text,uVar2);
          auStack_10e[local_14] = 0;
          *local_18 = 0x2f;
          uVar1 = 0;
          do {
            uVar6 = uVar1;
            cVar5 = '/';
            if (local_109[uVar6] != '~') {
              cVar5 = local_109[uVar6];
            }
            local_18[uVar6 + 1] = cVar5;
            uVar1 = uVar6 + 1;
          } while (uVar2 != uVar6 + 1);
          local_18[uVar6 + 2] = 0;
          uVar7 = uVar6 + 2;
          uVar8 = uVar7;
          do {
            uVar8 = CONCAT31((int3)(uVar8 >> 8),local_18[uVar7 - 1] != '/');
            if (local_18[uVar7 - 1] != '/') {
              return uVar8;
            }
            local_18[uVar7 - 1] = 0;
            uVar7 = uVar7 - 1;
          } while (1 < uVar7);
          return uVar8;
        }
      }
    }
  }
  return 0;
}
