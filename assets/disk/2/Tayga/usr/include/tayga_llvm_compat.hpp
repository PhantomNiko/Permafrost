#ifndef WINTER_HEADER_TAYGA_LLVM_COMPAT
#define WINTER_HEADER_TAYGA_LLVM_COMPAT

#ifdef __cplusplus

#include <time.h>

#include "algorithm"
#include "type_traits"

#if defined(__has_include)
#if __has_include("llvm/ADT/Twine.h")
#define TAYGA_LLVM_COMPAT_HAS_TWINE 1
#include "llvm/ADT/Twine.h"
#endif
#endif

#ifndef TAYGA_LLVM_COMPAT_HAS_TWINE
#define TAYGA_LLVM_COMPAT_HAS_TWINE 0
#endif

namespace llvm {

template <typename InputIt1, typename InputIt2,
          typename = std::enable_if_t<std::is_pointer<std::decay_t<InputIt1>>::value &&
                                      std::is_pointer<std::decay_t<InputIt2>>::value>>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2) {
	return std::equal(first1, last1, first2);
}

template <typename InputIt1, typename InputIt2, typename BinaryPredicate,
          typename = std::enable_if_t<std::is_pointer<std::decay_t<InputIt1>>::value &&
                                      std::is_pointer<std::decay_t<InputIt2>>::value>>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, BinaryPredicate predicate) {
	return std::equal(first1, last1, first2, predicate);
}

#if TAYGA_LLVM_COMPAT_HAS_TWINE

template <typename Left, typename Right,
          typename = std::enable_if_t<std::is_same<std::decay_t<Left>, StringRef>::value &&
                                      std::is_same<std::decay_t<Right>, std::string>::value>>
inline Twine operator+(Left&& left, Right&& right) {
	return Twine(left) + Twine(right);
}

template <typename Left, typename Right,
          typename = std::enable_if_t<std::is_same<std::decay_t<Left>, std::string>::value &&
                                      std::is_same<std::decay_t<Right>, StringRef>::value>,
          typename = void>
inline Twine operator+(Left&& left, Right&& right) {
	return Twine(left) + Twine(right);
}

template <typename Left, typename Right,
          typename = std::enable_if_t<std::is_same<std::decay_t<Left>, StringRef>::value &&
                                      std::is_same<std::decay_t<Right>, std::string_view>::value>,
          typename = void, typename = void>
inline Twine operator+(Left&& left, Right&& right) {
	return Twine(left) + Twine(right);
}

template <typename Left, typename Right,
          typename = std::enable_if_t<std::is_same<std::decay_t<Left>, std::string_view>::value &&
                                      std::is_same<std::decay_t<Right>, StringRef>::value>,
          typename = void, typename = void, typename = void>
inline Twine operator+(Left&& left, Right&& right) {
	return Twine(left) + Twine(right);
}

template <typename Left, typename Right,
          typename = std::enable_if_t<std::is_same<std::decay_t<Left>, StringRef>::value &&
                                      std::is_base_of<SmallVectorImpl<char>, std::decay_t<Right>>::value>,
          typename = void, typename = void, typename = void, typename = void>
inline Twine operator+(Left&& left, const Right& right) {
	return Twine(left) + Twine(static_cast<const SmallVectorImpl<char>&>(right));
}

template <typename Left, typename Right,
          typename = std::enable_if_t<std::is_base_of<SmallVectorImpl<char>, std::decay_t<Left>>::value &&
                                      std::is_same<std::decay_t<Right>, StringRef>::value>,
          typename = void, typename = void, typename = void, typename = void, typename = void>
inline Twine operator+(const Left& left, Right&& right) {
	return Twine(static_cast<const SmallVectorImpl<char>&>(left)) + Twine(right);
}

template <typename Right,
          typename = std::enable_if_t<std::is_base_of<std::string, std::decay_t<Right>>::value>>
inline std::string operator+(const char* left, const Right& right) {
	std::string result(left);
	result += static_cast<const std::string&>(right);
	return result;
}

#endif

} // namespace llvm

#endif

#endif
