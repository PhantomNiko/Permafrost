/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020adff0 (*(uint32_t volatile *)(0x2107190U))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(uint *)(0x6834U))
#define local_30 (*(uint *)(frame + 32))
#define local_34 (*(uint *)(frame + 28))
#define str_020a2764 (*(char (*)[1])(0x20ec57aU))
#define str_020a2771 (*(char (*)[1])(0x20ec587U))
#define str_020a277f (*(char (*)[1])(0x20ec595U))
ulonglong recovered_201b8b0(long param_1,long param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulong uVar7;
  void *out;
  ulong size;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;

  if (param_1 == 0 || param_2 == 0) {
    DAT_020adff0 = 0x16;
    return 0;
  }
  iVar3 = recovered_2002eb0((char *)param_1,str_020a2764);
  if (iVar3 == 0) {
    uVar8 = 1;
  }
  else {
    iVar4 = recovered_2002eb0((char *)param_1,str_020a2771);
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    else {
      iVar4 = recovered_2002eb0((char *)param_1,str_020a277f);
      if (iVar4 != 0) {
        puVar5 = recovered_2000ad0(0x340);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_2002110(puVar5,0,0x340);
          *puVar5 = 0;
          uVar6 = recovered_2003450((char *)param_2,'r');
          bVar10 = true;
          bVar9 = true;
          if (uVar6 == 0) {
            uVar6 = recovered_2003450((char *)param_2,'+');
            bVar9 = true;
            if (uVar6 == 0) {
              uVar6 = recovered_2003450((char *)param_2,'a');
              bVar9 = uVar6 != 0;
            }
          }
          *(bool *)(puVar5 + 0x49) = bVar9;
          uVar6 = recovered_2003450((char *)param_2,'w');
          if ((uVar6 == 0) && (uVar6 = recovered_2003450((char *)param_2,'a'), uVar6 == 0)) {
            uVar6 = recovered_2003450((char *)param_2,'+');
            bVar10 = uVar6 != 0;
          }
          *(bool *)((long)puVar5 + 0x125) = bVar10;
          uVar6 = recovered_2003450((char *)param_2,'a');
          *(bool *)((long)puVar5 + 0x126) = uVar6 != 0;
          puVar5[0x48] = 0xffffffff;
          pf_varargs_20039e0__8_((char *)(puVar5 + 1),0xf1,&DAT_020a25e3,param_1);
          recovered_2002110(&local_34,0,0xc);
          if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
             (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
              (iVar3 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34), iVar3 != 0)))) {
            uVar6 = recovered_2003450((char *)param_2,'w');
            if (local_30 != 0 && uVar6 == 0) {
              if (*(char *)((long)puVar5 + 0x125) == '\x01') {
                size = (ulong)local_30;
                uVar7 = *(ulong *)(puVar5 + 0x44);
                if (uVar7 < size) {
                  uVar2 = 0x100;
                  if (uVar7 != 0) {
                    uVar2 = uVar7;
                  }
                  do {
                    uVar7 = uVar2;
                    uVar2 = uVar7 * 2;
                  } while (uVar7 < size);
                  out = recovered_2000d40(*(void **)(puVar5 + 0x40),uVar7);
                  if (out == (void *)0x0) {
                    DAT_020adff0 = 0xc;
                    *(undefined1 *)((long)puVar5 + 0x129) = 1;
                    goto LAB_0200b7c8;
                  }
                  *(void **)(puVar5 + 0x40) = out;
                  *(ulong *)(puVar5 + 0x44) = uVar7;
                  *(void **)(puVar5 + 0x3e) = out;
                  size = (ulong)local_30;
                }
                else {
                  out = *(void **)(puVar5 + 0x40);
                }
                recovered_2001410(out,(void *)(ulong)local_34,size);
              }
              else {
                *(ulong *)(puVar5 + 0x3e) = (ulong)local_34;
              }
              *(ulong *)(puVar5 + 0x42) = (ulong)local_30;
              cVar1 = *(char *)((long)puVar5 + 0x126);
              goto joined_r0x0200b722;
            }
          }
          else if (*(char *)((long)puVar5 + 0x125) == '\0') {
            DAT_020adff0 = 2;
LAB_0200b7c8:
            recovered_2000bb0(puVar5);
            return 0;
          }
          cVar1 = *(char *)((long)puVar5 + 0x126);
joined_r0x0200b722:
          if (cVar1 == '\x01') {
            *(undefined8 *)(puVar5 + 0x46) = *(undefined8 *)(puVar5 + 0x42);
            return (ulonglong)puVar5;
          }
          return (ulonglong)puVar5;
        }
        goto LAB_0200b79c;
      }
      uVar8 = 3;
    }
  }
  puVar5 = recovered_2000ad0(0x340);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_2002110(puVar5,0,0x340);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    pf_varargs_20039e0__8_((char *)(puVar5 + 1),0xf1,&DAT_020a25e3,param_1);
    return (ulonglong)puVar5;
  }
LAB_0200b79c:
  DAT_020adff0 = 0xc;
  return 0;
}
