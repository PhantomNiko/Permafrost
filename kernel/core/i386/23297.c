#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(char *)(0x6068U))
#undef DAT_0004c5f8
#define DAT_0004c5f8 (*(int *)(0x4c5f8U))
#undef DAT_0004ce28
#define DAT_0004ce28 (*(char *)(0x4ce28U))
#undef DAT_0004ce38
#define DAT_0004ce38 (*(uint *)(0x4ce38U))
#undef DAT_0004ce3c
#define DAT_0004ce3c (*(uint *)(0x4ce3cU))
#undef DAT_0004ce40
#define DAT_0004ce40 (*(uint *)(0x4ce40U))
#undef DAT_0004ce48
#define DAT_0004ce48 (*(int *)(0x4ce48U))
#undef DAT_0004ce90
#define DAT_0004ce90 (*(char *)(0x4ce90U))
#undef DAT_0004ce98
#define DAT_0004ce98 (*(int *)(0x4ce98U))
#undef DAT_0004ceac
#define DAT_0004ceac (*(uint *)(0x4ceacU))
#undef DAT_0004cebc
#define DAT_0004cebc (*(uint32_t *)(0x4cebcU))
#undef DAT_00082054
#define DAT_00082054 (*(char *)(0x82054U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23297
 */

uint recovered_23297(void)

{
  unsigned char frame[64];

  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (DAT_0004ce90 != '\x01') {
    return 0;
  }
  uVar2 = DAT_0004ce40;
  if (DAT_0004ce40 == 0) {
    uVar2 = DAT_0004ce3c;
  }
  if ((DAT_00082054 != '\0') || (bVar1 = recovered_28aac(), bVar1)) {
    if ((-1 < DAT_0004c5f8) &&
       ((((piVar3 = recovered_2b4d9(DAT_0004c5f8), piVar3 != (int *)0x0 &&
          ((char)piVar3[1] == DAT_0004ce28)) && (piVar3[2] == DAT_0004ce38)) &&
        (uVar4 = piVar3[3], DAT_0004ce3c <= uVar4)))) {
LAB_00023306:
      if (uVar2 < uVar4) {
        uVar2 = uVar4;
      }
      goto LAB_0002338c;
    }
    puVar5 = &DAT_0004cebc;
    for (uVar6 = 0; uVar6 < DAT_0004ceac; uVar6 = uVar6 + 1) {
      if ((((char)puVar5[-2] == DAT_0004ce28) && (puVar5[-1] == DAT_0004ce38)) &&
         (uVar4 = *puVar5, DAT_0004ce3c <= uVar4)) goto LAB_00023306;
      puVar5 = puVar5 + 0xd;
    }
  }
  if (DAT_0004ce98 == 0) {
  }
  else if (((DAT_0004ce28 == DAT_00006068) && (DAT_0004ce38 == 0x41)) &&
          (((DAT_0004ce48 == 6 || (DAT_0004ce48 == 1)) && (uVar4 = recovered_2b501(), uVar2 < uVar4)
           ))) {
    uVar2 = uVar4;
  }
LAB_0002338c:
  DAT_0004ce40 = DAT_0004ce3c;
  if (DAT_0004ce3c < uVar2) {
    DAT_0004ce40 = uVar2;
  }
  return DAT_0004ce40;
}
