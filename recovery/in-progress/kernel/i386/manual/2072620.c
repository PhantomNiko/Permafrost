/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))


void recovered_2072620(int in_ECX,char *in_EDX,char *param_3,byte param_4,char param_5,char param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  char *left;
  uint uVar5;
  char *pcVar6;

  if (in_EDX != (char *)0x0) {
    if (*(int *)(in_ECX + 0x552c) != 0) {
      uVar5 = 0;
      left = (char *)(in_ECX + 0xf9);
      do {
        iVar1 = recovered_20022a0(left,in_EDX);
        if (iVar1 == 0) goto LAB_02072674;
        uVar5 = uVar5 + 1;
        left = left + 0x1c1;
      } while (uVar5 < *(uint *)(in_ECX + 0x552c));
    }
    left = (char *)0x0;
LAB_02072674:
    if ((*in_EDX != '\0') && ((param_4 & left != (char *)0x0) == 0)) {
      if (left == (char *)0x0) {
        uVar5 = *(uint *)(in_ECX + 0x552c);
        if (0x2f < uVar5) {
          return;
        }
        *(uint *)(in_ECX + 0x552c) = uVar5 + 1;
        left = (char *)(in_ECX + 0xf9) + uVar5 * 0x1c1;
        recovered_2001e00(left,0,0x1c1);
        pf_varargs_20044f0__4_(left,0x40,&DAT_020c5119,(uint)in_EDX);
      }
      else if (left[0x1c0] == '\x01' && param_6 == '\0') {
        return;
      }
      if ((param_5 == '\0') || (left[0x40] == '\0')) {
        pcVar4 = &DAT_020c5084;
        if (param_3 != (char *)0x0) {
          pcVar4 = param_3;
        }
        pf_varargs_20044f0__4_(left + 0x40,0x180,&DAT_020c5119,(uint)pcVar4);
      }
      else {
        pcVar4 = left + 0x40;
        uVar5 = recovered_2002270(pcVar4);
        if (uVar5 + 1 < 0x180) {
          pcVar4[uVar5] = ' ';
          uVar5 = uVar5 + 1;
        }
        pcVar4[uVar5] = '\0';
        pcVar6 = &DAT_020c5084;
        if (param_3 != (char *)0x0) {
          pcVar6 = param_3;
        }
        uVar2 = recovered_2002270(pcVar4);
        cVar3 = *pcVar6;
        if ((cVar3 != '\0') && (uVar2 + 1 < 0x180)) {
          do {
            pcVar6 = pcVar6 + 1;
            pcVar4[uVar2] = cVar3;
            uVar2 = uVar2 + 1;
            cVar3 = *pcVar6;
            if (cVar3 == '\0') break;
          } while (uVar2 < 0x17f);
        }
        pcVar4[uVar2] = '\0';
      }
      if (param_6 != '\0') {
        left[0x1c0] = '\x01';
      }
    }
  }
  return;
}
#undef DAT_020c5084
#undef DAT_020c5119
