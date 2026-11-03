#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(char *)(0x6068U))
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
#undef DAT_0004ee48
#define DAT_0004ee48 (*(int *)(0x4ee48U))
#undef DAT_0004ee90
#define DAT_0004ee90 (*(char *)(0x4ee90U))
#undef DAT_0004ee98
#define DAT_0004ee98 (*(int *)(0x4ee98U))
#undef DAT_0004eeac
#define DAT_0004eeac (*(uint *)(0x4eeacU))
#undef DAT_0004eebc
#define DAT_0004eebc (*(uint32_t *)(0x4eebcU))
#undef DAT_00084054
#define DAT_00084054 (*(char *)(0x84054U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23284
 */

uint recovered_23284(void)

{
  unsigned char frame[64];

  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (DAT_0004ee90 != '\x01') {
    return 0;
  }
  uVar2 = DAT_0004ee40;
  if (DAT_0004ee40 == 0) {
    uVar2 = DAT_0004ee3c;
  }
  if ((DAT_00084054 != '\0') || (bVar1 = recovered_28aa6(), bVar1)) {
    if ((-1 < DAT_0004e5f8) &&
       ((((piVar3 = recovered_2b4d3(DAT_0004e5f8), piVar3 != (int *)0x0 &&
          ((char)piVar3[1] == DAT_0004ee28)) && (piVar3[2] == DAT_0004ee38)) &&
        (uVar4 = piVar3[3], DAT_0004ee3c <= uVar4)))) {
LAB_000232f3:
      if (uVar2 < uVar4) {
        uVar2 = uVar4;
      }
      goto LAB_00023379;
    }
    puVar5 = &DAT_0004eebc;
    for (uVar6 = 0; uVar6 < DAT_0004eeac; uVar6 = uVar6 + 1) {
      if ((((char)puVar5[-2] == DAT_0004ee28) && (puVar5[-1] == DAT_0004ee38)) &&
         (uVar4 = *puVar5, DAT_0004ee3c <= uVar4)) goto LAB_000232f3;
      puVar5 = puVar5 + 0xd;
    }
  }
  if (DAT_0004ee98 == 0) {
  }
  else if (((DAT_0004ee28 == DAT_00006068) && (DAT_0004ee38 == 0x41)) &&
          (((DAT_0004ee48 == 6 || (DAT_0004ee48 == 1)) && (uVar4 = recovered_2b4fb(), uVar2 < uVar4)
           ))) {
    uVar2 = uVar4;
  }
LAB_00023379:
  DAT_0004ee40 = DAT_0004ee3c;
  if (DAT_0004ee3c < uVar2) {
    DAT_0004ee40 = uVar2;
  }
  return DAT_0004ee40;
}
