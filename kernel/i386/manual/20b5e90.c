/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(char * *)(frame + 412))
#define local_18 (*(undefined1 * *)(frame + 408))
#define local_19c (*(char (*)[384])(frame + 20))
#define local_1c (*(undefined1 * *)(frame + 404))
undefined4 recovered_20b5e90(int *param_1,int param_2,undefined1 param_3)

{
  unsigned char frame[464] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint size;
  void *pvVar2;
  char *buffer;
  int iVar3;
  uint size_00;
  undefined4 uVar4;
  ulong size_01;
  uint uVar5;

  if (param_2 == 0 || param_1 == (int *)0x0) {
    return 0;
  }
  local_1c = &param_3;
  local_18 = local_1c;
  size = recovered_2003af0(local_19c,0x180,(char *)param_2,local_1c);
  if ((int)size < 0) {
    return 0;
  }
  if (size < 0x180) {
    iVar3 = *param_1;
    uVar5 = param_1[1];
    uVar1 = size + 1 + iVar3;
    if (uVar5 < uVar1) {
      param_2 = 0x20;
      if (uVar5 != 0) {
        param_2 = uVar5;
      }
      for (; (uint)param_2 < uVar1; param_2 = param_2 * 2) {
        if (param_2 < 0) {
          param_2 = uVar1;
          break;
        }
      }
      pvVar2 = recovered_2001860((void *)param_1[2],param_2);
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      param_1[2] = (int)pvVar2;
      param_1[1] = param_2;
      iVar3 = *param_1;
    }
    if (size != 0) {
      recovered_2001b70((void *)(iVar3 + param_1[2]),local_19c,size);
      iVar3 = *param_1;
    }
    *param_1 = iVar3 + size;
    *(undefined1 *)(param_1[2] + iVar3 + size) = 0;
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  size_01 = size + 1;
  local_14 = recovered_2001650(size_01);
  if (local_14 == (char *)0x0) {
    return 0;
  }
  recovered_2003af0(local_14,size_01,(char *)param_2,local_18);
  iVar3 = *param_1;
  uVar1 = param_1[1];
  uVar5 = size_01 + iVar3;
  if (uVar1 < uVar5) {
    size_00 = 0x20;
    if (uVar1 != 0) {
      size_00 = uVar1;
    }
    for (; size_00 < uVar5; size_00 = size_00 * 2) {
      if ((int)size_00 < 0) {
        size_00 = uVar5;
        break;
      }
    }
    pvVar2 = recovered_2001860((void *)param_1[2],size_00);
    if (pvVar2 == (void *)0x0) {
      uVar4 = 0;
      buffer = local_14;
      goto LAB_02083c6c;
    }
    param_1[2] = (int)pvVar2;
    param_1[1] = size_00;
    iVar3 = *param_1;
  }
  else {
    pvVar2 = (void *)param_1[2];
  }
  buffer = local_14;
  recovered_2001b70((void *)((int)pvVar2 + iVar3),local_14,size);
  iVar3 = *param_1;
  *param_1 = iVar3 + size;
  *(undefined1 *)(param_1[2] + iVar3 + size) = 0;
  uVar4 = CONCAT31((int3)((uint)buffer >> 8),1);
LAB_02083c6c:
  recovered_2001710(buffer);
  return uVar4;
}
