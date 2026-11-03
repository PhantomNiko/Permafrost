#include "functions.h"
#undef DAT_000445d8
#define DAT_000445d8 (*(int *)(0x445d8U))
#undef DAT_00054df4
#define DAT_00054df4 (*(char *)(0x54df4U))
#undef DAT_00054e04
#define DAT_00054e04 (*(uint *)(0x54e04U))
#undef DAT_00054e08
#define DAT_00054e08 (*(uint *)(0x54e08U))
#undef DAT_00054e0c
#define DAT_00054e0c (*(uint *)(0x54e0cU))
#undef DAT_00054e28
#define DAT_00054e28 (*(char *)(0x54e28U))
#undef DAT_00054f20
#define DAT_00054f20 (*(int *)(0x54f20U))
#undef DAT_00054f24
#define DAT_00054f24 (*(uint32_t *)(0x54f24U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3dce9
 */

void recovered_3dce9(char param_1,uint param_2,int param_3)

{
  unsigned char frame[68];

  uint uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    piVar2 = &DAT_00054f24;
    local_14 = DAT_000445d8;
    iVar3 = DAT_00054f20;
    while (bVar4 = iVar3 != 0, iVar3 = iVar3 + -1, bVar4) {
      if ((char)piVar2[1] == param_1) {
        uVar5 = recovered_3dca4(piVar2[2],piVar2[3],param_2,param_3);
        if (((char)uVar5 != '\0') && (piVar2[8] = 0, local_14 == *piVar2)) {
          DAT_000445d8 = -1;
          local_14 = -1;
        }
      }
      piVar2 = piVar2 + 9;
    }
    if ((DAT_00054e28 == '\x01') && (DAT_00054df4 == param_1)) {
      uVar1 = DAT_00054e0c;
      if (DAT_00054e0c == 0) {
        uVar1 = DAT_00054e08;
      }
      uVar5 = recovered_3dca4(DAT_00054e04,uVar1,param_2,param_3);
      if ((char)uVar5 != '\0') {
        recovered_29b0f();
        DAT_000445d8 = -1;
      }
    }
  }
  return;
}

