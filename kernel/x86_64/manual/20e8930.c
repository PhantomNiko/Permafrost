/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de620 (*(uint64_t volatile *)(0x226c270U))
#define DAT_020de628 (*(uint64_t volatile *)(0x226c278U))
#define DAT_020de630 (*(uint64_t volatile *)(0x226c280U))
#define local_158 (*(char (*)[168])(frame + 24))
#define local_38 (*(ulong *)(frame + 312))
#define local_40 (*(ulong *)(frame + 304))
#define local_48 (*(long *)(frame + 296))
#define local_50 (*(long *)(frame + 288))
#define local_58 (*(undefined8 *)(frame + 280))
#define local_68 (*(undefined8 *)(frame + 264))
#define local_78 (*(undefined8 *)(frame + 248))
#define local_88 (*(undefined8 *)(frame + 232))
#define local_98 (*(undefined8 *)(frame + 216))
#define local_a8 (*(undefined8 *)(frame + 200))
#define local_b0 (*(undefined8 *)(frame + 192))
#define str_020a2878 (*(char (*)[1])(0x20f4275U))
#define uStack_60 (*(undefined8 *)(frame + 272))
#define uStack_70 (*(undefined8 *)(frame + 256))
#define uStack_80 (*(undefined8 *)(frame + 240))
#define uStack_90 (*(undefined8 *)(frame + 224))
#define uStack_a0 (*(undefined8 *)(frame + 208))
uchar recovered_20e8930(long param_1,ulong *in_RCX,undefined1 *in_R8,ulong *in_R9)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  void *buffer;
  ulong uVar1;
  ulong uVar2;
  uchar uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;

  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  PF_PART2(local_b0, 0) = 1;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uVar3 = recovered_20e7090(param_1,&local_b0,local_158);
  if (uVar3 != '\0') {
    uVar4 = recovered_20c0380((long)&local_b0,&local_48,&local_40,&local_38,local_158,0xa0);
    uVar2 = local_38;
    uVar1 = local_40;
    if ((char)uVar4 != '\0') {
      buffer = (void *)DAT_020de620;
      lVar5 = local_48;
      if (buffer != (void *)0x0) {
        local_50 = local_48;
        lVar5 = DAT_020de628;
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            recovered_2000bb0(*(void **)((long)buffer + lVar6 * 8));
            *(undefined8 *)((long)buffer + lVar6 * 8) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar5 != lVar6);
        }
        recovered_2000bb0(buffer);
        lVar5 = local_50;
      }
      DAT_020de620 = lVar5;
      DAT_020de628 = uVar1;
      DAT_020de630 = uVar2;
      recovered_20c0290((undefined2 *)&local_b0);
      return '\x01';
    }
    recovered_20c0290((undefined2 *)&local_b0);
  }
  pf_varargs_2039720__8_(str_020a2878,(ulonglong)local_158);
  return '\0';
}
