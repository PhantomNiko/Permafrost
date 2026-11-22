/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_021306f8 (*(uint8_t volatile *)(0x21306f8U))
#define DAT_021408e9 (*(uint8_t volatile *)(0x21408e9U))


uint recovered_202d9c0(int param_1,char *param_2,ulong param_3,char *param_4,byte param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;

  recovered_2026f10();
  uVar1 = 0;
  if ((param_3 != 0 && param_2 != (char *)0x0) && param_1 == 0) {
    *param_2 = '\0';
    pcVar2 = &DAT_020c5084;
    if (param_4 != (char *)0x0) {
      pcVar2 = param_4;
    }
    recovered_2026f10();
    DAT_021306f8 = 0;
    DAT_021408e9 = 0;
    uVar1 = recovered_2029350(param_2,param_3,pcVar2,param_5 & 1,'\x01');
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}
#undef DAT_020c5084
#undef DAT_021306f8
#undef DAT_021408e9
