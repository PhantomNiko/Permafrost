#include "functions.h"
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
#undef DAT_0004ce90
#define DAT_0004ce90 (*(char *)(0x4ce90U))
#undef DAT_0004ceac
#define DAT_0004ceac (*(int *)(0x4ceacU))
#undef DAT_0004ceb0
#define DAT_0004ceb0 (*(uint32_t *)(0x4ceb0U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44c34
 */

void recovered_44c34(char param_1,uint param_2,uint param_3)

{
  unsigned char frame[68];

  uint uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;

  if (param_3 != 0) {
    piVar2 = &DAT_0004ceb0;
    local_14 = DAT_0004c5f8;
    iVar3 = DAT_0004ceac;
    while (bVar4 = iVar3 != 0, iVar3 = iVar3 + -1, bVar4) {
      if ((char)piVar2[1] == param_1) {
        uVar5 = recovered_44cf1(piVar2[2],piVar2[3],param_2,param_3);
        if (((char)uVar5 != '\0') && (piVar2[0xc] = 0, local_14 == *piVar2)) {
          DAT_0004c5f8 = -1;
          local_14 = -1;
        }
      }
      piVar2 = piVar2 + 0xd;
    }
    if ((DAT_0004ce90 == '\x01') && (DAT_0004ce28 == param_1)) {
      uVar1 = DAT_0004ce40;
      if (DAT_0004ce40 == 0) {
        uVar1 = DAT_0004ce3c;
      }
      uVar5 = recovered_44cf1(DAT_0004ce38,uVar1,param_2,param_3);
      if ((char)uVar5 != '\0') {
        recovered_2bceb();
        DAT_0004c5f8 = -1;
      }
    }
  }
  return;
}
