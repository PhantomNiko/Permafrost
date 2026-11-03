/* Permafrost 0.4 framebuffer differential probe. Pooka's Free Software License.
 * These recovered mailbox pointers are private test interfaces, not SDK APIs.
 */
#include <permafrost.h>
static uint32_t field(uintptr_t address) { return **(volatile uint32_t **)(uintptr_t)address; }
int main(void) {
    uint32_t bpp=field(0x4c038),height=field(0x4c03c),base=field(0x4c040);
    uint32_t pitch=field(0x4c044),width=field(0x4c048);
    if(!base || !width || !height || pitch*height>8*1024*1024)return 0;
    const volatile uint8_t *pixels=(const volatile uint8_t *)(uintptr_t)base;
    uint32_t hash=2166136261U;
    for(uint32_t i=0;i<pitch*height;++i)hash=(hash^pixels[i])*16777619U;
    pf_log("PF-FRAMEBUFFER %x %u %u %u\n",hash,width,height,bpp);
    return 1;
}
