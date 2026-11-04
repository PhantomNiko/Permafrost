/* Permafrost 0.6. Pooka's Free Software License.
 * Call nativeExample["add"](17,25) from WinterScript.
 * Load at 0x240000; this module must remain resident while callbacks are bound.
 */
#include <permafrost.h>
static int add(const struct pf_native_value *args,uint32_t count,
               struct pf_native_value *out,char *error,uint32_t capacity) {
    if(count!=2 || args[0].type!=PF_INTEGER || args[1].type!=PF_INTEGER) {
        const char text[]="expected two integers";
        if(capacity>=sizeof(text))for(unsigned i=0;i<sizeof(text);++i)error[i]=text[i];
        return 0;
    }
    out->type=PF_INTEGER;out->integer=args[0].integer+args[1].integer;
    return 1;
}
int main(void) { return pf_register_native("nativeExample.add",add); }
