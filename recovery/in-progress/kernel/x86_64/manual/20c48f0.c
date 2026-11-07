/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_20 (*(undefined8 *)(frame + 64))
#define local_30 (*(undefined8 *)(frame + 48))
#define local_40 (*(undefined8 *)(frame + 32))
#define local_48 (*(undefined4 *)(frame + 24))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_50 (*(undefined4 *)(frame + 16))
#define uStack_18 (*(undefined8 *)(frame + 72))
#define uStack_28 (*(undefined8 *)(frame + 56))
#define uStack_38 (*(undefined8 *)(frame + 40))
uint recovered_20c48f0(int *param_1,long param_2,undefined4 param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;

  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_50 = 6;
  local_4c = param_3;
  if (((param_1 != (int *)0x0) && (*param_1 == 8)) &&
     (param_2 != 0 && *(long *)(param_1 + 0xc) != 0)) {
    puVar2 = (undefined8 *)recovered_20bf690(*(long *)(param_1 + 0xc),param_2,'\x01');
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = recovered_20a0670(puVar2,(undefined8 *)&local_50);
      goto LAB_02085ee8;
    }
  }
  uVar1 = 0;
LAB_02085ee8:
  recovered_205ec00((undefined8 *)&local_50);
  return uVar1;
}
