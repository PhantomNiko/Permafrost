/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define local_80 (*(int *)(frame + 16))
#define local_7c (*(int *)(frame + 20))
#define local_40 (*(uint *)(frame + 80))
#define local_3a (*(short *)(frame + 86))
#define local_28 (*(char * *)(frame + 104))
#define local_24 (*(char * *)(frame + 108))
#define local_20 (*(uint *)(frame + 112))
#define local_1c (*(int * *)(frame + 116))
#define local_18 (*(int * *)(frame + 120))
#define local_14 (*(uint *)(frame + 124))


void recovered_20654f0(int *in_ECX,char *in_EDX_00,int param_3)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_EDX;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;

  bVar7 = 0;
  if ((((in_EDX_00 != (char *)0x0 && in_ECX != (int *)0x0) && (param_3 != 0)) &&
      (*in_EDX_00 != '\0')) && (local_20 = in_ECX[6], local_20 != 0)) {
    piVar4 = in_ECX + 8;
    local_14 = 0;
    local_24 = in_EDX_00;
    local_1c = piVar4;
    local_18 = in_ECX;
    do {
      if ((piVar4[local_14 * 0x10 + 1] == 0xb) || (piVar4[local_14 * 0x10 + 1] == 2)) {
        in_EDX = piVar4 + local_14 * 0x10;
        uVar6 = in_EDX[0xe];
        uVar1 = in_EDX[0xf];
        if ((uVar6 != 0 || uVar1 != 0) &&
           ((uVar6 < (uint)((char)local_18[2] != '\0') * 8 + 0x10) <= uVar1)) {
          if ((uint)in_EDX[2] < local_20) {
            piVar4 = piVar4 + in_EDX[2] * 0x10;
            piVar5 = &local_80;
            for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar5 = *piVar4;
              piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
              piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
            }
            if (local_7c == 3) {
              uVar8 = recovered_20012c0(in_EDX[10],in_EDX[0xb],uVar6,uVar1);
              piVar4 = local_1c;
              if ((uint)uVar8 == 0) goto LAB_02065563;
              uVar6 = 0;
              do {
                uVar2 = recovered_2063490(local_18,(int)in_EDX,(int)&local_80,uVar6,&local_40);
                if ((((char)uVar2 != '\0') && (local_28 != (char *)0x0)) &&
                   ((local_3a != 0 && (iVar3 = recovered_20022a0(local_28,local_24), iVar3 == 0))))
                {
                  recovered_20636f0((int)local_18,(int)&local_40,(uint *)param_3);
                  return;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < (uint)uVar8);
              local_20 = local_18[6];
            }
            piVar4 = local_1c;
          }
        }
      }
LAB_02065563:
      local_14 = local_14 + 1;
    } while (local_14 < local_20);
  }
  return;
}
#undef local_80
#undef local_7c
#undef local_40
#undef local_3a
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
