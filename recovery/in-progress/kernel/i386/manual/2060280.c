/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5f80 (*(uint8_t *)(0x20c5f80U))
#define DAT_020c5f8c (*(uint8_t *)(0x20c5f8cU))
#define DAT_020c5fa8 (*(uint8_t *)(0x20c5fa8U))
#define DAT_020c5fb8 (*(uint8_t *)(0x20c5fb8U))
#define DAT_020c77e5 (*(uint8_t *)(0x20c77e5U))
#define str_020c5bb8 (*(char (*)[1])(0x20c5bb8U))
#define str_020c5f85 (*(char (*)[1])(0x20c5f85U))
#define str_020c5f91 (*(char (*)[1])(0x20c5f91U))
#define str_020c5f98 (*(char (*)[1])(0x20c5f98U))
#define str_020c5f9f (*(char (*)[1])(0x20c5f9fU))
#define str_020c5fac (*(char (*)[1])(0x20c5facU))
#define str_020c5fb2 (*(char (*)[1])(0x20c5fb2U))
#define str_020c5fbe (*(char (*)[1])(0x20c5fbeU))
#define str_020c5fc6 (*(char (*)[1])(0x20c5fc6U))
#define str_020c5fce (*(char (*)[1])(0x20c5fceU))
#define str_020c5fda (*(char (*)[1])(0x20c5fdaU))
#define str_020c77df (*(char (*)[1])(0x20c77dfU))
#define str_020c7875 (*(char (*)[1])(0x20c7875U))
#define str_020c787d (*(char (*)[1])(0x20c787dU))
#define str_020c7887 (*(char (*)[1])(0x20c7887U))


undefined4 recovered_2060280(int *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 unaff_EBX = 0;
  undefined4 uVar2;
  char *left;

  if (in_ECX == (int *)0x0) {
    return 0;
  }
  iVar1 = *in_ECX;
  if (0x10000f7 < iVar1) {
    if (iVar1 < 0x10000012) {
      if (iVar1 == 0x10000f8) {
        left = str_020c5fda;
        goto LAB_02060366;
      }
      if (iVar1 == 0x10000008) {
        left = str_020c5f98;
        goto LAB_02060366;
      }
    }
    else {
      if (iVar1 == 0x10000012) {
        left = str_020c5fbe;
        goto LAB_02060366;
      }
      if (iVar1 == 0x11000008) {
        left = str_020c5f9f;
        goto LAB_02060366;
      }
      if (iVar1 == 0x11000012) {
        left = str_020c5fc6;
        goto LAB_02060366;
      }
    }
    goto switchD_020602af_caseD_1000009;
  }
  switch((uintptr_t)(iVar1)) {
  case 7:
    left = &DAT_020c5f80;
    break;
  case 8:
    left = &DAT_020c5f8c;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    goto switchD_020602af_caseD_1000009;
  case 0xc:
    left = str_020c77df;
    if ((char)in_ECX[1] != '\t') {
      left = &DAT_020c5fa8;
    }
    break;
  case 0x12:
    left = &DAT_020c77e5;
    break;
  default:
    switch((uintptr_t)(iVar1)) {
    case 0x1000007:
      left = str_020c5f85;
      break;
    case 0x1000008:
      left = str_020c5f91;
      break;
    case 0x100000c:
      left = str_020c5fac;
      break;
    case 0x1000012:
      left = &DAT_020c5fb8;
      break;
    default:
      if (iVar1 == 0xf8) {
        left = str_020c5fce;
        break;
      }
    case 0x1000009:
    case 0x100000a:
    case 0x100000b:
    case 0x100000d:
    case 0x100000e:
    case 0x100000f:
    case 0x1000010:
    case 0x1000011:
switchD_020602af_caseD_1000009:
      left = str_020c5bb8;
    }
  }
LAB_02060366:
  iVar1 = recovered_20022a0(left,in_EDX);
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if (iVar1 == 0) {
    return uVar2;
  }
  iVar1 = recovered_20022a0(in_EDX,str_020c7875);
  if (((iVar1 == 0) || (iVar1 = recovered_20022a0(in_EDX,str_020c5fb2), iVar1 == 0)) &&
     (iVar1 = recovered_20022a0(left,&DAT_020c77e5), iVar1 == 0)) {
    return uVar2;
  }
  iVar1 = recovered_20022a0(in_EDX,str_020c787d);
  if ((iVar1 == 0) && (iVar1 = recovered_20022a0(left,&DAT_020c5fb8), iVar1 == 0)) {
    return uVar2;
  }
  iVar1 = recovered_20022a0(in_EDX,str_020c7887);
  if ((iVar1 == 0) && (iVar1 = recovered_20022a0(left,str_020c5fda), iVar1 == 0)) {
    return uVar2;
  }
  return 0;
}
#undef DAT_020c5f80
#undef DAT_020c5f8c
#undef DAT_020c5fa8
#undef DAT_020c5fb8
#undef DAT_020c77e5
#undef str_020c5bb8
#undef str_020c5f85
#undef str_020c5f91
#undef str_020c5f98
#undef str_020c5f9f
#undef str_020c5fac
#undef str_020c5fb2
#undef str_020c5fbe
#undef str_020c5fc6
#undef str_020c5fce
#undef str_020c5fda
#undef str_020c77df
#undef str_020c7875
#undef str_020c787d
#undef str_020c7887
