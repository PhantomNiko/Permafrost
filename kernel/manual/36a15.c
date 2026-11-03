/* Permafrost 0.5; Pooka's Free Software License.
 * Signed 32-bit literals: decimal, $hex, and 0xhex, with optional sign.
 * The original rejects overflow and accepts a bare signed-minimum magnitude.
 */
#include "functions.h"
uint recovered_36a15(int input, int *output) {
    if (!input || !output) return 0;
    char text[256];
    recovered_21de7(text, sizeof(text), (char *)0x48638, input);
    recovered_28c5c((byte *)text);
    uint index = 0, base = 10;
    bool negative = false;
    if (text[index] == '+' || text[index] == '-') negative = text[index++] == '-';
    if (text[index] == '$') { base = 16; ++index; }
    else if (text[index] == '0' && (text[index+1] == 'x' || text[index+1] == 'X')) {
        base = 16; index += 2;
    }
    if (!text[index]) return 0;
    uint value = 0;
    const uint limit = negative ? 0x80000000U : 0x7fffffffU;
    for (; text[index]; ++index) {
        byte c = (byte)text[index];
        uint digit;
        if (c >= '0' && c <= '9') digit = c - '0';
        else if (base == 16 && c >= 'a' && c <= 'f') digit = c - 'a' + 10;
        else if (base == 16 && c >= 'A' && c <= 'F') digit = c - 'A' + 10;
        else return 0;
        if (digit >= base || value > (limit - digit) / base) return 0;
        value = value * base + digit;
    }
    *output = (int)(negative ? 0U - value : value);
    return 1;
}
