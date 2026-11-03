#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(char *)(0x6068U))
#undef DAT_0005d764
#define DAT_0005d764 (*(int *)(0x5d764U))
#undef DAT_0005e6b4
#define DAT_0005e6b4 (*(char *)(0x5e6b4U))
#undef DAT_0005e6c4
#define DAT_0005e6c4 (*(uint *)(0x5e6c4U))
#undef DAT_0005e6c8
#define DAT_0005e6c8 (*(uint *)(0x5e6c8U))
#undef DAT_0005e6cc
#define DAT_0005e6cc (*(uint *)(0x5e6ccU))
#undef DAT_0005e6d4
#define DAT_0005e6d4 (*(int *)(0x5e6d4U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(char *)(0x5e71cU))
#undef DAT_0005e924
#define DAT_0005e924 (*(int *)(0x5e924U))
#undef DAT_0005e938
#define DAT_0005e938 (*(uint *)(0x5e938U))
#undef DAT_0005e948
#define DAT_0005e948 (*(uint32_t *)(0x5e948U))
#undef DAT_000938e0
#define DAT_000938e0 (*(char *)(0x938e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x306a8
 */

uint recovered_306a8(void)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (DAT_0005e71c != '\x01') {
    return 0;
  }
  uVar2 = DAT_0005e6cc;
  if (DAT_0005e6cc == 0) {
    uVar2 = DAT_0005e6c8;
  }
  if ((DAT_000938e0 != '\0') || (bVar1 = recovered_365c7(), bVar1)) {
    if ((-1 < DAT_0005d764) &&
       ((((piVar3 = recovered_396e8(DAT_0005d764), piVar3 != (int *)0x0 &&
          ((char)piVar3[1] == DAT_0005e6b4)) && (piVar3[2] == DAT_0005e6c4)) &&
        (uVar4 = piVar3[3], DAT_0005e6c8 <= uVar4)))) {
LAB_00030717:
      if (uVar2 < uVar4) {
        uVar2 = uVar4;
      }
      goto LAB_0003079d;
    }
    puVar5 = &DAT_0005e948;
    for (uVar6 = 0; uVar6 < DAT_0005e938; uVar6 = uVar6 + 1) {
      if ((((char)puVar5[-2] == DAT_0005e6b4) && (puVar5[-1] == DAT_0005e6c4)) &&
         (uVar4 = *puVar5, DAT_0005e6c8 <= uVar4)) goto LAB_00030717;
      puVar5 = puVar5 + 0xd;
    }
  }
  if (DAT_0005e924 == 0) {
  }
  else if (((DAT_0005e6b4 == DAT_00006068) && (DAT_0005e6c4 == 0x41)) &&
          (((DAT_0005e6d4 == 6 || (DAT_0005e6d4 == 1)) && (uVar4 = recovered_39710(), uVar2 < uVar4)
           ))) {
    uVar2 = uVar4;
  }
LAB_0003079d:
  DAT_0005e6cc = DAT_0005e6c8;
  if (DAT_0005e6c8 < uVar2) {
    DAT_0005e6cc = uVar2;
  }
  return DAT_0005e6cc;
}
