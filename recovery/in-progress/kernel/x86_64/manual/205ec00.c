/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_205ec00(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *buffer;
  ulong uVar2;
  long lVar3;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;

  if (param_1 == (undefined8 *)0x0) goto LAB_0204233d;
  switch((uintptr_t)(*(undefined4 *)param_1)) {
  case 3:
    buffer = (uint *)param_1[2];
    goto LAB_02042313;
  case 4:
    buffer = (uint *)param_1[3];
LAB_02042313:
    recovered_2000bb0(buffer);
    break;
  case 7:
    buffer = (uint *)param_1[5];
    if (buffer != (uint *)0x0) {
      uVar1 = *buffer;
      if (uVar1 < 2) {
        if (*(long *)(buffer + 2) != 0) {
          lVar3 = 0;
          uVar2 = 0;
          do {
            recovered_205ec00((undefined8 *)(*(long *)(buffer + 6) + lVar3));
            uVar2 = uVar2 + 1;
            lVar3 = lVar3 + 0x40;
          } while (uVar2 < *(ulong *)(buffer + 2));
        }
        goto LAB_02042307;
      }
LAB_020422b2:
      *buffer = uVar1 - 1;
    }
    break;
  case 8:
    buffer = (uint *)param_1[6];
    if (buffer != (uint *)0x0) {
      uVar1 = *buffer;
      if (1 < uVar1) goto LAB_020422b2;
      if (*(long *)(buffer + 2) != 0) {
        lVar3 = 8;
        uVar2 = 0;
        do {
          recovered_2000bb0(*(void **)(*(long *)(buffer + 6) + -8 + lVar3));
          recovered_205ec00((undefined8 *)(*(long *)(buffer + 6) + lVar3));
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 0x48;
        } while (uVar2 < *(ulong *)(buffer + 2));
      }
LAB_02042307:
      recovered_2000bb0(*(void **)(buffer + 6));
      goto LAB_02042313;
    }
    break;
  case 9:
    recovered_209d700((uint *)param_1[7]);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  in_XMM0_Da = 0;
  in_XMM0_Db = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_0204233d:
  return pf_bits_double(CONCAT44(in_XMM0_Db,in_XMM0_Da));
}
