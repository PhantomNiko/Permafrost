/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf454 (*(uint8_t volatile *)(0x215a894U))
#define local_118 (*(byte (*)[248])(frame + 24))
uint recovered_203eea0(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  uchar uVar3;
  uint uVar4;
  ulonglong uVar5;
  long extraout_RDX;
  long lVar6;
  byte *pbVar7;

  if (param_3 == (ulong *)0x0) {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  cVar2 = DAT_020cf454;
  if (cVar2 == '\0') {
    return 0;
  }
  pbVar7 = local_118;
  recovered_20411d0(param_1,local_118);
  uVar5 = recovered_2042180(local_118);
  if ((uVar5 == 0xffffffffffffffff) ||
     (((lVar1 = DAT_020cf3a0, lVar6 = extraout_RDX, lVar1 != 0 &&
       (lVar6 = uVar5 * 0x118, (*(byte *)(lVar1 + 0x104 + lVar6) & 2) != 0)) ||
      (uVar3 = recovered_20422c0(uVar5,pbVar7,lVar6), uVar3 == '\0')))) {
    uVar4 = 0;
  }
  else {
    lVar1 = DAT_020cf3a0;
    *param_2 = *(undefined8 *)(lVar1 + 0xf8 + uVar5 * 0x118);
    lVar1 = DAT_020cf3a0;
    uVar4 = *(uint *)(lVar1 + 0x100 + uVar5 * 0x118);
    *param_3 = (ulong)uVar4;
    uVar4 = (uint)CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
  }
  return uVar4;
}
