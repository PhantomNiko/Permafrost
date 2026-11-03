// Permafrost 0.1. Pooka's Free Software License.
// Replaces the public night-mode function at 0x2243d.
#include <stdint.h>

namespace permafrost {
struct Theme {
    uint32_t background;
    uint32_t foreground;
    uint8_t text_attribute;

    int apply() const {
        using ApplyTheme = int (*)(uint32_t, uint32_t, uint32_t);
        return reinterpret_cast<ApplyTheme>(0x21c7a)(background, foreground, text_attribute);
    }
};
}

extern "C" int pf_display_night_mode() {
    const permafrost::Theme night = {0x0000aa, 0x55ffff, 0x1b};
    night.apply();
    return 1;
}
