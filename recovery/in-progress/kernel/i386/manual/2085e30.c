/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208feb8 (*(uint8_t *)(0x20cd4afU))
#define DAT_0208ffe0 (*(uint8_t *)(0x20c69e5U))
#define DAT_0209008c (*(uint8_t *)(0x20cd678U))
#define in_stack_ffffff80 (*(undefined8 *)(frame + 16))
#define local_14 (*(int *)(frame + 124))
#define local_6c (*(undefined1 * *)(frame + 36))
#define local_74 (*(char (*)[8])(frame + 28))
#define str_0208ffe5 (*(char (*)[1])(0x20c70d7U))
bool recovered_2085e30(undefined4 *incoming_ecx,undefined4 *incoming_edx)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  ulong size;
  void *pvVar2;
  char *pcVar3;
  uint size_00;
  bool bVar4;
  double dVar5;

  if (incoming_edx == (undefined4 *)0x0 || incoming_ecx == (undefined4 *)0x0) {
    return false;
  }
  *incoming_edx = 0;
  bVar4 = false;
  switch((uintptr_t)(*incoming_ecx)) {
  case 1:
    dVar5 = pf_bits_double(CONCAT44((int)((ulonglong)in_stack_ffffff80 >> 0x20),incoming_ecx[1]));
    pcVar3 = &DAT_0208feb8;
    goto LAB_0205bb32;
  case 2:
    dVar5 = (double)pf_bits_float((uint32_t)incoming_ecx[2]);
    pcVar3 = &DAT_0209008c;
LAB_0205bb32:
    recovered_20044f0(local_74,0x60,pcVar3,dVar5);
    size = recovered_2002270(local_74);
    pvVar2 = recovered_2001650(size + 1);
    if (pvVar2 != (void *)0x0) {
      if (size != 0) {
        recovered_2001b70(pvVar2,local_74,size);
      }
      *(undefined1 *)((int)pvVar2 + size) = 0;
    }
    *incoming_edx = pvVar2;
    bVar4 = pvVar2 == (void *)0x0;
    break;
  case 3:
    *incoming_edx = 0;
    local_74[0] = '\0';
    local_74[1] = '\0';
    local_74[2] = '\0';
    local_74[3] = '\0';
    local_74[4] = '\0';
    local_74[5] = '\0';
    local_74[6] = '\0';
    local_74[7] = '\0';
    local_6c = (undefined1 *)0x0;
    uVar1 = recovered_2086030(incoming_ecx,(int)local_74,0);
    if ((char)uVar1 == '\0') {
      recovered_2001710(local_6c);
      return false;
    }
    if (local_6c == (undefined1 *)0x0) {
      local_6c = recovered_2001650(1);
      if (local_6c == (undefined1 *)0x0) {
        local_6c = (undefined1 *)0x0;
      }
      else {
        *local_6c = 0;
      }
    }
    *incoming_edx = local_6c;
    bVar4 = local_6c == (undefined1 *)0x0;
    break;
  default:
    goto switchD_0205ba9d_caseD_4;
  case 5:
    local_14 = incoming_ecx[1];
    bVar4 = local_14 == 0;
    pvVar2 = recovered_2001650(bVar4 + 5);
    if (pvVar2 != (void *)0x0) {
      size_00 = bVar4 | 4;
      pcVar3 = str_0208ffe5;
      if (local_14 != 0) {
        pcVar3 = &DAT_0208ffe0;
      }
      recovered_2001b70(pvVar2,pcVar3,size_00);
      *(undefined1 *)((int)pvVar2 + size_00) = 0;
    }
    *incoming_edx = pvVar2;
    bVar4 = pvVar2 == (void *)0x0;
  }
  bVar4 = !bVar4;
switchD_0205ba9d_caseD_4:
  return bVar4;
}
