/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c531e (*(uint8_t *)(0x20c531eU))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c6ac3 (*(uint8_t *)(0x20c6ac3U))
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define DAT_020d9d60 (*(uint32_t volatile *)(0x20d9d60U))
#define DAT_020d9db4 (*(uint8_t volatile *)(0x20d9db4U))
#define DAT_020dc0e7 (*(uint8_t volatile *)(0x20dc0e7U))
#define DAT_020de0e8 (*(uint32_t volatile *)(0x20de0e8U))
#define DAT_020de164 (*(uint32_t volatile *)(0x20de164U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_021468f8 (*(uint32_t volatile *)(0x21468f8U))
#define DAT_0214690c (*(uint32_t volatile *)(0x214690cU))
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#define DAT_021e00d0 (*(uint8_t volatile *)(0x21e00d0U))
#define DAT_021e025c (*(uint8_t volatile *)(0x21e025cU))
#define DAT_021e0870 (*(uint8_t volatile *)(0x21e0870U))
#define DAT_021e0e84 (*(uint8_t volatile *)(0x21e0e84U))
#define DAT_021e1498 (*(uint8_t volatile *)(0x21e1498U))
#define DAT_021e1aac (*(uint8_t volatile *)(0x21e1aacU))
#define DAT_021e20c0 (*(uint8_t volatile *)(0x21e20c0U))
#define DAT_021e26d4 (*(uint8_t volatile *)(0x21e26d4U))
#define DAT_021e2ce8 (*(uint8_t volatile *)(0x21e2ce8U))
#define DAT_021e32fc (*(uint8_t volatile *)(0x21e32fcU))
#define DAT_021e3910 (*(uint8_t volatile *)(0x21e3910U))
#define DAT_021e3f24 (*(uint8_t volatile *)(0x21e3f24U))
#define DAT_021e4538 (*(uint8_t volatile *)(0x21e4538U))
#define DAT_021e4b4c (*(uint8_t volatile *)(0x21e4b4cU))
#define DAT_021e5160 (*(uint8_t volatile *)(0x21e5160U))
#define DAT_021e5774 (*(uint8_t volatile *)(0x21e5774U))
#define DAT_021e5d88 (*(uint8_t volatile *)(0x21e5d88U))
#define DAT_021e639c (*(uint8_t volatile *)(0x21e639cU))
#define DAT_021e69b0 (*(uint8_t volatile *)(0x21e69b0U))
#define DAT_021e6fc4 (*(uint8_t volatile *)(0x21e6fc4U))
#define DAT_021e75d8 (*(uint8_t volatile *)(0x21e75d8U))
#define DAT_021e7bec (*(uint8_t volatile *)(0x21e7becU))
#define DAT_021e8200 (*(uint8_t volatile *)(0x21e8200U))
#define DAT_021e8814 (*(uint8_t volatile *)(0x21e8814U))
#define DAT_021e8e28 (*(uint8_t volatile *)(0x21e8e28U))
#define DAT_021e943c (*(uint8_t volatile *)(0x21e943cU))
#define DAT_021e9a50 (*(uint8_t volatile *)(0x21e9a50U))
#define DAT_021ea064 (*(uint8_t volatile *)(0x21ea064U))
#define DAT_021ea678 (*(uint8_t volatile *)(0x21ea678U))
#define DAT_021eac8c (*(uint8_t volatile *)(0x21eac8cU))
#define DAT_021eb2a0 (*(uint8_t volatile *)(0x21eb2a0U))
#define DAT_021eb8b4 (*(uint8_t volatile *)(0x21eb8b4U))
#define DAT_021ebec8 (*(uint8_t volatile *)(0x21ebec8U))
#define DAT_021ec4e0 (*(uint32_t volatile *)(0x21ec4e0U))
#define DAT_021ec4e4 (*(uint32_t volatile *)(0x21ec4e4U))
#define str_020c526f (*(char (*)[1])(0x20c526fU))
#define str_020c69f1 (*(char (*)[1])(0x20c69f1U))
#define str_020c6aa9 (*(char (*)[1])(0x20c6aa9U))
#define str_020c6aaf (*(char (*)[1])(0x20c6aafU))
#define str_020c6ab7 (*(char (*)[1])(0x20c6ab7U))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020c6d97 (*(char (*)[1])(0x20c6d97U))
#define str_020c6ddf (*(char (*)[1])(0x20c6ddfU))
#define str_020c6e2d (*(char (*)[1])(0x20c6e2dU))
#define str_020c6e53 (*(char (*)[1])(0x20c6e53U))
#define str_020c6e74 (*(char (*)[1])(0x20c6e74U))
#define str_020c6e9d (*(char (*)[1])(0x20c6e9dU))
#define str_020c6eb9 (*(char (*)[1])(0x20c6eb9U))
#define str_020c6ec0 (*(char (*)[1])(0x20c6ec0U))
#define str_020c6ee2 (*(char (*)[1])(0x20c6ee2U))
#define str_020c6efd (*(char (*)[1])(0x20c6efdU))
#define str_020c6f39 (*(char (*)[1])(0x20c6f39U))
#define str_020c6f53 (*(char (*)[1])(0x20c6f53U))
#define str_020c6f6d (*(char (*)[1])(0x20c6f6dU))
#define str_020c6f8e (*(char (*)[1])(0x20c6f8eU))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define local_ca1 (*(char (*)[241])(frame + 31))
#define local_bb0 (*(char (*)[488])(frame + 272))
#define local_9c8 (*(uint *)(frame + 760))
#define local_9c4 (*(int *)(frame + 764))
#define local_3b0 (*(char * *)(frame + 2320))
#define local_3ac (*(uint *)(frame + 2324))
#define local_1ad (*(char (*)[160])(frame + 2835))
#define local_10d (*(char (*)[241])(frame + 2995))
#define local_1c (*(char * *)(frame + 3236))
#define local_18 (*(undefined4 *)(frame + 3240))
#define local_14 (*(char * *)(frame + 3244))


char recovered_202ded0(char *command,char *arguments,char *path,char *output,uint capacity)

{
  unsigned char frame[3296] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  uchar uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined *vararg0;
  undefined4 *puVar11;
  char cVar12;
  char *pcVar13;
  uint incoming_edx;
  undefined *vararg0_00;
  int iVar14;
  char *pcVar15;

  if (arguments == (char *)0x0) {
    arguments = &DAT_020c5084;
LAB_0202df0c:
    uVar4 = recovered_2047930(command);
    if ((char)uVar4 != '\0') {
      recovered_2047ac0();
      return '\x01';
    }
  }
  else {
    for (; (uVar4 = (uint)(byte)*arguments, uVar4 - 9 < 5 || (uVar4 == 0x20));
        arguments = arguments + 1) {
    }
    if (uVar4 == 0) goto LAB_0202df0c;
  }
  local_10d[0] = '\0';
  if ((path == (char *)0x0) || (*path == '\0')) {
    if (command == (char *)0x0) {
      return '\0';
    }
    if (*command == '\0') {
      return '\0';
    }
    pcVar5 = recovered_20024f0(command,'/');
    if (pcVar5 != (char *)0x0) {
      pcVar13 = str_020d9e14;
      pcVar5 = command;
LAB_0202e02b:
      path = (char *)&local_3b0;
      recovered_2030400(pcVar5,pcVar13,path);
      goto LAB_0202e034;
    }
    path = (char *)&local_3b0;
    pf_varargs_20044f0__4_(path,0xf1,str_020c6aaf,(uint)command);
    uVar4 = recovered_2030680(path,local_bb0);
    if ((((char)uVar4 == '\0') || (local_9c4 == 2)) || ((local_9c8 & 2) != 0)) {
      pf_varargs_20044f0__4_(path,0xf1,str_020c6ab7,(uint)command);
      uVar4 = recovered_2030680(path,local_bb0);
      if ((((char)uVar4 == '\0') || (local_9c4 == 2)) || ((local_9c8 & 2) != 0)) {
        cVar12 = str_020d9e14[0];
        pcVar5 = &DAT_020c5359;
        if (cVar12 != '\0') {
          pcVar5 = str_020d9e14;
        }
        pf_varargs_20044f0__4__4_(local_bb0,0xf1,str_020c526f,(uint)pcVar5,(uint)command);
        pcVar5 = local_bb0;
        pcVar13 = &DAT_020c5359;
        goto LAB_0202e02b;
      }
    }
  }
  else {
LAB_0202e034:
    uVar4 = recovered_2030680(path,local_bb0);
    if ((((char)uVar4 == '\0') || (local_9c4 == 2)) || ((local_9c8 & 2) != 0)) {
      return '\0';
    }
  }
  pf_varargs_20044f0__4_(local_10d,0xf1,&DAT_020c5119,(uint)path);
  uVar6 = recovered_205dfd0(local_10d,local_bb0,&local_3b0);
  if ((char)uVar6 != '\0') {
    if (((local_3b0 != (char *)0x0 && 1 < local_3ac) && (*local_3b0 == '#')) &&
       (local_3b0[1] == '!')) {
LAB_0202e368:
      iVar9 = recovered_205db60(local_10d,output,capacity);
      return (iVar9 == 0) + '\x01';
    }
    uVar7 = recovered_2002270(local_bb0);
    uVar8 = recovered_2002270(&DAT_020c6ac3);
    if ((uVar8 <= uVar7) &&
       (iVar9 = recovered_20022a0(local_bb0 + (uVar7 - uVar8),&DAT_020c6ac3), iVar9 == 0))
    goto LAB_0202e368;
  }
  bVar1 = recovered_2038fb0(command);
  if ((bVar1) &&
     (((uVar4 = recovered_2030680(str_020c6e2d,local_bb0), (char)uVar4 == '\0' || (local_9c4 == 2))
      || ((local_9c8 & 2) != 0)))) {
    if (capacity == 0 || output == (char *)0x0) {
      return '\x02';
    }
    if ((*output != '\0') && (uVar7 = recovered_2002270(output), uVar7 + 1 < capacity)) {
      (output + uVar7)[0] = '\n';
      (output + uVar7)[1] = '\0';
    }
    uVar7 = recovered_2002270(output);
    if (uVar7 + 1 < capacity) {
      cVar12 = 'c';
      iVar9 = 0;
      do {
        output[iVar9 + uVar7] = cVar12;
        cVar12 = str_020c6d97[iVar9 + 1];
        iVar14 = iVar9 + 1;
        if (cVar12 == '\0') break;
        uVar4 = iVar9 + uVar7 + 2;
        iVar9 = iVar14;
      } while (uVar4 < capacity);
      output[iVar14 + uVar7] = '\0';
    }
    if ((*output != '\0') && (uVar7 = recovered_2002270(output), uVar7 + 1 < capacity)) {
      (output + uVar7)[0] = '\n';
      (output + uVar7)[1] = '\0';
    }
    uVar7 = recovered_2002270(output);
    if (capacity <= uVar7 + 1) {
      return '\x02';
    }
    cVar12 = 'c';
    iVar9 = 0;
    do {
      output[iVar9 + uVar7] = cVar12;
      cVar12 = str_020c6ddf[iVar9 + 1];
      iVar14 = iVar9 + 1;
      if (cVar12 == '\0') break;
      uVar4 = iVar9 + uVar7 + 2;
      iVar9 = iVar14;
    } while (uVar4 < capacity);
    output[iVar14 + uVar7] = '\0';
    return '\x02';
  }
  if (*arguments == 0) {
    pf_varargs_20044f0__4_((char *)&local_3b0,0x200,&DAT_020c5119,(uint)local_10d);
  }
  else {
    pf_varargs_20044f0__4__4_((char *)&local_3b0,0x200,str_020c6aa9,(uint)local_10d,(uint)arguments)
    ;
  }
  local_1c = (char *)0x0;
  if (local_10d[0] != '\0') {
    pcVar5 = (char *)0x202e2a8;
    bVar2 = recovered_205e0e0();
    if (bVar2 != 0) {
      if ((local_10d[0] == '\0') || (iVar9 = recovered_20022a0(local_10d,&DAT_020c5359), iVar9 == 0)
         ) {
        pcVar13 = str_020c6ac7;
      }
      else {
        pcVar5 = local_10d;
        pcVar13 = str_020c6d20;
      }
      pf_varargs_20044f0__4_(local_ca1,0xf1,pcVar13,(uint)pcVar5);
      uVar10 = DAT_020d9d5c;
      uVar4 = DAT_020d9d44;
      if (uVar4 != uVar10 && -1 < (int)uVar10) {
        uVar10 = recovered_202ac50(uVar10,uVar10);
        if ((char)uVar10 == '\0') {
          if (capacity == 0 || output == (char *)0x0) {
            return '\x02';
          }
          if ((*output != '\0') && (uVar7 = recovered_2002270(output), uVar7 + 1 < capacity)) {
            (output + uVar7)[0] = '\n';
            (output + uVar7)[1] = '\0';
          }
          uVar7 = recovered_2002270(output);
          if (capacity <= uVar7 + 1) {
            return '\x02';
          }
          pcVar5 = output + uVar7;
          cVar12 = 't';
          iVar9 = 0;
          do {
            pcVar5[iVar9] = cVar12;
            cVar12 = str_020c6e74[iVar9 + 1];
            iVar14 = iVar9 + 1;
            if (cVar12 == '\0') break;
            uVar4 = iVar9 + uVar7 + 2;
            iVar9 = iVar14;
          } while (uVar4 < capacity);
          goto LAB_0202e35a;
        }
        uVar10 = DAT_020d9d5c;
      }
      local_1ad[0] = '\0';
      pcVar5 = local_ca1;
      bVar1 = recovered_2053c90(pcVar5,uVar10,local_1ad,(uint *)&local_1c);
      uVar10 = DAT_020d9d5c;
      bVar2 = 1;
      if (uVar4 != uVar10 && -1 < (int)uVar10) {
        if ((int)uVar4 < 0) {
          recovered_20539f0(&DAT_02130724,incoming_edx);
          DAT_020d9d44 = 0xffffffff;
        }
        else {
          uVar4 = recovered_202ac50(uVar4,incoming_edx);
          bVar2 = (byte)uVar4;
        }
      }
      if ((bVar1 & bVar2 & local_1c != (char *)0x0) == 0) {
        recovered_2030300(str_020c6e9d,(char)pcVar5);
        pcVar13 = str_020c6ec0;
        if (local_1ad[0] != '\0') {
          pcVar13 = local_1ad;
        }
        pcVar15 = str_020c6eb9;
        goto LAB_0202eca8;
      }
      recovered_2030300(str_020c6ee2,(char)pcVar5);
      pcVar13 = local_1c;
      if (local_1c != (char *)0x0) {
        iVar9 = 0x20;
        pcVar15 = &DAT_021e025c;
        do {
          if ((*pcVar15 == '\x01') && (*(char **)(pcVar15 + 4) == local_1c)) goto LAB_0202e790;
          pcVar15 = pcVar15 + 0x614;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      pcVar15 = &DAT_021e025c;
      cVar12 = DAT_021e025c;
      if (cVar12 == '\x01') {
        pcVar15 = &DAT_021e0870;
        cVar12 = DAT_021e0870;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e0e84;
        cVar12 = DAT_021e0e84;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e1498;
        cVar12 = DAT_021e1498;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e1aac;
        cVar12 = DAT_021e1aac;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e20c0;
        cVar12 = DAT_021e20c0;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e26d4;
        cVar12 = DAT_021e26d4;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e2ce8;
        cVar12 = DAT_021e2ce8;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e32fc;
        cVar12 = DAT_021e32fc;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e3910;
        cVar12 = DAT_021e3910;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e3f24;
        cVar12 = DAT_021e3f24;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e4538;
        cVar12 = DAT_021e4538;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e4b4c;
        cVar12 = DAT_021e4b4c;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e5160;
        cVar12 = DAT_021e5160;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e5774;
        cVar12 = DAT_021e5774;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e5d88;
        cVar12 = DAT_021e5d88;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e639c;
        cVar12 = DAT_021e639c;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e69b0;
        cVar12 = DAT_021e69b0;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e6fc4;
        cVar12 = DAT_021e6fc4;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e75d8;
        cVar12 = DAT_021e75d8;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e7bec;
        cVar12 = DAT_021e7bec;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e8200;
        cVar12 = DAT_021e8200;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e8814;
        cVar12 = DAT_021e8814;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e8e28;
        cVar12 = DAT_021e8e28;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e943c;
        cVar12 = DAT_021e943c;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021e9a50;
        cVar12 = DAT_021e9a50;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021ea064;
        cVar12 = DAT_021ea064;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021ea678;
        cVar12 = DAT_021ea678;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021eac8c;
        cVar12 = DAT_021eac8c;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021eb2a0;
        cVar12 = DAT_021eb2a0;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021eb8b4;
        cVar12 = DAT_021eb8b4;
        if (cVar12 != '\x01') goto LAB_0202e777;
        pcVar15 = &DAT_021ebec8;
        cVar12 = DAT_021ebec8;
        if (cVar12 == '\0') goto LAB_0202e777;
      }
      else {
LAB_0202e777:
        recovered_2001e00(pcVar15,0,0x614);
        *pcVar15 = '\x01';
        *(char **)(pcVar15 + 4) = pcVar13;
LAB_0202e790:
        uVar6 = DAT_020d9d5c;
        *(undefined4 *)(pcVar15 + 8) = uVar6;
        uVar6 = DAT_020d9d60;
        *(undefined4 *)(pcVar15 + 0xc) = uVar6;
        pf_varargs_20044f0__4_(pcVar15 + 0x10,0xf1,&DAT_020c5119,(uint)local_10d);
        cVar12 = str_020d9e14[0];
        pcVar5 = &DAT_020c5359;
        pcVar13 = &DAT_020c5359;
        if (cVar12 != '\0') {
          pcVar13 = str_020d9e14;
        }
        pf_varargs_20044f0__4_(pcVar15 + 0x101,0xf1,&DAT_020c5119,(uint)pcVar13);
        cVar12 = DAT_020d9db4;
        vararg0_00 = &DAT_020c531e;
        vararg0 = &DAT_020c531e;
        if (cVar12 != '\0') {
          vararg0 = &DAT_020d9db4;
        }
        pf_varargs_20044f0__4_(pcVar15 + 0x1f2,0x20,&DAT_020c5119,(uint)vararg0);
        pf_varargs_20044f0__4_(pcVar15 + 0x212,0x200,&DAT_020c5119,(uint)&local_3b0);
        cVar12 = DAT_020d9db4;
        if (cVar12 != '\0') {
          vararg0_00 = &DAT_020d9db4;
        }
        cVar12 = str_020d9e14[0];
        if (cVar12 != '\0') {
          pcVar5 = str_020d9e14;
        }
        pf_varargs_20044f0__4__4__4_
                  (pcVar15 + 0x412,0x200,str_020c69f1,(uint)vararg0_00,(uint)vararg0_00,(uint)pcVar5
                  );
      }
      pcVar13 = local_1c;
      if (local_1c == (char *)0x0) goto LAB_0202eaec;
      local_18 = DAT_021ec4e0;
      DAT_021ec4e0 = local_1c;
      uVar6 = DAT_021ec4e4;
      iVar9 = DAT_021ec4e4;
      DAT_021ec4e4 = iVar9 + 1;
      uVar6 = DAT_021ec4e4;
      uVar6 = DAT_021ec4e4;
      uVar6 = DAT_021ec4e4;
      uVar3 = recovered_2006ec0();
      uVar10 = 0;
      uVar4 = 0;
      if (CONCAT31(extraout_var,uVar3) < 0x20) {
        uVar4 = CONCAT31(extraout_var,uVar3);
      }
      (&DAT_0214b364)[uVar4 * 0x12] = uVar4;
      pcVar5 = pcVar13;
      recovered_2030300(str_020c6f6d,(char)pcVar13);
      local_14 = (char *)recovered_20081a0();
LAB_0202e8f0:
      do {
        while( true ) {
          iVar9 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
          if (iVar9 == 0) break;
          do {
            iVar9 = DAT_021468f8;
          } while (iVar9 != 0);
        }
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        uVar4 = 0;
        bVar1 = true;
        puVar11 = &DAT_0214690c;
        do {
          if ((*(char *)(puVar11 + -4) == '\x01') && ((char *)*puVar11 == pcVar13)) break;
          bVar1 = uVar4 < 0x1f;
          uVar4 = uVar4 + 1;
          puVar11 = puVar11 + 0x2e;
        } while (uVar4 != 0x20);
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_021468f8 = 0;
        if (!bVar1) {
          DAT_021ec4e0 = local_18;
          iVar9 = DAT_021ec4e4;
          if (iVar9 != 0) {
            uVar6 = DAT_021ec4e4;
            iVar9 = DAT_021ec4e4;
            DAT_021ec4e4 = iVar9 + -1;
            uVar6 = DAT_021ec4e4;
            uVar6 = DAT_021ec4e4;
            uVar6 = DAT_021ec4e4;
          }
          iVar9 = 0x20;
          pcVar15 = &DAT_021e00d0;
          goto LAB_0202eac3;
        }
        uVar3 = recovered_2006ec0();
        uVar4 = 0;
        if (CONCAT31(extraout_var_00,uVar3) < 0x20) {
          uVar4 = CONCAT31(extraout_var_00,uVar3);
        }
        (&DAT_0214b364)[uVar4 * 0x12] = uVar4;
        if ((&DAT_0214b320)[uVar4 * 0x12] == 0) {
          uVar6 = DAT_021ec4e0;
          DAT_021ec4e0 = pcVar13;
          do {
            while( true ) {
              iVar9 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
              if (iVar9 == 0) break;
              do {
                iVar9 = DAT_021468f8;
              } while (iVar9 != 0);
            }
            __atomic_thread_fence(__ATOMIC_SEQ_CST);
            uVar4 = 0;
            bVar1 = true;
            puVar11 = &DAT_0214690c;
            do {
              if ((*(char *)(puVar11 + -4) == '\x01') && ((char *)*puVar11 == pcVar13)) break;
              bVar1 = uVar4 < 0x1f;
              uVar4 = uVar4 + 1;
              puVar11 = puVar11 + 0x2e;
            } while (uVar4 != 0x20);
            __atomic_thread_fence(__ATOMIC_SEQ_CST);
            DAT_021468f8 = 0;
            if (!bVar1) goto LAB_0202e8e9;
            uVar4 = DAT_020de164;
            if (0xfff < uVar4) {
              uVar4 = 0x1000;
            }
            recovered_2039a70(uVar4);
          } while( true );
        }
        recovered_2039960();
        uVar4 = ~uVar10;
        uVar10 = uVar10 + 1;
        if ((uVar4 & 0x7ff) == 0) {
          recovered_20081a0();
          pcVar5 = pcVar13;
          recovered_2030300(str_020c6f8e,(char)pcVar13);
        }
      } while ((uVar10 < 0x40) ||
              ((uVar4 = recovered_20081a0(), uVar10 < 2000000 && (uVar4 - (int)local_14 < 0x5b))));
      DAT_021ec4e0 = local_18;
      local_14 = (char *)0x0;
      local_18 = CONCAT31((int3)((uint)local_18 >> 8),1);
      iVar9 = DAT_021ec4e4;
      if (iVar9 != 0) {
        uVar6 = DAT_021ec4e4;
        iVar9 = DAT_021ec4e4;
        DAT_021ec4e4 = iVar9 + -1;
        uVar6 = DAT_021ec4e4;
        uVar6 = DAT_021ec4e4;
        uVar6 = DAT_021ec4e4;
      }
      goto LAB_0202eafa;
    }
  }
  if (capacity == 0 || output == (char *)0x0) {
    return '\x02';
  }
  if ((*output != '\0') && (uVar7 = recovered_2002270(output), uVar7 + 1 < capacity)) {
    (output + uVar7)[0] = '\n';
    (output + uVar7)[1] = '\0';
  }
  uVar7 = recovered_2002270(output);
  if (capacity <= uVar7 + 1) {
    return '\x02';
  }
  pcVar5 = output + uVar7;
  cVar12 = 't';
  iVar9 = 0;
  do {
    pcVar5[iVar9] = cVar12;
    cVar12 = str_020c6e53[iVar9 + 1];
    iVar14 = iVar9 + 1;
    if (cVar12 == '\0') break;
    uVar4 = iVar9 + uVar7 + 2;
    iVar9 = iVar14;
  } while (uVar4 < capacity);
LAB_0202e35a:
  pcVar5[iVar14] = '\0';
  return '\x02';
LAB_0202e8e9:
  DAT_021ec4e0 = uVar6;
  goto LAB_0202e8f0;
  while( true ) {
    pcVar15 = pcVar15 + 0xc;
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) break;
LAB_0202eac3:
    if ((*pcVar15 == '\x01') && (*(char **)(pcVar15 + 4) == pcVar13)) {
      local_14 = *(char **)(pcVar15 + 8);
      pcVar5 = (char *)0x0;
      recovered_2001e00(pcVar15,0,0xc);
      local_18 = 0;
      goto LAB_0202eafa;
    }
  }
LAB_0202eaec:
  local_18 = 0;
  local_14 = (char *)0x0;
LAB_0202eafa:
  recovered_2026f10();
  uVar4 = DAT_020de0e8;
  if (uVar4 != 0) {
    do {
      local_bb0[0] = '\0';
      uVar10 = 0x7ff;
      if (0xfffff7fe < uVar4 - 0x800) {
        uVar10 = uVar4;
      }
      pcVar5 = &DAT_020dc0e7;
      recovered_2001b70(local_bb0,&DAT_020dc0e7,uVar10);
      local_bb0[uVar10] = '\0';
      uVar4 = DAT_020de0e8;
      iVar9 = 0;
      if (uVar10 <= uVar4 && uVar4 - uVar10 != 0) {
        pcVar5 = &DAT_020dc0e7 + uVar10;
        recovered_2001c30(&DAT_020dc0e7,pcVar5,uVar4 - uVar10);
        iVar9 = DAT_020de0e8;
        iVar9 = iVar9 - uVar10;
      }
      DAT_020de0e8 = iVar9;
      (&DAT_020dc0e7)[iVar9] = 0;
      if (local_bb0[0] != '\0') {
        if (capacity == 0 || output == (char *)0x0) {
          if (output == (char *)0x0) goto LAB_0202eb34;
        }
        else if ((*output != '\0') && (uVar7 = recovered_2002270(output), uVar7 + 1 < capacity)) {
          (output + uVar7)[0] = '\n';
          (output + uVar7)[1] = '\0';
        }
        uVar7 = recovered_2002270(output);
        if (uVar7 + 1 < capacity && (capacity != 0 && output != (char *)0x0)) {
          if (local_bb0[0] != '\0') {
            uVar8 = uVar7;
            cVar12 = local_bb0[0];
            pcVar13 = local_bb0;
            do {
              pcVar13 = pcVar13 + 1;
              output[uVar8] = cVar12;
              cVar12 = *pcVar13;
              uVar7 = uVar8 + 1;
              if (cVar12 == '\0') break;
              uVar4 = uVar8 + 2;
              uVar8 = uVar7;
            } while (uVar4 < capacity);
          }
          output[uVar7] = '\0';
        }
      }
LAB_0202eb34:
      recovered_2026f10();
      uVar4 = DAT_020de0e8;
    } while (uVar4 != 0);
  }
  local_bb0[0] = '\0';
  if ((char)local_18 == '\0') {
    if (local_14 == (char *)0x0) {
      return '\x01';
    }
    pcVar15 = str_020c6f53;
    pcVar13 = local_14;
  }
  else {
    pcVar5 = str_020c6f39;
    if (*output != '\0') {
      pcVar5 = &DAT_020c5084;
    }
    pcVar15 = str_020c6efd;
    pcVar13 = local_1c;
  }
LAB_0202eca8:
  pf_varargs_202ecc0__4__4__4_(output,capacity,pcVar15,(uint)local_10d,(uint)pcVar13,(uint)pcVar5);
  return '\x02';
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c531e
#undef DAT_020c5359
#undef DAT_020c6ac3
#undef DAT_020d9d44
#undef DAT_020d9d5c
#undef DAT_020d9d60
#undef DAT_020d9db4
#undef DAT_020dc0e7
#undef DAT_020de0e8
#undef DAT_020de164
#undef DAT_02130724
#undef DAT_021468f8
#undef DAT_0214690c
#undef DAT_0214b320
#undef DAT_0214b364
#undef DAT_021e00d0
#undef DAT_021e025c
#undef DAT_021e0870
#undef DAT_021e0e84
#undef DAT_021e1498
#undef DAT_021e1aac
#undef DAT_021e20c0
#undef DAT_021e26d4
#undef DAT_021e2ce8
#undef DAT_021e32fc
#undef DAT_021e3910
#undef DAT_021e3f24
#undef DAT_021e4538
#undef DAT_021e4b4c
#undef DAT_021e5160
#undef DAT_021e5774
#undef DAT_021e5d88
#undef DAT_021e639c
#undef DAT_021e69b0
#undef DAT_021e6fc4
#undef DAT_021e75d8
#undef DAT_021e7bec
#undef DAT_021e8200
#undef DAT_021e8814
#undef DAT_021e8e28
#undef DAT_021e943c
#undef DAT_021e9a50
#undef DAT_021ea064
#undef DAT_021ea678
#undef DAT_021eac8c
#undef DAT_021eb2a0
#undef DAT_021eb8b4
#undef DAT_021ebec8
#undef DAT_021ec4e0
#undef DAT_021ec4e4
#undef str_020c526f
#undef str_020c69f1
#undef str_020c6aa9
#undef str_020c6aaf
#undef str_020c6ab7
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020c6d97
#undef str_020c6ddf
#undef str_020c6e2d
#undef str_020c6e53
#undef str_020c6e74
#undef str_020c6e9d
#undef str_020c6eb9
#undef str_020c6ec0
#undef str_020c6ee2
#undef str_020c6efd
#undef str_020c6f39
#undef str_020c6f53
#undef str_020c6f6d
#undef str_020c6f8e
#undef str_020d9e14
#undef local_ca1
#undef local_bb0
#undef local_9c8
#undef local_9c4
#undef local_3b0
#undef local_3ac
#undef local_1ad
#undef local_10d
#undef local_1c
#undef local_18
#undef local_14
