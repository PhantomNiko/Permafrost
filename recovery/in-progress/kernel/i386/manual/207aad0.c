#include "functions.h"
/* Recovered glyph mapping and explicit contour/raster calls; Pooka's Free Software License.
 * Address: 0x207aad0
 */

pf_glyph * recovered_207aad0(pf_glyph *out,void *backend,uint glyph,double scale)

{
  uint *puVar1;
  ushort uVar2;
  double advance;
  ushort uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  undefined1 auStackY_190 [128];
  long *in_stack_fffffefc;
  uint in_stack_ffffff00;
  uint local_fc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_b8;
  undefined *local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  void *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48 [4];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 auStack_18 [8];
  
  local_b0 = auStack_18 + 0x14;
  local_a8 = auStackY_190 + 0x80;
  local_98 = (void *)glyph;
  iVar12 = *(int *)((int)backend + 0xbc);




  if (iVar12 == 0) {
    iVar4 = *(int *)((int)backend + 0xac);
  }
  else {
    iVar4 = *(int *)((int)backend + 0xac);
    for (iVar12 = *(int *)(*(int *)((int)backend + 0xb8) +
                          (iVar12 - 1U &
                          ((glyph >> 0x10 & 0xff ^
                           (glyph >> 8 & 0xff ^ (glyph & 0xff ^ 0x811c9dc5) * 0x1000193) * 0x1000193
                           ) * 0x1000193 ^ glyph >> 0x18) * 0x1000193) * 4); iVar12 != -1;
        iVar12 = *(int *)(*(int *)((int)backend + 0xc4) + iVar12 * 4)) {
      if (*(uint *)(iVar4 + iVar12 * 8) == glyph) {
        iVar12 = iVar4 + iVar12 * 8;
        iVar8 = *(int *)((int)backend + 0xb0);
        goto LAB_0207abb9;
      }
    }
  }
  iVar8 = *(int *)((int)backend + 0xb0);
  iVar12 = iVar4 + iVar8 * 8;
LAB_0207abb9:
  if (iVar12 == iVar4 + iVar8 * 8) {
    if (((glyph < 0x10000) && (*(char *)((int)backend + 0x9e) == '\x01')) &&
       (*(ushort *)((int)backend + 0x90) != 0)) {
      iVar4 = *(int *)((int)backend + 0x8c);
      iVar8 = *(int *)((int)backend + 4);
      iVar12 = iVar8 + iVar4;
      iVar7 = 0;
      do {
        uVar3 = *(ushort *)(iVar8 + (uint)*(ushort *)((int)backend + 0x92) + iVar4 + iVar7);
        if ((ushort)glyph <= (ushort)(uVar3 << 8 | uVar3 >> 8)) {
          uVar3 = *(ushort *)(iVar7 + (uint)*(ushort *)((int)backend + 0x94) + iVar12);
          uVar3 = uVar3 << 8 | uVar3 >> 8;
          if ((ushort)glyph < uVar3) break;
          uVar2 = *(ushort *)(iVar7 + (uint)*(ushort *)((int)backend + 0x96) + iVar12);
          uVar6 = (uint)*(ushort *)((int)backend + 0x98);
          uVar11 = *(ushort *)(iVar7 + iVar12 + uVar6);
          uVar11 = uVar11 << 8 | uVar11 >> 8;
          local_fc = glyph;
          if (uVar11 != 0) {
            iVar12 = uVar6 + uVar11 + (uint)uVar3 * -2;
            iVar4 = iVar4 + glyph * 2;
            if (((*(uint *)((int)backend + 8) < (uint)(iVar4 + iVar7 + iVar12)) ||
                (((((*(uint *)((int)backend + 8) + (uint)uVar3 * 2) - uVar6) - (uint)uVar11) - iVar4
                 ) - iVar7 < 2)) ||
               (uVar3 = *(ushort *)(iVar7 + iVar8 + iVar4 + iVar12), uVar3 = uVar3 << 8 | uVar3 >> 8
               , local_fc = (uint)uVar3, uVar3 == 0)) break;
          }
          local_fc = (ushort)(uVar2 << 8 | uVar2 >> 8) + local_fc;
          if ((short)local_fc != 0) goto LAB_0207acc0;
          break;
        }
        iVar7 = iVar7 + 2;
      } while ((uint)*(ushort *)((int)backend + 0x90) * 2 != iVar7);
    }
    uVar6 = 0;
    if (*(uint *)((int)backend + 0xa4) != 0) {
      uVar9 = *(uint *)((int)backend + 0xa4);
      do {
        while( true ) {
          uVar10 = (uVar9 - uVar6 >> 1) + uVar6;
          puVar1 = (uint *)(*(int *)((int)backend + 0xa0) + uVar10 * 0xc);
          if (glyph < *puVar1) break;
          iVar12 = *(int *)((int)backend + 0xa0) + uVar10 * 0xc;
          if (glyph <= *(uint *)(iVar12 + 4)) {
            local_fc = (glyph - *puVar1) + *(int *)(iVar12 + 8);
            goto LAB_0207acc0;
          }
          uVar6 = uVar10 + 1;
          if (uVar9 <= uVar6) goto LAB_0207acaf;
        }
        uVar9 = uVar10;
      } while (uVar6 < uVar10);
    }
LAB_0207acaf:
    local_fc = 0;
LAB_0207acc0:
    local_cc = 1;
    puVar5 = (undefined2 *)recovered_207d4a0((int *)((int)backend + 0xac),(byte *)&local_98);
    *puVar5 = (short)local_fc;
  }
  else {
    local_fc = (uint)*(ushort *)(iVar12 + 4);
  }
  if (*(ushort *)((int)backend + 0x7a) <= (ushort)local_fc) {
    local_fc = 0;
  }
  uVar3 = *(ushort *)((int)backend + 0x7c);
  uVar6 = uVar3 - 1;
  if ((ushort)local_fc < uVar3) {
    uVar6 = local_fc;
  }
  uVar9 = *(uint *)((int)backend + 8);
  uVar6 = *(int *)((int)backend + 0x60) + (uVar6 & 0xffff) * 4;
  if ((uVar9 - uVar6 < 4 || uVar9 < uVar6) ||
     ((uVar2 = *(ushort *)(*(int *)((int)backend + 4) + uVar6), uVar3 <= (ushort)local_fc &&
      (uVar6 = *(int *)((int)backend + 0x60) + (uint)uVar3 * 2 + (local_fc & 0xffff) * 2,
      uVar9 < uVar6 || uVar9 - uVar6 < 2)))) {
    uVar3 = *(ushort *)((int)backend + 0x70);
    out->left = 0;
    out->top = 0;
    out->width = 0;
    out->height = 0;
    out->advance = scale * (double)uVar3;
    out->pixels = (uchar *)0x0;
    out->count = 0;
    out->capacity = 0;
  }
  else {
    advance = scale * (double)(ushort)(uVar2 << 8 | uVar2 >> 8);
    long outline[20]={0};double matrix[6]={scale,0,0,scale,0,0};
    if(recovered_207b890(backend,(ushort)local_fc,matrix,outline,0))recovered_207cd60(advance,(int *)out,outline);
    else{*out=(pf_glyph){0};out->advance=advance;}
    recovered_2069870((void *)(uintptr_t)outline[0]);
  }
  recovered_2069870((void *)0x0);

  return out;
}

