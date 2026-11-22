/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define lStack_20 (*(long *)(frame + 80))
#define local_28 (*(undefined8 *)(frame + 72))
#define local_38 (*(undefined8 *)(frame + 56))
#define local_48 (*(undefined8 *)(frame + 40))
#define local_58 (*(undefined8 *)(frame + 24))
#define uStack_30 (*(undefined8 *)(frame + 64))
#define uStack_40 (*(undefined8 *)(frame + 48))
#define uStack_4c (*(undefined4 *)(frame + 36))
#define uStack_50 (*(undefined4 *)(frame + 32))
uchar recovered_20a9990(undefined8 *param_1,long param_2,long param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  lStack_20 = 0;
  if (param_3 != 0) {
    bVar1 = recovered_20a7b90((undefined4 *)&local_58,param_2);
    if (((int)local_58 == 9 & bVar1 & lStack_20 != 0) != 0) {
      *(undefined1 *)(lStack_20 + 0xb) = 1;
      uVar2 = recovered_20a0670((undefined8 *)(lStack_20 + 0x20),(undefined8 *)param_3);
      if ((char)uVar2 != '\0') {
        if (param_1 == (undefined8 *)0x0) {
          return '\x01';
        }
        recovered_205ec00(param_1);
        param_1[6] = local_28;
        param_1[7] = lStack_20;
        param_1[4] = local_38;
        param_1[5] = uStack_30;
        param_1[2] = local_48;
        param_1[3] = uStack_40;
        *param_1 = local_58;
        param_1[1] = CONCAT44(uStack_4c,uStack_50);
        return '\x01';
      }
    }
  }
  recovered_205ec00(&local_58);
  return '\0';
}
