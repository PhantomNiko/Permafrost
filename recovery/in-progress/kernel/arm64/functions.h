/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
void pf_kernel_entry(void);
#include "arm64-recovery.h"
#include "cpu.h"
void recovered_82400014(void);
__attribute__((naked)) void recovered_82400084(void);
unsigned int recovered_82400188(void);
void recovered_824001f0(void);
void recovered_8240021c(void);
void recovered_82400254(void);
bool recovered_824004d8(ulong *param_1,ulong *param_2,long param_3);
bool recovered_82400514(ulong *param_1,ulong *param_2,long param_3);
bool recovered_82400734(ulong param_1,ulong param_2);
ulong recovered_82400770(void);
long recovered_824007d0(void);
ulong recovered_82400824(void);
long recovered_82400874(void);
void * recovered_824008b8(ulong size);
ulong * recovered_824008e4(long param_1,ulong *param_2,ulong *param_3);
void recovered_82400ab8(long param_1,ulong *param_2);
ulong * recovered_82400af0(long param_1,ulong *param_2,ulong *param_3);
void recovered_82400b34(void *memory);
void recovered_82400b5c(long param_1);
void * recovered_82400bd0(void *memory,ulong size);
ulong recovered_82400d4c(ulong param_1,uint param_2);
ulong recovered_82400d90(ulong param_1,uint param_2);
long recovered_82400ddc(long param_1,uint param_2);
ulong recovered_82400e2c(ulong param_1,ulong param_2);
ulong recovered_82400e34(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_82400e94(undefined8 param_1,undefined8 param_2);
long recovered_82400eb4(ulong param_1,ulong param_2);
long recovered_82400ef4(long param_1,long param_2);
void recovered_82400f40(void);
int recovered_82400f48(int param_1);
void * recovered_82400f54(ulong size);
void recovered_82400f58(void *memory);
void * recovered_82400f5c(void *memory,ulong size);
void *recovered_82400f60(void *dest,const void *src,size_t count);
void *recovered_82401038(void *dest,const void *src,size_t count);
void *recovered_8240114c(void *dest,int value,size_t count);
void recovered_824011e4(ulong *param_1,ulong param_2);
void recovered_824011e8(ulong *param_1,ulong param_2);
char * recovered_824011ec(long param_1,char param_2,long param_3);
int recovered_82401210(void *left,void *right,ulong count);
int recovered_82401378(long param_1,long param_2);
int recovered_824013a4(int value);
int recovered_824013b4(int value);
int recovered_824013c4(int value);
int recovered_824013d8(int value);
int recovered_824013f4(int value);
int recovered_82401404(int value);
int recovered_82401414(int value);
int recovered_82401428(int value);
ulong recovered_8240143c(char *text);
int recovered_82401460(char *left,char *right);
int recovered_82401488(char *left,char *right);
void recovered_8240148c(long param_1,long param_2);
void recovered_824014a4(char *param_1);
char * recovered_824014e4(char *text,int value);
ulong recovered_8240150c(char *text,char *accept);
ulong recovered_8240154c(char *text,char *reject);
char * recovered_8240158c(char *param_1,char *param_2);
char * recovered_824015cc(char *text,char *find);
undefined * recovered_82401608(void);
undefined ** recovered_82401614(void);
undefined8 recovered_82401620(undefined8 *param_1);
double recovered_8240163c(double value,int exponent);
uint128 recovered_82401670(double param_1,int *param_2);
double recovered_824016e4(double left,double right);
double recovered_82401708(double left,double right);
double recovered_82401768(double value);
double recovered_82401784(double value);
double recovered_824017b0(double value);
double recovered_824017ec(double value);
long recovered_82401898(double param_1);
double recovered_824018ac(double value);
void recovered_82401900(double param_1);
double recovered_82401944(double value);
double recovered_82401990(double value);
ulong recovered_824019a0(double param_1);
ulong recovered_82401a00(double param_1);
void recovered_82401a50(ulong param_1);
uint128 recovered_82401a78(ulong param_1);
float recovered_82401a9c(float left,float right);
void recovered_82401ad0(float param_1,int *param_2);
float recovered_82401ae8(float value,int exponent);
float recovered_82401b00(float left,float right);
float recovered_82401b1c(float value);
float recovered_82401b40(float value);
double recovered_82401b58(double value);
float recovered_82401b80(float value);
float recovered_82401b98(float value);
float recovered_82401bb0(float value);
long recovered_82401bc8(double param_1);
float recovered_82401bdc(float value);
float recovered_82401bf4(float value);
float recovered_82401c0c(float value);
long recovered_82401c1c(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_82401d20(int param_1);
long recovered_82401d50(byte *param_1,undefined8 *param_2,uint param_3);
uint128 recovered_82401e74(byte *param_1,undefined8 *param_2);
void recovered_82402004(byte *param_1,undefined8 *param_2);
int recovered_8240201c(char *out,ulong capacity,char *format,void *arguments);
void recovered_824025c0(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_824025fc(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6);
void recovered_8240269c(long *param_1,ulong *param_2,int *param_3,char *param_4);
int recovered_824026e8(char *out,ulong capacity,char *format,...);
void recovered_82402710(ulong param_1,ulong param_2,undefined8 *param_3);
void recovered_82402794(ulong param_1,ulong param_2,undefined8 *param_3);
undefined8 recovered_82402840(ulong param_1,long param_2);
undefined8 recovered_8240285c(ulong param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_824028d4(ulong param_1,ulong param_2,ulong param_3);
undefined8 recovered_82402918(ulong *param_1,long param_2);
void recovered_8240296c(ulong *param_1);
undefined8 recovered_82402990(ulong *param_1);
undefined8 recovered_82402b54(undefined1 *param_1,long param_2);
undefined1 recovered_82402c18(byte *param_1);
undefined8 recovered_82402c68(uint *param_1);
undefined1 recovered_82402e78(uint *param_1);
byte recovered_824030f8(void);
bool recovered_82403128(void);
uint recovered_82403134(void);
bool recovered_82403154(void);
undefined4 recovered_82403188(void);
bool recovered_82403194(void);
long recovered_824031b4(void);
ulong recovered_824031d8(ulong param_1);
ulong recovered_8240321c(ulong param_1);
ulong recovered_82403230(ulong param_1);
ulong recovered_8240327c(ulong param_1);
ulong recovered_82403290(ulong param_1);
ulong recovered_824032a4(ulong param_1);
ulong recovered_824032f0(undefined8 param_1);
ulong recovered_82403304(undefined8 param_1);
undefined4 recovered_8240334c(uint param_1,long param_2,long param_3,uint param_4);
undefined4 recovered_82403360(uint param_1,long param_2,long param_3,uint param_4);
bool recovered_824033cc(uint param_1,char *param_2,uint param_3);
bool recovered_824033f0(uint param_1,char *param_2,uint param_3);
void recovered_82403478(int *param_1);
void recovered_82403520(undefined8 *param_1);
void recovered_82403540(ulong param_1);
void recovered_824035f0(uint param_1,long param_2);
undefined8 recovered_82403910(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
undefined8 recovered_8240391c(void);
undefined8 recovered_82403920(void *param_1);
byte recovered_82403938(void);
void recovered_82403988(void);
byte recovered_82403990(void);
undefined8 recovered_824039d0(ulong param_1,long param_2);
ulong recovered_82403a74(undefined8 *param_1,undefined8 *param_2);
ulong recovered_82403bb8(void *param_1,uint param_2);
ulong recovered_82403d94(uint param_1,ulong *param_2,uint *param_3,undefined8 *param_4,
                        undefined4 *param_5);
ulong recovered_82404b1c(ulong param_1);
bool recovered_82404b60(uint *param_1,uint param_2);
char * recovered_82404b94(uint param_1);
undefined8
recovered_82404bb8(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint *param_6);
undefined8
recovered_82404cbc(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  undefined4 param_6);
void recovered_82404d68(undefined8 param_1,undefined8 param_2,int param_3,int param_4);
void recovered_82404d80(void);
undefined8 recovered_82404d8c(uint param_1,int param_2,uint param_3,uint *param_4);
undefined8 recovered_82404e2c(undefined8 param_1,int param_2);
undefined8 recovered_82404e38(ulong param_1,ulong param_2);
undefined8 recovered_824053a4(uint param_1,int param_2,uint param_3,ulong *param_4);
undefined8 recovered_82405458(void);
void recovered_8240545c(long param_1);
void recovered_824054ec(ulong param_1,long param_2);
bool recovered_82405520(void);
int recovered_8240589c(void);
undefined8 recovered_82406698(long param_1);
void recovered_824066ec(undefined8 param_1);
undefined4 recovered_824066f8(void);
undefined4 recovered_82406740(void);
undefined4 recovered_82406758(void);
int recovered_82406770(void);
int recovered_824067f0(void);
int recovered_82406828(void);
void recovered_82406860(uint param_1,undefined1 param_2);
int recovered_8240688c(void);
char * recovered_824068e4(uint param_1);
uint recovered_82406908(void);
undefined8 recovered_8240699c(void *param_1);
void recovered_824069c4(void);
void recovered_824069c8(void);
void recovered_824069d0(void);
undefined8 recovered_824069d8(void);
undefined8 recovered_824069dc(void);
undefined8 recovered_824069e0(void);
void recovered_824069e4(void);
void recovered_824069e8(void);
undefined8 recovered_824069ec(uint *param_1,int param_2,uint *param_3);
undefined8 recovered_82406a48(undefined4 *param_1,int param_2,undefined4 param_3);
undefined8 recovered_82406a90(uint param_1,int param_2,uint *param_3);
undefined8 recovered_82406a98(uint param_1,int param_2,undefined4 param_3);
void recovered_82406aa0(void);
void recovered_82407394(void);
ulong recovered_824073c0(void);
void recovered_8240741c(void);
bool recovered_82407444(void);
void recovered_8240755c(void);
undefined8 recovered_82407590(uint param_1,int *param_2);
bool recovered_82407614(void);
uint recovered_824076b4(void);
undefined8 recovered_824077a8(void);
void recovered_824077b0(int param_1);
undefined1 recovered_82407900(void);
byte recovered_8240790c(void);
byte recovered_8240791c(void);
int recovered_82407920(void);
undefined8 recovered_82407990(int *param_1);
uint recovered_82407a68(void);
uint recovered_82407ae0(void);
char * recovered_82407b58(uint param_1);
ulong recovered_82407c88(void);
uint recovered_82407cc8(uint param_1);
void recovered_82407d10(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
char * recovered_82407de8(byte param_1,int param_2);
uint recovered_82407ed0(uint param_1);
void recovered_82407f10(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void recovered_82408030(void);
void recovered_82408090(void);
void recovered_82408100(uint param_1,uint param_2,ulong param_3,ulong param_4,ulong param_5);
ulong recovered_8240857c(ulong param_1,uint param_2);
undefined4 recovered_824085fc(uint param_1,long param_2,uint param_3);
void recovered_8240863c(long param_1);
void recovered_82408690(undefined8 param_1);
uint recovered_824086e8(uint param_1,uint param_2);
bool recovered_824087e0(void);
void recovered_82408838(void *param_1,ulong param_2);
undefined8
recovered_82408918(undefined8 param_1,ulong param_2,uint param_3,undefined4 *param_4,
                  undefined4 *param_5);
undefined8 recovered_82408974(ulong param_1,uint param_2,ulong *param_3);
void recovered_824089f4(undefined8 param_1,ulong param_2,uint param_3);
void recovered_82408a14(undefined8 param_1,ulong param_2,uint param_3);
int recovered_82408a34(void);
void recovered_82408a48(long param_1,uint param_2);
void recovered_82408b34(void);
void recovered_82408b80(int param_1,int param_2,void *param_3,uint param_4);
ulong recovered_82408bc4(int param_1,int param_2,void *param_3,uint param_4);
ulong recovered_82408e10(long param_1,uint param_2,int param_3);
ulong recovered_824090cc(long param_1,uint param_2);
void recovered_82409114(void);
undefined4
recovered_824096a4(int *param_1,uint param_2,uint param_3,uint param_4,void *param_5,uint param_6,
                  void *param_7,uint param_8);
int recovered_82409bf8(void *param_1);
undefined8 recovered_82409cfc(uint param_1);
bool recovered_82409d44(int *param_1);
undefined4 recovered_8240a030(int param_1,int param_2,void *param_3,uint param_4);
uint recovered_8240a1a4(int param_1);
bool recovered_8240a1b8(int param_1,int param_2,uint param_3,uint param_4,int param_5,long param_6,
                       uint param_7,undefined *param_8);
void recovered_8240a53c(ulong param_1);
bool recovered_8240a590(int param_1,int param_2,uint param_3,uint param_4,int param_5,long param_6,
                       uint param_7);
ulong recovered_8240a598(int param_1,uint param_2,uint param_3,int param_4,long param_5,uint param_6
                        );
undefined1 recovered_8240a5f4(void);
void recovered_8240a614(void);
ulong recovered_8240a628(void);
uint recovered_8240a8e0(void);
undefined8 recovered_8240a9bc(void);
ulong recovered_8240a9c4(void);
long recovered_8240aa04(void);
void recovered_8240aa68(void);
uint recovered_8240c13c(void);
uint recovered_8240c260(void);
uint recovered_8240c4f0(void);
bool recovered_8240c5c8(uint param_1,long param_2);
unsigned char recovered_8240c628(unsigned char ch);
bool recovered_8240c7b8(void);
long recovered_8240d24c(void);
uint recovered_8240d2ec(void);
void recovered_8240d30c(int param_1);
bool recovered_8240d340(uint *param_1);
long recovered_8240d770(void);
void recovered_8240d7d4(void);
undefined8 recovered_8240e4ac(void);
undefined8
recovered_8240e59c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,
                  int *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9);
undefined * recovered_8240e6dc(int param_1);
bool recovered_8240e724(int drive);
ulong recovered_8240e754(uint param_1,int param_2);
ulong recovered_8240e7b8(uint param_1);
undefined8 recovered_8240e85c(int param_1);
undefined4 recovered_8240e960(void);
undefined4 recovered_8240e970(uint param_1);
void recovered_8240ea2c(long param_1,uint param_2);
undefined4 recovered_8240eb88(uint param_1);
undefined8 recovered_8240ec08(ulong param_1);
undefined8
recovered_8240ecc8(undefined8 param_1,int param_2,ulong param_3,undefined *param_4,ulong param_5);
ulong recovered_8240ece4(uint param_1,int param_2,uint param_3,undefined *param_4,ulong param_5);
ulong recovered_8240f1a0(uint param_1,int param_2,uint param_3,long param_4,ulong param_5);
ulong recovered_8240f1bc(uint param_1,int param_2,uint param_3,long param_4,ulong param_5);
ulong recovered_8240f370(uint param_1,int param_2);
ulong recovered_8240f38c(uint param_1,int param_2);
bool recovered_8240f588(uint param_1,int *param_2);
bool recovered_8240f694(uint param_1,int *param_2);
bool recovered_8240f758(void);
undefined4 * recovered_8240f7b0(uint param_1);
ulong recovered_8240f7e4(uint param_1,ulong param_2,undefined *param_3,ulong param_4);
undefined8 recovered_8240fda8(int param_1,ulong param_2,void *param_3,ulong param_4);
bool recovered_8240feec(uint param_1,ulong param_2,long param_3,ulong param_4);
int recovered_8240fef4(void);
uint recovered_8240ff28(void);
uint recovered_8240ff60(int param_1);
undefined8 recovered_8240ff94(uint param_1,ulong param_2,ulong param_3,uint param_4,void *param_5);
bool recovered_82410058(uint param_1,uint param_2,int param_3,uint param_4);
ulong recovered_824100b0(uint param_1,uint param_2,ulong param_3,uint param_4);
void recovered_824101e0(undefined1 param_1,undefined4 param_2,uint param_3,int param_4);
ulong recovered_8241026c(uint param_1,ulong param_2,long param_3,ulong param_4);
uint recovered_8241077c(int param_1);
uint recovered_824107b0(uint param_1);
bool recovered_82410858(uint param_1);
byte recovered_82410944(uint param_1);
ulong recovered_82410a18(uint param_1);
ulong recovered_82410ab4(uint param_1);
ulong recovered_82410b98(void);
uchar recovered_82410ba0(uint duration);
bool recovered_82410c08(ulong param_1);
void recovered_82410cc8(int param_1);
int recovered_82410d10(void);
uint recovered_82410d58(undefined4 param_1);
uint recovered_82410d90(void);
void recovered_82410db0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
uint recovered_82410dcc(ulong param_1);
uint recovered_82410de8(void);
uint recovered_82410dfc(void);
ulong recovered_82410eac(ulong *param_1);
bool recovered_82411180(uint *param_1);
undefined8 recovered_82411448(uint *param_1);
byte recovered_82411bf0(uint *param_1);
byte recovered_82411d48(void);
bool recovered_82411da8(void);
undefined8 recovered_82411e04(undefined4 *param_1);
bool recovered_824120f8(uint *param_1);
bool recovered_82412318(uint *param_1);
byte recovered_82412720(void);
undefined8 recovered_824128d0(void);
byte recovered_82412a84(void);
void recovered_82412b80(uint *param_1,undefined4 *param_2);
void recovered_82412bc8(void);
void recovered_82412bcc(undefined8 param_1);
bool recovered_82412bd8(undefined4 *param_1,undefined4 *param_2);
void recovered_82412c08(undefined4 *param_1);
undefined2 recovered_82413114(long param_1,uint param_2);
void recovered_82413150(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_824131a4(int *param_1,int *param_2,int *param_3,int *param_4);
void recovered_82413280(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 *param_5);
void recovered_824132e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 *param_5);
void recovered_8241334c(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                       undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,
                       undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,
                       undefined4 *param_11,undefined4 *param_12);
void recovered_82413440(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,uint *param_5,uint *param_6);
void recovered_824134cc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,uint *param_5,uint *param_6);
void recovered_82413558(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,uint *param_5,uint *param_6,uint *param_7,uint *param_8,
                       uint *param_9,uint *param_10);
undefined8 recovered_8241365c(void);
void recovered_82413678(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_8241372c(undefined4 *param_1,uint *param_2,uint *param_3);
ulong recovered_82413760(void);
undefined8 * recovered_82413d94(void);
void recovered_82413da0(void);
bool recovered_82413df0(void);
bool recovered_82413e34(void);
uint recovered_82413e70(void);
uint recovered_82413e74(void);
undefined8 recovered_82413ec8(int *param_1);
void recovered_824144d8(void);
undefined8 recovered_82414500(void);
void recovered_82414504(uint param_1);
void recovered_824145b4(char *param_1);
void recovered_824145e0(char *param_1,long param_2);
bool recovered_82414614(char *param_1);
undefined8 recovered_824146c0(void);
undefined8 recovered_824146c4(void);
undefined1 recovered_824146c8(undefined8 *param_1);
undefined8 recovered_82414724(undefined8 param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_82414738(void);
undefined8 recovered_8241473c(long *param_1);
undefined8 recovered_824147a0(void);
ulong recovered_824147a4(void);
long recovered_824147a8(void);
ulong recovered_824147ac(void);
ulong recovered_82414804(void);
undefined * recovered_82414854(void);
bool recovered_82414860(int *param_1);
undefined1 recovered_8241489c(long param_1);
bool recovered_824148c8(long param_1,uint param_2,uint param_3,undefined8 *param_4);
void recovered_824149c8(void);
void recovered_824149f0(void);
undefined8 recovered_82414a18(uint param_1,long param_2,uint *param_3);
ulong recovered_82414a64(ulong param_1);
char * recovered_82414adc(char *param_1);
void recovered_82414b10(ulong param_1,int param_2);
void recovered_82414c64(char *param_1);
void recovered_82414d20(ulong param_1,int param_2);
ulong recovered_82414e78(long param_1);
uint recovered_82414ec4(uint *param_1);
ulong recovered_82414ed4(ulong param_1);
bool recovered_82414f0c(byte *param_1,byte *param_2);
undefined4 recovered_82414f9c(uint param_1,long param_2,uint param_3);
char * recovered_82414fdc(char *param_1);
char * recovered_82415104(char *param_1,char *param_2);
void recovered_82415184(long param_1);
char * recovered_824151a8(void);
undefined1 recovered_824152cc(ulong param_1,long param_2);
bool recovered_82415338(char *param_1,uint param_2);
bool recovered_8241536c(int *param_1,int param_2,uint param_3,uint param_4,void *param_5);
bool recovered_824153c8(char *param_1,char *param_2);
void recovered_82415420(long param_1,ulong param_2,long param_3,uint param_4);
uint recovered_82415730(byte *param_1,ulong param_2,ulong *param_3);
ulong recovered_824157a0(long param_1,ulong param_2,undefined1 *param_3);
void recovered_824158c0(char *param_1,ulong param_2,byte *param_3);
undefined8 recovered_824159d4(ulong param_1,int param_2,ulong *param_3,undefined1 *param_4);
long recovered_82415a74(void);
uint recovered_82415b8c(void *param_1);
undefined8 recovered_82415bb4(void *param_1);
undefined8 recovered_82415be4(long param_1,uint *param_2);
undefined8
recovered_82415c54(ulong param_1,uint param_2,ulong *param_3,uint *param_4,undefined4 *param_5);
undefined8 recovered_82415d7c(ulong param_1,ulong *param_2);
undefined8
recovered_82415dfc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5);
undefined8 recovered_82415f24(ulong param_1,int param_2,ulong *param_3);
bool recovered_82415fe4(uint *param_1,void *param_2);
bool recovered_82416abc(uint *param_1,uint param_2,ulong *param_3);
undefined8 recovered_82416b34(ulong param_1,ulong param_2,uint param_3,uint param_4,long *param_5);
uint recovered_82416b88(uint *param_1);
void recovered_82416b98(void *param_1);
bool recovered_82416bc8(long param_1,uint param_2,uint param_3,long param_4);
undefined1 recovered_82416c1c(long param_1,uint param_2,char *param_3);
undefined8
recovered_82416cc4(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,ulong *param_6);
undefined * recovered_82417448(uint param_1,uint param_2,uint param_3);
undefined8
recovered_824174a0(ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  long *param_7);
bool recovered_82417524(ulong param_1,uint param_2,uint param_3);
void recovered_82417558(ulong *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       int param_6,long param_7,ulong param_8);
undefined8 recovered_824176d8(ulong param_1,ulong *param_2);
undefined8 recovered_8241772c(undefined8 *param_1,ulong *param_2);
void recovered_824177d4(undefined8 *param_1,undefined8 param_2,int param_3,int param_4);
void recovered_82417830(ulong param_1,ulong param_2);
int recovered_82417874(long param_1);
bool recovered_824178ac(long param_1);
int recovered_824178ec(void);
uint recovered_82417920(uint *param_1);
void recovered_82417930(void *param_1);
void recovered_82417958(void *param_1);
undefined8 recovered_82417980(uint *param_1);
bool recovered_824179a8(char *param_1,uint param_2,char *param_3);
undefined1 recovered_824179f0(long param_1,uint param_2,uint param_3);
bool recovered_82417a24(long param_1,uint param_2,uint param_3,char *param_4);
bool recovered_82417a7c(char *param_1,int param_2,char *param_3);
undefined8 recovered_82417a94(char *param_1,uint param_2,undefined1 *param_3);
void recovered_82417b28(ulong param_1,long param_2);
ulong recovered_82417b64(ulong param_1);
ulong recovered_82417bb0(ulong param_1);
bool recovered_8241805c(ulong param_1,int param_2);
ulong recovered_824180c0(uint *param_1,uint param_2);
uint recovered_82418124(uint param_1,long param_2);
ulong recovered_82418154(uint param_1,uint param_2,uint param_3);
ulong recovered_82418218(uint param_1,uint param_2,uint param_3,long param_4,uint param_5);
char * recovered_82418328(char *param_1);
ulong recovered_82418354(char *param_1,long param_2);
bool recovered_824186fc(ulong param_1,int param_2,long param_3);
ulong recovered_824187b0(ulong param_1,int param_2);
undefined8 recovered_82418860(uint param_1,undefined4 *param_2);
bool recovered_824188ec(void *param_1,void *param_2);
undefined8 recovered_82418910(uint param_1,uint param_2,int param_3,long param_4);
bool recovered_82418a38(uint param_1);
undefined8 recovered_82418b00(uint param_1,uint *param_2);
undefined1 recovered_82418b6c(void);
undefined8 recovered_82418bf8(void);
long recovered_82418c24(void);
int recovered_82418c3c(uint param_1);
void recovered_82418c58(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,int param_7,uint param_8,char param_9);
uint recovered_82418d7c(int param_1,int param_2,int param_3);
bool recovered_82418dd4(ulong param_1,ulong param_2,ulong *param_3);
undefined4 recovered_82418e90(ulong param_1,uint param_2,int param_3,undefined4 param_4);
uint128 recovered_82418ef0(void *param_1,undefined8 param_2);
undefined8 recovered_824190a0(undefined8 *param_1);
ulong recovered_82419388(int param_1,uint param_2);
undefined4 recovered_824194dc(undefined4 *param_1);
ulong recovered_824194fc(ulong param_1,uint param_2,int param_3,uint param_4,ulong *param_5);
undefined8 recovered_824195bc(ulong param_1,uint param_2,ulong *param_3);
bool recovered_824195c0(ulong param_1,uint param_2,uint param_3);
undefined8 recovered_82419614(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_8241968c(undefined8 *param_1);
void recovered_824196cc(int param_1);
uint recovered_82419828(ulong param_1,byte *param_2,ulong param_3);
undefined8 recovered_82419c64(void);
ulong recovered_82419d48(ulong param_1,uint *param_2,uint *param_3,undefined8 param_4,
                        undefined4 param_5,uint param_6,long *param_7);
void recovered_82419e48(uint param_1,undefined4 param_2);
void recovered_82419e70(undefined1 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_82419eb8(undefined1 *param_1,undefined8 param_2);
undefined8 recovered_82419ef8(uint param_1);
bool recovered_82419fac(uint param_1);
void recovered_8241a034(uint param_1);
void recovered_8241a03c(int *param_1,uint param_2);
ulong recovered_8241a15c(undefined4 param_1,undefined4 *param_2);
void recovered_8241a1b8(undefined4 param_1,uint param_2);
void recovered_8241a294(uint param_1,uint param_2);
ulong recovered_8241a634(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4
                        ,int param_5,undefined *param_6,uint param_7);
undefined * recovered_8241ab14(void);
undefined * recovered_8241ab78(void);
undefined * recovered_8241abf4(void);
undefined1 recovered_8241ac70(void);
void recovered_8241acec(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5);
undefined * recovered_8241ad28(void);
ulong recovered_8241ad8c(undefined8 param_1,uint param_2,int param_3,uint *param_4,
                        undefined1 *param_5);
undefined8 recovered_8241aecc(void *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_8241af54(byte *param_1,uint *param_2,uint param_3);
undefined8 recovered_8241af9c(undefined8 param_1);
undefined * recovered_8241b000(uint param_1,uint param_2);
undefined * recovered_8241b074(uint param_1,uint param_2);
void recovered_8241b0f0(int *param_1,uint param_2);
undefined8 recovered_8241d2e0(void);
undefined8 recovered_8241d644(void);
undefined1 recovered_8241d950(void);
void recovered_8241ddbc(char *param_1);
ulong recovered_8241de08(int param_1,int param_2);
undefined8 recovered_8241df10(uint param_1,byte *param_2);
ulong recovered_8241e0b8(uint param_1,uint param_2,byte *param_3);
undefined8 recovered_8241e4cc(void);
ulong recovered_8241e754(int param_1,uint param_2);
undefined8
recovered_8241e77c(uint param_1,undefined1 *param_2,byte *param_3,byte *param_4,ushort *param_5,
                  undefined1 *param_6);
ulong recovered_8241e8e4(uint param_1,uint param_2,uint param_3);
ulong recovered_8241eb44(ulong param_1);
ulong recovered_8241eb60(undefined1 param_1,undefined4 param_2,undefined4 param_3);
undefined8 recovered_8241eb74(int *param_1,undefined2 *param_2);
void recovered_8241ebec(uint param_1,uint param_2);
bool recovered_8241ec30(int *param_1,uint param_2,uint param_3);
bool recovered_8241ece8(ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6);
bool recovered_8241ed5c(long param_1,uint param_2,uint *param_3);
uint recovered_8241edfc(long param_1,uint param_2);
ulong recovered_8241ee24(long param_1,ulong param_2);
bool recovered_8241efa0(uint *param_1,uint *param_2);
uint recovered_8241f050(int *param_1,uint param_2,uint param_3);
void recovered_8241f148(undefined8 param_1,int param_2);
ulong recovered_8241f1a8(int *param_1,uint param_2);
void recovered_8241f21c(void);
void recovered_8241f254(uint param_1);
undefined8 recovered_8241f334(int *param_1,undefined1 *param_2,byte *param_3,byte *param_4);
undefined8 recovered_8241f388(long param_1,uint param_2,byte param_3);
undefined8 recovered_8241f3c0(void);
undefined8
recovered_8241f43c(uint param_1,undefined1 *param_2,byte *param_3,byte *param_4,ushort *param_5,
                  undefined1 *param_6,byte *param_7,ushort *param_8,undefined1 *param_9);
ulong recovered_8241f808(int param_1,undefined4 param_2,byte param_3,int param_4,undefined4 param_5,
                        byte param_6);
undefined8 recovered_8241fa7c(void);
void recovered_82420018(void);
uint recovered_82420074(uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6
                       ,int param_7,int param_8);
undefined1 recovered_8242014c(void);
void recovered_824201c8(undefined1 *param_1,undefined1 param_2,int param_3,int param_4);
void recovered_8242025c(undefined1 *param_1,uint param_2,undefined1 param_3,undefined4 param_4,
                       byte param_5,ulong param_6,undefined4 param_7,undefined4 param_8);
undefined8 recovered_824202f8(void);
undefined8
recovered_824203fc(byte *param_1,uint param_2,uint param_3,ulong param_4,uint param_5,uint param_6);
undefined8 recovered_824209f0(byte *param_1);
undefined8 recovered_82420b34(uint param_1,ulong param_2,uint param_3,int param_4);
bool recovered_82420e58(int param_1);
ulong recovered_82420ea0(int param_1);
ulong recovered_82420f24(uint param_1,uint param_2,long param_3,uint param_4,undefined4 *param_5,
                        undefined4 *param_6);
ulong recovered_82421128(int param_1);
byte recovered_82421250(byte *param_1);
uint recovered_824212c0(byte *param_1,uint param_2,uint param_3,ulong param_4,uint param_5,
                       uint param_6);
uint recovered_8242138c(uint *param_1);
bool recovered_82421390(byte *param_1,uint param_2);
undefined4 recovered_824213b8(byte *param_1,uint param_2);
undefined8
recovered_824213f0(uint param_1,undefined1 *param_2,byte *param_3,ushort *param_4,
                  undefined1 *param_5);
ulong recovered_82421548(undefined4 param_1,undefined4 param_2);
uint recovered_8242155c(int param_1,uint param_2);
bool recovered_824215c4(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6,
                       uint param_7,uint param_8);
undefined8 recovered_82421650(uint param_1,uint param_2,undefined1 param_3,undefined1 *param_4);
uint recovered_82421d24(long param_1);
ushort recovered_82421d80(long param_1);
uint recovered_82421e84(void);
undefined8 recovered_82421fc8(void);
undefined8 recovered_82422284(void);
bool recovered_824223fc(void);
bool recovered_82422420(int *param_1,uint param_2,int param_3);
bool recovered_82422450(long param_1,uint param_2,uint param_3,long param_4,uint param_5,int param_6
                       ,int *param_7,int param_8);
bool recovered_824224e8(void);
undefined8 recovered_8242256c(uint param_1,uint param_2,uint param_3,undefined1 *param_4);
void recovered_824226ac(byte *param_1);
undefined8 recovered_824226fc(long param_1,uint param_2,uint param_3,uint param_4,ulong *param_5);
undefined8 recovered_82422754(long param_1,uint param_2,uint param_3,ulong *param_4);
undefined8 recovered_824227b8(void);
bool recovered_824227d4(int param_1,ulong param_2,uint param_3);
bool recovered_82422880(ushort *param_1);
ulonglong recovered_82422920(long param_1);
ulong recovered_82422940(undefined2 *param_1,int param_2);
void recovered_824229f8(ushort *param_1,int param_2,uint param_3,uint param_4,int param_5,
                       int param_6,ushort param_7);
void recovered_82422a38(ushort *param_1,int param_2,uint param_3,uint param_4,int param_5,
                       undefined1 param_6,undefined4 param_7);
ulong recovered_82422a6c(ulong param_1,uint param_2,int param_3,uint *param_4);
ulong recovered_82422ac0(int *param_1);
bool recovered_82422b74(long param_1);
void recovered_82422c18(long param_1);
void recovered_82422c8c(long param_1,uint param_2,undefined2 param_3);
undefined4 recovered_82422cbc(ulong param_1);
undefined8 recovered_82422cec(ulong param_1,uint param_2,undefined4 *param_3);
ulong recovered_82422d54(int *param_1);
ulong recovered_82422dac(int *param_1,uint param_2);
ulong recovered_82422e24(ushort *param_1,int param_2,uint param_3,uint param_4,int param_5,
                        undefined1 param_6,undefined1 param_7,undefined4 param_8,ulong param_9,
                        undefined1 *param_10,ushort param_11);
void recovered_82423334(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
int recovered_82423360(uint param_1,uint param_2,uint param_3,uint param_4,int param_5);
void recovered_82423378(undefined4 param_1);
bool recovered_824233d8(int param_1,int param_2);
undefined8 recovered_82423448(void);
uint recovered_82423580(undefined4 *param_1);
void recovered_824235a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_8242360c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_8242362c(void);
undefined8 recovered_82423750(void);
undefined8 recovered_824238e4(void);
bool recovered_824239d4(uint *param_1);
undefined1 recovered_82423a68(char *param_1,uint param_2);
undefined8
recovered_82423ab8(byte *param_1,uint param_2,int param_3,undefined1 *param_4,uint param_5);
uint recovered_82423c2c(uint *param_1);
undefined8 recovered_82423c30(byte *param_1,uint param_2,int param_3,ulong param_4,uint param_5);
void recovered_82423de4(void);
ulong recovered_82423e1c(int param_1,ulong param_2,uint param_3);
undefined8 recovered_8242420c(void);
ulong recovered_824243f4(int *param_1,long *param_2,undefined1 *param_3);
ulong recovered_82424618(uint param_1);
bool recovered_82424658(uint param_1,uint param_2,long param_3,uint param_4);
undefined8 recovered_8242480c(uint param_1,uint param_2,long param_3,uint param_4);
uint recovered_82424970(uint param_1,undefined8 param_2,int param_3);
void recovered_82424a00(ulong param_1,int param_2);
undefined8 recovered_82424ac8(ulong param_1,uint *param_2);
bool recovered_82424ce0(uint param_1,ulong param_2,long param_3,ulong param_4,int param_5);
undefined1 recovered_82424dc0(void);
undefined8 recovered_82424e08(void);
undefined8 recovered_82425078(undefined8 param_1,ulong param_2,uint param_3,int param_4);
undefined8 recovered_824253cc(uint param_1,ulong *param_2,ulong *param_3,ulong *param_4);
uint recovered_824254d0(int param_1);
undefined8 recovered_824254f4(uint param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 recovered_824255bc(uint param_1);
ulong recovered_82425604(uint param_1);
void recovered_82425670(ulong param_1,undefined8 *param_2);
bool recovered_824256d8(long param_1,uint *param_2);
bool recovered_82425840(long param_1);
ulong recovered_824258b4(ulong param_1,ulong param_2);
bool recovered_82425914(byte *param_1,uint param_2,uint *param_3);
bool recovered_82425990(char *param_1,uint param_2,uint *param_3);
void recovered_82425b8c(long param_1,uint param_2,uint param_3,uint *param_4);
void recovered_82425c60(undefined4 param_1);
void recovered_82425cb0(void);
uint128 recovered_82425ce8(undefined8 param_1,undefined8 param_2);
ulong recovered_82425e08(ulong param_1,undefined *param_2);
void recovered_82425fa0(undefined4 *param_1,uint param_2);
void recovered_8242620c(void);
void recovered_82426338(long param_1,uint param_2);
undefined8 recovered_82426400(uint param_1,int param_2);
void recovered_82426678(undefined4 param_1,undefined4 param_2);
void recovered_824266d4(uint param_1,uint param_2);
void recovered_82426748(uint param_1);
undefined8 recovered_82426788(uint param_1,void *param_2,uint param_3);
undefined8 recovered_824268ac(undefined4 *param_1,uint param_2,int *param_3,int param_4);
undefined8 recovered_82426a30(void);
bool recovered_82426ba4(uint *param_1);
bool recovered_82426c1c(uint *param_1);
ulong recovered_82426c94(uint param_1);
undefined8 recovered_82426d00(long param_1);
uint recovered_82426e9c(long param_1,undefined8 param_2);
bool recovered_82426ef0(long param_1);
ulonglong recovered_82426f28(uint param_1);
bool recovered_82426f54(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6);
undefined2 recovered_824286cc(undefined2 *param_1);
undefined4 recovered_824286d4(undefined4 *param_1);
undefined8 recovered_824286dc(undefined8 *param_1);
void recovered_824286e4(undefined2 *param_1,undefined2 param_2);
void recovered_824286ec(undefined4 *param_1,undefined4 param_2);
void recovered_824286f4(undefined8 *param_1,undefined8 param_2);
uint recovered_824286fc(long param_1,long param_2);
char * recovered_82428758(uint param_1);
undefined4 recovered_8242877c(long param_1);
bool recovered_82428934(char *param_1,long param_2);
bool recovered_8242895c(char *param_1,char *param_2,long param_3);
undefined8 recovered_8242898c(byte *param_1,ulong param_2,ulong *param_3,uint *param_4);
undefined4 recovered_82428a78(short *param_1);
undefined8 recovered_82428c04(char *param_1,ulong param_2);
int recovered_82428cd4(void *param_1,int param_2,void *param_3);
undefined4 recovered_82428e38(char *param_1,short *param_2);
long recovered_82428ff0(ulong param_1,long param_2);
int recovered_8242901c(undefined8 *param_1,ulong param_2,void *param_3,void *param_4);
int recovered_82429104(undefined8 *param_1,ulong param_2,char *param_3,void *param_4);
int recovered_82429410(undefined8 *param_1,ulong param_2,ulong param_3,char *param_4,void *param_5);
void recovered_8242951c(undefined8 *param_1,undefined8 *param_2);
void recovered_82429550(undefined8 *param_1,undefined8 *param_2);
undefined4 recovered_82429564(ulong param_1,ulong param_2,ulong *param_3);
undefined8 recovered_8242960c(long param_1,void *param_2);
undefined4 recovered_8242969c(long param_1,long param_2);
ulong recovered_824296d4(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4,
                        long param_5,ulong *param_6,ulong param_7,ulong *param_8);
bool recovered_82429980(ulong *param_1,ulong param_2,ulong param_3);
undefined8
recovered_824299c4(undefined *param_1,undefined *param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,ulong param_6,ulong param_7,ulong param_8,ulong *param_9);
undefined8 recovered_82429c84(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4);
undefined8
recovered_82429cf0(undefined *param_1,undefined *param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,ulong param_6,long *param_7,ulong param_8,ulong *param_9,
                  long *param_10);
undefined8 recovered_82429f50(char *param_1,ulong param_2);
undefined8 recovered_82429f70(char *param_1,ulong param_2);
void recovered_8242a068(char *param_1,ulong param_2,char *param_3,ulong param_4,void *param_5,
                       ulong param_6,long *param_7);
undefined8
recovered_8242a09c(char *param_1,ulong param_2,char *param_3,ulong param_4,char *param_5,
                  ulong param_6,void *param_7,ulong param_8,long *param_9);
undefined8
recovered_8242a294(char *param_1,ulong param_2,long *param_3,ulong *param_4,long *param_5,
                  ulong *param_6);
undefined8 recovered_8242a3bc(long param_1,ulong param_2,ulong *param_3,ulong *param_4);
uint recovered_8242a454(char *param_1,ulong param_2,char *param_3,ulong param_4,void *param_5,
                       ulong param_6,long *param_7);
undefined8
recovered_8242a4d0(byte *param_1,ulong param_2,byte *param_3,ulong param_4,uint param_5,
                  undefined4 *param_6);
ulong recovered_8242a624(ulong param_1);
undefined8 recovered_8242a6c8(byte *param_1,byte *param_2);
ulong recovered_8242a82c(byte *param_1,byte *param_2);
undefined8 recovered_8242a9dc(long *param_1,undefined8 *param_2,long *param_3,undefined4 *param_4);
undefined8 recovered_8242ab28(undefined8 *param_1,undefined8 *param_2,long *param_3);
undefined8
recovered_8242ad54(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined4 *param_4);
int recovered_8242ae20(short *param_1,ulong param_2,void *param_3,ulong param_4,long param_5,
                      ulong param_6,ulong *param_7,undefined8 *param_8);
long recovered_8242b20c(long param_1);
undefined8 recovered_8242b230(long *param_1,ulong param_2,long *param_3);
ulong recovered_8242b2f8(long *param_1,ulong param_2,long param_3);
ulong recovered_8242b368(long *param_1,ulong param_2,long param_3);
int recovered_8242b3dc(short *param_1,int param_2,ulong param_3,undefined8 param_4,short *param_5);
ulong recovered_8242b4a0(undefined8 *param_1,ulong *param_2,void *param_3,void *param_4,
                        void *param_5);
void recovered_8242b938(long param_1,ulong param_2,ulong param_3,undefined8 param_4);
undefined1
recovered_8242b974(undefined8 *param_1,ulong param_2,long param_3,long param_4,ulong param_5,
                  long param_6);
ulong recovered_8242ba28(undefined8 *param_1,ulong *param_2,void *param_3,void *param_4);
undefined8 recovered_8242ba38(long *param_1,long *param_2);
ulong recovered_8242bac4(undefined8 *param_1,ulong param_2,long param_3,ulong *param_4);
ulong recovered_8242bc1c(undefined8 *param_1,ulong param_2,long param_3,ulong *param_4);
ulong recovered_8242bed4(undefined8 *param_1,ulong param_2,int param_3,long *param_4,
                        undefined *param_5,undefined8 param_6);
ulong recovered_8242c038(long param_1,ulong param_2,long *param_3,ulong *param_4);
ulong recovered_8242c29c(undefined8 *param_1,ulong param_2,char *param_3,ulong param_4,long *param_5
                        ,long param_6,undefined8 param_7);
undefined8 recovered_8242c34c(long *param_1,undefined8 *param_2,void *param_3,undefined1 *param_4);
ulong recovered_8242c3e0(undefined8 *param_1,char *param_2,ulong param_3,long *param_4,void *param_5
                        );
ulong recovered_8242c640(undefined8 *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                        long *param_6,ulong *param_7);
ulong recovered_8242c7e8(undefined8 *param_1,ulong param_2,ulong *param_3);
undefined8 recovered_8242c7ec(long *param_1,long *param_2);
ulong recovered_8242c848(undefined8 *param_1,ulong param_2,ulong *param_3,void *param_4);
ulong recovered_8242c9a8(undefined8 *param_1,ulong param_2,byte *param_3,long *param_4,void *param_5
                        );
ulong recovered_8242cf94(undefined8 *param_1,ulong param_2,ulong *param_3);
ulong recovered_8242cf98(undefined8 *param_1,ulong param_2,ulong *param_3);
undefined8 recovered_8242cfa4(undefined8 *param_1,long param_2,byte *param_3,long param_4);
ulong recovered_8242d048(undefined8 *param_1,ulong param_2,char *param_3,ulong param_4,long *param_5
                        );
undefined8
recovered_8242d144(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4);
ulong recovered_8242d158(long param_1,char *param_2,long *param_3);
ulong recovered_8242d234(undefined8 *param_1,ulong param_2,byte *param_3,long *param_4,void *param_5
                        );
int recovered_8242d358(long param_1,long param_2,ulong param_3,long param_4,undefined8 *param_5,
                      undefined4 *param_6);
void recovered_8242d588(undefined8 *param_1,undefined1 *param_2,long param_3);
undefined4 recovered_8242d5ac(long param_1,undefined8 *param_2,uint *param_3);
bool recovered_8242d690(long param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,
                       uint param_5,long param_6);
long recovered_8242d764(ulong param_1);
void recovered_8242d788(long param_1,long param_2,ulong param_3);
void recovered_8242da90(undefined1 *param_1,long param_2);
void recovered_8242daac(undefined1 *param_1,ulong param_2,long param_3);
void recovered_8242db08(undefined1 *param_1);
void recovered_8242db38(uint *param_1,undefined1 *param_2,ulong param_3);
void recovered_8242dbe0(uint *param_1,long param_2);
void recovered_8242dc94(undefined1 *param_1,ulong param_2,undefined1 *param_3,ulong param_4,
                       long param_5);
void recovered_8242dd00(uint *param_1,undefined1 *param_2,ulong param_3);
void recovered_8242ddec(uint *param_1,long param_2);
undefined8
recovered_8242de48(undefined1 *param_1,ulong param_2,undefined1 *param_3,ulong param_4,
                  undefined1 *param_5,ulong param_6,long param_7,ulong param_8);
void recovered_8242dfbc(undefined1 *param_1,long param_2);
void recovered_8242dfd0(undefined1 *param_1,undefined1 *param_2,long param_3);
undefined8
recovered_8242dfe8(int *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,ulong param_5,
                  undefined1 *param_6,ulong param_7,undefined1 *param_8,ulong param_9,
                  undefined8 param_10,uint param_11,undefined1 *param_12);
bool recovered_8242e5d0(int *param_1);
void recovered_8242e61c(ulong *param_1,ulong param_2);
void recovered_8242e668(long param_1,undefined1 *param_2,ulong param_3);
void recovered_8242e75c(undefined1 *param_1,long param_2);
void recovered_8242e7e8(undefined1 *param_1,ulong param_2,undefined1 *param_3,ulong param_4);
void recovered_8242e8c4(undefined8 *param_1,undefined8 param_2);
void recovered_8242e8cc(uint *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_8242e920(long param_1,uint *param_2);
void recovered_8242e9c8(long param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_8242eb74(uint *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_8242ebc8(long param_1,undefined1 *param_2,undefined1 *param_3);
undefined8
recovered_8242edb4(uint *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,long param_5);
undefined8
recovered_8242ef1c(uint *param_1,undefined1 *param_2,long param_3,undefined1 *param_4,ulong param_5);
bool recovered_8242f0b4(byte *param_1,byte *param_2,long param_3);
undefined8 recovered_8242f0f0(uint *param_1,undefined8 param_2,long param_3,ulong param_4);
undefined8
recovered_8242f0f8(uint *param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5);
undefined8 recovered_8242f284(uint *param_1,undefined8 param_2,long param_3,ulong param_4);
ulong recovered_8242f28c(int *param_1,char *param_2,undefined1 *param_3,ulong param_4);
bool recovered_8242f344(char *param_1);
undefined8
recovered_8242f3f8(int *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
                  undefined1 *param_5,long param_6);
void recovered_8242f488(undefined1 *param_1,long param_2);
undefined8
recovered_8242f4dc(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5);
void recovered_8242f550(undefined1 *param_1);
undefined8 recovered_8242f560(int *param_1,undefined8 *param_2);
undefined8
recovered_8242f5d4(int *param_1,long param_2,undefined1 *param_3,ulong param_4,byte *param_5,
                  undefined1 *param_6);
undefined8 recovered_8242f6b8(int *param_1,uint *param_2,undefined8 param_3,long param_4);
undefined8 recovered_8242f6f4(int *param_1,uint *param_2,undefined8 param_3,long param_4);
undefined8
recovered_8242f730(int *param_1,long param_2,undefined1 *param_3,ulong param_4,byte *param_5,
                  undefined1 *param_6);
void recovered_8242f8f0(undefined8 param_1,undefined1 *param_2,long param_3);
undefined8
recovered_8242f8fc(int *param_1,long param_2,ulong param_3,undefined1 *param_4,ulong param_5,
                  undefined1 *param_6,undefined1 *param_7);
bool recovered_8242fbec(long param_1,ulong param_2);
bool recovered_8242fcf4(byte *param_1,long param_2);
undefined8 recovered_8242fd24(undefined1 *param_1,long param_2);
void recovered_8242fd4c(uint *param_1,uint *param_2);
uint recovered_8242ff00(uint *param_1);
void recovered_8242ff0c(long param_1,long param_2,ulong param_3);
void recovered_8243013c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,long param_5,
                       long param_6);
void recovered_824301b4(undefined1 *param_1,long param_2,ulong param_3);
void recovered_82430200(long param_1,long param_2,long param_3);
void recovered_8243024c(long param_1,long param_2,long param_3,int param_4);
void recovered_8243038c(ulong *param_1);
void recovered_8243043c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4);
uint recovered_824304dc(ulong param_1);
uint recovered_8243051c(uint param_1,uint param_2);
void recovered_82430558(long param_1,long param_2);
void recovered_824305ac(undefined1 *param_1);
void recovered_82430608(undefined1 *param_1);
bool recovered_82430664(byte *param_1);
undefined8
recovered_824306c8(int *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
                  undefined1 *param_5,byte *param_6,undefined1 *param_7,undefined1 *param_8);
undefined8
recovered_824309ec(undefined1 *param_1,char *param_2,char *param_3,ulong param_4,long param_5,
                  long param_6);
bool recovered_82430ab4(char *param_1);
void recovered_82430ad0(undefined1 *param_1,long param_2);
void recovered_82430ae4(undefined1 *param_1,undefined1 *param_2,long param_3);
undefined8
recovered_82430b04(char *param_1,int param_2,long param_3,char *param_4,undefined1 *param_5);
undefined8 recovered_82430c24(char *param_1);
bool recovered_82430d2c(char *param_1);
undefined8 recovered_82430d94(ulong param_1,long *param_2);
undefined8 recovered_82430dc8(char *param_1,undefined1 *param_2,ulong param_3,ulong *param_4);
void recovered_82431000(undefined8 *param_1,undefined8 param_2);
undefined8
recovered_82431008(char *param_1,ulong param_2,char *param_3,long param_4,ulong param_5,
                  undefined1 *param_6);
bool recovered_82431304(char *param_1,char *param_2,long param_3);
bool recovered_82431338(char *param_1,long param_2);
undefined8 recovered_82431364(char *param_1,ulong *param_2);
undefined8 recovered_824313e8(char *param_1,int param_2,long param_3,undefined1 *param_4);
undefined8 recovered_8243146c(char *param_1,long param_2,undefined1 *param_3);
undefined8 recovered_82431588(char *param_1,ulong param_2,long *param_3);
ulong recovered_824315f8(long *param_1,undefined8 *param_2,ulong param_3,byte param_4,ulong param_5,
                        long *param_6);
ulong recovered_82431908(short *param_1,char *param_2,undefined1 *param_3);
ulong recovered_82431a10(long param_1,long param_2);
ulong recovered_82431ab0(long *param_1,ulong param_2,long param_3);
int recovered_82431ad0(long *param_1,ulong param_2,void *param_3);
undefined8 recovered_82431b54(long *param_1);
ulong recovered_82431bd4(ulong *param_1,undefined8 *param_2,ulong param_3,byte *param_4,
                        long *param_5);
void recovered_8243218c(undefined8 *param_1,undefined1 *param_2,long param_3);
ulong * recovered_824321b0(ulong *param_1,int param_2,void *param_3);
long recovered_824321f0(long param_1,long param_2);
undefined4 recovered_82432294(long param_1,long param_2,uint param_3,void *param_4);
undefined8 recovered_8243242c(long *param_1);
ulong recovered_82432430(long *param_1,undefined8 param_2,void *param_3);
int recovered_824326f4(long *param_1,void *param_2);
void recovered_824328dc(long param_1);
int recovered_824328fc(long *param_1,ulong param_2,undefined8 param_3,void *param_4,uint *param_5);
void recovered_824329d8(long param_1);
byte recovered_82432a34(long param_1);
ushort recovered_82432a58(int *param_1);
ulong recovered_82432a80(long param_1,char *param_2,ulong param_3,uint param_4,long *param_5,
                        undefined4 *param_6);
undefined8 recovered_82432b1c(long *param_1);
undefined8
recovered_82432b80(char *param_1,ulong param_2,undefined1 *param_3,ulong param_4,ulong *param_5);
int recovered_82432d8c(long param_1,ulong param_2,ulong param_3,uint param_4,long *param_5,
                      undefined4 *param_6);
ulong recovered_82433190(long param_1,int *param_2,ulong param_3,long param_4,ulong param_5,
                        long *param_6,ulong *param_7);
ulong recovered_8243323c(long param_1,int *param_2,long *param_3,undefined *param_4,
                        undefined8 param_5);
ulong recovered_824332ec(long *param_1,char *param_2,ulong param_3,undefined1 *param_4,long *param_5
                        ,void *param_6);
ulong recovered_8243337c(long param_1,char *param_2,ulong param_3,long *param_4,int *param_5);
void recovered_824334a4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined1 *param_4);
undefined8 recovered_82433508(long *param_1,undefined8 param_2);
void recovered_82433598(long *param_1,char *param_2,ulong param_3,undefined2 param_4,
                       undefined8 param_5,long *param_6,void *param_7);
ulong recovered_82433610(long *param_1,char *param_2,ulong param_3,undefined1 *param_4,long *param_5
                        ,void *param_6);
ulong recovered_824336a0(long *param_1,ulong param_2,long *param_3);
ulong recovered_824342d0(long *param_1,char *param_2,ulong param_3,char *param_4,ulong param_5,
                        undefined8 param_6,long *param_7);
ulong recovered_82434730(long param_1,char *param_2,ulong param_3,long *param_4,undefined4 *param_5,
                        byte *param_6);
ulong recovered_82434874(long *param_1,char *param_2,ulong param_3,long *param_4,long *param_5);
undefined8
recovered_824349e4(long param_1,undefined1 *param_2,undefined8 *param_3,long param_4,byte param_5,
                  void *param_6,ulong param_7,long *param_8);
ulong recovered_82434bb0(long *param_1,long *param_2,undefined8 *param_3);
ulong recovered_82434c74(long *param_1,long *param_2,undefined8 param_3,long *param_4);
void recovered_82434dfc(long *param_1,long *param_2,long *param_3,undefined1 *param_4);
ulong recovered_82435098(long *param_1,long *param_2);
undefined8
recovered_824351d4(short *param_1,ulong param_2,uint param_3,char *param_4,undefined1 *param_5);
ulong recovered_824353e4(long *param_1,ulong param_2,undefined1 *param_3);
ulong recovered_824354dc(long *param_1,ulong param_2,void *param_3);
undefined8 recovered_824355f8(long *param_1,long param_2,long *param_3);
void recovered_8243565c(void *param_1,long param_2,ulong param_3,ulong param_4,char *param_5,
                       ulong param_6,long param_7,long param_8,long *param_9);
undefined8 recovered_8243576c(long param_1,long param_2,long *param_3,void *param_4,ulong param_5);
ulong recovered_824357dc(undefined8 *param_1,ulong param_2,long *param_3,ulong *param_4);
undefined8 recovered_82435a74(long param_1,long param_2,long param_3,long param_4);
ulong recovered_82435b28(undefined8 *param_1,ulong param_2,ulong *param_3);
ulong recovered_82435b50(long param_1,byte *param_2,long *param_3,long param_4,ulong *param_5);
undefined4 recovered_82435bf8(long param_1,long *param_2,ulong *param_3);
undefined8 recovered_82435c68(long *param_1);
undefined8 recovered_82435c90(long *param_1,long *param_2,void *param_3,undefined1 *param_4);
ulong recovered_82435cf8(long *param_1,ulong param_2,ulong *param_3);
ulong recovered_82435d0c(long *param_1,ulong param_2,ulong *param_3);
char * recovered_8243602c(uint param_1);
undefined4
recovered_82436050(long param_1,ulong param_2,ulong param_3,long *param_4,void *param_5,int *param_6
                  );
undefined1 recovered_824365d8(long *param_1,long param_2,ulong param_3,long *param_4,long *param_5);
bool recovered_8243669c(char *param_1,char *param_2,long param_3);
ulong recovered_824366d0(undefined8 *param_1,long param_2,int *param_3,char *param_4,long *param_5,
                        int *param_6,int *param_7);
bool recovered_82437c74(long param_1,int param_2);
bool recovered_82437cc8(char *param_1,long param_2);
ulong recovered_82437cf4(undefined8 *param_1,long param_2,int *param_3,long *param_4,int *param_5,
                        int *param_6);
ulong recovered_82437d08(undefined8 *param_1,long param_2,long *param_3,long param_4,int *param_5,
                        undefined8 *param_6,long *param_7,void *param_8,int *param_9);
int recovered_82438f04(undefined8 *param_1,long param_2,long param_3,int *param_4);
void recovered_82439010(undefined8 *param_1,long param_2,long *param_3,long param_4,int *param_5,
                       long *param_6,void *param_7,int *param_8);
bool recovered_82439040(undefined8 *param_1,ulong param_2,void *param_3,ulong param_4);
bool recovered_824390a8(undefined8 *param_1,ulong param_2,void *param_3,ulong param_4);
undefined8 recovered_82439110(undefined8 *param_1);
bool recovered_82439138(undefined8 *param_1,ulong param_2,void *param_3,ulong param_4,long param_5,
                       ulong param_6);
bool recovered_8243922c(undefined8 *param_1,ulong param_2,void *param_3,ulong param_4,long param_5,
                       ulong param_6);
long recovered_82439340(long param_1);
bool recovered_82439364(long param_1,ulong param_2);
undefined4
recovered_82439398(undefined8 *param_1,ulong param_2,char *param_3,ulong param_4,ulong *param_5);
undefined8
recovered_824395dc(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,
                  ulong param_6,uint *param_7);
uint recovered_824396b0(long param_1,long param_2);
bool recovered_824396d4(char *param_1,ulong param_2);
undefined8
recovered_82439760(undefined8 *param_1,ulong param_2,ulong param_3,char *param_4,ulong param_5,
                  undefined1 *param_6);
undefined4
recovered_82439810(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,void *param_5,
                  long param_6,ulong param_7);
void recovered_82439868(ulong *param_1,ulong param_2);
ulong recovered_824398f0(ulong param_1,long param_2,long param_3);
bool recovered_82439934(char *param_1,ulong param_2);
bool recovered_824399b0(long param_1,ulong param_2);
undefined8 recovered_82439a0c(ulong param_1,ulong param_2,ulong *param_3);
undefined1 recovered_82439a40(long *param_1,long param_2);
void recovered_82439adc(uint param_1,ulong *param_2,undefined8 *param_3);
bool recovered_82439b30(uint param_1,int *param_2);
undefined4
recovered_82439b78(undefined8 *param_1,ulong param_2,long param_3,long param_4,ulong *param_5,
                  int *param_6);
undefined8 recovered_82439c7c(undefined8 *param_1,long param_2,long param_3,long param_4);
undefined4
recovered_82439cdc(undefined8 *param_1,ulong param_2,long param_3,void *param_4,long param_5);
undefined4
recovered_82439d3c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,long param_7);
undefined4
recovered_82439e58(undefined8 *param_1,undefined8 param_2,int param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  long param_9);
void recovered_82439f30(undefined8 *param_1,undefined8 param_2);
void recovered_8243a19c(char *param_1,long param_2);
void recovered_8243a254(int param_1);
void recovered_8243a2e0(void);
void recovered_8243a2e8(void);
void recovered_8243a2f0(char *param_1);
void recovered_8243a354(void);
void recovered_8243a378(char *param_1);
void recovered_8243a3a4(void);
bool recovered_8243a3c8(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_8243a440(void);
void recovered_8243a444(void);
undefined8 recovered_8243a448(void);
undefined4 * recovered_8243a450(byte *param_1,char *param_2);
undefined8 recovered_8243a68c(undefined8 param_1,undefined8 param_2);
undefined8 recovered_8243a6dc(long param_1,ulong param_2);
undefined4 * recovered_8243a764(byte *param_1,char *param_2,int *param_3);
undefined8 recovered_8243a798(int *param_1);
ulong recovered_8243a7dc(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4);
uint recovered_8243a910(int *param_1);
long recovered_8243a9f4(char *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_8243ab04(int *param_1,ulong param_2,int param_3);
undefined8 recovered_8243ab98(long param_1);
undefined8 recovered_8243abbc(int *param_1);
undefined1 recovered_8243ac30(long param_1);
undefined1 recovered_8243ac3c(long param_1);
void recovered_8243ac48(long param_1);
uint recovered_8243ac5c(uint param_1,long param_2);
undefined8 recovered_8243ac80(long param_1);
undefined8 recovered_8243acb8(undefined8 param_1);
undefined8 recovered_8243acfc(long param_1,long param_2);
undefined8 recovered_8243ad98(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void recovered_8243adf8(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_8243ae98(long param_1,long param_2,long param_3);
undefined8 recovered_8243aec4(void);
void recovered_8243aec8(void);
undefined8 recovered_8243aecc(void);
undefined8 recovered_8243aed0(void);
undefined8 recovered_8243aed4(void);
int recovered_8243aed8(char *left,char *right,ulong count);
char * recovered_8243af08(int param_1);
undefined8 recovered_8243afa8(void);
undefined8 recovered_8243afac(void);
void recovered_8243afb0(void);
bool recovered_8243afc4(int param_1);
void recovered_8243b090(long param_1);
undefined8 recovered_8243b0a4(undefined8 *param_1);
int recovered_8243b100(long param_1,int param_2);
void recovered_8243b164(void);
undefined8 recovered_8243b178(void);
void recovered_8243b180(long param_1);
long recovered_8243b190(long param_1);
long recovered_8243b1bc(ulong param_1);
long recovered_8243b1ec(ulong param_1);
void recovered_8243b1f0(long param_1);
void recovered_8243b208(long param_1);
void recovered_8243b220(long param_1);
void recovered_8243b238(long param_1);
undefined8 recovered_8243b250(void);
uint recovered_8243b258(uint *param_1);
void recovered_8243b268(ulong *param_1);
void recovered_8243b278(void);
long recovered_8243b27c(ulong param_1);
void recovered_8243b324(long param_1);
void recovered_8243b354(long param_1);
long recovered_8243b394(long param_1);
long recovered_8243b3c4(long param_1);
void recovered_8243b3cc(void);
void recovered_8243b42c(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_8243b44c(undefined8 *param_1);
void recovered_8243b4b0(void);
void recovered_8243b4e0(undefined8 *param_1);
void recovered_8243b4f4(undefined8 *param_1);
void recovered_8243b520(undefined8 *param_1);
void recovered_8243b52c(void);
undefined8 recovered_8243b538(long param_1);
undefined8 recovered_8243b564(undefined8 *param_1);
undefined8 recovered_8243b600(long param_1);
undefined8 recovered_8243b60c(void);
void recovered_8243b614(void);
long recovered_8243b620(long *param_1,undefined8 param_2,undefined8 *param_3);
bool recovered_8243b660(undefined8 *param_1,undefined8 *param_2);
void recovered_8243b6ec(void);
undefined8 recovered_8243b6f0(void);
int recovered_8243b6f8(int value);
int recovered_8243b708(int value);
int recovered_8243b740(int value);
bool recovered_8243b75c(ulong param_1);
bool recovered_8243b774(uint param_1);
bool recovered_8243b78c(ulong param_1);
bool recovered_8243b7a4(ulong param_1);
double recovered_8243b7bc(double value);
float recovered_8243b87c(float value);
double recovered_8243b898(double value);
uint128 recovered_8243b89c(long param_1,long param_2);
double recovered_8243b8ac(double value);
long recovered_8243b8f8(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_8243ba3c(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_8243ba40(long param_1,undefined8 *param_2,undefined2 *param_3);
ulong * recovered_8243bc18(uint param_1,long *param_2);
ulong recovered_8243bd0c(undefined8 *param_1);
ulong recovered_8243bd40(byte *param_1,long param_2);
ulong recovered_8243bd68(undefined8 *param_1);
undefined4 recovered_8243bde8(byte *param_1,ulong param_2);
bool recovered_8243be9c(byte *param_1,ulong param_2);
bool recovered_8243c004(byte *param_1,uint *******param_2,uint *param_3);
undefined8 * recovered_8243e1b4(undefined8 *param_1,undefined8 *param_2);
bool recovered_8243e1e0(uint *param_1,long *param_2,long *param_3,long *param_4);
long * recovered_8243edf4(long *param_1,long *param_2);
long recovered_8243ee44(long param_1);
bool recovered_8243ee84(byte *param_1,uint *param_2);
bool recovered_8243efb0(byte *param_1,long param_2,ulong param_3,uint param_4);
bool recovered_8243f3c4(uint *param_1,char *param_2,long param_3);
bool recovered_8243f3fc(uint *param_1,byte *param_2,byte *param_3,ulong param_4);
bool recovered_8243f4b4(byte *param_1,long param_2,ulong param_3,uint param_4);
byte recovered_8243f4b8(byte *param_1,long param_2,ulong param_3,uint param_4);
bool recovered_8243f718(byte *param_1,long param_2,uint param_3,uint param_4);
bool recovered_8243f8a8(byte *param_1,undefined1 *param_2,uint param_3,uint param_4);
long * recovered_8243fc40(byte *param_1);
void recovered_8243fcec(long param_1);
void recovered_8243fd28(long *param_1,ulong param_2,undefined1 *param_3);
uint recovered_8243fd30(uint param_1,uint param_2);
void recovered_8243fda4(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_8243fe28(long *param_1,ulong param_2);
void recovered_8243fe90(long *param_1,ulong param_2);
long recovered_8243ff04(ulong param_1);
long * recovered_8243ff10(long *param_1,ulong param_2);
undefined8 recovered_8243ff3c(byte *param_1,int param_2,uint param_3,byte *param_4);
undefined8 recovered_82440014(undefined8 *param_1,byte *param_2);
void recovered_82440190(long param_1,ulong param_2,ulong *param_3,uint *param_4);
bool recovered_824401c0(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5);
void recovered_82440264(undefined1 *param_1,undefined1 *param_2);
bool recovered_824402f0(long param_1,ulong param_2,ulong param_3,uint *param_4);
uint recovered_8244032c(uint *param_1);
long recovered_82440338(long *param_1,undefined8 *param_2);
void recovered_8244039c(long *param_1,ulong param_2);
long recovered_82440410(long param_1);
long * recovered_82440420(long *param_1,ulong param_2,undefined1 *param_3);
long recovered_8244044c(long *param_1,undefined1 *param_2,undefined1 *param_3);
long * recovered_82440460(long *param_1,ulong param_2);
void recovered_8244048c(long *param_1,ulong param_2);
long recovered_824404f0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
bool recovered_824405e8(long *param_1,long *param_2,ulong param_3);
undefined8 recovered_82440dc0(long *param_1,uint param_2,uint *param_3);
undefined8 recovered_82440e3c(long *param_1,long param_2,long param_3,long *param_4,ulong param_5);
long recovered_82440fcc(long param_1);
uint recovered_82440fec(long param_1,ulong param_2);
long recovered_82441050(long *param_1,undefined1 *param_2);
uint recovered_824410b8(long *param_1,long param_2,uint *param_3);
long recovered_824411b4(long *param_1,undefined1 *param_2);
undefined8 recovered_8244121c(long *param_1,uint *param_2,undefined8 param_3);
long * recovered_82441380(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_824413ac(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_8244142c(long *param_1,ulong param_2);
void recovered_82441490(long *param_1,ulong param_2);
long recovered_82441504(long param_1);
undefined8 * recovered_82441514(undefined8 *param_1,undefined8 *param_2);
void recovered_82441558(long *param_1,ulong param_2,undefined2 *param_3);
long * recovered_82441560(long *param_1,long *param_2);
void recovered_824415b0(long *param_1,ulong param_2,undefined2 *param_3);
void recovered_82441630(long *param_1,ulong param_2);
void recovered_82441694(long *param_1,ulong param_2);
long recovered_82441708(long param_1);
long recovered_82441718(long *param_1,undefined4 *param_2);
long recovered_8244177c(long *param_1,undefined4 *param_2);
long * recovered_824417e0(long *param_1,undefined4 *param_2,undefined4 *param_3);
long recovered_82441818(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4);
long * recovered_82441920(long *param_1);
long * recovered_8244194c(long *param_1);
uint recovered_82441970(uint param_1,byte *param_2,long param_3);
void recovered_82441a00(long *param_1,undefined8 *param_2);
void recovered_82441a60(long *param_1);
void recovered_82441ab4(long *param_1,ulong param_2);
int recovered_82441b2c(long param_1);
bool recovered_82441b60(long *param_1,long *param_2,ulong param_3);
bool recovered_82441c1c(long param_1,void *param_2,ulong param_3);
undefined8
recovered_82441c78(undefined4 param_1,char *param_2,char *param_3,byte *param_4,ulong param_5,
                  ulong param_6);
long * recovered_82441e48(long *param_1);
long recovered_82441e6c(long *param_1,long param_2,undefined1 *param_3,long param_4);
void recovered_82441e74(long *param_1,uint param_2);
void recovered_82441eac(long *param_1,long param_2,uint param_3);
long recovered_82441ecc(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
long recovered_82441fc4(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
long * recovered_824420bc(long *param_1,ulong param_2);
void recovered_824420e8(long *param_1,ulong param_2);
void recovered_82442150(long *param_1,ulong param_2);
long recovered_824421c4(long param_1);
long * recovered_824421d4(long *param_1,undefined1 *param_2,undefined1 *param_3);
long * recovered_8244220c(long *param_1);
undefined8 * recovered_8244260c(undefined4 param_1,undefined1 *param_2,long param_3);
undefined8 * recovered_8244289c(undefined4 param_1,byte *param_2);
void recovered_8244298c(float param_1,long *param_2);
byte recovered_824429a8(long *param_1,byte *param_2,undefined8 *param_3);
ulong recovered_82442bd0(double param_1,undefined8 *param_2);
int * recovered_82442c08(undefined8 *param_1,undefined4 param_2);
void recovered_82442d7c(long *param_1,byte *param_2);
float * recovered_82442eb0(long param_1);
void recovered_82442f30(long *param_1,ulong param_2);
void recovered_82442f7c(undefined8 *param_1);
void recovered_82443018(long param_1);
undefined8 *
recovered_824430b4(double param_1,long *param_2,byte *param_3,uint param_4,uint param_5,uint param_6
                  );
void recovered_82443534(undefined8 *param_1);
void recovered_8244356c(long *param_1);
void recovered_824435cc(long *param_1,ulong param_2);
void recovered_82443658(int *param_1,long *param_2,long *param_3);
long recovered_824439a0(long param_1);
long * recovered_824439c4(long *param_1);
void recovered_82443a18(long *param_1);
uint recovered_82443a8c(long *param_1,long param_2);
long * recovered_82443a9c(long *param_1);
long * recovered_82443ac0(long *param_1);
undefined8 * recovered_82443af0(undefined8 *param_1);
void recovered_82443b40(undefined8 *param_1);
ulong recovered_82443b54(long param_1,long *param_2);
void recovered_824442c8(int *param_1,double param_2,double param_3,long param_4,undefined4 param_5);
uint128 recovered_824445c0(long param_1);
uint128 recovered_824445cc(long param_1);
uint128 recovered_824445d8(long param_1);
uint128 recovered_824445e0(long param_1);
undefined8 recovered_824445e8(void);
long * recovered_824445f0(long *param_1);
void recovered_8244461c(undefined8 *param_1);
long * recovered_8244463c(long *param_1);
long * recovered_82444668(long *param_1);
long * recovered_82444698(long *param_1,long *param_2);
undefined8 recovered_824446f4(long param_1,undefined4 param_2,undefined8 *param_3);
long * recovered_82444760(long *param_1,long *param_2);
void recovered_824447c0(long *param_1,long param_2);
long recovered_824447ec(long *param_1,byte *param_2);
ulong recovered_82444854(long param_1,byte *param_2);
ulong recovered_8244486c(byte *param_1,long param_2);
void recovered_824448a4(long *param_1,ulong param_2,undefined8 *param_3);
void recovered_824448ac(long *param_1,ulong param_2,undefined8 *param_3);
long recovered_82444930(long *param_1,undefined8 *param_2);
void recovered_82444998(long *param_1,ulong param_2);
void recovered_82444a18(undefined8 *param_1);
undefined8 * recovered_82444a28(undefined8 *param_1,undefined8 *param_2);
bool recovered_82444a58(undefined1 param_1 [16],double param_2,long param_3,uint param_4,
                       double *param_5,long *param_6,int param_7);
void recovered_82445338(int *param_1,undefined8 param_2,long *param_3);
long recovered_82445588(long *param_1,byte *param_2);
long recovered_824455bc(long *param_1,byte *param_2);
long recovered_82445644(long *param_1,byte *param_2);
ulong recovered_824456b0(long param_1,byte *param_2);
void recovered_824456e4(long *param_1);
long recovered_82445714(long *param_1,undefined4 *param_2,undefined2 *param_3);
void recovered_82445790(long *param_1,long param_2);
void recovered_824457d0(long *param_1,ulong param_2);
ulong recovered_82445838(ulong param_1);
void recovered_82445854(long *param_1);
void recovered_824458b8(long *param_1,ulong param_2);
long recovered_8244592c(long param_1);
void recovered_8244593c(undefined8 *param_1,undefined8 *param_2);
void recovered_82445958(long *param_1,undefined8 *param_2);
pf_point recovered_824459a8(double *first,double *last);
void recovered_824459c4(long *param_1,double *param_2);
uint128 recovered_82445a38(double *param_1,double *param_2);
void recovered_82445a64(long *param_1,double *param_2);
void recovered_82445b00(long *param_1);
long * recovered_82445b7c(long *param_1,ulong param_2);
long * recovered_82445ba8(long *param_1,ulong param_2);
void recovered_82445bd4(long *param_1,ulong param_2);
void recovered_82445c38(long *param_1,ulong param_2);
long recovered_82445cac(long param_1);
void recovered_82445cbc(long *param_1,ulong param_2);
long recovered_82445d28(long *param_1,undefined1 *param_2);
void recovered_82445d8c(long *param_1,ulong param_2);
long recovered_82445e00(ulong param_1);
long recovered_82445e0c(long *param_1,undefined1 *param_2);
long recovered_82445e70(long *param_1,long param_2,undefined1 *param_3);
void recovered_82445f18(long param_1,double *param_2);
void recovered_82445f88(long *param_1,undefined8 *param_2);
void recovered_82446020(void *builder,pf_point *first,pf_point *control,pf_point *last,int depth);
undefined8 * recovered_82446138(undefined8 *param_1);
void recovered_82446180(undefined8 *param_1);
bool recovered_82446194(long param_1,long *param_2);
void recovered_82446a70(int *param_1,undefined8 param_2,long param_3,uint param_4);
uint128 recovered_82446e60(long param_1);
uint128 recovered_82446e68(long param_1);
uint128 recovered_82446e70(long param_1);
uint128 recovered_82446e78(void);
undefined8 recovered_82446e80(void);
void recovered_82446e88(undefined8 *param_1);
long * recovered_82446ea8(long *param_1);
void recovered_82446ed4(long *param_1);
long * recovered_82446f28(long *param_1);
long * recovered_82446f50(long *param_1);
long * recovered_82446f54(long *param_1);
long * recovered_82446f7c(long *param_1);
void recovered_82446fa8(long *param_1);
long recovered_82446ffc(long param_1);
long * recovered_82447038(long *param_1);
ulong recovered_82447068(long *param_1,char *param_2,ulong param_3);
void recovered_824470f4(long *param_1,ulong param_2);
void recovered_8244716c(long *param_1,undefined1 param_2);
ulonglong recovered_824471d0(long param_1);
void recovered_824471ec(long *param_1);
bool recovered_82447224(long *param_1,ulong *param_2,undefined8 *param_3);
undefined8 recovered_824472ac(long *param_1,ulong *param_2,int *param_3);
void recovered_82447378(long *param_1,ulong *param_2);
long * recovered_824473c0(long *param_1,long *param_2);
long * recovered_8244740c(long *param_1,long param_2,ulong param_3);
void recovered_82447440(long *param_1,long param_2,ulong param_3);
undefined8 recovered_82447528(long *param_1,long param_2,long *param_3);
long recovered_82447574(long *param_1,long param_2,long param_3);
void recovered_824475e0(long *param_1,ulong param_2);
void recovered_8244768c(long *param_1,undefined8 *param_2,uint param_3);
long recovered_82447784(long *param_1,undefined8 *param_2);
void recovered_8244783c(long *param_1,ulong param_2);
long recovered_824478d0(long param_1);
long recovered_824478e4(long *param_1,undefined8 *param_2);
void recovered_8244791c(long *param_1);
long recovered_8244794c(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_824479c8(long *param_1,long param_2);
long recovered_82447a0c(long *param_1,undefined8 *param_2);
ulong recovered_82447a80(long param_1,undefined8 *param_2);
ulong recovered_82447ab0(undefined8 param_1,undefined8 *param_2);
bool recovered_82447ac8(undefined8 *param_1,undefined8 *param_2);
bool recovered_82447af0(char *param_1,long param_2,char *param_3,long param_4);
void recovered_82447b28(long *param_1,ulong param_2);
ulong recovered_82447b90(ulong param_1);
void recovered_82447bac(long *param_1);
void recovered_82447c10(long *param_1,ulong param_2);
long recovered_82447ca4(long param_1);
undefined8 * recovered_82447cb8(undefined8 *param_1,undefined8 *param_2);
ulonglong recovered_82447cec(undefined8 *param_1,undefined8 *param_2);
long * recovered_82447d08(long *param_1,undefined8 *param_2,undefined8 *param_3);
long * recovered_82447d3c(long *param_1,undefined8 *param_2);
undefined8 recovered_82447d7c(long *param_1,long *param_2,int param_3);
long recovered_824480f4(long param_1);
long * recovered_82448120(long *param_1,long param_2);
long recovered_82448164(long param_1);
long * recovered_82448188(long *param_1);
void recovered_824481b4(long param_1);
void recovered_824481d8(long param_1);
void recovered_82448218(long param_1);
long recovered_82448264(long *param_1,undefined8 *param_2);
void recovered_824482c8(long *param_1,ulong param_2);
long recovered_8244833c(long param_1);
void recovered_8244834c(long *param_1);
int * recovered_82448398(long *param_1,byte *param_2);
ulong recovered_82448408(long param_1,byte *param_2);
void recovered_82448420(long *param_1,long param_2);
void recovered_8244844c(long *param_1,ulong param_2);
ulong recovered_824484ec(ulong param_1);
void recovered_82448508(long *param_1,ulong param_2);
void recovered_824485a0(long *param_1);
ulong recovered_824485c0(double param_1,undefined8 *param_2);
long * recovered_824485f8(long *param_1);
long * recovered_82448624(long *param_1);
void recovered_82448650(long *param_1);
void recovered_824486a4(long *param_1,ulong param_2);
long recovered_82448738(long param_1);
void recovered_8244874c(undefined8 *param_1,undefined8 *param_2);
void recovered_82448768(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_82448a40(byte *param_1,uint param_2,ulong *param_3);
void recovered_82448c88(ulong *param_1);
byte recovered_82448c9c(byte *param_1,undefined1 *param_2,ulong param_3,uint param_4,uint param_5,
                       undefined4 param_6);
undefined8 recovered_82448e00(void *param_1,ulong param_2,ulong param_3,ulong *param_4);
void recovered_82448f38(ulong *param_1);
void recovered_82448f4c(undefined4 param_1,undefined1 *param_2,ulong param_3);
void recovered_82448f74(float param_1,long *param_2);
undefined8
recovered_82448f94(long *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  ulong *param_7);
bool recovered_82449080(long *param_1,byte *param_2,undefined8 *param_3);
void recovered_824490e8(long *param_1);
void recovered_82449108(void *param_1,ulong param_2,uint param_3,ulong param_4,ulong *param_5);
undefined8 recovered_824491ac(void *param_1,ulong param_2,long *param_3,ushort *param_4);
undefined8 recovered_824495ac(ushort *param_1,long param_2,ulong param_3);
bool recovered_82449600(int param_1,int param_2);
uint128 recovered_82449634(uint3 *param_1,int param_2,int param_3);
int recovered_82449754(double param_1);
long * recovered_824497b0(long *param_1,long *param_2);
long * recovered_824497e8(long *param_1,long *param_2);
undefined8 recovered_8244a000(void);
undefined8 recovered_8244a018(byte *param_1,undefined4 *param_2);
undefined8 recovered_8244a180(void);
undefined8 recovered_8244a198(void);
undefined8 recovered_8244a1b0(void);
undefined * recovered_8244a1cc(void);
undefined * recovered_8244a208(ulong param_1);
bool recovered_8244a2b8(long param_1,ulong param_2);
undefined8 recovered_8244a2c4(void);
void recovered_8244a3b0(void *caller);
undefined8 recovered_8244a448(void);
int recovered_8244a464(long param_1);
void recovered_8244a488(int *param_1);
void recovered_8244a4c4(long param_1);
void recovered_8244a4ec(undefined8 *param_1,int param_2);
void recovered_8244a568(long param_1);
ulong recovered_8244a590(undefined1 *param_1,int param_2);
long recovered_8244a654(void);
undefined4 recovered_8244a6c4(void);
undefined8 recovered_8244a72c(void *param_1);
undefined8 recovered_8244a874(void);
void * recovered_8244a9b0(void *channel,uchar *handled);
void recovered_8244aa38(long param_1);
void recovered_8244aa64(long *param_1);
void recovered_8244aad4(long param_1);
uint recovered_8244ab78(uint backgroundRgb,uint foregroundRgb,uint textModeAttribute);
int recovered_8244ad64(void);
undefined8 recovered_8244ad98(int param_1);
ulong recovered_8244ae18(void);
uint recovered_8244b02c(uint ch);
bool recovered_8244b0c4(long param_1,ulong param_2,uchar *param_3);
void recovered_8244b114(uint param_1);
uint recovered_8244b1cc(char *text);
uint recovered_8244b294(void);
byte recovered_8244b5e4(void);
undefined1 recovered_8244b67c(char *param_1);
ulong recovered_8244b6d0(void);
ulong recovered_8244b810(ulong param_1);
void recovered_8244b910(int param_1);
uint recovered_8244b99c(void);
void recovered_8244ba1c(int param_1);
void recovered_8244ba60(void);
uint recovered_8244ba88(void);
int recovered_8244bc48(undefined1 *param_1);
void recovered_8244bc60(void);
void recovered_8244bcc4(const char *format,...);
uint recovered_8244bd00(char *path,void *outInfo);
undefined8 recovered_8244bd84(char *param_1,undefined1 *param_2);
undefined8 recovered_8244be1c(long param_1,int param_2,undefined4 *param_3);
undefined8 recovered_8244be28(int param_1,int param_2);
uint recovered_8244bf14(char *path,void *data,uint size);
int recovered_8244bf9c(long param_1);
undefined8 recovered_8244bfdc(char *param_1,void *param_2,ulong param_3);
undefined8 recovered_8244cb54(long param_1);
undefined8 recovered_8244cb64(char *param_1);
ulong recovered_8244cbfc(void);
void recovered_8244eef0(ulong param_1);
uint recovered_8244ef20(char *outText,uint outTextSize);
undefined8 recovered_8244efa0(uint param_1,char *param_2,uint param_3,int param_4,uint param_5);
bool recovered_8244f0a8(void *param_1,uint param_2,int param_3,undefined8 *param_4);
bool recovered_8244f158(undefined8 *param_1);
undefined8 recovered_8244f1b4(int param_1);
uint recovered_8244f22c(char *text,uint textSize);
uint recovered_8244f284(char *outText,uint outTextSize);
int recovered_8244f370(void);
uint recovered_8244f3ac(void);
uint recovered_8244f3dc(char *path);
undefined8 recovered_8244f42c(char *param_1);
uint recovered_8244ffcc(char *path,void *outImage);
ulong recovered_82450068(long param_1,int param_2,undefined8 param_3,uint *param_4);
void recovered_8245041c(long *param_1);
uint recovered_8245047c(char *path,void *rgbaPixels,uint width,uint height,uint stride,uint format);
void recovered_82450524(long param_1);
uint recovered_8245054c(char *path,uint outputChannels,void *outPcm);
undefined8 recovered_824505e0(long param_1,undefined8 *param_2,undefined8 *param_3);
void * recovered_82450698(char *path,float fontSize);
undefined8 recovered_82450728(char *param_1);
undefined8 recovered_8245085c(undefined4 *param_1);
void recovered_824508a0(char *param_1);
ulong recovered_824508a4(char *param_1,ulong param_2,char *param_3,int param_4);
uint recovered_82450930(char *buffer,ulong capacity,char *prompt,uint flags,uchar *handled);
undefined8
recovered_82450ae4(char *param_1,ulong param_2,char *param_3,int param_4,int param_5,uint param_6,
                  ulong param_7);
ulong recovered_82451088(char *param_1,ulong param_2,char *param_3,uint param_4);
void * recovered_82451118(ulong size);
ulong * recovered_82451144(ulong param_1);
void recovered_8245114c(void *ptr);
void * recovered_82451178(void *ptr,ulong size);
__attribute__((naked)) void recovered_8245125c(void);
void recovered_82451474(void);
void recovered_82451504(void);
void recovered_82451800(void);
uint recovered_82452004(char *path,void *entries,uint entryCapacity,uint *outEntryCount);
undefined8 recovered_82452334(long param_1,undefined1 *param_2);
undefined8 recovered_824525ec(int param_1);
undefined8 recovered_824529a0(int param_1);
int recovered_824529c8(long param_1);
void recovered_82452a08(long param_1,byte *param_2);
undefined8 recovered_82452af8(long param_1,long param_2,uint param_3,uint *param_4);
bool recovered_82452bb4(long param_1,long param_2,undefined8 *param_3);
char * recovered_82452c94(char *param_1);
undefined4 recovered_82452cd0(long *param_1,void *param_2,ulong param_3);
bool recovered_82452e6c(char *param_1,void *param_2,char *param_3);
undefined8
recovered_82452f3c(char *param_1,char *param_2,int param_3,undefined4 param_4,uint param_5);
ulong recovered_82453030(char *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,uint *param_6,undefined4 *param_7);
undefined8 recovered_824533c0(long param_1,long *param_2,uint *param_3);
undefined8
recovered_82453464(long *param_1,uint param_2,char *param_3,int param_4,undefined4 param_5,
                  uint param_6);
int recovered_824535cc(void);
undefined8 recovered_82453614(int param_1,int *param_2);
uint recovered_82453800(void *entries,uint entryCapacity,uint *outEntryCount);
undefined8 recovered_824539fc(void);
char * recovered_824548e4(char *param_1,long param_2,char *param_3,ulong param_4);
char * recovered_824549bc(int param_1);
undefined8
recovered_824549e0(long param_1,uint param_2,long param_3,uint param_4,uint *param_5,uint *param_6);
uint recovered_82454c78(int deviceId);
uint recovered_82454cd0(int deviceId,char *path,void *outInfo);
undefined8 recovered_82454d70(int param_1,long param_2,uint *param_3);
undefined8 recovered_82454db0(int param_1,long param_2,undefined8 param_3,uint *param_4);
undefined8 recovered_82454e70(int param_1,long param_2,uint *param_3);
uint recovered_82454eb0(int deviceId,char *path,void *entries,uint entryCapacity,uint *outEntryCount
                       );
ulong recovered_82454f0c(int param_1,char *param_2,long param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6,uint *param_7,undefined4 *param_8);
uint recovered_82454f8c(int deviceId,char *path,void *data,uint size);
uint recovered_82455034(int deviceId,char *path);
uint recovered_82455074(int deviceId,char *oldPath,char *newPath);
ulong recovered_824550bc(char *param_1,char *param_2);
uint recovered_824555ac(int deviceId,char *path);
undefined8 recovered_82455670(char *param_1,undefined1 *param_2,ulong param_3);
uint recovered_824556ec(byte *param_1);
uint recovered_82455a64(int deviceId,char *path,void *outImage);
uint recovered_82455ab0(int deviceId,char *path,void *rgbaPixels,uint width,uint height,uint stride,
                       uint format);
void * recovered_82455b20(int deviceId,char *path,float fontSize);
uint recovered_82455b90(int deviceId,char *path,uint launchMode);
undefined8 recovered_82455c94(char *param_1,int *param_2,long *param_3);
uint recovered_82455dfc(char *path,uint launchMode);
bool recovered_82456344(void);
uint recovered_82456408(char *oldPath,char *newPath);
void recovered_82456510(char *param_1,char param_2,int *param_3,long param_4,ulong param_5);
uint recovered_824565c4(char *path);
uint recovered_82456648(void *function,void *context,char *name);
undefined4
recovered_824566f4(ulong param_1,undefined8 param_2,undefined8 param_3,char *param_4,char *param_5,
                  ulong param_6);
void recovered_82456720(const char *format,...);
uint recovered_82456778(void *function,void *context,char *name,uint priority);
uint recovered_82456840(uint priority,uint threadCount);
uint recovered_82456944(void);
void recovered_82456964(void);
void recovered_82456a58(void);
void recovered_82456a90(void);
uint recovered_82456b24(uint microseconds);
uint recovered_82456ba4(void);
uint recovered_82456bd0(void *outInfo);
void recovered_82456c10(void);
undefined8 recovered_82456cf0(uint *param_1);
uint recovered_82456e90(void *devices,uint deviceCapacity,uint *outDeviceCount);
void recovered_82456f78(void);
undefined8 recovered_82457dec(ulong param_1);
int recovered_82457e30(void);
bool recovered_82457e64(uint param_1,undefined8 *param_2);
void recovered_8245846c(uint param_1);
undefined8 recovered_8245849c(uint param_1,uint *param_2);
bool recovered_82458680(uint param_1,void *param_2);
void recovered_824586f0(uint param_1);
uint recovered_82458e28(void *outInfo);
void recovered_82458e64(undefined4 *param_1);
uint recovered_82458eb0(uint epochSecondsLow,uint epochSecondsHigh);
void recovered_82458ee4(undefined8 param_1,uint param_2);
uint recovered_82458f50(void *processes,uint processCapacity,uint *outProcessCount);
ulong recovered_82459554(void);
uint recovered_82459558(uint processId);
uint recovered_82459580(void *outStats);
undefined8 recovered_8245969c(void);
long recovered_824596a0(void);
long recovered_82459890(void);
void recovered_82459994(void);
uint recovered_82459998(int deviceId,void *outStats);
long recovered_82459b84(int param_1);
undefined8 recovered_82459c28(long param_1,undefined8 param_2);
undefined4 recovered_82459c64(int param_1,void *param_2,uint param_3);
bool recovered_8245a0b0(char *param_1,long param_2);
undefined8 recovered_8245a0d4(long param_1,int *param_2);
undefined8 recovered_8245a548(undefined4 *param_1,uint param_2,uint *param_3);
undefined8 recovered_8245a60c(void);
void recovered_8245a748(void);
uint recovered_8245a7e0(int param_1,uint param_2,int param_3,void *param_4,uint param_5);
undefined8
recovered_8245a88c(long param_1,uint param_2,int param_3,uint param_4,int *param_5,long *param_6);
uint recovered_8245a8e0(uint drive,uint sector,void *buffer,ulong count);
undefined8 recovered_8245ac58(int param_1,uint param_2,int param_3,void *param_4,uint param_5);
ulong recovered_8245ad3c(uint param_1);
undefined8 recovered_8245ae08(ulong param_1,ulong param_2,void *param_3,ulong param_4);
undefined8 recovered_8245ae10(undefined8 param_1,ulong param_2,uint param_3);
uint recovered_8245afd8(void *outInfo);
uint recovered_8245b128(void *buffer,uint capacity,uint *outFrameBytes);
undefined8 recovered_8245b25c(ulong *param_1,undefined4 param_2,ulong param_3,uint *param_4);
void recovered_8245b3d8(uint *param_1);
uint recovered_8245b490(void *pf_argument_frame,uint frameBytes);
undefined8 recovered_8245b5c4(void);
undefined8 recovered_8245b618(void);
undefined8 recovered_8245b66c(undefined8 param_1,long param_2);
undefined8 recovered_8245b6e0(undefined8 param_1);
undefined8 recovered_8245b748(void);
undefined8 recovered_8245b79c(long param_1);
uint recovered_8245b80c(void *outInfo);
uint recovered_8245b8f0(void *commands,uint commandCount);
uint recovered_8245ba30(char *title,uint width,uint height);
undefined8 recovered_8245bce8(uint param_1,uint param_2,uint *param_3,uint *param_4);
char * recovered_8245bdc4(int param_1);
void recovered_8245be08(long param_1,byte *param_2);
void recovered_8245beb4(ulong *param_1);
uint recovered_8245bef0(uint id,char *title,void *rgbaPixels,uint width,uint height,uint stride,
                       uint clearRgb);
void recovered_8245bf64(int param_1,byte *param_2,void *param_3,ulong param_4,uint param_5,
                       uint param_6,uint param_7);
undefined8 recovered_8245c0e4(int param_1,long param_2,ulong *param_3);
undefined8 recovered_8245c2c8(ulong param_1,int param_2,uint param_3,long *param_4);
uint recovered_8245c30c(uint id);
uint recovered_8245c34c(void *windows,uint windowCapacity,uint *outWindowCount);
ulong recovered_8245c3f8(ulong param_1,undefined8 *param_2);
uint recovered_8245c4e0(uint id,int x,int y,uint flagMask,uint flagValues);
uint recovered_8245c554(uint id,uint transparency,uint shadowIntensity);
uint recovered_8245c5b4(uint id,uint mode,uint effectRange);
uint recovered_8245c61c(uint id,uint width,uint height);
uint recovered_8245c688(uint id,void *outWindow);
undefined8 recovered_8245c6e0(int param_1,void *param_2,ulong param_3,uint *param_4);
uint recovered_8245c904(uint id,char *title,void *rgbaPixels,uint width,uint height,uint stride,
                       uint clearRgb,void *outWindow);
void recovered_8245c9b8(int param_1,byte *param_2);
ulong recovered_8245caf0(int param_1,void *param_2,uint param_3,undefined4 *param_4);
uint recovered_8245cb88(uint id,char *fileMenu,char *editMenu,char *windowMenu);
uint recovered_8245cc40(uint id,uint menuKind,uint menuIndex);
uint recovered_8245ccac(uint id,int x,int y,uint buttons,uint flags);
uint recovered_8245cd94(uint id,void *outInfo);
bool recovered_8245ce08(uint param_1,int *param_2);
bool recovered_8245ce98(int param_1,undefined8 *param_2);
undefined8 recovered_8245cf14(int param_1,int param_2);
ulong recovered_8245cf88(int param_1);
bool recovered_8245d0d8(int param_1);
bool recovered_8245d134(long *param_1,byte *param_2,uint param_3,undefined8 *param_4);
uint recovered_8245d25c(uint param_1,int param_2);
uint recovered_8245d2a8(uint param_1,int param_2);
uint recovered_8245d348(char *text,uint maxChars,uint scale,uint rgba,void *outImage);
bool recovered_8245d634(char *param_1);
bool recovered_8245daa8(long param_1,ulong param_2,ulong param_3);
void recovered_8245dae0(long param_1);
undefined8 recovered_8245db54(uint *param_1,ulong *param_2);
int recovered_8245f4b8(long param_1,undefined4 param_2);
undefined8 recovered_8245f4f4(int param_1);
ulong recovered_8245f510(ulong param_1,long param_2);
long recovered_8245f51c(uint param_1);
byte recovered_8245f56c(long param_1);
long * recovered_8245f590(long *param_1,ulong param_2);
long recovered_8245f79c(void);
void recovered_8245f82c(undefined1 *param_1);
bool recovered_8245f870(uint param_1,ulong param_2,ulong param_3);
bool recovered_8245f8dc(uint param_1);
bool recovered_8245f8ec(int param_1);
undefined8 recovered_8245f8fc(long param_1,void *param_2,ulong param_3,int param_4);
undefined8 recovered_8245f9c0(long param_1);
undefined8 recovered_8245fb90(long param_1,long param_2);
undefined8 recovered_8245fcc8(long param_1,uint param_2,byte *param_3,ulong param_4);
void recovered_8245ff40(undefined4 *param_1);
void recovered_8245ff88(long param_1);
void recovered_82460028(void);
undefined8 recovered_8246003c(uint param_1,int param_2,uint param_3,uint param_4);
void recovered_824600e4(ulong *param_1);
undefined8 recovered_8246018c(void);
void recovered_824601b4(char *param_1);
uint recovered_8246029c(char *server,void *outInfo,char *errorText,uint errorTextSize);
undefined8 recovered_824605c8(byte *param_1,undefined1 *param_2,ulong param_3);
undefined8 recovered_824606a4(byte *param_1,char *param_2,ulong param_3);
undefined8 recovered_82460918(byte *param_1,uint *param_2);
undefined8 recovered_824609d0(long param_1,byte *param_2,uint *param_3,char *param_4,ulong param_5);
bool recovered_82460e1c(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void recovered_82460e98(undefined4 param_1,undefined4 param_2,undefined1 param_3);
ulong recovered_82460ef4(void);
int recovered_82460f20(void);
undefined8 recovered_82460f5c(void);
uint recovered_82461130(void *outInfo);
bool recovered_82461198(void);
undefined8 recovered_8246122c(undefined4 *param_1);
uint recovered_824612e4(uint x,uint y,uint width,uint height);
void recovered_82461390(ulong param_1,ulong param_2,ulong param_3,ulong param_4);
undefined1 recovered_82461544(uint *param_1);
uint recovered_82461650(uint *param_1);
void recovered_8246179c(void);
uint recovered_8246182c(void *outInfo);
undefined8 recovered_8246186c(void);
uint recovered_8246195c(ulong param_1);
void recovered_82461970(int param_1);
void recovered_824619ac(void);
void recovered_824619d4(void);
ulong recovered_82461b98(void);
bool recovered_8246205c(void);
uint recovered_82462080(char *line,char *outText,uint outTextSize);
void recovered_8246226c(void);
void recovered_82465114(void);
void recovered_82465190(uint param_1);
uchar recovered_82465264(void);
undefined8 recovered_824652a8(void);
undefined8 recovered_824654f0(void);
undefined8 recovered_824655e4(void);
void recovered_82465788(void);
undefined8 recovered_824657bc(int *param_1,char *param_2);
void recovered_82465964(char *param_1);
ulong recovered_824659b0(void);
void recovered_82465b40(void);
void recovered_82466028(undefined4 *param_1,long param_2);
undefined8 recovered_824660fc(void);
undefined8 recovered_824661f4(void);
void recovered_824663dc(void);
bool recovered_82466450(void);
undefined8 recovered_824664fc(char *param_1,ulong param_2);
void recovered_82466514(char *param_1);
bool recovered_824665b8(void);
void recovered_8246663c(void);
bool recovered_82466788(char *param_1,byte *param_2);
uint recovered_824667e4(char *param_1);
ulong recovered_82466870(undefined8 param_1,undefined1 *param_2,uint param_3,uint param_4);
undefined1 recovered_82466924(char *param_1,undefined1 *param_2);
bool recovered_82466930(char *param_1,ulong param_2);
undefined8 recovered_824669c0(long param_1,int param_2);
uint recovered_824669f0(void);
uint recovered_82466a0c(void);
long recovered_82466a28(uint param_1);
void recovered_82466a5c(uint *param_1,uint param_2,int param_3,int param_4);
undefined8
recovered_82466a98(int param_1,int param_2,char *param_3,uint param_4,int param_5,int param_6);
void recovered_82466af8(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6
                       ,int param_7,int param_8);
undefined8 recovered_82466bac(void);
undefined8 recovered_82467224(uint param_1,uint param_2);
void recovered_824672ec(uint *param_1);
void recovered_82467310(uint param_1,uint param_2,undefined1 *param_3,ulong param_4);
ulong recovered_8246736c(ulong param_1);
void recovered_82467504(ulong *param_1,ulong param_2,uint param_3);
undefined8
recovered_82467578(int param_1,int param_2,long param_3,long param_4,uint param_5,int param_6,
                  int param_7);
uint recovered_8246776c(void);
void recovered_8246778c(ulong *param_1,ulong param_2);
ulong recovered_824677a4(uint param_1,uint param_2,uint param_3);
void recovered_82467880(undefined1 *param_1,uint param_2,ulong param_3);
void recovered_824678a4(uint param_1,uint param_2,uint *param_3,uint *param_4);
void recovered_824678e8(uint *param_1,uint *param_2,uint param_3);
uint recovered_824679f0(int param_1,int param_2,uint param_3);
uint recovered_82467b98(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                       uint param_7,uint param_8,uint param_9);
uint recovered_82467c00(int param_1,uint param_2);
int recovered_82467c30(uint param_1,uint param_2);
void recovered_82467c68(uint param_1,uint param_2);
bool recovered_82467d54(long param_1,int param_2,long param_3,ulong param_4);
void recovered_82467e58(void);
ulong recovered_82467f08(void);
undefined8 recovered_82467f38(long param_1,uint param_2);
void recovered_82467f40(long param_1,uint param_2);
void recovered_82467fb4(void);
undefined8 recovered_82467fcc(long param_1,uint param_2);
void recovered_82468094(long param_1,uint param_2,int param_3);
undefined * recovered_824682dc(void);
void recovered_82468330(undefined8 *param_1);
undefined8 recovered_82468354(void);
undefined8 recovered_82468380(ulong param_1);
undefined8 recovered_824683c4(char *param_1,ulong *param_2,undefined1 *param_3,int param_4);
void recovered_824684c0(long *param_1);
undefined * recovered_82468514(uint param_1);
long recovered_82468568(ulong param_1);
void recovered_824685c4(ulong *param_1,ulong param_2);
ulong recovered_824685f4(void);
void recovered_8246861c(long param_1,long param_2,int param_3);
undefined8 recovered_82468688(void);
void recovered_82468788(uint param_1,ulong param_2,uint param_3);
void recovered_8246881c(void);
void recovered_82468844(long *param_1);
void recovered_82468934(void);
void recovered_82468960(long param_1,uint param_2);
void recovered_824689c0(long *param_1);
void recovered_82468a3c(long param_1,undefined1 *param_2,ulong param_3);
ulong recovered_82468a9c(long param_1);
bool recovered_82468ba4(ulong param_1,long param_2);
undefined8 recovered_82468bdc(ulong param_1);
void recovered_82469278(long param_1,ulong *param_2,ulong *param_3);
void recovered_824692b0(byte *param_1,byte *param_2,byte *param_3);
undefined8 recovered_824693fc(long param_1,char *param_2);
undefined1 recovered_82469544(byte *param_1);
ulong recovered_824695bc(byte *param_1);
uint recovered_824696a4(byte *param_1);
undefined8 recovered_824696d8(byte *param_1);
bool recovered_8246978c(byte *param_1,byte *param_2);
ulong recovered_8246980c(byte *param_1);
undefined8 recovered_82469864(long param_1,undefined1 *param_2,ulong param_3);
void recovered_82469a70(long param_1,uint param_2,undefined1 *param_3,ulong param_4);
undefined8 recovered_82469bb0(long param_1,ulong param_2,long param_3,long *param_4);
uint recovered_82469c78(int param_1);
undefined8 recovered_82469ca8(byte *param_1,long param_2,long param_3,ulong param_4,ulong *param_5);
undefined8 recovered_82469d60(long param_1,long param_2,ulong *param_3);
ulong recovered_82469e5c(long param_1,char *param_2,ulong param_3,uint param_4,long *param_5,
                        undefined4 *param_6);
uint128 recovered_82469efc(long param_1,undefined8 param_2);
undefined8 recovered_8246a040(long param_1,uint param_2,undefined8 *param_3,ulong *param_4);
ulong * recovered_8246a1d4(ulong param_1);
int recovered_8246a1dc(void *param_1,uint param_2);
ulong recovered_8246a294(long param_1,int *param_2,ulong param_3,long param_4,ulong param_5,
                        long *param_6,ulong *param_7);
ulong * recovered_8246a33c(ulong param_1,ulong *param_2);
int recovered_8246a3d4(void);
undefined8 recovered_8246a408(uint param_1,char *param_2,ulong param_3,void *param_4,ulong param_5);
undefined8 recovered_8246a4d4(uint param_1,undefined8 *param_2);
undefined8
recovered_8246a528(undefined8 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,void *param_7,uint param_8,
                  undefined8 param_9,undefined8 param_10);
int recovered_8246a694(int param_1,long param_2,uint param_3,long param_4,uint *param_5);
int recovered_8246a6ac(ulong param_1,uint param_2,long param_3,uint param_4,long param_5,
                      uint *param_6);
int recovered_8246a6c4(int param_1,uint param_2,long param_3,uint param_4,byte *param_5,
                      uint *param_6);
void recovered_8246aa00(int *param_1,uint param_2);
void recovered_8246aa6c(void);
void recovered_8246aad8(int param_1);
bool recovered_8246ab38(int param_1,uint param_2,uint param_3,int param_4,long param_5,uint param_6);
uint recovered_8246ab64(byte *param_1,long param_2);
uchar recovered_8246abac(void);
bool recovered_8246abb4(int *param_1);
undefined8 recovered_8246b600(void);
char * recovered_8246b700(char *param_1,char *param_2);
void recovered_8246b760(void);
int recovered_8246b788(int param_1,int *param_2,uint param_3,uint *param_4,uint *param_5);
undefined4
recovered_8246ba6c(int param_1,char *param_2,uint param_3,char *param_4,uint param_5,uint *param_6,
                  uint *param_7);
undefined8 recovered_8246bed4(int param_1,uint param_2);
void recovered_8246bfac(long param_1,ulong param_2,ulong param_3,long *param_4,ulong *param_5);
void recovered_8246c590(long param_1,ulong param_2,ulong param_3,undefined8 *param_4,ulong *param_5);
bool recovered_8246c620(void);
uint recovered_8246c784(long param_1,int param_2,uint param_3);
bool recovered_8246c7f8(void);
void recovered_8246c8ac(void);
undefined4 recovered_8246c8dc(undefined4 *param_1);
ulong recovered_8246c8e0(uint param_1,uint param_2,ulong param_3);
bool recovered_8246ca78(void *param_1);
bool recovered_8246cabc(uint param_1,int param_2,uint param_3,void *param_4,void *param_5);
void recovered_8246cb5c(void *param_1,void *param_2);
undefined8 recovered_8246cbb4(void *param_1,uint param_2,uint *param_3,uint *param_4);
void recovered_8246ccd8(void *param_1,void *param_2);
uint128 recovered_8246cd38(char *param_1,undefined8 param_2,undefined4 *param_3,uint *param_4,uint *param_5,
                  uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                  uint *param_11);
uint128 recovered_8246d004(long param_1,ulong param_2,uint *param_3,int *param_4,uint *param_5,uint *param_6
                  ,uint *param_7,int *param_8,undefined4 *param_9);
void recovered_8246d160(long *param_1,char *param_2,char *param_3);
undefined8 recovered_8246d188(void);
char * recovered_8246d1ac(char *param_1,ulong param_2);
void recovered_8246d56c(uint *param_1,uint *param_2);
void recovered_8246d5b4(long *param_1,char *param_2);
ulong recovered_8246d5e0(ulong param_1,char *param_2,ulong param_3);
ulong recovered_8246d68c(void);
bool recovered_8246d6e8(uint *param_1);
void recovered_8246d868(long *param_1,char *param_2,undefined1 param_3);
void recovered_8246d8a4(long *param_1,undefined4 param_2);
void recovered_8246d8c8(long *param_1,char *param_2);
void recovered_8246d900(long *param_1,void *param_2,uint param_3);
void recovered_8246d950(undefined8 *param_1);
undefined8 recovered_8246d984(undefined8 param_1,uint *param_2);
void recovered_8246dac0(int param_1);
long recovered_8246dbb0(long param_1,uint param_2);
void recovered_8246dbcc(uint param_1,int param_2,int param_3,int param_4,uint param_5,long param_6,
                       uint param_7,uint param_8,uint param_9,long *param_10,int *param_11);
bool recovered_8246dd60(int param_1,uint param_2);
void recovered_8246dda4(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                       uint param_7,ulong param_8,ulong param_9,long *param_10,long *param_11);
bool recovered_8246df60(char *param_1,char *param_2);
void recovered_8246dfb8(long *param_1);
ulong recovered_8246dff8(ulong param_1);
char * recovered_8246e0f4(uint param_1);
char * recovered_8246e140(uint param_1);
undefined8 recovered_8246e18c(uint param_1,undefined8 *param_2);
undefined8 recovered_8246e258(long param_1);
bool recovered_8246e2d4(uint param_1,void *param_2);
bool recovered_8246e30c(int drive);
bool recovered_8246e324(uint param_1);
bool recovered_8246e334(uint param_1,void *param_2);
bool recovered_8246e3f0(void);
bool recovered_8246e434(void);
ulong recovered_8246e4ac(uint param_1);
void recovered_8246e51c(uint param_1,int param_2,long param_3,uint param_4,uint param_5,int param_6,
                       int param_7);
undefined8 recovered_8246e604(undefined8 *param_1,ulong *param_2);
void recovered_8246e84c(long param_1,uint param_2,uint param_3);
void recovered_8246e878(long param_1,int param_2,int param_3);
void recovered_8246e8b8(undefined8 *param_1,undefined8 param_2);
void recovered_8246e8c0(void);
undefined8 recovered_8246e914(undefined8 *param_1,ulong *param_2,ulong param_3);
undefined8
recovered_8246e9bc(long *param_1,ulong *param_2,ulong *param_3,int param_4,byte *param_5,
                  long param_6,long param_7,uint param_8,undefined4 param_9,int *param_10);
ulong recovered_8246eb60(char *param_1);
undefined8 recovered_8246eb84(long param_1,undefined8 param_2);
bool recovered_8246ec4c(int *param_1,ulong param_2);
void recovered_8246ef98(long param_1,int param_2,uint param_3,uint param_4);
void recovered_8246f02c(void *param_1,long param_2);
undefined8
recovered_8246f06c(long param_1,ulong param_2,long *param_3,char *param_4,void *param_5,int param_6,
                  undefined1 param_7,undefined4 param_8,undefined4 param_9);
void recovered_8246f2bc(long param_1,long param_2);
byte * recovered_8246f390(byte *param_1,long param_2,long param_3);
int recovered_8246f420(int param_1);
bool recovered_8246f438(uint param_1);
int recovered_8246f494(uint param_1);
ulong recovered_8246f4b0(char *param_1);
void recovered_8246f4d8(long param_1);
void recovered_8246f604(long param_1);
bool recovered_8246f630(long param_1,long param_2);
void recovered_8246f65c(ulong param_1);
bool recovered_8246f6c0(int param_1,char *param_2,byte *param_3,ulong param_4);
undefined8 recovered_8246f93c(void);
undefined8 recovered_8246f9ac(ulong param_1);
ulong recovered_8246fa9c(ulong param_1);
ulong recovered_8246fb24(long param_1);
int recovered_8246fb4c(void);
undefined1 recovered_8246fbb4(void);
undefined1 recovered_8246fc8c(uint param_1,uint *param_2);
void recovered_8246fd8c(uint param_1,long param_2,ulong param_3,uint param_4);
void recovered_8246fee4(uint param_1);
undefined1 recovered_8246ff70(long param_1);
undefined1 recovered_8247072c(void);
bool recovered_82470940(char *param_1,uint param_2);
undefined8 recovered_824710f0(uint param_1,uint param_2,uint param_3,undefined4 param_4);
undefined8 recovered_82471788(uint param_1,int param_2,uint param_3,uint param_4);
undefined8 recovered_82472578(undefined8 *param_1,char *param_2,uint param_3);
void recovered_8247288c(void *param_1,void *param_2);
undefined8
recovered_824728e4(long param_1,long param_2,long param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6);
uint128 recovered_824729fc(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                  long param_7,ulong param_8,char *param_9,uint param_10);
uint128 recovered_82472d08(long *param_1,ulong param_2);
void recovered_82473248(undefined8 *param_1,undefined1 *param_2,uint param_3,undefined4 param_4,
                       uint param_5,uint param_6);
undefined8 recovered_824732d4(void);
undefined8
recovered_8247370c(long *param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                  long param_6);
bool recovered_824738c0(long param_1,long param_2,uint param_3,int param_4,int param_5);
ulong recovered_82473910(ulong param_1,byte *param_2,long param_3);
int * recovered_82473934(long param_1,int param_2,long param_3,int param_4);
long recovered_824739a4(long param_1);
int recovered_824739c8(long param_1);
uint recovered_824739f8(byte *param_1,ulong param_2,void *param_3,ulong param_4);
void recovered_82473c48(byte *param_1,ulong param_2,void *param_3,ulong param_4);
void recovered_82473d34(byte *param_1);
undefined8
recovered_82473d44(long param_1,ulong param_2,ulong param_3,undefined4 *param_4,ulong *param_5,
                  long *param_6);
void recovered_82473db4(void);
undefined8 recovered_82473de8(ulong param_1,ulong param_2,void *param_3,ulong param_4);
undefined8 recovered_82473df0(ulong param_1,ulong param_2,void *param_3,ulong param_4,int param_5);
undefined8 recovered_824740f8(byte *param_1,ulong param_2,void *param_3,ulong param_4);
uint128 recovered_82474150(long param_1,ulong param_2,void *param_3,ulong param_4);
uint128 recovered_82474158(long param_1,ulong param_2,void *param_3,ulong param_4);
void recovered_82474160(uint param_1,uint param_2,long param_3,int param_4);
void recovered_82474230(void *param_1,long param_2,long param_3,ulong param_4,uint param_5);
void recovered_824745bc(void *param_1,void *param_2);
void recovered_824746d0(long param_1,void *param_2,void *param_3);
void recovered_82474860(long param_1,long param_2,int param_3);
uint recovered_82474890(uint param_1,uint param_2);
uint128 recovered_824748c8(long param_1,ulong param_2,void *param_3,ulong param_4,int param_5);
undefined8 recovered_824749f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_82474a54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
ulong recovered_82474ab8(int *param_1,long param_2);
undefined8 recovered_82474b94(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong param_4);
undefined8 recovered_82474c38(undefined8 *param_1,long param_2,char *param_3,undefined1 *param_4);
void recovered_82474db8(void);
undefined8 recovered_82474e34(void *param_1,int param_2,char *param_3,uint param_4);
undefined8 recovered_82475094(void *param_1,int param_2,void *param_3);
void recovered_824751d0(void *param_1,long param_2,undefined8 *param_3,ulong *param_4);
uchar recovered_82475328(void *volume,int block,void *buffer);
bool recovered_8247535c(void *param_1,short *param_2,long param_3,ulong param_4,int param_5);
undefined8 recovered_824754a0(void *param_1,int param_2,long param_3,ulong param_4,ulong param_5);
void recovered_82475534(long param_1,int param_2,long param_3,uint param_4,int param_5,int param_6,
                       uint param_7,uint param_8,long *param_9,ulong *param_10);
undefined8
recovered_824756f0(long param_1,int param_2,long param_3,uint param_4,int param_5,int param_6,
                  undefined8 param_7,char *param_8,ulong param_9,char *param_10);
undefined8 recovered_8247591c(char *param_1,long param_2);
undefined8 recovered_82475a24(long param_1,long param_2,ulong *param_3);
ulong recovered_82475ab0(char *param_1,long param_2);
ulong recovered_82475b60(ulong param_1);
ulong recovered_82475d58(long param_1,int *param_2);
bool recovered_82475db8(void);
undefined8 recovered_82475dc4(char *param_1,ulong param_2,undefined1 *param_3);
void recovered_82475ed4(int *param_1,long *param_2,long *param_3);
undefined8 recovered_824760ac(long param_1,ulong *param_2,long param_3);
undefined8 recovered_82476138(long *param_1,ulong param_2);
undefined4 recovered_82476214(long *param_1,long param_2,uint param_3,ulong param_4);
void recovered_824762d8(uint param_1,uint param_2);
void recovered_82476380(uint param_1);
uint recovered_82476468(uint param_1);
bool recovered_824764f0(byte *param_1,byte *param_2);
bool recovered_8247655c(uint *param_1,uint param_2,uint param_3);
void recovered_82476770(ulong param_1,long param_2,ulong param_3,uint param_4);
undefined8 recovered_82476884(ulong param_1,ulong param_2);
void recovered_82476a08(void);
void recovered_82476b18(uint param_1);
void recovered_82476b94(uint param_1,int param_2);
undefined8 recovered_82476c28(void);
undefined8 recovered_82476d7c(ulong param_1,char *param_2);
bool recovered_82476e1c(byte *param_1,byte *param_2);
undefined8 recovered_82476eb8(byte *param_1,undefined1 *param_2);
char * recovered_82476f70(char *param_1,char *param_2,ulong param_3);
uint128 recovered_82477000(long param_1,int param_2);
undefined8 recovered_824770c0(undefined1 *param_1,int param_2);
undefined8 recovered_82477190(long param_1,long param_2);
bool recovered_82477290(long param_1);
int recovered_8247733c(int param_1,byte *param_2,uint param_3);
bool recovered_82477560(byte *param_1,byte *param_2);
ulong recovered_824775c0(int param_1,char *param_2,int param_3,char param_4,undefined1 *param_5,
                        ulong param_6);
undefined1 recovered_82477740(char *param_1,undefined1 *param_2,ulong param_3,undefined8 *param_4);
undefined8 recovered_824778d8(void);
undefined1 recovered_82477904(char *param_1,undefined1 *param_2,uint param_3,int param_4);
void recovered_82478024(char *param_1,uint param_2,long param_3);
uint recovered_82478170(ulong param_1);
undefined8 recovered_82478184(char *param_1);
undefined4 recovered_824781bc(byte *param_1,char *param_2,char *param_3,ulong param_4);
ulong recovered_82478234(char *param_1,undefined1 *param_2);
undefined4 recovered_82478264(long param_1,undefined8 *param_2);
undefined8 recovered_824785d0(long param_1,char *param_2,char *param_3,ulong param_4);
undefined8
recovered_824789bc(long param_1,long param_2,undefined8 *param_3,ulong *param_4,char *param_5,
                  ulong param_6);
undefined8
recovered_82478dc0(long param_1,undefined8 *param_2,ulong *param_3,char *param_4,char *param_5,
                  ulong param_6);
bool recovered_82478dd4(uint *param_1,ulong param_2);
int recovered_82478e50(uint *param_1,uint *param_2,byte *param_3,int param_4,ulong *param_5,
                      char *param_6,ulong param_7,uint param_8,ulong param_9,long param_10,
                      undefined8 *param_11,long param_12,ulong param_13,ulong param_14);
char * recovered_8247a390(char *param_1);
bool recovered_8247a3cc(int param_1);
bool recovered_8247a44c(int param_1,char *param_2);
bool recovered_8247a590(byte *param_1);
void recovered_8247a5f0(int param_1);
uint recovered_8247a684(uint param_1);
undefined8
recovered_8247ab94(long param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4,char *param_5
                  ,char *param_6,ulong param_7);
undefined8 recovered_8247ac98(long param_1,char *param_2);
undefined8
recovered_8247adb8(long param_1,undefined8 *param_2,ulong *param_3,int param_4,char *param_5,
                  char *param_6,ulong param_7);
char * recovered_8247aff4(char *param_1,ulong param_2);
void recovered_8247b034(void);
uint recovered_8247b098(long param_1,ulong param_2,char *param_3,undefined1 *param_4,
                       undefined1 *param_5);
bool recovered_8247b250(char *param_1,char *param_2);
bool recovered_8247b288(long param_1,ulong param_2,ulong param_3,char *param_4,ulong param_5);
uint128 recovered_8247b2cc(long param_1,long param_2,long param_3,char *param_4,char *param_5,ulong param_6);
bool recovered_8247b51c(char *param_1,ulong param_2);
undefined8
recovered_8247b568(uint *param_1,ulong param_2,uint param_3,undefined8 *param_4,ulong *param_5,
                  undefined8 *param_6,char *param_7,ulong param_8);
bool recovered_8247b7fc(char *param_1,ulong param_2);
uint recovered_8247b848(uint *param_1);
ulong recovered_8247b84c(ulong *param_1);
undefined8
recovered_8247b858(char *param_1,ulong param_2,undefined8 *param_3,ulong *param_4,char *param_5,
                  ulong param_6);
void recovered_8247ba70(uint *param_1,ulong param_2,uint param_3,undefined8 *param_4,ulong *param_5,
                       char *param_6,ulong param_7);
undefined8 recovered_8247bcd4(char *param_1,ulong param_2,ulong param_3,ulong *param_4);
uint recovered_8247bd3c(uint param_1,uint param_2);
void recovered_8247bd68(uint *param_1,ulong param_2,uint param_3,uint param_4,ulong param_5,
                       undefined8 param_6,undefined8 *param_7,ulong *param_8,char *param_9,
                       ulong param_10);
undefined8
recovered_8247bda0(uint *param_1,ulong param_2,uint param_3,uint param_4,ulong param_5,int param_6,
                  void *param_7,undefined8 *param_8,ulong *param_9,char *param_10,ulong param_11);
long recovered_8247c02c(ulong param_1);
void recovered_8247c04c(void);
char * recovered_8247c22c(char *param_1,ulong param_2);
undefined8
recovered_8247c244(uint *param_1,ulong param_2,uint param_3,uint param_4,long *param_5,
                  ulong *param_6,undefined1 *param_7,char *param_8,ulong param_9);
void recovered_8247c34c(ulong *param_1);
undefined8 recovered_8247c3e4(char *param_1);
void recovered_8247c484(void);
void recovered_8247c4ec(ulong param_1,long param_2);
undefined8 recovered_8247c560(char *param_1);
void recovered_8247c64c(void);
void recovered_8247c680(ulong param_1);
void recovered_8247c6d8(long param_1);
undefined4
recovered_8247c70c(ulong param_1,undefined8 param_2,undefined8 param_3,char *param_4,uint param_5,
                  uint param_6,char param_7,long param_8,char *param_9,ulong param_10);
undefined8 recovered_8247ca4c(undefined *param_1);
undefined8 recovered_8247cc38(uint *param_1,int param_2);
uint recovered_8247cc78(uint *param_1,int param_2);
undefined8
recovered_8247cc84(uint *param_1,ulong param_2,uint param_3,uint param_4,uint *param_5,
                  ulong *param_6,char *param_7,ulong param_8);
undefined8
recovered_8247d70c(long param_1,ulong *param_2,ulong *param_3,long *param_4,char *param_5,
                  ulong param_6);
void recovered_8247d81c(long param_1);
uint recovered_8247d854(uint *param_1,int param_2);
ulong recovered_8247d860(ulong *param_1,int param_2);
undefined8 recovered_8247d870(long param_1,uint param_2,int param_3,char *param_4);
bool recovered_8247d8e0(long *param_1);
void recovered_8247d944(long param_1,int param_2);
int recovered_8247d990(char *param_1);
long recovered_8247d9d4(ulong param_1);
void recovered_8247d9f4(long param_1);
bool recovered_8247da44(ulong param_1);
void recovered_8247dab0(char *param_1,undefined4 param_2);
bool recovered_8247db30(ulong param_1,byte *param_2,long param_3);
uint recovered_8247db9c(ulong param_1);
bool recovered_8247dbcc(byte *param_1,byte *param_2);
bool recovered_8247dc68(ulong param_1);
void recovered_8247dc9c(char *param_1);
void recovered_8247dcdc(long param_1);
void recovered_8247dd88(long param_1);
void recovered_8247ddb8(long param_1,ulong *param_2);
void recovered_8247de70(void);
void recovered_8247def0(long param_1,long param_2);
void recovered_8247e040(void);
void recovered_8247e08c(long param_1);
void * recovered_8247e0d4(void *param_1,long param_2,ulong *param_3);
bool recovered_8247e608(long param_1);
void recovered_8247e660(void *param_1);
void recovered_8247e688(ulong *param_1);
void recovered_8247e6b4(ulong *param_1);
undefined * recovered_8247e738(uint param_1);
void recovered_8247e788(ulong *param_1);
undefined * recovered_8247e80c(uint param_1);
undefined * recovered_8247e85c(uint param_1);
undefined8 recovered_8247e8a8(void);
undefined8 recovered_8247e8d4(ulong param_1);
bool recovered_8247e918(char *param_1,uint param_2);
ulong recovered_8247e954(char *param_1,undefined8 param_2,undefined8 param_3,int *param_4);
undefined8 recovered_8247eb68(ulong param_1,int param_2,int param_3,int *param_4,uint *param_5);
void recovered_8247ed3c(uint *param_1);
undefined4 recovered_8247edf4(void);
undefined * recovered_8247ee0c(uint *param_1);
undefined8 recovered_8247ee6c(char *param_1,long *param_2,undefined1 *param_3);
bool recovered_8247ee74(long *param_1);
undefined8 recovered_8247eff4(long param_1,int param_2,ulong param_3,char *param_4,ulong param_5);
bool recovered_8247f20c(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       ulong param_5);
undefined1 recovered_8247f290(long param_1,char *param_2,ulong param_3);
undefined1 recovered_8247f630(long param_1,ulong param_2,ulong param_3,long *param_4);
bool recovered_8247f6f0(byte *param_1);
undefined8
recovered_8247f754(byte *param_1,undefined8 param_2,undefined8 param_3,char *param_4,ulong param_5);
char * recovered_8247fc58(char *param_1);
bool recovered_8247fc94(char *param_1,byte *param_2);
long recovered_8247fd28(byte *param_1);
undefined8 recovered_8247fd90(int param_1);
bool recovered_8247fe0c(char *param_1);
undefined8 recovered_8247fe54(long param_1,char *param_2,ulong param_3);
bool recovered_8247ffdc(byte *param_1,byte *param_2);
void recovered_82480034(void);
bool recovered_82480218(ulong *param_1,ulong param_2,int param_3,ulong param_4,ulong *param_5,
                       undefined8 param_6);
void recovered_8248035c(ulong *param_1);
undefined8 recovered_824803c8(long param_1,ulong *param_2);
undefined1
recovered_82480410(long param_1,uint param_2,uint param_3,int param_4,char *param_5,ulong param_6);
bool recovered_8248087c(long param_1,uint param_2,uint param_3);
undefined8 recovered_824808a4(long param_1,ulong param_2,ulong *param_3,ulong *param_4);
undefined8 recovered_82480918(long param_1,uint param_2,ulong *param_3,long param_4);
undefined8 recovered_82480970(long param_1,ulong *param_2,int param_3,char *param_4,ulong param_5);
undefined8 recovered_82480a58(long param_1,ulong param_2,long *param_3);
void recovered_82480ad0(ulong *param_1,ulong param_2,int param_3);
void recovered_82480adc(undefined1 *param_1,uint param_2,int param_3);
void recovered_82480b10(ulong *param_1,ulong param_2);
undefined8
recovered_82480b1c(long param_1,uint param_2,byte *param_3,int param_4,ulong *param_5,char *param_6,
                  ulong param_7);
undefined8
recovered_82480c6c(long param_1,ulong *param_2,int param_3,ulong param_4,ulong param_5,char *param_6
                  ,ulong param_7);
void recovered_82480d88(void);
uint recovered_82480dbc(long param_1,byte *param_2,ulong *param_3);
undefined8
recovered_82480f48(long param_1,long param_2,ulong param_3,ulong *param_4,char *param_5,
                  ulong param_6);
undefined8
recovered_824811b0(long param_1,long param_2,long param_3,ulong param_4,ulong *param_5,char *param_6
                  ,ulong param_7);
undefined1 recovered_824812f4(long param_1);
undefined8 recovered_824813c4(ulong param_1);
void recovered_82481408(ulong param_1,byte *param_2,long param_3);
undefined8 recovered_82481458(long param_1);
undefined8 recovered_824814bc(void);
bool recovered_824815e8(byte *param_1,byte *param_2);
void recovered_82481644(byte *param_1);
void recovered_82481714(char *param_1);
void recovered_8248176c(byte *param_1);
void recovered_824817c4(char *param_1,int param_2,ulong param_3,int param_4);
void recovered_82481808(long param_1,ulong param_2);
void recovered_8248184c(long param_1,long param_2,long param_3,ulong *param_4);
void recovered_8248199c(long param_1,char *param_2);
bool recovered_82481d08(long param_1,int param_2);
void recovered_82481dc0(void);
bool recovered_82481e84(long param_1,int param_2,char *param_3,ulong param_4,int *param_5,
                       uint param_6,ulong param_7,long param_8);
void recovered_82482194(long param_1);
long recovered_824821e4(void);
char * recovered_8248221c(char *param_1,ulong param_2,char *param_3);
int recovered_8248225c(long *seconds);
ulong recovered_82482380(uint param_1,ulong param_2);
bool recovered_824823c8(uint param_1);
undefined8 recovered_82482400(long *param_1,undefined8 *param_2);
ulong recovered_824825fc(void);
undefined8 recovered_8248267c(char *param_1,ulong param_2,void *param_3,ulong param_4);
uint128 recovered_824826dc(long param_1,ulong param_2,void *param_3,ulong param_4);
ulong recovered_824827d4(ulong param_1,ulong param_2,undefined *param_3,ulong param_4);
bool recovered_824828f4(ulong param_1,uint param_2,uint param_3,uint param_4);
ulong recovered_82482928(ulong param_1);
undefined8 recovered_8248296c(undefined8 *param_1,uint *param_2);
uint recovered_82482a98(void);
bool recovered_82482ac0(ulong param_1,int *param_2);
void recovered_82482b8c(uint param_1);
undefined8 recovered_82482c14(undefined8 param_1,ulong param_2,int param_3);
void * recovered_82483130(uint param_1,uint param_2,ulong param_3,undefined4 param_4,int param_5,
                         undefined1 param_6,undefined4 param_7);
undefined8 recovered_82483214(uint param_1,ulong param_2,undefined8 *param_3,int param_4);
void recovered_82483838(long param_1);
void recovered_824839fc(void *param_1,void *param_2,ulong param_3);
undefined8 recovered_82483a64(ulong param_1);
void recovered_82483b14(long param_1);
bool recovered_82483cb0(uint param_1);
uint recovered_82483cdc(int param_1);
bool recovered_82483d00(uint param_1);
undefined8 recovered_82483d14(long param_1,uint param_2,undefined8 *param_3);
ulong recovered_82483db4(uint param_1,ulong param_2,undefined4 *param_3,int param_4);
bool recovered_82483f60(long param_1);
bool recovered_82483fb0(long param_1);
void recovered_82483ff0(long param_1,undefined1 param_2);
undefined8 recovered_82484018(int *param_1,uint param_2,undefined8 *param_3);
void recovered_824840c8(long param_1,undefined4 param_2);
ulong recovered_824840f0(uint param_1,uint param_2,ulong param_3);
void recovered_824842d4(void *param_1,char *param_2);
undefined8 recovered_8248431c(void *param_1,ulong param_2,undefined4 *param_3);
void recovered_82484434(void *param_1,long param_2,ulong param_3);
ulong recovered_824844b8(uint param_1,char *param_2);
int recovered_824845e8(uint param_1,uint param_2,uint param_3,uint *param_4,int *param_5);
bool recovered_82484a80(void *param_1,uint param_2,char *param_3);
bool recovered_82484ad8(uint param_1,uint param_2,uint param_3);
undefined1
recovered_82484b4c(uint param_1,uint param_2,uint param_3,ulong param_4,undefined4 param_5,
                  long param_6);
void recovered_82484c54(uint param_1,uint param_2,uint param_3);
ulong recovered_82484d4c(byte *param_1,ulong param_2,undefined *param_3,ulong param_4);
void * recovered_82484d84(undefined1 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                         int param_5);
void recovered_82484e3c(void *param_1,undefined4 *param_2);
bool recovered_82484e98(long param_1,long param_2);
bool recovered_82484f54(char *param_1,uint param_2);
undefined * recovered_824852c0(int param_1);
undefined8 recovered_824852e4(ulong param_1);
bool recovered_824854dc(void *param_1);
uint recovered_82485550(long param_1,ulong param_2);
int recovered_824855b0(undefined8 param_1,char *param_2);
void recovered_82485608(void);
ulong recovered_8248585c(ulong param_1);
undefined4 recovered_82485944(void);
byte recovered_8248595c(long *param_1);
undefined * recovered_82485a28(uint *param_1);
long recovered_82485a90(long *param_1,ulong *param_2,undefined8 *param_3,long *param_4,long param_5);
void recovered_82485b78(long param_1);
void recovered_82485bc8(byte *param_1,long param_2,long param_3);
ulong recovered_82485cdc(ulong param_1,char *param_2);
bool recovered_82485d8c(int param_1,ulong param_2,void *param_3);
undefined8 recovered_82485e20(ulong param_1);
byte * recovered_82485e64(byte *param_1,char *param_2,ulong param_3);
uchar recovered_82485ef0(ulong count);
int recovered_82485fc8(byte *param_1);
ulong recovered_824860e0(ulong param_1,uint param_2);
undefined8 recovered_82486274(ulong param_1,uint *param_2);
void recovered_824863c8(uint param_1,long param_2,char *param_3,ulong param_4,uint param_5,
                       long param_6);
undefined8 recovered_824864a8(uint param_1,long param_2,undefined4 *param_3);
undefined8 recovered_824864ec(uint param_1,uint param_2,uint param_3);
undefined8 recovered_824866dc(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
bool recovered_824866e8(long param_1,char *param_2);
bool recovered_824867ec(undefined8 *param_1,ulong param_2,ulong param_3);
ulong recovered_82486834(byte *param_1,ulong param_2,uint param_3,undefined *param_4);
undefined8 recovered_82486870(byte *param_1,ulong param_2,uint param_3,void *param_4);
bool recovered_824868ec(long param_1);
void recovered_824868f8(void);
void recovered_8248693c(undefined1 *param_1,long param_2);
void recovered_82486990(undefined8 *param_1,long param_2,long param_3);
void recovered_824869f8(undefined8 *param_1,undefined1 *param_2,long param_3,long param_4);
undefined8 recovered_82486a80(undefined8 *param_1,undefined1 *param_2,ulong param_3);
undefined8 recovered_82486b18(undefined8 *param_1,long param_2,long *param_3);
void recovered_82486d0c(void);
void recovered_82486d18(char *text,ulong length,int first,int last);
bool recovered_82486ed8(char *param_1);
void recovered_82486f1c(undefined1 *param_1,undefined1 *param_2);
void recovered_82486f34(ulong *param_1);
void recovered_82486f48(long param_1,int param_2,uint param_3,uint param_4);
bool recovered_82487104(long param_1,uint param_2,undefined8 *param_3,int *param_4);
char * recovered_824874ec(char *param_1,ulong param_2,undefined8 param_3,int *param_4);
ulong recovered_82487588(ulong param_1,char *param_2,ulong param_3);
undefined8
recovered_824875cc(long param_1,long *param_2,undefined1 param_3,void *param_4,uint param_5);
void recovered_82487654(long param_1,long *param_2,undefined1 param_3,uint param_4);
bool recovered_8248767c(long param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,void *param_7,uint param_8);
void recovered_8248777c(void *param_1,void *param_2,void *param_3,uint param_4);
void recovered_824877b8(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                       undefined8 param_5,undefined8 param_6);
uint recovered_82487868(ushort *param_1,uint param_2);
uint recovered_824878a8(ushort *param_1,ulong param_2);
bool recovered_824878f4(int param_1);
undefined1 recovered_8248791c(void *param_1,uint *param_2,int param_3);
undefined8 recovered_8248799c(void);
ulong recovered_824879b4(ulong param_1,long param_2);
ulong recovered_824879e8(ulong param_1,long param_2);
undefined8 recovered_82487a1c(long param_1,uint param_2,char *param_3,char *param_4,ulong param_5);
undefined8 recovered_82487c54(long param_1,ulong param_2,ulong *param_3);
void recovered_82487cd0(void);
ulong recovered_82487d2c(void);
undefined8 recovered_82487d30(uint param_1,uint param_2);
bool recovered_82487dd8(uint param_1,uint param_2);
void recovered_82487e9c(uint param_1,uint param_2,uint param_3);
undefined8 recovered_82488028(uint *param_1,uint param_2,uint param_3);
void recovered_824880ac(undefined8 *param_1);
bool recovered_824880e4(uint param_1,uint param_2,undefined4 *param_3);
bool recovered_8248813c(int param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4);
void recovered_824881d4(uint *param_1,uint *param_2);
bool recovered_82488230(void);
void recovered_82488254(undefined1 *param_1,undefined1 *param_2,ulong param_3);
undefined * recovered_82488268(void);
void recovered_82488338(ulong param_1);
ulong recovered_8248877c(ulong param_1);
void recovered_824887b4(long *param_1,long param_2,ulong param_3,ulong param_4);
void recovered_82488850(long *param_1,ulong param_2);
ulong recovered_82488978(ulong param_1,ulong param_2,char *param_3);
void recovered_824889f8(long *param_1,char *param_2,undefined1 param_3);
void recovered_82488a40(long *param_1,void *param_2,ulong param_3,undefined1 param_4);
void recovered_82488aac(void);
void recovered_82488ac0(void);
void recovered_82488ae4(void);
void recovered_82488b08(uint param_1);
void recovered_82488b20(void);
void recovered_82488b24(int param_1,int param_2,uint param_3,uint param_4,uint param_5);
int recovered_82488b8c(int param_1,byte *param_2,uint param_3);
undefined8 recovered_82488bf8(byte *param_1,long param_2,long param_3);
undefined8 recovered_82488d50(uint param_1,uint param_2);
undefined8 recovered_82488dc8(int param_1,int param_2,uint param_3,uint param_4,uint param_5);
undefined8 recovered_82488de0(int param_1,uint param_2,uint param_3);
undefined1 recovered_82488efc(ulong param_1,uint param_2);
undefined8 recovered_82489010(char *param_1);
int recovered_82489038(void);
uchar recovered_8248903c(uint param_1);
ulong * recovered_82489050(uint param_1);
void recovered_82489060(void *memory);
undefined8 recovered_82489064(uint *param_1);
undefined8 recovered_82489124(undefined8 *param_1);
void recovered_82489210(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
void recovered_82489224(void);
void recovered_82489238(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint *param_6);
void recovered_8248924c(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       undefined4 param_6);
void recovered_82489260(uint param_1,int param_2,uint param_3,uint *param_4);
void recovered_82489274(uint param_1,int param_2,uint *param_3);
void recovered_82489288(uint param_1,int param_2,undefined4 param_3);
void recovered_8248929c(uint param_1,int param_2,uint param_3,ulong *param_4);
void recovered_824892b0(uint *param_1,int param_2,uint *param_3);
void recovered_824892c4(undefined4 *param_1,int param_2,undefined4 param_3);
void recovered_824892d8(undefined8 param_1,ulong param_2,uint param_3,undefined4 *param_4,
                       undefined4 *param_5);
void recovered_824892ec(undefined8 param_1,ulong param_2,uint param_3);
void recovered_824892f0(void);
undefined8 recovered_824892f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3);
undefined1 recovered_82489330(ulong param_1,uint param_2);
undefined8 recovered_82489444(undefined8 param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_82489488(int param_1);
uint recovered_824894b0(void);
undefined8 recovered_824894e8(uint *param_1,ulong param_2);
undefined8 recovered_824896cc(uint *param_1,ulong param_2,long param_3);
undefined8 recovered_824898ec(ulong param_1);
ulong recovered_82489a94(int *param_1);
bool recovered_8248a06c(void);
void recovered_8248a2b4(void);
undefined8
recovered_8248a32c(uint *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9);
undefined8 recovered_8248a580(uint *param_1,long param_2,long param_3);
undefined8 recovered_8248a6fc(long param_1,int param_2);
ulong recovered_8248a824(int *param_1);
int recovered_8248a948(int *param_1);
undefined8 recovered_8248ab10(uint *param_1);
undefined1 recovered_8248aba4(uint *param_1);
ulong * recovered_8248ac6c(uint param_1);
void recovered_8248ac84(byte *param_1,long param_2,long param_3);
uchar recovered_8248ad98(ulong count);
undefined1 recovered_8248ae78(void);
long recovered_8248aea4(void);
bool recovered_8248aec0(void);
bool recovered_8248aed8(long *param_1,ulong *param_2,long param_3);
undefined8 recovered_8248af74(long *param_1,ulong *param_2,ulong param_3);
long * recovered_8248b01c(void);
undefined8 recovered_8248b070(void *param_1,byte *param_2,int param_3);
void recovered_8248b170(void);
undefined1 recovered_8248b4b8(long param_1);
bool recovered_8248b570(void *param_1,void *param_2,int param_3);
bool recovered_8248b670(undefined1 *param_1);
void recovered_8248b6d4(undefined1 param_1);
undefined8 recovered_8248b734(undefined4 param_1,undefined4 param_2,uint param_3,undefined1 param_4);
void recovered_8248b7a0(uint param_1,uint param_2);
bool recovered_8248b7c0(void);
ulong recovered_8248b85c(void);
undefined1 recovered_8248b8b0(byte *param_1);
ulong recovered_8248b938(byte *param_1);
bool recovered_8248b9d8(uint param_1);
ulong recovered_8248ba40(byte *param_1);
bool recovered_8248babc(undefined8 *param_1,ulong *param_2,ulong param_3);
undefined8
recovered_8248bb3c(void *param_1,ulong param_2,int param_3,long param_4,char *param_5,ulong param_6);
void recovered_8248be40(void);
uchar recovered_8248be6c(ulong count);
int recovered_8248bf44(void);
bool recovered_8248bfac(char *param_1,undefined1 *param_2,ulong param_3,undefined8 *param_4);
bool recovered_8248c0d4(byte *param_1);
undefined8 recovered_8248c160(long param_1);
undefined8
recovered_8248c1cc(long param_1,long param_2,char *param_3,char *param_4,ulong param_5,
                  undefined1 *param_6);
undefined8 recovered_8248c8a8(long param_1,char *param_2);
ulong recovered_8248c930(byte *param_1);
uchar recovered_8248c9b4(ulong param_1);
uint recovered_8248c9e0(long param_1,byte *param_2,ulong *param_3);
void recovered_8248ca74(void);
void recovered_8248cabc(void);
void recovered_8248cae4(void);
bool recovered_8248cb18(undefined8 param_1,int param_2,int param_3);
char * recovered_8248cbfc(uint param_1);
undefined8 recovered_8248cc20(ulong param_1);
undefined * recovered_8248cdbc(byte *param_1,int param_2,int param_3);
undefined1 recovered_8248ce74(char *param_1);
bool recovered_8248cedc(byte *param_1,int param_2,ulong param_3,int *param_4,int param_5);
undefined1 recovered_8248d268(byte *param_1);
ulong recovered_8248d338(int param_1,int *param_2);
uint recovered_8248d75c(void);
undefined8 * recovered_8248d778(void);
int recovered_8248d800(uint param_1,long param_2,uint param_3,byte *param_4,uint *param_5);
undefined8 recovered_8248d81c(char *param_1,char *param_2,ulong param_3);
bool recovered_8248d8e8(uint param_1);
void recovered_8248d900(undefined1 *param_1,uint param_2);
bool recovered_8248d964(long param_1);
void recovered_8248da24(char *param_1,ulong param_2,int param_3);
void recovered_8248da64(undefined1 param_1);
undefined1 recovered_8248dab0(long param_1,byte *param_2,ulong param_3);
undefined8 recovered_8248dc68(byte *param_1,char *param_2,ulong param_3);
void recovered_8248dd80(int param_1,long param_2,undefined1 *param_3,ulong param_4);
ulong recovered_8248ddec(ulong param_1,char *param_2,ulong param_3);
undefined8 recovered_8248de6c(int *param_1,char *param_2,ulong param_3);
undefined8 recovered_8248e2e8(char *param_1,int *param_2,char *param_3,ulong param_4);
void recovered_8248e6f8(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_8248e748(long param_1,undefined8 param_2,ulong param_3);
bool recovered_8248e808(long param_1,ulong param_2);
ulong recovered_8248e854(char *param_1,undefined1 *param_2,ulong param_3);
void recovered_8248e884(char *param_1,undefined1 *param_2,ulong param_3);
int recovered_8248e8f0(char *param_1,int param_2);
int recovered_8248eb2c(byte *param_1,undefined1 *param_2,ulong param_3);
int recovered_8248ec80(char *param_1,long param_2,ulong param_3);
bool recovered_8248ecb4(void);
uint recovered_8248ed00(ulong param_1);
void recovered_8248ed18(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,uint param_7);
void recovered_8248edec(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
int recovered_8248ef80(void);
ulong recovered_8248f01c(ulong param_1,char *param_2,ulong param_3);
bool recovered_8248f134(long param_1,undefined4 *param_2);
void recovered_8248f284(undefined1 *param_1,long param_2);
void recovered_8248f30c(int param_1);
undefined8 recovered_8248f354(int param_1,char *param_2);
undefined8 recovered_8248f3fc(int param_1,int param_2,uint param_3);
undefined8 recovered_8248f54c(int param_1,int param_2,char *param_3,ulong param_4);
uint recovered_8248ff30(long param_1,long param_2);
undefined8
recovered_8248ff7c(int param_1,ulong param_2,ulong param_3,byte *param_4,char *param_5,ulong param_6
                  );
undefined8 recovered_82490ee0(int param_1,int param_2);
undefined8 recovered_824913b4(long param_1,void *param_2,ulong *param_3);
ulong recovered_824914fc(int param_1);
ulong recovered_8249191c(int param_1,char *param_2,ulong param_3);
bool recovered_82492198(byte *param_1,undefined4 *param_2);
void recovered_82492374(void);
undefined8 recovered_824925f4(int param_1);
undefined8 recovered_824926a8(int param_1,char *param_2,char *param_3,char *param_4,ulong param_5);
undefined8 recovered_82492acc(int param_1,char *param_2,undefined4 *param_3);
ulong recovered_824930f8(int param_1,ulong param_2);
bool recovered_82493298(byte *param_1,undefined4 *param_2);
undefined8 recovered_82493354(int param_1,long *param_2,long *param_3);
ulong recovered_82493784(int param_1,ulong param_2);
undefined8 recovered_82493924(int param_1);
ulong recovered_8249399c(int param_1,uint param_2);
undefined8 recovered_82493d68(int param_1,char *param_2);
void recovered_82493ea0(uint *param_1,uint param_2,uint param_3,undefined1 param_4,
                       undefined1 param_5,undefined1 param_6);
bool recovered_82493f00(char *param_1,ulong *param_2);
undefined8
recovered_82494010(long param_1,undefined8 param_2,int *param_3,char *param_4,ulong param_5);
void recovered_82494288(undefined4 *param_1,uint param_2);
bool recovered_82494328(int *param_1);
undefined8 recovered_82494378(int param_1,void *param_2);
bool recovered_824943c8(void);
bool recovered_82494440(long param_1);
ulong recovered_82494480(byte *param_1,byte *param_2,ulong param_3,ulong param_4);
undefined8 recovered_8249475c(int param_1,long param_2);
void recovered_82494928(char *param_1,int param_2);
bool recovered_82494998(byte *param_1,long param_2,byte *param_3);
ulong recovered_824949f0(ulong param_1,ulong *param_2,char *param_3);
void recovered_82494a78(long param_1,ulong param_2,ulong *param_3,int param_4,int param_5);
bool recovered_82494aec(ulong param_1,uint param_2,uint param_3,uint param_4);
char * recovered_82494bdc(char *param_1,ulong param_2,char *param_3);
void recovered_82494c0c(void *param_1,int param_2);
bool recovered_82494c90(void *param_1);
bool recovered_82494cfc(byte *param_1);
void recovered_82494d44(void *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4);
bool recovered_82494dd0(byte *param_1);
bool recovered_82494e24(byte *param_1);
bool recovered_82494e78(byte *param_1);
bool recovered_82494ecc(byte *param_1);
bool recovered_82494f20(byte *param_1);
bool recovered_82494f74(byte *param_1);
undefined1 recovered_82494fb8(byte *param_1);
undefined4 recovered_824950f4(byte *param_1);
undefined8 recovered_82495278(ulong param_1,ulong param_2,undefined8 param_3);
byte * recovered_82495304(char *param_1,undefined8 param_2,byte *param_3,ulong param_4);
void * recovered_8249540c(undefined2 *param_1,undefined8 param_2,undefined8 param_3,
                         undefined8 param_4,long param_5,long param_6);
ulong recovered_82495500(long param_1);
void recovered_824955f0(long param_1,long param_2,int param_3);
ulong recovered_82495728(ulong param_1,ulong param_2,void *param_3,uint param_4,char *param_5,
                        ulong param_6);
void recovered_8249578c(void *param_1,ulong param_2,void *param_3,int param_4,long param_5,
                       ulong param_6);
void recovered_824958c0(void *param_1,ulong param_2,long param_3,void *param_4,void *param_5,
                       long param_6);
void recovered_824959bc(void *param_1,ulong param_2,void *param_3,ulong param_4,long param_5);
undefined8 recovered_82495af0(uint *param_1,void *param_2,ulong param_3);
void recovered_82495ce0(uint *param_1,long param_2);
undefined8 recovered_82495d94(long param_1,ulong param_2,long param_3,ulong param_4);
void recovered_82495e80(void *param_1,long param_2,long param_3);
bool recovered_82495f08(long param_1,long param_2);
void recovered_82495f48(uint param_1,int param_2,int param_3,undefined8 *param_4,undefined4 *param_5
                       );
char * recovered_8249605c(char *param_1,char *param_2);
bool recovered_824960c4(char *param_1,char *param_2,long param_3,ulong param_4);
ulong recovered_824961d4(char *param_1,undefined4 *param_2);
undefined1 recovered_82496244(char *param_1,char *param_2,undefined4 *param_3);
bool recovered_8249629c(char *param_1,long param_2,ulong param_3);
undefined8 recovered_82496400(char *param_1,ulong *param_2);
bool recovered_82496470(long param_1);
ulong recovered_82496524(long param_1,ulong param_2,ulong param_3);
ulong recovered_82496970(long param_1,int *param_2,uint param_3,int param_4);
ulong recovered_82496ab8(long param_1,undefined4 param_2,undefined4 param_3);
void recovered_82496b4c(char *param_1);
ulong recovered_82496be4(char *param_1,void *param_2,ulong param_3,ulong *param_4);
ulong recovered_82496c78(char *param_1,void *param_2,ulong param_3);
ulong recovered_82496c88(char *param_1);
uint recovered_82496d40(char *param_1);
ulong recovered_82496dcc(char *param_1,uint param_2);
void recovered_82496ec0(byte *param_1,long param_2,ulong *param_3,ulong *param_4);
void recovered_824970a4(byte *param_1);
byte recovered_82497274(long param_1,int *param_2);
undefined8 recovered_8249744c(long param_1,byte *param_2,int param_3,char *param_4);
bool recovered_82497c68(long param_1,long param_2,ulong param_3,ulong *param_4);
long * recovered_82497d00(void);
bool recovered_82497d90(long param_1);
undefined8 recovered_82497dd8(int param_1);
ulong recovered_82497f3c(uint param_1,undefined8 param_2,int *param_3);
void recovered_82497fa8(void);

/* Original analysis identifiers for manual recovery units. */
