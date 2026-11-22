/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_02148014 (*(uint32_t volatile *)(0x2148014U))
#define DAT_02148018 (*(uint32_t volatile *)(0x2148018U))


ulonglong recovered_206cc70(char *incoming_ecx,int incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 extraout_EAX = 0;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  int iVar4;
  char *out;
  uint uVar5;

  iVar1 = DAT_02148018;
  uVar3 = CONCAT31((int3)((uint)incoming_edx >> 8),incoming_ecx == (char *)0x0 || iVar1 == 0);
  if ((incoming_ecx == (char *)0x0 || iVar1 == 0) || (*incoming_ecx == '\0')) {
LAB_0206cd03:
    return CONCAT44(uVar3,iVar1);
  }
  iVar4 = DAT_02148014;
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    iVar4 = 0;
    uVar5 = 0;
    do {
      iVar1 = DAT_02148018;
      iVar1 = recovered_20022a0((char *)(iVar1 + iVar4),incoming_ecx);
      if (iVar1 == 0) {
        if (-1 < (int)uVar5) {
          uVar3 = DAT_02148018;
          uVar3 = DAT_02148018;
          iVar1 = DAT_02148018;
          out = (char *)(iVar4 + iVar1);
          if (incoming_edx == 0) goto LAB_0206cd63;
          goto LAB_0206cd4c;
        }
        uVar2 = DAT_02148014;
        break;
      }
      uVar5 = uVar5 + 1;
      uVar2 = DAT_02148014;
      iVar4 = iVar4 + 0x571;
    } while (uVar5 < uVar2);
    uVar3 = extraout_EDX;
    if (0x2ff < uVar2) goto LAB_0206cd03;
    iVar1 = DAT_02148018;
  }
  DAT_02148014 = uVar2 + 1;
  out = (char *)(uVar2 * 0x571 + iVar1);
  recovered_2001e00(out,0,0x571);
  pf_varargs_20044f0__4_(out,0xf1,&DAT_020c5119,(uint)incoming_ecx);
  if (incoming_edx != 0) {
LAB_0206cd4c:
    pf_varargs_20044f0__4_(out + 0x111,0x60,&DAT_020c5119,incoming_edx);
  }
LAB_0206cd63:
  if (param_3 != 0) {
    pf_varargs_20044f0__4_(out + 0x171,0x400,&DAT_020c5119,param_3);
  }
  recovered_206cda0(out);
  return CONCAT44(extraout_EDX_00,extraout_EAX);
}
#undef DAT_020c5119
#undef DAT_02148014
#undef DAT_02148018
