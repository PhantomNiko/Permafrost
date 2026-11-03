/* Feed a native application's BIOS keyboard input on an emulator test copy.
 * Pooka's Free Software License. */
#include <permafrost.h>
#ifndef PF_KEYS
#define PF_KEYS "280000: C3\r\x1b"
#endif
int main(void) {
    const char keys[]=PF_KEYS;
    volatile uint16_t *buffer=(volatile uint16_t*)0x41e;
    unsigned n=sizeof(keys)-1;
    if(n>15)return -1;
    *(volatile uint16_t*)0x480=0x1e;
    *(volatile uint16_t*)0x482=0x3e;
    for(unsigned i=0;i<n;++i)buffer[i]=(uint8_t)keys[i] | 0x100;
    *(volatile uint16_t*)0x41a=0x1e;
    *(volatile uint16_t*)0x41c=0x1e + n*2;
    return 1;
}
