#include "functions.h"
#undef DAT_000570a0
#define DAT_000570a0 (*(uint8_t *)(0x570a0U))
#undef DAT_000570a4
#define DAT_000570a4 (*(uint8_t *)(0x570a4U))
#undef DAT_000570a8
#define DAT_000570a8 (*(uint8_t *)(0x570a8U))
#undef DAT_000570ac
#define DAT_000570ac (*(uint8_t *)(0x570acU))
#undef _DAT_000570a0
#define _DAT_000570a0 (*(float *)(0x570a0U))
#undef _DAT_000570a4
#define _DAT_000570a4 (*(float *)(0x570a4U))
#undef _DAT_000570a8
#define _DAT_000570a8 (*(float *)(0x570a8U))
#undef _DAT_000570ac
#define _DAT_000570ac (*(float *)(0x570acU))
#define local_14 (*(double *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2edb8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_2edb8(uint3 *param_1,short param_2,ushort param_3)

{
  unsigned char frame[68] = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;

  fVar6 = (float10)0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_14 = 0.0;
      recovered_21348((int)&local_14,(int)param_1,8);
      fVar4 = (float10)local_14;
      fVar5 = (float10)1;
      fVar6 = fVar4;
      if (fVar5 < fVar4) {
        fVar6 = fVar5;
      }
      fVar5 = -fVar5;
      bVar3 = fVar5 == fVar4;
      bVar2 = fVar5 < fVar4;
    }
    else {
      if (param_3 != 0x20) {
        return fVar6;
      }
      local_14 = pf_bits_double((pf_double_bits(local_14) & 0xffffffff00000000));
      recovered_21348((int)&local_14,(int)param_1,4);
      fVar4 = (float10)PF_PART4(local_14, 0);
      fVar5 = (float10)1;
      fVar6 = fVar4;
      if (fVar5 < fVar4) {
        fVar6 = fVar5;
      }
      bVar3 = -(float10)1 == fVar4;
      bVar2 = -(float10)1 < fVar4;
      fVar5 = -fVar5;
    }
    if (!(bool)(bVar2 | bVar3)) {
      fVar6 = fVar5;
    }
  }
  else if (param_2 == 1) {
    switch((uintptr_t)((uint)param_3 << 0x1d | param_3 - 8 >> 3)) {
    case 0:
      fVar6 = (float10)(int)((byte)*param_1 - 0x80) * (float10)_DAT_000570ac;
      break;
    case 1:
      fVar6 = (float10)(short)*param_1 * (float10)_DAT_000570a8;
      break;
    case 2:
      uVar1 = *param_1 - 0x1000000;
      if (-1 < *(char *)((int)param_1 + 2)) {
        uVar1 = (uint)*param_1;
      }
      fVar6 = (float10)(int)uVar1 * (float10)_DAT_000570a4;
      break;
    case 3:
      fVar6 = (float10)*(int *)param_1 * (float10)_DAT_000570a0;
    }
  }
  return fVar6;
}
