/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(ulong *)(frame + 40))
#define local_40 (*(ulong *)(frame + 32))
#define local_48 (*(void * *)(frame + 24))
uchar recovered_20bf9c0(undefined4 *param_1,long param_2,long param_3,ulong param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  void *buffer;
  ulong uVar1;
  uchar uVar2;
  ulonglong uVar3;
  ulong uVar4;

  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  uVar2 = recovered_2095f20(param_3,param_4,(long *)&local_48,&local_40,&local_38);
  uVar4 = local_38;
  uVar1 = local_40;
  buffer = local_48;
  if (uVar2 != '\0') {
    uVar3 = recovered_20a98c0(0,param_2);
    if (uVar3 == 0) {
      if (buffer != (void *)0x0) {
        if (uVar1 != 0) {
          uVar4 = 0;
          do {
            recovered_2000bb0(*(void **)((long)buffer + uVar4 * 8));
            *(undefined8 *)((long)buffer + uVar4 * 8) = 0;
            uVar4 = uVar4 + 1;
          } while (uVar1 != uVar4);
        }
        recovered_2000bb0(buffer);
      }
    }
    else {
      *(undefined1 *)(uVar3 + 8) = 1;
      *(undefined8 *)(uVar3 + 0x60) = 0;
      *(undefined8 *)(uVar3 + 0x68) = 0;
      *(void **)(uVar3 + 0x70) = buffer;
      *(ulong *)(uVar3 + 0x78) = uVar1;
      *(ulong *)(uVar3 + 0x80) = uVar4;
      if (param_1 != (undefined4 *)0x0) {
        recovered_205ec00((undefined8 *)param_1);
        *param_1 = 9;
        *(ulonglong *)(param_1 + 0xe) = uVar3;
        return '\x01';
      }
    }
  }
  return '\0';
}
