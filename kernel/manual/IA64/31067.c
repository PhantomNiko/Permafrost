/* Permafrost 0.4; Pooka's Free Software License.
 * Token splitting reconstructed from the original character masks and append
 * routine. Quoted tokens retain delimiters for the expression parser.
 */
#include "functions.h"
static bool space(byte c) { return c == ' ' || (c >= 9 && c <= 13); }
static bool single(byte c) {
    return (c >= 33 && c < 63 && ((0x3e005f95U >> (c - 33)) & 1)) ||
        c == '[' || c == '\\' || c == ']' || c == '^' || c == '{' || c == '}';
}
static bool pair(byte a, byte b) {
    return (b == '=' && (a == '+' || a == '-' || a == '*' || a == '/' ||
                         a == '<' || a == '>' || a == '~' || a == '!' || a == '=')) ||
        (a == '&' && b == '&') || (a == '|' && b == '|');
}
uint recovered_31067(int input, uint *tokens) {
    if (!tokens) return 0;
    tokens[0] = tokens[1] = tokens[2] = 0;
    if (!input) return 1;
    const char *line = (const char *)input;
    uint length = recovered_213fa(input), start = 0, pos = 0;
    while (pos < length) {
        byte c = (byte)line[pos];
        if (c == '@' && pos + 1 < length && line[pos + 1] == '@') { length = pos; break; }
        if (c == '\'' || c == '"') {
            if (pos > start && !(byte)recovered_32af8((int *)tokens, (char *)line + start, pos - start)) goto fail;
            start = pos++;
            bool escaped = false, closed = false;
            while (pos < length) {
                byte next = (byte)line[pos++];
                if (escaped) escaped = false;
                else if (next == '\\') escaped = true;
                else if (next == c) { closed = true; break; }
            }
            if (!closed || !(byte)recovered_32af8((int *)tokens, (char *)line + start, pos - start)) goto fail;
            start = pos;
        } else if (space(c)) {
            if (pos > start && !(byte)recovered_32af8((int *)tokens, (char *)line + start, pos - start)) goto fail;
            start = ++pos;
        } else if ((pos + 1 < length && pair(c, (byte)line[pos+1])) || single(c)) {
            if (pos > start && !(byte)recovered_32af8((int *)tokens, (char *)line + start, pos - start)) goto fail;
            uint count = pos + 1 < length && pair(c, (byte)line[pos+1]) ? 2 : 1;
            if (!(byte)recovered_32af8((int *)tokens, (char *)line + pos, count)) goto fail;
            pos += count; start = pos;
        } else ++pos;
    }
    if (length > start && !(byte)recovered_32af8((int *)tokens, (char *)line + start, length - start)) goto fail;
    return 1;
fail:
    recovered_3134d(tokens);
    return 0;
}
