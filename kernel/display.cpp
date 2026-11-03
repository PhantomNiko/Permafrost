// Permafrost 0.4. Pooka's Free Software License.
#include <stdint.h>
#ifdef PF_TARGET_IA64
extern "C" int recovered_255a5(uint32_t,uint32_t,uint32_t);
#define pf_apply_theme recovered_255a5
#else
extern "C" int recovered_25591(uint32_t,uint32_t,uint32_t);
#define pf_apply_theme recovered_25591
#endif
namespace permafrost {
struct Theme {
    uint32_t background, foreground, attribute;
    int apply() const { return pf_apply_theme(background,foreground,attribute); }
};
}
extern "C" int pf_display_night_mode() {
    return permafrost::Theme{0x0000aa,0x55ffff,0x1b}.apply();
}
