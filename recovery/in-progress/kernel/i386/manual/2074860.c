/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_0208f829 (*(uint8_t *)(0x20c5754U))
#define DAT_0208f86a (*(uint8_t *)(0x20cce67U))
#define DAT_0208f86e (*(uint8_t *)(0x20cce6bU))
#define DAT_0208f875 (*(uint8_t *)(0x20cce72U))
#define local_3c (*(uint (*)[11])(frame + 1044))
#define local_438 (*(undefined1 * *)(frame + 24))
#define local_43c (*(uint *)(frame + 20))
#define str_0208f831 (*(char (*)[1])(0x20cce2eU))
#define str_0208f84b (*(char (*)[1])(0x20cce48U))
#define str_0208f87a (*(char (*)[1])(0x20cce77U))
#define str_0208f880 (*(char (*)[1])(0x20cce7dU))
undefined4 recovered_2074860(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[1136] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint incoming_edx_00;
  char *pcVar6;

  local_3c[9] = 0;
  local_3c[10] = 0;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_3c[4] = 0;
  local_3c[5] = 0;
  local_3c[6] = 0;
  local_3c[7] = 0;
  local_3c[8] = 0;
  if (incoming_edx == 0) {
    uVar3 = 0;
    pcVar4 = &DAT_0208f829;
    while( true ) {
      do {
        pcVar6 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar6;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20a11d0((undefined1 *)&local_43c,uVar3,1,'\x01');
        uVar3 = 0;
      }
      else if (uVar3 + 1 < 0x400) {
        *(char *)((int)&local_43c + uVar3) = cVar1;
        uVar3 = uVar3 + 1;
      }
    }
    uVar3 = recovered_20a11d0((undefined1 *)&local_43c,uVar3,1,'\x01');
    uVar5 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = recovered_2074a50(incoming_ecx,(ulong *******)incoming_edx,(int *)(local_3c + 9),
                              local_3c + 10,local_3c);
    if ((char)uVar3 == '\0') {
      recovered_2043a90(local_3c,incoming_edx_00);
    }
    else {
      if (local_3c[10] == 0) {
        recovered_2043a90(local_3c,incoming_edx_00);
        uVar3 = local_3c[9];
        if (incoming_edx <= local_3c[9]) {
          return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
        }
        while ((((bVar2 = recovered_207a3b0(*(uint *)(incoming_ecx + uVar3 * 4),&DAT_0208f86a),
                 !bVar2 && (bVar2 = recovered_207a3b0(*(uint *)(incoming_ecx + uVar3 * 4),
                                                      &DAT_0208f86e), !bVar2)) &&
                (bVar2 = recovered_207a3b0(*(uint *)(incoming_ecx + uVar3 * 4),&DAT_0208f875),
                !bVar2)) &&
               (bVar2 = recovered_207a3b0(*(uint *)(incoming_ecx + uVar3 * 4),str_0208f87a), !bVar2)
               )) {
          uVar3 = uVar3 + 1;
          if (incoming_edx == uVar3) {
            return CONCAT31(extraout_var,1);
          }
        }
        local_438 = *(undefined1 **)(incoming_ecx + uVar3 * 4);
        pcVar4 = str_0208f880;
        local_43c = uVar3;
      }
      else {
        local_43c = local_3c[9];
        if (incoming_edx <= local_3c[9]) {
          local_43c = 0;
        }
        local_438 = &DAT_0208e2dc;
        if (incoming_edx > local_3c[9]) {
          local_438 = *(undefined1 **)(incoming_ecx + local_3c[9] * 4);
        }
        recovered_2043a90(local_3c,incoming_edx_00);
        pcVar4 = str_0208f831;
        if (local_3c[10] != 1) {
          pcVar4 = str_0208f84b;
        }
      }
      pf_varargs_204ff60___(&local_43c,(char *)0x0,pcVar4);
    }
    uVar5 = 0;
  }
  return uVar5;
}
