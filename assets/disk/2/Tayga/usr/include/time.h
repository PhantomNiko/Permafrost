#pragma once

#include <stddef.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _TAYGA_TIME_T_DEFINED
#define _TAYGA_TIME_T_DEFINED
typedef long time_t;
#endif

#ifndef _TAYGA_CLOCK_T_DEFINED
#define _TAYGA_CLOCK_T_DEFINED
typedef long clock_t;
#endif

#ifndef CLOCKS_PER_SEC
#define CLOCKS_PER_SEC 1000L
#endif

#ifndef TIME_UTC
#define TIME_UTC 1
#endif

#define CLOCK_REALTIME 0
#define CLOCK_MONOTONIC 1

struct tm {
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};

struct timespec {
	time_t tv_sec;
	long tv_nsec;
};

time_t time(time_t* outTime);
clock_t clock(void);
double difftime(time_t end, time_t beginning);
time_t mktime(struct tm* timeptr);
char* asctime(const struct tm* timeptr);
char* ctime(const time_t* timer);
struct tm* gmtime(const time_t* timer);
struct tm* localtime(const time_t* timer);
static inline struct tm* gmtime_r(const time_t* timer, struct tm* result) {
	struct tm* source = gmtime(timer);
	if (!source || !result) {
		return (struct tm*)0;
	}
	*result = *source;
	return result;
}
static inline struct tm* localtime_r(const time_t* timer, struct tm* result) {
	struct tm* source = localtime(timer);
	if (!source || !result) {
		return (struct tm*)0;
	}
	*result = *source;
	return result;
}
size_t strftime(char* buffer, size_t size, const char* format, const struct tm* timeptr);
int timespec_get(struct timespec* ts, int base);
int clock_gettime(clockid_t clockId, struct timespec* ts);
int nanosleep(const struct timespec* requested, struct timespec* remaining);

#ifdef __cplusplus
}
#endif
