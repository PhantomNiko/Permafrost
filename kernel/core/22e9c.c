#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(char *)(0x6068U))
#undef DAT_000475e8
#define DAT_000475e8 (*(int *)(0x475e8U))
#undef DAT_00047e14
#define DAT_00047e14 (*(char *)(0x47e14U))
#undef DAT_00047e24
#define DAT_00047e24 (*(uint *)(0x47e24U))
#undef DAT_00047e28
#define DAT_00047e28 (*(uint *)(0x47e28U))
#undef DAT_00047e2c
#define DAT_00047e2c (*(uint *)(0x47e2cU))
#undef DAT_00047e34
#define DAT_00047e34 (*(int *)(0x47e34U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(char *)(0x47e7cU))
#undef DAT_00047e84
#define DAT_00047e84 (*(int *)(0x47e84U))
#undef DAT_0004808c
#define DAT_0004808c (*(uint *)(0x4808cU))
#undef DAT_0004809c
#define DAT_0004809c (*(uint32_t *)(0x4809cU))
#undef DAT_0007cfd4
#define DAT_0007cfd4 (*(char *)(0x7cfd4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22e9c
 */

uint recovered_22e9c(void)

{
  unsigned char frame[64];

  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (DAT_00047e7c != '\x01') {
    return 0;
  }
  uVar2 = DAT_00047e2c;
  if (DAT_00047e2c == 0) {
    uVar2 = DAT_00047e28;
  }
  if ((DAT_0007cfd4 != '\0') || (bVar1 = recovered_27bd3(), bVar1)) {
    if ((-1 < DAT_000475e8) &&
       ((((piVar3 = recovered_2a2f6(DAT_000475e8), piVar3 != (int *)0x0 &&
          ((char)piVar3[1] == DAT_00047e14)) && (piVar3[2] == DAT_00047e24)) &&
        (uVar4 = piVar3[3], DAT_00047e28 <= uVar4)))) {
LAB_00022f0b:
      if (uVar2 < uVar4) {
        uVar2 = uVar4;
      }
      goto LAB_00022f8b;
    }
    puVar5 = &DAT_0004809c;
    for (uVar6 = 0; uVar6 < DAT_0004808c; uVar6 = uVar6 + 1) {
      if ((((char)puVar5[-2] == DAT_00047e14) && (puVar5[-1] == DAT_00047e24)) &&
         (uVar4 = *puVar5, DAT_00047e28 <= uVar4)) goto LAB_00022f0b;
      puVar5 = puVar5 + 0xd;
    }
  }
  if (DAT_00047e84 == 0) {
  }
  else if (((DAT_00047e14 == DAT_00006068) && (DAT_00047e24 == 0x41)) &&
          ((DAT_00047e34 == 1 && (uVar4 = recovered_2a31e(), uVar2 < uVar4)))) {
    uVar2 = uVar4;
  }
LAB_00022f8b:
  DAT_00047e2c = DAT_00047e28;
  if (DAT_00047e28 < uVar2) {
    DAT_00047e2c = uVar2;
  }
  return DAT_00047e2c;
}
