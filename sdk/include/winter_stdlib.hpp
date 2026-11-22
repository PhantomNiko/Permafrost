#ifndef WINTER_STDLIB_HPP
#define WINTER_STDLIB_HPP

#include "winter_algorithms.hpp"
#include "ctype.h"

namespace std {

using wm::nullptr_t;
using wm::ptrdiff_t;
using wm::size_t;

enum class byte : unsigned char {};

template <typename IntegerType>
constexpr IntegerType to_integer(byte value) noexcept {
	return static_cast<IntegerType>(value);
}

constexpr byte operator|(byte left, byte right) noexcept {
	return static_cast<byte>(static_cast<unsigned char>(left) | static_cast<unsigned char>(right));
}

constexpr byte operator&(byte left, byte right) noexcept {
	return static_cast<byte>(static_cast<unsigned char>(left) & static_cast<unsigned char>(right));
}

constexpr byte operator^(byte left, byte right) noexcept {
	return static_cast<byte>(static_cast<unsigned char>(left) ^ static_cast<unsigned char>(right));
}

constexpr byte operator~(byte value) noexcept {
	return static_cast<byte>(~static_cast<unsigned char>(value));
}

template <typename IntegerType>
constexpr byte operator<<(byte value, IntegerType shift) noexcept {
	return static_cast<byte>(static_cast<unsigned char>(value) << shift);
}

template <typename IntegerType>
constexpr byte operator>>(byte value, IntegerType shift) noexcept {
	return static_cast<byte>(static_cast<unsigned char>(value) >> shift);
}

inline byte& operator|=(byte& left, byte right) noexcept {
	left = left | right;
	return left;
}

inline byte& operator&=(byte& left, byte right) noexcept {
	left = left & right;
	return left;
}

inline byte& operator^=(byte& left, byte right) noexcept {
	left = left ^ right;
	return left;
}

template <typename IntegerType>
inline byte& operator<<=(byte& value, IntegerType shift) noexcept {
	value = value << shift;
	return value;
}

template <typename IntegerType>
inline byte& operator>>=(byte& value, IntegerType shift) noexcept {
	value = value >> shift;
	return value;
}

using wm::forward;
using wm::move;
using wm::exchange;
using wm::as_const;
using wm::addressof;
using wm::launder;
using wm::swap;

using wm::declval;
	using wm::remove_reference;
	using wm::remove_reference_t;
	using wm::add_lvalue_reference;
	using wm::add_lvalue_reference_t;
	using wm::add_rvalue_reference;
	using wm::add_rvalue_reference_t;
	using wm::remove_const;
	using wm::remove_const_t;
	using wm::remove_volatile;
	using wm::remove_volatile_t;
using wm::remove_cv;
using wm::remove_cv_t;
template <typename T>
struct remove_cvref {
	using type = remove_cv_t<remove_reference_t<T>>;
};
template <typename T>
using remove_cvref_t = typename remove_cvref<T>::type;
using wm::add_const;
using wm::add_volatile;
using wm::add_cv;
using wm::add_const_t;
using wm::add_volatile_t;
using wm::add_cv_t;
using wm::type_identity;
using wm::type_identity_t;
using wm::is_same;
using wm::is_const;
using wm::is_volatile;
using wm::is_pointer;
using wm::is_integral;
using wm::is_floating_point;
using wm::is_arithmetic;
using wm::is_void;
using wm::is_null_pointer;
using wm::is_lvalue_reference;
using wm::is_rvalue_reference;
using wm::is_reference;
using wm::is_array;
using wm::is_function;
using wm::is_enum;
using wm::is_class;
using wm::is_union;
using wm::is_final;
using wm::is_member_pointer;
using wm::is_trivial;
using wm::is_base_of;
using wm::remove_pointer;
using wm::remove_pointer_t;
using wm::add_pointer;
using wm::add_pointer_t;
using wm::remove_extent;
using wm::remove_extent_t;
using wm::remove_all_extents;
using wm::remove_all_extents_t;
using wm::decay;
using wm::decay_t;
using wm::integral_constant;
using wm::true_type;
using wm::false_type;
using wm::bool_constant;
using wm::conditional;
using wm::conditional_t;
using wm::void_t;
using wm::enable_if;
using wm::enable_if_t;
using wm::is_constructible;
using wm::is_default_constructible;
using wm::is_copy_constructible;
using wm::is_move_constructible;
using wm::is_assignable;
using wm::is_copy_assignable;
using wm::is_move_assignable;
using wm::is_destructible;
using wm::is_trivially_destructible;
using wm::is_trivially_copyable;
using wm::is_convertible;
using wm::is_polymorphic;
using wm::has_virtual_destructor;
using wm::invoke_result;
using wm::invoke_result_t;
using wm::is_invocable;
using wm::invoke;

using ::isalnum;
using ::isalpha;
using ::isblank;
using ::iscntrl;
using ::isdigit;
using ::isgraph;
using ::islower;
using ::isprint;
using ::ispunct;
using ::isspace;
using ::isupper;
using ::isxdigit;
using ::tolower;
using ::toupper;

template <typename A, typename B>
inline constexpr bool is_same_v = is_same<A, B>::value;

template <typename T>
inline constexpr bool is_const_v = is_const<T>::value;
template <typename T>
inline constexpr bool is_volatile_v = is_volatile<T>::value;
template <typename T>
inline constexpr bool is_pointer_v = is_pointer<T>::value;
template <typename T>
inline constexpr bool is_integral_v = is_integral<T>::value;
template <typename T>
inline constexpr bool is_floating_point_v = is_floating_point<T>::value;
template <typename T>
inline constexpr bool is_arithmetic_v = is_arithmetic<T>::value;
template <typename T>
inline constexpr bool is_void_v = is_void<T>::value;
template <typename T>
inline constexpr bool is_null_pointer_v = is_null_pointer<T>::value;
template <typename T>
inline constexpr bool is_lvalue_reference_v = is_lvalue_reference<T>::value;
template <typename T>
inline constexpr bool is_rvalue_reference_v = is_rvalue_reference<T>::value;
template <typename T>
inline constexpr bool is_reference_v = is_reference<T>::value;
template <typename T>
inline constexpr bool is_array_v = is_array<T>::value;
template <typename T>
inline constexpr bool is_function_v = is_function<T>::value;
template <typename T>
inline constexpr bool is_enum_v = is_enum<T>::value;
template <typename T>
inline constexpr bool is_class_v = is_class<T>::value;
template <typename T>
inline constexpr bool is_union_v = is_union<T>::value;
template <typename T>
inline constexpr bool is_final_v = is_final<T>::value;
template <typename T>
inline constexpr bool is_member_pointer_v = is_member_pointer<T>::value;
template <typename T>
inline constexpr bool is_trivial_v = is_trivial<T>::value;
template <typename Base, typename Derived>
inline constexpr bool is_base_of_v = is_base_of<Base, Derived>::value;
template <typename T, typename... Args>
inline constexpr bool is_constructible_v = is_constructible<T, Args...>::value;
template <typename T>
inline constexpr bool is_default_constructible_v = is_default_constructible<T>::value;
template <typename T>
inline constexpr bool is_copy_constructible_v = is_copy_constructible<T>::value;
template <typename T>
inline constexpr bool is_move_constructible_v = is_move_constructible<T>::value;
template <typename T, typename U>
inline constexpr bool is_assignable_v = is_assignable<T, U>::value;
template <typename T>
inline constexpr bool is_copy_assignable_v = is_copy_assignable<T>::value;
template <typename T>
inline constexpr bool is_move_assignable_v = is_move_assignable<T>::value;
template <typename T>
inline constexpr bool is_destructible_v = is_destructible<T>::value;
	template <typename T>
	inline constexpr bool is_trivially_destructible_v = is_trivially_destructible<T>::value;
	template <typename T>
	inline constexpr bool is_trivially_copyable_v = is_trivially_copyable<T>::value;
	template <typename T>
	struct is_standard_layout : bool_constant<__is_standard_layout(T)> {};
	template <typename T>
	inline constexpr bool is_standard_layout_v = is_standard_layout<T>::value;
	template <typename T>
	struct alignment_of : integral_constant<size_t, __alignof(T)> {};
	template <typename T>
	inline constexpr size_t alignment_of_v = alignment_of<T>::value;
	template <typename T>
	struct is_scalar : bool_constant<is_arithmetic<T>::value || is_enum<T>::value || is_pointer<T>::value || is_member_pointer<T>::value || is_null_pointer<T>::value> {};
	template <typename T>
	inline constexpr bool is_scalar_v = is_scalar<T>::value;
	template <typename T>
	struct is_fundamental : bool_constant<is_arithmetic<T>::value || is_void<T>::value || is_null_pointer<T>::value> {};
	template <typename T>
	inline constexpr bool is_fundamental_v = is_fundamental<T>::value;
	template <typename T, typename... Args>
	struct is_trivially_constructible : bool_constant<__is_trivially_constructible(T, Args...)> {};
template <typename T, typename... Args>
inline constexpr bool is_trivially_constructible_v = is_trivially_constructible<T, Args...>::value;
template <typename T>
struct is_trivially_default_constructible : bool_constant<__is_trivially_constructible(T)> {};
template <typename T>
inline constexpr bool is_trivially_default_constructible_v = is_trivially_default_constructible<T>::value;
template <typename T>
struct is_trivially_copy_constructible : bool_constant<__is_trivially_constructible(T, const T&)> {};
template <typename T>
inline constexpr bool is_trivially_copy_constructible_v = is_trivially_copy_constructible<T>::value;
template <typename T>
struct is_trivially_move_constructible : bool_constant<__is_trivially_constructible(T, T&&)> {};
template <typename T>
inline constexpr bool is_trivially_move_constructible_v = is_trivially_move_constructible<T>::value;
template <typename From, typename To>
inline constexpr bool is_convertible_v = is_convertible<From, To>::value;
template <typename T, bool = is_integral<T>::value>
struct __tayga_is_unsigned_impl : false_type {};
template <typename T>
struct __tayga_is_unsigned_impl<T, true> : bool_constant<(T(0) < T(-1))> {};
template <typename T>
struct is_unsigned : __tayga_is_unsigned_impl<T> {};
template <typename T>
inline constexpr bool is_unsigned_v = is_unsigned<T>::value;
template <typename T, bool = is_integral<T>::value>
struct __tayga_is_signed_impl : false_type {};
template <typename T>
struct __tayga_is_signed_impl<T, true> : bool_constant<(T(-1) < T(0))> {};
template <typename T>
struct is_signed : __tayga_is_signed_impl<T> {};
template <typename T>
inline constexpr bool is_signed_v = is_signed<T>::value;
template <typename T>
struct make_unsigned;
template <> struct make_unsigned<signed char> { using type = unsigned char; };
template <> struct make_unsigned<unsigned char> { using type = unsigned char; };
template <> struct make_unsigned<short> { using type = unsigned short; };
template <> struct make_unsigned<unsigned short> { using type = unsigned short; };
template <> struct make_unsigned<int> { using type = unsigned int; };
template <> struct make_unsigned<unsigned int> { using type = unsigned int; };
template <> struct make_unsigned<long> { using type = unsigned long; };
template <> struct make_unsigned<unsigned long> { using type = unsigned long; };
template <> struct make_unsigned<long long> { using type = unsigned long long; };
template <> struct make_unsigned<unsigned long long> { using type = unsigned long long; };
template <typename T>
using make_unsigned_t = typename make_unsigned<T>::type;
template <typename T>
struct make_signed;
template <> struct make_signed<signed char> { using type = signed char; };
template <> struct make_signed<unsigned char> { using type = signed char; };
template <> struct make_signed<short> { using type = short; };
template <> struct make_signed<unsigned short> { using type = short; };
template <> struct make_signed<int> { using type = int; };
template <> struct make_signed<unsigned int> { using type = int; };
template <> struct make_signed<long> { using type = long; };
template <> struct make_signed<unsigned long> { using type = long; };
template <> struct make_signed<long long> { using type = long long; };
template <> struct make_signed<unsigned long long> { using type = long long; };
template <typename T>
using make_signed_t = typename make_signed<T>::type;
template <typename...>
struct common_type;
template <typename T>
struct common_type<T> {
	using type = decay_t<T>;
};
template <typename A, typename B>
struct common_type<A, B> {
	using type = decay_t<decltype(true ? declval<A>() : declval<B>())>;
};
template <typename A, typename B, typename... Rest>
struct common_type<A, B, Rest...> {
	using type = typename common_type<typename common_type<A, B>::type, Rest...>::type;
};
template <typename... Types>
using common_type_t = typename common_type<Types...>::type;
template <typename T>
struct negation : bool_constant<!bool(T::value)> {};
template <typename T>
inline constexpr bool negation_v = negation<T>::value;
template <typename...>
struct conjunction : true_type {};
template <typename T>
struct conjunction<T> : T {};
template <typename T, typename... Rest>
struct conjunction<T, Rest...> : conditional_t<bool(T::value), conjunction<Rest...>, T> {};
template <typename... Types>
inline constexpr bool conjunction_v = conjunction<Types...>::value;
template <typename...>
struct disjunction : false_type {};
template <typename T>
struct disjunction<T> : T {};
template <typename T, typename... Rest>
struct disjunction<T, Rest...> : conditional_t<bool(T::value), T, disjunction<Rest...>> {};
template <typename... Types>
inline constexpr bool disjunction_v = disjunction<Types...>::value;
template <typename T>
inline constexpr bool has_virtual_destructor_v = has_virtual_destructor<T>::value;
template <typename Fn, typename... Args>
inline constexpr bool is_invocable_v = is_invocable<Fn, Args...>::value;

template <typename T>
struct underlying_type {
	using type = __underlying_type(T);
};

template <typename T>
using underlying_type_t = typename underlying_type<T>::type;

[[noreturn]] inline void terminate() noexcept {
	__builtin_trap();
	for (;;) {}
}

using wm::monostate;
using wm::pair;

template <typename A, typename B>
constexpr pair<decay_t<A>, decay_t<B>> make_pair(A&& left, B&& right) {
	return pair<decay_t<A>, decay_t<B>>(forward<A>(left), forward<B>(right));
}

using wm::piecewise_construct_t;
using wm::piecewise_construct;
using wm::input_iterator_tag;
using wm::output_iterator_tag;
using wm::forward_iterator_tag;
using wm::bidirectional_iterator_tag;
using wm::random_access_iterator_tag;
using wm::iterator_traits;
using wm::advance;
using wm::next;
using wm::prev;
using wm::begin;
using wm::end;
using wm::cbegin;
using wm::cend;

template <typename Container>
constexpr auto rbegin(Container& container) -> decltype(container.rbegin()) {
	return container.rbegin();
}

template <typename Container>
constexpr auto rbegin(const Container& container) -> decltype(container.rbegin()) {
	return container.rbegin();
}

template <typename Container>
constexpr auto rend(Container& container) -> decltype(container.rend()) {
	return container.rend();
}

template <typename Container>
constexpr auto rend(const Container& container) -> decltype(container.rend()) {
	return container.rend();
}

template <typename Container>
constexpr auto size(const Container& container) -> decltype(container.size()) {
	return container.size();
}

template <typename T, size_t N>
constexpr size_t size(const T (&)[N]) noexcept {
	return N;
}

template <typename Container>
constexpr auto empty(const Container& container) -> decltype(container.empty()) {
	return container.empty();
}

template <typename T, size_t N>
constexpr bool empty(const T (&)[N]) noexcept {
	return N == 0;
}

template <typename Iterator>
class reverse_iterator {
public:
	using iterator_type = Iterator;
	using difference_type = typename iterator_traits<Iterator>::difference_type;
	using value_type = typename iterator_traits<Iterator>::value_type;
	using pointer = typename iterator_traits<Iterator>::pointer;
	using reference = typename iterator_traits<Iterator>::reference;
	using iterator_category = typename iterator_traits<Iterator>::iterator_category;

	constexpr reverse_iterator() : current_() {}
	explicit constexpr reverse_iterator(Iterator current) : current_(current) {}

	template <typename OtherIterator, typename = enable_if_t<is_convertible<OtherIterator, Iterator>::value>>
	constexpr reverse_iterator(const reverse_iterator<OtherIterator>& other) : current_(other.base()) {}

	template <typename OtherReverseIterator,
	          typename OtherBase = decltype(declval<const OtherReverseIterator&>().base()),
	          typename = enable_if_t<is_convertible<OtherBase, Iterator>::value>>
	constexpr reverse_iterator(const OtherReverseIterator& other) : current_(other.base()) {}

	template <typename OtherIterator, typename = enable_if_t<is_convertible<OtherIterator, Iterator>::value>>
	constexpr reverse_iterator& operator=(const reverse_iterator<OtherIterator>& other) {
		current_ = other.base();
		return *this;
	}

	constexpr Iterator base() const { return current_; }

	constexpr reference operator*() const {
		Iterator previous = current_;
		--previous;
		return *previous;
	}

	constexpr pointer operator->() const {
		return addressof(operator*());
	}

	constexpr reverse_iterator& operator++() {
		--current_;
		return *this;
	}

	constexpr reverse_iterator operator++(int) {
		reverse_iterator copy(*this);
		--current_;
		return copy;
	}

	constexpr reverse_iterator& operator--() {
		++current_;
		return *this;
	}

	constexpr reverse_iterator operator--(int) {
		reverse_iterator copy(*this);
		++current_;
		return copy;
	}

	constexpr reverse_iterator& operator+=(difference_type count) {
		current_ -= count;
		return *this;
	}

	constexpr reverse_iterator& operator-=(difference_type count) {
		current_ += count;
		return *this;
	}

	constexpr reverse_iterator operator+(difference_type count) const {
		return reverse_iterator(current_ - count);
	}

	constexpr reverse_iterator operator-(difference_type count) const {
		return reverse_iterator(current_ + count);
	}

	constexpr reference operator[](difference_type index) const {
		return *(*this + index);
	}

private:
	Iterator current_{};
};

template <typename LeftIterator, typename RightIterator>
constexpr bool operator==(const reverse_iterator<LeftIterator>& left, const reverse_iterator<RightIterator>& right) {
	return left.base() == right.base();
}

template <typename LeftIterator, typename RightIterator>
constexpr bool operator!=(const reverse_iterator<LeftIterator>& left, const reverse_iterator<RightIterator>& right) {
	return left.base() != right.base();
}

template <typename LeftIterator, typename RightIterator>
constexpr bool operator<(const reverse_iterator<LeftIterator>& left, const reverse_iterator<RightIterator>& right) {
	return right.base() < left.base();
}

template <typename LeftIterator, typename RightIterator>
constexpr bool operator>(const reverse_iterator<LeftIterator>& left, const reverse_iterator<RightIterator>& right) {
	return right < left;
}

template <typename LeftIterator, typename RightIterator>
constexpr bool operator<=(const reverse_iterator<LeftIterator>& left, const reverse_iterator<RightIterator>& right) {
	return !(right < left);
}

template <typename LeftIterator, typename RightIterator>
constexpr bool operator>=(const reverse_iterator<LeftIterator>& left, const reverse_iterator<RightIterator>& right) {
	return !(left < right);
}

template <typename LeftIterator, typename RightIterator>
constexpr auto operator-(const reverse_iterator<LeftIterator>& left, const reverse_iterator<RightIterator>& right)
	-> decltype(right.base() - left.base()) {
	return right.base() - left.base();
}

template <typename Iterator>
constexpr reverse_iterator<Iterator> make_reverse_iterator(Iterator current) {
	return reverse_iterator<Iterator>(current);
}

template <typename Iterator>
class move_iterator {
public:
	using iterator_type = Iterator;
	using iterator_category = typename iterator_traits<Iterator>::iterator_category;
	using difference_type = typename iterator_traits<Iterator>::difference_type;
	using value_type = typename iterator_traits<Iterator>::value_type;
	using pointer = typename iterator_traits<Iterator>::pointer;
	using reference = value_type&&;

	constexpr move_iterator() : current_() {}
	explicit constexpr move_iterator(Iterator current) : current_(current) {}

	constexpr Iterator base() const { return current_; }

	constexpr reference operator*() const {
		return std::move(*current_);
	}

	constexpr pointer operator->() const {
		return current_;
	}

	constexpr move_iterator& operator++() {
		++current_;
		return *this;
	}

	constexpr move_iterator operator++(int) {
		move_iterator copy(*this);
		++current_;
		return copy;
	}

	constexpr move_iterator& operator--() {
		--current_;
		return *this;
	}

	constexpr move_iterator operator--(int) {
		move_iterator copy(*this);
		--current_;
		return copy;
	}

	constexpr move_iterator& operator+=(difference_type count) {
		current_ += count;
		return *this;
	}

	constexpr move_iterator& operator-=(difference_type count) {
		current_ -= count;
		return *this;
	}

	constexpr move_iterator operator+(difference_type count) const {
		return move_iterator(current_ + count);
	}

	constexpr move_iterator operator-(difference_type count) const {
		return move_iterator(current_ - count);
	}

	constexpr difference_type operator-(const move_iterator& other) const {
		return current_ - other.current_;
	}

	constexpr reference operator[](difference_type index) const {
		return std::move(current_[index]);
	}

	constexpr bool operator==(const move_iterator& other) const { return current_ == other.current_; }
	constexpr bool operator!=(const move_iterator& other) const { return current_ != other.current_; }
	constexpr bool operator<(const move_iterator& other) const { return current_ < other.current_; }
	constexpr bool operator>(const move_iterator& other) const { return other < *this; }
	constexpr bool operator<=(const move_iterator& other) const { return !(other < *this); }
	constexpr bool operator>=(const move_iterator& other) const { return !(*this < other); }

private:
	Iterator current_;
};

template <typename Iterator>
constexpr move_iterator<Iterator> make_move_iterator(Iterator current) {
	return move_iterator<Iterator>(current);
}

using wm::back_insert_iterator;
using wm::back_inserter;
using wm::front_insert_iterator;
using wm::front_inserter;
using wm::insert_iterator;
using wm::inserter;
using wm::reference_wrapper;
using wm::ref;
using wm::cref;
using wm::tuple;

template <size_t Index, typename Tuple>
struct tuple_element;

template <typename Tuple, typename = void>
struct tuple_size;

template <size_t Index, typename... Types>
struct tuple_element<Index, wm::tuple<Types...>> : wm::tuple_element<Index, wm::tuple<Types...>> {};

template <size_t Index, typename... Types>
struct tuple_element<Index, const wm::tuple<Types...>> {
	using type = const typename tuple_element<Index, wm::tuple<Types...>>::type;
};

template <typename... Types>
struct tuple_size<wm::tuple<Types...>> : wm::integral_constant<size_t, wm::tuple_size<wm::tuple<Types...>>::value> {};

template <typename... Types>
struct tuple_size<const wm::tuple<Types...>> : tuple_size<wm::tuple<Types...>> {};

template <size_t Index, typename A, typename B>
struct tuple_element<Index, wm::pair<A, B>>;

template <typename A, typename B>
struct tuple_element<0, wm::pair<A, B>> { using type = A; };

template <typename A, typename B>
struct tuple_element<1, wm::pair<A, B>> { using type = B; };

template <size_t Index, typename A, typename B>
struct tuple_element<Index, const wm::pair<A, B>> {
	using type = const typename tuple_element<Index, wm::pair<A, B>>::type;
};

template <typename A, typename B>
struct tuple_size<wm::pair<A, B>> : wm::integral_constant<size_t, 2> {};

template <typename A, typename B>
struct tuple_size<const wm::pair<A, B>> : tuple_size<wm::pair<A, B>> {};

template <size_t Index, typename T, size_t N>
struct tuple_element<Index, wm::array<T, N>> { using type = T; };

template <size_t Index, typename T, size_t N>
struct tuple_element<Index, const wm::array<T, N>> { using type = const T; };

template <typename T, size_t N>
struct tuple_size<wm::array<T, N>> : wm::integral_constant<size_t, N> {};

template <typename T, size_t N>
struct tuple_size<const wm::array<T, N>> : tuple_size<wm::array<T, N>> {};

template <size_t Index, typename Tuple>
struct tuple_element<Index, const Tuple> {
	using type = const typename tuple_element<Index, Tuple>::type;
};

template <size_t Index, typename Tuple>
struct tuple_element<Index, volatile Tuple> {
	using type = volatile typename tuple_element<Index, Tuple>::type;
};

template <size_t Index, typename Tuple>
struct tuple_element<Index, const volatile Tuple> {
	using type = const volatile typename tuple_element<Index, Tuple>::type;
};

template <typename Tuple>
struct tuple_size<const Tuple, wm::void_t<decltype(tuple_size<Tuple>::value)>> : tuple_size<Tuple> {};

template <typename Tuple>
struct tuple_size<volatile Tuple, wm::void_t<decltype(tuple_size<Tuple>::value)>> : tuple_size<Tuple> {};

template <typename Tuple>
struct tuple_size<const volatile Tuple, wm::void_t<decltype(tuple_size<Tuple>::value)>> : tuple_size<Tuple> {};

template <typename Tuple>
inline constexpr size_t tuple_size_v = tuple_size<Tuple>::value;

template <size_t Index, typename Tuple>
using tuple_element_t = typename tuple_element<Index, Tuple>::type;

using wm::tie;
using wm::ignore_t;
using wm::ignore;
using wm::get;
using wm::forward_as_tuple;

template <size_t... Indexes>
using index_sequence = wm::detail::index_sequence<Indexes...>;

template <size_t Count>
using make_index_sequence = wm::detail::make_index_sequence<Count>;

template <typename... Types>
using index_sequence_for = wm::detail::make_index_sequence<sizeof...(Types)>;

namespace tayga_detail {
template <typename Fn, typename Tuple, size_t... Indexes>
constexpr decltype(auto) apply_impl(Fn&& fn, Tuple&& tupleValue, index_sequence<Indexes...>) {
	return wm::invoke(forward<Fn>(fn), get<Indexes>(forward<Tuple>(tupleValue))...);
}
}

template <typename Fn, typename Tuple>
constexpr decltype(auto) apply(Fn&& fn, Tuple&& tupleValue) {
	using tuple_type = remove_reference_t<Tuple>;
	return tayga_detail::apply_impl(
		forward<Fn>(fn),
		forward<Tuple>(tupleValue),
		make_index_sequence<tuple_size<tuple_type>::value>{});
}

template <typename T, size_t N>
using array = wm::array<T, N>;

template <size_t N>
using bitset = wm::bitset<N>;

template <typename CharT>
struct char_traits {
	using char_type = CharT;

	static size_t length(const char_type* text) {
		size_t count = 0;
		while (text[count] != char_type()) {
			++count;
		}
		return count;
	}
};

template <typename T>
struct allocator {
	using value_type = T;
	using pointer = T*;
	using const_pointer = const T*;
	using reference = T&;
	using const_reference = const T&;
	using size_type = size_t;
	using difference_type = ptrdiff_t;

	template <typename U>
	struct rebind {
		using other = allocator<U>;
	};

	allocator() noexcept = default;

	template <typename U>
	allocator(const allocator<U>&) noexcept {}

	pointer allocate(size_type count) {
		if (count == 0) {
			return nullptr;
		}
		return static_cast<pointer>(::operator new(count * sizeof(T)));
	}

	void deallocate(pointer pointerValue, size_type) noexcept {
		::operator delete(pointerValue);
	}

	template <typename U, typename... Args>
	void construct(U* pointerValue, Args&&... args) {
		::new ((void*)pointerValue) U(forward<Args>(args)...);
	}

	template <typename U>
	void destroy(U* pointerValue) {
		pointerValue->~U();
	}
};

template <typename CharT, typename Traits = char_traits<CharT>, typename Allocator = allocator<CharT>>
class basic_string {
public:
	using traits_type = Traits;
	using value_type = CharT;
	using allocator_type = Allocator;
	using size_type = size_t;
	using iterator = CharT*;
	using const_iterator = const CharT*;

	static constexpr size_type npos = static_cast<size_type>(-1);

	basic_string() = default;

	basic_string(const CharT* text) {
		if (text) {
			const size_type count = traits_type::length(text);
			storage_.reserve(count);
			for (size_type index = 0; index < count; ++index) {
				storage_.push_back(text[index]);
			}
		}
	}

	basic_string(size_type count, CharT value) : storage_(count, value) {}

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	basic_string(InputIt first, InputIt last) : storage_(first, last) {}

	CharT& operator[](size_type index) noexcept { return storage_[index]; }
	const CharT& operator[](size_type index) const noexcept { return storage_[index]; }
	CharT& at(size_type index) {
		if (index >= storage_.size()) {
			__builtin_trap();
		}
		return storage_[index];
	}
	const CharT& at(size_type index) const {
		if (index >= storage_.size()) {
			__builtin_trap();
		}
		return storage_[index];
	}

	CharT* data() noexcept { return storage_.data(); }
	const CharT* data() const noexcept { return storage_.data(); }
	const CharT* c_str() const noexcept { return storage_.data(); }

	size_type size() const noexcept { return storage_.size(); }
	size_type length() const noexcept { return storage_.size(); }
	size_type max_size() const noexcept { return static_cast<size_type>(-1) / (sizeof(CharT) == 0 ? 1 : sizeof(CharT)) / 2; }
	bool empty() const noexcept { return storage_.empty(); }

	iterator begin() noexcept { return storage_.begin(); }
	const_iterator begin() const noexcept { return storage_.begin(); }
	iterator end() noexcept { return storage_.end(); }
	const_iterator end() const noexcept { return storage_.end(); }

	void clear() noexcept { storage_.clear(); }
	void reserve(size_type count) { storage_.reserve(count); }
	void resize(size_type count) { storage_.resize(count); }
	void resize(size_type count, CharT value) { storage_.resize(count, value); }
	void push_back(CharT value) { storage_.push_back(value); }
	void pop_back() { storage_.pop_back(); }

	basic_string& append(const basic_string& other) {
		storage_.insert(storage_.end(), other.begin(), other.end());
		return *this;
	}

	basic_string& append(size_type count, CharT value) {
		storage_.reserve(storage_.size() + count);
		for (size_type index = 0; index < count; ++index) {
			storage_.push_back(value);
		}
		return *this;
	}

	basic_string& append(std::initializer_list<CharT> values) {
		storage_.insert(storage_.end(), values.begin(), values.end());
		return *this;
	}

	basic_string& operator+=(const basic_string& other) {
		return append(other);
	}

private:
	wm::vector<CharT> storage_;
};

template <typename Traits, typename Allocator>
class basic_string<char, Traits, Allocator> : public wm::string {
public:
	using traits_type = Traits;
	using value_type = char;
	using allocator_type = Allocator;
	using size_type = size_t;
	using iterator = wm::string::iterator;
	using const_iterator = wm::string::const_iterator;
	using reverse_iterator = wm::string::reverse_iterator;
	using const_reverse_iterator = wm::string::const_reverse_iterator;

	static constexpr size_type npos = wm::string::npos;

	basic_string() = default;
	basic_string(const char* text) : wm::string(text) {}
	basic_string(const char* text, size_t count) : wm::string(text, count) {}
	basic_string(wm::string_view text) : wm::string(text) {}
	basic_string(size_t count, char value) : wm::string(count, value) {}
	basic_string(const wm::string& other) : wm::string(other) {}
	basic_string(wm::string&& other) noexcept : wm::string(wm::move(other)) {}
	basic_string(const basic_string&) = default;
	basic_string(basic_string&&) noexcept = default;

	template <typename InputIt, typename = enable_if_t<!is_integral<InputIt>::value>>
	basic_string(InputIt first, InputIt last) : wm::string(first, last) {}

	basic_string& operator=(const basic_string&) = default;
	basic_string& operator=(basic_string&&) noexcept = default;

	basic_string& operator=(const char* text) {
		wm::string::assign(text);
		return *this;
	}

	basic_string& operator=(char value) {
		wm::string::assign(1, value);
		return *this;
	}

	basic_string& operator=(std::initializer_list<char> values) {
		wm::string::assign(values.begin(), values.end());
		return *this;
	}

	template <typename StringLike,
	          typename = decltype(((const StringLike*)0)->data()),
	          typename = decltype(((const StringLike*)0)->size())>
	basic_string& operator=(const StringLike& text) {
		wm::string::assign(text.data(), text.size());
		return *this;
	}

	basic_string& append(const basic_string& other) {
		wm::string::append(other.data(), other.size());
		return *this;
	}

	basic_string& append(const wm::string& other) {
		wm::string::append(other.data(), other.size());
		return *this;
	}

	basic_string& append(const char* text) {
		wm::string::append(text);
		return *this;
	}

	basic_string& append(const char* text, size_t count) {
		wm::string::append(text, count);
		return *this;
	}

	basic_string& append(size_t count, char value) {
		wm::string::append(count, value);
		return *this;
	}

	basic_string& append(wm::string_view text) {
		wm::string::append(text);
		return *this;
	}

	basic_string& append(std::initializer_list<char> values) {
		wm::string::append(values.begin(), values.end());
		return *this;
	}

	basic_string& operator+=(const basic_string& other) {
		return append(other);
	}

	basic_string& operator+=(const wm::string& other) {
		return append(other);
	}

	basic_string& operator+=(wm::string_view text) {
		return append(text);
	}

	basic_string& operator+=(const char* text) {
		return append(text);
	}

	basic_string& operator+=(char value) {
		wm::string::push_back(value);
		return *this;
	}

	basic_string substr(size_t position, size_t count = npos) const {
		return basic_string(wm::string::substr(position, count));
	}

	basic_string str() const {
		return *this;
	}

	using wm::string::append;
};

using string = basic_string<char>;
using wstring = basic_string<wchar_t>;
using string_view = wm::string_view;

inline string operator+(const string& left, const string& right) {
	string result(left);
	result += right;
	return result;
}

template <typename LHS, typename RHS,
	typename CleanLHS = remove_cv_t<remove_reference_t<LHS>>,
	typename CleanRHS = remove_cv_t<remove_reference_t<RHS>>,
	typename = enable_if_t<is_same<CleanLHS, string>::value && is_same<CleanRHS, string>::value>>
inline string operator+(LHS&& left, RHS&& right) {
	string result(forward<LHS>(left));
	result += right;
	return result;
}

inline string operator+(const string& left, string_view right) {
	string result(left);
	result += right;
	return result;
}

inline string operator+(const string& left, const char* right) {
	string result(left);
	result += right;
	return result;
}

inline string operator+(const char* left, const string& right) {
	string result(left);
	result += right;
	return result;
}

template <typename RHS,
	typename CleanRHS = remove_cv_t<remove_reference_t<RHS>>,
	typename = enable_if_t<is_same<CleanRHS, string>::value>>
inline string operator+(const char* left, RHS&& right) {
	string result(left);
	result += right;
	return result;
}

inline string operator+(const string& left, char right) {
	string result(left);
	result += right;
	return result;
}

inline string operator+(char left, const string& right) {
	string result(1, left);
	result += right;
	return result;
}

template <typename RHS,
	typename CleanRHS = remove_cv_t<remove_reference_t<RHS>>,
	typename = enable_if_t<!is_base_of<wm::string, CleanRHS>::value &&
	                       !is_same<CleanRHS, llvm::StringRef>::value>>
auto operator+(const string& left, const RHS& right) -> decltype(right.data(), right.size(), string()) {
	string result(left);
	result.append(right.data(), right.size());
	return result;
}

template <typename T, typename Allocator = allocator<T>>
using vector = wm::vector<T, Allocator>;

template <typename T, typename Allocator = allocator<T>>
using deque = wm::deque<T>;

template <typename T, typename Allocator = allocator<T>>
using list = wm::list<T>;

template <typename T, typename Allocator = allocator<T>>
using forward_list = wm::forward_list<T>;

template <typename T>
using span = wm::span<T>;

template <typename T>
using optional = wm::optional<T>;

using wm::in_place_t;
using wm::in_place;
using wm::in_place_index_t;
using wm::in_place_index;
using wm::in_place_type_t;
using wm::in_place_type;
using wm::nullopt_t;
using wm::nullopt;
using wm::make_optional;

template <typename T>
using default_delete = wm::default_delete<T>;

template <typename T, typename Deleter = wm::default_delete<T>>
using unique_ptr = wm::unique_ptr<T, Deleter>;

template <typename T>
using shared_ptr = wm::shared_ptr<T>;

template <typename T>
using weak_ptr = wm::weak_ptr<T>;

using wm::make_unique;
using wm::make_shared;
using wm::enable_shared_from_this;
using wm::static_pointer_cast;
using wm::dynamic_pointer_cast;
using wm::const_pointer_cast;
using wm::reinterpret_pointer_cast;

template <typename... Types>
using variant = wm::variant<Types...>;

using wm::variant_npos;
using wm::variant_size;
using wm::variant_alternative;
using wm::variant_alternative_t;

template <typename Variant>
inline constexpr size_t variant_size_v = variant_size<Variant>::value;

using wm::holds_alternative;
using wm::get_if;
using wm::visit;

template <typename Signature>
using function = wm::function<Signature>;

using wm::mem_fn;

template <typename T = void>
struct hash : wm::hash<T> {};

template <typename T = void>
struct equal_to : wm::equal_to<T> {};

template <>
struct equal_to<void> {
	using is_transparent = void;

	template <typename A, typename B>
	constexpr auto operator()(A&& left, B&& right) const
		-> decltype(wm::forward<A>(left) == wm::forward<B>(right)) {
		return wm::forward<A>(left) == wm::forward<B>(right);
	}
};

template <typename T = void>
struct not_equal_to {
	constexpr bool operator()(const T& left, const T& right) const {
		return left != right;
	}
};

template <>
struct not_equal_to<void> {
	using is_transparent = void;

	template <typename A, typename B>
	constexpr auto operator()(A&& left, B&& right) const
		-> decltype(wm::forward<A>(left) != wm::forward<B>(right)) {
		return wm::forward<A>(left) != wm::forward<B>(right);
	}
};

template <typename K, typename V, typename Hash = wm::hash<K>, typename KeyEqual = wm::equal_to<K>>
using unordered_map = wm::unordered_map<K, V, Hash, KeyEqual>;

template <typename K, typename V, typename Hash = wm::hash<K>, typename KeyEqual = wm::equal_to<K>>
using unordered_multimap = wm::unordered_multimap<K, V, Hash, KeyEqual>;

template <typename T, typename Hash = wm::hash<T>, typename KeyEqual = wm::equal_to<T>>
using unordered_set = wm::unordered_set<T, Hash, KeyEqual>;

template <typename T, typename Compare = wm::less>
using set = wm::set<T, Compare>;

template <typename T, typename Compare = wm::less>
using multiset = wm::multiset<T, Compare>;

template <typename K, typename V, typename Compare = wm::less>
using map = wm::map<K, V, Compare>;

template <typename K, typename V, typename Compare = wm::less>
using multimap = wm::multimap<K, V, Compare>;

template <typename T>
using queue = wm::queue<T>;

template <typename T, typename Container = wm::deque<T>>
using stack = wm::stack<T, Container>;

template <typename T = void>
struct less {
	constexpr bool operator()(const T& left, const T& right) const {
		return left < right;
	}
};

template <>
struct less<void> {
	template <typename A, typename B>
	constexpr bool operator()(const A& left, const B& right) const {
		return left < right;
	}
};

template <typename T = void>
struct greater {
	constexpr bool operator()(const T& left, const T& right) const {
		return left > right;
	}
};

template <>
struct greater<void> {
	template <typename A, typename B>
	constexpr auto operator()(A&& left, B&& right) const -> decltype(forward<A>(left) > forward<B>(right)) {
		return forward<A>(left) > forward<B>(right);
	}
};

template <typename T = void>
struct plus {
	constexpr T operator()(const T& left, const T& right) const {
		return left + right;
	}
};

template <>
struct plus<void> {
	template <typename A, typename B>
	constexpr auto operator()(A&& left, B&& right) const -> decltype(forward<A>(left) + forward<B>(right)) {
		return forward<A>(left) + forward<B>(right);
	}
};

template <typename T = void>
struct minus {
	constexpr T operator()(const T& left, const T& right) const {
		return left - right;
	}
};

template <>
struct minus<void> {
	template <typename A, typename B>
	constexpr auto operator()(A&& left, B&& right) const -> decltype(forward<A>(left) - forward<B>(right)) {
		return forward<A>(left) - forward<B>(right);
	}
};

template <typename T = void>
struct logical_not {
	constexpr bool operator()(const T& value) const {
		return !value;
	}
};

template <>
struct logical_not<void> {
	template <typename T>
	constexpr auto operator()(T&& value) const -> decltype(!forward<T>(value)) {
		return !forward<T>(value);
	}
};

template <typename T = void>
struct logical_and {
	constexpr bool operator()(const T& left, const T& right) const {
		return left && right;
	}
};

template <>
struct logical_and<void> {
	template <typename A, typename B>
	constexpr auto operator()(A&& left, B&& right) const -> decltype(forward<A>(left) && forward<B>(right)) {
		return forward<A>(left) && forward<B>(right);
	}
};

template <typename T = void>
struct logical_or {
	constexpr bool operator()(const T& left, const T& right) const {
		return left || right;
	}
};

template <>
struct logical_or<void> {
	template <typename A, typename B>
	constexpr auto operator()(A&& left, B&& right) const -> decltype(forward<A>(left) || forward<B>(right)) {
		return forward<A>(left) || forward<B>(right);
	}
};

using wm::min;
using wm::max;
using wm::minmax;
using wm::clamp;
using wm::abs;
using wm::copy;
using wm::copy_n;
using wm::copy_if;
using wm::remove_copy_if;
using wm::fill;
using wm::fill_n;
using wm::generate;
using wm::for_each;
using wm::find;
using wm::find_if;
using wm::find_if_not;
using wm::find_first_of;
using wm::count;
using wm::count_if;
using wm::all_of;
using wm::any_of;
using wm::none_of;
using wm::transform;
using wm::distance;
using wm::equal;
using wm::mismatch;
using wm::is_permutation;
using wm::replace;
using wm::replace_if;
using wm::replace_copy;
using wm::replace_copy_if;
using wm::remove;
using wm::remove_if;
using wm::unique;
using wm::unique_copy;
using wm::reverse;
using wm::reverse_copy;
using wm::copy_backward;
using wm::move_backward;
using wm::rotate;
using wm::stable_partition;
using wm::swap_ranges;
using wm::lower_bound;
using wm::upper_bound;
using wm::equal_range;
using wm::binary_search;
using wm::is_sorted;
using wm::min_element;
using wm::max_element;
using wm::minmax_element;
using wm::lexicographical_compare;
using wm::set_difference;
using wm::set_intersection;
using wm::set_union;
using wm::set_symmetric_difference;
using wm::merge;
using wm::make_heap;
using wm::push_heap;
using wm::pop_heap;
using wm::sort_heap;
using wm::sort;
using wm::shuffle;
using wm::nth_element;
using wm::inplace_merge;
using wm::accumulate;
using wm::gcd;
using wm::lcm;
using wm::iota;
using wm::inner_product;
using wm::partial_sum;
using wm::construct_at;
using wm::destroy_at;
using wm::uninitialized_value_construct_n;
using wm::destroy_n;

using wm::exception;
using wm::runtime_error;
using wm::logic_error;
using wm::invalid_argument;
using wm::out_of_range;
using wm::exception_ptr;
using wm::current_exception;
using wm::rethrow_exception;
using wm::uncaught_exceptions;

using wm::memory_order;
using wm::memory_order_relaxed;
using wm::memory_order_consume;
using wm::memory_order_acquire;
using wm::memory_order_release;
using wm::memory_order_acq_rel;
using wm::memory_order_seq_cst;
using wm::atomic;
using wm::atomic_flag;
using wm::mutex;
using wm::once_flag;
using wm::call_once;
using wm::lock_guard;
using wm::scoped_lock;
using wm::unique_lock;
using wm::thread;
using wm::condition_variable;
using wm::cv_status;

using wm::future_status;
using wm::launch;
using wm::future;
using wm::shared_future;
using wm::promise;
using wm::packaged_task;
using wm::async;

using wm::regex;
using wm::regex_error;
using wm::regex_match_result;
using wm::sub_match;
using wm::match_results;
using wm::smatch;
using wm::sregex_iterator;
using wm::regex_search;
using wm::regex_match;

using wm::mt19937;
using wm::mt19937_64;
using wm::seed_seq;
using wm::random_device;
using wm::uniform_int_distribution;
using wm::uniform_real_distribution;
using wm::bernoulli_distribution;

using wm::numeric_limits;
using wm::errc;
using wm::from_chars_result;
using wm::to_chars_result;
using wm::from_chars;
using wm::to_chars;
using wm::stoi;
using wm::stoll;
using wm::stod;
using wm::stof;

inline string to_string(int value) { return string(wm::to_string(value)); }
inline string to_string(unsigned int value) { return string(wm::to_string(value)); }
inline string to_string(long value) { return string(wm::to_string(value)); }
inline string to_string(unsigned long value) { return string(wm::to_string(value)); }
inline string to_string(long long value) { return string(wm::to_string(value)); }
inline string to_string(unsigned long long value) { return string(wm::to_string(value)); }
inline string to_string(float value) { return string(wm::to_string(value)); }
inline string to_string(double value) { return string(wm::to_string(value)); }

namespace chrono = wm::chrono;
namespace this_thread = wm::this_thread;

namespace chrono_literals {
constexpr wm::chrono::milliseconds operator""ms(unsigned long long value) noexcept {
	return wm::chrono::milliseconds(static_cast<long long>(value));
}
}

namespace literals {
namespace string_literals {
inline string operator""s(const char* text, size_t size) {
	return string(text, size);
}
}
}

namespace string_literals {
using namespace literals::string_literals;
}

}

#endif
