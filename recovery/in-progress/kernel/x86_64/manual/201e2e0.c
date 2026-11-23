#include "functions.h"
#undef DAT_02135000
#define DAT_02135000 (*(uint64_t volatile *)(0x2135000U))
#undef DAT_02135008
#define DAT_02135008 (*(uint8_t volatile *)(0x2135008U))
#undef DAT_0223bb18
#define DAT_0223bb18 (*(uint32_t volatile *)(0x223bb18U))
#undef DAT_0223bb1c
#define DAT_0223bb1c (*(uint32_t volatile *)(0x223bb1cU))
#undef DAT_0223bb20
#define DAT_0223bb20 (*(uint32_t volatile *)(0x223bb20U))
#undef DAT_0223bb34
#define DAT_0223bb34 (*(uint32_t volatile *)(0x223bb34U))
#undef DAT_0223bc2c
#define DAT_0223bc2c (*(uint32_t volatile *)(0x223bc2cU))
#undef DAT_0223bc30
#define DAT_0223bc30 (*(uint32_t volatile *)(0x223bc30U))
#undef DAT_0223c188
#define DAT_0223c188 (*(uint64_t volatile *)(0x223c188U))
#undef DAT_0223d048
#define DAT_0223d048 (*(uint32_t volatile *)(0x223d048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x201e2e0
 */

typedef long (__attribute__((ms_abi)) *PfFirmwareFlush)(uintptr_t);
bool recovered_201e2e0(byte param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  cVar1 = DAT_02135008;
  if ((((cVar1 != '\0') || (lVar3 = DAT_02135000, lVar3 == 0)) ||
      (iVar2 = DAT_0223bb18, iVar2 != 0x33454657)) || (iVar2 = DAT_0223bb1c, iVar2 != 0xb)) {
    return false;
  }
  uVar6 = DAT_0223bb20;
  if ((uVar6 < 0x21f8) || (-1 < (char)param_1)) {
LAB_0201e32c:
    uVar4 = 0;
  }
  else {
    uVar6 = DAT_0223d048;
    uVar8 = 0x80;
    if (uVar6 < 0x80) {
      uVar8 = uVar6;
    }
    if ((param_1 - 0x80 < uVar8) &&
       (uVar4 = (ulong)(param_1 - 0x80), *(int *)(lVar3 + 0x1d38 + uVar4 * 4) != 0)) {
      uVar6 = *(uint *)(lVar3 + 0x1538 + uVar4 * 4);
      uVar5 = *(ulong *)(lVar3 + 0x1738 + uVar4 * 8);
    }
    else {
      if (!SBORROW1('\0',param_1)) goto LAB_0201e32c;
      uVar6 = DAT_0223bb34;
      uVar5 = DAT_0223c188;
    }
    uVar4 = (ulong)uVar6;
    if (uVar5 != 0) {
      uVar4 = uVar5;
    }
  }
  uVar6 = DAT_0223bb20;
  iVar2 = DAT_0223bc2c;
  uVar8 = DAT_0223bc30;
  if ((uVar8 == 0 || iVar2 == 0) || uVar6 < 0x21f8) {
    if ((uVar4 != 0) && (*(long *)(uVar4 + 8) != 0)) {
      if (*(char *)(*(long *)(uVar4 + 8) + 8) == '\0') {
        return true;
      }
      if (*(code **)(uVar4 + 0x28) == (code *)0x0) {
        return true;
      }
      lVar3 = ((PfFirmwareFlush)*(uintptr_t *)(uVar4 + 0x28))(uVar4);
      return -1 < lVar3;
    }
  }
  else {
    uVar6 = 0;
    if ((char)param_1 < '\0') {
      uVar7 = DAT_0223d048;
      uVar9 = 0x80;
      if (uVar7 < 0x80) {
        uVar9 = uVar7;
      }
      uVar7 = param_1 - 0x80;
      if ((uVar7 < uVar9) && (uVar6 = uVar7, *(int *)(lVar3 + 0x1d38 + (ulong)uVar7 * 4) == 0)) {
        uVar6 = 0;
      }
    }
    *(uint *)((ulong)uVar8 + 0x18) = uVar6;
    uVar6 = DAT_0223bc2c;
    if ((code *)(ulong)uVar6 != (code *)0x0) {
      uVar8 = DAT_0223bc30;
      if ((undefined8 *)(ulong)uVar8 != (undefined8 *)0x0) {
        *(undefined8 *)(ulong)uVar8 = 5;
        iVar2 = ((uint (*)(uint32_t *))(uintptr_t)uVar6)((uint32_t *)(uintptr_t)uVar8);
        return iVar2 != 0;
      }
    }
  }
  return false;
}
