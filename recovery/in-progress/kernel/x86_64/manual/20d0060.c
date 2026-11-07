/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a240e (*(uint8_t *)(0x20ec14eU))
#define local_24d (*(undefined1 *)(frame + 627))
#define local_24e (*(undefined1 *)(frame + 626))
#define local_24f (*(undefined1 *)(frame + 625))
#define local_250 (*(undefined1 *)(frame + 624))
#define local_298 (*(uint *)(frame + 552))
#define local_29c (*(uint *)(frame + 548))
#define local_2a8 (*(undefined1 (*)[12])(frame + 536))
#define local_38 (*(int * *)(frame + 1160))
#define local_40 (*(void * *)(frame + 1152))
#define local_450 (*(uint *)(frame + 112))
#define local_48 (*(long *)(frame + 1144))
#define local_498 (*(uint *)(frame + 40))
#define local_49c (*(uint *)(frame + 36))
#define local_4a8 (*(undefined1 (*)[12])(frame + 24))
#define local_4c (*(uint *)(frame + 1140))
#define local_58 (*(ulong *)(frame + 1128))
#define local_5c (*(uint *)(frame + 1124))
#define local_68 (*(char * *)(frame + 1112))
#define local_70 (*(ulong *)(frame + 1104))
#define local_78 (*(ulong *)(frame + 1096))
#define local_80 (*(ulong *)(frame + 1088))
#define local_a8 (*(char (*)[40])(frame + 1048))
uchar recovered_20d0060(long param_1,int *param_2,uint param_3,uint param_4,char *param_5)

{
  unsigned char frame[1248] __attribute__((aligned(16))) = {0};

  void *out;
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  uchar uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  void *pvVar11;
  ulong uVar12;

  if ((((param_1 == 0) || (*(int *)(param_1 + 0x1c) != 0)) || (*(char *)(param_1 + 0x21) != '\0'))
     || ((*param_2 != 2 || (param_3 < (uint)param_2[1])))) {
    return '\0';
  }
  local_70 = (ulong)param_3;
  local_80 = (param_4 + local_70) - 1;
  if ((uint)param_2[2] < local_80) {
    return '\0';
  }
  uVar9 = (ulong)(uint)param_2[6] << 9;
  uVar10 = param_2[3];
  uVar1 = param_2[5];
  local_68 = param_5;
  local_5c = param_4;
  local_48 = param_1;
  local_38 = param_2;
  local_40 = recovered_2000ad0(uVar9);
  if (local_40 == (void *)0x0) {
    return '\0';
  }
  uVar3 = recovered_206b1b0(*(byte *)(local_48 + 4),(ulong)(uint)local_38[4],(long)local_40,uVar9);
  if ((((char)uVar3 == '\0') ||
      (uVar3 = recovered_206b1b0(*(byte *)(local_48 + 4),(ulong)(uint)local_38[8],(long)local_4a8,
                                 0x200), (char)uVar3 == '\0')) ||
     (uVar3 = recovered_206b1b0(*(byte *)(local_48 + 4),(ulong)(uint)local_38[9],(long)local_2a8,
                                0x200), (char)uVar3 == '\0')) {
LAB_0208c764:
    uVar7 = '\0';
LAB_0208c766:
    pvVar11 = local_40;
  }
  else {
    pvVar11 = local_40;
    local_58 = (ulong)uVar1;
    if (local_38[3] != 0) {
      uVar8 = param_4 + local_70;
      local_58 = (ulong)uVar1 * (ulong)uVar10;
      local_4c = 0xffffffff;
      uVar12 = 0;
      local_78 = uVar9;
      do {
        lVar5 = (uint)local_38[5] * uVar12;
        uVar9 = *(ulong *)((long)local_40 + lVar5 + 0x20);
        uVar2 = *(ulong *)((long)local_40 + lVar5 + 0x28);
        iVar4 = recovered_2002a00((void *)((long)local_40 + lVar5),&DAT_020a240e,0x10);
        pvVar11 = local_40;
        if (iVar4 == 0) {
          if (local_4c == 0xffffffff) {
            local_4c = (uint)uVar12;
          }
        }
        else if (uVar9 - 1 < uVar2) {
          uVar10 = ((int)uVar2 - (int)uVar9) + 1;
          if (((local_5c != 0) && (uVar10 != 0)) &&
             (local_70 < (ulong)uVar10 + (uVar9 & 0xffffffff) && (uVar9 & 0xffffffff) < uVar8))
          goto LAB_0208c764;
        }
        uVar10 = local_4c;
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)local_38[3]);
      if (local_4c != 0xffffffff) {
        lVar5 = (ulong)local_4c * (ulong)(uint)local_38[5];
        out = (void *)((long)local_40 + lVar5);
        recovered_2002110(out,0,(ulong)(uint)local_38[5]);
        recovered_20d1790(local_68,(long)out);
        recovered_20ce4c0((long)pvVar11 + lVar5 + 0x10);
        *(char *)((long)pvVar11 + lVar5 + 0x20) = (char)param_3;
        *(char *)((long)pvVar11 + lVar5 + 0x21) = (char)(param_3 >> 8);
        *(char *)((long)pvVar11 + lVar5 + 0x22) = (char)(param_3 >> 0x10);
        *(char *)((long)pvVar11 + lVar5 + 0x23) = (char)(param_3 >> 0x18);
        *(undefined4 *)((long)pvVar11 + lVar5 + 0x24) = 0;
        *(char *)((long)pvVar11 + lVar5 + 0x28) = (char)local_80;
        *(char *)((long)pvVar11 + lVar5 + 0x29) = (char)(local_80 >> 8);
        *(char *)((long)pvVar11 + lVar5 + 0x2a) = (char)(local_80 >> 0x10);
        *(char *)((long)pvVar11 + lVar5 + 0x2b) = (char)(local_80 >> 0x18);
        *(char *)((long)pvVar11 + lVar5 + 0x2c) = (char)(local_80 >> 0x20);
        *(char *)((long)pvVar11 + lVar5 + 0x2d) = (char)(local_80 >> 0x28);
        *(char *)((long)pvVar11 + lVar5 + 0x2e) = (char)(local_80 >> 0x30);
        *(char *)((long)pvVar11 + lVar5 + 0x2f) = (char)(local_80 >> 0x38);
        puVar6 = (undefined1 *)recovered_20d1a90(local_68,uVar10 + 1,local_a8);
        uVar9 = local_78;
        uVar10 = local_38[5];
        uVar8 = 0x48;
        if (uVar10 < 0x81) {
          if (uVar10 < 0x39) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulong)(uVar10 - 0x38);
          }
        }
        recovered_20d1c70((long)pvVar11 + lVar5 + 0x38,uVar8,puVar6);
        pvVar11 = local_40;
        local_450 = recovered_20cf570((long)local_40,local_58);
        local_250 = (undefined1)local_450;
        local_24f = (undefined1)(local_450 >> 8);
        local_24e = (undefined1)(local_450 >> 0x10);
        local_24d = (undefined1)(local_450 >> 0x18);
        local_498 = 0;
        local_298 = 0;
        local_498 = recovered_20cf570((long)local_4a8,(ulong)local_49c);
        local_298 = recovered_20cf570((long)local_2a8,(ulong)local_29c);
        uVar10 = recovered_206cfd0(*(byte *)(local_48 + 4),(ulong)(uint)local_38[4],(long)pvVar11,
                                   uVar9);
        if ((char)uVar10 != '\0') {
          uVar10 = recovered_206cfd0(*(byte *)(local_48 + 4),(ulong)(uint)local_38[7],(long)pvVar11,
                                     uVar9);
          if (((char)uVar10 == '\0') ||
             (uVar10 = recovered_206cfd0(*(byte *)(local_48 + 4),(ulong)(uint)local_38[8],
                                         (long)local_4a8,0x200), (char)uVar10 == '\0'))
          goto LAB_0208c764;
          uVar10 = recovered_206cfd0(*(byte *)(local_48 + 4),(ulong)(uint)local_38[9],
                                     (long)local_2a8,0x200);
          uVar7 = (uchar)uVar10;
          goto LAB_0208c766;
        }
      }
    }
    uVar7 = '\0';
  }
  recovered_2000bb0(pvVar11);
  return uVar7;
}
