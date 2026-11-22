/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020c7740 (*(char (*)[1])(0x20c7740U))
#define str_020c77aa (*(char (*)[1])(0x20c77aaU))
#define str_020c77c1 (*(char (*)[1])(0x20c77c1U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define local_20 (*(uint * *)(frame + 48))
#define local_1c (*(uint *)(frame + 52))
#define local_18 (*(byte *)(frame + 56))
#define local_14 (*(uint * *)(frame + 60))
#define in_stack_ffffffd0 (*(char * *)(frame + 32))


undefined4 recovered_205fdd0(char *in_ECX,char *in_EDX,char *param_3,uint param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *out;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *out_00;
  ulong uVar6;
  uint uVar7;
  char cVar8;
  char *pcVar9;

  if (in_EDX == (char *)0x0 || in_ECX == (char *)0x0) {
    return 0;
  }
  recovered_2001e00(in_EDX,0,0x200);
  recovered_2030400(in_ECX,str_020d9e14,in_EDX);
  if ((*in_EDX == '\0') || (iVar3 = recovered_20022a0(in_EDX,&DAT_020c5359), iVar3 == 0)) {
    pcVar9 = str_020c6ac7;
  }
  else {
    pcVar9 = str_020c6d20;
    in_stack_ffffffd0 = in_EDX;
  }
  pf_varargs_20044f0__4_(in_EDX + 0xf1,0xf1,pcVar9,(uint)in_stack_ffffffd0);
  recovered_2001e00(&local_20,0,0xc);
  iVar3 = DAT_020d9d5c;
  uVar4 = recovered_202ad00(iVar3,in_EDX + 0xf1,&local_20);
  uVar7 = local_1c;
  puVar2 = local_20;
  if ((uVar4 == 0) ||
     ((byte)((local_20 == (uint *)0x0 || local_1c == 0) | (local_18 & 2) >> 1) == 1)) {
    pcVar9 = str_020c77aa;
    goto LAB_0205feab;
  }
  if (7 < local_1c) {
    out = (uint *)(in_EDX + 0x1ec);
    if ((*(byte *)((int)local_20 + 3) & 0xfffffffe |
        (uint)*(byte *)((int)local_20 + 2) << 8 |
        (uint)*(byte *)((int)local_20 + 1) << 0x10 | (uint)(byte)*local_20 << 0x18) == 0xcafebabe) {
      uVar5 = recovered_2060040((byte *)local_20,local_1c,0,out);
      if ((char)uVar5 != '\0') goto LAB_0205ff86;
    }
    else if (0xb < local_1c) {
      uVar4 = *local_20;
      local_14 = out;
      recovered_2001e00(out,0,0x14);
      in_EDX[500] = '\0';
      in_EDX[0x1f5] = '\0';
      in_EDX[0x1f6] = '\0';
      in_EDX[0x1f7] = '\0';
      *(uint *)(in_EDX + 0x1f8) = uVar7;
      in_EDX[0x1fc] = '\f';
      in_EDX[0x1fd] = '\0';
      in_EDX[0x1fe] = '\0';
      in_EDX[0x1ff] = '\0';
      if ((uVar4 & 0xfffffffe) == 0xfeedface) {
        *local_14 = puVar2[1];
        uVar7 = puVar2[2];
      }
      else {
        if ((uVar4 & 0xfeffffff) != 0xcefaedfe) goto LAB_0205fea5;
        uVar7 = puVar2[1];
        *local_14 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar7 = puVar2[2];
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      }
      *(uint *)(in_EDX + 0x1f0) = uVar7;
LAB_0205ff86:
      out_00 = recovered_2001650(local_1c);
      *(void **)(in_EDX + 0x1e4) = out_00;
      if (out_00 != (void *)0x0) {
        recovered_2001b70(out_00,local_20,local_1c);
        *(uint *)(in_EDX + 0x1e8) = local_1c;
        return CONCAT31((int3)(local_1c >> 8),1);
      }
      if (param_4 == 0 || param_3 == (char *)0x0) {
        return 0;
      }
      if ((*param_3 != '\0') && (uVar6 = recovered_2002270(param_3), uVar6 + 1 < param_4)) {
        (param_3 + uVar6)[0] = '\n';
        (param_3 + uVar6)[1] = '\0';
      }
      uVar6 = recovered_2002270(param_3);
      if (param_4 <= uVar6 + 1) {
        return 0;
      }
      cVar8 = 'l';
      iVar3 = 0;
      do {
        param_3[iVar3 + uVar6] = cVar8;
        cVar8 = str_020c7740[iVar3 + 1];
        iVar1 = iVar3 + 1;
        if (cVar8 == '\0') break;
        uVar7 = iVar3 + uVar6 + 2;
        iVar3 = iVar1;
      } while (uVar7 < param_4);
      param_3[iVar1 + uVar6] = '\0';
      return 0;
    }
  }
LAB_0205fea5:
  pcVar9 = str_020c77c1;
LAB_0205feab:
  pf_varargs_202ecc0__4_(param_3,param_4,pcVar9,(uint)in_EDX);
  return 0;
}
#undef DAT_020c5359
#undef DAT_020d9d5c
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020c7740
#undef str_020c77aa
#undef str_020c77c1
#undef str_020d9e14
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef in_stack_ffffffd0
