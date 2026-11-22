/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(uint *)(frame + 236))
#define local_18 (*(undefined4 * *)(frame + 232))
#define local_1c (*(undefined4 * *)(frame + 228))
#define local_20 (*(uint *)(frame + 224))
#define local_24 (*(undefined4 *)(frame + 220))
#define local_28 (*(undefined4 *)(frame + 216))
#define local_2c (*(undefined4 *)(frame + 212))
#define local_30 (*(undefined4 *)(frame + 208))
#define local_34 (*(undefined4 *)(frame + 204))
#define local_38 (*(undefined4 *)(frame + 200))
#define local_3c (*(undefined4 *)(frame + 196))
#define local_40 (*(undefined4 *)(frame + 192))
#define local_44 (*(undefined4 *)(frame + 188))
#define local_48 (*(undefined4 *)(frame + 184))
#define local_4c (*(undefined4 *)(frame + 180))
#define local_50 (*(undefined4 *)(frame + 176))
#define local_f0 (*(char (*)[160])(frame + 16))
#define str_0208e5b8 (*(char (*)[1])(0x20cce13U))
uint recovered_20bdeb0(int in_ECX)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  uint incoming_edx;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  undefined4 *puVar3;
  uint uVar4;

  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_20 = 0;
  PF_PART2(local_50, 0) = 1;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  uVar1 = recovered_20bdfe0(in_ECX,&local_50,local_f0);
  if ((char)uVar1 != '\0') {
    uVar1 = recovered_209bd20((int)&local_50,&local_18,&local_14,&local_20,local_f0,0xa0);
    if ((char)uVar1 != '\0') {
      uVar2 = recovered_2074860((int)local_18,local_14);
      local_1c = local_18;
      uVar4 = extraout_EDX;
      if (local_18 != (undefined4 *)0x0) {
        if (local_14 != 0) {
          puVar3 = local_18;
          uVar4 = local_14;
          do {
            recovered_2001710((void *)*puVar3);
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        recovered_2001710(local_1c);
        uVar4 = extraout_EDX_00;
      }
      recovered_209bc20((undefined2 *)&local_50,uVar4);
      return uVar2;
    }
    recovered_209bc20((undefined2 *)&local_50,incoming_edx);
  }
  pf_varargs_202ebf0__4_(str_0208e5b8,(uint)local_f0);
  return 0;
}
