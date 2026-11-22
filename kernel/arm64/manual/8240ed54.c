/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e262 (*(uint8_t *)(0x82473a33U))
#define DAT_4045a4d0 (*(uint32_t volatile *)(0x8248ad40U))
#define str_4044e3e3 (*(char (*)[1])(0x82473ae8U))
#define str_4044e3f0 (*(char (*)[1])(0x82473af5U))
#define str_4044e3fe (*(char (*)[1])(0x82473b03U))
#define uStack_48 (*(uint *)(frame + 24))
#define uStack_4c (*(uint *)(frame + 20))
undefined4 * recovered_8240ed54(long param_1,long param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if ((param_1 == 0) || (param_2 == 0)) {
    uVar8 = 0x16;
    goto LAB_40406bc0;
  }
  iVar2 = recovered_82400e0c((char *)param_1,str_4044e3e3);
  if (iVar2 == 0) {
    uVar8 = 1;
LAB_40406b6c:
    puVar4 = recovered_82400744(0x340);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_82400b14(puVar4,0,0x340);
      *puVar4 = uVar8;
      *(bool *)(puVar4 + 0x49) = iVar2 == 0;
      *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
      puVar4[0x48] = 0xffffffff;
      pf_varargs_404019bc_1((char *)(puVar4 + 1),0xf1,&DAT_4044e262,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_82400e0c((char *)param_1,str_4044e3f0);
    if (iVar3 == 0) {
      uVar8 = 2;
      goto LAB_40406b6c;
    }
    iVar3 = recovered_82400e0c((char *)param_1,str_4044e3fe);
    if (iVar3 == 0) {
      uVar8 = 3;
      goto LAB_40406b6c;
    }
    puVar4 = recovered_82400744(0x340);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_82400b14(puVar4,0,0x340);
      *puVar4 = 0;
      pcVar5 = recovered_82400e90((char *)param_2,'r');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_82400e90((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_82400e90((char *)param_2,'a');
        bVar1 = pcVar5 != (char *)0x0;
      }
      else {
        bVar1 = true;
      }
      *(bool *)(puVar4 + 0x49) = bVar1;
      pcVar5 = recovered_82400e90((char *)param_2,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_82400e90((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_82400e90((char *)param_2,'+');
        bVar1 = pcVar5 != (char *)0x0;
      }
      else {
        bVar1 = true;
      }
      *(bool *)((long)puVar4 + 0x125) = bVar1;
      pcVar5 = recovered_82400e90((char *)param_2,'a');
      *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
      puVar4[0x48] = 0xffffffff;
      pf_varargs_404019bc_1((char *)(puVar4 + 1),0xf1,&DAT_4044e262,param_1);
      recovered_82400b14(&uStack_4c,0,0xc);
      uVar6 = recovered_8240ef90(param_1,&uStack_4c);
      if ((int)uVar6 == 0) {
        if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
          DAT_4045a4d0 = 2;
LAB_40406bf8:
          recovered_82400748(puVar4);
          return (undefined4 *)0x0;
        }
      }
      else {
        pcVar5 = recovered_82400e90((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
          if (*(char *)((long)puVar4 + 0x125) == '\x01') {
            uVar7 = recovered_8240efe0((long)puVar4,uVar7);
            if ((uVar7 & 1) == 0) goto LAB_40406bf8;
            recovered_82400928(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48);
            uVar7 = (ulong)uStack_48;
          }
          else {
            *(ulong *)(puVar4 + 0x3e) = (ulong)uStack_4c;
          }
          *(ulong *)(puVar4 + 0x42) = uVar7;
        }
      }
      if (*(char *)((long)puVar4 + 0x126) == '\x01') {
        *(undefined8 *)(puVar4 + 0x46) = *(undefined8 *)(puVar4 + 0x42);
        return puVar4;
      }
      return puVar4;
    }
  }
  uVar8 = 0xc;
LAB_40406bc0:
  DAT_4045a4d0 = uVar8;
  return (undefined4 *)0x0;
}
