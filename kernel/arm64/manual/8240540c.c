/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af31 (*(uint8_t volatile *)(0x82542042U))
#define DAT_4047af3a (*(uint8_t volatile *)(0x8254204eU))
#define DAT_4047af3b (*(uint8_t volatile *)(0x8254204fU))
#define DAT_4047af68 (*(uint32_t volatile *)(0x825420a0U))
#define DAT_4047af6c (*(uint32_t volatile *)(0x825420a4U))
bool recovered_8240540c(uint param_1,uint param_2,int param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;

  if (param_3 != 0) {
    cVar1 = DAT_4047af31;
    bVar2 = DAT_4047af3a;
    if (cVar1 == '\x01' && bVar2 == param_1) {
      bVar2 = DAT_4047af3b;
      uVar3 = DAT_4047af68;
      if (bVar2 == param_4 && uVar3 != 0) {
        uVar4 = DAT_4047af6c;
        return (ulong)uVar4 + (ulong)uVar3 == (ulong)param_2;
      }
    }
  }
  return false;
}
