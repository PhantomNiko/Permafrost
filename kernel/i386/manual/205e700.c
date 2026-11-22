/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c531e (*(uint8_t *)(0x20c531eU))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define DAT_020d9d66 (*(uint8_t volatile *)(0x20d9d66U))
#define DAT_020d9db4 (*(uint8_t volatile *)(0x20d9db4U))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6adc (*(char (*)[1])(0x20c6adcU))
#define str_020c6aeb (*(char (*)[1])(0x20c6aebU))
#define str_020c6af7 (*(char (*)[1])(0x20c6af7U))
#define str_020c6b03 (*(char (*)[1])(0x20c6b03U))
#define str_020c6b0e (*(char (*)[1])(0x20c6b0eU))
#define str_020c6b1a (*(char (*)[1])(0x20c6b1aU))
#define str_020c6b2d (*(char (*)[1])(0x20c6b2dU))
#define str_020c6b41 (*(char (*)[1])(0x20c6b41U))
#define str_020c6b4c (*(char (*)[1])(0x20c6b4cU))
#define str_020c6b57 (*(char (*)[1])(0x20c6b57U))
#define str_020c6b62 (*(char (*)[1])(0x20c6b62U))
#define str_020c6b6d (*(char (*)[1])(0x20c6b6dU))
#define str_020c6b7c (*(char (*)[1])(0x20c6b7cU))
#define str_020c6b8f (*(char (*)[1])(0x20c6b8fU))
#define str_020c6ba8 (*(char (*)[1])(0x20c6ba8U))
#define str_020c6bb7 (*(char (*)[1])(0x20c6bb7U))
#define str_020c6bcb (*(char (*)[1])(0x20c6bcbU))
#define str_020c6be1 (*(char (*)[1])(0x20c6be1U))
#define str_020c6bf6 (*(char (*)[1])(0x20c6bf6U))
#define str_020c6c0b (*(char (*)[1])(0x20c6c0bU))
#define str_020c6c1e (*(char (*)[1])(0x20c6c1eU))
#define str_020c6c33 (*(char (*)[1])(0x20c6c33U))
#define str_020c6c4a (*(char (*)[1])(0x20c6c4aU))
#define str_020c6c61 (*(char (*)[1])(0x20c6c61U))
#define str_020c6c6c (*(char (*)[1])(0x20c6c6cU))
#define str_020c6d0d (*(char (*)[1])(0x20c6d0dU))
#define local_2c1 (*(char (*)[241])(frame + 31))
#define local_1d0 (*(char (*)[192])(frame + 272))
#define local_110 (*(char (*)[8])(frame + 464))
#define local_108 (*(uint *)(frame + 472))
#define local_1c (*(undefined1 (*)[8])(frame + 708))
#define local_14 (*(uint *)(frame + 716))


void recovered_205e700(int device)

{
  unsigned char frame[768] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  ulong count;
  undefined *vararg0;

  if (-1 < device) {
    cVar2 = DAT_020d9db4;
    puVar4 = &DAT_020c531e;
    if (cVar2 != '\0') {
      puVar4 = &DAT_020d9db4;
    }
    pf_varargs_20044f0__4_(local_2c1,0xf1,str_020c6adc,(uint)puVar4);
    cVar2 = DAT_020d9d66;
    if ((cVar2 == '\x01') && (iVar1 = DAT_020d9d5c, iVar1 == device)) {
      recovered_2001e00(local_110,0,0xc);
      uVar5 = recovered_202ad00(device,str_020c6aeb,local_110);
      if ((uVar5 != 0) && ((local_108 & 2) != 0)) {
        recovered_2001e00(local_110,0,0xc);
        uVar5 = recovered_202ad00(device,str_020c6af7,local_110);
        if ((uVar5 != 0) && ((local_108 & 2) != 0)) {
          recovered_2001e00(local_110,0,0xc);
          uVar5 = recovered_202ad00(device,local_2c1,local_110);
          if ((uVar5 != 0) && ((local_108 & 2) != 0)) {
            return;
          }
        }
      }
    }
    recovered_202bc40(device,str_020c6ac7);
    recovered_202bc40(device,str_020c6b03);
    recovered_202bc40(device,str_020c6b0e);
    recovered_202bc40(device,str_020c6b1a);
    recovered_202bc40(device,str_020c6b2d);
    recovered_202bc40(device,str_020c6b41);
    recovered_202bc40(device,str_020c6aeb);
    recovered_202bc40(device,str_020c6b4c);
    recovered_202bc40(device,str_020c6af7);
    recovered_202bc40(device,str_020c6b57);
    recovered_202bc40(device,str_020c6b62);
    recovered_202bc40(device,str_020c6b6d);
    recovered_202bc40(device,str_020c6b7c);
    recovered_202bc40(device,str_020c6b8f);
    recovered_202bc40(device,str_020c6ba8);
    recovered_202bc40(device,str_020c6bb7);
    recovered_202bc40(device,str_020c6bcb);
    recovered_202bc40(device,str_020c6be1);
    recovered_202bc40(device,str_020c6bf6);
    recovered_202bc40(device,str_020c6c0b);
    recovered_202bc40(device,str_020c6c1e);
    recovered_202bc40(device,str_020c6c33);
    recovered_202bc40(device,str_020c6c4a);
    recovered_202bc40(device,str_020c6c61);
    recovered_202bc40(device,local_2c1);
    cVar2 = DAT_020d9db4;
    vararg0 = &DAT_020c531e;
    puVar4 = &DAT_020c531e;
    if (cVar2 != '\0') {
      puVar4 = &DAT_020d9db4;
    }
    pf_varargs_20044f0__4_(local_1d0,0xc0,str_020c6c6c,(uint)puVar4);
    count = recovered_2002270(local_1d0);
    recovered_202b490(device,str_020c6d0d,local_1d0,count);
    cVar2 = DAT_020d9db4;
    if (cVar2 != '\0') {
      vararg0 = &DAT_020d9db4;
    }
    pf_varargs_20044f0__4_(local_110,0xf1,str_020c6adc,(uint)vararg0);
    uVar5 = recovered_205e600(device);
    if ((char)uVar5 == '\0') {
      bVar3 = 0;
    }
    else {
      recovered_2001e00(local_1c,0,0xc);
      uVar5 = recovered_202ad00(device,local_110,local_1c);
      bVar3 = (byte)((local_14 & 2) >> 1) & uVar5 != 0;
    }
    DAT_020d9d66 = bVar3;
  }
  return;
}
#undef DAT_020c531e
#undef DAT_020d9d5c
#undef DAT_020d9d66
#undef DAT_020d9db4
#undef str_020c6ac7
#undef str_020c6adc
#undef str_020c6aeb
#undef str_020c6af7
#undef str_020c6b03
#undef str_020c6b0e
#undef str_020c6b1a
#undef str_020c6b2d
#undef str_020c6b41
#undef str_020c6b4c
#undef str_020c6b57
#undef str_020c6b62
#undef str_020c6b6d
#undef str_020c6b7c
#undef str_020c6b8f
#undef str_020c6ba8
#undef str_020c6bb7
#undef str_020c6bcb
#undef str_020c6be1
#undef str_020c6bf6
#undef str_020c6c0b
#undef str_020c6c1e
#undef str_020c6c33
#undef str_020c6c4a
#undef str_020c6c61
#undef str_020c6c6c
#undef str_020c6d0d
#undef local_2c1
#undef local_1d0
#undef local_110
#undef local_108
#undef local_1c
#undef local_14
