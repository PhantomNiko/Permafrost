#include "functions.h"
#undef DAT_0005703c
#define DAT_0005703c (*(uint8_t *)(0x5703cU))
#undef _DAT_0005703c
#define _DAT_0005703c (*(float *)(0x5703cU))
#define local_3c (*(double *)(frame + 16))
#define local_34 (*(uint *)(frame + 24))
#define local_30 (*(int *)(frame + 28))
#define local_2c (*(int *)(frame + 32))
#define local_28 (*(int *)(frame + 36))
#define local_24 (*(int * *)(frame + 40))
#define local_20 (*(int *)(frame + 44))
#define local_1c (*(uint *)(frame + 48))
#define local_18 (*(int * *)(frame + 52))
#define local_14 (*(int * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d74c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_2d74c(int *param_1,int *param_2,int param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  byte bVar5;
  float fVar6;
  int *piVar7;
  int *piVar8;
  int *extraout_EAX = 0;
  int *extraout_EAX_00 = 0;
  int *extraout_EAX_01 = 0;
  uint uVar9;
  int *extraout_EAX_02 = 0;
  uint uVar10;
  int iVar11;
  bool bVar12;

  if (0x10 < param_3) {
    return 0;
  }
  piVar8 = param_1 + 3;
  local_20 = param_3 + 1;
  local_1c = 0;
  local_24 = piVar8;
  local_18 = param_2;
  local_14 = param_1;
  do {
    while( true ) {
      while( true ) {
        piVar7 = local_14;
        uVar9 = param_2[1];
        if (uVar9 <= local_1c) goto LAB_0002daab;
        uVar1 = local_1c + 1;
        iVar11 = *param_2;
        bVar5 = *(byte *)(iVar11 + local_1c);
        uVar10 = (uint)bVar5;
        if (uVar10 != 0xc) break;
        if (uVar9 <= uVar1) {
          return 0;
        }
        piVar8 = (int *)(uint)*(byte *)(iVar11 + 1 + local_1c);
        if (((int *)0x1 < piVar8 + -4) && (piVar8 != (int *)0x21)) {
          if (piVar8 != (int *)0x7) {
            return 0;
          }
          piVar8 = (int *)local_14[4];
          if (piVar8 < (int *)0x4) {
            return 0;
          }
          iVar11 = local_14[3];
          uVar2 = *(undefined8 *)(iVar11 + -0x20 + (int)piVar8 * 8);
          *(undefined8 *)(local_14 + 0x1a) = uVar2;
          uVar3 = *(undefined8 *)(iVar11 + -0x18 + (int)piVar8 * 8);
          *(undefined8 *)(local_14 + 0x1c) = uVar3;
          *(undefined8 *)(local_14 + 0x1e) = uVar2;
          *(undefined8 *)(local_14 + 0x20) = uVar3;
          *(undefined1 *)(local_14 + 0x24) = 0;
          *(double *)(local_14 + 0x22) =
               *(double *)(iVar11 + -0x10 + (int)piVar8 * 8) * *(double *)(local_14 + 1);
        }
        local_14[4] = 0;
        local_1c = local_1c + 2;
      }
      if (bVar5 < 0x20) break;
      if ((byte)(bVar5 - 0x20) < 0xd7) {
        local_28 = uVar10 - 0x8b;
        fVar6 = (float)local_28;
        uVar9 = uVar1;
      }
      else if ((byte)(bVar5 + 9) < 4) {
        fVar6 = 0.0;
        bVar12 = uVar1 < uVar9;
        uVar9 = uVar1;
        if (bVar12) {
          uVar10 = local_1c + 2;
          local_2c = CONCAT11(bVar5,*(undefined1 *)(iVar11 + 1 + local_1c)) - 0xf694;
          fVar6 = (float)local_2c;
          local_1c = uVar1;
          goto LAB_0002d8cb;
        }
      }
      else if ((byte)(bVar5 + 5) < 4) {
        fVar6 = 0.0;
        bVar12 = uVar1 < uVar9;
        uVar9 = uVar1;
        if (bVar12) {
          uVar10 = local_1c + 2;
          local_30 = 0xfa94 - (uint)CONCAT11(bVar5,*(undefined1 *)(iVar11 + 1 + local_1c));
          fVar6 = (float)local_30;
          local_1c = uVar1;
LAB_0002d8cb:
          uVar9 = uVar10;
          uVar1 = local_1c;
        }
      }
      else {
        uVar10 = local_1c + 5;
        fVar6 = 0.0;
        if (uVar10 <= uVar9) {
          local_1c = uVar1;
          local_34 = recovered_28b0f(local_18,uVar1);
          fVar6 = (float)(int)local_34 * _DAT_0005703c;
          goto LAB_0002d8cb;
        }
      }
      local_1c = uVar1;
      local_3c = (double)fVar6;
      piVar8 = (int *)recovered_2dc12(local_24,&local_3c);
      param_2 = local_18;
      local_1c = uVar9;
    }
    piVar8 = (int *)0x0;
    switch((uintptr_t)(uVar10)) {
    case 1:
    case 3:
      local_1c = uVar1;
      break;
    default:
      return 0;
    case 4:
      uVar9 = local_14[4];
      if (uVar9 == 0) {
        return 0;
      }
      iVar11 = local_14[3];
      goto LAB_0002d96b;
    case 5:
      uVar9 = local_14[4];
      if (uVar9 < 2) {
        return 0;
      }
      dVar4 = *(double *)(local_14[3] + -8 + uVar9 * 8);
      *(double *)(local_14 + 0x1a) =
           *(double *)(local_14[3] + -0x10 + uVar9 * 8) + *(double *)(local_14 + 0x1a);
      goto LAB_0002d925;
    case 6:
      if (local_14[4] == 0) {
        return 0;
      }
      *(double *)(local_14 + 0x1a) =
           *(double *)(local_14[3] + -8 + local_14[4] * 8) + *(double *)(local_14 + 0x1a);
      goto LAB_0002d9a4;
    case 7:
      if (local_14[4] == 0) {
        return 0;
      }
      dVar4 = *(double *)(local_14[3] + -8 + local_14[4] * 8);
LAB_0002d925:
      *(double *)(local_14 + 0x1c) = dVar4 + *(double *)(local_14 + 0x1c);
LAB_0002d9a4:
      local_1c = uVar1;
      recovered_2dbb0((int)local_14);
      piVar8 = extraout_EAX_00;
      goto LAB_0002da10;
    case 9:
      local_1c = uVar1;
      recovered_2db4a((int)local_14);
      piVar8 = extraout_EAX;
      goto LAB_0002da10;
    case 10:
      if (local_14[4] == 0) {
        return 0;
      }
      local_1c = uVar1;
      uVar9 = recovered_21c18(*(double *)(local_14[3] + -8 + local_14[4] * 8));
      piVar7[4] = 0;
      if ((int)uVar9 < 0) {
        return 0;
      }
      if (*(uint *)(*piVar7 + 0xc24) <= uVar9) {
        return 0;
      }
      piVar8 = (int *)recovered_2d74c(piVar7,(int *)(uVar9 * 0xc + *(int *)(*piVar7 + 0xc20)),
                                      local_20);
      if ((char)piVar8 == '\0') {
        return 0;
      }
      param_2 = local_18;
      if (*(char *)((int)piVar7 + 0x91) == '\x01') {
        *(undefined1 *)((int)piVar7 + 0x91) = 0;
      }
      goto LAB_0002da17;
    case 0xb:
      *(undefined1 *)((int)local_14 + 0x91) = 1;
      local_1c = uVar1;
      break;
    case 0xd:
      piVar8 = (int *)local_14[4];
      if (piVar8 < (int *)0x2) {
        return 0;
      }
      uVar2 = *(undefined8 *)(local_14[3] + -0x10 + (int)piVar8 * 8);
      dVar4 = *(double *)(local_14[3] + -8 + (int)piVar8 * 8);
      *(undefined8 *)(local_14 + 0x1a) = uVar2;
      local_14[0x1c] = 0;
      local_14[0x1d] = 0;
      *(undefined8 *)(local_14 + 0x1e) = uVar2;
      local_14[0x20] = 0;
      local_14[0x21] = 0;
      *(undefined1 *)(local_14 + 0x24) = 0;
      *(double *)(local_14 + 0x22) = dVar4 * *(double *)(local_14 + 1);
      local_1c = uVar1;
      break;
    case 0xe:
      local_1c = uVar1;
      recovered_2db4a((int)local_14);
      *(undefined1 *)((int)piVar7 + 0x92) = 1;
      piVar8 = extraout_EAX_02;
      param_2 = local_18;
      break;
    case 0x15:
      uVar9 = local_14[4];
      if (uVar9 < 2) {
        return 0;
      }
      iVar11 = local_14[3];
      *(double *)(local_14 + 0x1a) =
           *(double *)(iVar11 + -0x10 + uVar9 * 8) + *(double *)(local_14 + 0x1a);
LAB_0002d96b:
      *(double *)(local_14 + 0x1c) =
           *(double *)(iVar11 + -8 + uVar9 * 8) + *(double *)(local_14 + 0x1c);
LAB_0002da09:
      local_1c = uVar1;
      recovered_2db66((int)local_14);
      piVar8 = extraout_EAX_01;
LAB_0002da10:
      param_2 = local_18;
      break;
    case 0x16:
      if (local_14[4] == 0) {
        return 0;
      }
      *(double *)(local_14 + 0x1a) =
           *(double *)(local_14[3] + -8 + local_14[4] * 8) + *(double *)(local_14 + 0x1a);
      goto LAB_0002da09;
    }
    piVar7[4] = 0;
LAB_0002da17:
    if (*(char *)((int)piVar7 + 0x92) != '\0') {
LAB_0002daab:
      return CONCAT31((int3)((uint)piVar8 >> 8),1);
    }
    piVar8 = (int *)CONCAT31((int3)((uint)piVar8 >> 8),1);
    if (*(char *)((int)piVar7 + 0x91) != '\0') {
      return piVar8;
    }
  } while( true );
}
