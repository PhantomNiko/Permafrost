#include "functions.h"
#undef DAT_0004e5f8
#define DAT_0004e5f8 (*(int *)(0x4e5f8U))
#undef DAT_0004ee28
#define DAT_0004ee28 (*(char *)(0x4ee28U))
#undef DAT_0004ee38
#define DAT_0004ee38 (*(uint *)(0x4ee38U))
#undef DAT_0004ee3c
#define DAT_0004ee3c (*(uint *)(0x4ee3cU))
#undef DAT_0004ee40
#define DAT_0004ee40 (*(uint *)(0x4ee40U))
#undef DAT_0004ee90
#define DAT_0004ee90 (*(char *)(0x4ee90U))
#undef DAT_0004eeac
#define DAT_0004eeac (*(int *)(0x4eeacU))
#undef DAT_0004eeb0
#define DAT_0004eeb0 (*(uint32_t *)(0x4eeb0U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x46a1a
 */

void recovered_46a1a(char param_1,uint param_2,uint param_3)

{
  unsigned char frame[68];

  uint uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;

  if (param_3 != 0) {
    piVar2 = &DAT_0004eeb0;
    local_14 = DAT_0004e5f8;
    iVar3 = DAT_0004eeac;
    while (bVar4 = iVar3 != 0, iVar3 = iVar3 + -1, bVar4) {
      if ((char)piVar2[1] == param_1) {
        uVar5 = recovered_46ad7(piVar2[2],piVar2[3],param_2,param_3);
        if (((char)uVar5 != '\0') && (piVar2[0xc] = 0, local_14 == *piVar2)) {
          DAT_0004e5f8 = -1;
          local_14 = -1;
        }
      }
      piVar2 = piVar2 + 0xd;
    }
    if ((DAT_0004ee90 == '\x01') && (DAT_0004ee28 == param_1)) {
      uVar1 = DAT_0004ee40;
      if (DAT_0004ee40 == 0) {
        uVar1 = DAT_0004ee3c;
      }
      uVar5 = recovered_46ad7(DAT_0004ee38,uVar1,param_2,param_3);
      if ((char)uVar5 != '\0') {
        recovered_2bce5();
        DAT_0004e5f8 = -1;
      }
    }
  }
  return;
}
