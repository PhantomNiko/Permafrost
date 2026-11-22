/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0225229c (*(uint8_t volatile *)(0x225229cU))
#define local_410 (*(uchar (*)[1024])(frame + 16))


uint recovered_2048050(char *command,char *output,uint capacity)

{
  unsigned char frame[1088] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  char cVar2;
  uint uVar3;
  uint incoming_edx;
  uchar *puVar5;
  uchar *puVar4;

  if (capacity == 0 || output == (char *)0x0) {
    DAT_0225229c = 0;
    uVar3 = recovered_202ed80((byte *)command,&DAT_0225229c,0x2000);
    cVar2 = DAT_0225229c;
    if (cVar2 != '\0') {
      incoming_edx = 0;
      puVar5 = &DAT_0225229c;
      while( true ) {
        do {
          puVar4 = puVar5 + 1;
          uVar1 = *puVar5;
          puVar5 = puVar4;
        } while (uVar1 == '\r');
        if (uVar1 == '\0') break;
        if (uVar1 == '\n') {
          recovered_20a11d0(local_410,incoming_edx,'\x01','\x01');
          incoming_edx = 0;
        }
        else if (incoming_edx + 1 < 0x400) {
          local_410[incoming_edx] = uVar1;
          incoming_edx = incoming_edx + 1;
        }
      }
      recovered_20a11d0(local_410,incoming_edx,'\x01','\x01');
    }
  }
  else {
    uVar3 = recovered_202ed80((byte *)command,output,capacity);
  }
  return uVar3;
}
#undef DAT_0225229c
#undef local_410
