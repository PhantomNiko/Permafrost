/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8243166c(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *buffer;
  int iVar2;
  int *buffer_00;
  long lVar3;
  ulong uVar4;

  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  puVar1 = param_1;
  switch((uintptr_t)(*(undefined4 *)param_1)) {
  case 3:
    buffer_00 = (int *)param_1[2];
    break;
  case 4:
    buffer_00 = (int *)param_1[3];
    break;
  default:
    goto switchD_4041f53c_caseD_5;
  case 7:
    buffer_00 = (int *)param_1[5];
    if (buffer_00 == (int *)0x0) goto switchD_4041f53c_caseD_5;
    iVar2 = *buffer_00 + -1;
    if (*buffer_00 != 0 && iVar2 != 0) {
LAB_4041f5a0:
      *buffer_00 = iVar2;
      goto switchD_4041f53c_caseD_5;
    }
    lVar3 = 0;
    for (uVar4 = 0; buffer = *(void **)(buffer_00 + 6), uVar4 < *(ulong *)(buffer_00 + 2);
        uVar4 = uVar4 + 1) {
      recovered_8243166c((undefined8 *)((long)buffer + lVar3));
      lVar3 = lVar3 + 0x40;
    }
    goto LAB_4041f5e8;
  case 8:
    buffer_00 = (int *)param_1[6];
    if (buffer_00 == (int *)0x0) goto switchD_4041f53c_caseD_5;
    iVar2 = *buffer_00 + -1;
    if (*buffer_00 != 0 && iVar2 != 0) goto LAB_4041f5a0;
    lVar3 = 0;
    for (uVar4 = 0; buffer = *(void **)(buffer_00 + 6), uVar4 < *(ulong *)(buffer_00 + 2);
        uVar4 = uVar4 + 1) {
      recovered_82400748(*(void **)((long)buffer + lVar3));
      recovered_8243166c((undefined8 *)(*(long *)(buffer_00 + 6) + lVar3 + 8));
      lVar3 = lVar3 + 0x48;
    }
LAB_4041f5e8:
    recovered_82400748(buffer);
    break;
  case 9:
    puVar1 = (undefined8 *)recovered_8244d1d8((int *)param_1[7]);
    goto switchD_4041f53c_caseD_5;
  }
  puVar1 = (undefined8 *)recovered_82400748(buffer_00);
switchD_4041f53c_caseD_5:
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  return (ulong)puVar1;
}
