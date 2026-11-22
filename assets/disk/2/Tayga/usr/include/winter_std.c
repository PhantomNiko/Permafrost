#include "winter_std.h"

#define WM_ERANGE 34

typedef unsigned long long wm_u64;
typedef long long wm_i64;

static int* wm_errno_location(void) {
#if defined(__APPLE__) || defined(__FreeBSD__)
	extern int* __error(void);
	return __error();
#elif defined(__linux__)
	extern int* __errno_location(void);
	return __errno_location();
#else
	static int fallback_errno = 0;
	return &fallback_errno;
#endif
}

static void wm_set_errno(int value) {
	*wm_errno_location() = value;
}

static int wm_is_space(int value) {
	return value == ' ' || value == '\f' || value == '\n' ||
		value == '\r' || value == '\t' || value == '\v';
}

static int wm_digit_value(int value) {
	if (value >= '0' && value <= '9') return value - '0';
	if (value >= 'a' && value <= 'z') return value - 'a' + 10;
	if (value >= 'A' && value <= 'Z') return value - 'A' + 10;
	return -1;
}

#if defined(__GNUC__) || defined(__clang__)
typedef __UINTPTR_TYPE__ WmStdMemoryWord __attribute__((__may_alias__));
#else
typedef __UINTPTR_TYPE__ WmStdMemoryWord;
#endif

enum {
	kWmStdMemoryWordUnroll = 4u
};

static int wm_memory_same_alignment(const void* left, const void* right) {
	const __UINTPTR_TYPE__ mask = (__UINTPTR_TYPE__)(sizeof(WmStdMemoryWord) - 1u);
	return ((((__UINTPTR_TYPE__)left ^ (__UINTPTR_TYPE__)right) & mask) == 0u);
}

static WmStdMemoryWord wm_memory_fill_word(unsigned char value) {
	__UINTPTR_TYPE__ word = (__UINTPTR_TYPE__)value;
	for (wm_size_t shift = 8u; shift < sizeof(__UINTPTR_TYPE__) * 8u; shift <<= 1u) {
		word |= word << shift;
	}
	return (WmStdMemoryWord)word;
}

static int wm_memory_compare_word_bytes(const WmStdMemoryWord* left, const WmStdMemoryWord* right) {
	const unsigned char* l = (const unsigned char*)left;
	const unsigned char* r = (const unsigned char*)right;
	for (wm_size_t i = 0u; i < sizeof(WmStdMemoryWord); ++i) {
		if (l[i] != r[i]) {
			return (int)l[i] - (int)r[i];
		}
	}
	return 0;
}

void* memcpy(void* destination, const void* source, wm_size_t count) {
	unsigned char* dst = (unsigned char*)destination;
	const unsigned char* src = (const unsigned char*)source;
	const wm_size_t word_size = sizeof(WmStdMemoryWord);
	if (count >= word_size * 2u && wm_memory_same_alignment(dst, src)) {
		const __UINTPTR_TYPE__ mask = (__UINTPTR_TYPE__)(word_size - 1u);
		while (count != 0u && (((__UINTPTR_TYPE__)dst & mask) != 0u)) {
			*dst++ = *src++;
			--count;
		}
		WmStdMemoryWord* dst_word = (WmStdMemoryWord*)dst;
		const WmStdMemoryWord* src_word = (const WmStdMemoryWord*)src;
		while (count >= word_size * kWmStdMemoryWordUnroll) {
			dst_word[0] = src_word[0];
			dst_word[1] = src_word[1];
			dst_word[2] = src_word[2];
			dst_word[3] = src_word[3];
			dst_word += kWmStdMemoryWordUnroll;
			src_word += kWmStdMemoryWordUnroll;
			count -= word_size * kWmStdMemoryWordUnroll;
		}
		while (count >= word_size) {
			*dst_word++ = *src_word++;
			count -= word_size;
		}
		dst = (unsigned char*)dst_word;
		src = (const unsigned char*)src_word;
	}
	while (count != 0u) {
		*dst++ = *src++;
		--count;
	}
	return destination;
}

void* memmove(void* destination, const void* source, wm_size_t count) {
	unsigned char* dst = (unsigned char*)destination;
	const unsigned char* src = (const unsigned char*)source;
	const wm_size_t word_size = sizeof(WmStdMemoryWord);
	if (dst == src || count == 0u) {
		return destination;
	}
	if (dst < src || dst >= src + count) {
		return memcpy(destination, source, count);
	}
	unsigned char* dst_end = dst + count;
	const unsigned char* src_end = src + count;
	if (count >= word_size * 2u && wm_memory_same_alignment(dst_end, src_end)) {
		const __UINTPTR_TYPE__ mask = (__UINTPTR_TYPE__)(word_size - 1u);
		while (count != 0u && (((__UINTPTR_TYPE__)dst_end & mask) != 0u)) {
			*--dst_end = *--src_end;
			--count;
		}
		while (count >= word_size * kWmStdMemoryWordUnroll) {
			dst_end -= word_size * kWmStdMemoryWordUnroll;
			src_end -= word_size * kWmStdMemoryWordUnroll;
			((WmStdMemoryWord*)dst_end)[3] = ((const WmStdMemoryWord*)src_end)[3];
			((WmStdMemoryWord*)dst_end)[2] = ((const WmStdMemoryWord*)src_end)[2];
			((WmStdMemoryWord*)dst_end)[1] = ((const WmStdMemoryWord*)src_end)[1];
			((WmStdMemoryWord*)dst_end)[0] = ((const WmStdMemoryWord*)src_end)[0];
			count -= word_size * kWmStdMemoryWordUnroll;
		}
		while (count >= word_size) {
			dst_end -= word_size;
			src_end -= word_size;
			*(WmStdMemoryWord*)dst_end = *(const WmStdMemoryWord*)src_end;
			count -= word_size;
		}
	}
	while (count != 0u) {
		*--dst_end = *--src_end;
		--count;
	}
	return destination;
}

void* memset(void* destination, int value, wm_size_t count) {
	unsigned char* dst = (unsigned char*)destination;
	const unsigned char byte = (unsigned char)value;
	const wm_size_t word_size = sizeof(WmStdMemoryWord);
	if (count >= word_size * 2u) {
		const __UINTPTR_TYPE__ mask = (__UINTPTR_TYPE__)(word_size - 1u);
		const WmStdMemoryWord word = wm_memory_fill_word(byte);
		while (count != 0u && (((__UINTPTR_TYPE__)dst & mask) != 0u)) {
			*dst++ = byte;
			--count;
		}
		WmStdMemoryWord* dst_word = (WmStdMemoryWord*)dst;
		while (count >= word_size * kWmStdMemoryWordUnroll) {
			dst_word[0] = word;
			dst_word[1] = word;
			dst_word[2] = word;
			dst_word[3] = word;
			dst_word += kWmStdMemoryWordUnroll;
			count -= word_size * kWmStdMemoryWordUnroll;
		}
		while (count >= word_size) {
			*dst_word++ = word;
			count -= word_size;
		}
		dst = (unsigned char*)dst_word;
	}
	while (count != 0u) {
		*dst++ = byte;
		--count;
	}
	return destination;
}

int memcmp(const void* left, const void* right, wm_size_t count) {
	const unsigned char* l = (const unsigned char*)left;
	const unsigned char* r = (const unsigned char*)right;
	const wm_size_t word_size = sizeof(WmStdMemoryWord);
	if (count >= word_size * 2u && wm_memory_same_alignment(l, r)) {
		const __UINTPTR_TYPE__ mask = (__UINTPTR_TYPE__)(word_size - 1u);
		while (count != 0u && (((__UINTPTR_TYPE__)l & mask) != 0u)) {
			if (*l != *r) {
				return (int)*l - (int)*r;
			}
			++l;
			++r;
			--count;
		}
		const WmStdMemoryWord* l_word = (const WmStdMemoryWord*)l;
		const WmStdMemoryWord* r_word = (const WmStdMemoryWord*)r;
		while (count >= word_size * kWmStdMemoryWordUnroll) {
			if (l_word[0] != r_word[0]) {
				return wm_memory_compare_word_bytes(l_word + 0u, r_word + 0u);
			}
			if (l_word[1] != r_word[1]) {
				return wm_memory_compare_word_bytes(l_word + 1u, r_word + 1u);
			}
			if (l_word[2] != r_word[2]) {
				return wm_memory_compare_word_bytes(l_word + 2u, r_word + 2u);
			}
			if (l_word[3] != r_word[3]) {
				return wm_memory_compare_word_bytes(l_word + 3u, r_word + 3u);
			}
			l_word += kWmStdMemoryWordUnroll;
			r_word += kWmStdMemoryWordUnroll;
			count -= word_size * kWmStdMemoryWordUnroll;
		}
		while (count >= word_size) {
			if (*l_word != *r_word) {
				return wm_memory_compare_word_bytes(l_word, r_word);
			}
			++l_word;
			++r_word;
			count -= word_size;
		}
		l = (const unsigned char*)l_word;
		r = (const unsigned char*)r_word;
	}
	while (count != 0u) {
		if (*l != *r) {
			return (int)*l - (int)*r;
		}
		++l;
		++r;
		--count;
	}
	return 0;
}

void* memchr(const void* memory, int value, wm_size_t count) {
	const unsigned char* bytes = (const unsigned char*)memory;
	const unsigned char needle = (unsigned char)value;
	for (wm_size_t i = 0; i < count; ++i) {
		if (bytes[i] == needle) {
			return (void*)(bytes + i);
		}
	}
	return 0;
}

wm_size_t strlen(const char* text) {
	const char* cursor = text;
	while (*cursor) {
		++cursor;
	}
	return (wm_size_t)(cursor - text);
}

wm_size_t strnlen(const char* text, wm_size_t max_length) {
	wm_size_t length = 0;
	while (length < max_length && text[length]) {
		++length;
	}
	return length;
}

int strcmp(const char* left, const char* right) {
	while (*left && *left == *right) {
		++left;
		++right;
	}
	return (int)(unsigned char)*left - (int)(unsigned char)*right;
}

int strncmp(const char* left, const char* right, wm_size_t count) {
	for (wm_size_t i = 0; i < count; ++i) {
		const unsigned char l = (unsigned char)left[i];
		const unsigned char r = (unsigned char)right[i];
		if (l != r || l == 0 || r == 0) {
			return (int)l - (int)r;
		}
	}
	return 0;
}

int strcoll(const char* left, const char* right) {
	return strcmp(left, right);
}

char* strcpy(char* destination, const char* source) {
	char* cursor = destination;
	while ((*cursor++ = *source++) != '\0') {
	}
	return destination;
}

char* strncpy(char* destination, const char* source, wm_size_t count) {
	wm_size_t i = 0;
	for (; i < count && source[i] != '\0'; ++i) {
		destination[i] = source[i];
	}
	for (; i < count; ++i) {
		destination[i] = '\0';
	}
	return destination;
}

char* strcat(char* destination, const char* source) {
	strcpy(destination + strlen(destination), source);
	return destination;
}

char* strncat(char* destination, const char* source, wm_size_t count) {
	char* cursor = destination + strlen(destination);
	wm_size_t i = 0;
	for (; i < count && source[i] != '\0'; ++i) {
		cursor[i] = source[i];
	}
	cursor[i] = '\0';
	return destination;
}

char* strchr(const char* text, int value) {
	const char needle = (char)value;
	for (;;) {
		if (*text == needle) {
			return (char*)text;
		}
		if (*text == '\0') {
			return 0;
		}
		++text;
	}
}

char* strrchr(const char* text, int value) {
	const char needle = (char)value;
	const char* found = 0;
	for (;;) {
		if (*text == needle) {
			found = text;
		}
		if (*text == '\0') {
			return (char*)found;
		}
		++text;
	}
}

wm_size_t strspn(const char* text, const char* accept) {
	wm_size_t count = 0;
	for (; text[count] != '\0'; ++count) {
		if (!strchr(accept, text[count])) {
			break;
		}
	}
	return count;
}

wm_size_t strcspn(const char* text, const char* reject) {
	wm_size_t count = 0;
	for (; text[count] != '\0'; ++count) {
		if (strchr(reject, text[count])) {
			break;
		}
	}
	return count;
}

char* strpbrk(const char* text, const char* accept) {
	for (; *text != '\0'; ++text) {
		if (strchr(accept, *text)) {
			return (char*)text;
		}
	}
	return 0;
}

char* strstr(const char* haystack, const char* needle) {
	if (!needle[0]) {
		return (char*)haystack;
	}
	for (; *haystack; ++haystack) {
		const char* h = haystack;
		const char* n = needle;
		while (*h && *n && *h == *n) {
			++h;
			++n;
		}
		if (!*n) {
			return (char*)haystack;
		}
	}
	return 0;
}

char* strtok(char* text, const char* delimiters) {
	static char* next = 0;
	char* token;
	if (!text) {
		text = next;
	}
	if (!text) {
		return 0;
	}
	text += strspn(text, delimiters);
	if (*text == '\0') {
		next = 0;
		return 0;
	}
	token = text;
	text += strcspn(text, delimiters);
	if (*text != '\0') {
		*text++ = '\0';
		next = text;
	} else {
		next = 0;
	}
	return token;
}

wm_size_t strxfrm(char* destination, const char* source, wm_size_t count) {
	const wm_size_t length = strlen(source);
	if (destination && count > 0) {
		wm_size_t copy_count = length < count - 1 ? length : count - 1;
		for (wm_size_t i = 0; i < copy_count; ++i) {
			destination[i] = source[i];
		}
		destination[copy_count] = '\0';
	}
	return length;
}

char* strerror(int error_number) {
	switch (error_number) {
		case 0: return (char*)"No error";
		case 1: return (char*)"Operation not permitted";
		case 2: return (char*)"No such file or directory";
		case 5: return (char*)"Input/output error";
		case 9: return (char*)"Bad file descriptor";
		case 12: return (char*)"Cannot allocate memory";
		case 13: return (char*)"Permission denied";
		case 17: return (char*)"File exists";
		case 22: return (char*)"Invalid argument";
		case WM_ERANGE: return (char*)"Result too large";
		default: return (char*)"Unknown error";
	}
}

char* strdup(const char* text) {
	if (!text) {
		return 0;
	}
	const wm_size_t length = strlen(text);
	char* copy = (char*)malloc(length + 1);
	if (!copy) {
		return 0;
	}
	memcpy(copy, text, length + 1);
	return copy;
}

int isalpha(int value) {
	return (value >= 'A' && value <= 'Z') || (value >= 'a' && value <= 'z');
}

int isdigit(int value) {
	return value >= '0' && value <= '9';
}

int isspace(int value) {
	return wm_is_space(value);
}

int isalnum(int value) {
	return isalpha(value) || isdigit(value);
}

int isxdigit(int value) {
	return (value >= '0' && value <= '9') ||
		(value >= 'a' && value <= 'f') ||
		(value >= 'A' && value <= 'F');
}

int isblank(int value) {
	return value == ' ' || value == '\t';
}

int islower(int value) {
	return value >= 'a' && value <= 'z';
}

int isupper(int value) {
	return value >= 'A' && value <= 'Z';
}

int iscntrl(int value) {
	return (value >= 0 && value < 32) || value == 127;
}

int isprint(int value) {
	return value >= 32 && value < 127;
}

int isgraph(int value) {
	return value > 32 && value < 127;
}

int ispunct(int value) {
	return isgraph(value) && !isalnum(value);
}

int tolower(int value) {
	return (value >= 'A' && value <= 'Z') ? value + ('a' - 'A') : value;
}

int toupper(int value) {
	return (value >= 'a' && value <= 'z') ? value - ('a' - 'A') : value;
}

void* calloc(wm_size_t count, wm_size_t size) {
	if (count != 0 && size > ((wm_size_t)-1) / count) {
		return 0;
	}
	const wm_size_t total = count * size;
	void* memory = malloc(total);
	if (memory) {
		memset(memory, 0, total);
	}
	return memory;
}

static void wm_swap_record(unsigned char* left, unsigned char* right, wm_size_t size) {
	for (wm_size_t i = 0; i < size; ++i) {
		unsigned char tmp = left[i];
		left[i] = right[i];
		right[i] = tmp;
	}
}

void qsort(void* base, wm_size_t count, wm_size_t size, int (*compare)(const void*, const void*)) {
	unsigned char* bytes = (unsigned char*)base;
	if (!base || !compare || size == 0 || count < 2) {
		return;
	}
	for (wm_size_t i = 1; i < count; ++i) {
		wm_size_t j = i;
		while (j > 0) {
			unsigned char* current = bytes + j * size;
			unsigned char* previous = bytes + (j - 1) * size;
			if (compare(previous, current) <= 0) {
				break;
			}
			wm_swap_record(previous, current, size);
			--j;
		}
	}
}

void* bsearch(const void* key, const void* base, wm_size_t count, wm_size_t size, int (*compare)(const void*, const void*)) {
	const unsigned char* bytes = (const unsigned char*)base;
	wm_size_t first = 0;
	if (!key || !base || !compare || size == 0) {
		return 0;
	}
	while (count > 0) {
		const wm_size_t step = count / 2;
		const wm_size_t middle = first + step;
		const void* item = bytes + middle * size;
		const int order = compare(key, item);
		if (order == 0) {
			return (void*)item;
		}
		if (order > 0) {
			first = middle + 1;
			count -= step + 1;
		} else {
			count = step;
		}
	}
	return 0;
}

static unsigned int wm_rand_state = 1u;

void srand(unsigned int seed) {
	wm_rand_state = seed ? seed : 1u;
}

int rand(void) {
	wm_rand_state = wm_rand_state * 1103515245u + 12345u;
	return (int)((wm_rand_state >> 16u) & 0x7fffu);
}

static const char* wm_parse_integer_prefix(const char* text, int* sign, int* base) {
	const char* cursor = text;
	while (wm_is_space((unsigned char)*cursor)) {
		++cursor;
	}

	*sign = 1;
	if (*cursor == '+' || *cursor == '-') {
		if (*cursor == '-') {
			*sign = -1;
		}
		++cursor;
	}

	if (*base == 0) {
		if (cursor[0] == '0' && (cursor[1] == 'x' || cursor[1] == 'X')) {
			*base = 16;
			cursor += 2;
		} else if (cursor[0] == '0') {
			*base = 8;
		} else {
			*base = 10;
		}
	} else if (*base == 16 && cursor[0] == '0' && (cursor[1] == 'x' || cursor[1] == 'X')) {
		cursor += 2;
	}

	if (*base < 2 || *base > 36) {
		*base = 10;
	}
	return cursor;
}

static wm_u64 wm_parse_unsigned(const char* text, char** endptr, int base, int* negative, int* overflow) {
	const char* original = text;
	int sign = 1;
	const char* cursor = wm_parse_integer_prefix(text, &sign, &base);
	const char* first_digit = cursor;
	wm_u64 value = 0;
	const wm_u64 max_value = ~0ULL;

	*negative = sign < 0;
	*overflow = 0;
	for (;;) {
		const int digit = wm_digit_value((unsigned char)*cursor);
		if (digit < 0 || digit >= base) {
			break;
		}
		if (value > (max_value - (wm_u64)digit) / (wm_u64)base) {
			*overflow = 1;
			value = max_value;
		} else if (!*overflow) {
			value = value * (wm_u64)base + (wm_u64)digit;
		}
		++cursor;
	}

	if (cursor == first_digit) {
		if (endptr) *endptr = (char*)original;
		return 0;
	}
	if (endptr) *endptr = (char*)cursor;
	return value;
}

unsigned long long strtoull(const char* text, char** endptr, int base) {
	int negative = 0;
	int overflow = 0;
	wm_u64 value = wm_parse_unsigned(text, endptr, base, &negative, &overflow);
	if (overflow) {
		wm_set_errno(WM_ERANGE);
		return ~0ULL;
	}
	return negative ? (wm_u64)(0ULL - value) : value;
}

unsigned long strtoul(const char* text, char** endptr, int base) {
	const wm_u64 value = strtoull(text, endptr, base);
	const unsigned long max_value = ~0UL;
	if (value > (wm_u64)max_value) {
		wm_set_errno(WM_ERANGE);
		return max_value;
	}
	return (unsigned long)value;
}

long long strtoll(const char* text, char** endptr, int base) {
	int negative = 0;
	int overflow = 0;
	const wm_u64 value = wm_parse_unsigned(text, endptr, base, &negative, &overflow);
	const wm_u64 max_positive = (wm_u64)(~0ULL >> 1);
	const wm_u64 max_negative_magnitude = max_positive + 1ULL;

	if (overflow || (!negative && value > max_positive) || (negative && value > max_negative_magnitude)) {
		wm_set_errno(WM_ERANGE);
		return negative ? (wm_i64)(1ULL << 63) : (wm_i64)max_positive;
	}
	if (negative) {
		return value == max_negative_magnitude ? (wm_i64)(1ULL << 63) : -(wm_i64)value;
	}
	return (wm_i64)value;
}

long strtol(const char* text, char** endptr, int base) {
	const wm_i64 value = strtoll(text, endptr, base);
	const long max_positive = (long)(~0UL >> 1);
	const long min_negative = -max_positive - 1L;
	if (value > (wm_i64)max_positive) {
		wm_set_errno(WM_ERANGE);
		return max_positive;
	}
	if (value < (wm_i64)min_negative) {
		wm_set_errno(WM_ERANGE);
		return min_negative;
	}
	return (long)value;
}

static double wm_pow10_int(int exponent) {
	double result = 1.0;
	double factor = 10.0;
	int exp = exponent;
	if (exp < 0) {
		exp = -exp;
		factor = 0.1;
	}
	while (exp > 0) {
		if (exp & 1) {
			result *= factor;
		}
		factor *= factor;
		exp >>= 1;
	}
	return result;
}

int wm_parse_double_strict(const char* begin, const char* end, double* out_value) {
	if (!begin || !end || begin == end || !out_value) {
		return 0;
	}

	const char* cursor = begin;
	int sign = 1;
	int saw_digit = 0;
	double value = 0.0;
	double place = 0.1;

	if (*cursor == '+' || *cursor == '-') {
		if (*cursor == '-') {
			sign = -1;
		}
		++cursor;
		if (cursor == end) {
			return 0;
		}
	}

	while (cursor != end && *cursor >= '0' && *cursor <= '9') {
		saw_digit = 1;
		value = value * 10.0 + (double)(*cursor - '0');
		++cursor;
	}

	if (cursor != end && *cursor == '.') {
		++cursor;
		while (cursor != end && *cursor >= '0' && *cursor <= '9') {
			saw_digit = 1;
			value += (double)(*cursor - '0') * place;
			place *= 0.1;
			++cursor;
		}
	}

	if (!saw_digit) {
		return 0;
	}

	if (cursor != end && (*cursor == 'e' || *cursor == 'E')) {
		++cursor;
		int exponent_sign = 1;
		int exponent = 0;
		int saw_exponent_digit = 0;
		if (cursor != end && (*cursor == '+' || *cursor == '-')) {
			if (*cursor == '-') {
				exponent_sign = -1;
			}
			++cursor;
		}
		while (cursor != end && *cursor >= '0' && *cursor <= '9') {
			saw_exponent_digit = 1;
			if (exponent < 10000) {
				exponent = exponent * 10 + (*cursor - '0');
			}
			++cursor;
		}
		if (!saw_exponent_digit) {
			return 0;
		}
		value *= wm_pow10_int(exponent * exponent_sign);
	}

	if (cursor != end) {
		return 0;
	}

	*out_value = sign < 0 ? -value : value;
	return 1;
}

double strtod(const char* text, char** endptr) {
	const char* original = text;
	const char* cursor = text;
	int sign = 1;
	int saw_digit = 0;
	double value = 0.0;
	double place = 0.1;

	while (wm_is_space((unsigned char)*cursor)) {
		++cursor;
	}
	if (*cursor == '+' || *cursor == '-') {
		if (*cursor == '-') {
			sign = -1;
		}
		++cursor;
	}

	while (*cursor >= '0' && *cursor <= '9') {
		saw_digit = 1;
		value = value * 10.0 + (double)(*cursor - '0');
		++cursor;
	}

	if (*cursor == '.') {
		++cursor;
		while (*cursor >= '0' && *cursor <= '9') {
			saw_digit = 1;
			value += (double)(*cursor - '0') * place;
			place *= 0.1;
			++cursor;
		}
	}

	if (!saw_digit) {
		if (endptr) *endptr = (char*)original;
		return 0.0;
	}

	if (*cursor == 'e' || *cursor == 'E') {
		const char* exponent_start = cursor;
		int exponent_sign = 1;
		int exponent = 0;
		int saw_exponent_digit = 0;
		++cursor;
		if (*cursor == '+' || *cursor == '-') {
			if (*cursor == '-') {
				exponent_sign = -1;
			}
			++cursor;
		}
		while (*cursor >= '0' && *cursor <= '9') {
			saw_exponent_digit = 1;
			if (exponent < 10000) {
				exponent = exponent * 10 + (*cursor - '0');
			}
			++cursor;
		}
		if (saw_exponent_digit) {
			value *= wm_pow10_int(exponent * exponent_sign);
		} else {
			cursor = exponent_start;
		}
	}

	if (endptr) {
		*endptr = (char*)cursor;
	}
	return sign < 0 ? -value : value;
}

float strtof(const char* text, char** endptr) {
	return (float)strtod(text, endptr);
}

int atoi(const char* text) {
	return (int)strtol(text, 0, 10);
}

long atol(const char* text) {
	return strtol(text, 0, 10);
}

long long atoll(const char* text) {
	return strtoll(text, 0, 10);
}

int abs(int value) {
	return value < 0 ? -value : value;
}

long labs(long value) {
	return value < 0 ? -value : value;
}

long long llabs(long long value) {
	return value < 0 ? -value : value;
}

div_t div(int numerator, int denominator) {
	div_t result;
	result.quot = numerator / denominator;
	result.rem = numerator % denominator;
	return result;
}

ldiv_t ldiv(long numerator, long denominator) {
	ldiv_t result;
	result.quot = numerator / denominator;
	result.rem = numerator % denominator;
	return result;
}

lldiv_t lldiv(long long numerator, long long denominator) {
	lldiv_t result;
	result.quot = numerator / denominator;
	result.rem = numerator % denominator;
	return result;
}

double fabs(double value) {
	return value < 0.0 ? -value : value;
}

float fabsf(float value) {
	return value < 0.0f ? -value : value;
}

double copysign(double magnitude, double sign) {
	const double mag = fabs(magnitude);
	return sign < 0.0 || (sign == 0.0 && 1.0 / sign < 0.0) ? -mag : mag;
}

float copysignf(float magnitude, float sign) {
	const float mag = fabsf(magnitude);
	return sign < 0.0f || (sign == 0.0f && 1.0f / sign < 0.0f) ? -mag : mag;
}

int isfinite(double value) {
	union {
		double d;
		wm_u64 u;
	} bits;
	bits.d = value;
	return (bits.u & 0x7ff0000000000000ULL) != 0x7ff0000000000000ULL;
}

double trunc(double value) {
	if (!isfinite(value) || value >= 9223372036854775807.0 || value <= -9223372036854775807.0) {
		return value;
	}
	return (double)(wm_i64)value;
}

float truncf(float value) {
	return (float)trunc((double)value);
}

double floor(double value) {
	const double truncated = trunc(value);
	if (truncated > value) {
		return truncated - 1.0;
	}
	return truncated;
}

float floorf(float value) {
	return (float)floor((double)value);
}

double ceil(double value) {
	const double truncated = trunc(value);
	if (truncated < value) {
		return truncated + 1.0;
	}
	return truncated;
}

float ceilf(float value) {
	return (float)ceil((double)value);
}

double round(double value) {
	return value >= 0.0 ? floor(value + 0.5) : ceil(value - 0.5);
}

float roundf(float value) {
	return (float)round((double)value);
}

long double roundl(long double value) {
	return (long double)round((double)value);
}

double nearbyint(double value) {
	return round(value);
}

float nearbyintf(float value) {
	return (float)nearbyint((double)value);
}

long double nearbyintl(long double value) {
	return (long double)nearbyint((double)value);
}

double rint(double value) {
	return nearbyint(value);
}

float rintf(float value) {
	return (float)rint((double)value);
}

long double rintl(long double value) {
	return (long double)rint((double)value);
}

long lrint(double value) {
	return (long)rint(value);
}

long lrintf(float value) {
	return (long)rint((double)value);
}

long lrintl(long double value) {
	return (long)rint((double)value);
}

long lround(double value) {
	return (long)round(value);
}

long lroundf(float value) {
	return (long)round((double)value);
}

long lroundl(long double value) {
	return (long)round((double)value);
}

long long llrint(double value) {
	return (long long)rint(value);
}

long long llrintf(float value) {
	return (long long)rint((double)value);
}

long long llrintl(long double value) {
	return (long long)rint((double)value);
}

long long llround(double value) {
	return (long long)round(value);
}

long long llroundf(float value) {
	return (long long)round((double)value);
}

long long llroundl(long double value) {
	return (long long)round((double)value);
}

double modf(double value, double* integer_part) {
	double integral;
	if (!isfinite(value)) {
		integral = value;
		if (integer_part) {
			*integer_part = integral;
		}
		return value != value ? value : copysign(0.0, value);
	}
	integral = trunc(value);
	if (integer_part) {
		*integer_part = integral;
	}
	return value - integral;
}

float modff(float value, float* integer_part) {
	double integer_double = 0.0;
	const float fraction = (float)modf((double)value, &integer_double);
	if (integer_part) {
		*integer_part = (float)integer_double;
	}
	return fraction;
}

long double modfl(long double value, long double* integer_part) {
	double integer_double = 0.0;
	const long double fraction = (long double)modf((double)value, &integer_double);
	if (integer_part) {
		*integer_part = (long double)integer_double;
	}
	return fraction;
}

double fmod(double x, double y) {
	if (y == 0.0 || !isfinite(x) || !isfinite(y)) {
		return 0.0 / 0.0;
	}
	const double quotient = trunc(x / y);
	return x - quotient * y;
}

float fmodf(float x, float y) {
	return (float)fmod((double)x, (double)y);
}

double sqrt(double value) {
	if (value < 0.0) {
		return 0.0 / 0.0;
	}
	if (value == 0.0 || value == 1.0) {
		return value;
	}
	double guess = value > 1.0 ? value : 1.0;
	for (int i = 0; i < 32; ++i) {
		guess = 0.5 * (guess + value / guess);
	}
	return guess;
}

float sqrtf(float value) {
	return (float)sqrt((double)value);
}

static double wm_reduce_radians(double value) {
	const double two_pi = 6.28318530717958647692;
	value = fmod(value, two_pi);
	if (value > 3.14159265358979323846) {
		value -= two_pi;
	} else if (value < -3.14159265358979323846) {
		value += two_pi;
	}
	return value;
}

double sin(double value) {
	const double x = wm_reduce_radians(value);
	const double x2 = x * x;
	double term = x;
	double sum = x;
	term *= -x2 / (2.0 * 3.0);
	sum += term;
	term *= -x2 / (4.0 * 5.0);
	sum += term;
	term *= -x2 / (6.0 * 7.0);
	sum += term;
	term *= -x2 / (8.0 * 9.0);
	sum += term;
	term *= -x2 / (10.0 * 11.0);
	sum += term;
	term *= -x2 / (12.0 * 13.0);
	sum += term;
	return sum;
}

float sinf(float value) {
	return (float)sin((double)value);
}

double cos(double value) {
	const double x = wm_reduce_radians(value);
	const double x2 = x * x;
	double term = 1.0;
	double sum = 1.0;
	term *= -x2 / (1.0 * 2.0);
	sum += term;
	term *= -x2 / (3.0 * 4.0);
	sum += term;
	term *= -x2 / (5.0 * 6.0);
	sum += term;
	term *= -x2 / (7.0 * 8.0);
	sum += term;
	term *= -x2 / (9.0 * 10.0);
	sum += term;
	term *= -x2 / (11.0 * 12.0);
	sum += term;
	return sum;
}

float cosf(float value) {
	return (float)cos((double)value);
}

double tan(double value) {
	const double cosine = cos(value);
	return sin(value) / cosine;
}

float tanf(float value) {
	return (float)tan((double)value);
}

long double tanl(long double value) {
	return (long double)tan((double)value);
}

static double wm_atan_unit(double value) {
	const double x2 = value * value;
	double term = value;
	double sum = value;
	term *= -x2;
	sum += term / 3.0;
	term *= -x2;
	sum += term / 5.0;
	term *= -x2;
	sum += term / 7.0;
	term *= -x2;
	sum += term / 9.0;
	term *= -x2;
	sum += term / 11.0;
	term *= -x2;
	sum += term / 13.0;
	return sum;
}

static double wm_atan(double value) {
	const double pi_over_two = 1.57079632679489661923;
	if (value > 1.0) {
		return pi_over_two - wm_atan_unit(1.0 / value);
	}
	if (value < -1.0) {
		return -pi_over_two - wm_atan_unit(1.0 / value);
	}
	return wm_atan_unit(value);
}

double atan(double value) {
	return wm_atan(value);
}

float atanf(float value) {
	return (float)atan((double)value);
}

long double atanl(long double value) {
	return (long double)atan((double)value);
}

double atan2(double y, double x) {
	const double pi = 3.14159265358979323846;
	if (x > 0.0) {
		return wm_atan(y / x);
	}
	if (x < 0.0 && y >= 0.0) {
		return wm_atan(y / x) + pi;
	}
	if (x < 0.0 && y < 0.0) {
		return wm_atan(y / x) - pi;
	}
	if (x == 0.0 && y > 0.0) {
		return pi * 0.5;
	}
	if (x == 0.0 && y < 0.0) {
		return -pi * 0.5;
	}
	return 0.0;
}

float atan2f(float y, float x) {
	return (float)atan2((double)y, (double)x);
}

double asin(double value) {
	const double pi_over_two = 1.57079632679489661923;
	if (value < -1.0 || value > 1.0) {
		return 0.0 / 0.0;
	}
	if (value == 1.0) {
		return pi_over_two;
	}
	if (value == -1.0) {
		return -pi_over_two;
	}
	return atan2(value, sqrt(1.0 - value * value));
}

float asinf(float value) {
	return (float)asin((double)value);
}

long double asinl(long double value) {
	return (long double)asin((double)value);
}

double acos(double value) {
	const double pi_over_two = 1.57079632679489661923;
	if (value < -1.0 || value > 1.0) {
		return 0.0 / 0.0;
	}
	return pi_over_two - asin(value);
}

float acosf(float value) {
	return (float)acos((double)value);
}

long double acosl(long double value) {
	return (long double)acos((double)value);
}

static double wm_exp(double value) {
	int scale = 0;
	while (value > 0.5) {
		value *= 0.5;
		++scale;
	}
	while (value < -0.5) {
		value *= 0.5;
		++scale;
	}

	double term = 1.0;
	double sum = 1.0;
	for (int i = 1; i <= 24; ++i) {
		term *= value / (double)i;
		sum += term;
	}
	for (int i = 0; i < scale; ++i) {
		sum *= sum;
	}
	return sum;
}

double exp(double value) {
	return wm_exp(value);
}

float expf(float value) {
	return (float)exp((double)value);
}

long double expl(long double value) {
	return (long double)exp((double)value);
}

double sinh(double value) {
	const double positive = exp(value);
	const double negative = exp(-value);
	return (positive - negative) * 0.5;
}

float sinhf(float value) {
	return (float)sinh((double)value);
}

long double sinhl(long double value) {
	return (long double)sinh((double)value);
}

double cosh(double value) {
	const double positive = exp(value);
	const double negative = exp(-value);
	return (positive + negative) * 0.5;
}

float coshf(float value) {
	return (float)cosh((double)value);
}

long double coshl(long double value) {
	return (long double)cosh((double)value);
}

double tanh(double value) {
	const double positive = exp(value);
	const double negative = exp(-value);
	return (positive - negative) / (positive + negative);
}

float tanhf(float value) {
	return (float)tanh((double)value);
}

long double tanhl(long double value) {
	return (long double)tanh((double)value);
}

double log(double value) {
	if (value <= 0.0) {
		return 0.0 / 0.0;
	}

	const double ln2 = 0.69314718055994530942;
	int exponent = 0;
	while (value > 1.5) {
		value *= 0.5;
		++exponent;
	}
	while (value < 0.75) {
		value *= 2.0;
		--exponent;
	}

	const double z = (value - 1.0) / (value + 1.0);
	const double z2 = z * z;
	double term = z;
	double sum = 0.0;
	for (int denom = 1; denom <= 25; denom += 2) {
		sum += term / (double)denom;
		term *= z2;
	}
	return 2.0 * sum + (double)exponent * ln2;
}

float logf(float value) {
	return (float)log((double)value);
}

double log10(double value) {
	return log(value) / 2.30258509299404568402;
}

float log10f(float value) {
	return (float)log10((double)value);
}

long double log10l(long double value) {
	return (long double)log10((double)value);
}

double log2(double value) {
	return log(value) / 0.69314718055994530942;
}

float log2f(float value) {
	return (float)log2((double)value);
}

long double log2l(long double value) {
	return (long double)log2((double)value);
}

double log1p(double value) {
	return log(1.0 + value);
}

float log1pf(float value) {
	return (float)log1p((double)value);
}

long double log1pl(long double value) {
	return (long double)log1p((double)value);
}

double logb(double value) {
	if (value == 0.0) {
		return -1.0 / 0.0;
	}
	if (!isfinite(value)) {
		return value * value;
	}

	value = fabs(value);
	int exponent = 0;
	while (value >= 2.0) {
		value *= 0.5;
		++exponent;
	}
	while (value < 1.0) {
		value *= 2.0;
		--exponent;
	}
	return (double)exponent;
}

float logbf(float value) {
	return (float)logb((double)value);
}

long double logbl(long double value) {
	return (long double)logb((double)value);
}

double exp2(double value) {
	return wm_exp(value * 0.69314718055994530942);
}

float exp2f(float value) {
	return (float)exp2((double)value);
}

long double exp2l(long double value) {
	return (long double)exp2((double)value);
}

double erf(double value) {
	if (!isfinite(value)) {
		return value < 0.0 ? -1.0 : 1.0;
	}

	const double sign = value < 0.0 ? -1.0 : 1.0;
	const double x = fabs(value);
	const double t = 1.0 / (1.0 + 0.3275911 * x);
	const double poly = (((((1.061405429 * t - 1.453152027) * t) +
		1.421413741) * t - 0.284496736) * t + 0.254829592) * t;
	return sign * (1.0 - poly * exp(-(x * x)));
}

float erff(float value) {
	return (float)erf((double)value);
}

long double erfl(long double value) {
	return (long double)erf((double)value);
}

static int wm_is_integer_double(double value) {
	return isfinite(value) && trunc(value) == value;
}

double pow(double base, double exponent) {
	if (exponent == 0.0) {
		return 1.0;
	}
	if (base == 0.0) {
		return exponent > 0.0 ? 0.0 : 1.0 / 0.0;
	}
	if (wm_is_integer_double(exponent)) {
		wm_i64 exp = (wm_i64)exponent;
		int invert = 0;
		double result = 1.0;
		if (exp < 0) {
			invert = 1;
			exp = -exp;
		}
		while (exp > 0) {
			if (exp & 1) {
				result *= base;
			}
			base *= base;
			exp >>= 1;
		}
		return invert ? 1.0 / result : result;
	}
	if (base < 0.0) {
		return 0.0 / 0.0;
	}
	return wm_exp(log(base) * exponent);
}

float powf(float base, float exponent) {
	return (float)pow((double)base, (double)exponent);
}

int wm_parse_int_strict(const char* begin, const char* end, int* out_value) {
	if (!begin || !end || begin == end || !out_value) {
		return 0;
	}
	int sign = 1;
	const char* cursor = begin;
	if (*cursor == '+' || *cursor == '-') {
		sign = *cursor == '-' ? -1 : 1;
		++cursor;
		if (cursor == end) {
			return 0;
		}
	}

	wm_u64 value = 0;
	const wm_u64 positive_limit = sign < 0 ? 2147483648ULL : 2147483647ULL;
	for (; cursor != end; ++cursor) {
		if (*cursor < '0' || *cursor > '9') {
			return 0;
		}
		value = value * 10ULL + (wm_u64)(*cursor - '0');
		if (value > positive_limit) {
			return 0;
		}
	}

	if (sign < 0 && value == 2147483648ULL) {
		*out_value = (int)(-2147483647 - 1);
	} else {
		*out_value = (int)value * sign;
	}
	return 1;
}

int wm_parse_i64_strict(const char* begin, const char* end, long long* out_value) {
	if (!begin || !end || begin == end || !out_value) {
		return 0;
	}
	int sign = 1;
	const char* cursor = begin;
	if (*cursor == '+' || *cursor == '-') {
		sign = *cursor == '-' ? -1 : 1;
		++cursor;
		if (cursor == end) {
			return 0;
		}
	}

	wm_u64 value = 0;
	const wm_u64 positive_limit = sign < 0 ? 9223372036854775808ULL : 9223372036854775807ULL;
	for (; cursor != end; ++cursor) {
		if (*cursor < '0' || *cursor > '9') {
			return 0;
		}
		value = value * 10ULL + (wm_u64)(*cursor - '0');
		if (value > positive_limit) {
			return 0;
		}
	}

	if (sign < 0 && value == 9223372036854775808ULL) {
		*out_value = (wm_i64)(1ULL << 63);
	} else {
		*out_value = (wm_i64)value * (wm_i64)sign;
	}
	return 1;
}

static char* wm_format_u64_core(wm_u64 value, char* buffer, wm_size_t buffer_size) {
	char scratch[32];
	wm_size_t count = 0;

	if (!buffer || buffer_size == 0) {
		return 0;
	}

	do {
		scratch[count++] = (char)('0' + (value % 10ULL));
		value /= 10ULL;
	} while (value != 0ULL && count < sizeof(scratch));

	if (count > buffer_size) {
		return 0;
	}

	for (wm_size_t i = 0; i < count; ++i) {
		buffer[i] = scratch[count - i - 1];
	}
	return buffer + count;
}

char* wm_format_u64(unsigned long long value, char* buffer, wm_size_t buffer_size) {
	return wm_format_u64_core((wm_u64)value, buffer, buffer_size);
}

char* wm_format_i64(long long value, char* buffer, wm_size_t buffer_size) {
	char scratch[32];
	wm_size_t count = 0;
	int negative = value < 0;
	wm_u64 magnitude = negative
		? (wm_u64)(-(value + 1)) + 1ULL
		: (wm_u64)value;

	if (!buffer || buffer_size == 0) {
		return 0;
	}

	do {
		scratch[count++] = (char)('0' + (magnitude % 10ULL));
		magnitude /= 10ULL;
	} while (magnitude != 0ULL && count < sizeof(scratch));

	if (negative) {
		scratch[count++] = '-';
	}

	if (count > buffer_size) {
		return 0;
	}

	for (wm_size_t i = 0; i < count; ++i) {
		buffer[i] = scratch[count - i - 1];
	}
	return buffer + count;
}

char* wm_format_int(int value, char* buffer, wm_size_t buffer_size) {
	return wm_format_i64((long long)value, buffer, buffer_size);
}

static char* wm_format_literal(const char* text, char* buffer, wm_size_t buffer_size) {
	wm_size_t length = strlen(text);
	if (!buffer || length > buffer_size) {
		return 0;
	}
	for (wm_size_t i = 0; i < length; ++i) {
		buffer[i] = text[i];
	}
	return buffer + length;
}

char* wm_format_double(double value, char* buffer, wm_size_t buffer_size) {
	const int negative = value < 0.0 || (value == 0.0 && 1.0 / value < 0.0);
	if (value != value) {
		return wm_format_literal("nan", buffer, buffer_size);
	}
	if (!isfinite(value)) {
		return wm_format_literal(negative ? "-inf" : "inf", buffer, buffer_size);
	}

	double magnitude = negative ? -value : value;
	if (magnitude > 18446744073709551615.0) {
		return wm_format_literal(negative ? "-inf" : "inf", buffer, buffer_size);
	}

	wm_u64 whole = (wm_u64)magnitude;
	wm_u64 fractional = (wm_u64)((magnitude - (double)whole) * 1000000.0 + 0.5);
	if (fractional >= 1000000ULL) {
		++whole;
		fractional -= 1000000ULL;
	}

	char* cursor = buffer;
	wm_size_t remaining = buffer_size;
	if (!buffer || buffer_size == 0) {
		return 0;
	}
	if (negative) {
		*cursor++ = '-';
		--remaining;
	}

	char whole_buffer[32];
	char* whole_end = wm_format_u64_core(whole, whole_buffer, sizeof(whole_buffer));
	if (!whole_end) {
		return 0;
	}
	wm_size_t whole_length = (wm_size_t)(whole_end - whole_buffer);
	if (remaining < whole_length + 7u) {
		return 0;
	}
	for (wm_size_t i = 0; i < whole_length; ++i) {
		*cursor++ = whole_buffer[i];
	}
	*cursor++ = '.';

	wm_u64 divisor = 100000ULL;
	for (int i = 0; i < 6; ++i) {
		*cursor++ = (char)('0' + (fractional / divisor) % 10ULL);
		divisor /= 10ULL;
	}
	return cursor;
}

char* wm_format_float(float value, char* buffer, wm_size_t buffer_size) {
	return wm_format_double((double)value, buffer, buffer_size);
}
