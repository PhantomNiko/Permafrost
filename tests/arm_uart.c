/* ARM boot probe: fixed-width WMAP calls plus QEMU virt's PL011 console.
 * Pooka's Free Software License. */
#include <stdint.h>
static void serial(const char *text) {
    volatile uint32_t *uart=(volatile uint32_t *)(uintptr_t)0x09000000;
    while(*text) {
        while(uart[6]&(1U<<5)){}
        uart[0]=(uint8_t)*text++;
    }
}
int main(void) {
    const volatile uint32_t *api=(const volatile uint32_t *)(uintptr_t)0x40010800;
    if(api[0]!=0x50414d57U || api[1]!=11 || api[2]!=188)return 0;
    serial("PF-SDK-ARM-NATIVE-PASS\n");
    ((int (*)(const char *))(uintptr_t)api[0x40/4])("PF-SDK-ARM-CALL-PASS");
    return 1;
}
