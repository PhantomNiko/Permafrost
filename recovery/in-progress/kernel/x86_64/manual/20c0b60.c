/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de771 (*(uint8_t volatile *)(0x226c3c1U))
#define DAT_020e6080 (*(uint8_t volatile *)(0x22740f0U))
#define DAT_020e6088 (*(uint64_t volatile *)(0x22740f8U))
#define DAT_020e6090 (*(uint64_t volatile *)(0x2274100U))
#define DAT_020e6098 (*(uint64_t volatile *)(0x2274108U))
#define DAT_020e60a8 (*(uint64_t volatile *)(0x2274118U))
#define DAT_020e60b0 (*(uint64_t volatile *)(0x2274120U))
#define DAT_020e60c0 (*(uint64_t volatile *)(0x2274130U))
#define DAT_020e60c8 (*(uint64_t volatile *)(0x2274138U))
#define Ram00000000020e6090 (*(uint128 volatile *)(0x2274100U))
#define Ram00000000020e60a0 (*(uint64_t volatile *)(0x2274110U))
#define Ram00000000020e60a8 (*(uint128 volatile *)(0x2274118U))
#define Ram00000000020e60b8 (*(uint128 volatile *)(0x2274128U))
#define Ram00000000020e60c8 (*(uint128 volatile *)(0x2274138U))
double recovered_20c0b60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;

  puVar1 = (uint *)DAT_020e6088;
  if (puVar1 != (uint *)0x0) {
    recovered_209d700(puVar1);
  }
  DAT_020e6088 = 0;
  lVar5 = DAT_020e6098;
  if (lVar5 != 0) {
    lVar5 = 8;
    uVar6 = 0;
    do {
      lVar2 = DAT_020e6090;
      recovered_2000bb0(*(void **)(lVar2 + -8 + lVar5));
      lVar2 = DAT_020e6090;
      recovered_205ec00((undefined8 *)(lVar2 + lVar5));
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x50;
      uVar4 = DAT_020e6098;
    } while (uVar6 < uVar4);
  }
  pvVar3 = (void *)DAT_020e6090;
  recovered_2000bb0(pvVar3);
  Ram00000000020e6090 = ZEXT816(0);
  Ram00000000020e60a0 = 0;
  lVar5 = DAT_020e60b0;
  if (lVar5 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar2 = DAT_020e60a8;
      recovered_205ec00((undefined8 *)(lVar2 + lVar5));
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x40;
      uVar4 = DAT_020e60b0;
    } while (uVar6 < uVar4);
  }
  pvVar3 = (void *)DAT_020e60a8;
  recovered_2000bb0(pvVar3);
  Ram00000000020e60a8 = ZEXT816(0);
  lVar5 = DAT_020e60c8;
  if (lVar5 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar2 = DAT_020e60c0;
      recovered_20de6a0((undefined4 *)(lVar2 + lVar5));
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xa8;
      uVar4 = DAT_020e60c8;
    } while (uVar6 < uVar4);
  }
  pvVar3 = (void *)DAT_020e60c0;
  recovered_2000bb0(pvVar3);
  Ram00000000020e60c8 = ZEXT816(0);
  Ram00000000020e60b8 = ZEXT816(0);
  DAT_020e6080 = 0;
  DAT_020de771 = 0;
  return 0.0;
}
