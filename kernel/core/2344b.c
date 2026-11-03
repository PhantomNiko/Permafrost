#include "functions.h"
#undef DAT_0005d9c8
#define DAT_0005d9c8 (*(int *)(0x5d9c8U))
#undef DAT_0005d9cc
#define DAT_0005d9cc (*(uint32_t *)(0x5d9ccU))
#define local_1c (*(undefined4 *)(frame + 40))
#define local_18 (*(undefined4 *)(frame + 44))
#define puStackY_34 (*(undefined4 * *)(frame + 16))
#define local_14 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2344b
 */

void recovered_2344b(int param_1)

{
  unsigned char frame[100] = {0};

  undefined4 uVar1;
  int extraout_ECX = 0;
  int iVar2;
  undefined4 *this;

  this = &DAT_0005d9cc;
  do {
    this = (undefined4 *)*this;
    if (this == (undefined4 *)0x0) goto LAB_0002349c;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    uVar1 = recovered_2385f(this,(undefined2 *)&local_1c);
  } while (((char)uVar1 == '\0') || (PF_PART1(local_1c, 2) != '\x01'));
  *(undefined4 **)(param_1 + 0xc) = this;
  *(undefined4 *)(param_1 + 0x10) = local_18;
  *(undefined4 *)(param_1 + 0x14) = local_14;
  recovered_23540(param_1);
LAB_0002349c:
  recovered_230cf();
  iVar2 = DAT_0005d9c8;
  if (DAT_0005d9c8 == 0) {
    recovered_230cf();
    iVar2 = extraout_ECX;
  }
  *(undefined1 *)(iVar2 + 0x18) = 1;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  recovered_2344b(iVar2);
  *puStackY_34 = DAT_0005d9cc;
  DAT_0005d9cc = puStackY_34;
  return;
}
