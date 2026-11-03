/* Feed a native application's BIOS keyboard input on an emulator test copy.
 * Pooka's Free Software License. */
#include <permafrost.h>
#ifndef PF_KEYS
#define PF_KEYS "280000: C3\r\x1b"
#endif
static unsigned scan(unsigned c) {
    static const char letters[]="abcdefghijklmnopqrstuvwxyz";
    static const unsigned char codes[]={30,48,46,32,18,33,34,35,23,36,37,38,50,49,24,25,16,19,31,20,22,47,17,45,21,44};
    if(c>='A'&&c<='Z')c+=32;
    for(unsigned i=0;i<26;++i)if(c==(unsigned)letters[i])return codes[i];
    if(c>='1'&&c<='9')return c-'1'+2;
    if(c=='0')return 11;
    if(c=='\r'||c=='\n')return 28;
    if(c==27)return 1;
    if(c==' ')return 57;
    return 39;
}
int main(void) {
    const char keys[]=PF_KEYS;
    volatile uint16_t *buffer=(volatile uint16_t*)0x41e;
    unsigned n=sizeof(keys)-1;
    if(n>15)return -1;
    *(volatile uint16_t*)0x480=0x1e;
    *(volatile uint16_t*)0x482=0x3e;
    for(unsigned i=0;i<n;++i)buffer[i]=(uint8_t)keys[i] | (scan((uint8_t)keys[i])<<8);
    *(volatile uint16_t*)0x41a=0x1e;
    *(volatile uint16_t*)0x41c=0x1e + n*2;
    return 1;
}
