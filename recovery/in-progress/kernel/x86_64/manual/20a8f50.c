/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a2d5a (*(uint8_t *)(0x20f3783U))
#define DAT_020a3be3 (*(uint8_t *)(0x20f43a4U))
#define DAT_020a3be5 (*(uint8_t *)(0x20f43a6U))
#define DAT_020a409e (*(uint8_t *)(0x20f485fU))
#define DAT_020a40a0 (*(uint8_t *)(0x20f4861U))
#define DAT_020a4123 (*(uint8_t *)(0x20f48deU))
#define DAT_020a4156 (*(uint8_t *)(0x20f4911U))
#define DAT_020a427e (*(uint8_t *)(0x20ede4eU))
#define DAT_020a432a (*(uint8_t *)(0x20f4adaU))
#define DAT_020a433c (*(uint8_t *)(0x20f4aecU))
#define DAT_020a4341 (*(uint8_t *)(0x20f4af1U))
#define DAT_020a4346 (*(uint8_t *)(0x20f4af6U))
#define DAT_020a434b (*(uint8_t *)(0x20f4afbU))
#define DAT_020a434e (*(uint8_t *)(0x20ecbdbU))
#define local_38 (*(ulong *)(frame + 120))
#define local_98 (*(char (*)[96])(frame + 24))
#define str_020a4283 (*(char (*)[1])(0x20ee540U))
#define str_020a432d (*(char (*)[1])(0x20f4addU))
#define str_020a4336 (*(char (*)[1])(0x20f4ae6U))
#define str_020a4351 (*(char (*)[1])(0x20f4afeU))
#define str_020a435c (*(char (*)[1])(0x20f4b09U))
uchar recovered_20a8f50(int *param_1,long *param_2,uint param_3)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;

  if (param_2 == (long *)0x0) {
    return '\0';
  }
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    pcVar5 = &DAT_020a4123;
    goto LAB_0206b670;
  }
  if (0x10 < param_3) {
    pcVar5 = str_020a432d;
    goto LAB_0206b670;
  }
  switch((uintptr_t)(*param_1)) {
  case 1:
    uVar2 = param_1[1];
    pcVar5 = &DAT_020a4156;
    goto LAB_0206b977;
  case 2:
    pf_varargs_20039e0__d8_(local_98,0x60,&DAT_020a432a,(double)pf_bits_float((uint32_t)param_1[2]));
    goto LAB_0206b990;
  case 3:
    pcVar5 = &DAT_020a259c;
    if (*(char **)(param_1 + 4) != (char *)0x0) {
      pcVar5 = *(char **)(param_1 + 4);
    }
    break;
  case 4:
    uVar2 = recovered_20a93d0(param_2,&DAT_020a433c);
    if ((char)uVar2 == '\0') {
      return '\0';
    }
    if (*(byte **)(param_1 + 6) != (byte *)0x0) {
      uVar7 = *(ulong *)(param_1 + 8);
      local_38 = 0x20;
      if (uVar7 < 0x20) {
        local_38 = uVar7;
      }
      if (uVar7 != 0) {
        pf_varargs_20039e0__4_(local_98,0x60,&DAT_020a4341,(uint)**(byte **)(param_1 + 6));
        uVar2 = recovered_20a93d0(param_2,local_98);
        if ((char)uVar2 == '\0') {
          return '\0';
        }
        if (uVar7 != 1) {
          uVar7 = 1;
          do {
            uVar2 = recovered_20a93d0(param_2,&DAT_020a2d5a);
            if ((char)uVar2 == '\0') {
              return '\0';
            }
            pf_varargs_20039e0__4_
                      (local_98,0x60,&DAT_020a4341,(uint)*(byte *)(*(long *)(param_1 + 6) + uVar7));
            uVar2 = recovered_20a93d0(param_2,local_98);
            if ((char)uVar2 == '\0') {
              return '\0';
            }
            uVar7 = uVar7 + 1;
          } while (local_38 != uVar7);
        }
        if ((local_38 < *(ulong *)(param_1 + 8)) &&
           (uVar2 = recovered_20a93d0(param_2,&DAT_020a4346), (char)uVar2 == '\0')) {
          return '\0';
        }
      }
    }
    pcVar5 = &DAT_020a3be5;
    goto LAB_0206b996;
  case 5:
    pcVar5 = &DAT_020a427e;
    if (param_1[1] == 0) {
      pcVar5 = str_020a4283;
    }
    break;
  case 6:
    uVar2 = param_1[1];
    pcVar5 = str_020a4336;
LAB_0206b977:
    pf_varargs_20039e0__4_(local_98,0x60,pcVar5,uVar2);
LAB_0206b990:
    pcVar5 = local_98;
LAB_0206b996:
    uVar2 = recovered_20a93d0(param_2,pcVar5);
    return (uchar)uVar2;
  case 7:
    uVar2 = recovered_20a93d0(param_2,&DAT_020a3be3);
    if ((char)uVar2 == '\0') {
      return '\0';
    }
    lVar6 = *(long *)(param_1 + 10);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 8) != 0)) {
      uVar1 = recovered_20a8f50(*(int **)(lVar6 + 0x18),param_2,param_3 + 1);
      if (uVar1 == '\0') {
        return '\0';
      }
      if (1 < *(ulong *)(*(long *)(param_1 + 10) + 8)) {
        uVar7 = 1;
        lVar6 = 0x40;
        do {
          uVar2 = recovered_20a93d0(param_2,&DAT_020a434b);
          if ((char)uVar2 == '\0') {
            return '\0';
          }
          uVar1 = recovered_20a8f50((int *)(*(long *)(*(long *)(param_1 + 10) + 0x18) + lVar6),
                                    param_2,param_3 + 1);
          if (uVar1 == '\0') {
            return '\0';
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x40;
        } while (uVar7 < *(ulong *)(*(long *)(param_1 + 10) + 8));
      }
    }
    pcVar5 = &DAT_020a3be5;
    break;
  case 8:
    uVar2 = recovered_20a93d0(param_2,&DAT_020a409e);
    if ((char)uVar2 == '\0') {
      return '\0';
    }
    lVar6 = *(long *)(param_1 + 0xc);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 8) != 0)) {
      puVar3 = (undefined1 *)**(long **)(lVar6 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_020a259c;
      }
      uVar2 = recovered_20a93d0(param_2,puVar3);
      if (((char)uVar2 == '\0') ||
         (uVar2 = recovered_20a93d0(param_2,&DAT_020a434e), (char)uVar2 == '\0')) {
        return '\0';
      }
      local_38 = CONCAT44(PF_PART4(local_38, 4),param_3 + 1);
      uVar1 = recovered_20a8f50((int *)(*(long *)(*(long *)(param_1 + 0xc) + 0x18) + 8),param_2,
                                param_3 + 1);
      if (uVar1 == '\0') {
        return '\0';
      }
      if (1 < *(ulong *)(*(long *)(param_1 + 0xc) + 8)) {
        uVar7 = 1;
        lVar6 = 0x50;
        do {
          uVar2 = recovered_20a93d0(param_2,&DAT_020a434b);
          if ((char)uVar2 == '\0') {
            return '\0';
          }
          puVar3 = *(undefined1 **)(*(long *)(*(long *)(param_1 + 0xc) + 0x18) + -8 + lVar6);
          puVar4 = &DAT_020a259c;
          if (puVar3 != (undefined1 *)0x0) {
            puVar4 = puVar3;
          }
          uVar2 = recovered_20a93d0(param_2,puVar4);
          if ((char)uVar2 == '\0') {
            return '\0';
          }
          uVar2 = recovered_20a93d0(param_2,&DAT_020a434e);
          if ((char)uVar2 == '\0') {
            return '\0';
          }
          uVar1 = recovered_20a8f50((int *)(*(long *)(*(long *)(param_1 + 0xc) + 0x18) + lVar6),
                                    param_2,(uint)local_38);
          if (uVar1 == '\0') {
            return '\0';
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x48;
        } while (uVar7 < *(ulong *)(*(long *)(param_1 + 0xc) + 8));
      }
    }
    pcVar5 = &DAT_020a40a0;
    break;
  case 9:
    pcVar5 = str_020a4351;
    break;
  default:
    pcVar5 = str_020a435c;
  }
LAB_0206b670:
  uVar2 = recovered_20a93d0(param_2,pcVar5);
  return (uchar)uVar2;
}
