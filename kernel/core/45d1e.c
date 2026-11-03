/* Permafrost 0.6; Pooka's Free Software License.
 * Tagged values store integer bits at +4, float bits at +8, text at +12.
 */
#include "functions.h"
bool recovered_45d1e(int *value, int *output) {
    if (!value || !output) return false;
    *output = 0;
    char buffer[96];
    char *text = buffer;
    uint size;
    switch (value[0]) {
    case 1: recovered_22362(buffer, sizeof(buffer), (char *)0x58235, value[1]); break;
    case 2: recovered_22362(buffer, sizeof(buffer), (char *)0x58b0f, (double)*(float *)&value[2]); break;
    case 3: return recovered_45ddb(value, output);
    case 5: text = (char *)(value[1] ? 0x58a63 : 0x58a68); break;
    default: return false;
    }
    size = recovered_214de((int)text);
    *output = recovered_3773b((int)text, size);
    return *output != 0;
}
