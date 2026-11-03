#include "functions.h"
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
#undef DAT_0005e71c
#define DAT_0005e71c (*(char *)(0x5e71cU))
#undef DAT_0005e938
#define DAT_0005e938 (*(int *)(0x5e938U))
#undef DAT_0005e93c
#define DAT_0005e93c (*(uint32_t *)(0x5e93cU))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x54b0b
 */

void recovered_54b0b(char param_1,uint param_2,uint param_3)

{
  unsigned char frame[68] = {0};

  uint uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;

  if (param_3 != 0) {
    piVar2 = &DAT_0005e93c;
    local_14 = DAT_0005d764;
    iVar3 = DAT_0005e938;
    while (bVar4 = iVar3 != 0, iVar3 = iVar3 + -1, bVar4) {
      if ((char)piVar2[1] == param_1) {
        uVar5 = recovered_54bc8(piVar2[2],piVar2[3],param_2,param_3);
        if (((char)uVar5 != '\0') && (piVar2[0xc] = 0, local_14 == *piVar2)) {
          DAT_0005d764 = -1;
          local_14 = -1;
        }
      }
      piVar2 = piVar2 + 0xd;
    }
    if ((DAT_0005e71c == '\x01') && (DAT_0005e6b4 == param_1)) {
      uVar1 = DAT_0005e6cc;
      if (DAT_0005e6cc == 0) {
        uVar1 = DAT_0005e6c8;
      }
      uVar5 = recovered_54bc8(DAT_0005e6c4,uVar1,param_2,param_3);
      if ((char)uVar5 != '\0') {
        recovered_39f57();
        DAT_0005d764 = -1;
      }
    }
  }
  return;
}
