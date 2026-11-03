// Permafrost 0.5. Pooka's Free Software License.
#include <stdint.h>
extern "C" int recovered_2557e(uint32_t,uint32_t,uint32_t);
namespace permafrost {
struct Theme { uint32_t background,foreground,attribute;
    int apply() const {return recovered_2557e(background,foreground,attribute);}
};
}
extern "C" int pf_display_night_mode() {return permafrost::Theme{0x0000aa,0x55ffff,0x1b}.apply();}
