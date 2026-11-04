// Permafrost 0.6. Pooka's Free Software License.
#include <stdint.h>
extern "C" int kernel_set_theme(uint32_t,uint32_t,uint32_t);
namespace permafrost {
struct Theme { uint32_t background,foreground,attribute;
    int apply() const {return kernel_set_theme(background,foreground,attribute);}
};
}
extern "C" int pf_display_night_mode() {return permafrost::Theme{0x0000aa,0x55ffff,0x1b}.apply();}
