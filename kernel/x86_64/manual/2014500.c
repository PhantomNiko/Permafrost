/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_020a15b0 (*(uint128 *)(0x20eaf60U))
#define str_020a25d5 (*(char (*)[1])(0x20ec47fU))
ulonglong recovered_2014500(char *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint128 auVar4;

  pcVar3 = param_1 + param_2;
  if (param_1 + 0x14 <= pcVar3) {
    do {
      iVar2 = recovered_2002a00(param_1,str_020a25d5,8);
      if (((param_1 != (char *)0x0) && (iVar2 == 0)) &&
         (PF_PART1(auVar4,0) = param_1[8] + *param_1, PF_PART1(auVar4,1) = param_1[9] + param_1[1],
         PF_PART1(auVar4,2) = param_1[10] + param_1[2], PF_PART1(auVar4,3) = param_1[0xb] + param_1[3],
         PF_PART1(auVar4,4) = param_1[0xc] + param_1[4], PF_PART1(auVar4,5) = param_1[0xd] + param_1[5],
         PF_PART1(auVar4,6) = param_1[0xe] + param_1[6], PF_PART1(auVar4,7) = param_1[0xf] + param_1[7],
         PF_PART1(auVar4,8) = param_1[8] * '\x02', PF_PART1(auVar4,9) = param_1[9] * '\x02',
         PF_PART1(auVar4,10) = param_1[10] * '\x02', PF_PART1(auVar4,0xb) = param_1[0xb] * '\x02',
         PF_PART1(auVar4,0xc) = param_1[0xc] * '\x02', PF_PART1(auVar4,0xd) = param_1[0xd] * '\x02',
         PF_PART1(auVar4,0xe) = param_1[0xe] * '\x02', PF_PART1(auVar4,0xf) = param_1[0xf] * '\x02',
         auVar4 = psadbw(auVar4,_DAT_020a15b0),
         (char)(param_1[0x11] + param_1[0x12] + PF_PART1(auVar4,0) + param_1[0x10] + param_1[0x13]) == '\0'))
      {
        return (ulonglong)param_1;
      }
      pcVar1 = param_1 + 0x24;
      param_1 = param_1 + 0x10;
    } while (pcVar1 <= pcVar3);
  }
  return 0;
}
