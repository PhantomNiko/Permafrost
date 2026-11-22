/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208eba8 (*(uint8_t *)(0x20c5359U))
#define DAT_0208fe42 (*(uint8_t *)(0x20cd43fU))
#define DAT_0208fe45 (*(uint8_t *)(0x20cd442U))
#define DAT_0208fe48 (*(uint8_t *)(0x20cd445U))
#define DAT_0208fe4b (*(uint8_t *)(0x20cd448U))
#define DAT_0208fe4d (*(uint8_t *)(0x20cd44aU))
#define DAT_0208fe4f (*(uint8_t *)(0x20cd44cU))
#define DAT_0208fe52 (*(uint8_t *)(0x20cd44fU))
#define DAT_0208fe55 (*(uint8_t *)(0x20cd452U))
#define DAT_0208fe57 (*(uint8_t *)(0x20ccaf8U))
#define DAT_0208fe59 (*(uint8_t *)(0x20cc533U))
#define DAT_0208fe5b (*(uint8_t *)(0x20cc8eaU))
#define DAT_0208fe5d (*(uint8_t *)(0x20cd454U))
#define DAT_0208fe5f (*(uint8_t *)(0x20cd456U))
#define in_stack_ffffff70 (*(char * *)(frame + 32))
#define local_14 (*(float *)(frame + 156))
#define local_18 (*(char * *)(frame + 152))
#define local_1c (*(void * *)(frame + 148))
#define local_30 (*(char * *)(frame + 128))
#define local_38 (*(uint (*)[2])(frame + 120))
#define str_02096efb (*(char (*)[1])(0x20d538eU))
#define str_02096f25 (*(char (*)[1])(0x20d53b8U))
#define str_02096f4d (*(char (*)[1])(0x20d53e0U))
#define str_02096f72 (*(char (*)[1])(0x20d5405U))
#define str_02096f83 (*(char (*)[1])(0x20d5416U))
#define str_02096fab (*(char (*)[1])(0x20d543eU))
uchar recovered_207fec0(void *context,char *op,void *left,void *right,void *pf_output_slot)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  void *out_00;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint incoming_edx;
  char *pcVar12;

  if (pf_output_slot == (void *)0x0 || (right == (void *)0x0 || left == (void *)0x0)) {
    return '\0';
  }
  local_1c = context;
  iVar5 = recovered_20022a0(op,&DAT_0208fe55);
  if (iVar5 == 0) {
    uVar10 = *(uint *)left;
    if ((uVar10 != 3) && (uVar2 = *(uint *)right, uVar2 != 3)) {
      if ((5 < uVar10) ||
         ((((0x26U >> (uVar10 & 0x1f) & 1) == 0 || (5 < uVar2)) ||
          ((0x26U >> (uVar2 & 0x1f) & 1) == 0)))) {
        pcVar12 = str_02096f25;
        goto LAB_020560b9;
      }
      if (uVar10 == 2) {
        fVar1 = *(float *)((int)left + 8);
        local_14 = 0.0;
        if ((uVar2 == 1) || (uVar2 == 5)) {
          local_14 = (float)*(int *)((int)right + 4);
        }
        else if (uVar2 == 2) goto LAB_0205636a;
      }
      else {
        if (uVar2 != 2) {
          iVar5 = *(int *)((int)right + 4) + *(int *)((int)left + 4);
          local_14 = (float)iVar5;
          *(undefined4 *)pf_output_slot = 1;
          goto LAB_02056396;
        }
        if ((uVar10 == 1) || (uVar10 == 5)) {
          fVar1 = (float)*(int *)((int)left + 4);
        }
        else {
          fVar1 = 0.0;
          if (uVar10 == 2) {
            fVar1 = *(float *)((int)left + 8);
          }
        }
LAB_0205636a:
        local_14 = *(float *)((int)right + 8);
      }
      local_14 = local_14 + fVar1;
      iVar5 = (int)ROUND(local_14);
      goto LAB_02056390;
    }
    local_38[0] = 0;
    local_38[1] = 0;
    local_30 = (char *)0x0;
    uVar9 = recovered_2086030(left,(int)local_38,0);
    if ((char)uVar9 == '\0') {
      recovered_2001710(local_30);
LAB_02056030:
      pcVar12 = (char *)0x0;
LAB_02056093:
      recovered_2001710(pcVar12);
      pcVar12 = (char *)0x0;
    }
    else {
      pcVar12 = local_30;
      if (local_30 == (char *)0x0) {
        pcVar12 = recovered_2001650(1);
        if (pcVar12 == (char *)0x0) goto LAB_02056030;
        *pcVar12 = '\0';
      }
      local_38[0] = 0;
      local_38[1] = 0;
      local_30 = (char *)0x0;
      uVar9 = recovered_2086030(right,(int)local_38,0);
      if ((char)uVar9 == '\0') {
        recovered_2001710(local_30);
        goto LAB_02056093;
      }
      pcVar6 = local_30;
      if (local_30 == (char *)0x0) {
        pcVar6 = recovered_2001650(1);
        if (pcVar6 == (char *)0x0) goto LAB_02056093;
        *pcVar6 = '\0';
      }
      local_14 = (float)recovered_2002270(pcVar12);
      local_18 = pcVar6;
      uVar7 = recovered_2002270(pcVar6);
      out_00 = recovered_2001650(uVar7 + 1 + (int)local_14);
      if (out_00 != (void *)0x0) {
        recovered_2001b70(out_00,pcVar12,(ulong)local_14);
        pcVar6 = local_18;
        recovered_2001b70((void *)((int)out_00 + (int)local_14),local_18,uVar7 + 1);
        recovered_2043a90(pf_output_slot,incoming_edx);
        *(undefined4 *)pf_output_slot = 3;
        *(undefined4 *)((int)pf_output_slot + 4) = 0;
        *(void **)((int)pf_output_slot + 0xc) = out_00;
        recovered_2001710(pcVar12);
        recovered_2001710(pcVar6);
        return '\x01';
      }
      recovered_2001710(pcVar12);
      pcVar12 = local_18;
    }
    recovered_2001710(pcVar12);
    pcVar12 = str_02096efb;
LAB_020560b9:
    pf_varargs_204ff60__4_(local_1c,op,pcVar12,(uint)in_stack_ffffff70);
    return '\0';
  }
  iVar5 = recovered_20022a0(op,&DAT_0208fe57);
  if (((((iVar5 != 0) && (iVar5 = recovered_20022a0(op,&DAT_0208fe59), iVar5 != 0)) &&
       (iVar5 = recovered_20022a0(op,&DAT_0208eba8), iVar5 != 0)) &&
      ((iVar5 = recovered_20022a0(op,&DAT_0208fe5b), iVar5 != 0 &&
       (iVar5 = recovered_20022a0(op,&DAT_0208fe5d), iVar5 != 0)))) &&
     (iVar5 = recovered_20022a0(op,&DAT_0208fe5f), iVar5 != 0)) {
    iVar5 = recovered_20022a0(op,&DAT_0208fe42);
    if (((iVar5 == 0) || (iVar5 = recovered_20022a0(op,&DAT_0208fe45), iVar5 == 0)) ||
       (iVar5 = recovered_20022a0(op,&DAT_0208fe48), iVar5 == 0)) {
      bVar4 = recovered_2086aa0(left,right);
      iVar5 = recovered_20022a0(op,&DAT_0208fe42);
      bVar4 = (iVar5 != 0) != bVar4;
      uVar9 = 0x3f800000;
      if (!bVar4) {
        uVar9 = 0;
      }
      *(undefined4 *)pf_output_slot = 5;
      *(uint *)((int)pf_output_slot + 4) = (uint)bVar4;
      *(undefined4 *)((int)pf_output_slot + 8) = uVar9;
      *(undefined4 *)((int)pf_output_slot + 0xc) = 0;
      *(undefined4 *)((int)pf_output_slot + 0x10) = 0;
      *(undefined4 *)((int)pf_output_slot + 0x14) = 0;
      *(undefined4 *)((int)pf_output_slot + 0x18) = 0;
      *(undefined4 *)((int)pf_output_slot + 0x1c) = 0;
      *(undefined4 *)((int)pf_output_slot + 0x20) = 0;
      return '\x01';
    }
    iVar5 = recovered_20022a0(op,&DAT_0208fe4b);
    if ((((iVar5 != 0) && (iVar5 = recovered_20022a0(op,&DAT_0208fe4d), iVar5 != 0)) &&
        (iVar5 = recovered_20022a0(op,&DAT_0208fe4f), iVar5 != 0)) &&
       (iVar5 = recovered_20022a0(op,&DAT_0208fe52), iVar5 != 0)) {
      pcVar12 = str_02096fab;
      in_stack_ffffff70 = op;
      goto LAB_020560b9;
    }
    local_38[0] = 0;
    uVar9 = recovered_209b3b0(left,right,local_38);
    if ((uchar)uVar9 == '\0') {
      pf_varargs_204ff60__4_(local_1c,op,str_02096f83,(uint)op);
      return '\0';
    }
    iVar5 = recovered_20022a0(op,&DAT_0208fe4b);
    if (iVar5 == 0) {
      uVar10 = local_38[0] >> 0x1f;
      uVar3 = 0x3f800000;
      if (-1 < (int)local_38[0]) {
LAB_0205644e:
        uVar3 = 0;
      }
    }
    else {
      iVar5 = recovered_20022a0(op,&DAT_0208fe4d);
      if (iVar5 != 0) {
        iVar5 = recovered_20022a0(op,&DAT_0208fe4f);
        *(undefined4 *)pf_output_slot = 5;
        if (iVar5 == 0) {
          uVar10 = (uint)((int)local_38[0] < 1);
          uVar3 = 0x3f800000;
          if ((int)local_38[0] < 1) goto LAB_0205645d;
        }
        else {
          uVar10 = (uint)(-1 < (int)local_38[0]);
          uVar3 = 0x3f800000;
          if (-1 < (int)local_38[0]) goto LAB_0205645d;
        }
        uVar3 = 0;
        goto LAB_0205645d;
      }
      uVar10 = (uint)(0 < (int)local_38[0]);
      uVar3 = 0x3f800000;
      if ((int)local_38[0] < 1) goto LAB_0205644e;
    }
    *(undefined4 *)pf_output_slot = 5;
LAB_0205645d:
    *(uint *)((int)pf_output_slot + 4) = uVar10;
    *(undefined4 *)((int)pf_output_slot + 8) = uVar3;
    *(undefined4 *)((int)pf_output_slot + 0xc) = 0;
    *(undefined4 *)((int)pf_output_slot + 0x10) = 0;
    *(undefined4 *)((int)pf_output_slot + 0x14) = 0;
    *(undefined4 *)((int)pf_output_slot + 0x18) = 0;
    *(undefined4 *)((int)pf_output_slot + 0x1c) = 0;
    *(undefined4 *)((int)pf_output_slot + 0x20) = 0;
    return (uchar)uVar9;
  }
  uVar10 = *(uint *)left;
  if (((5 < uVar10) || ((0x26U >> (uVar10 & 0x1f) & 1) == 0)) ||
     ((uVar2 = *(uint *)right, 5 < uVar2 || ((0x26U >> (uVar2 & 0x1f) & 1) == 0)))) {
    pcVar12 = str_02096f4d;
    in_stack_ffffff70 = op;
    goto LAB_020560b9;
  }
  local_18 = (char *)0x0;
  if ((uVar10 == 1) || (uVar10 == 5)) {
    local_18 = (char *)(uintptr_t)pf_float_bits((float)*(int *)((int)left + 4));
  }
  else if (uVar10 == 2) {
    local_18 = *(char **)((int)left + 8);
  }
  local_14 = 0.0;
  if ((uVar2 == 1) || (uVar2 == 5)) {
    local_14 = (float)*(int *)((int)right + 4);
  }
  else if (uVar2 == 2) {
    local_14 = *(float *)((int)right + 8);
  }
  iVar5 = recovered_20022a0(op,&DAT_0208eba8);
  if ((iVar5 == 0) || (iVar5 = recovered_20022a0(op,&DAT_0208fe5b), iVar5 == 0)) {
    if ((local_14 == 0.0) && (!NAN(local_14))) goto LAB_02056011;
  }
  else {
    iVar5 = recovered_20022a0(op,&DAT_0208fe5d);
    if (iVar5 == 0 && local_14 == 0.0) {
LAB_02056011:
      pcVar12 = str_02096f72;
      goto LAB_020560b9;
    }
  }
  iVar5 = recovered_20022a0(op,&DAT_0208fe5f);
  if (iVar5 == 0) {
    local_14 = recovered_2003130(pf_bits_float((uintptr_t)local_18),local_14);
    iVar5 = (int)ROUND(local_14);
LAB_02056390:
    *(undefined4 *)pf_output_slot = 2;
  }
  else {
    iVar5 = recovered_20022a0(op,&DAT_0208fe5b);
    if (iVar5 != 0) {
      iVar5 = recovered_20022a0(op,&DAT_0208eba8);
      if (iVar5 == 0) {
        local_14 = pf_bits_float((uintptr_t)local_18) / local_14;
        iVar5 = (int)ROUND(local_14);
      }
      else {
        if ((*(int *)left != 2) && (*(int *)right != 2)) {
          iVar5 = recovered_20022a0(op,&DAT_0208fe57);
          if (iVar5 != 0) {
            iVar8 = recovered_20022a0(op,&DAT_0208fe59);
            iVar5 = *(int *)((int)left + 4);
            iVar11 = *(int *)((int)right + 4);
            *(undefined4 *)pf_output_slot = 1;
            if (iVar8 == 0) {
              iVar11 = iVar11 * iVar5;
              local_14 = (float)iVar11;
              *(int *)((int)pf_output_slot + 4) = iVar11;
            }
            else {
              iVar5 = iVar5 % iVar11;
              local_14 = (float)iVar5;
              *(int *)((int)pf_output_slot + 4) = iVar5;
            }
            goto LAB_02056399;
          }
          iVar5 = *(int *)((int)left + 4) - *(int *)((int)right + 4);
          local_14 = (float)iVar5;
          *(undefined4 *)pf_output_slot = 1;
          goto LAB_02056396;
        }
        iVar5 = recovered_20022a0(op,&DAT_0208fe57);
        if (iVar5 == 0) {
          local_14 = pf_bits_float((uintptr_t)local_18) - local_14;
          iVar5 = (int)ROUND(local_14);
        }
        else {
          iVar5 = recovered_20022a0(op,&DAT_0208fe59);
          if (iVar5 == 0) {
            local_14 = local_14 * pf_bits_float((uintptr_t)local_18);
            iVar5 = (int)ROUND(local_14);
          }
          else {
            local_14 = recovered_2002fa0(pf_bits_float((uintptr_t)local_18),local_14);
            iVar5 = (int)ROUND(local_14);
          }
        }
      }
      goto LAB_02056390;
    }
    iVar5 = (int)ROUND(pf_bits_float((uintptr_t)local_18) / local_14);
    local_14 = (float)iVar5;
    *(undefined4 *)pf_output_slot = 1;
  }
LAB_02056396:
  *(int *)((int)pf_output_slot + 4) = iVar5;
LAB_02056399:
  *(float *)((int)pf_output_slot + 8) = local_14;
  *(undefined4 *)((int)pf_output_slot + 0xc) = 0;
  *(undefined4 *)((int)pf_output_slot + 0x10) = 0;
  *(undefined4 *)((int)pf_output_slot + 0x14) = 0;
  *(undefined4 *)((int)pf_output_slot + 0x18) = 0;
  *(undefined4 *)((int)pf_output_slot + 0x1c) = 0;
  *(undefined4 *)((int)pf_output_slot + 0x20) = 0;
  return '\x01';
}
