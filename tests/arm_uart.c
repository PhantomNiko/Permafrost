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
struct native_value {
    uint32_t type;int32_t integer;float number;
    const char *text;const void *data;uint32_t size;
};
static int probe(const struct native_value *args,uint32_t count,struct native_value *out,char *error,uint32_t capacity) {
    (void)error;(void)capacity;
    int valid=count==1 && args && args[0].type==1 && args[0].integer==5;
    serial(valid?"PF-SDK-ARM-VALUE-PASS\n":"PF-SDK-ARM-VALUE-FAIL\n");
    out->type=5;out->integer=valid;out->number=(float)valid;
    out->text=0;out->data=0;out->size=0;return 1;
}
int main(void) {
    const volatile uint32_t *api=(const volatile uint32_t *)(uintptr_t)0x40010800;
    if(api[0]!=0x50414d57U || api[1]!=11 || api[2]!=188)return 0;
    serial("PF-SDK-ARM-NATIVE-PASS\n");
    ((int (*)(const char *))(uintptr_t)api[0x40/4])("PF-SDK-ARM-CALL-PASS");
    typedef int (*callback)(const struct native_value *,uint32_t,struct native_value *,char *,uint32_t);
    if(!((uint8_t (*)(const char *,callback))(uintptr_t)api[0x48/4])("pfProbe",probe))return 0;
    return 1;
}
