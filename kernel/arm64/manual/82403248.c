/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af40 (*(uint32_t volatile *)(0x8254205cU))
void recovered_82403248(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
      pf_write_mair_el1(*(undefined8 *)(param_1 + 0x48));
      pf_write_tcr_el1(*(undefined8 *)(param_1 + 0x30));
      pf_write_ttbr0_el1(*(undefined8 *)(param_1 + 0x38));
      pf_write_ttbr1_el1(*(undefined8 *)(param_1 + 0x40));
      DataSynchronizationBarrier(3,3,0);
      InstructionSynchronizationBarrier();
      TLBI_VMALLE1();
      DataSynchronizationBarrier(3,3,0);
      InstructionSynchronizationBarrier();
      pf_write_sctlr_el1(*(ulong *)(param_1 + 0x28));
      InstructionSynchronizationBarrier();
    }
    DAT_4047af40 = *(undefined4 *)(param_1 + 0x18);
    DataSynchronizationBarrier(3,3,0);
    recovered_82402e00(0x8254205cU,4);
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0x14));
    }
  }
  do {
    WaitForEvent();
  } while( true );
}
