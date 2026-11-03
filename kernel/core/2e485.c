#include "functions.h"
#undef DAT_0005cf70
#define DAT_0005cf70 (*(uint8_t *)(0x5cf70U))
#undef LAB_0002e981
#define LAB_0002e981 (*(uint8_t *)(0x2e981U))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define local_40 (*(uint *)(frame + 284))
#define auStackY_14c (*(undefined1 (*)[128])(frame + 16))
#define local_3c (*(double *)(frame + 288))
#define local_34 (*(uint *)(frame + 296))
#define local_30 (*(double *)(frame + 300))
#define local_28 (*(uint3 * *)(frame + 308))
#define local_24 (*(uint3 * *)(frame + 312))
#define local_20 (*(uint *)(frame + 316))
#define local_1c (*(uint *)(frame + 320))
#define local_18 (*(uint *)(frame + 324))
#define local_12 (*(undefined2 *)(frame + 330))
#define local_b0 (*(int (*)[4])(frame + 172))
#define local_a0 (*(short *)(frame + 188))
#define local_9c (*(uint *)(frame + 192))
#define local_98 (*(uint *)(frame + 196))
#define local_94 (*(uint *)(frame + 200))
#define local_90 (*(uint3 * *)(frame + 204))
#define local_8c (*(int *)(frame + 208))
#define local_88 (*(uint *)(frame + 212))
#define local_84 (*(undefined4 *)(frame + 216))
#define local_80 (*(undefined4 *)(frame + 220))
#define local_6c (*(undefined * *)(frame + 240))
#define local_68 (*(undefined * *)(frame + 244))
#define local_64 (*(undefined1 * *)(frame + 248))
#define local_60 (*(undefined1 * *)(frame + 252))
#define local_5c (*(undefined1 * *)(frame + 256))
#define local_4c (*(int *)(frame + 272))
#define local_48 (*(uint *)(frame + 276))
#define local_44 (*(uint3 * *)(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e485
 */

undefined4 recovered_2e485(int param_1,uint param_2,undefined4 *param_3,ushort *param_4)

{
  unsigned char frame[380] = {0};

  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint3 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;

  local_64 = (undefined1 *)((int)(uintptr_t)(frame + 348) + -4);
  local_5c = auStackY_14c + 0x80;
  local_6c = PTR_LAB_0005d040;
  local_68 = &DAT_0005cf70;
  local_60 = &LAB_0002e981;
  recovered_234cb(&local_84);
  uVar8 = 0;
  if (((param_2 < 0xc) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) goto LAB_0002e51f;
  local_80 = 0xffffffff;
  iVar4 = recovered_213fb(param_1,0x575a9,4);
  if (iVar4 == 0) {
    local_80 = 0xffffffff;
    iVar4 = recovered_213fb(param_1 + 8,0x575ae,4);
    uVar8 = 0;
    if (iVar4 != 0) goto LAB_0002e51f;
    local_3c = pf_bits_double((pf_double_bits(local_3c) & 0xffffffff00000000));
    local_12 = 0;
    iVar4 = 0xc;
    local_1c = 0;
    local_24 = (uint3 *)0x0;
    local_18 = 0;
    local_30 = pf_bits_double((pf_double_bits(local_30) & 0xffffffff00000000));
    local_28 = (uint3 *)0x0;
    while( true ) {
      uVar9 = iVar4 + 8;
      if (param_2 < uVar9) break;
      uVar6 = *(uint *)(param_1 + 4 + iVar4);
      if (param_2 < uVar6 + uVar9) goto LAB_0002e4f0;
      local_80 = 0xffffffff;
      local_20 = uVar6 + uVar9;
      iVar5 = recovered_213fb(iVar4 + param_1,0x575b3,4);
      if (iVar5 == 0) {
        if (uVar6 < 0x10) goto LAB_0002e4f0;
        local_12 = *(ushort *)(param_1 + uVar9);
        uVar1 = *(ushort *)(param_1 + 2 + uVar9);
        local_30 = pf_bits_double(CONCAT44(PF_PART4(local_30, 4),*(undefined4 *)(param_1 + 4 + uVar9)));
        uVar2 = *(ushort *)(param_1 + 0xe + uVar9);
        uVar8 = recovered_2ed41(&local_12,param_1 + uVar9,uVar6);
        if ((char)uVar8 == '\0') goto LAB_0002e4f0;
        local_1c = CONCAT31((uint3)(byte)(local_12 >> 8),1);
        local_28 = (uint3 *)(uint)uVar1;
        local_18 = (uint)uVar2;
        uVar8 = recovered_2ed89(local_12,uVar2);
        if ((char)uVar8 == '\0') goto LAB_0002e4f0;
      }
      else {
        local_80 = 0xffffffff;
        iVar4 = recovered_213fb(iVar4 + param_1,0x575b8,4);
        bVar3 = local_24 == (uint3 *)0x0;
        if (iVar4 == 0 && bVar3) {
          local_24 = (uint3 *)(uVar9 + param_1);
        }
        uVar9 = PF_PART4(local_3c, 0);
        if (iVar4 == 0 && bVar3) {
          uVar9 = uVar6;
        }
        local_3c = pf_bits_double(CONCAT44(PF_PART4(local_3c, 4),uVar9));
      }
      iVar4 = local_20 + (uVar6 & 1);
    }
    uVar8 = 0;
    if ((((local_1c & 1) == 0) || (local_24 == (uint3 *)0x0)) ||
       ((PF_PART4(local_3c, 0) == 0 || (((short)local_28 == 0 || (PF_PART4(local_30, 0) == 0))))))
    goto LAB_0002e51f;
    uVar8 = 0;
    if ((ushort)local_18 < 8) goto LAB_0002e51f;
    local_48 = (uint)local_28 & 0xffff;
    local_20 = local_18 & 0xffff;
    local_1c = local_20 >> 3;
    uVar9 = local_48 * local_1c;
    if ((uVar9 == 0) || (PF_PART4(local_3c, 0) < uVar9)) goto LAB_0002e51f;
    puVar7 = local_28;
    if (*param_4 != 0) {
      puVar7 = (uint3 *)(uint)*param_4;
    }
    if ((short)puVar7 != 0) {
      local_94 = PF_PART4(local_3c, 0) / uVar9;
      local_b0[0] = 0;
      local_b0[1] = 0;
      local_b0[2] = 0;
      local_40 = (uint)puVar7 & 0xffff;
      local_4c = 0;
      local_b0[3] = PF_PART4(local_30, 0);
      local_80 = 1;
      local_a0 = (short)puVar7;
      local_90 = puVar7;
      local_34 = uVar9;
      recovered_2b480(local_b0,local_94 * local_40);
      local_88 = 0;
      if (1 < (ushort)local_28) {
        local_88 = local_1c;
      }
      uVar6 = (uint)local_28 & 0xffff;
      local_98 = (int)local_28 - 1;
      local_8c = local_40 * 2;
      local_44 = local_24;
      uVar10 = 0;
      uVar9 = local_34;
      local_9c = uVar6;
      while (uVar10 < local_94) {
        puVar7 = (uint3 *)(uVar10 * uVar9 + (int)local_24);
        local_30 = pf_bits_double(CONCAT44(PF_PART4(local_30, 4),puVar7));
        local_18 = uVar10;
        if ((short)local_90 == 2) {
          local_80 = 4;
          fVar11 = recovered_2edb8(puVar7,local_12,(ushort)local_20);
          local_3c = (double)fVar11;
          local_80 = 5;
          fVar11 = recovered_2edb8((uint3 *)(PF_PART4(local_30, 0) + local_88),local_12,(ushort)local_20);
          local_30 = (double)fVar11;
          local_80 = 6;
          iVar4 = recovered_2eee8(local_3c);
          *(short *)(local_b0[0] + local_18 * 4) = (short)iVar4;
          local_80 = 7;
          iVar4 = recovered_2eee8(local_30);
          *(short *)(local_b0[0] + 2 + local_18 * 4) = (short)iVar4;
LAB_0002e93b:
          uVar9 = local_34;
        }
        else {
          if (local_40 == 1) {
            fVar11 = (float10)0;
            uVar9 = local_48;
            puVar7 = local_44;
            while( true ) {
              if (uVar9 == 0) break;
              local_30 = pf_bits_double(CONCAT44(PF_PART4(local_30, 4),uVar9 - 1));
              local_3c = (double)fVar11;
              local_80 = 3;
              local_28 = puVar7;
              fVar11 = recovered_2edb8(puVar7,local_12,(ushort)local_20);
              fVar11 = (float10)local_3c + fVar11;
              puVar7 = (uint3 *)((int)local_28 + local_1c);
              uVar9 = PF_PART4(local_30, 0);
            }
            local_80 = 2;
            iVar4 = recovered_2eee8((double)(fVar11 / (float10)uVar6));
            *(short *)(local_b0[0] + local_18 * 2) = (short)iVar4;
            goto LAB_0002e93b;
          }
          uVar10 = 0;
          while (local_40 != uVar10) {
            local_3c = pf_bits_double(CONCAT44(PF_PART4(local_3c, 4),uVar10));
            uVar9 = local_98;
            if (uVar10 < local_48) {
              uVar9 = uVar10;
            }
            local_80 = 8;
            fVar11 = recovered_2edb8((uint3 *)((uVar9 & 0xffff) * local_1c + PF_PART4(local_30, 0)),
                                     local_12,(ushort)local_20);
            local_80 = 9;
            iVar4 = recovered_2eee8((double)fVar11);
            *(short *)(local_b0[0] + local_4c + PF_PART4(local_3c, 0) * 2) = (short)iVar4;
            uVar9 = local_34;
            uVar10 = PF_PART4(local_3c, 0) + 1;
          }
        }
        local_44 = (uint3 *)((int)local_44 + uVar9);
        local_4c = local_4c + local_8c;
        uVar10 = local_18 + 1;
      }
      recovered_2ef36(param_3,local_b0);
      local_b0[1] = 0;
      recovered_23194();
      uVar8 = 1;
      goto LAB_0002e51f;
    }
  }
LAB_0002e4f0:
  uVar8 = 0;
LAB_0002e51f:
  recovered_234e0(&local_84);
  return uVar8;
}
