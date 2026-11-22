/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c79e2 (*(uint8_t *)(0x20c79e2U))
#define DAT_020c79e3 (*(uint8_t *)(0x20c79e3U))
#define DAT_020c79e4 (*(uint8_t *)(0x20c79e4U))
#define DAT_020c79e5 (*(uint8_t *)(0x20c79e5U))


void recovered_2062ab0(char *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong count;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;

  if (in_ECX == (char *)0x0) {
    if (in_EDX == (char *)0x0) {
      return;
    }
    *in_EDX = '\0';
    in_ECX = &DAT_020c5084;
    cVar6 = DAT_020c5084;
  }
  else {
    pcVar5 = in_ECX;
    do {
      while( true ) {
        pcVar1 = pcVar5 + 1;
        cVar6 = *pcVar5;
        pcVar5 = pcVar1;
        if ((cVar6 != '/') && (cVar6 != '\\')) break;
        in_ECX = pcVar1;
      }
    } while (cVar6 != '\0');
    if (in_EDX == (char *)0x0) {
      return;
    }
    *in_EDX = '\0';
    if (in_ECX == (char *)0x0) goto LAB_02062bd9;
    cVar6 = *in_ECX;
  }
  if (cVar6 == '\0') {
LAB_02062bd9:
    pf_varargs_20044f0__4_(in_EDX,0x40,&DAT_020c5119,0x20c5405);
    return;
  }
  count = recovered_2002270(in_ECX);
  if (3 < count) {
    uVar2 = recovered_2002270(in_ECX);
    uVar3 = recovered_2002270(&DAT_020c79e2);
    if (uVar3 <= uVar2) {
      cVar6 = in_ECX[uVar2 - uVar3];
      if (cVar6 == '\0') {
        pcVar5 = &DAT_020c79e2;
      }
      else {
        if ((byte)(cVar6 + 0x9fU) < 0x1a) {
          cVar6 = cVar6 + -0x20;
        }
        if (cVar6 != '.') goto LAB_02062ba6;
        iVar4 = -uVar3;
        cVar6 = in_ECX[iVar4 + uVar2 + 1];
        if (cVar6 == '\0') {
          pcVar5 = &DAT_020c79e3;
        }
        else {
          if ((byte)(cVar6 + 0x9fU) < 0x1a) {
            cVar6 = cVar6 + -0x20;
          }
          if (cVar6 != 'K') goto LAB_02062ba6;
          cVar6 = in_ECX[iVar4 + uVar2 + 2];
          if (cVar6 == '\0') {
            pcVar5 = &DAT_020c79e4;
          }
          else {
            if ((byte)(cVar6 + 0x9fU) < 0x1a) {
              cVar6 = cVar6 + -0x20;
            }
            if ((cVar6 != 'O') || (in_ECX[iVar4 + uVar2 + 3] != '\0')) goto LAB_02062ba6;
            pcVar5 = &DAT_020c79e5;
          }
        }
      }
      if (*pcVar5 == '\0') {
        count = count - 3;
      }
    }
  }
LAB_02062ba6:
  if (0x3e < count) {
    count = 0x3f;
  }
  recovered_2001b70(in_EDX,in_ECX,count);
  in_EDX[count] = '\0';
  return;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c79e2
#undef DAT_020c79e3
#undef DAT_020c79e4
#undef DAT_020c79e5
