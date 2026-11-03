// Pooka's Free Software License.
#include <permafrost.h>
namespace permafrost {
class Display {
public:
    static int night_mode() { return pf_night_mode(); }
};
}
extern "C" int main() {
    return permafrost::Display::night_mode();
}
