/* ARM boot probe: fixed-width WMAP calls plus QEMU virt's PL011 console.
 * Pooka's Free Software License. */
#include <permafrost.h>
static void serial(const char *text) {
    volatile uint32_t *uart=(volatile uint32_t *)(uintptr_t)0x09000000;
    while(*text) {
        while(uart[6]&(1U<<5)){}
        uart[0]=(uint8_t)*text++;
    }
}
static int probe(const struct pf_native_value *args,uint32_t count,struct pf_native_value *out,char *error,uint32_t capacity) {
    (void)error;(void)capacity;
    int valid=count==1 && args && args[0].type==1 && args[0].integer==5;
    serial(valid?"PF-SDK-ARM-VALUE-PASS\n":"PF-SDK-ARM-VALUE-FAIL\n");
    out->type=5;out->integer=valid;out->number=(float)valid;
    out->text=0;out->data=0;out->size=0;return 1;
}
int main(void) {
    const pf_services *api=pf_api();
    if(api->magic!=PF_API_MAGIC || api->version!=PF_API_VERSION || api->size!=sizeof(struct pf_native_api))return 0;
    serial("PF-SDK-ARM-NATIVE-PASS\n");
    api->log_text("PF-SDK-ARM-CALL-PASS");
    if(!api->register_native("pfProbe",probe))return 0;
    return 1;
}
