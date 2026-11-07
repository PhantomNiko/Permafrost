/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_0208ea9a (*(uint8_t *)(0x20cc321U))
#define DAT_0208f945 (*(uint8_t *)(0x20ccf42U))
#define DAT_0208f947 (*(uint8_t *)(0x20ccf44U))
#define DAT_0208fe00 (*(uint8_t *)(0x20cd3fdU))
#define DAT_0208fe02 (*(uint8_t *)(0x20cd3ffU))
#define DAT_0208fe85 (*(uint8_t *)(0x20cd47cU))
#define DAT_0208feb8 (*(uint8_t *)(0x20cd4afU))
#define DAT_0208ffe0 (*(uint8_t *)(0x20c69e5U))
#define DAT_0209008c (*(uint8_t *)(0x20cd678U))
#define DAT_0209009e (*(uint8_t *)(0x20cd68aU))
#define DAT_020900a3 (*(uint8_t *)(0x20cd68fU))
#define DAT_020900a8 (*(uint8_t *)(0x20cd694U))
#define DAT_020900ad (*(uint8_t *)(0x20cd699U))
#define DAT_020900b0 (*(uint8_t *)(0x20c57d0U))
#define local_14 (*(int * *)(frame + 124))
#define local_18 (*(int * *)(frame + 120))
#define local_1c (*(uint *)(frame + 116))
#define local_7c (*(char (*)[96])(frame + 20))
#define str_0208ffe5 (*(char (*)[1])(0x20c70d7U))
#define str_0209008f (*(char (*)[1])(0x20cd67bU))
#define str_02090098 (*(char (*)[1])(0x20cd684U))
#define str_020900b3 (*(char (*)[1])(0x20cd69cU))
#define str_020900be (*(char (*)[1])(0x20cd6a7U))
undefined4 recovered_2086030(int *incoming_ecx,int incoming_edx,uint param_3)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  char *incoming_edx_00;
  int iVar5;

  if (incoming_edx == 0) {
    return 0;
  }
  if ((incoming_ecx == (int *)0x0) || (*incoming_ecx == 0)) {
    pcVar3 = &DAT_0208fe85;
    goto switchD_0205bcb9_default;
  }
  if (0x10 < param_3) {
    pcVar3 = str_0209008f;
    goto switchD_0205bcb9_default;
  }
  switch((uintptr_t)(*incoming_ecx)) {
  case 1:
    uVar4 = incoming_ecx[1];
    pcVar3 = &DAT_0208feb8;
    goto LAB_0205bf5b;
  case 2:
    pf_varargs_2003aa0__8_(local_7c,0x60,&DAT_0209008c,(ulonglong)(double)pf_bits_float((uint32_t)incoming_ecx[2]));
    goto LAB_0205bf68;
  case 3:
    pcVar3 = &DAT_0208e2dc;
    if ((char *)incoming_ecx[3] != (char *)0x0) {
      pcVar3 = (char *)incoming_ecx[3];
    }
    break;
  case 4:
    local_14 = incoming_ecx;
    uVar2 = recovered_2086400((int *)incoming_edx,&DAT_0209009e);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    if ((byte *)local_14[4] != (byte *)0x0) {
      uVar4 = local_14[5];
      local_1c = uVar4;
      if (0x1f < uVar4) {
        local_1c = 0x20;
      }
      if (uVar4 != 0) {
        local_18 = (int *)incoming_edx;
        pf_varargs_2003aa0__4_(local_7c,0x60,&DAT_020900a3,(uint)*(byte *)local_14[4]);
        uVar2 = recovered_2086400(local_18,local_7c);
        if ((char)uVar2 == '\0') {
          return 0;
        }
        if (uVar4 != 1) {
          uVar4 = 1;
          do {
            uVar2 = recovered_2086400((int *)incoming_edx,&DAT_0208ea9a);
            if ((char)uVar2 == '\0') {
              return 0;
            }
            pf_varargs_2003aa0__4_(local_7c,0x60,&DAT_020900a3,(uint)*(byte *)(local_14[4] + uVar4))
            ;
            uVar2 = recovered_2086400((int *)incoming_edx,local_7c);
            if ((char)uVar2 == '\0') {
              return 0;
            }
            uVar4 = uVar4 + 1;
          } while (local_1c != uVar4);
        }
        if ((local_1c < (uint)local_14[5]) &&
           (uVar2 = recovered_2086400((int *)incoming_edx,&DAT_020900a8), (char)uVar2 == '\0')) {
          return 0;
        }
      }
    }
    pcVar3 = &DAT_0208f947;
    goto LAB_0205bf6c;
  case 5:
    pcVar3 = str_0208ffe5;
    if (incoming_ecx[1] != 0) {
      pcVar3 = &DAT_0208ffe0;
    }
    break;
  case 6:
    uVar4 = incoming_ecx[1];
    pcVar3 = str_02090098;
LAB_0205bf5b:
    pf_varargs_2003aa0__4_(local_7c,0x60,pcVar3,uVar4);
LAB_0205bf68:
    pcVar3 = local_7c;
LAB_0205bf6c:
    uVar2 = recovered_2086400((int *)incoming_edx,pcVar3);
    return uVar2;
  case 7:
    local_18 = (int *)incoming_edx;
    local_14 = incoming_ecx;
    uVar2 = recovered_2086400((int *)incoming_edx,&DAT_0208f945);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    iVar5 = local_14[6];
    if ((iVar5 != 0) && (*(int *)(iVar5 + 8) != 0)) {
      uVar2 = recovered_2086030(*(int **)(iVar5 + 0x10),(int)local_18,param_3 + 1);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      if (1 < *(uint *)(local_14[6] + 8)) {
        uVar4 = 1;
        iVar5 = 0x24;
        do {
          uVar2 = recovered_2086400(local_18,&DAT_020900ad);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          uVar2 = recovered_2086030((int *)(*(int *)(local_14[6] + 0x10) + iVar5),(int)local_18,
                                    param_3 + 1);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 0x24;
        } while (uVar4 < *(uint *)(local_14[6] + 8));
      }
    }
    pcVar3 = &DAT_0208f947;
    incoming_edx = (int)local_18;
    break;
  case 8:
    local_14 = incoming_ecx;
    uVar2 = recovered_2086400((int *)incoming_edx,&DAT_0208fe00);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    iVar5 = local_14[7];
    if ((iVar5 != 0) && (*(int *)(iVar5 + 4) != 0)) {
      pcVar3 = &DAT_0208e2dc;
      if ((char *)**(int **)(iVar5 + 0xc) != (char *)0x0) {
        pcVar3 = (char *)**(int **)(iVar5 + 0xc);
      }
      uVar2 = recovered_2086400((int *)incoming_edx,pcVar3);
      if (((char)uVar2 == '\0') ||
         (uVar2 = recovered_2086400((int *)incoming_edx,&DAT_020900b0), (char)uVar2 == '\0')) {
        return 0;
      }
      uVar2 = recovered_2086030((int *)(*(int *)(local_14[7] + 0xc) + 4),incoming_edx,param_3 + 1);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      if (1 < *(uint *)(local_14[7] + 4)) {
        uVar4 = 1;
        local_18 = (int *)0x2c;
        do {
          local_1c = uVar4;
          uVar2 = recovered_2086400((int *)incoming_edx,&DAT_020900ad);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          pcVar3 = *(char **)(*(int *)(local_14[7] + 0xc) + -4 + (int)local_18);
          incoming_edx_00 = &DAT_0208e2dc;
          if (pcVar3 != (char *)0x0) {
            incoming_edx_00 = pcVar3;
          }
          uVar2 = recovered_2086400((int *)incoming_edx,incoming_edx_00);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          uVar2 = recovered_2086400((int *)incoming_edx,&DAT_020900b0);
          piVar1 = local_18;
          if ((char)uVar2 == '\0') {
            return 0;
          }
          uVar2 = recovered_2086030((int *)(*(int *)(local_14[7] + 0xc) + (int)local_18),
                                    incoming_edx,param_3 + 1);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          uVar4 = local_1c + 1;
          local_18 = piVar1 + 10;
        } while (uVar4 < *(uint *)(local_14[7] + 4));
      }
    }
    pcVar3 = &DAT_0208fe02;
    break;
  case 9:
    pcVar3 = str_020900b3;
    break;
  default:
    pcVar3 = str_020900be;
  }
switchD_0205bcb9_default:
  uVar2 = recovered_2086400((int *)incoming_edx,pcVar3);
  return uVar2;
}
