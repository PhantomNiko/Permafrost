#ifndef WINTER_ALGORITHMS_HPP
#define WINTER_ALGORITHMS_HPP

#include <initializer_list>
#include <new>

namespace llvm {
class BlockFrequency;
class StringRef;
class TypeSize;
namespace AArch64 {
struct ArchInfo;
struct CpuInfo;
struct ExtensionInfo;
struct FMVInfo;
}
namespace wasm {
struct WasmGlobalType;
struct WasmTableType;
}
}

namespace clang {
class PositiveAnalyzerOption;
}

#if defined(USE_WINTERBOOT)
#if defined(__has_include)
#if __has_include("libraries/generic_Intel32/baremetal_program_api.h")
#include "libraries/generic_Intel32/baremetal_program_api.h"
#define WM_WINTER_STD_HAS_PROGRAM_THREADS 1
#else
#define WM_WINTER_STD_HAS_PROGRAM_THREADS 0
#endif
#else
#define WM_WINTER_STD_HAS_PROGRAM_THREADS 0
#endif
#else
#define WM_WINTER_STD_HAS_PROGRAM_THREADS 0
#endif

namespace wm {

using size_t = __SIZE_TYPE__;
using ptrdiff_t = __PTRDIFF_TYPE__;
using nullptr_t = decltype(nullptr);

struct monostate {};

constexpr bool operator==(monostate, monostate) noexcept { return true; }
constexpr bool operator!=(monostate, monostate) noexcept { return false; }
constexpr bool operator<(monostate, monostate) noexcept { return false; }
constexpr bool operator>(monostate, monostate) noexcept { return false; }
constexpr bool operator<=(monostate, monostate) noexcept { return true; }
constexpr bool operator>=(monostate, monostate) noexcept { return true; }

class string;

struct input_iterator_tag {};
struct output_iterator_tag {};
struct forward_iterator_tag : input_iterator_tag {};
struct bidirectional_iterator_tag : forward_iterator_tag {};
struct random_access_iterator_tag : bidirectional_iterator_tag {};

constexpr size_t string_length(const char* text) {
	size_t length = 0;
	while (text && text[length] != '\0') {
		++length;
	}
	return length;
}

class string_view {
public:
	class const_reverse_iterator {
	public:
		using difference_type = ptrdiff_t;
		using value_type = char;
		using pointer = const char*;
		using reference = const char&;
		using iterator_category = random_access_iterator_tag;

		constexpr const_reverse_iterator() noexcept : current_(nullptr) {}
		explicit constexpr const_reverse_iterator(const char* current) noexcept : current_(current) {}

		constexpr reference operator*() const noexcept { return *(current_ - 1); }
		constexpr pointer operator->() const noexcept { return current_ - 1; }
		constexpr const_reverse_iterator& operator++() noexcept { --current_; return *this; }
		constexpr const_reverse_iterator operator++(int) noexcept {
			const_reverse_iterator copy(*this);
			--current_;
			return copy;
		}
		constexpr const_reverse_iterator& operator--() noexcept { ++current_; return *this; }
		constexpr const_reverse_iterator operator--(int) noexcept {
			const_reverse_iterator copy(*this);
			++current_;
			return copy;
		}
		constexpr const char* base() const noexcept { return current_; }
		constexpr bool operator==(const const_reverse_iterator& other) const noexcept { return current_ == other.current_; }
		constexpr bool operator!=(const const_reverse_iterator& other) const noexcept { return current_ != other.current_; }

	private:
		const char* current_;
	};

	static constexpr size_t npos = static_cast<size_t>(-1);

	constexpr string_view() noexcept : data_(nullptr), size_(0) {}
	constexpr string_view(char* text) noexcept : data_(text), size_(wm::string_length(text)) {}
	constexpr string_view(const char* text) noexcept : data_(text), size_(wm::string_length(text)) {}
	constexpr string_view(const char* text, size_t count) noexcept : data_(text), size_(count) {}

	template <size_t N>
	constexpr string_view(const char (&text)[N]) noexcept : data_(text), size_(N > 0 ? N - 1 : 0) {}

	template <typename StringLike>
	explicit string_view(const StringLike& text) : data_(text.data()), size_(text.size()) {}

	constexpr const char* data() const noexcept { return data_; }
	constexpr size_t size() const noexcept { return size_; }
	constexpr size_t length() const noexcept { return size_; }
	constexpr bool empty() const noexcept { return size_ == 0; }
	constexpr const char* begin() const noexcept { return data_; }
	constexpr const char* end() const noexcept { return data_ + size_; }
	constexpr const char* cbegin() const noexcept { return data_; }
	constexpr const char* cend() const noexcept { return data_ + size_; }
	constexpr const_reverse_iterator rbegin() const noexcept { return const_reverse_iterator(data_ + size_); }
	constexpr const_reverse_iterator rend() const noexcept { return const_reverse_iterator(data_); }
	constexpr const_reverse_iterator crbegin() const noexcept { return rbegin(); }
	constexpr const_reverse_iterator crend() const noexcept { return rend(); }
	constexpr char operator[](size_t index) const noexcept { return data_[index]; }
	constexpr char front() const noexcept { return data_[0]; }
	constexpr char back() const noexcept { return data_[size_ - 1]; }

	constexpr void remove_prefix(size_t count) noexcept {
		if (count > size_) {
			count = size_;
		}
		data_ += count;
		size_ -= count;
	}

	constexpr void remove_suffix(size_t count) noexcept {
		if (count > size_) {
			count = size_;
		}
		size_ -= count;
	}

	constexpr string_view substr(size_t position, size_t count = npos) const noexcept {
		if (position > size_) {
			position = size_;
		}
		const size_t remaining = size_ - position;
		if (count == npos || count > remaining) {
			count = remaining;
		}
		return string_view(data_ + position, count);
	}

	constexpr size_t find(char needle, size_t position = 0) const noexcept {
		for (size_t i = position; i < size_; ++i) {
			if (data_[i] == needle) {
				return i;
			}
		}
		return npos;
	}

	constexpr size_t find(string_view needle, size_t position = 0) const noexcept {
		if (needle.size_ == 0) {
			return position <= size_ ? position : npos;
		}
		if (needle.size_ > size_ || position > size_ - needle.size_) {
			return npos;
		}
		for (size_t i = position; i <= size_ - needle.size_; ++i) {
			bool match = true;
			for (size_t j = 0; j < needle.size_; ++j) {
				if (data_[i + j] != needle.data_[j]) {
					match = false;
					break;
				}
			}
			if (match) {
				return i;
			}
		}
		return npos;
	}

	constexpr size_t rfind(char needle, size_t position = npos) const noexcept {
		if (size_ == 0) {
			return npos;
		}
		size_t cursor = position == npos || position >= size_ ? size_ - 1 : position;
		for (;;) {
			if (data_[cursor] == needle) {
				return cursor;
			}
			if (cursor == 0) {
				break;
			}
			--cursor;
		}
		return npos;
	}

	constexpr size_t rfind(string_view needle, size_t position = npos) const noexcept {
		if (needle.empty()) {
			return position < size_ ? position : size_;
		}
		if (needle.size_ > size_) {
			return npos;
		}
		size_t cursor = size_ - needle.size_;
		if (position != npos && position < cursor) {
			cursor = position;
		}
		for (;;) {
			bool match = true;
			for (size_t i = 0; i < needle.size_; ++i) {
				if (data_[cursor + i] != needle.data_[i]) {
					match = false;
					break;
				}
			}
			if (match) {
				return cursor;
			}
			if (cursor == 0) {
				break;
			}
			--cursor;
		}
		return npos;
	}

	constexpr size_t find_first_of(char needle, size_t position = 0) const noexcept {
		return find(needle, position);
	}

	constexpr size_t find_first_of(string_view needles, size_t position = 0) const noexcept {
		for (size_t i = position; i < size_; ++i) {
			for (size_t j = 0; j < needles.size_; ++j) {
				if (data_[i] == needles.data_[j]) {
					return i;
				}
			}
		}
		return npos;
	}

	constexpr size_t find_first_not_of(char needle, size_t position = 0) const noexcept {
		for (size_t i = position; i < size_; ++i) {
			if (data_[i] != needle) {
				return i;
			}
		}
		return npos;
	}

	constexpr size_t find_first_not_of(string_view needles, size_t position = 0) const noexcept {
		for (size_t i = position; i < size_; ++i) {
			bool found = false;
			for (size_t j = 0; j < needles.size_; ++j) {
				if (data_[i] == needles.data_[j]) {
					found = true;
					break;
				}
			}
			if (!found) {
				return i;
			}
		}
		return npos;
	}

	constexpr size_t find_last_of(char needle, size_t position = npos) const noexcept {
		return rfind(needle, position);
	}

	constexpr size_t find_last_of(string_view needles, size_t position = npos) const noexcept {
		if (size_ == 0 || needles.empty()) {
			return npos;
		}
		size_t cursor = position == npos || position >= size_ ? size_ - 1 : position;
		for (;;) {
			for (size_t j = 0; j < needles.size_; ++j) {
				if (data_[cursor] == needles.data_[j]) {
					return cursor;
				}
			}
			if (cursor == 0) {
				break;
			}
			--cursor;
		}
		return npos;
	}

	constexpr size_t find_last_not_of(char needle, size_t position = npos) const noexcept {
		if (size_ == 0) {
			return npos;
		}
		size_t cursor = position == npos || position >= size_ ? size_ - 1 : position;
		for (;;) {
			if (data_[cursor] != needle) {
				return cursor;
			}
			if (cursor == 0) {
				break;
			}
			--cursor;
		}
		return npos;
	}

	constexpr size_t find_last_not_of(string_view needles, size_t position = npos) const noexcept {
		if (size_ == 0) {
			return npos;
		}
		size_t cursor = position == npos || position >= size_ ? size_ - 1 : position;
		for (;;) {
			bool found = false;
			for (size_t j = 0; j < needles.size_; ++j) {
				if (data_[cursor] == needles.data_[j]) {
					found = true;
					break;
				}
			}
			if (!found) {
				return cursor;
			}
			if (cursor == 0) {
				break;
			}
			--cursor;
		}
		return npos;
	}

	constexpr bool starts_with(string_view prefix) const noexcept {
		if (size_ < prefix.size_) {
			return false;
		}
		for (size_t i = 0; i < prefix.size_; ++i) {
			if (data_[i] != prefix.data_[i]) {
				return false;
			}
		}
		return true;
	}

	constexpr bool ends_with(string_view suffix) const noexcept {
		if (size_ < suffix.size_) {
			return false;
		}
		const size_t offset = size_ - suffix.size_;
		for (size_t i = 0; i < suffix.size_; ++i) {
			if (data_[offset + i] != suffix.data_[i]) {
				return false;
			}
		}
		return true;
	}

	constexpr int compare(string_view other) const noexcept {
		const size_t shared = size_ < other.size_ ? size_ : other.size_;
		for (size_t i = 0; i < shared; ++i) {
			const unsigned char left = (unsigned char)data_[i];
			const unsigned char right = (unsigned char)other.data_[i];
			if (left != right) {
				return (int)left - (int)right;
			}
		}
		if (size_ == other.size_) {
			return 0;
		}
		return size_ < other.size_ ? -1 : 1;
	}

	constexpr int compare(size_t position, size_t count, string_view other) const noexcept {
		return substr(position, count).compare(other);
	}

	constexpr int compare(size_t position, size_t count, string_view other, size_t other_position, size_t other_count = npos) const noexcept {
		return substr(position, count).compare(other.substr(other_position, other_count));
	}

private:
	const char* data_;
	size_t size_;
};

constexpr bool operator==(string_view left, string_view right) noexcept {
	if (left.size() != right.size()) {
		return false;
	}
	for (size_t i = 0; i < left.size(); ++i) {
		if (left[i] != right[i]) {
			return false;
		}
	}
	return true;
}

constexpr bool operator!=(string_view left, string_view right) noexcept {
	return !(left == right);
}

constexpr bool operator<(string_view left, string_view right) noexcept {
	const size_t count = left.size() < right.size() ? left.size() : right.size();
	for (size_t i = 0; i < count; ++i) {
		const unsigned char l = static_cast<unsigned char>(left[i]);
		const unsigned char r = static_cast<unsigned char>(right[i]);
		if (l < r) {
			return true;
		}
		if (r < l) {
			return false;
		}
	}
	return left.size() < right.size();
}

constexpr bool operator>(string_view left, string_view right) noexcept {
	return right < left;
}

constexpr bool operator<=(string_view left, string_view right) noexcept {
	return !(right < left);
}

constexpr bool operator>=(string_view left, string_view right) noexcept {
	return !(left < right);
}

template <typename T, size_t N>
struct array {
	using value_type = T;
	using size_type = size_t;
	using difference_type = ptrdiff_t;
	using reference = T&;
	using const_reference = const T&;
	using pointer = T*;
	using const_pointer = const T*;
	using iterator = T*;
	using const_iterator = const T*;

	class reverse_iterator {
	public:
		using iterator_category = random_access_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = T*;
		using reference = T&;

		constexpr reverse_iterator() noexcept : base_(nullptr) {}
		constexpr explicit reverse_iterator(T* base) noexcept : base_(base) {}

		constexpr reference operator*() const noexcept {
			T* current = base_;
			--current;
			return *current;
		}

		constexpr pointer operator->() const noexcept {
			T* current = base_;
			--current;
			return current;
		}

		constexpr reverse_iterator& operator++() noexcept {
			--base_;
			return *this;
		}

		constexpr reverse_iterator operator++(int) noexcept {
			reverse_iterator copy(*this);
			++(*this);
			return copy;
		}

		constexpr reverse_iterator& operator--() noexcept {
			++base_;
			return *this;
		}

		constexpr reverse_iterator operator--(int) noexcept {
			reverse_iterator copy(*this);
			--(*this);
			return copy;
		}

		constexpr bool operator==(const reverse_iterator& other) const noexcept { return base_ == other.base_; }
		constexpr bool operator!=(const reverse_iterator& other) const noexcept { return base_ != other.base_; }
		constexpr T* base() const noexcept { return base_; }

	private:
		T* base_;
	};

	class const_reverse_iterator {
	public:
		using iterator_category = random_access_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = const T*;
		using reference = const T&;

		constexpr const_reverse_iterator() noexcept : base_(nullptr) {}
		constexpr explicit const_reverse_iterator(const T* base) noexcept : base_(base) {}
		constexpr const_reverse_iterator(reverse_iterator other) noexcept : base_(other.base()) {}

		constexpr reference operator*() const noexcept {
			const T* current = base_;
			--current;
			return *current;
		}

		constexpr pointer operator->() const noexcept {
			const T* current = base_;
			--current;
			return current;
		}

		constexpr const_reverse_iterator& operator++() noexcept {
			--base_;
			return *this;
		}

		constexpr const_reverse_iterator operator++(int) noexcept {
			const_reverse_iterator copy(*this);
			++(*this);
			return copy;
		}

		constexpr const_reverse_iterator& operator--() noexcept {
			++base_;
			return *this;
		}

		constexpr const_reverse_iterator operator--(int) noexcept {
			const_reverse_iterator copy(*this);
			--(*this);
			return copy;
		}

		constexpr bool operator==(const const_reverse_iterator& other) const noexcept { return base_ == other.base_; }
		constexpr bool operator!=(const const_reverse_iterator& other) const noexcept { return base_ != other.base_; }
		constexpr const T* base() const noexcept { return base_; }

	private:
		const T* base_;
	};

	T elements[N > 0 ? N : 1];

	constexpr T& operator[](size_t index) noexcept { return elements[index]; }
	constexpr const T& operator[](size_t index) const noexcept { return elements[index]; }
	constexpr T& at(size_t index) {
		if (index >= N) {
			__builtin_trap();
		}
		return elements[index];
	}
	constexpr const T& at(size_t index) const {
		if (index >= N) {
			__builtin_trap();
		}
		return elements[index];
	}
	constexpr T* data() noexcept { return elements; }
	constexpr const T* data() const noexcept { return elements; }
	constexpr size_t size() const noexcept { return N; }
	constexpr bool empty() const noexcept { return N == 0; }
	constexpr T* begin() noexcept { return elements; }
	constexpr const T* begin() const noexcept { return elements; }
	constexpr T* end() noexcept { return elements + N; }
	constexpr const T* end() const noexcept { return elements + N; }
	constexpr reverse_iterator rbegin() noexcept { return reverse_iterator(elements + N); }
	constexpr const_reverse_iterator rbegin() const noexcept { return const_reverse_iterator(elements + N); }
	constexpr const_reverse_iterator crbegin() const noexcept { return const_reverse_iterator(elements + N); }
	constexpr reverse_iterator rend() noexcept { return reverse_iterator(elements); }
	constexpr const_reverse_iterator rend() const noexcept { return const_reverse_iterator(elements); }
	constexpr const_reverse_iterator crend() const noexcept { return const_reverse_iterator(elements); }
	constexpr T& front() noexcept { return elements[0]; }
	constexpr const T& front() const noexcept { return elements[0]; }
	constexpr T& back() noexcept { return elements[N - 1]; }
	constexpr const T& back() const noexcept { return elements[N - 1]; }

	void fill(const T& value) {
		for (size_t i = 0; i < N; ++i) {
			elements[i] = value;
		}
	}
};

template <typename T, typename... Values>
array(T, Values...) -> array<T, 1 + sizeof...(Values)>;

template <typename T, size_t N>
constexpr bool operator==(const array<T, N>& left, const array<T, N>& right) {
	for (size_t i = 0; i < N; ++i) {
		if (!(left[i] == right[i])) {
			return false;
		}
	}
	return true;
}

template <typename T, size_t N>
constexpr bool operator!=(const array<T, N>& left, const array<T, N>& right) {
	return !(left == right);
}

template <typename T, size_t N>
constexpr bool operator<(const array<T, N>& left, const array<T, N>& right) {
	for (size_t i = 0; i < N; ++i) {
		if (left[i] < right[i]) {
			return true;
		}
		if (right[i] < left[i]) {
			return false;
		}
	}
	return false;
}

template <typename T, size_t N>
constexpr bool operator>(const array<T, N>& left, const array<T, N>& right) {
	return right < left;
}

template <typename T, size_t N>
constexpr bool operator<=(const array<T, N>& left, const array<T, N>& right) {
	return !(right < left);
}

template <typename T, size_t N>
constexpr bool operator>=(const array<T, N>& left, const array<T, N>& right) {
	return !(left < right);
}

template <size_t N>
class bitset {
	static constexpr size_t bits_per_word = sizeof(unsigned long) * 8u;
	static constexpr size_t word_count = N == 0 ? 1 : (N + bits_per_word - 1u) / bits_per_word;

public:
	class reference {
	public:
		reference(const reference&) = default;

		reference& operator=(bool value) noexcept {
			if (value) {
				*word_ |= mask_;
			} else {
				*word_ &= ~mask_;
			}
			return *this;
		}

		reference& operator=(const reference& other) noexcept {
			return *this = static_cast<bool>(other);
		}

		operator bool() const noexcept {
			return (*word_ & mask_) != 0;
		}

		bool operator~() const noexcept {
			return !static_cast<bool>(*this);
		}

		reference& flip() noexcept {
			*word_ ^= mask_;
			return *this;
		}

	private:
		friend class bitset;

		reference(unsigned long& word, unsigned long mask) noexcept : word_(&word), mask_(mask) {}

		unsigned long* word_;
		unsigned long mask_;
	};

	bitset() noexcept : words_{} {}

	bitset(unsigned long long value) noexcept : words_{} {
		for (size_t i = 0; i < word_count && value != 0; ++i) {
			words_[i] = (unsigned long)(value & ~(unsigned long long)0ul);
			if constexpr (bits_per_word >= sizeof(unsigned long long) * 8u) {
				value = 0;
			} else {
				value >>= bits_per_word;
			}
		}
		mask_tail();
	}

	bool test(size_t position) const {
		if (position >= N) {
			__builtin_trap();
		}
		return (words_[position / bits_per_word] & bit_mask(position)) != 0;
	}

	reference operator[](size_t position) {
		if (position >= N) {
			__builtin_trap();
		}
		return reference(words_[position / bits_per_word], bit_mask(position));
	}

	bool operator[](size_t position) const {
		return test(position);
	}

	bitset& set() noexcept {
		for (size_t i = 0; i < word_count; ++i) {
			words_[i] = ~0ul;
		}
		mask_tail();
		return *this;
	}

	bitset& set(size_t position, bool value = true) {
		if (position >= N) {
			__builtin_trap();
		}
		if (value) {
			words_[position / bits_per_word] |= bit_mask(position);
		} else {
			words_[position / bits_per_word] &= ~bit_mask(position);
		}
		return *this;
	}

	bitset& reset() noexcept {
		for (size_t i = 0; i < word_count; ++i) {
			words_[i] = 0;
		}
		return *this;
	}

	bitset& reset(size_t position) {
		return set(position, false);
	}

	bitset& flip() noexcept {
		for (size_t i = 0; i < word_count; ++i) {
			words_[i] = ~words_[i];
		}
		mask_tail();
		return *this;
	}

	bitset& flip(size_t position) {
		if (position >= N) {
			__builtin_trap();
		}
		words_[position / bits_per_word] ^= bit_mask(position);
		return *this;
	}

	bitset& operator&=(const bitset& other) noexcept {
		for (size_t i = 0; i < word_count; ++i) {
			words_[i] &= other.words_[i];
		}
		return *this;
	}

	bitset& operator|=(const bitset& other) noexcept {
		for (size_t i = 0; i < word_count; ++i) {
			words_[i] |= other.words_[i];
		}
		return *this;
	}

	bitset& operator^=(const bitset& other) noexcept {
		for (size_t i = 0; i < word_count; ++i) {
			words_[i] ^= other.words_[i];
		}
		return *this;
	}

	bitset operator~() const noexcept {
		bitset copy(*this);
		copy.flip();
		return copy;
	}

	bool any() const noexcept {
		for (size_t i = 0; i < word_count; ++i) {
			if (words_[i] != 0) {
				return true;
			}
		}
		return false;
	}

	bool none() const noexcept {
		return !any();
	}

	bool all() const noexcept {
		for (size_t i = 0; i < N; ++i) {
			if (!test(i)) {
				return false;
			}
		}
		return true;
	}

	size_t count() const noexcept {
		size_t total = 0;
		for (size_t i = 0; i < N; ++i) {
			if ((words_[i / bits_per_word] & bit_mask(i)) != 0) {
				++total;
			}
		}
		return total;
	}

	constexpr size_t size() const noexcept {
		return N;
	}

	unsigned long to_ulong() const {
		for (size_t i = 1; i < word_count; ++i) {
			if (words_[i] != 0) {
				__builtin_trap();
			}
		}
		return words_[0];
	}

	unsigned long long to_ullong() const {
		constexpr size_t bits_per_ullong = sizeof(unsigned long long) * 8u;
		unsigned long long result = 0;
		for (size_t i = 0; i < word_count; ++i) {
			const size_t shift = i * bits_per_word;
			if (shift >= bits_per_ullong) {
				if (words_[i] != 0) {
					__builtin_trap();
				}
				continue;
			}
			if (bits_per_ullong - shift < bits_per_word &&
			    (words_[i] >> (bits_per_ullong - shift)) != 0) {
				__builtin_trap();
			}
			result |= static_cast<unsigned long long>(words_[i]) << shift;
		}
		return result;
	}

	bool operator==(const bitset& other) const noexcept {
		for (size_t i = 0; i < word_count; ++i) {
			if (words_[i] != other.words_[i]) {
				return false;
			}
		}
		return true;
	}

	bool operator!=(const bitset& other) const noexcept {
		return !(*this == other);
	}

private:
	static constexpr unsigned long bit_mask(size_t position) noexcept {
		return 1ul << (position % bits_per_word);
	}

	void mask_tail() noexcept {
		const size_t used = N % bits_per_word;
		if (used != 0) {
			words_[word_count - 1] &= (1ul << used) - 1ul;
		}
	}

	unsigned long words_[word_count];
};

template <size_t N>
bitset<N> operator&(bitset<N> left, const bitset<N>& right) noexcept {
	left &= right;
	return left;
}

template <size_t N>
bitset<N> operator|(bitset<N> left, const bitset<N>& right) noexcept {
	left |= right;
	return left;
}

template <size_t N>
bitset<N> operator^(bitset<N> left, const bitset<N>& right) noexcept {
	left ^= right;
	return left;
}

template <typename T>
struct remove_reference {
	using type = T;
};

template <typename T>
struct remove_reference<T&> {
	using type = T;
};

template <typename T>
struct remove_reference<T&&> {
	using type = T;
};

template <typename T>
using remove_reference_t = typename remove_reference<T>::type;

template <typename T>
struct remove_const {
	using type = T;
};

template <typename T>
struct remove_const<const T> {
	using type = T;
};

template <typename T>
using remove_const_t = typename remove_const<T>::type;

template <typename T>
struct remove_volatile {
	using type = T;
};

template <typename T>
struct remove_volatile<volatile T> {
	using type = T;
};

template <typename T>
using remove_volatile_t = typename remove_volatile<T>::type;

template <typename T>
struct remove_cv {
	using type = typename remove_const<typename remove_volatile<T>::type>::type;
};

template <typename T>
using remove_cv_t = typename remove_cv<T>::type;

template <typename T>
struct add_const {
	using type = const T;
};

template <typename T>
struct add_volatile {
	using type = volatile T;
};

template <typename T>
struct add_cv {
	using type = const volatile T;
};

template <typename T>
using add_const_t = typename add_const<T>::type;

template <typename T>
using add_volatile_t = typename add_volatile<T>::type;

template <typename T>
using add_cv_t = typename add_cv<T>::type;

template <typename T>
struct type_identity {
	using type = T;
};

template <typename T>
using type_identity_t = typename type_identity<T>::type;

template <typename A, typename B>
struct is_same {
	static constexpr bool value = false;
	using value_type = bool;
	using type = is_same;

	constexpr operator value_type() const noexcept {
		return value;
	}

	constexpr value_type operator()() const noexcept {
		return value;
	}
};

template <typename A>
struct is_same<A, A> {
	static constexpr bool value = true;
	using value_type = bool;
	using type = is_same;

	constexpr operator value_type() const noexcept {
		return value;
	}

	constexpr value_type operator()() const noexcept {
		return value;
	}
};

template <typename T, T Value>
struct integral_constant {
	static constexpr T value = Value;
	using value_type = T;
	using type = integral_constant;

	constexpr operator value_type() const noexcept {
		return value;
	}

	constexpr value_type operator()() const noexcept {
		return value;
	}
};

using true_type = integral_constant<bool, true>;
using false_type = integral_constant<bool, false>;

template <bool Value>
using bool_constant = integral_constant<bool, Value>;

template <bool Condition, typename TrueType, typename FalseType>
struct conditional {
	using type = TrueType;
};

template <typename TrueType, typename FalseType>
struct conditional<false, TrueType, FalseType> {
	using type = FalseType;
};

template <bool Condition, typename TrueType, typename FalseType>
using conditional_t = typename conditional<Condition, TrueType, FalseType>::type;

template <typename T>
struct is_const : false_type {};

template <typename T>
struct is_const<const T> : true_type {};

template <typename T>
struct is_volatile : false_type {};

template <typename T>
struct is_volatile<volatile T> : true_type {};

template <typename T>
struct is_pointer : false_type {};

template <typename T>
struct is_pointer<T*> : true_type {};

template <typename T>
struct is_void : is_same<void, remove_cv_t<T>> {};

template <typename T>
struct is_null_pointer : is_same<nullptr_t, remove_cv_t<T>> {};

template <typename T>
struct is_lvalue_reference : false_type {};

template <typename T>
struct is_lvalue_reference<T&> : true_type {};

template <typename T>
struct is_rvalue_reference : false_type {};

template <typename T>
struct is_rvalue_reference<T&&> : true_type {};

template <typename T>
struct is_reference : bool_constant<is_lvalue_reference<T>::value || is_rvalue_reference<T>::value> {};

template <typename T>
struct is_array : false_type {};

template <typename T>
struct is_array<T[]> : true_type {};

template <typename T, size_t N>
struct is_array<T[N]> : true_type {};

template <typename T>
struct is_function : bool_constant<__is_function(T)> {};

template <typename T>
struct is_enum : bool_constant<__is_enum(T)> {};

template <typename T>
struct is_class : bool_constant<__is_class(T)> {};

template <typename T>
struct is_union : bool_constant<__is_union(T)> {};

template <typename T>
struct is_final : bool_constant<__is_final(T)> {};

template <typename T>
struct is_trivial : bool_constant<__is_trivial(T)> {};

template <typename Base, typename Derived>
struct is_base_of : bool_constant<__is_base_of(Base, Derived)> {};

namespace detail {
template <typename T>
struct is_member_pointer_helper : false_type {};

template <typename T, typename C>
struct is_member_pointer_helper<T C::*> : true_type {};

template <typename T>
struct is_member_function_pointer_helper : false_type {};

template <typename T, typename C>
struct is_member_function_pointer_helper<T C::*> : is_function<T> {};
}

template <typename T>
struct is_member_pointer : detail::is_member_pointer_helper<remove_cv_t<T>> {};

template <typename T>
struct is_member_function_pointer : detail::is_member_function_pointer_helper<remove_cv_t<T>> {};

template <typename T>
struct is_member_object_pointer : bool_constant<is_member_pointer<T>::value && !is_member_function_pointer<T>::value> {};

template <typename T>
struct remove_pointer {
	using type = T;
};

template <typename T>
struct remove_pointer<T*> {
	using type = T;
};

template <typename T>
struct remove_pointer<T* const> {
	using type = T;
};

template <typename T>
struct remove_pointer<T* volatile> {
	using type = T;
};

template <typename T>
struct remove_pointer<T* const volatile> {
	using type = T;
};

template <typename T>
using remove_pointer_t = typename remove_pointer<T>::type;

template <typename T>
struct add_pointer {
	using type = __add_pointer(T);
};

template <typename T>
using add_pointer_t = typename add_pointer<T>::type;

template <typename T>
struct remove_extent {
	using type = T;
};

template <typename T>
struct remove_extent<T[]> {
	using type = T;
};

template <typename T, size_t N>
struct remove_extent<T[N]> {
	using type = T;
};

template <typename T>
using remove_extent_t = typename remove_extent<T>::type;

template <typename T>
struct remove_all_extents {
	using type = T;
};

template <typename T>
struct remove_all_extents<T[]> : remove_all_extents<T> {};

template <typename T, size_t N>
struct remove_all_extents<T[N]> : remove_all_extents<T> {};

template <typename T>
using remove_all_extents_t = typename remove_all_extents<T>::type;

template <typename T>
struct is_integral : false_type {};

template <> struct is_integral<bool> : true_type {};
template <> struct is_integral<char> : true_type {};
template <> struct is_integral<signed char> : true_type {};
template <> struct is_integral<unsigned char> : true_type {};
template <> struct is_integral<short> : true_type {};
template <> struct is_integral<unsigned short> : true_type {};
template <> struct is_integral<int> : true_type {};
template <> struct is_integral<unsigned int> : true_type {};
template <> struct is_integral<long> : true_type {};
template <> struct is_integral<unsigned long> : true_type {};
template <> struct is_integral<long long> : true_type {};
template <> struct is_integral<unsigned long long> : true_type {};

template <typename T>
struct is_floating_point : false_type {};

template <> struct is_floating_point<float> : true_type {};
template <> struct is_floating_point<double> : true_type {};
template <> struct is_floating_point<long double> : true_type {};

template <typename T>
struct is_arithmetic : bool_constant<is_integral<remove_cv_t<T>>::value || is_floating_point<remove_cv_t<T>>::value> {};

template <typename T>
struct decay {
private:
	using U = remove_reference_t<T>;

public:
	using type = conditional_t<is_array<U>::value,
	                           add_pointer_t<remove_extent_t<U>>,
	                           conditional_t<is_function<U>::value, add_pointer_t<U>, remove_cv_t<U>>>;
};

template <typename T>
using decay_t = typename decay<T>::type;

template <bool Condition, typename T = void>
struct enable_if {};

template <typename T>
struct enable_if<true, T> {
	using type = T;
};

template <bool Condition, typename T = void>
using enable_if_t = typename enable_if<Condition, T>::type;

template <typename...>
using void_t = void;

template <typename T, typename... Args>
struct is_constructible : bool_constant<__is_constructible(T, Args...)> {};

template <typename T>
struct is_default_constructible : is_constructible<T> {};

template <typename T>
struct is_copy_constructible : is_constructible<T, const T&> {};

template <typename T>
struct is_move_constructible : is_constructible<T, T&&> {};

template <typename T, typename U>
struct is_assignable : bool_constant<__is_assignable(T, U)> {};

template <typename T>
struct is_copy_assignable : is_assignable<T&, const T&> {};

template <typename T>
struct is_move_assignable : is_assignable<T&, T&&> {};

template <typename T>
struct is_destructible : bool_constant<__is_destructible(T)> {};

template <typename T>
struct is_trivially_destructible : bool_constant<__is_trivially_destructible(T)> {};

template <typename T>
struct is_trivially_copyable : bool_constant<__is_trivially_copyable(T)> {};

template <typename T>
struct is_polymorphic : bool_constant<__is_polymorphic(T)> {};

template <typename T>
struct has_virtual_destructor : bool_constant<__has_virtual_destructor(T)> {};

template <typename T>
struct add_rvalue_reference {
	using type = T&&;
};

template <typename T>
struct add_lvalue_reference {
	using type = T&;
};

template <> struct add_lvalue_reference<void> { using type = void; };
template <> struct add_lvalue_reference<const void> { using type = const void; };
template <> struct add_lvalue_reference<volatile void> { using type = volatile void; };
template <> struct add_lvalue_reference<const volatile void> { using type = const volatile void; };

template <typename T>
using add_lvalue_reference_t = typename add_lvalue_reference<T>::type;

template <> struct add_rvalue_reference<void> { using type = void; };
template <> struct add_rvalue_reference<const void> { using type = const void; };
template <> struct add_rvalue_reference<volatile void> { using type = volatile void; };
template <> struct add_rvalue_reference<const volatile void> { using type = const volatile void; };

template <typename T>
using add_rvalue_reference_t = typename add_rvalue_reference<T>::type;

template <typename T>
add_rvalue_reference_t<T> declval() noexcept;

template <typename From, typename To>
struct is_convertible : bool_constant<__is_convertible(From, To)> {};

template <typename T>
constexpr remove_reference_t<T>&& move(T&& value) noexcept {
	return static_cast<remove_reference_t<T>&&>(value);
}

template <typename T>
constexpr T&& forward(remove_reference_t<T>& value) noexcept {
	return static_cast<T&&>(value);
}

template <typename T>
constexpr T&& forward(remove_reference_t<T>&& value) noexcept {
	return static_cast<T&&>(value);
}

template <typename T, typename U = T>
constexpr T exchange(T& value, U&& replacement) {
	T old = wm::move(value);
	value = wm::forward<U>(replacement);
	return old;
}

template <typename T>
constexpr add_const_t<T>& as_const(T& value) noexcept {
	return value;
}

template <typename T>
void as_const(const T&&) = delete;

template <typename T>
constexpr T* addressof(T& value) noexcept {
	return __builtin_addressof(value);
}

template <typename T>
const T* addressof(const T&&) = delete;

template <typename T>
constexpr T* launder(T* pointer) noexcept {
	return __builtin_launder(pointer);
}

template <typename MemFn, typename Obj, typename... Args,
          typename = enable_if_t<is_member_function_pointer<decay_t<MemFn>>::value>>
constexpr auto invoke(MemFn member, Obj&& object, Args&&... args)
	-> decltype((wm::forward<Obj>(object).*member)(wm::forward<Args>(args)...)) {
	return (wm::forward<Obj>(object).*member)(wm::forward<Args>(args)...);
}

template <typename MemFn, typename Ptr, typename... Args,
          typename = enable_if_t<is_member_function_pointer<decay_t<MemFn>>::value>>
constexpr auto invoke(MemFn member, Ptr&& pointer, Args&&... args)
	-> decltype(((*wm::forward<Ptr>(pointer)).*member)(wm::forward<Args>(args)...)) {
	return ((*wm::forward<Ptr>(pointer)).*member)(wm::forward<Args>(args)...);
}

template <typename MemObj, typename Obj,
          typename = enable_if_t<is_member_object_pointer<decay_t<MemObj>>::value>>
constexpr auto invoke(MemObj member, Obj&& object)
	-> decltype(wm::forward<Obj>(object).*member) {
	return wm::forward<Obj>(object).*member;
}

template <typename MemObj, typename Ptr,
          typename = enable_if_t<is_member_object_pointer<decay_t<MemObj>>::value>>
constexpr auto invoke(MemObj member, Ptr&& pointer)
	-> decltype((*wm::forward<Ptr>(pointer)).*member) {
	return (*wm::forward<Ptr>(pointer)).*member;
}

template <typename Fn, typename... Args,
          typename = enable_if_t<!is_member_pointer<decay_t<Fn>>::value>>
constexpr auto invoke(Fn&& fn, Args&&... args)
	-> decltype(wm::forward<Fn>(fn)(wm::forward<Args>(args)...)) {
	return wm::forward<Fn>(fn)(wm::forward<Args>(args)...);
}

template <typename Fn, typename... Args>
struct invoke_result {
	using type = decltype(wm::invoke(wm::declval<Fn>(), wm::declval<Args>()...));
};

template <typename Fn, typename... Args>
using invoke_result_t = typename invoke_result<Fn, Args...>::type;

template <typename, typename Fn, typename... Args>
struct is_invocable_impl : false_type {};

template <typename Fn, typename... Args>
struct is_invocable_impl<void_t<decltype(wm::invoke(wm::declval<Fn>(), wm::declval<Args>()...))>, Fn, Args...> : true_type {};

template <typename Fn, typename... Args>
struct is_invocable : is_invocable_impl<void, Fn, Args...> {};

namespace detail {
template <size_t... Indexes>
struct index_sequence {};

template <size_t N, size_t... Indexes>
struct make_index_sequence_impl : make_index_sequence_impl<N - 1, N - 1, Indexes...> {};

template <size_t... Indexes>
struct make_index_sequence_impl<0, Indexes...> {
	using type = index_sequence<Indexes...>;
};

template <size_t N>
using make_index_sequence = typename make_index_sequence_impl<N>::type;
}

struct piecewise_construct_t {
	explicit constexpr piecewise_construct_t() = default;
};

inline constexpr piecewise_construct_t piecewise_construct{};

template <typename... Types>
class tuple;

template <typename T>
struct is_tuple_type : false_type {};

template <typename... Types>
struct is_tuple_type<tuple<Types...>> : true_type {};

namespace detail {
template <typename... Args>
struct is_single_tuple_argument : false_type {};

template <typename Arg>
struct is_single_tuple_argument<Arg> : is_tuple_type<decay_t<Arg>> {};
}

template <size_t Index, typename Tuple>
struct tuple_element;

template <size_t Index, typename... Types>
constexpr typename tuple_element<Index, tuple<Types...>>::type& get(tuple<Types...>& value) noexcept;

template <size_t Index, typename... Types>
constexpr const typename tuple_element<Index, tuple<Types...>>::type& get(const tuple<Types...>& value) noexcept;

template <size_t Index, typename... Types>
constexpr typename tuple_element<Index, tuple<Types...>>::type&& get(tuple<Types...>&& value) noexcept;

template <typename A, typename B>
struct pair {
	using first_type = A;
	using second_type = B;

	A first;
	B second;

	constexpr pair() : first(), second() {}

	template <typename AA = A, typename BB = B,
	          typename = enable_if_t<is_copy_constructible<AA>::value && is_copy_constructible<BB>::value>>
	constexpr pair(const A& a, const B& b) : first(a), second(b) {}

	template <typename... FirstArgs, typename... SecondArgs>
	constexpr pair(piecewise_construct_t, tuple<FirstArgs...> firstArgs, tuple<SecondArgs...> secondArgs)
		: pair(piecewise_construct, wm::move(firstArgs), wm::move(secondArgs),
		       detail::make_index_sequence<sizeof...(FirstArgs)>(),
		       detail::make_index_sequence<sizeof...(SecondArgs)>()) {}

		template <typename U, size_t N, typename BB = remove_cv_t<remove_reference_t<B>>,
		          typename = enable_if_t<(is_same<BB, string_view>::value || is_base_of<string, BB>::value) &&
		                                 is_constructible<B, const char*, size_t>::value>>
	constexpr pair(U&& a, const char (&b)[N]) : first(wm::forward<U>(a)), second(b, N > 0 ? N - 1 : 0) {}

	template <typename U, typename V,
	          typename = enable_if_t<is_constructible<A, U&&>::value && is_constructible<B, V&&>::value>>
	constexpr pair(U&& a, V&& b) : first(wm::forward<U>(a)), second(wm::forward<V>(b)) {}

	template <typename U, typename V,
	          typename = enable_if_t<is_constructible<A, const U&>::value && is_constructible<B, const V&>::value>>
	constexpr pair(const pair<U, V>& other) : first(other.first), second(other.second) {}

	template <typename U, typename V,
	          typename = enable_if_t<is_constructible<A, U&&>::value && is_constructible<B, V&&>::value>>
	constexpr pair(pair<U, V>&& other) : first(wm::move(other.first)), second(wm::move(other.second)) {}

private:
	template <typename FirstTuple, typename SecondTuple, size_t... FirstIndexes, size_t... SecondIndexes>
	constexpr pair(piecewise_construct_t, FirstTuple&& firstArgs, SecondTuple&& secondArgs,
	               detail::index_sequence<FirstIndexes...>, detail::index_sequence<SecondIndexes...>)
		: first(wm::get<FirstIndexes>(wm::forward<FirstTuple>(firstArgs))...),
		  second(wm::get<SecondIndexes>(wm::forward<SecondTuple>(secondArgs))...) {}
};

template <typename A, typename B>
pair(A, B) -> pair<A, B>;

template <typename A, typename B>
constexpr bool operator==(const pair<A, B>& left, const pair<A, B>& right) {
	return left.first == right.first && left.second == right.second;
}

template <typename A, typename B>
constexpr bool operator!=(const pair<A, B>& left, const pair<A, B>& right) {
	return !(left == right);
}

template <typename A, typename B>
constexpr bool operator<(const pair<A, B>& left, const pair<A, B>& right) {
	return left.first < right.first || (!(right.first < left.first) && left.second < right.second);
}

template <typename A, typename B>
constexpr bool operator>(const pair<A, B>& left, const pair<A, B>& right) {
	return right < left;
}

template <typename A, typename B>
constexpr bool operator<=(const pair<A, B>& left, const pair<A, B>& right) {
	return !(right < left);
}

template <typename A, typename B>
constexpr bool operator>=(const pair<A, B>& left, const pair<A, B>& right) {
	return !(left < right);
}

template <typename Iterator, typename = void>
struct iterator_traits {};

template <typename Iterator>
struct iterator_traits<Iterator, void_t<typename Iterator::difference_type,
                                        typename Iterator::value_type,
                                        typename Iterator::pointer,
                                        typename Iterator::reference,
                                        typename Iterator::iterator_category>> {
	using difference_type = typename Iterator::difference_type;
	using value_type = typename Iterator::value_type;
	using pointer = typename Iterator::pointer;
	using reference = typename Iterator::reference;
	using iterator_category = typename Iterator::iterator_category;
};

template <typename T>
struct iterator_traits<T*, void> {
	using difference_type = ptrdiff_t;
	using value_type = T;
	using pointer = T*;
	using reference = T&;
	using iterator_category = random_access_iterator_tag;
};

template <typename T>
struct iterator_traits<const T*, void> {
	using difference_type = ptrdiff_t;
	using value_type = T;
	using pointer = const T*;
	using reference = const T&;
	using iterator_category = random_access_iterator_tag;
};

template <typename T, typename... Args>
constexpr T* construct_at(T* location, Args&&... args) {
	return ::new (static_cast<void*>(location)) T(wm::forward<Args>(args)...);
}

template <typename T>
constexpr void destroy_at(T* location) {
	location->~T();
}

template <typename ForwardIt, typename Size>
ForwardIt uninitialized_value_construct_n(ForwardIt first, Size count) {
	using value_type = typename iterator_traits<ForwardIt>::value_type;
	ForwardIt current = first;
	for (Size i = 0; i < count; ++i, ++current) {
		::new (static_cast<void*>(wm::addressof(*current))) value_type();
	}
	return current;
}

template <typename ForwardIt, typename Size>
ForwardIt destroy_n(ForwardIt first, Size count) {
	ForwardIt current = first;
	for (Size i = 0; i < count; ++i, ++current) {
		wm::destroy_at(wm::addressof(*current));
	}
	return current;
}

template <typename InputIt, typename Distance>
constexpr void advance_impl(InputIt& it, Distance count, input_iterator_tag) {
	while (count-- > 0) {
		++it;
	}
}

template <typename BidirectionalIt, typename Distance>
constexpr void advance_impl(BidirectionalIt& it, Distance count, bidirectional_iterator_tag) {
	if (count >= 0) {
		while (count-- > 0) {
			++it;
		}
	} else {
		while (count++ < 0) {
			--it;
		}
	}
}

template <typename RandomAccessIt, typename Distance>
constexpr void advance_impl(RandomAccessIt& it, Distance count, random_access_iterator_tag) {
	it += count;
}

template <typename InputIt, typename Distance>
constexpr void advance(InputIt& it, Distance count) {
	wm::advance_impl(it, count, typename iterator_traits<InputIt>::iterator_category{});
}

template <typename InputIt>
constexpr InputIt next(InputIt it, typename iterator_traits<InputIt>::difference_type count = 1) {
	wm::advance(it, count);
	return it;
}

template <typename BidirectionalIt>
constexpr BidirectionalIt prev(BidirectionalIt it, typename iterator_traits<BidirectionalIt>::difference_type count = 1) {
	wm::advance(it, -count);
	return it;
}

template <typename Container>
constexpr auto begin(Container& container) -> decltype(container.begin()) {
	return container.begin();
}

template <typename Container>
constexpr auto begin(const Container& container) -> decltype(container.begin()) {
	return container.begin();
}

template <typename T, size_t Count>
constexpr T* begin(T (&values)[Count]) noexcept {
	return values;
}

template <typename Container>
constexpr auto end(Container& container) -> decltype(container.end()) {
	return container.end();
}

template <typename Container>
constexpr auto end(const Container& container) -> decltype(container.end()) {
	return container.end();
}

template <typename T, size_t Count>
constexpr T* end(T (&values)[Count]) noexcept {
	return values + Count;
}

template <typename Container>
constexpr auto cbegin(const Container& container) -> decltype(wm::begin(container)) {
	return wm::begin(container);
}

template <typename Container>
constexpr auto cend(const Container& container) -> decltype(wm::end(container)) {
	return wm::end(container);
}

template <typename Container>
constexpr auto size(const Container& container) -> decltype(container.size()) {
	return container.size();
}

template <typename T, size_t Count>
constexpr size_t size(const T (&)[Count]) noexcept {
	return Count;
}

template <typename Container>
constexpr auto empty(const Container& container) -> decltype(container.empty()) {
	return container.empty();
}

template <typename T, size_t Count>
constexpr bool empty(const T (&)[Count]) noexcept {
	return false;
}

template <typename T>
constexpr bool empty(std::initializer_list<T> values) noexcept {
	return values.size() == 0;
}

template <typename Container>
constexpr auto data(Container& container) -> decltype(container.data()) {
	return container.data();
}

template <typename Container>
constexpr auto data(const Container& container) -> decltype(container.data()) {
	return container.data();
}

template <typename T, size_t Count>
constexpr T* data(T (&values)[Count]) noexcept {
	return values;
}

template <typename T>
constexpr const T* data(std::initializer_list<T> values) noexcept {
	return values.begin();
}

template <typename Container>
class back_insert_iterator {
public:
	using container_type = Container;

	explicit back_insert_iterator(Container& container) : container_(&container) {}

	back_insert_iterator& operator=(const typename Container::value_type& value) {
		container_->push_back(value);
		return *this;
	}

	back_insert_iterator& operator=(typename Container::value_type&& value) {
		container_->push_back(wm::move(value));
		return *this;
	}

	back_insert_iterator& operator*() noexcept { return *this; }
	back_insert_iterator& operator++() noexcept { return *this; }
	back_insert_iterator operator++(int) noexcept { return *this; }

private:
	Container* container_;
};

template <typename Container>
back_insert_iterator<Container> back_inserter(Container& container) {
	return back_insert_iterator<Container>(container);
}

template <typename Container>
class front_insert_iterator {
public:
	using container_type = Container;

	explicit front_insert_iterator(Container& container) : container_(&container) {}

	front_insert_iterator& operator=(const typename Container::value_type& value) {
		container_->push_front(value);
		return *this;
	}

	front_insert_iterator& operator=(typename Container::value_type&& value) {
		container_->push_front(wm::move(value));
		return *this;
	}

	front_insert_iterator& operator*() noexcept { return *this; }
	front_insert_iterator& operator++() noexcept { return *this; }
	front_insert_iterator operator++(int) noexcept { return *this; }

private:
	Container* container_;
};

template <typename Container>
front_insert_iterator<Container> front_inserter(Container& container) {
	return front_insert_iterator<Container>(container);
}

template <typename Container>
class insert_iterator {
public:
	using container_type = Container;

	insert_iterator(Container& container, typename Container::iterator position)
		: container_(&container), position_(position) {}

	insert_iterator& operator=(const typename Container::value_type& value) {
		position_ = container_->insert(position_, value);
		++position_;
		return *this;
	}

	insert_iterator& operator=(typename Container::value_type&& value) {
		position_ = container_->insert(position_, wm::move(value));
		++position_;
		return *this;
	}

	insert_iterator& operator*() noexcept { return *this; }
	insert_iterator& operator++() noexcept { return *this; }
	insert_iterator operator++(int) noexcept { return *this; }

private:
	Container* container_;
	typename Container::iterator position_;
};

template <typename Container>
insert_iterator<Container> inserter(Container& container, typename Container::iterator position) {
	return insert_iterator<Container>(container, position);
}

template <typename T>
class reference_wrapper {
public:
	using type = T;

	reference_wrapper(T& value) noexcept : ptr_(&value) {}

	operator T&() const noexcept { return *ptr_; }
	T& get() const noexcept { return *ptr_; }

	template <typename... Args>
	auto operator()(Args&&... args) const -> decltype(wm::declval<T&>()(wm::declval<Args>()...)) {
		return (*ptr_)(wm::forward<Args>(args)...);
	}

private:
	T* ptr_;
};

template <typename T>
reference_wrapper<T> ref(T& value) noexcept {
	return reference_wrapper<T>(value);
}

template <typename T>
void ref(const T&&) = delete;

template <typename T>
reference_wrapper<const T> cref(const T& value) noexcept {
	return reference_wrapper<const T>(value);
}

template <typename T>
void cref(const T&&) = delete;

template <typename T>
struct default_delete {
	constexpr default_delete() noexcept = default;

	template <typename U>
	default_delete(const default_delete<U>&) noexcept {}

	void operator()(T* ptr) const noexcept {
		delete ptr;
	}
};

template <typename T>
struct default_delete<T[]> {
	constexpr default_delete() noexcept = default;

	template <typename U>
	void operator()(U* ptr) const noexcept {
		delete[] ptr;
	}
};

template <typename T, typename Deleter = default_delete<T>>
class unique_ptr {
public:
	using pointer = T*;
	using element_type = T;
	using deleter_type = Deleter;

	constexpr unique_ptr() noexcept : ptr_(nullptr), deleter_() {}
	constexpr unique_ptr(wm::nullptr_t) noexcept : ptr_(nullptr), deleter_() {}
	explicit unique_ptr(T* ptr) noexcept : ptr_(ptr), deleter_() {}
	unique_ptr(T* ptr, const Deleter& deleter) noexcept : ptr_(ptr), deleter_(deleter) {}
	unique_ptr(T* ptr, Deleter&& deleter) noexcept : ptr_(ptr), deleter_(wm::move(deleter)) {}

	unique_ptr(const unique_ptr&) = delete;
	unique_ptr& operator=(const unique_ptr&) = delete;

	unique_ptr(unique_ptr&& other) noexcept : ptr_(other.release()), deleter_(wm::move(other.deleter_)) {}

	template <typename U, typename OtherDeleter,
	          typename = enable_if_t<is_convertible<U*, T*>::value &&
	                                 is_constructible<Deleter, OtherDeleter&&>::value>>
	unique_ptr(unique_ptr<U, OtherDeleter>&& other) noexcept
		: ptr_(other.release()), deleter_(wm::move(other.get_deleter())) {}

	~unique_ptr() {
		if (ptr_) {
			deleter_(ptr_);
		}
	}

	unique_ptr& operator=(unique_ptr&& other) noexcept {
		if (this != &other) {
			reset(other.release());
			deleter_ = wm::move(other.deleter_);
		}
		return *this;
	}

	template <typename U, typename OtherDeleter,
	          typename = enable_if_t<is_convertible<U*, T*>::value &&
	                                 is_assignable<Deleter&, OtherDeleter&&>::value>>
	unique_ptr& operator=(unique_ptr<U, OtherDeleter>&& other) noexcept {
		reset(other.release());
		deleter_ = wm::move(other.get_deleter());
		return *this;
	}

	unique_ptr& operator=(wm::nullptr_t) noexcept {
		reset();
		return *this;
	}

	T& operator*() const noexcept { return *ptr_; }
	T* operator->() const noexcept { return ptr_; }
	T* get() const noexcept { return ptr_; }
	Deleter& get_deleter() noexcept { return deleter_; }
	const Deleter& get_deleter() const noexcept { return deleter_; }
	explicit operator bool() const noexcept { return ptr_ != nullptr; }

	T* release() noexcept {
		T* ptr = ptr_;
		ptr_ = nullptr;
		return ptr;
	}

	void reset(T* ptr = nullptr) noexcept {
		T* old = ptr_;
		ptr_ = ptr;
		if (old) {
			deleter_(old);
		}
	}

	void swap(unique_ptr& other) noexcept {
		T* tmp = ptr_;
		ptr_ = other.ptr_;
		other.ptr_ = tmp;
		Deleter tmp_deleter = wm::move(deleter_);
		deleter_ = wm::move(other.deleter_);
		other.deleter_ = wm::move(tmp_deleter);
	}

private:
	T* ptr_;
	Deleter deleter_;
};

template <typename T, typename... Args>
enable_if_t<!is_array<T>::value, unique_ptr<T>> make_unique(Args&&... args) {
	return unique_ptr<T>(new T(wm::forward<Args>(args)...));
}

template <typename T, typename Deleter>
class unique_ptr<T[], Deleter> {
public:
	using pointer = remove_extent_t<T>*;
	using element_type = remove_extent_t<T>;
	using deleter_type = Deleter;

	constexpr unique_ptr() noexcept : ptr_(nullptr), deleter_() {}
	constexpr unique_ptr(wm::nullptr_t) noexcept : ptr_(nullptr), deleter_() {}
	explicit unique_ptr(remove_extent_t<T>* ptr) noexcept : ptr_(ptr), deleter_() {}
	unique_ptr(remove_extent_t<T>* ptr, const Deleter& deleter) noexcept : ptr_(ptr), deleter_(deleter) {}
	unique_ptr(remove_extent_t<T>* ptr, Deleter&& deleter) noexcept : ptr_(ptr), deleter_(wm::move(deleter)) {}

	unique_ptr(const unique_ptr&) = delete;
	unique_ptr& operator=(const unique_ptr&) = delete;

	unique_ptr(unique_ptr&& other) noexcept : ptr_(other.release()), deleter_(wm::move(other.deleter_)) {}

	~unique_ptr() {
		if (ptr_) {
			deleter_(ptr_);
		}
	}

	unique_ptr& operator=(unique_ptr&& other) noexcept {
		if (this != &other) {
			reset(other.release());
			deleter_ = wm::move(other.deleter_);
		}
		return *this;
	}

	unique_ptr& operator=(wm::nullptr_t) noexcept {
		reset();
		return *this;
	}

	remove_extent_t<T>& operator[](size_t index) const noexcept { return ptr_[index]; }
	remove_extent_t<T>* get() const noexcept { return ptr_; }
	Deleter& get_deleter() noexcept { return deleter_; }
	const Deleter& get_deleter() const noexcept { return deleter_; }
	explicit operator bool() const noexcept { return ptr_ != nullptr; }

	remove_extent_t<T>* release() noexcept {
		remove_extent_t<T>* ptr = ptr_;
		ptr_ = nullptr;
		return ptr;
	}

	void reset(remove_extent_t<T>* ptr = nullptr) noexcept {
		remove_extent_t<T>* old = ptr_;
		ptr_ = ptr;
		if (old) {
			deleter_(old);
		}
	}

	void swap(unique_ptr& other) noexcept {
		remove_extent_t<T>* tmp = ptr_;
		ptr_ = other.ptr_;
		other.ptr_ = tmp;
		Deleter tmp_deleter = wm::move(deleter_);
		deleter_ = wm::move(other.deleter_);
		other.deleter_ = wm::move(tmp_deleter);
	}

private:
	remove_extent_t<T>* ptr_;
	Deleter deleter_;
};

template <typename T>
enable_if_t<is_array<T>::value, unique_ptr<T>> make_unique(size_t count) {
	using Element = remove_extent_t<T>;
	return unique_ptr<T>(new Element[count]());
}

template <typename T, typename Deleter, typename U, typename OtherDeleter>
bool operator==(const unique_ptr<T, Deleter>& left, const unique_ptr<U, OtherDeleter>& right) noexcept {
	return left.get() == right.get();
}

template <typename T, typename Deleter, typename U, typename OtherDeleter>
bool operator!=(const unique_ptr<T, Deleter>& left, const unique_ptr<U, OtherDeleter>& right) noexcept {
	return left.get() != right.get();
}

template <typename T, typename Deleter, typename U, typename OtherDeleter>
bool operator<(const unique_ptr<T, Deleter>& left, const unique_ptr<U, OtherDeleter>& right) noexcept {
	return left.get() < right.get();
}

template <typename T, typename Deleter, typename U, typename OtherDeleter>
bool operator<=(const unique_ptr<T, Deleter>& left, const unique_ptr<U, OtherDeleter>& right) noexcept {
	return !(right < left);
}

template <typename T, typename Deleter, typename U, typename OtherDeleter>
bool operator>(const unique_ptr<T, Deleter>& left, const unique_ptr<U, OtherDeleter>& right) noexcept {
	return right < left;
}

template <typename T, typename Deleter, typename U, typename OtherDeleter>
bool operator>=(const unique_ptr<T, Deleter>& left, const unique_ptr<U, OtherDeleter>& right) noexcept {
	return !(left < right);
}

template <typename T, typename Deleter>
bool operator==(const unique_ptr<T, Deleter>& value, wm::nullptr_t) noexcept {
	return !value;
}

template <typename T, typename Deleter>
bool operator==(wm::nullptr_t, const unique_ptr<T, Deleter>& value) noexcept {
	return !value;
}

template <typename T, typename Deleter>
bool operator!=(const unique_ptr<T, Deleter>& value, wm::nullptr_t) noexcept {
	return static_cast<bool>(value);
}

template <typename T, typename Deleter>
bool operator!=(wm::nullptr_t, const unique_ptr<T, Deleter>& value) noexcept {
	return static_cast<bool>(value);
}

namespace detail {

struct shared_control_block {
	size_t strong_count;
	size_t weak_count;

	shared_control_block() : strong_count(1), weak_count(1) {}
	virtual ~shared_control_block() {}
	virtual void destroy_object() = 0;
};

template <typename T>
struct shared_control_block_impl : shared_control_block {
	T* ptr;

	explicit shared_control_block_impl(T* value) : ptr(value) {}

	void destroy_object() override {
		delete ptr;
		ptr = nullptr;
	}
};

template <typename T, typename Deleter>
struct shared_control_block_deleter : shared_control_block {
	T* ptr;
	Deleter deleter;

	shared_control_block_deleter(T* value, Deleter cleanup)
		: ptr(value), deleter(wm::move(cleanup)) {}

	void destroy_object() override {
		if (ptr) {
			deleter(ptr);
			ptr = nullptr;
		}
	}
};

template <size_t Left, size_t Right>
struct static_max {
	static constexpr size_t value = Left > Right ? Left : Right;
};

template <typename... Types>
struct max_sizeof;

template <typename T>
struct max_sizeof<T> {
	static constexpr size_t value = sizeof(T);
};

template <typename T, typename U, typename... Rest>
struct max_sizeof<T, U, Rest...> {
	static constexpr size_t value = static_max<sizeof(T), max_sizeof<U, Rest...>::value>::value;
};

template <typename... Types>
struct max_alignof;

template <typename T>
struct max_alignof<T> {
	static constexpr size_t value = alignof(T);
};

template <typename T, typename U, typename... Rest>
struct max_alignof<T, U, Rest...> {
	static constexpr size_t value = static_max<alignof(T), max_alignof<U, Rest...>::value>::value;
};

template <typename T, typename... Types>
struct has_type;

template <typename T>
struct has_type<T> {
	static constexpr bool value = false;
};

template <typename T, typename U, typename... Rest>
struct has_type<T, U, Rest...> {
	static constexpr bool value = is_same<remove_cv_t<T>, remove_cv_t<U>>::value || has_type<T, Rest...>::value;
};

template <typename T, typename... Types>
struct type_index;

template <typename T, typename U, typename... Rest>
struct type_index<T, U, Rest...> {
	static constexpr size_t value = is_same<remove_cv_t<T>, remove_cv_t<U>>::value ? 0 : 1 + type_index<T, Rest...>::value;
};

template <typename T>
struct type_index<T> {
	static constexpr size_t value = 0;
};

template <size_t Index, typename... Types>
struct type_at;

template <typename T, typename... Rest>
struct type_at<0, T, Rest...> {
	using type = T;
};

template <size_t Index, typename T, typename... Rest>
struct type_at<Index, T, Rest...> {
	using type = typename type_at<Index - 1, Rest...>::type;
};

template <typename Source, typename... Types>
struct constructible_type_index;

template <typename Source>
struct constructible_type_index<Source> {
	static constexpr bool valid = false;
	static constexpr size_t value = 0;
};

template <typename Source, typename T, typename... Rest>
struct constructible_type_index<Source, T, Rest...> {
	static constexpr bool head_valid = is_constructible<T, Source>::value;
	static constexpr bool tail_valid = constructible_type_index<Source, Rest...>::valid;
	static constexpr bool valid = head_valid || tail_valid;
	static constexpr size_t value = head_valid ? 0 : 1 + constructible_type_index<Source, Rest...>::value;
};

template <typename Clean, typename Source, typename... Types>
struct variant_selected_index {
	static constexpr bool exact_valid = has_type<Clean, Types...>::value;
	static constexpr bool constructible_valid = constructible_type_index<Source, Types...>::valid;
	static constexpr bool valid = exact_valid || constructible_valid;
	static constexpr size_t value = exact_valid ? type_index<Clean, Types...>::value
	                                            : constructible_type_index<Source, Types...>::value;
};

template <size_t Index, typename T>
struct tuple_leaf {
	constexpr tuple_leaf() : value() {}

	template <typename U>
	constexpr explicit tuple_leaf(U&& input) : value(wm::forward<U>(input)) {}

	T value;
};

template <typename Indexes, typename... Types>
struct tuple_impl;

template <size_t... Indexes, typename... Types>
struct tuple_impl<index_sequence<Indexes...>, Types...> : tuple_leaf<Indexes, Types>... {
	constexpr tuple_impl() = default;

	template <typename... Args>
	constexpr explicit tuple_impl(Args&&... args)
		: tuple_leaf<Indexes, Types>(wm::forward<Args>(args))... {}
};

struct tuple_conversion_tag {};

template <size_t Index, typename T, typename... Rest>
void variant_destroy(size_t active_index, void* storage) {
	if (active_index == Index) {
		reinterpret_cast<T*>(storage)->~T();
	} else if constexpr (sizeof...(Rest) > 0) {
		variant_destroy<Index + 1, Rest...>(active_index, storage);
	}
}

template <size_t Index, typename T, typename... Rest>
void variant_copy(size_t active_index, void* destination, const void* source) {
	if (active_index == Index) {
		new (destination) T(*reinterpret_cast<const T*>(source));
	} else if constexpr (sizeof...(Rest) > 0) {
		variant_copy<Index + 1, Rest...>(active_index, destination, source);
	}
}

template <size_t Index, typename T, typename... Rest>
void variant_move(size_t active_index, void* destination, void* source) {
	if (active_index == Index) {
		new (destination) T(wm::move(*reinterpret_cast<T*>(source)));
	} else if constexpr (sizeof...(Rest) > 0) {
		variant_move<Index + 1, Rest...>(active_index, destination, source);
	}
}

template <size_t Index, typename T, typename... Rest>
bool variant_equal(size_t active_index, const void* left, const void* right) {
	if (active_index == Index) {
		return *reinterpret_cast<const T*>(left) == *reinterpret_cast<const T*>(right);
	}
	if constexpr (sizeof...(Rest) > 0) {
		return variant_equal<Index + 1, Rest...>(active_index, left, right);
	}
	return false;
}

template <size_t Index, typename T, typename... Rest>
bool variant_less(size_t active_index, const void* left, const void* right) {
	if (active_index == Index) {
		return *reinterpret_cast<const T*>(left) < *reinterpret_cast<const T*>(right);
	}
	if constexpr (sizeof...(Rest) > 0) {
		return variant_less<Index + 1, Rest...>(active_index, left, right);
	}
	return false;
}

template <typename T>
T* vector_allocate(size_t count) {
	return count == 0 ? nullptr : static_cast<T*>(::operator new(sizeof(T) * count));
}

template <typename T>
void vector_destroy_range(T* data, size_t count) {
	for (size_t i = 0; i < count; ++i) {
		data[i].~T();
	}
}

inline size_t hash_bytes(const unsigned char* bytes, size_t count) noexcept {
	size_t hash = sizeof(size_t) >= 8 ? (size_t)1469598103934665603ull : (size_t)2166136261u;
	const size_t prime = sizeof(size_t) >= 8 ? (size_t)1099511628211ull : (size_t)16777619u;
	for (size_t i = 0; i < count; ++i) {
		hash ^= (size_t)bytes[i];
		hash *= prime;
	}
	return hash;
}

} // namespace detail

template <typename... Types>
class tuple;

template <size_t Index, typename Tuple>
struct tuple_element;

template <size_t Index, typename... Types>
constexpr typename tuple_element<Index, tuple<Types...>>::type& get(tuple<Types...>& value) noexcept;

template <size_t Index, typename... Types>
constexpr const typename tuple_element<Index, tuple<Types...>>::type& get(const tuple<Types...>& value) noexcept;

template <size_t Index, typename... Types>
constexpr typename tuple_element<Index, tuple<Types...>>::type&& get(tuple<Types...>&& value) noexcept;

template <typename... Types>
class tuple : public detail::tuple_impl<detail::make_index_sequence<sizeof...(Types)>, Types...> {
	using base = detail::tuple_impl<detail::make_index_sequence<sizeof...(Types)>, Types...>;

public:
	constexpr tuple() = default;
	constexpr tuple(const tuple&) = default;
	constexpr tuple(tuple&&) = default;

	template <typename... Args,
	          typename = enable_if_t<sizeof...(Args) == sizeof...(Types) &&
	                                 !detail::is_single_tuple_argument<Args...>::value>>
	constexpr tuple(Args&&... args) : base(wm::forward<Args>(args)...) {}

	template <size_t Count = sizeof...(Types), typename = enable_if_t<(Count > 0)>>
	constexpr tuple(const Types&... args) : base(args...) {}

	template <typename... OtherTypes, typename = enable_if_t<sizeof...(OtherTypes) == sizeof...(Types)>>
	constexpr tuple(const tuple<OtherTypes...>& other)
		: tuple(detail::tuple_conversion_tag{}, other, detail::make_index_sequence<sizeof...(Types)>()) {}

	template <typename... OtherTypes, typename = enable_if_t<sizeof...(OtherTypes) == sizeof...(Types)>>
	constexpr tuple(tuple<OtherTypes...>&& other)
		: tuple(detail::tuple_conversion_tag{}, wm::move(other), detail::make_index_sequence<sizeof...(Types)>()) {}

	template <typename A, typename B, size_t Count = sizeof...(Types), typename = enable_if_t<Count == 2>>
	constexpr tuple(const pair<A, B>& other) : base(other.first, other.second) {}

	template <typename A, typename B, size_t Count = sizeof...(Types), typename = enable_if_t<Count == 2>>
	constexpr tuple(pair<A, B>&& other) : base(wm::move(other.first), wm::move(other.second)) {}

	tuple& operator=(const tuple& other) {
		assign_from(other, detail::make_index_sequence<sizeof...(Types)>());
		return *this;
	}

	template <typename... OtherTypes>
	tuple& operator=(const tuple<OtherTypes...>& other) {
		static_assert(sizeof...(Types) == sizeof...(OtherTypes), "tuple assignment size mismatch");
		assign_from(other, detail::make_index_sequence<sizeof...(Types)>());
		return *this;
	}

	template <typename... OtherTypes>
	tuple& operator=(tuple<OtherTypes...>&& other) {
		static_assert(sizeof...(Types) == sizeof...(OtherTypes), "tuple assignment size mismatch");
		assign_from_move(wm::move(other), detail::make_index_sequence<sizeof...(Types)>());
		return *this;
	}

	template <typename A, typename B>
	tuple& operator=(const pair<A, B>& other) {
		static_assert(sizeof...(Types) == 2, "pair assignment requires a two-element tuple");
		wm::get<0>(*this) = other.first;
		wm::get<1>(*this) = other.second;
		return *this;
	}

	template <typename A, typename B>
	tuple& operator=(pair<A, B>&& other) {
		static_assert(sizeof...(Types) == 2, "pair assignment requires a two-element tuple");
		wm::get<0>(*this) = wm::move(other.first);
		wm::get<1>(*this) = wm::move(other.second);
		return *this;
	}

private:
	template <typename OtherTuple, size_t... Indexes>
	constexpr tuple(detail::tuple_conversion_tag, OtherTuple&& other, detail::index_sequence<Indexes...>)
		: base(wm::get<Indexes>(wm::forward<OtherTuple>(other))...) {}

	template <typename OtherTuple, size_t... Indexes>
	void assign_from(const OtherTuple& other, detail::index_sequence<Indexes...>) {
		int ignored[] = {0, ((wm::get<Indexes>(*this) = wm::get<Indexes>(other)), 0)...};
		(void)ignored;
	}

	template <typename OtherTuple, size_t... Indexes>
	void assign_from_move(OtherTuple&& other, detail::index_sequence<Indexes...>) {
		int ignored[] = {0, ((wm::get<Indexes>(*this) = wm::move(wm::get<Indexes>(other))), 0)...};
		(void)ignored;
	}
};

template <typename... Types>
tuple(Types...) -> tuple<Types...>;

template <size_t Index, typename... Types>
struct tuple_element<Index, tuple<Types...>> {
	using type = typename detail::type_at<Index, Types...>::type;
};

template <typename Tuple>
struct tuple_size;

template <typename... Types>
struct tuple_size<tuple<Types...>> {
	static constexpr size_t value = sizeof...(Types);
};

#ifndef TAYGA_PAIR_TUPLE_PROTOCOL
#define TAYGA_PAIR_TUPLE_PROTOCOL
template <typename A, typename B>
struct tuple_size<pair<A, B>> : integral_constant<size_t, 2> {};

template <typename A, typename B>
struct tuple_element<0, pair<A, B>> {
	using type = A;
};

template <typename A, typename B>
struct tuple_element<1, pair<A, B>> {
	using type = B;
};

template <size_t Index, typename A, typename B>
struct tuple_element<Index, const pair<A, B>> {
	using type = const typename tuple_element<Index, pair<A, B>>::type;
};

template <size_t Index, typename A, typename B>
constexpr typename tuple_element<Index, pair<A, B>>::type& get(pair<A, B>& value) noexcept {
	if constexpr (Index == 0) {
		return value.first;
	} else {
		return value.second;
	}
}

template <size_t Index, typename A, typename B>
constexpr const typename tuple_element<Index, pair<A, B>>::type& get(const pair<A, B>& value) noexcept {
	if constexpr (Index == 0) {
		return value.first;
	} else {
		return value.second;
	}
}

template <size_t Index, typename A, typename B>
constexpr typename tuple_element<Index, pair<A, B>>::type&& get(pair<A, B>&& value) noexcept {
	if constexpr (Index == 0) {
		return wm::move(value.first);
	} else {
		return wm::move(value.second);
	}
}
#endif

template <size_t Index, typename... Types>
constexpr typename tuple_element<Index, tuple<Types...>>::type& get(tuple<Types...>& value) noexcept {
	using element_type = typename tuple_element<Index, tuple<Types...>>::type;
	return static_cast<detail::tuple_leaf<Index, element_type>&>(value).value;
}

template <size_t Index, typename... Types>
constexpr const typename tuple_element<Index, tuple<Types...>>::type& get(const tuple<Types...>& value) noexcept {
	using element_type = typename tuple_element<Index, tuple<Types...>>::type;
	return static_cast<const detail::tuple_leaf<Index, element_type>&>(value).value;
}

template <size_t Index, typename... Types>
constexpr typename tuple_element<Index, tuple<Types...>>::type&& get(tuple<Types...>&& value) noexcept {
	using element_type = typename tuple_element<Index, tuple<Types...>>::type;
	return static_cast<element_type&&>(wm::get<Index>(value));
}

template <typename T, typename... Types>
constexpr T& get(tuple<Types...>& value) noexcept {
	return wm::get<detail::type_index<T, Types...>::value>(value);
}

template <typename T, typename... Types>
constexpr const T& get(const tuple<Types...>& value) noexcept {
	return wm::get<detail::type_index<T, Types...>::value>(value);
}

template <typename T, typename... Types>
constexpr T&& get(tuple<Types...>&& value) noexcept {
	return static_cast<T&&>(wm::get<T>(value));
}

namespace detail {
template <typename LeftTuple, typename RightTuple, size_t... Indexes>
constexpr bool tuple_equal_impl(const LeftTuple& left, const RightTuple& right, index_sequence<Indexes...>) {
	bool equal = true;
	int ignored[] = {0, ((equal = equal && (wm::get<Indexes>(left) == wm::get<Indexes>(right))), 0)...};
	(void)ignored;
	return equal;
}

template <size_t Index, size_t Count, typename LeftTuple, typename RightTuple>
constexpr bool tuple_less_impl(const LeftTuple& left, const RightTuple& right) {
	if constexpr (Index == Count) {
		return false;
	} else {
		if (wm::get<Index>(left) < wm::get<Index>(right)) {
			return true;
		}
		if (wm::get<Index>(right) < wm::get<Index>(left)) {
			return false;
		}
		return tuple_less_impl<Index + 1, Count>(left, right);
	}
}
}

template <typename... LeftTypes, typename... RightTypes>
constexpr bool operator==(const tuple<LeftTypes...>& left, const tuple<RightTypes...>& right) {
	static_assert(sizeof...(LeftTypes) == sizeof...(RightTypes), "tuple comparison size mismatch");
	return detail::tuple_equal_impl(left, right, detail::make_index_sequence<sizeof...(LeftTypes)>());
}

template <typename... LeftTypes, typename... RightTypes>
constexpr bool operator!=(const tuple<LeftTypes...>& left, const tuple<RightTypes...>& right) {
	return !(left == right);
}

template <typename... LeftTypes, typename... RightTypes>
constexpr bool operator<(const tuple<LeftTypes...>& left, const tuple<RightTypes...>& right) {
	static_assert(sizeof...(LeftTypes) == sizeof...(RightTypes), "tuple comparison size mismatch");
	return detail::tuple_less_impl<0, sizeof...(LeftTypes)>(left, right);
}

template <typename... LeftTypes, typename... RightTypes>
constexpr bool operator>(const tuple<LeftTypes...>& left, const tuple<RightTypes...>& right) {
	return right < left;
}

template <typename... LeftTypes, typename... RightTypes>
constexpr bool operator<=(const tuple<LeftTypes...>& left, const tuple<RightTypes...>& right) {
	return !(right < left);
}

template <typename... LeftTypes, typename... RightTypes>
constexpr bool operator>=(const tuple<LeftTypes...>& left, const tuple<RightTypes...>& right) {
	return !(left < right);
}

template <typename... Types>
constexpr tuple<Types&...> tie(Types&... values) noexcept {
	return tuple<Types&...>(values...);
}

template <typename... Types>
constexpr tuple<Types&&...> forward_as_tuple(Types&&... values) noexcept {
	return tuple<Types&&...>(wm::forward<Types>(values)...);
}

struct ignore_t {
	template <typename T>
	constexpr const ignore_t& operator=(T&&) const noexcept {
		return *this;
	}
};

inline constexpr ignore_t ignore{};

struct in_place_t {
	explicit constexpr in_place_t() noexcept = default;
};

inline constexpr in_place_t in_place{};

template <size_t Index>
struct in_place_index_t {
	explicit constexpr in_place_index_t() noexcept = default;
};

template <size_t Index>
inline constexpr in_place_index_t<Index> in_place_index{};

template <typename T>
struct in_place_type_t {
	explicit constexpr in_place_type_t() noexcept = default;
};

template <typename T>
inline constexpr in_place_type_t<T> in_place_type{};

struct nullopt_t {
	explicit constexpr nullopt_t() noexcept = default;
};

inline constexpr nullopt_t nullopt{};

namespace detail {

template <typename T, bool Complete = __is_complete_type(T)>
struct optional_trivially_destructible_default : false_type {};

template <typename T, size_t N>
struct optional_trivially_destructible_default<array<T, N>, false> : false_type {};

template <typename T, size_t N>
struct optional_trivially_destructible_default<array<T, N>, true> : false_type {};

template <typename A, typename B>
struct optional_trivially_destructible_default<pair<A, B>, false> : false_type {};

template <typename A, typename B>
struct optional_trivially_destructible_default<pair<A, B>, true> : false_type {};

template <typename T>
struct optional_trivially_destructible_default<T, true>
	: bool_constant<is_trivially_destructible<T>::value && !is_class<T>::value> {};

template <>
struct optional_trivially_destructible_default<llvm::BlockFrequency, false> : false_type {};

template <>
struct optional_trivially_destructible_default<llvm::BlockFrequency, true> : false_type {};

template <>
struct optional_trivially_destructible_default<llvm::StringRef, false> : true_type {};

template <>
struct optional_trivially_destructible_default<llvm::StringRef, true> : true_type {};

template <>
struct optional_trivially_destructible_default<llvm::TypeSize, false> : true_type {};

template <>
struct optional_trivially_destructible_default<llvm::TypeSize, true> : true_type {};

template <>
struct optional_trivially_destructible_default<clang::PositiveAnalyzerOption, false> : true_type {};

template <>
struct optional_trivially_destructible_default<clang::PositiveAnalyzerOption, true> : true_type {};

template <>
struct optional_trivially_destructible_default<llvm::wasm::WasmGlobalType, false> : true_type {};

template <>
struct optional_trivially_destructible_default<llvm::wasm::WasmGlobalType, true> : true_type {};

template <>
struct optional_trivially_destructible_default<llvm::wasm::WasmTableType, false> : true_type {};

template <>
struct optional_trivially_destructible_default<llvm::wasm::WasmTableType, true> : true_type {};

template <>
struct optional_trivially_destructible_default<llvm::AArch64::ArchInfo, false> : false_type {};

template <>
struct optional_trivially_destructible_default<llvm::AArch64::ArchInfo, true> : false_type {};

template <>
struct optional_trivially_destructible_default<llvm::AArch64::CpuInfo, false> : false_type {};

template <>
struct optional_trivially_destructible_default<llvm::AArch64::CpuInfo, true> : false_type {};

template <>
struct optional_trivially_destructible_default<llvm::AArch64::ExtensionInfo, false> : false_type {};

template <>
struct optional_trivially_destructible_default<llvm::AArch64::ExtensionInfo, true> : false_type {};

template <>
struct optional_trivially_destructible_default<llvm::AArch64::FMVInfo, false> : false_type {};

template <>
struct optional_trivially_destructible_default<llvm::AArch64::FMVInfo, true> : false_type {};

} // namespace detail

template <typename T, bool TriviallyDestructible = detail::optional_trivially_destructible_default<T>::value>
class optional;

template <typename T>
class optional<T, false> {
public:
	using value_type = T;

	constexpr optional() noexcept : storage_{}, engaged_(false) {}
	constexpr optional(nullopt_t) noexcept : storage_{}, engaged_(false) {}

	template <typename... Args>
	constexpr explicit optional(in_place_t, Args&&... args) : storage_{}, engaged_(false) {
		emplace(wm::forward<Args>(args)...);
	}

	constexpr optional(const T& value) : storage_{}, engaged_(false) {
		emplace(value);
	}

	constexpr optional(T&& value) : storage_{}, engaged_(false) {
		emplace(wm::move(value));
	}

	template <typename Copyable = T,
	          typename = enable_if_t<is_class<Copyable>::value && is_copy_constructible<Copyable>::value>>
	constexpr optional(std::initializer_list<T> values) : storage_{}, engaged_(false) {
		if (values.size() > 0) {
			emplace(*values.begin());
		}
	}

	template <typename U, typename Clean = decay_t<U>,
	          typename = enable_if_t<!is_same<Clean, optional>::value &&
	                                 !is_same<Clean, T>::value &&
	                                 is_constructible<T, U&&>::value>>
	constexpr optional(U&& value) : storage_{}, engaged_(false) {
		emplace(wm::forward<U>(value));
	}

	optional(const optional& other) : engaged_(false) {
		if (other.engaged_) {
			emplace(*other.ptr());
		}
	}

	optional(optional&& other) : engaged_(false) {
		if (other.engaged_) {
			emplace(wm::move(*other.ptr()));
		}
	}

	template <bool OtherTrivial, typename = enable_if_t<OtherTrivial>>
	optional(const optional<T, OtherTrivial>& other) : engaged_(false) {
		if (other.has_value()) {
			emplace(*other);
		}
	}

	template <bool OtherTrivial, typename = enable_if_t<OtherTrivial>>
	optional(optional<T, OtherTrivial>&& other) : engaged_(false) {
		if (other.has_value()) {
			emplace(wm::move(*other));
		}
	}

	template <typename U, bool OtherTrivial,
	          typename = enable_if_t<!is_same<T, U>::value && is_constructible<T, const U&>::value>>
	optional(const optional<U, OtherTrivial>& other) : engaged_(false) {
		if (other.has_value()) {
			emplace(*other);
		}
	}

	template <typename U, bool OtherTrivial,
	          typename = enable_if_t<!is_same<T, U>::value && is_constructible<T, U&&>::value>>
	optional(optional<U, OtherTrivial>&& other) : engaged_(false) {
		if (other.has_value()) {
			emplace(wm::move(*other));
		}
	}

	~optional() {
		reset();
	}

	optional& operator=(nullopt_t) noexcept {
		reset();
		return *this;
	}

	optional& operator=(const optional& other) {
		if (this != &other) {
			if (other.engaged_) {
				emplace(*other.ptr());
			} else {
				reset();
			}
		}
		return *this;
	}

	optional& operator=(optional&& other) {
		if (this != &other) {
			if (other.engaged_) {
				emplace(wm::move(*other.ptr()));
			} else {
				reset();
			}
		}
		return *this;
	}

	template <typename U, bool OtherTrivial,
	          typename = enable_if_t<!is_same<T, U>::value && is_constructible<T, const U&>::value>>
	optional& operator=(const optional<U, OtherTrivial>& other) {
		if (other.has_value()) {
			emplace(*other);
		} else {
			reset();
		}
		return *this;
	}

	template <typename U, bool OtherTrivial,
	          typename = enable_if_t<!is_same<T, U>::value && is_constructible<T, U&&>::value>>
	optional& operator=(optional<U, OtherTrivial>&& other) {
		if (other.has_value()) {
			emplace(wm::move(*other));
		} else {
			reset();
		}
		return *this;
	}

	optional& operator=(const T& value) {
		emplace(value);
		return *this;
	}

	optional& operator=(T&& value) {
		emplace(wm::move(value));
		return *this;
	}

	template <typename U, typename Clean = decay_t<U>,
	          typename = enable_if_t<!is_same<Clean, optional>::value &&
	                                 !is_same<Clean, T>::value &&
	                                 is_constructible<T, U&&>::value>>
	optional& operator=(U&& value) {
		emplace(wm::forward<U>(value));
		return *this;
	}

	constexpr bool has_value() const noexcept { return engaged_; }
	constexpr explicit operator bool() const noexcept { return engaged_; }

	T& value() {
		if (!engaged_) {
			__builtin_trap();
		}
		return *ptr();
	}

	const T& value() const {
		if (!engaged_) {
			__builtin_trap();
		}
		return *ptr();
	}

	T& operator*() noexcept { return *ptr(); }
	const T& operator*() const noexcept { return *ptr(); }
	T* operator->() noexcept { return ptr(); }
	const T* operator->() const noexcept { return ptr(); }

	template <typename U>
	T value_or(U&& fallback) const {
		return engaged_ ? *ptr() : static_cast<T>(wm::forward<U>(fallback));
	}

	template <typename... Args>
	constexpr T& emplace(Args&&... args) {
		reset();
		new (storage_) T(wm::forward<Args>(args)...);
		engaged_ = true;
		return *ptr();
	}

	constexpr void reset() noexcept {
		if (engaged_) {
			ptr()->~T();
			engaged_ = false;
		}
	}

private:
	T* ptr() noexcept { return reinterpret_cast<T*>(storage_); }
	const T* ptr() const noexcept { return reinterpret_cast<const T*>(storage_); }

	alignas(T) unsigned char storage_[sizeof(T)];
	bool engaged_;
};

template <typename T>
class optional<T, true> {
public:
	using value_type = T;

	constexpr optional() noexcept : dummy_(0), engaged_(false) {}
	constexpr optional(nullopt_t) noexcept : dummy_(0), engaged_(false) {}

	template <typename... Args>
	constexpr explicit optional(in_place_t, Args&&... args)
		: value_(wm::forward<Args>(args)...), engaged_(true) {}

	constexpr optional(const T& value) : value_(value), engaged_(true) {}
	constexpr optional(T&& value) : value_(wm::move(value)), engaged_(true) {}

	template <typename U, typename Clean = decay_t<U>,
	          typename = enable_if_t<!is_same<Clean, optional>::value &&
	                                 !is_same<Clean, T>::value &&
	                                 is_constructible<T, U&&>::value>>
	constexpr optional(U&& value) : value_(wm::forward<U>(value)), engaged_(true) {}

	optional(const optional& other) : dummy_(0), engaged_(false) {
		if (other.engaged_) {
			emplace(*other.ptr());
		}
	}

	optional(optional&& other) : dummy_(0), engaged_(false) {
		if (other.engaged_) {
			emplace(wm::move(*other.ptr()));
		}
	}

	template <bool OtherTrivial, typename = enable_if_t<!OtherTrivial>>
	optional(const optional<T, OtherTrivial>& other) : dummy_(0), engaged_(false) {
		if (other.has_value()) {
			emplace(*other);
		}
	}

	template <bool OtherTrivial, typename = enable_if_t<!OtherTrivial>>
	optional(optional<T, OtherTrivial>&& other) : dummy_(0), engaged_(false) {
		if (other.has_value()) {
			emplace(wm::move(*other));
		}
	}

	template <typename U, bool OtherTrivial,
	          typename = enable_if_t<!is_same<T, U>::value && is_constructible<T, const U&>::value>>
	optional(const optional<U, OtherTrivial>& other) : dummy_(0), engaged_(false) {
		if (other.has_value()) {
			emplace(*other);
		}
	}

	template <typename U, bool OtherTrivial,
	          typename = enable_if_t<!is_same<T, U>::value && is_constructible<T, U&&>::value>>
	optional(optional<U, OtherTrivial>&& other) : dummy_(0), engaged_(false) {
		if (other.has_value()) {
			emplace(wm::move(*other));
		}
	}

	optional& operator=(nullopt_t) noexcept {
		reset();
		return *this;
	}

	optional& operator=(const optional& other) {
		if (this != &other) {
			if (other.engaged_) {
				emplace(*other.ptr());
			} else {
				reset();
			}
		}
		return *this;
	}

	optional& operator=(optional&& other) {
		if (this != &other) {
			if (other.engaged_) {
				emplace(wm::move(*other.ptr()));
			} else {
				reset();
			}
		}
		return *this;
	}

	template <typename U, bool OtherTrivial,
	          typename = enable_if_t<!is_same<T, U>::value && is_constructible<T, const U&>::value>>
	optional& operator=(const optional<U, OtherTrivial>& other) {
		if (other.has_value()) {
			emplace(*other);
		} else {
			reset();
		}
		return *this;
	}

	template <typename U, bool OtherTrivial,
	          typename = enable_if_t<!is_same<T, U>::value && is_constructible<T, U&&>::value>>
	optional& operator=(optional<U, OtherTrivial>&& other) {
		if (other.has_value()) {
			emplace(wm::move(*other));
		} else {
			reset();
		}
		return *this;
	}

	optional& operator=(const T& value) {
		emplace(value);
		return *this;
	}

	optional& operator=(T&& value) {
		emplace(wm::move(value));
		return *this;
	}

	template <typename U, typename Clean = decay_t<U>,
	          typename = enable_if_t<!is_same<Clean, optional>::value &&
	                                 !is_same<Clean, T>::value &&
	                                 is_constructible<T, U&&>::value>>
	optional& operator=(U&& value) {
		emplace(wm::forward<U>(value));
		return *this;
	}

	constexpr bool has_value() const noexcept { return engaged_; }
	constexpr explicit operator bool() const noexcept { return engaged_; }

	T& value() {
		if (!engaged_) {
			__builtin_trap();
		}
		return *ptr();
	}

	constexpr const T& value() const {
		if (!engaged_) {
			__builtin_trap();
		}
		return *ptr();
	}

	T& operator*() noexcept { return *ptr(); }
	constexpr const T& operator*() const noexcept { return *ptr(); }
	T* operator->() noexcept { return ptr(); }
	constexpr const T* operator->() const noexcept { return ptr(); }

	template <typename U>
	constexpr T value_or(U&& fallback) const {
		return engaged_ ? *ptr() : static_cast<T>(wm::forward<U>(fallback));
	}

	template <typename... Args>
	constexpr T& emplace(Args&&... args) {
		if (engaged_) {
			ptr()->~T();
		}
		void* storage = const_cast<void*>(static_cast<const void*>(&value_));
		new (storage) T(wm::forward<Args>(args)...);
		engaged_ = true;
		return *ptr();
	}

	constexpr void reset() noexcept {
		engaged_ = false;
	}

private:
	T* ptr() noexcept { return &value_; }
	constexpr const T* ptr() const noexcept { return &value_; }

	union {
		unsigned char dummy_;
		T value_;
	};
	bool engaged_;
};

template <typename T>
optional(T) -> optional<decay_t<T>>;

template <typename T>
constexpr optional<decay_t<T>> make_optional(T&& value) {
	return optional<decay_t<T>>(wm::forward<T>(value));
}

template <typename T, typename... Args>
constexpr optional<T> make_optional(Args&&... args) {
	return optional<T>(in_place, wm::forward<Args>(args)...);
}

template <typename T>
class weak_ptr;

template <typename T>
class shared_ptr {
public:
	constexpr shared_ptr() noexcept : control_(nullptr), ptr_(nullptr) {}
	constexpr shared_ptr(wm::nullptr_t) noexcept : control_(nullptr), ptr_(nullptr) {}

	explicit shared_ptr(T* ptr)
		: control_(ptr ? new detail::shared_control_block_impl<T>(ptr) : nullptr), ptr_(ptr) {}

	template <typename Deleter>
	shared_ptr(T* ptr, Deleter deleter)
		: control_(ptr ? new detail::shared_control_block_deleter<T, Deleter>(ptr, wm::move(deleter)) : nullptr), ptr_(ptr) {}

	template <typename U, typename Deleter>
	shared_ptr(unique_ptr<U, Deleter>&& other) : control_(nullptr), ptr_(nullptr) {
		U* raw = other.release();
		if (raw) {
			control_ = new detail::shared_control_block_deleter<U, Deleter>(raw, wm::move(other.get_deleter()));
			ptr_ = raw;
		}
	}

	shared_ptr(const shared_ptr& other) noexcept : control_(other.control_), ptr_(other.ptr_) {
		retain();
	}

	shared_ptr(shared_ptr&& other) noexcept : control_(other.control_), ptr_(other.ptr_) {
		other.control_ = nullptr;
		other.ptr_ = nullptr;
	}

	template <typename U>
	shared_ptr(const shared_ptr<U>& other) noexcept : control_(other.control_), ptr_(other.ptr_) {
		retain();
	}

	template <typename U>
	shared_ptr(shared_ptr<U>&& other) noexcept : control_(other.control_), ptr_(other.ptr_) {
		other.control_ = nullptr;
		other.ptr_ = nullptr;
	}

	template <typename U>
	shared_ptr(const shared_ptr<U>& other, T* ptr) noexcept
		: control_(other.control_), ptr_(ptr) {
		retain();
	}

	~shared_ptr() {
		release();
	}

	shared_ptr& operator=(const shared_ptr& other) noexcept {
		if (this != &other) {
			shared_ptr copy(other);
			swap(copy);
		}
		return *this;
	}

	shared_ptr& operator=(shared_ptr&& other) noexcept {
		if (this != &other) {
			release();
			control_ = other.control_;
			ptr_ = other.ptr_;
			other.control_ = nullptr;
			other.ptr_ = nullptr;
		}
		return *this;
	}

	shared_ptr& operator=(wm::nullptr_t) noexcept {
		reset();
		return *this;
	}

	T& operator*() const noexcept { return *ptr_; }
	T* operator->() const noexcept { return ptr_; }
	T* get() const noexcept { return ptr_; }
	explicit operator bool() const noexcept { return ptr_ != nullptr; }

	size_t use_count() const noexcept {
		return control_ ? control_->strong_count : 0;
	}

	bool unique() const noexcept {
		return use_count() == 1;
	}

	constexpr void reset() noexcept {
		release();
	}

	void reset(T* ptr) {
		release();
		if (ptr) {
			control_ = new detail::shared_control_block_impl<T>(ptr);
			ptr_ = ptr;
		}
	}

	template <typename Deleter>
	void reset(T* ptr, Deleter deleter) {
		release();
		if (ptr) {
			control_ = new detail::shared_control_block_deleter<T, Deleter>(ptr, wm::move(deleter));
			ptr_ = ptr;
		}
	}

	void swap(shared_ptr& other) noexcept {
		detail::shared_control_block* control = control_;
		control_ = other.control_;
		other.control_ = control;

		T* ptr = ptr_;
		ptr_ = other.ptr_;
		other.ptr_ = ptr;
	}

private:
	template <typename U>
	friend class weak_ptr;
	template <typename U>
	friend class shared_ptr;

	explicit shared_ptr(detail::shared_control_block* control, T* ptr)
		: control_(control), ptr_(ptr) {
		retain();
	}

	void retain() noexcept {
		if (control_) {
			++control_->strong_count;
		}
	}

	void release() noexcept {
		if (!control_) {
			return;
		}
		if (--control_->strong_count == 0) {
			control_->destroy_object();
			if (--control_->weak_count == 0) {
				delete control_;
			}
		}
		control_ = nullptr;
		ptr_ = nullptr;
	}

	detail::shared_control_block* control_;
	T* ptr_;
};

template <typename T>
constexpr bool operator==(const shared_ptr<T>& left, const shared_ptr<T>& right) noexcept {
	return left.get() == right.get();
}

template <typename T>
constexpr bool operator!=(const shared_ptr<T>& left, const shared_ptr<T>& right) noexcept {
	return !(left == right);
}

template <typename T>
constexpr bool operator==(const shared_ptr<T>& value, wm::nullptr_t) noexcept {
	return value.get() == nullptr;
}

template <typename T>
constexpr bool operator==(wm::nullptr_t, const shared_ptr<T>& value) noexcept {
	return value.get() == nullptr;
}

template <typename T>
constexpr bool operator!=(const shared_ptr<T>& value, wm::nullptr_t) noexcept {
	return value.get() != nullptr;
}

template <typename T>
constexpr bool operator!=(wm::nullptr_t, const shared_ptr<T>& value) noexcept {
	return value.get() != nullptr;
}

template <typename T, typename U>
constexpr bool operator<(const shared_ptr<T>& left, const shared_ptr<U>& right) noexcept {
	return static_cast<const void*>(left.get()) < static_cast<const void*>(right.get());
}

template <typename T, typename U>
constexpr bool operator>(const shared_ptr<T>& left, const shared_ptr<U>& right) noexcept {
	return right < left;
}

template <typename T, typename U>
constexpr bool operator<=(const shared_ptr<T>& left, const shared_ptr<U>& right) noexcept {
	return !(right < left);
}

template <typename T, typename U>
constexpr bool operator>=(const shared_ptr<T>& left, const shared_ptr<U>& right) noexcept {
	return !(left < right);
}

template <typename T>
class weak_ptr {
public:
	constexpr weak_ptr() noexcept : control_(nullptr), ptr_(nullptr) {}
	constexpr weak_ptr(wm::nullptr_t) noexcept : control_(nullptr), ptr_(nullptr) {}

	weak_ptr(const shared_ptr<T>& other) noexcept : control_(other.control_), ptr_(other.ptr_) {
		retain();
	}

	weak_ptr(const weak_ptr& other) noexcept : control_(other.control_), ptr_(other.ptr_) {
		retain();
	}

	weak_ptr(weak_ptr&& other) noexcept : control_(other.control_), ptr_(other.ptr_) {
		other.control_ = nullptr;
		other.ptr_ = nullptr;
	}

	~weak_ptr() {
		release();
	}

	weak_ptr& operator=(const weak_ptr& other) noexcept {
		if (this != &other) {
			weak_ptr copy(other);
			swap(copy);
		}
		return *this;
	}

	weak_ptr& operator=(weak_ptr&& other) noexcept {
		if (this != &other) {
			release();
			control_ = other.control_;
			ptr_ = other.ptr_;
			other.control_ = nullptr;
			other.ptr_ = nullptr;
		}
		return *this;
	}

	weak_ptr& operator=(const shared_ptr<T>& other) noexcept {
		weak_ptr copy(other);
		swap(copy);
		return *this;
	}

	constexpr void reset() noexcept {
		release();
	}

	bool expired() const noexcept {
		return !control_ || control_->strong_count == 0;
	}

	shared_ptr<T> lock() const noexcept {
		return expired() ? shared_ptr<T>() : shared_ptr<T>(control_, ptr_);
	}

	void swap(weak_ptr& other) noexcept {
		detail::shared_control_block* control = control_;
		control_ = other.control_;
		other.control_ = control;

		T* ptr = ptr_;
		ptr_ = other.ptr_;
		other.ptr_ = ptr;
	}

private:
	void retain() noexcept {
		if (control_) {
			++control_->weak_count;
		}
	}

	void release() noexcept {
		if (!control_) {
			return;
		}
		if (--control_->weak_count == 0 && control_->strong_count == 0) {
			delete control_;
		}
		control_ = nullptr;
		ptr_ = nullptr;
	}

	detail::shared_control_block* control_;
	T* ptr_;
};

template <typename T, typename... Args>
shared_ptr<T> make_shared(Args&&... args) {
	return shared_ptr<T>(new T(wm::forward<Args>(args)...));
}

template <typename T>
class enable_shared_from_this {
public:
	shared_ptr<T> shared_from_this() {
		return weak_this_.lock();
	}

	shared_ptr<const T> shared_from_this() const {
		return weak_this_.lock();
	}

	weak_ptr<T> weak_from_this() noexcept {
		return weak_this_;
	}

	weak_ptr<const T> weak_from_this() const noexcept {
		return weak_this_;
	}

protected:
	constexpr enable_shared_from_this() noexcept = default;
	enable_shared_from_this(const enable_shared_from_this&) noexcept {}
	enable_shared_from_this& operator=(const enable_shared_from_this&) noexcept { return *this; }
	~enable_shared_from_this() = default;

private:
	weak_ptr<T> weak_this_{};
};

template <typename T, typename U>
shared_ptr<T> static_pointer_cast(const shared_ptr<U>& value) noexcept {
	return shared_ptr<T>(value, static_cast<T*>(value.get()));
}

template <typename T, typename U>
shared_ptr<T> dynamic_pointer_cast(const shared_ptr<U>& value) noexcept {
	T* ptr = dynamic_cast<T*>(value.get());
	return ptr ? shared_ptr<T>(value, ptr) : shared_ptr<T>();
}

template <typename T, typename U>
shared_ptr<T> const_pointer_cast(const shared_ptr<U>& value) noexcept {
	return shared_ptr<T>(value, const_cast<T*>(value.get()));
}

template <typename T, typename U>
shared_ptr<T> reinterpret_pointer_cast(const shared_ptr<U>& value) noexcept {
	return shared_ptr<T>(value, reinterpret_cast<T*>(value.get()));
}

template <typename T, typename Allocator = void>
class vector {
public:
	using value_type = T;
	using size_type = size_t;
	using difference_type = ptrdiff_t;
	using reference = T&;
	using const_reference = const T&;
	using pointer = T*;
	using const_pointer = const T*;
	using iterator = T*;
	using const_iterator = const T*;
	class reverse_iterator {
	public:
		using iterator_category = random_access_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = T*;
		using reference = T&;

		reverse_iterator() : base_(nullptr) {}
		explicit reverse_iterator(T* base) : base_(base) {}

		reference operator*() const noexcept {
			T* current = base_;
			--current;
			return *current;
		}

		pointer operator->() const noexcept {
			T* current = base_;
			--current;
			return current;
		}

		reference operator[](difference_type offset) const noexcept {
			return *(*this + offset);
		}

		reverse_iterator& operator++() noexcept {
			--base_;
			return *this;
		}

		reverse_iterator operator++(int) noexcept {
			reverse_iterator copy(*this);
			++(*this);
			return copy;
		}

		reverse_iterator& operator--() noexcept {
			++base_;
			return *this;
		}

		reverse_iterator operator--(int) noexcept {
			reverse_iterator copy(*this);
			--(*this);
			return copy;
		}

		reverse_iterator& operator+=(difference_type offset) noexcept {
			base_ -= offset;
			return *this;
		}

		reverse_iterator& operator-=(difference_type offset) noexcept {
			base_ += offset;
			return *this;
		}

		reverse_iterator operator+(difference_type offset) const noexcept {
			return reverse_iterator(base_ - offset);
		}

		reverse_iterator operator-(difference_type offset) const noexcept {
			return reverse_iterator(base_ + offset);
		}

		difference_type operator-(const reverse_iterator& other) const noexcept {
			return other.base_ - base_;
		}

		bool operator==(const reverse_iterator& other) const noexcept { return base_ == other.base_; }
		bool operator!=(const reverse_iterator& other) const noexcept { return base_ != other.base_; }
		bool operator<(const reverse_iterator& other) const noexcept { return other.base_ < base_; }
		bool operator>(const reverse_iterator& other) const noexcept { return other < *this; }
		bool operator<=(const reverse_iterator& other) const noexcept { return !(other < *this); }
		bool operator>=(const reverse_iterator& other) const noexcept { return !(*this < other); }

		T* base() const noexcept { return base_; }

	private:
		T* base_;
	};

	class const_reverse_iterator {
	public:
		using iterator_category = random_access_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = const T*;
		using reference = const T&;

		const_reverse_iterator() : base_(nullptr) {}
		explicit const_reverse_iterator(const T* base) : base_(base) {}
		const_reverse_iterator(reverse_iterator other) : base_(other.base()) {}

		reference operator*() const noexcept {
			const T* current = base_;
			--current;
			return *current;
		}

		pointer operator->() const noexcept {
			const T* current = base_;
			--current;
			return current;
		}

		reference operator[](difference_type offset) const noexcept {
			return *(*this + offset);
		}

		const_reverse_iterator& operator++() noexcept {
			--base_;
			return *this;
		}

		const_reverse_iterator operator++(int) noexcept {
			const_reverse_iterator copy(*this);
			++(*this);
			return copy;
		}

		const_reverse_iterator& operator--() noexcept {
			++base_;
			return *this;
		}

		const_reverse_iterator operator--(int) noexcept {
			const_reverse_iterator copy(*this);
			--(*this);
			return copy;
		}

		const_reverse_iterator& operator+=(difference_type offset) noexcept {
			base_ -= offset;
			return *this;
		}

		const_reverse_iterator& operator-=(difference_type offset) noexcept {
			base_ += offset;
			return *this;
		}

		const_reverse_iterator operator+(difference_type offset) const noexcept {
			return const_reverse_iterator(base_ - offset);
		}

		const_reverse_iterator operator-(difference_type offset) const noexcept {
			return const_reverse_iterator(base_ + offset);
		}

		difference_type operator-(const const_reverse_iterator& other) const noexcept {
			return other.base_ - base_;
		}

		bool operator==(const const_reverse_iterator& other) const noexcept { return base_ == other.base_; }
		bool operator!=(const const_reverse_iterator& other) const noexcept { return base_ != other.base_; }
		bool operator<(const const_reverse_iterator& other) const noexcept { return other.base_ < base_; }
		bool operator>(const const_reverse_iterator& other) const noexcept { return other < *this; }
		bool operator<=(const const_reverse_iterator& other) const noexcept { return !(other < *this); }
		bool operator>=(const const_reverse_iterator& other) const noexcept { return !(*this < other); }

		const T* base() const noexcept { return base_; }

	private:
		const T* base_;
	};

	vector() : data_(nullptr), size_(0), capacity_(0) {}

	explicit vector(size_t count) : data_(nullptr), size_(0), capacity_(0) {
		resize(count);
	}

	vector(std::initializer_list<T> values) : data_(nullptr), size_(0), capacity_(0) {
		reserve(values.size());
		for (const T& value : values) {
			emplace_back(value);
		}
	}

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	vector(InputIt first, InputIt last) : data_(nullptr), size_(0), capacity_(0) {
		insert(end(), first, last);
	}

	vector(size_t count, const T& value) : data_(nullptr), size_(0), capacity_(0) {
		resize(count, value);
	}

	vector(const vector& other) : data_(nullptr), size_(0), capacity_(0) {
		reserve(other.size_);
		for (size_t i = 0; i < other.size_; ++i) {
			new (data_ + i) T(other.data_[i]);
		}
		size_ = other.size_;
	}

	vector(vector&& other) noexcept : data_(other.data_), size_(other.size_), capacity_(other.capacity_) {
		other.data_ = nullptr;
		other.size_ = 0;
		other.capacity_ = 0;
	}

	~vector() {
		clear();
		::operator delete(data_);
	}

	vector& operator=(const vector& other) {
		if (this != &other) {
			vector copy(other);
			swap(copy);
		}
		return *this;
	}

	vector& operator=(vector&& other) noexcept {
		if (this != &other) {
			clear();
			::operator delete(data_);
			data_ = other.data_;
			size_ = other.size_;
			capacity_ = other.capacity_;
			other.data_ = nullptr;
			other.size_ = 0;
			other.capacity_ = 0;
		}
		return *this;
	}

	T& operator[](size_t index) noexcept { return data_[index]; }
	const T& operator[](size_t index) const noexcept { return data_[index]; }
	T& at(size_t index) {
		if (index >= size_) {
			__builtin_trap();
		}
		return data_[index];
	}
	const T& at(size_t index) const {
		if (index >= size_) {
			__builtin_trap();
		}
		return data_[index];
	}
	T* data() noexcept { return data_; }
	const T* data() const noexcept { return data_; }
	size_t size() const noexcept { return size_; }
	size_t capacity() const noexcept { return capacity_; }
	bool empty() const noexcept { return size_ == 0; }
	iterator begin() noexcept { return data_; }
	const_iterator begin() const noexcept { return data_; }
	const_iterator cbegin() const noexcept { return data_; }
	iterator end() noexcept { return data_ + size_; }
	const_iterator end() const noexcept { return data_ + size_; }
	const_iterator cend() const noexcept { return data_ + size_; }
	reverse_iterator rbegin() noexcept { return reverse_iterator(data_ + size_); }
	const_reverse_iterator rbegin() const noexcept { return const_reverse_iterator(data_ + size_); }
	const_reverse_iterator crbegin() const noexcept { return const_reverse_iterator(data_ + size_); }
	reverse_iterator rend() noexcept { return reverse_iterator(data_); }
	const_reverse_iterator rend() const noexcept { return const_reverse_iterator(data_); }
	const_reverse_iterator crend() const noexcept { return const_reverse_iterator(data_); }
	T& front() noexcept { return data_[0]; }
	const T& front() const noexcept { return data_[0]; }
	T& back() noexcept { return data_[size_ - 1]; }
	const T& back() const noexcept { return data_[size_ - 1]; }

	void clear() noexcept {
		for (size_t i = size_; i > 0; --i) {
			data_[i - 1].~T();
		}
		size_ = 0;
	}

	void reserve(size_t new_capacity) {
		if (new_capacity <= capacity_) {
			return;
		}

		T* new_data = detail::vector_allocate<T>(new_capacity);
		for (size_t i = 0; i < size_; ++i) {
			new (new_data + i) T(wm::move(data_[i]));
			data_[i].~T();
		}
		::operator delete(data_);
		data_ = new_data;
		capacity_ = new_capacity;
	}

	void shrink_to_fit() {
		if (capacity_ == size_) {
			return;
		}
		if (size_ == 0) {
			clear();
			::operator delete(data_);
			data_ = nullptr;
			capacity_ = 0;
			return;
		}
		T* new_data = detail::vector_allocate<T>(size_);
		for (size_t i = 0; i < size_; ++i) {
			new (new_data + i) T(wm::move(data_[i]));
			data_[i].~T();
		}
		::operator delete(data_);
		data_ = new_data;
		capacity_ = size_;
	}

	void resize(size_t count) {
		if (count < size_) {
			for (size_t i = size_; i > count; --i) {
				data_[i - 1].~T();
			}
			size_ = count;
			return;
		}
		if (count > size_) {
			reserve(count);
			for (; size_ < count; ++size_) {
				new (data_ + size_) T();
			}
		}
	}

	void resize(size_t count, const T& value) {
		if (count < size_) {
			for (size_t i = size_; i > count; --i) {
				data_[i - 1].~T();
			}
			size_ = count;
			return;
		}
		reserve(count);
		for (; size_ < count; ++size_) {
			new (data_ + size_) T(value);
		}
	}

	void assign(size_t count, const T& value) {
		clear();
		resize(count, value);
	}

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	void assign(InputIt first, InputIt last) {
		clear();
		insert(end(), first, last);
	}

	void push_back(const T& value) {
		emplace_back(value);
	}

	void push_back(T&& value) {
		emplace_back(wm::move(value));
	}

	template <typename... Args>
	T& emplace_back(Args&&... args) {
		if (size_ == capacity_) {
			reserve(capacity_ == 0 ? 4 : capacity_ * 2);
		}
		new (data_ + size_) T(wm::forward<Args>(args)...);
		++size_;
		return back();
	}

	void pop_back() {
		data_[size_ - 1].~T();
		--size_;
	}

	iterator insert(const_iterator position, const T& value) {
		return emplace(position, value);
	}

	iterator insert(const_iterator position, T&& value) {
		return emplace(position, wm::move(value));
	}

	iterator insert(const_iterator position, size_t count, const T& value) {
		const size_t index = data_ ? static_cast<size_t>(position - begin()) : size_;
		if (count == 0) {
			return iterator_at(index);
		}

		if (size_ + count > capacity_) {
			size_t new_capacity = capacity_ == 0 ? 4 : capacity_;
			while (new_capacity < size_ + count) {
				new_capacity *= 2;
			}
			reserve(new_capacity);
		}

		for (size_t i = size_; i > index; --i) {
			new (data_ + i + count - 1) T(wm::move(data_[i - 1]));
			data_[i - 1].~T();
		}
		for (size_t i = 0; i < count; ++i) {
			new (data_ + index + i) T(value);
		}
		size_ += count;
		return iterator_at(index);
	}

	iterator insert(const_iterator position, std::initializer_list<T> values) {
		return insert(position, values.begin(), values.end());
	}

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	iterator insert(const_iterator position, InputIt first, InputIt last) {
		const size_t index = data_ ? static_cast<size_t>(position - begin()) : size_;
		size_t count = 0;
		for (InputIt it = first; it != last; ++it) {
			++count;
		}
		if (count == 0) {
			return iterator_at(index);
		}

		if (size_ + count > capacity_) {
			size_t new_capacity = capacity_ == 0 ? 4 : capacity_;
			while (new_capacity < size_ + count) {
				new_capacity *= 2;
			}
			reserve(new_capacity);
		}

		for (size_t i = size_; i > index; --i) {
			new (data_ + i + count - 1) T(wm::move(data_[i - 1]));
			data_[i - 1].~T();
		}

		size_t out = index;
		for (InputIt it = first; it != last; ++it, ++out) {
			new (data_ + out) T(*it);
		}
		size_ += count;
		return iterator_at(index);
	}

	iterator erase(const_iterator position) {
		return erase(position, position + 1);
	}

	iterator erase(const_iterator first, const_iterator last) {
		const size_t start = data_ ? static_cast<size_t>(first - begin()) : 0;
		const size_t finish = data_ ? static_cast<size_t>(last - begin()) : 0;
		if (start >= finish) {
			return iterator_at(start);
		}

		const size_t count = finish - start;
		for (size_t i = start; i + count < size_; ++i) {
			data_[i].~T();
			new (data_ + i) T(wm::move(data_[i + count]));
		}
		for (size_t i = size_; i > size_ - count; --i) {
			data_[i - 1].~T();
		}
		size_ -= count;
		return iterator_at(start);
	}

	void swap(vector& other) noexcept {
		T* data = data_;
		data_ = other.data_;
		other.data_ = data;

		size_t size = size_;
		size_ = other.size_;
		other.size_ = size;

		size_t capacity = capacity_;
		capacity_ = other.capacity_;
		other.capacity_ = capacity;
	}

	template <typename... Args>
	iterator emplace(const_iterator position, Args&&... args) {
		const size_t index = data_ ? static_cast<size_t>(position - begin()) : size_;
		if (size_ == capacity_) {
			reserve(capacity_ == 0 ? 4 : capacity_ * 2);
		}
		for (size_t i = size_; i > index; --i) {
			new (data_ + i) T(wm::move(data_[i - 1]));
			data_[i - 1].~T();
		}
		new (data_ + index) T(wm::forward<Args>(args)...);
		++size_;
		return iterator_at(index);
	}

private:
	iterator iterator_at(size_t index) noexcept {
		return data_ ? data_ + index : nullptr;
	}

	T* data_;
	size_t size_;
	size_t capacity_;
};

template <typename T, typename LeftAllocator, typename RightAllocator>
bool operator==(const vector<T, LeftAllocator>& left, const vector<T, RightAllocator>& right) {
	if (left.size() != right.size()) {
		return false;
	}
	for (size_t i = 0; i < left.size(); ++i) {
		if (!(left[i] == right[i])) {
			return false;
		}
	}
	return true;
}

template <typename T, typename LeftAllocator, typename RightAllocator>
bool operator!=(const vector<T, LeftAllocator>& left, const vector<T, RightAllocator>& right) {
	return !(left == right);
}

template <typename T, typename LeftAllocator, typename RightAllocator>
bool operator<(const vector<T, LeftAllocator>& left, const vector<T, RightAllocator>& right) {
	auto leftIt = left.begin();
	auto rightIt = right.begin();
	while (leftIt != left.end() && rightIt != right.end()) {
		if (*leftIt < *rightIt) {
			return true;
		}
		if (*rightIt < *leftIt) {
			return false;
		}
		++leftIt;
		++rightIt;
	}
	return leftIt == left.end() && rightIt != right.end();
}

template <typename T>
class deque {
	struct node {
		template <typename... Args>
		explicit node(Args&&... args) : value(wm::forward<Args>(args)...) {}

		T value;
	};

	template <bool Const>
	class basic_iterator {
		template <bool>
		friend class basic_iterator;
		template <bool>
		friend class basic_reverse_iterator;
		friend class deque;

		using owner_type = conditional_t<Const, const deque, deque>;

	public:
		using iterator_category = random_access_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = conditional_t<Const, const T*, T*>;
		using reference = conditional_t<Const, const T&, T&>;

		basic_iterator() noexcept : owner_(nullptr), index_(0) {}

		template <bool OtherConst, typename = enable_if_t<Const || !OtherConst>>
		basic_iterator(const basic_iterator<OtherConst>& other) noexcept : owner_(other.owner_), index_(other.index_) {}

		reference operator*() const noexcept { return (*owner_)[index_]; }
		pointer operator->() const noexcept { return &(*owner_)[index_]; }
		reference operator[](difference_type offset) const noexcept { return (*owner_)[static_cast<size_t>(static_cast<difference_type>(index_) + offset)]; }

		basic_iterator& operator++() noexcept {
			++index_;
			return *this;
		}

		basic_iterator operator++(int) noexcept {
			basic_iterator copy(*this);
			++(*this);
			return copy;
		}

		basic_iterator& operator--() noexcept {
			--index_;
			return *this;
		}

		basic_iterator operator--(int) noexcept {
			basic_iterator copy(*this);
			--(*this);
			return copy;
		}

		basic_iterator& operator+=(difference_type offset) noexcept {
			index_ = static_cast<size_t>(static_cast<difference_type>(index_) + offset);
			return *this;
		}

		basic_iterator& operator-=(difference_type offset) noexcept {
			return *this += -offset;
		}

		basic_iterator operator+(difference_type offset) const noexcept {
			basic_iterator copy(*this);
			copy += offset;
			return copy;
		}

		basic_iterator operator-(difference_type offset) const noexcept {
			basic_iterator copy(*this);
			copy -= offset;
			return copy;
		}

		template <bool OtherConst>
		difference_type operator-(const basic_iterator<OtherConst>& other) const noexcept {
			return static_cast<difference_type>(index_) - static_cast<difference_type>(other.index_);
		}

		template <bool OtherConst>
		bool operator==(const basic_iterator<OtherConst>& other) const noexcept { return owner_ == other.owner_ && index_ == other.index_; }

		template <bool OtherConst>
		bool operator!=(const basic_iterator<OtherConst>& other) const noexcept { return !(*this == other); }

		template <bool OtherConst>
		bool operator<(const basic_iterator<OtherConst>& other) const noexcept { return index_ < other.index_; }

		template <bool OtherConst>
		bool operator>(const basic_iterator<OtherConst>& other) const noexcept { return other < *this; }

		template <bool OtherConst>
		bool operator<=(const basic_iterator<OtherConst>& other) const noexcept { return !(other < *this); }

		template <bool OtherConst>
		bool operator>=(const basic_iterator<OtherConst>& other) const noexcept { return !(*this < other); }

	private:
		basic_iterator(owner_type* owner, size_t index) noexcept : owner_(owner), index_(index) {}

		owner_type* owner_;
		size_t index_;
	};

	template <bool Const>
	class basic_reverse_iterator {
		template <bool>
		friend class basic_reverse_iterator;

	public:
		using iterator_type = basic_iterator<Const>;
		using iterator_category = random_access_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = conditional_t<Const, const T*, T*>;
		using reference = conditional_t<Const, const T&, T&>;

		basic_reverse_iterator() noexcept : current_() {}
		explicit basic_reverse_iterator(iterator_type current) noexcept : current_(current) {}

		template <bool OtherConst, typename = enable_if_t<Const || !OtherConst>>
		basic_reverse_iterator(const basic_reverse_iterator<OtherConst>& other) noexcept : current_(other.current_) {}

		iterator_type base() const noexcept { return current_; }

		reference operator*() const noexcept {
			iterator_type previous = current_;
			--previous;
			return *previous;
		}

		pointer operator->() const noexcept { return &(**this); }
		reference operator[](difference_type offset) const noexcept { return *(*this + offset); }

		basic_reverse_iterator& operator++() noexcept {
			--current_;
			return *this;
		}

		basic_reverse_iterator operator++(int) noexcept {
			basic_reverse_iterator copy(*this);
			++(*this);
			return copy;
		}

		basic_reverse_iterator& operator--() noexcept {
			++current_;
			return *this;
		}

		basic_reverse_iterator operator--(int) noexcept {
			basic_reverse_iterator copy(*this);
			--(*this);
			return copy;
		}

		basic_reverse_iterator& operator+=(difference_type offset) noexcept {
			current_ -= offset;
			return *this;
		}

		basic_reverse_iterator& operator-=(difference_type offset) noexcept {
			current_ += offset;
			return *this;
		}

		basic_reverse_iterator operator+(difference_type offset) const noexcept {
			basic_reverse_iterator copy(*this);
			copy += offset;
			return copy;
		}

		basic_reverse_iterator operator-(difference_type offset) const noexcept {
			basic_reverse_iterator copy(*this);
			copy -= offset;
			return copy;
		}

		template <bool OtherConst>
		difference_type operator-(const basic_reverse_iterator<OtherConst>& other) const noexcept {
			return other.current_ - current_;
		}

		template <bool OtherConst>
		bool operator==(const basic_reverse_iterator<OtherConst>& other) const noexcept { return current_ == other.current_; }

		template <bool OtherConst>
		bool operator!=(const basic_reverse_iterator<OtherConst>& other) const noexcept { return !(*this == other); }

		template <bool OtherConst>
		bool operator<(const basic_reverse_iterator<OtherConst>& other) const noexcept { return other.current_ < current_; }

		template <bool OtherConst>
		bool operator>(const basic_reverse_iterator<OtherConst>& other) const noexcept { return other < *this; }

		template <bool OtherConst>
		bool operator<=(const basic_reverse_iterator<OtherConst>& other) const noexcept { return !(other < *this); }

		template <bool OtherConst>
		bool operator>=(const basic_reverse_iterator<OtherConst>& other) const noexcept { return !(*this < other); }

	private:
		iterator_type current_;
	};

public:
	using value_type = T;
	using size_type = size_t;
	using reference = T&;
	using const_reference = const T&;
	using iterator = basic_iterator<false>;
	using const_iterator = basic_iterator<true>;
	using reverse_iterator = basic_reverse_iterator<false>;
	using const_reverse_iterator = basic_reverse_iterator<true>;

	deque() = default;

	explicit deque(size_t count) {
		for (size_t i = 0; i < count; ++i) {
			emplace_back();
		}
	}

	deque(size_t count, const T& value) {
		for (size_t i = 0; i < count; ++i) {
			push_back(value);
		}
	}

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	deque(InputIt first, InputIt last) {
		for (InputIt it = first; it != last; ++it) {
			push_back(*it);
		}
	}

	deque(std::initializer_list<T> values) : deque(values.begin(), values.end()) {}

	deque(const deque& other) {
		for (const T& value : other) {
			push_back(value);
		}
	}

	deque(deque&& other) noexcept : nodes_(wm::move(other.nodes_)) {}

	~deque() {
		clear();
	}

	deque& operator=(const deque& other) {
		if (this != &other) {
			deque copy(other);
			swap(copy);
		}
		return *this;
	}

	deque& operator=(deque&& other) noexcept {
		if (this != &other) {
			clear();
			nodes_ = wm::move(other.nodes_);
		}
		return *this;
	}

	bool empty() const noexcept { return nodes_.empty(); }
	size_t size() const noexcept { return nodes_.size(); }

	void clear() noexcept {
		for (size_t i = 0; i < nodes_.size(); ++i) {
			delete nodes_[i];
		}
		nodes_.clear();
	}

	void reserve(size_t count) { nodes_.reserve(count); }

	iterator begin() noexcept { return iterator(this, 0); }
	const_iterator begin() const noexcept { return const_iterator(this, 0); }
	const_iterator cbegin() const noexcept { return begin(); }
	iterator end() noexcept { return iterator(this, size()); }
	const_iterator end() const noexcept { return const_iterator(this, size()); }
	const_iterator cend() const noexcept { return end(); }
	reverse_iterator rbegin() noexcept { return reverse_iterator(end()); }
	const_reverse_iterator rbegin() const noexcept { return const_reverse_iterator(end()); }
	const_reverse_iterator crbegin() const noexcept { return const_reverse_iterator(cend()); }
	reverse_iterator rend() noexcept { return reverse_iterator(begin()); }
	const_reverse_iterator rend() const noexcept { return const_reverse_iterator(begin()); }
	const_reverse_iterator crend() const noexcept { return const_reverse_iterator(cbegin()); }

	T& operator[](size_t index) noexcept { return nodes_[index]->value; }
	const T& operator[](size_t index) const noexcept { return nodes_[index]->value; }
	T& at(size_t index) {
		if (index >= size()) {
			__builtin_trap();
		}
		return (*this)[index];
	}
	const T& at(size_t index) const {
		if (index >= size()) {
			__builtin_trap();
		}
		return (*this)[index];
	}
	T& front() noexcept { return (*this)[0]; }
	const T& front() const noexcept { return (*this)[0]; }
	T& back() noexcept { return (*this)[size() - 1]; }
	const T& back() const noexcept { return (*this)[size() - 1]; }

	void push_back(const T& value) { emplace_back(value); }
	void push_back(T&& value) { emplace_back(wm::move(value)); }

	void push_front(const T& value) { emplace_front(value); }
	void push_front(T&& value) { emplace_front(wm::move(value)); }

	template <typename... Args>
	T& emplace_back(Args&&... args) {
		node* item = new node(wm::forward<Args>(args)...);
		nodes_.push_back(item);
		return item->value;
	}

	template <typename... Args>
	T& emplace_front(Args&&... args) {
		node* item = new node(wm::forward<Args>(args)...);
		nodes_.insert(nodes_.begin(), item);
		return item->value;
	}

	void pop_back() {
		delete nodes_.back();
		nodes_.pop_back();
	}

	void pop_front() {
		delete nodes_.front();
		nodes_.erase(nodes_.begin());
	}

	iterator insert(const_iterator position, const T& value) {
		const size_t index = position.index_;
		node* item = new node(value);
		nodes_.insert(nodes_.begin() + static_cast<ptrdiff_t>(index), item);
		return iterator(this, index);
	}

	iterator insert(const_iterator position, T&& value) {
		const size_t index = position.index_;
		node* item = new node(wm::move(value));
		nodes_.insert(nodes_.begin() + static_cast<ptrdiff_t>(index), item);
		return iterator(this, index);
	}

	iterator insert(const_iterator position, size_t count, const T& value) {
		size_t index = position.index_;
		for (size_t i = 0; i < count; ++i) {
			node* item = new node(value);
			nodes_.insert(nodes_.begin() + static_cast<ptrdiff_t>(index + i), item);
		}
		return iterator(this, index);
	}

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	iterator insert(const_iterator position, InputIt first, InputIt last) {
		size_t index = position.index_;
		size_t out = index;
		for (InputIt it = first; it != last; ++it, ++out) {
			node* item = new node(*it);
			nodes_.insert(nodes_.begin() + static_cast<ptrdiff_t>(out), item);
		}
		return iterator(this, index);
	}

	iterator erase(const_iterator position) { return erase(position, position + 1); }

	iterator erase(const_iterator first, const_iterator last) {
		const size_t start = first.index_;
		const size_t finish = last.index_;
		if (start >= finish) {
			return iterator(this, start);
		}
		for (size_t i = start; i < finish; ++i) {
			delete nodes_[i];
		}
		nodes_.erase(nodes_.begin() + static_cast<ptrdiff_t>(start),
		             nodes_.begin() + static_cast<ptrdiff_t>(finish));
		return iterator(this, start);
	}

	void swap(deque& other) noexcept {
		nodes_.swap(other.nodes_);
	}

private:
	vector<node*> nodes_;
};

template <typename T>
class span {
public:
	using value_type = T;
	using iterator = T*;
	using const_iterator = const T*;

	constexpr span() noexcept : data_(nullptr), size_(0) {}
	constexpr span(T* data, size_t count) noexcept : data_(data), size_(count) {}

	template <size_t N>
	constexpr span(T (&values)[N]) noexcept : data_(values), size_(N) {}

	template <typename Container>
	span(Container& values) : data_(values.data()), size_(values.size()) {}

	constexpr T* data() const noexcept { return data_; }
	constexpr size_t size() const noexcept { return size_; }
	constexpr bool empty() const noexcept { return size_ == 0; }
	constexpr iterator begin() const noexcept { return data_; }
	constexpr iterator end() const noexcept { return data_ + size_; }
	constexpr T& operator[](size_t index) const noexcept { return data_[index]; }
	constexpr T& front() const noexcept { return data_[0]; }
	constexpr T& back() const noexcept { return data_[size_ - 1]; }

	constexpr span subspan(size_t offset, size_t count = static_cast<size_t>(-1)) const noexcept {
		if (offset > size_) {
			offset = size_;
		}
		const size_t remaining = size_ - offset;
		if (count == static_cast<size_t>(-1) || count > remaining) {
			count = remaining;
		}
		return span(data_ + offset, count);
	}

private:
	T* data_;
	size_t size_;
};

template <typename T>
class list {
	struct node;

public:
	class iterator {
	public:
		using iterator_category = bidirectional_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = T*;
		using reference = T&;

		iterator() : item_(nullptr), owner_(nullptr) {}

		T& operator*() const noexcept { return item_->value; }
		T* operator->() const noexcept { return &item_->value; }
		iterator& operator++() noexcept { item_ = item_->next; return *this; }
		iterator operator++(int) noexcept {
			iterator copy(*this);
			++(*this);
			return copy;
		}
		iterator& operator--() noexcept {
			item_ = item_ ? item_->previous : (owner_ ? owner_->tail_ : nullptr);
			return *this;
		}
		iterator operator--(int) noexcept {
			iterator copy(*this);
			--(*this);
			return copy;
		}
		bool operator==(const iterator& other) const noexcept { return item_ == other.item_; }
		bool operator!=(const iterator& other) const noexcept { return item_ != other.item_; }

	private:
		friend class list;
		friend class const_iterator;
		explicit iterator(node* item, list* owner) : item_(item), owner_(owner) {}
		node* item_;
		list* owner_;
	};

	class const_iterator {
	public:
		using iterator_category = bidirectional_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = const T*;
		using reference = const T&;

		const_iterator() : item_(nullptr), owner_(nullptr) {}
		const_iterator(iterator other) : item_(other.item_), owner_(other.owner_) {}

		const T& operator*() const noexcept { return item_->value; }
		const T* operator->() const noexcept { return &item_->value; }
		const_iterator& operator++() noexcept { item_ = item_->next; return *this; }
		const_iterator operator++(int) noexcept {
			const_iterator copy(*this);
			++(*this);
			return copy;
		}
		const_iterator& operator--() noexcept {
			item_ = item_ ? item_->previous : (owner_ ? owner_->tail_ : nullptr);
			return *this;
		}
		const_iterator operator--(int) noexcept {
			const_iterator copy(*this);
			--(*this);
			return copy;
		}
		bool operator==(const const_iterator& other) const noexcept { return item_ == other.item_; }
		bool operator!=(const const_iterator& other) const noexcept { return item_ != other.item_; }

	private:
		friend class list;
		explicit const_iterator(const node* item, const list* owner) : item_(item), owner_(owner) {}
		const node* item_;
		const list* owner_;
	};

	class reverse_iterator {
	public:
		using iterator_category = bidirectional_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = T*;
		using reference = T&;

		reverse_iterator() : base_() {}
		explicit reverse_iterator(iterator base) : base_(base) {}

		iterator base() const noexcept { return base_; }

		T& operator*() const noexcept {
			iterator current = base_;
			--current;
			return *current;
		}

		T* operator->() const noexcept {
			return &(**this);
		}

		reverse_iterator& operator++() noexcept {
			--base_;
			return *this;
		}

		reverse_iterator operator++(int) noexcept {
			reverse_iterator copy(*this);
			++(*this);
			return copy;
		}

		reverse_iterator& operator--() noexcept {
			++base_;
			return *this;
		}

		reverse_iterator operator--(int) noexcept {
			reverse_iterator copy(*this);
			--(*this);
			return copy;
		}

		bool operator==(const reverse_iterator& other) const noexcept { return base_ == other.base_; }
		bool operator!=(const reverse_iterator& other) const noexcept { return base_ != other.base_; }

	private:
		friend class const_reverse_iterator;
		iterator base_;
	};

	class const_reverse_iterator {
	public:
		using iterator_category = bidirectional_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = const T*;
		using reference = const T&;

		const_reverse_iterator() : base_() {}
		explicit const_reverse_iterator(const_iterator base) : base_(base) {}
		const_reverse_iterator(reverse_iterator other) : base_(other.base_) {}

		const_iterator base() const noexcept { return base_; }

		const T& operator*() const noexcept {
			const_iterator current = base_;
			--current;
			return *current;
		}

		const T* operator->() const noexcept {
			return &(**this);
		}

		const_reverse_iterator& operator++() noexcept {
			--base_;
			return *this;
		}

		const_reverse_iterator operator++(int) noexcept {
			const_reverse_iterator copy(*this);
			++(*this);
			return copy;
		}

		const_reverse_iterator& operator--() noexcept {
			++base_;
			return *this;
		}

		const_reverse_iterator operator--(int) noexcept {
			const_reverse_iterator copy(*this);
			--(*this);
			return copy;
		}

		bool operator==(const const_reverse_iterator& other) const noexcept { return base_ == other.base_; }
		bool operator!=(const const_reverse_iterator& other) const noexcept { return base_ != other.base_; }

	private:
		const_iterator base_;
	};

	list() : head_(nullptr), tail_(nullptr), size_(0) {}
	list(const list& other) : head_(nullptr), tail_(nullptr), size_(0) {
		for (const T& value : other) {
			push_back(value);
		}
	}

	list& operator=(const list& other) {
		if (this != &other) {
			clear();
			for (const T& value : other) {
				push_back(value);
			}
		}
		return *this;
	}

	list(list&& other) noexcept
		: head_(other.head_), tail_(other.tail_), size_(other.size_) {
		other.head_ = nullptr;
		other.tail_ = nullptr;
		other.size_ = 0;
	}

	list& operator=(list&& other) noexcept {
		if (this != &other) {
			clear();
			head_ = other.head_;
			tail_ = other.tail_;
			size_ = other.size_;
			other.head_ = nullptr;
			other.tail_ = nullptr;
			other.size_ = 0;
		}
		return *this;
	}

	~list() {
		clear();
	}

	bool empty() const noexcept { return size_ == 0; }
	size_t size() const noexcept { return size_; }
	iterator begin() noexcept { return iterator(head_, this); }
	iterator end() noexcept { return iterator(nullptr, this); }
	const_iterator begin() const noexcept { return const_iterator(head_, this); }
	const_iterator end() const noexcept { return const_iterator(nullptr, this); }
	const_iterator cbegin() const noexcept { return const_iterator(head_, this); }
	const_iterator cend() const noexcept { return const_iterator(nullptr, this); }
	reverse_iterator rbegin() noexcept { return reverse_iterator(end()); }
	const_reverse_iterator rbegin() const noexcept { return const_reverse_iterator(end()); }
	const_reverse_iterator crbegin() const noexcept { return const_reverse_iterator(cend()); }
	reverse_iterator rend() noexcept { return reverse_iterator(begin()); }
	const_reverse_iterator rend() const noexcept { return const_reverse_iterator(begin()); }
	const_reverse_iterator crend() const noexcept { return const_reverse_iterator(cbegin()); }
	T& front() noexcept { return head_->value; }
	T& back() noexcept { return tail_->value; }
	const T& front() const noexcept { return head_->value; }
	const T& back() const noexcept { return tail_->value; }

	template <typename... Args>
	T& emplace_back(Args&&... args) {
		node* item = new node(wm::forward<Args>(args)...);
		item->previous = tail_;
		if (tail_) {
			tail_->next = item;
		} else {
			head_ = item;
		}
		tail_ = item;
		++size_;
		return item->value;
	}

	template <typename... Args>
	T& emplace_front(Args&&... args) {
		node* item = new node(wm::forward<Args>(args)...);
		item->next = head_;
		if (head_) {
			head_->previous = item;
		} else {
			tail_ = item;
		}
		head_ = item;
		++size_;
		return item->value;
	}

	void push_back(const T& value) { emplace_back(value); }
	void push_back(T&& value) { emplace_back(wm::move(value)); }
	void push_front(const T& value) { emplace_front(value); }
	void push_front(T&& value) { emplace_front(wm::move(value)); }

	template <typename... Args>
	iterator emplace(const_iterator position, Args&&... args) {
		node* next = const_cast<node*>(position.item_);
		node* item = new node(wm::forward<Args>(args)...);
		item->next = next;
		item->previous = next ? next->previous : tail_;
		if (item->previous) {
			item->previous->next = item;
		} else {
			head_ = item;
		}
		if (next) {
			next->previous = item;
		} else {
			tail_ = item;
		}
		++size_;
		return iterator(item, this);
	}

	iterator insert(const_iterator position, const T& value) {
		return emplace(position, value);
	}

	iterator insert(const_iterator position, T&& value) {
		return emplace(position, wm::move(value));
	}

	iterator insert(const_iterator position, size_t count, const T& value) {
		iterator first_inserted = end();
		for (size_t i = 0; i < count; ++i) {
			iterator inserted = insert(position, value);
			if (i == 0) {
				first_inserted = inserted;
			}
		}
		return count ? first_inserted : iterator(const_cast<node*>(position.item_), this);
	}

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	iterator insert(const_iterator position, InputIt first, InputIt last) {
		iterator first_inserted = end();
		bool inserted_any = false;
		for (InputIt it = first; it != last; ++it) {
			iterator inserted = emplace(position, *it);
			if (!inserted_any) {
				first_inserted = inserted;
				inserted_any = true;
			}
		}
		return inserted_any ? first_inserted : iterator(const_cast<node*>(position.item_), this);
	}

	iterator insert(const_iterator position, std::initializer_list<T> values) {
		return insert(position, values.begin(), values.end());
	}

	void pop_back() { erase(iterator(tail_, this)); }
	void pop_front() { erase(iterator(head_, this)); }

	iterator erase(iterator position) {
		node* item = position.item_;
		if (!item) {
			return end();
		}
		node* next = item->next;
		if (item->previous) {
			item->previous->next = item->next;
		} else {
			head_ = item->next;
		}
		if (item->next) {
			item->next->previous = item->previous;
		} else {
			tail_ = item->previous;
		}
		delete item;
		--size_;
		return iterator(next, this);
	}

	iterator erase(const_iterator position) {
		return erase(iterator(const_cast<node*>(position.item_), this));
	}

	iterator erase(iterator first, iterator last) {
		while (first != last) {
			first = erase(first);
		}
		return last;
	}

	iterator erase(const_iterator first, const_iterator last) {
		return erase(iterator(const_cast<node*>(first.item_), this),
		             iterator(const_cast<node*>(last.item_), this));
	}

	void splice(const_iterator position, list& other) {
		if (&other == this || other.empty()) {
			return;
		}
		node* first = other.head_;
		node* last = other.tail_;
		const size_t count = other.size_;
		other.head_ = nullptr;
		other.tail_ = nullptr;
		other.size_ = 0;
		insert_nodes(position, first, last, count);
	}

	void splice(const_iterator position, list&& other) {
		splice(position, other);
	}

	void splice(const_iterator position, list& other, const_iterator item) {
		node* first = const_cast<node*>(item.item_);
		if (!first) {
			return;
		}
		node* after = first->next;
		if (&other == this && (position.item_ == first || position.item_ == after)) {
			return;
		}
		other.detach_nodes(first, after, 1);
		insert_nodes(position, first, first, 1);
	}

	void splice(const_iterator position, list&& other, const_iterator item) {
		splice(position, other, item);
	}

	void splice(const_iterator position, list& other, const_iterator first, const_iterator last) {
		node* range_first = const_cast<node*>(first.item_);
		node* range_after = const_cast<node*>(last.item_);
		if (range_first == range_after) {
			return;
		}

		size_t count = 0;
		node* range_last = nullptr;
		for (node* current = range_first; current != range_after; current = current->next) {
			if (&other == this && current == position.item_) {
				return;
			}
			range_last = current;
			++count;
		}
		if (!range_last) {
			return;
		}

		other.detach_nodes(range_first, range_after, count);
		insert_nodes(position, range_first, range_last, count);
	}

	void splice(const_iterator position, list&& other, const_iterator first, const_iterator last) {
		splice(position, other, first, last);
	}

	template <typename Predicate>
	size_t remove_if(Predicate predicate) {
		size_t removed = 0;
		for (iterator it = begin(); it != end();) {
			if (predicate(*it)) {
				it = erase(it);
				++removed;
			} else {
				++it;
			}
		}
		return removed;
	}

	template <typename Compare>
	void sort(Compare compare) {
		if (size_ < 2) {
			return;
		}

		node* sorted_head = nullptr;
		node* sorted_tail = nullptr;
		node* current = head_;
		while (current) {
			node* next = current->next;
			current->previous = nullptr;
			current->next = nullptr;

			if (!sorted_head) {
				sorted_head = current;
				sorted_tail = current;
			} else if (compare(current->value, sorted_head->value)) {
				current->next = sorted_head;
				sorted_head->previous = current;
				sorted_head = current;
			} else {
				node* position = sorted_head;
				while (position->next && !compare(current->value, position->next->value)) {
					position = position->next;
				}
				current->next = position->next;
				current->previous = position;
				if (position->next) {
					position->next->previous = current;
				} else {
					sorted_tail = current;
				}
				position->next = current;
			}

			current = next;
		}

		head_ = sorted_head;
		tail_ = sorted_tail;
	}

	void sort() {
		sort(default_less{});
	}

	void clear() noexcept {
		while (head_) {
			node* item = head_;
			head_ = head_->next;
			delete item;
		}
		tail_ = nullptr;
		size_ = 0;
	}

	void swap(list& other) noexcept {
		node* head = head_;
		head_ = other.head_;
		other.head_ = head;

		node* tail = tail_;
		tail_ = other.tail_;
		other.tail_ = tail;

		size_t size = size_;
		size_ = other.size_;
		other.size_ = size;
	}

private:
	struct node {
		template <typename... Args>
		explicit node(Args&&... args) : value(wm::forward<Args>(args)...), previous(nullptr), next(nullptr) {}

		T value;
		node* previous;
		node* next;
	};

	struct default_less {
		bool operator()(const T& left, const T& right) const {
			return left < right;
		}
	};

	void detach_nodes(node* first, node* after, size_t count) {
		node* before = first->previous;
		node* last = after ? after->previous : tail_;
		if (before) {
			before->next = after;
		} else {
			head_ = after;
		}
		if (after) {
			after->previous = before;
		} else {
			tail_ = before;
		}
		first->previous = nullptr;
		if (last) {
			last->next = nullptr;
		}
		size_ -= count;
	}

	void insert_nodes(const_iterator position, node* first, node* last, size_t count) {
		node* next = const_cast<node*>(position.item_);
		node* previous = next ? next->previous : tail_;
		first->previous = previous;
		last->next = next;
		if (previous) {
			previous->next = first;
		} else {
			head_ = first;
		}
		if (next) {
			next->previous = last;
		} else {
			tail_ = last;
		}
		size_ += count;
	}

	node* head_;
	node* tail_;
	size_t size_;
};

template <typename T>
bool operator==(const list<T>& left, const list<T>& right) {
	if (left.size() != right.size()) {
		return false;
	}
	auto leftIt = left.begin();
	auto rightIt = right.begin();
	while (leftIt != left.end()) {
		if (!(*leftIt == *rightIt)) {
			return false;
		}
		++leftIt;
		++rightIt;
	}
	return true;
}

template <typename T>
bool operator!=(const list<T>& left, const list<T>& right) {
	return !(left == right);
}

template <typename T>
class forward_list {
	struct node;

public:
	class iterator {
	public:
		using iterator_category = forward_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = T*;
		using reference = T&;

		iterator() : item_(nullptr) {}

		T& operator*() const noexcept { return item_->value; }
		T* operator->() const noexcept { return &item_->value; }
		iterator& operator++() noexcept {
			item_ = item_->next;
			return *this;
		}
		iterator operator++(int) noexcept {
			iterator copy(*this);
			++(*this);
			return copy;
		}
		bool operator==(const iterator& other) const noexcept { return item_ == other.item_; }
		bool operator!=(const iterator& other) const noexcept { return item_ != other.item_; }

	private:
		friend class forward_list;
		explicit iterator(node* item) : item_(item) {}
		node* item_;
	};

	class const_iterator {
	public:
		using iterator_category = forward_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = const T*;
		using reference = const T&;

		const_iterator() : item_(nullptr) {}
		const_iterator(iterator other) : item_(other.item_) {}

		const T& operator*() const noexcept { return item_->value; }
		const T* operator->() const noexcept { return &item_->value; }
		const_iterator& operator++() noexcept {
			item_ = item_->next;
			return *this;
		}
		const_iterator operator++(int) noexcept {
			const_iterator copy(*this);
			++(*this);
			return copy;
		}
		bool operator==(const const_iterator& other) const noexcept { return item_ == other.item_; }
		bool operator!=(const const_iterator& other) const noexcept { return item_ != other.item_; }

	private:
		friend class forward_list;
		explicit const_iterator(const node* item) : item_(item) {}
		const node* item_;
	};

	forward_list() : head_(nullptr) {}

	forward_list(const forward_list& other) : head_(nullptr) {
		node** tail = &head_;
		for (const T& value : other) {
			*tail = new node(value);
			tail = &((*tail)->next);
		}
	}

	forward_list& operator=(const forward_list& other) {
		if (this != &other) {
			forward_list copy(other);
			swap(copy);
		}
		return *this;
	}

	forward_list(forward_list&& other) noexcept : head_(other.head_) {
		other.head_ = nullptr;
	}

	forward_list& operator=(forward_list&& other) noexcept {
		if (this != &other) {
			clear();
			head_ = other.head_;
			other.head_ = nullptr;
		}
		return *this;
	}

	~forward_list() {
		clear();
	}

	bool empty() const noexcept { return head_ == nullptr; }
	iterator begin() noexcept { return iterator(head_); }
	iterator end() noexcept { return iterator(nullptr); }
	const_iterator begin() const noexcept { return const_iterator(head_); }
	const_iterator end() const noexcept { return const_iterator(nullptr); }
	const_iterator cbegin() const noexcept { return const_iterator(head_); }
	const_iterator cend() const noexcept { return const_iterator(nullptr); }
	T& front() noexcept { return head_->value; }
	const T& front() const noexcept { return head_->value; }

	template <typename... Args>
	T& emplace_front(Args&&... args) {
		node* item = new node(wm::forward<Args>(args)...);
		item->next = head_;
		head_ = item;
		return item->value;
	}

	void push_front(const T& value) { emplace_front(value); }
	void push_front(T&& value) { emplace_front(wm::move(value)); }

	template <typename Predicate>
	size_t remove_if(Predicate predicate) {
		size_t removed = 0;
		node** link = &head_;
		while (*link) {
			node* item = *link;
			if (predicate(item->value)) {
				*link = item->next;
				delete item;
				++removed;
			} else {
				link = &item->next;
			}
		}
		return removed;
	}

	template <typename Compare>
	void sort(Compare compare) {
		if (!head_ || !head_->next) {
			return;
		}
		bool swapped = true;
		while (swapped) {
			swapped = false;
			for (node* current = head_; current && current->next; current = current->next) {
				if (compare(current->next->value, current->value)) {
					T temporary = wm::move(current->value);
					current->value = wm::move(current->next->value);
					current->next->value = wm::move(temporary);
					swapped = true;
				}
			}
		}
	}

	void sort() {
		sort([](const T& left, const T& right) { return left < right; });
	}

	void clear() noexcept {
		while (head_) {
			node* item = head_;
			head_ = head_->next;
			delete item;
		}
	}

	void swap(forward_list& other) noexcept {
		node* temp = head_;
		head_ = other.head_;
		other.head_ = temp;
	}

private:
	struct node {
		template <typename... Args>
		explicit node(Args&&... args) : value(wm::forward<Args>(args)...), next(nullptr) {}

		T value;
		node* next;
	};

	node* head_;
};

class string {
public:
	using value_type = char;
	using size_type = size_t;
	using difference_type = ptrdiff_t;
	class iterator {
	public:
		using iterator_category = random_access_iterator_tag;
		using value_type = char;
		using difference_type = ptrdiff_t;
		using pointer = char*;
		using reference = char&;

		constexpr iterator() noexcept : current_(nullptr) {}
		constexpr iterator(char* current) noexcept : current_(current) {}

		constexpr operator char*() const noexcept { return current_; }
		constexpr operator const char*() const noexcept { return current_; }

		reference operator*() const noexcept { return *current_; }
		pointer operator->() const noexcept { return current_; }
		reference operator[](difference_type offset) const noexcept { return current_[offset]; }

		iterator& operator++() noexcept {
			++current_;
			return *this;
		}

		iterator operator++(int) noexcept {
			iterator copy(*this);
			++(*this);
			return copy;
		}

		iterator& operator--() noexcept {
			--current_;
			return *this;
		}

		iterator operator--(int) noexcept {
			iterator copy(*this);
			--(*this);
			return copy;
		}

		iterator& operator+=(difference_type offset) noexcept {
			current_ += offset;
			return *this;
		}

		iterator& operator-=(difference_type offset) noexcept {
			current_ -= offset;
			return *this;
		}

		iterator operator+(difference_type offset) const noexcept {
			iterator copy(*this);
			copy += offset;
			return copy;
		}

		iterator operator-(difference_type offset) const noexcept {
			iterator copy(*this);
			copy -= offset;
			return copy;
		}

		difference_type operator-(iterator other) const noexcept { return current_ - other.current_; }
		difference_type operator-(const char* other) const noexcept { return current_ - other; }

		bool operator==(iterator other) const noexcept { return current_ == other.current_; }
		bool operator!=(iterator other) const noexcept { return current_ != other.current_; }
		bool operator<(iterator other) const noexcept { return current_ < other.current_; }
		bool operator>(iterator other) const noexcept { return other < *this; }
		bool operator<=(iterator other) const noexcept { return !(other < *this); }
		bool operator>=(iterator other) const noexcept { return !(*this < other); }

		bool operator==(const char* other) const noexcept { return current_ == other; }
		bool operator!=(const char* other) const noexcept { return current_ != other; }
		bool operator<(const char* other) const noexcept { return current_ < other; }
		bool operator>(const char* other) const noexcept { return current_ > other; }
		bool operator<=(const char* other) const noexcept { return current_ <= other; }
		bool operator>=(const char* other) const noexcept { return current_ >= other; }

		char* base() const noexcept { return current_; }

		friend iterator operator+(difference_type offset, iterator it) noexcept {
			return it + offset;
		}

		friend difference_type operator-(const char* left, iterator right) noexcept {
			return left - right.current_;
		}

		friend bool operator==(const char* left, iterator right) noexcept { return left == right.current_; }
		friend bool operator!=(const char* left, iterator right) noexcept { return left != right.current_; }
		friend bool operator<(const char* left, iterator right) noexcept { return left < right.current_; }
		friend bool operator>(const char* left, iterator right) noexcept { return left > right.current_; }
		friend bool operator<=(const char* left, iterator right) noexcept { return left <= right.current_; }
		friend bool operator>=(const char* left, iterator right) noexcept { return left >= right.current_; }

	private:
		char* current_;
	};
	using const_iterator = const char*;
	class reverse_iterator {
	public:
		reverse_iterator() : base_(nullptr) {}
		explicit reverse_iterator(char* base) : base_(base) {}

		char& operator*() const noexcept {
			char* current = base_;
			--current;
			return *current;
		}

		char* operator->() const noexcept {
			char* current = base_;
			--current;
			return current;
		}

		reverse_iterator& operator++() noexcept {
			--base_;
			return *this;
		}

		bool operator==(const reverse_iterator& other) const noexcept { return base_ == other.base_; }
		bool operator!=(const reverse_iterator& other) const noexcept { return base_ != other.base_; }

	private:
		char* base_;
	};

	class const_reverse_iterator {
	public:
		const_reverse_iterator() : base_(nullptr) {}
		explicit const_reverse_iterator(const char* base) : base_(base) {}

		const char& operator*() const noexcept {
			const char* current = base_;
			--current;
			return *current;
		}

		const char* operator->() const noexcept {
			const char* current = base_;
			--current;
			return current;
		}

		const_reverse_iterator& operator++() noexcept {
			--base_;
			return *this;
		}

		bool operator==(const const_reverse_iterator& other) const noexcept { return base_ == other.base_; }
		bool operator!=(const const_reverse_iterator& other) const noexcept { return base_ != other.base_; }

	private:
		const char* base_;
	};

	static constexpr size_t npos = string_view::npos;

	string() noexcept : data_(nullptr), size_(0), capacity_(0) {}

	string(const char* text) : data_(nullptr), size_(0), capacity_(0) {
		assign(text, wm::string_length(text));
	}

	string(const char* text, size_t count) : data_(nullptr), size_(0), capacity_(0) {
		assign(text, text ? count : 0);
	}

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	string(InputIt first, InputIt last) : data_(nullptr), size_(0), capacity_(0) {
		append(first, last);
	}

	string(string_view text) : data_(nullptr), size_(0), capacity_(0) {
		assign(text.data(), text.size());
	}

	string(size_t count, char value) : data_(nullptr), size_(0), capacity_(0) {
		resize(count, value);
	}

	string(const string& other) : data_(nullptr), size_(0), capacity_(0) {
		assign(other.data(), other.size());
	}

	string(const string& other, size_t position, size_t count = npos) : data_(nullptr), size_(0), capacity_(0) {
		assign(other.substr(position, count));
	}

	string(string&& other) noexcept : data_(other.data_), size_(other.size_), capacity_(other.capacity_) {
		other.data_ = nullptr;
		other.size_ = 0;
		other.capacity_ = 0;
	}

	~string() {
		::operator delete(data_);
	}

	string& operator=(const string& other) {
		if (this != &other) {
			assign(other.data(), other.size());
		}
		return *this;
	}

	string& operator=(string&& other) noexcept {
		if (this != &other) {
			::operator delete(data_);
			data_ = other.data_;
			size_ = other.size_;
			capacity_ = other.capacity_;
			other.data_ = nullptr;
			other.size_ = 0;
			other.capacity_ = 0;
		}
		return *this;
	}

	string& operator=(const char* text) {
		assign(text, wm::string_length(text));
		return *this;
	}

	string& operator=(string_view text) {
		assign(text.data(), text.size());
		return *this;
	}

	const char* data() const noexcept { return data_ ? data_ : ""; }
	char* data() {
		ensure_storage();
		return data_;
	}

	const char* c_str() const noexcept { return data(); }
	string str() const { return *this; }
	size_t size() const noexcept { return size_; }
	size_t length() const noexcept { return size_; }
	size_t capacity() const noexcept { return capacity_; }
	size_t max_size() const noexcept { return static_cast<size_t>(-1) / 2; }
	bool empty() const noexcept { return size_ == 0; }

	const_iterator begin() const noexcept { return data(); }
	const_iterator end() const noexcept { return data() + size_; }
	const_iterator cbegin() const noexcept { return begin(); }
	const_iterator cend() const noexcept { return end(); }
	iterator begin() { return data(); }
	iterator end() { return data() + size_; }
	reverse_iterator rbegin() noexcept { return reverse_iterator(data() + size_); }
	const_reverse_iterator rbegin() const noexcept { return const_reverse_iterator(data() + size_); }
	reverse_iterator rend() noexcept { return reverse_iterator(data()); }
	const_reverse_iterator rend() const noexcept { return const_reverse_iterator(data()); }

	char& operator[](size_t index) noexcept { return data_[index]; }
	const char& operator[](size_t index) const noexcept { return data()[index]; }
	char& at(size_t index) {
		if (index >= size_) {
			__builtin_trap();
		}
		return data_[index];
	}
	const char& at(size_t index) const {
		if (index >= size_) {
			__builtin_trap();
		}
		return data()[index];
	}
	char& front() noexcept { return data_[0]; }
	const char& front() const noexcept { return data()[0]; }
	char& back() noexcept { return data_[size_ - 1]; }
	const char& back() const noexcept { return data()[size_ - 1]; }

	operator string_view() const noexcept {
		return string_view(data(), size_);
	}

	void clear() noexcept {
		size_ = 0;
		if (data_) {
			data_[0] = '\0';
		}
	}

	void reserve(size_t new_capacity) {
		if (new_capacity <= capacity_) {
			return;
		}
		char* new_data = allocate(new_capacity);
		for (size_t i = 0; i < size_; ++i) {
			new_data[i] = data_[i];
		}
		new_data[size_] = '\0';
		::operator delete(data_);
		data_ = new_data;
		capacity_ = new_capacity;
	}

	void resize(size_t count) {
		resize(count, '\0');
	}

	void resize(size_t count, char value) {
		if (count > capacity_) {
			reserve(growth_for(count));
		}
		ensure_storage();
		for (size_t i = size_; i < count; ++i) {
			data_[i] = value;
		}
		size_ = count;
		data_[size_] = '\0';
	}

	void assign(const char* text) {
		assign(text, wm::string_length(text));
	}

	void assign(string_view text) {
		assign(text.data(), text.size());
	}

	void assign(size_t count, char value) {
		clear();
		resize(count, value);
	}

	void assign(const char* text, size_t count) {
		if (!text) {
			count = 0;
		}
		size_t offset = 0;
		if (pointer_offset(text, &offset)) {
			if (count > size_ - offset) {
				count = size_ - offset;
			}
			string copy(data_ + offset, count);
			swap(copy);
			return;
		}
		clear();
		if (count == 0) {
			ensure_storage();
			return;
		}
		reserve(count);
		for (size_t i = 0; i < count; ++i) {
			data_[i] = text[i];
		}
		size_ = count;
		data_[size_] = '\0';
	}

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	void assign(InputIt first, InputIt last) {
		clear();
		append(first, last);
	}

	string& append(const char* text) {
		return append(text, wm::string_length(text));
	}

	string& append(const char* text, size_t count) {
		if (!text || count == 0) {
			return *this;
		}
		size_t offset = 0;
		if (pointer_offset(text, &offset)) {
			if (count > size_ - offset) {
				count = size_ - offset;
			}
			const size_t old_size = size_;
			reserve(size_ + count);
			for (size_t i = 0; i < count; ++i) {
				data_[old_size + i] = data_[offset + i];
			}
			size_ += count;
			data_[size_] = '\0';
			return *this;
		}
		reserve(size_ + count);
		for (size_t i = 0; i < count; ++i) {
			data_[size_ + i] = text[i];
		}
		size_ += count;
		data_[size_] = '\0';
		return *this;
	}

	string& append(size_t count, char value) {
		if (count == 0) {
			return *this;
		}
		reserve(size_ + count);
		for (size_t i = 0; i < count; ++i) {
			data_[size_ + i] = value;
		}
		size_ += count;
		data_[size_] = '\0';
		return *this;
	}

	string& append(string_view text) {
		return append(text.data(), text.size());
	}

	string& append(std::initializer_list<char> values) {
		return append(values.begin(), values.end());
	}

	template <typename InputIt>
	string& append(InputIt first, InputIt last) {
		size_t count = 0;
		for (InputIt it = first; it != last; ++it) {
			++count;
		}
		reserve(size_ + count);
		for (InputIt it = first; it != last; ++it) {
			data_[size_++] = *it;
		}
		ensure_storage();
		data_[size_] = '\0';
		return *this;
	}

	string& append(const string& text) {
		return append(text.data(), text.size());
	}

	string& append(const string& text, size_t position, size_t count = npos) {
		return append(text.substr(position, count));
	}

	string& operator+=(const string& other) {
		return append(other.data(), other.size());
	}

	string& operator+=(string_view text) {
		return append(text);
	}

	string& operator+=(const char* text) {
		return append(text);
	}

	string& operator+=(char value) {
		push_back(value);
		return *this;
	}

	void push_back(char value) {
		if (size_ == capacity_) {
			reserve(capacity_ == 0 ? 16 : capacity_ * 2);
		}
		ensure_storage();
		data_[size_++] = value;
		data_[size_] = '\0';
	}

	void pop_back() noexcept {
		if (size_ == 0) {
			return;
		}
		--size_;
		data_[size_] = '\0';
	}

	string& insert(size_t position, string_view text) {
		if (position > size_) {
			position = size_;
		}
		if (text.empty()) {
			return *this;
		}
		size_t offset = 0;
		if (pointer_offset(text.data(), &offset)) {
			string copy(text);
			return insert(position, string_view(copy));
		}
		reserve(size_ + text.size());
		for (size_t i = size_; i > position; --i) {
			data_[i + text.size() - 1] = data_[i - 1];
		}
		for (size_t i = 0; i < text.size(); ++i) {
			data_[position + i] = text[i];
		}
		size_ += text.size();
		data_[size_] = '\0';
		return *this;
	}

	string& insert(size_t position, const char* text) {
		return insert(position, string_view(text));
	}

	string& insert(size_t position, const char* text, size_t count) {
		return insert(position, string_view(text, text ? count : 0));
	}

	iterator insert(const_iterator position, char value) {
		const char* base = data();
		size_t index = 0;
		if (position > base) {
			const ptrdiff_t offset = position - base;
			index = offset < 0 ? 0 : static_cast<size_t>(offset);
			if (index > size_) {
				index = size_;
			}
		}
		insert(index, 1, value);
		return begin() + index;
	}

	iterator insert(const_iterator position, size_t count, char value) {
		const char* base = data();
		size_t index = 0;
		if (position > base) {
			const ptrdiff_t offset = position - base;
			index = offset < 0 ? 0 : static_cast<size_t>(offset);
			if (index > size_) {
				index = size_;
			}
		}
		insert(index, count, value);
		return begin() + index;
	}

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	iterator insert(const_iterator position, InputIt first, InputIt last) {
		const char* base = data();
		size_t index = 0;
		if (position > base) {
			const ptrdiff_t offset = position - base;
			index = offset < 0 ? 0 : static_cast<size_t>(offset);
			if (index > size_) {
				index = size_;
			}
		}
		string copy;
		copy.append(first, last);
		insert(index, string_view(copy));
		return begin() + index;
	}

	string& insert(size_t position, size_t count, char value) {
		if (position > size_) {
			position = size_;
		}
		if (count == 0) {
			return *this;
		}
		reserve(size_ + count);
		for (size_t i = size_; i > position; --i) {
			data_[i + count - 1] = data_[i - 1];
		}
		for (size_t i = 0; i < count; ++i) {
			data_[position + i] = value;
		}
		size_ += count;
		data_[size_] = '\0';
		return *this;
	}

	string& erase(size_t position = 0, size_t count = npos) {
		if (position > size_) {
			position = size_;
		}
		const size_t remaining = size_ - position;
		if (count == npos || count > remaining) {
			count = remaining;
		}
		for (size_t i = position; i + count < size_; ++i) {
			data_[i] = data_[i + count];
		}
		size_ -= count;
		if (data_) {
			data_[size_] = '\0';
		}
		return *this;
	}

	iterator erase(const_iterator position) {
		const size_t index = static_cast<size_t>(position - begin());
		erase(index, 1);
		return begin() + index;
	}

	iterator erase(const_iterator first, const_iterator last) {
		const size_t index = static_cast<size_t>(first - begin());
		erase(index, static_cast<size_t>(last - first));
		return begin() + index;
	}

	string& replace(size_t position, size_t count, string_view replacement) {
		erase(position, count);
		insert(position, replacement);
		return *this;
	}

	string& replace(const_iterator first, const_iterator last, string_view replacement) {
		const size_t index = static_cast<size_t>(first - begin());
		erase(index, static_cast<size_t>(last - first));
		insert(index, replacement);
		return *this;
	}

	string& replace(size_t position, size_t count, const char* replacement, size_t replacement_count) {
		return replace(position, count, string_view(replacement, replacement_count));
	}

	string& replace(size_t position, size_t count, const char* replacement) {
		return replace(position, count, string_view(replacement));
	}

	string& replace(const_iterator first, const_iterator last, const char* replacement) {
		return replace(first, last, string_view(replacement));
	}

	string& replace(const_iterator first, const_iterator last, const char* replacement, size_t replacement_count) {
		return replace(first, last, string_view(replacement, replacement_count));
	}

	string substr(size_t position, size_t count = npos) const {
		if (position > size_) {
			position = size_;
		}
		const size_t remaining = size_ - position;
		if (count == npos || count > remaining) {
			count = remaining;
		}
		return string(data() + position, count);
	}

	size_t find(char needle, size_t position = 0) const noexcept {
		return string_view(*this).find(needle, position);
	}

	size_t find(string_view needle, size_t position = 0) const noexcept {
		return string_view(*this).find(needle, position);
	}

	size_t rfind(char needle, size_t position = npos) const noexcept {
		if (size_ == 0) {
			return npos;
		}
		size_t cursor = position == npos || position >= size_ ? size_ - 1 : position;
		for (;;) {
			if (data()[cursor] == needle) {
				return cursor;
			}
			if (cursor == 0) {
				break;
			}
			--cursor;
		}
		return npos;
	}

	size_t rfind(string_view needle, size_t position = npos) const noexcept {
		if (needle.empty()) {
			return position < size_ ? position : size_;
		}
		if (needle.size() > size_) {
			return npos;
		}
		size_t cursor = size_ - needle.size();
		if (position != npos && position < cursor) {
			cursor = position;
		}
		for (;;) {
			bool match = true;
			for (size_t i = 0; i < needle.size(); ++i) {
				if (data()[cursor + i] != needle[i]) {
					match = false;
					break;
				}
			}
			if (match) {
				return cursor;
			}
			if (cursor == 0) {
				break;
			}
			--cursor;
		}
		return npos;
	}

	size_t find_first_of(string_view needles, size_t position = 0) const noexcept {
		for (size_t i = position; i < size_; ++i) {
			for (size_t j = 0; j < needles.size(); ++j) {
				if (data()[i] == needles[j]) {
					return i;
				}
			}
		}
		return npos;
	}

	size_t find_first_of(char needle, size_t position = 0) const noexcept {
		return find(needle, position);
	}

	size_t find_first_not_of(string_view needles, size_t position = 0) const noexcept {
		for (size_t i = position; i < size_; ++i) {
			bool found = false;
			for (size_t j = 0; j < needles.size(); ++j) {
				if (data()[i] == needles[j]) {
					found = true;
					break;
				}
			}
			if (!found) {
				return i;
			}
		}
		return npos;
	}

	size_t find_first_not_of(char needle, size_t position = 0) const noexcept {
		for (size_t i = position; i < size_; ++i) {
			if (data()[i] != needle) {
				return i;
			}
		}
		return npos;
	}

	size_t find_last_of(string_view needles, size_t position = npos) const noexcept {
		if (size_ == 0 || needles.empty()) {
			return npos;
		}
		size_t cursor = position == npos || position >= size_ ? size_ - 1 : position;
		for (;;) {
			for (size_t j = 0; j < needles.size(); ++j) {
				if (data()[cursor] == needles[j]) {
					return cursor;
				}
			}
			if (cursor == 0) {
				break;
			}
			--cursor;
		}
		return npos;
	}

	size_t find_last_of(char needle, size_t position = npos) const noexcept {
		return rfind(needle, position);
	}

	size_t find_last_not_of(string_view needles, size_t position = npos) const noexcept {
		if (size_ == 0) {
			return npos;
		}
		size_t cursor = position == npos || position >= size_ ? size_ - 1 : position;
		for (;;) {
			bool found = false;
			for (size_t j = 0; j < needles.size(); ++j) {
				if (data()[cursor] == needles[j]) {
					found = true;
					break;
				}
			}
			if (!found) {
				return cursor;
			}
			if (cursor == 0) {
				break;
			}
			--cursor;
		}
		return npos;
	}

	size_t find_last_not_of(char needle, size_t position = npos) const noexcept {
		if (size_ == 0) {
			return npos;
		}
		size_t cursor = position == npos || position >= size_ ? size_ - 1 : position;
		for (;;) {
			if (data()[cursor] != needle) {
				return cursor;
			}
			if (cursor == 0) {
				break;
			}
			--cursor;
		}
		return npos;
	}

	bool starts_with(string_view prefix) const noexcept {
		return size_ >= prefix.size() && string_view(data(), prefix.size()) == prefix;
	}

	bool ends_with(string_view suffix) const noexcept {
		return size_ >= suffix.size() && string_view(data() + size_ - suffix.size(), suffix.size()) == suffix;
	}

	int compare(string_view other) const noexcept {
		const size_t shared = size_ < other.size() ? size_ : other.size();
		for (size_t i = 0; i < shared; ++i) {
			const unsigned char left = (unsigned char)data()[i];
			const unsigned char right = (unsigned char)other[i];
			if (left != right) {
				return (int)left - (int)right;
			}
		}
		if (size_ == other.size()) {
			return 0;
		}
		return size_ < other.size() ? -1 : 1;
	}

	int compare(size_t position, size_t count, string_view other) const {
		return substr(position, count).compare(other);
	}

	int compare(size_t position, size_t count, string_view other, size_t other_position, size_t other_count = npos) const {
		return substr(position, count).compare(other.substr(other_position, other_count));
	}

	void swap(string& other) noexcept {
		char* data = data_;
		data_ = other.data_;
		other.data_ = data;

		size_t size = size_;
		size_ = other.size_;
		other.size_ = size;

		size_t capacity = capacity_;
		capacity_ = other.capacity_;
		other.capacity_ = capacity;
	}

private:
	static char* allocate(size_t capacity) {
		char* buffer = static_cast<char*>(::operator new(capacity + 1));
		buffer[0] = '\0';
		return buffer;
	}

	static size_t growth_for(size_t required) noexcept {
		size_t capacity = 16;
		while (capacity < required) {
			capacity *= 2;
		}
		return capacity;
	}

	void ensure_storage() {
		if (!data_) {
			data_ = allocate(0);
			capacity_ = 0;
		}
	}

	bool pointer_offset(const char* pointer, size_t* out_offset) const noexcept {
		if (!data_ || !pointer) {
			return false;
		}
		for (size_t i = 0; i <= size_; ++i) {
			if (data_ + i == pointer) {
				*out_offset = i;
				return true;
			}
		}
		return false;
	}

	char* data_;
	size_t size_;
	size_t capacity_;
};

inline bool operator==(const string& left, const string& right) noexcept {
	return string_view(left) == string_view(right);
}

inline bool operator!=(const string& left, const string& right) noexcept {
	return !(left == right);
}

inline bool operator<(const string& left, const string& right) noexcept {
	return left.compare(right) < 0;
}

inline bool operator>(const string& left, const string& right) noexcept {
	return right < left;
}

inline bool operator<=(const string& left, const string& right) noexcept {
	return !(right < left);
}

inline bool operator>=(const string& left, const string& right) noexcept {
	return !(left < right);
}

template <typename LHS, typename RHS,
	typename CleanLHS = remove_cv_t<remove_reference_t<LHS>>,
	typename CleanRHS = remove_cv_t<remove_reference_t<RHS>>,
	typename = enable_if_t<is_same<CleanLHS, string>::value && is_same<CleanRHS, string>::value>>
inline string operator+(LHS&& left, RHS&& right) {
	string result(wm::forward<LHS>(left));
	result += right;
	return result;
}

template <typename LHS,
	typename CleanLHS = remove_cv_t<remove_reference_t<LHS>>,
	typename = enable_if_t<is_same<CleanLHS, string>::value>>
inline string operator+(LHS&& left, string_view right) {
	string result(wm::forward<LHS>(left));
	result += right;
	return result;
}

template <typename LHS,
	typename CleanLHS = remove_cv_t<remove_reference_t<LHS>>,
	typename = enable_if_t<is_same<CleanLHS, string>::value>>
inline string operator+(LHS&& left, char right) {
	string result(wm::forward<LHS>(left));
	result.push_back(right);
	return result;
}

inline string operator+(char left, const string& right) {
	string result(1, left);
	result += right;
	return result;
}

template <typename LHS,
	typename CleanLHS = remove_cv_t<remove_reference_t<LHS>>,
	typename = enable_if_t<is_same<CleanLHS, string>::value>>
inline string operator+(LHS&& left, const char* right) {
	string result(wm::forward<LHS>(left));
	result += right;
	return result;
}

template <typename RHS,
	typename CleanRHS = remove_cv_t<remove_reference_t<RHS>>,
	typename = enable_if_t<is_same<CleanRHS, string>::value>>
inline string operator+(const char* left, const RHS& right) {
	string result(left);
	result += right;
	return result;
}

template <typename LHS, typename RHS,
	typename CleanLHS = remove_cv_t<remove_reference_t<LHS>>,
	typename CleanRHS = remove_cv_t<remove_reference_t<RHS>>,
	typename = enable_if_t<is_same<CleanLHS, string>::value &&
	                       !is_base_of<string, CleanRHS>::value &&
	                       !is_same<CleanRHS, llvm::StringRef>::value>>
auto operator+(LHS&& left, const RHS& right) -> decltype(right.data(), right.size(), string()) {
	string result(wm::forward<LHS>(left));
	result.append(right.data(), right.size());
	return result;
}

class exception {
public:
	virtual ~exception() {}
	virtual const char* what() const noexcept { return "wm::exception"; }
};

class runtime_error : public exception {
public:
	explicit runtime_error(string_view message) : message_(message) {}
	explicit runtime_error(const string& message) : message_(message) {}
	explicit runtime_error(const char* message) : message_(message) {}

	const char* what() const noexcept override { return message_.c_str(); }

private:
	string message_;
};

class logic_error : public exception {
public:
	explicit logic_error(string_view message) : message_(message) {}
	explicit logic_error(const string& message) : message_(message) {}
	explicit logic_error(const char* message) : message_(message) {}

	const char* what() const noexcept override { return message_.c_str(); }

private:
	string message_;
};

class invalid_argument : public logic_error {
public:
	using logic_error::logic_error;
};

class out_of_range : public logic_error {
public:
	using logic_error::logic_error;
};

using exception_ptr = exception*;

inline exception_ptr current_exception() noexcept {
	return nullptr;
}

inline void rethrow_exception(exception_ptr) {}

inline int uncaught_exceptions() noexcept {
	return 0;
}

template <typename T>
struct equal_to {
	constexpr bool operator()(const T& left, const T& right) const {
		return left == right;
	}
};

template <typename T>
struct hash {
	size_t operator()(const T& value) const noexcept {
		return detail::hash_bytes(reinterpret_cast<const unsigned char*>(&value), sizeof(T));
	}
};

template <>
struct hash<string_view> {
	size_t operator()(string_view value) const noexcept {
		return detail::hash_bytes(reinterpret_cast<const unsigned char*>(value.data()), value.size());
	}
};

template <>
struct hash<string> {
	size_t operator()(const string& value) const noexcept {
		return hash<string_view>{}(string_view(value));
	}
};

template <typename T>
struct hash<T*> {
	size_t operator()(T* value) const noexcept {
		return detail::hash_bytes(reinterpret_cast<const unsigned char*>(&value), sizeof(value));
	}
};

template <typename T>
struct hash<const T*> {
	size_t operator()(const T* value) const noexcept {
		return detail::hash_bytes(reinterpret_cast<const unsigned char*>(&value), sizeof(value));
	}
};

enum memory_order {
	memory_order_relaxed = __ATOMIC_RELAXED,
	memory_order_consume = __ATOMIC_CONSUME,
	memory_order_acquire = __ATOMIC_ACQUIRE,
	memory_order_release = __ATOMIC_RELEASE,
	memory_order_acq_rel = __ATOMIC_ACQ_REL,
	memory_order_seq_cst = __ATOMIC_SEQ_CST
};

template <typename T>
class atomic {
public:
	atomic() noexcept = default;
	constexpr atomic(T value) noexcept : value_(value) {}

	atomic(const atomic&) = delete;
	atomic& operator=(const atomic&) = delete;

	void store(T value, memory_order order = memory_order_seq_cst) noexcept {
		__atomic_store(&value_, &value, (int)order);
	}

	T load(memory_order order = memory_order_seq_cst) const noexcept {
		T value;
		__atomic_load(&value_, &value, (int)order);
		return value;
	}

	T exchange(T value, memory_order order = memory_order_seq_cst) noexcept {
		T previous;
		__atomic_exchange(&value_, &value, &previous, (int)order);
		return previous;
	}

	bool compare_exchange_strong(
		T& expected,
		T desired,
		memory_order success = memory_order_seq_cst,
		memory_order failure = memory_order_seq_cst) noexcept {
		return __atomic_compare_exchange(&value_, &expected, &desired, false, (int)success, (int)failure);
	}

	bool compare_exchange_weak(
		T& expected,
		T desired,
		memory_order success = memory_order_seq_cst,
		memory_order failure = memory_order_seq_cst) noexcept {
		return __atomic_compare_exchange(&value_, &expected, &desired, true, (int)success, (int)failure);
	}

	T fetch_add(T value, memory_order order = memory_order_seq_cst) noexcept {
		return __atomic_fetch_add(&value_, value, (int)order);
	}

	T fetch_sub(T value, memory_order order = memory_order_seq_cst) noexcept {
		return __atomic_fetch_sub(&value_, value, (int)order);
	}

	operator T() const noexcept {
		return load();
	}

	T operator=(T value) noexcept {
		store(value);
		return value;
	}

	T operator++() noexcept {
		return fetch_add((T)1) + (T)1;
	}

	T operator++(int) noexcept {
		return fetch_add((T)1);
	}

	T operator--() noexcept {
		return fetch_sub((T)1) - (T)1;
	}

	T operator--(int) noexcept {
		return fetch_sub((T)1);
	}

private:
	mutable T value_{};
};

class atomic_flag {
public:
	constexpr atomic_flag() noexcept : value_(false) {}

	bool test_and_set(memory_order order = memory_order_seq_cst) noexcept {
		return __atomic_test_and_set(&value_, (int)order);
	}

	void clear(memory_order order = memory_order_seq_cst) noexcept {
		__atomic_clear(&value_, (int)order);
	}

private:
	bool value_;
};

class mutex {
public:
	mutex() noexcept = default;

	mutex(const mutex&) = delete;
	mutex& operator=(const mutex&) = delete;

	void lock() noexcept {
		while (flag_.test_and_set(memory_order_acquire)) {
		}
	}

	bool try_lock() noexcept {
		return !flag_.test_and_set(memory_order_acquire);
	}

	void unlock() noexcept {
		flag_.clear(memory_order_release);
	}

private:
	atomic_flag flag_;
};

struct once_flag {
	constexpr once_flag() noexcept : called(false) {}

	once_flag(const once_flag&) = delete;
	once_flag& operator=(const once_flag&) = delete;
	once_flag(once_flag&& other) noexcept : called(other.called) {}
	once_flag& operator=(once_flag&& other) noexcept {
		called = other.called;
		return *this;
	}

	bool called;
};

template <typename Callable, typename... Args>
void call_once(once_flag& flag, Callable&& callable, Args&&... args) {
	if (!flag.called) {
		flag.called = true;
		wm::forward<Callable>(callable)(wm::forward<Args>(args)...);
	}
}

template <typename Mutex>
class lock_guard {
public:
	explicit lock_guard(Mutex& mutex) : mutex_(mutex) {
		mutex_.lock();
	}

	lock_guard(const lock_guard&) = delete;
	lock_guard& operator=(const lock_guard&) = delete;

	~lock_guard() {
		mutex_.unlock();
	}

private:
	Mutex& mutex_;
};

template <typename... Mutexes>
class scoped_lock;

template <>
class scoped_lock<> {
public:
	scoped_lock() noexcept = default;
	scoped_lock(const scoped_lock&) = delete;
	scoped_lock& operator=(const scoped_lock&) = delete;
};

template <typename Mutex>
class scoped_lock<Mutex> {
public:
	explicit scoped_lock(Mutex& mutex) : mutex_(mutex) {
		mutex_.lock();
	}

	scoped_lock(const scoped_lock&) = delete;
	scoped_lock& operator=(const scoped_lock&) = delete;

	~scoped_lock() {
		mutex_.unlock();
	}

private:
	Mutex& mutex_;
};

template <typename Mutex>
class unique_lock {
public:
	unique_lock() noexcept : mutex_(nullptr), owns_(false) {}

	explicit unique_lock(Mutex& mutex) : mutex_(&mutex), owns_(true) {
		mutex_->lock();
	}

	unique_lock(unique_lock&& other) noexcept : mutex_(other.mutex_), owns_(other.owns_) {
		other.mutex_ = nullptr;
		other.owns_ = false;
	}

	unique_lock(const unique_lock&) = delete;
	unique_lock& operator=(const unique_lock&) = delete;

	~unique_lock() {
		if (owns_) {
			mutex_->unlock();
		}
	}

	unique_lock& operator=(unique_lock&& other) noexcept {
		if (this != &other) {
			if (owns_) {
				mutex_->unlock();
			}
			mutex_ = other.mutex_;
			owns_ = other.owns_;
			other.mutex_ = nullptr;
			other.owns_ = false;
		}
		return *this;
	}

	void lock() {
		if (!mutex_ || owns_) {
			__builtin_trap();
		}
		mutex_->lock();
		owns_ = true;
	}

	bool try_lock() {
		if (!mutex_ || owns_) {
			__builtin_trap();
		}
		owns_ = mutex_->try_lock();
		return owns_;
	}

	void unlock() {
		if (!mutex_ || !owns_) {
			__builtin_trap();
		}
		mutex_->unlock();
		owns_ = false;
	}

	bool owns_lock() const noexcept { return owns_; }
	explicit operator bool() const noexcept { return owns_; }
	Mutex* mutex() const noexcept { return mutex_; }

private:
	Mutex* mutex_;
	bool owns_;
};

namespace chrono {

template <long long Num, long long Den = 1>
struct ratio {
	static constexpr long long num = Num;
	static constexpr long long den = Den;
};

using micro = ratio<1, 1000000>;
using milli = ratio<1, 1000>;

template <typename Rep, typename Period = ratio<1>>
class duration {
public:
	using rep = Rep;
	using period = Period;

	constexpr duration() : count_() {}
	constexpr explicit duration(const Rep& count) : count_(count) {}

	template <typename OtherRep, typename OtherPeriod>
	constexpr duration(const duration<OtherRep, OtherPeriod>& other)
		: count_((Rep)(((long double)other.count() * (long double)OtherPeriod::num * (long double)Period::den) /
			((long double)OtherPeriod::den * (long double)Period::num))) {}

	constexpr Rep count() const noexcept {
		return count_;
	}

	static constexpr duration zero() noexcept {
		return duration(Rep());
	}

	duration& operator+=(duration other) noexcept {
		count_ += other.count_;
		return *this;
	}

	duration& operator-=(duration other) noexcept {
		count_ -= other.count_;
		return *this;
	}

private:
	Rep count_;
};

template <typename Rep, typename Period>
constexpr duration<Rep, Period> operator+(duration<Rep, Period> left, duration<Rep, Period> right) noexcept {
	return duration<Rep, Period>(left.count() + right.count());
}

template <typename Rep, typename Period>
constexpr duration<Rep, Period> operator-(duration<Rep, Period> left, duration<Rep, Period> right) noexcept {
	return duration<Rep, Period>(left.count() - right.count());
}

template <typename Rep, typename Period>
constexpr bool operator==(duration<Rep, Period> left, duration<Rep, Period> right) noexcept {
	return left.count() == right.count();
}

template <typename Rep, typename Period>
constexpr bool operator!=(duration<Rep, Period> left, duration<Rep, Period> right) noexcept {
	return !(left == right);
}

template <typename Rep, typename Period>
constexpr bool operator<(duration<Rep, Period> left, duration<Rep, Period> right) noexcept {
	return left.count() < right.count();
}

using nanoseconds = duration<long long, ratio<1, 1000000000>>;
using microseconds = duration<long long, micro>;
using milliseconds = duration<long long, milli>;
using seconds = duration<long long, ratio<1>>;

template <typename ToDuration, typename Rep, typename Period>
constexpr ToDuration duration_cast(const duration<Rep, Period>& source) {
	const long double converted =
		((long double)source.count() * (long double)Period::num * (long double)ToDuration::period::den) /
		((long double)Period::den * (long double)ToDuration::period::num);
	return ToDuration((typename ToDuration::rep)converted);
}

template <typename Rep1, typename Period1, typename Rep2, typename Period2>
constexpr nanoseconds operator+(duration<Rep1, Period1> left, duration<Rep2, Period2> right) noexcept {
	return nanoseconds(duration_cast<nanoseconds>(left).count() + duration_cast<nanoseconds>(right).count());
}

template <typename Clock, typename Duration = typename Clock::duration>
class time_point {
public:
	using clock = Clock;
	using duration = Duration;
	using rep = typename duration::rep;
	using period = typename duration::period;

	constexpr time_point() : duration_() {}
	constexpr explicit time_point(duration value) : duration_(value) {}

	template <typename OtherDuration>
	constexpr time_point(const time_point<Clock, OtherDuration>& other)
		: duration_(duration_cast<duration>(other.time_since_epoch())) {}

	constexpr duration time_since_epoch() const noexcept {
		return duration_;
	}

private:
	duration duration_;
};

template <typename Clock, typename Duration>
constexpr Duration operator-(time_point<Clock, Duration> left, time_point<Clock, Duration> right) noexcept {
	return left.time_since_epoch() - right.time_since_epoch();
}

template <typename Clock, typename Duration>
constexpr time_point<Clock, Duration> operator+(time_point<Clock, Duration> point, Duration offset) noexcept {
	return time_point<Clock, Duration>(point.time_since_epoch() + offset);
}

namespace detail {
inline long long next_clock_tick() noexcept {
	static long long tick = 0;
	return tick++;
}
}

struct steady_clock {
	using rep = long long;
	using period = milli;
	using duration = milliseconds;
	using time_point = chrono::time_point<steady_clock, duration>;
	static constexpr bool is_steady = true;

	static time_point now() noexcept {
		return time_point(duration(detail::next_clock_tick()));
	}
};

struct system_clock {
	using rep = long long;
	using period = milli;
	using duration = milliseconds;
	using time_point = chrono::time_point<system_clock, duration>;
	static constexpr bool is_steady = false;

	static time_point now() noexcept {
		return time_point(duration(detail::next_clock_tick()));
	}

	static long to_time_t(const time_point& value) noexcept {
		return (long)duration_cast<seconds>(value.time_since_epoch()).count();
	}

	static time_point from_time_t(long value) noexcept {
		return time_point(duration_cast<duration>(seconds(value)));
	}
};

using high_resolution_clock = steady_clock;

} // namespace chrono

class thread {
public:
	thread() noexcept : joinable_(false) {}

	template <typename Fn, typename... Args>
	explicit thread(Fn&& fn, Args&&... args) noexcept : joinable_(true) {
		wm::forward<Fn>(fn)(wm::forward<Args>(args)...);
	}

	thread(const thread&) = delete;
	thread& operator=(const thread&) = delete;

	thread(thread&& other) noexcept : joinable_(other.joinable_) {
		other.joinable_ = false;
	}

	thread& operator=(thread&& other) noexcept {
		if (this != &other) {
			joinable_ = other.joinable_;
			other.joinable_ = false;
		}
		return *this;
	}

	~thread() = default;

	bool joinable() const noexcept {
		return joinable_;
	}

	void join() noexcept {
		joinable_ = false;
	}

	void detach() noexcept {
		joinable_ = false;
	}

	static unsigned hardware_concurrency() noexcept {
#if WM_WINTER_STD_HAS_PROGRAM_THREADS
		const unsigned threads = (unsigned)wm_program_hardware_threads();
		return threads != 0u ? threads : 1u;
#else
		return 1u;
#endif
	}

private:
	bool joinable_;
};

namespace this_thread {
template <typename Duration>
void sleep_for(const Duration&) noexcept {}
}

enum class cv_status {
	no_timeout,
	timeout
};

class condition_variable {
public:
	condition_variable() = default;
	condition_variable(const condition_variable&) = delete;
	condition_variable& operator=(const condition_variable&) = delete;

	void notify_one() noexcept {}
	void notify_all() noexcept {}

	template <typename Lock>
	void wait(Lock&) noexcept {}

	template <typename Lock, typename Predicate>
	void wait(Lock&, Predicate predicate) {
		(void)predicate;
	}

	template <typename Lock, typename Rep, typename Period>
	cv_status wait_for(Lock&, const chrono::duration<Rep, Period>&) {
		return cv_status::timeout;
	}

	template <typename Lock, typename Rep, typename Period, typename Predicate>
	bool wait_for(Lock&, const chrono::duration<Rep, Period>&, Predicate predicate) {
		return predicate();
	}

	template <typename Lock, typename Clock, typename Duration>
	cv_status wait_until(Lock&, const chrono::time_point<Clock, Duration>&) {
		return cv_status::timeout;
	}

	template <typename Lock, typename Clock, typename Duration, typename Predicate>
	bool wait_until(Lock&, const chrono::time_point<Clock, Duration>&, Predicate predicate) {
		return predicate();
	}
};

template <typename K, typename V, typename Hash = wm::hash<K>, typename KeyEqual = wm::equal_to<K>>
class unordered_map {
public:
	using key_type = K;
	using mapped_type = V;
	using value_type = wm::pair<const K, V>;
	using hasher = Hash;
	using key_equal = KeyEqual;
	using size_type = size_t;
	using difference_type = ptrdiff_t;
	using reference = value_type&;
	using const_reference = const value_type&;
	using pointer = value_type*;
	using const_pointer = const value_type*;

	template <bool Const>
	class basic_iterator {
		template <bool>
		friend class basic_iterator;
		friend class unordered_map;

		using owner_type = conditional_t<Const, const unordered_map, unordered_map>;

	public:
		using iterator_category = random_access_iterator_tag;
		using value_type = unordered_map::value_type;
		using difference_type = ptrdiff_t;
		using pointer = conditional_t<Const, const value_type*, value_type*>;
		using reference = conditional_t<Const, const value_type&, value_type&>;

		basic_iterator() noexcept : owner_(nullptr), index_(0) {}

		template <bool OtherConst, typename = enable_if_t<Const || !OtherConst>>
		basic_iterator(const basic_iterator<OtherConst>& other) noexcept
			: owner_(other.owner_), index_(other.index_) {}

		reference operator*() const noexcept { return *owner_->entries_[index_]; }
		pointer operator->() const noexcept { return owner_->entries_[index_]; }
		reference operator[](difference_type offset) const noexcept { return *(*this + offset); }

		basic_iterator& operator++() noexcept {
			++index_;
			return *this;
		}

		basic_iterator operator++(int) noexcept {
			basic_iterator copy(*this);
			++(*this);
			return copy;
		}

		basic_iterator& operator--() noexcept {
			--index_;
			return *this;
		}

		basic_iterator operator--(int) noexcept {
			basic_iterator copy(*this);
			--(*this);
			return copy;
		}

		basic_iterator& operator+=(difference_type offset) noexcept {
			index_ = static_cast<size_t>(static_cast<difference_type>(index_) + offset);
			return *this;
		}

		basic_iterator& operator-=(difference_type offset) noexcept {
			return *this += -offset;
		}

		basic_iterator operator+(difference_type offset) const noexcept {
			basic_iterator copy(*this);
			copy += offset;
			return copy;
		}

		basic_iterator operator-(difference_type offset) const noexcept {
			basic_iterator copy(*this);
			copy -= offset;
			return copy;
		}

		template <bool OtherConst>
		difference_type operator-(const basic_iterator<OtherConst>& other) const noexcept {
			return static_cast<difference_type>(index_) - static_cast<difference_type>(other.index_);
		}

		template <bool OtherConst>
		bool operator==(const basic_iterator<OtherConst>& other) const noexcept {
			return owner_ == other.owner_ && index_ == other.index_;
		}

		template <bool OtherConst>
		bool operator!=(const basic_iterator<OtherConst>& other) const noexcept { return !(*this == other); }

		template <bool OtherConst>
		bool operator<(const basic_iterator<OtherConst>& other) const noexcept { return index_ < other.index_; }

		template <bool OtherConst>
		bool operator>(const basic_iterator<OtherConst>& other) const noexcept { return other < *this; }

		template <bool OtherConst>
		bool operator<=(const basic_iterator<OtherConst>& other) const noexcept { return !(other < *this); }

		template <bool OtherConst>
		bool operator>=(const basic_iterator<OtherConst>& other) const noexcept { return !(*this < other); }

	private:
		basic_iterator(owner_type* owner, size_t index) noexcept : owner_(owner), index_(index) {}

		owner_type* owner_;
		size_t index_;
	};

	using iterator = basic_iterator<false>;
	using const_iterator = basic_iterator<true>;

	unordered_map() = default;

	unordered_map(std::initializer_list<value_type> values) {
		reserve(values.size());
		for (const auto& value : values) {
			insert(value);
		}
	}

	unordered_map(std::initializer_list<value_type> values, size_type bucket_count,
	              const hasher& hash = hasher(), const key_equal& equal = key_equal())
		: hash_(hash), equal_(equal) {
		if (bucket_count != 0) {
			rehash(bucket_count);
		}
		reserve(values.size());
		for (const auto& value : values) {
			insert(value);
		}
	}

	explicit unordered_map(size_type bucket_count, const hasher& hash = hasher(),
	                       const key_equal& equal = key_equal())
		: hash_(hash), equal_(equal) {
		if (bucket_count != 0) {
			rehash(bucket_count);
		}
	}

	unordered_map(const unordered_map& other) : hash_(other.hash_), equal_(other.equal_) {
		reserve(other.size());
		for (const auto& entry : other) {
			insert(entry);
		}
	}

	unordered_map(unordered_map&& other) noexcept
		: entries_(wm::move(other.entries_)),
		  buckets_(wm::move(other.buckets_)),
		  next_(wm::move(other.next_)),
		  hash_(wm::move(other.hash_)),
		  equal_(wm::move(other.equal_)) {}

	~unordered_map() {
		clear();
	}

	unordered_map& operator=(const unordered_map& other) {
		if (this != &other) {
			unordered_map copy(other);
			swap(copy);
		}
		return *this;
	}

	unordered_map& operator=(unordered_map&& other) noexcept {
		if (this != &other) {
			clear();
			entries_ = wm::move(other.entries_);
			buckets_ = wm::move(other.buckets_);
			next_ = wm::move(other.next_);
			hash_ = wm::move(other.hash_);
			equal_ = wm::move(other.equal_);
		}
		return *this;
	}

	unordered_map& operator=(std::initializer_list<value_type> values) {
		clear();
		reserve(values.size());
		for (const auto& value : values) {
			insert(value);
		}
		return *this;
	}

	bool empty() const noexcept { return entries_.empty(); }
	size_t size() const noexcept { return entries_.size(); }
	size_t bucket_count() const noexcept { return buckets_.size(); }

	void clear() noexcept {
		for (size_t i = 0; i < entries_.size(); ++i) {
			delete entries_[i];
		}
		entries_.clear();
		next_.clear();
		buckets_.clear();
	}

	void reserve(size_t count) {
		entries_.reserve(count);
		next_.reserve(count);
		if (count > bucket_count_for_size(buckets_.size())) {
			rehash(count * 2);
		}
	}

	void rehash(size_t count) {
		const size_t minimum = entries_.size() < 4 ? 8 : entries_.size() * 2;
		if (count < minimum) {
			count = minimum;
		}
		buckets_.assign(bucket_count_for_size(count), npos);
		next_.assign(entries_.size(), npos);
		rebuild_buckets();
	}

	iterator begin() noexcept { return iterator(this, 0); }
	const_iterator begin() const noexcept { return const_iterator(this, 0); }
	const_iterator cbegin() const noexcept { return const_iterator(this, 0); }
	iterator end() noexcept { return iterator(this, entries_.size()); }
	const_iterator end() const noexcept { return const_iterator(this, entries_.size()); }
	const_iterator cend() const noexcept { return const_iterator(this, entries_.size()); }

	iterator find(const K& key) {
		const size_t index = find_index(key);
		return index == npos ? end() : iterator(this, index);
	}

	const_iterator find(const K& key) const {
		const size_t index = find_index(key);
		return index == npos ? end() : const_iterator(this, index);
	}

	size_t count(const K& key) const {
		return find(key) == end() ? 0 : 1;
	}

	bool contains(const K& key) const {
		return count(key) != 0;
	}

	V& operator[](const K& key) {
		iterator it = find(key);
		if (it != end()) {
			return it->second;
		}
		prepare_insert();
		entries_.push_back(new value_type(key, V()));
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return entries_.back()->second;
	}

	V& operator[](K&& key) {
		iterator it = find(key);
		if (it != end()) {
			return it->second;
		}
		prepare_insert();
		entries_.push_back(new value_type(wm::move(key), V()));
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return entries_.back()->second;
	}

	V& at(const K& key) {
		iterator it = find(key);
		if (it == end()) {
			__builtin_trap();
		}
		return it->second;
	}

	const V& at(const K& key) const {
		const_iterator it = find(key);
		if (it == end()) {
			__builtin_trap();
		}
		return it->second;
	}

	wm::pair<iterator, bool> insert(const value_type& value) {
		iterator it = find(value.first);
		if (it != end()) {
			return wm::pair<iterator, bool>(it, false);
		}
		prepare_insert();
		entries_.push_back(new value_type(value));
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return wm::pair<iterator, bool>(iterator(this, entries_.size() - 1), true);
	}

	wm::pair<iterator, bool> insert(value_type&& value) {
		iterator it = find(value.first);
		if (it != end()) {
			return wm::pair<iterator, bool>(it, false);
		}
		prepare_insert();
		entries_.push_back(new value_type(wm::move(value)));
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return wm::pair<iterator, bool>(iterator(this, entries_.size() - 1), true);
	}

	template <typename M>
	wm::pair<iterator, bool> insert_or_assign(const K& key, M&& object) {
		iterator it = find(key);
		if (it != end()) {
			it->second = wm::forward<M>(object);
			return wm::pair<iterator, bool>(it, false);
		}
		prepare_insert();
		entries_.push_back(new value_type(key, wm::forward<M>(object)));
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return wm::pair<iterator, bool>(iterator(this, entries_.size() - 1), true);
	}

	template <typename M>
	wm::pair<iterator, bool> insert_or_assign(K&& key, M&& object) {
		iterator it = find(key);
		if (it != end()) {
			it->second = wm::forward<M>(object);
			return wm::pair<iterator, bool>(it, false);
		}
		prepare_insert();
		entries_.push_back(new value_type(wm::move(key), wm::forward<M>(object)));
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return wm::pair<iterator, bool>(iterator(this, entries_.size() - 1), true);
	}

	template <typename M>
	iterator insert_or_assign(const_iterator, const K& key, M&& object) {
		return insert_or_assign(key, wm::forward<M>(object)).first;
	}

	template <typename M>
	iterator insert_or_assign(const_iterator, K&& key, M&& object) {
		return insert_or_assign(wm::move(key), wm::forward<M>(object)).first;
	}

	template <typename KeyArg, typename ValueArg>
	wm::pair<iterator, bool> emplace(KeyArg&& key, ValueArg&& value) {
		iterator it = find(key);
		if (it != end()) {
			return wm::pair<iterator, bool>(it, false);
		}
		prepare_insert();
		entries_.push_back(new value_type(wm::forward<KeyArg>(key), wm::forward<ValueArg>(value)));
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return wm::pair<iterator, bool>(iterator(this, entries_.size() - 1), true);
	}

	template <typename... Args>
	wm::pair<iterator, bool> emplace(Args&&... args) {
		value_type* value = new value_type(wm::forward<Args>(args)...);
		iterator it = find(value->first);
		if (it != end()) {
			delete value;
			return wm::pair<iterator, bool>(it, false);
		}
		prepare_insert();
		entries_.push_back(value);
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return wm::pair<iterator, bool>(iterator(this, entries_.size() - 1), true);
	}

	template <typename... Args>
	wm::pair<iterator, bool> try_emplace(const K& key, Args&&... args) {
		iterator it = find(key);
		if (it != end()) {
			return wm::pair<iterator, bool>(it, false);
		}
		prepare_insert();
		entries_.push_back(new value_type(piecewise_construct, wm::forward_as_tuple(key),
		                                  wm::forward_as_tuple(wm::forward<Args>(args)...)));
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return wm::pair<iterator, bool>(iterator(this, entries_.size() - 1), true);
	}

	template <typename... Args>
	wm::pair<iterator, bool> try_emplace(K&& key, Args&&... args) {
		iterator it = find(key);
		if (it != end()) {
			return wm::pair<iterator, bool>(it, false);
		}
		prepare_insert();
		entries_.push_back(new value_type(piecewise_construct, wm::forward_as_tuple(wm::move(key)),
		                                  wm::forward_as_tuple(wm::forward<Args>(args)...)));
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return wm::pair<iterator, bool>(iterator(this, entries_.size() - 1), true);
	}

	iterator erase(iterator position) {
		const size_t index = position.index_;
		delete entries_[index];
		entries_.erase(entries_.begin() + static_cast<ptrdiff_t>(index));
		next_.erase(next_.begin() + index);
		rebuild_buckets();
		return index < entries_.size() ? iterator(this, index) : end();
	}

	size_t erase(const K& key) {
		iterator it = find(key);
		if (it == end()) {
			return 0;
		}
		erase(it);
		return 1;
	}

	void swap(unordered_map& other) noexcept {
		entries_.swap(other.entries_);
		buckets_.swap(other.buckets_);
		next_.swap(other.next_);
		Hash hash = wm::move(hash_);
		hash_ = wm::move(other.hash_);
		other.hash_ = wm::move(hash);
		KeyEqual equal = wm::move(equal_);
		equal_ = wm::move(other.equal_);
		other.equal_ = wm::move(equal);
	}

private:
	static constexpr size_t npos = static_cast<size_t>(-1);

	static size_t bucket_count_for_size(size_t count) noexcept {
		size_t buckets = 8;
		while (buckets < count) {
			buckets *= 2;
		}
		return buckets;
	}

	size_t bucket_for_key(const K& key) const {
		return hash_(key) & (buckets_.size() - 1);
	}

	size_t find_index(const K& key) const {
		if (buckets_.empty()) {
			return npos;
		}
		for (size_t index = buckets_[bucket_for_key(key)]; index != npos; index = next_[index]) {
			if (equal_(entries_[index]->first, key)) {
				return index;
			}
		}
		return npos;
	}

	void prepare_insert() {
		if (buckets_.empty() || (entries_.size() + 1) * 4 > buckets_.size() * 3) {
			rehash((entries_.size() + 1) * 2);
		}
	}

	void link_index(size_t index) {
		const size_t bucket = bucket_for_key(entries_[index]->first);
		next_[index] = buckets_[bucket];
		buckets_[bucket] = index;
	}

	void rebuild_buckets() {
		for (size_t i = 0; i < buckets_.size(); ++i) {
			buckets_[i] = npos;
		}
		for (size_t i = 0; i < entries_.size(); ++i) {
			link_index(i);
		}
	}

	wm::vector<value_type*> entries_;
	wm::vector<size_t> buckets_;
	wm::vector<size_t> next_;
	Hash hash_{};
	KeyEqual equal_{};
};

template <typename K, typename V, typename Hash, typename KeyEqual>
bool operator==(const unordered_map<K, V, Hash, KeyEqual>& left,
                const unordered_map<K, V, Hash, KeyEqual>& right) {
	if (left.size() != right.size()) {
		return false;
	}
	for (const auto& entry : left) {
		auto found = right.find(entry.first);
		if (found == right.end() || !(found->second == entry.second)) {
			return false;
		}
	}
	return true;
}

template <typename K, typename V, typename Hash, typename KeyEqual>
bool operator!=(const unordered_map<K, V, Hash, KeyEqual>& left,
                const unordered_map<K, V, Hash, KeyEqual>& right) {
	return !(left == right);
}

template <typename K, typename V, typename Hash = wm::hash<K>, typename KeyEqual = wm::equal_to<K>>
class unordered_multimap {
public:
	using key_type = K;
	using mapped_type = V;
	using value_type = wm::pair<const K, V>;
	using hasher = Hash;
	using key_equal = KeyEqual;
	using size_type = size_t;
	using difference_type = ptrdiff_t;
	using reference = value_type&;
	using const_reference = const value_type&;
	using pointer = value_type*;
	using const_pointer = const value_type*;

	template <bool Const>
	class basic_iterator {
		template <bool>
		friend class basic_iterator;
		friend class unordered_multimap;

		using owner_type = conditional_t<Const, const unordered_multimap, unordered_multimap>;

	public:
		using iterator_category = random_access_iterator_tag;
		using value_type = unordered_multimap::value_type;
		using difference_type = ptrdiff_t;
		using pointer = conditional_t<Const, const value_type*, value_type*>;
		using reference = conditional_t<Const, const value_type&, value_type&>;

		basic_iterator() noexcept : owner_(nullptr), index_(0) {}

		template <bool OtherConst, typename = enable_if_t<Const || !OtherConst>>
		basic_iterator(const basic_iterator<OtherConst>& other) noexcept
			: owner_(other.owner_), index_(other.index_) {}

		reference operator*() const noexcept { return *owner_->entries_[index_]; }
		pointer operator->() const noexcept { return owner_->entries_[index_]; }
		reference operator[](difference_type offset) const noexcept { return *(*this + offset); }

		basic_iterator& operator++() noexcept {
			++index_;
			return *this;
		}

		basic_iterator operator++(int) noexcept {
			basic_iterator copy(*this);
			++(*this);
			return copy;
		}

		basic_iterator& operator--() noexcept {
			--index_;
			return *this;
		}

		basic_iterator operator--(int) noexcept {
			basic_iterator copy(*this);
			--(*this);
			return copy;
		}

		basic_iterator& operator+=(difference_type offset) noexcept {
			index_ = static_cast<size_t>(static_cast<difference_type>(index_) + offset);
			return *this;
		}

		basic_iterator& operator-=(difference_type offset) noexcept {
			return *this += -offset;
		}

		basic_iterator operator+(difference_type offset) const noexcept {
			basic_iterator copy(*this);
			copy += offset;
			return copy;
		}

		basic_iterator operator-(difference_type offset) const noexcept {
			basic_iterator copy(*this);
			copy -= offset;
			return copy;
		}

		template <bool OtherConst>
		difference_type operator-(const basic_iterator<OtherConst>& other) const noexcept {
			return static_cast<difference_type>(index_) - static_cast<difference_type>(other.index_);
		}

		template <bool OtherConst>
		bool operator==(const basic_iterator<OtherConst>& other) const noexcept {
			return owner_ == other.owner_ && index_ == other.index_;
		}

		template <bool OtherConst>
		bool operator!=(const basic_iterator<OtherConst>& other) const noexcept { return !(*this == other); }

		template <bool OtherConst>
		bool operator<(const basic_iterator<OtherConst>& other) const noexcept { return index_ < other.index_; }

		template <bool OtherConst>
		bool operator>(const basic_iterator<OtherConst>& other) const noexcept { return other < *this; }

		template <bool OtherConst>
		bool operator<=(const basic_iterator<OtherConst>& other) const noexcept { return !(other < *this); }

		template <bool OtherConst>
		bool operator>=(const basic_iterator<OtherConst>& other) const noexcept { return !(*this < other); }

	private:
		basic_iterator(owner_type* owner, size_t index) noexcept : owner_(owner), index_(index) {}

		owner_type* owner_;
		size_t index_;
	};

	using iterator = basic_iterator<false>;
	using const_iterator = basic_iterator<true>;

	unordered_multimap() = default;

	explicit unordered_multimap(size_type bucket_count, const hasher& hash = hasher(),
	                            const key_equal& equal = key_equal())
		: hash_(hash), equal_(equal) {
		reserve(bucket_count);
	}

	unordered_multimap(const unordered_multimap& other) : hash_(other.hash_), equal_(other.equal_) {
		reserve(other.size());
		for (const auto& entry : other) {
			insert(entry);
		}
	}

	unordered_multimap(unordered_multimap&& other) noexcept
		: entries_(wm::move(other.entries_)),
		  hash_(wm::move(other.hash_)),
		  equal_(wm::move(other.equal_)) {}

	~unordered_multimap() {
		clear();
	}

	unordered_multimap& operator=(const unordered_multimap& other) {
		if (this != &other) {
			unordered_multimap copy(other);
			swap(copy);
		}
		return *this;
	}

	unordered_multimap& operator=(unordered_multimap&& other) noexcept {
		if (this != &other) {
			clear();
			entries_ = wm::move(other.entries_);
			hash_ = wm::move(other.hash_);
			equal_ = wm::move(other.equal_);
		}
		return *this;
	}

	bool empty() const noexcept { return entries_.empty(); }
	size_t size() const noexcept { return entries_.size(); }
	size_t bucket_count() const noexcept { return entries_.size() < 8 ? 8 : entries_.size(); }

	void clear() noexcept {
		for (size_t i = 0; i < entries_.size(); ++i) {
			delete entries_[i];
		}
		entries_.clear();
	}

	void reserve(size_t count) {
		entries_.reserve(count);
	}

	void rehash(size_t count) {
		reserve(count);
	}

	iterator begin() noexcept { return iterator(this, 0); }
	const_iterator begin() const noexcept { return const_iterator(this, 0); }
	const_iterator cbegin() const noexcept { return const_iterator(this, 0); }
	iterator end() noexcept { return iterator(this, entries_.size()); }
	const_iterator end() const noexcept { return const_iterator(this, entries_.size()); }
	const_iterator cend() const noexcept { return const_iterator(this, entries_.size()); }

	iterator find(const K& key) {
		const size_t index = first_index(key);
		return index == npos ? end() : iterator(this, index);
	}

	const_iterator find(const K& key) const {
		const size_t index = first_index(key);
		return index == npos ? end() : const_iterator(this, index);
	}

	size_t count(const K& key) const {
		size_t matches = 0;
		for (const auto& entry : *this) {
			if (equal_(entry.first, key)) {
				++matches;
			}
		}
		return matches;
	}

	bool contains(const K& key) const {
		return count(key) != 0;
	}

	wm::pair<iterator, iterator> equal_range(const K& key) {
		const size_t first = first_index(key);
		if (first == npos) {
			return wm::pair<iterator, iterator>(end(), end());
		}
		return wm::pair<iterator, iterator>(iterator(this, first), iterator(this, range_end_index(first)));
	}

	wm::pair<const_iterator, const_iterator> equal_range(const K& key) const {
		const size_t first = first_index(key);
		if (first == npos) {
			return wm::pair<const_iterator, const_iterator>(end(), end());
		}
		return wm::pair<const_iterator, const_iterator>(const_iterator(this, first), const_iterator(this, range_end_index(first)));
	}

	iterator insert(const value_type& value) {
		return insert_entry(new value_type(value));
	}

	iterator insert(value_type&& value) {
		return insert_entry(new value_type(wm::move(value)));
	}

	iterator insert(const_iterator, const value_type& value) {
		return insert(value);
	}

	iterator insert(const_iterator, value_type&& value) {
		return insert(wm::move(value));
	}

	template <typename... Args>
	iterator emplace(Args&&... args) {
		return insert_entry(new value_type(wm::forward<Args>(args)...));
	}

	iterator erase(iterator position) {
		const size_t index = position.index_;
		delete entries_[index];
		entries_.erase(entries_.begin() + static_cast<ptrdiff_t>(index));
		return index < entries_.size() ? iterator(this, index) : end();
	}

	size_t erase(const K& key) {
		size_t removed = 0;
		for (size_t i = 0; i < entries_.size();) {
			if (equal_(entries_[i]->first, key)) {
				delete entries_[i];
				entries_.erase(entries_.begin() + static_cast<ptrdiff_t>(i));
				++removed;
			} else {
				++i;
			}
		}
		return removed;
	}

	void swap(unordered_multimap& other) noexcept {
		entries_.swap(other.entries_);
		Hash hash = wm::move(hash_);
		hash_ = wm::move(other.hash_);
		other.hash_ = wm::move(hash);
		KeyEqual equal = wm::move(equal_);
		equal_ = wm::move(other.equal_);
		other.equal_ = wm::move(equal);
	}

private:
	static constexpr size_t npos = static_cast<size_t>(-1);

	size_t first_index(const K& key) const {
		for (size_t i = 0; i < entries_.size(); ++i) {
			if (equal_(entries_[i]->first, key)) {
				return i;
			}
		}
		return npos;
	}

	size_t range_end_index(size_t first) const {
		size_t last = first + 1;
		while (last < entries_.size() && equal_(entries_[first]->first, entries_[last]->first)) {
			++last;
		}
		return last;
	}

	iterator insert_entry(value_type* value) {
		const size_t first = first_index(value->first);
		if (first == npos) {
			entries_.push_back(value);
			return iterator(this, entries_.size() - 1);
		}
		const size_t index = range_end_index(first);
		entries_.insert(entries_.begin() + static_cast<ptrdiff_t>(index), value);
		return iterator(this, index);
	}

	wm::vector<value_type*> entries_;
	Hash hash_{};
	KeyEqual equal_{};
};

template <typename T, typename Hash = wm::hash<T>, typename KeyEqual = wm::equal_to<T>>
class unordered_set {
public:
	using value_type = T;
	using iterator = T*;
	using const_iterator = const T*;

	unordered_set() = default;
	unordered_set(std::initializer_list<T> values) {
		insert(values.begin(), values.end());
	}
	template <typename InputIt>
	unordered_set(InputIt first, InputIt last) {
		insert(first, last);
	}
	template <typename InputIt>
	unordered_set(InputIt first, InputIt last, size_t bucket_count, const Hash& hash = Hash(),
	              const KeyEqual& equal = KeyEqual())
		: hash_(hash), equal_(equal) {
		rehash(bucket_count);
		insert(first, last);
	}
	unordered_set(const unordered_set&) = default;
	unordered_set(unordered_set&&) noexcept = default;
	unordered_set& operator=(const unordered_set&) = default;
	unordered_set& operator=(unordered_set&&) noexcept = default;

	bool empty() const noexcept { return entries_.empty(); }
	size_t size() const noexcept { return entries_.size(); }
	size_t bucket_count() const noexcept { return buckets_.size(); }

	void clear() noexcept {
		entries_.clear();
		next_.clear();
		buckets_.clear();
	}

	void reserve(size_t count) {
		entries_.reserve(count);
		next_.reserve(count);
		if (count > bucket_count_for_size(buckets_.size())) {
			rehash(count * 2);
		}
	}

	void rehash(size_t count) {
		const size_t minimum = entries_.size() < 4 ? 8 : entries_.size() * 2;
		if (count < minimum) {
			count = minimum;
		}
		buckets_.assign(bucket_count_for_size(count), npos);
		next_.assign(entries_.size(), npos);
		rebuild_buckets();
	}

	iterator begin() noexcept { return entries_.begin(); }
	const_iterator begin() const noexcept { return entries_.begin(); }
	const_iterator cbegin() const noexcept { return entries_.begin(); }
	iterator end() noexcept { return entries_.end(); }
	const_iterator end() const noexcept { return entries_.end(); }
	const_iterator cend() const noexcept { return entries_.end(); }

	iterator find(const T& value) {
		const size_t index = find_index(value);
		return index == npos ? end() : entries_.begin() + index;
	}

	const_iterator find(const T& value) const {
		const size_t index = find_index(value);
		return index == npos ? end() : entries_.begin() + index;
	}

	size_t count(const T& value) const {
		return find(value) == end() ? 0 : 1;
	}

	bool contains(const T& value) const {
		return count(value) != 0;
	}

	wm::pair<iterator, bool> insert(const T& value) {
		iterator it = find(value);
		if (it != end()) {
			return wm::pair<iterator, bool>(it, false);
		}
		prepare_insert();
		entries_.push_back(value);
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return wm::pair<iterator, bool>(entries_.end() - 1, true);
	}

	wm::pair<iterator, bool> insert(T&& value) {
		iterator it = find(value);
		if (it != end()) {
			return wm::pair<iterator, bool>(it, false);
		}
		prepare_insert();
		entries_.push_back(wm::move(value));
		next_.push_back(npos);
		link_index(entries_.size() - 1);
		return wm::pair<iterator, bool>(entries_.end() - 1, true);
	}

	template <typename InputIt>
	void insert(InputIt first, InputIt last) {
		for (InputIt it = first; it != last; ++it) {
			insert(*it);
		}
	}

	template <typename... Args>
	wm::pair<iterator, bool> emplace(Args&&... args) {
		T value(wm::forward<Args>(args)...);
		return insert(wm::move(value));
	}

	iterator erase(iterator position) {
		const size_t index = static_cast<size_t>(position - begin());
		entries_.erase(position);
		next_.erase(next_.begin() + index);
		rebuild_buckets();
		return index < entries_.size() ? entries_.begin() + index : entries_.end();
	}

	size_t erase(const T& value) {
		iterator it = find(value);
		if (it == end()) {
			return 0;
		}
		erase(it);
		return 1;
	}

private:
	static constexpr size_t npos = static_cast<size_t>(-1);

	static size_t bucket_count_for_size(size_t count) noexcept {
		size_t buckets = 8;
		while (buckets < count) {
			buckets *= 2;
		}
		return buckets;
	}

	size_t bucket_for_value(const T& value) const {
		return hash_(value) & (buckets_.size() - 1);
	}

	size_t find_index(const T& value) const {
		if (buckets_.empty()) {
			return npos;
		}
		for (size_t index = buckets_[bucket_for_value(value)]; index != npos; index = next_[index]) {
			if (equal_(entries_[index], value)) {
				return index;
			}
		}
		return npos;
	}

	void prepare_insert() {
		if (buckets_.empty() || (entries_.size() + 1) * 4 > buckets_.size() * 3) {
			rehash((entries_.size() + 1) * 2);
		}
	}

	void link_index(size_t index) {
		const size_t bucket = bucket_for_value(entries_[index]);
		next_[index] = buckets_[bucket];
		buckets_[bucket] = index;
	}

	void rebuild_buckets() {
		for (size_t i = 0; i < buckets_.size(); ++i) {
			buckets_[i] = npos;
		}
		for (size_t i = 0; i < entries_.size(); ++i) {
			link_index(i);
		}
	}

	wm::vector<T> entries_;
	wm::vector<size_t> buckets_;
	wm::vector<size_t> next_;
	Hash hash_{};
	KeyEqual equal_{};
};

template <typename... Types>
class variant {
public:
	using first_type = typename detail::type_at<0, Types...>::type;

	variant() : index_(0) {
		new (storage_) first_type();
	}

	variant(const variant& other) : index_(other.index_) {
		detail::variant_copy<0, Types...>(index_, storage_, other.storage_);
	}

	variant(variant&& other) : index_(other.index_) {
		detail::variant_move<0, Types...>(index_, storage_, other.storage_);
	}

	template <typename T, typename Clean = remove_cv_t<remove_reference_t<T>>,
	          typename Selection = detail::variant_selected_index<Clean, T&&, Types...>,
	          typename = enable_if_t<!is_same<Clean, variant<Types...>>::value && Selection::valid>>
	variant(T&& value) : index_(Selection::value) {
		using selected_type = typename detail::type_at<Selection::value, Types...>::type;
		new (storage_) selected_type(wm::forward<T>(value));
	}

	template <size_t Index, typename... Args>
	explicit variant(in_place_index_t<Index>, Args&&... args) : index_(Index) {
		using selected_type = typename detail::type_at<Index, Types...>::type;
		new (storage_) selected_type(wm::forward<Args>(args)...);
	}

	template <typename T, typename... Args>
	explicit variant(in_place_type_t<T>, Args&&... args) : index_(detail::type_index<T, Types...>::value) {
		new (storage_) T(wm::forward<Args>(args)...);
	}

	~variant() {
		detail::variant_destroy<0, Types...>(index_, storage_);
	}

	variant& operator=(const variant& other) {
		if (this != &other) {
			detail::variant_destroy<0, Types...>(index_, storage_);
			index_ = other.index_;
			detail::variant_copy<0, Types...>(index_, storage_, other.storage_);
		}
		return *this;
	}

	variant& operator=(variant&& other) {
		if (this != &other) {
			detail::variant_destroy<0, Types...>(index_, storage_);
			index_ = other.index_;
			detail::variant_move<0, Types...>(index_, storage_, other.storage_);
		}
		return *this;
	}

	template <typename T, typename Clean = remove_cv_t<remove_reference_t<T>>,
		typename = typename enable_if<detail::has_type<Clean, Types...>::value>::type>
	variant& operator=(T&& value) {
		emplace<Clean>(wm::forward<T>(value));
		return *this;
	}

	template <typename T, typename... Args>
	constexpr T& emplace(Args&&... args) {
		detail::variant_destroy<0, Types...>(index_, storage_);
		new (storage_) T(wm::forward<Args>(args)...);
		index_ = detail::type_index<T, Types...>::value;
		return *reinterpret_cast<T*>(storage_);
	}

	size_t index() const noexcept { return index_; }
	constexpr bool valueless_by_exception() const noexcept { return false; }

private:
	template <size_t Index, typename... VariantTypes>
	friend typename detail::type_at<Index, VariantTypes...>::type& get(variant<VariantTypes...>& value);
	template <size_t Index, typename... VariantTypes>
	friend const typename detail::type_at<Index, VariantTypes...>::type& get(const variant<VariantTypes...>& value);
	template <size_t Index, typename... VariantTypes>
	friend typename detail::type_at<Index, VariantTypes...>::type&& get(variant<VariantTypes...>&& value);
	template <typename T, typename... VariantTypes>
	friend T& get(variant<VariantTypes...>& value);
	template <typename T, typename... VariantTypes>
	friend const T& get(const variant<VariantTypes...>& value);
	template <typename T, typename... VariantTypes>
	friend T&& get(variant<VariantTypes...>&& value);
	template <typename... VariantTypes>
	friend bool operator==(const variant<VariantTypes...>& left, const variant<VariantTypes...>& right);
	template <typename... VariantTypes>
	friend bool operator<(const variant<VariantTypes...>& left, const variant<VariantTypes...>& right);

	alignas(detail::max_alignof<Types...>::value) unsigned char storage_[detail::max_sizeof<Types...>::value];
	size_t index_;
};

inline constexpr size_t variant_npos = static_cast<size_t>(-1);

template <typename... Types>
bool operator==(const variant<Types...>& left, const variant<Types...>& right) {
	if (left.index_ != right.index_) {
		return false;
	}
	return detail::variant_equal<0, Types...>(left.index_, left.storage_, right.storage_);
}

template <typename... Types>
bool operator!=(const variant<Types...>& left, const variant<Types...>& right) {
	return !(left == right);
}

template <typename... Types>
bool operator<(const variant<Types...>& left, const variant<Types...>& right) {
	if (left.index_ != right.index_) {
		return left.index_ < right.index_;
	}
	return detail::variant_less<0, Types...>(left.index_, left.storage_, right.storage_);
}

template <typename... Types>
bool operator>(const variant<Types...>& left, const variant<Types...>& right) {
	return right < left;
}

template <typename... Types>
bool operator<=(const variant<Types...>& left, const variant<Types...>& right) {
	return !(right < left);
}

template <typename... Types>
bool operator>=(const variant<Types...>& left, const variant<Types...>& right) {
	return !(left < right);
}

template <typename Variant>
struct variant_size;

template <typename... Types>
struct variant_size<variant<Types...>> : integral_constant<size_t, sizeof...(Types)> {};

template <typename Variant>
struct variant_size<const Variant> : variant_size<Variant> {};

template <typename Variant>
struct variant_size<volatile Variant> : variant_size<Variant> {};

template <typename Variant>
struct variant_size<const volatile Variant> : variant_size<Variant> {};

template <size_t Index, typename Variant>
struct variant_alternative;

template <size_t Index, typename... Types>
struct variant_alternative<Index, variant<Types...>> {
	using type = typename detail::type_at<Index, Types...>::type;
};

template <size_t Index, typename Variant>
struct variant_alternative<Index, const Variant> {
	using type = const typename variant_alternative<Index, Variant>::type;
};

template <size_t Index, typename Variant>
struct variant_alternative<Index, volatile Variant> {
	using type = volatile typename variant_alternative<Index, Variant>::type;
};

template <size_t Index, typename Variant>
struct variant_alternative<Index, const volatile Variant> {
	using type = const volatile typename variant_alternative<Index, Variant>::type;
};

template <size_t Index, typename Variant>
using variant_alternative_t = typename variant_alternative<Index, Variant>::type;

template <size_t Index, typename... Types>
typename detail::type_at<Index, Types...>::type& get(variant<Types...>& value) {
	using T = typename detail::type_at<Index, Types...>::type;
	if (value.index_ != Index) {
		__builtin_trap();
	}
	return *reinterpret_cast<T*>(value.storage_);
}

template <size_t Index, typename... Types>
const typename detail::type_at<Index, Types...>::type& get(const variant<Types...>& value) {
	using T = typename detail::type_at<Index, Types...>::type;
	if (value.index_ != Index) {
		__builtin_trap();
	}
	return *reinterpret_cast<const T*>(value.storage_);
}

template <size_t Index, typename... Types>
typename detail::type_at<Index, Types...>::type&& get(variant<Types...>&& value) {
	return static_cast<typename tuple_element<Index, tuple<Types...>>::type&&>(wm::get<Index>(value));
}

template <typename T, typename... Types>
T& get(variant<Types...>& value) {
	constexpr size_t target = detail::type_index<T, Types...>::value;
	if (value.index_ != target) {
		__builtin_trap();
	}
	return *reinterpret_cast<T*>(value.storage_);
}

template <typename T, typename... Types>
const T& get(const variant<Types...>& value) {
	constexpr size_t target = detail::type_index<T, Types...>::value;
	if (value.index_ != target) {
		__builtin_trap();
	}
	return *reinterpret_cast<const T*>(value.storage_);
}

template <typename T, typename... Types>
T&& get(variant<Types...>&& value) {
	return wm::move(wm::get<T>(value));
}

template <typename T, typename... Types>
constexpr bool holds_alternative(const variant<Types...>& value) noexcept {
	return value.index() == detail::type_index<T, Types...>::value;
}

template <typename T, typename... Types>
T* get_if(variant<Types...>* value) noexcept {
	if (!value || !wm::holds_alternative<T>(*value)) {
		return nullptr;
	}
	return &wm::get<T>(*value);
}

template <typename T, typename... Types>
const T* get_if(const variant<Types...>* value) noexcept {
	if (!value || !wm::holds_alternative<T>(*value)) {
		return nullptr;
	}
	return &wm::get<T>(*value);
}

template <size_t Index, typename... Types>
variant_alternative_t<Index, variant<Types...>>* get_if(variant<Types...>* value) noexcept {
	if (!value || value->index() != Index) {
		return nullptr;
	}
	return &wm::get<Index>(*value);
}

template <size_t Index, typename... Types>
const variant_alternative_t<Index, variant<Types...>>* get_if(const variant<Types...>* value) noexcept {
	if (!value || value->index() != Index) {
		return nullptr;
	}
	return &wm::get<Index>(*value);
}

namespace detail {
template <size_t Index, typename Visitor, typename Variant, typename... Types>
decltype(auto) variant_visit_impl(Visitor&& visitor, Variant&& value) {
	using current_type = typename type_at<Index, Types...>::type;
	if (value.index() == Index) {
		return wm::forward<Visitor>(visitor)(wm::get<current_type>(wm::forward<Variant>(value)));
	}
	if constexpr (Index + 1 < sizeof...(Types)) {
		return variant_visit_impl<Index + 1, Visitor, Variant, Types...>(
			wm::forward<Visitor>(visitor), wm::forward<Variant>(value));
	}
	__builtin_trap();
}
}

template <typename Visitor, typename... Types>
decltype(auto) visit(Visitor&& visitor, variant<Types...>& value) {
	return detail::variant_visit_impl<0, Visitor, variant<Types...>&, Types...>(
		wm::forward<Visitor>(visitor), value);
}

template <typename Visitor, typename... Types>
decltype(auto) visit(Visitor&& visitor, const variant<Types...>& value) {
	return detail::variant_visit_impl<0, Visitor, const variant<Types...>&, Types...>(
		wm::forward<Visitor>(visitor), value);
}

template <typename Signature>
class function;

template <typename MemberPointer>
class mem_fn_wrapper;

template <typename R, typename C, typename... Args>
class mem_fn_wrapper<R (C::*)(Args...)> {
public:
	explicit constexpr mem_fn_wrapper(R (C::*function)(Args...)) : function_(function) {}

	template <typename Obj, typename... CallArgs>
	R operator()(Obj&& object, CallArgs&&... args) const {
		return wm::invoke(function_, wm::forward<Obj>(object), wm::forward<CallArgs>(args)...);
	}

	template <typename Obj, typename... CallArgs>
	R operator()(Obj* object, CallArgs&&... args) const {
		return wm::invoke(function_, object, wm::forward<CallArgs>(args)...);
	}

private:
	R (C::*function_)(Args...);
};

template <typename R, typename C, typename... Args>
class mem_fn_wrapper<R (C::*)(Args...) const> {
public:
	explicit constexpr mem_fn_wrapper(R (C::*function)(Args...) const) : function_(function) {}

	template <typename Obj, typename... CallArgs>
	R operator()(Obj&& object, CallArgs&&... args) const {
		return wm::invoke(function_, wm::forward<Obj>(object), wm::forward<CallArgs>(args)...);
	}

	template <typename Obj, typename... CallArgs>
	R operator()(Obj* object, CallArgs&&... args) const {
		return wm::invoke(function_, object, wm::forward<CallArgs>(args)...);
	}

private:
	R (C::*function_)(Args...) const;
};

template <typename MemberPointer>
constexpr mem_fn_wrapper<MemberPointer> mem_fn(MemberPointer pointer) {
	return mem_fn_wrapper<MemberPointer>(pointer);
}

template <typename R, typename... Args>
class function<R(Args...)> {
public:
	constexpr function() noexcept : callable_(nullptr) {}
	constexpr function(wm::nullptr_t) noexcept : callable_(nullptr) {}

	function(const function& other) : callable_(other.callable_ ? other.callable_->clone() : nullptr) {}
	function(function& other) : function(static_cast<const function&>(other)) {}

	function(function&& other) noexcept : callable_(other.callable_) {
		other.callable_ = nullptr;
	}

	function(int null_constant) noexcept : callable_(nullptr) {
		if (null_constant != 0) {
			__builtin_trap();
		}
	}

	template <typename Callable,
	          typename Clean = decay_t<Callable>,
	          typename = enable_if_t<!is_same<Clean, function>::value &&
	                                 is_invocable<Callable&, Args...>::value>>
	function(Callable callable) : callable_(new holder<Callable>(wm::move(callable))) {}

	~function() {
		delete callable_;
	}

	function& operator=(const function& other) {
		if (this != &other) {
			function copy(other);
			swap(copy);
		}
		return *this;
	}

	function& operator=(function&& other) noexcept {
		if (this != &other) {
			delete callable_;
			callable_ = other.callable_;
			other.callable_ = nullptr;
		}
		return *this;
	}

	function& operator=(wm::nullptr_t) noexcept {
		delete callable_;
		callable_ = nullptr;
		return *this;
	}

	function& operator=(int null_constant) noexcept {
		if (null_constant != 0) {
			__builtin_trap();
		}
		delete callable_;
		callable_ = nullptr;
		return *this;
	}

	template <typename Callable,
	          typename Clean = decay_t<Callable>,
	          typename = enable_if_t<!is_same<Clean, function>::value &&
	                                 is_invocable<Callable&, Args...>::value>>
	function& operator=(Callable callable) {
		function replacement(wm::move(callable));
		swap(replacement);
		return *this;
	}

	explicit operator bool() const noexcept {
		return callable_ != nullptr;
	}

	R operator()(Args... args) const {
		return callable_->invoke(wm::forward<Args>(args)...);
	}

	void swap(function& other) noexcept {
		base* tmp = callable_;
		callable_ = other.callable_;
		other.callable_ = tmp;
	}

private:
	struct base {
		virtual ~base() {}
		virtual R invoke(Args... args) = 0;
		virtual base* clone() const = 0;
	};

	template <typename Callable>
	struct holder : base {
		Callable callable;

		explicit holder(Callable value) : callable(wm::move(value)) {}

		R invoke(Args... args) override {
			if constexpr (is_same<R, void>::value) {
				wm::invoke(callable, wm::forward<Args>(args)...);
			} else {
				return wm::invoke(callable, wm::forward<Args>(args)...);
			}
		}

		base* clone() const override {
			if constexpr (is_copy_constructible<Callable>::value) {
				return new holder(callable);
			} else {
				__builtin_trap();
				return nullptr;
			}
		}
	};

	base* callable_;
};

template <typename Signature>
bool operator==(const function<Signature>& callable, nullptr_t) noexcept {
	return !static_cast<bool>(callable);
}

template <typename Signature>
bool operator==(nullptr_t, const function<Signature>& callable) noexcept {
	return !static_cast<bool>(callable);
}

template <typename Signature>
bool operator!=(const function<Signature>& callable, nullptr_t) noexcept {
	return static_cast<bool>(callable);
}

template <typename Signature>
bool operator!=(nullptr_t, const function<Signature>& callable) noexcept {
	return static_cast<bool>(callable);
}

enum class future_status {
	ready,
	timeout,
	deferred
};

enum class launch {
	async = 1,
	deferred = 2
};

template <typename T>
class future;

template <typename T>
class shared_future;

template <typename T>
class promise;

template <typename Signature>
class packaged_task;

namespace detail {

template <typename T>
struct future_state {
	atomic<bool> ready{false};
	optional<T> value{};

	void set_value(const T& input) {
		value.emplace(input);
		ready.store(true, memory_order_release);
	}

	void set_value(T&& input) {
		value.emplace(wm::move(input));
		ready.store(true, memory_order_release);
	}

	bool is_ready() const noexcept {
		return ready.load(memory_order_acquire);
	}

	void wait() const noexcept {
		while (!is_ready()) {
		}
	}
};

template <>
struct future_state<void> {
	atomic<bool> ready{false};

	void set_value() noexcept {
		ready.store(true, memory_order_release);
	}

	bool is_ready() const noexcept {
		return ready.load(memory_order_acquire);
	}

	void wait() const noexcept {
		while (!is_ready()) {
		}
	}
};

} // namespace detail

template <typename T>
class future {
public:
	future() noexcept = default;
	future(const future&) = delete;
	future& operator=(const future&) = delete;
	future(future&&) noexcept = default;
	future& operator=(future&&) noexcept = default;

	bool valid() const noexcept {
		return static_cast<bool>(state_);
	}

	T get() {
		if (!state_) {
			__builtin_trap();
		}
		wm::shared_ptr<detail::future_state<T>> state = state_;
		state_ = nullptr;
		state->wait();
		return wm::move(*state->value);
	}

	void wait() const {
		if (!state_) {
			__builtin_trap();
		}
		state_->wait();
	}

	template <typename Duration>
	future_status wait_for(const Duration&) const {
		if (!state_) {
			__builtin_trap();
		}
		return state_->is_ready() ? future_status::ready : future_status::timeout;
	}

	template <typename TimePoint>
	future_status wait_until(const TimePoint&) const {
		if (!state_) {
			__builtin_trap();
		}
		return state_->is_ready() ? future_status::ready : future_status::timeout;
	}

	shared_future<T> share();

private:
	friend class promise<T>;
	template <typename Signature>
	friend class packaged_task;

	explicit future(wm::shared_ptr<detail::future_state<T>> state) : state_(wm::move(state)) {}

	wm::shared_ptr<detail::future_state<T>> state_{};
};

template <>
class future<void> {
public:
	future() noexcept = default;
	future(const future&) = delete;
	future& operator=(const future&) = delete;
	future(future&&) noexcept = default;
	future& operator=(future&&) noexcept = default;

	bool valid() const noexcept {
		return static_cast<bool>(state_);
	}

	void get() {
		if (!state_) {
			__builtin_trap();
		}
		wm::shared_ptr<detail::future_state<void>> state = state_;
		state_ = nullptr;
		state->wait();
	}

	void wait() const {
		if (!state_) {
			__builtin_trap();
		}
		state_->wait();
	}

	template <typename Duration>
	future_status wait_for(const Duration&) const {
		if (!state_) {
			__builtin_trap();
		}
		return state_->is_ready() ? future_status::ready : future_status::timeout;
	}

	template <typename TimePoint>
	future_status wait_until(const TimePoint&) const {
		if (!state_) {
			__builtin_trap();
		}
		return state_->is_ready() ? future_status::ready : future_status::timeout;
	}

	shared_future<void> share();

private:
	friend class promise<void>;
	template <typename Signature>
	friend class packaged_task;

	explicit future(wm::shared_ptr<detail::future_state<void>> state) : state_(wm::move(state)) {}

	wm::shared_ptr<detail::future_state<void>> state_{};
};

template <typename T>
class shared_future {
public:
	shared_future() noexcept = default;
	shared_future(const shared_future&) noexcept = default;
	shared_future(shared_future&&) noexcept = default;
	shared_future& operator=(const shared_future&) noexcept = default;
	shared_future& operator=(shared_future&&) noexcept = default;

	bool valid() const noexcept {
		return static_cast<bool>(state_);
	}

	const T& get() const {
		if (!state_) {
			__builtin_trap();
		}
		state_->wait();
		return *state_->value;
	}

	void wait() const {
		if (!state_) {
			__builtin_trap();
		}
		state_->wait();
	}

	template <typename Duration>
	future_status wait_for(const Duration&) const {
		if (!state_) {
			__builtin_trap();
		}
		return state_->is_ready() ? future_status::ready : future_status::timeout;
	}

	template <typename TimePoint>
	future_status wait_until(const TimePoint&) const {
		if (!state_) {
			__builtin_trap();
		}
		return state_->is_ready() ? future_status::ready : future_status::timeout;
	}

private:
	friend class future<T>;

	explicit shared_future(wm::shared_ptr<detail::future_state<T>> state) : state_(wm::move(state)) {}

	wm::shared_ptr<detail::future_state<T>> state_{};
};

template <>
class shared_future<void> {
public:
	shared_future() noexcept = default;
	shared_future(const shared_future&) noexcept = default;
	shared_future(shared_future&&) noexcept = default;
	shared_future& operator=(const shared_future&) noexcept = default;
	shared_future& operator=(shared_future&&) noexcept = default;

	bool valid() const noexcept {
		return static_cast<bool>(state_);
	}

	void get() const {
		wait();
	}

	void wait() const {
		if (!state_) {
			__builtin_trap();
		}
		state_->wait();
	}

	template <typename Duration>
	future_status wait_for(const Duration&) const {
		if (!state_) {
			__builtin_trap();
		}
		return state_->is_ready() ? future_status::ready : future_status::timeout;
	}

	template <typename TimePoint>
	future_status wait_until(const TimePoint&) const {
		if (!state_) {
			__builtin_trap();
		}
		return state_->is_ready() ? future_status::ready : future_status::timeout;
	}

private:
	friend class future<void>;

	explicit shared_future(wm::shared_ptr<detail::future_state<void>> state) : state_(wm::move(state)) {}

	wm::shared_ptr<detail::future_state<void>> state_{};
};

template <typename T>
shared_future<T> future<T>::share() {
	if (!state_) {
		__builtin_trap();
	}
	shared_future<T> result(state_);
	state_ = nullptr;
	return result;
}

inline shared_future<void> future<void>::share() {
	if (!state_) {
		__builtin_trap();
	}
	shared_future<void> result(state_);
	state_ = nullptr;
	return result;
}

template <typename T>
class promise {
public:
	promise() : state_(wm::make_shared<detail::future_state<T>>()) {}
	promise(const promise&) = delete;
	promise& operator=(const promise&) = delete;
	promise(promise&&) noexcept = default;
	promise& operator=(promise&&) noexcept = default;

	future<T> get_future() {
		if (!state_) {
			__builtin_trap();
		}
		return future<T>(state_);
	}

	void set_value(const T& value) {
		if (!state_) {
			__builtin_trap();
		}
		state_->set_value(value);
	}

	void set_value(T&& value) {
		if (!state_) {
			__builtin_trap();
		}
		state_->set_value(wm::move(value));
	}

private:
	wm::shared_ptr<detail::future_state<T>> state_;
};

template <>
class promise<void> {
public:
	promise() : state_(wm::make_shared<detail::future_state<void>>()) {}
	promise(const promise&) = delete;
	promise& operator=(const promise&) = delete;
	promise(promise&&) noexcept = default;
	promise& operator=(promise&&) noexcept = default;

	future<void> get_future() {
		if (!state_) {
			__builtin_trap();
		}
		return future<void>(state_);
	}

	void set_value() {
		if (!state_) {
			__builtin_trap();
		}
		state_->set_value();
	}

private:
	wm::shared_ptr<detail::future_state<void>> state_;
};

template <typename R>
class packaged_task<R()> {
public:
	packaged_task() noexcept = default;

	template <typename Callable>
	explicit packaged_task(Callable&& callable)
		: callable_(wm::forward<Callable>(callable)), state_(wm::make_shared<detail::future_state<R>>()) {}

	packaged_task(const packaged_task&) = delete;
	packaged_task& operator=(const packaged_task&) = delete;
	packaged_task(packaged_task&&) noexcept = default;
	packaged_task& operator=(packaged_task&&) noexcept = default;

	explicit operator bool() const noexcept {
		return static_cast<bool>(callable_) && static_cast<bool>(state_);
	}

	future<R> get_future() {
		if (!state_) {
			__builtin_trap();
		}
		return future<R>(state_);
	}

	void operator()() {
		if (!callable_ || !state_) {
			__builtin_trap();
		}
		if constexpr (wm::is_same<R, void>::value) {
			callable_();
			state_->set_value();
		} else {
			state_->set_value(callable_());
		}
	}

	void reset() {
		state_ = wm::make_shared<detail::future_state<R>>();
	}

private:
	wm::function<R()> callable_{};
	wm::shared_ptr<detail::future_state<R>> state_{};
};

template <typename T>
future<remove_reference_t<T>> make_ready_future(T&& value) {
	promise<remove_reference_t<T>> result;
	future<remove_reference_t<T>> ready = result.get_future();
	result.set_value(wm::forward<T>(value));
	return ready;
}

inline future<void> make_ready_future() {
	promise<void> result;
	future<void> ready = result.get_future();
	result.set_value();
	return ready;
}

template <typename Fn>
auto async(Fn&& fn) -> future<typename invoke_result<Fn>::type> {
	using result_type = typename invoke_result<Fn>::type;
	packaged_task<result_type()> task(wm::forward<Fn>(fn));
	future<result_type> result = task.get_future();
	task();
	return result;
}

template <typename Fn>
auto async(launch, Fn&& fn) -> future<typename invoke_result<Fn>::type> {
	return wm::async(wm::forward<Fn>(fn));
}

enum regex_flag {
	regex_default = 0,
	regex_icase = 1
};

class regex_error : public runtime_error {
public:
	using runtime_error::runtime_error;
};

struct regex_match_result {
	bool matched{false};
	size_t position{string::npos};
	size_t length{0};
};

class regex {
public:
	using flag_type = unsigned;
	static constexpr flag_type ECMAScript = regex_default;
	static constexpr flag_type icase = regex_icase;

	regex() = default;
	explicit regex(string_view pattern, unsigned flags = regex_default) : pattern_(pattern), flags_(flags) {}

	const string& pattern() const noexcept { return pattern_; }
	unsigned flags() const noexcept { return flags_; }

private:
	string pattern_{};
	unsigned flags_{regex_default};
};

namespace detail {

inline char regex_fold(char value, unsigned flags) noexcept {
	if ((flags & regex_icase) && value >= 'A' && value <= 'Z') {
		return (char)(value + ('a' - 'A'));
	}
	return value;
}

inline bool regex_char_equal(char left, char right, unsigned flags) noexcept {
	return regex_fold(left, flags) == regex_fold(right, flags);
}

inline size_t regex_class_end(string_view pattern, size_t begin) noexcept {
	for (size_t i = begin + 1; i < pattern.size(); ++i) {
		if (pattern[i] == '\\') {
			++i;
			continue;
		}
		if (pattern[i] == ']') {
			return i;
		}
	}
	return string::npos;
}

inline bool regex_class_contains(string_view pattern, size_t begin, size_t end, char value, unsigned flags) noexcept {
	bool invert = false;
	size_t cursor = begin + 1;
	if (cursor < end && pattern[cursor] == '^') {
		invert = true;
		++cursor;
	}

	bool matched = false;
	while (cursor < end) {
		char first = pattern[cursor++];
		if (first == '\\' && cursor < end) {
			first = pattern[cursor++];
		}
		if (cursor + 1 < end && pattern[cursor] == '-') {
			++cursor;
			char last = pattern[cursor++];
			if (last == '\\' && cursor < end) {
				last = pattern[cursor++];
			}
			const char folded_value = regex_fold(value, flags);
			const char folded_first = regex_fold(first, flags);
			const char folded_last = regex_fold(last, flags);
			if (folded_first <= folded_last) {
				matched = matched || (folded_value >= folded_first && folded_value <= folded_last);
			} else {
				matched = matched || (folded_value >= folded_last && folded_value <= folded_first);
			}
		} else if (regex_char_equal(first, value, flags)) {
			matched = true;
		}
	}
	return invert ? !matched : matched;
}

inline bool regex_atom_matches(string_view pattern, size_t position, char value, unsigned flags, size_t* next) noexcept {
	if (position >= pattern.size()) {
		return false;
	}

	const char token = pattern[position];
	if (token == '.') {
		*next = position + 1;
		return true;
	}
	if (token == '\\') {
		if (position + 1 >= pattern.size()) {
			*next = position + 1;
			return regex_char_equal('\\', value, flags);
		}
		*next = position + 2;
		return regex_char_equal(pattern[position + 1], value, flags);
	}
	if (token == '[') {
		const size_t end = regex_class_end(pattern, position);
		if (end != string::npos) {
			*next = end + 1;
			return regex_class_contains(pattern, position, end, value, flags);
		}
	}

	*next = position + 1;
	return regex_char_equal(token, value, flags);
}

inline bool regex_match_here(
	string_view pattern,
	size_t pattern_position,
	string_view text,
	size_t text_position,
	unsigned flags,
	size_t* out_end) noexcept {
	if (pattern_position == pattern.size()) {
		*out_end = text_position;
		return true;
	}
	if (pattern[pattern_position] == '$' && pattern_position + 1 == pattern.size()) {
		if (text_position == text.size()) {
			*out_end = text_position;
			return true;
		}
		return false;
	}

	size_t atom_end = pattern_position;
	const bool can_match =
		text_position < text.size() &&
		regex_atom_matches(pattern, pattern_position, text[text_position], flags, &atom_end);
	const char quantifier = atom_end < pattern.size() ? pattern[atom_end] : '\0';

	if (quantifier == '?' || quantifier == '*' || quantifier == '+') {
		const size_t rest = atom_end + 1;
		if (quantifier == '?' || quantifier == '*') {
			if (regex_match_here(pattern, rest, text, text_position, flags, out_end)) {
				return true;
			}
		}
		if (!can_match) {
			return false;
		}

		size_t consumed = text_position;
		do {
			++consumed;
			size_t ignored_next = atom_end;
			if (consumed >= text.size() ||
				!regex_atom_matches(pattern, pattern_position, text[consumed], flags, &ignored_next)) {
				break;
			}
		} while (quantifier == '*' || quantifier == '+');

		for (size_t candidate = consumed; candidate > text_position; --candidate) {
			if (regex_match_here(pattern, rest, text, candidate, flags, out_end)) {
				return true;
			}
			if (quantifier == '?') {
				break;
			}
		}
		return false;
	}

	if (!can_match) {
		return false;
	}
	return regex_match_here(pattern, atom_end, text, text_position + 1, flags, out_end);
}

} // namespace detail

inline bool regex_search(string_view text, const regex& pattern, regex_match_result* result = nullptr) noexcept {
	const string_view expression = pattern.pattern();
	const unsigned flags = pattern.flags();
	const bool anchored = !expression.empty() && expression[0] == '^';
	const size_t start_pattern = anchored ? 1 : 0;
	const size_t last_start = anchored ? 0 : text.size();

	for (size_t start = 0; start <= last_start; ++start) {
		size_t end = start;
		if (detail::regex_match_here(expression, start_pattern, text, start, flags, &end)) {
			if (result) {
				result->matched = true;
				result->position = start;
				result->length = end - start;
			}
			return true;
		}
		if (anchored) {
			break;
		}
	}

	if (result) {
		*result = regex_match_result{};
	}
	return false;
}

inline bool regex_match(string_view text, const regex& pattern, regex_match_result* result = nullptr) noexcept {
	regex_match_result local;
	if (!wm::regex_search(text, pattern, &local)) {
		if (result) {
			*result = regex_match_result{};
		}
		return false;
	}
	if (local.position == 0 && local.length == text.size()) {
		if (result) {
			*result = local;
		}
		return true;
	}
	if (result) {
		*result = regex_match_result{};
	}
	return false;
}

template <typename Iterator>
class sub_match {
public:
	Iterator first{};
	Iterator second{};
	bool matched{false};

	string str() const {
		return matched ? string(first, (size_t)(second - first)) : string();
	}
};

template <typename Iterator>
class match_results {
public:
	using value_type = sub_match<Iterator>;

	match_results() = default;

	bool empty() const noexcept {
		return matches_.empty();
	}

	size_t size() const noexcept {
		return matches_.size();
	}

	const value_type& operator[](size_t index) const noexcept {
		return matches_[index];
	}

	value_type& operator[](size_t index) noexcept {
		return matches_[index];
	}

	string str(size_t index = 0) const {
		return index < matches_.size() ? matches_[index].str() : string();
	}

	ptrdiff_t position(size_t index = 0) const {
		return index < matches_.size() && matches_[index].matched
			? (ptrdiff_t)(matches_[index].first - search_begin_)
			: (ptrdiff_t)-1;
	}

	ptrdiff_t length(size_t index = 0) const {
		return index < matches_.size() && matches_[index].matched
			? (ptrdiff_t)(matches_[index].second - matches_[index].first)
			: 0;
	}

	void clear() {
		matches_.clear();
		search_begin_ = Iterator{};
		search_end_ = Iterator{};
	}

	void set_match(Iterator search_begin, Iterator search_end, size_t position, size_t length) {
		search_begin_ = search_begin;
		search_end_ = search_end;
		matches_.clear();
		value_type whole;
		whole.first = search_begin + (ptrdiff_t)position;
		whole.second = whole.first + (ptrdiff_t)length;
		whole.matched = true;
		matches_.push_back(whole);
	}

private:
	Iterator search_begin_{};
	Iterator search_end_{};
	vector<value_type> matches_{};
};

using smatch = match_results<string::const_iterator>;

template <typename Iterator>
bool regex_search(Iterator first, Iterator last, match_results<Iterator>& match, const regex& pattern) {
	const string_view text(first, (size_t)(last - first));
	regex_match_result result;
	if (!wm::regex_search(text, pattern, &result)) {
		match.clear();
		return false;
	}
	match.set_match(first, last, result.position, result.length);
	return true;
}

inline bool regex_search(const string& text, smatch& match, const regex& pattern) {
	return wm::regex_search(text.begin(), text.end(), match, pattern);
}

inline bool regex_match(const string& text, smatch& match, const regex& pattern) {
	if (!wm::regex_search(text.begin(), text.end(), match, pattern)) {
		return false;
	}
	if (match.position(0) != 0 || (size_t)match.length(0) != text.size()) {
		match.clear();
		return false;
	}
	return true;
}

class sregex_iterator {
public:
	using iterator = string::const_iterator;
	using value_type = smatch;

	sregex_iterator() noexcept : current_(nullptr), end_(nullptr), pattern_(nullptr), done_(true) {}

	sregex_iterator(iterator first, iterator last, const regex& pattern)
		: current_(first), end_(last), pattern_(&pattern), done_(false) {
		find_next();
	}

	const smatch& operator*() const noexcept {
		return match_;
	}

	const smatch* operator->() const noexcept {
		return &match_;
	}

	sregex_iterator& operator++() {
		if (done_) {
			return *this;
		}
		iterator next = match_[0].second;
		if (next == current_ && next != end_) {
			++next;
		}
		current_ = next;
		find_next();
		return *this;
	}

	bool operator==(const sregex_iterator& other) const noexcept {
		if (done_ && other.done_) {
			return true;
		}
		return done_ == other.done_ && current_ == other.current_ && end_ == other.end_ && pattern_ == other.pattern_;
	}

	bool operator!=(const sregex_iterator& other) const noexcept {
		return !(*this == other);
	}

private:
	void find_next() {
		if (!pattern_ || current_ > end_ || !wm::regex_search(current_, end_, match_, *pattern_)) {
			done_ = true;
			return;
		}
		done_ = false;
	}

	iterator current_;
	iterator end_;
	const regex* pattern_;
	smatch match_;
	bool done_;
};

template <typename T>
class queue {
public:
	using value_type = T;
	using size_type = size_t;
	using reference = T&;
	using const_reference = const T&;

	queue() : head_(nullptr), tail_(nullptr), count_(0) {}

	queue(const queue& other) : queue() {
		for (node* item = other.head_; item; item = item->next) {
			push(item->value);
		}
	}

	queue(queue&& other) noexcept : head_(other.head_), tail_(other.tail_), count_(other.count_) {
		other.head_ = nullptr;
		other.tail_ = nullptr;
		other.count_ = 0;
	}

	queue& operator=(const queue& other) {
		if (this != &other) {
			queue copy(other);
			swap(copy);
		}
		return *this;
	}

	queue& operator=(queue&& other) noexcept {
		if (this != &other) {
			clear();
			head_ = other.head_;
			tail_ = other.tail_;
			count_ = other.count_;
			other.head_ = nullptr;
			other.tail_ = nullptr;
			other.count_ = 0;
		}
		return *this;
	}

	~queue() {
		clear();
	}

	bool empty() const noexcept {
		return head_ == nullptr;
	}

	size_t size() const noexcept {
		return count_;
	}

	reference front() noexcept {
		return head_->value;
	}

	const_reference front() const noexcept {
		return head_->value;
	}

	reference back() noexcept {
		return tail_->value;
	}

	const_reference back() const noexcept {
		return tail_->value;
	}

	void push(const T& value) {
		emplace(value);
	}

	void push(T&& value) {
		emplace(wm::move(value));
	}

	template <typename... Args>
	void emplace(Args&&... args) {
		node* item = new node(wm::forward<Args>(args)...);
		if (tail_) {
			tail_->next = item;
		} else {
			head_ = item;
		}
		tail_ = item;
		++count_;
	}

	void pop() noexcept {
		if (!head_) {
			return;
		}
		node* item = head_;
		head_ = head_->next;
		if (!head_) {
			tail_ = nullptr;
		}
		delete item;
		--count_;
	}

	void clear() noexcept {
		while (head_) {
			pop();
		}
	}

	void swap(queue& other) noexcept {
		node* old_head = head_;
		node* old_tail = tail_;
		size_t old_count = count_;
		head_ = other.head_;
		tail_ = other.tail_;
		count_ = other.count_;
		other.head_ = old_head;
		other.tail_ = old_tail;
		other.count_ = old_count;
	}

private:
	template <typename U>
	friend bool operator==(const queue<U>& left, const queue<U>& right);

	struct node {
		template <typename... Args>
		explicit node(Args&&... args) : value(wm::forward<Args>(args)...), next(nullptr) {}

		T value;
		node* next;
	};

	node* head_;
	node* tail_;
	size_t count_;
};

template <typename T>
bool operator==(const queue<T>& left, const queue<T>& right) {
	if (left.count_ != right.count_) {
		return false;
	}
	auto* left_item = left.head_;
	auto* right_item = right.head_;
	while (left_item) {
		if (!(left_item->value == right_item->value)) {
			return false;
		}
		left_item = left_item->next;
		right_item = right_item->next;
	}
	return true;
}

template <typename T>
bool operator!=(const queue<T>& left, const queue<T>& right) {
	return !(left == right);
}

template <typename T, typename Container = deque<T>>
class stack {
public:
	using value_type = typename Container::value_type;
	using size_type = typename Container::size_type;
	using reference = typename Container::reference;
	using const_reference = typename Container::const_reference;
	using container_type = Container;

	stack() = default;
	explicit stack(const Container& container) : values_(container) {}
	explicit stack(Container&& container) : values_(wm::move(container)) {}

	bool empty() const noexcept {
		return values_.empty();
	}

	size_type size() const noexcept {
		return values_.size();
	}

	reference top() noexcept {
		return values_.back();
	}

	const_reference top() const noexcept {
		return values_.back();
	}

	void push(const value_type& value) {
		values_.push_back(value);
	}

	void push(value_type&& value) {
		values_.push_back(wm::move(value));
	}

	template <typename... Args>
	reference emplace(Args&&... args) {
		return values_.emplace_back(wm::forward<Args>(args)...);
	}

	void pop() {
		values_.pop_back();
	}

	void swap(stack& other) noexcept {
		values_.swap(other.values_);
	}

protected:
	template <typename U, typename OtherContainer>
	friend bool operator==(const stack<U, OtherContainer>& left, const stack<U, OtherContainer>& right);

	template <typename U, typename OtherContainer>
	friend bool operator!=(const stack<U, OtherContainer>& left, const stack<U, OtherContainer>& right);

	Container values_;
};

template <typename T, typename Container>
bool operator==(const stack<T, Container>& left, const stack<T, Container>& right) {
	if (left.values_.size() != right.values_.size()) {
		return false;
	}
	for (size_t i = 0; i < left.values_.size(); ++i) {
		if (!(left.values_[i] == right.values_[i])) {
			return false;
		}
	}
	return true;
}

template <typename T, typename Container>
bool operator!=(const stack<T, Container>& left, const stack<T, Container>& right) {
	return !(left == right);
}

template <typename T>
class small_set {
	struct node;

public:
	class iterator {
	public:
		iterator() : node_(nullptr) {}

		T& operator*() const noexcept { return node_->value; }
		T* operator->() const noexcept { return &node_->value; }

		bool operator==(const iterator& other) const noexcept { return node_ == other.node_; }
		bool operator!=(const iterator& other) const noexcept { return node_ != other.node_; }

	private:
		friend class small_set;

		explicit iterator(node* item) : node_(item) {}

		node* node_;
	};

	small_set() : head_(nullptr), count_(0) {}

	small_set(const small_set&) = delete;
	small_set& operator=(const small_set&) = delete;

	~small_set() {
		clear();
	}

	bool empty() const noexcept {
		return head_ == nullptr;
	}

	size_t size() const noexcept {
		return count_;
	}

	iterator end() const noexcept {
		return iterator(nullptr);
	}

	iterator find(const T& value) const noexcept {
		node* item = head_;
		while (item) {
			if (item->value == value) {
				return iterator(item);
			}
			item = item->next;
		}
		return end();
	}

	void insert(const T& value) {
		if (find(value) != end()) {
			return;
		}
		head_ = new node(value, head_);
		++count_;
	}

	void erase(iterator position) noexcept {
		if (position == end()) {
			return;
		}
		node* previous = nullptr;
		node* item = head_;
		while (item && item != position.node_) {
			previous = item;
			item = item->next;
		}
		if (!item) {
			return;
		}
		if (previous) {
			previous->next = item->next;
		} else {
			head_ = item->next;
		}
		delete item;
		--count_;
	}

	void clear() noexcept {
		while (head_) {
			node* item = head_;
			head_ = head_->next;
			delete item;
		}
		count_ = 0;
	}

private:
	struct node {
		node(const T& itemValue, node* nextItem) : value(itemValue), next(nextItem) {}

		T value;
		node* next;
	};

	node* head_;
	size_t count_;
};

template <typename T>
constexpr T min(const T& left, const T& right) {
	return right < left ? right : left;
}

template <typename T, typename Compare>
constexpr T min(const T& left, const T& right, Compare compare) {
	return compare(right, left) ? right : left;
}

template <typename T>
constexpr T min(std::initializer_list<T> values) {
	auto it = values.begin();
	T result = *it;
	for (++it; it != values.end(); ++it) {
		if (*it < result) {
			result = *it;
		}
	}
	return result;
}

template <typename T, typename Compare>
constexpr T min(std::initializer_list<T> values, Compare compare) {
	auto it = values.begin();
	T result = *it;
	for (++it; it != values.end(); ++it) {
		if (compare(*it, result)) {
			result = *it;
		}
	}
	return result;
}

template <typename T>
constexpr T max(const T& left, const T& right) {
	return left < right ? right : left;
}

template <typename T, typename Compare>
constexpr T max(const T& left, const T& right, Compare compare) {
	return compare(left, right) ? right : left;
}

template <typename T>
constexpr T max(std::initializer_list<T> values) {
	auto it = values.begin();
	T result = *it;
	for (++it; it != values.end(); ++it) {
		if (result < *it) {
			result = *it;
		}
	}
	return result;
}

template <typename T, typename Compare>
constexpr T max(std::initializer_list<T> values, Compare compare) {
	auto it = values.begin();
	T result = *it;
	for (++it; it != values.end(); ++it) {
		if (compare(result, *it)) {
			result = *it;
		}
	}
	return result;
}

template <typename T>
constexpr pair<const T&, const T&> minmax(const T& left, const T& right) {
	return right < left ? pair<const T&, const T&>(right, left) : pair<const T&, const T&>(left, right);
}

template <typename T, typename Compare>
constexpr pair<const T&, const T&> minmax(const T& left, const T& right, Compare compare) {
	return compare(right, left) ? pair<const T&, const T&>(right, left) : pair<const T&, const T&>(left, right);
}

template <typename T>
constexpr pair<T, T> minmax(std::initializer_list<T> values) {
	auto it = values.begin();
	T minimum = *it;
	T maximum = *it;
	for (++it; it != values.end(); ++it) {
		if (*it < minimum) {
			minimum = *it;
		}
		if (maximum < *it) {
			maximum = *it;
		}
	}
	return pair<T, T>(minimum, maximum);
}

template <typename T, typename Compare>
constexpr pair<T, T> minmax(std::initializer_list<T> values, Compare compare) {
	auto it = values.begin();
	T minimum = *it;
	T maximum = *it;
	for (++it; it != values.end(); ++it) {
		if (compare(*it, minimum)) {
			minimum = *it;
		}
		if (compare(maximum, *it)) {
			maximum = *it;
		}
	}
	return pair<T, T>(minimum, maximum);
}

template <typename T>
constexpr T clamp(const T& value, const T& low, const T& high) {
	return value < low ? low : (high < value ? high : value);
}

template <typename T, typename Compare>
constexpr T clamp(const T& value, const T& low, const T& high, Compare compare) {
	return compare(value, low) ? low : (compare(high, value) ? high : value);
}

template <typename T>
constexpr T abs(T value) {
	return value < static_cast<T>(0) ? -value : value;
}

template <typename T>
constexpr T integral_abs(T value) {
	if constexpr (static_cast<T>(-1) < static_cast<T>(0)) {
		return value < static_cast<T>(0) ? -value : value;
	} else {
		return value;
	}
}

template <typename A, typename B>
constexpr auto gcd(A left, B right) {
	using result_type = decltype(left + right);
	result_type a = integral_abs(static_cast<result_type>(left));
	result_type b = integral_abs(static_cast<result_type>(right));
	while (b != static_cast<result_type>(0)) {
		result_type remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}

template <typename A, typename B>
constexpr auto lcm(A left, B right) {
	using result_type = decltype(left + right);
	result_type a = integral_abs(static_cast<result_type>(left));
	result_type b = integral_abs(static_cast<result_type>(right));
	if (a == static_cast<result_type>(0) || b == static_cast<result_type>(0)) {
		return static_cast<result_type>(0);
	}
	return integral_abs(static_cast<result_type>((a / gcd(a, b)) * b));
}

template <typename T>
void swap(T& left, T& right) {
	T tmp = wm::move(left);
	left = wm::move(right);
	right = wm::move(tmp);
}

template <typename ForwardIt1, typename ForwardIt2>
ForwardIt2 swap_ranges(ForwardIt1 first1, ForwardIt1 last1, ForwardIt2 first2) {
	for (; first1 != last1; ++first1, ++first2) {
		wm::swap(*first1, *first2);
	}
	return first2;
}

template <typename InputIt, typename OutputIt>
OutputIt copy(InputIt first, InputIt last, OutputIt out) {
	while (first != last) {
		*out = *first;
		++out;
		++first;
	}
	return out;
}

template <typename InputIt, typename Size, typename OutputIt>
OutputIt copy_n(InputIt first, Size count, OutputIt out) {
	for (Size i = 0; i < count; ++i) {
		*out = *first;
		++out;
		++first;
	}
	return out;
}

template <typename InputIt, typename OutputIt>
OutputIt move(InputIt first, InputIt last, OutputIt out) {
	while (first != last) {
		*out = wm::move(*first);
		++out;
		++first;
	}
	return out;
}

template <typename InputIt, typename OutputIt, typename Predicate>
OutputIt copy_if(InputIt first, InputIt last, OutputIt out, Predicate predicate) {
	while (first != last) {
		if (predicate(*first)) {
			*out = *first;
			++out;
		}
		++first;
	}
	return out;
}

template <typename InputIt, typename OutputIt, typename Predicate>
OutputIt remove_copy_if(InputIt first, InputIt last, OutputIt out, Predicate predicate) {
	while (first != last) {
		if (!predicate(*first)) {
			*out = *first;
			++out;
		}
		++first;
	}
	return out;
}

template <typename ForwardIt, typename T>
void fill(ForwardIt first, ForwardIt last, const T& value) {
	while (first != last) {
		*first = value;
		++first;
	}
}

template <typename OutputIt, typename Size, typename T>
OutputIt fill_n(OutputIt first, Size count, const T& value) {
	for (Size i = 0; i < count; ++i) {
		*first = value;
		++first;
	}
	return first;
}

template <typename ForwardIt, typename Generator>
void generate(ForwardIt first, ForwardIt last, Generator generator) {
	while (first != last) {
		*first = generator();
		++first;
	}
}

template <typename InputIt, typename Function>
Function for_each(InputIt first, InputIt last, Function function) {
	while (first != last) {
		function(*first);
		++first;
	}
	return function;
}

template <typename InputIt, typename T>
InputIt find(InputIt first, InputIt last, const T& value) {
	while (first != last) {
		if (*first == value) {
			break;
		}
		++first;
	}
	return first;
}

template <typename InputIt, typename Predicate>
InputIt find_if(InputIt first, InputIt last, Predicate predicate) {
	while (first != last) {
		if (predicate(*first)) {
			break;
		}
		++first;
	}
	return first;
}

template <typename InputIt, typename Predicate>
InputIt find_if_not(InputIt first, InputIt last, Predicate predicate) {
	while (first != last) {
		if (!predicate(*first)) {
			break;
		}
		++first;
	}
	return first;
}

template <typename ForwardIt1, typename ForwardIt2, typename BinaryPredicate>
ForwardIt1 find_first_of(ForwardIt1 first, ForwardIt1 last, ForwardIt2 search_first, ForwardIt2 search_last, BinaryPredicate predicate) {
	for (; first != last; ++first) {
		for (ForwardIt2 current = search_first; current != search_last; ++current) {
			if (predicate(*first, *current)) {
				return first;
			}
		}
	}
	return last;
}

template <typename ForwardIt1, typename ForwardIt2>
ForwardIt1 find_first_of(ForwardIt1 first, ForwardIt1 last, ForwardIt2 search_first, ForwardIt2 search_last) {
	return wm::find_first_of(first, last, search_first, search_last,
	                         [](const auto& left, const auto& right) { return left == right; });
}

template <typename InputIt, typename T>
ptrdiff_t count(InputIt first, InputIt last, const T& value) {
	ptrdiff_t result = 0;
	while (first != last) {
		if (*first == value) {
			++result;
		}
		++first;
	}
	return result;
}

template <typename InputIt, typename Predicate>
ptrdiff_t count_if(InputIt first, InputIt last, Predicate predicate) {
	ptrdiff_t result = 0;
	while (first != last) {
		if (predicate(*first)) {
			++result;
		}
		++first;
	}
	return result;
}

template <typename InputIt, typename Predicate>
bool all_of(InputIt first, InputIt last, Predicate predicate) {
	while (first != last) {
		if (!predicate(*first)) {
			return false;
		}
		++first;
	}
	return true;
}

template <typename InputIt, typename Predicate>
bool any_of(InputIt first, InputIt last, Predicate predicate) {
	while (first != last) {
		if (predicate(*first)) {
			return true;
		}
		++first;
	}
	return false;
}

template <typename InputIt, typename Predicate>
bool none_of(InputIt first, InputIt last, Predicate predicate) {
	return !wm::any_of(first, last, predicate);
}

template <typename InputIt, typename OutputIt, typename UnaryOperation>
OutputIt transform(InputIt first, InputIt last, OutputIt out, UnaryOperation operation) {
	while (first != last) {
		*out = operation(*first);
		++out;
		++first;
	}
	return out;
}

template <typename InputIt1, typename InputIt2, typename OutputIt, typename BinaryOperation>
OutputIt transform(InputIt1 first1, InputIt1 last1, InputIt2 first2, OutputIt out, BinaryOperation operation) {
	while (first1 != last1) {
		*out = operation(*first1, *first2);
		++out;
		++first1;
		++first2;
	}
	return out;
}

template <typename InputIt>
ptrdiff_t distance(InputIt first, InputIt last) {
	ptrdiff_t result = 0;
	while (first != last) {
		++first;
		++result;
	}
	return result;
}

template <typename InputIt1, typename InputIt2>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2) {
	while (first1 != last1) {
		if (!(*first1 == *first2)) {
			return false;
		}
		++first1;
		++first2;
	}
	return true;
}

template <typename InputIt1, typename InputIt2, typename BinaryPredicate>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, BinaryPredicate predicate) {
	while (first1 != last1) {
		if (!predicate(*first1, *first2)) {
			return false;
		}
		++first1;
		++first2;
	}
	return true;
}

template <typename InputIt1, typename InputIt2>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2) {
	while (first1 != last1 && first2 != last2) {
		if (!(*first1 == *first2)) {
			return false;
		}
		++first1;
		++first2;
	}
	return first1 == last1 && first2 == last2;
}

template <typename InputIt1, typename InputIt2, typename BinaryPredicate>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, BinaryPredicate predicate) {
	while (first1 != last1 && first2 != last2) {
		if (!predicate(*first1, *first2)) {
			return false;
		}
		++first1;
		++first2;
	}
	return first1 == last1 && first2 == last2;
}

template <typename InputIt1, typename InputIt2>
pair<InputIt1, InputIt2> mismatch(InputIt1 first1, InputIt1 last1, InputIt2 first2) {
	while (first1 != last1 && *first1 == *first2) {
		++first1;
		++first2;
	}
	return pair<InputIt1, InputIt2>(first1, first2);
}

template <typename InputIt1, typename InputIt2>
pair<InputIt1, InputIt2> mismatch(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2) {
	while (first1 != last1 && first2 != last2 && *first1 == *first2) {
		++first1;
		++first2;
	}
	return pair<InputIt1, InputIt2>(first1, first2);
}

template <typename InputIt1, typename InputIt2, typename BinaryPredicate>
auto mismatch(InputIt1 first1, InputIt1 last1, InputIt2 first2, BinaryPredicate predicate)
	-> enable_if_t<!is_same<decay_t<BinaryPredicate>, decay_t<InputIt2>>::value, pair<InputIt1, InputIt2>> {
	while (first1 != last1 && predicate(*first1, *first2)) {
		++first1;
		++first2;
	}
	return pair<InputIt1, InputIt2>(first1, first2);
}

template <typename InputIt1, typename InputIt2, typename BinaryPredicate>
pair<InputIt1, InputIt2> mismatch(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, BinaryPredicate predicate) {
	while (first1 != last1 && first2 != last2 && predicate(*first1, *first2)) {
		++first1;
		++first2;
	}
	return pair<InputIt1, InputIt2>(first1, first2);
}

template <typename ForwardIt1, typename ForwardIt2>
bool is_permutation(ForwardIt1 first1, ForwardIt1 last1, ForwardIt2 first2) {
	const ptrdiff_t length = wm::distance(first1, last1);
	for (ForwardIt1 scan = first1; scan != last1; ++scan) {
		if (wm::find(first1, scan, *scan) != scan) {
			continue;
		}
		ptrdiff_t left_count = 0;
		ptrdiff_t right_count = 0;
		ForwardIt2 right = first2;
		for (ForwardIt1 left = first1; left != last1; ++left, ++right) {
			if (*left == *scan) {
				++left_count;
			}
			if (*right == *scan) {
				++right_count;
			}
		}
		if (left_count != right_count) {
			return false;
		}
	}
	(void)length;
	return true;
}

template <typename ForwardIt1, typename ForwardIt2>
bool is_permutation(ForwardIt1 first1, ForwardIt1 last1, ForwardIt2 first2, ForwardIt2 last2) {
	if (wm::distance(first1, last1) != wm::distance(first2, last2)) {
		return false;
	}
	return wm::is_permutation(first1, last1, first2);
}

template <typename ForwardIt, typename T>
void replace(ForwardIt first, ForwardIt last, const T& old_value, const T& new_value) {
	while (first != last) {
		if (*first == old_value) {
			*first = new_value;
		}
		++first;
	}
}

template <typename ForwardIt, typename Predicate, typename T>
void replace_if(ForwardIt first, ForwardIt last, Predicate predicate, const T& new_value) {
	while (first != last) {
		if (predicate(*first)) {
			*first = new_value;
		}
		++first;
	}
}

template <typename InputIt, typename OutputIt, typename T>
OutputIt replace_copy(InputIt first, InputIt last, OutputIt out, const T& old_value, const T& new_value) {
	while (first != last) {
		*out = (*first == old_value) ? new_value : *first;
		++first;
		++out;
	}
	return out;
}

template <typename InputIt, typename OutputIt, typename Predicate, typename T>
OutputIt replace_copy_if(InputIt first, InputIt last, OutputIt out, Predicate predicate, const T& new_value) {
	while (first != last) {
		*out = predicate(*first) ? new_value : *first;
		++first;
		++out;
	}
	return out;
}

template <typename ForwardIt, typename T>
ForwardIt remove(ForwardIt first, ForwardIt last, const T& value) {
	ForwardIt result = first;
	while (first != last) {
		if (!(*first == value)) {
			*result = wm::move(*first);
			++result;
		}
		++first;
	}
	return result;
}

template <typename ForwardIt, typename Predicate>
ForwardIt remove_if(ForwardIt first, ForwardIt last, Predicate predicate) {
	ForwardIt result = first;
	while (first != last) {
		if (!predicate(*first)) {
			*result = wm::move(*first);
			++result;
		}
		++first;
	}
	return result;
}

template <typename ForwardIt, typename BinaryPredicate>
ForwardIt unique(ForwardIt first, ForwardIt last, BinaryPredicate predicate) {
	if (first == last) {
		return last;
	}
	ForwardIt result = first;
	while (++first != last) {
		if (!predicate(*result, *first)) {
			++result;
			*result = wm::move(*first);
		}
	}
	return ++result;
}

template <typename ForwardIt>
ForwardIt unique(ForwardIt first, ForwardIt last) {
	return wm::unique(first, last, [](const auto& left, const auto& right) { return left == right; });
}

template <typename InputIt, typename OutputIt, typename BinaryPredicate>
OutputIt unique_copy(InputIt first, InputIt last, OutputIt out, BinaryPredicate predicate) {
	if (first == last) {
		return out;
	}
	auto value = *first;
	*out = value;
	++out;
	while (++first != last) {
		if (!predicate(value, *first)) {
			value = *first;
			*out = value;
			++out;
		}
	}
	return out;
}

template <typename InputIt, typename OutputIt>
OutputIt unique_copy(InputIt first, InputIt last, OutputIt out) {
	return wm::unique_copy(first, last, out,
	                       [](const auto& left, const auto& right) { return left == right; });
}

template <typename BidirectionalIt>
void reverse(BidirectionalIt first, BidirectionalIt last) {
	while (first != last) {
		--last;
		if (first == last) {
			break;
		}
		wm::swap(*first, *last);
		++first;
	}
}

template <typename BidirectionalIt, typename OutputIt>
OutputIt reverse_copy(BidirectionalIt first, BidirectionalIt last, OutputIt out) {
	while (first != last) {
		--last;
		*out = *last;
		++out;
	}
	return out;
}

template <typename BidirectionalIt1, typename BidirectionalIt2>
BidirectionalIt2 copy_backward(BidirectionalIt1 first, BidirectionalIt1 last, BidirectionalIt2 d_last) {
	while (first != last) {
		--last;
		--d_last;
		*d_last = *last;
	}
	return d_last;
}

template <typename BidirectionalIt1, typename BidirectionalIt2>
BidirectionalIt2 move_backward(BidirectionalIt1 first, BidirectionalIt1 last, BidirectionalIt2 d_last) {
	while (first != last) {
		--last;
		--d_last;
		*d_last = wm::move(*last);
	}
	return d_last;
}

template <typename ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt middle, ForwardIt last) {
	const ptrdiff_t tail_count = wm::distance(middle, last);
	wm::reverse(first, middle);
	wm::reverse(middle, last);
	wm::reverse(first, last);
	wm::advance(first, tail_count);
	return first;
}

template <typename BidirectionalIt, typename Predicate>
BidirectionalIt stable_partition(BidirectionalIt first, BidirectionalIt last, Predicate predicate) {
	const ptrdiff_t count = wm::distance(first, last);
	if (count == 0) {
		return first;
	}
	if (count == 1) {
		return predicate(*first) ? last : first;
	}

	BidirectionalIt middle = first;
	wm::advance(middle, count / 2);
	BidirectionalIt left = wm::stable_partition(first, middle, predicate);
	BidirectionalIt right = wm::stable_partition(middle, last, predicate);
	return wm::rotate(left, middle, right);
}

template <typename ForwardIt, typename T, typename Compare>
ForwardIt lower_bound(ForwardIt first, ForwardIt last, const T& value, Compare compare) {
	ptrdiff_t count = wm::distance(first, last);
	while (count > 0) {
		ForwardIt it = first;
		const ptrdiff_t step = count / 2;
		for (ptrdiff_t i = 0; i < step; ++i) {
			++it;
		}
		if (compare(*it, value)) {
			first = ++it;
			count -= step + 1;
		} else {
			count = step;
		}
	}
	return first;
}

template <typename ForwardIt, typename T>
ForwardIt lower_bound(ForwardIt first, ForwardIt last, const T& value) {
	return wm::lower_bound(first, last, value, [](const auto& left, const auto& right) { return left < right; });
}

template <typename ForwardIt, typename T, typename Compare>
ForwardIt upper_bound(ForwardIt first, ForwardIt last, const T& value, Compare compare) {
	ptrdiff_t count = wm::distance(first, last);
	while (count > 0) {
		ForwardIt it = first;
		const ptrdiff_t step = count / 2;
		for (ptrdiff_t i = 0; i < step; ++i) {
			++it;
		}
		if (!compare(value, *it)) {
			first = ++it;
			count -= step + 1;
		} else {
			count = step;
		}
	}
	return first;
}

template <typename ForwardIt, typename T>
ForwardIt upper_bound(ForwardIt first, ForwardIt last, const T& value) {
	return wm::upper_bound(first, last, value, [](const auto& left, const auto& right) { return left < right; });
}

template <typename ForwardIt, typename T, typename Compare>
pair<ForwardIt, ForwardIt> equal_range(ForwardIt first, ForwardIt last, const T& value, Compare compare) {
	ForwardIt lower = wm::lower_bound(first, last, value, compare);
	ForwardIt upper = wm::upper_bound(lower, last, value, compare);
	return pair<ForwardIt, ForwardIt>(lower, upper);
}

template <typename ForwardIt, typename T>
pair<ForwardIt, ForwardIt> equal_range(ForwardIt first, ForwardIt last, const T& value) {
	return wm::equal_range(first, last, value, [](const auto& left, const auto& right) { return left < right; });
}

template <typename ForwardIt, typename T, typename Compare>
bool binary_search(ForwardIt first, ForwardIt last, const T& value, Compare compare) {
	first = wm::lower_bound(first, last, value, compare);
	return first != last && !compare(value, *first);
}

template <typename ForwardIt, typename T>
bool binary_search(ForwardIt first, ForwardIt last, const T& value) {
	return wm::binary_search(first, last, value, [](const auto& left, const auto& right) { return left < right; });
}

template <typename ForwardIt, typename Compare>
bool is_sorted(ForwardIt first, ForwardIt last, Compare compare) {
	if (first == last) {
		return true;
	}
	ForwardIt next_it = first;
	while (++next_it != last) {
		if (compare(*next_it, *first)) {
			return false;
		}
		first = next_it;
	}
	return true;
}

template <typename ForwardIt>
bool is_sorted(ForwardIt first, ForwardIt last) {
	return wm::is_sorted(first, last, [](const auto& left, const auto& right) { return left < right; });
}

template <typename ForwardIt, typename Compare>
ForwardIt min_element(ForwardIt first, ForwardIt last, Compare compare) {
	if (first == last) {
		return last;
	}
	ForwardIt best = first;
	while (++first != last) {
		if (compare(*first, *best)) {
			best = first;
		}
	}
	return best;
}

template <typename ForwardIt>
ForwardIt min_element(ForwardIt first, ForwardIt last) {
	return wm::min_element(first, last, [](const auto& left, const auto& right) { return left < right; });
}

template <typename ForwardIt, typename Compare>
ForwardIt max_element(ForwardIt first, ForwardIt last, Compare compare) {
	if (first == last) {
		return last;
	}
	ForwardIt best = first;
	while (++first != last) {
		if (compare(*best, *first)) {
			best = first;
		}
	}
	return best;
}

template <typename ForwardIt>
ForwardIt max_element(ForwardIt first, ForwardIt last) {
	return wm::max_element(first, last, [](const auto& left, const auto& right) { return left < right; });
}

template <typename ForwardIt, typename Compare>
pair<ForwardIt, ForwardIt> minmax_element(ForwardIt first, ForwardIt last, Compare compare) {
	if (first == last) {
		return pair<ForwardIt, ForwardIt>(last, last);
	}
	ForwardIt minimum = first;
	ForwardIt maximum = first;
	while (++first != last) {
		if (compare(*first, *minimum)) {
			minimum = first;
		}
		if (!compare(*first, *maximum)) {
			maximum = first;
		}
	}
	return pair<ForwardIt, ForwardIt>(minimum, maximum);
}

template <typename ForwardIt>
pair<ForwardIt, ForwardIt> minmax_element(ForwardIt first, ForwardIt last) {
	return wm::minmax_element(first, last, [](const auto& left, const auto& right) { return left < right; });
}

template <typename InputIt1, typename InputIt2, typename Compare>
bool lexicographical_compare(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, Compare compare) {
	for (; first1 != last1 && first2 != last2; ++first1, ++first2) {
		if (compare(*first1, *first2)) {
			return true;
		}
		if (compare(*first2, *first1)) {
			return false;
		}
	}
	return first1 == last1 && first2 != last2;
}

template <typename InputIt1, typename InputIt2>
bool lexicographical_compare(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2) {
	return wm::lexicographical_compare(first1, last1, first2, last2,
	                                  [](const auto& left, const auto& right) { return left < right; });
}

template <typename InputIt1, typename InputIt2, typename OutputIt, typename Compare>
OutputIt set_difference(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, OutputIt out, Compare compare) {
	while (first1 != last1) {
		if (first2 == last2) {
			return wm::copy(first1, last1, out);
		}
		if (compare(*first1, *first2)) {
			*out = *first1;
			++out;
			++first1;
		} else if (compare(*first2, *first1)) {
			++first2;
		} else {
			++first1;
			++first2;
		}
	}
	return out;
}

template <typename InputIt1, typename InputIt2, typename OutputIt>
OutputIt set_difference(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, OutputIt out) {
	return wm::set_difference(first1, last1, first2, last2, out,
	                          [](const auto& left, const auto& right) { return left < right; });
}

template <typename InputIt1, typename InputIt2, typename OutputIt, typename Compare>
OutputIt set_intersection(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, OutputIt out, Compare compare) {
	while (first1 != last1 && first2 != last2) {
		if (compare(*first1, *first2)) {
			++first1;
		} else if (compare(*first2, *first1)) {
			++first2;
		} else {
			*out = *first1;
			++out;
			++first1;
			++first2;
		}
	}
	return out;
}

template <typename InputIt1, typename InputIt2, typename OutputIt>
OutputIt set_intersection(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, OutputIt out) {
	return wm::set_intersection(first1, last1, first2, last2, out,
	                            [](const auto& left, const auto& right) { return left < right; });
}

template <typename InputIt1, typename InputIt2, typename OutputIt, typename Compare>
OutputIt set_union(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, OutputIt out, Compare compare) {
	while (first1 != last1 && first2 != last2) {
		if (compare(*first1, *first2)) {
			*out = *first1;
			++first1;
		} else if (compare(*first2, *first1)) {
			*out = *first2;
			++first2;
		} else {
			*out = *first1;
			++first1;
			++first2;
		}
		++out;
	}
	out = wm::copy(first1, last1, out);
	return wm::copy(first2, last2, out);
}

template <typename InputIt1, typename InputIt2, typename OutputIt>
OutputIt set_union(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, OutputIt out) {
	return wm::set_union(first1, last1, first2, last2, out,
	                     [](const auto& left, const auto& right) { return left < right; });
}

template <typename InputIt1, typename InputIt2, typename OutputIt, typename Compare>
OutputIt set_symmetric_difference(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, OutputIt out, Compare compare) {
	while (first1 != last1 && first2 != last2) {
		if (compare(*first1, *first2)) {
			*out = *first1;
			++first1;
			++out;
		} else if (compare(*first2, *first1)) {
			*out = *first2;
			++first2;
			++out;
		} else {
			++first1;
			++first2;
		}
	}
	out = wm::copy(first1, last1, out);
	return wm::copy(first2, last2, out);
}

template <typename InputIt1, typename InputIt2, typename OutputIt>
OutputIt set_symmetric_difference(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, OutputIt out) {
	return wm::set_symmetric_difference(first1, last1, first2, last2, out,
	                                    [](const auto& left, const auto& right) { return left < right; });
}

template <typename InputIt1, typename InputIt2, typename OutputIt, typename Compare>
OutputIt merge(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, OutputIt out, Compare compare) {
	while (first1 != last1 && first2 != last2) {
		if (compare(*first2, *first1)) {
			*out = *first2;
			++first2;
		} else {
			*out = *first1;
			++first1;
		}
		++out;
	}
	while (first1 != last1) {
		*out = *first1;
		++first1;
		++out;
	}
	while (first2 != last2) {
		*out = *first2;
		++first2;
		++out;
	}
	return out;
}

template <typename InputIt1, typename InputIt2, typename OutputIt>
OutputIt merge(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, OutputIt out) {
	return wm::merge(first1, last1, first2, last2, out,
	                 [](const auto& left, const auto& right) { return left < right; });
}

template <typename InputIt, typename T>
T accumulate(InputIt first, InputIt last, T init) {
	while (first != last) {
		init = init + *first;
		++first;
	}
	return init;
}

template <typename InputIt, typename T, typename BinaryOperation>
T accumulate(InputIt first, InputIt last, T init, BinaryOperation operation) {
	while (first != last) {
		init = operation(init, *first);
		++first;
	}
	return init;
}

template <typename ForwardIt, typename T>
void iota(ForwardIt first, ForwardIt last, T value) {
	while (first != last) {
		*first = value;
		++first;
		++value;
	}
}

template <typename InputIt1, typename InputIt2, typename T>
T inner_product(InputIt1 first1, InputIt1 last1, InputIt2 first2, T init) {
	while (first1 != last1) {
		init = init + (*first1 * *first2);
		++first1;
		++first2;
	}
	return init;
}

template <typename InputIt, typename OutputIt>
OutputIt partial_sum(InputIt first, InputIt last, OutputIt out) {
	if (first == last) {
		return out;
	}
	auto sum = *first;
	*out = sum;
	++first;
	++out;
	while (first != last) {
		sum = sum + *first;
		*out = sum;
		++first;
		++out;
	}
	return out;
}

struct less {
	using is_transparent = void;

	template <typename A, typename B>
	constexpr auto operator()(const A& left, const B& right) const -> decltype(left < right) {
		return left < right;
	}
};

template <typename RandomIt, typename Compare>
void __heap_sift_down(RandomIt first, ptrdiff_t start, ptrdiff_t length, Compare compare) {
	ptrdiff_t root = start;
	while (true) {
		ptrdiff_t child = root * 2 + 1;
		if (child >= length) {
			return;
		}
		if (child + 1 < length && compare(*(first + child), *(first + child + 1))) {
			++child;
		}
		if (!compare(*(first + root), *(first + child))) {
			return;
		}
		wm::swap(*(first + root), *(first + child));
		root = child;
	}
}

template <typename RandomIt, typename Compare>
void make_heap(RandomIt first, RandomIt last, Compare compare) {
	ptrdiff_t length = last - first;
	if (length <= 1) {
		return;
	}
	for (ptrdiff_t start = (length - 2) / 2 + 1; start > 0;) {
		--start;
		wm::__heap_sift_down(first, start, length, compare);
	}
}

template <typename RandomIt>
void make_heap(RandomIt first, RandomIt last) {
	wm::make_heap(first, last, wm::less{});
}

template <typename RandomIt, typename Compare>
void push_heap(RandomIt first, RandomIt last, Compare compare) {
	ptrdiff_t length = last - first;
	if (length <= 1) {
		return;
	}
	ptrdiff_t child = length - 1;
	while (child > 0) {
		ptrdiff_t parent = (child - 1) / 2;
		if (!compare(*(first + parent), *(first + child))) {
			break;
		}
		wm::swap(*(first + parent), *(first + child));
		child = parent;
	}
}

template <typename RandomIt>
void push_heap(RandomIt first, RandomIt last) {
	wm::push_heap(first, last, wm::less{});
}

template <typename RandomIt, typename Compare>
void pop_heap(RandomIt first, RandomIt last, Compare compare) {
	ptrdiff_t length = last - first;
	if (length <= 1) {
		return;
	}
	--last;
	wm::swap(*first, *last);
	wm::__heap_sift_down(first, 0, length - 1, compare);
}

template <typename RandomIt>
void pop_heap(RandomIt first, RandomIt last) {
	wm::pop_heap(first, last, wm::less{});
}

template <typename RandomIt, typename Compare>
void sort_heap(RandomIt first, RandomIt last, Compare compare) {
	while (last - first > 1) {
		wm::pop_heap(first, last, compare);
		--last;
	}
}

template <typename RandomIt>
void sort_heap(RandomIt first, RandomIt last) {
	wm::sort_heap(first, last, wm::less{});
}

template <typename RandomIt, typename UniformRandomBitGenerator>
void shuffle(RandomIt first, RandomIt last, UniformRandomBitGenerator&& generator) {
	auto length = last - first;
	if (length <= 1) {
		return;
	}
	for (auto i = length - 1; i > 0; --i) {
		const auto offset = static_cast<decltype(i)>(
			static_cast<unsigned long long>(generator()) % static_cast<unsigned long long>(i + 1));
		wm::swap(*(first + i), *(first + offset));
	}
}

template <typename RandomIt, typename Compare>
void sort(RandomIt first, RandomIt last, Compare compare) {
	if (first == last) {
		return;
	}
	for (RandomIt i = first + 1; i < last; ++i) {
		auto value = wm::move(*i);
		RandomIt j = i;
		while (j > first && compare(value, *(j - 1))) {
			*j = wm::move(*(j - 1));
			--j;
		}
		*j = wm::move(value);
	}
}

template <typename RandomIt>
void sort(RandomIt first, RandomIt last) {
	wm::sort(first, last, wm::less{});
}

template <typename RandomIt, typename Compare>
void nth_element(RandomIt first, RandomIt nth, RandomIt last, Compare compare) {
	(void)nth;
	wm::sort(first, last, compare);
}

template <typename RandomIt>
void nth_element(RandomIt first, RandomIt nth, RandomIt last) {
	wm::nth_element(first, nth, last, wm::less{});
}

template <typename BidirectionalIt, typename Compare>
void inplace_merge(BidirectionalIt first, BidirectionalIt middle, BidirectionalIt last, Compare compare) {
	if (first == middle || middle == last) {
		return;
	}
	BidirectionalIt left = first;
	BidirectionalIt right = middle;
	while (left != right && right != last) {
		if (!compare(*right, *left)) {
			++left;
			continue;
		}

		auto value = wm::move(*right);
		BidirectionalIt moveIt = right;
		while (moveIt != left) {
			BidirectionalIt previous = moveIt;
			--previous;
			*moveIt = wm::move(*previous);
			moveIt = previous;
		}
		*left = wm::move(value);
		++left;
		++right;
		++middle;
	}
}

template <typename BidirectionalIt>
void inplace_merge(BidirectionalIt first, BidirectionalIt middle, BidirectionalIt last) {
	wm::inplace_merge(first, middle, last, wm::less{});
}

template <typename T, typename Compare = wm::less>
class set {
public:
	using value_type = T;
	class const_iterator {
	public:
		using iterator_category = random_access_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = const T*;
		using reference = const T&;

		const_iterator() : current_(nullptr) {}
		explicit const_iterator(const T* current) : current_(current) {}

		reference operator*() const noexcept { return *current_; }
		pointer operator->() const noexcept { return current_; }
		const_iterator& operator++() noexcept {
			++current_;
			return *this;
		}
		const_iterator operator++(int) noexcept {
			const_iterator copy(*this);
			++current_;
			return copy;
		}
		const_iterator& operator--() noexcept {
			--current_;
			return *this;
		}
		const_iterator operator--(int) noexcept {
			const_iterator copy(*this);
			--current_;
			return copy;
		}
		const_iterator& operator+=(difference_type count) noexcept {
			current_ += count;
			return *this;
		}
		const_iterator& operator-=(difference_type count) noexcept {
			current_ -= count;
			return *this;
		}
		const_iterator operator+(difference_type count) const noexcept { return const_iterator(current_ + count); }
		const_iterator operator-(difference_type count) const noexcept { return const_iterator(current_ - count); }
		difference_type operator-(const const_iterator& other) const noexcept { return current_ - other.current_; }
		reference operator[](difference_type index) const noexcept { return current_[index]; }
		bool operator==(const const_iterator& other) const noexcept { return current_ == other.current_; }
		bool operator!=(const const_iterator& other) const noexcept { return current_ != other.current_; }
		bool operator<(const const_iterator& other) const noexcept { return current_ < other.current_; }
		bool operator>(const const_iterator& other) const noexcept { return other < *this; }
		bool operator<=(const const_iterator& other) const noexcept { return !(other < *this); }
		bool operator>=(const const_iterator& other) const noexcept { return !(*this < other); }

		const T* base() const noexcept { return current_; }

	private:
		const T* current_;
	};
	using iterator = const_iterator;
	using reverse_iterator = typename vector<T>::const_reverse_iterator;
	using const_reverse_iterator = typename vector<T>::const_reverse_iterator;

	set() = default;
	explicit set(const Compare& compare) : compare_(compare) {}
	set(std::initializer_list<T> values) {
		for (const T& value : values) {
			insert(value);
		}
	}
	template <typename InputIt>
	set(InputIt first, InputIt last) {
		for (InputIt it = first; it != last; ++it) {
			insert(*it);
		}
	}

	bool empty() const noexcept { return values_.empty(); }
	size_t size() const noexcept { return values_.size(); }
	void clear() noexcept { values_.clear(); }
	void swap(set& other) noexcept {
		values_.swap(other.values_);
		wm::swap(compare_, other.compare_);
	}

	iterator begin() noexcept { return iterator(values_.begin()); }
	const_iterator begin() const noexcept { return const_iterator(values_.begin()); }
	const_iterator cbegin() const noexcept { return begin(); }
	iterator end() noexcept { return iterator(values_.end()); }
	const_iterator end() const noexcept { return const_iterator(values_.end()); }
	const_iterator cend() const noexcept { return end(); }
	reverse_iterator rbegin() noexcept { return values_.rbegin(); }
	const_reverse_iterator rbegin() const noexcept { return values_.rbegin(); }
	const_reverse_iterator crbegin() const noexcept { return values_.rbegin(); }
	reverse_iterator rend() noexcept { return values_.rend(); }
	const_reverse_iterator rend() const noexcept { return values_.rend(); }
	const_reverse_iterator crend() const noexcept { return values_.rend(); }

	iterator find(const T& value) {
		iterator it = lower(value);
		return it != end() && equivalent(*it, value) ? it : end();
	}

	const_iterator find(const T& value) const {
		const_iterator it = lower(value);
		return it != end() && equivalent(*it, value) ? it : end();
	}

	template <typename KeyArg>
	iterator find(const KeyArg& value) {
		iterator it = lower(value);
		return it != end() && equivalent(*it, value) ? it : end();
	}

	template <typename KeyArg>
	const_iterator find(const KeyArg& value) const {
		const_iterator it = lower(value);
		return it != end() && equivalent(*it, value) ? it : end();
	}

	bool contains(const T& value) const {
		return find(value) != end();
	}

	template <typename KeyArg>
	bool contains(const KeyArg& value) const {
		return find(value) != end();
	}

	size_t count(const T& value) const {
		return contains(value) ? 1 : 0;
	}

	template <typename KeyArg>
	size_t count(const KeyArg& value) const {
		return contains(value) ? 1 : 0;
	}

	template <typename KeyArg>
	iterator lower_bound(const KeyArg& value) {
		return lower(value);
	}

	template <typename KeyArg>
	const_iterator lower_bound(const KeyArg& value) const {
		return lower(value);
	}

	template <typename KeyArg>
	iterator upper_bound(const KeyArg& value) {
		return iterator(wm::upper_bound(values_.begin(), values_.end(), value, compare_));
	}

	template <typename KeyArg>
	const_iterator upper_bound(const KeyArg& value) const {
		return const_iterator(wm::upper_bound(values_.begin(), values_.end(), value, compare_));
	}

	template <typename KeyArg>
	pair<iterator, iterator> equal_range(const KeyArg& value) {
		return pair<iterator, iterator>(lower_bound(value), upper_bound(value));
	}

	template <typename KeyArg>
	pair<const_iterator, const_iterator> equal_range(const KeyArg& value) const {
		return pair<const_iterator, const_iterator>(lower_bound(value), upper_bound(value));
	}

	pair<iterator, bool> insert(const T& value) {
		iterator it = lower(value);
		if (it != end() && equivalent(*it, value)) {
			return pair<iterator, bool>(it, false);
		}
		return pair<iterator, bool>(iterator(values_.insert(it.base(), value)), true);
	}

	pair<iterator, bool> insert(T&& value) {
		iterator it = lower(value);
		if (it != end() && equivalent(*it, value)) {
			return pair<iterator, bool>(it, false);
		}
		return pair<iterator, bool>(iterator(values_.insert(it.base(), wm::move(value))), true);
	}

	iterator insert(const_iterator hint, const T& value) {
		(void)hint;
		return insert(value).first;
	}

	iterator insert(const_iterator hint, T&& value) {
		(void)hint;
		return insert(wm::move(value)).first;
	}

	template <typename... Args>
	pair<iterator, bool> emplace(Args&&... args) {
		T value(wm::forward<Args>(args)...);
		return insert(wm::move(value));
	}

	template <typename InputIt>
	void insert(InputIt first, InputIt last) {
		for (InputIt it = first; it != last; ++it) {
			insert(*it);
		}
	}

	size_t erase(const T& value) {
		iterator it = find(value);
		if (it == end()) {
			return 0;
		}
		values_.erase(it.base());
		return 1;
	}

	iterator erase(iterator position) {
		return iterator(values_.erase(position.base()));
	}

	iterator erase(const_iterator first, const_iterator last) {
		return iterator(values_.erase(first.base(), last.base()));
	}

private:
	template <typename Left, typename Right>
	bool equivalent(const Left& left, const Right& right) const {
		return !compare_(left, right) && !compare_(right, left);
	}

	template <typename KeyArg>
	iterator lower(const KeyArg& value) {
		return iterator(wm::lower_bound(values_.begin(), values_.end(), value, compare_));
	}

	template <typename KeyArg>
	const_iterator lower(const KeyArg& value) const {
		return const_iterator(wm::lower_bound(values_.begin(), values_.end(), value, compare_));
	}

	vector<T> values_;
	Compare compare_{};
};

template <typename T, typename Compare>
bool operator==(const set<T, Compare>& left, const set<T, Compare>& right) {
	return left.size() == right.size() && wm::equal(left.begin(), left.end(), right.begin());
}

template <typename T, typename Compare>
bool operator!=(const set<T, Compare>& left, const set<T, Compare>& right) {
	return !(left == right);
}

template <typename T, typename Compare>
bool operator<(const set<T, Compare>& left, const set<T, Compare>& right) {
	return wm::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end(), Compare{});
}

template <typename T, typename Compare>
bool operator>(const set<T, Compare>& left, const set<T, Compare>& right) {
	return right < left;
}

template <typename T, typename Compare>
bool operator<=(const set<T, Compare>& left, const set<T, Compare>& right) {
	return !(right < left);
}

template <typename T, typename Compare>
bool operator>=(const set<T, Compare>& left, const set<T, Compare>& right) {
	return !(left < right);
}

template <typename T, typename Compare = wm::less>
class multiset {
public:
	using key_type = T;
	using value_type = T;
	using size_type = size_t;
	using difference_type = ptrdiff_t;
	using key_compare = Compare;
	using value_compare = Compare;
	using reference = const T&;
	using const_reference = const T&;
	using pointer = const T*;
	using const_pointer = const T*;

	class const_iterator {
	public:
		using iterator_category = random_access_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = const T*;
		using reference = const T&;

		const_iterator() : current_(nullptr) {}
		explicit const_iterator(const T* current) : current_(current) {}

		reference operator*() const noexcept { return *current_; }
		pointer operator->() const noexcept { return current_; }
		const_iterator& operator++() noexcept {
			++current_;
			return *this;
		}
		const_iterator operator++(int) noexcept {
			const_iterator copy(*this);
			++current_;
			return copy;
		}
		const_iterator& operator--() noexcept {
			--current_;
			return *this;
		}
		const_iterator operator--(int) noexcept {
			const_iterator copy(*this);
			--current_;
			return copy;
		}
		const_iterator& operator+=(difference_type count) noexcept {
			current_ += count;
			return *this;
		}
		const_iterator& operator-=(difference_type count) noexcept {
			current_ -= count;
			return *this;
		}
		const_iterator operator+(difference_type count) const noexcept { return const_iterator(current_ + count); }
		const_iterator operator-(difference_type count) const noexcept { return const_iterator(current_ - count); }
		difference_type operator-(const const_iterator& other) const noexcept { return current_ - other.current_; }
		reference operator[](difference_type index) const noexcept { return current_[index]; }
		bool operator==(const const_iterator& other) const noexcept { return current_ == other.current_; }
		bool operator!=(const const_iterator& other) const noexcept { return current_ != other.current_; }
		bool operator<(const const_iterator& other) const noexcept { return current_ < other.current_; }
		bool operator>(const const_iterator& other) const noexcept { return other < *this; }
		bool operator<=(const const_iterator& other) const noexcept { return !(other < *this); }
		bool operator>=(const const_iterator& other) const noexcept { return !(*this < other); }

		const T* base() const noexcept { return current_; }

	private:
		const T* current_;
	};
	using iterator = const_iterator;
	using reverse_iterator = typename vector<T>::const_reverse_iterator;
	using const_reverse_iterator = typename vector<T>::const_reverse_iterator;

	multiset() = default;
	explicit multiset(const Compare& compare) : compare_(compare) {}
	multiset(std::initializer_list<T> values) {
		for (const T& value : values) {
			insert(value);
		}
	}
	template <typename InputIt>
	multiset(InputIt first, InputIt last) {
		insert(first, last);
	}

	bool empty() const noexcept { return values_.empty(); }
	size_type size() const noexcept { return values_.size(); }
	void clear() noexcept { values_.clear(); }
	void swap(multiset& other) noexcept {
		values_.swap(other.values_);
		wm::swap(compare_, other.compare_);
	}

	key_compare key_comp() const { return compare_; }
	value_compare value_comp() const { return compare_; }

	iterator begin() noexcept { return iterator(values_.begin()); }
	const_iterator begin() const noexcept { return const_iterator(values_.begin()); }
	const_iterator cbegin() const noexcept { return begin(); }
	iterator end() noexcept { return iterator(values_.end()); }
	const_iterator end() const noexcept { return const_iterator(values_.end()); }
	const_iterator cend() const noexcept { return end(); }
	reverse_iterator rbegin() noexcept { return values_.rbegin(); }
	const_reverse_iterator rbegin() const noexcept { return values_.rbegin(); }
	const_reverse_iterator crbegin() const noexcept { return values_.rbegin(); }
	reverse_iterator rend() noexcept { return values_.rend(); }
	const_reverse_iterator rend() const noexcept { return values_.rend(); }
	const_reverse_iterator crend() const noexcept { return values_.rend(); }

	template <typename KeyArg>
	iterator find(const KeyArg& value) {
		iterator it = lower_bound(value);
		return it != end() && equivalent(*it, value) ? it : end();
	}

	template <typename KeyArg>
	const_iterator find(const KeyArg& value) const {
		const_iterator it = lower_bound(value);
		return it != end() && equivalent(*it, value) ? it : end();
	}

	template <typename KeyArg>
	size_type count(const KeyArg& value) const {
		pair<const_iterator, const_iterator> range = equal_range(value);
		return static_cast<size_type>(wm::distance(range.first, range.second));
	}

	template <typename KeyArg>
	bool contains(const KeyArg& value) const {
		return find(value) != end();
	}

	template <typename KeyArg>
	iterator lower_bound(const KeyArg& value) {
		return iterator(wm::lower_bound(values_.begin(), values_.end(), value, compare_));
	}

	template <typename KeyArg>
	const_iterator lower_bound(const KeyArg& value) const {
		return const_iterator(wm::lower_bound(values_.begin(), values_.end(), value, compare_));
	}

	template <typename KeyArg>
	iterator upper_bound(const KeyArg& value) {
		return iterator(wm::upper_bound(values_.begin(), values_.end(), value, compare_));
	}

	template <typename KeyArg>
	const_iterator upper_bound(const KeyArg& value) const {
		return const_iterator(wm::upper_bound(values_.begin(), values_.end(), value, compare_));
	}

	template <typename KeyArg>
	pair<iterator, iterator> equal_range(const KeyArg& value) {
		return pair<iterator, iterator>(lower_bound(value), upper_bound(value));
	}

	template <typename KeyArg>
	pair<const_iterator, const_iterator> equal_range(const KeyArg& value) const {
		return pair<const_iterator, const_iterator>(lower_bound(value), upper_bound(value));
	}

	iterator insert(const T& value) {
		return iterator(values_.insert(upper_bound(value).base(), value));
	}

	iterator insert(T&& value) {
		iterator it = upper_bound(value);
		return iterator(values_.insert(it.base(), wm::move(value)));
	}

	iterator insert(const_iterator hint, const T& value) {
		(void)hint;
		return insert(value);
	}

	iterator insert(const_iterator hint, T&& value) {
		(void)hint;
		return insert(wm::move(value));
	}

	template <typename InputIt>
	void insert(InputIt first, InputIt last) {
		for (InputIt it = first; it != last; ++it) {
			insert(*it);
		}
	}

	template <typename... Args>
	iterator emplace(Args&&... args) {
		T value(wm::forward<Args>(args)...);
		return insert(wm::move(value));
	}

	size_type erase(const T& value) {
		pair<iterator, iterator> range = equal_range(value);
		size_type removed = static_cast<size_type>(wm::distance(range.first, range.second));
		values_.erase(range.first.base(), range.second.base());
		return removed;
	}

	iterator erase(const_iterator position) {
		return iterator(values_.erase(position.base()));
	}

	iterator erase(const_iterator first, const_iterator last) {
		return iterator(values_.erase(first.base(), last.base()));
	}

private:
	template <typename Left, typename Right>
	bool equivalent(const Left& left, const Right& right) const {
		return !compare_(left, right) && !compare_(right, left);
	}

	vector<T> values_;
	Compare compare_{};
};

template <typename T, typename Compare>
bool operator==(const multiset<T, Compare>& left, const multiset<T, Compare>& right) {
	return left.size() == right.size() && wm::equal(left.begin(), left.end(), right.begin());
}

template <typename T, typename Compare>
bool operator!=(const multiset<T, Compare>& left, const multiset<T, Compare>& right) {
	return !(left == right);
}

template <typename T, typename Compare>
bool operator<(const multiset<T, Compare>& left, const multiset<T, Compare>& right) {
	return wm::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end(), Compare{});
}

template <typename T, typename Compare>
bool operator>(const multiset<T, Compare>& left, const multiset<T, Compare>& right) {
	return right < left;
}

template <typename T, typename Compare>
bool operator<=(const multiset<T, Compare>& left, const multiset<T, Compare>& right) {
	return !(right < left);
}

template <typename T, typename Compare>
bool operator>=(const multiset<T, Compare>& left, const multiset<T, Compare>& right) {
	return !(left < right);
}

template <typename T, bool Const>
class contiguous_storage_iterator {
	template <typename, bool>
	friend class contiguous_storage_iterator;

public:
	using iterator_category = random_access_iterator_tag;
	using value_type = T;
	using difference_type = ptrdiff_t;
	using pointer = conditional_t<Const, const T*, T*>;
	using reference = conditional_t<Const, const T&, T&>;

	contiguous_storage_iterator() noexcept : current_(nullptr) {}
	contiguous_storage_iterator(pointer current) noexcept : current_(current) {}

	template <bool OtherConst, typename = enable_if_t<Const || !OtherConst>>
	contiguous_storage_iterator(const contiguous_storage_iterator<T, OtherConst>& other) noexcept
		: current_(other.current_) {}

	reference operator*() const noexcept { return *current_; }
	pointer operator->() const noexcept { return current_; }
	reference operator[](difference_type offset) const noexcept { return current_[offset]; }

	contiguous_storage_iterator& operator++() noexcept {
		++current_;
		return *this;
	}

	contiguous_storage_iterator operator++(int) noexcept {
		contiguous_storage_iterator copy(*this);
		++(*this);
		return copy;
	}

	contiguous_storage_iterator& operator--() noexcept {
		--current_;
		return *this;
	}

	contiguous_storage_iterator operator--(int) noexcept {
		contiguous_storage_iterator copy(*this);
		--(*this);
		return copy;
	}

	contiguous_storage_iterator& operator+=(difference_type offset) noexcept {
		current_ += offset;
		return *this;
	}

	contiguous_storage_iterator& operator-=(difference_type offset) noexcept {
		current_ -= offset;
		return *this;
	}

	contiguous_storage_iterator operator+(difference_type offset) const noexcept {
		contiguous_storage_iterator copy(*this);
		copy += offset;
		return copy;
	}

	contiguous_storage_iterator operator-(difference_type offset) const noexcept {
		contiguous_storage_iterator copy(*this);
		copy -= offset;
		return copy;
	}

	template <bool OtherConst>
	difference_type operator-(const contiguous_storage_iterator<T, OtherConst>& other) const noexcept {
		return current_ - other.current_;
	}

	template <bool OtherConst>
	bool operator==(const contiguous_storage_iterator<T, OtherConst>& other) const noexcept {
		return current_ == other.current_;
	}

	template <bool OtherConst>
	bool operator!=(const contiguous_storage_iterator<T, OtherConst>& other) const noexcept {
		return current_ != other.current_;
	}

	template <bool OtherConst>
	bool operator<(const contiguous_storage_iterator<T, OtherConst>& other) const noexcept {
		return current_ < other.current_;
	}

	template <bool OtherConst>
	bool operator>(const contiguous_storage_iterator<T, OtherConst>& other) const noexcept {
		return other < *this;
	}

	template <bool OtherConst>
	bool operator<=(const contiguous_storage_iterator<T, OtherConst>& other) const noexcept {
		return !(other < *this);
	}

	template <bool OtherConst>
	bool operator>=(const contiguous_storage_iterator<T, OtherConst>& other) const noexcept {
		return !(*this < other);
	}

	pointer base() const noexcept { return current_; }

private:
	pointer current_;
};

template <typename T, bool Const>
contiguous_storage_iterator<T, Const>
operator+(typename contiguous_storage_iterator<T, Const>::difference_type offset,
          contiguous_storage_iterator<T, Const> iterator) noexcept {
	return iterator + offset;
}

namespace detail {
template <typename Compare, typename Key, typename KeyArg>
struct associative_key_compatible : bool_constant<
	!is_same<remove_cv_t<remove_reference_t<KeyArg>>, Key>::value &&
	is_invocable<const Compare&, const Key&, const KeyArg&>::value &&
	is_invocable<const Compare&, const KeyArg&, const Key&>::value> {};
}

template <typename K, typename V, typename Compare = wm::less>
class map {
public:
	using key_type = K;
	using mapped_type = V;
	using value_type = pair<const K, V>;
	using size_type = size_t;
	using difference_type = ptrdiff_t;
	using key_compare = Compare;
	using reference = value_type&;
	using const_reference = const value_type&;
	using pointer = value_type*;
	using const_pointer = const value_type*;
	using iterator = contiguous_storage_iterator<value_type, false>;
	using const_iterator = contiguous_storage_iterator<value_type, true>;
	using reverse_iterator = typename vector<value_type>::reverse_iterator;
	using const_reverse_iterator = typename vector<value_type>::const_reverse_iterator;

	class value_compare {
	public:
		explicit value_compare(Compare compare) : compare_(compare) {}

		bool operator()(const value_type& left, const value_type& right) const {
			return compare_(left.first, right.first);
		}

	private:
		Compare compare_;
	};

	map() = default;
	explicit map(const Compare& compare) : compare_(compare) {}
	map(std::initializer_list<value_type> values) {
		for (const value_type& value : values) {
			insert(value);
		}
	}
	template <typename InputIt>
	map(InputIt first, InputIt last) {
		for (InputIt it = first; it != last; ++it) {
			insert(*it);
		}
	}

	bool empty() const noexcept { return values_.empty(); }
	size_type size() const noexcept { return values_.size(); }
	void clear() noexcept { values_.clear(); }
	key_compare key_comp() const { return compare_; }
	value_compare value_comp() const { return value_compare(compare_); }

	iterator begin() noexcept { return iterator(values_.begin()); }
	const_iterator begin() const noexcept { return const_iterator(values_.begin()); }
	const_iterator cbegin() const noexcept { return const_iterator(values_.begin()); }
	iterator end() noexcept { return iterator(values_.end()); }
	const_iterator end() const noexcept { return const_iterator(values_.end()); }
	const_iterator cend() const noexcept { return const_iterator(values_.end()); }
	reverse_iterator rbegin() noexcept { return values_.rbegin(); }
	const_reverse_iterator rbegin() const noexcept { return values_.rbegin(); }
	const_reverse_iterator crbegin() const noexcept { return values_.rbegin(); }
	reverse_iterator rend() noexcept { return values_.rend(); }
	const_reverse_iterator rend() const noexcept { return values_.rend(); }
	const_reverse_iterator crend() const noexcept { return values_.rend(); }

	iterator find(const K& key) {
		iterator it = lower(key);
		return it != end() && equivalent(it->first, key) ? it : end();
	}

	const_iterator find(const K& key) const {
		const_iterator it = lower(key);
		return it != end() && equivalent(it->first, key) ? it : end();
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	iterator find(const KeyArg& key) {
		iterator it = lower(key);
		return it != end() && equivalent(it->first, key) ? it : end();
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	const_iterator find(const KeyArg& key) const {
		const_iterator it = lower(key);
		return it != end() && equivalent(it->first, key) ? it : end();
	}

	iterator lower_bound(const K& key) {
		return lower(key);
	}

	const_iterator lower_bound(const K& key) const {
		return lower(key);
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	iterator lower_bound(const KeyArg& key) {
		return lower(key);
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	const_iterator lower_bound(const KeyArg& key) const {
		return lower(key);
	}

	iterator upper_bound(const K& key) {
		return iterator(wm::upper_bound(values_.begin(), values_.end(), key,
			[this](const K& left, const value_type& right) { return compare_(left, right.first); }));
	}

	const_iterator upper_bound(const K& key) const {
		return const_iterator(wm::upper_bound(values_.begin(), values_.end(), key,
			[this](const K& left, const value_type& right) { return compare_(left, right.first); }));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	iterator upper_bound(const KeyArg& key) {
		return iterator(wm::upper_bound(values_.begin(), values_.end(), key,
			[this](const KeyArg& left, const value_type& right) { return compare_(left, right.first); }));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	const_iterator upper_bound(const KeyArg& key) const {
		return const_iterator(wm::upper_bound(values_.begin(), values_.end(), key,
			[this](const KeyArg& left, const value_type& right) { return compare_(left, right.first); }));
	}

	pair<iterator, iterator> equal_range(const K& key) {
		return pair<iterator, iterator>(lower_bound(key), upper_bound(key));
	}

	pair<const_iterator, const_iterator> equal_range(const K& key) const {
		return pair<const_iterator, const_iterator>(lower_bound(key), upper_bound(key));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	pair<iterator, iterator> equal_range(const KeyArg& key) {
		return pair<iterator, iterator>(lower_bound(key), upper_bound(key));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	pair<const_iterator, const_iterator> equal_range(const KeyArg& key) const {
		return pair<const_iterator, const_iterator>(lower_bound(key), upper_bound(key));
	}

	bool contains(const K& key) const {
		return find(key) != end();
	}

	size_type count(const K& key) const {
		return contains(key) ? 1 : 0;
	}

	V& operator[](const K& key) {
		iterator it = lower(key);
		if (it != end() && equivalent(it->first, key)) {
			return it->second;
		}
		return values_.insert(it.base(), value_type(key, V()))->second;
	}

	V& operator[](K&& key) {
		iterator it = lower(key);
		if (it != end() && equivalent(it->first, key)) {
			return it->second;
		}
		return values_.insert(it.base(), value_type(wm::move(key), V()))->second;
	}

	V& at(const K& key) {
		iterator it = find(key);
		if (it == end()) {
			__builtin_trap();
		}
		return it->second;
	}

	const V& at(const K& key) const {
		const_iterator it = find(key);
		if (it == end()) {
			__builtin_trap();
		}
		return it->second;
	}

	pair<iterator, bool> insert(const value_type& value) {
		iterator it = lower(value.first);
		if (it != end() && equivalent(it->first, value.first)) {
			return pair<iterator, bool>(it, false);
		}
		return pair<iterator, bool>(iterator(values_.insert(it.base(), value)), true);
	}

	pair<iterator, bool> insert(value_type&& value) {
		iterator it = lower(value.first);
		if (it != end() && equivalent(it->first, value.first)) {
			return pair<iterator, bool>(it, false);
		}
		return pair<iterator, bool>(iterator(values_.insert(it.base(), wm::move(value))), true);
	}

	iterator insert(const_iterator hint, const value_type& value) {
		(void)hint;
		return insert(value).first;
	}

	iterator insert(const_iterator hint, value_type&& value) {
		(void)hint;
		return insert(wm::move(value)).first;
	}

	template <typename InputIt>
	void insert(InputIt first, InputIt last) {
		for (InputIt it = first; it != last; ++it) {
			insert(*it);
		}
	}

	template <typename M>
	pair<iterator, bool> insert_or_assign(const K& key, M&& object) {
		iterator it = lower(key);
		if (it != end() && equivalent(it->first, key)) {
			it->second = wm::forward<M>(object);
			return pair<iterator, bool>(it, false);
		}
		return pair<iterator, bool>(
			iterator(values_.insert(it.base(), value_type(key, V(wm::forward<M>(object))))), true);
	}

	template <typename M>
	pair<iterator, bool> insert_or_assign(K&& key, M&& object) {
		iterator it = lower(key);
		if (it != end() && equivalent(it->first, key)) {
			it->second = wm::forward<M>(object);
			return pair<iterator, bool>(it, false);
		}
		return pair<iterator, bool>(
			iterator(values_.insert(it.base(), value_type(wm::move(key), V(wm::forward<M>(object))))), true);
	}

	template <typename M>
	iterator insert_or_assign(const_iterator hint, const K& key, M&& object) {
		(void)hint;
		return insert_or_assign(key, wm::forward<M>(object)).first;
	}

	template <typename M>
	iterator insert_or_assign(const_iterator hint, K&& key, M&& object) {
		(void)hint;
		return insert_or_assign(wm::move(key), wm::forward<M>(object)).first;
	}

	template <typename... Args>
	pair<iterator, bool> emplace(Args&&... args) {
		value_type value(wm::forward<Args>(args)...);
		return insert(wm::move(value));
	}

	template <typename... Args>
	pair<iterator, bool> try_emplace(const K& key, Args&&... args) {
		iterator it = lower(key);
		if (it != end() && equivalent(it->first, key)) {
			return pair<iterator, bool>(it, false);
		}
		return pair<iterator, bool>(
			iterator(values_.insert(it.base(), value_type(key, V(wm::forward<Args>(args)...)))), true);
	}

	template <typename... Args>
	pair<iterator, bool> try_emplace(K&& key, Args&&... args) {
		iterator it = lower(key);
		if (it != end() && equivalent(it->first, key)) {
			return pair<iterator, bool>(it, false);
		}
		return pair<iterator, bool>(
			iterator(values_.insert(it.base(), value_type(wm::move(key), V(wm::forward<Args>(args)...)))), true);
	}

	size_type erase(const K& key) {
		iterator it = find(key);
		if (it == end()) {
			return 0;
		}
		values_.erase(it.base());
		return 1;
	}

	iterator erase(iterator position) {
		return iterator(values_.erase(position.base()));
	}

	iterator erase(const_iterator position) {
		return iterator(values_.erase(position.base()));
	}

	iterator erase(const_iterator first, const_iterator last) {
		return iterator(values_.erase(first.base(), last.base()));
	}

private:
	template <typename Left, typename Right>
	bool equivalent(const Left& left, const Right& right) const {
		return !compare_(left, right) && !compare_(right, left);
	}

	template <typename KeyArg>
	iterator lower(const KeyArg& key) {
		return iterator(wm::lower_bound(values_.begin(), values_.end(), key,
			[this](const value_type& left, const KeyArg& right) { return compare_(left.first, right); }));
	}

	template <typename KeyArg>
	const_iterator lower(const KeyArg& key) const {
		return const_iterator(wm::lower_bound(values_.begin(), values_.end(), key,
			[this](const value_type& left, const KeyArg& right) { return compare_(left.first, right); }));
	}

	vector<value_type> values_;
	Compare compare_{};
};

template <typename K, typename V, typename Compare>
bool operator==(const map<K, V, Compare>& left, const map<K, V, Compare>& right) {
	if (left.size() != right.size()) {
		return false;
	}
	auto leftIt = left.begin();
	auto rightIt = right.begin();
	while (leftIt != left.end()) {
		if (!(*leftIt == *rightIt)) {
			return false;
		}
		++leftIt;
		++rightIt;
	}
	return true;
}

template <typename K, typename V, typename Compare>
bool operator!=(const map<K, V, Compare>& left, const map<K, V, Compare>& right) {
	return !(left == right);
}

template <typename K, typename V, typename Compare>
bool operator<(const map<K, V, Compare>& left, const map<K, V, Compare>& right) {
	return wm::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

template <typename K, typename V, typename Compare>
bool operator>(const map<K, V, Compare>& left, const map<K, V, Compare>& right) {
	return right < left;
}

template <typename K, typename V, typename Compare>
bool operator<=(const map<K, V, Compare>& left, const map<K, V, Compare>& right) {
	return !(right < left);
}

template <typename K, typename V, typename Compare>
bool operator>=(const map<K, V, Compare>& left, const map<K, V, Compare>& right) {
	return !(left < right);
}

template <typename K, typename V, typename Compare = wm::less>
class multimap {
public:
	using key_type = K;
	using mapped_type = V;
	using value_type = pair<const K, V>;
	using size_type = size_t;
	using difference_type = ptrdiff_t;
	using key_compare = Compare;
	using reference = value_type&;
	using const_reference = const value_type&;
	using pointer = value_type*;
	using const_pointer = const value_type*;
	using iterator = contiguous_storage_iterator<value_type, false>;
	using const_iterator = contiguous_storage_iterator<value_type, true>;
	using reverse_iterator = typename vector<value_type>::reverse_iterator;
	using const_reverse_iterator = typename vector<value_type>::const_reverse_iterator;

	class value_compare {
	public:
		explicit value_compare(Compare compare) : compare_(compare) {}

		bool operator()(const value_type& left, const value_type& right) const {
			return compare_(left.first, right.first);
		}

	private:
		Compare compare_;
	};

	multimap() = default;
	explicit multimap(const Compare& compare) : compare_(compare) {}
	multimap(std::initializer_list<value_type> values) {
		for (const value_type& value : values) {
			insert(value);
		}
	}
	template <typename InputIt>
	multimap(InputIt first, InputIt last) {
		for (InputIt it = first; it != last; ++it) {
			insert(*it);
		}
	}

	bool empty() const noexcept { return values_.empty(); }
	size_type size() const noexcept { return values_.size(); }
	void clear() noexcept { values_.clear(); }
	key_compare key_comp() const { return compare_; }
	value_compare value_comp() const { return value_compare(compare_); }

	iterator begin() noexcept { return iterator(values_.begin()); }
	const_iterator begin() const noexcept { return const_iterator(values_.begin()); }
	const_iterator cbegin() const noexcept { return const_iterator(values_.begin()); }
	iterator end() noexcept { return iterator(values_.end()); }
	const_iterator end() const noexcept { return const_iterator(values_.end()); }
	const_iterator cend() const noexcept { return const_iterator(values_.end()); }
	reverse_iterator rbegin() noexcept { return values_.rbegin(); }
	const_reverse_iterator rbegin() const noexcept { return values_.rbegin(); }
	const_reverse_iterator crbegin() const noexcept { return values_.rbegin(); }
	reverse_iterator rend() noexcept { return values_.rend(); }
	const_reverse_iterator rend() const noexcept { return values_.rend(); }
	const_reverse_iterator crend() const noexcept { return values_.rend(); }

	iterator find(const K& key) {
		iterator it = lower_bound(key);
		return it != end() && equivalent(it->first, key) ? it : end();
	}

	const_iterator find(const K& key) const {
		const_iterator it = lower_bound(key);
		return it != end() && equivalent(it->first, key) ? it : end();
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	iterator find(const KeyArg& key) {
		iterator it = lower_bound(key);
		return it != end() && equivalent(it->first, key) ? it : end();
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	const_iterator find(const KeyArg& key) const {
		const_iterator it = lower_bound(key);
		return it != end() && equivalent(it->first, key) ? it : end();
	}

	iterator lower_bound(const K& key) {
		return iterator(wm::lower_bound(values_.begin(), values_.end(), key,
			[this](const value_type& left, const K& right) { return compare_(left.first, right); }));
	}

	const_iterator lower_bound(const K& key) const {
		return const_iterator(wm::lower_bound(values_.begin(), values_.end(), key,
			[this](const value_type& left, const K& right) { return compare_(left.first, right); }));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	iterator lower_bound(const KeyArg& key) {
		return iterator(wm::lower_bound(values_.begin(), values_.end(), key,
			[this](const value_type& left, const KeyArg& right) { return compare_(left.first, right); }));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	const_iterator lower_bound(const KeyArg& key) const {
		return const_iterator(wm::lower_bound(values_.begin(), values_.end(), key,
			[this](const value_type& left, const KeyArg& right) { return compare_(left.first, right); }));
	}

	iterator upper_bound(const K& key) {
		return iterator(wm::upper_bound(values_.begin(), values_.end(), key,
			[this](const K& left, const value_type& right) { return compare_(left, right.first); }));
	}

	const_iterator upper_bound(const K& key) const {
		return const_iterator(wm::upper_bound(values_.begin(), values_.end(), key,
			[this](const K& left, const value_type& right) { return compare_(left, right.first); }));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	iterator upper_bound(const KeyArg& key) {
		return iterator(wm::upper_bound(values_.begin(), values_.end(), key,
			[this](const KeyArg& left, const value_type& right) { return compare_(left, right.first); }));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	const_iterator upper_bound(const KeyArg& key) const {
		return const_iterator(wm::upper_bound(values_.begin(), values_.end(), key,
			[this](const KeyArg& left, const value_type& right) { return compare_(left, right.first); }));
	}

	pair<iterator, iterator> equal_range(const K& key) {
		return pair<iterator, iterator>(lower_bound(key), upper_bound(key));
	}

	pair<const_iterator, const_iterator> equal_range(const K& key) const {
		return pair<const_iterator, const_iterator>(lower_bound(key), upper_bound(key));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	pair<iterator, iterator> equal_range(const KeyArg& key) {
		return pair<iterator, iterator>(lower_bound(key), upper_bound(key));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	pair<const_iterator, const_iterator> equal_range(const KeyArg& key) const {
		return pair<const_iterator, const_iterator>(lower_bound(key), upper_bound(key));
	}

	size_type count(const K& key) const {
		pair<const_iterator, const_iterator> range = equal_range(key);
		return static_cast<size_type>(wm::distance(range.first, range.second));
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	size_type count(const KeyArg& key) const {
		pair<const_iterator, const_iterator> range = equal_range(key);
		return static_cast<size_type>(wm::distance(range.first, range.second));
	}

	iterator insert(const value_type& value) {
		return iterator(values_.insert(upper_bound(value.first).base(), value));
	}

	iterator insert(value_type&& value) {
		iterator it = upper_bound(value.first);
		return iterator(values_.insert(it.base(), wm::move(value)));
	}

	iterator insert(const_iterator hint, const value_type& value) {
		(void)hint;
		return insert(value);
	}

	iterator insert(const_iterator hint, value_type&& value) {
		(void)hint;
		return insert(wm::move(value));
	}

	template <typename... Args>
	iterator emplace(Args&&... args) {
		value_type value(wm::forward<Args>(args)...);
		return insert(wm::move(value));
	}

	template <typename... Args>
	iterator emplace_hint(const_iterator hint, Args&&... args) {
		(void)hint;
		return emplace(wm::forward<Args>(args)...);
	}

	size_type erase(const K& key) {
		pair<iterator, iterator> range = equal_range(key);
		size_type removed = static_cast<size_type>(wm::distance(range.first, range.second));
		values_.erase(range.first.base(), range.second.base());
		return removed;
	}

	template <typename KeyArg, typename = enable_if_t<detail::associative_key_compatible<Compare, K, KeyArg>::value>>
	size_type erase(const KeyArg& key) {
		pair<iterator, iterator> range = equal_range(key);
		size_type removed = static_cast<size_type>(wm::distance(range.first, range.second));
		values_.erase(range.first.base(), range.second.base());
		return removed;
	}

	iterator erase(const_iterator position) {
		return iterator(values_.erase(position.base()));
	}

	iterator erase(const_iterator first, const_iterator last) {
		return iterator(values_.erase(first.base(), last.base()));
	}

private:
	template <typename Left, typename Right>
	bool equivalent(const Left& left, const Right& right) const {
		return !compare_(left, right) && !compare_(right, left);
	}

	vector<value_type> values_;
	Compare compare_{};
};

template <typename K, typename V, typename Compare>
bool operator==(const multimap<K, V, Compare>& left, const multimap<K, V, Compare>& right) {
	if (left.size() != right.size()) {
		return false;
	}
	auto leftIt = left.begin();
	auto rightIt = right.begin();
	while (leftIt != left.end()) {
		if (!(*leftIt == *rightIt)) {
			return false;
		}
		++leftIt;
		++rightIt;
	}
	return true;
}

template <typename K, typename V, typename Compare>
bool operator!=(const multimap<K, V, Compare>& left, const multimap<K, V, Compare>& right) {
	return !(left == right);
}

template <typename K, typename V, typename Compare>
bool operator<(const multimap<K, V, Compare>& left, const multimap<K, V, Compare>& right) {
	return wm::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
}

template <typename K, typename V, typename Compare>
bool operator>(const multimap<K, V, Compare>& left, const multimap<K, V, Compare>& right) {
	return right < left;
}

template <typename K, typename V, typename Compare>
bool operator<=(const multimap<K, V, Compare>& left, const multimap<K, V, Compare>& right) {
	return !(right < left);
}

template <typename K, typename V, typename Compare>
bool operator>=(const multimap<K, V, Compare>& left, const multimap<K, V, Compare>& right) {
	return !(left < right);
}

class mt19937 {
public:
	using result_type = unsigned int;

	mt19937() {
		seed(default_seed);
	}

	explicit mt19937(result_type value) {
		seed(value);
	}

	template <typename SeedSeq, typename = enable_if_t<!is_integral<remove_reference_t<SeedSeq>>::value>>
	explicit mt19937(SeedSeq& sequence) {
		seed(sequence);
	}

	void seed(result_type value = default_seed) {
		state_[0] = value;
		for (size_t i = 1; i < state_size; ++i) {
			state_[i] = 1812433253u * (state_[i - 1] ^ (state_[i - 1] >> 30u)) + (result_type)i;
		}
		index_ = state_size;
	}

	template <typename SeedSeq>
	void seed(SeedSeq& sequence) {
		result_type generated[state_size];
		sequence.generate(generated, generated + state_size);
		for (size_t i = 0; i < state_size; ++i) {
			state_[i] = generated[i];
		}
		index_ = state_size;
	}

	result_type operator()() {
		if (index_ >= state_size) {
			twist();
		}

		result_type y = state_[index_++];
		y ^= y >> 11u;
		y ^= (y << 7u) & 0x9d2c5680u;
		y ^= (y << 15u) & 0xefc60000u;
		y ^= y >> 18u;
		return y;
	}

	static constexpr result_type min() { return 0u; }
	static constexpr result_type max() { return 0xffffffffu; }

private:
	static constexpr result_type default_seed = 5489u;
	static constexpr size_t state_size = 624;
	static constexpr size_t middle_word = 397;
	static constexpr result_type upper_mask = 0x80000000u;
	static constexpr result_type lower_mask = 0x7fffffffu;
	static constexpr result_type matrix_a = 0x9908b0dfu;

	void twist() {
		for (size_t i = 0; i < state_size; ++i) {
			const result_type x = (state_[i] & upper_mask) | (state_[(i + 1u) % state_size] & lower_mask);
			result_type x_a = x >> 1u;
			if ((x & 1u) != 0u) {
				x_a ^= matrix_a;
			}
			state_[i] = state_[(i + middle_word) % state_size] ^ x_a;
		}
		index_ = 0;
	}

	result_type state_[state_size]{};
	size_t index_{state_size};
};

class mt19937_64 {
public:
	using result_type = unsigned long long;

	mt19937_64() {
		seed(default_seed);
	}

	explicit mt19937_64(result_type value) {
		seed(value);
	}

	template <typename SeedSeq, typename = enable_if_t<!is_integral<remove_reference_t<SeedSeq>>::value>>
	explicit mt19937_64(SeedSeq& sequence) {
		seed(sequence);
	}

	void seed(result_type value = default_seed) {
		state_ = value ? value : default_seed;
	}

	template <typename SeedSeq>
	void seed(SeedSeq& sequence) {
		unsigned int generated[2] = {};
		sequence.generate(generated, generated + 2);
		seed(((result_type)generated[0] << 32u) | (result_type)generated[1]);
	}

	result_type operator()() {
		state_ ^= state_ >> 12u;
		state_ ^= state_ << 25u;
		state_ ^= state_ >> 27u;
		return state_ * 2685821657736338717ull;
	}

	static constexpr result_type min() { return 0ull; }
	static constexpr result_type max() { return ~0ull; }

private:
	static constexpr result_type default_seed = 5489ull;
	result_type state_{default_seed};
};

class seed_seq {
public:
	using result_type = unsigned int;

	template <typename InputIt>
	seed_seq(InputIt first, InputIt last) {
		for (InputIt it = first; it != last; ++it) {
			seeds_.push_back((result_type)*it);
		}
	}

	template <typename RandomIt>
	void generate(RandomIt first, RandomIt last) const {
		result_type value = 0x9e3779b9u;
		for (size_t i = 0; i < seeds_.size(); ++i) {
			value ^= seeds_[i] + 0x9e3779b9u + (value << 6u) + (value >> 2u);
		}
		for (RandomIt it = first; it != last; ++it) {
			value = value * 1664525u + 1013904223u;
			*it = value;
		}
	}

private:
	vector<result_type> seeds_;
};

class random_device {
public:
	using result_type = unsigned int;

	random_device() : state_(0x12345678u) {}

	result_type operator()() {
		state_ = state_ * 1664525u + 1013904223u;
		return state_;
	}

	static constexpr result_type min() { return 0u; }
	static constexpr result_type max() { return 0xffffffffu; }

private:
	result_type state_;
};

template <typename IntType = int>
class uniform_int_distribution {
public:
	using result_type = IntType;

	uniform_int_distribution(IntType a = 0, IntType b = 2147483647) : a_(a), b_(b) {}

	template <typename Generator>
	IntType operator()(Generator& generator) const {
		const long long low = (long long)a_;
		const long long high = (long long)b_;
		const unsigned long long span = high >= low ? (unsigned long long)(high - low) + 1ULL : 1ULL;
		const unsigned long long raw = (unsigned long long)generator();
		return (IntType)(low + (long long)(raw % span));
	}

	IntType a() const noexcept { return a_; }
	IntType b() const noexcept { return b_; }

private:
	IntType a_;
	IntType b_;
};

template <typename RealType = double>
class uniform_real_distribution {
public:
	using result_type = RealType;

	uniform_real_distribution(RealType a = (RealType)0, RealType b = (RealType)1) : a_(a), b_(b) {}

	template <typename Generator>
	RealType operator()(Generator& generator) const {
		const double raw = (double)(generator() - Generator::min());
		const double span = (double)Generator::max() - (double)Generator::min() + 1.0;
		const double unit = raw / span;
		return a_ + (RealType)(unit * (double)(b_ - a_));
	}

	RealType a() const noexcept { return a_; }
	RealType b() const noexcept { return b_; }

private:
	RealType a_;
	RealType b_;
};

class bernoulli_distribution {
public:
	using result_type = bool;

	explicit bernoulli_distribution(double p = 0.5) : p_(p) {}

	template <typename Generator>
	bool operator()(Generator& generator) const {
		if (p_ <= 0.0) {
			return false;
		}
		if (p_ >= 1.0) {
			return true;
		}
		const double raw = (double)(generator() - Generator::min());
		const double span = (double)Generator::max() - (double)Generator::min() + 1.0;
		return (raw / span) < p_;
	}

	double p() const noexcept { return p_; }

private:
	double p_;
};

template <typename T, typename = void>
struct numeric_limits {
	static constexpr bool is_specialized = false;
	static constexpr bool is_signed = false;
	static constexpr bool is_integer = false;
	static constexpr bool is_exact = false;
	static constexpr bool has_infinity = false;
	static constexpr bool has_quiet_NaN = false;
	static constexpr bool has_signaling_NaN = false;
	static constexpr bool is_bounded = false;
	static constexpr bool is_modulo = false;
	static constexpr int radix = 0;
	static constexpr int digits = 0;
	static constexpr int digits10 = 0;
	static constexpr int max_digits10 = 0;
};

template <typename T>
struct numeric_limits<const T> : numeric_limits<T> {};

template <typename T>
struct numeric_limits<volatile T> : numeric_limits<T> {};

template <typename T>
struct numeric_limits<const volatile T> : numeric_limits<T> {};

template <typename T>
struct numeric_limits<T, enable_if_t<is_enum<T>::value>> : numeric_limits<__underlying_type(T)> {
	using underlying_type = __underlying_type(T);

	static constexpr bool is_specialized = true;
	static constexpr T min() { return static_cast<T>(numeric_limits<underlying_type>::min()); }
	static constexpr T max() { return static_cast<T>(numeric_limits<underlying_type>::max()); }
	static constexpr T lowest() { return static_cast<T>(numeric_limits<underlying_type>::lowest()); }
};

template <typename T>
struct numeric_limits<T, void_t<typename T::BaseType>> : numeric_limits<typename T::BaseType> {
	using base_type = typename T::BaseType;

	static constexpr bool is_specialized = true;
	static constexpr T min() { return T(numeric_limits<base_type>::min()); }
	static constexpr T max() { return T(numeric_limits<base_type>::max()); }
	static constexpr T lowest() { return T(numeric_limits<base_type>::lowest()); }
};

template <typename T, bool Signed>
struct numeric_limits_integer_base {
	static constexpr bool is_specialized = true;
	static constexpr bool is_signed = Signed;
	static constexpr bool is_integer = true;
	static constexpr bool is_exact = true;
	static constexpr bool has_infinity = false;
	static constexpr bool has_quiet_NaN = false;
	static constexpr bool has_signaling_NaN = false;
	static constexpr bool is_bounded = true;
	static constexpr bool is_modulo = !Signed;
	static constexpr int radix = 2;
	static constexpr int digits = static_cast<int>(sizeof(T) * __CHAR_BIT__ - (Signed ? 1 : 0));
	static constexpr int digits10 = digits * 301 / 1000;
	static constexpr int max_digits10 = 0;
};

template <>
struct numeric_limits<bool> : numeric_limits_integer_base<bool, false> {
	static constexpr bool is_integer = true;
	static constexpr int digits = 1;
	static constexpr int digits10 = 0;
	static constexpr bool min() { return false; }
	static constexpr bool max() { return true; }
	static constexpr bool lowest() { return min(); }
};

template <>
struct numeric_limits<signed char> : numeric_limits_integer_base<signed char, true> {
	static constexpr bool is_integer = true;
	static constexpr signed char min() { return static_cast<signed char>(-__SCHAR_MAX__ - 1); }
	static constexpr signed char max() { return __SCHAR_MAX__; }
	static constexpr signed char lowest() { return min(); }
};

template <>
struct numeric_limits<unsigned char> : numeric_limits_integer_base<unsigned char, false> {
	static constexpr bool is_integer = true;
	static constexpr unsigned char min() { return 0u; }
	static constexpr unsigned char max() { return static_cast<unsigned char>(~0u); }
	static constexpr unsigned char lowest() { return min(); }
};

template <>
struct numeric_limits<char> : numeric_limits_integer_base<char, (static_cast<char>(-1) < static_cast<char>(0))> {
	static constexpr bool is_integer = true;
	static constexpr char min() { return static_cast<char>(-__SCHAR_MAX__ - 1); }
	static constexpr char max() { return __SCHAR_MAX__; }
	static constexpr char lowest() { return min(); }
};

template <>
struct numeric_limits<int> : numeric_limits_integer_base<int, true> {
	static constexpr bool is_integer = true;
	static constexpr int min() { return -__INT_MAX__ - 1; }
	static constexpr int max() { return __INT_MAX__; }
	static constexpr int lowest() { return min(); }
};

template <>
struct numeric_limits<short> : numeric_limits_integer_base<short, true> {
	static constexpr bool is_integer = true;
	static constexpr short min() { return static_cast<short>(-__SHRT_MAX__ - 1); }
	static constexpr short max() { return __SHRT_MAX__; }
	static constexpr short lowest() { return min(); }
};

template <>
struct numeric_limits<unsigned short> : numeric_limits_integer_base<unsigned short, false> {
	static constexpr bool is_integer = true;
	static constexpr unsigned short min() { return 0u; }
	static constexpr unsigned short max() { return static_cast<unsigned short>(~0u); }
	static constexpr unsigned short lowest() { return min(); }
};

template <>
struct numeric_limits<unsigned> : numeric_limits_integer_base<unsigned, false> {
	static constexpr bool is_integer = true;
	static constexpr unsigned min() { return 0u; }
	static constexpr unsigned max() { return ~0u; }
	static constexpr unsigned lowest() { return min(); }
};

template <>
struct numeric_limits<long> : numeric_limits_integer_base<long, true> {
	static constexpr bool is_integer = true;
	static constexpr long min() { return -__LONG_MAX__ - 1L; }
	static constexpr long max() { return __LONG_MAX__; }
	static constexpr long lowest() { return min(); }
};

template <>
struct numeric_limits<unsigned long> : numeric_limits_integer_base<unsigned long, false> {
	static constexpr bool is_integer = true;
	static constexpr unsigned long min() { return 0ul; }
	static constexpr unsigned long max() { return ~0ul; }
	static constexpr unsigned long lowest() { return min(); }
};

template <>
struct numeric_limits<long long> : numeric_limits_integer_base<long long, true> {
	static constexpr bool is_integer = true;
	static constexpr long long min() { return -__LONG_LONG_MAX__ - 1LL; }
	static constexpr long long max() { return __LONG_LONG_MAX__; }
	static constexpr long long lowest() { return min(); }
};

template <>
struct numeric_limits<unsigned long long> : numeric_limits_integer_base<unsigned long long, false> {
	static constexpr bool is_integer = true;
	static constexpr unsigned long long min() { return 0ull; }
	static constexpr unsigned long long max() { return ~0ull; }
	static constexpr unsigned long long lowest() { return min(); }
};

template <>
struct numeric_limits<float> {
	static constexpr bool is_specialized = true;
	static constexpr bool is_signed = true;
	static constexpr bool is_integer = false;
	static constexpr bool is_exact = false;
	static constexpr bool has_infinity = true;
	static constexpr bool has_quiet_NaN = true;
	static constexpr bool has_signaling_NaN = true;
	static constexpr bool is_bounded = true;
	static constexpr bool is_modulo = false;
	static constexpr int radix = __FLT_RADIX__;
	static constexpr int digits = __FLT_MANT_DIG__;
	static constexpr int digits10 = __FLT_DIG__;
	static constexpr int max_digits10 = 9;
	static constexpr float min() { return 1.1754943508222875e-38f; }
	static constexpr float max() { return 3.4028234663852886e38f; }
	static constexpr float lowest() { return -max(); }
	static constexpr float epsilon() { return 1.1920928955078125e-7f; }
	static constexpr float infinity() { return __builtin_huge_valf(); }
};

template <>
struct numeric_limits<double> {
	static constexpr bool is_specialized = true;
	static constexpr bool is_signed = true;
	static constexpr bool is_integer = false;
	static constexpr bool is_exact = false;
	static constexpr bool has_infinity = true;
	static constexpr bool has_quiet_NaN = true;
	static constexpr bool has_signaling_NaN = true;
	static constexpr bool is_bounded = true;
	static constexpr bool is_modulo = false;
	static constexpr int radix = __FLT_RADIX__;
	static constexpr int digits = __DBL_MANT_DIG__;
	static constexpr int digits10 = __DBL_DIG__;
	static constexpr int max_digits10 = 17;
	static constexpr double min() { return 2.2250738585072014e-308; }
	static constexpr double max() { return 1.7976931348623157e308; }
	static constexpr double lowest() { return -max(); }
	static constexpr double epsilon() { return 2.2204460492503131e-16; }
	static constexpr double infinity() { return __builtin_huge_val(); }
};

enum class errc {
	none = 0,
	operation_not_permitted = 1,
	no_such_file_or_directory = 2,
	no_such_process = 3,
	interrupted = 4,
	io_error = 5,
	no_such_device_or_address = 6,
	argument_list_too_long = 7,
	executable_format_error = 8,
	bad_file_descriptor = 9,
	no_child_process = 10,
	resource_unavailable_try_again = 11,
	operation_would_block = 11,
	not_enough_memory = 12,
	permission_denied = 13,
	bad_address = 14,
	device_or_resource_busy = 16,
	file_exists = 17,
	cross_device_link = 18,
	no_such_device = 19,
	not_a_directory = 20,
	is_a_directory = 21,
	invalid_argument = 22,
	too_many_files_open_in_system = 23,
	too_many_files_open = 24,
	inappropriate_io_control_operation = 25,
	text_file_busy = 26,
	file_too_large = 27,
	no_space_on_device = 28,
	invalid_seek = 29,
	read_only_file_system = 30,
	too_many_links = 31,
	broken_pipe = 32,
	argument_out_of_domain = 33,
	result_out_of_range = 34,
	resource_deadlock_would_occur = 35,
	operation_in_progress = 36,
	connection_already_in_progress = 37,
	not_a_socket = 38,
	destination_address_required = 39,
	message_size = 40,
	wrong_protocol_type = 41,
	no_protocol_option = 42,
	protocol_not_supported = 43,
	not_supported = 45,
	operation_not_supported = 45,
	address_family_not_supported = 47,
	address_in_use = 48,
	address_not_available = 49,
	network_down = 50,
	network_unreachable = 51,
	network_reset = 52,
	connection_aborted = 53,
	connection_reset = 54,
	no_buffer_space = 55,
	already_connected = 56,
	not_connected = 57,
	timed_out = 60,
	connection_refused = 61,
	too_many_symbolic_link_levels = 62,
	function_not_supported = 78,
	filename_too_long = 63,
	host_unreachable = 65,
	directory_not_empty = 66,
	no_lock_available = 77,
	identifier_removed = 82,
	no_message = 83,
	no_message_available = 83,
	value_too_large = 84,
	operation_canceled = 89,
	illegal_byte_sequence = 92,
	protocol_error = 93,
	bad_message = 94,
	owner_dead = 96,
	no_link = 97,
	no_stream_resources = 98,
	not_a_stream = 99,
	stream_timeout = 101,
	state_not_recoverable = 104
};

struct from_chars_result {
	const char* ptr;
	errc ec;
};

struct to_chars_result {
	char* ptr;
	errc ec;
};

inline int digit_from_char(char value) {
	if (value >= '0' && value <= '9') {
		return value - '0';
	}
	if (value >= 'a' && value <= 'z') {
		return value - 'a' + 10;
	}
	if (value >= 'A' && value <= 'Z') {
		return value - 'A' + 10;
	}
	return -1;
}

template <typename T>
from_chars_result from_chars(const char* first, const char* last, T& value, int base = 10) {
	if (!first || !last || first > last || base < 2 || base > 36) {
		return {first, errc::invalid_argument};
	}

	const bool signed_type = ((T)-1) < (T)0;
	const char* cursor = first;
	bool negative = false;
	if (cursor != last && (*cursor == '-' || *cursor == '+')) {
		if (!signed_type) {
			return {first, errc::invalid_argument};
		}
		negative = *cursor == '-';
		++cursor;
	}

	if (cursor == last) {
		return {first, errc::invalid_argument};
	}

	unsigned long long limit = (unsigned long long)numeric_limits<T>::max();
	if (signed_type && negative) {
		const T min_value = numeric_limits<T>::min();
		limit = (unsigned long long)(-(min_value + (T)1)) + 1ULL;
	}

	unsigned long long result = 0;
	const char* digits_begin = cursor;
	for (; cursor != last; ++cursor) {
		const int digit = digit_from_char(*cursor);
		if (digit < 0 || digit >= base) {
			break;
		}
		if (result > (limit - (unsigned long long)digit) / (unsigned long long)base) {
			while (++cursor != last) {
				const int extra_digit = digit_from_char(*cursor);
				if (extra_digit < 0 || extra_digit >= base) {
					break;
				}
			}
			return {cursor, errc::result_out_of_range};
		}
		result = result * (unsigned long long)base + (unsigned long long)digit;
	}

	if (cursor == digits_begin) {
		return {first, errc::invalid_argument};
	}

	if (signed_type && negative) {
		if (result == limit) {
			value = numeric_limits<T>::min();
		} else {
			value = (T)(-(long long)result);
		}
	} else {
		value = (T)result;
	}
	return {cursor, errc::none};
}

template <typename T>
to_chars_result to_chars(char* first, char* last, T value, int base = 10) {
	if (!first || !last || first > last || base < 2 || base > 36) {
		return {first, errc::invalid_argument};
	}

	const bool signed_type = ((T)-1) < (T)0;
	bool negative = false;
	unsigned long long magnitude = 0;
	if (signed_type && value < (T)0) {
		negative = true;
		magnitude = (unsigned long long)(-(value + (T)1)) + 1ULL;
	} else {
		magnitude = (unsigned long long)value;
	}

	char scratch[65];
	size_t count = 0;
	do {
		const unsigned digit = (unsigned)(magnitude % (unsigned)base);
		scratch[count++] = (char)(digit < 10u ? ('0' + digit) : ('a' + digit - 10u));
		magnitude /= (unsigned)base;
	} while (magnitude != 0ULL);

	if (negative) {
		scratch[count++] = '-';
	}

	if ((size_t)(last - first) < count) {
		return {last, errc::result_out_of_range};
	}

	for (size_t i = 0; i < count; ++i) {
		first[i] = scratch[count - i - 1u];
	}
	return {first + count, errc::none};
}

inline string to_string(int value);
inline string to_string(unsigned int value);
inline string to_string(long value);
inline string to_string(unsigned long value);
inline string to_string(long long value);
inline string to_string(unsigned long long value);
inline string to_string(float value);
inline string to_string(double value);

class string_builder {
public:
	string_builder() = default;

	explicit string_builder(size_t reserve_count) {
		buffer_.reserve(reserve_count);
	}

	string_builder& append(string_view text) {
		buffer_.append(text);
		return *this;
	}

	string_builder& append(const char* text) {
		buffer_.append(text);
		return *this;
	}

	string_builder& append(char value) {
		buffer_.push_back(value);
		return *this;
	}

	template <typename T>
	string_builder& append_number(T value) {
		buffer_ += wm::to_string(value);
		return *this;
	}

	void clear() noexcept {
		buffer_.clear();
	}

	size_t size() const noexcept {
		return buffer_.size();
	}

	bool empty() const noexcept {
		return buffer_.empty();
	}

	const string& str() const noexcept {
		return buffer_;
	}

	string release() {
		string result(wm::move(buffer_));
		buffer_.clear();
		return result;
	}

private:
	string buffer_;
};

inline string to_string(int value) {
	char buffer[32];
	to_chars_result result = wm::to_chars(buffer, buffer + sizeof(buffer), value);
	return result.ec == errc::none ? string(buffer, (size_t)(result.ptr - buffer)) : string();
}

inline string to_string(unsigned int value) {
	char buffer[32];
	to_chars_result result = wm::to_chars(buffer, buffer + sizeof(buffer), value);
	return result.ec == errc::none ? string(buffer, (size_t)(result.ptr - buffer)) : string();
}

inline string to_string(long value) {
	char buffer[32];
	to_chars_result result = wm::to_chars(buffer, buffer + sizeof(buffer), value);
	return result.ec == errc::none ? string(buffer, (size_t)(result.ptr - buffer)) : string();
}

inline string to_string(unsigned long value) {
	char buffer[32];
	to_chars_result result = wm::to_chars(buffer, buffer + sizeof(buffer), value);
	return result.ec == errc::none ? string(buffer, (size_t)(result.ptr - buffer)) : string();
}

inline string to_string(long long value) {
	char buffer[32];
	to_chars_result result = wm::to_chars(buffer, buffer + sizeof(buffer), value);
	return result.ec == errc::none ? string(buffer, (size_t)(result.ptr - buffer)) : string();
}

inline string to_string(unsigned long long value) {
	char buffer[32];
	to_chars_result result = wm::to_chars(buffer, buffer + sizeof(buffer), value);
	return result.ec == errc::none ? string(buffer, (size_t)(result.ptr - buffer)) : string();
}

inline string to_string(double value) {
	if (value != value) {
		return string("nan");
	}
	const bool negative = value < 0.0 || (value == 0.0 && 1.0 / value < 0.0);
	if (value == numeric_limits<double>::infinity()) {
		return string("inf");
	}
	if (value == -numeric_limits<double>::infinity()) {
		return string("-inf");
	}
	double magnitude = negative ? -value : value;
	unsigned long long whole = (unsigned long long)magnitude;
	unsigned long long fractional = (unsigned long long)((magnitude - (double)whole) * 1000000.0 + 0.5);
	if (fractional >= 1000000ull) {
		++whole;
		fractional -= 1000000ull;
	}
	string result;
	if (negative) {
		result.push_back('-');
	}
	result += wm::to_string(whole);
	result.push_back('.');
	unsigned long long divisor = 100000ull;
	for (int i = 0; i < 6; ++i) {
		result.push_back((char)('0' + (fractional / divisor) % 10ull));
		divisor /= 10ull;
	}
	return result;
}

inline string to_string(float value) {
	return wm::to_string((double)value);
}

inline long long stoll(string_view text, size_t* position = nullptr, int base = 10) {
	long long value = 0;
	from_chars_result result = wm::from_chars(text.data(), text.data() + text.size(), value, base);
	if (result.ec != errc::none) {
		__builtin_trap();
	}
	if (position) {
		*position = (size_t)(result.ptr - text.data());
	}
	return value;
}

inline int stoi(string_view text, size_t* position = nullptr, int base = 10) {
	int value = 0;
	from_chars_result result = wm::from_chars(text.data(), text.data() + text.size(), value, base);
	if (result.ec != errc::none) {
		__builtin_trap();
	}
	if (position) {
		*position = (size_t)(result.ptr - text.data());
	}
	return value;
}

inline double stod(string_view text, size_t* position = nullptr) {
	const char* cursor = text.data();
	const char* last = text.data() + text.size();
	while (cursor != last && (*cursor == ' ' || *cursor == '\t' || *cursor == '\n' || *cursor == '\r')) {
		++cursor;
	}
	bool negative = false;
	if (cursor != last && (*cursor == '+' || *cursor == '-')) {
		negative = *cursor == '-';
		++cursor;
	}

	double value = 0.0;
	bool has_digit = false;
	while (cursor != last && *cursor >= '0' && *cursor <= '9') {
		has_digit = true;
		value = value * 10.0 + (double)(*cursor - '0');
		++cursor;
	}
	if (cursor != last && *cursor == '.') {
		++cursor;
		double scale = 0.1;
		while (cursor != last && *cursor >= '0' && *cursor <= '9') {
			has_digit = true;
			value += (double)(*cursor - '0') * scale;
			scale *= 0.1;
			++cursor;
		}
	}
	if (!has_digit) {
		__builtin_trap();
	}
	if (cursor != last && (*cursor == 'e' || *cursor == 'E')) {
		const char* exponent_start = cursor;
		++cursor;
		bool exponent_negative = false;
		if (cursor != last && (*cursor == '+' || *cursor == '-')) {
			exponent_negative = *cursor == '-';
			++cursor;
		}
		int exponent = 0;
		bool has_exponent = false;
		while (cursor != last && *cursor >= '0' && *cursor <= '9') {
			has_exponent = true;
			exponent = exponent * 10 + (*cursor - '0');
			++cursor;
		}
		if (!has_exponent) {
			cursor = exponent_start;
		} else {
			double factor = 1.0;
			for (int i = 0; i < exponent; ++i) {
				factor *= 10.0;
			}
			value = exponent_negative ? value / factor : value * factor;
		}
	}
	if (position) {
		*position = (size_t)(cursor - text.data());
	}
	return negative ? -value : value;
}

inline float stof(string_view text, size_t* position = nullptr) {
	return (float)wm::stod(text, position);
}

}

#endif
