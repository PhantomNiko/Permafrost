#ifndef WINTER_STD_CPP_H
#define WINTER_STD_CPP_H

#include "winter_algorithms.hpp"
#include "winter_std.h"

inline wm::string wm_string_from_buffer(const char* begin, const char* end) {
	return end ? wm::string(begin, (wm::size_t)(end - begin)) : wm::string();
}

inline wm::string wm_string_from_view(wm::string_view text) {
	return wm::string(text);
}

inline wm::string wm_to_string(int value) {
	char buffer[32];
	return wm_string_from_buffer(buffer, wm_format_int(value, buffer, sizeof(buffer)));
}

inline wm::string wm_to_string(unsigned int value) {
	char buffer[32];
	return wm_string_from_buffer(buffer, wm_format_u64(value, buffer, sizeof(buffer)));
}

inline wm::string wm_to_string(long value) {
	char buffer[32];
	return wm_string_from_buffer(buffer, wm_format_i64(value, buffer, sizeof(buffer)));
}

inline wm::string wm_to_string(unsigned long value) {
	char buffer[32];
	return wm_string_from_buffer(buffer, wm_format_u64(value, buffer, sizeof(buffer)));
}

inline wm::string wm_to_string(long long value) {
	char buffer[32];
	return wm_string_from_buffer(buffer, wm_format_i64(value, buffer, sizeof(buffer)));
}

inline wm::string wm_to_string(unsigned long long value) {
	char buffer[32];
	return wm_string_from_buffer(buffer, wm_format_u64(value, buffer, sizeof(buffer)));
}

inline wm::string wm_to_string(float value) {
	char buffer[96];
	return wm_string_from_buffer(buffer, wm_format_float(value, buffer, sizeof(buffer)));
}

inline wm::string wm_to_string(double value) {
	char buffer[96];
	return wm_string_from_buffer(buffer, wm_format_double(value, buffer, sizeof(buffer)));
}

inline bool wm_parse_int_string_strict(wm::string_view text, int& out_value) {
	const char* begin = text.data();
	const char* end = begin + text.size();
	return wm_parse_int_strict(begin, end, &out_value) != 0;
}

inline bool wm_parse_i64_string_strict(wm::string_view text, long long& out_value) {
	const char* begin = text.data();
	const char* end = begin + text.size();
	return wm_parse_i64_strict(begin, end, &out_value) != 0;
}

inline bool wm_parse_double_string_strict(wm::string_view text, double& out_value) {
	if (text.empty()) {
		return false;
	}
	double value = 0.0;
	const char* begin = text.data();
	const char* end = begin + text.size();
	if (wm_parse_double_strict(begin, end, &value) == 0) {
		return false;
	}
	out_value = value;
	return true;
}

#endif
