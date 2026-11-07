/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_238 (*(undefined4 *)(frame + 88))
#define local_240 (*(undefined8 *)(frame + 80))
#define local_250 (*(undefined8 *)(frame + 64))
#define local_260 (*(undefined8 *)(frame + 48))
#define local_270 (*(undefined8 *)(frame + 32))
#define local_278 (*(undefined1 (*)[8])(frame + 24))
#define local_2c (*(undefined4 *)(frame + 612))
#define local_34 (*(undefined8 *)(frame + 604))
#define local_44 (*(undefined8 *)(frame + 588))
#define local_54 (*(undefined8 *)(frame + 572))
#define local_64 (*(undefined8 *)(frame + 556))
#define local_6c (*(undefined1 (*)[8])(frame + 548))
#define uStack_248 (*(undefined4 *)(frame + 72))
#define uStack_258 (*(undefined8 *)(frame + 56))
#define uStack_268 (*(undefined8 *)(frame + 40))
#define uStack_4c (*(undefined8 *)(frame + 580))
#define uStack_5c (*(undefined8 *)(frame + 564))
uchar recovered_20d84a0(ulong param_1,ulong param_2)

{
  unsigned char frame[688] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uchar uVar2;

  uVar1 = recovered_206b1b0((byte)param_1,param_2,(long)local_278,0x200);
  if ((char)uVar1 == '\0') {
    uVar2 = '\0';
  }
  else {
    uVar2 = '\0';
    recovered_2002110(local_6c,0,0x44);
    recovered_2001410(local_6c,local_278,8);
    local_64 = local_270;
    uStack_5c = uStack_268;
    local_54 = local_260;
    uStack_4c = uStack_258;
    local_44 = local_250;
    local_34 = local_240;
    local_2c = local_238;
    uVar1 = recovered_20cda70((long)local_6c,0x4000,(uint *)0x0,(uint *)0x0);
    if ((char)uVar1 != '\0') {
      uStack_248 = 0x4000;
      uVar1 = recovered_206cfd0((byte)param_1,param_2 & 0xffffffff,(long)local_278,0x200);
      uVar2 = (uchar)uVar1;
    }
  }
  return uVar2;
}
