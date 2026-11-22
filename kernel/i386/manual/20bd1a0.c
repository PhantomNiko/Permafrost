#include "functions.h"


#undef str_020d6a07
#undef str_020d6a11
#undef str_020d6a28
#undef format


#undef str_020d6a07
#undef str_020d6a11
#undef str_020d6a28
#undef format

#undef DAT_020c5119
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#undef DAT_020d6b5b
#define DAT_020d6b5b (*(uint8_t *)(0x20d6b5bU))
#undef DAT_0215bc80
#define DAT_0215bc80 (*(uint32_t volatile *)(0x215bc80U))
#undef DAT_0215bc84
#define DAT_0215bc84 (*(uint32_t volatile *)(0x215bc84U))
#undef str_020d6b5e
#define str_020d6b5e (*(char (*)[1])(0x20d6b5eU))
#define local_18 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20bd1a0
 */

void recovered_20bd1a0(char *in_ECX,uint in_EDX,uint param_1,char param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *vararg0;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  if (in_EDX != 0 && in_ECX != (char *)0x0) {
    iVar3 = DAT_0215bc80;
    if (iVar3 != 0) {
      uVar5 = DAT_0215bc84;
      uVar6 = 0;
      if (param_1 <= uVar5) {
        uVar6 = param_1;
      }
      if (uVar6 < uVar5) {
        local_18 = uVar6 * 0x402;
        do {
          iVar3 = DAT_0215bc80;
          uVar8 = (uint)*(ushort *)(iVar3 + 0x400 + uVar6 * 0x402);
          uVar4 = recovered_2002270(in_ECX);
          uVar5 = uVar4 + 1;
          if (uVar5 < in_EDX) {
            if (uVar4 == 0) {
              uVar5 = 0;
            }
            else {
              (in_ECX + uVar4)[0] = '\n';
              (in_ECX + uVar4)[1] = '\0';
            }
            if (uVar5 + 1 < in_EDX && uVar8 != 0) {
              uVar7 = 0;
              do {
                in_ECX[uVar7 + uVar5] = *(char *)(iVar3 + local_18 + uVar7);
                uVar1 = uVar7 + 1;
                if (uVar8 <= uVar1) break;
                uVar2 = uVar5 + 2 + uVar7;
                uVar7 = uVar1;
              } while (uVar2 < in_EDX);
              uVar5 = uVar5 + uVar1;
            }
            in_ECX[uVar5] = '\0';
          }
          uVar6 = uVar6 + 1;
          local_18 = local_18 + 0x402;
          uVar5 = DAT_0215bc84;
        } while (uVar6 < uVar5);
      }
    }
    if (*in_ECX == '\0') {
      vararg0 = &DAT_020d6b5b;
      if (param_2 == '\0') {
        vararg0 = str_020d6b5e;
      }
      pf_varargs_20044f0__4_(in_ECX,in_EDX,&DAT_020c5119,(uint)vararg0);
    }
  }
  return;
}
