// Permafrost 0.6; Pooka's Free Software License.
#include <stdint.h>
extern "C" int kernel_set_theme(uint32_t,uint32_t,uint32_t);
extern "C" int pf_display_night_mode() {return kernel_set_theme(0x0000aa,0x55ffff,0x1b);}
