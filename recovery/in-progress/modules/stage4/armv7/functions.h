/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
static inline void *software_udf(unsigned int instruction,unsigned int address){__builtin_trap();return (void *)0;}
extern uint8_t pf_module_state[];
int recovered_10000fc8(void);
int recovered_10000fd8(void);
bool recovered_10000fe8(int param_1);
uint recovered_10000ff8(uint capability,uint operation,void *request);
void recovered_10001864(void *out,void *src,uint length);
uint recovered_1000187c(void *context,void *descriptor);
uchar recovered_100019a0(void *context);
undefined4 recovered_100019e8(void *param_1);
uint recovered_10001a20(char *text);
void recovered_10001a3c(char *text);
uchar recovered_10001ac8(char *left,char *right);
void recovered_10001afc(char *begin,char *end,uint depth);
uchar recovered_10001f44(char *begin,char *end,char *keyword,char **after);
void recovered_10001ff0(char *begin,char *end);
uchar recovered_10002330(void *cursor,char *out,uint capacity);
uchar recovered_100023f8(void *cursor);
void recovered_1000242c(void *out,void *cursor,uint precedence);
void recovered_10002958(const unsigned char *value);
uchar recovered_10002b00(char *input,char *out);
uchar recovered_10002c14(void);
char * recovered_10002c6c(char *begin,char *end);
void recovered_10002c8c(void *out,char *begin,char *end);
void recovered_10002cd0(void *cursor);
void recovered_10002d14(void *out,void *cursor);
void recovered_10003728(void *out,void *pf_input,uint size);
void recovered_10003744(int param_1,undefined1 param_2,int param_3);
unsigned long long recovered_1000375c(unsigned long long a,unsigned long long b);
undefined8 recovered_10003778(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
unsigned long long recovered_10003890(unsigned long long a,unsigned long long b);
long long recovered_100038c4(long long a,long long b);
long long recovered_10003914(long long a,long long b);
void recovered_1000395c(void);

/* Original analysis identifiers for manual recovery units. */
