#include "functions.h"



#undef local_10

#undef DAT_022543bc
#define DAT_022543bc (*(uint32_t volatile *)(0x22543bcU))
#undef DAT_022543c0
#define DAT_022543c0 (*(uint32_t volatile *)(0x22543c0U))
#undef DAT_022543c4
#define DAT_022543c4 (*(uint32_t volatile *)(0x22543c4U))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20bf980
 */

uint recovered_20bf980(int *param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (param_1 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *param_1 + 0x9e3779b9;
    { __typeof__(DAT_022543bc) pf_atomic_old = __atomic_fetch_add(&(DAT_022543bc),1,__ATOMIC_SEQ_CST);
uVar1 = pf_atomic_old;
iVar2 = pf_atomic_old;
uVar1 = (__typeof__(DAT_022543bc))(pf_atomic_old + (1));
uVar1 = (__typeof__(DAT_022543bc))(pf_atomic_old + (1));
uVar1 = (__typeof__(DAT_022543bc))(pf_atomic_old + (1));
}
