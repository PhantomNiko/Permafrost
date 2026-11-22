/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0223dafd (*(uint8_t volatile *)(0x223dafdU))
#define DAT_0223db04 (*(uint32_t volatile *)(0x223db04U))


void recovered_2042f50(undefined4 in_ECX,undefined4 in_EDX,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  code *pcVar2;

  if (param_4 != 0 && param_3 != 0) {
    pcVar2 = (code *)DAT_0223db04;
    bVar1 = DAT_0223dafd;
    if ((pcVar2 != (code *)0x0 & bVar1) == 1) {
      (*pcVar2)(in_ECX,in_EDX,param_3,param_4);
    }
    recovered_2005a90(in_ECX,in_EDX,param_3,param_4);
  }
  return;
}
#undef DAT_0223dafd
#undef DAT_0223db04
