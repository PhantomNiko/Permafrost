/* Enable test UART capture in a temporary UEFI guest. Pooka's Free Software License. */
#include <permafrost.h>
static void output(uint16_t port,uint8_t value) {
    __asm__ volatile("outb %b0,%w1"::"a"(value),"d"(port));
}
int main(void) {
    output(0x3f9,0);output(0x3fb,0x80);output(0x3f8,3);output(0x3f9,0);
    output(0x3fb,3);output(0x3fc,11);
#if defined(__x86_64__)
    *(volatile uint8_t *)0x2046588=1;
#else
    *(volatile uint8_t *)0x62f20=1;
#endif
    pf_log_text("PF-SDK-UEFI-CALL-PASS");
    return 1;
}
