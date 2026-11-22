#ifndef WINTER_STD_H
#define WINTER_STD_H

typedef __SIZE_TYPE__ wm_size_t;

#ifndef TAYGA_STDLIB_DIV_TYPES
typedef struct {
	int quot;
	int rem;
} div_t;

typedef struct {
	long quot;
	long rem;
} ldiv_t;

typedef struct {
	long long quot;
	long long rem;
} lldiv_t;
#define TAYGA_STDLIB_DIV_TYPES 1
#endif

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(__cplusplus) || defined(WINTER_STD_ENABLE_CXX_C_DECLARATIONS)

void* memcpy(void* destination, const void* source, wm_size_t count);
void* memmove(void* destination, const void* source, wm_size_t count);
void* memset(void* destination, int value, wm_size_t count);
int memcmp(const void* left, const void* right, wm_size_t count);
void* memchr(const void* memory, int value, wm_size_t count);

	wm_size_t strlen(const char* text);
	wm_size_t strnlen(const char* text, wm_size_t max_length);
	int strcmp(const char* left, const char* right);
int strncmp(const char* left, const char* right, wm_size_t count);
int strcoll(const char* left, const char* right);
char* strcpy(char* destination, const char* source);
char* strncpy(char* destination, const char* source, wm_size_t count);
char* strcat(char* destination, const char* source);
char* strncat(char* destination, const char* source, wm_size_t count);
char* strchr(const char* text, int value);
char* strrchr(const char* text, int value);
wm_size_t strspn(const char* text, const char* accept);
wm_size_t strcspn(const char* text, const char* reject);
char* strpbrk(const char* text, const char* accept);
char* strstr(const char* haystack, const char* needle);
char* strtok(char* text, const char* delimiters);
wm_size_t strxfrm(char* destination, const char* source, wm_size_t count);
char* strerror(int error_number);
char* strdup(const char* text);

int isalpha(int value);
int isdigit(int value);
int isspace(int value);
int isalnum(int value);
int isxdigit(int value);
int isblank(int value);
int islower(int value);
int isupper(int value);
int ispunct(int value);
int isprint(int value);
int iscntrl(int value);
int isgraph(int value);
int tolower(int value);
int toupper(int value);

void* malloc(wm_size_t size);
void free(void* ptr);
void* realloc(void* ptr, wm_size_t size);
void* calloc(wm_size_t count, wm_size_t size);

void qsort(void* base, wm_size_t count, wm_size_t size, int (*compare)(const void*, const void*));
void* bsearch(const void* key, const void* base, wm_size_t count, wm_size_t size, int (*compare)(const void*, const void*));
int rand(void);
void srand(unsigned int seed);

long strtol(const char* text, char** endptr, int base);
unsigned long strtoul(const char* text, char** endptr, int base);
long long strtoll(const char* text, char** endptr, int base);
unsigned long long strtoull(const char* text, char** endptr, int base);
double strtod(const char* text, char** endptr);
float strtof(const char* text, char** endptr);
int atoi(const char* text);
long atol(const char* text);
long long atoll(const char* text);
int abs(int value);
long labs(long value);
long long llabs(long long value);
div_t div(int numerator, int denominator);
ldiv_t ldiv(long numerator, long denominator);
lldiv_t lldiv(long long numerator, long long denominator);

double fabs(double value);
float fabsf(float value);
double copysign(double magnitude, double sign);
float copysignf(float magnitude, float sign);
double floor(double value);
float floorf(float value);
double ceil(double value);
float ceilf(float value);
double trunc(double value);
float truncf(float value);
double round(double value);
float roundf(float value);
long double roundl(long double value);
double nearbyint(double value);
float nearbyintf(float value);
long double nearbyintl(long double value);
double rint(double value);
float rintf(float value);
long double rintl(long double value);
long lrint(double value);
long lrintf(float value);
long lrintl(long double value);
long lround(double value);
long lroundf(float value);
long lroundl(long double value);
long long llrint(double value);
long long llrintf(float value);
long long llrintl(long double value);
long long llround(double value);
long long llroundf(float value);
long long llroundl(long double value);
double modf(double value, double* integer_part);
float modff(float value, float* integer_part);
long double modfl(long double value, long double* integer_part);
double fmod(double x, double y);
float fmodf(float x, float y);
double sqrt(double value);
float sqrtf(float value);
double sin(double value);
float sinf(float value);
double cos(double value);
float cosf(float value);
double tan(double value);
float tanf(float value);
long double tanl(long double value);
double sinh(double value);
float sinhf(float value);
long double sinhl(long double value);
double cosh(double value);
float coshf(float value);
long double coshl(long double value);
double tanh(double value);
float tanhf(float value);
long double tanhl(long double value);
double atan(double value);
float atanf(float value);
long double atanl(long double value);
double atan2(double y, double x);
float atan2f(float y, float x);
double asin(double value);
float asinf(float value);
long double asinl(long double value);
double acos(double value);
float acosf(float value);
long double acosl(long double value);
double log(double value);
float logf(float value);
double log10(double value);
float log10f(float value);
long double log10l(long double value);
double log2(double value);
float log2f(float value);
long double log2l(long double value);
double log1p(double value);
float log1pf(float value);
long double log1pl(long double value);
double logb(double value);
float logbf(float value);
long double logbl(long double value);
double exp(double value);
float expf(float value);
long double expl(long double value);
double exp2(double value);
float exp2f(float value);
long double exp2l(long double value);
double erf(double value);
float erff(float value);
long double erfl(long double value);
double pow(double base, double exponent);
float powf(float base, float exponent);
int isfinite(double value);

#endif

int wm_parse_int_strict(const char* begin, const char* end, int* out_value);
int wm_parse_i64_strict(const char* begin, const char* end, long long* out_value);
int wm_parse_double_strict(const char* begin, const char* end, double* out_value);
char* wm_format_int(int value, char* buffer, wm_size_t buffer_size);
char* wm_format_i64(long long value, char* buffer, wm_size_t buffer_size);
char* wm_format_u64(unsigned long long value, char* buffer, wm_size_t buffer_size);
char* wm_format_double(double value, char* buffer, wm_size_t buffer_size);
char* wm_format_float(float value, char* buffer, wm_size_t buffer_size);

#ifdef __cplusplus
}
#endif

#endif
