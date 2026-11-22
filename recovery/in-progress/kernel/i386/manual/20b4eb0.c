/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c4fca (*(uint8_t *)(0x20c4fcaU))
#define DAT_020c6602 (*(uint8_t *)(0x20c6602U))
#define DAT_020c6603 (*(uint8_t *)(0x20c6603U))
#define DAT_020c6604 (*(uint8_t *)(0x20c6604U))
#define DAT_020c6605 (*(uint8_t *)(0x20c6605U))
#define DAT_020c6606 (*(uint8_t *)(0x20c6606U))
#define DAT_020c6607 (*(uint8_t *)(0x20c6607U))
#define str_020c4fc1 (*(char (*)[1])(0x20c4fc1U))


undefined4 recovered_20b4eb0(char *in_ECX,undefined1 *in_EDX,char *param_3,undefined4 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  int iVar3;
  char *count;
  char *pcVar4;
  undefined4 uVar5;
  char cVar6;
  char *text;
  char *data;

  if (param_3 != (char *)0x0 && in_EDX != (undefined1 *)0x0) {
    *in_EDX = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (in_ECX != (char *)0x0) {
    uVar1 = recovered_2002270(str_020c4fc1);
    uVar2 = recovered_2002270(in_ECX);
    if ((uVar2 < uVar1) || (iVar3 = recovered_2001ff0(in_ECX,str_020c4fc1,uVar1), iVar3 != 0)) {
      uVar1 = recovered_2002270(&DAT_020c4fca);
      uVar2 = recovered_2002270(in_ECX);
      if (uVar2 < uVar1) {
        return 0;
      }
      iVar3 = recovered_2001ff0(in_ECX,&DAT_020c4fca,uVar1);
      if (iVar3 != 0) {
        return 0;
      }
      iVar3 = 10;
    }
    else {
      iVar3 = 8;
    }
    data = in_ECX + iVar3;
    count = recovered_20024f0(data,'/');
    if (count + -(int)data != (char *)0x0) {
      text = data;
      if (count != (char *)0x0) {
        text = count + 1;
      }
      if ((*text != '\0') && (pcVar4 = recovered_20024f0(text,'/'), pcVar4 == (char *)0x0)) {
        uVar1 = recovered_2002270(text);
        uVar2 = recovered_2002270(&DAT_020c6602);
        if (uVar2 <= uVar1) {
          cVar6 = text[uVar1 - uVar2];
          if (cVar6 == '\0') {
            pcVar4 = &DAT_020c6602;
          }
          else {
            if ((byte)(cVar6 + 0x9fU) < 0x1a) {
              cVar6 = cVar6 + -0x20;
            }
            if (cVar6 != '.') {
              return 0;
            }
            iVar3 = -uVar2;
            cVar6 = text[iVar3 + uVar1 + 1];
            if (cVar6 == '\0') {
              pcVar4 = &DAT_020c6603;
            }
            else {
              if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                cVar6 = cVar6 + -0x20;
              }
              if (cVar6 != 'K') {
                return 0;
              }
              cVar6 = text[iVar3 + uVar1 + 2];
              if (cVar6 == '\0') {
                pcVar4 = &DAT_020c6604;
              }
              else {
                if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                  cVar6 = cVar6 + -0x20;
                }
                if (cVar6 != 'E') {
                  return 0;
                }
                cVar6 = text[iVar3 + uVar1 + 3];
                if (cVar6 == '\0') {
                  pcVar4 = &DAT_020c6605;
                }
                else {
                  if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                    cVar6 = cVar6 + -0x20;
                  }
                  if (cVar6 != 'X') {
                    return 0;
                  }
                  cVar6 = text[iVar3 + uVar1 + 4];
                  if (cVar6 == '\0') {
                    pcVar4 = &DAT_020c6606;
                  }
                  else {
                    if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                      cVar6 = cVar6 + -0x20;
                    }
                    if (cVar6 != 'T') {
                      return 0;
                    }
                    if (text[iVar3 + uVar1 + 5] != '\0') {
                      return 0;
                    }
                    pcVar4 = &DAT_020c6607;
                  }
                }
              }
            }
          }
          if (*pcVar4 == '\0') {
            if (count != (char *)0x0) {
              count = count + -(int)data;
            }
            if (in_EDX != (undefined1 *)0x0) {
              if (param_3 <= count) {
                return 0;
              }
              pcVar4 = recovered_2001b70(in_EDX,data,(ulong)count);
              in_EDX[(int)count] = 0;
            }
            uVar5 = CONCAT31((int3)((uint)pcVar4 >> 8),1);
            if (param_4 == (undefined4 *)0x0) {
              return uVar5;
            }
            *param_4 = text;
            return uVar5;
          }
        }
      }
    }
  }
  return 0;
}
#undef DAT_020c4fca
#undef DAT_020c6602
#undef DAT_020c6603
#undef DAT_020c6604
#undef DAT_020c6605
#undef DAT_020c6606
#undef DAT_020c6607
#undef str_020c4fc1
