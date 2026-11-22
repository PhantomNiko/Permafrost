/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define PTR_DAT_02098000 (*(uint8_t * *)(0x20d8000U))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(code * *)(0x6834U))
#define local_18 (*(uint *)(frame + 24))
#define local_1c (*(void * *)(frame + 20))
#define str_0208e4a4 (*(char (*)[1])(0x20c51ceU))
#define str_0208e4b1 (*(char (*)[1])(0x20c51dbU))
#define str_0208e4bf (*(char (*)[1])(0x20c51e9U))
undefined4 * recovered_2018470(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  void *pf_output_slot;
  undefined4 uVar8;
  bool bVar9;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_02098000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_20022a0((char *)param_1,str_0208e4a4);
  if (iVar3 == 0) {
    uVar8 = 1;
  }
  else {
    iVar4 = recovered_20022a0((char *)param_1,str_0208e4b1);
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    else {
      iVar4 = recovered_20022a0((char *)param_1,str_0208e4bf);
      if (iVar4 != 0) {
        puVar5 = recovered_2001650(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_2001e00(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_20024f0((char *)param_2,'r');
          bVar9 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_20024f0((char *)param_2,'+');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_20024f0((char *)param_2,'a');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar9;
          pcVar6 = recovered_20024f0((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_20024f0((char *)param_2,'a');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_20024f0((char *)param_2,'+');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar9 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar9;
          pcVar6 = recovered_20024f0((char *)param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          pf_varargs_2003aa0__4_((char *)(puVar5 + 1),0xf1,&DAT_0208e323,param_1);
          recovered_2001e00(&local_1c,0,0xc);
          if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
             (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00006834)(param_1,&local_1c), iVar3 != 0)))) {
            pcVar6 = recovered_20024f0((char *)param_2,'w');
            if (local_18 != 0 && pcVar6 == (char *)0x0) {
              if (*(char *)((int)puVar5 + 0x111) == '\x01') {
                uVar7 = puVar5[0x41];
                if (uVar7 < local_18) {
                  uVar2 = 0x100;
                  if (uVar7 != 0) {
                    uVar2 = uVar7;
                  }
                  do {
                    uVar7 = uVar2;
                    uVar2 = uVar7 * 2;
                  } while (uVar7 < local_18);
                  pf_output_slot = recovered_2001860((void *)puVar5[0x3f],uVar7);
                  if (pf_output_slot == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_02098000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_0200c31e;
                  }
                  puVar5[0x3f] = pf_output_slot;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = pf_output_slot;
                }
                else {
                  pf_output_slot = (void *)puVar5[0x3f];
                }
                recovered_2001b70(pf_output_slot,local_1c,local_18);
              }
              else {
                puVar5[0x3e] = local_1c;
              }
              puVar5[0x40] = local_18;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x0200c2fc;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_02098000 = 2;
LAB_0200c31e:
            recovered_2001710(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x0200c2fc:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_0200c186;
      }
      uVar8 = 3;
    }
  }
  puVar5 = recovered_2001650(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_2001e00(puVar5,0,800);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    pf_varargs_2003aa0__4_((char *)(puVar5 + 1),0xf1,&DAT_0208e323,param_1);
    return puVar5;
  }
LAB_0200c186:
  *(undefined4 *)PTR_DAT_02098000 = 0xc;
  return (undefined4 *)0x0;
}
