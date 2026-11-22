/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(int * *)(frame + 40))
#define local_40 (*(char * *)(frame + 32))
#define local_50 (*(long *)(frame + 16))
#define uStack_48 (*(undefined8 *)(frame + 24))
uint recovered_20b16a0(long param_1,long param_2,undefined1 *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  undefined8 in_RAX;
  char *pcVar3;
  ulong size;
  undefined8 extraout_RAX = 0;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_RAX_00 = 0;
  ulong size_00;
  long lVar6;

  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if (param_2 == 0) {
    return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (char *)0x0;
  local_38 = (int *)param_1;
  uVar1 = recovered_20a8f50((int *)param_1,&local_50,0);
  if (uVar1 == '\0') {
LAB_02074a71:
    recovered_2000bb0(local_40);
LAB_02074a79:
    uVar2 = 0;
  }
  else {
    pcVar3 = local_40;
    if (local_40 == (char *)0x0) {
      pcVar3 = recovered_2000ad0(1);
      if (pcVar3 == (char *)0x0) goto LAB_02074a79;
      *pcVar3 = '\0';
    }
    size = recovered_2002e80(pcVar3);
    if (0x1fe < size) {
      size = 0x1ff;
    }
    recovered_2001410(param_3,pcVar3,size);
    param_3[size] = 0;
    recovered_2000bb0(pcVar3);
    uVar4 = extraout_RAX;
    if (param_2 != 1) {
      lVar6 = param_2 + -1;
      do {
        local_38 = local_38 + 0x10;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = (char *)0x0;
        uVar1 = recovered_20a8f50(local_38,&local_50,0);
        if (uVar1 == '\0') goto LAB_02074a71;
        pcVar3 = local_40;
        if (local_40 == (char *)0x0) {
          pcVar3 = recovered_2000ad0(1);
          if (pcVar3 == (char *)0x0) goto LAB_02074a79;
          *pcVar3 = '\0';
        }
        if (size < 0x1ff) {
          *(undefined2 *)(param_3 + size) = 0x20;
          size = size + 1;
        }
        uVar5 = recovered_2002e80(pcVar3);
        size_00 = 0x1ff - size;
        if (uVar5 + size < 0x200) {
          size_00 = uVar5;
        }
        recovered_2001410(param_3 + size,pcVar3,size_00);
        size = size + size_00;
        param_3[size] = 0;
        recovered_2000bb0(pcVar3);
        lVar6 = lVar6 + -1;
        uVar4 = extraout_RAX_00;
      } while (lVar6 != 0);
    }
    uVar2 = (uint)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  return uVar2;
}
