/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2043a90(undefined4 *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *buffer;
  uint *buffer_00;
  uint extraout_EDX = 0;
  uint incoming_edx_00;
  uint uVar1;
  int iVar2;

  if (incoming_ecx == (undefined4 *)0x0) {
    return;
  }
  switch((uintptr_t)(*incoming_ecx)) {
  case 3:
    buffer = (void *)incoming_ecx[3];
    break;
  case 4:
    buffer = (void *)incoming_ecx[4];
    break;
  default:
    goto switchD_02035ca1_caseD_5;
  case 7:
    buffer_00 = (uint *)incoming_ecx[6];
    if (buffer_00 == (uint *)0x0) goto switchD_02035ca1_caseD_5;
    uVar1 = *buffer_00;
    if (uVar1 < 2) {
      if (buffer_00[2] != 0) {
        iVar2 = 0;
        uVar1 = 0;
        do {
          recovered_2043a90((undefined4 *)(buffer_00[4] + iVar2),incoming_edx);
          uVar1 = uVar1 + 1;
          iVar2 = iVar2 + 0x24;
          incoming_edx = extraout_EDX;
        } while (uVar1 < buffer_00[2]);
      }
      recovered_2001710((void *)buffer_00[4]);
      recovered_2001710(buffer_00);
      goto switchD_02035ca1_caseD_5;
    }
    goto LAB_02035d1b;
  case 8:
    buffer_00 = (uint *)incoming_ecx[7];
    if (buffer_00 == (uint *)0x0) goto switchD_02035ca1_caseD_5;
    uVar1 = *buffer_00;
    if (uVar1 < 2) {
      if (buffer_00[1] != 0) {
        uVar1 = 0;
        iVar2 = 4;
        do {
          recovered_2001710(*(void **)((buffer_00[3] - 4) + iVar2));
          recovered_2043a90((undefined4 *)(buffer_00[3] + iVar2),incoming_edx_00);
          uVar1 = uVar1 + 1;
          iVar2 = iVar2 + 0x28;
        } while (uVar1 < buffer_00[1]);
      }
      recovered_2001710((void *)buffer_00[3]);
      recovered_2001710(buffer_00);
      goto switchD_02035ca1_caseD_5;
    }
LAB_02035d1b:
    *buffer_00 = uVar1 - 1;
    goto switchD_02035ca1_caseD_5;
  case 9:
    recovered_207b2c0((uint *)incoming_ecx[8],incoming_edx);
    goto switchD_02035ca1_caseD_5;
  }
  recovered_2001710(buffer);
switchD_02035ca1_caseD_5:
  *incoming_ecx = 0;
  incoming_ecx[1] = 0;
  incoming_ecx[2] = 0;
  incoming_ecx[3] = 0;
  incoming_ecx[4] = 0;
  incoming_ecx[5] = 0;
  incoming_ecx[6] = 0;
  incoming_ecx[7] = 0;
  incoming_ecx[8] = 0;
  return;
}
