/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a4123 (*(uint8_t *)(0x20f48deU))
#define local_418 (*(char * *)(frame + 40))
#define local_428 (*(long (*)[2])(frame + 24))
#define str_020aba10 (*(char (*)[1])(0x20fe55dU))
void recovered_20e9090(long param_1)

{
  unsigned char frame[1120] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_1 == 0) {
    uVar4 = 0;
    pcVar3 = &DAT_020a4123;
    while( true ) {
      do {
        pcVar5 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20c6270((undefined1 *)local_428,uVar4,1,'\x01');
        uVar4 = 0;
      }
      else if (uVar4 + 1 < 0x400) {
        *(char *)((long)local_428 + uVar4) = cVar1;
        uVar4 = uVar4 + 1;
      }
    }
    recovered_20c6270((undefined1 *)local_428,uVar4,1,'\x01');
    return;
  }
  local_428[0] = 0;
  local_428[1] = 0;
  local_418 = (char *)0x0;
  uVar2 = recovered_20a8f50((int *)param_1,local_428,0);
  if (uVar2 == '\0') {
    recovered_2000bb0(local_418);
LAB_0209e988:
    uVar4 = 0;
    pcVar3 = str_020aba10;
    while( true ) {
      do {
        pcVar5 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20c6270((undefined1 *)local_428,uVar4,1,'\x01');
        uVar4 = 0;
      }
      else if (uVar4 + 1 < 0x400) {
        *(char *)((long)local_428 + uVar4) = cVar1;
        uVar4 = uVar4 + 1;
      }
    }
    recovered_20c6270((undefined1 *)local_428,uVar4,1,'\x01');
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = local_418;
    if (local_418 == (char *)0x0) {
      pcVar3 = recovered_2000ad0(1);
      if (pcVar3 == (char *)0x0) goto LAB_0209e988;
      *pcVar3 = '\0';
    }
    uVar4 = 0;
    pcVar5 = pcVar3;
    while( true ) {
      do {
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20c6270((undefined1 *)local_428,uVar4,1,'\x01');
        uVar4 = 0;
      }
      else if (uVar4 + 1 < 0x400) {
        *(char *)((long)local_428 + uVar4) = cVar1;
        uVar4 = uVar4 + 1;
      }
    }
    recovered_20c6270((undefined1 *)local_428,uVar4,1,'\x01');
  }
  recovered_2000bb0(pcVar3);
  return;
}
