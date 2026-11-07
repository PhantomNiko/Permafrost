/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(uint32_t *)(0x20eaf50U))
#define local_20 (*(undefined8 *)(frame + 64))
#define local_30 (*(undefined8 *)(frame + 48))
#define local_40 (*(undefined8 *)(frame + 32))
#define local_48 (*(undefined4 *)(frame + 24))
#define local_4c (*(int *)(frame + 20))
#define local_50 (*(undefined4 *)(frame + 16))
#define uStack_18 (*(undefined8 *)(frame + 72))
#define uStack_28 (*(undefined8 *)(frame + 56))
#define uStack_38 (*(undefined8 *)(frame + 40))
uchar recovered_20c4860(int *param_1,long param_2,int param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  undefined8 *puVar3;

  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_50 = 5;
  if (param_3 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = DAT_020a1570;
  }
  local_4c = param_3;
  if (((param_1 != (int *)0x0) && (*param_1 == 8)) &&
     (param_2 != 0 && *(long *)(param_1 + 0xc) != 0)) {
    puVar3 = (undefined8 *)recovered_20bf690(*(long *)(param_1 + 0xc),param_2,'\x01');
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = recovered_20a0670(puVar3,(undefined8 *)&local_50);
      uVar1 = (uchar)uVar2;
      goto LAB_02085e67;
    }
  }
  uVar1 = '\0';
LAB_02085e67:
  recovered_205ec00((undefined8 *)&local_50);
  return uVar1;
}
