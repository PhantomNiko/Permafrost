/* Permafrost 0.2. Pooka's Free Software License.
 * Rewritten from the recovered routines at 0x20c1d–0x20def.
 * The null-tolerant strlen behavior is deliberate and matches the reference.
 */
#include <stddef.h>

void *pf_memcpy(void *destination, const void *source, size_t count) {
    unsigned char *out = destination;
    const unsigned char *in = source;
    for (size_t i = 0; i < count; ++i) out[i] = in[i];
    return destination;
}

void *pf_memmove(void *destination, const void *source, size_t count) {
    unsigned char *out = destination;
    const unsigned char *in = source;
    if (out < in) {
        for (size_t i = 0; i < count; ++i) out[i] = in[i];
    } else if (out != in) {
        while (count) { --count; out[count] = in[count]; }
    }
    return destination;
}

void *pf_memset(void *destination, int value, size_t count) {
    unsigned char *out = destination;
    for (size_t i = 0; i < count; ++i) out[i] = (unsigned char)value;
    return destination;
}

int pf_memcmp(const void *left, const void *right, size_t count) {
    const unsigned char *a = left, *b = right;
    for (size_t i = 0; i < count; ++i) {
        if (a[i] != b[i]) return (int)a[i] - (int)b[i];
    }
    return 0;
}

size_t pf_strlen(const char *text) {
    size_t length = 0;
    if (text) while (text[length]) ++length;
    return length;
}

int pf_strcmp(const char *left, const char *right) {
    const unsigned char *a = (const unsigned char *)left;
    const unsigned char *b = (const unsigned char *)right;
    while (*a && *a == *b) { ++a; ++b; }
    return (int)*a - (int)*b;
}

int pf_strcmp_alias(const char *left, const char *right) {
    return pf_strcmp(left, right);
}

char *pf_strcpy(char *destination, const char *source) {
    char *out = destination;
    do { *out++ = *source; } while (*source++);
    return destination;
}

char *pf_strchr(const char *text, int value) {
    const char match = (char)value;
    while (*text && *text != match) ++text;
    return *text == match ? (char *)text : NULL;
}

size_t pf_strspn(const char *text, const char *accepted) {
    size_t count = 0;
    while (text[count] && pf_strchr(accepted, text[count])) ++count;
    return count;
}

char *pf_strpbrk(const char *text, const char *accepted) {
    while (*text) {
        if (pf_strchr(accepted, *text)) return (char *)text;
        ++text;
    }
    return NULL;
}

char *pf_strstr(const char *text, const char *needle) {
    if (!*needle) return (char *)text;
    for (; *text; ++text) {
        size_t i = 0;
        while (needle[i] && text[i] == needle[i]) ++i;
        if (!needle[i]) return (char *)text;
    }
    return NULL;
}
