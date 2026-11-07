/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_020c77e4 (*(uint32_t volatile *)(0x223dbfcU))
#define DAT_020c77e8 (*(uint32_t volatile *)(0x223dc00U))
int recovered_20be360(undefined4 *incoming_ecx,ulong *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  void *pf_output_slot;
  ulong size;
  uint uVar6;
  char *pcVar7;

  size = 0;
  if (incoming_edx != (ulong *)0x0 && incoming_ecx != (undefined4 *)0x0) {
    iVar1 = DAT_020c77e8;
    if (iVar1 != 0) {
      size = 0;
      uVar6 = 0;
      do {
        iVar1 = DAT_020c77e4;
        pcVar7 = *(char **)(iVar1 + uVar6 * 4);
        pcVar4 = &DAT_0208e2dc;
        if (pcVar7 != (char *)0x0) {
          pcVar4 = pcVar7;
        }
        uVar5 = recovered_2002270(pcVar4);
        uVar6 = uVar6 + 1;
        uVar3 = DAT_020c77e8;
        size = size + uVar5 + (uint)(uVar6 < uVar3);
      } while (uVar6 < uVar3);
    }
    pf_output_slot = recovered_2001650(size + (size == 0));
    size = 0;
    if (pf_output_slot != (void *)0x0) {
      iVar1 = DAT_020c77e8;
      if (iVar1 != 0) {
        piVar2 = (int *)DAT_020c77e4;
        pcVar7 = &DAT_0208e2dc;
        if ((char *)*piVar2 != (char *)0x0) {
          pcVar7 = (char *)*piVar2;
        }
        size = recovered_2002270(pcVar7);
        recovered_2001b70(pf_output_slot,pcVar7,size);
        uVar6 = DAT_020c77e8;
        if (1 < uVar6) {
          uVar6 = 1;
          do {
            *(undefined1 *)((int)pf_output_slot + size) = 10;
            iVar1 = DAT_020c77e4;
            pcVar7 = *(char **)(iVar1 + uVar6 * 4);
            pcVar4 = &DAT_0208e2dc;
            if (pcVar7 != (char *)0x0) {
              pcVar4 = pcVar7;
            }
            uVar5 = recovered_2002270(pcVar4);
            recovered_2001b70((void *)((int)pf_output_slot + size + 1),pcVar4,uVar5);
            size = uVar5 + 1 + size;
            uVar6 = uVar6 + 1;
            uVar3 = DAT_020c77e8;
          } while (uVar6 < uVar3);
        }
      }
      *incoming_ecx = pf_output_slot;
      *incoming_edx = size;
      size = CONCAT31((int3)(size >> 8),1);
    }
  }
  return size;
}
