/* Pooka's Free Software License. EFI modifier and native scan-code transport. */
#include <assert.h>
#include "../firmware/uefi/common/loader.c"
static unsigned position;
static ExtendedKey keys[]={
 {{0,'s'},0x80000080U,0,{0}},{{0,0},0x80000000U,0,{0}},
 {{0,19},0x80000008U,0,{0}},{{0,0},0x80000000U,0,{0}},
 {{0,9},0x80000002U,0,{0}},{{0,0},0x80000000U,0,{0}},
 {{0x15,0},0x80000000U,0,{0}},{{0x16,0},0x80000000U,0,{0}},
 {{0x17,0},0x80000000U,0,{0}},{{0,'A'},0,0,{0}}
};
static Status EFI_ABI read_key(ExtendedInput *input,ExtendedKey *out){assert(input==extended_input);if(position>=sizeof(keys)/sizeof(keys[0]))return 1;*out=keys[position++];return 0;}
int main(void){
 System table={0};Services boot={0};ExtendedInput input={.read=read_key};system_table=&table;services=&boot;extended_input=&input;extended_input_checked=1;
 assert(key_code()==0x41f73);assert(key_code()==0x80000000U);
 assert(key_code()==0x21f13);assert(key_code()==0x80000000U);
 assert(key_code()==0x10f09);assert(key_code()==0x80000000U);
 assert(key_code()==0x5700);assert(key_code()==0x5800);assert(key_code()==0x011b);assert(key_code()==0x1e41);assert(!key_code());
 return 0;
}
