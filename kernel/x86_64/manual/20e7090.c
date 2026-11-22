/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf454 (*(uint8_t volatile *)(0x215a894U))
#define local_118 (*(byte (*)[248])(frame + 24))
#define str_020ab923 (*(char (*)[1])(0x20fe1edU))
uchar recovered_20e7090(long param_1,undefined8 *param_2,char *param_3)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  uchar uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 extraout_RDX = 0;
  byte *pbVar6;

  if ((param_1 != 0) && (cVar2 = DAT_020cf454, cVar2 != '\0')) {
    pbVar6 = local_118;
    recovered_20411d0(param_1,local_118);
    uVar5 = recovered_2042180(local_118);
    if ((uVar5 != 0xffffffffffffffff) &&
       (((lVar1 = DAT_020cf3a0, lVar1 == 0 || ((*(byte *)(lVar1 + 0x104 + uVar5 * 0x118) & 2) == 0))
        && (uVar3 = recovered_20422c0(uVar5,pbVar6,extraout_RDX), uVar3 != '\0')))) {
      lVar1 = DAT_020cf3a0;
      uVar4 = recovered_20bfbb0(*(long *)(lVar1 + 0xf8 + uVar5 * 0x118),
                                (ulong)*(uint *)(lVar1 + 0x100 + uVar5 * 0x118),param_2,param_3,0xa0
                               );
      return (uchar)uVar4;
    }
  }
  pf_varargs_20039e0___(param_3,0xa0,str_020ab923);
  return '\0';
}
