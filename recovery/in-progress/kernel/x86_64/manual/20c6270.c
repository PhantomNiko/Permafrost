/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a2a2a (*(uint8_t *)(0x20ec671U))
#define DAT_020d5938 (*(uint64_t volatile *)(0x2187ac8U))
#define DAT_020d5940 (*(uint64_t volatile *)(0x2187ac0U))
#define DAT_020d6ad8 (*(uint8_t volatile *)(0x216a9b4U))
#define DAT_020d6adc (*(uint8_t volatile *)(0x226c4d4U))
#define local_30 (*(undefined1 * *)(frame + 32))
#define local_38 (*(ulong *)(frame + 24))
uint recovered_20c6270(undefined1 *param_1,ulong param_2,byte param_3,char param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  undefined8 in_RAX;
  void *pvVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong size;

  local_30 = (undefined1 *)0x0;
  if (param_1 == (undefined1 *)0x0 && param_2 != 0) {
    return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),param_1 == (undefined1 *)0x0);
  }
  local_38 = param_2;
  if ((param_4 != '\0') && (bVar1 = DAT_020d6adc, (bVar1 & 1) != 0)) {
    uVar2 = recovered_20c6420(param_1,param_2,&local_30,&local_38);
    if ((char)uVar2 == '\0') {
      recovered_2000bb0(local_30);
      local_30 = (undefined1 *)0x0;
    }
    else {
      param_1 = local_30;
      param_2 = local_38;
    }
  }
  pvVar3 = (void *)DAT_020d5940;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = recovered_2000ad0(0x40200);
    DAT_020d5940 = pvVar3;
    if (pvVar3 != (void *)0x0) {
      recovered_2002110(pvVar3,0,0x40200);
      pvVar3 = (void *)DAT_020d5940;
      goto LAB_02048fc1;
    }
    DAT_020d5938 = 0;
    bVar1 = DAT_020d6ad8;
    if ((param_3 & bVar1) != 1) goto LAB_0204907f;
    puVar5 = &DAT_020a259c;
    if (param_1 != (undefined1 *)0x0) {
      puVar5 = param_1;
    }
  }
  else {
LAB_02048fc1:
    lVar4 = DAT_020d5938;
    if (lVar4 == 0x100) {
      recovered_2001850(pvVar3,(void *)((long)pvVar3 + 0x402),0x3fdfe);
      DAT_020d5938 = 0xff;
      lVar4 = 0xff;
      pvVar3 = (void *)DAT_020d5940;
    }
    size = 0x3ff;
    if (param_2 < 0x3ff) {
      size = param_2;
    }
    if (param_2 != 0) {
      recovered_2001410((void *)((long)pvVar3 + lVar4 * 0x402),param_1,size);
      pvVar3 = (void *)DAT_020d5940;
      lVar4 = DAT_020d5938;
    }
    puVar5 = (undefined1 *)((long)pvVar3 + lVar4 * 0x402);
    puVar5[size] = 0;
    *(short *)((long)pvVar3 + lVar4 * 0x402 + 0x400) = (short)size;
    DAT_020d5938 = lVar4 + 1;
    bVar1 = DAT_020d6ad8;
    if ((param_3 & bVar1) != 1) goto LAB_0204907f;
    param_2 = size;
  }
  recovered_2013740((long)puVar5,param_2);
  recovered_20136a0(&DAT_020a2a2a);
LAB_0204907f:
  recovered_2000bb0(local_30);
  return extraout_EAX;
}
