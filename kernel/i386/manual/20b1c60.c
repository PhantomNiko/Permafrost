/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(undefined4 *)(frame + 604))
#define local_18 (*(undefined4 *)(frame + 600))
#define local_1c (*(undefined4 *)(frame + 596))
#define local_20 (*(undefined4 *)(frame + 592))
#define local_214 (*(undefined4 *)(frame + 92))
#define local_218 (*(undefined4 *)(frame + 88))
#define local_21c (*(undefined4 *)(frame + 84))
#define local_220 (*(undefined4 *)(frame + 80))
#define local_224 (*(undefined4 *)(frame + 76))
#define local_228 (*(undefined4 *)(frame + 72))
#define local_22c (*(undefined4 *)(frame + 68))
#define local_230 (*(undefined4 *)(frame + 64))
#define local_234 (*(undefined4 *)(frame + 60))
#define local_238 (*(undefined4 *)(frame + 56))
#define local_23c (*(undefined4 *)(frame + 52))
#define local_24 (*(undefined4 *)(frame + 588))
#define local_240 (*(undefined4 *)(frame + 48))
#define local_244 (*(undefined4 *)(frame + 44))
#define local_248 (*(undefined4 *)(frame + 40))
#define local_24c (*(undefined4 *)(frame + 36))
#define local_254 (*(undefined1 (*)[8])(frame + 28))
#define local_28 (*(undefined4 *)(frame + 584))
#define local_2c (*(undefined4 *)(frame + 580))
#define local_30 (*(undefined4 *)(frame + 576))
#define local_34 (*(undefined4 *)(frame + 572))
#define local_38 (*(undefined4 *)(frame + 568))
#define local_3c (*(undefined4 *)(frame + 564))
#define local_40 (*(undefined4 *)(frame + 560))
#define local_44 (*(undefined4 *)(frame + 556))
#define local_48 (*(undefined4 *)(frame + 552))
#define local_4c (*(undefined4 *)(frame + 548))
#define local_54 (*(undefined1 (*)[8])(frame + 540))
uint recovered_20b1c60(uint in_ECX,uint in_EDX)

{
  unsigned char frame[656] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;

  uVar1 = recovered_204ed30(in_ECX,in_EDX,(int)local_254,0x200);
  if ((char)uVar1 != '\0') {
    recovered_2001e00(local_54,0,0x44);
    recovered_2001b70(local_54,local_254,8);
    local_4c = local_24c;
    local_48 = local_248;
    local_44 = local_244;
    local_40 = local_240;
    local_3c = local_23c;
    local_38 = local_238;
    local_34 = local_234;
    local_30 = local_230;
    local_2c = local_22c;
    local_28 = local_228;
    local_24 = local_224;
    local_20 = local_220;
    local_1c = local_21c;
    local_18 = local_218;
    local_14 = local_214;
    uVar1 = recovered_20a8160(local_54,0x4000,(uint *)0x0,(uint *)0x0);
    if ((char)uVar1 != '\0') {
      local_224 = 0x4000;
      uVar2 = recovered_2050b00(in_ECX & 0xff,in_EDX,(int)local_254,0x200);
      return uVar2;
    }
  }
  return 0;
}
