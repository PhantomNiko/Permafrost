/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020df004 (*(uint32_t volatile *)(0x20df004U))
#define DAT_020df008 (*(uint32_t volatile *)(0x20df008U))


void * recovered_2001650(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;

  if (size != 0) {
    recovered_2000cd0();
    puVar3 = (uint *)DAT_020df008;
    puVar4 = (uint *)DAT_020df004;
    puVar5 = puVar4;
    if (puVar3 != (uint *)0x0) {
      puVar5 = puVar3;
    }
    if (puVar5 != (uint *)0x0) {
      uVar6 = size + 0xf & 0xfffffff0;
      puVar3 = puVar5;
      do {
        if ((char)puVar3[3] == '\x01') {
          uVar2 = *puVar3;
          if (uVar6 <= uVar2) {
            if (uVar2 < uVar6 + 0x20) {
              puVar5 = (uint *)puVar3[1];
            }
            else {
              puVar5 = (uint *)((int)puVar3 + uVar6 + 0x10);
              *(uint *)((int)puVar3 + uVar6 + 0x10) = (uVar2 - uVar6) + -0x10;
              uVar2 = puVar3[1];
              *(uint *)((int)puVar3 + uVar6 + 0x14) = uVar2;
              *(uint **)((int)puVar3 + uVar6 + 0x18) = puVar3;
              *(undefined1 *)((int)puVar3 + uVar6 + 0x1c) = 1;
              if (uVar2 != 0) {
                *(uint **)(uVar2 + 8) = puVar5;
              }
              *puVar3 = uVar6;
              puVar3[1] = (uint)puVar5;
              puVar4 = (uint *)DAT_020df004;
            }
            *(undefined1 *)(puVar3 + 3) = 0;
            if (puVar5 != (uint *)0x0) {
              puVar4 = puVar5;
            }
            DAT_020df008 = puVar4;
            return puVar3 + 4;
          }
        }
        puVar1 = puVar3 + 1;
        puVar3 = puVar4;
        if ((uint *)*puVar1 != (uint *)0x0) {
          puVar3 = (uint *)*puVar1;
        }
      } while ((puVar3 != (uint *)0x0) && (puVar3 != puVar5));
    }
  }
  return (void *)0x0;
}
#undef DAT_020df004
#undef DAT_020df008
