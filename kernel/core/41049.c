#include "functions.h"
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
#undef DAT_00047e7c
#define DAT_00047e7c (*(char *)(0x47e7cU))
#undef DAT_0004808c
#define DAT_0004808c (*(int *)(0x4808cU))
#undef DAT_00048090
#define DAT_00048090 (*(uint32_t *)(0x48090U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41049
 */

void recovered_41049(char param_1,uint param_2,uint param_3)

{
  unsigned char frame[68];

  uint uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;

  if (param_3 != 0) {
    piVar2 = &DAT_00048090;
    local_14 = DAT_000475e8;
    iVar3 = DAT_0004808c;
    while (bVar4 = iVar3 != 0, iVar3 = iVar3 + -1, bVar4) {
      if ((char)piVar2[1] == param_1) {
        uVar5 = recovered_41106(piVar2[2],piVar2[3],param_2,param_3);
        if (((char)uVar5 != '\0') && (piVar2[0xc] = 0, local_14 == *piVar2)) {
          DAT_000475e8 = -1;
          local_14 = -1;
        }
      }
      piVar2 = piVar2 + 0xd;
    }
    if ((DAT_00047e7c == '\x01') && (DAT_00047e14 == param_1)) {
      uVar1 = DAT_00047e2c;
      if (DAT_00047e2c == 0) {
        uVar1 = DAT_00047e28;
      }
      uVar5 = recovered_41106(DAT_00047e24,uVar1,param_2,param_3);
      if ((char)uVar5 != '\0') {
        recovered_2a945();
        DAT_000475e8 = -1;
      }
    }
  }
  return;
}
