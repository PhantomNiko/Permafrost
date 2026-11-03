#include "functions.h"
#undef DAT_0005d9cc
#define DAT_0005d9cc (*(uint32_t * *)(0x5d9ccU))
#define iStack_24 (*(int *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 24))
#define local_18 (*(undefined4 *)(frame + 28))
#define local_14 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23540
 */

void recovered_23540(int param_1)

{
  unsigned char frame[84] = {0};

  undefined4 *puVar1;
  undefined4 uVar2;

  do {
    puVar1 = DAT_0005d9cc;
    if (DAT_0005d9cc == (undefined4 *)0x0) {
      recovered_230cf();
LAB_00023590:
      puVar1[2] = param_1;
      puVar1[3] = *(undefined4 *)(param_1 + 0x14);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
LAB_000235a8:
      puVar1[1] = uVar2;
      recovered_230c0((int)puVar1);
                    /* WARNING: Subroutine does not return */
      recovered_23522(iStack_24);
    }
    if (DAT_0005d9cc == *(undefined4 **)(param_1 + 0xc)) goto LAB_00023590;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    recovered_2385f(DAT_0005d9cc,(undefined2 *)&local_1c);
    if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
      puVar1[2] = param_1;
      puVar1[3] = 0;
      uVar2 = local_18;
      goto LAB_000235a8;
    }
    DAT_0005d9cc = (undefined4 *)*puVar1;
  } while( true );
}
