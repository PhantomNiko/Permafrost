/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_30 (*(undefined8 *)(frame + 64))
#define local_40 (*(undefined8 *)(frame + 48))
#define local_50 (*(undefined8 *)(frame + 32))
#define local_58 (*(undefined4 *)(frame + 24))
#define local_60 (*(undefined8 *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 72))
#define uStack_38 (*(undefined8 *)(frame + 56))
#define uStack_48 (*(undefined8 *)(frame + 40))
uchar recovered_20e6b70(int *param_1,long param_2,long param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uchar uVar4;

  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = recovered_20a7b90((undefined4 *)&local_60,param_3);
  uVar4 = '\0';
  if ((param_1 != (int *)0x0) && (uVar1 != '\0')) {
    if ((*param_1 == 8) && (param_2 != 0 && *(long *)(param_1 + 0xc) != 0)) {
      puVar3 = (undefined8 *)recovered_20bf690(*(long *)(param_1 + 0xc),param_2,'\x01');
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = recovered_20a0670(puVar3,&local_60);
        uVar4 = (uchar)uVar2;
        goto LAB_020a1409;
      }
    }
    uVar4 = '\0';
  }
LAB_020a1409:
  recovered_205ec00(&local_60);
  return uVar4;
}
