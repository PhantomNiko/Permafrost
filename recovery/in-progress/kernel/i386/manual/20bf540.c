/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c77e4 (*(uint32_t volatile *)(0x223dbfcU))
#define DAT_020c77e8 (*(uint32_t volatile *)(0x223dc00U))
#define DAT_020c77ec (*(uint32_t volatile *)(0x223dc04U))
#define local_14 (*(uint *)(frame + 252))
#define local_18 (*(uint *)(frame + 248))
#define local_1c (*(undefined4 *)(frame + 244))
#define local_20 (*(uint *)(frame + 240))
#define local_24 (*(uint *)(frame + 236))
#define local_28 (*(undefined4 *)(frame + 232))
#define local_2c (*(undefined4 *)(frame + 228))
#define local_30 (*(undefined4 *)(frame + 224))
#define local_34 (*(undefined4 *)(frame + 220))
#define local_38 (*(undefined4 *)(frame + 216))
#define local_3c (*(undefined4 *)(frame + 212))
#define local_40 (*(undefined4 *)(frame + 208))
#define local_44 (*(undefined4 *)(frame + 204))
#define local_48 (*(undefined4 *)(frame + 200))
#define local_4c (*(undefined4 *)(frame + 196))
#define local_50 (*(undefined4 *)(frame + 192))
#define local_54 (*(undefined4 *)(frame + 188))
#define local_58 (*(undefined4 *)(frame + 184))
#define local_f8 (*(char (*)[160])(frame + 24))
#define str_0208e5b8 (*(char (*)[1])(0x20cce13U))
uint recovered_20bf540(int in_ECX)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  undefined4 *buffer;
  undefined4 uVar1;
  uint uVar2;
  uint incoming_edx;
  uint incoming_edx_00;
  undefined4 *puVar3;
  int iVar4;

  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  PF_PART2(local_58, 0) = 1;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  uVar1 = recovered_20bdfe0(in_ECX,&local_58,local_f8);
  if ((char)uVar1 != '\0') {
    uVar1 = recovered_209bd20((int)&local_58,&local_1c,&local_18,&local_14,local_f8,0xa0);
    if ((char)uVar1 != '\0') {
      buffer = (undefined4 *)DAT_020c77e4;
      uVar1 = local_1c;
      uVar2 = local_18;
      incoming_edx_00 = local_14;
      if (buffer != (undefined4 *)0x0) {
        local_20 = local_14;
        local_24 = local_18;
        local_28 = local_1c;
        iVar4 = DAT_020c77e8;
        if (iVar4 != 0) {
          puVar3 = buffer;
          do {
            recovered_2001710((void *)*puVar3);
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        recovered_2001710(buffer);
        uVar1 = local_28;
        uVar2 = local_24;
        incoming_edx_00 = local_20;
      }
      DAT_020c77e4 = uVar1;
      DAT_020c77e8 = uVar2;
      DAT_020c77ec = incoming_edx_00;
      uVar2 = recovered_209bc20((undefined2 *)&local_58,incoming_edx_00);
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    recovered_209bc20((undefined2 *)&local_58,incoming_edx);
  }
  pf_varargs_202ebf0__4_(str_0208e5b8,(uint)local_f8);
  return 0;
}
