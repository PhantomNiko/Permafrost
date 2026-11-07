/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494755 (*(uint8_t volatile *)(0x8266ec31U))
#define DAT_40494775 (*(uint8_t volatile *)(0x8266ec4bU))
#define DAT_404947d8 (*(uint32_t volatile *)(0x8266ecd0U))
#define DAT_404947dc (*(uint32_t volatile *)(0x8266ecd4U))
#define DAT_404947e0 (*(uint32_t volatile *)(0x8266ecd8U))
undefined8 recovered_824497c4(undefined4 param_1,undefined4 param_2,uint param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((param_3 < 0x21) && ((1L << ((ulong)param_3 & 0x3f) & 0x101018001U) != 0)) {
    DAT_404947d8 = param_1;
    DAT_404947dc = param_2;
    DAT_404947e0 = param_3;
    DAT_40494775 = param_4;
    recovered_82405dc8(param_1,param_2,param_3,param_4);
    DAT_40494755 = 0;
    uVar1 = 1;
  }
  return uVar1;
}
